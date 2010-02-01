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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001a920 };

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
0x76a2,	// (0x00021fc2) Screen

0x76b6,	// (0x00021fd6) application_window_ParamLimits

0x76b6,	// (0x00021fd6) application_window

0x76d0,	// (0x00021ff0) screen_g1

0x5c66,	// (0x00020586) area_bottom_pane_ParamLimits

0x5c66,	// (0x00020586) area_bottom_pane

0x5d26,	// (0x00020646) area_top_pane_ParamLimits

0x5d26,	// (0x00020646) area_top_pane

0x5dba,	// (0x000206da) main_pane_ParamLimits

0x5dba,	// (0x000206da) main_pane

0x76da,	// (0x00021ffa) misc_graphics

0x961a,	// (0x00023f3a) battery_pane_ParamLimits

0x961a,	// (0x00023f3a) battery_pane

0xa339,	// (0x00024c59) bg_status_flat_pane_g8

0xa341,	// (0x00024c61) bg_status_flat_pane_g9

0x96dc,	// (0x00023ffc) context_pane_ParamLimits

0x96dc,	// (0x00023ffc) context_pane

0x97fe,	// (0x0002411e) navi_pane_ParamLimits

0x97fe,	// (0x0002411e) navi_pane

0x987b,	// (0x0002419b) signal_pane_ParamLimits

0x987b,	// (0x0002419b) signal_pane

0x0008,

0xf88a,	// (0x0002a1aa) bg_status_flat_pane_g

0x98e8,	// (0x00024208) status_pane_g1_ParamLimits

0x98e8,	// (0x00024208) status_pane_g1

0x98fc,	// (0x0002421c) status_pane_g2_ParamLimits

0x98fc,	// (0x0002421c) status_pane_g2

0x9908,	// (0x00024228) status_pane_g3_ParamLimits

0x9908,	// (0x00024228) status_pane_g3

0x0004,

0xf7b8,	// (0x0002a0d8) status_pane_g_ParamLimits

0xf7b8,	// (0x0002a0d8) status_pane_g

0x993c,	// (0x0002425c) title_pane_ParamLimits

0x993c,	// (0x0002425c) title_pane

0x9979,	// (0x00024299) uni_indicator_pane_ParamLimits

0x9979,	// (0x00024299) uni_indicator_pane

0x8fab,	// (0x000238cb) bg_list_pane_ParamLimits

0x8fab,	// (0x000238cb) bg_list_pane

0x53dd,	// (0x0001fcfd) find_pane

0x8fcb,	// (0x000238eb) listscroll_app_pane_ParamLimits

0x8fcb,	// (0x000238eb) listscroll_app_pane

0x8fd7,	// (0x000238f7) listscroll_form_pane

0x53e5,	// (0x0001fd05) listscroll_gen_pane_ParamLimits

0x53e5,	// (0x0001fd05) listscroll_gen_pane

0x8fd7,	// (0x000238f7) listscroll_set_pane

0x8214,	// (0x00022b34) main_idle_act_pane

0x8c8b,	// (0x000235ab) main_idle_trad_pane

0x8c8b,	// (0x000235ab) main_list_empty_pane

0x8ff1,	// (0x00023911) main_midp_pane

0x8ffd,	// (0x0002391d) main_pane_g1_ParamLimits

0x8ffd,	// (0x0002391d) main_pane_g1

0x900b,	// (0x0002392b) popup_ai_message_window_ParamLimits

0x900b,	// (0x0002392b) popup_ai_message_window

0x90ad,	// (0x000239cd) popup_fep_china_uni_window_ParamLimits

0x90ad,	// (0x000239cd) popup_fep_china_uni_window

0x9109,	// (0x00023a29) popup_fep_japan_candidate_window_ParamLimits

0x9109,	// (0x00023a29) popup_fep_japan_candidate_window

0x9129,	// (0x00023a49) popup_fep_japan_predictive_window_ParamLimits

0x9129,	// (0x00023a49) popup_fep_japan_predictive_window

0x9159,	// (0x00023a79) popup_find_window

0x9166,	// (0x00023a86) popup_grid_graphic_window_ParamLimits

0x9166,	// (0x00023a86) popup_grid_graphic_window

0x918e,	// (0x00023aae) popup_large_graphic_colour_window

0x91b4,	// (0x00023ad4) popup_menu_window_ParamLimits

0x91b4,	// (0x00023ad4) popup_menu_window

0x936c,	// (0x00023c8c) popup_note_image_window

0x9358,	// (0x00023c78) popup_note_wait_window_ParamLimits

0x9358,	// (0x00023c78) popup_note_wait_window

0x9358,	// (0x00023c78) popup_note_window_ParamLimits

0x9358,	// (0x00023c78) popup_note_window

0x93c2,	// (0x00023ce2) popup_query_code_window_ParamLimits

0x93c2,	// (0x00023ce2) popup_query_code_window

0x93d6,	// (0x00023cf6) popup_query_data_code_window_ParamLimits

0x93d6,	// (0x00023cf6) popup_query_data_code_window

0x93f3,	// (0x00023d13) popup_query_data_window_ParamLimits

0x93f3,	// (0x00023d13) popup_query_data_window

0x940f,	// (0x00023d2f) popup_query_sat_info_window_ParamLimits

0x940f,	// (0x00023d2f) popup_query_sat_info_window

0x9448,	// (0x00023d68) popup_snote_single_graphic_window_ParamLimits

0x9448,	// (0x00023d68) popup_snote_single_graphic_window

0x9448,	// (0x00023d68) popup_snote_single_text_window_ParamLimits

0x9448,	// (0x00023d68) popup_snote_single_text_window

0x945d,	// (0x00023d7d) popup_sub_window_general

0x958d,	// (0x00023ead) popup_window_general_ParamLimits

0x958d,	// (0x00023ead) popup_window_general

0x95a2,	// (0x00023ec2) power_save_pane

0x6519,	// (0x00020e39) control_pane_g1_ParamLimits

0x6519,	// (0x00020e39) control_pane_g1

0x6540,	// (0x00020e60) control_pane_g2_ParamLimits

0x6540,	// (0x00020e60) control_pane_g2

0x8f54,	// (0x00023874) control_pane_g3_ParamLimits

0x8f54,	// (0x00023874) control_pane_g3

0x0007,

0xf7a0,	// (0x0002a0c0) control_pane_g_ParamLimits

0xf7a0,	// (0x0002a0c0) control_pane_g

0x6586,	// (0x00020ea6) control_pane_t1_ParamLimits

0x6586,	// (0x00020ea6) control_pane_t1

0x65d2,	// (0x00020ef2) control_pane_t2_ParamLimits

0x65d2,	// (0x00020ef2) control_pane_t2

0x0002,

0xf7b1,	// (0x0002a0d1) control_pane_t_ParamLimits

0xf7b1,	// (0x0002a0d1) control_pane_t

0x8e75,	// (0x00023795) navi_navi_volume_pane_cp1

0x8e7e,	// (0x0002379e) status_small_icon_pane

0x8e86,	// (0x000237a6) status_small_pane_g1_ParamLimits

0x8e86,	// (0x000237a6) status_small_pane_g1

0x8eba,	// (0x000237da) status_small_pane_g2_ParamLimits

0x8eba,	// (0x000237da) status_small_pane_g2

0x8ec6,	// (0x000237e6) status_small_pane_g3_ParamLimits

0x8ec6,	// (0x000237e6) status_small_pane_g3

0x8ed2,	// (0x000237f2) status_small_pane_g4_ParamLimits

0x8ed2,	// (0x000237f2) status_small_pane_g4

0x8ede,	// (0x000237fe) status_small_pane_g5_ParamLimits

0x8ede,	// (0x000237fe) status_small_pane_g5

0x8eed,	// (0x0002380d) status_small_pane_g6_ParamLimits

0x8eed,	// (0x0002380d) status_small_pane_g6

0x0007,

0xf78f,	// (0x0002a0af) status_small_pane_g_ParamLimits

0xf78f,	// (0x0002a0af) status_small_pane_g

0x8f1d,	// (0x0002383d) status_small_pane_t1

0x8f40,	// (0x00023860) status_small_wait_pane_ParamLimits

0x8f40,	// (0x00023860) status_small_wait_pane

0x870c,	// (0x0002302c) aid_levels_signal_ParamLimits

0x870c,	// (0x0002302c) aid_levels_signal

0x871e,	// (0x0002303e) signal_pane_g1_ParamLimits

0x871e,	// (0x0002303e) signal_pane_g1

0x8733,	// (0x00023053) signal_pane_g2_ParamLimits

0x8733,	// (0x00023053) signal_pane_g2

0x0001,

0xf724,	// (0x0002a044) signal_pane_g_ParamLimits

0xf724,	// (0x0002a044) signal_pane_g

0x8748,	// (0x00023068) context_pane_g1

0x76e4,	// (0x00022004) title_pane_g1

0x771a,	// (0x0002203a) title_pane_t1

0x7782,	// (0x000220a2) title_pane_t2

0x77a8,	// (0x000220c8) title_pane_t3

0x0002,

0xf573,	// (0x00029e93) title_pane_t

0x9991,	// (0x000242b1) aid_levels_battery_ParamLimits

0x9991,	// (0x000242b1) aid_levels_battery

0x99a5,	// (0x000242c5) battery_pane_g1_ParamLimits

0x99a5,	// (0x000242c5) battery_pane_g1

0x99bb,	// (0x000242db) battery_pane_g2_ParamLimits

0x99bb,	// (0x000242db) battery_pane_g2

0x0001,

0xf7c3,	// (0x0002a0e3) battery_pane_g_ParamLimits

0xf7c3,	// (0x0002a0e3) battery_pane_g

0xac81,	// (0x000255a1) uni_indicator_pane_g1

0xac96,	// (0x000255b6) uni_indicator_pane_g2

0xacac,	// (0x000255cc) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x0002a252) uni_indicator_pane_g

0x8afd,	// (0x0002341d) navi_icon_pane_ParamLimits

0x8afd,	// (0x0002341d) navi_icon_pane

0x8a46,	// (0x00023366) navi_midp_pane

0x8b19,	// (0x00023439) navi_navi_pane

0x8b23,	// (0x00023443) navi_text_pane_ParamLimits

0x8b23,	// (0x00023443) navi_text_pane

0x76d0,	// (0x00021ff0) status_small_wait_pane_g1

0x7bd7,	// (0x000224f7) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x0002a24d) status_small_wait_pane_g

0xa9a6,	// (0x000252c6) navi_navi_icon_text_pane

0xa9ae,	// (0x000252ce) navi_navi_pane_g1_ParamLimits

0xa9ae,	// (0x000252ce) navi_navi_pane_g1

0xa9c0,	// (0x000252e0) navi_navi_pane_g2_ParamLimits

0xa9c0,	// (0x000252e0) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x0002a21b) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x0002a21b) navi_navi_pane_g

0xa9d2,	// (0x000252f2) navi_navi_tabs_pane

0xa9db,	// (0x000252fb) navi_navi_text_pane

0xa9a6,	// (0x000252c6) navi_navi_volume_pane

0xa97f,	// (0x0002529f) navi_text_pane_t1

0xa970,	// (0x00025290) navi_icon_pane_g1

0xa8c3,	// (0x000251e3) navi_navi_text_pane_t1

0x68de,	// (0x000211fe) navi_navi_volume_pane_g1

0x68e6,	// (0x00021206) volume_small_pane

0xa829,	// (0x00025149) navi_navi_icon_text_pane_g1

0xa831,	// (0x00025151) navi_navi_icon_text_pane_t1

0x8b19,	// (0x00023439) navi_tabs_2_long_pane

0x8b19,	// (0x00023439) navi_tabs_2_pane

0x8b19,	// (0x00023439) navi_tabs_3_long_pane

0x8b19,	// (0x00023439) navi_tabs_3_pane

0x8b19,	// (0x00023439) navi_tabs_4_pane

0x68be,	// (0x000211de) tabs_2_active_pane_ParamLimits

0x68be,	// (0x000211de) tabs_2_active_pane

0x68ce,	// (0x000211ee) tabs_2_passive_pane_ParamLimits

0x68ce,	// (0x000211ee) tabs_2_passive_pane

0x688c,	// (0x000211ac) tabs_3_active_pane_ParamLimits

0x688c,	// (0x000211ac) tabs_3_active_pane

0x689c,	// (0x000211bc) tabs_3_passive_pane_ParamLimits

0x689c,	// (0x000211bc) tabs_3_passive_pane

0x68ad,	// (0x000211cd) tabs_3_passive_pane_cp_ParamLimits

0x68ad,	// (0x000211cd) tabs_3_passive_pane_cp

0x6848,	// (0x00021168) tabs_4_active_pane_ParamLimits

0x6848,	// (0x00021168) tabs_4_active_pane

0x6859,	// (0x00021179) tabs_4_passive_pane_ParamLimits

0x6859,	// (0x00021179) tabs_4_passive_pane

0x686a,	// (0x0002118a) tabs_4_passive_pane_cp_ParamLimits

0x686a,	// (0x0002118a) tabs_4_passive_pane_cp

0x687b,	// (0x0002119b) tabs_4_passive_pane_cp2_ParamLimits

0x687b,	// (0x0002119b) tabs_4_passive_pane_cp2

0x6824,	// (0x00021144) tabs_2_long_active_pane_ParamLimits

0x6824,	// (0x00021144) tabs_2_long_active_pane

0x6836,	// (0x00021156) tabs_2_long_passive_pane_ParamLimits

0x6836,	// (0x00021156) tabs_2_long_passive_pane

0x67e5,	// (0x00021105) tabs_3_long_active_pane_ParamLimits

0x67e5,	// (0x00021105) tabs_3_long_active_pane

0x67f8,	// (0x00021118) tabs_3_long_passive_pane_ParamLimits

0x67f8,	// (0x00021118) tabs_3_long_passive_pane

0x6811,	// (0x00021131) tabs_3_long_passive_pane_cp_ParamLimits

0x6811,	// (0x00021131) tabs_3_long_passive_pane_cp

0x678b,	// (0x000210ab) volume_small_pane_g1

0x6794,	// (0x000210b4) volume_small_pane_g2

0x679d,	// (0x000210bd) volume_small_pane_g3

0x67a6,	// (0x000210c6) volume_small_pane_g4

0x67af,	// (0x000210cf) volume_small_pane_g5

0x67b8,	// (0x000210d8) volume_small_pane_g6

0x67c1,	// (0x000210e1) volume_small_pane_g7

0x67ca,	// (0x000210ea) volume_small_pane_g8

0x67d3,	// (0x000210f3) volume_small_pane_g9

0x67dc,	// (0x000210fc) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x0002a1e7) volume_small_pane_g

0x77ba,	// (0x000220da) bg_active_tab_pane_cp2_ParamLimits

0x77ba,	// (0x000220da) bg_active_tab_pane_cp2

0x77c8,	// (0x000220e8) tabs_3_active_pane_g1

0x77d0,	// (0x000220f0) tabs_3_active_pane_t1

0x77ba,	// (0x000220da) bg_passive_tab_pane_cp2_ParamLimits

0x77ba,	// (0x000220da) bg_passive_tab_pane_cp2

0x77c8,	// (0x000220e8) tabs_3_passive_pane_g1

0x77d0,	// (0x000220f0) tabs_3_passive_pane_t1

0x77ba,	// (0x000220da) bg_active_tab_pane_cp3_ParamLimits

0x77ba,	// (0x000220da) bg_active_tab_pane_cp3

0x77e2,	// (0x00022102) tabs_4_active_pane_g1

0x77ea,	// (0x0002210a) tabs_4_active_pane_t1

0x77ba,	// (0x000220da) bg_passive_tab_pane_cp3_ParamLimits

0x77ba,	// (0x000220da) bg_passive_tab_pane_cp3

0x77e2,	// (0x00022102) tabs_4_1_passive_pane_g1

0x77ea,	// (0x0002210a) tabs_4_1_passive_pane_t1

0x8ff1,	// (0x00023911) list_highlight_pane_cp2

0xaf0a,	// (0x0002582a) list_set_pane_ParamLimits

0xaf0a,	// (0x0002582a) list_set_pane

0xafb0,	// (0x000258d0) main_pane_set_t1_ParamLimits

0xafb0,	// (0x000258d0) main_pane_set_t1

0xafd0,	// (0x000258f0) main_pane_set_t2_ParamLimits

0xafd0,	// (0x000258f0) main_pane_set_t2

0xafe4,	// (0x00025904) main_pane_set_t3_ParamLimits

0xafe4,	// (0x00025904) main_pane_set_t3

0xaff6,	// (0x00025916) main_pane_set_t4_ParamLimits

0xaff6,	// (0x00025916) main_pane_set_t4

0x0003,

0xf997,	// (0x0002a2b7) main_pane_set_t_ParamLimits

0xf997,	// (0x0002a2b7) main_pane_set_t

0xb008,	// (0x00025928) setting_code_pane

0xb014,	// (0x00025934) setting_slider_graphic_pane

0xb014,	// (0x00025934) setting_slider_pane

0xb014,	// (0x00025934) setting_text_pane

0xb014,	// (0x00025934) setting_volume_pane

0x5fff,	// (0x0002091f) volume_set_pane

0x77ba,	// (0x000220da) bg_set_opt_pane_cp

0x6007,	// (0x00020927) setting_slider_pane_t1

0x6020,	// (0x00020940) setting_slider_pane_t2

0x603a,	// (0x0002095a) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00029e9a) setting_slider_pane_t

0x6052,	// (0x00020972) slider_set_pane

0x76da,	// (0x00021ffa) bg_set_opt_pane_cp2

0x77fc,	// (0x0002211c) setting_slider_graphic_pane_g1

0x6068,	// (0x00020988) setting_slider_graphic_pane_t1

0x6078,	// (0x00020998) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00029ea1) setting_slider_graphic_pane_t

0x6088,	// (0x000209a8) slider_set_pane_cp

0x76da,	// (0x00021ffa) input_focus_pane_cp1

0xaec9,	// (0x000257e9) list_set_text_pane

0x76d0,	// (0x00021ff0) setting_text_pane_g1

0x76da,	// (0x00021ffa) input_focus_pane_cp2

0x76d0,	// (0x00021ff0) setting_code_pane_g1

0x7805,	// (0x00022125) setting_code_pane_t1

0x4c0a,	// (0x0001f52a) set_text_pane_t1_ParamLimits

0x4c0a,	// (0x0001f52a) set_text_pane_t1

0x808d,	// (0x000229ad) set_opt_bg_pane_g1

0x8095,	// (0x000229b5) set_opt_bg_pane_g2

0xaea3,	// (0x000257c3) set_opt_bg_pane_g3

0x80a5,	// (0x000229c5) set_opt_bg_pane_g4

0x80ad,	// (0x000229cd) set_opt_bg_pane_g5

0x80b5,	// (0x000229d5) set_opt_bg_pane_g6

0xaead,	// (0x000257cd) set_opt_bg_pane_g7

0xaeb5,	// (0x000257d5) set_opt_bg_pane_g8

0xaebf,	// (0x000257df) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x0002a2a4) set_opt_bg_pane_g

0xae96,	// (0x000257b6) slider_set_pane_g1

0x6953,	// (0x00021273) slider_set_pane_g2

0x0006,

0xf975,	// (0x0002a295) slider_set_pane_g

0x68ef,	// (0x0002120f) volume_set_pane_g1

0x68f7,	// (0x00021217) volume_set_pane_g2

0x68ff,	// (0x0002121f) volume_set_pane_g3

0x6907,	// (0x00021227) volume_set_pane_g4

0x690f,	// (0x0002122f) volume_set_pane_g5

0x6917,	// (0x00021237) volume_set_pane_g6

0x691f,	// (0x0002123f) volume_set_pane_g7

0x6927,	// (0x00021247) volume_set_pane_g8

0x692f,	// (0x0002124f) volume_set_pane_g9

0x6937,	// (0x00021257) volume_set_pane_g10

0x0009,

0xf94d,	// (0x0002a26d) volume_set_pane_g

0x7813,	// (0x00022133) indicator_pane_ParamLimits

0x7813,	// (0x00022133) indicator_pane

0x781f,	// (0x0002213f) main_idle_pane_g2_ParamLimits

0x781f,	// (0x0002213f) main_idle_pane_g2

0x7847,	// (0x00022167) main_pane_idle_g1_ParamLimits

0x7847,	// (0x00022167) main_pane_idle_g1

0x7854,	// (0x00022174) popup_clock_digital_analogue_window_ParamLimits

0x7854,	// (0x00022174) popup_clock_digital_analogue_window

0x786b,	// (0x0002218b) soft_indicator_pane_ParamLimits

0x786b,	// (0x0002218b) soft_indicator_pane

0x7877,	// (0x00022197) wallpaper_pane_ParamLimits

0x7877,	// (0x00022197) wallpaper_pane

0x76d0,	// (0x00021ff0) wallpaper_pane_g1

0x788b,	// (0x000221ab) indicator_pane_g1_ParamLimits

0x788b,	// (0x000221ab) indicator_pane_g1

0xb299,	// (0x00025bb9) navi_navi_icon_text_pane_srt_g1

0x78a6,	// (0x000221c6) soft_indicator_pane_t1

0x78c0,	// (0x000221e0) aid_ps_area_pane

0x78d1,	// (0x000221f1) aid_ps_clock_pane

0x78df,	// (0x000221ff) aid_ps_indicator_pane

0x78eb,	// (0x0002220b) indicator_ps_pane_ParamLimits

0x78eb,	// (0x0002220b) indicator_ps_pane

0x78fa,	// (0x0002221a) power_save_pane_g1_ParamLimits

0x78fa,	// (0x0002221a) power_save_pane_g1

0x7906,	// (0x00022226) power_save_pane_g2_ParamLimits

0x7906,	// (0x00022226) power_save_pane_g2

0x5c1a,	// (0x0002053a) aid_navinavi_width_pane

0x78c0,	// (0x000221e0) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00029ea6) power_save_pane_g_ParamLimits

0xf586,	// (0x00029ea6) power_save_pane_g

0x7914,	// (0x00022234) power_save_pane_t1_ParamLimits

0x7914,	// (0x00022234) power_save_pane_t1

0x78d1,	// (0x000221f1) aid_ps_clock_pane_ParamLimits

0x78df,	// (0x000221ff) aid_ps_indicator_pane_ParamLimits

0x7926,	// (0x00022246) power_save_pane_t4_ParamLimits

0x7926,	// (0x00022246) power_save_pane_t4

0x0001,

0xf58b,	// (0x00029eab) power_save_pane_t_ParamLimits

0xf58b,	// (0x00029eab) power_save_pane_t

0x7950,	// (0x00022270) power_save_t3_ParamLimits

0x7950,	// (0x00022270) power_save_t3

0x793b,	// (0x0002225b) power_save_t2_ParamLimits

0x793b,	// (0x0002225b) power_save_t2

0x7965,	// (0x00022285) indicator_ps_pane_g1

0x796e,	// (0x0002228e) ai_gene_pane_ParamLimits

0x796e,	// (0x0002228e) ai_gene_pane

0x797a,	// (0x0002229a) ai_links_pane_ParamLimits

0x797a,	// (0x0002229a) ai_links_pane

0x7986,	// (0x000222a6) indicator_pane_cp1_ParamLimits

0x7986,	// (0x000222a6) indicator_pane_cp1

0x7992,	// (0x000222b2) main_pane_idle_g1_cp_ParamLimits

0x7992,	// (0x000222b2) main_pane_idle_g1_cp

0x799e,	// (0x000222be) popup_ai_links_title_window

0x79a7,	// (0x000222c7) soft_indicator_pane_cp1_ParamLimits

0x79a7,	// (0x000222c7) soft_indicator_pane_cp1

0xac6f,	// (0x0002558f) ai_links_pane_g1

0xac78,	// (0x00025598) grid_ai_links_pane

0xac52,	// (0x00025572) ai_gene_pane_1

0xac5d,	// (0x0002557d) ai_gene_pane_2

0xac66,	// (0x00025586) list_highlight_pane_cp4

0xac36,	// (0x00025556) cell_ai_link_pane_ParamLimits

0xac36,	// (0x00025556) cell_ai_link_pane

0xac2e,	// (0x0002554e) cell_ai_link_pane_g1

0x7bd7,	// (0x000224f7) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x0002a248) cell_ai_link_pane_g

0x76da,	// (0x00021ffa) grid_highlight_cp2

0x76da,	// (0x00021ffa) bg_popup_sub_pane_cp1

0x79c1,	// (0x000222e1) popup_ai_links_title_window_t1

0xab7c,	// (0x0002549c) ai_gene_pane_1_g1_ParamLimits

0xab7c,	// (0x0002549c) ai_gene_pane_1_g1

0xab88,	// (0x000254a8) ai_gene_pane_1_g2_ParamLimits

0xab88,	// (0x000254a8) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x0002a23e) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x0002a23e) ai_gene_pane_1_g

0xab95,	// (0x000254b5) ai_gene_pane_1_t1_ParamLimits

0xab95,	// (0x000254b5) ai_gene_pane_1_t1

0xabc9,	// (0x000254e9) grid_ai_soft_ind_pane

0xab67,	// (0x00025487) ai_gene_pane_2_t1_ParamLimits

0xab67,	// (0x00025487) ai_gene_pane_2_t1

0x79d0,	// (0x000222f0) main_pane_empty_t1_ParamLimits

0x79d0,	// (0x000222f0) main_pane_empty_t1

0x79e8,	// (0x00022308) main_pane_empty_t2_ParamLimits

0x79e8,	// (0x00022308) main_pane_empty_t2

0x79fd,	// (0x0002231d) main_pane_empty_t3_ParamLimits

0x79fd,	// (0x0002231d) main_pane_empty_t3

0x7a0f,	// (0x0002232f) main_pane_empty_t4_ParamLimits

0x7a0f,	// (0x0002232f) main_pane_empty_t4

0x7a21,	// (0x00022341) main_pane_empty_t5_ParamLimits

0x7a21,	// (0x00022341) main_pane_empty_t5

0x0004,

0xf590,	// (0x00029eb0) main_pane_empty_t_ParamLimits

0xf590,	// (0x00029eb0) main_pane_empty_t

0x80de,	// (0x000229fe) bg_popup_window_pane_ParamLimits

0x80de,	// (0x000229fe) bg_popup_window_pane

0xa8d1,	// (0x000251f1) find_popup_pane_cp2_ParamLimits

0xa8d1,	// (0x000251f1) find_popup_pane_cp2

0xa8dd,	// (0x000251fd) heading_pane_ParamLimits

0xa8dd,	// (0x000251fd) heading_pane

0x76da,	// (0x00021ffa) bg_popup_sub_pane

0xa84b,	// (0x0002516b) bg_popup_window_pane_g1_ParamLimits

0xa84b,	// (0x0002516b) bg_popup_window_pane_g1

0xa857,	// (0x00025177) bg_popup_window_pane_g2_ParamLimits

0xa857,	// (0x00025177) bg_popup_window_pane_g2

0xa863,	// (0x00025183) bg_popup_window_pane_g3_ParamLimits

0xa863,	// (0x00025183) bg_popup_window_pane_g3

0xa86f,	// (0x0002518f) bg_popup_window_pane_g4_ParamLimits

0xa86f,	// (0x0002518f) bg_popup_window_pane_g4

0xa87b,	// (0x0002519b) bg_popup_window_pane_g5_ParamLimits

0xa87b,	// (0x0002519b) bg_popup_window_pane_g5

0xa887,	// (0x000251a7) bg_popup_window_pane_g6_ParamLimits

0xa887,	// (0x000251a7) bg_popup_window_pane_g6

0xa893,	// (0x000251b3) bg_popup_window_pane_g7_ParamLimits

0xa893,	// (0x000251b3) bg_popup_window_pane_g7

0xa89f,	// (0x000251bf) bg_popup_window_pane_g8_ParamLimits

0xa89f,	// (0x000251bf) bg_popup_window_pane_g8

0xa8ab,	// (0x000251cb) bg_popup_window_pane_g9_ParamLimits

0xa8ab,	// (0x000251cb) bg_popup_window_pane_g9

0xa8b7,	// (0x000251d7) bg_popup_window_pane_g10_ParamLimits

0xa8b7,	// (0x000251d7) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x0002a206) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x0002a206) bg_popup_window_pane_g

0xa7e0,	// (0x00025100) bg_popup_heading_pane_ParamLimits

0xa7e0,	// (0x00025100) bg_popup_heading_pane

0x69db,	// (0x000212fb) tabs_4_passive_pane_cp_srt_ParamLimits

0x69db,	// (0x000212fb) tabs_4_passive_pane_cp_srt

0x69ed,	// (0x0002130d) tabs_4_passive_pane_srt_ParamLimits

0xa7f4,	// (0x00025114) heading_pane_g2

0x69ed,	// (0x0002130d) tabs_4_passive_pane_srt

0x8ff1,	// (0x00023911) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8ff1,	// (0x00023911) bg_passive_tab_pane_cp3_srt

0xa7fc,	// (0x0002511c) heading_pane_t1_ParamLimits

0xa7fc,	// (0x0002511c) heading_pane_t1

0xa813,	// (0x00025133) heading_pane_t2_ParamLimits

0xa813,	// (0x00025133) heading_pane_t2

0x0001,

0xf8e1,	// (0x0002a201) heading_pane_t_ParamLimits

0xf8e1,	// (0x0002a201) heading_pane_t

0xa301,	// (0x00024c21) bg_popup_heading_pane_g1

0xa3b0,	// (0x00024cd0) bg_popup_heading_pane_g2

0xa3ba,	// (0x00024cda) bg_popup_heading_pane_g3

0xa3c4,	// (0x00024ce4) bg_popup_heading_pane_g4

0xa3ce,	// (0x00024cee) bg_popup_heading_pane_g5

0xa3d8,	// (0x00024cf8) bg_popup_heading_pane_g6

0xa3e0,	// (0x00024d00) bg_popup_heading_pane_g7

0xa3e8,	// (0x00024d08) bg_popup_heading_pane_g8

0xa3f2,	// (0x00024d12) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x0002a1bd) bg_popup_heading_pane_g

0x9a93,	// (0x000243b3) bg_popup_sub_pane_g1

0x9a9b,	// (0x000243bb) bg_popup_sub_pane_g2

0x9aa3,	// (0x000243c3) bg_popup_sub_pane_g3

0x9aab,	// (0x000243cb) bg_popup_sub_pane_g4

0x9ab3,	// (0x000243d3) bg_popup_sub_pane_g5

0x9abb,	// (0x000243db) bg_popup_sub_pane_g6

0x9ac3,	// (0x000243e3) bg_popup_sub_pane_g7

0x9acb,	// (0x000243eb) bg_popup_sub_pane_g8

0x9ad3,	// (0x000243f3) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x0002a197) bg_popup_sub_pane_g

0x7a35,	// (0x00022355) bg_popup_window_pane_cp5_ParamLimits

0x7a35,	// (0x00022355) bg_popup_window_pane_cp5

0x7a51,	// (0x00022371) popup_note_window_g1_ParamLimits

0x7a51,	// (0x00022371) popup_note_window_g1

0x7a5d,	// (0x0002237d) popup_note_window_t1_ParamLimits

0x7a5d,	// (0x0002237d) popup_note_window_t1

0x7a73,	// (0x00022393) popup_note_window_t2_ParamLimits

0x7a73,	// (0x00022393) popup_note_window_t2

0x7a89,	// (0x000223a9) popup_note_window_t3_ParamLimits

0x7a89,	// (0x000223a9) popup_note_window_t3

0x7a9f,	// (0x000223bf) popup_note_window_t4_ParamLimits

0x7a9f,	// (0x000223bf) popup_note_window_t4

0x7ac7,	// (0x000223e7) popup_note_window_t5_ParamLimits

0x7ac7,	// (0x000223e7) popup_note_window_t5

0x0004,

0xf59b,	// (0x00029ebb) popup_note_window_t_ParamLimits

0xf59b,	// (0x00029ebb) popup_note_window_t

0x7aeb,	// (0x0002240b) bg_popup_window_pane_cp6_ParamLimits

0x7aeb,	// (0x0002240b) bg_popup_window_pane_cp6

0xa27d,	// (0x00024b9d) popup_note_image_window_g1_ParamLimits

0xa27d,	// (0x00024b9d) popup_note_image_window_g1

0xa289,	// (0x00024ba9) popup_note_image_window_g2_ParamLimits

0xa289,	// (0x00024ba9) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x0002a18b) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x0002a18b) popup_note_image_window_g

0xa2a2,	// (0x00024bc2) popup_note_image_window_t1_ParamLimits

0xa2a2,	// (0x00024bc2) popup_note_image_window_t1

0xa2bb,	// (0x00024bdb) popup_note_image_window_t2_ParamLimits

0xa2bb,	// (0x00024bdb) popup_note_image_window_t2

0xa2d4,	// (0x00024bf4) popup_note_image_window_t3_ParamLimits

0xa2d4,	// (0x00024bf4) popup_note_image_window_t3

0x0002,

0xf870,	// (0x0002a190) popup_note_image_window_t_ParamLimits

0xf870,	// (0x0002a190) popup_note_image_window_t

0xa13e,	// (0x00024a5e) bg_popup_window_pane_cp7_ParamLimits

0xa13e,	// (0x00024a5e) bg_popup_window_pane_cp7

0xa16e,	// (0x00024a8e) popup_note_wait_window_g1_ParamLimits

0xa16e,	// (0x00024a8e) popup_note_wait_window_g1

0xa17a,	// (0x00024a9a) popup_note_wait_window_g2_ParamLimits

0xa17a,	// (0x00024a9a) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x0002a179) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x0002a179) popup_note_wait_window_g

0xa192,	// (0x00024ab2) popup_note_wait_window_t1_ParamLimits

0xa192,	// (0x00024ab2) popup_note_wait_window_t1

0xa1b9,	// (0x00024ad9) popup_note_wait_window_t2_ParamLimits

0xa1b9,	// (0x00024ad9) popup_note_wait_window_t2

0xa1d6,	// (0x00024af6) popup_note_wait_window_t3_ParamLimits

0xa1d6,	// (0x00024af6) popup_note_wait_window_t3

0xa1e9,	// (0x00024b09) popup_note_wait_window_t4_ParamLimits

0xa1e9,	// (0x00024b09) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x0002a180) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x0002a180) popup_note_wait_window_t

0xa20e,	// (0x00024b2e) wait_bar_pane_ParamLimits

0xa20e,	// (0x00024b2e) wait_bar_pane

0x76da,	// (0x00021ffa) wait_anim_pane

0x76da,	// (0x00021ffa) wait_border_pane

0x76d0,	// (0x00021ff0) wait_anim_pane_g1

0x76d0,	// (0x00021ff0) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x0002a03f) wait_anim_pane_g

0xa0e2,	// (0x00024a02) wait_border_pane_g1

0xa0ed,	// (0x00024a0d) wait_border_pane_g2

0xa0f6,	// (0x00024a16) wait_border_pane_g3

0x0002,

0xf852,	// (0x0002a172) wait_border_pane_g

0x9f4d,	// (0x0002486d) bg_popup_window_pane_cp16_ParamLimits

0x9f4d,	// (0x0002486d) bg_popup_window_pane_cp16

0xa04d,	// (0x0002496d) indicator_popup_pane_cp4_ParamLimits

0xa04d,	// (0x0002496d) indicator_popup_pane_cp4

0xa061,	// (0x00024981) popup_query_data_window_t1_ParamLimits

0xa061,	// (0x00024981) popup_query_data_window_t1

0xa073,	// (0x00024993) popup_query_data_window_t2_ParamLimits

0xa073,	// (0x00024993) popup_query_data_window_t2

0xa08c,	// (0x000249ac) popup_query_data_window_t3_ParamLimits

0xa08c,	// (0x000249ac) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x0002a16b) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x0002a16b) popup_query_data_window_t

0xa0a6,	// (0x000249c6) query_popup_data_pane_ParamLimits

0xa0a6,	// (0x000249c6) query_popup_data_pane

0xa0ba,	// (0x000249da) query_popup_data_pane_cp1_ParamLimits

0xa0ba,	// (0x000249da) query_popup_data_pane_cp1

0x9f4d,	// (0x0002486d) bg_popup_window_pane_cp10_ParamLimits

0x9f4d,	// (0x0002486d) bg_popup_window_pane_cp10

0x9f7f,	// (0x0002489f) indicator_popup_pane_ParamLimits

0x9f7f,	// (0x0002489f) indicator_popup_pane

0x9fa1,	// (0x000248c1) popup_query_code_window_t1_ParamLimits

0x9fa1,	// (0x000248c1) popup_query_code_window_t1

0x9fbb,	// (0x000248db) popup_query_code_window_t2_ParamLimits

0x9fbb,	// (0x000248db) popup_query_code_window_t2

0xa004,	// (0x00024924) popup_query_code_window_t3_ParamLimits

0xa004,	// (0x00024924) popup_query_code_window_t3

0x0002,

0xf844,	// (0x0002a164) popup_query_code_window_t_ParamLimits

0xf844,	// (0x0002a164) popup_query_code_window_t

0xa033,	// (0x00024953) query_popup_pane_ParamLimits

0xa033,	// (0x00024953) query_popup_pane

0x7aeb,	// (0x0002240b) bg_popup_window_pane_cp15_ParamLimits

0x7aeb,	// (0x0002240b) bg_popup_window_pane_cp15

0x7b09,	// (0x00022429) indicator_popup_pane_cp1_ParamLimits

0x7b09,	// (0x00022429) indicator_popup_pane_cp1

0x7b1c,	// (0x0002243c) indicator_popup_pane_cp2_ParamLimits

0x7b1c,	// (0x0002243c) indicator_popup_pane_cp2

0x7b2f,	// (0x0002244f) popup_query_data_code_window_g1_ParamLimits

0x7b2f,	// (0x0002244f) popup_query_data_code_window_g1

0x7b42,	// (0x00022462) popup_query_data_code_window_t1_ParamLimits

0x7b42,	// (0x00022462) popup_query_data_code_window_t1

0x7b54,	// (0x00022474) popup_query_data_code_window_t2_ParamLimits

0x7b54,	// (0x00022474) popup_query_data_code_window_t2

0x7b66,	// (0x00022486) popup_query_data_code_window_t3_ParamLimits

0x7b66,	// (0x00022486) popup_query_data_code_window_t3

0x7b7c,	// (0x0002249c) popup_query_data_code_window_t4_ParamLimits

0x7b7c,	// (0x0002249c) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00029ec6) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00029ec6) popup_query_data_code_window_t

0x66b4,	// (0x00020fd4) list_single_midp_graphic_pane_g3

0x7b94,	// (0x000224b4) query_popup_data_pane_cp2_ParamLimits

0x7ba7,	// (0x000224c7) query_popup_pane_cp2_ParamLimits

0x7ba7,	// (0x000224c7) query_popup_pane_cp2

0x76da,	// (0x00021ffa) bg_popup_window_pane_cp11

0x9f45,	// (0x00024865) heading_pane_cp5

0x7c8f,	// (0x000225af) listscroll_popup_info_pane

0x76da,	// (0x00021ffa) input_focus_pane_cp3

0x7bba,	// (0x000224da) query_popup_pane_t1

0x7bc8,	// (0x000224e8) list_popup_info_pane_ParamLimits

0x7bc8,	// (0x000224e8) list_popup_info_pane

0x7bd7,	// (0x000224f7) listscroll_popup_info_pane_g1

0x7bdf,	// (0x000224ff) scroll_pane_cp7

0x7be9,	// (0x00022509) popup_info_list_pane_t1_ParamLimits

0x7be9,	// (0x00022509) popup_info_list_pane_t1

0x7c03,	// (0x00022523) popup_info_list_pane_t2_ParamLimits

0x7c03,	// (0x00022523) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00029ecf) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00029ecf) popup_info_list_pane_t

0x76da,	// (0x00021ffa) bg_popup_window_pane_cp12

0xb2b3,	// (0x00025bd3) find_popup_pane

0x77ba,	// (0x000220da) bg_popup_window_pane_cp3

0x7c1d,	// (0x0002253d) heading_pane_cp3

0x7c29,	// (0x00022549) listscroll_popup_graphic_pane

0x76da,	// (0x00021ffa) bg_popup_window_pane_cp4

0x7c85,	// (0x000225a5) heading_pane_cp4

0x7c8f,	// (0x000225af) listscroll_popup_colour_pane

0x7c97,	// (0x000225b7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7c97,	// (0x000225b7) cell_large_graphic_colour_none_popup_pane

0x7cab,	// (0x000225cb) grid_large_graphic_colour_popup_pane_ParamLimits

0x7cab,	// (0x000225cb) grid_large_graphic_colour_popup_pane

0x7cd7,	// (0x000225f7) listscroll_popup_colour_pane_g1_ParamLimits

0x7cd7,	// (0x000225f7) listscroll_popup_colour_pane_g1

0x7cee,	// (0x0002260e) listscroll_popup_colour_pane_g2_ParamLimits

0x7cee,	// (0x0002260e) listscroll_popup_colour_pane_g2

0x7d05,	// (0x00022625) listscroll_popup_colour_pane_g3_ParamLimits

0x7d05,	// (0x00022625) listscroll_popup_colour_pane_g3

0x7d15,	// (0x00022635) listscroll_popup_colour_pane_g4_ParamLimits

0x7d15,	// (0x00022635) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00029ed4) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00029ed4) listscroll_popup_colour_pane_g

0x7d29,	// (0x00022649) scroll_pane_cp6_ParamLimits

0x7d29,	// (0x00022649) scroll_pane_cp6

0x7d3b,	// (0x0002265b) cell_large_graphic_colour_popup_pane_ParamLimits

0x7d3b,	// (0x0002265b) cell_large_graphic_colour_popup_pane

0x7d5a,	// (0x0002267a) cell_large_graphic_colour_none_popup_pane_t1

0x76da,	// (0x00021ffa) grid_highlight_pane_cp5

0x7d69,	// (0x00022689) cell_large_graphic_colour_popup_pane_g1

0x7d71,	// (0x00022691) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00029edd) cell_large_graphic_colour_popup_pane_g

0x7d79,	// (0x00022699) cell_large_graphic_colour_popup_pane_g2_copy1

0x7d82,	// (0x000226a2) grid_highlight_pane_cp4

0x7d8a,	// (0x000226aa) bg_popup_window_pane_cp8_ParamLimits

0x7d8a,	// (0x000226aa) bg_popup_window_pane_cp8

0x7da5,	// (0x000226c5) popup_snote_single_text_window_g1_ParamLimits

0x7da5,	// (0x000226c5) popup_snote_single_text_window_g1

0x7db7,	// (0x000226d7) popup_snote_single_text_window_t1_ParamLimits

0x7db7,	// (0x000226d7) popup_snote_single_text_window_t1

0x7dca,	// (0x000226ea) popup_snote_single_text_window_t2_ParamLimits

0x7dca,	// (0x000226ea) popup_snote_single_text_window_t2

0x7ddd,	// (0x000226fd) popup_snote_single_text_window_t3_ParamLimits

0x7ddd,	// (0x000226fd) popup_snote_single_text_window_t3

0x7e16,	// (0x00022736) popup_snote_single_text_window_t4_ParamLimits

0x7e16,	// (0x00022736) popup_snote_single_text_window_t4

0x7e4a,	// (0x0002276a) popup_snote_single_text_window_t5_ParamLimits

0x7e4a,	// (0x0002276a) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00029ee2) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00029ee2) popup_snote_single_text_window_t

0x7e79,	// (0x00022799) bg_popup_window_pane_cp9_ParamLimits

0x7e79,	// (0x00022799) bg_popup_window_pane_cp9

0x7da5,	// (0x000226c5) popup_snote_single_graphic_window_g1_ParamLimits

0x7da5,	// (0x000226c5) popup_snote_single_graphic_window_g1

0x7e87,	// (0x000227a7) popup_snote_single_graphic_window_g2_ParamLimits

0x7e87,	// (0x000227a7) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00029eed) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00029eed) popup_snote_single_graphic_window_g

0x7e93,	// (0x000227b3) popup_snote_single_graphic_window_t1_ParamLimits

0x7e93,	// (0x000227b3) popup_snote_single_graphic_window_t1

0x7ea6,	// (0x000227c6) popup_snote_single_graphic_window_t2_ParamLimits

0x7ea6,	// (0x000227c6) popup_snote_single_graphic_window_t2

0x7eb9,	// (0x000227d9) popup_snote_single_graphic_window_t3_ParamLimits

0x7eb9,	// (0x000227d9) popup_snote_single_graphic_window_t3

0x7ef2,	// (0x00022812) popup_snote_single_graphic_window_t4_ParamLimits

0x7ef2,	// (0x00022812) popup_snote_single_graphic_window_t4

0x7f26,	// (0x00022846) popup_snote_single_graphic_window_t5_ParamLimits

0x7f26,	// (0x00022846) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00029ef2) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00029ef2) popup_snote_single_graphic_window_t

0xb1f7,	// (0x00025b17) grid_graphic_popup_pane_ParamLimits

0xb1f7,	// (0x00025b17) grid_graphic_popup_pane

0xb21f,	// (0x00025b3f) listscroll_popup_graphic_pane_g1_ParamLimits

0xb21f,	// (0x00025b3f) listscroll_popup_graphic_pane_g1

0xb233,	// (0x00025b53) listscroll_popup_graphic_pane_g2_ParamLimits

0xb233,	// (0x00025b53) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x0002a2e1) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x0002a2e1) listscroll_popup_graphic_pane_g

0xb247,	// (0x00025b67) scroll_pane_cp5

0xb1a0,	// (0x00025ac0) cell_graphic_popup_pane_ParamLimits

0xb1a0,	// (0x00025ac0) cell_graphic_popup_pane

0xb181,	// (0x00025aa1) cell_graphic_popup_pane_g1

0xb189,	// (0x00025aa9) cell_graphic_popup_pane_g2

0x7d79,	// (0x00022699) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x0002a2da) cell_graphic_popup_pane_g

0xb192,	// (0x00025ab2) cell_graphic_popup_pane_t2

0x7d82,	// (0x000226a2) grid_highlight_pane_cp3

0x7f67,	// (0x00022887) list_gen_pane_ParamLimits

0x7f67,	// (0x00022887) list_gen_pane

0x7f99,	// (0x000228b9) scroll_pane

0xb0e3,	// (0x00025a03) bg_list_pane_g1_ParamLimits

0xb0e3,	// (0x00025a03) bg_list_pane_g1

0xb0fe,	// (0x00025a1e) bg_list_pane_g2_ParamLimits

0xb0fe,	// (0x00025a1e) bg_list_pane_g2

0xb111,	// (0x00025a31) bg_list_pane_g3_ParamLimits

0xb111,	// (0x00025a31) bg_list_pane_g3

0xb123,	// (0x00025a43) bg_list_pane_g4_ParamLimits

0xb123,	// (0x00025a43) bg_list_pane_g4

0xb135,	// (0x00025a55) bg_list_pane_g5_ParamLimits

0xb135,	// (0x00025a55) bg_list_pane_g5

0x0004,

0xf9af,	// (0x0002a2cf) bg_list_pane_g_ParamLimits

0xf9af,	// (0x0002a2cf) bg_list_pane_g

0xb09a,	// (0x000259ba) list_double2_graphic_large_graphic_pane_ParamLimits

0xb09a,	// (0x000259ba) list_double2_graphic_large_graphic_pane

0xb09a,	// (0x000259ba) list_double2_graphic_pane_ParamLimits

0xb09a,	// (0x000259ba) list_double2_graphic_pane

0xb09a,	// (0x000259ba) list_double2_large_graphic_pane_ParamLimits

0xb09a,	// (0x000259ba) list_double2_large_graphic_pane

0x5572,	// (0x0001fe92) list_double2_pane_ParamLimits

0x5572,	// (0x0001fe92) list_double2_pane

0xb09a,	// (0x000259ba) list_double_graphic_heading_pane_ParamLimits

0xb09a,	// (0x000259ba) list_double_graphic_heading_pane

0xb09a,	// (0x000259ba) list_double_graphic_pane_ParamLimits

0xb09a,	// (0x000259ba) list_double_graphic_pane

0xb09a,	// (0x000259ba) list_double_heading_pane_ParamLimits

0xb09a,	// (0x000259ba) list_double_heading_pane

0xb09a,	// (0x000259ba) list_double_large_graphic_pane_ParamLimits

0xb09a,	// (0x000259ba) list_double_large_graphic_pane

0xb09a,	// (0x000259ba) list_double_number_pane_ParamLimits

0xb09a,	// (0x000259ba) list_double_number_pane

0xb09a,	// (0x000259ba) list_double_pane_ParamLimits

0xb09a,	// (0x000259ba) list_double_pane

0xb09a,	// (0x000259ba) list_double_time_pane_ParamLimits

0xb09a,	// (0x000259ba) list_double_time_pane

0xb09a,	// (0x000259ba) list_setting_number_pane_ParamLimits

0xb09a,	// (0x000259ba) list_setting_number_pane

0xb09a,	// (0x000259ba) list_setting_pane_ParamLimits

0xb09a,	// (0x000259ba) list_setting_pane

0x55ad,	// (0x0001fecd) list_single_2graphic_pane_ParamLimits

0x55ad,	// (0x0001fecd) list_single_2graphic_pane

0x55ad,	// (0x0001fecd) list_single_graphic_heading_pane_ParamLimits

0x55ad,	// (0x0001fecd) list_single_graphic_heading_pane

0x55ad,	// (0x0001fecd) list_single_graphic_pane_ParamLimits

0x55ad,	// (0x0001fecd) list_single_graphic_pane

0x55ad,	// (0x0001fecd) list_single_heading_pane_ParamLimits

0x55ad,	// (0x0001fecd) list_single_heading_pane

0x5608,	// (0x0001ff28) list_single_large_graphic_pane_ParamLimits

0x5608,	// (0x0001ff28) list_single_large_graphic_pane

0x55ad,	// (0x0001fecd) list_single_number_heading_pane_ParamLimits

0x55ad,	// (0x0001fecd) list_single_number_heading_pane

0x55ad,	// (0x0001fecd) list_single_number_pane_ParamLimits

0x55ad,	// (0x0001fecd) list_single_number_pane

0x55ad,	// (0x0001fecd) list_single_pane_ParamLimits

0x55ad,	// (0x0001fecd) list_single_pane

0x76da,	// (0x00021ffa) list_highlight_pane_cp1

0x4c31,	// (0x0001f551) list_single_pane_g1_ParamLimits

0x4c31,	// (0x0001f551) list_single_pane_g1

0x4c3d,	// (0x0001f55d) list_single_pane_g2_ParamLimits

0x4c3d,	// (0x0001f55d) list_single_pane_g2

0x0001,

0xf5e4,	// (0x00029f04) list_single_pane_g_ParamLimits

0xf5e4,	// (0x00029f04) list_single_pane_g

0x555c,	// (0x0001fe7c) list_single_pane_t1_ParamLimits

0x555c,	// (0x0001fe7c) list_single_pane_t1

0x4c31,	// (0x0001f551) list_single_number_pane_g1_ParamLimits

0x4c31,	// (0x0001f551) list_single_number_pane_g1

0x4c3d,	// (0x0001f55d) list_single_number_pane_g2_ParamLimits

0x4c3d,	// (0x0001f55d) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x00029f04) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x00029f04) list_single_number_pane_g

0x5506,	// (0x0001fe26) list_single_number_pane_t1_ParamLimits

0x5506,	// (0x0001fe26) list_single_number_pane_t1

0x551c,	// (0x0001fe3c) list_single_number_pane_t2_ParamLimits

0x551c,	// (0x0001fe3c) list_single_number_pane_t2

0x0001,

0xf970,	// (0x0002a290) list_single_number_pane_t_ParamLimits

0xf970,	// (0x0002a290) list_single_number_pane_t

0x4c25,	// (0x0001f545) list_single_graphic_pane_g1_ParamLimits

0x4c25,	// (0x0001f545) list_single_graphic_pane_g1

0x4c31,	// (0x0001f551) list_single_graphic_pane_g2_ParamLimits

0x4c31,	// (0x0001f551) list_single_graphic_pane_g2

0x4c3d,	// (0x0001f55d) list_single_graphic_pane_g3_ParamLimits

0x4c3d,	// (0x0001f55d) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00029efd) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00029efd) list_single_graphic_pane_g

0x4c49,	// (0x0001f569) list_single_graphic_pane_t1_ParamLimits

0x4c49,	// (0x0001f569) list_single_graphic_pane_t1

0x4c31,	// (0x0001f551) list_single_heading_pane_g1_ParamLimits

0x4c31,	// (0x0001f551) list_single_heading_pane_g1

0x4c3d,	// (0x0001f55d) list_single_heading_pane_g2_ParamLimits

0x4c3d,	// (0x0001f55d) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00029f04) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00029f04) list_single_heading_pane_g

0x4c5f,	// (0x0001f57f) list_single_heading_pane_t1_ParamLimits

0x4c5f,	// (0x0001f57f) list_single_heading_pane_t1

0x4c75,	// (0x0001f595) list_single_heading_pane_t2_ParamLimits

0x4c75,	// (0x0001f595) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00029f09) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00029f09) list_single_heading_pane_t

0x4c31,	// (0x0001f551) list_single_number_heading_pane_g1_ParamLimits

0x4c31,	// (0x0001f551) list_single_number_heading_pane_g1

0x4c3d,	// (0x0001f55d) list_single_number_heading_pane_g2_ParamLimits

0x4c3d,	// (0x0001f55d) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x00029f04) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x00029f04) list_single_number_heading_pane_g

0x4c5f,	// (0x0001f57f) list_single_number_heading_pane_t1_ParamLimits

0x4c5f,	// (0x0001f57f) list_single_number_heading_pane_t1

0x4c87,	// (0x0001f5a7) list_single_number_heading_pane_t2_ParamLimits

0x4c87,	// (0x0001f5a7) list_single_number_heading_pane_t2

0x4c99,	// (0x0001f5b9) list_single_number_heading_pane_t3_ParamLimits

0x4c99,	// (0x0001f5b9) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x00029f0e) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x00029f0e) list_single_number_heading_pane_t

0x4cab,	// (0x0001f5cb) list_single_graphic_heading_pane_g1_ParamLimits

0x4cab,	// (0x0001f5cb) list_single_graphic_heading_pane_g1

0x4cb7,	// (0x0001f5d7) list_single_graphic_heading_pane_g4_ParamLimits

0x4cb7,	// (0x0001f5d7) list_single_graphic_heading_pane_g4

0x4c3d,	// (0x0001f55d) list_single_graphic_heading_pane_g5_ParamLimits

0x4c3d,	// (0x0001f55d) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x00029f15) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x00029f15) list_single_graphic_heading_pane_g

0x4c5f,	// (0x0001f57f) list_single_graphic_heading_pane_t1_ParamLimits

0x4c5f,	// (0x0001f57f) list_single_graphic_heading_pane_t1

0x4cc8,	// (0x0001f5e8) list_single_graphic_heading_pane_t2_ParamLimits

0x4cc8,	// (0x0001f5e8) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x00029f1c) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x00029f1c) list_single_graphic_heading_pane_t

0x4cda,	// (0x0001f5fa) list_single_large_graphic_pane_g1_ParamLimits

0x4cda,	// (0x0001f5fa) list_single_large_graphic_pane_g1

0x4ce6,	// (0x0001f606) list_single_large_graphic_pane_g2_ParamLimits

0x4ce6,	// (0x0001f606) list_single_large_graphic_pane_g2

0x4cf2,	// (0x0001f612) list_single_large_graphic_pane_g3_ParamLimits

0x4cf2,	// (0x0001f612) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x00029f21) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00029f21) list_single_large_graphic_pane_g

0xa0ed,	// (0x00024a0d) wait_border_pane_g2_copy1

0x4cfe,	// (0x0001f61e) list_single_large_graphic_pane_g4_cp2

0x4d06,	// (0x0001f626) list_single_large_graphic_pane_t1_ParamLimits

0x4d06,	// (0x0001f626) list_single_large_graphic_pane_t1

0x4d1c,	// (0x0001f63c) list_double_pane_g1_ParamLimits

0x4d1c,	// (0x0001f63c) list_double_pane_g1

0x4d28,	// (0x0001f648) list_double_pane_g2_ParamLimits

0x4d28,	// (0x0001f648) list_double_pane_g2

0x0001,

0xf608,	// (0x00029f28) list_double_pane_g_ParamLimits

0xf608,	// (0x00029f28) list_double_pane_g

0x4d34,	// (0x0001f654) list_double_pane_t1_ParamLimits

0x4d34,	// (0x0001f654) list_double_pane_t1

0x4d4a,	// (0x0001f66a) list_double_pane_t2_ParamLimits

0x4d4a,	// (0x0001f66a) list_double_pane_t2

0x0001,

0xf60d,	// (0x00029f2d) list_double_pane_t_ParamLimits

0xf60d,	// (0x00029f2d) list_double_pane_t

0x4d5c,	// (0x0001f67c) list_double2_pane_g1_ParamLimits

0x4d5c,	// (0x0001f67c) list_double2_pane_g1

0x4d6d,	// (0x0001f68d) list_double2_pane_g2_ParamLimits

0x4d6d,	// (0x0001f68d) list_double2_pane_g2

0x0001,

0xf612,	// (0x00029f32) list_double2_pane_g_ParamLimits

0xf612,	// (0x00029f32) list_double2_pane_g

0x4d79,	// (0x0001f699) list_double2_pane_t1_ParamLimits

0x4d79,	// (0x0001f699) list_double2_pane_t1

0x4d8f,	// (0x0001f6af) list_double2_pane_t2_ParamLimits

0x4d8f,	// (0x0001f6af) list_double2_pane_t2

0x0001,

0xf617,	// (0x00029f37) list_double2_pane_t_ParamLimits

0xf617,	// (0x00029f37) list_double2_pane_t

0x4d1c,	// (0x0001f63c) list_double_number_pane_g1_ParamLimits

0x4d1c,	// (0x0001f63c) list_double_number_pane_g1

0x4d28,	// (0x0001f648) list_double_number_pane_g2_ParamLimits

0x4d28,	// (0x0001f648) list_double_number_pane_g2

0x0001,

0xf608,	// (0x00029f28) list_double_number_pane_g_ParamLimits

0xf608,	// (0x00029f28) list_double_number_pane_g

0x4da1,	// (0x0001f6c1) list_double_number_pane_t1_ParamLimits

0x4da1,	// (0x0001f6c1) list_double_number_pane_t1

0x4db3,	// (0x0001f6d3) list_double_number_pane_t2_ParamLimits

0x4db3,	// (0x0001f6d3) list_double_number_pane_t2

0x4dc9,	// (0x0001f6e9) list_double_number_pane_t3_ParamLimits

0x4dc9,	// (0x0001f6e9) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x00029f3c) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x00029f3c) list_double_number_pane_t

0x4ddb,	// (0x0001f6fb) list_double_graphic_pane_g1_ParamLimits

0x4ddb,	// (0x0001f6fb) list_double_graphic_pane_g1

0x4de7,	// (0x0001f707) list_double_graphic_pane_g2_ParamLimits

0x4de7,	// (0x0001f707) list_double_graphic_pane_g2

0x4df6,	// (0x0001f716) list_double_graphic_pane_g3_ParamLimits

0x4df6,	// (0x0001f716) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x00029f43) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x00029f43) list_double_graphic_pane_g

0x4e0e,	// (0x0001f72e) list_double_graphic_pane_t1_ParamLimits

0x4e0e,	// (0x0001f72e) list_double_graphic_pane_t1

0x4e24,	// (0x0001f744) list_double_graphic_pane_t2_ParamLimits

0x4e24,	// (0x0001f744) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x00029f4c) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x00029f4c) list_double_graphic_pane_t

0x4e36,	// (0x0001f756) list_double2_graphic_pane_g1_ParamLimits

0x4e36,	// (0x0001f756) list_double2_graphic_pane_g1

0x4e42,	// (0x0001f762) list_double2_graphic_pane_g2_ParamLimits

0x4e42,	// (0x0001f762) list_double2_graphic_pane_g2

0x4e4e,	// (0x0001f76e) list_double2_graphic_pane_g3_ParamLimits

0x4e4e,	// (0x0001f76e) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x00029f51) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x00029f51) list_double2_graphic_pane_g

0x4e5a,	// (0x0001f77a) list_double2_graphic_pane_t1_ParamLimits

0x4e5a,	// (0x0001f77a) list_double2_graphic_pane_t1

0x4e70,	// (0x0001f790) list_double2_graphic_pane_t2_ParamLimits

0x4e70,	// (0x0001f790) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x00029f58) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x00029f58) list_double2_graphic_pane_t

0x4e82,	// (0x0001f7a2) list_double_large_graphic_pane_g1_ParamLimits

0x4e82,	// (0x0001f7a2) list_double_large_graphic_pane_g1

0x4eab,	// (0x0001f7cb) list_double_large_graphic_pane_g2_ParamLimits

0x4eab,	// (0x0001f7cb) list_double_large_graphic_pane_g2

0x4d28,	// (0x0001f648) list_double_large_graphic_pane_g3_ParamLimits

0x4d28,	// (0x0001f648) list_double_large_graphic_pane_g3

0x4ebc,	// (0x0001f7dc) list_double_large_graphic_pane_g4_ParamLimits

0x4ebc,	// (0x0001f7dc) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x00029f5d) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x00029f5d) list_double_large_graphic_pane_g

0x4ee1,	// (0x0001f801) list_double_large_graphic_pane_t1_ParamLimits

0x4ee1,	// (0x0001f801) list_double_large_graphic_pane_t1

0x4efa,	// (0x0001f81a) list_double_large_graphic_pane_t2_ParamLimits

0x4efa,	// (0x0001f81a) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x00029f68) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x00029f68) list_double_large_graphic_pane_t

0x4f0c,	// (0x0001f82c) list_double2_large_graphic_pane_g1_ParamLimits

0x4f0c,	// (0x0001f82c) list_double2_large_graphic_pane_g1

0x4f18,	// (0x0001f838) list_double2_large_graphic_pane_g2_ParamLimits

0x4f18,	// (0x0001f838) list_double2_large_graphic_pane_g2

0x4e4e,	// (0x0001f76e) list_double2_large_graphic_pane_g3_ParamLimits

0x4e4e,	// (0x0001f76e) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x00029f6d) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x00029f6d) list_double2_large_graphic_pane_g

0x4f29,	// (0x0001f849) list_double2_large_graphic_pane_t1_ParamLimits

0x4f29,	// (0x0001f849) list_double2_large_graphic_pane_t1

0x4f3f,	// (0x0001f85f) list_double2_large_graphic_pane_t2_ParamLimits

0x4f3f,	// (0x0001f85f) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x00029f74) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x00029f74) list_double2_large_graphic_pane_t

0x4f51,	// (0x0001f871) list_double_heading_pane_g1_ParamLimits

0x4f51,	// (0x0001f871) list_double_heading_pane_g1

0x4f62,	// (0x0001f882) list_double_heading_pane_g2_ParamLimits

0x4f62,	// (0x0001f882) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x00029f79) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x00029f79) list_double_heading_pane_g

0x4f6e,	// (0x0001f88e) list_double_heading_pane_t1_ParamLimits

0x4f6e,	// (0x0001f88e) list_double_heading_pane_t1

0x4f84,	// (0x0001f8a4) list_double_heading_pane_t2_ParamLimits

0x4f84,	// (0x0001f8a4) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x00029f7e) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x00029f7e) list_double_heading_pane_t

0x4e36,	// (0x0001f756) list_double_graphic_heading_pane_g1_ParamLimits

0x4e36,	// (0x0001f756) list_double_graphic_heading_pane_g1

0x4f51,	// (0x0001f871) list_double_graphic_heading_pane_g2_ParamLimits

0x4f51,	// (0x0001f871) list_double_graphic_heading_pane_g2

0x4f62,	// (0x0001f882) list_double_graphic_heading_pane_g3_ParamLimits

0x4f62,	// (0x0001f882) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x00029f83) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x00029f83) list_double_graphic_heading_pane_g

0x4f96,	// (0x0001f8b6) list_double_graphic_heading_pane_t1_ParamLimits

0x4f96,	// (0x0001f8b6) list_double_graphic_heading_pane_t1

0x4e70,	// (0x0001f790) list_double_graphic_heading_pane_t2_ParamLimits

0x4e70,	// (0x0001f790) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x00029f8a) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x00029f8a) list_double_graphic_heading_pane_t

0x4eab,	// (0x0001f7cb) list_double_time_pane_g1_ParamLimits

0x4eab,	// (0x0001f7cb) list_double_time_pane_g1

0x4d28,	// (0x0001f648) list_double_time_pane_g2_ParamLimits

0x4d28,	// (0x0001f648) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x00029f8f) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x00029f8f) list_double_time_pane_g

0x4fac,	// (0x0001f8cc) list_double_time_pane_t1_ParamLimits

0x4fac,	// (0x0001f8cc) list_double_time_pane_t1

0x4fc2,	// (0x0001f8e2) list_double_time_pane_t2_ParamLimits

0x4fc2,	// (0x0001f8e2) list_double_time_pane_t2

0x4fd4,	// (0x0001f8f4) list_double_time_pane_t3_ParamLimits

0x4fd4,	// (0x0001f8f4) list_double_time_pane_t3

0x4fe6,	// (0x0001f906) list_double_time_pane_t4_ParamLimits

0x4fe6,	// (0x0001f906) list_double_time_pane_t4

0x0003,

0xf674,	// (0x00029f94) list_double_time_pane_t_ParamLimits

0xf674,	// (0x00029f94) list_double_time_pane_t

0x4e42,	// (0x0001f762) list_setting_pane_g1_ParamLimits

0x4e42,	// (0x0001f762) list_setting_pane_g1

0x4e4e,	// (0x0001f76e) list_setting_pane_g2_ParamLimits

0x4e4e,	// (0x0001f76e) list_setting_pane_g2

0x0001,

0xf67d,	// (0x00029f9d) list_setting_pane_g_ParamLimits

0xf67d,	// (0x00029f9d) list_setting_pane_g

0x4ff8,	// (0x0001f918) list_setting_pane_t1_ParamLimits

0x4ff8,	// (0x0001f918) list_setting_pane_t1

0x5012,	// (0x0001f932) list_setting_pane_t2_ParamLimits

0x5012,	// (0x0001f932) list_setting_pane_t2

0x0002,

0xf682,	// (0x00029fa2) list_setting_pane_t_ParamLimits

0xf682,	// (0x00029fa2) list_setting_pane_t

0x5051,	// (0x0001f971) set_value_pane_cp_ParamLimits

0x5051,	// (0x0001f971) set_value_pane_cp

0x505d,	// (0x0001f97d) list_setting_number_pane_g1_ParamLimits

0x505d,	// (0x0001f97d) list_setting_number_pane_g1

0x5069,	// (0x0001f989) list_setting_number_pane_g2_ParamLimits

0x5069,	// (0x0001f989) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x00029fa9) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x00029fa9) list_setting_number_pane_g

0x5075,	// (0x0001f995) list_setting_number_pane_t1_ParamLimits

0x5075,	// (0x0001f995) list_setting_number_pane_t1

0x508e,	// (0x0001f9ae) list_setting_number_pane_t2_ParamLimits

0x508e,	// (0x0001f9ae) list_setting_number_pane_t2

0x50a8,	// (0x0001f9c8) list_setting_number_pane_t3_ParamLimits

0x50a8,	// (0x0001f9c8) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x00029fae) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x00029fae) list_setting_number_pane_t

0x5051,	// (0x0001f971) set_value_pane_ParamLimits

0x5051,	// (0x0001f971) set_value_pane

0x7fcd,	// (0x000228ed) bg_set_opt_pane_ParamLimits

0x7fcd,	// (0x000228ed) bg_set_opt_pane

0x50eb,	// (0x0001fa0b) set_value_pane_t1

0x7fee,	// (0x0002290e) slider_set_pane_cp3

0x7ff7,	// (0x00022917) volume_small_pane_cp

0x8000,	// (0x00022920) list_form_gen_pane

0x8009,	// (0x00022929) scroll_pane_cp8

0x5101,	// (0x0001fa21) form_field_data_pane_ParamLimits

0x5101,	// (0x0001fa21) form_field_data_pane

0x5121,	// (0x0001fa41) form_field_data_wide_pane_ParamLimits

0x5121,	// (0x0001fa41) form_field_data_wide_pane

0x5142,	// (0x0001fa62) form_field_popup_pane_ParamLimits

0x5142,	// (0x0001fa62) form_field_popup_pane

0x5162,	// (0x0001fa82) form_field_popup_wide_pane_ParamLimits

0x5162,	// (0x0001fa82) form_field_popup_wide_pane

0x517f,	// (0x0001fa9f) form_field_slider_pane_ParamLimits

0x517f,	// (0x0001fa9f) form_field_slider_pane

0x5192,	// (0x0001fab2) form_field_slider_wide_pane_ParamLimits

0x5192,	// (0x0001fab2) form_field_slider_wide_pane

0x801a,	// (0x0002293a) data_form_pane

0x51af,	// (0x0001facf) form_field_data_pane_t1

0x8026,	// (0x00022946) input_focus_pane

0x8034,	// (0x00022954) data_form_wide_pane

0x51d3,	// (0x0001faf3) form_field_data_wide_pane_t1

0x7d97,	// (0x000226b7) input_focus_pane_cp6

0x51f5,	// (0x0001fb15) form_field_popup_pane_t1

0x8026,	// (0x00022946) input_focus_pane_cp7

0x8060,	// (0x00022980) list_form_pane

0x5215,	// (0x0001fb35) form_field_popup_wide_pane_t1

0x8026,	// (0x00022946) input_focus_pane_cp8

0x806c,	// (0x0002298c) list_form_wide_pane

0x5232,	// (0x0001fb52) form_field_slider_pane_t1_ParamLimits

0x5232,	// (0x0001fb52) form_field_slider_pane_t1

0x5248,	// (0x0001fb68) form_field_slider_pane_t2_ParamLimits

0x5248,	// (0x0001fb68) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x00029fbe) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x00029fbe) form_field_slider_pane_t

0x7a35,	// (0x00022355) input_focus_pane_cp9_ParamLimits

0x7a35,	// (0x00022355) input_focus_pane_cp9

0x525d,	// (0x0001fb7d) slider_cont_pane_ParamLimits

0x525d,	// (0x0001fb7d) slider_cont_pane

0x807b,	// (0x0002299b) form_field_slider_wide_pane_t1_ParamLimits

0x807b,	// (0x0002299b) form_field_slider_wide_pane_t1

0x5271,	// (0x0001fb91) form_field_slider_wide_pane_t2_ParamLimits

0x5271,	// (0x0001fb91) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x00029fc3) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x00029fc3) form_field_slider_wide_pane_t

0x7a35,	// (0x00022355) input_focus_pane_cp10_ParamLimits

0x7a35,	// (0x00022355) input_focus_pane_cp10

0x5283,	// (0x0001fba3) slider_cont_pane_cp1_ParamLimits

0x5283,	// (0x0001fba3) slider_cont_pane_cp1

0x5297,	// (0x0001fbb7) slider_form_pane_cp

0x808d,	// (0x000229ad) input_focus_pane_g1

0x8095,	// (0x000229b5) input_focus_pane_g2

0x809d,	// (0x000229bd) input_focus_pane_g3

0x80a5,	// (0x000229c5) input_focus_pane_g4

0x80ad,	// (0x000229cd) input_focus_pane_g5

0x80b5,	// (0x000229d5) input_focus_pane_g6

0x80bd,	// (0x000229dd) input_focus_pane_g7

0x80c5,	// (0x000229e5) input_focus_pane_g8

0x80cd,	// (0x000229ed) input_focus_pane_g9

0x76d0,	// (0x00021ff0) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x00029fc8) input_focus_pane_g

0xa0f6,	// (0x00024a16) wait_border_pane_g3_copy1

0x529f,	// (0x0001fbbf) data_form_pane_t1

0x76d0,	// (0x00021ff0) wait_anim_pane_g1_copy1

0x552e,	// (0x0001fe4e) data_form_wide_pane_t1

0x52ba,	// (0x0001fbda) list_form_graphic_pane_cp_ParamLimits

0x52ba,	// (0x0001fbda) list_form_graphic_pane_cp

0xb03e,	// (0x0002595e) slider_form_pane_g1

0xb047,	// (0x00025967) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x0002a2c0) slider_form_pane_g

0x52d3,	// (0x0001fbf3) list_form_graphic_pane_ParamLimits

0x52d3,	// (0x0001fbf3) list_form_graphic_pane

0x52ef,	// (0x0001fc0f) list_form_graphic_pane_g1

0x52f7,	// (0x0001fc17) list_form_graphic_pane_t1_ParamLimits

0x52f7,	// (0x0001fc17) list_form_graphic_pane_t1

0x77ba,	// (0x000220da) list_highlight_pane_cp5_ParamLimits

0x77ba,	// (0x000220da) list_highlight_pane_cp5

0x530c,	// (0x0001fc2c) find_pane_g1

0x80d5,	// (0x000229f5) input_find_pane

0x5315,	// (0x0001fc35) input_find_pane_g1_ParamLimits

0x5315,	// (0x0001fc35) input_find_pane_g1

0x5321,	// (0x0001fc41) input_find_pane_t1_ParamLimits

0x5321,	// (0x0001fc41) input_find_pane_t1

0x5336,	// (0x0001fc56) input_find_pane_t2_ParamLimits

0x5336,	// (0x0001fc56) input_find_pane_t2

0x0001,

0xf6bd,	// (0x00029fdd) input_find_pane_t_ParamLimits

0xf6bd,	// (0x00029fdd) input_find_pane_t

0x80de,	// (0x000229fe) input_focus_pane_cp5_ParamLimits

0x80de,	// (0x000229fe) input_focus_pane_cp5

0x80f8,	// (0x00022a18) bg_popup_window_pane_cp2_ParamLimits

0x80f8,	// (0x00022a18) bg_popup_window_pane_cp2

0x8105,	// (0x00022a25) listscroll_menu_pane_ParamLimits

0x8105,	// (0x00022a25) listscroll_menu_pane

0x8111,	// (0x00022a31) popup_submenu_window_ParamLimits

0x8111,	// (0x00022a31) popup_submenu_window

0x813b,	// (0x00022a5b) find_popup_pane_g1

0x8143,	// (0x00022a63) input_popup_find_pane_cp

0x80de,	// (0x000229fe) input_focus_pane_cp4_ParamLimits

0x80de,	// (0x000229fe) input_focus_pane_cp4

0x8159,	// (0x00022a79) input_popup_find_pane_t1_ParamLimits

0x8159,	// (0x00022a79) input_popup_find_pane_t1

0x76da,	// (0x00021ffa) bg_popup_sub_pane_cp

0x8187,	// (0x00022aa7) listscroll_popup_sub_pane

0x818f,	// (0x00022aaf) list_submenu_pane_ParamLimits

0x818f,	// (0x00022aaf) list_submenu_pane

0x81a0,	// (0x00022ac0) scroll_pane_cp4

0x81a8,	// (0x00022ac8) list_single_popup_submenu_pane_ParamLimits

0x81a8,	// (0x00022ac8) list_single_popup_submenu_pane

0x81bc,	// (0x00022adc) list_single_popup_submenu_pane_g1

0x81c4,	// (0x00022ae4) list_single_popup_submenu_pane_t1_ParamLimits

0x81c4,	// (0x00022ae4) list_single_popup_submenu_pane_t1

0x77ba,	// (0x000220da) bg_active_tab_pane_cp1_ParamLimits

0x77ba,	// (0x000220da) bg_active_tab_pane_cp1

0x81d9,	// (0x00022af9) tabs_2_active_pane_g1

0x81e1,	// (0x00022b01) tabs_2_active_pane_t1

0x77ba,	// (0x000220da) bg_passive_tab_pane_cp1_ParamLimits

0x77ba,	// (0x000220da) bg_passive_tab_pane_cp1

0x81d9,	// (0x00022af9) tabs_2_passive_pane_g1

0x81e1,	// (0x00022b01) tabs_2_passive_pane_t1

0x81f3,	// (0x00022b13) bg_active_tab_pane_cp4

0x8201,	// (0x00022b21) tabs_2_long_active_pane_t1

0x8214,	// (0x00022b34) bg_passive_tab_pane_cp4

0x97b4,	// (0x000240d4) list_single_midp_graphic_pane_g4_ParamLimits

0x81f3,	// (0x00022b13) bg_active_tab_pane_cp5

0x8220,	// (0x00022b40) tabs_3_long_active_pane_t1

0x8214,	// (0x00022b34) bg_passive_tab_pane_cp5

0x97b4,	// (0x000240d4) list_single_midp_graphic_pane_g4

0x77ba,	// (0x000220da) bg_popup_window_pane_cp13_ParamLimits

0x77ba,	// (0x000220da) bg_popup_window_pane_cp13

0x823b,	// (0x00022b5b) listscroll_popup_fast_pane_ParamLimits

0x823b,	// (0x00022b5b) listscroll_popup_fast_pane

0x824a,	// (0x00022b6a) grid_popup_fast_pane_ParamLimits

0x824a,	// (0x00022b6a) grid_popup_fast_pane

0x825c,	// (0x00022b7c) scroll_pane_cp9_ParamLimits

0x825c,	// (0x00022b7c) scroll_pane_cp9

0xc905,	// (0x00027225) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc905,	// (0x00027225) list_single_graphic_hl_pane_t1_cp2

0x8280,	// (0x00022ba0) input_focus_pane_cp20_ParamLimits

0x8280,	// (0x00022ba0) input_focus_pane_cp20

0x828e,	// (0x00022bae) query_popup_data_pane_t1_ParamLimits

0x828e,	// (0x00022bae) query_popup_data_pane_t1

0x82a1,	// (0x00022bc1) query_popup_data_pane_t2_ParamLimits

0x82a1,	// (0x00022bc1) query_popup_data_pane_t2

0x82e7,	// (0x00022c07) query_popup_data_pane_t3_ParamLimits

0x82e7,	// (0x00022c07) query_popup_data_pane_t3

0x8328,	// (0x00022c48) query_popup_data_pane_t4_ParamLimits

0x8328,	// (0x00022c48) query_popup_data_pane_t4

0x8364,	// (0x00022c84) query_popup_data_pane_t5_ParamLimits

0x8364,	// (0x00022c84) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x00029fe2) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x00029fe2) query_popup_data_pane_t

0x808d,	// (0x000229ad) bg_set_opt_pane_g1

0x8095,	// (0x000229b5) bg_set_opt_pane_g2

0x809d,	// (0x000229bd) bg_set_opt_pane_g3

0x80a5,	// (0x000229c5) bg_set_opt_pane_g4

0x80ad,	// (0x000229cd) bg_set_opt_pane_g5

0x80b5,	// (0x000229d5) bg_set_opt_pane_g6

0x80bd,	// (0x000229dd) bg_set_opt_pane_g7

0x80c5,	// (0x000229e5) bg_set_opt_pane_g8

0x80cd,	// (0x000229ed) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x00029fed) bg_set_opt_pane_g

0x632f,	// (0x00020c4f) control_top_pane_stacon_ParamLimits

0x632f,	// (0x00020c4f) control_top_pane_stacon

0x6382,	// (0x00020ca2) signal_pane_stacon_ParamLimits

0x6382,	// (0x00020ca2) signal_pane_stacon

0x8924,	// (0x00023244) stacon_top_pane_g1_ParamLimits

0x8924,	// (0x00023244) stacon_top_pane_g1

0x63a7,	// (0x00020cc7) title_pane_stacon_ParamLimits

0x63a7,	// (0x00020cc7) title_pane_stacon

0x63d1,	// (0x00020cf1) uni_indicator_pane_stacon_ParamLimits

0x63d1,	// (0x00020cf1) uni_indicator_pane_stacon

0x63e6,	// (0x00020d06) battery_pane_stacon_ParamLimits

0x63e6,	// (0x00020d06) battery_pane_stacon

0x642a,	// (0x00020d4a) control_bottom_pane_stacon_ParamLimits

0x642a,	// (0x00020d4a) control_bottom_pane_stacon

0x644d,	// (0x00020d6d) navi_pane_stacon_ParamLimits

0x644d,	// (0x00020d6d) navi_pane_stacon

0x8946,	// (0x00023266) stacon_bottom_pane_g1_ParamLimits

0x8946,	// (0x00023266) stacon_bottom_pane_g1

0x6090,	// (0x000209b0) aid_levels_signal_lsc_ParamLimits

0x6090,	// (0x000209b0) aid_levels_signal_lsc

0x60a7,	// (0x000209c7) signal_pane_stacon_g1_ParamLimits

0x60a7,	// (0x000209c7) signal_pane_stacon_g1

0x60bb,	// (0x000209db) signal_pane_stacon_g2_ParamLimits

0x60bb,	// (0x000209db) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x0002a000) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0002a000) signal_pane_stacon_g

0x60f0,	// (0x00020a10) title_pane_stacon_t1_ParamLimits

0x60f0,	// (0x00020a10) title_pane_stacon_t1

0x83a8,	// (0x00022cc8) uni_indicator_pane_stacon_g1

0x83b2,	// (0x00022cd2) uni_indicator_pane_stacon_g2

0x83bc,	// (0x00022cdc) uni_indicator_pane_stacon_g3

0x83c6,	// (0x00022ce6) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x0002a00c) uni_indicator_pane_stacon_g

0x6115,	// (0x00020a35) control_top_pane_stacon_g1

0x611d,	// (0x00020a3d) control_top_pane_stacon_t1_ParamLimits

0x611d,	// (0x00020a3d) control_top_pane_stacon_t1

0x6154,	// (0x00020a74) aid_levels_battery_lsc_ParamLimits

0x6154,	// (0x00020a74) aid_levels_battery_lsc

0x616c,	// (0x00020a8c) battery_pane_stacon_g1_ParamLimits

0x616c,	// (0x00020a8c) battery_pane_stacon_g1

0x617f,	// (0x00020a9f) battery_pane_stacon_g2_ParamLimits

0x617f,	// (0x00020a9f) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x0002a015) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x0002a015) battery_pane_stacon_g

0x61bd,	// (0x00020add) navi_icon_pane_stacon

0x61d1,	// (0x00020af1) navi_navi_pane_stacon

0x61bd,	// (0x00020add) navi_text_pane_stacon

0x6115,	// (0x00020a35) control_bottom_pane_stacon_g1

0x61e5,	// (0x00020b05) control_bottom_pane_stacon_t1_ParamLimits

0x61e5,	// (0x00020b05) control_bottom_pane_stacon_t1

0x83ea,	// (0x00022d0a) grid_app_pane_ParamLimits

0x83ea,	// (0x00022d0a) grid_app_pane

0x840e,	// (0x00022d2e) scroll_pane_cp15_ParamLimits

0x840e,	// (0x00022d2e) scroll_pane_cp15

0x8423,	// (0x00022d43) cell_app_pane_ParamLimits

0x8423,	// (0x00022d43) cell_app_pane

0x8447,	// (0x00022d67) cell_app_pane_g1_ParamLimits

0x8447,	// (0x00022d67) cell_app_pane_g1

0x846b,	// (0x00022d8b) cell_app_pane_g2_ParamLimits

0x846b,	// (0x00022d8b) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x0002a01a) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x0002a01a) cell_app_pane_g

0x8477,	// (0x00022d97) cell_app_pane_t1_ParamLimits

0x8477,	// (0x00022d97) cell_app_pane_t1

0x848e,	// (0x00022dae) grid_highlight_pane_ParamLimits

0x848e,	// (0x00022dae) grid_highlight_pane

0x808d,	// (0x000229ad) cell_highlight_pane_g1

0x8095,	// (0x000229b5) cell_highlight_pane_g2

0x809d,	// (0x000229bd) cell_highlight_pane_g3

0x80a5,	// (0x000229c5) cell_highlight_pane_g4

0x80ad,	// (0x000229cd) cell_highlight_pane_g5

0x80b5,	// (0x000229d5) cell_highlight_pane_g6

0x80bd,	// (0x000229dd) cell_highlight_pane_g7

0x80c5,	// (0x000229e5) cell_highlight_pane_g8

0x80cd,	// (0x000229ed) cell_highlight_pane_g9

0x76d0,	// (0x00021ff0) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x00029fc8) cell_highlight_pane_g

0x849f,	// (0x00022dbf) bg_scroll_pane

0x622f,	// (0x00020b4f) scroll_handle_pane

0x84e6,	// (0x00022e06) scroll_bg_pane_g1

0x84fb,	// (0x00022e1b) scroll_bg_pane_g2

0x8513,	// (0x00022e33) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x0002a01f) scroll_bg_pane_g

0x8528,	// (0x00022e48) scroll_handle_focus_pane_ParamLimits

0x8528,	// (0x00022e48) scroll_handle_focus_pane

0x84e6,	// (0x00022e06) scroll_handle_pane_g1

0x8535,	// (0x00022e55) scroll_handle_pane_g2

0x8513,	// (0x00022e33) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x0002a026) scroll_handle_pane_g

0x80de,	// (0x000229fe) bg_popup_sub_pane_cp21_ParamLimits

0x80de,	// (0x000229fe) bg_popup_sub_pane_cp21

0x8549,	// (0x00022e69) popup_fep_japan_predictive_window_t1_ParamLimits

0x8549,	// (0x00022e69) popup_fep_japan_predictive_window_t1

0x8563,	// (0x00022e83) popup_fep_japan_predictive_window_t2_ParamLimits

0x8563,	// (0x00022e83) popup_fep_japan_predictive_window_t2

0x8596,	// (0x00022eb6) popup_fep_japan_predictive_window_t3_ParamLimits

0x8596,	// (0x00022eb6) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x0002a02d) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x0002a02d) popup_fep_japan_predictive_window_t

0x76da,	// (0x00021ffa) bg_popup_sub_pane_cp23

0x85cd,	// (0x00022eed) listscroll_japin_cand_pane

0x85d5,	// (0x00022ef5) popup_fep_japan_candidate_window_t1

0x85e3,	// (0x00022f03) candidate_pane_ParamLimits

0x85e3,	// (0x00022f03) candidate_pane

0x85f5,	// (0x00022f15) scroll_pane_cp30

0x85fd,	// (0x00022f1d) list_single_popup_jap_candidate_pane_ParamLimits

0x85fd,	// (0x00022f1d) list_single_popup_jap_candidate_pane

0x76da,	// (0x00021ffa) list_highlight_pane_cp30

0x8612,	// (0x00022f32) list_single_popup_jap_candidate_pane_t1

0x8621,	// (0x00022f41) level_1_signal

0x862e,	// (0x00022f4e) level_2_signal

0x863b,	// (0x00022f5b) level_3_signal

0x8648,	// (0x00022f68) level_4_signal

0x8655,	// (0x00022f75) level_5_signal

0x8662,	// (0x00022f82) level_6_signal

0x866f,	// (0x00022f8f) level_7_signal

0x8621,	// (0x00022f41) level_1_battery

0x862e,	// (0x00022f4e) level_2_battery

0x863b,	// (0x00022f5b) level_3_battery

0x8648,	// (0x00022f68) level_4_battery

0x8655,	// (0x00022f75) level_5_battery

0x8662,	// (0x00022f82) level_6_battery

0x866f,	// (0x00022f8f) level_7_battery

0x8694,	// (0x00022fb4) list_menu_pane_ParamLimits

0x8694,	// (0x00022fb4) list_menu_pane

0x86a5,	// (0x00022fc5) scroll_pane_cp25_ParamLimits

0x86a5,	// (0x00022fc5) scroll_pane_cp25

0x86be,	// (0x00022fde) list_double2_graphic_pane_cp2_ParamLimits

0x86be,	// (0x00022fde) list_double2_graphic_pane_cp2

0x86be,	// (0x00022fde) list_double2_large_graphic_pane_cp2_ParamLimits

0x86be,	// (0x00022fde) list_double2_large_graphic_pane_cp2

0x86be,	// (0x00022fde) list_double2_pane_cp2_ParamLimits

0x86be,	// (0x00022fde) list_double2_pane_cp2

0x86be,	// (0x00022fde) list_double_graphic_pane_cp2_ParamLimits

0x86be,	// (0x00022fde) list_double_graphic_pane_cp2

0x86be,	// (0x00022fde) list_double_large_graphic_pane_cp2_ParamLimits

0x86be,	// (0x00022fde) list_double_large_graphic_pane_cp2

0x86be,	// (0x00022fde) list_double_number_pane_cp2_ParamLimits

0x86be,	// (0x00022fde) list_double_number_pane_cp2

0x86be,	// (0x00022fde) list_double_pane_cp2_ParamLimits

0x86be,	// (0x00022fde) list_double_pane_cp2

0x86e2,	// (0x00023002) list_single_2graphic_pane_cp2_ParamLimits

0x86e2,	// (0x00023002) list_single_2graphic_pane_cp2

0x86e2,	// (0x00023002) list_single_graphic_heading_pane_cp2_ParamLimits

0x86e2,	// (0x00023002) list_single_graphic_heading_pane_cp2

0x86e2,	// (0x00023002) list_single_graphic_pane_cp2_ParamLimits

0x86e2,	// (0x00023002) list_single_graphic_pane_cp2

0x86e2,	// (0x00023002) list_single_heading_pane_cp2_ParamLimits

0x86e2,	// (0x00023002) list_single_heading_pane_cp2

0x86fb,	// (0x0002301b) list_single_large_graphic_pane_cp2_ParamLimits

0x86fb,	// (0x0002301b) list_single_large_graphic_pane_cp2

0x86e2,	// (0x00023002) list_single_number_heading_pane_cp2_ParamLimits

0x86e2,	// (0x00023002) list_single_number_heading_pane_cp2

0x86e2,	// (0x00023002) list_single_number_pane_cp2_ParamLimits

0x86e2,	// (0x00023002) list_single_number_pane_cp2

0x86e2,	// (0x00023002) list_single_pane_cp2_ParamLimits

0x86e2,	// (0x00023002) list_single_pane_cp2

0x8751,	// (0x00023071) bg_popup_sub_pane_cp22

0x62e1,	// (0x00020c01) popup_side_volume_key_window_g1

0x630b,	// (0x00020c2b) popup_side_volume_key_window_t1

0x6327,	// (0x00020c47) volume_small_pane_cp1

0x7a35,	// (0x00022355) bg_popup_sub_pane_cp24_ParamLimits

0x7a35,	// (0x00022355) bg_popup_sub_pane_cp24

0x8789,	// (0x000230a9) fep_china_uni_candidate_pane_ParamLimits

0x8789,	// (0x000230a9) fep_china_uni_candidate_pane

0x879d,	// (0x000230bd) fep_china_uni_entry_pane

0x87ad,	// (0x000230cd) popup_fep_china_uni_window_g1

0x87c9,	// (0x000230e9) fep_china_uni_entry_pane_g1

0x87d1,	// (0x000230f1) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x0002a05a) fep_china_uni_entry_pane_g

0x87d9,	// (0x000230f9) fep_entry_item_pane

0x87e3,	// (0x00023103) fep_candidate_item_pane

0x87eb,	// (0x0002310b) fep_china_uni_candidate_pane_g1

0x87f3,	// (0x00023113) fep_china_uni_candidate_pane_g2

0x87fb,	// (0x0002311b) fep_china_uni_candidate_pane_g3

0x8803,	// (0x00023123) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x0002a05f) fep_china_uni_candidate_pane_g

0x76d0,	// (0x00021ff0) fep_entry_item_pane_g1

0x880b,	// (0x0002312b) fep_entry_item_pane_t1_ParamLimits

0x880b,	// (0x0002312b) fep_entry_item_pane_t1

0x8821,	// (0x00023141) fep_candidate_item_pane_t1_ParamLimits

0x8821,	// (0x00023141) fep_candidate_item_pane_t1

0x8836,	// (0x00023156) fep_candidate_item_pane_t2_ParamLimits

0x8836,	// (0x00023156) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x0002a068) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x0002a068) fep_candidate_item_pane_t

0x77ba,	// (0x000220da) list_highlight_pane_cp31_ParamLimits

0x77ba,	// (0x000220da) list_highlight_pane_cp31

0x8848,	// (0x00023168) level_1_signal_lsc

0x8851,	// (0x00023171) level_2_signal_lsc

0x885a,	// (0x0002317a) level_3_signal_lsc

0x8863,	// (0x00023183) level_4_signal_lsc

0x886c,	// (0x0002318c) level_5_signal_lsc

0x8875,	// (0x00023195) level_6_signal_lsc

0x887e,	// (0x0002319e) level_7_signal_lsc

0x887e,	// (0x0002319e) level_1_battery_lsc

0x8887,	// (0x000231a7) level_2_battery_lsc

0x8890,	// (0x000231b0) level_3_battery_lsc

0x8899,	// (0x000231b9) level_4_battery_lsc

0x88a2,	// (0x000231c2) level_5_battery_lsc

0x88ab,	// (0x000231cb) level_6_battery_lsc

0x8848,	// (0x00023168) level_7_battery_lsc

0x88b4,	// (0x000231d4) scroll_handle_focus_pane_g1

0x88bd,	// (0x000231dd) scroll_handle_focus_pane_g2

0x88c6,	// (0x000231e6) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x0002a06d) scroll_handle_focus_pane_g

0x534b,	// (0x0001fc6b) list_single_2graphic_pane_g1_ParamLimits

0x534b,	// (0x0001fc6b) list_single_2graphic_pane_g1

0x4cb7,	// (0x0001f5d7) list_single_2graphic_pane_g2_ParamLimits

0x4cb7,	// (0x0001f5d7) list_single_2graphic_pane_g2

0x4c3d,	// (0x0001f55d) list_single_2graphic_pane_g3_ParamLimits

0x4c3d,	// (0x0001f55d) list_single_2graphic_pane_g3

0x5357,	// (0x0001fc77) list_single_2graphic_pane_g4_ParamLimits

0x5357,	// (0x0001fc77) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x0002a074) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x0002a074) list_single_2graphic_pane_g

0x5363,	// (0x0001fc83) list_single_2graphic_pane_t1_ParamLimits

0x5363,	// (0x0001fc83) list_single_2graphic_pane_t1

0x5391,	// (0x0001fcb1) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5391,	// (0x0001fcb1) list_double2_graphic_large_graphic_pane_g1

0x4f18,	// (0x0001f838) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4f18,	// (0x0001f838) list_double2_graphic_large_graphic_pane_g2

0x4e4e,	// (0x0001f76e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4e4e,	// (0x0001f76e) list_double2_graphic_large_graphic_pane_g3

0x53a1,	// (0x0001fcc1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x53a1,	// (0x0001fcc1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x0002a07d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x0002a07d) list_double2_graphic_large_graphic_pane_g

0x53ad,	// (0x0001fccd) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x53ad,	// (0x0001fccd) list_double2_graphic_large_graphic_pane_t1

0x53c3,	// (0x0001fce3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x53c3,	// (0x0001fce3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x0002a086) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x0002a086) list_double2_graphic_large_graphic_pane_t

0x8a0e,	// (0x0002332e) popup_fast_swap_window_ParamLimits

0x8a0e,	// (0x0002332e) popup_fast_swap_window

0x8a2a,	// (0x0002334a) popup_side_volume_key_window

0x8a46,	// (0x00023366) stacon_top_pane

0x8a50,	// (0x00023370) status_pane_ParamLimits

0x8a50,	// (0x00023370) status_pane

0x8a46,	// (0x00023366) status_small_pane

0x76da,	// (0x00021ffa) control_pane

0x76da,	// (0x00021ffa) stacon_bottom_pane

0x8009,	// (0x00022929) scroll_pane_cp121

0x8000,	// (0x00022920) set_content_pane

0x88cf,	// (0x000231ef) bg_active_tab_pane_g1_cp1

0x88d8,	// (0x000231f8) bg_active_tab_pane_g2_cp1

0x88e1,	// (0x00023201) bg_active_tab_pane_g3_cp1

0x88cf,	// (0x000231ef) bg_passive_tab_pane_g1_cp1

0x88d8,	// (0x000231f8) bg_passive_tab_pane_g2_cp1

0x88e1,	// (0x00023201) bg_passive_tab_pane_g3_cp1

0x88ea,	// (0x0002320a) bg_active_tab_pane_g1_cp2

0x88d8,	// (0x000231f8) bg_active_tab_pane_g2_cp2

0x88f3,	// (0x00023213) bg_active_tab_pane_g3_cp2

0x88ea,	// (0x0002320a) bg_passive_tab_pane_g1_cp2

0x88d8,	// (0x000231f8) bg_passive_tab_pane_g2_cp2

0x88f3,	// (0x00023213) bg_passive_tab_pane_g3_cp2

0x88fc,	// (0x0002321c) bg_active_tab_pane_g1_cp3

0x88d8,	// (0x000231f8) bg_active_tab_pane_g2_cp3

0x8905,	// (0x00023225) bg_active_tab_pane_g3_cp3

0x88fc,	// (0x0002321c) bg_passive_tab_pane_g1_cp3

0x88d8,	// (0x000231f8) bg_passive_tab_pane_g2_cp3

0x8905,	// (0x00023225) bg_passive_tab_pane_g3_cp3

0x890e,	// (0x0002322e) bg_active_tab_pane_g1_cp4

0x88d8,	// (0x000231f8) bg_active_tab_pane_g2_cp4

0x8919,	// (0x00023239) bg_active_tab_pane_g3_cp4

0x890e,	// (0x0002322e) bg_passive_tab_pane_g1_cp4

0x88d8,	// (0x000231f8) bg_passive_tab_pane_g2_cp4

0x8919,	// (0x00023239) bg_passive_tab_pane_g3_cp4

0x8962,	// (0x00023282) bg_active_tab_pane_g1_cp5

0x88d8,	// (0x000231f8) bg_active_tab_pane_g2_cp5

0x896b,	// (0x0002328b) bg_active_tab_pane_g3_cp5

0x8962,	// (0x00023282) bg_passive_tab_pane_g1_cp5

0x88d8,	// (0x000231f8) bg_passive_tab_pane_g2_cp5

0x896b,	// (0x0002328b) bg_passive_tab_pane_g3_cp5

0x8974,	// (0x00023294) list_set_graphic_pane_ParamLimits

0x8974,	// (0x00023294) list_set_graphic_pane

0x76da,	// (0x00021ffa) bg_set_opt_pane_cp4

0x8991,	// (0x000232b1) list_set_graphic_pane_g1_ParamLimits

0x8991,	// (0x000232b1) list_set_graphic_pane_g1

0x899d,	// (0x000232bd) list_set_graphic_pane_g2_ParamLimits

0x899d,	// (0x000232bd) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x0002a08b) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x0002a08b) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0002a3f5) volume_small_pane_cp_g

0x89c1,	// (0x000232e1) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x89c1,	// (0x000232e1) list_double2_large_graphic_pane_g1_cp2

0x89cd,	// (0x000232ed) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x89cd,	// (0x000232ed) list_double2_large_graphic_pane_g2_cp2

0x89de,	// (0x000232fe) list_double2_large_graphic_pane_g3_cp2

0x89e6,	// (0x00023306) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x89e6,	// (0x00023306) list_double2_large_graphic_pane_t1_cp2

0x89fc,	// (0x0002331c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x89fc,	// (0x0002331c) list_double2_large_graphic_pane_t2_cp2

0xabdb,	// (0x000254fb) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xabdb,	// (0x000254fb) list_double_large_graphic_pane_g1_cp2

0xabec,	// (0x0002550c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xabec,	// (0x0002550c) list_double_large_graphic_pane_g2_cp2

0x8b6c,	// (0x0002348c) list_double_large_graphic_pane_g3_cp2

0xabfd,	// (0x0002551d) list_double_large_graphic_pane_g4_cp

0xac05,	// (0x00025525) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xac05,	// (0x00025525) list_double_large_graphic_pane_t1_cp2

0xac1c,	// (0x0002553c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xac1c,	// (0x0002553c) list_double_large_graphic_pane_t2_cp2

0x8a5e,	// (0x0002337e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8a5e,	// (0x0002337e) list_double2_graphic_pane_g1_cp2

0x8a6c,	// (0x0002338c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8a6c,	// (0x0002338c) list_double2_graphic_pane_g2_cp2

0x8a7d,	// (0x0002339d) list_double2_graphic_pane_g3_cp2

0x8a87,	// (0x000233a7) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8a87,	// (0x000233a7) list_double2_graphic_pane_t1_cp2

0x8a9d,	// (0x000233bd) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8a9d,	// (0x000233bd) list_double2_graphic_pane_t2_cp2

0x8aaf,	// (0x000233cf) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8aaf,	// (0x000233cf) list_single_number_heading_pane_g1_cp2

0x8abb,	// (0x000233db) list_single_number_heading_pane_g2_cp2

0x8ac3,	// (0x000233e3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8ac3,	// (0x000233e3) list_single_number_heading_pane_t1_cp2

0x8ad9,	// (0x000233f9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8ad9,	// (0x000233f9) list_single_number_heading_pane_t2_cp2

0x8aeb,	// (0x0002340b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8aeb,	// (0x0002340b) list_single_number_heading_pane_t3_cp2

0x8aaf,	// (0x000233cf) list_single_heading_pane_g1_cp2_ParamLimits

0x8aaf,	// (0x000233cf) list_single_heading_pane_g1_cp2

0x8abb,	// (0x000233db) list_single_heading_pane_g2_cp2

0x8ac3,	// (0x000233e3) list_single_heading_pane_t1_cp2_ParamLimits

0x8ac3,	// (0x000233e3) list_single_heading_pane_t1_cp2

0xa9e3,	// (0x00025303) list_single_heading_pane_t2_cp2_ParamLimits

0xa9e3,	// (0x00025303) list_single_heading_pane_t2_cp2

0xa925,	// (0x00025245) list_double_graphic_pane_g1_cp2_ParamLimits

0xa925,	// (0x00025245) list_double_graphic_pane_g1_cp2

0xa931,	// (0x00025251) list_double_graphic_pane_g2_cp2_ParamLimits

0xa931,	// (0x00025251) list_double_graphic_pane_g2_cp2

0xa940,	// (0x00025260) list_double_graphic_pane_g3_cp2

0xa948,	// (0x00025268) list_double_graphic_pane_t1_cp2_ParamLimits

0xa948,	// (0x00025268) list_double_graphic_pane_t1_cp2

0xa95e,	// (0x0002527e) list_double_graphic_pane_t2_cp2_ParamLimits

0xa95e,	// (0x0002527e) list_double_graphic_pane_t2_cp2

0x8b60,	// (0x00023480) list_double_number_pane_g1_cp2_ParamLimits

0x8b60,	// (0x00023480) list_double_number_pane_g1_cp2

0x8b6c,	// (0x0002348c) list_double_number_pane_g2_cp2

0xa8e9,	// (0x00025209) list_double_number_pane_t1_cp2_ParamLimits

0xa8e9,	// (0x00025209) list_double_number_pane_t1_cp2

0xa8fd,	// (0x0002521d) list_double_number_pane_t2_cp2_ParamLimits

0xa8fd,	// (0x0002521d) list_double_number_pane_t2_cp2

0xa913,	// (0x00025233) list_double_number_pane_t3_cp2_ParamLimits

0xa913,	// (0x00025233) list_double_number_pane_t3_cp2

0xa7d2,	// (0x000250f2) list_single_graphic_pane_g1_cp2_ParamLimits

0xa7d2,	// (0x000250f2) list_single_graphic_pane_g1_cp2

0x8bc4,	// (0x000234e4) list_single_graphic_pane_g2_cp2_ParamLimits

0x8bc4,	// (0x000234e4) list_single_graphic_pane_g2_cp2

0x8bd0,	// (0x000234f0) list_single_graphic_pane_g3_cp2

0xa7a8,	// (0x000250c8) list_single_graphic_pane_t1_cp2_ParamLimits

0xa7a8,	// (0x000250c8) list_single_graphic_pane_t1_cp2

0x8bc4,	// (0x000234e4) list_single_number_pane_g1_cp2_ParamLimits

0x8bc4,	// (0x000234e4) list_single_number_pane_g1_cp2

0x8bd0,	// (0x000234f0) list_single_number_pane_g2_cp2

0xa7a8,	// (0x000250c8) list_single_number_pane_t1_cp2_ParamLimits

0xa7a8,	// (0x000250c8) list_single_number_pane_t1_cp2

0xa7be,	// (0x000250de) list_single_number_pane_t2_cp2_ParamLimits

0xa7be,	// (0x000250de) list_single_number_pane_t2_cp2

0x89cd,	// (0x000232ed) list_double2_pane_g1_cp2_ParamLimits

0x89cd,	// (0x000232ed) list_double2_pane_g1_cp2

0x89de,	// (0x000232fe) list_double2_pane_g2_cp2

0x8b38,	// (0x00023458) list_double2_pane_t1_cp2_ParamLimits

0x8b38,	// (0x00023458) list_double2_pane_t1_cp2

0x8b4e,	// (0x0002346e) list_double2_pane_t2_cp2_ParamLimits

0x8b4e,	// (0x0002346e) list_double2_pane_t2_cp2

0x8b60,	// (0x00023480) list_double_pane_g1_cp2_ParamLimits

0x8b60,	// (0x00023480) list_double_pane_g1_cp2

0x8b6c,	// (0x0002348c) list_double_pane_g2_cp2

0x8b74,	// (0x00023494) list_double_pane_t1_cp2_ParamLimits

0x8b74,	// (0x00023494) list_double_pane_t1_cp2

0x8b8a,	// (0x000234aa) list_double_pane_t2_cp2_ParamLimits

0x8b8a,	// (0x000234aa) list_double_pane_t2_cp2

0x8bb4,	// (0x000234d4) list_single_pane_cp2_g3

0x8bc4,	// (0x000234e4) list_single_pane_g1_cp2_ParamLimits

0x8bc4,	// (0x000234e4) list_single_pane_g1_cp2

0x8bd0,	// (0x000234f0) list_single_pane_g2_cp2

0x8bd8,	// (0x000234f8) list_single_pane_t1_cp2_ParamLimits

0x8bd8,	// (0x000234f8) list_single_pane_t1_cp2

0x8bf0,	// (0x00023510) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8bf0,	// (0x00023510) list_single_large_graphic_pane_g1_cp2

0x8bfc,	// (0x0002351c) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8bfc,	// (0x0002351c) list_single_large_graphic_pane_g2_cp2

0x8c08,	// (0x00023528) list_single_large_graphic_pane_g3_cp2

0x8c10,	// (0x00023530) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8c10,	// (0x00023530) list_single_large_graphic_pane_g4_cp1

0x8c2a,	// (0x0002354a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8c2a,	// (0x0002354a) list_single_large_graphic_pane_t1_cp2

0xa774,	// (0x00025094) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa774,	// (0x00025094) list_single_graphic_heading_pane_g1_cp2

0xa735,	// (0x00025055) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa735,	// (0x00025055) list_single_graphic_heading_pane_g4_cp2

0x8bd0,	// (0x000234f0) list_single_graphic_heading_pane_g5_cp2

0xa780,	// (0x000250a0) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa780,	// (0x000250a0) list_single_graphic_heading_pane_t1_cp2

0xa796,	// (0x000250b6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa796,	// (0x000250b6) list_single_graphic_heading_pane_t2_cp2

0xa729,	// (0x00025049) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa729,	// (0x00025049) list_single_2graphic_pane_g1_cp2

0xa735,	// (0x00025055) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa735,	// (0x00025055) list_single_2graphic_pane_g2_cp2

0x8bd0,	// (0x000234f0) list_single_2graphic_pane_g3_cp2

0xa746,	// (0x00025066) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa746,	// (0x00025066) list_single_2graphic_pane_g4_cp2

0xa752,	// (0x00025072) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa752,	// (0x00025072) list_single_2graphic_pane_t1_cp2

0x76d0,	// (0x00021ff0) list_highlight_pane_g10_cp1

0xa301,	// (0x00024c21) list_highlight_pane_g1_cp1

0xa309,	// (0x00024c29) list_highlight_pane_g2_cp1

0xa311,	// (0x00024c31) list_highlight_pane_g3_cp1

0xa319,	// (0x00024c39) list_highlight_pane_g4_cp1

0xa321,	// (0x00024c41) list_highlight_pane_g5_cp1

0xa329,	// (0x00024c49) list_highlight_pane_g6_cp1

0xa331,	// (0x00024c51) list_highlight_pane_g7_cp1

0xa339,	// (0x00024c59) list_highlight_pane_g8_cp1

0xa341,	// (0x00024c61) list_highlight_pane_g9_cp1

0xa221,	// (0x00024b41) form_field_slider_pane_t3

0xa22f,	// (0x00024b4f) form_field_slider_pane_t4

0xa23d,	// (0x00024b5d) slider_form_pane_ParamLimits

0xa23d,	// (0x00024b5d) slider_form_pane

0x76da,	// (0x00021ffa) control_abbreviations

0x76da,	// (0x00021ffa) control_conventions

0x76da,	// (0x00021ffa) control_definitions

0x76da,	// (0x00021ffa) format_table_attribute

0xaa2d,	// (0x0002534d) bg_popup_preview_window_pane_g9

0x76da,	// (0x00021ffa) format_table_data2

0x76da,	// (0x00021ffa) format_table_data3

0x76da,	// (0x00021ffa) format_table_data_example

0x0008,

0x76da,	// (0x00021ffa) intro_purpose

0xf900,	// (0x0002a220) bg_popup_preview_window_pane_g

0x76da,	// (0x00021ffa) texts_category

0x76da,	// (0x00021ffa) texts_graphics

0x8c40,	// (0x00023560) text_digital

0x8c4f,	// (0x0002356f) text_primary

0x8c5e,	// (0x0002357e) text_primary_small

0x8c6d,	// (0x0002358d) text_secondary

0x8c7c,	// (0x0002359c) text_title

0xb155,	// (0x00025a75) bg_passive_tab_pane_g1_cp3_srt

0x88d8,	// (0x000231f8) bg_passive_tab_pane_g2_cp3_srt

0xb15e,	// (0x00025a7e) bg_passive_tab_pane_g3_cp3_srt

0x77ba,	// (0x000220da) bg_active_tab_pane_cp3_srt_ParamLimits

0x77ba,	// (0x000220da) bg_active_tab_pane_cp3_srt

0xb167,	// (0x00025a87) tabs_4_active_pane_srt_g1

0xb16f,	// (0x00025a8f) tabs_4_active_pane_srt_t1_ParamLimits

0xb16f,	// (0x00025a8f) tabs_4_active_pane_srt_t1

0xb155,	// (0x00025a75) bg_active_tab_pane_g1_cp3_copy1

0x88d8,	// (0x000231f8) bg_active_tab_pane_g2_cp3_copy1

0xb15e,	// (0x00025a7e) bg_active_tab_pane_g3_cp3_copy1

0x77ba,	// (0x000220da) tabs_2_long_active_pane_srt_ParamLimits

0x77ba,	// (0x000220da) tabs_2_long_active_pane_srt

0x77ba,	// (0x000220da) tabs_2_long_passive_pane_srt_ParamLimits

0x77ba,	// (0x000220da) tabs_2_long_passive_pane_srt

0x8214,	// (0x00022b34) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8214,	// (0x00022b34) bg_passive_tab_pane_cp4_srt

0xae71,	// (0x00025791) bg_passive_tab_pane_g1_cp4_srt

0x88d8,	// (0x000231f8) bg_passive_tab_pane_g2_cp4_srt

0xae7a,	// (0x0002579a) bg_passive_tab_pane_g3_cp4_srt

0x81f3,	// (0x00022b13) bg_active_tab_pane_cp4_srt_ParamLimits

0x81f3,	// (0x00022b13) bg_active_tab_pane_cp4_srt

0xae83,	// (0x000257a3) tabs_2_long_active_pane_srt_t1_ParamLimits

0xae83,	// (0x000257a3) tabs_2_long_active_pane_srt_t1

0xae71,	// (0x00025791) bg_active_tab_pane_g1_cp4_srt

0x88d8,	// (0x000231f8) bg_active_tab_pane_g2_cp4_srt

0xae7a,	// (0x0002579a) bg_active_tab_pane_g3_cp4_srt

0x7a35,	// (0x00022355) tabs_3_long_active_pane_srt_ParamLimits

0x7a35,	// (0x00022355) tabs_3_long_active_pane_srt

0x7a35,	// (0x00022355) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7a35,	// (0x00022355) tabs_3_long_passive_pane_cp_srt

0x7a35,	// (0x00022355) tabs_3_long_passive_pane_srt_ParamLimits

0x7a35,	// (0x00022355) tabs_3_long_passive_pane_srt

0x8214,	// (0x00022b34) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8214,	// (0x00022b34) bg_passive_tab_pane_cp5_srt

0x8962,	// (0x00023282) bg_passive_tab_pane_g1_cp5_srt

0x88d8,	// (0x000231f8) bg_passive_tab_pane_g2_cp5_srt

0x896b,	// (0x0002328b) bg_passive_tab_pane_g3_cp5_srt

0x81f3,	// (0x00022b13) bg_active_tab_pane_cp5_srt_ParamLimits

0x81f3,	// (0x00022b13) bg_active_tab_pane_cp5_srt

0xae5f,	// (0x0002577f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xae5f,	// (0x0002577f) tabs_3_long_active_pane_srt_t1

0x8962,	// (0x00023282) bg_active_tab_pane_g1_cp5_srt

0x88d8,	// (0x000231f8) bg_active_tab_pane_g2_cp5_srt

0x896b,	// (0x0002328b) bg_active_tab_pane_g3_cp5_srt

0xae51,	// (0x00025771) navi_text_pane_srt_t1

0xae49,	// (0x00025769) navi_icon_pane_srt_g1

0x8e4f,	// (0x0002376f) midp_editing_number_pane_srt

0x8c8b,	// (0x000235ab) midp_ticker_pane_srt

0x8e57,	// (0x00023777) midp_ticker_pane_srt_g1

0x8e5f,	// (0x0002377f) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x0002a0aa) midp_ticker_pane_srt_g

0x8e67,	// (0x00023787) midp_ticker_pane_srt_t1

0xae3a,	// (0x0002575a) midp_editing_number_pane_t1_copy1

0x8c93,	// (0x000235b3) listscroll_midp_pane

0x8c93,	// (0x000235b3) midp_form_pane

0x8d01,	// (0x00023621) midp_info_popup_window_ParamLimits

0x8d01,	// (0x00023621) midp_info_popup_window

0x80de,	// (0x000229fe) bg_popup_sub_pane_cp50_ParamLimits

0x80de,	// (0x000229fe) bg_popup_sub_pane_cp50

0x9f39,	// (0x00024859) listscroll_midp_info_pane_ParamLimits

0x9f39,	// (0x00024859) listscroll_midp_info_pane

0x9f21,	// (0x00024841) listscroll_form_midp_pane_ParamLimits

0x9f21,	// (0x00024841) listscroll_form_midp_pane

0x9f2d,	// (0x0002484d) scroll_bar_cp050

0x9f01,	// (0x00024821) list_midp_pane

0xbb71,	// (0x00026491) signal_pane_g2_cp

0x9e3b,	// (0x0002475b) listscroll_midp_info_pane_t1_ParamLimits

0x9e3b,	// (0x0002475b) listscroll_midp_info_pane_t1

0x9e53,	// (0x00024773) listscroll_midp_info_pane_t2_ParamLimits

0x9e53,	// (0x00024773) listscroll_midp_info_pane_t2

0x9e91,	// (0x000247b1) listscroll_midp_info_pane_t3_ParamLimits

0x9e91,	// (0x000247b1) listscroll_midp_info_pane_t3

0x9ecb,	// (0x000247eb) listscroll_midp_info_pane_t4_ParamLimits

0x9ecb,	// (0x000247eb) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x0002a15b) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x0002a15b) listscroll_midp_info_pane_t

0x81a0,	// (0x00022ac0) scroll_pane_cp21

0x9dd9,	// (0x000246f9) form_midp_field_choice_group_pane

0x9de2,	// (0x00024702) form_midp_field_text_pane

0x9e21,	// (0x00024741) form_midp_field_time_pane

0x9e29,	// (0x00024749) form_midp_gauge_slider_pane

0x9e32,	// (0x00024752) form_midp_gauge_wait_pane

0x76da,	// (0x00021ffa) form_midp_image_pane

0x54d4,	// (0x0001fdf4) list_single_midp_pane_ParamLimits

0x54d4,	// (0x0001fdf4) list_single_midp_pane

0x9d91,	// (0x000246b1) form_midp_field_text_pane_t1

0x9b83,	// (0x000244a3) input_focus_pane_cp050

0x9dc8,	// (0x000246e8) list_midp_form_text_pane

0x9d60,	// (0x00024680) form_midp_field_choice_group_pane_t1

0x9d6e,	// (0x0002468e) input_focus_pane_cp051

0x9d82,	// (0x000246a2) list_midp_choice_pane

0x76da,	// (0x00021ffa) status_idle_pane

0x9d44,	// (0x00024664) form_midp_field_time_pane_t1

0x76d0,	// (0x00021ff0) wait_anim_pane_g2_copy1

0x9d52,	// (0x00024672) form_midp_field_time_pane_t2

0x0001,

0x8daf,	// (0x000236cf) aid_navinavi_width_2_pane

0xf836,	// (0x0002a156) form_midp_field_time_pane_t

0x76da,	// (0x00021ffa) input_focus_pane_cp052

0x76da,	// (0x00021ffa) bg_input_focus_pane_cp040

0x9d04,	// (0x00024624) form_midp_gauge_slider_pane_t1

0x9d12,	// (0x00024632) form_midp_gauge_slider_pane_t2

0x9d20,	// (0x00024640) form_midp_gauge_slider_pane_t3

0x9d2e,	// (0x0002464e) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x0002a14d) form_midp_gauge_slider_pane_t

0x9d3c,	// (0x0002465c) form_midp_slider_pane

0x77ba,	// (0x000220da) bg_input_focus_pane_cp041_ParamLimits

0x77ba,	// (0x000220da) bg_input_focus_pane_cp041

0x9cd1,	// (0x000245f1) form_midp_gauge_wait_pane_t1_ParamLimits

0x9cd1,	// (0x000245f1) form_midp_gauge_wait_pane_t1

0x9ce3,	// (0x00024603) form_midp_gauge_wait_pane_t2_ParamLimits

0x9ce3,	// (0x00024603) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x0002a148) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x0002a148) form_midp_gauge_wait_pane_t

0x9cf5,	// (0x00024615) form_midp_wait_pane_ParamLimits

0x9cf5,	// (0x00024615) form_midp_wait_pane

0x9c9b,	// (0x000245bb) form_midp_image_pane_g1

0x9ca4,	// (0x000245c4) form_midp_image_pane_t1

0x9cb3,	// (0x000245d3) form_midp_image_pane_t2

0x9cc2,	// (0x000245e2) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x0002a141) form_midp_image_pane_t

0x9c92,	// (0x000245b2) list_single_midp_pane_g1

0x54c5,	// (0x0001fde5) list_single_midp_pane_t1

0x9c6a,	// (0x0002458a) list_midp_form_item_pane_ParamLimits

0x9c6a,	// (0x0002458a) list_midp_form_item_pane

0x8d57,	// (0x00023677) list_midp_form_item_pane_t1

0x8d66,	// (0x00023686) midp_ticker_pane_g1

0x8d72,	// (0x00023692) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x0002a090) midp_ticker_pane_g

0x8d7e,	// (0x0002369e) midp_ticker_pane_t1

0xb08b,	// (0x000259ab) midp_editing_number_pane_t1

0xb069,	// (0x00025989) midp_editing_number_pane

0xb078,	// (0x00025998) midp_ticker_pane

0xae2a,	// (0x0002574a) ai_message_heading_pane

0x76da,	// (0x00021ffa) bg_popup_window_pane_cp14

0xae32,	// (0x00025752) listscroll_ai_message_pane

0xadb4,	// (0x000256d4) ai_message_heading_pane_g1_ParamLimits

0xadb4,	// (0x000256d4) ai_message_heading_pane_g1

0xadc0,	// (0x000256e0) ai_message_heading_pane_g2_ParamLimits

0xadc0,	// (0x000256e0) ai_message_heading_pane_g2

0xadcc,	// (0x000256ec) ai_message_heading_pane_g3_ParamLimits

0xadcc,	// (0x000256ec) ai_message_heading_pane_g3

0xadd8,	// (0x000256f8) ai_message_heading_pane_g4_ParamLimits

0xadd8,	// (0x000256f8) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x0002a282) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x0002a282) ai_message_heading_pane_g

0xade4,	// (0x00025704) ai_message_heading_pane_t1_ParamLimits

0xade4,	// (0x00025704) ai_message_heading_pane_t1

0xadfe,	// (0x0002571e) ai_message_heading_pane_t2_ParamLimits

0xadfe,	// (0x0002571e) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x0002a28b) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x0002a28b) ai_message_heading_pane_t

0xae10,	// (0x00025730) bg_popup_heading_pane_cp1_ParamLimits

0xae10,	// (0x00025730) bg_popup_heading_pane_cp1

0xada2,	// (0x000256c2) list_ai_message_pane_ParamLimits

0xada2,	// (0x000256c2) list_ai_message_pane

0x81a0,	// (0x00022ac0) scroll_pane_cp10

0xad3e,	// (0x0002565e) list_ai_message_pane_g1

0xad46,	// (0x00025666) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x0002a25f) list_ai_message_pane_g

0xad4e,	// (0x0002566e) list_ai_message_pane_t1_ParamLimits

0xad4e,	// (0x0002566e) list_ai_message_pane_t1

0xad63,	// (0x00025683) list_ai_message_pane_t2_ParamLimits

0xad63,	// (0x00025683) list_ai_message_pane_t2

0xad78,	// (0x00025698) list_ai_message_pane_t3_ParamLimits

0xad78,	// (0x00025698) list_ai_message_pane_t3

0xad8d,	// (0x000256ad) list_ai_message_pane_t4_ParamLimits

0xad8d,	// (0x000256ad) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x0002a264) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x0002a264) list_ai_message_pane_t

0xad29,	// (0x00025649) cell_ai_soft_ind_pane_ParamLimits

0xad29,	// (0x00025649) cell_ai_soft_ind_pane

0x8d90,	// (0x000236b0) cell_ai_soft_ind_pane_g1_ParamLimits

0x8d90,	// (0x000236b0) cell_ai_soft_ind_pane_g1

0x76da,	// (0x00021ffa) grid_highlight_cp1

0x8d9d,	// (0x000236bd) text_secondary_cp56_ParamLimits

0x8d9d,	// (0x000236bd) text_secondary_cp56

0xacfe,	// (0x0002561e) example_general_pane_ParamLimits

0xacfe,	// (0x0002561e) example_general_pane

0xad0a,	// (0x0002562a) example_parent_pane_g1_ParamLimits

0xad0a,	// (0x0002562a) example_parent_pane_g1

0xad16,	// (0x00025636) example_parent_pane_t1_ParamLimits

0xad16,	// (0x00025636) example_parent_pane_t1

0x937a,	// (0x00023c9a) popup_preview_text_window_ParamLimits

0x937a,	// (0x00023c9a) popup_preview_text_window

0x8bbc,	// (0x000234dc) list_single_pane_cp2_g4

0x7aeb,	// (0x0002240b) bg_popup_preview_window_pane_ParamLimits

0x7aeb,	// (0x0002240b) bg_popup_preview_window_pane

0xaa35,	// (0x00025355) popup_preview_text_window_t1_ParamLimits

0xaa35,	// (0x00025355) popup_preview_text_window_t1

0xaa53,	// (0x00025373) popup_preview_text_window_t2_ParamLimits

0xaa53,	// (0x00025373) popup_preview_text_window_t2

0xaa9c,	// (0x000253bc) popup_preview_text_window_t3_ParamLimits

0xaa9c,	// (0x000253bc) popup_preview_text_window_t3

0xaae1,	// (0x00025401) popup_preview_text_window_t4_ParamLimits

0xaae1,	// (0x00025401) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x0002a233) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x0002a233) popup_preview_text_window_t

0xab5f,	// (0x0002547f) scroll_pane_cp11

0x9a93,	// (0x000243b3) bg_popup_preview_window_pane_g1

0xa9f5,	// (0x00025315) bg_popup_preview_window_pane_g2

0xa9fd,	// (0x0002531d) bg_popup_preview_window_pane_g3

0xaa05,	// (0x00025325) bg_popup_preview_window_pane_g4

0xaa0d,	// (0x0002532d) bg_popup_preview_window_pane_g5

0xaa15,	// (0x00025335) bg_popup_preview_window_pane_g6

0xaa1d,	// (0x0002533d) bg_popup_preview_window_pane_g7

0xaa25,	// (0x00025345) bg_popup_preview_window_pane_g8

0x5c26,	// (0x00020546) aid_popup_width_pane

0x9358,	// (0x00023c78) popup_midp_note_alarm_window_ParamLimits

0x9358,	// (0x00023c78) popup_midp_note_alarm_window

0x801a,	// (0x0002293a) data_form_pane_ParamLimits

0x51a5,	// (0x0001fac5) form_field_data_pane_g1

0x51af,	// (0x0001facf) form_field_data_pane_t1_ParamLimits

0x8026,	// (0x00022946) input_focus_pane_ParamLimits

0x8034,	// (0x00022954) data_form_wide_pane_ParamLimits

0x51c7,	// (0x0001fae7) form_field_data_wide_pane_g1

0x51d3,	// (0x0001faf3) form_field_data_wide_pane_t1_ParamLimits

0x7d97,	// (0x000226b7) input_focus_pane_cp6_ParamLimits

0x814d,	// (0x00022a6d) input_popup_find_pane_g1_ParamLimits

0x814d,	// (0x00022a6d) input_popup_find_pane_g1

0x6190,	// (0x00020ab0) aid_navi_side_left_pane

0x61a5,	// (0x00020ac5) aid_navi_side_right_pane

0xa3fc,	// (0x00024d1c) bg_popup_window_pane_cp30_ParamLimits

0xa3fc,	// (0x00024d1c) bg_popup_window_pane_cp30

0xa476,	// (0x00024d96) popup_midp_note_alarm_window_g1_ParamLimits

0xa476,	// (0x00024d96) popup_midp_note_alarm_window_g1

0xa4a6,	// (0x00024dc6) popup_midp_note_alarm_window_t1_ParamLimits

0xa4a6,	// (0x00024dc6) popup_midp_note_alarm_window_t1

0xa547,	// (0x00024e67) popup_midp_note_alarm_window_t2_ParamLimits

0xa547,	// (0x00024e67) popup_midp_note_alarm_window_t2

0xa5f5,	// (0x00024f15) popup_midp_note_alarm_window_t3_ParamLimits

0xa5f5,	// (0x00024f15) popup_midp_note_alarm_window_t3

0xa627,	// (0x00024f47) popup_midp_note_alarm_window_t4_ParamLimits

0xa627,	// (0x00024f47) popup_midp_note_alarm_window_t4

0xa64d,	// (0x00024f6d) popup_midp_note_alarm_window_t5_ParamLimits

0xa64d,	// (0x00024f6d) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x0002a1d0) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x0002a1d0) popup_midp_note_alarm_window_t

0xa6f9,	// (0x00025019) wait_bar_pane_cp1_ParamLimits

0xa6f9,	// (0x00025019) wait_bar_pane_cp1

0x76da,	// (0x00021ffa) wait_anim_pane_copy1

0x76da,	// (0x00021ffa) wait_border_pane_copy1

0xa0e2,	// (0x00024a02) wait_border_pane_g1_copy1

0x51ed,	// (0x0001fb0d) form_field_popup_pane_g1

0x51f5,	// (0x0001fb15) form_field_popup_pane_t1_ParamLimits

0x8026,	// (0x00022946) input_focus_pane_cp7_ParamLimits

0x8060,	// (0x00022980) list_form_pane_ParamLimits

0x520d,	// (0x0001fb2d) form_field_popup_wide_pane_g1

0x5215,	// (0x0001fb35) form_field_popup_wide_pane_t1_ParamLimits

0x8026,	// (0x00022946) input_focus_pane_cp8_ParamLimits

0x806c,	// (0x0002298c) list_form_wide_pane_ParamLimits

0xb1e1,	// (0x00025b01) aid_size_cell_graphic_pane

0x529f,	// (0x0001fbbf) data_form_pane_t1_ParamLimits

0x552e,	// (0x0001fe4e) data_form_wide_pane_t1_ParamLimits

0x965b,	// (0x00023f7b) bg_status_flat_pane

0x771a,	// (0x0002203a) title_pane_t1_ParamLimits

0x7782,	// (0x000220a2) title_pane_t2_ParamLimits

0x77a8,	// (0x000220c8) title_pane_t3_ParamLimits

0xf573,	// (0x00029e93) title_pane_t_ParamLimits

0x8621,	// (0x00022f41) level_1_signal_ParamLimits

0x862e,	// (0x00022f4e) level_2_signal_ParamLimits

0x863b,	// (0x00022f5b) level_3_signal_ParamLimits

0x8648,	// (0x00022f68) level_4_signal_ParamLimits

0x8655,	// (0x00022f75) level_5_signal_ParamLimits

0x8662,	// (0x00022f82) level_6_signal_ParamLimits

0x866f,	// (0x00022f8f) level_7_signal_ParamLimits

0x8621,	// (0x00022f41) level_1_battery_ParamLimits

0x862e,	// (0x00022f4e) level_2_battery_ParamLimits

0x863b,	// (0x00022f5b) level_3_battery_ParamLimits

0x8648,	// (0x00022f68) level_4_battery_ParamLimits

0x8655,	// (0x00022f75) level_5_battery_ParamLimits

0x8662,	// (0x00022f82) level_6_battery_ParamLimits

0x866f,	// (0x00022f8f) level_7_battery_ParamLimits

0xa301,	// (0x00024c21) bg_status_flat_pane_g1

0xa309,	// (0x00024c29) bg_status_flat_pane_g2

0xa311,	// (0x00024c31) bg_status_flat_pane_g3

0xa319,	// (0x00024c39) bg_status_flat_pane_g4

0xa321,	// (0x00024c41) bg_status_flat_pane_g5

0xa329,	// (0x00024c49) bg_status_flat_pane_g6

0xa331,	// (0x00024c51) bg_status_flat_pane_g7

0x77d0,	// (0x000220f0) tabs_3_active_pane_t1_ParamLimits

0x77d0,	// (0x000220f0) tabs_3_passive_pane_t1_ParamLimits

0x77ea,	// (0x0002210a) tabs_4_active_pane_t1_ParamLimits

0x77ea,	// (0x0002210a) tabs_4_1_passive_pane_t1_ParamLimits

0x81e1,	// (0x00022b01) tabs_2_active_pane_t1_ParamLimits

0x81e1,	// (0x00022b01) tabs_2_passive_pane_t1_ParamLimits

0x81f3,	// (0x00022b13) bg_active_tab_pane_cp4_ParamLimits

0x8201,	// (0x00022b21) tabs_2_long_active_pane_t1_ParamLimits

0x8214,	// (0x00022b34) bg_passive_tab_pane_cp4_ParamLimits

0x66d8,	// (0x00020ff8) list_single_midp_graphic_pane_t1_ParamLimits

0x81f3,	// (0x00022b13) bg_active_tab_pane_cp5_ParamLimits

0x8220,	// (0x00022b40) tabs_3_long_active_pane_t1_ParamLimits

0x8214,	// (0x00022b34) bg_passive_tab_pane_cp5_ParamLimits

0x66d8,	// (0x00020ff8) list_single_midp_graphic_pane_t1

0x965b,	// (0x00023f7b) bg_status_flat_pane_ParamLimits

0x971e,	// (0x0002403e) indicator_pane_cp2_ParamLimits

0x971e,	// (0x0002403e) indicator_pane_cp2

0x984e,	// (0x0002416e) navi_pane_srt_ParamLimits

0x984e,	// (0x0002416e) navi_pane_srt

0x9872,	// (0x00024192) popup_clock_digital_analogue_window_cp1

0x7897,	// (0x000221b7) indicator_pane_t1

0x8c8b,	// (0x000235ab) copy_highlight_pane

0x8c8b,	// (0x000235ab) cursor_graphics_pane

0x8c8b,	// (0x000235ab) graphic_within_text_pane

0x8c8b,	// (0x000235ab) link_highlight_pane

0xab22,	// (0x00025442) popup_preview_text_window_t5_ParamLimits

0xab22,	// (0x00025442) popup_preview_text_window_t5

0x8db7,	// (0x000236d7) cursor_digital_pane

0x8db7,	// (0x000236d7) cursor_primary_pane

0x8dc8,	// (0x000236e8) cursor_primary_small_pane

0x8dd0,	// (0x000236f0) cursor_secondary_pane

0x8dd8,	// (0x000236f8) cursor_title_pane

0x8db7,	// (0x000236d7) link_highlight_digital_pane

0x8dbf,	// (0x000236df) link_highlight_primary_pane

0x8dc8,	// (0x000236e8) link_highlight_primary_small_pane

0x8dd0,	// (0x000236f0) link_highlight_secondary_pane

0x8dd8,	// (0x000236f8) link_highlight_title_pane

0x8db7,	// (0x000236d7) copy_highlight_digital_pane

0x8db7,	// (0x000236d7) copy_highlight_primary_pane

0x8dc8,	// (0x000236e8) copy_highlight_primary_small_pane

0x8dd0,	// (0x000236f0) copy_highlight_secondary_pane

0x8dd8,	// (0x000236f8) copy_highlight_title_pane

0x8dd0,	// (0x000236f0) graphic_text_digital_pane

0xa39f,	// (0x00024cbf) graphic_text_primary_pane

0xa3a8,	// (0x00024cc8) graphic_text_primary_small_pane

0x8dc8,	// (0x000236e8) graphic_text_secondary_pane

0x8db7,	// (0x000236d7) graphic_text_title_pane

0x8de0,	// (0x00023700) cursor_primary_pane_g1

0xa391,	// (0x00024cb1) cursor_text_primary_t1

0xa379,	// (0x00024c99) cursor_primary_small_pane_g1

0xa383,	// (0x00024ca3) cursor_text_primary_small_t1

0xa361,	// (0x00024c81) cursor_primary_small_pane_g1_copy1

0xa36b,	// (0x00024c8b) cursor_text_primary_small_t1_copy1

0xa349,	// (0x00024c69) cursor_text_title_t1

0xa357,	// (0x00024c77) cursor_title_pane_g1

0x8de0,	// (0x00023700) cursor_digital_pane_g1

0x8dea,	// (0x0002370a) cursor_text_digital_t1

0x8e0f,	// (0x0002372f) link_highlight_primary_pane_g1

0xa2f2,	// (0x00024c12) link_highlight_primary_pane_t1

0x8df8,	// (0x00023718) link_highlight_primary_small_pane_g1

0x8e00,	// (0x00023720) link_highlight_primary_small_pane_t1

0x8e0f,	// (0x0002372f) link_highlight_secondary_pane_g1

0x8e17,	// (0x00023737) link_highlight_secondary_pane_t1

0xa266,	// (0x00024b86) link_highlight_title_pane_g1

0xa26e,	// (0x00024b8e) link_highlight_title_pane_t1

0xa24f,	// (0x00024b6f) link_highlight_digital_pane_g1

0xa257,	// (0x00024b77) link_highlight_digital_pane_t1

0xa127,	// (0x00024a47) copy_highlight_primary_pane_g1

0xa12f,	// (0x00024a4f) copy_highlight_primary_pane_t1

0xa101,	// (0x00024a21) copy_highlight_primary_small_pane_g1

0xa118,	// (0x00024a38) copy_highlight_primary_small_pane_t1

0x8e26,	// (0x00023746) copy_highlight_secondary_pane_g1

0x8e2e,	// (0x0002374e) copy_highlight_secondary_pane_t1

0xa101,	// (0x00024a21) copy_highlight_title_pane_g1

0xa109,	// (0x00024a29) copy_highlight_title_pane_t1

0xa127,	// (0x00024a47) copy_highlight_digital_pane_g1

0xb3ab,	// (0x00025ccb) copy_highlight_digital_pane_t1

0xb2ff,	// (0x00025c1f) graphic_text_primary_pane_g1

0xb38f,	// (0x00025caf) graphic_text_primary_pane_t1

0xb39d,	// (0x00025cbd) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x0002a2ff) graphic_text_primary_pane_t

0xb36b,	// (0x00025c8b) graphic_text_primary_small_pane_g1

0xb373,	// (0x00025c93) graphic_text_primary_small_pane_t1

0xb381,	// (0x00025ca1) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x0002a2fa) graphic_text_primary_small_pane_t

0xb347,	// (0x00025c67) graphic_text_secondary_pane_g1

0xb34f,	// (0x00025c6f) graphic_text_secondary_pane_t1

0xb35d,	// (0x00025c7d) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x0002a2f5) graphic_text_secondary_pane_t

0xb323,	// (0x00025c43) graphic_text_title_pane_g1

0xb32b,	// (0x00025c4b) graphic_text_title_pane_t1

0xb339,	// (0x00025c59) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x0002a2f0) graphic_text_title_pane_t

0xb2ff,	// (0x00025c1f) graphic_text_digital_pane_g1

0xb307,	// (0x00025c27) graphic_text_digital_pane_t1

0xb315,	// (0x00025c35) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x0002a2eb) graphic_text_digital_pane_t

0x77ba,	// (0x000220da) navi_icon_pane_srt_ParamLimits

0x77ba,	// (0x000220da) navi_icon_pane_srt

0x76da,	// (0x00021ffa) navi_midp_pane_srt

0x76da,	// (0x00021ffa) navi_navi_pane_srt

0x77ba,	// (0x000220da) navi_text_pane_srt_ParamLimits

0x77ba,	// (0x000220da) navi_text_pane_srt

0xb2ca,	// (0x00025bea) navi_navi_icon_text_pane_srt

0xb2d2,	// (0x00025bf2) navi_navi_pane_srt_g1_ParamLimits

0xb2d2,	// (0x00025bf2) navi_navi_pane_srt_g1

0xb2e4,	// (0x00025c04) navi_navi_pane_srt_g2_ParamLimits

0xb2e4,	// (0x00025c04) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x0002a2e6) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x0002a2e6) navi_navi_pane_srt_g

0xb2f6,	// (0x00025c16) navi_navi_tabs_pane_srt

0xb2ca,	// (0x00025bea) navi_navi_text_pane_srt

0xb2ca,	// (0x00025bea) navi_navi_volume_pane_srt

0xb2bb,	// (0x00025bdb) navi_navi_text_pane_srt_t1

0x6a52,	// (0x00021372) navi_navi_volume_pane_srt_g1

0x6a5a,	// (0x0002137a) volume_small_pane_srt_ParamLimits

0x6a5a,	// (0x0002137a) volume_small_pane_srt

0x6470,	// (0x00020d90) volume_small_pane_srt_g1_ParamLimits

0x6470,	// (0x00020d90) volume_small_pane_srt_g1

0x6480,	// (0x00020da0) volume_small_pane_srt_g2_ParamLimits

0x6480,	// (0x00020da0) volume_small_pane_srt_g2

0x6491,	// (0x00020db1) volume_small_pane_srt_g3_ParamLimits

0x6491,	// (0x00020db1) volume_small_pane_srt_g3

0x64a2,	// (0x00020dc2) volume_small_pane_srt_g4_ParamLimits

0x64a2,	// (0x00020dc2) volume_small_pane_srt_g4

0x64b3,	// (0x00020dd3) volume_small_pane_srt_g5_ParamLimits

0x64b3,	// (0x00020dd3) volume_small_pane_srt_g5

0x64c4,	// (0x00020de4) volume_small_pane_srt_g6_ParamLimits

0x64c4,	// (0x00020de4) volume_small_pane_srt_g6

0x64d5,	// (0x00020df5) volume_small_pane_srt_g7_ParamLimits

0x64d5,	// (0x00020df5) volume_small_pane_srt_g7

0x64e6,	// (0x00020e06) volume_small_pane_srt_g8_ParamLimits

0x64e6,	// (0x00020e06) volume_small_pane_srt_g8

0x64f7,	// (0x00020e17) volume_small_pane_srt_g9_ParamLimits

0x64f7,	// (0x00020e17) volume_small_pane_srt_g9

0x6508,	// (0x00020e28) volume_small_pane_srt_g10_ParamLimits

0x6508,	// (0x00020e28) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x0002a095) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x0002a095) volume_small_pane_srt_g

0x7b94,	// (0x000224b4) query_popup_data_pane_cp2

0xb2a1,	// (0x00025bc1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb2a1,	// (0x00025bc1) navi_navi_icon_text_pane_srt_t1

0xa39f,	// (0x00024cbf) navi_tabs_2_long_pane_srt

0xa39f,	// (0x00024cbf) navi_tabs_2_pane_srt

0xa39f,	// (0x00024cbf) navi_tabs_3_long_pane_srt

0xa39f,	// (0x00024cbf) navi_tabs_3_pane_srt

0xa39f,	// (0x00024cbf) navi_tabs_4_pane_srt

0x6a32,	// (0x00021352) tabs_2_active_pane_srt_ParamLimits

0x6a32,	// (0x00021352) tabs_2_active_pane_srt

0x6a42,	// (0x00021362) tabs_2_passive_pane_srt_ParamLimits

0x6a42,	// (0x00021362) tabs_2_passive_pane_srt

0x8ff1,	// (0x00023911) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8ff1,	// (0x00023911) bg_passive_tab_pane_cp1_srt

0xb26d,	// (0x00025b8d) bg_passive_tab_pane_g1_cp1_srt

0x88d8,	// (0x000231f8) bg_passive_tab_pane_g2_cp1_srt

0xb276,	// (0x00025b96) bg_passive_tab_pane_g3_cp1_srt

0x77ba,	// (0x000220da) bg_active_tab_pane_cp1_srt_ParamLimits

0x77ba,	// (0x000220da) bg_active_tab_pane_cp1_srt

0xb27f,	// (0x00025b9f) tabs_2_active_pane_srt_g1

0xb287,	// (0x00025ba7) tabs_2_active_pane_srt_t1_ParamLimits

0xb287,	// (0x00025ba7) tabs_2_active_pane_srt_t1

0xb26d,	// (0x00025b8d) bg_active_tab_pane_g1_cp1_srt

0x88d8,	// (0x000231f8) bg_active_tab_pane_g2_cp1_srt

0xb276,	// (0x00025b96) bg_active_tab_pane_g3_cp1_srt

0x69ff,	// (0x0002131f) tabs_3_active_pane_srt_ParamLimits

0x69ff,	// (0x0002131f) tabs_3_active_pane_srt

0x6a10,	// (0x00021330) tabs_3_passive_pane_cp_srt_ParamLimits

0x6a10,	// (0x00021330) tabs_3_passive_pane_cp_srt

0x6a21,	// (0x00021341) tabs_3_passive_pane_srt_ParamLimits

0x6a21,	// (0x00021341) tabs_3_passive_pane_srt

0x8ff1,	// (0x00023911) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8ff1,	// (0x00023911) bg_passive_tab_pane_cp2_srt

0x8e3d,	// (0x0002375d) bg_passive_tab_pane_g1_cp2_srt

0x88d8,	// (0x000231f8) bg_passive_tab_pane_g2_cp2_srt

0x8e46,	// (0x00023766) bg_passive_tab_pane_g3_cp2_srt

0x77ba,	// (0x000220da) bg_active_tab_pane_cp2_srt_ParamLimits

0x77ba,	// (0x000220da) bg_active_tab_pane_cp2_srt

0xb253,	// (0x00025b73) tabs_3_active_pane_srt_g1

0xb25b,	// (0x00025b7b) tabs_3_active_pane_srt_t1_ParamLimits

0xb25b,	// (0x00025b7b) tabs_3_active_pane_srt_t1

0x8e3d,	// (0x0002375d) bg_active_tab_pane_g1_cp2_srt

0x88d8,	// (0x000231f8) bg_active_tab_pane_g2_cp2_srt

0x8e46,	// (0x00023766) bg_active_tab_pane_g3_cp2_srt

0x69b7,	// (0x000212d7) tabs_4_active_pane_srt_ParamLimits

0x69b7,	// (0x000212d7) tabs_4_active_pane_srt

0x69c9,	// (0x000212e9) tabs_4_passive_pane_cp2_srt_ParamLimits

0x69c9,	// (0x000212e9) tabs_4_passive_pane_cp2_srt

0x8f9b,	// (0x000238bb) aid_size_cell_toolbar

0x8214,	// (0x00022b34) main_idle_act_pane_ParamLimits

0x918e,	// (0x00023aae) popup_large_graphic_colour_window_ParamLimits

0x94f5,	// (0x00023e15) popup_toolbar_window_ParamLimits

0x94f5,	// (0x00023e15) popup_toolbar_window

0xb0b5,	// (0x000259d5) list_single_graphic_2heading_pane_ParamLimits

0xb0b5,	// (0x000259d5) list_single_graphic_2heading_pane

0x83d0,	// (0x00022cf0) aid_size_cell_apps_grid_lsc_pane

0x83e2,	// (0x00022d02) aid_size_cell_apps_grid_prt_pane

0x8ff1,	// (0x00023911) bg_wml_button_pane_cp1_ParamLimits

0x8ff1,	// (0x00023911) bg_wml_button_pane_cp1

0x9d91,	// (0x000246b1) form_midp_field_text_pane_t1_ParamLimits

0x9b83,	// (0x000244a3) input_focus_pane_cp050_ParamLimits

0x9dc8,	// (0x000246e8) list_midp_form_text_pane_ParamLimits

0x9d6e,	// (0x0002468e) input_focus_pane_cp051_ParamLimits

0x9d82,	// (0x000246a2) list_midp_choice_pane_ParamLimits

0x9c14,	// (0x00024534) list_single_2graphic_pane_cp3_ParamLimits

0x9c14,	// (0x00024534) list_single_2graphic_pane_cp3

0x9c38,	// (0x00024558) list_single_midp_graphic_pane_ParamLimits

0x9c38,	// (0x00024558) list_single_midp_graphic_pane

0x5401,	// (0x0001fd21) list_single_graphic_2heading_pane_g1_ParamLimits

0x5401,	// (0x0001fd21) list_single_graphic_2heading_pane_g1

0x540d,	// (0x0001fd2d) list_single_graphic_2heading_pane_g4_ParamLimits

0x540d,	// (0x0001fd2d) list_single_graphic_2heading_pane_g4

0x5419,	// (0x0001fd39) list_single_graphic_2heading_pane_g5_ParamLimits

0x5419,	// (0x0001fd39) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x0002a0e8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x0002a0e8) list_single_graphic_2heading_pane_g

0x5425,	// (0x0001fd45) list_single_graphic_2heading_pane_t1_ParamLimits

0x5425,	// (0x0001fd45) list_single_graphic_2heading_pane_t1

0x5439,	// (0x0001fd59) list_single_graphic_2heading_pane_t2_ParamLimits

0x5439,	// (0x0001fd59) list_single_graphic_2heading_pane_t2

0x5455,	// (0x0001fd75) list_single_graphic_2heading_pane_t3_ParamLimits

0x5455,	// (0x0001fd75) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x0002a0ef) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x0002a0ef) list_single_graphic_2heading_pane_t

0x99d1,	// (0x000242f1) bg_popup_sub_pane_cp2

0x99fb,	// (0x0002431b) grid_toobar_pane

0x665f,	// (0x00020f7f) cell_toolbar_pane_ParamLimits

0x665f,	// (0x00020f7f) cell_toolbar_pane

0x9a37,	// (0x00024357) cell_toolbar_pane_g1_ParamLimits

0x9a37,	// (0x00024357) cell_toolbar_pane_g1

0x9a4b,	// (0x0002436b) cell_toolbar_pane_g2_ParamLimits

0x9a4b,	// (0x0002436b) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x0002a0fd) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x0002a0fd) cell_toolbar_pane_g

0x9a6d,	// (0x0002438d) grid_highlight_pane_cp2_ParamLimits

0x9a6d,	// (0x0002438d) grid_highlight_pane_cp2

0x9a87,	// (0x000243a7) toolbar_button_pane

0x9a93,	// (0x000243b3) toolbar_button_pane_g1

0x9a9b,	// (0x000243bb) toolbar_button_pane_g2

0x9aa3,	// (0x000243c3) toolbar_button_pane_g3

0x9aab,	// (0x000243cb) toolbar_button_pane_g4

0x9ab3,	// (0x000243d3) toolbar_button_pane_g5

0x9abb,	// (0x000243db) toolbar_button_pane_g6

0x9ac3,	// (0x000243e3) toolbar_button_pane_g7

0x9acb,	// (0x000243eb) toolbar_button_pane_g8

0x9ad3,	// (0x000243f3) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x0002a102) toolbar_button_pane_g

0x6697,	// (0x00020fb7) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6697,	// (0x00020fb7) list_single_2graphic_pane_g1_cp3

0x66a3,	// (0x00020fc3) list_single_2graphic_pane_g2_cp3_ParamLimits

0x66a3,	// (0x00020fc3) list_single_2graphic_pane_g2_cp3

0x66b4,	// (0x00020fd4) list_single_2graphic_pane_g3_cp3

0x97b4,	// (0x000240d4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x97b4,	// (0x000240d4) list_single_2graphic_pane_g4_cp3

0x66bc,	// (0x00020fdc) list_single_2graphic_pane_t1_cp3_ParamLimits

0x66bc,	// (0x00020fdc) list_single_2graphic_pane_t1_cp3

0x8767,	// (0x00023087) list_single_midp_graphic_pane_g2_ParamLimits

0x8767,	// (0x00023087) list_single_midp_graphic_pane_g2

0x8fa3,	// (0x000238c3) aid_zoom_text_primary

0x53d5,	// (0x0001fcf5) aid_zoom_text_secondary

0x8efa,	// (0x0002381a) status_small_pane_g7_ParamLimits

0x8efa,	// (0x0002381a) status_small_pane_g7

0x8f1d,	// (0x0002383d) status_small_pane_t1_ParamLimits

0x76f1,	// (0x00022011) title_pane_g2

0x0003,

0xf56a,	// (0x00029e8a) title_pane_g

0x7c35,	// (0x00022555) aid_size_cell_colour_1_pane_ParamLimits

0x7c35,	// (0x00022555) aid_size_cell_colour_1_pane

0x7c49,	// (0x00022569) aid_size_cell_colour_2_pane_ParamLimits

0x7c49,	// (0x00022569) aid_size_cell_colour_2_pane

0x7c5d,	// (0x0002257d) aid_size_cell_colour_3_pane_ParamLimits

0x7c5d,	// (0x0002257d) aid_size_cell_colour_3_pane

0x7c71,	// (0x00022591) aid_size_cell_colour_4_pane_ParamLimits

0x7c71,	// (0x00022591) aid_size_cell_colour_4_pane

0x60cc,	// (0x000209ec) title_pane_stacon_g1_ParamLimits

0x60cc,	// (0x000209ec) title_pane_stacon_g1

0xa186,	// (0x00024aa6) popup_note_wait_window_g3_ParamLimits

0xa186,	// (0x00024aa6) popup_note_wait_window_g3

0xa1fc,	// (0x00024b1c) popup_note_wait_window_t5_ParamLimits

0xa1fc,	// (0x00024b1c) popup_note_wait_window_t5

0x76da,	// (0x00021ffa) main_feb_china_hwr_fs_writing_pane

0x9073,	// (0x00023993) popup_feb_china_hwr_fs_window_ParamLimits

0x9073,	// (0x00023993) popup_feb_china_hwr_fs_window

0x66ee,	// (0x0002100e) aid_size_cell_hwr_fs_ParamLimits

0x66ee,	// (0x0002100e) aid_size_cell_hwr_fs

0x9b83,	// (0x000244a3) bg_popup_sub_pane_cp3_ParamLimits

0x9b83,	// (0x000244a3) bg_popup_sub_pane_cp3

0x6703,	// (0x00021023) grid_hwr_fs_pane_ParamLimits

0x6703,	// (0x00021023) grid_hwr_fs_pane

0x671b,	// (0x0002103b) linegrid_hwr_fs_pane_ParamLimits

0x671b,	// (0x0002103b) linegrid_hwr_fs_pane

0x672b,	// (0x0002104b) cell_hwr_fs_pane_ParamLimits

0x672b,	// (0x0002104b) cell_hwr_fs_pane

0x9b8f,	// (0x000244af) linegrid_hwr_fs_pane_g1_ParamLimits

0x9b8f,	// (0x000244af) linegrid_hwr_fs_pane_g1

0x9b9b,	// (0x000244bb) linegrid_hwr_fs_pane_g2_ParamLimits

0x9b9b,	// (0x000244bb) linegrid_hwr_fs_pane_g2

0x9bad,	// (0x000244cd) linegrid_hwr_fs_pane_g3_ParamLimits

0x9bad,	// (0x000244cd) linegrid_hwr_fs_pane_g3

0x674d,	// (0x0002106d) linegrid_hwr_fs_pane_g4_ParamLimits

0x674d,	// (0x0002106d) linegrid_hwr_fs_pane_g4

0x6767,	// (0x00021087) linegrid_hwr_fs_pane_g5_ParamLimits

0x6767,	// (0x00021087) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x0002a12d) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x0002a12d) linegrid_hwr_fs_pane_g

0x9bb9,	// (0x000244d9) cell_hwr_fs_pane_g1_ParamLimits

0x9bb9,	// (0x000244d9) cell_hwr_fs_pane_g1

0x9908,	// (0x00024228) cell_hwr_fs_pane_g2_ParamLimits

0x9908,	// (0x00024228) cell_hwr_fs_pane_g2

0x9bcf,	// (0x000244ef) cell_hwr_fs_pane_g3_ParamLimits

0x9bcf,	// (0x000244ef) cell_hwr_fs_pane_g3

0x9bdc,	// (0x000244fc) cell_hwr_fs_pane_g4_ParamLimits

0x9bdc,	// (0x000244fc) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x0002a138) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x0002a138) cell_hwr_fs_pane_g

0x677d,	// (0x0002109d) cell_hwr_fs_pane_t1

0x76da,	// (0x00021ffa) grid_highlight_pane_cp6

0x76da,	// (0x00021ffa) main_idle_act2_pane

0x8187,	// (0x00022aa7) aid_inside_area_popup_secondary

0xa83f,	// (0x0002515f) aid_inside_area_window_primary_ParamLimits

0xa83f,	// (0x0002515f) aid_inside_area_window_primary

0xb3ba,	// (0x00025cda) ai2_news_ticker_pane

0xb3c2,	// (0x00025ce2) aid_size_cell_ai1_link_ParamLimits

0xb3c2,	// (0x00025ce2) aid_size_cell_ai1_link

0xb3dc,	// (0x00025cfc) popup_ai2_data_window_ParamLimits

0xb3dc,	// (0x00025cfc) popup_ai2_data_window

0xb3f2,	// (0x00025d12) popup_ai2_link_window_ParamLimits

0xb3f2,	// (0x00025d12) popup_ai2_link_window

0x9b83,	// (0x000244a3) bg_popup_sub_pane_cp4_ParamLimits

0x9b83,	// (0x000244a3) bg_popup_sub_pane_cp4

0xb406,	// (0x00025d26) grid_ai2_link_pane_ParamLimits

0xb406,	// (0x00025d26) grid_ai2_link_pane

0xb41d,	// (0x00025d3d) popup_ai2_link_window_g1_ParamLimits

0xb41d,	// (0x00025d3d) popup_ai2_link_window_g1

0xb429,	// (0x00025d49) popup_ai2_link_window_g2_ParamLimits

0xb429,	// (0x00025d49) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x0002a304) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x0002a304) popup_ai2_link_window_g

0xb438,	// (0x00025d58) ai2_mp_button_pane

0xb440,	// (0x00025d60) ai2_mp_volume_pane

0x9d6e,	// (0x0002468e) bg_popup_sub_pane_cp5_ParamLimits

0x9d6e,	// (0x0002468e) bg_popup_sub_pane_cp5

0xb448,	// (0x00025d68) heading_ai2_gene_pane_ParamLimits

0xb448,	// (0x00025d68) heading_ai2_gene_pane

0xb454,	// (0x00025d74) list_ai2_gene_pane_ParamLimits

0xb454,	// (0x00025d74) list_ai2_gene_pane

0xb49c,	// (0x00025dbc) cell_ai2_link_pane_ParamLimits

0xb49c,	// (0x00025dbc) cell_ai2_link_pane

0xb4b2,	// (0x00025dd2) cell_ai2_link_pane_g1

0x76da,	// (0x00021ffa) grid_highlight_pane_cp7

0x6a6f,	// (0x0002138f) ai2_mp_volume_pane_g1

0xb582,	// (0x00025ea2) ai2_mp_volume_pane_g2

0xb4f7,	// (0x00025e17) list_ai2_gene_pane_t1

0xb58a,	// (0x00025eaa) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x0002a31d) ai2_mp_volume_pane_g

0x6a77,	// (0x00021397) volume_small_pane_cp3

0xb592,	// (0x00025eb2) aid_size_cell_ai2_button

0xb59a,	// (0x00025eba) grid_ai2_button_pane

0xb5a3,	// (0x00025ec3) cell_ai2_button_pane_ParamLimits

0xb5a3,	// (0x00025ec3) cell_ai2_button_pane

0x76d0,	// (0x00021ff0) cell_ai2_button_pane_g1

0x76da,	// (0x00021ffa) grid_highlight_pane_cp8

0xb542,	// (0x00025e62) ai2_gene_pane_t1_ParamLimits

0xb542,	// (0x00025e62) ai2_gene_pane_t1

0x8f91,	// (0x000238b1) aid_height_parent_landscape

0xaed1,	// (0x000257f1) aid_height_set_list

0xaee2,	// (0x00025802) aid_size_parent

0xb1e1,	// (0x00025b01) aid_size_cell_graphic_pane_ParamLimits

0xb464,	// (0x00025d84) popup_ai2_data_window_g1_ParamLimits

0xb464,	// (0x00025d84) popup_ai2_data_window_g1

0xb470,	// (0x00025d90) ai2_news_ticker_pane_g1

0xb478,	// (0x00025d98) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x0002a309) ai2_news_ticker_pane_g

0xb480,	// (0x00025da0) ai2_news_ticker_pane_t1

0xb48e,	// (0x00025dae) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x0002a30e) ai2_news_ticker_pane_t

0xb4bb,	// (0x00025ddb) heading_ai2_gene_pane_g1

0xb4c3,	// (0x00025de3) heading_ai2_gene_pane_t1_ParamLimits

0xb4c3,	// (0x00025de3) heading_ai2_gene_pane_t1

0xb4d8,	// (0x00025df8) list_highlight_pane_cp6

0xb4e0,	// (0x00025e00) ai2_gene_pane_ParamLimits

0xb4e0,	// (0x00025e00) ai2_gene_pane

0xb505,	// (0x00025e25) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x0002a313) list_ai2_gene_pane_t

0xb513,	// (0x00025e33) list_highlight_pane_cp8_ParamLimits

0xb513,	// (0x00025e33) list_highlight_pane_cp8

0xb524,	// (0x00025e44) ai2_gene_pane_g1_ParamLimits

0xb524,	// (0x00025e44) ai2_gene_pane_g1

0xb536,	// (0x00025e56) ai2_gene_pane_g2_ParamLimits

0xb536,	// (0x00025e56) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x0002a318) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x0002a318) ai2_gene_pane_g

0x7fbc,	// (0x000228dc) scroll_pane_cp12

0x661e,	// (0x00020f3e) control_pane_t3_ParamLimits

0x661e,	// (0x00020f3e) control_pane_t3

0x8f0e,	// (0x0002382e) status_small_pane_g8_ParamLimits

0x8f0e,	// (0x0002382e) status_small_pane_g8

0x9159,	// (0x00023a79) popup_find_window_ParamLimits

0x936c,	// (0x00023c8c) popup_note_image_window_ParamLimits

0x5401,	// (0x0001fd21) list_double2_graphic_pane_vc_g1_ParamLimits

0x5401,	// (0x0001fd21) list_double2_graphic_pane_vc_g1

0x546d,	// (0x0001fd8d) list_double2_graphic_pane_vc_g2_ParamLimits

0x546d,	// (0x0001fd8d) list_double2_graphic_pane_vc_g2

0x5479,	// (0x0001fd99) list_double2_graphic_pane_vc_g3_ParamLimits

0x5479,	// (0x0001fd99) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x0002a0f6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x0002a0f6) list_double2_graphic_pane_vc_g

0x5485,	// (0x0001fda5) list_double2_graphic_pane_vc_t1_ParamLimits

0x5485,	// (0x0001fda5) list_double2_graphic_pane_vc_t1

0x540d,	// (0x0001fd2d) list_single_heading_pane_vc_g1_ParamLimits

0x540d,	// (0x0001fd2d) list_single_heading_pane_vc_g1

0x5419,	// (0x0001fd39) list_single_heading_pane_vc_g2_ParamLimits

0x5419,	// (0x0001fd39) list_single_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002a117) list_single_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002a117) list_single_heading_pane_vc_g

0x549b,	// (0x0001fdbb) list_single_heading_pane_vc_t1_ParamLimits

0x549b,	// (0x0001fdbb) list_single_heading_pane_vc_t1

0x54b1,	// (0x0001fdd1) list_single_heading_pane_vc_t2_ParamLimits

0x54b1,	// (0x0001fdd1) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x0002a11c) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x0002a11c) list_single_heading_pane_vc_t

0x9adb,	// (0x000243fb) list_setting_number_pane_vc_g1_ParamLimits

0x9adb,	// (0x000243fb) list_setting_number_pane_vc_g1

0x9ae7,	// (0x00024407) list_setting_number_pane_vc_g2_ParamLimits

0x9ae7,	// (0x00024407) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0002a121) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0002a121) list_setting_number_pane_vc_g

0x9af3,	// (0x00024413) list_setting_number_pane_vc_t1_ParamLimits

0x9af3,	// (0x00024413) list_setting_number_pane_vc_t1

0x9b07,	// (0x00024427) list_setting_number_pane_vc_t2_ParamLimits

0x9b07,	// (0x00024427) list_setting_number_pane_vc_t2

0x9b23,	// (0x00024443) list_setting_number_pane_vc_t3_ParamLimits

0x9b23,	// (0x00024443) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x0002a126) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x0002a126) list_setting_number_pane_vc_t

0x9b49,	// (0x00024469) set_value_pane_vc_ParamLimits

0x9b49,	// (0x00024469) set_value_pane_vc

0xb0b5,	// (0x000259d5) list_double2_graphic_pane_vc_ParamLimits

0xb0b5,	// (0x000259d5) list_double2_graphic_pane_vc

0xb0b5,	// (0x000259d5) list_double2_large_graphic_pane_vc_ParamLimits

0xb0b5,	// (0x000259d5) list_double2_large_graphic_pane_vc

0xb0b5,	// (0x000259d5) list_double2_pane_vc_ParamLimits

0xb0b5,	// (0x000259d5) list_double2_pane_vc

0xb0b5,	// (0x000259d5) list_double_graphic_heading_pane_vc_ParamLimits

0xb0b5,	// (0x000259d5) list_double_graphic_heading_pane_vc

0xb0b5,	// (0x000259d5) list_double_graphic_pane_vc_ParamLimits

0xb0b5,	// (0x000259d5) list_double_graphic_pane_vc

0xb0b5,	// (0x000259d5) list_double_heading_pane_vc_ParamLimits

0xb0b5,	// (0x000259d5) list_double_heading_pane_vc

0xb0b5,	// (0x000259d5) list_double_large_graphic_pane_vc_ParamLimits

0xb0b5,	// (0x000259d5) list_double_large_graphic_pane_vc

0xb0b5,	// (0x000259d5) list_double_number_pane_vc_ParamLimits

0xb0b5,	// (0x000259d5) list_double_number_pane_vc

0xb0b5,	// (0x000259d5) list_double_pane_vc_ParamLimits

0xb0b5,	// (0x000259d5) list_double_pane_vc

0xb0b5,	// (0x000259d5) list_double_time_pane_vc_ParamLimits

0xb0b5,	// (0x000259d5) list_double_time_pane_vc

0xb0b5,	// (0x000259d5) list_setting_number_pane_vc_ParamLimits

0xb0b5,	// (0x000259d5) list_setting_number_pane_vc

0xb0b5,	// (0x000259d5) list_setting_pane_vc_ParamLimits

0xb0b5,	// (0x000259d5) list_setting_pane_vc

0xb0b5,	// (0x000259d5) list_single_graphic_heading_pane_vc_ParamLimits

0xb0b5,	// (0x000259d5) list_single_graphic_heading_pane_vc

0xb0b5,	// (0x000259d5) list_single_heading_pane_vc_ParamLimits

0xb0b5,	// (0x000259d5) list_single_heading_pane_vc

0x558e,	// (0x0001feae) list_single_number_heading_pane_vc_ParamLimits

0x558e,	// (0x0001feae) list_single_number_heading_pane_vc

0x562a,	// (0x0001ff4a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x562a,	// (0x0001ff4a) list_double_graphic_heading_pane_vc_g1

0x540d,	// (0x0001fd2d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x540d,	// (0x0001fd2d) list_double_graphic_heading_pane_vc_g2

0x5419,	// (0x0001fd39) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5419,	// (0x0001fd39) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x0002a324) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x0002a324) list_double_graphic_heading_pane_vc_g

0x5636,	// (0x0001ff56) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5636,	// (0x0001ff56) list_double_graphic_heading_pane_vc_t1

0x549b,	// (0x0001fdbb) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x549b,	// (0x0001fdbb) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x0002a32b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x0002a32b) list_double_graphic_heading_pane_vc_t

0x9adb,	// (0x000243fb) list_setting_pane_vc_g1_ParamLimits

0x9adb,	// (0x000243fb) list_setting_pane_vc_g1

0x9ae7,	// (0x00024407) list_setting_pane_vc_g2_ParamLimits

0x9ae7,	// (0x00024407) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0002a121) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0002a121) list_setting_pane_vc_g

0xb7db,	// (0x000260fb) list_setting_pane_vc_t1_ParamLimits

0xb7db,	// (0x000260fb) list_setting_pane_vc_t1

0xb7ef,	// (0x0002610f) list_setting_pane_vc_t2_ParamLimits

0xb7ef,	// (0x0002610f) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x0002a359) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x0002a359) list_setting_pane_vc_t

0x9b49,	// (0x00024469) set_value_pane_cp_vc_ParamLimits

0x9b49,	// (0x00024469) set_value_pane_cp_vc

0x540d,	// (0x0001fd2d) list_single_number_heading_pane_vc_g1_ParamLimits

0x540d,	// (0x0001fd2d) list_single_number_heading_pane_vc_g1

0x5419,	// (0x0001fd39) list_single_number_heading_pane_vc_g2_ParamLimits

0x5419,	// (0x0001fd39) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002a117) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002a117) list_single_number_heading_pane_vc_g

0x549b,	// (0x0001fdbb) list_single_number_heading_pane_vc_t1_ParamLimits

0x549b,	// (0x0001fdbb) list_single_number_heading_pane_vc_t1

0x564a,	// (0x0001ff6a) list_single_number_heading_pane_vc_t2_ParamLimits

0x564a,	// (0x0001ff6a) list_single_number_heading_pane_vc_t2

0x565e,	// (0x0001ff7e) list_single_number_heading_pane_vc_t3_ParamLimits

0x565e,	// (0x0001ff7e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x0002a35e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0002a35e) list_single_number_heading_pane_vc_t

0x5401,	// (0x0001fd21) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5401,	// (0x0001fd21) list_single_graphic_heading_pane_vc_g1

0x540d,	// (0x0001fd2d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x540d,	// (0x0001fd2d) list_single_graphic_heading_pane_vc_g4

0x5419,	// (0x0001fd39) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5419,	// (0x0001fd39) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c8,	// (0x0002a0e8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c8,	// (0x0002a0e8) list_single_graphic_heading_pane_vc_g

0x549b,	// (0x0001fdbb) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x549b,	// (0x0001fdbb) list_single_graphic_heading_pane_vc_t1

0x5670,	// (0x0001ff90) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5670,	// (0x0001ff90) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x0002a365) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x0002a365) list_single_graphic_heading_pane_vc_t

0x540d,	// (0x0001fd2d) list_double2_pane_vc_g1_ParamLimits

0x540d,	// (0x0001fd2d) list_double2_pane_vc_g1

0x5419,	// (0x0001fd39) list_double2_pane_vc_g2_ParamLimits

0x5419,	// (0x0001fd39) list_double2_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002a117) list_double2_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002a117) list_double2_pane_vc_g

0x5684,	// (0x0001ffa4) list_double2_pane_vc_t1_ParamLimits

0x5684,	// (0x0001ffa4) list_double2_pane_vc_t1

0x569a,	// (0x0001ffba) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x569a,	// (0x0001ffba) list_double2_large_graphic_pane_vc_g1

0x540d,	// (0x0001fd2d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x540d,	// (0x0001fd2d) list_double2_large_graphic_pane_vc_g2

0x5419,	// (0x0001fd39) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5419,	// (0x0001fd39) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4a,	// (0x0002a36a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x0002a36a) list_double2_large_graphic_pane_vc_g

0x56a6,	// (0x0001ffc6) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x56a6,	// (0x0001ffc6) list_double2_large_graphic_pane_vc_t1

0x56bc,	// (0x0001ffdc) list_double_time_pane_vc_g1_ParamLimits

0x56bc,	// (0x0001ffdc) list_double_time_pane_vc_g1

0x56c8,	// (0x0001ffe8) list_double_time_pane_vc_g2_ParamLimits

0x56c8,	// (0x0001ffe8) list_double_time_pane_vc_g2

0x0001,

0xfa51,	// (0x0002a371) list_double_time_pane_vc_g_ParamLimits

0xfa51,	// (0x0002a371) list_double_time_pane_vc_g

0x56d4,	// (0x0001fff4) list_double_time_pane_vc_t1_ParamLimits

0x56d4,	// (0x0001fff4) list_double_time_pane_vc_t1

0x56ed,	// (0x0002000d) list_double_time_pane_vc_t2_ParamLimits

0x56ed,	// (0x0002000d) list_double_time_pane_vc_t2

0x5728,	// (0x00020048) list_double_time_pane_vc_t3_ParamLimits

0x5728,	// (0x00020048) list_double_time_pane_vc_t3

0x5740,	// (0x00020060) list_double_time_pane_vc_t4_ParamLimits

0x5740,	// (0x00020060) list_double_time_pane_vc_t4

0x0003,

0xfa56,	// (0x0002a376) list_double_time_pane_vc_t_ParamLimits

0xfa56,	// (0x0002a376) list_double_time_pane_vc_t

0x540d,	// (0x0001fd2d) list_double_pane_vc_g1_ParamLimits

0x540d,	// (0x0001fd2d) list_double_pane_vc_g1

0x5419,	// (0x0001fd39) list_double_pane_vc_g2_ParamLimits

0x5419,	// (0x0001fd39) list_double_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002a117) list_double_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002a117) list_double_pane_vc_g

0x5754,	// (0x00020074) list_double_pane_vc_t1_ParamLimits

0x5754,	// (0x00020074) list_double_pane_vc_t1

0x5766,	// (0x00020086) list_double_pane_vc_t2_ParamLimits

0x5766,	// (0x00020086) list_double_pane_vc_t2

0x0001,

0xfa5f,	// (0x0002a37f) list_double_pane_vc_t_ParamLimits

0xfa5f,	// (0x0002a37f) list_double_pane_vc_t

0x540d,	// (0x0001fd2d) list_double_number_pane_vc_g1_ParamLimits

0x540d,	// (0x0001fd2d) list_double_number_pane_vc_g1

0x5419,	// (0x0001fd39) list_double_number_pane_vc_g2_ParamLimits

0x5419,	// (0x0001fd39) list_double_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002a117) list_double_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002a117) list_double_number_pane_vc_g

0x577e,	// (0x0002009e) list_double_number_pane_vc_t1_ParamLimits

0x577e,	// (0x0002009e) list_double_number_pane_vc_t1

0x5792,	// (0x000200b2) list_double_number_pane_vc_t2_ParamLimits

0x5792,	// (0x000200b2) list_double_number_pane_vc_t2

0x5766,	// (0x00020086) list_double_number_pane_vc_t3_ParamLimits

0x5766,	// (0x00020086) list_double_number_pane_vc_t3

0x0002,

0xfa64,	// (0x0002a384) list_double_number_pane_vc_t_ParamLimits

0xfa64,	// (0x0002a384) list_double_number_pane_vc_t

0x57a4,	// (0x000200c4) list_double_large_graphic_pane_vc_g1_ParamLimits

0x57a4,	// (0x000200c4) list_double_large_graphic_pane_vc_g1

0x57b0,	// (0x000200d0) list_double_large_graphic_pane_vc_g2_ParamLimits

0x57b0,	// (0x000200d0) list_double_large_graphic_pane_vc_g2

0x5419,	// (0x0001fd39) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5419,	// (0x0001fd39) list_double_large_graphic_pane_vc_g3

0x57bf,	// (0x000200df) list_double_large_graphic_pane_vc_g4_ParamLimits

0x57bf,	// (0x000200df) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6b,	// (0x0002a38b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0002a38b) list_double_large_graphic_pane_vc_g

0x57cb,	// (0x000200eb) list_double_large_graphic_pane_vc_t1_ParamLimits

0x57cb,	// (0x000200eb) list_double_large_graphic_pane_vc_t1

0x57dd,	// (0x000200fd) list_double_large_graphic_pane_vc_t2_ParamLimits

0x57dd,	// (0x000200fd) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0002a394) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0002a394) list_double_large_graphic_pane_vc_t

0x540d,	// (0x0001fd2d) list_double_heading_pane_vc_g1_ParamLimits

0x540d,	// (0x0001fd2d) list_double_heading_pane_vc_g1

0x5419,	// (0x0001fd39) list_double_heading_pane_vc_g2_ParamLimits

0x5419,	// (0x0001fd39) list_double_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002a117) list_double_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002a117) list_double_heading_pane_vc_g

0x57f6,	// (0x00020116) list_double_heading_pane_vc_t1_ParamLimits

0x57f6,	// (0x00020116) list_double_heading_pane_vc_t1

0x549b,	// (0x0001fdbb) list_double_heading_pane_vc_t2_ParamLimits

0x549b,	// (0x0001fdbb) list_double_heading_pane_vc_t2

0x0001,

0xfa79,	// (0x0002a399) list_double_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x0002a399) list_double_heading_pane_vc_t

0x580a,	// (0x0002012a) list_double_graphic_pane_vc_g1_ParamLimits

0x580a,	// (0x0002012a) list_double_graphic_pane_vc_g1

0x581a,	// (0x0002013a) list_double_graphic_pane_vc_g2_ParamLimits

0x581a,	// (0x0002013a) list_double_graphic_pane_vc_g2

0x5829,	// (0x00020149) list_double_graphic_pane_vc_g3_ParamLimits

0x5829,	// (0x00020149) list_double_graphic_pane_vc_g3

0x0002,

0xfa7e,	// (0x0002a39e) list_double_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0002a39e) list_double_graphic_pane_vc_g

0x5835,	// (0x00020155) list_double_graphic_pane_vc_t1_ParamLimits

0x5835,	// (0x00020155) list_double_graphic_pane_vc_t1

0x5766,	// (0x00020086) list_double_graphic_pane_vc_t2_ParamLimits

0x5766,	// (0x00020086) list_double_graphic_pane_vc_t2

0x0001,

0xfa85,	// (0x0002a3a5) list_double_graphic_pane_vc_t_ParamLimits

0xfa85,	// (0x0002a3a5) list_double_graphic_pane_vc_t

0x5c32,	// (0x00020552) aid_size_cell_fastswap

0x5c3a,	// (0x0002055a) aid_size_cell_touch_ParamLimits

0x5c3a,	// (0x0002055a) aid_size_cell_touch

0x5e95,	// (0x000207b5) popup_fast_swap_wide_window_ParamLimits

0x5e95,	// (0x000207b5) popup_fast_swap_wide_window

0x5f9f,	// (0x000208bf) touch_pane_ParamLimits

0x5f9f,	// (0x000208bf) touch_pane

0x8012,	// (0x00022932) button_value_adjust_pane_cp2

0x50f9,	// (0x0001fa19) button_value_adjust_pane_cp4

0x5119,	// (0x0001fa39) form_field_data_pane_cp2

0x5138,	// (0x0001fa58) form_field_data_wide_pane_cp2

0x849f,	// (0x00022dbf) bg_scroll_pane_ParamLimits

0x622f,	// (0x00020b4f) scroll_handle_pane_ParamLimits

0x6243,	// (0x00020b63) scroll_sc2_down_pane_ParamLimits

0x6243,	// (0x00020b63) scroll_sc2_down_pane

0x84d0,	// (0x00022df0) scroll_sc2_up_pane_ParamLimits

0x84d0,	// (0x00022df0) scroll_sc2_up_pane

0xbc44,	// (0x00026564) grid_wheel_folder_pane_g1_ParamLimits

0xbc44,	// (0x00026564) grid_wheel_folder_pane_g1

0x6408,	// (0x00020d28) clock_nsta_pane_cp2_ParamLimits

0x6408,	// (0x00020d28) clock_nsta_pane_cp2

0x8c93,	// (0x000235b3) listscroll_midp_pane_ParamLimits

0x8c9f,	// (0x000235bf) midp_canvas_pane

0x8f89,	// (0x000238a9) nsta_clock_indic_pane

0x8fd7,	// (0x000238f7) listscroll_form_pane_vc

0x8fdf,	// (0x000238ff) listscroll_set_pane_vc_ParamLimits

0x8fdf,	// (0x000238ff) listscroll_set_pane_vc

0x9677,	// (0x00023f97) clock_nsta_pane

0x96ec,	// (0x0002400c) indicator_nsta_pane

0x99d1,	// (0x000242f1) bg_popup_sub_pane_cp2_ParamLimits

0x99e5,	// (0x00024305) find_pane_cp2_ParamLimits

0x99e5,	// (0x00024305) find_pane_cp2

0x99fb,	// (0x0002431b) grid_toobar_pane_ParamLimits

0x9b57,	// (0x00024477) list_form_gen_pane_vc_ParamLimits

0x9b57,	// (0x00024477) list_form_gen_pane_vc

0x9b6d,	// (0x0002448d) scroll_pane_cp8_vc_ParamLimits

0x9b6d,	// (0x0002448d) scroll_pane_cp8_vc

0x9be9,	// (0x00024509) data_form_wide_pane_vc_ParamLimits

0x9be9,	// (0x00024509) data_form_wide_pane_vc

0x9bf5,	// (0x00024515) form_field_data_wide_pane_vc_g1

0x9bfd,	// (0x0002451d) form_field_data_wide_pane_vc_t1_ParamLimits

0x9bfd,	// (0x0002451d) form_field_data_wide_pane_vc_t1

0x8026,	// (0x00022946) input_focus_pane_cp6_vc_ParamLimits

0x8026,	// (0x00022946) input_focus_pane_cp6_vc

0x9f01,	// (0x00024821) list_midp_pane_ParamLimits

0x9f0d,	// (0x0002482d) scroll_pane_cp16_ParamLimits

0x9f0d,	// (0x0002482d) scroll_pane_cp16

0x9f5b,	// (0x0002487b) button_value_adjust_pane_ParamLimits

0x9f5b,	// (0x0002487b) button_value_adjust_pane

0xaef4,	// (0x00025814) button_value_adjust_pane_cp6_ParamLimits

0xaef4,	// (0x00025814) button_value_adjust_pane_cp6

0xb01e,	// (0x0002593e) settings_code_pane_cp_ParamLimits

0xb01e,	// (0x0002593e) settings_code_pane_cp

0x76d0,	// (0x00021ff0) cell_touch_pane_g1

0x76d0,	// (0x00021ff0) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x0002a03f) cell_touch_pane_g

0xb5b5,	// (0x00025ed5) cell_touch_pane_cp_ParamLimits

0xb5b5,	// (0x00025ed5) cell_touch_pane_cp

0xb5c5,	// (0x00025ee5) cell_touch_pane_ParamLimits

0xb5c5,	// (0x00025ee5) cell_touch_pane

0x76d0,	// (0x00021ff0) scroll_sc2_down_pane_g1

0x76d0,	// (0x00021ff0) scroll_sc2_up_pane_g1

0x76da,	// (0x00021ffa) bg_set_opt_pane_cp4_vc

0xb5d7,	// (0x00025ef7) list_set_graphic_pane_vc_g1_ParamLimits

0xb5d7,	// (0x00025ef7) list_set_graphic_pane_vc_g1

0xb5e3,	// (0x00025f03) list_set_graphic_pane_vc_g2_ParamLimits

0xb5e3,	// (0x00025f03) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x0002a330) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x0002a330) list_set_graphic_pane_vc_g

0xb5ef,	// (0x00025f0f) text_primary_small_cp13_vc_ParamLimits

0xb5ef,	// (0x00025f0f) text_primary_small_cp13_vc

0xb607,	// (0x00025f27) list_set_graphic_pane_vc_ParamLimits

0xb607,	// (0x00025f27) list_set_graphic_pane_vc

0x76da,	// (0x00021ffa) input_focus_pane_cp2_vc

0x76d0,	// (0x00021ff0) setting_code_pane_vc_g1

0xb61b,	// (0x00025f3b) setting_code_pane_vc_t1

0xb629,	// (0x00025f49) set_text_pane_vc_t1_ParamLimits

0xb629,	// (0x00025f49) set_text_pane_vc_t1

0x76da,	// (0x00021ffa) input_focus_pane_cp1_vc

0xb644,	// (0x00025f64) list_set_text_pane_vc

0x76d0,	// (0x00021ff0) setting_text_pane_vc_g1

0x76da,	// (0x00021ffa) bg_set_opt_pane_cp2_vc

0xb64e,	// (0x00025f6e) setting_slider_graphic_pane_vc_g1

0xb656,	// (0x00025f76) setting_slider_graphic_pane_vc_t1

0xb664,	// (0x00025f84) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x0002a335) setting_slider_graphic_pane_vc_t

0xb672,	// (0x00025f92) slider_set_pane_cp_vc

0xb67a,	// (0x00025f9a) slider_set_pane_vc_g1

0xb683,	// (0x00025fa3) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x0002a33a) slider_set_pane_vc_g

0x808d,	// (0x000229ad) set_opt_bg_pane_g1_copy1

0x8095,	// (0x000229b5) set_opt_bg_pane_g2_copy1

0xb6af,	// (0x00025fcf) set_opt_bg_pane_g3_copy1

0x80a5,	// (0x000229c5) set_opt_bg_pane_g4_copy1

0x80ad,	// (0x000229cd) set_opt_bg_pane_g5_copy1

0x80b5,	// (0x000229d5) set_opt_bg_pane_g6_copy1

0xb6b9,	// (0x00025fd9) set_opt_bg_pane_g7_copy1

0xb6c1,	// (0x00025fe1) set_opt_bg_pane_g8_copy1

0xb6cb,	// (0x00025feb) set_opt_bg_pane_g9_copy1

0x76da,	// (0x00021ffa) bg_set_opt_pane_cp_vc

0xb6d5,	// (0x00025ff5) setting_slider_pane_vc_t1

0xb656,	// (0x00025f76) setting_slider_pane_vc_t2

0xb664,	// (0x00025f84) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x0002a349) setting_slider_pane_vc_t

0xb672,	// (0x00025f92) slider_set_pane_vc

0x678b,	// (0x000210ab) volume_set_pane_vc_g1

0x6794,	// (0x000210b4) volume_set_pane_vc_g2

0x679d,	// (0x000210bd) volume_set_pane_vc_g3

0x67a6,	// (0x000210c6) volume_set_pane_vc_g4

0x67af,	// (0x000210cf) volume_set_pane_vc_g5

0x67b8,	// (0x000210d8) volume_set_pane_vc_g6

0x67c1,	// (0x000210e1) volume_set_pane_vc_g7

0x67ca,	// (0x000210ea) volume_set_pane_vc_g8

0x67d3,	// (0x000210f3) volume_set_pane_vc_g9

0x67dc,	// (0x000210fc) volume_set_pane_vc_g10

0x0009,

0xf8c7,	// (0x0002a1e7) volume_set_pane_vc_g

0xb6e4,	// (0x00026004) volume_set_pane_vc

0xb6ec,	// (0x0002600c) button_value_adjust_pane_cp1_vc

0xb6f6,	// (0x00026016) list_highlight_pane_cp2_vc

0xb6ff,	// (0x0002601f) list_set_pane_vc_ParamLimits

0xb6ff,	// (0x0002601f) list_set_pane_vc

0xb769,	// (0x00026089) main_pane_set_vc_t1_ParamLimits

0xb769,	// (0x00026089) main_pane_set_vc_t1

0xb77e,	// (0x0002609e) main_pane_set_vc_t2_ParamLimits

0xb77e,	// (0x0002609e) main_pane_set_vc_t2

0xb790,	// (0x000260b0) main_pane_set_vc_t3_ParamLimits

0xb790,	// (0x000260b0) main_pane_set_vc_t3

0xb7a4,	// (0x000260c4) main_pane_set_vc_t4_ParamLimits

0xb7a4,	// (0x000260c4) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x0002a350) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x0002a350) main_pane_set_vc_t

0xb7b8,	// (0x000260d8) setting_code_pane_vc_ParamLimits

0xb7b8,	// (0x000260d8) setting_code_pane_vc

0xb7c9,	// (0x000260e9) setting_slider_graphic_pane_vc

0xb7c9,	// (0x000260e9) setting_slider_pane_vc

0xb7c9,	// (0x000260e9) setting_text_pane_vc

0xb7c9,	// (0x000260e9) setting_volume_pane_vc

0xb7d3,	// (0x000260f3) scroll_pane_cp121_vc

0x8000,	// (0x00022920) set_content_pane_vc

0xb811,	// (0x00026131) button_value_adjust_pane_g1

0xb81a,	// (0x0002613a) button_value_adjust_pane_g2

0x0001,

0xfa8a,	// (0x0002a3aa) button_value_adjust_pane_g

0xb823,	// (0x00026143) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb823,	// (0x00026143) form_field_slider_wide_pane_vc_t1

0xb837,	// (0x00026157) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb837,	// (0x00026157) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8f,	// (0x0002a3af) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8f,	// (0x0002a3af) form_field_slider_wide_pane_vc_t

0x7a35,	// (0x00022355) input_focus_pane_cp10_vc_ParamLimits

0x7a35,	// (0x00022355) input_focus_pane_cp10_vc

0xb849,	// (0x00026169) slider_cont_pane_cp1_vc_ParamLimits

0xb849,	// (0x00026169) slider_cont_pane_cp1_vc

0xb67a,	// (0x00025f9a) slider_form_pane_g1_cp2

0xb683,	// (0x00025fa3) slider_form_pane_g2_cp2

0xb862,	// (0x00026182) form_field_slider_pane_vc_t3

0xb870,	// (0x00026190) form_field_slider_pane_vc_t4

0xb87e,	// (0x0002619e) slider_form_pane_vc_ParamLimits

0xb87e,	// (0x0002619e) slider_form_pane_vc

0xb88b,	// (0x000261ab) form_field_slider_pane_vc_t1_ParamLimits

0xb88b,	// (0x000261ab) form_field_slider_pane_vc_t1

0xb837,	// (0x00026157) form_field_slider_pane_vc_t2_ParamLimits

0xb837,	// (0x00026157) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0002a3bf) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0002a3bf) form_field_slider_pane_vc_t

0x7a35,	// (0x00022355) input_focus_pane_cp9_vc_ParamLimits

0x7a35,	// (0x00022355) input_focus_pane_cp9_vc

0xb8a7,	// (0x000261c7) slider_cont_pane_vc_ParamLimits

0xb8a7,	// (0x000261c7) slider_cont_pane_vc

0xb8b9,	// (0x000261d9) list_form_graphic_pane_cp_vc_ParamLimits

0xb8b9,	// (0x000261d9) list_form_graphic_pane_cp_vc

0x9bf5,	// (0x00024515) form_field_popup_wide_pane_vc_g1

0xb8ce,	// (0x000261ee) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb8ce,	// (0x000261ee) form_field_popup_wide_pane_vc_t1

0x8026,	// (0x00022946) input_focus_pane_cp8_vc_ParamLimits

0x8026,	// (0x00022946) input_focus_pane_cp8_vc

0xb8e5,	// (0x00026205) list_form_wide_pane_vc_ParamLimits

0xb8e5,	// (0x00026205) list_form_wide_pane_vc

0xb8f1,	// (0x00026211) list_form_graphic_pane_vc_g1

0xb8f9,	// (0x00026219) list_form_graphic_pane_vc_t1_ParamLimits

0xb8f9,	// (0x00026219) list_form_graphic_pane_vc_t1

0x77ba,	// (0x000220da) list_highlight_pane_cp5_vc_ParamLimits

0x77ba,	// (0x000220da) list_highlight_pane_cp5_vc

0xb915,	// (0x00026235) list_form_graphic_pane_vc_ParamLimits

0xb915,	// (0x00026235) list_form_graphic_pane_vc

0x9bf5,	// (0x00024515) form_field_popup_pane_vc_g1

0xb92b,	// (0x0002624b) form_field_popup_pane_vc_t1_ParamLimits

0xb92b,	// (0x0002624b) form_field_popup_pane_vc_t1

0x8026,	// (0x00022946) input_focus_pane_cp7_vc_ParamLimits

0x8026,	// (0x00022946) input_focus_pane_cp7_vc

0xb942,	// (0x00026262) list_form_pane_vc_ParamLimits

0xb942,	// (0x00026262) list_form_pane_vc

0xb94e,	// (0x0002626e) data_form_pane_vc_t1_ParamLimits

0xb94e,	// (0x0002626e) data_form_pane_vc_t1

0x808d,	// (0x000229ad) input_focus_pane_vc_g1

0x8095,	// (0x000229b5) input_focus_pane_vc_g2

0x809d,	// (0x000229bd) input_focus_pane_vc_g3

0x80a5,	// (0x000229c5) input_focus_pane_vc_g4

0x80ad,	// (0x000229cd) input_focus_pane_vc_g5

0x80b5,	// (0x000229d5) input_focus_pane_vc_g6

0x80bd,	// (0x000229dd) input_focus_pane_vc_g7

0x80c5,	// (0x000229e5) input_focus_pane_vc_g8

0x80cd,	// (0x000229ed) input_focus_pane_vc_g9

0x76d0,	// (0x00021ff0) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x00029fc8) input_focus_pane_vc_g

0x9be9,	// (0x00024509) data_form_pane_vc_ParamLimits

0x9be9,	// (0x00024509) data_form_pane_vc

0x9bf5,	// (0x00024515) form_field_data_pane_vc_g1

0xb969,	// (0x00026289) form_field_data_pane_vc_t1_ParamLimits

0xb969,	// (0x00026289) form_field_data_pane_vc_t1

0x8026,	// (0x00022946) input_focus_pane_vc_ParamLimits

0x8026,	// (0x00022946) input_focus_pane_vc

0xb983,	// (0x000262a3) button_value_adjust_pane_cp3_vc

0xb98b,	// (0x000262ab) button_value_adjust_pane_cp5_vc

0xb993,	// (0x000262b3) form_field_data_pane_vc_ParamLimits

0xb993,	// (0x000262b3) form_field_data_pane_vc

0xb9aa,	// (0x000262ca) form_field_data_pane_vc_cp2

0xb9b2,	// (0x000262d2) form_field_data_wide_pane_vc_ParamLimits

0xb9b2,	// (0x000262d2) form_field_data_wide_pane_vc

0xb9c8,	// (0x000262e8) form_field_data_wide_pane_vc_cp2

0xb9d0,	// (0x000262f0) form_field_popup_pane_vc_ParamLimits

0xb9d0,	// (0x000262f0) form_field_popup_pane_vc

0xb9e7,	// (0x00026307) form_field_popup_wide_pane_vc_ParamLimits

0xb9e7,	// (0x00026307) form_field_popup_wide_pane_vc

0xb9fd,	// (0x0002631d) form_field_slider_pane_vc_ParamLimits

0xb9fd,	// (0x0002631d) form_field_slider_pane_vc

0xba10,	// (0x00026330) form_field_slider_wide_pane_vc_ParamLimits

0xba10,	// (0x00026330) form_field_slider_wide_pane_vc

0xba23,	// (0x00026343) grid_touch_1_pane_ParamLimits

0xba23,	// (0x00026343) grid_touch_1_pane

0xba2f,	// (0x0002634f) grid_touch_2_pane_ParamLimits

0xba2f,	// (0x0002634f) grid_touch_2_pane

0x8f54,	// (0x00023874) touch_pane_g1_ParamLimits

0x8f54,	// (0x00023874) touch_pane_g1

0xba47,	// (0x00026367) cell_app_pane_cp_wide_ParamLimits

0xba47,	// (0x00026367) cell_app_pane_cp_wide

0xba58,	// (0x00026378) grid_popup_fast_wide_pane_ParamLimits

0xba58,	// (0x00026378) grid_popup_fast_wide_pane

0xba6c,	// (0x0002638c) scroll_pane_cp19_ParamLimits

0xba6c,	// (0x0002638c) scroll_pane_cp19

0x76da,	// (0x00021ffa) bg_popup_window_pane_cp20

0xba80,	// (0x000263a0) listscroll_popup_fast_wide_pane

0x77ba,	// (0x000220da) grid_indicator_nsta_pane

0xba88,	// (0x000263a8) clock_nsta_pane_g1

0xba91,	// (0x000263b1) clock_nsta_pane_t1

0xbaad,	// (0x000263cd) cell_indicator_nsta_pane_ParamLimits

0xbaad,	// (0x000263cd) cell_indicator_nsta_pane

0xbae5,	// (0x00026405) cell_indicator_nsta_pane_g1

0xbaf3,	// (0x00026413) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x0002a3c9) cell_indicator_nsta_pane_g

0xbb09,	// (0x00026429) clock_nsta_pane_cp

0xbb11,	// (0x00026431) indicator_nsta_pane_cp

0xbb1a,	// (0x0002643a) nsta_clock_indic_pane_g1

0x7883,	// (0x000221a3) grid_indicator_pane

0x85c5,	// (0x00022ee5) scroll_pane_cp29

0x6357,	// (0x00020c77) indicator_nsta_pane_cp2_ParamLimits

0x6357,	// (0x00020c77) indicator_nsta_pane_cp2

0x77ba,	// (0x000220da) main_apps_wheel_pane

0x9de2,	// (0x00024702) form_midp_field_text_pane_ParamLimits

0x9f2d,	// (0x0002484d) scroll_bar_cp050_ParamLimits

0xbb83,	// (0x000264a3) cell_indicator_pane_ParamLimits

0xbb83,	// (0x000264a3) cell_indicator_pane

0xbb9a,	// (0x000264ba) cell_indicator_pane_g1

0xbba4,	// (0x000264c4) grid_wheel_folder_pane_ParamLimits

0xbba4,	// (0x000264c4) grid_wheel_folder_pane

0xbbb8,	// (0x000264d8) list_wheel_apps_pane_ParamLimits

0xbbb8,	// (0x000264d8) list_wheel_apps_pane

0xbbc9,	// (0x000264e9) main_apps_wheel_pane_g1_ParamLimits

0xbbc9,	// (0x000264e9) main_apps_wheel_pane_g1

0xbbdd,	// (0x000264fd) main_apps_wheel_pane_g2_ParamLimits

0xbbdd,	// (0x000264fd) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0002a3e5) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0002a3e5) main_apps_wheel_pane_g

0xbbf5,	// (0x00026515) main_apps_wheel_pane_t1_ParamLimits

0xbbf5,	// (0x00026515) main_apps_wheel_pane_t1

0xbc18,	// (0x00026538) list_wheel_apps_pane_g1

0xbc20,	// (0x00026540) list_wheel_apps_pane_g2

0xbc28,	// (0x00026548) list_wheel_apps_pane_g3

0xbc30,	// (0x00026550) list_wheel_apps_pane_g4

0xbc3a,	// (0x0002655a) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x0002a3ea) list_wheel_apps_pane_g

0x8b0b,	// (0x0002342b) navi_icon_text_pane

0x95aa,	// (0x00023eca) aid_fill_nsta

0xbc5d,	// (0x0002657d) navi_icon_text_pane_g1

0xbc6c,	// (0x0002658c) navi_icon_text_pane_t1

0x89a9,	// (0x000232c9) list_set_graphic_pane_t1_ParamLimits

0x89a9,	// (0x000232c9) list_set_graphic_pane_t1

0xa67c,	// (0x00024f9c) popup_midp_note_alarm_window_t6_ParamLimits

0xa67c,	// (0x00024f9c) popup_midp_note_alarm_window_t6

0xa68e,	// (0x00024fae) popup_midp_note_alarm_window_t7_ParamLimits

0xa68e,	// (0x00024fae) popup_midp_note_alarm_window_t7

0xa6a0,	// (0x00024fc0) popup_midp_note_alarm_window_t8_ParamLimits

0xa6a0,	// (0x00024fc0) popup_midp_note_alarm_window_t8

0xa6b2,	// (0x00024fd2) popup_midp_note_alarm_window_t9_ParamLimits

0xa6b2,	// (0x00024fd2) popup_midp_note_alarm_window_t9

0xa6c4,	// (0x00024fe4) popup_midp_note_alarm_window_t10_ParamLimits

0xa6c4,	// (0x00024fe4) popup_midp_note_alarm_window_t10

0xa6d6,	// (0x00024ff6) popup_midp_note_alarm_window_t11_ParamLimits

0xa6d6,	// (0x00024ff6) popup_midp_note_alarm_window_t11

0xa6e8,	// (0x00025008) scroll_pane_cp17_ParamLimits

0xa6e8,	// (0x00025008) scroll_pane_cp17

0x678b,	// (0x000210ab) volume_small_pane_cp_g1

0x6a80,	// (0x000213a0) volume_small_pane_cp_g2

0x6a89,	// (0x000213a9) volume_small_pane_cp_g3

0x6a92,	// (0x000213b2) volume_small_pane_cp_g4

0x6a9b,	// (0x000213bb) volume_small_pane_cp_g5

0x6aa4,	// (0x000213c4) volume_small_pane_cp_g6

0x6aad,	// (0x000213cd) volume_small_pane_cp_g7

0x6ab6,	// (0x000213d6) volume_small_pane_cp_g8

0x6abf,	// (0x000213df) volume_small_pane_cp_g9

0x6ac8,	// (0x000213e8) volume_small_pane_cp_g10

0x8d66,	// (0x00023686) midp_ticker_pane_g1_ParamLimits

0x8d72,	// (0x00023692) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x0002a090) midp_ticker_pane_g_ParamLimits

0x8d7e,	// (0x0002369e) midp_ticker_pane_t1_ParamLimits

0x95c0,	// (0x00023ee0) aid_fill_nsta_2

0x9f19,	// (0x00024839) list_form2_midp_pane

0xb069,	// (0x00025989) midp_editing_number_pane_ParamLimits

0xb078,	// (0x00025998) midp_ticker_pane_ParamLimits

0xbc81,	// (0x000265a1) form2_midp_field_pane

0xbca5,	// (0x000265c5) scroll_pane_cp51

0xbcc5,	// (0x000265e5) form2_midp_button_pane_ParamLimits

0xbcc5,	// (0x000265e5) form2_midp_button_pane

0xbcd7,	// (0x000265f7) form2_midp_content_pane_ParamLimits

0xbcd7,	// (0x000265f7) form2_midp_content_pane

0xbcf1,	// (0x00026611) form2_midp_field_choice_group_pane

0xbcf9,	// (0x00026619) form2_midp_field_pane_g1

0xbd01,	// (0x00026621) form2_midp_field_pane_g2

0xbd09,	// (0x00026629) form2_midp_field_pane_g3

0xbd11,	// (0x00026631) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x0002a40f) form2_midp_field_pane_g

0xbd19,	// (0x00026639) form2_midp_gauge_slider_pane

0xbd21,	// (0x00026641) form2_midp_gauge_wait_pane

0xbd29,	// (0x00026649) form2_midp_image_pane_ParamLimits

0xbd29,	// (0x00026649) form2_midp_image_pane

0xbd44,	// (0x00026664) form2_midp_label_pane_ParamLimits

0xbd44,	// (0x00026664) form2_midp_label_pane

0xbd5d,	// (0x0002667d) form2_midp_label_pane_cp_ParamLimits

0xbd5d,	// (0x0002667d) form2_midp_label_pane_cp

0xbd7e,	// (0x0002669e) form2_midp_string_pane_ParamLimits

0xbd7e,	// (0x0002669e) form2_midp_string_pane

0x5847,	// (0x00020167) form2_midp_text_pane_ParamLimits

0x5847,	// (0x00020167) form2_midp_text_pane

0xbd90,	// (0x000266b0) form2_midp_time_pane

0xbda0,	// (0x000266c0) input_focus_pane_cp51_ParamLimits

0xbda0,	// (0x000266c0) input_focus_pane_cp51

0xbdb8,	// (0x000266d8) form2_midp_label_pane_t1_ParamLimits

0xbdb8,	// (0x000266d8) form2_midp_label_pane_t1

0x5862,	// (0x00020182) form2_mdip_text_pane_t1_ParamLimits

0x5862,	// (0x00020182) form2_mdip_text_pane_t1

0x5880,	// (0x000201a0) form2_midp_time_pane_t1

0xbe01,	// (0x00026721) form2_midp_gauge_slider_pane_t1

0xbe13,	// (0x00026733) form2_midp_gauge_slider_pane_t2

0xbe25,	// (0x00026745) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x0002a418) form2_midp_gauge_slider_pane_t

0xbe37,	// (0x00026757) form2_midp_slider_pane

0xbe43,	// (0x00026763) form2_midp_gauge_wait_pane_t1

0xbe51,	// (0x00026771) form2_midp_wait_pane_ParamLimits

0xbe51,	// (0x00026771) form2_midp_wait_pane

0x9c14,	// (0x00024534) list_single_2graphic_pane_cp4_ParamLimits

0x9c14,	// (0x00024534) list_single_2graphic_pane_cp4

0xbe7c,	// (0x0002679c) list_single_midp_graphic_pane_cp_ParamLimits

0xbe7c,	// (0x0002679c) list_single_midp_graphic_pane_cp

0x76da,	// (0x00021ffa) list_highlight_pane_cp20

0xbeab,	// (0x000267cb) list_single_2graphic_pane_g1_cp4

0xbeb3,	// (0x000267d3) list_single_2graphic_pane_g2_cp4

0xbebb,	// (0x000267db) list_single_2graphic_pane_t1_cp4

0x77ba,	// (0x000220da) list_highlight_pane_cp21

0xbeca,	// (0x000267ea) list_single_midp_graphic_pane_g4_cp

0xbed9,	// (0x000267f9) list_single_midp_graphic_pane_t1_cp

0xbeee,	// (0x0002680e) form2_mdip_string_pane_t1_ParamLimits

0xbeee,	// (0x0002680e) form2_mdip_string_pane_t1

0x76da,	// (0x00021ffa) bg_wml_button_pane_cp2

0x76d0,	// (0x00021ff0) form2_midp_image_pane_g1

0x4ecc,	// (0x0001f7ec) list_double_large_graphic_pane_g5_ParamLimits

0x4ecc,	// (0x0001f7ec) list_double_large_graphic_pane_g5

0x8c93,	// (0x000235b3) midp_form_pane_ParamLimits

0x77ba,	// (0x000220da) main_apps_wheel_pane_ParamLimits

0x9392,	// (0x00023cb2) popup_preview_window_ParamLimits

0x9392,	// (0x00023cb2) popup_preview_window

0x954d,	// (0x00023e6d) popup_touch_info_window_ParamLimits

0x954d,	// (0x00023e6d) popup_touch_info_window

0x956b,	// (0x00023e8b) popup_touch_menu_window_ParamLimits

0x956b,	// (0x00023e8b) popup_touch_menu_window

0x76c6,	// (0x00021fe6) bg_popup_sub_pane_cp6

0xbfe7,	// (0x00026907) list_touch_menu_pane

0xbfef,	// (0x0002690f) list_single_touch_menu_pane_ParamLimits

0xbfef,	// (0x0002690f) list_single_touch_menu_pane

0xc006,	// (0x00026926) list_single_touch_menu_pane_t1

0x77ba,	// (0x000220da) bg_popup_sub_pane_cp7_ParamLimits

0x77ba,	// (0x000220da) bg_popup_sub_pane_cp7

0xc014,	// (0x00026934) heading_sub_pane

0xc01c,	// (0x0002693c) list_touch_info_pane_ParamLimits

0xc01c,	// (0x0002693c) list_touch_info_pane

0xc02b,	// (0x0002694b) list_single_touch_info_pane_ParamLimits

0xc02b,	// (0x0002694b) list_single_touch_info_pane

0xc03d,	// (0x0002695d) list_single_touch_info_pane_t1

0xc04b,	// (0x0002696b) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x0002a426) list_single_touch_info_pane_t

0x8c8b,	// (0x000235ab) bg_popup_heading_pane_cp

0xc059,	// (0x00026979) heading_sub_pane_t1

0x9b83,	// (0x000244a3) bg_popup_preview_window_pane_cp_ParamLimits

0x9b83,	// (0x000244a3) bg_popup_preview_window_pane_cp

0xc014,	// (0x00026934) heading_preview_pane

0xc01c,	// (0x0002693c) list_preview_pane_ParamLimits

0xc01c,	// (0x0002693c) list_preview_pane

0xc067,	// (0x00026987) popup_preview_window_g1

0xc02b,	// (0x0002694b) list_single_preview_pane_ParamLimits

0xc02b,	// (0x0002694b) list_single_preview_pane

0xc06f,	// (0x0002698f) list_single_preview_pane_g1

0xc077,	// (0x00026997) list_single_preview_pane_t1

0xc03d,	// (0x0002695d) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x0002a42b) list_single_preview_pane_t

0xc085,	// (0x000269a5) bg_popup_heading_pane_cp2_ParamLimits

0xc085,	// (0x000269a5) bg_popup_heading_pane_cp2

0xc09b,	// (0x000269bb) heading_preview_pane_g1

0xc0a3,	// (0x000269c3) heading_preview_pane_t1_ParamLimits

0xc0a3,	// (0x000269c3) heading_preview_pane_t1

0x78a6,	// (0x000221c6) soft_indicator_pane_t1_ParamLimits

0x7f99,	// (0x000228b9) scroll_pane_ParamLimits

0x84be,	// (0x00022dde) scroll_sc2_left_pane

0x84c7,	// (0x00022de7) scroll_sc2_right_pane

0x84e6,	// (0x00022e06) scroll_bg_pane_g1_ParamLimits

0x84fb,	// (0x00022e1b) scroll_bg_pane_g2_ParamLimits

0x8513,	// (0x00022e33) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x0002a01f) scroll_bg_pane_g_ParamLimits

0x84e6,	// (0x00022e06) scroll_handle_pane_g1_ParamLimits

0x8535,	// (0x00022e55) scroll_handle_pane_g2_ParamLimits

0x8513,	// (0x00022e33) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x0002a026) scroll_handle_pane_g_ParamLimits

0x9019,	// (0x00023939) popup_choice_list_window_ParamLimits

0x9019,	// (0x00023939) popup_choice_list_window

0x99dd,	// (0x000242fd) choice_list_pane

0x9a5f,	// (0x0002437f) cell_toolbar_pane_t1

0x9a87,	// (0x000243a7) toolbar_button_pane_ParamLimits

0xabb4,	// (0x000254d4) ai_gene_pane_1_t2_ParamLimits

0xabb4,	// (0x000254d4) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x0002a243) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x0002a243) ai_gene_pane_1_t

0xc0c0,	// (0x000269e0) scroll_sc2_left_pane_g1

0xc0c0,	// (0x000269e0) scroll_sc2_right_pane_g1

0x8ff1,	// (0x00023911) bg_popup_sub_pane_cp10

0xc0ca,	// (0x000269ea) list_choice_list_pane

0xc0e1,	// (0x00026a01) list_single_choice_list_pane_ParamLimits

0xc0e1,	// (0x00026a01) list_single_choice_list_pane

0xc0f5,	// (0x00026a15) list_single_choice_list_pane_g1

0xc0fd,	// (0x00026a1d) list_single_choice_list_pane_t1_ParamLimits

0xc0fd,	// (0x00026a1d) list_single_choice_list_pane_t1

0xc112,	// (0x00026a32) choice_list_pane_g1

0xc11a,	// (0x00026a3a) choice_list_pane_t1

0x76c6,	// (0x00021fe6) input_focus_pane_cp11

0x839b,	// (0x00022cbb) title_pane_stacon_g2_ParamLimits

0x839b,	// (0x00022cbb) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x0002a005) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0002a005) title_pane_stacon_g

0x8c8b,	// (0x000235ab) cursor_press_pane

0x90c1,	// (0x000239e1) popup_fep_hwr_window_ParamLimits

0x90c1,	// (0x000239e1) popup_fep_hwr_window

0x913b,	// (0x00023a5b) popup_fep_vkb_window_ParamLimits

0x913b,	// (0x00023a5b) popup_fep_vkb_window

0xc128,	// (0x00026a48) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x0002a454) fep_vkb_side_pane_g_ParamLimits

0x6afc,	// (0x0002141c) fep_hwr_candidate_pane_ParamLimits

0x6afc,	// (0x0002141c) fep_hwr_candidate_pane

0x6b26,	// (0x00021446) fep_hwr_side_pane_ParamLimits

0x6b26,	// (0x00021446) fep_hwr_side_pane

0x6b46,	// (0x00021466) fep_hwr_top_pane_ParamLimits

0x6b46,	// (0x00021466) fep_hwr_top_pane

0x6b5e,	// (0x0002147e) fep_hwr_write_pane_ParamLimits

0x6b5e,	// (0x0002147e) fep_hwr_write_pane

0xfb34,	// (0x0002a454) fep_vkb_side_pane_g

0xc130,	// (0x00026a50) fep_hwr_top_pane_g1

0xc142,	// (0x00026a62) fep_hwr_top_pane_g2

0x6b8a,	// (0x000214aa) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x0002a430) fep_hwr_top_pane_g

0x6b9f,	// (0x000214bf) fep_hwr_top_text_pane

0x868c,	// (0x00022fac) fep_hwr_top_text_pane_g1

0xc178,	// (0x00026a98) fep_hwr_top_text_pane_t1

0x6c95,	// (0x000215b5) fep_hwr_candidate_pane_g1

0xc3cb,	// (0x00026ceb) fep_vkb_keypad_pane_g3_ParamLimits

0xc3cb,	// (0x00026ceb) fep_vkb_keypad_pane_g3

0xc3f3,	// (0x00026d13) fep_vkb_keypad_pane_g4_ParamLimits

0xc3f3,	// (0x00026d13) fep_vkb_keypad_pane_g4

0xc462,	// (0x00026d82) fep_vkb_bottom_pane_g2_ParamLimits

0xc462,	// (0x00026d82) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x0002a45b) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x0002a45b) fep_vkb_bottom_pane_g

0xc0c0,	// (0x000269e0) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x0002a465) cell_vkb_side_pane_g

0xc4ed,	// (0x00026e0d) cell_vkb_side_pane_t1

0xc4fb,	// (0x00026e1b) cell_vkb_side_pane_t1_copy1

0xc0c0,	// (0x000269e0) bg_fep_vkb_candidate_pane_g2

0xc627,	// (0x00026f47) cell_vkb_candidate_pane_ParamLimits

0xc186,	// (0x00026aa6) aid_size_cell_vkb_ParamLimits

0xc186,	// (0x00026aa6) aid_size_cell_vkb

0xc627,	// (0x00026f47) cell_vkb_candidate_pane

0x6caf,	// (0x000215cf) bg_popup_fep_shadow_pane_g1

0xc214,	// (0x00026b34) fep_vkb_bottom_pane_ParamLimits

0xc214,	// (0x00026b34) fep_vkb_bottom_pane

0xc24a,	// (0x00026b6a) fep_vkb_candidate_pane_ParamLimits

0xc24a,	// (0x00026b6a) fep_vkb_candidate_pane

0xc266,	// (0x00026b86) fep_vkb_keypad_pane_ParamLimits

0xc266,	// (0x00026b86) fep_vkb_keypad_pane

0xc2ac,	// (0x00026bcc) fep_vkb_side_pane_ParamLimits

0xc2ac,	// (0x00026bcc) fep_vkb_side_pane

0xc2e8,	// (0x00026c08) fep_vkb_top_pane_ParamLimits

0xc2e8,	// (0x00026c08) fep_vkb_top_pane

0xc324,	// (0x00026c44) fep_vkb_top_pane_g1_ParamLimits

0xc324,	// (0x00026c44) fep_vkb_top_pane_g1

0xc333,	// (0x00026c53) fep_vkb_top_pane_g2_ParamLimits

0xc333,	// (0x00026c53) fep_vkb_top_pane_g2

0xc342,	// (0x00026c62) fep_vkb_top_pane_g3_ParamLimits

0xc342,	// (0x00026c62) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x0002a44b) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x0002a44b) fep_vkb_top_pane_g

0xc360,	// (0x00026c80) fep_vkb_top_text_pane_ParamLimits

0xc360,	// (0x00026c80) fep_vkb_top_text_pane

0xc371,	// (0x00026c91) fep_vkb_side_pane_g1_ParamLimits

0xc371,	// (0x00026c91) fep_vkb_side_pane_g1

0xc3ba,	// (0x00026cda) grid_vkb_side_pane_ParamLimits

0xc3ba,	// (0x00026cda) grid_vkb_side_pane

0x6cb7,	// (0x000215d7) bg_popup_fep_shadow_pane_g2

0x6cc0,	// (0x000215e0) bg_popup_fep_shadow_pane_g3

0x6cc8,	// (0x000215e8) bg_popup_fep_shadow_pane_g4

0x6cd1,	// (0x000215f1) bg_popup_fep_shadow_pane_g5

0x6cdb,	// (0x000215fb) bg_popup_fep_shadow_pane_g6

0x6ce3,	// (0x00021603) bg_popup_fep_shadow_pane_g7

0x80ad,	// (0x000229cd) bg_popup_fep_shadow_pane_g8

0xc411,	// (0x00026d31) grid_vkb_keypad_number_pane_ParamLimits

0xc411,	// (0x00026d31) grid_vkb_keypad_number_pane

0xc421,	// (0x00026d41) grid_vkb_keypad_pane_ParamLimits

0xc421,	// (0x00026d41) grid_vkb_keypad_pane

0xc447,	// (0x00026d67) fep_vkb_bottom_pane_g1_ParamLimits

0xc447,	// (0x00026d67) fep_vkb_bottom_pane_g1

0xc470,	// (0x00026d90) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc470,	// (0x00026d90) grid_vkb_keypad_bottom_left_pane

0xc485,	// (0x00026da5) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc485,	// (0x00026da5) grid_vkb_keypad_bottom_right_pane

0xc49a,	// (0x00026dba) fep_vkb_top_text_pane_g1

0xc4b5,	// (0x00026dd5) fep_vkb_top_text_pane_t1

0xc4ca,	// (0x00026dea) cell_vkb_side_pane_ParamLimits

0xc4ca,	// (0x00026dea) cell_vkb_side_pane

0xc0c0,	// (0x000269e0) cell_vkb_side_pane_g1

0xc509,	// (0x00026e29) cell_vkb_keypad_pane_ParamLimits

0xc509,	// (0x00026e29) cell_vkb_keypad_pane

0xc57e,	// (0x00026e9e) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x0002a478) bg_popup_fep_shadow_pane_g

0xc0c0,	// (0x000269e0) cell_hwr_side_pane_g1

0xc0c0,	// (0x000269e0) cell_hwr_side_pane_g2

0xc588,	// (0x00026ea8) cell_vkb_keypad_pane_t1

0xc596,	// (0x00026eb6) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc596,	// (0x00026eb6) cell_vkb_keypad_bottom_left_pane

0xc5b3,	// (0x00026ed3) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc5b3,	// (0x00026ed3) cell_vkb_keypad_bottom_right_pane

0xc0c0,	// (0x000269e0) cell_vkb_keypad_bottom_left_pane_g1

0xc0c0,	// (0x000269e0) cell_vkb_keypad_bottom_right_pane_g1

0xc5ec,	// (0x00026f0c) cell_vkb_keypad_number_pane_ParamLimits

0xc5ec,	// (0x00026f0c) cell_vkb_keypad_number_pane

0xc60b,	// (0x00026f2b) cell_vkb_keypad_number_pane_g1

0xc615,	// (0x00026f35) cell_vkb_keypad_number_pane_g2

0xc61e,	// (0x00026f3e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x0002a46a) cell_vkb_keypad_number_pane_g

0xc588,	// (0x00026ea8) cell_vkb_keypad_number_pane_t1

0xc642,	// (0x00026f62) fep_vkb_candidate_pane_g1

0x0001,

0xfb45,	// (0x0002a465) cell_hwr_side_pane_g

0xc65b,	// (0x00026f7b) cell_hwr_side_pane_t1

0x6cf5,	// (0x00021615) cell_hwr_side_pane_t1_copy1

0xc352,	// (0x00026c72) cell_hwr_candidate_pane_g1

0x6d03,	// (0x00021623) cell_hwr_candidate_pane_t1

0xc0c0,	// (0x000269e0) cell_vkb_candidate_pane_g2

0xc6e1,	// (0x00027001) cell_vkb_candidate_pane_t1

0x1404,	// (0x0001bd24) bg_popup_fep_shadow_pane_ParamLimits

0x1404,	// (0x0001bd24) bg_popup_fep_shadow_pane

0x1412,	// (0x0001bd32) bg_fep_hwr_top_pane_g4

0xc154,	// (0x00026a74) bg_hwr_side_pane_g1_ParamLimits

0xc154,	// (0x00026a74) bg_hwr_side_pane_g1

0x6bdb,	// (0x000214fb) cell_hwr_side_pane_ParamLimits

0x6bdb,	// (0x000214fb) cell_hwr_side_pane

0x6c16,	// (0x00021536) fep_hwr_write_pane_g1_ParamLimits

0x6c16,	// (0x00021536) fep_hwr_write_pane_g1

0x6c23,	// (0x00021543) fep_hwr_write_pane_g2_ParamLimits

0x6c23,	// (0x00021543) fep_hwr_write_pane_g2

0x6c30,	// (0x00021550) fep_hwr_write_pane_g3_ParamLimits

0x6c30,	// (0x00021550) fep_hwr_write_pane_g3

0x6c3e,	// (0x0002155e) fep_hwr_write_pane_g4_ParamLimits

0x6c3e,	// (0x0002155e) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x0002a437) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x0002a437) fep_hwr_write_pane_g

0x1412,	// (0x0001bd32) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1412,	// (0x0001bd32) bg_fep_hwr_candidate_pane_g2

0x6c53,	// (0x00021573) cell_hwr_candidate_pane_ParamLimits

0x6c53,	// (0x00021573) cell_hwr_candidate_pane

0x6c95,	// (0x000215b5) fep_hwr_candidate_pane_g1_ParamLimits

0xc1b4,	// (0x00026ad4) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc1b4,	// (0x00026ad4) bg_popup_fep_shadow_pane_cp2

0xc352,	// (0x00026c72) fep_vkb_top_pane_g4_ParamLimits

0xc352,	// (0x00026c72) fep_vkb_top_pane_g4

0xc398,	// (0x00026cb8) fep_vkb_side_pane_g2_ParamLimits

0xc398,	// (0x00026cb8) fep_vkb_side_pane_g2

0x5026,	// (0x0001f946) list_setting_pane_t4_ParamLimits

0x5026,	// (0x0001f946) list_setting_pane_t4

0x50c0,	// (0x0001f9e0) list_setting_number_pane_t5_ParamLimits

0x50c0,	// (0x0001f9e0) list_setting_number_pane_t5

0x86ce,	// (0x00022fee) list_double_heading_pane_cp2_ParamLimits

0x86ce,	// (0x00022fee) list_double_heading_pane_cp2

0x8040,	// (0x00022960) list_double_heading_pane_g1_cp2_ParamLimits

0x8040,	// (0x00022960) list_double_heading_pane_g1_cp2

0x804c,	// (0x0002296c) list_double_heading_pane_g2_cp2_ParamLimits

0x804c,	// (0x0002296c) list_double_heading_pane_g2_cp2

0xc6ef,	// (0x0002700f) list_double_heading_pane_t1_cp2_ParamLimits

0xc6ef,	// (0x0002700f) list_double_heading_pane_t1_cp2

0xc705,	// (0x00027025) list_double_heading_pane_t2_cp2_ParamLimits

0xc705,	// (0x00027025) list_double_heading_pane_t2_cp2

0x76ae,	// (0x00021fce) aid_value_unit2

0x5eef,	// (0x0002080f) popup_preview_fixed_window

0x7a43,	// (0x00022363) bg_popup_preview_window_pane_cp02

0xc717,	// (0x00027037) list_preview_fixed_pane

0xc75d,	// (0x0002707d) list_empty_pane_fp_ParamLimits

0xc75d,	// (0x0002707d) list_empty_pane_fp

0xc75d,	// (0x0002707d) list_single_cale_day_pane_fp_ParamLimits

0xc75d,	// (0x0002707d) list_single_cale_day_pane_fp

0xc75d,	// (0x0002707d) list_single_graphic_heading_pane_fp_ParamLimits

0xc75d,	// (0x0002707d) list_single_graphic_heading_pane_fp

0xc75d,	// (0x0002707d) list_single_graphic_pane_fp_ParamLimits

0xc75d,	// (0x0002707d) list_single_graphic_pane_fp

0xc75d,	// (0x0002707d) list_single_heading_pane_fp_ParamLimits

0xc75d,	// (0x0002707d) list_single_heading_pane_fp

0xc75d,	// (0x0002707d) list_single_pane_fp_ParamLimits

0xc75d,	// (0x0002707d) list_single_pane_fp

0xc772,	// (0x00027092) list_single_pane_fp_g1_ParamLimits

0xc772,	// (0x00027092) list_single_pane_fp_g1

0x5893,	// (0x000201b3) list_single_pane_fp_g2_ParamLimits

0x5893,	// (0x000201b3) list_single_pane_fp_g2

0x589f,	// (0x000201bf) list_single_pane_fp_g3_ParamLimits

0x589f,	// (0x000201bf) list_single_pane_fp_g3

0xc77e,	// (0x0002709e) list_single_pane_fp_g4_ParamLimits

0xc77e,	// (0x0002709e) list_single_pane_fp_g4

0x0003,

0xfb79,	// (0x0002a499) list_single_pane_fp_g_ParamLimits

0xfb79,	// (0x0002a499) list_single_pane_fp_g

0x58b3,	// (0x000201d3) list_single_pane_fp_t1_ParamLimits

0x58b3,	// (0x000201d3) list_single_pane_fp_t1

0x58ca,	// (0x000201ea) list_single_graphic_pane_fp_g1_ParamLimits

0x58ca,	// (0x000201ea) list_single_graphic_pane_fp_g1

0xc772,	// (0x00027092) list_single_graphic_pane_fp_g2_ParamLimits

0xc772,	// (0x00027092) list_single_graphic_pane_fp_g2

0x5893,	// (0x000201b3) list_single_graphic_pane_fp_g3_ParamLimits

0x5893,	// (0x000201b3) list_single_graphic_pane_fp_g3

0x589f,	// (0x000201bf) list_single_graphic_pane_fp_g4_ParamLimits

0x589f,	// (0x000201bf) list_single_graphic_pane_fp_g4

0xc77e,	// (0x0002709e) list_single_graphic_pane_fp_g5_ParamLimits

0xc77e,	// (0x0002709e) list_single_graphic_pane_fp_g5

0x0004,

0xfb82,	// (0x0002a4a2) list_single_graphic_pane_fp_g_ParamLimits

0xfb82,	// (0x0002a4a2) list_single_graphic_pane_fp_g

0x58d6,	// (0x000201f6) list_single_graphic_pane_fp_t1_ParamLimits

0x58d6,	// (0x000201f6) list_single_graphic_pane_fp_t1

0x58ca,	// (0x000201ea) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x58ca,	// (0x000201ea) list_single_graphic_heading_pane_fp_g1

0xc772,	// (0x00027092) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc772,	// (0x00027092) list_single_graphic_heading_pane_fp_g2

0x5893,	// (0x000201b3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5893,	// (0x000201b3) list_single_graphic_heading_pane_fp_g3

0x589f,	// (0x000201bf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x589f,	// (0x000201bf) list_single_graphic_heading_pane_fp_g4

0xc77e,	// (0x0002709e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc77e,	// (0x0002709e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0002a4a2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0002a4a2) list_single_graphic_heading_pane_fp_g

0x58ec,	// (0x0002020c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x58ec,	// (0x0002020c) list_single_graphic_heading_pane_fp_t1

0x5902,	// (0x00020222) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5902,	// (0x00020222) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x0002a4ad) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x0002a4ad) list_single_graphic_heading_pane_fp_t

0x5914,	// (0x00020234) list_single_cale_day_pane_fp_g1_ParamLimits

0x5914,	// (0x00020234) list_single_cale_day_pane_fp_g1

0xc78a,	// (0x000270aa) list_single_cale_day_pane_fp_g2_ParamLimits

0xc78a,	// (0x000270aa) list_single_cale_day_pane_fp_g2

0x594c,	// (0x0002026c) list_single_cale_day_pane_fp_g3_ParamLimits

0x594c,	// (0x0002026c) list_single_cale_day_pane_fp_g3

0x5974,	// (0x00020294) list_single_cale_day_pane_fp_g4_ParamLimits

0x5974,	// (0x00020294) list_single_cale_day_pane_fp_g4

0x5998,	// (0x000202b8) list_single_cale_day_pane_fp_g5_ParamLimits

0x5998,	// (0x000202b8) list_single_cale_day_pane_fp_g5

0x0004,

0xfb92,	// (0x0002a4b2) list_single_cale_day_pane_fp_g_ParamLimits

0xfb92,	// (0x0002a4b2) list_single_cale_day_pane_fp_g

0x59bc,	// (0x000202dc) list_single_cale_day_pane_fp_t1_ParamLimits

0x59bc,	// (0x000202dc) list_single_cale_day_pane_fp_t1

0x59e2,	// (0x00020302) list_single_cale_day_pane_fp_t2_ParamLimits

0x59e2,	// (0x00020302) list_single_cale_day_pane_fp_t2

0x59fb,	// (0x0002031b) list_single_cale_day_pane_fp_t3_ParamLimits

0x59fb,	// (0x0002031b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9d,	// (0x0002a4bd) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9d,	// (0x0002a4bd) list_single_cale_day_pane_fp_t

0xc772,	// (0x00027092) list_empty_pane_fp_g1_ParamLimits

0xc772,	// (0x00027092) list_empty_pane_fp_g1

0x5a14,	// (0x00020334) list_empty_pane_fp_t1

0x5a22,	// (0x00020342) list_empty_pane_fp_t2

0x0001,

0xfba4,	// (0x0002a4c4) list_empty_pane_fp_t

0xc772,	// (0x00027092) list_single_heading_pane_fp_g1_ParamLimits

0xc772,	// (0x00027092) list_single_heading_pane_fp_g1

0x5893,	// (0x000201b3) list_single_heading_pane_fp_g2_ParamLimits

0x5893,	// (0x000201b3) list_single_heading_pane_fp_g2

0x589f,	// (0x000201bf) list_single_heading_pane_fp_g3_ParamLimits

0x589f,	// (0x000201bf) list_single_heading_pane_fp_g3

0x0002,

0xfba9,	// (0x0002a4c9) list_single_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x0002a4c9) list_single_heading_pane_fp_g

0x5a30,	// (0x00020350) list_single_heading_pane_fp_t1_ParamLimits

0x5a30,	// (0x00020350) list_single_heading_pane_fp_t1

0x5a42,	// (0x00020362) list_single_heading_pane_fp_t2_ParamLimits

0x5a42,	// (0x00020362) list_single_heading_pane_fp_t2

0x0001,

0xfbb0,	// (0x0002a4d0) list_single_heading_pane_fp_t_ParamLimits

0xfbb0,	// (0x0002a4d0) list_single_heading_pane_fp_t

0x8232,	// (0x00022b52) aid_size_cell_fast

0x79b3,	// (0x000222d3) soft_indicator_pane_cp1_t1

0x826f,	// (0x00022b8f) cell_app_pane_cp2_ParamLimits

0x826f,	// (0x00022b8f) cell_app_pane_cp2

0x6ae5,	// (0x00021405) fep_hwr_candidate_drop_down_list_pane

0x1420,	// (0x0001bd40) fep_hwr_candidate_pane_g3_ParamLimits

0x1420,	// (0x0001bd40) fep_hwr_candidate_pane_g3

0x142d,	// (0x0001bd4d) fep_hwr_candidate_pane_g4_ParamLimits

0x142d,	// (0x0001bd4d) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x0002a444) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x0002a444) fep_hwr_candidate_pane_g

0xc239,	// (0x00026b59) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc239,	// (0x00026b59) fep_vkb_candidate_drop_down_list_pane

0xc64a,	// (0x00026f6a) fep_vkb_candidate_pane_g3

0xc652,	// (0x00026f72) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x0002a471) fep_vkb_candidate_pane_g

0xc352,	// (0x00026c72) cell_hwr_candidate_pane_g1_ParamLimits

0xc669,	// (0x00026f89) cell_hwr_candidate_pane_g3_ParamLimits

0xc669,	// (0x00026f89) cell_hwr_candidate_pane_g3

0xc68a,	// (0x00026faa) cell_hwr_candidate_pane_g4_ParamLimits

0xc68a,	// (0x00026faa) cell_hwr_candidate_pane_g4

0x0002,

0xfb6b,	// (0x0002a48b) cell_hwr_candidate_pane_g_ParamLimits

0xfb6b,	// (0x0002a48b) cell_hwr_candidate_pane_g

0xc6ab,	// (0x00026fcb) cell_vkb_candidate_pane_g3_ParamLimits

0xc6ab,	// (0x00026fcb) cell_vkb_candidate_pane_g3

0xc6c6,	// (0x00026fe6) cell_vkb_candidate_pane_g4_ParamLimits

0xc6c6,	// (0x00026fe6) cell_vkb_candidate_pane_g4

0xc796,	// (0x000270b6) cell_app_pane_cp2_g1_ParamLimits

0xc796,	// (0x000270b6) cell_app_pane_cp2_g1

0xc7b4,	// (0x000270d4) cell_app_pane_cp2_g2_ParamLimits

0xc7b4,	// (0x000270d4) cell_app_pane_cp2_g2

0x0001,

0xfbb5,	// (0x0002a4d5) cell_app_pane_cp2_g_ParamLimits

0xfbb5,	// (0x0002a4d5) cell_app_pane_cp2_g

0xc7c0,	// (0x000270e0) cell_app_pane_cp2_t1_ParamLimits

0xc7c0,	// (0x000270e0) cell_app_pane_cp2_t1

0x8026,	// (0x00022946) grid_highlight_pane_cp1_ParamLimits

0x8026,	// (0x00022946) grid_highlight_pane_cp1

0x6d21,	// (0x00021641) cell_hwr_candidate_pane_cp1_ParamLimits

0x6d21,	// (0x00021641) cell_hwr_candidate_pane_cp1

0xc352,	// (0x00026c72) fep_hwr_candidate_drop_down_list_pane_g1

0xc7d2,	// (0x000270f2) fep_hwr_candidate_drop_down_list_pane_g2

0xc7df,	// (0x000270ff) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x0002a4da) fep_hwr_candidate_drop_down_list_pane_g

0x6d40,	// (0x00021660) fep_hwr_candidate_drop_down_list_scroll_pane

0x6d49,	// (0x00021669) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d49,	// (0x00021669) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6d56,	// (0x00021676) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6d56,	// (0x00021676) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6d63,	// (0x00021683) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6d63,	// (0x00021683) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc6ab,	// (0x00026fcb) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6ab,	// (0x00026fcb) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc6c6,	// (0x00026fe6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc6c6,	// (0x00026fe6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6d70,	// (0x00021690) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6d70,	// (0x00021690) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6d8b,	// (0x000216ab) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6d8b,	// (0x000216ab) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6da6,	// (0x000216c6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6da6,	// (0x000216c6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x0002a4e1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x0002a4e1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7ec,	// (0x0002710c) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7ec,	// (0x0002710c) cell_vkb_candidate_pane_cp1

0xc352,	// (0x00026c72) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc352,	// (0x00026c72) fep_vkb_candidate_drop_down_list_pane_g1

0xc7d2,	// (0x000270f2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7d2,	// (0x000270f2) fep_vkb_candidate_drop_down_list_pane_g2

0xc7df,	// (0x000270ff) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7df,	// (0x000270ff) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x0002a4da) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbba,	// (0x0002a4da) fep_vkb_candidate_drop_down_list_pane_g

0xc80c,	// (0x0002712c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc80c,	// (0x0002712c) fep_vkb_candidate_drop_down_list_scroll_pane

0xc819,	// (0x00027139) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc819,	// (0x00027139) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc826,	// (0x00027146) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc826,	// (0x00027146) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc832,	// (0x00027152) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc832,	// (0x00027152) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc669,	// (0x00026f89) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc669,	// (0x00026f89) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc68a,	// (0x00026faa) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc68a,	// (0x00026faa) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc83e,	// (0x0002715e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc83e,	// (0x0002715e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc85f,	// (0x0002717f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc85f,	// (0x0002717f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc880,	// (0x000271a0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc880,	// (0x000271a0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x0002a4f2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x0002a4f2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x76e4,	// (0x00022004) title_pane_g1_ParamLimits

0x76f1,	// (0x00022011) title_pane_g2_ParamLimits

0xf56a,	// (0x00029e8a) title_pane_g_ParamLimits

0x867c,	// (0x00022f9c) aid_call2_pane

0x8684,	// (0x00022fa4) aid_call_pane

0x868c,	// (0x00022fac) popup_clock_analogue_window_g1

0x868c,	// (0x00022fac) popup_clock_analogue_window_g2

0x6258,	// (0x00020b78) popup_clock_analogue_window_g3

0x6261,	// (0x00020b81) popup_clock_analogue_window_g4

0x76d0,	// (0x00021ff0) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x0002a034) popup_clock_analogue_window_g

0x6269,	// (0x00020b89) popup_clock_analogue_window_t1

0x6277,	// (0x00020b97) clock_digital_number_pane_ParamLimits

0x6277,	// (0x00020b97) clock_digital_number_pane

0x6283,	// (0x00020ba3) clock_digital_number_pane_cp02_ParamLimits

0x6283,	// (0x00020ba3) clock_digital_number_pane_cp02

0x628f,	// (0x00020baf) clock_digital_number_pane_cp03_ParamLimits

0x628f,	// (0x00020baf) clock_digital_number_pane_cp03

0x629b,	// (0x00020bbb) clock_digital_number_pane_cp04_ParamLimits

0x629b,	// (0x00020bbb) clock_digital_number_pane_cp04

0x62a7,	// (0x00020bc7) clock_digital_separator_pane_ParamLimits

0x62a7,	// (0x00020bc7) clock_digital_separator_pane

0x62b3,	// (0x00020bd3) popup_clock_digital_window_t1_ParamLimits

0x62b3,	// (0x00020bd3) popup_clock_digital_window_t1

0x76d0,	// (0x00021ff0) clock_digital_number_pane_g1

0x76d0,	// (0x00021ff0) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x0002a03f) clock_digital_number_pane_g

0x76d0,	// (0x00021ff0) clock_digital_separator_pane_g1

0x76d0,	// (0x00021ff0) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x0002a03f) clock_digital_separator_pane_g

0x95aa,	// (0x00023eca) aid_fill_nsta_ParamLimits

0x96ec,	// (0x0002400c) indicator_nsta_pane_ParamLimits

0x986a,	// (0x0002418a) popup_clock_analogue_window

0x986a,	// (0x0002418a) popup_clock_digital_window

0x77ba,	// (0x000220da) grid_indicator_nsta_pane_ParamLimits

0xba9f,	// (0x000263bf) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0002a3c4) clock_nsta_pane_t

0x621c,	// (0x00020b3c) aid_size_max_handle

0x6226,	// (0x00020b46) aid_size_min_handle

0x8c8b,	// (0x000235ab) editor_scroll_pane

0xc89b,	// (0x000271bb) ex_editor_pane

0x81a0,	// (0x00022ac0) scroll_pane_cp13

0x7fc5,	// (0x000228e5) scroll_pane_cp14

0x86b6,	// (0x00022fd6) scroll_pane_cp36

0x86e2,	// (0x00023002) list_single_graphic_hl_pane_cp2_ParamLimits

0x86e2,	// (0x00023002) list_single_graphic_hl_pane_cp2

0xb0c7,	// (0x000259e7) list_single_graphic_hl_pane_ParamLimits

0xb0c7,	// (0x000259e7) list_single_graphic_hl_pane

0x5a58,	// (0x00020378) aid_size_min_hl_cp1

0xc8a3,	// (0x000271c3) list_highlight_pane_cp34_ParamLimits

0xc8a3,	// (0x000271c3) list_highlight_pane_cp34

0xc8b4,	// (0x000271d4) list_single_graphic_hl_pane_g1_ParamLimits

0xc8b4,	// (0x000271d4) list_single_graphic_hl_pane_g1

0x5a61,	// (0x00020381) list_single_graphic_hl_pane_g2_ParamLimits

0x5a61,	// (0x00020381) list_single_graphic_hl_pane_g2

0x5a61,	// (0x00020381) list_single_graphic_hl_pane_g3_ParamLimits

0x5a61,	// (0x00020381) list_single_graphic_hl_pane_g3

0x546d,	// (0x0001fd8d) list_single_graphic_hl_pane_g4_ParamLimits

0x546d,	// (0x0001fd8d) list_single_graphic_hl_pane_g4

0x5a6d,	// (0x0002038d) list_single_graphic_hl_pane_g5_ParamLimits

0x5a6d,	// (0x0002038d) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x0002a503) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x0002a503) list_single_graphic_hl_pane_g

0x5a81,	// (0x000203a1) list_single_graphic_hl_pane_t1_ParamLimits

0x5a81,	// (0x000203a1) list_single_graphic_hl_pane_t1

0xc8c1,	// (0x000271e1) aid_size_min_hl_cp2

0xc8ca,	// (0x000271ea) list_highlight_pane_cp34_cp2_ParamLimits

0xc8ca,	// (0x000271ea) list_highlight_pane_cp34_cp2

0xc8b4,	// (0x000271d4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8b4,	// (0x000271d4) list_single_graphic_hl_pane_g1_cp2

0xc8d7,	// (0x000271f7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc8d7,	// (0x000271f7) list_single_graphic_hl_pane_g2_cp2

0xc8e3,	// (0x00027203) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8e3,	// (0x00027203) list_single_graphic_hl_pane_g3_cp2

0xa768,	// (0x00025088) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xa768,	// (0x00025088) list_single_graphic_hl_pane_g4_cp2

0xc8f1,	// (0x00027211) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc8f1,	// (0x00027211) list_single_graphic_hl_pane_g5_cp2

0x6563,	// (0x00020e83) control_pane_g4_ParamLimits

0x6563,	// (0x00020e83) control_pane_g4

0x8ff1,	// (0x00023911) bg_popup_sub_pane_cp10_ParamLimits

0xc0ca,	// (0x000269ea) list_choice_list_pane_ParamLimits

0xc0d9,	// (0x000269f9) scroll_pane_cp23

0x7a43,	// (0x00022363) bg_popup_preview_window_pane_cp02_ParamLimits

0xc717,	// (0x00027037) list_preview_fixed_pane_ParamLimits

0xc72d,	// (0x0002704d) list_preview_fixed_pane_cp_ParamLimits

0xc72d,	// (0x0002704d) list_preview_fixed_pane_cp

0xc739,	// (0x00027059) popup_preview_fixed_window_g1_ParamLimits

0xc739,	// (0x00027059) popup_preview_fixed_window_g1

0xc745,	// (0x00027065) popup_preview_fixed_window_g2_ParamLimits

0xc745,	// (0x00027065) popup_preview_fixed_window_g2

0x0002,

0xfb72,	// (0x0002a492) popup_preview_fixed_window_g_ParamLimits

0xfb72,	// (0x0002a492) popup_preview_fixed_window_g

0x6190,	// (0x00020ab0) aid_navi_side_left_pane_ParamLimits

0x61a5,	// (0x00020ac5) aid_navi_side_right_pane_ParamLimits

0x61bd,	// (0x00020add) navi_icon_pane_stacon_ParamLimits

0x61d1,	// (0x00020af1) navi_navi_pane_stacon_ParamLimits

0x61bd,	// (0x00020add) navi_text_pane_stacon_ParamLimits

0x76c6,	// (0x00021fe6) main_text_info_pane

0xc91b,	// (0x0002723b) listscroll_text_info_pane

0xc923,	// (0x00027243) list_text_info_pane_ParamLimits

0xc923,	// (0x00027243) list_text_info_pane

0xc932,	// (0x00027252) scroll_pane_cp24_ParamLimits

0xc932,	// (0x00027252) scroll_pane_cp24

0xc950,	// (0x00027270) list_text_info_pane_t1_ParamLimits

0xc950,	// (0x00027270) list_text_info_pane_t1

0x9033,	// (0x00023953) popup_fast_swap2_window_ParamLimits

0x9033,	// (0x00023953) popup_fast_swap2_window

0xc981,	// (0x000272a1) aid_size_cell_fast2

0x76c6,	// (0x00021fe6) bg_popup_window_pane_cp17

0x9f45,	// (0x00024865) heading_pane_cp2

0x7c8f,	// (0x000225af) listscroll_fast2_pane

0xc98b,	// (0x000272ab) grid_fast2_pane

0xc995,	// (0x000272b5) listscroll_fast2_pane_g1

0xc99d,	// (0x000272bd) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x0002a50e) listscroll_fast2_pane_g

0x81a0,	// (0x00022ac0) scroll_pane_cp26

0xc9a7,	// (0x000272c7) cell_fast2_pane_ParamLimits

0xc9a7,	// (0x000272c7) cell_fast2_pane

0xc9bc,	// (0x000272dc) cell_fast2_pane_g1

0xc9c5,	// (0x000272e5) cell_fast2_pane_g2

0xc9ce,	// (0x000272ee) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x0002a513) cell_fast2_pane_g

0x7d82,	// (0x000226a2) grid_highlight_pane_cp9

0x7d97,	// (0x000226b7) main_eswt_pane_ParamLimits

0x7d97,	// (0x000226b7) main_eswt_pane

0xc947,	// (0x00027267) list_single_text_info_pane

0xc9d6,	// (0x000272f6) eswt_ctrl_button_pane

0xc9d6,	// (0x000272f6) eswt_ctrl_canvas_pane

0xc9de,	// (0x000272fe) eswt_ctrl_combo_pane

0xc9d6,	// (0x000272f6) eswt_ctrl_default_pane

0xc9d6,	// (0x000272f6) eswt_ctrl_label_pane

0xc9e6,	// (0x00027306) eswt_ctrl_wait_pane

0xc9ee,	// (0x0002730e) eswt_shell_pane

0x76c6,	// (0x00021fe6) listscroll_eswt_app_pane

0xca0e,	// (0x0002732e) popup_eswt_tasktip_window_ParamLimits

0xca0e,	// (0x0002732e) popup_eswt_tasktip_window

0x9b83,	// (0x000244a3) bg_popup_window_pane_cp18

0xca1f,	// (0x0002733f) eswt_control_pane_g1_ParamLimits

0xca1f,	// (0x0002733f) eswt_control_pane_g1

0xca2c,	// (0x0002734c) eswt_control_pane_g2_ParamLimits

0xca2c,	// (0x0002734c) eswt_control_pane_g2

0xca39,	// (0x00027359) eswt_control_pane_g3_ParamLimits

0xca39,	// (0x00027359) eswt_control_pane_g3

0xca46,	// (0x00027366) eswt_control_pane_g4_ParamLimits

0xca46,	// (0x00027366) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x0002a51a) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x0002a51a) eswt_control_pane_g

0x8026,	// (0x00022946) bg_button_pane_ParamLimits

0x8026,	// (0x00022946) bg_button_pane

0x7d97,	// (0x000226b7) common_borders_pane_copy2_ParamLimits

0x7d97,	// (0x000226b7) common_borders_pane_copy2

0xca53,	// (0x00027373) control_button_pane_g1_ParamLimits

0xca53,	// (0x00027373) control_button_pane_g1

0xca5f,	// (0x0002737f) control_button_pane_g2_ParamLimits

0xca5f,	// (0x0002737f) control_button_pane_g2

0xca6b,	// (0x0002738b) control_button_pane_g3_ParamLimits

0xca6b,	// (0x0002738b) control_button_pane_g3

0x0002,

0xfc03,	// (0x0002a523) control_button_pane_g_ParamLimits

0xfc03,	// (0x0002a523) control_button_pane_g

0xca7f,	// (0x0002739f) control_button_pane_t1

0xca8d,	// (0x000273ad) control_button_pane_t2

0x0001,

0xfc0a,	// (0x0002a52a) control_button_pane_t

0x9a93,	// (0x000243b3) bg_button_pane_g1

0x9a9b,	// (0x000243bb) bg_button_pane_g2

0x9aa3,	// (0x000243c3) bg_button_pane_g3

0x9aab,	// (0x000243cb) bg_button_pane_g4

0x9ab3,	// (0x000243d3) bg_button_pane_g5

0x9abb,	// (0x000243db) bg_button_pane_g6

0x9ac3,	// (0x000243e3) bg_button_pane_g7

0x9acb,	// (0x000243eb) bg_button_pane_g8

0x9ad3,	// (0x000243f3) bg_button_pane_g9

0x0008,

0xf877,	// (0x0002a197) bg_button_pane_g

0xc085,	// (0x000269a5) common_borders_pane_ParamLimits

0xc085,	// (0x000269a5) common_borders_pane

0xca1f,	// (0x0002733f) eswt_control_pane_g1_copy1_ParamLimits

0xca1f,	// (0x0002733f) eswt_control_pane_g1_copy1

0xca2c,	// (0x0002734c) eswt_control_pane_g2_copy1_ParamLimits

0xca2c,	// (0x0002734c) eswt_control_pane_g2_copy1

0xca39,	// (0x00027359) eswt_control_pane_g3_copy1_ParamLimits

0xca39,	// (0x00027359) eswt_control_pane_g3_copy1

0xca46,	// (0x00027366) eswt_control_pane_g4_copy1_ParamLimits

0xca46,	// (0x00027366) eswt_control_pane_g4_copy1

0xc0c0,	// (0x000269e0) bg_eswt_ctrl_canvas_pane_g1

0xc085,	// (0x000269a5) common_borders_pane_cp2_ParamLimits

0xc085,	// (0x000269a5) common_borders_pane_cp2

0xc085,	// (0x000269a5) common_borders_pane_cp3_ParamLimits

0xc085,	// (0x000269a5) common_borders_pane_cp3

0xca9b,	// (0x000273bb) separator_horizontal_pane

0xcaa3,	// (0x000273c3) separator_vertical_pane

0xca1f,	// (0x0002733f) eswt_control_pane_g1_copy2_ParamLimits

0xca1f,	// (0x0002733f) eswt_control_pane_g1_copy2

0xca2c,	// (0x0002734c) eswt_control_pane_g2_copy2_ParamLimits

0xca2c,	// (0x0002734c) eswt_control_pane_g2_copy2

0xca39,	// (0x00027359) eswt_control_pane_g3_copy2_ParamLimits

0xca39,	// (0x00027359) eswt_control_pane_g3_copy2

0xca46,	// (0x00027366) eswt_control_pane_g4_copy2_ParamLimits

0xca46,	// (0x00027366) eswt_control_pane_g4_copy2

0x76c6,	// (0x00021fe6) common_borders_pane_cp4

0xcaac,	// (0x000273cc) separator_horizontal_pane_g1

0xcab5,	// (0x000273d5) separator_horizontal_pane_g2

0xcabe,	// (0x000273de) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x0002a52f) separator_horizontal_pane_g

0xca1f,	// (0x0002733f) eswt_control_pane_g1_copy3_ParamLimits

0xca1f,	// (0x0002733f) eswt_control_pane_g1_copy3

0xca2c,	// (0x0002734c) eswt_control_pane_g2_copy3_ParamLimits

0xca2c,	// (0x0002734c) eswt_control_pane_g2_copy3

0xca39,	// (0x00027359) eswt_control_pane_g3_copy3_ParamLimits

0xca39,	// (0x00027359) eswt_control_pane_g3_copy3

0xca46,	// (0x00027366) eswt_control_pane_g4_copy3_ParamLimits

0xca46,	// (0x00027366) eswt_control_pane_g4_copy3

0x76c6,	// (0x00021fe6) common_borders_pane_cp5

0xcac7,	// (0x000273e7) separator_vertical_pane_g1

0xcad0,	// (0x000273f0) separator_vertical_pane_g2

0xcad9,	// (0x000273f9) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x0002a536) separator_vertical_pane_g

0xca1f,	// (0x0002733f) eswt_control_pane_g1_copy4_ParamLimits

0xca1f,	// (0x0002733f) eswt_control_pane_g1_copy4

0xca2c,	// (0x0002734c) eswt_control_pane_g2_copy4_ParamLimits

0xca2c,	// (0x0002734c) eswt_control_pane_g2_copy4

0xca39,	// (0x00027359) eswt_control_pane_g3_copy4_ParamLimits

0xca39,	// (0x00027359) eswt_control_pane_g3_copy4

0xca46,	// (0x00027366) eswt_control_pane_g4_copy4_ParamLimits

0xca46,	// (0x00027366) eswt_control_pane_g4_copy4

0xcae2,	// (0x00027402) eswt_ctrl_combo_button_pane

0xcaea,	// (0x0002740a) eswt_ctrl_input_pane

0xcaf2,	// (0x00027412) popup_choice_list_window_cp70

0xcafa,	// (0x0002741a) eswt_ctrl_input_pane_t1

0x76c6,	// (0x00021fe6) input_focus_pane_cp70

0xc085,	// (0x000269a5) bg_button_pane_cp70_ParamLimits

0xc085,	// (0x000269a5) bg_button_pane_cp70

0xcb08,	// (0x00027428) eswt_ctrl_combo_button_pane_g1

0xcb10,	// (0x00027430) wait_bar_pane_cp70

0x9b83,	// (0x000244a3) bg_popup_window_pane_cp70_ParamLimits

0x9b83,	// (0x000244a3) bg_popup_window_pane_cp70

0xcb18,	// (0x00027438) popup_eswt_tasktip_window_t1

0xcb2e,	// (0x0002744e) wait_bar_pane_cp71_ParamLimits

0xcb2e,	// (0x0002744e) wait_bar_pane_cp71

0xcb3a,	// (0x0002745a) grid_eswt_app_pane

0x84c7,	// (0x00022de7) scroll_pane_cp70

0xcb43,	// (0x00027463) cell_eswt_app_pane_ParamLimits

0xcb43,	// (0x00027463) cell_eswt_app_pane

0xcb73,	// (0x00027493) cell_eswt_app_pane_g1_ParamLimits

0xcb73,	// (0x00027493) cell_eswt_app_pane_g1

0xcba2,	// (0x000274c2) cell_eswt_app_pane_g2_ParamLimits

0xcba2,	// (0x000274c2) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x0002a53d) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x0002a53d) cell_eswt_app_pane_g

0xcbcb,	// (0x000274eb) cell_eswt_app_pane_t1_ParamLimits

0xcbcb,	// (0x000274eb) cell_eswt_app_pane_t1

0xcbfd,	// (0x0002751d) grid_highlight_pane_cp70_ParamLimits

0xcbfd,	// (0x0002751d) grid_highlight_pane_cp70

0x8b60,	// (0x00023480) set_content_pane_g1

0x8f37,	// (0x00023857) status_small_volume_pane

0x6dc1,	// (0x000216e1) status_small_volume_pane_g1

0x6dc9,	// (0x000216e9) volume_small2_pane

0x6dd2,	// (0x000216f2) volume_small2_pane_g1

0x6ddb,	// (0x000216fb) volume_small2_pane_g2

0x6de4,	// (0x00021704) volume_small2_pane_g3

0x6ded,	// (0x0002170d) volume_small2_pane_g4

0x6df6,	// (0x00021716) volume_small2_pane_g5

0x6dff,	// (0x0002171f) volume_small2_pane_g6

0x6e08,	// (0x00021728) volume_small2_pane_g7

0x6e11,	// (0x00021731) volume_small2_pane_g8

0x6e1a,	// (0x0002173a) volume_small2_pane_g9

0x6e23,	// (0x00021743) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x0002a542) volume_small2_pane_g

0xc49a,	// (0x00026dba) fep_vkb_top_text_pane_g1_ParamLimits

0xc4b5,	// (0x00026dd5) fep_vkb_top_text_pane_t1_ParamLimits

0xc751,	// (0x00027071) popup_preview_fixed_window_g3_ParamLimits

0xc751,	// (0x00027071) popup_preview_fixed_window_g3

0x94e0,	// (0x00023e00) popup_toolbar_trans_pane

0xaed1,	// (0x000257f1) aid_height_set_list_ParamLimits

0xaee2,	// (0x00025802) aid_size_parent_ParamLimits

0x8ff1,	// (0x00023911) list_highlight_pane_cp2_ParamLimits

0x8b60,	// (0x00023480) set_content_pane_g1_ParamLimits

0x55ed,	// (0x0001ff0d) list_single_image_pane_ParamLimits

0x55ed,	// (0x0001ff0d) list_single_image_pane

0xcc09,	// (0x00027529) aid_size_cell_image_ParamLimits

0xcc09,	// (0x00027529) aid_size_cell_image

0xcc16,	// (0x00027536) grid_single_image_pane_ParamLimits

0xcc16,	// (0x00027536) grid_single_image_pane

0x8767,	// (0x00023087) list_single_image_pane_g1_ParamLimits

0x8767,	// (0x00023087) list_single_image_pane_g1

0xcc24,	// (0x00027544) list_single_image_pane_g2_ParamLimits

0xcc24,	// (0x00027544) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x0002a557) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x0002a557) list_single_image_pane_g

0x8773,	// (0x00023093) list_single_image_pane_t1_ParamLimits

0x8773,	// (0x00023093) list_single_image_pane_t1

0xcc38,	// (0x00027558) cell_image_list_pane_ParamLimits

0xcc38,	// (0x00027558) cell_image_list_pane

0xcc4b,	// (0x0002756b) cell_image_list_pane_g1

0xcc54,	// (0x00027574) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x0002a55c) cell_image_list_pane_g

0xcc5d,	// (0x0002757d) aid_size_cell_tb_trans_pane

0x8026,	// (0x00022946) bg_tb_trans_pane

0xcc6f,	// (0x0002758f) grid_tb_trans_pane

0x9a93,	// (0x000243b3) bg_tb_trans_pane_g1

0x9a9b,	// (0x000243bb) bg_tb_trans_pane_g2

0x9aa3,	// (0x000243c3) bg_tb_trans_pane_g3

0x9aab,	// (0x000243cb) bg_tb_trans_pane_g4

0x9ab3,	// (0x000243d3) bg_tb_trans_pane_g5

0x9acb,	// (0x000243eb) bg_tb_trans_pane_g6

0x9ad3,	// (0x000243f3) bg_tb_trans_pane_g7

0x9abb,	// (0x000243db) bg_tb_trans_pane_g8

0x9ac3,	// (0x000243e3) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x0002a561) bg_tb_trans_pane_g

0xcc83,	// (0x000275a3) cell_toolbar_trans_pane_ParamLimits

0xcc83,	// (0x000275a3) cell_toolbar_trans_pane

0xc0c0,	// (0x000269e0) cell_toolbar_trans_pane_g1

0xbc89,	// (0x000265a9) list_form2_midp_pane_t1

0xbc97,	// (0x000265b7) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x0002a40a) list_form2_midp_pane_t

0xbca5,	// (0x000265c5) scroll_pane_cp51_ParamLimits

0xbe61,	// (0x00026781) form2_midp_wait_pane_g1

0xbe6a,	// (0x0002678a) form2_midp_wait_pane_g2

0xbe73,	// (0x00026793) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x0002a41f) form2_midp_wait_pane_g

0x77ba,	// (0x000220da) list_highlight_pane_cp21_ParamLimits

0xbeca,	// (0x000267ea) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbed9,	// (0x000267f9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x558e,	// (0x0001feae) list_single_2graphic_im_pane_ParamLimits

0x558e,	// (0x0001feae) list_single_2graphic_im_pane

0xcca9,	// (0x000275c9) list_single_2graphic_im_pane_g1_ParamLimits

0xcca9,	// (0x000275c9) list_single_2graphic_im_pane_g1

0xccba,	// (0x000275da) list_single_2graphic_im_pane_g2_ParamLimits

0xccba,	// (0x000275da) list_single_2graphic_im_pane_g2

0xccc6,	// (0x000275e6) list_single_2graphic_im_pane_g3_ParamLimits

0xccc6,	// (0x000275e6) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x0002a574) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x0002a574) list_single_2graphic_im_pane_g

0xcce6,	// (0x00027606) list_single_2graphic_im_pane_t1_ParamLimits

0xcce6,	// (0x00027606) list_single_2graphic_im_pane_t1

0xc75d,	// (0x0002707d) list_single_graphic_2heading_pane_fp_ParamLimits

0xc75d,	// (0x0002707d) list_single_graphic_2heading_pane_fp

0x58ca,	// (0x000201ea) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x58ca,	// (0x000201ea) list_single_graphic_2heading_pane_fp_g1

0xc772,	// (0x00027092) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc772,	// (0x00027092) list_single_graphic_2heading_pane_fp_g2

0x5893,	// (0x000201b3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5893,	// (0x000201b3) list_single_graphic_2heading_pane_fp_g3

0x589f,	// (0x000201bf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x589f,	// (0x000201bf) list_single_graphic_2heading_pane_fp_g4

0xc77e,	// (0x0002709e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc77e,	// (0x0002709e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0002a4a2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0002a4a2) list_single_graphic_2heading_pane_fp_g

0x5a97,	// (0x000203b7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5a97,	// (0x000203b7) list_single_graphic_2heading_pane_fp_t1

0x5902,	// (0x00020222) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5902,	// (0x00020222) list_single_graphic_2heading_pane_fp_t2

0x5aad,	// (0x000203cd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5aad,	// (0x000203cd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x0002a57d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x0002a57d) list_single_graphic_2heading_pane_fp_t

0xc160,	// (0x00026a80) fep_hwr_write_pane_g5_ParamLimits

0xc160,	// (0x00026a80) fep_hwr_write_pane_g5

0xc16c,	// (0x00026a8c) fep_hwr_write_pane_g6_ParamLimits

0xc16c,	// (0x00026a8c) fep_hwr_write_pane_g6

0xc9ee,	// (0x0002730e) eswt_shell_pane_ParamLimits

0x9b83,	// (0x000244a3) bg_popup_window_pane_cp18_ParamLimits

0xae2a,	// (0x0002574a) heading_pane_cp70

0xcb18,	// (0x00027438) popup_eswt_tasktip_window_t1_ParamLimits

0x95ff,	// (0x00023f1f) aid_touch_tab_arrow_left

0x960b,	// (0x00023f2b) aid_touch_tab_arrow_right

0x7702,	// (0x00022022) title_pane_g3_ParamLimits

0x7702,	// (0x00022022) title_pane_g3

0x7fe5,	// (0x00022905) set_value_pane_g1

0x94e0,	// (0x00023e00) popup_toolbar_trans_pane_ParamLimits

0xcc5d,	// (0x0002757d) aid_size_cell_tb_trans_pane_ParamLimits

0x8026,	// (0x00022946) bg_tb_trans_pane_ParamLimits

0xcc6f,	// (0x0002758f) grid_tb_trans_pane_ParamLimits

0x7a43,	// (0x00022363) cont_note_pane_ParamLimits

0x7a43,	// (0x00022363) cont_note_pane

0x7d97,	// (0x000226b7) cont_snote2_single_text_pane_ParamLimits

0x7d97,	// (0x000226b7) cont_snote2_single_text_pane

0x7d97,	// (0x000226b7) cont_snote2_single_graphic_pane_ParamLimits

0x7d97,	// (0x000226b7) cont_snote2_single_graphic_pane

0xa160,	// (0x00024a80) cont_note_wait_pane_ParamLimits

0xa160,	// (0x00024a80) cont_note_wait_pane

0xa160,	// (0x00024a80) cont_note_image_pane_ParamLimits

0xa160,	// (0x00024a80) cont_note_image_pane

0xcd17,	// (0x00027637) popup_note2_window_g1_ParamLimits

0xcd17,	// (0x00027637) popup_note2_window_g1

0xcd48,	// (0x00027668) popup_note2_window_t1_ParamLimits

0xcd48,	// (0x00027668) popup_note2_window_t1

0xcd8d,	// (0x000276ad) popup_note2_window_t2_ParamLimits

0xcd8d,	// (0x000276ad) popup_note2_window_t2

0xcdd2,	// (0x000276f2) popup_note2_window_t3_ParamLimits

0xcdd2,	// (0x000276f2) popup_note2_window_t3

0xce17,	// (0x00027737) popup_note2_window_t4_ParamLimits

0xce17,	// (0x00027737) popup_note2_window_t4

0x7ac7,	// (0x000223e7) popup_note2_window_t5_ParamLimits

0x7ac7,	// (0x000223e7) popup_note2_window_t5

0x0004,

0xfc69,	// (0x0002a589) popup_note2_window_t_ParamLimits

0xfc69,	// (0x0002a589) popup_note2_window_t

0xce46,	// (0x00027766) popup_note2_image_window_g1_ParamLimits

0xce46,	// (0x00027766) popup_note2_image_window_g1

0xce52,	// (0x00027772) popup_note2_image_window_g2_ParamLimits

0xce52,	// (0x00027772) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x0002a594) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x0002a594) popup_note2_image_window_g

0xce64,	// (0x00027784) popup_note2_image_window_t1_ParamLimits

0xce64,	// (0x00027784) popup_note2_image_window_t1

0xce7c,	// (0x0002779c) popup_note2_image_window_t2_ParamLimits

0xce7c,	// (0x0002779c) popup_note2_image_window_t2

0xce94,	// (0x000277b4) popup_note2_image_window_t3_ParamLimits

0xce94,	// (0x000277b4) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x0002a599) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x0002a599) popup_note2_image_window_t

0xa16e,	// (0x00024a8e) popup_note2_wait_window_g1_ParamLimits

0xa16e,	// (0x00024a8e) popup_note2_wait_window_g1

0xceb0,	// (0x000277d0) popup_note2_wait_window_g2_ParamLimits

0xceb0,	// (0x000277d0) popup_note2_wait_window_g2

0xa186,	// (0x00024aa6) popup_note2_wait_window_g3_ParamLimits

0xa186,	// (0x00024aa6) popup_note2_wait_window_g3

0x0002,

0xfc80,	// (0x0002a5a0) popup_note2_wait_window_g_ParamLimits

0xfc80,	// (0x0002a5a0) popup_note2_wait_window_g

0xcebc,	// (0x000277dc) popup_note2_wait_window_t1_ParamLimits

0xcebc,	// (0x000277dc) popup_note2_wait_window_t1

0xceda,	// (0x000277fa) popup_note2_wait_window_t2_ParamLimits

0xceda,	// (0x000277fa) popup_note2_wait_window_t2

0xcef8,	// (0x00027818) popup_note2_wait_window_t3_ParamLimits

0xcef8,	// (0x00027818) popup_note2_wait_window_t3

0xcf0a,	// (0x0002782a) popup_note2_wait_window_t4_ParamLimits

0xcf0a,	// (0x0002782a) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x0002a5a7) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x0002a5a7) popup_note2_wait_window_t

0xcf1c,	// (0x0002783c) wait_bar2_pane_ParamLimits

0xcf1c,	// (0x0002783c) wait_bar2_pane

0xcf34,	// (0x00027854) popup_snote2_single_text_window_g1_ParamLimits

0xcf34,	// (0x00027854) popup_snote2_single_text_window_g1

0xcf5c,	// (0x0002787c) popup_snote2_single_text_window_t1_ParamLimits

0xcf5c,	// (0x0002787c) popup_snote2_single_text_window_t1

0xcfa8,	// (0x000278c8) popup_snote2_single_text_window_t2_ParamLimits

0xcfa8,	// (0x000278c8) popup_snote2_single_text_window_t2

0xcff4,	// (0x00027914) popup_snote2_single_text_window_t3_ParamLimits

0xcff4,	// (0x00027914) popup_snote2_single_text_window_t3

0xd035,	// (0x00027955) popup_snote2_single_text_window_t4_ParamLimits

0xd035,	// (0x00027955) popup_snote2_single_text_window_t4

0xd06b,	// (0x0002798b) popup_snote2_single_text_window_t5_ParamLimits

0xd06b,	// (0x0002798b) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x0002a5b0) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x0002a5b0) popup_snote2_single_text_window_t

0xd096,	// (0x000279b6) popup_snote2_single_graphic_window_g1_ParamLimits

0xd096,	// (0x000279b6) popup_snote2_single_graphic_window_g1

0xd0be,	// (0x000279de) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0be,	// (0x000279de) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x0002a5bb) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x0002a5bb) popup_snote2_single_graphic_window_g

0xd0e6,	// (0x00027a06) popup_snote2_single_graphic_window_t1_ParamLimits

0xd0e6,	// (0x00027a06) popup_snote2_single_graphic_window_t1

0xd132,	// (0x00027a52) popup_snote2_single_graphic_window_t2_ParamLimits

0xd132,	// (0x00027a52) popup_snote2_single_graphic_window_t2

0xcff4,	// (0x00027914) popup_snote2_single_graphic_window_t3_ParamLimits

0xcff4,	// (0x00027914) popup_snote2_single_graphic_window_t3

0xd035,	// (0x00027955) popup_snote2_single_graphic_window_t4_ParamLimits

0xd035,	// (0x00027955) popup_snote2_single_graphic_window_t4

0xd06b,	// (0x0002798b) popup_snote2_single_graphic_window_t5_ParamLimits

0xd06b,	// (0x0002798b) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x0002a5c0) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x0002a5c0) popup_snote2_single_graphic_window_t

0xbb62,	// (0x00026482) clock_nsta_pane_cp2_t1

0xbb62,	// (0x00026482) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x0002a3e0) clock_nsta_pane_cp2_t

0x51c7,	// (0x0001fae7) form_field_data_wide_pane_g1_ParamLimits

0x8040,	// (0x00022960) form_field_data_wide_pane_g2_ParamLimits

0x8040,	// (0x00022960) form_field_data_wide_pane_g2

0x804c,	// (0x0002296c) form_field_data_wide_pane_g3_ParamLimits

0x804c,	// (0x0002296c) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x00029fb7) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x00029fb7) form_field_data_wide_pane_g

0xba3b,	// (0x0002635b) grid_touch_3_pane_ParamLimits

0xba3b,	// (0x0002635b) grid_touch_3_pane

0xd17e,	// (0x00027a9e) cell_touch_3_pane_ParamLimits

0xd17e,	// (0x00027a9e) cell_touch_3_pane

0xc0c0,	// (0x000269e0) cell_touch_3_pane_g1

0xc0c0,	// (0x000269e0) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x0002a465) cell_touch_3_pane_g

0x7af9,	// (0x00022419) cont_query_data_pane

0x7b01,	// (0x00022421) cont_query_data_pane_cp1

0xd1ac,	// (0x00027acc) button_value_adjust_pane_cp7

0xd1b4,	// (0x00027ad4) query_popup_pane_cp3

0x8751,	// (0x00023071) bg_popup_sub_pane_cp22_ParamLimits

0x62d2,	// (0x00020bf2) navi_navi_volume_pane_cp2

0x62ed,	// (0x00020c0d) popup_side_volume_key_window_g2

0x62fc,	// (0x00020c1c) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x0002a049) popup_side_volume_key_window_g

0x6319,	// (0x00020c39) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x0002a050) popup_side_volume_key_window_t

0x8a2a,	// (0x0002334a) popup_side_volume_key_window_ParamLimits

0x4e02,	// (0x0001f722) list_double_graphic_pane_g4_ParamLimits

0x4e02,	// (0x0001f722) list_double_graphic_pane_g4

0x55cd,	// (0x0001feed) list_single_2heading_msg_pane_ParamLimits

0x55cd,	// (0x0001feed) list_single_2heading_msg_pane

0x5acd,	// (0x000203ed) list_single_2heading_msg_pane_g1_ParamLimits

0x5acd,	// (0x000203ed) list_single_2heading_msg_pane_g1

0x4c31,	// (0x0001f551) list_single_2heading_msg_pane_g2_ParamLimits

0x4c31,	// (0x0001f551) list_single_2heading_msg_pane_g2

0x5ad9,	// (0x000203f9) list_single_2heading_msg_pane_g3_ParamLimits

0x5ad9,	// (0x000203f9) list_single_2heading_msg_pane_g3

0x5ae5,	// (0x00020405) list_single_2heading_msg_pane_g4_ParamLimits

0x5ae5,	// (0x00020405) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x0002a5cb) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x0002a5cb) list_single_2heading_msg_pane_g

0x5afd,	// (0x0002041d) list_single_2heading_msg_pane_t1_ParamLimits

0x5afd,	// (0x0002041d) list_single_2heading_msg_pane_t1

0x5b25,	// (0x00020445) list_single_2heading_msg_pane_t2_ParamLimits

0x5b25,	// (0x00020445) list_single_2heading_msg_pane_t2

0x5b59,	// (0x00020479) list_single_2heading_msg_pane_t3_ParamLimits

0x5b59,	// (0x00020479) list_single_2heading_msg_pane_t3

0x5b92,	// (0x000204b2) list_single_2heading_msg_pane_t4_ParamLimits

0x5b92,	// (0x000204b2) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x0002a5d4) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x0002a5d4) list_single_2heading_msg_pane_t

0x770e,	// (0x0002202e) title_pane_g4_ParamLimits

0x770e,	// (0x0002202e) title_pane_g4

0x60e0,	// (0x00020a00) title_pane_stacon_g3_ParamLimits

0x60e0,	// (0x00020a00) title_pane_stacon_g3

0xccda,	// (0x000275fa) list_single_2graphic_im_pane_g4_ParamLimits

0xccda,	// (0x000275fa) list_single_2graphic_im_pane_g4

0xabd1,	// (0x000254f1) popup_side_volume_key_window_cp

0xb3ce,	// (0x00025cee) main_idle_act2_pane_t1

0x668f,	// (0x00020faf) toolbar_button_pane_g10

0x7f8f,	// (0x000228af) popup_toolbar_window_cp1

0xbb53,	// (0x00026473) clock_nsta_pane_cp_t1

0xbb53,	// (0x00026473) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x0002a3db) clock_nsta_pane_cp_t

0x62d2,	// (0x00020bf2) navi_navi_volume_pane_cp2_ParamLimits

0x62e1,	// (0x00020c01) popup_side_volume_key_window_g1_ParamLimits

0x62ed,	// (0x00020c0d) popup_side_volume_key_window_g2_ParamLimits

0x62fc,	// (0x00020c1c) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x0002a049) popup_side_volume_key_window_g_ParamLimits

0x6ad1,	// (0x000213f1) fep_hwr_aid_pane

0x1412,	// (0x0001bd32) bg_fep_hwr_top_pane_g4_ParamLimits

0xc130,	// (0x00026a50) fep_hwr_top_pane_g1_ParamLimits

0xc142,	// (0x00026a62) fep_hwr_top_pane_g2_ParamLimits

0x6b8a,	// (0x000214aa) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x0002a430) fep_hwr_top_pane_g_ParamLimits

0x6b9f,	// (0x000214bf) fep_hwr_top_text_pane_ParamLimits

0xa994,	// (0x000252b4) aid_touch_tab_arrow_arrow_2

0xa99d,	// (0x000252bd) aid_touch_tab_arrow_left_2

0x6ae5,	// (0x00021405) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6b1c,	// (0x0002143c) fep_hwr_prediction_pane

0xc2a2,	// (0x00026bc2) fep_vkb_prediction_pane

0xc3a6,	// (0x00026cc6) fep_vkb_side_pane_g3_ParamLimits

0xc3a6,	// (0x00026cc6) fep_vkb_side_pane_g3

0xc352,	// (0x00026c72) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc7d2,	// (0x000270f2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc7df,	// (0x000270ff) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbba,	// (0x0002a4da) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd1d9,	// (0x00027af9) fep_hwr_prediction_pane_g1

0x6e2c,	// (0x0002174c) fep_hwr_prediction_pane_g2

0x6e34,	// (0x00021754) fep_hwr_prediction_pane_g3

0x6e3c,	// (0x0002175c) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x0002a5dd) fep_hwr_prediction_pane_g

0xd1d9,	// (0x00027af9) fep_vkb_prediction_pane_g1

0xd1e3,	// (0x00027b03) fep_vkb_prediction_pane_g2

0xd1eb,	// (0x00027b0b) fep_vkb_prediction_pane_g3

0xd1f3,	// (0x00027b13) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x0002a5e6) fep_vkb_prediction_pane_g

0x695f,	// (0x0002127f) slider_set_pane_g3

0x6973,	// (0x00021293) slider_set_pane_g4

0x698b,	// (0x000212ab) slider_set_pane_g5

0x695f,	// (0x0002127f) slider_set_pane_g6

0x69a1,	// (0x000212c1) slider_set_pane_g7

0xb047,	// (0x00025967) slider_form_pane_g3

0xb050,	// (0x00025970) slider_form_pane_g4

0xb058,	// (0x00025978) slider_form_pane_g5

0xb047,	// (0x00025967) slider_form_pane_g6

0xb060,	// (0x00025980) slider_form_pane_g7

0xb68b,	// (0x00025fab) slider_set_pane_vc_g3

0xb694,	// (0x00025fb4) slider_set_pane_vc_g4

0xb69d,	// (0x00025fbd) slider_set_pane_vc_g5

0xb68b,	// (0x00025fab) slider_set_pane_vc_g6

0xb6a6,	// (0x00025fc6) slider_set_pane_vc_g7

0xb68b,	// (0x00025fab) slider_form_pane_vc_g1

0xb694,	// (0x00025fb4) slider_form_pane_vc_g2

0xb69d,	// (0x00025fbd) slider_form_pane_vc_g3

0xb68b,	// (0x00025fab) slider_form_pane_vc_g4

0xb859,	// (0x00026179) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0002a3b4) slider_form_pane_vc_g

0x76c6,	// (0x00021fe6) main_idle_act3_pane

0xd1fb,	// (0x00027b1b) ai3_links_pane

0xd204,	// (0x00027b24) popup_ai3_data_window_ParamLimits

0xd204,	// (0x00027b24) popup_ai3_data_window

0x76c6,	// (0x00021fe6) grid_ai3_links_pane

0xd21e,	// (0x00027b3e) cell_ai3_links_pane_ParamLimits

0xd21e,	// (0x00027b3e) cell_ai3_links_pane

0xd236,	// (0x00027b56) bg_popup_sub_pane_cp11

0xd243,	// (0x00027b63) cell_ai3_links_pane_g1

0x76c6,	// (0x00021fe6) bg_popup_sub_pane_cp12

0xd268,	// (0x00027b88) heading_ai3_data_pane

0xd270,	// (0x00027b90) list_ai3_gene_pane

0xd27c,	// (0x00027b9c) popup_ai3_data_window_g1

0xd284,	// (0x00027ba4) heading_ai3_data_pane_g1

0xd28c,	// (0x00027bac) heading_ai3_data_pane_t1

0xd29a,	// (0x00027bba) list_double_ai3_gene_pane_ParamLimits

0xd29a,	// (0x00027bba) list_double_ai3_gene_pane

0xd2a7,	// (0x00027bc7) list_single_ai3_gene_pane_ParamLimits

0xd2a7,	// (0x00027bc7) list_single_ai3_gene_pane

0xc085,	// (0x000269a5) list_highlight_pane_cp7_ParamLimits

0xc085,	// (0x000269a5) list_highlight_pane_cp7

0xd2b4,	// (0x00027bd4) list_single_a13_gene_pane_t1_ParamLimits

0xd2b4,	// (0x00027bd4) list_single_a13_gene_pane_t1

0xd2cb,	// (0x00027beb) list_single_ai3_gene_pane_g1

0xd2d4,	// (0x00027bf4) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x0002a5ef) list_single_ai3_gene_pane_g

0xd2dc,	// (0x00027bfc) list_double_ai3_gene_pane_g1_ParamLimits

0xd2dc,	// (0x00027bfc) list_double_ai3_gene_pane_g1

0xd2e8,	// (0x00027c08) list_double_ai3_gene_pane_t1_ParamLimits

0xd2e8,	// (0x00027c08) list_double_ai3_gene_pane_t1

0xd304,	// (0x00027c24) list_double_ai3_gene_pane_t2_ParamLimits

0xd304,	// (0x00027c24) list_double_ai3_gene_pane_t2

0xd31a,	// (0x00027c3a) list_double_ai3_gene_pane_t3_ParamLimits

0xd31a,	// (0x00027c3a) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x0002a5f4) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x0002a5f4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5ac3,	// (0x000203e3) aid_size_min_col_2

0xd1c5,	// (0x00027ae5) aid_size_min_msg_ParamLimits

0xd1c5,	// (0x00027ae5) aid_size_min_msg

0xc4a6,	// (0x00026dc6) fep_vkb_top_text_pane_g2_ParamLimits

0xc4a6,	// (0x00026dc6) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x0002a460) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x0002a460) fep_vkb_top_text_pane_g

0x76c6,	// (0x00021fe6) main_hc_apps_shell_pane

0xd337,	// (0x00027c57) grid_hc_apps_pane_ParamLimits

0xd337,	// (0x00027c57) grid_hc_apps_pane

0xd346,	// (0x00027c66) list_hc_apps_pane

0xd34e,	// (0x00027c6e) scroll_pane_cp37_ParamLimits

0xd34e,	// (0x00027c6e) scroll_pane_cp37

0xd35a,	// (0x00027c7a) cell_hc_apps_pane_ParamLimits

0xd35a,	// (0x00027c7a) cell_hc_apps_pane

0xd408,	// (0x00027d28) cell_hc_apps_pane_g1_ParamLimits

0xd408,	// (0x00027d28) cell_hc_apps_pane_g1

0xd439,	// (0x00027d59) cell_hc_apps_pane_g2_ParamLimits

0xd439,	// (0x00027d59) cell_hc_apps_pane_g2

0xd455,	// (0x00027d75) cell_hc_apps_pane_g3_ParamLimits

0xd455,	// (0x00027d75) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x0002a5fb) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x0002a5fb) cell_hc_apps_pane_g

0xd477,	// (0x00027d97) cell_hc_apps_pane_t1_ParamLimits

0xd477,	// (0x00027d97) cell_hc_apps_pane_t1

0x7a43,	// (0x00022363) grid_highlight_pane_cp10_ParamLimits

0x7a43,	// (0x00022363) grid_highlight_pane_cp10

0xd4b7,	// (0x00027dd7) list_single_hc_apps_pane_ParamLimits

0xd4b7,	// (0x00027dd7) list_single_hc_apps_pane

0xd513,	// (0x00027e33) list_single_hc_apps_pane_g1

0x5bb7,	// (0x000204d7) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x0002a602) list_single_hc_apps_pane_g

0x5bd0,	// (0x000204f0) list_single_hc_apps_pane_g2_copy1

0x5bec,	// (0x0002050c) list_single_hc_apps_pane_t1

0x77ba,	// (0x000220da) bg_set_opt_pane_cp_ParamLimits

0x6007,	// (0x00020927) setting_slider_pane_t1_ParamLimits

0x6020,	// (0x00020940) setting_slider_pane_t2_ParamLimits

0x603a,	// (0x0002095a) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00029e9a) setting_slider_pane_t_ParamLimits

0x6052,	// (0x00020972) slider_set_pane_ParamLimits

0x6577,	// (0x00020e97) control_pane_g5_ParamLimits

0x6577,	// (0x00020e97) control_pane_g5

0xae96,	// (0x000257b6) slider_set_pane_g1_ParamLimits

0x6953,	// (0x00021273) slider_set_pane_g2_ParamLimits

0x695f,	// (0x0002127f) slider_set_pane_g3_ParamLimits

0x6973,	// (0x00021293) slider_set_pane_g4_ParamLimits

0x698b,	// (0x000212ab) slider_set_pane_g5_ParamLimits

0x695f,	// (0x0002127f) slider_set_pane_g6_ParamLimits

0x69a1,	// (0x000212c1) slider_set_pane_g7_ParamLimits

0xf975,	// (0x0002a295) slider_set_pane_g_ParamLimits

0x8b0b,	// (0x0002342b) navi_icon_text_pane_ParamLimits

0x95c0,	// (0x00023ee0) aid_fill_nsta_2_ParamLimits

0x95ff,	// (0x00023f1f) aid_touch_tab_arrow_left_ParamLimits

0x960b,	// (0x00023f2b) aid_touch_tab_arrow_right_ParamLimits

0x9677,	// (0x00023f97) clock_nsta_pane_ParamLimits

0xa970,	// (0x00025290) navi_icon_pane_g1_ParamLimits

0xa97f,	// (0x0002529f) navi_text_pane_t1_ParamLimits

0xbc5d,	// (0x0002657d) navi_icon_text_pane_g1_ParamLimits

0xbc6c,	// (0x0002658c) navi_icon_text_pane_t1_ParamLimits

0xd513,	// (0x00027e33) list_single_hc_apps_pane_g1_ParamLimits

0x5bb7,	// (0x000204d7) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x0002a602) list_single_hc_apps_pane_g_ParamLimits

0x5bd0,	// (0x000204f0) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5bec,	// (0x0002050c) list_single_hc_apps_pane_t1_ParamLimits

0x5f1b,	// (0x0002083b) popup_toolbar2_fixed_window_ParamLimits

0x5f1b,	// (0x0002083b) popup_toolbar2_fixed_window

0x94d6,	// (0x00023df6) popup_toolbar2_float_window

0x76c6,	// (0x00021fe6) bg_popup_sub_pane_cp27

0xd52c,	// (0x00027e4c) grid_toolbar2_float_pane

0x76c6,	// (0x00021fe6) bg_popup_sub_pane_cp26

0xd52c,	// (0x00027e4c) grid_toolbar2_fixed_pane

0xd534,	// (0x00027e54) cell_toolbar2_fixed_pane_ParamLimits

0xd534,	// (0x00027e54) cell_toolbar2_fixed_pane

0xd544,	// (0x00027e64) cell_toolbar2_fixed_pane_g1

0xd54d,	// (0x00027e6d) toolbar2_fixed_button_pane

0x9a93,	// (0x000243b3) toolbar2_fixed_button_pane_g1

0x9a9b,	// (0x000243bb) toolbar2_fixed_button_pane_g2

0x9aa3,	// (0x000243c3) toolbar2_fixed_button_pane_g3

0x9aab,	// (0x000243cb) toolbar2_fixed_button_pane_g4

0x9ab3,	// (0x000243d3) toolbar2_fixed_button_pane_g5

0x9abb,	// (0x000243db) toolbar2_fixed_button_pane_g6

0x9ac3,	// (0x000243e3) toolbar2_fixed_button_pane_g7

0x9acb,	// (0x000243eb) toolbar2_fixed_button_pane_g8

0x9ad3,	// (0x000243f3) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x0002a197) toolbar2_fixed_button_pane_g

0xd555,	// (0x00027e75) cell_toolbar2_float_pane_ParamLimits

0xd555,	// (0x00027e75) cell_toolbar2_float_pane

0xd566,	// (0x00027e86) cell_toolbar2_float_pane_g1

0xd54d,	// (0x00027e6d) toolbar2_fixed_button_pane_cp

0xc202,	// (0x00026b22) fep_vkb_accented_list_pane_ParamLimits

0xc202,	// (0x00026b22) fep_vkb_accented_list_pane

0x6ced,	// (0x0002160d) bg_popup_fep_shadow_pane_g9

0x8c8b,	// (0x000235ab) bg_popup_fep_shadow_pane_cp3

0x8187,	// (0x00022aa7) list_accented_list_pane

0xd56f,	// (0x00027e8f) list_single_accented_list_pane_ParamLimits

0xd56f,	// (0x00027e8f) list_single_accented_list_pane

0x8c8b,	// (0x000235ab) list_highlight_pane_cp10

0xd580,	// (0x00027ea0) list_single_accented_list_pane_t1

0x9426,	// (0x00023d46) popup_slider_window_ParamLimits

0x9426,	// (0x00023d46) popup_slider_window

0xd1bc,	// (0x00027adc) aid_indentation_list_msg

0xd63a,	// (0x00027f5a) bg_popup_window_pane_cp19

0xd6a4,	// (0x00027fc4) popup_slider_window_g1

0xd6c0,	// (0x00027fe0) popup_slider_window_g2

0xd6dc,	// (0x00027ffc) popup_slider_window_g3

0x0005,

0xfce7,	// (0x0002a607) popup_slider_window_g

0xd738,	// (0x00028058) popup_slider_window_t1

0xd7ac,	// (0x000280cc) small_volume_slider_vertical_pane

0xc0c0,	// (0x000269e0) small_volume_slider_vertical_pane_g1

0xc0c0,	// (0x000269e0) small_volume_slider_vertical_pane_g2

0xd7c8,	// (0x000280e8) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x0002a619) small_volume_slider_vertical_pane_g

0x5cdd,	// (0x000205fd) area_side_right_pane_ParamLimits

0x5cdd,	// (0x000205fd) area_side_right_pane

0x6e44,	// (0x00021764) aid_size_side_button_ParamLimits

0x6e44,	// (0x00021764) aid_size_side_button

0x6e58,	// (0x00021778) grid_sctrl_middle_pane_ParamLimits

0x6e58,	// (0x00021778) grid_sctrl_middle_pane

0x6e78,	// (0x00021798) sctrl_sk_bottom_pane

0x6e89,	// (0x000217a9) sctrl_sk_top_pane

0x6e9b,	// (0x000217bb) aid_touch_sctrl_top

0x7a43,	// (0x00022363) bg_sctrl_sk_pane_ParamLimits

0x7a43,	// (0x00022363) bg_sctrl_sk_pane

0x6ea8,	// (0x000217c8) sctrl_sk_top_pane_g1

0x6eb5,	// (0x000217d5) sctrl_sk_top_pane_t1

0x6e9b,	// (0x000217bb) aid_touch_sctrl_bottom

0x7a43,	// (0x00022363) bg_sctrl_sk_pane_cp_ParamLimits

0x7a43,	// (0x00022363) bg_sctrl_sk_pane_cp

0x6ed0,	// (0x000217f0) sctrl_sk_bottom_pane_g1

0x6eb5,	// (0x000217d5) sctrl_sk_bottom_pane_t1

0x6ed9,	// (0x000217f9) cell_sctrl_middle_pane_ParamLimits

0x6ed9,	// (0x000217f9) cell_sctrl_middle_pane

0x6ef4,	// (0x00021814) aid_touch_sctrl_middle_ParamLimits

0x6ef4,	// (0x00021814) aid_touch_sctrl_middle

0x8026,	// (0x00022946) bg_sctrl_middle_pane_ParamLimits

0x8026,	// (0x00022946) bg_sctrl_middle_pane

0xc352,	// (0x00026c72) cell_sctrl_middle_pane_g1_ParamLimits

0xc352,	// (0x00026c72) cell_sctrl_middle_pane_g1

0x6f06,	// (0x00021826) cell_sctrl_middle_pane_g2_ParamLimits

0x6f06,	// (0x00021826) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x0002a625) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x0002a625) cell_sctrl_middle_pane_g

0x9a93,	// (0x000243b3) bg_sctrl_middle_pane_g1

0x9a9b,	// (0x000243bb) bg_sctrl_middle_pane_g2

0x9aa3,	// (0x000243c3) bg_sctrl_middle_pane_g3

0x9aab,	// (0x000243cb) bg_sctrl_middle_pane_g4

0x9ab3,	// (0x000243d3) bg_sctrl_middle_pane_g5

0x9abb,	// (0x000243db) bg_sctrl_middle_pane_g6

0x9ac3,	// (0x000243e3) bg_sctrl_middle_pane_g7

0x9acb,	// (0x000243eb) bg_sctrl_middle_pane_g8

0x0007,

0xfd0a,	// (0x0002a62a) bg_sctrl_middle_pane_g

0x9ad3,	// (0x000243f3) bg_sctrl_middle_pane_g8_copy1

0x9a93,	// (0x000243b3) bg_sctrl_sk_pane_g1

0x9a9b,	// (0x000243bb) bg_sctrl_sk_pane_g2

0x9aa3,	// (0x000243c3) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x0002a197) bg_sctrl_sk_pane_g

0x7f55,	// (0x00022875) aid_size_touch_scroll_bar

0x9aab,	// (0x000243cb) bg_sctrl_sk_pane_g4

0x9ab3,	// (0x000243d3) bg_sctrl_sk_pane_g5

0x9abb,	// (0x000243db) bg_sctrl_sk_pane_g6

0x9ac3,	// (0x000243e3) bg_sctrl_sk_pane_g7

0x9acb,	// (0x000243eb) bg_sctrl_sk_pane_g8

0x9ad3,	// (0x000243f3) bg_sctrl_sk_pane_g9

0x9091,	// (0x000239b1) popup_fep_china_hwr2_fs_candidate_window

0x909b,	// (0x000239bb) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x909b,	// (0x000239bb) popup_fep_china_hwr2_fs_control_window

0xc352,	// (0x00026c72) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x0002a620) sctrl_sk_top_pane_g

0xd7d1,	// (0x000280f1) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7d1,	// (0x000280f1) aid_fep_china_hwr2_fs_cell

0xd7e3,	// (0x00028103) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7e3,	// (0x00028103) bg_popup_fep_shadow_pane_cp4

0xd7fa,	// (0x0002811a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7fa,	// (0x0002811a) bg_popup_fep_shadow_pane_cp5

0xd80c,	// (0x0002812c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd80c,	// (0x0002812c) popup_fep_china_hwr2_fs_control_bar_grid

0xd81c,	// (0x0002813c) popup_fep_china_hwr2_fs_control_funtion_grid

0xd824,	// (0x00028144) aid_fep_china_hwr2_fs_candi_cell

0x76c6,	// (0x00021fe6) bg_popup_fep_shadow_pane_cp6

0xd82e,	// (0x0002814e) popup_fep_china_hwr2_fs_candidate_grid

0xd838,	// (0x00028158) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd838,	// (0x00028158) cell_fep_china_hwr2_fs_funtion_grid

0xc0c0,	// (0x000269e0) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd850,	// (0x00028170) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd850,	// (0x00028170) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd85e,	// (0x0002817e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd85e,	// (0x0002817e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1b,	// (0x0002a63b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1b,	// (0x0002a63b) cell_fep_china_hwr2_fs_funtion_grid_g

0xd874,	// (0x00028194) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd874,	// (0x00028194) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd889,	// (0x000281a9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd889,	// (0x000281a9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd20,	// (0x0002a640) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd20,	// (0x0002a640) cell_fep_china_hwr2_fs_funtion_grid_t

0xd8a5,	// (0x000281c5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8ad,	// (0x000281cd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8b5,	// (0x000281d5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd25,	// (0x0002a645) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8bd,	// (0x000281dd) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8bd,	// (0x000281dd) cell_fep_china_hwr2_fs_candidate_grid

0xd8d6,	// (0x000281f6) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8de,	// (0x000281fe) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc0c0,	// (0x000269e0) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc0c0,	// (0x000269e0) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x0002a465) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8e6,	// (0x00028206) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9684,	// (0x00023fa4) clock_nsta_pane_cp_24_ParamLimits

0x9684,	// (0x00023fa4) clock_nsta_pane_cp_24

0x9702,	// (0x00024022) indicator_nsta_pane_cp_24_ParamLimits

0x9702,	// (0x00024022) indicator_nsta_pane_cp_24

0xa7ec,	// (0x0002510c) heading_pane_g1

0x0001,

0xf8dc,	// (0x0002a1fc) heading_pane_g

0xb217,	// (0x00025b37) grid_sct_catagory_button_pane

0xb247,	// (0x00025b67) scroll_pane_cp5_ParamLimits

0xbcb1,	// (0x000265d1) button_value_adjust_pane_cp5_ParamLimits

0xbcb1,	// (0x000265d1) button_value_adjust_pane_cp5

0xbd90,	// (0x000266b0) form2_midp_time_pane_ParamLimits

0xd8f4,	// (0x00028214) cell_sct_catagory_button_pane_ParamLimits

0xd8f4,	// (0x00028214) cell_sct_catagory_button_pane

0xc085,	// (0x000269a5) bg_button_pane_cp01_ParamLimits

0xc085,	// (0x000269a5) bg_button_pane_cp01

0xc0c0,	// (0x000269e0) cell_sct_catagory_button_pane_g1

0x9465,	// (0x00023d85) popup_tb_extension_window

0xd906,	// (0x00028226) aid_size_cell_ext_ParamLimits

0xd906,	// (0x00028226) aid_size_cell_ext

0x7a43,	// (0x00022363) bg_tb_trans_pane_cp1_ParamLimits

0x7a43,	// (0x00022363) bg_tb_trans_pane_cp1

0xd926,	// (0x00028246) grid_tb_ext_pane_ParamLimits

0xd926,	// (0x00028246) grid_tb_ext_pane

0xd954,	// (0x00028274) cell_tb_ext_pane_ParamLimits

0xd954,	// (0x00028274) cell_tb_ext_pane

0xd96b,	// (0x0002828b) cell_tb_ext_pane_g1_ParamLimits

0xd96b,	// (0x0002828b) cell_tb_ext_pane_g1

0xd988,	// (0x000282a8) cell_tb_ext_pane_t1

0x7a43,	// (0x00022363) list_highlight_pane_cp11_ParamLimits

0x7a43,	// (0x00022363) list_highlight_pane_cp11

0x5f3a,	// (0x0002085a) popup_uni_indicator_window_ParamLimits

0x5f3a,	// (0x0002085a) popup_uni_indicator_window

0x8026,	// (0x00022946) bg_popup_sub_pane_cp14

0xd9a3,	// (0x000282c3) list_uniindi_pane

0xd9af,	// (0x000282cf) uniindi_top_pane

0x7a43,	// (0x00022363) bg_uniindi_top_pane

0xd9ce,	// (0x000282ee) uniindi_top_pane_g1

0xd9e4,	// (0x00028304) uniindi_top_pane_g2

0x0003,

0xfd2c,	// (0x0002a64c) uniindi_top_pane_g

0xda0e,	// (0x0002832e) uniindi_top_pane_t1

0xda38,	// (0x00028358) list_single_uniindi_pane_ParamLimits

0xda38,	// (0x00028358) list_single_uniindi_pane

0xc0c0,	// (0x000269e0) bg_uniindi_top_pane_g1

0xda4b,	// (0x0002836b) list_single_uniindi_pane_g1

0xda5e,	// (0x0002837e) list_single_uniindi_pane_t1

0x76c6,	// (0x00021fe6) control_bg_pane

0xda83,	// (0x000283a3) bg_sctrl_sk_pane_cp1

0xda8c,	// (0x000283ac) bg_sctrl_sk_pane_cp2

0xda95,	// (0x000283b5) control_bg_pane_g1

0xda9e,	// (0x000283be) control_bg_pane_g2

0x0001,

0xfd35,	// (0x0002a655) control_bg_pane_g

0xbae5,	// (0x00026405) cell_indicator_nsta_pane_g1_ParamLimits

0xbaf3,	// (0x00026413) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x0002a3c9) cell_indicator_nsta_pane_g_ParamLimits

0x5880,	// (0x000201a0) form2_midp_time_pane_t1_ParamLimits

0x7d97,	// (0x000226b7) main_idle_act4_pane_ParamLimits

0x7d97,	// (0x000226b7) main_idle_act4_pane

0x9465,	// (0x00023d85) popup_tb_extension_window_ParamLimits

0xd944,	// (0x00028264) tb_ext_find_pane_ParamLimits

0xd944,	// (0x00028264) tb_ext_find_pane

0xdaa7,	// (0x000283c7) ai_gene_pane_1_cp1

0x8dd0,	// (0x000236f0) ai_gene_pane_2_cp1

0xdaaf,	// (0x000283cf) list_single_idle_plugin_calendar_pane

0xdab8,	// (0x000283d8) list_single_idle_plugin_notification_pane

0xdac1,	// (0x000283e1) list_single_idle_plugin_player_pane

0xdaca,	// (0x000283ea) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdaca,	// (0x000283ea) list_single_idle_plugin_shortcut_pane

0xdaec,	// (0x0002840c) main_idle_act4_pane_t1

0xdafe,	// (0x0002841e) main_idle_act4_pane_t2

0x0001,

0xfd3a,	// (0x0002a65a) main_idle_act4_pane_t

0xdb10,	// (0x00028430) middle_sk_idle_act4_pane_ParamLimits

0xdb10,	// (0x00028430) middle_sk_idle_act4_pane

0xdb26,	// (0x00028446) popup_clock_digital_analogue_window_cp2

0xdb40,	// (0x00028460) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb40,	// (0x00028460) shortcut_wheel_idle_act4_pane

0xc0c0,	// (0x000269e0) shortcut_wheel_idle_act4_pane_g1

0xc0c0,	// (0x000269e0) shortcut_wheel_idle_act4_pane_g2

0xc0c0,	// (0x000269e0) shortcut_wheel_idle_act4_pane_g3

0xc0c0,	// (0x000269e0) shortcut_wheel_idle_act4_pane_g4

0xc0c0,	// (0x000269e0) shortcut_wheel_idle_act4_pane_g5

0xdb54,	// (0x00028474) shortcut_wheel_idle_act4_pane_g6

0xdb5c,	// (0x0002847c) shortcut_wheel_idle_act4_pane_g7

0xdb64,	// (0x00028484) shortcut_wheel_idle_act4_pane_g8

0xdb6c,	// (0x0002848c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3f,	// (0x0002a65f) shortcut_wheel_idle_act4_pane_g

0xc352,	// (0x00026c72) middle_sk_idle_act4_pane_g1_ParamLimits

0xc352,	// (0x00026c72) middle_sk_idle_act4_pane_g1

0xdbd0,	// (0x000284f0) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbd0,	// (0x000284f0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x0002a682) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x0002a682) middle_sk_idle_act4_pane_g

0xdbdc,	// (0x000284fc) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbdc,	// (0x000284fc) middle_sk_idle_act4_pane_t1

0xdbf9,	// (0x00028519) grid_ai_shortcut_pane_ParamLimits

0xdbf9,	// (0x00028519) grid_ai_shortcut_pane

0xdc12,	// (0x00028532) list_highlight_pane_cp16_ParamLimits

0xdc12,	// (0x00028532) list_highlight_pane_cp16

0xdc1f,	// (0x0002853f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc1f,	// (0x0002853f) list_single_idle_plugin_shortcut_pane_g1

0xdc2b,	// (0x0002854b) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc2b,	// (0x0002854b) list_single_idle_plugin_shortcut_pane_g2

0xdc43,	// (0x00028563) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc43,	// (0x00028563) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd67,	// (0x0002a687) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd67,	// (0x0002a687) list_single_idle_plugin_shortcut_pane_g

0xdc56,	// (0x00028576) cell_ai_shortcut_pane_ParamLimits

0xdc56,	// (0x00028576) cell_ai_shortcut_pane

0xdc7a,	// (0x0002859a) cell_ai_shortcut_pane_g1_ParamLimits

0xdc7a,	// (0x0002859a) cell_ai_shortcut_pane_g1

0xdaa7,	// (0x000283c7) ai_gene_pane_1_cp2

0xdc9c,	// (0x000285bc) ai_gene_pane_2_cp2

0xdca4,	// (0x000285c4) list_highlight_pane_cp15

0xdcad,	// (0x000285cd) list_single_idle_plugin_calendar_pane_g1

0xdca4,	// (0x000285c4) list_highlight_pane_cp17

0xdcb5,	// (0x000285d5) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcbd,	// (0x000285dd) list_single_idle_plugin_player_pane_g1

0xb470,	// (0x00025d90) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6e,	// (0x0002a68e) list_single_idle_plugin_player_pane_g

0xdcc5,	// (0x000285e5) list_single_idle_plugin_player_pane_t1

0xdcd3,	// (0x000285f3) list_single_idle_plugin_player_pane_t2

0xdce1,	// (0x00028601) list_single_idle_plugin_player_pane_t3

0xdcef,	// (0x0002860f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd73,	// (0x0002a693) list_single_idle_plugin_player_pane_t

0xdcfd,	// (0x0002861d) wait_bar_pane_cp15

0xdd05,	// (0x00028625) grid_ai_notification_pane

0xb470,	// (0x00025d90) list_single_idle_plugin_notification_pane_g1

0xdd0e,	// (0x0002862e) cell_ai_notification_pane_ParamLimits

0xdd0e,	// (0x0002862e) cell_ai_notification_pane

0xdd1b,	// (0x0002863b) cell_ai_notification_pane_g1

0xdd23,	// (0x00028643) cell_ai_notification_pane_t1

0xdd31,	// (0x00028651) tb_ext_find_button_pane

0xdd39,	// (0x00028659) tb_ext_find_pane_g1

0xdd41,	// (0x00028661) tb_ext_find_pane_t1

0x868c,	// (0x00022fac) tb_ext_find_button_pane_g1

0xdd4f,	// (0x0002866f) tb_ext_find_button_pane_g2

0x0001,

0xfd7c,	// (0x0002a69c) tb_ext_find_button_pane_g

0xdaec,	// (0x0002840c) main_idle_act4_pane_t1_ParamLimits

0xdafe,	// (0x0002841e) main_idle_act4_pane_t2_ParamLimits

0xfd3a,	// (0x0002a65a) main_idle_act4_pane_t_ParamLimits

0xdb26,	// (0x00028446) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb34,	// (0x00028454) sat_plugin_idle_act4_pane_ParamLimits

0xdb34,	// (0x00028454) sat_plugin_idle_act4_pane

0xdd58,	// (0x00028678) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd58,	// (0x00028678) sat_plugin_idle_act4_pane_t1

0xdd6b,	// (0x0002868b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd6b,	// (0x0002868b) sat_plugin_idle_act4_pane_t2

0xdd7e,	// (0x0002869e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd7e,	// (0x0002869e) sat_plugin_idle_act4_pane_t3

0xdd91,	// (0x000286b1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd91,	// (0x000286b1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd81,	// (0x0002a6a1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd81,	// (0x0002a6a1) sat_plugin_idle_act4_pane_t

0x5e75,	// (0x00020795) popup_battery_window_ParamLimits

0x5e75,	// (0x00020795) popup_battery_window

0x7a43,	// (0x00022363) bg_popup_sub_pane_cp25_ParamLimits

0x7a43,	// (0x00022363) bg_popup_sub_pane_cp25

0xdda4,	// (0x000286c4) popup_battery_window_g1_ParamLimits

0xdda4,	// (0x000286c4) popup_battery_window_g1

0xddb0,	// (0x000286d0) popup_battery_window_t1_ParamLimits

0xddb0,	// (0x000286d0) popup_battery_window_t1

0xddc2,	// (0x000286e2) popup_battery_window_t2_ParamLimits

0xddc2,	// (0x000286e2) popup_battery_window_t2

0x0001,

0xfd8a,	// (0x0002a6aa) popup_battery_window_t_ParamLimits

0xfd8a,	// (0x0002a6aa) popup_battery_window_t

0x8c9f,	// (0x000235bf) midp_canvas_pane_ParamLimits

0x8d14,	// (0x00023634) midp_keypad_pane_ParamLimits

0x8d14,	// (0x00023634) midp_keypad_pane

0x8ff1,	// (0x00023911) main_midp_pane_ParamLimits

0xbb71,	// (0x00026491) signal_pane_g2_cp_ParamLimits

0xdddf,	// (0x000286ff) aid_size_cell_midp_keypad_ParamLimits

0xdddf,	// (0x000286ff) aid_size_cell_midp_keypad

0xddf9,	// (0x00028719) midp_keyp_game_grid_pane_ParamLimits

0xddf9,	// (0x00028719) midp_keyp_game_grid_pane

0xde19,	// (0x00028739) midp_keyp_rocker_pane_ParamLimits

0xde19,	// (0x00028739) midp_keyp_rocker_pane

0xde52,	// (0x00028772) midp_keyp_sk_left_pane_ParamLimits

0xde52,	// (0x00028772) midp_keyp_sk_left_pane

0xdeac,	// (0x000287cc) midp_keyp_sk_right_pane_ParamLimits

0xdeac,	// (0x000287cc) midp_keyp_sk_right_pane

0x76c6,	// (0x00021fe6) bg_button_pane_cp03

0xdf06,	// (0x00028826) midp_keyp_sk_left_pane_g1

0x76c6,	// (0x00021fe6) bg_button_pane_cp04

0xdf06,	// (0x00028826) midp_keyp_sk_right_pane_g1

0xc0c0,	// (0x000269e0) midp_keyp_rocker_pane_g1

0xdf0f,	// (0x0002882f) keyp_game_cell_pane_ParamLimits

0xdf0f,	// (0x0002882f) keyp_game_cell_pane

0x76c6,	// (0x00021fe6) bg_button_pane_cp02

0xdf22,	// (0x00028842) keyp_game_cell_pane_g1

0x5eb9,	// (0x000207d9) popup_fep_vkb2_window_ParamLimits

0x5eb9,	// (0x000207d9) popup_fep_vkb2_window

0x6f24,	// (0x00021844) aid_size_cell_vkb2_ParamLimits

0x6f24,	// (0x00021844) aid_size_cell_vkb2

0x6f78,	// (0x00021898) popup_fep_vkb2_window_g1_ParamLimits

0x6f78,	// (0x00021898) popup_fep_vkb2_window_g1

0x6fc0,	// (0x000218e0) vkb2_area_bottom_pane_ParamLimits

0x6fc0,	// (0x000218e0) vkb2_area_bottom_pane

0x700c,	// (0x0002192c) vkb2_area_keypad_pane_ParamLimits

0x700c,	// (0x0002192c) vkb2_area_keypad_pane

0x704e,	// (0x0002196e) vkb2_area_top_pane_ParamLimits

0x704e,	// (0x0002196e) vkb2_area_top_pane

0x70c8,	// (0x000219e8) vkb2_top_entry_pane_ParamLimits

0x70c8,	// (0x000219e8) vkb2_top_entry_pane

0x70f2,	// (0x00021a12) vkb2_top_grid_left_pane_ParamLimits

0x70f2,	// (0x00021a12) vkb2_top_grid_left_pane

0x7110,	// (0x00021a30) vkb2_top_grid_right_pane_ParamLimits

0x7110,	// (0x00021a30) vkb2_top_grid_right_pane

0x712e,	// (0x00021a4e) vkb2_cell_keypad_pane_ParamLimits

0x712e,	// (0x00021a4e) vkb2_cell_keypad_pane

0x71ff,	// (0x00021b1f) vkb2_area_bottom_grid_pane_ParamLimits

0x71ff,	// (0x00021b1f) vkb2_area_bottom_grid_pane

0x7225,	// (0x00021b45) vkb2_area_bottom_pane_g1_ParamLimits

0x7225,	// (0x00021b45) vkb2_area_bottom_pane_g1

0x7249,	// (0x00021b69) vkb2_area_bottom_pane_g2_ParamLimits

0x7249,	// (0x00021b69) vkb2_area_bottom_pane_g2

0x7277,	// (0x00021b97) vkb2_area_bottom_pane_g3_ParamLimits

0x7277,	// (0x00021b97) vkb2_area_bottom_pane_g3

0x0002,

0xfd8f,	// (0x0002a6af) vkb2_area_bottom_pane_g_ParamLimits

0xfd8f,	// (0x0002a6af) vkb2_area_bottom_pane_g

0x72d8,	// (0x00021bf8) vkb2_top_cell_left_pane_ParamLimits

0x72d8,	// (0x00021bf8) vkb2_top_cell_left_pane

0xdf33,	// (0x00028853) vkb2_top_entry_pane_g1_ParamLimits

0xdf33,	// (0x00028853) vkb2_top_entry_pane_g1

0xdf41,	// (0x00028861) vkb2_top_entry_pane_t1_ParamLimits

0xdf41,	// (0x00028861) vkb2_top_entry_pane_t1

0xdf73,	// (0x00028893) vkb2_top_entry_pane_t2_ParamLimits

0xdf73,	// (0x00028893) vkb2_top_entry_pane_t2

0xdfa5,	// (0x000288c5) vkb2_top_entry_pane_t3_ParamLimits

0xdfa5,	// (0x000288c5) vkb2_top_entry_pane_t3

0x0002,

0xfd96,	// (0x0002a6b6) vkb2_top_entry_pane_t_ParamLimits

0xfd96,	// (0x0002a6b6) vkb2_top_entry_pane_t

0x7325,	// (0x00021c45) vkb2_top_grid_right_pane_g1_ParamLimits

0x7325,	// (0x00021c45) vkb2_top_grid_right_pane_g1

0x733b,	// (0x00021c5b) vkb2_top_grid_right_pane_g2_ParamLimits

0x733b,	// (0x00021c5b) vkb2_top_grid_right_pane_g2

0x7353,	// (0x00021c73) vkb2_top_grid_right_pane_g3_ParamLimits

0x7353,	// (0x00021c73) vkb2_top_grid_right_pane_g3

0x736b,	// (0x00021c8b) vkb2_top_grid_right_pane_g4_ParamLimits

0x736b,	// (0x00021c8b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9d,	// (0x0002a6bd) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9d,	// (0x0002a6bd) vkb2_top_grid_right_pane_g

0x7381,	// (0x00021ca1) vkb2_top_cell_left_pane_g1

0x7398,	// (0x00021cb8) vkb2_cell_keypad_pane_g1_ParamLimits

0x7398,	// (0x00021cb8) vkb2_cell_keypad_pane_g1

0xdfc9,	// (0x000288e9) vkb2_cell_keypad_pane_t1_ParamLimits

0xdfc9,	// (0x000288e9) vkb2_cell_keypad_pane_t1

0x73a6,	// (0x00021cc6) vkb2_cell_bottom_grid_pane_ParamLimits

0x73a6,	// (0x00021cc6) vkb2_cell_bottom_grid_pane

0x73df,	// (0x00021cff) vkb2_cell_bottom_grid_pane_g1

0xdb74,	// (0x00028494) aid_call2_pane_cp02

0xdb7c,	// (0x0002849c) aid_call_pane_cp02

0xdb84,	// (0x000284a4) clock_digital_number_pane_cp10

0xdb8c,	// (0x000284ac) clock_digital_number_pane_cp11

0xdb94,	// (0x000284b4) clock_digital_number_pane_cp12

0xdb9c,	// (0x000284bc) clock_digital_number_pane_cp13

0xdba4,	// (0x000284c4) clock_digital_separator_pane_cp10

0x868c,	// (0x00022fac) popup_clock_digital_analogue_window_cp2_g1

0x868c,	// (0x00022fac) popup_clock_digital_analogue_window_cp2_g2

0xdbac,	// (0x000284cc) popup_clock_digital_analogue_window_cp2_g3

0x868c,	// (0x00022fac) popup_clock_digital_analogue_window_cp2_g4

0xdbac,	// (0x000284cc) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd52,	// (0x0002a672) popup_clock_digital_analogue_window_cp2_g

0xdbb4,	// (0x000284d4) popup_clock_digital_analogue_window_cp2_t1

0xdbc2,	// (0x000284e2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5d,	// (0x0002a67d) popup_clock_digital_analogue_window_cp2_t

0xc0c0,	// (0x000269e0) clock_digital_number_pane_cp10_g1

0xc0c0,	// (0x000269e0) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x0002a465) clock_digital_number_pane_cp10_g

0xc0c0,	// (0x000269e0) clock_digital_separator_pane_cp10_g1

0xc0c0,	// (0x000269e0) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x0002a465) clock_digital_separator_pane_cp10_g

0xd9f0,	// (0x00028310) uniindi_top_pane_g3

0xda01,	// (0x00028321) uniindi_top_pane_g4

0x71b9,	// (0x00021ad9) vkb2_row_keypad_pane_ParamLimits

0x71b9,	// (0x00021ad9) vkb2_row_keypad_pane

0x73fb,	// (0x00021d1b) vkb2_cell_t_keypad_pane_ParamLimits

0x73fb,	// (0x00021d1b) vkb2_cell_t_keypad_pane

0x740b,	// (0x00021d2b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x740b,	// (0x00021d2b) vkb2_cell_t_keypad_pane_cp08

0x741e,	// (0x00021d3e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x741e,	// (0x00021d3e) vkb2_cell_t_keypad_pane_cp09

0x7432,	// (0x00021d52) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7432,	// (0x00021d52) vkb2_cell_t_keypad_pane_cp01

0x7443,	// (0x00021d63) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7443,	// (0x00021d63) vkb2_cell_t_keypad_pane_cp02

0x7454,	// (0x00021d74) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7454,	// (0x00021d74) vkb2_cell_t_keypad_pane_cp03

0x7465,	// (0x00021d85) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7465,	// (0x00021d85) vkb2_cell_t_keypad_pane_cp04

0x7476,	// (0x00021d96) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7476,	// (0x00021d96) vkb2_cell_t_keypad_pane_cp05

0x7487,	// (0x00021da7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7487,	// (0x00021da7) vkb2_cell_t_keypad_pane_cp06

0x7498,	// (0x00021db8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7498,	// (0x00021db8) vkb2_cell_t_keypad_pane_cp07

0x74a9,	// (0x00021dc9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x74a9,	// (0x00021dc9) vkb2_cell_t_keypad_pane_cp10

0xc352,	// (0x00026c72) vkb2_cell_t_keypad_pane_g1

0xdfe0,	// (0x00028900) vkb2_cell_t_keypad_pane_t1

0x76c6,	// (0x00021fe6) popup_grid_graphic2_window

0xdff2,	// (0x00028912) aid_size_cell_graphic2_ParamLimits

0xdff2,	// (0x00028912) aid_size_cell_graphic2

0xe02a,	// (0x0002894a) bg_popup_window_pane_cp21_ParamLimits

0xe02a,	// (0x0002894a) bg_popup_window_pane_cp21

0xe038,	// (0x00028958) graphic2_pages_pane_ParamLimits

0xe038,	// (0x00028958) graphic2_pages_pane

0xe07e,	// (0x0002899e) grid_graphic2_control_pane_ParamLimits

0xe07e,	// (0x0002899e) grid_graphic2_control_pane

0xe0bc,	// (0x000289dc) grid_graphic2_pane_ParamLimits

0xe0bc,	// (0x000289dc) grid_graphic2_pane

0xe130,	// (0x00028a50) cell_graphic2_pane

0x76c6,	// (0x00021fe6) main_comp_mode_pane

0xd270,	// (0x00027b90) list_ai3_gene_pane_ParamLimits

0xd63a,	// (0x00027f5a) bg_popup_window_pane_cp19_ParamLimits

0xd646,	// (0x00027f66) bg_touch_area_indi_pane_ParamLimits

0xd646,	// (0x00027f66) bg_touch_area_indi_pane

0xd65c,	// (0x00027f7c) bg_touch_area_indi_pane_cp01_ParamLimits

0xd65c,	// (0x00027f7c) bg_touch_area_indi_pane_cp01

0xd672,	// (0x00027f92) bg_touch_area_indi_pane_cp02_ParamLimits

0xd672,	// (0x00027f92) bg_touch_area_indi_pane_cp02

0xd68a,	// (0x00027faa) bg_touch_area_indi_pane_cp03_ParamLimits

0xd68a,	// (0x00027faa) bg_touch_area_indi_pane_cp03

0xd6a4,	// (0x00027fc4) popup_slider_window_g1_ParamLimits

0xd6c0,	// (0x00027fe0) popup_slider_window_g2_ParamLimits

0xd6dc,	// (0x00027ffc) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x0002a607) popup_slider_window_g_ParamLimits

0xd738,	// (0x00028058) popup_slider_window_t1_ParamLimits

0xd7ac,	// (0x000280cc) small_volume_slider_vertical_pane_ParamLimits

0xe130,	// (0x00028a50) cell_graphic2_pane_ParamLimits

0xe17e,	// (0x00028a9e) bg_button_pane_cp10_ParamLimits

0xe17e,	// (0x00028a9e) bg_button_pane_cp10

0xe191,	// (0x00028ab1) bg_button_pane_cp11_ParamLimits

0xe191,	// (0x00028ab1) bg_button_pane_cp11

0xe1a4,	// (0x00028ac4) graphic2_pages_pane_g1_ParamLimits

0xe1a4,	// (0x00028ac4) graphic2_pages_pane_g1

0xe1bf,	// (0x00028adf) graphic2_pages_pane_g2_ParamLimits

0xe1bf,	// (0x00028adf) graphic2_pages_pane_g2

0x0001,

0xfdab,	// (0x0002a6cb) graphic2_pages_pane_g_ParamLimits

0xfdab,	// (0x0002a6cb) graphic2_pages_pane_g

0xe1d7,	// (0x00028af7) graphic2_pages_pane_t1_ParamLimits

0xe1d7,	// (0x00028af7) graphic2_pages_pane_t1

0xe1ef,	// (0x00028b0f) cell_graphic2_control_pane_ParamLimits

0xe1ef,	// (0x00028b0f) cell_graphic2_control_pane

0xe210,	// (0x00028b30) cell_graphic2_pane_g1_ParamLimits

0xe210,	// (0x00028b30) cell_graphic2_pane_g1

0xe21d,	// (0x00028b3d) cell_graphic2_pane_g2_ParamLimits

0xe21d,	// (0x00028b3d) cell_graphic2_pane_g2

0xe22a,	// (0x00028b4a) cell_graphic2_pane_g3_ParamLimits

0xe22a,	// (0x00028b4a) cell_graphic2_pane_g3

0xe237,	// (0x00028b57) cell_graphic2_pane_g4_ParamLimits

0xe237,	// (0x00028b57) cell_graphic2_pane_g4

0xe244,	// (0x00028b64) cell_graphic2_pane_g5_ParamLimits

0xe244,	// (0x00028b64) cell_graphic2_pane_g5

0x0004,

0xfdb0,	// (0x0002a6d0) cell_graphic2_pane_g_ParamLimits

0xfdb0,	// (0x0002a6d0) cell_graphic2_pane_g

0xe25f,	// (0x00028b7f) cell_graphic2_pane_t1_ParamLimits

0xe25f,	// (0x00028b7f) cell_graphic2_pane_t1

0x9b83,	// (0x000244a3) grid_highlight_pane_cp11_ParamLimits

0x9b83,	// (0x000244a3) grid_highlight_pane_cp11

0x7a43,	// (0x00022363) bg_button_pane_cp05

0xe288,	// (0x00028ba8) cell_graphic2_control_pane_g1

0xc0c0,	// (0x000269e0) bg_touch_area_indi_pane_g1

0xe2b0,	// (0x00028bd0) aid_cmod_rocker_key_size

0xe2ba,	// (0x00028bda) aid_cmode_itu_key_size

0xe2c4,	// (0x00028be4) main_cmode_video_pane

0xe2ce,	// (0x00028bee) main_comp_mode_itu_pane

0xe2da,	// (0x00028bfa) main_comp_mode_rocker_pane

0xe2e6,	// (0x00028c06) cell_cmode_rocker_pane_ParamLimits

0xe2e6,	// (0x00028c06) cell_cmode_rocker_pane

0xe2f8,	// (0x00028c18) cell_cmode_itu_pane_ParamLimits

0xe2f8,	// (0x00028c18) cell_cmode_itu_pane

0x8026,	// (0x00022946) bg_button_pane_cp06_ParamLimits

0x8026,	// (0x00022946) bg_button_pane_cp06

0xc352,	// (0x00026c72) cell_cmode_rocker_pane_g1_ParamLimits

0xc352,	// (0x00026c72) cell_cmode_rocker_pane_g1

0xd850,	// (0x00028170) cell_cmode_rocker_pane_g2_ParamLimits

0xd850,	// (0x00028170) cell_cmode_rocker_pane_g2

0x0001,

0xfdc0,	// (0x0002a6e0) cell_cmode_rocker_pane_g_ParamLimits

0xfdc0,	// (0x0002a6e0) cell_cmode_rocker_pane_g

0x76c6,	// (0x00021fe6) bg_button_pane_cp07

0xe30d,	// (0x00028c2d) cell_cmode_itu_pane_g1

0xe316,	// (0x00028c36) cell_cmode_itu_pane_t1

0xe324,	// (0x00028c44) cell_cmode_itu_pane_t2

0x0001,

0xfdc5,	// (0x0002a6e5) cell_cmode_itu_pane_t

0xda73,	// (0x00028393) aid_touch_ctrl_left

0xda7b,	// (0x0002839b) aid_touch_ctrl_right

0x76c6,	// (0x00021fe6) compa_mode_pane

0xe332,	// (0x00028c52) aid_cmod_rocker_key_size_cp

0xe33c,	// (0x00028c5c) aid_cmode_itu_key_size_cp

0xe346,	// (0x00028c66) compa_mode_pane_g1

0xe34e,	// (0x00028c6e) compa_mode_pane_g2

0xe356,	// (0x00028c76) compa_mode_pane_g3

0x0002,

0xfdca,	// (0x0002a6ea) compa_mode_pane_g

0xe35e,	// (0x00028c7e) main_comp_mode_itu_pane_cp

0xe366,	// (0x00028c86) main_comp_mode_rocker_pane_cp

0xe36e,	// (0x00028c8e) cell_cmode_itu_pane_cp_ParamLimits

0xe36e,	// (0x00028c8e) cell_cmode_itu_pane_cp

0xe383,	// (0x00028ca3) cell_cmode_rocker_pane_cp_ParamLimits

0xe383,	// (0x00028ca3) cell_cmode_rocker_pane_cp

0x8026,	// (0x00022946) bg_button_pane_cp06_cp_ParamLimits

0x8026,	// (0x00022946) bg_button_pane_cp06_cp

0xc352,	// (0x00026c72) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc352,	// (0x00026c72) cell_cmode_rocker_pane_g1_cp

0xc0c0,	// (0x000269e0) cell_cmode_rocker_pane_g2_cp

0x76c6,	// (0x00021fe6) bg_button_pane_cp07_cp

0xb047,	// (0x00025967) cell_cmode_itu_pane_g1_cp

0xe395,	// (0x00028cb5) cell_cmode_itu_pane_t1_cp

0xe395,	// (0x00028cb5) cell_cmode_itu_pane_t2_cp

0xb034,	// (0x00025954) settings_code_pane_cp2

0x77ba,	// (0x000220da) bg_popup_window_pane_cp3_ParamLimits

0x7c1d,	// (0x0002253d) heading_pane_cp3_ParamLimits

0x7c29,	// (0x00022549) listscroll_popup_graphic_pane_ParamLimits

0x6ad1,	// (0x000213f1) fep_hwr_aid_pane_ParamLimits

0x6e9b,	// (0x000217bb) aid_touch_sctrl_top_ParamLimits

0x6ea8,	// (0x000217c8) sctrl_sk_top_pane_g1_ParamLimits

0xc352,	// (0x00026c72) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x0002a620) sctrl_sk_top_pane_g_ParamLimits

0x6eb5,	// (0x000217d5) sctrl_sk_top_pane_t1_ParamLimits

0x6e9b,	// (0x000217bb) aid_touch_sctrl_bottom_ParamLimits

0x6eb5,	// (0x000217d5) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9bc,	// (0x000282dc) aid_area_touch_clock

0x7090,	// (0x000219b0) aid_vkb2_area_top_pane_cell_ParamLimits

0x7090,	// (0x000219b0) aid_vkb2_area_top_pane_cell

0x71db,	// (0x00021afb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x71db,	// (0x00021afb) aid_vkb2_area_bottom_pane_cell

0xdf2b,	// (0x0002884b) popup_char_count_window

0xe3a3,	// (0x00028cc3) popup_char_count_window_g1

0xe3ac,	// (0x00028ccc) popup_char_count_window_g2

0xe3b5,	// (0x00028cd5) popup_char_count_window_g3

0x0002,

0xfdd1,	// (0x0002a6f1) popup_char_count_window_g

0xe3be,	// (0x00028cde) popup_char_count_window_t1

0x6f56,	// (0x00021876) popup_fep_char_preview_window_ParamLimits

0x6f56,	// (0x00021876) popup_fep_char_preview_window

0x70ae,	// (0x000219ce) vkb2_top_candi_pane_ParamLimits

0x70ae,	// (0x000219ce) vkb2_top_candi_pane

0xe3cc,	// (0x00028cec) cell_vkb2_top_candi_pane_ParamLimits

0xe3cc,	// (0x00028cec) cell_vkb2_top_candi_pane

0xa160,	// (0x00024a80) bg_popup_fep_char_preview_window_ParamLimits

0xa160,	// (0x00024a80) bg_popup_fep_char_preview_window

0x74be,	// (0x00021dde) popup_fep_char_preview_window_t1_ParamLimits

0x74be,	// (0x00021dde) popup_fep_char_preview_window_t1

0xe419,	// (0x00028d39) bg_popup_fep_char_preview_window_g1

0xe421,	// (0x00028d41) bg_popup_fep_char_preview_window_g2

0xe429,	// (0x00028d49) bg_popup_fep_char_preview_window_g3

0xe431,	// (0x00028d51) bg_popup_fep_char_preview_window_g4

0xe439,	// (0x00028d59) bg_popup_fep_char_preview_window_g5

0x74f8,	// (0x00021e18) bg_popup_fep_char_preview_window_g6

0xe441,	// (0x00028d61) bg_popup_fep_char_preview_window_g7

0xe449,	// (0x00028d69) bg_popup_fep_char_preview_window_g8

0xe451,	// (0x00028d71) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd8,	// (0x0002a6f8) bg_popup_fep_char_preview_window_g

0xc352,	// (0x00026c72) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc352,	// (0x00026c72) cell_vkb2_top_candi_pane_g1

0xc669,	// (0x00026f89) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc669,	// (0x00026f89) cell_vkb2_top_candi_pane_g2

0xc68a,	// (0x00026faa) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc68a,	// (0x00026faa) cell_vkb2_top_candi_pane_g3

0x7500,	// (0x00021e20) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7500,	// (0x00021e20) cell_vkb2_top_candi_pane_g4

0xe459,	// (0x00028d79) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe459,	// (0x00028d79) cell_vkb2_top_candi_pane_g5

0xd850,	// (0x00028170) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd850,	// (0x00028170) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdeb,	// (0x0002a70b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdeb,	// (0x0002a70b) cell_vkb2_top_candi_pane_g

0x7521,	// (0x00021e41) cell_vkb2_top_candi_pane_t1

0x693f,	// (0x0002125f) aid_size_touch_slider_mark_ParamLimits

0x693f,	// (0x0002125f) aid_size_touch_slider_mark

0xe06e,	// (0x0002898e) grid_graphic2_catg_pane_ParamLimits

0xe06e,	// (0x0002898e) grid_graphic2_catg_pane

0xe10c,	// (0x00028a2c) popup_grid_graphic2_window_t1_ParamLimits

0xe10c,	// (0x00028a2c) popup_grid_graphic2_window_t1

0xe11e,	// (0x00028a3e) popup_grid_graphic2_window_t2_ParamLimits

0xe11e,	// (0x00028a3e) popup_grid_graphic2_window_t2

0x0001,

0xfda6,	// (0x0002a6c6) popup_grid_graphic2_window_t_ParamLimits

0xfda6,	// (0x0002a6c6) popup_grid_graphic2_window_t

0x7a43,	// (0x00022363) bg_button_pane_cp05_ParamLimits

0xe288,	// (0x00028ba8) cell_graphic2_control_pane_g1_ParamLimits

0xe47a,	// (0x00028d9a) cell_graphic2_catg_pane_ParamLimits

0xe47a,	// (0x00028d9a) cell_graphic2_catg_pane

0x76c6,	// (0x00021fe6) bg_button_pane_cp12

0xe48c,	// (0x00028dac) cell_graphic2_catg_pane_g1

0xd988,	// (0x000282a8) cell_tb_ext_pane_t1_ParamLimits

0x72f8,	// (0x00021c18) vkb2_top_cell_right_narrow_pane_ParamLimits

0x72f8,	// (0x00021c18) vkb2_top_cell_right_narrow_pane

0x7310,	// (0x00021c30) vkb2_top_cell_right_wide_pane_ParamLimits

0x7310,	// (0x00021c30) vkb2_top_cell_right_wide_pane

0x1404,	// (0x0001bd24) bg_vkb2_func_pane_ParamLimits

0x1404,	// (0x0001bd24) bg_vkb2_func_pane

0x7381,	// (0x00021ca1) vkb2_top_cell_left_pane_g1_ParamLimits

0x1404,	// (0x0001bd24) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1404,	// (0x0001bd24) bg_vkb2_fuc_pane_cp03

0x73df,	// (0x00021cff) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9a9b,	// (0x000243bb) bg_vkb2_func_pane_g1

0x9aa3,	// (0x000243c3) bg_vkb2_func_pane_g2

0x9ab3,	// (0x000243d3) bg_vkb2_func_pane_g3

0x9aab,	// (0x000243cb) bg_vkb2_func_pane_g4

0x9abb,	// (0x000243db) bg_vkb2_func_pane_g5

0x9ac3,	// (0x000243e3) bg_vkb2_func_pane_g6

0x9acb,	// (0x000243eb) bg_vkb2_func_pane_g7

0x9ad3,	// (0x000243f3) bg_vkb2_func_pane_g8

0x9a93,	// (0x000243b3) bg_vkb2_func_pane_g9

0x0008,

0xfdf8,	// (0x0002a718) bg_vkb2_func_pane_g

0x1404,	// (0x0001bd24) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1404,	// (0x0001bd24) bg_vkb2_fuc_pane_cp01

0x7381,	// (0x00021ca1) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7381,	// (0x00021ca1) vkb2_top_cell_right_wide_pane_g1

0x1404,	// (0x0001bd24) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1404,	// (0x0001bd24) bg_vkb2_fuc_pane_cp02

0x73df,	// (0x00021cff) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x73df,	// (0x00021cff) vkb2_top_cell_right_narrow_pane_g1

0xd5be,	// (0x00027ede) aid_touch_area_decrease_ParamLimits

0xd5be,	// (0x00027ede) aid_touch_area_decrease

0xd5dc,	// (0x00027efc) aid_touch_area_increase_ParamLimits

0xd5dc,	// (0x00027efc) aid_touch_area_increase

0xd5e8,	// (0x00027f08) aid_touch_area_mute_ParamLimits

0xd5e8,	// (0x00027f08) aid_touch_area_mute

0xd60c,	// (0x00027f2c) aid_touch_area_slider_ParamLimits

0xd60c,	// (0x00027f2c) aid_touch_area_slider

0xd6f8,	// (0x00028018) popup_slider_window_g4_ParamLimits

0xd6f8,	// (0x00028018) popup_slider_window_g4

0xd704,	// (0x00028024) popup_slider_window_g5_ParamLimits

0xd704,	// (0x00028024) popup_slider_window_g5

0xd726,	// (0x00028046) popup_slider_window_g6_ParamLimits

0xd726,	// (0x00028046) popup_slider_window_g6

0xd766,	// (0x00028086) popup_slider_window_t2_ParamLimits

0xd766,	// (0x00028086) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x0002a614) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x0002a614) popup_slider_window_t

0xd77e,	// (0x0002809e) slider_pane_ParamLimits

0xd77e,	// (0x0002809e) slider_pane

0xe495,	// (0x00028db5) slider_pane_g1_ParamLimits

0xe495,	// (0x00028db5) slider_pane_g1

0xe4a9,	// (0x00028dc9) slider_pane_g2_ParamLimits

0xe4a9,	// (0x00028dc9) slider_pane_g2

0xe4bf,	// (0x00028ddf) slider_pane_g3_ParamLimits

0xe4bf,	// (0x00028ddf) slider_pane_g3

0x0003,

0xfe0b,	// (0x0002a72b) slider_pane_g_ParamLimits

0xfe0b,	// (0x0002a72b) slider_pane_g

0x94c1,	// (0x00023de1) popup_tb_float_extension_window_ParamLimits

0x94c1,	// (0x00023de1) popup_tb_float_extension_window

0xe4eb,	// (0x00028e0b) aid_size_cell_tb_float_ext

0x76c6,	// (0x00021fe6) bg_popup_sub_window_cp28

0xe4f7,	// (0x00028e17) grid_tb_float_ext_pane

0xe501,	// (0x00028e21) cell_tb_float_ext_pane_ParamLimits

0xe501,	// (0x00028e21) cell_tb_float_ext_pane

0xe51b,	// (0x00028e3b) cell_tb_float_ext_pane_g1

0xe524,	// (0x00028e44) grid_highlight_pane_cp12

0x6c04,	// (0x00021524) cell_last_hwr_side_pane_ParamLimits

0x6c04,	// (0x00021524) cell_last_hwr_side_pane

0xc0c0,	// (0x000269e0) cell_last_hwr_side_pane_g1

0xe52d,	// (0x00028e4d) cell_last_hwr_side_pane_g2

0x0001,

0xfe14,	// (0x0002a734) cell_last_hwr_side_pane_g

0x72a7,	// (0x00021bc7) vkb2_area_bottom_space_btn_pane_ParamLimits

0x72a7,	// (0x00021bc7) vkb2_area_bottom_space_btn_pane

0xc352,	// (0x00026c72) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfe0,	// (0x00028900) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7521,	// (0x00021e41) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7540,	// (0x00021e60) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7540,	// (0x00021e60) vkb2_area_bottom_space_btn_pane_g1

0x757a,	// (0x00021e9a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x757a,	// (0x00021e9a) vkb2_area_bottom_space_btn_pane_g2

0x75b0,	// (0x00021ed0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x75b0,	// (0x00021ed0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe19,	// (0x0002a739) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe19,	// (0x0002a739) vkb2_area_bottom_space_btn_pane_g

0x6b78,	// (0x00021498) cel_fep_hwr_func_pane_ParamLimits

0x6b78,	// (0x00021498) cel_fep_hwr_func_pane

0x6bb4,	// (0x000214d4) cell_hwr_side_button_pane_ParamLimits

0x6bb4,	// (0x000214d4) cell_hwr_side_button_pane

0xd9bc,	// (0x000282dc) aid_area_touch_clock_ParamLimits

0x7a43,	// (0x00022363) bg_uniindi_top_pane_ParamLimits

0xd9ce,	// (0x000282ee) uniindi_top_pane_g1_ParamLimits

0xd9e4,	// (0x00028304) uniindi_top_pane_g2_ParamLimits

0xd9f0,	// (0x00028310) uniindi_top_pane_g3_ParamLimits

0xda01,	// (0x00028321) uniindi_top_pane_g4_ParamLimits

0xfd2c,	// (0x0002a64c) uniindi_top_pane_g_ParamLimits

0xda0e,	// (0x0002832e) uniindi_top_pane_t1_ParamLimits

0x7a43,	// (0x00022363) bg_vkb2_func_pane_cp01_ParamLimits

0x7a43,	// (0x00022363) bg_vkb2_func_pane_cp01

0xe536,	// (0x00028e56) cel_fep_hwr_func_pane_g1_ParamLimits

0xe536,	// (0x00028e56) cel_fep_hwr_func_pane_g1

0x7a43,	// (0x00022363) bg_vkb2_func_pane_cp02_ParamLimits

0x7a43,	// (0x00022363) bg_vkb2_func_pane_cp02

0xe536,	// (0x00028e56) cell_hwr_side_button_pane_g1_ParamLimits

0xe536,	// (0x00028e56) cell_hwr_side_button_pane_g1

0x9914,	// (0x00024234) status_pane_g4_ParamLimits

0x9914,	// (0x00024234) status_pane_g4

0x992e,	// (0x0002424e) status_pane_t1

0xbdf9,	// (0x00026719) form2_midp_gauge_slider_cont_pane

0xbe01,	// (0x00026721) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe13,	// (0x00026733) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe25,	// (0x00026745) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x0002a418) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe37,	// (0x00026757) form2_midp_slider_pane_ParamLimits

0x6f16,	// (0x00021836) aid_size_cell_func_vkb2_ParamLimits

0x6f16,	// (0x00021836) aid_size_cell_func_vkb2

0xe4d7,	// (0x00028df7) slider_pane_g4_ParamLimits

0xe4d7,	// (0x00028df7) slider_pane_g4

0x75fa,	// (0x00021f1a) form2_midp_gauge_slider_pane_t2_cp01

0x7608,	// (0x00021f28) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7608,	// (0x00021f28) form2_midp_gauge_slider_pane_t3_cp01

0x7625,	// (0x00021f45) form2_midp_slider_pane_cp01

0x76c6,	// (0x00021fe6) navi_smil_pane

0xe56f,	// (0x00028e8f) navi_smil_pane_g1

0xe577,	// (0x00028e97) navi_smil_pane_t1

0xe544,	// (0x00028e64) form2_midp_slider_pane_g1

0xe54d,	// (0x00028e6d) form2_midp_slider_pane_g2

0xe555,	// (0x00028e75) form2_midp_slider_pane_g3

0xe544,	// (0x00028e64) form2_midp_slider_pane_g4

0xe55d,	// (0x00028e7d) form2_midp_slider_pane_g5

0x0004,

0xfe22,	// (0x0002a742) form2_midp_slider_pane_g

0x75ea,	// (0x00021f0a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x75ea,	// (0x00021f0a) vkb2_area_bottom_space_btn_pane_g4

0x973e,	// (0x0002405e) lc0_navi_pane_ParamLimits

0x973e,	// (0x0002405e) lc0_navi_pane

0x97c0,	// (0x000240e0) lc0_stat_indi_pane_ParamLimits

0x97c0,	// (0x000240e0) lc0_stat_indi_pane

0x97d7,	// (0x000240f7) ls0_title_pane_ParamLimits

0x97d7,	// (0x000240f7) ls0_title_pane

0x8026,	// (0x00022946) bg_popup_sub_pane_cp14_ParamLimits

0xd9a3,	// (0x000282c3) list_uniindi_pane_ParamLimits

0xd9af,	// (0x000282cf) uniindi_top_pane_ParamLimits

0xda4b,	// (0x0002836b) list_single_uniindi_pane_g1_ParamLimits

0xda5e,	// (0x0002837e) list_single_uniindi_pane_t1_ParamLimits

0x762e,	// (0x00021f4e) lc0_stat_clock_pane_ParamLimits

0x762e,	// (0x00021f4e) lc0_stat_clock_pane

0xe585,	// (0x00028ea5) lc0_stat_indi_pane_g1_ParamLimits

0xe585,	// (0x00028ea5) lc0_stat_indi_pane_g1

0xe592,	// (0x00028eb2) lc0_stat_indi_pane_g2_ParamLimits

0xe592,	// (0x00028eb2) lc0_stat_indi_pane_g2

0x0001,

0xfe2d,	// (0x0002a74d) lc0_stat_indi_pane_g_ParamLimits

0xfe2d,	// (0x0002a74d) lc0_stat_indi_pane_g

0x763b,	// (0x00021f5b) lc0_uni_indicator_pane_ParamLimits

0x763b,	// (0x00021f5b) lc0_uni_indicator_pane

0xe59f,	// (0x00028ebf) ls0_title_pane_g1_ParamLimits

0xe59f,	// (0x00028ebf) ls0_title_pane_g1

0xe5b3,	// (0x00028ed3) ls0_title_pane_t1_ParamLimits

0xe5b3,	// (0x00028ed3) ls0_title_pane_t1

0x7648,	// (0x00021f68) lc0_uni_indicator_pane_g1_ParamLimits

0x7648,	// (0x00021f68) lc0_uni_indicator_pane_g1

0xe5e9,	// (0x00028f09) lc0_stat_clock_pane_t1

0x76c6,	// (0x00021fe6) main_ai5_pane

0xe5f7,	// (0x00028f17) ai5_sk_pane_ParamLimits

0xe5f7,	// (0x00028f17) ai5_sk_pane

0xe604,	// (0x00028f24) cell_ai5_widget_pane_ParamLimits

0xe604,	// (0x00028f24) cell_ai5_widget_pane

0xe686,	// (0x00028fa6) aid_size_cell_widget_grid

0xe69a,	// (0x00028fba) bg_ai5_widget_pane_ParamLimits

0xe69a,	// (0x00028fba) bg_ai5_widget_pane

0xe6c2,	// (0x00028fe2) cell_ai5_widget_pane_g2

0xe6d2,	// (0x00028ff2) cell_ai5_widget_pane_g3

0xe6f1,	// (0x00029011) cell_ai5_widget_pane_g4

0xe6fd,	// (0x0002901d) cell_ai5_widget_pane_g5

0xe709,	// (0x00029029) cell_ai5_widget_pane_g6

0xe715,	// (0x00029035) cell_ai5_widget_pane_g7

0xe75d,	// (0x0002907d) cell_ai5_widget_pane_t1_ParamLimits

0xe75d,	// (0x0002907d) cell_ai5_widget_pane_t1

0xe77a,	// (0x0002909a) cell_ai5_widget_pane_t2_ParamLimits

0xe77a,	// (0x0002909a) cell_ai5_widget_pane_t2

0xe792,	// (0x000290b2) cell_ai5_widget_pane_t3_ParamLimits

0xe792,	// (0x000290b2) cell_ai5_widget_pane_t3

0xe7aa,	// (0x000290ca) cell_ai5_widget_pane_t4_ParamLimits

0xe7aa,	// (0x000290ca) cell_ai5_widget_pane_t4

0xe7c4,	// (0x000290e4) cell_ai5_widget_pane_t5_ParamLimits

0xe7c4,	// (0x000290e4) cell_ai5_widget_pane_t5

0xe7e3,	// (0x00029103) cell_ai5_widget_pane_t6_ParamLimits

0xe7e3,	// (0x00029103) cell_ai5_widget_pane_t6

0xe7f5,	// (0x00029115) cell_ai5_widget_pane_t7_ParamLimits

0xe7f5,	// (0x00029115) cell_ai5_widget_pane_t7

0xe80e,	// (0x0002912e) cell_ai5_widget_pane_t8_ParamLimits

0xe80e,	// (0x0002912e) cell_ai5_widget_pane_t8

0x0009,

0xfe47,	// (0x0002a767) cell_ai5_widget_pane_t_ParamLimits

0xfe47,	// (0x0002a767) cell_ai5_widget_pane_t

0xe85a,	// (0x0002917a) grid_ai5_widget_pane

0x8026,	// (0x00022946) highlight_cell_ai5_widget_pane_ParamLimits

0x8026,	// (0x00022946) highlight_cell_ai5_widget_pane

0xe872,	// (0x00029192) ai5_sk_left_pane

0xe87c,	// (0x0002919c) ai5_sk_middle_pane

0xe886,	// (0x000291a6) ai5_sk_right_pane

0xe890,	// (0x000291b0) bg_ai5_widget_pane_g1_ParamLimits

0xe890,	// (0x000291b0) bg_ai5_widget_pane_g1

0xe89c,	// (0x000291bc) bg_ai5_widget_pane_g2_ParamLimits

0xe89c,	// (0x000291bc) bg_ai5_widget_pane_g2

0xe8a8,	// (0x000291c8) bg_ai5_widget_pane_g3_ParamLimits

0xe8a8,	// (0x000291c8) bg_ai5_widget_pane_g3

0xe8b4,	// (0x000291d4) bg_ai5_widget_pane_g4_ParamLimits

0xe8b4,	// (0x000291d4) bg_ai5_widget_pane_g4

0xe8c0,	// (0x000291e0) bg_ai5_widget_pane_g5_ParamLimits

0xe8c0,	// (0x000291e0) bg_ai5_widget_pane_g5

0xe8cc,	// (0x000291ec) bg_ai5_widget_pane_g6_ParamLimits

0xe8cc,	// (0x000291ec) bg_ai5_widget_pane_g6

0xe8d8,	// (0x000291f8) bg_ai5_widget_pane_g7_ParamLimits

0xe8d8,	// (0x000291f8) bg_ai5_widget_pane_g7

0xe8e4,	// (0x00029204) bg_ai5_widget_pane_g8_ParamLimits

0xe8e4,	// (0x00029204) bg_ai5_widget_pane_g8

0xe8f0,	// (0x00029210) bg_ai5_widget_pane_g9_ParamLimits

0xe8f0,	// (0x00029210) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x0002a77c) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x0002a77c) bg_ai5_widget_pane_g

0xe923,	// (0x00029243) cell_shortcut_ai5_widget_pane_ParamLimits

0xe923,	// (0x00029243) cell_shortcut_ai5_widget_pane

0x7883,	// (0x000221a3) bg_cell_shortcut_ai5_widget_pane

0xe934,	// (0x00029254) cell_grid_ai5_widget_pane_g1

0xe93d,	// (0x0002925d) highlight_cell_shortcut_ai5_widget_pane

0x9aa3,	// (0x000243c3) ai5_sk_left_pane_g1

0xe945,	// (0x00029265) ai5_sk_left_pane_g2

0xe94d,	// (0x0002926d) ai5_sk_left_pane_g3

0xe955,	// (0x00029275) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x0002a78f) ai5_sk_left_pane_g

0xe95d,	// (0x0002927d) ai5_sk_left_pane_t1

0x9a9b,	// (0x000243bb) ai5_sk_right_pane_g1

0xe96b,	// (0x0002928b) ai5_sk_right_pane_g2

0xe973,	// (0x00029293) ai5_sk_right_pane_g3

0xe97b,	// (0x0002929b) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x0002a798) ai5_sk_right_pane_g

0xe983,	// (0x000292a3) ai5_sk_right_pane_t1

0x9a9b,	// (0x000243bb) ai5_sk_middle_pane_g1

0x9aa3,	// (0x000243c3) ai5_sk_middle_pane_g2

0x9abb,	// (0x000243db) ai5_sk_middle_pane_g3

0xe973,	// (0x00029293) ai5_sk_middle_pane_g4

0xe94d,	// (0x0002926d) ai5_sk_middle_pane_g5

0xe991,	// (0x000292b1) ai5_sk_middle_pane_g6

0xe999,	// (0x000292b9) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x0002a7a1) ai5_sk_middle_pane_g

0x95ce,	// (0x00023eee) aid_touch_area_size_lc0_ParamLimits

0x95ce,	// (0x00023eee) aid_touch_area_size_lc0

0x6d03,	// (0x00021623) cell_hwr_candidate_pane_t1_ParamLimits

0x95ea,	// (0x00023f0a) aid_touch_navi_pane

0x98be,	// (0x000241de) status_dt_navi_pane_ParamLimits

0x98be,	// (0x000241de) status_dt_navi_pane

0x98cb,	// (0x000241eb) status_dt_sta_pane_ParamLimits

0x98cb,	// (0x000241eb) status_dt_sta_pane

0xe9a1,	// (0x000292c1) dt_sta_controll_pane

0xe9ae,	// (0x000292ce) dt_sta_indi_pane

0xe9bf,	// (0x000292df) dt_sta_title_pane

0x7a43,	// (0x00022363) bg_dt_sta_indi_pane_ParamLimits

0x7a43,	// (0x00022363) bg_dt_sta_indi_pane

0xe9d2,	// (0x000292f2) dt_sta_battery_pane

0xe9da,	// (0x000292fa) dt_sta_indi_pane_g1

0xe9e3,	// (0x00029303) dt_sta_indi_pane_g2

0xe9ec,	// (0x0002930c) dt_sta_indi_pane_g3

0x0002,

0x002f,	// (0x0001a94f) dt_sta_indi_pane_g

0xe9f5,	// (0x00029315) dt_sta_signal_pane

0x8026,	// (0x00022946) bg_dt_sta_title_pane_ParamLimits

0x8026,	// (0x00022946) bg_dt_sta_title_pane

0xe9fe,	// (0x0002931e) dt_sta_title_pane_g1

0xea06,	// (0x00029326) dt_sta_title_pane_t1_ParamLimits

0xea06,	// (0x00029326) dt_sta_title_pane_t1

0x76c6,	// (0x00021fe6) bg_dt_sta_control_pane

0xea1b,	// (0x0002933b) dt_sta_controll_pane_g1

0xea24,	// (0x00029344) bg_dt_sta_title_pane_g1

0xea2d,	// (0x0002934d) bg_dt_sta_title_pane_g2

0xea36,	// (0x00029356) bg_dt_sta_title_pane_g3

0x0002,

0x0036,	// (0x0001a956) bg_dt_sta_title_pane_g

0xc0c0,	// (0x000269e0) bg_dt_sta_indi_pane_g1

0xea3f,	// (0x0002935f) dt_sta_signal_pane_g1

0xea47,	// (0x00029367) dt_sta_signal_pane_g2

0x0001,

0x003d,	// (0x0001a95d) dt_sta_signal_pane_g

0xea4f,	// (0x0002936f) dt_sta_battery_pane_g1

0xea58,	// (0x00029378) dt_sta_battery_pane_t1

0xc0c0,	// (0x000269e0) bg_dt_sta_control_pane_g1

0x8795,	// (0x000230b5) fep_china_uni_eep_pane

0x879d,	// (0x000230bd) fep_china_uni_entry_pane_ParamLimits

0x87ad,	// (0x000230cd) popup_fep_china_uni_window_g1_ParamLimits

0x87bd,	// (0x000230dd) popup_fep_china_uni_window_g2_ParamLimits

0x87bd,	// (0x000230dd) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x0002a055) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x0002a055) popup_fep_china_uni_window_g

0xea67,	// (0x00029387) fep_china_uni_eep_pane_g1

0xea6f,	// (0x0002938f) fep_china_uni_eep_pane_t1

0xe566,	// (0x00028e86) aid_touch_area_size_smil_player

0x9736,	// (0x00024056) lc0_clock_pane

0x9922,	// (0x00024242) status_pane_g5_ParamLimits

0x9922,	// (0x00024242) status_pane_g5

0x9186,	// (0x00023aa6) popup_keymap_window

0x98e0,	// (0x00024200) status_icon_pane

0xe6d2,	// (0x00028ff2) cell_ai5_widget_pane_g3_ParamLimits

0xe6f1,	// (0x00029011) cell_ai5_widget_pane_g4_ParamLimits

0xe6fd,	// (0x0002901d) cell_ai5_widget_pane_g5_ParamLimits

0xe721,	// (0x00029041) cell_ai5_widget_pane_g8_ParamLimits

0xe721,	// (0x00029041) cell_ai5_widget_pane_g8

0xe735,	// (0x00029055) cell_ai5_widget_pane_g9_ParamLimits

0xe735,	// (0x00029055) cell_ai5_widget_pane_g9

0xe749,	// (0x00029069) cell_ai5_widget_pane_g10_ParamLimits

0xe749,	// (0x00029069) cell_ai5_widget_pane_g10

0xea7e,	// (0x0002939e) status_icon_pane_g1

0x76c6,	// (0x00021fe6) bg_popup_sub_pane_cp13

0xea86,	// (0x000293a6) popup_keymap_window_t1

0x8f62,	// (0x00023882) control_pane_g6_ParamLimits

0x8f62,	// (0x00023882) control_pane_g6

0x8f6f,	// (0x0002388f) control_pane_g7_ParamLimits

0x8f6f,	// (0x0002388f) control_pane_g7

0x8f7c,	// (0x0002389c) control_pane_g8_ParamLimits

0x8f7c,	// (0x0002389c) control_pane_g8

0xe9a1,	// (0x000292c1) dt_sta_controll_pane_ParamLimits

0xe9ae,	// (0x000292ce) dt_sta_indi_pane_ParamLimits

0xe9bf,	// (0x000292df) dt_sta_title_pane_ParamLimits

0x7f5e,	// (0x0002287e) aid_size_touch_scroll_bar_cale

0x5e89,	// (0x000207a9) popup_discreet_window_ParamLimits

0x5e89,	// (0x000207a9) popup_discreet_window

0x5f11,	// (0x00020831) popup_sk_window

0xa160,	// (0x00024a80) bg_popup_sub_pane_cp28_ParamLimits

0xa160,	// (0x00024a80) bg_popup_sub_pane_cp28

0xea94,	// (0x000293b4) popup_discreet_window_g1_ParamLimits

0xea94,	// (0x000293b4) popup_discreet_window_g1

0xeab4,	// (0x000293d4) popup_discreet_window_t1_ParamLimits

0xeab4,	// (0x000293d4) popup_discreet_window_t1

0xead2,	// (0x000293f2) popup_discreet_window_t2_ParamLimits

0xead2,	// (0x000293f2) popup_discreet_window_t2

0x0002,

0x0042,	// (0x0001a962) popup_discreet_window_t_ParamLimits

0x0042,	// (0x0001a962) popup_discreet_window_t

0x765c,	// (0x00021f7c) popup_sk_window_g1

0x7666,	// (0x00021f86) popup_sk_window_g2

0x0001,

0xfe90,	// (0x0002a7b0) popup_sk_window_g

0xeb24,	// (0x00029444) popup_sk_window_t1

0xeb32,	// (0x00029452) popup_sk_window_t1_copy1

0xe6c2,	// (0x00028fe2) cell_ai5_widget_pane_g2_ParamLimits

0xe820,	// (0x00029140) cell_ai5_widget_pane_t9_ParamLimits

0xe820,	// (0x00029140) cell_ai5_widget_pane_t9

0x76c6,	// (0x00021fe6) main_fep_fshwr2_pane

0xeb40,	// (0x00029460) aid_fshwr2_btn_pane

0xeb48,	// (0x00029468) aid_fshwr2_syb_pane

0xeb50,	// (0x00029470) aid_fshwr2_txt_pane

0xeb58,	// (0x00029478) fshwr2_func_candi_pane

0xeb64,	// (0x00029484) fshwr2_hwr_syb_pane

0xeb70,	// (0x00029490) fshwr2_icf_pane

0x76c6,	// (0x00021fe6) fshwr2_icf_bg_pane

0xeb8e,	// (0x000294ae) fshwr2_icf_pane_t1_ParamLimits

0xeb8e,	// (0x000294ae) fshwr2_icf_pane_t1

0xc0c0,	// (0x000269e0) fshwr2_func_candi_pane_g1

0xeba5,	// (0x000294c5) fshwr2_func_candi_row_pane_ParamLimits

0xeba5,	// (0x000294c5) fshwr2_func_candi_row_pane

0xebb6,	// (0x000294d6) cell_fshwr2_syb_pane_ParamLimits

0xebb6,	// (0x000294d6) cell_fshwr2_syb_pane

0xc352,	// (0x00026c72) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc352,	// (0x00026c72) fshwr2_hwr_syb_pane_g1

0x76c6,	// (0x00021fe6) bg_popup_call_pane_cp01

0xebd0,	// (0x000294f0) fshwr2_func_candi_cell_pane_ParamLimits

0xebd0,	// (0x000294f0) fshwr2_func_candi_cell_pane

0xec01,	// (0x00029521) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec01,	// (0x00029521) fshwr2_func_candi_cell_bg_pane

0xec1b,	// (0x0002953b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec1b,	// (0x0002953b) fshwr2_func_candi_cell_pane_g1

0xec43,	// (0x00029563) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec43,	// (0x00029563) fshwr2_func_candi_cell_pane_t1

0x76c6,	// (0x00021fe6) bg_button_pane_cp08

0x8c8b,	// (0x000235ab) cell_fshwr2_syb_bg_pane

0xec56,	// (0x00029576) cell_fshwr2_syb_bg_pane_g1

0xec5e,	// (0x0002957e) cell_fshwr2_syb_bg_pane_t1

0x8026,	// (0x00022946) main_tmo_pane

0xac81,	// (0x000255a1) uni_indicator_pane_g1_ParamLimits

0xac96,	// (0x000255b6) uni_indicator_pane_g2_ParamLimits

0xacac,	// (0x000255cc) uni_indicator_pane_g3_ParamLimits

0xacc2,	// (0x000255e2) uni_indicator_pane_g4_ParamLimits

0xacc2,	// (0x000255e2) uni_indicator_pane_g4

0xacd6,	// (0x000255f6) uni_indicator_pane_g5_ParamLimits

0xacd6,	// (0x000255f6) uni_indicator_pane_g5

0xacea,	// (0x0002560a) uni_indicator_pane_g6_ParamLimits

0xacea,	// (0x0002560a) uni_indicator_pane_g6

0xf932,	// (0x0002a252) uni_indicator_pane_g_ParamLimits

0xd59a,	// (0x00027eba) popup_tmo_note_window_ParamLimits

0xd59a,	// (0x00027eba) popup_tmo_note_window

0x76c6,	// (0x00021fe6) fshwr2_bg_pane

0xec34,	// (0x00029554) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec34,	// (0x00029554) fshwr2_func_candi_cell_pane_g2

0x0001,

0x004e,	// (0x0001a96e) fshwr2_func_candi_cell_pane_g_ParamLimits

0x004e,	// (0x0001a96e) fshwr2_func_candi_cell_pane_g

0xc0c0,	// (0x000269e0) bg_popup_window_pane_cp01

0xec6d,	// (0x0002958d) bg_popup_window_pane_g1_cp01

0xec76,	// (0x00029596) bg_popup_window_pane_cp22_ParamLimits

0xec76,	// (0x00029596) bg_popup_window_pane_cp22

0xec84,	// (0x000295a4) listscroll_tmo_link_pane_ParamLimits

0xec84,	// (0x000295a4) listscroll_tmo_link_pane

0xecc4,	// (0x000295e4) popup_tmo_note_window_g1_ParamLimits

0xecc4,	// (0x000295e4) popup_tmo_note_window_g1

0xecd1,	// (0x000295f1) tmo_note_info_pane_ParamLimits

0xecd1,	// (0x000295f1) tmo_note_info_pane

0xeceb,	// (0x0002960b) list_tmo_note_info_pane_g1_ParamLimits

0xeceb,	// (0x0002960b) list_tmo_note_info_pane_g1

0xed02,	// (0x00029622) list_tmo_note_info_pane_g2_ParamLimits

0xed02,	// (0x00029622) list_tmo_note_info_pane_g2

0x0001,

0x0053,	// (0x0001a973) list_tmo_note_info_pane_g_ParamLimits

0x0053,	// (0x0001a973) list_tmo_note_info_pane_g

0xed1e,	// (0x0002963e) list_tmo_note_info_text_pane_ParamLimits

0xed1e,	// (0x0002963e) list_tmo_note_info_text_pane

0xed9f,	// (0x000296bf) list_tmo_link_pane

0xedac,	// (0x000296cc) scroll_pane_cp20

0xedb9,	// (0x000296d9) list_single_tmo_link_pane_ParamLimits

0xedb9,	// (0x000296d9) list_single_tmo_link_pane

0xedc9,	// (0x000296e9) list_single_tmo_link_pane_t1

0xedd7,	// (0x000296f7) list_tmo_note_info_text_pane_t1_ParamLimits

0xedd7,	// (0x000296f7) list_tmo_note_info_text_pane_t1

0x80ec,	// (0x00022a0c) aid_size_touch_scroll_bar_cp01_ParamLimits

0x80ec,	// (0x00022a0c) aid_size_touch_scroll_bar_cp01

0x522a,	// (0x0001fb4a) aid_size_touch_slider_marker

0x5ef9,	// (0x00020819) popup_settings_window_ParamLimits

0x5ef9,	// (0x00020819) popup_settings_window

0x53f9,	// (0x0001fd19) popup_candi_list_indi_window

0x95ea,	// (0x00023f0a) aid_touch_navi_pane_ParamLimits

0x6e6f,	// (0x0002178f) rs_clock_indi_pane

0x6e78,	// (0x00021798) sctrl_sk_bottom_pane_ParamLimits

0x6e89,	// (0x000217a9) sctrl_sk_top_pane_ParamLimits

0x6f70,	// (0x00021890) popup_fep_tooltip_window

0xe686,	// (0x00028fa6) aid_size_cell_widget_grid_ParamLimits

0xe6b6,	// (0x00028fd6) cell_ai5_widget_pane_g1_ParamLimits

0xe6b6,	// (0x00028fd6) cell_ai5_widget_pane_g1

0xe709,	// (0x00029029) cell_ai5_widget_pane_g6_ParamLimits

0xe715,	// (0x00029035) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe32,	// (0x0002a752) cell_ai5_widget_pane_g_ParamLimits

0xfe32,	// (0x0002a752) cell_ai5_widget_pane_g

0xe844,	// (0x00029164) cell_ai5_widget_pane_t10_ParamLimits

0xe844,	// (0x00029164) cell_ai5_widget_pane_t10

0xe85a,	// (0x0002917a) grid_ai5_widget_pane_ParamLimits

0xe8fc,	// (0x0002921c) cell_contacts_ai5_widget_pane_ParamLimits

0xe8fc,	// (0x0002921c) cell_contacts_ai5_widget_pane

0xeae7,	// (0x00029407) popup_discreet_window_t3_ParamLimits

0xeae7,	// (0x00029407) popup_discreet_window_t3

0xeb7a,	// (0x0002949a) popup_fshwr2_char_preview_window_ParamLimits

0xeb7a,	// (0x0002949a) popup_fshwr2_char_preview_window

0xed3c,	// (0x0002965c) tmo_note_info_pane_t1

0xed51,	// (0x00029671) tmo_note_info_pane_t2

0xed66,	// (0x00029686) tmo_note_info_pane_t3

0xed7b,	// (0x0002969b) tmo_note_info_pane_t4

0xed8d,	// (0x000296ad) tmo_note_info_pane_t5

0x0004,

0x0058,	// (0x0001a978) tmo_note_info_pane_t

0xed9f,	// (0x000296bf) list_tmo_link_pane_ParamLimits

0xedac,	// (0x000296cc) scroll_pane_cp20_ParamLimits

0x76c6,	// (0x00021fe6) bg_popup_fep_char_preview_window_cp01

0xedf0,	// (0x00029710) popup_fshwr2_char_preview_window_t1

0xedfe,	// (0x0002971e) popup_candi_list_indi_window_g1

0xee07,	// (0x00029727) bg_cell_contacts_ai5_widget_pane

0xee13,	// (0x00029733) cell_contacts_ai5_widget_pane_g1

0xee27,	// (0x00029747) cell_contacts_ai5_widget_pane_g2

0xee36,	// (0x00029756) cell_contacts_ai5_widget_pane_g3

0x0002,

0x0063,	// (0x0001a983) cell_contacts_ai5_widget_pane_g

0xee49,	// (0x00029769) cell_contacts_ai5_widget_pane_t1

0x8026,	// (0x00022946) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeec3,	// (0x000297e3) settings_container_pane

0x8c8b,	// (0x000235ab) listscroll_set_pane_copy1

0xb7d3,	// (0x000260f3) scroll_pane_cp121_copy1

0xeecf,	// (0x000297ef) set_content_pane_copy1

0xeed7,	// (0x000297f7) aid_height_set_list_copy1_ParamLimits

0xeed7,	// (0x000297f7) aid_height_set_list_copy1

0xaee2,	// (0x00025802) aid_size_parent_copy1_ParamLimits

0xaee2,	// (0x00025802) aid_size_parent_copy1

0xeee3,	// (0x00029803) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeee3,	// (0x00029803) button_value_adjust_pane_cp6_copy1

0x8ff1,	// (0x00023911) list_highlight_pane_cp2_copy1_ParamLimits

0x8ff1,	// (0x00023911) list_highlight_pane_cp2_copy1

0xeef7,	// (0x00029817) list_set_pane_copy1_ParamLimits

0xeef7,	// (0x00029817) list_set_pane_copy1

0xee5e,	// (0x0002977e) main_pane_set_t1_copy1_ParamLimits

0xee5e,	// (0x0002977e) main_pane_set_t1_copy1

0xee98,	// (0x000297b8) main_pane_set_t2_copy1_ParamLimits

0xee98,	// (0x000297b8) main_pane_set_t2_copy1

0xefa4,	// (0x000298c4) main_pane_set_t3_copy1

0xefb2,	// (0x000298d2) main_pane_set_t4_copy1

0xeeb7,	// (0x000297d7) set_content_pane_g1_copy1_ParamLimits

0xeeb7,	// (0x000297d7) set_content_pane_g1_copy1

0xefc0,	// (0x000298e0) setting_code_pane_copy1

0xefca,	// (0x000298ea) setting_slider_graphic_pane_copy1

0xefca,	// (0x000298ea) setting_slider_pane_copy1

0xefca,	// (0x000298ea) setting_text_pane_copy1

0xefd4,	// (0x000298f4) setting_volume_pane_copy1

0xefdd,	// (0x000298fd) settings_code_pane_cp2_copy1

0xefe5,	// (0x00029905) settings_code_pane_cp_copy1_ParamLimits

0xefe5,	// (0x00029905) settings_code_pane_cp_copy1

0xeff9,	// (0x00029919) volume_set_pane_copy1

0xf001,	// (0x00029921) volume_set_pane_g10_copy1

0xf009,	// (0x00029929) volume_set_pane_g1_copy1

0xf011,	// (0x00029931) volume_set_pane_g2_copy1

0xf019,	// (0x00029939) volume_set_pane_g3_copy1

0xf021,	// (0x00029941) volume_set_pane_g4_copy1

0xf029,	// (0x00029949) volume_set_pane_g5_copy1

0xf031,	// (0x00029951) volume_set_pane_g6_copy1

0xf039,	// (0x00029959) volume_set_pane_g7_copy1

0xf041,	// (0x00029961) volume_set_pane_g8_copy1

0xf049,	// (0x00029969) volume_set_pane_g9_copy1

0x77ba,	// (0x000220da) bg_set_opt_pane_cp_copy1_ParamLimits

0x77ba,	// (0x000220da) bg_set_opt_pane_cp_copy1

0xf051,	// (0x00029971) setting_slider_pane_t1_copy1_ParamLimits

0xf051,	// (0x00029971) setting_slider_pane_t1_copy1

0xf06f,	// (0x0002998f) setting_slider_pane_t2_copy1_ParamLimits

0xf06f,	// (0x0002998f) setting_slider_pane_t2_copy1

0xf089,	// (0x000299a9) setting_slider_pane_t3_copy1_ParamLimits

0xf089,	// (0x000299a9) setting_slider_pane_t3_copy1

0xf0a1,	// (0x000299c1) slider_set_pane_copy1_ParamLimits

0xf0a1,	// (0x000299c1) slider_set_pane_copy1

0x808d,	// (0x000229ad) set_opt_bg_pane_g1_copy2

0x8095,	// (0x000229b5) set_opt_bg_pane_g2_copy2

0xf0b7,	// (0x000299d7) set_opt_bg_pane_g3_copy2

0x80a5,	// (0x000229c5) set_opt_bg_pane_g4_copy2

0x80ad,	// (0x000229cd) set_opt_bg_pane_g5_copy2

0x80b5,	// (0x000229d5) set_opt_bg_pane_g6_copy2

0xf0c1,	// (0x000299e1) set_opt_bg_pane_g7_copy2

0xf0c9,	// (0x000299e9) set_opt_bg_pane_g8_copy2

0xf0d3,	// (0x000299f3) set_opt_bg_pane_g9_copy2

0x7670,	// (0x00021f90) aid_size_touch_slider_mark_copy1_ParamLimits

0x7670,	// (0x00021f90) aid_size_touch_slider_mark_copy1

0xf0dd,	// (0x000299fd) slider_set_pane_g1_copy1

0x7684,	// (0x00021fa4) slider_set_pane_g2_copy1

0x695f,	// (0x0002127f) slider_set_pane_g3_copy1_ParamLimits

0x695f,	// (0x0002127f) slider_set_pane_g3_copy1

0x6973,	// (0x00021293) slider_set_pane_g4_copy1_ParamLimits

0x6973,	// (0x00021293) slider_set_pane_g4_copy1

0x698b,	// (0x000212ab) slider_set_pane_g5_copy1_ParamLimits

0x698b,	// (0x000212ab) slider_set_pane_g5_copy1

0x695f,	// (0x0002127f) slider_set_pane_g6_copy1_ParamLimits

0x695f,	// (0x0002127f) slider_set_pane_g6_copy1

0x768c,	// (0x00021fac) slider_set_pane_g7_copy1_ParamLimits

0x768c,	// (0x00021fac) slider_set_pane_g7_copy1

0x76da,	// (0x00021ffa) bg_set_opt_pane_cp2_copy1

0xf0e6,	// (0x00029a06) setting_slider_graphic_pane_g1_copy1

0xf0ef,	// (0x00029a0f) setting_slider_graphic_pane_t1_copy1

0xf0ff,	// (0x00029a1f) setting_slider_graphic_pane_t2_copy1

0xf10f,	// (0x00029a2f) slider_set_pane_cp_copy1

0xf11f,	// (0x00029a3f) input_focus_pane_cp1_copy1

0xf128,	// (0x00029a48) list_set_text_pane_copy1

0xf130,	// (0x00029a50) setting_text_pane_g1_copy1

0x4c0a,	// (0x0001f52a) set_text_pane_t1_copy1

0xf11f,	// (0x00029a3f) input_focus_pane_cp2_copy1

0xf130,	// (0x00029a50) setting_code_pane_g1_copy1

0xf139,	// (0x00029a59) setting_code_pane_t1_copy1

0xf147,	// (0x00029a67) list_set_graphic_pane_copy1

0x76da,	// (0x00021ffa) bg_set_opt_pane_cp4_copy1

0x8991,	// (0x000232b1) list_set_graphic_pane_g1_copy1_ParamLimits

0x8991,	// (0x000232b1) list_set_graphic_pane_g1_copy1

0xf159,	// (0x00029a79) list_set_graphic_pane_g2_copy1

0x89a9,	// (0x000232c9) list_set_graphic_pane_t1_copy1_ParamLimits

0x89a9,	// (0x000232c9) list_set_graphic_pane_t1_copy1

0xc0c0,	// (0x000269e0) rs_clock_indi_pane_g1

0xf161,	// (0x00029a81) rs_clock_indi_pane_t1

0xe9d2,	// (0x000292f2) rs_indi_pane

0xf16f,	// (0x00029a8f) rs_indi_pane_g1

0xf178,	// (0x00029a98) rs_indi_pane_g2

0xf181,	// (0x00029aa1) rs_indi_pane_g3

0x0002,

0x006a,	// (0x0001a98a) rs_indi_pane_g

0x8c8b,	// (0x000235ab) bg_popup_preview_window_pane_cp03

0xf18a,	// (0x00029aaa) popup_fep_tooltip_window_t1

0xcd3b,	// (0x0002765b) popup_note2_window_g2_ParamLimits

0xcd3b,	// (0x0002765b) popup_note2_window_g2

0x0001,

0xfc64,	// (0x0002a584) popup_note2_window_g_ParamLimits

0xfc64,	// (0x0002a584) popup_note2_window_g

0xd236,	// (0x00027b56) bg_popup_sub_pane_cp11_ParamLimits

0xd243,	// (0x00027b63) cell_ai3_links_pane_g1_ParamLimits

0xd25a,	// (0x00027b7a) cell_ai3_links_pane_t1

0x4c0a,	// (0x0001f52a) set_text_pane_t1_copy1_ParamLimits

0x8b9c,	// (0x000234bc) cell_graphic_popup_pane_cp2_ParamLimits

0x8b9c,	// (0x000234bc) cell_graphic_popup_pane_cp2

0xf198,	// (0x00029ab8) cell_graphic_popup_pane_g1_cp2

0x7d71,	// (0x00022691) cell_graphic_popup_pane_g2_cp2

0xf1a0,	// (0x00029ac0) cell_graphic_popup_pane_g3_cp2

0xf1a8,	// (0x00029ac8) cell_graphic_popup_pane_t2_cp2

0x7d82,	// (0x000226a2) grid_highlight_pane_cp3_cp2

0x83d0,	// (0x00022cf0) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8026,	// (0x00022946) main_tmo_pane_ParamLimits

0xd58e,	// (0x00027eae) popup_tmo_big_image_note_window

0xe6a6,	// (0x00028fc6) cell_ai5_widget_list_pane

0xe6ae,	// (0x00028fce) cell_ai5_widget_lrg_icon_pane

0xed3c,	// (0x0002965c) tmo_note_info_pane_t1_ParamLimits

0xed51,	// (0x00029671) tmo_note_info_pane_t2_ParamLimits

0xed66,	// (0x00029686) tmo_note_info_pane_t3_ParamLimits

0xed7b,	// (0x0002969b) tmo_note_info_pane_t4_ParamLimits

0xed8d,	// (0x000296ad) tmo_note_info_pane_t5_ParamLimits

0x0058,	// (0x0001a978) tmo_note_info_pane_t_ParamLimits

0xeec3,	// (0x000297e3) settings_container_pane_ParamLimits

0xf117,	// (0x00029a37) indicator_popup_pane_cp5

0xf117,	// (0x00029a37) indicator_popup_pane_cp6

0xf147,	// (0x00029a67) list_set_graphic_pane_copy1_ParamLimits

0x76c6,	// (0x00021fe6) bg_popup_window_pane_cp23

0xf1b6,	// (0x00029ad6) popup_tmo_big_image_note_window_g1

0xf1c0,	// (0x00029ae0) popup_tmo_big_image_note_window_t1

0xf1d0,	// (0x00029af0) popup_tmo_big_image_note_window_t2

0xf1e0,	// (0x00029b00) popup_tmo_big_image_note_window_t3

0x0002,

0x0071,	// (0x0001a991) popup_tmo_big_image_note_window_t

0xf1f0,	// (0x00029b10) cell_ai5_widget_lrg_icon_pane_g1

0xf1f8,	// (0x00029b18) cell_ai5_widget_lrg_icon_pane_t1

0xf206,	// (0x00029b26) cell_ai5_widget_list_row_pane_ParamLimits

0xf206,	// (0x00029b26) cell_ai5_widget_list_row_pane

0xf21f,	// (0x00029b3f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf21f,	// (0x00029b3f) cell_ai5_widget_list_row_pane_g1

0xf22c,	// (0x00029b4c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf22c,	// (0x00029b4c) cell_ai5_widget_list_row_pane_t1

0xf244,	// (0x00029b64) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf244,	// (0x00029b64) cell_ai5_widget_list_row_pane_t2

0x0001,

0x0078,	// (0x0001a998) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0078,	// (0x0001a998) cell_ai5_widget_list_row_pane_t

0x76c6,	// (0x00021fe6) main_fep_vtchi_ss_pane

0xf256,	// (0x00029b76) popup_fep_char_pre_window

0xf25e,	// (0x00029b7e) popup_fep_ituss_window

0xf27f,	// (0x00029b9f) popup_fep_vkbss_window

0xf29e,	// (0x00029bbe) grid_vkbss_keypad_pane_ParamLimits

0xf29e,	// (0x00029bbe) grid_vkbss_keypad_pane

0xf2ae,	// (0x00029bce) ituss_keypad_pane

0xf2c7,	// (0x00029be7) aid_vkbss_key_offset_ParamLimits

0xf2c7,	// (0x00029be7) aid_vkbss_key_offset

0xf2d3,	// (0x00029bf3) cell_vkbss_key_pane_ParamLimits

0xf2d3,	// (0x00029bf3) cell_vkbss_key_pane

0xf2e9,	// (0x00029c09) bg_cell_vkbss_key_g1_ParamLimits

0xf2e9,	// (0x00029c09) bg_cell_vkbss_key_g1

0xf2f5,	// (0x00029c15) cell_vkbss_key_3p_pane_ParamLimits

0xf2f5,	// (0x00029c15) cell_vkbss_key_3p_pane

0xf30f,	// (0x00029c2f) cell_vkbss_key_g1_ParamLimits

0xf30f,	// (0x00029c2f) cell_vkbss_key_g1

0xf329,	// (0x00029c49) cell_vkbss_key_t1_ParamLimits

0xf329,	// (0x00029c49) cell_vkbss_key_t1

0xf354,	// (0x00029c74) cell_ituss_key_pane_ParamLimits

0xf354,	// (0x00029c74) cell_ituss_key_pane

0xf364,	// (0x00029c84) bg_cell_ituss_key_g1_ParamLimits

0xf364,	// (0x00029c84) bg_cell_ituss_key_g1

0xf370,	// (0x00029c90) cell_ituss_key_pane_g1_ParamLimits

0xf370,	// (0x00029c90) cell_ituss_key_pane_g1

0xf37c,	// (0x00029c9c) cell_ituss_key_pane_g2_ParamLimits

0xf37c,	// (0x00029c9c) cell_ituss_key_pane_g2

0x0001,

0x007d,	// (0x0001a99d) cell_ituss_key_pane_g_ParamLimits

0x007d,	// (0x0001a99d) cell_ituss_key_pane_g

0xf395,	// (0x00029cb5) cell_ituss_key_t1_ParamLimits

0xf395,	// (0x00029cb5) cell_ituss_key_t1

0xf3c3,	// (0x00029ce3) cell_ituss_key_t2_ParamLimits

0xf3c3,	// (0x00029ce3) cell_ituss_key_t2

0xf3f4,	// (0x00029d14) cell_ituss_key_t3_ParamLimits

0xf3f4,	// (0x00029d14) cell_ituss_key_t3

0xf425,	// (0x00029d45) cell_ituss_key_t4_ParamLimits

0xf425,	// (0x00029d45) cell_ituss_key_t4

0x0003,

0x0082,	// (0x0001a9a2) cell_ituss_key_t_ParamLimits

0x0082,	// (0x0001a9a2) cell_ituss_key_t

0xf456,	// (0x00029d76) cell_vkbss_key_3p_pane_g1

0xf45e,	// (0x00029d7e) cell_vkbss_key_3p_pane_g2

0xf466,	// (0x00029d86) cell_vkbss_key_3p_pane_g3

0x0002,

0x008b,	// (0x0001a9ab) cell_vkbss_key_3p_pane_g

0x76c6,	// (0x00021fe6) bg_popup_fep_char_preview_window_cp02

0xf46e,	// (0x00029d8e) popup_fep_char_pre_window_t1

0xe67c,	// (0x00028f9c) main_ai5_sk_pane

0xee07,	// (0x00029727) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee13,	// (0x00029733) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee27,	// (0x00029747) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee36,	// (0x00029756) cell_contacts_ai5_widget_pane_g3_ParamLimits

0x0063,	// (0x0001a983) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee49,	// (0x00029769) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8026,	// (0x00022946) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf47d,	// (0x00029d9d) main_ai5_sk_pane_g1

0x9f99,	// (0x000248b9) popup_query_code_window_g1

0xf274,	// (0x00029b94) popup_fep_vkb_icf_pane

0xf288,	// (0x00029ba8) popup_fep_vtchi_icf_pane

0x8026,	// (0x00022946) bg_icf_pane

0xf495,	// (0x00029db5) list_vkb_icf_pane

0x8026,	// (0x00022946) bg_icf_pane_cp01

0xf4ad,	// (0x00029dcd) vtchi_icf_list_pane

0xf4bd,	// (0x00029ddd) list_vkb_icf_pane_t1_ParamLimits

0xf4bd,	// (0x00029ddd) list_vkb_icf_pane_t1

0xf4d4,	// (0x00029df4) vtchi_icf_list_pane_t1_ParamLimits

0xf4d4,	// (0x00029df4) vtchi_icf_list_pane_t1

0xf25e,	// (0x00029b7e) popup_fep_ituss_window_ParamLimits

0xf288,	// (0x00029ba8) popup_fep_vtchi_icf_pane_ParamLimits

0xf2ae,	// (0x00029bce) ituss_keypad_pane_ParamLimits

0xf2be,	// (0x00029bde) ituss_sks_pane

0x8026,	// (0x00022946) bg_icf_pane_ParamLimits

0xf486,	// (0x00029da6) icf_edit_indi_pane_ParamLimits

0xf486,	// (0x00029da6) icf_edit_indi_pane

0xf495,	// (0x00029db5) list_vkb_icf_pane_ParamLimits

0x8026,	// (0x00022946) bg_icf_pane_cp01_ParamLimits

0xf4a1,	// (0x00029dc1) icf_edit_indi_pane_cp01_ParamLimits

0xf4a1,	// (0x00029dc1) icf_edit_indi_pane_cp01

0xf4b5,	// (0x00029dd5) vtchi_query_pane

0xc352,	// (0x00026c72) icf_edit_indi_pane_g1_ParamLimits

0xc352,	// (0x00026c72) icf_edit_indi_pane_g1

0xf4f0,	// (0x00029e10) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x00029e10) icf_edit_indi_pane_g2

0x0001,

0xfe95,	// (0x0002a7b5) icf_edit_indi_pane_g_ParamLimits

0xfe95,	// (0x0002a7b5) icf_edit_indi_pane_g

0xf4fc,	// (0x00029e1c) icf_edit_indi_pane_t1

0xf50a,	// (0x00029e2a) bg_input_focus_pane_cp042

0x7f55,	// (0x00022875) vtchi_button_pane

0xf513,	// (0x00029e33) vtchi_query_pane_t1

0xf521,	// (0x00029e41) vtchi_query_pane_t2

0xf52f,	// (0x00029e4f) vtchi_query_pane_t3

0x0002,

0x0097,	// (0x0001a9b7) vtchi_query_pane_t

0x76c6,	// (0x00021fe6) bg_button_pane_cp13

0xf53d,	// (0x00029e5d) vtchi_button_pane_g1

0xda95,	// (0x000283b5) ituss_sks_pane_g1

0xf545,	// (0x00029e65) ituss_sks_pane_g2

0x0001,

0x009e,	// (0x0001a9be) ituss_sks_pane_g

0xf54e,	// (0x00029e6e) ituss_sks_pane_t1

0xf55c,	// (0x00029e7c) ituss_sks_pane_t2

0x0001,

0x00a3,	// (0x0001a9c3) ituss_sks_pane_t

0xbb22,	// (0x00026442) indicator_nsta_pane_cp_g1

0xbb2b,	// (0x0002644b) indicator_nsta_pane_cp_g2

0xbb33,	// (0x00026453) indicator_nsta_pane_cp_g3

0xbb3b,	// (0x0002645b) indicator_nsta_pane_cp_g4

0xbb43,	// (0x00026463) indicator_nsta_pane_cp_g5

0xbb4b,	// (0x0002646b) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x0002a3ce) indicator_nsta_pane_cp_g

0xe275,	// (0x00028b95) cell_graphic2_pane_t2_ParamLimits

0xe275,	// (0x00028b95) cell_graphic2_pane_t2

0x0001,

0xfdbb,	// (0x0002a6db) cell_graphic2_pane_t_ParamLimits

0xfdbb,	// (0x0002a6db) cell_graphic2_pane_t

0xe2a2,	// (0x00028bc2) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
