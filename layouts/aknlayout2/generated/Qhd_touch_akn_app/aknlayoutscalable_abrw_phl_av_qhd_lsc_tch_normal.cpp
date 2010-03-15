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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000f84d };

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
0xc5ad,	// (0x0001bdfa) Screen

0xc5b9,	// (0x0001be06) application_window_ParamLimits

0xc5b9,	// (0x0001be06) application_window

0x229f,	// (0x00011aec) screen_g1

0xb50d,	// (0x0001ad5a) area_bottom_pane_ParamLimits

0xb50d,	// (0x0001ad5a) area_bottom_pane

0x0027,	// (0x0000f874) area_top_pane_ParamLimits

0x0027,	// (0x0000f874) area_top_pane

0x00c5,	// (0x0000f912) main_pane_ParamLimits

0x00c5,	// (0x0000f912) main_pane

0x22a9,	// (0x00011af6) misc_graphics

0xd353,	// (0x0001cba0) battery_pane_ParamLimits

0xd353,	// (0x0001cba0) battery_pane

0x51de,	// (0x00014a2b) bg_status_flat_pane_g8

0x51e6,	// (0x00014a33) bg_status_flat_pane_g9

0x44ca,	// (0x00013d17) context_pane_ParamLimits

0x44ca,	// (0x00013d17) context_pane

0xd4be,	// (0x0001cd0b) navi_pane_ParamLimits

0xd4be,	// (0x0001cd0b) navi_pane

0xd536,	// (0x0001cd83) signal_pane_ParamLimits

0xd536,	// (0x0001cd83) signal_pane

0x0008,

0xf875,	// (0x0001f0c2) bg_status_flat_pane_g

0xd5c6,	// (0x0001ce13) status_pane_g1_ParamLimits

0xd5c6,	// (0x0001ce13) status_pane_g1

0xd5dc,	// (0x0001ce29) status_pane_g2_ParamLimits

0xd5dc,	// (0x0001ce29) status_pane_g2

0x46e3,	// (0x00013f30) status_pane_g3_ParamLimits

0x46e3,	// (0x00013f30) status_pane_g3

0x0004,

0xf7a1,	// (0x0001efee) status_pane_g_ParamLimits

0xf7a1,	// (0x0001efee) status_pane_g

0xd5e8,	// (0x0001ce35) title_pane_ParamLimits

0xd5e8,	// (0x0001ce35) title_pane

0xd64b,	// (0x0001ce98) uni_indicator_pane_ParamLimits

0xd64b,	// (0x0001ce98) uni_indicator_pane

0x4320,	// (0x00013b6d) bg_list_pane_ParamLimits

0x4320,	// (0x00013b6d) bg_list_pane

0xd292,	// (0x0001cadf) find_pane

0xd29a,	// (0x0001cae7) listscroll_app_pane_ParamLimits

0xd29a,	// (0x0001cae7) listscroll_app_pane

0x4354,	// (0x00013ba1) listscroll_form_pane

0xb800,	// (0x0001b04d) listscroll_gen_pane_ParamLimits

0xb800,	// (0x0001b04d) listscroll_gen_pane

0x4354,	// (0x00013ba1) listscroll_set_pane

0x5da9,	// (0x000155f6) main_idle_act_pane

0x4026,	// (0x00013873) main_idle_trad_pane

0x4026,	// (0x00013873) main_list_empty_pane

0x436e,	// (0x00013bbb) main_midp_pane

0x437a,	// (0x00013bc7) main_pane_g1_ParamLimits

0x437a,	// (0x00013bc7) main_pane_g1

0xb814,	// (0x0001b061) popup_ai_message_window_ParamLimits

0xb814,	// (0x0001b061) popup_ai_message_window

0xb8a5,	// (0x0001b0f2) popup_fep_china_uni_window_ParamLimits

0xb8a5,	// (0x0001b0f2) popup_fep_china_uni_window

0x0ab2,	// (0x000102ff) popup_fep_japan_candidate_window_ParamLimits

0x0ab2,	// (0x000102ff) popup_fep_japan_candidate_window

0x0ad2,	// (0x0001031f) popup_fep_japan_predictive_window_ParamLimits

0x0ad2,	// (0x0001031f) popup_fep_japan_predictive_window

0xb901,	// (0x0001b14e) popup_find_window

0xb91e,	// (0x0001b16b) popup_grid_graphic_window_ParamLimits

0xb91e,	// (0x0001b16b) popup_grid_graphic_window

0x0b37,	// (0x00010384) popup_large_graphic_colour_window

0xb9b6,	// (0x0001b203) popup_menu_window_ParamLimits

0xb9b6,	// (0x0001b203) popup_menu_window

0xbb88,	// (0x0001b3d5) popup_note_image_window

0xbb4e,	// (0x0001b39b) popup_note_wait_window_ParamLimits

0xbb4e,	// (0x0001b39b) popup_note_wait_window

0xbba0,	// (0x0001b3ed) popup_note_window_ParamLimits

0xbba0,	// (0x0001b3ed) popup_note_window

0xbc46,	// (0x0001b493) popup_query_code_window_ParamLimits

0xbc46,	// (0x0001b493) popup_query_code_window

0x0d7f,	// (0x000105cc) popup_query_data_code_window_ParamLimits

0x0d7f,	// (0x000105cc) popup_query_data_code_window

0xbc80,	// (0x0001b4cd) popup_query_data_window_ParamLimits

0xbc80,	// (0x0001b4cd) popup_query_data_window

0xbd02,	// (0x0001b54f) popup_query_sat_info_window_ParamLimits

0xbd02,	// (0x0001b54f) popup_query_sat_info_window

0xbd99,	// (0x0001b5e6) popup_snote_single_graphic_window_ParamLimits

0xbd99,	// (0x0001b5e6) popup_snote_single_graphic_window

0xbd99,	// (0x0001b5e6) popup_snote_single_text_window_ParamLimits

0xbd99,	// (0x0001b5e6) popup_snote_single_text_window

0x0e06,	// (0x00010653) popup_sub_window_general

0x0f36,	// (0x00010783) popup_window_general_ParamLimits

0x0f36,	// (0x00010783) popup_window_general

0x4390,	// (0x00013bdd) power_save_pane

0xb68f,	// (0x0001aedc) control_pane_g1_ParamLimits

0xb68f,	// (0x0001aedc) control_pane_g1

0xb6b8,	// (0x0001af05) control_pane_g2_ParamLimits

0xb6b8,	// (0x0001af05) control_pane_g2

0x42e3,	// (0x00013b30) control_pane_g3_ParamLimits

0x42e3,	// (0x00013b30) control_pane_g3

0x0007,

0xf789,	// (0x0001efd6) control_pane_g_ParamLimits

0xf789,	// (0x0001efd6) control_pane_g

0xb6f9,	// (0x0001af46) control_pane_t1_ParamLimits

0xb6f9,	// (0x0001af46) control_pane_t1

0xb757,	// (0x0001afa4) control_pane_t2_ParamLimits

0xb757,	// (0x0001afa4) control_pane_t2

0x0002,

0xf79a,	// (0x0001efe7) control_pane_t_ParamLimits

0xf79a,	// (0x0001efe7) control_pane_t

0x4204,	// (0x00013a51) navi_navi_volume_pane_cp1

0x420d,	// (0x00013a5a) status_small_icon_pane

0x4215,	// (0x00013a62) status_small_pane_g1_ParamLimits

0x4215,	// (0x00013a62) status_small_pane_g1

0x4249,	// (0x00013a96) status_small_pane_g2_ParamLimits

0x4249,	// (0x00013a96) status_small_pane_g2

0x4255,	// (0x00013aa2) status_small_pane_g3_ParamLimits

0x4255,	// (0x00013aa2) status_small_pane_g3

0x4261,	// (0x00013aae) status_small_pane_g4_ParamLimits

0x4261,	// (0x00013aae) status_small_pane_g4

0x426d,	// (0x00013aba) status_small_pane_g5_ParamLimits

0x426d,	// (0x00013aba) status_small_pane_g5

0x427c,	// (0x00013ac9) status_small_pane_g6_ParamLimits

0x427c,	// (0x00013ac9) status_small_pane_g6

0x0007,

0xf778,	// (0x0001efc5) status_small_pane_g_ParamLimits

0xf778,	// (0x0001efc5) status_small_pane_g

0x42ac,	// (0x00013af9) status_small_pane_t1

0x42cf,	// (0x00013b1c) status_small_wait_pane_ParamLimits

0x42cf,	// (0x00013b1c) status_small_wait_pane

0xcfd6,	// (0x0001c823) aid_levels_signal_ParamLimits

0xcfd6,	// (0x0001c823) aid_levels_signal

0xcfee,	// (0x0001c83b) signal_pane_g1_ParamLimits

0xcfee,	// (0x0001c83b) signal_pane_g1

0xd009,	// (0x0001c856) signal_pane_g2_ParamLimits

0xd009,	// (0x0001c856) signal_pane_g2

0x0003,

0xf709,	// (0x0001ef56) signal_pane_g_ParamLimits

0xf709,	// (0x0001ef56) signal_pane_g

0x3a76,	// (0x000132c3) context_pane_g1

0xc5c9,	// (0x0001be16) title_pane_g1

0xc600,	// (0x0001be4d) title_pane_t1

0x2351,	// (0x00011b9e) title_pane_t2

0x2377,	// (0x00011bc4) title_pane_t3

0x0002,

0xf55d,	// (0x0001edaa) title_pane_t

0xd673,	// (0x0001cec0) aid_levels_battery_ParamLimits

0xd673,	// (0x0001cec0) aid_levels_battery

0xd68f,	// (0x0001cedc) battery_pane_g1_ParamLimits

0xd68f,	// (0x0001cedc) battery_pane_g1

0xd6ac,	// (0x0001cef9) battery_pane_g2_ParamLimits

0xd6ac,	// (0x0001cef9) battery_pane_g2

0x0001,

0xf7ac,	// (0x0001eff9) battery_pane_g_ParamLimits

0xf7ac,	// (0x0001eff9) battery_pane_g

0xd96f,	// (0x0001d1bc) uni_indicator_pane_g1

0xd984,	// (0x0001d1d1) uni_indicator_pane_g2

0x5b4b,	// (0x00015398) uni_indicator_pane_g3

0x0005,

0xf91d,	// (0x0001f16a) uni_indicator_pane_g

0x3e98,	// (0x000136e5) navi_icon_pane_ParamLimits

0x3e98,	// (0x000136e5) navi_icon_pane

0x3de1,	// (0x0001362e) navi_midp_pane

0x3eb4,	// (0x00013701) navi_navi_pane

0x3ebe,	// (0x0001370b) navi_text_pane_ParamLimits

0x3ebe,	// (0x0001370b) navi_text_pane

0x229f,	// (0x00011aec) status_small_wait_pane_g1

0x27c0,	// (0x0001200d) status_small_wait_pane_g2

0x0001,

0xf918,	// (0x0001f165) status_small_wait_pane_g

0xd8d6,	// (0x0001d123) navi_navi_icon_text_pane

0xd8de,	// (0x0001d12b) navi_navi_pane_g1_ParamLimits

0xd8de,	// (0x0001d12b) navi_navi_pane_g1

0xd8f0,	// (0x0001d13d) navi_navi_pane_g2_ParamLimits

0xd8f0,	// (0x0001d13d) navi_navi_pane_g2

0x0001,

0xf8e6,	// (0x0001f133) navi_navi_pane_g_ParamLimits

0xf8e6,	// (0x0001f133) navi_navi_pane_g

0x5871,	// (0x000150be) navi_navi_tabs_pane

0xd902,	// (0x0001d14f) navi_navi_text_pane

0xd8d6,	// (0x0001d123) navi_navi_volume_pane

0x5821,	// (0x0001506e) navi_text_pane_t1

0x5815,	// (0x00015062) navi_icon_pane_g1

0x5768,	// (0x00014fb5) navi_navi_text_pane_t1

0xc062,	// (0x0001b8af) navi_navi_volume_pane_g1

0xc06a,	// (0x0001b8b7) volume_small_pane

0xd81e,	// (0x0001d06b) navi_navi_icon_text_pane_g1

0xd826,	// (0x0001d073) navi_navi_icon_text_pane_t1

0x3eb4,	// (0x00013701) navi_tabs_2_long_pane

0x3eb4,	// (0x00013701) navi_tabs_2_pane

0x3eb4,	// (0x00013701) navi_tabs_3_long_pane

0x3eb4,	// (0x00013701) navi_tabs_3_pane

0x3eb4,	// (0x00013701) navi_tabs_4_pane

0xc042,	// (0x0001b88f) tabs_2_active_pane_ParamLimits

0xc042,	// (0x0001b88f) tabs_2_active_pane

0xc052,	// (0x0001b89f) tabs_2_passive_pane_ParamLimits

0xc052,	// (0x0001b89f) tabs_2_passive_pane

0xc010,	// (0x0001b85d) tabs_3_active_pane_ParamLimits

0xc010,	// (0x0001b85d) tabs_3_active_pane

0xc020,	// (0x0001b86d) tabs_3_passive_pane_ParamLimits

0xc020,	// (0x0001b86d) tabs_3_passive_pane

0xc031,	// (0x0001b87e) tabs_3_passive_pane_cp_ParamLimits

0xc031,	// (0x0001b87e) tabs_3_passive_pane_cp

0xbfcc,	// (0x0001b819) tabs_4_active_pane_ParamLimits

0xbfcc,	// (0x0001b819) tabs_4_active_pane

0xbfdd,	// (0x0001b82a) tabs_4_passive_pane_ParamLimits

0xbfdd,	// (0x0001b82a) tabs_4_passive_pane

0xbfee,	// (0x0001b83b) tabs_4_passive_pane_cp_ParamLimits

0xbfee,	// (0x0001b83b) tabs_4_passive_pane_cp

0xbfff,	// (0x0001b84c) tabs_4_passive_pane_cp2_ParamLimits

0xbfff,	// (0x0001b84c) tabs_4_passive_pane_cp2

0xbfac,	// (0x0001b7f9) tabs_2_long_active_pane_ParamLimits

0xbfac,	// (0x0001b7f9) tabs_2_long_active_pane

0xbfbc,	// (0x0001b809) tabs_2_long_passive_pane_ParamLimits

0xbfbc,	// (0x0001b809) tabs_2_long_passive_pane

0xbf79,	// (0x0001b7c6) tabs_3_long_active_pane_ParamLimits

0xbf79,	// (0x0001b7c6) tabs_3_long_active_pane

0xbf8a,	// (0x0001b7d7) tabs_3_long_passive_pane_ParamLimits

0xbf8a,	// (0x0001b7d7) tabs_3_long_passive_pane

0xbf9b,	// (0x0001b7e8) tabs_3_long_passive_pane_cp_ParamLimits

0xbf9b,	// (0x0001b7e8) tabs_3_long_passive_pane_cp

0x10fb,	// (0x00010948) volume_small_pane_g1

0xbf28,	// (0x0001b775) volume_small_pane_g2

0xbf31,	// (0x0001b77e) volume_small_pane_g3

0xbf3a,	// (0x0001b787) volume_small_pane_g4

0xbf43,	// (0x0001b790) volume_small_pane_g5

0xbf4c,	// (0x0001b799) volume_small_pane_g6

0xbf55,	// (0x0001b7a2) volume_small_pane_g7

0xbf5e,	// (0x0001b7ab) volume_small_pane_g8

0xbf67,	// (0x0001b7b4) volume_small_pane_g9

0xbf70,	// (0x0001b7bd) volume_small_pane_g10

0x0009,

0xf8b2,	// (0x0001f0ff) volume_small_pane_g

0x261e,	// (0x00011e6b) bg_active_tab_pane_cp2_ParamLimits

0x261e,	// (0x00011e6b) bg_active_tab_pane_cp2

0xc68c,	// (0x0001bed9) tabs_3_active_pane_g1

0xc694,	// (0x0001bee1) tabs_3_active_pane_t1

0x261e,	// (0x00011e6b) bg_passive_tab_pane_cp2_ParamLimits

0x261e,	// (0x00011e6b) bg_passive_tab_pane_cp2

0xc68c,	// (0x0001bed9) tabs_3_passive_pane_g1

0xc694,	// (0x0001bee1) tabs_3_passive_pane_t1

0x261e,	// (0x00011e6b) bg_active_tab_pane_cp3_ParamLimits

0x261e,	// (0x00011e6b) bg_active_tab_pane_cp3

0xc6a6,	// (0x0001bef3) tabs_4_active_pane_g1

0xc6ae,	// (0x0001befb) tabs_4_active_pane_t1

0x261e,	// (0x00011e6b) bg_passive_tab_pane_cp3_ParamLimits

0x261e,	// (0x00011e6b) bg_passive_tab_pane_cp3

0xc6a6,	// (0x0001bef3) tabs_4_1_passive_pane_g1

0xc6ae,	// (0x0001befb) tabs_4_1_passive_pane_t1

0x436e,	// (0x00013bbb) list_highlight_pane_cp2

0xda1f,	// (0x0001d26c) list_set_pane_ParamLimits

0xda1f,	// (0x0001d26c) list_set_pane

0xdab9,	// (0x0001d306) main_pane_set_t1_ParamLimits

0xdab9,	// (0x0001d306) main_pane_set_t1

0xdad9,	// (0x0001d326) main_pane_set_t2_ParamLimits

0xdad9,	// (0x0001d326) main_pane_set_t2

0xdaed,	// (0x0001d33a) main_pane_set_t3_ParamLimits

0xdaed,	// (0x0001d33a) main_pane_set_t3

0xdaff,	// (0x0001d34c) main_pane_set_t4_ParamLimits

0xdaff,	// (0x0001d34c) main_pane_set_t4

0x0003,

0xf982,	// (0x0001f1cf) main_pane_set_t_ParamLimits

0xf982,	// (0x0001f1cf) main_pane_set_t

0xdb11,	// (0x0001d35e) setting_code_pane

0xdb1b,	// (0x0001d368) setting_slider_graphic_pane

0xdb1b,	// (0x0001d368) setting_slider_pane

0xdb1b,	// (0x0001d368) setting_text_pane

0xdb1b,	// (0x0001d368) setting_volume_pane

0x030a,	// (0x0000fb57) volume_set_pane

0x2389,	// (0x00011bd6) bg_set_opt_pane_cp

0x0312,	// (0x0000fb5f) setting_slider_pane_t1

0x032b,	// (0x0000fb78) setting_slider_pane_t2

0x0345,	// (0x0000fb92) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0001edb1) setting_slider_pane_t

0x035d,	// (0x0000fbaa) slider_set_pane

0x22a9,	// (0x00011af6) bg_set_opt_pane_cp2

0x23cb,	// (0x00011c18) setting_slider_graphic_pane_g1

0x0373,	// (0x0000fbc0) setting_slider_graphic_pane_t1

0x0383,	// (0x0000fbd0) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0001edb8) setting_slider_graphic_pane_t

0x0393,	// (0x0000fbe0) slider_set_pane_cp

0x22a9,	// (0x00011af6) input_focus_pane_cp1

0x5d90,	// (0x000155dd) list_set_text_pane

0x229f,	// (0x00011aec) setting_text_pane_g1

0x22a9,	// (0x00011af6) input_focus_pane_cp2

0x229f,	// (0x00011aec) setting_code_pane_g1

0x23d4,	// (0x00011c21) setting_code_pane_t1

0x23e2,	// (0x00011c2f) set_text_pane_t1_ParamLimits

0x23e2,	// (0x00011c2f) set_text_pane_t1

0x32bd,	// (0x00012b0a) set_opt_bg_pane_g1

0x32c5,	// (0x00012b12) set_opt_bg_pane_g2

0x5d6a,	// (0x000155b7) set_opt_bg_pane_g3

0x32d5,	// (0x00012b22) set_opt_bg_pane_g4

0x32dd,	// (0x00012b2a) set_opt_bg_pane_g5

0x32e5,	// (0x00012b32) set_opt_bg_pane_g6

0x5d74,	// (0x000155c1) set_opt_bg_pane_g7

0x5d7c,	// (0x000155c9) set_opt_bg_pane_g8

0x5d86,	// (0x000155d3) set_opt_bg_pane_g9

0x0008,

0xf96f,	// (0x0001f1bc) set_opt_bg_pane_g

0x5d5d,	// (0x000155aa) slider_set_pane_g1

0x12c3,	// (0x00010b10) slider_set_pane_g2

0x0006,

0xf960,	// (0x0001f1ad) slider_set_pane_g

0x125f,	// (0x00010aac) volume_set_pane_g1

0x1267,	// (0x00010ab4) volume_set_pane_g2

0x126f,	// (0x00010abc) volume_set_pane_g3

0x1277,	// (0x00010ac4) volume_set_pane_g4

0x127f,	// (0x00010acc) volume_set_pane_g5

0x1287,	// (0x00010ad4) volume_set_pane_g6

0x128f,	// (0x00010adc) volume_set_pane_g7

0x1297,	// (0x00010ae4) volume_set_pane_g8

0x129f,	// (0x00010aec) volume_set_pane_g9

0x12a7,	// (0x00010af4) volume_set_pane_g10

0x0009,

0xf938,	// (0x0001f185) volume_set_pane_g

0xc6c0,	// (0x0001bf0d) indicator_pane_ParamLimits

0xc6c0,	// (0x0001bf0d) indicator_pane

0xc6e8,	// (0x0001bf35) main_idle_pane_g2_ParamLimits

0xc6e8,	// (0x0001bf35) main_idle_pane_g2

0xc720,	// (0x0001bf6d) main_pane_idle_g1_ParamLimits

0xc720,	// (0x0001bf6d) main_pane_idle_g1

0x243d,	// (0x00011c8a) popup_clock_digital_analogue_window_ParamLimits

0x243d,	// (0x00011c8a) popup_clock_digital_analogue_window

0xc747,	// (0x0001bf94) soft_indicator_pane_ParamLimits

0xc747,	// (0x0001bf94) soft_indicator_pane

0xc761,	// (0x0001bfae) wallpaper_pane_ParamLimits

0xc761,	// (0x0001bfae) wallpaper_pane

0x229f,	// (0x00011aec) wallpaper_pane_g1

0xc773,	// (0x0001bfc0) indicator_pane_g1_ParamLimits

0xc773,	// (0x0001bfc0) indicator_pane_g1

0x6233,	// (0x00015a80) navi_navi_icon_text_pane_srt_g1

0x248f,	// (0x00011cdc) soft_indicator_pane_t1

0x24a9,	// (0x00011cf6) aid_ps_area_pane

0xc789,	// (0x0001bfd6) aid_ps_clock_pane

0x24c8,	// (0x00011d15) aid_ps_indicator_pane

0x24d4,	// (0x00011d21) indicator_ps_pane_ParamLimits

0x24d4,	// (0x00011d21) indicator_ps_pane

0x24e3,	// (0x00011d30) power_save_pane_g1_ParamLimits

0x24e3,	// (0x00011d30) power_save_pane_g1

0x24ef,	// (0x00011d3c) power_save_pane_g2_ParamLimits

0x24ef,	// (0x00011d3c) power_save_pane_g2

0xf4c7,	// (0x0001ed14) aid_navinavi_width_pane

0x24a9,	// (0x00011cf6) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0001edbd) power_save_pane_g_ParamLimits

0xf570,	// (0x0001edbd) power_save_pane_g

0x24fd,	// (0x00011d4a) power_save_pane_t1_ParamLimits

0x24fd,	// (0x00011d4a) power_save_pane_t1

0xc789,	// (0x0001bfd6) aid_ps_clock_pane_ParamLimits

0x24c8,	// (0x00011d15) aid_ps_indicator_pane_ParamLimits

0x250f,	// (0x00011d5c) power_save_pane_t4_ParamLimits

0x250f,	// (0x00011d5c) power_save_pane_t4

0x0001,

0xf575,	// (0x0001edc2) power_save_pane_t_ParamLimits

0xf575,	// (0x0001edc2) power_save_pane_t

0x2539,	// (0x00011d86) power_save_t3_ParamLimits

0x2539,	// (0x00011d86) power_save_t3

0x2524,	// (0x00011d71) power_save_t2_ParamLimits

0x2524,	// (0x00011d71) power_save_t2

0x254e,	// (0x00011d9b) indicator_ps_pane_g1

0xc797,	// (0x0001bfe4) ai_gene_pane_ParamLimits

0xc797,	// (0x0001bfe4) ai_gene_pane

0xc7ae,	// (0x0001bffb) ai_links_pane_ParamLimits

0xc7ae,	// (0x0001bffb) ai_links_pane

0xc7c6,	// (0x0001c013) indicator_pane_cp1_ParamLimits

0xc7c6,	// (0x0001c013) indicator_pane_cp1

0xc7d5,	// (0x0001c022) main_pane_idle_g1_cp_ParamLimits

0xc7d5,	// (0x0001c022) main_pane_idle_g1_cp

0x2587,	// (0x00011dd4) popup_ai_links_title_window

0xc7ed,	// (0x0001c03a) soft_indicator_pane_cp1_ParamLimits

0xc7ed,	// (0x0001c03a) soft_indicator_pane_cp1

0x5b0e,	// (0x0001535b) ai_links_pane_g1

0x5b17,	// (0x00015364) grid_ai_links_pane

0xd966,	// (0x0001d1b3) ai_gene_pane_1

0x5afc,	// (0x00015349) ai_gene_pane_2

0x5b05,	// (0x00015352) list_highlight_pane_cp4

0xd942,	// (0x0001d18f) cell_ai_link_pane_ParamLimits

0xd942,	// (0x0001d18f) cell_ai_link_pane

0x5acd,	// (0x0001531a) cell_ai_link_pane_g1

0x27c0,	// (0x0001200d) cell_ai_link_pane_g2

0x0001,

0xf913,	// (0x0001f160) cell_ai_link_pane_g

0x22a9,	// (0x00011af6) grid_highlight_cp2

0x22a9,	// (0x00011af6) bg_popup_sub_pane_cp1

0x25aa,	// (0x00011df7) popup_ai_links_title_window_t1

0x5a1b,	// (0x00015268) ai_gene_pane_1_g1_ParamLimits

0x5a1b,	// (0x00015268) ai_gene_pane_1_g1

0x5a27,	// (0x00015274) ai_gene_pane_1_g2_ParamLimits

0x5a27,	// (0x00015274) ai_gene_pane_1_g2

0x0001,

0xf909,	// (0x0001f156) ai_gene_pane_1_g_ParamLimits

0xf909,	// (0x0001f156) ai_gene_pane_1_g

0x5a34,	// (0x00015281) ai_gene_pane_1_t1_ParamLimits

0x5a34,	// (0x00015281) ai_gene_pane_1_t1

0x5a68,	// (0x000152b5) grid_ai_soft_ind_pane

0x5a06,	// (0x00015253) ai_gene_pane_2_t1_ParamLimits

0x5a06,	// (0x00015253) ai_gene_pane_2_t1

0xc801,	// (0x0001c04e) main_pane_empty_t1_ParamLimits

0xc801,	// (0x0001c04e) main_pane_empty_t1

0xc819,	// (0x0001c066) main_pane_empty_t2_ParamLimits

0xc819,	// (0x0001c066) main_pane_empty_t2

0xc82e,	// (0x0001c07b) main_pane_empty_t3_ParamLimits

0xc82e,	// (0x0001c07b) main_pane_empty_t3

0xc840,	// (0x0001c08d) main_pane_empty_t4_ParamLimits

0xc840,	// (0x0001c08d) main_pane_empty_t4

0xc852,	// (0x0001c09f) main_pane_empty_t5_ParamLimits

0xc852,	// (0x0001c09f) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0001edc7) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0001edc7) main_pane_empty_t

0x33ba,	// (0x00012c07) bg_popup_window_pane_ParamLimits

0x33ba,	// (0x00012c07) bg_popup_window_pane

0x5776,	// (0x00014fc3) find_popup_pane_cp2_ParamLimits

0x5776,	// (0x00014fc3) find_popup_pane_cp2

0x5782,	// (0x00014fcf) heading_pane_ParamLimits

0x5782,	// (0x00014fcf) heading_pane

0x22a9,	// (0x00011af6) bg_popup_sub_pane

0xd843,	// (0x0001d090) bg_popup_window_pane_g1_ParamLimits

0xd843,	// (0x0001d090) bg_popup_window_pane_g1

0xd852,	// (0x0001d09f) bg_popup_window_pane_g2_ParamLimits

0xd852,	// (0x0001d09f) bg_popup_window_pane_g2

0xd85e,	// (0x0001d0ab) bg_popup_window_pane_g3_ParamLimits

0xd85e,	// (0x0001d0ab) bg_popup_window_pane_g3

0xd86a,	// (0x0001d0b7) bg_popup_window_pane_g4_ParamLimits

0xd86a,	// (0x0001d0b7) bg_popup_window_pane_g4

0xd879,	// (0x0001d0c6) bg_popup_window_pane_g5_ParamLimits

0xd879,	// (0x0001d0c6) bg_popup_window_pane_g5

0xd889,	// (0x0001d0d6) bg_popup_window_pane_g6_ParamLimits

0xd889,	// (0x0001d0d6) bg_popup_window_pane_g6

0xd895,	// (0x0001d0e2) bg_popup_window_pane_g7_ParamLimits

0xd895,	// (0x0001d0e2) bg_popup_window_pane_g7

0xd8a4,	// (0x0001d0f1) bg_popup_window_pane_g8_ParamLimits

0xd8a4,	// (0x0001d0f1) bg_popup_window_pane_g8

0xd8b3,	// (0x0001d100) bg_popup_window_pane_g9_ParamLimits

0xd8b3,	// (0x0001d100) bg_popup_window_pane_g9

0x575c,	// (0x00014fa9) bg_popup_window_pane_g10_ParamLimits

0x575c,	// (0x00014fa9) bg_popup_window_pane_g10

0x0009,

0xf8d1,	// (0x0001f11e) bg_popup_window_pane_g_ParamLimits

0xf8d1,	// (0x0001f11e) bg_popup_window_pane_g

0x5685,	// (0x00014ed2) bg_popup_heading_pane_ParamLimits

0x5685,	// (0x00014ed2) bg_popup_heading_pane

0x134b,	// (0x00010b98) tabs_4_passive_pane_cp_srt_ParamLimits

0x134b,	// (0x00010b98) tabs_4_passive_pane_cp_srt

0x135d,	// (0x00010baa) tabs_4_passive_pane_srt_ParamLimits

0x5699,	// (0x00014ee6) heading_pane_g2

0x135d,	// (0x00010baa) tabs_4_passive_pane_srt

0x49c2,	// (0x0001420f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x49c2,	// (0x0001420f) bg_passive_tab_pane_cp3_srt

0x56a1,	// (0x00014eee) heading_pane_t1_ParamLimits

0x56a1,	// (0x00014eee) heading_pane_t1

0x56b8,	// (0x00014f05) heading_pane_t2_ParamLimits

0x56b8,	// (0x00014f05) heading_pane_t2

0x0001,

0xf8cc,	// (0x0001f119) heading_pane_t_ParamLimits

0xf8cc,	// (0x0001f119) heading_pane_t

0x51a6,	// (0x000149f3) bg_popup_heading_pane_g1

0x5255,	// (0x00014aa2) bg_popup_heading_pane_g2

0x525f,	// (0x00014aac) bg_popup_heading_pane_g3

0x5269,	// (0x00014ab6) bg_popup_heading_pane_g4

0x5273,	// (0x00014ac0) bg_popup_heading_pane_g5

0x527d,	// (0x00014aca) bg_popup_heading_pane_g6

0x5285,	// (0x00014ad2) bg_popup_heading_pane_g7

0x528d,	// (0x00014ada) bg_popup_heading_pane_g8

0x5297,	// (0x00014ae4) bg_popup_heading_pane_g9

0x0008,

0xf888,	// (0x0001f0d5) bg_popup_heading_pane_g

0x489c,	// (0x000140e9) bg_popup_sub_pane_g1

0x48ac,	// (0x000140f9) bg_popup_sub_pane_g2

0x48a4,	// (0x000140f1) bg_popup_sub_pane_g3

0x48bc,	// (0x00014109) bg_popup_sub_pane_g4

0x48b4,	// (0x00014101) bg_popup_sub_pane_g5

0x48c4,	// (0x00014111) bg_popup_sub_pane_g6

0x48cc,	// (0x00014119) bg_popup_sub_pane_g7

0x48dc,	// (0x00014129) bg_popup_sub_pane_g8

0x48d4,	// (0x00014121) bg_popup_sub_pane_g9

0x0008,

0xf862,	// (0x0001f0af) bg_popup_sub_pane_g

0x261e,	// (0x00011e6b) bg_popup_window_pane_cp5_ParamLimits

0x261e,	// (0x00011e6b) bg_popup_window_pane_cp5

0x263a,	// (0x00011e87) popup_note_window_g1_ParamLimits

0x263a,	// (0x00011e87) popup_note_window_g1

0x2646,	// (0x00011e93) popup_note_window_t1_ParamLimits

0x2646,	// (0x00011e93) popup_note_window_t1

0x265c,	// (0x00011ea9) popup_note_window_t2_ParamLimits

0x265c,	// (0x00011ea9) popup_note_window_t2

0x2672,	// (0x00011ebf) popup_note_window_t3_ParamLimits

0x2672,	// (0x00011ebf) popup_note_window_t3

0x2688,	// (0x00011ed5) popup_note_window_t4_ParamLimits

0x2688,	// (0x00011ed5) popup_note_window_t4

0x26b0,	// (0x00011efd) popup_note_window_t5_ParamLimits

0x26b0,	// (0x00011efd) popup_note_window_t5

0x0004,

0xf585,	// (0x0001edd2) popup_note_window_t_ParamLimits

0xf585,	// (0x0001edd2) popup_note_window_t

0x26d4,	// (0x00011f21) bg_popup_window_pane_cp6_ParamLimits

0x26d4,	// (0x00011f21) bg_popup_window_pane_cp6

0x5122,	// (0x0001496f) popup_note_image_window_g1_ParamLimits

0x5122,	// (0x0001496f) popup_note_image_window_g1

0x512e,	// (0x0001497b) popup_note_image_window_g2_ParamLimits

0x512e,	// (0x0001497b) popup_note_image_window_g2

0x0001,

0xf856,	// (0x0001f0a3) popup_note_image_window_g_ParamLimits

0xf856,	// (0x0001f0a3) popup_note_image_window_g

0x5147,	// (0x00014994) popup_note_image_window_t1_ParamLimits

0x5147,	// (0x00014994) popup_note_image_window_t1

0x5160,	// (0x000149ad) popup_note_image_window_t2_ParamLimits

0x5160,	// (0x000149ad) popup_note_image_window_t2

0x5179,	// (0x000149c6) popup_note_image_window_t3_ParamLimits

0x5179,	// (0x000149c6) popup_note_image_window_t3

0x0002,

0xf85b,	// (0x0001f0a8) popup_note_image_window_t_ParamLimits

0xf85b,	// (0x0001f0a8) popup_note_image_window_t

0x4fe3,	// (0x00014830) bg_popup_window_pane_cp7_ParamLimits

0x4fe3,	// (0x00014830) bg_popup_window_pane_cp7

0x5013,	// (0x00014860) popup_note_wait_window_g1_ParamLimits

0x5013,	// (0x00014860) popup_note_wait_window_g1

0x501f,	// (0x0001486c) popup_note_wait_window_g2_ParamLimits

0x501f,	// (0x0001486c) popup_note_wait_window_g2

0x0002,

0xf844,	// (0x0001f091) popup_note_wait_window_g_ParamLimits

0xf844,	// (0x0001f091) popup_note_wait_window_g

0x5037,	// (0x00014884) popup_note_wait_window_t1_ParamLimits

0x5037,	// (0x00014884) popup_note_wait_window_t1

0x505e,	// (0x000148ab) popup_note_wait_window_t2_ParamLimits

0x505e,	// (0x000148ab) popup_note_wait_window_t2

0x507b,	// (0x000148c8) popup_note_wait_window_t3_ParamLimits

0x507b,	// (0x000148c8) popup_note_wait_window_t3

0x508e,	// (0x000148db) popup_note_wait_window_t4_ParamLimits

0x508e,	// (0x000148db) popup_note_wait_window_t4

0x0004,

0xf84b,	// (0x0001f098) popup_note_wait_window_t_ParamLimits

0xf84b,	// (0x0001f098) popup_note_wait_window_t

0x50b3,	// (0x00014900) wait_bar_pane_ParamLimits

0x50b3,	// (0x00014900) wait_bar_pane

0x22a9,	// (0x00011af6) wait_anim_pane

0x22a9,	// (0x00011af6) wait_border_pane

0x229f,	// (0x00011aec) wait_anim_pane_g1

0x229f,	// (0x00011aec) wait_anim_pane_g2

0x0001,

0xf704,	// (0x0001ef51) wait_anim_pane_g

0x4f87,	// (0x000147d4) wait_border_pane_g1

0x4f92,	// (0x000147df) wait_border_pane_g2

0x4f9b,	// (0x000147e8) wait_border_pane_g3

0x0002,

0xf83d,	// (0x0001f08a) wait_border_pane_g

0x4df2,	// (0x0001463f) bg_popup_window_pane_cp16_ParamLimits

0x4df2,	// (0x0001463f) bg_popup_window_pane_cp16

0x4ef2,	// (0x0001473f) indicator_popup_pane_cp4_ParamLimits

0x4ef2,	// (0x0001473f) indicator_popup_pane_cp4

0x4f06,	// (0x00014753) popup_query_data_window_t1_ParamLimits

0x4f06,	// (0x00014753) popup_query_data_window_t1

0x4f18,	// (0x00014765) popup_query_data_window_t2_ParamLimits

0x4f18,	// (0x00014765) popup_query_data_window_t2

0x4f31,	// (0x0001477e) popup_query_data_window_t3_ParamLimits

0x4f31,	// (0x0001477e) popup_query_data_window_t3

0x0002,

0xf836,	// (0x0001f083) popup_query_data_window_t_ParamLimits

0xf836,	// (0x0001f083) popup_query_data_window_t

0x4f4b,	// (0x00014798) query_popup_data_pane_ParamLimits

0x4f4b,	// (0x00014798) query_popup_data_pane

0x4f5f,	// (0x000147ac) query_popup_data_pane_cp1_ParamLimits

0x4f5f,	// (0x000147ac) query_popup_data_pane_cp1

0x4df2,	// (0x0001463f) bg_popup_window_pane_cp10_ParamLimits

0x4df2,	// (0x0001463f) bg_popup_window_pane_cp10

0x4e24,	// (0x00014671) indicator_popup_pane_ParamLimits

0x4e24,	// (0x00014671) indicator_popup_pane

0x4e46,	// (0x00014693) popup_query_code_window_t1_ParamLimits

0x4e46,	// (0x00014693) popup_query_code_window_t1

0x4e60,	// (0x000146ad) popup_query_code_window_t2_ParamLimits

0x4e60,	// (0x000146ad) popup_query_code_window_t2

0x4ea9,	// (0x000146f6) popup_query_code_window_t3_ParamLimits

0x4ea9,	// (0x000146f6) popup_query_code_window_t3

0x0002,

0xf82f,	// (0x0001f07c) popup_query_code_window_t_ParamLimits

0xf82f,	// (0x0001f07c) popup_query_code_window_t

0x4ed8,	// (0x00014725) query_popup_pane_ParamLimits

0x4ed8,	// (0x00014725) query_popup_pane

0x26d4,	// (0x00011f21) bg_popup_window_pane_cp15_ParamLimits

0x26d4,	// (0x00011f21) bg_popup_window_pane_cp15

0x26f2,	// (0x00011f3f) indicator_popup_pane_cp1_ParamLimits

0x26f2,	// (0x00011f3f) indicator_popup_pane_cp1

0x2705,	// (0x00011f52) indicator_popup_pane_cp2_ParamLimits

0x2705,	// (0x00011f52) indicator_popup_pane_cp2

0x2718,	// (0x00011f65) popup_query_data_code_window_g1_ParamLimits

0x2718,	// (0x00011f65) popup_query_data_code_window_g1

0x272b,	// (0x00011f78) popup_query_data_code_window_t1_ParamLimits

0x272b,	// (0x00011f78) popup_query_data_code_window_t1

0x273d,	// (0x00011f8a) popup_query_data_code_window_t2_ParamLimits

0x273d,	// (0x00011f8a) popup_query_data_code_window_t2

0x274f,	// (0x00011f9c) popup_query_data_code_window_t3_ParamLimits

0x274f,	// (0x00011f9c) popup_query_data_code_window_t3

0x2765,	// (0x00011fb2) popup_query_data_code_window_t4_ParamLimits

0x2765,	// (0x00011fb2) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0001eddd) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0001eddd) popup_query_data_code_window_t

0x100c,	// (0x00010859) list_single_midp_graphic_pane_g3

0x277d,	// (0x00011fca) query_popup_data_pane_cp2_ParamLimits

0x2790,	// (0x00011fdd) query_popup_pane_cp2_ParamLimits

0x2790,	// (0x00011fdd) query_popup_pane_cp2

0x22a9,	// (0x00011af6) bg_popup_window_pane_cp11

0x4dea,	// (0x00014637) heading_pane_cp5

0x2878,	// (0x000120c5) listscroll_popup_info_pane

0x22a9,	// (0x00011af6) input_focus_pane_cp3

0x27a3,	// (0x00011ff0) query_popup_pane_t1

0x27b1,	// (0x00011ffe) list_popup_info_pane_ParamLimits

0x27b1,	// (0x00011ffe) list_popup_info_pane

0x27c0,	// (0x0001200d) listscroll_popup_info_pane_g1

0x27c8,	// (0x00012015) scroll_pane_cp7

0x27d2,	// (0x0001201f) popup_info_list_pane_t1_ParamLimits

0x27d2,	// (0x0001201f) popup_info_list_pane_t1

0x27ec,	// (0x00012039) popup_info_list_pane_t2_ParamLimits

0x27ec,	// (0x00012039) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0001ede6) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0001ede6) popup_info_list_pane_t

0x22a9,	// (0x00011af6) bg_popup_window_pane_cp12

0x624d,	// (0x00015a9a) find_popup_pane

0x2389,	// (0x00011bd6) bg_popup_window_pane_cp3

0x2806,	// (0x00012053) heading_pane_cp3

0x2812,	// (0x0001205f) listscroll_popup_graphic_pane

0x22a9,	// (0x00011af6) bg_popup_window_pane_cp4

0xc8b4,	// (0x0001c101) heading_pane_cp4

0x2878,	// (0x000120c5) listscroll_popup_colour_pane

0x2880,	// (0x000120cd) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2880,	// (0x000120cd) cell_large_graphic_colour_none_popup_pane

0xc8bc,	// (0x0001c109) grid_large_graphic_colour_popup_pane_ParamLimits

0xc8bc,	// (0x0001c109) grid_large_graphic_colour_popup_pane

0x28c0,	// (0x0001210d) listscroll_popup_colour_pane_g1_ParamLimits

0x28c0,	// (0x0001210d) listscroll_popup_colour_pane_g1

0x28d7,	// (0x00012124) listscroll_popup_colour_pane_g2_ParamLimits

0x28d7,	// (0x00012124) listscroll_popup_colour_pane_g2

0x28ee,	// (0x0001213b) listscroll_popup_colour_pane_g3_ParamLimits

0x28ee,	// (0x0001213b) listscroll_popup_colour_pane_g3

0xc8e0,	// (0x0001c12d) listscroll_popup_colour_pane_g4_ParamLimits

0xc8e0,	// (0x0001c12d) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0001edeb) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0001edeb) listscroll_popup_colour_pane_g

0x2912,	// (0x0001215f) scroll_pane_cp6_ParamLimits

0x2912,	// (0x0001215f) scroll_pane_cp6

0xc8f0,	// (0x0001c13d) cell_large_graphic_colour_popup_pane_ParamLimits

0xc8f0,	// (0x0001c13d) cell_large_graphic_colour_popup_pane

0x2943,	// (0x00012190) cell_large_graphic_colour_none_popup_pane_t1

0x22a9,	// (0x00011af6) grid_highlight_pane_cp5

0x2952,	// (0x0001219f) cell_large_graphic_colour_popup_pane_g1

0x295a,	// (0x000121a7) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0001edf4) cell_large_graphic_colour_popup_pane_g

0x2962,	// (0x000121af) cell_large_graphic_colour_popup_pane_g2_copy1

0x296b,	// (0x000121b8) grid_highlight_pane_cp4

0x2973,	// (0x000121c0) bg_popup_window_pane_cp8_ParamLimits

0x2973,	// (0x000121c0) bg_popup_window_pane_cp8

0x298e,	// (0x000121db) popup_snote_single_text_window_g1_ParamLimits

0x298e,	// (0x000121db) popup_snote_single_text_window_g1

0x29a0,	// (0x000121ed) popup_snote_single_text_window_t1_ParamLimits

0x29a0,	// (0x000121ed) popup_snote_single_text_window_t1

0x29b3,	// (0x00012200) popup_snote_single_text_window_t2_ParamLimits

0x29b3,	// (0x00012200) popup_snote_single_text_window_t2

0x29c6,	// (0x00012213) popup_snote_single_text_window_t3_ParamLimits

0x29c6,	// (0x00012213) popup_snote_single_text_window_t3

0x29ff,	// (0x0001224c) popup_snote_single_text_window_t4_ParamLimits

0x29ff,	// (0x0001224c) popup_snote_single_text_window_t4

0x2a33,	// (0x00012280) popup_snote_single_text_window_t5_ParamLimits

0x2a33,	// (0x00012280) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0001edf9) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0001edf9) popup_snote_single_text_window_t

0x2a62,	// (0x000122af) bg_popup_window_pane_cp9_ParamLimits

0x2a62,	// (0x000122af) bg_popup_window_pane_cp9

0x298e,	// (0x000121db) popup_snote_single_graphic_window_g1_ParamLimits

0x298e,	// (0x000121db) popup_snote_single_graphic_window_g1

0x2a70,	// (0x000122bd) popup_snote_single_graphic_window_g2_ParamLimits

0x2a70,	// (0x000122bd) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0001ee04) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0001ee04) popup_snote_single_graphic_window_g

0x2a7c,	// (0x000122c9) popup_snote_single_graphic_window_t1_ParamLimits

0x2a7c,	// (0x000122c9) popup_snote_single_graphic_window_t1

0x2a8f,	// (0x000122dc) popup_snote_single_graphic_window_t2_ParamLimits

0x2a8f,	// (0x000122dc) popup_snote_single_graphic_window_t2

0x2aa2,	// (0x000122ef) popup_snote_single_graphic_window_t3_ParamLimits

0x2aa2,	// (0x000122ef) popup_snote_single_graphic_window_t3

0x2adb,	// (0x00012328) popup_snote_single_graphic_window_t4_ParamLimits

0x2adb,	// (0x00012328) popup_snote_single_graphic_window_t4

0x2b0f,	// (0x0001235c) popup_snote_single_graphic_window_t5_ParamLimits

0x2b0f,	// (0x0001235c) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0001ee09) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0001ee09) popup_snote_single_graphic_window_t

0x6191,	// (0x000159de) grid_graphic_popup_pane_ParamLimits

0x6191,	// (0x000159de) grid_graphic_popup_pane

0x61b9,	// (0x00015a06) listscroll_popup_graphic_pane_g1_ParamLimits

0x61b9,	// (0x00015a06) listscroll_popup_graphic_pane_g1

0xdc4a,	// (0x0001d497) listscroll_popup_graphic_pane_g2_ParamLimits

0xdc4a,	// (0x0001d497) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ac,	// (0x0001f1f9) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ac,	// (0x0001f1f9) listscroll_popup_graphic_pane_g

0x61e1,	// (0x00015a2e) scroll_pane_cp5

0xdc0d,	// (0x0001d45a) cell_graphic_popup_pane_ParamLimits

0xdc0d,	// (0x0001d45a) cell_graphic_popup_pane

0x611b,	// (0x00015968) cell_graphic_popup_pane_g1

0x6123,	// (0x00015970) cell_graphic_popup_pane_g2

0x2962,	// (0x000121af) cell_graphic_popup_pane_g3

0x0002,

0xf9a5,	// (0x0001f1f2) cell_graphic_popup_pane_g

0x612c,	// (0x00015979) cell_graphic_popup_pane_t2

0x296b,	// (0x000121b8) grid_highlight_pane_cp3

0x2b50,	// (0x0001239d) list_gen_pane_ParamLimits

0x2b50,	// (0x0001239d) list_gen_pane

0x2b82,	// (0x000123cf) scroll_pane

0xdbc4,	// (0x0001d411) bg_list_pane_g1_ParamLimits

0xdbc4,	// (0x0001d411) bg_list_pane_g1

0x6090,	// (0x000158dd) bg_list_pane_g2_ParamLimits

0x6090,	// (0x000158dd) bg_list_pane_g2

0x60a5,	// (0x000158f2) bg_list_pane_g3_ParamLimits

0x60a5,	// (0x000158f2) bg_list_pane_g3

0x60b9,	// (0x00015906) bg_list_pane_g4_ParamLimits

0x60b9,	// (0x00015906) bg_list_pane_g4

0xdbe1,	// (0x0001d42e) bg_list_pane_g5_ParamLimits

0xdbe1,	// (0x0001d42e) bg_list_pane_g5

0x0004,

0xf99a,	// (0x0001f1e7) bg_list_pane_g_ParamLimits

0xf99a,	// (0x0001f1e7) bg_list_pane_g

0xdb6a,	// (0x0001d3b7) list_double2_graphic_large_graphic_pane_ParamLimits

0xdb6a,	// (0x0001d3b7) list_double2_graphic_large_graphic_pane

0xdb6a,	// (0x0001d3b7) list_double2_graphic_pane_ParamLimits

0xdb6a,	// (0x0001d3b7) list_double2_graphic_pane

0xdb6a,	// (0x0001d3b7) list_double2_large_graphic_pane_ParamLimits

0xdb6a,	// (0x0001d3b7) list_double2_large_graphic_pane

0xdb6a,	// (0x0001d3b7) list_double2_pane_ParamLimits

0xdb6a,	// (0x0001d3b7) list_double2_pane

0xdb6a,	// (0x0001d3b7) list_double_graphic_heading_pane_ParamLimits

0xdb6a,	// (0x0001d3b7) list_double_graphic_heading_pane

0xdb6a,	// (0x0001d3b7) list_double_graphic_pane_ParamLimits

0xdb6a,	// (0x0001d3b7) list_double_graphic_pane

0xdb6a,	// (0x0001d3b7) list_double_heading_pane_ParamLimits

0xdb6a,	// (0x0001d3b7) list_double_heading_pane

0xdb6a,	// (0x0001d3b7) list_double_large_graphic_pane_ParamLimits

0xdb6a,	// (0x0001d3b7) list_double_large_graphic_pane

0xdb6a,	// (0x0001d3b7) list_double_number_pane_ParamLimits

0xdb6a,	// (0x0001d3b7) list_double_number_pane

0xdb6a,	// (0x0001d3b7) list_double_pane_ParamLimits

0xdb6a,	// (0x0001d3b7) list_double_pane

0xdb6a,	// (0x0001d3b7) list_double_time_pane_ParamLimits

0xdb6a,	// (0x0001d3b7) list_double_time_pane

0xdb6a,	// (0x0001d3b7) list_setting_number_pane_ParamLimits

0xdb6a,	// (0x0001d3b7) list_setting_number_pane

0xdb6a,	// (0x0001d3b7) list_setting_pane_ParamLimits

0xdb6a,	// (0x0001d3b7) list_setting_pane

0xdb7c,	// (0x0001d3c9) list_single_2graphic_pane_ParamLimits

0xdb7c,	// (0x0001d3c9) list_single_2graphic_pane

0xdb7c,	// (0x0001d3c9) list_single_graphic_heading_pane_ParamLimits

0xdb7c,	// (0x0001d3c9) list_single_graphic_heading_pane

0xdb7c,	// (0x0001d3c9) list_single_graphic_pane_ParamLimits

0xdb7c,	// (0x0001d3c9) list_single_graphic_pane

0xdb7c,	// (0x0001d3c9) list_single_heading_pane_ParamLimits

0xdb7c,	// (0x0001d3c9) list_single_heading_pane

0xdb7c,	// (0x0001d3c9) list_single_large_graphic_pane_ParamLimits

0xdb7c,	// (0x0001d3c9) list_single_large_graphic_pane

0xdb7c,	// (0x0001d3c9) list_single_number_heading_pane_ParamLimits

0xdb7c,	// (0x0001d3c9) list_single_number_heading_pane

0xdb7c,	// (0x0001d3c9) list_single_number_pane_ParamLimits

0xdb7c,	// (0x0001d3c9) list_single_number_pane

0xdb7c,	// (0x0001d3c9) list_single_pane_ParamLimits

0xdb7c,	// (0x0001d3c9) list_single_pane

0x22a9,	// (0x00011af6) list_highlight_pane_cp1

0x3f5f,	// (0x000137ac) list_single_pane_g1_ParamLimits

0x3f5f,	// (0x000137ac) list_single_pane_g1

0x481e,	// (0x0001406b) list_single_pane_g2_ParamLimits

0x481e,	// (0x0001406b) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0001ee1b) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0001ee1b) list_single_pane_g

0x6884,	// (0x000160d1) list_single_pane_t1_ParamLimits

0x6884,	// (0x000160d1) list_single_pane_t1

0x3f5f,	// (0x000137ac) list_single_number_pane_g1_ParamLimits

0x3f5f,	// (0x000137ac) list_single_number_pane_g1

0x481e,	// (0x0001406b) list_single_number_pane_g2_ParamLimits

0x481e,	// (0x0001406b) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0001ee1b) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0001ee1b) list_single_number_pane_g

0x482a,	// (0x00014077) list_single_number_pane_t1_ParamLimits

0x482a,	// (0x00014077) list_single_number_pane_t1

0xd9bb,	// (0x0001d208) list_single_number_pane_t2_ParamLimits

0xd9bb,	// (0x0001d208) list_single_number_pane_t2

0x0001,

0xf95b,	// (0x0001f1a8) list_single_number_pane_t_ParamLimits

0xf95b,	// (0x0001f1a8) list_single_number_pane_t

0xc919,	// (0x0001c166) list_single_graphic_pane_g1_ParamLimits

0xc919,	// (0x0001c166) list_single_graphic_pane_g1

0x3f5f,	// (0x000137ac) list_single_graphic_pane_g2_ParamLimits

0x3f5f,	// (0x000137ac) list_single_graphic_pane_g2

0x481e,	// (0x0001406b) list_single_graphic_pane_g3_ParamLimits

0x481e,	// (0x0001406b) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0001ee14) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0001ee14) list_single_graphic_pane_g

0xc925,	// (0x0001c172) list_single_graphic_pane_t1_ParamLimits

0xc925,	// (0x0001c172) list_single_graphic_pane_t1

0x3f5f,	// (0x000137ac) list_single_heading_pane_g1_ParamLimits

0x3f5f,	// (0x000137ac) list_single_heading_pane_g1

0x481e,	// (0x0001406b) list_single_heading_pane_g2_ParamLimits

0x481e,	// (0x0001406b) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001ee1b) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001ee1b) list_single_heading_pane_g

0x68a6,	// (0x000160f3) list_single_heading_pane_t1_ParamLimits

0x68a6,	// (0x000160f3) list_single_heading_pane_t1

0xc93b,	// (0x0001c188) list_single_heading_pane_t2_ParamLimits

0xc93b,	// (0x0001c188) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0001ee20) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0001ee20) list_single_heading_pane_t

0x3f5f,	// (0x000137ac) list_single_number_heading_pane_g1_ParamLimits

0x3f5f,	// (0x000137ac) list_single_number_heading_pane_g1

0x481e,	// (0x0001406b) list_single_number_heading_pane_g2_ParamLimits

0x481e,	// (0x0001406b) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001ee1b) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001ee1b) list_single_number_heading_pane_g

0x68a6,	// (0x000160f3) list_single_number_heading_pane_t1_ParamLimits

0x68a6,	// (0x000160f3) list_single_number_heading_pane_t1

0xc94d,	// (0x0001c19a) list_single_number_heading_pane_t2_ParamLimits

0xc94d,	// (0x0001c19a) list_single_number_heading_pane_t2

0x685e,	// (0x000160ab) list_single_number_heading_pane_t3_ParamLimits

0x685e,	// (0x000160ab) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0001ee25) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0001ee25) list_single_number_heading_pane_t

0x4812,	// (0x0001405f) list_single_graphic_heading_pane_g1_ParamLimits

0x4812,	// (0x0001405f) list_single_graphic_heading_pane_g1

0xc95f,	// (0x0001c1ac) list_single_graphic_heading_pane_g4_ParamLimits

0xc95f,	// (0x0001c1ac) list_single_graphic_heading_pane_g4

0x481e,	// (0x0001406b) list_single_graphic_heading_pane_g5_ParamLimits

0x481e,	// (0x0001406b) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0001ee2c) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0001ee2c) list_single_graphic_heading_pane_g

0x68a6,	// (0x000160f3) list_single_graphic_heading_pane_t1_ParamLimits

0x68a6,	// (0x000160f3) list_single_graphic_heading_pane_t1

0xc970,	// (0x0001c1bd) list_single_graphic_heading_pane_t2_ParamLimits

0xc970,	// (0x0001c1bd) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0001ee33) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0001ee33) list_single_graphic_heading_pane_t

0x689a,	// (0x000160e7) list_single_large_graphic_pane_g1_ParamLimits

0x689a,	// (0x000160e7) list_single_large_graphic_pane_g1

0x3f5f,	// (0x000137ac) list_single_large_graphic_pane_g2_ParamLimits

0x3f5f,	// (0x000137ac) list_single_large_graphic_pane_g2

0x481e,	// (0x0001406b) list_single_large_graphic_pane_g3_ParamLimits

0x481e,	// (0x0001406b) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0001ee38) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0001ee38) list_single_large_graphic_pane_g

0x4f92,	// (0x000147df) wait_border_pane_g2_copy1

0xc982,	// (0x0001c1cf) list_single_large_graphic_pane_g4_cp2

0x68a6,	// (0x000160f3) list_single_large_graphic_pane_t1_ParamLimits

0x68a6,	// (0x000160f3) list_single_large_graphic_pane_t1

0x53ec,	// (0x00014c39) list_double_pane_g1_ParamLimits

0x53ec,	// (0x00014c39) list_double_pane_g1

0xc98a,	// (0x0001c1d7) list_double_pane_g2_ParamLimits

0xc98a,	// (0x0001c1d7) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0001ee3f) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0001ee3f) list_double_pane_g

0x80f2,	// (0x0001793f) list_double_pane_t1_ParamLimits

0x80f2,	// (0x0001793f) list_double_pane_t1

0xc996,	// (0x0001c1e3) list_double_pane_t2_ParamLimits

0xc996,	// (0x0001c1e3) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0001ee44) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0001ee44) list_double_pane_t

0xc9a8,	// (0x0001c1f5) list_double2_pane_g1_ParamLimits

0xc9a8,	// (0x0001c1f5) list_double2_pane_g1

0xc9b9,	// (0x0001c206) list_double2_pane_g2_ParamLimits

0xc9b9,	// (0x0001c206) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0001ee49) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0001ee49) list_double2_pane_g

0xc9c5,	// (0x0001c212) list_double2_pane_t1_ParamLimits

0xc9c5,	// (0x0001c212) list_double2_pane_t1

0xc9db,	// (0x0001c228) list_double2_pane_t2_ParamLimits

0xc9db,	// (0x0001c228) list_double2_pane_t2

0x0001,

0xf601,	// (0x0001ee4e) list_double2_pane_t_ParamLimits

0xf601,	// (0x0001ee4e) list_double2_pane_t

0x53ec,	// (0x00014c39) list_double_number_pane_g1_ParamLimits

0x53ec,	// (0x00014c39) list_double_number_pane_g1

0xc98a,	// (0x0001c1d7) list_double_number_pane_g2_ParamLimits

0xc98a,	// (0x0001c1d7) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0001ee3f) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0001ee3f) list_double_number_pane_g

0xc9ed,	// (0x0001c23a) list_double_number_pane_t1_ParamLimits

0xc9ed,	// (0x0001c23a) list_double_number_pane_t1

0xc9ff,	// (0x0001c24c) list_double_number_pane_t2_ParamLimits

0xc9ff,	// (0x0001c24c) list_double_number_pane_t2

0xca15,	// (0x0001c262) list_double_number_pane_t3_ParamLimits

0xca15,	// (0x0001c262) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0001ee53) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0001ee53) list_double_number_pane_t

0xca27,	// (0x0001c274) list_double_graphic_pane_g1_ParamLimits

0xca27,	// (0x0001c274) list_double_graphic_pane_g1

0xca33,	// (0x0001c280) list_double_graphic_pane_g2_ParamLimits

0xca33,	// (0x0001c280) list_double_graphic_pane_g2

0xca42,	// (0x0001c28f) list_double_graphic_pane_g3_ParamLimits

0xca42,	// (0x0001c28f) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0001ee5a) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0001ee5a) list_double_graphic_pane_g

0xca5a,	// (0x0001c2a7) list_double_graphic_pane_t1_ParamLimits

0xca5a,	// (0x0001c2a7) list_double_graphic_pane_t1

0xca70,	// (0x0001c2bd) list_double_graphic_pane_t2_ParamLimits

0xca70,	// (0x0001c2bd) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0001ee63) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0001ee63) list_double_graphic_pane_t

0xca82,	// (0x0001c2cf) list_double2_graphic_pane_g1_ParamLimits

0xca82,	// (0x0001c2cf) list_double2_graphic_pane_g1

0x3e4a,	// (0x00013697) list_double2_graphic_pane_g2_ParamLimits

0x3e4a,	// (0x00013697) list_double2_graphic_pane_g2

0xc9b9,	// (0x0001c206) list_double2_graphic_pane_g3_ParamLimits

0xc9b9,	// (0x0001c206) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0001ee68) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0001ee68) list_double2_graphic_pane_g

0xca8e,	// (0x0001c2db) list_double2_graphic_pane_t1_ParamLimits

0xca8e,	// (0x0001c2db) list_double2_graphic_pane_t1

0xcaa4,	// (0x0001c2f1) list_double2_graphic_pane_t2_ParamLimits

0xcaa4,	// (0x0001c2f1) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0001ee6f) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0001ee6f) list_double2_graphic_pane_t

0xcab6,	// (0x0001c303) list_double_large_graphic_pane_g1_ParamLimits

0xcab6,	// (0x0001c303) list_double_large_graphic_pane_g1

0xcae1,	// (0x0001c32e) list_double_large_graphic_pane_g2_ParamLimits

0xcae1,	// (0x0001c32e) list_double_large_graphic_pane_g2

0xc98a,	// (0x0001c1d7) list_double_large_graphic_pane_g3_ParamLimits

0xc98a,	// (0x0001c1d7) list_double_large_graphic_pane_g3

0xcaf2,	// (0x0001c33f) list_double_large_graphic_pane_g4_ParamLimits

0xcaf2,	// (0x0001c33f) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0001ee74) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0001ee74) list_double_large_graphic_pane_g

0xcb04,	// (0x0001c351) list_double_large_graphic_pane_t1_ParamLimits

0xcb04,	// (0x0001c351) list_double_large_graphic_pane_t1

0xcb1d,	// (0x0001c36a) list_double_large_graphic_pane_t2_ParamLimits

0xcb1d,	// (0x0001c36a) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0001ee7f) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0001ee7f) list_double_large_graphic_pane_t

0xcb2f,	// (0x0001c37c) list_double2_large_graphic_pane_g1_ParamLimits

0xcb2f,	// (0x0001c37c) list_double2_large_graphic_pane_g1

0xc9a8,	// (0x0001c1f5) list_double2_large_graphic_pane_g2_ParamLimits

0xc9a8,	// (0x0001c1f5) list_double2_large_graphic_pane_g2

0xc9b9,	// (0x0001c206) list_double2_large_graphic_pane_g3_ParamLimits

0xc9b9,	// (0x0001c206) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0001ee84) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0001ee84) list_double2_large_graphic_pane_g

0xcb3b,	// (0x0001c388) list_double2_large_graphic_pane_t1_ParamLimits

0xcb3b,	// (0x0001c388) list_double2_large_graphic_pane_t1

0xcb51,	// (0x0001c39e) list_double2_large_graphic_pane_t2_ParamLimits

0xcb51,	// (0x0001c39e) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0001ee8b) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0001ee8b) list_double2_large_graphic_pane_t

0xcb63,	// (0x0001c3b0) list_double_heading_pane_g1_ParamLimits

0xcb63,	// (0x0001c3b0) list_double_heading_pane_g1

0xcb74,	// (0x0001c3c1) list_double_heading_pane_g2_ParamLimits

0xcb74,	// (0x0001c3c1) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0001ee90) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0001ee90) list_double_heading_pane_g

0xcb80,	// (0x0001c3cd) list_double_heading_pane_t1_ParamLimits

0xcb80,	// (0x0001c3cd) list_double_heading_pane_t1

0xcb96,	// (0x0001c3e3) list_double_heading_pane_t2_ParamLimits

0xcb96,	// (0x0001c3e3) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0001ee95) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0001ee95) list_double_heading_pane_t

0x2d6c,	// (0x000125b9) list_double_graphic_heading_pane_g1_ParamLimits

0x2d6c,	// (0x000125b9) list_double_graphic_heading_pane_g1

0xcb63,	// (0x0001c3b0) list_double_graphic_heading_pane_g2_ParamLimits

0xcb63,	// (0x0001c3b0) list_double_graphic_heading_pane_g2

0xcb74,	// (0x0001c3c1) list_double_graphic_heading_pane_g3_ParamLimits

0xcb74,	// (0x0001c3c1) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0001ee9a) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0001ee9a) list_double_graphic_heading_pane_g

0xcba8,	// (0x0001c3f5) list_double_graphic_heading_pane_t1_ParamLimits

0xcba8,	// (0x0001c3f5) list_double_graphic_heading_pane_t1

0xcbbe,	// (0x0001c40b) list_double_graphic_heading_pane_t2_ParamLimits

0xcbbe,	// (0x0001c40b) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0001eea1) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0001eea1) list_double_graphic_heading_pane_t

0xcae1,	// (0x0001c32e) list_double_time_pane_g1_ParamLimits

0xcae1,	// (0x0001c32e) list_double_time_pane_g1

0xc98a,	// (0x0001c1d7) list_double_time_pane_g2_ParamLimits

0xc98a,	// (0x0001c1d7) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0001eea6) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0001eea6) list_double_time_pane_g

0xcbd0,	// (0x0001c41d) list_double_time_pane_t1_ParamLimits

0xcbd0,	// (0x0001c41d) list_double_time_pane_t1

0xcbe6,	// (0x0001c433) list_double_time_pane_t2_ParamLimits

0xcbe6,	// (0x0001c433) list_double_time_pane_t2

0xcbf8,	// (0x0001c445) list_double_time_pane_t3_ParamLimits

0xcbf8,	// (0x0001c445) list_double_time_pane_t3

0xcc0a,	// (0x0001c457) list_double_time_pane_t4_ParamLimits

0xcc0a,	// (0x0001c457) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0001eeab) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0001eeab) list_double_time_pane_t

0x3e4a,	// (0x00013697) list_setting_pane_g1_ParamLimits

0x3e4a,	// (0x00013697) list_setting_pane_g1

0xc9b9,	// (0x0001c206) list_setting_pane_g2_ParamLimits

0xc9b9,	// (0x0001c206) list_setting_pane_g2

0x0001,

0xf667,	// (0x0001eeb4) list_setting_pane_g_ParamLimits

0xf667,	// (0x0001eeb4) list_setting_pane_g

0xcc1c,	// (0x0001c469) list_setting_pane_t1_ParamLimits

0xcc1c,	// (0x0001c469) list_setting_pane_t1

0xcc33,	// (0x0001c480) list_setting_pane_t2_ParamLimits

0xcc33,	// (0x0001c480) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0001eeb9) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0001eeb9) list_setting_pane_t

0xcc72,	// (0x0001c4bf) set_value_pane_cp_ParamLimits

0xcc72,	// (0x0001c4bf) set_value_pane_cp

0x3e4a,	// (0x00013697) list_setting_number_pane_g1_ParamLimits

0x3e4a,	// (0x00013697) list_setting_number_pane_g1

0xc9b9,	// (0x0001c206) list_setting_number_pane_g2_ParamLimits

0xc9b9,	// (0x0001c206) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x0001eeb4) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x0001eeb4) list_setting_number_pane_g

0xcc7e,	// (0x0001c4cb) list_setting_number_pane_t1_ParamLimits

0xcc7e,	// (0x0001c4cb) list_setting_number_pane_t1

0xcc92,	// (0x0001c4df) list_setting_number_pane_t2_ParamLimits

0xcc92,	// (0x0001c4df) list_setting_number_pane_t2

0xcca9,	// (0x0001c4f6) list_setting_number_pane_t3_ParamLimits

0xcca9,	// (0x0001c4f6) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x0001eec0) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x0001eec0) list_setting_number_pane_t

0xcc72,	// (0x0001c4bf) set_value_pane_ParamLimits

0xcc72,	// (0x0001c4bf) set_value_pane

0x305b,	// (0x000128a8) bg_set_opt_pane_ParamLimits

0x305b,	// (0x000128a8) bg_set_opt_pane

0x307c,	// (0x000128c9) set_value_pane_t1

0x308a,	// (0x000128d7) slider_set_pane_cp3

0x3093,	// (0x000128e0) volume_small_pane_cp

0x309c,	// (0x000128e9) list_form_gen_pane

0x30a5,	// (0x000128f2) scroll_pane_cp8

0xccec,	// (0x0001c539) form_field_data_pane_ParamLimits

0xccec,	// (0x0001c539) form_field_data_pane

0xcd03,	// (0x0001c550) form_field_data_wide_pane_ParamLimits

0xcd03,	// (0x0001c550) form_field_data_wide_pane

0xcd23,	// (0x0001c570) form_field_popup_pane_ParamLimits

0xcd23,	// (0x0001c570) form_field_popup_pane

0xcd3b,	// (0x0001c588) form_field_popup_wide_pane_ParamLimits

0xcd3b,	// (0x0001c588) form_field_popup_wide_pane

0x3140,	// (0x0001298d) form_field_slider_pane_ParamLimits

0x3140,	// (0x0001298d) form_field_slider_pane

0x3153,	// (0x000129a0) form_field_slider_wide_pane_ParamLimits

0x3153,	// (0x000129a0) form_field_slider_wide_pane

0x3166,	// (0x000129b3) data_form_pane

0xcd5c,	// (0x0001c5a9) form_field_data_pane_t1

0x3194,	// (0x000129e1) input_focus_pane

0x31a2,	// (0x000129ef) data_form_wide_pane

0x31ce,	// (0x00012a1b) form_field_data_wide_pane_t1

0x2980,	// (0x000121cd) input_focus_pane_cp6

0xcd76,	// (0x0001c5c3) form_field_popup_pane_t1

0x3194,	// (0x000129e1) input_focus_pane_cp7

0x3205,	// (0x00012a52) list_form_pane

0x3219,	// (0x00012a66) form_field_popup_wide_pane_t1

0x3194,	// (0x000129e1) input_focus_pane_cp8

0x322e,	// (0x00012a7b) list_form_wide_pane

0xcd98,	// (0x0001c5e5) form_field_slider_pane_t1_ParamLimits

0xcd98,	// (0x0001c5e5) form_field_slider_pane_t1

0xcdb0,	// (0x0001c5fd) form_field_slider_pane_t2_ParamLimits

0xcdb0,	// (0x0001c5fd) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x0001eed0) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x0001eed0) form_field_slider_pane_t

0x261e,	// (0x00011e6b) input_focus_pane_cp9_ParamLimits

0x261e,	// (0x00011e6b) input_focus_pane_cp9

0xcdc5,	// (0x0001c612) slider_cont_pane_ParamLimits

0xcdc5,	// (0x0001c612) slider_cont_pane

0x327d,	// (0x00012aca) form_field_slider_wide_pane_t1_ParamLimits

0x327d,	// (0x00012aca) form_field_slider_wide_pane_t1

0x328f,	// (0x00012adc) form_field_slider_wide_pane_t2_ParamLimits

0x328f,	// (0x00012adc) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x0001eed5) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x0001eed5) form_field_slider_wide_pane_t

0x261e,	// (0x00011e6b) input_focus_pane_cp10_ParamLimits

0x261e,	// (0x00011e6b) input_focus_pane_cp10

0xcdd9,	// (0x0001c626) slider_cont_pane_cp1_ParamLimits

0xcdd9,	// (0x0001c626) slider_cont_pane_cp1

0xcded,	// (0x0001c63a) slider_form_pane_cp

0x32bd,	// (0x00012b0a) input_focus_pane_g1

0x32c5,	// (0x00012b12) input_focus_pane_g2

0x32cd,	// (0x00012b1a) input_focus_pane_g3

0x32d5,	// (0x00012b22) input_focus_pane_g4

0x32dd,	// (0x00012b2a) input_focus_pane_g5

0x32e5,	// (0x00012b32) input_focus_pane_g6

0x32ed,	// (0x00012b3a) input_focus_pane_g7

0x32f5,	// (0x00012b42) input_focus_pane_g8

0x32fd,	// (0x00012b4a) input_focus_pane_g9

0x229f,	// (0x00011aec) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0001eeda) input_focus_pane_g

0x4f9b,	// (0x000147e8) wait_border_pane_g3_copy1

0xcdf5,	// (0x0001c642) data_form_pane_t1

0x229f,	// (0x00011aec) wait_anim_pane_g1_copy1

0xdb4e,	// (0x0001d39b) data_form_wide_pane_t1

0xce0f,	// (0x0001c65c) list_form_graphic_pane_cp_ParamLimits

0xce0f,	// (0x0001c65c) list_form_graphic_pane_cp

0x5f05,	// (0x00015752) slider_form_pane_g1

0x5f0e,	// (0x0001575b) slider_form_pane_g2

0x0006,

0xf98b,	// (0x0001f1d8) slider_form_pane_g

0xce0f,	// (0x0001c65c) list_form_graphic_pane_ParamLimits

0xce0f,	// (0x0001c65c) list_form_graphic_pane

0x3355,	// (0x00012ba2) list_form_graphic_pane_g1

0x335d,	// (0x00012baa) list_form_graphic_pane_t1_ParamLimits

0x335d,	// (0x00012baa) list_form_graphic_pane_t1

0x2389,	// (0x00011bd6) list_highlight_pane_cp5_ParamLimits

0x2389,	// (0x00011bd6) list_highlight_pane_cp5

0xce21,	// (0x0001c66e) find_pane_g1

0x337b,	// (0x00012bc8) input_find_pane

0xce2a,	// (0x0001c677) input_find_pane_g1_ParamLimits

0xce2a,	// (0x0001c677) input_find_pane_g1

0xce36,	// (0x0001c683) input_find_pane_t1_ParamLimits

0xce36,	// (0x0001c683) input_find_pane_t1

0xce4b,	// (0x0001c698) input_find_pane_t2_ParamLimits

0xce4b,	// (0x0001c698) input_find_pane_t2

0x0001,

0xf6a2,	// (0x0001eeef) input_find_pane_t_ParamLimits

0xf6a2,	// (0x0001eeef) input_find_pane_t

0x33ba,	// (0x00012c07) input_focus_pane_cp5_ParamLimits

0x33ba,	// (0x00012c07) input_focus_pane_cp5

0x33d4,	// (0x00012c21) bg_popup_window_pane_cp2_ParamLimits

0x33d4,	// (0x00012c21) bg_popup_window_pane_cp2

0x33e1,	// (0x00012c2e) listscroll_menu_pane_ParamLimits

0x33e1,	// (0x00012c2e) listscroll_menu_pane

0xce6c,	// (0x0001c6b9) popup_submenu_window_ParamLimits

0xce6c,	// (0x0001c6b9) popup_submenu_window

0x3419,	// (0x00012c66) find_popup_pane_g1

0x3421,	// (0x00012c6e) input_popup_find_pane_cp

0x33ba,	// (0x00012c07) input_focus_pane_cp4_ParamLimits

0x33ba,	// (0x00012c07) input_focus_pane_cp4

0x3437,	// (0x00012c84) input_popup_find_pane_t1_ParamLimits

0x3437,	// (0x00012c84) input_popup_find_pane_t1

0x22a9,	// (0x00011af6) bg_popup_sub_pane_cp

0x3465,	// (0x00012cb2) listscroll_popup_sub_pane

0x346d,	// (0x00012cba) list_submenu_pane_ParamLimits

0x346d,	// (0x00012cba) list_submenu_pane

0x347e,	// (0x00012ccb) scroll_pane_cp4

0x3486,	// (0x00012cd3) list_single_popup_submenu_pane_ParamLimits

0x3486,	// (0x00012cd3) list_single_popup_submenu_pane

0x349a,	// (0x00012ce7) list_single_popup_submenu_pane_g1

0x34a2,	// (0x00012cef) list_single_popup_submenu_pane_t1_ParamLimits

0x34a2,	// (0x00012cef) list_single_popup_submenu_pane_t1

0x261e,	// (0x00011e6b) bg_active_tab_pane_cp1_ParamLimits

0x261e,	// (0x00011e6b) bg_active_tab_pane_cp1

0xcea6,	// (0x0001c6f3) tabs_2_active_pane_g1

0xceae,	// (0x0001c6fb) tabs_2_active_pane_t1

0x261e,	// (0x00011e6b) bg_passive_tab_pane_cp1_ParamLimits

0x261e,	// (0x00011e6b) bg_passive_tab_pane_cp1

0xcea6,	// (0x0001c6f3) tabs_2_passive_pane_g1

0xceae,	// (0x0001c6fb) tabs_2_passive_pane_t1

0x2389,	// (0x00011bd6) bg_active_tab_pane_cp4

0xcec0,	// (0x0001c70d) tabs_2_long_active_pane_t1

0x436e,	// (0x00013bbb) bg_passive_tab_pane_cp4

0x1014,	// (0x00010861) list_single_midp_graphic_pane_g4_ParamLimits

0x2389,	// (0x00011bd6) bg_active_tab_pane_cp5

0xced3,	// (0x0001c720) tabs_3_long_active_pane_t1

0x436e,	// (0x00013bbb) bg_passive_tab_pane_cp5

0x1014,	// (0x00010861) list_single_midp_graphic_pane_g4

0x2389,	// (0x00011bd6) bg_popup_window_pane_cp13_ParamLimits

0x2389,	// (0x00011bd6) bg_popup_window_pane_cp13

0x3519,	// (0x00012d66) listscroll_popup_fast_pane_ParamLimits

0x3519,	// (0x00012d66) listscroll_popup_fast_pane

0x3528,	// (0x00012d75) grid_popup_fast_pane_ParamLimits

0x3528,	// (0x00012d75) grid_popup_fast_pane

0x353a,	// (0x00012d87) scroll_pane_cp9_ParamLimits

0x353a,	// (0x00012d87) scroll_pane_cp9

0x7dc1,	// (0x0001760e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7dc1,	// (0x0001760e) list_single_graphic_hl_pane_t1_cp2

0x355e,	// (0x00012dab) input_focus_pane_cp20_ParamLimits

0x355e,	// (0x00012dab) input_focus_pane_cp20

0x356c,	// (0x00012db9) query_popup_data_pane_t1_ParamLimits

0x356c,	// (0x00012db9) query_popup_data_pane_t1

0x357f,	// (0x00012dcc) query_popup_data_pane_t2_ParamLimits

0x357f,	// (0x00012dcc) query_popup_data_pane_t2

0x35c5,	// (0x00012e12) query_popup_data_pane_t3_ParamLimits

0x35c5,	// (0x00012e12) query_popup_data_pane_t3

0x3606,	// (0x00012e53) query_popup_data_pane_t4_ParamLimits

0x3606,	// (0x00012e53) query_popup_data_pane_t4

0x3642,	// (0x00012e8f) query_popup_data_pane_t5_ParamLimits

0x3642,	// (0x00012e8f) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x0001eef4) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x0001eef4) query_popup_data_pane_t

0x32bd,	// (0x00012b0a) bg_set_opt_pane_g1

0x32c5,	// (0x00012b12) bg_set_opt_pane_g2

0x32cd,	// (0x00012b1a) bg_set_opt_pane_g3

0x32d5,	// (0x00012b22) bg_set_opt_pane_g4

0x32dd,	// (0x00012b2a) bg_set_opt_pane_g5

0x32e5,	// (0x00012b32) bg_set_opt_pane_g6

0x32ed,	// (0x00012b3a) bg_set_opt_pane_g7

0x32f5,	// (0x00012b42) bg_set_opt_pane_g8

0x32fd,	// (0x00012b4a) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x0001eeff) bg_set_opt_pane_g

0x0638,	// (0x0000fe85) control_top_pane_stacon_ParamLimits

0x0638,	// (0x0000fe85) control_top_pane_stacon

0x068b,	// (0x0000fed8) signal_pane_stacon_ParamLimits

0x068b,	// (0x0000fed8) signal_pane_stacon

0x3cbf,	// (0x0001350c) stacon_top_pane_g1_ParamLimits

0x3cbf,	// (0x0001350c) stacon_top_pane_g1

0x06b0,	// (0x0000fefd) title_pane_stacon_ParamLimits

0x06b0,	// (0x0000fefd) title_pane_stacon

0x06da,	// (0x0000ff27) uni_indicator_pane_stacon_ParamLimits

0x06da,	// (0x0000ff27) uni_indicator_pane_stacon

0x06ef,	// (0x0000ff3c) battery_pane_stacon_ParamLimits

0x06ef,	// (0x0000ff3c) battery_pane_stacon

0x0733,	// (0x0000ff80) control_bottom_pane_stacon_ParamLimits

0x0733,	// (0x0000ff80) control_bottom_pane_stacon

0x0756,	// (0x0000ffa3) navi_pane_stacon_ParamLimits

0x0756,	// (0x0000ffa3) navi_pane_stacon

0x3ce1,	// (0x0001352e) stacon_bottom_pane_g1_ParamLimits

0x3ce1,	// (0x0001352e) stacon_bottom_pane_g1

0x039b,	// (0x0000fbe8) aid_levels_signal_lsc_ParamLimits

0x039b,	// (0x0000fbe8) aid_levels_signal_lsc

0x03b1,	// (0x0000fbfe) signal_pane_stacon_g1_ParamLimits

0x03b1,	// (0x0000fbfe) signal_pane_stacon_g1

0x03c5,	// (0x0000fc12) signal_pane_stacon_g2_ParamLimits

0x03c5,	// (0x0000fc12) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x0001ef12) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0001ef12) signal_pane_stacon_g

0x03fa,	// (0x0000fc47) title_pane_stacon_t1_ParamLimits

0x03fa,	// (0x0000fc47) title_pane_stacon_t1

0x3686,	// (0x00012ed3) uni_indicator_pane_stacon_g1

0x3690,	// (0x00012edd) uni_indicator_pane_stacon_g2

0x369a,	// (0x00012ee7) uni_indicator_pane_stacon_g3

0x36a4,	// (0x00012ef1) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0001ef1e) uni_indicator_pane_stacon_g

0x041f,	// (0x0000fc6c) control_top_pane_stacon_g1

0x0427,	// (0x0000fc74) control_top_pane_stacon_t1_ParamLimits

0x0427,	// (0x0000fc74) control_top_pane_stacon_t1

0x045e,	// (0x0000fcab) aid_levels_battery_lsc_ParamLimits

0x045e,	// (0x0000fcab) aid_levels_battery_lsc

0x0475,	// (0x0000fcc2) battery_pane_stacon_g1_ParamLimits

0x0475,	// (0x0000fcc2) battery_pane_stacon_g1

0x0488,	// (0x0000fcd5) battery_pane_stacon_g2_ParamLimits

0x0488,	// (0x0000fcd5) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0001ef27) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0001ef27) battery_pane_stacon_g

0x04c6,	// (0x0000fd13) navi_icon_pane_stacon

0x04da,	// (0x0000fd27) navi_navi_pane_stacon

0x04c6,	// (0x0000fd13) navi_text_pane_stacon

0x041f,	// (0x0000fc6c) control_bottom_pane_stacon_g1

0x04ee,	// (0x0000fd3b) control_bottom_pane_stacon_t1_ParamLimits

0x04ee,	// (0x0000fd3b) control_bottom_pane_stacon_t1

0xcee5,	// (0x0001c732) grid_app_pane_ParamLimits

0xcee5,	// (0x0001c732) grid_app_pane

0xcf1d,	// (0x0001c76a) scroll_pane_cp15_ParamLimits

0xcf1d,	// (0x0001c76a) scroll_pane_cp15

0xcf36,	// (0x0001c783) cell_app_pane_ParamLimits

0xcf36,	// (0x0001c783) cell_app_pane

0xcf7b,	// (0x0001c7c8) cell_app_pane_g1_ParamLimits

0xcf7b,	// (0x0001c7c8) cell_app_pane_g1

0x3745,	// (0x00012f92) cell_app_pane_g2_ParamLimits

0x3745,	// (0x00012f92) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0001ef2c) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0001ef2c) cell_app_pane_g

0xcf9b,	// (0x0001c7e8) cell_app_pane_t1_ParamLimits

0xcf9b,	// (0x0001c7e8) cell_app_pane_t1

0x3768,	// (0x00012fb5) grid_highlight_pane_ParamLimits

0x3768,	// (0x00012fb5) grid_highlight_pane

0x32bd,	// (0x00012b0a) cell_highlight_pane_g1

0x32c5,	// (0x00012b12) cell_highlight_pane_g2

0x32cd,	// (0x00012b1a) cell_highlight_pane_g3

0x32d5,	// (0x00012b22) cell_highlight_pane_g4

0x32dd,	// (0x00012b2a) cell_highlight_pane_g5

0x32e5,	// (0x00012b32) cell_highlight_pane_g6

0x32ed,	// (0x00012b3a) cell_highlight_pane_g7

0x32f5,	// (0x00012b42) cell_highlight_pane_g8

0x32fd,	// (0x00012b4a) cell_highlight_pane_g9

0x229f,	// (0x00011aec) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0001eeda) cell_highlight_pane_g

0x3779,	// (0x00012fc6) bg_scroll_pane

0x0538,	// (0x0000fd85) scroll_handle_pane

0x37c0,	// (0x0001300d) scroll_bg_pane_g1

0x37d5,	// (0x00013022) scroll_bg_pane_g2

0x37ed,	// (0x0001303a) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x0001ef31) scroll_bg_pane_g

0x3802,	// (0x0001304f) scroll_handle_focus_pane_ParamLimits

0x3802,	// (0x0001304f) scroll_handle_focus_pane

0x37c0,	// (0x0001300d) scroll_handle_pane_g1

0x380f,	// (0x0001305c) scroll_handle_pane_g2

0x37ed,	// (0x0001303a) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0001ef38) scroll_handle_pane_g

0x33ba,	// (0x00012c07) bg_popup_sub_pane_cp21_ParamLimits

0x33ba,	// (0x00012c07) bg_popup_sub_pane_cp21

0x3823,	// (0x00013070) popup_fep_japan_predictive_window_t1_ParamLimits

0x3823,	// (0x00013070) popup_fep_japan_predictive_window_t1

0x383d,	// (0x0001308a) popup_fep_japan_predictive_window_t2_ParamLimits

0x383d,	// (0x0001308a) popup_fep_japan_predictive_window_t2

0x3870,	// (0x000130bd) popup_fep_japan_predictive_window_t3_ParamLimits

0x3870,	// (0x000130bd) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x0001ef3f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x0001ef3f) popup_fep_japan_predictive_window_t

0x22a9,	// (0x00011af6) bg_popup_sub_pane_cp23

0x38a7,	// (0x000130f4) listscroll_japin_cand_pane

0x38af,	// (0x000130fc) popup_fep_japan_candidate_window_t1

0x38bd,	// (0x0001310a) candidate_pane_ParamLimits

0x38bd,	// (0x0001310a) candidate_pane

0x38cf,	// (0x0001311c) scroll_pane_cp30

0x38d7,	// (0x00013124) list_single_popup_jap_candidate_pane_ParamLimits

0x38d7,	// (0x00013124) list_single_popup_jap_candidate_pane

0x22a9,	// (0x00011af6) list_highlight_pane_cp30

0x38ec,	// (0x00013139) list_single_popup_jap_candidate_pane_t1

0x38fb,	// (0x00013148) level_1_signal

0x390d,	// (0x0001315a) level_2_signal

0x3920,	// (0x0001316d) level_3_signal

0x3933,	// (0x00013180) level_4_signal

0x3946,	// (0x00013193) level_5_signal

0x3959,	// (0x000131a6) level_6_signal

0x396c,	// (0x000131b9) level_7_signal

0x38fb,	// (0x00013148) level_1_battery

0x390d,	// (0x0001315a) level_2_battery

0x3920,	// (0x0001316d) level_3_battery

0x3933,	// (0x00013180) level_4_battery

0x3946,	// (0x00013193) level_5_battery

0x3959,	// (0x000131a6) level_6_battery

0x396c,	// (0x000131b9) level_7_battery

0x3997,	// (0x000131e4) list_menu_pane_ParamLimits

0x3997,	// (0x000131e4) list_menu_pane

0x39ad,	// (0x000131fa) scroll_pane_cp25_ParamLimits

0x39ad,	// (0x000131fa) scroll_pane_cp25

0x39c6,	// (0x00013213) list_double2_graphic_pane_cp2_ParamLimits

0x39c6,	// (0x00013213) list_double2_graphic_pane_cp2

0x39c6,	// (0x00013213) list_double2_large_graphic_pane_cp2_ParamLimits

0x39c6,	// (0x00013213) list_double2_large_graphic_pane_cp2

0x39c6,	// (0x00013213) list_double2_pane_cp2_ParamLimits

0x39c6,	// (0x00013213) list_double2_pane_cp2

0x39c6,	// (0x00013213) list_double_graphic_pane_cp2_ParamLimits

0x39c6,	// (0x00013213) list_double_graphic_pane_cp2

0x39c6,	// (0x00013213) list_double_large_graphic_pane_cp2_ParamLimits

0x39c6,	// (0x00013213) list_double_large_graphic_pane_cp2

0x39c6,	// (0x00013213) list_double_number_pane_cp2_ParamLimits

0x39c6,	// (0x00013213) list_double_number_pane_cp2

0x39c6,	// (0x00013213) list_double_pane_cp2_ParamLimits

0x39c6,	// (0x00013213) list_double_pane_cp2

0xcfc3,	// (0x0001c810) list_single_2graphic_pane_cp2_ParamLimits

0xcfc3,	// (0x0001c810) list_single_2graphic_pane_cp2

0xcfc3,	// (0x0001c810) list_single_graphic_heading_pane_cp2_ParamLimits

0xcfc3,	// (0x0001c810) list_single_graphic_heading_pane_cp2

0xcfc3,	// (0x0001c810) list_single_graphic_pane_cp2_ParamLimits

0xcfc3,	// (0x0001c810) list_single_graphic_pane_cp2

0xcfc3,	// (0x0001c810) list_single_heading_pane_cp2_ParamLimits

0xcfc3,	// (0x0001c810) list_single_heading_pane_cp2

0x3a03,	// (0x00013250) list_single_large_graphic_pane_cp2_ParamLimits

0x3a03,	// (0x00013250) list_single_large_graphic_pane_cp2

0xcfc3,	// (0x0001c810) list_single_number_heading_pane_cp2_ParamLimits

0xcfc3,	// (0x0001c810) list_single_number_heading_pane_cp2

0xcfc3,	// (0x0001c810) list_single_number_pane_cp2_ParamLimits

0xcfc3,	// (0x0001c810) list_single_number_pane_cp2

0xcfc3,	// (0x0001c810) list_single_pane_cp2_ParamLimits

0xcfc3,	// (0x0001c810) list_single_pane_cp2

0x3a7f,	// (0x000132cc) bg_popup_sub_pane_cp22

0x05ea,	// (0x0000fe37) popup_side_volume_key_window_g1

0x0614,	// (0x0000fe61) popup_side_volume_key_window_t1

0x0630,	// (0x0000fe7d) volume_small_pane_cp1

0x261e,	// (0x00011e6b) bg_popup_sub_pane_cp24_ParamLimits

0x261e,	// (0x00011e6b) bg_popup_sub_pane_cp24

0x3a95,	// (0x000132e2) fep_china_uni_candidate_pane_ParamLimits

0x3a95,	// (0x000132e2) fep_china_uni_candidate_pane

0x3aa9,	// (0x000132f6) fep_china_uni_entry_pane

0x3ab9,	// (0x00013306) popup_fep_china_uni_window_g1

0x3ad5,	// (0x00013322) fep_china_uni_entry_pane_g1

0x3add,	// (0x0001332a) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x0001ef70) fep_china_uni_entry_pane_g

0x3ae5,	// (0x00013332) fep_entry_item_pane

0x3aef,	// (0x0001333c) fep_candidate_item_pane

0x3af7,	// (0x00013344) fep_china_uni_candidate_pane_g1

0x3aff,	// (0x0001334c) fep_china_uni_candidate_pane_g2

0x3b07,	// (0x00013354) fep_china_uni_candidate_pane_g3

0x3b0f,	// (0x0001335c) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0001ef75) fep_china_uni_candidate_pane_g

0x229f,	// (0x00011aec) fep_entry_item_pane_g1

0x3b17,	// (0x00013364) fep_entry_item_pane_t1_ParamLimits

0x3b17,	// (0x00013364) fep_entry_item_pane_t1

0x3b2d,	// (0x0001337a) fep_candidate_item_pane_t1_ParamLimits

0x3b2d,	// (0x0001337a) fep_candidate_item_pane_t1

0x3b42,	// (0x0001338f) fep_candidate_item_pane_t2_ParamLimits

0x3b42,	// (0x0001338f) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x0001ef7e) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x0001ef7e) fep_candidate_item_pane_t

0x2389,	// (0x00011bd6) list_highlight_pane_cp31_ParamLimits

0x2389,	// (0x00011bd6) list_highlight_pane_cp31

0x3b54,	// (0x000133a1) level_1_signal_lsc

0x3b5d,	// (0x000133aa) level_2_signal_lsc

0x3b66,	// (0x000133b3) level_3_signal_lsc

0x3b6f,	// (0x000133bc) level_4_signal_lsc

0x3b78,	// (0x000133c5) level_5_signal_lsc

0x3b81,	// (0x000133ce) level_6_signal_lsc

0x3b8a,	// (0x000133d7) level_7_signal_lsc

0x3b8a,	// (0x000133d7) level_1_battery_lsc

0x3b93,	// (0x000133e0) level_2_battery_lsc

0x3b9c,	// (0x000133e9) level_3_battery_lsc

0x3ba5,	// (0x000133f2) level_4_battery_lsc

0x3bae,	// (0x000133fb) level_5_battery_lsc

0x3bb7,	// (0x00013404) level_6_battery_lsc

0x3b54,	// (0x000133a1) level_7_battery_lsc

0x3bc0,	// (0x0001340d) scroll_handle_focus_pane_g1

0x3bc9,	// (0x00013416) scroll_handle_focus_pane_g2

0x3bd2,	// (0x0001341f) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x0001ef83) scroll_handle_focus_pane_g

0xd051,	// (0x0001c89e) list_single_2graphic_pane_g1_ParamLimits

0xd051,	// (0x0001c89e) list_single_2graphic_pane_g1

0xc95f,	// (0x0001c1ac) list_single_2graphic_pane_g2_ParamLimits

0xc95f,	// (0x0001c1ac) list_single_2graphic_pane_g2

0x481e,	// (0x0001406b) list_single_2graphic_pane_g3_ParamLimits

0x481e,	// (0x0001406b) list_single_2graphic_pane_g3

0xd05d,	// (0x0001c8aa) list_single_2graphic_pane_g4_ParamLimits

0xd05d,	// (0x0001c8aa) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0001ef8a) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0001ef8a) list_single_2graphic_pane_g

0xd06e,	// (0x0001c8bb) list_single_2graphic_pane_t1_ParamLimits

0xd06e,	// (0x0001c8bb) list_single_2graphic_pane_t1

0xd09c,	// (0x0001c8e9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd09c,	// (0x0001c8e9) list_double2_graphic_large_graphic_pane_g1

0xc9a8,	// (0x0001c1f5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc9a8,	// (0x0001c1f5) list_double2_graphic_large_graphic_pane_g2

0xc9b9,	// (0x0001c206) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc9b9,	// (0x0001c206) list_double2_graphic_large_graphic_pane_g3

0xd0ae,	// (0x0001c8fb) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd0ae,	// (0x0001c8fb) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0001ef93) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0001ef93) list_double2_graphic_large_graphic_pane_g

0xd0ba,	// (0x0001c907) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd0ba,	// (0x0001c907) list_double2_graphic_large_graphic_pane_t1

0xd0d0,	// (0x0001c91d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd0d0,	// (0x0001c91d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0001ef9c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0001ef9c) list_double2_graphic_large_graphic_pane_t

0x3da9,	// (0x000135f6) popup_fast_swap_window_ParamLimits

0x3da9,	// (0x000135f6) popup_fast_swap_window

0x3dc5,	// (0x00013612) popup_side_volume_key_window

0x3de1,	// (0x0001362e) stacon_top_pane

0x3deb,	// (0x00013638) status_pane_ParamLimits

0x3deb,	// (0x00013638) status_pane

0x3de1,	// (0x0001362e) status_small_pane

0x22a9,	// (0x00011af6) control_pane

0x22a9,	// (0x00011af6) stacon_bottom_pane

0x30a5,	// (0x000128f2) scroll_pane_cp121

0x309c,	// (0x000128e9) set_content_pane

0x3c85,	// (0x000134d2) bg_active_tab_pane_g1_cp1

0x3c73,	// (0x000134c0) bg_active_tab_pane_g2_cp1

0x3c8e,	// (0x000134db) bg_active_tab_pane_g3_cp1

0x3c85,	// (0x000134d2) bg_passive_tab_pane_g1_cp1

0x3c73,	// (0x000134c0) bg_passive_tab_pane_g2_cp1

0x3c8e,	// (0x000134db) bg_passive_tab_pane_g3_cp1

0xd0e2,	// (0x0001c92f) bg_active_tab_pane_g1_cp2

0x3c73,	// (0x000134c0) bg_active_tab_pane_g2_cp2

0xd0eb,	// (0x0001c938) bg_active_tab_pane_g3_cp2

0xd0e2,	// (0x0001c92f) bg_passive_tab_pane_g1_cp2

0x3c73,	// (0x000134c0) bg_passive_tab_pane_g2_cp2

0xd0eb,	// (0x0001c938) bg_passive_tab_pane_g3_cp2

0xd0f4,	// (0x0001c941) bg_active_tab_pane_g1_cp3

0x3c73,	// (0x000134c0) bg_active_tab_pane_g2_cp3

0xd0fd,	// (0x0001c94a) bg_active_tab_pane_g3_cp3

0xd0f4,	// (0x0001c941) bg_passive_tab_pane_g1_cp3

0x3c73,	// (0x000134c0) bg_passive_tab_pane_g2_cp3

0xd0fd,	// (0x0001c94a) bg_passive_tab_pane_g3_cp3

0xd106,	// (0x0001c953) bg_active_tab_pane_g1_cp4

0x3c73,	// (0x000134c0) bg_active_tab_pane_g2_cp4

0xd10f,	// (0x0001c95c) bg_active_tab_pane_g3_cp4

0xd106,	// (0x0001c953) bg_passive_tab_pane_g1_cp4

0x3c73,	// (0x000134c0) bg_passive_tab_pane_g2_cp4

0xd10f,	// (0x0001c95c) bg_passive_tab_pane_g3_cp4

0x3cfd,	// (0x0001354a) bg_active_tab_pane_g1_cp5

0x3c73,	// (0x000134c0) bg_active_tab_pane_g2_cp5

0x3d06,	// (0x00013553) bg_active_tab_pane_g3_cp5

0x3cfd,	// (0x0001354a) bg_passive_tab_pane_g1_cp5

0x3c73,	// (0x000134c0) bg_passive_tab_pane_g2_cp5

0x3d06,	// (0x00013553) bg_passive_tab_pane_g3_cp5

0x6635,	// (0x00015e82) list_set_graphic_pane_ParamLimits

0x6635,	// (0x00015e82) list_set_graphic_pane

0x22a9,	// (0x00011af6) bg_set_opt_pane_cp4

0xd118,	// (0x0001c965) list_set_graphic_pane_g1_ParamLimits

0xd118,	// (0x0001c965) list_set_graphic_pane_g1

0xd124,	// (0x0001c971) list_set_graphic_pane_g2_ParamLimits

0xd124,	// (0x0001c971) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x0001efa1) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x0001efa1) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0001f329) volume_small_pane_cp_g

0xd148,	// (0x0001c995) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd148,	// (0x0001c995) list_double2_large_graphic_pane_g1_cp2

0xd156,	// (0x0001c9a3) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd156,	// (0x0001c9a3) list_double2_large_graphic_pane_g2_cp2

0x3d79,	// (0x000135c6) list_double2_large_graphic_pane_g3_cp2

0x3d81,	// (0x000135ce) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3d81,	// (0x000135ce) list_double2_large_graphic_pane_t1_cp2

0x3d97,	// (0x000135e4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3d97,	// (0x000135e4) list_double2_large_graphic_pane_t2_cp2

0xd91e,	// (0x0001d16b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd91e,	// (0x0001d16b) list_double_large_graphic_pane_g1_cp2

0xd931,	// (0x0001d17e) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd931,	// (0x0001d17e) list_double_large_graphic_pane_g2_cp2

0x3f07,	// (0x00013754) list_double_large_graphic_pane_g3_cp2

0x5a9c,	// (0x000152e9) list_double_large_graphic_pane_g4_cp

0x5aa4,	// (0x000152f1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5aa4,	// (0x000152f1) list_double_large_graphic_pane_t1_cp2

0x5abb,	// (0x00015308) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5abb,	// (0x00015308) list_double_large_graphic_pane_t2_cp2

0xd167,	// (0x0001c9b4) list_double2_graphic_pane_g1_cp2_ParamLimits

0xd167,	// (0x0001c9b4) list_double2_graphic_pane_g1_cp2

0xd175,	// (0x0001c9c2) list_double2_graphic_pane_g2_cp2_ParamLimits

0xd175,	// (0x0001c9c2) list_double2_graphic_pane_g2_cp2

0xd186,	// (0x0001c9d3) list_double2_graphic_pane_g3_cp2

0x3e22,	// (0x0001366f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3e22,	// (0x0001366f) list_double2_graphic_pane_t1_cp2

0x3e38,	// (0x00013685) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3e38,	// (0x00013685) list_double2_graphic_pane_t2_cp2

0x3e4a,	// (0x00013697) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3e4a,	// (0x00013697) list_single_number_heading_pane_g1_cp2

0x3e56,	// (0x000136a3) list_single_number_heading_pane_g2_cp2

0x3e5e,	// (0x000136ab) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3e5e,	// (0x000136ab) list_single_number_heading_pane_t1_cp2

0xd190,	// (0x0001c9dd) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd190,	// (0x0001c9dd) list_single_number_heading_pane_t2_cp2

0x3e86,	// (0x000136d3) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3e86,	// (0x000136d3) list_single_number_heading_pane_t3_cp2

0x3e4a,	// (0x00013697) list_single_heading_pane_g1_cp2_ParamLimits

0x3e4a,	// (0x00013697) list_single_heading_pane_g1_cp2

0x3e56,	// (0x000136a3) list_single_heading_pane_g2_cp2

0x3e5e,	// (0x000136ab) list_single_heading_pane_t1_cp2_ParamLimits

0x3e5e,	// (0x000136ab) list_single_heading_pane_t1_cp2

0xd90a,	// (0x0001d157) list_single_heading_pane_t2_cp2_ParamLimits

0xd90a,	// (0x0001d157) list_single_heading_pane_t2_cp2

0x57ca,	// (0x00015017) list_double_graphic_pane_g1_cp2_ParamLimits

0x57ca,	// (0x00015017) list_double_graphic_pane_g1_cp2

0x57d6,	// (0x00015023) list_double_graphic_pane_g2_cp2_ParamLimits

0x57d6,	// (0x00015023) list_double_graphic_pane_g2_cp2

0x57e5,	// (0x00015032) list_double_graphic_pane_g3_cp2

0x57ed,	// (0x0001503a) list_double_graphic_pane_t1_cp2_ParamLimits

0x57ed,	// (0x0001503a) list_double_graphic_pane_t1_cp2

0x5803,	// (0x00015050) list_double_graphic_pane_t2_cp2_ParamLimits

0x5803,	// (0x00015050) list_double_graphic_pane_t2_cp2

0x3efb,	// (0x00013748) list_double_number_pane_g1_cp2_ParamLimits

0x3efb,	// (0x00013748) list_double_number_pane_g1_cp2

0x3f07,	// (0x00013754) list_double_number_pane_g2_cp2

0xd8c2,	// (0x0001d10f) list_double_number_pane_t1_cp2_ParamLimits

0xd8c2,	// (0x0001d10f) list_double_number_pane_t1_cp2

0x57a2,	// (0x00014fef) list_double_number_pane_t2_cp2_ParamLimits

0x57a2,	// (0x00014fef) list_double_number_pane_t2_cp2

0x57b8,	// (0x00015005) list_double_number_pane_t3_cp2_ParamLimits

0x57b8,	// (0x00015005) list_double_number_pane_t3_cp2

0xd810,	// (0x0001d05d) list_single_graphic_pane_g1_cp2_ParamLimits

0xd810,	// (0x0001d05d) list_single_graphic_pane_g1_cp2

0x3f5f,	// (0x000137ac) list_single_graphic_pane_g2_cp2_ParamLimits

0x3f5f,	// (0x000137ac) list_single_graphic_pane_g2_cp2

0x3f6b,	// (0x000137b8) list_single_graphic_pane_g3_cp2

0x564d,	// (0x00014e9a) list_single_graphic_pane_t1_cp2_ParamLimits

0x564d,	// (0x00014e9a) list_single_graphic_pane_t1_cp2

0x3f5f,	// (0x000137ac) list_single_number_pane_g1_cp2_ParamLimits

0x3f5f,	// (0x000137ac) list_single_number_pane_g1_cp2

0x3f6b,	// (0x000137b8) list_single_number_pane_g2_cp2

0x564d,	// (0x00014e9a) list_single_number_pane_t1_cp2_ParamLimits

0x564d,	// (0x00014e9a) list_single_number_pane_t1_cp2

0xd7fc,	// (0x0001d049) list_single_number_pane_t2_cp2_ParamLimits

0xd7fc,	// (0x0001d049) list_single_number_pane_t2_cp2

0xd156,	// (0x0001c9a3) list_double2_pane_g1_cp2_ParamLimits

0xd156,	// (0x0001c9a3) list_double2_pane_g1_cp2

0x3d79,	// (0x000135c6) list_double2_pane_g2_cp2

0x3ed3,	// (0x00013720) list_double2_pane_t1_cp2_ParamLimits

0x3ed3,	// (0x00013720) list_double2_pane_t1_cp2

0x3ee9,	// (0x00013736) list_double2_pane_t2_cp2_ParamLimits

0x3ee9,	// (0x00013736) list_double2_pane_t2_cp2

0x3efb,	// (0x00013748) list_double_pane_g1_cp2_ParamLimits

0x3efb,	// (0x00013748) list_double_pane_g1_cp2

0x3f07,	// (0x00013754) list_double_pane_g2_cp2

0x3f0f,	// (0x0001375c) list_double_pane_t1_cp2_ParamLimits

0x3f0f,	// (0x0001375c) list_double_pane_t1_cp2

0x3f25,	// (0x00013772) list_double_pane_t2_cp2_ParamLimits

0x3f25,	// (0x00013772) list_double_pane_t2_cp2

0x3f4f,	// (0x0001379c) list_single_pane_cp2_g3

0x3f5f,	// (0x000137ac) list_single_pane_g1_cp2_ParamLimits

0x3f5f,	// (0x000137ac) list_single_pane_g1_cp2

0x3f6b,	// (0x000137b8) list_single_pane_g2_cp2

0x3f73,	// (0x000137c0) list_single_pane_t1_cp2_ParamLimits

0x3f73,	// (0x000137c0) list_single_pane_t1_cp2

0xd1bc,	// (0x0001ca09) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd1bc,	// (0x0001ca09) list_single_large_graphic_pane_g1_cp2

0x3f97,	// (0x000137e4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3f97,	// (0x000137e4) list_single_large_graphic_pane_g2_cp2

0x3fa3,	// (0x000137f0) list_single_large_graphic_pane_g3_cp2

0x3fab,	// (0x000137f8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3fab,	// (0x000137f8) list_single_large_graphic_pane_g4_cp1

0x3fc5,	// (0x00013812) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3fc5,	// (0x00013812) list_single_large_graphic_pane_t1_cp2

0x5619,	// (0x00014e66) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5619,	// (0x00014e66) list_single_graphic_heading_pane_g1_cp2

0xd7d7,	// (0x0001d024) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd7d7,	// (0x0001d024) list_single_graphic_heading_pane_g4_cp2

0x3f6b,	// (0x000137b8) list_single_graphic_heading_pane_g5_cp2

0x5625,	// (0x00014e72) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5625,	// (0x00014e72) list_single_graphic_heading_pane_t1_cp2

0xd7e8,	// (0x0001d035) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd7e8,	// (0x0001d035) list_single_graphic_heading_pane_t2_cp2

0x55da,	// (0x00014e27) list_single_2graphic_pane_g1_cp2_ParamLimits

0x55da,	// (0x00014e27) list_single_2graphic_pane_g1_cp2

0xd7d7,	// (0x0001d024) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd7d7,	// (0x0001d024) list_single_2graphic_pane_g2_cp2

0x3f6b,	// (0x000137b8) list_single_2graphic_pane_g3_cp2

0x55f7,	// (0x00014e44) list_single_2graphic_pane_g4_cp2_ParamLimits

0x55f7,	// (0x00014e44) list_single_2graphic_pane_g4_cp2

0x5603,	// (0x00014e50) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5603,	// (0x00014e50) list_single_2graphic_pane_t1_cp2

0x229f,	// (0x00011aec) list_highlight_pane_g10_cp1

0x51a6,	// (0x000149f3) list_highlight_pane_g1_cp1

0x51ae,	// (0x000149fb) list_highlight_pane_g2_cp1

0x51b6,	// (0x00014a03) list_highlight_pane_g3_cp1

0x51be,	// (0x00014a0b) list_highlight_pane_g4_cp1

0x51c6,	// (0x00014a13) list_highlight_pane_g5_cp1

0x51ce,	// (0x00014a1b) list_highlight_pane_g6_cp1

0x51d6,	// (0x00014a23) list_highlight_pane_g7_cp1

0x51de,	// (0x00014a2b) list_highlight_pane_g8_cp1

0x51e6,	// (0x00014a33) list_highlight_pane_g9_cp1

0xd79d,	// (0x0001cfea) form_field_slider_pane_t3

0xd7ab,	// (0x0001cff8) form_field_slider_pane_t4

0x50e2,	// (0x0001492f) slider_form_pane_ParamLimits

0x50e2,	// (0x0001492f) slider_form_pane

0x22a9,	// (0x00011af6) control_abbreviations

0x22a9,	// (0x00011af6) control_conventions

0x22a9,	// (0x00011af6) control_definitions

0x22a9,	// (0x00011af6) format_table_attribute

0x58cc,	// (0x00015119) bg_popup_preview_window_pane_g9

0x22a9,	// (0x00011af6) format_table_data2

0x22a9,	// (0x00011af6) format_table_data3

0x22a9,	// (0x00011af6) format_table_data_example

0x0008,

0x22a9,	// (0x00011af6) intro_purpose

0xf8eb,	// (0x0001f138) bg_popup_preview_window_pane_g

0x22a9,	// (0x00011af6) texts_category

0x22a9,	// (0x00011af6) texts_graphics

0x3fdb,	// (0x00013828) text_digital

0x3fea,	// (0x00013837) text_primary

0x3ff9,	// (0x00013846) text_primary_small

0x4008,	// (0x00013855) text_secondary

0x4017,	// (0x00013864) text_title

0x60ef,	// (0x0001593c) bg_passive_tab_pane_g1_cp3_srt

0x3c73,	// (0x000134c0) bg_passive_tab_pane_g2_cp3_srt

0x60f8,	// (0x00015945) bg_passive_tab_pane_g3_cp3_srt

0x261e,	// (0x00011e6b) bg_active_tab_pane_cp3_srt_ParamLimits

0x261e,	// (0x00011e6b) bg_active_tab_pane_cp3_srt

0x6101,	// (0x0001594e) tabs_4_active_pane_srt_g1

0xdbf7,	// (0x0001d444) tabs_4_active_pane_srt_t1_ParamLimits

0xdbf7,	// (0x0001d444) tabs_4_active_pane_srt_t1

0x60ef,	// (0x0001593c) bg_active_tab_pane_g1_cp3_copy1

0x3c73,	// (0x000134c0) bg_active_tab_pane_g2_cp3_copy1

0x60f8,	// (0x00015945) bg_active_tab_pane_g3_cp3_copy1

0x2389,	// (0x00011bd6) tabs_2_long_active_pane_srt_ParamLimits

0x2389,	// (0x00011bd6) tabs_2_long_active_pane_srt

0x2389,	// (0x00011bd6) tabs_2_long_passive_pane_srt_ParamLimits

0x2389,	// (0x00011bd6) tabs_2_long_passive_pane_srt

0x436e,	// (0x00013bbb) bg_passive_tab_pane_cp4_srt_ParamLimits

0x436e,	// (0x00013bbb) bg_passive_tab_pane_cp4_srt

0x5d38,	// (0x00015585) bg_passive_tab_pane_g1_cp4_srt

0x3c73,	// (0x000134c0) bg_passive_tab_pane_g2_cp4_srt

0x5d41,	// (0x0001558e) bg_passive_tab_pane_g3_cp4_srt

0x2389,	// (0x00011bd6) bg_active_tab_pane_cp4_srt_ParamLimits

0x2389,	// (0x00011bd6) bg_active_tab_pane_cp4_srt

0xd9e3,	// (0x0001d230) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd9e3,	// (0x0001d230) tabs_2_long_active_pane_srt_t1

0x5d38,	// (0x00015585) bg_active_tab_pane_g1_cp4_srt

0x3c73,	// (0x000134c0) bg_active_tab_pane_g2_cp4_srt

0x5d41,	// (0x0001558e) bg_active_tab_pane_g3_cp4_srt

0x261e,	// (0x00011e6b) tabs_3_long_active_pane_srt_ParamLimits

0x261e,	// (0x00011e6b) tabs_3_long_active_pane_srt

0x261e,	// (0x00011e6b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x261e,	// (0x00011e6b) tabs_3_long_passive_pane_cp_srt

0x261e,	// (0x00011e6b) tabs_3_long_passive_pane_srt_ParamLimits

0x261e,	// (0x00011e6b) tabs_3_long_passive_pane_srt

0x436e,	// (0x00013bbb) bg_passive_tab_pane_cp5_srt_ParamLimits

0x436e,	// (0x00013bbb) bg_passive_tab_pane_cp5_srt

0x3cfd,	// (0x0001354a) bg_passive_tab_pane_g1_cp5_srt

0x3c73,	// (0x000134c0) bg_passive_tab_pane_g2_cp5_srt

0x3d06,	// (0x00013553) bg_passive_tab_pane_g3_cp5_srt

0x2389,	// (0x00011bd6) bg_active_tab_pane_cp5_srt_ParamLimits

0x2389,	// (0x00011bd6) bg_active_tab_pane_cp5_srt

0xd9cd,	// (0x0001d21a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd9cd,	// (0x0001d21a) tabs_3_long_active_pane_srt_t1

0x3cfd,	// (0x0001354a) bg_active_tab_pane_g1_cp5_srt

0x3c73,	// (0x000134c0) bg_active_tab_pane_g2_cp5_srt

0x3d06,	// (0x00013553) bg_active_tab_pane_g3_cp5_srt

0x5d18,	// (0x00015565) navi_text_pane_srt_t1

0x5d10,	// (0x0001555d) navi_icon_pane_srt_g1

0x41de,	// (0x00013a2b) midp_editing_number_pane_srt

0x4026,	// (0x00013873) midp_ticker_pane_srt

0x41e6,	// (0x00013a33) midp_ticker_pane_srt_g1

0x41ee,	// (0x00013a3b) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x0001efc0) midp_ticker_pane_srt_g

0x41f6,	// (0x00013a43) midp_ticker_pane_srt_t1

0x5d01,	// (0x0001554e) midp_editing_number_pane_t1_copy1

0x436e,	// (0x00013bbb) listscroll_midp_pane

0x436e,	// (0x00013bbb) midp_form_pane

0x4090,	// (0x000138dd) midp_info_popup_window_ParamLimits

0x4090,	// (0x000138dd) midp_info_popup_window

0x33ba,	// (0x00012c07) bg_popup_sub_pane_cp50_ParamLimits

0x33ba,	// (0x00012c07) bg_popup_sub_pane_cp50

0x4dde,	// (0x0001462b) listscroll_midp_info_pane_ParamLimits

0x4dde,	// (0x0001462b) listscroll_midp_info_pane

0x4dc6,	// (0x00014613) listscroll_form_midp_pane_ParamLimits

0x4dc6,	// (0x00014613) listscroll_form_midp_pane

0x4dd2,	// (0x0001461f) scroll_bar_cp050

0xd791,	// (0x0001cfde) list_midp_pane

0x6e27,	// (0x00016674) signal_pane_g2_cp

0x4ce0,	// (0x0001452d) listscroll_midp_info_pane_t1_ParamLimits

0x4ce0,	// (0x0001452d) listscroll_midp_info_pane_t1

0x4cf8,	// (0x00014545) listscroll_midp_info_pane_t2_ParamLimits

0x4cf8,	// (0x00014545) listscroll_midp_info_pane_t2

0x4d36,	// (0x00014583) listscroll_midp_info_pane_t3_ParamLimits

0x4d36,	// (0x00014583) listscroll_midp_info_pane_t3

0x4d70,	// (0x000145bd) listscroll_midp_info_pane_t4_ParamLimits

0x4d70,	// (0x000145bd) listscroll_midp_info_pane_t4

0x0003,

0xf826,	// (0x0001f073) listscroll_midp_info_pane_t_ParamLimits

0xf826,	// (0x0001f073) listscroll_midp_info_pane_t

0x347e,	// (0x00012ccb) scroll_pane_cp21

0x4c7e,	// (0x000144cb) form_midp_field_choice_group_pane

0x4c87,	// (0x000144d4) form_midp_field_text_pane

0x4cc6,	// (0x00014513) form_midp_field_time_pane

0x4cce,	// (0x0001451b) form_midp_gauge_slider_pane

0x4cd7,	// (0x00014524) form_midp_gauge_wait_pane

0x22a9,	// (0x00011af6) form_midp_image_pane

0xd77a,	// (0x0001cfc7) list_single_midp_pane_ParamLimits

0xd77a,	// (0x0001cfc7) list_single_midp_pane

0xd758,	// (0x0001cfa5) form_midp_field_text_pane_t1

0x49c2,	// (0x0001420f) input_focus_pane_cp050

0x4c3e,	// (0x0001448b) list_midp_form_text_pane

0x4bd6,	// (0x00014423) form_midp_field_choice_group_pane_t1

0x4be4,	// (0x00014431) input_focus_pane_cp051

0x4bf8,	// (0x00014445) list_midp_choice_pane

0x22a9,	// (0x00011af6) status_idle_pane

0x4bba,	// (0x00014407) form_midp_field_time_pane_t1

0x229f,	// (0x00011aec) wait_anim_pane_g2_copy1

0x4bc8,	// (0x00014415) form_midp_field_time_pane_t2

0x0001,

0x413e,	// (0x0001398b) aid_navinavi_width_2_pane

0xf821,	// (0x0001f06e) form_midp_field_time_pane_t

0x22a9,	// (0x00011af6) input_focus_pane_cp052

0x22a9,	// (0x00011af6) bg_input_focus_pane_cp040

0x4b7a,	// (0x000143c7) form_midp_gauge_slider_pane_t1

0x4b88,	// (0x000143d5) form_midp_gauge_slider_pane_t2

0xd73c,	// (0x0001cf89) form_midp_gauge_slider_pane_t3

0xd74a,	// (0x0001cf97) form_midp_gauge_slider_pane_t4

0x0003,

0xf818,	// (0x0001f065) form_midp_gauge_slider_pane_t

0x4bb2,	// (0x000143ff) form_midp_slider_pane

0x2389,	// (0x00011bd6) bg_input_focus_pane_cp041_ParamLimits

0x2389,	// (0x00011bd6) bg_input_focus_pane_cp041

0x4b47,	// (0x00014394) form_midp_gauge_wait_pane_t1_ParamLimits

0x4b47,	// (0x00014394) form_midp_gauge_wait_pane_t1

0x4b59,	// (0x000143a6) form_midp_gauge_wait_pane_t2_ParamLimits

0x4b59,	// (0x000143a6) form_midp_gauge_wait_pane_t2

0x0001,

0xf813,	// (0x0001f060) form_midp_gauge_wait_pane_t_ParamLimits

0xf813,	// (0x0001f060) form_midp_gauge_wait_pane_t

0x4b6b,	// (0x000143b8) form_midp_wait_pane_ParamLimits

0x4b6b,	// (0x000143b8) form_midp_wait_pane

0x4b11,	// (0x0001435e) form_midp_image_pane_g1

0x4b1a,	// (0x00014367) form_midp_image_pane_t1

0x4b29,	// (0x00014376) form_midp_image_pane_t2

0x4b38,	// (0x00014385) form_midp_image_pane_t3

0x0002,

0xf80c,	// (0x0001f059) form_midp_image_pane_t

0x4af9,	// (0x00014346) list_single_midp_pane_g1

0x4b02,	// (0x0001434f) list_single_midp_pane_t1

0xd727,	// (0x0001cf74) list_midp_form_item_pane_ParamLimits

0xd727,	// (0x0001cf74) list_midp_form_item_pane

0x40e6,	// (0x00013933) list_midp_form_item_pane_t1

0x40f5,	// (0x00013942) midp_ticker_pane_g1

0x4101,	// (0x0001394e) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0001efa6) midp_ticker_pane_g

0x410d,	// (0x0001395a) midp_ticker_pane_t1

0x5f85,	// (0x000157d2) midp_editing_number_pane_t1

0x5f63,	// (0x000157b0) midp_editing_number_pane

0x5f72,	// (0x000157bf) midp_ticker_pane

0x5cc9,	// (0x00015516) ai_message_heading_pane

0x22a9,	// (0x00011af6) bg_popup_window_pane_cp14

0x5cd1,	// (0x0001551e) listscroll_ai_message_pane

0x5c53,	// (0x000154a0) ai_message_heading_pane_g1_ParamLimits

0x5c53,	// (0x000154a0) ai_message_heading_pane_g1

0x5c5f,	// (0x000154ac) ai_message_heading_pane_g2_ParamLimits

0x5c5f,	// (0x000154ac) ai_message_heading_pane_g2

0x5c6b,	// (0x000154b8) ai_message_heading_pane_g3_ParamLimits

0x5c6b,	// (0x000154b8) ai_message_heading_pane_g3

0x5c77,	// (0x000154c4) ai_message_heading_pane_g4_ParamLimits

0x5c77,	// (0x000154c4) ai_message_heading_pane_g4

0x0003,

0xf94d,	// (0x0001f19a) ai_message_heading_pane_g_ParamLimits

0xf94d,	// (0x0001f19a) ai_message_heading_pane_g

0x5c83,	// (0x000154d0) ai_message_heading_pane_t1_ParamLimits

0x5c83,	// (0x000154d0) ai_message_heading_pane_t1

0x5c9d,	// (0x000154ea) ai_message_heading_pane_t2_ParamLimits

0x5c9d,	// (0x000154ea) ai_message_heading_pane_t2

0x0001,

0xf956,	// (0x0001f1a3) ai_message_heading_pane_t_ParamLimits

0xf956,	// (0x0001f1a3) ai_message_heading_pane_t

0x5caf,	// (0x000154fc) bg_popup_heading_pane_cp1_ParamLimits

0x5caf,	// (0x000154fc) bg_popup_heading_pane_cp1

0x5c41,	// (0x0001548e) list_ai_message_pane_ParamLimits

0x5c41,	// (0x0001548e) list_ai_message_pane

0x347e,	// (0x00012ccb) scroll_pane_cp10

0x5bdd,	// (0x0001542a) list_ai_message_pane_g1

0x5be5,	// (0x00015432) list_ai_message_pane_g2

0x0001,

0xf92a,	// (0x0001f177) list_ai_message_pane_g

0x5bed,	// (0x0001543a) list_ai_message_pane_t1_ParamLimits

0x5bed,	// (0x0001543a) list_ai_message_pane_t1

0x5c02,	// (0x0001544f) list_ai_message_pane_t2_ParamLimits

0x5c02,	// (0x0001544f) list_ai_message_pane_t2

0x5c17,	// (0x00015464) list_ai_message_pane_t3_ParamLimits

0x5c17,	// (0x00015464) list_ai_message_pane_t3

0x5c2c,	// (0x00015479) list_ai_message_pane_t4_ParamLimits

0x5c2c,	// (0x00015479) list_ai_message_pane_t4

0x0003,

0xf92f,	// (0x0001f17c) list_ai_message_pane_t_ParamLimits

0xf92f,	// (0x0001f17c) list_ai_message_pane_t

0xd99a,	// (0x0001d1e7) cell_ai_soft_ind_pane_ParamLimits

0xd99a,	// (0x0001d1e7) cell_ai_soft_ind_pane

0x411f,	// (0x0001396c) cell_ai_soft_ind_pane_g1_ParamLimits

0x411f,	// (0x0001396c) cell_ai_soft_ind_pane_g1

0x22a9,	// (0x00011af6) grid_highlight_cp1

0x412c,	// (0x00013979) text_secondary_cp56_ParamLimits

0x412c,	// (0x00013979) text_secondary_cp56

0x5b9d,	// (0x000153ea) example_general_pane_ParamLimits

0x5b9d,	// (0x000153ea) example_general_pane

0x5ba9,	// (0x000153f6) example_parent_pane_g1_ParamLimits

0x5ba9,	// (0x000153f6) example_parent_pane_g1

0x5bb5,	// (0x00015402) example_parent_pane_t1_ParamLimits

0x5bb5,	// (0x00015402) example_parent_pane_t1

0xbbd2,	// (0x0001b41f) popup_preview_text_window_ParamLimits

0xbbd2,	// (0x0001b41f) popup_preview_text_window

0x3f57,	// (0x000137a4) list_single_pane_cp2_g4

0x26d4,	// (0x00011f21) bg_popup_preview_window_pane_ParamLimits

0x26d4,	// (0x00011f21) bg_popup_preview_window_pane

0x58d4,	// (0x00015121) popup_preview_text_window_t1_ParamLimits

0x58d4,	// (0x00015121) popup_preview_text_window_t1

0x58f2,	// (0x0001513f) popup_preview_text_window_t2_ParamLimits

0x58f2,	// (0x0001513f) popup_preview_text_window_t2

0x593b,	// (0x00015188) popup_preview_text_window_t3_ParamLimits

0x593b,	// (0x00015188) popup_preview_text_window_t3

0x5980,	// (0x000151cd) popup_preview_text_window_t4_ParamLimits

0x5980,	// (0x000151cd) popup_preview_text_window_t4

0x0004,

0xf8fe,	// (0x0001f14b) popup_preview_text_window_t_ParamLimits

0xf8fe,	// (0x0001f14b) popup_preview_text_window_t

0x59fe,	// (0x0001524b) scroll_pane_cp11

0x489c,	// (0x000140e9) bg_popup_preview_window_pane_g1

0x5894,	// (0x000150e1) bg_popup_preview_window_pane_g2

0x589c,	// (0x000150e9) bg_popup_preview_window_pane_g3

0x58a4,	// (0x000150f1) bg_popup_preview_window_pane_g4

0x58ac,	// (0x000150f9) bg_popup_preview_window_pane_g5

0x58b4,	// (0x00015101) bg_popup_preview_window_pane_g6

0x58bc,	// (0x00015109) bg_popup_preview_window_pane_g7

0x58c4,	// (0x00015111) bg_popup_preview_window_pane_g8

0xf4d3,	// (0x0001ed20) aid_popup_width_pane

0xbb4e,	// (0x0001b39b) popup_midp_note_alarm_window_ParamLimits

0xbb4e,	// (0x0001b39b) popup_midp_note_alarm_window

0x3166,	// (0x000129b3) data_form_pane_ParamLimits

0xcd52,	// (0x0001c59f) form_field_data_pane_g1

0xcd5c,	// (0x0001c5a9) form_field_data_pane_t1_ParamLimits

0x3194,	// (0x000129e1) input_focus_pane_ParamLimits

0x31a2,	// (0x000129ef) data_form_wide_pane_ParamLimits

0x31ae,	// (0x000129fb) form_field_data_wide_pane_g1

0x31ce,	// (0x00012a1b) form_field_data_wide_pane_t1_ParamLimits

0x2980,	// (0x000121cd) input_focus_pane_cp6_ParamLimits

0xce98,	// (0x0001c6e5) input_popup_find_pane_g1_ParamLimits

0xce98,	// (0x0001c6e5) input_popup_find_pane_g1

0x0499,	// (0x0000fce6) aid_navi_side_left_pane

0x04ae,	// (0x0000fcfb) aid_navi_side_right_pane

0x52a1,	// (0x00014aee) bg_popup_window_pane_cp30_ParamLimits

0x52a1,	// (0x00014aee) bg_popup_window_pane_cp30

0x531b,	// (0x00014b68) popup_midp_note_alarm_window_g1_ParamLimits

0x531b,	// (0x00014b68) popup_midp_note_alarm_window_g1

0x534b,	// (0x00014b98) popup_midp_note_alarm_window_t1_ParamLimits

0x534b,	// (0x00014b98) popup_midp_note_alarm_window_t1

0x53f8,	// (0x00014c45) popup_midp_note_alarm_window_t2_ParamLimits

0x53f8,	// (0x00014c45) popup_midp_note_alarm_window_t2

0x54a6,	// (0x00014cf3) popup_midp_note_alarm_window_t3_ParamLimits

0x54a6,	// (0x00014cf3) popup_midp_note_alarm_window_t3

0x54d8,	// (0x00014d25) popup_midp_note_alarm_window_t4_ParamLimits

0x54d8,	// (0x00014d25) popup_midp_note_alarm_window_t4

0x54fe,	// (0x00014d4b) popup_midp_note_alarm_window_t5_ParamLimits

0x54fe,	// (0x00014d4b) popup_midp_note_alarm_window_t5

0x000a,

0xf89b,	// (0x0001f0e8) popup_midp_note_alarm_window_t_ParamLimits

0xf89b,	// (0x0001f0e8) popup_midp_note_alarm_window_t

0x55aa,	// (0x00014df7) wait_bar_pane_cp1_ParamLimits

0x55aa,	// (0x00014df7) wait_bar_pane_cp1

0x22a9,	// (0x00011af6) wait_anim_pane_copy1

0x22a9,	// (0x00011af6) wait_border_pane_copy1

0x4f87,	// (0x000147d4) wait_border_pane_g1_copy1

0x31e5,	// (0x00012a32) form_field_popup_pane_g1

0xcd76,	// (0x0001c5c3) form_field_popup_pane_t1_ParamLimits

0x3194,	// (0x000129e1) input_focus_pane_cp7_ParamLimits

0x3205,	// (0x00012a52) list_form_pane_ParamLimits

0x3211,	// (0x00012a5e) form_field_popup_wide_pane_g1

0x3219,	// (0x00012a66) form_field_popup_wide_pane_t1_ParamLimits

0x3194,	// (0x000129e1) input_focus_pane_cp8_ParamLimits

0x322e,	// (0x00012a7b) list_form_wide_pane_ParamLimits

0x617b,	// (0x000159c8) aid_size_cell_graphic_pane

0xcdf5,	// (0x0001c642) data_form_pane_t1_ParamLimits

0xdb4e,	// (0x0001d39b) data_form_wide_pane_t1_ParamLimits

0xd3b2,	// (0x0001cbff) bg_status_flat_pane

0xc600,	// (0x0001be4d) title_pane_t1_ParamLimits

0x2351,	// (0x00011b9e) title_pane_t2_ParamLimits

0x2377,	// (0x00011bc4) title_pane_t3_ParamLimits

0xf55d,	// (0x0001edaa) title_pane_t_ParamLimits

0x38fb,	// (0x00013148) level_1_signal_ParamLimits

0x390d,	// (0x0001315a) level_2_signal_ParamLimits

0x3920,	// (0x0001316d) level_3_signal_ParamLimits

0x3933,	// (0x00013180) level_4_signal_ParamLimits

0x3946,	// (0x00013193) level_5_signal_ParamLimits

0x3959,	// (0x000131a6) level_6_signal_ParamLimits

0x396c,	// (0x000131b9) level_7_signal_ParamLimits

0x38fb,	// (0x00013148) level_1_battery_ParamLimits

0x390d,	// (0x0001315a) level_2_battery_ParamLimits

0x3920,	// (0x0001316d) level_3_battery_ParamLimits

0x3933,	// (0x00013180) level_4_battery_ParamLimits

0x3946,	// (0x00013193) level_5_battery_ParamLimits

0x3959,	// (0x000131a6) level_6_battery_ParamLimits

0x396c,	// (0x000131b9) level_7_battery_ParamLimits

0x51a6,	// (0x000149f3) bg_status_flat_pane_g1

0x51ae,	// (0x000149fb) bg_status_flat_pane_g2

0x51b6,	// (0x00014a03) bg_status_flat_pane_g3

0x51be,	// (0x00014a0b) bg_status_flat_pane_g4

0x51c6,	// (0x00014a13) bg_status_flat_pane_g5

0x51ce,	// (0x00014a1b) bg_status_flat_pane_g6

0x51d6,	// (0x00014a23) bg_status_flat_pane_g7

0xc694,	// (0x0001bee1) tabs_3_active_pane_t1_ParamLimits

0xc694,	// (0x0001bee1) tabs_3_passive_pane_t1_ParamLimits

0xc6ae,	// (0x0001befb) tabs_4_active_pane_t1_ParamLimits

0xc6ae,	// (0x0001befb) tabs_4_1_passive_pane_t1_ParamLimits

0xceae,	// (0x0001c6fb) tabs_2_active_pane_t1_ParamLimits

0xceae,	// (0x0001c6fb) tabs_2_passive_pane_t1_ParamLimits

0x2389,	// (0x00011bd6) bg_active_tab_pane_cp4_ParamLimits

0xcec0,	// (0x0001c70d) tabs_2_long_active_pane_t1_ParamLimits

0x436e,	// (0x00013bbb) bg_passive_tab_pane_cp4_ParamLimits

0x1048,	// (0x00010895) list_single_midp_graphic_pane_t1_ParamLimits

0x2389,	// (0x00011bd6) bg_active_tab_pane_cp5_ParamLimits

0xced3,	// (0x0001c720) tabs_3_long_active_pane_t1_ParamLimits

0x436e,	// (0x00013bbb) bg_passive_tab_pane_cp5_ParamLimits

0x1048,	// (0x00010895) list_single_midp_graphic_pane_t1

0xd3b2,	// (0x0001cbff) bg_status_flat_pane_ParamLimits

0x450c,	// (0x00013d59) indicator_pane_cp2_ParamLimits

0x450c,	// (0x00013d59) indicator_pane_cp2

0xd52a,	// (0x0001cd77) navi_pane_srt_ParamLimits

0xd52a,	// (0x0001cd77) navi_pane_srt

0x4655,	// (0x00013ea2) popup_clock_digital_analogue_window_cp1

0x2480,	// (0x00011ccd) indicator_pane_t1

0x4026,	// (0x00013873) copy_highlight_pane

0x4026,	// (0x00013873) cursor_graphics_pane

0x4026,	// (0x00013873) graphic_within_text_pane

0x4026,	// (0x00013873) link_highlight_pane

0x59c1,	// (0x0001520e) popup_preview_text_window_t5_ParamLimits

0x59c1,	// (0x0001520e) popup_preview_text_window_t5

0x4146,	// (0x00013993) cursor_digital_pane

0x4146,	// (0x00013993) cursor_primary_pane

0x4157,	// (0x000139a4) cursor_primary_small_pane

0x415f,	// (0x000139ac) cursor_secondary_pane

0x4167,	// (0x000139b4) cursor_title_pane

0x4146,	// (0x00013993) link_highlight_digital_pane

0x414e,	// (0x0001399b) link_highlight_primary_pane

0x4157,	// (0x000139a4) link_highlight_primary_small_pane

0x415f,	// (0x000139ac) link_highlight_secondary_pane

0x4167,	// (0x000139b4) link_highlight_title_pane

0x4146,	// (0x00013993) copy_highlight_digital_pane

0x4146,	// (0x00013993) copy_highlight_primary_pane

0x4157,	// (0x000139a4) copy_highlight_primary_small_pane

0x415f,	// (0x000139ac) copy_highlight_secondary_pane

0x4167,	// (0x000139b4) copy_highlight_title_pane

0x415f,	// (0x000139ac) graphic_text_digital_pane

0x5244,	// (0x00014a91) graphic_text_primary_pane

0x524d,	// (0x00014a9a) graphic_text_primary_small_pane

0x4157,	// (0x000139a4) graphic_text_secondary_pane

0x4146,	// (0x00013993) graphic_text_title_pane

0xd261,	// (0x0001caae) cursor_primary_pane_g1

0x5236,	// (0x00014a83) cursor_text_primary_t1

0xd7cd,	// (0x0001d01a) cursor_primary_small_pane_g1

0x5228,	// (0x00014a75) cursor_text_primary_small_t1

0xd7c3,	// (0x0001d010) cursor_primary_small_pane_g1_copy1

0x5210,	// (0x00014a5d) cursor_text_primary_small_t1_copy1

0x51ee,	// (0x00014a3b) cursor_text_title_t1

0xd7b9,	// (0x0001d006) cursor_title_pane_g1

0xd261,	// (0x0001caae) cursor_digital_pane_g1

0x4179,	// (0x000139c6) cursor_text_digital_t1

0x419e,	// (0x000139eb) link_highlight_primary_pane_g1

0x5197,	// (0x000149e4) link_highlight_primary_pane_t1

0x4187,	// (0x000139d4) link_highlight_primary_small_pane_g1

0x418f,	// (0x000139dc) link_highlight_primary_small_pane_t1

0x419e,	// (0x000139eb) link_highlight_secondary_pane_g1

0x41a6,	// (0x000139f3) link_highlight_secondary_pane_t1

0x510b,	// (0x00014958) link_highlight_title_pane_g1

0x5113,	// (0x00014960) link_highlight_title_pane_t1

0x50f4,	// (0x00014941) link_highlight_digital_pane_g1

0x50fc,	// (0x00014949) link_highlight_digital_pane_t1

0x4fcc,	// (0x00014819) copy_highlight_primary_pane_g1

0x4fd4,	// (0x00014821) copy_highlight_primary_pane_t1

0x4fa6,	// (0x000147f3) copy_highlight_primary_small_pane_g1

0x4fbd,	// (0x0001480a) copy_highlight_primary_small_pane_t1

0x41b5,	// (0x00013a02) copy_highlight_secondary_pane_g1

0x41bd,	// (0x00013a0a) copy_highlight_secondary_pane_t1

0x4fa6,	// (0x000147f3) copy_highlight_title_pane_g1

0x4fae,	// (0x000147fb) copy_highlight_title_pane_t1

0x4fcc,	// (0x00014819) copy_highlight_digital_pane_g1

0x6345,	// (0x00015b92) copy_highlight_digital_pane_t1

0x6299,	// (0x00015ae6) graphic_text_primary_pane_g1

0x6329,	// (0x00015b76) graphic_text_primary_pane_t1

0x6337,	// (0x00015b84) graphic_text_primary_pane_t2

0x0001,

0xf9ca,	// (0x0001f217) graphic_text_primary_pane_t

0x6305,	// (0x00015b52) graphic_text_primary_small_pane_g1

0x630d,	// (0x00015b5a) graphic_text_primary_small_pane_t1

0x631b,	// (0x00015b68) graphic_text_primary_small_pane_t2

0x0001,

0xf9c5,	// (0x0001f212) graphic_text_primary_small_pane_t

0x62e1,	// (0x00015b2e) graphic_text_secondary_pane_g1

0x62e9,	// (0x00015b36) graphic_text_secondary_pane_t1

0x62f7,	// (0x00015b44) graphic_text_secondary_pane_t2

0x0001,

0xf9c0,	// (0x0001f20d) graphic_text_secondary_pane_t

0x62bd,	// (0x00015b0a) graphic_text_title_pane_g1

0x62c5,	// (0x00015b12) graphic_text_title_pane_t1

0x62d3,	// (0x00015b20) graphic_text_title_pane_t2

0x0001,

0xf9bb,	// (0x0001f208) graphic_text_title_pane_t

0x6299,	// (0x00015ae6) graphic_text_digital_pane_g1

0x62a1,	// (0x00015aee) graphic_text_digital_pane_t1

0x62af,	// (0x00015afc) graphic_text_digital_pane_t2

0x0001,

0xf9b6,	// (0x0001f203) graphic_text_digital_pane_t

0x2389,	// (0x00011bd6) navi_icon_pane_srt_ParamLimits

0x2389,	// (0x00011bd6) navi_icon_pane_srt

0x22a9,	// (0x00011af6) navi_midp_pane_srt

0x22a9,	// (0x00011af6) navi_navi_pane_srt

0x2389,	// (0x00011bd6) navi_text_pane_srt_ParamLimits

0x2389,	// (0x00011bd6) navi_text_pane_srt

0x6264,	// (0x00015ab1) navi_navi_icon_text_pane_srt

0x626c,	// (0x00015ab9) navi_navi_pane_srt_g1_ParamLimits

0x626c,	// (0x00015ab9) navi_navi_pane_srt_g1

0x627e,	// (0x00015acb) navi_navi_pane_srt_g2_ParamLimits

0x627e,	// (0x00015acb) navi_navi_pane_srt_g2

0x0001,

0xf9b1,	// (0x0001f1fe) navi_navi_pane_srt_g_ParamLimits

0xf9b1,	// (0x0001f1fe) navi_navi_pane_srt_g

0x6290,	// (0x00015add) navi_navi_tabs_pane_srt

0x6264,	// (0x00015ab1) navi_navi_text_pane_srt

0x6264,	// (0x00015ab1) navi_navi_volume_pane_srt

0x6255,	// (0x00015aa2) navi_navi_text_pane_srt_t1

0x13c2,	// (0x00010c0f) navi_navi_volume_pane_srt_g1

0x13ca,	// (0x00010c17) volume_small_pane_srt_ParamLimits

0x13ca,	// (0x00010c17) volume_small_pane_srt

0x0779,	// (0x0000ffc6) volume_small_pane_srt_g1_ParamLimits

0x0779,	// (0x0000ffc6) volume_small_pane_srt_g1

0x0789,	// (0x0000ffd6) volume_small_pane_srt_g2_ParamLimits

0x0789,	// (0x0000ffd6) volume_small_pane_srt_g2

0x079a,	// (0x0000ffe7) volume_small_pane_srt_g3_ParamLimits

0x079a,	// (0x0000ffe7) volume_small_pane_srt_g3

0x07ab,	// (0x0000fff8) volume_small_pane_srt_g4_ParamLimits

0x07ab,	// (0x0000fff8) volume_small_pane_srt_g4

0x07bc,	// (0x00010009) volume_small_pane_srt_g5_ParamLimits

0x07bc,	// (0x00010009) volume_small_pane_srt_g5

0x07cd,	// (0x0001001a) volume_small_pane_srt_g6_ParamLimits

0x07cd,	// (0x0001001a) volume_small_pane_srt_g6

0x07de,	// (0x0001002b) volume_small_pane_srt_g7_ParamLimits

0x07de,	// (0x0001002b) volume_small_pane_srt_g7

0x07ef,	// (0x0001003c) volume_small_pane_srt_g8_ParamLimits

0x07ef,	// (0x0001003c) volume_small_pane_srt_g8

0x0800,	// (0x0001004d) volume_small_pane_srt_g9_ParamLimits

0x0800,	// (0x0001004d) volume_small_pane_srt_g9

0x0811,	// (0x0001005e) volume_small_pane_srt_g10_ParamLimits

0x0811,	// (0x0001005e) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0001efab) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0001efab) volume_small_pane_srt_g

0x277d,	// (0x00011fca) query_popup_data_pane_cp2

0x623b,	// (0x00015a88) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x623b,	// (0x00015a88) navi_navi_icon_text_pane_srt_t1

0x5244,	// (0x00014a91) navi_tabs_2_long_pane_srt

0x5244,	// (0x00014a91) navi_tabs_2_pane_srt

0x5244,	// (0x00014a91) navi_tabs_3_long_pane_srt

0x5244,	// (0x00014a91) navi_tabs_3_pane_srt

0x5244,	// (0x00014a91) navi_tabs_4_pane_srt

0x13a2,	// (0x00010bef) tabs_2_active_pane_srt_ParamLimits

0x13a2,	// (0x00010bef) tabs_2_active_pane_srt

0x13b2,	// (0x00010bff) tabs_2_passive_pane_srt_ParamLimits

0x13b2,	// (0x00010bff) tabs_2_passive_pane_srt

0x49c2,	// (0x0001420f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x49c2,	// (0x0001420f) bg_passive_tab_pane_cp1_srt

0x6207,	// (0x00015a54) bg_passive_tab_pane_g1_cp1_srt

0x3c73,	// (0x000134c0) bg_passive_tab_pane_g2_cp1_srt

0x6210,	// (0x00015a5d) bg_passive_tab_pane_g3_cp1_srt

0x261e,	// (0x00011e6b) bg_active_tab_pane_cp1_srt_ParamLimits

0x261e,	// (0x00011e6b) bg_active_tab_pane_cp1_srt

0x6219,	// (0x00015a66) tabs_2_active_pane_srt_g1

0xdc74,	// (0x0001d4c1) tabs_2_active_pane_srt_t1_ParamLimits

0xdc74,	// (0x0001d4c1) tabs_2_active_pane_srt_t1

0x6207,	// (0x00015a54) bg_active_tab_pane_g1_cp1_srt

0x3c73,	// (0x000134c0) bg_active_tab_pane_g2_cp1_srt

0x6210,	// (0x00015a5d) bg_active_tab_pane_g3_cp1_srt

0x136f,	// (0x00010bbc) tabs_3_active_pane_srt_ParamLimits

0x136f,	// (0x00010bbc) tabs_3_active_pane_srt

0x1380,	// (0x00010bcd) tabs_3_passive_pane_cp_srt_ParamLimits

0x1380,	// (0x00010bcd) tabs_3_passive_pane_cp_srt

0x1391,	// (0x00010bde) tabs_3_passive_pane_srt_ParamLimits

0x1391,	// (0x00010bde) tabs_3_passive_pane_srt

0x49c2,	// (0x0001420f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x49c2,	// (0x0001420f) bg_passive_tab_pane_cp2_srt

0x41cc,	// (0x00013a19) bg_passive_tab_pane_g1_cp2_srt

0x3c73,	// (0x000134c0) bg_passive_tab_pane_g2_cp2_srt

0x41d5,	// (0x00013a22) bg_passive_tab_pane_g3_cp2_srt

0x261e,	// (0x00011e6b) bg_active_tab_pane_cp2_srt_ParamLimits

0x261e,	// (0x00011e6b) bg_active_tab_pane_cp2_srt

0x61ed,	// (0x00015a3a) tabs_3_active_pane_srt_g1

0xdc5e,	// (0x0001d4ab) tabs_3_active_pane_srt_t1_ParamLimits

0xdc5e,	// (0x0001d4ab) tabs_3_active_pane_srt_t1

0x41cc,	// (0x00013a19) bg_active_tab_pane_g1_cp2_srt

0x3c73,	// (0x000134c0) bg_active_tab_pane_g2_cp2_srt

0x41d5,	// (0x00013a22) bg_active_tab_pane_g3_cp2_srt

0x1327,	// (0x00010b74) tabs_4_active_pane_srt_ParamLimits

0x1327,	// (0x00010b74) tabs_4_active_pane_srt

0x1339,	// (0x00010b86) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1339,	// (0x00010b86) tabs_4_passive_pane_cp2_srt

0x0976,	// (0x000101c3) aid_size_cell_toolbar

0x5da9,	// (0x000155f6) main_idle_act_pane_ParamLimits

0x0b37,	// (0x00010384) popup_large_graphic_colour_window_ParamLimits

0xbe5e,	// (0x0001b6ab) popup_toolbar_window_ParamLimits

0xbe5e,	// (0x0001b6ab) popup_toolbar_window

0x5faf,	// (0x000157fc) list_single_graphic_2heading_pane_ParamLimits

0x5faf,	// (0x000157fc) list_single_graphic_2heading_pane

0x36ae,	// (0x00012efb) aid_size_cell_apps_grid_lsc_pane

0x36c0,	// (0x00012f0d) aid_size_cell_apps_grid_prt_pane

0x436e,	// (0x00013bbb) bg_wml_button_pane_cp1_ParamLimits

0x436e,	// (0x00013bbb) bg_wml_button_pane_cp1

0xd758,	// (0x0001cfa5) form_midp_field_text_pane_t1_ParamLimits

0x49c2,	// (0x0001420f) input_focus_pane_cp050_ParamLimits

0x4c3e,	// (0x0001448b) list_midp_form_text_pane_ParamLimits

0x4be4,	// (0x00014431) input_focus_pane_cp051_ParamLimits

0x4bf8,	// (0x00014445) list_midp_choice_pane_ParamLimits

0xd6f5,	// (0x0001cf42) list_single_2graphic_pane_cp3_ParamLimits

0xd6f5,	// (0x0001cf42) list_single_2graphic_pane_cp3

0xd708,	// (0x0001cf55) list_single_midp_graphic_pane_ParamLimits

0xd708,	// (0x0001cf55) list_single_midp_graphic_pane

0x0f4b,	// (0x00010798) list_single_graphic_2heading_pane_g1_ParamLimits

0x0f4b,	// (0x00010798) list_single_graphic_2heading_pane_g1

0x0f57,	// (0x000107a4) list_single_graphic_2heading_pane_g4_ParamLimits

0x0f57,	// (0x000107a4) list_single_graphic_2heading_pane_g4

0x0f63,	// (0x000107b0) list_single_graphic_2heading_pane_g5_ParamLimits

0x0f63,	// (0x000107b0) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0001effe) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0001effe) list_single_graphic_2heading_pane_g

0x0f6f,	// (0x000107bc) list_single_graphic_2heading_pane_t1_ParamLimits

0x0f6f,	// (0x000107bc) list_single_graphic_2heading_pane_t1

0x0f83,	// (0x000107d0) list_single_graphic_2heading_pane_t2_ParamLimits

0x0f83,	// (0x000107d0) list_single_graphic_2heading_pane_t2

0x0f9f,	// (0x000107ec) list_single_graphic_2heading_pane_t3_ParamLimits

0x0f9f,	// (0x000107ec) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x0001f005) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x0001f005) list_single_graphic_2heading_pane_t

0x47ac,	// (0x00013ff9) bg_popup_sub_pane_cp2

0x47d6,	// (0x00014023) grid_toobar_pane

0x0fb7,	// (0x00010804) cell_toolbar_pane_ParamLimits

0x0fb7,	// (0x00010804) cell_toolbar_pane

0x4840,	// (0x0001408d) cell_toolbar_pane_g1_ParamLimits

0x4840,	// (0x0001408d) cell_toolbar_pane_g1

0x4854,	// (0x000140a1) cell_toolbar_pane_g2_ParamLimits

0x4854,	// (0x000140a1) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x0001f013) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x0001f013) cell_toolbar_pane_g

0x4876,	// (0x000140c3) grid_highlight_pane_cp2_ParamLimits

0x4876,	// (0x000140c3) grid_highlight_pane_cp2

0x4890,	// (0x000140dd) toolbar_button_pane

0x489c,	// (0x000140e9) toolbar_button_pane_g1

0x48a4,	// (0x000140f1) toolbar_button_pane_g2

0x48ac,	// (0x000140f9) toolbar_button_pane_g3

0x48b4,	// (0x00014101) toolbar_button_pane_g4

0x48bc,	// (0x00014109) toolbar_button_pane_g5

0x48c4,	// (0x00014111) toolbar_button_pane_g6

0x48cc,	// (0x00014119) toolbar_button_pane_g7

0x48d4,	// (0x00014121) toolbar_button_pane_g8

0x48dc,	// (0x00014129) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0001f018) toolbar_button_pane_g

0x0fef,	// (0x0001083c) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0fef,	// (0x0001083c) list_single_2graphic_pane_g1_cp3

0xbeb6,	// (0x0001b703) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbeb6,	// (0x0001b703) list_single_2graphic_pane_g2_cp3

0x100c,	// (0x00010859) list_single_2graphic_pane_g3_cp3

0x1014,	// (0x00010861) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1014,	// (0x00010861) list_single_2graphic_pane_g4_cp3

0x1020,	// (0x0001086d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1020,	// (0x0001086d) list_single_2graphic_pane_t1_cp3

0x103c,	// (0x00010889) list_single_midp_graphic_pane_g2_ParamLimits

0x103c,	// (0x00010889) list_single_midp_graphic_pane_g2

0x097e,	// (0x000101cb) aid_zoom_text_primary

0x0986,	// (0x000101d3) aid_zoom_text_secondary

0x4289,	// (0x00013ad6) status_small_pane_g7_ParamLimits

0x4289,	// (0x00013ad6) status_small_pane_g7

0x42ac,	// (0x00013af9) status_small_pane_t1_ParamLimits

0xc5dc,	// (0x0001be29) title_pane_g2

0x0003,

0xf554,	// (0x0001eda1) title_pane_g

0xc864,	// (0x0001c0b1) aid_size_cell_colour_1_pane_ParamLimits

0xc864,	// (0x0001c0b1) aid_size_cell_colour_1_pane

0xc878,	// (0x0001c0c5) aid_size_cell_colour_2_pane_ParamLimits

0xc878,	// (0x0001c0c5) aid_size_cell_colour_2_pane

0xc88c,	// (0x0001c0d9) aid_size_cell_colour_3_pane_ParamLimits

0xc88c,	// (0x0001c0d9) aid_size_cell_colour_3_pane

0xc8a0,	// (0x0001c0ed) aid_size_cell_colour_4_pane_ParamLimits

0xc8a0,	// (0x0001c0ed) aid_size_cell_colour_4_pane

0x03d6,	// (0x0000fc23) title_pane_stacon_g1_ParamLimits

0x03d6,	// (0x0000fc23) title_pane_stacon_g1

0x502b,	// (0x00014878) popup_note_wait_window_g3_ParamLimits

0x502b,	// (0x00014878) popup_note_wait_window_g3

0x50a1,	// (0x000148ee) popup_note_wait_window_t5_ParamLimits

0x50a1,	// (0x000148ee) popup_note_wait_window_t5

0x22a9,	// (0x00011af6) main_feb_china_hwr_fs_writing_pane

0xb86c,	// (0x0001b0b9) popup_feb_china_hwr_fs_window_ParamLimits

0xb86c,	// (0x0001b0b9) popup_feb_china_hwr_fs_window

0xbec7,	// (0x0001b714) aid_size_cell_hwr_fs_ParamLimits

0xbec7,	// (0x0001b714) aid_size_cell_hwr_fs

0x49c2,	// (0x0001420f) bg_popup_sub_pane_cp3_ParamLimits

0x49c2,	// (0x0001420f) bg_popup_sub_pane_cp3

0xbedc,	// (0x0001b729) grid_hwr_fs_pane_ParamLimits

0xbedc,	// (0x0001b729) grid_hwr_fs_pane

0x108b,	// (0x000108d8) linegrid_hwr_fs_pane_ParamLimits

0x108b,	// (0x000108d8) linegrid_hwr_fs_pane

0xbef4,	// (0x0001b741) cell_hwr_fs_pane_ParamLimits

0xbef4,	// (0x0001b741) cell_hwr_fs_pane

0x49ce,	// (0x0001421b) linegrid_hwr_fs_pane_g1_ParamLimits

0x49ce,	// (0x0001421b) linegrid_hwr_fs_pane_g1

0xd6c9,	// (0x0001cf16) linegrid_hwr_fs_pane_g2_ParamLimits

0xd6c9,	// (0x0001cf16) linegrid_hwr_fs_pane_g2

0x49ec,	// (0x00014239) linegrid_hwr_fs_pane_g3_ParamLimits

0x49ec,	// (0x00014239) linegrid_hwr_fs_pane_g3

0x10bd,	// (0x0001090a) linegrid_hwr_fs_pane_g4_ParamLimits

0x10bd,	// (0x0001090a) linegrid_hwr_fs_pane_g4

0x10d7,	// (0x00010924) linegrid_hwr_fs_pane_g5_ParamLimits

0x10d7,	// (0x00010924) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f1,	// (0x0001f03e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0001f03e) linegrid_hwr_fs_pane_g

0x49f8,	// (0x00014245) cell_hwr_fs_pane_g1_ParamLimits

0x49f8,	// (0x00014245) cell_hwr_fs_pane_g1

0x46e3,	// (0x00013f30) cell_hwr_fs_pane_g2_ParamLimits

0x46e3,	// (0x00013f30) cell_hwr_fs_pane_g2

0xd6db,	// (0x0001cf28) cell_hwr_fs_pane_g3_ParamLimits

0xd6db,	// (0x0001cf28) cell_hwr_fs_pane_g3

0xd6e8,	// (0x0001cf35) cell_hwr_fs_pane_g4_ParamLimits

0xd6e8,	// (0x0001cf35) cell_hwr_fs_pane_g4

0x0003,

0xf7fc,	// (0x0001f049) cell_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x0001f049) cell_hwr_fs_pane_g

0xbf1a,	// (0x0001b767) cell_hwr_fs_pane_t1

0x22a9,	// (0x00011af6) grid_highlight_pane_cp6

0x22a9,	// (0x00011af6) main_idle_act2_pane

0x3465,	// (0x00012cb2) aid_inside_area_popup_secondary

0xd834,	// (0x0001d081) aid_inside_area_window_primary_ParamLimits

0xd834,	// (0x0001d081) aid_inside_area_window_primary

0x6354,	// (0x00015ba1) ai2_news_ticker_pane

0x635c,	// (0x00015ba9) aid_size_cell_ai1_link_ParamLimits

0x635c,	// (0x00015ba9) aid_size_cell_ai1_link

0xdc8a,	// (0x0001d4d7) popup_ai2_data_window_ParamLimits

0xdc8a,	// (0x0001d4d7) popup_ai2_data_window

0x638c,	// (0x00015bd9) popup_ai2_link_window_ParamLimits

0x638c,	// (0x00015bd9) popup_ai2_link_window

0x49c2,	// (0x0001420f) bg_popup_sub_pane_cp4_ParamLimits

0x49c2,	// (0x0001420f) bg_popup_sub_pane_cp4

0x63a0,	// (0x00015bed) grid_ai2_link_pane_ParamLimits

0x63a0,	// (0x00015bed) grid_ai2_link_pane

0x63b7,	// (0x00015c04) popup_ai2_link_window_g1_ParamLimits

0x63b7,	// (0x00015c04) popup_ai2_link_window_g1

0x63c3,	// (0x00015c10) popup_ai2_link_window_g2_ParamLimits

0x63c3,	// (0x00015c10) popup_ai2_link_window_g2

0x0001,

0xf9cf,	// (0x0001f21c) popup_ai2_link_window_g_ParamLimits

0xf9cf,	// (0x0001f21c) popup_ai2_link_window_g

0x63d2,	// (0x00015c1f) ai2_mp_button_pane

0x63da,	// (0x00015c27) ai2_mp_volume_pane

0x4be4,	// (0x00014431) bg_popup_sub_pane_cp5_ParamLimits

0x4be4,	// (0x00014431) bg_popup_sub_pane_cp5

0x63e2,	// (0x00015c2f) heading_ai2_gene_pane_ParamLimits

0x63e2,	// (0x00015c2f) heading_ai2_gene_pane

0x63ee,	// (0x00015c3b) list_ai2_gene_pane_ParamLimits

0x63ee,	// (0x00015c3b) list_ai2_gene_pane

0x6436,	// (0x00015c83) cell_ai2_link_pane_ParamLimits

0x6436,	// (0x00015c83) cell_ai2_link_pane

0x644c,	// (0x00015c99) cell_ai2_link_pane_g1

0x22a9,	// (0x00011af6) grid_highlight_pane_cp7

0x13df,	// (0x00010c2c) ai2_mp_volume_pane_g1

0x655e,	// (0x00015dab) ai2_mp_volume_pane_g2

0xdcb4,	// (0x0001d501) list_ai2_gene_pane_t1

0x6566,	// (0x00015db3) ai2_mp_volume_pane_g3

0x0002,

0xf9e8,	// (0x0001f235) ai2_mp_volume_pane_g

0x13e7,	// (0x00010c34) volume_small_pane_cp3

0x656e,	// (0x00015dbb) aid_size_cell_ai2_button

0x6576,	// (0x00015dc3) grid_ai2_button_pane

0x657f,	// (0x00015dcc) cell_ai2_button_pane_ParamLimits

0x657f,	// (0x00015dcc) cell_ai2_button_pane

0x229f,	// (0x00011aec) cell_ai2_button_pane_g1

0x22a9,	// (0x00011af6) grid_highlight_pane_cp8

0x64dc,	// (0x00015d29) ai2_gene_pane_t1_ParamLimits

0x64dc,	// (0x00015d29) ai2_gene_pane_t1

0xb7f6,	// (0x0001b043) aid_height_parent_landscape

0xd9fa,	// (0x0001d247) aid_height_set_list

0x5da9,	// (0x000155f6) aid_size_parent

0x617b,	// (0x000159c8) aid_size_cell_graphic_pane_ParamLimits

0x63fe,	// (0x00015c4b) popup_ai2_data_window_g1_ParamLimits

0x63fe,	// (0x00015c4b) popup_ai2_data_window_g1

0x640a,	// (0x00015c57) ai2_news_ticker_pane_g1

0x6412,	// (0x00015c5f) ai2_news_ticker_pane_g2

0x0001,

0xf9d4,	// (0x0001f221) ai2_news_ticker_pane_g

0x641a,	// (0x00015c67) ai2_news_ticker_pane_t1

0x6428,	// (0x00015c75) ai2_news_ticker_pane_t2

0x0001,

0xf9d9,	// (0x0001f226) ai2_news_ticker_pane_t

0x6455,	// (0x00015ca2) heading_ai2_gene_pane_g1

0x645d,	// (0x00015caa) heading_ai2_gene_pane_t1_ParamLimits

0x645d,	// (0x00015caa) heading_ai2_gene_pane_t1

0x6472,	// (0x00015cbf) list_highlight_pane_cp6

0xdc9e,	// (0x0001d4eb) ai2_gene_pane_ParamLimits

0xdc9e,	// (0x0001d4eb) ai2_gene_pane

0xdcc2,	// (0x0001d50f) list_ai2_gene_pane_t2

0x0001,

0xf9de,	// (0x0001f22b) list_ai2_gene_pane_t

0x64ad,	// (0x00015cfa) list_highlight_pane_cp8_ParamLimits

0x64ad,	// (0x00015cfa) list_highlight_pane_cp8

0x64be,	// (0x00015d0b) ai2_gene_pane_g1_ParamLimits

0x64be,	// (0x00015d0b) ai2_gene_pane_g1

0x64d0,	// (0x00015d1d) ai2_gene_pane_g2_ParamLimits

0x64d0,	// (0x00015d1d) ai2_gene_pane_g2

0x0001,

0xf9e3,	// (0x0001f230) ai2_gene_pane_g_ParamLimits

0xf9e3,	// (0x0001f230) ai2_gene_pane_g

0x2ba5,	// (0x000123f2) scroll_pane_cp12

0xb7b5,	// (0x0001b002) control_pane_t3_ParamLimits

0xb7b5,	// (0x0001b002) control_pane_t3

0x429d,	// (0x00013aea) status_small_pane_g8_ParamLimits

0x429d,	// (0x00013aea) status_small_pane_g8

0xb901,	// (0x0001b14e) popup_find_window_ParamLimits

0xbb88,	// (0x0001b3d5) popup_note_image_window_ParamLimits

0x4812,	// (0x0001405f) list_double2_graphic_pane_vc_g1_ParamLimits

0x4812,	// (0x0001405f) list_double2_graphic_pane_vc_g1

0x3f5f,	// (0x000137ac) list_double2_graphic_pane_vc_g2_ParamLimits

0x3f5f,	// (0x000137ac) list_double2_graphic_pane_vc_g2

0x481e,	// (0x0001406b) list_double2_graphic_pane_vc_g3_ParamLimits

0x481e,	// (0x0001406b) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0001f00c) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001f00c) list_double2_graphic_pane_vc_g

0x482a,	// (0x00014077) list_double2_graphic_pane_vc_t1_ParamLimits

0x482a,	// (0x00014077) list_double2_graphic_pane_vc_t1

0x3f5f,	// (0x000137ac) list_single_heading_pane_vc_g1_ParamLimits

0x3f5f,	// (0x000137ac) list_single_heading_pane_vc_g1

0x481e,	// (0x0001406b) list_single_heading_pane_vc_g2_ParamLimits

0x481e,	// (0x0001406b) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001ee1b) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001ee1b) list_single_heading_pane_vc_g

0x48e4,	// (0x00014131) list_single_heading_pane_vc_t1_ParamLimits

0x48e4,	// (0x00014131) list_single_heading_pane_vc_t1

0x48fc,	// (0x00014149) list_single_heading_pane_vc_t2_ParamLimits

0x48fc,	// (0x00014149) list_single_heading_pane_vc_t2

0x0001,

0xf7e0,	// (0x0001f02d) list_single_heading_pane_vc_t_ParamLimits

0xf7e0,	// (0x0001f02d) list_single_heading_pane_vc_t

0x4910,	// (0x0001415d) list_setting_number_pane_vc_g1_ParamLimits

0x4910,	// (0x0001415d) list_setting_number_pane_vc_g1

0x491c,	// (0x00014169) list_setting_number_pane_vc_g2_ParamLimits

0x491c,	// (0x00014169) list_setting_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x0001f032) list_setting_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x0001f032) list_setting_number_pane_vc_g

0x4928,	// (0x00014175) list_setting_number_pane_vc_t1_ParamLimits

0x4928,	// (0x00014175) list_setting_number_pane_vc_t1

0x493c,	// (0x00014189) list_setting_number_pane_vc_t2_ParamLimits

0x493c,	// (0x00014189) list_setting_number_pane_vc_t2

0x4958,	// (0x000141a5) list_setting_number_pane_vc_t3_ParamLimits

0x4958,	// (0x000141a5) list_setting_number_pane_vc_t3

0x0002,

0xf7ea,	// (0x0001f037) list_setting_number_pane_vc_t_ParamLimits

0xf7ea,	// (0x0001f037) list_setting_number_pane_vc_t

0x4986,	// (0x000141d3) set_value_pane_vc_ParamLimits

0x4986,	// (0x000141d3) set_value_pane_vc

0x5faf,	// (0x000157fc) list_double2_graphic_pane_vc_ParamLimits

0x5faf,	// (0x000157fc) list_double2_graphic_pane_vc

0x5faf,	// (0x000157fc) list_double2_large_graphic_pane_vc_ParamLimits

0x5faf,	// (0x000157fc) list_double2_large_graphic_pane_vc

0x5faf,	// (0x000157fc) list_double2_pane_vc_ParamLimits

0x5faf,	// (0x000157fc) list_double2_pane_vc

0x5faf,	// (0x000157fc) list_double_graphic_heading_pane_vc_ParamLimits

0x5faf,	// (0x000157fc) list_double_graphic_heading_pane_vc

0x5faf,	// (0x000157fc) list_double_graphic_pane_vc_ParamLimits

0x5faf,	// (0x000157fc) list_double_graphic_pane_vc

0x5faf,	// (0x000157fc) list_double_heading_pane_vc_ParamLimits

0x5faf,	// (0x000157fc) list_double_heading_pane_vc

0x5faf,	// (0x000157fc) list_double_large_graphic_pane_vc_ParamLimits

0x5faf,	// (0x000157fc) list_double_large_graphic_pane_vc

0x5faf,	// (0x000157fc) list_double_number_pane_vc_ParamLimits

0x5faf,	// (0x000157fc) list_double_number_pane_vc

0x5faf,	// (0x000157fc) list_double_pane_vc_ParamLimits

0x5faf,	// (0x000157fc) list_double_pane_vc

0x5faf,	// (0x000157fc) list_double_time_pane_vc_ParamLimits

0x5faf,	// (0x000157fc) list_double_time_pane_vc

0x5faf,	// (0x000157fc) list_setting_number_pane_vc_ParamLimits

0x5faf,	// (0x000157fc) list_setting_number_pane_vc

0x5faf,	// (0x000157fc) list_setting_pane_vc_ParamLimits

0x5faf,	// (0x000157fc) list_setting_pane_vc

0x5faf,	// (0x000157fc) list_single_graphic_heading_pane_vc_ParamLimits

0x5faf,	// (0x000157fc) list_single_graphic_heading_pane_vc

0x5faf,	// (0x000157fc) list_single_heading_pane_vc_ParamLimits

0x5faf,	// (0x000157fc) list_single_heading_pane_vc

0x5faf,	// (0x000157fc) list_single_number_heading_pane_vc_ParamLimits

0x5faf,	// (0x000157fc) list_single_number_heading_pane_vc

0x4812,	// (0x0001405f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4812,	// (0x0001405f) list_double_graphic_heading_pane_vc_g1

0x65b3,	// (0x00015e00) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x65b3,	// (0x00015e00) list_double_graphic_heading_pane_vc_g2

0x65bf,	// (0x00015e0c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x65bf,	// (0x00015e0c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ef,	// (0x0001f23c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ef,	// (0x0001f23c) list_double_graphic_heading_pane_vc_g

0x65cb,	// (0x00015e18) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x65cb,	// (0x00015e18) list_double_graphic_heading_pane_vc_t1

0x65e7,	// (0x00015e34) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x65e7,	// (0x00015e34) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f6,	// (0x0001f243) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f6,	// (0x0001f243) list_double_graphic_heading_pane_vc_t

0x4910,	// (0x0001415d) list_setting_pane_vc_g1_ParamLimits

0x4910,	// (0x0001415d) list_setting_pane_vc_g1

0x491c,	// (0x00014169) list_setting_pane_vc_g2_ParamLimits

0x491c,	// (0x00014169) list_setting_pane_vc_g2

0x0001,

0xf7e5,	// (0x0001f032) list_setting_pane_vc_g_ParamLimits

0xf7e5,	// (0x0001f032) list_setting_pane_vc_g

0x6812,	// (0x0001605f) list_setting_pane_vc_t1_ParamLimits

0x6812,	// (0x0001605f) list_setting_pane_vc_t1

0x682e,	// (0x0001607b) list_setting_pane_vc_t2_ParamLimits

0x682e,	// (0x0001607b) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x0001f286) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x0001f286) list_setting_pane_vc_t

0x4986,	// (0x000141d3) set_value_pane_cp_vc_ParamLimits

0x4986,	// (0x000141d3) set_value_pane_cp_vc

0x3f5f,	// (0x000137ac) list_single_number_heading_pane_vc_g1_ParamLimits

0x3f5f,	// (0x000137ac) list_single_number_heading_pane_vc_g1

0x481e,	// (0x0001406b) list_single_number_heading_pane_vc_g2_ParamLimits

0x481e,	// (0x0001406b) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001ee1b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001ee1b) list_single_number_heading_pane_vc_g

0x48e4,	// (0x00014131) list_single_number_heading_pane_vc_t1_ParamLimits

0x48e4,	// (0x00014131) list_single_number_heading_pane_vc_t1

0x684a,	// (0x00016097) list_single_number_heading_pane_vc_t2_ParamLimits

0x684a,	// (0x00016097) list_single_number_heading_pane_vc_t2

0x685e,	// (0x000160ab) list_single_number_heading_pane_vc_t3_ParamLimits

0x685e,	// (0x000160ab) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x0001f28b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0001f28b) list_single_number_heading_pane_vc_t

0x4812,	// (0x0001405f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4812,	// (0x0001405f) list_single_graphic_heading_pane_vc_g1

0x3f5f,	// (0x000137ac) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3f5f,	// (0x000137ac) list_single_graphic_heading_pane_vc_g4

0x481e,	// (0x0001406b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x481e,	// (0x0001406b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x0001f00c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001f00c) list_single_graphic_heading_pane_vc_g

0x48e4,	// (0x00014131) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x48e4,	// (0x00014131) list_single_graphic_heading_pane_vc_t1

0x6870,	// (0x000160bd) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6870,	// (0x000160bd) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x0001f292) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x0001f292) list_single_graphic_heading_pane_vc_t

0x3f5f,	// (0x000137ac) list_double2_pane_vc_g1_ParamLimits

0x3f5f,	// (0x000137ac) list_double2_pane_vc_g1

0x481e,	// (0x0001406b) list_double2_pane_vc_g2_ParamLimits

0x481e,	// (0x0001406b) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001ee1b) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001ee1b) list_double2_pane_vc_g

0x6884,	// (0x000160d1) list_double2_pane_vc_t1_ParamLimits

0x6884,	// (0x000160d1) list_double2_pane_vc_t1

0x689a,	// (0x000160e7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x689a,	// (0x000160e7) list_double2_large_graphic_pane_vc_g1

0x3f5f,	// (0x000137ac) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3f5f,	// (0x000137ac) list_double2_large_graphic_pane_vc_g2

0x481e,	// (0x0001406b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x481e,	// (0x0001406b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x0001ee38) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x0001ee38) list_double2_large_graphic_pane_vc_g

0x68a6,	// (0x000160f3) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x68a6,	// (0x000160f3) list_double2_large_graphic_pane_vc_t1

0x68bc,	// (0x00016109) list_double_time_pane_vc_g1_ParamLimits

0x68bc,	// (0x00016109) list_double_time_pane_vc_g1

0x68c8,	// (0x00016115) list_double_time_pane_vc_g2_ParamLimits

0x68c8,	// (0x00016115) list_double_time_pane_vc_g2

0x0001,

0xfa4a,	// (0x0001f297) list_double_time_pane_vc_g_ParamLimits

0xfa4a,	// (0x0001f297) list_double_time_pane_vc_g

0x68d4,	// (0x00016121) list_double_time_pane_vc_t1_ParamLimits

0x68d4,	// (0x00016121) list_double_time_pane_vc_t1

0x68f8,	// (0x00016145) list_double_time_pane_vc_t2_ParamLimits

0x68f8,	// (0x00016145) list_double_time_pane_vc_t2

0x6927,	// (0x00016174) list_double_time_pane_vc_t3_ParamLimits

0x6927,	// (0x00016174) list_double_time_pane_vc_t3

0x6939,	// (0x00016186) list_double_time_pane_vc_t4_ParamLimits

0x6939,	// (0x00016186) list_double_time_pane_vc_t4

0x0003,

0xfa4f,	// (0x0001f29c) list_double_time_pane_vc_t_ParamLimits

0xfa4f,	// (0x0001f29c) list_double_time_pane_vc_t

0x3f5f,	// (0x000137ac) list_double_pane_vc_g1_ParamLimits

0x3f5f,	// (0x000137ac) list_double_pane_vc_g1

0x481e,	// (0x0001406b) list_double_pane_vc_g2_ParamLimits

0x481e,	// (0x0001406b) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001ee1b) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001ee1b) list_double_pane_vc_g

0x694d,	// (0x0001619a) list_double_pane_vc_t1_ParamLimits

0x694d,	// (0x0001619a) list_double_pane_vc_t1

0x6961,	// (0x000161ae) list_double_pane_vc_t2_ParamLimits

0x6961,	// (0x000161ae) list_double_pane_vc_t2

0x0001,

0xfa58,	// (0x0001f2a5) list_double_pane_vc_t_ParamLimits

0xfa58,	// (0x0001f2a5) list_double_pane_vc_t

0x3f5f,	// (0x000137ac) list_double_number_pane_vc_g1_ParamLimits

0x3f5f,	// (0x000137ac) list_double_number_pane_vc_g1

0x481e,	// (0x0001406b) list_double_number_pane_vc_g2_ParamLimits

0x481e,	// (0x0001406b) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001ee1b) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001ee1b) list_double_number_pane_vc_g

0x6979,	// (0x000161c6) list_double_number_pane_vc_t1_ParamLimits

0x6979,	// (0x000161c6) list_double_number_pane_vc_t1

0x698d,	// (0x000161da) list_double_number_pane_vc_t2_ParamLimits

0x698d,	// (0x000161da) list_double_number_pane_vc_t2

0x69a1,	// (0x000161ee) list_double_number_pane_vc_t3_ParamLimits

0x69a1,	// (0x000161ee) list_double_number_pane_vc_t3

0x0002,

0xfa5d,	// (0x0001f2aa) list_double_number_pane_vc_t_ParamLimits

0xfa5d,	// (0x0001f2aa) list_double_number_pane_vc_t

0x69b9,	// (0x00016206) list_double_large_graphic_pane_vc_g1_ParamLimits

0x69b9,	// (0x00016206) list_double_large_graphic_pane_vc_g1

0x69ca,	// (0x00016217) list_double_large_graphic_pane_vc_g2_ParamLimits

0x69ca,	// (0x00016217) list_double_large_graphic_pane_vc_g2

0x481e,	// (0x0001406b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x481e,	// (0x0001406b) list_double_large_graphic_pane_vc_g3

0x69d9,	// (0x00016226) list_double_large_graphic_pane_vc_g4_ParamLimits

0x69d9,	// (0x00016226) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa64,	// (0x0001f2b1) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa64,	// (0x0001f2b1) list_double_large_graphic_pane_vc_g

0x69e5,	// (0x00016232) list_double_large_graphic_pane_vc_t1_ParamLimits

0x69e5,	// (0x00016232) list_double_large_graphic_pane_vc_t1

0x69fe,	// (0x0001624b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x69fe,	// (0x0001624b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6d,	// (0x0001f2ba) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6d,	// (0x0001f2ba) list_double_large_graphic_pane_vc_t

0x65b3,	// (0x00015e00) list_double_heading_pane_vc_g1_ParamLimits

0x65b3,	// (0x00015e00) list_double_heading_pane_vc_g1

0x65bf,	// (0x00015e0c) list_double_heading_pane_vc_g2_ParamLimits

0x65bf,	// (0x00015e0c) list_double_heading_pane_vc_g2

0x0001,

0xfa72,	// (0x0001f2bf) list_double_heading_pane_vc_g_ParamLimits

0xfa72,	// (0x0001f2bf) list_double_heading_pane_vc_g

0x6a17,	// (0x00016264) list_double_heading_pane_vc_t1_ParamLimits

0x6a17,	// (0x00016264) list_double_heading_pane_vc_t1

0x48e4,	// (0x00014131) list_double_heading_pane_vc_t2_ParamLimits

0x48e4,	// (0x00014131) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x0001f2c4) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x0001f2c4) list_double_heading_pane_vc_t

0x4812,	// (0x0001405f) list_double_graphic_pane_vc_g1_ParamLimits

0x4812,	// (0x0001405f) list_double_graphic_pane_vc_g1

0x6a2b,	// (0x00016278) list_double_graphic_pane_vc_g2_ParamLimits

0x6a2b,	// (0x00016278) list_double_graphic_pane_vc_g2

0x6611,	// (0x00015e5e) list_double_graphic_pane_vc_g3_ParamLimits

0x6611,	// (0x00015e5e) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x0001f2c9) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x0001f2c9) list_double_graphic_pane_vc_g

0x6a3a,	// (0x00016287) list_double_graphic_pane_vc_t1_ParamLimits

0x6a3a,	// (0x00016287) list_double_graphic_pane_vc_t1

0x6a4e,	// (0x0001629b) list_double_graphic_pane_vc_t2_ParamLimits

0x6a4e,	// (0x0001629b) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0001f2d0) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0001f2d0) list_double_graphic_pane_vc_t

0xf4df,	// (0x0001ed2c) aid_size_cell_fastswap

0xb4e5,	// (0x0001ad32) aid_size_cell_touch_ParamLimits

0xb4e5,	// (0x0001ad32) aid_size_cell_touch

0x01a0,	// (0x0000f9ed) popup_fast_swap_wide_window_ParamLimits

0x01a0,	// (0x0000f9ed) popup_fast_swap_wide_window

0xb630,	// (0x0001ae7d) touch_pane_ParamLimits

0xb630,	// (0x0001ae7d) touch_pane

0x30ae,	// (0x000128fb) button_value_adjust_pane_cp2

0x30b6,	// (0x00012903) button_value_adjust_pane_cp4

0x30d8,	// (0x00012925) form_field_data_pane_cp2

0xcd19,	// (0x0001c566) form_field_data_wide_pane_cp2

0x3779,	// (0x00012fc6) bg_scroll_pane_ParamLimits

0x0538,	// (0x0000fd85) scroll_handle_pane_ParamLimits

0x054c,	// (0x0000fd99) scroll_sc2_down_pane_ParamLimits

0x054c,	// (0x0000fd99) scroll_sc2_down_pane

0x37aa,	// (0x00012ff7) scroll_sc2_up_pane_ParamLimits

0x37aa,	// (0x00012ff7) scroll_sc2_up_pane

0xddec,	// (0x0001d639) grid_wheel_folder_pane_g1_ParamLimits

0xddec,	// (0x0001d639) grid_wheel_folder_pane_g1

0x0711,	// (0x0000ff5e) clock_nsta_pane_cp2_ParamLimits

0x0711,	// (0x0000ff5e) clock_nsta_pane_cp2

0x436e,	// (0x00013bbb) listscroll_midp_pane_ParamLimits

0xd1ca,	// (0x0001ca17) midp_canvas_pane

0x4318,	// (0x00013b65) nsta_clock_indic_pane

0x4354,	// (0x00013ba1) listscroll_form_pane_vc

0x435c,	// (0x00013ba9) listscroll_set_pane_vc_ParamLimits

0x435c,	// (0x00013ba9) listscroll_set_pane_vc

0xd3da,	// (0x0001cc27) clock_nsta_pane

0xd404,	// (0x0001cc51) indicator_nsta_pane

0x47ac,	// (0x00013ff9) bg_popup_sub_pane_cp2_ParamLimits

0x47c0,	// (0x0001400d) find_pane_cp2_ParamLimits

0x47c0,	// (0x0001400d) find_pane_cp2

0x47d6,	// (0x00014023) grid_toobar_pane_ParamLimits

0x4996,	// (0x000141e3) list_form_gen_pane_vc_ParamLimits

0x4996,	// (0x000141e3) list_form_gen_pane_vc

0x49ac,	// (0x000141f9) scroll_pane_cp8_vc_ParamLimits

0x49ac,	// (0x000141f9) scroll_pane_cp8_vc

0x4a28,	// (0x00014275) data_form_wide_pane_vc_ParamLimits

0x4a28,	// (0x00014275) data_form_wide_pane_vc

0x4a34,	// (0x00014281) form_field_data_wide_pane_vc_g1

0x4a3c,	// (0x00014289) form_field_data_wide_pane_vc_t1_ParamLimits

0x4a3c,	// (0x00014289) form_field_data_wide_pane_vc_t1

0x3194,	// (0x000129e1) input_focus_pane_cp6_vc_ParamLimits

0x3194,	// (0x000129e1) input_focus_pane_cp6_vc

0xd791,	// (0x0001cfde) list_midp_pane_ParamLimits

0x61e1,	// (0x00015a2e) scroll_pane_cp16_ParamLimits

0x61e1,	// (0x00015a2e) scroll_pane_cp16

0x4e00,	// (0x0001464d) button_value_adjust_pane_ParamLimits

0x4e00,	// (0x0001464d) button_value_adjust_pane

0xda0b,	// (0x0001d258) button_value_adjust_pane_cp6_ParamLimits

0xda0b,	// (0x0001d258) button_value_adjust_pane_cp6

0xdb25,	// (0x0001d372) settings_code_pane_cp_ParamLimits

0xdb25,	// (0x0001d372) settings_code_pane_cp

0x229f,	// (0x00011aec) cell_touch_pane_g1

0x229f,	// (0x00011aec) cell_touch_pane_g2

0x0001,

0xf704,	// (0x0001ef51) cell_touch_pane_g

0xdcd0,	// (0x0001d51d) cell_touch_pane_cp_ParamLimits

0xdcd0,	// (0x0001d51d) cell_touch_pane_cp

0xdcec,	// (0x0001d539) cell_touch_pane_ParamLimits

0xdcec,	// (0x0001d539) cell_touch_pane

0x229f,	// (0x00011aec) scroll_sc2_down_pane_g1

0x229f,	// (0x00011aec) scroll_sc2_up_pane_g1

0x22a9,	// (0x00011af6) bg_set_opt_pane_cp4_vc

0x6605,	// (0x00015e52) list_set_graphic_pane_vc_g1_ParamLimits

0x6605,	// (0x00015e52) list_set_graphic_pane_vc_g1

0x6611,	// (0x00015e5e) list_set_graphic_pane_vc_g2_ParamLimits

0x6611,	// (0x00015e5e) list_set_graphic_pane_vc_g2

0x0001,

0xf9fb,	// (0x0001f248) list_set_graphic_pane_vc_g_ParamLimits

0xf9fb,	// (0x0001f248) list_set_graphic_pane_vc_g

0x661d,	// (0x00015e6a) text_primary_small_cp13_vc_ParamLimits

0x661d,	// (0x00015e6a) text_primary_small_cp13_vc

0x6635,	// (0x00015e82) list_set_graphic_pane_vc_ParamLimits

0x6635,	// (0x00015e82) list_set_graphic_pane_vc

0x22a9,	// (0x00011af6) input_focus_pane_cp2_vc

0x229f,	// (0x00011aec) setting_code_pane_vc_g1

0x23d4,	// (0x00011c21) setting_code_pane_vc_t1

0x6647,	// (0x00015e94) set_text_pane_vc_t1_ParamLimits

0x6647,	// (0x00015e94) set_text_pane_vc_t1

0x22a9,	// (0x00011af6) input_focus_pane_cp1_vc

0x6663,	// (0x00015eb0) list_set_text_pane_vc

0x229f,	// (0x00011aec) setting_text_pane_vc_g1

0x22a9,	// (0x00011af6) bg_set_opt_pane_cp2_vc

0x23cb,	// (0x00011c18) setting_slider_graphic_pane_vc_g1

0x666d,	// (0x00015eba) setting_slider_graphic_pane_vc_t1

0x667d,	// (0x00015eca) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa00,	// (0x0001f24d) setting_slider_graphic_pane_vc_t

0x668d,	// (0x00015eda) slider_set_pane_cp_vc

0x6695,	// (0x00015ee2) slider_set_pane_vc_g1

0x669e,	// (0x00015eeb) slider_set_pane_vc_g2

0x0006,

0xfa05,	// (0x0001f252) slider_set_pane_vc_g

0x32bd,	// (0x00012b0a) set_opt_bg_pane_g1_copy1

0x32c5,	// (0x00012b12) set_opt_bg_pane_g2_copy1

0x66ca,	// (0x00015f17) set_opt_bg_pane_g3_copy1

0x32d5,	// (0x00012b22) set_opt_bg_pane_g4_copy1

0x32dd,	// (0x00012b2a) set_opt_bg_pane_g5_copy1

0x32e5,	// (0x00012b32) set_opt_bg_pane_g6_copy1

0x66d4,	// (0x00015f21) set_opt_bg_pane_g7_copy1

0x66dc,	// (0x00015f29) set_opt_bg_pane_g8_copy1

0x66e6,	// (0x00015f33) set_opt_bg_pane_g9_copy1

0x22a9,	// (0x00011af6) bg_set_opt_pane_cp_vc

0x66f0,	// (0x00015f3d) setting_slider_pane_vc_t1

0x66ff,	// (0x00015f4c) setting_slider_pane_vc_t2

0x670f,	// (0x00015f5c) setting_slider_pane_vc_t3

0x0002,

0xfa14,	// (0x0001f261) setting_slider_pane_vc_t

0x671f,	// (0x00015f6c) slider_set_pane_vc

0x10fb,	// (0x00010948) volume_set_pane_vc_g1

0x1104,	// (0x00010951) volume_set_pane_vc_g2

0x110d,	// (0x0001095a) volume_set_pane_vc_g3

0x1116,	// (0x00010963) volume_set_pane_vc_g4

0x111f,	// (0x0001096c) volume_set_pane_vc_g5

0x1128,	// (0x00010975) volume_set_pane_vc_g6

0x1131,	// (0x0001097e) volume_set_pane_vc_g7

0x113a,	// (0x00010987) volume_set_pane_vc_g8

0x1143,	// (0x00010990) volume_set_pane_vc_g9

0x114c,	// (0x00010999) volume_set_pane_vc_g10

0x0009,

0xfa1b,	// (0x0001f268) volume_set_pane_vc_g

0x6727,	// (0x00015f74) volume_set_pane_vc

0x672f,	// (0x00015f7c) button_value_adjust_pane_cp1_vc

0x6739,	// (0x00015f86) list_highlight_pane_cp2_vc

0x6742,	// (0x00015f8f) list_set_pane_vc_ParamLimits

0x6742,	// (0x00015f8f) list_set_pane_vc

0x67a0,	// (0x00015fed) main_pane_set_vc_t1_ParamLimits

0x67a0,	// (0x00015fed) main_pane_set_vc_t1

0x67b5,	// (0x00016002) main_pane_set_vc_t2_ParamLimits

0x67b5,	// (0x00016002) main_pane_set_vc_t2

0x67c7,	// (0x00016014) main_pane_set_vc_t3_ParamLimits

0x67c7,	// (0x00016014) main_pane_set_vc_t3

0x67db,	// (0x00016028) main_pane_set_vc_t4_ParamLimits

0x67db,	// (0x00016028) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x0001f27d) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x0001f27d) main_pane_set_vc_t

0x67ef,	// (0x0001603c) setting_code_pane_vc_ParamLimits

0x67ef,	// (0x0001603c) setting_code_pane_vc

0x6800,	// (0x0001604d) setting_slider_graphic_pane_vc

0x6800,	// (0x0001604d) setting_slider_pane_vc

0x6800,	// (0x0001604d) setting_text_pane_vc

0x6800,	// (0x0001604d) setting_volume_pane_vc

0x680a,	// (0x00016057) scroll_pane_cp121_vc

0x309c,	// (0x000128e9) set_content_pane_vc

0x6a66,	// (0x000162b3) button_value_adjust_pane_g1

0x6a6f,	// (0x000162bc) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0001f2d5) button_value_adjust_pane_g

0x6a78,	// (0x000162c5) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6a78,	// (0x000162c5) form_field_slider_wide_pane_vc_t1

0x6a8c,	// (0x000162d9) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6a8c,	// (0x000162d9) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x0001f2da) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0001f2da) form_field_slider_wide_pane_vc_t

0x261e,	// (0x00011e6b) input_focus_pane_cp10_vc_ParamLimits

0x261e,	// (0x00011e6b) input_focus_pane_cp10_vc

0x6aba,	// (0x00016307) slider_cont_pane_cp1_vc_ParamLimits

0x6aba,	// (0x00016307) slider_cont_pane_cp1_vc

0x6acc,	// (0x00016319) slider_form_pane_g1_cp2

0x669e,	// (0x00015eeb) slider_form_pane_g2_cp2

0x6af9,	// (0x00016346) form_field_slider_pane_vc_t3

0x6b07,	// (0x00016354) form_field_slider_pane_vc_t4

0x6b15,	// (0x00016362) slider_form_pane_vc_ParamLimits

0x6b15,	// (0x00016362) slider_form_pane_vc

0x6b22,	// (0x0001636f) form_field_slider_pane_vc_t1_ParamLimits

0x6b22,	// (0x0001636f) form_field_slider_pane_vc_t1

0x6a8c,	// (0x000162d9) form_field_slider_pane_vc_t2_ParamLimits

0x6a8c,	// (0x000162d9) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0001f2ec) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0001f2ec) form_field_slider_pane_vc_t

0x261e,	// (0x00011e6b) input_focus_pane_cp9_vc_ParamLimits

0x261e,	// (0x00011e6b) input_focus_pane_cp9_vc

0x6b3e,	// (0x0001638b) slider_cont_pane_vc_ParamLimits

0x6b3e,	// (0x0001638b) slider_cont_pane_vc

0x6b52,	// (0x0001639f) list_form_graphic_pane_cp_vc_ParamLimits

0x6b52,	// (0x0001639f) list_form_graphic_pane_cp_vc

0x4a34,	// (0x00014281) form_field_popup_wide_pane_vc_g1

0x6b67,	// (0x000163b4) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6b67,	// (0x000163b4) form_field_popup_wide_pane_vc_t1

0x3194,	// (0x000129e1) input_focus_pane_cp8_vc_ParamLimits

0x3194,	// (0x000129e1) input_focus_pane_cp8_vc

0x6bac,	// (0x000163f9) list_form_wide_pane_vc_ParamLimits

0x6bac,	// (0x000163f9) list_form_wide_pane_vc

0x6bb8,	// (0x00016405) list_form_graphic_pane_vc_g1

0x6bc0,	// (0x0001640d) list_form_graphic_pane_vc_t1_ParamLimits

0x6bc0,	// (0x0001640d) list_form_graphic_pane_vc_t1

0x2389,	// (0x00011bd6) list_highlight_pane_cp5_vc_ParamLimits

0x2389,	// (0x00011bd6) list_highlight_pane_cp5_vc

0x6bdc,	// (0x00016429) list_form_graphic_pane_vc_ParamLimits

0x6bdc,	// (0x00016429) list_form_graphic_pane_vc

0x4a34,	// (0x00014281) form_field_popup_pane_vc_g1

0x6bf2,	// (0x0001643f) form_field_popup_pane_vc_t1_ParamLimits

0x6bf2,	// (0x0001643f) form_field_popup_pane_vc_t1

0x3194,	// (0x000129e1) input_focus_pane_cp7_vc_ParamLimits

0x3194,	// (0x000129e1) input_focus_pane_cp7_vc

0x6c09,	// (0x00016456) list_form_pane_vc_ParamLimits

0x6c09,	// (0x00016456) list_form_pane_vc

0x6c15,	// (0x00016462) data_form_pane_vc_t1_ParamLimits

0x6c15,	// (0x00016462) data_form_pane_vc_t1

0x32bd,	// (0x00012b0a) input_focus_pane_vc_g1

0x32c5,	// (0x00012b12) input_focus_pane_vc_g2

0x32cd,	// (0x00012b1a) input_focus_pane_vc_g3

0x32d5,	// (0x00012b22) input_focus_pane_vc_g4

0x32dd,	// (0x00012b2a) input_focus_pane_vc_g5

0x32e5,	// (0x00012b32) input_focus_pane_vc_g6

0x32ed,	// (0x00012b3a) input_focus_pane_vc_g7

0x32f5,	// (0x00012b42) input_focus_pane_vc_g8

0x32fd,	// (0x00012b4a) input_focus_pane_vc_g9

0x229f,	// (0x00011aec) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0001eeda) input_focus_pane_vc_g

0x4a28,	// (0x00014275) data_form_pane_vc_ParamLimits

0x4a28,	// (0x00014275) data_form_pane_vc

0x4a34,	// (0x00014281) form_field_data_pane_vc_g1

0x6c30,	// (0x0001647d) form_field_data_pane_vc_t1_ParamLimits

0x6c30,	// (0x0001647d) form_field_data_pane_vc_t1

0x3194,	// (0x000129e1) input_focus_pane_vc_ParamLimits

0x3194,	// (0x000129e1) input_focus_pane_vc

0x6c4a,	// (0x00016497) button_value_adjust_pane_cp3_vc

0x6c52,	// (0x0001649f) button_value_adjust_pane_cp5_vc

0x6c5a,	// (0x000164a7) form_field_data_pane_vc_ParamLimits

0x6c5a,	// (0x000164a7) form_field_data_pane_vc

0x6c71,	// (0x000164be) form_field_data_pane_vc_cp2

0x6c79,	// (0x000164c6) form_field_data_wide_pane_vc_ParamLimits

0x6c79,	// (0x000164c6) form_field_data_wide_pane_vc

0x6c8f,	// (0x000164dc) form_field_data_wide_pane_vc_cp2

0x6c97,	// (0x000164e4) form_field_popup_pane_vc_ParamLimits

0x6c97,	// (0x000164e4) form_field_popup_pane_vc

0x6cae,	// (0x000164fb) form_field_popup_wide_pane_vc_ParamLimits

0x6cae,	// (0x000164fb) form_field_popup_wide_pane_vc

0x6cc4,	// (0x00016511) form_field_slider_pane_vc_ParamLimits

0x6cc4,	// (0x00016511) form_field_slider_pane_vc

0x6cd7,	// (0x00016524) form_field_slider_wide_pane_vc_ParamLimits

0x6cd7,	// (0x00016524) form_field_slider_wide_pane_vc

0xdd0a,	// (0x0001d557) grid_touch_1_pane_ParamLimits

0xdd0a,	// (0x0001d557) grid_touch_1_pane

0xdd1e,	// (0x0001d56b) grid_touch_2_pane_ParamLimits

0xdd1e,	// (0x0001d56b) grid_touch_2_pane

0x6dac,	// (0x000165f9) touch_pane_g1_ParamLimits

0x6dac,	// (0x000165f9) touch_pane_g1

0x6d0e,	// (0x0001655b) cell_app_pane_cp_wide_ParamLimits

0x6d0e,	// (0x0001655b) cell_app_pane_cp_wide

0x6d1f,	// (0x0001656c) grid_popup_fast_wide_pane_ParamLimits

0x6d1f,	// (0x0001656c) grid_popup_fast_wide_pane

0x6d33,	// (0x00016580) scroll_pane_cp19_ParamLimits

0x6d33,	// (0x00016580) scroll_pane_cp19

0x22a9,	// (0x00011af6) bg_popup_window_pane_cp20

0x6d47,	// (0x00016594) listscroll_popup_fast_wide_pane

0x34d1,	// (0x00012d1e) grid_indicator_nsta_pane

0x6d4f,	// (0x0001659c) clock_nsta_pane_g1

0x6d58,	// (0x000165a5) clock_nsta_pane_t1

0xdd48,	// (0x0001d595) cell_indicator_nsta_pane_ParamLimits

0xdd48,	// (0x0001d595) cell_indicator_nsta_pane

0x6dac,	// (0x000165f9) cell_indicator_nsta_pane_g1

0xdd61,	// (0x0001d5ae) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0001f2fd) cell_indicator_nsta_pane_g

0x6dd0,	// (0x0001661d) clock_nsta_pane_cp

0x6dd8,	// (0x00016625) indicator_nsta_pane_cp

0x6de0,	// (0x0001662d) nsta_clock_indic_pane_g1

0x246c,	// (0x00011cb9) grid_indicator_pane

0x389f,	// (0x000130ec) scroll_pane_cp29

0x0660,	// (0x0000fead) indicator_nsta_pane_cp2_ParamLimits

0x0660,	// (0x0000fead) indicator_nsta_pane_cp2

0x2389,	// (0x00011bd6) main_apps_wheel_pane

0x4c87,	// (0x000144d4) form_midp_field_text_pane_ParamLimits

0x4dd2,	// (0x0001461f) scroll_bar_cp050_ParamLimits

0x6e39,	// (0x00016686) cell_indicator_pane_ParamLimits

0x6e39,	// (0x00016686) cell_indicator_pane

0x6e50,	// (0x0001669d) cell_indicator_pane_g1

0xdd76,	// (0x0001d5c3) grid_wheel_folder_pane_ParamLimits

0xdd76,	// (0x0001d5c3) grid_wheel_folder_pane

0xdd84,	// (0x0001d5d1) list_wheel_apps_pane_ParamLimits

0xdd84,	// (0x0001d5d1) list_wheel_apps_pane

0xdd92,	// (0x0001d5df) main_apps_wheel_pane_g1_ParamLimits

0xdd92,	// (0x0001d5df) main_apps_wheel_pane_g1

0xdd9e,	// (0x0001d5eb) main_apps_wheel_pane_g2_ParamLimits

0xdd9e,	// (0x0001d5eb) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0001f319) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0001f319) main_apps_wheel_pane_g

0xddac,	// (0x0001d5f9) main_apps_wheel_pane_t1_ParamLimits

0xddac,	// (0x0001d5f9) main_apps_wheel_pane_t1

0xddc0,	// (0x0001d60d) list_wheel_apps_pane_g1

0xddc8,	// (0x0001d615) list_wheel_apps_pane_g2

0xddd0,	// (0x0001d61d) list_wheel_apps_pane_g3

0xddd8,	// (0x0001d625) list_wheel_apps_pane_g4

0xdde2,	// (0x0001d62f) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0001f31e) list_wheel_apps_pane_g

0x3ea6,	// (0x000136f3) navi_icon_text_pane

0xd2ce,	// (0x0001cb1b) aid_fill_nsta

0xddf9,	// (0x0001d646) navi_icon_text_pane_g1

0x6f21,	// (0x0001676e) navi_icon_text_pane_t1

0xd130,	// (0x0001c97d) list_set_graphic_pane_t1_ParamLimits

0xd130,	// (0x0001c97d) list_set_graphic_pane_t1

0x552d,	// (0x00014d7a) popup_midp_note_alarm_window_t6_ParamLimits

0x552d,	// (0x00014d7a) popup_midp_note_alarm_window_t6

0x553f,	// (0x00014d8c) popup_midp_note_alarm_window_t7_ParamLimits

0x553f,	// (0x00014d8c) popup_midp_note_alarm_window_t7

0x5551,	// (0x00014d9e) popup_midp_note_alarm_window_t8_ParamLimits

0x5551,	// (0x00014d9e) popup_midp_note_alarm_window_t8

0x5563,	// (0x00014db0) popup_midp_note_alarm_window_t9_ParamLimits

0x5563,	// (0x00014db0) popup_midp_note_alarm_window_t9

0x5575,	// (0x00014dc2) popup_midp_note_alarm_window_t10_ParamLimits

0x5575,	// (0x00014dc2) popup_midp_note_alarm_window_t10

0x5587,	// (0x00014dd4) popup_midp_note_alarm_window_t11_ParamLimits

0x5587,	// (0x00014dd4) popup_midp_note_alarm_window_t11

0x5599,	// (0x00014de6) scroll_pane_cp17_ParamLimits

0x5599,	// (0x00014de6) scroll_pane_cp17

0x10fb,	// (0x00010948) volume_small_pane_cp_g1

0x13f0,	// (0x00010c3d) volume_small_pane_cp_g2

0x13f9,	// (0x00010c46) volume_small_pane_cp_g3

0x1402,	// (0x00010c4f) volume_small_pane_cp_g4

0x140b,	// (0x00010c58) volume_small_pane_cp_g5

0x1414,	// (0x00010c61) volume_small_pane_cp_g6

0x141d,	// (0x00010c6a) volume_small_pane_cp_g7

0x1426,	// (0x00010c73) volume_small_pane_cp_g8

0x142f,	// (0x00010c7c) volume_small_pane_cp_g9

0x1438,	// (0x00010c85) volume_small_pane_cp_g10

0x40f5,	// (0x00013942) midp_ticker_pane_g1_ParamLimits

0x4101,	// (0x0001394e) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0001efa6) midp_ticker_pane_g_ParamLimits

0x410d,	// (0x0001395a) midp_ticker_pane_t1_ParamLimits

0xd2f2,	// (0x0001cb3f) aid_fill_nsta_2

0x4dbe,	// (0x0001460b) list_form2_midp_pane

0x5f63,	// (0x000157b0) midp_editing_number_pane_ParamLimits

0x5f72,	// (0x000157bf) midp_ticker_pane_ParamLimits

0x6f33,	// (0x00016780) form2_midp_field_pane

0x6f57,	// (0x000167a4) scroll_pane_cp51

0x6f77,	// (0x000167c4) form2_midp_button_pane_ParamLimits

0x6f77,	// (0x000167c4) form2_midp_button_pane

0x6f89,	// (0x000167d6) form2_midp_content_pane_ParamLimits

0x6f89,	// (0x000167d6) form2_midp_content_pane

0x6fa3,	// (0x000167f0) form2_midp_field_choice_group_pane

0x6fab,	// (0x000167f8) form2_midp_field_pane_g1

0x6fb3,	// (0x00016800) form2_midp_field_pane_g2

0x6fbb,	// (0x00016808) form2_midp_field_pane_g3

0x6fc3,	// (0x00016810) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0001f343) form2_midp_field_pane_g

0x6fcb,	// (0x00016818) form2_midp_gauge_slider_pane

0x6fd3,	// (0x00016820) form2_midp_gauge_wait_pane

0x6fdb,	// (0x00016828) form2_midp_image_pane_ParamLimits

0x6fdb,	// (0x00016828) form2_midp_image_pane

0x6ff6,	// (0x00016843) form2_midp_label_pane_ParamLimits

0x6ff6,	// (0x00016843) form2_midp_label_pane

0xde21,	// (0x0001d66e) form2_midp_label_pane_cp_ParamLimits

0xde21,	// (0x0001d66e) form2_midp_label_pane_cp

0x7030,	// (0x0001687d) form2_midp_string_pane_ParamLimits

0x7030,	// (0x0001687d) form2_midp_string_pane

0xde40,	// (0x0001d68d) form2_midp_text_pane_ParamLimits

0xde40,	// (0x0001d68d) form2_midp_text_pane

0x705f,	// (0x000168ac) form2_midp_time_pane

0x706f,	// (0x000168bc) input_focus_pane_cp51_ParamLimits

0x706f,	// (0x000168bc) input_focus_pane_cp51

0x7087,	// (0x000168d4) form2_midp_label_pane_t1_ParamLimits

0x7087,	// (0x000168d4) form2_midp_label_pane_t1

0xde59,	// (0x0001d6a6) form2_mdip_text_pane_t1_ParamLimits

0xde59,	// (0x0001d6a6) form2_mdip_text_pane_t1

0x70e7,	// (0x00016934) form2_midp_time_pane_t1

0x7102,	// (0x0001694f) form2_midp_gauge_slider_pane_t1

0xde74,	// (0x0001d6c1) form2_midp_gauge_slider_pane_t2

0xde86,	// (0x0001d6d3) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x0001f34c) form2_midp_gauge_slider_pane_t

0x7138,	// (0x00016985) form2_midp_slider_pane

0x7144,	// (0x00016991) form2_midp_gauge_wait_pane_t1

0x7152,	// (0x0001699f) form2_midp_wait_pane_ParamLimits

0x7152,	// (0x0001699f) form2_midp_wait_pane

0xde98,	// (0x0001d6e5) list_single_2graphic_pane_cp4_ParamLimits

0xde98,	// (0x0001d6e5) list_single_2graphic_pane_cp4

0xd708,	// (0x0001cf55) list_single_midp_graphic_pane_cp_ParamLimits

0xd708,	// (0x0001cf55) list_single_midp_graphic_pane_cp

0x22a9,	// (0x00011af6) list_highlight_pane_cp20

0x71ac,	// (0x000169f9) list_single_2graphic_pane_g1_cp4

0x71b4,	// (0x00016a01) list_single_2graphic_pane_g2_cp4

0x71bc,	// (0x00016a09) list_single_2graphic_pane_t1_cp4

0x2389,	// (0x00011bd6) list_highlight_pane_cp21

0x71cb,	// (0x00016a18) list_single_midp_graphic_pane_g4_cp

0x71da,	// (0x00016a27) list_single_midp_graphic_pane_t1_cp

0xdeac,	// (0x0001d6f9) form2_mdip_string_pane_t1_ParamLimits

0xdeac,	// (0x0001d6f9) form2_mdip_string_pane_t1

0x22a9,	// (0x00011af6) bg_wml_button_pane_cp2

0x229f,	// (0x00011aec) form2_midp_image_pane_g1

0x2e52,	// (0x0001269f) list_double_large_graphic_pane_g5_ParamLimits

0x2e52,	// (0x0001269f) list_double_large_graphic_pane_g5

0x436e,	// (0x00013bbb) midp_form_pane_ParamLimits

0x2389,	// (0x00011bd6) main_apps_wheel_pane_ParamLimits

0xbc06,	// (0x0001b453) popup_preview_window_ParamLimits

0xbc06,	// (0x0001b453) popup_preview_window

0x0ef6,	// (0x00010743) popup_touch_info_window_ParamLimits

0x0ef6,	// (0x00010743) popup_touch_info_window

0x0f14,	// (0x00010761) popup_touch_menu_window_ParamLimits

0x0f14,	// (0x00010761) popup_touch_menu_window

0x2295,	// (0x00011ae2) bg_popup_sub_pane_cp6

0x72e8,	// (0x00016b35) list_touch_menu_pane

0x72f0,	// (0x00016b3d) list_single_touch_menu_pane_ParamLimits

0x72f0,	// (0x00016b3d) list_single_touch_menu_pane

0x7306,	// (0x00016b53) list_single_touch_menu_pane_t1

0x2389,	// (0x00011bd6) bg_popup_sub_pane_cp7_ParamLimits

0x2389,	// (0x00011bd6) bg_popup_sub_pane_cp7

0x7314,	// (0x00016b61) heading_sub_pane

0x731c,	// (0x00016b69) list_touch_info_pane_ParamLimits

0x731c,	// (0x00016b69) list_touch_info_pane

0x732b,	// (0x00016b78) list_single_touch_info_pane_ParamLimits

0x732b,	// (0x00016b78) list_single_touch_info_pane

0x733d,	// (0x00016b8a) list_single_touch_info_pane_t1

0x734b,	// (0x00016b98) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x0001f35a) list_single_touch_info_pane_t

0x4026,	// (0x00013873) bg_popup_heading_pane_cp

0x7359,	// (0x00016ba6) heading_sub_pane_t1

0x49c2,	// (0x0001420f) bg_popup_preview_window_pane_cp_ParamLimits

0x49c2,	// (0x0001420f) bg_popup_preview_window_pane_cp

0x7314,	// (0x00016b61) heading_preview_pane

0x731c,	// (0x00016b69) list_preview_pane_ParamLimits

0x731c,	// (0x00016b69) list_preview_pane

0x7367,	// (0x00016bb4) popup_preview_window_g1

0x732b,	// (0x00016b78) list_single_preview_pane_ParamLimits

0x732b,	// (0x00016b78) list_single_preview_pane

0x736f,	// (0x00016bbc) list_single_preview_pane_g1

0x7377,	// (0x00016bc4) list_single_preview_pane_t1

0x733d,	// (0x00016b8a) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x0001f35f) list_single_preview_pane_t

0x7385,	// (0x00016bd2) bg_popup_heading_pane_cp2_ParamLimits

0x7385,	// (0x00016bd2) bg_popup_heading_pane_cp2

0x739b,	// (0x00016be8) heading_preview_pane_g1

0x73a3,	// (0x00016bf0) heading_preview_pane_t1_ParamLimits

0x73a3,	// (0x00016bf0) heading_preview_pane_t1

0x248f,	// (0x00011cdc) soft_indicator_pane_t1_ParamLimits

0x2b82,	// (0x000123cf) scroll_pane_ParamLimits

0x3798,	// (0x00012fe5) scroll_sc2_left_pane

0x37a1,	// (0x00012fee) scroll_sc2_right_pane

0x37c0,	// (0x0001300d) scroll_bg_pane_g1_ParamLimits

0x37d5,	// (0x00013022) scroll_bg_pane_g2_ParamLimits

0x37ed,	// (0x0001303a) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x0001ef31) scroll_bg_pane_g_ParamLimits

0x37c0,	// (0x0001300d) scroll_handle_pane_g1_ParamLimits

0x380f,	// (0x0001305c) scroll_handle_pane_g2_ParamLimits

0x37ed,	// (0x0001303a) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0001ef38) scroll_handle_pane_g_ParamLimits

0x09be,	// (0x0001020b) popup_choice_list_window_ParamLimits

0x09be,	// (0x0001020b) popup_choice_list_window

0x47b8,	// (0x00014005) choice_list_pane

0x4868,	// (0x000140b5) cell_toolbar_pane_t1

0x4890,	// (0x000140dd) toolbar_button_pane_ParamLimits

0x5a53,	// (0x000152a0) ai_gene_pane_1_t2_ParamLimits

0x5a53,	// (0x000152a0) ai_gene_pane_1_t2

0x0001,

0xf90e,	// (0x0001f15b) ai_gene_pane_1_t_ParamLimits

0xf90e,	// (0x0001f15b) ai_gene_pane_1_t

0x73c0,	// (0x00016c0d) scroll_sc2_left_pane_g1

0x73c0,	// (0x00016c0d) scroll_sc2_right_pane_g1

0x436e,	// (0x00013bbb) bg_popup_sub_pane_cp10

0x73ca,	// (0x00016c17) list_choice_list_pane

0x73e3,	// (0x00016c30) list_single_choice_list_pane_ParamLimits

0x73e3,	// (0x00016c30) list_single_choice_list_pane

0x73f6,	// (0x00016c43) list_single_choice_list_pane_g1

0x34a2,	// (0x00012cef) list_single_choice_list_pane_t1_ParamLimits

0x34a2,	// (0x00012cef) list_single_choice_list_pane_t1

0x73fe,	// (0x00016c4b) choice_list_pane_g1

0x7406,	// (0x00016c53) choice_list_pane_t1

0x2295,	// (0x00011ae2) input_focus_pane_cp11

0x3679,	// (0x00012ec6) title_pane_stacon_g2_ParamLimits

0x3679,	// (0x00012ec6) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0001ef17) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001ef17) title_pane_stacon_g

0x4026,	// (0x00013873) cursor_press_pane

0xb8b9,	// (0x0001b106) popup_fep_hwr_window_ParamLimits

0xb8b9,	// (0x0001b106) popup_fep_hwr_window

0x0ae4,	// (0x00010331) popup_fep_vkb_window_ParamLimits

0x0ae4,	// (0x00010331) popup_fep_vkb_window

0x7414,	// (0x00016c61) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0001f388) fep_vkb_side_pane_g_ParamLimits

0x147a,	// (0x00010cc7) fep_hwr_candidate_pane_ParamLimits

0x147a,	// (0x00010cc7) fep_hwr_candidate_pane

0x14a4,	// (0x00010cf1) fep_hwr_side_pane_ParamLimits

0x14a4,	// (0x00010cf1) fep_hwr_side_pane

0x14c4,	// (0x00010d11) fep_hwr_top_pane_ParamLimits

0x14c4,	// (0x00010d11) fep_hwr_top_pane

0x14dc,	// (0x00010d29) fep_hwr_write_pane_ParamLimits

0x14dc,	// (0x00010d29) fep_hwr_write_pane

0xfb3b,	// (0x0001f388) fep_vkb_side_pane_g

0x741c,	// (0x00016c69) fep_hwr_top_pane_g1

0x742e,	// (0x00016c7b) fep_hwr_top_pane_g2

0x1516,	// (0x00010d63) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0001f364) fep_hwr_top_pane_g

0x152b,	// (0x00010d78) fep_hwr_top_text_pane

0x398f,	// (0x000131dc) fep_hwr_top_text_pane_g1

0x7464,	// (0x00016cb1) fep_hwr_top_text_pane_t1

0x1621,	// (0x00010e6e) fep_hwr_candidate_pane_g1

0x76b7,	// (0x00016f04) fep_vkb_keypad_pane_g3_ParamLimits

0x76b7,	// (0x00016f04) fep_vkb_keypad_pane_g3

0x76df,	// (0x00016f2c) fep_vkb_keypad_pane_g4_ParamLimits

0x76df,	// (0x00016f2c) fep_vkb_keypad_pane_g4

0x774e,	// (0x00016f9b) fep_vkb_bottom_pane_g2_ParamLimits

0x774e,	// (0x00016f9b) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0001f38f) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0001f38f) fep_vkb_bottom_pane_g

0x73c0,	// (0x00016c0d) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0001f399) cell_vkb_side_pane_g

0x77d9,	// (0x00017026) cell_vkb_side_pane_t1

0x77e7,	// (0x00017034) cell_vkb_side_pane_t1_copy1

0x73c0,	// (0x00016c0d) bg_fep_vkb_candidate_pane_g2

0x7913,	// (0x00017160) cell_vkb_candidate_pane_ParamLimits

0x7472,	// (0x00016cbf) aid_size_cell_vkb_ParamLimits

0x7472,	// (0x00016cbf) aid_size_cell_vkb

0x7913,	// (0x00017160) cell_vkb_candidate_pane

0x1648,	// (0x00010e95) bg_popup_fep_shadow_pane_g1

0xdf30,	// (0x0001d77d) fep_vkb_bottom_pane_ParamLimits

0xdf30,	// (0x0001d77d) fep_vkb_bottom_pane

0x7536,	// (0x00016d83) fep_vkb_candidate_pane_ParamLimits

0x7536,	// (0x00016d83) fep_vkb_candidate_pane

0xdf55,	// (0x0001d7a2) fep_vkb_keypad_pane_ParamLimits

0xdf55,	// (0x0001d7a2) fep_vkb_keypad_pane

0xdf91,	// (0x0001d7de) fep_vkb_side_pane_ParamLimits

0xdf91,	// (0x0001d7de) fep_vkb_side_pane

0xdfcd,	// (0x0001d81a) fep_vkb_top_pane_ParamLimits

0xdfcd,	// (0x0001d81a) fep_vkb_top_pane

0x7610,	// (0x00016e5d) fep_vkb_top_pane_g1_ParamLimits

0x7610,	// (0x00016e5d) fep_vkb_top_pane_g1

0x761f,	// (0x00016e6c) fep_vkb_top_pane_g2_ParamLimits

0x761f,	// (0x00016e6c) fep_vkb_top_pane_g2

0x762e,	// (0x00016e7b) fep_vkb_top_pane_g3_ParamLimits

0x762e,	// (0x00016e7b) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x0001f37f) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x0001f37f) fep_vkb_top_pane_g

0x764c,	// (0x00016e99) fep_vkb_top_text_pane_ParamLimits

0x764c,	// (0x00016e99) fep_vkb_top_text_pane

0xe009,	// (0x0001d856) fep_vkb_side_pane_g1_ParamLimits

0xe009,	// (0x0001d856) fep_vkb_side_pane_g1

0x76a6,	// (0x00016ef3) grid_vkb_side_pane_ParamLimits

0x76a6,	// (0x00016ef3) grid_vkb_side_pane

0x1650,	// (0x00010e9d) bg_popup_fep_shadow_pane_g2

0x1659,	// (0x00010ea6) bg_popup_fep_shadow_pane_g3

0x1661,	// (0x00010eae) bg_popup_fep_shadow_pane_g4

0x166a,	// (0x00010eb7) bg_popup_fep_shadow_pane_g5

0x1674,	// (0x00010ec1) bg_popup_fep_shadow_pane_g6

0x167c,	// (0x00010ec9) bg_popup_fep_shadow_pane_g7

0x32d5,	// (0x00012b22) bg_popup_fep_shadow_pane_g8

0x76fd,	// (0x00016f4a) grid_vkb_keypad_number_pane_ParamLimits

0x76fd,	// (0x00016f4a) grid_vkb_keypad_number_pane

0x770d,	// (0x00016f5a) grid_vkb_keypad_pane_ParamLimits

0x770d,	// (0x00016f5a) grid_vkb_keypad_pane

0x7733,	// (0x00016f80) fep_vkb_bottom_pane_g1_ParamLimits

0x7733,	// (0x00016f80) fep_vkb_bottom_pane_g1

0x775c,	// (0x00016fa9) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x775c,	// (0x00016fa9) grid_vkb_keypad_bottom_left_pane

0x7771,	// (0x00016fbe) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7771,	// (0x00016fbe) grid_vkb_keypad_bottom_right_pane

0x7786,	// (0x00016fd3) fep_vkb_top_text_pane_g1

0xe050,	// (0x0001d89d) fep_vkb_top_text_pane_t1

0xe062,	// (0x0001d8af) cell_vkb_side_pane_ParamLimits

0xe062,	// (0x0001d8af) cell_vkb_side_pane

0x73c0,	// (0x00016c0d) cell_vkb_side_pane_g1

0x77f5,	// (0x00017042) cell_vkb_keypad_pane_ParamLimits

0x77f5,	// (0x00017042) cell_vkb_keypad_pane

0x786a,	// (0x000170b7) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0001f3ac) bg_popup_fep_shadow_pane_g

0x168e,	// (0x00010edb) cell_hwr_side_pane_g1

0x168e,	// (0x00010edb) cell_hwr_side_pane_g2

0x7874,	// (0x000170c1) cell_vkb_keypad_pane_t1

0xe078,	// (0x0001d8c5) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe078,	// (0x0001d8c5) cell_vkb_keypad_bottom_left_pane

0xe08d,	// (0x0001d8da) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe08d,	// (0x0001d8da) cell_vkb_keypad_bottom_right_pane

0x73c0,	// (0x00016c0d) cell_vkb_keypad_bottom_left_pane_g1

0x73c0,	// (0x00016c0d) cell_vkb_keypad_bottom_right_pane_g1

0x78d8,	// (0x00017125) cell_vkb_keypad_number_pane_ParamLimits

0x78d8,	// (0x00017125) cell_vkb_keypad_number_pane

0x78f7,	// (0x00017144) cell_vkb_keypad_number_pane_g1

0x7901,	// (0x0001714e) cell_vkb_keypad_number_pane_g2

0x790a,	// (0x00017157) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0001f39e) cell_vkb_keypad_number_pane_g

0x7874,	// (0x000170c1) cell_vkb_keypad_number_pane_t1

0x792e,	// (0x0001717b) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x0001f3bf) cell_hwr_side_pane_g

0x7947,	// (0x00017194) cell_hwr_side_pane_t1

0x1698,	// (0x00010ee5) cell_hwr_side_pane_t1_copy1

0x16a6,	// (0x00010ef3) cell_hwr_candidate_pane_g1

0x16d5,	// (0x00010f22) cell_hwr_candidate_pane_t1

0x73c0,	// (0x00016c0d) cell_vkb_candidate_pane_g2

0x798b,	// (0x000171d8) cell_vkb_candidate_pane_t1

0x1441,	// (0x00010c8e) bg_popup_fep_shadow_pane_ParamLimits

0x1441,	// (0x00010c8e) bg_popup_fep_shadow_pane

0x14f6,	// (0x00010d43) bg_fep_hwr_top_pane_g4

0x7440,	// (0x00016c8d) bg_hwr_side_pane_g1_ParamLimits

0x7440,	// (0x00016c8d) bg_hwr_side_pane_g1

0xc08b,	// (0x0001b8d8) cell_hwr_side_pane_ParamLimits

0xc08b,	// (0x0001b8d8) cell_hwr_side_pane

0x15a2,	// (0x00010def) fep_hwr_write_pane_g1_ParamLimits

0x15a2,	// (0x00010def) fep_hwr_write_pane_g1

0x15af,	// (0x00010dfc) fep_hwr_write_pane_g2_ParamLimits

0x15af,	// (0x00010dfc) fep_hwr_write_pane_g2

0x15bc,	// (0x00010e09) fep_hwr_write_pane_g3_ParamLimits

0x15bc,	// (0x00010e09) fep_hwr_write_pane_g3

0xc0ab,	// (0x0001b8f8) fep_hwr_write_pane_g4_ParamLimits

0xc0ab,	// (0x0001b8f8) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x0001f36b) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x0001f36b) fep_hwr_write_pane_g

0x14f6,	// (0x00010d43) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x14f6,	// (0x00010d43) bg_fep_hwr_candidate_pane_g2

0x15df,	// (0x00010e2c) cell_hwr_candidate_pane_ParamLimits

0x15df,	// (0x00010e2c) cell_hwr_candidate_pane

0x1621,	// (0x00010e6e) fep_hwr_candidate_pane_g1_ParamLimits

0x74a0,	// (0x00016ced) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x74a0,	// (0x00016ced) bg_popup_fep_shadow_pane_cp2

0x763e,	// (0x00016e8b) fep_vkb_top_pane_g4_ParamLimits

0x763e,	// (0x00016e8b) fep_vkb_top_pane_g4

0x7684,	// (0x00016ed1) fep_vkb_side_pane_g2_ParamLimits

0x7684,	// (0x00016ed1) fep_vkb_side_pane_g2

0xcc47,	// (0x0001c494) list_setting_pane_t4_ParamLimits

0xcc47,	// (0x0001c494) list_setting_pane_t4

0xccc1,	// (0x0001c50e) list_setting_number_pane_t5_ParamLimits

0xccc1,	// (0x0001c50e) list_setting_number_pane_t5

0xcfb2,	// (0x0001c7ff) list_double_heading_pane_cp2_ParamLimits

0xcfb2,	// (0x0001c7ff) list_double_heading_pane_cp2

0x2dd3,	// (0x00012620) list_double_heading_pane_g1_cp2_ParamLimits

0x2dd3,	// (0x00012620) list_double_heading_pane_g1_cp2

0x31ba,	// (0x00012a07) list_double_heading_pane_g2_cp2_ParamLimits

0x31ba,	// (0x00012a07) list_double_heading_pane_g2_cp2

0x7999,	// (0x000171e6) list_double_heading_pane_t1_cp2_ParamLimits

0x7999,	// (0x000171e6) list_double_heading_pane_t1_cp2

0x79af,	// (0x000171fc) list_double_heading_pane_t2_cp2_ParamLimits

0x79af,	// (0x000171fc) list_double_heading_pane_t2_cp2

0x227d,	// (0x00011aca) aid_value_unit2

0x01fa,	// (0x0000fa47) popup_preview_fixed_window

0x262c,	// (0x00011e79) bg_popup_preview_window_pane_cp02

0x79c1,	// (0x0001720e) list_preview_fixed_pane

0x7a07,	// (0x00017254) list_empty_pane_fp_ParamLimits

0x7a07,	// (0x00017254) list_empty_pane_fp

0x7a07,	// (0x00017254) list_single_cale_day_pane_fp_ParamLimits

0x7a07,	// (0x00017254) list_single_cale_day_pane_fp

0x7a07,	// (0x00017254) list_single_graphic_heading_pane_fp_ParamLimits

0x7a07,	// (0x00017254) list_single_graphic_heading_pane_fp

0x7a07,	// (0x00017254) list_single_graphic_pane_fp_ParamLimits

0x7a07,	// (0x00017254) list_single_graphic_pane_fp

0x7a07,	// (0x00017254) list_single_heading_pane_fp_ParamLimits

0x7a07,	// (0x00017254) list_single_heading_pane_fp

0x7a07,	// (0x00017254) list_single_pane_fp_ParamLimits

0x7a07,	// (0x00017254) list_single_pane_fp

0x7a1c,	// (0x00017269) list_single_pane_fp_g1_ParamLimits

0x7a1c,	// (0x00017269) list_single_pane_fp_g1

0x2dd3,	// (0x00012620) list_single_pane_fp_g2_ParamLimits

0x2dd3,	// (0x00012620) list_single_pane_fp_g2

0x31ba,	// (0x00012a07) list_single_pane_fp_g3_ParamLimits

0x31ba,	// (0x00012a07) list_single_pane_fp_g3

0x7a28,	// (0x00017275) list_single_pane_fp_g4_ParamLimits

0x7a28,	// (0x00017275) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x0001f3d2) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x0001f3d2) list_single_pane_fp_g

0x7a34,	// (0x00017281) list_single_pane_fp_t1_ParamLimits

0x7a34,	// (0x00017281) list_single_pane_fp_t1

0x7a4b,	// (0x00017298) list_single_graphic_pane_fp_g1_ParamLimits

0x7a4b,	// (0x00017298) list_single_graphic_pane_fp_g1

0x7a1c,	// (0x00017269) list_single_graphic_pane_fp_g2_ParamLimits

0x7a1c,	// (0x00017269) list_single_graphic_pane_fp_g2

0x2dd3,	// (0x00012620) list_single_graphic_pane_fp_g3_ParamLimits

0x2dd3,	// (0x00012620) list_single_graphic_pane_fp_g3

0x31ba,	// (0x00012a07) list_single_graphic_pane_fp_g4_ParamLimits

0x31ba,	// (0x00012a07) list_single_graphic_pane_fp_g4

0x7a28,	// (0x00017275) list_single_graphic_pane_fp_g5_ParamLimits

0x7a28,	// (0x00017275) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001f3db) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001f3db) list_single_graphic_pane_fp_g

0x7a57,	// (0x000172a4) list_single_graphic_pane_fp_t1_ParamLimits

0x7a57,	// (0x000172a4) list_single_graphic_pane_fp_t1

0x7a4b,	// (0x00017298) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7a4b,	// (0x00017298) list_single_graphic_heading_pane_fp_g1

0x7a1c,	// (0x00017269) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7a1c,	// (0x00017269) list_single_graphic_heading_pane_fp_g2

0x2dd3,	// (0x00012620) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2dd3,	// (0x00012620) list_single_graphic_heading_pane_fp_g3

0x31ba,	// (0x00012a07) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x31ba,	// (0x00012a07) list_single_graphic_heading_pane_fp_g4

0x7a28,	// (0x00017275) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7a28,	// (0x00017275) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001f3db) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001f3db) list_single_graphic_heading_pane_fp_g

0x7a6d,	// (0x000172ba) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7a6d,	// (0x000172ba) list_single_graphic_heading_pane_fp_t1

0x7a83,	// (0x000172d0) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7a83,	// (0x000172d0) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x0001f3e6) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x0001f3e6) list_single_graphic_heading_pane_fp_t

0x7a95,	// (0x000172e2) list_single_cale_day_pane_fp_g1_ParamLimits

0x7a95,	// (0x000172e2) list_single_cale_day_pane_fp_g1

0x7acd,	// (0x0001731a) list_single_cale_day_pane_fp_g2_ParamLimits

0x7acd,	// (0x0001731a) list_single_cale_day_pane_fp_g2

0x7ad9,	// (0x00017326) list_single_cale_day_pane_fp_g3_ParamLimits

0x7ad9,	// (0x00017326) list_single_cale_day_pane_fp_g3

0x7b01,	// (0x0001734e) list_single_cale_day_pane_fp_g4_ParamLimits

0x7b01,	// (0x0001734e) list_single_cale_day_pane_fp_g4

0x7b25,	// (0x00017372) list_single_cale_day_pane_fp_g5_ParamLimits

0x7b25,	// (0x00017372) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x0001f3eb) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x0001f3eb) list_single_cale_day_pane_fp_g

0x7b49,	// (0x00017396) list_single_cale_day_pane_fp_t1_ParamLimits

0x7b49,	// (0x00017396) list_single_cale_day_pane_fp_t1

0x7b6f,	// (0x000173bc) list_single_cale_day_pane_fp_t2_ParamLimits

0x7b6f,	// (0x000173bc) list_single_cale_day_pane_fp_t2

0x7b88,	// (0x000173d5) list_single_cale_day_pane_fp_t3_ParamLimits

0x7b88,	// (0x000173d5) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x0001f3f6) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x0001f3f6) list_single_cale_day_pane_fp_t

0x7a1c,	// (0x00017269) list_empty_pane_fp_g1_ParamLimits

0x7a1c,	// (0x00017269) list_empty_pane_fp_g1

0x7ba1,	// (0x000173ee) list_empty_pane_fp_t1

0x7baf,	// (0x000173fc) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x0001f3fd) list_empty_pane_fp_t

0x7a1c,	// (0x00017269) list_single_heading_pane_fp_g1_ParamLimits

0x7a1c,	// (0x00017269) list_single_heading_pane_fp_g1

0x2dd3,	// (0x00012620) list_single_heading_pane_fp_g2_ParamLimits

0x2dd3,	// (0x00012620) list_single_heading_pane_fp_g2

0x31ba,	// (0x00012a07) list_single_heading_pane_fp_g3_ParamLimits

0x31ba,	// (0x00012a07) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x0001f402) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0001f402) list_single_heading_pane_fp_g

0x7bbd,	// (0x0001740a) list_single_heading_pane_fp_t1_ParamLimits

0x7bbd,	// (0x0001740a) list_single_heading_pane_fp_t1

0x7bcf,	// (0x0001741c) list_single_heading_pane_fp_t2_ParamLimits

0x7bcf,	// (0x0001741c) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x0001f409) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x0001f409) list_single_heading_pane_fp_t

0x3510,	// (0x00012d5d) aid_size_cell_fast

0x259c,	// (0x00011de9) soft_indicator_pane_cp1_t1

0x354d,	// (0x00012d9a) cell_app_pane_cp2_ParamLimits

0x354d,	// (0x00012d9a) cell_app_pane_cp2

0x1463,	// (0x00010cb0) fep_hwr_candidate_drop_down_list_pane

0x163b,	// (0x00010e88) fep_hwr_candidate_pane_g3_ParamLimits

0x163b,	// (0x00010e88) fep_hwr_candidate_pane_g3

0xec6b,	// (0x0001e4b8) fep_hwr_candidate_pane_g4_ParamLimits

0xec6b,	// (0x0001e4b8) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0001f378) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x0001f378) fep_hwr_candidate_pane_g

0x7525,	// (0x00016d72) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7525,	// (0x00016d72) fep_vkb_candidate_drop_down_list_pane

0x7936,	// (0x00017183) fep_vkb_candidate_pane_g3

0x793e,	// (0x0001718b) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0001f3a5) fep_vkb_candidate_pane_g

0x16a6,	// (0x00010ef3) cell_hwr_candidate_pane_g1_ParamLimits

0x16b4,	// (0x00010f01) cell_hwr_candidate_pane_g3_ParamLimits

0x16b4,	// (0x00010f01) cell_hwr_candidate_pane_g3

0x9604,	// (0x00018e51) cell_hwr_candidate_pane_g4_ParamLimits

0x9604,	// (0x00018e51) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x0001f3c4) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x0001f3c4) cell_hwr_candidate_pane_g

0x7955,	// (0x000171a2) cell_vkb_candidate_pane_g3_ParamLimits

0x7955,	// (0x000171a2) cell_vkb_candidate_pane_g3

0x7970,	// (0x000171bd) cell_vkb_candidate_pane_g4_ParamLimits

0x7970,	// (0x000171bd) cell_vkb_candidate_pane_g4

0x7be5,	// (0x00017432) cell_app_pane_cp2_g1_ParamLimits

0x7be5,	// (0x00017432) cell_app_pane_cp2_g1

0x7c03,	// (0x00017450) cell_app_pane_cp2_g2_ParamLimits

0x7c03,	// (0x00017450) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x0001f40e) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x0001f40e) cell_app_pane_cp2_g

0x7c0f,	// (0x0001745c) cell_app_pane_cp2_t1_ParamLimits

0x7c0f,	// (0x0001745c) cell_app_pane_cp2_t1

0x3194,	// (0x000129e1) grid_highlight_pane_cp1_ParamLimits

0x3194,	// (0x000129e1) grid_highlight_pane_cp1

0x16f3,	// (0x00010f40) cell_hwr_candidate_pane_cp1_ParamLimits

0x16f3,	// (0x00010f40) cell_hwr_candidate_pane_cp1

0x16a6,	// (0x00010ef3) fep_hwr_candidate_drop_down_list_pane_g1

0x1712,	// (0x00010f5f) fep_hwr_candidate_drop_down_list_pane_g2

0x171f,	// (0x00010f6c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x0001f413) fep_hwr_candidate_drop_down_list_pane_g

0x172c,	// (0x00010f79) fep_hwr_candidate_drop_down_list_scroll_pane

0x1735,	// (0x00010f82) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1735,	// (0x00010f82) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1742,	// (0x00010f8f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1742,	// (0x00010f8f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x174f,	// (0x00010f9c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x174f,	// (0x00010f9c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x175c,	// (0x00010fa9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x175c,	// (0x00010fa9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1777,	// (0x00010fc4) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1777,	// (0x00010fc4) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1792,	// (0x00010fdf) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1792,	// (0x00010fdf) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x17ad,	// (0x00010ffa) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x17ad,	// (0x00010ffa) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x17c8,	// (0x00011015) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x17c8,	// (0x00011015) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x0001f41a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x0001f41a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7c21,	// (0x0001746e) cell_vkb_candidate_pane_cp1_ParamLimits

0x7c21,	// (0x0001746e) cell_vkb_candidate_pane_cp1

0x763e,	// (0x00016e8b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x763e,	// (0x00016e8b) fep_vkb_candidate_drop_down_list_pane_g1

0x7c41,	// (0x0001748e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7c41,	// (0x0001748e) fep_vkb_candidate_drop_down_list_pane_g2

0x7c4e,	// (0x0001749b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7c4e,	// (0x0001749b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0001f42b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x0001f42b) fep_vkb_candidate_drop_down_list_pane_g

0x7c5b,	// (0x000174a8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7c5b,	// (0x000174a8) fep_vkb_candidate_drop_down_list_scroll_pane

0x7c68,	// (0x000174b5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7c68,	// (0x000174b5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7c75,	// (0x000174c2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7c75,	// (0x000174c2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7c81,	// (0x000174ce) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7c81,	// (0x000174ce) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7c8d,	// (0x000174da) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c8d,	// (0x000174da) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7cae,	// (0x000174fb) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7cae,	// (0x000174fb) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7ccf,	// (0x0001751c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7ccf,	// (0x0001751c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7cf0,	// (0x0001753d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7cf0,	// (0x0001753d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7d11,	// (0x0001755e) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7d11,	// (0x0001755e) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0001f432) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0001f432) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc5c9,	// (0x0001be16) title_pane_g1_ParamLimits

0xc5dc,	// (0x0001be29) title_pane_g2_ParamLimits

0xf554,	// (0x0001eda1) title_pane_g_ParamLimits

0x397f,	// (0x000131cc) aid_call2_pane

0x3987,	// (0x000131d4) aid_call_pane

0x398f,	// (0x000131dc) popup_clock_analogue_window_g1

0x398f,	// (0x000131dc) popup_clock_analogue_window_g2

0x0561,	// (0x0000fdae) popup_clock_analogue_window_g3

0x056a,	// (0x0000fdb7) popup_clock_analogue_window_g4

0x229f,	// (0x00011aec) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0001ef46) popup_clock_analogue_window_g

0x0572,	// (0x0000fdbf) popup_clock_analogue_window_t1

0x0580,	// (0x0000fdcd) clock_digital_number_pane_ParamLimits

0x0580,	// (0x0000fdcd) clock_digital_number_pane

0x058c,	// (0x0000fdd9) clock_digital_number_pane_cp02_ParamLimits

0x058c,	// (0x0000fdd9) clock_digital_number_pane_cp02

0x0598,	// (0x0000fde5) clock_digital_number_pane_cp03_ParamLimits

0x0598,	// (0x0000fde5) clock_digital_number_pane_cp03

0x05a4,	// (0x0000fdf1) clock_digital_number_pane_cp04_ParamLimits

0x05a4,	// (0x0000fdf1) clock_digital_number_pane_cp04

0x05b0,	// (0x0000fdfd) clock_digital_separator_pane_ParamLimits

0x05b0,	// (0x0000fdfd) clock_digital_separator_pane

0x05bc,	// (0x0000fe09) popup_clock_digital_window_t1_ParamLimits

0x05bc,	// (0x0000fe09) popup_clock_digital_window_t1

0x229f,	// (0x00011aec) clock_digital_number_pane_g1

0x229f,	// (0x00011aec) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x0001ef51) clock_digital_number_pane_g

0x229f,	// (0x00011aec) clock_digital_separator_pane_g1

0x229f,	// (0x00011aec) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x0001ef51) clock_digital_separator_pane_g

0xd2ce,	// (0x0001cb1b) aid_fill_nsta_ParamLimits

0xd404,	// (0x0001cc51) indicator_nsta_pane_ParamLimits

0x464d,	// (0x00013e9a) popup_clock_analogue_window

0x464d,	// (0x00013e9a) popup_clock_digital_window

0x34d1,	// (0x00012d1e) grid_indicator_nsta_pane_ParamLimits

0x6d66,	// (0x000165b3) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0001f2f8) clock_nsta_pane_t

0x0525,	// (0x0000fd72) aid_size_max_handle

0xb686,	// (0x0001aed3) aid_size_min_handle

0x4026,	// (0x00013873) editor_scroll_pane

0x7d2c,	// (0x00017579) ex_editor_pane

0x347e,	// (0x00012ccb) scroll_pane_cp13

0x2bae,	// (0x000123fb) scroll_pane_cp14

0x39be,	// (0x0001320b) scroll_pane_cp36

0xcfc3,	// (0x0001c810) list_single_graphic_hl_pane_cp2_ParamLimits

0xcfc3,	// (0x0001c810) list_single_graphic_hl_pane_cp2

0xdba2,	// (0x0001d3ef) list_single_graphic_hl_pane_ParamLimits

0xdba2,	// (0x0001d3ef) list_single_graphic_hl_pane

0x7d34,	// (0x00017581) aid_size_min_hl_cp1

0x7d3d,	// (0x0001758a) list_highlight_pane_cp34_ParamLimits

0x7d3d,	// (0x0001758a) list_highlight_pane_cp34

0x7d4e,	// (0x0001759b) list_single_graphic_hl_pane_g1_ParamLimits

0x7d4e,	// (0x0001759b) list_single_graphic_hl_pane_g1

0xe0a8,	// (0x0001d8f5) list_single_graphic_hl_pane_g2_ParamLimits

0xe0a8,	// (0x0001d8f5) list_single_graphic_hl_pane_g2

0xe0a8,	// (0x0001d8f5) list_single_graphic_hl_pane_g3_ParamLimits

0xe0a8,	// (0x0001d8f5) list_single_graphic_hl_pane_g3

0x3f97,	// (0x000137e4) list_single_graphic_hl_pane_g4_ParamLimits

0x3f97,	// (0x000137e4) list_single_graphic_hl_pane_g4

0xe0b4,	// (0x0001d901) list_single_graphic_hl_pane_g5_ParamLimits

0xe0b4,	// (0x0001d901) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x0001f443) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x0001f443) list_single_graphic_hl_pane_g

0xe0c8,	// (0x0001d915) list_single_graphic_hl_pane_t1_ParamLimits

0xe0c8,	// (0x0001d915) list_single_graphic_hl_pane_t1

0x7d91,	// (0x000175de) aid_size_min_hl_cp2

0x7d9a,	// (0x000175e7) list_highlight_pane_cp34_cp2_ParamLimits

0x7d9a,	// (0x000175e7) list_highlight_pane_cp34_cp2

0x7d4e,	// (0x0001759b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7d4e,	// (0x0001759b) list_single_graphic_hl_pane_g1_cp2

0x7da7,	// (0x000175f4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7da7,	// (0x000175f4) list_single_graphic_hl_pane_g2_cp2

0xe0de,	// (0x0001d92b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe0de,	// (0x0001d92b) list_single_graphic_hl_pane_g3_cp2

0x65b3,	// (0x00015e00) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x65b3,	// (0x00015e00) list_single_graphic_hl_pane_g4_cp2

0x7d67,	// (0x000175b4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7d67,	// (0x000175b4) list_single_graphic_hl_pane_g5_cp2

0xb6e1,	// (0x0001af2e) control_pane_g4_ParamLimits

0xb6e1,	// (0x0001af2e) control_pane_g4

0x436e,	// (0x00013bbb) bg_popup_sub_pane_cp10_ParamLimits

0x73ca,	// (0x00016c17) list_choice_list_pane_ParamLimits

0x73d9,	// (0x00016c26) scroll_pane_cp23

0x262c,	// (0x00011e79) bg_popup_preview_window_pane_cp02_ParamLimits

0x79c1,	// (0x0001720e) list_preview_fixed_pane_ParamLimits

0x79d7,	// (0x00017224) list_preview_fixed_pane_cp_ParamLimits

0x79d7,	// (0x00017224) list_preview_fixed_pane_cp

0x79e3,	// (0x00017230) popup_preview_fixed_window_g1_ParamLimits

0x79e3,	// (0x00017230) popup_preview_fixed_window_g1

0x79ef,	// (0x0001723c) popup_preview_fixed_window_g2_ParamLimits

0x79ef,	// (0x0001723c) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x0001f3cb) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x0001f3cb) popup_preview_fixed_window_g

0x0499,	// (0x0000fce6) aid_navi_side_left_pane_ParamLimits

0x04ae,	// (0x0000fcfb) aid_navi_side_right_pane_ParamLimits

0x04c6,	// (0x0000fd13) navi_icon_pane_stacon_ParamLimits

0x04da,	// (0x0000fd27) navi_navi_pane_stacon_ParamLimits

0x04c6,	// (0x0000fd13) navi_text_pane_stacon_ParamLimits

0x00bb,	// (0x0000f908) main_text_info_pane

0x7dd7,	// (0x00017624) listscroll_text_info_pane

0x7ddf,	// (0x0001762c) list_text_info_pane_ParamLimits

0x7ddf,	// (0x0001762c) list_text_info_pane

0x7dee,	// (0x0001763b) scroll_pane_cp24_ParamLimits

0x7dee,	// (0x0001763b) scroll_pane_cp24

0xe0ec,	// (0x0001d939) list_text_info_pane_t1_ParamLimits

0xe0ec,	// (0x0001d939) list_text_info_pane_t1

0xb82c,	// (0x0001b079) popup_fast_swap2_window_ParamLimits

0xb82c,	// (0x0001b079) popup_fast_swap2_window

0x7e3d,	// (0x0001768a) aid_size_cell_fast2

0x2295,	// (0x00011ae2) bg_popup_window_pane_cp17

0x4dea,	// (0x00014637) heading_pane_cp2

0x2878,	// (0x000120c5) listscroll_fast2_pane

0x7e47,	// (0x00017694) grid_fast2_pane

0x7e51,	// (0x0001769e) listscroll_fast2_pane_g1

0x7e59,	// (0x000176a6) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x0001f44e) listscroll_fast2_pane_g

0x347e,	// (0x00012ccb) scroll_pane_cp26

0x7e63,	// (0x000176b0) cell_fast2_pane_ParamLimits

0x7e63,	// (0x000176b0) cell_fast2_pane

0x7e78,	// (0x000176c5) cell_fast2_pane_g1

0x7e81,	// (0x000176ce) cell_fast2_pane_g2

0x7e8a,	// (0x000176d7) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x0001f453) cell_fast2_pane_g

0x296b,	// (0x000121b8) grid_highlight_pane_cp9

0x09a2,	// (0x000101ef) main_eswt_pane_ParamLimits

0x09a2,	// (0x000101ef) main_eswt_pane

0x7e03,	// (0x00017650) list_single_text_info_pane

0x7e92,	// (0x000176df) eswt_ctrl_button_pane

0x7e92,	// (0x000176df) eswt_ctrl_canvas_pane

0x7e9a,	// (0x000176e7) eswt_ctrl_combo_pane

0x7e92,	// (0x000176df) eswt_ctrl_default_pane

0x7e92,	// (0x000176df) eswt_ctrl_label_pane

0x7ea2,	// (0x000176ef) eswt_ctrl_wait_pane

0x7eaa,	// (0x000176f7) eswt_shell_pane

0x2295,	// (0x00011ae2) listscroll_eswt_app_pane

0x7eca,	// (0x00017717) popup_eswt_tasktip_window_ParamLimits

0x7eca,	// (0x00017717) popup_eswt_tasktip_window

0x49c2,	// (0x0001420f) bg_popup_window_pane_cp18

0x7edb,	// (0x00017728) eswt_control_pane_g1_ParamLimits

0x7edb,	// (0x00017728) eswt_control_pane_g1

0x7ee8,	// (0x00017735) eswt_control_pane_g2_ParamLimits

0x7ee8,	// (0x00017735) eswt_control_pane_g2

0x7ef5,	// (0x00017742) eswt_control_pane_g3_ParamLimits

0x7ef5,	// (0x00017742) eswt_control_pane_g3

0x7f02,	// (0x0001774f) eswt_control_pane_g4_ParamLimits

0x7f02,	// (0x0001774f) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x0001f45a) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x0001f45a) eswt_control_pane_g

0x3194,	// (0x000129e1) bg_button_pane_ParamLimits

0x3194,	// (0x000129e1) bg_button_pane

0x2980,	// (0x000121cd) common_borders_pane_copy2_ParamLimits

0x2980,	// (0x000121cd) common_borders_pane_copy2

0x7f0f,	// (0x0001775c) control_button_pane_g1_ParamLimits

0x7f0f,	// (0x0001775c) control_button_pane_g1

0x7f1b,	// (0x00017768) control_button_pane_g2_ParamLimits

0x7f1b,	// (0x00017768) control_button_pane_g2

0x7f27,	// (0x00017774) control_button_pane_g3_ParamLimits

0x7f27,	// (0x00017774) control_button_pane_g3

0x0002,

0xfc16,	// (0x0001f463) control_button_pane_g_ParamLimits

0xfc16,	// (0x0001f463) control_button_pane_g

0x7f3b,	// (0x00017788) control_button_pane_t1

0x7f49,	// (0x00017796) control_button_pane_t2

0x0001,

0xfc1d,	// (0x0001f46a) control_button_pane_t

0x489c,	// (0x000140e9) bg_button_pane_g1

0x48ac,	// (0x000140f9) bg_button_pane_g2

0x48a4,	// (0x000140f1) bg_button_pane_g3

0x48bc,	// (0x00014109) bg_button_pane_g4

0x48b4,	// (0x00014101) bg_button_pane_g5

0x48c4,	// (0x00014111) bg_button_pane_g6

0x48cc,	// (0x00014119) bg_button_pane_g7

0x48dc,	// (0x00014129) bg_button_pane_g8

0x48d4,	// (0x00014121) bg_button_pane_g9

0x0008,

0xf862,	// (0x0001f0af) bg_button_pane_g

0x7385,	// (0x00016bd2) common_borders_pane_ParamLimits

0x7385,	// (0x00016bd2) common_borders_pane

0x7edb,	// (0x00017728) eswt_control_pane_g1_copy1_ParamLimits

0x7edb,	// (0x00017728) eswt_control_pane_g1_copy1

0x7ee8,	// (0x00017735) eswt_control_pane_g2_copy1_ParamLimits

0x7ee8,	// (0x00017735) eswt_control_pane_g2_copy1

0x7ef5,	// (0x00017742) eswt_control_pane_g3_copy1_ParamLimits

0x7ef5,	// (0x00017742) eswt_control_pane_g3_copy1

0x7f02,	// (0x0001774f) eswt_control_pane_g4_copy1_ParamLimits

0x7f02,	// (0x0001774f) eswt_control_pane_g4_copy1

0x73c0,	// (0x00016c0d) bg_eswt_ctrl_canvas_pane_g1

0x7385,	// (0x00016bd2) common_borders_pane_cp2_ParamLimits

0x7385,	// (0x00016bd2) common_borders_pane_cp2

0x7385,	// (0x00016bd2) common_borders_pane_cp3_ParamLimits

0x7385,	// (0x00016bd2) common_borders_pane_cp3

0x7f57,	// (0x000177a4) separator_horizontal_pane

0x7f5f,	// (0x000177ac) separator_vertical_pane

0x7edb,	// (0x00017728) eswt_control_pane_g1_copy2_ParamLimits

0x7edb,	// (0x00017728) eswt_control_pane_g1_copy2

0x7ee8,	// (0x00017735) eswt_control_pane_g2_copy2_ParamLimits

0x7ee8,	// (0x00017735) eswt_control_pane_g2_copy2

0x7ef5,	// (0x00017742) eswt_control_pane_g3_copy2_ParamLimits

0x7ef5,	// (0x00017742) eswt_control_pane_g3_copy2

0x7f02,	// (0x0001774f) eswt_control_pane_g4_copy2_ParamLimits

0x7f02,	// (0x0001774f) eswt_control_pane_g4_copy2

0x2295,	// (0x00011ae2) common_borders_pane_cp4

0x7f68,	// (0x000177b5) separator_horizontal_pane_g1

0x7f71,	// (0x000177be) separator_horizontal_pane_g2

0x7f7a,	// (0x000177c7) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x0001f46f) separator_horizontal_pane_g

0x7edb,	// (0x00017728) eswt_control_pane_g1_copy3_ParamLimits

0x7edb,	// (0x00017728) eswt_control_pane_g1_copy3

0x7ee8,	// (0x00017735) eswt_control_pane_g2_copy3_ParamLimits

0x7ee8,	// (0x00017735) eswt_control_pane_g2_copy3

0x7ef5,	// (0x00017742) eswt_control_pane_g3_copy3_ParamLimits

0x7ef5,	// (0x00017742) eswt_control_pane_g3_copy3

0x7f02,	// (0x0001774f) eswt_control_pane_g4_copy3_ParamLimits

0x7f02,	// (0x0001774f) eswt_control_pane_g4_copy3

0x2295,	// (0x00011ae2) common_borders_pane_cp5

0x7f83,	// (0x000177d0) separator_vertical_pane_g1

0x7f8c,	// (0x000177d9) separator_vertical_pane_g2

0x7f95,	// (0x000177e2) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x0001f476) separator_vertical_pane_g

0x7edb,	// (0x00017728) eswt_control_pane_g1_copy4_ParamLimits

0x7edb,	// (0x00017728) eswt_control_pane_g1_copy4

0x7ee8,	// (0x00017735) eswt_control_pane_g2_copy4_ParamLimits

0x7ee8,	// (0x00017735) eswt_control_pane_g2_copy4

0x7ef5,	// (0x00017742) eswt_control_pane_g3_copy4_ParamLimits

0x7ef5,	// (0x00017742) eswt_control_pane_g3_copy4

0x7f02,	// (0x0001774f) eswt_control_pane_g4_copy4_ParamLimits

0x7f02,	// (0x0001774f) eswt_control_pane_g4_copy4

0xe107,	// (0x0001d954) eswt_ctrl_combo_button_pane

0xe10f,	// (0x0001d95c) eswt_ctrl_input_pane

0xe117,	// (0x0001d964) popup_choice_list_window_cp70

0xe11f,	// (0x0001d96c) eswt_ctrl_input_pane_t1

0x2295,	// (0x00011ae2) input_focus_pane_cp70

0x7385,	// (0x00016bd2) bg_button_pane_cp70_ParamLimits

0x7385,	// (0x00016bd2) bg_button_pane_cp70

0xe12d,	// (0x0001d97a) eswt_ctrl_combo_button_pane_g1

0x7fcc,	// (0x00017819) wait_bar_pane_cp70

0x49c2,	// (0x0001420f) bg_popup_window_pane_cp70_ParamLimits

0x49c2,	// (0x0001420f) bg_popup_window_pane_cp70

0x7fd4,	// (0x00017821) popup_eswt_tasktip_window_t1

0x7fea,	// (0x00017837) wait_bar_pane_cp71_ParamLimits

0x7fea,	// (0x00017837) wait_bar_pane_cp71

0x7ff6,	// (0x00017843) grid_eswt_app_pane

0x3798,	// (0x00012fe5) scroll_pane_cp70

0xe135,	// (0x0001d982) cell_eswt_app_pane_ParamLimits

0xe135,	// (0x0001d982) cell_eswt_app_pane

0xe15f,	// (0x0001d9ac) cell_eswt_app_pane_g1_ParamLimits

0xe15f,	// (0x0001d9ac) cell_eswt_app_pane_g1

0xe18e,	// (0x0001d9db) cell_eswt_app_pane_g2_ParamLimits

0xe18e,	// (0x0001d9db) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x0001f47d) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x0001f47d) cell_eswt_app_pane_g

0xe1b7,	// (0x0001da04) cell_eswt_app_pane_t1_ParamLimits

0xe1b7,	// (0x0001da04) cell_eswt_app_pane_t1

0x80b9,	// (0x00017906) grid_highlight_pane_cp70_ParamLimits

0x80b9,	// (0x00017906) grid_highlight_pane_cp70

0x3efb,	// (0x00013748) set_content_pane_g1

0x42c6,	// (0x00013b13) status_small_volume_pane

0x17e3,	// (0x00011030) status_small_volume_pane_g1

0x17eb,	// (0x00011038) volume_small2_pane

0x17f4,	// (0x00011041) volume_small2_pane_g1

0x17fd,	// (0x0001104a) volume_small2_pane_g2

0x1806,	// (0x00011053) volume_small2_pane_g3

0x180f,	// (0x0001105c) volume_small2_pane_g4

0x1818,	// (0x00011065) volume_small2_pane_g5

0x1821,	// (0x0001106e) volume_small2_pane_g6

0x182a,	// (0x00011077) volume_small2_pane_g7

0x1833,	// (0x00011080) volume_small2_pane_g8

0x183c,	// (0x00011089) volume_small2_pane_g9

0x1845,	// (0x00011092) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x0001f482) volume_small2_pane_g

0x7786,	// (0x00016fd3) fep_vkb_top_text_pane_g1_ParamLimits

0xe050,	// (0x0001d89d) fep_vkb_top_text_pane_t1_ParamLimits

0x79fb,	// (0x00017248) popup_preview_fixed_window_g3_ParamLimits

0x79fb,	// (0x00017248) popup_preview_fixed_window_g3

0xbe49,	// (0x0001b696) popup_toolbar_trans_pane

0xd9fa,	// (0x0001d247) aid_height_set_list_ParamLimits

0x5da9,	// (0x000155f6) aid_size_parent_ParamLimits

0x436e,	// (0x00013bbb) list_highlight_pane_cp2_ParamLimits

0x3efb,	// (0x00013748) set_content_pane_g1_ParamLimits

0xdbb3,	// (0x0001d400) list_single_image_pane_ParamLimits

0xdbb3,	// (0x0001d400) list_single_image_pane

0xe1e9,	// (0x0001da36) aid_size_cell_image_ParamLimits

0xe1e9,	// (0x0001da36) aid_size_cell_image

0xe1f6,	// (0x0001da43) grid_single_image_pane_ParamLimits

0xe1f6,	// (0x0001da43) grid_single_image_pane

0x53ec,	// (0x00014c39) list_single_image_pane_g1_ParamLimits

0x53ec,	// (0x00014c39) list_single_image_pane_g1

0x80de,	// (0x0001792b) list_single_image_pane_g2_ParamLimits

0x80de,	// (0x0001792b) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x0001f497) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x0001f497) list_single_image_pane_g

0x80f2,	// (0x0001793f) list_single_image_pane_t1_ParamLimits

0x80f2,	// (0x0001793f) list_single_image_pane_t1

0xe204,	// (0x0001da51) cell_image_list_pane_ParamLimits

0xe204,	// (0x0001da51) cell_image_list_pane

0xe21a,	// (0x0001da67) cell_image_list_pane_g1

0xe223,	// (0x0001da70) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x0001f49c) cell_image_list_pane_g

0x812e,	// (0x0001797b) aid_size_cell_tb_trans_pane

0x3194,	// (0x000129e1) bg_tb_trans_pane

0x8140,	// (0x0001798d) grid_tb_trans_pane

0x489c,	// (0x000140e9) bg_tb_trans_pane_g1

0x48ac,	// (0x000140f9) bg_tb_trans_pane_g2

0x48a4,	// (0x000140f1) bg_tb_trans_pane_g3

0x48bc,	// (0x00014109) bg_tb_trans_pane_g4

0x48b4,	// (0x00014101) bg_tb_trans_pane_g5

0x48dc,	// (0x00014129) bg_tb_trans_pane_g6

0x48d4,	// (0x00014121) bg_tb_trans_pane_g7

0x48c4,	// (0x00014111) bg_tb_trans_pane_g8

0x48cc,	// (0x00014119) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x0001f4a1) bg_tb_trans_pane_g

0x8154,	// (0x000179a1) cell_toolbar_trans_pane_ParamLimits

0x8154,	// (0x000179a1) cell_toolbar_trans_pane

0x73c0,	// (0x00016c0d) cell_toolbar_trans_pane_g1

0xde05,	// (0x0001d652) list_form2_midp_pane_t1

0xde13,	// (0x0001d660) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x0001f33e) list_form2_midp_pane_t

0x6f57,	// (0x000167a4) scroll_pane_cp51_ParamLimits

0x7162,	// (0x000169af) form2_midp_wait_pane_g1

0x716b,	// (0x000169b8) form2_midp_wait_pane_g2

0x7174,	// (0x000169c1) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0001f353) form2_midp_wait_pane_g

0x2389,	// (0x00011bd6) list_highlight_pane_cp21_ParamLimits

0x71cb,	// (0x00016a18) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x71da,	// (0x00016a27) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5faf,	// (0x000157fc) list_single_2graphic_im_pane_ParamLimits

0x5faf,	// (0x000157fc) list_single_2graphic_im_pane

0xe22c,	// (0x0001da79) list_single_2graphic_im_pane_g1_ParamLimits

0xe22c,	// (0x0001da79) list_single_2graphic_im_pane_g1

0xe23d,	// (0x0001da8a) list_single_2graphic_im_pane_g2_ParamLimits

0xe23d,	// (0x0001da8a) list_single_2graphic_im_pane_g2

0xe249,	// (0x0001da96) list_single_2graphic_im_pane_g3_ParamLimits

0xe249,	// (0x0001da96) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0001f4b4) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0001f4b4) list_single_2graphic_im_pane_g

0xe25d,	// (0x0001daaa) list_single_2graphic_im_pane_t1_ParamLimits

0xe25d,	// (0x0001daaa) list_single_2graphic_im_pane_t1

0x7a07,	// (0x00017254) list_single_graphic_2heading_pane_fp_ParamLimits

0x7a07,	// (0x00017254) list_single_graphic_2heading_pane_fp

0x7a4b,	// (0x00017298) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7a4b,	// (0x00017298) list_single_graphic_2heading_pane_fp_g1

0x7a1c,	// (0x00017269) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7a1c,	// (0x00017269) list_single_graphic_2heading_pane_fp_g2

0x2dd3,	// (0x00012620) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2dd3,	// (0x00012620) list_single_graphic_2heading_pane_fp_g3

0x31ba,	// (0x00012a07) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x31ba,	// (0x00012a07) list_single_graphic_2heading_pane_fp_g4

0x7a28,	// (0x00017275) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7a28,	// (0x00017275) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001f3db) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001f3db) list_single_graphic_2heading_pane_fp_g

0x81e8,	// (0x00017a35) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x81e8,	// (0x00017a35) list_single_graphic_2heading_pane_fp_t1

0x7a83,	// (0x000172d0) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7a83,	// (0x000172d0) list_single_graphic_2heading_pane_fp_t2

0x81fe,	// (0x00017a4b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x81fe,	// (0x00017a4b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0001f4bd) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0001f4bd) list_single_graphic_2heading_pane_fp_t

0x744c,	// (0x00016c99) fep_hwr_write_pane_g5_ParamLimits

0x744c,	// (0x00016c99) fep_hwr_write_pane_g5

0x7458,	// (0x00016ca5) fep_hwr_write_pane_g6_ParamLimits

0x7458,	// (0x00016ca5) fep_hwr_write_pane_g6

0x7eaa,	// (0x000176f7) eswt_shell_pane_ParamLimits

0x49c2,	// (0x0001420f) bg_popup_window_pane_cp18_ParamLimits

0x5cc9,	// (0x00015516) heading_pane_cp70

0x7fd4,	// (0x00017821) popup_eswt_tasktip_window_t1_ParamLimits

0xd329,	// (0x0001cb76) aid_touch_tab_arrow_left

0xd33f,	// (0x0001cb8c) aid_touch_tab_arrow_right

0xc5f4,	// (0x0001be41) title_pane_g3_ParamLimits

0xc5f4,	// (0x0001be41) title_pane_g3

0x3073,	// (0x000128c0) set_value_pane_g1

0xbe49,	// (0x0001b696) popup_toolbar_trans_pane_ParamLimits

0x812e,	// (0x0001797b) aid_size_cell_tb_trans_pane_ParamLimits

0x3194,	// (0x000129e1) bg_tb_trans_pane_ParamLimits

0x8140,	// (0x0001798d) grid_tb_trans_pane_ParamLimits

0x262c,	// (0x00011e79) cont_note_pane_ParamLimits

0x262c,	// (0x00011e79) cont_note_pane

0x2980,	// (0x000121cd) cont_snote2_single_text_pane_ParamLimits

0x2980,	// (0x000121cd) cont_snote2_single_text_pane

0x2980,	// (0x000121cd) cont_snote2_single_graphic_pane_ParamLimits

0x2980,	// (0x000121cd) cont_snote2_single_graphic_pane

0x5005,	// (0x00014852) cont_note_wait_pane_ParamLimits

0x5005,	// (0x00014852) cont_note_wait_pane

0x5005,	// (0x00014852) cont_note_image_pane_ParamLimits

0x5005,	// (0x00014852) cont_note_image_pane

0x8214,	// (0x00017a61) popup_note2_window_g1_ParamLimits

0x8214,	// (0x00017a61) popup_note2_window_g1

0x8245,	// (0x00017a92) popup_note2_window_t1_ParamLimits

0x8245,	// (0x00017a92) popup_note2_window_t1

0x828a,	// (0x00017ad7) popup_note2_window_t2_ParamLimits

0x828a,	// (0x00017ad7) popup_note2_window_t2

0x82cf,	// (0x00017b1c) popup_note2_window_t3_ParamLimits

0x82cf,	// (0x00017b1c) popup_note2_window_t3

0x8314,	// (0x00017b61) popup_note2_window_t4_ParamLimits

0x8314,	// (0x00017b61) popup_note2_window_t4

0x26b0,	// (0x00011efd) popup_note2_window_t5_ParamLimits

0x26b0,	// (0x00011efd) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0001f4c9) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0001f4c9) popup_note2_window_t

0x8343,	// (0x00017b90) popup_note2_image_window_g1_ParamLimits

0x8343,	// (0x00017b90) popup_note2_image_window_g1

0x834f,	// (0x00017b9c) popup_note2_image_window_g2_ParamLimits

0x834f,	// (0x00017b9c) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0001f4d4) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0001f4d4) popup_note2_image_window_g

0x8361,	// (0x00017bae) popup_note2_image_window_t1_ParamLimits

0x8361,	// (0x00017bae) popup_note2_image_window_t1

0x8379,	// (0x00017bc6) popup_note2_image_window_t2_ParamLimits

0x8379,	// (0x00017bc6) popup_note2_image_window_t2

0x8391,	// (0x00017bde) popup_note2_image_window_t3_ParamLimits

0x8391,	// (0x00017bde) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0001f4d9) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0001f4d9) popup_note2_image_window_t

0x5013,	// (0x00014860) popup_note2_wait_window_g1_ParamLimits

0x5013,	// (0x00014860) popup_note2_wait_window_g1

0x83ad,	// (0x00017bfa) popup_note2_wait_window_g2_ParamLimits

0x83ad,	// (0x00017bfa) popup_note2_wait_window_g2

0x502b,	// (0x00014878) popup_note2_wait_window_g3_ParamLimits

0x502b,	// (0x00014878) popup_note2_wait_window_g3

0x0002,

0xfc93,	// (0x0001f4e0) popup_note2_wait_window_g_ParamLimits

0xfc93,	// (0x0001f4e0) popup_note2_wait_window_g

0x83b9,	// (0x00017c06) popup_note2_wait_window_t1_ParamLimits

0x83b9,	// (0x00017c06) popup_note2_wait_window_t1

0x83d7,	// (0x00017c24) popup_note2_wait_window_t2_ParamLimits

0x83d7,	// (0x00017c24) popup_note2_wait_window_t2

0x83f5,	// (0x00017c42) popup_note2_wait_window_t3_ParamLimits

0x83f5,	// (0x00017c42) popup_note2_wait_window_t3

0x8407,	// (0x00017c54) popup_note2_wait_window_t4_ParamLimits

0x8407,	// (0x00017c54) popup_note2_wait_window_t4

0x0003,

0xfc9a,	// (0x0001f4e7) popup_note2_wait_window_t_ParamLimits

0xfc9a,	// (0x0001f4e7) popup_note2_wait_window_t

0x8419,	// (0x00017c66) wait_bar2_pane_ParamLimits

0x8419,	// (0x00017c66) wait_bar2_pane

0x8431,	// (0x00017c7e) popup_snote2_single_text_window_g1_ParamLimits

0x8431,	// (0x00017c7e) popup_snote2_single_text_window_g1

0x8459,	// (0x00017ca6) popup_snote2_single_text_window_t1_ParamLimits

0x8459,	// (0x00017ca6) popup_snote2_single_text_window_t1

0x84a5,	// (0x00017cf2) popup_snote2_single_text_window_t2_ParamLimits

0x84a5,	// (0x00017cf2) popup_snote2_single_text_window_t2

0x84f1,	// (0x00017d3e) popup_snote2_single_text_window_t3_ParamLimits

0x84f1,	// (0x00017d3e) popup_snote2_single_text_window_t3

0x8532,	// (0x00017d7f) popup_snote2_single_text_window_t4_ParamLimits

0x8532,	// (0x00017d7f) popup_snote2_single_text_window_t4

0x8568,	// (0x00017db5) popup_snote2_single_text_window_t5_ParamLimits

0x8568,	// (0x00017db5) popup_snote2_single_text_window_t5

0x0004,

0xfca3,	// (0x0001f4f0) popup_snote2_single_text_window_t_ParamLimits

0xfca3,	// (0x0001f4f0) popup_snote2_single_text_window_t

0x8593,	// (0x00017de0) popup_snote2_single_graphic_window_g1_ParamLimits

0x8593,	// (0x00017de0) popup_snote2_single_graphic_window_g1

0x85bb,	// (0x00017e08) popup_snote2_single_graphic_window_g2_ParamLimits

0x85bb,	// (0x00017e08) popup_snote2_single_graphic_window_g2

0x0001,

0xfcae,	// (0x0001f4fb) popup_snote2_single_graphic_window_g_ParamLimits

0xfcae,	// (0x0001f4fb) popup_snote2_single_graphic_window_g

0x85e3,	// (0x00017e30) popup_snote2_single_graphic_window_t1_ParamLimits

0x85e3,	// (0x00017e30) popup_snote2_single_graphic_window_t1

0x862f,	// (0x00017e7c) popup_snote2_single_graphic_window_t2_ParamLimits

0x862f,	// (0x00017e7c) popup_snote2_single_graphic_window_t2

0x84f1,	// (0x00017d3e) popup_snote2_single_graphic_window_t3_ParamLimits

0x84f1,	// (0x00017d3e) popup_snote2_single_graphic_window_t3

0x8532,	// (0x00017d7f) popup_snote2_single_graphic_window_t4_ParamLimits

0x8532,	// (0x00017d7f) popup_snote2_single_graphic_window_t4

0x8568,	// (0x00017db5) popup_snote2_single_graphic_window_t5_ParamLimits

0x8568,	// (0x00017db5) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb3,	// (0x0001f500) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb3,	// (0x0001f500) popup_snote2_single_graphic_window_t

0x6e18,	// (0x00016665) clock_nsta_pane_cp2_t1

0x6e18,	// (0x00016665) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0001f314) clock_nsta_pane_cp2_t

0x31ae,	// (0x000129fb) form_field_data_wide_pane_g1_ParamLimits

0x2dd3,	// (0x00012620) form_field_data_wide_pane_g2_ParamLimits

0x2dd3,	// (0x00012620) form_field_data_wide_pane_g2

0x31ba,	// (0x00012a07) form_field_data_wide_pane_g3_ParamLimits

0x31ba,	// (0x00012a07) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0001eec9) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0001eec9) form_field_data_wide_pane_g

0xdd32,	// (0x0001d57f) grid_touch_3_pane_ParamLimits

0xdd32,	// (0x0001d57f) grid_touch_3_pane

0xe28e,	// (0x0001dadb) cell_touch_3_pane_ParamLimits

0xe28e,	// (0x0001dadb) cell_touch_3_pane

0x73c0,	// (0x00016c0d) cell_touch_3_pane_g1

0x73c0,	// (0x00016c0d) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0001f399) cell_touch_3_pane_g

0x26e2,	// (0x00011f2f) cont_query_data_pane

0x26ea,	// (0x00011f37) cont_query_data_pane_cp1

0x86a9,	// (0x00017ef6) button_value_adjust_pane_cp7

0x86b1,	// (0x00017efe) query_popup_pane_cp3

0x3a7f,	// (0x000132cc) bg_popup_sub_pane_cp22_ParamLimits

0x05db,	// (0x0000fe28) navi_navi_volume_pane_cp2

0x05f6,	// (0x0000fe43) popup_side_volume_key_window_g2

0x0605,	// (0x0000fe52) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x0001ef5f) popup_side_volume_key_window_g

0x0622,	// (0x0000fe6f) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0001ef66) popup_side_volume_key_window_t

0x3dc5,	// (0x00013612) popup_side_volume_key_window_ParamLimits

0xca4e,	// (0x0001c29b) list_double_graphic_pane_g4_ParamLimits

0xca4e,	// (0x0001c29b) list_double_graphic_pane_g4

0xdb8f,	// (0x0001d3dc) list_single_2heading_msg_pane_ParamLimits

0xdb8f,	// (0x0001d3dc) list_single_2heading_msg_pane

0xe2d6,	// (0x0001db23) list_single_2heading_msg_pane_g1_ParamLimits

0xe2d6,	// (0x0001db23) list_single_2heading_msg_pane_g1

0xe2e2,	// (0x0001db2f) list_single_2heading_msg_pane_g2_ParamLimits

0xe2e2,	// (0x0001db2f) list_single_2heading_msg_pane_g2

0xe2f5,	// (0x0001db42) list_single_2heading_msg_pane_g3_ParamLimits

0xe2f5,	// (0x0001db42) list_single_2heading_msg_pane_g3

0xe301,	// (0x0001db4e) list_single_2heading_msg_pane_g4_ParamLimits

0xe301,	// (0x0001db4e) list_single_2heading_msg_pane_g4

0x0003,

0xfcbe,	// (0x0001f50b) list_single_2heading_msg_pane_g_ParamLimits

0xfcbe,	// (0x0001f50b) list_single_2heading_msg_pane_g

0xe319,	// (0x0001db66) list_single_2heading_msg_pane_t1_ParamLimits

0xe319,	// (0x0001db66) list_single_2heading_msg_pane_t1

0xe341,	// (0x0001db8e) list_single_2heading_msg_pane_t2_ParamLimits

0xe341,	// (0x0001db8e) list_single_2heading_msg_pane_t2

0xe3ac,	// (0x0001dbf9) list_single_2heading_msg_pane_t3_ParamLimits

0xe3ac,	// (0x0001dbf9) list_single_2heading_msg_pane_t3

0x8794,	// (0x00017fe1) list_single_2heading_msg_pane_t4_ParamLimits

0x8794,	// (0x00017fe1) list_single_2heading_msg_pane_t4

0x0003,

0xfcc7,	// (0x0001f514) list_single_2heading_msg_pane_t_ParamLimits

0xfcc7,	// (0x0001f514) list_single_2heading_msg_pane_t

0x22dd,	// (0x00011b2a) title_pane_g4_ParamLimits

0x22dd,	// (0x00011b2a) title_pane_g4

0x03ea,	// (0x0000fc37) title_pane_stacon_g3_ParamLimits

0x03ea,	// (0x0000fc37) title_pane_stacon_g3

0x81ab,	// (0x000179f8) list_single_2graphic_im_pane_g4_ParamLimits

0x81ab,	// (0x000179f8) list_single_2graphic_im_pane_g4

0x5a70,	// (0x000152bd) popup_side_volume_key_window_cp

0x6368,	// (0x00015bb5) main_idle_act2_pane_t1

0x0fe7,	// (0x00010834) toolbar_button_pane_g10

0xc90f,	// (0x0001c15c) popup_toolbar_window_cp1

0x6e09,	// (0x00016656) clock_nsta_pane_cp_t1

0x6e09,	// (0x00016656) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0001f30f) clock_nsta_pane_cp_t

0x05db,	// (0x0000fe28) navi_navi_volume_pane_cp2_ParamLimits

0x05ea,	// (0x0000fe37) popup_side_volume_key_window_g1_ParamLimits

0x05f6,	// (0x0000fe43) popup_side_volume_key_window_g2_ParamLimits

0x0605,	// (0x0000fe52) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x0001ef5f) popup_side_volume_key_window_g_ParamLimits

0x144f,	// (0x00010c9c) fep_hwr_aid_pane

0x14f6,	// (0x00010d43) bg_fep_hwr_top_pane_g4_ParamLimits

0x741c,	// (0x00016c69) fep_hwr_top_pane_g1_ParamLimits

0x742e,	// (0x00016c7b) fep_hwr_top_pane_g2_ParamLimits

0x1516,	// (0x00010d63) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0001f364) fep_hwr_top_pane_g_ParamLimits

0x152b,	// (0x00010d78) fep_hwr_top_text_pane_ParamLimits

0x5833,	// (0x00015080) aid_touch_tab_arrow_arrow_2

0x583c,	// (0x00015089) aid_touch_tab_arrow_left_2

0x1463,	// (0x00010cb0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x149a,	// (0x00010ce7) fep_hwr_prediction_pane

0x758e,	// (0x00016ddb) fep_vkb_prediction_pane

0xe030,	// (0x0001d87d) fep_vkb_side_pane_g3_ParamLimits

0xe030,	// (0x0001d87d) fep_vkb_side_pane_g3

0x16a6,	// (0x00010ef3) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1712,	// (0x00010f5f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x171f,	// (0x00010f6c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x0001f413) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x184e,	// (0x0001109b) fep_hwr_prediction_pane_g1

0x1858,	// (0x000110a5) fep_hwr_prediction_pane_g2

0x1860,	// (0x000110ad) fep_hwr_prediction_pane_g3

0x1868,	// (0x000110b5) fep_hwr_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0001f51d) fep_hwr_prediction_pane_g

0x87b9,	// (0x00018006) fep_vkb_prediction_pane_g1

0x87c3,	// (0x00018010) fep_vkb_prediction_pane_g2

0x87cb,	// (0x00018018) fep_vkb_prediction_pane_g3

0x87d3,	// (0x00018020) fep_vkb_prediction_pane_g4

0x0003,

0xfcd9,	// (0x0001f526) fep_vkb_prediction_pane_g

0x12cf,	// (0x00010b1c) slider_set_pane_g3

0x12e3,	// (0x00010b30) slider_set_pane_g4

0x12fb,	// (0x00010b48) slider_set_pane_g5

0x12cf,	// (0x00010b1c) slider_set_pane_g6

0x1311,	// (0x00010b5e) slider_set_pane_g7

0x5f0e,	// (0x0001575b) slider_form_pane_g3

0x5f17,	// (0x00015764) slider_form_pane_g4

0x5f1f,	// (0x0001576c) slider_form_pane_g5

0x5f0e,	// (0x0001575b) slider_form_pane_g6

0xdb45,	// (0x0001d392) slider_form_pane_g7

0x66a6,	// (0x00015ef3) slider_set_pane_vc_g3

0x66af,	// (0x00015efc) slider_set_pane_vc_g4

0x66b8,	// (0x00015f05) slider_set_pane_vc_g5

0x66a6,	// (0x00015ef3) slider_set_pane_vc_g6

0x66c1,	// (0x00015f0e) slider_set_pane_vc_g7

0x6ad5,	// (0x00016322) slider_form_pane_vc_g1

0x6ade,	// (0x0001632b) slider_form_pane_vc_g2

0x6ae7,	// (0x00016334) slider_form_pane_vc_g3

0x6ad5,	// (0x00016322) slider_form_pane_vc_g4

0x6af0,	// (0x0001633d) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0001f2e1) slider_form_pane_vc_g

0x00bb,	// (0x0000f908) main_idle_act3_pane

0x87db,	// (0x00018028) ai3_links_pane

0xe41a,	// (0x0001dc67) popup_ai3_data_window_ParamLimits

0xe41a,	// (0x0001dc67) popup_ai3_data_window

0x2295,	// (0x00011ae2) grid_ai3_links_pane

0xe434,	// (0x0001dc81) cell_ai3_links_pane_ParamLimits

0xe434,	// (0x0001dc81) cell_ai3_links_pane

0x8816,	// (0x00018063) bg_popup_sub_pane_cp11

0x8823,	// (0x00018070) cell_ai3_links_pane_g1

0x2295,	// (0x00011ae2) bg_popup_sub_pane_cp12

0x8848,	// (0x00018095) heading_ai3_data_pane

0x8850,	// (0x0001809d) list_ai3_gene_pane

0x885c,	// (0x000180a9) popup_ai3_data_window_g1

0x8864,	// (0x000180b1) heading_ai3_data_pane_g1

0x886c,	// (0x000180b9) heading_ai3_data_pane_t1

0x887a,	// (0x000180c7) list_double_ai3_gene_pane_ParamLimits

0x887a,	// (0x000180c7) list_double_ai3_gene_pane

0x8887,	// (0x000180d4) list_single_ai3_gene_pane_ParamLimits

0x8887,	// (0x000180d4) list_single_ai3_gene_pane

0x7385,	// (0x00016bd2) list_highlight_pane_cp7_ParamLimits

0x7385,	// (0x00016bd2) list_highlight_pane_cp7

0x8894,	// (0x000180e1) list_single_a13_gene_pane_t1_ParamLimits

0x8894,	// (0x000180e1) list_single_a13_gene_pane_t1

0x88ab,	// (0x000180f8) list_single_ai3_gene_pane_g1

0x88b4,	// (0x00018101) list_single_ai3_gene_pane_g2

0x0001,

0xfce2,	// (0x0001f52f) list_single_ai3_gene_pane_g

0x88bc,	// (0x00018109) list_double_ai3_gene_pane_g1_ParamLimits

0x88bc,	// (0x00018109) list_double_ai3_gene_pane_g1

0x88c8,	// (0x00018115) list_double_ai3_gene_pane_t1_ParamLimits

0x88c8,	// (0x00018115) list_double_ai3_gene_pane_t1

0x88e4,	// (0x00018131) list_double_ai3_gene_pane_t2_ParamLimits

0x88e4,	// (0x00018131) list_double_ai3_gene_pane_t2

0x88fa,	// (0x00018147) list_double_ai3_gene_pane_t3_ParamLimits

0x88fa,	// (0x00018147) list_double_ai3_gene_pane_t3

0x0002,

0xfce7,	// (0x0001f534) list_double_ai3_gene_pane_t_ParamLimits

0xfce7,	// (0x0001f534) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x86c2,	// (0x00017f0f) aid_size_min_col_2

0xe2c0,	// (0x0001db0d) aid_size_min_msg_ParamLimits

0xe2c0,	// (0x0001db0d) aid_size_min_msg

0xe044,	// (0x0001d891) fep_vkb_top_text_pane_g2_ParamLimits

0xe044,	// (0x0001d891) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0001f394) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0001f394) fep_vkb_top_text_pane_g

0x00bb,	// (0x0000f908) main_hc_apps_shell_pane

0x8917,	// (0x00018164) grid_hc_apps_pane_ParamLimits

0x8917,	// (0x00018164) grid_hc_apps_pane

0x8926,	// (0x00018173) list_hc_apps_pane

0x892e,	// (0x0001817b) scroll_pane_cp37_ParamLimits

0x892e,	// (0x0001817b) scroll_pane_cp37

0xe44e,	// (0x0001dc9b) cell_hc_apps_pane_ParamLimits

0xe44e,	// (0x0001dc9b) cell_hc_apps_pane

0xe50c,	// (0x0001dd59) cell_hc_apps_pane_g1_ParamLimits

0xe50c,	// (0x0001dd59) cell_hc_apps_pane_g1

0x8a19,	// (0x00018266) cell_hc_apps_pane_g2_ParamLimits

0x8a19,	// (0x00018266) cell_hc_apps_pane_g2

0x8a35,	// (0x00018282) cell_hc_apps_pane_g3_ParamLimits

0x8a35,	// (0x00018282) cell_hc_apps_pane_g3

0x0002,

0xfcee,	// (0x0001f53b) cell_hc_apps_pane_g_ParamLimits

0xfcee,	// (0x0001f53b) cell_hc_apps_pane_g

0xe539,	// (0x0001dd86) cell_hc_apps_pane_t1_ParamLimits

0xe539,	// (0x0001dd86) cell_hc_apps_pane_t1

0x262c,	// (0x00011e79) grid_highlight_pane_cp10_ParamLimits

0x262c,	// (0x00011e79) grid_highlight_pane_cp10

0xe577,	// (0x0001ddc4) list_single_hc_apps_pane_ParamLimits

0xe577,	// (0x0001ddc4) list_single_hc_apps_pane

0xe5a4,	// (0x0001ddf1) list_single_hc_apps_pane_g1

0xe5bd,	// (0x0001de0a) list_single_hc_apps_pane_g2

0x0001,

0xfcf5,	// (0x0001f542) list_single_hc_apps_pane_g

0xe5d6,	// (0x0001de23) list_single_hc_apps_pane_g2_copy1

0x8b41,	// (0x0001838e) list_single_hc_apps_pane_t1

0x2389,	// (0x00011bd6) bg_set_opt_pane_cp_ParamLimits

0x0312,	// (0x0000fb5f) setting_slider_pane_t1_ParamLimits

0x032b,	// (0x0000fb78) setting_slider_pane_t2_ParamLimits

0x0345,	// (0x0000fb92) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0001edb1) setting_slider_pane_t_ParamLimits

0x035d,	// (0x0000fbaa) slider_set_pane_ParamLimits

0x0884,	// (0x000100d1) control_pane_g5_ParamLimits

0x0884,	// (0x000100d1) control_pane_g5

0x5d5d,	// (0x000155aa) slider_set_pane_g1_ParamLimits

0x12c3,	// (0x00010b10) slider_set_pane_g2_ParamLimits

0x12cf,	// (0x00010b1c) slider_set_pane_g3_ParamLimits

0x12e3,	// (0x00010b30) slider_set_pane_g4_ParamLimits

0x12fb,	// (0x00010b48) slider_set_pane_g5_ParamLimits

0x12cf,	// (0x00010b1c) slider_set_pane_g6_ParamLimits

0x1311,	// (0x00010b5e) slider_set_pane_g7_ParamLimits

0xf960,	// (0x0001f1ad) slider_set_pane_g_ParamLimits

0x3ea6,	// (0x000136f3) navi_icon_text_pane_ParamLimits

0xd2f2,	// (0x0001cb3f) aid_fill_nsta_2_ParamLimits

0xd329,	// (0x0001cb76) aid_touch_tab_arrow_left_ParamLimits

0xd33f,	// (0x0001cb8c) aid_touch_tab_arrow_right_ParamLimits

0xd3da,	// (0x0001cc27) clock_nsta_pane_ParamLimits

0x5815,	// (0x00015062) navi_icon_pane_g1_ParamLimits

0x5821,	// (0x0001506e) navi_text_pane_t1_ParamLimits

0xddf9,	// (0x0001d646) navi_icon_text_pane_g1_ParamLimits

0x6f21,	// (0x0001676e) navi_icon_text_pane_t1_ParamLimits

0xe5a4,	// (0x0001ddf1) list_single_hc_apps_pane_g1_ParamLimits

0xe5bd,	// (0x0001de0a) list_single_hc_apps_pane_g2_ParamLimits

0xfcf5,	// (0x0001f542) list_single_hc_apps_pane_g_ParamLimits

0xe5d6,	// (0x0001de23) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8b41,	// (0x0001838e) list_single_hc_apps_pane_t1_ParamLimits

0xb61b,	// (0x0001ae68) popup_toolbar2_fixed_window_ParamLimits

0xb61b,	// (0x0001ae68) popup_toolbar2_fixed_window

0xbe3f,	// (0x0001b68c) popup_toolbar2_float_window

0x2295,	// (0x00011ae2) bg_popup_sub_pane_cp27

0x8b6f,	// (0x000183bc) grid_toolbar2_float_pane

0x2295,	// (0x00011ae2) bg_popup_sub_pane_cp26

0x8b6f,	// (0x000183bc) grid_toolbar2_fixed_pane

0xe5f2,	// (0x0001de3f) cell_toolbar2_fixed_pane_ParamLimits

0xe5f2,	// (0x0001de3f) cell_toolbar2_fixed_pane

0xe60c,	// (0x0001de59) cell_toolbar2_fixed_pane_g1

0x8b90,	// (0x000183dd) toolbar2_fixed_button_pane

0x489c,	// (0x000140e9) toolbar2_fixed_button_pane_g1

0x48ac,	// (0x000140f9) toolbar2_fixed_button_pane_g2

0x48a4,	// (0x000140f1) toolbar2_fixed_button_pane_g3

0x48bc,	// (0x00014109) toolbar2_fixed_button_pane_g4

0x48b4,	// (0x00014101) toolbar2_fixed_button_pane_g5

0x48c4,	// (0x00014111) toolbar2_fixed_button_pane_g6

0x48cc,	// (0x00014119) toolbar2_fixed_button_pane_g7

0x48dc,	// (0x00014129) toolbar2_fixed_button_pane_g8

0x48d4,	// (0x00014121) toolbar2_fixed_button_pane_g9

0x0008,

0xf862,	// (0x0001f0af) toolbar2_fixed_button_pane_g

0x8b98,	// (0x000183e5) cell_toolbar2_float_pane_ParamLimits

0x8b98,	// (0x000183e5) cell_toolbar2_float_pane

0x8ba9,	// (0x000183f6) cell_toolbar2_float_pane_g1

0x8b90,	// (0x000183dd) toolbar2_fixed_button_pane_cp

0xdf1e,	// (0x0001d76b) fep_vkb_accented_list_pane_ParamLimits

0xdf1e,	// (0x0001d76b) fep_vkb_accented_list_pane

0x1686,	// (0x00010ed3) bg_popup_fep_shadow_pane_g9

0x4026,	// (0x00013873) bg_popup_fep_shadow_pane_cp3

0x3465,	// (0x00012cb2) list_accented_list_pane

0x8bb2,	// (0x000183ff) list_single_accented_list_pane_ParamLimits

0x8bb2,	// (0x000183ff) list_single_accented_list_pane

0x4026,	// (0x00013873) list_highlight_pane_cp10

0x8bc3,	// (0x00018410) list_single_accented_list_pane_t1

0xbd69,	// (0x0001b5b6) popup_slider_window_ParamLimits

0xbd69,	// (0x0001b5b6) popup_slider_window

0x86b9,	// (0x00017f06) aid_indentation_list_msg

0xe705,	// (0x0001df52) bg_popup_window_pane_cp19

0x8ce7,	// (0x00018534) popup_slider_window_g1

0x8d03,	// (0x00018550) popup_slider_window_g2

0x8d1f,	// (0x0001856c) popup_slider_window_g3

0x0005,

0xfcfa,	// (0x0001f547) popup_slider_window_g

0x8d7b,	// (0x000185c8) popup_slider_window_t1

0x8def,	// (0x0001863c) small_volume_slider_vertical_pane

0x73c0,	// (0x00016c0d) small_volume_slider_vertical_pane_g1

0x73c0,	// (0x00016c0d) small_volume_slider_vertical_pane_g2

0x8e0b,	// (0x00018658) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0c,	// (0x0001f559) small_volume_slider_vertical_pane_g

0xb589,	// (0x0001add6) area_side_right_pane_ParamLimits

0xb589,	// (0x0001add6) area_side_right_pane

0xc0c0,	// (0x0001b90d) aid_size_side_button_ParamLimits

0xc0c0,	// (0x0001b90d) aid_size_side_button

0xc0d9,	// (0x0001b926) grid_sctrl_middle_pane_ParamLimits

0xc0d9,	// (0x0001b926) grid_sctrl_middle_pane

0x18a3,	// (0x000110f0) sctrl_sk_bottom_pane

0x18b4,	// (0x00011101) sctrl_sk_top_pane

0x18c6,	// (0x00011113) aid_touch_sctrl_top

0x18d3,	// (0x00011120) bg_sctrl_sk_pane_ParamLimits

0x18d3,	// (0x00011120) bg_sctrl_sk_pane

0x18e1,	// (0x0001112e) sctrl_sk_top_pane_g1

0x18ee,	// (0x0001113b) sctrl_sk_top_pane_t1

0x18c6,	// (0x00011113) aid_touch_sctrl_bottom

0x18d3,	// (0x00011120) bg_sctrl_sk_pane_cp_ParamLimits

0x18d3,	// (0x00011120) bg_sctrl_sk_pane_cp

0x1909,	// (0x00011156) sctrl_sk_bottom_pane_g1

0x18ee,	// (0x0001113b) sctrl_sk_bottom_pane_t1

0xc0f3,	// (0x0001b940) cell_sctrl_middle_pane_ParamLimits

0xc0f3,	// (0x0001b940) cell_sctrl_middle_pane

0xc104,	// (0x0001b951) aid_touch_sctrl_middle_ParamLimits

0xc104,	// (0x0001b951) aid_touch_sctrl_middle

0xc111,	// (0x0001b95e) bg_sctrl_middle_pane_ParamLimits

0xc111,	// (0x0001b95e) bg_sctrl_middle_pane

0x1f76,	// (0x000117c3) cell_sctrl_middle_pane_g1_ParamLimits

0x1f76,	// (0x000117c3) cell_sctrl_middle_pane_g1

0xc11f,	// (0x0001b96c) cell_sctrl_middle_pane_g2_ParamLimits

0xc11f,	// (0x0001b96c) cell_sctrl_middle_pane_g2

0x0001,

0xfd18,	// (0x0001f565) cell_sctrl_middle_pane_g_ParamLimits

0xfd18,	// (0x0001f565) cell_sctrl_middle_pane_g

0x489c,	// (0x000140e9) bg_sctrl_middle_pane_g1

0x48a4,	// (0x000140f1) bg_sctrl_middle_pane_g2

0x48ac,	// (0x000140f9) bg_sctrl_middle_pane_g3

0x48b4,	// (0x00014101) bg_sctrl_middle_pane_g4

0x48bc,	// (0x00014109) bg_sctrl_middle_pane_g5

0x48c4,	// (0x00014111) bg_sctrl_middle_pane_g6

0x48cc,	// (0x00014119) bg_sctrl_middle_pane_g7

0x48d4,	// (0x00014121) bg_sctrl_middle_pane_g8

0x0007,

0xfd1d,	// (0x0001f56a) bg_sctrl_middle_pane_g

0x48dc,	// (0x00014129) bg_sctrl_middle_pane_g8_copy1

0x489c,	// (0x000140e9) bg_sctrl_sk_pane_g1

0x48ac,	// (0x000140f9) bg_sctrl_sk_pane_g2

0x48a4,	// (0x000140f1) bg_sctrl_sk_pane_g3

0x0008,

0xf862,	// (0x0001f0af) bg_sctrl_sk_pane_g

0x2b3e,	// (0x0001238b) aid_size_touch_scroll_bar

0x48bc,	// (0x00014109) bg_sctrl_sk_pane_g4

0x48b4,	// (0x00014101) bg_sctrl_sk_pane_g5

0x48c4,	// (0x00014111) bg_sctrl_sk_pane_g6

0x48cc,	// (0x00014119) bg_sctrl_sk_pane_g7

0x48dc,	// (0x00014129) bg_sctrl_sk_pane_g8

0x48d4,	// (0x00014121) bg_sctrl_sk_pane_g9

0x0a3a,	// (0x00010287) popup_fep_china_hwr2_fs_candidate_window

0xb889,	// (0x0001b0d6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb889,	// (0x0001b0d6) popup_fep_china_hwr2_fs_control_window

0x16a6,	// (0x00010ef3) sctrl_sk_top_pane_g2

0x0001,

0xfd13,	// (0x0001f560) sctrl_sk_top_pane_g

0xe7bd,	// (0x0001e00a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe7bd,	// (0x0001e00a) aid_fep_china_hwr2_fs_cell

0xe7d1,	// (0x0001e01e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe7d1,	// (0x0001e01e) bg_popup_fep_shadow_pane_cp4

0xe7e8,	// (0x0001e035) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe7e8,	// (0x0001e035) bg_popup_fep_shadow_pane_cp5

0xe7fa,	// (0x0001e047) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe7fa,	// (0x0001e047) popup_fep_china_hwr2_fs_control_bar_grid

0xe80e,	// (0x0001e05b) popup_fep_china_hwr2_fs_control_funtion_grid

0x8e67,	// (0x000186b4) aid_fep_china_hwr2_fs_candi_cell

0x2295,	// (0x00011ae2) bg_popup_fep_shadow_pane_cp6

0x8e71,	// (0x000186be) popup_fep_china_hwr2_fs_candidate_grid

0xe816,	// (0x0001e063) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe816,	// (0x0001e063) cell_fep_china_hwr2_fs_funtion_grid

0x73c0,	// (0x00016c0d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8e93,	// (0x000186e0) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8e93,	// (0x000186e0) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8ea1,	// (0x000186ee) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8ea1,	// (0x000186ee) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2e,	// (0x0001f57b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2e,	// (0x0001f57b) cell_fep_china_hwr2_fs_funtion_grid_g

0xe82e,	// (0x0001e07b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe82e,	// (0x0001e07b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe843,	// (0x0001e090) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe843,	// (0x0001e090) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd33,	// (0x0001f580) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd33,	// (0x0001f580) cell_fep_china_hwr2_fs_funtion_grid_t

0x8ee8,	// (0x00018735) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8ef0,	// (0x0001873d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8ef8,	// (0x00018745) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd38,	// (0x0001f585) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8f00,	// (0x0001874d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8f00,	// (0x0001874d) cell_fep_china_hwr2_fs_candidate_grid

0x8f19,	// (0x00018766) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8f21,	// (0x0001876e) popup_fep_china_hwr2_fs_candidate_grid_g21

0x73c0,	// (0x00016c0d) cell_fep_china_hwr2_fs_candidate_grid_g1

0x73c0,	// (0x00016c0d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0001f399) cell_fep_china_hwr2_fs_candidate_grid_g

0x8f29,	// (0x00018776) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4472,	// (0x00013cbf) clock_nsta_pane_cp_24_ParamLimits

0x4472,	// (0x00013cbf) clock_nsta_pane_cp_24

0x44f0,	// (0x00013d3d) indicator_nsta_pane_cp_24_ParamLimits

0x44f0,	// (0x00013d3d) indicator_nsta_pane_cp_24

0x5691,	// (0x00014ede) heading_pane_g1

0x0001,

0xf8c7,	// (0x0001f114) heading_pane_g

0x61b1,	// (0x000159fe) grid_sct_catagory_button_pane

0x61e1,	// (0x00015a2e) scroll_pane_cp5_ParamLimits

0x6f63,	// (0x000167b0) button_value_adjust_pane_cp5_ParamLimits

0x6f63,	// (0x000167b0) button_value_adjust_pane_cp5

0x705f,	// (0x000168ac) form2_midp_time_pane_ParamLimits

0x8f37,	// (0x00018784) cell_sct_catagory_button_pane_ParamLimits

0x8f37,	// (0x00018784) cell_sct_catagory_button_pane

0x7385,	// (0x00016bd2) bg_button_pane_cp01_ParamLimits

0x7385,	// (0x00016bd2) bg_button_pane_cp01

0x73c0,	// (0x00016c0d) cell_sct_catagory_button_pane_g1

0xbde2,	// (0x0001b62f) popup_tb_extension_window

0xe85f,	// (0x0001e0ac) aid_size_cell_ext_ParamLimits

0xe85f,	// (0x0001e0ac) aid_size_cell_ext

0x2980,	// (0x000121cd) bg_tb_trans_pane_cp1_ParamLimits

0x2980,	// (0x000121cd) bg_tb_trans_pane_cp1

0xe885,	// (0x0001e0d2) grid_tb_ext_pane_ParamLimits

0xe885,	// (0x0001e0d2) grid_tb_ext_pane

0xe8c0,	// (0x0001e10d) cell_tb_ext_pane_ParamLimits

0xe8c0,	// (0x0001e10d) cell_tb_ext_pane

0xe8e8,	// (0x0001e135) cell_tb_ext_pane_g1_ParamLimits

0xe8e8,	// (0x0001e135) cell_tb_ext_pane_g1

0x8fcb,	// (0x00018818) cell_tb_ext_pane_t1

0x262c,	// (0x00011e79) list_highlight_pane_cp11_ParamLimits

0x262c,	// (0x00011e79) list_highlight_pane_cp11

0x0245,	// (0x0000fa92) popup_uni_indicator_window_ParamLimits

0x0245,	// (0x0000fa92) popup_uni_indicator_window

0x3194,	// (0x000129e1) bg_popup_sub_pane_cp14

0x8fe6,	// (0x00018833) list_uniindi_pane

0x8ff2,	// (0x0001883f) uniindi_top_pane

0x262c,	// (0x00011e79) bg_uniindi_top_pane

0x9011,	// (0x0001885e) uniindi_top_pane_g1

0x9027,	// (0x00018874) uniindi_top_pane_g2

0x0003,

0xfd3f,	// (0x0001f58c) uniindi_top_pane_g

0x9051,	// (0x0001889e) uniindi_top_pane_t1

0x907b,	// (0x000188c8) list_single_uniindi_pane_ParamLimits

0x907b,	// (0x000188c8) list_single_uniindi_pane

0x73c0,	// (0x00016c0d) bg_uniindi_top_pane_g1

0x908e,	// (0x000188db) list_single_uniindi_pane_g1

0x90a1,	// (0x000188ee) list_single_uniindi_pane_t1

0x00bb,	// (0x0000f908) control_bg_pane

0x90c6,	// (0x00018913) bg_sctrl_sk_pane_cp1

0x90cf,	// (0x0001891c) bg_sctrl_sk_pane_cp2

0x90d8,	// (0x00018925) control_bg_pane_g1

0x90e1,	// (0x0001892e) control_bg_pane_g2

0x0001,

0xfd48,	// (0x0001f595) control_bg_pane_g

0x6dac,	// (0x000165f9) cell_indicator_nsta_pane_g1_ParamLimits

0xdd61,	// (0x0001d5ae) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0001f2fd) cell_indicator_nsta_pane_g_ParamLimits

0x70e7,	// (0x00016934) form2_midp_time_pane_t1_ParamLimits

0x1441,	// (0x00010c8e) main_idle_act4_pane_ParamLimits

0x1441,	// (0x00010c8e) main_idle_act4_pane

0xbde2,	// (0x0001b62f) popup_tb_extension_window_ParamLimits

0xe8a7,	// (0x0001e0f4) tb_ext_find_pane_ParamLimits

0xe8a7,	// (0x0001e0f4) tb_ext_find_pane

0x90ea,	// (0x00018937) ai_gene_pane_1_cp1

0x415f,	// (0x000139ac) ai_gene_pane_2_cp1

0x90f2,	// (0x0001893f) list_single_idle_plugin_calendar_pane

0x90fb,	// (0x00018948) list_single_idle_plugin_notification_pane

0x9104,	// (0x00018951) list_single_idle_plugin_player_pane

0xe905,	// (0x0001e152) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe905,	// (0x0001e152) list_single_idle_plugin_shortcut_pane

0xe92d,	// (0x0001e17a) main_idle_act4_pane_t1

0xe943,	// (0x0001e190) main_idle_act4_pane_t2

0x0001,

0xfd4d,	// (0x0001f59a) main_idle_act4_pane_t

0xe959,	// (0x0001e1a6) middle_sk_idle_act4_pane_ParamLimits

0xe959,	// (0x0001e1a6) middle_sk_idle_act4_pane

0xe975,	// (0x0001e1c2) popup_clock_digital_analogue_window_cp2

0xe99d,	// (0x0001e1ea) shortcut_wheel_idle_act4_pane_ParamLimits

0xe99d,	// (0x0001e1ea) shortcut_wheel_idle_act4_pane

0x73c0,	// (0x00016c0d) shortcut_wheel_idle_act4_pane_g1

0x73c0,	// (0x00016c0d) shortcut_wheel_idle_act4_pane_g2

0x73c0,	// (0x00016c0d) shortcut_wheel_idle_act4_pane_g3

0x73c0,	// (0x00016c0d) shortcut_wheel_idle_act4_pane_g4

0x73c0,	// (0x00016c0d) shortcut_wheel_idle_act4_pane_g5

0x9197,	// (0x000189e4) shortcut_wheel_idle_act4_pane_g6

0x919f,	// (0x000189ec) shortcut_wheel_idle_act4_pane_g7

0x91a7,	// (0x000189f4) shortcut_wheel_idle_act4_pane_g8

0x91af,	// (0x000189fc) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd52,	// (0x0001f59f) shortcut_wheel_idle_act4_pane_g

0xd2a6,	// (0x0001caf3) middle_sk_idle_act4_pane_g1_ParamLimits

0xd2a6,	// (0x0001caf3) middle_sk_idle_act4_pane_g1

0xea1a,	// (0x0001e267) middle_sk_idle_act4_pane_g2_ParamLimits

0xea1a,	// (0x0001e267) middle_sk_idle_act4_pane_g2

0x0001,

0xfd75,	// (0x0001f5c2) middle_sk_idle_act4_pane_g_ParamLimits

0xfd75,	// (0x0001f5c2) middle_sk_idle_act4_pane_g

0xea32,	// (0x0001e27f) middle_sk_idle_act4_pane_t1_ParamLimits

0xea32,	// (0x0001e27f) middle_sk_idle_act4_pane_t1

0xea61,	// (0x0001e2ae) grid_ai_shortcut_pane_ParamLimits

0xea61,	// (0x0001e2ae) grid_ai_shortcut_pane

0xea7e,	// (0x0001e2cb) list_highlight_pane_cp16_ParamLimits

0xea7e,	// (0x0001e2cb) list_highlight_pane_cp16

0xea8b,	// (0x0001e2d8) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea8b,	// (0x0001e2d8) list_single_idle_plugin_shortcut_pane_g1

0xea97,	// (0x0001e2e4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea97,	// (0x0001e2e4) list_single_idle_plugin_shortcut_pane_g2

0xeab3,	// (0x0001e300) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeab3,	// (0x0001e300) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7a,	// (0x0001f5c7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7a,	// (0x0001f5c7) list_single_idle_plugin_shortcut_pane_g

0xeac8,	// (0x0001e315) cell_ai_shortcut_pane_ParamLimits

0xeac8,	// (0x0001e315) cell_ai_shortcut_pane

0xeade,	// (0x0001e32b) cell_ai_shortcut_pane_g1_ParamLimits

0xeade,	// (0x0001e32b) cell_ai_shortcut_pane_g1

0x90ea,	// (0x00018937) ai_gene_pane_1_cp2

0x92df,	// (0x00018b2c) ai_gene_pane_2_cp2

0x92e7,	// (0x00018b34) list_highlight_pane_cp15

0x92f0,	// (0x00018b3d) list_single_idle_plugin_calendar_pane_g1

0x92e7,	// (0x00018b34) list_highlight_pane_cp17

0x92f8,	// (0x00018b45) list_single_idle_plugin_calendar_pane_g1_copy1

0x9300,	// (0x00018b4d) list_single_idle_plugin_player_pane_g1

0x640a,	// (0x00015c57) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd81,	// (0x0001f5ce) list_single_idle_plugin_player_pane_g

0x9308,	// (0x00018b55) list_single_idle_plugin_player_pane_t1

0x9316,	// (0x00018b63) list_single_idle_plugin_player_pane_t2

0x9324,	// (0x00018b71) list_single_idle_plugin_player_pane_t3

0x9332,	// (0x00018b7f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd86,	// (0x0001f5d3) list_single_idle_plugin_player_pane_t

0x9340,	// (0x00018b8d) wait_bar_pane_cp15

0x9348,	// (0x00018b95) grid_ai_notification_pane

0x640a,	// (0x00015c57) list_single_idle_plugin_notification_pane_g1

0xeb00,	// (0x0001e34d) cell_ai_notification_pane_ParamLimits

0xeb00,	// (0x0001e34d) cell_ai_notification_pane

0x935e,	// (0x00018bab) cell_ai_notification_pane_g1

0x9366,	// (0x00018bb3) cell_ai_notification_pane_t1

0xeb0d,	// (0x0001e35a) tb_ext_find_button_pane

0xeb15,	// (0x0001e362) tb_ext_find_pane_g1

0xeb1d,	// (0x0001e36a) tb_ext_find_pane_t1

0x398f,	// (0x000131dc) tb_ext_find_button_pane_g1

0x9392,	// (0x00018bdf) tb_ext_find_button_pane_g2

0x0001,

0xfd8f,	// (0x0001f5dc) tb_ext_find_button_pane_g

0xe92d,	// (0x0001e17a) main_idle_act4_pane_t1_ParamLimits

0xe943,	// (0x0001e190) main_idle_act4_pane_t2_ParamLimits

0xfd4d,	// (0x0001f59a) main_idle_act4_pane_t_ParamLimits

0xe975,	// (0x0001e1c2) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe98d,	// (0x0001e1da) sat_plugin_idle_act4_pane_ParamLimits

0xe98d,	// (0x0001e1da) sat_plugin_idle_act4_pane

0xeb2b,	// (0x0001e378) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb2b,	// (0x0001e378) sat_plugin_idle_act4_pane_t1

0xeb43,	// (0x0001e390) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb43,	// (0x0001e390) sat_plugin_idle_act4_pane_t2

0xeb5b,	// (0x0001e3a8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb5b,	// (0x0001e3a8) sat_plugin_idle_act4_pane_t3

0xeb73,	// (0x0001e3c0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb73,	// (0x0001e3c0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd94,	// (0x0001f5e1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd94,	// (0x0001f5e1) sat_plugin_idle_act4_pane_t

0x0180,	// (0x0000f9cd) popup_battery_window_ParamLimits

0x0180,	// (0x0000f9cd) popup_battery_window

0x262c,	// (0x00011e79) bg_popup_sub_pane_cp25_ParamLimits

0x262c,	// (0x00011e79) bg_popup_sub_pane_cp25

0x93e7,	// (0x00018c34) popup_battery_window_g1_ParamLimits

0x93e7,	// (0x00018c34) popup_battery_window_g1

0x93f3,	// (0x00018c40) popup_battery_window_t1_ParamLimits

0x93f3,	// (0x00018c40) popup_battery_window_t1

0x9405,	// (0x00018c52) popup_battery_window_t2_ParamLimits

0x9405,	// (0x00018c52) popup_battery_window_t2

0x0001,

0xfd9d,	// (0x0001f5ea) popup_battery_window_t_ParamLimits

0xfd9d,	// (0x0001f5ea) popup_battery_window_t

0xd1ca,	// (0x0001ca17) midp_canvas_pane_ParamLimits

0xd225,	// (0x0001ca72) midp_keypad_pane_ParamLimits

0xd225,	// (0x0001ca72) midp_keypad_pane

0x436e,	// (0x00013bbb) main_midp_pane_ParamLimits

0x6e27,	// (0x00016674) signal_pane_g2_cp_ParamLimits

0xeb8b,	// (0x0001e3d8) aid_size_cell_midp_keypad_ParamLimits

0xeb8b,	// (0x0001e3d8) aid_size_cell_midp_keypad

0xeba9,	// (0x0001e3f6) midp_keyp_game_grid_pane_ParamLimits

0xeba9,	// (0x0001e3f6) midp_keyp_game_grid_pane

0xebd0,	// (0x0001e41d) midp_keyp_rocker_pane_ParamLimits

0xebd0,	// (0x0001e41d) midp_keyp_rocker_pane

0xec19,	// (0x0001e466) midp_keyp_sk_left_pane_ParamLimits

0xec19,	// (0x0001e466) midp_keyp_sk_left_pane

0xec78,	// (0x0001e4c5) midp_keyp_sk_right_pane_ParamLimits

0xec78,	// (0x0001e4c5) midp_keyp_sk_right_pane

0x2295,	// (0x00011ae2) bg_button_pane_cp03

0xecca,	// (0x0001e517) midp_keyp_sk_left_pane_g1

0x2295,	// (0x00011ae2) bg_button_pane_cp04

0xecca,	// (0x0001e517) midp_keyp_sk_right_pane_g1

0x73c0,	// (0x00016c0d) midp_keyp_rocker_pane_g1

0xecd3,	// (0x0001e520) keyp_game_cell_pane_ParamLimits

0xecd3,	// (0x0001e520) keyp_game_cell_pane

0x2295,	// (0x00011ae2) bg_button_pane_cp02

0xecf7,	// (0x0001e544) keyp_game_cell_pane_g1

0xb5cb,	// (0x0001ae18) popup_fep_vkb2_window_ParamLimits

0xb5cb,	// (0x0001ae18) popup_fep_vkb2_window

0xc12b,	// (0x0001b978) aid_size_cell_vkb2_ParamLimits

0xc12b,	// (0x0001b978) aid_size_cell_vkb2

0xc161,	// (0x0001b9ae) popup_fep_vkb2_window_g1_ParamLimits

0xc161,	// (0x0001b9ae) popup_fep_vkb2_window_g1

0xc1b1,	// (0x0001b9fe) vkb2_area_bottom_pane_ParamLimits

0xc1b1,	// (0x0001b9fe) vkb2_area_bottom_pane

0xc205,	// (0x0001ba52) vkb2_area_keypad_pane_ParamLimits

0xc205,	// (0x0001ba52) vkb2_area_keypad_pane

0xc24d,	// (0x0001ba9a) vkb2_area_top_pane_ParamLimits

0xc24d,	// (0x0001ba9a) vkb2_area_top_pane

0xc2d3,	// (0x0001bb20) vkb2_top_entry_pane_ParamLimits

0xc2d3,	// (0x0001bb20) vkb2_top_entry_pane

0xc300,	// (0x0001bb4d) vkb2_top_grid_left_pane_ParamLimits

0xc300,	// (0x0001bb4d) vkb2_top_grid_left_pane

0xc320,	// (0x0001bb6d) vkb2_top_grid_right_pane_ParamLimits

0xc320,	// (0x0001bb6d) vkb2_top_grid_right_pane

0x1b75,	// (0x000113c2) vkb2_cell_keypad_pane_ParamLimits

0x1b75,	// (0x000113c2) vkb2_cell_keypad_pane

0xc366,	// (0x0001bbb3) vkb2_area_bottom_grid_pane_ParamLimits

0xc366,	// (0x0001bbb3) vkb2_area_bottom_grid_pane

0xc390,	// (0x0001bbdd) vkb2_area_bottom_pane_g1_ParamLimits

0xc390,	// (0x0001bbdd) vkb2_area_bottom_pane_g1

0xc3b6,	// (0x0001bc03) vkb2_area_bottom_pane_g2_ParamLimits

0xc3b6,	// (0x0001bc03) vkb2_area_bottom_pane_g2

0xc3e7,	// (0x0001bc34) vkb2_area_bottom_pane_g3_ParamLimits

0xc3e7,	// (0x0001bc34) vkb2_area_bottom_pane_g3

0x0002,

0xfda2,	// (0x0001f5ef) vkb2_area_bottom_pane_g_ParamLimits

0xfda2,	// (0x0001f5ef) vkb2_area_bottom_pane_g

0x1d1f,	// (0x0001156c) vkb2_top_cell_left_pane_ParamLimits

0x1d1f,	// (0x0001156c) vkb2_top_cell_left_pane

0xed00,	// (0x0001e54d) vkb2_top_entry_pane_g1_ParamLimits

0xed00,	// (0x0001e54d) vkb2_top_entry_pane_g1

0xed0e,	// (0x0001e55b) vkb2_top_entry_pane_t1_ParamLimits

0xed0e,	// (0x0001e55b) vkb2_top_entry_pane_t1

0x95ae,	// (0x00018dfb) vkb2_top_entry_pane_t2_ParamLimits

0x95ae,	// (0x00018dfb) vkb2_top_entry_pane_t2

0x95e0,	// (0x00018e2d) vkb2_top_entry_pane_t3_ParamLimits

0x95e0,	// (0x00018e2d) vkb2_top_entry_pane_t3

0x0002,

0xfda9,	// (0x0001f5f6) vkb2_top_entry_pane_t_ParamLimits

0xfda9,	// (0x0001f5f6) vkb2_top_entry_pane_t

0xc451,	// (0x0001bc9e) vkb2_top_grid_right_pane_g1_ParamLimits

0xc451,	// (0x0001bc9e) vkb2_top_grid_right_pane_g1

0x1d82,	// (0x000115cf) vkb2_top_grid_right_pane_g2_ParamLimits

0x1d82,	// (0x000115cf) vkb2_top_grid_right_pane_g2

0x1d9a,	// (0x000115e7) vkb2_top_grid_right_pane_g3_ParamLimits

0x1d9a,	// (0x000115e7) vkb2_top_grid_right_pane_g3

0xc467,	// (0x0001bcb4) vkb2_top_grid_right_pane_g4_ParamLimits

0xc467,	// (0x0001bcb4) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb0,	// (0x0001f5fd) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb0,	// (0x0001f5fd) vkb2_top_grid_right_pane_g

0x1dc8,	// (0x00011615) vkb2_top_cell_left_pane_g1

0x1ddf,	// (0x0001162c) vkb2_cell_keypad_pane_g1_ParamLimits

0x1ddf,	// (0x0001162c) vkb2_cell_keypad_pane_g1

0x9625,	// (0x00018e72) vkb2_cell_keypad_pane_t1_ParamLimits

0x9625,	// (0x00018e72) vkb2_cell_keypad_pane_t1

0x1ded,	// (0x0001163a) vkb2_cell_bottom_grid_pane_ParamLimits

0x1ded,	// (0x0001163a) vkb2_cell_bottom_grid_pane

0x1e26,	// (0x00011673) vkb2_cell_bottom_grid_pane_g1

0xe9be,	// (0x0001e20b) aid_call2_pane_cp02

0xe9c6,	// (0x0001e213) aid_call_pane_cp02

0xe9ce,	// (0x0001e21b) clock_digital_number_pane_cp10

0xe9d6,	// (0x0001e223) clock_digital_number_pane_cp11

0xe9de,	// (0x0001e22b) clock_digital_number_pane_cp12

0xe9e6,	// (0x0001e233) clock_digital_number_pane_cp13

0xe9ee,	// (0x0001e23b) clock_digital_separator_pane_cp10

0x398f,	// (0x000131dc) popup_clock_digital_analogue_window_cp2_g1

0x398f,	// (0x000131dc) popup_clock_digital_analogue_window_cp2_g2

0xe9f6,	// (0x0001e243) popup_clock_digital_analogue_window_cp2_g3

0x398f,	// (0x000131dc) popup_clock_digital_analogue_window_cp2_g4

0xe9f6,	// (0x0001e243) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd65,	// (0x0001f5b2) popup_clock_digital_analogue_window_cp2_g

0xe9fe,	// (0x0001e24b) popup_clock_digital_analogue_window_cp2_t1

0xea0c,	// (0x0001e259) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd70,	// (0x0001f5bd) popup_clock_digital_analogue_window_cp2_t

0x73c0,	// (0x00016c0d) clock_digital_number_pane_cp10_g1

0x73c0,	// (0x00016c0d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001f399) clock_digital_number_pane_cp10_g

0x73c0,	// (0x00016c0d) clock_digital_separator_pane_cp10_g1

0x73c0,	// (0x00016c0d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001f399) clock_digital_separator_pane_cp10_g

0x9033,	// (0x00018880) uniindi_top_pane_g3

0x9044,	// (0x00018891) uniindi_top_pane_g4

0x1c00,	// (0x0001144d) vkb2_row_keypad_pane_ParamLimits

0x1c00,	// (0x0001144d) vkb2_row_keypad_pane

0x1e42,	// (0x0001168f) vkb2_cell_t_keypad_pane_ParamLimits

0x1e42,	// (0x0001168f) vkb2_cell_t_keypad_pane

0x1e52,	// (0x0001169f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1e52,	// (0x0001169f) vkb2_cell_t_keypad_pane_cp08

0x1e65,	// (0x000116b2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1e65,	// (0x000116b2) vkb2_cell_t_keypad_pane_cp09

0x1e79,	// (0x000116c6) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1e79,	// (0x000116c6) vkb2_cell_t_keypad_pane_cp01

0x1e8a,	// (0x000116d7) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1e8a,	// (0x000116d7) vkb2_cell_t_keypad_pane_cp02

0x1e9b,	// (0x000116e8) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1e9b,	// (0x000116e8) vkb2_cell_t_keypad_pane_cp03

0x1eac,	// (0x000116f9) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1eac,	// (0x000116f9) vkb2_cell_t_keypad_pane_cp04

0x1ebd,	// (0x0001170a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1ebd,	// (0x0001170a) vkb2_cell_t_keypad_pane_cp05

0x1ece,	// (0x0001171b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1ece,	// (0x0001171b) vkb2_cell_t_keypad_pane_cp06

0x1edf,	// (0x0001172c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1edf,	// (0x0001172c) vkb2_cell_t_keypad_pane_cp07

0x1ef0,	// (0x0001173d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1ef0,	// (0x0001173d) vkb2_cell_t_keypad_pane_cp10

0x16a6,	// (0x00010ef3) vkb2_cell_t_keypad_pane_g1

0x963c,	// (0x00018e89) vkb2_cell_t_keypad_pane_t1

0x00bb,	// (0x0000f908) popup_grid_graphic2_window

0xed47,	// (0x0001e594) aid_size_cell_graphic2_ParamLimits

0xed47,	// (0x0001e594) aid_size_cell_graphic2

0xed85,	// (0x0001e5d2) bg_popup_window_pane_cp21_ParamLimits

0xed85,	// (0x0001e5d2) bg_popup_window_pane_cp21

0xed93,	// (0x0001e5e0) graphic2_pages_pane_ParamLimits

0xed93,	// (0x0001e5e0) graphic2_pages_pane

0xede9,	// (0x0001e636) grid_graphic2_control_pane_ParamLimits

0xede9,	// (0x0001e636) grid_graphic2_control_pane

0xee31,	// (0x0001e67e) grid_graphic2_pane_ParamLimits

0xee31,	// (0x0001e67e) grid_graphic2_pane

0xeeb8,	// (0x0001e705) cell_graphic2_pane

0x00bb,	// (0x0000f908) main_comp_mode_pane

0x8850,	// (0x0001809d) list_ai3_gene_pane_ParamLimits

0xe705,	// (0x0001df52) bg_popup_window_pane_cp19_ParamLimits

0x8c89,	// (0x000184d6) bg_touch_area_indi_pane_ParamLimits

0x8c89,	// (0x000184d6) bg_touch_area_indi_pane

0x8c9f,	// (0x000184ec) bg_touch_area_indi_pane_cp01_ParamLimits

0x8c9f,	// (0x000184ec) bg_touch_area_indi_pane_cp01

0x8cb5,	// (0x00018502) bg_touch_area_indi_pane_cp02_ParamLimits

0x8cb5,	// (0x00018502) bg_touch_area_indi_pane_cp02

0x8ccd,	// (0x0001851a) bg_touch_area_indi_pane_cp03_ParamLimits

0x8ccd,	// (0x0001851a) bg_touch_area_indi_pane_cp03

0x8ce7,	// (0x00018534) popup_slider_window_g1_ParamLimits

0x8d03,	// (0x00018550) popup_slider_window_g2_ParamLimits

0x8d1f,	// (0x0001856c) popup_slider_window_g3_ParamLimits

0xfcfa,	// (0x0001f547) popup_slider_window_g_ParamLimits

0x8d7b,	// (0x000185c8) popup_slider_window_t1_ParamLimits

0x8def,	// (0x0001863c) small_volume_slider_vertical_pane_ParamLimits

0xeeb8,	// (0x0001e705) cell_graphic2_pane_ParamLimits

0xef15,	// (0x0001e762) bg_button_pane_cp10_ParamLimits

0xef15,	// (0x0001e762) bg_button_pane_cp10

0xef28,	// (0x0001e775) bg_button_pane_cp11_ParamLimits

0xef28,	// (0x0001e775) bg_button_pane_cp11

0xef3b,	// (0x0001e788) graphic2_pages_pane_g1_ParamLimits

0xef3b,	// (0x0001e788) graphic2_pages_pane_g1

0xef56,	// (0x0001e7a3) graphic2_pages_pane_g2_ParamLimits

0xef56,	// (0x0001e7a3) graphic2_pages_pane_g2

0x0001,

0xfdbe,	// (0x0001f60b) graphic2_pages_pane_g_ParamLimits

0xfdbe,	// (0x0001f60b) graphic2_pages_pane_g

0xef6e,	// (0x0001e7bb) graphic2_pages_pane_t1_ParamLimits

0xef6e,	// (0x0001e7bb) graphic2_pages_pane_t1

0xef86,	// (0x0001e7d3) cell_graphic2_control_pane_ParamLimits

0xef86,	// (0x0001e7d3) cell_graphic2_control_pane

0xefb8,	// (0x0001e805) cell_graphic2_pane_g1_ParamLimits

0xefb8,	// (0x0001e805) cell_graphic2_pane_g1

0xd2b4,	// (0x0001cb01) cell_graphic2_pane_g2_ParamLimits

0xd2b4,	// (0x0001cb01) cell_graphic2_pane_g2

0xec6b,	// (0x0001e4b8) cell_graphic2_pane_g3_ParamLimits

0xec6b,	// (0x0001e4b8) cell_graphic2_pane_g3

0xd2c1,	// (0x0001cb0e) cell_graphic2_pane_g4_ParamLimits

0xd2c1,	// (0x0001cb0e) cell_graphic2_pane_g4

0xefc5,	// (0x0001e812) cell_graphic2_pane_g5_ParamLimits

0xefc5,	// (0x0001e812) cell_graphic2_pane_g5

0x0004,

0xfdc3,	// (0x0001f610) cell_graphic2_pane_g_ParamLimits

0xfdc3,	// (0x0001f610) cell_graphic2_pane_g

0xefe5,	// (0x0001e832) cell_graphic2_pane_t1_ParamLimits

0xefe5,	// (0x0001e832) cell_graphic2_pane_t1

0x5685,	// (0x00014ed2) grid_highlight_pane_cp11_ParamLimits

0x5685,	// (0x00014ed2) grid_highlight_pane_cp11

0x262c,	// (0x00011e79) bg_button_pane_cp05

0xf01a,	// (0x0001e867) cell_graphic2_control_pane_g1

0x73c0,	// (0x00016c0d) bg_touch_area_indi_pane_g1

0x990c,	// (0x00019159) aid_cmod_rocker_key_size

0x9916,	// (0x00019163) aid_cmode_itu_key_size

0x9920,	// (0x0001916d) main_cmode_video_pane

0x992a,	// (0x00019177) main_comp_mode_itu_pane

0x9936,	// (0x00019183) main_comp_mode_rocker_pane

0x9942,	// (0x0001918f) cell_cmode_rocker_pane_ParamLimits

0x9942,	// (0x0001918f) cell_cmode_rocker_pane

0x9954,	// (0x000191a1) cell_cmode_itu_pane_ParamLimits

0x9954,	// (0x000191a1) cell_cmode_itu_pane

0x3194,	// (0x000129e1) bg_button_pane_cp06_ParamLimits

0x3194,	// (0x000129e1) bg_button_pane_cp06

0x763e,	// (0x00016e8b) cell_cmode_rocker_pane_g1_ParamLimits

0x763e,	// (0x00016e8b) cell_cmode_rocker_pane_g1

0x8e93,	// (0x000186e0) cell_cmode_rocker_pane_g2_ParamLimits

0x8e93,	// (0x000186e0) cell_cmode_rocker_pane_g2

0x0001,

0xfdd3,	// (0x0001f620) cell_cmode_rocker_pane_g_ParamLimits

0xfdd3,	// (0x0001f620) cell_cmode_rocker_pane_g

0x2295,	// (0x00011ae2) bg_button_pane_cp07

0x9969,	// (0x000191b6) cell_cmode_itu_pane_g1

0x9972,	// (0x000191bf) cell_cmode_itu_pane_t1

0x9980,	// (0x000191cd) cell_cmode_itu_pane_t2

0x0001,

0xfdd8,	// (0x0001f625) cell_cmode_itu_pane_t

0x90b6,	// (0x00018903) aid_touch_ctrl_left

0x90be,	// (0x0001890b) aid_touch_ctrl_right

0x2295,	// (0x00011ae2) compa_mode_pane

0xf040,	// (0x0001e88d) aid_cmod_rocker_key_size_cp

0xf04a,	// (0x0001e897) aid_cmode_itu_key_size_cp

0x99a2,	// (0x000191ef) compa_mode_pane_g1

0x99aa,	// (0x000191f7) compa_mode_pane_g2

0x99b2,	// (0x000191ff) compa_mode_pane_g3

0x0002,

0xfddd,	// (0x0001f62a) compa_mode_pane_g

0xf054,	// (0x0001e8a1) main_comp_mode_itu_pane_cp

0xf05c,	// (0x0001e8a9) main_comp_mode_rocker_pane_cp

0xf064,	// (0x0001e8b1) cell_cmode_itu_pane_cp_ParamLimits

0xf064,	// (0x0001e8b1) cell_cmode_itu_pane_cp

0xf079,	// (0x0001e8c6) cell_cmode_rocker_pane_cp_ParamLimits

0xf079,	// (0x0001e8c6) cell_cmode_rocker_pane_cp

0x3194,	// (0x000129e1) bg_button_pane_cp06_cp_ParamLimits

0x3194,	// (0x000129e1) bg_button_pane_cp06_cp

0x763e,	// (0x00016e8b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x763e,	// (0x00016e8b) cell_cmode_rocker_pane_g1_cp

0x73c0,	// (0x00016c0d) cell_cmode_rocker_pane_g2_cp

0x2295,	// (0x00011ae2) bg_button_pane_cp07_cp

0xf08b,	// (0x0001e8d8) cell_cmode_itu_pane_g1_cp

0xf094,	// (0x0001e8e1) cell_cmode_itu_pane_t1_cp

0xf094,	// (0x0001e8e1) cell_cmode_itu_pane_t2_cp

0xdb3b,	// (0x0001d388) settings_code_pane_cp2

0x2389,	// (0x00011bd6) bg_popup_window_pane_cp3_ParamLimits

0x2806,	// (0x00012053) heading_pane_cp3_ParamLimits

0x2812,	// (0x0001205f) listscroll_popup_graphic_pane_ParamLimits

0x144f,	// (0x00010c9c) fep_hwr_aid_pane_ParamLimits

0x18c6,	// (0x00011113) aid_touch_sctrl_top_ParamLimits

0x18e1,	// (0x0001112e) sctrl_sk_top_pane_g1_ParamLimits

0x16a6,	// (0x00010ef3) sctrl_sk_top_pane_g2_ParamLimits

0xfd13,	// (0x0001f560) sctrl_sk_top_pane_g_ParamLimits

0x18ee,	// (0x0001113b) sctrl_sk_top_pane_t1_ParamLimits

0x18c6,	// (0x00011113) aid_touch_sctrl_bottom_ParamLimits

0x18ee,	// (0x0001113b) sctrl_sk_bottom_pane_t1_ParamLimits

0x8fff,	// (0x0001884c) aid_area_touch_clock

0xc295,	// (0x0001bae2) aid_vkb2_area_top_pane_cell_ParamLimits

0xc295,	// (0x0001bae2) aid_vkb2_area_top_pane_cell

0xc340,	// (0x0001bb8d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc340,	// (0x0001bb8d) aid_vkb2_area_bottom_pane_cell

0x9566,	// (0x00018db3) popup_char_count_window

0x99ff,	// (0x0001924c) popup_char_count_window_g1

0x9a08,	// (0x00019255) popup_char_count_window_g2

0x9a11,	// (0x0001925e) popup_char_count_window_g3

0x0002,

0xfde4,	// (0x0001f631) popup_char_count_window_g

0x9a1a,	// (0x00019267) popup_char_count_window_t1

0x199d,	// (0x000111ea) popup_fep_char_preview_window_ParamLimits

0x199d,	// (0x000111ea) popup_fep_char_preview_window

0xc2b5,	// (0x0001bb02) vkb2_top_candi_pane_ParamLimits

0xc2b5,	// (0x0001bb02) vkb2_top_candi_pane

0xf0a2,	// (0x0001e8ef) cell_vkb2_top_candi_pane_ParamLimits

0xf0a2,	// (0x0001e8ef) cell_vkb2_top_candi_pane

0x1f05,	// (0x00011752) bg_popup_fep_char_preview_window_ParamLimits

0x1f05,	// (0x00011752) bg_popup_fep_char_preview_window

0x1f13,	// (0x00011760) popup_fep_char_preview_window_t1_ParamLimits

0x1f13,	// (0x00011760) popup_fep_char_preview_window_t1

0x9a75,	// (0x000192c2) bg_popup_fep_char_preview_window_g1

0x9a7d,	// (0x000192ca) bg_popup_fep_char_preview_window_g2

0x9a85,	// (0x000192d2) bg_popup_fep_char_preview_window_g3

0x9a8d,	// (0x000192da) bg_popup_fep_char_preview_window_g4

0x9a95,	// (0x000192e2) bg_popup_fep_char_preview_window_g5

0x1f4d,	// (0x0001179a) bg_popup_fep_char_preview_window_g6

0x9a9d,	// (0x000192ea) bg_popup_fep_char_preview_window_g7

0x9aa5,	// (0x000192f2) bg_popup_fep_char_preview_window_g8

0x9aad,	// (0x000192fa) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdeb,	// (0x0001f638) bg_popup_fep_char_preview_window_g

0x16a6,	// (0x00010ef3) cell_vkb2_top_candi_pane_g1_ParamLimits

0x16a6,	// (0x00010ef3) cell_vkb2_top_candi_pane_g1

0x16b4,	// (0x00010f01) cell_vkb2_top_candi_pane_g2_ParamLimits

0x16b4,	// (0x00010f01) cell_vkb2_top_candi_pane_g2

0x9604,	// (0x00018e51) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9604,	// (0x00018e51) cell_vkb2_top_candi_pane_g3

0x1f55,	// (0x000117a2) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1f55,	// (0x000117a2) cell_vkb2_top_candi_pane_g4

0x7cae,	// (0x000174fb) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7cae,	// (0x000174fb) cell_vkb2_top_candi_pane_g5

0x1f76,	// (0x000117c3) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1f76,	// (0x000117c3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfe,	// (0x0001f64b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfe,	// (0x0001f64b) cell_vkb2_top_candi_pane_g

0x1f84,	// (0x000117d1) cell_vkb2_top_candi_pane_t1

0x12af,	// (0x00010afc) aid_size_touch_slider_mark_ParamLimits

0x12af,	// (0x00010afc) aid_size_touch_slider_mark

0xedcf,	// (0x0001e61c) grid_graphic2_catg_pane_ParamLimits

0xedcf,	// (0x0001e61c) grid_graphic2_catg_pane

0xee8b,	// (0x0001e6d8) popup_grid_graphic2_window_t1_ParamLimits

0xee8b,	// (0x0001e6d8) popup_grid_graphic2_window_t1

0xeea1,	// (0x0001e6ee) popup_grid_graphic2_window_t2_ParamLimits

0xeea1,	// (0x0001e6ee) popup_grid_graphic2_window_t2

0x0001,

0xfdb9,	// (0x0001f606) popup_grid_graphic2_window_t_ParamLimits

0xfdb9,	// (0x0001f606) popup_grid_graphic2_window_t

0x262c,	// (0x00011e79) bg_button_pane_cp05_ParamLimits

0xf01a,	// (0x0001e867) cell_graphic2_control_pane_g1_ParamLimits

0xf108,	// (0x0001e955) cell_graphic2_catg_pane_ParamLimits

0xf108,	// (0x0001e955) cell_graphic2_catg_pane

0x2295,	// (0x00011ae2) bg_button_pane_cp12

0xf11a,	// (0x0001e967) cell_graphic2_catg_pane_g1

0x8fcb,	// (0x00018818) cell_tb_ext_pane_t1_ParamLimits

0x1d3f,	// (0x0001158c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1d3f,	// (0x0001158c) vkb2_top_cell_right_narrow_pane

0x1d57,	// (0x000115a4) vkb2_top_cell_right_wide_pane_ParamLimits

0x1d57,	// (0x000115a4) vkb2_top_cell_right_wide_pane

0x1441,	// (0x00010c8e) bg_vkb2_func_pane_ParamLimits

0x1441,	// (0x00010c8e) bg_vkb2_func_pane

0x1dc8,	// (0x00011615) vkb2_top_cell_left_pane_g1_ParamLimits

0x1441,	// (0x00010c8e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1441,	// (0x00010c8e) bg_vkb2_fuc_pane_cp03

0x1e26,	// (0x00011673) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x48a4,	// (0x000140f1) bg_vkb2_func_pane_g1

0x48ac,	// (0x000140f9) bg_vkb2_func_pane_g2

0x48bc,	// (0x00014109) bg_vkb2_func_pane_g3

0x48b4,	// (0x00014101) bg_vkb2_func_pane_g4

0x48c4,	// (0x00014111) bg_vkb2_func_pane_g5

0x48cc,	// (0x00014119) bg_vkb2_func_pane_g6

0x48d4,	// (0x00014121) bg_vkb2_func_pane_g7

0x48dc,	// (0x00014129) bg_vkb2_func_pane_g8

0x489c,	// (0x000140e9) bg_vkb2_func_pane_g9

0x0008,

0xfe0b,	// (0x0001f658) bg_vkb2_func_pane_g

0x1441,	// (0x00010c8e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1441,	// (0x00010c8e) bg_vkb2_fuc_pane_cp01

0x1dc8,	// (0x00011615) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1dc8,	// (0x00011615) vkb2_top_cell_right_wide_pane_g1

0x1441,	// (0x00010c8e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1441,	// (0x00010c8e) bg_vkb2_fuc_pane_cp02

0x1e26,	// (0x00011673) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1e26,	// (0x00011673) vkb2_top_cell_right_narrow_pane_g1

0xe645,	// (0x0001de92) aid_touch_area_decrease_ParamLimits

0xe645,	// (0x0001de92) aid_touch_area_decrease

0xe679,	// (0x0001dec6) aid_touch_area_increase_ParamLimits

0xe679,	// (0x0001dec6) aid_touch_area_increase

0xe6a1,	// (0x0001deee) aid_touch_area_mute_ParamLimits

0xe6a1,	// (0x0001deee) aid_touch_area_mute

0xe6d1,	// (0x0001df1e) aid_touch_area_slider_ParamLimits

0xe6d1,	// (0x0001df1e) aid_touch_area_slider

0xe711,	// (0x0001df5e) popup_slider_window_g4_ParamLimits

0xe711,	// (0x0001df5e) popup_slider_window_g4

0xe739,	// (0x0001df86) popup_slider_window_g5_ParamLimits

0xe739,	// (0x0001df86) popup_slider_window_g5

0xe76d,	// (0x0001dfba) popup_slider_window_g6_ParamLimits

0xe76d,	// (0x0001dfba) popup_slider_window_g6

0x8da9,	// (0x000185f6) popup_slider_window_t2_ParamLimits

0x8da9,	// (0x000185f6) popup_slider_window_t2

0x0001,

0xfd07,	// (0x0001f554) popup_slider_window_t_ParamLimits

0xfd07,	// (0x0001f554) popup_slider_window_t

0xe789,	// (0x0001dfd6) slider_pane_ParamLimits

0xe789,	// (0x0001dfd6) slider_pane

0x9ad0,	// (0x0001931d) slider_pane_g1_ParamLimits

0x9ad0,	// (0x0001931d) slider_pane_g1

0x9ae4,	// (0x00019331) slider_pane_g2_ParamLimits

0x9ae4,	// (0x00019331) slider_pane_g2

0x9afa,	// (0x00019347) slider_pane_g3_ParamLimits

0x9afa,	// (0x00019347) slider_pane_g3

0x0003,

0xfe1e,	// (0x0001f66b) slider_pane_g_ParamLimits

0xfe1e,	// (0x0001f66b) slider_pane_g

0xbe2a,	// (0x0001b677) popup_tb_float_extension_window_ParamLimits

0xbe2a,	// (0x0001b677) popup_tb_float_extension_window

0x9b26,	// (0x00019373) aid_size_cell_tb_float_ext

0x2295,	// (0x00011ae2) bg_popup_sub_window_cp28

0x9b32,	// (0x0001937f) grid_tb_float_ext_pane

0x9b3c,	// (0x00019389) cell_tb_float_ext_pane_ParamLimits

0x9b3c,	// (0x00019389) cell_tb_float_ext_pane

0x9b56,	// (0x000193a3) cell_tb_float_ext_pane_g1

0x9b5f,	// (0x000193ac) grid_highlight_pane_cp12

0xc09e,	// (0x0001b8eb) cell_last_hwr_side_pane_ParamLimits

0xc09e,	// (0x0001b8eb) cell_last_hwr_side_pane

0x73c0,	// (0x00016c0d) cell_last_hwr_side_pane_g1

0x9b68,	// (0x000193b5) cell_last_hwr_side_pane_g2

0x0001,

0xfe27,	// (0x0001f674) cell_last_hwr_side_pane_g

0xc41c,	// (0x0001bc69) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc41c,	// (0x0001bc69) vkb2_area_bottom_space_btn_pane

0x16a6,	// (0x00010ef3) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x963c,	// (0x00018e89) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1f84,	// (0x000117d1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1fa3,	// (0x000117f0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1fa3,	// (0x000117f0) vkb2_area_bottom_space_btn_pane_g1

0x1fdd,	// (0x0001182a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1fdd,	// (0x0001182a) vkb2_area_bottom_space_btn_pane_g2

0x2013,	// (0x00011860) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2013,	// (0x00011860) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2c,	// (0x0001f679) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2c,	// (0x0001f679) vkb2_area_bottom_space_btn_pane_g

0x1504,	// (0x00010d51) cel_fep_hwr_func_pane_ParamLimits

0x1504,	// (0x00010d51) cel_fep_hwr_func_pane

0xc073,	// (0x0001b8c0) cell_hwr_side_button_pane_ParamLimits

0xc073,	// (0x0001b8c0) cell_hwr_side_button_pane

0x8fff,	// (0x0001884c) aid_area_touch_clock_ParamLimits

0x262c,	// (0x00011e79) bg_uniindi_top_pane_ParamLimits

0x9011,	// (0x0001885e) uniindi_top_pane_g1_ParamLimits

0x9027,	// (0x00018874) uniindi_top_pane_g2_ParamLimits

0x9033,	// (0x00018880) uniindi_top_pane_g3_ParamLimits

0x9044,	// (0x00018891) uniindi_top_pane_g4_ParamLimits

0xfd3f,	// (0x0001f58c) uniindi_top_pane_g_ParamLimits

0x9051,	// (0x0001889e) uniindi_top_pane_t1_ParamLimits

0x262c,	// (0x00011e79) bg_vkb2_func_pane_cp01_ParamLimits

0x262c,	// (0x00011e79) bg_vkb2_func_pane_cp01

0x9b71,	// (0x000193be) cel_fep_hwr_func_pane_g1_ParamLimits

0x9b71,	// (0x000193be) cel_fep_hwr_func_pane_g1

0x262c,	// (0x00011e79) bg_vkb2_func_pane_cp02_ParamLimits

0x262c,	// (0x00011e79) bg_vkb2_func_pane_cp02

0x9b71,	// (0x000193be) cell_hwr_side_button_pane_g1_ParamLimits

0x9b71,	// (0x000193be) cell_hwr_side_button_pane_g1

0x46ef,	// (0x00013f3c) status_pane_g4_ParamLimits

0x46ef,	// (0x00013f3c) status_pane_g4

0x4709,	// (0x00013f56) status_pane_t1

0x70fa,	// (0x00016947) form2_midp_gauge_slider_cont_pane

0x7102,	// (0x0001694f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xde74,	// (0x0001d6c1) form2_midp_gauge_slider_pane_t2_ParamLimits

0xde86,	// (0x0001d6d3) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x0001f34c) form2_midp_gauge_slider_pane_t_ParamLimits

0x7138,	// (0x00016985) form2_midp_slider_pane_ParamLimits

0x195d,	// (0x000111aa) aid_size_cell_func_vkb2_ParamLimits

0x195d,	// (0x000111aa) aid_size_cell_func_vkb2

0x9b12,	// (0x0001935f) slider_pane_g4_ParamLimits

0x9b12,	// (0x0001935f) slider_pane_g4

0xc47d,	// (0x0001bcca) form2_midp_gauge_slider_pane_t2_cp01

0xc48b,	// (0x0001bcd8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc48b,	// (0x0001bcd8) form2_midp_gauge_slider_pane_t3_cp01

0x2088,	// (0x000118d5) form2_midp_slider_pane_cp01

0x2295,	// (0x00011ae2) navi_smil_pane

0x9baa,	// (0x000193f7) navi_smil_pane_g1

0x9bb2,	// (0x000193ff) navi_smil_pane_t1

0x9b7f,	// (0x000193cc) form2_midp_slider_pane_g1

0x9b88,	// (0x000193d5) form2_midp_slider_pane_g2

0x9b90,	// (0x000193dd) form2_midp_slider_pane_g3

0x9b7f,	// (0x000193cc) form2_midp_slider_pane_g4

0xf123,	// (0x0001e970) form2_midp_slider_pane_g5

0x0004,

0xfe35,	// (0x0001f682) form2_midp_slider_pane_g

0x204d,	// (0x0001189a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x204d,	// (0x0001189a) vkb2_area_bottom_space_btn_pane_g4

0xd425,	// (0x0001cc72) lc0_navi_pane_ParamLimits

0xd425,	// (0x0001cc72) lc0_navi_pane

0xd48f,	// (0x0001ccdc) lc0_stat_indi_pane_ParamLimits

0xd48f,	// (0x0001ccdc) lc0_stat_indi_pane

0xd4a4,	// (0x0001ccf1) ls0_title_pane_ParamLimits

0xd4a4,	// (0x0001ccf1) ls0_title_pane

0x3194,	// (0x000129e1) bg_popup_sub_pane_cp14_ParamLimits

0x8fe6,	// (0x00018833) list_uniindi_pane_ParamLimits

0x8ff2,	// (0x0001883f) uniindi_top_pane_ParamLimits

0x908e,	// (0x000188db) list_single_uniindi_pane_g1_ParamLimits

0x90a1,	// (0x000188ee) list_single_uniindi_pane_t1_ParamLimits

0xc4a8,	// (0x0001bcf5) lc0_stat_clock_pane_ParamLimits

0xc4a8,	// (0x0001bcf5) lc0_stat_clock_pane

0xf12e,	// (0x0001e97b) lc0_stat_indi_pane_g1_ParamLimits

0xf12e,	// (0x0001e97b) lc0_stat_indi_pane_g1

0xf13b,	// (0x0001e988) lc0_stat_indi_pane_g2_ParamLimits

0xf13b,	// (0x0001e988) lc0_stat_indi_pane_g2

0x0001,

0xfe40,	// (0x0001f68d) lc0_stat_indi_pane_g_ParamLimits

0xfe40,	// (0x0001f68d) lc0_stat_indi_pane_g

0xc4b5,	// (0x0001bd02) lc0_uni_indicator_pane_ParamLimits

0xc4b5,	// (0x0001bd02) lc0_uni_indicator_pane

0xf148,	// (0x0001e995) ls0_title_pane_g1_ParamLimits

0xf148,	// (0x0001e995) ls0_title_pane_g1

0xf15c,	// (0x0001e9a9) ls0_title_pane_t1_ParamLimits

0xf15c,	// (0x0001e9a9) ls0_title_pane_t1

0xc4c2,	// (0x0001bd0f) lc0_uni_indicator_pane_g1_ParamLimits

0xc4c2,	// (0x0001bd0f) lc0_uni_indicator_pane_g1

0x9c24,	// (0x00019471) lc0_stat_clock_pane_t1

0x00bb,	// (0x0000f908) main_ai5_pane

0x9c32,	// (0x0001947f) ai5_sk_pane_ParamLimits

0x9c32,	// (0x0001947f) ai5_sk_pane

0xf18a,	// (0x0001e9d7) cell_ai5_widget_pane_ParamLimits

0xf18a,	// (0x0001e9d7) cell_ai5_widget_pane

0x9cf5,	// (0x00019542) aid_size_cell_widget_grid

0x9d0b,	// (0x00019558) bg_ai5_widget_pane_ParamLimits

0x9d0b,	// (0x00019558) bg_ai5_widget_pane

0x9d75,	// (0x000195c2) cell_ai5_widget_pane_g2

0x9d85,	// (0x000195d2) cell_ai5_widget_pane_g3

0x9da4,	// (0x000195f1) cell_ai5_widget_pane_g4

0x9db0,	// (0x000195fd) cell_ai5_widget_pane_g5

0x9dbc,	// (0x00019609) cell_ai5_widget_pane_g6

0x9dc8,	// (0x00019615) cell_ai5_widget_pane_g7

0x9e10,	// (0x0001965d) cell_ai5_widget_pane_t1_ParamLimits

0x9e10,	// (0x0001965d) cell_ai5_widget_pane_t1

0x9e2d,	// (0x0001967a) cell_ai5_widget_pane_t2_ParamLimits

0x9e2d,	// (0x0001967a) cell_ai5_widget_pane_t2

0x9e45,	// (0x00019692) cell_ai5_widget_pane_t3_ParamLimits

0x9e45,	// (0x00019692) cell_ai5_widget_pane_t3

0x9e5d,	// (0x000196aa) cell_ai5_widget_pane_t4_ParamLimits

0x9e5d,	// (0x000196aa) cell_ai5_widget_pane_t4

0x9e77,	// (0x000196c4) cell_ai5_widget_pane_t5_ParamLimits

0x9e77,	// (0x000196c4) cell_ai5_widget_pane_t5

0x9e96,	// (0x000196e3) cell_ai5_widget_pane_t6_ParamLimits

0x9e96,	// (0x000196e3) cell_ai5_widget_pane_t6

0x9ea8,	// (0x000196f5) cell_ai5_widget_pane_t7_ParamLimits

0x9ea8,	// (0x000196f5) cell_ai5_widget_pane_t7

0x9ec1,	// (0x0001970e) cell_ai5_widget_pane_t8_ParamLimits

0x9ec1,	// (0x0001970e) cell_ai5_widget_pane_t8

0x0009,

0xfe5a,	// (0x0001f6a7) cell_ai5_widget_pane_t_ParamLimits

0xfe5a,	// (0x0001f6a7) cell_ai5_widget_pane_t

0x9f0d,	// (0x0001975a) grid_ai5_widget_pane

0x3194,	// (0x000129e1) highlight_cell_ai5_widget_pane_ParamLimits

0x3194,	// (0x000129e1) highlight_cell_ai5_widget_pane

0xf1f4,	// (0x0001ea41) ai5_sk_left_pane

0xf1fe,	// (0x0001ea4b) ai5_sk_middle_pane

0xf208,	// (0x0001ea55) ai5_sk_right_pane

0x9f43,	// (0x00019790) bg_ai5_widget_pane_g1_ParamLimits

0x9f43,	// (0x00019790) bg_ai5_widget_pane_g1

0x9f4f,	// (0x0001979c) bg_ai5_widget_pane_g2_ParamLimits

0x9f4f,	// (0x0001979c) bg_ai5_widget_pane_g2

0x9f5b,	// (0x000197a8) bg_ai5_widget_pane_g3_ParamLimits

0x9f5b,	// (0x000197a8) bg_ai5_widget_pane_g3

0x9f67,	// (0x000197b4) bg_ai5_widget_pane_g4_ParamLimits

0x9f67,	// (0x000197b4) bg_ai5_widget_pane_g4

0x9f73,	// (0x000197c0) bg_ai5_widget_pane_g5_ParamLimits

0x9f73,	// (0x000197c0) bg_ai5_widget_pane_g5

0x9f7f,	// (0x000197cc) bg_ai5_widget_pane_g6_ParamLimits

0x9f7f,	// (0x000197cc) bg_ai5_widget_pane_g6

0x9f8b,	// (0x000197d8) bg_ai5_widget_pane_g7_ParamLimits

0x9f8b,	// (0x000197d8) bg_ai5_widget_pane_g7

0x9f97,	// (0x000197e4) bg_ai5_widget_pane_g8_ParamLimits

0x9f97,	// (0x000197e4) bg_ai5_widget_pane_g8

0x9fa3,	// (0x000197f0) bg_ai5_widget_pane_g9_ParamLimits

0x9fa3,	// (0x000197f0) bg_ai5_widget_pane_g9

0x0008,

0xfe6f,	// (0x0001f6bc) bg_ai5_widget_pane_g_ParamLimits

0xfe6f,	// (0x0001f6bc) bg_ai5_widget_pane_g

0x9fd6,	// (0x00019823) cell_shortcut_ai5_widget_pane_ParamLimits

0x9fd6,	// (0x00019823) cell_shortcut_ai5_widget_pane

0x4026,	// (0x00013873) bg_cell_shortcut_ai5_widget_pane

0x9fe7,	// (0x00019834) cell_grid_ai5_widget_pane_g1

0x9ff0,	// (0x0001983d) highlight_cell_shortcut_ai5_widget_pane

0x48a4,	// (0x000140f1) ai5_sk_left_pane_g1

0x9ff8,	// (0x00019845) ai5_sk_left_pane_g2

0xa000,	// (0x0001984d) ai5_sk_left_pane_g3

0xa008,	// (0x00019855) ai5_sk_left_pane_g4

0x0003,

0xfe82,	// (0x0001f6cf) ai5_sk_left_pane_g

0xa010,	// (0x0001985d) ai5_sk_left_pane_t1

0x48ac,	// (0x000140f9) ai5_sk_right_pane_g1

0xa01e,	// (0x0001986b) ai5_sk_right_pane_g2

0xa026,	// (0x00019873) ai5_sk_right_pane_g3

0xa02e,	// (0x0001987b) ai5_sk_right_pane_g4

0x0003,

0xfe8b,	// (0x0001f6d8) ai5_sk_right_pane_g

0xa036,	// (0x00019883) ai5_sk_right_pane_t1

0x48ac,	// (0x000140f9) ai5_sk_middle_pane_g1

0x48a4,	// (0x000140f1) ai5_sk_middle_pane_g2

0x48c4,	// (0x00014111) ai5_sk_middle_pane_g3

0xa026,	// (0x00019873) ai5_sk_middle_pane_g4

0xa000,	// (0x0001984d) ai5_sk_middle_pane_g5

0xa044,	// (0x00019891) ai5_sk_middle_pane_g6

0xf212,	// (0x0001ea5f) ai5_sk_middle_pane_g7

0x0006,

0xfe94,	// (0x0001f6e1) ai5_sk_middle_pane_g

0xd311,	// (0x0001cb5e) aid_touch_area_size_lc0_ParamLimits

0xd311,	// (0x0001cb5e) aid_touch_area_size_lc0

0x16d5,	// (0x00010f22) cell_hwr_candidate_pane_t1_ParamLimits

0x43d8,	// (0x00013c25) aid_touch_navi_pane

0xd597,	// (0x0001cde4) status_dt_navi_pane_ParamLimits

0xd597,	// (0x0001cde4) status_dt_navi_pane

0xd5af,	// (0x0001cdfc) status_dt_sta_pane_ParamLimits

0xd5af,	// (0x0001cdfc) status_dt_sta_pane

0xf21a,	// (0x0001ea67) dt_sta_controll_pane

0xf227,	// (0x0001ea74) dt_sta_indi_pane

0xf234,	// (0x0001ea81) dt_sta_title_pane

0x262c,	// (0x00011e79) bg_dt_sta_indi_pane_ParamLimits

0x262c,	// (0x00011e79) bg_dt_sta_indi_pane

0xf246,	// (0x0001ea93) dt_sta_battery_pane

0xf24e,	// (0x0001ea9b) dt_sta_indi_pane_g1

0xa096,	// (0x000198e3) dt_sta_indi_pane_g2

0xa09f,	// (0x000198ec) dt_sta_indi_pane_g3

0x0002,

0xfea3,	// (0x0001f6f0) dt_sta_indi_pane_g

0xa0a8,	// (0x000198f5) dt_sta_signal_pane

0x3194,	// (0x000129e1) bg_dt_sta_title_pane_ParamLimits

0x3194,	// (0x000129e1) bg_dt_sta_title_pane

0xa0b1,	// (0x000198fe) dt_sta_title_pane_g1

0xa0b9,	// (0x00019906) dt_sta_title_pane_t1_ParamLimits

0xa0b9,	// (0x00019906) dt_sta_title_pane_t1

0x2295,	// (0x00011ae2) bg_dt_sta_control_pane

0xf257,	// (0x0001eaa4) dt_sta_controll_pane_g1

0xa0d7,	// (0x00019924) bg_dt_sta_title_pane_g1

0xa0e0,	// (0x0001992d) bg_dt_sta_title_pane_g2

0xa0e9,	// (0x00019936) bg_dt_sta_title_pane_g3

0x0002,

0xfeaa,	// (0x0001f6f7) bg_dt_sta_title_pane_g

0x73c0,	// (0x00016c0d) bg_dt_sta_indi_pane_g1

0xa0f2,	// (0x0001993f) dt_sta_signal_pane_g1

0xa0fa,	// (0x00019947) dt_sta_signal_pane_g2

0x0001,

0xfeb1,	// (0x0001f6fe) dt_sta_signal_pane_g

0xa102,	// (0x0001994f) dt_sta_battery_pane_g1

0xa10b,	// (0x00019958) dt_sta_battery_pane_t1

0x73c0,	// (0x00016c0d) bg_dt_sta_control_pane_g1

0x3aa1,	// (0x000132ee) fep_china_uni_eep_pane

0x3aa9,	// (0x000132f6) fep_china_uni_entry_pane_ParamLimits

0x3ab9,	// (0x00013306) popup_fep_china_uni_window_g1_ParamLimits

0x3ac9,	// (0x00013316) popup_fep_china_uni_window_g2_ParamLimits

0x3ac9,	// (0x00013316) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0001ef6b) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0001ef6b) popup_fep_china_uni_window_g

0xa11a,	// (0x00019967) fep_china_uni_eep_pane_g1

0xa122,	// (0x0001996f) fep_china_uni_eep_pane_t1

0x9ba1,	// (0x000193ee) aid_touch_area_size_smil_player

0x4524,	// (0x00013d71) lc0_clock_pane

0x46fd,	// (0x00013f4a) status_pane_g5_ParamLimits

0x46fd,	// (0x00013f4a) status_pane_g5

0xb9ac,	// (0x0001b1f9) popup_keymap_window

0x46c3,	// (0x00013f10) status_icon_pane

0x9d85,	// (0x000195d2) cell_ai5_widget_pane_g3_ParamLimits

0x9da4,	// (0x000195f1) cell_ai5_widget_pane_g4_ParamLimits

0x9db0,	// (0x000195fd) cell_ai5_widget_pane_g5_ParamLimits

0x9dd4,	// (0x00019621) cell_ai5_widget_pane_g8_ParamLimits

0x9dd4,	// (0x00019621) cell_ai5_widget_pane_g8

0x9de8,	// (0x00019635) cell_ai5_widget_pane_g9_ParamLimits

0x9de8,	// (0x00019635) cell_ai5_widget_pane_g9

0x9dfc,	// (0x00019649) cell_ai5_widget_pane_g10_ParamLimits

0x9dfc,	// (0x00019649) cell_ai5_widget_pane_g10

0xa131,	// (0x0001997e) status_icon_pane_g1

0x2295,	// (0x00011ae2) bg_popup_sub_pane_cp13

0xa139,	// (0x00019986) popup_keymap_window_t1

0xd26b,	// (0x0001cab8) control_pane_g6_ParamLimits

0xd26b,	// (0x0001cab8) control_pane_g6

0xd278,	// (0x0001cac5) control_pane_g7_ParamLimits

0xd278,	// (0x0001cac5) control_pane_g7

0xd285,	// (0x0001cad2) control_pane_g8_ParamLimits

0xd285,	// (0x0001cad2) control_pane_g8

0xf21a,	// (0x0001ea67) dt_sta_controll_pane_ParamLimits

0xf227,	// (0x0001ea74) dt_sta_indi_pane_ParamLimits

0xf234,	// (0x0001ea81) dt_sta_title_pane_ParamLimits

0x2b47,	// (0x00012394) aid_size_touch_scroll_bar_cale

0x0194,	// (0x0000f9e1) popup_discreet_window_ParamLimits

0x0194,	// (0x0000f9e1) popup_discreet_window

0xb611,	// (0x0001ae5e) popup_sk_window

0x5005,	// (0x00014852) bg_popup_sub_pane_cp28_ParamLimits

0x5005,	// (0x00014852) bg_popup_sub_pane_cp28

0xa147,	// (0x00019994) popup_discreet_window_g1_ParamLimits

0xa147,	// (0x00019994) popup_discreet_window_g1

0xa167,	// (0x000199b4) popup_discreet_window_t1_ParamLimits

0xa167,	// (0x000199b4) popup_discreet_window_t1

0xa185,	// (0x000199d2) popup_discreet_window_t2_ParamLimits

0xa185,	// (0x000199d2) popup_discreet_window_t2

0x0002,

0xfeb6,	// (0x0001f703) popup_discreet_window_t_ParamLimits

0xfeb6,	// (0x0001f703) popup_discreet_window_t

0x20bf,	// (0x0001190c) popup_sk_window_g1

0x20c9,	// (0x00011916) popup_sk_window_g2

0x0001,

0xfebd,	// (0x0001f70a) popup_sk_window_g

0x20d3,	// (0x00011920) popup_sk_window_t1

0x20e1,	// (0x0001192e) popup_sk_window_t1_copy1

0x9d75,	// (0x000195c2) cell_ai5_widget_pane_g2_ParamLimits

0x9ed3,	// (0x00019720) cell_ai5_widget_pane_t9_ParamLimits

0x9ed3,	// (0x00019720) cell_ai5_widget_pane_t9

0x2295,	// (0x00011ae2) main_fep_fshwr2_pane

0xc4e9,	// (0x0001bd36) aid_fshwr2_btn_pane

0xc4f8,	// (0x0001bd45) aid_fshwr2_syb_pane

0xc50a,	// (0x0001bd57) aid_fshwr2_txt_pane

0xc519,	// (0x0001bd66) fshwr2_func_candi_pane

0xc52a,	// (0x0001bd77) fshwr2_hwr_syb_pane

0xc545,	// (0x0001bd92) fshwr2_icf_pane

0x2295,	// (0x00011ae2) fshwr2_icf_bg_pane

0xf260,	// (0x0001eaad) fshwr2_icf_pane_t1_ParamLimits

0xf260,	// (0x0001eaad) fshwr2_icf_pane_t1

0x73c0,	// (0x00016c0d) fshwr2_func_candi_pane_g1

0xa1ee,	// (0x00019a3b) fshwr2_func_candi_row_pane_ParamLimits

0xa1ee,	// (0x00019a3b) fshwr2_func_candi_row_pane

0xf278,	// (0x0001eac5) cell_fshwr2_syb_pane_ParamLimits

0xf278,	// (0x0001eac5) cell_fshwr2_syb_pane

0x763e,	// (0x00016e8b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x763e,	// (0x00016e8b) fshwr2_hwr_syb_pane_g1

0x2295,	// (0x00011ae2) bg_popup_call_pane_cp01

0xa219,	// (0x00019a66) fshwr2_func_candi_cell_pane_ParamLimits

0xa219,	// (0x00019a66) fshwr2_func_candi_cell_pane

0xa24a,	// (0x00019a97) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa24a,	// (0x00019a97) fshwr2_func_candi_cell_bg_pane

0xa264,	// (0x00019ab1) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa264,	// (0x00019ab1) fshwr2_func_candi_cell_pane_g1

0xa28c,	// (0x00019ad9) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa28c,	// (0x00019ad9) fshwr2_func_candi_cell_pane_t1

0x2295,	// (0x00011ae2) bg_button_pane_cp08

0x4026,	// (0x00013873) cell_fshwr2_syb_bg_pane

0xf292,	// (0x0001eadf) cell_fshwr2_syb_bg_pane_g1

0xf29a,	// (0x0001eae7) cell_fshwr2_syb_bg_pane_t1

0x3194,	// (0x000129e1) main_tmo_pane

0xd96f,	// (0x0001d1bc) uni_indicator_pane_g1_ParamLimits

0xd984,	// (0x0001d1d1) uni_indicator_pane_g2_ParamLimits

0x5b4b,	// (0x00015398) uni_indicator_pane_g3_ParamLimits

0x5b61,	// (0x000153ae) uni_indicator_pane_g4_ParamLimits

0x5b61,	// (0x000153ae) uni_indicator_pane_g4

0x5b75,	// (0x000153c2) uni_indicator_pane_g5_ParamLimits

0x5b75,	// (0x000153c2) uni_indicator_pane_g5

0x5b89,	// (0x000153d6) uni_indicator_pane_g6_ParamLimits

0x5b89,	// (0x000153d6) uni_indicator_pane_g6

0xf91d,	// (0x0001f16a) uni_indicator_pane_g_ParamLimits

0xe621,	// (0x0001de6e) popup_tmo_note_window_ParamLimits

0xe621,	// (0x0001de6e) popup_tmo_note_window

0x193f,	// (0x0001118c) fshwr2_bg_pane

0xa27d,	// (0x00019aca) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa27d,	// (0x00019aca) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec2,	// (0x0001f70f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec2,	// (0x0001f70f) fshwr2_func_candi_cell_pane_g

0x73c0,	// (0x00016c0d) bg_popup_window_pane_cp01

0xa2b6,	// (0x00019b03) bg_popup_window_pane_g1_cp01

0xa2bf,	// (0x00019b0c) bg_popup_window_pane_cp22_ParamLimits

0xa2bf,	// (0x00019b0c) bg_popup_window_pane_cp22

0xa2cd,	// (0x00019b1a) listscroll_tmo_link_pane_ParamLimits

0xa2cd,	// (0x00019b1a) listscroll_tmo_link_pane

0xa30d,	// (0x00019b5a) popup_tmo_note_window_g1_ParamLimits

0xa30d,	// (0x00019b5a) popup_tmo_note_window_g1

0xa31a,	// (0x00019b67) tmo_note_info_pane_ParamLimits

0xa31a,	// (0x00019b67) tmo_note_info_pane

0xf2a9,	// (0x0001eaf6) list_tmo_note_info_pane_g1_ParamLimits

0xf2a9,	// (0x0001eaf6) list_tmo_note_info_pane_g1

0xa34b,	// (0x00019b98) list_tmo_note_info_pane_g2_ParamLimits

0xa34b,	// (0x00019b98) list_tmo_note_info_pane_g2

0x0001,

0xfec7,	// (0x0001f714) list_tmo_note_info_pane_g_ParamLimits

0xfec7,	// (0x0001f714) list_tmo_note_info_pane_g

0xa367,	// (0x00019bb4) list_tmo_note_info_text_pane_ParamLimits

0xa367,	// (0x00019bb4) list_tmo_note_info_text_pane

0xa3e8,	// (0x00019c35) list_tmo_link_pane

0xa3f5,	// (0x00019c42) scroll_pane_cp20

0xa402,	// (0x00019c4f) list_single_tmo_link_pane_ParamLimits

0xa402,	// (0x00019c4f) list_single_tmo_link_pane

0xa412,	// (0x00019c5f) list_single_tmo_link_pane_t1

0xa420,	// (0x00019c6d) list_tmo_note_info_text_pane_t1_ParamLimits

0xa420,	// (0x00019c6d) list_tmo_note_info_text_pane_t1

0xce60,	// (0x0001c6ad) aid_size_touch_scroll_bar_cp01_ParamLimits

0xce60,	// (0x0001c6ad) aid_size_touch_scroll_bar_cp01

0xcd90,	// (0x0001c5dd) aid_size_touch_slider_marker

0xb601,	// (0x0001ae4e) popup_settings_window_ParamLimits

0xb601,	// (0x0001ae4e) popup_settings_window

0x4388,	// (0x00013bd5) popup_candi_list_indi_window

0x43d8,	// (0x00013c25) aid_touch_navi_pane_ParamLimits

0x189a,	// (0x000110e7) rs_clock_indi_pane

0x18a3,	// (0x000110f0) sctrl_sk_bottom_pane_ParamLimits

0x18b4,	// (0x00011101) sctrl_sk_top_pane_ParamLimits

0x19b7,	// (0x00011204) popup_fep_tooltip_window

0x9cf5,	// (0x00019542) aid_size_cell_widget_grid_ParamLimits

0x9d69,	// (0x000195b6) cell_ai5_widget_pane_g1_ParamLimits

0x9d69,	// (0x000195b6) cell_ai5_widget_pane_g1

0x9dbc,	// (0x00019609) cell_ai5_widget_pane_g6_ParamLimits

0x9dc8,	// (0x00019615) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe45,	// (0x0001f692) cell_ai5_widget_pane_g_ParamLimits

0xfe45,	// (0x0001f692) cell_ai5_widget_pane_g

0x9ef7,	// (0x00019744) cell_ai5_widget_pane_t10_ParamLimits

0x9ef7,	// (0x00019744) cell_ai5_widget_pane_t10

0x9f0d,	// (0x0001975a) grid_ai5_widget_pane_ParamLimits

0x9faf,	// (0x000197fc) cell_contacts_ai5_widget_pane_ParamLimits

0x9faf,	// (0x000197fc) cell_contacts_ai5_widget_pane

0xa19a,	// (0x000199e7) popup_discreet_window_t3_ParamLimits

0xa19a,	// (0x000199e7) popup_discreet_window_t3

0x2159,	// (0x000119a6) popup_fshwr2_char_preview_window_ParamLimits

0x2159,	// (0x000119a6) popup_fshwr2_char_preview_window

0xf2c0,	// (0x0001eb0d) tmo_note_info_pane_t1

0xf2d5,	// (0x0001eb22) tmo_note_info_pane_t2

0xf2ec,	// (0x0001eb39) tmo_note_info_pane_t3

0xa3c4,	// (0x00019c11) tmo_note_info_pane_t4

0xa3d6,	// (0x00019c23) tmo_note_info_pane_t5

0x0004,

0xfecc,	// (0x0001f719) tmo_note_info_pane_t

0xa3e8,	// (0x00019c35) list_tmo_link_pane_ParamLimits

0xa3f5,	// (0x00019c42) scroll_pane_cp20_ParamLimits

0x2295,	// (0x00011ae2) bg_popup_fep_char_preview_window_cp01

0xa439,	// (0x00019c86) popup_fshwr2_char_preview_window_t1

0xa447,	// (0x00019c94) popup_candi_list_indi_window_g1

0xa450,	// (0x00019c9d) bg_cell_contacts_ai5_widget_pane

0xa45c,	// (0x00019ca9) cell_contacts_ai5_widget_pane_g1

0xa470,	// (0x00019cbd) cell_contacts_ai5_widget_pane_g2

0xa47c,	// (0x00019cc9) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed7,	// (0x0001f724) cell_contacts_ai5_widget_pane_g

0xa48f,	// (0x00019cdc) cell_contacts_ai5_widget_pane_t1

0x3194,	// (0x000129e1) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf366,	// (0x0001ebb3) settings_container_pane

0x4026,	// (0x00013873) listscroll_set_pane_copy1

0x680a,	// (0x00016057) scroll_pane_cp121_copy1

0xa512,	// (0x00019d5f) set_content_pane_copy1

0xf372,	// (0x0001ebbf) aid_height_set_list_copy1_ParamLimits

0xf372,	// (0x0001ebbf) aid_height_set_list_copy1

0x5da9,	// (0x000155f6) aid_size_parent_copy1_ParamLimits

0x5da9,	// (0x000155f6) aid_size_parent_copy1

0xf37e,	// (0x0001ebcb) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf37e,	// (0x0001ebcb) button_value_adjust_pane_cp6_copy1

0x436e,	// (0x00013bbb) list_highlight_pane_cp2_copy1_ParamLimits

0x436e,	// (0x00013bbb) list_highlight_pane_cp2_copy1

0xf392,	// (0x0001ebdf) list_set_pane_copy1_ParamLimits

0xf392,	// (0x0001ebdf) list_set_pane_copy1

0xf301,	// (0x0001eb4e) main_pane_set_t1_copy1_ParamLimits

0xf301,	// (0x0001eb4e) main_pane_set_t1_copy1

0xf33b,	// (0x0001eb88) main_pane_set_t2_copy1_ParamLimits

0xf33b,	// (0x0001eb88) main_pane_set_t2_copy1

0xf43f,	// (0x0001ec8c) main_pane_set_t3_copy1

0xf44d,	// (0x0001ec9a) main_pane_set_t4_copy1

0xf35a,	// (0x0001eba7) set_content_pane_g1_copy1_ParamLimits

0xf35a,	// (0x0001eba7) set_content_pane_g1_copy1

0xf45b,	// (0x0001eca8) setting_code_pane_copy1

0xa60b,	// (0x00019e58) setting_slider_graphic_pane_copy1

0xa60b,	// (0x00019e58) setting_slider_pane_copy1

0xa60b,	// (0x00019e58) setting_text_pane_copy1

0xa60b,	// (0x00019e58) setting_volume_pane_copy1

0xf45b,	// (0x0001eca8) settings_code_pane_cp2_copy1

0xf463,	// (0x0001ecb0) settings_code_pane_cp_copy1_ParamLimits

0xf463,	// (0x0001ecb0) settings_code_pane_cp_copy1

0xc55d,	// (0x0001bdaa) volume_set_pane_copy1

0xf477,	// (0x0001ecc4) volume_set_pane_g10_copy1

0xf47f,	// (0x0001eccc) volume_set_pane_g1_copy1

0xf487,	// (0x0001ecd4) volume_set_pane_g2_copy1

0xf48f,	// (0x0001ecdc) volume_set_pane_g3_copy1

0xf497,	// (0x0001ece4) volume_set_pane_g4_copy1

0xf49f,	// (0x0001ecec) volume_set_pane_g5_copy1

0xf4a7,	// (0x0001ecf4) volume_set_pane_g6_copy1

0xf4af,	// (0x0001ecfc) volume_set_pane_g7_copy1

0xf4b7,	// (0x0001ed04) volume_set_pane_g8_copy1

0xf4bf,	// (0x0001ed0c) volume_set_pane_g9_copy1

0x2389,	// (0x00011bd6) bg_set_opt_pane_cp_copy1_ParamLimits

0x2389,	// (0x00011bd6) bg_set_opt_pane_cp_copy1

0x2175,	// (0x000119c2) setting_slider_pane_t1_copy1_ParamLimits

0x2175,	// (0x000119c2) setting_slider_pane_t1_copy1

0xc565,	// (0x0001bdb2) setting_slider_pane_t2_copy1_ParamLimits

0xc565,	// (0x0001bdb2) setting_slider_pane_t2_copy1

0xc57f,	// (0x0001bdcc) setting_slider_pane_t3_copy1_ParamLimits

0xc57f,	// (0x0001bdcc) setting_slider_pane_t3_copy1

0xc597,	// (0x0001bde4) slider_set_pane_copy1_ParamLimits

0xc597,	// (0x0001bde4) slider_set_pane_copy1

0x32bd,	// (0x00012b0a) set_opt_bg_pane_g1_copy2

0x32c5,	// (0x00012b12) set_opt_bg_pane_g2_copy2

0xa677,	// (0x00019ec4) set_opt_bg_pane_g3_copy2

0x32d5,	// (0x00012b22) set_opt_bg_pane_g4_copy2

0x32dd,	// (0x00012b2a) set_opt_bg_pane_g5_copy2

0x32e5,	// (0x00012b32) set_opt_bg_pane_g6_copy2

0xf4e7,	// (0x0001ed34) set_opt_bg_pane_g7_copy2

0xa689,	// (0x00019ed6) set_opt_bg_pane_g8_copy2

0xa693,	// (0x00019ee0) set_opt_bg_pane_g9_copy2

0xa69d,	// (0x00019eea) aid_size_touch_slider_mark_copy1_ParamLimits

0xa69d,	// (0x00019eea) aid_size_touch_slider_mark_copy1

0xa6b1,	// (0x00019efe) slider_set_pane_g1_copy1

0xa6ba,	// (0x00019f07) slider_set_pane_g2_copy1

0x651c,	// (0x00015d69) slider_set_pane_g3_copy1_ParamLimits

0x651c,	// (0x00015d69) slider_set_pane_g3_copy1

0x6530,	// (0x00015d7d) slider_set_pane_g4_copy1_ParamLimits

0x6530,	// (0x00015d7d) slider_set_pane_g4_copy1

0x6548,	// (0x00015d95) slider_set_pane_g5_copy1_ParamLimits

0x6548,	// (0x00015d95) slider_set_pane_g5_copy1

0x651c,	// (0x00015d69) slider_set_pane_g6_copy1_ParamLimits

0x651c,	// (0x00015d69) slider_set_pane_g6_copy1

0xf4ef,	// (0x0001ed3c) slider_set_pane_g7_copy1_ParamLimits

0xf4ef,	// (0x0001ed3c) slider_set_pane_g7_copy1

0x22a9,	// (0x00011af6) bg_set_opt_pane_cp2_copy1

0xa6d8,	// (0x00019f25) setting_slider_graphic_pane_g1_copy1

0xf505,	// (0x0001ed52) setting_slider_graphic_pane_t1_copy1

0xf515,	// (0x0001ed62) setting_slider_graphic_pane_t2_copy1

0xf525,	// (0x0001ed72) slider_set_pane_cp_copy1

0xa711,	// (0x00019f5e) input_focus_pane_cp1_copy1

0xa71a,	// (0x00019f67) list_set_text_pane_copy1

0xa722,	// (0x00019f6f) setting_text_pane_g1_copy1

0x23e2,	// (0x00011c2f) set_text_pane_t1_copy1

0xa711,	// (0x00019f5e) input_focus_pane_cp2_copy1

0xa722,	// (0x00019f6f) setting_code_pane_g1_copy1

0xf52d,	// (0x0001ed7a) setting_code_pane_t1_copy1

0x6635,	// (0x00015e82) list_set_graphic_pane_copy1

0x22a9,	// (0x00011af6) bg_set_opt_pane_cp4_copy1

0xd118,	// (0x0001c965) list_set_graphic_pane_g1_copy1_ParamLimits

0xd118,	// (0x0001c965) list_set_graphic_pane_g1_copy1

0xf53b,	// (0x0001ed88) list_set_graphic_pane_g2_copy1

0xd130,	// (0x0001c97d) list_set_graphic_pane_t1_copy1_ParamLimits

0xd130,	// (0x0001c97d) list_set_graphic_pane_t1_copy1

0x73c0,	// (0x00016c0d) rs_clock_indi_pane_g1

0xa753,	// (0x00019fa0) rs_clock_indi_pane_t1

0xa761,	// (0x00019fae) rs_indi_pane

0xa769,	// (0x00019fb6) rs_indi_pane_g1

0xa772,	// (0x00019fbf) rs_indi_pane_g2

0xa77b,	// (0x00019fc8) rs_indi_pane_g3

0x0002,

0xfede,	// (0x0001f72b) rs_indi_pane_g

0x4026,	// (0x00013873) bg_popup_preview_window_pane_cp03

0xa784,	// (0x00019fd1) popup_fep_tooltip_window_t1

0x8238,	// (0x00017a85) popup_note2_window_g2_ParamLimits

0x8238,	// (0x00017a85) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0001f4c4) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0001f4c4) popup_note2_window_g

0x8816,	// (0x00018063) bg_popup_sub_pane_cp11_ParamLimits

0x8823,	// (0x00018070) cell_ai3_links_pane_g1_ParamLimits

0x883a,	// (0x00018087) cell_ai3_links_pane_t1

0x23e2,	// (0x00011c2f) set_text_pane_t1_copy1_ParamLimits

0xd1a4,	// (0x0001c9f1) cell_graphic_popup_pane_cp2_ParamLimits

0xd1a4,	// (0x0001c9f1) cell_graphic_popup_pane_cp2

0xf543,	// (0x0001ed90) cell_graphic_popup_pane_g1_cp2

0x295a,	// (0x000121a7) cell_graphic_popup_pane_g2_cp2

0xa79a,	// (0x00019fe7) cell_graphic_popup_pane_g3_cp2

0xa7a2,	// (0x00019fef) cell_graphic_popup_pane_t2_cp2

0x296b,	// (0x000121b8) grid_highlight_pane_cp3_cp2

0x36ae,	// (0x00012efb) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3194,	// (0x000129e1) main_tmo_pane_ParamLimits

0xe615,	// (0x0001de62) popup_tmo_big_image_note_window

0x9d59,	// (0x000195a6) cell_ai5_widget_list_pane

0x9d61,	// (0x000195ae) cell_ai5_widget_lrg_icon_pane

0xf2c0,	// (0x0001eb0d) tmo_note_info_pane_t1_ParamLimits

0xf2d5,	// (0x0001eb22) tmo_note_info_pane_t2_ParamLimits

0xf2ec,	// (0x0001eb39) tmo_note_info_pane_t3_ParamLimits

0xa3c4,	// (0x00019c11) tmo_note_info_pane_t4_ParamLimits

0xa3d6,	// (0x00019c23) tmo_note_info_pane_t5_ParamLimits

0xfecc,	// (0x0001f719) tmo_note_info_pane_t_ParamLimits

0xf366,	// (0x0001ebb3) settings_container_pane_ParamLimits

0xa709,	// (0x00019f56) indicator_popup_pane_cp5

0xa709,	// (0x00019f56) indicator_popup_pane_cp6

0x6635,	// (0x00015e82) list_set_graphic_pane_copy1_ParamLimits

0x2295,	// (0x00011ae2) bg_popup_window_pane_cp23

0xa7b0,	// (0x00019ffd) popup_tmo_big_image_note_window_g1

0xa7ba,	// (0x0001a007) popup_tmo_big_image_note_window_t1

0xa7ca,	// (0x0001a017) popup_tmo_big_image_note_window_t2

0xa7da,	// (0x0001a027) popup_tmo_big_image_note_window_t3

0x0002,

0xfee5,	// (0x0001f732) popup_tmo_big_image_note_window_t

0xa7ea,	// (0x0001a037) cell_ai5_widget_lrg_icon_pane_g1

0xa7f2,	// (0x0001a03f) cell_ai5_widget_lrg_icon_pane_t1

0xa800,	// (0x0001a04d) cell_ai5_widget_list_row_pane_ParamLimits

0xa800,	// (0x0001a04d) cell_ai5_widget_list_row_pane

0xa818,	// (0x0001a065) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa818,	// (0x0001a065) cell_ai5_widget_list_row_pane_g1

0xa825,	// (0x0001a072) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa825,	// (0x0001a072) cell_ai5_widget_list_row_pane_t1

0xa83d,	// (0x0001a08a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa83d,	// (0x0001a08a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeec,	// (0x0001f739) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeec,	// (0x0001f739) cell_ai5_widget_list_row_pane_t

0x00bb,	// (0x0000f908) main_fep_vtchi_ss_pane

0x21ea,	// (0x00011a37) popup_fep_char_pre_window

0x21f2,	// (0x00011a3f) popup_fep_ituss_window

0x2213,	// (0x00011a60) popup_fep_vkbss_window

0xa865,	// (0x0001a0b2) grid_vkbss_keypad_pane_ParamLimits

0xa865,	// (0x0001a0b2) grid_vkbss_keypad_pane

0xa875,	// (0x0001a0c2) ituss_keypad_pane

0x223e,	// (0x00011a8b) aid_vkbss_key_offset_ParamLimits

0x223e,	// (0x00011a8b) aid_vkbss_key_offset

0x224a,	// (0x00011a97) cell_vkbss_key_pane_ParamLimits

0x224a,	// (0x00011a97) cell_vkbss_key_pane

0xa885,	// (0x0001a0d2) bg_cell_vkbss_key_g1_ParamLimits

0xa885,	// (0x0001a0d2) bg_cell_vkbss_key_g1

0xa891,	// (0x0001a0de) cell_vkbss_key_3p_pane_ParamLimits

0xa891,	// (0x0001a0de) cell_vkbss_key_3p_pane

0xa8ab,	// (0x0001a0f8) cell_vkbss_key_g1_ParamLimits

0xa8ab,	// (0x0001a0f8) cell_vkbss_key_g1

0xa8c5,	// (0x0001a112) cell_vkbss_key_t1_ParamLimits

0xa8c5,	// (0x0001a112) cell_vkbss_key_t1

0x2260,	// (0x00011aad) cell_ituss_key_pane_ParamLimits

0x2260,	// (0x00011aad) cell_ituss_key_pane

0xa8f0,	// (0x0001a13d) bg_cell_ituss_key_g1_ParamLimits

0xa8f0,	// (0x0001a13d) bg_cell_ituss_key_g1

0xa8fc,	// (0x0001a149) cell_ituss_key_pane_g1_ParamLimits

0xa8fc,	// (0x0001a149) cell_ituss_key_pane_g1

0xa916,	// (0x0001a163) cell_ituss_key_pane_g2_ParamLimits

0xa916,	// (0x0001a163) cell_ituss_key_pane_g2

0x0001,

0xfef3,	// (0x0001f740) cell_ituss_key_pane_g_ParamLimits

0xfef3,	// (0x0001f740) cell_ituss_key_pane_g

0xa944,	// (0x0001a191) cell_ituss_key_t1_ParamLimits

0xa944,	// (0x0001a191) cell_ituss_key_t1

0xa97a,	// (0x0001a1c7) cell_ituss_key_t2_ParamLimits

0xa97a,	// (0x0001a1c7) cell_ituss_key_t2

0xa9ab,	// (0x0001a1f8) cell_ituss_key_t3_ParamLimits

0xa9ab,	// (0x0001a1f8) cell_ituss_key_t3

0xa9e5,	// (0x0001a232) cell_ituss_key_t4_ParamLimits

0xa9e5,	// (0x0001a232) cell_ituss_key_t4

0x0003,

0xfef8,	// (0x0001f745) cell_ituss_key_t_ParamLimits

0xfef8,	// (0x0001f745) cell_ituss_key_t

0xaa1f,	// (0x0001a26c) cell_vkbss_key_3p_pane_g1

0xaa27,	// (0x0001a274) cell_vkbss_key_3p_pane_g2

0xaa2f,	// (0x0001a27c) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x0001f74e) cell_vkbss_key_3p_pane_g

0x2295,	// (0x00011ae2) bg_popup_fep_char_preview_window_cp02

0xaa37,	// (0x0001a284) popup_fep_char_pre_window_t1

0xf1ea,	// (0x0001ea37) main_ai5_sk_pane

0xa450,	// (0x00019c9d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa45c,	// (0x00019ca9) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa470,	// (0x00019cbd) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa47c,	// (0x00019cc9) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed7,	// (0x0001f724) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa48f,	// (0x00019cdc) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3194,	// (0x000129e1) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf54b,	// (0x0001ed98) main_ai5_sk_pane_g1

0x4e3e,	// (0x0001468b) popup_query_code_window_g1

0x2208,	// (0x00011a55) popup_fep_vkb_icf_pane

0x221c,	// (0x00011a69) popup_fep_vtchi_icf_pane

0x3194,	// (0x000129e1) bg_icf_pane

0xaa4f,	// (0x0001a29c) list_vkb_icf_pane

0x3194,	// (0x000129e1) bg_icf_pane_cp01

0xaa5b,	// (0x0001a2a8) vtchi_icf_list_pane

0xaa6c,	// (0x0001a2b9) list_vkb_icf_pane_t1_ParamLimits

0xaa6c,	// (0x0001a2b9) list_vkb_icf_pane_t1

0xaa82,	// (0x0001a2cf) vtchi_icf_list_pane_t1_ParamLimits

0xaa82,	// (0x0001a2cf) vtchi_icf_list_pane_t1

0x21f2,	// (0x00011a3f) popup_fep_ituss_window_ParamLimits

0x221c,	// (0x00011a69) popup_fep_vtchi_icf_pane_ParamLimits

0xa875,	// (0x0001a0c2) ituss_keypad_pane_ParamLimits

0x2232,	// (0x00011a7f) ituss_sks_pane

0x3194,	// (0x000129e1) bg_icf_pane_ParamLimits

0x21db,	// (0x00011a28) icf_edit_indi_pane_ParamLimits

0x21db,	// (0x00011a28) icf_edit_indi_pane

0xaa4f,	// (0x0001a29c) list_vkb_icf_pane_ParamLimits

0x3194,	// (0x000129e1) bg_icf_pane_cp01_ParamLimits

0x21db,	// (0x00011a28) icf_edit_indi_pane_cp01_ParamLimits

0x21db,	// (0x00011a28) icf_edit_indi_pane_cp01

0xaa63,	// (0x0001a2b0) vtchi_query_pane

0x763e,	// (0x00016e8b) icf_edit_indi_pane_g1_ParamLimits

0x763e,	// (0x00016e8b) icf_edit_indi_pane_g1

0xab07,	// (0x0001a354) icf_edit_indi_pane_g2_ParamLimits

0xab07,	// (0x0001a354) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x0001f766) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x0001f766) icf_edit_indi_pane_g

0xab16,	// (0x0001a363) icf_edit_indi_pane_t1

0xaa9d,	// (0x0001a2ea) bg_input_focus_pane_cp042

0x2b3e,	// (0x0001238b) vtchi_button_pane

0xaaa6,	// (0x0001a2f3) vtchi_query_pane_t1

0xaab4,	// (0x0001a301) vtchi_query_pane_t2

0xaac2,	// (0x0001a30f) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x0001f755) vtchi_query_pane_t

0x2295,	// (0x00011ae2) bg_button_pane_cp13

0xaad0,	// (0x0001a31d) vtchi_button_pane_g1

0xaad8,	// (0x0001a325) ituss_sks_pane_g1

0xaae3,	// (0x0001a330) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x0001f75c) ituss_sks_pane_g

0xaaeb,	// (0x0001a338) ituss_sks_pane_t1

0xaaf9,	// (0x0001a346) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x0001f761) ituss_sks_pane_t

0x6de8,	// (0x00016635) indicator_nsta_pane_cp_g1

0x6df1,	// (0x0001663e) indicator_nsta_pane_cp_g2

0x6df9,	// (0x00016646) indicator_nsta_pane_cp_g3

0x6e01,	// (0x0001664e) indicator_nsta_pane_cp_g4

0x6e01,	// (0x0001664e) indicator_nsta_pane_cp_g5

0x6e01,	// (0x0001664e) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x0001f302) indicator_nsta_pane_cp_g

0xeffc,	// (0x0001e849) cell_graphic2_pane_t2_ParamLimits

0xeffc,	// (0x0001e849) cell_graphic2_pane_t2

0x0001,

0xfdce,	// (0x0001f61b) cell_graphic2_pane_t_ParamLimits

0xfdce,	// (0x0001f61b) cell_graphic2_pane_t

0xf032,	// (0x0001e87f) cell_graphic2_control_pane_t1

0xd025,	// (0x0001c872) signal_pane_g3_ParamLimits

0xd025,	// (0x0001c872) signal_pane_g3

0xd039,	// (0x0001c886) signal_pane_g4_ParamLimits

0xd039,	// (0x0001c886) signal_pane_g4

0xa84f,	// (0x0001a09c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa84f,	// (0x0001a09c) cell_ai5_widget_list_row_pane_t3

0xa932,	// (0x0001a17f) cell_ituss_key_pane_t1_ParamLimits

0xa932,	// (0x0001a17f) cell_ituss_key_pane_t1

0x4a53,	// (0x000142a0) form_field_data_wide_pane_vc_t2_ParamLimits

0x4a53,	// (0x000142a0) form_field_data_wide_pane_vc_t2

0x4a67,	// (0x000142b4) form_field_data_wide_pane_vc_t3_ParamLimits

0x4a67,	// (0x000142b4) form_field_data_wide_pane_vc_t3

0x0002,

0xf805,	// (0x0001f052) form_field_data_wide_pane_vc_t_ParamLimits

0xf805,	// (0x0001f052) form_field_data_wide_pane_vc_t

0x6aa0,	// (0x000162ed) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6aa0,	// (0x000162ed) form_field_slider_wide_pane_vc_t3

0x6b7e,	// (0x000163cb) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6b7e,	// (0x000163cb) form_field_popup_wide_pane_vc_t2

0x6b95,	// (0x000163e2) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6b95,	// (0x000163e2) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x0001f2f1) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x0001f2f1) form_field_popup_wide_pane_vc_t

0xc4e9,	// (0x0001bd36) aid_fshwr2_btn_pane_ParamLimits

0xc4f8,	// (0x0001bd45) aid_fshwr2_syb_pane_ParamLimits

0xc50a,	// (0x0001bd57) aid_fshwr2_txt_pane_ParamLimits

0x193f,	// (0x0001118c) fshwr2_bg_pane_ParamLimits

0xc519,	// (0x0001bd66) fshwr2_func_candi_pane_ParamLimits

0xc52a,	// (0x0001bd77) fshwr2_hwr_syb_pane_ParamLimits

0xc545,	// (0x0001bd92) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
