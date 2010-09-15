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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001040e };

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
0xc7c9,	// (0x0001cbd7) Screen

0xc7d5,	// (0x0001cbe3) application_window_ParamLimits

0xc7d5,	// (0x0001cbe3) application_window

0xeba8,	// (0x0001efb6) screen_g1

0xb662,	// (0x0001ba70) area_bottom_pane_ParamLimits

0xb662,	// (0x0001ba70) area_bottom_pane

0xf382,	// (0x0001f790) area_top_pane_ParamLimits

0xf382,	// (0x0001f790) area_top_pane

0xf420,	// (0x0001f82e) main_pane_ParamLimits

0xf420,	// (0x0001f82e) main_pane

0x227e,	// (0x0001268c) misc_graphics

0xd38b,	// (0x0001d799) battery_pane_ParamLimits

0xd38b,	// (0x0001d799) battery_pane

0x51eb,	// (0x000155f9) bg_status_flat_pane_g8

0x51f3,	// (0x00015601) bg_status_flat_pane_g9

0x44d0,	// (0x000148de) context_pane_ParamLimits

0x44d0,	// (0x000148de) context_pane

0xd4f6,	// (0x0001d904) navi_pane_ParamLimits

0xd4f6,	// (0x0001d904) navi_pane

0xd574,	// (0x0001d982) signal_pane_ParamLimits

0xd574,	// (0x0001d982) signal_pane

0x0008,

0xf84a,	// (0x0001fc58) bg_status_flat_pane_g

0xd604,	// (0x0001da12) status_pane_g1_ParamLimits

0xd604,	// (0x0001da12) status_pane_g1

0xd61a,	// (0x0001da28) status_pane_g2_ParamLimits

0xd61a,	// (0x0001da28) status_pane_g2

0x46f7,	// (0x00014b05) status_pane_g3_ParamLimits

0x46f7,	// (0x00014b05) status_pane_g3

0x0004,

0xf776,	// (0x0001fb84) status_pane_g_ParamLimits

0xf776,	// (0x0001fb84) status_pane_g

0xd626,	// (0x0001da34) title_pane_ParamLimits

0xd626,	// (0x0001da34) title_pane

0xd689,	// (0x0001da97) uni_indicator_pane_ParamLimits

0xd689,	// (0x0001da97) uni_indicator_pane

0x4328,	// (0x00014736) bg_list_pane_ParamLimits

0x4328,	// (0x00014736) bg_list_pane

0x4348,	// (0x00014756) find_pane

0x49ba,	// (0x00014dc8) listscroll_app_pane_ParamLimits

0x49ba,	// (0x00014dc8) listscroll_app_pane

0x435c,	// (0x0001476a) listscroll_form_pane

0x0692,	// (0x00010aa0) listscroll_gen_pane_ParamLimits

0x0692,	// (0x00010aa0) listscroll_gen_pane

0x06a6,	// (0x00010ab4) listscroll_set_pane

0x5d7e,	// (0x0001618c) main_idle_act_pane

0x4024,	// (0x00014432) main_idle_trad_pane

0x4024,	// (0x00014432) main_list_empty_pane

0x4350,	// (0x0001475e) main_midp_pane

0x4376,	// (0x00014784) main_pane_g1_ParamLimits

0x4376,	// (0x00014784) main_pane_g1

0xb9bf,	// (0x0001bdcd) popup_ai_message_window_ParamLimits

0xb9bf,	// (0x0001bdcd) popup_ai_message_window

0xba50,	// (0x0001be5e) popup_fep_china_uni_window_ParamLimits

0xba50,	// (0x0001be5e) popup_fep_china_uni_window

0x07be,	// (0x00010bcc) popup_fep_japan_candidate_window_ParamLimits

0x07be,	// (0x00010bcc) popup_fep_japan_candidate_window

0x07de,	// (0x00010bec) popup_fep_japan_predictive_window_ParamLimits

0x07de,	// (0x00010bec) popup_fep_japan_predictive_window

0xbaac,	// (0x0001beba) popup_find_window

0xbac9,	// (0x0001bed7) popup_grid_graphic_window_ParamLimits

0xbac9,	// (0x0001bed7) popup_grid_graphic_window

0x0847,	// (0x00010c55) popup_large_graphic_colour_window

0xbb6d,	// (0x0001bf7b) popup_menu_window_ParamLimits

0xbb6d,	// (0x0001bf7b) popup_menu_window

0xbd3f,	// (0x0001c14d) popup_note_image_window

0xbd05,	// (0x0001c113) popup_note_wait_window_ParamLimits

0xbd05,	// (0x0001c113) popup_note_wait_window

0xbd57,	// (0x0001c165) popup_note_window_ParamLimits

0xbd57,	// (0x0001c165) popup_note_window

0xbdfd,	// (0x0001c20b) popup_query_code_window_ParamLimits

0xbdfd,	// (0x0001c20b) popup_query_code_window

0x0a8f,	// (0x00010e9d) popup_query_data_code_window_ParamLimits

0x0a8f,	// (0x00010e9d) popup_query_data_code_window

0xbe37,	// (0x0001c245) popup_query_data_window_ParamLimits

0xbe37,	// (0x0001c245) popup_query_data_window

0xbeb9,	// (0x0001c2c7) popup_query_sat_info_window_ParamLimits

0xbeb9,	// (0x0001c2c7) popup_query_sat_info_window

0xbf50,	// (0x0001c35e) popup_snote_single_graphic_window_ParamLimits

0xbf50,	// (0x0001c35e) popup_snote_single_graphic_window

0xbf50,	// (0x0001c35e) popup_snote_single_text_window_ParamLimits

0xbf50,	// (0x0001c35e) popup_snote_single_text_window

0x0b16,	// (0x00010f24) popup_sub_window_general

0x0c46,	// (0x00011054) popup_window_general_ParamLimits

0x0c46,	// (0x00011054) popup_window_general

0x438c,	// (0x0001479a) power_save_pane

0xb840,	// (0x0001bc4e) control_pane_g1_ParamLimits

0xb840,	// (0x0001bc4e) control_pane_g1

0xb869,	// (0x0001bc77) control_pane_g2_ParamLimits

0xb869,	// (0x0001bc77) control_pane_g2

0x42eb,	// (0x000146f9) control_pane_g3_ParamLimits

0x42eb,	// (0x000146f9) control_pane_g3

0x0007,

0xf75e,	// (0x0001fb6c) control_pane_g_ParamLimits

0xf75e,	// (0x0001fb6c) control_pane_g

0xb8aa,	// (0x0001bcb8) control_pane_t1_ParamLimits

0xb8aa,	// (0x0001bcb8) control_pane_t1

0xb912,	// (0x0001bd20) control_pane_t2_ParamLimits

0xb912,	// (0x0001bd20) control_pane_t2

0x0002,

0xf76f,	// (0x0001fb7d) control_pane_t_ParamLimits

0xf76f,	// (0x0001fb7d) control_pane_t

0x4210,	// (0x0001461e) navi_navi_volume_pane_cp1

0x4218,	// (0x00014626) status_small_icon_pane

0x4220,	// (0x0001462e) status_small_pane_g1_ParamLimits

0x4220,	// (0x0001462e) status_small_pane_g1

0x4254,	// (0x00014662) status_small_pane_g2_ParamLimits

0x4254,	// (0x00014662) status_small_pane_g2

0x4260,	// (0x0001466e) status_small_pane_g3_ParamLimits

0x4260,	// (0x0001466e) status_small_pane_g3

0xd2a7,	// (0x0001d6b5) status_small_pane_g4_ParamLimits

0xd2a7,	// (0x0001d6b5) status_small_pane_g4

0xd2b5,	// (0x0001d6c3) status_small_pane_g5_ParamLimits

0xd2b5,	// (0x0001d6c3) status_small_pane_g5

0x4286,	// (0x00014694) status_small_pane_g6_ParamLimits

0x4286,	// (0x00014694) status_small_pane_g6

0x0007,

0xf74d,	// (0x0001fb5b) status_small_pane_g_ParamLimits

0xf74d,	// (0x0001fb5b) status_small_pane_g

0x42b5,	// (0x000146c3) status_small_pane_t1

0xd2cb,	// (0x0001d6d9) status_small_wait_pane_ParamLimits

0xd2cb,	// (0x0001d6d9) status_small_wait_pane

0xd137,	// (0x0001d545) aid_levels_signal_ParamLimits

0xd137,	// (0x0001d545) aid_levels_signal

0xd14f,	// (0x0001d55d) signal_pane_g1_ParamLimits

0xd14f,	// (0x0001d55d) signal_pane_g1

0xd16a,	// (0x0001d578) signal_pane_g2_ParamLimits

0xd16a,	// (0x0001d578) signal_pane_g2

0x0003,

0xf6de,	// (0x0001faec) signal_pane_g_ParamLimits

0xf6de,	// (0x0001faec) signal_pane_g

0x3a74,	// (0x00013e82) context_pane_g1

0xc7e5,	// (0x0001cbf3) title_pane_g1

0xc81c,	// (0x0001cc2a) title_pane_t1

0x2326,	// (0x00012734) title_pane_t2

0x234c,	// (0x0001275a) title_pane_t3

0x0002,

0xf532,	// (0x0001f940) title_pane_t

0xd6b1,	// (0x0001dabf) aid_levels_battery_ParamLimits

0xd6b1,	// (0x0001dabf) aid_levels_battery

0xd6cd,	// (0x0001dadb) battery_pane_g1_ParamLimits

0xd6cd,	// (0x0001dadb) battery_pane_g1

0xd6ea,	// (0x0001daf8) battery_pane_g2_ParamLimits

0xd6ea,	// (0x0001daf8) battery_pane_g2

0x0001,

0xf781,	// (0x0001fb8f) battery_pane_g_ParamLimits

0xf781,	// (0x0001fb8f) battery_pane_g

0xd8c1,	// (0x0001dccf) uni_indicator_pane_g1

0xd8d7,	// (0x0001dce5) uni_indicator_pane_g2

0xd8ed,	// (0x0001dcfb) uni_indicator_pane_g3

0x0005,

0xf8f2,	// (0x0001fd00) uni_indicator_pane_g

0x3e99,	// (0x000142a7) navi_icon_pane_ParamLimits

0x3e99,	// (0x000142a7) navi_icon_pane

0x3de2,	// (0x000141f0) navi_midp_pane

0x3eb5,	// (0x000142c3) navi_navi_pane

0x3ebf,	// (0x000142cd) navi_text_pane_ParamLimits

0x3ebf,	// (0x000142cd) navi_text_pane

0xeba8,	// (0x0001efb6) status_small_wait_pane_g1

0x27bb,	// (0x00012bc9) status_small_wait_pane_g2

0x0001,

0xf8ed,	// (0x0001fcfb) status_small_wait_pane_g

0x5846,	// (0x00015c54) navi_navi_icon_text_pane

0x584e,	// (0x00015c5c) navi_navi_pane_g1_ParamLimits

0x584e,	// (0x00015c5c) navi_navi_pane_g1

0x5860,	// (0x00015c6e) navi_navi_pane_g2_ParamLimits

0x5860,	// (0x00015c6e) navi_navi_pane_g2

0x0001,

0xf8bb,	// (0x0001fcc9) navi_navi_pane_g_ParamLimits

0xf8bb,	// (0x0001fcc9) navi_navi_pane_g

0x5872,	// (0x00015c80) navi_navi_tabs_pane

0x587b,	// (0x00015c89) navi_navi_text_pane

0x5846,	// (0x00015c54) navi_navi_volume_pane

0x5822,	// (0x00015c30) navi_text_pane_t1

0x5816,	// (0x00015c24) navi_icon_pane_g1

0x5769,	// (0x00015b77) navi_navi_text_pane_t1

0x0f5e,	// (0x0001136c) navi_navi_volume_pane_g1

0x0f66,	// (0x00011374) volume_small_pane

0x56cf,	// (0x00015add) navi_navi_icon_text_pane_g1

0x56d7,	// (0x00015ae5) navi_navi_icon_text_pane_t1

0x3eb5,	// (0x000142c3) navi_tabs_2_long_pane

0x3eb5,	// (0x000142c3) navi_tabs_2_pane

0x3eb5,	// (0x000142c3) navi_tabs_3_long_pane

0x3eb5,	// (0x000142c3) navi_tabs_3_pane

0x3eb5,	// (0x000142c3) navi_tabs_4_pane

0x0f3e,	// (0x0001134c) tabs_2_active_pane_ParamLimits

0x0f3e,	// (0x0001134c) tabs_2_active_pane

0x0f4e,	// (0x0001135c) tabs_2_passive_pane_ParamLimits

0x0f4e,	// (0x0001135c) tabs_2_passive_pane

0x0f0c,	// (0x0001131a) tabs_3_active_pane_ParamLimits

0x0f0c,	// (0x0001131a) tabs_3_active_pane

0x0f1c,	// (0x0001132a) tabs_3_passive_pane_ParamLimits

0x0f1c,	// (0x0001132a) tabs_3_passive_pane

0x0f2d,	// (0x0001133b) tabs_3_passive_pane_cp_ParamLimits

0x0f2d,	// (0x0001133b) tabs_3_passive_pane_cp

0x0ec8,	// (0x000112d6) tabs_4_active_pane_ParamLimits

0x0ec8,	// (0x000112d6) tabs_4_active_pane

0x0ed9,	// (0x000112e7) tabs_4_passive_pane_ParamLimits

0x0ed9,	// (0x000112e7) tabs_4_passive_pane

0x0eea,	// (0x000112f8) tabs_4_passive_pane_cp_ParamLimits

0x0eea,	// (0x000112f8) tabs_4_passive_pane_cp

0x0efb,	// (0x00011309) tabs_4_passive_pane_cp2_ParamLimits

0x0efb,	// (0x00011309) tabs_4_passive_pane_cp2

0x0ea4,	// (0x000112b2) tabs_2_long_active_pane_ParamLimits

0x0ea4,	// (0x000112b2) tabs_2_long_active_pane

0x0eb6,	// (0x000112c4) tabs_2_long_passive_pane_ParamLimits

0x0eb6,	// (0x000112c4) tabs_2_long_passive_pane

0x0e65,	// (0x00011273) tabs_3_long_active_pane_ParamLimits

0x0e65,	// (0x00011273) tabs_3_long_active_pane

0x0e78,	// (0x00011286) tabs_3_long_passive_pane_ParamLimits

0x0e78,	// (0x00011286) tabs_3_long_passive_pane

0x0e91,	// (0x0001129f) tabs_3_long_passive_pane_cp_ParamLimits

0x0e91,	// (0x0001129f) tabs_3_long_passive_pane_cp

0x0e0b,	// (0x00011219) volume_small_pane_g1

0x0e14,	// (0x00011222) volume_small_pane_g2

0x0e1d,	// (0x0001122b) volume_small_pane_g3

0x0e26,	// (0x00011234) volume_small_pane_g4

0x0e2f,	// (0x0001123d) volume_small_pane_g5

0x0e38,	// (0x00011246) volume_small_pane_g6

0x0e41,	// (0x0001124f) volume_small_pane_g7

0x0e4a,	// (0x00011258) volume_small_pane_g8

0x0e53,	// (0x00011261) volume_small_pane_g9

0x0e5c,	// (0x0001126a) volume_small_pane_g10

0x0009,

0xf887,	// (0x0001fc95) volume_small_pane_g

0x25f3,	// (0x00012a01) bg_active_tab_pane_cp2_ParamLimits

0x25f3,	// (0x00012a01) bg_active_tab_pane_cp2

0x236c,	// (0x0001277a) tabs_3_active_pane_g1

0xc8a8,	// (0x0001ccb6) tabs_3_active_pane_t1

0x25f3,	// (0x00012a01) bg_passive_tab_pane_cp2_ParamLimits

0x25f3,	// (0x00012a01) bg_passive_tab_pane_cp2

0x236c,	// (0x0001277a) tabs_3_passive_pane_g1

0xc8a8,	// (0x0001ccb6) tabs_3_passive_pane_t1

0x25f3,	// (0x00012a01) bg_active_tab_pane_cp3_ParamLimits

0x25f3,	// (0x00012a01) bg_active_tab_pane_cp3

0x2386,	// (0x00012794) tabs_4_active_pane_g1

0xc8ba,	// (0x0001ccc8) tabs_4_active_pane_t1

0x25f3,	// (0x00012a01) bg_passive_tab_pane_cp3_ParamLimits

0x25f3,	// (0x00012a01) bg_passive_tab_pane_cp3

0x2386,	// (0x00012794) tabs_4_1_passive_pane_g1

0xc8ba,	// (0x0001ccc8) tabs_4_1_passive_pane_t1

0x4350,	// (0x0001475e) list_highlight_pane_cp2

0xd973,	// (0x0001dd81) list_set_pane_ParamLimits

0xd973,	// (0x0001dd81) list_set_pane

0xda0d,	// (0x0001de1b) main_pane_set_t1_ParamLimits

0xda0d,	// (0x0001de1b) main_pane_set_t1

0xda2d,	// (0x0001de3b) main_pane_set_t2_ParamLimits

0xda2d,	// (0x0001de3b) main_pane_set_t2

0xda41,	// (0x0001de4f) main_pane_set_t3_ParamLimits

0xda41,	// (0x0001de4f) main_pane_set_t3

0xda53,	// (0x0001de61) main_pane_set_t4_ParamLimits

0xda53,	// (0x0001de61) main_pane_set_t4

0x0003,

0xf957,	// (0x0001fd65) main_pane_set_t_ParamLimits

0xf957,	// (0x0001fd65) main_pane_set_t

0xda65,	// (0x0001de73) setting_code_pane

0xda6f,	// (0x0001de7d) setting_slider_graphic_pane

0xda6f,	// (0x0001de7d) setting_slider_pane

0xda6f,	// (0x0001de7d) setting_text_pane

0xda6f,	// (0x0001de7d) setting_volume_pane

0x0000,	// (0x0001040e) volume_set_pane

0x235e,	// (0x0001276c) bg_set_opt_pane_cp

0x0008,	// (0x00010416) setting_slider_pane_t1

0x0021,	// (0x0001042f) setting_slider_pane_t2

0x003b,	// (0x00010449) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001f947) setting_slider_pane_t

0x0053,	// (0x00010461) slider_set_pane

0x227e,	// (0x0001268c) bg_set_opt_pane_cp2

0x23a0,	// (0x000127ae) setting_slider_graphic_pane_g1

0x0069,	// (0x00010477) setting_slider_graphic_pane_t1

0x0079,	// (0x00010487) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001f94e) setting_slider_graphic_pane_t

0x0089,	// (0x00010497) slider_set_pane_cp

0x227e,	// (0x0001268c) input_focus_pane_cp1

0x5d65,	// (0x00016173) list_set_text_pane

0xeba8,	// (0x0001efb6) setting_text_pane_g1

0x227e,	// (0x0001268c) input_focus_pane_cp2

0xeba8,	// (0x0001efb6) setting_code_pane_g1

0x23a9,	// (0x000127b7) setting_code_pane_t1

0x23b7,	// (0x000127c5) set_text_pane_t1_ParamLimits

0x23b7,	// (0x000127c5) set_text_pane_t1

0x328b,	// (0x00013699) set_opt_bg_pane_g1

0x3293,	// (0x000136a1) set_opt_bg_pane_g2

0x5d3f,	// (0x0001614d) set_opt_bg_pane_g3

0x32a3,	// (0x000136b1) set_opt_bg_pane_g4

0x32ab,	// (0x000136b9) set_opt_bg_pane_g5

0x32b3,	// (0x000136c1) set_opt_bg_pane_g6

0x5d49,	// (0x00016157) set_opt_bg_pane_g7

0x5d51,	// (0x0001615f) set_opt_bg_pane_g8

0x5d5b,	// (0x00016169) set_opt_bg_pane_g9

0x0008,

0xf944,	// (0x0001fd52) set_opt_bg_pane_g

0x5d32,	// (0x00016140) slider_set_pane_g1

0x0fd3,	// (0x000113e1) slider_set_pane_g2

0x0006,

0xf935,	// (0x0001fd43) slider_set_pane_g

0x0f6f,	// (0x0001137d) volume_set_pane_g1

0x0f77,	// (0x00011385) volume_set_pane_g2

0x0f7f,	// (0x0001138d) volume_set_pane_g3

0x0f87,	// (0x00011395) volume_set_pane_g4

0x0f8f,	// (0x0001139d) volume_set_pane_g5

0x0f97,	// (0x000113a5) volume_set_pane_g6

0x0f9f,	// (0x000113ad) volume_set_pane_g7

0x0fa7,	// (0x000113b5) volume_set_pane_g8

0x0faf,	// (0x000113bd) volume_set_pane_g9

0x0fb7,	// (0x000113c5) volume_set_pane_g10

0x0009,

0xf90d,	// (0x0001fd1b) volume_set_pane_g

0xc8cc,	// (0x0001ccda) indicator_pane_ParamLimits

0xc8cc,	// (0x0001ccda) indicator_pane

0xc8f4,	// (0x0001cd02) main_idle_pane_g2_ParamLimits

0xc8f4,	// (0x0001cd02) main_idle_pane_g2

0xc92c,	// (0x0001cd3a) main_pane_idle_g1_ParamLimits

0xc92c,	// (0x0001cd3a) main_pane_idle_g1

0x2412,	// (0x00012820) popup_clock_digital_analogue_window_ParamLimits

0x2412,	// (0x00012820) popup_clock_digital_analogue_window

0xc953,	// (0x0001cd61) soft_indicator_pane_ParamLimits

0xc953,	// (0x0001cd61) soft_indicator_pane

0xc96d,	// (0x0001cd7b) wallpaper_pane_ParamLimits

0xc96d,	// (0x0001cd7b) wallpaper_pane

0xeba8,	// (0x0001efb6) wallpaper_pane_g1

0xc97f,	// (0x0001cd8d) indicator_pane_g1_ParamLimits

0xc97f,	// (0x0001cd8d) indicator_pane_g1

0x6251,	// (0x0001665f) navi_navi_icon_text_pane_srt_g1

0x2464,	// (0x00012872) soft_indicator_pane_t1

0x247e,	// (0x0001288c) aid_ps_area_pane

0xc995,	// (0x0001cda3) aid_ps_clock_pane

0x249d,	// (0x000128ab) aid_ps_indicator_pane

0x24a9,	// (0x000128b7) indicator_ps_pane_ParamLimits

0x24a9,	// (0x000128b7) indicator_ps_pane

0x24b8,	// (0x000128c6) power_save_pane_g1_ParamLimits

0x24b8,	// (0x000128c6) power_save_pane_g1

0x24c4,	// (0x000128d2) power_save_pane_g2_ParamLimits

0x24c4,	// (0x000128d2) power_save_pane_g2

0xf362,	// (0x0001f770) aid_navinavi_width_pane

0x247e,	// (0x0001288c) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001f953) power_save_pane_g_ParamLimits

0xf545,	// (0x0001f953) power_save_pane_g

0x24d2,	// (0x000128e0) power_save_pane_t1_ParamLimits

0x24d2,	// (0x000128e0) power_save_pane_t1

0xc995,	// (0x0001cda3) aid_ps_clock_pane_ParamLimits

0x249d,	// (0x000128ab) aid_ps_indicator_pane_ParamLimits

0x24e4,	// (0x000128f2) power_save_pane_t4_ParamLimits

0x24e4,	// (0x000128f2) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001f958) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001f958) power_save_pane_t

0x250e,	// (0x0001291c) power_save_t3_ParamLimits

0x250e,	// (0x0001291c) power_save_t3

0x24f9,	// (0x00012907) power_save_t2_ParamLimits

0x24f9,	// (0x00012907) power_save_t2

0x2523,	// (0x00012931) indicator_ps_pane_g1

0xc9a3,	// (0x0001cdb1) ai_gene_pane_ParamLimits

0xc9a3,	// (0x0001cdb1) ai_gene_pane

0xc9ba,	// (0x0001cdc8) ai_links_pane_ParamLimits

0xc9ba,	// (0x0001cdc8) ai_links_pane

0xc9d2,	// (0x0001cde0) indicator_pane_cp1_ParamLimits

0xc9d2,	// (0x0001cde0) indicator_pane_cp1

0xc9e1,	// (0x0001cdef) main_pane_idle_g1_cp_ParamLimits

0xc9e1,	// (0x0001cdef) main_pane_idle_g1_cp

0x255c,	// (0x0001296a) popup_ai_links_title_window

0xc9f9,	// (0x0001ce07) soft_indicator_pane_cp1_ParamLimits

0xc9f9,	// (0x0001ce07) soft_indicator_pane_cp1

0x5b0f,	// (0x00015f1d) ai_links_pane_g1

0x5b18,	// (0x00015f26) grid_ai_links_pane

0xd8b8,	// (0x0001dcc6) ai_gene_pane_1

0x5afd,	// (0x00015f0b) ai_gene_pane_2

0x5b06,	// (0x00015f14) list_highlight_pane_cp4

0xd894,	// (0x0001dca2) cell_ai_link_pane_ParamLimits

0xd894,	// (0x0001dca2) cell_ai_link_pane

0x5ace,	// (0x00015edc) cell_ai_link_pane_g1

0x27bb,	// (0x00012bc9) cell_ai_link_pane_g2

0x0001,

0xf8e8,	// (0x0001fcf6) cell_ai_link_pane_g

0x227e,	// (0x0001268c) grid_highlight_cp2

0x227e,	// (0x0001268c) bg_popup_sub_pane_cp1

0x257f,	// (0x0001298d) popup_ai_links_title_window_t1

0x5a1c,	// (0x00015e2a) ai_gene_pane_1_g1_ParamLimits

0x5a1c,	// (0x00015e2a) ai_gene_pane_1_g1

0x5a28,	// (0x00015e36) ai_gene_pane_1_g2_ParamLimits

0x5a28,	// (0x00015e36) ai_gene_pane_1_g2

0x0001,

0xf8de,	// (0x0001fcec) ai_gene_pane_1_g_ParamLimits

0xf8de,	// (0x0001fcec) ai_gene_pane_1_g

0x5a35,	// (0x00015e43) ai_gene_pane_1_t1_ParamLimits

0x5a35,	// (0x00015e43) ai_gene_pane_1_t1

0x5a69,	// (0x00015e77) grid_ai_soft_ind_pane

0x5a07,	// (0x00015e15) ai_gene_pane_2_t1_ParamLimits

0x5a07,	// (0x00015e15) ai_gene_pane_2_t1

0xca0d,	// (0x0001ce1b) main_pane_empty_t1_ParamLimits

0xca0d,	// (0x0001ce1b) main_pane_empty_t1

0xca25,	// (0x0001ce33) main_pane_empty_t2_ParamLimits

0xca25,	// (0x0001ce33) main_pane_empty_t2

0xca3a,	// (0x0001ce48) main_pane_empty_t3_ParamLimits

0xca3a,	// (0x0001ce48) main_pane_empty_t3

0xca4c,	// (0x0001ce5a) main_pane_empty_t4_ParamLimits

0xca4c,	// (0x0001ce5a) main_pane_empty_t4

0xca5e,	// (0x0001ce6c) main_pane_empty_t5_ParamLimits

0xca5e,	// (0x0001ce6c) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001f95d) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001f95d) main_pane_empty_t

0x33fe,	// (0x0001380c) bg_popup_window_pane_ParamLimits

0x33fe,	// (0x0001380c) bg_popup_window_pane

0x5777,	// (0x00015b85) find_popup_pane_cp2_ParamLimits

0x5777,	// (0x00015b85) find_popup_pane_cp2

0x5783,	// (0x00015b91) heading_pane_ParamLimits

0x5783,	// (0x00015b91) heading_pane

0x227e,	// (0x0001268c) bg_popup_sub_pane

0xd815,	// (0x0001dc23) bg_popup_window_pane_g1_ParamLimits

0xd815,	// (0x0001dc23) bg_popup_window_pane_g1

0xd824,	// (0x0001dc32) bg_popup_window_pane_g2_ParamLimits

0xd824,	// (0x0001dc32) bg_popup_window_pane_g2

0xd830,	// (0x0001dc3e) bg_popup_window_pane_g3_ParamLimits

0xd830,	// (0x0001dc3e) bg_popup_window_pane_g3

0xd83c,	// (0x0001dc4a) bg_popup_window_pane_g4_ParamLimits

0xd83c,	// (0x0001dc4a) bg_popup_window_pane_g4

0xd84b,	// (0x0001dc59) bg_popup_window_pane_g5_ParamLimits

0xd84b,	// (0x0001dc59) bg_popup_window_pane_g5

0xd85b,	// (0x0001dc69) bg_popup_window_pane_g6_ParamLimits

0xd85b,	// (0x0001dc69) bg_popup_window_pane_g6

0xd867,	// (0x0001dc75) bg_popup_window_pane_g7_ParamLimits

0xd867,	// (0x0001dc75) bg_popup_window_pane_g7

0xd876,	// (0x0001dc84) bg_popup_window_pane_g8_ParamLimits

0xd876,	// (0x0001dc84) bg_popup_window_pane_g8

0xd885,	// (0x0001dc93) bg_popup_window_pane_g9_ParamLimits

0xd885,	// (0x0001dc93) bg_popup_window_pane_g9

0x575d,	// (0x00015b6b) bg_popup_window_pane_g10_ParamLimits

0x575d,	// (0x00015b6b) bg_popup_window_pane_g10

0x0009,

0xf8a6,	// (0x0001fcb4) bg_popup_window_pane_g_ParamLimits

0xf8a6,	// (0x0001fcb4) bg_popup_window_pane_g

0x5686,	// (0x00015a94) bg_popup_heading_pane_ParamLimits

0x5686,	// (0x00015a94) bg_popup_heading_pane

0x105b,	// (0x00011469) tabs_4_passive_pane_cp_srt_ParamLimits

0x105b,	// (0x00011469) tabs_4_passive_pane_cp_srt

0x106d,	// (0x0001147b) tabs_4_passive_pane_srt_ParamLimits

0x569a,	// (0x00015aa8) heading_pane_g2

0x106d,	// (0x0001147b) tabs_4_passive_pane_srt

0x49ba,	// (0x00014dc8) bg_passive_tab_pane_cp3_srt_ParamLimits

0x49ba,	// (0x00014dc8) bg_passive_tab_pane_cp3_srt

0x56a2,	// (0x00015ab0) heading_pane_t1_ParamLimits

0x56a2,	// (0x00015ab0) heading_pane_t1

0x56b9,	// (0x00015ac7) heading_pane_t2_ParamLimits

0x56b9,	// (0x00015ac7) heading_pane_t2

0x0001,

0xf8a1,	// (0x0001fcaf) heading_pane_t_ParamLimits

0xf8a1,	// (0x0001fcaf) heading_pane_t

0x51b3,	// (0x000155c1) bg_popup_heading_pane_g1

0x5262,	// (0x00015670) bg_popup_heading_pane_g2

0x526c,	// (0x0001567a) bg_popup_heading_pane_g3

0x5276,	// (0x00015684) bg_popup_heading_pane_g4

0x5280,	// (0x0001568e) bg_popup_heading_pane_g5

0x528a,	// (0x00015698) bg_popup_heading_pane_g6

0x5292,	// (0x000156a0) bg_popup_heading_pane_g7

0x529a,	// (0x000156a8) bg_popup_heading_pane_g8

0x52a4,	// (0x000156b2) bg_popup_heading_pane_g9

0x0008,

0xf85d,	// (0x0001fc6b) bg_popup_heading_pane_g

0x4898,	// (0x00014ca6) bg_popup_sub_pane_g1

0x48a8,	// (0x00014cb6) bg_popup_sub_pane_g2

0x48a0,	// (0x00014cae) bg_popup_sub_pane_g3

0x48b8,	// (0x00014cc6) bg_popup_sub_pane_g4

0x48b0,	// (0x00014cbe) bg_popup_sub_pane_g5

0x48c0,	// (0x00014cce) bg_popup_sub_pane_g6

0x48c8,	// (0x00014cd6) bg_popup_sub_pane_g7

0x48d8,	// (0x00014ce6) bg_popup_sub_pane_g8

0x48d0,	// (0x00014cde) bg_popup_sub_pane_g9

0x0008,

0xf837,	// (0x0001fc45) bg_popup_sub_pane_g

0x25f3,	// (0x00012a01) bg_popup_window_pane_cp5_ParamLimits

0x25f3,	// (0x00012a01) bg_popup_window_pane_cp5

0x260f,	// (0x00012a1d) popup_note_window_g1_ParamLimits

0x260f,	// (0x00012a1d) popup_note_window_g1

0x261b,	// (0x00012a29) popup_note_window_t1_ParamLimits

0x261b,	// (0x00012a29) popup_note_window_t1

0x2631,	// (0x00012a3f) popup_note_window_t2_ParamLimits

0x2631,	// (0x00012a3f) popup_note_window_t2

0x2647,	// (0x00012a55) popup_note_window_t3_ParamLimits

0x2647,	// (0x00012a55) popup_note_window_t3

0x265d,	// (0x00012a6b) popup_note_window_t4_ParamLimits

0x265d,	// (0x00012a6b) popup_note_window_t4

0x2685,	// (0x00012a93) popup_note_window_t5_ParamLimits

0x2685,	// (0x00012a93) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001f968) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001f968) popup_note_window_t

0x26cf,	// (0x00012add) bg_popup_window_pane_cp6_ParamLimits

0x26cf,	// (0x00012add) bg_popup_window_pane_cp6

0x512f,	// (0x0001553d) popup_note_image_window_g1_ParamLimits

0x512f,	// (0x0001553d) popup_note_image_window_g1

0x513b,	// (0x00015549) popup_note_image_window_g2_ParamLimits

0x513b,	// (0x00015549) popup_note_image_window_g2

0x0001,

0xf82b,	// (0x0001fc39) popup_note_image_window_g_ParamLimits

0xf82b,	// (0x0001fc39) popup_note_image_window_g

0x5154,	// (0x00015562) popup_note_image_window_t1_ParamLimits

0x5154,	// (0x00015562) popup_note_image_window_t1

0x516d,	// (0x0001557b) popup_note_image_window_t2_ParamLimits

0x516d,	// (0x0001557b) popup_note_image_window_t2

0x5186,	// (0x00015594) popup_note_image_window_t3_ParamLimits

0x5186,	// (0x00015594) popup_note_image_window_t3

0x0002,

0xf830,	// (0x0001fc3e) popup_note_image_window_t_ParamLimits

0xf830,	// (0x0001fc3e) popup_note_image_window_t

0x4ff0,	// (0x000153fe) bg_popup_window_pane_cp7_ParamLimits

0x4ff0,	// (0x000153fe) bg_popup_window_pane_cp7

0x5020,	// (0x0001542e) popup_note_wait_window_g1_ParamLimits

0x5020,	// (0x0001542e) popup_note_wait_window_g1

0x502c,	// (0x0001543a) popup_note_wait_window_g2_ParamLimits

0x502c,	// (0x0001543a) popup_note_wait_window_g2

0x0002,

0xf819,	// (0x0001fc27) popup_note_wait_window_g_ParamLimits

0xf819,	// (0x0001fc27) popup_note_wait_window_g

0x5044,	// (0x00015452) popup_note_wait_window_t1_ParamLimits

0x5044,	// (0x00015452) popup_note_wait_window_t1

0x506b,	// (0x00015479) popup_note_wait_window_t2_ParamLimits

0x506b,	// (0x00015479) popup_note_wait_window_t2

0x5088,	// (0x00015496) popup_note_wait_window_t3_ParamLimits

0x5088,	// (0x00015496) popup_note_wait_window_t3

0x509b,	// (0x000154a9) popup_note_wait_window_t4_ParamLimits

0x509b,	// (0x000154a9) popup_note_wait_window_t4

0x0004,

0xf820,	// (0x0001fc2e) popup_note_wait_window_t_ParamLimits

0xf820,	// (0x0001fc2e) popup_note_wait_window_t

0x50c0,	// (0x000154ce) wait_bar_pane_ParamLimits

0x50c0,	// (0x000154ce) wait_bar_pane

0x227e,	// (0x0001268c) wait_anim_pane

0x227e,	// (0x0001268c) wait_border_pane

0xeba8,	// (0x0001efb6) wait_anim_pane_g1

0xeba8,	// (0x0001efb6) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x0001fae7) wait_anim_pane_g

0x4f94,	// (0x000153a2) wait_border_pane_g1

0x4f9f,	// (0x000153ad) wait_border_pane_g2

0x4fa8,	// (0x000153b6) wait_border_pane_g3

0x0002,

0xf812,	// (0x0001fc20) wait_border_pane_g

0x4dff,	// (0x0001520d) bg_popup_window_pane_cp16_ParamLimits

0x4dff,	// (0x0001520d) bg_popup_window_pane_cp16

0x4eff,	// (0x0001530d) indicator_popup_pane_cp4_ParamLimits

0x4eff,	// (0x0001530d) indicator_popup_pane_cp4

0x4f13,	// (0x00015321) popup_query_data_window_t1_ParamLimits

0x4f13,	// (0x00015321) popup_query_data_window_t1

0x4f25,	// (0x00015333) popup_query_data_window_t2_ParamLimits

0x4f25,	// (0x00015333) popup_query_data_window_t2

0x4f3e,	// (0x0001534c) popup_query_data_window_t3_ParamLimits

0x4f3e,	// (0x0001534c) popup_query_data_window_t3

0x0002,

0xf80b,	// (0x0001fc19) popup_query_data_window_t_ParamLimits

0xf80b,	// (0x0001fc19) popup_query_data_window_t

0x4f58,	// (0x00015366) query_popup_data_pane_ParamLimits

0x4f58,	// (0x00015366) query_popup_data_pane

0x4f6c,	// (0x0001537a) query_popup_data_pane_cp1_ParamLimits

0x4f6c,	// (0x0001537a) query_popup_data_pane_cp1

0x4dff,	// (0x0001520d) bg_popup_window_pane_cp10_ParamLimits

0x4dff,	// (0x0001520d) bg_popup_window_pane_cp10

0x4e31,	// (0x0001523f) indicator_popup_pane_ParamLimits

0x4e31,	// (0x0001523f) indicator_popup_pane

0x4e53,	// (0x00015261) popup_query_code_window_t1_ParamLimits

0x4e53,	// (0x00015261) popup_query_code_window_t1

0x4e6d,	// (0x0001527b) popup_query_code_window_t2_ParamLimits

0x4e6d,	// (0x0001527b) popup_query_code_window_t2

0x4eb6,	// (0x000152c4) popup_query_code_window_t3_ParamLimits

0x4eb6,	// (0x000152c4) popup_query_code_window_t3

0x0002,

0xf804,	// (0x0001fc12) popup_query_code_window_t_ParamLimits

0xf804,	// (0x0001fc12) popup_query_code_window_t

0x4ee5,	// (0x000152f3) query_popup_pane_ParamLimits

0x4ee5,	// (0x000152f3) query_popup_pane

0x26cf,	// (0x00012add) bg_popup_window_pane_cp15_ParamLimits

0x26cf,	// (0x00012add) bg_popup_window_pane_cp15

0x26ed,	// (0x00012afb) indicator_popup_pane_cp1_ParamLimits

0x26ed,	// (0x00012afb) indicator_popup_pane_cp1

0x2700,	// (0x00012b0e) indicator_popup_pane_cp2_ParamLimits

0x2700,	// (0x00012b0e) indicator_popup_pane_cp2

0x2713,	// (0x00012b21) popup_query_data_code_window_g1_ParamLimits

0x2713,	// (0x00012b21) popup_query_data_code_window_g1

0x2726,	// (0x00012b34) popup_query_data_code_window_t1_ParamLimits

0x2726,	// (0x00012b34) popup_query_data_code_window_t1

0x2738,	// (0x00012b46) popup_query_data_code_window_t2_ParamLimits

0x2738,	// (0x00012b46) popup_query_data_code_window_t2

0x274a,	// (0x00012b58) popup_query_data_code_window_t3_ParamLimits

0x274a,	// (0x00012b58) popup_query_data_code_window_t3

0x2760,	// (0x00012b6e) popup_query_data_code_window_t4_ParamLimits

0x2760,	// (0x00012b6e) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001f973) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001f973) popup_query_data_code_window_t

0x0d1c,	// (0x0001112a) list_single_midp_graphic_pane_g3

0x2778,	// (0x00012b86) query_popup_data_pane_cp2_ParamLimits

0x278b,	// (0x00012b99) query_popup_pane_cp2_ParamLimits

0x278b,	// (0x00012b99) query_popup_pane_cp2

0x227e,	// (0x0001268c) bg_popup_window_pane_cp11

0x4de3,	// (0x000151f1) heading_pane_cp5

0x4deb,	// (0x000151f9) listscroll_popup_info_pane

0x227e,	// (0x0001268c) input_focus_pane_cp3

0x279e,	// (0x00012bac) query_popup_pane_t1

0x27ac,	// (0x00012bba) list_popup_info_pane_ParamLimits

0x27ac,	// (0x00012bba) list_popup_info_pane

0x27bb,	// (0x00012bc9) listscroll_popup_info_pane_g1

0x27c3,	// (0x00012bd1) scroll_pane_cp7

0x27cd,	// (0x00012bdb) popup_info_list_pane_t1_ParamLimits

0x27cd,	// (0x00012bdb) popup_info_list_pane_t1

0x27e7,	// (0x00012bf5) popup_info_list_pane_t2_ParamLimits

0x27e7,	// (0x00012bf5) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001f97c) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001f97c) popup_info_list_pane_t

0x227e,	// (0x0001268c) bg_popup_window_pane_cp12

0x626b,	// (0x00016679) find_popup_pane

0x235e,	// (0x0001276c) bg_popup_window_pane_cp3

0x2801,	// (0x00012c0f) heading_pane_cp3

0x2810,	// (0x00012c1e) listscroll_popup_graphic_pane

0x227e,	// (0x0001268c) bg_popup_window_pane_cp4

0xcac0,	// (0x0001cece) heading_pane_cp4

0x287a,	// (0x00012c88) listscroll_popup_colour_pane

0xcaca,	// (0x0001ced8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xcaca,	// (0x0001ced8) cell_large_graphic_colour_none_popup_pane

0xcade,	// (0x0001ceec) grid_large_graphic_colour_popup_pane_ParamLimits

0xcade,	// (0x0001ceec) grid_large_graphic_colour_popup_pane

0xcb02,	// (0x0001cf10) listscroll_popup_colour_pane_g1_ParamLimits

0xcb02,	// (0x0001cf10) listscroll_popup_colour_pane_g1

0xcb19,	// (0x0001cf27) listscroll_popup_colour_pane_g2_ParamLimits

0xcb19,	// (0x0001cf27) listscroll_popup_colour_pane_g2

0xcb2d,	// (0x0001cf3b) listscroll_popup_colour_pane_g3_ParamLimits

0xcb2d,	// (0x0001cf3b) listscroll_popup_colour_pane_g3

0xcb3d,	// (0x0001cf4b) listscroll_popup_colour_pane_g4_ParamLimits

0xcb3d,	// (0x0001cf4b) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001f981) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001f981) listscroll_popup_colour_pane_g

0x2908,	// (0x00012d16) scroll_pane_cp6_ParamLimits

0x2908,	// (0x00012d16) scroll_pane_cp6

0xcb4d,	// (0x0001cf5b) cell_large_graphic_colour_popup_pane_ParamLimits

0xcb4d,	// (0x0001cf5b) cell_large_graphic_colour_popup_pane

0x2939,	// (0x00012d47) cell_large_graphic_colour_none_popup_pane_t1

0x227e,	// (0x0001268c) grid_highlight_pane_cp5

0x2948,	// (0x00012d56) cell_large_graphic_colour_popup_pane_g1

0x2950,	// (0x00012d5e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001f98a) cell_large_graphic_colour_popup_pane_g

0x2958,	// (0x00012d66) cell_large_graphic_colour_popup_pane_g2_copy1

0x2961,	// (0x00012d6f) grid_highlight_pane_cp4

0x2969,	// (0x00012d77) bg_popup_window_pane_cp8_ParamLimits

0x2969,	// (0x00012d77) bg_popup_window_pane_cp8

0x2984,	// (0x00012d92) popup_snote_single_text_window_g1_ParamLimits

0x2984,	// (0x00012d92) popup_snote_single_text_window_g1

0x2996,	// (0x00012da4) popup_snote_single_text_window_t1_ParamLimits

0x2996,	// (0x00012da4) popup_snote_single_text_window_t1

0x29a9,	// (0x00012db7) popup_snote_single_text_window_t2_ParamLimits

0x29a9,	// (0x00012db7) popup_snote_single_text_window_t2

0x29bc,	// (0x00012dca) popup_snote_single_text_window_t3_ParamLimits

0x29bc,	// (0x00012dca) popup_snote_single_text_window_t3

0x29f5,	// (0x00012e03) popup_snote_single_text_window_t4_ParamLimits

0x29f5,	// (0x00012e03) popup_snote_single_text_window_t4

0x2a29,	// (0x00012e37) popup_snote_single_text_window_t5_ParamLimits

0x2a29,	// (0x00012e37) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001f98f) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001f98f) popup_snote_single_text_window_t

0x2a58,	// (0x00012e66) bg_popup_window_pane_cp9_ParamLimits

0x2a58,	// (0x00012e66) bg_popup_window_pane_cp9

0x2984,	// (0x00012d92) popup_snote_single_graphic_window_g1_ParamLimits

0x2984,	// (0x00012d92) popup_snote_single_graphic_window_g1

0x2a66,	// (0x00012e74) popup_snote_single_graphic_window_g2_ParamLimits

0x2a66,	// (0x00012e74) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001f99a) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001f99a) popup_snote_single_graphic_window_g

0x2a72,	// (0x00012e80) popup_snote_single_graphic_window_t1_ParamLimits

0x2a72,	// (0x00012e80) popup_snote_single_graphic_window_t1

0x2a85,	// (0x00012e93) popup_snote_single_graphic_window_t2_ParamLimits

0x2a85,	// (0x00012e93) popup_snote_single_graphic_window_t2

0x2a98,	// (0x00012ea6) popup_snote_single_graphic_window_t3_ParamLimits

0x2a98,	// (0x00012ea6) popup_snote_single_graphic_window_t3

0x2ad1,	// (0x00012edf) popup_snote_single_graphic_window_t4_ParamLimits

0x2ad1,	// (0x00012edf) popup_snote_single_graphic_window_t4

0x2b05,	// (0x00012f13) popup_snote_single_graphic_window_t5_ParamLimits

0x2b05,	// (0x00012f13) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001f99f) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001f99f) popup_snote_single_graphic_window_t

0x61ad,	// (0x000165bb) grid_graphic_popup_pane_ParamLimits

0x61ad,	// (0x000165bb) grid_graphic_popup_pane

0x61d7,	// (0x000165e5) listscroll_popup_graphic_pane_g1_ParamLimits

0x61d7,	// (0x000165e5) listscroll_popup_graphic_pane_g1

0xdbce,	// (0x0001dfdc) listscroll_popup_graphic_pane_g2_ParamLimits

0xdbce,	// (0x0001dfdc) listscroll_popup_graphic_pane_g2

0x0001,

0xf981,	// (0x0001fd8f) listscroll_popup_graphic_pane_g_ParamLimits

0xf981,	// (0x0001fd8f) listscroll_popup_graphic_pane_g

0x61ff,	// (0x0001660d) scroll_pane_cp5

0xdb8b,	// (0x0001df99) cell_graphic_popup_pane_ParamLimits

0xdb8b,	// (0x0001df99) cell_graphic_popup_pane

0x611f,	// (0x0001652d) cell_graphic_popup_pane_g1

0x6127,	// (0x00016535) cell_graphic_popup_pane_g2

0x2958,	// (0x00012d66) cell_graphic_popup_pane_g3

0x0002,

0xf97a,	// (0x0001fd88) cell_graphic_popup_pane_g

0x6130,	// (0x0001653e) cell_graphic_popup_pane_t2

0x2961,	// (0x00012d6f) grid_highlight_pane_cp3

0x2b46,	// (0x00012f54) list_gen_pane_ParamLimits

0x2b46,	// (0x00012f54) list_gen_pane

0x2b78,	// (0x00012f86) scroll_pane

0xdb42,	// (0x0001df50) bg_list_pane_g1_ParamLimits

0xdb42,	// (0x0001df50) bg_list_pane_g1

0x6088,	// (0x00016496) bg_list_pane_g2_ParamLimits

0x6088,	// (0x00016496) bg_list_pane_g2

0x609d,	// (0x000164ab) bg_list_pane_g3_ParamLimits

0x609d,	// (0x000164ab) bg_list_pane_g3

0x60b1,	// (0x000164bf) bg_list_pane_g4_ParamLimits

0x60b1,	// (0x000164bf) bg_list_pane_g4

0xdb5f,	// (0x0001df6d) bg_list_pane_g5_ParamLimits

0xdb5f,	// (0x0001df6d) bg_list_pane_g5

0x0004,

0xf96f,	// (0x0001fd7d) bg_list_pane_g_ParamLimits

0xf96f,	// (0x0001fd7d) bg_list_pane_g

0xdae6,	// (0x0001def4) list_double2_graphic_large_graphic_pane_ParamLimits

0xdae6,	// (0x0001def4) list_double2_graphic_large_graphic_pane

0xdae6,	// (0x0001def4) list_double2_graphic_pane_ParamLimits

0xdae6,	// (0x0001def4) list_double2_graphic_pane

0xdae6,	// (0x0001def4) list_double2_large_graphic_pane_ParamLimits

0xdae6,	// (0x0001def4) list_double2_large_graphic_pane

0xdae6,	// (0x0001def4) list_double2_pane_ParamLimits

0xdae6,	// (0x0001def4) list_double2_pane

0xdae6,	// (0x0001def4) list_double_graphic_heading_pane_ParamLimits

0xdae6,	// (0x0001def4) list_double_graphic_heading_pane

0xdae6,	// (0x0001def4) list_double_graphic_pane_ParamLimits

0xdae6,	// (0x0001def4) list_double_graphic_pane

0xdae6,	// (0x0001def4) list_double_heading_pane_ParamLimits

0xdae6,	// (0x0001def4) list_double_heading_pane

0xdae6,	// (0x0001def4) list_double_large_graphic_pane_ParamLimits

0xdae6,	// (0x0001def4) list_double_large_graphic_pane

0xdae6,	// (0x0001def4) list_double_number_pane_ParamLimits

0xdae6,	// (0x0001def4) list_double_number_pane

0xdae6,	// (0x0001def4) list_double_pane_ParamLimits

0xdae6,	// (0x0001def4) list_double_pane

0xdae6,	// (0x0001def4) list_double_time_pane_ParamLimits

0xdae6,	// (0x0001def4) list_double_time_pane

0xdae6,	// (0x0001def4) list_setting_number_pane_ParamLimits

0xdae6,	// (0x0001def4) list_setting_number_pane

0xdae6,	// (0x0001def4) list_setting_pane_ParamLimits

0xdae6,	// (0x0001def4) list_setting_pane

0xdaf8,	// (0x0001df06) list_single_2graphic_pane_ParamLimits

0xdaf8,	// (0x0001df06) list_single_2graphic_pane

0xdaf8,	// (0x0001df06) list_single_graphic_heading_pane_ParamLimits

0xdaf8,	// (0x0001df06) list_single_graphic_heading_pane

0xdaf8,	// (0x0001df06) list_single_graphic_pane_ParamLimits

0xdaf8,	// (0x0001df06) list_single_graphic_pane

0xdaf8,	// (0x0001df06) list_single_heading_pane_ParamLimits

0xdaf8,	// (0x0001df06) list_single_heading_pane

0xdaf8,	// (0x0001df06) list_single_large_graphic_pane_ParamLimits

0xdaf8,	// (0x0001df06) list_single_large_graphic_pane

0xdaf8,	// (0x0001df06) list_single_number_heading_pane_ParamLimits

0xdaf8,	// (0x0001df06) list_single_number_heading_pane

0xdaf8,	// (0x0001df06) list_single_number_pane_ParamLimits

0xdaf8,	// (0x0001df06) list_single_number_pane

0xdaf8,	// (0x0001df06) list_single_pane_ParamLimits

0xdaf8,	// (0x0001df06) list_single_pane

0x227e,	// (0x0001268c) list_highlight_pane_cp1

0x2bb8,	// (0x00012fc6) list_single_pane_g1_ParamLimits

0x2bb8,	// (0x00012fc6) list_single_pane_g1

0x2bc4,	// (0x00012fd2) list_single_pane_g2_ParamLimits

0x2bc4,	// (0x00012fd2) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001f9b1) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001f9b1) list_single_pane_g

0x5f22,	// (0x00016330) list_single_pane_t1_ParamLimits

0x5f22,	// (0x00016330) list_single_pane_t1

0x2bb8,	// (0x00012fc6) list_single_number_pane_g1_ParamLimits

0x2bb8,	// (0x00012fc6) list_single_number_pane_g1

0x2bc4,	// (0x00012fd2) list_single_number_pane_g2_ParamLimits

0x2bc4,	// (0x00012fd2) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001f9b1) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001f9b1) list_single_number_pane_g

0x4826,	// (0x00014c34) list_single_number_pane_t1_ParamLimits

0x4826,	// (0x00014c34) list_single_number_pane_t1

0x5cc4,	// (0x000160d2) list_single_number_pane_t2_ParamLimits

0x5cc4,	// (0x000160d2) list_single_number_pane_t2

0x0001,

0xf930,	// (0x0001fd3e) list_single_number_pane_t_ParamLimits

0xf930,	// (0x0001fd3e) list_single_number_pane_t

0x2bac,	// (0x00012fba) list_single_graphic_pane_g1_ParamLimits

0x2bac,	// (0x00012fba) list_single_graphic_pane_g1

0x2bb8,	// (0x00012fc6) list_single_graphic_pane_g2_ParamLimits

0x2bb8,	// (0x00012fc6) list_single_graphic_pane_g2

0x2bc4,	// (0x00012fd2) list_single_graphic_pane_g3_ParamLimits

0x2bc4,	// (0x00012fd2) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001f9aa) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001f9aa) list_single_graphic_pane_g

0x2bd0,	// (0x00012fde) list_single_graphic_pane_t1_ParamLimits

0x2bd0,	// (0x00012fde) list_single_graphic_pane_t1

0x2bb8,	// (0x00012fc6) list_single_heading_pane_g1_ParamLimits

0x2bb8,	// (0x00012fc6) list_single_heading_pane_g1

0x2bc4,	// (0x00012fd2) list_single_heading_pane_g2_ParamLimits

0x2bc4,	// (0x00012fd2) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001f9b1) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001f9b1) list_single_heading_pane_g

0x2be6,	// (0x00012ff4) list_single_heading_pane_t1_ParamLimits

0x2be6,	// (0x00012ff4) list_single_heading_pane_t1

0x2bfc,	// (0x0001300a) list_single_heading_pane_t2_ParamLimits

0x2bfc,	// (0x0001300a) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001f9b6) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001f9b6) list_single_heading_pane_t

0x2bb8,	// (0x00012fc6) list_single_number_heading_pane_g1_ParamLimits

0x2bb8,	// (0x00012fc6) list_single_number_heading_pane_g1

0x2bc4,	// (0x00012fd2) list_single_number_heading_pane_g2_ParamLimits

0x2bc4,	// (0x00012fd2) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001f9b1) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001f9b1) list_single_number_heading_pane_g

0x2be6,	// (0x00012ff4) list_single_number_heading_pane_t1_ParamLimits

0x2be6,	// (0x00012ff4) list_single_number_heading_pane_t1

0x2c0e,	// (0x0001301c) list_single_number_heading_pane_t2_ParamLimits

0x2c0e,	// (0x0001301c) list_single_number_heading_pane_t2

0x2c20,	// (0x0001302e) list_single_number_heading_pane_t3_ParamLimits

0x2c20,	// (0x0001302e) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001f9bb) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001f9bb) list_single_number_heading_pane_t

0x2c32,	// (0x00013040) list_single_graphic_heading_pane_g1_ParamLimits

0x2c32,	// (0x00013040) list_single_graphic_heading_pane_g1

0xcb76,	// (0x0001cf84) list_single_graphic_heading_pane_g4_ParamLimits

0xcb76,	// (0x0001cf84) list_single_graphic_heading_pane_g4

0x2bc4,	// (0x00012fd2) list_single_graphic_heading_pane_g5_ParamLimits

0x2bc4,	// (0x00012fd2) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001f9c2) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001f9c2) list_single_graphic_heading_pane_g

0x2be6,	// (0x00012ff4) list_single_graphic_heading_pane_t1_ParamLimits

0x2be6,	// (0x00012ff4) list_single_graphic_heading_pane_t1

0x2c4f,	// (0x0001305d) list_single_graphic_heading_pane_t2_ParamLimits

0x2c4f,	// (0x0001305d) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001f9c9) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001f9c9) list_single_graphic_heading_pane_t

0x6851,	// (0x00016c5f) list_single_large_graphic_pane_g1_ParamLimits

0x6851,	// (0x00016c5f) list_single_large_graphic_pane_g1

0x2bb8,	// (0x00012fc6) list_single_large_graphic_pane_g2_ParamLimits

0x2bb8,	// (0x00012fc6) list_single_large_graphic_pane_g2

0x2bc4,	// (0x00012fd2) list_single_large_graphic_pane_g3_ParamLimits

0x2bc4,	// (0x00012fd2) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001f9ce) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001f9ce) list_single_large_graphic_pane_g

0x4f9f,	// (0x000153ad) wait_border_pane_g2_copy1

0xcb87,	// (0x0001cf95) list_single_large_graphic_pane_g4_cp2

0x685d,	// (0x00016c6b) list_single_large_graphic_pane_t1_ParamLimits

0x685d,	// (0x00016c6b) list_single_large_graphic_pane_t1

0x2db1,	// (0x000131bf) list_double_pane_g1_ParamLimits

0x2db1,	// (0x000131bf) list_double_pane_g1

0x2cdc,	// (0x000130ea) list_double_pane_g2_ParamLimits

0x2cdc,	// (0x000130ea) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001f9d5) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001f9d5) list_double_pane_g

0x2ce8,	// (0x000130f6) list_double_pane_t1_ParamLimits

0x2ce8,	// (0x000130f6) list_double_pane_t1

0xcb8f,	// (0x0001cf9d) list_double_pane_t2_ParamLimits

0xcb8f,	// (0x0001cf9d) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001f9da) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001f9da) list_double_pane_t

0xcba1,	// (0x0001cfaf) list_double2_pane_g1_ParamLimits

0xcba1,	// (0x0001cfaf) list_double2_pane_g1

0xcbb2,	// (0x0001cfc0) list_double2_pane_g2_ParamLimits

0xcbb2,	// (0x0001cfc0) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001f9df) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001f9df) list_double2_pane_g

0xcbbe,	// (0x0001cfcc) list_double2_pane_t1_ParamLimits

0xcbbe,	// (0x0001cfcc) list_double2_pane_t1

0x2ecd,	// (0x000132db) list_double2_pane_t2_ParamLimits

0x2ecd,	// (0x000132db) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001f9e4) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001f9e4) list_double2_pane_t

0x2db1,	// (0x000131bf) list_double_number_pane_g1_ParamLimits

0x2db1,	// (0x000131bf) list_double_number_pane_g1

0x2cdc,	// (0x000130ea) list_double_number_pane_g2_ParamLimits

0x2cdc,	// (0x000130ea) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001f9d5) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001f9d5) list_double_number_pane_g

0xcbd4,	// (0x0001cfe2) list_double_number_pane_t1_ParamLimits

0xcbd4,	// (0x0001cfe2) list_double_number_pane_t1

0x2dbd,	// (0x000131cb) list_double_number_pane_t2_ParamLimits

0x2dbd,	// (0x000131cb) list_double_number_pane_t2

0xcbe6,	// (0x0001cff4) list_double_number_pane_t3_ParamLimits

0xcbe6,	// (0x0001cff4) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001f9e9) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001f9e9) list_double_number_pane_t

0x2da5,	// (0x000131b3) list_double_graphic_pane_g1_ParamLimits

0x2da5,	// (0x000131b3) list_double_graphic_pane_g1

0xcbf8,	// (0x0001d006) list_double_graphic_pane_g2_ParamLimits

0xcbf8,	// (0x0001d006) list_double_graphic_pane_g2

0xcc07,	// (0x0001d015) list_double_graphic_pane_g3_ParamLimits

0xcc07,	// (0x0001d015) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001f9f0) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001f9f0) list_double_graphic_pane_g

0xcc1f,	// (0x0001d02d) list_double_graphic_pane_t1_ParamLimits

0xcc1f,	// (0x0001d02d) list_double_graphic_pane_t1

0xcc35,	// (0x0001d043) list_double_graphic_pane_t2_ParamLimits

0xcc35,	// (0x0001d043) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001f9f9) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001f9f9) list_double_graphic_pane_t

0xcc47,	// (0x0001d055) list_double2_graphic_pane_g1_ParamLimits

0xcc47,	// (0x0001d055) list_double2_graphic_pane_g1

0x3182,	// (0x00013590) list_double2_graphic_pane_g2_ParamLimits

0x3182,	// (0x00013590) list_double2_graphic_pane_g2

0xcbb2,	// (0x0001cfc0) list_double2_graphic_pane_g3_ParamLimits

0xcbb2,	// (0x0001cfc0) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001f9fe) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001f9fe) list_double2_graphic_pane_g

0xcc53,	// (0x0001d061) list_double2_graphic_pane_t1_ParamLimits

0xcc53,	// (0x0001d061) list_double2_graphic_pane_t1

0x2ef5,	// (0x00013303) list_double2_graphic_pane_t2_ParamLimits

0x2ef5,	// (0x00013303) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001fa05) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001fa05) list_double2_graphic_pane_t

0xcc69,	// (0x0001d077) list_double_large_graphic_pane_g1_ParamLimits

0xcc69,	// (0x0001d077) list_double_large_graphic_pane_g1

0xcc88,	// (0x0001d096) list_double_large_graphic_pane_g2_ParamLimits

0xcc88,	// (0x0001d096) list_double_large_graphic_pane_g2

0x2cdc,	// (0x000130ea) list_double_large_graphic_pane_g3_ParamLimits

0x2cdc,	// (0x000130ea) list_double_large_graphic_pane_g3

0xcc99,	// (0x0001d0a7) list_double_large_graphic_pane_g4_ParamLimits

0xcc99,	// (0x0001d0a7) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001fa0a) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001fa0a) list_double_large_graphic_pane_g

0xccac,	// (0x0001d0ba) list_double_large_graphic_pane_t1_ParamLimits

0xccac,	// (0x0001d0ba) list_double_large_graphic_pane_t1

0xccc5,	// (0x0001d0d3) list_double_large_graphic_pane_t2_ParamLimits

0xccc5,	// (0x0001d0d3) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001fa15) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001fa15) list_double_large_graphic_pane_t

0xccd7,	// (0x0001d0e5) list_double2_large_graphic_pane_g1_ParamLimits

0xccd7,	// (0x0001d0e5) list_double2_large_graphic_pane_g1

0xcba1,	// (0x0001cfaf) list_double2_large_graphic_pane_g2_ParamLimits

0xcba1,	// (0x0001cfaf) list_double2_large_graphic_pane_g2

0xcbb2,	// (0x0001cfc0) list_double2_large_graphic_pane_g3_ParamLimits

0xcbb2,	// (0x0001cfc0) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001fa1a) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001fa1a) list_double2_large_graphic_pane_g

0xcce3,	// (0x0001d0f1) list_double2_large_graphic_pane_t1_ParamLimits

0xcce3,	// (0x0001d0f1) list_double2_large_graphic_pane_t1

0xccf9,	// (0x0001d107) list_double2_large_graphic_pane_t2_ParamLimits

0xccf9,	// (0x0001d107) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0001fa21) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0001fa21) list_double2_large_graphic_pane_t

0xcd0b,	// (0x0001d119) list_double_heading_pane_g1_ParamLimits

0xcd0b,	// (0x0001d119) list_double_heading_pane_g1

0xcd1c,	// (0x0001d12a) list_double_heading_pane_g2_ParamLimits

0xcd1c,	// (0x0001d12a) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0001fa26) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0001fa26) list_double_heading_pane_g

0xcd28,	// (0x0001d136) list_double_heading_pane_t1_ParamLimits

0xcd28,	// (0x0001d136) list_double_heading_pane_t1

0xcd3e,	// (0x0001d14c) list_double_heading_pane_t2_ParamLimits

0xcd3e,	// (0x0001d14c) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0001fa2b) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0001fa2b) list_double_heading_pane_t

0x2d4a,	// (0x00013158) list_double_graphic_heading_pane_g1_ParamLimits

0x2d4a,	// (0x00013158) list_double_graphic_heading_pane_g1

0xcd0b,	// (0x0001d119) list_double_graphic_heading_pane_g2_ParamLimits

0xcd0b,	// (0x0001d119) list_double_graphic_heading_pane_g2

0xcd1c,	// (0x0001d12a) list_double_graphic_heading_pane_g3_ParamLimits

0xcd1c,	// (0x0001d12a) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0001fa30) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0001fa30) list_double_graphic_heading_pane_g

0xcd50,	// (0x0001d15e) list_double_graphic_heading_pane_t1_ParamLimits

0xcd50,	// (0x0001d15e) list_double_graphic_heading_pane_t1

0xcd66,	// (0x0001d174) list_double_graphic_heading_pane_t2_ParamLimits

0xcd66,	// (0x0001d174) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0001fa37) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0001fa37) list_double_graphic_heading_pane_t

0xcc88,	// (0x0001d096) list_double_time_pane_g1_ParamLimits

0xcc88,	// (0x0001d096) list_double_time_pane_g1

0x2cdc,	// (0x000130ea) list_double_time_pane_g2_ParamLimits

0x2cdc,	// (0x000130ea) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0001fa3c) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0001fa3c) list_double_time_pane_g

0xcd78,	// (0x0001d186) list_double_time_pane_t1_ParamLimits

0xcd78,	// (0x0001d186) list_double_time_pane_t1

0xcd8e,	// (0x0001d19c) list_double_time_pane_t2_ParamLimits

0xcd8e,	// (0x0001d19c) list_double_time_pane_t2

0xcda0,	// (0x0001d1ae) list_double_time_pane_t3_ParamLimits

0xcda0,	// (0x0001d1ae) list_double_time_pane_t3

0xcdb2,	// (0x0001d1c0) list_double_time_pane_t4_ParamLimits

0xcdb2,	// (0x0001d1c0) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0001fa41) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0001fa41) list_double_time_pane_t

0x3182,	// (0x00013590) list_setting_pane_g1_ParamLimits

0x3182,	// (0x00013590) list_setting_pane_g1

0xcbb2,	// (0x0001cfc0) list_setting_pane_g2_ParamLimits

0xcbb2,	// (0x0001cfc0) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0001fa4a) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0001fa4a) list_setting_pane_g

0xcdc4,	// (0x0001d1d2) list_setting_pane_t1_ParamLimits

0xcdc4,	// (0x0001d1d2) list_setting_pane_t1

0xcddb,	// (0x0001d1e9) list_setting_pane_t2_ParamLimits

0xcddb,	// (0x0001d1e9) list_setting_pane_t2

0x0002,

0xf641,	// (0x0001fa4f) list_setting_pane_t_ParamLimits

0xf641,	// (0x0001fa4f) list_setting_pane_t

0xce1a,	// (0x0001d228) set_value_pane_cp_ParamLimits

0xce1a,	// (0x0001d228) set_value_pane_cp

0x3182,	// (0x00013590) list_setting_number_pane_g1_ParamLimits

0x3182,	// (0x00013590) list_setting_number_pane_g1

0xcbb2,	// (0x0001cfc0) list_setting_number_pane_g2_ParamLimits

0xcbb2,	// (0x0001cfc0) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x0001fa4a) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x0001fa4a) list_setting_number_pane_g

0xce26,	// (0x0001d234) list_setting_number_pane_t1_ParamLimits

0xce26,	// (0x0001d234) list_setting_number_pane_t1

0xce3a,	// (0x0001d248) list_setting_number_pane_t2_ParamLimits

0xce3a,	// (0x0001d248) list_setting_number_pane_t2

0xce51,	// (0x0001d25f) list_setting_number_pane_t3_ParamLimits

0xce51,	// (0x0001d25f) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0001fa56) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0001fa56) list_setting_number_pane_t

0xce1a,	// (0x0001d228) set_value_pane_ParamLimits

0xce1a,	// (0x0001d228) set_value_pane

0x3023,	// (0x00013431) bg_set_opt_pane_ParamLimits

0x3023,	// (0x00013431) bg_set_opt_pane

0x3044,	// (0x00013452) set_value_pane_t1

0x3052,	// (0x00013460) slider_set_pane_cp3

0x305b,	// (0x00013469) volume_small_pane_cp

0x3064,	// (0x00013472) list_form_gen_pane

0x306d,	// (0x0001347b) scroll_pane_cp8

0xce94,	// (0x0001d2a2) form_field_data_pane_ParamLimits

0xce94,	// (0x0001d2a2) form_field_data_pane

0xceab,	// (0x0001d2b9) form_field_data_wide_pane_ParamLimits

0xceab,	// (0x0001d2b9) form_field_data_wide_pane

0xcecb,	// (0x0001d2d9) form_field_popup_pane_ParamLimits

0xcecb,	// (0x0001d2d9) form_field_popup_pane

0xcee3,	// (0x0001d2f1) form_field_popup_wide_pane_ParamLimits

0xcee3,	// (0x0001d2f1) form_field_popup_wide_pane

0x3108,	// (0x00013516) form_field_slider_pane_ParamLimits

0x3108,	// (0x00013516) form_field_slider_pane

0x311b,	// (0x00013529) form_field_slider_wide_pane_ParamLimits

0x311b,	// (0x00013529) form_field_slider_wide_pane

0x312e,	// (0x0001353c) data_form_pane

0xcf04,	// (0x0001d312) form_field_data_pane_t1

0x315c,	// (0x0001356a) input_focus_pane

0x316a,	// (0x00013578) data_form_wide_pane

0x31a2,	// (0x000135b0) form_field_data_wide_pane_t1

0x2976,	// (0x00012d84) input_focus_pane_cp6

0xcf1e,	// (0x0001d32c) form_field_popup_pane_t1

0x315c,	// (0x0001356a) input_focus_pane_cp7

0x31d9,	// (0x000135e7) list_form_pane

0x31ed,	// (0x000135fb) form_field_popup_wide_pane_t1

0x315c,	// (0x0001356a) input_focus_pane_cp8

0x31ff,	// (0x0001360d) list_form_wide_pane

0xcf40,	// (0x0001d34e) form_field_slider_pane_t1_ParamLimits

0xcf40,	// (0x0001d34e) form_field_slider_pane_t1

0xcf58,	// (0x0001d366) form_field_slider_pane_t2_ParamLimits

0xcf58,	// (0x0001d366) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0001fa66) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0001fa66) form_field_slider_pane_t

0x25f3,	// (0x00012a01) input_focus_pane_cp9_ParamLimits

0x25f3,	// (0x00012a01) input_focus_pane_cp9

0xcf6d,	// (0x0001d37b) slider_cont_pane_ParamLimits

0xcf6d,	// (0x0001d37b) slider_cont_pane

0x324b,	// (0x00013659) form_field_slider_wide_pane_t1_ParamLimits

0x324b,	// (0x00013659) form_field_slider_wide_pane_t1

0x325d,	// (0x0001366b) form_field_slider_wide_pane_t2_ParamLimits

0x325d,	// (0x0001366b) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0001fa6b) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0001fa6b) form_field_slider_wide_pane_t

0x25f3,	// (0x00012a01) input_focus_pane_cp10_ParamLimits

0x25f3,	// (0x00012a01) input_focus_pane_cp10

0xcf81,	// (0x0001d38f) slider_cont_pane_cp1_ParamLimits

0xcf81,	// (0x0001d38f) slider_cont_pane_cp1

0xcf95,	// (0x0001d3a3) slider_form_pane_cp

0x328b,	// (0x00013699) input_focus_pane_g1

0x3293,	// (0x000136a1) input_focus_pane_g2

0x329b,	// (0x000136a9) input_focus_pane_g3

0x32a3,	// (0x000136b1) input_focus_pane_g4

0x32ab,	// (0x000136b9) input_focus_pane_g5

0x32b3,	// (0x000136c1) input_focus_pane_g6

0x32bb,	// (0x000136c9) input_focus_pane_g7

0x32c3,	// (0x000136d1) input_focus_pane_g8

0x32cb,	// (0x000136d9) input_focus_pane_g9

0xeba8,	// (0x0001efb6) input_focus_pane_g10

0x0009,

0xf662,	// (0x0001fa70) input_focus_pane_g

0x4fa8,	// (0x000153b6) wait_border_pane_g3_copy1

0xcf9d,	// (0x0001d3ab) data_form_pane_t1

0xeba8,	// (0x0001efb6) wait_anim_pane_g1_copy1

0xdaa2,	// (0x0001deb0) data_form_wide_pane_t1

0xcfb7,	// (0x0001d3c5) list_form_graphic_pane_cp_ParamLimits

0xcfb7,	// (0x0001d3c5) list_form_graphic_pane_cp

0x5eda,	// (0x000162e8) slider_form_pane_g1

0x5ee3,	// (0x000162f1) slider_form_pane_g2

0x0006,

0xf960,	// (0x0001fd6e) slider_form_pane_g

0xcfb7,	// (0x0001d3c5) list_form_graphic_pane_ParamLimits

0xcfb7,	// (0x0001d3c5) list_form_graphic_pane

0x3323,	// (0x00013731) list_form_graphic_pane_g1

0x332b,	// (0x00013739) list_form_graphic_pane_t1_ParamLimits

0x332b,	// (0x00013739) list_form_graphic_pane_t1

0x235e,	// (0x0001276c) list_highlight_pane_cp5_ParamLimits

0x235e,	// (0x0001276c) list_highlight_pane_cp5

0x3340,	// (0x0001374e) find_pane_g1

0x3349,	// (0x00013757) input_find_pane

0x3352,	// (0x00013760) input_find_pane_g1_ParamLimits

0x3352,	// (0x00013760) input_find_pane_g1

0x335e,	// (0x0001376c) input_find_pane_t1_ParamLimits

0x335e,	// (0x0001376c) input_find_pane_t1

0x3373,	// (0x00013781) input_find_pane_t2_ParamLimits

0x3373,	// (0x00013781) input_find_pane_t2

0x0001,

0xf677,	// (0x0001fa85) input_find_pane_t_ParamLimits

0xf677,	// (0x0001fa85) input_find_pane_t

0x3388,	// (0x00013796) input_focus_pane_cp5_ParamLimits

0x3388,	// (0x00013796) input_focus_pane_cp5

0x33a7,	// (0x000137b5) bg_popup_window_pane_cp2_ParamLimits

0x33a7,	// (0x000137b5) bg_popup_window_pane_cp2

0x33b4,	// (0x000137c2) listscroll_menu_pane_ParamLimits

0x33b4,	// (0x000137c2) listscroll_menu_pane

0xcfd5,	// (0x0001d3e3) popup_submenu_window_ParamLimits

0xcfd5,	// (0x0001d3e3) popup_submenu_window

0x33ec,	// (0x000137fa) find_popup_pane_g1

0x33f4,	// (0x00013802) input_popup_find_pane_cp

0x33fe,	// (0x0001380c) input_focus_pane_cp4_ParamLimits

0x33fe,	// (0x0001380c) input_focus_pane_cp4

0x3418,	// (0x00013826) input_popup_find_pane_t1_ParamLimits

0x3418,	// (0x00013826) input_popup_find_pane_t1

0x227e,	// (0x0001268c) bg_popup_sub_pane_cp

0x3446,	// (0x00013854) listscroll_popup_sub_pane

0x344e,	// (0x0001385c) list_submenu_pane_ParamLimits

0x344e,	// (0x0001385c) list_submenu_pane

0x345f,	// (0x0001386d) scroll_pane_cp4

0x3467,	// (0x00013875) list_single_popup_submenu_pane_ParamLimits

0x3467,	// (0x00013875) list_single_popup_submenu_pane

0x347b,	// (0x00013889) list_single_popup_submenu_pane_g1

0x3483,	// (0x00013891) list_single_popup_submenu_pane_t1_ParamLimits

0x3483,	// (0x00013891) list_single_popup_submenu_pane_t1

0x25f3,	// (0x00012a01) bg_active_tab_pane_cp1_ParamLimits

0x25f3,	// (0x00012a01) bg_active_tab_pane_cp1

0x3498,	// (0x000138a6) tabs_2_active_pane_g1

0xd00f,	// (0x0001d41d) tabs_2_active_pane_t1

0x25f3,	// (0x00012a01) bg_passive_tab_pane_cp1_ParamLimits

0x25f3,	// (0x00012a01) bg_passive_tab_pane_cp1

0x3498,	// (0x000138a6) tabs_2_passive_pane_g1

0xd00f,	// (0x0001d41d) tabs_2_passive_pane_t1

0x235e,	// (0x0001276c) bg_active_tab_pane_cp4

0xd021,	// (0x0001d42f) tabs_2_long_active_pane_t1

0x4350,	// (0x0001475e) bg_passive_tab_pane_cp4

0x0d24,	// (0x00011132) list_single_midp_graphic_pane_g4_ParamLimits

0x235e,	// (0x0001276c) bg_active_tab_pane_cp5

0xd034,	// (0x0001d442) tabs_3_long_active_pane_t1

0x4350,	// (0x0001475e) bg_passive_tab_pane_cp5

0x0d24,	// (0x00011132) list_single_midp_graphic_pane_g4

0x235e,	// (0x0001276c) bg_popup_window_pane_cp13_ParamLimits

0x235e,	// (0x0001276c) bg_popup_window_pane_cp13

0x34fa,	// (0x00013908) listscroll_popup_fast_pane_ParamLimits

0x34fa,	// (0x00013908) listscroll_popup_fast_pane

0x3509,	// (0x00013917) grid_popup_fast_pane_ParamLimits

0x3509,	// (0x00013917) grid_popup_fast_pane

0x351b,	// (0x00013929) scroll_pane_cp9_ParamLimits

0x351b,	// (0x00013929) scroll_pane_cp9

0x7e0b,	// (0x00018219) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7e0b,	// (0x00018219) list_single_graphic_hl_pane_t1_cp2

0x353f,	// (0x0001394d) input_focus_pane_cp20_ParamLimits

0x353f,	// (0x0001394d) input_focus_pane_cp20

0x354d,	// (0x0001395b) query_popup_data_pane_t1_ParamLimits

0x354d,	// (0x0001395b) query_popup_data_pane_t1

0x3560,	// (0x0001396e) query_popup_data_pane_t2_ParamLimits

0x3560,	// (0x0001396e) query_popup_data_pane_t2

0x35a6,	// (0x000139b4) query_popup_data_pane_t3_ParamLimits

0x35a6,	// (0x000139b4) query_popup_data_pane_t3

0x35e7,	// (0x000139f5) query_popup_data_pane_t4_ParamLimits

0x35e7,	// (0x000139f5) query_popup_data_pane_t4

0x3623,	// (0x00013a31) query_popup_data_pane_t5_ParamLimits

0x3623,	// (0x00013a31) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0001fa8a) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0001fa8a) query_popup_data_pane_t

0x328b,	// (0x00013699) bg_set_opt_pane_g1

0x3293,	// (0x000136a1) bg_set_opt_pane_g2

0x329b,	// (0x000136a9) bg_set_opt_pane_g3

0x32a3,	// (0x000136b1) bg_set_opt_pane_g4

0x32ab,	// (0x000136b9) bg_set_opt_pane_g5

0x32b3,	// (0x000136c1) bg_set_opt_pane_g6

0x32bb,	// (0x000136c9) bg_set_opt_pane_g7

0x32c3,	// (0x000136d1) bg_set_opt_pane_g8

0x32cb,	// (0x000136d9) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0001fa95) bg_set_opt_pane_g

0x032e,	// (0x0001073c) control_top_pane_stacon_ParamLimits

0x032e,	// (0x0001073c) control_top_pane_stacon

0x0381,	// (0x0001078f) signal_pane_stacon_ParamLimits

0x0381,	// (0x0001078f) signal_pane_stacon

0x3cbd,	// (0x000140cb) stacon_top_pane_g1_ParamLimits

0x3cbd,	// (0x000140cb) stacon_top_pane_g1

0x03a6,	// (0x000107b4) title_pane_stacon_ParamLimits

0x03a6,	// (0x000107b4) title_pane_stacon

0x03d0,	// (0x000107de) uni_indicator_pane_stacon_ParamLimits

0x03d0,	// (0x000107de) uni_indicator_pane_stacon

0x03e5,	// (0x000107f3) battery_pane_stacon_ParamLimits

0x03e5,	// (0x000107f3) battery_pane_stacon

0x0429,	// (0x00010837) control_bottom_pane_stacon_ParamLimits

0x0429,	// (0x00010837) control_bottom_pane_stacon

0x044c,	// (0x0001085a) navi_pane_stacon_ParamLimits

0x044c,	// (0x0001085a) navi_pane_stacon

0x3cdf,	// (0x000140ed) stacon_bottom_pane_g1_ParamLimits

0x3cdf,	// (0x000140ed) stacon_bottom_pane_g1

0x0091,	// (0x0001049f) aid_levels_signal_lsc_ParamLimits

0x0091,	// (0x0001049f) aid_levels_signal_lsc

0x00a7,	// (0x000104b5) signal_pane_stacon_g1_ParamLimits

0x00a7,	// (0x000104b5) signal_pane_stacon_g1

0x00bb,	// (0x000104c9) signal_pane_stacon_g2_ParamLimits

0x00bb,	// (0x000104c9) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x0001faa8) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x0001faa8) signal_pane_stacon_g

0x00f0,	// (0x000104fe) title_pane_stacon_t1_ParamLimits

0x00f0,	// (0x000104fe) title_pane_stacon_t1

0x3667,	// (0x00013a75) uni_indicator_pane_stacon_g1

0x3671,	// (0x00013a7f) uni_indicator_pane_stacon_g2

0x367b,	// (0x00013a89) uni_indicator_pane_stacon_g3

0x3685,	// (0x00013a93) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x0001fab4) uni_indicator_pane_stacon_g

0x0115,	// (0x00010523) control_top_pane_stacon_g1

0x011d,	// (0x0001052b) control_top_pane_stacon_t1_ParamLimits

0x011d,	// (0x0001052b) control_top_pane_stacon_t1

0x0154,	// (0x00010562) aid_levels_battery_lsc_ParamLimits

0x0154,	// (0x00010562) aid_levels_battery_lsc

0x016b,	// (0x00010579) battery_pane_stacon_g1_ParamLimits

0x016b,	// (0x00010579) battery_pane_stacon_g1

0x017e,	// (0x0001058c) battery_pane_stacon_g2_ParamLimits

0x017e,	// (0x0001058c) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x0001fabd) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x0001fabd) battery_pane_stacon_g

0x01bc,	// (0x000105ca) navi_icon_pane_stacon

0x01d0,	// (0x000105de) navi_navi_pane_stacon

0x01bc,	// (0x000105ca) navi_text_pane_stacon

0x0115,	// (0x00010523) control_bottom_pane_stacon_g1

0x01e4,	// (0x000105f2) control_bottom_pane_stacon_t1_ParamLimits

0x01e4,	// (0x000105f2) control_bottom_pane_stacon_t1

0xd046,	// (0x0001d454) grid_app_pane_ParamLimits

0xd046,	// (0x0001d454) grid_app_pane

0xd07e,	// (0x0001d48c) scroll_pane_cp15_ParamLimits

0xd07e,	// (0x0001d48c) scroll_pane_cp15

0xd093,	// (0x0001d4a1) cell_app_pane_ParamLimits

0xd093,	// (0x0001d4a1) cell_app_pane

0xd0d8,	// (0x0001d4e6) cell_app_pane_g1_ParamLimits

0xd0d8,	// (0x0001d4e6) cell_app_pane_g1

0x372a,	// (0x00013b38) cell_app_pane_g2_ParamLimits

0x372a,	// (0x00013b38) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x0001fac2) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x0001fac2) cell_app_pane_g

0xd0fc,	// (0x0001d50a) cell_app_pane_t1_ParamLimits

0xd0fc,	// (0x0001d50a) cell_app_pane_t1

0x374d,	// (0x00013b5b) grid_highlight_pane_ParamLimits

0x374d,	// (0x00013b5b) grid_highlight_pane

0x328b,	// (0x00013699) cell_highlight_pane_g1

0x3293,	// (0x000136a1) cell_highlight_pane_g2

0x329b,	// (0x000136a9) cell_highlight_pane_g3

0x32a3,	// (0x000136b1) cell_highlight_pane_g4

0x32ab,	// (0x000136b9) cell_highlight_pane_g5

0x32b3,	// (0x000136c1) cell_highlight_pane_g6

0x32bb,	// (0x000136c9) cell_highlight_pane_g7

0x32c3,	// (0x000136d1) cell_highlight_pane_g8

0x32cb,	// (0x000136d9) cell_highlight_pane_g9

0xeba8,	// (0x0001efb6) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x0001fa70) cell_highlight_pane_g

0x375e,	// (0x00013b6c) bg_scroll_pane

0x022e,	// (0x0001063c) scroll_handle_pane

0x37a5,	// (0x00013bb3) scroll_bg_pane_g1

0x37ba,	// (0x00013bc8) scroll_bg_pane_g2

0x37d2,	// (0x00013be0) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x0001fac7) scroll_bg_pane_g

0x37e7,	// (0x00013bf5) scroll_handle_focus_pane_ParamLimits

0x37e7,	// (0x00013bf5) scroll_handle_focus_pane

0x37a5,	// (0x00013bb3) scroll_handle_pane_g1

0x37f4,	// (0x00013c02) scroll_handle_pane_g2

0x37d2,	// (0x00013be0) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x0001face) scroll_handle_pane_g

0x33fe,	// (0x0001380c) bg_popup_sub_pane_cp21_ParamLimits

0x33fe,	// (0x0001380c) bg_popup_sub_pane_cp21

0x3808,	// (0x00013c16) popup_fep_japan_predictive_window_t1_ParamLimits

0x3808,	// (0x00013c16) popup_fep_japan_predictive_window_t1

0x3822,	// (0x00013c30) popup_fep_japan_predictive_window_t2_ParamLimits

0x3822,	// (0x00013c30) popup_fep_japan_predictive_window_t2

0x3855,	// (0x00013c63) popup_fep_japan_predictive_window_t3_ParamLimits

0x3855,	// (0x00013c63) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x0001fad5) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x0001fad5) popup_fep_japan_predictive_window_t

0x227e,	// (0x0001268c) bg_popup_sub_pane_cp23

0x388c,	// (0x00013c9a) listscroll_japin_cand_pane

0x3894,	// (0x00013ca2) popup_fep_japan_candidate_window_t1

0x38a2,	// (0x00013cb0) candidate_pane_ParamLimits

0x38a2,	// (0x00013cb0) candidate_pane

0x38b4,	// (0x00013cc2) scroll_pane_cp30

0x38bc,	// (0x00013cca) list_single_popup_jap_candidate_pane_ParamLimits

0x38bc,	// (0x00013cca) list_single_popup_jap_candidate_pane

0x227e,	// (0x0001268c) list_highlight_pane_cp30

0x38d1,	// (0x00013cdf) list_single_popup_jap_candidate_pane_t1

0x38e0,	// (0x00013cee) level_1_signal

0x38f2,	// (0x00013d00) level_2_signal

0x3905,	// (0x00013d13) level_3_signal

0x3918,	// (0x00013d26) level_4_signal

0x392b,	// (0x00013d39) level_5_signal

0x393e,	// (0x00013d4c) level_6_signal

0x3951,	// (0x00013d5f) level_7_signal

0x38e0,	// (0x00013cee) level_1_battery

0x38f2,	// (0x00013d00) level_2_battery

0x3905,	// (0x00013d13) level_3_battery

0x3918,	// (0x00013d26) level_4_battery

0x392b,	// (0x00013d39) level_5_battery

0x393e,	// (0x00013d4c) level_6_battery

0x3951,	// (0x00013d5f) level_7_battery

0x397c,	// (0x00013d8a) list_menu_pane_ParamLimits

0x397c,	// (0x00013d8a) list_menu_pane

0x3992,	// (0x00013da0) scroll_pane_cp25_ParamLimits

0x3992,	// (0x00013da0) scroll_pane_cp25

0x39ab,	// (0x00013db9) list_double2_graphic_pane_cp2_ParamLimits

0x39ab,	// (0x00013db9) list_double2_graphic_pane_cp2

0x39ab,	// (0x00013db9) list_double2_large_graphic_pane_cp2_ParamLimits

0x39ab,	// (0x00013db9) list_double2_large_graphic_pane_cp2

0x39ab,	// (0x00013db9) list_double2_pane_cp2_ParamLimits

0x39ab,	// (0x00013db9) list_double2_pane_cp2

0x39ab,	// (0x00013db9) list_double_graphic_pane_cp2_ParamLimits

0x39ab,	// (0x00013db9) list_double_graphic_pane_cp2

0x39ab,	// (0x00013db9) list_double_large_graphic_pane_cp2_ParamLimits

0x39ab,	// (0x00013db9) list_double_large_graphic_pane_cp2

0x39ab,	// (0x00013db9) list_double_number_pane_cp2_ParamLimits

0x39ab,	// (0x00013db9) list_double_number_pane_cp2

0x39ab,	// (0x00013db9) list_double_pane_cp2_ParamLimits

0x39ab,	// (0x00013db9) list_double_pane_cp2

0xd113,	// (0x0001d521) list_single_2graphic_pane_cp2_ParamLimits

0xd113,	// (0x0001d521) list_single_2graphic_pane_cp2

0xd113,	// (0x0001d521) list_single_graphic_heading_pane_cp2_ParamLimits

0xd113,	// (0x0001d521) list_single_graphic_heading_pane_cp2

0xd113,	// (0x0001d521) list_single_graphic_pane_cp2_ParamLimits

0xd113,	// (0x0001d521) list_single_graphic_pane_cp2

0xd113,	// (0x0001d521) list_single_heading_pane_cp2_ParamLimits

0xd113,	// (0x0001d521) list_single_heading_pane_cp2

0x39e8,	// (0x00013df6) list_single_large_graphic_pane_cp2_ParamLimits

0x39e8,	// (0x00013df6) list_single_large_graphic_pane_cp2

0xd113,	// (0x0001d521) list_single_number_heading_pane_cp2_ParamLimits

0xd113,	// (0x0001d521) list_single_number_heading_pane_cp2

0xd113,	// (0x0001d521) list_single_number_pane_cp2_ParamLimits

0xd113,	// (0x0001d521) list_single_number_pane_cp2

0xd125,	// (0x0001d533) list_single_pane_cp2_ParamLimits

0xd125,	// (0x0001d533) list_single_pane_cp2

0x3a7d,	// (0x00013e8b) bg_popup_sub_pane_cp22

0x02e0,	// (0x000106ee) popup_side_volume_key_window_g1

0x030a,	// (0x00010718) popup_side_volume_key_window_t1

0x0326,	// (0x00010734) volume_small_pane_cp1

0x25f3,	// (0x00012a01) bg_popup_sub_pane_cp24_ParamLimits

0x25f3,	// (0x00012a01) bg_popup_sub_pane_cp24

0x3a93,	// (0x00013ea1) fep_china_uni_candidate_pane_ParamLimits

0x3a93,	// (0x00013ea1) fep_china_uni_candidate_pane

0x3aa7,	// (0x00013eb5) fep_china_uni_entry_pane

0x3ab7,	// (0x00013ec5) popup_fep_china_uni_window_g1

0x3ad3,	// (0x00013ee1) fep_china_uni_entry_pane_g1

0x3adb,	// (0x00013ee9) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x0001fb06) fep_china_uni_entry_pane_g

0x3ae3,	// (0x00013ef1) fep_entry_item_pane

0x3aed,	// (0x00013efb) fep_candidate_item_pane

0x3af5,	// (0x00013f03) fep_china_uni_candidate_pane_g1

0x3afd,	// (0x00013f0b) fep_china_uni_candidate_pane_g2

0x3b05,	// (0x00013f13) fep_china_uni_candidate_pane_g3

0x3b0d,	// (0x00013f1b) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x0001fb0b) fep_china_uni_candidate_pane_g

0xeba8,	// (0x0001efb6) fep_entry_item_pane_g1

0x3b15,	// (0x00013f23) fep_entry_item_pane_t1_ParamLimits

0x3b15,	// (0x00013f23) fep_entry_item_pane_t1

0x3b2b,	// (0x00013f39) fep_candidate_item_pane_t1_ParamLimits

0x3b2b,	// (0x00013f39) fep_candidate_item_pane_t1

0x3b40,	// (0x00013f4e) fep_candidate_item_pane_t2_ParamLimits

0x3b40,	// (0x00013f4e) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x0001fb14) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x0001fb14) fep_candidate_item_pane_t

0x235e,	// (0x0001276c) list_highlight_pane_cp31_ParamLimits

0x235e,	// (0x0001276c) list_highlight_pane_cp31

0x3b52,	// (0x00013f60) level_1_signal_lsc

0x3b5b,	// (0x00013f69) level_2_signal_lsc

0x3b64,	// (0x00013f72) level_3_signal_lsc

0x3b6d,	// (0x00013f7b) level_4_signal_lsc

0x3b76,	// (0x00013f84) level_5_signal_lsc

0x3b7f,	// (0x00013f8d) level_6_signal_lsc

0x3b88,	// (0x00013f96) level_7_signal_lsc

0x3b88,	// (0x00013f96) level_1_battery_lsc

0x3b91,	// (0x00013f9f) level_2_battery_lsc

0x3b9a,	// (0x00013fa8) level_3_battery_lsc

0x3ba3,	// (0x00013fb1) level_4_battery_lsc

0x3bac,	// (0x00013fba) level_5_battery_lsc

0x3bb5,	// (0x00013fc3) level_6_battery_lsc

0x3b52,	// (0x00013f60) level_7_battery_lsc

0x3bbe,	// (0x00013fcc) scroll_handle_focus_pane_g1

0x3bc7,	// (0x00013fd5) scroll_handle_focus_pane_g2

0x3bd0,	// (0x00013fde) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x0001fb19) scroll_handle_focus_pane_g

0x3bd9,	// (0x00013fe7) list_single_2graphic_pane_g1_ParamLimits

0x3bd9,	// (0x00013fe7) list_single_2graphic_pane_g1

0xcb76,	// (0x0001cf84) list_single_2graphic_pane_g2_ParamLimits

0xcb76,	// (0x0001cf84) list_single_2graphic_pane_g2

0x2bc4,	// (0x00012fd2) list_single_2graphic_pane_g3_ParamLimits

0x2bc4,	// (0x00012fd2) list_single_2graphic_pane_g3

0x3be5,	// (0x00013ff3) list_single_2graphic_pane_g4_ParamLimits

0x3be5,	// (0x00013ff3) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x0001fb20) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x0001fb20) list_single_2graphic_pane_g

0x3bf6,	// (0x00014004) list_single_2graphic_pane_t1_ParamLimits

0x3bf6,	// (0x00014004) list_single_2graphic_pane_t1

0xd1b2,	// (0x0001d5c0) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd1b2,	// (0x0001d5c0) list_double2_graphic_large_graphic_pane_g1

0xcba1,	// (0x0001cfaf) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xcba1,	// (0x0001cfaf) list_double2_graphic_large_graphic_pane_g2

0xcbb2,	// (0x0001cfc0) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xcbb2,	// (0x0001cfc0) list_double2_graphic_large_graphic_pane_g3

0xd1c4,	// (0x0001d5d2) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd1c4,	// (0x0001d5d2) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x0001fb29) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x0001fb29) list_double2_graphic_large_graphic_pane_g

0xd1d0,	// (0x0001d5de) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd1d0,	// (0x0001d5de) list_double2_graphic_large_graphic_pane_t1

0xd1e6,	// (0x0001d5f4) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd1e6,	// (0x0001d5f4) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x0001fb32) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x0001fb32) list_double2_graphic_large_graphic_pane_t

0x3daa,	// (0x000141b8) popup_fast_swap_window_ParamLimits

0x3daa,	// (0x000141b8) popup_fast_swap_window

0x3dc6,	// (0x000141d4) popup_side_volume_key_window

0x3de2,	// (0x000141f0) stacon_top_pane

0x3dec,	// (0x000141fa) status_pane_ParamLimits

0x3dec,	// (0x000141fa) status_pane

0xeb9e,	// (0x0001efac) status_small_pane

0x227e,	// (0x0001268c) control_pane

0x227e,	// (0x0001268c) stacon_bottom_pane

0x306d,	// (0x0001347b) scroll_pane_cp121

0x3064,	// (0x00013472) set_content_pane

0x3c68,	// (0x00014076) bg_active_tab_pane_g1_cp1

0x3c71,	// (0x0001407f) bg_active_tab_pane_g2_cp1

0x3c7a,	// (0x00014088) bg_active_tab_pane_g3_cp1

0x3c68,	// (0x00014076) bg_passive_tab_pane_g1_cp1

0x3c71,	// (0x0001407f) bg_passive_tab_pane_g2_cp1

0x3c7a,	// (0x00014088) bg_passive_tab_pane_g3_cp1

0x3c83,	// (0x00014091) bg_active_tab_pane_g1_cp2

0x3c71,	// (0x0001407f) bg_active_tab_pane_g2_cp2

0x3c8c,	// (0x0001409a) bg_active_tab_pane_g3_cp2

0x3c83,	// (0x00014091) bg_passive_tab_pane_g1_cp2

0x3c71,	// (0x0001407f) bg_passive_tab_pane_g2_cp2

0x3c8c,	// (0x0001409a) bg_passive_tab_pane_g3_cp2

0x3c95,	// (0x000140a3) bg_active_tab_pane_g1_cp3

0x3c71,	// (0x0001407f) bg_active_tab_pane_g2_cp3

0x3c9e,	// (0x000140ac) bg_active_tab_pane_g3_cp3

0x3c95,	// (0x000140a3) bg_passive_tab_pane_g1_cp3

0x3c71,	// (0x0001407f) bg_passive_tab_pane_g2_cp3

0x3c9e,	// (0x000140ac) bg_passive_tab_pane_g3_cp3

0x3ca7,	// (0x000140b5) bg_active_tab_pane_g1_cp4

0x3c71,	// (0x0001407f) bg_active_tab_pane_g2_cp4

0x3cb2,	// (0x000140c0) bg_active_tab_pane_g3_cp4

0x3ca7,	// (0x000140b5) bg_passive_tab_pane_g1_cp4

0x3c71,	// (0x0001407f) bg_passive_tab_pane_g2_cp4

0x3cb2,	// (0x000140c0) bg_passive_tab_pane_g3_cp4

0x3cfb,	// (0x00014109) bg_active_tab_pane_g1_cp5

0x3c71,	// (0x0001407f) bg_active_tab_pane_g2_cp5

0x3d04,	// (0x00014112) bg_active_tab_pane_g3_cp5

0x3cfb,	// (0x00014109) bg_passive_tab_pane_g1_cp5

0x3c71,	// (0x0001407f) bg_passive_tab_pane_g2_cp5

0x3d04,	// (0x00014112) bg_passive_tab_pane_g3_cp5

0x6611,	// (0x00016a1f) list_set_graphic_pane_ParamLimits

0x6611,	// (0x00016a1f) list_set_graphic_pane

0x227e,	// (0x0001268c) bg_set_opt_pane_cp4

0x3d2d,	// (0x0001413b) list_set_graphic_pane_g1_ParamLimits

0x3d2d,	// (0x0001413b) list_set_graphic_pane_g1

0x3d39,	// (0x00014147) list_set_graphic_pane_g2_ParamLimits

0x3d39,	// (0x00014147) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x0001fb37) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x0001fb37) list_set_graphic_pane_g

0x0009,

0xfa9e,	// (0x0001feac) volume_small_pane_cp_g

0x3d5d,	// (0x0001416b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3d5d,	// (0x0001416b) list_double2_large_graphic_pane_g1_cp2

0x3d69,	// (0x00014177) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3d69,	// (0x00014177) list_double2_large_graphic_pane_g2_cp2

0x3d7a,	// (0x00014188) list_double2_large_graphic_pane_g3_cp2

0x3d82,	// (0x00014190) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3d82,	// (0x00014190) list_double2_large_graphic_pane_t1_cp2

0x3d98,	// (0x000141a6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3d98,	// (0x000141a6) list_double2_large_graphic_pane_t2_cp2

0x5a7b,	// (0x00015e89) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5a7b,	// (0x00015e89) list_double_large_graphic_pane_g1_cp2

0x5a8c,	// (0x00015e9a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5a8c,	// (0x00015e9a) list_double_large_graphic_pane_g2_cp2

0x3f08,	// (0x00014316) list_double_large_graphic_pane_g3_cp2

0x5a9d,	// (0x00015eab) list_double_large_graphic_pane_g4_cp

0x5aa5,	// (0x00015eb3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5aa5,	// (0x00015eb3) list_double_large_graphic_pane_t1_cp2

0x5abc,	// (0x00015eca) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5abc,	// (0x00015eca) list_double_large_graphic_pane_t2_cp2

0x3dfa,	// (0x00014208) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3dfa,	// (0x00014208) list_double2_graphic_pane_g1_cp2

0x3e08,	// (0x00014216) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3e08,	// (0x00014216) list_double2_graphic_pane_g2_cp2

0x3e19,	// (0x00014227) list_double2_graphic_pane_g3_cp2

0x3e23,	// (0x00014231) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3e23,	// (0x00014231) list_double2_graphic_pane_t1_cp2

0x3e39,	// (0x00014247) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3e39,	// (0x00014247) list_double2_graphic_pane_t2_cp2

0x3e4b,	// (0x00014259) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3e4b,	// (0x00014259) list_single_number_heading_pane_g1_cp2

0x3e57,	// (0x00014265) list_single_number_heading_pane_g2_cp2

0x3e5f,	// (0x0001426d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3e5f,	// (0x0001426d) list_single_number_heading_pane_t1_cp2

0x3e75,	// (0x00014283) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3e75,	// (0x00014283) list_single_number_heading_pane_t2_cp2

0x3e87,	// (0x00014295) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3e87,	// (0x00014295) list_single_number_heading_pane_t3_cp2

0x3e4b,	// (0x00014259) list_single_heading_pane_g1_cp2_ParamLimits

0x3e4b,	// (0x00014259) list_single_heading_pane_g1_cp2

0x3e57,	// (0x00014265) list_single_heading_pane_g2_cp2

0x3e5f,	// (0x0001426d) list_single_heading_pane_t1_cp2_ParamLimits

0x3e5f,	// (0x0001426d) list_single_heading_pane_t1_cp2

0x5883,	// (0x00015c91) list_single_heading_pane_t2_cp2_ParamLimits

0x5883,	// (0x00015c91) list_single_heading_pane_t2_cp2

0x57cb,	// (0x00015bd9) list_double_graphic_pane_g1_cp2_ParamLimits

0x57cb,	// (0x00015bd9) list_double_graphic_pane_g1_cp2

0x57d7,	// (0x00015be5) list_double_graphic_pane_g2_cp2_ParamLimits

0x57d7,	// (0x00015be5) list_double_graphic_pane_g2_cp2

0x57e6,	// (0x00015bf4) list_double_graphic_pane_g3_cp2

0x57ee,	// (0x00015bfc) list_double_graphic_pane_t1_cp2_ParamLimits

0x57ee,	// (0x00015bfc) list_double_graphic_pane_t1_cp2

0x5804,	// (0x00015c12) list_double_graphic_pane_t2_cp2_ParamLimits

0x5804,	// (0x00015c12) list_double_graphic_pane_t2_cp2

0x3efc,	// (0x0001430a) list_double_number_pane_g1_cp2_ParamLimits

0x3efc,	// (0x0001430a) list_double_number_pane_g1_cp2

0x3f08,	// (0x00014316) list_double_number_pane_g2_cp2

0x578f,	// (0x00015b9d) list_double_number_pane_t1_cp2_ParamLimits

0x578f,	// (0x00015b9d) list_double_number_pane_t1_cp2

0x57a3,	// (0x00015bb1) list_double_number_pane_t2_cp2_ParamLimits

0x57a3,	// (0x00015bb1) list_double_number_pane_t2_cp2

0x57b9,	// (0x00015bc7) list_double_number_pane_t3_cp2_ParamLimits

0x57b9,	// (0x00015bc7) list_double_number_pane_t3_cp2

0x5678,	// (0x00015a86) list_single_graphic_pane_g1_cp2_ParamLimits

0x5678,	// (0x00015a86) list_single_graphic_pane_g1_cp2

0x3f69,	// (0x00014377) list_single_graphic_pane_g2_cp2_ParamLimits

0x3f69,	// (0x00014377) list_single_graphic_pane_g2_cp2

0x3f75,	// (0x00014383) list_single_graphic_pane_g3_cp2

0x564e,	// (0x00015a5c) list_single_graphic_pane_t1_cp2_ParamLimits

0x564e,	// (0x00015a5c) list_single_graphic_pane_t1_cp2

0x3f69,	// (0x00014377) list_single_number_pane_g1_cp2_ParamLimits

0x3f69,	// (0x00014377) list_single_number_pane_g1_cp2

0x3f75,	// (0x00014383) list_single_number_pane_g2_cp2

0x564e,	// (0x00015a5c) list_single_number_pane_t1_cp2_ParamLimits

0x564e,	// (0x00015a5c) list_single_number_pane_t1_cp2

0x5664,	// (0x00015a72) list_single_number_pane_t2_cp2_ParamLimits

0x5664,	// (0x00015a72) list_single_number_pane_t2_cp2

0x3d69,	// (0x00014177) list_double2_pane_g1_cp2_ParamLimits

0x3d69,	// (0x00014177) list_double2_pane_g1_cp2

0x3d7a,	// (0x00014188) list_double2_pane_g2_cp2

0x3ed4,	// (0x000142e2) list_double2_pane_t1_cp2_ParamLimits

0x3ed4,	// (0x000142e2) list_double2_pane_t1_cp2

0x3eea,	// (0x000142f8) list_double2_pane_t2_cp2_ParamLimits

0x3eea,	// (0x000142f8) list_double2_pane_t2_cp2

0x3efc,	// (0x0001430a) list_double_pane_g1_cp2_ParamLimits

0x3efc,	// (0x0001430a) list_double_pane_g1_cp2

0x3f08,	// (0x00014316) list_double_pane_g2_cp2

0x3f10,	// (0x0001431e) list_double_pane_t1_cp2_ParamLimits

0x3f10,	// (0x0001431e) list_double_pane_t1_cp2

0x3f26,	// (0x00014334) list_double_pane_t2_cp2_ParamLimits

0x3f26,	// (0x00014334) list_double_pane_t2_cp2

0x3f59,	// (0x00014367) list_single_pane_cp2_g3

0x3f69,	// (0x00014377) list_single_pane_g1_cp2_ParamLimits

0x3f69,	// (0x00014377) list_single_pane_g1_cp2

0x3f75,	// (0x00014383) list_single_pane_g2_cp2

0x3f7d,	// (0x0001438b) list_single_pane_t1_cp2_ParamLimits

0x3f7d,	// (0x0001438b) list_single_pane_t1_cp2

0x3f95,	// (0x000143a3) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3f95,	// (0x000143a3) list_single_large_graphic_pane_g1_cp2

0x2bb8,	// (0x00012fc6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2bb8,	// (0x00012fc6) list_single_large_graphic_pane_g2_cp2

0x3fa1,	// (0x000143af) list_single_large_graphic_pane_g3_cp2

0x3fa9,	// (0x000143b7) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3fa9,	// (0x000143b7) list_single_large_graphic_pane_g4_cp1

0x3fc3,	// (0x000143d1) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3fc3,	// (0x000143d1) list_single_large_graphic_pane_t1_cp2

0x561a,	// (0x00015a28) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x561a,	// (0x00015a28) list_single_graphic_heading_pane_g1_cp2

0x55e7,	// (0x000159f5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x55e7,	// (0x000159f5) list_single_graphic_heading_pane_g4_cp2

0x3f75,	// (0x00014383) list_single_graphic_heading_pane_g5_cp2

0x5626,	// (0x00015a34) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5626,	// (0x00015a34) list_single_graphic_heading_pane_t1_cp2

0x563c,	// (0x00015a4a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x563c,	// (0x00015a4a) list_single_graphic_heading_pane_t2_cp2

0x55db,	// (0x000159e9) list_single_2graphic_pane_g1_cp2_ParamLimits

0x55db,	// (0x000159e9) list_single_2graphic_pane_g1_cp2

0x55e7,	// (0x000159f5) list_single_2graphic_pane_g2_cp2_ParamLimits

0x55e7,	// (0x000159f5) list_single_2graphic_pane_g2_cp2

0x3f75,	// (0x00014383) list_single_2graphic_pane_g3_cp2

0x55f8,	// (0x00015a06) list_single_2graphic_pane_g4_cp2_ParamLimits

0x55f8,	// (0x00015a06) list_single_2graphic_pane_g4_cp2

0x5604,	// (0x00015a12) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5604,	// (0x00015a12) list_single_2graphic_pane_t1_cp2

0xeba8,	// (0x0001efb6) list_highlight_pane_g10_cp1

0x51b3,	// (0x000155c1) list_highlight_pane_g1_cp1

0x51bb,	// (0x000155c9) list_highlight_pane_g2_cp1

0x51c3,	// (0x000155d1) list_highlight_pane_g3_cp1

0x51cb,	// (0x000155d9) list_highlight_pane_g4_cp1

0x51d3,	// (0x000155e1) list_highlight_pane_g5_cp1

0x51db,	// (0x000155e9) list_highlight_pane_g6_cp1

0x51e3,	// (0x000155f1) list_highlight_pane_g7_cp1

0x51eb,	// (0x000155f9) list_highlight_pane_g8_cp1

0x51f3,	// (0x00015601) list_highlight_pane_g9_cp1

0xd7cc,	// (0x0001dbda) form_field_slider_pane_t3

0xd7da,	// (0x0001dbe8) form_field_slider_pane_t4

0x50ef,	// (0x000154fd) slider_form_pane_ParamLimits

0x50ef,	// (0x000154fd) slider_form_pane

0x227e,	// (0x0001268c) control_abbreviations

0x227e,	// (0x0001268c) control_conventions

0x227e,	// (0x0001268c) control_definitions

0x227e,	// (0x0001268c) format_table_attribute

0x58cd,	// (0x00015cdb) bg_popup_preview_window_pane_g9

0x227e,	// (0x0001268c) format_table_data2

0x227e,	// (0x0001268c) format_table_data3

0x227e,	// (0x0001268c) format_table_data_example

0x0008,

0x227e,	// (0x0001268c) intro_purpose

0xf8c0,	// (0x0001fcce) bg_popup_preview_window_pane_g

0x227e,	// (0x0001268c) texts_category

0x227e,	// (0x0001268c) texts_graphics

0x3fd9,	// (0x000143e7) text_digital

0x3fe8,	// (0x000143f6) text_primary

0x3ff7,	// (0x00014405) text_primary_small

0x4006,	// (0x00014414) text_secondary

0x4015,	// (0x00014423) text_title

0x60f3,	// (0x00016501) bg_passive_tab_pane_g1_cp3_srt

0x3c71,	// (0x0001407f) bg_passive_tab_pane_g2_cp3_srt

0x60fc,	// (0x0001650a) bg_passive_tab_pane_g3_cp3_srt

0x25f3,	// (0x00012a01) bg_active_tab_pane_cp3_srt_ParamLimits

0x25f3,	// (0x00012a01) bg_active_tab_pane_cp3_srt

0x6105,	// (0x00016513) tabs_4_active_pane_srt_g1

0xdb75,	// (0x0001df83) tabs_4_active_pane_srt_t1_ParamLimits

0xdb75,	// (0x0001df83) tabs_4_active_pane_srt_t1

0x60f3,	// (0x00016501) bg_active_tab_pane_g1_cp3_copy1

0x3c71,	// (0x0001407f) bg_active_tab_pane_g2_cp3_copy1

0x60fc,	// (0x0001650a) bg_active_tab_pane_g3_cp3_copy1

0x235e,	// (0x0001276c) tabs_2_long_active_pane_srt_ParamLimits

0x235e,	// (0x0001276c) tabs_2_long_active_pane_srt

0x235e,	// (0x0001276c) tabs_2_long_passive_pane_srt_ParamLimits

0x235e,	// (0x0001276c) tabs_2_long_passive_pane_srt

0x4350,	// (0x0001475e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4350,	// (0x0001475e) bg_passive_tab_pane_cp4_srt

0x5d0d,	// (0x0001611b) bg_passive_tab_pane_g1_cp4_srt

0x3c71,	// (0x0001407f) bg_passive_tab_pane_g2_cp4_srt

0x5d16,	// (0x00016124) bg_passive_tab_pane_g3_cp4_srt

0x235e,	// (0x0001276c) bg_active_tab_pane_cp4_srt_ParamLimits

0x235e,	// (0x0001276c) bg_active_tab_pane_cp4_srt

0xd937,	// (0x0001dd45) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd937,	// (0x0001dd45) tabs_2_long_active_pane_srt_t1

0x5d0d,	// (0x0001611b) bg_active_tab_pane_g1_cp4_srt

0x3c71,	// (0x0001407f) bg_active_tab_pane_g2_cp4_srt

0x5d16,	// (0x00016124) bg_active_tab_pane_g3_cp4_srt

0x25f3,	// (0x00012a01) tabs_3_long_active_pane_srt_ParamLimits

0x25f3,	// (0x00012a01) tabs_3_long_active_pane_srt

0x25f3,	// (0x00012a01) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x25f3,	// (0x00012a01) tabs_3_long_passive_pane_cp_srt

0x25f3,	// (0x00012a01) tabs_3_long_passive_pane_srt_ParamLimits

0x25f3,	// (0x00012a01) tabs_3_long_passive_pane_srt

0x4350,	// (0x0001475e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4350,	// (0x0001475e) bg_passive_tab_pane_cp5_srt

0x3cfb,	// (0x00014109) bg_passive_tab_pane_g1_cp5_srt

0x3c71,	// (0x0001407f) bg_passive_tab_pane_g2_cp5_srt

0x3d04,	// (0x00014112) bg_passive_tab_pane_g3_cp5_srt

0x235e,	// (0x0001276c) bg_active_tab_pane_cp5_srt_ParamLimits

0x235e,	// (0x0001276c) bg_active_tab_pane_cp5_srt

0xd921,	// (0x0001dd2f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd921,	// (0x0001dd2f) tabs_3_long_active_pane_srt_t1

0x3cfb,	// (0x00014109) bg_active_tab_pane_g1_cp5_srt

0x3c71,	// (0x0001407f) bg_active_tab_pane_g2_cp5_srt

0x3d04,	// (0x00014112) bg_active_tab_pane_g3_cp5_srt

0x5ced,	// (0x000160fb) navi_text_pane_srt_t1

0x5ce5,	// (0x000160f3) navi_icon_pane_srt_g1

0x41ea,	// (0x000145f8) midp_editing_number_pane_srt

0x4024,	// (0x00014432) midp_ticker_pane_srt

0x41f2,	// (0x00014600) midp_ticker_pane_srt_g1

0x41fa,	// (0x00014608) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x0001fb56) midp_ticker_pane_srt_g

0x4202,	// (0x00014610) midp_ticker_pane_srt_t1

0x5cd6,	// (0x000160e4) midp_editing_number_pane_t1_copy1

0xd1f8,	// (0x0001d606) listscroll_midp_pane

0xd1f8,	// (0x0001d606) midp_form_pane

0x409c,	// (0x000144aa) midp_info_popup_window_ParamLimits

0x409c,	// (0x000144aa) midp_info_popup_window

0x33fe,	// (0x0001380c) bg_popup_sub_pane_cp50_ParamLimits

0x33fe,	// (0x0001380c) bg_popup_sub_pane_cp50

0x4dd7,	// (0x000151e5) listscroll_midp_info_pane_ParamLimits

0x4dd7,	// (0x000151e5) listscroll_midp_info_pane

0x4db7,	// (0x000151c5) listscroll_form_midp_pane_ParamLimits

0x4db7,	// (0x000151c5) listscroll_form_midp_pane

0x4dc3,	// (0x000151d1) scroll_bar_cp050

0x4db7,	// (0x000151c5) list_midp_pane

0x6e72,	// (0x00017280) signal_pane_g2_cp

0x4cd1,	// (0x000150df) listscroll_midp_info_pane_t1_ParamLimits

0x4cd1,	// (0x000150df) listscroll_midp_info_pane_t1

0x4ce9,	// (0x000150f7) listscroll_midp_info_pane_t2_ParamLimits

0x4ce9,	// (0x000150f7) listscroll_midp_info_pane_t2

0x4d27,	// (0x00015135) listscroll_midp_info_pane_t3_ParamLimits

0x4d27,	// (0x00015135) listscroll_midp_info_pane_t3

0x4d61,	// (0x0001516f) listscroll_midp_info_pane_t4_ParamLimits

0x4d61,	// (0x0001516f) listscroll_midp_info_pane_t4

0x0003,

0xf7fb,	// (0x0001fc09) listscroll_midp_info_pane_t_ParamLimits

0xf7fb,	// (0x0001fc09) listscroll_midp_info_pane_t

0x345f,	// (0x0001386d) scroll_pane_cp21

0x4c6f,	// (0x0001507d) form_midp_field_choice_group_pane

0x4c78,	// (0x00015086) form_midp_field_text_pane

0x4cb7,	// (0x000150c5) form_midp_field_time_pane

0x4cbf,	// (0x000150cd) form_midp_gauge_slider_pane

0x4cc8,	// (0x000150d6) form_midp_gauge_wait_pane

0x227e,	// (0x0001268c) form_midp_image_pane

0xd7b6,	// (0x0001dbc4) list_single_midp_pane_ParamLimits

0xd7b6,	// (0x0001dbc4) list_single_midp_pane

0xd795,	// (0x0001dba3) form_midp_field_text_pane_t1

0x49ba,	// (0x00014dc8) input_focus_pane_cp050

0x4c30,	// (0x0001503e) list_midp_form_text_pane

0x4bc8,	// (0x00014fd6) form_midp_field_choice_group_pane_t1

0x4bd6,	// (0x00014fe4) input_focus_pane_cp051

0x4bea,	// (0x00014ff8) list_midp_choice_pane

0x227e,	// (0x0001268c) status_idle_pane

0x4bac,	// (0x00014fba) form_midp_field_time_pane_t1

0xeba8,	// (0x0001efb6) wait_anim_pane_g2_copy1

0x4bba,	// (0x00014fc8) form_midp_field_time_pane_t2

0x0001,

0x414a,	// (0x00014558) aid_navinavi_width_2_pane

0xf7f6,	// (0x0001fc04) form_midp_field_time_pane_t

0x227e,	// (0x0001268c) input_focus_pane_cp052

0x227e,	// (0x0001268c) bg_input_focus_pane_cp040

0x4b6c,	// (0x00014f7a) form_midp_gauge_slider_pane_t1

0x4b7a,	// (0x00014f88) form_midp_gauge_slider_pane_t2

0xd779,	// (0x0001db87) form_midp_gauge_slider_pane_t3

0xd787,	// (0x0001db95) form_midp_gauge_slider_pane_t4

0x0003,

0xf7ed,	// (0x0001fbfb) form_midp_gauge_slider_pane_t

0x4ba4,	// (0x00014fb2) form_midp_slider_pane

0x235e,	// (0x0001276c) bg_input_focus_pane_cp041_ParamLimits

0x235e,	// (0x0001276c) bg_input_focus_pane_cp041

0x4b39,	// (0x00014f47) form_midp_gauge_wait_pane_t1_ParamLimits

0x4b39,	// (0x00014f47) form_midp_gauge_wait_pane_t1

0x4b4b,	// (0x00014f59) form_midp_gauge_wait_pane_t2_ParamLimits

0x4b4b,	// (0x00014f59) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e8,	// (0x0001fbf6) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e8,	// (0x0001fbf6) form_midp_gauge_wait_pane_t

0x4b5d,	// (0x00014f6b) form_midp_wait_pane_ParamLimits

0x4b5d,	// (0x00014f6b) form_midp_wait_pane

0x4b03,	// (0x00014f11) form_midp_image_pane_g1

0x4b0c,	// (0x00014f1a) form_midp_image_pane_t1

0x4b1b,	// (0x00014f29) form_midp_image_pane_t2

0x4b2a,	// (0x00014f38) form_midp_image_pane_t3

0x0002,

0xf7e1,	// (0x0001fbef) form_midp_image_pane_t

0x4aeb,	// (0x00014ef9) list_single_midp_pane_g1

0x4af4,	// (0x00014f02) list_single_midp_pane_t1

0xd765,	// (0x0001db73) list_midp_form_item_pane_ParamLimits

0xd765,	// (0x0001db73) list_midp_form_item_pane

0x40f2,	// (0x00014500) list_midp_form_item_pane_t1

0x4101,	// (0x0001450f) midp_ticker_pane_g1

0x410d,	// (0x0001451b) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x0001fb3c) midp_ticker_pane_g

0x4119,	// (0x00014527) midp_ticker_pane_t1

0x5f5a,	// (0x00016368) midp_editing_number_pane_t1

0x5f38,	// (0x00016346) midp_editing_number_pane

0x5f47,	// (0x00016355) midp_ticker_pane

0x5cb4,	// (0x000160c2) ai_message_heading_pane

0x227e,	// (0x0001268c) bg_popup_window_pane_cp14

0x5cbc,	// (0x000160ca) listscroll_ai_message_pane

0x5c3e,	// (0x0001604c) ai_message_heading_pane_g1_ParamLimits

0x5c3e,	// (0x0001604c) ai_message_heading_pane_g1

0x5c4a,	// (0x00016058) ai_message_heading_pane_g2_ParamLimits

0x5c4a,	// (0x00016058) ai_message_heading_pane_g2

0x5c56,	// (0x00016064) ai_message_heading_pane_g3_ParamLimits

0x5c56,	// (0x00016064) ai_message_heading_pane_g3

0x5c62,	// (0x00016070) ai_message_heading_pane_g4_ParamLimits

0x5c62,	// (0x00016070) ai_message_heading_pane_g4

0x0003,

0xf922,	// (0x0001fd30) ai_message_heading_pane_g_ParamLimits

0xf922,	// (0x0001fd30) ai_message_heading_pane_g

0x5c6e,	// (0x0001607c) ai_message_heading_pane_t1_ParamLimits

0x5c6e,	// (0x0001607c) ai_message_heading_pane_t1

0x5c88,	// (0x00016096) ai_message_heading_pane_t2_ParamLimits

0x5c88,	// (0x00016096) ai_message_heading_pane_t2

0x0001,

0xf92b,	// (0x0001fd39) ai_message_heading_pane_t_ParamLimits

0xf92b,	// (0x0001fd39) ai_message_heading_pane_t

0x5c9a,	// (0x000160a8) bg_popup_heading_pane_cp1_ParamLimits

0x5c9a,	// (0x000160a8) bg_popup_heading_pane_cp1

0x5c2c,	// (0x0001603a) list_ai_message_pane_ParamLimits

0x5c2c,	// (0x0001603a) list_ai_message_pane

0x345f,	// (0x0001386d) scroll_pane_cp10

0x5bc8,	// (0x00015fd6) list_ai_message_pane_g1

0x5bd0,	// (0x00015fde) list_ai_message_pane_g2

0x0001,

0xf8ff,	// (0x0001fd0d) list_ai_message_pane_g

0x5bd8,	// (0x00015fe6) list_ai_message_pane_t1_ParamLimits

0x5bd8,	// (0x00015fe6) list_ai_message_pane_t1

0x5bed,	// (0x00015ffb) list_ai_message_pane_t2_ParamLimits

0x5bed,	// (0x00015ffb) list_ai_message_pane_t2

0x5c02,	// (0x00016010) list_ai_message_pane_t3_ParamLimits

0x5c02,	// (0x00016010) list_ai_message_pane_t3

0x5c17,	// (0x00016025) list_ai_message_pane_t4_ParamLimits

0x5c17,	// (0x00016025) list_ai_message_pane_t4

0x0003,

0xf904,	// (0x0001fd12) list_ai_message_pane_t_ParamLimits

0xf904,	// (0x0001fd12) list_ai_message_pane_t

0xd900,	// (0x0001dd0e) cell_ai_soft_ind_pane_ParamLimits

0xd900,	// (0x0001dd0e) cell_ai_soft_ind_pane

0x412b,	// (0x00014539) cell_ai_soft_ind_pane_g1_ParamLimits

0x412b,	// (0x00014539) cell_ai_soft_ind_pane_g1

0x227e,	// (0x0001268c) grid_highlight_cp1

0x4138,	// (0x00014546) text_secondary_cp56_ParamLimits

0x4138,	// (0x00014546) text_secondary_cp56

0x5b88,	// (0x00015f96) example_general_pane_ParamLimits

0x5b88,	// (0x00015f96) example_general_pane

0x5b94,	// (0x00015fa2) example_parent_pane_g1_ParamLimits

0x5b94,	// (0x00015fa2) example_parent_pane_g1

0x5ba0,	// (0x00015fae) example_parent_pane_t1_ParamLimits

0x5ba0,	// (0x00015fae) example_parent_pane_t1

0xbd89,	// (0x0001c197) popup_preview_text_window_ParamLimits

0xbd89,	// (0x0001c197) popup_preview_text_window

0x3f61,	// (0x0001436f) list_single_pane_cp2_g4

0x26cf,	// (0x00012add) bg_popup_preview_window_pane_ParamLimits

0x26cf,	// (0x00012add) bg_popup_preview_window_pane

0x58d5,	// (0x00015ce3) popup_preview_text_window_t1_ParamLimits

0x58d5,	// (0x00015ce3) popup_preview_text_window_t1

0x58f3,	// (0x00015d01) popup_preview_text_window_t2_ParamLimits

0x58f3,	// (0x00015d01) popup_preview_text_window_t2

0x593c,	// (0x00015d4a) popup_preview_text_window_t3_ParamLimits

0x593c,	// (0x00015d4a) popup_preview_text_window_t3

0x5981,	// (0x00015d8f) popup_preview_text_window_t4_ParamLimits

0x5981,	// (0x00015d8f) popup_preview_text_window_t4

0x0004,

0xf8d3,	// (0x0001fce1) popup_preview_text_window_t_ParamLimits

0xf8d3,	// (0x0001fce1) popup_preview_text_window_t

0x59ff,	// (0x00015e0d) scroll_pane_cp11

0x4898,	// (0x00014ca6) bg_popup_preview_window_pane_g1

0x5895,	// (0x00015ca3) bg_popup_preview_window_pane_g2

0x589d,	// (0x00015cab) bg_popup_preview_window_pane_g3

0x58a5,	// (0x00015cb3) bg_popup_preview_window_pane_g4

0x58ad,	// (0x00015cbb) bg_popup_preview_window_pane_g5

0x58b5,	// (0x00015cc3) bg_popup_preview_window_pane_g6

0x58bd,	// (0x00015ccb) bg_popup_preview_window_pane_g7

0x58c5,	// (0x00015cd3) bg_popup_preview_window_pane_g8

0xf36e,	// (0x0001f77c) aid_popup_width_pane

0xbd05,	// (0x0001c113) popup_midp_note_alarm_window_ParamLimits

0xbd05,	// (0x0001c113) popup_midp_note_alarm_window

0x312e,	// (0x0001353c) data_form_pane_ParamLimits

0xcefa,	// (0x0001d308) form_field_data_pane_g1

0xcf04,	// (0x0001d312) form_field_data_pane_t1_ParamLimits

0x315c,	// (0x0001356a) input_focus_pane_ParamLimits

0x316a,	// (0x00013578) data_form_wide_pane_ParamLimits

0x3176,	// (0x00013584) form_field_data_wide_pane_g1

0x31a2,	// (0x000135b0) form_field_data_wide_pane_t1_ParamLimits

0x2976,	// (0x00012d84) input_focus_pane_cp6_ParamLimits

0xd001,	// (0x0001d40f) input_popup_find_pane_g1_ParamLimits

0xd001,	// (0x0001d40f) input_popup_find_pane_g1

0x018f,	// (0x0001059d) aid_navi_side_left_pane

0x01a4,	// (0x000105b2) aid_navi_side_right_pane

0x52ae,	// (0x000156bc) bg_popup_window_pane_cp30_ParamLimits

0x52ae,	// (0x000156bc) bg_popup_window_pane_cp30

0x5328,	// (0x00015736) popup_midp_note_alarm_window_g1_ParamLimits

0x5328,	// (0x00015736) popup_midp_note_alarm_window_g1

0x5358,	// (0x00015766) popup_midp_note_alarm_window_t1_ParamLimits

0x5358,	// (0x00015766) popup_midp_note_alarm_window_t1

0x53f9,	// (0x00015807) popup_midp_note_alarm_window_t2_ParamLimits

0x53f9,	// (0x00015807) popup_midp_note_alarm_window_t2

0x54a7,	// (0x000158b5) popup_midp_note_alarm_window_t3_ParamLimits

0x54a7,	// (0x000158b5) popup_midp_note_alarm_window_t3

0x54d9,	// (0x000158e7) popup_midp_note_alarm_window_t4_ParamLimits

0x54d9,	// (0x000158e7) popup_midp_note_alarm_window_t4

0x54ff,	// (0x0001590d) popup_midp_note_alarm_window_t5_ParamLimits

0x54ff,	// (0x0001590d) popup_midp_note_alarm_window_t5

0x000a,

0xf870,	// (0x0001fc7e) popup_midp_note_alarm_window_t_ParamLimits

0xf870,	// (0x0001fc7e) popup_midp_note_alarm_window_t

0x55ab,	// (0x000159b9) wait_bar_pane_cp1_ParamLimits

0x55ab,	// (0x000159b9) wait_bar_pane_cp1

0x227e,	// (0x0001268c) wait_anim_pane_copy1

0x227e,	// (0x0001268c) wait_border_pane_copy1

0x4f94,	// (0x000153a2) wait_border_pane_g1_copy1

0x31b9,	// (0x000135c7) form_field_popup_pane_g1

0xcf1e,	// (0x0001d32c) form_field_popup_pane_t1_ParamLimits

0x315c,	// (0x0001356a) input_focus_pane_cp7_ParamLimits

0x31d9,	// (0x000135e7) list_form_pane_ParamLimits

0x31e5,	// (0x000135f3) form_field_popup_wide_pane_g1

0x31ed,	// (0x000135fb) form_field_popup_wide_pane_t1_ParamLimits

0x315c,	// (0x0001356a) input_focus_pane_cp8_ParamLimits

0x31ff,	// (0x0001360d) list_form_wide_pane_ParamLimits

0x6195,	// (0x000165a3) aid_size_cell_graphic_pane

0xcf9d,	// (0x0001d3ab) data_form_pane_t1_ParamLimits

0xdaa2,	// (0x0001deb0) data_form_wide_pane_t1_ParamLimits

0xd3ea,	// (0x0001d7f8) bg_status_flat_pane

0xc81c,	// (0x0001cc2a) title_pane_t1_ParamLimits

0x2326,	// (0x00012734) title_pane_t2_ParamLimits

0x234c,	// (0x0001275a) title_pane_t3_ParamLimits

0xf532,	// (0x0001f940) title_pane_t_ParamLimits

0x38e0,	// (0x00013cee) level_1_signal_ParamLimits

0x38f2,	// (0x00013d00) level_2_signal_ParamLimits

0x3905,	// (0x00013d13) level_3_signal_ParamLimits

0x3918,	// (0x00013d26) level_4_signal_ParamLimits

0x392b,	// (0x00013d39) level_5_signal_ParamLimits

0x393e,	// (0x00013d4c) level_6_signal_ParamLimits

0x3951,	// (0x00013d5f) level_7_signal_ParamLimits

0x38e0,	// (0x00013cee) level_1_battery_ParamLimits

0x38f2,	// (0x00013d00) level_2_battery_ParamLimits

0x3905,	// (0x00013d13) level_3_battery_ParamLimits

0x3918,	// (0x00013d26) level_4_battery_ParamLimits

0x392b,	// (0x00013d39) level_5_battery_ParamLimits

0x393e,	// (0x00013d4c) level_6_battery_ParamLimits

0x3951,	// (0x00013d5f) level_7_battery_ParamLimits

0x51b3,	// (0x000155c1) bg_status_flat_pane_g1

0x51bb,	// (0x000155c9) bg_status_flat_pane_g2

0x51c3,	// (0x000155d1) bg_status_flat_pane_g3

0x51cb,	// (0x000155d9) bg_status_flat_pane_g4

0x51d3,	// (0x000155e1) bg_status_flat_pane_g5

0x51db,	// (0x000155e9) bg_status_flat_pane_g6

0x51e3,	// (0x000155f1) bg_status_flat_pane_g7

0xc8a8,	// (0x0001ccb6) tabs_3_active_pane_t1_ParamLimits

0xc8a8,	// (0x0001ccb6) tabs_3_passive_pane_t1_ParamLimits

0xc8ba,	// (0x0001ccc8) tabs_4_active_pane_t1_ParamLimits

0xc8ba,	// (0x0001ccc8) tabs_4_1_passive_pane_t1_ParamLimits

0xd00f,	// (0x0001d41d) tabs_2_active_pane_t1_ParamLimits

0xd00f,	// (0x0001d41d) tabs_2_passive_pane_t1_ParamLimits

0x235e,	// (0x0001276c) bg_active_tab_pane_cp4_ParamLimits

0xd021,	// (0x0001d42f) tabs_2_long_active_pane_t1_ParamLimits

0x4350,	// (0x0001475e) bg_passive_tab_pane_cp4_ParamLimits

0x0d58,	// (0x00011166) list_single_midp_graphic_pane_t1_ParamLimits

0x235e,	// (0x0001276c) bg_active_tab_pane_cp5_ParamLimits

0xd034,	// (0x0001d442) tabs_3_long_active_pane_t1_ParamLimits

0x4350,	// (0x0001475e) bg_passive_tab_pane_cp5_ParamLimits

0x0d58,	// (0x00011166) list_single_midp_graphic_pane_t1

0xd3ea,	// (0x0001d7f8) bg_status_flat_pane_ParamLimits

0x4512,	// (0x00014920) indicator_pane_cp2_ParamLimits

0x4512,	// (0x00014920) indicator_pane_cp2

0xd568,	// (0x0001d976) navi_pane_srt_ParamLimits

0xd568,	// (0x0001d976) navi_pane_srt

0x4661,	// (0x00014a6f) popup_clock_digital_analogue_window_cp1

0x2455,	// (0x00012863) indicator_pane_t1

0x4024,	// (0x00014432) copy_highlight_pane

0x4024,	// (0x00014432) cursor_graphics_pane

0x4024,	// (0x00014432) graphic_within_text_pane

0x4024,	// (0x00014432) link_highlight_pane

0x59c2,	// (0x00015dd0) popup_preview_text_window_t5_ParamLimits

0x59c2,	// (0x00015dd0) popup_preview_text_window_t5

0x4152,	// (0x00014560) cursor_digital_pane

0x4152,	// (0x00014560) cursor_primary_pane

0x4163,	// (0x00014571) cursor_primary_small_pane

0x416b,	// (0x00014579) cursor_secondary_pane

0x4173,	// (0x00014581) cursor_title_pane

0x4152,	// (0x00014560) link_highlight_digital_pane

0x415a,	// (0x00014568) link_highlight_primary_pane

0x4163,	// (0x00014571) link_highlight_primary_small_pane

0x416b,	// (0x00014579) link_highlight_secondary_pane

0x4173,	// (0x00014581) link_highlight_title_pane

0x4152,	// (0x00014560) copy_highlight_digital_pane

0x4152,	// (0x00014560) copy_highlight_primary_pane

0x4163,	// (0x00014571) copy_highlight_primary_small_pane

0x416b,	// (0x00014579) copy_highlight_secondary_pane

0x4173,	// (0x00014581) copy_highlight_title_pane

0x416b,	// (0x00014579) graphic_text_digital_pane

0x5251,	// (0x0001565f) graphic_text_primary_pane

0x525a,	// (0x00015668) graphic_text_primary_small_pane

0x4163,	// (0x00014571) graphic_text_secondary_pane

0x4152,	// (0x00014560) graphic_text_title_pane

0xd29d,	// (0x0001d6ab) cursor_primary_pane_g1

0x5243,	// (0x00015651) cursor_text_primary_t1

0xd7fc,	// (0x0001dc0a) cursor_primary_small_pane_g1

0x5235,	// (0x00015643) cursor_text_primary_small_t1

0xd7f2,	// (0x0001dc00) cursor_primary_small_pane_g1_copy1

0x521d,	// (0x0001562b) cursor_text_primary_small_t1_copy1

0x51fb,	// (0x00015609) cursor_text_title_t1

0xd7e8,	// (0x0001dbf6) cursor_title_pane_g1

0xd29d,	// (0x0001d6ab) cursor_digital_pane_g1

0x4185,	// (0x00014593) cursor_text_digital_t1

0x41aa,	// (0x000145b8) link_highlight_primary_pane_g1

0x51a4,	// (0x000155b2) link_highlight_primary_pane_t1

0x4193,	// (0x000145a1) link_highlight_primary_small_pane_g1

0x419b,	// (0x000145a9) link_highlight_primary_small_pane_t1

0x41aa,	// (0x000145b8) link_highlight_secondary_pane_g1

0x41b2,	// (0x000145c0) link_highlight_secondary_pane_t1

0x5118,	// (0x00015526) link_highlight_title_pane_g1

0x5120,	// (0x0001552e) link_highlight_title_pane_t1

0x5101,	// (0x0001550f) link_highlight_digital_pane_g1

0x5109,	// (0x00015517) link_highlight_digital_pane_t1

0x4fd9,	// (0x000153e7) copy_highlight_primary_pane_g1

0x4fe1,	// (0x000153ef) copy_highlight_primary_pane_t1

0x4fb3,	// (0x000153c1) copy_highlight_primary_small_pane_g1

0x4fca,	// (0x000153d8) copy_highlight_primary_small_pane_t1

0x41c1,	// (0x000145cf) copy_highlight_secondary_pane_g1

0x41c9,	// (0x000145d7) copy_highlight_secondary_pane_t1

0x4fb3,	// (0x000153c1) copy_highlight_title_pane_g1

0x4fbb,	// (0x000153c9) copy_highlight_title_pane_t1

0x4fd9,	// (0x000153e7) copy_highlight_digital_pane_g1

0x6363,	// (0x00016771) copy_highlight_digital_pane_t1

0x62b7,	// (0x000166c5) graphic_text_primary_pane_g1

0x6347,	// (0x00016755) graphic_text_primary_pane_t1

0x6355,	// (0x00016763) graphic_text_primary_pane_t2

0x0001,

0xf99f,	// (0x0001fdad) graphic_text_primary_pane_t

0x6323,	// (0x00016731) graphic_text_primary_small_pane_g1

0x632b,	// (0x00016739) graphic_text_primary_small_pane_t1

0x6339,	// (0x00016747) graphic_text_primary_small_pane_t2

0x0001,

0xf99a,	// (0x0001fda8) graphic_text_primary_small_pane_t

0x62ff,	// (0x0001670d) graphic_text_secondary_pane_g1

0x6307,	// (0x00016715) graphic_text_secondary_pane_t1

0x6315,	// (0x00016723) graphic_text_secondary_pane_t2

0x0001,

0xf995,	// (0x0001fda3) graphic_text_secondary_pane_t

0x62db,	// (0x000166e9) graphic_text_title_pane_g1

0x62e3,	// (0x000166f1) graphic_text_title_pane_t1

0x62f1,	// (0x000166ff) graphic_text_title_pane_t2

0x0001,

0xf990,	// (0x0001fd9e) graphic_text_title_pane_t

0x62b7,	// (0x000166c5) graphic_text_digital_pane_g1

0x62bf,	// (0x000166cd) graphic_text_digital_pane_t1

0x62cd,	// (0x000166db) graphic_text_digital_pane_t2

0x0001,

0xf98b,	// (0x0001fd99) graphic_text_digital_pane_t

0x235e,	// (0x0001276c) navi_icon_pane_srt_ParamLimits

0x235e,	// (0x0001276c) navi_icon_pane_srt

0x227e,	// (0x0001268c) navi_midp_pane_srt

0x227e,	// (0x0001268c) navi_navi_pane_srt

0x235e,	// (0x0001276c) navi_text_pane_srt_ParamLimits

0x235e,	// (0x0001276c) navi_text_pane_srt

0x6282,	// (0x00016690) navi_navi_icon_text_pane_srt

0x628a,	// (0x00016698) navi_navi_pane_srt_g1_ParamLimits

0x628a,	// (0x00016698) navi_navi_pane_srt_g1

0x629c,	// (0x000166aa) navi_navi_pane_srt_g2_ParamLimits

0x629c,	// (0x000166aa) navi_navi_pane_srt_g2

0x0001,

0xf986,	// (0x0001fd94) navi_navi_pane_srt_g_ParamLimits

0xf986,	// (0x0001fd94) navi_navi_pane_srt_g

0x62ae,	// (0x000166bc) navi_navi_tabs_pane_srt

0x6282,	// (0x00016690) navi_navi_text_pane_srt

0x6282,	// (0x00016690) navi_navi_volume_pane_srt

0x6273,	// (0x00016681) navi_navi_text_pane_srt_t1

0x10d2,	// (0x000114e0) navi_navi_volume_pane_srt_g1

0x10da,	// (0x000114e8) volume_small_pane_srt_ParamLimits

0x10da,	// (0x000114e8) volume_small_pane_srt

0x046f,	// (0x0001087d) volume_small_pane_srt_g1_ParamLimits

0x046f,	// (0x0001087d) volume_small_pane_srt_g1

0x047f,	// (0x0001088d) volume_small_pane_srt_g2_ParamLimits

0x047f,	// (0x0001088d) volume_small_pane_srt_g2

0x0490,	// (0x0001089e) volume_small_pane_srt_g3_ParamLimits

0x0490,	// (0x0001089e) volume_small_pane_srt_g3

0x04a1,	// (0x000108af) volume_small_pane_srt_g4_ParamLimits

0x04a1,	// (0x000108af) volume_small_pane_srt_g4

0x04b2,	// (0x000108c0) volume_small_pane_srt_g5_ParamLimits

0x04b2,	// (0x000108c0) volume_small_pane_srt_g5

0x04c3,	// (0x000108d1) volume_small_pane_srt_g6_ParamLimits

0x04c3,	// (0x000108d1) volume_small_pane_srt_g6

0x04d4,	// (0x000108e2) volume_small_pane_srt_g7_ParamLimits

0x04d4,	// (0x000108e2) volume_small_pane_srt_g7

0x04e5,	// (0x000108f3) volume_small_pane_srt_g8_ParamLimits

0x04e5,	// (0x000108f3) volume_small_pane_srt_g8

0x04f6,	// (0x00010904) volume_small_pane_srt_g9_ParamLimits

0x04f6,	// (0x00010904) volume_small_pane_srt_g9

0x0507,	// (0x00010915) volume_small_pane_srt_g10_ParamLimits

0x0507,	// (0x00010915) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x0001fb41) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x0001fb41) volume_small_pane_srt_g

0x2778,	// (0x00012b86) query_popup_data_pane_cp2

0x6259,	// (0x00016667) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6259,	// (0x00016667) navi_navi_icon_text_pane_srt_t1

0x5251,	// (0x0001565f) navi_tabs_2_long_pane_srt

0x5251,	// (0x0001565f) navi_tabs_2_pane_srt

0x5251,	// (0x0001565f) navi_tabs_3_long_pane_srt

0x5251,	// (0x0001565f) navi_tabs_3_pane_srt

0x5251,	// (0x0001565f) navi_tabs_4_pane_srt

0x10b2,	// (0x000114c0) tabs_2_active_pane_srt_ParamLimits

0x10b2,	// (0x000114c0) tabs_2_active_pane_srt

0x10c2,	// (0x000114d0) tabs_2_passive_pane_srt_ParamLimits

0x10c2,	// (0x000114d0) tabs_2_passive_pane_srt

0x49ba,	// (0x00014dc8) bg_passive_tab_pane_cp1_srt_ParamLimits

0x49ba,	// (0x00014dc8) bg_passive_tab_pane_cp1_srt

0x6225,	// (0x00016633) bg_passive_tab_pane_g1_cp1_srt

0x3c71,	// (0x0001407f) bg_passive_tab_pane_g2_cp1_srt

0x622e,	// (0x0001663c) bg_passive_tab_pane_g3_cp1_srt

0x25f3,	// (0x00012a01) bg_active_tab_pane_cp1_srt_ParamLimits

0x25f3,	// (0x00012a01) bg_active_tab_pane_cp1_srt

0x6237,	// (0x00016645) tabs_2_active_pane_srt_g1

0xdbf8,	// (0x0001e006) tabs_2_active_pane_srt_t1_ParamLimits

0xdbf8,	// (0x0001e006) tabs_2_active_pane_srt_t1

0x6225,	// (0x00016633) bg_active_tab_pane_g1_cp1_srt

0x3c71,	// (0x0001407f) bg_active_tab_pane_g2_cp1_srt

0x622e,	// (0x0001663c) bg_active_tab_pane_g3_cp1_srt

0x107f,	// (0x0001148d) tabs_3_active_pane_srt_ParamLimits

0x107f,	// (0x0001148d) tabs_3_active_pane_srt

0x1090,	// (0x0001149e) tabs_3_passive_pane_cp_srt_ParamLimits

0x1090,	// (0x0001149e) tabs_3_passive_pane_cp_srt

0x10a1,	// (0x000114af) tabs_3_passive_pane_srt_ParamLimits

0x10a1,	// (0x000114af) tabs_3_passive_pane_srt

0x49ba,	// (0x00014dc8) bg_passive_tab_pane_cp2_srt_ParamLimits

0x49ba,	// (0x00014dc8) bg_passive_tab_pane_cp2_srt

0x41d8,	// (0x000145e6) bg_passive_tab_pane_g1_cp2_srt

0x3c71,	// (0x0001407f) bg_passive_tab_pane_g2_cp2_srt

0x41e1,	// (0x000145ef) bg_passive_tab_pane_g3_cp2_srt

0x25f3,	// (0x00012a01) bg_active_tab_pane_cp2_srt_ParamLimits

0x25f3,	// (0x00012a01) bg_active_tab_pane_cp2_srt

0x620b,	// (0x00016619) tabs_3_active_pane_srt_g1

0xdbe2,	// (0x0001dff0) tabs_3_active_pane_srt_t1_ParamLimits

0xdbe2,	// (0x0001dff0) tabs_3_active_pane_srt_t1

0x41d8,	// (0x000145e6) bg_active_tab_pane_g1_cp2_srt

0x3c71,	// (0x0001407f) bg_active_tab_pane_g2_cp2_srt

0x41e1,	// (0x000145ef) bg_active_tab_pane_g3_cp2_srt

0x1037,	// (0x00011445) tabs_4_active_pane_srt_ParamLimits

0x1037,	// (0x00011445) tabs_4_active_pane_srt

0x1049,	// (0x00011457) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1049,	// (0x00011457) tabs_4_passive_pane_cp2_srt

0x067a,	// (0x00010a88) aid_size_cell_toolbar

0x5d7e,	// (0x0001618c) main_idle_act_pane_ParamLimits

0x0847,	// (0x00010c55) popup_large_graphic_colour_window_ParamLimits

0xc015,	// (0x0001c423) popup_toolbar_window_ParamLimits

0xc015,	// (0x0001c423) popup_toolbar_window

0x5f84,	// (0x00016392) list_single_graphic_2heading_pane_ParamLimits

0x5f84,	// (0x00016392) list_single_graphic_2heading_pane

0x368f,	// (0x00013a9d) aid_size_cell_apps_grid_lsc_pane

0x36a1,	// (0x00013aaf) aid_size_cell_apps_grid_prt_pane

0x4350,	// (0x0001475e) bg_wml_button_pane_cp1_ParamLimits

0x4350,	// (0x0001475e) bg_wml_button_pane_cp1

0xd795,	// (0x0001dba3) form_midp_field_text_pane_t1_ParamLimits

0x49ba,	// (0x00014dc8) input_focus_pane_cp050_ParamLimits

0x4c30,	// (0x0001503e) list_midp_form_text_pane_ParamLimits

0x4bd6,	// (0x00014fe4) input_focus_pane_cp051_ParamLimits

0x4bea,	// (0x00014ff8) list_midp_choice_pane_ParamLimits

0xd733,	// (0x0001db41) list_single_2graphic_pane_cp3_ParamLimits

0xd733,	// (0x0001db41) list_single_2graphic_pane_cp3

0xd746,	// (0x0001db54) list_single_midp_graphic_pane_ParamLimits

0xd746,	// (0x0001db54) list_single_midp_graphic_pane

0x0c5b,	// (0x00011069) list_single_graphic_2heading_pane_g1_ParamLimits

0x0c5b,	// (0x00011069) list_single_graphic_2heading_pane_g1

0x0c67,	// (0x00011075) list_single_graphic_2heading_pane_g4_ParamLimits

0x0c67,	// (0x00011075) list_single_graphic_2heading_pane_g4

0x0c73,	// (0x00011081) list_single_graphic_2heading_pane_g5_ParamLimits

0x0c73,	// (0x00011081) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x0001fb94) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x0001fb94) list_single_graphic_2heading_pane_g

0x0c7f,	// (0x0001108d) list_single_graphic_2heading_pane_t1_ParamLimits

0x0c7f,	// (0x0001108d) list_single_graphic_2heading_pane_t1

0x0c93,	// (0x000110a1) list_single_graphic_2heading_pane_t2_ParamLimits

0x0c93,	// (0x000110a1) list_single_graphic_2heading_pane_t2

0x0caf,	// (0x000110bd) list_single_graphic_2heading_pane_t3_ParamLimits

0x0caf,	// (0x000110bd) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0001fb9b) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0001fb9b) list_single_graphic_2heading_pane_t

0x47c0,	// (0x00014bce) bg_popup_sub_pane_cp2

0x47ea,	// (0x00014bf8) grid_toobar_pane

0x0cc7,	// (0x000110d5) cell_toolbar_pane_ParamLimits

0x0cc7,	// (0x000110d5) cell_toolbar_pane

0x483c,	// (0x00014c4a) cell_toolbar_pane_g1_ParamLimits

0x483c,	// (0x00014c4a) cell_toolbar_pane_g1

0x4850,	// (0x00014c5e) cell_toolbar_pane_g2_ParamLimits

0x4850,	// (0x00014c5e) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x0001fba9) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x0001fba9) cell_toolbar_pane_g

0x4872,	// (0x00014c80) grid_highlight_pane_cp2_ParamLimits

0x4872,	// (0x00014c80) grid_highlight_pane_cp2

0x488c,	// (0x00014c9a) toolbar_button_pane

0x4898,	// (0x00014ca6) toolbar_button_pane_g1

0x48a0,	// (0x00014cae) toolbar_button_pane_g2

0x48a8,	// (0x00014cb6) toolbar_button_pane_g3

0x48b0,	// (0x00014cbe) toolbar_button_pane_g4

0x48b8,	// (0x00014cc6) toolbar_button_pane_g5

0x48c0,	// (0x00014cce) toolbar_button_pane_g6

0x48c8,	// (0x00014cd6) toolbar_button_pane_g7

0x48d0,	// (0x00014cde) toolbar_button_pane_g8

0x48d8,	// (0x00014ce6) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x0001fbae) toolbar_button_pane_g

0x0cff,	// (0x0001110d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0cff,	// (0x0001110d) list_single_2graphic_pane_g1_cp3

0xc06d,	// (0x0001c47b) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc06d,	// (0x0001c47b) list_single_2graphic_pane_g2_cp3

0x0d1c,	// (0x0001112a) list_single_2graphic_pane_g3_cp3

0x0d24,	// (0x00011132) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0d24,	// (0x00011132) list_single_2graphic_pane_g4_cp3

0x0d30,	// (0x0001113e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0d30,	// (0x0001113e) list_single_2graphic_pane_t1_cp3

0x0d4c,	// (0x0001115a) list_single_midp_graphic_pane_g2_ParamLimits

0x0d4c,	// (0x0001115a) list_single_midp_graphic_pane_g2

0x0682,	// (0x00010a90) aid_zoom_text_primary

0x068a,	// (0x00010a98) aid_zoom_text_secondary

0x4292,	// (0x000146a0) status_small_pane_g7_ParamLimits

0x4292,	// (0x000146a0) status_small_pane_g7

0x42b5,	// (0x000146c3) status_small_pane_t1_ParamLimits

0xc7f8,	// (0x0001cc06) title_pane_g2

0x0003,

0xf529,	// (0x0001f937) title_pane_g

0xca70,	// (0x0001ce7e) aid_size_cell_colour_1_pane_ParamLimits

0xca70,	// (0x0001ce7e) aid_size_cell_colour_1_pane

0xca84,	// (0x0001ce92) aid_size_cell_colour_2_pane_ParamLimits

0xca84,	// (0x0001ce92) aid_size_cell_colour_2_pane

0xca98,	// (0x0001cea6) aid_size_cell_colour_3_pane_ParamLimits

0xca98,	// (0x0001cea6) aid_size_cell_colour_3_pane

0xcaac,	// (0x0001ceba) aid_size_cell_colour_4_pane_ParamLimits

0xcaac,	// (0x0001ceba) aid_size_cell_colour_4_pane

0x00cc,	// (0x000104da) title_pane_stacon_g1_ParamLimits

0x00cc,	// (0x000104da) title_pane_stacon_g1

0x5038,	// (0x00015446) popup_note_wait_window_g3_ParamLimits

0x5038,	// (0x00015446) popup_note_wait_window_g3

0x50ae,	// (0x000154bc) popup_note_wait_window_t5_ParamLimits

0x50ae,	// (0x000154bc) popup_note_wait_window_t5

0x227e,	// (0x0001268c) main_feb_china_hwr_fs_writing_pane

0xba17,	// (0x0001be25) popup_feb_china_hwr_fs_window_ParamLimits

0xba17,	// (0x0001be25) popup_feb_china_hwr_fs_window

0xc07e,	// (0x0001c48c) aid_size_cell_hwr_fs_ParamLimits

0xc07e,	// (0x0001c48c) aid_size_cell_hwr_fs

0x49ba,	// (0x00014dc8) bg_popup_sub_pane_cp3_ParamLimits

0x49ba,	// (0x00014dc8) bg_popup_sub_pane_cp3

0xc093,	// (0x0001c4a1) grid_hwr_fs_pane_ParamLimits

0xc093,	// (0x0001c4a1) grid_hwr_fs_pane

0x0d9b,	// (0x000111a9) linegrid_hwr_fs_pane_ParamLimits

0x0d9b,	// (0x000111a9) linegrid_hwr_fs_pane

0xc0ab,	// (0x0001c4b9) cell_hwr_fs_pane_ParamLimits

0xc0ab,	// (0x0001c4b9) cell_hwr_fs_pane

0x49c6,	// (0x00014dd4) linegrid_hwr_fs_pane_g1_ParamLimits

0x49c6,	// (0x00014dd4) linegrid_hwr_fs_pane_g1

0xd707,	// (0x0001db15) linegrid_hwr_fs_pane_g2_ParamLimits

0xd707,	// (0x0001db15) linegrid_hwr_fs_pane_g2

0x49e4,	// (0x00014df2) linegrid_hwr_fs_pane_g3_ParamLimits

0x49e4,	// (0x00014df2) linegrid_hwr_fs_pane_g3

0x0dcd,	// (0x000111db) linegrid_hwr_fs_pane_g4_ParamLimits

0x0dcd,	// (0x000111db) linegrid_hwr_fs_pane_g4

0x0de7,	// (0x000111f5) linegrid_hwr_fs_pane_g5_ParamLimits

0x0de7,	// (0x000111f5) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c6,	// (0x0001fbd4) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c6,	// (0x0001fbd4) linegrid_hwr_fs_pane_g

0x49f0,	// (0x00014dfe) cell_hwr_fs_pane_g1_ParamLimits

0x49f0,	// (0x00014dfe) cell_hwr_fs_pane_g1

0x46f7,	// (0x00014b05) cell_hwr_fs_pane_g2_ParamLimits

0x46f7,	// (0x00014b05) cell_hwr_fs_pane_g2

0xd719,	// (0x0001db27) cell_hwr_fs_pane_g3_ParamLimits

0xd719,	// (0x0001db27) cell_hwr_fs_pane_g3

0xd726,	// (0x0001db34) cell_hwr_fs_pane_g4_ParamLimits

0xd726,	// (0x0001db34) cell_hwr_fs_pane_g4

0x0003,

0xf7d1,	// (0x0001fbdf) cell_hwr_fs_pane_g_ParamLimits

0xf7d1,	// (0x0001fbdf) cell_hwr_fs_pane_g

0xc0d1,	// (0x0001c4df) cell_hwr_fs_pane_t1

0x227e,	// (0x0001268c) grid_highlight_pane_cp6

0x227e,	// (0x0001268c) main_idle_act2_pane

0x3446,	// (0x00013854) aid_inside_area_popup_secondary

0xd806,	// (0x0001dc14) aid_inside_area_window_primary_ParamLimits

0xd806,	// (0x0001dc14) aid_inside_area_window_primary

0x6372,	// (0x00016780) ai2_news_ticker_pane

0x637a,	// (0x00016788) aid_size_cell_ai1_link_ParamLimits

0x637a,	// (0x00016788) aid_size_cell_ai1_link

0xdc0e,	// (0x0001e01c) popup_ai2_data_window_ParamLimits

0xdc0e,	// (0x0001e01c) popup_ai2_data_window

0x63aa,	// (0x000167b8) popup_ai2_link_window_ParamLimits

0x63aa,	// (0x000167b8) popup_ai2_link_window

0x49ba,	// (0x00014dc8) bg_popup_sub_pane_cp4_ParamLimits

0x49ba,	// (0x00014dc8) bg_popup_sub_pane_cp4

0x63be,	// (0x000167cc) grid_ai2_link_pane_ParamLimits

0x63be,	// (0x000167cc) grid_ai2_link_pane

0x63d5,	// (0x000167e3) popup_ai2_link_window_g1_ParamLimits

0x63d5,	// (0x000167e3) popup_ai2_link_window_g1

0x63e1,	// (0x000167ef) popup_ai2_link_window_g2_ParamLimits

0x63e1,	// (0x000167ef) popup_ai2_link_window_g2

0x0001,

0xf9a4,	// (0x0001fdb2) popup_ai2_link_window_g_ParamLimits

0xf9a4,	// (0x0001fdb2) popup_ai2_link_window_g

0x63f0,	// (0x000167fe) ai2_mp_button_pane

0x63f8,	// (0x00016806) ai2_mp_volume_pane

0x4bd6,	// (0x00014fe4) bg_popup_sub_pane_cp5_ParamLimits

0x4bd6,	// (0x00014fe4) bg_popup_sub_pane_cp5

0x6400,	// (0x0001680e) heading_ai2_gene_pane_ParamLimits

0x6400,	// (0x0001680e) heading_ai2_gene_pane

0x640c,	// (0x0001681a) list_ai2_gene_pane_ParamLimits

0x640c,	// (0x0001681a) list_ai2_gene_pane

0x6454,	// (0x00016862) cell_ai2_link_pane_ParamLimits

0x6454,	// (0x00016862) cell_ai2_link_pane

0x646a,	// (0x00016878) cell_ai2_link_pane_g1

0x227e,	// (0x0001268c) grid_highlight_pane_cp7

0x10ef,	// (0x000114fd) ai2_mp_volume_pane_g1

0x653a,	// (0x00016948) ai2_mp_volume_pane_g2

0xdc38,	// (0x0001e046) list_ai2_gene_pane_t1

0x6542,	// (0x00016950) ai2_mp_volume_pane_g3

0x0002,

0xf9bd,	// (0x0001fdcb) ai2_mp_volume_pane_g

0x10f7,	// (0x00011505) volume_small_pane_cp3

0x654a,	// (0x00016958) aid_size_cell_ai2_button

0x6552,	// (0x00016960) grid_ai2_button_pane

0x655b,	// (0x00016969) cell_ai2_button_pane_ParamLimits

0x655b,	// (0x00016969) cell_ai2_button_pane

0xeba8,	// (0x0001efb6) cell_ai2_button_pane_g1

0x227e,	// (0x0001268c) grid_highlight_pane_cp8

0x64fa,	// (0x00016908) ai2_gene_pane_t1_ParamLimits

0x64fa,	// (0x00016908) ai2_gene_pane_t1

0xb9b5,	// (0x0001bdc3) aid_height_parent_landscape

0xd94e,	// (0x0001dd5c) aid_height_set_list

0x5d7e,	// (0x0001618c) aid_size_parent

0x6195,	// (0x000165a3) aid_size_cell_graphic_pane_ParamLimits

0x641c,	// (0x0001682a) popup_ai2_data_window_g1_ParamLimits

0x641c,	// (0x0001682a) popup_ai2_data_window_g1

0x6428,	// (0x00016836) ai2_news_ticker_pane_g1

0x6430,	// (0x0001683e) ai2_news_ticker_pane_g2

0x0001,

0xf9a9,	// (0x0001fdb7) ai2_news_ticker_pane_g

0x6438,	// (0x00016846) ai2_news_ticker_pane_t1

0x6446,	// (0x00016854) ai2_news_ticker_pane_t2

0x0001,

0xf9ae,	// (0x0001fdbc) ai2_news_ticker_pane_t

0x6473,	// (0x00016881) heading_ai2_gene_pane_g1

0x647b,	// (0x00016889) heading_ai2_gene_pane_t1_ParamLimits

0x647b,	// (0x00016889) heading_ai2_gene_pane_t1

0x6490,	// (0x0001689e) list_highlight_pane_cp6

0xdc22,	// (0x0001e030) ai2_gene_pane_ParamLimits

0xdc22,	// (0x0001e030) ai2_gene_pane

0xdc46,	// (0x0001e054) list_ai2_gene_pane_t2

0x0001,

0xf9b3,	// (0x0001fdc1) list_ai2_gene_pane_t

0x64cb,	// (0x000168d9) list_highlight_pane_cp8_ParamLimits

0x64cb,	// (0x000168d9) list_highlight_pane_cp8

0x64dc,	// (0x000168ea) ai2_gene_pane_g1_ParamLimits

0x64dc,	// (0x000168ea) ai2_gene_pane_g1

0x64ee,	// (0x000168fc) ai2_gene_pane_g2_ParamLimits

0x64ee,	// (0x000168fc) ai2_gene_pane_g2

0x0001,

0xf9b8,	// (0x0001fdc6) ai2_gene_pane_g_ParamLimits

0xf9b8,	// (0x0001fdc6) ai2_gene_pane_g

0x2b9b,	// (0x00012fa9) scroll_pane_cp12

0xb972,	// (0x0001bd80) control_pane_t3_ParamLimits

0xb972,	// (0x0001bd80) control_pane_t3

0x42a6,	// (0x000146b4) status_small_pane_g8_ParamLimits

0x42a6,	// (0x000146b4) status_small_pane_g8

0xbaac,	// (0x0001beba) popup_find_window_ParamLimits

0xbd3f,	// (0x0001c14d) popup_note_image_window_ParamLimits

0x2c32,	// (0x00013040) list_double2_graphic_pane_vc_g1_ParamLimits

0x2c32,	// (0x00013040) list_double2_graphic_pane_vc_g1

0x2bb8,	// (0x00012fc6) list_double2_graphic_pane_vc_g2_ParamLimits

0x2bb8,	// (0x00012fc6) list_double2_graphic_pane_vc_g2

0x2bc4,	// (0x00012fd2) list_double2_graphic_pane_vc_g3_ParamLimits

0x2bc4,	// (0x00012fd2) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x0001fba2) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x0001fba2) list_double2_graphic_pane_vc_g

0x4826,	// (0x00014c34) list_double2_graphic_pane_vc_t1_ParamLimits

0x4826,	// (0x00014c34) list_double2_graphic_pane_vc_t1

0x2bb8,	// (0x00012fc6) list_single_heading_pane_vc_g1_ParamLimits

0x2bb8,	// (0x00012fc6) list_single_heading_pane_vc_g1

0x2bc4,	// (0x00012fd2) list_single_heading_pane_vc_g2_ParamLimits

0x2bc4,	// (0x00012fd2) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001f9b1) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001f9b1) list_single_heading_pane_vc_g

0x48e0,	// (0x00014cee) list_single_heading_pane_vc_t1_ParamLimits

0x48e0,	// (0x00014cee) list_single_heading_pane_vc_t1

0x48f6,	// (0x00014d04) list_single_heading_pane_vc_t2_ParamLimits

0x48f6,	// (0x00014d04) list_single_heading_pane_vc_t2

0x0001,

0xf7b5,	// (0x0001fbc3) list_single_heading_pane_vc_t_ParamLimits

0xf7b5,	// (0x0001fbc3) list_single_heading_pane_vc_t

0x4908,	// (0x00014d16) list_setting_number_pane_vc_g1_ParamLimits

0x4908,	// (0x00014d16) list_setting_number_pane_vc_g1

0x4914,	// (0x00014d22) list_setting_number_pane_vc_g2_ParamLimits

0x4914,	// (0x00014d22) list_setting_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0001fbc8) list_setting_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0001fbc8) list_setting_number_pane_vc_g

0x4920,	// (0x00014d2e) list_setting_number_pane_vc_t1_ParamLimits

0x4920,	// (0x00014d2e) list_setting_number_pane_vc_t1

0x4934,	// (0x00014d42) list_setting_number_pane_vc_t2_ParamLimits

0x4934,	// (0x00014d42) list_setting_number_pane_vc_t2

0x4950,	// (0x00014d5e) list_setting_number_pane_vc_t3_ParamLimits

0x4950,	// (0x00014d5e) list_setting_number_pane_vc_t3

0x0002,

0xf7bf,	// (0x0001fbcd) list_setting_number_pane_vc_t_ParamLimits

0xf7bf,	// (0x0001fbcd) list_setting_number_pane_vc_t

0x497e,	// (0x00014d8c) set_value_pane_vc_ParamLimits

0x497e,	// (0x00014d8c) set_value_pane_vc

0x5f84,	// (0x00016392) list_double2_graphic_pane_vc_ParamLimits

0x5f84,	// (0x00016392) list_double2_graphic_pane_vc

0x5f84,	// (0x00016392) list_double2_large_graphic_pane_vc_ParamLimits

0x5f84,	// (0x00016392) list_double2_large_graphic_pane_vc

0x5f84,	// (0x00016392) list_double2_pane_vc_ParamLimits

0x5f84,	// (0x00016392) list_double2_pane_vc

0x5f84,	// (0x00016392) list_double_graphic_heading_pane_vc_ParamLimits

0x5f84,	// (0x00016392) list_double_graphic_heading_pane_vc

0x5f84,	// (0x00016392) list_double_graphic_pane_vc_ParamLimits

0x5f84,	// (0x00016392) list_double_graphic_pane_vc

0x5f84,	// (0x00016392) list_double_heading_pane_vc_ParamLimits

0x5f84,	// (0x00016392) list_double_heading_pane_vc

0x5f96,	// (0x000163a4) list_double_large_graphic_pane_vc_ParamLimits

0x5f96,	// (0x000163a4) list_double_large_graphic_pane_vc

0x5f84,	// (0x00016392) list_double_number_pane_vc_ParamLimits

0x5f84,	// (0x00016392) list_double_number_pane_vc

0x5f84,	// (0x00016392) list_double_pane_vc_ParamLimits

0x5f84,	// (0x00016392) list_double_pane_vc

0x5f84,	// (0x00016392) list_double_time_pane_vc_ParamLimits

0x5f84,	// (0x00016392) list_double_time_pane_vc

0x5f84,	// (0x00016392) list_setting_number_pane_vc_ParamLimits

0x5f84,	// (0x00016392) list_setting_number_pane_vc

0x5f84,	// (0x00016392) list_setting_pane_vc_ParamLimits

0x5f84,	// (0x00016392) list_setting_pane_vc

0x5f84,	// (0x00016392) list_single_graphic_heading_pane_vc_ParamLimits

0x5f84,	// (0x00016392) list_single_graphic_heading_pane_vc

0x5f84,	// (0x00016392) list_single_heading_pane_vc_ParamLimits

0x5f84,	// (0x00016392) list_single_heading_pane_vc

0x5f84,	// (0x00016392) list_single_number_heading_pane_vc_ParamLimits

0x5f84,	// (0x00016392) list_single_number_heading_pane_vc

0x2c32,	// (0x00013040) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2c32,	// (0x00013040) list_double_graphic_heading_pane_vc_g1

0x658f,	// (0x0001699d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x658f,	// (0x0001699d) list_double_graphic_heading_pane_vc_g2

0x659b,	// (0x000169a9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x659b,	// (0x000169a9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c4,	// (0x0001fdd2) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c4,	// (0x0001fdd2) list_double_graphic_heading_pane_vc_g

0x65a7,	// (0x000169b5) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x65a7,	// (0x000169b5) list_double_graphic_heading_pane_vc_t1

0x65c3,	// (0x000169d1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x65c3,	// (0x000169d1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9cb,	// (0x0001fdd9) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9cb,	// (0x0001fdd9) list_double_graphic_heading_pane_vc_t

0x4908,	// (0x00014d16) list_setting_pane_vc_g1_ParamLimits

0x4908,	// (0x00014d16) list_setting_pane_vc_g1

0x4914,	// (0x00014d22) list_setting_pane_vc_g2_ParamLimits

0x4914,	// (0x00014d22) list_setting_pane_vc_g2

0x0001,

0xf7ba,	// (0x0001fbc8) list_setting_pane_vc_g_ParamLimits

0xf7ba,	// (0x0001fbc8) list_setting_pane_vc_g

0x67f1,	// (0x00016bff) list_setting_pane_vc_t1_ParamLimits

0x67f1,	// (0x00016bff) list_setting_pane_vc_t1

0x680d,	// (0x00016c1b) list_setting_pane_vc_t2_ParamLimits

0x680d,	// (0x00016c1b) list_setting_pane_vc_t2

0x0001,

0xf9f9,	// (0x0001fe07) list_setting_pane_vc_t_ParamLimits

0xf9f9,	// (0x0001fe07) list_setting_pane_vc_t

0x497e,	// (0x00014d8c) set_value_pane_cp_vc_ParamLimits

0x497e,	// (0x00014d8c) set_value_pane_cp_vc

0x2bb8,	// (0x00012fc6) list_single_number_heading_pane_vc_g1_ParamLimits

0x2bb8,	// (0x00012fc6) list_single_number_heading_pane_vc_g1

0x2bc4,	// (0x00012fd2) list_single_number_heading_pane_vc_g2_ParamLimits

0x2bc4,	// (0x00012fd2) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001f9b1) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001f9b1) list_single_number_heading_pane_vc_g

0x2be6,	// (0x00012ff4) list_single_number_heading_pane_vc_t1_ParamLimits

0x2be6,	// (0x00012ff4) list_single_number_heading_pane_vc_t1

0x6829,	// (0x00016c37) list_single_number_heading_pane_vc_t2_ParamLimits

0x6829,	// (0x00016c37) list_single_number_heading_pane_vc_t2

0x2c20,	// (0x0001302e) list_single_number_heading_pane_vc_t3_ParamLimits

0x2c20,	// (0x0001302e) list_single_number_heading_pane_vc_t3

0x0002,

0xf9fe,	// (0x0001fe0c) list_single_number_heading_pane_vc_t_ParamLimits

0xf9fe,	// (0x0001fe0c) list_single_number_heading_pane_vc_t

0x2c32,	// (0x00013040) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x2c32,	// (0x00013040) list_single_graphic_heading_pane_vc_g1

0x2bb8,	// (0x00012fc6) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2bb8,	// (0x00012fc6) list_single_graphic_heading_pane_vc_g4

0x2bc4,	// (0x00012fd2) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2bc4,	// (0x00012fd2) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf794,	// (0x0001fba2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf794,	// (0x0001fba2) list_single_graphic_heading_pane_vc_g

0x2be6,	// (0x00012ff4) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x2be6,	// (0x00012ff4) list_single_graphic_heading_pane_vc_t1

0x683f,	// (0x00016c4d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x683f,	// (0x00016c4d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa05,	// (0x0001fe13) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa05,	// (0x0001fe13) list_single_graphic_heading_pane_vc_t

0x2bb8,	// (0x00012fc6) list_double2_pane_vc_g1_ParamLimits

0x2bb8,	// (0x00012fc6) list_double2_pane_vc_g1

0x2bc4,	// (0x00012fd2) list_double2_pane_vc_g2_ParamLimits

0x2bc4,	// (0x00012fd2) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001f9b1) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001f9b1) list_double2_pane_vc_g

0x5f22,	// (0x00016330) list_double2_pane_vc_t1_ParamLimits

0x5f22,	// (0x00016330) list_double2_pane_vc_t1

0x6851,	// (0x00016c5f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6851,	// (0x00016c5f) list_double2_large_graphic_pane_vc_g1

0x2bb8,	// (0x00012fc6) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2bb8,	// (0x00012fc6) list_double2_large_graphic_pane_vc_g2

0x2bc4,	// (0x00012fd2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2bc4,	// (0x00012fd2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x0001f9ce) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x0001f9ce) list_double2_large_graphic_pane_vc_g

0x685d,	// (0x00016c6b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x685d,	// (0x00016c6b) list_double2_large_graphic_pane_vc_t1

0x6873,	// (0x00016c81) list_double_time_pane_vc_g1_ParamLimits

0x6873,	// (0x00016c81) list_double_time_pane_vc_g1

0x687f,	// (0x00016c8d) list_double_time_pane_vc_g2_ParamLimits

0x687f,	// (0x00016c8d) list_double_time_pane_vc_g2

0x0001,

0xfa0a,	// (0x0001fe18) list_double_time_pane_vc_g_ParamLimits

0xfa0a,	// (0x0001fe18) list_double_time_pane_vc_g

0x688b,	// (0x00016c99) list_double_time_pane_vc_t1_ParamLimits

0x688b,	// (0x00016c99) list_double_time_pane_vc_t1

0x68af,	// (0x00016cbd) list_double_time_pane_vc_t2_ParamLimits

0x68af,	// (0x00016cbd) list_double_time_pane_vc_t2

0x68de,	// (0x00016cec) list_double_time_pane_vc_t3_ParamLimits

0x68de,	// (0x00016cec) list_double_time_pane_vc_t3

0x68f0,	// (0x00016cfe) list_double_time_pane_vc_t4_ParamLimits

0x68f0,	// (0x00016cfe) list_double_time_pane_vc_t4

0x0003,

0xfa0f,	// (0x0001fe1d) list_double_time_pane_vc_t_ParamLimits

0xfa0f,	// (0x0001fe1d) list_double_time_pane_vc_t

0x2bb8,	// (0x00012fc6) list_double_pane_vc_g1_ParamLimits

0x2bb8,	// (0x00012fc6) list_double_pane_vc_g1

0x2bc4,	// (0x00012fd2) list_double_pane_vc_g2_ParamLimits

0x2bc4,	// (0x00012fd2) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001f9b1) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001f9b1) list_double_pane_vc_g

0x6904,	// (0x00016d12) list_double_pane_vc_t1_ParamLimits

0x6904,	// (0x00016d12) list_double_pane_vc_t1

0x6918,	// (0x00016d26) list_double_pane_vc_t2_ParamLimits

0x6918,	// (0x00016d26) list_double_pane_vc_t2

0x0001,

0xfa18,	// (0x0001fe26) list_double_pane_vc_t_ParamLimits

0xfa18,	// (0x0001fe26) list_double_pane_vc_t

0x2bb8,	// (0x00012fc6) list_double_number_pane_vc_g1_ParamLimits

0x2bb8,	// (0x00012fc6) list_double_number_pane_vc_g1

0x2bc4,	// (0x00012fd2) list_double_number_pane_vc_g2_ParamLimits

0x2bc4,	// (0x00012fd2) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001f9b1) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001f9b1) list_double_number_pane_vc_g

0x6930,	// (0x00016d3e) list_double_number_pane_vc_t1_ParamLimits

0x6930,	// (0x00016d3e) list_double_number_pane_vc_t1

0x6942,	// (0x00016d50) list_double_number_pane_vc_t2_ParamLimits

0x6942,	// (0x00016d50) list_double_number_pane_vc_t2

0x6956,	// (0x00016d64) list_double_number_pane_vc_t3_ParamLimits

0x6956,	// (0x00016d64) list_double_number_pane_vc_t3

0x0002,

0xfa1d,	// (0x0001fe2b) list_double_number_pane_vc_t_ParamLimits

0xfa1d,	// (0x0001fe2b) list_double_number_pane_vc_t

0x696e,	// (0x00016d7c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x696e,	// (0x00016d7c) list_double_large_graphic_pane_vc_g1

0x698a,	// (0x00016d98) list_double_large_graphic_pane_vc_g2_ParamLimits

0x698a,	// (0x00016d98) list_double_large_graphic_pane_vc_g2

0x699e,	// (0x00016dac) list_double_large_graphic_pane_vc_g3_ParamLimits

0x699e,	// (0x00016dac) list_double_large_graphic_pane_vc_g3

0x69ad,	// (0x00016dbb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x69ad,	// (0x00016dbb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa24,	// (0x0001fe32) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa24,	// (0x0001fe32) list_double_large_graphic_pane_vc_g

0x69bc,	// (0x00016dca) list_double_large_graphic_pane_vc_t1_ParamLimits

0x69bc,	// (0x00016dca) list_double_large_graphic_pane_vc_t1

0x69d8,	// (0x00016de6) list_double_large_graphic_pane_vc_t2_ParamLimits

0x69d8,	// (0x00016de6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa2d,	// (0x0001fe3b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa2d,	// (0x0001fe3b) list_double_large_graphic_pane_vc_t

0x658f,	// (0x0001699d) list_double_heading_pane_vc_g1_ParamLimits

0x658f,	// (0x0001699d) list_double_heading_pane_vc_g1

0x659b,	// (0x000169a9) list_double_heading_pane_vc_g2_ParamLimits

0x659b,	// (0x000169a9) list_double_heading_pane_vc_g2

0x0001,

0xfa32,	// (0x0001fe40) list_double_heading_pane_vc_g_ParamLimits

0xfa32,	// (0x0001fe40) list_double_heading_pane_vc_g

0x69fa,	// (0x00016e08) list_double_heading_pane_vc_t1_ParamLimits

0x69fa,	// (0x00016e08) list_double_heading_pane_vc_t1

0x6a0e,	// (0x00016e1c) list_double_heading_pane_vc_t2_ParamLimits

0x6a0e,	// (0x00016e1c) list_double_heading_pane_vc_t2

0x0001,

0xfa37,	// (0x0001fe45) list_double_heading_pane_vc_t_ParamLimits

0xfa37,	// (0x0001fe45) list_double_heading_pane_vc_t

0x6a26,	// (0x00016e34) list_double_graphic_pane_vc_g1_ParamLimits

0x6a26,	// (0x00016e34) list_double_graphic_pane_vc_g1

0x6a32,	// (0x00016e40) list_double_graphic_pane_vc_g2_ParamLimits

0x6a32,	// (0x00016e40) list_double_graphic_pane_vc_g2

0x2bb8,	// (0x00012fc6) list_double_graphic_pane_vc_g3_ParamLimits

0x2bb8,	// (0x00012fc6) list_double_graphic_pane_vc_g3

0x0003,

0xfa3c,	// (0x0001fe4a) list_double_graphic_pane_vc_g_ParamLimits

0xfa3c,	// (0x0001fe4a) list_double_graphic_pane_vc_g

0x6a4f,	// (0x00016e5d) list_double_graphic_pane_vc_t1_ParamLimits

0x6a4f,	// (0x00016e5d) list_double_graphic_pane_vc_t1

0x6a79,	// (0x00016e87) list_double_graphic_pane_vc_t2_ParamLimits

0x6a79,	// (0x00016e87) list_double_graphic_pane_vc_t2

0x0001,

0xfa45,	// (0x0001fe53) list_double_graphic_pane_vc_t_ParamLimits

0xfa45,	// (0x0001fe53) list_double_graphic_pane_vc_t

0xf37a,	// (0x0001f788) aid_size_cell_fastswap

0xb63a,	// (0x0001ba48) aid_size_cell_touch_ParamLimits

0xb63a,	// (0x0001ba48) aid_size_cell_touch

0xf4fb,	// (0x0001f909) popup_fast_swap_wide_window_ParamLimits

0xf4fb,	// (0x0001f909) popup_fast_swap_wide_window

0xb7ea,	// (0x0001bbf8) touch_pane_ParamLimits

0xb7ea,	// (0x0001bbf8) touch_pane

0x3076,	// (0x00013484) button_value_adjust_pane_cp2

0x307e,	// (0x0001348c) button_value_adjust_pane_cp4

0x30a0,	// (0x000134ae) form_field_data_pane_cp2

0xcec1,	// (0x0001d2cf) form_field_data_wide_pane_cp2

0x375e,	// (0x00013b6c) bg_scroll_pane_ParamLimits

0x022e,	// (0x0001063c) scroll_handle_pane_ParamLimits

0x0242,	// (0x00010650) scroll_sc2_down_pane_ParamLimits

0x0242,	// (0x00010650) scroll_sc2_down_pane

0x378f,	// (0x00013b9d) scroll_sc2_up_pane_ParamLimits

0x378f,	// (0x00013b9d) scroll_sc2_up_pane

0xdd76,	// (0x0001e184) grid_wheel_folder_pane_g1_ParamLimits

0xdd76,	// (0x0001e184) grid_wheel_folder_pane_g1

0x0407,	// (0x00010815) clock_nsta_pane_cp2_ParamLimits

0x0407,	// (0x00010815) clock_nsta_pane_cp2

0xd1f8,	// (0x0001d606) listscroll_midp_pane_ParamLimits

0xd204,	// (0x0001d612) midp_canvas_pane

0x4320,	// (0x0001472e) nsta_clock_indic_pane

0x435c,	// (0x0001476a) listscroll_form_pane_vc

0x4364,	// (0x00014772) listscroll_set_pane_vc_ParamLimits

0x4364,	// (0x00014772) listscroll_set_pane_vc

0xd412,	// (0x0001d820) clock_nsta_pane

0xd43c,	// (0x0001d84a) indicator_nsta_pane

0x47c0,	// (0x00014bce) bg_popup_sub_pane_cp2_ParamLimits

0x47d4,	// (0x00014be2) find_pane_cp2_ParamLimits

0x47d4,	// (0x00014be2) find_pane_cp2

0x47ea,	// (0x00014bf8) grid_toobar_pane_ParamLimits

0x498e,	// (0x00014d9c) list_form_gen_pane_vc_ParamLimits

0x498e,	// (0x00014d9c) list_form_gen_pane_vc

0x49a4,	// (0x00014db2) scroll_pane_cp8_vc_ParamLimits

0x49a4,	// (0x00014db2) scroll_pane_cp8_vc

0x4a20,	// (0x00014e2e) data_form_wide_pane_vc_ParamLimits

0x4a20,	// (0x00014e2e) data_form_wide_pane_vc

0x4a2c,	// (0x00014e3a) form_field_data_wide_pane_vc_g1

0x4a34,	// (0x00014e42) form_field_data_wide_pane_vc_t1_ParamLimits

0x4a34,	// (0x00014e42) form_field_data_wide_pane_vc_t1

0x315c,	// (0x0001356a) input_focus_pane_cp6_vc_ParamLimits

0x315c,	// (0x0001356a) input_focus_pane_cp6_vc

0x4db7,	// (0x000151c5) list_midp_pane_ParamLimits

0x61ff,	// (0x0001660d) scroll_pane_cp16_ParamLimits

0x61ff,	// (0x0001660d) scroll_pane_cp16

0x4e0d,	// (0x0001521b) button_value_adjust_pane_ParamLimits

0x4e0d,	// (0x0001521b) button_value_adjust_pane

0xd95f,	// (0x0001dd6d) button_value_adjust_pane_cp6_ParamLimits

0xd95f,	// (0x0001dd6d) button_value_adjust_pane_cp6

0xda79,	// (0x0001de87) settings_code_pane_cp_ParamLimits

0xda79,	// (0x0001de87) settings_code_pane_cp

0xeba8,	// (0x0001efb6) cell_touch_pane_g1

0xeba8,	// (0x0001efb6) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x0001fae7) cell_touch_pane_g

0xdc54,	// (0x0001e062) cell_touch_pane_cp_ParamLimits

0xdc54,	// (0x0001e062) cell_touch_pane_cp

0xdc70,	// (0x0001e07e) cell_touch_pane_ParamLimits

0xdc70,	// (0x0001e07e) cell_touch_pane

0xeba8,	// (0x0001efb6) scroll_sc2_down_pane_g1

0xeba8,	// (0x0001efb6) scroll_sc2_up_pane_g1

0x227e,	// (0x0001268c) bg_set_opt_pane_cp4_vc

0x65e1,	// (0x000169ef) list_set_graphic_pane_vc_g1_ParamLimits

0x65e1,	// (0x000169ef) list_set_graphic_pane_vc_g1

0x65ed,	// (0x000169fb) list_set_graphic_pane_vc_g2_ParamLimits

0x65ed,	// (0x000169fb) list_set_graphic_pane_vc_g2

0x0001,

0xf9d0,	// (0x0001fdde) list_set_graphic_pane_vc_g_ParamLimits

0xf9d0,	// (0x0001fdde) list_set_graphic_pane_vc_g

0x65f9,	// (0x00016a07) text_primary_small_cp13_vc_ParamLimits

0x65f9,	// (0x00016a07) text_primary_small_cp13_vc

0x6611,	// (0x00016a1f) list_set_graphic_pane_vc_ParamLimits

0x6611,	// (0x00016a1f) list_set_graphic_pane_vc

0x227e,	// (0x0001268c) input_focus_pane_cp2_vc

0xeba8,	// (0x0001efb6) setting_code_pane_vc_g1

0x23a9,	// (0x000127b7) setting_code_pane_vc_t1

0x6624,	// (0x00016a32) set_text_pane_vc_t1_ParamLimits

0x6624,	// (0x00016a32) set_text_pane_vc_t1

0x227e,	// (0x0001268c) input_focus_pane_cp1_vc

0x6640,	// (0x00016a4e) list_set_text_pane_vc

0xeba8,	// (0x0001efb6) setting_text_pane_vc_g1

0x227e,	// (0x0001268c) bg_set_opt_pane_cp2_vc

0x23a0,	// (0x000127ae) setting_slider_graphic_pane_vc_g1

0x664a,	// (0x00016a58) setting_slider_graphic_pane_vc_t1

0x665a,	// (0x00016a68) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d5,	// (0x0001fde3) setting_slider_graphic_pane_vc_t

0x666a,	// (0x00016a78) slider_set_pane_cp_vc

0x6672,	// (0x00016a80) slider_set_pane_vc_g1

0x667b,	// (0x00016a89) slider_set_pane_vc_g2

0x0006,

0xf9da,	// (0x0001fde8) slider_set_pane_vc_g

0x328b,	// (0x00013699) set_opt_bg_pane_g1_copy1

0x3293,	// (0x000136a1) set_opt_bg_pane_g2_copy1

0x66a7,	// (0x00016ab5) set_opt_bg_pane_g3_copy1

0x32a3,	// (0x000136b1) set_opt_bg_pane_g4_copy1

0x32ab,	// (0x000136b9) set_opt_bg_pane_g5_copy1

0x32b3,	// (0x000136c1) set_opt_bg_pane_g6_copy1

0x66b1,	// (0x00016abf) set_opt_bg_pane_g7_copy1

0x66bb,	// (0x00016ac9) set_opt_bg_pane_g8_copy1

0x66c5,	// (0x00016ad3) set_opt_bg_pane_g9_copy1

0x227e,	// (0x0001268c) bg_set_opt_pane_cp_vc

0x66cf,	// (0x00016add) setting_slider_pane_vc_t1

0x66de,	// (0x00016aec) setting_slider_pane_vc_t2

0x66ee,	// (0x00016afc) setting_slider_pane_vc_t3

0x0002,

0xf9e9,	// (0x0001fdf7) setting_slider_pane_vc_t

0x66fe,	// (0x00016b0c) slider_set_pane_vc

0x0e0b,	// (0x00011219) volume_set_pane_vc_g1

0x0e14,	// (0x00011222) volume_set_pane_vc_g2

0x0e1d,	// (0x0001122b) volume_set_pane_vc_g3

0x0e26,	// (0x00011234) volume_set_pane_vc_g4

0x0e2f,	// (0x0001123d) volume_set_pane_vc_g5

0x0e38,	// (0x00011246) volume_set_pane_vc_g6

0x0e41,	// (0x0001124f) volume_set_pane_vc_g7

0x0e4a,	// (0x00011258) volume_set_pane_vc_g8

0x0e53,	// (0x00011261) volume_set_pane_vc_g9

0x0e5c,	// (0x0001126a) volume_set_pane_vc_g10

0x0009,

0xf887,	// (0x0001fc95) volume_set_pane_vc_g

0x6706,	// (0x00016b14) volume_set_pane_vc

0x670e,	// (0x00016b1c) button_value_adjust_pane_cp1_vc

0x6718,	// (0x00016b26) list_highlight_pane_cp2_vc

0x6721,	// (0x00016b2f) list_set_pane_vc_ParamLimits

0x6721,	// (0x00016b2f) list_set_pane_vc

0x677f,	// (0x00016b8d) main_pane_set_vc_t1_ParamLimits

0x677f,	// (0x00016b8d) main_pane_set_vc_t1

0x6794,	// (0x00016ba2) main_pane_set_vc_t2_ParamLimits

0x6794,	// (0x00016ba2) main_pane_set_vc_t2

0x67a6,	// (0x00016bb4) main_pane_set_vc_t3_ParamLimits

0x67a6,	// (0x00016bb4) main_pane_set_vc_t3

0x67ba,	// (0x00016bc8) main_pane_set_vc_t4_ParamLimits

0x67ba,	// (0x00016bc8) main_pane_set_vc_t4

0x0003,

0xf9f0,	// (0x0001fdfe) main_pane_set_vc_t_ParamLimits

0xf9f0,	// (0x0001fdfe) main_pane_set_vc_t

0x67ce,	// (0x00016bdc) setting_code_pane_vc_ParamLimits

0x67ce,	// (0x00016bdc) setting_code_pane_vc

0x67df,	// (0x00016bed) setting_slider_graphic_pane_vc

0x67df,	// (0x00016bed) setting_slider_pane_vc

0x67df,	// (0x00016bed) setting_text_pane_vc

0x67df,	// (0x00016bed) setting_volume_pane_vc

0x67e9,	// (0x00016bf7) scroll_pane_cp121_vc

0x3064,	// (0x00013472) set_content_pane_vc

0x6aa3,	// (0x00016eb1) button_value_adjust_pane_g1

0x6aac,	// (0x00016eba) button_value_adjust_pane_g2

0x0001,

0xfa4a,	// (0x0001fe58) button_value_adjust_pane_g

0x6ab5,	// (0x00016ec3) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6ab5,	// (0x00016ec3) form_field_slider_wide_pane_vc_t1

0x6ac9,	// (0x00016ed7) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6ac9,	// (0x00016ed7) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa4f,	// (0x0001fe5d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa4f,	// (0x0001fe5d) form_field_slider_wide_pane_vc_t

0x25f3,	// (0x00012a01) input_focus_pane_cp10_vc_ParamLimits

0x25f3,	// (0x00012a01) input_focus_pane_cp10_vc

0x6af7,	// (0x00016f05) slider_cont_pane_cp1_vc_ParamLimits

0x6af7,	// (0x00016f05) slider_cont_pane_cp1_vc

0x6b09,	// (0x00016f17) slider_form_pane_g1_cp2

0x667b,	// (0x00016a89) slider_form_pane_g2_cp2

0x6b36,	// (0x00016f44) form_field_slider_pane_vc_t3

0x6b44,	// (0x00016f52) form_field_slider_pane_vc_t4

0x6b52,	// (0x00016f60) slider_form_pane_vc_ParamLimits

0x6b52,	// (0x00016f60) slider_form_pane_vc

0x6b5f,	// (0x00016f6d) form_field_slider_pane_vc_t1_ParamLimits

0x6b5f,	// (0x00016f6d) form_field_slider_pane_vc_t1

0x6ac9,	// (0x00016ed7) form_field_slider_pane_vc_t2_ParamLimits

0x6ac9,	// (0x00016ed7) form_field_slider_pane_vc_t2

0x0001,

0xfa61,	// (0x0001fe6f) form_field_slider_pane_vc_t_ParamLimits

0xfa61,	// (0x0001fe6f) form_field_slider_pane_vc_t

0x25f3,	// (0x00012a01) input_focus_pane_cp9_vc_ParamLimits

0x25f3,	// (0x00012a01) input_focus_pane_cp9_vc

0x6b7b,	// (0x00016f89) slider_cont_pane_vc_ParamLimits

0x6b7b,	// (0x00016f89) slider_cont_pane_vc

0x6b8f,	// (0x00016f9d) list_form_graphic_pane_cp_vc_ParamLimits

0x6b8f,	// (0x00016f9d) list_form_graphic_pane_cp_vc

0x4a2c,	// (0x00014e3a) form_field_popup_wide_pane_vc_g1

0x6ba4,	// (0x00016fb2) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6ba4,	// (0x00016fb2) form_field_popup_wide_pane_vc_t1

0x315c,	// (0x0001356a) input_focus_pane_cp8_vc_ParamLimits

0x315c,	// (0x0001356a) input_focus_pane_cp8_vc

0x6be9,	// (0x00016ff7) list_form_wide_pane_vc_ParamLimits

0x6be9,	// (0x00016ff7) list_form_wide_pane_vc

0x6bf5,	// (0x00017003) list_form_graphic_pane_vc_g1

0x6bfd,	// (0x0001700b) list_form_graphic_pane_vc_t1_ParamLimits

0x6bfd,	// (0x0001700b) list_form_graphic_pane_vc_t1

0x235e,	// (0x0001276c) list_highlight_pane_cp5_vc_ParamLimits

0x235e,	// (0x0001276c) list_highlight_pane_cp5_vc

0x6c19,	// (0x00017027) list_form_graphic_pane_vc_ParamLimits

0x6c19,	// (0x00017027) list_form_graphic_pane_vc

0x4a2c,	// (0x00014e3a) form_field_popup_pane_vc_g1

0x6c2f,	// (0x0001703d) form_field_popup_pane_vc_t1_ParamLimits

0x6c2f,	// (0x0001703d) form_field_popup_pane_vc_t1

0x315c,	// (0x0001356a) input_focus_pane_cp7_vc_ParamLimits

0x315c,	// (0x0001356a) input_focus_pane_cp7_vc

0x6c46,	// (0x00017054) list_form_pane_vc_ParamLimits

0x6c46,	// (0x00017054) list_form_pane_vc

0x6c52,	// (0x00017060) data_form_pane_vc_t1_ParamLimits

0x6c52,	// (0x00017060) data_form_pane_vc_t1

0x328b,	// (0x00013699) input_focus_pane_vc_g1

0x3293,	// (0x000136a1) input_focus_pane_vc_g2

0x329b,	// (0x000136a9) input_focus_pane_vc_g3

0x32a3,	// (0x000136b1) input_focus_pane_vc_g4

0x32ab,	// (0x000136b9) input_focus_pane_vc_g5

0x32b3,	// (0x000136c1) input_focus_pane_vc_g6

0x32bb,	// (0x000136c9) input_focus_pane_vc_g7

0x32c3,	// (0x000136d1) input_focus_pane_vc_g8

0x32cb,	// (0x000136d9) input_focus_pane_vc_g9

0xeba8,	// (0x0001efb6) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x0001fa70) input_focus_pane_vc_g

0x4a20,	// (0x00014e2e) data_form_pane_vc_ParamLimits

0x4a20,	// (0x00014e2e) data_form_pane_vc

0x4a2c,	// (0x00014e3a) form_field_data_pane_vc_g1

0x6c6d,	// (0x0001707b) form_field_data_pane_vc_t1_ParamLimits

0x6c6d,	// (0x0001707b) form_field_data_pane_vc_t1

0x315c,	// (0x0001356a) input_focus_pane_vc_ParamLimits

0x315c,	// (0x0001356a) input_focus_pane_vc

0x6c87,	// (0x00017095) button_value_adjust_pane_cp3_vc

0x6c8f,	// (0x0001709d) button_value_adjust_pane_cp5_vc

0x6c97,	// (0x000170a5) form_field_data_pane_vc_ParamLimits

0x6c97,	// (0x000170a5) form_field_data_pane_vc

0x6cae,	// (0x000170bc) form_field_data_pane_vc_cp2

0x6cb6,	// (0x000170c4) form_field_data_wide_pane_vc_ParamLimits

0x6cb6,	// (0x000170c4) form_field_data_wide_pane_vc

0x6ccc,	// (0x000170da) form_field_data_wide_pane_vc_cp2

0x6cd4,	// (0x000170e2) form_field_popup_pane_vc_ParamLimits

0x6cd4,	// (0x000170e2) form_field_popup_pane_vc

0x6ceb,	// (0x000170f9) form_field_popup_wide_pane_vc_ParamLimits

0x6ceb,	// (0x000170f9) form_field_popup_wide_pane_vc

0x6d01,	// (0x0001710f) form_field_slider_pane_vc_ParamLimits

0x6d01,	// (0x0001710f) form_field_slider_pane_vc

0x6d14,	// (0x00017122) form_field_slider_wide_pane_vc_ParamLimits

0x6d14,	// (0x00017122) form_field_slider_wide_pane_vc

0xdc8e,	// (0x0001e09c) grid_touch_1_pane_ParamLimits

0xdc8e,	// (0x0001e09c) grid_touch_1_pane

0xdca2,	// (0x0001e0b0) grid_touch_2_pane_ParamLimits

0xdca2,	// (0x0001e0b0) grid_touch_2_pane

0x6df8,	// (0x00017206) touch_pane_g1_ParamLimits

0x6df8,	// (0x00017206) touch_pane_g1

0x6d4b,	// (0x00017159) cell_app_pane_cp_wide_ParamLimits

0x6d4b,	// (0x00017159) cell_app_pane_cp_wide

0x6d5c,	// (0x0001716a) grid_popup_fast_wide_pane_ParamLimits

0x6d5c,	// (0x0001716a) grid_popup_fast_wide_pane

0x6d70,	// (0x0001717e) scroll_pane_cp19_ParamLimits

0x6d70,	// (0x0001717e) scroll_pane_cp19

0x227e,	// (0x0001268c) bg_popup_window_pane_cp20

0x6d84,	// (0x00017192) listscroll_popup_fast_wide_pane

0xdccc,	// (0x0001e0da) grid_indicator_nsta_pane

0x6d9e,	// (0x000171ac) clock_nsta_pane_g1

0x6da7,	// (0x000171b5) clock_nsta_pane_t1

0xdcd8,	// (0x0001e0e6) cell_indicator_nsta_pane_ParamLimits

0xdcd8,	// (0x0001e0e6) cell_indicator_nsta_pane

0x6df8,	// (0x00017206) cell_indicator_nsta_pane_g1

0xdcf3,	// (0x0001e101) cell_indicator_nsta_pane_g2

0x0001,

0xfa72,	// (0x0001fe80) cell_indicator_nsta_pane_g

0x6e18,	// (0x00017226) clock_nsta_pane_cp

0x6e21,	// (0x0001722f) indicator_nsta_pane_cp

0x6e2b,	// (0x00017239) nsta_clock_indic_pane_g1

0x2441,	// (0x0001284f) grid_indicator_pane

0x3884,	// (0x00013c92) scroll_pane_cp29

0x0356,	// (0x00010764) indicator_nsta_pane_cp2_ParamLimits

0x0356,	// (0x00010764) indicator_nsta_pane_cp2

0x235e,	// (0x0001276c) main_apps_wheel_pane

0x4c78,	// (0x00015086) form_midp_field_text_pane_ParamLimits

0x4dc3,	// (0x000151d1) scroll_bar_cp050_ParamLimits

0x6e84,	// (0x00017292) cell_indicator_pane_ParamLimits

0x6e84,	// (0x00017292) cell_indicator_pane

0x6e9b,	// (0x000172a9) cell_indicator_pane_g1

0xdd00,	// (0x0001e10e) grid_wheel_folder_pane_ParamLimits

0xdd00,	// (0x0001e10e) grid_wheel_folder_pane

0xdd0e,	// (0x0001e11c) list_wheel_apps_pane_ParamLimits

0xdd0e,	// (0x0001e11c) list_wheel_apps_pane

0xdd1c,	// (0x0001e12a) main_apps_wheel_pane_g1_ParamLimits

0xdd1c,	// (0x0001e12a) main_apps_wheel_pane_g1

0xdd28,	// (0x0001e136) main_apps_wheel_pane_g2_ParamLimits

0xdd28,	// (0x0001e136) main_apps_wheel_pane_g2

0x0001,

0xfa8e,	// (0x0001fe9c) main_apps_wheel_pane_g_ParamLimits

0xfa8e,	// (0x0001fe9c) main_apps_wheel_pane_g

0xdd36,	// (0x0001e144) main_apps_wheel_pane_t1_ParamLimits

0xdd36,	// (0x0001e144) main_apps_wheel_pane_t1

0xdd4a,	// (0x0001e158) list_wheel_apps_pane_g1

0xdd52,	// (0x0001e160) list_wheel_apps_pane_g2

0xdd5a,	// (0x0001e168) list_wheel_apps_pane_g3

0xdd62,	// (0x0001e170) list_wheel_apps_pane_g4

0xdd6c,	// (0x0001e17a) list_wheel_apps_pane_g5

0x0004,

0xfa93,	// (0x0001fea1) list_wheel_apps_pane_g

0x3ea7,	// (0x000142b5) navi_icon_text_pane

0xd306,	// (0x0001d714) aid_fill_nsta

0x6f60,	// (0x0001736e) navi_icon_text_pane_g1

0x6f6c,	// (0x0001737a) navi_icon_text_pane_t1

0x3d45,	// (0x00014153) list_set_graphic_pane_t1_ParamLimits

0x3d45,	// (0x00014153) list_set_graphic_pane_t1

0x552e,	// (0x0001593c) popup_midp_note_alarm_window_t6_ParamLimits

0x552e,	// (0x0001593c) popup_midp_note_alarm_window_t6

0x5540,	// (0x0001594e) popup_midp_note_alarm_window_t7_ParamLimits

0x5540,	// (0x0001594e) popup_midp_note_alarm_window_t7

0x5552,	// (0x00015960) popup_midp_note_alarm_window_t8_ParamLimits

0x5552,	// (0x00015960) popup_midp_note_alarm_window_t8

0x5564,	// (0x00015972) popup_midp_note_alarm_window_t9_ParamLimits

0x5564,	// (0x00015972) popup_midp_note_alarm_window_t9

0x5576,	// (0x00015984) popup_midp_note_alarm_window_t10_ParamLimits

0x5576,	// (0x00015984) popup_midp_note_alarm_window_t10

0x5588,	// (0x00015996) popup_midp_note_alarm_window_t11_ParamLimits

0x5588,	// (0x00015996) popup_midp_note_alarm_window_t11

0x559a,	// (0x000159a8) scroll_pane_cp17_ParamLimits

0x559a,	// (0x000159a8) scroll_pane_cp17

0x0e0b,	// (0x00011219) volume_small_pane_cp_g1

0x1100,	// (0x0001150e) volume_small_pane_cp_g2

0x1109,	// (0x00011517) volume_small_pane_cp_g3

0x1112,	// (0x00011520) volume_small_pane_cp_g4

0x111b,	// (0x00011529) volume_small_pane_cp_g5

0x1124,	// (0x00011532) volume_small_pane_cp_g6

0x112d,	// (0x0001153b) volume_small_pane_cp_g7

0x1136,	// (0x00011544) volume_small_pane_cp_g8

0x113f,	// (0x0001154d) volume_small_pane_cp_g9

0x1148,	// (0x00011556) volume_small_pane_cp_g10

0x4101,	// (0x0001450f) midp_ticker_pane_g1_ParamLimits

0x410d,	// (0x0001451b) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x0001fb3c) midp_ticker_pane_g_ParamLimits

0x4119,	// (0x00014527) midp_ticker_pane_t1_ParamLimits

0xd32a,	// (0x0001d738) aid_fill_nsta_2

0x4daf,	// (0x000151bd) list_form2_midp_pane

0x5f38,	// (0x00016346) midp_editing_number_pane_ParamLimits

0x5f47,	// (0x00016355) midp_ticker_pane_ParamLimits

0x6f7e,	// (0x0001738c) form2_midp_field_pane

0x6fa2,	// (0x000173b0) scroll_pane_cp51

0x6fc2,	// (0x000173d0) form2_midp_button_pane_ParamLimits

0x6fc2,	// (0x000173d0) form2_midp_button_pane

0x6fd4,	// (0x000173e2) form2_midp_content_pane_ParamLimits

0x6fd4,	// (0x000173e2) form2_midp_content_pane

0x6fee,	// (0x000173fc) form2_midp_field_choice_group_pane

0x6ff6,	// (0x00017404) form2_midp_field_pane_g1

0x6ffe,	// (0x0001740c) form2_midp_field_pane_g2

0x7006,	// (0x00017414) form2_midp_field_pane_g3

0x700e,	// (0x0001741c) form2_midp_field_pane_g4

0x0003,

0xfab8,	// (0x0001fec6) form2_midp_field_pane_g

0x7016,	// (0x00017424) form2_midp_gauge_slider_pane

0x701e,	// (0x0001742c) form2_midp_gauge_wait_pane

0x7026,	// (0x00017434) form2_midp_image_pane_ParamLimits

0x7026,	// (0x00017434) form2_midp_image_pane

0x7041,	// (0x0001744f) form2_midp_label_pane_ParamLimits

0x7041,	// (0x0001744f) form2_midp_label_pane

0xdd9f,	// (0x0001e1ad) form2_midp_label_pane_cp_ParamLimits

0xdd9f,	// (0x0001e1ad) form2_midp_label_pane_cp

0x707b,	// (0x00017489) form2_midp_string_pane_ParamLimits

0x707b,	// (0x00017489) form2_midp_string_pane

0xddbe,	// (0x0001e1cc) form2_midp_text_pane_ParamLimits

0xddbe,	// (0x0001e1cc) form2_midp_text_pane

0x70aa,	// (0x000174b8) form2_midp_time_pane

0x70ba,	// (0x000174c8) input_focus_pane_cp51_ParamLimits

0x70ba,	// (0x000174c8) input_focus_pane_cp51

0x70d2,	// (0x000174e0) form2_midp_label_pane_t1_ParamLimits

0x70d2,	// (0x000174e0) form2_midp_label_pane_t1

0xddd7,	// (0x0001e1e5) form2_mdip_text_pane_t1_ParamLimits

0xddd7,	// (0x0001e1e5) form2_mdip_text_pane_t1

0x7132,	// (0x00017540) form2_midp_time_pane_t1

0x714d,	// (0x0001755b) form2_midp_gauge_slider_pane_t1

0xddf2,	// (0x0001e200) form2_midp_gauge_slider_pane_t2

0xde04,	// (0x0001e212) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac1,	// (0x0001fecf) form2_midp_gauge_slider_pane_t

0x7183,	// (0x00017591) form2_midp_slider_pane

0x718f,	// (0x0001759d) form2_midp_gauge_wait_pane_t1

0x719d,	// (0x000175ab) form2_midp_wait_pane_ParamLimits

0x719d,	// (0x000175ab) form2_midp_wait_pane

0xde16,	// (0x0001e224) list_single_2graphic_pane_cp4_ParamLimits

0xde16,	// (0x0001e224) list_single_2graphic_pane_cp4

0xd746,	// (0x0001db54) list_single_midp_graphic_pane_cp_ParamLimits

0xd746,	// (0x0001db54) list_single_midp_graphic_pane_cp

0x227e,	// (0x0001268c) list_highlight_pane_cp20

0x71ec,	// (0x000175fa) list_single_2graphic_pane_g1_cp4

0x71f4,	// (0x00017602) list_single_2graphic_pane_g2_cp4

0x71fc,	// (0x0001760a) list_single_2graphic_pane_t1_cp4

0x235e,	// (0x0001276c) list_highlight_pane_cp21

0x720b,	// (0x00017619) list_single_midp_graphic_pane_g4_cp

0x721a,	// (0x00017628) list_single_midp_graphic_pane_t1_cp

0xde2a,	// (0x0001e238) form2_mdip_string_pane_t1_ParamLimits

0xde2a,	// (0x0001e238) form2_mdip_string_pane_t1

0x227e,	// (0x0001268c) bg_wml_button_pane_cp2

0xeba8,	// (0x0001efb6) form2_midp_image_pane_g1

0x2e26,	// (0x00013234) list_double_large_graphic_pane_g5_ParamLimits

0x2e26,	// (0x00013234) list_double_large_graphic_pane_g5

0xd1f8,	// (0x0001d606) midp_form_pane_ParamLimits

0x235e,	// (0x0001276c) main_apps_wheel_pane_ParamLimits

0xbdbd,	// (0x0001c1cb) popup_preview_window_ParamLimits

0xbdbd,	// (0x0001c1cb) popup_preview_window

0x0c06,	// (0x00011014) popup_touch_info_window_ParamLimits

0x0c06,	// (0x00011014) popup_touch_info_window

0x0c24,	// (0x00011032) popup_touch_menu_window_ParamLimits

0x0c24,	// (0x00011032) popup_touch_menu_window

0xeb9e,	// (0x0001efac) bg_popup_sub_pane_cp6

0x7328,	// (0x00017736) list_touch_menu_pane

0x7330,	// (0x0001773e) list_single_touch_menu_pane_ParamLimits

0x7330,	// (0x0001773e) list_single_touch_menu_pane

0x7346,	// (0x00017754) list_single_touch_menu_pane_t1

0x235e,	// (0x0001276c) bg_popup_sub_pane_cp7_ParamLimits

0x235e,	// (0x0001276c) bg_popup_sub_pane_cp7

0x7354,	// (0x00017762) heading_sub_pane

0x735c,	// (0x0001776a) list_touch_info_pane_ParamLimits

0x735c,	// (0x0001776a) list_touch_info_pane

0x736b,	// (0x00017779) list_single_touch_info_pane_ParamLimits

0x736b,	// (0x00017779) list_single_touch_info_pane

0x737d,	// (0x0001778b) list_single_touch_info_pane_t1

0x738b,	// (0x00017799) list_single_touch_info_pane_t2

0x0001,

0xfacf,	// (0x0001fedd) list_single_touch_info_pane_t

0x4024,	// (0x00014432) bg_popup_heading_pane_cp

0x7399,	// (0x000177a7) heading_sub_pane_t1

0x49ba,	// (0x00014dc8) bg_popup_preview_window_pane_cp_ParamLimits

0x49ba,	// (0x00014dc8) bg_popup_preview_window_pane_cp

0x7354,	// (0x00017762) heading_preview_pane

0x735c,	// (0x0001776a) list_preview_pane_ParamLimits

0x735c,	// (0x0001776a) list_preview_pane

0x73a7,	// (0x000177b5) popup_preview_window_g1

0x736b,	// (0x00017779) list_single_preview_pane_ParamLimits

0x736b,	// (0x00017779) list_single_preview_pane

0x73af,	// (0x000177bd) list_single_preview_pane_g1

0x73b7,	// (0x000177c5) list_single_preview_pane_t1

0x737d,	// (0x0001778b) list_single_preview_pane_t2

0x0001,

0xfad4,	// (0x0001fee2) list_single_preview_pane_t

0x73c5,	// (0x000177d3) bg_popup_heading_pane_cp2_ParamLimits

0x73c5,	// (0x000177d3) bg_popup_heading_pane_cp2

0x73db,	// (0x000177e9) heading_preview_pane_g1

0x73e3,	// (0x000177f1) heading_preview_pane_t1_ParamLimits

0x73e3,	// (0x000177f1) heading_preview_pane_t1

0x2464,	// (0x00012872) soft_indicator_pane_t1_ParamLimits

0x2b78,	// (0x00012f86) scroll_pane_ParamLimits

0x377d,	// (0x00013b8b) scroll_sc2_left_pane

0x3786,	// (0x00013b94) scroll_sc2_right_pane

0x37a5,	// (0x00013bb3) scroll_bg_pane_g1_ParamLimits

0x37ba,	// (0x00013bc8) scroll_bg_pane_g2_ParamLimits

0x37d2,	// (0x00013be0) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x0001fac7) scroll_bg_pane_g_ParamLimits

0x37a5,	// (0x00013bb3) scroll_handle_pane_g1_ParamLimits

0x37f4,	// (0x00013c02) scroll_handle_pane_g2_ParamLimits

0x37d2,	// (0x00013be0) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x0001face) scroll_handle_pane_g_ParamLimits

0x06ca,	// (0x00010ad8) popup_choice_list_window_ParamLimits

0x06ca,	// (0x00010ad8) popup_choice_list_window

0x47cc,	// (0x00014bda) choice_list_pane

0x4864,	// (0x00014c72) cell_toolbar_pane_t1

0x488c,	// (0x00014c9a) toolbar_button_pane_ParamLimits

0x5a54,	// (0x00015e62) ai_gene_pane_1_t2_ParamLimits

0x5a54,	// (0x00015e62) ai_gene_pane_1_t2

0x0001,

0xf8e3,	// (0x0001fcf1) ai_gene_pane_1_t_ParamLimits

0xf8e3,	// (0x0001fcf1) ai_gene_pane_1_t

0x7400,	// (0x0001780e) scroll_sc2_left_pane_g1

0x7400,	// (0x0001780e) scroll_sc2_right_pane_g1

0x4350,	// (0x0001475e) bg_popup_sub_pane_cp10

0x740a,	// (0x00017818) list_choice_list_pane

0x7423,	// (0x00017831) list_single_choice_list_pane_ParamLimits

0x7423,	// (0x00017831) list_single_choice_list_pane

0x7436,	// (0x00017844) list_single_choice_list_pane_g1

0x3483,	// (0x00013891) list_single_choice_list_pane_t1_ParamLimits

0x3483,	// (0x00013891) list_single_choice_list_pane_t1

0x743e,	// (0x0001784c) choice_list_pane_g1

0x7446,	// (0x00017854) choice_list_pane_t1

0xeb9e,	// (0x0001efac) input_focus_pane_cp11

0x365a,	// (0x00013a68) title_pane_stacon_g2_ParamLimits

0x365a,	// (0x00013a68) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x0001faad) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x0001faad) title_pane_stacon_g

0x4024,	// (0x00014432) cursor_press_pane

0xba64,	// (0x0001be72) popup_fep_hwr_window_ParamLimits

0xba64,	// (0x0001be72) popup_fep_hwr_window

0x07f0,	// (0x00010bfe) popup_fep_vkb_window_ParamLimits

0x07f0,	// (0x00010bfe) popup_fep_vkb_window

0x7454,	// (0x00017862) cursor_press_pane_g1

0x0002,

0xfafd,	// (0x0001ff0b) fep_vkb_side_pane_g_ParamLimits

0x118a,	// (0x00011598) fep_hwr_candidate_pane_ParamLimits

0x118a,	// (0x00011598) fep_hwr_candidate_pane

0x11b4,	// (0x000115c2) fep_hwr_side_pane_ParamLimits

0x11b4,	// (0x000115c2) fep_hwr_side_pane

0x11d4,	// (0x000115e2) fep_hwr_top_pane_ParamLimits

0x11d4,	// (0x000115e2) fep_hwr_top_pane

0x11ec,	// (0x000115fa) fep_hwr_write_pane_ParamLimits

0x11ec,	// (0x000115fa) fep_hwr_write_pane

0xfafd,	// (0x0001ff0b) fep_vkb_side_pane_g

0x745c,	// (0x0001786a) fep_hwr_top_pane_g1

0x746e,	// (0x0001787c) fep_hwr_top_pane_g2

0x1226,	// (0x00011634) fep_hwr_top_pane_g3

0x0002,

0xfad9,	// (0x0001fee7) fep_hwr_top_pane_g

0x123b,	// (0x00011649) fep_hwr_top_text_pane

0x3974,	// (0x00013d82) fep_hwr_top_text_pane_g1

0x74a4,	// (0x000178b2) fep_hwr_top_text_pane_t1

0x1331,	// (0x0001173f) fep_hwr_candidate_pane_g1

0x76f7,	// (0x00017b05) fep_vkb_keypad_pane_g3_ParamLimits

0x76f7,	// (0x00017b05) fep_vkb_keypad_pane_g3

0x771f,	// (0x00017b2d) fep_vkb_keypad_pane_g4_ParamLimits

0x771f,	// (0x00017b2d) fep_vkb_keypad_pane_g4

0x778e,	// (0x00017b9c) fep_vkb_bottom_pane_g2_ParamLimits

0x778e,	// (0x00017b9c) fep_vkb_bottom_pane_g2

0x0001,

0xfb04,	// (0x0001ff12) fep_vkb_bottom_pane_g_ParamLimits

0xfb04,	// (0x0001ff12) fep_vkb_bottom_pane_g

0x7400,	// (0x0001780e) cell_vkb_side_pane_g2

0x0001,

0xfb0e,	// (0x0001ff1c) cell_vkb_side_pane_g

0x7819,	// (0x00017c27) cell_vkb_side_pane_t1

0x7827,	// (0x00017c35) cell_vkb_side_pane_t1_copy1

0x7400,	// (0x0001780e) bg_fep_vkb_candidate_pane_g2

0x7953,	// (0x00017d61) cell_vkb_candidate_pane_ParamLimits

0x74b2,	// (0x000178c0) aid_size_cell_vkb_ParamLimits

0x74b2,	// (0x000178c0) aid_size_cell_vkb

0x7953,	// (0x00017d61) cell_vkb_candidate_pane

0x1358,	// (0x00011766) bg_popup_fep_shadow_pane_g1

0xdeac,	// (0x0001e2ba) fep_vkb_bottom_pane_ParamLimits

0xdeac,	// (0x0001e2ba) fep_vkb_bottom_pane

0x7576,	// (0x00017984) fep_vkb_candidate_pane_ParamLimits

0x7576,	// (0x00017984) fep_vkb_candidate_pane

0xded1,	// (0x0001e2df) fep_vkb_keypad_pane_ParamLimits

0xded1,	// (0x0001e2df) fep_vkb_keypad_pane

0xdf0d,	// (0x0001e31b) fep_vkb_side_pane_ParamLimits

0xdf0d,	// (0x0001e31b) fep_vkb_side_pane

0xdf49,	// (0x0001e357) fep_vkb_top_pane_ParamLimits

0xdf49,	// (0x0001e357) fep_vkb_top_pane

0x7650,	// (0x00017a5e) fep_vkb_top_pane_g1_ParamLimits

0x7650,	// (0x00017a5e) fep_vkb_top_pane_g1

0x765f,	// (0x00017a6d) fep_vkb_top_pane_g2_ParamLimits

0x765f,	// (0x00017a6d) fep_vkb_top_pane_g2

0x766e,	// (0x00017a7c) fep_vkb_top_pane_g3_ParamLimits

0x766e,	// (0x00017a7c) fep_vkb_top_pane_g3

0x0003,

0xfaf4,	// (0x0001ff02) fep_vkb_top_pane_g_ParamLimits

0xfaf4,	// (0x0001ff02) fep_vkb_top_pane_g

0x768c,	// (0x00017a9a) fep_vkb_top_text_pane_ParamLimits

0x768c,	// (0x00017a9a) fep_vkb_top_text_pane

0xdf85,	// (0x0001e393) fep_vkb_side_pane_g1_ParamLimits

0xdf85,	// (0x0001e393) fep_vkb_side_pane_g1

0x76e6,	// (0x00017af4) grid_vkb_side_pane_ParamLimits

0x76e6,	// (0x00017af4) grid_vkb_side_pane

0x1360,	// (0x0001176e) bg_popup_fep_shadow_pane_g2

0x1369,	// (0x00011777) bg_popup_fep_shadow_pane_g3

0x1371,	// (0x0001177f) bg_popup_fep_shadow_pane_g4

0x137a,	// (0x00011788) bg_popup_fep_shadow_pane_g5

0x1384,	// (0x00011792) bg_popup_fep_shadow_pane_g6

0x138c,	// (0x0001179a) bg_popup_fep_shadow_pane_g7

0x32a3,	// (0x000136b1) bg_popup_fep_shadow_pane_g8

0x773d,	// (0x00017b4b) grid_vkb_keypad_number_pane_ParamLimits

0x773d,	// (0x00017b4b) grid_vkb_keypad_number_pane

0x774d,	// (0x00017b5b) grid_vkb_keypad_pane_ParamLimits

0x774d,	// (0x00017b5b) grid_vkb_keypad_pane

0x7773,	// (0x00017b81) fep_vkb_bottom_pane_g1_ParamLimits

0x7773,	// (0x00017b81) fep_vkb_bottom_pane_g1

0x779c,	// (0x00017baa) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x779c,	// (0x00017baa) grid_vkb_keypad_bottom_left_pane

0x77b1,	// (0x00017bbf) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x77b1,	// (0x00017bbf) grid_vkb_keypad_bottom_right_pane

0x77c6,	// (0x00017bd4) fep_vkb_top_text_pane_g1

0xdfcc,	// (0x0001e3da) fep_vkb_top_text_pane_t1

0xdfde,	// (0x0001e3ec) cell_vkb_side_pane_ParamLimits

0xdfde,	// (0x0001e3ec) cell_vkb_side_pane

0x7400,	// (0x0001780e) cell_vkb_side_pane_g1

0x7835,	// (0x00017c43) cell_vkb_keypad_pane_ParamLimits

0x7835,	// (0x00017c43) cell_vkb_keypad_pane

0x78aa,	// (0x00017cb8) cell_vkb_keypad_pane_g1

0x0008,

0xfb21,	// (0x0001ff2f) bg_popup_fep_shadow_pane_g

0x139e,	// (0x000117ac) cell_hwr_side_pane_g1

0x139e,	// (0x000117ac) cell_hwr_side_pane_g2

0x78b4,	// (0x00017cc2) cell_vkb_keypad_pane_t1

0xdff4,	// (0x0001e402) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdff4,	// (0x0001e402) cell_vkb_keypad_bottom_left_pane

0xe009,	// (0x0001e417) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe009,	// (0x0001e417) cell_vkb_keypad_bottom_right_pane

0x7400,	// (0x0001780e) cell_vkb_keypad_bottom_left_pane_g1

0x7400,	// (0x0001780e) cell_vkb_keypad_bottom_right_pane_g1

0x7918,	// (0x00017d26) cell_vkb_keypad_number_pane_ParamLimits

0x7918,	// (0x00017d26) cell_vkb_keypad_number_pane

0x7937,	// (0x00017d45) cell_vkb_keypad_number_pane_g1

0x7941,	// (0x00017d4f) cell_vkb_keypad_number_pane_g2

0x794a,	// (0x00017d58) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb13,	// (0x0001ff21) cell_vkb_keypad_number_pane_g

0x78b4,	// (0x00017cc2) cell_vkb_keypad_number_pane_t1

0x796e,	// (0x00017d7c) fep_vkb_candidate_pane_g1

0x0001,

0xfb34,	// (0x0001ff42) cell_hwr_side_pane_g

0x7987,	// (0x00017d95) cell_hwr_side_pane_t1

0x13a8,	// (0x000117b6) cell_hwr_side_pane_t1_copy1

0x13b6,	// (0x000117c4) cell_hwr_candidate_pane_g1

0x13e5,	// (0x000117f3) cell_hwr_candidate_pane_t1

0x7400,	// (0x0001780e) cell_vkb_candidate_pane_g2

0x79cb,	// (0x00017dd9) cell_vkb_candidate_pane_t1

0x1151,	// (0x0001155f) bg_popup_fep_shadow_pane_ParamLimits

0x1151,	// (0x0001155f) bg_popup_fep_shadow_pane

0x1206,	// (0x00011614) bg_fep_hwr_top_pane_g4

0x7480,	// (0x0001788e) bg_hwr_side_pane_g1_ParamLimits

0x7480,	// (0x0001788e) bg_hwr_side_pane_g1

0xc0f7,	// (0x0001c505) cell_hwr_side_pane_ParamLimits

0xc0f7,	// (0x0001c505) cell_hwr_side_pane

0x12b2,	// (0x000116c0) fep_hwr_write_pane_g1_ParamLimits

0x12b2,	// (0x000116c0) fep_hwr_write_pane_g1

0x12bf,	// (0x000116cd) fep_hwr_write_pane_g2_ParamLimits

0x12bf,	// (0x000116cd) fep_hwr_write_pane_g2

0x12cc,	// (0x000116da) fep_hwr_write_pane_g3_ParamLimits

0x12cc,	// (0x000116da) fep_hwr_write_pane_g3

0xc117,	// (0x0001c525) fep_hwr_write_pane_g4_ParamLimits

0xc117,	// (0x0001c525) fep_hwr_write_pane_g4

0x0005,

0xfae0,	// (0x0001feee) fep_hwr_write_pane_g_ParamLimits

0xfae0,	// (0x0001feee) fep_hwr_write_pane_g

0x1206,	// (0x00011614) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1206,	// (0x00011614) bg_fep_hwr_candidate_pane_g2

0x12ef,	// (0x000116fd) cell_hwr_candidate_pane_ParamLimits

0x12ef,	// (0x000116fd) cell_hwr_candidate_pane

0x1331,	// (0x0001173f) fep_hwr_candidate_pane_g1_ParamLimits

0x74e0,	// (0x000178ee) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x74e0,	// (0x000178ee) bg_popup_fep_shadow_pane_cp2

0x767e,	// (0x00017a8c) fep_vkb_top_pane_g4_ParamLimits

0x767e,	// (0x00017a8c) fep_vkb_top_pane_g4

0x76c4,	// (0x00017ad2) fep_vkb_side_pane_g2_ParamLimits

0x76c4,	// (0x00017ad2) fep_vkb_side_pane_g2

0xcdef,	// (0x0001d1fd) list_setting_pane_t4_ParamLimits

0xcdef,	// (0x0001d1fd) list_setting_pane_t4

0xce69,	// (0x0001d277) list_setting_number_pane_t5_ParamLimits

0xce69,	// (0x0001d277) list_setting_number_pane_t5

0x39ab,	// (0x00013db9) list_double_heading_pane_cp2_ParamLimits

0x39ab,	// (0x00013db9) list_double_heading_pane_cp2

0x3182,	// (0x00013590) list_double_heading_pane_g1_cp2_ParamLimits

0x3182,	// (0x00013590) list_double_heading_pane_g1_cp2

0x318e,	// (0x0001359c) list_double_heading_pane_g2_cp2_ParamLimits

0x318e,	// (0x0001359c) list_double_heading_pane_g2_cp2

0x79d9,	// (0x00017de7) list_double_heading_pane_t1_cp2_ParamLimits

0x79d9,	// (0x00017de7) list_double_heading_pane_t1_cp2

0x79ef,	// (0x00017dfd) list_double_heading_pane_t2_cp2_ParamLimits

0x79ef,	// (0x00017dfd) list_double_heading_pane_t2_cp2

0xeb96,	// (0x0001efa4) aid_value_unit2

0xf51f,	// (0x0001f92d) popup_preview_fixed_window

0x2601,	// (0x00012a0f) bg_popup_preview_window_pane_cp02

0x7a01,	// (0x00017e0f) list_preview_fixed_pane

0x7a89,	// (0x00017e97) list_empty_pane_fp_ParamLimits

0x7a89,	// (0x00017e97) list_empty_pane_fp

0x7a89,	// (0x00017e97) list_single_cale_day_pane_fp_ParamLimits

0x7a89,	// (0x00017e97) list_single_cale_day_pane_fp

0x7a89,	// (0x00017e97) list_single_graphic_heading_pane_fp_ParamLimits

0x7a89,	// (0x00017e97) list_single_graphic_heading_pane_fp

0x7a89,	// (0x00017e97) list_single_graphic_pane_fp_ParamLimits

0x7a89,	// (0x00017e97) list_single_graphic_pane_fp

0x7a89,	// (0x00017e97) list_single_heading_pane_fp_ParamLimits

0x7a89,	// (0x00017e97) list_single_heading_pane_fp

0x7a89,	// (0x00017e97) list_single_pane_fp_ParamLimits

0x7a89,	// (0x00017e97) list_single_pane_fp

0x7a9e,	// (0x00017eac) list_single_pane_fp_g1_ParamLimits

0x7a9e,	// (0x00017eac) list_single_pane_fp_g1

0x3182,	// (0x00013590) list_single_pane_fp_g2_ParamLimits

0x3182,	// (0x00013590) list_single_pane_fp_g2

0x318e,	// (0x0001359c) list_single_pane_fp_g3_ParamLimits

0x318e,	// (0x0001359c) list_single_pane_fp_g3

0x7aaa,	// (0x00017eb8) list_single_pane_fp_g4_ParamLimits

0x7aaa,	// (0x00017eb8) list_single_pane_fp_g4

0x0003,

0xfb47,	// (0x0001ff55) list_single_pane_fp_g_ParamLimits

0xfb47,	// (0x0001ff55) list_single_pane_fp_g

0x7ab6,	// (0x00017ec4) list_single_pane_fp_t1_ParamLimits

0x7ab6,	// (0x00017ec4) list_single_pane_fp_t1

0x7acd,	// (0x00017edb) list_single_graphic_pane_fp_g1_ParamLimits

0x7acd,	// (0x00017edb) list_single_graphic_pane_fp_g1

0x7a9e,	// (0x00017eac) list_single_graphic_pane_fp_g2_ParamLimits

0x7a9e,	// (0x00017eac) list_single_graphic_pane_fp_g2

0x3182,	// (0x00013590) list_single_graphic_pane_fp_g3_ParamLimits

0x3182,	// (0x00013590) list_single_graphic_pane_fp_g3

0x318e,	// (0x0001359c) list_single_graphic_pane_fp_g4_ParamLimits

0x318e,	// (0x0001359c) list_single_graphic_pane_fp_g4

0x7aaa,	// (0x00017eb8) list_single_graphic_pane_fp_g5_ParamLimits

0x7aaa,	// (0x00017eb8) list_single_graphic_pane_fp_g5

0x0004,

0xfb50,	// (0x0001ff5e) list_single_graphic_pane_fp_g_ParamLimits

0xfb50,	// (0x0001ff5e) list_single_graphic_pane_fp_g

0x7ad9,	// (0x00017ee7) list_single_graphic_pane_fp_t1_ParamLimits

0x7ad9,	// (0x00017ee7) list_single_graphic_pane_fp_t1

0x7acd,	// (0x00017edb) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7acd,	// (0x00017edb) list_single_graphic_heading_pane_fp_g1

0x7a9e,	// (0x00017eac) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7a9e,	// (0x00017eac) list_single_graphic_heading_pane_fp_g2

0x3182,	// (0x00013590) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3182,	// (0x00013590) list_single_graphic_heading_pane_fp_g3

0x318e,	// (0x0001359c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x318e,	// (0x0001359c) list_single_graphic_heading_pane_fp_g4

0x7aaa,	// (0x00017eb8) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7aaa,	// (0x00017eb8) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb50,	// (0x0001ff5e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb50,	// (0x0001ff5e) list_single_graphic_heading_pane_fp_g

0x7aef,	// (0x00017efd) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7aef,	// (0x00017efd) list_single_graphic_heading_pane_fp_t1

0x7b05,	// (0x00017f13) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7b05,	// (0x00017f13) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5b,	// (0x0001ff69) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5b,	// (0x0001ff69) list_single_graphic_heading_pane_fp_t

0x7b17,	// (0x00017f25) list_single_cale_day_pane_fp_g1_ParamLimits

0x7b17,	// (0x00017f25) list_single_cale_day_pane_fp_g1

0x7b4f,	// (0x00017f5d) list_single_cale_day_pane_fp_g2_ParamLimits

0x7b4f,	// (0x00017f5d) list_single_cale_day_pane_fp_g2

0x7b5b,	// (0x00017f69) list_single_cale_day_pane_fp_g3_ParamLimits

0x7b5b,	// (0x00017f69) list_single_cale_day_pane_fp_g3

0x7b83,	// (0x00017f91) list_single_cale_day_pane_fp_g4_ParamLimits

0x7b83,	// (0x00017f91) list_single_cale_day_pane_fp_g4

0x7ba7,	// (0x00017fb5) list_single_cale_day_pane_fp_g5_ParamLimits

0x7ba7,	// (0x00017fb5) list_single_cale_day_pane_fp_g5

0x0004,

0xfb60,	// (0x0001ff6e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb60,	// (0x0001ff6e) list_single_cale_day_pane_fp_g

0x7bcb,	// (0x00017fd9) list_single_cale_day_pane_fp_t1_ParamLimits

0x7bcb,	// (0x00017fd9) list_single_cale_day_pane_fp_t1

0x7bf1,	// (0x00017fff) list_single_cale_day_pane_fp_t2_ParamLimits

0x7bf1,	// (0x00017fff) list_single_cale_day_pane_fp_t2

0x7c0a,	// (0x00018018) list_single_cale_day_pane_fp_t3_ParamLimits

0x7c0a,	// (0x00018018) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6b,	// (0x0001ff79) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6b,	// (0x0001ff79) list_single_cale_day_pane_fp_t

0x7a9e,	// (0x00017eac) list_empty_pane_fp_g1_ParamLimits

0x7a9e,	// (0x00017eac) list_empty_pane_fp_g1

0x7c23,	// (0x00018031) list_empty_pane_fp_t1

0x7c31,	// (0x0001803f) list_empty_pane_fp_t2

0x0001,

0xfb72,	// (0x0001ff80) list_empty_pane_fp_t

0x7a9e,	// (0x00017eac) list_single_heading_pane_fp_g1_ParamLimits

0x7a9e,	// (0x00017eac) list_single_heading_pane_fp_g1

0x3182,	// (0x00013590) list_single_heading_pane_fp_g2_ParamLimits

0x3182,	// (0x00013590) list_single_heading_pane_fp_g2

0x318e,	// (0x0001359c) list_single_heading_pane_fp_g3_ParamLimits

0x318e,	// (0x0001359c) list_single_heading_pane_fp_g3

0x0002,

0xfb77,	// (0x0001ff85) list_single_heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0001ff85) list_single_heading_pane_fp_g

0x7c3f,	// (0x0001804d) list_single_heading_pane_fp_t1_ParamLimits

0x7c3f,	// (0x0001804d) list_single_heading_pane_fp_t1

0x7c51,	// (0x0001805f) list_single_heading_pane_fp_t2_ParamLimits

0x7c51,	// (0x0001805f) list_single_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x0001ff8c) list_single_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x0001ff8c) list_single_heading_pane_fp_t

0x34f1,	// (0x000138ff) aid_size_cell_fast

0x2571,	// (0x0001297f) soft_indicator_pane_cp1_t1

0x352e,	// (0x0001393c) cell_app_pane_cp2_ParamLimits

0x352e,	// (0x0001393c) cell_app_pane_cp2

0x1173,	// (0x00011581) fep_hwr_candidate_drop_down_list_pane

0x134b,	// (0x00011759) fep_hwr_candidate_pane_g3_ParamLimits

0x134b,	// (0x00011759) fep_hwr_candidate_pane_g3

0xebb2,	// (0x0001efc0) fep_hwr_candidate_pane_g4_ParamLimits

0xebb2,	// (0x0001efc0) fep_hwr_candidate_pane_g4

0x0002,

0xfaed,	// (0x0001fefb) fep_hwr_candidate_pane_g_ParamLimits

0xfaed,	// (0x0001fefb) fep_hwr_candidate_pane_g

0x7565,	// (0x00017973) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7565,	// (0x00017973) fep_vkb_candidate_drop_down_list_pane

0x7976,	// (0x00017d84) fep_vkb_candidate_pane_g3

0x797e,	// (0x00017d8c) fep_vkb_candidate_pane_g4

0x0002,

0xfb1a,	// (0x0001ff28) fep_vkb_candidate_pane_g

0x13b6,	// (0x000117c4) cell_hwr_candidate_pane_g1_ParamLimits

0x13c4,	// (0x000117d2) cell_hwr_candidate_pane_g3_ParamLimits

0x13c4,	// (0x000117d2) cell_hwr_candidate_pane_g3

0x9231,	// (0x0001963f) cell_hwr_candidate_pane_g4_ParamLimits

0x9231,	// (0x0001963f) cell_hwr_candidate_pane_g4

0x0002,

0xfb39,	// (0x0001ff47) cell_hwr_candidate_pane_g_ParamLimits

0xfb39,	// (0x0001ff47) cell_hwr_candidate_pane_g

0x7995,	// (0x00017da3) cell_vkb_candidate_pane_g3_ParamLimits

0x7995,	// (0x00017da3) cell_vkb_candidate_pane_g3

0x79b0,	// (0x00017dbe) cell_vkb_candidate_pane_g4_ParamLimits

0x79b0,	// (0x00017dbe) cell_vkb_candidate_pane_g4

0x7c67,	// (0x00018075) cell_app_pane_cp2_g1_ParamLimits

0x7c67,	// (0x00018075) cell_app_pane_cp2_g1

0x7c85,	// (0x00018093) cell_app_pane_cp2_g2_ParamLimits

0x7c85,	// (0x00018093) cell_app_pane_cp2_g2

0x0001,

0xfb83,	// (0x0001ff91) cell_app_pane_cp2_g_ParamLimits

0xfb83,	// (0x0001ff91) cell_app_pane_cp2_g

0x7c91,	// (0x0001809f) cell_app_pane_cp2_t1_ParamLimits

0x7c91,	// (0x0001809f) cell_app_pane_cp2_t1

0x315c,	// (0x0001356a) grid_highlight_pane_cp1_ParamLimits

0x315c,	// (0x0001356a) grid_highlight_pane_cp1

0x1403,	// (0x00011811) cell_hwr_candidate_pane_cp1_ParamLimits

0x1403,	// (0x00011811) cell_hwr_candidate_pane_cp1

0x13b6,	// (0x000117c4) fep_hwr_candidate_drop_down_list_pane_g1

0x1422,	// (0x00011830) fep_hwr_candidate_drop_down_list_pane_g2

0x142f,	// (0x0001183d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb88,	// (0x0001ff96) fep_hwr_candidate_drop_down_list_pane_g

0x143c,	// (0x0001184a) fep_hwr_candidate_drop_down_list_scroll_pane

0x1445,	// (0x00011853) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1445,	// (0x00011853) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1452,	// (0x00011860) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1452,	// (0x00011860) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x145f,	// (0x0001186d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x145f,	// (0x0001186d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x146c,	// (0x0001187a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x146c,	// (0x0001187a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1487,	// (0x00011895) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1487,	// (0x00011895) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x14a2,	// (0x000118b0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x14a2,	// (0x000118b0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x14bd,	// (0x000118cb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x14bd,	// (0x000118cb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x14d8,	// (0x000118e6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x14d8,	// (0x000118e6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8f,	// (0x0001ff9d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8f,	// (0x0001ff9d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7ca3,	// (0x000180b1) cell_vkb_candidate_pane_cp1_ParamLimits

0x7ca3,	// (0x000180b1) cell_vkb_candidate_pane_cp1

0x767e,	// (0x00017a8c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x767e,	// (0x00017a8c) fep_vkb_candidate_drop_down_list_pane_g1

0x7cc3,	// (0x000180d1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7cc3,	// (0x000180d1) fep_vkb_candidate_drop_down_list_pane_g2

0x7cd0,	// (0x000180de) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7cd0,	// (0x000180de) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba0,	// (0x0001ffae) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba0,	// (0x0001ffae) fep_vkb_candidate_drop_down_list_pane_g

0x7cdd,	// (0x000180eb) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7cdd,	// (0x000180eb) fep_vkb_candidate_drop_down_list_scroll_pane

0x7cea,	// (0x000180f8) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7cea,	// (0x000180f8) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7cf7,	// (0x00018105) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7cf7,	// (0x00018105) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7d03,	// (0x00018111) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7d03,	// (0x00018111) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7a3b,	// (0x00017e49) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7a3b,	// (0x00017e49) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7a5c,	// (0x00017e6a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7a5c,	// (0x00017e6a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7d0f,	// (0x0001811d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7d0f,	// (0x0001811d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7d30,	// (0x0001813e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7d30,	// (0x0001813e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7d51,	// (0x0001815f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7d51,	// (0x0001815f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba7,	// (0x0001ffb5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba7,	// (0x0001ffb5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc7e5,	// (0x0001cbf3) title_pane_g1_ParamLimits

0xc7f8,	// (0x0001cc06) title_pane_g2_ParamLimits

0xf529,	// (0x0001f937) title_pane_g_ParamLimits

0x3964,	// (0x00013d72) aid_call2_pane

0x396c,	// (0x00013d7a) aid_call_pane

0x3974,	// (0x00013d82) popup_clock_analogue_window_g1

0x3974,	// (0x00013d82) popup_clock_analogue_window_g2

0x0257,	// (0x00010665) popup_clock_analogue_window_g3

0x0260,	// (0x0001066e) popup_clock_analogue_window_g4

0xeba8,	// (0x0001efb6) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x0001fadc) popup_clock_analogue_window_g

0x0268,	// (0x00010676) popup_clock_analogue_window_t1

0x0276,	// (0x00010684) clock_digital_number_pane_ParamLimits

0x0276,	// (0x00010684) clock_digital_number_pane

0x0282,	// (0x00010690) clock_digital_number_pane_cp02_ParamLimits

0x0282,	// (0x00010690) clock_digital_number_pane_cp02

0x028e,	// (0x0001069c) clock_digital_number_pane_cp03_ParamLimits

0x028e,	// (0x0001069c) clock_digital_number_pane_cp03

0x029a,	// (0x000106a8) clock_digital_number_pane_cp04_ParamLimits

0x029a,	// (0x000106a8) clock_digital_number_pane_cp04

0x02a6,	// (0x000106b4) clock_digital_separator_pane_ParamLimits

0x02a6,	// (0x000106b4) clock_digital_separator_pane

0x02b2,	// (0x000106c0) popup_clock_digital_window_t1_ParamLimits

0x02b2,	// (0x000106c0) popup_clock_digital_window_t1

0xeba8,	// (0x0001efb6) clock_digital_number_pane_g1

0xeba8,	// (0x0001efb6) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x0001fae7) clock_digital_number_pane_g

0xeba8,	// (0x0001efb6) clock_digital_separator_pane_g1

0xeba8,	// (0x0001efb6) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x0001fae7) clock_digital_separator_pane_g

0xd306,	// (0x0001d714) aid_fill_nsta_ParamLimits

0xd43c,	// (0x0001d84a) indicator_nsta_pane_ParamLimits

0x4659,	// (0x00014a67) popup_clock_analogue_window

0x4659,	// (0x00014a67) popup_clock_digital_window

0xdccc,	// (0x0001e0da) grid_indicator_nsta_pane_ParamLimits

0x6db5,	// (0x000171c3) clock_nsta_pane_t2

0x0001,

0xfa6d,	// (0x0001fe7b) clock_nsta_pane_t

0x021b,	// (0x00010629) aid_size_max_handle

0x0225,	// (0x00010633) aid_size_min_handle

0x4024,	// (0x00014432) editor_scroll_pane

0x7d6c,	// (0x0001817a) ex_editor_pane

0x345f,	// (0x0001386d) scroll_pane_cp13

0x2ba4,	// (0x00012fb2) scroll_pane_cp14

0x39a3,	// (0x00013db1) scroll_pane_cp36

0xd113,	// (0x0001d521) list_single_graphic_hl_pane_cp2_ParamLimits

0xd113,	// (0x0001d521) list_single_graphic_hl_pane_cp2

0xdb1e,	// (0x0001df2c) list_single_graphic_hl_pane_ParamLimits

0xdb1e,	// (0x0001df2c) list_single_graphic_hl_pane

0x7d74,	// (0x00018182) aid_size_min_hl_cp1

0x7d7d,	// (0x0001818b) list_highlight_pane_cp34_ParamLimits

0x7d7d,	// (0x0001818b) list_highlight_pane_cp34

0x7d8e,	// (0x0001819c) list_single_graphic_hl_pane_g1_ParamLimits

0x7d8e,	// (0x0001819c) list_single_graphic_hl_pane_g1

0xe024,	// (0x0001e432) list_single_graphic_hl_pane_g2_ParamLimits

0xe024,	// (0x0001e432) list_single_graphic_hl_pane_g2

0xe024,	// (0x0001e432) list_single_graphic_hl_pane_g3_ParamLimits

0xe024,	// (0x0001e432) list_single_graphic_hl_pane_g3

0x3efc,	// (0x0001430a) list_single_graphic_hl_pane_g4_ParamLimits

0x3efc,	// (0x0001430a) list_single_graphic_hl_pane_g4

0xe030,	// (0x0001e43e) list_single_graphic_hl_pane_g5_ParamLimits

0xe030,	// (0x0001e43e) list_single_graphic_hl_pane_g5

0x0004,

0xfbb8,	// (0x0001ffc6) list_single_graphic_hl_pane_g_ParamLimits

0xfbb8,	// (0x0001ffc6) list_single_graphic_hl_pane_g

0xe044,	// (0x0001e452) list_single_graphic_hl_pane_t1_ParamLimits

0xe044,	// (0x0001e452) list_single_graphic_hl_pane_t1

0x7dbb,	// (0x000181c9) aid_size_min_hl_cp2

0x7dc4,	// (0x000181d2) list_highlight_pane_cp34_cp2_ParamLimits

0x7dc4,	// (0x000181d2) list_highlight_pane_cp34_cp2

0x7d8e,	// (0x0001819c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7d8e,	// (0x0001819c) list_single_graphic_hl_pane_g1_cp2

0x7dd1,	// (0x000181df) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7dd1,	// (0x000181df) list_single_graphic_hl_pane_g2_cp2

0x7ddd,	// (0x000181eb) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7ddd,	// (0x000181eb) list_single_graphic_hl_pane_g3_cp2

0x7deb,	// (0x000181f9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7deb,	// (0x000181f9) list_single_graphic_hl_pane_g4_cp2

0x7df7,	// (0x00018205) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7df7,	// (0x00018205) list_single_graphic_hl_pane_g5_cp2

0xb892,	// (0x0001bca0) control_pane_g4_ParamLimits

0xb892,	// (0x0001bca0) control_pane_g4

0x4350,	// (0x0001475e) bg_popup_sub_pane_cp10_ParamLimits

0x740a,	// (0x00017818) list_choice_list_pane_ParamLimits

0x7419,	// (0x00017827) scroll_pane_cp23

0x2601,	// (0x00012a0f) bg_popup_preview_window_pane_cp02_ParamLimits

0x7a01,	// (0x00017e0f) list_preview_fixed_pane_ParamLimits

0x7a17,	// (0x00017e25) list_preview_fixed_pane_cp_ParamLimits

0x7a17,	// (0x00017e25) list_preview_fixed_pane_cp

0x7a23,	// (0x00017e31) popup_preview_fixed_window_g1_ParamLimits

0x7a23,	// (0x00017e31) popup_preview_fixed_window_g1

0x7a2f,	// (0x00017e3d) popup_preview_fixed_window_g2_ParamLimits

0x7a2f,	// (0x00017e3d) popup_preview_fixed_window_g2

0x0002,

0xfb40,	// (0x0001ff4e) popup_preview_fixed_window_g_ParamLimits

0xfb40,	// (0x0001ff4e) popup_preview_fixed_window_g

0x018f,	// (0x0001059d) aid_navi_side_left_pane_ParamLimits

0x01a4,	// (0x000105b2) aid_navi_side_right_pane_ParamLimits

0x01bc,	// (0x000105ca) navi_icon_pane_stacon_ParamLimits

0x01d0,	// (0x000105de) navi_navi_pane_stacon_ParamLimits

0x01bc,	// (0x000105ca) navi_text_pane_stacon_ParamLimits

0xf416,	// (0x0001f824) main_text_info_pane

0x7e21,	// (0x0001822f) listscroll_text_info_pane

0x7e29,	// (0x00018237) list_text_info_pane_ParamLimits

0x7e29,	// (0x00018237) list_text_info_pane

0x7e38,	// (0x00018246) scroll_pane_cp24_ParamLimits

0x7e38,	// (0x00018246) scroll_pane_cp24

0xe05a,	// (0x0001e468) list_text_info_pane_t1_ParamLimits

0xe05a,	// (0x0001e468) list_text_info_pane_t1

0xb9d7,	// (0x0001bde5) popup_fast_swap2_window_ParamLimits

0xb9d7,	// (0x0001bde5) popup_fast_swap2_window

0x7e87,	// (0x00018295) aid_size_cell_fast2

0xeb9e,	// (0x0001efac) bg_popup_window_pane_cp17

0x7e91,	// (0x0001829f) heading_pane_cp2

0x7e99,	// (0x000182a7) listscroll_fast2_pane

0x7ea1,	// (0x000182af) grid_fast2_pane

0x7eab,	// (0x000182b9) listscroll_fast2_pane_g1

0x7eb3,	// (0x000182c1) listscroll_fast2_pane_g2

0x0001,

0xfbc3,	// (0x0001ffd1) listscroll_fast2_pane_g

0x345f,	// (0x0001386d) scroll_pane_cp26

0x7ebd,	// (0x000182cb) cell_fast2_pane_ParamLimits

0x7ebd,	// (0x000182cb) cell_fast2_pane

0x7ed2,	// (0x000182e0) cell_fast2_pane_g1

0x7edb,	// (0x000182e9) cell_fast2_pane_g2

0x7ee4,	// (0x000182f2) cell_fast2_pane_g3

0x0002,

0xfbc8,	// (0x0001ffd6) cell_fast2_pane_g

0x2961,	// (0x00012d6f) grid_highlight_pane_cp9

0x06ae,	// (0x00010abc) main_eswt_pane_ParamLimits

0x06ae,	// (0x00010abc) main_eswt_pane

0x7e4d,	// (0x0001825b) list_single_text_info_pane

0x7eec,	// (0x000182fa) eswt_ctrl_button_pane

0x7eec,	// (0x000182fa) eswt_ctrl_canvas_pane

0x7ef4,	// (0x00018302) eswt_ctrl_combo_pane

0x7eec,	// (0x000182fa) eswt_ctrl_default_pane

0x7eec,	// (0x000182fa) eswt_ctrl_label_pane

0x7efc,	// (0x0001830a) eswt_ctrl_wait_pane

0x7f04,	// (0x00018312) eswt_shell_pane

0xeb9e,	// (0x0001efac) listscroll_eswt_app_pane

0x7f24,	// (0x00018332) popup_eswt_tasktip_window_ParamLimits

0x7f24,	// (0x00018332) popup_eswt_tasktip_window

0x49ba,	// (0x00014dc8) bg_popup_window_pane_cp18

0x7f3d,	// (0x0001834b) eswt_control_pane_g1_ParamLimits

0x7f3d,	// (0x0001834b) eswt_control_pane_g1

0x7f4a,	// (0x00018358) eswt_control_pane_g2_ParamLimits

0x7f4a,	// (0x00018358) eswt_control_pane_g2

0x7f57,	// (0x00018365) eswt_control_pane_g3_ParamLimits

0x7f57,	// (0x00018365) eswt_control_pane_g3

0x7f64,	// (0x00018372) eswt_control_pane_g4_ParamLimits

0x7f64,	// (0x00018372) eswt_control_pane_g4

0x0003,

0xfbcf,	// (0x0001ffdd) eswt_control_pane_g_ParamLimits

0xfbcf,	// (0x0001ffdd) eswt_control_pane_g

0x315c,	// (0x0001356a) bg_button_pane_ParamLimits

0x315c,	// (0x0001356a) bg_button_pane

0x2976,	// (0x00012d84) common_borders_pane_copy2_ParamLimits

0x2976,	// (0x00012d84) common_borders_pane_copy2

0x7f71,	// (0x0001837f) control_button_pane_g1_ParamLimits

0x7f71,	// (0x0001837f) control_button_pane_g1

0x7f7d,	// (0x0001838b) control_button_pane_g2_ParamLimits

0x7f7d,	// (0x0001838b) control_button_pane_g2

0x7f89,	// (0x00018397) control_button_pane_g3_ParamLimits

0x7f89,	// (0x00018397) control_button_pane_g3

0x0002,

0xfbd8,	// (0x0001ffe6) control_button_pane_g_ParamLimits

0xfbd8,	// (0x0001ffe6) control_button_pane_g

0x7f9d,	// (0x000183ab) control_button_pane_t1

0x7fab,	// (0x000183b9) control_button_pane_t2

0x0001,

0xfbdf,	// (0x0001ffed) control_button_pane_t

0x4898,	// (0x00014ca6) bg_button_pane_g1

0x48a8,	// (0x00014cb6) bg_button_pane_g2

0x48a0,	// (0x00014cae) bg_button_pane_g3

0x48b8,	// (0x00014cc6) bg_button_pane_g4

0x48b0,	// (0x00014cbe) bg_button_pane_g5

0x48c0,	// (0x00014cce) bg_button_pane_g6

0x48c8,	// (0x00014cd6) bg_button_pane_g7

0x48d8,	// (0x00014ce6) bg_button_pane_g8

0x48d0,	// (0x00014cde) bg_button_pane_g9

0x0008,

0xf837,	// (0x0001fc45) bg_button_pane_g

0x73c5,	// (0x000177d3) common_borders_pane_ParamLimits

0x73c5,	// (0x000177d3) common_borders_pane

0x7f3d,	// (0x0001834b) eswt_control_pane_g1_copy1_ParamLimits

0x7f3d,	// (0x0001834b) eswt_control_pane_g1_copy1

0x7f4a,	// (0x00018358) eswt_control_pane_g2_copy1_ParamLimits

0x7f4a,	// (0x00018358) eswt_control_pane_g2_copy1

0x7f57,	// (0x00018365) eswt_control_pane_g3_copy1_ParamLimits

0x7f57,	// (0x00018365) eswt_control_pane_g3_copy1

0x7f64,	// (0x00018372) eswt_control_pane_g4_copy1_ParamLimits

0x7f64,	// (0x00018372) eswt_control_pane_g4_copy1

0x7400,	// (0x0001780e) bg_eswt_ctrl_canvas_pane_g1

0x73c5,	// (0x000177d3) common_borders_pane_cp2_ParamLimits

0x73c5,	// (0x000177d3) common_borders_pane_cp2

0x73c5,	// (0x000177d3) common_borders_pane_cp3_ParamLimits

0x73c5,	// (0x000177d3) common_borders_pane_cp3

0x7fb9,	// (0x000183c7) separator_horizontal_pane

0x7fc1,	// (0x000183cf) separator_vertical_pane

0x7f3d,	// (0x0001834b) eswt_control_pane_g1_copy2_ParamLimits

0x7f3d,	// (0x0001834b) eswt_control_pane_g1_copy2

0x7f4a,	// (0x00018358) eswt_control_pane_g2_copy2_ParamLimits

0x7f4a,	// (0x00018358) eswt_control_pane_g2_copy2

0x7f57,	// (0x00018365) eswt_control_pane_g3_copy2_ParamLimits

0x7f57,	// (0x00018365) eswt_control_pane_g3_copy2

0x7f64,	// (0x00018372) eswt_control_pane_g4_copy2_ParamLimits

0x7f64,	// (0x00018372) eswt_control_pane_g4_copy2

0xeb9e,	// (0x0001efac) common_borders_pane_cp4

0x7fca,	// (0x000183d8) separator_horizontal_pane_g1

0x7fd3,	// (0x000183e1) separator_horizontal_pane_g2

0x7fdc,	// (0x000183ea) separator_horizontal_pane_g3

0x0002,

0xfbe4,	// (0x0001fff2) separator_horizontal_pane_g

0x7f3d,	// (0x0001834b) eswt_control_pane_g1_copy3_ParamLimits

0x7f3d,	// (0x0001834b) eswt_control_pane_g1_copy3

0x7f4a,	// (0x00018358) eswt_control_pane_g2_copy3_ParamLimits

0x7f4a,	// (0x00018358) eswt_control_pane_g2_copy3

0x7f57,	// (0x00018365) eswt_control_pane_g3_copy3_ParamLimits

0x7f57,	// (0x00018365) eswt_control_pane_g3_copy3

0x7f64,	// (0x00018372) eswt_control_pane_g4_copy3_ParamLimits

0x7f64,	// (0x00018372) eswt_control_pane_g4_copy3

0xeb9e,	// (0x0001efac) common_borders_pane_cp5

0x7fe5,	// (0x000183f3) separator_vertical_pane_g1

0x7fee,	// (0x000183fc) separator_vertical_pane_g2

0x7ff7,	// (0x00018405) separator_vertical_pane_g3

0x0002,

0xfbeb,	// (0x0001fff9) separator_vertical_pane_g

0x7f3d,	// (0x0001834b) eswt_control_pane_g1_copy4_ParamLimits

0x7f3d,	// (0x0001834b) eswt_control_pane_g1_copy4

0x7f4a,	// (0x00018358) eswt_control_pane_g2_copy4_ParamLimits

0x7f4a,	// (0x00018358) eswt_control_pane_g2_copy4

0x7f57,	// (0x00018365) eswt_control_pane_g3_copy4_ParamLimits

0x7f57,	// (0x00018365) eswt_control_pane_g3_copy4

0x7f64,	// (0x00018372) eswt_control_pane_g4_copy4_ParamLimits

0x7f64,	// (0x00018372) eswt_control_pane_g4_copy4

0x8000,	// (0x0001840e) eswt_ctrl_combo_button_pane

0x8008,	// (0x00018416) eswt_ctrl_input_pane

0x8010,	// (0x0001841e) popup_choice_list_window_cp70

0x8018,	// (0x00018426) eswt_ctrl_input_pane_t1

0xeb9e,	// (0x0001efac) input_focus_pane_cp70

0x73c5,	// (0x000177d3) bg_button_pane_cp70_ParamLimits

0x73c5,	// (0x000177d3) bg_button_pane_cp70

0x8026,	// (0x00018434) eswt_ctrl_combo_button_pane_g1

0x802e,	// (0x0001843c) wait_bar_pane_cp70

0x49ba,	// (0x00014dc8) bg_popup_window_pane_cp70_ParamLimits

0x49ba,	// (0x00014dc8) bg_popup_window_pane_cp70

0x8036,	// (0x00018444) popup_eswt_tasktip_window_t1

0x804c,	// (0x0001845a) wait_bar_pane_cp71_ParamLimits

0x804c,	// (0x0001845a) wait_bar_pane_cp71

0x8058,	// (0x00018466) grid_eswt_app_pane

0x377d,	// (0x00013b8b) scroll_pane_cp70

0xe075,	// (0x0001e483) cell_eswt_app_pane_ParamLimits

0xe075,	// (0x0001e483) cell_eswt_app_pane

0xe09f,	// (0x0001e4ad) cell_eswt_app_pane_g1_ParamLimits

0xe09f,	// (0x0001e4ad) cell_eswt_app_pane_g1

0xe0ce,	// (0x0001e4dc) cell_eswt_app_pane_g2_ParamLimits

0xe0ce,	// (0x0001e4dc) cell_eswt_app_pane_g2

0x0001,

0xfbf2,	// (0x00020000) cell_eswt_app_pane_g_ParamLimits

0xfbf2,	// (0x00020000) cell_eswt_app_pane_g

0xe0f7,	// (0x0001e505) cell_eswt_app_pane_t1_ParamLimits

0xe0f7,	// (0x0001e505) cell_eswt_app_pane_t1

0x811b,	// (0x00018529) grid_highlight_pane_cp70_ParamLimits

0x811b,	// (0x00018529) grid_highlight_pane_cp70

0x3efc,	// (0x0001430a) set_content_pane_g1

0xd2c3,	// (0x0001d6d1) status_small_volume_pane

0xc12c,	// (0x0001c53a) status_small_volume_pane_g1

0xc134,	// (0x0001c542) volume_small2_pane

0xc13d,	// (0x0001c54b) volume_small2_pane_g1

0xc146,	// (0x0001c554) volume_small2_pane_g2

0xc14f,	// (0x0001c55d) volume_small2_pane_g3

0xc158,	// (0x0001c566) volume_small2_pane_g4

0xc161,	// (0x0001c56f) volume_small2_pane_g5

0xc16a,	// (0x0001c578) volume_small2_pane_g6

0xc173,	// (0x0001c581) volume_small2_pane_g7

0xc17c,	// (0x0001c58a) volume_small2_pane_g8

0xc185,	// (0x0001c593) volume_small2_pane_g9

0xc18e,	// (0x0001c59c) volume_small2_pane_g10

0x0009,

0xfbf7,	// (0x00020005) volume_small2_pane_g

0x77c6,	// (0x00017bd4) fep_vkb_top_text_pane_g1_ParamLimits

0xdfcc,	// (0x0001e3da) fep_vkb_top_text_pane_t1_ParamLimits

0x7a7d,	// (0x00017e8b) popup_preview_fixed_window_g3_ParamLimits

0x7a7d,	// (0x00017e8b) popup_preview_fixed_window_g3

0xc000,	// (0x0001c40e) popup_toolbar_trans_pane

0xd94e,	// (0x0001dd5c) aid_height_set_list_ParamLimits

0x5d7e,	// (0x0001618c) aid_size_parent_ParamLimits

0x4350,	// (0x0001475e) list_highlight_pane_cp2_ParamLimits

0x3efc,	// (0x0001430a) set_content_pane_g1_ParamLimits

0xdb30,	// (0x0001df3e) list_single_image_pane_ParamLimits

0xdb30,	// (0x0001df3e) list_single_image_pane

0xe129,	// (0x0001e537) aid_size_cell_image_ParamLimits

0xe129,	// (0x0001e537) aid_size_cell_image

0xe136,	// (0x0001e544) grid_single_image_pane_ParamLimits

0xe136,	// (0x0001e544) grid_single_image_pane

0x60c5,	// (0x000164d3) list_single_image_pane_g1_ParamLimits

0x60c5,	// (0x000164d3) list_single_image_pane_g1

0x8140,	// (0x0001854e) list_single_image_pane_g2_ParamLimits

0x8140,	// (0x0001854e) list_single_image_pane_g2

0x0001,

0xfc0c,	// (0x0002001a) list_single_image_pane_g_ParamLimits

0xfc0c,	// (0x0002001a) list_single_image_pane_g

0x8154,	// (0x00018562) list_single_image_pane_t1_ParamLimits

0x8154,	// (0x00018562) list_single_image_pane_t1

0xe142,	// (0x0001e550) cell_image_list_pane_ParamLimits

0xe142,	// (0x0001e550) cell_image_list_pane

0xe156,	// (0x0001e564) cell_image_list_pane_g1

0xe15f,	// (0x0001e56d) cell_image_list_pane_g2

0x0001,

0xfc11,	// (0x0002001f) cell_image_list_pane_g

0x8190,	// (0x0001859e) aid_size_cell_tb_trans_pane

0x315c,	// (0x0001356a) bg_tb_trans_pane

0x81a2,	// (0x000185b0) grid_tb_trans_pane

0x4898,	// (0x00014ca6) bg_tb_trans_pane_g1

0x48a8,	// (0x00014cb6) bg_tb_trans_pane_g2

0x48a0,	// (0x00014cae) bg_tb_trans_pane_g3

0x48b8,	// (0x00014cc6) bg_tb_trans_pane_g4

0x48b0,	// (0x00014cbe) bg_tb_trans_pane_g5

0x48d8,	// (0x00014ce6) bg_tb_trans_pane_g6

0x48d0,	// (0x00014cde) bg_tb_trans_pane_g7

0x48c0,	// (0x00014cce) bg_tb_trans_pane_g8

0x48c8,	// (0x00014cd6) bg_tb_trans_pane_g9

0x0008,

0xfc16,	// (0x00020024) bg_tb_trans_pane_g

0x81b6,	// (0x000185c4) cell_toolbar_trans_pane_ParamLimits

0x81b6,	// (0x000185c4) cell_toolbar_trans_pane

0x7400,	// (0x0001780e) cell_toolbar_trans_pane_g1

0xdd83,	// (0x0001e191) list_form2_midp_pane_t1

0xdd91,	// (0x0001e19f) list_form2_midp_pane_t2

0x0001,

0xfab3,	// (0x0001fec1) list_form2_midp_pane_t

0x6fa2,	// (0x000173b0) scroll_pane_cp51_ParamLimits

0x71ad,	// (0x000175bb) form2_midp_wait_pane_g1

0x71b6,	// (0x000175c4) form2_midp_wait_pane_g2

0x71bf,	// (0x000175cd) form2_midp_wait_pane_g3

0x0002,

0xfac8,	// (0x0001fed6) form2_midp_wait_pane_g

0x235e,	// (0x0001276c) list_highlight_pane_cp21_ParamLimits

0x720b,	// (0x00017619) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x721a,	// (0x00017628) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5f84,	// (0x00016392) list_single_2graphic_im_pane_ParamLimits

0x5f84,	// (0x00016392) list_single_2graphic_im_pane

0x81dc,	// (0x000185ea) list_single_2graphic_im_pane_g1_ParamLimits

0x81dc,	// (0x000185ea) list_single_2graphic_im_pane_g1

0x81ed,	// (0x000185fb) list_single_2graphic_im_pane_g2_ParamLimits

0x81ed,	// (0x000185fb) list_single_2graphic_im_pane_g2

0x81f9,	// (0x00018607) list_single_2graphic_im_pane_g3_ParamLimits

0x81f9,	// (0x00018607) list_single_2graphic_im_pane_g3

0x0003,

0xfc29,	// (0x00020037) list_single_2graphic_im_pane_g_ParamLimits

0xfc29,	// (0x00020037) list_single_2graphic_im_pane_g

0x8219,	// (0x00018627) list_single_2graphic_im_pane_t1_ParamLimits

0x8219,	// (0x00018627) list_single_2graphic_im_pane_t1

0x7a89,	// (0x00017e97) list_single_graphic_2heading_pane_fp_ParamLimits

0x7a89,	// (0x00017e97) list_single_graphic_2heading_pane_fp

0x7acd,	// (0x00017edb) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7acd,	// (0x00017edb) list_single_graphic_2heading_pane_fp_g1

0x7a9e,	// (0x00017eac) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7a9e,	// (0x00017eac) list_single_graphic_2heading_pane_fp_g2

0x3182,	// (0x00013590) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3182,	// (0x00013590) list_single_graphic_2heading_pane_fp_g3

0x318e,	// (0x0001359c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x318e,	// (0x0001359c) list_single_graphic_2heading_pane_fp_g4

0x7aaa,	// (0x00017eb8) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7aaa,	// (0x00017eb8) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb50,	// (0x0001ff5e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb50,	// (0x0001ff5e) list_single_graphic_2heading_pane_fp_g

0x824a,	// (0x00018658) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x824a,	// (0x00018658) list_single_graphic_2heading_pane_fp_t1

0x7b05,	// (0x00017f13) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7b05,	// (0x00017f13) list_single_graphic_2heading_pane_fp_t2

0x8260,	// (0x0001866e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x8260,	// (0x0001866e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc32,	// (0x00020040) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc32,	// (0x00020040) list_single_graphic_2heading_pane_fp_t

0x748c,	// (0x0001789a) fep_hwr_write_pane_g5_ParamLimits

0x748c,	// (0x0001789a) fep_hwr_write_pane_g5

0x7498,	// (0x000178a6) fep_hwr_write_pane_g6_ParamLimits

0x7498,	// (0x000178a6) fep_hwr_write_pane_g6

0x7f04,	// (0x00018312) eswt_shell_pane_ParamLimits

0x49ba,	// (0x00014dc8) bg_popup_window_pane_cp18_ParamLimits

0x7f35,	// (0x00018343) heading_pane_cp70

0x8036,	// (0x00018444) popup_eswt_tasktip_window_t1_ParamLimits

0xd361,	// (0x0001d76f) aid_touch_tab_arrow_left

0xd377,	// (0x0001d785) aid_touch_tab_arrow_right

0xc810,	// (0x0001cc1e) title_pane_g3_ParamLimits

0xc810,	// (0x0001cc1e) title_pane_g3

0x303b,	// (0x00013449) set_value_pane_g1

0xc000,	// (0x0001c40e) popup_toolbar_trans_pane_ParamLimits

0x8190,	// (0x0001859e) aid_size_cell_tb_trans_pane_ParamLimits

0x315c,	// (0x0001356a) bg_tb_trans_pane_ParamLimits

0x81a2,	// (0x000185b0) grid_tb_trans_pane_ParamLimits

0x2601,	// (0x00012a0f) cont_note_pane_ParamLimits

0x2601,	// (0x00012a0f) cont_note_pane

0x2976,	// (0x00012d84) cont_snote2_single_text_pane_ParamLimits

0x2976,	// (0x00012d84) cont_snote2_single_text_pane

0x2976,	// (0x00012d84) cont_snote2_single_graphic_pane_ParamLimits

0x2976,	// (0x00012d84) cont_snote2_single_graphic_pane

0x5012,	// (0x00015420) cont_note_wait_pane_ParamLimits

0x5012,	// (0x00015420) cont_note_wait_pane

0x5012,	// (0x00015420) cont_note_image_pane_ParamLimits

0x5012,	// (0x00015420) cont_note_image_pane

0x8276,	// (0x00018684) popup_note2_window_g1_ParamLimits

0x8276,	// (0x00018684) popup_note2_window_g1

0x82a7,	// (0x000186b5) popup_note2_window_t1_ParamLimits

0x82a7,	// (0x000186b5) popup_note2_window_t1

0x82ec,	// (0x000186fa) popup_note2_window_t2_ParamLimits

0x82ec,	// (0x000186fa) popup_note2_window_t2

0x8331,	// (0x0001873f) popup_note2_window_t3_ParamLimits

0x8331,	// (0x0001873f) popup_note2_window_t3

0x8376,	// (0x00018784) popup_note2_window_t4_ParamLimits

0x8376,	// (0x00018784) popup_note2_window_t4

0x2685,	// (0x00012a93) popup_note2_window_t5_ParamLimits

0x2685,	// (0x00012a93) popup_note2_window_t5

0x0004,

0xfc3e,	// (0x0002004c) popup_note2_window_t_ParamLimits

0xfc3e,	// (0x0002004c) popup_note2_window_t

0x83a5,	// (0x000187b3) popup_note2_image_window_g1_ParamLimits

0x83a5,	// (0x000187b3) popup_note2_image_window_g1

0x83b1,	// (0x000187bf) popup_note2_image_window_g2_ParamLimits

0x83b1,	// (0x000187bf) popup_note2_image_window_g2

0x0001,

0xfc49,	// (0x00020057) popup_note2_image_window_g_ParamLimits

0xfc49,	// (0x00020057) popup_note2_image_window_g

0x83c3,	// (0x000187d1) popup_note2_image_window_t1_ParamLimits

0x83c3,	// (0x000187d1) popup_note2_image_window_t1

0x83db,	// (0x000187e9) popup_note2_image_window_t2_ParamLimits

0x83db,	// (0x000187e9) popup_note2_image_window_t2

0x83f3,	// (0x00018801) popup_note2_image_window_t3_ParamLimits

0x83f3,	// (0x00018801) popup_note2_image_window_t3

0x0002,

0xfc4e,	// (0x0002005c) popup_note2_image_window_t_ParamLimits

0xfc4e,	// (0x0002005c) popup_note2_image_window_t

0x5020,	// (0x0001542e) popup_note2_wait_window_g1_ParamLimits

0x5020,	// (0x0001542e) popup_note2_wait_window_g1

0x840f,	// (0x0001881d) popup_note2_wait_window_g2_ParamLimits

0x840f,	// (0x0001881d) popup_note2_wait_window_g2

0x5038,	// (0x00015446) popup_note2_wait_window_g3_ParamLimits

0x5038,	// (0x00015446) popup_note2_wait_window_g3

0x0002,

0xfc55,	// (0x00020063) popup_note2_wait_window_g_ParamLimits

0xfc55,	// (0x00020063) popup_note2_wait_window_g

0x841b,	// (0x00018829) popup_note2_wait_window_t1_ParamLimits

0x841b,	// (0x00018829) popup_note2_wait_window_t1

0x8439,	// (0x00018847) popup_note2_wait_window_t2_ParamLimits

0x8439,	// (0x00018847) popup_note2_wait_window_t2

0x8457,	// (0x00018865) popup_note2_wait_window_t3_ParamLimits

0x8457,	// (0x00018865) popup_note2_wait_window_t3

0x8469,	// (0x00018877) popup_note2_wait_window_t4_ParamLimits

0x8469,	// (0x00018877) popup_note2_wait_window_t4

0x0003,

0xfc5c,	// (0x0002006a) popup_note2_wait_window_t_ParamLimits

0xfc5c,	// (0x0002006a) popup_note2_wait_window_t

0x847b,	// (0x00018889) wait_bar2_pane_ParamLimits

0x847b,	// (0x00018889) wait_bar2_pane

0x8493,	// (0x000188a1) popup_snote2_single_text_window_g1_ParamLimits

0x8493,	// (0x000188a1) popup_snote2_single_text_window_g1

0x84bb,	// (0x000188c9) popup_snote2_single_text_window_t1_ParamLimits

0x84bb,	// (0x000188c9) popup_snote2_single_text_window_t1

0x8507,	// (0x00018915) popup_snote2_single_text_window_t2_ParamLimits

0x8507,	// (0x00018915) popup_snote2_single_text_window_t2

0x8553,	// (0x00018961) popup_snote2_single_text_window_t3_ParamLimits

0x8553,	// (0x00018961) popup_snote2_single_text_window_t3

0x8594,	// (0x000189a2) popup_snote2_single_text_window_t4_ParamLimits

0x8594,	// (0x000189a2) popup_snote2_single_text_window_t4

0x85ca,	// (0x000189d8) popup_snote2_single_text_window_t5_ParamLimits

0x85ca,	// (0x000189d8) popup_snote2_single_text_window_t5

0x0004,

0xfc65,	// (0x00020073) popup_snote2_single_text_window_t_ParamLimits

0xfc65,	// (0x00020073) popup_snote2_single_text_window_t

0x85f5,	// (0x00018a03) popup_snote2_single_graphic_window_g1_ParamLimits

0x85f5,	// (0x00018a03) popup_snote2_single_graphic_window_g1

0x861d,	// (0x00018a2b) popup_snote2_single_graphic_window_g2_ParamLimits

0x861d,	// (0x00018a2b) popup_snote2_single_graphic_window_g2

0x0001,

0xfc70,	// (0x0002007e) popup_snote2_single_graphic_window_g_ParamLimits

0xfc70,	// (0x0002007e) popup_snote2_single_graphic_window_g

0x8645,	// (0x00018a53) popup_snote2_single_graphic_window_t1_ParamLimits

0x8645,	// (0x00018a53) popup_snote2_single_graphic_window_t1

0x8691,	// (0x00018a9f) popup_snote2_single_graphic_window_t2_ParamLimits

0x8691,	// (0x00018a9f) popup_snote2_single_graphic_window_t2

0x8553,	// (0x00018961) popup_snote2_single_graphic_window_t3_ParamLimits

0x8553,	// (0x00018961) popup_snote2_single_graphic_window_t3

0x8594,	// (0x000189a2) popup_snote2_single_graphic_window_t4_ParamLimits

0x8594,	// (0x000189a2) popup_snote2_single_graphic_window_t4

0x85ca,	// (0x000189d8) popup_snote2_single_graphic_window_t5_ParamLimits

0x85ca,	// (0x000189d8) popup_snote2_single_graphic_window_t5

0x0004,

0xfc75,	// (0x00020083) popup_snote2_single_graphic_window_t_ParamLimits

0xfc75,	// (0x00020083) popup_snote2_single_graphic_window_t

0x6e63,	// (0x00017271) clock_nsta_pane_cp2_t1

0x6e63,	// (0x00017271) clock_nsta_pane_cp2_t2

0x0001,

0xfa89,	// (0x0001fe97) clock_nsta_pane_cp2_t

0x3176,	// (0x00013584) form_field_data_wide_pane_g1_ParamLimits

0x3182,	// (0x00013590) form_field_data_wide_pane_g2_ParamLimits

0x3182,	// (0x00013590) form_field_data_wide_pane_g2

0x318e,	// (0x0001359c) form_field_data_wide_pane_g3_ParamLimits

0x318e,	// (0x0001359c) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x0001fa5f) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x0001fa5f) form_field_data_wide_pane_g

0xdcb6,	// (0x0001e0c4) grid_touch_3_pane_ParamLimits

0xdcb6,	// (0x0001e0c4) grid_touch_3_pane

0xe168,	// (0x0001e576) cell_touch_3_pane_ParamLimits

0xe168,	// (0x0001e576) cell_touch_3_pane

0x7400,	// (0x0001780e) cell_touch_3_pane_g1

0x7400,	// (0x0001780e) cell_touch_3_pane_g2

0x0001,

0xfb0e,	// (0x0001ff1c) cell_touch_3_pane_g

0x26dd,	// (0x00012aeb) cont_query_data_pane

0x26e5,	// (0x00012af3) cont_query_data_pane_cp1

0x870b,	// (0x00018b19) button_value_adjust_pane_cp7

0x8713,	// (0x00018b21) query_popup_pane_cp3

0x3a7d,	// (0x00013e8b) bg_popup_sub_pane_cp22_ParamLimits

0x02d1,	// (0x000106df) navi_navi_volume_pane_cp2

0x02ec,	// (0x000106fa) popup_side_volume_key_window_g2

0x02fb,	// (0x00010709) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x0001faf5) popup_side_volume_key_window_g

0x0318,	// (0x00010726) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x0001fafc) popup_side_volume_key_window_t

0x3dc6,	// (0x000141d4) popup_side_volume_key_window_ParamLimits

0xcc13,	// (0x0001d021) list_double_graphic_pane_g4_ParamLimits

0xcc13,	// (0x0001d021) list_double_graphic_pane_g4

0xdb0b,	// (0x0001df19) list_single_2heading_msg_pane_ParamLimits

0xdb0b,	// (0x0001df19) list_single_2heading_msg_pane

0xe1b0,	// (0x0001e5be) list_single_2heading_msg_pane_g1_ParamLimits

0xe1b0,	// (0x0001e5be) list_single_2heading_msg_pane_g1

0xe1bc,	// (0x0001e5ca) list_single_2heading_msg_pane_g2_ParamLimits

0xe1bc,	// (0x0001e5ca) list_single_2heading_msg_pane_g2

0xe1cf,	// (0x0001e5dd) list_single_2heading_msg_pane_g3_ParamLimits

0xe1cf,	// (0x0001e5dd) list_single_2heading_msg_pane_g3

0x875a,	// (0x00018b68) list_single_2heading_msg_pane_g4_ParamLimits

0x875a,	// (0x00018b68) list_single_2heading_msg_pane_g4

0x0003,

0xfc80,	// (0x0002008e) list_single_2heading_msg_pane_g_ParamLimits

0xfc80,	// (0x0002008e) list_single_2heading_msg_pane_g

0x8772,	// (0x00018b80) list_single_2heading_msg_pane_t1_ParamLimits

0x8772,	// (0x00018b80) list_single_2heading_msg_pane_t1

0xe1db,	// (0x0001e5e9) list_single_2heading_msg_pane_t2_ParamLimits

0xe1db,	// (0x0001e5e9) list_single_2heading_msg_pane_t2

0xe246,	// (0x0001e654) list_single_2heading_msg_pane_t3_ParamLimits

0xe246,	// (0x0001e654) list_single_2heading_msg_pane_t3

0x8802,	// (0x00018c10) list_single_2heading_msg_pane_t4_ParamLimits

0x8802,	// (0x00018c10) list_single_2heading_msg_pane_t4

0x0003,

0xfc89,	// (0x00020097) list_single_2heading_msg_pane_t_ParamLimits

0xfc89,	// (0x00020097) list_single_2heading_msg_pane_t

0x22b2,	// (0x000126c0) title_pane_g4_ParamLimits

0x22b2,	// (0x000126c0) title_pane_g4

0x00e0,	// (0x000104ee) title_pane_stacon_g3_ParamLimits

0x00e0,	// (0x000104ee) title_pane_stacon_g3

0x820d,	// (0x0001861b) list_single_2graphic_im_pane_g4_ParamLimits

0x820d,	// (0x0001861b) list_single_2graphic_im_pane_g4

0x5a71,	// (0x00015e7f) popup_side_volume_key_window_cp

0x6386,	// (0x00016794) main_idle_act2_pane_t1

0x0cf7,	// (0x00011105) toolbar_button_pane_g10

0xcb6c,	// (0x0001cf7a) popup_toolbar_window_cp1

0x6e54,	// (0x00017262) clock_nsta_pane_cp_t1

0x6e54,	// (0x00017262) clock_nsta_pane_cp_t2

0x0001,

0xfa84,	// (0x0001fe92) clock_nsta_pane_cp_t

0x02d1,	// (0x000106df) navi_navi_volume_pane_cp2_ParamLimits

0x02e0,	// (0x000106ee) popup_side_volume_key_window_g1_ParamLimits

0x02ec,	// (0x000106fa) popup_side_volume_key_window_g2_ParamLimits

0x02fb,	// (0x00010709) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x0001faf5) popup_side_volume_key_window_g_ParamLimits

0x115f,	// (0x0001156d) fep_hwr_aid_pane

0x1206,	// (0x00011614) bg_fep_hwr_top_pane_g4_ParamLimits

0x745c,	// (0x0001786a) fep_hwr_top_pane_g1_ParamLimits

0x746e,	// (0x0001787c) fep_hwr_top_pane_g2_ParamLimits

0x1226,	// (0x00011634) fep_hwr_top_pane_g3_ParamLimits

0xfad9,	// (0x0001fee7) fep_hwr_top_pane_g_ParamLimits

0x123b,	// (0x00011649) fep_hwr_top_text_pane_ParamLimits

0x5834,	// (0x00015c42) aid_touch_tab_arrow_arrow_2

0x583d,	// (0x00015c4b) aid_touch_tab_arrow_left_2

0x1173,	// (0x00011581) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x11aa,	// (0x000115b8) fep_hwr_prediction_pane

0x75ce,	// (0x000179dc) fep_vkb_prediction_pane

0xdfac,	// (0x0001e3ba) fep_vkb_side_pane_g3_ParamLimits

0xdfac,	// (0x0001e3ba) fep_vkb_side_pane_g3

0x13b6,	// (0x000117c4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1422,	// (0x00011830) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x142f,	// (0x0001183d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb88,	// (0x0001ff96) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x155e,	// (0x0001196c) fep_hwr_prediction_pane_g1

0x1568,	// (0x00011976) fep_hwr_prediction_pane_g2

0x1570,	// (0x0001197e) fep_hwr_prediction_pane_g3

0x1578,	// (0x00011986) fep_hwr_prediction_pane_g4

0x0003,

0xfc92,	// (0x000200a0) fep_hwr_prediction_pane_g

0x8827,	// (0x00018c35) fep_vkb_prediction_pane_g1

0x8831,	// (0x00018c3f) fep_vkb_prediction_pane_g2

0x8839,	// (0x00018c47) fep_vkb_prediction_pane_g3

0x8841,	// (0x00018c4f) fep_vkb_prediction_pane_g4

0x0003,

0xfc9b,	// (0x000200a9) fep_vkb_prediction_pane_g

0x0fdf,	// (0x000113ed) slider_set_pane_g3

0x0ff3,	// (0x00011401) slider_set_pane_g4

0x100b,	// (0x00011419) slider_set_pane_g5

0x0fdf,	// (0x000113ed) slider_set_pane_g6

0x1021,	// (0x0001142f) slider_set_pane_g7

0x5ee3,	// (0x000162f1) slider_form_pane_g3

0x5eec,	// (0x000162fa) slider_form_pane_g4

0x5ef4,	// (0x00016302) slider_form_pane_g5

0x5ee3,	// (0x000162f1) slider_form_pane_g6

0xda99,	// (0x0001dea7) slider_form_pane_g7

0x6683,	// (0x00016a91) slider_set_pane_vc_g3

0x668c,	// (0x00016a9a) slider_set_pane_vc_g4

0x6695,	// (0x00016aa3) slider_set_pane_vc_g5

0x6683,	// (0x00016a91) slider_set_pane_vc_g6

0x669e,	// (0x00016aac) slider_set_pane_vc_g7

0x6b12,	// (0x00016f20) slider_form_pane_vc_g1

0x6b1b,	// (0x00016f29) slider_form_pane_vc_g2

0x6b24,	// (0x00016f32) slider_form_pane_vc_g3

0x6b12,	// (0x00016f20) slider_form_pane_vc_g4

0x6b2d,	// (0x00016f3b) slider_form_pane_vc_g5

0x0004,

0xfa56,	// (0x0001fe64) slider_form_pane_vc_g

0xf416,	// (0x0001f824) main_idle_act3_pane

0x8849,	// (0x00018c57) ai3_links_pane

0xe2b4,	// (0x0001e6c2) popup_ai3_data_window_ParamLimits

0xe2b4,	// (0x0001e6c2) popup_ai3_data_window

0xeb9e,	// (0x0001efac) grid_ai3_links_pane

0xe2ce,	// (0x0001e6dc) cell_ai3_links_pane_ParamLimits

0xe2ce,	// (0x0001e6dc) cell_ai3_links_pane

0x8884,	// (0x00018c92) bg_popup_sub_pane_cp11

0x8891,	// (0x00018c9f) cell_ai3_links_pane_g1

0xeb9e,	// (0x0001efac) bg_popup_sub_pane_cp12

0x88b6,	// (0x00018cc4) heading_ai3_data_pane

0x88be,	// (0x00018ccc) list_ai3_gene_pane

0x88ca,	// (0x00018cd8) popup_ai3_data_window_g1

0x88d2,	// (0x00018ce0) heading_ai3_data_pane_g1

0x88da,	// (0x00018ce8) heading_ai3_data_pane_t1

0x88e8,	// (0x00018cf6) list_double_ai3_gene_pane_ParamLimits

0x88e8,	// (0x00018cf6) list_double_ai3_gene_pane

0x88f5,	// (0x00018d03) list_single_ai3_gene_pane_ParamLimits

0x88f5,	// (0x00018d03) list_single_ai3_gene_pane

0x73c5,	// (0x000177d3) list_highlight_pane_cp7_ParamLimits

0x73c5,	// (0x000177d3) list_highlight_pane_cp7

0x8902,	// (0x00018d10) list_single_a13_gene_pane_t1_ParamLimits

0x8902,	// (0x00018d10) list_single_a13_gene_pane_t1

0x8919,	// (0x00018d27) list_single_ai3_gene_pane_g1

0x8922,	// (0x00018d30) list_single_ai3_gene_pane_g2

0x0001,

0xfca4,	// (0x000200b2) list_single_ai3_gene_pane_g

0x892a,	// (0x00018d38) list_double_ai3_gene_pane_g1_ParamLimits

0x892a,	// (0x00018d38) list_double_ai3_gene_pane_g1

0x8936,	// (0x00018d44) list_double_ai3_gene_pane_t1_ParamLimits

0x8936,	// (0x00018d44) list_double_ai3_gene_pane_t1

0x8952,	// (0x00018d60) list_double_ai3_gene_pane_t2_ParamLimits

0x8952,	// (0x00018d60) list_double_ai3_gene_pane_t2

0x8968,	// (0x00018d76) list_double_ai3_gene_pane_t3_ParamLimits

0x8968,	// (0x00018d76) list_double_ai3_gene_pane_t3

0x0002,

0xfca9,	// (0x000200b7) list_double_ai3_gene_pane_t_ParamLimits

0xfca9,	// (0x000200b7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8724,	// (0x00018b32) aid_size_min_col_2

0xe19a,	// (0x0001e5a8) aid_size_min_msg_ParamLimits

0xe19a,	// (0x0001e5a8) aid_size_min_msg

0xdfc0,	// (0x0001e3ce) fep_vkb_top_text_pane_g2_ParamLimits

0xdfc0,	// (0x0001e3ce) fep_vkb_top_text_pane_g2

0x0001,

0xfb09,	// (0x0001ff17) fep_vkb_top_text_pane_g_ParamLimits

0xfb09,	// (0x0001ff17) fep_vkb_top_text_pane_g

0xf416,	// (0x0001f824) main_hc_apps_shell_pane

0x8985,	// (0x00018d93) grid_hc_apps_pane_ParamLimits

0x8985,	// (0x00018d93) grid_hc_apps_pane

0x8997,	// (0x00018da5) list_hc_apps_pane

0x899f,	// (0x00018dad) scroll_pane_cp37_ParamLimits

0x899f,	// (0x00018dad) scroll_pane_cp37

0xe2e8,	// (0x0001e6f6) cell_hc_apps_pane_ParamLimits

0xe2e8,	// (0x0001e6f6) cell_hc_apps_pane

0xe3a6,	// (0x0001e7b4) cell_hc_apps_pane_g1_ParamLimits

0xe3a6,	// (0x0001e7b4) cell_hc_apps_pane_g1

0x8a89,	// (0x00018e97) cell_hc_apps_pane_g2_ParamLimits

0x8a89,	// (0x00018e97) cell_hc_apps_pane_g2

0x8aa5,	// (0x00018eb3) cell_hc_apps_pane_g3_ParamLimits

0x8aa5,	// (0x00018eb3) cell_hc_apps_pane_g3

0x0002,

0xfcb0,	// (0x000200be) cell_hc_apps_pane_g_ParamLimits

0xfcb0,	// (0x000200be) cell_hc_apps_pane_g

0xe3d2,	// (0x0001e7e0) cell_hc_apps_pane_t1_ParamLimits

0xe3d2,	// (0x0001e7e0) cell_hc_apps_pane_t1

0x2601,	// (0x00012a0f) grid_highlight_pane_cp10_ParamLimits

0x2601,	// (0x00012a0f) grid_highlight_pane_cp10

0xe410,	// (0x0001e81e) list_single_hc_apps_pane_ParamLimits

0xe410,	// (0x0001e81e) list_single_hc_apps_pane

0xe43d,	// (0x0001e84b) list_single_hc_apps_pane_g1

0xe456,	// (0x0001e864) list_single_hc_apps_pane_g2

0x0001,

0xfcb7,	// (0x000200c5) list_single_hc_apps_pane_g

0xe46f,	// (0x0001e87d) list_single_hc_apps_pane_g2_copy1

0x8bb1,	// (0x00018fbf) list_single_hc_apps_pane_t1

0x235e,	// (0x0001276c) bg_set_opt_pane_cp_ParamLimits

0x0008,	// (0x00010416) setting_slider_pane_t1_ParamLimits

0x0021,	// (0x0001042f) setting_slider_pane_t2_ParamLimits

0x003b,	// (0x00010449) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001f947) setting_slider_pane_t_ParamLimits

0x0053,	// (0x00010461) slider_set_pane_ParamLimits

0x057a,	// (0x00010988) control_pane_g5_ParamLimits

0x057a,	// (0x00010988) control_pane_g5

0x5d32,	// (0x00016140) slider_set_pane_g1_ParamLimits

0x0fd3,	// (0x000113e1) slider_set_pane_g2_ParamLimits

0x0fdf,	// (0x000113ed) slider_set_pane_g3_ParamLimits

0x0ff3,	// (0x00011401) slider_set_pane_g4_ParamLimits

0x100b,	// (0x00011419) slider_set_pane_g5_ParamLimits

0x0fdf,	// (0x000113ed) slider_set_pane_g6_ParamLimits

0x1021,	// (0x0001142f) slider_set_pane_g7_ParamLimits

0xf935,	// (0x0001fd43) slider_set_pane_g_ParamLimits

0x3ea7,	// (0x000142b5) navi_icon_text_pane_ParamLimits

0xd32a,	// (0x0001d738) aid_fill_nsta_2_ParamLimits

0xd361,	// (0x0001d76f) aid_touch_tab_arrow_left_ParamLimits

0xd377,	// (0x0001d785) aid_touch_tab_arrow_right_ParamLimits

0xd412,	// (0x0001d820) clock_nsta_pane_ParamLimits

0x5816,	// (0x00015c24) navi_icon_pane_g1_ParamLimits

0x5822,	// (0x00015c30) navi_text_pane_t1_ParamLimits

0x6f60,	// (0x0001736e) navi_icon_text_pane_g1_ParamLimits

0x6f6c,	// (0x0001737a) navi_icon_text_pane_t1_ParamLimits

0xe43d,	// (0x0001e84b) list_single_hc_apps_pane_g1_ParamLimits

0xe456,	// (0x0001e864) list_single_hc_apps_pane_g2_ParamLimits

0xfcb7,	// (0x000200c5) list_single_hc_apps_pane_g_ParamLimits

0xe46f,	// (0x0001e87d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8bb1,	// (0x00018fbf) list_single_hc_apps_pane_t1_ParamLimits

0xb770,	// (0x0001bb7e) popup_toolbar2_fixed_window_ParamLimits

0xb770,	// (0x0001bb7e) popup_toolbar2_fixed_window

0xbff6,	// (0x0001c404) popup_toolbar2_float_window

0xeb9e,	// (0x0001efac) bg_popup_sub_pane_cp27

0x8bdf,	// (0x00018fed) grid_toolbar2_float_pane

0xeb9e,	// (0x0001efac) bg_popup_sub_pane_cp26

0x8bdf,	// (0x00018fed) grid_toolbar2_fixed_pane

0xe48b,	// (0x0001e899) cell_toolbar2_fixed_pane_ParamLimits

0xe48b,	// (0x0001e899) cell_toolbar2_fixed_pane

0xe4a5,	// (0x0001e8b3) cell_toolbar2_fixed_pane_g1

0x8c00,	// (0x0001900e) toolbar2_fixed_button_pane

0x4898,	// (0x00014ca6) toolbar2_fixed_button_pane_g1

0x48a8,	// (0x00014cb6) toolbar2_fixed_button_pane_g2

0x48a0,	// (0x00014cae) toolbar2_fixed_button_pane_g3

0x48b8,	// (0x00014cc6) toolbar2_fixed_button_pane_g4

0x48b0,	// (0x00014cbe) toolbar2_fixed_button_pane_g5

0x48c0,	// (0x00014cce) toolbar2_fixed_button_pane_g6

0x48c8,	// (0x00014cd6) toolbar2_fixed_button_pane_g7

0x48d8,	// (0x00014ce6) toolbar2_fixed_button_pane_g8

0x48d0,	// (0x00014cde) toolbar2_fixed_button_pane_g9

0x0008,

0xf837,	// (0x0001fc45) toolbar2_fixed_button_pane_g

0x8c08,	// (0x00019016) cell_toolbar2_float_pane_ParamLimits

0x8c08,	// (0x00019016) cell_toolbar2_float_pane

0x8c19,	// (0x00019027) cell_toolbar2_float_pane_g1

0x8c00,	// (0x0001900e) toolbar2_fixed_button_pane_cp

0xde9a,	// (0x0001e2a8) fep_vkb_accented_list_pane_ParamLimits

0xde9a,	// (0x0001e2a8) fep_vkb_accented_list_pane

0x1396,	// (0x000117a4) bg_popup_fep_shadow_pane_g9

0x4024,	// (0x00014432) bg_popup_fep_shadow_pane_cp3

0x3446,	// (0x00013854) list_accented_list_pane

0x8c22,	// (0x00019030) list_single_accented_list_pane_ParamLimits

0x8c22,	// (0x00019030) list_single_accented_list_pane

0x4024,	// (0x00014432) list_highlight_pane_cp10

0x8c33,	// (0x00019041) list_single_accented_list_pane_t1

0xbf20,	// (0x0001c32e) popup_slider_window_ParamLimits

0xbf20,	// (0x0001c32e) popup_slider_window

0x871b,	// (0x00018b29) aid_indentation_list_msg

0xe59c,	// (0x0001e9aa) bg_popup_window_pane_cp19

0x8d5f,	// (0x0001916d) popup_slider_window_g1

0x8d7b,	// (0x00019189) popup_slider_window_g2

0x8d97,	// (0x000191a5) popup_slider_window_g3

0x0005,

0xfcbc,	// (0x000200ca) popup_slider_window_g

0x8dfd,	// (0x0001920b) popup_slider_window_t1

0x8e71,	// (0x0001927f) small_volume_slider_vertical_pane

0x7400,	// (0x0001780e) small_volume_slider_vertical_pane_g1

0x7400,	// (0x0001780e) small_volume_slider_vertical_pane_g2

0x8e8d,	// (0x0001929b) small_volume_slider_vertical_pane_g3

0x0002,

0xfcce,	// (0x000200dc) small_volume_slider_vertical_pane_g

0xb6de,	// (0x0001baec) area_side_right_pane_ParamLimits

0xb6de,	// (0x0001baec) area_side_right_pane

0xc197,	// (0x0001c5a5) aid_size_side_button_ParamLimits

0xc197,	// (0x0001c5a5) aid_size_side_button

0xc1b0,	// (0x0001c5be) grid_sctrl_middle_pane_ParamLimits

0xc1b0,	// (0x0001c5be) grid_sctrl_middle_pane

0x15b3,	// (0x000119c1) sctrl_sk_bottom_pane

0x15c4,	// (0x000119d2) sctrl_sk_top_pane

0x15d6,	// (0x000119e4) aid_touch_sctrl_top

0x15e3,	// (0x000119f1) bg_sctrl_sk_pane_ParamLimits

0x15e3,	// (0x000119f1) bg_sctrl_sk_pane

0x15f1,	// (0x000119ff) sctrl_sk_top_pane_g1

0x15fe,	// (0x00011a0c) sctrl_sk_top_pane_t1

0x15d6,	// (0x000119e4) aid_touch_sctrl_bottom

0x15e3,	// (0x000119f1) bg_sctrl_sk_pane_cp_ParamLimits

0x15e3,	// (0x000119f1) bg_sctrl_sk_pane_cp

0x1619,	// (0x00011a27) sctrl_sk_bottom_pane_g1

0x15fe,	// (0x00011a0c) sctrl_sk_bottom_pane_t1

0xc1ca,	// (0x0001c5d8) cell_sctrl_middle_pane_ParamLimits

0xc1ca,	// (0x0001c5d8) cell_sctrl_middle_pane

0xc1db,	// (0x0001c5e9) aid_touch_sctrl_middle_ParamLimits

0xc1db,	// (0x0001c5e9) aid_touch_sctrl_middle

0xc1e8,	// (0x0001c5f6) bg_sctrl_middle_pane_ParamLimits

0xc1e8,	// (0x0001c5f6) bg_sctrl_middle_pane

0x1c89,	// (0x00012097) cell_sctrl_middle_pane_g1_ParamLimits

0x1c89,	// (0x00012097) cell_sctrl_middle_pane_g1

0xc1f6,	// (0x0001c604) cell_sctrl_middle_pane_g2_ParamLimits

0xc1f6,	// (0x0001c604) cell_sctrl_middle_pane_g2

0x0001,

0xfcda,	// (0x000200e8) cell_sctrl_middle_pane_g_ParamLimits

0xfcda,	// (0x000200e8) cell_sctrl_middle_pane_g

0x4898,	// (0x00014ca6) bg_sctrl_middle_pane_g1

0x48a0,	// (0x00014cae) bg_sctrl_middle_pane_g2

0x48a8,	// (0x00014cb6) bg_sctrl_middle_pane_g3

0x48b0,	// (0x00014cbe) bg_sctrl_middle_pane_g4

0x48b8,	// (0x00014cc6) bg_sctrl_middle_pane_g5

0x48c0,	// (0x00014cce) bg_sctrl_middle_pane_g6

0x48c8,	// (0x00014cd6) bg_sctrl_middle_pane_g7

0x48d0,	// (0x00014cde) bg_sctrl_middle_pane_g8

0x0007,

0xfcdf,	// (0x000200ed) bg_sctrl_middle_pane_g

0x48d8,	// (0x00014ce6) bg_sctrl_middle_pane_g8_copy1

0x4898,	// (0x00014ca6) bg_sctrl_sk_pane_g1

0x48a8,	// (0x00014cb6) bg_sctrl_sk_pane_g2

0x48a0,	// (0x00014cae) bg_sctrl_sk_pane_g3

0x0008,

0xf837,	// (0x0001fc45) bg_sctrl_sk_pane_g

0x2b34,	// (0x00012f42) aid_size_touch_scroll_bar

0x48b8,	// (0x00014cc6) bg_sctrl_sk_pane_g4

0x48b0,	// (0x00014cbe) bg_sctrl_sk_pane_g5

0x48c0,	// (0x00014cce) bg_sctrl_sk_pane_g6

0x48c8,	// (0x00014cd6) bg_sctrl_sk_pane_g7

0x48d8,	// (0x00014ce6) bg_sctrl_sk_pane_g8

0x48d0,	// (0x00014cde) bg_sctrl_sk_pane_g9

0x0746,	// (0x00010b54) popup_fep_china_hwr2_fs_candidate_window

0xba34,	// (0x0001be42) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xba34,	// (0x0001be42) popup_fep_china_hwr2_fs_control_window

0x13b6,	// (0x000117c4) sctrl_sk_top_pane_g2

0x0001,

0xfcd5,	// (0x000200e3) sctrl_sk_top_pane_g

0xe654,	// (0x0001ea62) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe654,	// (0x0001ea62) aid_fep_china_hwr2_fs_cell

0xe668,	// (0x0001ea76) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe668,	// (0x0001ea76) bg_popup_fep_shadow_pane_cp4

0xe67f,	// (0x0001ea8d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe67f,	// (0x0001ea8d) bg_popup_fep_shadow_pane_cp5

0xe691,	// (0x0001ea9f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe691,	// (0x0001ea9f) popup_fep_china_hwr2_fs_control_bar_grid

0xe6a5,	// (0x0001eab3) popup_fep_china_hwr2_fs_control_funtion_grid

0x8ee9,	// (0x000192f7) aid_fep_china_hwr2_fs_candi_cell

0xeb9e,	// (0x0001efac) bg_popup_fep_shadow_pane_cp6

0x8ef3,	// (0x00019301) popup_fep_china_hwr2_fs_candidate_grid

0xe6ad,	// (0x0001eabb) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe6ad,	// (0x0001eabb) cell_fep_china_hwr2_fs_funtion_grid

0x7400,	// (0x0001780e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8f15,	// (0x00019323) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8f15,	// (0x00019323) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8f23,	// (0x00019331) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8f23,	// (0x00019331) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf0,	// (0x000200fe) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf0,	// (0x000200fe) cell_fep_china_hwr2_fs_funtion_grid_g

0xe6c5,	// (0x0001ead3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe6c5,	// (0x0001ead3) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe6da,	// (0x0001eae8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe6da,	// (0x0001eae8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf5,	// (0x00020103) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf5,	// (0x00020103) cell_fep_china_hwr2_fs_funtion_grid_t

0x8f6a,	// (0x00019378) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8f72,	// (0x00019380) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8f7a,	// (0x00019388) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfa,	// (0x00020108) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8f82,	// (0x00019390) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8f82,	// (0x00019390) cell_fep_china_hwr2_fs_candidate_grid

0x8f9b,	// (0x000193a9) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8fa3,	// (0x000193b1) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7400,	// (0x0001780e) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7400,	// (0x0001780e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0e,	// (0x0001ff1c) cell_fep_china_hwr2_fs_candidate_grid_g

0x8fab,	// (0x000193b9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4478,	// (0x00014886) clock_nsta_pane_cp_24_ParamLimits

0x4478,	// (0x00014886) clock_nsta_pane_cp_24

0x44f6,	// (0x00014904) indicator_nsta_pane_cp_24_ParamLimits

0x44f6,	// (0x00014904) indicator_nsta_pane_cp_24

0x5692,	// (0x00015aa0) heading_pane_g1

0x0001,

0xf89c,	// (0x0001fcaa) heading_pane_g

0x61cf,	// (0x000165dd) grid_sct_catagory_button_pane

0x61ff,	// (0x0001660d) scroll_pane_cp5_ParamLimits

0x6fae,	// (0x000173bc) button_value_adjust_pane_cp5_ParamLimits

0x6fae,	// (0x000173bc) button_value_adjust_pane_cp5

0x70aa,	// (0x000174b8) form2_midp_time_pane_ParamLimits

0x8fb9,	// (0x000193c7) cell_sct_catagory_button_pane_ParamLimits

0x8fb9,	// (0x000193c7) cell_sct_catagory_button_pane

0x73c5,	// (0x000177d3) bg_button_pane_cp01_ParamLimits

0x73c5,	// (0x000177d3) bg_button_pane_cp01

0x7400,	// (0x0001780e) cell_sct_catagory_button_pane_g1

0xbf99,	// (0x0001c3a7) popup_tb_extension_window

0xe6f6,	// (0x0001eb04) aid_size_cell_ext_ParamLimits

0xe6f6,	// (0x0001eb04) aid_size_cell_ext

0x2976,	// (0x00012d84) bg_tb_trans_pane_cp1_ParamLimits

0x2976,	// (0x00012d84) bg_tb_trans_pane_cp1

0xe71c,	// (0x0001eb2a) grid_tb_ext_pane_ParamLimits

0xe71c,	// (0x0001eb2a) grid_tb_ext_pane

0xe757,	// (0x0001eb65) cell_tb_ext_pane_ParamLimits

0xe757,	// (0x0001eb65) cell_tb_ext_pane

0xe77f,	// (0x0001eb8d) cell_tb_ext_pane_g1_ParamLimits

0xe77f,	// (0x0001eb8d) cell_tb_ext_pane_g1

0x904d,	// (0x0001945b) cell_tb_ext_pane_t1

0x2601,	// (0x00012a0f) list_highlight_pane_cp11_ParamLimits

0x2601,	// (0x00012a0f) list_highlight_pane_cp11

0xb785,	// (0x0001bb93) popup_uni_indicator_window_ParamLimits

0xb785,	// (0x0001bb93) popup_uni_indicator_window

0x315c,	// (0x0001356a) bg_popup_sub_pane_cp14

0x9068,	// (0x00019476) list_uniindi_pane

0x9074,	// (0x00019482) uniindi_top_pane

0x2601,	// (0x00012a0f) bg_uniindi_top_pane

0x9093,	// (0x000194a1) uniindi_top_pane_g1

0x90a9,	// (0x000194b7) uniindi_top_pane_g2

0x0003,

0xfd01,	// (0x0002010f) uniindi_top_pane_g

0x90d3,	// (0x000194e1) uniindi_top_pane_t1

0x90fd,	// (0x0001950b) list_single_uniindi_pane_ParamLimits

0x90fd,	// (0x0001950b) list_single_uniindi_pane

0x7400,	// (0x0001780e) bg_uniindi_top_pane_g1

0x9110,	// (0x0001951e) list_single_uniindi_pane_g1

0x9123,	// (0x00019531) list_single_uniindi_pane_t1

0xf416,	// (0x0001f824) control_bg_pane

0x9148,	// (0x00019556) bg_sctrl_sk_pane_cp1

0x9151,	// (0x0001955f) bg_sctrl_sk_pane_cp2

0x915a,	// (0x00019568) control_bg_pane_g1

0x9163,	// (0x00019571) control_bg_pane_g2

0x0001,

0xfd0a,	// (0x00020118) control_bg_pane_g

0x6df8,	// (0x00017206) cell_indicator_nsta_pane_g1_ParamLimits

0xdcf3,	// (0x0001e101) cell_indicator_nsta_pane_g2_ParamLimits

0xfa72,	// (0x0001fe80) cell_indicator_nsta_pane_g_ParamLimits

0x7132,	// (0x00017540) form2_midp_time_pane_t1_ParamLimits

0x1151,	// (0x0001155f) main_idle_act4_pane_ParamLimits

0x1151,	// (0x0001155f) main_idle_act4_pane

0xbf99,	// (0x0001c3a7) popup_tb_extension_window_ParamLimits

0xe73e,	// (0x0001eb4c) tb_ext_find_pane_ParamLimits

0xe73e,	// (0x0001eb4c) tb_ext_find_pane

0x916c,	// (0x0001957a) ai_gene_pane_1_cp1

0x416b,	// (0x00014579) ai_gene_pane_2_cp1

0x9174,	// (0x00019582) list_single_idle_plugin_calendar_pane

0x917d,	// (0x0001958b) list_single_idle_plugin_notification_pane

0x9186,	// (0x00019594) list_single_idle_plugin_player_pane

0xe79c,	// (0x0001ebaa) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe79c,	// (0x0001ebaa) list_single_idle_plugin_shortcut_pane

0xe7c4,	// (0x0001ebd2) main_idle_act4_pane_t1

0xe7da,	// (0x0001ebe8) main_idle_act4_pane_t2

0x0001,

0xfd0f,	// (0x0002011d) main_idle_act4_pane_t

0xe7f0,	// (0x0001ebfe) middle_sk_idle_act4_pane_ParamLimits

0xe7f0,	// (0x0001ebfe) middle_sk_idle_act4_pane

0xe80c,	// (0x0001ec1a) popup_clock_digital_analogue_window_cp2

0xe834,	// (0x0001ec42) shortcut_wheel_idle_act4_pane_ParamLimits

0xe834,	// (0x0001ec42) shortcut_wheel_idle_act4_pane

0x7400,	// (0x0001780e) shortcut_wheel_idle_act4_pane_g1

0x7400,	// (0x0001780e) shortcut_wheel_idle_act4_pane_g2

0x7400,	// (0x0001780e) shortcut_wheel_idle_act4_pane_g3

0x7400,	// (0x0001780e) shortcut_wheel_idle_act4_pane_g4

0x7400,	// (0x0001780e) shortcut_wheel_idle_act4_pane_g5

0x9219,	// (0x00019627) shortcut_wheel_idle_act4_pane_g6

0x9221,	// (0x0001962f) shortcut_wheel_idle_act4_pane_g7

0x9229,	// (0x00019637) shortcut_wheel_idle_act4_pane_g8

0x9252,	// (0x00019660) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd14,	// (0x00020122) shortcut_wheel_idle_act4_pane_g

0xdabe,	// (0x0001decc) middle_sk_idle_act4_pane_g1_ParamLimits

0xdabe,	// (0x0001decc) middle_sk_idle_act4_pane_g1

0xe8b1,	// (0x0001ecbf) middle_sk_idle_act4_pane_g2_ParamLimits

0xe8b1,	// (0x0001ecbf) middle_sk_idle_act4_pane_g2

0x0001,

0xfd37,	// (0x00020145) middle_sk_idle_act4_pane_g_ParamLimits

0xfd37,	// (0x00020145) middle_sk_idle_act4_pane_g

0xe8c9,	// (0x0001ecd7) middle_sk_idle_act4_pane_t1_ParamLimits

0xe8c9,	// (0x0001ecd7) middle_sk_idle_act4_pane_t1

0xe8f8,	// (0x0001ed06) grid_ai_shortcut_pane_ParamLimits

0xe8f8,	// (0x0001ed06) grid_ai_shortcut_pane

0xe915,	// (0x0001ed23) list_highlight_pane_cp16_ParamLimits

0xe915,	// (0x0001ed23) list_highlight_pane_cp16

0xe922,	// (0x0001ed30) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe922,	// (0x0001ed30) list_single_idle_plugin_shortcut_pane_g1

0xe92e,	// (0x0001ed3c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe92e,	// (0x0001ed3c) list_single_idle_plugin_shortcut_pane_g2

0xe94a,	// (0x0001ed58) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe94a,	// (0x0001ed58) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3c,	// (0x0002014a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3c,	// (0x0002014a) list_single_idle_plugin_shortcut_pane_g

0xe95f,	// (0x0001ed6d) cell_ai_shortcut_pane_ParamLimits

0xe95f,	// (0x0001ed6d) cell_ai_shortcut_pane

0xe975,	// (0x0001ed83) cell_ai_shortcut_pane_g1_ParamLimits

0xe975,	// (0x0001ed83) cell_ai_shortcut_pane_g1

0x916c,	// (0x0001957a) ai_gene_pane_1_cp2

0x9382,	// (0x00019790) ai_gene_pane_2_cp2

0x938a,	// (0x00019798) list_highlight_pane_cp15

0x9393,	// (0x000197a1) list_single_idle_plugin_calendar_pane_g1

0x938a,	// (0x00019798) list_highlight_pane_cp17

0x939b,	// (0x000197a9) list_single_idle_plugin_calendar_pane_g1_copy1

0x93a3,	// (0x000197b1) list_single_idle_plugin_player_pane_g1

0x6428,	// (0x00016836) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd43,	// (0x00020151) list_single_idle_plugin_player_pane_g

0x93ab,	// (0x000197b9) list_single_idle_plugin_player_pane_t1

0x93b9,	// (0x000197c7) list_single_idle_plugin_player_pane_t2

0x93c7,	// (0x000197d5) list_single_idle_plugin_player_pane_t3

0x93d5,	// (0x000197e3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd48,	// (0x00020156) list_single_idle_plugin_player_pane_t

0x93e3,	// (0x000197f1) wait_bar_pane_cp15

0x93eb,	// (0x000197f9) grid_ai_notification_pane

0x6428,	// (0x00016836) list_single_idle_plugin_notification_pane_g1

0xe997,	// (0x0001eda5) cell_ai_notification_pane_ParamLimits

0xe997,	// (0x0001eda5) cell_ai_notification_pane

0x9401,	// (0x0001980f) cell_ai_notification_pane_g1

0x9409,	// (0x00019817) cell_ai_notification_pane_t1

0xe9a4,	// (0x0001edb2) tb_ext_find_button_pane

0xe9ac,	// (0x0001edba) tb_ext_find_pane_g1

0xe9b4,	// (0x0001edc2) tb_ext_find_pane_t1

0x3974,	// (0x00013d82) tb_ext_find_button_pane_g1

0x9435,	// (0x00019843) tb_ext_find_button_pane_g2

0x0001,

0xfd51,	// (0x0002015f) tb_ext_find_button_pane_g

0xe7c4,	// (0x0001ebd2) main_idle_act4_pane_t1_ParamLimits

0xe7da,	// (0x0001ebe8) main_idle_act4_pane_t2_ParamLimits

0xfd0f,	// (0x0002011d) main_idle_act4_pane_t_ParamLimits

0xe80c,	// (0x0001ec1a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe824,	// (0x0001ec32) sat_plugin_idle_act4_pane_ParamLimits

0xe824,	// (0x0001ec32) sat_plugin_idle_act4_pane

0xe9c2,	// (0x0001edd0) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe9c2,	// (0x0001edd0) sat_plugin_idle_act4_pane_t1

0xe9da,	// (0x0001ede8) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe9da,	// (0x0001ede8) sat_plugin_idle_act4_pane_t2

0xe9f2,	// (0x0001ee00) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe9f2,	// (0x0001ee00) sat_plugin_idle_act4_pane_t3

0xea0a,	// (0x0001ee18) sat_plugin_idle_act4_pane_t4_ParamLimits

0xea0a,	// (0x0001ee18) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd56,	// (0x00020164) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd56,	// (0x00020164) sat_plugin_idle_act4_pane_t

0xf4db,	// (0x0001f8e9) popup_battery_window_ParamLimits

0xf4db,	// (0x0001f8e9) popup_battery_window

0x2601,	// (0x00012a0f) bg_popup_sub_pane_cp25_ParamLimits

0x2601,	// (0x00012a0f) bg_popup_sub_pane_cp25

0x948a,	// (0x00019898) popup_battery_window_g1_ParamLimits

0x948a,	// (0x00019898) popup_battery_window_g1

0x9496,	// (0x000198a4) popup_battery_window_t1_ParamLimits

0x9496,	// (0x000198a4) popup_battery_window_t1

0x94a8,	// (0x000198b6) popup_battery_window_t2_ParamLimits

0x94a8,	// (0x000198b6) popup_battery_window_t2

0x0001,

0xfd5f,	// (0x0002016d) popup_battery_window_t_ParamLimits

0xfd5f,	// (0x0002016d) popup_battery_window_t

0xd204,	// (0x0001d612) midp_canvas_pane_ParamLimits

0xd261,	// (0x0001d66f) midp_keypad_pane_ParamLimits

0xd261,	// (0x0001d66f) midp_keypad_pane

0x4350,	// (0x0001475e) main_midp_pane_ParamLimits

0x6e72,	// (0x00017280) signal_pane_g2_cp_ParamLimits

0xea22,	// (0x0001ee30) aid_size_cell_midp_keypad_ParamLimits

0xea22,	// (0x0001ee30) aid_size_cell_midp_keypad

0xea40,	// (0x0001ee4e) midp_keyp_game_grid_pane_ParamLimits

0xea40,	// (0x0001ee4e) midp_keyp_game_grid_pane

0xea67,	// (0x0001ee75) midp_keyp_rocker_pane_ParamLimits

0xea67,	// (0x0001ee75) midp_keyp_rocker_pane

0xeab8,	// (0x0001eec6) midp_keyp_sk_left_pane_ParamLimits

0xeab8,	// (0x0001eec6) midp_keyp_sk_left_pane

0xeb0c,	// (0x0001ef1a) midp_keyp_sk_right_pane_ParamLimits

0xeb0c,	// (0x0001ef1a) midp_keyp_sk_right_pane

0xeb9e,	// (0x0001efac) bg_button_pane_cp03

0xeb60,	// (0x0001ef6e) midp_keyp_sk_left_pane_g1

0xeb9e,	// (0x0001efac) bg_button_pane_cp04

0xeb60,	// (0x0001ef6e) midp_keyp_sk_right_pane_g1

0x7400,	// (0x0001780e) midp_keyp_rocker_pane_g1

0xeb69,	// (0x0001ef77) keyp_game_cell_pane_ParamLimits

0xeb69,	// (0x0001ef77) keyp_game_cell_pane

0xeb9e,	// (0x0001efac) bg_button_pane_cp02

0xeb8d,	// (0x0001ef9b) keyp_game_cell_pane_g1

0xb720,	// (0x0001bb2e) popup_fep_vkb2_window_ParamLimits

0xb720,	// (0x0001bb2e) popup_fep_vkb2_window

0xc202,	// (0x0001c610) aid_size_cell_vkb2_ParamLimits

0xc202,	// (0x0001c610) aid_size_cell_vkb2

0xc22e,	// (0x0001c63c) popup_fep_vkb2_window_g1_ParamLimits

0xc22e,	// (0x0001c63c) popup_fep_vkb2_window_g1

0xc27e,	// (0x0001c68c) vkb2_area_bottom_pane_ParamLimits

0xc27e,	// (0x0001c68c) vkb2_area_bottom_pane

0xc2d2,	// (0x0001c6e0) vkb2_area_keypad_pane_ParamLimits

0xc2d2,	// (0x0001c6e0) vkb2_area_keypad_pane

0xc31a,	// (0x0001c728) vkb2_area_top_pane_ParamLimits

0xc31a,	// (0x0001c728) vkb2_area_top_pane

0xc3a6,	// (0x0001c7b4) vkb2_top_entry_pane_ParamLimits

0xc3a6,	// (0x0001c7b4) vkb2_top_entry_pane

0xc3d3,	// (0x0001c7e1) vkb2_top_grid_left_pane_ParamLimits

0xc3d3,	// (0x0001c7e1) vkb2_top_grid_left_pane

0xc3f4,	// (0x0001c802) vkb2_top_grid_right_pane_ParamLimits

0xc3f4,	// (0x0001c802) vkb2_top_grid_right_pane

0x1884,	// (0x00011c92) vkb2_cell_keypad_pane_ParamLimits

0x1884,	// (0x00011c92) vkb2_cell_keypad_pane

0xc43c,	// (0x0001c84a) vkb2_area_bottom_grid_pane_ParamLimits

0xc43c,	// (0x0001c84a) vkb2_area_bottom_grid_pane

0xc466,	// (0x0001c874) vkb2_area_bottom_pane_g1_ParamLimits

0xc466,	// (0x0001c874) vkb2_area_bottom_pane_g1

0xc48c,	// (0x0001c89a) vkb2_area_bottom_pane_g2_ParamLimits

0xc48c,	// (0x0001c89a) vkb2_area_bottom_pane_g2

0xc4bd,	// (0x0001c8cb) vkb2_area_bottom_pane_g3_ParamLimits

0xc4bd,	// (0x0001c8cb) vkb2_area_bottom_pane_g3

0x0002,

0xfd64,	// (0x00020172) vkb2_area_bottom_pane_g_ParamLimits

0xfd64,	// (0x00020172) vkb2_area_bottom_pane_g

0x1a2e,	// (0x00011e3c) vkb2_top_cell_left_pane_ParamLimits

0x1a2e,	// (0x00011e3c) vkb2_top_cell_left_pane

0xebbf,	// (0x0001efcd) vkb2_top_entry_pane_g1_ParamLimits

0xebbf,	// (0x0001efcd) vkb2_top_entry_pane_g1

0xebcd,	// (0x0001efdb) vkb2_top_entry_pane_t1_ParamLimits

0xebcd,	// (0x0001efdb) vkb2_top_entry_pane_t1

0x9659,	// (0x00019a67) vkb2_top_entry_pane_t2_ParamLimits

0x9659,	// (0x00019a67) vkb2_top_entry_pane_t2

0x968b,	// (0x00019a99) vkb2_top_entry_pane_t3_ParamLimits

0x968b,	// (0x00019a99) vkb2_top_entry_pane_t3

0x0002,

0xfd6b,	// (0x00020179) vkb2_top_entry_pane_t_ParamLimits

0xfd6b,	// (0x00020179) vkb2_top_entry_pane_t

0xc527,	// (0x0001c935) vkb2_top_grid_right_pane_g1_ParamLimits

0xc527,	// (0x0001c935) vkb2_top_grid_right_pane_g1

0x1a91,	// (0x00011e9f) vkb2_top_grid_right_pane_g2_ParamLimits

0x1a91,	// (0x00011e9f) vkb2_top_grid_right_pane_g2

0x1aa9,	// (0x00011eb7) vkb2_top_grid_right_pane_g3_ParamLimits

0x1aa9,	// (0x00011eb7) vkb2_top_grid_right_pane_g3

0xc53d,	// (0x0001c94b) vkb2_top_grid_right_pane_g4_ParamLimits

0xc53d,	// (0x0001c94b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd72,	// (0x00020180) vkb2_top_grid_right_pane_g_ParamLimits

0xfd72,	// (0x00020180) vkb2_top_grid_right_pane_g

0x1ad7,	// (0x00011ee5) vkb2_top_cell_left_pane_g1

0x1aee,	// (0x00011efc) vkb2_cell_keypad_pane_g1_ParamLimits

0x1aee,	// (0x00011efc) vkb2_cell_keypad_pane_g1

0x96af,	// (0x00019abd) vkb2_cell_keypad_pane_t1_ParamLimits

0x96af,	// (0x00019abd) vkb2_cell_keypad_pane_t1

0x1afc,	// (0x00011f0a) vkb2_cell_bottom_grid_pane_ParamLimits

0x1afc,	// (0x00011f0a) vkb2_cell_bottom_grid_pane

0x1b35,	// (0x00011f43) vkb2_cell_bottom_grid_pane_g1

0xe855,	// (0x0001ec63) aid_call2_pane_cp02

0xe85d,	// (0x0001ec6b) aid_call_pane_cp02

0xe865,	// (0x0001ec73) clock_digital_number_pane_cp10

0xe86d,	// (0x0001ec7b) clock_digital_number_pane_cp11

0xe875,	// (0x0001ec83) clock_digital_number_pane_cp12

0xe87d,	// (0x0001ec8b) clock_digital_number_pane_cp13

0xe885,	// (0x0001ec93) clock_digital_separator_pane_cp10

0x3974,	// (0x00013d82) popup_clock_digital_analogue_window_cp2_g1

0x3974,	// (0x00013d82) popup_clock_digital_analogue_window_cp2_g2

0xe88d,	// (0x0001ec9b) popup_clock_digital_analogue_window_cp2_g3

0x3974,	// (0x00013d82) popup_clock_digital_analogue_window_cp2_g4

0xe88d,	// (0x0001ec9b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd27,	// (0x00020135) popup_clock_digital_analogue_window_cp2_g

0xe895,	// (0x0001eca3) popup_clock_digital_analogue_window_cp2_t1

0xe8a3,	// (0x0001ecb1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd32,	// (0x00020140) popup_clock_digital_analogue_window_cp2_t

0x7400,	// (0x0001780e) clock_digital_number_pane_cp10_g1

0x7400,	// (0x0001780e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0e,	// (0x0001ff1c) clock_digital_number_pane_cp10_g

0x7400,	// (0x0001780e) clock_digital_separator_pane_cp10_g1

0x7400,	// (0x0001780e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0e,	// (0x0001ff1c) clock_digital_separator_pane_cp10_g

0x90b5,	// (0x000194c3) uniindi_top_pane_g3

0x90c6,	// (0x000194d4) uniindi_top_pane_g4

0x190f,	// (0x00011d1d) vkb2_row_keypad_pane_ParamLimits

0x190f,	// (0x00011d1d) vkb2_row_keypad_pane

0x1b55,	// (0x00011f63) vkb2_cell_t_keypad_pane_ParamLimits

0x1b55,	// (0x00011f63) vkb2_cell_t_keypad_pane

0x1b65,	// (0x00011f73) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1b65,	// (0x00011f73) vkb2_cell_t_keypad_pane_cp08

0x1b78,	// (0x00011f86) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1b78,	// (0x00011f86) vkb2_cell_t_keypad_pane_cp09

0x1b8c,	// (0x00011f9a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1b8c,	// (0x00011f9a) vkb2_cell_t_keypad_pane_cp01

0x1b9d,	// (0x00011fab) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1b9d,	// (0x00011fab) vkb2_cell_t_keypad_pane_cp02

0x1bae,	// (0x00011fbc) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1bae,	// (0x00011fbc) vkb2_cell_t_keypad_pane_cp03

0x1bbf,	// (0x00011fcd) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1bbf,	// (0x00011fcd) vkb2_cell_t_keypad_pane_cp04

0x1bd0,	// (0x00011fde) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1bd0,	// (0x00011fde) vkb2_cell_t_keypad_pane_cp05

0x1be1,	// (0x00011fef) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1be1,	// (0x00011fef) vkb2_cell_t_keypad_pane_cp06

0x1bf2,	// (0x00012000) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1bf2,	// (0x00012000) vkb2_cell_t_keypad_pane_cp07

0x1c03,	// (0x00012011) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1c03,	// (0x00012011) vkb2_cell_t_keypad_pane_cp10

0x13b6,	// (0x000117c4) vkb2_cell_t_keypad_pane_g1

0x96c6,	// (0x00019ad4) vkb2_cell_t_keypad_pane_t1

0xf416,	// (0x0001f824) popup_grid_graphic2_window

0xec06,	// (0x0001f014) aid_size_cell_graphic2_ParamLimits

0xec06,	// (0x0001f014) aid_size_cell_graphic2

0xec44,	// (0x0001f052) bg_popup_window_pane_cp21_ParamLimits

0xec44,	// (0x0001f052) bg_popup_window_pane_cp21

0xec52,	// (0x0001f060) graphic2_pages_pane_ParamLimits

0xec52,	// (0x0001f060) graphic2_pages_pane

0xeca8,	// (0x0001f0b6) grid_graphic2_control_pane_ParamLimits

0xeca8,	// (0x0001f0b6) grid_graphic2_control_pane

0xecf0,	// (0x0001f0fe) grid_graphic2_pane_ParamLimits

0xecf0,	// (0x0001f0fe) grid_graphic2_pane

0xed77,	// (0x0001f185) cell_graphic2_pane

0xf416,	// (0x0001f824) main_comp_mode_pane

0x88be,	// (0x00018ccc) list_ai3_gene_pane_ParamLimits

0xe59c,	// (0x0001e9aa) bg_popup_window_pane_cp19_ParamLimits

0x8d03,	// (0x00019111) bg_touch_area_indi_pane_ParamLimits

0x8d03,	// (0x00019111) bg_touch_area_indi_pane

0x8d19,	// (0x00019127) bg_touch_area_indi_pane_cp01_ParamLimits

0x8d19,	// (0x00019127) bg_touch_area_indi_pane_cp01

0x8d2f,	// (0x0001913d) bg_touch_area_indi_pane_cp02_ParamLimits

0x8d2f,	// (0x0001913d) bg_touch_area_indi_pane_cp02

0x8d45,	// (0x00019153) bg_touch_area_indi_pane_cp03_ParamLimits

0x8d45,	// (0x00019153) bg_touch_area_indi_pane_cp03

0x8d5f,	// (0x0001916d) popup_slider_window_g1_ParamLimits

0x8d7b,	// (0x00019189) popup_slider_window_g2_ParamLimits

0x8d97,	// (0x000191a5) popup_slider_window_g3_ParamLimits

0xfcbc,	// (0x000200ca) popup_slider_window_g_ParamLimits

0x8dfd,	// (0x0001920b) popup_slider_window_t1_ParamLimits

0x8e71,	// (0x0001927f) small_volume_slider_vertical_pane_ParamLimits

0xed77,	// (0x0001f185) cell_graphic2_pane_ParamLimits

0xedd2,	// (0x0001f1e0) bg_button_pane_cp10_ParamLimits

0xedd2,	// (0x0001f1e0) bg_button_pane_cp10

0xede5,	// (0x0001f1f3) bg_button_pane_cp11_ParamLimits

0xede5,	// (0x0001f1f3) bg_button_pane_cp11

0xedf8,	// (0x0001f206) graphic2_pages_pane_g1_ParamLimits

0xedf8,	// (0x0001f206) graphic2_pages_pane_g1

0xee13,	// (0x0001f221) graphic2_pages_pane_g2_ParamLimits

0xee13,	// (0x0001f221) graphic2_pages_pane_g2

0x0001,

0xfd80,	// (0x0002018e) graphic2_pages_pane_g_ParamLimits

0xfd80,	// (0x0002018e) graphic2_pages_pane_g

0xee2b,	// (0x0001f239) graphic2_pages_pane_t1_ParamLimits

0xee2b,	// (0x0001f239) graphic2_pages_pane_t1

0xee43,	// (0x0001f251) cell_graphic2_control_pane_ParamLimits

0xee43,	// (0x0001f251) cell_graphic2_control_pane

0xee75,	// (0x0001f283) cell_graphic2_pane_g1_ParamLimits

0xee75,	// (0x0001f283) cell_graphic2_pane_g1

0xdacc,	// (0x0001deda) cell_graphic2_pane_g2_ParamLimits

0xdacc,	// (0x0001deda) cell_graphic2_pane_g2

0xebb2,	// (0x0001efc0) cell_graphic2_pane_g3_ParamLimits

0xebb2,	// (0x0001efc0) cell_graphic2_pane_g3

0xdad9,	// (0x0001dee7) cell_graphic2_pane_g4_ParamLimits

0xdad9,	// (0x0001dee7) cell_graphic2_pane_g4

0xee82,	// (0x0001f290) cell_graphic2_pane_g5_ParamLimits

0xee82,	// (0x0001f290) cell_graphic2_pane_g5

0x0004,

0xfd85,	// (0x00020193) cell_graphic2_pane_g_ParamLimits

0xfd85,	// (0x00020193) cell_graphic2_pane_g

0xee9f,	// (0x0001f2ad) cell_graphic2_pane_t1_ParamLimits

0xee9f,	// (0x0001f2ad) cell_graphic2_pane_t1

0x5686,	// (0x00015a94) grid_highlight_pane_cp11_ParamLimits

0x5686,	// (0x00015a94) grid_highlight_pane_cp11

0x2601,	// (0x00012a0f) bg_button_pane_cp05

0xeee9,	// (0x0001f2f7) cell_graphic2_control_pane_g1

0x7400,	// (0x0001780e) bg_touch_area_indi_pane_g1

0x999f,	// (0x00019dad) aid_cmod_rocker_key_size

0x99a9,	// (0x00019db7) aid_cmode_itu_key_size

0x99b3,	// (0x00019dc1) main_cmode_video_pane

0x99bd,	// (0x00019dcb) main_comp_mode_itu_pane

0x99c9,	// (0x00019dd7) main_comp_mode_rocker_pane

0x99d5,	// (0x00019de3) cell_cmode_rocker_pane_ParamLimits

0x99d5,	// (0x00019de3) cell_cmode_rocker_pane

0x99e7,	// (0x00019df5) cell_cmode_itu_pane_ParamLimits

0x99e7,	// (0x00019df5) cell_cmode_itu_pane

0x315c,	// (0x0001356a) bg_button_pane_cp06_ParamLimits

0x315c,	// (0x0001356a) bg_button_pane_cp06

0x767e,	// (0x00017a8c) cell_cmode_rocker_pane_g1_ParamLimits

0x767e,	// (0x00017a8c) cell_cmode_rocker_pane_g1

0x8f15,	// (0x00019323) cell_cmode_rocker_pane_g2_ParamLimits

0x8f15,	// (0x00019323) cell_cmode_rocker_pane_g2

0x0001,

0xfd95,	// (0x000201a3) cell_cmode_rocker_pane_g_ParamLimits

0xfd95,	// (0x000201a3) cell_cmode_rocker_pane_g

0xeb9e,	// (0x0001efac) bg_button_pane_cp07

0x99fc,	// (0x00019e0a) cell_cmode_itu_pane_g1

0x9a05,	// (0x00019e13) cell_cmode_itu_pane_t1

0x9a13,	// (0x00019e21) cell_cmode_itu_pane_t2

0x0001,

0xfd9a,	// (0x000201a8) cell_cmode_itu_pane_t

0x9138,	// (0x00019546) aid_touch_ctrl_left

0x9140,	// (0x0001954e) aid_touch_ctrl_right

0xeb9e,	// (0x0001efac) compa_mode_pane

0xef0d,	// (0x0001f31b) aid_cmod_rocker_key_size_cp

0xef17,	// (0x0001f325) aid_cmode_itu_key_size_cp

0x9a35,	// (0x00019e43) compa_mode_pane_g1

0x9a3d,	// (0x00019e4b) compa_mode_pane_g2

0x9a45,	// (0x00019e53) compa_mode_pane_g3

0x0002,

0xfd9f,	// (0x000201ad) compa_mode_pane_g

0xef21,	// (0x0001f32f) main_comp_mode_itu_pane_cp

0xef29,	// (0x0001f337) main_comp_mode_rocker_pane_cp

0xef31,	// (0x0001f33f) cell_cmode_itu_pane_cp_ParamLimits

0xef31,	// (0x0001f33f) cell_cmode_itu_pane_cp

0xef46,	// (0x0001f354) cell_cmode_rocker_pane_cp_ParamLimits

0xef46,	// (0x0001f354) cell_cmode_rocker_pane_cp

0x315c,	// (0x0001356a) bg_button_pane_cp06_cp_ParamLimits

0x315c,	// (0x0001356a) bg_button_pane_cp06_cp

0x767e,	// (0x00017a8c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x767e,	// (0x00017a8c) cell_cmode_rocker_pane_g1_cp

0x7400,	// (0x0001780e) cell_cmode_rocker_pane_g2_cp

0xeb9e,	// (0x0001efac) bg_button_pane_cp07_cp

0xef58,	// (0x0001f366) cell_cmode_itu_pane_g1_cp

0xef61,	// (0x0001f36f) cell_cmode_itu_pane_t1_cp

0xef61,	// (0x0001f36f) cell_cmode_itu_pane_t2_cp

0xda8f,	// (0x0001de9d) settings_code_pane_cp2

0x235e,	// (0x0001276c) bg_popup_window_pane_cp3_ParamLimits

0x2801,	// (0x00012c0f) heading_pane_cp3_ParamLimits

0x2810,	// (0x00012c1e) listscroll_popup_graphic_pane_ParamLimits

0x115f,	// (0x0001156d) fep_hwr_aid_pane_ParamLimits

0x15d6,	// (0x000119e4) aid_touch_sctrl_top_ParamLimits

0x15f1,	// (0x000119ff) sctrl_sk_top_pane_g1_ParamLimits

0x13b6,	// (0x000117c4) sctrl_sk_top_pane_g2_ParamLimits

0xfcd5,	// (0x000200e3) sctrl_sk_top_pane_g_ParamLimits

0x15fe,	// (0x00011a0c) sctrl_sk_top_pane_t1_ParamLimits

0x15d6,	// (0x000119e4) aid_touch_sctrl_bottom_ParamLimits

0x15fe,	// (0x00011a0c) sctrl_sk_bottom_pane_t1_ParamLimits

0x9081,	// (0x0001948f) aid_area_touch_clock

0xc366,	// (0x0001c774) aid_vkb2_area_top_pane_cell_ParamLimits

0xc366,	// (0x0001c774) aid_vkb2_area_top_pane_cell

0xc415,	// (0x0001c823) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc415,	// (0x0001c823) aid_vkb2_area_bottom_pane_cell

0x9611,	// (0x00019a1f) popup_char_count_window

0x9a92,	// (0x00019ea0) popup_char_count_window_g1

0x9a9b,	// (0x00019ea9) popup_char_count_window_g2

0x9aa4,	// (0x00019eb2) popup_char_count_window_g3

0x0002,

0xfda6,	// (0x000201b4) popup_char_count_window_g

0x9aad,	// (0x00019ebb) popup_char_count_window_t1

0x16a5,	// (0x00011ab3) popup_fep_char_preview_window_ParamLimits

0x16a5,	// (0x00011ab3) popup_fep_char_preview_window

0xc386,	// (0x0001c794) vkb2_top_candi_pane_ParamLimits

0xc386,	// (0x0001c794) vkb2_top_candi_pane

0xef6f,	// (0x0001f37d) cell_vkb2_top_candi_pane_ParamLimits

0xef6f,	// (0x0001f37d) cell_vkb2_top_candi_pane

0x1c18,	// (0x00012026) bg_popup_fep_char_preview_window_ParamLimits

0x1c18,	// (0x00012026) bg_popup_fep_char_preview_window

0x1c26,	// (0x00012034) popup_fep_char_preview_window_t1_ParamLimits

0x1c26,	// (0x00012034) popup_fep_char_preview_window_t1

0x9b05,	// (0x00019f13) bg_popup_fep_char_preview_window_g1

0x9b0d,	// (0x00019f1b) bg_popup_fep_char_preview_window_g2

0x9b15,	// (0x00019f23) bg_popup_fep_char_preview_window_g3

0x9b1d,	// (0x00019f2b) bg_popup_fep_char_preview_window_g4

0x9b25,	// (0x00019f33) bg_popup_fep_char_preview_window_g5

0x9b2d,	// (0x00019f3b) bg_popup_fep_char_preview_window_g6

0x9b35,	// (0x00019f43) bg_popup_fep_char_preview_window_g7

0x9b3d,	// (0x00019f4b) bg_popup_fep_char_preview_window_g8

0x9b45,	// (0x00019f53) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdad,	// (0x000201bb) bg_popup_fep_char_preview_window_g

0x13b6,	// (0x000117c4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x13b6,	// (0x000117c4) cell_vkb2_top_candi_pane_g1

0x13c4,	// (0x000117d2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x13c4,	// (0x000117d2) cell_vkb2_top_candi_pane_g2

0x9231,	// (0x0001963f) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9231,	// (0x0001963f) cell_vkb2_top_candi_pane_g3

0x1c68,	// (0x00012076) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1c68,	// (0x00012076) cell_vkb2_top_candi_pane_g4

0x7a5c,	// (0x00017e6a) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7a5c,	// (0x00017e6a) cell_vkb2_top_candi_pane_g5

0x1c89,	// (0x00012097) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1c89,	// (0x00012097) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc2,	// (0x000201d0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc2,	// (0x000201d0) cell_vkb2_top_candi_pane_g

0x1c97,	// (0x000120a5) cell_vkb2_top_candi_pane_t1

0x0fbf,	// (0x000113cd) aid_size_touch_slider_mark_ParamLimits

0x0fbf,	// (0x000113cd) aid_size_touch_slider_mark

0xec8e,	// (0x0001f09c) grid_graphic2_catg_pane_ParamLimits

0xec8e,	// (0x0001f09c) grid_graphic2_catg_pane

0xed4a,	// (0x0001f158) popup_grid_graphic2_window_t1_ParamLimits

0xed4a,	// (0x0001f158) popup_grid_graphic2_window_t1

0xed60,	// (0x0001f16e) popup_grid_graphic2_window_t2_ParamLimits

0xed60,	// (0x0001f16e) popup_grid_graphic2_window_t2

0x0001,

0xfd7b,	// (0x00020189) popup_grid_graphic2_window_t_ParamLimits

0xfd7b,	// (0x00020189) popup_grid_graphic2_window_t

0x2601,	// (0x00012a0f) bg_button_pane_cp05_ParamLimits

0xeee9,	// (0x0001f2f7) cell_graphic2_control_pane_g1_ParamLimits

0xefcf,	// (0x0001f3dd) cell_graphic2_catg_pane_ParamLimits

0xefcf,	// (0x0001f3dd) cell_graphic2_catg_pane

0xeb9e,	// (0x0001efac) bg_button_pane_cp12

0xefe1,	// (0x0001f3ef) cell_graphic2_catg_pane_g1

0x904d,	// (0x0001945b) cell_tb_ext_pane_t1_ParamLimits

0x1a4e,	// (0x00011e5c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1a4e,	// (0x00011e5c) vkb2_top_cell_right_narrow_pane

0x1a66,	// (0x00011e74) vkb2_top_cell_right_wide_pane_ParamLimits

0x1a66,	// (0x00011e74) vkb2_top_cell_right_wide_pane

0x1151,	// (0x0001155f) bg_vkb2_func_pane_ParamLimits

0x1151,	// (0x0001155f) bg_vkb2_func_pane

0x1ad7,	// (0x00011ee5) vkb2_top_cell_left_pane_g1_ParamLimits

0x1151,	// (0x0001155f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1151,	// (0x0001155f) bg_vkb2_fuc_pane_cp03

0x1b35,	// (0x00011f43) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x48a0,	// (0x00014cae) bg_vkb2_func_pane_g1

0x48a8,	// (0x00014cb6) bg_vkb2_func_pane_g2

0x48b8,	// (0x00014cc6) bg_vkb2_func_pane_g3

0x48b0,	// (0x00014cbe) bg_vkb2_func_pane_g4

0x48c0,	// (0x00014cce) bg_vkb2_func_pane_g5

0x48c8,	// (0x00014cd6) bg_vkb2_func_pane_g6

0x48d0,	// (0x00014cde) bg_vkb2_func_pane_g7

0x48d8,	// (0x00014ce6) bg_vkb2_func_pane_g8

0x4898,	// (0x00014ca6) bg_vkb2_func_pane_g9

0x0008,

0xfdcf,	// (0x000201dd) bg_vkb2_func_pane_g

0x1151,	// (0x0001155f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1151,	// (0x0001155f) bg_vkb2_fuc_pane_cp01

0x1ad7,	// (0x00011ee5) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1ad7,	// (0x00011ee5) vkb2_top_cell_right_wide_pane_g1

0x1151,	// (0x0001155f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1151,	// (0x0001155f) bg_vkb2_fuc_pane_cp02

0x1cb6,	// (0x000120c4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1cb6,	// (0x000120c4) vkb2_top_cell_right_narrow_pane_g1

0xe4de,	// (0x0001e8ec) aid_touch_area_decrease_ParamLimits

0xe4de,	// (0x0001e8ec) aid_touch_area_decrease

0xe518,	// (0x0001e926) aid_touch_area_increase_ParamLimits

0xe518,	// (0x0001e926) aid_touch_area_increase

0xe540,	// (0x0001e94e) aid_touch_area_mute_ParamLimits

0xe540,	// (0x0001e94e) aid_touch_area_mute

0xe568,	// (0x0001e976) aid_touch_area_slider_ParamLimits

0xe568,	// (0x0001e976) aid_touch_area_slider

0xe5a8,	// (0x0001e9b6) popup_slider_window_g4_ParamLimits

0xe5a8,	// (0x0001e9b6) popup_slider_window_g4

0xe5d0,	// (0x0001e9de) popup_slider_window_g5_ParamLimits

0xe5d0,	// (0x0001e9de) popup_slider_window_g5

0xe604,	// (0x0001ea12) popup_slider_window_g6_ParamLimits

0xe604,	// (0x0001ea12) popup_slider_window_g6

0x8e2b,	// (0x00019239) popup_slider_window_t2_ParamLimits

0x8e2b,	// (0x00019239) popup_slider_window_t2

0x0001,

0xfcc9,	// (0x000200d7) popup_slider_window_t_ParamLimits

0xfcc9,	// (0x000200d7) popup_slider_window_t

0xe620,	// (0x0001ea2e) slider_pane_ParamLimits

0xe620,	// (0x0001ea2e) slider_pane

0x9b68,	// (0x00019f76) slider_pane_g1_ParamLimits

0x9b68,	// (0x00019f76) slider_pane_g1

0x9b7c,	// (0x00019f8a) slider_pane_g2_ParamLimits

0x9b7c,	// (0x00019f8a) slider_pane_g2

0x9b92,	// (0x00019fa0) slider_pane_g3_ParamLimits

0x9b92,	// (0x00019fa0) slider_pane_g3

0x0003,

0xfde2,	// (0x000201f0) slider_pane_g_ParamLimits

0xfde2,	// (0x000201f0) slider_pane_g

0xbfe1,	// (0x0001c3ef) popup_tb_float_extension_window_ParamLimits

0xbfe1,	// (0x0001c3ef) popup_tb_float_extension_window

0x9bbe,	// (0x00019fcc) aid_size_cell_tb_float_ext

0xeb9e,	// (0x0001efac) bg_popup_sub_window_cp28

0x9bca,	// (0x00019fd8) grid_tb_float_ext_pane

0x9bd4,	// (0x00019fe2) cell_tb_float_ext_pane_ParamLimits

0x9bd4,	// (0x00019fe2) cell_tb_float_ext_pane

0x9bee,	// (0x00019ffc) cell_tb_float_ext_pane_g1

0x9bf7,	// (0x0001a005) grid_highlight_pane_cp12

0xc10a,	// (0x0001c518) cell_last_hwr_side_pane_ParamLimits

0xc10a,	// (0x0001c518) cell_last_hwr_side_pane

0x7400,	// (0x0001780e) cell_last_hwr_side_pane_g1

0x9c00,	// (0x0001a00e) cell_last_hwr_side_pane_g2

0x0001,

0xfdeb,	// (0x000201f9) cell_last_hwr_side_pane_g

0xc4f2,	// (0x0001c900) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc4f2,	// (0x0001c900) vkb2_area_bottom_space_btn_pane

0x13b6,	// (0x000117c4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x96c6,	// (0x00019ad4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1c97,	// (0x000120a5) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1cd6,	// (0x000120e4) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1cd6,	// (0x000120e4) vkb2_area_bottom_space_btn_pane_g1

0x1d10,	// (0x0001211e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1d10,	// (0x0001211e) vkb2_area_bottom_space_btn_pane_g2

0x1d46,	// (0x00012154) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1d46,	// (0x00012154) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf0,	// (0x000201fe) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf0,	// (0x000201fe) vkb2_area_bottom_space_btn_pane_g

0x1214,	// (0x00011622) cel_fep_hwr_func_pane_ParamLimits

0x1214,	// (0x00011622) cel_fep_hwr_func_pane

0xc0df,	// (0x0001c4ed) cell_hwr_side_button_pane_ParamLimits

0xc0df,	// (0x0001c4ed) cell_hwr_side_button_pane

0x9081,	// (0x0001948f) aid_area_touch_clock_ParamLimits

0x2601,	// (0x00012a0f) bg_uniindi_top_pane_ParamLimits

0x9093,	// (0x000194a1) uniindi_top_pane_g1_ParamLimits

0x90a9,	// (0x000194b7) uniindi_top_pane_g2_ParamLimits

0x90b5,	// (0x000194c3) uniindi_top_pane_g3_ParamLimits

0x90c6,	// (0x000194d4) uniindi_top_pane_g4_ParamLimits

0xfd01,	// (0x0002010f) uniindi_top_pane_g_ParamLimits

0x90d3,	// (0x000194e1) uniindi_top_pane_t1_ParamLimits

0x2601,	// (0x00012a0f) bg_vkb2_func_pane_cp01_ParamLimits

0x2601,	// (0x00012a0f) bg_vkb2_func_pane_cp01

0x9c09,	// (0x0001a017) cel_fep_hwr_func_pane_g1_ParamLimits

0x9c09,	// (0x0001a017) cel_fep_hwr_func_pane_g1

0x2601,	// (0x00012a0f) bg_vkb2_func_pane_cp02_ParamLimits

0x2601,	// (0x00012a0f) bg_vkb2_func_pane_cp02

0x9c09,	// (0x0001a017) cell_hwr_side_button_pane_g1_ParamLimits

0x9c09,	// (0x0001a017) cell_hwr_side_button_pane_g1

0x4703,	// (0x00014b11) status_pane_g4_ParamLimits

0x4703,	// (0x00014b11) status_pane_g4

0x471d,	// (0x00014b2b) status_pane_t1

0x7145,	// (0x00017553) form2_midp_gauge_slider_cont_pane

0x714d,	// (0x0001755b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xddf2,	// (0x0001e200) form2_midp_gauge_slider_pane_t2_ParamLimits

0xde04,	// (0x0001e212) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac1,	// (0x0001fecf) form2_midp_gauge_slider_pane_t_ParamLimits

0x7183,	// (0x00017591) form2_midp_slider_pane_ParamLimits

0x166d,	// (0x00011a7b) aid_size_cell_func_vkb2_ParamLimits

0x166d,	// (0x00011a7b) aid_size_cell_func_vkb2

0x9baa,	// (0x00019fb8) slider_pane_g4_ParamLimits

0x9baa,	// (0x00019fb8) slider_pane_g4

0xc55b,	// (0x0001c969) form2_midp_gauge_slider_pane_t2_cp01

0xc569,	// (0x0001c977) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc569,	// (0x0001c977) form2_midp_gauge_slider_pane_t3_cp01

0x1dbb,	// (0x000121c9) form2_midp_slider_pane_cp01

0xeb9e,	// (0x0001efac) navi_smil_pane

0x9c42,	// (0x0001a050) navi_smil_pane_g1

0x9c4a,	// (0x0001a058) navi_smil_pane_t1

0x9c17,	// (0x0001a025) form2_midp_slider_pane_g1

0x9c20,	// (0x0001a02e) form2_midp_slider_pane_g2

0x9c28,	// (0x0001a036) form2_midp_slider_pane_g3

0x9c17,	// (0x0001a025) form2_midp_slider_pane_g4

0xefea,	// (0x0001f3f8) form2_midp_slider_pane_g5

0x0004,

0xfdf9,	// (0x00020207) form2_midp_slider_pane_g

0x1d80,	// (0x0001218e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1d80,	// (0x0001218e) vkb2_area_bottom_space_btn_pane_g4

0xd45d,	// (0x0001d86b) lc0_navi_pane_ParamLimits

0xd45d,	// (0x0001d86b) lc0_navi_pane

0xd4c7,	// (0x0001d8d5) lc0_stat_indi_pane_ParamLimits

0xd4c7,	// (0x0001d8d5) lc0_stat_indi_pane

0xd4dc,	// (0x0001d8ea) ls0_title_pane_ParamLimits

0xd4dc,	// (0x0001d8ea) ls0_title_pane

0x315c,	// (0x0001356a) bg_popup_sub_pane_cp14_ParamLimits

0x9068,	// (0x00019476) list_uniindi_pane_ParamLimits

0x9074,	// (0x00019482) uniindi_top_pane_ParamLimits

0x9110,	// (0x0001951e) list_single_uniindi_pane_g1_ParamLimits

0x9123,	// (0x00019531) list_single_uniindi_pane_t1_ParamLimits

0xc586,	// (0x0001c994) lc0_stat_clock_pane_ParamLimits

0xc586,	// (0x0001c994) lc0_stat_clock_pane

0xeff5,	// (0x0001f403) lc0_stat_indi_pane_g1_ParamLimits

0xeff5,	// (0x0001f403) lc0_stat_indi_pane_g1

0xf002,	// (0x0001f410) lc0_stat_indi_pane_g2_ParamLimits

0xf002,	// (0x0001f410) lc0_stat_indi_pane_g2

0x0001,

0xfe04,	// (0x00020212) lc0_stat_indi_pane_g_ParamLimits

0xfe04,	// (0x00020212) lc0_stat_indi_pane_g

0xc593,	// (0x0001c9a1) lc0_uni_indicator_pane_ParamLimits

0xc593,	// (0x0001c9a1) lc0_uni_indicator_pane

0xf00f,	// (0x0001f41d) ls0_title_pane_g1_ParamLimits

0xf00f,	// (0x0001f41d) ls0_title_pane_g1

0xf023,	// (0x0001f431) ls0_title_pane_t1_ParamLimits

0xf023,	// (0x0001f431) ls0_title_pane_t1

0xc5a0,	// (0x0001c9ae) lc0_uni_indicator_pane_g1_ParamLimits

0xc5a0,	// (0x0001c9ae) lc0_uni_indicator_pane_g1

0x9cbc,	// (0x0001a0ca) lc0_stat_clock_pane_t1

0xf416,	// (0x0001f824) main_ai5_pane

0x9cca,	// (0x0001a0d8) ai5_sk_pane_ParamLimits

0x9cca,	// (0x0001a0d8) ai5_sk_pane

0xf051,	// (0x0001f45f) cell_ai5_widget_pane_ParamLimits

0xf051,	// (0x0001f45f) cell_ai5_widget_pane

0x9da0,	// (0x0001a1ae) aid_size_cell_widget_grid

0x9dae,	// (0x0001a1bc) bg_ai5_widget_pane_ParamLimits

0x9dae,	// (0x0001a1bc) bg_ai5_widget_pane

0x9e2a,	// (0x0001a238) cell_ai5_widget_pane_g2

0x9e3e,	// (0x0001a24c) cell_ai5_widget_pane_g3

0x9e58,	// (0x0001a266) cell_ai5_widget_pane_g4

0x9e68,	// (0x0001a276) cell_ai5_widget_pane_g5

0x9e78,	// (0x0001a286) cell_ai5_widget_pane_g6

0x9e84,	// (0x0001a292) cell_ai5_widget_pane_g7

0x9ef0,	// (0x0001a2fe) cell_ai5_widget_pane_t1_ParamLimits

0x9ef0,	// (0x0001a2fe) cell_ai5_widget_pane_t1

0x9f0d,	// (0x0001a31b) cell_ai5_widget_pane_t2_ParamLimits

0x9f0d,	// (0x0001a31b) cell_ai5_widget_pane_t2

0x9f25,	// (0x0001a333) cell_ai5_widget_pane_t3_ParamLimits

0x9f25,	// (0x0001a333) cell_ai5_widget_pane_t3

0x9f3d,	// (0x0001a34b) cell_ai5_widget_pane_t4_ParamLimits

0x9f3d,	// (0x0001a34b) cell_ai5_widget_pane_t4

0x9f63,	// (0x0001a371) cell_ai5_widget_pane_t5_ParamLimits

0x9f63,	// (0x0001a371) cell_ai5_widget_pane_t5

0x9f82,	// (0x0001a390) cell_ai5_widget_pane_t6_ParamLimits

0x9f82,	// (0x0001a390) cell_ai5_widget_pane_t6

0x9f94,	// (0x0001a3a2) cell_ai5_widget_pane_t7_ParamLimits

0x9f94,	// (0x0001a3a2) cell_ai5_widget_pane_t7

0x9fb3,	// (0x0001a3c1) cell_ai5_widget_pane_t8_ParamLimits

0x9fb3,	// (0x0001a3c1) cell_ai5_widget_pane_t8

0x000b,

0xfe24,	// (0x00020232) cell_ai5_widget_pane_t_ParamLimits

0xfe24,	// (0x00020232) cell_ai5_widget_pane_t

0xa037,	// (0x0001a445) grid_ai5_widget_pane

0x315c,	// (0x0001356a) highlight_cell_ai5_widget_pane_ParamLimits

0x315c,	// (0x0001356a) highlight_cell_ai5_widget_pane

0xf0bd,	// (0x0001f4cb) ai5_sk_left_pane

0xf0c7,	// (0x0001f4d5) ai5_sk_middle_pane

0xf0d1,	// (0x0001f4df) ai5_sk_right_pane

0xa063,	// (0x0001a471) bg_ai5_widget_pane_g1_ParamLimits

0xa063,	// (0x0001a471) bg_ai5_widget_pane_g1

0xa06f,	// (0x0001a47d) bg_ai5_widget_pane_g2_ParamLimits

0xa06f,	// (0x0001a47d) bg_ai5_widget_pane_g2

0xa07b,	// (0x0001a489) bg_ai5_widget_pane_g3_ParamLimits

0xa07b,	// (0x0001a489) bg_ai5_widget_pane_g3

0xa087,	// (0x0001a495) bg_ai5_widget_pane_g4_ParamLimits

0xa087,	// (0x0001a495) bg_ai5_widget_pane_g4

0xa093,	// (0x0001a4a1) bg_ai5_widget_pane_g5_ParamLimits

0xa093,	// (0x0001a4a1) bg_ai5_widget_pane_g5

0xa09f,	// (0x0001a4ad) bg_ai5_widget_pane_g6_ParamLimits

0xa09f,	// (0x0001a4ad) bg_ai5_widget_pane_g6

0xa0ab,	// (0x0001a4b9) bg_ai5_widget_pane_g7_ParamLimits

0xa0ab,	// (0x0001a4b9) bg_ai5_widget_pane_g7

0xa0b7,	// (0x0001a4c5) bg_ai5_widget_pane_g8_ParamLimits

0xa0b7,	// (0x0001a4c5) bg_ai5_widget_pane_g8

0xa0c3,	// (0x0001a4d1) bg_ai5_widget_pane_g9_ParamLimits

0xa0c3,	// (0x0001a4d1) bg_ai5_widget_pane_g9

0x0008,

0xfe3d,	// (0x0002024b) bg_ai5_widget_pane_g_ParamLimits

0xfe3d,	// (0x0002024b) bg_ai5_widget_pane_g

0xa0f5,	// (0x0001a503) cell_shortcut_ai5_widget_pane_ParamLimits

0xa0f5,	// (0x0001a503) cell_shortcut_ai5_widget_pane

0x4024,	// (0x00014432) bg_cell_shortcut_ai5_widget_pane

0xa106,	// (0x0001a514) cell_grid_ai5_widget_pane_g1

0x4024,	// (0x00014432) highlight_cell_shortcut_ai5_widget_pane

0x48a0,	// (0x00014cae) ai5_sk_left_pane_g1

0xa10f,	// (0x0001a51d) ai5_sk_left_pane_g2

0xa117,	// (0x0001a525) ai5_sk_left_pane_g3

0xa11f,	// (0x0001a52d) ai5_sk_left_pane_g4

0x0003,

0xfe50,	// (0x0002025e) ai5_sk_left_pane_g

0xa127,	// (0x0001a535) ai5_sk_left_pane_t1

0x48a8,	// (0x00014cb6) ai5_sk_right_pane_g1

0xa135,	// (0x0001a543) ai5_sk_right_pane_g2

0xa13d,	// (0x0001a54b) ai5_sk_right_pane_g3

0xa145,	// (0x0001a553) ai5_sk_right_pane_g4

0x0003,

0xfe59,	// (0x00020267) ai5_sk_right_pane_g

0xa14d,	// (0x0001a55b) ai5_sk_right_pane_t1

0x48a8,	// (0x00014cb6) ai5_sk_middle_pane_g1

0x48a0,	// (0x00014cae) ai5_sk_middle_pane_g2

0x48c0,	// (0x00014cce) ai5_sk_middle_pane_g3

0xa13d,	// (0x0001a54b) ai5_sk_middle_pane_g4

0xa117,	// (0x0001a525) ai5_sk_middle_pane_g5

0xa15b,	// (0x0001a569) ai5_sk_middle_pane_g6

0xf0db,	// (0x0001f4e9) ai5_sk_middle_pane_g7

0x0006,

0xfe62,	// (0x00020270) ai5_sk_middle_pane_g

0xd349,	// (0x0001d757) aid_touch_area_size_lc0_ParamLimits

0xd349,	// (0x0001d757) aid_touch_area_size_lc0

0x13e5,	// (0x000117f3) cell_hwr_candidate_pane_t1_ParamLimits

0x43d4,	// (0x000147e2) aid_touch_navi_pane

0xd5d5,	// (0x0001d9e3) status_dt_navi_pane_ParamLimits

0xd5d5,	// (0x0001d9e3) status_dt_navi_pane

0xd5ed,	// (0x0001d9fb) status_dt_sta_pane_ParamLimits

0xd5ed,	// (0x0001d9fb) status_dt_sta_pane

0xf0e3,	// (0x0001f4f1) dt_sta_controll_pane

0xf0f0,	// (0x0001f4fe) dt_sta_indi_pane

0xf0fd,	// (0x0001f50b) dt_sta_title_pane

0x2601,	// (0x00012a0f) bg_dt_sta_indi_pane_ParamLimits

0x2601,	// (0x00012a0f) bg_dt_sta_indi_pane

0xf10f,	// (0x0001f51d) dt_sta_battery_pane

0xf117,	// (0x0001f525) dt_sta_indi_pane_g1

0xa1ad,	// (0x0001a5bb) dt_sta_indi_pane_g2

0xa1b6,	// (0x0001a5c4) dt_sta_indi_pane_g3

0x0002,

0xfe71,	// (0x0002027f) dt_sta_indi_pane_g

0xa1bf,	// (0x0001a5cd) dt_sta_signal_pane

0x315c,	// (0x0001356a) bg_dt_sta_title_pane_ParamLimits

0x315c,	// (0x0001356a) bg_dt_sta_title_pane

0xa1c8,	// (0x0001a5d6) dt_sta_title_pane_g1

0xa1d0,	// (0x0001a5de) dt_sta_title_pane_t1_ParamLimits

0xa1d0,	// (0x0001a5de) dt_sta_title_pane_t1

0xeb9e,	// (0x0001efac) bg_dt_sta_control_pane

0xf120,	// (0x0001f52e) dt_sta_controll_pane_g1

0xa1ee,	// (0x0001a5fc) bg_dt_sta_title_pane_g1

0xa1f7,	// (0x0001a605) bg_dt_sta_title_pane_g2

0xa200,	// (0x0001a60e) bg_dt_sta_title_pane_g3

0x0002,

0xfe78,	// (0x00020286) bg_dt_sta_title_pane_g

0x7400,	// (0x0001780e) bg_dt_sta_indi_pane_g1

0xa209,	// (0x0001a617) dt_sta_signal_pane_g1

0xa211,	// (0x0001a61f) dt_sta_signal_pane_g2

0x0001,

0xfe7f,	// (0x0002028d) dt_sta_signal_pane_g

0xa219,	// (0x0001a627) dt_sta_battery_pane_g1

0xa222,	// (0x0001a630) dt_sta_battery_pane_t1

0x7400,	// (0x0001780e) bg_dt_sta_control_pane_g1

0x3a9f,	// (0x00013ead) fep_china_uni_eep_pane

0x3aa7,	// (0x00013eb5) fep_china_uni_entry_pane_ParamLimits

0x3ab7,	// (0x00013ec5) popup_fep_china_uni_window_g1_ParamLimits

0x3ac7,	// (0x00013ed5) popup_fep_china_uni_window_g2_ParamLimits

0x3ac7,	// (0x00013ed5) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x0001fb01) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x0001fb01) popup_fep_china_uni_window_g

0xa231,	// (0x0001a63f) fep_china_uni_eep_pane_g1

0xa239,	// (0x0001a647) fep_china_uni_eep_pane_t1

0x9c39,	// (0x0001a047) aid_touch_area_size_smil_player

0x452a,	// (0x00014938) lc0_clock_pane

0x4711,	// (0x00014b1f) status_pane_g5_ParamLimits

0x4711,	// (0x00014b1f) status_pane_g5

0xbb63,	// (0x0001bf71) popup_keymap_window

0x46cf,	// (0x00014add) status_icon_pane

0x9e3e,	// (0x0001a24c) cell_ai5_widget_pane_g3_ParamLimits

0x9e58,	// (0x0001a266) cell_ai5_widget_pane_g4_ParamLimits

0x9e68,	// (0x0001a276) cell_ai5_widget_pane_g5_ParamLimits

0x9e90,	// (0x0001a29e) cell_ai5_widget_pane_g8_ParamLimits

0x9e90,	// (0x0001a29e) cell_ai5_widget_pane_g8

0x9ea4,	// (0x0001a2b2) cell_ai5_widget_pane_g9_ParamLimits

0x9ea4,	// (0x0001a2b2) cell_ai5_widget_pane_g9

0x9eb8,	// (0x0001a2c6) cell_ai5_widget_pane_g10_ParamLimits

0x9eb8,	// (0x0001a2c6) cell_ai5_widget_pane_g10

0xa248,	// (0x0001a656) status_icon_pane_g1

0xeb9e,	// (0x0001efac) bg_popup_sub_pane_cp13

0xa250,	// (0x0001a65e) popup_keymap_window_t1

0xd2df,	// (0x0001d6ed) control_pane_g6_ParamLimits

0xd2df,	// (0x0001d6ed) control_pane_g6

0xd2ec,	// (0x0001d6fa) control_pane_g7_ParamLimits

0xd2ec,	// (0x0001d6fa) control_pane_g7

0xd2f9,	// (0x0001d707) control_pane_g8_ParamLimits

0xd2f9,	// (0x0001d707) control_pane_g8

0xf0e3,	// (0x0001f4f1) dt_sta_controll_pane_ParamLimits

0xf0f0,	// (0x0001f4fe) dt_sta_indi_pane_ParamLimits

0xf0fd,	// (0x0001f50b) dt_sta_title_pane_ParamLimits

0x2b3d,	// (0x00012f4b) aid_size_touch_scroll_bar_cale

0xf4ef,	// (0x0001f8fd) popup_discreet_window_ParamLimits

0xf4ef,	// (0x0001f8fd) popup_discreet_window

0xb766,	// (0x0001bb74) popup_sk_window

0x5012,	// (0x00015420) bg_popup_sub_pane_cp28_ParamLimits

0x5012,	// (0x00015420) bg_popup_sub_pane_cp28

0xa25e,	// (0x0001a66c) popup_discreet_window_g1_ParamLimits

0xa25e,	// (0x0001a66c) popup_discreet_window_g1

0xa27e,	// (0x0001a68c) popup_discreet_window_t1_ParamLimits

0xa27e,	// (0x0001a68c) popup_discreet_window_t1

0xa29c,	// (0x0001a6aa) popup_discreet_window_t2_ParamLimits

0xa29c,	// (0x0001a6aa) popup_discreet_window_t2

0x0002,

0xfe84,	// (0x00020292) popup_discreet_window_t_ParamLimits

0xfe84,	// (0x00020292) popup_discreet_window_t

0x1df2,	// (0x00012200) popup_sk_window_g1

0x1dfc,	// (0x0001220a) popup_sk_window_g2

0x0001,

0xfe8b,	// (0x00020299) popup_sk_window_g

0x1e04,	// (0x00012212) popup_sk_window_t1

0x1e12,	// (0x00012220) popup_sk_window_t1_copy1

0x9e2a,	// (0x0001a238) cell_ai5_widget_pane_g2_ParamLimits

0x9fc5,	// (0x0001a3d3) cell_ai5_widget_pane_t9_ParamLimits

0x9fc5,	// (0x0001a3d3) cell_ai5_widget_pane_t9

0xeb9e,	// (0x0001efac) main_fep_fshwr2_pane

0xc5c7,	// (0x0001c9d5) aid_fshwr2_btn_pane

0xc5d7,	// (0x0001c9e5) aid_fshwr2_syb_pane

0xc5eb,	// (0x0001c9f9) aid_fshwr2_txt_pane

0xc5fb,	// (0x0001ca09) fshwr2_func_candi_pane

0xc61b,	// (0x0001ca29) fshwr2_hwr_syb_pane

0xc63d,	// (0x0001ca4b) fshwr2_icf_pane

0xf416,	// (0x0001f824) fshwr2_icf_bg_pane

0xc66d,	// (0x0001ca7b) fshwr2_icf_pane_t1_ParamLimits

0xc66d,	// (0x0001ca7b) fshwr2_icf_pane_t1

0x3974,	// (0x00013d82) fshwr2_func_candi_pane_g1

0xf129,	// (0x0001f537) fshwr2_func_candi_row_pane_ParamLimits

0xf129,	// (0x0001f537) fshwr2_func_candi_row_pane

0xc686,	// (0x0001ca94) cell_fshwr2_syb_pane_ParamLimits

0xc686,	// (0x0001ca94) cell_fshwr2_syb_pane

0x1efb,	// (0x00012309) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1efb,	// (0x00012309) fshwr2_hwr_syb_pane_g1

0xf416,	// (0x0001f824) bg_popup_call_pane_cp01

0xc6ac,	// (0x0001caba) fshwr2_func_candi_cell_pane_ParamLimits

0xc6ac,	// (0x0001caba) fshwr2_func_candi_cell_pane

0x4df3,	// (0x00015201) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x4df3,	// (0x00015201) fshwr2_func_candi_cell_bg_pane

0xc6f7,	// (0x0001cb05) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc6f7,	// (0x0001cb05) fshwr2_func_candi_cell_pane_g1

0xc72e,	// (0x0001cb3c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc72e,	// (0x0001cb3c) fshwr2_func_candi_cell_pane_t1

0xf416,	// (0x0001f824) bg_button_pane_cp08

0x4350,	// (0x0001475e) cell_fshwr2_syb_bg_pane

0xc749,	// (0x0001cb57) cell_fshwr2_syb_bg_pane_g1

0xc75c,	// (0x0001cb6a) cell_fshwr2_syb_bg_pane_t1

0x315c,	// (0x0001356a) main_tmo_pane

0xd8c1,	// (0x0001dccf) uni_indicator_pane_g1_ParamLimits

0xd8d7,	// (0x0001dce5) uni_indicator_pane_g2_ParamLimits

0xd8ed,	// (0x0001dcfb) uni_indicator_pane_g3_ParamLimits

0x5b60,	// (0x00015f6e) uni_indicator_pane_g4_ParamLimits

0x5b60,	// (0x00015f6e) uni_indicator_pane_g4

0x5b74,	// (0x00015f82) uni_indicator_pane_g5_ParamLimits

0x5b74,	// (0x00015f82) uni_indicator_pane_g5

0x5b74,	// (0x00015f82) uni_indicator_pane_g6_ParamLimits

0x5b74,	// (0x00015f82) uni_indicator_pane_g6

0xf8f2,	// (0x0001fd00) uni_indicator_pane_g_ParamLimits

0xe4ba,	// (0x0001e8c8) popup_tmo_note_window_ParamLimits

0xe4ba,	// (0x0001e8c8) popup_tmo_note_window

0x164f,	// (0x00011a5d) fshwr2_bg_pane

0xc71f,	// (0x0001cb2d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc71f,	// (0x0001cb2d) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe90,	// (0x0002029e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe90,	// (0x0002029e) fshwr2_func_candi_cell_pane_g

0x139e,	// (0x000117ac) bg_popup_window_pane_cp01

0x1fbc,	// (0x000123ca) bg_popup_window_pane_g1_cp01

0xa315,	// (0x0001a723) bg_popup_window_pane_cp22_ParamLimits

0xa315,	// (0x0001a723) bg_popup_window_pane_cp22

0xa323,	// (0x0001a731) listscroll_tmo_link_pane_ParamLimits

0xa323,	// (0x0001a731) listscroll_tmo_link_pane

0xa363,	// (0x0001a771) popup_tmo_note_window_g1_ParamLimits

0xa363,	// (0x0001a771) popup_tmo_note_window_g1

0xa370,	// (0x0001a77e) tmo_note_info_pane_ParamLimits

0xa370,	// (0x0001a77e) tmo_note_info_pane

0xf14c,	// (0x0001f55a) list_tmo_note_info_pane_g1_ParamLimits

0xf14c,	// (0x0001f55a) list_tmo_note_info_pane_g1

0xa3a1,	// (0x0001a7af) list_tmo_note_info_pane_g2_ParamLimits

0xa3a1,	// (0x0001a7af) list_tmo_note_info_pane_g2

0x0001,

0xfe95,	// (0x000202a3) list_tmo_note_info_pane_g_ParamLimits

0xfe95,	// (0x000202a3) list_tmo_note_info_pane_g

0xa3bd,	// (0x0001a7cb) list_tmo_note_info_text_pane_ParamLimits

0xa3bd,	// (0x0001a7cb) list_tmo_note_info_text_pane

0xa43e,	// (0x0001a84c) list_tmo_link_pane

0xa44b,	// (0x0001a859) scroll_pane_cp20

0xa458,	// (0x0001a866) list_single_tmo_link_pane_ParamLimits

0xa458,	// (0x0001a866) list_single_tmo_link_pane

0xa468,	// (0x0001a876) list_single_tmo_link_pane_t1

0xa476,	// (0x0001a884) list_tmo_note_info_text_pane_t1_ParamLimits

0xa476,	// (0x0001a884) list_tmo_note_info_text_pane_t1

0xcfc9,	// (0x0001d3d7) aid_size_touch_scroll_bar_cp01_ParamLimits

0xcfc9,	// (0x0001d3d7) aid_size_touch_scroll_bar_cp01

0xcf38,	// (0x0001d346) aid_size_touch_slider_marker

0xb756,	// (0x0001bb64) popup_settings_window_ParamLimits

0xb756,	// (0x0001bb64) popup_settings_window

0x4384,	// (0x00014792) popup_candi_list_indi_window

0x43d4,	// (0x000147e2) aid_touch_navi_pane_ParamLimits

0x15aa,	// (0x000119b8) rs_clock_indi_pane

0x15b3,	// (0x000119c1) sctrl_sk_bottom_pane_ParamLimits

0x15c4,	// (0x000119d2) sctrl_sk_top_pane_ParamLimits

0x16bf,	// (0x00011acd) popup_fep_tooltip_window

0x9da0,	// (0x0001a1ae) aid_size_cell_widget_grid_ParamLimits

0x9e15,	// (0x0001a223) cell_ai5_widget_pane_g1_ParamLimits

0x9e15,	// (0x0001a223) cell_ai5_widget_pane_g1

0x9e78,	// (0x0001a286) cell_ai5_widget_pane_g6_ParamLimits

0x9e84,	// (0x0001a292) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe09,	// (0x00020217) cell_ai5_widget_pane_g_ParamLimits

0xfe09,	// (0x00020217) cell_ai5_widget_pane_g

0x9ff4,	// (0x0001a402) cell_ai5_widget_pane_t10_ParamLimits

0x9ff4,	// (0x0001a402) cell_ai5_widget_pane_t10

0xa037,	// (0x0001a445) grid_ai5_widget_pane_ParamLimits

0xa0cf,	// (0x0001a4dd) cell_contacts_ai5_widget_pane_ParamLimits

0xa0cf,	// (0x0001a4dd) cell_contacts_ai5_widget_pane

0xa2b1,	// (0x0001a6bf) popup_discreet_window_t3_ParamLimits

0xa2b1,	// (0x0001a6bf) popup_discreet_window_t3

0xc659,	// (0x0001ca67) popup_fshwr2_char_preview_window_ParamLimits

0xc659,	// (0x0001ca67) popup_fshwr2_char_preview_window

0xf163,	// (0x0001f571) tmo_note_info_pane_t1

0xf178,	// (0x0001f586) tmo_note_info_pane_t2

0xf18f,	// (0x0001f59d) tmo_note_info_pane_t3

0xa41a,	// (0x0001a828) tmo_note_info_pane_t4

0xa42c,	// (0x0001a83a) tmo_note_info_pane_t5

0x0004,

0xfe9a,	// (0x000202a8) tmo_note_info_pane_t

0xa43e,	// (0x0001a84c) list_tmo_link_pane_ParamLimits

0xa44b,	// (0x0001a859) scroll_pane_cp20_ParamLimits

0xf416,	// (0x0001f824) bg_popup_fep_char_preview_window_cp01

0xf1a4,	// (0x0001f5b2) popup_fshwr2_char_preview_window_t1

0xa49d,	// (0x0001a8ab) popup_candi_list_indi_window_g1

0xa4a6,	// (0x0001a8b4) bg_cell_contacts_ai5_widget_pane

0xa4b2,	// (0x0001a8c0) cell_contacts_ai5_widget_pane_g1

0x7c85,	// (0x00018093) cell_contacts_ai5_widget_pane_g2

0xa4c7,	// (0x0001a8d5) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea5,	// (0x000202b3) cell_contacts_ai5_widget_pane_g

0xa4d3,	// (0x0001a8e1) cell_contacts_ai5_widget_pane_t1

0x315c,	// (0x0001356a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa54a,	// (0x0001a958) settings_container_pane

0x4024,	// (0x00014432) listscroll_set_pane_copy1

0x67e9,	// (0x00016bf7) scroll_pane_cp121_copy1

0x4daf,	// (0x000151bd) set_content_pane_copy1

0xa556,	// (0x0001a964) aid_height_set_list_copy1_ParamLimits

0xa556,	// (0x0001a964) aid_height_set_list_copy1

0x5d7e,	// (0x0001618c) aid_size_parent_copy1_ParamLimits

0x5d7e,	// (0x0001618c) aid_size_parent_copy1

0xa562,	// (0x0001a970) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa562,	// (0x0001a970) button_value_adjust_pane_cp6_copy1

0x4350,	// (0x0001475e) list_highlight_pane_cp2_copy1_ParamLimits

0x4350,	// (0x0001475e) list_highlight_pane_cp2_copy1

0xa576,	// (0x0001a984) list_set_pane_copy1_ParamLimits

0xa576,	// (0x0001a984) list_set_pane_copy1

0xa4e5,	// (0x0001a8f3) main_pane_set_t1_copy1_ParamLimits

0xa4e5,	// (0x0001a8f3) main_pane_set_t1_copy1

0xa51f,	// (0x0001a92d) main_pane_set_t2_copy1_ParamLimits

0xa51f,	// (0x0001a92d) main_pane_set_t2_copy1

0xa623,	// (0x0001aa31) main_pane_set_t3_copy1

0xa631,	// (0x0001aa3f) main_pane_set_t4_copy1

0xa53e,	// (0x0001a94c) set_content_pane_g1_copy1_ParamLimits

0xa53e,	// (0x0001a94c) set_content_pane_g1_copy1

0xa63f,	// (0x0001aa4d) setting_code_pane_copy1

0xa647,	// (0x0001aa55) setting_slider_graphic_pane_copy1

0xa647,	// (0x0001aa55) setting_slider_pane_copy1

0xa64f,	// (0x0001aa5d) setting_text_pane_copy1

0xa64f,	// (0x0001aa5d) setting_volume_pane_copy1

0xa63f,	// (0x0001aa4d) settings_code_pane_cp2_copy1

0xa657,	// (0x0001aa65) settings_code_pane_cp_copy1_ParamLimits

0xa657,	// (0x0001aa65) settings_code_pane_cp_copy1

0x1fc5,	// (0x000123d3) volume_set_pane_copy1

0xa66b,	// (0x0001aa79) volume_set_pane_g10_copy1

0xa673,	// (0x0001aa81) volume_set_pane_g1_copy1

0xa67b,	// (0x0001aa89) volume_set_pane_g2_copy1

0xa683,	// (0x0001aa91) volume_set_pane_g3_copy1

0xa68b,	// (0x0001aa99) volume_set_pane_g4_copy1

0xa693,	// (0x0001aaa1) volume_set_pane_g5_copy1

0xa69b,	// (0x0001aaa9) volume_set_pane_g6_copy1

0xa6a3,	// (0x0001aab1) volume_set_pane_g7_copy1

0xa6ab,	// (0x0001aab9) volume_set_pane_g8_copy1

0xa6b3,	// (0x0001aac1) volume_set_pane_g9_copy1

0x235e,	// (0x0001276c) bg_set_opt_pane_cp_copy1_ParamLimits

0x235e,	// (0x0001276c) bg_set_opt_pane_cp_copy1

0x1fcd,	// (0x000123db) setting_slider_pane_t1_copy1_ParamLimits

0x1fcd,	// (0x000123db) setting_slider_pane_t1_copy1

0x1fec,	// (0x000123fa) setting_slider_pane_t2_copy1_ParamLimits

0x1fec,	// (0x000123fa) setting_slider_pane_t2_copy1

0x2006,	// (0x00012414) setting_slider_pane_t3_copy1_ParamLimits

0x2006,	// (0x00012414) setting_slider_pane_t3_copy1

0x201e,	// (0x0001242c) slider_set_pane_copy1_ParamLimits

0x201e,	// (0x0001242c) slider_set_pane_copy1

0x328b,	// (0x00013699) set_opt_bg_pane_g1_copy2

0x3293,	// (0x000136a1) set_opt_bg_pane_g2_copy2

0xa6bb,	// (0x0001aac9) set_opt_bg_pane_g3_copy2

0x32a3,	// (0x000136b1) set_opt_bg_pane_g4_copy2

0x32ab,	// (0x000136b9) set_opt_bg_pane_g5_copy2

0x32b3,	// (0x000136c1) set_opt_bg_pane_g6_copy2

0xa6c5,	// (0x0001aad3) set_opt_bg_pane_g7_copy2

0xa6cd,	// (0x0001aadb) set_opt_bg_pane_g8_copy2

0xa6d7,	// (0x0001aae5) set_opt_bg_pane_g9_copy2

0x2034,	// (0x00012442) aid_size_touch_slider_mark_copy1_ParamLimits

0x2034,	// (0x00012442) aid_size_touch_slider_mark_copy1

0xa6e1,	// (0x0001aaef) slider_set_pane_g1_copy1

0x2048,	// (0x00012456) slider_set_pane_g2_copy1

0x0fdf,	// (0x000113ed) slider_set_pane_g3_copy1_ParamLimits

0x0fdf,	// (0x000113ed) slider_set_pane_g3_copy1

0x0ff3,	// (0x00011401) slider_set_pane_g4_copy1_ParamLimits

0x0ff3,	// (0x00011401) slider_set_pane_g4_copy1

0x100b,	// (0x00011419) slider_set_pane_g5_copy1_ParamLimits

0x100b,	// (0x00011419) slider_set_pane_g5_copy1

0x0fdf,	// (0x000113ed) slider_set_pane_g6_copy1_ParamLimits

0x0fdf,	// (0x000113ed) slider_set_pane_g6_copy1

0x2050,	// (0x0001245e) slider_set_pane_g7_copy1_ParamLimits

0x2050,	// (0x0001245e) slider_set_pane_g7_copy1

0x227e,	// (0x0001268c) bg_set_opt_pane_cp2_copy1

0xa6ea,	// (0x0001aaf8) setting_slider_graphic_pane_g1_copy1

0xa6f3,	// (0x0001ab01) setting_slider_graphic_pane_t1_copy1

0xa703,	// (0x0001ab11) setting_slider_graphic_pane_t2_copy1

0xa713,	// (0x0001ab21) slider_set_pane_cp_copy1

0xa723,	// (0x0001ab31) input_focus_pane_cp1_copy1

0xa72c,	// (0x0001ab3a) list_set_text_pane_copy1

0xa734,	// (0x0001ab42) setting_text_pane_g1_copy1

0x23b7,	// (0x000127c5) set_text_pane_t1_copy1

0xa723,	// (0x0001ab31) input_focus_pane_cp2_copy1

0xa734,	// (0x0001ab42) setting_code_pane_g1_copy1

0xa73d,	// (0x0001ab4b) setting_code_pane_t1_copy1

0x6611,	// (0x00016a1f) list_set_graphic_pane_copy1

0x227e,	// (0x0001268c) bg_set_opt_pane_cp4_copy1

0x3d2d,	// (0x0001413b) list_set_graphic_pane_g1_copy1_ParamLimits

0x3d2d,	// (0x0001413b) list_set_graphic_pane_g1_copy1

0xa74b,	// (0x0001ab59) list_set_graphic_pane_g2_copy1

0x3d45,	// (0x00014153) list_set_graphic_pane_t1_copy1_ParamLimits

0x3d45,	// (0x00014153) list_set_graphic_pane_t1_copy1

0x7400,	// (0x0001780e) rs_clock_indi_pane_g1

0xa753,	// (0x0001ab61) rs_clock_indi_pane_t1

0xa761,	// (0x0001ab6f) rs_indi_pane

0xa769,	// (0x0001ab77) rs_indi_pane_g1

0xa772,	// (0x0001ab80) rs_indi_pane_g2

0xa77b,	// (0x0001ab89) rs_indi_pane_g3

0x0002,

0xfeac,	// (0x000202ba) rs_indi_pane_g

0x4024,	// (0x00014432) bg_popup_preview_window_pane_cp03

0xa784,	// (0x0001ab92) popup_fep_tooltip_window_t1

0x829a,	// (0x000186a8) popup_note2_window_g2_ParamLimits

0x829a,	// (0x000186a8) popup_note2_window_g2

0x0001,

0xfc39,	// (0x00020047) popup_note2_window_g_ParamLimits

0xfc39,	// (0x00020047) popup_note2_window_g

0x8884,	// (0x00018c92) bg_popup_sub_pane_cp11_ParamLimits

0x8891,	// (0x00018c9f) cell_ai3_links_pane_g1_ParamLimits

0x88a8,	// (0x00018cb6) cell_ai3_links_pane_t1

0x23b7,	// (0x000127c5) set_text_pane_t1_copy1_ParamLimits

0x3f38,	// (0x00014346) cell_graphic_popup_pane_cp2_ParamLimits

0x3f38,	// (0x00014346) cell_graphic_popup_pane_cp2

0xa792,	// (0x0001aba0) cell_graphic_popup_pane_g1_cp2

0x2950,	// (0x00012d5e) cell_graphic_popup_pane_g2_cp2

0xa79a,	// (0x0001aba8) cell_graphic_popup_pane_g3_cp2

0xa7a2,	// (0x0001abb0) cell_graphic_popup_pane_t2_cp2

0x2961,	// (0x00012d6f) grid_highlight_pane_cp3_cp2

0x368f,	// (0x00013a9d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x315c,	// (0x0001356a) main_tmo_pane_ParamLimits

0xe4ae,	// (0x0001e8bc) popup_tmo_big_image_note_window

0x9e04,	// (0x0001a212) cell_ai5_widget_list_pane

0x9e0c,	// (0x0001a21a) cell_ai5_widget_lrg_icon_pane

0xf163,	// (0x0001f571) tmo_note_info_pane_t1_ParamLimits

0xf178,	// (0x0001f586) tmo_note_info_pane_t2_ParamLimits

0xf18f,	// (0x0001f59d) tmo_note_info_pane_t3_ParamLimits

0xa41a,	// (0x0001a828) tmo_note_info_pane_t4_ParamLimits

0xa42c,	// (0x0001a83a) tmo_note_info_pane_t5_ParamLimits

0xfe9a,	// (0x000202a8) tmo_note_info_pane_t_ParamLimits

0xa54a,	// (0x0001a958) settings_container_pane_ParamLimits

0xa71b,	// (0x0001ab29) indicator_popup_pane_cp5

0xa71b,	// (0x0001ab29) indicator_popup_pane_cp6

0x6611,	// (0x00016a1f) list_set_graphic_pane_copy1_ParamLimits

0xeb9e,	// (0x0001efac) bg_popup_window_pane_cp23

0xa7b0,	// (0x0001abbe) popup_tmo_big_image_note_window_g1

0xa7ba,	// (0x0001abc8) popup_tmo_big_image_note_window_t1

0xa7ca,	// (0x0001abd8) popup_tmo_big_image_note_window_t2

0xa7da,	// (0x0001abe8) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb3,	// (0x000202c1) popup_tmo_big_image_note_window_t

0x7400,	// (0x0001780e) cell_ai5_widget_lrg_icon_pane_g1

0xa7ea,	// (0x0001abf8) cell_ai5_widget_lrg_icon_pane_t1

0xa7f8,	// (0x0001ac06) cell_ai5_widget_list_row_pane_ParamLimits

0xa7f8,	// (0x0001ac06) cell_ai5_widget_list_row_pane

0xa80f,	// (0x0001ac1d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa80f,	// (0x0001ac1d) cell_ai5_widget_list_row_pane_g1

0xa81c,	// (0x0001ac2a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa81c,	// (0x0001ac2a) cell_ai5_widget_list_row_pane_t1

0xa84d,	// (0x0001ac5b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa84d,	// (0x0001ac5b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeba,	// (0x000202c8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeba,	// (0x000202c8) cell_ai5_widget_list_row_pane_t

0xf416,	// (0x0001f824) main_fep_vtchi_ss_pane

0xa89d,	// (0x0001acab) popup_fep_char_pre_window

0xa8a5,	// (0x0001acb3) popup_fep_ituss_window

0xf1dc,	// (0x0001f5ea) popup_fep_vkbss_window

0x4350,	// (0x0001475e) grid_vkbss_keypad_pane_ParamLimits

0x4350,	// (0x0001475e) grid_vkbss_keypad_pane

0xa911,	// (0x0001ad1f) ituss_keypad_pane

0x2070,	// (0x0001247e) aid_vkbss_key_offset_ParamLimits

0x2070,	// (0x0001247e) aid_vkbss_key_offset

0xc772,	// (0x0001cb80) cell_vkbss_key_pane_ParamLimits

0xc772,	// (0x0001cb80) cell_vkbss_key_pane

0xa91d,	// (0x0001ad2b) bg_cell_vkbss_key_g1_ParamLimits

0xa91d,	// (0x0001ad2b) bg_cell_vkbss_key_g1

0xf1e9,	// (0x0001f5f7) cell_vkbss_key_3p_pane_ParamLimits

0xf1e9,	// (0x0001f5f7) cell_vkbss_key_3p_pane

0xf21f,	// (0x0001f62d) cell_vkbss_key_g1_ParamLimits

0xf21f,	// (0x0001f62d) cell_vkbss_key_g1

0xf255,	// (0x0001f663) cell_vkbss_key_t1_ParamLimits

0xf255,	// (0x0001f663) cell_vkbss_key_t1

0x20da,	// (0x000124e8) cell_ituss_key_pane_ParamLimits

0x20da,	// (0x000124e8) cell_ituss_key_pane

0xa9f1,	// (0x0001adff) bg_cell_ituss_key_g1_ParamLimits

0xa9f1,	// (0x0001adff) bg_cell_ituss_key_g1

0xa9fd,	// (0x0001ae0b) cell_ituss_key_pane_g1_ParamLimits

0xa9fd,	// (0x0001ae0b) cell_ituss_key_pane_g1

0x20eb,	// (0x000124f9) cell_ituss_key_pane_g2_ParamLimits

0x20eb,	// (0x000124f9) cell_ituss_key_pane_g2

0x0005,

0xfec1,	// (0x000202cf) cell_ituss_key_pane_g_ParamLimits

0xfec1,	// (0x000202cf) cell_ituss_key_pane_g

0x216f,	// (0x0001257d) cell_ituss_key_t1_ParamLimits

0x216f,	// (0x0001257d) cell_ituss_key_t1

0x21a9,	// (0x000125b7) cell_ituss_key_t2_ParamLimits

0x21a9,	// (0x000125b7) cell_ituss_key_t2

0x21db,	// (0x000125e9) cell_ituss_key_t3_ParamLimits

0x21db,	// (0x000125e9) cell_ituss_key_t3

0x220c,	// (0x0001261a) cell_ituss_key_t4_ParamLimits

0x220c,	// (0x0001261a) cell_ituss_key_t4

0x0004,

0xfece,	// (0x000202dc) cell_ituss_key_t_ParamLimits

0xfece,	// (0x000202dc) cell_ituss_key_t

0xf2b1,	// (0x0001f6bf) cell_vkbss_key_3p_pane_g1

0xf2b9,	// (0x0001f6c7) cell_vkbss_key_3p_pane_g2

0xf2c1,	// (0x0001f6cf) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed9,	// (0x000202e7) cell_vkbss_key_3p_pane_g

0x4024,	// (0x00014432) bg_popup_fep_char_preview_window_cp02

0xaa3b,	// (0x0001ae49) popup_fep_char_pre_window_t1

0xf0b3,	// (0x0001f4c1) main_ai5_sk_pane

0xa4a6,	// (0x0001a8b4) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa4b2,	// (0x0001a8c0) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7c85,	// (0x00018093) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa4c7,	// (0x0001a8d5) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea5,	// (0x000202b3) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa4d3,	// (0x0001a8e1) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x315c,	// (0x0001356a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf2c9,	// (0x0001f6d7) main_ai5_sk_pane_g1

0x4e4b,	// (0x00015259) popup_query_code_window_g1

0xf1cd,	// (0x0001f5db) popup_fep_vkb_icf_pane

0xa8e8,	// (0x0001acf6) popup_fep_vtchi_icf_pane

0xaa52,	// (0x0001ae60) bg_icf_pane

0xaa52,	// (0x0001ae60) list_vkb_icf_pane

0xaa5e,	// (0x0001ae6c) bg_icf_pane_cp01

0xaa71,	// (0x0001ae7f) vtchi_icf_list_pane

0xf31e,	// (0x0001f72c) list_vkb_icf_pane_t1_ParamLimits

0xf31e,	// (0x0001f72c) list_vkb_icf_pane_t1

0xaaef,	// (0x0001aefd) vtchi_icf_list_pane_t1_ParamLimits

0xaaef,	// (0x0001aefd) vtchi_icf_list_pane_t1

0xa8a5,	// (0x0001acb3) popup_fep_ituss_window_ParamLimits

0xa8e8,	// (0x0001acf6) popup_fep_vtchi_icf_pane_ParamLimits

0xa911,	// (0x0001ad1f) ituss_keypad_pane_ParamLimits

0x2066,	// (0x00012474) ituss_sks_pane

0xaa52,	// (0x0001ae60) bg_icf_pane_ParamLimits

0xf1b2,	// (0x0001f5c0) icf_edit_indi_pane_ParamLimits

0xf1b2,	// (0x0001f5c0) icf_edit_indi_pane

0xaa52,	// (0x0001ae60) list_vkb_icf_pane_ParamLimits

0xaa5e,	// (0x0001ae6c) bg_icf_pane_cp01_ParamLimits

0xa890,	// (0x0001ac9e) icf_edit_indi_pane_cp01_ParamLimits

0xa890,	// (0x0001ac9e) icf_edit_indi_pane_cp01

0xaa71,	// (0x0001ae7f) vtchi_query_pane

0x9c09,	// (0x0001a017) icf_edit_indi_pane_g1_ParamLimits

0x9c09,	// (0x0001a017) icf_edit_indi_pane_g1

0xf335,	// (0x0001f743) icf_edit_indi_pane_g2_ParamLimits

0xf335,	// (0x0001f743) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x00020312) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x00020312) icf_edit_indi_pane_g

0xf349,	// (0x0001f757) icf_edit_indi_pane_t1

0xab0d,	// (0x0001af1b) bg_input_focus_pane_cp042

0x2b34,	// (0x00012f42) vtchi_button_pane

0xab16,	// (0x0001af24) vtchi_query_pane_t1

0xab24,	// (0x0001af32) vtchi_query_pane_t2

0xab32,	// (0x0001af40) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x00020301) vtchi_query_pane_t

0xf416,	// (0x0001f824) bg_button_pane_cp13

0xab40,	// (0x0001af4e) vtchi_button_pane_g1

0x224f,	// (0x0001265d) ituss_sks_pane_g1

0x225a,	// (0x00012668) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x00020308) ituss_sks_pane_g

0xab48,	// (0x0001af56) ituss_sks_pane_t1

0xab56,	// (0x0001af64) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0002030d) ituss_sks_pane_t

0x6e33,	// (0x00017241) indicator_nsta_pane_cp_g1

0x6e3c,	// (0x0001724a) indicator_nsta_pane_cp_g2

0x6e44,	// (0x00017252) indicator_nsta_pane_cp_g3

0x6e4c,	// (0x0001725a) indicator_nsta_pane_cp_g4

0x6e3c,	// (0x0001724a) indicator_nsta_pane_cp_g5

0x6e44,	// (0x00017252) indicator_nsta_pane_cp_g6

0x0005,

0xfa77,	// (0x0001fe85) indicator_nsta_pane_cp_g

0xeeca,	// (0x0001f2d8) cell_graphic2_pane_t2_ParamLimits

0xeeca,	// (0x0001f2d8) cell_graphic2_pane_t2

0x0001,

0xfd90,	// (0x0002019e) cell_graphic2_pane_t_ParamLimits

0xfd90,	// (0x0002019e) cell_graphic2_pane_t

0xeeff,	// (0x0001f30d) cell_graphic2_control_pane_t1

0xd186,	// (0x0001d594) signal_pane_g3_ParamLimits

0xd186,	// (0x0001d594) signal_pane_g3

0xd19a,	// (0x0001d5a8) signal_pane_g4_ParamLimits

0xd19a,	// (0x0001d5a8) signal_pane_g4

0xa85f,	// (0x0001ac6d) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa85f,	// (0x0001ac6d) cell_ai5_widget_list_row_pane_t3

0xaa11,	// (0x0001ae1f) cell_ituss_key_pane_t1_ParamLimits

0xaa11,	// (0x0001ae1f) cell_ituss_key_pane_t1

0x4a4b,	// (0x00014e59) form_field_data_wide_pane_vc_t2_ParamLimits

0x4a4b,	// (0x00014e59) form_field_data_wide_pane_vc_t2

0x4a5f,	// (0x00014e6d) form_field_data_wide_pane_vc_t3_ParamLimits

0x4a5f,	// (0x00014e6d) form_field_data_wide_pane_vc_t3

0x0002,

0xf7da,	// (0x0001fbe8) form_field_data_wide_pane_vc_t_ParamLimits

0xf7da,	// (0x0001fbe8) form_field_data_wide_pane_vc_t

0x6add,	// (0x00016eeb) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6add,	// (0x00016eeb) form_field_slider_wide_pane_vc_t3

0x6bbb,	// (0x00016fc9) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6bbb,	// (0x00016fc9) form_field_popup_wide_pane_vc_t2

0x6bd2,	// (0x00016fe0) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6bd2,	// (0x00016fe0) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa66,	// (0x0001fe74) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa66,	// (0x0001fe74) form_field_popup_wide_pane_vc_t

0xc5c7,	// (0x0001c9d5) aid_fshwr2_btn_pane_ParamLimits

0xc5d7,	// (0x0001c9e5) aid_fshwr2_syb_pane_ParamLimits

0xc5eb,	// (0x0001c9f9) aid_fshwr2_txt_pane_ParamLimits

0x164f,	// (0x00011a5d) fshwr2_bg_pane_ParamLimits

0xc5fb,	// (0x0001ca09) fshwr2_func_candi_pane_ParamLimits

0xc61b,	// (0x0001ca29) fshwr2_hwr_syb_pane_ParamLimits

0xc63d,	// (0x0001ca4b) fshwr2_icf_pane_ParamLimits

0x6a43,	// (0x00016e51) list_double_graphic_pane_vc_g4_ParamLimits

0x6a43,	// (0x00016e51) list_double_graphic_pane_vc_g4

0x210b,	// (0x00012519) cell_ituss_key_pane_g3_ParamLimits

0x210b,	// (0x00012519) cell_ituss_key_pane_g3

0x223d,	// (0x0001264b) cell_ituss_key_t5_ParamLimits

0x223d,	// (0x0001264b) cell_ituss_key_t5

0xf1dc,	// (0x0001f5ea) popup_fep_vkbss_window_ParamLimits

0x9d97,	// (0x0001a1a5) aid_cell_ai5_quarter

0xf349,	// (0x0001f757) icf_edit_indi_pane_t1_ParamLimits

0x26a9,	// (0x00012ab7) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x26a9,	// (0x00012ab7) aid_tch_indicator_popup_pane_cp2

0x26bc,	// (0x00012aca) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x26bc,	// (0x00012aca) aid_tch_query_popup_data_pane_cp2

0x4df3,	// (0x00015201) aid_tch_query_popup_pane_ParamLimits

0x4df3,	// (0x00015201) aid_tch_query_popup_pane

0x4df3,	// (0x00015201) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x4df3,	// (0x00015201) aid_tch_query_popup_data_pane_cp1

0x4350,	// (0x0001475e) cell_fshwr2_syb_bg_pane_ParamLimits

0xc749,	// (0x0001cb57) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc75c,	// (0x0001cb6a) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1cd,	// (0x0001f5db) popup_fep_vkb_icf_pane_ParamLimits

0xc553,	// (0x0001c961) bg_popup_fep_char_preview_window_g10

0x9ecc,	// (0x0001a2da) cell_ai5_widget_pane_g11_ParamLimits

0x9ecc,	// (0x0001a2da) cell_ai5_widget_pane_g11

0x9ed8,	// (0x0001a2e6) cell_ai5_widget_pane_g12_ParamLimits

0x9ed8,	// (0x0001a2e6) cell_ai5_widget_pane_g12

0x9ee4,	// (0x0001a2f2) cell_ai5_widget_pane_g13_ParamLimits

0x9ee4,	// (0x0001a2f2) cell_ai5_widget_pane_g13

0xa013,	// (0x0001a421) cell_ai5_widget_pane_t11_ParamLimits

0xa013,	// (0x0001a421) cell_ai5_widget_pane_t11

0xa025,	// (0x0001a433) cell_ai5_widget_pane_t12_ParamLimits

0xa025,	// (0x0001a433) cell_ai5_widget_pane_t12

0x2117,	// (0x00012525) cell_ituss_key_pane_g4_ParamLimits

0x2117,	// (0x00012525) cell_ituss_key_pane_g4

0x2133,	// (0x00012541) cell_ituss_key_pane_g5_ParamLimits

0x2133,	// (0x00012541) cell_ituss_key_pane_g5

0x214f,	// (0x0001255d) cell_ituss_key_pane_g6_ParamLimits

0x214f,	// (0x0001255d) cell_ituss_key_pane_g6

0x4898,	// (0x00014ca6) bg_icf_pane_g1

0xf2d2,	// (0x0001f6e0) bg_icf_pane_g2

0xf2dc,	// (0x0001f6ea) bg_icf_pane_g3

0xf2e4,	// (0x0001f6f2) bg_icf_pane_g4

0xf2ee,	// (0x0001f6fc) bg_icf_pane_g5

0xf2f8,	// (0x0001f706) bg_icf_pane_g6

0xf302,	// (0x0001f710) bg_icf_pane_g7

0xf30a,	// (0x0001f718) bg_icf_pane_g8

0xf314,	// (0x0001f722) bg_icf_pane_g9

0x0008,

0xfee0,	// (0x000202ee) bg_icf_pane_g

0xa8fe,	// (0x0001ad0c) popup_hyb_candi_window_ParamLimits

0xa8fe,	// (0x0001ad0c) popup_hyb_candi_window

0x49ba,	// (0x00014dc8) bg_popup_sub_pane_cp01_ParamLimits

0x49ba,	// (0x00014dc8) bg_popup_sub_pane_cp01

0xab91,	// (0x0001af9f) entry_hyb_candi_pane_ParamLimits

0xab91,	// (0x0001af9f) entry_hyb_candi_pane

0xaba0,	// (0x0001afae) grid_hyb_candi_pane_ParamLimits

0xaba0,	// (0x0001afae) grid_hyb_candi_pane

0xabb5,	// (0x0001afc3) grid_hyb_phrase_pane_ParamLimits

0xabb5,	// (0x0001afc3) grid_hyb_phrase_pane

0xabc4,	// (0x0001afd2) cell_hyb_candi_pane_ParamLimits

0xabc4,	// (0x0001afd2) cell_hyb_candi_pane

0xabe7,	// (0x0001aff5) cell_hyb_candi_scroll_pane

0x3974,	// (0x00013d82) cell_hyb_candi_pane_g1

0xabf0,	// (0x0001affe) cell_hyb_candi_pane_t1

0xabfe,	// (0x0001b00c) cell_hyb_phrase_pane

0x3974,	// (0x00013d82) cell_hyb_phrase_pane_g1

0xac07,	// (0x0001b015) cell_hyb_phrase_pane_t1

0xac15,	// (0x0001b023) entry_hyb_candi_pane_t1

0x4024,	// (0x00014432) input_focus_pane_cp06

0xac23,	// (0x0001b031) cell_hyb_candi_scroll_pane_g1

0xac2b,	// (0x0001b039) cell_hyb_candi_scroll_pane_g1_aid

0xac33,	// (0x0001b041) cell_hyb_candi_scroll_pane_g2

0xac3b,	// (0x0001b049) cell_hyb_candi_scroll_pane_g2_aid

0xac43,	// (0x0001b051) cell_hyb_candi_scroll_pane_g3

0xac4b,	// (0x0001b059) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
