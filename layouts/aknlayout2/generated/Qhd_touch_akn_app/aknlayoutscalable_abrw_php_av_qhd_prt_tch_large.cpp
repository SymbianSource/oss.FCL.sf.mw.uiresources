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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003e57b };

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
0xb517,	// (0x00049a92) Screen

0xb523,	// (0x00049a9e) application_window_ParamLimits

0xb523,	// (0x00049a9e) application_window

0x1e0a,	// (0x00040385) screen_g1

0x9279,	// (0x000477f4) area_bottom_pane_ParamLimits

0x9279,	// (0x000477f4) area_bottom_pane

0x9339,	// (0x000478b4) area_top_pane_ParamLimits

0x9339,	// (0x000478b4) area_top_pane

0x93d7,	// (0x00047952) main_pane_ParamLimits

0x93d7,	// (0x00047952) main_pane

0x1e14,	// (0x0004038f) misc_graphics

0xcdeb,	// (0x0004b366) battery_pane_ParamLimits

0xcdeb,	// (0x0004b366) battery_pane

0x5e89,	// (0x00044404) bg_status_flat_pane_g8

0x5e91,	// (0x0004440c) bg_status_flat_pane_g9

0x557b,	// (0x00043af6) context_pane_ParamLimits

0x557b,	// (0x00043af6) context_pane

0xcf1f,	// (0x0004b49a) navi_pane_ParamLimits

0xcf1f,	// (0x0004b49a) navi_pane

0xcf8c,	// (0x0004b507) signal_pane_ParamLimits

0xcf8c,	// (0x0004b507) signal_pane

0x0008,

0xf88f,	// (0x0004de0a) bg_status_flat_pane_g

0xcff1,	// (0x0004b56c) status_pane_g1_ParamLimits

0xcff1,	// (0x0004b56c) status_pane_g1

0xcffd,	// (0x0004b578) status_pane_g2_ParamLimits

0xcffd,	// (0x0004b578) status_pane_g2

0x55e0,	// (0x00043b5b) status_pane_g3_ParamLimits

0x55e0,	// (0x00043b5b) status_pane_g3

0x0004,

0xf7bd,	// (0x0004dd38) status_pane_g_ParamLimits

0xf7bd,	// (0x0004dd38) status_pane_g

0xd009,	// (0x0004b584) title_pane_ParamLimits

0xd009,	// (0x0004b584) title_pane

0xd046,	// (0x0004b5c1) uni_indicator_pane_ParamLimits

0xd046,	// (0x0004b5c1) uni_indicator_pane

0x53a6,	// (0x00043921) bg_list_pane_ParamLimits

0x53a6,	// (0x00043921) bg_list_pane

0xbc27,	// (0x0004a1a2) find_pane

0xc434,	// (0x0004a9af) listscroll_app_pane_ParamLimits

0xc434,	// (0x0004a9af) listscroll_app_pane

0x53c6,	// (0x00043941) listscroll_form_pane

0xbc2f,	// (0x0004a1aa) listscroll_gen_pane_ParamLimits

0xbc2f,	// (0x0004a1aa) listscroll_gen_pane

0x53c6,	// (0x00043941) listscroll_set_pane

0xb928,	// (0x00049ea3) main_idle_act_pane

0x517a,	// (0x000436f5) main_idle_trad_pane

0x517a,	// (0x000436f5) main_list_empty_pane

0x44b4,	// (0x00042a2f) main_midp_pane

0x53e0,	// (0x0004395b) main_pane_g1_ParamLimits

0x53e0,	// (0x0004395b) main_pane_g1

0xc440,	// (0x0004a9bb) popup_ai_message_window_ParamLimits

0xc440,	// (0x0004a9bb) popup_ai_message_window

0xc4be,	// (0x0004aa39) popup_fep_china_uni_window_ParamLimits

0xc4be,	// (0x0004aa39) popup_fep_china_uni_window

0x5416,	// (0x00043991) popup_fep_japan_candidate_window_ParamLimits

0x5416,	// (0x00043991) popup_fep_japan_candidate_window

0x5436,	// (0x000439b1) popup_fep_japan_predictive_window_ParamLimits

0x5436,	// (0x000439b1) popup_fep_japan_predictive_window

0xc51a,	// (0x0004aa95) popup_find_window

0xc527,	// (0x0004aaa2) popup_grid_graphic_window_ParamLimits

0xc527,	// (0x0004aaa2) popup_grid_graphic_window

0x5466,	// (0x000439e1) popup_large_graphic_colour_window

0xc54f,	// (0x0004aaca) popup_menu_window_ParamLimits

0xc54f,	// (0x0004aaca) popup_menu_window

0xcbd4,	// (0x0004b14f) popup_note_image_window

0xc6f3,	// (0x0004ac6e) popup_note_wait_window_ParamLimits

0xc6f3,	// (0x0004ac6e) popup_note_wait_window

0xc6f3,	// (0x0004ac6e) popup_note_window_ParamLimits

0xc6f3,	// (0x0004ac6e) popup_note_window

0xcc2a,	// (0x0004b1a5) popup_query_code_window_ParamLimits

0xcc2a,	// (0x0004b1a5) popup_query_code_window

0x548c,	// (0x00043a07) popup_query_data_code_window_ParamLimits

0x548c,	// (0x00043a07) popup_query_data_code_window

0xcc3e,	// (0x0004b1b9) popup_query_data_window_ParamLimits

0xcc3e,	// (0x0004b1b9) popup_query_data_window

0xcc5a,	// (0x0004b1d5) popup_query_sat_info_window_ParamLimits

0xcc5a,	// (0x0004b1d5) popup_query_sat_info_window

0xcc93,	// (0x0004b20e) popup_snote_single_graphic_window_ParamLimits

0xcc93,	// (0x0004b20e) popup_snote_single_graphic_window

0xcc93,	// (0x0004b20e) popup_snote_single_text_window_ParamLimits

0xcc93,	// (0x0004b20e) popup_snote_single_text_window

0x54a9,	// (0x00043a24) popup_sub_window_general

0x54f1,	// (0x00043a6c) popup_window_general_ParamLimits

0x54f1,	// (0x00043a6c) popup_window_general

0x5506,	// (0x00043a81) power_save_pane

0xa266,	// (0x000487e1) control_pane_g1_ParamLimits

0xa266,	// (0x000487e1) control_pane_g1

0xa28d,	// (0x00048808) control_pane_g2_ParamLimits

0xa28d,	// (0x00048808) control_pane_g2

0x5388,	// (0x00043903) control_pane_g3_ParamLimits

0x5388,	// (0x00043903) control_pane_g3

0x0007,

0xf7a5,	// (0x0004dd20) control_pane_g_ParamLimits

0xf7a5,	// (0x0004dd20) control_pane_g

0xa2d3,	// (0x0004884e) control_pane_t1_ParamLimits

0xa2d3,	// (0x0004884e) control_pane_t1

0xa31f,	// (0x0004889a) control_pane_t2_ParamLimits

0xa31f,	// (0x0004889a) control_pane_t2

0x0002,

0xf7b6,	// (0x0004dd31) control_pane_t_ParamLimits

0xf7b6,	// (0x0004dd31) control_pane_t

0x52a9,	// (0x00043824) navi_navi_volume_pane_cp1

0x52b2,	// (0x0004382d) status_small_icon_pane

0x52ba,	// (0x00043835) status_small_pane_g1_ParamLimits

0x52ba,	// (0x00043835) status_small_pane_g1

0x52ee,	// (0x00043869) status_small_pane_g2_ParamLimits

0x52ee,	// (0x00043869) status_small_pane_g2

0x52fa,	// (0x00043875) status_small_pane_g3_ParamLimits

0x52fa,	// (0x00043875) status_small_pane_g3

0x5306,	// (0x00043881) status_small_pane_g4_ParamLimits

0x5306,	// (0x00043881) status_small_pane_g4

0x5312,	// (0x0004388d) status_small_pane_g5_ParamLimits

0x5312,	// (0x0004388d) status_small_pane_g5

0x5321,	// (0x0004389c) status_small_pane_g6_ParamLimits

0x5321,	// (0x0004389c) status_small_pane_g6

0x0007,

0xf794,	// (0x0004dd0f) status_small_pane_g_ParamLimits

0xf794,	// (0x0004dd0f) status_small_pane_g

0x5351,	// (0x000438cc) status_small_pane_t1

0x5374,	// (0x000438ef) status_small_wait_pane_ParamLimits

0x5374,	// (0x000438ef) status_small_wait_pane

0xba07,	// (0x00049f82) aid_levels_signal_ParamLimits

0xba07,	// (0x00049f82) aid_levels_signal

0xba16,	// (0x00049f91) signal_pane_g1_ParamLimits

0xba16,	// (0x00049f91) signal_pane_g1

0xba2b,	// (0x00049fa6) signal_pane_g2_ParamLimits

0xba2b,	// (0x00049fa6) signal_pane_g2

0x0003,

0xf725,	// (0x0004dca0) signal_pane_g_ParamLimits

0xf725,	// (0x0004dca0) signal_pane_g

0x4bd5,	// (0x00043150) context_pane_g1

0xb533,	// (0x00049aae) title_pane_g1

0xb55d,	// (0x00049ad8) title_pane_t1

0x1e2a,	// (0x000403a5) title_pane_t2

0x1e50,	// (0x000403cb) title_pane_t3

0x0002,

0xf56f,	// (0x0004daea) title_pane_t

0xd05e,	// (0x0004b5d9) aid_levels_battery_ParamLimits

0xd05e,	// (0x0004b5d9) aid_levels_battery

0xd06f,	// (0x0004b5ea) battery_pane_g1_ParamLimits

0xd06f,	// (0x0004b5ea) battery_pane_g1

0xd085,	// (0x0004b600) battery_pane_g2_ParamLimits

0xd085,	// (0x0004b600) battery_pane_g2

0x0001,

0xf7c8,	// (0x0004dd43) battery_pane_g_ParamLimits

0xf7c8,	// (0x0004dd43) battery_pane_g

0x6710,	// (0x00044c8b) uni_indicator_pane_g1

0x6725,	// (0x00044ca0) uni_indicator_pane_g2

0x673b,	// (0x00044cb6) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x0004deb2) uni_indicator_pane_g

0x4ff8,	// (0x00043573) navi_icon_pane_ParamLimits

0x4ff8,	// (0x00043573) navi_icon_pane

0x4f41,	// (0x000434bc) navi_midp_pane

0x5014,	// (0x0004358f) navi_navi_pane

0x501e,	// (0x00043599) navi_text_pane_ParamLimits

0x501e,	// (0x00043599) navi_text_pane

0x1e0a,	// (0x00040385) status_small_wait_pane_g1

0x29ad,	// (0x00040f28) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x0004dead) status_small_wait_pane_g

0x645c,	// (0x000449d7) navi_navi_icon_text_pane

0x6476,	// (0x000449f1) navi_navi_pane_g1_ParamLimits

0x6476,	// (0x000449f1) navi_navi_pane_g1

0x6464,	// (0x000449df) navi_navi_pane_g2_ParamLimits

0x6464,	// (0x000449df) navi_navi_pane_g2

0x0001,

0xf900,	// (0x0004de7b) navi_navi_pane_g_ParamLimits

0xf900,	// (0x0004de7b) navi_navi_pane_g

0x6488,	// (0x00044a03) navi_navi_tabs_pane

0x6491,	// (0x00044a0c) navi_navi_text_pane

0x645c,	// (0x000449d7) navi_navi_volume_pane

0x6438,	// (0x000449b3) navi_text_pane_t1

0x642c,	// (0x000449a7) navi_icon_pane_g1

0x637f,	// (0x000448fa) navi_navi_text_pane_t1

0xa643,	// (0x00048bbe) navi_navi_volume_pane_g1

0xa64b,	// (0x00048bc6) volume_small_pane

0xd1ea,	// (0x0004b765) navi_navi_icon_text_pane_g1

0xd1f2,	// (0x0004b76d) navi_navi_icon_text_pane_t1

0x5014,	// (0x0004358f) navi_tabs_2_long_pane

0x5014,	// (0x0004358f) navi_tabs_2_pane

0x5014,	// (0x0004358f) navi_tabs_3_long_pane

0x5014,	// (0x0004358f) navi_tabs_3_pane

0x5014,	// (0x0004358f) navi_tabs_4_pane

0xa623,	// (0x00048b9e) tabs_2_active_pane_ParamLimits

0xa623,	// (0x00048b9e) tabs_2_active_pane

0xa633,	// (0x00048bae) tabs_2_passive_pane_ParamLimits

0xa633,	// (0x00048bae) tabs_2_passive_pane

0xa5f1,	// (0x00048b6c) tabs_3_active_pane_ParamLimits

0xa5f1,	// (0x00048b6c) tabs_3_active_pane

0xa601,	// (0x00048b7c) tabs_3_passive_pane_ParamLimits

0xa601,	// (0x00048b7c) tabs_3_passive_pane

0xa612,	// (0x00048b8d) tabs_3_passive_pane_cp_ParamLimits

0xa612,	// (0x00048b8d) tabs_3_passive_pane_cp

0xa5ad,	// (0x00048b28) tabs_4_active_pane_ParamLimits

0xa5ad,	// (0x00048b28) tabs_4_active_pane

0xa5be,	// (0x00048b39) tabs_4_passive_pane_ParamLimits

0xa5be,	// (0x00048b39) tabs_4_passive_pane

0xa5cf,	// (0x00048b4a) tabs_4_passive_pane_cp_ParamLimits

0xa5cf,	// (0x00048b4a) tabs_4_passive_pane_cp

0xa5e0,	// (0x00048b5b) tabs_4_passive_pane_cp2_ParamLimits

0xa5e0,	// (0x00048b5b) tabs_4_passive_pane_cp2

0xa589,	// (0x00048b04) tabs_2_long_active_pane_ParamLimits

0xa589,	// (0x00048b04) tabs_2_long_active_pane

0xa59b,	// (0x00048b16) tabs_2_long_passive_pane_ParamLimits

0xa59b,	// (0x00048b16) tabs_2_long_passive_pane

0xa54a,	// (0x00048ac5) tabs_3_long_active_pane_ParamLimits

0xa54a,	// (0x00048ac5) tabs_3_long_active_pane

0xa55d,	// (0x00048ad8) tabs_3_long_passive_pane_ParamLimits

0xa55d,	// (0x00048ad8) tabs_3_long_passive_pane

0xa576,	// (0x00048af1) tabs_3_long_passive_pane_cp_ParamLimits

0xa576,	// (0x00048af1) tabs_3_long_passive_pane_cp

0xa4f0,	// (0x00048a6b) volume_small_pane_g1

0xa4f9,	// (0x00048a74) volume_small_pane_g2

0xa502,	// (0x00048a7d) volume_small_pane_g3

0xa50b,	// (0x00048a86) volume_small_pane_g4

0xa514,	// (0x00048a8f) volume_small_pane_g5

0xa51d,	// (0x00048a98) volume_small_pane_g6

0xa526,	// (0x00048aa1) volume_small_pane_g7

0xa52f,	// (0x00048aaa) volume_small_pane_g8

0xa538,	// (0x00048ab3) volume_small_pane_g9

0xa541,	// (0x00048abc) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x0004de47) volume_small_pane_g

0x1e70,	// (0x000403eb) bg_active_tab_pane_cp2_ParamLimits

0x1e70,	// (0x000403eb) bg_active_tab_pane_cp2

0xb5c5,	// (0x00049b40) tabs_3_active_pane_g1

0xb5cd,	// (0x00049b48) tabs_3_active_pane_t1

0x1e70,	// (0x000403eb) bg_passive_tab_pane_cp2_ParamLimits

0x1e70,	// (0x000403eb) bg_passive_tab_pane_cp2

0xb5c5,	// (0x00049b40) tabs_3_passive_pane_g1

0xb5cd,	// (0x00049b48) tabs_3_passive_pane_t1

0x1e70,	// (0x000403eb) bg_active_tab_pane_cp3_ParamLimits

0x1e70,	// (0x000403eb) bg_active_tab_pane_cp3

0xb5df,	// (0x00049b5a) tabs_4_active_pane_g1

0xb5e7,	// (0x00049b62) tabs_4_active_pane_t1

0x1e70,	// (0x000403eb) bg_passive_tab_pane_cp3_ParamLimits

0x1e70,	// (0x000403eb) bg_passive_tab_pane_cp3

0xb5df,	// (0x00049b5a) tabs_4_1_passive_pane_g1

0xb5e7,	// (0x00049b62) tabs_4_1_passive_pane_t1

0x44b4,	// (0x00042a2f) list_highlight_pane_cp2

0xd300,	// (0x0004b87b) list_set_pane_ParamLimits

0xd300,	// (0x0004b87b) list_set_pane

0xd3a6,	// (0x0004b921) main_pane_set_t1_ParamLimits

0xd3a6,	// (0x0004b921) main_pane_set_t1

0xd3c6,	// (0x0004b941) main_pane_set_t2_ParamLimits

0xd3c6,	// (0x0004b941) main_pane_set_t2

0xd3da,	// (0x0004b955) main_pane_set_t3_ParamLimits

0xd3da,	// (0x0004b955) main_pane_set_t3

0xd3ec,	// (0x0004b967) main_pane_set_t4_ParamLimits

0xd3ec,	// (0x0004b967) main_pane_set_t4

0x0003,

0xf99c,	// (0x0004df17) main_pane_set_t_ParamLimits

0xf99c,	// (0x0004df17) main_pane_set_t

0xd3fe,	// (0x0004b979) setting_code_pane

0xd40a,	// (0x0004b985) setting_slider_graphic_pane

0xd40a,	// (0x0004b985) setting_slider_pane

0xd40a,	// (0x0004b985) setting_text_pane

0xd40a,	// (0x0004b985) setting_volume_pane

0x961c,	// (0x00047b97) volume_set_pane

0x1e70,	// (0x000403eb) bg_set_opt_pane_cp

0x9624,	// (0x00047b9f) setting_slider_pane_t1

0x963d,	// (0x00047bb8) setting_slider_pane_t2

0x9657,	// (0x00047bd2) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0004daf1) setting_slider_pane_t

0x966f,	// (0x00047bea) slider_set_pane

0x1e14,	// (0x0004038f) bg_set_opt_pane_cp2

0x1e7e,	// (0x000403f9) setting_slider_graphic_pane_g1

0x9685,	// (0x00047c00) setting_slider_graphic_pane_t1

0x9695,	// (0x00047c10) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0004daf8) setting_slider_graphic_pane_t

0x96a5,	// (0x00047c20) slider_set_pane_cp

0x1e14,	// (0x0004038f) input_focus_pane_cp1

0x691e,	// (0x00044e99) list_set_text_pane

0x1e0a,	// (0x00040385) setting_text_pane_g1

0x1e14,	// (0x0004038f) input_focus_pane_cp2

0x1e0a,	// (0x00040385) setting_code_pane_g1

0x1e87,	// (0x00040402) setting_code_pane_t1

0x96ad,	// (0x00047c28) set_text_pane_t1_ParamLimits

0x96ad,	// (0x00047c28) set_text_pane_t1

0x43c3,	// (0x0004293e) set_opt_bg_pane_g1

0x43cb,	// (0x00042946) set_opt_bg_pane_g2

0x68f8,	// (0x00044e73) set_opt_bg_pane_g3

0x43db,	// (0x00042956) set_opt_bg_pane_g4

0x43e3,	// (0x0004295e) set_opt_bg_pane_g5

0x43eb,	// (0x00042966) set_opt_bg_pane_g6

0x6902,	// (0x00044e7d) set_opt_bg_pane_g7

0x690a,	// (0x00044e85) set_opt_bg_pane_g8

0x6914,	// (0x00044e8f) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x0004df04) set_opt_bg_pane_g

0x68eb,	// (0x00044e66) slider_set_pane_g1

0xa6b8,	// (0x00048c33) slider_set_pane_g2

0x0006,

0xf97a,	// (0x0004def5) slider_set_pane_g

0xa654,	// (0x00048bcf) volume_set_pane_g1

0xa65c,	// (0x00048bd7) volume_set_pane_g2

0xa664,	// (0x00048bdf) volume_set_pane_g3

0xa66c,	// (0x00048be7) volume_set_pane_g4

0xa674,	// (0x00048bef) volume_set_pane_g5

0xa67c,	// (0x00048bf7) volume_set_pane_g6

0xa684,	// (0x00048bff) volume_set_pane_g7

0xa68c,	// (0x00048c07) volume_set_pane_g8

0xa694,	// (0x00048c0f) volume_set_pane_g9

0xa69c,	// (0x00048c17) volume_set_pane_g10

0x0009,

0xf952,	// (0x0004decd) volume_set_pane_g

0xb5f9,	// (0x00049b74) indicator_pane_ParamLimits

0xb5f9,	// (0x00049b74) indicator_pane

0xb605,	// (0x00049b80) main_idle_pane_g2_ParamLimits

0xb605,	// (0x00049b80) main_idle_pane_g2

0xb62d,	// (0x00049ba8) main_pane_idle_g1_ParamLimits

0xb62d,	// (0x00049ba8) main_pane_idle_g1

0x1e95,	// (0x00040410) popup_clock_digital_analogue_window_ParamLimits

0x1e95,	// (0x00040410) popup_clock_digital_analogue_window

0xb63a,	// (0x00049bb5) soft_indicator_pane_ParamLimits

0xb63a,	// (0x00049bb5) soft_indicator_pane

0xb646,	// (0x00049bc1) wallpaper_pane_ParamLimits

0xb646,	// (0x00049bc1) wallpaper_pane

0x1e0a,	// (0x00040385) wallpaper_pane_g1

0xb652,	// (0x00049bcd) indicator_pane_g1_ParamLimits

0xb652,	// (0x00049bcd) indicator_pane_g1

0x6a75,	// (0x00044ff0) navi_navi_icon_text_pane_srt_g1

0x1ec3,	// (0x0004043e) soft_indicator_pane_t1

0x1edd,	// (0x00040458) aid_ps_area_pane

0xb65e,	// (0x00049bd9) aid_ps_clock_pane

0x1eee,	// (0x00040469) aid_ps_indicator_pane

0x1efa,	// (0x00040475) indicator_ps_pane_ParamLimits

0x1efa,	// (0x00040475) indicator_ps_pane

0x1f09,	// (0x00040484) power_save_pane_g1_ParamLimits

0x1f09,	// (0x00040484) power_save_pane_g1

0x1f15,	// (0x00040490) power_save_pane_g2_ParamLimits

0x1f15,	// (0x00040490) power_save_pane_g2

0x922d,	// (0x000477a8) aid_navinavi_width_pane

0x1edd,	// (0x00040458) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x0004dafd) power_save_pane_g_ParamLimits

0xf582,	// (0x0004dafd) power_save_pane_g

0x1f23,	// (0x0004049e) power_save_pane_t1_ParamLimits

0x1f23,	// (0x0004049e) power_save_pane_t1

0xb65e,	// (0x00049bd9) aid_ps_clock_pane_ParamLimits

0x1eee,	// (0x00040469) aid_ps_indicator_pane_ParamLimits

0x1f35,	// (0x000404b0) power_save_pane_t4_ParamLimits

0x1f35,	// (0x000404b0) power_save_pane_t4

0x0001,

0xf587,	// (0x0004db02) power_save_pane_t_ParamLimits

0xf587,	// (0x0004db02) power_save_pane_t

0x1f5f,	// (0x000404da) power_save_t3_ParamLimits

0x1f5f,	// (0x000404da) power_save_t3

0x1f4a,	// (0x000404c5) power_save_t2_ParamLimits

0x1f4a,	// (0x000404c5) power_save_t2

0x1f74,	// (0x000404ef) indicator_ps_pane_g1

0xb66c,	// (0x00049be7) ai_gene_pane_ParamLimits

0xb66c,	// (0x00049be7) ai_gene_pane

0xb678,	// (0x00049bf3) ai_links_pane_ParamLimits

0xb678,	// (0x00049bf3) ai_links_pane

0xb684,	// (0x00049bff) indicator_pane_cp1_ParamLimits

0xb684,	// (0x00049bff) indicator_pane_cp1

0xb690,	// (0x00049c0b) main_pane_idle_g1_cp_ParamLimits

0xb690,	// (0x00049c0b) main_pane_idle_g1_cp

0x1f7d,	// (0x000404f8) popup_ai_links_title_window

0xb69c,	// (0x00049c17) soft_indicator_pane_cp1_ParamLimits

0xb69c,	// (0x00049c17) soft_indicator_pane_cp1

0x66fe,	// (0x00044c79) ai_links_pane_g1

0x6707,	// (0x00044c82) grid_ai_links_pane

0xd294,	// (0x0004b80f) ai_gene_pane_1

0x66ec,	// (0x00044c67) ai_gene_pane_2

0x66f5,	// (0x00044c70) list_highlight_pane_cp4

0xd278,	// (0x0004b7f3) cell_ai_link_pane_ParamLimits

0xd278,	// (0x0004b7f3) cell_ai_link_pane

0x66e4,	// (0x00044c5f) cell_ai_link_pane_g1

0x29ad,	// (0x00040f28) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x0004dea8) cell_ai_link_pane_g

0x1e14,	// (0x0004038f) grid_highlight_cp2

0x1e14,	// (0x0004038f) bg_popup_sub_pane_cp1

0x1f94,	// (0x0004050f) popup_ai_links_title_window_t1

0x6632,	// (0x00044bad) ai_gene_pane_1_g1_ParamLimits

0x6632,	// (0x00044bad) ai_gene_pane_1_g1

0x663e,	// (0x00044bb9) ai_gene_pane_1_g2_ParamLimits

0x663e,	// (0x00044bb9) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x0004de9e) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x0004de9e) ai_gene_pane_1_g

0x664b,	// (0x00044bc6) ai_gene_pane_1_t1_ParamLimits

0x664b,	// (0x00044bc6) ai_gene_pane_1_t1

0x667f,	// (0x00044bfa) grid_ai_soft_ind_pane

0x661d,	// (0x00044b98) ai_gene_pane_2_t1_ParamLimits

0x661d,	// (0x00044b98) ai_gene_pane_2_t1

0xb6a8,	// (0x00049c23) main_pane_empty_t1_ParamLimits

0xb6a8,	// (0x00049c23) main_pane_empty_t1

0xb6c0,	// (0x00049c3b) main_pane_empty_t2_ParamLimits

0xb6c0,	// (0x00049c3b) main_pane_empty_t2

0xb6d5,	// (0x00049c50) main_pane_empty_t3_ParamLimits

0xb6d5,	// (0x00049c50) main_pane_empty_t3

0xb6e7,	// (0x00049c62) main_pane_empty_t4_ParamLimits

0xb6e7,	// (0x00049c62) main_pane_empty_t4

0xb6f9,	// (0x00049c74) main_pane_empty_t5_ParamLimits

0xb6f9,	// (0x00049c74) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0004db07) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0004db07) main_pane_empty_t

0x4414,	// (0x0004298f) bg_popup_window_pane_ParamLimits

0x4414,	// (0x0004298f) bg_popup_window_pane

0x638d,	// (0x00044908) find_popup_pane_cp2_ParamLimits

0x638d,	// (0x00044908) find_popup_pane_cp2

0x6399,	// (0x00044914) heading_pane_ParamLimits

0x6399,	// (0x00044914) heading_pane

0x1e14,	// (0x0004038f) bg_popup_sub_pane

0xd20c,	// (0x0004b787) bg_popup_window_pane_g1_ParamLimits

0xd20c,	// (0x0004b787) bg_popup_window_pane_g1

0xd218,	// (0x0004b793) bg_popup_window_pane_g2_ParamLimits

0xd218,	// (0x0004b793) bg_popup_window_pane_g2

0xd224,	// (0x0004b79f) bg_popup_window_pane_g3_ParamLimits

0xd224,	// (0x0004b79f) bg_popup_window_pane_g3

0xd230,	// (0x0004b7ab) bg_popup_window_pane_g4_ParamLimits

0xd230,	// (0x0004b7ab) bg_popup_window_pane_g4

0xd23c,	// (0x0004b7b7) bg_popup_window_pane_g5_ParamLimits

0xd23c,	// (0x0004b7b7) bg_popup_window_pane_g5

0xd248,	// (0x0004b7c3) bg_popup_window_pane_g6_ParamLimits

0xd248,	// (0x0004b7c3) bg_popup_window_pane_g6

0xd254,	// (0x0004b7cf) bg_popup_window_pane_g7_ParamLimits

0xd254,	// (0x0004b7cf) bg_popup_window_pane_g7

0xd260,	// (0x0004b7db) bg_popup_window_pane_g8_ParamLimits

0xd260,	// (0x0004b7db) bg_popup_window_pane_g8

0xd26c,	// (0x0004b7e7) bg_popup_window_pane_g9_ParamLimits

0xd26c,	// (0x0004b7e7) bg_popup_window_pane_g9

0x6373,	// (0x000448ee) bg_popup_window_pane_g10_ParamLimits

0x6373,	// (0x000448ee) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x0004de66) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x0004de66) bg_popup_window_pane_g

0x632a,	// (0x000448a5) bg_popup_heading_pane_ParamLimits

0x632a,	// (0x000448a5) bg_popup_heading_pane

0xa740,	// (0x00048cbb) tabs_4_passive_pane_cp_srt_ParamLimits

0xa740,	// (0x00048cbb) tabs_4_passive_pane_cp_srt

0xa752,	// (0x00048ccd) tabs_4_passive_pane_srt_ParamLimits

0x633e,	// (0x000448b9) heading_pane_g2

0xa752,	// (0x00048ccd) tabs_4_passive_pane_srt

0x44b4,	// (0x00042a2f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x44b4,	// (0x00042a2f) bg_passive_tab_pane_cp3_srt

0x6346,	// (0x000448c1) heading_pane_t1_ParamLimits

0x6346,	// (0x000448c1) heading_pane_t1

0x635d,	// (0x000448d8) heading_pane_t2_ParamLimits

0x635d,	// (0x000448d8) heading_pane_t2

0x0001,

0xf8e6,	// (0x0004de61) heading_pane_t_ParamLimits

0xf8e6,	// (0x0004de61) heading_pane_t

0x5e51,	// (0x000443cc) bg_popup_heading_pane_g1

0x5ee2,	// (0x0004445d) bg_popup_heading_pane_g2

0x5eec,	// (0x00044467) bg_popup_heading_pane_g3

0x5ef6,	// (0x00044471) bg_popup_heading_pane_g4

0x5f00,	// (0x0004447b) bg_popup_heading_pane_g5

0x5f0a,	// (0x00044485) bg_popup_heading_pane_g6

0x5f12,	// (0x0004448d) bg_popup_heading_pane_g7

0x5f1a,	// (0x00044495) bg_popup_heading_pane_g8

0x5f24,	// (0x0004449f) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x0004de1d) bg_popup_heading_pane_g

0x56d6,	// (0x00043c51) bg_popup_sub_pane_g1

0x56de,	// (0x00043c59) bg_popup_sub_pane_g2

0x56e6,	// (0x00043c61) bg_popup_sub_pane_g3

0x56ee,	// (0x00043c69) bg_popup_sub_pane_g4

0x56f6,	// (0x00043c71) bg_popup_sub_pane_g5

0x56fe,	// (0x00043c79) bg_popup_sub_pane_g6

0x5706,	// (0x00043c81) bg_popup_sub_pane_g7

0x570e,	// (0x00043c89) bg_popup_sub_pane_g8

0x5716,	// (0x00043c91) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x0004ddf7) bg_popup_sub_pane_g

0x1e62,	// (0x000403dd) bg_popup_window_pane_cp5_ParamLimits

0x1e62,	// (0x000403dd) bg_popup_window_pane_cp5

0x1fb1,	// (0x0004052c) popup_note_window_g1_ParamLimits

0x1fb1,	// (0x0004052c) popup_note_window_g1

0x1fbd,	// (0x00040538) popup_note_window_t1_ParamLimits

0x1fbd,	// (0x00040538) popup_note_window_t1

0x1fd3,	// (0x0004054e) popup_note_window_t2_ParamLimits

0x1fd3,	// (0x0004054e) popup_note_window_t2

0x1fe9,	// (0x00040564) popup_note_window_t3_ParamLimits

0x1fe9,	// (0x00040564) popup_note_window_t3

0x1fff,	// (0x0004057a) popup_note_window_t4_ParamLimits

0x1fff,	// (0x0004057a) popup_note_window_t4

0x2027,	// (0x000405a2) popup_note_window_t5_ParamLimits

0x2027,	// (0x000405a2) popup_note_window_t5

0x0004,

0xf597,	// (0x0004db12) popup_note_window_t_ParamLimits

0xf597,	// (0x0004db12) popup_note_window_t

0x204b,	// (0x000405c6) bg_popup_window_pane_cp6_ParamLimits

0x204b,	// (0x000405c6) bg_popup_window_pane_cp6

0x5dcd,	// (0x00044348) popup_note_image_window_g1_ParamLimits

0x5dcd,	// (0x00044348) popup_note_image_window_g1

0x5dd9,	// (0x00044354) popup_note_image_window_g2_ParamLimits

0x5dd9,	// (0x00044354) popup_note_image_window_g2

0x0001,

0xf870,	// (0x0004ddeb) popup_note_image_window_g_ParamLimits

0xf870,	// (0x0004ddeb) popup_note_image_window_g

0x5df2,	// (0x0004436d) popup_note_image_window_t1_ParamLimits

0x5df2,	// (0x0004436d) popup_note_image_window_t1

0x5e0b,	// (0x00044386) popup_note_image_window_t2_ParamLimits

0x5e0b,	// (0x00044386) popup_note_image_window_t2

0x5e24,	// (0x0004439f) popup_note_image_window_t3_ParamLimits

0x5e24,	// (0x0004439f) popup_note_image_window_t3

0x0002,

0xf875,	// (0x0004ddf0) popup_note_image_window_t_ParamLimits

0xf875,	// (0x0004ddf0) popup_note_image_window_t

0x5caa,	// (0x00044225) bg_popup_window_pane_cp7_ParamLimits

0x5caa,	// (0x00044225) bg_popup_window_pane_cp7

0x5cda,	// (0x00044255) popup_note_wait_window_g1_ParamLimits

0x5cda,	// (0x00044255) popup_note_wait_window_g1

0x5ce6,	// (0x00044261) popup_note_wait_window_g2_ParamLimits

0x5ce6,	// (0x00044261) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x0004ddd9) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x0004ddd9) popup_note_wait_window_g

0x5cfe,	// (0x00044279) popup_note_wait_window_t1_ParamLimits

0x5cfe,	// (0x00044279) popup_note_wait_window_t1

0x5d25,	// (0x000442a0) popup_note_wait_window_t2_ParamLimits

0x5d25,	// (0x000442a0) popup_note_wait_window_t2

0x5d42,	// (0x000442bd) popup_note_wait_window_t3_ParamLimits

0x5d42,	// (0x000442bd) popup_note_wait_window_t3

0x5d55,	// (0x000442d0) popup_note_wait_window_t4_ParamLimits

0x5d55,	// (0x000442d0) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x0004dde0) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x0004dde0) popup_note_wait_window_t

0x5d7a,	// (0x000442f5) wait_bar_pane_ParamLimits

0x5d7a,	// (0x000442f5) wait_bar_pane

0x1e14,	// (0x0004038f) wait_anim_pane

0x1e14,	// (0x0004038f) wait_border_pane

0x1e0a,	// (0x00040385) wait_anim_pane_g1

0x1e0a,	// (0x00040385) wait_anim_pane_g2

0x0001,

0xf720,	// (0x0004dc9b) wait_anim_pane_g

0x5c24,	// (0x0004419f) wait_border_pane_g1

0x5c2f,	// (0x000441aa) wait_border_pane_g2

0x5c38,	// (0x000441b3) wait_border_pane_g3

0x0002,

0xf857,	// (0x0004ddd2) wait_border_pane_g

0x5a8f,	// (0x0004400a) bg_popup_window_pane_cp16_ParamLimits

0x5a8f,	// (0x0004400a) bg_popup_window_pane_cp16

0x5b8f,	// (0x0004410a) indicator_popup_pane_cp4_ParamLimits

0x5b8f,	// (0x0004410a) indicator_popup_pane_cp4

0x5ba3,	// (0x0004411e) popup_query_data_window_t1_ParamLimits

0x5ba3,	// (0x0004411e) popup_query_data_window_t1

0x5bb5,	// (0x00044130) popup_query_data_window_t2_ParamLimits

0x5bb5,	// (0x00044130) popup_query_data_window_t2

0x5bce,	// (0x00044149) popup_query_data_window_t3_ParamLimits

0x5bce,	// (0x00044149) popup_query_data_window_t3

0x0002,

0xf850,	// (0x0004ddcb) popup_query_data_window_t_ParamLimits

0xf850,	// (0x0004ddcb) popup_query_data_window_t

0x5be8,	// (0x00044163) query_popup_data_pane_ParamLimits

0x5be8,	// (0x00044163) query_popup_data_pane

0x5bfc,	// (0x00044177) query_popup_data_pane_cp1_ParamLimits

0x5bfc,	// (0x00044177) query_popup_data_pane_cp1

0x5a8f,	// (0x0004400a) bg_popup_window_pane_cp10_ParamLimits

0x5a8f,	// (0x0004400a) bg_popup_window_pane_cp10

0x5ac1,	// (0x0004403c) indicator_popup_pane_ParamLimits

0x5ac1,	// (0x0004403c) indicator_popup_pane

0x5ae3,	// (0x0004405e) popup_query_code_window_t1_ParamLimits

0x5ae3,	// (0x0004405e) popup_query_code_window_t1

0x5afd,	// (0x00044078) popup_query_code_window_t2_ParamLimits

0x5afd,	// (0x00044078) popup_query_code_window_t2

0x5b46,	// (0x000440c1) popup_query_code_window_t3_ParamLimits

0x5b46,	// (0x000440c1) popup_query_code_window_t3

0x0002,

0xf849,	// (0x0004ddc4) popup_query_code_window_t_ParamLimits

0xf849,	// (0x0004ddc4) popup_query_code_window_t

0x5b75,	// (0x000440f0) query_popup_pane_ParamLimits

0x5b75,	// (0x000440f0) query_popup_pane

0x204b,	// (0x000405c6) bg_popup_window_pane_cp15_ParamLimits

0x204b,	// (0x000405c6) bg_popup_window_pane_cp15

0x2069,	// (0x000405e4) indicator_popup_pane_cp1_ParamLimits

0x2069,	// (0x000405e4) indicator_popup_pane_cp1

0x28f2,	// (0x00040e6d) indicator_popup_pane_cp2_ParamLimits

0x28f2,	// (0x00040e6d) indicator_popup_pane_cp2

0x2905,	// (0x00040e80) popup_query_data_code_window_g1_ParamLimits

0x2905,	// (0x00040e80) popup_query_data_code_window_g1

0x2918,	// (0x00040e93) popup_query_data_code_window_t1_ParamLimits

0x2918,	// (0x00040e93) popup_query_data_code_window_t1

0x292a,	// (0x00040ea5) popup_query_data_code_window_t2_ParamLimits

0x292a,	// (0x00040ea5) popup_query_data_code_window_t2

0x293c,	// (0x00040eb7) popup_query_data_code_window_t3_ParamLimits

0x293c,	// (0x00040eb7) popup_query_data_code_window_t3

0x2952,	// (0x00040ecd) popup_query_data_code_window_t4_ParamLimits

0x2952,	// (0x00040ecd) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x0004db1d) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x0004db1d) popup_query_data_code_window_t

0xa401,	// (0x0004897c) list_single_midp_graphic_pane_g3

0x296a,	// (0x00040ee5) query_popup_data_pane_cp2_ParamLimits

0x297d,	// (0x00040ef8) query_popup_pane_cp2_ParamLimits

0x297d,	// (0x00040ef8) query_popup_pane_cp2

0x1e14,	// (0x0004038f) bg_popup_window_pane_cp11

0x5a87,	// (0x00044002) heading_pane_cp5

0x2a0b,	// (0x00040f86) listscroll_popup_info_pane

0x1e14,	// (0x0004038f) input_focus_pane_cp3

0x2990,	// (0x00040f0b) query_popup_pane_t1

0x299e,	// (0x00040f19) list_popup_info_pane_ParamLimits

0x299e,	// (0x00040f19) list_popup_info_pane

0x29ad,	// (0x00040f28) listscroll_popup_info_pane_g1

0x29b5,	// (0x00040f30) scroll_pane_cp7

0x29bf,	// (0x00040f3a) popup_info_list_pane_t1_ParamLimits

0x29bf,	// (0x00040f3a) popup_info_list_pane_t1

0x29d9,	// (0x00040f54) popup_info_list_pane_t2_ParamLimits

0x29d9,	// (0x00040f54) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0004db26) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0004db26) popup_info_list_pane_t

0x1e14,	// (0x0004038f) bg_popup_window_pane_cp12

0x6a8f,	// (0x0004500a) find_popup_pane

0x1e70,	// (0x000403eb) bg_popup_window_pane_cp3

0x29f3,	// (0x00040f6e) heading_pane_cp3

0x29ff,	// (0x00040f7a) listscroll_popup_graphic_pane

0x1e14,	// (0x0004038f) bg_popup_window_pane_cp4

0xb75d,	// (0x00049cd8) heading_pane_cp4

0x2a0b,	// (0x00040f86) listscroll_popup_colour_pane

0xb767,	// (0x00049ce2) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb767,	// (0x00049ce2) cell_large_graphic_colour_none_popup_pane

0xb77b,	// (0x00049cf6) grid_large_graphic_colour_popup_pane_ParamLimits

0xb77b,	// (0x00049cf6) grid_large_graphic_colour_popup_pane

0xb7a7,	// (0x00049d22) listscroll_popup_colour_pane_g1_ParamLimits

0xb7a7,	// (0x00049d22) listscroll_popup_colour_pane_g1

0xb7be,	// (0x00049d39) listscroll_popup_colour_pane_g2_ParamLimits

0xb7be,	// (0x00049d39) listscroll_popup_colour_pane_g2

0xb7d5,	// (0x00049d50) listscroll_popup_colour_pane_g3_ParamLimits

0xb7d5,	// (0x00049d50) listscroll_popup_colour_pane_g3

0xb7e5,	// (0x00049d60) listscroll_popup_colour_pane_g4_ParamLimits

0xb7e5,	// (0x00049d60) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x0004db2b) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x0004db2b) listscroll_popup_colour_pane_g

0x2a13,	// (0x00040f8e) scroll_pane_cp6_ParamLimits

0x2a13,	// (0x00040f8e) scroll_pane_cp6

0xb7f9,	// (0x00049d74) cell_large_graphic_colour_popup_pane_ParamLimits

0xb7f9,	// (0x00049d74) cell_large_graphic_colour_popup_pane

0x2a25,	// (0x00040fa0) cell_large_graphic_colour_none_popup_pane_t1

0x1e14,	// (0x0004038f) grid_highlight_pane_cp5

0x2a34,	// (0x00040faf) cell_large_graphic_colour_popup_pane_g1

0x2a3c,	// (0x00040fb7) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0004db34) cell_large_graphic_colour_popup_pane_g

0x2a44,	// (0x00040fbf) cell_large_graphic_colour_popup_pane_g2_copy1

0x2a4d,	// (0x00040fc8) grid_highlight_pane_cp4

0x2a55,	// (0x00040fd0) bg_popup_window_pane_cp8_ParamLimits

0x2a55,	// (0x00040fd0) bg_popup_window_pane_cp8

0x2a70,	// (0x00040feb) popup_snote_single_text_window_g1_ParamLimits

0x2a70,	// (0x00040feb) popup_snote_single_text_window_g1

0x2a82,	// (0x00040ffd) popup_snote_single_text_window_t1_ParamLimits

0x2a82,	// (0x00040ffd) popup_snote_single_text_window_t1

0x2a95,	// (0x00041010) popup_snote_single_text_window_t2_ParamLimits

0x2a95,	// (0x00041010) popup_snote_single_text_window_t2

0x2aa8,	// (0x00041023) popup_snote_single_text_window_t3_ParamLimits

0x2aa8,	// (0x00041023) popup_snote_single_text_window_t3

0x2ae1,	// (0x0004105c) popup_snote_single_text_window_t4_ParamLimits

0x2ae1,	// (0x0004105c) popup_snote_single_text_window_t4

0x2b15,	// (0x00041090) popup_snote_single_text_window_t5_ParamLimits

0x2b15,	// (0x00041090) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0004db39) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0004db39) popup_snote_single_text_window_t

0x2b44,	// (0x000410bf) bg_popup_window_pane_cp9_ParamLimits

0x2b44,	// (0x000410bf) bg_popup_window_pane_cp9

0x2a70,	// (0x00040feb) popup_snote_single_graphic_window_g1_ParamLimits

0x2a70,	// (0x00040feb) popup_snote_single_graphic_window_g1

0x2b52,	// (0x000410cd) popup_snote_single_graphic_window_g2_ParamLimits

0x2b52,	// (0x000410cd) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x0004db44) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x0004db44) popup_snote_single_graphic_window_g

0x2b5e,	// (0x000410d9) popup_snote_single_graphic_window_t1_ParamLimits

0x2b5e,	// (0x000410d9) popup_snote_single_graphic_window_t1

0x2b71,	// (0x000410ec) popup_snote_single_graphic_window_t2_ParamLimits

0x2b71,	// (0x000410ec) popup_snote_single_graphic_window_t2

0x2b84,	// (0x000410ff) popup_snote_single_graphic_window_t3_ParamLimits

0x2b84,	// (0x000410ff) popup_snote_single_graphic_window_t3

0x2bbd,	// (0x00041138) popup_snote_single_graphic_window_t4_ParamLimits

0x2bbd,	// (0x00041138) popup_snote_single_graphic_window_t4

0x2bf1,	// (0x0004116c) popup_snote_single_graphic_window_t5_ParamLimits

0x2bf1,	// (0x0004116c) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0004db49) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0004db49) popup_snote_single_graphic_window_t

0x6a17,	// (0x00044f92) grid_graphic_popup_pane_ParamLimits

0x6a17,	// (0x00044f92) grid_graphic_popup_pane

0x6a3f,	// (0x00044fba) listscroll_popup_graphic_pane_g1_ParamLimits

0x6a3f,	// (0x00044fba) listscroll_popup_graphic_pane_g1

0xd4ea,	// (0x0004ba65) listscroll_popup_graphic_pane_g2_ParamLimits

0xd4ea,	// (0x0004ba65) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x0004df41) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x0004df41) listscroll_popup_graphic_pane_g

0x5c9e,	// (0x00044219) scroll_pane_cp5

0xd4a9,	// (0x0004ba24) cell_graphic_popup_pane_ParamLimits

0xd4a9,	// (0x0004ba24) cell_graphic_popup_pane

0x69e2,	// (0x00044f5d) cell_graphic_popup_pane_g1

0x69ea,	// (0x00044f65) cell_graphic_popup_pane_g2

0x2a44,	// (0x00040fbf) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x0004df3a) cell_graphic_popup_pane_g

0x69f3,	// (0x00044f6e) cell_graphic_popup_pane_t2

0x2a4d,	// (0x00040fc8) grid_highlight_pane_cp3

0x2c32,	// (0x000411ad) list_gen_pane_ParamLimits

0x2c32,	// (0x000411ad) list_gen_pane

0x2c5a,	// (0x000411d5) scroll_pane

0xd458,	// (0x0004b9d3) bg_list_pane_g1_ParamLimits

0xd458,	// (0x0004b9d3) bg_list_pane_g1

0x698b,	// (0x00044f06) bg_list_pane_g2_ParamLimits

0x698b,	// (0x00044f06) bg_list_pane_g2

0x69a0,	// (0x00044f1b) bg_list_pane_g3_ParamLimits

0x69a0,	// (0x00044f1b) bg_list_pane_g3

0x69b4,	// (0x00044f2f) bg_list_pane_g4_ParamLimits

0x69b4,	// (0x00044f2f) bg_list_pane_g4

0xd475,	// (0x0004b9f0) bg_list_pane_g5_ParamLimits

0xd475,	// (0x0004b9f0) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x0004df2f) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x0004df2f) bg_list_pane_g

0xbd4d,	// (0x0004a2c8) list_double2_graphic_large_graphic_pane_ParamLimits

0xbd4d,	// (0x0004a2c8) list_double2_graphic_large_graphic_pane

0xbd4d,	// (0x0004a2c8) list_double2_graphic_pane_ParamLimits

0xbd4d,	// (0x0004a2c8) list_double2_graphic_pane

0xbd4d,	// (0x0004a2c8) list_double2_large_graphic_pane_ParamLimits

0xbd4d,	// (0x0004a2c8) list_double2_large_graphic_pane

0xd43d,	// (0x0004b9b8) list_double2_pane_ParamLimits

0xd43d,	// (0x0004b9b8) list_double2_pane

0xbd4d,	// (0x0004a2c8) list_double_graphic_heading_pane_ParamLimits

0xbd4d,	// (0x0004a2c8) list_double_graphic_heading_pane

0xbd4d,	// (0x0004a2c8) list_double_graphic_pane_ParamLimits

0xbd4d,	// (0x0004a2c8) list_double_graphic_pane

0xbd4d,	// (0x0004a2c8) list_double_heading_pane_ParamLimits

0xbd4d,	// (0x0004a2c8) list_double_heading_pane

0xbd4d,	// (0x0004a2c8) list_double_large_graphic_pane_ParamLimits

0xbd4d,	// (0x0004a2c8) list_double_large_graphic_pane

0xbd4d,	// (0x0004a2c8) list_double_number_pane_ParamLimits

0xbd4d,	// (0x0004a2c8) list_double_number_pane

0xbd4d,	// (0x0004a2c8) list_double_pane_ParamLimits

0xbd4d,	// (0x0004a2c8) list_double_pane

0xbd4d,	// (0x0004a2c8) list_double_time_pane_ParamLimits

0xbd4d,	// (0x0004a2c8) list_double_time_pane

0xbd4d,	// (0x0004a2c8) list_setting_number_pane_ParamLimits

0xbd4d,	// (0x0004a2c8) list_setting_number_pane

0xbd4d,	// (0x0004a2c8) list_setting_pane_ParamLimits

0xbd4d,	// (0x0004a2c8) list_setting_pane

0xbd94,	// (0x0004a30f) list_single_2graphic_pane_ParamLimits

0xbd94,	// (0x0004a30f) list_single_2graphic_pane

0xbd94,	// (0x0004a30f) list_single_graphic_heading_pane_ParamLimits

0xbd94,	// (0x0004a30f) list_single_graphic_heading_pane

0xbd94,	// (0x0004a30f) list_single_graphic_pane_ParamLimits

0xbd94,	// (0x0004a30f) list_single_graphic_pane

0xbd94,	// (0x0004a30f) list_single_heading_pane_ParamLimits

0xbd94,	// (0x0004a30f) list_single_heading_pane

0xbe05,	// (0x0004a380) list_single_large_graphic_pane_ParamLimits

0xbe05,	// (0x0004a380) list_single_large_graphic_pane

0xbd94,	// (0x0004a30f) list_single_number_heading_pane_ParamLimits

0xbd94,	// (0x0004a30f) list_single_number_heading_pane

0xbd94,	// (0x0004a30f) list_single_number_pane_ParamLimits

0xbd94,	// (0x0004a30f) list_single_number_pane

0xbd94,	// (0x0004a30f) list_single_pane_ParamLimits

0xbd94,	// (0x0004a30f) list_single_pane

0x1e14,	// (0x0004038f) list_highlight_pane_cp1

0xb822,	// (0x00049d9d) list_single_pane_g1_ParamLimits

0xb822,	// (0x00049d9d) list_single_pane_g1

0xb82e,	// (0x00049da9) list_single_pane_g2_ParamLimits

0xb82e,	// (0x00049da9) list_single_pane_g2

0x0001,

0xf5ea,	// (0x0004db65) list_single_pane_g_ParamLimits

0xf5ea,	// (0x0004db65) list_single_pane_g

0xbd37,	// (0x0004a2b2) list_single_pane_t1_ParamLimits

0xbd37,	// (0x0004a2b2) list_single_pane_t1

0xb822,	// (0x00049d9d) list_single_number_pane_g1_ParamLimits

0xb822,	// (0x00049d9d) list_single_number_pane_g1

0xb82e,	// (0x00049da9) list_single_number_pane_g2_ParamLimits

0xb82e,	// (0x00049da9) list_single_number_pane_g2

0x0001,

0xf5ea,	// (0x0004db65) list_single_number_pane_g_ParamLimits

0xf5ea,	// (0x0004db65) list_single_number_pane_g

0xbcdf,	// (0x0004a25a) list_single_number_pane_t1_ParamLimits

0xbcdf,	// (0x0004a25a) list_single_number_pane_t1

0xbcf5,	// (0x0004a270) list_single_number_pane_t2_ParamLimits

0xbcf5,	// (0x0004a270) list_single_number_pane_t2

0x0001,

0xf975,	// (0x0004def0) list_single_number_pane_t_ParamLimits

0xf975,	// (0x0004def0) list_single_number_pane_t

0x96c6,	// (0x00047c41) list_single_graphic_pane_g1_ParamLimits

0x96c6,	// (0x00047c41) list_single_graphic_pane_g1

0xb822,	// (0x00049d9d) list_single_graphic_pane_g2_ParamLimits

0xb822,	// (0x00049d9d) list_single_graphic_pane_g2

0xb82e,	// (0x00049da9) list_single_graphic_pane_g3_ParamLimits

0xb82e,	// (0x00049da9) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0004db54) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0004db54) list_single_graphic_pane_g

0x96d2,	// (0x00047c4d) list_single_graphic_pane_t1_ParamLimits

0x96d2,	// (0x00047c4d) list_single_graphic_pane_t1

0x96e8,	// (0x00047c63) list_single_heading_pane_g1_ParamLimits

0x96e8,	// (0x00047c63) list_single_heading_pane_g1

0xb82e,	// (0x00049da9) list_single_heading_pane_g2_ParamLimits

0xb82e,	// (0x00049da9) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0004db5b) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0004db5b) list_single_heading_pane_g

0x96fb,	// (0x00047c76) list_single_heading_pane_t1_ParamLimits

0x96fb,	// (0x00047c76) list_single_heading_pane_t1

0xb83a,	// (0x00049db5) list_single_heading_pane_t2_ParamLimits

0xb83a,	// (0x00049db5) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004db60) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004db60) list_single_heading_pane_t

0xb822,	// (0x00049d9d) list_single_number_heading_pane_g1_ParamLimits

0xb822,	// (0x00049d9d) list_single_number_heading_pane_g1

0xb82e,	// (0x00049da9) list_single_number_heading_pane_g2_ParamLimits

0xb82e,	// (0x00049da9) list_single_number_heading_pane_g2

0x0001,

0xf5ea,	// (0x0004db65) list_single_number_heading_pane_g_ParamLimits

0xf5ea,	// (0x0004db65) list_single_number_heading_pane_g

0x9711,	// (0x00047c8c) list_single_number_heading_pane_t1_ParamLimits

0x9711,	// (0x00047c8c) list_single_number_heading_pane_t1

0x9727,	// (0x00047ca2) list_single_number_heading_pane_t2_ParamLimits

0x9727,	// (0x00047ca2) list_single_number_heading_pane_t2

0x9739,	// (0x00047cb4) list_single_number_heading_pane_t3_ParamLimits

0x9739,	// (0x00047cb4) list_single_number_heading_pane_t3

0x0002,

0xf5ef,	// (0x0004db6a) list_single_number_heading_pane_t_ParamLimits

0xf5ef,	// (0x0004db6a) list_single_number_heading_pane_t

0x974b,	// (0x00047cc6) list_single_graphic_heading_pane_g1_ParamLimits

0x974b,	// (0x00047cc6) list_single_graphic_heading_pane_g1

0xb84c,	// (0x00049dc7) list_single_graphic_heading_pane_g4_ParamLimits

0xb84c,	// (0x00049dc7) list_single_graphic_heading_pane_g4

0xb82e,	// (0x00049da9) list_single_graphic_heading_pane_g5_ParamLimits

0xb82e,	// (0x00049da9) list_single_graphic_heading_pane_g5

0x0002,

0xf5f6,	// (0x0004db71) list_single_graphic_heading_pane_g_ParamLimits

0xf5f6,	// (0x0004db71) list_single_graphic_heading_pane_g

0x9711,	// (0x00047c8c) list_single_graphic_heading_pane_t1_ParamLimits

0x9711,	// (0x00047c8c) list_single_graphic_heading_pane_t1

0x9763,	// (0x00047cde) list_single_graphic_heading_pane_t2_ParamLimits

0x9763,	// (0x00047cde) list_single_graphic_heading_pane_t2

0x0001,

0xf5fd,	// (0x0004db78) list_single_graphic_heading_pane_t_ParamLimits

0xf5fd,	// (0x0004db78) list_single_graphic_heading_pane_t

0xb85d,	// (0x00049dd8) list_single_large_graphic_pane_g1_ParamLimits

0xb85d,	// (0x00049dd8) list_single_large_graphic_pane_g1

0xb869,	// (0x00049de4) list_single_large_graphic_pane_g2_ParamLimits

0xb869,	// (0x00049de4) list_single_large_graphic_pane_g2

0xb875,	// (0x00049df0) list_single_large_graphic_pane_g3_ParamLimits

0xb875,	// (0x00049df0) list_single_large_graphic_pane_g3

0x0002,

0xf602,	// (0x0004db7d) list_single_large_graphic_pane_g_ParamLimits

0xf602,	// (0x0004db7d) list_single_large_graphic_pane_g

0x5c2f,	// (0x000441aa) wait_border_pane_g2_copy1

0xb881,	// (0x00049dfc) list_single_large_graphic_pane_g4_cp2

0x9779,	// (0x00047cf4) list_single_large_graphic_pane_t1_ParamLimits

0x9779,	// (0x00047cf4) list_single_large_graphic_pane_t1

0x505b,	// (0x000435d6) list_double_pane_g1_ParamLimits

0x505b,	// (0x000435d6) list_double_pane_g1

0x978f,	// (0x00047d0a) list_double_pane_g2_ParamLimits

0x978f,	// (0x00047d0a) list_double_pane_g2

0x0001,

0xf609,	// (0x0004db84) list_double_pane_g_ParamLimits

0xf609,	// (0x0004db84) list_double_pane_g

0x979b,	// (0x00047d16) list_double_pane_t1_ParamLimits

0x979b,	// (0x00047d16) list_double_pane_t1

0x97b1,	// (0x00047d2c) list_double_pane_t2_ParamLimits

0x97b1,	// (0x00047d2c) list_double_pane_t2

0x0001,

0xf60e,	// (0x0004db89) list_double_pane_t_ParamLimits

0xf60e,	// (0x0004db89) list_double_pane_t

0x97c3,	// (0x00047d3e) list_double2_pane_g1_ParamLimits

0x97c3,	// (0x00047d3e) list_double2_pane_g1

0x97d4,	// (0x00047d4f) list_double2_pane_g2_ParamLimits

0x97d4,	// (0x00047d4f) list_double2_pane_g2

0x0001,

0xf613,	// (0x0004db8e) list_double2_pane_g_ParamLimits

0xf613,	// (0x0004db8e) list_double2_pane_g

0x97e0,	// (0x00047d5b) list_double2_pane_t1_ParamLimits

0x97e0,	// (0x00047d5b) list_double2_pane_t1

0x97f6,	// (0x00047d71) list_double2_pane_t2_ParamLimits

0x97f6,	// (0x00047d71) list_double2_pane_t2

0x0001,

0xf618,	// (0x0004db93) list_double2_pane_t_ParamLimits

0xf618,	// (0x0004db93) list_double2_pane_t

0x505b,	// (0x000435d6) list_double_number_pane_g1_ParamLimits

0x505b,	// (0x000435d6) list_double_number_pane_g1

0x978f,	// (0x00047d0a) list_double_number_pane_g2_ParamLimits

0x978f,	// (0x00047d0a) list_double_number_pane_g2

0x0001,

0xf609,	// (0x0004db84) list_double_number_pane_g_ParamLimits

0xf609,	// (0x0004db84) list_double_number_pane_g

0x9808,	// (0x00047d83) list_double_number_pane_t1_ParamLimits

0x9808,	// (0x00047d83) list_double_number_pane_t1

0x981a,	// (0x00047d95) list_double_number_pane_t2_ParamLimits

0x981a,	// (0x00047d95) list_double_number_pane_t2

0x9830,	// (0x00047dab) list_double_number_pane_t3_ParamLimits

0x9830,	// (0x00047dab) list_double_number_pane_t3

0x0002,

0xf61d,	// (0x0004db98) list_double_number_pane_t_ParamLimits

0xf61d,	// (0x0004db98) list_double_number_pane_t

0x9842,	// (0x00047dbd) list_double_graphic_pane_g1_ParamLimits

0x9842,	// (0x00047dbd) list_double_graphic_pane_g1

0x63ed,	// (0x00044968) list_double_graphic_pane_g2_ParamLimits

0x63ed,	// (0x00044968) list_double_graphic_pane_g2

0x984e,	// (0x00047dc9) list_double_graphic_pane_g3_ParamLimits

0x984e,	// (0x00047dc9) list_double_graphic_pane_g3

0x0003,

0xf624,	// (0x0004db9f) list_double_graphic_pane_g_ParamLimits

0xf624,	// (0x0004db9f) list_double_graphic_pane_g

0x9866,	// (0x00047de1) list_double_graphic_pane_t1_ParamLimits

0x9866,	// (0x00047de1) list_double_graphic_pane_t1

0x987c,	// (0x00047df7) list_double_graphic_pane_t2_ParamLimits

0x987c,	// (0x00047df7) list_double_graphic_pane_t2

0x0001,

0xf62d,	// (0x0004dba8) list_double_graphic_pane_t_ParamLimits

0xf62d,	// (0x0004dba8) list_double_graphic_pane_t

0x988e,	// (0x00047e09) list_double2_graphic_pane_g1_ParamLimits

0x988e,	// (0x00047e09) list_double2_graphic_pane_g1

0x989a,	// (0x00047e15) list_double2_graphic_pane_g2_ParamLimits

0x989a,	// (0x00047e15) list_double2_graphic_pane_g2

0x98a6,	// (0x00047e21) list_double2_graphic_pane_g3_ParamLimits

0x98a6,	// (0x00047e21) list_double2_graphic_pane_g3

0x0002,

0xf632,	// (0x0004dbad) list_double2_graphic_pane_g_ParamLimits

0xf632,	// (0x0004dbad) list_double2_graphic_pane_g

0x98b2,	// (0x00047e2d) list_double2_graphic_pane_t1_ParamLimits

0x98b2,	// (0x00047e2d) list_double2_graphic_pane_t1

0x98c8,	// (0x00047e43) list_double2_graphic_pane_t2_ParamLimits

0x98c8,	// (0x00047e43) list_double2_graphic_pane_t2

0x0001,

0xf639,	// (0x0004dbb4) list_double2_graphic_pane_t_ParamLimits

0xf639,	// (0x0004dbb4) list_double2_graphic_pane_t

0x98da,	// (0x00047e55) list_double_large_graphic_pane_g1_ParamLimits

0x98da,	// (0x00047e55) list_double_large_graphic_pane_g1

0x9903,	// (0x00047e7e) list_double_large_graphic_pane_g2_ParamLimits

0x9903,	// (0x00047e7e) list_double_large_graphic_pane_g2

0x978f,	// (0x00047d0a) list_double_large_graphic_pane_g3_ParamLimits

0x978f,	// (0x00047d0a) list_double_large_graphic_pane_g3

0x9919,	// (0x00047e94) list_double_large_graphic_pane_g4_ParamLimits

0x9919,	// (0x00047e94) list_double_large_graphic_pane_g4

0x0004,

0xf63e,	// (0x0004dbb9) list_double_large_graphic_pane_g_ParamLimits

0xf63e,	// (0x0004dbb9) list_double_large_graphic_pane_g

0x992a,	// (0x00047ea5) list_double_large_graphic_pane_t1_ParamLimits

0x992a,	// (0x00047ea5) list_double_large_graphic_pane_t1

0x9943,	// (0x00047ebe) list_double_large_graphic_pane_t2_ParamLimits

0x9943,	// (0x00047ebe) list_double_large_graphic_pane_t2

0x0001,

0xf649,	// (0x0004dbc4) list_double_large_graphic_pane_t_ParamLimits

0xf649,	// (0x0004dbc4) list_double_large_graphic_pane_t

0x9955,	// (0x00047ed0) list_double2_large_graphic_pane_g1_ParamLimits

0x9955,	// (0x00047ed0) list_double2_large_graphic_pane_g1

0x9961,	// (0x00047edc) list_double2_large_graphic_pane_g2_ParamLimits

0x9961,	// (0x00047edc) list_double2_large_graphic_pane_g2

0x98a6,	// (0x00047e21) list_double2_large_graphic_pane_g3_ParamLimits

0x98a6,	// (0x00047e21) list_double2_large_graphic_pane_g3

0x0002,

0xf64e,	// (0x0004dbc9) list_double2_large_graphic_pane_g_ParamLimits

0xf64e,	// (0x0004dbc9) list_double2_large_graphic_pane_g

0x9972,	// (0x00047eed) list_double2_large_graphic_pane_t1_ParamLimits

0x9972,	// (0x00047eed) list_double2_large_graphic_pane_t1

0x9988,	// (0x00047f03) list_double2_large_graphic_pane_t2_ParamLimits

0x9988,	// (0x00047f03) list_double2_large_graphic_pane_t2

0x0001,

0xf655,	// (0x0004dbd0) list_double2_large_graphic_pane_t_ParamLimits

0xf655,	// (0x0004dbd0) list_double2_large_graphic_pane_t

0x999a,	// (0x00047f15) list_double_heading_pane_g1_ParamLimits

0x999a,	// (0x00047f15) list_double_heading_pane_g1

0x99ab,	// (0x00047f26) list_double_heading_pane_g2_ParamLimits

0x99ab,	// (0x00047f26) list_double_heading_pane_g2

0x0001,

0xf65a,	// (0x0004dbd5) list_double_heading_pane_g_ParamLimits

0xf65a,	// (0x0004dbd5) list_double_heading_pane_g

0x99b7,	// (0x00047f32) list_double_heading_pane_t1_ParamLimits

0x99b7,	// (0x00047f32) list_double_heading_pane_t1

0x99cd,	// (0x00047f48) list_double_heading_pane_t2_ParamLimits

0x99cd,	// (0x00047f48) list_double_heading_pane_t2

0x0001,

0xf65f,	// (0x0004dbda) list_double_heading_pane_t_ParamLimits

0xf65f,	// (0x0004dbda) list_double_heading_pane_t

0x988e,	// (0x00047e09) list_double_graphic_heading_pane_g1_ParamLimits

0x988e,	// (0x00047e09) list_double_graphic_heading_pane_g1

0x999a,	// (0x00047f15) list_double_graphic_heading_pane_g2_ParamLimits

0x999a,	// (0x00047f15) list_double_graphic_heading_pane_g2

0x99ab,	// (0x00047f26) list_double_graphic_heading_pane_g3_ParamLimits

0x99ab,	// (0x00047f26) list_double_graphic_heading_pane_g3

0x0002,

0xf664,	// (0x0004dbdf) list_double_graphic_heading_pane_g_ParamLimits

0xf664,	// (0x0004dbdf) list_double_graphic_heading_pane_g

0x99df,	// (0x00047f5a) list_double_graphic_heading_pane_t1_ParamLimits

0x99df,	// (0x00047f5a) list_double_graphic_heading_pane_t1

0x98c8,	// (0x00047e43) list_double_graphic_heading_pane_t2_ParamLimits

0x98c8,	// (0x00047e43) list_double_graphic_heading_pane_t2

0x0001,

0xf66b,	// (0x0004dbe6) list_double_graphic_heading_pane_t_ParamLimits

0xf66b,	// (0x0004dbe6) list_double_graphic_heading_pane_t

0x99f5,	// (0x00047f70) list_double_time_pane_g1_ParamLimits

0x99f5,	// (0x00047f70) list_double_time_pane_g1

0x9a06,	// (0x00047f81) list_double_time_pane_g2_ParamLimits

0x9a06,	// (0x00047f81) list_double_time_pane_g2

0x0001,

0xf670,	// (0x0004dbeb) list_double_time_pane_g_ParamLimits

0xf670,	// (0x0004dbeb) list_double_time_pane_g

0x9a12,	// (0x00047f8d) list_double_time_pane_t1_ParamLimits

0x9a12,	// (0x00047f8d) list_double_time_pane_t1

0x9a28,	// (0x00047fa3) list_double_time_pane_t2_ParamLimits

0x9a28,	// (0x00047fa3) list_double_time_pane_t2

0x9a3a,	// (0x00047fb5) list_double_time_pane_t3_ParamLimits

0x9a3a,	// (0x00047fb5) list_double_time_pane_t3

0x9a4c,	// (0x00047fc7) list_double_time_pane_t4_ParamLimits

0x9a4c,	// (0x00047fc7) list_double_time_pane_t4

0x0003,

0xf675,	// (0x0004dbf0) list_double_time_pane_t_ParamLimits

0xf675,	// (0x0004dbf0) list_double_time_pane_t

0x9a5e,	// (0x00047fd9) list_setting_pane_g1_ParamLimits

0x9a5e,	// (0x00047fd9) list_setting_pane_g1

0x9a6a,	// (0x00047fe5) list_setting_pane_g2_ParamLimits

0x9a6a,	// (0x00047fe5) list_setting_pane_g2

0x0001,

0xf67e,	// (0x0004dbf9) list_setting_pane_g_ParamLimits

0xf67e,	// (0x0004dbf9) list_setting_pane_g

0x9a76,	// (0x00047ff1) list_setting_pane_t1_ParamLimits

0x9a76,	// (0x00047ff1) list_setting_pane_t1

0x9a90,	// (0x0004800b) list_setting_pane_t2_ParamLimits

0x9a90,	// (0x0004800b) list_setting_pane_t2

0x0002,

0xf683,	// (0x0004dbfe) list_setting_pane_t_ParamLimits

0xf683,	// (0x0004dbfe) list_setting_pane_t

0x9acf,	// (0x0004804a) set_value_pane_cp_ParamLimits

0x9acf,	// (0x0004804a) set_value_pane_cp

0x9adb,	// (0x00048056) list_setting_number_pane_g1_ParamLimits

0x9adb,	// (0x00048056) list_setting_number_pane_g1

0x9ae7,	// (0x00048062) list_setting_number_pane_g2_ParamLimits

0x9ae7,	// (0x00048062) list_setting_number_pane_g2

0x0001,

0xf68a,	// (0x0004dc05) list_setting_number_pane_g_ParamLimits

0xf68a,	// (0x0004dc05) list_setting_number_pane_g

0x9af3,	// (0x0004806e) list_setting_number_pane_t1_ParamLimits

0x9af3,	// (0x0004806e) list_setting_number_pane_t1

0x9b0c,	// (0x00048087) list_setting_number_pane_t2_ParamLimits

0x9b0c,	// (0x00048087) list_setting_number_pane_t2

0x9b26,	// (0x000480a1) list_setting_number_pane_t3_ParamLimits

0x9b26,	// (0x000480a1) list_setting_number_pane_t3

0x0003,

0xf68f,	// (0x0004dc0a) list_setting_number_pane_t_ParamLimits

0xf68f,	// (0x0004dc0a) list_setting_number_pane_t

0x9acf,	// (0x0004804a) set_value_pane_ParamLimits

0x9acf,	// (0x0004804a) set_value_pane

0x4303,	// (0x0004287e) bg_set_opt_pane_ParamLimits

0x4303,	// (0x0004287e) bg_set_opt_pane

0x9b69,	// (0x000480e4) set_value_pane_t1

0x4324,	// (0x0004289f) slider_set_pane_cp3

0x432d,	// (0x000428a8) volume_small_pane_cp

0x4336,	// (0x000428b1) list_form_gen_pane

0x433f,	// (0x000428ba) scroll_pane_cp8

0x9b7f,	// (0x000480fa) form_field_data_pane_ParamLimits

0x9b7f,	// (0x000480fa) form_field_data_pane

0x9ba3,	// (0x0004811e) form_field_data_wide_pane_ParamLimits

0x9ba3,	// (0x0004811e) form_field_data_wide_pane

0x9bc6,	// (0x00048141) form_field_popup_pane_ParamLimits

0x9bc6,	// (0x00048141) form_field_popup_pane

0x9be6,	// (0x00048161) form_field_popup_wide_pane_ParamLimits

0x9be6,	// (0x00048161) form_field_popup_wide_pane

0x9c05,	// (0x00048180) form_field_slider_pane_ParamLimits

0x9c05,	// (0x00048180) form_field_slider_pane

0x9c18,	// (0x00048193) form_field_slider_wide_pane_ParamLimits

0x9c18,	// (0x00048193) form_field_slider_wide_pane

0x4350,	// (0x000428cb) data_form_pane

0x9c35,	// (0x000481b0) form_field_data_pane_t1

0x435c,	// (0x000428d7) input_focus_pane

0x436a,	// (0x000428e5) data_form_wide_pane

0x9c59,	// (0x000481d4) form_field_data_wide_pane_t1

0x2a62,	// (0x00040fdd) input_focus_pane_cp6

0x9c7b,	// (0x000481f6) form_field_popup_pane_t1

0x435c,	// (0x000428d7) input_focus_pane_cp7

0x4396,	// (0x00042911) list_form_pane

0x9c9b,	// (0x00048216) form_field_popup_wide_pane_t1

0x435c,	// (0x000428d7) input_focus_pane_cp8

0x43a2,	// (0x0004291d) list_form_wide_pane

0x9cb8,	// (0x00048233) form_field_slider_pane_t1_ParamLimits

0x9cb8,	// (0x00048233) form_field_slider_pane_t1

0x9cce,	// (0x00048249) form_field_slider_pane_t2_ParamLimits

0x9cce,	// (0x00048249) form_field_slider_pane_t2

0x0001,

0xf69f,	// (0x0004dc1a) form_field_slider_pane_t_ParamLimits

0xf69f,	// (0x0004dc1a) form_field_slider_pane_t

0x1e62,	// (0x000403dd) input_focus_pane_cp9_ParamLimits

0x1e62,	// (0x000403dd) input_focus_pane_cp9

0x9ce3,	// (0x0004825e) slider_cont_pane_ParamLimits

0x9ce3,	// (0x0004825e) slider_cont_pane

0x43b1,	// (0x0004292c) form_field_slider_wide_pane_t1_ParamLimits

0x43b1,	// (0x0004292c) form_field_slider_wide_pane_t1

0x9cf7,	// (0x00048272) form_field_slider_wide_pane_t2_ParamLimits

0x9cf7,	// (0x00048272) form_field_slider_wide_pane_t2

0x0001,

0xf6a4,	// (0x0004dc1f) form_field_slider_wide_pane_t_ParamLimits

0xf6a4,	// (0x0004dc1f) form_field_slider_wide_pane_t

0x1e62,	// (0x000403dd) input_focus_pane_cp10_ParamLimits

0x1e62,	// (0x000403dd) input_focus_pane_cp10

0x9d09,	// (0x00048284) slider_cont_pane_cp1_ParamLimits

0x9d09,	// (0x00048284) slider_cont_pane_cp1

0x9d1d,	// (0x00048298) slider_form_pane_cp

0x43c3,	// (0x0004293e) input_focus_pane_g1

0x43cb,	// (0x00042946) input_focus_pane_g2

0x43d3,	// (0x0004294e) input_focus_pane_g3

0x43db,	// (0x00042956) input_focus_pane_g4

0x43e3,	// (0x0004295e) input_focus_pane_g5

0x43eb,	// (0x00042966) input_focus_pane_g6

0x43f3,	// (0x0004296e) input_focus_pane_g7

0x43fb,	// (0x00042976) input_focus_pane_g8

0x4403,	// (0x0004297e) input_focus_pane_g9

0x1e0a,	// (0x00040385) input_focus_pane_g10

0x0009,

0xf6a9,	// (0x0004dc24) input_focus_pane_g

0x5c38,	// (0x000441b3) wait_border_pane_g3_copy1

0x9d25,	// (0x000482a0) data_form_pane_t1

0x1e0a,	// (0x00040385) wait_anim_pane_g1_copy1

0xbd07,	// (0x0004a282) data_form_wide_pane_t1

0x9d40,	// (0x000482bb) list_form_graphic_pane_cp_ParamLimits

0x9d40,	// (0x000482bb) list_form_graphic_pane_cp

0x6926,	// (0x00044ea1) slider_form_pane_g1

0x692f,	// (0x00044eaa) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x0004df20) slider_form_pane_g

0x9d59,	// (0x000482d4) list_form_graphic_pane_ParamLimits

0x9d59,	// (0x000482d4) list_form_graphic_pane

0x9d75,	// (0x000482f0) list_form_graphic_pane_g1

0x9d7d,	// (0x000482f8) list_form_graphic_pane_t1_ParamLimits

0x9d7d,	// (0x000482f8) list_form_graphic_pane_t1

0x1e70,	// (0x000403eb) list_highlight_pane_cp5_ParamLimits

0x1e70,	// (0x000403eb) list_highlight_pane_cp5

0x9d92,	// (0x0004830d) find_pane_g1

0x440b,	// (0x00042986) input_find_pane

0x9d9b,	// (0x00048316) input_find_pane_g1_ParamLimits

0x9d9b,	// (0x00048316) input_find_pane_g1

0x9da7,	// (0x00048322) input_find_pane_t1_ParamLimits

0x9da7,	// (0x00048322) input_find_pane_t1

0x9dbc,	// (0x00048337) input_find_pane_t2_ParamLimits

0x9dbc,	// (0x00048337) input_find_pane_t2

0x0001,

0xf6be,	// (0x0004dc39) input_find_pane_t_ParamLimits

0xf6be,	// (0x0004dc39) input_find_pane_t

0x4414,	// (0x0004298f) input_focus_pane_cp5_ParamLimits

0x4414,	// (0x0004298f) input_focus_pane_cp5

0xb8aa,	// (0x00049e25) bg_popup_window_pane_cp2_ParamLimits

0xb8aa,	// (0x00049e25) bg_popup_window_pane_cp2

0xb8b7,	// (0x00049e32) listscroll_menu_pane_ParamLimits

0xb8b7,	// (0x00049e32) listscroll_menu_pane

0xb8c3,	// (0x00049e3e) popup_submenu_window_ParamLimits

0xb8c3,	// (0x00049e3e) popup_submenu_window

0x4422,	// (0x0004299d) find_popup_pane_g1

0x442a,	// (0x000429a5) input_popup_find_pane_cp

0x4414,	// (0x0004298f) input_focus_pane_cp4_ParamLimits

0x4414,	// (0x0004298f) input_focus_pane_cp4

0x4434,	// (0x000429af) input_popup_find_pane_t1_ParamLimits

0x4434,	// (0x000429af) input_popup_find_pane_t1

0x1e14,	// (0x0004038f) bg_popup_sub_pane_cp

0x4462,	// (0x000429dd) listscroll_popup_sub_pane

0x446a,	// (0x000429e5) list_submenu_pane_ParamLimits

0x446a,	// (0x000429e5) list_submenu_pane

0x447b,	// (0x000429f6) scroll_pane_cp4

0x4483,	// (0x000429fe) list_single_popup_submenu_pane_ParamLimits

0x4483,	// (0x000429fe) list_single_popup_submenu_pane

0x4497,	// (0x00042a12) list_single_popup_submenu_pane_g1

0x449f,	// (0x00042a1a) list_single_popup_submenu_pane_t1_ParamLimits

0x449f,	// (0x00042a1a) list_single_popup_submenu_pane_t1

0x1e70,	// (0x000403eb) bg_active_tab_pane_cp1_ParamLimits

0x1e70,	// (0x000403eb) bg_active_tab_pane_cp1

0xb8fb,	// (0x00049e76) tabs_2_active_pane_g1

0xb903,	// (0x00049e7e) tabs_2_active_pane_t1

0x1e70,	// (0x000403eb) bg_passive_tab_pane_cp1_ParamLimits

0x1e70,	// (0x000403eb) bg_passive_tab_pane_cp1

0xb8fb,	// (0x00049e76) tabs_2_passive_pane_g1

0xb903,	// (0x00049e7e) tabs_2_passive_pane_t1

0x617f,	// (0x000446fa) bg_active_tab_pane_cp4

0xb915,	// (0x00049e90) tabs_2_long_active_pane_t1

0xb928,	// (0x00049ea3) bg_passive_tab_pane_cp4

0xa409,	// (0x00048984) list_single_midp_graphic_pane_g4_ParamLimits

0x617f,	// (0x000446fa) bg_active_tab_pane_cp5

0xb934,	// (0x00049eaf) tabs_3_long_active_pane_t1

0xb928,	// (0x00049ea3) bg_passive_tab_pane_cp5

0xa409,	// (0x00048984) list_single_midp_graphic_pane_g4

0x1e70,	// (0x000403eb) bg_popup_window_pane_cp13_ParamLimits

0x1e70,	// (0x000403eb) bg_popup_window_pane_cp13

0x44c9,	// (0x00042a44) listscroll_popup_fast_pane_ParamLimits

0x44c9,	// (0x00042a44) listscroll_popup_fast_pane

0x44d8,	// (0x00042a53) grid_popup_fast_pane_ParamLimits

0x44d8,	// (0x00042a53) grid_popup_fast_pane

0x44ea,	// (0x00042a65) scroll_pane_cp9_ParamLimits

0x44ea,	// (0x00042a65) scroll_pane_cp9

0x7bec,	// (0x00046167) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7bec,	// (0x00046167) list_single_graphic_hl_pane_t1_cp2

0x450e,	// (0x00042a89) input_focus_pane_cp20_ParamLimits

0x450e,	// (0x00042a89) input_focus_pane_cp20

0x4817,	// (0x00042d92) query_popup_data_pane_t1_ParamLimits

0x4817,	// (0x00042d92) query_popup_data_pane_t1

0x482a,	// (0x00042da5) query_popup_data_pane_t2_ParamLimits

0x482a,	// (0x00042da5) query_popup_data_pane_t2

0x4870,	// (0x00042deb) query_popup_data_pane_t3_ParamLimits

0x4870,	// (0x00042deb) query_popup_data_pane_t3

0x48b1,	// (0x00042e2c) query_popup_data_pane_t4_ParamLimits

0x48b1,	// (0x00042e2c) query_popup_data_pane_t4

0x48ed,	// (0x00042e68) query_popup_data_pane_t5_ParamLimits

0x48ed,	// (0x00042e68) query_popup_data_pane_t5

0x0004,

0xf6c3,	// (0x0004dc3e) query_popup_data_pane_t_ParamLimits

0xf6c3,	// (0x0004dc3e) query_popup_data_pane_t

0x43c3,	// (0x0004293e) bg_set_opt_pane_g1

0x43cb,	// (0x00042946) bg_set_opt_pane_g2

0x43d3,	// (0x0004294e) bg_set_opt_pane_g3

0x43db,	// (0x00042956) bg_set_opt_pane_g4

0x43e3,	// (0x0004295e) bg_set_opt_pane_g5

0x43eb,	// (0x00042966) bg_set_opt_pane_g6

0x43f3,	// (0x0004296e) bg_set_opt_pane_g7

0x43fb,	// (0x00042976) bg_set_opt_pane_g8

0x4403,	// (0x0004297e) bg_set_opt_pane_g9

0x0008,

0xf6ce,	// (0x0004dc49) bg_set_opt_pane_g

0xa07c,	// (0x000485f7) control_top_pane_stacon_ParamLimits

0xa07c,	// (0x000485f7) control_top_pane_stacon

0xa0cf,	// (0x0004864a) signal_pane_stacon_ParamLimits

0xa0cf,	// (0x0004864a) signal_pane_stacon

0x4e6c,	// (0x000433e7) stacon_top_pane_g1_ParamLimits

0x4e6c,	// (0x000433e7) stacon_top_pane_g1

0xa0f4,	// (0x0004866f) title_pane_stacon_ParamLimits

0xa0f4,	// (0x0004866f) title_pane_stacon

0xa11e,	// (0x00048699) uni_indicator_pane_stacon_ParamLimits

0xa11e,	// (0x00048699) uni_indicator_pane_stacon

0xa133,	// (0x000486ae) battery_pane_stacon_ParamLimits

0xa133,	// (0x000486ae) battery_pane_stacon

0xa177,	// (0x000486f2) control_bottom_pane_stacon_ParamLimits

0xa177,	// (0x000486f2) control_bottom_pane_stacon

0xa19a,	// (0x00048715) navi_pane_stacon_ParamLimits

0xa19a,	// (0x00048715) navi_pane_stacon

0x4e8e,	// (0x00043409) stacon_bottom_pane_g1_ParamLimits

0x4e8e,	// (0x00043409) stacon_bottom_pane_g1

0x9dd1,	// (0x0004834c) aid_levels_signal_lsc_ParamLimits

0x9dd1,	// (0x0004834c) aid_levels_signal_lsc

0x9de8,	// (0x00048363) signal_pane_stacon_g1_ParamLimits

0x9de8,	// (0x00048363) signal_pane_stacon_g1

0x9dfc,	// (0x00048377) signal_pane_stacon_g2_ParamLimits

0x9dfc,	// (0x00048377) signal_pane_stacon_g2

0x0001,

0xf6e1,	// (0x0004dc5c) signal_pane_stacon_g_ParamLimits

0xf6e1,	// (0x0004dc5c) signal_pane_stacon_g

0x9e31,	// (0x000483ac) title_pane_stacon_t1_ParamLimits

0x9e31,	// (0x000483ac) title_pane_stacon_t1

0x4945,	// (0x00042ec0) uni_indicator_pane_stacon_g1

0x494f,	// (0x00042eca) uni_indicator_pane_stacon_g2

0x4931,	// (0x00042eac) uni_indicator_pane_stacon_g3

0x493b,	// (0x00042eb6) uni_indicator_pane_stacon_g4

0x0003,

0xf6ed,	// (0x0004dc68) uni_indicator_pane_stacon_g

0x9e56,	// (0x000483d1) control_top_pane_stacon_g1

0x9e5e,	// (0x000483d9) control_top_pane_stacon_t1_ParamLimits

0x9e5e,	// (0x000483d9) control_top_pane_stacon_t1

0x9e95,	// (0x00048410) aid_levels_battery_lsc_ParamLimits

0x9e95,	// (0x00048410) aid_levels_battery_lsc

0x9ead,	// (0x00048428) battery_pane_stacon_g1_ParamLimits

0x9ead,	// (0x00048428) battery_pane_stacon_g1

0x9ec0,	// (0x0004843b) battery_pane_stacon_g2_ParamLimits

0x9ec0,	// (0x0004843b) battery_pane_stacon_g2

0x0001,

0xf6f6,	// (0x0004dc71) battery_pane_stacon_g_ParamLimits

0xf6f6,	// (0x0004dc71) battery_pane_stacon_g

0x9efe,	// (0x00048479) navi_icon_pane_stacon

0x9f12,	// (0x0004848d) navi_navi_pane_stacon

0x9efe,	// (0x00048479) navi_text_pane_stacon

0x9e56,	// (0x000483d1) control_bottom_pane_stacon_g1

0x9f26,	// (0x000484a1) control_bottom_pane_stacon_t1_ParamLimits

0x9f26,	// (0x000484a1) control_bottom_pane_stacon_t1

0xb946,	// (0x00049ec1) grid_app_pane_ParamLimits

0xb946,	// (0x00049ec1) grid_app_pane

0xb96a,	// (0x00049ee5) scroll_pane_cp15_ParamLimits

0xb96a,	// (0x00049ee5) scroll_pane_cp15

0xb97f,	// (0x00049efa) cell_app_pane_ParamLimits

0xb97f,	// (0x00049efa) cell_app_pane

0xb9a3,	// (0x00049f1e) cell_app_pane_g1_ParamLimits

0xb9a3,	// (0x00049f1e) cell_app_pane_g1

0x4973,	// (0x00042eee) cell_app_pane_g2_ParamLimits

0x4973,	// (0x00042eee) cell_app_pane_g2

0x0001,

0xf6fb,	// (0x0004dc76) cell_app_pane_g_ParamLimits

0xf6fb,	// (0x0004dc76) cell_app_pane_g

0xb9c3,	// (0x00049f3e) cell_app_pane_t1_ParamLimits

0xb9c3,	// (0x00049f3e) cell_app_pane_t1

0x497f,	// (0x00042efa) grid_highlight_pane_ParamLimits

0x497f,	// (0x00042efa) grid_highlight_pane

0x43c3,	// (0x0004293e) cell_highlight_pane_g1

0x43cb,	// (0x00042946) cell_highlight_pane_g2

0x43d3,	// (0x0004294e) cell_highlight_pane_g3

0x43db,	// (0x00042956) cell_highlight_pane_g4

0x43e3,	// (0x0004295e) cell_highlight_pane_g5

0x43eb,	// (0x00042966) cell_highlight_pane_g6

0x43f3,	// (0x0004296e) cell_highlight_pane_g7

0x43fb,	// (0x00042976) cell_highlight_pane_g8

0x4403,	// (0x0004297e) cell_highlight_pane_g9

0x1e0a,	// (0x00040385) cell_highlight_pane_g10

0x0009,

0xf6a9,	// (0x0004dc24) cell_highlight_pane_g

0x4990,	// (0x00042f0b) bg_scroll_pane

0x9f70,	// (0x000484eb) scroll_handle_pane

0x49d7,	// (0x00042f52) scroll_bg_pane_g1

0x49ec,	// (0x00042f67) scroll_bg_pane_g2

0x4a04,	// (0x00042f7f) scroll_bg_pane_g3

0x0002,

0xf700,	// (0x0004dc7b) scroll_bg_pane_g

0x4a19,	// (0x00042f94) scroll_handle_focus_pane_ParamLimits

0x4a19,	// (0x00042f94) scroll_handle_focus_pane

0x49d7,	// (0x00042f52) scroll_handle_pane_g1

0x4a26,	// (0x00042fa1) scroll_handle_pane_g2

0x4a04,	// (0x00042f7f) scroll_handle_pane_g3

0x0002,

0xf707,	// (0x0004dc82) scroll_handle_pane_g

0x4414,	// (0x0004298f) bg_popup_sub_pane_cp21_ParamLimits

0x4414,	// (0x0004298f) bg_popup_sub_pane_cp21

0x4a3a,	// (0x00042fb5) popup_fep_japan_predictive_window_t1_ParamLimits

0x4a3a,	// (0x00042fb5) popup_fep_japan_predictive_window_t1

0x4a54,	// (0x00042fcf) popup_fep_japan_predictive_window_t2_ParamLimits

0x4a54,	// (0x00042fcf) popup_fep_japan_predictive_window_t2

0x4a87,	// (0x00043002) popup_fep_japan_predictive_window_t3_ParamLimits

0x4a87,	// (0x00043002) popup_fep_japan_predictive_window_t3

0x0002,

0xf70e,	// (0x0004dc89) popup_fep_japan_predictive_window_t_ParamLimits

0xf70e,	// (0x0004dc89) popup_fep_japan_predictive_window_t

0x1e14,	// (0x0004038f) bg_popup_sub_pane_cp23

0x4abe,	// (0x00043039) listscroll_japin_cand_pane

0x4ac6,	// (0x00043041) popup_fep_japan_candidate_window_t1

0x4ad4,	// (0x0004304f) candidate_pane_ParamLimits

0x4ad4,	// (0x0004304f) candidate_pane

0x4ae6,	// (0x00043061) scroll_pane_cp30

0x4aee,	// (0x00043069) list_single_popup_jap_candidate_pane_ParamLimits

0x4aee,	// (0x00043069) list_single_popup_jap_candidate_pane

0x1e14,	// (0x0004038f) list_highlight_pane_cp30

0x4b03,	// (0x0004307e) list_single_popup_jap_candidate_pane_t1

0x4b12,	// (0x0004308d) level_1_signal

0x4b1f,	// (0x0004309a) level_2_signal

0x4b2c,	// (0x000430a7) level_3_signal

0x4b39,	// (0x000430b4) level_4_signal

0x4b46,	// (0x000430c1) level_5_signal

0x4b53,	// (0x000430ce) level_6_signal

0x4b60,	// (0x000430db) level_7_signal

0x4b12,	// (0x0004308d) level_1_battery

0x4b1f,	// (0x0004309a) level_2_battery

0x4b2c,	// (0x000430a7) level_3_battery

0x4b39,	// (0x000430b4) level_4_battery

0x4b46,	// (0x000430c1) level_5_battery

0x4b53,	// (0x000430ce) level_6_battery

0x4b60,	// (0x000430db) level_7_battery

0x4b85,	// (0x00043100) list_menu_pane_ParamLimits

0x4b85,	// (0x00043100) list_menu_pane

0x4b9b,	// (0x00043116) scroll_pane_cp25_ParamLimits

0x4b9b,	// (0x00043116) scroll_pane_cp25

0x4bb4,	// (0x0004312f) list_double2_graphic_pane_cp2_ParamLimits

0x4bb4,	// (0x0004312f) list_double2_graphic_pane_cp2

0x4bb4,	// (0x0004312f) list_double2_large_graphic_pane_cp2_ParamLimits

0x4bb4,	// (0x0004312f) list_double2_large_graphic_pane_cp2

0x4bb4,	// (0x0004312f) list_double2_pane_cp2_ParamLimits

0x4bb4,	// (0x0004312f) list_double2_pane_cp2

0x4bb4,	// (0x0004312f) list_double_graphic_pane_cp2_ParamLimits

0x4bb4,	// (0x0004312f) list_double_graphic_pane_cp2

0x4bb4,	// (0x0004312f) list_double_large_graphic_pane_cp2_ParamLimits

0x4bb4,	// (0x0004312f) list_double_large_graphic_pane_cp2

0x4bb4,	// (0x0004312f) list_double_number_pane_cp2_ParamLimits

0x4bb4,	// (0x0004312f) list_double_number_pane_cp2

0x4bb4,	// (0x0004312f) list_double_pane_cp2_ParamLimits

0x4bb4,	// (0x0004312f) list_double_pane_cp2

0xb9ee,	// (0x00049f69) list_single_2graphic_pane_cp2_ParamLimits

0xb9ee,	// (0x00049f69) list_single_2graphic_pane_cp2

0xb9ee,	// (0x00049f69) list_single_graphic_heading_pane_cp2_ParamLimits

0xb9ee,	// (0x00049f69) list_single_graphic_heading_pane_cp2

0xb9ee,	// (0x00049f69) list_single_graphic_pane_cp2_ParamLimits

0xb9ee,	// (0x00049f69) list_single_graphic_pane_cp2

0xb9ee,	// (0x00049f69) list_single_heading_pane_cp2_ParamLimits

0xb9ee,	// (0x00049f69) list_single_heading_pane_cp2

0x4bc4,	// (0x0004313f) list_single_large_graphic_pane_cp2_ParamLimits

0x4bc4,	// (0x0004313f) list_single_large_graphic_pane_cp2

0xb9ee,	// (0x00049f69) list_single_number_heading_pane_cp2_ParamLimits

0xb9ee,	// (0x00049f69) list_single_number_heading_pane_cp2

0xb9ee,	// (0x00049f69) list_single_number_pane_cp2_ParamLimits

0xb9ee,	// (0x00049f69) list_single_number_pane_cp2

0xb9ee,	// (0x00049f69) list_single_pane_cp2_ParamLimits

0xb9ee,	// (0x00049f69) list_single_pane_cp2

0x4bde,	// (0x00043159) bg_popup_sub_pane_cp22

0xa022,	// (0x0004859d) popup_side_volume_key_window_g1

0xa04c,	// (0x000485c7) popup_side_volume_key_window_t1

0xa068,	// (0x000485e3) volume_small_pane_cp1

0x1e62,	// (0x000403dd) bg_popup_sub_pane_cp24_ParamLimits

0x1e62,	// (0x000403dd) bg_popup_sub_pane_cp24

0x4bf4,	// (0x0004316f) fep_china_uni_candidate_pane_ParamLimits

0x4bf4,	// (0x0004316f) fep_china_uni_candidate_pane

0x4c08,	// (0x00043183) fep_china_uni_entry_pane

0x4c18,	// (0x00043193) popup_fep_china_uni_window_g1

0x4d4b,	// (0x000432c6) fep_china_uni_entry_pane_g1

0x4d53,	// (0x000432ce) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0004dcba) fep_china_uni_entry_pane_g

0x4d5b,	// (0x000432d6) fep_entry_item_pane

0x4d65,	// (0x000432e0) fep_candidate_item_pane

0x4d6d,	// (0x000432e8) fep_china_uni_candidate_pane_g1

0x4d75,	// (0x000432f0) fep_china_uni_candidate_pane_g2

0x4d7d,	// (0x000432f8) fep_china_uni_candidate_pane_g3

0x4d85,	// (0x00043300) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0004dcbf) fep_china_uni_candidate_pane_g

0x1e0a,	// (0x00040385) fep_entry_item_pane_g1

0x4d8d,	// (0x00043308) fep_entry_item_pane_t1_ParamLimits

0x4d8d,	// (0x00043308) fep_entry_item_pane_t1

0x4da3,	// (0x0004331e) fep_candidate_item_pane_t1_ParamLimits

0x4da3,	// (0x0004331e) fep_candidate_item_pane_t1

0x4db8,	// (0x00043333) fep_candidate_item_pane_t2_ParamLimits

0x4db8,	// (0x00043333) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0004dcc8) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0004dcc8) fep_candidate_item_pane_t

0x1e70,	// (0x000403eb) list_highlight_pane_cp31_ParamLimits

0x1e70,	// (0x000403eb) list_highlight_pane_cp31

0x4dca,	// (0x00043345) level_1_signal_lsc

0x4dd3,	// (0x0004334e) level_2_signal_lsc

0x4ddc,	// (0x00043357) level_3_signal_lsc

0x4de5,	// (0x00043360) level_4_signal_lsc

0x4dee,	// (0x00043369) level_5_signal_lsc

0x4df7,	// (0x00043372) level_6_signal_lsc

0x4e00,	// (0x0004337b) level_7_signal_lsc

0x4e00,	// (0x0004337b) level_1_battery_lsc

0x4e09,	// (0x00043384) level_2_battery_lsc

0x4e12,	// (0x0004338d) level_3_battery_lsc

0x4e1b,	// (0x00043396) level_4_battery_lsc

0x4e24,	// (0x0004339f) level_5_battery_lsc

0x4e2d,	// (0x000433a8) level_6_battery_lsc

0x4dca,	// (0x00043345) level_7_battery_lsc

0x4e36,	// (0x000433b1) scroll_handle_focus_pane_g1

0x4e3f,	// (0x000433ba) scroll_handle_focus_pane_g2

0x4e48,	// (0x000433c3) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0004dccd) scroll_handle_focus_pane_g

0xa070,	// (0x000485eb) list_single_2graphic_pane_g1_ParamLimits

0xa070,	// (0x000485eb) list_single_2graphic_pane_g1

0xb84c,	// (0x00049dc7) list_single_2graphic_pane_g2_ParamLimits

0xb84c,	// (0x00049dc7) list_single_2graphic_pane_g2

0xb82e,	// (0x00049da9) list_single_2graphic_pane_g3_ParamLimits

0xb82e,	// (0x00049da9) list_single_2graphic_pane_g3

0xba63,	// (0x00049fde) list_single_2graphic_pane_g4_ParamLimits

0xba63,	// (0x00049fde) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0004dcd4) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0004dcd4) list_single_2graphic_pane_g

0xba6f,	// (0x00049fea) list_single_2graphic_pane_t1_ParamLimits

0xba6f,	// (0x00049fea) list_single_2graphic_pane_t1

0xba9d,	// (0x0004a018) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xba9d,	// (0x0004a018) list_double2_graphic_large_graphic_pane_g1

0x9961,	// (0x00047edc) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9961,	// (0x00047edc) list_double2_graphic_large_graphic_pane_g2

0x98a6,	// (0x00047e21) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x98a6,	// (0x00047e21) list_double2_graphic_large_graphic_pane_g3

0xbaad,	// (0x0004a028) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbaad,	// (0x0004a028) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0004dcdd) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0004dcdd) list_double2_graphic_large_graphic_pane_g

0xbab9,	// (0x0004a034) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbab9,	// (0x0004a034) list_double2_graphic_large_graphic_pane_t1

0xbacf,	// (0x0004a04a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbacf,	// (0x0004a04a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0004dce6) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0004dce6) list_double2_graphic_large_graphic_pane_t

0x4f09,	// (0x00043484) popup_fast_swap_window_ParamLimits

0x4f09,	// (0x00043484) popup_fast_swap_window

0x4f25,	// (0x000434a0) popup_side_volume_key_window

0x4f41,	// (0x000434bc) stacon_top_pane

0x4f4b,	// (0x000434c6) status_pane_ParamLimits

0x4f4b,	// (0x000434c6) status_pane

0x4f41,	// (0x000434bc) status_small_pane

0x1e14,	// (0x0004038f) control_pane

0x1e14,	// (0x0004038f) stacon_bottom_pane

0x433f,	// (0x000428ba) scroll_pane_cp121

0x4336,	// (0x000428b1) set_content_pane

0xbae1,	// (0x0004a05c) bg_active_tab_pane_g1_cp1

0x4e5a,	// (0x000433d5) bg_active_tab_pane_g2_cp1

0xbaea,	// (0x0004a065) bg_active_tab_pane_g3_cp1

0xbae1,	// (0x0004a05c) bg_passive_tab_pane_g1_cp1

0x4e5a,	// (0x000433d5) bg_passive_tab_pane_g2_cp1

0xbaea,	// (0x0004a065) bg_passive_tab_pane_g3_cp1

0x4e63,	// (0x000433de) bg_active_tab_pane_g1_cp2

0x4e5a,	// (0x000433d5) bg_active_tab_pane_g2_cp2

0x4e51,	// (0x000433cc) bg_active_tab_pane_g3_cp2

0x4e63,	// (0x000433de) bg_passive_tab_pane_g1_cp2

0x4e5a,	// (0x000433d5) bg_passive_tab_pane_g2_cp2

0x4e51,	// (0x000433cc) bg_passive_tab_pane_g3_cp2

0xbaf3,	// (0x0004a06e) bg_active_tab_pane_g1_cp3

0x4e5a,	// (0x000433d5) bg_active_tab_pane_g2_cp3

0xbafc,	// (0x0004a077) bg_active_tab_pane_g3_cp3

0xbaf3,	// (0x0004a06e) bg_passive_tab_pane_g1_cp3

0x4e5a,	// (0x000433d5) bg_passive_tab_pane_g2_cp3

0xbafc,	// (0x0004a077) bg_passive_tab_pane_g3_cp3

0xbb05,	// (0x0004a080) bg_active_tab_pane_g1_cp4

0x4e5a,	// (0x000433d5) bg_active_tab_pane_g2_cp4

0xbb10,	// (0x0004a08b) bg_active_tab_pane_g3_cp4

0xbb05,	// (0x0004a080) bg_passive_tab_pane_g1_cp4

0x4e5a,	// (0x000433d5) bg_passive_tab_pane_g2_cp4

0xbb10,	// (0x0004a08b) bg_passive_tab_pane_g3_cp4

0x4eb3,	// (0x0004342e) bg_active_tab_pane_g1_cp5

0x4e5a,	// (0x000433d5) bg_active_tab_pane_g2_cp5

0x4eaa,	// (0x00043425) bg_active_tab_pane_g3_cp5

0x4eb3,	// (0x0004342e) bg_passive_tab_pane_g1_cp5

0x4e5a,	// (0x000433d5) bg_passive_tab_pane_g2_cp5

0x4eaa,	// (0x00043425) bg_passive_tab_pane_g3_cp5

0xbb1b,	// (0x0004a096) list_set_graphic_pane_ParamLimits

0xbb1b,	// (0x0004a096) list_set_graphic_pane

0x1e14,	// (0x0004038f) bg_set_opt_pane_cp4

0xbb38,	// (0x0004a0b3) list_set_graphic_pane_g1_ParamLimits

0xbb38,	// (0x0004a0b3) list_set_graphic_pane_g1

0xbb44,	// (0x0004a0bf) list_set_graphic_pane_g2_ParamLimits

0xbb44,	// (0x0004a0bf) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0004dceb) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0004dceb) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0004e04e) volume_small_pane_cp_g

0x4ebc,	// (0x00043437) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4ebc,	// (0x00043437) list_double2_large_graphic_pane_g1_cp2

0x4ec8,	// (0x00043443) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4ec8,	// (0x00043443) list_double2_large_graphic_pane_g2_cp2

0x4ed9,	// (0x00043454) list_double2_large_graphic_pane_g3_cp2

0x4ee1,	// (0x0004345c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4ee1,	// (0x0004345c) list_double2_large_graphic_pane_t1_cp2

0x4ef7,	// (0x00043472) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4ef7,	// (0x00043472) list_double2_large_graphic_pane_t2_cp2

0x6691,	// (0x00044c0c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6691,	// (0x00044c0c) list_double_large_graphic_pane_g1_cp2

0x66a2,	// (0x00044c1d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x66a2,	// (0x00044c1d) list_double_large_graphic_pane_g2_cp2

0x5067,	// (0x000435e2) list_double_large_graphic_pane_g3_cp2

0x66b3,	// (0x00044c2e) list_double_large_graphic_pane_g4_cp

0x66bb,	// (0x00044c36) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x66bb,	// (0x00044c36) list_double_large_graphic_pane_t1_cp2

0x66d2,	// (0x00044c4d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x66d2,	// (0x00044c4d) list_double_large_graphic_pane_t2_cp2

0x4f59,	// (0x000434d4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4f59,	// (0x000434d4) list_double2_graphic_pane_g1_cp2

0x4f67,	// (0x000434e2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4f67,	// (0x000434e2) list_double2_graphic_pane_g2_cp2

0x4f78,	// (0x000434f3) list_double2_graphic_pane_g3_cp2

0x4f82,	// (0x000434fd) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4f82,	// (0x000434fd) list_double2_graphic_pane_t1_cp2

0x4f98,	// (0x00043513) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4f98,	// (0x00043513) list_double2_graphic_pane_t2_cp2

0x4faa,	// (0x00043525) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4faa,	// (0x00043525) list_single_number_heading_pane_g1_cp2

0x4fb6,	// (0x00043531) list_single_number_heading_pane_g2_cp2

0x4fbe,	// (0x00043539) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4fbe,	// (0x00043539) list_single_number_heading_pane_t1_cp2

0x4fd4,	// (0x0004354f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4fd4,	// (0x0004354f) list_single_number_heading_pane_t2_cp2

0x4fe6,	// (0x00043561) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4fe6,	// (0x00043561) list_single_number_heading_pane_t3_cp2

0x4faa,	// (0x00043525) list_single_heading_pane_g1_cp2_ParamLimits

0x4faa,	// (0x00043525) list_single_heading_pane_g1_cp2

0x4fb6,	// (0x00043531) list_single_heading_pane_g2_cp2

0x4fbe,	// (0x00043539) list_single_heading_pane_t1_cp2_ParamLimits

0x4fbe,	// (0x00043539) list_single_heading_pane_t1_cp2

0x6499,	// (0x00044a14) list_single_heading_pane_t2_cp2_ParamLimits

0x6499,	// (0x00044a14) list_single_heading_pane_t2_cp2

0x63e1,	// (0x0004495c) list_double_graphic_pane_g1_cp2_ParamLimits

0x63e1,	// (0x0004495c) list_double_graphic_pane_g1_cp2

0x63ed,	// (0x00044968) list_double_graphic_pane_g2_cp2_ParamLimits

0x63ed,	// (0x00044968) list_double_graphic_pane_g2_cp2

0x63fc,	// (0x00044977) list_double_graphic_pane_g3_cp2

0x6404,	// (0x0004497f) list_double_graphic_pane_t1_cp2_ParamLimits

0x6404,	// (0x0004497f) list_double_graphic_pane_t1_cp2

0x641a,	// (0x00044995) list_double_graphic_pane_t2_cp2_ParamLimits

0x641a,	// (0x00044995) list_double_graphic_pane_t2_cp2

0x505b,	// (0x000435d6) list_double_number_pane_g1_cp2_ParamLimits

0x505b,	// (0x000435d6) list_double_number_pane_g1_cp2

0x5067,	// (0x000435e2) list_double_number_pane_g2_cp2

0x63a5,	// (0x00044920) list_double_number_pane_t1_cp2_ParamLimits

0x63a5,	// (0x00044920) list_double_number_pane_t1_cp2

0x63b9,	// (0x00044934) list_double_number_pane_t2_cp2_ParamLimits

0x63b9,	// (0x00044934) list_double_number_pane_t2_cp2

0x63cf,	// (0x0004494a) list_double_number_pane_t3_cp2_ParamLimits

0x63cf,	// (0x0004494a) list_double_number_pane_t3_cp2

0x631c,	// (0x00044897) list_single_graphic_pane_g1_cp2_ParamLimits

0x631c,	// (0x00044897) list_single_graphic_pane_g1_cp2

0x4d33,	// (0x000432ae) list_single_graphic_pane_g2_cp2_ParamLimits

0x4d33,	// (0x000432ae) list_single_graphic_pane_g2_cp2

0x50bf,	// (0x0004363a) list_single_graphic_pane_g3_cp2

0x62f2,	// (0x0004486d) list_single_graphic_pane_t1_cp2_ParamLimits

0x62f2,	// (0x0004486d) list_single_graphic_pane_t1_cp2

0x4d33,	// (0x000432ae) list_single_number_pane_g1_cp2_ParamLimits

0x4d33,	// (0x000432ae) list_single_number_pane_g1_cp2

0x50bf,	// (0x0004363a) list_single_number_pane_g2_cp2

0x62f2,	// (0x0004486d) list_single_number_pane_t1_cp2_ParamLimits

0x62f2,	// (0x0004486d) list_single_number_pane_t1_cp2

0x6308,	// (0x00044883) list_single_number_pane_t2_cp2_ParamLimits

0x6308,	// (0x00044883) list_single_number_pane_t2_cp2

0x4ec8,	// (0x00043443) list_double2_pane_g1_cp2_ParamLimits

0x4ec8,	// (0x00043443) list_double2_pane_g1_cp2

0x4ed9,	// (0x00043454) list_double2_pane_g2_cp2

0x5033,	// (0x000435ae) list_double2_pane_t1_cp2_ParamLimits

0x5033,	// (0x000435ae) list_double2_pane_t1_cp2

0x5049,	// (0x000435c4) list_double2_pane_t2_cp2_ParamLimits

0x5049,	// (0x000435c4) list_double2_pane_t2_cp2

0x505b,	// (0x000435d6) list_double_pane_g1_cp2_ParamLimits

0x505b,	// (0x000435d6) list_double_pane_g1_cp2

0x5067,	// (0x000435e2) list_double_pane_g2_cp2

0x506f,	// (0x000435ea) list_double_pane_t1_cp2_ParamLimits

0x506f,	// (0x000435ea) list_double_pane_t1_cp2

0x5085,	// (0x00043600) list_double_pane_t2_cp2_ParamLimits

0x5085,	// (0x00043600) list_double_pane_t2_cp2

0x50af,	// (0x0004362a) list_single_pane_cp2_g3

0x4d33,	// (0x000432ae) list_single_pane_g1_cp2_ParamLimits

0x4d33,	// (0x000432ae) list_single_pane_g1_cp2

0x50bf,	// (0x0004363a) list_single_pane_g2_cp2

0x50c7,	// (0x00043642) list_single_pane_t1_cp2_ParamLimits

0x50c7,	// (0x00043642) list_single_pane_t1_cp2

0x50df,	// (0x0004365a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x50df,	// (0x0004365a) list_single_large_graphic_pane_g1_cp2

0x50eb,	// (0x00043666) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x50eb,	// (0x00043666) list_single_large_graphic_pane_g2_cp2

0x50f7,	// (0x00043672) list_single_large_graphic_pane_g3_cp2

0x50ff,	// (0x0004367a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x50ff,	// (0x0004367a) list_single_large_graphic_pane_g4_cp1

0x5119,	// (0x00043694) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x5119,	// (0x00043694) list_single_large_graphic_pane_t1_cp2

0x62be,	// (0x00044839) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x62be,	// (0x00044839) list_single_graphic_heading_pane_g1_cp2

0x628b,	// (0x00044806) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x628b,	// (0x00044806) list_single_graphic_heading_pane_g4_cp2

0x50bf,	// (0x0004363a) list_single_graphic_heading_pane_g5_cp2

0x62ca,	// (0x00044845) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x62ca,	// (0x00044845) list_single_graphic_heading_pane_t1_cp2

0x62e0,	// (0x0004485b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x62e0,	// (0x0004485b) list_single_graphic_heading_pane_t2_cp2

0x627f,	// (0x000447fa) list_single_2graphic_pane_g1_cp2_ParamLimits

0x627f,	// (0x000447fa) list_single_2graphic_pane_g1_cp2

0x628b,	// (0x00044806) list_single_2graphic_pane_g2_cp2_ParamLimits

0x628b,	// (0x00044806) list_single_2graphic_pane_g2_cp2

0x50bf,	// (0x0004363a) list_single_2graphic_pane_g3_cp2

0x629c,	// (0x00044817) list_single_2graphic_pane_g4_cp2_ParamLimits

0x629c,	// (0x00044817) list_single_2graphic_pane_g4_cp2

0x62a8,	// (0x00044823) list_single_2graphic_pane_t1_cp2_ParamLimits

0x62a8,	// (0x00044823) list_single_2graphic_pane_t1_cp2

0x1e0a,	// (0x00040385) list_highlight_pane_g10_cp1

0x5e51,	// (0x000443cc) list_highlight_pane_g1_cp1

0x5e59,	// (0x000443d4) list_highlight_pane_g2_cp1

0x5e61,	// (0x000443dc) list_highlight_pane_g3_cp1

0x5e69,	// (0x000443e4) list_highlight_pane_g4_cp1

0x5e71,	// (0x000443ec) list_highlight_pane_g5_cp1

0x5e79,	// (0x000443f4) list_highlight_pane_g6_cp1

0x5e81,	// (0x000443fc) list_highlight_pane_g7_cp1

0x5e89,	// (0x00044404) list_highlight_pane_g8_cp1

0x5e91,	// (0x0004440c) list_highlight_pane_g9_cp1

0xd1b0,	// (0x0004b72b) form_field_slider_pane_t3

0xd1be,	// (0x0004b739) form_field_slider_pane_t4

0x5d8d,	// (0x00044308) slider_form_pane_ParamLimits

0x5d8d,	// (0x00044308) slider_form_pane

0x1e14,	// (0x0004038f) control_abbreviations

0x1e14,	// (0x0004038f) control_conventions

0x1e14,	// (0x0004038f) control_definitions

0x1e14,	// (0x0004038f) format_table_attribute

0x64e3,	// (0x00044a5e) bg_popup_preview_window_pane_g9

0x1e14,	// (0x0004038f) format_table_data2

0x1e14,	// (0x0004038f) format_table_data3

0x1e14,	// (0x0004038f) format_table_data_example

0x0008,

0x1e14,	// (0x0004038f) intro_purpose

0xf905,	// (0x0004de80) bg_popup_preview_window_pane_g

0x1e14,	// (0x0004038f) texts_category

0x1e14,	// (0x0004038f) texts_graphics

0x512f,	// (0x000436aa) text_digital

0x513e,	// (0x000436b9) text_primary

0x514d,	// (0x000436c8) text_primary_small

0x515c,	// (0x000436d7) text_secondary

0x516b,	// (0x000436e6) text_title

0x69d1,	// (0x00044f4c) bg_passive_tab_pane_g1_cp3_srt

0x4e5a,	// (0x000433d5) bg_passive_tab_pane_g2_cp3_srt

0x69c8,	// (0x00044f43) bg_passive_tab_pane_g3_cp3_srt

0x1e70,	// (0x000403eb) bg_active_tab_pane_cp3_srt_ParamLimits

0x1e70,	// (0x000403eb) bg_active_tab_pane_cp3_srt

0x69da,	// (0x00044f55) tabs_4_active_pane_srt_g1

0xd497,	// (0x0004ba12) tabs_4_active_pane_srt_t1_ParamLimits

0xd497,	// (0x0004ba12) tabs_4_active_pane_srt_t1

0x69d1,	// (0x00044f4c) bg_active_tab_pane_g1_cp3_copy1

0x4e5a,	// (0x000433d5) bg_active_tab_pane_g2_cp3_copy1

0x69c8,	// (0x00044f43) bg_active_tab_pane_g3_cp3_copy1

0x1e70,	// (0x000403eb) tabs_2_long_active_pane_srt_ParamLimits

0x1e70,	// (0x000403eb) tabs_2_long_active_pane_srt

0x1e70,	// (0x000403eb) tabs_2_long_passive_pane_srt_ParamLimits

0x1e70,	// (0x000403eb) tabs_2_long_passive_pane_srt

0xb928,	// (0x00049ea3) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb928,	// (0x00049ea3) bg_passive_tab_pane_cp4_srt

0x68e2,	// (0x00044e5d) bg_passive_tab_pane_g1_cp4_srt

0x4e5a,	// (0x000433d5) bg_passive_tab_pane_g2_cp4_srt

0x68d9,	// (0x00044e54) bg_passive_tab_pane_g3_cp4_srt

0x617f,	// (0x000446fa) bg_active_tab_pane_cp4_srt_ParamLimits

0x617f,	// (0x000446fa) bg_active_tab_pane_cp4_srt

0xd2c6,	// (0x0004b841) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd2c6,	// (0x0004b841) tabs_2_long_active_pane_srt_t1

0x68e2,	// (0x00044e5d) bg_active_tab_pane_g1_cp4_srt

0x4e5a,	// (0x000433d5) bg_active_tab_pane_g2_cp4_srt

0x68d9,	// (0x00044e54) bg_active_tab_pane_g3_cp4_srt

0x1e62,	// (0x000403dd) tabs_3_long_active_pane_srt_ParamLimits

0x1e62,	// (0x000403dd) tabs_3_long_active_pane_srt

0x1e62,	// (0x000403dd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x1e62,	// (0x000403dd) tabs_3_long_passive_pane_cp_srt

0x1e62,	// (0x000403dd) tabs_3_long_passive_pane_srt_ParamLimits

0x1e62,	// (0x000403dd) tabs_3_long_passive_pane_srt

0xb928,	// (0x00049ea3) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb928,	// (0x00049ea3) bg_passive_tab_pane_cp5_srt

0x4eb3,	// (0x0004342e) bg_passive_tab_pane_g1_cp5_srt

0x4e5a,	// (0x000433d5) bg_passive_tab_pane_g2_cp5_srt

0x4eaa,	// (0x00043425) bg_passive_tab_pane_g3_cp5_srt

0x617f,	// (0x000446fa) bg_active_tab_pane_cp5_srt_ParamLimits

0x617f,	// (0x000446fa) bg_active_tab_pane_cp5_srt

0xd2b4,	// (0x0004b82f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd2b4,	// (0x0004b82f) tabs_3_long_active_pane_srt_t1

0x4eb3,	// (0x0004342e) bg_active_tab_pane_g1_cp5_srt

0x4e5a,	// (0x000433d5) bg_active_tab_pane_g2_cp5_srt

0x4eaa,	// (0x00043425) bg_active_tab_pane_g3_cp5_srt

0x68cb,	// (0x00044e46) navi_text_pane_srt_t1

0x68c3,	// (0x00044e3e) navi_icon_pane_srt_g1

0x5283,	// (0x000437fe) midp_editing_number_pane_srt

0x517a,	// (0x000436f5) midp_ticker_pane_srt

0x528b,	// (0x00043806) midp_ticker_pane_srt_g1

0x5293,	// (0x0004380e) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0004dd0a) midp_ticker_pane_srt_g

0x529b,	// (0x00043816) midp_ticker_pane_srt_t1

0x68b4,	// (0x00044e2f) midp_editing_number_pane_t1_copy1

0xb928,	// (0x00049ea3) listscroll_midp_pane

0xb928,	// (0x00049ea3) midp_form_pane

0x5182,	// (0x000436fd) midp_info_popup_window_ParamLimits

0x5182,	// (0x000436fd) midp_info_popup_window

0x4414,	// (0x0004298f) bg_popup_sub_pane_cp50_ParamLimits

0x4414,	// (0x0004298f) bg_popup_sub_pane_cp50

0x5a7b,	// (0x00043ff6) listscroll_midp_info_pane_ParamLimits

0x5a7b,	// (0x00043ff6) listscroll_midp_info_pane

0x5a63,	// (0x00043fde) listscroll_form_midp_pane_ParamLimits

0x5a63,	// (0x00043fde) listscroll_form_midp_pane

0x5a6f,	// (0x00043fea) scroll_bar_cp050

0xd198,	// (0x0004b713) list_midp_pane

0x7278,	// (0x000457f3) signal_pane_g2_cp

0x5995,	// (0x00043f10) listscroll_midp_info_pane_t1_ParamLimits

0x5995,	// (0x00043f10) listscroll_midp_info_pane_t1

0x59ad,	// (0x00043f28) listscroll_midp_info_pane_t2_ParamLimits

0x59ad,	// (0x00043f28) listscroll_midp_info_pane_t2

0x59eb,	// (0x00043f66) listscroll_midp_info_pane_t3_ParamLimits

0x59eb,	// (0x00043f66) listscroll_midp_info_pane_t3

0x5a25,	// (0x00043fa0) listscroll_midp_info_pane_t4_ParamLimits

0x5a25,	// (0x00043fa0) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x0004ddbb) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x0004ddbb) listscroll_midp_info_pane_t

0x447b,	// (0x000429f6) scroll_pane_cp21

0x5933,	// (0x00043eae) form_midp_field_choice_group_pane

0x593c,	// (0x00043eb7) form_midp_field_text_pane

0x597b,	// (0x00043ef6) form_midp_field_time_pane

0x5983,	// (0x00043efe) form_midp_gauge_slider_pane

0x598c,	// (0x00043f07) form_midp_gauge_wait_pane

0x1e14,	// (0x0004038f) form_midp_image_pane

0xbcb4,	// (0x0004a22f) list_single_midp_pane_ParamLimits

0xbcb4,	// (0x0004a22f) list_single_midp_pane

0xd161,	// (0x0004b6dc) form_midp_field_text_pane_t1

0x57da,	// (0x00043d55) input_focus_pane_cp050

0x5922,	// (0x00043e9d) list_midp_form_text_pane

0x58f1,	// (0x00043e6c) form_midp_field_choice_group_pane_t1

0x58ff,	// (0x00043e7a) input_focus_pane_cp051

0x5913,	// (0x00043e8e) list_midp_choice_pane

0x1e14,	// (0x0004038f) status_idle_pane

0x58d5,	// (0x00043e50) form_midp_field_time_pane_t1

0x1e0a,	// (0x00040385) wait_anim_pane_g2_copy1

0x58e3,	// (0x00043e5e) form_midp_field_time_pane_t2

0x0001,

0x51ed,	// (0x00043768) aid_navinavi_width_2_pane

0xf83b,	// (0x0004ddb6) form_midp_field_time_pane_t

0x1e14,	// (0x0004038f) input_focus_pane_cp052

0x1e14,	// (0x0004038f) bg_input_focus_pane_cp040

0x58b1,	// (0x00043e2c) form_midp_gauge_slider_pane_t1

0x58bf,	// (0x00043e3a) form_midp_gauge_slider_pane_t2

0xd145,	// (0x0004b6c0) form_midp_gauge_slider_pane_t3

0xd153,	// (0x0004b6ce) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x0004ddad) form_midp_gauge_slider_pane_t

0x58cd,	// (0x00043e48) form_midp_slider_pane

0x1e70,	// (0x000403eb) bg_input_focus_pane_cp041_ParamLimits

0x1e70,	// (0x000403eb) bg_input_focus_pane_cp041

0x587e,	// (0x00043df9) form_midp_gauge_wait_pane_t1_ParamLimits

0x587e,	// (0x00043df9) form_midp_gauge_wait_pane_t1

0x5890,	// (0x00043e0b) form_midp_gauge_wait_pane_t2_ParamLimits

0x5890,	// (0x00043e0b) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x0004dda8) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x0004dda8) form_midp_gauge_wait_pane_t

0x58a2,	// (0x00043e1d) form_midp_wait_pane_ParamLimits

0x58a2,	// (0x00043e1d) form_midp_wait_pane

0x5848,	// (0x00043dc3) form_midp_image_pane_g1

0x5851,	// (0x00043dcc) form_midp_image_pane_t1

0x5860,	// (0x00043ddb) form_midp_image_pane_t2

0x586f,	// (0x00043dea) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x0004dda1) form_midp_image_pane_t

0x583f,	// (0x00043dba) list_single_midp_pane_g1

0xbca5,	// (0x0004a220) list_single_midp_pane_t1

0xd11d,	// (0x0004b698) list_midp_form_item_pane_ParamLimits

0xd11d,	// (0x0004b698) list_midp_form_item_pane

0x5195,	// (0x00043710) list_midp_form_item_pane_t1

0x51a4,	// (0x0004371f) midp_ticker_pane_g1

0x51b0,	// (0x0004372b) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0004dcf0) midp_ticker_pane_g

0x51bc,	// (0x00043737) midp_ticker_pane_t1

0x696a,	// (0x00044ee5) midp_editing_number_pane_t1

0x6948,	// (0x00044ec3) midp_editing_number_pane

0x6957,	// (0x00044ed2) midp_ticker_pane

0x68a4,	// (0x00044e1f) ai_message_heading_pane

0x1e14,	// (0x0004038f) bg_popup_window_pane_cp14

0x68ac,	// (0x00044e27) listscroll_ai_message_pane

0x682e,	// (0x00044da9) ai_message_heading_pane_g1_ParamLimits

0x682e,	// (0x00044da9) ai_message_heading_pane_g1

0x683a,	// (0x00044db5) ai_message_heading_pane_g2_ParamLimits

0x683a,	// (0x00044db5) ai_message_heading_pane_g2

0x6846,	// (0x00044dc1) ai_message_heading_pane_g3_ParamLimits

0x6846,	// (0x00044dc1) ai_message_heading_pane_g3

0x6852,	// (0x00044dcd) ai_message_heading_pane_g4_ParamLimits

0x6852,	// (0x00044dcd) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x0004dee2) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x0004dee2) ai_message_heading_pane_g

0x685e,	// (0x00044dd9) ai_message_heading_pane_t1_ParamLimits

0x685e,	// (0x00044dd9) ai_message_heading_pane_t1

0x6878,	// (0x00044df3) ai_message_heading_pane_t2_ParamLimits

0x6878,	// (0x00044df3) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x0004deeb) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x0004deeb) ai_message_heading_pane_t

0x688a,	// (0x00044e05) bg_popup_heading_pane_cp1_ParamLimits

0x688a,	// (0x00044e05) bg_popup_heading_pane_cp1

0x681c,	// (0x00044d97) list_ai_message_pane_ParamLimits

0x681c,	// (0x00044d97) list_ai_message_pane

0x447b,	// (0x000429f6) scroll_pane_cp10

0x67b8,	// (0x00044d33) list_ai_message_pane_g1

0x67c0,	// (0x00044d3b) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x0004debf) list_ai_message_pane_g

0x67c8,	// (0x00044d43) list_ai_message_pane_t1_ParamLimits

0x67c8,	// (0x00044d43) list_ai_message_pane_t1

0x67dd,	// (0x00044d58) list_ai_message_pane_t2_ParamLimits

0x67dd,	// (0x00044d58) list_ai_message_pane_t2

0x67f2,	// (0x00044d6d) list_ai_message_pane_t3_ParamLimits

0x67f2,	// (0x00044d6d) list_ai_message_pane_t3

0x6807,	// (0x00044d82) list_ai_message_pane_t4_ParamLimits

0x6807,	// (0x00044d82) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x0004dec4) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x0004dec4) list_ai_message_pane_t

0xd29f,	// (0x0004b81a) cell_ai_soft_ind_pane_ParamLimits

0xd29f,	// (0x0004b81a) cell_ai_soft_ind_pane

0x51ce,	// (0x00043749) cell_ai_soft_ind_pane_g1_ParamLimits

0x51ce,	// (0x00043749) cell_ai_soft_ind_pane_g1

0x1e14,	// (0x0004038f) grid_highlight_cp1

0x51db,	// (0x00043756) text_secondary_cp56_ParamLimits

0x51db,	// (0x00043756) text_secondary_cp56

0x678d,	// (0x00044d08) example_general_pane_ParamLimits

0x678d,	// (0x00044d08) example_general_pane

0x6799,	// (0x00044d14) example_parent_pane_g1_ParamLimits

0x6799,	// (0x00044d14) example_parent_pane_g1

0x67a5,	// (0x00044d20) example_parent_pane_t1_ParamLimits

0x67a5,	// (0x00044d20) example_parent_pane_t1

0xcbe2,	// (0x0004b15d) popup_preview_text_window_ParamLimits

0xcbe2,	// (0x0004b15d) popup_preview_text_window

0x50b7,	// (0x00043632) list_single_pane_cp2_g4

0x204b,	// (0x000405c6) bg_popup_preview_window_pane_ParamLimits

0x204b,	// (0x000405c6) bg_popup_preview_window_pane

0x64eb,	// (0x00044a66) popup_preview_text_window_t1_ParamLimits

0x64eb,	// (0x00044a66) popup_preview_text_window_t1

0x6509,	// (0x00044a84) popup_preview_text_window_t2_ParamLimits

0x6509,	// (0x00044a84) popup_preview_text_window_t2

0x6552,	// (0x00044acd) popup_preview_text_window_t3_ParamLimits

0x6552,	// (0x00044acd) popup_preview_text_window_t3

0x6597,	// (0x00044b12) popup_preview_text_window_t4_ParamLimits

0x6597,	// (0x00044b12) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x0004de93) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x0004de93) popup_preview_text_window_t

0x6615,	// (0x00044b90) scroll_pane_cp11

0x56d6,	// (0x00043c51) bg_popup_preview_window_pane_g1

0x64ab,	// (0x00044a26) bg_popup_preview_window_pane_g2

0x64b3,	// (0x00044a2e) bg_popup_preview_window_pane_g3

0x64bb,	// (0x00044a36) bg_popup_preview_window_pane_g4

0x64c3,	// (0x00044a3e) bg_popup_preview_window_pane_g5

0x64cb,	// (0x00044a46) bg_popup_preview_window_pane_g6

0x64d3,	// (0x00044a4e) bg_popup_preview_window_pane_g7

0x64db,	// (0x00044a56) bg_popup_preview_window_pane_g8

0x9239,	// (0x000477b4) aid_popup_width_pane

0xc6f3,	// (0x0004ac6e) popup_midp_note_alarm_window_ParamLimits

0xc6f3,	// (0x0004ac6e) popup_midp_note_alarm_window

0x4350,	// (0x000428cb) data_form_pane_ParamLimits

0x9c2b,	// (0x000481a6) form_field_data_pane_g1

0x9c35,	// (0x000481b0) form_field_data_pane_t1_ParamLimits

0x435c,	// (0x000428d7) input_focus_pane_ParamLimits

0x436a,	// (0x000428e5) data_form_wide_pane_ParamLimits

0x9c4d,	// (0x000481c8) form_field_data_wide_pane_g1

0x9c59,	// (0x000481d4) form_field_data_wide_pane_t1_ParamLimits

0x2a62,	// (0x00040fdd) input_focus_pane_cp6_ParamLimits

0xb8ef,	// (0x00049e6a) input_popup_find_pane_g1_ParamLimits

0xb8ef,	// (0x00049e6a) input_popup_find_pane_g1

0x9ed1,	// (0x0004844c) aid_navi_side_left_pane

0x9ee6,	// (0x00048461) aid_navi_side_right_pane

0x5f2e,	// (0x000444a9) bg_popup_window_pane_cp30_ParamLimits

0x5f2e,	// (0x000444a9) bg_popup_window_pane_cp30

0x5fa8,	// (0x00044523) popup_midp_note_alarm_window_g1_ParamLimits

0x5fa8,	// (0x00044523) popup_midp_note_alarm_window_g1

0x5fd8,	// (0x00044553) popup_midp_note_alarm_window_t1_ParamLimits

0x5fd8,	// (0x00044553) popup_midp_note_alarm_window_t1

0x6079,	// (0x000445f4) popup_midp_note_alarm_window_t2_ParamLimits

0x6079,	// (0x000445f4) popup_midp_note_alarm_window_t2

0x6127,	// (0x000446a2) popup_midp_note_alarm_window_t3_ParamLimits

0x6127,	// (0x000446a2) popup_midp_note_alarm_window_t3

0x6159,	// (0x000446d4) popup_midp_note_alarm_window_t4_ParamLimits

0x6159,	// (0x000446d4) popup_midp_note_alarm_window_t4

0x61a3,	// (0x0004471e) popup_midp_note_alarm_window_t5_ParamLimits

0x61a3,	// (0x0004471e) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x0004de30) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x0004de30) popup_midp_note_alarm_window_t

0x624f,	// (0x000447ca) wait_bar_pane_cp1_ParamLimits

0x624f,	// (0x000447ca) wait_bar_pane_cp1

0x1e14,	// (0x0004038f) wait_anim_pane_copy1

0x1e14,	// (0x0004038f) wait_border_pane_copy1

0x5c24,	// (0x0004419f) wait_border_pane_g1_copy1

0x9c73,	// (0x000481ee) form_field_popup_pane_g1

0x9c7b,	// (0x000481f6) form_field_popup_pane_t1_ParamLimits

0x435c,	// (0x000428d7) input_focus_pane_cp7_ParamLimits

0x4396,	// (0x00042911) list_form_pane_ParamLimits

0x9c93,	// (0x0004820e) form_field_popup_wide_pane_g1

0x9c9b,	// (0x00048216) form_field_popup_wide_pane_t1_ParamLimits

0x435c,	// (0x000428d7) input_focus_pane_cp8_ParamLimits

0x43a2,	// (0x0004291d) list_form_wide_pane_ParamLimits

0x6a01,	// (0x00044f7c) aid_size_cell_graphic_pane

0x9d25,	// (0x000482a0) data_form_pane_t1_ParamLimits

0xbd07,	// (0x0004a282) data_form_wide_pane_t1_ParamLimits

0xce2c,	// (0x0004b3a7) bg_status_flat_pane

0xb55d,	// (0x00049ad8) title_pane_t1_ParamLimits

0x1e2a,	// (0x000403a5) title_pane_t2_ParamLimits

0x1e50,	// (0x000403cb) title_pane_t3_ParamLimits

0xf56f,	// (0x0004daea) title_pane_t_ParamLimits

0x4b12,	// (0x0004308d) level_1_signal_ParamLimits

0x4b1f,	// (0x0004309a) level_2_signal_ParamLimits

0x4b2c,	// (0x000430a7) level_3_signal_ParamLimits

0x4b39,	// (0x000430b4) level_4_signal_ParamLimits

0x4b46,	// (0x000430c1) level_5_signal_ParamLimits

0x4b53,	// (0x000430ce) level_6_signal_ParamLimits

0x4b60,	// (0x000430db) level_7_signal_ParamLimits

0x4b12,	// (0x0004308d) level_1_battery_ParamLimits

0x4b1f,	// (0x0004309a) level_2_battery_ParamLimits

0x4b2c,	// (0x000430a7) level_3_battery_ParamLimits

0x4b39,	// (0x000430b4) level_4_battery_ParamLimits

0x4b46,	// (0x000430c1) level_5_battery_ParamLimits

0x4b53,	// (0x000430ce) level_6_battery_ParamLimits

0x4b60,	// (0x000430db) level_7_battery_ParamLimits

0x5e51,	// (0x000443cc) bg_status_flat_pane_g1

0x5e59,	// (0x000443d4) bg_status_flat_pane_g2

0x5e61,	// (0x000443dc) bg_status_flat_pane_g3

0x5e69,	// (0x000443e4) bg_status_flat_pane_g4

0x5e71,	// (0x000443ec) bg_status_flat_pane_g5

0x5e79,	// (0x000443f4) bg_status_flat_pane_g6

0x5e81,	// (0x000443fc) bg_status_flat_pane_g7

0xb5cd,	// (0x00049b48) tabs_3_active_pane_t1_ParamLimits

0xb5cd,	// (0x00049b48) tabs_3_passive_pane_t1_ParamLimits

0xb5e7,	// (0x00049b62) tabs_4_active_pane_t1_ParamLimits

0xb5e7,	// (0x00049b62) tabs_4_1_passive_pane_t1_ParamLimits

0xb903,	// (0x00049e7e) tabs_2_active_pane_t1_ParamLimits

0xb903,	// (0x00049e7e) tabs_2_passive_pane_t1_ParamLimits

0x617f,	// (0x000446fa) bg_active_tab_pane_cp4_ParamLimits

0xb915,	// (0x00049e90) tabs_2_long_active_pane_t1_ParamLimits

0xb928,	// (0x00049ea3) bg_passive_tab_pane_cp4_ParamLimits

0xa43d,	// (0x000489b8) list_single_midp_graphic_pane_t1_ParamLimits

0x617f,	// (0x000446fa) bg_active_tab_pane_cp5_ParamLimits

0xb934,	// (0x00049eaf) tabs_3_long_active_pane_t1_ParamLimits

0xb928,	// (0x00049ea3) bg_passive_tab_pane_cp5_ParamLimits

0xa43d,	// (0x000489b8) list_single_midp_graphic_pane_t1

0xce2c,	// (0x0004b3a7) bg_status_flat_pane_ParamLimits

0x55a7,	// (0x00043b22) indicator_pane_cp2_ParamLimits

0x55a7,	// (0x00043b22) indicator_pane_cp2

0xcf70,	// (0x0004b4eb) navi_pane_srt_ParamLimits

0xcf70,	// (0x0004b4eb) navi_pane_srt

0x55cf,	// (0x00043b4a) popup_clock_digital_analogue_window_cp1

0x1eb4,	// (0x0004042f) indicator_pane_t1

0x517a,	// (0x000436f5) copy_highlight_pane

0x517a,	// (0x000436f5) cursor_graphics_pane

0x517a,	// (0x000436f5) graphic_within_text_pane

0x517a,	// (0x000436f5) link_highlight_pane

0x65d8,	// (0x00044b53) popup_preview_text_window_t5_ParamLimits

0x65d8,	// (0x00044b53) popup_preview_text_window_t5

0x51f5,	// (0x00043770) cursor_digital_pane

0x51f5,	// (0x00043770) cursor_primary_pane

0x5206,	// (0x00043781) cursor_primary_small_pane

0x520e,	// (0x00043789) cursor_secondary_pane

0x5216,	// (0x00043791) cursor_title_pane

0x51f5,	// (0x00043770) link_highlight_digital_pane

0x51fd,	// (0x00043778) link_highlight_primary_pane

0x5206,	// (0x00043781) link_highlight_primary_small_pane

0x520e,	// (0x00043789) link_highlight_secondary_pane

0x5216,	// (0x00043791) link_highlight_title_pane

0x51f5,	// (0x00043770) copy_highlight_digital_pane

0x51f5,	// (0x00043770) copy_highlight_primary_pane

0x5206,	// (0x00043781) copy_highlight_primary_small_pane

0x520e,	// (0x00043789) copy_highlight_secondary_pane

0x5216,	// (0x00043791) copy_highlight_title_pane

0x520e,	// (0x00043789) graphic_text_digital_pane

0x5ed1,	// (0x0004444c) graphic_text_primary_pane

0x5eda,	// (0x00044455) graphic_text_primary_small_pane

0x5206,	// (0x00043781) graphic_text_secondary_pane

0x51f5,	// (0x00043770) graphic_text_title_pane

0xbc0d,	// (0x0004a188) cursor_primary_pane_g1

0x5ec3,	// (0x0004443e) cursor_text_primary_t1

0xd1e0,	// (0x0004b75b) cursor_primary_small_pane_g1

0x5eb5,	// (0x00044430) cursor_text_primary_small_t1

0xd1d6,	// (0x0004b751) cursor_primary_small_pane_g1_copy1

0x5ea7,	// (0x00044422) cursor_text_primary_small_t1_copy1

0x5e99,	// (0x00044414) cursor_text_title_t1

0xd1cc,	// (0x0004b747) cursor_title_pane_g1

0xbc0d,	// (0x0004a188) cursor_digital_pane_g1

0x521e,	// (0x00043799) cursor_text_digital_t1

0x5243,	// (0x000437be) link_highlight_primary_pane_g1

0x5e42,	// (0x000443bd) link_highlight_primary_pane_t1

0x522c,	// (0x000437a7) link_highlight_primary_small_pane_g1

0x5234,	// (0x000437af) link_highlight_primary_small_pane_t1

0x5243,	// (0x000437be) link_highlight_secondary_pane_g1

0x524b,	// (0x000437c6) link_highlight_secondary_pane_t1

0x5db6,	// (0x00044331) link_highlight_title_pane_g1

0x5dbe,	// (0x00044339) link_highlight_title_pane_t1

0x5d9f,	// (0x0004431a) link_highlight_digital_pane_g1

0x5da7,	// (0x00044322) link_highlight_digital_pane_t1

0x5c69,	// (0x000441e4) copy_highlight_primary_pane_g1

0x5c71,	// (0x000441ec) copy_highlight_primary_pane_t1

0x5c43,	// (0x000441be) copy_highlight_primary_small_pane_g1

0x5c5a,	// (0x000441d5) copy_highlight_primary_small_pane_t1

0x525a,	// (0x000437d5) copy_highlight_secondary_pane_g1

0x5262,	// (0x000437dd) copy_highlight_secondary_pane_t1

0x5c43,	// (0x000441be) copy_highlight_title_pane_g1

0x5c4b,	// (0x000441c6) copy_highlight_title_pane_t1

0x5c69,	// (0x000441e4) copy_highlight_digital_pane_g1

0x6b87,	// (0x00045102) copy_highlight_digital_pane_t1

0x6adb,	// (0x00045056) graphic_text_primary_pane_g1

0x6b6b,	// (0x000450e6) graphic_text_primary_pane_t1

0x6b79,	// (0x000450f4) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x0004df5f) graphic_text_primary_pane_t

0x6b47,	// (0x000450c2) graphic_text_primary_small_pane_g1

0x6b4f,	// (0x000450ca) graphic_text_primary_small_pane_t1

0x6b5d,	// (0x000450d8) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x0004df5a) graphic_text_primary_small_pane_t

0x6b23,	// (0x0004509e) graphic_text_secondary_pane_g1

0x6b2b,	// (0x000450a6) graphic_text_secondary_pane_t1

0x6b39,	// (0x000450b4) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x0004df55) graphic_text_secondary_pane_t

0x6aff,	// (0x0004507a) graphic_text_title_pane_g1

0x6b07,	// (0x00045082) graphic_text_title_pane_t1

0x6b15,	// (0x00045090) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x0004df50) graphic_text_title_pane_t

0x6adb,	// (0x00045056) graphic_text_digital_pane_g1

0x6ae3,	// (0x0004505e) graphic_text_digital_pane_t1

0x6af1,	// (0x0004506c) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x0004df4b) graphic_text_digital_pane_t

0x1e70,	// (0x000403eb) navi_icon_pane_srt_ParamLimits

0x1e70,	// (0x000403eb) navi_icon_pane_srt

0x1e14,	// (0x0004038f) navi_midp_pane_srt

0x1e14,	// (0x0004038f) navi_navi_pane_srt

0x1e70,	// (0x000403eb) navi_text_pane_srt_ParamLimits

0x1e70,	// (0x000403eb) navi_text_pane_srt

0x6aa6,	// (0x00045021) navi_navi_icon_text_pane_srt

0x6ac0,	// (0x0004503b) navi_navi_pane_srt_g1_ParamLimits

0x6ac0,	// (0x0004503b) navi_navi_pane_srt_g1

0x6aae,	// (0x00045029) navi_navi_pane_srt_g2_ParamLimits

0x6aae,	// (0x00045029) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x0004df46) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x0004df46) navi_navi_pane_srt_g

0x6ad2,	// (0x0004504d) navi_navi_tabs_pane_srt

0x6aa6,	// (0x00045021) navi_navi_text_pane_srt

0x6aa6,	// (0x00045021) navi_navi_volume_pane_srt

0x6a97,	// (0x00045012) navi_navi_text_pane_srt_t1

0xa7b7,	// (0x00048d32) navi_navi_volume_pane_srt_g1

0xa7bf,	// (0x00048d3a) volume_small_pane_srt_ParamLimits

0xa7bf,	// (0x00048d3a) volume_small_pane_srt

0xa1bd,	// (0x00048738) volume_small_pane_srt_g1_ParamLimits

0xa1bd,	// (0x00048738) volume_small_pane_srt_g1

0xa1cd,	// (0x00048748) volume_small_pane_srt_g2_ParamLimits

0xa1cd,	// (0x00048748) volume_small_pane_srt_g2

0xa1de,	// (0x00048759) volume_small_pane_srt_g3_ParamLimits

0xa1de,	// (0x00048759) volume_small_pane_srt_g3

0xa1ef,	// (0x0004876a) volume_small_pane_srt_g4_ParamLimits

0xa1ef,	// (0x0004876a) volume_small_pane_srt_g4

0xa200,	// (0x0004877b) volume_small_pane_srt_g5_ParamLimits

0xa200,	// (0x0004877b) volume_small_pane_srt_g5

0xa211,	// (0x0004878c) volume_small_pane_srt_g6_ParamLimits

0xa211,	// (0x0004878c) volume_small_pane_srt_g6

0xa222,	// (0x0004879d) volume_small_pane_srt_g7_ParamLimits

0xa222,	// (0x0004879d) volume_small_pane_srt_g7

0xa233,	// (0x000487ae) volume_small_pane_srt_g8_ParamLimits

0xa233,	// (0x000487ae) volume_small_pane_srt_g8

0xa244,	// (0x000487bf) volume_small_pane_srt_g9_ParamLimits

0xa244,	// (0x000487bf) volume_small_pane_srt_g9

0xa255,	// (0x000487d0) volume_small_pane_srt_g10_ParamLimits

0xa255,	// (0x000487d0) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0004dcf5) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0004dcf5) volume_small_pane_srt_g

0x296a,	// (0x00040ee5) query_popup_data_pane_cp2

0x6a7d,	// (0x00044ff8) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6a7d,	// (0x00044ff8) navi_navi_icon_text_pane_srt_t1

0x5ed1,	// (0x0004444c) navi_tabs_2_long_pane_srt

0x5ed1,	// (0x0004444c) navi_tabs_2_pane_srt

0x5ed1,	// (0x0004444c) navi_tabs_3_long_pane_srt

0x5ed1,	// (0x0004444c) navi_tabs_3_pane_srt

0x5ed1,	// (0x0004444c) navi_tabs_4_pane_srt

0xa797,	// (0x00048d12) tabs_2_active_pane_srt_ParamLimits

0xa797,	// (0x00048d12) tabs_2_active_pane_srt

0xa7a7,	// (0x00048d22) tabs_2_passive_pane_srt_ParamLimits

0xa7a7,	// (0x00048d22) tabs_2_passive_pane_srt

0x44b4,	// (0x00042a2f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x44b4,	// (0x00042a2f) bg_passive_tab_pane_cp1_srt

0x6a64,	// (0x00044fdf) bg_passive_tab_pane_g1_cp1_srt

0x4e5a,	// (0x000433d5) bg_passive_tab_pane_g2_cp1_srt

0x6a5b,	// (0x00044fd6) bg_passive_tab_pane_g3_cp1_srt

0x1e70,	// (0x000403eb) bg_active_tab_pane_cp1_srt_ParamLimits

0x1e70,	// (0x000403eb) bg_active_tab_pane_cp1_srt

0x6a6d,	// (0x00044fe8) tabs_2_active_pane_srt_g1

0xd510,	// (0x0004ba8b) tabs_2_active_pane_srt_t1_ParamLimits

0xd510,	// (0x0004ba8b) tabs_2_active_pane_srt_t1

0x6a64,	// (0x00044fdf) bg_active_tab_pane_g1_cp1_srt

0x4e5a,	// (0x000433d5) bg_active_tab_pane_g2_cp1_srt

0x6a5b,	// (0x00044fd6) bg_active_tab_pane_g3_cp1_srt

0xa764,	// (0x00048cdf) tabs_3_active_pane_srt_ParamLimits

0xa764,	// (0x00048cdf) tabs_3_active_pane_srt

0xa775,	// (0x00048cf0) tabs_3_passive_pane_cp_srt_ParamLimits

0xa775,	// (0x00048cf0) tabs_3_passive_pane_cp_srt

0xa786,	// (0x00048d01) tabs_3_passive_pane_srt_ParamLimits

0xa786,	// (0x00048d01) tabs_3_passive_pane_srt

0x44b4,	// (0x00042a2f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x44b4,	// (0x00042a2f) bg_passive_tab_pane_cp2_srt

0x527a,	// (0x000437f5) bg_passive_tab_pane_g1_cp2_srt

0x4e5a,	// (0x000433d5) bg_passive_tab_pane_g2_cp2_srt

0x5271,	// (0x000437ec) bg_passive_tab_pane_g3_cp2_srt

0x1e70,	// (0x000403eb) bg_active_tab_pane_cp2_srt_ParamLimits

0x1e70,	// (0x000403eb) bg_active_tab_pane_cp2_srt

0x6a53,	// (0x00044fce) tabs_3_active_pane_srt_g1

0xd4fe,	// (0x0004ba79) tabs_3_active_pane_srt_t1_ParamLimits

0xd4fe,	// (0x0004ba79) tabs_3_active_pane_srt_t1

0x527a,	// (0x000437f5) bg_active_tab_pane_g1_cp2_srt

0x4e5a,	// (0x000433d5) bg_active_tab_pane_g2_cp2_srt

0x5271,	// (0x000437ec) bg_active_tab_pane_g3_cp2_srt

0xa71c,	// (0x00048c97) tabs_4_active_pane_srt_ParamLimits

0xa71c,	// (0x00048c97) tabs_4_active_pane_srt

0xa72e,	// (0x00048ca9) tabs_4_passive_pane_cp2_srt_ParamLimits

0xa72e,	// (0x00048ca9) tabs_4_passive_pane_cp2_srt

0x539e,	// (0x00043919) aid_size_cell_toolbar

0xb928,	// (0x00049ea3) main_idle_act_pane_ParamLimits

0x5466,	// (0x000439e1) popup_large_graphic_colour_window_ParamLimits

0xcd38,	// (0x0004b2b3) popup_toolbar_window_ParamLimits

0xcd38,	// (0x0004b2b3) popup_toolbar_window

0x6979,	// (0x00044ef4) list_single_graphic_2heading_pane_ParamLimits

0x6979,	// (0x00044ef4) list_single_graphic_2heading_pane

0x4959,	// (0x00042ed4) aid_size_cell_apps_grid_lsc_pane

0x496b,	// (0x00042ee6) aid_size_cell_apps_grid_prt_pane

0x44b4,	// (0x00042a2f) bg_wml_button_pane_cp1_ParamLimits

0x44b4,	// (0x00042a2f) bg_wml_button_pane_cp1

0xd161,	// (0x0004b6dc) form_midp_field_text_pane_t1_ParamLimits

0x57da,	// (0x00043d55) input_focus_pane_cp050_ParamLimits

0x5922,	// (0x00043e9d) list_midp_form_text_pane_ParamLimits

0x58ff,	// (0x00043e7a) input_focus_pane_cp051_ParamLimits

0x5913,	// (0x00043e8e) list_midp_choice_pane_ParamLimits

0xd0c7,	// (0x0004b642) list_single_2graphic_pane_cp3_ParamLimits

0xd0c7,	// (0x0004b642) list_single_2graphic_pane_cp3

0xd0eb,	// (0x0004b666) list_single_midp_graphic_pane_ParamLimits

0xd0eb,	// (0x0004b666) list_single_midp_graphic_pane

0x91c1,	// (0x0004773c) list_single_graphic_2heading_pane_g1_ParamLimits

0x91c1,	// (0x0004773c) list_single_graphic_2heading_pane_g1

0x91cd,	// (0x00047748) list_single_graphic_2heading_pane_g4_ParamLimits

0x91cd,	// (0x00047748) list_single_graphic_2heading_pane_g4

0x91d9,	// (0x00047754) list_single_graphic_2heading_pane_g5_ParamLimits

0x91d9,	// (0x00047754) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0004dd48) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0004dd48) list_single_graphic_2heading_pane_g

0x91e5,	// (0x00047760) list_single_graphic_2heading_pane_t1_ParamLimits

0x91e5,	// (0x00047760) list_single_graphic_2heading_pane_t1

0x91f9,	// (0x00047774) list_single_graphic_2heading_pane_t2_ParamLimits

0x91f9,	// (0x00047774) list_single_graphic_2heading_pane_t2

0x9215,	// (0x00047790) list_single_graphic_2heading_pane_t3_ParamLimits

0x9215,	// (0x00047790) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0004dd4f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0004dd4f) list_single_graphic_2heading_pane_t

0x5614,	// (0x00043b8f) bg_popup_sub_pane_cp2

0x563e,	// (0x00043bb9) grid_toobar_pane

0xa3ac,	// (0x00048927) cell_toolbar_pane_ParamLimits

0xa3ac,	// (0x00048927) cell_toolbar_pane

0x567a,	// (0x00043bf5) cell_toolbar_pane_g1_ParamLimits

0x567a,	// (0x00043bf5) cell_toolbar_pane_g1

0x568e,	// (0x00043c09) cell_toolbar_pane_g2_ParamLimits

0x568e,	// (0x00043c09) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0004dd5d) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0004dd5d) cell_toolbar_pane_g

0x56b0,	// (0x00043c2b) grid_highlight_pane_cp2_ParamLimits

0x56b0,	// (0x00043c2b) grid_highlight_pane_cp2

0x56ca,	// (0x00043c45) toolbar_button_pane

0x56d6,	// (0x00043c51) toolbar_button_pane_g1

0x56e6,	// (0x00043c61) toolbar_button_pane_g2

0x56de,	// (0x00043c59) toolbar_button_pane_g3

0x56f6,	// (0x00043c71) toolbar_button_pane_g4

0x56ee,	// (0x00043c69) toolbar_button_pane_g5

0x56fe,	// (0x00043c79) toolbar_button_pane_g6

0x5706,	// (0x00043c81) toolbar_button_pane_g7

0x5716,	// (0x00043c91) toolbar_button_pane_g8

0x570e,	// (0x00043c89) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x0004dd62) toolbar_button_pane_g

0xa3e4,	// (0x0004895f) list_single_2graphic_pane_g1_cp3_ParamLimits

0xa3e4,	// (0x0004895f) list_single_2graphic_pane_g1_cp3

0xa3f0,	// (0x0004896b) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa3f0,	// (0x0004896b) list_single_2graphic_pane_g2_cp3

0xa401,	// (0x0004897c) list_single_2graphic_pane_g3_cp3

0xa409,	// (0x00048984) list_single_2graphic_pane_g4_cp3_ParamLimits

0xa409,	// (0x00048984) list_single_2graphic_pane_g4_cp3

0xa415,	// (0x00048990) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa415,	// (0x00048990) list_single_2graphic_pane_t1_cp3

0xa431,	// (0x000489ac) list_single_midp_graphic_pane_g2_ParamLimits

0xa431,	// (0x000489ac) list_single_midp_graphic_pane_g2

0xbc17,	// (0x0004a192) aid_zoom_text_primary

0xbc1f,	// (0x0004a19a) aid_zoom_text_secondary

0x532e,	// (0x000438a9) status_small_pane_g7_ParamLimits

0x532e,	// (0x000438a9) status_small_pane_g7

0x5351,	// (0x000438cc) status_small_pane_t1_ParamLimits

0xb540,	// (0x00049abb) title_pane_g2

0x0003,

0xf566,	// (0x0004dae1) title_pane_g

0xb70d,	// (0x00049c88) aid_size_cell_colour_1_pane_ParamLimits

0xb70d,	// (0x00049c88) aid_size_cell_colour_1_pane

0xb721,	// (0x00049c9c) aid_size_cell_colour_2_pane_ParamLimits

0xb721,	// (0x00049c9c) aid_size_cell_colour_2_pane

0xb735,	// (0x00049cb0) aid_size_cell_colour_3_pane_ParamLimits

0xb735,	// (0x00049cb0) aid_size_cell_colour_3_pane

0xb749,	// (0x00049cc4) aid_size_cell_colour_4_pane_ParamLimits

0xb749,	// (0x00049cc4) aid_size_cell_colour_4_pane

0x9e0d,	// (0x00048388) title_pane_stacon_g1_ParamLimits

0x9e0d,	// (0x00048388) title_pane_stacon_g1

0x5cf2,	// (0x0004426d) popup_note_wait_window_g3_ParamLimits

0x5cf2,	// (0x0004426d) popup_note_wait_window_g3

0x5d68,	// (0x000442e3) popup_note_wait_window_t5_ParamLimits

0x5d68,	// (0x000442e3) popup_note_wait_window_t5

0x1e14,	// (0x0004038f) main_feb_china_hwr_fs_writing_pane

0xc48e,	// (0x0004aa09) popup_feb_china_hwr_fs_window_ParamLimits

0xc48e,	// (0x0004aa09) popup_feb_china_hwr_fs_window

0xa453,	// (0x000489ce) aid_size_cell_hwr_fs_ParamLimits

0xa453,	// (0x000489ce) aid_size_cell_hwr_fs

0x57da,	// (0x00043d55) bg_popup_sub_pane_cp3_ParamLimits

0x57da,	// (0x00043d55) bg_popup_sub_pane_cp3

0xa468,	// (0x000489e3) grid_hwr_fs_pane_ParamLimits

0xa468,	// (0x000489e3) grid_hwr_fs_pane

0xa480,	// (0x000489fb) linegrid_hwr_fs_pane_ParamLimits

0xa480,	// (0x000489fb) linegrid_hwr_fs_pane

0xa490,	// (0x00048a0b) cell_hwr_fs_pane_ParamLimits

0xa490,	// (0x00048a0b) cell_hwr_fs_pane

0x57e6,	// (0x00043d61) linegrid_hwr_fs_pane_g1_ParamLimits

0x57e6,	// (0x00043d61) linegrid_hwr_fs_pane_g1

0xd09b,	// (0x0004b616) linegrid_hwr_fs_pane_g2_ParamLimits

0xd09b,	// (0x0004b616) linegrid_hwr_fs_pane_g2

0x57f2,	// (0x00043d6d) linegrid_hwr_fs_pane_g3_ParamLimits

0x57f2,	// (0x00043d6d) linegrid_hwr_fs_pane_g3

0xa4b2,	// (0x00048a2d) linegrid_hwr_fs_pane_g4_ParamLimits

0xa4b2,	// (0x00048a2d) linegrid_hwr_fs_pane_g4

0xa4cc,	// (0x00048a47) linegrid_hwr_fs_pane_g5_ParamLimits

0xa4cc,	// (0x00048a47) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x0004dd8d) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x0004dd8d) linegrid_hwr_fs_pane_g

0x57fe,	// (0x00043d79) cell_hwr_fs_pane_g1_ParamLimits

0x57fe,	// (0x00043d79) cell_hwr_fs_pane_g1

0x55e0,	// (0x00043b5b) cell_hwr_fs_pane_g2_ParamLimits

0x55e0,	// (0x00043b5b) cell_hwr_fs_pane_g2

0xd0ad,	// (0x0004b628) cell_hwr_fs_pane_g3_ParamLimits

0xd0ad,	// (0x0004b628) cell_hwr_fs_pane_g3

0xd0ba,	// (0x0004b635) cell_hwr_fs_pane_g4_ParamLimits

0xd0ba,	// (0x0004b635) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x0004dd98) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x0004dd98) cell_hwr_fs_pane_g

0xa4e2,	// (0x00048a5d) cell_hwr_fs_pane_t1

0x1e14,	// (0x0004038f) grid_highlight_pane_cp6

0x1e14,	// (0x0004038f) main_idle_act2_pane

0x4462,	// (0x000429dd) aid_inside_area_popup_secondary

0xd200,	// (0x0004b77b) aid_inside_area_window_primary_ParamLimits

0xd200,	// (0x0004b77b) aid_inside_area_window_primary

0x6b96,	// (0x00045111) ai2_news_ticker_pane

0x6b9e,	// (0x00045119) aid_size_cell_ai1_link_ParamLimits

0x6b9e,	// (0x00045119) aid_size_cell_ai1_link

0xd522,	// (0x0004ba9d) popup_ai2_data_window_ParamLimits

0xd522,	// (0x0004ba9d) popup_ai2_data_window

0x6bb8,	// (0x00045133) popup_ai2_link_window_ParamLimits

0x6bb8,	// (0x00045133) popup_ai2_link_window

0x57da,	// (0x00043d55) bg_popup_sub_pane_cp4_ParamLimits

0x57da,	// (0x00043d55) bg_popup_sub_pane_cp4

0x6bcc,	// (0x00045147) grid_ai2_link_pane_ParamLimits

0x6bcc,	// (0x00045147) grid_ai2_link_pane

0x6be3,	// (0x0004515e) popup_ai2_link_window_g1_ParamLimits

0x6be3,	// (0x0004515e) popup_ai2_link_window_g1

0x6bef,	// (0x0004516a) popup_ai2_link_window_g2_ParamLimits

0x6bef,	// (0x0004516a) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x0004df64) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x0004df64) popup_ai2_link_window_g

0x6bfe,	// (0x00045179) ai2_mp_button_pane

0x6c06,	// (0x00045181) ai2_mp_volume_pane

0x58ff,	// (0x00043e7a) bg_popup_sub_pane_cp5_ParamLimits

0x58ff,	// (0x00043e7a) bg_popup_sub_pane_cp5

0x6c0e,	// (0x00045189) heading_ai2_gene_pane_ParamLimits

0x6c0e,	// (0x00045189) heading_ai2_gene_pane

0x6c1a,	// (0x00045195) list_ai2_gene_pane_ParamLimits

0x6c1a,	// (0x00045195) list_ai2_gene_pane

0x6c62,	// (0x000451dd) cell_ai2_link_pane_ParamLimits

0x6c62,	// (0x000451dd) cell_ai2_link_pane

0x6c78,	// (0x000451f3) cell_ai2_link_pane_g1

0x1e14,	// (0x0004038f) grid_highlight_pane_cp7

0xa7d4,	// (0x00048d4f) ai2_mp_volume_pane_g1

0x6d1d,	// (0x00045298) ai2_mp_volume_pane_g2

0xd54f,	// (0x0004baca) list_ai2_gene_pane_t1

0x6d15,	// (0x00045290) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x0004df7d) ai2_mp_volume_pane_g

0xa7dc,	// (0x00048d57) volume_small_pane_cp3

0x6d25,	// (0x000452a0) aid_size_cell_ai2_button

0x6d2d,	// (0x000452a8) grid_ai2_button_pane

0x6d36,	// (0x000452b1) cell_ai2_button_pane_ParamLimits

0x6d36,	// (0x000452b1) cell_ai2_button_pane

0x1e0a,	// (0x00040385) cell_ai2_button_pane_g1

0x1e14,	// (0x0004038f) grid_highlight_pane_cp8

0x6cd5,	// (0x00045250) ai2_gene_pane_t1_ParamLimits

0x6cd5,	// (0x00045250) ai2_gene_pane_t1

0xc42a,	// (0x0004a9a5) aid_height_parent_landscape

0xd2d9,	// (0x0004b854) aid_height_set_list

0x5c8c,	// (0x00044207) aid_size_parent

0x6a01,	// (0x00044f7c) aid_size_cell_graphic_pane_ParamLimits

0x6c2a,	// (0x000451a5) popup_ai2_data_window_g1_ParamLimits

0x6c2a,	// (0x000451a5) popup_ai2_data_window_g1

0x6c36,	// (0x000451b1) ai2_news_ticker_pane_g1

0x6c3e,	// (0x000451b9) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x0004df69) ai2_news_ticker_pane_g

0x6c46,	// (0x000451c1) ai2_news_ticker_pane_t1

0x6c54,	// (0x000451cf) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x0004df6e) ai2_news_ticker_pane_t

0x6c81,	// (0x000451fc) heading_ai2_gene_pane_g1

0x6c89,	// (0x00045204) heading_ai2_gene_pane_t1_ParamLimits

0x6c89,	// (0x00045204) heading_ai2_gene_pane_t1

0x6c9e,	// (0x00045219) list_highlight_pane_cp6

0xd538,	// (0x0004bab3) ai2_gene_pane_ParamLimits

0xd538,	// (0x0004bab3) ai2_gene_pane

0xd55d,	// (0x0004bad8) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x0004df73) list_ai2_gene_pane_t

0x6ca6,	// (0x00045221) list_highlight_pane_cp8_ParamLimits

0x6ca6,	// (0x00045221) list_highlight_pane_cp8

0x6cb7,	// (0x00045232) ai2_gene_pane_g1_ParamLimits

0x6cb7,	// (0x00045232) ai2_gene_pane_g1

0x6cc9,	// (0x00045244) ai2_gene_pane_g2_ParamLimits

0x6cc9,	// (0x00045244) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x0004df78) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x0004df78) ai2_gene_pane_g

0x2c7d,	// (0x000411f8) scroll_pane_cp12

0xa36b,	// (0x000488e6) control_pane_t3_ParamLimits

0xa36b,	// (0x000488e6) control_pane_t3

0x5342,	// (0x000438bd) status_small_pane_g8_ParamLimits

0x5342,	// (0x000438bd) status_small_pane_g8

0xc51a,	// (0x0004aa95) popup_find_window_ParamLimits

0xcbd4,	// (0x0004b14f) popup_note_image_window_ParamLimits

0xbc4b,	// (0x0004a1c6) list_double2_graphic_pane_vc_g1_ParamLimits

0xbc4b,	// (0x0004a1c6) list_double2_graphic_pane_vc_g1

0x5c80,	// (0x000441fb) list_double2_graphic_pane_vc_g2_ParamLimits

0x5c80,	// (0x000441fb) list_double2_graphic_pane_vc_g2

0xbc57,	// (0x0004a1d2) list_double2_graphic_pane_vc_g3_ParamLimits

0xbc57,	// (0x0004a1d2) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x0004dd56) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x0004dd56) list_double2_graphic_pane_vc_g

0xbc63,	// (0x0004a1de) list_double2_graphic_pane_vc_t1_ParamLimits

0xbc63,	// (0x0004a1de) list_double2_graphic_pane_vc_t1

0x5c80,	// (0x000441fb) list_single_heading_pane_vc_g1_ParamLimits

0x5c80,	// (0x000441fb) list_single_heading_pane_vc_g1

0xbc57,	// (0x0004a1d2) list_single_heading_pane_vc_g2_ParamLimits

0xbc57,	// (0x0004a1d2) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004dd77) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004dd77) list_single_heading_pane_vc_g

0xbc79,	// (0x0004a1f4) list_single_heading_pane_vc_t1_ParamLimits

0xbc79,	// (0x0004a1f4) list_single_heading_pane_vc_t1

0xbc91,	// (0x0004a20c) list_single_heading_pane_vc_t2_ParamLimits

0xbc91,	// (0x0004a20c) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x0004dd7c) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x0004dd7c) list_single_heading_pane_vc_t

0x571e,	// (0x00043c99) list_setting_number_pane_vc_g1_ParamLimits

0x571e,	// (0x00043c99) list_setting_number_pane_vc_g1

0x572a,	// (0x00043ca5) list_setting_number_pane_vc_g2_ParamLimits

0x572a,	// (0x00043ca5) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x0004dd81) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x0004dd81) list_setting_number_pane_vc_g

0x5736,	// (0x00043cb1) list_setting_number_pane_vc_t1_ParamLimits

0x5736,	// (0x00043cb1) list_setting_number_pane_vc_t1

0x574a,	// (0x00043cc5) list_setting_number_pane_vc_t2_ParamLimits

0x574a,	// (0x00043cc5) list_setting_number_pane_vc_t2

0x5772,	// (0x00043ced) list_setting_number_pane_vc_t3_ParamLimits

0x5772,	// (0x00043ced) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x0004dd86) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x0004dd86) list_setting_number_pane_vc_t

0x579e,	// (0x00043d19) set_value_pane_vc_ParamLimits

0x579e,	// (0x00043d19) set_value_pane_vc

0x6979,	// (0x00044ef4) list_double2_graphic_pane_vc_ParamLimits

0x6979,	// (0x00044ef4) list_double2_graphic_pane_vc

0xbd65,	// (0x0004a2e0) list_double2_large_graphic_pane_vc_ParamLimits

0xbd65,	// (0x0004a2e0) list_double2_large_graphic_pane_vc

0x6979,	// (0x00044ef4) list_double2_pane_vc_ParamLimits

0x6979,	// (0x00044ef4) list_double2_pane_vc

0x6979,	// (0x00044ef4) list_double_graphic_heading_pane_vc_ParamLimits

0x6979,	// (0x00044ef4) list_double_graphic_heading_pane_vc

0x6979,	// (0x00044ef4) list_double_graphic_pane_vc_ParamLimits

0x6979,	// (0x00044ef4) list_double_graphic_pane_vc

0x6979,	// (0x00044ef4) list_double_heading_pane_vc_ParamLimits

0x6979,	// (0x00044ef4) list_double_heading_pane_vc

0xbd65,	// (0x0004a2e0) list_double_large_graphic_pane_vc_ParamLimits

0xbd65,	// (0x0004a2e0) list_double_large_graphic_pane_vc

0x6979,	// (0x00044ef4) list_double_number_pane_vc_ParamLimits

0x6979,	// (0x00044ef4) list_double_number_pane_vc

0x6979,	// (0x00044ef4) list_double_pane_vc_ParamLimits

0x6979,	// (0x00044ef4) list_double_pane_vc

0x6979,	// (0x00044ef4) list_double_time_pane_vc_ParamLimits

0x6979,	// (0x00044ef4) list_double_time_pane_vc

0x6979,	// (0x00044ef4) list_setting_number_pane_vc_ParamLimits

0x6979,	// (0x00044ef4) list_setting_number_pane_vc

0x6979,	// (0x00044ef4) list_setting_pane_vc_ParamLimits

0x6979,	// (0x00044ef4) list_setting_pane_vc

0x6979,	// (0x00044ef4) list_single_graphic_heading_pane_vc_ParamLimits

0x6979,	// (0x00044ef4) list_single_graphic_heading_pane_vc

0x6979,	// (0x00044ef4) list_single_heading_pane_vc_ParamLimits

0x6979,	// (0x00044ef4) list_single_heading_pane_vc

0xbd76,	// (0x0004a2f1) list_single_number_heading_pane_vc_ParamLimits

0xbd76,	// (0x0004a2f1) list_single_number_heading_pane_vc

0xbc4b,	// (0x0004a1c6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xbc4b,	// (0x0004a1c6) list_double_graphic_heading_pane_vc_g1

0x5c80,	// (0x000441fb) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5c80,	// (0x000441fb) list_double_graphic_heading_pane_vc_g2

0xbc57,	// (0x0004a1d2) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xbc57,	// (0x0004a1d2) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x0004dd56) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0004dd56) list_double_graphic_heading_pane_vc_g

0xbe24,	// (0x0004a39f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xbe24,	// (0x0004a39f) list_double_graphic_heading_pane_vc_t1

0xbc79,	// (0x0004a1f4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xbc79,	// (0x0004a1f4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa09,	// (0x0004df84) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x0004df84) list_double_graphic_heading_pane_vc_t

0x571e,	// (0x00043c99) list_setting_pane_vc_g1_ParamLimits

0x571e,	// (0x00043c99) list_setting_pane_vc_g1

0x572a,	// (0x00043ca5) list_setting_pane_vc_g2_ParamLimits

0x572a,	// (0x00043ca5) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x0004dd81) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x0004dd81) list_setting_pane_vc_g

0x6f4c,	// (0x000454c7) list_setting_pane_vc_t1_ParamLimits

0x6f4c,	// (0x000454c7) list_setting_pane_vc_t1

0x6f68,	// (0x000454e3) list_setting_pane_vc_t2_ParamLimits

0x6f68,	// (0x000454e3) list_setting_pane_vc_t2

0x0001,

0xfa37,	// (0x0004dfb2) list_setting_pane_vc_t_ParamLimits

0xfa37,	// (0x0004dfb2) list_setting_pane_vc_t

0x579e,	// (0x00043d19) set_value_pane_cp_vc_ParamLimits

0x579e,	// (0x00043d19) set_value_pane_cp_vc

0x5c80,	// (0x000441fb) list_single_number_heading_pane_vc_g1_ParamLimits

0x5c80,	// (0x000441fb) list_single_number_heading_pane_vc_g1

0xbc57,	// (0x0004a1d2) list_single_number_heading_pane_vc_g2_ParamLimits

0xbc57,	// (0x0004a1d2) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004dd77) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004dd77) list_single_number_heading_pane_vc_g

0xbc79,	// (0x0004a1f4) list_single_number_heading_pane_vc_t1_ParamLimits

0xbc79,	// (0x0004a1f4) list_single_number_heading_pane_vc_t1

0xbe38,	// (0x0004a3b3) list_single_number_heading_pane_vc_t2_ParamLimits

0xbe38,	// (0x0004a3b3) list_single_number_heading_pane_vc_t2

0xbe4c,	// (0x0004a3c7) list_single_number_heading_pane_vc_t3_ParamLimits

0xbe4c,	// (0x0004a3c7) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3c,	// (0x0004dfb7) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x0004dfb7) list_single_number_heading_pane_vc_t

0xbc4b,	// (0x0004a1c6) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xbc4b,	// (0x0004a1c6) list_single_graphic_heading_pane_vc_g1

0x5c80,	// (0x000441fb) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5c80,	// (0x000441fb) list_single_graphic_heading_pane_vc_g4

0xbc57,	// (0x0004a1d2) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xbc57,	// (0x0004a1d2) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x0004dd56) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0004dd56) list_single_graphic_heading_pane_vc_g

0xbc79,	// (0x0004a1f4) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xbc79,	// (0x0004a1f4) list_single_graphic_heading_pane_vc_t1

0xbe5e,	// (0x0004a3d9) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xbe5e,	// (0x0004a3d9) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0004dfbe) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0004dfbe) list_single_graphic_heading_pane_vc_t

0x5c80,	// (0x000441fb) list_double2_pane_vc_g1_ParamLimits

0x5c80,	// (0x000441fb) list_double2_pane_vc_g1

0xbc57,	// (0x0004a1d2) list_double2_pane_vc_g2_ParamLimits

0xbc57,	// (0x0004a1d2) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004dd77) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004dd77) list_double2_pane_vc_g

0xbe72,	// (0x0004a3ed) list_double2_pane_vc_t1_ParamLimits

0xbe72,	// (0x0004a3ed) list_double2_pane_vc_t1

0xbe88,	// (0x0004a403) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xbe88,	// (0x0004a403) list_double2_large_graphic_pane_vc_g1

0xbe94,	// (0x0004a40f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xbe94,	// (0x0004a40f) list_double2_large_graphic_pane_vc_g2

0xbea0,	// (0x0004a41b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xbea0,	// (0x0004a41b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa48,	// (0x0004dfc3) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0004dfc3) list_double2_large_graphic_pane_vc_g

0xbeac,	// (0x0004a427) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xbeac,	// (0x0004a427) list_double2_large_graphic_pane_vc_t1

0xbec2,	// (0x0004a43d) list_double_time_pane_vc_g1_ParamLimits

0xbec2,	// (0x0004a43d) list_double_time_pane_vc_g1

0xbece,	// (0x0004a449) list_double_time_pane_vc_g2_ParamLimits

0xbece,	// (0x0004a449) list_double_time_pane_vc_g2

0x0001,

0xfa4f,	// (0x0004dfca) list_double_time_pane_vc_g_ParamLimits

0xfa4f,	// (0x0004dfca) list_double_time_pane_vc_g

0xbeda,	// (0x0004a455) list_double_time_pane_vc_t1_ParamLimits

0xbeda,	// (0x0004a455) list_double_time_pane_vc_t1

0xbef5,	// (0x0004a470) list_double_time_pane_vc_t2_ParamLimits

0xbef5,	// (0x0004a470) list_double_time_pane_vc_t2

0xbf35,	// (0x0004a4b0) list_double_time_pane_vc_t3_ParamLimits

0xbf35,	// (0x0004a4b0) list_double_time_pane_vc_t3

0xbf4d,	// (0x0004a4c8) list_double_time_pane_vc_t4_ParamLimits

0xbf4d,	// (0x0004a4c8) list_double_time_pane_vc_t4

0x0003,

0xfa54,	// (0x0004dfcf) list_double_time_pane_vc_t_ParamLimits

0xfa54,	// (0x0004dfcf) list_double_time_pane_vc_t

0x5c80,	// (0x000441fb) list_double_pane_vc_g1_ParamLimits

0x5c80,	// (0x000441fb) list_double_pane_vc_g1

0xbc57,	// (0x0004a1d2) list_double_pane_vc_g2_ParamLimits

0xbc57,	// (0x0004a1d2) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004dd77) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004dd77) list_double_pane_vc_g

0xbf61,	// (0x0004a4dc) list_double_pane_vc_t1_ParamLimits

0xbf61,	// (0x0004a4dc) list_double_pane_vc_t1

0xbf75,	// (0x0004a4f0) list_double_pane_vc_t2_ParamLimits

0xbf75,	// (0x0004a4f0) list_double_pane_vc_t2

0x0001,

0xfa5d,	// (0x0004dfd8) list_double_pane_vc_t_ParamLimits

0xfa5d,	// (0x0004dfd8) list_double_pane_vc_t

0x5c80,	// (0x000441fb) list_double_number_pane_vc_g1_ParamLimits

0x5c80,	// (0x000441fb) list_double_number_pane_vc_g1

0xbc57,	// (0x0004a1d2) list_double_number_pane_vc_g2_ParamLimits

0xbc57,	// (0x0004a1d2) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004dd77) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004dd77) list_double_number_pane_vc_g

0xbf8d,	// (0x0004a508) list_double_number_pane_vc_t1_ParamLimits

0xbf8d,	// (0x0004a508) list_double_number_pane_vc_t1

0xbfa1,	// (0x0004a51c) list_double_number_pane_vc_t2_ParamLimits

0xbfa1,	// (0x0004a51c) list_double_number_pane_vc_t2

0xbf75,	// (0x0004a4f0) list_double_number_pane_vc_t3_ParamLimits

0xbf75,	// (0x0004a4f0) list_double_number_pane_vc_t3

0x0002,

0xfa62,	// (0x0004dfdd) list_double_number_pane_vc_t_ParamLimits

0xfa62,	// (0x0004dfdd) list_double_number_pane_vc_t

0xbfb5,	// (0x0004a530) list_double_large_graphic_pane_vc_g1_ParamLimits

0xbfb5,	// (0x0004a530) list_double_large_graphic_pane_vc_g1

0xbfc1,	// (0x0004a53c) list_double_large_graphic_pane_vc_g2_ParamLimits

0xbfc1,	// (0x0004a53c) list_double_large_graphic_pane_vc_g2

0xbea0,	// (0x0004a41b) list_double_large_graphic_pane_vc_g3_ParamLimits

0xbea0,	// (0x0004a41b) list_double_large_graphic_pane_vc_g3

0xbfd0,	// (0x0004a54b) list_double_large_graphic_pane_vc_g4_ParamLimits

0xbfd0,	// (0x0004a54b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa69,	// (0x0004dfe4) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa69,	// (0x0004dfe4) list_double_large_graphic_pane_vc_g

0xbfdc,	// (0x0004a557) list_double_large_graphic_pane_vc_t1_ParamLimits

0xbfdc,	// (0x0004a557) list_double_large_graphic_pane_vc_t1

0xbff0,	// (0x0004a56b) list_double_large_graphic_pane_vc_t2_ParamLimits

0xbff0,	// (0x0004a56b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa72,	// (0x0004dfed) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa72,	// (0x0004dfed) list_double_large_graphic_pane_vc_t

0x5c80,	// (0x000441fb) list_double_heading_pane_vc_g1_ParamLimits

0x5c80,	// (0x000441fb) list_double_heading_pane_vc_g1

0xbc57,	// (0x0004a1d2) list_double_heading_pane_vc_g2_ParamLimits

0xbc57,	// (0x0004a1d2) list_double_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004dd77) list_double_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004dd77) list_double_heading_pane_vc_g

0xc009,	// (0x0004a584) list_double_heading_pane_vc_t1_ParamLimits

0xc009,	// (0x0004a584) list_double_heading_pane_vc_t1

0xbc79,	// (0x0004a1f4) list_double_heading_pane_vc_t2_ParamLimits

0xbc79,	// (0x0004a1f4) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x0004dff2) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x0004dff2) list_double_heading_pane_vc_t

0xbc4b,	// (0x0004a1c6) list_double_graphic_pane_vc_g1_ParamLimits

0xbc4b,	// (0x0004a1c6) list_double_graphic_pane_vc_g1

0xc01d,	// (0x0004a598) list_double_graphic_pane_vc_g2_ParamLimits

0xc01d,	// (0x0004a598) list_double_graphic_pane_vc_g2

0xc02c,	// (0x0004a5a7) list_double_graphic_pane_vc_g3_ParamLimits

0xc02c,	// (0x0004a5a7) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x0004dff7) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x0004dff7) list_double_graphic_pane_vc_g

0xc038,	// (0x0004a5b3) list_double_graphic_pane_vc_t1_ParamLimits

0xc038,	// (0x0004a5b3) list_double_graphic_pane_vc_t1

0xbf75,	// (0x0004a4f0) list_double_graphic_pane_vc_t2_ParamLimits

0xbf75,	// (0x0004a4f0) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0004dffe) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0004dffe) list_double_graphic_pane_vc_t

0x9245,	// (0x000477c0) aid_size_cell_fastswap

0x924d,	// (0x000477c8) aid_size_cell_touch_ParamLimits

0x924d,	// (0x000477c8) aid_size_cell_touch

0x94b2,	// (0x00047a2d) popup_fast_swap_wide_window_ParamLimits

0x94b2,	// (0x00047a2d) popup_fast_swap_wide_window

0x95bc,	// (0x00047b37) touch_pane_ParamLimits

0x95bc,	// (0x00047b37) touch_pane

0x4348,	// (0x000428c3) button_value_adjust_pane_cp2

0x9b77,	// (0x000480f2) button_value_adjust_pane_cp4

0x9b9b,	// (0x00048116) form_field_data_pane_cp2

0x9bbc,	// (0x00048137) form_field_data_wide_pane_cp2

0x4990,	// (0x00042f0b) bg_scroll_pane_ParamLimits

0x9f70,	// (0x000484eb) scroll_handle_pane_ParamLimits

0x9f84,	// (0x000484ff) scroll_sc2_down_pane_ParamLimits

0x9f84,	// (0x000484ff) scroll_sc2_down_pane

0x49c1,	// (0x00042f3c) scroll_sc2_up_pane_ParamLimits

0x49c1,	// (0x00042f3c) scroll_sc2_up_pane

0xd69f,	// (0x0004bc1a) grid_wheel_folder_pane_g1_ParamLimits

0xd69f,	// (0x0004bc1a) grid_wheel_folder_pane_g1

0xa155,	// (0x000486d0) clock_nsta_pane_cp2_ParamLimits

0xa155,	// (0x000486d0) clock_nsta_pane_cp2

0xb928,	// (0x00049ea3) listscroll_midp_pane_ParamLimits

0xbb68,	// (0x0004a0e3) midp_canvas_pane

0x5396,	// (0x00043911) nsta_clock_indic_pane

0x53c6,	// (0x00043941) listscroll_form_pane_vc

0x53ce,	// (0x00043949) listscroll_set_pane_vc_ParamLimits

0x53ce,	// (0x00043949) listscroll_set_pane_vc

0xce48,	// (0x0004b3c3) clock_nsta_pane

0xce55,	// (0x0004b3d0) indicator_nsta_pane

0x5614,	// (0x00043b8f) bg_popup_sub_pane_cp2_ParamLimits

0x5628,	// (0x00043ba3) find_pane_cp2_ParamLimits

0x5628,	// (0x00043ba3) find_pane_cp2

0x563e,	// (0x00043bb9) grid_toobar_pane_ParamLimits

0x57ae,	// (0x00043d29) list_form_gen_pane_vc_ParamLimits

0x57ae,	// (0x00043d29) list_form_gen_pane_vc

0x57c4,	// (0x00043d3f) scroll_pane_cp8_vc_ParamLimits

0x57c4,	// (0x00043d3f) scroll_pane_cp8_vc

0x5814,	// (0x00043d8f) data_form_wide_pane_vc_ParamLimits

0x5814,	// (0x00043d8f) data_form_wide_pane_vc

0x5820,	// (0x00043d9b) form_field_data_wide_pane_vc_g1

0x5828,	// (0x00043da3) form_field_data_wide_pane_vc_t1_ParamLimits

0x5828,	// (0x00043da3) form_field_data_wide_pane_vc_t1

0x435c,	// (0x000428d7) input_focus_pane_cp6_vc_ParamLimits

0x435c,	// (0x000428d7) input_focus_pane_cp6_vc

0xd198,	// (0x0004b713) list_midp_pane_ParamLimits

0xd1a4,	// (0x0004b71f) scroll_pane_cp16_ParamLimits

0xd1a4,	// (0x0004b71f) scroll_pane_cp16

0x5a9d,	// (0x00044018) button_value_adjust_pane_ParamLimits

0x5a9d,	// (0x00044018) button_value_adjust_pane

0xd2ea,	// (0x0004b865) button_value_adjust_pane_cp6_ParamLimits

0xd2ea,	// (0x0004b865) button_value_adjust_pane_cp6

0xd414,	// (0x0004b98f) settings_code_pane_cp_ParamLimits

0xd414,	// (0x0004b98f) settings_code_pane_cp

0x1e0a,	// (0x00040385) cell_touch_pane_g1

0x1e0a,	// (0x00040385) cell_touch_pane_g2

0x0001,

0xf720,	// (0x0004dc9b) cell_touch_pane_g

0xd56b,	// (0x0004bae6) cell_touch_pane_cp_ParamLimits

0xd56b,	// (0x0004bae6) cell_touch_pane_cp

0xd57b,	// (0x0004baf6) cell_touch_pane_ParamLimits

0xd57b,	// (0x0004baf6) cell_touch_pane

0x1e0a,	// (0x00040385) scroll_sc2_down_pane_g1

0x1e0a,	// (0x00040385) scroll_sc2_up_pane_g1

0x1e14,	// (0x0004038f) bg_set_opt_pane_cp4_vc

0x6d48,	// (0x000452c3) list_set_graphic_pane_vc_g1_ParamLimits

0x6d48,	// (0x000452c3) list_set_graphic_pane_vc_g1

0x6d54,	// (0x000452cf) list_set_graphic_pane_vc_g2_ParamLimits

0x6d54,	// (0x000452cf) list_set_graphic_pane_vc_g2

0x0001,

0xfa0e,	// (0x0004df89) list_set_graphic_pane_vc_g_ParamLimits

0xfa0e,	// (0x0004df89) list_set_graphic_pane_vc_g

0x6d60,	// (0x000452db) text_primary_small_cp13_vc_ParamLimits

0x6d60,	// (0x000452db) text_primary_small_cp13_vc

0x6d78,	// (0x000452f3) list_set_graphic_pane_vc_ParamLimits

0x6d78,	// (0x000452f3) list_set_graphic_pane_vc

0x1e14,	// (0x0004038f) input_focus_pane_cp2_vc

0x1e0a,	// (0x00040385) setting_code_pane_vc_g1

0x6d8c,	// (0x00045307) setting_code_pane_vc_t1

0x6d9a,	// (0x00045315) set_text_pane_vc_t1_ParamLimits

0x6d9a,	// (0x00045315) set_text_pane_vc_t1

0x1e14,	// (0x0004038f) input_focus_pane_cp1_vc

0x6db5,	// (0x00045330) list_set_text_pane_vc

0x1e0a,	// (0x00040385) setting_text_pane_vc_g1

0x1e14,	// (0x0004038f) bg_set_opt_pane_cp2_vc

0x6dbf,	// (0x0004533a) setting_slider_graphic_pane_vc_g1

0x6dc7,	// (0x00045342) setting_slider_graphic_pane_vc_t1

0x6dd5,	// (0x00045350) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa13,	// (0x0004df8e) setting_slider_graphic_pane_vc_t

0x6de3,	// (0x0004535e) slider_set_pane_cp_vc

0x6deb,	// (0x00045366) slider_set_pane_vc_g1

0x6df4,	// (0x0004536f) slider_set_pane_vc_g2

0x0006,

0xfa18,	// (0x0004df93) slider_set_pane_vc_g

0x43c3,	// (0x0004293e) set_opt_bg_pane_g1_copy1

0x43cb,	// (0x00042946) set_opt_bg_pane_g2_copy1

0x6e20,	// (0x0004539b) set_opt_bg_pane_g3_copy1

0x43db,	// (0x00042956) set_opt_bg_pane_g4_copy1

0x43e3,	// (0x0004295e) set_opt_bg_pane_g5_copy1

0x43eb,	// (0x00042966) set_opt_bg_pane_g6_copy1

0x6e2a,	// (0x000453a5) set_opt_bg_pane_g7_copy1

0x6e32,	// (0x000453ad) set_opt_bg_pane_g8_copy1

0x6e3c,	// (0x000453b7) set_opt_bg_pane_g9_copy1

0x1e14,	// (0x0004038f) bg_set_opt_pane_cp_vc

0x6e46,	// (0x000453c1) setting_slider_pane_vc_t1

0x6dc7,	// (0x00045342) setting_slider_pane_vc_t2

0x6dd5,	// (0x00045350) setting_slider_pane_vc_t3

0x0002,

0xfa27,	// (0x0004dfa2) setting_slider_pane_vc_t

0x6de3,	// (0x0004535e) slider_set_pane_vc

0xa4f0,	// (0x00048a6b) volume_set_pane_vc_g1

0xa4f9,	// (0x00048a74) volume_set_pane_vc_g2

0xa502,	// (0x00048a7d) volume_set_pane_vc_g3

0xa50b,	// (0x00048a86) volume_set_pane_vc_g4

0xa514,	// (0x00048a8f) volume_set_pane_vc_g5

0xa51d,	// (0x00048a98) volume_set_pane_vc_g6

0xa526,	// (0x00048aa1) volume_set_pane_vc_g7

0xa52f,	// (0x00048aaa) volume_set_pane_vc_g8

0xa538,	// (0x00048ab3) volume_set_pane_vc_g9

0xa541,	// (0x00048abc) volume_set_pane_vc_g10

0x0009,

0xf8cc,	// (0x0004de47) volume_set_pane_vc_g

0x6e55,	// (0x000453d0) volume_set_pane_vc

0x6e5d,	// (0x000453d8) button_value_adjust_pane_cp1_vc

0x6e67,	// (0x000453e2) list_highlight_pane_cp2_vc

0x6e70,	// (0x000453eb) list_set_pane_vc_ParamLimits

0x6e70,	// (0x000453eb) list_set_pane_vc

0x6eda,	// (0x00045455) main_pane_set_vc_t1_ParamLimits

0x6eda,	// (0x00045455) main_pane_set_vc_t1

0x6eef,	// (0x0004546a) main_pane_set_vc_t2_ParamLimits

0x6eef,	// (0x0004546a) main_pane_set_vc_t2

0x6f01,	// (0x0004547c) main_pane_set_vc_t3_ParamLimits

0x6f01,	// (0x0004547c) main_pane_set_vc_t3

0x6f15,	// (0x00045490) main_pane_set_vc_t4_ParamLimits

0x6f15,	// (0x00045490) main_pane_set_vc_t4

0x0003,

0xfa2e,	// (0x0004dfa9) main_pane_set_vc_t_ParamLimits

0xfa2e,	// (0x0004dfa9) main_pane_set_vc_t

0x6f29,	// (0x000454a4) setting_code_pane_vc_ParamLimits

0x6f29,	// (0x000454a4) setting_code_pane_vc

0x6f3a,	// (0x000454b5) setting_slider_graphic_pane_vc

0x6f3a,	// (0x000454b5) setting_slider_pane_vc

0x6f3a,	// (0x000454b5) setting_text_pane_vc

0x6f3a,	// (0x000454b5) setting_volume_pane_vc

0x6f44,	// (0x000454bf) scroll_pane_cp121_vc

0x4336,	// (0x000428b1) set_content_pane_vc

0x6f84,	// (0x000454ff) button_value_adjust_pane_g1

0x6f8d,	// (0x00045508) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0004e003) button_value_adjust_pane_g

0x6f96,	// (0x00045511) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6f96,	// (0x00045511) form_field_slider_wide_pane_vc_t1

0x6faa,	// (0x00045525) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6faa,	// (0x00045525) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8d,	// (0x0004e008) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0004e008) form_field_slider_wide_pane_vc_t

0x1e62,	// (0x000403dd) input_focus_pane_cp10_vc_ParamLimits

0x1e62,	// (0x000403dd) input_focus_pane_cp10_vc

0x6fbe,	// (0x00045539) slider_cont_pane_cp1_vc_ParamLimits

0x6fbe,	// (0x00045539) slider_cont_pane_cp1_vc

0x6deb,	// (0x00045366) slider_form_pane_g1_cp2

0x6df4,	// (0x0004536f) slider_form_pane_g2_cp2

0x6fd9,	// (0x00045554) form_field_slider_pane_vc_t3

0x6fe7,	// (0x00045562) form_field_slider_pane_vc_t4

0x6ff5,	// (0x00045570) slider_form_pane_vc_ParamLimits

0x6ff5,	// (0x00045570) slider_form_pane_vc

0x7002,	// (0x0004557d) form_field_slider_pane_vc_t1_ParamLimits

0x7002,	// (0x0004557d) form_field_slider_pane_vc_t1

0x6faa,	// (0x00045525) form_field_slider_pane_vc_t2_ParamLimits

0x6faa,	// (0x00045525) form_field_slider_pane_vc_t2

0x0001,

0xfa9d,	// (0x0004e018) form_field_slider_pane_vc_t_ParamLimits

0xfa9d,	// (0x0004e018) form_field_slider_pane_vc_t

0x1e62,	// (0x000403dd) input_focus_pane_cp9_vc_ParamLimits

0x1e62,	// (0x000403dd) input_focus_pane_cp9_vc

0x701e,	// (0x00045599) slider_cont_pane_vc_ParamLimits

0x701e,	// (0x00045599) slider_cont_pane_vc

0x7032,	// (0x000455ad) list_form_graphic_pane_cp_vc_ParamLimits

0x7032,	// (0x000455ad) list_form_graphic_pane_cp_vc

0x5820,	// (0x00043d9b) form_field_popup_wide_pane_vc_g1

0x7047,	// (0x000455c2) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7047,	// (0x000455c2) form_field_popup_wide_pane_vc_t1

0x435c,	// (0x000428d7) input_focus_pane_cp8_vc_ParamLimits

0x435c,	// (0x000428d7) input_focus_pane_cp8_vc

0x705e,	// (0x000455d9) list_form_wide_pane_vc_ParamLimits

0x705e,	// (0x000455d9) list_form_wide_pane_vc

0x706a,	// (0x000455e5) list_form_graphic_pane_vc_g1

0x7072,	// (0x000455ed) list_form_graphic_pane_vc_t1_ParamLimits

0x7072,	// (0x000455ed) list_form_graphic_pane_vc_t1

0x1e70,	// (0x000403eb) list_highlight_pane_cp5_vc_ParamLimits

0x1e70,	// (0x000403eb) list_highlight_pane_cp5_vc

0x708e,	// (0x00045609) list_form_graphic_pane_vc_ParamLimits

0x708e,	// (0x00045609) list_form_graphic_pane_vc

0x5820,	// (0x00043d9b) form_field_popup_pane_vc_g1

0x70a4,	// (0x0004561f) form_field_popup_pane_vc_t1_ParamLimits

0x70a4,	// (0x0004561f) form_field_popup_pane_vc_t1

0x435c,	// (0x000428d7) input_focus_pane_cp7_vc_ParamLimits

0x435c,	// (0x000428d7) input_focus_pane_cp7_vc

0x70bb,	// (0x00045636) list_form_pane_vc_ParamLimits

0x70bb,	// (0x00045636) list_form_pane_vc

0x70c7,	// (0x00045642) data_form_pane_vc_t1_ParamLimits

0x70c7,	// (0x00045642) data_form_pane_vc_t1

0x43c3,	// (0x0004293e) input_focus_pane_vc_g1

0x43cb,	// (0x00042946) input_focus_pane_vc_g2

0x43d3,	// (0x0004294e) input_focus_pane_vc_g3

0x43db,	// (0x00042956) input_focus_pane_vc_g4

0x43e3,	// (0x0004295e) input_focus_pane_vc_g5

0x43eb,	// (0x00042966) input_focus_pane_vc_g6

0x43f3,	// (0x0004296e) input_focus_pane_vc_g7

0x43fb,	// (0x00042976) input_focus_pane_vc_g8

0x4403,	// (0x0004297e) input_focus_pane_vc_g9

0x1e0a,	// (0x00040385) input_focus_pane_vc_g10

0x0009,

0xf6a9,	// (0x0004dc24) input_focus_pane_vc_g

0x5814,	// (0x00043d8f) data_form_pane_vc_ParamLimits

0x5814,	// (0x00043d8f) data_form_pane_vc

0x5820,	// (0x00043d9b) form_field_data_pane_vc_g1

0x70e2,	// (0x0004565d) form_field_data_pane_vc_t1_ParamLimits

0x70e2,	// (0x0004565d) form_field_data_pane_vc_t1

0x435c,	// (0x000428d7) input_focus_pane_vc_ParamLimits

0x435c,	// (0x000428d7) input_focus_pane_vc

0x70fc,	// (0x00045677) button_value_adjust_pane_cp3_vc

0x7104,	// (0x0004567f) button_value_adjust_pane_cp5_vc

0x710c,	// (0x00045687) form_field_data_pane_vc_ParamLimits

0x710c,	// (0x00045687) form_field_data_pane_vc

0x7123,	// (0x0004569e) form_field_data_pane_vc_cp2

0x712b,	// (0x000456a6) form_field_data_wide_pane_vc_ParamLimits

0x712b,	// (0x000456a6) form_field_data_wide_pane_vc

0x7141,	// (0x000456bc) form_field_data_wide_pane_vc_cp2

0x7149,	// (0x000456c4) form_field_popup_pane_vc_ParamLimits

0x7149,	// (0x000456c4) form_field_popup_pane_vc

0x7160,	// (0x000456db) form_field_popup_wide_pane_vc_ParamLimits

0x7160,	// (0x000456db) form_field_popup_wide_pane_vc

0x7176,	// (0x000456f1) form_field_slider_pane_vc_ParamLimits

0x7176,	// (0x000456f1) form_field_slider_pane_vc

0x7189,	// (0x00045704) form_field_slider_wide_pane_vc_ParamLimits

0x7189,	// (0x00045704) form_field_slider_wide_pane_vc

0xd58d,	// (0x0004bb08) grid_touch_1_pane_ParamLimits

0xd58d,	// (0x0004bb08) grid_touch_1_pane

0xd599,	// (0x0004bb14) grid_touch_2_pane_ParamLimits

0xd599,	// (0x0004bb14) grid_touch_2_pane

0x5388,	// (0x00043903) touch_pane_g1_ParamLimits

0x5388,	// (0x00043903) touch_pane_g1

0x71aa,	// (0x00045725) cell_app_pane_cp_wide_ParamLimits

0x71aa,	// (0x00045725) cell_app_pane_cp_wide

0x71bb,	// (0x00045736) grid_popup_fast_wide_pane_ParamLimits

0x71bb,	// (0x00045736) grid_popup_fast_wide_pane

0x71cf,	// (0x0004574a) scroll_pane_cp19_ParamLimits

0x71cf,	// (0x0004574a) scroll_pane_cp19

0x1e14,	// (0x0004038f) bg_popup_window_pane_cp20

0x71e3,	// (0x0004575e) listscroll_popup_fast_wide_pane

0x1e70,	// (0x000403eb) grid_indicator_nsta_pane

0x71eb,	// (0x00045766) clock_nsta_pane_g1

0x71f4,	// (0x0004576f) clock_nsta_pane_t1

0xd5b1,	// (0x0004bb2c) cell_indicator_nsta_pane_ParamLimits

0xd5b1,	// (0x0004bb2c) cell_indicator_nsta_pane

0x719c,	// (0x00045717) cell_indicator_nsta_pane_g1

0xd5e9,	// (0x0004bb64) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0004e022) cell_indicator_nsta_pane_g

0x7210,	// (0x0004578b) clock_nsta_pane_cp

0x7218,	// (0x00045793) indicator_nsta_pane_cp

0x7221,	// (0x0004579c) nsta_clock_indic_pane_g1

0x1eac,	// (0x00040427) grid_indicator_pane

0x4ab6,	// (0x00043031) scroll_pane_cp29

0xa0a4,	// (0x0004861f) indicator_nsta_pane_cp2_ParamLimits

0xa0a4,	// (0x0004861f) indicator_nsta_pane_cp2

0x1e70,	// (0x000403eb) main_apps_wheel_pane

0x593c,	// (0x00043eb7) form_midp_field_text_pane_ParamLimits

0x5a6f,	// (0x00043fea) scroll_bar_cp050_ParamLimits

0x728a,	// (0x00045805) cell_indicator_pane_ParamLimits

0x728a,	// (0x00045805) cell_indicator_pane

0x72a1,	// (0x0004581c) cell_indicator_pane_g1

0xd5ff,	// (0x0004bb7a) grid_wheel_folder_pane_ParamLimits

0xd5ff,	// (0x0004bb7a) grid_wheel_folder_pane

0xd613,	// (0x0004bb8e) list_wheel_apps_pane_ParamLimits

0xd613,	// (0x0004bb8e) list_wheel_apps_pane

0xd624,	// (0x0004bb9f) main_apps_wheel_pane_g1_ParamLimits

0xd624,	// (0x0004bb9f) main_apps_wheel_pane_g1

0xd638,	// (0x0004bbb3) main_apps_wheel_pane_g2_ParamLimits

0xd638,	// (0x0004bbb3) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0004e03e) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0004e03e) main_apps_wheel_pane_g

0xd650,	// (0x0004bbcb) main_apps_wheel_pane_t1_ParamLimits

0xd650,	// (0x0004bbcb) main_apps_wheel_pane_t1

0xd673,	// (0x0004bbee) list_wheel_apps_pane_g1

0xd67b,	// (0x0004bbf6) list_wheel_apps_pane_g2

0xd683,	// (0x0004bbfe) list_wheel_apps_pane_g3

0xd68b,	// (0x0004bc06) list_wheel_apps_pane_g4

0xd695,	// (0x0004bc10) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0004e043) list_wheel_apps_pane_g

0x5006,	// (0x00043581) navi_icon_text_pane

0xcd90,	// (0x0004b30b) aid_fill_nsta

0x72ab,	// (0x00045826) navi_icon_text_pane_g1

0x72b7,	// (0x00045832) navi_icon_text_pane_t1

0xbb50,	// (0x0004a0cb) list_set_graphic_pane_t1_ParamLimits

0xbb50,	// (0x0004a0cb) list_set_graphic_pane_t1

0x61d2,	// (0x0004474d) popup_midp_note_alarm_window_t6_ParamLimits

0x61d2,	// (0x0004474d) popup_midp_note_alarm_window_t6

0x61e4,	// (0x0004475f) popup_midp_note_alarm_window_t7_ParamLimits

0x61e4,	// (0x0004475f) popup_midp_note_alarm_window_t7

0x61f6,	// (0x00044771) popup_midp_note_alarm_window_t8_ParamLimits

0x61f6,	// (0x00044771) popup_midp_note_alarm_window_t8

0x6208,	// (0x00044783) popup_midp_note_alarm_window_t9_ParamLimits

0x6208,	// (0x00044783) popup_midp_note_alarm_window_t9

0x621a,	// (0x00044795) popup_midp_note_alarm_window_t10_ParamLimits

0x621a,	// (0x00044795) popup_midp_note_alarm_window_t10

0x622c,	// (0x000447a7) popup_midp_note_alarm_window_t11_ParamLimits

0x622c,	// (0x000447a7) popup_midp_note_alarm_window_t11

0x623e,	// (0x000447b9) scroll_pane_cp17_ParamLimits

0x623e,	// (0x000447b9) scroll_pane_cp17

0xa4f0,	// (0x00048a6b) volume_small_pane_cp_g1

0xa7e5,	// (0x00048d60) volume_small_pane_cp_g2

0xa7ee,	// (0x00048d69) volume_small_pane_cp_g3

0xa7f7,	// (0x00048d72) volume_small_pane_cp_g4

0xa800,	// (0x00048d7b) volume_small_pane_cp_g5

0xa809,	// (0x00048d84) volume_small_pane_cp_g6

0xa812,	// (0x00048d8d) volume_small_pane_cp_g7

0xa81b,	// (0x00048d96) volume_small_pane_cp_g8

0xa824,	// (0x00048d9f) volume_small_pane_cp_g9

0xa82d,	// (0x00048da8) volume_small_pane_cp_g10

0x51a4,	// (0x0004371f) midp_ticker_pane_g1_ParamLimits

0x51b0,	// (0x0004372b) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0004dcf0) midp_ticker_pane_g_ParamLimits

0x51bc,	// (0x00043737) midp_ticker_pane_t1_ParamLimits

0xcda6,	// (0x0004b321) aid_fill_nsta_2

0x5a5b,	// (0x00043fd6) list_form2_midp_pane

0x6948,	// (0x00044ec3) midp_editing_number_pane_ParamLimits

0x6957,	// (0x00044ed2) midp_ticker_pane_ParamLimits

0x72c9,	// (0x00045844) form2_midp_field_pane

0x72d1,	// (0x0004584c) scroll_pane_cp51

0x72f1,	// (0x0004586c) form2_midp_button_pane_ParamLimits

0x72f1,	// (0x0004586c) form2_midp_button_pane

0x7303,	// (0x0004587e) form2_midp_content_pane_ParamLimits

0x7303,	// (0x0004587e) form2_midp_content_pane

0x731d,	// (0x00045898) form2_midp_field_choice_group_pane

0x7325,	// (0x000458a0) form2_midp_field_pane_g1

0x732d,	// (0x000458a8) form2_midp_field_pane_g2

0x7335,	// (0x000458b0) form2_midp_field_pane_g3

0x733d,	// (0x000458b8) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0004e068) form2_midp_field_pane_g

0x7345,	// (0x000458c0) form2_midp_gauge_slider_pane

0x734d,	// (0x000458c8) form2_midp_gauge_wait_pane

0x7355,	// (0x000458d0) form2_midp_image_pane_ParamLimits

0x7355,	// (0x000458d0) form2_midp_image_pane

0x7370,	// (0x000458eb) form2_midp_label_pane_ParamLimits

0x7370,	// (0x000458eb) form2_midp_label_pane

0xd6d4,	// (0x0004bc4f) form2_midp_label_pane_cp_ParamLimits

0xd6d4,	// (0x0004bc4f) form2_midp_label_pane_cp

0x7389,	// (0x00045904) form2_midp_string_pane_ParamLimits

0x7389,	// (0x00045904) form2_midp_string_pane

0xc04c,	// (0x0004a5c7) form2_midp_text_pane_ParamLimits

0xc04c,	// (0x0004a5c7) form2_midp_text_pane

0x739b,	// (0x00045916) form2_midp_time_pane

0x73ab,	// (0x00045926) input_focus_pane_cp51_ParamLimits

0x73ab,	// (0x00045926) input_focus_pane_cp51

0x73c3,	// (0x0004593e) form2_midp_label_pane_t1_ParamLimits

0x73c3,	// (0x0004593e) form2_midp_label_pane_t1

0xc06b,	// (0x0004a5e6) form2_mdip_text_pane_t1_ParamLimits

0xc06b,	// (0x0004a5e6) form2_mdip_text_pane_t1

0xc089,	// (0x0004a604) form2_midp_time_pane_t1

0x740c,	// (0x00045987) form2_midp_gauge_slider_pane_t1

0xd6f5,	// (0x0004bc70) form2_midp_gauge_slider_pane_t2

0xd707,	// (0x0004bc82) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0004e071) form2_midp_gauge_slider_pane_t

0x741e,	// (0x00045999) form2_midp_slider_pane

0x742a,	// (0x000459a5) form2_midp_gauge_wait_pane_t1

0x7438,	// (0x000459b3) form2_midp_wait_pane_ParamLimits

0x7438,	// (0x000459b3) form2_midp_wait_pane

0xd0c7,	// (0x0004b642) list_single_2graphic_pane_cp4_ParamLimits

0xd0c7,	// (0x0004b642) list_single_2graphic_pane_cp4

0xd719,	// (0x0004bc94) list_single_midp_graphic_pane_cp_ParamLimits

0xd719,	// (0x0004bc94) list_single_midp_graphic_pane_cp

0x1e14,	// (0x0004038f) list_highlight_pane_cp20

0x7463,	// (0x000459de) list_single_2graphic_pane_g1_cp4

0x746b,	// (0x000459e6) list_single_2graphic_pane_g2_cp4

0x7473,	// (0x000459ee) list_single_2graphic_pane_t1_cp4

0x1e70,	// (0x000403eb) list_highlight_pane_cp21

0x7482,	// (0x000459fd) list_single_midp_graphic_pane_g4_cp

0x7491,	// (0x00045a0c) list_single_midp_graphic_pane_t1_cp

0xd748,	// (0x0004bcc3) form2_mdip_string_pane_t1_ParamLimits

0xd748,	// (0x0004bcc3) form2_mdip_string_pane_t1

0x1e14,	// (0x0004038f) bg_wml_button_pane_cp2

0x1e0a,	// (0x00040385) form2_midp_image_pane_g1

0xb889,	// (0x00049e04) list_double_large_graphic_pane_g5_ParamLimits

0xb889,	// (0x00049e04) list_double_large_graphic_pane_g5

0xb928,	// (0x00049ea3) midp_form_pane_ParamLimits

0x1e70,	// (0x000403eb) main_apps_wheel_pane_ParamLimits

0xcbfa,	// (0x0004b175) popup_preview_window_ParamLimits

0xcbfa,	// (0x0004b175) popup_preview_window

0x54b1,	// (0x00043a2c) popup_touch_info_window_ParamLimits

0x54b1,	// (0x00043a2c) popup_touch_info_window

0x54cf,	// (0x00043a4a) popup_touch_menu_window_ParamLimits

0x54cf,	// (0x00043a4a) popup_touch_menu_window

0x1e00,	// (0x0004037b) bg_popup_sub_pane_cp6

0x74a6,	// (0x00045a21) list_touch_menu_pane

0x74ae,	// (0x00045a29) list_single_touch_menu_pane_ParamLimits

0x74ae,	// (0x00045a29) list_single_touch_menu_pane

0x74c4,	// (0x00045a3f) list_single_touch_menu_pane_t1

0x1e70,	// (0x000403eb) bg_popup_sub_pane_cp7_ParamLimits

0x1e70,	// (0x000403eb) bg_popup_sub_pane_cp7

0x74d2,	// (0x00045a4d) heading_sub_pane

0x74da,	// (0x00045a55) list_touch_info_pane_ParamLimits

0x74da,	// (0x00045a55) list_touch_info_pane

0x74e9,	// (0x00045a64) list_single_touch_info_pane_ParamLimits

0x74e9,	// (0x00045a64) list_single_touch_info_pane

0x74fb,	// (0x00045a76) list_single_touch_info_pane_t1

0x7509,	// (0x00045a84) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0004e07f) list_single_touch_info_pane_t

0x517a,	// (0x000436f5) bg_popup_heading_pane_cp

0x7517,	// (0x00045a92) heading_sub_pane_t1

0x57da,	// (0x00043d55) bg_popup_preview_window_pane_cp_ParamLimits

0x57da,	// (0x00043d55) bg_popup_preview_window_pane_cp

0x74d2,	// (0x00045a4d) heading_preview_pane

0x74da,	// (0x00045a55) list_preview_pane_ParamLimits

0x74da,	// (0x00045a55) list_preview_pane

0x7525,	// (0x00045aa0) popup_preview_window_g1

0x74e9,	// (0x00045a64) list_single_preview_pane_ParamLimits

0x74e9,	// (0x00045a64) list_single_preview_pane

0x752d,	// (0x00045aa8) list_single_preview_pane_g1

0x7535,	// (0x00045ab0) list_single_preview_pane_t1

0x74fb,	// (0x00045a76) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0004e084) list_single_preview_pane_t

0x7543,	// (0x00045abe) bg_popup_heading_pane_cp2_ParamLimits

0x7543,	// (0x00045abe) bg_popup_heading_pane_cp2

0x7559,	// (0x00045ad4) heading_preview_pane_g1

0x7561,	// (0x00045adc) heading_preview_pane_t1_ParamLimits

0x7561,	// (0x00045adc) heading_preview_pane_t1

0x1ec3,	// (0x0004043e) soft_indicator_pane_t1_ParamLimits

0x2c5a,	// (0x000411d5) scroll_pane_ParamLimits

0x49b8,	// (0x00042f33) scroll_sc2_left_pane

0x49af,	// (0x00042f2a) scroll_sc2_right_pane

0x49d7,	// (0x00042f52) scroll_bg_pane_g1_ParamLimits

0x49ec,	// (0x00042f67) scroll_bg_pane_g2_ParamLimits

0x4a04,	// (0x00042f7f) scroll_bg_pane_g3_ParamLimits

0xf700,	// (0x0004dc7b) scroll_bg_pane_g_ParamLimits

0x49d7,	// (0x00042f52) scroll_handle_pane_g1_ParamLimits

0x4a26,	// (0x00042fa1) scroll_handle_pane_g2_ParamLimits

0x4a04,	// (0x00042f7f) scroll_handle_pane_g3_ParamLimits

0xf707,	// (0x0004dc82) scroll_handle_pane_g_ParamLimits

0x53ee,	// (0x00043969) popup_choice_list_window_ParamLimits

0x53ee,	// (0x00043969) popup_choice_list_window

0x5620,	// (0x00043b9b) choice_list_pane

0x56a2,	// (0x00043c1d) cell_toolbar_pane_t1

0x56ca,	// (0x00043c45) toolbar_button_pane_ParamLimits

0x666a,	// (0x00044be5) ai_gene_pane_1_t2_ParamLimits

0x666a,	// (0x00044be5) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x0004dea3) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x0004dea3) ai_gene_pane_1_t

0x757e,	// (0x00045af9) scroll_sc2_left_pane_g1

0x757e,	// (0x00045af9) scroll_sc2_right_pane_g1

0x44b4,	// (0x00042a2f) bg_popup_sub_pane_cp10

0x7588,	// (0x00045b03) list_choice_list_pane

0x75a1,	// (0x00045b1c) list_single_choice_list_pane_ParamLimits

0x75a1,	// (0x00045b1c) list_single_choice_list_pane

0x75b4,	// (0x00045b2f) list_single_choice_list_pane_g1

0x449f,	// (0x00042a1a) list_single_choice_list_pane_t1_ParamLimits

0x449f,	// (0x00042a1a) list_single_choice_list_pane_t1

0x75bc,	// (0x00045b37) choice_list_pane_g1

0x75c4,	// (0x00045b3f) choice_list_pane_t1

0x1e00,	// (0x0004037b) input_focus_pane_cp11

0x4924,	// (0x00042e9f) title_pane_stacon_g2_ParamLimits

0x4924,	// (0x00042e9f) title_pane_stacon_g2

0x0002,

0xf6e6,	// (0x0004dc61) title_pane_stacon_g_ParamLimits

0xf6e6,	// (0x0004dc61) title_pane_stacon_g

0x517a,	// (0x000436f5) cursor_press_pane

0xc4d2,	// (0x0004aa4d) popup_fep_hwr_window_ParamLimits

0xc4d2,	// (0x0004aa4d) popup_fep_hwr_window

0x5448,	// (0x000439c3) popup_fep_vkb_window_ParamLimits

0x5448,	// (0x000439c3) popup_fep_vkb_window

0x75d2,	// (0x00045b4d) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0004e0ad) fep_vkb_side_pane_g_ParamLimits

0xa86f,	// (0x00048dea) fep_hwr_candidate_pane_ParamLimits

0xa86f,	// (0x00048dea) fep_hwr_candidate_pane

0xa899,	// (0x00048e14) fep_hwr_side_pane_ParamLimits

0xa899,	// (0x00048e14) fep_hwr_side_pane

0xa8b9,	// (0x00048e34) fep_hwr_top_pane_ParamLimits

0xa8b9,	// (0x00048e34) fep_hwr_top_pane

0xa8d1,	// (0x00048e4c) fep_hwr_write_pane_ParamLimits

0xa8d1,	// (0x00048e4c) fep_hwr_write_pane

0xfb32,	// (0x0004e0ad) fep_vkb_side_pane_g

0x75ec,	// (0x00045b67) fep_hwr_top_pane_g1

0x75da,	// (0x00045b55) fep_hwr_top_pane_g2

0xa90b,	// (0x00048e86) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0004e089) fep_hwr_top_pane_g

0xa920,	// (0x00048e9b) fep_hwr_top_text_pane

0x4b7d,	// (0x000430f8) fep_hwr_top_text_pane_g1

0x7622,	// (0x00045b9d) fep_hwr_top_text_pane_t1

0xaa16,	// (0x00048f91) fep_hwr_candidate_pane_g1

0x774f,	// (0x00045cca) fep_vkb_keypad_pane_g3_ParamLimits

0x774f,	// (0x00045cca) fep_vkb_keypad_pane_g3

0x7777,	// (0x00045cf2) fep_vkb_keypad_pane_g4_ParamLimits

0x7777,	// (0x00045cf2) fep_vkb_keypad_pane_g4

0x77e6,	// (0x00045d61) fep_vkb_bottom_pane_g2_ParamLimits

0x77e6,	// (0x00045d61) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0004e0b4) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0004e0b4) fep_vkb_bottom_pane_g

0x757e,	// (0x00045af9) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0004e0be) cell_vkb_side_pane_g

0x782a,	// (0x00045da5) cell_vkb_side_pane_t1

0x7838,	// (0x00045db3) cell_vkb_side_pane_t1_copy1

0x757e,	// (0x00045af9) bg_fep_vkb_candidate_pane_g2

0x790e,	// (0x00045e89) cell_vkb_candidate_pane_ParamLimits

0x7630,	// (0x00045bab) aid_size_cell_vkb_ParamLimits

0x7630,	// (0x00045bab) aid_size_cell_vkb

0x790e,	// (0x00045e89) cell_vkb_candidate_pane

0xaa3d,	// (0x00048fb8) bg_popup_fep_shadow_pane_g1

0xd853,	// (0x0004bdce) fep_vkb_bottom_pane_ParamLimits

0xd853,	// (0x0004bdce) fep_vkb_bottom_pane

0x76bd,	// (0x00045c38) fep_vkb_candidate_pane_ParamLimits

0x76bd,	// (0x00045c38) fep_vkb_candidate_pane

0xd878,	// (0x0004bdf3) fep_vkb_keypad_pane_ParamLimits

0xd878,	// (0x0004bdf3) fep_vkb_keypad_pane

0xd8b4,	// (0x0004be2f) fep_vkb_side_pane_ParamLimits

0xd8b4,	// (0x0004be2f) fep_vkb_side_pane

0xd8f0,	// (0x0004be6b) fep_vkb_top_pane_ParamLimits

0xd8f0,	// (0x0004be6b) fep_vkb_top_pane

0x76e3,	// (0x00045c5e) fep_vkb_top_pane_g1_ParamLimits

0x76e3,	// (0x00045c5e) fep_vkb_top_pane_g1

0x76f2,	// (0x00045c6d) fep_vkb_top_pane_g2_ParamLimits

0x76f2,	// (0x00045c6d) fep_vkb_top_pane_g2

0x7701,	// (0x00045c7c) fep_vkb_top_pane_g3_ParamLimits

0x7701,	// (0x00045c7c) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0004e0a4) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0004e0a4) fep_vkb_top_pane_g

0x771f,	// (0x00045c9a) fep_vkb_top_text_pane_ParamLimits

0x771f,	// (0x00045c9a) fep_vkb_top_text_pane

0xd92c,	// (0x0004bea7) fep_vkb_side_pane_g1_ParamLimits

0xd92c,	// (0x0004bea7) fep_vkb_side_pane_g1

0x773e,	// (0x00045cb9) grid_vkb_side_pane_ParamLimits

0x773e,	// (0x00045cb9) grid_vkb_side_pane

0xaa45,	// (0x00048fc0) bg_popup_fep_shadow_pane_g2

0xaa4e,	// (0x00048fc9) bg_popup_fep_shadow_pane_g3

0xaa56,	// (0x00048fd1) bg_popup_fep_shadow_pane_g4

0xaa5f,	// (0x00048fda) bg_popup_fep_shadow_pane_g5

0xaa69,	// (0x00048fe4) bg_popup_fep_shadow_pane_g6

0xaa71,	// (0x00048fec) bg_popup_fep_shadow_pane_g7

0x43db,	// (0x00042956) bg_popup_fep_shadow_pane_g8

0x7795,	// (0x00045d10) grid_vkb_keypad_number_pane_ParamLimits

0x7795,	// (0x00045d10) grid_vkb_keypad_number_pane

0x77a5,	// (0x00045d20) grid_vkb_keypad_pane_ParamLimits

0x77a5,	// (0x00045d20) grid_vkb_keypad_pane

0x77cb,	// (0x00045d46) fep_vkb_bottom_pane_g1_ParamLimits

0x77cb,	// (0x00045d46) fep_vkb_bottom_pane_g1

0x77f4,	// (0x00045d6f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x77f4,	// (0x00045d6f) grid_vkb_keypad_bottom_left_pane

0x7809,	// (0x00045d84) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7809,	// (0x00045d84) grid_vkb_keypad_bottom_right_pane

0x781e,	// (0x00045d99) fep_vkb_top_text_pane_g1

0xd976,	// (0x0004bef1) fep_vkb_top_text_pane_t1

0xd98b,	// (0x0004bf06) cell_vkb_side_pane_ParamLimits

0xd98b,	// (0x0004bf06) cell_vkb_side_pane

0x757e,	// (0x00045af9) cell_vkb_side_pane_g1

0x7846,	// (0x00045dc1) cell_vkb_keypad_pane_ParamLimits

0x7846,	// (0x00045dc1) cell_vkb_keypad_pane

0x78bb,	// (0x00045e36) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0004e0d1) bg_popup_fep_shadow_pane_g

0xaa83,	// (0x00048ffe) cell_hwr_side_pane_g1

0xaa83,	// (0x00048ffe) cell_hwr_side_pane_g2

0x78c5,	// (0x00045e40) cell_vkb_keypad_pane_t1

0xd9ae,	// (0x0004bf29) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd9ae,	// (0x0004bf29) cell_vkb_keypad_bottom_left_pane

0xd9cb,	// (0x0004bf46) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd9cb,	// (0x0004bf46) cell_vkb_keypad_bottom_right_pane

0x757e,	// (0x00045af9) cell_vkb_keypad_bottom_left_pane_g1

0x757e,	// (0x00045af9) cell_vkb_keypad_bottom_right_pane_g1

0x78d3,	// (0x00045e4e) cell_vkb_keypad_number_pane_ParamLimits

0x78d3,	// (0x00045e4e) cell_vkb_keypad_number_pane

0x78f2,	// (0x00045e6d) cell_vkb_keypad_number_pane_g1

0x78fc,	// (0x00045e77) cell_vkb_keypad_number_pane_g2

0x7905,	// (0x00045e80) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0004e0c3) cell_vkb_keypad_number_pane_g

0x78c5,	// (0x00045e40) cell_vkb_keypad_number_pane_t1

0x7929,	// (0x00045ea4) fep_vkb_candidate_pane_g1

0x0001,

0xfb69,	// (0x0004e0e4) cell_hwr_side_pane_g

0x7942,	// (0x00045ebd) cell_hwr_side_pane_t1

0xaa8d,	// (0x00049008) cell_hwr_side_pane_t1_copy1

0xaa9b,	// (0x00049016) cell_hwr_candidate_pane_g1

0xaaca,	// (0x00049045) cell_hwr_candidate_pane_t1

0x757e,	// (0x00045af9) cell_vkb_candidate_pane_g2

0x79c8,	// (0x00045f43) cell_vkb_candidate_pane_t1

0xa836,	// (0x00048db1) bg_popup_fep_shadow_pane_ParamLimits

0xa836,	// (0x00048db1) bg_popup_fep_shadow_pane

0xa8eb,	// (0x00048e66) bg_fep_hwr_top_pane_g4

0x75fe,	// (0x00045b79) bg_hwr_side_pane_g1_ParamLimits

0x75fe,	// (0x00045b79) bg_hwr_side_pane_g1

0xa95c,	// (0x00048ed7) cell_hwr_side_pane_ParamLimits

0xa95c,	// (0x00048ed7) cell_hwr_side_pane

0xa997,	// (0x00048f12) fep_hwr_write_pane_g1_ParamLimits

0xa997,	// (0x00048f12) fep_hwr_write_pane_g1

0xa9a4,	// (0x00048f1f) fep_hwr_write_pane_g2_ParamLimits

0xa9a4,	// (0x00048f1f) fep_hwr_write_pane_g2

0xa9b1,	// (0x00048f2c) fep_hwr_write_pane_g3_ParamLimits

0xa9b1,	// (0x00048f2c) fep_hwr_write_pane_g3

0xa9bf,	// (0x00048f3a) fep_hwr_write_pane_g4_ParamLimits

0xa9bf,	// (0x00048f3a) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0004e090) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0004e090) fep_hwr_write_pane_g

0xa8eb,	// (0x00048e66) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xa8eb,	// (0x00048e66) bg_fep_hwr_candidate_pane_g2

0xa9d4,	// (0x00048f4f) cell_hwr_candidate_pane_ParamLimits

0xa9d4,	// (0x00048f4f) cell_hwr_candidate_pane

0xaa16,	// (0x00048f91) fep_hwr_candidate_pane_g1_ParamLimits

0x765e,	// (0x00045bd9) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x765e,	// (0x00045bd9) bg_popup_fep_shadow_pane_cp2

0x7711,	// (0x00045c8c) fep_vkb_top_pane_g4_ParamLimits

0x7711,	// (0x00045c8c) fep_vkb_top_pane_g4

0x7730,	// (0x00045cab) fep_vkb_side_pane_g2_ParamLimits

0x7730,	// (0x00045cab) fep_vkb_side_pane_g2

0x9aa4,	// (0x0004801f) list_setting_pane_t4_ParamLimits

0x9aa4,	// (0x0004801f) list_setting_pane_t4

0x9b3e,	// (0x000480b9) list_setting_number_pane_t5_ParamLimits

0x9b3e,	// (0x000480b9) list_setting_number_pane_t5

0xb9da,	// (0x00049f55) list_double_heading_pane_cp2_ParamLimits

0xb9da,	// (0x00049f55) list_double_heading_pane_cp2

0x4376,	// (0x000428f1) list_double_heading_pane_g1_cp2_ParamLimits

0x4376,	// (0x000428f1) list_double_heading_pane_g1_cp2

0x4382,	// (0x000428fd) list_double_heading_pane_g2_cp2_ParamLimits

0x4382,	// (0x000428fd) list_double_heading_pane_g2_cp2

0x79d6,	// (0x00045f51) list_double_heading_pane_t1_cp2_ParamLimits

0x79d6,	// (0x00045f51) list_double_heading_pane_t1_cp2

0x79ec,	// (0x00045f67) list_double_heading_pane_t2_cp2_ParamLimits

0x79ec,	// (0x00045f67) list_double_heading_pane_t2_cp2

0x1df8,	// (0x00040373) aid_value_unit2

0x950c,	// (0x00047a87) popup_preview_fixed_window

0x1fa3,	// (0x0004051e) bg_popup_preview_window_pane_cp02

0x79fe,	// (0x00045f79) list_preview_fixed_pane

0x7a44,	// (0x00045fbf) list_empty_pane_fp_ParamLimits

0x7a44,	// (0x00045fbf) list_empty_pane_fp

0x7a44,	// (0x00045fbf) list_single_cale_day_pane_fp_ParamLimits

0x7a44,	// (0x00045fbf) list_single_cale_day_pane_fp

0x7a44,	// (0x00045fbf) list_single_graphic_heading_pane_fp_ParamLimits

0x7a44,	// (0x00045fbf) list_single_graphic_heading_pane_fp

0x7a44,	// (0x00045fbf) list_single_graphic_pane_fp_ParamLimits

0x7a44,	// (0x00045fbf) list_single_graphic_pane_fp

0x7a44,	// (0x00045fbf) list_single_heading_pane_fp_ParamLimits

0x7a44,	// (0x00045fbf) list_single_heading_pane_fp

0x7a44,	// (0x00045fbf) list_single_pane_fp_ParamLimits

0x7a44,	// (0x00045fbf) list_single_pane_fp

0x7a59,	// (0x00045fd4) list_single_pane_fp_g1_ParamLimits

0x7a59,	// (0x00045fd4) list_single_pane_fp_g1

0x4376,	// (0x000428f1) list_single_pane_fp_g2_ParamLimits

0x4376,	// (0x000428f1) list_single_pane_fp_g2

0x4382,	// (0x000428fd) list_single_pane_fp_g3_ParamLimits

0x4382,	// (0x000428fd) list_single_pane_fp_g3

0x7a65,	// (0x00045fe0) list_single_pane_fp_g4_ParamLimits

0x7a65,	// (0x00045fe0) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x0004e0f7) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x0004e0f7) list_single_pane_fp_g

0xc09c,	// (0x0004a617) list_single_pane_fp_t1_ParamLimits

0xc09c,	// (0x0004a617) list_single_pane_fp_t1

0xc0b3,	// (0x0004a62e) list_single_graphic_pane_fp_g1_ParamLimits

0xc0b3,	// (0x0004a62e) list_single_graphic_pane_fp_g1

0x7a59,	// (0x00045fd4) list_single_graphic_pane_fp_g2_ParamLimits

0x7a59,	// (0x00045fd4) list_single_graphic_pane_fp_g2

0x4376,	// (0x000428f1) list_single_graphic_pane_fp_g3_ParamLimits

0x4376,	// (0x000428f1) list_single_graphic_pane_fp_g3

0x4382,	// (0x000428fd) list_single_graphic_pane_fp_g4_ParamLimits

0x4382,	// (0x000428fd) list_single_graphic_pane_fp_g4

0x7a65,	// (0x00045fe0) list_single_graphic_pane_fp_g5_ParamLimits

0x7a65,	// (0x00045fe0) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x0004e100) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x0004e100) list_single_graphic_pane_fp_g

0xc0bf,	// (0x0004a63a) list_single_graphic_pane_fp_t1_ParamLimits

0xc0bf,	// (0x0004a63a) list_single_graphic_pane_fp_t1

0xc0b3,	// (0x0004a62e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc0b3,	// (0x0004a62e) list_single_graphic_heading_pane_fp_g1

0x7a59,	// (0x00045fd4) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7a59,	// (0x00045fd4) list_single_graphic_heading_pane_fp_g2

0x4376,	// (0x000428f1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4376,	// (0x000428f1) list_single_graphic_heading_pane_fp_g3

0x4382,	// (0x000428fd) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4382,	// (0x000428fd) list_single_graphic_heading_pane_fp_g4

0x7a65,	// (0x00045fe0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7a65,	// (0x00045fe0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0004e100) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0004e100) list_single_graphic_heading_pane_fp_g

0xc0d5,	// (0x0004a650) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc0d5,	// (0x0004a650) list_single_graphic_heading_pane_fp_t1

0xc0eb,	// (0x0004a666) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc0eb,	// (0x0004a666) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0004e10b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0004e10b) list_single_graphic_heading_pane_fp_t

0xc0fd,	// (0x0004a678) list_single_cale_day_pane_fp_g1_ParamLimits

0xc0fd,	// (0x0004a678) list_single_cale_day_pane_fp_g1

0x7a71,	// (0x00045fec) list_single_cale_day_pane_fp_g2_ParamLimits

0x7a71,	// (0x00045fec) list_single_cale_day_pane_fp_g2

0xc135,	// (0x0004a6b0) list_single_cale_day_pane_fp_g3_ParamLimits

0xc135,	// (0x0004a6b0) list_single_cale_day_pane_fp_g3

0xc15d,	// (0x0004a6d8) list_single_cale_day_pane_fp_g4_ParamLimits

0xc15d,	// (0x0004a6d8) list_single_cale_day_pane_fp_g4

0xc181,	// (0x0004a6fc) list_single_cale_day_pane_fp_g5_ParamLimits

0xc181,	// (0x0004a6fc) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x0004e110) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x0004e110) list_single_cale_day_pane_fp_g

0xc1a5,	// (0x0004a720) list_single_cale_day_pane_fp_t1_ParamLimits

0xc1a5,	// (0x0004a720) list_single_cale_day_pane_fp_t1

0xc1cb,	// (0x0004a746) list_single_cale_day_pane_fp_t2_ParamLimits

0xc1cb,	// (0x0004a746) list_single_cale_day_pane_fp_t2

0xc1e4,	// (0x0004a75f) list_single_cale_day_pane_fp_t3_ParamLimits

0xc1e4,	// (0x0004a75f) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x0004e11b) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x0004e11b) list_single_cale_day_pane_fp_t

0x7a59,	// (0x00045fd4) list_empty_pane_fp_g1_ParamLimits

0x7a59,	// (0x00045fd4) list_empty_pane_fp_g1

0xc1fd,	// (0x0004a778) list_empty_pane_fp_t1

0xc20b,	// (0x0004a786) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x0004e122) list_empty_pane_fp_t

0x7a59,	// (0x00045fd4) list_single_heading_pane_fp_g1_ParamLimits

0x7a59,	// (0x00045fd4) list_single_heading_pane_fp_g1

0x4376,	// (0x000428f1) list_single_heading_pane_fp_g2_ParamLimits

0x4376,	// (0x000428f1) list_single_heading_pane_fp_g2

0x4382,	// (0x000428fd) list_single_heading_pane_fp_g3_ParamLimits

0x4382,	// (0x000428fd) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x0004e127) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0004e127) list_single_heading_pane_fp_g

0xc219,	// (0x0004a794) list_single_heading_pane_fp_t1_ParamLimits

0xc219,	// (0x0004a794) list_single_heading_pane_fp_t1

0xc22b,	// (0x0004a7a6) list_single_heading_pane_fp_t2_ParamLimits

0xc22b,	// (0x0004a7a6) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x0004e12e) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x0004e12e) list_single_heading_pane_fp_t

0x44c0,	// (0x00042a3b) aid_size_cell_fast

0x1f86,	// (0x00040501) soft_indicator_pane_cp1_t1

0x44fd,	// (0x00042a78) cell_app_pane_cp2_ParamLimits

0x44fd,	// (0x00042a78) cell_app_pane_cp2

0xa858,	// (0x00048dd3) fep_hwr_candidate_drop_down_list_pane

0xaa30,	// (0x00048fab) fep_hwr_candidate_pane_g3_ParamLimits

0xaa30,	// (0x00048fab) fep_hwr_candidate_pane_g3

0x4131,	// (0x000426ac) fep_hwr_candidate_pane_g4_ParamLimits

0x4131,	// (0x000426ac) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0004e09d) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0004e09d) fep_hwr_candidate_pane_g

0x76ac,	// (0x00045c27) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x76ac,	// (0x00045c27) fep_vkb_candidate_drop_down_list_pane

0x7931,	// (0x00045eac) fep_vkb_candidate_pane_g3

0x7939,	// (0x00045eb4) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0004e0ca) fep_vkb_candidate_pane_g

0xaa9b,	// (0x00049016) cell_hwr_candidate_pane_g1_ParamLimits

0xaaa9,	// (0x00049024) cell_hwr_candidate_pane_g3_ParamLimits

0xaaa9,	// (0x00049024) cell_hwr_candidate_pane_g3

0xe349,	// (0x0004c8c4) cell_hwr_candidate_pane_g4_ParamLimits

0xe349,	// (0x0004c8c4) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0004e0e9) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x0004e0e9) cell_hwr_candidate_pane_g

0x7992,	// (0x00045f0d) cell_vkb_candidate_pane_g3_ParamLimits

0x7992,	// (0x00045f0d) cell_vkb_candidate_pane_g3

0x79ad,	// (0x00045f28) cell_vkb_candidate_pane_g4_ParamLimits

0x79ad,	// (0x00045f28) cell_vkb_candidate_pane_g4

0x7a7d,	// (0x00045ff8) cell_app_pane_cp2_g1_ParamLimits

0x7a7d,	// (0x00045ff8) cell_app_pane_cp2_g1

0x7a9b,	// (0x00046016) cell_app_pane_cp2_g2_ParamLimits

0x7a9b,	// (0x00046016) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x0004e133) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x0004e133) cell_app_pane_cp2_g

0x7aa7,	// (0x00046022) cell_app_pane_cp2_t1_ParamLimits

0x7aa7,	// (0x00046022) cell_app_pane_cp2_t1

0x435c,	// (0x000428d7) grid_highlight_pane_cp1_ParamLimits

0x435c,	// (0x000428d7) grid_highlight_pane_cp1

0xaae8,	// (0x00049063) cell_hwr_candidate_pane_cp1_ParamLimits

0xaae8,	// (0x00049063) cell_hwr_candidate_pane_cp1

0xaa9b,	// (0x00049016) fep_hwr_candidate_drop_down_list_pane_g1

0xab07,	// (0x00049082) fep_hwr_candidate_drop_down_list_pane_g2

0xab14,	// (0x0004908f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x0004e138) fep_hwr_candidate_drop_down_list_pane_g

0xab21,	// (0x0004909c) fep_hwr_candidate_drop_down_list_scroll_pane

0xab2a,	// (0x000490a5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xab2a,	// (0x000490a5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xab37,	// (0x000490b2) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xab37,	// (0x000490b2) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xab44,	// (0x000490bf) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xab44,	// (0x000490bf) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xab51,	// (0x000490cc) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xab51,	// (0x000490cc) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xab6c,	// (0x000490e7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xab6c,	// (0x000490e7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xab87,	// (0x00049102) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xab87,	// (0x00049102) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xaba2,	// (0x0004911d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xaba2,	// (0x0004911d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xabbd,	// (0x00049138) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xabbd,	// (0x00049138) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x0004e13f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x0004e13f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7ad3,	// (0x0004604e) cell_vkb_candidate_pane_cp1_ParamLimits

0x7ad3,	// (0x0004604e) cell_vkb_candidate_pane_cp1

0x7711,	// (0x00045c8c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7711,	// (0x00045c8c) fep_vkb_candidate_drop_down_list_pane_g1

0x7ab9,	// (0x00046034) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7ab9,	// (0x00046034) fep_vkb_candidate_drop_down_list_pane_g2

0x7ac6,	// (0x00046041) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7ac6,	// (0x00046041) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0004e150) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x0004e150) fep_vkb_candidate_drop_down_list_pane_g

0x7af3,	// (0x0004606e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7af3,	// (0x0004606e) fep_vkb_candidate_drop_down_list_scroll_pane

0x7b00,	// (0x0004607b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7b00,	// (0x0004607b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7b0d,	// (0x00046088) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7b0d,	// (0x00046088) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7b19,	// (0x00046094) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7b19,	// (0x00046094) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7950,	// (0x00045ecb) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7950,	// (0x00045ecb) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7971,	// (0x00045eec) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7971,	// (0x00045eec) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7b25,	// (0x000460a0) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7b25,	// (0x000460a0) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7b46,	// (0x000460c1) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7b46,	// (0x000460c1) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7b67,	// (0x000460e2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7b67,	// (0x000460e2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0004e157) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0004e157) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb533,	// (0x00049aae) title_pane_g1_ParamLimits

0xb540,	// (0x00049abb) title_pane_g2_ParamLimits

0xf566,	// (0x0004dae1) title_pane_g_ParamLimits

0x4b75,	// (0x000430f0) aid_call2_pane

0x4b6d,	// (0x000430e8) aid_call_pane

0x4b7d,	// (0x000430f8) popup_clock_analogue_window_g1

0x4b7d,	// (0x000430f8) popup_clock_analogue_window_g2

0x9f99,	// (0x00048514) popup_clock_analogue_window_g3

0x9fa2,	// (0x0004851d) popup_clock_analogue_window_g4

0x1e0a,	// (0x00040385) popup_clock_analogue_window_g5

0x0004,

0xf715,	// (0x0004dc90) popup_clock_analogue_window_g

0x9faa,	// (0x00048525) popup_clock_analogue_window_t1

0x9fb8,	// (0x00048533) clock_digital_number_pane_ParamLimits

0x9fb8,	// (0x00048533) clock_digital_number_pane

0x9fc4,	// (0x0004853f) clock_digital_number_pane_cp02_ParamLimits

0x9fc4,	// (0x0004853f) clock_digital_number_pane_cp02

0x9fd0,	// (0x0004854b) clock_digital_number_pane_cp03_ParamLimits

0x9fd0,	// (0x0004854b) clock_digital_number_pane_cp03

0x9fdc,	// (0x00048557) clock_digital_number_pane_cp04_ParamLimits

0x9fdc,	// (0x00048557) clock_digital_number_pane_cp04

0x9fe8,	// (0x00048563) clock_digital_separator_pane_ParamLimits

0x9fe8,	// (0x00048563) clock_digital_separator_pane

0x9ff4,	// (0x0004856f) popup_clock_digital_window_t1_ParamLimits

0x9ff4,	// (0x0004856f) popup_clock_digital_window_t1

0x1e0a,	// (0x00040385) clock_digital_number_pane_g1

0x1e0a,	// (0x00040385) clock_digital_number_pane_g2

0x0001,

0xf720,	// (0x0004dc9b) clock_digital_number_pane_g

0x1e0a,	// (0x00040385) clock_digital_separator_pane_g1

0x1e0a,	// (0x00040385) clock_digital_separator_pane_g2

0x0001,

0xf720,	// (0x0004dc9b) clock_digital_separator_pane_g

0xcd90,	// (0x0004b30b) aid_fill_nsta_ParamLimits

0xce55,	// (0x0004b3d0) indicator_nsta_pane_ParamLimits

0x55c7,	// (0x00043b42) popup_clock_analogue_window

0x55c7,	// (0x00043b42) popup_clock_digital_window

0x1e70,	// (0x000403eb) grid_indicator_nsta_pane_ParamLimits

0x7202,	// (0x0004577d) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0004e01d) clock_nsta_pane_t

0x9f5d,	// (0x000484d8) aid_size_max_handle

0x9f67,	// (0x000484e2) aid_size_min_handle

0x517a,	// (0x000436f5) editor_scroll_pane

0x7b82,	// (0x000460fd) ex_editor_pane

0x447b,	// (0x000429f6) scroll_pane_cp13

0x2c86,	// (0x00041201) scroll_pane_cp14

0x4bac,	// (0x00043127) scroll_pane_cp36

0xb9ee,	// (0x00049f69) list_single_graphic_hl_pane_cp2_ParamLimits

0xb9ee,	// (0x00049f69) list_single_graphic_hl_pane_cp2

0xbdd2,	// (0x0004a34d) list_single_graphic_hl_pane_ParamLimits

0xbdd2,	// (0x0004a34d) list_single_graphic_hl_pane

0xc241,	// (0x0004a7bc) aid_size_min_hl_cp1

0x7b8a,	// (0x00046105) list_highlight_pane_cp34_ParamLimits

0x7b8a,	// (0x00046105) list_highlight_pane_cp34

0x7b9b,	// (0x00046116) list_single_graphic_hl_pane_g1_ParamLimits

0x7b9b,	// (0x00046116) list_single_graphic_hl_pane_g1

0xc24a,	// (0x0004a7c5) list_single_graphic_hl_pane_g2_ParamLimits

0xc24a,	// (0x0004a7c5) list_single_graphic_hl_pane_g2

0xc24a,	// (0x0004a7c5) list_single_graphic_hl_pane_g3_ParamLimits

0xc24a,	// (0x0004a7c5) list_single_graphic_hl_pane_g3

0x50eb,	// (0x00043666) list_single_graphic_hl_pane_g4_ParamLimits

0x50eb,	// (0x00043666) list_single_graphic_hl_pane_g4

0xc256,	// (0x0004a7d1) list_single_graphic_hl_pane_g5_ParamLimits

0xc256,	// (0x0004a7d1) list_single_graphic_hl_pane_g5

0x0004,

0xfbed,	// (0x0004e168) list_single_graphic_hl_pane_g_ParamLimits

0xfbed,	// (0x0004e168) list_single_graphic_hl_pane_g

0xc26a,	// (0x0004a7e5) list_single_graphic_hl_pane_t1_ParamLimits

0xc26a,	// (0x0004a7e5) list_single_graphic_hl_pane_t1

0x7ba8,	// (0x00046123) aid_size_min_hl_cp2

0x7bb1,	// (0x0004612c) list_highlight_pane_cp34_cp2_ParamLimits

0x7bb1,	// (0x0004612c) list_highlight_pane_cp34_cp2

0x7b9b,	// (0x00046116) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7b9b,	// (0x00046116) list_single_graphic_hl_pane_g1_cp2

0x7bbe,	// (0x00046139) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7bbe,	// (0x00046139) list_single_graphic_hl_pane_g2_cp2

0x7bca,	// (0x00046145) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7bca,	// (0x00046145) list_single_graphic_hl_pane_g3_cp2

0x5c80,	// (0x000441fb) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5c80,	// (0x000441fb) list_single_graphic_hl_pane_g4_cp2

0x7bd8,	// (0x00046153) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7bd8,	// (0x00046153) list_single_graphic_hl_pane_g5_cp2

0xa2b0,	// (0x0004882b) control_pane_g4_ParamLimits

0xa2b0,	// (0x0004882b) control_pane_g4

0x44b4,	// (0x00042a2f) bg_popup_sub_pane_cp10_ParamLimits

0x7588,	// (0x00045b03) list_choice_list_pane_ParamLimits

0x7597,	// (0x00045b12) scroll_pane_cp23

0x1fa3,	// (0x0004051e) bg_popup_preview_window_pane_cp02_ParamLimits

0x79fe,	// (0x00045f79) list_preview_fixed_pane_ParamLimits

0x7a14,	// (0x00045f8f) list_preview_fixed_pane_cp_ParamLimits

0x7a14,	// (0x00045f8f) list_preview_fixed_pane_cp

0x7a20,	// (0x00045f9b) popup_preview_fixed_window_g1_ParamLimits

0x7a20,	// (0x00045f9b) popup_preview_fixed_window_g1

0x7a2c,	// (0x00045fa7) popup_preview_fixed_window_g2_ParamLimits

0x7a2c,	// (0x00045fa7) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x0004e0f0) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x0004e0f0) popup_preview_fixed_window_g

0x9ed1,	// (0x0004844c) aid_navi_side_left_pane_ParamLimits

0x9ee6,	// (0x00048461) aid_navi_side_right_pane_ParamLimits

0x9efe,	// (0x00048479) navi_icon_pane_stacon_ParamLimits

0x9f12,	// (0x0004848d) navi_navi_pane_stacon_ParamLimits

0x9efe,	// (0x00048479) navi_text_pane_stacon_ParamLimits

0x1e00,	// (0x0004037b) main_text_info_pane

0x7c02,	// (0x0004617d) listscroll_text_info_pane

0x7c0a,	// (0x00046185) list_text_info_pane_ParamLimits

0x7c0a,	// (0x00046185) list_text_info_pane

0x7c19,	// (0x00046194) scroll_pane_cp24_ParamLimits

0x7c19,	// (0x00046194) scroll_pane_cp24

0xda04,	// (0x0004bf7f) list_text_info_pane_t1_ParamLimits

0xda04,	// (0x0004bf7f) list_text_info_pane_t1

0xc44e,	// (0x0004a9c9) popup_fast_swap2_window_ParamLimits

0xc44e,	// (0x0004a9c9) popup_fast_swap2_window

0x7c37,	// (0x000461b2) aid_size_cell_fast2

0x1e00,	// (0x0004037b) bg_popup_window_pane_cp17

0x5a87,	// (0x00044002) heading_pane_cp2

0x2a0b,	// (0x00040f86) listscroll_fast2_pane

0x7c41,	// (0x000461bc) grid_fast2_pane

0x7c4b,	// (0x000461c6) listscroll_fast2_pane_g1

0x7c53,	// (0x000461ce) listscroll_fast2_pane_g2

0x0001,

0xfbf8,	// (0x0004e173) listscroll_fast2_pane_g

0x447b,	// (0x000429f6) scroll_pane_cp26

0x7c5d,	// (0x000461d8) cell_fast2_pane_ParamLimits

0x7c5d,	// (0x000461d8) cell_fast2_pane

0x7c72,	// (0x000461ed) cell_fast2_pane_g1

0x7c7b,	// (0x000461f6) cell_fast2_pane_g2

0x7c84,	// (0x000461ff) cell_fast2_pane_g3

0x0002,

0xfbfd,	// (0x0004e178) cell_fast2_pane_g

0x2a4d,	// (0x00040fc8) grid_highlight_pane_cp9

0x2a62,	// (0x00040fdd) main_eswt_pane_ParamLimits

0x2a62,	// (0x00040fdd) main_eswt_pane

0x7c2e,	// (0x000461a9) list_single_text_info_pane

0x7c8c,	// (0x00046207) eswt_ctrl_button_pane

0x7c8c,	// (0x00046207) eswt_ctrl_canvas_pane

0x7c94,	// (0x0004620f) eswt_ctrl_combo_pane

0x7c8c,	// (0x00046207) eswt_ctrl_default_pane

0x7c8c,	// (0x00046207) eswt_ctrl_label_pane

0x7c9c,	// (0x00046217) eswt_ctrl_wait_pane

0x7ca4,	// (0x0004621f) eswt_shell_pane

0x1e00,	// (0x0004037b) listscroll_eswt_app_pane

0x7cc4,	// (0x0004623f) popup_eswt_tasktip_window_ParamLimits

0x7cc4,	// (0x0004623f) popup_eswt_tasktip_window

0x57da,	// (0x00043d55) bg_popup_window_pane_cp18

0x7cd5,	// (0x00046250) eswt_control_pane_g1_ParamLimits

0x7cd5,	// (0x00046250) eswt_control_pane_g1

0x7ce2,	// (0x0004625d) eswt_control_pane_g2_ParamLimits

0x7ce2,	// (0x0004625d) eswt_control_pane_g2

0x7cef,	// (0x0004626a) eswt_control_pane_g3_ParamLimits

0x7cef,	// (0x0004626a) eswt_control_pane_g3

0x7cfc,	// (0x00046277) eswt_control_pane_g4_ParamLimits

0x7cfc,	// (0x00046277) eswt_control_pane_g4

0x0003,

0xfc04,	// (0x0004e17f) eswt_control_pane_g_ParamLimits

0xfc04,	// (0x0004e17f) eswt_control_pane_g

0x435c,	// (0x000428d7) bg_button_pane_ParamLimits

0x435c,	// (0x000428d7) bg_button_pane

0x2a62,	// (0x00040fdd) common_borders_pane_copy2_ParamLimits

0x2a62,	// (0x00040fdd) common_borders_pane_copy2

0x7d09,	// (0x00046284) control_button_pane_g1_ParamLimits

0x7d09,	// (0x00046284) control_button_pane_g1

0x7d15,	// (0x00046290) control_button_pane_g2_ParamLimits

0x7d15,	// (0x00046290) control_button_pane_g2

0x7d21,	// (0x0004629c) control_button_pane_g3_ParamLimits

0x7d21,	// (0x0004629c) control_button_pane_g3

0x0002,

0xfc0d,	// (0x0004e188) control_button_pane_g_ParamLimits

0xfc0d,	// (0x0004e188) control_button_pane_g

0x7d35,	// (0x000462b0) control_button_pane_t1

0x7d43,	// (0x000462be) control_button_pane_t2

0x0001,

0xfc14,	// (0x0004e18f) control_button_pane_t

0x56d6,	// (0x00043c51) bg_button_pane_g1

0x56de,	// (0x00043c59) bg_button_pane_g2

0x56e6,	// (0x00043c61) bg_button_pane_g3

0x56ee,	// (0x00043c69) bg_button_pane_g4

0x56f6,	// (0x00043c71) bg_button_pane_g5

0x56fe,	// (0x00043c79) bg_button_pane_g6

0x5706,	// (0x00043c81) bg_button_pane_g7

0x570e,	// (0x00043c89) bg_button_pane_g8

0x5716,	// (0x00043c91) bg_button_pane_g9

0x0008,

0xf87c,	// (0x0004ddf7) bg_button_pane_g

0x7543,	// (0x00045abe) common_borders_pane_ParamLimits

0x7543,	// (0x00045abe) common_borders_pane

0x7cd5,	// (0x00046250) eswt_control_pane_g1_copy1_ParamLimits

0x7cd5,	// (0x00046250) eswt_control_pane_g1_copy1

0x7ce2,	// (0x0004625d) eswt_control_pane_g2_copy1_ParamLimits

0x7ce2,	// (0x0004625d) eswt_control_pane_g2_copy1

0x7cef,	// (0x0004626a) eswt_control_pane_g3_copy1_ParamLimits

0x7cef,	// (0x0004626a) eswt_control_pane_g3_copy1

0x7cfc,	// (0x00046277) eswt_control_pane_g4_copy1_ParamLimits

0x7cfc,	// (0x00046277) eswt_control_pane_g4_copy1

0x757e,	// (0x00045af9) bg_eswt_ctrl_canvas_pane_g1

0x7543,	// (0x00045abe) common_borders_pane_cp2_ParamLimits

0x7543,	// (0x00045abe) common_borders_pane_cp2

0x7543,	// (0x00045abe) common_borders_pane_cp3_ParamLimits

0x7543,	// (0x00045abe) common_borders_pane_cp3

0x7d51,	// (0x000462cc) separator_horizontal_pane

0x7d59,	// (0x000462d4) separator_vertical_pane

0x7cd5,	// (0x00046250) eswt_control_pane_g1_copy2_ParamLimits

0x7cd5,	// (0x00046250) eswt_control_pane_g1_copy2

0x7ce2,	// (0x0004625d) eswt_control_pane_g2_copy2_ParamLimits

0x7ce2,	// (0x0004625d) eswt_control_pane_g2_copy2

0x7cef,	// (0x0004626a) eswt_control_pane_g3_copy2_ParamLimits

0x7cef,	// (0x0004626a) eswt_control_pane_g3_copy2

0x7cfc,	// (0x00046277) eswt_control_pane_g4_copy2_ParamLimits

0x7cfc,	// (0x00046277) eswt_control_pane_g4_copy2

0x1e00,	// (0x0004037b) common_borders_pane_cp4

0x7d62,	// (0x000462dd) separator_horizontal_pane_g1

0x7d6b,	// (0x000462e6) separator_horizontal_pane_g2

0x7d74,	// (0x000462ef) separator_horizontal_pane_g3

0x0002,

0xfc19,	// (0x0004e194) separator_horizontal_pane_g

0x7cd5,	// (0x00046250) eswt_control_pane_g1_copy3_ParamLimits

0x7cd5,	// (0x00046250) eswt_control_pane_g1_copy3

0x7ce2,	// (0x0004625d) eswt_control_pane_g2_copy3_ParamLimits

0x7ce2,	// (0x0004625d) eswt_control_pane_g2_copy3

0x7cef,	// (0x0004626a) eswt_control_pane_g3_copy3_ParamLimits

0x7cef,	// (0x0004626a) eswt_control_pane_g3_copy3

0x7cfc,	// (0x00046277) eswt_control_pane_g4_copy3_ParamLimits

0x7cfc,	// (0x00046277) eswt_control_pane_g4_copy3

0x1e00,	// (0x0004037b) common_borders_pane_cp5

0x7d7d,	// (0x000462f8) separator_vertical_pane_g1

0x7d86,	// (0x00046301) separator_vertical_pane_g2

0x7d8f,	// (0x0004630a) separator_vertical_pane_g3

0x0002,

0xfc20,	// (0x0004e19b) separator_vertical_pane_g

0x7cd5,	// (0x00046250) eswt_control_pane_g1_copy4_ParamLimits

0x7cd5,	// (0x00046250) eswt_control_pane_g1_copy4

0x7ce2,	// (0x0004625d) eswt_control_pane_g2_copy4_ParamLimits

0x7ce2,	// (0x0004625d) eswt_control_pane_g2_copy4

0x7cef,	// (0x0004626a) eswt_control_pane_g3_copy4_ParamLimits

0x7cef,	// (0x0004626a) eswt_control_pane_g3_copy4

0x7cfc,	// (0x00046277) eswt_control_pane_g4_copy4_ParamLimits

0x7cfc,	// (0x00046277) eswt_control_pane_g4_copy4

0xda35,	// (0x0004bfb0) eswt_ctrl_combo_button_pane

0xda3d,	// (0x0004bfb8) eswt_ctrl_input_pane

0xda45,	// (0x0004bfc0) popup_choice_list_window_cp70

0xda4d,	// (0x0004bfc8) eswt_ctrl_input_pane_t1

0x1e00,	// (0x0004037b) input_focus_pane_cp70

0x7543,	// (0x00045abe) bg_button_pane_cp70_ParamLimits

0x7543,	// (0x00045abe) bg_button_pane_cp70

0xda5b,	// (0x0004bfd6) eswt_ctrl_combo_button_pane_g1

0x7d98,	// (0x00046313) wait_bar_pane_cp70

0x57da,	// (0x00043d55) bg_popup_window_pane_cp70_ParamLimits

0x57da,	// (0x00043d55) bg_popup_window_pane_cp70

0x7da0,	// (0x0004631b) popup_eswt_tasktip_window_t1

0x7db6,	// (0x00046331) wait_bar_pane_cp71_ParamLimits

0x7db6,	// (0x00046331) wait_bar_pane_cp71

0x7dc2,	// (0x0004633d) grid_eswt_app_pane

0x49b8,	// (0x00042f33) scroll_pane_cp70

0xda63,	// (0x0004bfde) cell_eswt_app_pane_ParamLimits

0xda63,	// (0x0004bfde) cell_eswt_app_pane

0xda93,	// (0x0004c00e) cell_eswt_app_pane_g1_ParamLimits

0xda93,	// (0x0004c00e) cell_eswt_app_pane_g1

0xdac2,	// (0x0004c03d) cell_eswt_app_pane_g2_ParamLimits

0xdac2,	// (0x0004c03d) cell_eswt_app_pane_g2

0x0001,

0xfc27,	// (0x0004e1a2) cell_eswt_app_pane_g_ParamLimits

0xfc27,	// (0x0004e1a2) cell_eswt_app_pane_g

0xdaeb,	// (0x0004c066) cell_eswt_app_pane_t1_ParamLimits

0xdaeb,	// (0x0004c066) cell_eswt_app_pane_t1

0x7dcb,	// (0x00046346) grid_highlight_pane_cp70_ParamLimits

0x7dcb,	// (0x00046346) grid_highlight_pane_cp70

0x505b,	// (0x000435d6) set_content_pane_g1

0x536b,	// (0x000438e6) status_small_volume_pane

0xabd8,	// (0x00049153) status_small_volume_pane_g1

0xabe0,	// (0x0004915b) volume_small2_pane

0xabe9,	// (0x00049164) volume_small2_pane_g1

0xabf2,	// (0x0004916d) volume_small2_pane_g2

0xabfb,	// (0x00049176) volume_small2_pane_g3

0xac04,	// (0x0004917f) volume_small2_pane_g4

0xac0d,	// (0x00049188) volume_small2_pane_g5

0xac16,	// (0x00049191) volume_small2_pane_g6

0xac1f,	// (0x0004919a) volume_small2_pane_g7

0xac28,	// (0x000491a3) volume_small2_pane_g8

0xac31,	// (0x000491ac) volume_small2_pane_g9

0xac3a,	// (0x000491b5) volume_small2_pane_g10

0x0009,

0xfc2c,	// (0x0004e1a7) volume_small2_pane_g

0x781e,	// (0x00045d99) fep_vkb_top_text_pane_g1_ParamLimits

0xd976,	// (0x0004bef1) fep_vkb_top_text_pane_t1_ParamLimits

0x7a38,	// (0x00045fb3) popup_preview_fixed_window_g3_ParamLimits

0x7a38,	// (0x00045fb3) popup_preview_fixed_window_g3

0xcd23,	// (0x0004b29e) popup_toolbar_trans_pane

0xd2d9,	// (0x0004b854) aid_height_set_list_ParamLimits

0x5c8c,	// (0x00044207) aid_size_parent_ParamLimits

0x44b4,	// (0x00042a2f) list_highlight_pane_cp2_ParamLimits

0x505b,	// (0x000435d6) set_content_pane_g1_ParamLimits

0xbded,	// (0x0004a368) list_single_image_pane_ParamLimits

0xbded,	// (0x0004a368) list_single_image_pane

0xdb1d,	// (0x0004c098) aid_size_cell_image_ParamLimits

0xdb1d,	// (0x0004c098) aid_size_cell_image

0xdb2a,	// (0x0004c0a5) grid_single_image_pane_ParamLimits

0xdb2a,	// (0x0004c0a5) grid_single_image_pane

0x5766,	// (0x00043ce1) list_single_image_pane_g1_ParamLimits

0x5766,	// (0x00043ce1) list_single_image_pane_g1

0x7dd7,	// (0x00046352) list_single_image_pane_g2_ParamLimits

0x7dd7,	// (0x00046352) list_single_image_pane_g2

0x0001,

0xfc41,	// (0x0004e1bc) list_single_image_pane_g_ParamLimits

0xfc41,	// (0x0004e1bc) list_single_image_pane_g

0x618d,	// (0x00044708) list_single_image_pane_t1_ParamLimits

0x618d,	// (0x00044708) list_single_image_pane_t1

0xdb38,	// (0x0004c0b3) cell_image_list_pane_ParamLimits

0xdb38,	// (0x0004c0b3) cell_image_list_pane

0xdb4b,	// (0x0004c0c6) cell_image_list_pane_g1

0xdb54,	// (0x0004c0cf) cell_image_list_pane_g2

0x0001,

0xfc46,	// (0x0004e1c1) cell_image_list_pane_g

0x7deb,	// (0x00046366) aid_size_cell_tb_trans_pane

0x435c,	// (0x000428d7) bg_tb_trans_pane

0x7dfd,	// (0x00046378) grid_tb_trans_pane

0x56d6,	// (0x00043c51) bg_tb_trans_pane_g1

0x56de,	// (0x00043c59) bg_tb_trans_pane_g2

0x56e6,	// (0x00043c61) bg_tb_trans_pane_g3

0x56ee,	// (0x00043c69) bg_tb_trans_pane_g4

0x56f6,	// (0x00043c71) bg_tb_trans_pane_g5

0x570e,	// (0x00043c89) bg_tb_trans_pane_g6

0x5716,	// (0x00043c91) bg_tb_trans_pane_g7

0x56fe,	// (0x00043c79) bg_tb_trans_pane_g8

0x5706,	// (0x00043c81) bg_tb_trans_pane_g9

0x0008,

0xfc4b,	// (0x0004e1c6) bg_tb_trans_pane_g

0x7e11,	// (0x0004638c) cell_toolbar_trans_pane_ParamLimits

0x7e11,	// (0x0004638c) cell_toolbar_trans_pane

0x757e,	// (0x00045af9) cell_toolbar_trans_pane_g1

0xd6b8,	// (0x0004bc33) list_form2_midp_pane_t1

0xd6c6,	// (0x0004bc41) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0004e063) list_form2_midp_pane_t

0x72d1,	// (0x0004584c) scroll_pane_cp51_ParamLimits

0x7448,	// (0x000459c3) form2_midp_wait_pane_g1

0x7451,	// (0x000459cc) form2_midp_wait_pane_g2

0x745a,	// (0x000459d5) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0004e078) form2_midp_wait_pane_g

0x1e70,	// (0x000403eb) list_highlight_pane_cp21_ParamLimits

0x7482,	// (0x000459fd) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7491,	// (0x00045a0c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xbd76,	// (0x0004a2f1) list_single_2graphic_im_pane_ParamLimits

0xbd76,	// (0x0004a2f1) list_single_2graphic_im_pane

0xdb5d,	// (0x0004c0d8) list_single_2graphic_im_pane_g1_ParamLimits

0xdb5d,	// (0x0004c0d8) list_single_2graphic_im_pane_g1

0xdb6e,	// (0x0004c0e9) list_single_2graphic_im_pane_g2_ParamLimits

0xdb6e,	// (0x0004c0e9) list_single_2graphic_im_pane_g2

0xdb7a,	// (0x0004c0f5) list_single_2graphic_im_pane_g3_ParamLimits

0xdb7a,	// (0x0004c0f5) list_single_2graphic_im_pane_g3

0x0003,

0xfc5e,	// (0x0004e1d9) list_single_2graphic_im_pane_g_ParamLimits

0xfc5e,	// (0x0004e1d9) list_single_2graphic_im_pane_g

0xdb8e,	// (0x0004c109) list_single_2graphic_im_pane_t1_ParamLimits

0xdb8e,	// (0x0004c109) list_single_2graphic_im_pane_t1

0x7a44,	// (0x00045fbf) list_single_graphic_2heading_pane_fp_ParamLimits

0x7a44,	// (0x00045fbf) list_single_graphic_2heading_pane_fp

0xc0b3,	// (0x0004a62e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc0b3,	// (0x0004a62e) list_single_graphic_2heading_pane_fp_g1

0x7a59,	// (0x00045fd4) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7a59,	// (0x00045fd4) list_single_graphic_2heading_pane_fp_g2

0x4376,	// (0x000428f1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4376,	// (0x000428f1) list_single_graphic_2heading_pane_fp_g3

0x4382,	// (0x000428fd) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4382,	// (0x000428fd) list_single_graphic_2heading_pane_fp_g4

0x7a65,	// (0x00045fe0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7a65,	// (0x00045fe0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0004e100) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0004e100) list_single_graphic_2heading_pane_fp_g

0xc280,	// (0x0004a7fb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc280,	// (0x0004a7fb) list_single_graphic_2heading_pane_fp_t1

0xc0eb,	// (0x0004a666) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc0eb,	// (0x0004a666) list_single_graphic_2heading_pane_fp_t2

0xc296,	// (0x0004a811) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc296,	// (0x0004a811) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc67,	// (0x0004e1e2) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc67,	// (0x0004e1e2) list_single_graphic_2heading_pane_fp_t

0x760a,	// (0x00045b85) fep_hwr_write_pane_g5_ParamLimits

0x760a,	// (0x00045b85) fep_hwr_write_pane_g5

0x7616,	// (0x00045b91) fep_hwr_write_pane_g6_ParamLimits

0x7616,	// (0x00045b91) fep_hwr_write_pane_g6

0x7ca4,	// (0x0004621f) eswt_shell_pane_ParamLimits

0x57da,	// (0x00043d55) bg_popup_window_pane_cp18_ParamLimits

0x68a4,	// (0x00044e1f) heading_pane_cp70

0x7da0,	// (0x0004631b) popup_eswt_tasktip_window_t1_ParamLimits

0xcdd0,	// (0x0004b34b) aid_touch_tab_arrow_left

0xcddc,	// (0x0004b357) aid_touch_tab_arrow_right

0xb551,	// (0x00049acc) title_pane_g3_ParamLimits

0xb551,	// (0x00049acc) title_pane_g3

0x431b,	// (0x00042896) set_value_pane_g1

0xcd23,	// (0x0004b29e) popup_toolbar_trans_pane_ParamLimits

0x7deb,	// (0x00046366) aid_size_cell_tb_trans_pane_ParamLimits

0x435c,	// (0x000428d7) bg_tb_trans_pane_ParamLimits

0x7dfd,	// (0x00046378) grid_tb_trans_pane_ParamLimits

0x1fa3,	// (0x0004051e) cont_note_pane_ParamLimits

0x1fa3,	// (0x0004051e) cont_note_pane

0x2a62,	// (0x00040fdd) cont_snote2_single_text_pane_ParamLimits

0x2a62,	// (0x00040fdd) cont_snote2_single_text_pane

0x2a62,	// (0x00040fdd) cont_snote2_single_graphic_pane_ParamLimits

0x2a62,	// (0x00040fdd) cont_snote2_single_graphic_pane

0x5ccc,	// (0x00044247) cont_note_wait_pane_ParamLimits

0x5ccc,	// (0x00044247) cont_note_wait_pane

0x5ccc,	// (0x00044247) cont_note_image_pane_ParamLimits

0x5ccc,	// (0x00044247) cont_note_image_pane

0x7e43,	// (0x000463be) popup_note2_window_g1_ParamLimits

0x7e43,	// (0x000463be) popup_note2_window_g1

0x7e74,	// (0x000463ef) popup_note2_window_t1_ParamLimits

0x7e74,	// (0x000463ef) popup_note2_window_t1

0x7eb9,	// (0x00046434) popup_note2_window_t2_ParamLimits

0x7eb9,	// (0x00046434) popup_note2_window_t2

0x7efe,	// (0x00046479) popup_note2_window_t3_ParamLimits

0x7efe,	// (0x00046479) popup_note2_window_t3

0x7f43,	// (0x000464be) popup_note2_window_t4_ParamLimits

0x7f43,	// (0x000464be) popup_note2_window_t4

0x2027,	// (0x000405a2) popup_note2_window_t5_ParamLimits

0x2027,	// (0x000405a2) popup_note2_window_t5

0x0004,

0xfc73,	// (0x0004e1ee) popup_note2_window_t_ParamLimits

0xfc73,	// (0x0004e1ee) popup_note2_window_t

0x7f72,	// (0x000464ed) popup_note2_image_window_g1_ParamLimits

0x7f72,	// (0x000464ed) popup_note2_image_window_g1

0x7f7e,	// (0x000464f9) popup_note2_image_window_g2_ParamLimits

0x7f7e,	// (0x000464f9) popup_note2_image_window_g2

0x0001,

0xfc7e,	// (0x0004e1f9) popup_note2_image_window_g_ParamLimits

0xfc7e,	// (0x0004e1f9) popup_note2_image_window_g

0x7f90,	// (0x0004650b) popup_note2_image_window_t1_ParamLimits

0x7f90,	// (0x0004650b) popup_note2_image_window_t1

0x7fa8,	// (0x00046523) popup_note2_image_window_t2_ParamLimits

0x7fa8,	// (0x00046523) popup_note2_image_window_t2

0x7fc0,	// (0x0004653b) popup_note2_image_window_t3_ParamLimits

0x7fc0,	// (0x0004653b) popup_note2_image_window_t3

0x0002,

0xfc83,	// (0x0004e1fe) popup_note2_image_window_t_ParamLimits

0xfc83,	// (0x0004e1fe) popup_note2_image_window_t

0x5cda,	// (0x00044255) popup_note2_wait_window_g1_ParamLimits

0x5cda,	// (0x00044255) popup_note2_wait_window_g1

0x7fdc,	// (0x00046557) popup_note2_wait_window_g2_ParamLimits

0x7fdc,	// (0x00046557) popup_note2_wait_window_g2

0x5cf2,	// (0x0004426d) popup_note2_wait_window_g3_ParamLimits

0x5cf2,	// (0x0004426d) popup_note2_wait_window_g3

0x0002,

0xfc8a,	// (0x0004e205) popup_note2_wait_window_g_ParamLimits

0xfc8a,	// (0x0004e205) popup_note2_wait_window_g

0x7fe8,	// (0x00046563) popup_note2_wait_window_t1_ParamLimits

0x7fe8,	// (0x00046563) popup_note2_wait_window_t1

0x8006,	// (0x00046581) popup_note2_wait_window_t2_ParamLimits

0x8006,	// (0x00046581) popup_note2_wait_window_t2

0x8024,	// (0x0004659f) popup_note2_wait_window_t3_ParamLimits

0x8024,	// (0x0004659f) popup_note2_wait_window_t3

0x8036,	// (0x000465b1) popup_note2_wait_window_t4_ParamLimits

0x8036,	// (0x000465b1) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x0004e20c) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x0004e20c) popup_note2_wait_window_t

0x8048,	// (0x000465c3) wait_bar2_pane_ParamLimits

0x8048,	// (0x000465c3) wait_bar2_pane

0x8060,	// (0x000465db) popup_snote2_single_text_window_g1_ParamLimits

0x8060,	// (0x000465db) popup_snote2_single_text_window_g1

0x8088,	// (0x00046603) popup_snote2_single_text_window_t1_ParamLimits

0x8088,	// (0x00046603) popup_snote2_single_text_window_t1

0x80d4,	// (0x0004664f) popup_snote2_single_text_window_t2_ParamLimits

0x80d4,	// (0x0004664f) popup_snote2_single_text_window_t2

0x8120,	// (0x0004669b) popup_snote2_single_text_window_t3_ParamLimits

0x8120,	// (0x0004669b) popup_snote2_single_text_window_t3

0x8161,	// (0x000466dc) popup_snote2_single_text_window_t4_ParamLimits

0x8161,	// (0x000466dc) popup_snote2_single_text_window_t4

0x8197,	// (0x00046712) popup_snote2_single_text_window_t5_ParamLimits

0x8197,	// (0x00046712) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x0004e215) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x0004e215) popup_snote2_single_text_window_t

0x81c2,	// (0x0004673d) popup_snote2_single_graphic_window_g1_ParamLimits

0x81c2,	// (0x0004673d) popup_snote2_single_graphic_window_g1

0x81ea,	// (0x00046765) popup_snote2_single_graphic_window_g2_ParamLimits

0x81ea,	// (0x00046765) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x0004e220) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x0004e220) popup_snote2_single_graphic_window_g

0x8212,	// (0x0004678d) popup_snote2_single_graphic_window_t1_ParamLimits

0x8212,	// (0x0004678d) popup_snote2_single_graphic_window_t1

0x825e,	// (0x000467d9) popup_snote2_single_graphic_window_t2_ParamLimits

0x825e,	// (0x000467d9) popup_snote2_single_graphic_window_t2

0x8120,	// (0x0004669b) popup_snote2_single_graphic_window_t3_ParamLimits

0x8120,	// (0x0004669b) popup_snote2_single_graphic_window_t3

0x8161,	// (0x000466dc) popup_snote2_single_graphic_window_t4_ParamLimits

0x8161,	// (0x000466dc) popup_snote2_single_graphic_window_t4

0x8197,	// (0x00046712) popup_snote2_single_graphic_window_t5_ParamLimits

0x8197,	// (0x00046712) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x0004e225) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x0004e225) popup_snote2_single_graphic_window_t

0x7269,	// (0x000457e4) clock_nsta_pane_cp2_t1

0x7269,	// (0x000457e4) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0004e039) clock_nsta_pane_cp2_t

0x9c4d,	// (0x000481c8) form_field_data_wide_pane_g1_ParamLimits

0x4376,	// (0x000428f1) form_field_data_wide_pane_g2_ParamLimits

0x4376,	// (0x000428f1) form_field_data_wide_pane_g2

0x4382,	// (0x000428fd) form_field_data_wide_pane_g3_ParamLimits

0x4382,	// (0x000428fd) form_field_data_wide_pane_g3

0x0002,

0xf698,	// (0x0004dc13) form_field_data_wide_pane_g_ParamLimits

0xf698,	// (0x0004dc13) form_field_data_wide_pane_g

0xd5a5,	// (0x0004bb20) grid_touch_3_pane_ParamLimits

0xd5a5,	// (0x0004bb20) grid_touch_3_pane

0xdbbf,	// (0x0004c13a) cell_touch_3_pane_ParamLimits

0xdbbf,	// (0x0004c13a) cell_touch_3_pane

0x757e,	// (0x00045af9) cell_touch_3_pane_g1

0x757e,	// (0x00045af9) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0004e0be) cell_touch_3_pane_g

0x2059,	// (0x000405d4) cont_query_data_pane

0x2061,	// (0x000405dc) cont_query_data_pane_cp1

0x82aa,	// (0x00046825) button_value_adjust_pane_cp7

0x82b2,	// (0x0004682d) query_popup_pane_cp3

0x4bde,	// (0x00043159) bg_popup_sub_pane_cp22_ParamLimits

0xa013,	// (0x0004858e) navi_navi_volume_pane_cp2

0xa02e,	// (0x000485a9) popup_side_volume_key_window_g2

0xa03d,	// (0x000485b8) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0004dca9) popup_side_volume_key_window_g

0xa05a,	// (0x000485d5) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0004dcb0) popup_side_volume_key_window_t

0x4f25,	// (0x000434a0) popup_side_volume_key_window_ParamLimits

0x985a,	// (0x00047dd5) list_double_graphic_pane_g4_ParamLimits

0x985a,	// (0x00047dd5) list_double_graphic_pane_g4

0xbdb3,	// (0x0004a32e) list_single_2heading_msg_pane_ParamLimits

0xbdb3,	// (0x0004a32e) list_single_2heading_msg_pane

0xc2b6,	// (0x0004a831) list_single_2heading_msg_pane_g1_ParamLimits

0xc2b6,	// (0x0004a831) list_single_2heading_msg_pane_g1

0x4d33,	// (0x000432ae) list_single_2heading_msg_pane_g2_ParamLimits

0x4d33,	// (0x000432ae) list_single_2heading_msg_pane_g2

0xc2c2,	// (0x0004a83d) list_single_2heading_msg_pane_g3_ParamLimits

0xc2c2,	// (0x0004a83d) list_single_2heading_msg_pane_g3

0xc2ce,	// (0x0004a849) list_single_2heading_msg_pane_g4_ParamLimits

0xc2ce,	// (0x0004a849) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x0004e230) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x0004e230) list_single_2heading_msg_pane_g

0xc2e6,	// (0x0004a861) list_single_2heading_msg_pane_t1_ParamLimits

0xc2e6,	// (0x0004a861) list_single_2heading_msg_pane_t1

0xc30e,	// (0x0004a889) list_single_2heading_msg_pane_t2_ParamLimits

0xc30e,	// (0x0004a889) list_single_2heading_msg_pane_t2

0xc342,	// (0x0004a8bd) list_single_2heading_msg_pane_t3_ParamLimits

0xc342,	// (0x0004a8bd) list_single_2heading_msg_pane_t3

0xc37b,	// (0x0004a8f6) list_single_2heading_msg_pane_t4_ParamLimits

0xc37b,	// (0x0004a8f6) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x0004e239) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x0004e239) list_single_2heading_msg_pane_t

0x1e1e,	// (0x00040399) title_pane_g4_ParamLimits

0x1e1e,	// (0x00040399) title_pane_g4

0x9e21,	// (0x0004839c) title_pane_stacon_g3_ParamLimits

0x9e21,	// (0x0004839c) title_pane_stacon_g3

0x7e37,	// (0x000463b2) list_single_2graphic_im_pane_g4_ParamLimits

0x7e37,	// (0x000463b2) list_single_2graphic_im_pane_g4

0x6687,	// (0x00044c02) popup_side_volume_key_window_cp

0x6baa,	// (0x00045125) main_idle_act2_pane_t1

0xa3dc,	// (0x00048957) toolbar_button_pane_g10

0xb818,	// (0x00049d93) popup_toolbar_window_cp1

0x725a,	// (0x000457d5) clock_nsta_pane_cp_t1

0x725a,	// (0x000457d5) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0004e034) clock_nsta_pane_cp_t

0xa013,	// (0x0004858e) navi_navi_volume_pane_cp2_ParamLimits

0xa022,	// (0x0004859d) popup_side_volume_key_window_g1_ParamLimits

0xa02e,	// (0x000485a9) popup_side_volume_key_window_g2_ParamLimits

0xa03d,	// (0x000485b8) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0004dca9) popup_side_volume_key_window_g_ParamLimits

0xa844,	// (0x00048dbf) fep_hwr_aid_pane

0xa8eb,	// (0x00048e66) bg_fep_hwr_top_pane_g4_ParamLimits

0x75ec,	// (0x00045b67) fep_hwr_top_pane_g1_ParamLimits

0x75da,	// (0x00045b55) fep_hwr_top_pane_g2_ParamLimits

0xa90b,	// (0x00048e86) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0004e089) fep_hwr_top_pane_g_ParamLimits

0xa920,	// (0x00048e9b) fep_hwr_top_text_pane_ParamLimits

0x6453,	// (0x000449ce) aid_touch_tab_arrow_arrow_2

0x644a,	// (0x000449c5) aid_touch_tab_arrow_left_2

0xa858,	// (0x00048dd3) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xa88f,	// (0x00048e0a) fep_hwr_prediction_pane

0x76d9,	// (0x00045c54) fep_vkb_prediction_pane

0xd953,	// (0x0004bece) fep_vkb_side_pane_g3_ParamLimits

0xd953,	// (0x0004bece) fep_vkb_side_pane_g3

0xaa9b,	// (0x00049016) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xab07,	// (0x00049082) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xab14,	// (0x0004908f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x0004e138) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xac43,	// (0x000491be) fep_hwr_prediction_pane_g1

0xac4d,	// (0x000491c8) fep_hwr_prediction_pane_g2

0xac55,	// (0x000491d0) fep_hwr_prediction_pane_g3

0xac5d,	// (0x000491d8) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0004e242) fep_hwr_prediction_pane_g

0x82c3,	// (0x0004683e) fep_vkb_prediction_pane_g1

0x82cd,	// (0x00046848) fep_vkb_prediction_pane_g2

0x82d5,	// (0x00046850) fep_vkb_prediction_pane_g3

0x82dd,	// (0x00046858) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0004e24b) fep_vkb_prediction_pane_g

0xa6c4,	// (0x00048c3f) slider_set_pane_g3

0xa6d8,	// (0x00048c53) slider_set_pane_g4

0xa6f0,	// (0x00048c6b) slider_set_pane_g5

0xa6c4,	// (0x00048c3f) slider_set_pane_g6

0xa706,	// (0x00048c81) slider_set_pane_g7

0x692f,	// (0x00044eaa) slider_form_pane_g3

0x6938,	// (0x00044eb3) slider_form_pane_g4

0x6940,	// (0x00044ebb) slider_form_pane_g5

0x692f,	// (0x00044eaa) slider_form_pane_g6

0xd434,	// (0x0004b9af) slider_form_pane_g7

0x6dfc,	// (0x00045377) slider_set_pane_vc_g3

0x6e05,	// (0x00045380) slider_set_pane_vc_g4

0x6e0e,	// (0x00045389) slider_set_pane_vc_g5

0x6dfc,	// (0x00045377) slider_set_pane_vc_g6

0x6e17,	// (0x00045392) slider_set_pane_vc_g7

0x6dfc,	// (0x00045377) slider_form_pane_vc_g1

0x6e05,	// (0x00045380) slider_form_pane_vc_g2

0x6e0e,	// (0x00045389) slider_form_pane_vc_g3

0x6dfc,	// (0x00045377) slider_form_pane_vc_g4

0x6fd0,	// (0x0004554b) slider_form_pane_vc_g5

0x0004,

0xfa92,	// (0x0004e00d) slider_form_pane_vc_g

0x1e00,	// (0x0004037b) main_idle_act3_pane

0x82e5,	// (0x00046860) ai3_links_pane

0xdc01,	// (0x0004c17c) popup_ai3_data_window_ParamLimits

0xdc01,	// (0x0004c17c) popup_ai3_data_window

0x1e00,	// (0x0004037b) grid_ai3_links_pane

0xdc1b,	// (0x0004c196) cell_ai3_links_pane_ParamLimits

0xdc1b,	// (0x0004c196) cell_ai3_links_pane

0x82ee,	// (0x00046869) bg_popup_sub_pane_cp11

0x82fb,	// (0x00046876) cell_ai3_links_pane_g1

0x1e00,	// (0x0004037b) bg_popup_sub_pane_cp12

0x8320,	// (0x0004689b) heading_ai3_data_pane

0x8328,	// (0x000468a3) list_ai3_gene_pane

0x8334,	// (0x000468af) popup_ai3_data_window_g1

0x833c,	// (0x000468b7) heading_ai3_data_pane_g1

0x8344,	// (0x000468bf) heading_ai3_data_pane_t1

0x8352,	// (0x000468cd) list_double_ai3_gene_pane_ParamLimits

0x8352,	// (0x000468cd) list_double_ai3_gene_pane

0x835f,	// (0x000468da) list_single_ai3_gene_pane_ParamLimits

0x835f,	// (0x000468da) list_single_ai3_gene_pane

0x7543,	// (0x00045abe) list_highlight_pane_cp7_ParamLimits

0x7543,	// (0x00045abe) list_highlight_pane_cp7

0x836c,	// (0x000468e7) list_single_a13_gene_pane_t1_ParamLimits

0x836c,	// (0x000468e7) list_single_a13_gene_pane_t1

0x8383,	// (0x000468fe) list_single_ai3_gene_pane_g1

0x838c,	// (0x00046907) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x0004e254) list_single_ai3_gene_pane_g

0x8394,	// (0x0004690f) list_double_ai3_gene_pane_g1_ParamLimits

0x8394,	// (0x0004690f) list_double_ai3_gene_pane_g1

0x83a0,	// (0x0004691b) list_double_ai3_gene_pane_t1_ParamLimits

0x83a0,	// (0x0004691b) list_double_ai3_gene_pane_t1

0x83bc,	// (0x00046937) list_double_ai3_gene_pane_t2_ParamLimits

0x83bc,	// (0x00046937) list_double_ai3_gene_pane_t2

0x83d2,	// (0x0004694d) list_double_ai3_gene_pane_t3_ParamLimits

0x83d2,	// (0x0004694d) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x0004e259) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x0004e259) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc2ac,	// (0x0004a827) aid_size_min_col_2

0xdbed,	// (0x0004c168) aid_size_min_msg_ParamLimits

0xdbed,	// (0x0004c168) aid_size_min_msg

0xd967,	// (0x0004bee2) fep_vkb_top_text_pane_g2_ParamLimits

0xd967,	// (0x0004bee2) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0004e0b9) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0004e0b9) fep_vkb_top_text_pane_g

0x1e00,	// (0x0004037b) main_hc_apps_shell_pane

0x83ef,	// (0x0004696a) grid_hc_apps_pane_ParamLimits

0x83ef,	// (0x0004696a) grid_hc_apps_pane

0x83fe,	// (0x00046979) list_hc_apps_pane

0x8406,	// (0x00046981) scroll_pane_cp37_ParamLimits

0x8406,	// (0x00046981) scroll_pane_cp37

0xdc33,	// (0x0004c1ae) cell_hc_apps_pane_ParamLimits

0xdc33,	// (0x0004c1ae) cell_hc_apps_pane

0xdce1,	// (0x0004c25c) cell_hc_apps_pane_g1_ParamLimits

0xdce1,	// (0x0004c25c) cell_hc_apps_pane_g1

0x8412,	// (0x0004698d) cell_hc_apps_pane_g2_ParamLimits

0x8412,	// (0x0004698d) cell_hc_apps_pane_g2

0x842e,	// (0x000469a9) cell_hc_apps_pane_g3_ParamLimits

0x842e,	// (0x000469a9) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x0004e260) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x0004e260) cell_hc_apps_pane_g

0xdd12,	// (0x0004c28d) cell_hc_apps_pane_t1_ParamLimits

0xdd12,	// (0x0004c28d) cell_hc_apps_pane_t1

0x1fa3,	// (0x0004051e) grid_highlight_pane_cp10_ParamLimits

0x1fa3,	// (0x0004051e) grid_highlight_pane_cp10

0xdd52,	// (0x0004c2cd) list_single_hc_apps_pane_ParamLimits

0xdd52,	// (0x0004c2cd) list_single_hc_apps_pane

0xddae,	// (0x0004c329) list_single_hc_apps_pane_g1

0xc3a0,	// (0x0004a91b) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x0004e267) list_single_hc_apps_pane_g

0xc3b9,	// (0x0004a934) list_single_hc_apps_pane_g2_copy1

0xc3d5,	// (0x0004a950) list_single_hc_apps_pane_t1

0x1e70,	// (0x000403eb) bg_set_opt_pane_cp_ParamLimits

0x9624,	// (0x00047b9f) setting_slider_pane_t1_ParamLimits

0x963d,	// (0x00047bb8) setting_slider_pane_t2_ParamLimits

0x9657,	// (0x00047bd2) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0004daf1) setting_slider_pane_t_ParamLimits

0x966f,	// (0x00047bea) slider_set_pane_ParamLimits

0xa2c4,	// (0x0004883f) control_pane_g5_ParamLimits

0xa2c4,	// (0x0004883f) control_pane_g5

0x68eb,	// (0x00044e66) slider_set_pane_g1_ParamLimits

0xa6b8,	// (0x00048c33) slider_set_pane_g2_ParamLimits

0xa6c4,	// (0x00048c3f) slider_set_pane_g3_ParamLimits

0xa6d8,	// (0x00048c53) slider_set_pane_g4_ParamLimits

0xa6f0,	// (0x00048c6b) slider_set_pane_g5_ParamLimits

0xa6c4,	// (0x00048c3f) slider_set_pane_g6_ParamLimits

0xa706,	// (0x00048c81) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x0004def5) slider_set_pane_g_ParamLimits

0x5006,	// (0x00043581) navi_icon_text_pane_ParamLimits

0xcda6,	// (0x0004b321) aid_fill_nsta_2_ParamLimits

0xcdd0,	// (0x0004b34b) aid_touch_tab_arrow_left_ParamLimits

0xcddc,	// (0x0004b357) aid_touch_tab_arrow_right_ParamLimits

0xce48,	// (0x0004b3c3) clock_nsta_pane_ParamLimits

0x642c,	// (0x000449a7) navi_icon_pane_g1_ParamLimits

0x6438,	// (0x000449b3) navi_text_pane_t1_ParamLimits

0x72ab,	// (0x00045826) navi_icon_text_pane_g1_ParamLimits

0x72b7,	// (0x00045832) navi_icon_text_pane_t1_ParamLimits

0xddae,	// (0x0004c329) list_single_hc_apps_pane_g1_ParamLimits

0xc3a0,	// (0x0004a91b) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x0004e267) list_single_hc_apps_pane_g_ParamLimits

0xc3b9,	// (0x0004a934) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc3d5,	// (0x0004a950) list_single_hc_apps_pane_t1_ParamLimits

0x9538,	// (0x00047ab3) popup_toolbar2_fixed_window_ParamLimits

0x9538,	// (0x00047ab3) popup_toolbar2_fixed_window

0xcd19,	// (0x0004b294) popup_toolbar2_float_window

0x1e00,	// (0x0004037b) bg_popup_sub_pane_cp27

0x8450,	// (0x000469cb) grid_toolbar2_float_pane

0x1e00,	// (0x0004037b) bg_popup_sub_pane_cp26

0x8450,	// (0x000469cb) grid_toolbar2_fixed_pane

0xddc7,	// (0x0004c342) cell_toolbar2_fixed_pane_ParamLimits

0xddc7,	// (0x0004c342) cell_toolbar2_fixed_pane

0xddd7,	// (0x0004c352) cell_toolbar2_fixed_pane_g1

0x8458,	// (0x000469d3) toolbar2_fixed_button_pane

0x56d6,	// (0x00043c51) toolbar2_fixed_button_pane_g1

0x56de,	// (0x00043c59) toolbar2_fixed_button_pane_g2

0x56e6,	// (0x00043c61) toolbar2_fixed_button_pane_g3

0x56ee,	// (0x00043c69) toolbar2_fixed_button_pane_g4

0x56f6,	// (0x00043c71) toolbar2_fixed_button_pane_g5

0x56fe,	// (0x00043c79) toolbar2_fixed_button_pane_g6

0x5706,	// (0x00043c81) toolbar2_fixed_button_pane_g7

0x570e,	// (0x00043c89) toolbar2_fixed_button_pane_g8

0x5716,	// (0x00043c91) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x0004ddf7) toolbar2_fixed_button_pane_g

0x8460,	// (0x000469db) cell_toolbar2_float_pane_ParamLimits

0x8460,	// (0x000469db) cell_toolbar2_float_pane

0x8471,	// (0x000469ec) cell_toolbar2_float_pane_g1

0x8458,	// (0x000469d3) toolbar2_fixed_button_pane_cp

0xd841,	// (0x0004bdbc) fep_vkb_accented_list_pane_ParamLimits

0xd841,	// (0x0004bdbc) fep_vkb_accented_list_pane

0xaa7b,	// (0x00048ff6) bg_popup_fep_shadow_pane_g9

0x517a,	// (0x000436f5) bg_popup_fep_shadow_pane_cp3

0x4462,	// (0x000429dd) list_accented_list_pane

0x847a,	// (0x000469f5) list_single_accented_list_pane_ParamLimits

0x847a,	// (0x000469f5) list_single_accented_list_pane

0x517a,	// (0x000436f5) list_highlight_pane_cp10

0x848b,	// (0x00046a06) list_single_accented_list_pane_t1

0xcc71,	// (0x0004b1ec) popup_slider_window_ParamLimits

0xcc71,	// (0x0004b1ec) popup_slider_window

0x82ba,	// (0x00046835) aid_indentation_list_msg

0xde8c,	// (0x0004c407) bg_popup_window_pane_cp19

0x84f7,	// (0x00046a72) popup_slider_window_g1

0x8513,	// (0x00046a8e) popup_slider_window_g2

0x852f,	// (0x00046aaa) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x0004e26c) popup_slider_window_g

0x854b,	// (0x00046ac6) popup_slider_window_t1

0x8591,	// (0x00046b0c) small_volume_slider_vertical_pane

0x757e,	// (0x00045af9) small_volume_slider_vertical_pane_g1

0x757e,	// (0x00045af9) small_volume_slider_vertical_pane_g2

0x85ad,	// (0x00046b28) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x0004e27e) small_volume_slider_vertical_pane_g

0x92f0,	// (0x0004786b) area_side_right_pane_ParamLimits

0x92f0,	// (0x0004786b) area_side_right_pane

0xac65,	// (0x000491e0) aid_size_side_button_ParamLimits

0xac65,	// (0x000491e0) aid_size_side_button

0xac79,	// (0x000491f4) grid_sctrl_middle_pane_ParamLimits

0xac79,	// (0x000491f4) grid_sctrl_middle_pane

0xac99,	// (0x00049214) sctrl_sk_bottom_pane

0xacaa,	// (0x00049225) sctrl_sk_top_pane

0xacbc,	// (0x00049237) aid_touch_sctrl_top

0xacc9,	// (0x00049244) bg_sctrl_sk_pane_ParamLimits

0xacc9,	// (0x00049244) bg_sctrl_sk_pane

0xacd7,	// (0x00049252) sctrl_sk_top_pane_g1

0xace4,	// (0x0004925f) sctrl_sk_top_pane_t1

0xacbc,	// (0x00049237) aid_touch_sctrl_bottom

0xacc9,	// (0x00049244) bg_sctrl_sk_pane_cp_ParamLimits

0xacc9,	// (0x00049244) bg_sctrl_sk_pane_cp

0xacff,	// (0x0004927a) sctrl_sk_bottom_pane_g1

0xace4,	// (0x0004925f) sctrl_sk_bottom_pane_t1

0xad08,	// (0x00049283) cell_sctrl_middle_pane_ParamLimits

0xad08,	// (0x00049283) cell_sctrl_middle_pane

0xad23,	// (0x0004929e) aid_touch_sctrl_middle_ParamLimits

0xad23,	// (0x0004929e) aid_touch_sctrl_middle

0xad35,	// (0x000492b0) bg_sctrl_middle_pane_ParamLimits

0xad35,	// (0x000492b0) bg_sctrl_middle_pane

0xaa9b,	// (0x00049016) cell_sctrl_middle_pane_g1_ParamLimits

0xaa9b,	// (0x00049016) cell_sctrl_middle_pane_g1

0xad43,	// (0x000492be) cell_sctrl_middle_pane_g2_ParamLimits

0xad43,	// (0x000492be) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x0004e28a) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x0004e28a) cell_sctrl_middle_pane_g

0x56d6,	// (0x00043c51) bg_sctrl_middle_pane_g1

0x56e6,	// (0x00043c61) bg_sctrl_middle_pane_g2

0x56de,	// (0x00043c59) bg_sctrl_middle_pane_g3

0x56f6,	// (0x00043c71) bg_sctrl_middle_pane_g4

0x56ee,	// (0x00043c69) bg_sctrl_middle_pane_g5

0x56fe,	// (0x00043c79) bg_sctrl_middle_pane_g6

0x5706,	// (0x00043c81) bg_sctrl_middle_pane_g7

0x5716,	// (0x00043c91) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x0004e28f) bg_sctrl_middle_pane_g

0x570e,	// (0x00043c89) bg_sctrl_middle_pane_g8_copy1

0x56d6,	// (0x00043c51) bg_sctrl_sk_pane_g1

0x56de,	// (0x00043c59) bg_sctrl_sk_pane_g2

0x56e6,	// (0x00043c61) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x0004ddf7) bg_sctrl_sk_pane_g

0x2c20,	// (0x0004119b) aid_size_touch_scroll_bar

0x56ee,	// (0x00043c69) bg_sctrl_sk_pane_g4

0x56f6,	// (0x00043c71) bg_sctrl_sk_pane_g5

0x56fe,	// (0x00043c79) bg_sctrl_sk_pane_g6

0x5706,	// (0x00043c81) bg_sctrl_sk_pane_g7

0x570e,	// (0x00043c89) bg_sctrl_sk_pane_g8

0x5716,	// (0x00043c91) bg_sctrl_sk_pane_g9

0x540c,	// (0x00043987) popup_fep_china_hwr2_fs_candidate_window

0xc4ac,	// (0x0004aa27) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc4ac,	// (0x0004aa27) popup_fep_china_hwr2_fs_control_window

0xaa9b,	// (0x00049016) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x0004e285) sctrl_sk_top_pane_g

0xdf06,	// (0x0004c481) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdf06,	// (0x0004c481) aid_fep_china_hwr2_fs_cell

0xdf18,	// (0x0004c493) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdf18,	// (0x0004c493) bg_popup_fep_shadow_pane_cp4

0xdf2f,	// (0x0004c4aa) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdf2f,	// (0x0004c4aa) bg_popup_fep_shadow_pane_cp5

0xdf41,	// (0x0004c4bc) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdf41,	// (0x0004c4bc) popup_fep_china_hwr2_fs_control_bar_grid

0xdf51,	// (0x0004c4cc) popup_fep_china_hwr2_fs_control_funtion_grid

0x85c4,	// (0x00046b3f) aid_fep_china_hwr2_fs_candi_cell

0x1e00,	// (0x0004037b) bg_popup_fep_shadow_pane_cp6

0x85ce,	// (0x00046b49) popup_fep_china_hwr2_fs_candidate_grid

0xdf59,	// (0x0004c4d4) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdf59,	// (0x0004c4d4) cell_fep_china_hwr2_fs_funtion_grid

0x757e,	// (0x00045af9) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x85b6,	// (0x00046b31) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x85b6,	// (0x00046b31) cell_fep_china_hwr2_fs_funtion_grid_g1

0x85d8,	// (0x00046b53) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x85d8,	// (0x00046b53) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x0004e2a0) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x0004e2a0) cell_fep_china_hwr2_fs_funtion_grid_g

0xdf71,	// (0x0004c4ec) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdf71,	// (0x0004c4ec) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdf86,	// (0x0004c501) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdf86,	// (0x0004c501) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x0004e2a5) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x0004e2a5) cell_fep_china_hwr2_fs_funtion_grid_t

0x85ee,	// (0x00046b69) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x85f6,	// (0x00046b71) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x85fe,	// (0x00046b79) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x0004e2aa) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8606,	// (0x00046b81) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8606,	// (0x00046b81) cell_fep_china_hwr2_fs_candidate_grid

0x861f,	// (0x00046b9a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8627,	// (0x00046ba2) popup_fep_china_hwr2_fs_candidate_grid_g21

0x757e,	// (0x00045af9) cell_fep_china_hwr2_fs_candidate_grid_g1

0x757e,	// (0x00045af9) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0004e0be) cell_fep_china_hwr2_fs_candidate_grid_g

0x862f,	// (0x00046baa) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5523,	// (0x00043a9e) clock_nsta_pane_cp_24_ParamLimits

0x5523,	// (0x00043a9e) clock_nsta_pane_cp_24

0x558b,	// (0x00043b06) indicator_nsta_pane_cp_24_ParamLimits

0x558b,	// (0x00043b06) indicator_nsta_pane_cp_24

0x6336,	// (0x000448b1) heading_pane_g1

0x0001,

0xf8e1,	// (0x0004de5c) heading_pane_g

0x6a37,	// (0x00044fb2) grid_sct_catagory_button_pane

0x5c9e,	// (0x00044219) scroll_pane_cp5_ParamLimits

0x72dd,	// (0x00045858) button_value_adjust_pane_cp5_ParamLimits

0x72dd,	// (0x00045858) button_value_adjust_pane_cp5

0x739b,	// (0x00045916) form2_midp_time_pane_ParamLimits

0x863d,	// (0x00046bb8) cell_sct_catagory_button_pane_ParamLimits

0x863d,	// (0x00046bb8) cell_sct_catagory_button_pane

0x7543,	// (0x00045abe) bg_button_pane_cp01_ParamLimits

0x7543,	// (0x00045abe) bg_button_pane_cp01

0x757e,	// (0x00045af9) cell_sct_catagory_button_pane_g1

0xcca8,	// (0x0004b223) popup_tb_extension_window

0xdfa2,	// (0x0004c51d) aid_size_cell_ext_ParamLimits

0xdfa2,	// (0x0004c51d) aid_size_cell_ext

0x1fa3,	// (0x0004051e) bg_tb_trans_pane_cp1_ParamLimits

0x1fa3,	// (0x0004051e) bg_tb_trans_pane_cp1

0xdfc2,	// (0x0004c53d) grid_tb_ext_pane_ParamLimits

0xdfc2,	// (0x0004c53d) grid_tb_ext_pane

0xdff2,	// (0x0004c56d) cell_tb_ext_pane_ParamLimits

0xdff2,	// (0x0004c56d) cell_tb_ext_pane

0xe009,	// (0x0004c584) cell_tb_ext_pane_g1_ParamLimits

0xe009,	// (0x0004c584) cell_tb_ext_pane_g1

0x864f,	// (0x00046bca) cell_tb_ext_pane_t1

0x1fa3,	// (0x0004051e) list_highlight_pane_cp11_ParamLimits

0x1fa3,	// (0x0004051e) list_highlight_pane_cp11

0x9557,	// (0x00047ad2) popup_uni_indicator_window_ParamLimits

0x9557,	// (0x00047ad2) popup_uni_indicator_window

0x435c,	// (0x000428d7) bg_popup_sub_pane_cp14

0x866a,	// (0x00046be5) list_uniindi_pane

0x8676,	// (0x00046bf1) uniindi_top_pane

0x1fa3,	// (0x0004051e) bg_uniindi_top_pane

0x8695,	// (0x00046c10) uniindi_top_pane_g1

0x86ab,	// (0x00046c26) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x0004e2b1) uniindi_top_pane_g

0x86d5,	// (0x00046c50) uniindi_top_pane_t1

0x86ff,	// (0x00046c7a) list_single_uniindi_pane_ParamLimits

0x86ff,	// (0x00046c7a) list_single_uniindi_pane

0x757e,	// (0x00045af9) bg_uniindi_top_pane_g1

0x8712,	// (0x00046c8d) list_single_uniindi_pane_g1

0x8725,	// (0x00046ca0) list_single_uniindi_pane_t1

0x93cd,	// (0x00047948) control_bg_pane

0x874a,	// (0x00046cc5) bg_sctrl_sk_pane_cp1

0x8753,	// (0x00046cce) bg_sctrl_sk_pane_cp2

0x875c,	// (0x00046cd7) control_bg_pane_g1

0x8765,	// (0x00046ce0) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x0004e2ba) control_bg_pane_g

0x719c,	// (0x00045717) cell_indicator_nsta_pane_g1_ParamLimits

0xd5e9,	// (0x0004bb64) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0004e022) cell_indicator_nsta_pane_g_ParamLimits

0xc089,	// (0x0004a604) form2_midp_time_pane_t1_ParamLimits

0x2a62,	// (0x00040fdd) main_idle_act4_pane_ParamLimits

0x2a62,	// (0x00040fdd) main_idle_act4_pane

0xcca8,	// (0x0004b223) popup_tb_extension_window_ParamLimits

0xdfe2,	// (0x0004c55d) tb_ext_find_pane_ParamLimits

0xdfe2,	// (0x0004c55d) tb_ext_find_pane

0x876e,	// (0x00046ce9) ai_gene_pane_1_cp1

0x520e,	// (0x00043789) ai_gene_pane_2_cp1

0x8776,	// (0x00046cf1) list_single_idle_plugin_calendar_pane

0x877f,	// (0x00046cfa) list_single_idle_plugin_notification_pane

0x8788,	// (0x00046d03) list_single_idle_plugin_player_pane

0xe026,	// (0x0004c5a1) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe026,	// (0x0004c5a1) list_single_idle_plugin_shortcut_pane

0xe048,	// (0x0004c5c3) main_idle_act4_pane_t1

0xe05a,	// (0x0004c5d5) main_idle_act4_pane_t2

0x0001,

0x0005,	// (0x0003e580) main_idle_act4_pane_t

0xe06c,	// (0x0004c5e7) middle_sk_idle_act4_pane_ParamLimits

0xe06c,	// (0x0004c5e7) middle_sk_idle_act4_pane

0xe082,	// (0x0004c5fd) popup_clock_digital_analogue_window_cp2

0xe09c,	// (0x0004c617) shortcut_wheel_idle_act4_pane_ParamLimits

0xe09c,	// (0x0004c617) shortcut_wheel_idle_act4_pane

0x757e,	// (0x00045af9) shortcut_wheel_idle_act4_pane_g1

0x757e,	// (0x00045af9) shortcut_wheel_idle_act4_pane_g2

0x757e,	// (0x00045af9) shortcut_wheel_idle_act4_pane_g3

0x757e,	// (0x00045af9) shortcut_wheel_idle_act4_pane_g4

0x757e,	// (0x00045af9) shortcut_wheel_idle_act4_pane_g5

0x8791,	// (0x00046d0c) shortcut_wheel_idle_act4_pane_g6

0x8799,	// (0x00046d14) shortcut_wheel_idle_act4_pane_g7

0x87a1,	// (0x00046d1c) shortcut_wheel_idle_act4_pane_g8

0x87a9,	// (0x00046d24) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd44,	// (0x0004e2bf) shortcut_wheel_idle_act4_pane_g

0x7711,	// (0x00045c8c) middle_sk_idle_act4_pane_g1_ParamLimits

0x7711,	// (0x00045c8c) middle_sk_idle_act4_pane_g1

0xe10c,	// (0x0004c687) middle_sk_idle_act4_pane_g2_ParamLimits

0xe10c,	// (0x0004c687) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x0004e2dd) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x0004e2dd) middle_sk_idle_act4_pane_g

0xe118,	// (0x0004c693) middle_sk_idle_act4_pane_t1_ParamLimits

0xe118,	// (0x0004c693) middle_sk_idle_act4_pane_t1

0xe135,	// (0x0004c6b0) grid_ai_shortcut_pane_ParamLimits

0xe135,	// (0x0004c6b0) grid_ai_shortcut_pane

0xe14e,	// (0x0004c6c9) list_highlight_pane_cp16_ParamLimits

0xe14e,	// (0x0004c6c9) list_highlight_pane_cp16

0xe15b,	// (0x0004c6d6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe15b,	// (0x0004c6d6) list_single_idle_plugin_shortcut_pane_g1

0xe167,	// (0x0004c6e2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe167,	// (0x0004c6e2) list_single_idle_plugin_shortcut_pane_g2

0xe17f,	// (0x0004c6fa) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe17f,	// (0x0004c6fa) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x0032,	// (0x0003e5ad) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x0032,	// (0x0003e5ad) list_single_idle_plugin_shortcut_pane_g

0xe192,	// (0x0004c70d) cell_ai_shortcut_pane_ParamLimits

0xe192,	// (0x0004c70d) cell_ai_shortcut_pane

0xe1b6,	// (0x0004c731) cell_ai_shortcut_pane_g1_ParamLimits

0xe1b6,	// (0x0004c731) cell_ai_shortcut_pane_g1

0x876e,	// (0x00046ce9) ai_gene_pane_1_cp2

0x87b1,	// (0x00046d2c) ai_gene_pane_2_cp2

0x87b9,	// (0x00046d34) list_highlight_pane_cp15

0x87c2,	// (0x00046d3d) list_single_idle_plugin_calendar_pane_g1

0x87b9,	// (0x00046d34) list_highlight_pane_cp17

0x87ca,	// (0x00046d45) list_single_idle_plugin_calendar_pane_g1_copy1

0x87d2,	// (0x00046d4d) list_single_idle_plugin_player_pane_g1

0x6c36,	// (0x000451b1) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd67,	// (0x0004e2e2) list_single_idle_plugin_player_pane_g

0x87da,	// (0x00046d55) list_single_idle_plugin_player_pane_t1

0x87e8,	// (0x00046d63) list_single_idle_plugin_player_pane_t2

0x87f6,	// (0x00046d71) list_single_idle_plugin_player_pane_t3

0x8804,	// (0x00046d7f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6c,	// (0x0004e2e7) list_single_idle_plugin_player_pane_t

0x8812,	// (0x00046d8d) wait_bar_pane_cp15

0x881a,	// (0x00046d95) grid_ai_notification_pane

0x6c36,	// (0x000451b1) list_single_idle_plugin_notification_pane_g1

0xe1d8,	// (0x0004c753) cell_ai_notification_pane_ParamLimits

0xe1d8,	// (0x0004c753) cell_ai_notification_pane

0x8823,	// (0x00046d9e) cell_ai_notification_pane_g1

0x882b,	// (0x00046da6) cell_ai_notification_pane_t1

0xe1e5,	// (0x0004c760) tb_ext_find_button_pane

0xe1ed,	// (0x0004c768) tb_ext_find_pane_g1

0xe1f5,	// (0x0004c770) tb_ext_find_pane_t1

0x4b7d,	// (0x000430f8) tb_ext_find_button_pane_g1

0x8839,	// (0x00046db4) tb_ext_find_button_pane_g2

0x0001,

0xfd75,	// (0x0004e2f0) tb_ext_find_button_pane_g

0xe048,	// (0x0004c5c3) main_idle_act4_pane_t1_ParamLimits

0xe05a,	// (0x0004c5d5) main_idle_act4_pane_t2_ParamLimits

0x0005,	// (0x0003e580) main_idle_act4_pane_t_ParamLimits

0xe082,	// (0x0004c5fd) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe090,	// (0x0004c60b) sat_plugin_idle_act4_pane_ParamLimits

0xe090,	// (0x0004c60b) sat_plugin_idle_act4_pane

0xe203,	// (0x0004c77e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe203,	// (0x0004c77e) sat_plugin_idle_act4_pane_t1

0xe216,	// (0x0004c791) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe216,	// (0x0004c791) sat_plugin_idle_act4_pane_t2

0xe229,	// (0x0004c7a4) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe229,	// (0x0004c7a4) sat_plugin_idle_act4_pane_t3

0xe23c,	// (0x0004c7b7) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe23c,	// (0x0004c7b7) sat_plugin_idle_act4_pane_t4

0x0003,

0x004c,	// (0x0003e5c7) sat_plugin_idle_act4_pane_t_ParamLimits

0x004c,	// (0x0003e5c7) sat_plugin_idle_act4_pane_t

0x9492,	// (0x00047a0d) popup_battery_window_ParamLimits

0x9492,	// (0x00047a0d) popup_battery_window

0x1fa3,	// (0x0004051e) bg_popup_sub_pane_cp25_ParamLimits

0x1fa3,	// (0x0004051e) bg_popup_sub_pane_cp25

0xe24f,	// (0x0004c7ca) popup_battery_window_g1_ParamLimits

0xe24f,	// (0x0004c7ca) popup_battery_window_g1

0xe25b,	// (0x0004c7d6) popup_battery_window_t1_ParamLimits

0xe25b,	// (0x0004c7d6) popup_battery_window_t1

0xe26d,	// (0x0004c7e8) popup_battery_window_t2_ParamLimits

0xe26d,	// (0x0004c7e8) popup_battery_window_t2

0x0001,

0x0055,	// (0x0003e5d0) popup_battery_window_t_ParamLimits

0x0055,	// (0x0003e5d0) popup_battery_window_t

0xbb68,	// (0x0004a0e3) midp_canvas_pane_ParamLimits

0xbbca,	// (0x0004a145) midp_keypad_pane_ParamLimits

0xbbca,	// (0x0004a145) midp_keypad_pane

0x44b4,	// (0x00042a2f) main_midp_pane_ParamLimits

0x7278,	// (0x000457f3) signal_pane_g2_cp_ParamLimits

0xe28a,	// (0x0004c805) aid_size_cell_midp_keypad_ParamLimits

0xe28a,	// (0x0004c805) aid_size_cell_midp_keypad

0xe2a4,	// (0x0004c81f) midp_keyp_game_grid_pane_ParamLimits

0xe2a4,	// (0x0004c81f) midp_keyp_game_grid_pane

0xe2c4,	// (0x0004c83f) midp_keyp_rocker_pane_ParamLimits

0xe2c4,	// (0x0004c83f) midp_keyp_rocker_pane

0xe2ef,	// (0x0004c86a) midp_keyp_sk_left_pane_ParamLimits

0xe2ef,	// (0x0004c86a) midp_keyp_sk_left_pane

0xe36a,	// (0x0004c8e5) midp_keyp_sk_right_pane_ParamLimits

0xe36a,	// (0x0004c8e5) midp_keyp_sk_right_pane

0x1e00,	// (0x0004037b) bg_button_pane_cp03

0xe3c4,	// (0x0004c93f) midp_keyp_sk_left_pane_g1

0x1e00,	// (0x0004037b) bg_button_pane_cp04

0xe3c4,	// (0x0004c93f) midp_keyp_sk_right_pane_g1

0x757e,	// (0x00045af9) midp_keyp_rocker_pane_g1

0xe3cd,	// (0x0004c948) keyp_game_cell_pane_ParamLimits

0xe3cd,	// (0x0004c948) keyp_game_cell_pane

0x1e00,	// (0x0004037b) bg_button_pane_cp02

0xe3e0,	// (0x0004c95b) keyp_game_cell_pane_g1

0x94d6,	// (0x00047a51) popup_fep_vkb2_window_ParamLimits

0x94d6,	// (0x00047a51) popup_fep_vkb2_window

0xad61,	// (0x000492dc) aid_size_cell_vkb2_ParamLimits

0xad61,	// (0x000492dc) aid_size_cell_vkb2

0xadb5,	// (0x00049330) popup_fep_vkb2_window_g1_ParamLimits

0xadb5,	// (0x00049330) popup_fep_vkb2_window_g1

0xadfd,	// (0x00049378) vkb2_area_bottom_pane_ParamLimits

0xadfd,	// (0x00049378) vkb2_area_bottom_pane

0xae49,	// (0x000493c4) vkb2_area_keypad_pane_ParamLimits

0xae49,	// (0x000493c4) vkb2_area_keypad_pane

0xae8b,	// (0x00049406) vkb2_area_top_pane_ParamLimits

0xae8b,	// (0x00049406) vkb2_area_top_pane

0xaf05,	// (0x00049480) vkb2_top_entry_pane_ParamLimits

0xaf05,	// (0x00049480) vkb2_top_entry_pane

0xaf2f,	// (0x000494aa) vkb2_top_grid_left_pane_ParamLimits

0xaf2f,	// (0x000494aa) vkb2_top_grid_left_pane

0xaf4d,	// (0x000494c8) vkb2_top_grid_right_pane_ParamLimits

0xaf4d,	// (0x000494c8) vkb2_top_grid_right_pane

0xaf6b,	// (0x000494e6) vkb2_cell_keypad_pane_ParamLimits

0xaf6b,	// (0x000494e6) vkb2_cell_keypad_pane

0xb03c,	// (0x000495b7) vkb2_area_bottom_grid_pane_ParamLimits

0xb03c,	// (0x000495b7) vkb2_area_bottom_grid_pane

0xb062,	// (0x000495dd) vkb2_area_bottom_pane_g1_ParamLimits

0xb062,	// (0x000495dd) vkb2_area_bottom_pane_g1

0xb086,	// (0x00049601) vkb2_area_bottom_pane_g2_ParamLimits

0xb086,	// (0x00049601) vkb2_area_bottom_pane_g2

0xb0b4,	// (0x0004962f) vkb2_area_bottom_pane_g3_ParamLimits

0xb0b4,	// (0x0004962f) vkb2_area_bottom_pane_g3

0x0002,

0xfd7a,	// (0x0004e2f5) vkb2_area_bottom_pane_g_ParamLimits

0xfd7a,	// (0x0004e2f5) vkb2_area_bottom_pane_g

0xb115,	// (0x00049690) vkb2_top_cell_left_pane_ParamLimits

0xb115,	// (0x00049690) vkb2_top_cell_left_pane

0xe3f1,	// (0x0004c96c) vkb2_top_entry_pane_g1_ParamLimits

0xe3f1,	// (0x0004c96c) vkb2_top_entry_pane_g1

0xe3ff,	// (0x0004c97a) vkb2_top_entry_pane_t1_ParamLimits

0xe3ff,	// (0x0004c97a) vkb2_top_entry_pane_t1

0xe431,	// (0x0004c9ac) vkb2_top_entry_pane_t2_ParamLimits

0xe431,	// (0x0004c9ac) vkb2_top_entry_pane_t2

0xe463,	// (0x0004c9de) vkb2_top_entry_pane_t3_ParamLimits

0xe463,	// (0x0004c9de) vkb2_top_entry_pane_t3

0x0002,

0x0061,	// (0x0003e5dc) vkb2_top_entry_pane_t_ParamLimits

0x0061,	// (0x0003e5dc) vkb2_top_entry_pane_t

0xb162,	// (0x000496dd) vkb2_top_grid_right_pane_g1_ParamLimits

0xb162,	// (0x000496dd) vkb2_top_grid_right_pane_g1

0xb178,	// (0x000496f3) vkb2_top_grid_right_pane_g2_ParamLimits

0xb178,	// (0x000496f3) vkb2_top_grid_right_pane_g2

0xb190,	// (0x0004970b) vkb2_top_grid_right_pane_g3_ParamLimits

0xb190,	// (0x0004970b) vkb2_top_grid_right_pane_g3

0xb1a8,	// (0x00049723) vkb2_top_grid_right_pane_g4_ParamLimits

0xb1a8,	// (0x00049723) vkb2_top_grid_right_pane_g4

0x0003,

0xfd81,	// (0x0004e2fc) vkb2_top_grid_right_pane_g_ParamLimits

0xfd81,	// (0x0004e2fc) vkb2_top_grid_right_pane_g

0xb1be,	// (0x00049739) vkb2_top_cell_left_pane_g1

0xb1d5,	// (0x00049750) vkb2_cell_keypad_pane_g1_ParamLimits

0xb1d5,	// (0x00049750) vkb2_cell_keypad_pane_g1

0xe487,	// (0x0004ca02) vkb2_cell_keypad_pane_t1_ParamLimits

0xe487,	// (0x0004ca02) vkb2_cell_keypad_pane_t1

0xb1e3,	// (0x0004975e) vkb2_cell_bottom_grid_pane_ParamLimits

0xb1e3,	// (0x0004975e) vkb2_cell_bottom_grid_pane

0xb21c,	// (0x00049797) vkb2_cell_bottom_grid_pane_g1

0xe0b0,	// (0x0004c62b) aid_call2_pane_cp02

0xe0b8,	// (0x0004c633) aid_call_pane_cp02

0xe0c0,	// (0x0004c63b) clock_digital_number_pane_cp10

0xe0c8,	// (0x0004c643) clock_digital_number_pane_cp11

0xe0d0,	// (0x0004c64b) clock_digital_number_pane_cp12

0xe0d8,	// (0x0004c653) clock_digital_number_pane_cp13

0xe0e0,	// (0x0004c65b) clock_digital_separator_pane_cp10

0x4b7d,	// (0x000430f8) popup_clock_digital_analogue_window_cp2_g1

0x4b7d,	// (0x000430f8) popup_clock_digital_analogue_window_cp2_g2

0xe0e8,	// (0x0004c663) popup_clock_digital_analogue_window_cp2_g3

0x4b7d,	// (0x000430f8) popup_clock_digital_analogue_window_cp2_g4

0xe0e8,	// (0x0004c663) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd57,	// (0x0004e2d2) popup_clock_digital_analogue_window_cp2_g

0xe0f0,	// (0x0004c66b) popup_clock_digital_analogue_window_cp2_t1

0xe0fe,	// (0x0004c679) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x0028,	// (0x0003e5a3) popup_clock_digital_analogue_window_cp2_t

0x757e,	// (0x00045af9) clock_digital_number_pane_cp10_g1

0x757e,	// (0x00045af9) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0004e0be) clock_digital_number_pane_cp10_g

0x757e,	// (0x00045af9) clock_digital_separator_pane_cp10_g1

0x757e,	// (0x00045af9) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0004e0be) clock_digital_separator_pane_cp10_g

0x86b7,	// (0x00046c32) uniindi_top_pane_g3

0x86c8,	// (0x00046c43) uniindi_top_pane_g4

0xaff6,	// (0x00049571) vkb2_row_keypad_pane_ParamLimits

0xaff6,	// (0x00049571) vkb2_row_keypad_pane

0xb238,	// (0x000497b3) vkb2_cell_t_keypad_pane_ParamLimits

0xb238,	// (0x000497b3) vkb2_cell_t_keypad_pane

0xb248,	// (0x000497c3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xb248,	// (0x000497c3) vkb2_cell_t_keypad_pane_cp08

0xb25b,	// (0x000497d6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xb25b,	// (0x000497d6) vkb2_cell_t_keypad_pane_cp09

0xb26f,	// (0x000497ea) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xb26f,	// (0x000497ea) vkb2_cell_t_keypad_pane_cp01

0xb280,	// (0x000497fb) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xb280,	// (0x000497fb) vkb2_cell_t_keypad_pane_cp02

0xb291,	// (0x0004980c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xb291,	// (0x0004980c) vkb2_cell_t_keypad_pane_cp03

0xb2a2,	// (0x0004981d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xb2a2,	// (0x0004981d) vkb2_cell_t_keypad_pane_cp04

0xb2b3,	// (0x0004982e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xb2b3,	// (0x0004982e) vkb2_cell_t_keypad_pane_cp05

0xb2c4,	// (0x0004983f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xb2c4,	// (0x0004983f) vkb2_cell_t_keypad_pane_cp06

0xb2d5,	// (0x00049850) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xb2d5,	// (0x00049850) vkb2_cell_t_keypad_pane_cp07

0xb2e6,	// (0x00049861) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xb2e6,	// (0x00049861) vkb2_cell_t_keypad_pane_cp10

0xaa9b,	// (0x00049016) vkb2_cell_t_keypad_pane_g1

0xe49e,	// (0x0004ca19) vkb2_cell_t_keypad_pane_t1

0x93cd,	// (0x00047948) popup_grid_graphic2_window

0xe4b0,	// (0x0004ca2b) aid_size_cell_graphic2_ParamLimits

0xe4b0,	// (0x0004ca2b) aid_size_cell_graphic2

0xe4e8,	// (0x0004ca63) bg_popup_window_pane_cp21_ParamLimits

0xe4e8,	// (0x0004ca63) bg_popup_window_pane_cp21

0xe4f6,	// (0x0004ca71) graphic2_pages_pane_ParamLimits

0xe4f6,	// (0x0004ca71) graphic2_pages_pane

0xe53c,	// (0x0004cab7) grid_graphic2_control_pane_ParamLimits

0xe53c,	// (0x0004cab7) grid_graphic2_control_pane

0xe57a,	// (0x0004caf5) grid_graphic2_pane_ParamLimits

0xe57a,	// (0x0004caf5) grid_graphic2_pane

0xe5ee,	// (0x0004cb69) cell_graphic2_pane

0x1e00,	// (0x0004037b) main_comp_mode_pane

0x8328,	// (0x000468a3) list_ai3_gene_pane_ParamLimits

0xde8c,	// (0x0004c407) bg_popup_window_pane_cp19_ParamLimits

0x8499,	// (0x00046a14) bg_touch_area_indi_pane_ParamLimits

0x8499,	// (0x00046a14) bg_touch_area_indi_pane

0x84af,	// (0x00046a2a) bg_touch_area_indi_pane_cp01_ParamLimits

0x84af,	// (0x00046a2a) bg_touch_area_indi_pane_cp01

0x84c5,	// (0x00046a40) bg_touch_area_indi_pane_cp02_ParamLimits

0x84c5,	// (0x00046a40) bg_touch_area_indi_pane_cp02

0x84dd,	// (0x00046a58) bg_touch_area_indi_pane_cp03_ParamLimits

0x84dd,	// (0x00046a58) bg_touch_area_indi_pane_cp03

0x84f7,	// (0x00046a72) popup_slider_window_g1_ParamLimits

0x8513,	// (0x00046a8e) popup_slider_window_g2_ParamLimits

0x852f,	// (0x00046aaa) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x0004e26c) popup_slider_window_g_ParamLimits

0x854b,	// (0x00046ac6) popup_slider_window_t1_ParamLimits

0x8591,	// (0x00046b0c) small_volume_slider_vertical_pane_ParamLimits

0xe5ee,	// (0x0004cb69) cell_graphic2_pane_ParamLimits

0xe63c,	// (0x0004cbb7) bg_button_pane_cp10_ParamLimits

0xe63c,	// (0x0004cbb7) bg_button_pane_cp10

0xe64f,	// (0x0004cbca) bg_button_pane_cp11_ParamLimits

0xe64f,	// (0x0004cbca) bg_button_pane_cp11

0xe662,	// (0x0004cbdd) graphic2_pages_pane_g1_ParamLimits

0xe662,	// (0x0004cbdd) graphic2_pages_pane_g1

0xe67d,	// (0x0004cbf8) graphic2_pages_pane_g2_ParamLimits

0xe67d,	// (0x0004cbf8) graphic2_pages_pane_g2

0x0001,

0x0076,	// (0x0003e5f1) graphic2_pages_pane_g_ParamLimits

0x0076,	// (0x0003e5f1) graphic2_pages_pane_g

0xe695,	// (0x0004cc10) graphic2_pages_pane_t1_ParamLimits

0xe695,	// (0x0004cc10) graphic2_pages_pane_t1

0xe6ad,	// (0x0004cc28) cell_graphic2_control_pane_ParamLimits

0xe6ad,	// (0x0004cc28) cell_graphic2_control_pane

0xe6ce,	// (0x0004cc49) cell_graphic2_pane_g1_ParamLimits

0xe6ce,	// (0x0004cc49) cell_graphic2_pane_g1

0xe6db,	// (0x0004cc56) cell_graphic2_pane_g2_ParamLimits

0xe6db,	// (0x0004cc56) cell_graphic2_pane_g2

0xe6e8,	// (0x0004cc63) cell_graphic2_pane_g3_ParamLimits

0xe6e8,	// (0x0004cc63) cell_graphic2_pane_g3

0xe6f5,	// (0x0004cc70) cell_graphic2_pane_g4_ParamLimits

0xe6f5,	// (0x0004cc70) cell_graphic2_pane_g4

0xe702,	// (0x0004cc7d) cell_graphic2_pane_g5_ParamLimits

0xe702,	// (0x0004cc7d) cell_graphic2_pane_g5

0x0004,

0x007b,	// (0x0003e5f6) cell_graphic2_pane_g_ParamLimits

0x007b,	// (0x0003e5f6) cell_graphic2_pane_g

0xe71d,	// (0x0004cc98) cell_graphic2_pane_t1_ParamLimits

0xe71d,	// (0x0004cc98) cell_graphic2_pane_t1

0x57da,	// (0x00043d55) grid_highlight_pane_cp11_ParamLimits

0x57da,	// (0x00043d55) grid_highlight_pane_cp11

0x1fa3,	// (0x0004051e) bg_button_pane_cp05

0xe746,	// (0x0004ccc1) cell_graphic2_control_pane_g1

0x757e,	// (0x00045af9) bg_touch_area_indi_pane_g1

0xe76e,	// (0x0004cce9) aid_cmod_rocker_key_size

0xe778,	// (0x0004ccf3) aid_cmode_itu_key_size

0xe782,	// (0x0004ccfd) main_cmode_video_pane

0xe78c,	// (0x0004cd07) main_comp_mode_itu_pane

0xe798,	// (0x0004cd13) main_comp_mode_rocker_pane

0xe7a4,	// (0x0004cd1f) cell_cmode_rocker_pane_ParamLimits

0xe7a4,	// (0x0004cd1f) cell_cmode_rocker_pane

0xe7b6,	// (0x0004cd31) cell_cmode_itu_pane_ParamLimits

0xe7b6,	// (0x0004cd31) cell_cmode_itu_pane

0x435c,	// (0x000428d7) bg_button_pane_cp06_ParamLimits

0x435c,	// (0x000428d7) bg_button_pane_cp06

0x7711,	// (0x00045c8c) cell_cmode_rocker_pane_g1_ParamLimits

0x7711,	// (0x00045c8c) cell_cmode_rocker_pane_g1

0x85b6,	// (0x00046b31) cell_cmode_rocker_pane_g2_ParamLimits

0x85b6,	// (0x00046b31) cell_cmode_rocker_pane_g2

0x0001,

0xfd8a,	// (0x0004e305) cell_cmode_rocker_pane_g_ParamLimits

0xfd8a,	// (0x0004e305) cell_cmode_rocker_pane_g

0x1e00,	// (0x0004037b) bg_button_pane_cp07

0xe7cb,	// (0x0004cd46) cell_cmode_itu_pane_g1

0xe7d4,	// (0x0004cd4f) cell_cmode_itu_pane_t1

0xe7e2,	// (0x0004cd5d) cell_cmode_itu_pane_t2

0x0001,

0x0090,	// (0x0003e60b) cell_cmode_itu_pane_t

0x873a,	// (0x00046cb5) aid_touch_ctrl_left

0x8742,	// (0x00046cbd) aid_touch_ctrl_right

0x1e00,	// (0x0004037b) compa_mode_pane

0xe7f0,	// (0x0004cd6b) aid_cmod_rocker_key_size_cp

0xe7fa,	// (0x0004cd75) aid_cmode_itu_key_size_cp

0xe804,	// (0x0004cd7f) compa_mode_pane_g1

0xe80c,	// (0x0004cd87) compa_mode_pane_g2

0xe814,	// (0x0004cd8f) compa_mode_pane_g3

0x0002,

0x0095,	// (0x0003e610) compa_mode_pane_g

0xe81c,	// (0x0004cd97) main_comp_mode_itu_pane_cp

0xe824,	// (0x0004cd9f) main_comp_mode_rocker_pane_cp

0xe82c,	// (0x0004cda7) cell_cmode_itu_pane_cp_ParamLimits

0xe82c,	// (0x0004cda7) cell_cmode_itu_pane_cp

0xe841,	// (0x0004cdbc) cell_cmode_rocker_pane_cp_ParamLimits

0xe841,	// (0x0004cdbc) cell_cmode_rocker_pane_cp

0x435c,	// (0x000428d7) bg_button_pane_cp06_cp_ParamLimits

0x435c,	// (0x000428d7) bg_button_pane_cp06_cp

0x7711,	// (0x00045c8c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7711,	// (0x00045c8c) cell_cmode_rocker_pane_g1_cp

0x757e,	// (0x00045af9) cell_cmode_rocker_pane_g2_cp

0x1e00,	// (0x0004037b) bg_button_pane_cp07_cp

0x692f,	// (0x00044eaa) cell_cmode_itu_pane_g1_cp

0xe853,	// (0x0004cdce) cell_cmode_itu_pane_t1_cp

0xe853,	// (0x0004cdce) cell_cmode_itu_pane_t2_cp

0xd42a,	// (0x0004b9a5) settings_code_pane_cp2

0x1e70,	// (0x000403eb) bg_popup_window_pane_cp3_ParamLimits

0x29f3,	// (0x00040f6e) heading_pane_cp3_ParamLimits

0x29ff,	// (0x00040f7a) listscroll_popup_graphic_pane_ParamLimits

0xa844,	// (0x00048dbf) fep_hwr_aid_pane_ParamLimits

0xacbc,	// (0x00049237) aid_touch_sctrl_top_ParamLimits

0xacd7,	// (0x00049252) sctrl_sk_top_pane_g1_ParamLimits

0xaa9b,	// (0x00049016) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x0004e285) sctrl_sk_top_pane_g_ParamLimits

0xace4,	// (0x0004925f) sctrl_sk_top_pane_t1_ParamLimits

0xacbc,	// (0x00049237) aid_touch_sctrl_bottom_ParamLimits

0xace4,	// (0x0004925f) sctrl_sk_bottom_pane_t1_ParamLimits

0x8683,	// (0x00046bfe) aid_area_touch_clock

0xaecd,	// (0x00049448) aid_vkb2_area_top_pane_cell_ParamLimits

0xaecd,	// (0x00049448) aid_vkb2_area_top_pane_cell

0xb018,	// (0x00049593) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb018,	// (0x00049593) aid_vkb2_area_bottom_pane_cell

0xe3e9,	// (0x0004c964) popup_char_count_window

0xe861,	// (0x0004cddc) popup_char_count_window_g1

0xe86a,	// (0x0004cde5) popup_char_count_window_g2

0xe873,	// (0x0004cdee) popup_char_count_window_g3

0x0002,

0x009c,	// (0x0003e617) popup_char_count_window_g

0xe87c,	// (0x0004cdf7) popup_char_count_window_t1

0xad93,	// (0x0004930e) popup_fep_char_preview_window_ParamLimits

0xad93,	// (0x0004930e) popup_fep_char_preview_window

0xaeeb,	// (0x00049466) vkb2_top_candi_pane_ParamLimits

0xaeeb,	// (0x00049466) vkb2_top_candi_pane

0xe88a,	// (0x0004ce05) cell_vkb2_top_candi_pane_ParamLimits

0xe88a,	// (0x0004ce05) cell_vkb2_top_candi_pane

0xb2fb,	// (0x00049876) bg_popup_fep_char_preview_window_ParamLimits

0xb2fb,	// (0x00049876) bg_popup_fep_char_preview_window

0xb309,	// (0x00049884) popup_fep_char_preview_window_t1_ParamLimits

0xb309,	// (0x00049884) popup_fep_char_preview_window_t1

0xe8d7,	// (0x0004ce52) bg_popup_fep_char_preview_window_g1

0xe8df,	// (0x0004ce5a) bg_popup_fep_char_preview_window_g2

0xe8e7,	// (0x0004ce62) bg_popup_fep_char_preview_window_g3

0xe8ef,	// (0x0004ce6a) bg_popup_fep_char_preview_window_g4

0xe8f7,	// (0x0004ce72) bg_popup_fep_char_preview_window_g5

0xb343,	// (0x000498be) bg_popup_fep_char_preview_window_g6

0xe8ff,	// (0x0004ce7a) bg_popup_fep_char_preview_window_g7

0xe907,	// (0x0004ce82) bg_popup_fep_char_preview_window_g8

0xe90f,	// (0x0004ce8a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd8f,	// (0x0004e30a) bg_popup_fep_char_preview_window_g

0xaa9b,	// (0x00049016) cell_vkb2_top_candi_pane_g1_ParamLimits

0xaa9b,	// (0x00049016) cell_vkb2_top_candi_pane_g1

0xaaa9,	// (0x00049024) cell_vkb2_top_candi_pane_g2_ParamLimits

0xaaa9,	// (0x00049024) cell_vkb2_top_candi_pane_g2

0xe349,	// (0x0004c8c4) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe349,	// (0x0004c8c4) cell_vkb2_top_candi_pane_g3

0xb34b,	// (0x000498c6) cell_vkb2_top_candi_pane_g4_ParamLimits

0xb34b,	// (0x000498c6) cell_vkb2_top_candi_pane_g4

0x7971,	// (0x00045eec) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7971,	// (0x00045eec) cell_vkb2_top_candi_pane_g5

0xb36c,	// (0x000498e7) cell_vkb2_top_candi_pane_g6_ParamLimits

0xb36c,	// (0x000498e7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfda2,	// (0x0004e31d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfda2,	// (0x0004e31d) cell_vkb2_top_candi_pane_g

0xb37a,	// (0x000498f5) cell_vkb2_top_candi_pane_t1

0xa6a4,	// (0x00048c1f) aid_size_touch_slider_mark_ParamLimits

0xa6a4,	// (0x00048c1f) aid_size_touch_slider_mark

0xe52c,	// (0x0004caa7) grid_graphic2_catg_pane_ParamLimits

0xe52c,	// (0x0004caa7) grid_graphic2_catg_pane

0xe5ca,	// (0x0004cb45) popup_grid_graphic2_window_t1_ParamLimits

0xe5ca,	// (0x0004cb45) popup_grid_graphic2_window_t1

0xe5dc,	// (0x0004cb57) popup_grid_graphic2_window_t2_ParamLimits

0xe5dc,	// (0x0004cb57) popup_grid_graphic2_window_t2

0x0001,

0x0071,	// (0x0003e5ec) popup_grid_graphic2_window_t_ParamLimits

0x0071,	// (0x0003e5ec) popup_grid_graphic2_window_t

0x1fa3,	// (0x0004051e) bg_button_pane_cp05_ParamLimits

0xe746,	// (0x0004ccc1) cell_graphic2_control_pane_g1_ParamLimits

0xe917,	// (0x0004ce92) cell_graphic2_catg_pane_ParamLimits

0xe917,	// (0x0004ce92) cell_graphic2_catg_pane

0x1e00,	// (0x0004037b) bg_button_pane_cp12

0xe929,	// (0x0004cea4) cell_graphic2_catg_pane_g1

0x864f,	// (0x00046bca) cell_tb_ext_pane_t1_ParamLimits

0xb135,	// (0x000496b0) vkb2_top_cell_right_narrow_pane_ParamLimits

0xb135,	// (0x000496b0) vkb2_top_cell_right_narrow_pane

0xb14d,	// (0x000496c8) vkb2_top_cell_right_wide_pane_ParamLimits

0xb14d,	// (0x000496c8) vkb2_top_cell_right_wide_pane

0xa836,	// (0x00048db1) bg_vkb2_func_pane_ParamLimits

0xa836,	// (0x00048db1) bg_vkb2_func_pane

0xb1be,	// (0x00049739) vkb2_top_cell_left_pane_g1_ParamLimits

0xa836,	// (0x00048db1) bg_vkb2_fuc_pane_cp03_ParamLimits

0xa836,	// (0x00048db1) bg_vkb2_fuc_pane_cp03

0xb21c,	// (0x00049797) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x56e6,	// (0x00043c61) bg_vkb2_func_pane_g1

0x56de,	// (0x00043c59) bg_vkb2_func_pane_g2

0x56ee,	// (0x00043c69) bg_vkb2_func_pane_g3

0x56f6,	// (0x00043c71) bg_vkb2_func_pane_g4

0x56fe,	// (0x00043c79) bg_vkb2_func_pane_g5

0x5706,	// (0x00043c81) bg_vkb2_func_pane_g6

0x5716,	// (0x00043c91) bg_vkb2_func_pane_g7

0x570e,	// (0x00043c89) bg_vkb2_func_pane_g8

0x56d6,	// (0x00043c51) bg_vkb2_func_pane_g9

0x0008,

0xfdaf,	// (0x0004e32a) bg_vkb2_func_pane_g

0xa836,	// (0x00048db1) bg_vkb2_fuc_pane_cp01_ParamLimits

0xa836,	// (0x00048db1) bg_vkb2_fuc_pane_cp01

0xb1be,	// (0x00049739) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xb1be,	// (0x00049739) vkb2_top_cell_right_wide_pane_g1

0xa836,	// (0x00048db1) bg_vkb2_fuc_pane_cp02_ParamLimits

0xa836,	// (0x00048db1) bg_vkb2_fuc_pane_cp02

0xb21c,	// (0x00049797) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xb21c,	// (0x00049797) vkb2_top_cell_right_narrow_pane_g1

0xde10,	// (0x0004c38b) aid_touch_area_decrease_ParamLimits

0xde10,	// (0x0004c38b) aid_touch_area_decrease

0xde2e,	// (0x0004c3a9) aid_touch_area_increase_ParamLimits

0xde2e,	// (0x0004c3a9) aid_touch_area_increase

0xde3a,	// (0x0004c3b5) aid_touch_area_mute_ParamLimits

0xde3a,	// (0x0004c3b5) aid_touch_area_mute

0xde5e,	// (0x0004c3d9) aid_touch_area_slider_ParamLimits

0xde5e,	// (0x0004c3d9) aid_touch_area_slider

0xde98,	// (0x0004c413) popup_slider_window_g4_ParamLimits

0xde98,	// (0x0004c413) popup_slider_window_g4

0xdea4,	// (0x0004c41f) popup_slider_window_g5_ParamLimits

0xdea4,	// (0x0004c41f) popup_slider_window_g5

0xdec6,	// (0x0004c441) popup_slider_window_g6_ParamLimits

0xdec6,	// (0x0004c441) popup_slider_window_g6

0x8579,	// (0x00046af4) popup_slider_window_t2_ParamLimits

0x8579,	// (0x00046af4) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x0004e279) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x0004e279) popup_slider_window_t

0xded8,	// (0x0004c453) slider_pane_ParamLimits

0xded8,	// (0x0004c453) slider_pane

0xe932,	// (0x0004cead) slider_pane_g1_ParamLimits

0xe932,	// (0x0004cead) slider_pane_g1

0xe946,	// (0x0004cec1) slider_pane_g2_ParamLimits

0xe946,	// (0x0004cec1) slider_pane_g2

0xe95c,	// (0x0004ced7) slider_pane_g3_ParamLimits

0xe95c,	// (0x0004ced7) slider_pane_g3

0x0003,

0x00d6,	// (0x0003e651) slider_pane_g_ParamLimits

0x00d6,	// (0x0003e651) slider_pane_g

0xcd04,	// (0x0004b27f) popup_tb_float_extension_window_ParamLimits

0xcd04,	// (0x0004b27f) popup_tb_float_extension_window

0xe988,	// (0x0004cf03) aid_size_cell_tb_float_ext

0x1e00,	// (0x0004037b) bg_popup_sub_window_cp28

0xe994,	// (0x0004cf0f) grid_tb_float_ext_pane

0xe99e,	// (0x0004cf19) cell_tb_float_ext_pane_ParamLimits

0xe99e,	// (0x0004cf19) cell_tb_float_ext_pane

0xe9b8,	// (0x0004cf33) cell_tb_float_ext_pane_g1

0xe9c1,	// (0x0004cf3c) grid_highlight_pane_cp12

0xa985,	// (0x00048f00) cell_last_hwr_side_pane_ParamLimits

0xa985,	// (0x00048f00) cell_last_hwr_side_pane

0x757e,	// (0x00045af9) cell_last_hwr_side_pane_g1

0xe9ca,	// (0x0004cf45) cell_last_hwr_side_pane_g2

0x0001,

0xfdc2,	// (0x0004e33d) cell_last_hwr_side_pane_g

0xb0e4,	// (0x0004965f) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb0e4,	// (0x0004965f) vkb2_area_bottom_space_btn_pane

0xaa9b,	// (0x00049016) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe49e,	// (0x0004ca19) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xb37a,	// (0x000498f5) cell_vkb2_top_candi_pane_t1_ParamLimits

0xb399,	// (0x00049914) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xb399,	// (0x00049914) vkb2_area_bottom_space_btn_pane_g1

0xb3d3,	// (0x0004994e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xb3d3,	// (0x0004994e) vkb2_area_bottom_space_btn_pane_g2

0xb409,	// (0x00049984) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xb409,	// (0x00049984) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdc7,	// (0x0004e342) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdc7,	// (0x0004e342) vkb2_area_bottom_space_btn_pane_g

0xa8f9,	// (0x00048e74) cel_fep_hwr_func_pane_ParamLimits

0xa8f9,	// (0x00048e74) cel_fep_hwr_func_pane

0xa935,	// (0x00048eb0) cell_hwr_side_button_pane_ParamLimits

0xa935,	// (0x00048eb0) cell_hwr_side_button_pane

0x8683,	// (0x00046bfe) aid_area_touch_clock_ParamLimits

0x1fa3,	// (0x0004051e) bg_uniindi_top_pane_ParamLimits

0x8695,	// (0x00046c10) uniindi_top_pane_g1_ParamLimits

0x86ab,	// (0x00046c26) uniindi_top_pane_g2_ParamLimits

0x86b7,	// (0x00046c32) uniindi_top_pane_g3_ParamLimits

0x86c8,	// (0x00046c43) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x0004e2b1) uniindi_top_pane_g_ParamLimits

0x86d5,	// (0x00046c50) uniindi_top_pane_t1_ParamLimits

0x1fa3,	// (0x0004051e) bg_vkb2_func_pane_cp01_ParamLimits

0x1fa3,	// (0x0004051e) bg_vkb2_func_pane_cp01

0xe9d3,	// (0x0004cf4e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe9d3,	// (0x0004cf4e) cel_fep_hwr_func_pane_g1

0x1fa3,	// (0x0004051e) bg_vkb2_func_pane_cp02_ParamLimits

0x1fa3,	// (0x0004051e) bg_vkb2_func_pane_cp02

0xe9d3,	// (0x0004cf4e) cell_hwr_side_button_pane_g1_ParamLimits

0xe9d3,	// (0x0004cf4e) cell_hwr_side_button_pane_g1

0x55ec,	// (0x00043b67) status_pane_g4_ParamLimits

0x55ec,	// (0x00043b67) status_pane_g4

0x5606,	// (0x00043b81) status_pane_t1

0x7404,	// (0x0004597f) form2_midp_gauge_slider_cont_pane

0x740c,	// (0x00045987) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd6f5,	// (0x0004bc70) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd707,	// (0x0004bc82) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0004e071) form2_midp_gauge_slider_pane_t_ParamLimits

0x741e,	// (0x00045999) form2_midp_slider_pane_ParamLimits

0xad53,	// (0x000492ce) aid_size_cell_func_vkb2_ParamLimits

0xad53,	// (0x000492ce) aid_size_cell_func_vkb2

0xe974,	// (0x0004ceef) slider_pane_g4_ParamLimits

0xe974,	// (0x0004ceef) slider_pane_g4

0xb453,	// (0x000499ce) form2_midp_gauge_slider_pane_t2_cp01

0xb461,	// (0x000499dc) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb461,	// (0x000499dc) form2_midp_gauge_slider_pane_t3_cp01

0xb47e,	// (0x000499f9) form2_midp_slider_pane_cp01

0x1e00,	// (0x0004037b) navi_smil_pane

0xea03,	// (0x0004cf7e) navi_smil_pane_g1

0xea0b,	// (0x0004cf86) navi_smil_pane_t1

0xe9e1,	// (0x0004cf5c) form2_midp_slider_pane_g1

0xe9ea,	// (0x0004cf65) form2_midp_slider_pane_g2

0xe9f2,	// (0x0004cf6d) form2_midp_slider_pane_g3

0xe9e1,	// (0x0004cf5c) form2_midp_slider_pane_g4

0xc707,	// (0x0004ac82) form2_midp_slider_pane_g5

0x0004,

0xfdd0,	// (0x0004e34b) form2_midp_slider_pane_g

0xb443,	// (0x000499be) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xb443,	// (0x000499be) vkb2_area_bottom_space_btn_pane_g4

0xce6b,	// (0x0004b3e6) lc0_navi_pane_ParamLimits

0xce6b,	// (0x0004b3e6) lc0_navi_pane

0xcee1,	// (0x0004b45c) lc0_stat_indi_pane_ParamLimits

0xcee1,	// (0x0004b45c) lc0_stat_indi_pane

0xcef8,	// (0x0004b473) ls0_title_pane_ParamLimits

0xcef8,	// (0x0004b473) ls0_title_pane

0x435c,	// (0x000428d7) bg_popup_sub_pane_cp14_ParamLimits

0x866a,	// (0x00046be5) list_uniindi_pane_ParamLimits

0x8676,	// (0x00046bf1) uniindi_top_pane_ParamLimits

0x8712,	// (0x00046c8d) list_single_uniindi_pane_g1_ParamLimits

0x8725,	// (0x00046ca0) list_single_uniindi_pane_t1_ParamLimits

0xb487,	// (0x00049a02) lc0_stat_clock_pane_ParamLimits

0xb487,	// (0x00049a02) lc0_stat_clock_pane

0xc710,	// (0x0004ac8b) lc0_stat_indi_pane_g1_ParamLimits

0xc710,	// (0x0004ac8b) lc0_stat_indi_pane_g1

0xc71d,	// (0x0004ac98) lc0_stat_indi_pane_g2_ParamLimits

0xc71d,	// (0x0004ac98) lc0_stat_indi_pane_g2

0x0001,

0xfddb,	// (0x0004e356) lc0_stat_indi_pane_g_ParamLimits

0xfddb,	// (0x0004e356) lc0_stat_indi_pane_g

0xb494,	// (0x00049a0f) lc0_uni_indicator_pane_ParamLimits

0xb494,	// (0x00049a0f) lc0_uni_indicator_pane

0xc72a,	// (0x0004aca5) ls0_title_pane_g1_ParamLimits

0xc72a,	// (0x0004aca5) ls0_title_pane_g1

0xc73e,	// (0x0004acb9) ls0_title_pane_t1_ParamLimits

0xc73e,	// (0x0004acb9) ls0_title_pane_t1

0xb4a1,	// (0x00049a1c) lc0_uni_indicator_pane_g1_ParamLimits

0xb4a1,	// (0x00049a1c) lc0_uni_indicator_pane_g1

0xea19,	// (0x0004cf94) lc0_stat_clock_pane_t1

0x1e00,	// (0x0004037b) main_ai5_pane

0xea27,	// (0x0004cfa2) ai5_sk_pane_ParamLimits

0xea27,	// (0x0004cfa2) ai5_sk_pane

0xc774,	// (0x0004acef) cell_ai5_widget_pane_ParamLimits

0xc774,	// (0x0004acef) cell_ai5_widget_pane

0xea34,	// (0x0004cfaf) aid_size_cell_widget_grid

0xea48,	// (0x0004cfc3) bg_ai5_widget_pane_ParamLimits

0xea48,	// (0x0004cfc3) bg_ai5_widget_pane

0xea92,	// (0x0004d00d) cell_ai5_widget_pane_g2

0xeaa2,	// (0x0004d01d) cell_ai5_widget_pane_g3

0xeac1,	// (0x0004d03c) cell_ai5_widget_pane_g4

0xeacd,	// (0x0004d048) cell_ai5_widget_pane_g5

0xead9,	// (0x0004d054) cell_ai5_widget_pane_g6

0xeae5,	// (0x0004d060) cell_ai5_widget_pane_g7

0xeb2d,	// (0x0004d0a8) cell_ai5_widget_pane_t1_ParamLimits

0xeb2d,	// (0x0004d0a8) cell_ai5_widget_pane_t1

0xeb4a,	// (0x0004d0c5) cell_ai5_widget_pane_t2_ParamLimits

0xeb4a,	// (0x0004d0c5) cell_ai5_widget_pane_t2

0xeb62,	// (0x0004d0dd) cell_ai5_widget_pane_t3_ParamLimits

0xeb62,	// (0x0004d0dd) cell_ai5_widget_pane_t3

0xeb7a,	// (0x0004d0f5) cell_ai5_widget_pane_t4_ParamLimits

0xeb7a,	// (0x0004d0f5) cell_ai5_widget_pane_t4

0xeb94,	// (0x0004d10f) cell_ai5_widget_pane_t5_ParamLimits

0xeb94,	// (0x0004d10f) cell_ai5_widget_pane_t5

0xebb3,	// (0x0004d12e) cell_ai5_widget_pane_t6_ParamLimits

0xebb3,	// (0x0004d12e) cell_ai5_widget_pane_t6

0xebc5,	// (0x0004d140) cell_ai5_widget_pane_t7_ParamLimits

0xebc5,	// (0x0004d140) cell_ai5_widget_pane_t7

0xebde,	// (0x0004d159) cell_ai5_widget_pane_t8_ParamLimits

0xebde,	// (0x0004d159) cell_ai5_widget_pane_t8

0x0009,

0x0112,	// (0x0003e68d) cell_ai5_widget_pane_t_ParamLimits

0x0112,	// (0x0003e68d) cell_ai5_widget_pane_t

0xec2a,	// (0x0004d1a5) grid_ai5_widget_pane

0x435c,	// (0x000428d7) highlight_cell_ai5_widget_pane_ParamLimits

0x435c,	// (0x000428d7) highlight_cell_ai5_widget_pane

0xc82a,	// (0x0004ada5) ai5_sk_left_pane

0xc834,	// (0x0004adaf) ai5_sk_middle_pane

0xc83e,	// (0x0004adb9) ai5_sk_right_pane

0xec42,	// (0x0004d1bd) bg_ai5_widget_pane_g1_ParamLimits

0xec42,	// (0x0004d1bd) bg_ai5_widget_pane_g1

0xec4e,	// (0x0004d1c9) bg_ai5_widget_pane_g2_ParamLimits

0xec4e,	// (0x0004d1c9) bg_ai5_widget_pane_g2

0xec5a,	// (0x0004d1d5) bg_ai5_widget_pane_g3_ParamLimits

0xec5a,	// (0x0004d1d5) bg_ai5_widget_pane_g3

0xec66,	// (0x0004d1e1) bg_ai5_widget_pane_g4_ParamLimits

0xec66,	// (0x0004d1e1) bg_ai5_widget_pane_g4

0xec72,	// (0x0004d1ed) bg_ai5_widget_pane_g5_ParamLimits

0xec72,	// (0x0004d1ed) bg_ai5_widget_pane_g5

0xec7e,	// (0x0004d1f9) bg_ai5_widget_pane_g6_ParamLimits

0xec7e,	// (0x0004d1f9) bg_ai5_widget_pane_g6

0xec8a,	// (0x0004d205) bg_ai5_widget_pane_g7_ParamLimits

0xec8a,	// (0x0004d205) bg_ai5_widget_pane_g7

0xec96,	// (0x0004d211) bg_ai5_widget_pane_g8_ParamLimits

0xec96,	// (0x0004d211) bg_ai5_widget_pane_g8

0xeca2,	// (0x0004d21d) bg_ai5_widget_pane_g9_ParamLimits

0xeca2,	// (0x0004d21d) bg_ai5_widget_pane_g9

0x0008,

0x0127,	// (0x0003e6a2) bg_ai5_widget_pane_g_ParamLimits

0x0127,	// (0x0003e6a2) bg_ai5_widget_pane_g

0xecd5,	// (0x0004d250) cell_shortcut_ai5_widget_pane_ParamLimits

0xecd5,	// (0x0004d250) cell_shortcut_ai5_widget_pane

0x1eac,	// (0x00040427) bg_cell_shortcut_ai5_widget_pane

0xece6,	// (0x0004d261) cell_grid_ai5_widget_pane_g1

0xecef,	// (0x0004d26a) highlight_cell_shortcut_ai5_widget_pane

0x56e6,	// (0x00043c61) ai5_sk_left_pane_g1

0xecf7,	// (0x0004d272) ai5_sk_left_pane_g2

0xecff,	// (0x0004d27a) ai5_sk_left_pane_g3

0xed07,	// (0x0004d282) ai5_sk_left_pane_g4

0x0003,

0xfde0,	// (0x0004e35b) ai5_sk_left_pane_g

0xed0f,	// (0x0004d28a) ai5_sk_left_pane_t1

0x56de,	// (0x00043c59) ai5_sk_right_pane_g1

0xed1d,	// (0x0004d298) ai5_sk_right_pane_g2

0xed25,	// (0x0004d2a0) ai5_sk_right_pane_g3

0xed2d,	// (0x0004d2a8) ai5_sk_right_pane_g4

0x0003,

0xfde9,	// (0x0004e364) ai5_sk_right_pane_g

0xed35,	// (0x0004d2b0) ai5_sk_right_pane_t1

0x56de,	// (0x00043c59) ai5_sk_middle_pane_g1

0x56e6,	// (0x00043c61) ai5_sk_middle_pane_g2

0x56fe,	// (0x00043c79) ai5_sk_middle_pane_g3

0xed25,	// (0x0004d2a0) ai5_sk_middle_pane_g4

0xecff,	// (0x0004d27a) ai5_sk_middle_pane_g5

0xed43,	// (0x0004d2be) ai5_sk_middle_pane_g6

0xc848,	// (0x0004adc3) ai5_sk_middle_pane_g7

0x0006,

0xfdf2,	// (0x0004e36d) ai5_sk_middle_pane_g

0xcdb4,	// (0x0004b32f) aid_touch_area_size_lc0_ParamLimits

0xcdb4,	// (0x0004b32f) aid_touch_area_size_lc0

0xaaca,	// (0x00049045) cell_hwr_candidate_pane_t1_ParamLimits

0x550e,	// (0x00043a89) aid_touch_navi_pane

0xcfcf,	// (0x0004b54a) status_dt_navi_pane_ParamLimits

0xcfcf,	// (0x0004b54a) status_dt_navi_pane

0xcfdc,	// (0x0004b557) status_dt_sta_pane_ParamLimits

0xcfdc,	// (0x0004b557) status_dt_sta_pane

0xc850,	// (0x0004adcb) dt_sta_controll_pane

0xc85d,	// (0x0004add8) dt_sta_indi_pane

0xc86a,	// (0x0004ade5) dt_sta_title_pane

0x1fa3,	// (0x0004051e) bg_dt_sta_indi_pane_ParamLimits

0x1fa3,	// (0x0004051e) bg_dt_sta_indi_pane

0xed4b,	// (0x0004d2c6) dt_sta_battery_pane

0xed53,	// (0x0004d2ce) dt_sta_indi_pane_g1

0xed5c,	// (0x0004d2d7) dt_sta_indi_pane_g2

0xed65,	// (0x0004d2e0) dt_sta_indi_pane_g3

0x0002,

0x015b,	// (0x0003e6d6) dt_sta_indi_pane_g

0xed6e,	// (0x0004d2e9) dt_sta_signal_pane

0x435c,	// (0x000428d7) bg_dt_sta_title_pane_ParamLimits

0x435c,	// (0x000428d7) bg_dt_sta_title_pane

0xed77,	// (0x0004d2f2) dt_sta_title_pane_g1

0xed7f,	// (0x0004d2fa) dt_sta_title_pane_t1_ParamLimits

0xed7f,	// (0x0004d2fa) dt_sta_title_pane_t1

0x1e00,	// (0x0004037b) bg_dt_sta_control_pane

0xed94,	// (0x0004d30f) dt_sta_controll_pane_g1

0xed9d,	// (0x0004d318) bg_dt_sta_title_pane_g1

0xeda6,	// (0x0004d321) bg_dt_sta_title_pane_g2

0xedaf,	// (0x0004d32a) bg_dt_sta_title_pane_g3

0x0002,

0x0162,	// (0x0003e6dd) bg_dt_sta_title_pane_g

0x757e,	// (0x00045af9) bg_dt_sta_indi_pane_g1

0xedb8,	// (0x0004d333) dt_sta_signal_pane_g1

0xedc0,	// (0x0004d33b) dt_sta_signal_pane_g2

0x0001,

0x0169,	// (0x0003e6e4) dt_sta_signal_pane_g

0xedc8,	// (0x0004d343) dt_sta_battery_pane_g1

0xedd1,	// (0x0004d34c) dt_sta_battery_pane_t1

0x757e,	// (0x00045af9) bg_dt_sta_control_pane_g1

0x4c00,	// (0x0004317b) fep_china_uni_eep_pane

0x4c08,	// (0x00043183) fep_china_uni_entry_pane_ParamLimits

0x4c18,	// (0x00043193) popup_fep_china_uni_window_g1_ParamLimits

0x4d3f,	// (0x000432ba) popup_fep_china_uni_window_g2_ParamLimits

0x4d3f,	// (0x000432ba) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0004dcb5) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0004dcb5) popup_fep_china_uni_window_g

0xede0,	// (0x0004d35b) fep_china_uni_eep_pane_g1

0xede8,	// (0x0004d363) fep_china_uni_eep_pane_t1

0xe9fa,	// (0x0004cf75) aid_touch_area_size_smil_player

0x55bf,	// (0x00043b3a) lc0_clock_pane

0x55fa,	// (0x00043b75) status_pane_g5_ParamLimits

0x55fa,	// (0x00043b75) status_pane_g5

0xc547,	// (0x0004aac2) popup_keymap_window

0x55d8,	// (0x00043b53) status_icon_pane

0xeaa2,	// (0x0004d01d) cell_ai5_widget_pane_g3_ParamLimits

0xeac1,	// (0x0004d03c) cell_ai5_widget_pane_g4_ParamLimits

0xeacd,	// (0x0004d048) cell_ai5_widget_pane_g5_ParamLimits

0xeaf1,	// (0x0004d06c) cell_ai5_widget_pane_g8_ParamLimits

0xeaf1,	// (0x0004d06c) cell_ai5_widget_pane_g8

0xeb05,	// (0x0004d080) cell_ai5_widget_pane_g9_ParamLimits

0xeb05,	// (0x0004d080) cell_ai5_widget_pane_g9

0xeb19,	// (0x0004d094) cell_ai5_widget_pane_g10_ParamLimits

0xeb19,	// (0x0004d094) cell_ai5_widget_pane_g10

0xedf7,	// (0x0004d372) status_icon_pane_g1

0x1e00,	// (0x0004037b) bg_popup_sub_pane_cp13

0xedff,	// (0x0004d37a) popup_keymap_window_t1

0xc403,	// (0x0004a97e) control_pane_g6_ParamLimits

0xc403,	// (0x0004a97e) control_pane_g6

0xc410,	// (0x0004a98b) control_pane_g7_ParamLimits

0xc410,	// (0x0004a98b) control_pane_g7

0xc41d,	// (0x0004a998) control_pane_g8_ParamLimits

0xc41d,	// (0x0004a998) control_pane_g8

0xc850,	// (0x0004adcb) dt_sta_controll_pane_ParamLimits

0xc85d,	// (0x0004add8) dt_sta_indi_pane_ParamLimits

0xc86a,	// (0x0004ade5) dt_sta_title_pane_ParamLimits

0x2c29,	// (0x000411a4) aid_size_touch_scroll_bar_cale

0x94a6,	// (0x00047a21) popup_discreet_window_ParamLimits

0x94a6,	// (0x00047a21) popup_discreet_window

0x952e,	// (0x00047aa9) popup_sk_window

0x5ccc,	// (0x00044247) bg_popup_sub_pane_cp28_ParamLimits

0x5ccc,	// (0x00044247) bg_popup_sub_pane_cp28

0xee0d,	// (0x0004d388) popup_discreet_window_g1_ParamLimits

0xee0d,	// (0x0004d388) popup_discreet_window_g1

0xee2d,	// (0x0004d3a8) popup_discreet_window_t1_ParamLimits

0xee2d,	// (0x0004d3a8) popup_discreet_window_t1

0xee4b,	// (0x0004d3c6) popup_discreet_window_t2_ParamLimits

0xee4b,	// (0x0004d3c6) popup_discreet_window_t2

0x0002,

0x016e,	// (0x0003e6e9) popup_discreet_window_t_ParamLimits

0x016e,	// (0x0003e6e9) popup_discreet_window_t

0xb4b5,	// (0x00049a30) popup_sk_window_g1

0xb4bf,	// (0x00049a3a) popup_sk_window_g2

0x0001,

0xfe01,	// (0x0004e37c) popup_sk_window_g

0xb4c9,	// (0x00049a44) popup_sk_window_t1

0xb4d7,	// (0x00049a52) popup_sk_window_t1_copy1

0xea92,	// (0x0004d00d) cell_ai5_widget_pane_g2_ParamLimits

0xebf0,	// (0x0004d16b) cell_ai5_widget_pane_t9_ParamLimits

0xebf0,	// (0x0004d16b) cell_ai5_widget_pane_t9

0x1e00,	// (0x0004037b) main_fep_fshwr2_pane

0xc87b,	// (0x0004adf6) aid_fshwr2_btn_pane

0xc883,	// (0x0004adfe) aid_fshwr2_syb_pane

0xc88b,	// (0x0004ae06) aid_fshwr2_txt_pane

0xc893,	// (0x0004ae0e) fshwr2_func_candi_pane

0xc89f,	// (0x0004ae1a) fshwr2_hwr_syb_pane

0xc8ab,	// (0x0004ae26) fshwr2_icf_pane

0x1e00,	// (0x0004037b) fshwr2_icf_bg_pane

0xc8b5,	// (0x0004ae30) fshwr2_icf_pane_t1_ParamLimits

0xc8b5,	// (0x0004ae30) fshwr2_icf_pane_t1

0x757e,	// (0x00045af9) fshwr2_func_candi_pane_g1

0xeeb1,	// (0x0004d42c) fshwr2_func_candi_row_pane_ParamLimits

0xeeb1,	// (0x0004d42c) fshwr2_func_candi_row_pane

0xc8cc,	// (0x0004ae47) cell_fshwr2_syb_pane_ParamLimits

0xc8cc,	// (0x0004ae47) cell_fshwr2_syb_pane

0x7711,	// (0x00045c8c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7711,	// (0x00045c8c) fshwr2_hwr_syb_pane_g1

0x1e00,	// (0x0004037b) bg_popup_call_pane_cp01

0xeec2,	// (0x0004d43d) fshwr2_func_candi_cell_pane_ParamLimits

0xeec2,	// (0x0004d43d) fshwr2_func_candi_cell_pane

0xeef3,	// (0x0004d46e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeef3,	// (0x0004d46e) fshwr2_func_candi_cell_bg_pane

0xef0d,	// (0x0004d488) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xef0d,	// (0x0004d488) fshwr2_func_candi_cell_pane_g1

0xef35,	// (0x0004d4b0) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xef35,	// (0x0004d4b0) fshwr2_func_candi_cell_pane_t1

0x1e00,	// (0x0004037b) bg_button_pane_cp08

0x517a,	// (0x000436f5) cell_fshwr2_syb_bg_pane

0xc8e6,	// (0x0004ae61) cell_fshwr2_syb_bg_pane_g1

0xc8ee,	// (0x0004ae69) cell_fshwr2_syb_bg_pane_t1

0x435c,	// (0x000428d7) main_tmo_pane

0x6710,	// (0x00044c8b) uni_indicator_pane_g1_ParamLimits

0x6725,	// (0x00044ca0) uni_indicator_pane_g2_ParamLimits

0x673b,	// (0x00044cb6) uni_indicator_pane_g3_ParamLimits

0x6751,	// (0x00044ccc) uni_indicator_pane_g4_ParamLimits

0x6751,	// (0x00044ccc) uni_indicator_pane_g4

0x6765,	// (0x00044ce0) uni_indicator_pane_g5_ParamLimits

0x6765,	// (0x00044ce0) uni_indicator_pane_g5

0x6779,	// (0x00044cf4) uni_indicator_pane_g6_ParamLimits

0x6779,	// (0x00044cf4) uni_indicator_pane_g6

0xf937,	// (0x0004deb2) uni_indicator_pane_g_ParamLimits

0xddec,	// (0x0004c367) popup_tmo_note_window_ParamLimits

0xddec,	// (0x0004c367) popup_tmo_note_window

0x1e00,	// (0x0004037b) fshwr2_bg_pane

0xef26,	// (0x0004d4a1) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xef26,	// (0x0004d4a1) fshwr2_func_candi_cell_pane_g2

0x0001,

0x017a,	// (0x0003e6f5) fshwr2_func_candi_cell_pane_g_ParamLimits

0x017a,	// (0x0003e6f5) fshwr2_func_candi_cell_pane_g

0x757e,	// (0x00045af9) bg_popup_window_pane_cp01

0xef48,	// (0x0004d4c3) bg_popup_window_pane_g1_cp01

0xef51,	// (0x0004d4cc) bg_popup_window_pane_cp22_ParamLimits

0xef51,	// (0x0004d4cc) bg_popup_window_pane_cp22

0xef5f,	// (0x0004d4da) listscroll_tmo_link_pane_ParamLimits

0xef5f,	// (0x0004d4da) listscroll_tmo_link_pane

0xef9f,	// (0x0004d51a) popup_tmo_note_window_g1_ParamLimits

0xef9f,	// (0x0004d51a) popup_tmo_note_window_g1

0xefac,	// (0x0004d527) tmo_note_info_pane_ParamLimits

0xefac,	// (0x0004d527) tmo_note_info_pane

0xc8fd,	// (0x0004ae78) list_tmo_note_info_pane_g1_ParamLimits

0xc8fd,	// (0x0004ae78) list_tmo_note_info_pane_g1

0xefc6,	// (0x0004d541) list_tmo_note_info_pane_g2_ParamLimits

0xefc6,	// (0x0004d541) list_tmo_note_info_pane_g2

0x0001,

0xfe06,	// (0x0004e381) list_tmo_note_info_pane_g_ParamLimits

0xfe06,	// (0x0004e381) list_tmo_note_info_pane_g

0xefe2,	// (0x0004d55d) list_tmo_note_info_text_pane_ParamLimits

0xefe2,	// (0x0004d55d) list_tmo_note_info_text_pane

0xf024,	// (0x0004d59f) list_tmo_link_pane

0xf031,	// (0x0004d5ac) scroll_pane_cp20

0xf03e,	// (0x0004d5b9) list_single_tmo_link_pane_ParamLimits

0xf03e,	// (0x0004d5b9) list_single_tmo_link_pane

0xf04e,	// (0x0004d5c9) list_single_tmo_link_pane_t1

0xf05c,	// (0x0004d5d7) list_tmo_note_info_text_pane_t1_ParamLimits

0xf05c,	// (0x0004d5d7) list_tmo_note_info_text_pane_t1

0xb89e,	// (0x00049e19) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb89e,	// (0x00049e19) aid_size_touch_scroll_bar_cp01

0x9cb0,	// (0x0004822b) aid_size_touch_slider_marker

0x9516,	// (0x00047a91) popup_settings_window_ParamLimits

0x9516,	// (0x00047a91) popup_settings_window

0xbc43,	// (0x0004a1be) popup_candi_list_indi_window

0x550e,	// (0x00043a89) aid_touch_navi_pane_ParamLimits

0xac90,	// (0x0004920b) rs_clock_indi_pane

0xac99,	// (0x00049214) sctrl_sk_bottom_pane_ParamLimits

0xacaa,	// (0x00049225) sctrl_sk_top_pane_ParamLimits

0xadad,	// (0x00049328) popup_fep_tooltip_window

0xea34,	// (0x0004cfaf) aid_size_cell_widget_grid_ParamLimits

0xea86,	// (0x0004d001) cell_ai5_widget_pane_g1_ParamLimits

0xea86,	// (0x0004d001) cell_ai5_widget_pane_g1

0xead9,	// (0x0004d054) cell_ai5_widget_pane_g6_ParamLimits

0xeae5,	// (0x0004d060) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x00fd,	// (0x0003e678) cell_ai5_widget_pane_g_ParamLimits

0x00fd,	// (0x0003e678) cell_ai5_widget_pane_g

0xec14,	// (0x0004d18f) cell_ai5_widget_pane_t10_ParamLimits

0xec14,	// (0x0004d18f) cell_ai5_widget_pane_t10

0xec2a,	// (0x0004d1a5) grid_ai5_widget_pane_ParamLimits

0xecae,	// (0x0004d229) cell_contacts_ai5_widget_pane_ParamLimits

0xecae,	// (0x0004d229) cell_contacts_ai5_widget_pane

0xee60,	// (0x0004d3db) popup_discreet_window_t3_ParamLimits

0xee60,	// (0x0004d3db) popup_discreet_window_t3

0xee9d,	// (0x0004d418) popup_fshwr2_char_preview_window_ParamLimits

0xee9d,	// (0x0004d418) popup_fshwr2_char_preview_window

0xc914,	// (0x0004ae8f) tmo_note_info_pane_t1

0xc929,	// (0x0004aea4) tmo_note_info_pane_t2

0xc93e,	// (0x0004aeb9) tmo_note_info_pane_t3

0xf000,	// (0x0004d57b) tmo_note_info_pane_t4

0xf012,	// (0x0004d58d) tmo_note_info_pane_t5

0x0004,

0xfe0b,	// (0x0004e386) tmo_note_info_pane_t

0xf024,	// (0x0004d59f) list_tmo_link_pane_ParamLimits

0xf031,	// (0x0004d5ac) scroll_pane_cp20_ParamLimits

0x1e00,	// (0x0004037b) bg_popup_fep_char_preview_window_cp01

0xf075,	// (0x0004d5f0) popup_fshwr2_char_preview_window_t1

0xf083,	// (0x0004d5fe) popup_candi_list_indi_window_g1

0xf08c,	// (0x0004d607) bg_cell_contacts_ai5_widget_pane

0xf098,	// (0x0004d613) cell_contacts_ai5_widget_pane_g1

0xf0ac,	// (0x0004d627) cell_contacts_ai5_widget_pane_g2

0xf0bb,	// (0x0004d636) cell_contacts_ai5_widget_pane_g3

0x0002,

0x018f,	// (0x0003e70a) cell_contacts_ai5_widget_pane_g

0xf0ce,	// (0x0004d649) cell_contacts_ai5_widget_pane_t1

0x435c,	// (0x000428d7) highlight_cell_shortcut_ai5_widget_pane_cp01

0xc9b8,	// (0x0004af33) settings_container_pane

0x517a,	// (0x000436f5) listscroll_set_pane_copy1

0x6f44,	// (0x000454bf) scroll_pane_cp121_copy1

0xf0e0,	// (0x0004d65b) set_content_pane_copy1

0xc9c4,	// (0x0004af3f) aid_height_set_list_copy1_ParamLimits

0xc9c4,	// (0x0004af3f) aid_height_set_list_copy1

0x5c8c,	// (0x00044207) aid_size_parent_copy1_ParamLimits

0x5c8c,	// (0x00044207) aid_size_parent_copy1

0xc9d0,	// (0x0004af4b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xc9d0,	// (0x0004af4b) button_value_adjust_pane_cp6_copy1

0x44b4,	// (0x00042a2f) list_highlight_pane_cp2_copy1_ParamLimits

0x44b4,	// (0x00042a2f) list_highlight_pane_cp2_copy1

0xc9e4,	// (0x0004af5f) list_set_pane_copy1_ParamLimits

0xc9e4,	// (0x0004af5f) list_set_pane_copy1

0xc953,	// (0x0004aece) main_pane_set_t1_copy1_ParamLimits

0xc953,	// (0x0004aece) main_pane_set_t1_copy1

0xc98d,	// (0x0004af08) main_pane_set_t2_copy1_ParamLimits

0xc98d,	// (0x0004af08) main_pane_set_t2_copy1

0xca91,	// (0x0004b00c) main_pane_set_t3_copy1

0xca9f,	// (0x0004b01a) main_pane_set_t4_copy1

0xc9ac,	// (0x0004af27) set_content_pane_g1_copy1_ParamLimits

0xc9ac,	// (0x0004af27) set_content_pane_g1_copy1

0xcaad,	// (0x0004b028) setting_code_pane_copy1

0xf0e8,	// (0x0004d663) setting_slider_graphic_pane_copy1

0xf0e8,	// (0x0004d663) setting_slider_pane_copy1

0xf0e8,	// (0x0004d663) setting_text_pane_copy1

0xf0f2,	// (0x0004d66d) setting_volume_pane_copy1

0xcab7,	// (0x0004b032) settings_code_pane_cp2_copy1

0xcabf,	// (0x0004b03a) settings_code_pane_cp_copy1_ParamLimits

0xcabf,	// (0x0004b03a) settings_code_pane_cp_copy1

0xcad3,	// (0x0004b04e) volume_set_pane_copy1

0xcadb,	// (0x0004b056) volume_set_pane_g10_copy1

0xcae3,	// (0x0004b05e) volume_set_pane_g1_copy1

0xcaeb,	// (0x0004b066) volume_set_pane_g2_copy1

0xcaf3,	// (0x0004b06e) volume_set_pane_g3_copy1

0xcafb,	// (0x0004b076) volume_set_pane_g4_copy1

0xcb03,	// (0x0004b07e) volume_set_pane_g5_copy1

0xcb0b,	// (0x0004b086) volume_set_pane_g6_copy1

0xcb13,	// (0x0004b08e) volume_set_pane_g7_copy1

0xcb1b,	// (0x0004b096) volume_set_pane_g8_copy1

0xcb23,	// (0x0004b09e) volume_set_pane_g9_copy1

0x1e70,	// (0x000403eb) bg_set_opt_pane_cp_copy1_ParamLimits

0x1e70,	// (0x000403eb) bg_set_opt_pane_cp_copy1

0xf0fb,	// (0x0004d676) setting_slider_pane_t1_copy1_ParamLimits

0xf0fb,	// (0x0004d676) setting_slider_pane_t1_copy1

0xcb2b,	// (0x0004b0a6) setting_slider_pane_t2_copy1_ParamLimits

0xcb2b,	// (0x0004b0a6) setting_slider_pane_t2_copy1

0xcb45,	// (0x0004b0c0) setting_slider_pane_t3_copy1_ParamLimits

0xcb45,	// (0x0004b0c0) setting_slider_pane_t3_copy1

0xcb5d,	// (0x0004b0d8) slider_set_pane_copy1_ParamLimits

0xcb5d,	// (0x0004b0d8) slider_set_pane_copy1

0x43c3,	// (0x0004293e) set_opt_bg_pane_g1_copy2

0x43cb,	// (0x00042946) set_opt_bg_pane_g2_copy2

0xf119,	// (0x0004d694) set_opt_bg_pane_g3_copy2

0x43db,	// (0x00042956) set_opt_bg_pane_g4_copy2

0x43e3,	// (0x0004295e) set_opt_bg_pane_g5_copy2

0x43eb,	// (0x00042966) set_opt_bg_pane_g6_copy2

0xcb73,	// (0x0004b0ee) set_opt_bg_pane_g7_copy2

0xf123,	// (0x0004d69e) set_opt_bg_pane_g8_copy2

0xf12d,	// (0x0004d6a8) set_opt_bg_pane_g9_copy2

0xb4e5,	// (0x00049a60) aid_size_touch_slider_mark_copy1_ParamLimits

0xb4e5,	// (0x00049a60) aid_size_touch_slider_mark_copy1

0xf137,	// (0x0004d6b2) slider_set_pane_g1_copy1

0xb4f9,	// (0x00049a74) slider_set_pane_g2_copy1

0xa6c4,	// (0x00048c3f) slider_set_pane_g3_copy1_ParamLimits

0xa6c4,	// (0x00048c3f) slider_set_pane_g3_copy1

0xa6d8,	// (0x00048c53) slider_set_pane_g4_copy1_ParamLimits

0xa6d8,	// (0x00048c53) slider_set_pane_g4_copy1

0xa6f0,	// (0x00048c6b) slider_set_pane_g5_copy1_ParamLimits

0xa6f0,	// (0x00048c6b) slider_set_pane_g5_copy1

0xa6c4,	// (0x00048c3f) slider_set_pane_g6_copy1_ParamLimits

0xa6c4,	// (0x00048c3f) slider_set_pane_g6_copy1

0xb501,	// (0x00049a7c) slider_set_pane_g7_copy1_ParamLimits

0xb501,	// (0x00049a7c) slider_set_pane_g7_copy1

0x1e14,	// (0x0004038f) bg_set_opt_pane_cp2_copy1

0xf140,	// (0x0004d6bb) setting_slider_graphic_pane_g1_copy1

0xcb7b,	// (0x0004b0f6) setting_slider_graphic_pane_t1_copy1

0xcb8b,	// (0x0004b106) setting_slider_graphic_pane_t2_copy1

0xcb9b,	// (0x0004b116) slider_set_pane_cp_copy1

0xf151,	// (0x0004d6cc) input_focus_pane_cp1_copy1

0xf15a,	// (0x0004d6d5) list_set_text_pane_copy1

0xf162,	// (0x0004d6dd) setting_text_pane_g1_copy1

0x96ad,	// (0x00047c28) set_text_pane_t1_copy1

0xf151,	// (0x0004d6cc) input_focus_pane_cp2_copy1

0xf162,	// (0x0004d6dd) setting_code_pane_g1_copy1

0xcba3,	// (0x0004b11e) setting_code_pane_t1_copy1

0xcbb1,	// (0x0004b12c) list_set_graphic_pane_copy1

0x1e14,	// (0x0004038f) bg_set_opt_pane_cp4_copy1

0xbb38,	// (0x0004a0b3) list_set_graphic_pane_g1_copy1_ParamLimits

0xbb38,	// (0x0004a0b3) list_set_graphic_pane_g1_copy1

0xcbc3,	// (0x0004b13e) list_set_graphic_pane_g2_copy1

0xbb50,	// (0x0004a0cb) list_set_graphic_pane_t1_copy1_ParamLimits

0xbb50,	// (0x0004a0cb) list_set_graphic_pane_t1_copy1

0x757e,	// (0x00045af9) rs_clock_indi_pane_g1

0xf16b,	// (0x0004d6e6) rs_clock_indi_pane_t1

0xf179,	// (0x0004d6f4) rs_indi_pane

0xf181,	// (0x0004d6fc) rs_indi_pane_g1

0xf18a,	// (0x0004d705) rs_indi_pane_g2

0xf193,	// (0x0004d70e) rs_indi_pane_g3

0x0002,

0x0196,	// (0x0003e711) rs_indi_pane_g

0x517a,	// (0x000436f5) bg_popup_preview_window_pane_cp03

0xf19c,	// (0x0004d717) popup_fep_tooltip_window_t1

0x7e67,	// (0x000463e2) popup_note2_window_g2_ParamLimits

0x7e67,	// (0x000463e2) popup_note2_window_g2

0x0001,

0xfc6e,	// (0x0004e1e9) popup_note2_window_g_ParamLimits

0xfc6e,	// (0x0004e1e9) popup_note2_window_g

0x82ee,	// (0x00046869) bg_popup_sub_pane_cp11_ParamLimits

0x82fb,	// (0x00046876) cell_ai3_links_pane_g1_ParamLimits

0x8312,	// (0x0004688d) cell_ai3_links_pane_t1

0x96ad,	// (0x00047c28) set_text_pane_t1_copy1_ParamLimits

0x5097,	// (0x00043612) cell_graphic_popup_pane_cp2_ParamLimits

0x5097,	// (0x00043612) cell_graphic_popup_pane_cp2

0xf1aa,	// (0x0004d725) cell_graphic_popup_pane_g1_cp2

0x2a3c,	// (0x00040fb7) cell_graphic_popup_pane_g2_cp2

0xf1b2,	// (0x0004d72d) cell_graphic_popup_pane_g3_cp2

0xf1ba,	// (0x0004d735) cell_graphic_popup_pane_t2_cp2

0x2a4d,	// (0x00040fc8) grid_highlight_pane_cp3_cp2

0x4959,	// (0x00042ed4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x435c,	// (0x000428d7) main_tmo_pane_ParamLimits

0xdde0,	// (0x0004c35b) popup_tmo_big_image_note_window

0xea76,	// (0x0004cff1) cell_ai5_widget_list_pane

0xea7e,	// (0x0004cff9) cell_ai5_widget_lrg_icon_pane

0xc914,	// (0x0004ae8f) tmo_note_info_pane_t1_ParamLimits

0xc929,	// (0x0004aea4) tmo_note_info_pane_t2_ParamLimits

0xc93e,	// (0x0004aeb9) tmo_note_info_pane_t3_ParamLimits

0xf000,	// (0x0004d57b) tmo_note_info_pane_t4_ParamLimits

0xf012,	// (0x0004d58d) tmo_note_info_pane_t5_ParamLimits

0xfe0b,	// (0x0004e386) tmo_note_info_pane_t_ParamLimits

0xc9b8,	// (0x0004af33) settings_container_pane_ParamLimits

0xf149,	// (0x0004d6c4) indicator_popup_pane_cp5

0xf149,	// (0x0004d6c4) indicator_popup_pane_cp6

0xcbb1,	// (0x0004b12c) list_set_graphic_pane_copy1_ParamLimits

0x1e00,	// (0x0004037b) bg_popup_window_pane_cp23

0xf1c8,	// (0x0004d743) popup_tmo_big_image_note_window_g1

0xf1d2,	// (0x0004d74d) popup_tmo_big_image_note_window_t1

0xf1e2,	// (0x0004d75d) popup_tmo_big_image_note_window_t2

0xf1f2,	// (0x0004d76d) popup_tmo_big_image_note_window_t3

0x0002,

0x019d,	// (0x0003e718) popup_tmo_big_image_note_window_t

0xf202,	// (0x0004d77d) cell_ai5_widget_lrg_icon_pane_g1

0xf20a,	// (0x0004d785) cell_ai5_widget_lrg_icon_pane_t1

0xf218,	// (0x0004d793) cell_ai5_widget_list_row_pane_ParamLimits

0xf218,	// (0x0004d793) cell_ai5_widget_list_row_pane

0xf231,	// (0x0004d7ac) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf231,	// (0x0004d7ac) cell_ai5_widget_list_row_pane_g1

0xf23e,	// (0x0004d7b9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf23e,	// (0x0004d7b9) cell_ai5_widget_list_row_pane_t1

0xf256,	// (0x0004d7d1) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf256,	// (0x0004d7d1) cell_ai5_widget_list_row_pane_t2

0x0001,

0x01a4,	// (0x0003e71f) cell_ai5_widget_list_row_pane_t_ParamLimits

0x01a4,	// (0x0003e71f) cell_ai5_widget_list_row_pane_t

0x93cd,	// (0x00047948) main_fep_vtchi_ss_pane

0xf268,	// (0x0004d7e3) popup_fep_char_pre_window

0xf270,	// (0x0004d7eb) popup_fep_ituss_window

0xf28a,	// (0x0004d805) popup_fep_vkbss_window

0xf2a8,	// (0x0004d823) grid_vkbss_keypad_pane_ParamLimits

0xf2a8,	// (0x0004d823) grid_vkbss_keypad_pane

0xf2b8,	// (0x0004d833) ituss_keypad_pane

0xf2ce,	// (0x0004d849) aid_vkbss_key_offset_ParamLimits

0xf2ce,	// (0x0004d849) aid_vkbss_key_offset

0xf2da,	// (0x0004d855) cell_vkbss_key_pane_ParamLimits

0xf2da,	// (0x0004d855) cell_vkbss_key_pane

0xf2f0,	// (0x0004d86b) bg_cell_vkbss_key_g1_ParamLimits

0xf2f0,	// (0x0004d86b) bg_cell_vkbss_key_g1

0xf2fc,	// (0x0004d877) cell_vkbss_key_3p_pane_ParamLimits

0xf2fc,	// (0x0004d877) cell_vkbss_key_3p_pane

0xf316,	// (0x0004d891) cell_vkbss_key_g1_ParamLimits

0xf316,	// (0x0004d891) cell_vkbss_key_g1

0xf330,	// (0x0004d8ab) cell_vkbss_key_t1_ParamLimits

0xf330,	// (0x0004d8ab) cell_vkbss_key_t1

0xf35b,	// (0x0004d8d6) cell_ituss_key_pane_ParamLimits

0xf35b,	// (0x0004d8d6) cell_ituss_key_pane

0xf36b,	// (0x0004d8e6) bg_cell_ituss_key_g1_ParamLimits

0xf36b,	// (0x0004d8e6) bg_cell_ituss_key_g1

0xf377,	// (0x0004d8f2) cell_ituss_key_pane_g1_ParamLimits

0xf377,	// (0x0004d8f2) cell_ituss_key_pane_g1

0xf383,	// (0x0004d8fe) cell_ituss_key_pane_g2_ParamLimits

0xf383,	// (0x0004d8fe) cell_ituss_key_pane_g2

0x0001,

0x01a9,	// (0x0003e724) cell_ituss_key_pane_g_ParamLimits

0x01a9,	// (0x0003e724) cell_ituss_key_pane_g

0xf39c,	// (0x0004d917) cell_ituss_key_t1_ParamLimits

0xf39c,	// (0x0004d917) cell_ituss_key_t1

0xf3ca,	// (0x0004d945) cell_ituss_key_t2_ParamLimits

0xf3ca,	// (0x0004d945) cell_ituss_key_t2

0xf3fb,	// (0x0004d976) cell_ituss_key_t3_ParamLimits

0xf3fb,	// (0x0004d976) cell_ituss_key_t3

0xf42c,	// (0x0004d9a7) cell_ituss_key_t4_ParamLimits

0xf42c,	// (0x0004d9a7) cell_ituss_key_t4

0x0003,

0x01ae,	// (0x0003e729) cell_ituss_key_t_ParamLimits

0x01ae,	// (0x0003e729) cell_ituss_key_t

0xf45d,	// (0x0004d9d8) cell_vkbss_key_3p_pane_g1

0xf465,	// (0x0004d9e0) cell_vkbss_key_3p_pane_g2

0xf46d,	// (0x0004d9e8) cell_vkbss_key_3p_pane_g3

0x0002,

0x01b7,	// (0x0003e732) cell_vkbss_key_3p_pane_g

0x1e00,	// (0x0004037b) bg_popup_fep_char_preview_window_cp02

0xf475,	// (0x0004d9f0) popup_fep_char_pre_window_t1

0xc820,	// (0x0004ad9b) main_ai5_sk_pane

0xf08c,	// (0x0004d607) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xf098,	// (0x0004d613) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf0ac,	// (0x0004d627) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf0bb,	// (0x0004d636) cell_contacts_ai5_widget_pane_g3_ParamLimits

0x018f,	// (0x0003e70a) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf0ce,	// (0x0004d649) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x435c,	// (0x000428d7) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xcbcb,	// (0x0004b146) main_ai5_sk_pane_g1

0x5adb,	// (0x00044056) popup_query_code_window_g1

0xf27f,	// (0x0004d7fa) popup_fep_vkb_icf_pane

0xf293,	// (0x0004d80e) popup_fep_vtchi_icf_pane

0x435c,	// (0x000428d7) bg_icf_pane

0xf2b8,	// (0x0004d833) list_vkb_icf_pane

0x435c,	// (0x000428d7) bg_icf_pane_cp01

0xf49f,	// (0x0004da1a) vtchi_icf_list_pane

0xf4af,	// (0x0004da2a) list_vkb_icf_pane_t1_ParamLimits

0xf4af,	// (0x0004da2a) list_vkb_icf_pane_t1

0xf4c6,	// (0x0004da41) vtchi_icf_list_pane_t1_ParamLimits

0xf4c6,	// (0x0004da41) vtchi_icf_list_pane_t1

0xf270,	// (0x0004d7eb) popup_fep_ituss_window_ParamLimits

0xf293,	// (0x0004d80e) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b8,	// (0x0004d833) ituss_keypad_pane_ParamLimits

0xf2c4,	// (0x0004d83f) ituss_sks_pane

0x435c,	// (0x000428d7) bg_icf_pane_ParamLimits

0xf484,	// (0x0004d9ff) icf_edit_indi_pane_ParamLimits

0xf484,	// (0x0004d9ff) icf_edit_indi_pane

0xf2b8,	// (0x0004d833) list_vkb_icf_pane_ParamLimits

0x435c,	// (0x000428d7) bg_icf_pane_cp01_ParamLimits

0xf493,	// (0x0004da0e) icf_edit_indi_pane_cp01_ParamLimits

0xf493,	// (0x0004da0e) icf_edit_indi_pane_cp01

0xf4a7,	// (0x0004da22) vtchi_query_pane

0x7711,	// (0x00045c8c) icf_edit_indi_pane_g1_ParamLimits

0x7711,	// (0x00045c8c) icf_edit_indi_pane_g1

0xf4e2,	// (0x0004da5d) icf_edit_indi_pane_g2_ParamLimits

0xf4e2,	// (0x0004da5d) icf_edit_indi_pane_g2

0x0001,

0xfe16,	// (0x0004e391) icf_edit_indi_pane_g_ParamLimits

0xfe16,	// (0x0004e391) icf_edit_indi_pane_g

0xf4ee,	// (0x0004da69) icf_edit_indi_pane_t1

0xf4fc,	// (0x0004da77) bg_input_focus_pane_cp042

0x2c20,	// (0x0004119b) vtchi_button_pane

0xf505,	// (0x0004da80) vtchi_query_pane_t1

0xf513,	// (0x0004da8e) vtchi_query_pane_t2

0xf521,	// (0x0004da9c) vtchi_query_pane_t3

0x0002,

0x01c3,	// (0x0003e73e) vtchi_query_pane_t

0x1e00,	// (0x0004037b) bg_button_pane_cp13

0xf52f,	// (0x0004daaa) vtchi_button_pane_g1

0xf537,	// (0x0004dab2) ituss_sks_pane_g1

0xf542,	// (0x0004dabd) ituss_sks_pane_g2

0x0001,

0x01ca,	// (0x0003e745) ituss_sks_pane_g

0xf54a,	// (0x0004dac5) ituss_sks_pane_t1

0xf558,	// (0x0004dad3) ituss_sks_pane_t2

0x0001,

0x01cf,	// (0x0003e74a) ituss_sks_pane_t

0x7229,	// (0x000457a4) indicator_nsta_pane_cp_g1

0x7232,	// (0x000457ad) indicator_nsta_pane_cp_g2

0x723a,	// (0x000457b5) indicator_nsta_pane_cp_g3

0x7242,	// (0x000457bd) indicator_nsta_pane_cp_g4

0x724a,	// (0x000457c5) indicator_nsta_pane_cp_g5

0x7252,	// (0x000457cd) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0004e027) indicator_nsta_pane_cp_g

0xe733,	// (0x0004ccae) cell_graphic2_pane_t2_ParamLimits

0xe733,	// (0x0004ccae) cell_graphic2_pane_t2

0x0001,

0x0086,	// (0x0003e601) cell_graphic2_pane_t_ParamLimits

0x0086,	// (0x0003e601) cell_graphic2_pane_t

0xe760,	// (0x0004ccdb) cell_graphic2_control_pane_t1

0xba40,	// (0x00049fbb) signal_pane_g3_ParamLimits

0xba40,	// (0x00049fbb) signal_pane_g3

0xba4f,	// (0x00049fca) signal_pane_g4_ParamLimits

0xba4f,	// (0x00049fca) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
