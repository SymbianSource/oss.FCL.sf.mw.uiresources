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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0003942d };

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
0x85a6,	// (0x000419d3) Screen

0x85b2,	// (0x000419df) application_window_ParamLimits

0x85b2,	// (0x000419df) application_window

0xb4ca,	// (0x000448f7) screen_g1

0x85ea,	// (0x00041a17) area_bottom_pane_ParamLimits

0x85ea,	// (0x00041a17) area_bottom_pane

0x86a8,	// (0x00041ad5) area_top_pane_ParamLimits

0x86a8,	// (0x00041ad5) area_top_pane

0x873c,	// (0x00041b69) main_pane_ParamLimits

0x873c,	// (0x00041b69) main_pane

0xb4d4,	// (0x00044901) misc_graphics

0xa384,	// (0x000437b1) battery_pane_ParamLimits

0xa384,	// (0x000437b1) battery_pane

0x28f4,	// (0x0003bd21) bg_status_flat_pane_g8

0x28fc,	// (0x0003bd29) bg_status_flat_pane_g9

0x04b6,	// (0x000398e3) context_pane_ParamLimits

0x04b6,	// (0x000398e3) context_pane

0xa4ef,	// (0x0004391c) navi_pane_ParamLimits

0xa4ef,	// (0x0004391c) navi_pane

0xa56d,	// (0x0004399a) signal_pane_ParamLimits

0xa56d,	// (0x0004399a) signal_pane

0x0008,

0xf840,	// (0x00048c6d) bg_status_flat_pane_g

0xa5fd,	// (0x00043a2a) status_pane_g1_ParamLimits

0xa5fd,	// (0x00043a2a) status_pane_g1

0xa613,	// (0x00043a40) status_pane_g2_ParamLimits

0xa613,	// (0x00043a40) status_pane_g2

0x1ef5,	// (0x0003b322) status_pane_g3_ParamLimits

0x1ef5,	// (0x0003b322) status_pane_g3

0x0004,

0xf76c,	// (0x00048b99) status_pane_g_ParamLimits

0xf76c,	// (0x00048b99) status_pane_g

0xa61f,	// (0x00043a4c) title_pane_ParamLimits

0xa61f,	// (0x00043a4c) title_pane

0xa682,	// (0x00043aaf) uni_indicator_pane_ParamLimits

0xa682,	// (0x00043aaf) uni_indicator_pane

0xc30e,	// (0x0004573b) bg_list_pane_ParamLimits

0xc30e,	// (0x0004573b) bg_list_pane

0x9b72,	// (0x00042f9f) find_pane

0x2109,	// (0x0003b536) listscroll_app_pane_ParamLimits

0x2109,	// (0x0003b536) listscroll_app_pane

0xc32e,	// (0x0004575b) listscroll_form_pane

0x9b7a,	// (0x00042fa7) listscroll_gen_pane_ParamLimits

0x9b7a,	// (0x00042fa7) listscroll_gen_pane

0xf4c5,	// (0x000488f2) listscroll_set_pane

0x3458,	// (0x0003c885) main_idle_act_pane

0xc1a2,	// (0x000455cf) main_idle_trad_pane

0xc1a2,	// (0x000455cf) main_list_empty_pane

0xba28,	// (0x00044e55) main_midp_pane

0xc348,	// (0x00045775) main_pane_g1_ParamLimits

0xc348,	// (0x00045775) main_pane_g1

0x9b8e,	// (0x00042fbb) popup_ai_message_window_ParamLimits

0x9b8e,	// (0x00042fbb) popup_ai_message_window

0x9c3f,	// (0x0004306c) popup_fep_china_uni_window_ParamLimits

0x9c3f,	// (0x0004306c) popup_fep_china_uni_window

0x9c99,	// (0x000430c6) popup_fep_japan_candidate_window_ParamLimits

0x9c99,	// (0x000430c6) popup_fep_japan_candidate_window

0x9cb7,	// (0x000430e4) popup_fep_japan_predictive_window_ParamLimits

0x9cb7,	// (0x000430e4) popup_fep_japan_predictive_window

0x9cc9,	// (0x000430f6) popup_find_window

0x9ce6,	// (0x00043113) popup_grid_graphic_window_ParamLimits

0x9ce6,	// (0x00043113) popup_grid_graphic_window

0xf503,	// (0x00048930) popup_large_graphic_colour_window

0x9d84,	// (0x000431b1) popup_menu_window_ParamLimits

0x9d84,	// (0x000431b1) popup_menu_window

0x9f56,	// (0x00043383) popup_note_image_window

0x9f1c,	// (0x00043349) popup_note_wait_window_ParamLimits

0x9f1c,	// (0x00043349) popup_note_wait_window

0x9f6e,	// (0x0004339b) popup_note_window_ParamLimits

0x9f6e,	// (0x0004339b) popup_note_window

0xa01d,	// (0x0004344a) popup_query_code_window_ParamLimits

0xa01d,	// (0x0004344a) popup_query_code_window

0xa057,	// (0x00043484) popup_query_data_code_window_ParamLimits

0xa057,	// (0x00043484) popup_query_data_code_window

0xa074,	// (0x000434a1) popup_query_data_window_ParamLimits

0xa074,	// (0x000434a1) popup_query_data_window

0xa0f6,	// (0x00043523) popup_query_sat_info_window_ParamLimits

0xa0f6,	// (0x00043523) popup_query_sat_info_window

0xa18d,	// (0x000435ba) popup_snote_single_graphic_window_ParamLimits

0xa18d,	// (0x000435ba) popup_snote_single_graphic_window

0xa18d,	// (0x000435ba) popup_snote_single_text_window_ParamLimits

0xa18d,	// (0x000435ba) popup_snote_single_text_window

0x022d,	// (0x0003965a) popup_sub_window_general

0xa2ea,	// (0x00043717) popup_window_general_ParamLimits

0xa2ea,	// (0x00043717) popup_window_general

0x0372,	// (0x0003979f) power_save_pane

0x99cc,	// (0x00042df9) control_pane_g1_ParamLimits

0x99cc,	// (0x00042df9) control_pane_g1

0x99f5,	// (0x00042e22) control_pane_g2_ParamLimits

0x99f5,	// (0x00042e22) control_pane_g2

0xc2f8,	// (0x00045725) control_pane_g3_ParamLimits

0xc2f8,	// (0x00045725) control_pane_g3

0x0007,

0xf754,	// (0x00048b81) control_pane_g_ParamLimits

0xf754,	// (0x00048b81) control_pane_g

0x9a5d,	// (0x00042e8a) control_pane_t1_ParamLimits

0x9a5d,	// (0x00042e8a) control_pane_t1

0x9ac5,	// (0x00042ef2) control_pane_t2_ParamLimits

0x9ac5,	// (0x00042ef2) control_pane_t2

0x0002,

0xf765,	// (0x00048b92) control_pane_t_ParamLimits

0xf765,	// (0x00048b92) control_pane_t

0x9943,	// (0x00042d70) navi_navi_volume_pane_cp1

0x994b,	// (0x00042d78) status_small_icon_pane

0xc2a4,	// (0x000456d1) status_small_pane_g1_ParamLimits

0xc2a4,	// (0x000456d1) status_small_pane_g1

0x9953,	// (0x00042d80) status_small_pane_g2_ParamLimits

0x9953,	// (0x00042d80) status_small_pane_g2

0xc2d8,	// (0x00045705) status_small_pane_g3_ParamLimits

0xc2d8,	// (0x00045705) status_small_pane_g3

0x995f,	// (0x00042d8c) status_small_pane_g4_ParamLimits

0x995f,	// (0x00042d8c) status_small_pane_g4

0x996d,	// (0x00042d9a) status_small_pane_g5_ParamLimits

0x996d,	// (0x00042d9a) status_small_pane_g5

0x997b,	// (0x00042da8) status_small_pane_g6_ParamLimits

0x997b,	// (0x00042da8) status_small_pane_g6

0x0007,

0xf743,	// (0x00048b70) status_small_pane_g_ParamLimits

0xf743,	// (0x00048b70) status_small_pane_g

0x9996,	// (0x00042dc3) status_small_pane_t1

0x99b8,	// (0x00042de5) status_small_wait_pane_ParamLimits

0x99b8,	// (0x00042de5) status_small_wait_pane

0x9659,	// (0x00042a86) aid_levels_signal_ParamLimits

0x9659,	// (0x00042a86) aid_levels_signal

0x9671,	// (0x00042a9e) signal_pane_g1_ParamLimits

0x9671,	// (0x00042a9e) signal_pane_g1

0x968c,	// (0x00042ab9) signal_pane_g2_ParamLimits

0x968c,	// (0x00042ab9) signal_pane_g2

0x0003,

0xf6d4,	// (0x00048b01) signal_pane_g_ParamLimits

0xf6d4,	// (0x00048b01) signal_pane_g

0xbd90,	// (0x000451bd) context_pane_g1

0x8937,	// (0x00041d64) title_pane_g1

0x896e,	// (0x00041d9b) title_pane_t1

0xb4ea,	// (0x00044917) title_pane_t2

0xb510,	// (0x0004493d) title_pane_t3

0x0002,

0xf532,	// (0x0004895f) title_pane_t

0xa6aa,	// (0x00043ad7) aid_levels_battery_ParamLimits

0xa6aa,	// (0x00043ad7) aid_levels_battery

0xa6c6,	// (0x00043af3) battery_pane_g1_ParamLimits

0xa6c6,	// (0x00043af3) battery_pane_g1

0xa6e3,	// (0x00043b10) battery_pane_g2_ParamLimits

0xa6e3,	// (0x00043b10) battery_pane_g2

0x0001,

0xf777,	// (0x00048ba4) battery_pane_g_ParamLimits

0xf777,	// (0x00048ba4) battery_pane_g

0xc717,	// (0x00045b44) uni_indicator_pane_g1

0xc72d,	// (0x00045b5a) uni_indicator_pane_g2

0xc743,	// (0x00045b70) uni_indicator_pane_g3

0x0005,

0xf8e8,	// (0x00048d15) uni_indicator_pane_g

0xc039,	// (0x00045466) navi_icon_pane_ParamLimits

0xc039,	// (0x00045466) navi_icon_pane

0xbf82,	// (0x000453af) navi_midp_pane

0xc055,	// (0x00045482) navi_navi_pane

0xc05f,	// (0x0004548c) navi_text_pane_ParamLimits

0xc05f,	// (0x0004548c) navi_text_pane

0xb4ca,	// (0x000448f7) status_small_wait_pane_g1

0xb761,	// (0x00044b8e) status_small_wait_pane_g2

0x0001,

0xf8e3,	// (0x00048d10) status_small_wait_pane_g

0xc670,	// (0x00045a9d) navi_navi_icon_text_pane

0x2f47,	// (0x0003c374) navi_navi_pane_g1_ParamLimits

0x2f47,	// (0x0003c374) navi_navi_pane_g1

0x2f59,	// (0x0003c386) navi_navi_pane_g2_ParamLimits

0x2f59,	// (0x0003c386) navi_navi_pane_g2

0x0001,

0xf8b1,	// (0x00048cde) navi_navi_pane_g_ParamLimits

0xf8b1,	// (0x00048cde) navi_navi_pane_g

0x2f6b,	// (0x0003c398) navi_navi_tabs_pane

0x2f74,	// (0x0003c3a1) navi_navi_text_pane

0xc670,	// (0x00045a9d) navi_navi_volume_pane

0x2f1b,	// (0x0003c348) navi_text_pane_t1

0x2f0f,	// (0x0003c33c) navi_icon_pane_g1

0x2e62,	// (0x0003c28f) navi_navi_text_pane_t1

0xa9a8,	// (0x00043dd5) navi_navi_volume_pane_g1

0x096b,	// (0x00039d98) volume_small_pane

0x2dc8,	// (0x0003c1f5) navi_navi_icon_text_pane_g1

0xc5c8,	// (0x000459f5) navi_navi_icon_text_pane_t1

0xc055,	// (0x00045482) navi_tabs_2_long_pane

0xc055,	// (0x00045482) navi_tabs_2_pane

0xc055,	// (0x00045482) navi_tabs_3_long_pane

0xc055,	// (0x00045482) navi_tabs_3_pane

0xc055,	// (0x00045482) navi_tabs_4_pane

0x0943,	// (0x00039d70) tabs_2_active_pane_ParamLimits

0x0943,	// (0x00039d70) tabs_2_active_pane

0x0953,	// (0x00039d80) tabs_2_passive_pane_ParamLimits

0x0953,	// (0x00039d80) tabs_2_passive_pane

0x0911,	// (0x00039d3e) tabs_3_active_pane_ParamLimits

0x0911,	// (0x00039d3e) tabs_3_active_pane

0x0921,	// (0x00039d4e) tabs_3_passive_pane_ParamLimits

0x0921,	// (0x00039d4e) tabs_3_passive_pane

0x0932,	// (0x00039d5f) tabs_3_passive_pane_cp_ParamLimits

0x0932,	// (0x00039d5f) tabs_3_passive_pane_cp

0x08cd,	// (0x00039cfa) tabs_4_active_pane_ParamLimits

0x08cd,	// (0x00039cfa) tabs_4_active_pane

0x08de,	// (0x00039d0b) tabs_4_passive_pane_ParamLimits

0x08de,	// (0x00039d0b) tabs_4_passive_pane

0x08ef,	// (0x00039d1c) tabs_4_passive_pane_cp_ParamLimits

0x08ef,	// (0x00039d1c) tabs_4_passive_pane_cp

0x0900,	// (0x00039d2d) tabs_4_passive_pane_cp2_ParamLimits

0x0900,	// (0x00039d2d) tabs_4_passive_pane_cp2

0x08a9,	// (0x00039cd6) tabs_2_long_active_pane_ParamLimits

0x08a9,	// (0x00039cd6) tabs_2_long_active_pane

0x08bb,	// (0x00039ce8) tabs_2_long_passive_pane_ParamLimits

0x08bb,	// (0x00039ce8) tabs_2_long_passive_pane

0x0864,	// (0x00039c91) tabs_3_long_active_pane_ParamLimits

0x0864,	// (0x00039c91) tabs_3_long_active_pane

0x087d,	// (0x00039caa) tabs_3_long_passive_pane_ParamLimits

0x087d,	// (0x00039caa) tabs_3_long_passive_pane

0x0890,	// (0x00039cbd) tabs_3_long_passive_pane_cp_ParamLimits

0x0890,	// (0x00039cbd) tabs_3_long_passive_pane_cp

0x080a,	// (0x00039c37) volume_small_pane_g1

0x0813,	// (0x00039c40) volume_small_pane_g2

0x081c,	// (0x00039c49) volume_small_pane_g3

0x0825,	// (0x00039c52) volume_small_pane_g4

0x082e,	// (0x00039c5b) volume_small_pane_g5

0x0837,	// (0x00039c64) volume_small_pane_g6

0x0840,	// (0x00039c6d) volume_small_pane_g7

0x0849,	// (0x00039c76) volume_small_pane_g8

0x0852,	// (0x00039c7f) volume_small_pane_g9

0x085b,	// (0x00039c88) volume_small_pane_g10

0x0009,

0xf87d,	// (0x00048caa) volume_small_pane_g

0xb522,	// (0x0004494f) bg_active_tab_pane_cp2_ParamLimits

0xb522,	// (0x0004494f) bg_active_tab_pane_cp2

0x89fa,	// (0x00041e27) tabs_3_active_pane_g1

0x8a02,	// (0x00041e2f) tabs_3_active_pane_t1

0xb522,	// (0x0004494f) bg_passive_tab_pane_cp2_ParamLimits

0xb522,	// (0x0004494f) bg_passive_tab_pane_cp2

0x89fa,	// (0x00041e27) tabs_3_passive_pane_g1

0x8a02,	// (0x00041e2f) tabs_3_passive_pane_t1

0xb522,	// (0x0004494f) bg_active_tab_pane_cp3_ParamLimits

0xb522,	// (0x0004494f) bg_active_tab_pane_cp3

0x8a14,	// (0x00041e41) tabs_4_active_pane_g1

0x8a1c,	// (0x00041e49) tabs_4_active_pane_t1

0xb522,	// (0x0004494f) bg_passive_tab_pane_cp3_ParamLimits

0xb522,	// (0x0004494f) bg_passive_tab_pane_cp3

0x8a14,	// (0x00041e41) tabs_4_1_passive_pane_g1

0x8a1c,	// (0x00041e49) tabs_4_1_passive_pane_t1

0xba28,	// (0x00044e55) list_highlight_pane_cp2

0xc851,	// (0x00045c7e) list_set_pane_ParamLimits

0xc851,	// (0x00045c7e) list_set_pane

0xc8eb,	// (0x00045d18) main_pane_set_t1_ParamLimits

0xc8eb,	// (0x00045d18) main_pane_set_t1

0xc90b,	// (0x00045d38) main_pane_set_t2_ParamLimits

0xc90b,	// (0x00045d38) main_pane_set_t2

0xc91f,	// (0x00045d4c) main_pane_set_t3_ParamLimits

0xc91f,	// (0x00045d4c) main_pane_set_t3

0xc931,	// (0x00045d5e) main_pane_set_t4_ParamLimits

0xc931,	// (0x00045d5e) main_pane_set_t4

0x0003,

0xf94d,	// (0x00048d7a) main_pane_set_t_ParamLimits

0xf94d,	// (0x00048d7a) main_pane_set_t

0xc943,	// (0x00045d70) setting_code_pane

0xc94d,	// (0x00045d7a) setting_slider_graphic_pane

0xc94d,	// (0x00045d7a) setting_slider_pane

0xc94d,	// (0x00045d7a) setting_text_pane

0xc94d,	// (0x00045d7a) setting_volume_pane

0x8a2e,	// (0x00041e5b) volume_set_pane

0xb530,	// (0x0004495d) bg_set_opt_pane_cp

0x8a36,	// (0x00041e63) setting_slider_pane_t1

0x8a4f,	// (0x00041e7c) setting_slider_pane_t2

0x8a69,	// (0x00041e96) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00048966) setting_slider_pane_t

0x8a81,	// (0x00041eae) slider_set_pane

0xb4d4,	// (0x00044901) bg_set_opt_pane_cp2

0xb53e,	// (0x0004496b) setting_slider_graphic_pane_g1

0x8a97,	// (0x00041ec4) setting_slider_graphic_pane_t1

0x8aa7,	// (0x00041ed4) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0004896d) setting_slider_graphic_pane_t

0x8ab7,	// (0x00041ee4) slider_set_pane_cp

0xb4d4,	// (0x00044901) input_focus_pane_cp1

0x343f,	// (0x0003c86c) list_set_text_pane

0xb4ca,	// (0x000448f7) setting_text_pane_g1

0xb4d4,	// (0x00044901) input_focus_pane_cp2

0xb4ca,	// (0x000448f7) setting_code_pane_g1

0xb547,	// (0x00044974) setting_code_pane_t1

0xdb29,	// (0x00046f56) set_text_pane_t1_ParamLimits

0xdb29,	// (0x00046f56) set_text_pane_t1

0xb93e,	// (0x00044d6b) set_opt_bg_pane_g1

0xb946,	// (0x00044d73) set_opt_bg_pane_g2

0xc806,	// (0x00045c33) set_opt_bg_pane_g3

0xb956,	// (0x00044d83) set_opt_bg_pane_g4

0xb95e,	// (0x00044d8b) set_opt_bg_pane_g5

0xb966,	// (0x00044d93) set_opt_bg_pane_g6

0xc810,	// (0x00045c3d) set_opt_bg_pane_g7

0xc818,	// (0x00045c45) set_opt_bg_pane_g8

0xc822,	// (0x00045c4f) set_opt_bg_pane_g9

0x0008,

0xf93a,	// (0x00048d67) set_opt_bg_pane_g

0xc7f9,	// (0x00045c26) slider_set_pane_g1

0x09ea,	// (0x00039e17) slider_set_pane_g2

0x0006,

0xf92b,	// (0x00048d58) slider_set_pane_g

0xa9b0,	// (0x00043ddd) volume_set_pane_g1

0xa9b8,	// (0x00043de5) volume_set_pane_g2

0xa9c0,	// (0x00043ded) volume_set_pane_g3

0xa9c8,	// (0x00043df5) volume_set_pane_g4

0xa9d0,	// (0x00043dfd) volume_set_pane_g5

0xa9d8,	// (0x00043e05) volume_set_pane_g6

0xa9e0,	// (0x00043e0d) volume_set_pane_g7

0xa9e8,	// (0x00043e15) volume_set_pane_g8

0xa9f0,	// (0x00043e1d) volume_set_pane_g9

0xa9f8,	// (0x00043e25) volume_set_pane_g10

0x0009,

0xf903,	// (0x00048d30) volume_set_pane_g

0x8abf,	// (0x00041eec) indicator_pane_ParamLimits

0x8abf,	// (0x00041eec) indicator_pane

0x8ae7,	// (0x00041f14) main_idle_pane_g2_ParamLimits

0x8ae7,	// (0x00041f14) main_idle_pane_g2

0x8b1f,	// (0x00041f4c) main_pane_idle_g1_ParamLimits

0x8b1f,	// (0x00041f4c) main_pane_idle_g1

0xb555,	// (0x00044982) popup_clock_digital_analogue_window_ParamLimits

0xb555,	// (0x00044982) popup_clock_digital_analogue_window

0x8b46,	// (0x00041f73) soft_indicator_pane_ParamLimits

0x8b46,	// (0x00041f73) soft_indicator_pane

0x8b6a,	// (0x00041f97) wallpaper_pane_ParamLimits

0x8b6a,	// (0x00041f97) wallpaper_pane

0xb4ca,	// (0x000448f7) wallpaper_pane_g1

0x8b7c,	// (0x00041fa9) indicator_pane_g1_ParamLimits

0x8b7c,	// (0x00041fa9) indicator_pane_g1

0x3852,	// (0x0003cc7f) navi_navi_icon_text_pane_srt_g1

0xb583,	// (0x000449b0) soft_indicator_pane_t1

0xb59d,	// (0x000449ca) aid_ps_area_pane

0x8b92,	// (0x00041fbf) aid_ps_clock_pane

0xb5ae,	// (0x000449db) aid_ps_indicator_pane

0xb5ba,	// (0x000449e7) indicator_ps_pane_ParamLimits

0xb5ba,	// (0x000449e7) indicator_ps_pane

0xb5c9,	// (0x000449f6) power_save_pane_g1_ParamLimits

0xb5c9,	// (0x000449f6) power_save_pane_g1

0xb5d5,	// (0x00044a02) power_save_pane_g2_ParamLimits

0xb5d5,	// (0x00044a02) power_save_pane_g2

0xdaff,	// (0x00046f2c) aid_navinavi_width_pane

0xb59d,	// (0x000449ca) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00048972) power_save_pane_g_ParamLimits

0xf545,	// (0x00048972) power_save_pane_g

0xb5e3,	// (0x00044a10) power_save_pane_t1_ParamLimits

0xb5e3,	// (0x00044a10) power_save_pane_t1

0x8b92,	// (0x00041fbf) aid_ps_clock_pane_ParamLimits

0xb5ae,	// (0x000449db) aid_ps_indicator_pane_ParamLimits

0xb5f5,	// (0x00044a22) power_save_pane_t4_ParamLimits

0xb5f5,	// (0x00044a22) power_save_pane_t4

0x0001,

0xf54a,	// (0x00048977) power_save_pane_t_ParamLimits

0xf54a,	// (0x00048977) power_save_pane_t

0xb61f,	// (0x00044a4c) power_save_t3_ParamLimits

0xb61f,	// (0x00044a4c) power_save_t3

0xb60a,	// (0x00044a37) power_save_t2_ParamLimits

0xb60a,	// (0x00044a37) power_save_t2

0xb634,	// (0x00044a61) indicator_ps_pane_g1

0x8ba0,	// (0x00041fcd) ai_gene_pane_ParamLimits

0x8ba0,	// (0x00041fcd) ai_gene_pane

0x8bb7,	// (0x00041fe4) ai_links_pane_ParamLimits

0x8bb7,	// (0x00041fe4) ai_links_pane

0x8bcf,	// (0x00041ffc) indicator_pane_cp1_ParamLimits

0x8bcf,	// (0x00041ffc) indicator_pane_cp1

0x8bde,	// (0x0004200b) main_pane_idle_g1_cp_ParamLimits

0x8bde,	// (0x0004200b) main_pane_idle_g1_cp

0x8bf6,	// (0x00042023) popup_ai_links_title_window

0x8bff,	// (0x0004202c) soft_indicator_pane_cp1_ParamLimits

0x8bff,	// (0x0004202c) soft_indicator_pane_cp1

0x3206,	// (0x0003c633) ai_links_pane_g1

0x320f,	// (0x0003c63c) grid_ai_links_pane

0xc70e,	// (0x00045b3b) ai_gene_pane_1

0x31f4,	// (0x0003c621) ai_gene_pane_2

0x31fd,	// (0x0003c62a) list_highlight_pane_cp4

0xc6ea,	// (0x00045b17) cell_ai_link_pane_ParamLimits

0xc6ea,	// (0x00045b17) cell_ai_link_pane

0x31c5,	// (0x0003c5f2) cell_ai_link_pane_g1

0xb761,	// (0x00044b8e) cell_ai_link_pane_g2

0x0001,

0xf8de,	// (0x00048d0b) cell_ai_link_pane_g

0xb4d4,	// (0x00044901) grid_highlight_cp2

0xb4d4,	// (0x00044901) bg_popup_sub_pane_cp1

0xb64b,	// (0x00044a78) popup_ai_links_title_window_t1

0x3115,	// (0x0003c542) ai_gene_pane_1_g1_ParamLimits

0x3115,	// (0x0003c542) ai_gene_pane_1_g1

0x3121,	// (0x0003c54e) ai_gene_pane_1_g2_ParamLimits

0x3121,	// (0x0003c54e) ai_gene_pane_1_g2

0x0001,

0xf8d4,	// (0x00048d01) ai_gene_pane_1_g_ParamLimits

0xf8d4,	// (0x00048d01) ai_gene_pane_1_g

0x312e,	// (0x0003c55b) ai_gene_pane_1_t1_ParamLimits

0x312e,	// (0x0003c55b) ai_gene_pane_1_t1

0x3162,	// (0x0003c58f) grid_ai_soft_ind_pane

0x3100,	// (0x0003c52d) ai_gene_pane_2_t1_ParamLimits

0x3100,	// (0x0003c52d) ai_gene_pane_2_t1

0x8c13,	// (0x00042040) main_pane_empty_t1_ParamLimits

0x8c13,	// (0x00042040) main_pane_empty_t1

0x8c2b,	// (0x00042058) main_pane_empty_t2_ParamLimits

0x8c2b,	// (0x00042058) main_pane_empty_t2

0x8c40,	// (0x0004206d) main_pane_empty_t3_ParamLimits

0x8c40,	// (0x0004206d) main_pane_empty_t3

0x8c52,	// (0x0004207f) main_pane_empty_t4_ParamLimits

0x8c52,	// (0x0004207f) main_pane_empty_t4

0x8c64,	// (0x00042091) main_pane_empty_t5_ParamLimits

0x8c64,	// (0x00042091) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0004897c) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0004897c) main_pane_empty_t

0xb9c3,	// (0x00044df0) bg_popup_window_pane_ParamLimits

0xb9c3,	// (0x00044df0) bg_popup_window_pane

0xc664,	// (0x00045a91) find_popup_pane_cp2_ParamLimits

0xc664,	// (0x00045a91) find_popup_pane_cp2

0x2e7c,	// (0x0003c2a9) heading_pane_ParamLimits

0x2e7c,	// (0x0003c2a9) heading_pane

0xb4d4,	// (0x00044901) bg_popup_sub_pane

0xc5e5,	// (0x00045a12) bg_popup_window_pane_g1_ParamLimits

0xc5e5,	// (0x00045a12) bg_popup_window_pane_g1

0xc5f4,	// (0x00045a21) bg_popup_window_pane_g2_ParamLimits

0xc5f4,	// (0x00045a21) bg_popup_window_pane_g2

0xc600,	// (0x00045a2d) bg_popup_window_pane_g3_ParamLimits

0xc600,	// (0x00045a2d) bg_popup_window_pane_g3

0xc60c,	// (0x00045a39) bg_popup_window_pane_g4_ParamLimits

0xc60c,	// (0x00045a39) bg_popup_window_pane_g4

0xc61b,	// (0x00045a48) bg_popup_window_pane_g5_ParamLimits

0xc61b,	// (0x00045a48) bg_popup_window_pane_g5

0xc62b,	// (0x00045a58) bg_popup_window_pane_g6_ParamLimits

0xc62b,	// (0x00045a58) bg_popup_window_pane_g6

0xc637,	// (0x00045a64) bg_popup_window_pane_g7_ParamLimits

0xc637,	// (0x00045a64) bg_popup_window_pane_g7

0xc646,	// (0x00045a73) bg_popup_window_pane_g8_ParamLimits

0xc646,	// (0x00045a73) bg_popup_window_pane_g8

0xc655,	// (0x00045a82) bg_popup_window_pane_g9_ParamLimits

0xc655,	// (0x00045a82) bg_popup_window_pane_g9

0x2e56,	// (0x0003c283) bg_popup_window_pane_g10_ParamLimits

0x2e56,	// (0x0003c283) bg_popup_window_pane_g10

0x0009,

0xf89c,	// (0x00048cc9) bg_popup_window_pane_g_ParamLimits

0xf89c,	// (0x00048cc9) bg_popup_window_pane_g

0x2d7f,	// (0x0003c1ac) bg_popup_heading_pane_ParamLimits

0x2d7f,	// (0x0003c1ac) bg_popup_heading_pane

0x0b3b,	// (0x00039f68) tabs_4_passive_pane_cp_srt_ParamLimits

0x0b3b,	// (0x00039f68) tabs_4_passive_pane_cp_srt

0x0b4d,	// (0x00039f7a) tabs_4_passive_pane_srt_ParamLimits

0x2d93,	// (0x0003c1c0) heading_pane_g2

0x0b4d,	// (0x00039f7a) tabs_4_passive_pane_srt

0x2109,	// (0x0003b536) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2109,	// (0x0003b536) bg_passive_tab_pane_cp3_srt

0x2d9b,	// (0x0003c1c8) heading_pane_t1_ParamLimits

0x2d9b,	// (0x0003c1c8) heading_pane_t1

0x2db2,	// (0x0003c1df) heading_pane_t2_ParamLimits

0x2db2,	// (0x0003c1df) heading_pane_t2

0x0001,

0xf897,	// (0x00048cc4) heading_pane_t_ParamLimits

0xf897,	// (0x00048cc4) heading_pane_t

0x28bc,	// (0x0003bce9) bg_popup_heading_pane_g1

0x296b,	// (0x0003bd98) bg_popup_heading_pane_g2

0x2975,	// (0x0003bda2) bg_popup_heading_pane_g3

0x297f,	// (0x0003bdac) bg_popup_heading_pane_g4

0x2989,	// (0x0003bdb6) bg_popup_heading_pane_g5

0x2993,	// (0x0003bdc0) bg_popup_heading_pane_g6

0x299b,	// (0x0003bdc8) bg_popup_heading_pane_g7

0x29a3,	// (0x0003bdd0) bg_popup_heading_pane_g8

0x29ad,	// (0x0003bdda) bg_popup_heading_pane_g9

0x0008,

0xf853,	// (0x00048c80) bg_popup_heading_pane_g

0x207d,	// (0x0003b4aa) bg_popup_sub_pane_g1

0x208d,	// (0x0003b4ba) bg_popup_sub_pane_g2

0x2085,	// (0x0003b4b2) bg_popup_sub_pane_g3

0x209d,	// (0x0003b4ca) bg_popup_sub_pane_g4

0x2095,	// (0x0003b4c2) bg_popup_sub_pane_g5

0x20a5,	// (0x0003b4d2) bg_popup_sub_pane_g6

0x20ad,	// (0x0003b4da) bg_popup_sub_pane_g7

0x20bd,	// (0x0003b4ea) bg_popup_sub_pane_g8

0x20b5,	// (0x0003b4e2) bg_popup_sub_pane_g9

0x0008,

0xf82d,	// (0x00048c5a) bg_popup_sub_pane_g

0xb522,	// (0x0004494f) bg_popup_window_pane_cp5_ParamLimits

0xb522,	// (0x0004494f) bg_popup_window_pane_cp5

0xb668,	// (0x00044a95) popup_note_window_g1_ParamLimits

0xb668,	// (0x00044a95) popup_note_window_g1

0xb674,	// (0x00044aa1) popup_note_window_t1_ParamLimits

0xb674,	// (0x00044aa1) popup_note_window_t1

0xb68a,	// (0x00044ab7) popup_note_window_t2_ParamLimits

0xb68a,	// (0x00044ab7) popup_note_window_t2

0xb6a0,	// (0x00044acd) popup_note_window_t3_ParamLimits

0xb6a0,	// (0x00044acd) popup_note_window_t3

0xb6b6,	// (0x00044ae3) popup_note_window_t4_ParamLimits

0xb6b6,	// (0x00044ae3) popup_note_window_t4

0xb6de,	// (0x00044b0b) popup_note_window_t5_ParamLimits

0xb6de,	// (0x00044b0b) popup_note_window_t5

0x0004,

0xf55a,	// (0x00048987) popup_note_window_t_ParamLimits

0xf55a,	// (0x00048987) popup_note_window_t

0xb702,	// (0x00044b2f) bg_popup_window_pane_cp6_ParamLimits

0xb702,	// (0x00044b2f) bg_popup_window_pane_cp6

0x2838,	// (0x0003bc65) popup_note_image_window_g1_ParamLimits

0x2838,	// (0x0003bc65) popup_note_image_window_g1

0xc48a,	// (0x000458b7) popup_note_image_window_g2_ParamLimits

0xc48a,	// (0x000458b7) popup_note_image_window_g2

0x0001,

0xf821,	// (0x00048c4e) popup_note_image_window_g_ParamLimits

0xf821,	// (0x00048c4e) popup_note_image_window_g

0x285d,	// (0x0003bc8a) popup_note_image_window_t1_ParamLimits

0x285d,	// (0x0003bc8a) popup_note_image_window_t1

0x2876,	// (0x0003bca3) popup_note_image_window_t2_ParamLimits

0x2876,	// (0x0003bca3) popup_note_image_window_t2

0x288f,	// (0x0003bcbc) popup_note_image_window_t3_ParamLimits

0x288f,	// (0x0003bcbc) popup_note_image_window_t3

0x0002,

0xf826,	// (0x00048c53) popup_note_image_window_t_ParamLimits

0xf826,	// (0x00048c53) popup_note_image_window_t

0x2701,	// (0x0003bb2e) bg_popup_window_pane_cp7_ParamLimits

0x2701,	// (0x0003bb2e) bg_popup_window_pane_cp7

0x2731,	// (0x0003bb5e) popup_note_wait_window_g1_ParamLimits

0x2731,	// (0x0003bb5e) popup_note_wait_window_g1

0x273d,	// (0x0003bb6a) popup_note_wait_window_g2_ParamLimits

0x273d,	// (0x0003bb6a) popup_note_wait_window_g2

0x0002,

0xf80f,	// (0x00048c3c) popup_note_wait_window_g_ParamLimits

0xf80f,	// (0x00048c3c) popup_note_wait_window_g

0x2755,	// (0x0003bb82) popup_note_wait_window_t1_ParamLimits

0x2755,	// (0x0003bb82) popup_note_wait_window_t1

0xc42b,	// (0x00045858) popup_note_wait_window_t2_ParamLimits

0xc42b,	// (0x00045858) popup_note_wait_window_t2

0xc448,	// (0x00045875) popup_note_wait_window_t3_ParamLimits

0xc448,	// (0x00045875) popup_note_wait_window_t3

0xc45b,	// (0x00045888) popup_note_wait_window_t4_ParamLimits

0xc45b,	// (0x00045888) popup_note_wait_window_t4

0x0004,

0xf816,	// (0x00048c43) popup_note_wait_window_t_ParamLimits

0xf816,	// (0x00048c43) popup_note_wait_window_t

0x27d1,	// (0x0003bbfe) wait_bar_pane_ParamLimits

0x27d1,	// (0x0003bbfe) wait_bar_pane

0xb4d4,	// (0x00044901) wait_anim_pane

0xb4d4,	// (0x00044901) wait_border_pane

0xb4ca,	// (0x000448f7) wait_anim_pane_g1

0xb4ca,	// (0x000448f7) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x00048afc) wait_anim_pane_g

0x26ad,	// (0x0003bada) wait_border_pane_g1

0x26b8,	// (0x0003bae5) wait_border_pane_g2

0x26c1,	// (0x0003baee) wait_border_pane_g3

0x0002,

0xf808,	// (0x00048c35) wait_border_pane_g

0x2518,	// (0x0003b945) bg_popup_window_pane_cp16_ParamLimits

0x2518,	// (0x0003b945) bg_popup_window_pane_cp16

0xc3db,	// (0x00045808) indicator_popup_pane_cp4_ParamLimits

0xc3db,	// (0x00045808) indicator_popup_pane_cp4

0x262c,	// (0x0003ba59) popup_query_data_window_t1_ParamLimits

0x262c,	// (0x0003ba59) popup_query_data_window_t1

0x263e,	// (0x0003ba6b) popup_query_data_window_t2_ParamLimits

0x263e,	// (0x0003ba6b) popup_query_data_window_t2

0x2657,	// (0x0003ba84) popup_query_data_window_t3_ParamLimits

0x2657,	// (0x0003ba84) popup_query_data_window_t3

0x0002,

0xf801,	// (0x00048c2e) popup_query_data_window_t_ParamLimits

0xf801,	// (0x00048c2e) popup_query_data_window_t

0xc3ef,	// (0x0004581c) query_popup_data_pane_ParamLimits

0xc3ef,	// (0x0004581c) query_popup_data_pane

0xc403,	// (0x00045830) query_popup_data_pane_cp1_ParamLimits

0xc403,	// (0x00045830) query_popup_data_pane_cp1

0x2518,	// (0x0003b945) bg_popup_window_pane_cp10_ParamLimits

0x2518,	// (0x0003b945) bg_popup_window_pane_cp10

0xc356,	// (0x00045783) indicator_popup_pane_ParamLimits

0xc356,	// (0x00045783) indicator_popup_pane

0xc378,	// (0x000457a5) popup_query_code_window_t1_ParamLimits

0xc378,	// (0x000457a5) popup_query_code_window_t1

0xc392,	// (0x000457bf) popup_query_code_window_t2_ParamLimits

0xc392,	// (0x000457bf) popup_query_code_window_t2

0x25cf,	// (0x0003b9fc) popup_query_code_window_t3_ParamLimits

0x25cf,	// (0x0003b9fc) popup_query_code_window_t3

0x0002,

0xf7fa,	// (0x00048c27) popup_query_code_window_t_ParamLimits

0xf7fa,	// (0x00048c27) popup_query_code_window_t

0x25fe,	// (0x0003ba2b) query_popup_pane_ParamLimits

0x25fe,	// (0x0003ba2b) query_popup_pane

0xb702,	// (0x00044b2f) bg_popup_window_pane_cp15_ParamLimits

0xb702,	// (0x00044b2f) bg_popup_window_pane_cp15

0x8c9c,	// (0x000420c9) indicator_popup_pane_cp1_ParamLimits

0x8c9c,	// (0x000420c9) indicator_popup_pane_cp1

0x8caf,	// (0x000420dc) indicator_popup_pane_cp2_ParamLimits

0x8caf,	// (0x000420dc) indicator_popup_pane_cp2

0x8cc2,	// (0x000420ef) popup_query_data_code_window_g1_ParamLimits

0x8cc2,	// (0x000420ef) popup_query_data_code_window_g1

0xb720,	// (0x00044b4d) popup_query_data_code_window_t1_ParamLimits

0xb720,	// (0x00044b4d) popup_query_data_code_window_t1

0xb732,	// (0x00044b5f) popup_query_data_code_window_t2_ParamLimits

0xb732,	// (0x00044b5f) popup_query_data_code_window_t2

0x8cd5,	// (0x00042102) popup_query_data_code_window_t3_ParamLimits

0x8cd5,	// (0x00042102) popup_query_data_code_window_t3

0x8ceb,	// (0x00042118) popup_query_data_code_window_t4_ParamLimits

0x8ceb,	// (0x00042118) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00048992) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00048992) popup_query_data_code_window_t

0x06e8,	// (0x00039b15) list_single_midp_graphic_pane_g3

0x8d03,	// (0x00042130) query_popup_data_pane_cp2_ParamLimits

0x8d16,	// (0x00042143) query_popup_pane_cp2_ParamLimits

0x8d16,	// (0x00042143) query_popup_pane_cp2

0xb4d4,	// (0x00044901) bg_popup_window_pane_cp11

0x24fc,	// (0x0003b929) heading_pane_cp5

0x2504,	// (0x0003b931) listscroll_popup_info_pane

0xb4d4,	// (0x00044901) input_focus_pane_cp3

0xb744,	// (0x00044b71) query_popup_pane_t1

0xb752,	// (0x00044b7f) list_popup_info_pane_ParamLimits

0xb752,	// (0x00044b7f) list_popup_info_pane

0xb761,	// (0x00044b8e) listscroll_popup_info_pane_g1

0xb769,	// (0x00044b96) scroll_pane_cp7

0x8d29,	// (0x00042156) popup_info_list_pane_t1_ParamLimits

0x8d29,	// (0x00042156) popup_info_list_pane_t1

0x8d43,	// (0x00042170) popup_info_list_pane_t2_ParamLimits

0x8d43,	// (0x00042170) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0004899b) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0004899b) popup_info_list_pane_t

0xb4d4,	// (0x00044901) bg_popup_window_pane_cp12

0xcaf2,	// (0x00045f1f) find_popup_pane

0xb530,	// (0x0004495d) bg_popup_window_pane_cp3

0xb773,	// (0x00044ba0) heading_pane_cp3

0xb782,	// (0x00044baf) listscroll_popup_graphic_pane

0xb4d4,	// (0x00044901) bg_popup_window_pane_cp4

0x8dad,	// (0x000421da) heading_pane_cp4

0xb792,	// (0x00044bbf) listscroll_popup_colour_pane

0x8db7,	// (0x000421e4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8db7,	// (0x000421e4) cell_large_graphic_colour_none_popup_pane

0x8dcb,	// (0x000421f8) grid_large_graphic_colour_popup_pane_ParamLimits

0x8dcb,	// (0x000421f8) grid_large_graphic_colour_popup_pane

0x8def,	// (0x0004221c) listscroll_popup_colour_pane_g1_ParamLimits

0x8def,	// (0x0004221c) listscroll_popup_colour_pane_g1

0x8e06,	// (0x00042233) listscroll_popup_colour_pane_g2_ParamLimits

0x8e06,	// (0x00042233) listscroll_popup_colour_pane_g2

0x8e1a,	// (0x00042247) listscroll_popup_colour_pane_g3_ParamLimits

0x8e1a,	// (0x00042247) listscroll_popup_colour_pane_g3

0x8e2a,	// (0x00042257) listscroll_popup_colour_pane_g4_ParamLimits

0x8e2a,	// (0x00042257) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x000489a0) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x000489a0) listscroll_popup_colour_pane_g

0xb79a,	// (0x00044bc7) scroll_pane_cp6_ParamLimits

0xb79a,	// (0x00044bc7) scroll_pane_cp6

0x8e3a,	// (0x00042267) cell_large_graphic_colour_popup_pane_ParamLimits

0x8e3a,	// (0x00042267) cell_large_graphic_colour_popup_pane

0x8e59,	// (0x00042286) cell_large_graphic_colour_none_popup_pane_t1

0xb4d4,	// (0x00044901) grid_highlight_pane_cp5

0xb7ac,	// (0x00044bd9) cell_large_graphic_colour_popup_pane_g1

0xb7b4,	// (0x00044be1) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x000489a9) cell_large_graphic_colour_popup_pane_g

0xb7bc,	// (0x00044be9) cell_large_graphic_colour_popup_pane_g2_copy1

0xb7c5,	// (0x00044bf2) grid_highlight_pane_cp4

0xb7cd,	// (0x00044bfa) bg_popup_window_pane_cp8_ParamLimits

0xb7cd,	// (0x00044bfa) bg_popup_window_pane_cp8

0x8e68,	// (0x00042295) popup_snote_single_text_window_g1_ParamLimits

0x8e68,	// (0x00042295) popup_snote_single_text_window_g1

0x8e7a,	// (0x000422a7) popup_snote_single_text_window_t1_ParamLimits

0x8e7a,	// (0x000422a7) popup_snote_single_text_window_t1

0x8e8d,	// (0x000422ba) popup_snote_single_text_window_t2_ParamLimits

0x8e8d,	// (0x000422ba) popup_snote_single_text_window_t2

0x8ea0,	// (0x000422cd) popup_snote_single_text_window_t3_ParamLimits

0x8ea0,	// (0x000422cd) popup_snote_single_text_window_t3

0x8ed9,	// (0x00042306) popup_snote_single_text_window_t4_ParamLimits

0x8ed9,	// (0x00042306) popup_snote_single_text_window_t4

0x8f0d,	// (0x0004233a) popup_snote_single_text_window_t5_ParamLimits

0x8f0d,	// (0x0004233a) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x000489ae) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x000489ae) popup_snote_single_text_window_t

0xb7e8,	// (0x00044c15) bg_popup_window_pane_cp9_ParamLimits

0xb7e8,	// (0x00044c15) bg_popup_window_pane_cp9

0x8e68,	// (0x00042295) popup_snote_single_graphic_window_g1_ParamLimits

0x8e68,	// (0x00042295) popup_snote_single_graphic_window_g1

0xb7f6,	// (0x00044c23) popup_snote_single_graphic_window_g2_ParamLimits

0xb7f6,	// (0x00044c23) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x000489b9) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x000489b9) popup_snote_single_graphic_window_g

0xb802,	// (0x00044c2f) popup_snote_single_graphic_window_t1_ParamLimits

0xb802,	// (0x00044c2f) popup_snote_single_graphic_window_t1

0xb815,	// (0x00044c42) popup_snote_single_graphic_window_t2_ParamLimits

0xb815,	// (0x00044c42) popup_snote_single_graphic_window_t2

0x8ea0,	// (0x000422cd) popup_snote_single_graphic_window_t3_ParamLimits

0x8ea0,	// (0x000422cd) popup_snote_single_graphic_window_t3

0x8ed9,	// (0x00042306) popup_snote_single_graphic_window_t4_ParamLimits

0x8ed9,	// (0x00042306) popup_snote_single_graphic_window_t4

0x8f3c,	// (0x00042369) popup_snote_single_graphic_window_t5_ParamLimits

0x8f3c,	// (0x00042369) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x000489be) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x000489be) popup_snote_single_graphic_window_t

0x37ae,	// (0x0003cbdb) grid_graphic_popup_pane_ParamLimits

0x37ae,	// (0x0003cbdb) grid_graphic_popup_pane

0x37d8,	// (0x0003cc05) listscroll_popup_graphic_pane_g1_ParamLimits

0x37d8,	// (0x0003cc05) listscroll_popup_graphic_pane_g1

0xca90,	// (0x00045ebd) listscroll_popup_graphic_pane_g2_ParamLimits

0xca90,	// (0x00045ebd) listscroll_popup_graphic_pane_g2

0x0001,

0xf977,	// (0x00048da4) listscroll_popup_graphic_pane_g_ParamLimits

0xf977,	// (0x00048da4) listscroll_popup_graphic_pane_g

0x3800,	// (0x0003cc2d) scroll_pane_cp5

0xca4f,	// (0x00045e7c) cell_graphic_popup_pane_ParamLimits

0xca4f,	// (0x00045e7c) cell_graphic_popup_pane

0x3725,	// (0x0003cb52) cell_graphic_popup_pane_g1

0x372d,	// (0x0003cb5a) cell_graphic_popup_pane_g2

0xb7bc,	// (0x00044be9) cell_graphic_popup_pane_g3

0x0002,

0xf970,	// (0x00048d9d) cell_graphic_popup_pane_g

0x3736,	// (0x0003cb63) cell_graphic_popup_pane_t2

0xb7c5,	// (0x00044bf2) grid_highlight_pane_cp3

0xb83a,	// (0x00044c67) list_gen_pane_ParamLimits

0xb83a,	// (0x00044c67) list_gen_pane

0xb862,	// (0x00044c8f) scroll_pane

0xc9b9,	// (0x00045de6) bg_list_pane_g1_ParamLimits

0xc9b9,	// (0x00045de6) bg_list_pane_g1

0xc9d4,	// (0x00045e01) bg_list_pane_g2_ParamLimits

0xc9d4,	// (0x00045e01) bg_list_pane_g2

0xc9e7,	// (0x00045e14) bg_list_pane_g3_ParamLimits

0xc9e7,	// (0x00045e14) bg_list_pane_g3

0xc9f9,	// (0x00045e26) bg_list_pane_g4_ParamLimits

0xc9f9,	// (0x00045e26) bg_list_pane_g4

0xca0b,	// (0x00045e38) bg_list_pane_g5_ParamLimits

0xca0b,	// (0x00045e38) bg_list_pane_g5

0x0004,

0xf965,	// (0x00048d92) bg_list_pane_g_ParamLimits

0xf965,	// (0x00048d92) bg_list_pane_g

0xc980,	// (0x00045dad) list_double2_graphic_large_graphic_pane_ParamLimits

0xc980,	// (0x00045dad) list_double2_graphic_large_graphic_pane

0xc980,	// (0x00045dad) list_double2_graphic_pane_ParamLimits

0xc980,	// (0x00045dad) list_double2_graphic_pane

0xc980,	// (0x00045dad) list_double2_large_graphic_pane_ParamLimits

0xc980,	// (0x00045dad) list_double2_large_graphic_pane

0xc980,	// (0x00045dad) list_double2_pane_ParamLimits

0xc980,	// (0x00045dad) list_double2_pane

0xc980,	// (0x00045dad) list_double_graphic_heading_pane_ParamLimits

0xc980,	// (0x00045dad) list_double_graphic_heading_pane

0xc980,	// (0x00045dad) list_double_graphic_pane_ParamLimits

0xc980,	// (0x00045dad) list_double_graphic_pane

0xc980,	// (0x00045dad) list_double_heading_pane_ParamLimits

0xc980,	// (0x00045dad) list_double_heading_pane

0xc980,	// (0x00045dad) list_double_large_graphic_pane_ParamLimits

0xc980,	// (0x00045dad) list_double_large_graphic_pane

0xc980,	// (0x00045dad) list_double_number_pane_ParamLimits

0xc980,	// (0x00045dad) list_double_number_pane

0xc980,	// (0x00045dad) list_double_pane_ParamLimits

0xc980,	// (0x00045dad) list_double_pane

0xc980,	// (0x00045dad) list_double_time_pane_ParamLimits

0xc980,	// (0x00045dad) list_double_time_pane

0xc980,	// (0x00045dad) list_setting_number_pane_ParamLimits

0xc980,	// (0x00045dad) list_setting_number_pane

0xc980,	// (0x00045dad) list_setting_pane_ParamLimits

0xc980,	// (0x00045dad) list_setting_pane

0x941c,	// (0x00042849) list_single_2graphic_pane_ParamLimits

0x941c,	// (0x00042849) list_single_2graphic_pane

0x941c,	// (0x00042849) list_single_graphic_heading_pane_ParamLimits

0x941c,	// (0x00042849) list_single_graphic_heading_pane

0x941c,	// (0x00042849) list_single_graphic_pane_ParamLimits

0x941c,	// (0x00042849) list_single_graphic_pane

0x941c,	// (0x00042849) list_single_heading_pane_ParamLimits

0x941c,	// (0x00042849) list_single_heading_pane

0x941c,	// (0x00042849) list_single_large_graphic_pane_ParamLimits

0x941c,	// (0x00042849) list_single_large_graphic_pane

0x941c,	// (0x00042849) list_single_number_heading_pane_ParamLimits

0x941c,	// (0x00042849) list_single_number_heading_pane

0x941c,	// (0x00042849) list_single_number_pane_ParamLimits

0x941c,	// (0x00042849) list_single_number_pane

0x941c,	// (0x00042849) list_single_pane_ParamLimits

0x941c,	// (0x00042849) list_single_pane

0xb4d4,	// (0x00044901) list_highlight_pane_cp1

0xdb50,	// (0x00046f7d) list_single_pane_g1_ParamLimits

0xdb50,	// (0x00046f7d) list_single_pane_g1

0xdb5c,	// (0x00046f89) list_single_pane_g2_ParamLimits

0xdb5c,	// (0x00046f89) list_single_pane_g2

0x0001,

0xf5a3,	// (0x000489d0) list_single_pane_g_ParamLimits

0xf5a3,	// (0x000489d0) list_single_pane_g

0xaaaa,	// (0x00043ed7) list_single_pane_t1_ParamLimits

0xaaaa,	// (0x00043ed7) list_single_pane_t1

0xdb50,	// (0x00046f7d) list_single_number_pane_g1_ParamLimits

0xdb50,	// (0x00046f7d) list_single_number_pane_g1

0xdb5c,	// (0x00046f89) list_single_number_pane_g2_ParamLimits

0xdb5c,	// (0x00046f89) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x000489d0) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x000489d0) list_single_number_pane_g

0xdb68,	// (0x00046f95) list_single_number_pane_t1_ParamLimits

0xdb68,	// (0x00046f95) list_single_number_pane_t1

0xaa00,	// (0x00043e2d) list_single_number_pane_t2_ParamLimits

0xaa00,	// (0x00043e2d) list_single_number_pane_t2

0x0001,

0xf926,	// (0x00048d53) list_single_number_pane_t_ParamLimits

0xf926,	// (0x00048d53) list_single_number_pane_t

0xdb44,	// (0x00046f71) list_single_graphic_pane_g1_ParamLimits

0xdb44,	// (0x00046f71) list_single_graphic_pane_g1

0xdb50,	// (0x00046f7d) list_single_graphic_pane_g2_ParamLimits

0xdb50,	// (0x00046f7d) list_single_graphic_pane_g2

0xdb5c,	// (0x00046f89) list_single_graphic_pane_g3_ParamLimits

0xdb5c,	// (0x00046f89) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x000489c9) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x000489c9) list_single_graphic_pane_g

0xdb68,	// (0x00046f95) list_single_graphic_pane_t1_ParamLimits

0xdb68,	// (0x00046f95) list_single_graphic_pane_t1

0xdb50,	// (0x00046f7d) list_single_heading_pane_g1_ParamLimits

0xdb50,	// (0x00046f7d) list_single_heading_pane_g1

0xdb5c,	// (0x00046f89) list_single_heading_pane_g2_ParamLimits

0xdb5c,	// (0x00046f89) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x000489d0) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x000489d0) list_single_heading_pane_g

0xdb7e,	// (0x00046fab) list_single_heading_pane_t1_ParamLimits

0xdb7e,	// (0x00046fab) list_single_heading_pane_t1

0xdb94,	// (0x00046fc1) list_single_heading_pane_t2_ParamLimits

0xdb94,	// (0x00046fc1) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x000489d5) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x000489d5) list_single_heading_pane_t

0xdb50,	// (0x00046f7d) list_single_number_heading_pane_g1_ParamLimits

0xdb50,	// (0x00046f7d) list_single_number_heading_pane_g1

0xdb5c,	// (0x00046f89) list_single_number_heading_pane_g2_ParamLimits

0xdb5c,	// (0x00046f89) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x000489d0) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x000489d0) list_single_number_heading_pane_g

0xdb7e,	// (0x00046fab) list_single_number_heading_pane_t1_ParamLimits

0xdb7e,	// (0x00046fab) list_single_number_heading_pane_t1

0xdba6,	// (0x00046fd3) list_single_number_heading_pane_t2_ParamLimits

0xdba6,	// (0x00046fd3) list_single_number_heading_pane_t2

0xdbb8,	// (0x00046fe5) list_single_number_heading_pane_t3_ParamLimits

0xdbb8,	// (0x00046fe5) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x000489da) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x000489da) list_single_number_heading_pane_t

0xdbca,	// (0x00046ff7) list_single_graphic_heading_pane_g1_ParamLimits

0xdbca,	// (0x00046ff7) list_single_graphic_heading_pane_g1

0x8f75,	// (0x000423a2) list_single_graphic_heading_pane_g4_ParamLimits

0x8f75,	// (0x000423a2) list_single_graphic_heading_pane_g4

0xdb5c,	// (0x00046f89) list_single_graphic_heading_pane_g5_ParamLimits

0xdb5c,	// (0x00046f89) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x000489e1) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x000489e1) list_single_graphic_heading_pane_g

0xdb7e,	// (0x00046fab) list_single_graphic_heading_pane_t1_ParamLimits

0xdb7e,	// (0x00046fab) list_single_graphic_heading_pane_t1

0x8f86,	// (0x000423b3) list_single_graphic_heading_pane_t2_ParamLimits

0x8f86,	// (0x000423b3) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x000489e8) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x000489e8) list_single_graphic_heading_pane_t

0xdbd6,	// (0x00047003) list_single_large_graphic_pane_g1_ParamLimits

0xdbd6,	// (0x00047003) list_single_large_graphic_pane_g1

0xdb50,	// (0x00046f7d) list_single_large_graphic_pane_g2_ParamLimits

0xdb50,	// (0x00046f7d) list_single_large_graphic_pane_g2

0xdb5c,	// (0x00046f89) list_single_large_graphic_pane_g3_ParamLimits

0xdb5c,	// (0x00046f89) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x000489ed) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x000489ed) list_single_large_graphic_pane_g

0x26b8,	// (0x0003bae5) wait_border_pane_g2_copy1

0x8f98,	// (0x000423c5) list_single_large_graphic_pane_g4_cp2

0xdb68,	// (0x00046f95) list_single_large_graphic_pane_t1_ParamLimits

0xdb68,	// (0x00046f95) list_single_large_graphic_pane_t1

0xdbe2,	// (0x0004700f) list_double_pane_g1_ParamLimits

0xdbe2,	// (0x0004700f) list_double_pane_g1

0xdbee,	// (0x0004701b) list_double_pane_g2_ParamLimits

0xdbee,	// (0x0004701b) list_double_pane_g2

0x0001,

0xf5c7,	// (0x000489f4) list_double_pane_g_ParamLimits

0xf5c7,	// (0x000489f4) list_double_pane_g

0x8fa0,	// (0x000423cd) list_double_pane_t1_ParamLimits

0x8fa0,	// (0x000423cd) list_double_pane_t1

0x8fb6,	// (0x000423e3) list_double_pane_t2_ParamLimits

0x8fb6,	// (0x000423e3) list_double_pane_t2

0x0001,

0xf5cc,	// (0x000489f9) list_double_pane_t_ParamLimits

0xf5cc,	// (0x000489f9) list_double_pane_t

0x8fc8,	// (0x000423f5) list_double2_pane_g1_ParamLimits

0x8fc8,	// (0x000423f5) list_double2_pane_g1

0xdbee,	// (0x0004701b) list_double2_pane_g2_ParamLimits

0xdbee,	// (0x0004701b) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x000489fe) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x000489fe) list_double2_pane_g

0x8fa0,	// (0x000423cd) list_double2_pane_t1_ParamLimits

0x8fa0,	// (0x000423cd) list_double2_pane_t1

0x8fd9,	// (0x00042406) list_double2_pane_t2_ParamLimits

0x8fd9,	// (0x00042406) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00048a03) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00048a03) list_double2_pane_t

0xdbe2,	// (0x0004700f) list_double_number_pane_g1_ParamLimits

0xdbe2,	// (0x0004700f) list_double_number_pane_g1

0xdbee,	// (0x0004701b) list_double_number_pane_g2_ParamLimits

0xdbee,	// (0x0004701b) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x000489f4) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x000489f4) list_double_number_pane_g

0x8feb,	// (0x00042418) list_double_number_pane_t1_ParamLimits

0x8feb,	// (0x00042418) list_double_number_pane_t1

0x8ffd,	// (0x0004242a) list_double_number_pane_t2_ParamLimits

0x8ffd,	// (0x0004242a) list_double_number_pane_t2

0x9013,	// (0x00042440) list_double_number_pane_t3_ParamLimits

0x9013,	// (0x00042440) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00048a08) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00048a08) list_double_number_pane_t

0x9025,	// (0x00042452) list_double_graphic_pane_g1_ParamLimits

0x9025,	// (0x00042452) list_double_graphic_pane_g1

0xdbfa,	// (0x00047027) list_double_graphic_pane_g2_ParamLimits

0xdbfa,	// (0x00047027) list_double_graphic_pane_g2

0xdc09,	// (0x00047036) list_double_graphic_pane_g3_ParamLimits

0xdc09,	// (0x00047036) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00048a0f) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00048a0f) list_double_graphic_pane_g

0x903d,	// (0x0004246a) list_double_graphic_pane_t1_ParamLimits

0x903d,	// (0x0004246a) list_double_graphic_pane_t1

0x9053,	// (0x00042480) list_double_graphic_pane_t2_ParamLimits

0x9053,	// (0x00042480) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00048a18) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00048a18) list_double_graphic_pane_t

0x9065,	// (0x00042492) list_double2_graphic_pane_g1_ParamLimits

0x9065,	// (0x00042492) list_double2_graphic_pane_g1

0xdc15,	// (0x00047042) list_double2_graphic_pane_g2_ParamLimits

0xdc15,	// (0x00047042) list_double2_graphic_pane_g2

0xdc21,	// (0x0004704e) list_double2_graphic_pane_g3_ParamLimits

0xdc21,	// (0x0004704e) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00048a1d) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00048a1d) list_double2_graphic_pane_g

0x8ffd,	// (0x0004242a) list_double2_graphic_pane_t1_ParamLimits

0x8ffd,	// (0x0004242a) list_double2_graphic_pane_t1

0x9071,	// (0x0004249e) list_double2_graphic_pane_t2_ParamLimits

0x9071,	// (0x0004249e) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00048a24) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00048a24) list_double2_graphic_pane_t

0x9083,	// (0x000424b0) list_double_large_graphic_pane_g1_ParamLimits

0x9083,	// (0x000424b0) list_double_large_graphic_pane_g1

0x8fc8,	// (0x000423f5) list_double_large_graphic_pane_g2_ParamLimits

0x8fc8,	// (0x000423f5) list_double_large_graphic_pane_g2

0xdbee,	// (0x0004701b) list_double_large_graphic_pane_g3_ParamLimits

0xdbee,	// (0x0004701b) list_double_large_graphic_pane_g3

0x9096,	// (0x000424c3) list_double_large_graphic_pane_g4_ParamLimits

0x9096,	// (0x000424c3) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00048a29) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00048a29) list_double_large_graphic_pane_g

0x90a8,	// (0x000424d5) list_double_large_graphic_pane_t1_ParamLimits

0x90a8,	// (0x000424d5) list_double_large_graphic_pane_t1

0x90c1,	// (0x000424ee) list_double_large_graphic_pane_t2_ParamLimits

0x90c1,	// (0x000424ee) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00048a34) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00048a34) list_double_large_graphic_pane_t

0x90d3,	// (0x00042500) list_double2_large_graphic_pane_g1_ParamLimits

0x90d3,	// (0x00042500) list_double2_large_graphic_pane_g1

0x8fc8,	// (0x000423f5) list_double2_large_graphic_pane_g2_ParamLimits

0x8fc8,	// (0x000423f5) list_double2_large_graphic_pane_g2

0xdbee,	// (0x0004701b) list_double2_large_graphic_pane_g3_ParamLimits

0xdbee,	// (0x0004701b) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00048a39) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00048a39) list_double2_large_graphic_pane_g

0x8ffd,	// (0x0004242a) list_double2_large_graphic_pane_t1_ParamLimits

0x8ffd,	// (0x0004242a) list_double2_large_graphic_pane_t1

0x9071,	// (0x0004249e) list_double2_large_graphic_pane_t2_ParamLimits

0x9071,	// (0x0004249e) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00048a24) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00048a24) list_double2_large_graphic_pane_t

0x90df,	// (0x0004250c) list_double_heading_pane_g1_ParamLimits

0x90df,	// (0x0004250c) list_double_heading_pane_g1

0xdc42,	// (0x0004706f) list_double_heading_pane_g2_ParamLimits

0xdc42,	// (0x0004706f) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x00048a40) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x00048a40) list_double_heading_pane_g

0x90f0,	// (0x0004251d) list_double_heading_pane_t1_ParamLimits

0x90f0,	// (0x0004251d) list_double_heading_pane_t1

0x9071,	// (0x0004249e) list_double_heading_pane_t2_ParamLimits

0x9071,	// (0x0004249e) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x00048a45) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x00048a45) list_double_heading_pane_t

0x9106,	// (0x00042533) list_double_graphic_heading_pane_g1_ParamLimits

0x9106,	// (0x00042533) list_double_graphic_heading_pane_g1

0x90df,	// (0x0004250c) list_double_graphic_heading_pane_g2_ParamLimits

0x90df,	// (0x0004250c) list_double_graphic_heading_pane_g2

0xdc42,	// (0x0004706f) list_double_graphic_heading_pane_g3_ParamLimits

0xdc42,	// (0x0004706f) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x00048a4a) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00048a4a) list_double_graphic_heading_pane_g

0x90f0,	// (0x0004251d) list_double_graphic_heading_pane_t1_ParamLimits

0x90f0,	// (0x0004251d) list_double_graphic_heading_pane_t1

0x9071,	// (0x0004249e) list_double_graphic_heading_pane_t2_ParamLimits

0x9071,	// (0x0004249e) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x00048a45) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x00048a45) list_double_graphic_heading_pane_t

0x8fc8,	// (0x000423f5) list_double_time_pane_g1_ParamLimits

0x8fc8,	// (0x000423f5) list_double_time_pane_g1

0xdbee,	// (0x0004701b) list_double_time_pane_g2_ParamLimits

0xdbee,	// (0x0004701b) list_double_time_pane_g2

0x0001,

0xf5d1,	// (0x000489fe) list_double_time_pane_g_ParamLimits

0xf5d1,	// (0x000489fe) list_double_time_pane_g

0xdc4e,	// (0x0004707b) list_double_time_pane_t1_ParamLimits

0xdc4e,	// (0x0004707b) list_double_time_pane_t1

0xdc64,	// (0x00047091) list_double_time_pane_t2_ParamLimits

0xdc64,	// (0x00047091) list_double_time_pane_t2

0xdc76,	// (0x000470a3) list_double_time_pane_t3_ParamLimits

0xdc76,	// (0x000470a3) list_double_time_pane_t3

0xdc88,	// (0x000470b5) list_double_time_pane_t4_ParamLimits

0xdc88,	// (0x000470b5) list_double_time_pane_t4

0x0003,

0xf624,	// (0x00048a51) list_double_time_pane_t_ParamLimits

0xf624,	// (0x00048a51) list_double_time_pane_t

0xdc9a,	// (0x000470c7) list_setting_pane_g1_ParamLimits

0xdc9a,	// (0x000470c7) list_setting_pane_g1

0xdca6,	// (0x000470d3) list_setting_pane_g2_ParamLimits

0xdca6,	// (0x000470d3) list_setting_pane_g2

0x0001,

0xf62d,	// (0x00048a5a) list_setting_pane_g_ParamLimits

0xf62d,	// (0x00048a5a) list_setting_pane_g

0x9112,	// (0x0004253f) list_setting_pane_t1_ParamLimits

0x9112,	// (0x0004253f) list_setting_pane_t1

0x9129,	// (0x00042556) list_setting_pane_t2_ParamLimits

0x9129,	// (0x00042556) list_setting_pane_t2

0x0002,

0xf632,	// (0x00048a5f) list_setting_pane_t_ParamLimits

0xf632,	// (0x00048a5f) list_setting_pane_t

0x9168,	// (0x00042595) set_value_pane_cp_ParamLimits

0x9168,	// (0x00042595) set_value_pane_cp

0xdcb2,	// (0x000470df) list_setting_number_pane_g1_ParamLimits

0xdcb2,	// (0x000470df) list_setting_number_pane_g1

0xdcbe,	// (0x000470eb) list_setting_number_pane_g2_ParamLimits

0xdcbe,	// (0x000470eb) list_setting_number_pane_g2

0x0001,

0xf639,	// (0x00048a66) list_setting_number_pane_g_ParamLimits

0xf639,	// (0x00048a66) list_setting_number_pane_g

0x9174,	// (0x000425a1) list_setting_number_pane_t1_ParamLimits

0x9174,	// (0x000425a1) list_setting_number_pane_t1

0xdcca,	// (0x000470f7) list_setting_number_pane_t2_ParamLimits

0xdcca,	// (0x000470f7) list_setting_number_pane_t2

0x9188,	// (0x000425b5) list_setting_number_pane_t3_ParamLimits

0x9188,	// (0x000425b5) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x00048a6b) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x00048a6b) list_setting_number_pane_t

0x9168,	// (0x00042595) set_value_pane_ParamLimits

0x9168,	// (0x00042595) set_value_pane

0xb896,	// (0x00044cc3) bg_set_opt_pane_ParamLimits

0xb896,	// (0x00044cc3) bg_set_opt_pane

0x91a0,	// (0x000425cd) set_value_pane_t1

0xb8b7,	// (0x00044ce4) slider_set_pane_cp3

0x91ae,	// (0x000425db) volume_small_pane_cp

0xb8c0,	// (0x00044ced) list_form_gen_pane

0xb8c9,	// (0x00044cf6) scroll_pane_cp8

0x91b7,	// (0x000425e4) form_field_data_pane_ParamLimits

0x91b7,	// (0x000425e4) form_field_data_pane

0x91ce,	// (0x000425fb) form_field_data_wide_pane_ParamLimits

0x91ce,	// (0x000425fb) form_field_data_wide_pane

0x91ee,	// (0x0004261b) form_field_popup_pane_ParamLimits

0x91ee,	// (0x0004261b) form_field_popup_pane

0x9206,	// (0x00042633) form_field_popup_wide_pane_ParamLimits

0x9206,	// (0x00042633) form_field_popup_wide_pane

0xdd1c,	// (0x00047149) form_field_slider_pane_ParamLimits

0xdd1c,	// (0x00047149) form_field_slider_pane

0x9223,	// (0x00042650) form_field_slider_wide_pane_ParamLimits

0x9223,	// (0x00042650) form_field_slider_wide_pane

0xb8da,	// (0x00044d07) data_form_pane

0x9240,	// (0x0004266d) form_field_data_pane_t1

0xb8e6,	// (0x00044d13) input_focus_pane

0x925a,	// (0x00042687) data_form_wide_pane

0x9277,	// (0x000426a4) form_field_data_wide_pane_t1

0xb7da,	// (0x00044c07) input_focus_pane_cp6

0x9299,	// (0x000426c6) form_field_popup_pane_t1

0xb8e6,	// (0x00044d13) input_focus_pane_cp7

0xb914,	// (0x00044d41) list_form_pane

0x92bb,	// (0x000426e8) form_field_popup_wide_pane_t1

0xb8e6,	// (0x00044d13) input_focus_pane_cp8

0xb920,	// (0x00044d4d) list_form_wide_pane

0x92d8,	// (0x00042705) form_field_slider_pane_t1_ParamLimits

0x92d8,	// (0x00042705) form_field_slider_pane_t1

0x92f0,	// (0x0004271d) form_field_slider_pane_t2_ParamLimits

0x92f0,	// (0x0004271d) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x00048a7b) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x00048a7b) form_field_slider_pane_t

0xb522,	// (0x0004494f) input_focus_pane_cp9_ParamLimits

0xb522,	// (0x0004494f) input_focus_pane_cp9

0x9305,	// (0x00042732) slider_cont_pane_ParamLimits

0x9305,	// (0x00042732) slider_cont_pane

0xb92c,	// (0x00044d59) form_field_slider_wide_pane_t1_ParamLimits

0xb92c,	// (0x00044d59) form_field_slider_wide_pane_t1

0x9319,	// (0x00042746) form_field_slider_wide_pane_t2_ParamLimits

0x9319,	// (0x00042746) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x00048a80) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x00048a80) form_field_slider_wide_pane_t

0xb522,	// (0x0004494f) input_focus_pane_cp10_ParamLimits

0xb522,	// (0x0004494f) input_focus_pane_cp10

0x932b,	// (0x00042758) slider_cont_pane_cp1_ParamLimits

0x932b,	// (0x00042758) slider_cont_pane_cp1

0x933f,	// (0x0004276c) slider_form_pane_cp

0xb93e,	// (0x00044d6b) input_focus_pane_g1

0xb946,	// (0x00044d73) input_focus_pane_g2

0xb94e,	// (0x00044d7b) input_focus_pane_g3

0xb956,	// (0x00044d83) input_focus_pane_g4

0xb95e,	// (0x00044d8b) input_focus_pane_g5

0xb966,	// (0x00044d93) input_focus_pane_g6

0xb96e,	// (0x00044d9b) input_focus_pane_g7

0xb976,	// (0x00044da3) input_focus_pane_g8

0xb97e,	// (0x00044dab) input_focus_pane_g9

0xb4ca,	// (0x000448f7) input_focus_pane_g10

0x0009,

0xf658,	// (0x00048a85) input_focus_pane_g

0x26c1,	// (0x0003baee) wait_border_pane_g3_copy1

0x9347,	// (0x00042774) data_form_pane_t1

0xb4ca,	// (0x000448f7) wait_anim_pane_g1_copy1

0xaa7e,	// (0x00043eab) data_form_wide_pane_t1

0x9361,	// (0x0004278e) list_form_graphic_pane_cp_ParamLimits

0x9361,	// (0x0004278e) list_form_graphic_pane_cp

0x35b0,	// (0x0003c9dd) slider_form_pane_g1

0x35b9,	// (0x0003c9e6) slider_form_pane_g2

0x0006,

0xf956,	// (0x00048d83) slider_form_pane_g

0x9361,	// (0x0004278e) list_form_graphic_pane_ParamLimits

0x9361,	// (0x0004278e) list_form_graphic_pane

0x9374,	// (0x000427a1) list_form_graphic_pane_g1

0x937c,	// (0x000427a9) list_form_graphic_pane_t1_ParamLimits

0x937c,	// (0x000427a9) list_form_graphic_pane_t1

0xb530,	// (0x0004495d) list_highlight_pane_cp5_ParamLimits

0xb530,	// (0x0004495d) list_highlight_pane_cp5

0x9391,	// (0x000427be) find_pane_g1

0xb986,	// (0x00044db3) input_find_pane

0x939a,	// (0x000427c7) input_find_pane_g1_ParamLimits

0x939a,	// (0x000427c7) input_find_pane_g1

0x93a6,	// (0x000427d3) input_find_pane_t1_ParamLimits

0x93a6,	// (0x000427d3) input_find_pane_t1

0x93bb,	// (0x000427e8) input_find_pane_t2_ParamLimits

0x93bb,	// (0x000427e8) input_find_pane_t2

0x0001,

0xf66d,	// (0x00048a9a) input_find_pane_t_ParamLimits

0xf66d,	// (0x00048a9a) input_find_pane_t

0xb98f,	// (0x00044dbc) input_focus_pane_cp5_ParamLimits

0xb98f,	// (0x00044dbc) input_focus_pane_cp5

0xb9a2,	// (0x00044dcf) bg_popup_window_pane_cp2_ParamLimits

0xb9a2,	// (0x00044dcf) bg_popup_window_pane_cp2

0xb9af,	// (0x00044ddc) listscroll_menu_pane_ParamLimits

0xb9af,	// (0x00044ddc) listscroll_menu_pane

0x93dc,	// (0x00042809) popup_submenu_window_ParamLimits

0x93dc,	// (0x00042809) popup_submenu_window

0xb9bb,	// (0x00044de8) find_popup_pane_g1

0x9404,	// (0x00042831) input_popup_find_pane_cp

0xb9c3,	// (0x00044df0) input_focus_pane_cp4_ParamLimits

0xb9c3,	// (0x00044df0) input_focus_pane_cp4

0xb9d1,	// (0x00044dfe) input_popup_find_pane_t1_ParamLimits

0xb9d1,	// (0x00044dfe) input_popup_find_pane_t1

0xb4d4,	// (0x00044901) bg_popup_sub_pane_cp

0xb9ff,	// (0x00044e2c) listscroll_popup_sub_pane

0xba07,	// (0x00044e34) list_submenu_pane_ParamLimits

0xba07,	// (0x00044e34) list_submenu_pane

0xba18,	// (0x00044e45) scroll_pane_cp4

0x941c,	// (0x00042849) list_single_popup_submenu_pane_ParamLimits

0x941c,	// (0x00042849) list_single_popup_submenu_pane

0x9430,	// (0x0004285d) list_single_popup_submenu_pane_g1

0x9438,	// (0x00042865) list_single_popup_submenu_pane_t1_ParamLimits

0x9438,	// (0x00042865) list_single_popup_submenu_pane_t1

0xb522,	// (0x0004494f) bg_active_tab_pane_cp1_ParamLimits

0xb522,	// (0x0004494f) bg_active_tab_pane_cp1

0xba20,	// (0x00044e4d) tabs_2_active_pane_g1

0x944d,	// (0x0004287a) tabs_2_active_pane_t1

0xb522,	// (0x0004494f) bg_passive_tab_pane_cp1_ParamLimits

0xb522,	// (0x0004494f) bg_passive_tab_pane_cp1

0xba20,	// (0x00044e4d) tabs_2_passive_pane_g1

0x944d,	// (0x0004287a) tabs_2_passive_pane_t1

0xb530,	// (0x0004495d) bg_active_tab_pane_cp4

0x945f,	// (0x0004288c) tabs_2_long_active_pane_t1

0xba28,	// (0x00044e55) bg_passive_tab_pane_cp4

0x06f0,	// (0x00039b1d) list_single_midp_graphic_pane_g4_ParamLimits

0xb530,	// (0x0004495d) bg_active_tab_pane_cp5

0x9472,	// (0x0004289f) tabs_3_long_active_pane_t1

0xba28,	// (0x00044e55) bg_passive_tab_pane_cp5

0x06f0,	// (0x00039b1d) list_single_midp_graphic_pane_g4

0xb530,	// (0x0004495d) bg_popup_window_pane_cp13_ParamLimits

0xb530,	// (0x0004495d) bg_popup_window_pane_cp13

0xba34,	// (0x00044e61) listscroll_popup_fast_pane_ParamLimits

0xba34,	// (0x00044e61) listscroll_popup_fast_pane

0xba40,	// (0x00044e6d) grid_popup_fast_pane_ParamLimits

0xba40,	// (0x00044e6d) grid_popup_fast_pane

0xba52,	// (0x00044e7f) scroll_pane_cp9_ParamLimits

0xba52,	// (0x00044e7f) scroll_pane_cp9

0x4f13,	// (0x0003e340) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4f13,	// (0x0003e340) list_single_graphic_hl_pane_t1_cp2

0xba65,	// (0x00044e92) input_focus_pane_cp20_ParamLimits

0xba65,	// (0x00044e92) input_focus_pane_cp20

0xba73,	// (0x00044ea0) query_popup_data_pane_t1_ParamLimits

0xba73,	// (0x00044ea0) query_popup_data_pane_t1

0xba86,	// (0x00044eb3) query_popup_data_pane_t2_ParamLimits

0xba86,	// (0x00044eb3) query_popup_data_pane_t2

0xbacc,	// (0x00044ef9) query_popup_data_pane_t3_ParamLimits

0xbacc,	// (0x00044ef9) query_popup_data_pane_t3

0xbb0d,	// (0x00044f3a) query_popup_data_pane_t4_ParamLimits

0xbb0d,	// (0x00044f3a) query_popup_data_pane_t4

0xbb49,	// (0x00044f76) query_popup_data_pane_t5_ParamLimits

0xbb49,	// (0x00044f76) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x00048a9f) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x00048a9f) query_popup_data_pane_t

0xb93e,	// (0x00044d6b) bg_set_opt_pane_g1

0xb946,	// (0x00044d73) bg_set_opt_pane_g2

0xb94e,	// (0x00044d7b) bg_set_opt_pane_g3

0xb956,	// (0x00044d83) bg_set_opt_pane_g4

0xb95e,	// (0x00044d8b) bg_set_opt_pane_g5

0xb966,	// (0x00044d93) bg_set_opt_pane_g6

0xb96e,	// (0x00044d9b) bg_set_opt_pane_g7

0xb976,	// (0x00044da3) bg_set_opt_pane_g8

0xb97e,	// (0x00044dab) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x00048aaa) bg_set_opt_pane_g

0xf2bc,	// (0x000486e9) control_top_pane_stacon_ParamLimits

0xf2bc,	// (0x000486e9) control_top_pane_stacon

0xf30f,	// (0x0004873c) signal_pane_stacon_ParamLimits

0xf30f,	// (0x0004873c) signal_pane_stacon

0xbed5,	// (0x00045302) stacon_top_pane_g1_ParamLimits

0xbed5,	// (0x00045302) stacon_top_pane_g1

0xf334,	// (0x00048761) title_pane_stacon_ParamLimits

0xf334,	// (0x00048761) title_pane_stacon

0xf35e,	// (0x0004878b) uni_indicator_pane_stacon_ParamLimits

0xf35e,	// (0x0004878b) uni_indicator_pane_stacon

0xf373,	// (0x000487a0) battery_pane_stacon_ParamLimits

0xf373,	// (0x000487a0) battery_pane_stacon

0xf3b7,	// (0x000487e4) control_bottom_pane_stacon_ParamLimits

0xf3b7,	// (0x000487e4) control_bottom_pane_stacon

0xf3da,	// (0x00048807) navi_pane_stacon_ParamLimits

0xf3da,	// (0x00048807) navi_pane_stacon

0xbef7,	// (0x00045324) stacon_bottom_pane_g1_ParamLimits

0xbef7,	// (0x00045324) stacon_bottom_pane_g1

0xf07f,	// (0x000484ac) aid_levels_signal_lsc_ParamLimits

0xf07f,	// (0x000484ac) aid_levels_signal_lsc

0xf095,	// (0x000484c2) signal_pane_stacon_g1_ParamLimits

0xf095,	// (0x000484c2) signal_pane_stacon_g1

0xf0a9,	// (0x000484d6) signal_pane_stacon_g2_ParamLimits

0xf0a9,	// (0x000484d6) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x00048abd) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x00048abd) signal_pane_stacon_g

0xf0de,	// (0x0004850b) title_pane_stacon_t1_ParamLimits

0xf0de,	// (0x0004850b) title_pane_stacon_t1

0xbb8d,	// (0x00044fba) uni_indicator_pane_stacon_g1

0xbb97,	// (0x00044fc4) uni_indicator_pane_stacon_g2

0xbba1,	// (0x00044fce) uni_indicator_pane_stacon_g3

0xbbab,	// (0x00044fd8) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x00048ac9) uni_indicator_pane_stacon_g

0xf103,	// (0x00048530) control_top_pane_stacon_g1

0xf10b,	// (0x00048538) control_top_pane_stacon_t1_ParamLimits

0xf10b,	// (0x00048538) control_top_pane_stacon_t1

0xf142,	// (0x0004856f) aid_levels_battery_lsc_ParamLimits

0xf142,	// (0x0004856f) aid_levels_battery_lsc

0xf159,	// (0x00048586) battery_pane_stacon_g1_ParamLimits

0xf159,	// (0x00048586) battery_pane_stacon_g1

0xf16c,	// (0x00048599) battery_pane_stacon_g2_ParamLimits

0xf16c,	// (0x00048599) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x00048ad2) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x00048ad2) battery_pane_stacon_g

0xf1aa,	// (0x000485d7) navi_icon_pane_stacon

0xf1be,	// (0x000485eb) navi_navi_pane_stacon

0xf1aa,	// (0x000485d7) navi_text_pane_stacon

0xf103,	// (0x00048530) control_bottom_pane_stacon_g1

0xf1d2,	// (0x000485ff) control_bottom_pane_stacon_t1_ParamLimits

0xf1d2,	// (0x000485ff) control_bottom_pane_stacon_t1

0x949e,	// (0x000428cb) grid_app_pane_ParamLimits

0x949e,	// (0x000428cb) grid_app_pane

0x94d6,	// (0x00042903) scroll_pane_cp15_ParamLimits

0x94d6,	// (0x00042903) scroll_pane_cp15

0x94eb,	// (0x00042918) cell_app_pane_ParamLimits

0x94eb,	// (0x00042918) cell_app_pane

0x9530,	// (0x0004295d) cell_app_pane_g1_ParamLimits

0x9530,	// (0x0004295d) cell_app_pane_g1

0xbbcf,	// (0x00044ffc) cell_app_pane_g2_ParamLimits

0xbbcf,	// (0x00044ffc) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x00048ad7) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x00048ad7) cell_app_pane_g

0x9554,	// (0x00042981) cell_app_pane_t1_ParamLimits

0x9554,	// (0x00042981) cell_app_pane_t1

0xbbdb,	// (0x00045008) grid_highlight_pane_ParamLimits

0xbbdb,	// (0x00045008) grid_highlight_pane

0xb93e,	// (0x00044d6b) cell_highlight_pane_g1

0xb946,	// (0x00044d73) cell_highlight_pane_g2

0xb94e,	// (0x00044d7b) cell_highlight_pane_g3

0xb956,	// (0x00044d83) cell_highlight_pane_g4

0xb95e,	// (0x00044d8b) cell_highlight_pane_g5

0xb966,	// (0x00044d93) cell_highlight_pane_g6

0xb96e,	// (0x00044d9b) cell_highlight_pane_g7

0xb976,	// (0x00044da3) cell_highlight_pane_g8

0xb97e,	// (0x00044dab) cell_highlight_pane_g9

0xb4ca,	// (0x000448f7) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x00048a85) cell_highlight_pane_g

0xbbec,	// (0x00045019) bg_scroll_pane

0x9574,	// (0x000429a1) scroll_handle_pane

0xbc33,	// (0x00045060) scroll_bg_pane_g1

0xbc48,	// (0x00045075) scroll_bg_pane_g2

0xbc60,	// (0x0004508d) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x00048adc) scroll_bg_pane_g

0x9588,	// (0x000429b5) scroll_handle_focus_pane_ParamLimits

0x9588,	// (0x000429b5) scroll_handle_focus_pane

0xbc33,	// (0x00045060) scroll_handle_pane_g1

0xbc75,	// (0x000450a2) scroll_handle_pane_g2

0xbc60,	// (0x0004508d) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x00048ae3) scroll_handle_pane_g

0xb9c3,	// (0x00044df0) bg_popup_sub_pane_cp21_ParamLimits

0xb9c3,	// (0x00044df0) bg_popup_sub_pane_cp21

0x9595,	// (0x000429c2) popup_fep_japan_predictive_window_t1_ParamLimits

0x9595,	// (0x000429c2) popup_fep_japan_predictive_window_t1

0x95ac,	// (0x000429d9) popup_fep_japan_predictive_window_t2_ParamLimits

0x95ac,	// (0x000429d9) popup_fep_japan_predictive_window_t2

0x95df,	// (0x00042a0c) popup_fep_japan_predictive_window_t3_ParamLimits

0x95df,	// (0x00042a0c) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x00048aea) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x00048aea) popup_fep_japan_predictive_window_t

0xb4d4,	// (0x00044901) bg_popup_sub_pane_cp23

0x9616,	// (0x00042a43) listscroll_japin_cand_pane

0xbc89,	// (0x000450b6) popup_fep_japan_candidate_window_t1

0xbc97,	// (0x000450c4) candidate_pane_ParamLimits

0xbc97,	// (0x000450c4) candidate_pane

0x961e,	// (0x00042a4b) scroll_pane_cp30

0xbca9,	// (0x000450d6) list_single_popup_jap_candidate_pane_ParamLimits

0xbca9,	// (0x000450d6) list_single_popup_jap_candidate_pane

0xb4d4,	// (0x00044901) list_highlight_pane_cp30

0xbcbe,	// (0x000450eb) list_single_popup_jap_candidate_pane_t1

0xbccd,	// (0x000450fa) level_1_signal

0xbcda,	// (0x00045107) level_2_signal

0xbce7,	// (0x00045114) level_3_signal

0xbcf4,	// (0x00045121) level_4_signal

0xbd01,	// (0x0004512e) level_5_signal

0xbd0e,	// (0x0004513b) level_6_signal

0xbd1b,	// (0x00045148) level_7_signal

0xbccd,	// (0x000450fa) level_1_battery

0xbcda,	// (0x00045107) level_2_battery

0xbce7,	// (0x00045114) level_3_battery

0xbcf4,	// (0x00045121) level_4_battery

0xbd01,	// (0x0004512e) level_5_battery

0xbd0e,	// (0x0004513b) level_6_battery

0xbd1b,	// (0x00045148) level_7_battery

0xbd40,	// (0x0004516d) list_menu_pane_ParamLimits

0xbd40,	// (0x0004516d) list_menu_pane

0xbd56,	// (0x00045183) scroll_pane_cp25_ParamLimits

0xbd56,	// (0x00045183) scroll_pane_cp25

0x9626,	// (0x00042a53) list_double2_graphic_pane_cp2_ParamLimits

0x9626,	// (0x00042a53) list_double2_graphic_pane_cp2

0x9626,	// (0x00042a53) list_double2_large_graphic_pane_cp2_ParamLimits

0x9626,	// (0x00042a53) list_double2_large_graphic_pane_cp2

0x9626,	// (0x00042a53) list_double2_pane_cp2_ParamLimits

0x9626,	// (0x00042a53) list_double2_pane_cp2

0x9626,	// (0x00042a53) list_double_graphic_pane_cp2_ParamLimits

0x9626,	// (0x00042a53) list_double_graphic_pane_cp2

0x9626,	// (0x00042a53) list_double_large_graphic_pane_cp2_ParamLimits

0x9626,	// (0x00042a53) list_double_large_graphic_pane_cp2

0x9626,	// (0x00042a53) list_double_number_pane_cp2_ParamLimits

0x9626,	// (0x00042a53) list_double_number_pane_cp2

0x9626,	// (0x00042a53) list_double_pane_cp2_ParamLimits

0x9626,	// (0x00042a53) list_double_pane_cp2

0x9635,	// (0x00042a62) list_single_2graphic_pane_cp2_ParamLimits

0x9635,	// (0x00042a62) list_single_2graphic_pane_cp2

0x9635,	// (0x00042a62) list_single_graphic_heading_pane_cp2_ParamLimits

0x9635,	// (0x00042a62) list_single_graphic_heading_pane_cp2

0x9635,	// (0x00042a62) list_single_graphic_pane_cp2_ParamLimits

0x9635,	// (0x00042a62) list_single_graphic_pane_cp2

0x9635,	// (0x00042a62) list_single_heading_pane_cp2_ParamLimits

0x9635,	// (0x00042a62) list_single_heading_pane_cp2

0xbd7f,	// (0x000451ac) list_single_large_graphic_pane_cp2_ParamLimits

0xbd7f,	// (0x000451ac) list_single_large_graphic_pane_cp2

0x9635,	// (0x00042a62) list_single_number_heading_pane_cp2_ParamLimits

0x9635,	// (0x00042a62) list_single_number_heading_pane_cp2

0x9635,	// (0x00042a62) list_single_number_pane_cp2_ParamLimits

0x9635,	// (0x00042a62) list_single_number_pane_cp2

0x9647,	// (0x00042a74) list_single_pane_cp2_ParamLimits

0x9647,	// (0x00042a74) list_single_pane_cp2

0xbd99,	// (0x000451c6) bg_popup_sub_pane_cp22

0xf2a2,	// (0x000486cf) popup_side_volume_key_window_g1

0xf2ae,	// (0x000486db) popup_side_volume_key_window_t1

0x970f,	// (0x00042b3c) volume_small_pane_cp1

0xb522,	// (0x0004494f) bg_popup_sub_pane_cp24_ParamLimits

0xb522,	// (0x0004494f) bg_popup_sub_pane_cp24

0xbdaf,	// (0x000451dc) fep_china_uni_candidate_pane_ParamLimits

0xbdaf,	// (0x000451dc) fep_china_uni_candidate_pane

0xbdc3,	// (0x000451f0) fep_china_uni_entry_pane

0xbdd3,	// (0x00045200) popup_fep_china_uni_window_g1

0x9717,	// (0x00042b44) fep_china_uni_entry_pane_g1

0x971f,	// (0x00042b4c) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x00048b1b) fep_china_uni_entry_pane_g

0xbdef,	// (0x0004521c) fep_entry_item_pane

0xbdf9,	// (0x00045226) fep_candidate_item_pane

0x9727,	// (0x00042b54) fep_china_uni_candidate_pane_g1

0xbe01,	// (0x0004522e) fep_china_uni_candidate_pane_g2

0xbe09,	// (0x00045236) fep_china_uni_candidate_pane_g3

0x972f,	// (0x00042b5c) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x00048b20) fep_china_uni_candidate_pane_g

0xb4ca,	// (0x000448f7) fep_entry_item_pane_g1

0xbe11,	// (0x0004523e) fep_entry_item_pane_t1_ParamLimits

0xbe11,	// (0x0004523e) fep_entry_item_pane_t1

0xbe27,	// (0x00045254) fep_candidate_item_pane_t1_ParamLimits

0xbe27,	// (0x00045254) fep_candidate_item_pane_t1

0xbe3c,	// (0x00045269) fep_candidate_item_pane_t2_ParamLimits

0xbe3c,	// (0x00045269) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x00048b29) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x00048b29) fep_candidate_item_pane_t

0xb530,	// (0x0004495d) list_highlight_pane_cp31_ParamLimits

0xb530,	// (0x0004495d) list_highlight_pane_cp31

0xbe4e,	// (0x0004527b) level_1_signal_lsc

0xbe57,	// (0x00045284) level_2_signal_lsc

0xbe60,	// (0x0004528d) level_3_signal_lsc

0xbe69,	// (0x00045296) level_4_signal_lsc

0xbe72,	// (0x0004529f) level_5_signal_lsc

0xbe7b,	// (0x000452a8) level_6_signal_lsc

0xbe84,	// (0x000452b1) level_7_signal_lsc

0xbe84,	// (0x000452b1) level_1_battery_lsc

0xbe8d,	// (0x000452ba) level_2_battery_lsc

0xbe96,	// (0x000452c3) level_3_battery_lsc

0xbe9f,	// (0x000452cc) level_4_battery_lsc

0xbea8,	// (0x000452d5) level_5_battery_lsc

0xbeb1,	// (0x000452de) level_6_battery_lsc

0xbe4e,	// (0x0004527b) level_7_battery_lsc

0xbeba,	// (0x000452e7) scroll_handle_focus_pane_g1

0xbec3,	// (0x000452f0) scroll_handle_focus_pane_g2

0xbecc,	// (0x000452f9) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x00048b2e) scroll_handle_focus_pane_g

0x9737,	// (0x00042b64) list_single_2graphic_pane_g1_ParamLimits

0x9737,	// (0x00042b64) list_single_2graphic_pane_g1

0x8f75,	// (0x000423a2) list_single_2graphic_pane_g2_ParamLimits

0x8f75,	// (0x000423a2) list_single_2graphic_pane_g2

0xdb5c,	// (0x00046f89) list_single_2graphic_pane_g3_ParamLimits

0xdb5c,	// (0x00046f89) list_single_2graphic_pane_g3

0x9743,	// (0x00042b70) list_single_2graphic_pane_g4_ParamLimits

0x9743,	// (0x00042b70) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x00048b35) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x00048b35) list_single_2graphic_pane_g

0x9754,	// (0x00042b81) list_single_2graphic_pane_t1_ParamLimits

0x9754,	// (0x00042b81) list_single_2graphic_pane_t1

0x9782,	// (0x00042baf) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9782,	// (0x00042baf) list_double2_graphic_large_graphic_pane_g1

0x8fc8,	// (0x000423f5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8fc8,	// (0x000423f5) list_double2_graphic_large_graphic_pane_g2

0xdbee,	// (0x0004701b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xdbee,	// (0x0004701b) list_double2_graphic_large_graphic_pane_g3

0xdd2f,	// (0x0004715c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xdd2f,	// (0x0004715c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x00048b3e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x00048b3e) list_double2_graphic_large_graphic_pane_g

0xdd3b,	// (0x00047168) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xdd3b,	// (0x00047168) list_double2_graphic_large_graphic_pane_t1

0xdd51,	// (0x0004717e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xdd51,	// (0x0004717e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x00048b47) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x00048b47) list_double2_graphic_large_graphic_pane_t

0x9807,	// (0x00042c34) popup_fast_swap_window_ParamLimits

0x9807,	// (0x00042c34) popup_fast_swap_window

0x9823,	// (0x00042c50) popup_side_volume_key_window

0xbf82,	// (0x000453af) stacon_top_pane

0xbf8c,	// (0x000453b9) status_pane_ParamLimits

0xbf8c,	// (0x000453b9) status_pane

0xb4c0,	// (0x000448ed) status_small_pane

0xb4d4,	// (0x00044901) control_pane

0xb4d4,	// (0x00044901) stacon_bottom_pane

0xb8c9,	// (0x00044cf6) scroll_pane_cp121

0xb8c0,	// (0x00044ced) set_content_pane

0x9794,	// (0x00042bc1) bg_active_tab_pane_g1_cp1

0x979d,	// (0x00042bca) bg_active_tab_pane_g2_cp1

0x97a6,	// (0x00042bd3) bg_active_tab_pane_g3_cp1

0x9794,	// (0x00042bc1) bg_passive_tab_pane_g1_cp1

0x979d,	// (0x00042bca) bg_passive_tab_pane_g2_cp1

0x97a6,	// (0x00042bd3) bg_passive_tab_pane_g3_cp1

0x97af,	// (0x00042bdc) bg_active_tab_pane_g1_cp2

0x979d,	// (0x00042bca) bg_active_tab_pane_g2_cp2

0x97b8,	// (0x00042be5) bg_active_tab_pane_g3_cp2

0x97af,	// (0x00042bdc) bg_passive_tab_pane_g1_cp2

0x979d,	// (0x00042bca) bg_passive_tab_pane_g2_cp2

0x97b8,	// (0x00042be5) bg_passive_tab_pane_g3_cp2

0x97c1,	// (0x00042bee) bg_active_tab_pane_g1_cp3

0x979d,	// (0x00042bca) bg_active_tab_pane_g2_cp3

0x97ca,	// (0x00042bf7) bg_active_tab_pane_g3_cp3

0x97c1,	// (0x00042bee) bg_passive_tab_pane_g1_cp3

0x979d,	// (0x00042bca) bg_passive_tab_pane_g2_cp3

0x97ca,	// (0x00042bf7) bg_passive_tab_pane_g3_cp3

0x97d3,	// (0x00042c00) bg_active_tab_pane_g1_cp4

0x979d,	// (0x00042bca) bg_active_tab_pane_g2_cp4

0x97de,	// (0x00042c0b) bg_active_tab_pane_g3_cp4

0x97d3,	// (0x00042c00) bg_passive_tab_pane_g1_cp4

0x979d,	// (0x00042bca) bg_passive_tab_pane_g2_cp4

0x97de,	// (0x00042c0b) bg_passive_tab_pane_g3_cp4

0x97e9,	// (0x00042c16) bg_active_tab_pane_g1_cp5

0x979d,	// (0x00042bca) bg_active_tab_pane_g2_cp5

0x97f2,	// (0x00042c1f) bg_active_tab_pane_g3_cp5

0x97e9,	// (0x00042c16) bg_passive_tab_pane_g1_cp5

0x979d,	// (0x00042bca) bg_passive_tab_pane_g2_cp5

0x97f2,	// (0x00042c1f) bg_passive_tab_pane_g3_cp5

0x3bc0,	// (0x0003cfed) list_set_graphic_pane_ParamLimits

0x3bc0,	// (0x0003cfed) list_set_graphic_pane

0xb4d4,	// (0x00044901) bg_set_opt_pane_cp4

0xbf13,	// (0x00045340) list_set_graphic_pane_g1_ParamLimits

0xbf13,	// (0x00045340) list_set_graphic_pane_g1

0xbf1f,	// (0x0004534c) list_set_graphic_pane_g2_ParamLimits

0xbf1f,	// (0x0004534c) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x00048b4c) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x00048b4c) list_set_graphic_pane_g

0x0009,

0xfab0,	// (0x00048edd) volume_small_pane_cp_g

0x97fb,	// (0x00042c28) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x97fb,	// (0x00042c28) list_double2_large_graphic_pane_g1_cp2

0xbf41,	// (0x0004536e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbf41,	// (0x0004536e) list_double2_large_graphic_pane_g2_cp2

0xbf52,	// (0x0004537f) list_double2_large_graphic_pane_g3_cp2

0xbf5a,	// (0x00045387) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbf5a,	// (0x00045387) list_double2_large_graphic_pane_t1_cp2

0xbf70,	// (0x0004539d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbf70,	// (0x0004539d) list_double2_large_graphic_pane_t2_cp2

0xc6d9,	// (0x00045b06) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc6d9,	// (0x00045b06) list_double_large_graphic_pane_g1_cp2

0x3183,	// (0x0003c5b0) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3183,	// (0x0003c5b0) list_double_large_graphic_pane_g2_cp2

0xc0a8,	// (0x000454d5) list_double_large_graphic_pane_g3_cp2

0x3194,	// (0x0003c5c1) list_double_large_graphic_pane_g4_cp

0x319c,	// (0x0003c5c9) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x319c,	// (0x0003c5c9) list_double_large_graphic_pane_t1_cp2

0x31b3,	// (0x0003c5e0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x31b3,	// (0x0003c5e0) list_double_large_graphic_pane_t2_cp2

0xbf9a,	// (0x000453c7) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbf9a,	// (0x000453c7) list_double2_graphic_pane_g1_cp2

0xbfa8,	// (0x000453d5) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbfa8,	// (0x000453d5) list_double2_graphic_pane_g2_cp2

0xbfb9,	// (0x000453e6) list_double2_graphic_pane_g3_cp2

0xbfc3,	// (0x000453f0) list_double2_graphic_pane_t1_cp2_ParamLimits

0xbfc3,	// (0x000453f0) list_double2_graphic_pane_t1_cp2

0xbfd9,	// (0x00045406) list_double2_graphic_pane_t2_cp2_ParamLimits

0xbfd9,	// (0x00045406) list_double2_graphic_pane_t2_cp2

0xbfeb,	// (0x00045418) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbfeb,	// (0x00045418) list_single_number_heading_pane_g1_cp2

0xbff7,	// (0x00045424) list_single_number_heading_pane_g2_cp2

0xbfff,	// (0x0004542c) list_single_number_heading_pane_t1_cp2_ParamLimits

0xbfff,	// (0x0004542c) list_single_number_heading_pane_t1_cp2

0xc015,	// (0x00045442) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc015,	// (0x00045442) list_single_number_heading_pane_t2_cp2

0xc027,	// (0x00045454) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc027,	// (0x00045454) list_single_number_heading_pane_t3_cp2

0xbfeb,	// (0x00045418) list_single_heading_pane_g1_cp2_ParamLimits

0xbfeb,	// (0x00045418) list_single_heading_pane_g1_cp2

0xbff7,	// (0x00045424) list_single_heading_pane_g2_cp2

0xbfff,	// (0x0004542c) list_single_heading_pane_t1_cp2_ParamLimits

0xbfff,	// (0x0004542c) list_single_heading_pane_t1_cp2

0x2f7c,	// (0x0003c3a9) list_single_heading_pane_t2_cp2_ParamLimits

0x2f7c,	// (0x0003c3a9) list_single_heading_pane_t2_cp2

0x2ec4,	// (0x0003c2f1) list_double_graphic_pane_g1_cp2_ParamLimits

0x2ec4,	// (0x0003c2f1) list_double_graphic_pane_g1_cp2

0x2ed0,	// (0x0003c2fd) list_double_graphic_pane_g2_cp2_ParamLimits

0x2ed0,	// (0x0003c2fd) list_double_graphic_pane_g2_cp2

0x2edf,	// (0x0003c30c) list_double_graphic_pane_g3_cp2

0x2ee7,	// (0x0003c314) list_double_graphic_pane_t1_cp2_ParamLimits

0x2ee7,	// (0x0003c314) list_double_graphic_pane_t1_cp2

0x2efd,	// (0x0003c32a) list_double_graphic_pane_t2_cp2_ParamLimits

0x2efd,	// (0x0003c32a) list_double_graphic_pane_t2_cp2

0xc09c,	// (0x000454c9) list_double_number_pane_g1_cp2_ParamLimits

0xc09c,	// (0x000454c9) list_double_number_pane_g1_cp2

0xc0a8,	// (0x000454d5) list_double_number_pane_g2_cp2

0x2e88,	// (0x0003c2b5) list_double_number_pane_t1_cp2_ParamLimits

0x2e88,	// (0x0003c2b5) list_double_number_pane_t1_cp2

0x2e9c,	// (0x0003c2c9) list_double_number_pane_t2_cp2_ParamLimits

0x2e9c,	// (0x0003c2c9) list_double_number_pane_t2_cp2

0x2eb2,	// (0x0003c2df) list_double_number_pane_t3_cp2_ParamLimits

0x2eb2,	// (0x0003c2df) list_double_number_pane_t3_cp2

0x2d71,	// (0x0003c19e) list_single_graphic_pane_g1_cp2_ParamLimits

0x2d71,	// (0x0003c19e) list_single_graphic_pane_g1_cp2

0xc101,	// (0x0004552e) list_single_graphic_pane_g2_cp2_ParamLimits

0xc101,	// (0x0004552e) list_single_graphic_pane_g2_cp2

0xc10d,	// (0x0004553a) list_single_graphic_pane_g3_cp2

0x2d47,	// (0x0003c174) list_single_graphic_pane_t1_cp2_ParamLimits

0x2d47,	// (0x0003c174) list_single_graphic_pane_t1_cp2

0xc101,	// (0x0004552e) list_single_number_pane_g1_cp2_ParamLimits

0xc101,	// (0x0004552e) list_single_number_pane_g1_cp2

0xc10d,	// (0x0004553a) list_single_number_pane_g2_cp2

0x2d47,	// (0x0003c174) list_single_number_pane_t1_cp2_ParamLimits

0x2d47,	// (0x0003c174) list_single_number_pane_t1_cp2

0x2d5d,	// (0x0003c18a) list_single_number_pane_t2_cp2_ParamLimits

0x2d5d,	// (0x0003c18a) list_single_number_pane_t2_cp2

0xbf41,	// (0x0004536e) list_double2_pane_g1_cp2_ParamLimits

0xbf41,	// (0x0004536e) list_double2_pane_g1_cp2

0xbf52,	// (0x0004537f) list_double2_pane_g2_cp2

0xc074,	// (0x000454a1) list_double2_pane_t1_cp2_ParamLimits

0xc074,	// (0x000454a1) list_double2_pane_t1_cp2

0xc08a,	// (0x000454b7) list_double2_pane_t2_cp2_ParamLimits

0xc08a,	// (0x000454b7) list_double2_pane_t2_cp2

0xc09c,	// (0x000454c9) list_double_pane_g1_cp2_ParamLimits

0xc09c,	// (0x000454c9) list_double_pane_g1_cp2

0xc0a8,	// (0x000454d5) list_double_pane_g2_cp2

0xc0b0,	// (0x000454dd) list_double_pane_t1_cp2_ParamLimits

0xc0b0,	// (0x000454dd) list_double_pane_t1_cp2

0xc0c6,	// (0x000454f3) list_double_pane_t2_cp2_ParamLimits

0xc0c6,	// (0x000454f3) list_double_pane_t2_cp2

0x983d,	// (0x00042c6a) list_single_pane_cp2_g3

0xc101,	// (0x0004552e) list_single_pane_g1_cp2_ParamLimits

0xc101,	// (0x0004552e) list_single_pane_g1_cp2

0xc10d,	// (0x0004553a) list_single_pane_g2_cp2

0xc115,	// (0x00045542) list_single_pane_t1_cp2_ParamLimits

0xc115,	// (0x00045542) list_single_pane_t1_cp2

0x9845,	// (0x00042c72) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9845,	// (0x00042c72) list_single_large_graphic_pane_g1_cp2

0xc12d,	// (0x0004555a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc12d,	// (0x0004555a) list_single_large_graphic_pane_g2_cp2

0xc139,	// (0x00045566) list_single_large_graphic_pane_g3_cp2

0x9851,	// (0x00042c7e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9851,	// (0x00042c7e) list_single_large_graphic_pane_g4_cp1

0xc141,	// (0x0004556e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc141,	// (0x0004556e) list_single_large_graphic_pane_t1_cp2

0x2d13,	// (0x0003c140) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2d13,	// (0x0003c140) list_single_graphic_heading_pane_g1_cp2

0x2ce0,	// (0x0003c10d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2ce0,	// (0x0003c10d) list_single_graphic_heading_pane_g4_cp2

0xc10d,	// (0x0004553a) list_single_graphic_heading_pane_g5_cp2

0x2d1f,	// (0x0003c14c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2d1f,	// (0x0003c14c) list_single_graphic_heading_pane_t1_cp2

0x2d35,	// (0x0003c162) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2d35,	// (0x0003c162) list_single_graphic_heading_pane_t2_cp2

0x2cd4,	// (0x0003c101) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2cd4,	// (0x0003c101) list_single_2graphic_pane_g1_cp2

0x2ce0,	// (0x0003c10d) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2ce0,	// (0x0003c10d) list_single_2graphic_pane_g2_cp2

0xc10d,	// (0x0004553a) list_single_2graphic_pane_g3_cp2

0x2cf1,	// (0x0003c11e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2cf1,	// (0x0003c11e) list_single_2graphic_pane_g4_cp2

0x2cfd,	// (0x0003c12a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2cfd,	// (0x0003c12a) list_single_2graphic_pane_t1_cp2

0xb4ca,	// (0x000448f7) list_highlight_pane_g10_cp1

0x28bc,	// (0x0003bce9) list_highlight_pane_g1_cp1

0x28c4,	// (0x0003bcf1) list_highlight_pane_g2_cp1

0x28cc,	// (0x0003bcf9) list_highlight_pane_g3_cp1

0x28d4,	// (0x0003bd01) list_highlight_pane_g4_cp1

0x28dc,	// (0x0003bd09) list_highlight_pane_g5_cp1

0x28e4,	// (0x0003bd11) list_highlight_pane_g6_cp1

0x28ec,	// (0x0003bd19) list_highlight_pane_g7_cp1

0x28f4,	// (0x0003bd21) list_highlight_pane_g8_cp1

0x28fc,	// (0x0003bd29) list_highlight_pane_g9_cp1

0xc46e,	// (0x0004589b) form_field_slider_pane_t3

0xc47c,	// (0x000458a9) form_field_slider_pane_t4

0x2800,	// (0x0003bc2d) slider_form_pane_ParamLimits

0x2800,	// (0x0003bc2d) slider_form_pane

0xb4d4,	// (0x00044901) control_abbreviations

0xb4d4,	// (0x00044901) control_conventions

0xb4d4,	// (0x00044901) control_definitions

0xb4d4,	// (0x00044901) format_table_attribute

0xc6b0,	// (0x00045add) bg_popup_preview_window_pane_g9

0xb4d4,	// (0x00044901) format_table_data2

0xb4d4,	// (0x00044901) format_table_data3

0xb4d4,	// (0x00044901) format_table_data_example

0x0008,

0xb4d4,	// (0x00044901) intro_purpose

0xf8b6,	// (0x00048ce3) bg_popup_preview_window_pane_g

0xb4d4,	// (0x00044901) texts_category

0xb4d4,	// (0x00044901) texts_graphics

0xc157,	// (0x00045584) text_digital

0xc166,	// (0x00045593) text_primary

0xc175,	// (0x000455a2) text_primary_small

0xc184,	// (0x000455b1) text_secondary

0xc193,	// (0x000455c0) text_title

0xca1f,	// (0x00045e4c) bg_passive_tab_pane_g1_cp3_srt

0x979d,	// (0x00042bca) bg_passive_tab_pane_g2_cp3_srt

0xca28,	// (0x00045e55) bg_passive_tab_pane_g3_cp3_srt

0xb522,	// (0x0004494f) bg_active_tab_pane_cp3_srt_ParamLimits

0xb522,	// (0x0004494f) bg_active_tab_pane_cp3_srt

0xca31,	// (0x00045e5e) tabs_4_active_pane_srt_g1

0xca39,	// (0x00045e66) tabs_4_active_pane_srt_t1_ParamLimits

0xca39,	// (0x00045e66) tabs_4_active_pane_srt_t1

0xca1f,	// (0x00045e4c) bg_active_tab_pane_g1_cp3_copy1

0x979d,	// (0x00042bca) bg_active_tab_pane_g2_cp3_copy1

0xca28,	// (0x00045e55) bg_active_tab_pane_g3_cp3_copy1

0xb530,	// (0x0004495d) tabs_2_long_active_pane_srt_ParamLimits

0xb530,	// (0x0004495d) tabs_2_long_active_pane_srt

0xb530,	// (0x0004495d) tabs_2_long_passive_pane_srt_ParamLimits

0xb530,	// (0x0004495d) tabs_2_long_passive_pane_srt

0xba28,	// (0x00044e55) bg_passive_tab_pane_cp4_srt_ParamLimits

0xba28,	// (0x00044e55) bg_passive_tab_pane_cp4_srt

0xc7d0,	// (0x00045bfd) bg_passive_tab_pane_g1_cp4_srt

0x979d,	// (0x00042bca) bg_passive_tab_pane_g2_cp4_srt

0xc7d9,	// (0x00045c06) bg_passive_tab_pane_g3_cp4_srt

0xb530,	// (0x0004495d) bg_active_tab_pane_cp4_srt_ParamLimits

0xb530,	// (0x0004495d) bg_active_tab_pane_cp4_srt

0xc7e2,	// (0x00045c0f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc7e2,	// (0x00045c0f) tabs_2_long_active_pane_srt_t1

0xc7d0,	// (0x00045bfd) bg_active_tab_pane_g1_cp4_srt

0x979d,	// (0x00042bca) bg_active_tab_pane_g2_cp4_srt

0xc7d9,	// (0x00045c06) bg_active_tab_pane_g3_cp4_srt

0xb522,	// (0x0004494f) tabs_3_long_active_pane_srt_ParamLimits

0xb522,	// (0x0004494f) tabs_3_long_active_pane_srt

0xb522,	// (0x0004494f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb522,	// (0x0004494f) tabs_3_long_passive_pane_cp_srt

0xb522,	// (0x0004494f) tabs_3_long_passive_pane_srt_ParamLimits

0xb522,	// (0x0004494f) tabs_3_long_passive_pane_srt

0xba28,	// (0x00044e55) bg_passive_tab_pane_cp5_srt_ParamLimits

0xba28,	// (0x00044e55) bg_passive_tab_pane_cp5_srt

0x97e9,	// (0x00042c16) bg_passive_tab_pane_g1_cp5_srt

0x979d,	// (0x00042bca) bg_passive_tab_pane_g2_cp5_srt

0x97f2,	// (0x00042c1f) bg_passive_tab_pane_g3_cp5_srt

0xb530,	// (0x0004495d) bg_active_tab_pane_cp5_srt_ParamLimits

0xb530,	// (0x0004495d) bg_active_tab_pane_cp5_srt

0xc7ba,	// (0x00045be7) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc7ba,	// (0x00045be7) tabs_3_long_active_pane_srt_t1

0x97e9,	// (0x00042c16) bg_active_tab_pane_g1_cp5_srt

0x979d,	// (0x00042bca) bg_active_tab_pane_g2_cp5_srt

0x97f2,	// (0x00042c1f) bg_active_tab_pane_g3_cp5_srt

0x33c7,	// (0x0003c7f4) navi_text_pane_srt_t1

0x33bf,	// (0x0003c7ec) navi_icon_pane_srt_g1

0xc27e,	// (0x000456ab) midp_editing_number_pane_srt

0xc1a2,	// (0x000455cf) midp_ticker_pane_srt

0xc286,	// (0x000456b3) midp_ticker_pane_srt_g1

0xc28e,	// (0x000456bb) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x00048b6b) midp_ticker_pane_srt_g

0xc296,	// (0x000456c3) midp_ticker_pane_srt_t1

0x33b0,	// (0x0003c7dd) midp_editing_number_pane_t1_copy1

0x986b,	// (0x00042c98) listscroll_midp_pane

0x986b,	// (0x00042c98) midp_form_pane

0x98d6,	// (0x00042d03) midp_info_popup_window_ParamLimits

0x98d6,	// (0x00042d03) midp_info_popup_window

0xb9c3,	// (0x00044df0) bg_popup_sub_pane_cp50_ParamLimits

0xb9c3,	// (0x00044df0) bg_popup_sub_pane_cp50

0x24f0,	// (0x0003b91d) listscroll_midp_info_pane_ParamLimits

0x24f0,	// (0x0003b91d) listscroll_midp_info_pane

0x24d0,	// (0x0003b8fd) listscroll_form_midp_pane_ParamLimits

0x24d0,	// (0x0003b8fd) listscroll_form_midp_pane

0x24dc,	// (0x0003b909) scroll_bar_cp050

0x24d0,	// (0x0003b8fd) list_midp_pane

0xcbc3,	// (0x00045ff0) signal_pane_g2_cp

0x23ea,	// (0x0003b817) listscroll_midp_info_pane_t1_ParamLimits

0x23ea,	// (0x0003b817) listscroll_midp_info_pane_t1

0xa8fa,	// (0x00043d27) listscroll_midp_info_pane_t2_ParamLimits

0xa8fa,	// (0x00043d27) listscroll_midp_info_pane_t2

0xa938,	// (0x00043d65) listscroll_midp_info_pane_t3_ParamLimits

0xa938,	// (0x00043d65) listscroll_midp_info_pane_t3

0xa972,	// (0x00043d9f) listscroll_midp_info_pane_t4_ParamLimits

0xa972,	// (0x00043d9f) listscroll_midp_info_pane_t4

0x0003,

0xf7f1,	// (0x00048c1e) listscroll_midp_info_pane_t_ParamLimits

0xf7f1,	// (0x00048c1e) listscroll_midp_info_pane_t

0xba18,	// (0x00044e45) scroll_pane_cp21

0x238a,	// (0x0003b7b7) form_midp_field_choice_group_pane

0xa8bd,	// (0x00043cea) form_midp_field_text_pane

0x23d0,	// (0x0003b7fd) form_midp_field_time_pane

0x23d8,	// (0x0003b805) form_midp_gauge_slider_pane

0x23e1,	// (0x0003b80e) form_midp_gauge_wait_pane

0xb4d4,	// (0x00044901) form_midp_image_pane

0xa8a5,	// (0x00043cd2) list_single_midp_pane_ParamLimits

0xa8a5,	// (0x00043cd2) list_single_midp_pane

0xa883,	// (0x00043cb0) form_midp_field_text_pane_t1

0x2109,	// (0x0003b536) input_focus_pane_cp050

0x2379,	// (0x0003b7a6) list_midp_form_text_pane

0x230e,	// (0x0003b73b) form_midp_field_choice_group_pane_t1

0x231c,	// (0x0003b749) input_focus_pane_cp051

0x2330,	// (0x0003b75d) list_midp_choice_pane

0xb4d4,	// (0x00044901) status_idle_pane

0x22f2,	// (0x0003b71f) form_midp_field_time_pane_t1

0xb4ca,	// (0x000448f7) wait_anim_pane_g2_copy1

0x2300,	// (0x0003b72d) form_midp_field_time_pane_t2

0x0001,

0xc202,	// (0x0004562f) aid_navinavi_width_2_pane

0xf7ec,	// (0x00048c19) form_midp_field_time_pane_t

0xb4d4,	// (0x00044901) input_focus_pane_cp052

0xb4d4,	// (0x00044901) bg_input_focus_pane_cp040

0x22b2,	// (0x0003b6df) form_midp_gauge_slider_pane_t1

0x22c0,	// (0x0003b6ed) form_midp_gauge_slider_pane_t2

0xa867,	// (0x00043c94) form_midp_gauge_slider_pane_t3

0xa875,	// (0x00043ca2) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e3,	// (0x00048c10) form_midp_gauge_slider_pane_t

0x22ea,	// (0x0003b717) form_midp_slider_pane

0xb530,	// (0x0004495d) bg_input_focus_pane_cp041_ParamLimits

0xb530,	// (0x0004495d) bg_input_focus_pane_cp041

0x227f,	// (0x0003b6ac) form_midp_gauge_wait_pane_t1_ParamLimits

0x227f,	// (0x0003b6ac) form_midp_gauge_wait_pane_t1

0x2291,	// (0x0003b6be) form_midp_gauge_wait_pane_t2_ParamLimits

0x2291,	// (0x0003b6be) form_midp_gauge_wait_pane_t2

0x0001,

0xf7de,	// (0x00048c0b) form_midp_gauge_wait_pane_t_ParamLimits

0xf7de,	// (0x00048c0b) form_midp_gauge_wait_pane_t

0x22a3,	// (0x0003b6d0) form_midp_wait_pane_ParamLimits

0x22a3,	// (0x0003b6d0) form_midp_wait_pane

0xa831,	// (0x00043c5e) form_midp_image_pane_g1

0xa83a,	// (0x00043c67) form_midp_image_pane_t1

0xa849,	// (0x00043c76) form_midp_image_pane_t2

0xa858,	// (0x00043c85) form_midp_image_pane_t3

0x0002,

0xf7d7,	// (0x00048c04) form_midp_image_pane_t

0x2240,	// (0x0003b66d) list_single_midp_pane_g1

0xde87,	// (0x000472b4) list_single_midp_pane_t1

0xa81c,	// (0x00043c49) list_midp_form_item_pane_ParamLimits

0xa81c,	// (0x00043c49) list_midp_form_item_pane

0xc1aa,	// (0x000455d7) list_midp_form_item_pane_t1

0xc1b9,	// (0x000455e6) midp_ticker_pane_g1

0xc1c5,	// (0x000455f2) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x00048b51) midp_ticker_pane_g

0xc1d1,	// (0x000455fe) midp_ticker_pane_t1

0x35fd,	// (0x0003ca2a) midp_editing_number_pane_t1

0x35db,	// (0x0003ca08) midp_editing_number_pane

0x35ea,	// (0x0003ca17) midp_ticker_pane

0x33a0,	// (0x0003c7cd) ai_message_heading_pane

0xb4d4,	// (0x00044901) bg_popup_window_pane_cp14

0x33a8,	// (0x0003c7d5) listscroll_ai_message_pane

0x332a,	// (0x0003c757) ai_message_heading_pane_g1_ParamLimits

0x332a,	// (0x0003c757) ai_message_heading_pane_g1

0xc782,	// (0x00045baf) ai_message_heading_pane_g2_ParamLimits

0xc782,	// (0x00045baf) ai_message_heading_pane_g2

0x3342,	// (0x0003c76f) ai_message_heading_pane_g3_ParamLimits

0x3342,	// (0x0003c76f) ai_message_heading_pane_g3

0x334e,	// (0x0003c77b) ai_message_heading_pane_g4_ParamLimits

0x334e,	// (0x0003c77b) ai_message_heading_pane_g4

0x0003,

0xf918,	// (0x00048d45) ai_message_heading_pane_g_ParamLimits

0xf918,	// (0x00048d45) ai_message_heading_pane_g

0xc78e,	// (0x00045bbb) ai_message_heading_pane_t1_ParamLimits

0xc78e,	// (0x00045bbb) ai_message_heading_pane_t1

0xc7a8,	// (0x00045bd5) ai_message_heading_pane_t2_ParamLimits

0xc7a8,	// (0x00045bd5) ai_message_heading_pane_t2

0x0001,

0xf921,	// (0x00048d4e) ai_message_heading_pane_t_ParamLimits

0xf921,	// (0x00048d4e) ai_message_heading_pane_t

0x3386,	// (0x0003c7b3) bg_popup_heading_pane_cp1_ParamLimits

0x3386,	// (0x0003c7b3) bg_popup_heading_pane_cp1

0x3318,	// (0x0003c745) list_ai_message_pane_ParamLimits

0x3318,	// (0x0003c745) list_ai_message_pane

0xba18,	// (0x00044e45) scroll_pane_cp10

0xc77a,	// (0x00045ba7) list_ai_message_pane_g1

0x32bc,	// (0x0003c6e9) list_ai_message_pane_g2

0x0001,

0xf8f5,	// (0x00048d22) list_ai_message_pane_g

0x32c4,	// (0x0003c6f1) list_ai_message_pane_t1_ParamLimits

0x32c4,	// (0x0003c6f1) list_ai_message_pane_t1

0x32d9,	// (0x0003c706) list_ai_message_pane_t2_ParamLimits

0x32d9,	// (0x0003c706) list_ai_message_pane_t2

0x32ee,	// (0x0003c71b) list_ai_message_pane_t3_ParamLimits

0x32ee,	// (0x0003c71b) list_ai_message_pane_t3

0x3303,	// (0x0003c730) list_ai_message_pane_t4_ParamLimits

0x3303,	// (0x0003c730) list_ai_message_pane_t4

0x0003,

0xf8fa,	// (0x00048d27) list_ai_message_pane_t_ParamLimits

0xf8fa,	// (0x00048d27) list_ai_message_pane_t

0xc756,	// (0x00045b83) cell_ai_soft_ind_pane_ParamLimits

0xc756,	// (0x00045b83) cell_ai_soft_ind_pane

0xc1e3,	// (0x00045610) cell_ai_soft_ind_pane_g1_ParamLimits

0xc1e3,	// (0x00045610) cell_ai_soft_ind_pane_g1

0xb4d4,	// (0x00044901) grid_highlight_cp1

0xc1f0,	// (0x0004561d) text_secondary_cp56_ParamLimits

0xc1f0,	// (0x0004561d) text_secondary_cp56

0x3274,	// (0x0003c6a1) example_general_pane_ParamLimits

0x3274,	// (0x0003c6a1) example_general_pane

0x3280,	// (0x0003c6ad) example_parent_pane_g1_ParamLimits

0x3280,	// (0x0003c6ad) example_parent_pane_g1

0x328c,	// (0x0003c6b9) example_parent_pane_t1_ParamLimits

0x328c,	// (0x0003c6b9) example_parent_pane_t1

0x9fa0,	// (0x000433cd) popup_preview_text_window_ParamLimits

0x9fa0,	// (0x000433cd) popup_preview_text_window

0xc0f9,	// (0x00045526) list_single_pane_cp2_g4

0xb702,	// (0x00044b2f) bg_popup_preview_window_pane_ParamLimits

0xb702,	// (0x00044b2f) bg_popup_preview_window_pane

0xc6b8,	// (0x00045ae5) popup_preview_text_window_t1_ParamLimits

0xc6b8,	// (0x00045ae5) popup_preview_text_window_t1

0x2fec,	// (0x0003c419) popup_preview_text_window_t2_ParamLimits

0x2fec,	// (0x0003c419) popup_preview_text_window_t2

0x3035,	// (0x0003c462) popup_preview_text_window_t3_ParamLimits

0x3035,	// (0x0003c462) popup_preview_text_window_t3

0x307a,	// (0x0003c4a7) popup_preview_text_window_t4_ParamLimits

0x307a,	// (0x0003c4a7) popup_preview_text_window_t4

0x0004,

0xf8c9,	// (0x00048cf6) popup_preview_text_window_t_ParamLimits

0xf8c9,	// (0x00048cf6) popup_preview_text_window_t

0x30f8,	// (0x0003c525) scroll_pane_cp11

0x207d,	// (0x0003b4aa) bg_popup_preview_window_pane_g1

0xc678,	// (0x00045aa5) bg_popup_preview_window_pane_g2

0xc680,	// (0x00045aad) bg_popup_preview_window_pane_g3

0xc688,	// (0x00045ab5) bg_popup_preview_window_pane_g4

0xc690,	// (0x00045abd) bg_popup_preview_window_pane_g5

0xc698,	// (0x00045ac5) bg_popup_preview_window_pane_g6

0xc6a0,	// (0x00045acd) bg_popup_preview_window_pane_g7

0xc6a8,	// (0x00045ad5) bg_popup_preview_window_pane_g8

0xdb0b,	// (0x00046f38) aid_popup_width_pane

0x9f1c,	// (0x00043349) popup_midp_note_alarm_window_ParamLimits

0x9f1c,	// (0x00043349) popup_midp_note_alarm_window

0xb8da,	// (0x00044d07) data_form_pane_ParamLimits

0x9236,	// (0x00042663) form_field_data_pane_g1

0x9240,	// (0x0004266d) form_field_data_pane_t1_ParamLimits

0xb8e6,	// (0x00044d13) input_focus_pane_ParamLimits

0x925a,	// (0x00042687) data_form_wide_pane_ParamLimits

0x926b,	// (0x00042698) form_field_data_wide_pane_g1

0x9277,	// (0x000426a4) form_field_data_wide_pane_t1_ParamLimits

0xb7da,	// (0x00044c07) input_focus_pane_cp6_ParamLimits

0x940e,	// (0x0004283b) input_popup_find_pane_g1_ParamLimits

0x940e,	// (0x0004283b) input_popup_find_pane_g1

0xf17d,	// (0x000485aa) aid_navi_side_left_pane

0xf192,	// (0x000485bf) aid_navi_side_right_pane

0x29b7,	// (0x0003bde4) bg_popup_window_pane_cp30_ParamLimits

0x29b7,	// (0x0003bde4) bg_popup_window_pane_cp30

0x2a31,	// (0x0003be5e) popup_midp_note_alarm_window_g1_ParamLimits

0x2a31,	// (0x0003be5e) popup_midp_note_alarm_window_g1

0x2a61,	// (0x0003be8e) popup_midp_note_alarm_window_t1_ParamLimits

0x2a61,	// (0x0003be8e) popup_midp_note_alarm_window_t1

0xc4c1,	// (0x000458ee) popup_midp_note_alarm_window_t2_ParamLimits

0xc4c1,	// (0x000458ee) popup_midp_note_alarm_window_t2

0xc56f,	// (0x0004599c) popup_midp_note_alarm_window_t3_ParamLimits

0xc56f,	// (0x0004599c) popup_midp_note_alarm_window_t3

0xc597,	// (0x000459c4) popup_midp_note_alarm_window_t4_ParamLimits

0xc597,	// (0x000459c4) popup_midp_note_alarm_window_t4

0x2bf8,	// (0x0003c025) popup_midp_note_alarm_window_t5_ParamLimits

0x2bf8,	// (0x0003c025) popup_midp_note_alarm_window_t5

0x000a,

0xf866,	// (0x00048c93) popup_midp_note_alarm_window_t_ParamLimits

0xf866,	// (0x00048c93) popup_midp_note_alarm_window_t

0x2ca4,	// (0x0003c0d1) wait_bar_pane_cp1_ParamLimits

0x2ca4,	// (0x0003c0d1) wait_bar_pane_cp1

0xb4d4,	// (0x00044901) wait_anim_pane_copy1

0xb4d4,	// (0x00044901) wait_border_pane_copy1

0x26ad,	// (0x0003bada) wait_border_pane_g1_copy1

0x9291,	// (0x000426be) form_field_popup_pane_g1

0x9299,	// (0x000426c6) form_field_popup_pane_t1_ParamLimits

0xb8e6,	// (0x00044d13) input_focus_pane_cp7_ParamLimits

0xb914,	// (0x00044d41) list_form_pane_ParamLimits

0x92b3,	// (0x000426e0) form_field_popup_wide_pane_g1

0x92bb,	// (0x000426e8) form_field_popup_wide_pane_t1_ParamLimits

0xb8e6,	// (0x00044d13) input_focus_pane_cp8_ParamLimits

0xb920,	// (0x00044d4d) list_form_wide_pane_ParamLimits

0x3796,	// (0x0003cbc3) aid_size_cell_graphic_pane

0x9347,	// (0x00042774) data_form_pane_t1_ParamLimits

0xaa7e,	// (0x00043eab) data_form_wide_pane_t1_ParamLimits

0xa3e3,	// (0x00043810) bg_status_flat_pane

0x896e,	// (0x00041d9b) title_pane_t1_ParamLimits

0xb4ea,	// (0x00044917) title_pane_t2_ParamLimits

0xb510,	// (0x0004493d) title_pane_t3_ParamLimits

0xf532,	// (0x0004895f) title_pane_t_ParamLimits

0xbccd,	// (0x000450fa) level_1_signal_ParamLimits

0xbcda,	// (0x00045107) level_2_signal_ParamLimits

0xbce7,	// (0x00045114) level_3_signal_ParamLimits

0xbcf4,	// (0x00045121) level_4_signal_ParamLimits

0xbd01,	// (0x0004512e) level_5_signal_ParamLimits

0xbd0e,	// (0x0004513b) level_6_signal_ParamLimits

0xbd1b,	// (0x00045148) level_7_signal_ParamLimits

0xbccd,	// (0x000450fa) level_1_battery_ParamLimits

0xbcda,	// (0x00045107) level_2_battery_ParamLimits

0xbce7,	// (0x00045114) level_3_battery_ParamLimits

0xbcf4,	// (0x00045121) level_4_battery_ParamLimits

0xbd01,	// (0x0004512e) level_5_battery_ParamLimits

0xbd0e,	// (0x0004513b) level_6_battery_ParamLimits

0xbd1b,	// (0x00045148) level_7_battery_ParamLimits

0x28bc,	// (0x0003bce9) bg_status_flat_pane_g1

0x28c4,	// (0x0003bcf1) bg_status_flat_pane_g2

0x28cc,	// (0x0003bcf9) bg_status_flat_pane_g3

0x28d4,	// (0x0003bd01) bg_status_flat_pane_g4

0x28dc,	// (0x0003bd09) bg_status_flat_pane_g5

0x28e4,	// (0x0003bd11) bg_status_flat_pane_g6

0x28ec,	// (0x0003bd19) bg_status_flat_pane_g7

0x8a02,	// (0x00041e2f) tabs_3_active_pane_t1_ParamLimits

0x8a02,	// (0x00041e2f) tabs_3_passive_pane_t1_ParamLimits

0x8a1c,	// (0x00041e49) tabs_4_active_pane_t1_ParamLimits

0x8a1c,	// (0x00041e49) tabs_4_1_passive_pane_t1_ParamLimits

0x944d,	// (0x0004287a) tabs_2_active_pane_t1_ParamLimits

0x944d,	// (0x0004287a) tabs_2_passive_pane_t1_ParamLimits

0xb530,	// (0x0004495d) bg_active_tab_pane_cp4_ParamLimits

0x945f,	// (0x0004288c) tabs_2_long_active_pane_t1_ParamLimits

0xba28,	// (0x00044e55) bg_passive_tab_pane_cp4_ParamLimits

0x0724,	// (0x00039b51) list_single_midp_graphic_pane_t1_ParamLimits

0xb530,	// (0x0004495d) bg_active_tab_pane_cp5_ParamLimits

0x9472,	// (0x0004289f) tabs_3_long_active_pane_t1_ParamLimits

0xba28,	// (0x00044e55) bg_passive_tab_pane_cp5_ParamLimits

0x0724,	// (0x00039b51) list_single_midp_graphic_pane_t1

0xa3e3,	// (0x00043810) bg_status_flat_pane_ParamLimits

0x04f8,	// (0x00039925) indicator_pane_cp2_ParamLimits

0x04f8,	// (0x00039925) indicator_pane_cp2

0xa561,	// (0x0004398e) navi_pane_srt_ParamLimits

0xa561,	// (0x0004398e) navi_pane_srt

0x0647,	// (0x00039a74) popup_clock_digital_analogue_window_cp1

0xb574,	// (0x000449a1) indicator_pane_t1

0xc1a2,	// (0x000455cf) copy_highlight_pane

0xc1a2,	// (0x000455cf) cursor_graphics_pane

0xc1a2,	// (0x000455cf) graphic_within_text_pane

0xc1a2,	// (0x000455cf) link_highlight_pane

0x30bb,	// (0x0003c4e8) popup_preview_text_window_t5_ParamLimits

0x30bb,	// (0x0003c4e8) popup_preview_text_window_t5

0xc20a,	// (0x00045637) cursor_digital_pane

0xc20a,	// (0x00045637) cursor_primary_pane

0xc21b,	// (0x00045648) cursor_primary_small_pane

0xc223,	// (0x00045650) cursor_secondary_pane

0xc22b,	// (0x00045658) cursor_title_pane

0xc20a,	// (0x00045637) link_highlight_digital_pane

0xc212,	// (0x0004563f) link_highlight_primary_pane

0xc21b,	// (0x00045648) link_highlight_primary_small_pane

0xc223,	// (0x00045650) link_highlight_secondary_pane

0xc22b,	// (0x00045658) link_highlight_title_pane

0xc20a,	// (0x00045637) copy_highlight_digital_pane

0xc20a,	// (0x00045637) copy_highlight_primary_pane

0xc21b,	// (0x00045648) copy_highlight_primary_small_pane

0xc223,	// (0x00045650) copy_highlight_secondary_pane

0xc22b,	// (0x00045658) copy_highlight_title_pane

0xc223,	// (0x00045650) graphic_text_digital_pane

0x295a,	// (0x0003bd87) graphic_text_primary_pane

0x2963,	// (0x0003bd90) graphic_text_primary_small_pane

0xc21b,	// (0x00045648) graphic_text_secondary_pane

0xc20a,	// (0x00045637) graphic_text_title_pane

0x9927,	// (0x00042d54) cursor_primary_pane_g1

0x294c,	// (0x0003bd79) cursor_text_primary_t1

0xc4b7,	// (0x000458e4) cursor_primary_small_pane_g1

0x293e,	// (0x0003bd6b) cursor_text_primary_small_t1

0xc4ad,	// (0x000458da) cursor_primary_small_pane_g1_copy1

0x2926,	// (0x0003bd53) cursor_text_primary_small_t1_copy1

0x2904,	// (0x0003bd31) cursor_text_title_t1

0xc4a3,	// (0x000458d0) cursor_title_pane_g1

0x9927,	// (0x00042d54) cursor_digital_pane_g1

0xc233,	// (0x00045660) cursor_text_digital_t1

0xc241,	// (0x0004566e) link_highlight_primary_pane_g1

0x28ad,	// (0x0003bcda) link_highlight_primary_pane_t1

0xc241,	// (0x0004566e) link_highlight_primary_small_pane_g1

0xc249,	// (0x00045676) link_highlight_primary_small_pane_t1

0xc241,	// (0x0004566e) link_highlight_secondary_pane_g1

0xc258,	// (0x00045685) link_highlight_secondary_pane_t1

0x2812,	// (0x0003bc3f) link_highlight_title_pane_g1

0x2829,	// (0x0003bc56) link_highlight_title_pane_t1

0x2812,	// (0x0003bc3f) link_highlight_digital_pane_g1

0x281a,	// (0x0003bc47) link_highlight_digital_pane_t1

0x26cc,	// (0x0003baf9) copy_highlight_primary_pane_g1

0x26f2,	// (0x0003bb1f) copy_highlight_primary_pane_t1

0x26cc,	// (0x0003baf9) copy_highlight_primary_small_pane_g1

0x26e3,	// (0x0003bb10) copy_highlight_primary_small_pane_t1

0xc267,	// (0x00045694) copy_highlight_secondary_pane_g1

0xc26f,	// (0x0004569c) copy_highlight_secondary_pane_t1

0x26cc,	// (0x0003baf9) copy_highlight_title_pane_g1

0x26d4,	// (0x0003bb01) copy_highlight_title_pane_t1

0x26cc,	// (0x0003baf9) copy_highlight_digital_pane_g1

0x3964,	// (0x0003cd91) copy_highlight_digital_pane_t1

0x38b8,	// (0x0003cce5) graphic_text_primary_pane_g1

0x3948,	// (0x0003cd75) graphic_text_primary_pane_t1

0x3956,	// (0x0003cd83) graphic_text_primary_pane_t2

0x0001,

0xf995,	// (0x00048dc2) graphic_text_primary_pane_t

0x3924,	// (0x0003cd51) graphic_text_primary_small_pane_g1

0x392c,	// (0x0003cd59) graphic_text_primary_small_pane_t1

0x393a,	// (0x0003cd67) graphic_text_primary_small_pane_t2

0x0001,

0xf990,	// (0x00048dbd) graphic_text_primary_small_pane_t

0x3900,	// (0x0003cd2d) graphic_text_secondary_pane_g1

0x3908,	// (0x0003cd35) graphic_text_secondary_pane_t1

0x3916,	// (0x0003cd43) graphic_text_secondary_pane_t2

0x0001,

0xf98b,	// (0x00048db8) graphic_text_secondary_pane_t

0x38dc,	// (0x0003cd09) graphic_text_title_pane_g1

0x38e4,	// (0x0003cd11) graphic_text_title_pane_t1

0x38f2,	// (0x0003cd1f) graphic_text_title_pane_t2

0x0001,

0xf986,	// (0x00048db3) graphic_text_title_pane_t

0x38b8,	// (0x0003cce5) graphic_text_digital_pane_g1

0x38c0,	// (0x0003cced) graphic_text_digital_pane_t1

0x38ce,	// (0x0003ccfb) graphic_text_digital_pane_t2

0x0001,

0xf981,	// (0x00048dae) graphic_text_digital_pane_t

0xb530,	// (0x0004495d) navi_icon_pane_srt_ParamLimits

0xb530,	// (0x0004495d) navi_icon_pane_srt

0xb4d4,	// (0x00044901) navi_midp_pane_srt

0xb4d4,	// (0x00044901) navi_navi_pane_srt

0xb530,	// (0x0004495d) navi_text_pane_srt_ParamLimits

0xb530,	// (0x0004495d) navi_text_pane_srt

0x3883,	// (0x0003ccb0) navi_navi_icon_text_pane_srt

0x388b,	// (0x0003ccb8) navi_navi_pane_srt_g1_ParamLimits

0x388b,	// (0x0003ccb8) navi_navi_pane_srt_g1

0x389d,	// (0x0003ccca) navi_navi_pane_srt_g2_ParamLimits

0x389d,	// (0x0003ccca) navi_navi_pane_srt_g2

0x0001,

0xf97c,	// (0x00048da9) navi_navi_pane_srt_g_ParamLimits

0xf97c,	// (0x00048da9) navi_navi_pane_srt_g

0x38af,	// (0x0003ccdc) navi_navi_tabs_pane_srt

0x3883,	// (0x0003ccb0) navi_navi_text_pane_srt

0x3883,	// (0x0003ccb0) navi_navi_volume_pane_srt

0x3874,	// (0x0003cca1) navi_navi_text_pane_srt_t1

0x0bb2,	// (0x00039fdf) navi_navi_volume_pane_srt_g1

0x0bba,	// (0x00039fe7) volume_small_pane_srt_ParamLimits

0x0bba,	// (0x00039fe7) volume_small_pane_srt

0xf3fd,	// (0x0004882a) volume_small_pane_srt_g1_ParamLimits

0xf3fd,	// (0x0004882a) volume_small_pane_srt_g1

0xf40d,	// (0x0004883a) volume_small_pane_srt_g2_ParamLimits

0xf40d,	// (0x0004883a) volume_small_pane_srt_g2

0xf41e,	// (0x0004884b) volume_small_pane_srt_g3_ParamLimits

0xf41e,	// (0x0004884b) volume_small_pane_srt_g3

0xf42f,	// (0x0004885c) volume_small_pane_srt_g4_ParamLimits

0xf42f,	// (0x0004885c) volume_small_pane_srt_g4

0xf440,	// (0x0004886d) volume_small_pane_srt_g5_ParamLimits

0xf440,	// (0x0004886d) volume_small_pane_srt_g5

0xf451,	// (0x0004887e) volume_small_pane_srt_g6_ParamLimits

0xf451,	// (0x0004887e) volume_small_pane_srt_g6

0xf462,	// (0x0004888f) volume_small_pane_srt_g7_ParamLimits

0xf462,	// (0x0004888f) volume_small_pane_srt_g7

0xf473,	// (0x000488a0) volume_small_pane_srt_g8_ParamLimits

0xf473,	// (0x000488a0) volume_small_pane_srt_g8

0xf484,	// (0x000488b1) volume_small_pane_srt_g9_ParamLimits

0xf484,	// (0x000488b1) volume_small_pane_srt_g9

0xf495,	// (0x000488c2) volume_small_pane_srt_g10_ParamLimits

0xf495,	// (0x000488c2) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x00048b56) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x00048b56) volume_small_pane_srt_g

0x8d03,	// (0x00042130) query_popup_data_pane_cp2

0x385a,	// (0x0003cc87) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x385a,	// (0x0003cc87) navi_navi_icon_text_pane_srt_t1

0x295a,	// (0x0003bd87) navi_tabs_2_long_pane_srt

0x295a,	// (0x0003bd87) navi_tabs_2_pane_srt

0x295a,	// (0x0003bd87) navi_tabs_3_long_pane_srt

0x295a,	// (0x0003bd87) navi_tabs_3_pane_srt

0x295a,	// (0x0003bd87) navi_tabs_4_pane_srt

0xab06,	// (0x00043f33) tabs_2_active_pane_srt_ParamLimits

0xab06,	// (0x00043f33) tabs_2_active_pane_srt

0xab16,	// (0x00043f43) tabs_2_passive_pane_srt_ParamLimits

0xab16,	// (0x00043f43) tabs_2_passive_pane_srt

0x2109,	// (0x0003b536) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2109,	// (0x0003b536) bg_passive_tab_pane_cp1_srt

0xcac2,	// (0x00045eef) bg_passive_tab_pane_g1_cp1_srt

0x979d,	// (0x00042bca) bg_passive_tab_pane_g2_cp1_srt

0xcacb,	// (0x00045ef8) bg_passive_tab_pane_g3_cp1_srt

0xb522,	// (0x0004494f) bg_active_tab_pane_cp1_srt_ParamLimits

0xb522,	// (0x0004494f) bg_active_tab_pane_cp1_srt

0xcad4,	// (0x00045f01) tabs_2_active_pane_srt_g1

0xcadc,	// (0x00045f09) tabs_2_active_pane_srt_t1_ParamLimits

0xcadc,	// (0x00045f09) tabs_2_active_pane_srt_t1

0xcac2,	// (0x00045eef) bg_active_tab_pane_g1_cp1_srt

0x979d,	// (0x00042bca) bg_active_tab_pane_g2_cp1_srt

0xcacb,	// (0x00045ef8) bg_active_tab_pane_g3_cp1_srt

0xaad3,	// (0x00043f00) tabs_3_active_pane_srt_ParamLimits

0xaad3,	// (0x00043f00) tabs_3_active_pane_srt

0xaae4,	// (0x00043f11) tabs_3_passive_pane_cp_srt_ParamLimits

0xaae4,	// (0x00043f11) tabs_3_passive_pane_cp_srt

0xaaf5,	// (0x00043f22) tabs_3_passive_pane_srt_ParamLimits

0xaaf5,	// (0x00043f22) tabs_3_passive_pane_srt

0x2109,	// (0x0003b536) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2109,	// (0x0003b536) bg_passive_tab_pane_cp2_srt

0x9931,	// (0x00042d5e) bg_passive_tab_pane_g1_cp2_srt

0x979d,	// (0x00042bca) bg_passive_tab_pane_g2_cp2_srt

0x993a,	// (0x00042d67) bg_passive_tab_pane_g3_cp2_srt

0xb522,	// (0x0004494f) bg_active_tab_pane_cp2_srt_ParamLimits

0xb522,	// (0x0004494f) bg_active_tab_pane_cp2_srt

0xcaa4,	// (0x00045ed1) tabs_3_active_pane_srt_g1

0xcaac,	// (0x00045ed9) tabs_3_active_pane_srt_t1_ParamLimits

0xcaac,	// (0x00045ed9) tabs_3_active_pane_srt_t1

0x9931,	// (0x00042d5e) bg_active_tab_pane_g1_cp2_srt

0x979d,	// (0x00042bca) bg_active_tab_pane_g2_cp2_srt

0x993a,	// (0x00042d67) bg_active_tab_pane_g3_cp2_srt

0x0b17,	// (0x00039f44) tabs_4_active_pane_srt_ParamLimits

0x0b17,	// (0x00039f44) tabs_4_active_pane_srt

0x0b29,	// (0x00039f56) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0b29,	// (0x00039f56) tabs_4_passive_pane_cp2_srt

0xf4b5,	// (0x000488e2) aid_size_cell_toolbar

0x3458,	// (0x0003c885) main_idle_act_pane_ParamLimits

0xf503,	// (0x00048930) popup_large_graphic_colour_window_ParamLimits

0xa252,	// (0x0004367f) popup_toolbar_window_ParamLimits

0xa252,	// (0x0004367f) popup_toolbar_window

0x360c,	// (0x0003ca39) list_single_graphic_2heading_pane_ParamLimits

0x360c,	// (0x0003ca39) list_single_graphic_2heading_pane

0xbbb5,	// (0x00044fe2) aid_size_cell_apps_grid_lsc_pane

0xbbc7,	// (0x00044ff4) aid_size_cell_apps_grid_prt_pane

0xba28,	// (0x00044e55) bg_wml_button_pane_cp1_ParamLimits

0xba28,	// (0x00044e55) bg_wml_button_pane_cp1

0xa883,	// (0x00043cb0) form_midp_field_text_pane_t1_ParamLimits

0x2109,	// (0x0003b536) input_focus_pane_cp050_ParamLimits

0x2379,	// (0x0003b7a6) list_midp_form_text_pane_ParamLimits

0x231c,	// (0x0003b749) input_focus_pane_cp051_ParamLimits

0x2330,	// (0x0003b75d) list_midp_choice_pane_ParamLimits

0xa7e8,	// (0x00043c15) list_single_2graphic_pane_cp3_ParamLimits

0xa7e8,	// (0x00043c15) list_single_2graphic_pane_cp3

0xa7fc,	// (0x00043c29) list_single_midp_graphic_pane_ParamLimits

0xa7fc,	// (0x00043c29) list_single_midp_graphic_pane

0xdd73,	// (0x000471a0) list_single_graphic_2heading_pane_g1_ParamLimits

0xdd73,	// (0x000471a0) list_single_graphic_2heading_pane_g1

0xdd7f,	// (0x000471ac) list_single_graphic_2heading_pane_g4_ParamLimits

0xdd7f,	// (0x000471ac) list_single_graphic_2heading_pane_g4

0xdd8b,	// (0x000471b8) list_single_graphic_2heading_pane_g5_ParamLimits

0xdd8b,	// (0x000471b8) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x00048ba9) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x00048ba9) list_single_graphic_2heading_pane_g

0xdd97,	// (0x000471c4) list_single_graphic_2heading_pane_t1_ParamLimits

0xdd97,	// (0x000471c4) list_single_graphic_2heading_pane_t1

0xddab,	// (0x000471d8) list_single_graphic_2heading_pane_t2_ParamLimits

0xddab,	// (0x000471d8) list_single_graphic_2heading_pane_t2

0xddc5,	// (0x000471f2) list_single_graphic_2heading_pane_t3_ParamLimits

0xddc5,	// (0x000471f2) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x00048bb0) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x00048bb0) list_single_graphic_2heading_pane_t

0x1fbb,	// (0x0003b3e8) bg_popup_sub_pane_cp2

0x1fe5,	// (0x0003b412) grid_toobar_pane

0x0693,	// (0x00039ac0) cell_toolbar_pane_ParamLimits

0x0693,	// (0x00039ac0) cell_toolbar_pane

0x2021,	// (0x0003b44e) cell_toolbar_pane_g1_ParamLimits

0x2021,	// (0x0003b44e) cell_toolbar_pane_g1

0xa700,	// (0x00043b2d) cell_toolbar_pane_g2_ParamLimits

0xa700,	// (0x00043b2d) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x00048bbe) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x00048bbe) cell_toolbar_pane_g

0x2057,	// (0x0003b484) grid_highlight_pane_cp2_ParamLimits

0x2057,	// (0x0003b484) grid_highlight_pane_cp2

0x2071,	// (0x0003b49e) toolbar_button_pane

0x207d,	// (0x0003b4aa) toolbar_button_pane_g1

0x2085,	// (0x0003b4b2) toolbar_button_pane_g2

0x208d,	// (0x0003b4ba) toolbar_button_pane_g3

0x2095,	// (0x0003b4c2) toolbar_button_pane_g4

0x209d,	// (0x0003b4ca) toolbar_button_pane_g5

0x20a5,	// (0x0003b4d2) toolbar_button_pane_g6

0x20ad,	// (0x0003b4da) toolbar_button_pane_g7

0x20b5,	// (0x0003b4e2) toolbar_button_pane_g8

0x20bd,	// (0x0003b4ea) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x00048bc3) toolbar_button_pane_g

0x06cb,	// (0x00039af8) list_single_2graphic_pane_g1_cp3_ParamLimits

0x06cb,	// (0x00039af8) list_single_2graphic_pane_g1_cp3

0xa714,	// (0x00043b41) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa714,	// (0x00043b41) list_single_2graphic_pane_g2_cp3

0x06e8,	// (0x00039b15) list_single_2graphic_pane_g3_cp3

0x06f0,	// (0x00039b1d) list_single_2graphic_pane_g4_cp3_ParamLimits

0x06f0,	// (0x00039b1d) list_single_2graphic_pane_g4_cp3

0xa725,	// (0x00043b52) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa725,	// (0x00043b52) list_single_2graphic_pane_t1_cp3

0x0718,	// (0x00039b45) list_single_midp_graphic_pane_g2_ParamLimits

0x0718,	// (0x00039b45) list_single_midp_graphic_pane_g2

0xf4bd,	// (0x000488ea) aid_zoom_text_primary

0xdd63,	// (0x00047190) aid_zoom_text_secondary

0xc2e4,	// (0x00045711) status_small_pane_g7_ParamLimits

0xc2e4,	// (0x00045711) status_small_pane_g7

0x9996,	// (0x00042dc3) status_small_pane_t1_ParamLimits

0x894a,	// (0x00041d77) title_pane_g2

0x0003,

0xf529,	// (0x00048956) title_pane_g

0x8d5d,	// (0x0004218a) aid_size_cell_colour_1_pane_ParamLimits

0x8d5d,	// (0x0004218a) aid_size_cell_colour_1_pane

0x8d71,	// (0x0004219e) aid_size_cell_colour_2_pane_ParamLimits

0x8d71,	// (0x0004219e) aid_size_cell_colour_2_pane

0x8d85,	// (0x000421b2) aid_size_cell_colour_3_pane_ParamLimits

0x8d85,	// (0x000421b2) aid_size_cell_colour_3_pane

0x8d99,	// (0x000421c6) aid_size_cell_colour_4_pane_ParamLimits

0x8d99,	// (0x000421c6) aid_size_cell_colour_4_pane

0xf0ba,	// (0x000484e7) title_pane_stacon_g1_ParamLimits

0xf0ba,	// (0x000484e7) title_pane_stacon_g1

0x2749,	// (0x0003bb76) popup_note_wait_window_g3_ParamLimits

0x2749,	// (0x0003bb76) popup_note_wait_window_g3

0x27bf,	// (0x0003bbec) popup_note_wait_window_t5_ParamLimits

0x27bf,	// (0x0003bbec) popup_note_wait_window_t5

0xb4d4,	// (0x00044901) main_feb_china_hwr_fs_writing_pane

0x9c06,	// (0x00043033) popup_feb_china_hwr_fs_window_ParamLimits

0x9c06,	// (0x00043033) popup_feb_china_hwr_fs_window

0xa741,	// (0x00043b6e) aid_size_cell_hwr_fs_ParamLimits

0xa741,	// (0x00043b6e) aid_size_cell_hwr_fs

0x2109,	// (0x0003b536) bg_popup_sub_pane_cp3_ParamLimits

0x2109,	// (0x0003b536) bg_popup_sub_pane_cp3

0xa756,	// (0x00043b83) grid_hwr_fs_pane_ParamLimits

0xa756,	// (0x00043b83) grid_hwr_fs_pane

0x0767,	// (0x00039b94) linegrid_hwr_fs_pane_ParamLimits

0x0767,	// (0x00039b94) linegrid_hwr_fs_pane

0xa76e,	// (0x00043b9b) cell_hwr_fs_pane_ParamLimits

0xa76e,	// (0x00043b9b) cell_hwr_fs_pane

0x2115,	// (0x0003b542) linegrid_hwr_fs_pane_g1_ParamLimits

0x2115,	// (0x0003b542) linegrid_hwr_fs_pane_g1

0xa794,	// (0x00043bc1) linegrid_hwr_fs_pane_g2_ParamLimits

0xa794,	// (0x00043bc1) linegrid_hwr_fs_pane_g2

0x2133,	// (0x0003b560) linegrid_hwr_fs_pane_g3_ParamLimits

0x2133,	// (0x0003b560) linegrid_hwr_fs_pane_g3

0xa7a6,	// (0x00043bd3) linegrid_hwr_fs_pane_g4_ParamLimits

0xa7a6,	// (0x00043bd3) linegrid_hwr_fs_pane_g4

0x07b3,	// (0x00039be0) linegrid_hwr_fs_pane_g5_ParamLimits

0x07b3,	// (0x00039be0) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bc,	// (0x00048be9) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bc,	// (0x00048be9) linegrid_hwr_fs_pane_g

0x213f,	// (0x0003b56c) cell_hwr_fs_pane_g1_ParamLimits

0x213f,	// (0x0003b56c) cell_hwr_fs_pane_g1

0x1ef5,	// (0x0003b322) cell_hwr_fs_pane_g2_ParamLimits

0x1ef5,	// (0x0003b322) cell_hwr_fs_pane_g2

0xa7c0,	// (0x00043bed) cell_hwr_fs_pane_g3_ParamLimits

0xa7c0,	// (0x00043bed) cell_hwr_fs_pane_g3

0xa7cd,	// (0x00043bfa) cell_hwr_fs_pane_g4_ParamLimits

0xa7cd,	// (0x00043bfa) cell_hwr_fs_pane_g4

0x0003,

0xf7c7,	// (0x00048bf4) cell_hwr_fs_pane_g_ParamLimits

0xf7c7,	// (0x00048bf4) cell_hwr_fs_pane_g

0xa7da,	// (0x00043c07) cell_hwr_fs_pane_t1

0xb4d4,	// (0x00044901) grid_highlight_pane_cp6

0xb4d4,	// (0x00044901) main_idle_act2_pane

0xb9ff,	// (0x00044e2c) aid_inside_area_popup_secondary

0xc5d6,	// (0x00045a03) aid_inside_area_window_primary_ParamLimits

0xc5d6,	// (0x00045a03) aid_inside_area_window_primary

0xcafa,	// (0x00045f27) ai2_news_ticker_pane

0x397b,	// (0x0003cda8) aid_size_cell_ai1_link_ParamLimits

0x397b,	// (0x0003cda8) aid_size_cell_ai1_link

0xcb02,	// (0x00045f2f) popup_ai2_data_window_ParamLimits

0xcb02,	// (0x00045f2f) popup_ai2_data_window

0x39ab,	// (0x0003cdd8) popup_ai2_link_window_ParamLimits

0x39ab,	// (0x0003cdd8) popup_ai2_link_window

0x2109,	// (0x0003b536) bg_popup_sub_pane_cp4_ParamLimits

0x2109,	// (0x0003b536) bg_popup_sub_pane_cp4

0x39bf,	// (0x0003cdec) grid_ai2_link_pane_ParamLimits

0x39bf,	// (0x0003cdec) grid_ai2_link_pane

0x39d6,	// (0x0003ce03) popup_ai2_link_window_g1_ParamLimits

0x39d6,	// (0x0003ce03) popup_ai2_link_window_g1

0x39e2,	// (0x0003ce0f) popup_ai2_link_window_g2_ParamLimits

0x39e2,	// (0x0003ce0f) popup_ai2_link_window_g2

0x0001,

0xf99a,	// (0x00048dc7) popup_ai2_link_window_g_ParamLimits

0xf99a,	// (0x00048dc7) popup_ai2_link_window_g

0x39f1,	// (0x0003ce1e) ai2_mp_button_pane

0x39f9,	// (0x0003ce26) ai2_mp_volume_pane

0x231c,	// (0x0003b749) bg_popup_sub_pane_cp5_ParamLimits

0x231c,	// (0x0003b749) bg_popup_sub_pane_cp5

0x3a01,	// (0x0003ce2e) heading_ai2_gene_pane_ParamLimits

0x3a01,	// (0x0003ce2e) heading_ai2_gene_pane

0x3a0d,	// (0x0003ce3a) list_ai2_gene_pane_ParamLimits

0x3a0d,	// (0x0003ce3a) list_ai2_gene_pane

0x3a55,	// (0x0003ce82) cell_ai2_link_pane_ParamLimits

0x3a55,	// (0x0003ce82) cell_ai2_link_pane

0x3a6b,	// (0x0003ce98) cell_ai2_link_pane_g1

0xb4d4,	// (0x00044901) grid_highlight_pane_cp7

0x0bcf,	// (0x00039ffc) ai2_mp_volume_pane_g1

0x3b3b,	// (0x0003cf68) ai2_mp_volume_pane_g2

0x3ab0,	// (0x0003cedd) list_ai2_gene_pane_t1

0x3b43,	// (0x0003cf70) ai2_mp_volume_pane_g3

0x0002,

0xf9b3,	// (0x00048de0) ai2_mp_volume_pane_g

0xab26,	// (0x00043f53) volume_small_pane_cp3

0x3b4b,	// (0x0003cf78) aid_size_cell_ai2_button

0x3b53,	// (0x0003cf80) grid_ai2_button_pane

0x3b5c,	// (0x0003cf89) cell_ai2_button_pane_ParamLimits

0x3b5c,	// (0x0003cf89) cell_ai2_button_pane

0xb4ca,	// (0x000448f7) cell_ai2_button_pane_g1

0xb4d4,	// (0x00044901) grid_highlight_pane_cp8

0x3afb,	// (0x0003cf28) ai2_gene_pane_t1_ParamLimits

0x3afb,	// (0x0003cf28) ai2_gene_pane_t1

0x9b68,	// (0x00042f95) aid_height_parent_landscape

0xc82c,	// (0x00045c59) aid_height_set_list

0x3458,	// (0x0003c885) aid_size_parent

0x3796,	// (0x0003cbc3) aid_size_cell_graphic_pane_ParamLimits

0x3a1d,	// (0x0003ce4a) popup_ai2_data_window_g1_ParamLimits

0x3a1d,	// (0x0003ce4a) popup_ai2_data_window_g1

0x3a29,	// (0x0003ce56) ai2_news_ticker_pane_g1

0x3a31,	// (0x0003ce5e) ai2_news_ticker_pane_g2

0x0001,

0xf99f,	// (0x00048dcc) ai2_news_ticker_pane_g

0x3a39,	// (0x0003ce66) ai2_news_ticker_pane_t1

0x3a47,	// (0x0003ce74) ai2_news_ticker_pane_t2

0x0001,

0xf9a4,	// (0x00048dd1) ai2_news_ticker_pane_t

0x3a74,	// (0x0003cea1) heading_ai2_gene_pane_g1

0x3a7c,	// (0x0003cea9) heading_ai2_gene_pane_t1_ParamLimits

0x3a7c,	// (0x0003cea9) heading_ai2_gene_pane_t1

0x3a91,	// (0x0003cebe) list_highlight_pane_cp6

0x3a99,	// (0x0003cec6) ai2_gene_pane_ParamLimits

0x3a99,	// (0x0003cec6) ai2_gene_pane

0x3abe,	// (0x0003ceeb) list_ai2_gene_pane_t2

0x0001,

0xf9a9,	// (0x00048dd6) list_ai2_gene_pane_t

0x3acc,	// (0x0003cef9) list_highlight_pane_cp8_ParamLimits

0x3acc,	// (0x0003cef9) list_highlight_pane_cp8

0x3add,	// (0x0003cf0a) ai2_gene_pane_g1_ParamLimits

0x3add,	// (0x0003cf0a) ai2_gene_pane_g1

0x3aef,	// (0x0003cf1c) ai2_gene_pane_g2_ParamLimits

0x3aef,	// (0x0003cf1c) ai2_gene_pane_g2

0x0001,

0xf9ae,	// (0x00048ddb) ai2_gene_pane_g_ParamLimits

0xf9ae,	// (0x00048ddb) ai2_gene_pane_g

0xb885,	// (0x00044cb2) scroll_pane_cp12

0x9b25,	// (0x00042f52) control_pane_t3_ParamLimits

0x9b25,	// (0x00042f52) control_pane_t3

0x9987,	// (0x00042db4) status_small_pane_g8_ParamLimits

0x9987,	// (0x00042db4) status_small_pane_g8

0x9cc9,	// (0x000430f6) popup_find_window_ParamLimits

0x9f56,	// (0x00043383) popup_note_image_window_ParamLimits

0xdb44,	// (0x00046f71) list_double2_graphic_pane_vc_g1_ParamLimits

0xdb44,	// (0x00046f71) list_double2_graphic_pane_vc_g1

0xdddd,	// (0x0004720a) list_double2_graphic_pane_vc_g2_ParamLimits

0xdddd,	// (0x0004720a) list_double2_graphic_pane_vc_g2

0xdde9,	// (0x00047216) list_double2_graphic_pane_vc_g3_ParamLimits

0xdde9,	// (0x00047216) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x00048bb7) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x00048bb7) list_double2_graphic_pane_vc_g

0xdb68,	// (0x00046f95) list_double2_graphic_pane_vc_t1_ParamLimits

0xdb68,	// (0x00046f95) list_double2_graphic_pane_vc_t1

0xdb50,	// (0x00046f7d) list_single_heading_pane_vc_g1_ParamLimits

0xdb50,	// (0x00046f7d) list_single_heading_pane_vc_g1

0xdb5c,	// (0x00046f89) list_single_heading_pane_vc_g2_ParamLimits

0xdb5c,	// (0x00046f89) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x000489d0) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x000489d0) list_single_heading_pane_vc_g

0xddf5,	// (0x00047222) list_single_heading_pane_vc_t1_ParamLimits

0xddf5,	// (0x00047222) list_single_heading_pane_vc_t1

0xde0b,	// (0x00047238) list_single_heading_pane_vc_t2_ParamLimits

0xde0b,	// (0x00047238) list_single_heading_pane_vc_t2

0x0001,

0xf7ab,	// (0x00048bd8) list_single_heading_pane_vc_t_ParamLimits

0xf7ab,	// (0x00048bd8) list_single_heading_pane_vc_t

0x20c5,	// (0x0003b4f2) list_setting_number_pane_vc_g1_ParamLimits

0x20c5,	// (0x0003b4f2) list_setting_number_pane_vc_g1

0x20d1,	// (0x0003b4fe) list_setting_number_pane_vc_g2_ParamLimits

0x20d1,	// (0x0003b4fe) list_setting_number_pane_vc_g2

0x0001,

0xf7b0,	// (0x00048bdd) list_setting_number_pane_vc_g_ParamLimits

0xf7b0,	// (0x00048bdd) list_setting_number_pane_vc_g

0xde1d,	// (0x0004724a) list_setting_number_pane_vc_t1_ParamLimits

0xde1d,	// (0x0004724a) list_setting_number_pane_vc_t1

0xde31,	// (0x0004725e) list_setting_number_pane_vc_t2_ParamLimits

0xde31,	// (0x0004725e) list_setting_number_pane_vc_t2

0xde4d,	// (0x0004727a) list_setting_number_pane_vc_t3_ParamLimits

0xde4d,	// (0x0004727a) list_setting_number_pane_vc_t3

0x0002,

0xf7b5,	// (0x00048be2) list_setting_number_pane_vc_t_ParamLimits

0xf7b5,	// (0x00048be2) list_setting_number_pane_vc_t

0xde77,	// (0x000472a4) set_value_pane_vc_ParamLimits

0xde77,	// (0x000472a4) set_value_pane_vc

0x360c,	// (0x0003ca39) list_double2_graphic_pane_vc_ParamLimits

0x360c,	// (0x0003ca39) list_double2_graphic_pane_vc

0x360c,	// (0x0003ca39) list_double2_large_graphic_pane_vc_ParamLimits

0x360c,	// (0x0003ca39) list_double2_large_graphic_pane_vc

0x360c,	// (0x0003ca39) list_double2_pane_vc_ParamLimits

0x360c,	// (0x0003ca39) list_double2_pane_vc

0x360c,	// (0x0003ca39) list_double_graphic_heading_pane_vc_ParamLimits

0x360c,	// (0x0003ca39) list_double_graphic_heading_pane_vc

0x360c,	// (0x0003ca39) list_double_graphic_pane_vc_ParamLimits

0x360c,	// (0x0003ca39) list_double_graphic_pane_vc

0x360c,	// (0x0003ca39) list_double_heading_pane_vc_ParamLimits

0x360c,	// (0x0003ca39) list_double_heading_pane_vc

0xde96,	// (0x000472c3) list_double_large_graphic_pane_vc_ParamLimits

0xde96,	// (0x000472c3) list_double_large_graphic_pane_vc

0x360c,	// (0x0003ca39) list_double_number_pane_vc_ParamLimits

0x360c,	// (0x0003ca39) list_double_number_pane_vc

0x360c,	// (0x0003ca39) list_double_pane_vc_ParamLimits

0x360c,	// (0x0003ca39) list_double_pane_vc

0x360c,	// (0x0003ca39) list_double_time_pane_vc_ParamLimits

0x360c,	// (0x0003ca39) list_double_time_pane_vc

0x360c,	// (0x0003ca39) list_setting_number_pane_vc_ParamLimits

0x360c,	// (0x0003ca39) list_setting_number_pane_vc

0x360c,	// (0x0003ca39) list_setting_pane_vc_ParamLimits

0x360c,	// (0x0003ca39) list_setting_pane_vc

0x360c,	// (0x0003ca39) list_single_graphic_heading_pane_vc_ParamLimits

0x360c,	// (0x0003ca39) list_single_graphic_heading_pane_vc

0x360c,	// (0x0003ca39) list_single_heading_pane_vc_ParamLimits

0x360c,	// (0x0003ca39) list_single_heading_pane_vc

0x360c,	// (0x0003ca39) list_single_number_heading_pane_vc_ParamLimits

0x360c,	// (0x0003ca39) list_single_number_heading_pane_vc

0xdbca,	// (0x00046ff7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xdbca,	// (0x00046ff7) list_double_graphic_heading_pane_vc_g1

0xdddd,	// (0x0004720a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xdddd,	// (0x0004720a) list_double_graphic_heading_pane_vc_g2

0xdde9,	// (0x00047216) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xdde9,	// (0x00047216) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ba,	// (0x00048de7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ba,	// (0x00048de7) list_double_graphic_heading_pane_vc_g

0xdeb5,	// (0x000472e2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xdeb5,	// (0x000472e2) list_double_graphic_heading_pane_vc_t1

0xdec9,	// (0x000472f6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xdec9,	// (0x000472f6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c1,	// (0x00048dee) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c1,	// (0x00048dee) list_double_graphic_heading_pane_vc_t

0x20c5,	// (0x0003b4f2) list_setting_pane_vc_g1_ParamLimits

0x20c5,	// (0x0003b4f2) list_setting_pane_vc_g1

0x20d1,	// (0x0003b4fe) list_setting_pane_vc_g2_ParamLimits

0x20d1,	// (0x0003b4fe) list_setting_pane_vc_g2

0x0001,

0xf7b0,	// (0x00048bdd) list_setting_pane_vc_g_ParamLimits

0xf7b0,	// (0x00048bdd) list_setting_pane_vc_g

0xdee1,	// (0x0004730e) list_setting_pane_vc_t1_ParamLimits

0xdee1,	// (0x0004730e) list_setting_pane_vc_t1

0xdefd,	// (0x0004732a) list_setting_pane_vc_t2_ParamLimits

0xdefd,	// (0x0004732a) list_setting_pane_vc_t2

0x0001,

0xfa04,	// (0x00048e31) list_setting_pane_vc_t_ParamLimits

0xfa04,	// (0x00048e31) list_setting_pane_vc_t

0xde77,	// (0x000472a4) set_value_pane_cp_vc_ParamLimits

0xde77,	// (0x000472a4) set_value_pane_cp_vc

0xdb50,	// (0x00046f7d) list_single_number_heading_pane_vc_g1_ParamLimits

0xdb50,	// (0x00046f7d) list_single_number_heading_pane_vc_g1

0xdb5c,	// (0x00046f89) list_single_number_heading_pane_vc_g2_ParamLimits

0xdb5c,	// (0x00046f89) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x000489d0) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x000489d0) list_single_number_heading_pane_vc_g

0xdb7e,	// (0x00046fab) list_single_number_heading_pane_vc_t1_ParamLimits

0xdb7e,	// (0x00046fab) list_single_number_heading_pane_vc_t1

0xdf17,	// (0x00047344) list_single_number_heading_pane_vc_t2_ParamLimits

0xdf17,	// (0x00047344) list_single_number_heading_pane_vc_t2

0xdf2d,	// (0x0004735a) list_single_number_heading_pane_vc_t3_ParamLimits

0xdf2d,	// (0x0004735a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa09,	// (0x00048e36) list_single_number_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x00048e36) list_single_number_heading_pane_vc_t

0xdf3f,	// (0x0004736c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xdf3f,	// (0x0004736c) list_single_graphic_heading_pane_vc_g1

0xdb50,	// (0x00046f7d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xdb50,	// (0x00046f7d) list_single_graphic_heading_pane_vc_g4

0xdb5c,	// (0x00046f89) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xdb5c,	// (0x00046f89) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa10,	// (0x00048e3d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa10,	// (0x00048e3d) list_single_graphic_heading_pane_vc_g

0xdb7e,	// (0x00046fab) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xdb7e,	// (0x00046fab) list_single_graphic_heading_pane_vc_t1

0xdf4b,	// (0x00047378) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xdf4b,	// (0x00047378) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa17,	// (0x00048e44) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa17,	// (0x00048e44) list_single_graphic_heading_pane_vc_t

0xdb50,	// (0x00046f7d) list_double2_pane_vc_g1_ParamLimits

0xdb50,	// (0x00046f7d) list_double2_pane_vc_g1

0xdb5c,	// (0x00046f89) list_double2_pane_vc_g2_ParamLimits

0xdb5c,	// (0x00046f89) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x000489d0) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x000489d0) list_double2_pane_vc_g

0xdf5d,	// (0x0004738a) list_double2_pane_vc_t1_ParamLimits

0xdf5d,	// (0x0004738a) list_double2_pane_vc_t1

0xdbd6,	// (0x00047003) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xdbd6,	// (0x00047003) list_double2_large_graphic_pane_vc_g1

0xdb50,	// (0x00046f7d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xdb50,	// (0x00046f7d) list_double2_large_graphic_pane_vc_g2

0xdb5c,	// (0x00046f89) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xdb5c,	// (0x00046f89) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x000489ed) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x000489ed) list_double2_large_graphic_pane_vc_g

0xdb68,	// (0x00046f95) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdb68,	// (0x00046f95) list_double2_large_graphic_pane_vc_t1

0xdf75,	// (0x000473a2) list_double_time_pane_vc_g1_ParamLimits

0xdf75,	// (0x000473a2) list_double_time_pane_vc_g1

0xdf81,	// (0x000473ae) list_double_time_pane_vc_g2_ParamLimits

0xdf81,	// (0x000473ae) list_double_time_pane_vc_g2

0x0001,

0xfa1c,	// (0x00048e49) list_double_time_pane_vc_g_ParamLimits

0xfa1c,	// (0x00048e49) list_double_time_pane_vc_g

0xdf8d,	// (0x000473ba) list_double_time_pane_vc_t1_ParamLimits

0xdf8d,	// (0x000473ba) list_double_time_pane_vc_t1

0xdfb1,	// (0x000473de) list_double_time_pane_vc_t2_ParamLimits

0xdfb1,	// (0x000473de) list_double_time_pane_vc_t2

0xe000,	// (0x0004742d) list_double_time_pane_vc_t3_ParamLimits

0xe000,	// (0x0004742d) list_double_time_pane_vc_t3

0xe012,	// (0x0004743f) list_double_time_pane_vc_t4_ParamLimits

0xe012,	// (0x0004743f) list_double_time_pane_vc_t4

0x0003,

0xfa21,	// (0x00048e4e) list_double_time_pane_vc_t_ParamLimits

0xfa21,	// (0x00048e4e) list_double_time_pane_vc_t

0xdb50,	// (0x00046f7d) list_double_pane_vc_g1_ParamLimits

0xdb50,	// (0x00046f7d) list_double_pane_vc_g1

0xdb5c,	// (0x00046f89) list_double_pane_vc_g2_ParamLimits

0xdb5c,	// (0x00046f89) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x000489d0) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x000489d0) list_double_pane_vc_g

0xe026,	// (0x00047453) list_double_pane_vc_t1_ParamLimits

0xe026,	// (0x00047453) list_double_pane_vc_t1

0xe03a,	// (0x00047467) list_double_pane_vc_t2_ParamLimits

0xe03a,	// (0x00047467) list_double_pane_vc_t2

0x0001,

0xfa2a,	// (0x00048e57) list_double_pane_vc_t_ParamLimits

0xfa2a,	// (0x00048e57) list_double_pane_vc_t

0xdb50,	// (0x00046f7d) list_double_number_pane_vc_g1_ParamLimits

0xdb50,	// (0x00046f7d) list_double_number_pane_vc_g1

0xdb5c,	// (0x00046f89) list_double_number_pane_vc_g2_ParamLimits

0xdb5c,	// (0x00046f89) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x000489d0) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x000489d0) list_double_number_pane_vc_g

0xe052,	// (0x0004747f) list_double_number_pane_vc_t1_ParamLimits

0xe052,	// (0x0004747f) list_double_number_pane_vc_t1

0xe026,	// (0x00047453) list_double_number_pane_vc_t2_ParamLimits

0xe026,	// (0x00047453) list_double_number_pane_vc_t2

0xe064,	// (0x00047491) list_double_number_pane_vc_t3_ParamLimits

0xe064,	// (0x00047491) list_double_number_pane_vc_t3

0x0002,

0xfa2f,	// (0x00048e5c) list_double_number_pane_vc_t_ParamLimits

0xfa2f,	// (0x00048e5c) list_double_number_pane_vc_t

0xe07c,	// (0x000474a9) list_double_large_graphic_pane_vc_g1_ParamLimits

0xe07c,	// (0x000474a9) list_double_large_graphic_pane_vc_g1

0xe098,	// (0x000474c5) list_double_large_graphic_pane_vc_g2_ParamLimits

0xe098,	// (0x000474c5) list_double_large_graphic_pane_vc_g2

0xe0ac,	// (0x000474d9) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe0ac,	// (0x000474d9) list_double_large_graphic_pane_vc_g3

0xe0bb,	// (0x000474e8) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe0bb,	// (0x000474e8) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa36,	// (0x00048e63) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x00048e63) list_double_large_graphic_pane_vc_g

0xe0c7,	// (0x000474f4) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe0c7,	// (0x000474f4) list_double_large_graphic_pane_vc_t1

0xe0e3,	// (0x00047510) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe0e3,	// (0x00047510) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3f,	// (0x00048e6c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3f,	// (0x00048e6c) list_double_large_graphic_pane_vc_t

0xdddd,	// (0x0004720a) list_double_heading_pane_vc_g1_ParamLimits

0xdddd,	// (0x0004720a) list_double_heading_pane_vc_g1

0xdde9,	// (0x00047216) list_double_heading_pane_vc_g2_ParamLimits

0xdde9,	// (0x00047216) list_double_heading_pane_vc_g2

0x0001,

0xfa44,	// (0x00048e71) list_double_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x00048e71) list_double_heading_pane_vc_g

0xe105,	// (0x00047532) list_double_heading_pane_vc_t1_ParamLimits

0xe105,	// (0x00047532) list_double_heading_pane_vc_t1

0xe119,	// (0x00047546) list_double_heading_pane_vc_t2_ParamLimits

0xe119,	// (0x00047546) list_double_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x00048e76) list_double_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x00048e76) list_double_heading_pane_vc_t

0xe131,	// (0x0004755e) list_double_graphic_pane_vc_g1_ParamLimits

0xe131,	// (0x0004755e) list_double_graphic_pane_vc_g1

0xe144,	// (0x00047571) list_double_graphic_pane_vc_g2_ParamLimits

0xe144,	// (0x00047571) list_double_graphic_pane_vc_g2

0xdb50,	// (0x00046f7d) list_double_graphic_pane_vc_g3_ParamLimits

0xdb50,	// (0x00046f7d) list_double_graphic_pane_vc_g3

0x0003,

0xfa4e,	// (0x00048e7b) list_double_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x00048e7b) list_double_graphic_pane_vc_g

0xe161,	// (0x0004758e) list_double_graphic_pane_vc_t1_ParamLimits

0xe161,	// (0x0004758e) list_double_graphic_pane_vc_t1

0xe180,	// (0x000475ad) list_double_graphic_pane_vc_t2_ParamLimits

0xe180,	// (0x000475ad) list_double_graphic_pane_vc_t2

0x0001,

0xfa57,	// (0x00048e84) list_double_graphic_pane_vc_t_ParamLimits

0xfa57,	// (0x00048e84) list_double_graphic_pane_vc_t

0xdb17,	// (0x00046f44) aid_size_cell_fastswap

0x85c2,	// (0x000419ef) aid_size_cell_touch_ParamLimits

0x85c2,	// (0x000419ef) aid_size_cell_touch

0xf05f,	// (0x0004848c) popup_fast_swap_wide_window_ParamLimits

0xf05f,	// (0x0004848c) popup_fast_swap_wide_window

0x88e1,	// (0x00041d0e) touch_pane_ParamLimits

0x88e1,	// (0x00041d0e) touch_pane

0xb8d2,	// (0x00044cff) button_value_adjust_pane_cp2

0xdd0c,	// (0x00047139) button_value_adjust_pane_cp4

0xdd14,	// (0x00047141) form_field_data_pane_cp2

0x91e4,	// (0x00042611) form_field_data_wide_pane_cp2

0xbbec,	// (0x00045019) bg_scroll_pane_ParamLimits

0x9574,	// (0x000429a1) scroll_handle_pane_ParamLimits

0xf213,	// (0x00048640) scroll_sc2_down_pane_ParamLimits

0xf213,	// (0x00048640) scroll_sc2_down_pane

0xbc1d,	// (0x0004504a) scroll_sc2_up_pane_ParamLimits

0xbc1d,	// (0x0004504a) scroll_sc2_up_pane

0xcc4b,	// (0x00046078) grid_wheel_folder_pane_g1_ParamLimits

0xcc4b,	// (0x00046078) grid_wheel_folder_pane_g1

0xf395,	// (0x000487c2) clock_nsta_pane_cp2_ParamLimits

0xf395,	// (0x000487c2) clock_nsta_pane_cp2

0x986b,	// (0x00042c98) listscroll_midp_pane_ParamLimits

0x9877,	// (0x00042ca4) midp_canvas_pane

0xc306,	// (0x00045733) nsta_clock_indic_pane

0xc32e,	// (0x0004575b) listscroll_form_pane_vc

0xc336,	// (0x00045763) listscroll_set_pane_vc_ParamLimits

0xc336,	// (0x00045763) listscroll_set_pane_vc

0xa40b,	// (0x00043838) clock_nsta_pane

0xa435,	// (0x00043862) indicator_nsta_pane

0x1fbb,	// (0x0003b3e8) bg_popup_sub_pane_cp2_ParamLimits

0x1fcf,	// (0x0003b3fc) find_pane_cp2_ParamLimits

0x1fcf,	// (0x0003b3fc) find_pane_cp2

0x1fe5,	// (0x0003b412) grid_toobar_pane_ParamLimits

0x20dd,	// (0x0003b50a) list_form_gen_pane_vc_ParamLimits

0x20dd,	// (0x0003b50a) list_form_gen_pane_vc

0x20f3,	// (0x0003b520) scroll_pane_cp8_vc_ParamLimits

0x20f3,	// (0x0003b520) scroll_pane_cp8_vc

0x216f,	// (0x0003b59c) data_form_wide_pane_vc_ParamLimits

0x216f,	// (0x0003b59c) data_form_wide_pane_vc

0x217b,	// (0x0003b5a8) form_field_data_wide_pane_vc_g1

0x2183,	// (0x0003b5b0) form_field_data_wide_pane_vc_t1_ParamLimits

0x2183,	// (0x0003b5b0) form_field_data_wide_pane_vc_t1

0xb8e6,	// (0x00044d13) input_focus_pane_cp6_vc_ParamLimits

0xb8e6,	// (0x00044d13) input_focus_pane_cp6_vc

0x24d0,	// (0x0003b8fd) list_midp_pane_ParamLimits

0x3800,	// (0x0003cc2d) scroll_pane_cp16_ParamLimits

0x3800,	// (0x0003cc2d) scroll_pane_cp16

0x2526,	// (0x0003b953) button_value_adjust_pane_ParamLimits

0x2526,	// (0x0003b953) button_value_adjust_pane

0xc83d,	// (0x00045c6a) button_value_adjust_pane_cp6_ParamLimits

0xc83d,	// (0x00045c6a) button_value_adjust_pane_cp6

0xc957,	// (0x00045d84) settings_code_pane_cp_ParamLimits

0xc957,	// (0x00045d84) settings_code_pane_cp

0xb4ca,	// (0x000448f7) cell_touch_pane_g1

0xb4ca,	// (0x000448f7) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x00048afc) cell_touch_pane_g

0xcb18,	// (0x00045f45) cell_touch_pane_cp_ParamLimits

0xcb18,	// (0x00045f45) cell_touch_pane_cp

0xcb34,	// (0x00045f61) cell_touch_pane_ParamLimits

0xcb34,	// (0x00045f61) cell_touch_pane

0xb4ca,	// (0x000448f7) scroll_sc2_down_pane_g1

0xb4ca,	// (0x000448f7) scroll_sc2_up_pane_g1

0xb4d4,	// (0x00044901) bg_set_opt_pane_cp4_vc

0x3b90,	// (0x0003cfbd) list_set_graphic_pane_vc_g1_ParamLimits

0x3b90,	// (0x0003cfbd) list_set_graphic_pane_vc_g1

0x3b9c,	// (0x0003cfc9) list_set_graphic_pane_vc_g2_ParamLimits

0x3b9c,	// (0x0003cfc9) list_set_graphic_pane_vc_g2

0x0001,

0xf9c6,	// (0x00048df3) list_set_graphic_pane_vc_g_ParamLimits

0xf9c6,	// (0x00048df3) list_set_graphic_pane_vc_g

0x3ba8,	// (0x0003cfd5) text_primary_small_cp13_vc_ParamLimits

0x3ba8,	// (0x0003cfd5) text_primary_small_cp13_vc

0x3bc0,	// (0x0003cfed) list_set_graphic_pane_vc_ParamLimits

0x3bc0,	// (0x0003cfed) list_set_graphic_pane_vc

0xb4d4,	// (0x00044901) input_focus_pane_cp2_vc

0xb4ca,	// (0x000448f7) setting_code_pane_vc_g1

0xb547,	// (0x00044974) setting_code_pane_vc_t1

0x3bd3,	// (0x0003d000) set_text_pane_vc_t1_ParamLimits

0x3bd3,	// (0x0003d000) set_text_pane_vc_t1

0xb4d4,	// (0x00044901) input_focus_pane_cp1_vc

0x3bf0,	// (0x0003d01d) list_set_text_pane_vc

0xb4ca,	// (0x000448f7) setting_text_pane_vc_g1

0xb4d4,	// (0x00044901) bg_set_opt_pane_cp2_vc

0xb53e,	// (0x0004496b) setting_slider_graphic_pane_vc_g1

0x3bfa,	// (0x0003d027) setting_slider_graphic_pane_vc_t1

0x3c0a,	// (0x0003d037) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cb,	// (0x00048df8) setting_slider_graphic_pane_vc_t

0x3c1a,	// (0x0003d047) slider_set_pane_cp_vc

0x3c22,	// (0x0003d04f) slider_set_pane_vc_g1

0x3c2b,	// (0x0003d058) slider_set_pane_vc_g2

0x0006,

0xf9d0,	// (0x00048dfd) slider_set_pane_vc_g

0xb93e,	// (0x00044d6b) set_opt_bg_pane_g1_copy1

0xb946,	// (0x00044d73) set_opt_bg_pane_g2_copy1

0x3c57,	// (0x0003d084) set_opt_bg_pane_g3_copy1

0xb956,	// (0x00044d83) set_opt_bg_pane_g4_copy1

0xb95e,	// (0x00044d8b) set_opt_bg_pane_g5_copy1

0xb966,	// (0x00044d93) set_opt_bg_pane_g6_copy1

0x3c5f,	// (0x0003d08c) set_opt_bg_pane_g7_copy1

0x3c69,	// (0x0003d096) set_opt_bg_pane_g8_copy1

0x3c71,	// (0x0003d09e) set_opt_bg_pane_g9_copy1

0xb4d4,	// (0x00044901) bg_set_opt_pane_cp_vc

0x3c79,	// (0x0003d0a6) setting_slider_pane_vc_t1

0x3c88,	// (0x0003d0b5) setting_slider_pane_vc_t2

0x3c98,	// (0x0003d0c5) setting_slider_pane_vc_t3

0x0002,

0xf9df,	// (0x00048e0c) setting_slider_pane_vc_t

0x3ca8,	// (0x0003d0d5) slider_set_pane_vc

0x080a,	// (0x00039c37) volume_set_pane_vc_g1

0x0be0,	// (0x0003a00d) volume_set_pane_vc_g2

0x0be9,	// (0x0003a016) volume_set_pane_vc_g3

0x0bf2,	// (0x0003a01f) volume_set_pane_vc_g4

0x0bfb,	// (0x0003a028) volume_set_pane_vc_g5

0x0c04,	// (0x0003a031) volume_set_pane_vc_g6

0x0c0d,	// (0x0003a03a) volume_set_pane_vc_g7

0x0c16,	// (0x0003a043) volume_set_pane_vc_g8

0x0c1f,	// (0x0003a04c) volume_set_pane_vc_g9

0x0c28,	// (0x0003a055) volume_set_pane_vc_g10

0x0009,

0xf9e6,	// (0x00048e13) volume_set_pane_vc_g

0x3cb0,	// (0x0003d0dd) volume_set_pane_vc

0x3cba,	// (0x0003d0e7) button_value_adjust_pane_cp1_vc

0x3cc4,	// (0x0003d0f1) list_highlight_pane_cp2_vc

0x3ccd,	// (0x0003d0fa) list_set_pane_vc_ParamLimits

0x3ccd,	// (0x0003d0fa) list_set_pane_vc

0x3d2b,	// (0x0003d158) main_pane_set_vc_t1_ParamLimits

0x3d2b,	// (0x0003d158) main_pane_set_vc_t1

0x3d40,	// (0x0003d16d) main_pane_set_vc_t2_ParamLimits

0x3d40,	// (0x0003d16d) main_pane_set_vc_t2

0x3d52,	// (0x0003d17f) main_pane_set_vc_t3_ParamLimits

0x3d52,	// (0x0003d17f) main_pane_set_vc_t3

0x3d64,	// (0x0003d191) main_pane_set_vc_t4_ParamLimits

0x3d64,	// (0x0003d191) main_pane_set_vc_t4

0x0003,

0xf9fb,	// (0x00048e28) main_pane_set_vc_t_ParamLimits

0xf9fb,	// (0x00048e28) main_pane_set_vc_t

0x3d76,	// (0x0003d1a3) setting_code_pane_vc_ParamLimits

0x3d76,	// (0x0003d1a3) setting_code_pane_vc

0x3d85,	// (0x0003d1b2) setting_slider_graphic_pane_vc

0x3d85,	// (0x0003d1b2) setting_slider_pane_vc

0x3d85,	// (0x0003d1b2) setting_text_pane_vc

0x3d85,	// (0x0003d1b2) setting_volume_pane_vc

0x3d8d,	// (0x0003d1ba) scroll_pane_cp121_vc

0xb8c0,	// (0x00044ced) set_content_pane_vc

0x3d95,	// (0x0003d1c2) button_value_adjust_pane_g1

0x3d9e,	// (0x0003d1cb) button_value_adjust_pane_g2

0x0001,

0xfa5c,	// (0x00048e89) button_value_adjust_pane_g

0x3da7,	// (0x0003d1d4) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3da7,	// (0x0003d1d4) form_field_slider_wide_pane_vc_t1

0x3dbb,	// (0x0003d1e8) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3dbb,	// (0x0003d1e8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa61,	// (0x00048e8e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa61,	// (0x00048e8e) form_field_slider_wide_pane_vc_t

0xb522,	// (0x0004494f) input_focus_pane_cp10_vc_ParamLimits

0xb522,	// (0x0004494f) input_focus_pane_cp10_vc

0x3de9,	// (0x0003d216) slider_cont_pane_cp1_vc_ParamLimits

0x3de9,	// (0x0003d216) slider_cont_pane_cp1_vc

0x3dfb,	// (0x0003d228) slider_form_pane_g1_cp2

0x3c2b,	// (0x0003d058) slider_form_pane_g2_cp2

0x3e28,	// (0x0003d255) form_field_slider_pane_vc_t3

0x3e36,	// (0x0003d263) form_field_slider_pane_vc_t4

0x3e44,	// (0x0003d271) slider_form_pane_vc_ParamLimits

0x3e44,	// (0x0003d271) slider_form_pane_vc

0x3e51,	// (0x0003d27e) form_field_slider_pane_vc_t1_ParamLimits

0x3e51,	// (0x0003d27e) form_field_slider_pane_vc_t1

0x3dbb,	// (0x0003d1e8) form_field_slider_pane_vc_t2_ParamLimits

0x3dbb,	// (0x0003d1e8) form_field_slider_pane_vc_t2

0x0001,

0xfa73,	// (0x00048ea0) form_field_slider_pane_vc_t_ParamLimits

0xfa73,	// (0x00048ea0) form_field_slider_pane_vc_t

0xb522,	// (0x0004494f) input_focus_pane_cp9_vc_ParamLimits

0xb522,	// (0x0004494f) input_focus_pane_cp9_vc

0x3e6d,	// (0x0003d29a) slider_cont_pane_vc_ParamLimits

0x3e6d,	// (0x0003d29a) slider_cont_pane_vc

0x3e81,	// (0x0003d2ae) list_form_graphic_pane_cp_vc_ParamLimits

0x3e81,	// (0x0003d2ae) list_form_graphic_pane_cp_vc

0x217b,	// (0x0003b5a8) form_field_popup_wide_pane_vc_g1

0x3e96,	// (0x0003d2c3) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3e96,	// (0x0003d2c3) form_field_popup_wide_pane_vc_t1

0xb8e6,	// (0x00044d13) input_focus_pane_cp8_vc_ParamLimits

0xb8e6,	// (0x00044d13) input_focus_pane_cp8_vc

0x3edb,	// (0x0003d308) list_form_wide_pane_vc_ParamLimits

0x3edb,	// (0x0003d308) list_form_wide_pane_vc

0x3ee7,	// (0x0003d314) list_form_graphic_pane_vc_g1

0x3eef,	// (0x0003d31c) list_form_graphic_pane_vc_t1_ParamLimits

0x3eef,	// (0x0003d31c) list_form_graphic_pane_vc_t1

0xb530,	// (0x0004495d) list_highlight_pane_cp5_vc_ParamLimits

0xb530,	// (0x0004495d) list_highlight_pane_cp5_vc

0x3f0b,	// (0x0003d338) list_form_graphic_pane_vc_ParamLimits

0x3f0b,	// (0x0003d338) list_form_graphic_pane_vc

0x217b,	// (0x0003b5a8) form_field_popup_pane_vc_g1

0x3f21,	// (0x0003d34e) form_field_popup_pane_vc_t1_ParamLimits

0x3f21,	// (0x0003d34e) form_field_popup_pane_vc_t1

0xb8e6,	// (0x00044d13) input_focus_pane_cp7_vc_ParamLimits

0xb8e6,	// (0x00044d13) input_focus_pane_cp7_vc

0x3f38,	// (0x0003d365) list_form_pane_vc_ParamLimits

0x3f38,	// (0x0003d365) list_form_pane_vc

0x3f44,	// (0x0003d371) data_form_pane_vc_t1_ParamLimits

0x3f44,	// (0x0003d371) data_form_pane_vc_t1

0xb93e,	// (0x00044d6b) input_focus_pane_vc_g1

0xb946,	// (0x00044d73) input_focus_pane_vc_g2

0xb94e,	// (0x00044d7b) input_focus_pane_vc_g3

0xb956,	// (0x00044d83) input_focus_pane_vc_g4

0xb95e,	// (0x00044d8b) input_focus_pane_vc_g5

0xb966,	// (0x00044d93) input_focus_pane_vc_g6

0xb96e,	// (0x00044d9b) input_focus_pane_vc_g7

0xb976,	// (0x00044da3) input_focus_pane_vc_g8

0xb97e,	// (0x00044dab) input_focus_pane_vc_g9

0xb4ca,	// (0x000448f7) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x00048a85) input_focus_pane_vc_g

0x216f,	// (0x0003b59c) data_form_pane_vc_ParamLimits

0x216f,	// (0x0003b59c) data_form_pane_vc

0x217b,	// (0x0003b5a8) form_field_data_pane_vc_g1

0x3f5f,	// (0x0003d38c) form_field_data_pane_vc_t1_ParamLimits

0x3f5f,	// (0x0003d38c) form_field_data_pane_vc_t1

0xb8e6,	// (0x00044d13) input_focus_pane_vc_ParamLimits

0xb8e6,	// (0x00044d13) input_focus_pane_vc

0x3f79,	// (0x0003d3a6) button_value_adjust_pane_cp3_vc

0x3f81,	// (0x0003d3ae) button_value_adjust_pane_cp5_vc

0x3f89,	// (0x0003d3b6) form_field_data_pane_vc_ParamLimits

0x3f89,	// (0x0003d3b6) form_field_data_pane_vc

0x3fa0,	// (0x0003d3cd) form_field_data_pane_vc_cp2

0x3fa8,	// (0x0003d3d5) form_field_data_wide_pane_vc_ParamLimits

0x3fa8,	// (0x0003d3d5) form_field_data_wide_pane_vc

0x3fbe,	// (0x0003d3eb) form_field_data_wide_pane_vc_cp2

0x3fc6,	// (0x0003d3f3) form_field_popup_pane_vc_ParamLimits

0x3fc6,	// (0x0003d3f3) form_field_popup_pane_vc

0x3fdd,	// (0x0003d40a) form_field_popup_wide_pane_vc_ParamLimits

0x3fdd,	// (0x0003d40a) form_field_popup_wide_pane_vc

0x3ff3,	// (0x0003d420) form_field_slider_pane_vc_ParamLimits

0x3ff3,	// (0x0003d420) form_field_slider_pane_vc

0x4006,	// (0x0003d433) form_field_slider_wide_pane_vc_ParamLimits

0x4006,	// (0x0003d433) form_field_slider_wide_pane_vc

0xcb51,	// (0x00045f7e) grid_touch_1_pane_ParamLimits

0xcb51,	// (0x00045f7e) grid_touch_1_pane

0xcb65,	// (0x00045f92) grid_touch_2_pane_ParamLimits

0xcb65,	// (0x00045f92) grid_touch_2_pane

0x40ea,	// (0x0003d517) touch_pane_g1_ParamLimits

0x40ea,	// (0x0003d517) touch_pane_g1

0x403d,	// (0x0003d46a) cell_app_pane_cp_wide_ParamLimits

0x403d,	// (0x0003d46a) cell_app_pane_cp_wide

0x404e,	// (0x0003d47b) grid_popup_fast_wide_pane_ParamLimits

0x404e,	// (0x0003d47b) grid_popup_fast_wide_pane

0x4062,	// (0x0003d48f) scroll_pane_cp19_ParamLimits

0x4062,	// (0x0003d48f) scroll_pane_cp19

0xb4d4,	// (0x00044901) bg_popup_window_pane_cp20

0x4076,	// (0x0003d4a3) listscroll_popup_fast_wide_pane

0xcb8f,	// (0x00045fbc) grid_indicator_nsta_pane

0x4090,	// (0x0003d4bd) clock_nsta_pane_g1

0x4099,	// (0x0003d4c6) clock_nsta_pane_t1

0xcb9b,	// (0x00045fc8) cell_indicator_nsta_pane_ParamLimits

0xcb9b,	// (0x00045fc8) cell_indicator_nsta_pane

0x40ea,	// (0x0003d517) cell_indicator_nsta_pane_g1

0xcbb6,	// (0x00045fe3) cell_indicator_nsta_pane_g2

0x0001,

0xfa84,	// (0x00048eb1) cell_indicator_nsta_pane_g

0x410a,	// (0x0003d537) clock_nsta_pane_cp

0x4113,	// (0x0003d540) indicator_nsta_pane_cp

0x411d,	// (0x0003d54a) nsta_clock_indic_pane_g1

0xb56c,	// (0x00044999) grid_indicator_pane

0x960e,	// (0x00042a3b) scroll_pane_cp29

0xf2e4,	// (0x00048711) indicator_nsta_pane_cp2_ParamLimits

0xf2e4,	// (0x00048711) indicator_nsta_pane_cp2

0xb530,	// (0x0004495d) main_apps_wheel_pane

0xa8bd,	// (0x00043cea) form_midp_field_text_pane_ParamLimits

0x24dc,	// (0x0003b909) scroll_bar_cp050_ParamLimits

0x4176,	// (0x0003d5a3) cell_indicator_pane_ParamLimits

0x4176,	// (0x0003d5a3) cell_indicator_pane

0x418f,	// (0x0003d5bc) cell_indicator_pane_g1

0xcbd5,	// (0x00046002) grid_wheel_folder_pane_ParamLimits

0xcbd5,	// (0x00046002) grid_wheel_folder_pane

0xcbe3,	// (0x00046010) list_wheel_apps_pane_ParamLimits

0xcbe3,	// (0x00046010) list_wheel_apps_pane

0xcbf1,	// (0x0004601e) main_apps_wheel_pane_g1_ParamLimits

0xcbf1,	// (0x0004601e) main_apps_wheel_pane_g1

0xcbfd,	// (0x0004602a) main_apps_wheel_pane_g2_ParamLimits

0xcbfd,	// (0x0004602a) main_apps_wheel_pane_g2

0x0001,

0xfaa0,	// (0x00048ecd) main_apps_wheel_pane_g_ParamLimits

0xfaa0,	// (0x00048ecd) main_apps_wheel_pane_g

0xcc0b,	// (0x00046038) main_apps_wheel_pane_t1_ParamLimits

0xcc0b,	// (0x00046038) main_apps_wheel_pane_t1

0xcc1f,	// (0x0004604c) list_wheel_apps_pane_g1

0xcc27,	// (0x00046054) list_wheel_apps_pane_g2

0xcc2f,	// (0x0004605c) list_wheel_apps_pane_g3

0xcc37,	// (0x00046064) list_wheel_apps_pane_g4

0xcc41,	// (0x0004606e) list_wheel_apps_pane_g5

0x0004,

0xfaa5,	// (0x00048ed2) list_wheel_apps_pane_g

0xc047,	// (0x00045474) navi_icon_text_pane

0xa2ff,	// (0x0004372c) aid_fill_nsta

0x4256,	// (0x0003d683) navi_icon_text_pane_g1

0x4262,	// (0x0003d68f) navi_icon_text_pane_t1

0xbf2b,	// (0x00045358) list_set_graphic_pane_t1_ParamLimits

0xbf2b,	// (0x00045358) list_set_graphic_pane_t1

0x2c27,	// (0x0003c054) popup_midp_note_alarm_window_t6_ParamLimits

0x2c27,	// (0x0003c054) popup_midp_note_alarm_window_t6

0x2c39,	// (0x0003c066) popup_midp_note_alarm_window_t7_ParamLimits

0x2c39,	// (0x0003c066) popup_midp_note_alarm_window_t7

0x2c4b,	// (0x0003c078) popup_midp_note_alarm_window_t8_ParamLimits

0x2c4b,	// (0x0003c078) popup_midp_note_alarm_window_t8

0x2c5d,	// (0x0003c08a) popup_midp_note_alarm_window_t9_ParamLimits

0x2c5d,	// (0x0003c08a) popup_midp_note_alarm_window_t9

0x2c6f,	// (0x0003c09c) popup_midp_note_alarm_window_t10_ParamLimits

0x2c6f,	// (0x0003c09c) popup_midp_note_alarm_window_t10

0x2c81,	// (0x0003c0ae) popup_midp_note_alarm_window_t11_ParamLimits

0x2c81,	// (0x0003c0ae) popup_midp_note_alarm_window_t11

0xc5b7,	// (0x000459e4) scroll_pane_cp17_ParamLimits

0xc5b7,	// (0x000459e4) scroll_pane_cp17

0x080a,	// (0x00039c37) volume_small_pane_cp_g1

0x0c31,	// (0x0003a05e) volume_small_pane_cp_g2

0x0c3a,	// (0x0003a067) volume_small_pane_cp_g3

0x0c43,	// (0x0003a070) volume_small_pane_cp_g4

0x0c4c,	// (0x0003a079) volume_small_pane_cp_g5

0x0bfb,	// (0x0003a028) volume_small_pane_cp_g6

0x0c55,	// (0x0003a082) volume_small_pane_cp_g7

0x0c5e,	// (0x0003a08b) volume_small_pane_cp_g8

0x0c67,	// (0x0003a094) volume_small_pane_cp_g9

0x0c70,	// (0x0003a09d) volume_small_pane_cp_g10

0xc1b9,	// (0x000455e6) midp_ticker_pane_g1_ParamLimits

0xc1c5,	// (0x000455f2) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x00048b51) midp_ticker_pane_g_ParamLimits

0xc1d1,	// (0x000455fe) midp_ticker_pane_t1_ParamLimits

0xa323,	// (0x00043750) aid_fill_nsta_2

0x24c8,	// (0x0003b8f5) list_form2_midp_pane

0x35db,	// (0x0003ca08) midp_editing_number_pane_ParamLimits

0x35ea,	// (0x0003ca17) midp_ticker_pane_ParamLimits

0x4274,	// (0x0003d6a1) form2_midp_field_pane

0x4298,	// (0x0003d6c5) scroll_pane_cp51

0x42b8,	// (0x0003d6e5) form2_midp_button_pane_ParamLimits

0x42b8,	// (0x0003d6e5) form2_midp_button_pane

0x42ca,	// (0x0003d6f7) form2_midp_content_pane_ParamLimits

0x42ca,	// (0x0003d6f7) form2_midp_content_pane

0x42e4,	// (0x0003d711) form2_midp_field_choice_group_pane

0x42ec,	// (0x0003d719) form2_midp_field_pane_g1

0x42f4,	// (0x0003d721) form2_midp_field_pane_g2

0x42fc,	// (0x0003d729) form2_midp_field_pane_g3

0x4304,	// (0x0003d731) form2_midp_field_pane_g4

0x0003,

0xfaca,	// (0x00048ef7) form2_midp_field_pane_g

0x430c,	// (0x0003d739) form2_midp_gauge_slider_pane

0x4314,	// (0x0003d741) form2_midp_gauge_wait_pane

0x431c,	// (0x0003d749) form2_midp_image_pane_ParamLimits

0x431c,	// (0x0003d749) form2_midp_image_pane

0xcc74,	// (0x000460a1) form2_midp_label_pane_ParamLimits

0xcc74,	// (0x000460a1) form2_midp_label_pane

0xcc8d,	// (0x000460ba) form2_midp_label_pane_cp_ParamLimits

0xcc8d,	// (0x000460ba) form2_midp_label_pane_cp

0x4371,	// (0x0003d79e) form2_midp_string_pane_ParamLimits

0x4371,	// (0x0003d79e) form2_midp_string_pane

0xe1aa,	// (0x000475d7) form2_midp_text_pane_ParamLimits

0xe1aa,	// (0x000475d7) form2_midp_text_pane

0x4383,	// (0x0003d7b0) form2_midp_time_pane

0x4393,	// (0x0003d7c0) input_focus_pane_cp51_ParamLimits

0x4393,	// (0x0003d7c0) input_focus_pane_cp51

0xccac,	// (0x000460d9) form2_midp_label_pane_t1_ParamLimits

0xccac,	// (0x000460d9) form2_midp_label_pane_t1

0xe1c3,	// (0x000475f0) form2_mdip_text_pane_t1_ParamLimits

0xe1c3,	// (0x000475f0) form2_mdip_text_pane_t1

0xe1e1,	// (0x0004760e) form2_midp_time_pane_t1

0x43f4,	// (0x0003d821) form2_midp_gauge_slider_pane_t1

0xccec,	// (0x00046119) form2_midp_gauge_slider_pane_t2

0xccfe,	// (0x0004612b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad3,	// (0x00048f00) form2_midp_gauge_slider_pane_t

0x442a,	// (0x0003d857) form2_midp_slider_pane

0x4436,	// (0x0003d863) form2_midp_gauge_wait_pane_t1

0x4444,	// (0x0003d871) form2_midp_wait_pane_ParamLimits

0x4444,	// (0x0003d871) form2_midp_wait_pane

0xcd10,	// (0x0004613d) list_single_2graphic_pane_cp4_ParamLimits

0xcd10,	// (0x0004613d) list_single_2graphic_pane_cp4

0xa7fc,	// (0x00043c29) list_single_midp_graphic_pane_cp_ParamLimits

0xa7fc,	// (0x00043c29) list_single_midp_graphic_pane_cp

0xb4d4,	// (0x00044901) list_highlight_pane_cp20

0x4497,	// (0x0003d8c4) list_single_2graphic_pane_g1_cp4

0x3a74,	// (0x0003cea1) list_single_2graphic_pane_g2_cp4

0x449f,	// (0x0003d8cc) list_single_2graphic_pane_t1_cp4

0xb530,	// (0x0004495d) list_highlight_pane_cp21

0x44ae,	// (0x0003d8db) list_single_midp_graphic_pane_g4_cp

0x44bd,	// (0x0003d8ea) list_single_midp_graphic_pane_t1_cp

0xcd25,	// (0x00046152) form2_mdip_string_pane_t1_ParamLimits

0xcd25,	// (0x00046152) form2_mdip_string_pane_t1

0xb4d4,	// (0x00044901) bg_wml_button_pane_cp2

0xb4ca,	// (0x000448f7) form2_midp_image_pane_g1

0xdc2d,	// (0x0004705a) list_double_large_graphic_pane_g5_ParamLimits

0xdc2d,	// (0x0004705a) list_double_large_graphic_pane_g5

0x986b,	// (0x00042c98) midp_form_pane_ParamLimits

0xb530,	// (0x0004495d) main_apps_wheel_pane_ParamLimits

0x9fdd,	// (0x0004340a) popup_preview_window_ParamLimits

0x9fdd,	// (0x0004340a) popup_preview_window

0xa2aa,	// (0x000436d7) popup_touch_info_window_ParamLimits

0xa2aa,	// (0x000436d7) popup_touch_info_window

0xa2c8,	// (0x000436f5) popup_touch_menu_window_ParamLimits

0xa2c8,	// (0x000436f5) popup_touch_menu_window

0xb4c0,	// (0x000448ed) bg_popup_sub_pane_cp6

0x45d9,	// (0x0003da06) list_touch_menu_pane

0xcd9b,	// (0x000461c8) list_single_touch_menu_pane_ParamLimits

0xcd9b,	// (0x000461c8) list_single_touch_menu_pane

0xcdaf,	// (0x000461dc) list_single_touch_menu_pane_t1

0xb530,	// (0x0004495d) bg_popup_sub_pane_cp7_ParamLimits

0xb530,	// (0x0004495d) bg_popup_sub_pane_cp7

0x4605,	// (0x0003da32) heading_sub_pane

0x460d,	// (0x0003da3a) list_touch_info_pane_ParamLimits

0x460d,	// (0x0003da3a) list_touch_info_pane

0x461c,	// (0x0003da49) list_single_touch_info_pane_ParamLimits

0x461c,	// (0x0003da49) list_single_touch_info_pane

0x462e,	// (0x0003da5b) list_single_touch_info_pane_t1

0x463c,	// (0x0003da69) list_single_touch_info_pane_t2

0x0001,

0xfae1,	// (0x00048f0e) list_single_touch_info_pane_t

0xc1a2,	// (0x000455cf) bg_popup_heading_pane_cp

0x464a,	// (0x0003da77) heading_sub_pane_t1

0x2109,	// (0x0003b536) bg_popup_preview_window_pane_cp_ParamLimits

0x2109,	// (0x0003b536) bg_popup_preview_window_pane_cp

0x4605,	// (0x0003da32) heading_preview_pane

0x460d,	// (0x0003da3a) list_preview_pane_ParamLimits

0x460d,	// (0x0003da3a) list_preview_pane

0x4658,	// (0x0003da85) popup_preview_window_g1

0x461c,	// (0x0003da49) list_single_preview_pane_ParamLimits

0x461c,	// (0x0003da49) list_single_preview_pane

0x4660,	// (0x0003da8d) list_single_preview_pane_g1

0x4668,	// (0x0003da95) list_single_preview_pane_t1

0x462e,	// (0x0003da5b) list_single_preview_pane_t2

0x0001,

0xfae6,	// (0x00048f13) list_single_preview_pane_t

0x4676,	// (0x0003daa3) bg_popup_heading_pane_cp2_ParamLimits

0x4676,	// (0x0003daa3) bg_popup_heading_pane_cp2

0x468c,	// (0x0003dab9) heading_preview_pane_g1

0x4694,	// (0x0003dac1) heading_preview_pane_t1_ParamLimits

0x4694,	// (0x0003dac1) heading_preview_pane_t1

0xb583,	// (0x000449b0) soft_indicator_pane_t1_ParamLimits

0xb862,	// (0x00044c8f) scroll_pane_ParamLimits

0xbc0b,	// (0x00045038) scroll_sc2_left_pane

0xbc14,	// (0x00045041) scroll_sc2_right_pane

0xbc33,	// (0x00045060) scroll_bg_pane_g1_ParamLimits

0xbc48,	// (0x00045075) scroll_bg_pane_g2_ParamLimits

0xbc60,	// (0x0004508d) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x00048adc) scroll_bg_pane_g_ParamLimits

0xbc33,	// (0x00045060) scroll_handle_pane_g1_ParamLimits

0xbc75,	// (0x000450a2) scroll_handle_pane_g2_ParamLimits

0xbc60,	// (0x0004508d) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x00048ae3) scroll_handle_pane_g_ParamLimits

0x9baa,	// (0x00042fd7) popup_choice_list_window_ParamLimits

0x9baa,	// (0x00042fd7) popup_choice_list_window

0x1fc7,	// (0x0003b3f4) choice_list_pane

0x2049,	// (0x0003b476) cell_toolbar_pane_t1

0x2071,	// (0x0003b49e) toolbar_button_pane_ParamLimits

0x314d,	// (0x0003c57a) ai_gene_pane_1_t2_ParamLimits

0x314d,	// (0x0003c57a) ai_gene_pane_1_t2

0x0001,

0xf8d9,	// (0x00048d06) ai_gene_pane_1_t_ParamLimits

0xf8d9,	// (0x00048d06) ai_gene_pane_1_t

0x46b1,	// (0x0003dade) scroll_sc2_left_pane_g1

0x46b1,	// (0x0003dade) scroll_sc2_right_pane_g1

0xba28,	// (0x00044e55) bg_popup_sub_pane_cp10

0x46bb,	// (0x0003dae8) list_choice_list_pane

0xc993,	// (0x00045dc0) list_single_choice_list_pane_ParamLimits

0xc993,	// (0x00045dc0) list_single_choice_list_pane

0xcdbd,	// (0x000461ea) list_single_choice_list_pane_g1

0x9438,	// (0x00042865) list_single_choice_list_pane_t1_ParamLimits

0x9438,	// (0x00042865) list_single_choice_list_pane_t1

0x46ef,	// (0x0003db1c) choice_list_pane_g1

0xcdc5,	// (0x000461f2) choice_list_pane_t1

0xb4c0,	// (0x000448ed) input_focus_pane_cp11

0xbb80,	// (0x00044fad) title_pane_stacon_g2_ParamLimits

0xbb80,	// (0x00044fad) title_pane_stacon_g2

0x0002,

0xf695,	// (0x00048ac2) title_pane_stacon_g_ParamLimits

0xf695,	// (0x00048ac2) title_pane_stacon_g

0xc1a2,	// (0x000455cf) cursor_press_pane

0x9c51,	// (0x0004307e) popup_fep_hwr_window_ParamLimits

0x9c51,	// (0x0004307e) popup_fep_hwr_window

0xf4e5,	// (0x00048912) popup_fep_vkb_window_ParamLimits

0xf4e5,	// (0x00048912) popup_fep_vkb_window

0xcdd3,	// (0x00046200) cursor_press_pane_g1

0x0002,

0xfb0f,	// (0x00048f3c) fep_vkb_side_pane_g_ParamLimits

0x0cb2,	// (0x0003a0df) fep_hwr_candidate_pane_ParamLimits

0x0cb2,	// (0x0003a0df) fep_hwr_candidate_pane

0x0cdc,	// (0x0003a109) fep_hwr_side_pane_ParamLimits

0x0cdc,	// (0x0003a109) fep_hwr_side_pane

0x0cfc,	// (0x0003a129) fep_hwr_top_pane_ParamLimits

0x0cfc,	// (0x0003a129) fep_hwr_top_pane

0x0d14,	// (0x0003a141) fep_hwr_write_pane_ParamLimits

0x0d14,	// (0x0003a141) fep_hwr_write_pane

0xfb0f,	// (0x00048f3c) fep_vkb_side_pane_g

0x470d,	// (0x0003db3a) fep_hwr_top_pane_g1

0x471f,	// (0x0003db4c) fep_hwr_top_pane_g2

0x0d4e,	// (0x0003a17b) fep_hwr_top_pane_g3

0x0002,

0xfaeb,	// (0x00048f18) fep_hwr_top_pane_g

0x0d63,	// (0x0003a190) fep_hwr_top_text_pane

0xbd38,	// (0x00045165) fep_hwr_top_text_pane_g1

0x4755,	// (0x0003db82) fep_hwr_top_text_pane_t1

0x0e59,	// (0x0003a286) fep_hwr_candidate_pane_g1

0x499a,	// (0x0003ddc7) fep_vkb_keypad_pane_g3_ParamLimits

0x499a,	// (0x0003ddc7) fep_vkb_keypad_pane_g3

0x49c2,	// (0x0003ddef) fep_vkb_keypad_pane_g4_ParamLimits

0x49c2,	// (0x0003ddef) fep_vkb_keypad_pane_g4

0x4a31,	// (0x0003de5e) fep_vkb_bottom_pane_g2_ParamLimits

0x4a31,	// (0x0003de5e) fep_vkb_bottom_pane_g2

0x0001,

0xfb16,	// (0x00048f43) fep_vkb_bottom_pane_g_ParamLimits

0xfb16,	// (0x00048f43) fep_vkb_bottom_pane_g

0x46b1,	// (0x0003dade) cell_vkb_side_pane_g2

0x0001,

0xfb20,	// (0x00048f4d) cell_vkb_side_pane_g

0x4abc,	// (0x0003dee9) cell_vkb_side_pane_t1

0x4aca,	// (0x0003def7) cell_vkb_side_pane_t1_copy1

0x46b1,	// (0x0003dade) bg_fep_vkb_candidate_pane_g2

0x4bf6,	// (0x0003e023) cell_vkb_candidate_pane_ParamLimits

0x4763,	// (0x0003db90) aid_size_cell_vkb_ParamLimits

0x4763,	// (0x0003db90) aid_size_cell_vkb

0x4bf6,	// (0x0003e023) cell_vkb_candidate_pane

0x0e80,	// (0x0003a2ad) bg_popup_fep_shadow_pane_g1

0xcded,	// (0x0004621a) fep_vkb_bottom_pane_ParamLimits

0xcded,	// (0x0004621a) fep_vkb_bottom_pane

0x4827,	// (0x0003dc54) fep_vkb_candidate_pane_ParamLimits

0x4827,	// (0x0003dc54) fep_vkb_candidate_pane

0xce12,	// (0x0004623f) fep_vkb_keypad_pane_ParamLimits

0xce12,	// (0x0004623f) fep_vkb_keypad_pane

0xce47,	// (0x00046274) fep_vkb_side_pane_ParamLimits

0xce47,	// (0x00046274) fep_vkb_side_pane

0xce83,	// (0x000462b0) fep_vkb_top_pane_ParamLimits

0xce83,	// (0x000462b0) fep_vkb_top_pane

0x48f3,	// (0x0003dd20) fep_vkb_top_pane_g1_ParamLimits

0x48f3,	// (0x0003dd20) fep_vkb_top_pane_g1

0x4902,	// (0x0003dd2f) fep_vkb_top_pane_g2_ParamLimits

0x4902,	// (0x0003dd2f) fep_vkb_top_pane_g2

0x4911,	// (0x0003dd3e) fep_vkb_top_pane_g3_ParamLimits

0x4911,	// (0x0003dd3e) fep_vkb_top_pane_g3

0x0003,

0xfb06,	// (0x00048f33) fep_vkb_top_pane_g_ParamLimits

0xfb06,	// (0x00048f33) fep_vkb_top_pane_g

0x492f,	// (0x0003dd5c) fep_vkb_top_text_pane_ParamLimits

0x492f,	// (0x0003dd5c) fep_vkb_top_text_pane

0xceb8,	// (0x000462e5) fep_vkb_side_pane_g1_ParamLimits

0xceb8,	// (0x000462e5) fep_vkb_side_pane_g1

0x4989,	// (0x0003ddb6) grid_vkb_side_pane_ParamLimits

0x4989,	// (0x0003ddb6) grid_vkb_side_pane

0x0e88,	// (0x0003a2b5) bg_popup_fep_shadow_pane_g2

0x0e91,	// (0x0003a2be) bg_popup_fep_shadow_pane_g3

0x0e99,	// (0x0003a2c6) bg_popup_fep_shadow_pane_g4

0x0ea2,	// (0x0003a2cf) bg_popup_fep_shadow_pane_g5

0x0eac,	// (0x0003a2d9) bg_popup_fep_shadow_pane_g6

0x0eb4,	// (0x0003a2e1) bg_popup_fep_shadow_pane_g7

0xb956,	// (0x00044d83) bg_popup_fep_shadow_pane_g8

0x49e0,	// (0x0003de0d) grid_vkb_keypad_number_pane_ParamLimits

0x49e0,	// (0x0003de0d) grid_vkb_keypad_number_pane

0x49f0,	// (0x0003de1d) grid_vkb_keypad_pane_ParamLimits

0x49f0,	// (0x0003de1d) grid_vkb_keypad_pane

0x4a16,	// (0x0003de43) fep_vkb_bottom_pane_g1_ParamLimits

0x4a16,	// (0x0003de43) fep_vkb_bottom_pane_g1

0x4a3f,	// (0x0003de6c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4a3f,	// (0x0003de6c) grid_vkb_keypad_bottom_left_pane

0x4a54,	// (0x0003de81) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4a54,	// (0x0003de81) grid_vkb_keypad_bottom_right_pane

0x4a69,	// (0x0003de96) fep_vkb_top_text_pane_g1

0xceff,	// (0x0004632c) fep_vkb_top_text_pane_t1

0xcf11,	// (0x0004633e) cell_vkb_side_pane_ParamLimits

0xcf11,	// (0x0004633e) cell_vkb_side_pane

0x46b1,	// (0x0003dade) cell_vkb_side_pane_g1

0x4ad8,	// (0x0003df05) cell_vkb_keypad_pane_ParamLimits

0x4ad8,	// (0x0003df05) cell_vkb_keypad_pane

0x4b4d,	// (0x0003df7a) cell_vkb_keypad_pane_g1

0x0008,

0xfb33,	// (0x00048f60) bg_popup_fep_shadow_pane_g

0x0ec6,	// (0x0003a2f3) cell_hwr_side_pane_g1

0x0ec6,	// (0x0003a2f3) cell_hwr_side_pane_g2

0x4b57,	// (0x0003df84) cell_vkb_keypad_pane_t1

0xcf27,	// (0x00046354) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcf27,	// (0x00046354) cell_vkb_keypad_bottom_left_pane

0xcf3c,	// (0x00046369) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcf3c,	// (0x00046369) cell_vkb_keypad_bottom_right_pane

0x46b1,	// (0x0003dade) cell_vkb_keypad_bottom_left_pane_g1

0x46b1,	// (0x0003dade) cell_vkb_keypad_bottom_right_pane_g1

0x4bbb,	// (0x0003dfe8) cell_vkb_keypad_number_pane_ParamLimits

0x4bbb,	// (0x0003dfe8) cell_vkb_keypad_number_pane

0x4bda,	// (0x0003e007) cell_vkb_keypad_number_pane_g1

0x4be4,	// (0x0003e011) cell_vkb_keypad_number_pane_g2

0x4bed,	// (0x0003e01a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb25,	// (0x00048f52) cell_vkb_keypad_number_pane_g

0x4b57,	// (0x0003df84) cell_vkb_keypad_number_pane_t1

0x4c11,	// (0x0003e03e) fep_vkb_candidate_pane_g1

0x0001,

0xfb46,	// (0x00048f73) cell_hwr_side_pane_g

0x4c2a,	// (0x0003e057) cell_hwr_side_pane_t1

0x0ed0,	// (0x0003a2fd) cell_hwr_side_pane_t1_copy1

0x0ede,	// (0x0003a30b) cell_hwr_candidate_pane_g1

0x0f0d,	// (0x0003a33a) cell_hwr_candidate_pane_t1

0x46b1,	// (0x0003dade) cell_vkb_candidate_pane_g2

0x4c8f,	// (0x0003e0bc) cell_vkb_candidate_pane_t1

0x0c79,	// (0x0003a0a6) bg_popup_fep_shadow_pane_ParamLimits

0x0c79,	// (0x0003a0a6) bg_popup_fep_shadow_pane

0x0d2e,	// (0x0003a15b) bg_fep_hwr_top_pane_g4

0x4731,	// (0x0003db5e) bg_hwr_side_pane_g1_ParamLimits

0x4731,	// (0x0003db5e) bg_hwr_side_pane_g1

0xab47,	// (0x00043f74) cell_hwr_side_pane_ParamLimits

0xab47,	// (0x00043f74) cell_hwr_side_pane

0x0dda,	// (0x0003a207) fep_hwr_write_pane_g1_ParamLimits

0x0dda,	// (0x0003a207) fep_hwr_write_pane_g1

0x0de7,	// (0x0003a214) fep_hwr_write_pane_g2_ParamLimits

0x0de7,	// (0x0003a214) fep_hwr_write_pane_g2

0x0df4,	// (0x0003a221) fep_hwr_write_pane_g3_ParamLimits

0x0df4,	// (0x0003a221) fep_hwr_write_pane_g3

0xab67,	// (0x00043f94) fep_hwr_write_pane_g4_ParamLimits

0xab67,	// (0x00043f94) fep_hwr_write_pane_g4

0x0005,

0xfaf2,	// (0x00048f1f) fep_hwr_write_pane_g_ParamLimits

0xfaf2,	// (0x00048f1f) fep_hwr_write_pane_g

0x0d2e,	// (0x0003a15b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0d2e,	// (0x0003a15b) bg_fep_hwr_candidate_pane_g2

0x0e17,	// (0x0003a244) cell_hwr_candidate_pane_ParamLimits

0x0e17,	// (0x0003a244) cell_hwr_candidate_pane

0x0e59,	// (0x0003a286) fep_hwr_candidate_pane_g1_ParamLimits

0x4791,	// (0x0003dbbe) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4791,	// (0x0003dbbe) bg_popup_fep_shadow_pane_cp2

0x4921,	// (0x0003dd4e) fep_vkb_top_pane_g4_ParamLimits

0x4921,	// (0x0003dd4e) fep_vkb_top_pane_g4

0x4967,	// (0x0003dd94) fep_vkb_side_pane_g2_ParamLimits

0x4967,	// (0x0003dd94) fep_vkb_side_pane_g2

0x913d,	// (0x0004256a) list_setting_pane_t4_ParamLimits

0x913d,	// (0x0004256a) list_setting_pane_t4

0xdce1,	// (0x0004710e) list_setting_number_pane_t5_ParamLimits

0xdce1,	// (0x0004710e) list_setting_number_pane_t5

0xbd6f,	// (0x0004519c) list_double_heading_pane_cp2_ParamLimits

0xbd6f,	// (0x0004519c) list_double_heading_pane_cp2

0xcf57,	// (0x00046384) list_double_heading_pane_g1_cp2_ParamLimits

0xcf57,	// (0x00046384) list_double_heading_pane_g1_cp2

0x4c9d,	// (0x0003e0ca) list_double_heading_pane_g2_cp2_ParamLimits

0x4c9d,	// (0x0003e0ca) list_double_heading_pane_g2_cp2

0x4cb1,	// (0x0003e0de) list_double_heading_pane_t1_cp2_ParamLimits

0x4cb1,	// (0x0003e0de) list_double_heading_pane_t1_cp2

0x4cc7,	// (0x0003e0f4) list_double_heading_pane_t2_cp2_ParamLimits

0x4cc7,	// (0x0003e0f4) list_double_heading_pane_t2_cp2

0xb4b8,	// (0x000448e5) aid_value_unit2

0xf075,	// (0x000484a2) popup_preview_fixed_window

0xb65a,	// (0x00044a87) bg_popup_preview_window_pane_cp02

0x4cd9,	// (0x0003e106) list_preview_fixed_pane

0x4d1f,	// (0x0003e14c) list_empty_pane_fp_ParamLimits

0x4d1f,	// (0x0003e14c) list_empty_pane_fp

0x4d1f,	// (0x0003e14c) list_single_cale_day_pane_fp_ParamLimits

0x4d1f,	// (0x0003e14c) list_single_cale_day_pane_fp

0x4d1f,	// (0x0003e14c) list_single_graphic_heading_pane_fp_ParamLimits

0x4d1f,	// (0x0003e14c) list_single_graphic_heading_pane_fp

0x4d1f,	// (0x0003e14c) list_single_graphic_pane_fp_ParamLimits

0x4d1f,	// (0x0003e14c) list_single_graphic_pane_fp

0x4d1f,	// (0x0003e14c) list_single_heading_pane_fp_ParamLimits

0x4d1f,	// (0x0003e14c) list_single_heading_pane_fp

0x4d1f,	// (0x0003e14c) list_single_pane_fp_ParamLimits

0x4d1f,	// (0x0003e14c) list_single_pane_fp

0x4d35,	// (0x0003e162) list_single_pane_fp_g1_ParamLimits

0x4d35,	// (0x0003e162) list_single_pane_fp_g1

0xdc15,	// (0x00047042) list_single_pane_fp_g2_ParamLimits

0xdc15,	// (0x00047042) list_single_pane_fp_g2

0xe201,	// (0x0004762e) list_single_pane_fp_g3_ParamLimits

0xe201,	// (0x0004762e) list_single_pane_fp_g3

0x4d41,	// (0x0003e16e) list_single_pane_fp_g4_ParamLimits

0x4d41,	// (0x0003e16e) list_single_pane_fp_g4

0x0003,

0xfb59,	// (0x00048f86) list_single_pane_fp_g_ParamLimits

0xfb59,	// (0x00048f86) list_single_pane_fp_g

0xe215,	// (0x00047642) list_single_pane_fp_t1_ParamLimits

0xe215,	// (0x00047642) list_single_pane_fp_t1

0xe22c,	// (0x00047659) list_single_graphic_pane_fp_g1_ParamLimits

0xe22c,	// (0x00047659) list_single_graphic_pane_fp_g1

0x4d35,	// (0x0003e162) list_single_graphic_pane_fp_g2_ParamLimits

0x4d35,	// (0x0003e162) list_single_graphic_pane_fp_g2

0xdc15,	// (0x00047042) list_single_graphic_pane_fp_g3_ParamLimits

0xdc15,	// (0x00047042) list_single_graphic_pane_fp_g3

0xe201,	// (0x0004762e) list_single_graphic_pane_fp_g4_ParamLimits

0xe201,	// (0x0004762e) list_single_graphic_pane_fp_g4

0x4d41,	// (0x0003e16e) list_single_graphic_pane_fp_g5_ParamLimits

0x4d41,	// (0x0003e16e) list_single_graphic_pane_fp_g5

0x0004,

0xfb62,	// (0x00048f8f) list_single_graphic_pane_fp_g_ParamLimits

0xfb62,	// (0x00048f8f) list_single_graphic_pane_fp_g

0xe238,	// (0x00047665) list_single_graphic_pane_fp_t1_ParamLimits

0xe238,	// (0x00047665) list_single_graphic_pane_fp_t1

0xe22c,	// (0x00047659) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe22c,	// (0x00047659) list_single_graphic_heading_pane_fp_g1

0x4d35,	// (0x0003e162) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4d35,	// (0x0003e162) list_single_graphic_heading_pane_fp_g2

0xdc15,	// (0x00047042) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xdc15,	// (0x00047042) list_single_graphic_heading_pane_fp_g3

0xe201,	// (0x0004762e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xe201,	// (0x0004762e) list_single_graphic_heading_pane_fp_g4

0x4d41,	// (0x0003e16e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4d41,	// (0x0003e16e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb62,	// (0x00048f8f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb62,	// (0x00048f8f) list_single_graphic_heading_pane_fp_g

0xe24e,	// (0x0004767b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe24e,	// (0x0004767b) list_single_graphic_heading_pane_fp_t1

0xe264,	// (0x00047691) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe264,	// (0x00047691) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6d,	// (0x00048f9a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6d,	// (0x00048f9a) list_single_graphic_heading_pane_fp_t

0xe276,	// (0x000476a3) list_single_cale_day_pane_fp_g1_ParamLimits

0xe276,	// (0x000476a3) list_single_cale_day_pane_fp_g1

0x4d4d,	// (0x0003e17a) list_single_cale_day_pane_fp_g2_ParamLimits

0x4d4d,	// (0x0003e17a) list_single_cale_day_pane_fp_g2

0xe2ae,	// (0x000476db) list_single_cale_day_pane_fp_g3_ParamLimits

0xe2ae,	// (0x000476db) list_single_cale_day_pane_fp_g3

0xe2d6,	// (0x00047703) list_single_cale_day_pane_fp_g4_ParamLimits

0xe2d6,	// (0x00047703) list_single_cale_day_pane_fp_g4

0xe2fa,	// (0x00047727) list_single_cale_day_pane_fp_g5_ParamLimits

0xe2fa,	// (0x00047727) list_single_cale_day_pane_fp_g5

0x0004,

0xfb72,	// (0x00048f9f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb72,	// (0x00048f9f) list_single_cale_day_pane_fp_g

0xe31e,	// (0x0004774b) list_single_cale_day_pane_fp_t1_ParamLimits

0xe31e,	// (0x0004774b) list_single_cale_day_pane_fp_t1

0xe344,	// (0x00047771) list_single_cale_day_pane_fp_t2_ParamLimits

0xe344,	// (0x00047771) list_single_cale_day_pane_fp_t2

0xe35d,	// (0x0004778a) list_single_cale_day_pane_fp_t3_ParamLimits

0xe35d,	// (0x0004778a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7d,	// (0x00048faa) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7d,	// (0x00048faa) list_single_cale_day_pane_fp_t

0x4d35,	// (0x0003e162) list_empty_pane_fp_g1_ParamLimits

0x4d35,	// (0x0003e162) list_empty_pane_fp_g1

0xe376,	// (0x000477a3) list_empty_pane_fp_t1

0xe384,	// (0x000477b1) list_empty_pane_fp_t2

0x0001,

0xfb84,	// (0x00048fb1) list_empty_pane_fp_t

0x4d35,	// (0x0003e162) list_single_heading_pane_fp_g1_ParamLimits

0x4d35,	// (0x0003e162) list_single_heading_pane_fp_g1

0xdc15,	// (0x00047042) list_single_heading_pane_fp_g2_ParamLimits

0xdc15,	// (0x00047042) list_single_heading_pane_fp_g2

0xe201,	// (0x0004762e) list_single_heading_pane_fp_g3_ParamLimits

0xe201,	// (0x0004762e) list_single_heading_pane_fp_g3

0x0002,

0xfb89,	// (0x00048fb6) list_single_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x00048fb6) list_single_heading_pane_fp_g

0xe392,	// (0x000477bf) list_single_heading_pane_fp_t1_ParamLimits

0xe392,	// (0x000477bf) list_single_heading_pane_fp_t1

0xe3a4,	// (0x000477d1) list_single_heading_pane_fp_t2_ParamLimits

0xe3a4,	// (0x000477d1) list_single_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x00048fbd) list_single_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x00048fbd) list_single_heading_pane_fp_t

0x9484,	// (0x000428b1) aid_size_cell_fast

0xb63d,	// (0x00044a6a) soft_indicator_pane_cp1_t1

0x948d,	// (0x000428ba) cell_app_pane_cp2_ParamLimits

0x948d,	// (0x000428ba) cell_app_pane_cp2

0x0c9b,	// (0x0003a0c8) fep_hwr_candidate_drop_down_list_pane

0x0e73,	// (0x0003a2a0) fep_hwr_candidate_pane_g3_ParamLimits

0x0e73,	// (0x0003a2a0) fep_hwr_candidate_pane_g3

0xe1f4,	// (0x00047621) fep_hwr_candidate_pane_g4_ParamLimits

0xe1f4,	// (0x00047621) fep_hwr_candidate_pane_g4

0x0002,

0xfaff,	// (0x00048f2c) fep_hwr_candidate_pane_g_ParamLimits

0xfaff,	// (0x00048f2c) fep_hwr_candidate_pane_g

0x4816,	// (0x0003dc43) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4816,	// (0x0003dc43) fep_vkb_candidate_drop_down_list_pane

0x4c19,	// (0x0003e046) fep_vkb_candidate_pane_g3

0x4c21,	// (0x0003e04e) fep_vkb_candidate_pane_g4

0x0002,

0xfb2c,	// (0x00048f59) fep_vkb_candidate_pane_g

0x0ede,	// (0x0003a30b) cell_hwr_candidate_pane_g1_ParamLimits

0x0eec,	// (0x0003a319) cell_hwr_candidate_pane_g3_ParamLimits

0x0eec,	// (0x0003a319) cell_hwr_candidate_pane_g3

0x4c38,	// (0x0003e065) cell_hwr_candidate_pane_g4_ParamLimits

0x4c38,	// (0x0003e065) cell_hwr_candidate_pane_g4

0x0002,

0xfb4b,	// (0x00048f78) cell_hwr_candidate_pane_g_ParamLimits

0xfb4b,	// (0x00048f78) cell_hwr_candidate_pane_g

0x4c59,	// (0x0003e086) cell_vkb_candidate_pane_g3_ParamLimits

0x4c59,	// (0x0003e086) cell_vkb_candidate_pane_g3

0x4c74,	// (0x0003e0a1) cell_vkb_candidate_pane_g4_ParamLimits

0x4c74,	// (0x0003e0a1) cell_vkb_candidate_pane_g4

0xcf63,	// (0x00046390) cell_app_pane_cp2_g1_ParamLimits

0xcf63,	// (0x00046390) cell_app_pane_cp2_g1

0x4d77,	// (0x0003e1a4) cell_app_pane_cp2_g2_ParamLimits

0x4d77,	// (0x0003e1a4) cell_app_pane_cp2_g2

0x0001,

0xfb95,	// (0x00048fc2) cell_app_pane_cp2_g_ParamLimits

0xfb95,	// (0x00048fc2) cell_app_pane_cp2_g

0x4d83,	// (0x0003e1b0) cell_app_pane_cp2_t1_ParamLimits

0x4d83,	// (0x0003e1b0) cell_app_pane_cp2_t1

0xb8e6,	// (0x00044d13) grid_highlight_pane_cp1_ParamLimits

0xb8e6,	// (0x00044d13) grid_highlight_pane_cp1

0x0f2b,	// (0x0003a358) cell_hwr_candidate_pane_cp1_ParamLimits

0x0f2b,	// (0x0003a358) cell_hwr_candidate_pane_cp1

0x0ede,	// (0x0003a30b) fep_hwr_candidate_drop_down_list_pane_g1

0x0f4a,	// (0x0003a377) fep_hwr_candidate_drop_down_list_pane_g2

0x0f57,	// (0x0003a384) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x00048fc7) fep_hwr_candidate_drop_down_list_pane_g

0x0f64,	// (0x0003a391) fep_hwr_candidate_drop_down_list_scroll_pane

0x0f6d,	// (0x0003a39a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0f6d,	// (0x0003a39a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0f7a,	// (0x0003a3a7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0f7a,	// (0x0003a3a7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0f87,	// (0x0003a3b4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0f87,	// (0x0003a3b4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0f94,	// (0x0003a3c1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0f94,	// (0x0003a3c1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0faf,	// (0x0003a3dc) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0faf,	// (0x0003a3dc) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0fca,	// (0x0003a3f7) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0fca,	// (0x0003a3f7) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0fe5,	// (0x0003a412) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0fe5,	// (0x0003a412) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1000,	// (0x0003a42d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1000,	// (0x0003a42d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba1,	// (0x00048fce) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba1,	// (0x00048fce) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4d95,	// (0x0003e1c2) cell_vkb_candidate_pane_cp1_ParamLimits

0x4d95,	// (0x0003e1c2) cell_vkb_candidate_pane_cp1

0x4921,	// (0x0003dd4e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4921,	// (0x0003dd4e) fep_vkb_candidate_drop_down_list_pane_g1

0x4db5,	// (0x0003e1e2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4db5,	// (0x0003e1e2) fep_vkb_candidate_drop_down_list_pane_g2

0x4dc2,	// (0x0003e1ef) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4dc2,	// (0x0003e1ef) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x00048fdf) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb2,	// (0x00048fdf) fep_vkb_candidate_drop_down_list_pane_g

0x4dcf,	// (0x0003e1fc) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4dcf,	// (0x0003e1fc) fep_vkb_candidate_drop_down_list_scroll_pane

0x4ddc,	// (0x0003e209) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4ddc,	// (0x0003e209) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4de9,	// (0x0003e216) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4de9,	// (0x0003e216) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4df5,	// (0x0003e222) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4df5,	// (0x0003e222) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4e01,	// (0x0003e22e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4e01,	// (0x0003e22e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4e22,	// (0x0003e24f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4e22,	// (0x0003e24f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4e43,	// (0x0003e270) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4e43,	// (0x0003e270) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4e64,	// (0x0003e291) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4e64,	// (0x0003e291) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4e85,	// (0x0003e2b2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4e85,	// (0x0003e2b2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x00048fe6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x00048fe6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8937,	// (0x00041d64) title_pane_g1_ParamLimits

0x894a,	// (0x00041d77) title_pane_g2_ParamLimits

0xf529,	// (0x00048956) title_pane_g_ParamLimits

0xbd28,	// (0x00045155) aid_call2_pane

0xbd30,	// (0x0004515d) aid_call_pane

0xbd38,	// (0x00045165) popup_clock_analogue_window_g1

0xbd38,	// (0x00045165) popup_clock_analogue_window_g2

0xf228,	// (0x00048655) popup_clock_analogue_window_g3

0xf231,	// (0x0004865e) popup_clock_analogue_window_g4

0xb4ca,	// (0x000448f7) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x00048af1) popup_clock_analogue_window_g

0xf239,	// (0x00048666) popup_clock_analogue_window_t1

0xf247,	// (0x00048674) clock_digital_number_pane_ParamLimits

0xf247,	// (0x00048674) clock_digital_number_pane

0xf253,	// (0x00048680) clock_digital_number_pane_cp02_ParamLimits

0xf253,	// (0x00048680) clock_digital_number_pane_cp02

0xf25f,	// (0x0004868c) clock_digital_number_pane_cp03_ParamLimits

0xf25f,	// (0x0004868c) clock_digital_number_pane_cp03

0xf26b,	// (0x00048698) clock_digital_number_pane_cp04_ParamLimits

0xf26b,	// (0x00048698) clock_digital_number_pane_cp04

0xf277,	// (0x000486a4) clock_digital_separator_pane_ParamLimits

0xf277,	// (0x000486a4) clock_digital_separator_pane

0xf283,	// (0x000486b0) popup_clock_digital_window_t1_ParamLimits

0xf283,	// (0x000486b0) popup_clock_digital_window_t1

0xb4ca,	// (0x000448f7) clock_digital_number_pane_g1

0xb4ca,	// (0x000448f7) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x00048afc) clock_digital_number_pane_g

0xb4ca,	// (0x000448f7) clock_digital_separator_pane_g1

0xb4ca,	// (0x000448f7) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x00048afc) clock_digital_separator_pane_g

0xa2ff,	// (0x0004372c) aid_fill_nsta_ParamLimits

0xa435,	// (0x00043862) indicator_nsta_pane_ParamLimits

0x063f,	// (0x00039a6c) popup_clock_analogue_window

0x063f,	// (0x00039a6c) popup_clock_digital_window

0xcb8f,	// (0x00045fbc) grid_indicator_nsta_pane_ParamLimits

0x40a7,	// (0x0003d4d4) clock_nsta_pane_t2

0x0001,

0xfa7f,	// (0x00048eac) clock_nsta_pane_t

0xf209,	// (0x00048636) aid_size_max_handle

0x956b,	// (0x00042998) aid_size_min_handle

0xc1a2,	// (0x000455cf) editor_scroll_pane

0x4ea0,	// (0x0003e2cd) ex_editor_pane

0xba18,	// (0x00044e45) scroll_pane_cp13

0xb88e,	// (0x00044cbb) scroll_pane_cp14

0xbd67,	// (0x00045194) scroll_pane_cp36

0x9635,	// (0x00042a62) list_single_graphic_hl_pane_cp2_ParamLimits

0x9635,	// (0x00042a62) list_single_graphic_hl_pane_cp2

0xaac0,	// (0x00043eed) list_single_graphic_hl_pane_ParamLimits

0xaac0,	// (0x00043eed) list_single_graphic_hl_pane

0xab7c,	// (0x00043fa9) aid_size_min_hl_cp1

0x4eb1,	// (0x0003e2de) list_highlight_pane_cp34_ParamLimits

0x4eb1,	// (0x0003e2de) list_highlight_pane_cp34

0x4ec2,	// (0x0003e2ef) list_single_graphic_hl_pane_g1_ParamLimits

0x4ec2,	// (0x0003e2ef) list_single_graphic_hl_pane_g1

0xab85,	// (0x00043fb2) list_single_graphic_hl_pane_g2_ParamLimits

0xab85,	// (0x00043fb2) list_single_graphic_hl_pane_g2

0xab85,	// (0x00043fb2) list_single_graphic_hl_pane_g3_ParamLimits

0xab85,	// (0x00043fb2) list_single_graphic_hl_pane_g3

0xab91,	// (0x00043fbe) list_single_graphic_hl_pane_g4_ParamLimits

0xab91,	// (0x00043fbe) list_single_graphic_hl_pane_g4

0xab9d,	// (0x00043fca) list_single_graphic_hl_pane_g5_ParamLimits

0xab9d,	// (0x00043fca) list_single_graphic_hl_pane_g5

0x0004,

0xfbca,	// (0x00048ff7) list_single_graphic_hl_pane_g_ParamLimits

0xfbca,	// (0x00048ff7) list_single_graphic_hl_pane_g

0xabb1,	// (0x00043fde) list_single_graphic_hl_pane_t1_ParamLimits

0xabb1,	// (0x00043fde) list_single_graphic_hl_pane_t1

0x4ecf,	// (0x0003e2fc) aid_size_min_hl_cp2

0x4ed8,	// (0x0003e305) list_highlight_pane_cp34_cp2_ParamLimits

0x4ed8,	// (0x0003e305) list_highlight_pane_cp34_cp2

0x4ec2,	// (0x0003e2ef) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4ec2,	// (0x0003e2ef) list_single_graphic_hl_pane_g1_cp2

0x4ee5,	// (0x0003e312) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4ee5,	// (0x0003e312) list_single_graphic_hl_pane_g2_cp2

0xcf81,	// (0x000463ae) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcf81,	// (0x000463ae) list_single_graphic_hl_pane_g3_cp2

0xc101,	// (0x0004552e) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc101,	// (0x0004552e) list_single_graphic_hl_pane_g4_cp2

0x4eff,	// (0x0003e32c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4eff,	// (0x0003e32c) list_single_graphic_hl_pane_g5_cp2

0x9a1e,	// (0x00042e4b) control_pane_g4_ParamLimits

0x9a1e,	// (0x00042e4b) control_pane_g4

0xba28,	// (0x00044e55) bg_popup_sub_pane_cp10_ParamLimits

0x46bb,	// (0x0003dae8) list_choice_list_pane_ParamLimits

0x46ca,	// (0x0003daf7) scroll_pane_cp23

0xb65a,	// (0x00044a87) bg_popup_preview_window_pane_cp02_ParamLimits

0x4cd9,	// (0x0003e106) list_preview_fixed_pane_ParamLimits

0x4cef,	// (0x0003e11c) list_preview_fixed_pane_cp_ParamLimits

0x4cef,	// (0x0003e11c) list_preview_fixed_pane_cp

0x4cfb,	// (0x0003e128) popup_preview_fixed_window_g1_ParamLimits

0x4cfb,	// (0x0003e128) popup_preview_fixed_window_g1

0x4d07,	// (0x0003e134) popup_preview_fixed_window_g2_ParamLimits

0x4d07,	// (0x0003e134) popup_preview_fixed_window_g2

0x0002,

0xfb52,	// (0x00048f7f) popup_preview_fixed_window_g_ParamLimits

0xfb52,	// (0x00048f7f) popup_preview_fixed_window_g

0xf17d,	// (0x000485aa) aid_navi_side_left_pane_ParamLimits

0xf192,	// (0x000485bf) aid_navi_side_right_pane_ParamLimits

0xf1aa,	// (0x000485d7) navi_icon_pane_stacon_ParamLimits

0xf1be,	// (0x000485eb) navi_navi_pane_stacon_ParamLimits

0xf1aa,	// (0x000485d7) navi_text_pane_stacon_ParamLimits

0xdb1f,	// (0x00046f4c) main_text_info_pane

0x4f29,	// (0x0003e356) listscroll_text_info_pane

0x4f31,	// (0x0003e35e) list_text_info_pane_ParamLimits

0x4f31,	// (0x0003e35e) list_text_info_pane

0x4f40,	// (0x0003e36d) scroll_pane_cp24_ParamLimits

0x4f40,	// (0x0003e36d) scroll_pane_cp24

0xcf8f,	// (0x000463bc) list_text_info_pane_t1_ParamLimits

0xcf8f,	// (0x000463bc) list_text_info_pane_t1

0x9bc6,	// (0x00042ff3) popup_fast_swap2_window_ParamLimits

0x9bc6,	// (0x00042ff3) popup_fast_swap2_window

0x4f92,	// (0x0003e3bf) aid_size_cell_fast2

0xb4c0,	// (0x000448ed) bg_popup_window_pane_cp17

0x4f9c,	// (0x0003e3c9) heading_pane_cp2

0x4fa4,	// (0x0003e3d1) listscroll_fast2_pane

0x4fac,	// (0x0003e3d9) grid_fast2_pane

0x4fb6,	// (0x0003e3e3) listscroll_fast2_pane_g1

0x4fbe,	// (0x0003e3eb) listscroll_fast2_pane_g2

0x0001,

0xfbd5,	// (0x00049002) listscroll_fast2_pane_g

0xba18,	// (0x00044e45) scroll_pane_cp26

0x4fc8,	// (0x0003e3f5) cell_fast2_pane_ParamLimits

0x4fc8,	// (0x0003e3f5) cell_fast2_pane

0x4fdd,	// (0x0003e40a) cell_fast2_pane_g1

0x4fe6,	// (0x0003e413) cell_fast2_pane_g2

0x4fef,	// (0x0003e41c) cell_fast2_pane_g3

0x0002,

0xfbda,	// (0x00049007) cell_fast2_pane_g

0xb7c5,	// (0x00044bf2) grid_highlight_pane_cp9

0xf4cd,	// (0x000488fa) main_eswt_pane_ParamLimits

0xf4cd,	// (0x000488fa) main_eswt_pane

0x4f55,	// (0x0003e382) list_single_text_info_pane

0x4ff7,	// (0x0003e424) eswt_ctrl_button_pane

0x4ff7,	// (0x0003e424) eswt_ctrl_canvas_pane

0xcfab,	// (0x000463d8) eswt_ctrl_combo_pane

0x4ff7,	// (0x0003e424) eswt_ctrl_default_pane

0x4ff7,	// (0x0003e424) eswt_ctrl_label_pane

0x5007,	// (0x0003e434) eswt_ctrl_wait_pane

0xcfb3,	// (0x000463e0) eswt_shell_pane

0xb4c0,	// (0x000448ed) listscroll_eswt_app_pane

0x502f,	// (0x0003e45c) popup_eswt_tasktip_window_ParamLimits

0x502f,	// (0x0003e45c) popup_eswt_tasktip_window

0x2109,	// (0x0003b536) bg_popup_window_pane_cp18

0x5048,	// (0x0003e475) eswt_control_pane_g1_ParamLimits

0x5048,	// (0x0003e475) eswt_control_pane_g1

0x5055,	// (0x0003e482) eswt_control_pane_g2_ParamLimits

0x5055,	// (0x0003e482) eswt_control_pane_g2

0x5062,	// (0x0003e48f) eswt_control_pane_g3_ParamLimits

0x5062,	// (0x0003e48f) eswt_control_pane_g3

0x506f,	// (0x0003e49c) eswt_control_pane_g4_ParamLimits

0x506f,	// (0x0003e49c) eswt_control_pane_g4

0x0003,

0xfbe1,	// (0x0004900e) eswt_control_pane_g_ParamLimits

0xfbe1,	// (0x0004900e) eswt_control_pane_g

0xb8e6,	// (0x00044d13) bg_button_pane_ParamLimits

0xb8e6,	// (0x00044d13) bg_button_pane

0xb7da,	// (0x00044c07) common_borders_pane_copy2_ParamLimits

0xb7da,	// (0x00044c07) common_borders_pane_copy2

0x507c,	// (0x0003e4a9) control_button_pane_g1_ParamLimits

0x507c,	// (0x0003e4a9) control_button_pane_g1

0x5088,	// (0x0003e4b5) control_button_pane_g2_ParamLimits

0x5088,	// (0x0003e4b5) control_button_pane_g2

0x5094,	// (0x0003e4c1) control_button_pane_g3_ParamLimits

0x5094,	// (0x0003e4c1) control_button_pane_g3

0x0002,

0xfbea,	// (0x00049017) control_button_pane_g_ParamLimits

0xfbea,	// (0x00049017) control_button_pane_g

0x50a8,	// (0x0003e4d5) control_button_pane_t1

0x50b6,	// (0x0003e4e3) control_button_pane_t2

0x0001,

0xfbf1,	// (0x0004901e) control_button_pane_t

0x207d,	// (0x0003b4aa) bg_button_pane_g1

0x208d,	// (0x0003b4ba) bg_button_pane_g2

0x2085,	// (0x0003b4b2) bg_button_pane_g3

0x209d,	// (0x0003b4ca) bg_button_pane_g4

0x2095,	// (0x0003b4c2) bg_button_pane_g5

0x20a5,	// (0x0003b4d2) bg_button_pane_g6

0x20ad,	// (0x0003b4da) bg_button_pane_g7

0x20bd,	// (0x0003b4ea) bg_button_pane_g8

0x20b5,	// (0x0003b4e2) bg_button_pane_g9

0x0008,

0xf82d,	// (0x00048c5a) bg_button_pane_g

0x4676,	// (0x0003daa3) common_borders_pane_ParamLimits

0x4676,	// (0x0003daa3) common_borders_pane

0x5048,	// (0x0003e475) eswt_control_pane_g1_copy1_ParamLimits

0x5048,	// (0x0003e475) eswt_control_pane_g1_copy1

0x5055,	// (0x0003e482) eswt_control_pane_g2_copy1_ParamLimits

0x5055,	// (0x0003e482) eswt_control_pane_g2_copy1

0x5062,	// (0x0003e48f) eswt_control_pane_g3_copy1_ParamLimits

0x5062,	// (0x0003e48f) eswt_control_pane_g3_copy1

0x506f,	// (0x0003e49c) eswt_control_pane_g4_copy1_ParamLimits

0x506f,	// (0x0003e49c) eswt_control_pane_g4_copy1

0x46b1,	// (0x0003dade) bg_eswt_ctrl_canvas_pane_g1

0x4676,	// (0x0003daa3) common_borders_pane_cp2_ParamLimits

0x4676,	// (0x0003daa3) common_borders_pane_cp2

0x4676,	// (0x0003daa3) common_borders_pane_cp3_ParamLimits

0x4676,	// (0x0003daa3) common_borders_pane_cp3

0x50c4,	// (0x0003e4f1) separator_horizontal_pane

0x50cc,	// (0x0003e4f9) separator_vertical_pane

0x5048,	// (0x0003e475) eswt_control_pane_g1_copy2_ParamLimits

0x5048,	// (0x0003e475) eswt_control_pane_g1_copy2

0x5055,	// (0x0003e482) eswt_control_pane_g2_copy2_ParamLimits

0x5055,	// (0x0003e482) eswt_control_pane_g2_copy2

0x5062,	// (0x0003e48f) eswt_control_pane_g3_copy2_ParamLimits

0x5062,	// (0x0003e48f) eswt_control_pane_g3_copy2

0x506f,	// (0x0003e49c) eswt_control_pane_g4_copy2_ParamLimits

0x506f,	// (0x0003e49c) eswt_control_pane_g4_copy2

0xb4c0,	// (0x000448ed) common_borders_pane_cp4

0x50d5,	// (0x0003e502) separator_horizontal_pane_g1

0x50de,	// (0x0003e50b) separator_horizontal_pane_g2

0x50e7,	// (0x0003e514) separator_horizontal_pane_g3

0x0002,

0xfbf6,	// (0x00049023) separator_horizontal_pane_g

0x5048,	// (0x0003e475) eswt_control_pane_g1_copy3_ParamLimits

0x5048,	// (0x0003e475) eswt_control_pane_g1_copy3

0x5055,	// (0x0003e482) eswt_control_pane_g2_copy3_ParamLimits

0x5055,	// (0x0003e482) eswt_control_pane_g2_copy3

0x5062,	// (0x0003e48f) eswt_control_pane_g3_copy3_ParamLimits

0x5062,	// (0x0003e48f) eswt_control_pane_g3_copy3

0x506f,	// (0x0003e49c) eswt_control_pane_g4_copy3_ParamLimits

0x506f,	// (0x0003e49c) eswt_control_pane_g4_copy3

0xb4c0,	// (0x000448ed) common_borders_pane_cp5

0x50f0,	// (0x0003e51d) separator_vertical_pane_g1

0x50f9,	// (0x0003e526) separator_vertical_pane_g2

0x5102,	// (0x0003e52f) separator_vertical_pane_g3

0x0002,

0xfbfd,	// (0x0004902a) separator_vertical_pane_g

0x5048,	// (0x0003e475) eswt_control_pane_g1_copy4_ParamLimits

0x5048,	// (0x0003e475) eswt_control_pane_g1_copy4

0x5055,	// (0x0003e482) eswt_control_pane_g2_copy4_ParamLimits

0x5055,	// (0x0003e482) eswt_control_pane_g2_copy4

0x5062,	// (0x0003e48f) eswt_control_pane_g3_copy4_ParamLimits

0x5062,	// (0x0003e48f) eswt_control_pane_g3_copy4

0x506f,	// (0x0003e49c) eswt_control_pane_g4_copy4_ParamLimits

0x506f,	// (0x0003e49c) eswt_control_pane_g4_copy4

0xcfd3,	// (0x00046400) eswt_ctrl_combo_button_pane

0xcfdb,	// (0x00046408) eswt_ctrl_input_pane

0xcfe3,	// (0x00046410) popup_choice_list_window_cp70

0xcfeb,	// (0x00046418) eswt_ctrl_input_pane_t1

0xb4c0,	// (0x000448ed) input_focus_pane_cp70

0x4676,	// (0x0003daa3) bg_button_pane_cp70_ParamLimits

0x4676,	// (0x0003daa3) bg_button_pane_cp70

0xcff9,	// (0x00046426) eswt_ctrl_combo_button_pane_g1

0x5139,	// (0x0003e566) wait_bar_pane_cp70

0x2109,	// (0x0003b536) bg_popup_window_pane_cp70_ParamLimits

0x2109,	// (0x0003b536) bg_popup_window_pane_cp70

0x5141,	// (0x0003e56e) popup_eswt_tasktip_window_t1

0x5157,	// (0x0003e584) wait_bar_pane_cp71_ParamLimits

0x5157,	// (0x0003e584) wait_bar_pane_cp71

0x5163,	// (0x0003e590) grid_eswt_app_pane

0xbc0b,	// (0x00045038) scroll_pane_cp70

0xd001,	// (0x0004642e) cell_eswt_app_pane_ParamLimits

0xd001,	// (0x0004642e) cell_eswt_app_pane

0xd02b,	// (0x00046458) cell_eswt_app_pane_g1_ParamLimits

0xd02b,	// (0x00046458) cell_eswt_app_pane_g1

0xd05a,	// (0x00046487) cell_eswt_app_pane_g2_ParamLimits

0xd05a,	// (0x00046487) cell_eswt_app_pane_g2

0x0001,

0xfc04,	// (0x00049031) cell_eswt_app_pane_g_ParamLimits

0xfc04,	// (0x00049031) cell_eswt_app_pane_g

0xd07e,	// (0x000464ab) cell_eswt_app_pane_t1_ParamLimits

0xd07e,	// (0x000464ab) cell_eswt_app_pane_t1

0x5221,	// (0x0003e64e) grid_highlight_pane_cp70_ParamLimits

0x5221,	// (0x0003e64e) grid_highlight_pane_cp70

0xc09c,	// (0x000454c9) set_content_pane_g1

0x99b0,	// (0x00042ddd) status_small_volume_pane

0xabc7,	// (0x00043ff4) status_small_volume_pane_g1

0xabcf,	// (0x00043ffc) volume_small2_pane

0xabd8,	// (0x00044005) volume_small2_pane_g1

0xabe1,	// (0x0004400e) volume_small2_pane_g2

0xabea,	// (0x00044017) volume_small2_pane_g3

0xabf3,	// (0x00044020) volume_small2_pane_g4

0xabfc,	// (0x00044029) volume_small2_pane_g5

0xac05,	// (0x00044032) volume_small2_pane_g6

0xac0e,	// (0x0004403b) volume_small2_pane_g7

0xac17,	// (0x00044044) volume_small2_pane_g8

0xac20,	// (0x0004404d) volume_small2_pane_g9

0xac29,	// (0x00044056) volume_small2_pane_g10

0x0009,

0xfc09,	// (0x00049036) volume_small2_pane_g

0x4a69,	// (0x0003de96) fep_vkb_top_text_pane_g1_ParamLimits

0xceff,	// (0x0004632c) fep_vkb_top_text_pane_t1_ParamLimits

0x4d13,	// (0x0003e140) popup_preview_fixed_window_g3_ParamLimits

0x4d13,	// (0x0003e140) popup_preview_fixed_window_g3

0xa23d,	// (0x0004366a) popup_toolbar_trans_pane

0xc82c,	// (0x00045c59) aid_height_set_list_ParamLimits

0x3458,	// (0x0003c885) aid_size_parent_ParamLimits

0xba28,	// (0x00044e55) list_highlight_pane_cp2_ParamLimits

0xc09c,	// (0x000454c9) set_content_pane_g1_ParamLimits

0xc9a7,	// (0x00045dd4) list_single_image_pane_ParamLimits

0xc9a7,	// (0x00045dd4) list_single_image_pane

0xd0b0,	// (0x000464dd) aid_size_cell_image_ParamLimits

0xd0b0,	// (0x000464dd) aid_size_cell_image

0xd0bd,	// (0x000464ea) grid_single_image_pane_ParamLimits

0xd0bd,	// (0x000464ea) grid_single_image_pane

0xd0c9,	// (0x000464f6) list_single_image_pane_g1_ParamLimits

0xd0c9,	// (0x000464f6) list_single_image_pane_g1

0x5246,	// (0x0003e673) list_single_image_pane_g2_ParamLimits

0x5246,	// (0x0003e673) list_single_image_pane_g2

0x0001,

0xfc1e,	// (0x0004904b) list_single_image_pane_g_ParamLimits

0xfc1e,	// (0x0004904b) list_single_image_pane_g

0x525a,	// (0x0003e687) list_single_image_pane_t1_ParamLimits

0x525a,	// (0x0003e687) list_single_image_pane_t1

0xd0d5,	// (0x00046502) cell_image_list_pane_ParamLimits

0xd0d5,	// (0x00046502) cell_image_list_pane

0xd0e9,	// (0x00046516) cell_image_list_pane_g1

0xd0f2,	// (0x0004651f) cell_image_list_pane_g2

0x0001,

0xfc23,	// (0x00049050) cell_image_list_pane_g

0xd0fb,	// (0x00046528) aid_size_cell_tb_trans_pane

0xb8e6,	// (0x00044d13) bg_tb_trans_pane

0xd10d,	// (0x0004653a) grid_tb_trans_pane

0x207d,	// (0x0003b4aa) bg_tb_trans_pane_g1

0x208d,	// (0x0003b4ba) bg_tb_trans_pane_g2

0x2085,	// (0x0003b4b2) bg_tb_trans_pane_g3

0x209d,	// (0x0003b4ca) bg_tb_trans_pane_g4

0x2095,	// (0x0003b4c2) bg_tb_trans_pane_g5

0x20bd,	// (0x0003b4ea) bg_tb_trans_pane_g6

0x20b5,	// (0x0003b4e2) bg_tb_trans_pane_g7

0x20a5,	// (0x0003b4d2) bg_tb_trans_pane_g8

0x20ad,	// (0x0003b4da) bg_tb_trans_pane_g9

0x0008,

0xfc28,	// (0x00049055) bg_tb_trans_pane_g

0xd121,	// (0x0004654e) cell_toolbar_trans_pane_ParamLimits

0xd121,	// (0x0004654e) cell_toolbar_trans_pane

0x46b1,	// (0x0003dade) cell_toolbar_trans_pane_g1

0xcc58,	// (0x00046085) list_form2_midp_pane_t1

0xcc66,	// (0x00046093) list_form2_midp_pane_t2

0x0001,

0xfac5,	// (0x00048ef2) list_form2_midp_pane_t

0x4298,	// (0x0003d6c5) scroll_pane_cp51_ParamLimits

0x4454,	// (0x0003d881) form2_midp_wait_pane_g1

0x445d,	// (0x0003d88a) form2_midp_wait_pane_g2

0x4466,	// (0x0003d893) form2_midp_wait_pane_g3

0x0002,

0xfada,	// (0x00048f07) form2_midp_wait_pane_g

0xb530,	// (0x0004495d) list_highlight_pane_cp21_ParamLimits

0x44ae,	// (0x0003d8db) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x44bd,	// (0x0003d8ea) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x360c,	// (0x0003ca39) list_single_2graphic_im_pane_ParamLimits

0x360c,	// (0x0003ca39) list_single_2graphic_im_pane

0xd147,	// (0x00046574) list_single_2graphic_im_pane_g1_ParamLimits

0xd147,	// (0x00046574) list_single_2graphic_im_pane_g1

0xd158,	// (0x00046585) list_single_2graphic_im_pane_g2_ParamLimits

0xd158,	// (0x00046585) list_single_2graphic_im_pane_g2

0xd164,	// (0x00046591) list_single_2graphic_im_pane_g3_ParamLimits

0xd164,	// (0x00046591) list_single_2graphic_im_pane_g3

0x0003,

0xfc3b,	// (0x00049068) list_single_2graphic_im_pane_g_ParamLimits

0xfc3b,	// (0x00049068) list_single_2graphic_im_pane_g

0xd178,	// (0x000465a5) list_single_2graphic_im_pane_t1_ParamLimits

0xd178,	// (0x000465a5) list_single_2graphic_im_pane_t1

0x4d1f,	// (0x0003e14c) list_single_graphic_2heading_pane_fp_ParamLimits

0x4d1f,	// (0x0003e14c) list_single_graphic_2heading_pane_fp

0xe22c,	// (0x00047659) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe22c,	// (0x00047659) list_single_graphic_2heading_pane_fp_g1

0x4d35,	// (0x0003e162) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4d35,	// (0x0003e162) list_single_graphic_2heading_pane_fp_g2

0xdc15,	// (0x00047042) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xdc15,	// (0x00047042) list_single_graphic_2heading_pane_fp_g3

0xe201,	// (0x0004762e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xe201,	// (0x0004762e) list_single_graphic_2heading_pane_fp_g4

0x4d41,	// (0x0003e16e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4d41,	// (0x0003e16e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb62,	// (0x00048f8f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb62,	// (0x00048f8f) list_single_graphic_2heading_pane_fp_g

0xe3ba,	// (0x000477e7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe3ba,	// (0x000477e7) list_single_graphic_2heading_pane_fp_t1

0xe264,	// (0x00047691) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe264,	// (0x00047691) list_single_graphic_2heading_pane_fp_t2

0xe3d0,	// (0x000477fd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe3d0,	// (0x000477fd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc44,	// (0x00049071) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc44,	// (0x00049071) list_single_graphic_2heading_pane_fp_t

0x473d,	// (0x0003db6a) fep_hwr_write_pane_g5_ParamLimits

0x473d,	// (0x0003db6a) fep_hwr_write_pane_g5

0x4749,	// (0x0003db76) fep_hwr_write_pane_g6_ParamLimits

0x4749,	// (0x0003db76) fep_hwr_write_pane_g6

0xcfb3,	// (0x000463e0) eswt_shell_pane_ParamLimits

0x2109,	// (0x0003b536) bg_popup_window_pane_cp18_ParamLimits

0x5040,	// (0x0003e46d) heading_pane_cp70

0x5141,	// (0x0003e56e) popup_eswt_tasktip_window_t1_ParamLimits

0xa35a,	// (0x00043787) aid_touch_tab_arrow_left

0xa370,	// (0x0004379d) aid_touch_tab_arrow_right

0x8962,	// (0x00041d8f) title_pane_g3_ParamLimits

0x8962,	// (0x00041d8f) title_pane_g3

0xb8ae,	// (0x00044cdb) set_value_pane_g1

0xa23d,	// (0x0004366a) popup_toolbar_trans_pane_ParamLimits

0xd0fb,	// (0x00046528) aid_size_cell_tb_trans_pane_ParamLimits

0xb8e6,	// (0x00044d13) bg_tb_trans_pane_ParamLimits

0xd10d,	// (0x0004653a) grid_tb_trans_pane_ParamLimits

0xb65a,	// (0x00044a87) cont_note_pane_ParamLimits

0xb65a,	// (0x00044a87) cont_note_pane

0xb7da,	// (0x00044c07) cont_snote2_single_text_pane_ParamLimits

0xb7da,	// (0x00044c07) cont_snote2_single_text_pane

0xb7da,	// (0x00044c07) cont_snote2_single_graphic_pane_ParamLimits

0xb7da,	// (0x00044c07) cont_snote2_single_graphic_pane

0x2723,	// (0x0003bb50) cont_note_wait_pane_ParamLimits

0x2723,	// (0x0003bb50) cont_note_wait_pane

0x2723,	// (0x0003bb50) cont_note_image_pane_ParamLimits

0x2723,	// (0x0003bb50) cont_note_image_pane

0x5350,	// (0x0003e77d) popup_note2_window_g1_ParamLimits

0x5350,	// (0x0003e77d) popup_note2_window_g1

0xd1b6,	// (0x000465e3) popup_note2_window_t1_ParamLimits

0xd1b6,	// (0x000465e3) popup_note2_window_t1

0xd1fb,	// (0x00046628) popup_note2_window_t2_ParamLimits

0xd1fb,	// (0x00046628) popup_note2_window_t2

0xd240,	// (0x0004666d) popup_note2_window_t3_ParamLimits

0xd240,	// (0x0004666d) popup_note2_window_t3

0x5450,	// (0x0003e87d) popup_note2_window_t4_ParamLimits

0x5450,	// (0x0003e87d) popup_note2_window_t4

0xb6de,	// (0x00044b0b) popup_note2_window_t5_ParamLimits

0xb6de,	// (0x00044b0b) popup_note2_window_t5

0x0004,

0xfc50,	// (0x0004907d) popup_note2_window_t_ParamLimits

0xfc50,	// (0x0004907d) popup_note2_window_t

0x547f,	// (0x0003e8ac) popup_note2_image_window_g1_ParamLimits

0x547f,	// (0x0003e8ac) popup_note2_image_window_g1

0xd285,	// (0x000466b2) popup_note2_image_window_g2_ParamLimits

0xd285,	// (0x000466b2) popup_note2_image_window_g2

0x0001,

0xfc5b,	// (0x00049088) popup_note2_image_window_g_ParamLimits

0xfc5b,	// (0x00049088) popup_note2_image_window_g

0x549d,	// (0x0003e8ca) popup_note2_image_window_t1_ParamLimits

0x549d,	// (0x0003e8ca) popup_note2_image_window_t1

0x54b5,	// (0x0003e8e2) popup_note2_image_window_t2_ParamLimits

0x54b5,	// (0x0003e8e2) popup_note2_image_window_t2

0x54cd,	// (0x0003e8fa) popup_note2_image_window_t3_ParamLimits

0x54cd,	// (0x0003e8fa) popup_note2_image_window_t3

0x0002,

0xfc60,	// (0x0004908d) popup_note2_image_window_t_ParamLimits

0xfc60,	// (0x0004908d) popup_note2_image_window_t

0x2731,	// (0x0003bb5e) popup_note2_wait_window_g1_ParamLimits

0x2731,	// (0x0003bb5e) popup_note2_wait_window_g1

0x273d,	// (0x0003bb6a) popup_note2_wait_window_g2_ParamLimits

0x273d,	// (0x0003bb6a) popup_note2_wait_window_g2

0x2749,	// (0x0003bb76) popup_note2_wait_window_g3_ParamLimits

0x2749,	// (0x0003bb76) popup_note2_wait_window_g3

0x0002,

0xf80f,	// (0x00048c3c) popup_note2_wait_window_g_ParamLimits

0xf80f,	// (0x00048c3c) popup_note2_wait_window_g

0x54e9,	// (0x0003e916) popup_note2_wait_window_t1_ParamLimits

0x54e9,	// (0x0003e916) popup_note2_wait_window_t1

0x5507,	// (0x0003e934) popup_note2_wait_window_t2_ParamLimits

0x5507,	// (0x0003e934) popup_note2_wait_window_t2

0x5525,	// (0x0003e952) popup_note2_wait_window_t3_ParamLimits

0x5525,	// (0x0003e952) popup_note2_wait_window_t3

0x5537,	// (0x0003e964) popup_note2_wait_window_t4_ParamLimits

0x5537,	// (0x0003e964) popup_note2_wait_window_t4

0x0003,

0xfc67,	// (0x00049094) popup_note2_wait_window_t_ParamLimits

0xfc67,	// (0x00049094) popup_note2_wait_window_t

0x5549,	// (0x0003e976) wait_bar2_pane_ParamLimits

0x5549,	// (0x0003e976) wait_bar2_pane

0x5561,	// (0x0003e98e) popup_snote2_single_text_window_g1_ParamLimits

0x5561,	// (0x0003e98e) popup_snote2_single_text_window_g1

0x5589,	// (0x0003e9b6) popup_snote2_single_text_window_t1_ParamLimits

0x5589,	// (0x0003e9b6) popup_snote2_single_text_window_t1

0x55d5,	// (0x0003ea02) popup_snote2_single_text_window_t2_ParamLimits

0x55d5,	// (0x0003ea02) popup_snote2_single_text_window_t2

0x5621,	// (0x0003ea4e) popup_snote2_single_text_window_t3_ParamLimits

0x5621,	// (0x0003ea4e) popup_snote2_single_text_window_t3

0x5662,	// (0x0003ea8f) popup_snote2_single_text_window_t4_ParamLimits

0x5662,	// (0x0003ea8f) popup_snote2_single_text_window_t4

0x5698,	// (0x0003eac5) popup_snote2_single_text_window_t5_ParamLimits

0x5698,	// (0x0003eac5) popup_snote2_single_text_window_t5

0x0004,

0xfc70,	// (0x0004909d) popup_snote2_single_text_window_t_ParamLimits

0xfc70,	// (0x0004909d) popup_snote2_single_text_window_t

0xd297,	// (0x000466c4) popup_snote2_single_graphic_window_g1_ParamLimits

0xd297,	// (0x000466c4) popup_snote2_single_graphic_window_g1

0x56eb,	// (0x0003eb18) popup_snote2_single_graphic_window_g2_ParamLimits

0x56eb,	// (0x0003eb18) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7b,	// (0x000490a8) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7b,	// (0x000490a8) popup_snote2_single_graphic_window_g

0x5713,	// (0x0003eb40) popup_snote2_single_graphic_window_t1_ParamLimits

0x5713,	// (0x0003eb40) popup_snote2_single_graphic_window_t1

0x575f,	// (0x0003eb8c) popup_snote2_single_graphic_window_t2_ParamLimits

0x575f,	// (0x0003eb8c) popup_snote2_single_graphic_window_t2

0x5621,	// (0x0003ea4e) popup_snote2_single_graphic_window_t3_ParamLimits

0x5621,	// (0x0003ea4e) popup_snote2_single_graphic_window_t3

0x5662,	// (0x0003ea8f) popup_snote2_single_graphic_window_t4_ParamLimits

0x5662,	// (0x0003ea8f) popup_snote2_single_graphic_window_t4

0x5698,	// (0x0003eac5) popup_snote2_single_graphic_window_t5_ParamLimits

0x5698,	// (0x0003eac5) popup_snote2_single_graphic_window_t5

0x0004,

0xfc80,	// (0x000490ad) popup_snote2_single_graphic_window_t_ParamLimits

0xfc80,	// (0x000490ad) popup_snote2_single_graphic_window_t

0x4155,	// (0x0003d582) clock_nsta_pane_cp2_t1

0x4155,	// (0x0003d582) clock_nsta_pane_cp2_t2

0x0001,

0xfa9b,	// (0x00048ec8) clock_nsta_pane_cp2_t

0x926b,	// (0x00042698) form_field_data_wide_pane_g1_ParamLimits

0xb8f4,	// (0x00044d21) form_field_data_wide_pane_g2_ParamLimits

0xb8f4,	// (0x00044d21) form_field_data_wide_pane_g2

0xb900,	// (0x00044d2d) form_field_data_wide_pane_g3_ParamLimits

0xb900,	// (0x00044d2d) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x00048a74) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x00048a74) form_field_data_wide_pane_g

0xcb79,	// (0x00045fa6) grid_touch_3_pane_ParamLimits

0xcb79,	// (0x00045fa6) grid_touch_3_pane

0xd2bf,	// (0x000466ec) cell_touch_3_pane_ParamLimits

0xd2bf,	// (0x000466ec) cell_touch_3_pane

0x46b1,	// (0x0003dade) cell_touch_3_pane_g1

0x46b1,	// (0x0003dade) cell_touch_3_pane_g2

0x0001,

0xfb20,	// (0x00048f4d) cell_touch_3_pane_g

0xb710,	// (0x00044b3d) cont_query_data_pane

0xb718,	// (0x00044b45) cont_query_data_pane_cp1

0x57d9,	// (0x0003ec06) button_value_adjust_pane_cp7

0x57e1,	// (0x0003ec0e) query_popup_pane_cp3

0xbd99,	// (0x000451c6) bg_popup_sub_pane_cp22_ParamLimits

0x96d4,	// (0x00042b01) navi_navi_volume_pane_cp2

0x96e3,	// (0x00042b10) popup_side_volume_key_window_g2

0x96f2,	// (0x00042b1f) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x00048b0a) popup_side_volume_key_window_g

0x9701,	// (0x00042b2e) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x00048b11) popup_side_volume_key_window_t

0x9823,	// (0x00042c50) popup_side_volume_key_window_ParamLimits

0x9031,	// (0x0004245e) list_double_graphic_pane_g4_ParamLimits

0x9031,	// (0x0004245e) list_double_graphic_pane_g4

0xc993,	// (0x00045dc0) list_single_2heading_msg_pane_ParamLimits

0xc993,	// (0x00045dc0) list_single_2heading_msg_pane

0xac32,	// (0x0004405f) list_single_2heading_msg_pane_g1_ParamLimits

0xac32,	// (0x0004405f) list_single_2heading_msg_pane_g1

0xac3e,	// (0x0004406b) list_single_2heading_msg_pane_g2_ParamLimits

0xac3e,	// (0x0004406b) list_single_2heading_msg_pane_g2

0xac51,	// (0x0004407e) list_single_2heading_msg_pane_g3_ParamLimits

0xac51,	// (0x0004407e) list_single_2heading_msg_pane_g3

0xe3f0,	// (0x0004781d) list_single_2heading_msg_pane_g4_ParamLimits

0xe3f0,	// (0x0004781d) list_single_2heading_msg_pane_g4

0x0003,

0xfc8b,	// (0x000490b8) list_single_2heading_msg_pane_g_ParamLimits

0xfc8b,	// (0x000490b8) list_single_2heading_msg_pane_g

0xac5d,	// (0x0004408a) list_single_2heading_msg_pane_t1_ParamLimits

0xac5d,	// (0x0004408a) list_single_2heading_msg_pane_t1

0xac85,	// (0x000440b2) list_single_2heading_msg_pane_t2_ParamLimits

0xac85,	// (0x000440b2) list_single_2heading_msg_pane_t2

0xacf0,	// (0x0004411d) list_single_2heading_msg_pane_t3_ParamLimits

0xacf0,	// (0x0004411d) list_single_2heading_msg_pane_t3

0xe408,	// (0x00047835) list_single_2heading_msg_pane_t4_ParamLimits

0xe408,	// (0x00047835) list_single_2heading_msg_pane_t4

0x0003,

0xfc94,	// (0x000490c1) list_single_2heading_msg_pane_t_ParamLimits

0xfc94,	// (0x000490c1) list_single_2heading_msg_pane_t

0xb4de,	// (0x0004490b) title_pane_g4_ParamLimits

0xb4de,	// (0x0004490b) title_pane_g4

0xf0ce,	// (0x000484fb) title_pane_stacon_g3_ParamLimits

0xf0ce,	// (0x000484fb) title_pane_stacon_g3

0x5313,	// (0x0003e740) list_single_2graphic_im_pane_g4_ParamLimits

0x5313,	// (0x0003e740) list_single_2graphic_im_pane_g4

0xc6d1,	// (0x00045afe) popup_side_volume_key_window_cp

0x3987,	// (0x0003cdb4) main_idle_act2_pane_t1

0x06c3,	// (0x00039af0) toolbar_button_pane_g10

0x8f6b,	// (0x00042398) popup_toolbar_window_cp1

0x4146,	// (0x0003d573) clock_nsta_pane_cp_t1

0x4146,	// (0x0003d573) clock_nsta_pane_cp_t2

0x0001,

0xfa96,	// (0x00048ec3) clock_nsta_pane_cp_t

0x96d4,	// (0x00042b01) navi_navi_volume_pane_cp2_ParamLimits

0xf2a2,	// (0x000486cf) popup_side_volume_key_window_g1_ParamLimits

0x96e3,	// (0x00042b10) popup_side_volume_key_window_g2_ParamLimits

0x96f2,	// (0x00042b1f) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x00048b0a) popup_side_volume_key_window_g_ParamLimits

0x0c87,	// (0x0003a0b4) fep_hwr_aid_pane

0x0d2e,	// (0x0003a15b) bg_fep_hwr_top_pane_g4_ParamLimits

0x470d,	// (0x0003db3a) fep_hwr_top_pane_g1_ParamLimits

0x471f,	// (0x0003db4c) fep_hwr_top_pane_g2_ParamLimits

0x0d4e,	// (0x0003a17b) fep_hwr_top_pane_g3_ParamLimits

0xfaeb,	// (0x00048f18) fep_hwr_top_pane_g_ParamLimits

0x0d63,	// (0x0003a190) fep_hwr_top_text_pane_ParamLimits

0x2f2d,	// (0x0003c35a) aid_touch_tab_arrow_arrow_2

0x2f36,	// (0x0003c363) aid_touch_tab_arrow_left_2

0x0c9b,	// (0x0003a0c8) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0cd2,	// (0x0003a0ff) fep_hwr_prediction_pane

0x4878,	// (0x0003dca5) fep_vkb_prediction_pane

0xcedf,	// (0x0004630c) fep_vkb_side_pane_g3_ParamLimits

0xcedf,	// (0x0004630c) fep_vkb_side_pane_g3

0x0ede,	// (0x0003a30b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0f4a,	// (0x0003a377) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0f57,	// (0x0003a384) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9a,	// (0x00048fc7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x115d,	// (0x0003a58a) fep_hwr_prediction_pane_g1

0x1167,	// (0x0003a594) fep_hwr_prediction_pane_g2

0x116f,	// (0x0003a59c) fep_hwr_prediction_pane_g3

0x1177,	// (0x0003a5a4) fep_hwr_prediction_pane_g4

0x0003,

0xfc9d,	// (0x000490ca) fep_hwr_prediction_pane_g

0x5806,	// (0x0003ec33) fep_vkb_prediction_pane_g1

0x5810,	// (0x0003ec3d) fep_vkb_prediction_pane_g2

0x5818,	// (0x0003ec45) fep_vkb_prediction_pane_g3

0x5820,	// (0x0003ec4d) fep_vkb_prediction_pane_g4

0x0003,

0xfca6,	// (0x000490d3) fep_vkb_prediction_pane_g

0xaa26,	// (0x00043e53) slider_set_pane_g3

0xaa3a,	// (0x00043e67) slider_set_pane_g4

0xaa52,	// (0x00043e7f) slider_set_pane_g5

0xaa26,	// (0x00043e53) slider_set_pane_g6

0xaa68,	// (0x00043e95) slider_set_pane_g7

0x35b9,	// (0x0003c9e6) slider_form_pane_g3

0x35c2,	// (0x0003c9ef) slider_form_pane_g4

0x35ca,	// (0x0003c9f7) slider_form_pane_g5

0x35b9,	// (0x0003c9e6) slider_form_pane_g6

0xc977,	// (0x00045da4) slider_form_pane_g7

0x3c33,	// (0x0003d060) slider_set_pane_vc_g3

0x3c3c,	// (0x0003d069) slider_set_pane_vc_g4

0x3c45,	// (0x0003d072) slider_set_pane_vc_g5

0x3c33,	// (0x0003d060) slider_set_pane_vc_g6

0x3c4e,	// (0x0003d07b) slider_set_pane_vc_g7

0x3e04,	// (0x0003d231) slider_form_pane_vc_g1

0x3e0d,	// (0x0003d23a) slider_form_pane_vc_g2

0x3e16,	// (0x0003d243) slider_form_pane_vc_g3

0x3e04,	// (0x0003d231) slider_form_pane_vc_g4

0x3e1f,	// (0x0003d24c) slider_form_pane_vc_g5

0x0004,

0xfa68,	// (0x00048e95) slider_form_pane_vc_g

0xdb1f,	// (0x00046f4c) main_idle_act3_pane

0x5828,	// (0x0003ec55) ai3_links_pane

0xd308,	// (0x00046735) popup_ai3_data_window_ParamLimits

0xd308,	// (0x00046735) popup_ai3_data_window

0xb4c0,	// (0x000448ed) grid_ai3_links_pane

0xd320,	// (0x0004674d) cell_ai3_links_pane_ParamLimits

0xd320,	// (0x0004674d) cell_ai3_links_pane

0x5861,	// (0x0003ec8e) bg_popup_sub_pane_cp11

0x586e,	// (0x0003ec9b) cell_ai3_links_pane_g1

0xb4c0,	// (0x000448ed) bg_popup_sub_pane_cp12

0x5893,	// (0x0003ecc0) heading_ai3_data_pane

0x589b,	// (0x0003ecc8) list_ai3_gene_pane

0x58a7,	// (0x0003ecd4) popup_ai3_data_window_g1

0x58af,	// (0x0003ecdc) heading_ai3_data_pane_g1

0x58b7,	// (0x0003ece4) heading_ai3_data_pane_t1

0xd33a,	// (0x00046767) list_double_ai3_gene_pane_ParamLimits

0xd33a,	// (0x00046767) list_double_ai3_gene_pane

0x58d2,	// (0x0003ecff) list_single_ai3_gene_pane_ParamLimits

0x58d2,	// (0x0003ecff) list_single_ai3_gene_pane

0x4676,	// (0x0003daa3) list_highlight_pane_cp7_ParamLimits

0x4676,	// (0x0003daa3) list_highlight_pane_cp7

0x58df,	// (0x0003ed0c) list_single_a13_gene_pane_t1_ParamLimits

0x58df,	// (0x0003ed0c) list_single_a13_gene_pane_t1

0x58f6,	// (0x0003ed23) list_single_ai3_gene_pane_g1

0x58ff,	// (0x0003ed2c) list_single_ai3_gene_pane_g2

0x0001,

0xfcaf,	// (0x000490dc) list_single_ai3_gene_pane_g

0x5907,	// (0x0003ed34) list_double_ai3_gene_pane_g1_ParamLimits

0x5907,	// (0x0003ed34) list_double_ai3_gene_pane_g1

0xd347,	// (0x00046774) list_double_ai3_gene_pane_t1_ParamLimits

0xd347,	// (0x00046774) list_double_ai3_gene_pane_t1

0x592f,	// (0x0003ed5c) list_double_ai3_gene_pane_t2_ParamLimits

0x592f,	// (0x0003ed5c) list_double_ai3_gene_pane_t2

0x5944,	// (0x0003ed71) list_double_ai3_gene_pane_t3_ParamLimits

0x5944,	// (0x0003ed71) list_double_ai3_gene_pane_t3

0x0002,

0xfcb4,	// (0x000490e1) list_double_ai3_gene_pane_t_ParamLimits

0xfcb4,	// (0x000490e1) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe3e6,	// (0x00047813) aid_size_min_col_2

0xd2f2,	// (0x0004671f) aid_size_min_msg_ParamLimits

0xd2f2,	// (0x0004671f) aid_size_min_msg

0xcef3,	// (0x00046320) fep_vkb_top_text_pane_g2_ParamLimits

0xcef3,	// (0x00046320) fep_vkb_top_text_pane_g2

0x0001,

0xfb1b,	// (0x00048f48) fep_vkb_top_text_pane_g_ParamLimits

0xfb1b,	// (0x00048f48) fep_vkb_top_text_pane_g

0xdb1f,	// (0x00046f4c) main_hc_apps_shell_pane

0x5961,	// (0x0003ed8e) grid_hc_apps_pane_ParamLimits

0x5961,	// (0x0003ed8e) grid_hc_apps_pane

0x5973,	// (0x0003eda0) list_hc_apps_pane

0x597b,	// (0x0003eda8) scroll_pane_cp37_ParamLimits

0x597b,	// (0x0003eda8) scroll_pane_cp37

0xd363,	// (0x00046790) cell_hc_apps_pane_ParamLimits

0xd363,	// (0x00046790) cell_hc_apps_pane

0xd421,	// (0x0004684e) cell_hc_apps_pane_g1_ParamLimits

0xd421,	// (0x0004684e) cell_hc_apps_pane_g1

0x5a65,	// (0x0003ee92) cell_hc_apps_pane_g2_ParamLimits

0x5a65,	// (0x0003ee92) cell_hc_apps_pane_g2

0x5a81,	// (0x0003eeae) cell_hc_apps_pane_g3_ParamLimits

0x5a81,	// (0x0003eeae) cell_hc_apps_pane_g3

0x0002,

0xfcbb,	// (0x000490e8) cell_hc_apps_pane_g_ParamLimits

0xfcbb,	// (0x000490e8) cell_hc_apps_pane_g

0xd44d,	// (0x0004687a) cell_hc_apps_pane_t1_ParamLimits

0xd44d,	// (0x0004687a) cell_hc_apps_pane_t1

0xb65a,	// (0x00044a87) grid_highlight_pane_cp10_ParamLimits

0xb65a,	// (0x00044a87) grid_highlight_pane_cp10

0xd48b,	// (0x000468b8) list_single_hc_apps_pane_ParamLimits

0xd48b,	// (0x000468b8) list_single_hc_apps_pane

0xd4bb,	// (0x000468e8) list_single_hc_apps_pane_g1

0xad5e,	// (0x0004418b) list_single_hc_apps_pane_g2

0x0001,

0xfcc2,	// (0x000490ef) list_single_hc_apps_pane_g

0xad77,	// (0x000441a4) list_single_hc_apps_pane_g2_copy1

0xad93,	// (0x000441c0) list_single_hc_apps_pane_t1

0xb530,	// (0x0004495d) bg_set_opt_pane_cp_ParamLimits

0x8a36,	// (0x00041e63) setting_slider_pane_t1_ParamLimits

0x8a4f,	// (0x00041e7c) setting_slider_pane_t2_ParamLimits

0x8a69,	// (0x00041e96) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00048966) setting_slider_pane_t_ParamLimits

0x8a81,	// (0x00041eae) slider_set_pane_ParamLimits

0xf4a6,	// (0x000488d3) control_pane_g5_ParamLimits

0xf4a6,	// (0x000488d3) control_pane_g5

0xc7f9,	// (0x00045c26) slider_set_pane_g1_ParamLimits

0x09ea,	// (0x00039e17) slider_set_pane_g2_ParamLimits

0xaa26,	// (0x00043e53) slider_set_pane_g3_ParamLimits

0xaa3a,	// (0x00043e67) slider_set_pane_g4_ParamLimits

0xaa52,	// (0x00043e7f) slider_set_pane_g5_ParamLimits

0xaa26,	// (0x00043e53) slider_set_pane_g6_ParamLimits

0xaa68,	// (0x00043e95) slider_set_pane_g7_ParamLimits

0xf92b,	// (0x00048d58) slider_set_pane_g_ParamLimits

0xc047,	// (0x00045474) navi_icon_text_pane_ParamLimits

0xa323,	// (0x00043750) aid_fill_nsta_2_ParamLimits

0xa35a,	// (0x00043787) aid_touch_tab_arrow_left_ParamLimits

0xa370,	// (0x0004379d) aid_touch_tab_arrow_right_ParamLimits

0xa40b,	// (0x00043838) clock_nsta_pane_ParamLimits

0x2f0f,	// (0x0003c33c) navi_icon_pane_g1_ParamLimits

0x2f1b,	// (0x0003c348) navi_text_pane_t1_ParamLimits

0x4256,	// (0x0003d683) navi_icon_text_pane_g1_ParamLimits

0x4262,	// (0x0003d68f) navi_icon_text_pane_t1_ParamLimits

0xd4bb,	// (0x000468e8) list_single_hc_apps_pane_g1_ParamLimits

0xad5e,	// (0x0004418b) list_single_hc_apps_pane_g2_ParamLimits

0xfcc2,	// (0x000490ef) list_single_hc_apps_pane_g_ParamLimits

0xad77,	// (0x000441a4) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xad93,	// (0x000441c0) list_single_hc_apps_pane_t1_ParamLimits

0x8867,	// (0x00041c94) popup_toolbar2_fixed_window_ParamLimits

0x8867,	// (0x00041c94) popup_toolbar2_fixed_window

0xa233,	// (0x00043660) popup_toolbar2_float_window

0xb4c0,	// (0x000448ed) bg_popup_sub_pane_cp27

0x5b5f,	// (0x0003ef8c) grid_toolbar2_float_pane

0xb4c0,	// (0x000448ed) bg_popup_sub_pane_cp26

0x5b5f,	// (0x0003ef8c) grid_toolbar2_fixed_pane

0xd4d4,	// (0x00046901) cell_toolbar2_fixed_pane_ParamLimits

0xd4d4,	// (0x00046901) cell_toolbar2_fixed_pane

0xd4ee,	// (0x0004691b) cell_toolbar2_fixed_pane_g1

0x0178,	// (0x000395a5) toolbar2_fixed_button_pane

0x207d,	// (0x0003b4aa) toolbar2_fixed_button_pane_g1

0x208d,	// (0x0003b4ba) toolbar2_fixed_button_pane_g2

0x2085,	// (0x0003b4b2) toolbar2_fixed_button_pane_g3

0x209d,	// (0x0003b4ca) toolbar2_fixed_button_pane_g4

0x2095,	// (0x0003b4c2) toolbar2_fixed_button_pane_g5

0x20a5,	// (0x0003b4d2) toolbar2_fixed_button_pane_g6

0x20ad,	// (0x0003b4da) toolbar2_fixed_button_pane_g7

0x20bd,	// (0x0003b4ea) toolbar2_fixed_button_pane_g8

0x20b5,	// (0x0003b4e2) toolbar2_fixed_button_pane_g9

0x0008,

0xf82d,	// (0x00048c5a) toolbar2_fixed_button_pane_g

0x5b80,	// (0x0003efad) cell_toolbar2_float_pane_ParamLimits

0x5b80,	// (0x0003efad) cell_toolbar2_float_pane

0x5b91,	// (0x0003efbe) cell_toolbar2_float_pane_g1

0x0178,	// (0x000395a5) toolbar2_fixed_button_pane_cp

0xcddb,	// (0x00046208) fep_vkb_accented_list_pane_ParamLimits

0xcddb,	// (0x00046208) fep_vkb_accented_list_pane

0x0ebe,	// (0x0003a2eb) bg_popup_fep_shadow_pane_g9

0xc1a2,	// (0x000455cf) bg_popup_fep_shadow_pane_cp3

0xb9ff,	// (0x00044e2c) list_accented_list_pane

0x5b9a,	// (0x0003efc7) list_single_accented_list_pane_ParamLimits

0x5b9a,	// (0x0003efc7) list_single_accented_list_pane

0xc1a2,	// (0x000455cf) list_highlight_pane_cp10

0x5bab,	// (0x0003efd8) list_single_accented_list_pane_t1

0xa15d,	// (0x0004358a) popup_slider_window_ParamLimits

0xa15d,	// (0x0004358a) popup_slider_window

0x57e9,	// (0x0003ec16) aid_indentation_list_msg

0xd5df,	// (0x00046a0c) bg_popup_window_pane_cp19

0x5cd1,	// (0x0003f0fe) popup_slider_window_g1

0x5ced,	// (0x0003f11a) popup_slider_window_g2

0x5d09,	// (0x0003f136) popup_slider_window_g3

0x0005,

0xfcc7,	// (0x000490f4) popup_slider_window_g

0x5d6f,	// (0x0003f19c) popup_slider_window_t1

0x5de3,	// (0x0003f210) small_volume_slider_vertical_pane

0x46b1,	// (0x0003dade) small_volume_slider_vertical_pane_g1

0x46b1,	// (0x0003dade) small_volume_slider_vertical_pane_g2

0x5dff,	// (0x0003f22c) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd9,	// (0x00049106) small_volume_slider_vertical_pane_g

0x8666,	// (0x00041a93) area_side_right_pane_ParamLimits

0x8666,	// (0x00041a93) area_side_right_pane

0xadc1,	// (0x000441ee) aid_size_side_button_ParamLimits

0xadc1,	// (0x000441ee) aid_size_side_button

0xadda,	// (0x00044207) grid_sctrl_middle_pane_ParamLimits

0xadda,	// (0x00044207) grid_sctrl_middle_pane

0x1215,	// (0x0003a642) sctrl_sk_bottom_pane

0x1226,	// (0x0003a653) sctrl_sk_top_pane

0x1238,	// (0x0003a665) aid_touch_sctrl_top

0x1245,	// (0x0003a672) bg_sctrl_sk_pane_ParamLimits

0x1245,	// (0x0003a672) bg_sctrl_sk_pane

0x1253,	// (0x0003a680) sctrl_sk_top_pane_g1

0x1260,	// (0x0003a68d) sctrl_sk_top_pane_t1

0x1238,	// (0x0003a665) aid_touch_sctrl_bottom

0x1245,	// (0x0003a672) bg_sctrl_sk_pane_cp_ParamLimits

0x1245,	// (0x0003a672) bg_sctrl_sk_pane_cp

0x127b,	// (0x0003a6a8) sctrl_sk_bottom_pane_g1

0x1260,	// (0x0003a68d) sctrl_sk_bottom_pane_t1

0xadf4,	// (0x00044221) cell_sctrl_middle_pane_ParamLimits

0xadf4,	// (0x00044221) cell_sctrl_middle_pane

0xae05,	// (0x00044232) aid_touch_sctrl_middle_ParamLimits

0xae05,	// (0x00044232) aid_touch_sctrl_middle

0xae12,	// (0x0004423f) bg_sctrl_middle_pane_ParamLimits

0xae12,	// (0x0004423f) bg_sctrl_middle_pane

0x18eb,	// (0x0003ad18) cell_sctrl_middle_pane_g1_ParamLimits

0x18eb,	// (0x0003ad18) cell_sctrl_middle_pane_g1

0xae20,	// (0x0004424d) cell_sctrl_middle_pane_g2_ParamLimits

0xae20,	// (0x0004424d) cell_sctrl_middle_pane_g2

0x0001,

0xfce5,	// (0x00049112) cell_sctrl_middle_pane_g_ParamLimits

0xfce5,	// (0x00049112) cell_sctrl_middle_pane_g

0x207d,	// (0x0003b4aa) bg_sctrl_middle_pane_g1

0x2085,	// (0x0003b4b2) bg_sctrl_middle_pane_g2

0x208d,	// (0x0003b4ba) bg_sctrl_middle_pane_g3

0x2095,	// (0x0003b4c2) bg_sctrl_middle_pane_g4

0x209d,	// (0x0003b4ca) bg_sctrl_middle_pane_g5

0x20a5,	// (0x0003b4d2) bg_sctrl_middle_pane_g6

0x20ad,	// (0x0003b4da) bg_sctrl_middle_pane_g7

0x20b5,	// (0x0003b4e2) bg_sctrl_middle_pane_g8

0x0007,

0xfcea,	// (0x00049117) bg_sctrl_middle_pane_g

0x20bd,	// (0x0003b4ea) bg_sctrl_middle_pane_g8_copy1

0x207d,	// (0x0003b4aa) bg_sctrl_sk_pane_g1

0x208d,	// (0x0003b4ba) bg_sctrl_sk_pane_g2

0x2085,	// (0x0003b4b2) bg_sctrl_sk_pane_g3

0x0008,

0xf82d,	// (0x00048c5a) bg_sctrl_sk_pane_g

0xb828,	// (0x00044c55) aid_size_touch_scroll_bar

0x209d,	// (0x0003b4ca) bg_sctrl_sk_pane_g4

0x2095,	// (0x0003b4c2) bg_sctrl_sk_pane_g5

0x20a5,	// (0x0003b4d2) bg_sctrl_sk_pane_g6

0x20ad,	// (0x0003b4da) bg_sctrl_sk_pane_g7

0x20bd,	// (0x0003b4ea) bg_sctrl_sk_pane_g8

0x20b5,	// (0x0003b4e2) bg_sctrl_sk_pane_g9

0xf4db,	// (0x00048908) popup_fep_china_hwr2_fs_candidate_window

0x9c23,	// (0x00043050) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9c23,	// (0x00043050) popup_fep_china_hwr2_fs_control_window

0x0ede,	// (0x0003a30b) sctrl_sk_top_pane_g2

0x0001,

0xfce0,	// (0x0004910d) sctrl_sk_top_pane_g

0xd675,	// (0x00046aa2) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd675,	// (0x00046aa2) aid_fep_china_hwr2_fs_cell

0xd689,	// (0x00046ab6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd689,	// (0x00046ab6) bg_popup_fep_shadow_pane_cp4

0xd6a0,	// (0x00046acd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd6a0,	// (0x00046acd) bg_popup_fep_shadow_pane_cp5

0xd6b2,	// (0x00046adf) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd6b2,	// (0x00046adf) popup_fep_china_hwr2_fs_control_bar_grid

0xd6c6,	// (0x00046af3) popup_fep_china_hwr2_fs_control_funtion_grid

0x5e5b,	// (0x0003f288) aid_fep_china_hwr2_fs_candi_cell

0xb4c0,	// (0x000448ed) bg_popup_fep_shadow_pane_cp6

0x5e65,	// (0x0003f292) popup_fep_china_hwr2_fs_candidate_grid

0xd6ce,	// (0x00046afb) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd6ce,	// (0x00046afb) cell_fep_china_hwr2_fs_funtion_grid

0x46b1,	// (0x0003dade) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5e87,	// (0x0003f2b4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5e87,	// (0x0003f2b4) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5e95,	// (0x0003f2c2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5e95,	// (0x0003f2c2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfb,	// (0x00049128) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfb,	// (0x00049128) cell_fep_china_hwr2_fs_funtion_grid_g

0xd6e6,	// (0x00046b13) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd6e6,	// (0x00046b13) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd6fb,	// (0x00046b28) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd6fb,	// (0x00046b28) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd00,	// (0x0004912d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd00,	// (0x0004912d) cell_fep_china_hwr2_fs_funtion_grid_t

0x5edc,	// (0x0003f309) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5ee4,	// (0x0003f311) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5eec,	// (0x0003f319) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd05,	// (0x00049132) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5ef4,	// (0x0003f321) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5ef4,	// (0x0003f321) cell_fep_china_hwr2_fs_candidate_grid

0x5f0d,	// (0x0003f33a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5f15,	// (0x0003f342) popup_fep_china_hwr2_fs_candidate_grid_g21

0x46b1,	// (0x0003dade) cell_fep_china_hwr2_fs_candidate_grid_g1

0x46b1,	// (0x0003dade) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb20,	// (0x00048f4d) cell_fep_china_hwr2_fs_candidate_grid_g

0x5f1d,	// (0x0003f34a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x045e,	// (0x0003988b) clock_nsta_pane_cp_24_ParamLimits

0x045e,	// (0x0003988b) clock_nsta_pane_cp_24

0x04dc,	// (0x00039909) indicator_nsta_pane_cp_24_ParamLimits

0x04dc,	// (0x00039909) indicator_nsta_pane_cp_24

0x2d8b,	// (0x0003c1b8) heading_pane_g1

0x0001,

0xf892,	// (0x00048cbf) heading_pane_g

0x37d0,	// (0x0003cbfd) grid_sct_catagory_button_pane

0x3800,	// (0x0003cc2d) scroll_pane_cp5_ParamLimits

0x42a4,	// (0x0003d6d1) button_value_adjust_pane_cp5_ParamLimits

0x42a4,	// (0x0003d6d1) button_value_adjust_pane_cp5

0x4383,	// (0x0003d7b0) form2_midp_time_pane_ParamLimits

0x5f2b,	// (0x0003f358) cell_sct_catagory_button_pane_ParamLimits

0x5f2b,	// (0x0003f358) cell_sct_catagory_button_pane

0x4676,	// (0x0003daa3) bg_button_pane_cp01_ParamLimits

0x4676,	// (0x0003daa3) bg_button_pane_cp01

0x46b1,	// (0x0003dade) cell_sct_catagory_button_pane_g1

0xa1d6,	// (0x00043603) popup_tb_extension_window

0xd717,	// (0x00046b44) aid_size_cell_ext_ParamLimits

0xd717,	// (0x00046b44) aid_size_cell_ext

0xb7da,	// (0x00044c07) bg_tb_trans_pane_cp1_ParamLimits

0xb7da,	// (0x00044c07) bg_tb_trans_pane_cp1

0xd73d,	// (0x00046b6a) grid_tb_ext_pane_ParamLimits

0xd73d,	// (0x00046b6a) grid_tb_ext_pane

0xd77c,	// (0x00046ba9) cell_tb_ext_pane_ParamLimits

0xd77c,	// (0x00046ba9) cell_tb_ext_pane

0xd7a4,	// (0x00046bd1) cell_tb_ext_pane_g1_ParamLimits

0xd7a4,	// (0x00046bd1) cell_tb_ext_pane_g1

0x5fc1,	// (0x0003f3ee) cell_tb_ext_pane_t1

0xb65a,	// (0x00044a87) list_highlight_pane_cp11_ParamLimits

0xb65a,	// (0x00044a87) list_highlight_pane_cp11

0x887c,	// (0x00041ca9) popup_uni_indicator_window_ParamLimits

0x887c,	// (0x00041ca9) popup_uni_indicator_window

0xb8e6,	// (0x00044d13) bg_popup_sub_pane_cp14

0xd7c1,	// (0x00046bee) list_uniindi_pane

0xd7cd,	// (0x00046bfa) uniindi_top_pane

0xb65a,	// (0x00044a87) bg_uniindi_top_pane

0xd7ec,	// (0x00046c19) uniindi_top_pane_g1

0xd802,	// (0x00046c2f) uniindi_top_pane_g2

0x0003,

0xfd0c,	// (0x00049139) uniindi_top_pane_g

0xd81f,	// (0x00046c4c) uniindi_top_pane_t1

0x6072,	// (0x0003f49f) list_single_uniindi_pane_ParamLimits

0x6072,	// (0x0003f49f) list_single_uniindi_pane

0x46b1,	// (0x0003dade) bg_uniindi_top_pane_g1

0x6085,	// (0x0003f4b2) list_single_uniindi_pane_g1

0x6098,	// (0x0003f4c5) list_single_uniindi_pane_t1

0xdb1f,	// (0x00046f4c) control_bg_pane

0x60bd,	// (0x0003f4ea) bg_sctrl_sk_pane_cp1

0x60c6,	// (0x0003f4f3) bg_sctrl_sk_pane_cp2

0x60cf,	// (0x0003f4fc) control_bg_pane_g1

0x60d8,	// (0x0003f505) control_bg_pane_g2

0x0001,

0xfd15,	// (0x00049142) control_bg_pane_g

0x40ea,	// (0x0003d517) cell_indicator_nsta_pane_g1_ParamLimits

0xcbb6,	// (0x00045fe3) cell_indicator_nsta_pane_g2_ParamLimits

0xfa84,	// (0x00048eb1) cell_indicator_nsta_pane_g_ParamLimits

0xe1e1,	// (0x0004760e) form2_midp_time_pane_t1_ParamLimits

0x0c79,	// (0x0003a0a6) main_idle_act4_pane_ParamLimits

0x0c79,	// (0x0003a0a6) main_idle_act4_pane

0xa1d6,	// (0x00043603) popup_tb_extension_window_ParamLimits

0xd762,	// (0x00046b8f) tb_ext_find_pane_ParamLimits

0xd762,	// (0x00046b8f) tb_ext_find_pane

0x60e1,	// (0x0003f50e) ai_gene_pane_1_cp1

0xc223,	// (0x00045650) ai_gene_pane_2_cp1

0xd849,	// (0x00046c76) list_single_idle_plugin_calendar_pane

0x60f2,	// (0x0003f51f) list_single_idle_plugin_notification_pane

0x60fb,	// (0x0003f528) list_single_idle_plugin_player_pane

0xd852,	// (0x00046c7f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd852,	// (0x00046c7f) list_single_idle_plugin_shortcut_pane

0xd87a,	// (0x00046ca7) main_idle_act4_pane_t1

0xd891,	// (0x00046cbe) main_idle_act4_pane_t2

0x0001,

0xfd1a,	// (0x00049147) main_idle_act4_pane_t

0xd8a8,	// (0x00046cd5) middle_sk_idle_act4_pane_ParamLimits

0xd8a8,	// (0x00046cd5) middle_sk_idle_act4_pane

0xd8c4,	// (0x00046cf1) popup_clock_digital_analogue_window_cp2

0xd8f0,	// (0x00046d1d) shortcut_wheel_idle_act4_pane_ParamLimits

0xd8f0,	// (0x00046d1d) shortcut_wheel_idle_act4_pane

0x46b1,	// (0x0003dade) shortcut_wheel_idle_act4_pane_g1

0x46b1,	// (0x0003dade) shortcut_wheel_idle_act4_pane_g2

0x46b1,	// (0x0003dade) shortcut_wheel_idle_act4_pane_g3

0x46b1,	// (0x0003dade) shortcut_wheel_idle_act4_pane_g4

0x46b1,	// (0x0003dade) shortcut_wheel_idle_act4_pane_g5

0x618e,	// (0x0003f5bb) shortcut_wheel_idle_act4_pane_g6

0x6196,	// (0x0003f5c3) shortcut_wheel_idle_act4_pane_g7

0x619e,	// (0x0003f5cb) shortcut_wheel_idle_act4_pane_g8

0x61a6,	// (0x0003f5d3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1f,	// (0x0004914c) shortcut_wheel_idle_act4_pane_g

0xd96d,	// (0x00046d9a) middle_sk_idle_act4_pane_g1_ParamLimits

0xd96d,	// (0x00046d9a) middle_sk_idle_act4_pane_g1

0xd97b,	// (0x00046da8) middle_sk_idle_act4_pane_g2_ParamLimits

0xd97b,	// (0x00046da8) middle_sk_idle_act4_pane_g2

0x0001,

0xfd42,	// (0x0004916f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd42,	// (0x0004916f) middle_sk_idle_act4_pane_g

0xd993,	// (0x00046dc0) middle_sk_idle_act4_pane_t1_ParamLimits

0xd993,	// (0x00046dc0) middle_sk_idle_act4_pane_t1

0xd9c2,	// (0x00046def) grid_ai_shortcut_pane_ParamLimits

0xd9c2,	// (0x00046def) grid_ai_shortcut_pane

0xd9df,	// (0x00046e0c) list_highlight_pane_cp16_ParamLimits

0xd9df,	// (0x00046e0c) list_highlight_pane_cp16

0xd9ec,	// (0x00046e19) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd9ec,	// (0x00046e19) list_single_idle_plugin_shortcut_pane_g1

0xd9f8,	// (0x00046e25) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd9f8,	// (0x00046e25) list_single_idle_plugin_shortcut_pane_g2

0xda14,	// (0x00046e41) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xda14,	// (0x00046e41) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd47,	// (0x00049174) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd47,	// (0x00049174) list_single_idle_plugin_shortcut_pane_g

0xda29,	// (0x00046e56) cell_ai_shortcut_pane_ParamLimits

0xda29,	// (0x00046e56) cell_ai_shortcut_pane

0xda3f,	// (0x00046e6c) cell_ai_shortcut_pane_g1_ParamLimits

0xda3f,	// (0x00046e6c) cell_ai_shortcut_pane_g1

0x60e1,	// (0x0003f50e) ai_gene_pane_1_cp2

0x62d6,	// (0x0003f703) ai_gene_pane_2_cp2

0x62de,	// (0x0003f70b) list_highlight_pane_cp15

0xda61,	// (0x00046e8e) list_single_idle_plugin_calendar_pane_g1

0x62de,	// (0x0003f70b) list_highlight_pane_cp17

0x62ef,	// (0x0003f71c) list_single_idle_plugin_calendar_pane_g1_copy1

0x62f7,	// (0x0003f724) list_single_idle_plugin_player_pane_g1

0x3a29,	// (0x0003ce56) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4e,	// (0x0004917b) list_single_idle_plugin_player_pane_g

0x62ff,	// (0x0003f72c) list_single_idle_plugin_player_pane_t1

0x630d,	// (0x0003f73a) list_single_idle_plugin_player_pane_t2

0x631b,	// (0x0003f748) list_single_idle_plugin_player_pane_t3

0x6329,	// (0x0003f756) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd53,	// (0x00049180) list_single_idle_plugin_player_pane_t

0x6337,	// (0x0003f764) wait_bar_pane_cp15

0x633f,	// (0x0003f76c) grid_ai_notification_pane

0x3a29,	// (0x0003ce56) list_single_idle_plugin_notification_pane_g1

0xda69,	// (0x00046e96) cell_ai_notification_pane_ParamLimits

0xda69,	// (0x00046e96) cell_ai_notification_pane

0x6355,	// (0x0003f782) cell_ai_notification_pane_g1

0x635d,	// (0x0003f78a) cell_ai_notification_pane_t1

0xda76,	// (0x00046ea3) tb_ext_find_button_pane

0xda7e,	// (0x00046eab) tb_ext_find_pane_g1

0xda86,	// (0x00046eb3) tb_ext_find_pane_t1

0xbd38,	// (0x00045165) tb_ext_find_button_pane_g1

0xda94,	// (0x00046ec1) tb_ext_find_button_pane_g2

0x0001,

0xfd5c,	// (0x00049189) tb_ext_find_button_pane_g

0xd87a,	// (0x00046ca7) main_idle_act4_pane_t1_ParamLimits

0xd891,	// (0x00046cbe) main_idle_act4_pane_t2_ParamLimits

0xfd1a,	// (0x00049147) main_idle_act4_pane_t_ParamLimits

0xd8c4,	// (0x00046cf1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd8dc,	// (0x00046d09) sat_plugin_idle_act4_pane_ParamLimits

0xd8dc,	// (0x00046d09) sat_plugin_idle_act4_pane

0xda9d,	// (0x00046eca) sat_plugin_idle_act4_pane_t1_ParamLimits

0xda9d,	// (0x00046eca) sat_plugin_idle_act4_pane_t1

0xdab5,	// (0x00046ee2) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdab5,	// (0x00046ee2) sat_plugin_idle_act4_pane_t2

0xdacd,	// (0x00046efa) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdacd,	// (0x00046efa) sat_plugin_idle_act4_pane_t3

0xe42d,	// (0x0004785a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe42d,	// (0x0004785a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd61,	// (0x0004918e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd61,	// (0x0004918e) sat_plugin_idle_act4_pane_t

0x87f7,	// (0x00041c24) popup_battery_window_ParamLimits

0x87f7,	// (0x00041c24) popup_battery_window

0xb65a,	// (0x00044a87) bg_popup_sub_pane_cp25_ParamLimits

0xb65a,	// (0x00044a87) bg_popup_sub_pane_cp25

0x63de,	// (0x0003f80b) popup_battery_window_g1_ParamLimits

0x63de,	// (0x0003f80b) popup_battery_window_g1

0x63ea,	// (0x0003f817) popup_battery_window_t1_ParamLimits

0x63ea,	// (0x0003f817) popup_battery_window_t1

0x63fc,	// (0x0003f829) popup_battery_window_t2_ParamLimits

0x63fc,	// (0x0003f829) popup_battery_window_t2

0x0001,

0xfd6a,	// (0x00049197) popup_battery_window_t_ParamLimits

0xfd6a,	// (0x00049197) popup_battery_window_t

0x9877,	// (0x00042ca4) midp_canvas_pane_ParamLimits

0x98e9,	// (0x00042d16) midp_keypad_pane_ParamLimits

0x98e9,	// (0x00042d16) midp_keypad_pane

0xba28,	// (0x00044e55) main_midp_pane_ParamLimits

0xcbc3,	// (0x00045ff0) signal_pane_g2_cp_ParamLimits

0xe445,	// (0x00047872) aid_size_cell_midp_keypad_ParamLimits

0xe445,	// (0x00047872) aid_size_cell_midp_keypad

0xe463,	// (0x00047890) midp_keyp_game_grid_pane_ParamLimits

0xe463,	// (0x00047890) midp_keyp_game_grid_pane

0xe48a,	// (0x000478b7) midp_keyp_rocker_pane_ParamLimits

0xe48a,	// (0x000478b7) midp_keyp_rocker_pane

0xe4db,	// (0x00047908) midp_keyp_sk_left_pane_ParamLimits

0xe4db,	// (0x00047908) midp_keyp_sk_left_pane

0xe52f,	// (0x0004795c) midp_keyp_sk_right_pane_ParamLimits

0xe52f,	// (0x0004795c) midp_keyp_sk_right_pane

0xb4c0,	// (0x000448ed) bg_button_pane_cp03

0xe583,	// (0x000479b0) midp_keyp_sk_left_pane_g1

0xb4c0,	// (0x000448ed) bg_button_pane_cp04

0xe583,	// (0x000479b0) midp_keyp_sk_right_pane_g1

0x46b1,	// (0x0003dade) midp_keyp_rocker_pane_g1

0xe58c,	// (0x000479b9) keyp_game_cell_pane_ParamLimits

0xe58c,	// (0x000479b9) keyp_game_cell_pane

0xb4c0,	// (0x000448ed) bg_button_pane_cp02

0xe5b0,	// (0x000479dd) keyp_game_cell_pane_g1

0x8817,	// (0x00041c44) popup_fep_vkb2_window_ParamLimits

0x8817,	// (0x00041c44) popup_fep_vkb2_window

0xae2c,	// (0x00044259) aid_size_cell_vkb2_ParamLimits

0xae2c,	// (0x00044259) aid_size_cell_vkb2

0xae60,	// (0x0004428d) popup_fep_vkb2_window_g1_ParamLimits

0xae60,	// (0x0004428d) popup_fep_vkb2_window_g1

0xaeb0,	// (0x000442dd) vkb2_area_bottom_pane_ParamLimits

0xaeb0,	// (0x000442dd) vkb2_area_bottom_pane

0xaf04,	// (0x00044331) vkb2_area_keypad_pane_ParamLimits

0xaf04,	// (0x00044331) vkb2_area_keypad_pane

0xaf4c,	// (0x00044379) vkb2_area_top_pane_ParamLimits

0xaf4c,	// (0x00044379) vkb2_area_top_pane

0xafd8,	// (0x00044405) vkb2_top_entry_pane_ParamLimits

0xafd8,	// (0x00044405) vkb2_top_entry_pane

0xb005,	// (0x00044432) vkb2_top_grid_left_pane_ParamLimits

0xb005,	// (0x00044432) vkb2_top_grid_left_pane

0xb026,	// (0x00044453) vkb2_top_grid_right_pane_ParamLimits

0xb026,	// (0x00044453) vkb2_top_grid_right_pane

0x14e6,	// (0x0003a913) vkb2_cell_keypad_pane_ParamLimits

0x14e6,	// (0x0003a913) vkb2_cell_keypad_pane

0xb06e,	// (0x0004449b) vkb2_area_bottom_grid_pane_ParamLimits

0xb06e,	// (0x0004449b) vkb2_area_bottom_grid_pane

0xb098,	// (0x000444c5) vkb2_area_bottom_pane_g1_ParamLimits

0xb098,	// (0x000444c5) vkb2_area_bottom_pane_g1

0xb0be,	// (0x000444eb) vkb2_area_bottom_pane_g2_ParamLimits

0xb0be,	// (0x000444eb) vkb2_area_bottom_pane_g2

0xb0ef,	// (0x0004451c) vkb2_area_bottom_pane_g3_ParamLimits

0xb0ef,	// (0x0004451c) vkb2_area_bottom_pane_g3

0x0002,

0xfd6f,	// (0x0004919c) vkb2_area_bottom_pane_g_ParamLimits

0xfd6f,	// (0x0004919c) vkb2_area_bottom_pane_g

0x1690,	// (0x0003aabd) vkb2_top_cell_left_pane_ParamLimits

0x1690,	// (0x0003aabd) vkb2_top_cell_left_pane

0xe5b9,	// (0x000479e6) vkb2_top_entry_pane_g1_ParamLimits

0xe5b9,	// (0x000479e6) vkb2_top_entry_pane_g1

0xe5c7,	// (0x000479f4) vkb2_top_entry_pane_t1_ParamLimits

0xe5c7,	// (0x000479f4) vkb2_top_entry_pane_t1

0x65ad,	// (0x0003f9da) vkb2_top_entry_pane_t2_ParamLimits

0x65ad,	// (0x0003f9da) vkb2_top_entry_pane_t2

0x65df,	// (0x0003fa0c) vkb2_top_entry_pane_t3_ParamLimits

0x65df,	// (0x0003fa0c) vkb2_top_entry_pane_t3

0x0002,

0xfd76,	// (0x000491a3) vkb2_top_entry_pane_t_ParamLimits

0xfd76,	// (0x000491a3) vkb2_top_entry_pane_t

0xb159,	// (0x00044586) vkb2_top_grid_right_pane_g1_ParamLimits

0xb159,	// (0x00044586) vkb2_top_grid_right_pane_g1

0x16f3,	// (0x0003ab20) vkb2_top_grid_right_pane_g2_ParamLimits

0x16f3,	// (0x0003ab20) vkb2_top_grid_right_pane_g2

0x170b,	// (0x0003ab38) vkb2_top_grid_right_pane_g3_ParamLimits

0x170b,	// (0x0003ab38) vkb2_top_grid_right_pane_g3

0xb16f,	// (0x0004459c) vkb2_top_grid_right_pane_g4_ParamLimits

0xb16f,	// (0x0004459c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7d,	// (0x000491aa) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7d,	// (0x000491aa) vkb2_top_grid_right_pane_g

0x1739,	// (0x0003ab66) vkb2_top_cell_left_pane_g1

0x1750,	// (0x0003ab7d) vkb2_cell_keypad_pane_g1_ParamLimits

0x1750,	// (0x0003ab7d) vkb2_cell_keypad_pane_g1

0x6603,	// (0x0003fa30) vkb2_cell_keypad_pane_t1_ParamLimits

0x6603,	// (0x0003fa30) vkb2_cell_keypad_pane_t1

0x175e,	// (0x0003ab8b) vkb2_cell_bottom_grid_pane_ParamLimits

0x175e,	// (0x0003ab8b) vkb2_cell_bottom_grid_pane

0x1797,	// (0x0003abc4) vkb2_cell_bottom_grid_pane_g1

0xd911,	// (0x00046d3e) aid_call2_pane_cp02

0xd919,	// (0x00046d46) aid_call_pane_cp02

0xd921,	// (0x00046d4e) clock_digital_number_pane_cp10

0xd929,	// (0x00046d56) clock_digital_number_pane_cp11

0xd931,	// (0x00046d5e) clock_digital_number_pane_cp12

0xd939,	// (0x00046d66) clock_digital_number_pane_cp13

0xd941,	// (0x00046d6e) clock_digital_separator_pane_cp10

0xbd38,	// (0x00045165) popup_clock_digital_analogue_window_cp2_g1

0xbd38,	// (0x00045165) popup_clock_digital_analogue_window_cp2_g2

0xd949,	// (0x00046d76) popup_clock_digital_analogue_window_cp2_g3

0xbd38,	// (0x00045165) popup_clock_digital_analogue_window_cp2_g4

0xd949,	// (0x00046d76) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd32,	// (0x0004915f) popup_clock_digital_analogue_window_cp2_g

0xd951,	// (0x00046d7e) popup_clock_digital_analogue_window_cp2_t1

0xd95f,	// (0x00046d8c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3d,	// (0x0004916a) popup_clock_digital_analogue_window_cp2_t

0x46b1,	// (0x0003dade) clock_digital_number_pane_cp10_g1

0x46b1,	// (0x0003dade) clock_digital_number_pane_cp10_g2

0x0001,

0xfb20,	// (0x00048f4d) clock_digital_number_pane_cp10_g

0x46b1,	// (0x0003dade) clock_digital_separator_pane_cp10_g1

0x46b1,	// (0x0003dade) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb20,	// (0x00048f4d) clock_digital_separator_pane_cp10_g

0xd80e,	// (0x00046c3b) uniindi_top_pane_g3

0x603b,	// (0x0003f468) uniindi_top_pane_g4

0x1571,	// (0x0003a99e) vkb2_row_keypad_pane_ParamLimits

0x1571,	// (0x0003a99e) vkb2_row_keypad_pane

0x17b7,	// (0x0003abe4) vkb2_cell_t_keypad_pane_ParamLimits

0x17b7,	// (0x0003abe4) vkb2_cell_t_keypad_pane

0x17c7,	// (0x0003abf4) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x17c7,	// (0x0003abf4) vkb2_cell_t_keypad_pane_cp08

0x17da,	// (0x0003ac07) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x17da,	// (0x0003ac07) vkb2_cell_t_keypad_pane_cp09

0x17ee,	// (0x0003ac1b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x17ee,	// (0x0003ac1b) vkb2_cell_t_keypad_pane_cp01

0x17ff,	// (0x0003ac2c) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x17ff,	// (0x0003ac2c) vkb2_cell_t_keypad_pane_cp02

0x1810,	// (0x0003ac3d) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1810,	// (0x0003ac3d) vkb2_cell_t_keypad_pane_cp03

0x1821,	// (0x0003ac4e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1821,	// (0x0003ac4e) vkb2_cell_t_keypad_pane_cp04

0x1832,	// (0x0003ac5f) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1832,	// (0x0003ac5f) vkb2_cell_t_keypad_pane_cp05

0x1843,	// (0x0003ac70) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1843,	// (0x0003ac70) vkb2_cell_t_keypad_pane_cp06

0x1854,	// (0x0003ac81) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1854,	// (0x0003ac81) vkb2_cell_t_keypad_pane_cp07

0x1865,	// (0x0003ac92) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1865,	// (0x0003ac92) vkb2_cell_t_keypad_pane_cp10

0x0ede,	// (0x0003a30b) vkb2_cell_t_keypad_pane_g1

0x661a,	// (0x0003fa47) vkb2_cell_t_keypad_pane_t1

0xdb1f,	// (0x00046f4c) popup_grid_graphic2_window

0xe600,	// (0x00047a2d) aid_size_cell_graphic2_ParamLimits

0xe600,	// (0x00047a2d) aid_size_cell_graphic2

0xe63e,	// (0x00047a6b) bg_popup_window_pane_cp21_ParamLimits

0xe63e,	// (0x00047a6b) bg_popup_window_pane_cp21

0xe64c,	// (0x00047a79) graphic2_pages_pane_ParamLimits

0xe64c,	// (0x00047a79) graphic2_pages_pane

0xe6a2,	// (0x00047acf) grid_graphic2_control_pane_ParamLimits

0xe6a2,	// (0x00047acf) grid_graphic2_control_pane

0xe6ea,	// (0x00047b17) grid_graphic2_pane_ParamLimits

0xe6ea,	// (0x00047b17) grid_graphic2_pane

0xe771,	// (0x00047b9e) cell_graphic2_pane

0xdb1f,	// (0x00046f4c) main_comp_mode_pane

0x589b,	// (0x0003ecc8) list_ai3_gene_pane_ParamLimits

0xd5df,	// (0x00046a0c) bg_popup_window_pane_cp19_ParamLimits

0x5c75,	// (0x0003f0a2) bg_touch_area_indi_pane_ParamLimits

0x5c75,	// (0x0003f0a2) bg_touch_area_indi_pane

0x5c8b,	// (0x0003f0b8) bg_touch_area_indi_pane_cp01_ParamLimits

0x5c8b,	// (0x0003f0b8) bg_touch_area_indi_pane_cp01

0x5ca1,	// (0x0003f0ce) bg_touch_area_indi_pane_cp02_ParamLimits

0x5ca1,	// (0x0003f0ce) bg_touch_area_indi_pane_cp02

0x5cb7,	// (0x0003f0e4) bg_touch_area_indi_pane_cp03_ParamLimits

0x5cb7,	// (0x0003f0e4) bg_touch_area_indi_pane_cp03

0x5cd1,	// (0x0003f0fe) popup_slider_window_g1_ParamLimits

0x5ced,	// (0x0003f11a) popup_slider_window_g2_ParamLimits

0x5d09,	// (0x0003f136) popup_slider_window_g3_ParamLimits

0xfcc7,	// (0x000490f4) popup_slider_window_g_ParamLimits

0x5d6f,	// (0x0003f19c) popup_slider_window_t1_ParamLimits

0x5de3,	// (0x0003f210) small_volume_slider_vertical_pane_ParamLimits

0xe771,	// (0x00047b9e) cell_graphic2_pane_ParamLimits

0xe7cc,	// (0x00047bf9) bg_button_pane_cp10_ParamLimits

0xe7cc,	// (0x00047bf9) bg_button_pane_cp10

0xe7df,	// (0x00047c0c) bg_button_pane_cp11_ParamLimits

0xe7df,	// (0x00047c0c) bg_button_pane_cp11

0xe7f2,	// (0x00047c1f) graphic2_pages_pane_g1_ParamLimits

0xe7f2,	// (0x00047c1f) graphic2_pages_pane_g1

0xe80d,	// (0x00047c3a) graphic2_pages_pane_g2_ParamLimits

0xe80d,	// (0x00047c3a) graphic2_pages_pane_g2

0x0001,

0xfd8b,	// (0x000491b8) graphic2_pages_pane_g_ParamLimits

0xfd8b,	// (0x000491b8) graphic2_pages_pane_g

0xe825,	// (0x00047c52) graphic2_pages_pane_t1_ParamLimits

0xe825,	// (0x00047c52) graphic2_pages_pane_t1

0xe83d,	// (0x00047c6a) cell_graphic2_control_pane_ParamLimits

0xe83d,	// (0x00047c6a) cell_graphic2_control_pane

0xe86f,	// (0x00047c9c) cell_graphic2_pane_g1_ParamLimits

0xe86f,	// (0x00047c9c) cell_graphic2_pane_g1

0xdae5,	// (0x00046f12) cell_graphic2_pane_g2_ParamLimits

0xdae5,	// (0x00046f12) cell_graphic2_pane_g2

0xe1f4,	// (0x00047621) cell_graphic2_pane_g3_ParamLimits

0xe1f4,	// (0x00047621) cell_graphic2_pane_g3

0xdaf2,	// (0x00046f1f) cell_graphic2_pane_g4_ParamLimits

0xdaf2,	// (0x00046f1f) cell_graphic2_pane_g4

0xe87c,	// (0x00047ca9) cell_graphic2_pane_g5_ParamLimits

0xe87c,	// (0x00047ca9) cell_graphic2_pane_g5

0x0004,

0xfd90,	// (0x000491bd) cell_graphic2_pane_g_ParamLimits

0xfd90,	// (0x000491bd) cell_graphic2_pane_g

0xe899,	// (0x00047cc6) cell_graphic2_pane_t1_ParamLimits

0xe899,	// (0x00047cc6) cell_graphic2_pane_t1

0x2d7f,	// (0x0003c1ac) grid_highlight_pane_cp11_ParamLimits

0x2d7f,	// (0x0003c1ac) grid_highlight_pane_cp11

0xb65a,	// (0x00044a87) bg_button_pane_cp05

0xe8e3,	// (0x00047d10) cell_graphic2_control_pane_g1

0x46b1,	// (0x0003dade) bg_touch_area_indi_pane_g1

0x68f3,	// (0x0003fd20) aid_cmod_rocker_key_size

0x68fd,	// (0x0003fd2a) aid_cmode_itu_key_size

0x6907,	// (0x0003fd34) main_cmode_video_pane

0x6911,	// (0x0003fd3e) main_comp_mode_itu_pane

0x691d,	// (0x0003fd4a) main_comp_mode_rocker_pane

0x6929,	// (0x0003fd56) cell_cmode_rocker_pane_ParamLimits

0x6929,	// (0x0003fd56) cell_cmode_rocker_pane

0x693b,	// (0x0003fd68) cell_cmode_itu_pane_ParamLimits

0x693b,	// (0x0003fd68) cell_cmode_itu_pane

0xb8e6,	// (0x00044d13) bg_button_pane_cp06_ParamLimits

0xb8e6,	// (0x00044d13) bg_button_pane_cp06

0x4921,	// (0x0003dd4e) cell_cmode_rocker_pane_g1_ParamLimits

0x4921,	// (0x0003dd4e) cell_cmode_rocker_pane_g1

0x5e87,	// (0x0003f2b4) cell_cmode_rocker_pane_g2_ParamLimits

0x5e87,	// (0x0003f2b4) cell_cmode_rocker_pane_g2

0x0001,

0xfda0,	// (0x000491cd) cell_cmode_rocker_pane_g_ParamLimits

0xfda0,	// (0x000491cd) cell_cmode_rocker_pane_g

0xb4c0,	// (0x000448ed) bg_button_pane_cp07

0x6950,	// (0x0003fd7d) cell_cmode_itu_pane_g1

0x6959,	// (0x0003fd86) cell_cmode_itu_pane_t1

0x6967,	// (0x0003fd94) cell_cmode_itu_pane_t2

0x0001,

0xfda5,	// (0x000491d2) cell_cmode_itu_pane_t

0x60ad,	// (0x0003f4da) aid_touch_ctrl_left

0x60b5,	// (0x0003f4e2) aid_touch_ctrl_right

0xb4c0,	// (0x000448ed) compa_mode_pane

0xe909,	// (0x00047d36) aid_cmod_rocker_key_size_cp

0xe913,	// (0x00047d40) aid_cmode_itu_key_size_cp

0x6989,	// (0x0003fdb6) compa_mode_pane_g1

0x6991,	// (0x0003fdbe) compa_mode_pane_g2

0x6999,	// (0x0003fdc6) compa_mode_pane_g3

0x0002,

0xfdaa,	// (0x000491d7) compa_mode_pane_g

0xe91d,	// (0x00047d4a) main_comp_mode_itu_pane_cp

0xe925,	// (0x00047d52) main_comp_mode_rocker_pane_cp

0xe92d,	// (0x00047d5a) cell_cmode_itu_pane_cp_ParamLimits

0xe92d,	// (0x00047d5a) cell_cmode_itu_pane_cp

0xe942,	// (0x00047d6f) cell_cmode_rocker_pane_cp_ParamLimits

0xe942,	// (0x00047d6f) cell_cmode_rocker_pane_cp

0xb8e6,	// (0x00044d13) bg_button_pane_cp06_cp_ParamLimits

0xb8e6,	// (0x00044d13) bg_button_pane_cp06_cp

0x4921,	// (0x0003dd4e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4921,	// (0x0003dd4e) cell_cmode_rocker_pane_g1_cp

0x46b1,	// (0x0003dade) cell_cmode_rocker_pane_g2_cp

0xb4c0,	// (0x000448ed) bg_button_pane_cp07_cp

0xe954,	// (0x00047d81) cell_cmode_itu_pane_g1_cp

0xe95d,	// (0x00047d8a) cell_cmode_itu_pane_t1_cp

0xe95d,	// (0x00047d8a) cell_cmode_itu_pane_t2_cp

0xc96d,	// (0x00045d9a) settings_code_pane_cp2

0xb530,	// (0x0004495d) bg_popup_window_pane_cp3_ParamLimits

0xb773,	// (0x00044ba0) heading_pane_cp3_ParamLimits

0xb782,	// (0x00044baf) listscroll_popup_graphic_pane_ParamLimits

0x0c87,	// (0x0003a0b4) fep_hwr_aid_pane_ParamLimits

0x1238,	// (0x0003a665) aid_touch_sctrl_top_ParamLimits

0x1253,	// (0x0003a680) sctrl_sk_top_pane_g1_ParamLimits

0x0ede,	// (0x0003a30b) sctrl_sk_top_pane_g2_ParamLimits

0xfce0,	// (0x0004910d) sctrl_sk_top_pane_g_ParamLimits

0x1260,	// (0x0003a68d) sctrl_sk_top_pane_t1_ParamLimits

0x1238,	// (0x0003a665) aid_touch_sctrl_bottom_ParamLimits

0x1260,	// (0x0003a68d) sctrl_sk_bottom_pane_t1_ParamLimits

0xd7da,	// (0x00046c07) aid_area_touch_clock

0xaf98,	// (0x000443c5) aid_vkb2_area_top_pane_cell_ParamLimits

0xaf98,	// (0x000443c5) aid_vkb2_area_top_pane_cell

0xb047,	// (0x00044474) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb047,	// (0x00044474) aid_vkb2_area_bottom_pane_cell

0x6565,	// (0x0003f992) popup_char_count_window

0x69ef,	// (0x0003fe1c) popup_char_count_window_g1

0x69f8,	// (0x0003fe25) popup_char_count_window_g2

0x6a01,	// (0x0003fe2e) popup_char_count_window_g3

0x0002,

0xfdb1,	// (0x000491de) popup_char_count_window_g

0x6a0a,	// (0x0003fe37) popup_char_count_window_t1

0x1307,	// (0x0003a734) popup_fep_char_preview_window_ParamLimits

0x1307,	// (0x0003a734) popup_fep_char_preview_window

0xafb8,	// (0x000443e5) vkb2_top_candi_pane_ParamLimits

0xafb8,	// (0x000443e5) vkb2_top_candi_pane

0xe96b,	// (0x00047d98) cell_vkb2_top_candi_pane_ParamLimits

0xe96b,	// (0x00047d98) cell_vkb2_top_candi_pane

0x187a,	// (0x0003aca7) bg_popup_fep_char_preview_window_ParamLimits

0x187a,	// (0x0003aca7) bg_popup_fep_char_preview_window

0x1888,	// (0x0003acb5) popup_fep_char_preview_window_t1_ParamLimits

0x1888,	// (0x0003acb5) popup_fep_char_preview_window_t1

0x6a62,	// (0x0003fe8f) bg_popup_fep_char_preview_window_g1

0x6a6a,	// (0x0003fe97) bg_popup_fep_char_preview_window_g2

0x6a72,	// (0x0003fe9f) bg_popup_fep_char_preview_window_g3

0x6a7a,	// (0x0003fea7) bg_popup_fep_char_preview_window_g4

0x6a82,	// (0x0003feaf) bg_popup_fep_char_preview_window_g5

0x6a8a,	// (0x0003feb7) bg_popup_fep_char_preview_window_g6

0x6a92,	// (0x0003febf) bg_popup_fep_char_preview_window_g7

0x6a9a,	// (0x0003fec7) bg_popup_fep_char_preview_window_g8

0x6aa2,	// (0x0003fecf) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb8,	// (0x000491e5) bg_popup_fep_char_preview_window_g

0x0ede,	// (0x0003a30b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0ede,	// (0x0003a30b) cell_vkb2_top_candi_pane_g1

0x0eec,	// (0x0003a319) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0eec,	// (0x0003a319) cell_vkb2_top_candi_pane_g2

0x4c38,	// (0x0003e065) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4c38,	// (0x0003e065) cell_vkb2_top_candi_pane_g3

0x18ca,	// (0x0003acf7) cell_vkb2_top_candi_pane_g4_ParamLimits

0x18ca,	// (0x0003acf7) cell_vkb2_top_candi_pane_g4

0x4e22,	// (0x0003e24f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4e22,	// (0x0003e24f) cell_vkb2_top_candi_pane_g5

0x18eb,	// (0x0003ad18) cell_vkb2_top_candi_pane_g6_ParamLimits

0x18eb,	// (0x0003ad18) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcd,	// (0x000491fa) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcd,	// (0x000491fa) cell_vkb2_top_candi_pane_g

0x18f9,	// (0x0003ad26) cell_vkb2_top_candi_pane_t1

0xaa12,	// (0x00043e3f) aid_size_touch_slider_mark_ParamLimits

0xaa12,	// (0x00043e3f) aid_size_touch_slider_mark

0xe688,	// (0x00047ab5) grid_graphic2_catg_pane_ParamLimits

0xe688,	// (0x00047ab5) grid_graphic2_catg_pane

0xe744,	// (0x00047b71) popup_grid_graphic2_window_t1_ParamLimits

0xe744,	// (0x00047b71) popup_grid_graphic2_window_t1

0xe75a,	// (0x00047b87) popup_grid_graphic2_window_t2_ParamLimits

0xe75a,	// (0x00047b87) popup_grid_graphic2_window_t2

0x0001,

0xfd86,	// (0x000491b3) popup_grid_graphic2_window_t_ParamLimits

0xfd86,	// (0x000491b3) popup_grid_graphic2_window_t

0xb65a,	// (0x00044a87) bg_button_pane_cp05_ParamLimits

0xe8e3,	// (0x00047d10) cell_graphic2_control_pane_g1_ParamLimits

0xe9cb,	// (0x00047df8) cell_graphic2_catg_pane_ParamLimits

0xe9cb,	// (0x00047df8) cell_graphic2_catg_pane

0xb4c0,	// (0x000448ed) bg_button_pane_cp12

0xe9dd,	// (0x00047e0a) cell_graphic2_catg_pane_g1

0x5fc1,	// (0x0003f3ee) cell_tb_ext_pane_t1_ParamLimits

0x16b0,	// (0x0003aadd) vkb2_top_cell_right_narrow_pane_ParamLimits

0x16b0,	// (0x0003aadd) vkb2_top_cell_right_narrow_pane

0x16c8,	// (0x0003aaf5) vkb2_top_cell_right_wide_pane_ParamLimits

0x16c8,	// (0x0003aaf5) vkb2_top_cell_right_wide_pane

0x0c79,	// (0x0003a0a6) bg_vkb2_func_pane_ParamLimits

0x0c79,	// (0x0003a0a6) bg_vkb2_func_pane

0x1739,	// (0x0003ab66) vkb2_top_cell_left_pane_g1_ParamLimits

0x0c79,	// (0x0003a0a6) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0c79,	// (0x0003a0a6) bg_vkb2_fuc_pane_cp03

0x1797,	// (0x0003abc4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2085,	// (0x0003b4b2) bg_vkb2_func_pane_g1

0x208d,	// (0x0003b4ba) bg_vkb2_func_pane_g2

0x209d,	// (0x0003b4ca) bg_vkb2_func_pane_g3

0x2095,	// (0x0003b4c2) bg_vkb2_func_pane_g4

0x20a5,	// (0x0003b4d2) bg_vkb2_func_pane_g5

0x20ad,	// (0x0003b4da) bg_vkb2_func_pane_g6

0x20b5,	// (0x0003b4e2) bg_vkb2_func_pane_g7

0x20bd,	// (0x0003b4ea) bg_vkb2_func_pane_g8

0x207d,	// (0x0003b4aa) bg_vkb2_func_pane_g9

0x0008,

0xfdda,	// (0x00049207) bg_vkb2_func_pane_g

0x0c79,	// (0x0003a0a6) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0c79,	// (0x0003a0a6) bg_vkb2_fuc_pane_cp01

0x1739,	// (0x0003ab66) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1739,	// (0x0003ab66) vkb2_top_cell_right_wide_pane_g1

0x0c79,	// (0x0003a0a6) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0c79,	// (0x0003a0a6) bg_vkb2_fuc_pane_cp02

0x1918,	// (0x0003ad45) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1918,	// (0x0003ad45) vkb2_top_cell_right_narrow_pane_g1

0xd521,	// (0x0004694e) aid_touch_area_decrease_ParamLimits

0xd521,	// (0x0004694e) aid_touch_area_decrease

0xd55b,	// (0x00046988) aid_touch_area_increase_ParamLimits

0xd55b,	// (0x00046988) aid_touch_area_increase

0xd583,	// (0x000469b0) aid_touch_area_mute_ParamLimits

0xd583,	// (0x000469b0) aid_touch_area_mute

0xd5ab,	// (0x000469d8) aid_touch_area_slider_ParamLimits

0xd5ab,	// (0x000469d8) aid_touch_area_slider

0xd5eb,	// (0x00046a18) popup_slider_window_g4_ParamLimits

0xd5eb,	// (0x00046a18) popup_slider_window_g4

0xd605,	// (0x00046a32) popup_slider_window_g5_ParamLimits

0xd605,	// (0x00046a32) popup_slider_window_g5

0xd62b,	// (0x00046a58) popup_slider_window_g6_ParamLimits

0xd62b,	// (0x00046a58) popup_slider_window_g6

0x5d9d,	// (0x0003f1ca) popup_slider_window_t2_ParamLimits

0x5d9d,	// (0x0003f1ca) popup_slider_window_t2

0x0001,

0xfcd4,	// (0x00049101) popup_slider_window_t_ParamLimits

0xfcd4,	// (0x00049101) popup_slider_window_t

0xd641,	// (0x00046a6e) slider_pane_ParamLimits

0xd641,	// (0x00046a6e) slider_pane

0x6ac5,	// (0x0003fef2) slider_pane_g1_ParamLimits

0x6ac5,	// (0x0003fef2) slider_pane_g1

0x6ad9,	// (0x0003ff06) slider_pane_g2_ParamLimits

0x6ad9,	// (0x0003ff06) slider_pane_g2

0x6aef,	// (0x0003ff1c) slider_pane_g3_ParamLimits

0x6aef,	// (0x0003ff1c) slider_pane_g3

0x0003,

0xfded,	// (0x0004921a) slider_pane_g_ParamLimits

0xfded,	// (0x0004921a) slider_pane_g

0xa21e,	// (0x0004364b) popup_tb_float_extension_window_ParamLimits

0xa21e,	// (0x0004364b) popup_tb_float_extension_window

0x6b1b,	// (0x0003ff48) aid_size_cell_tb_float_ext

0xb4c0,	// (0x000448ed) bg_popup_sub_window_cp28

0xe9e6,	// (0x00047e13) grid_tb_float_ext_pane

0xe9f0,	// (0x00047e1d) cell_tb_float_ext_pane_ParamLimits

0xe9f0,	// (0x00047e1d) cell_tb_float_ext_pane

0xea0a,	// (0x00047e37) cell_tb_float_ext_pane_g1

0xea13,	// (0x00047e40) grid_highlight_pane_cp12

0xab5a,	// (0x00043f87) cell_last_hwr_side_pane_ParamLimits

0xab5a,	// (0x00043f87) cell_last_hwr_side_pane

0x46b1,	// (0x0003dade) cell_last_hwr_side_pane_g1

0x6b5d,	// (0x0003ff8a) cell_last_hwr_side_pane_g2

0x0001,

0xfdf6,	// (0x00049223) cell_last_hwr_side_pane_g

0xb124,	// (0x00044551) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb124,	// (0x00044551) vkb2_area_bottom_space_btn_pane

0x0ede,	// (0x0003a30b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x661a,	// (0x0003fa47) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x18f9,	// (0x0003ad26) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1938,	// (0x0003ad65) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1938,	// (0x0003ad65) vkb2_area_bottom_space_btn_pane_g1

0x1972,	// (0x0003ad9f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1972,	// (0x0003ad9f) vkb2_area_bottom_space_btn_pane_g2

0x19a8,	// (0x0003add5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x19a8,	// (0x0003add5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfb,	// (0x00049228) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfb,	// (0x00049228) vkb2_area_bottom_space_btn_pane_g

0x0d3c,	// (0x0003a169) cel_fep_hwr_func_pane_ParamLimits

0x0d3c,	// (0x0003a169) cel_fep_hwr_func_pane

0xab2f,	// (0x00043f5c) cell_hwr_side_button_pane_ParamLimits

0xab2f,	// (0x00043f5c) cell_hwr_side_button_pane

0xd7da,	// (0x00046c07) aid_area_touch_clock_ParamLimits

0xb65a,	// (0x00044a87) bg_uniindi_top_pane_ParamLimits

0xd7ec,	// (0x00046c19) uniindi_top_pane_g1_ParamLimits

0xd802,	// (0x00046c2f) uniindi_top_pane_g2_ParamLimits

0xd80e,	// (0x00046c3b) uniindi_top_pane_g3_ParamLimits

0x603b,	// (0x0003f468) uniindi_top_pane_g4_ParamLimits

0xfd0c,	// (0x00049139) uniindi_top_pane_g_ParamLimits

0xd81f,	// (0x00046c4c) uniindi_top_pane_t1_ParamLimits

0xb65a,	// (0x00044a87) bg_vkb2_func_pane_cp01_ParamLimits

0xb65a,	// (0x00044a87) bg_vkb2_func_pane_cp01

0x6b66,	// (0x0003ff93) cel_fep_hwr_func_pane_g1_ParamLimits

0x6b66,	// (0x0003ff93) cel_fep_hwr_func_pane_g1

0xb65a,	// (0x00044a87) bg_vkb2_func_pane_cp02_ParamLimits

0xb65a,	// (0x00044a87) bg_vkb2_func_pane_cp02

0x6b66,	// (0x0003ff93) cell_hwr_side_button_pane_g1_ParamLimits

0x6b66,	// (0x0003ff93) cell_hwr_side_button_pane_g1

0x1f01,	// (0x0003b32e) status_pane_g4_ParamLimits

0x1f01,	// (0x0003b32e) status_pane_g4

0x1f1b,	// (0x0003b348) status_pane_t1

0x43ec,	// (0x0003d819) form2_midp_gauge_slider_cont_pane

0x43f4,	// (0x0003d821) form2_midp_gauge_slider_pane_t1_ParamLimits

0xccec,	// (0x00046119) form2_midp_gauge_slider_pane_t2_ParamLimits

0xccfe,	// (0x0004612b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad3,	// (0x00048f00) form2_midp_gauge_slider_pane_t_ParamLimits

0x442a,	// (0x0003d857) form2_midp_slider_pane_ParamLimits

0x12cf,	// (0x0003a6fc) aid_size_cell_func_vkb2_ParamLimits

0x12cf,	// (0x0003a6fc) aid_size_cell_func_vkb2

0x6b07,	// (0x0003ff34) slider_pane_g4_ParamLimits

0x6b07,	// (0x0003ff34) slider_pane_g4

0xb18d,	// (0x000445ba) form2_midp_gauge_slider_pane_t2_cp01

0xb19b,	// (0x000445c8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb19b,	// (0x000445c8) form2_midp_gauge_slider_pane_t3_cp01

0x1a1d,	// (0x0003ae4a) form2_midp_slider_pane_cp01

0xb4c0,	// (0x000448ed) navi_smil_pane

0x6b9f,	// (0x0003ffcc) navi_smil_pane_g1

0x6ba7,	// (0x0003ffd4) navi_smil_pane_t1

0x6b74,	// (0x0003ffa1) form2_midp_slider_pane_g1

0x6b7d,	// (0x0003ffaa) form2_midp_slider_pane_g2

0x6b85,	// (0x0003ffb2) form2_midp_slider_pane_g3

0x6b74,	// (0x0003ffa1) form2_midp_slider_pane_g4

0xea1c,	// (0x00047e49) form2_midp_slider_pane_g5

0x0004,

0xfe04,	// (0x00049231) form2_midp_slider_pane_g

0x19e2,	// (0x0003ae0f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x19e2,	// (0x0003ae0f) vkb2_area_bottom_space_btn_pane_g4

0xa456,	// (0x00043883) lc0_navi_pane_ParamLimits

0xa456,	// (0x00043883) lc0_navi_pane

0xa4c0,	// (0x000438ed) lc0_stat_indi_pane_ParamLimits

0xa4c0,	// (0x000438ed) lc0_stat_indi_pane

0xa4d5,	// (0x00043902) ls0_title_pane_ParamLimits

0xa4d5,	// (0x00043902) ls0_title_pane

0xb8e6,	// (0x00044d13) bg_popup_sub_pane_cp14_ParamLimits

0xd7c1,	// (0x00046bee) list_uniindi_pane_ParamLimits

0xd7cd,	// (0x00046bfa) uniindi_top_pane_ParamLimits

0x6085,	// (0x0003f4b2) list_single_uniindi_pane_g1_ParamLimits

0x6098,	// (0x0003f4c5) list_single_uniindi_pane_t1_ParamLimits

0xb1b8,	// (0x000445e5) lc0_stat_clock_pane_ParamLimits

0xb1b8,	// (0x000445e5) lc0_stat_clock_pane

0xea27,	// (0x00047e54) lc0_stat_indi_pane_g1_ParamLimits

0xea27,	// (0x00047e54) lc0_stat_indi_pane_g1

0xea34,	// (0x00047e61) lc0_stat_indi_pane_g2_ParamLimits

0xea34,	// (0x00047e61) lc0_stat_indi_pane_g2

0x0001,

0xfe0f,	// (0x0004923c) lc0_stat_indi_pane_g_ParamLimits

0xfe0f,	// (0x0004923c) lc0_stat_indi_pane_g

0xb1c8,	// (0x000445f5) lc0_uni_indicator_pane_ParamLimits

0xb1c8,	// (0x000445f5) lc0_uni_indicator_pane

0xea41,	// (0x00047e6e) ls0_title_pane_g1_ParamLimits

0xea41,	// (0x00047e6e) ls0_title_pane_g1

0xea55,	// (0x00047e82) ls0_title_pane_t1_ParamLimits

0xea55,	// (0x00047e82) ls0_title_pane_t1

0xb1d8,	// (0x00044605) lc0_uni_indicator_pane_g1_ParamLimits

0xb1d8,	// (0x00044605) lc0_uni_indicator_pane_g1

0x6c19,	// (0x00040046) lc0_stat_clock_pane_t1

0xdb1f,	// (0x00046f4c) main_ai5_pane

0x6c27,	// (0x00040054) ai5_sk_pane_ParamLimits

0x6c27,	// (0x00040054) ai5_sk_pane

0xea83,	// (0x00047eb0) cell_ai5_widget_pane_ParamLimits

0xea83,	// (0x00047eb0) cell_ai5_widget_pane

0x6cf4,	// (0x00040121) aid_size_cell_widget_grid

0x6d02,	// (0x0004012f) bg_ai5_widget_pane_ParamLimits

0x6d02,	// (0x0004012f) bg_ai5_widget_pane

0x6d7e,	// (0x000401ab) cell_ai5_widget_pane_g2

0x6d92,	// (0x000401bf) cell_ai5_widget_pane_g3

0x6dac,	// (0x000401d9) cell_ai5_widget_pane_g4

0x6dbc,	// (0x000401e9) cell_ai5_widget_pane_g5

0x6dcc,	// (0x000401f9) cell_ai5_widget_pane_g6

0x6dd8,	// (0x00040205) cell_ai5_widget_pane_g7

0x6e44,	// (0x00040271) cell_ai5_widget_pane_t1_ParamLimits

0x6e44,	// (0x00040271) cell_ai5_widget_pane_t1

0x6e61,	// (0x0004028e) cell_ai5_widget_pane_t2_ParamLimits

0x6e61,	// (0x0004028e) cell_ai5_widget_pane_t2

0x6e79,	// (0x000402a6) cell_ai5_widget_pane_t3_ParamLimits

0x6e79,	// (0x000402a6) cell_ai5_widget_pane_t3

0x6e91,	// (0x000402be) cell_ai5_widget_pane_t4_ParamLimits

0x6e91,	// (0x000402be) cell_ai5_widget_pane_t4

0xeaef,	// (0x00047f1c) cell_ai5_widget_pane_t5_ParamLimits

0xeaef,	// (0x00047f1c) cell_ai5_widget_pane_t5

0x6ed6,	// (0x00040303) cell_ai5_widget_pane_t6_ParamLimits

0x6ed6,	// (0x00040303) cell_ai5_widget_pane_t6

0x6ee8,	// (0x00040315) cell_ai5_widget_pane_t7_ParamLimits

0x6ee8,	// (0x00040315) cell_ai5_widget_pane_t7

0x6f07,	// (0x00040334) cell_ai5_widget_pane_t8_ParamLimits

0x6f07,	// (0x00040334) cell_ai5_widget_pane_t8

0x000b,

0xfe2f,	// (0x0004925c) cell_ai5_widget_pane_t_ParamLimits

0xfe2f,	// (0x0004925c) cell_ai5_widget_pane_t

0x6f8b,	// (0x000403b8) grid_ai5_widget_pane

0xb8e6,	// (0x00044d13) highlight_cell_ai5_widget_pane_ParamLimits

0xb8e6,	// (0x00044d13) highlight_cell_ai5_widget_pane

0xeb0f,	// (0x00047f3c) ai5_sk_left_pane

0xeb19,	// (0x00047f46) ai5_sk_middle_pane

0xeb23,	// (0x00047f50) ai5_sk_right_pane

0x6fb7,	// (0x000403e4) bg_ai5_widget_pane_g1_ParamLimits

0x6fb7,	// (0x000403e4) bg_ai5_widget_pane_g1

0x6fc3,	// (0x000403f0) bg_ai5_widget_pane_g2_ParamLimits

0x6fc3,	// (0x000403f0) bg_ai5_widget_pane_g2

0x6fcf,	// (0x000403fc) bg_ai5_widget_pane_g3_ParamLimits

0x6fcf,	// (0x000403fc) bg_ai5_widget_pane_g3

0x6fdb,	// (0x00040408) bg_ai5_widget_pane_g4_ParamLimits

0x6fdb,	// (0x00040408) bg_ai5_widget_pane_g4

0x6fe7,	// (0x00040414) bg_ai5_widget_pane_g5_ParamLimits

0x6fe7,	// (0x00040414) bg_ai5_widget_pane_g5

0x6ff3,	// (0x00040420) bg_ai5_widget_pane_g6_ParamLimits

0x6ff3,	// (0x00040420) bg_ai5_widget_pane_g6

0x6fff,	// (0x0004042c) bg_ai5_widget_pane_g7_ParamLimits

0x6fff,	// (0x0004042c) bg_ai5_widget_pane_g7

0x700b,	// (0x00040438) bg_ai5_widget_pane_g8_ParamLimits

0x700b,	// (0x00040438) bg_ai5_widget_pane_g8

0x7017,	// (0x00040444) bg_ai5_widget_pane_g9_ParamLimits

0x7017,	// (0x00040444) bg_ai5_widget_pane_g9

0x0008,

0xfe48,	// (0x00049275) bg_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x00049275) bg_ai5_widget_pane_g

0x7049,	// (0x00040476) cell_shortcut_ai5_widget_pane_ParamLimits

0x7049,	// (0x00040476) cell_shortcut_ai5_widget_pane

0xc1a2,	// (0x000455cf) bg_cell_shortcut_ai5_widget_pane

0x705a,	// (0x00040487) cell_grid_ai5_widget_pane_g1

0xc1a2,	// (0x000455cf) highlight_cell_shortcut_ai5_widget_pane

0x2085,	// (0x0003b4b2) ai5_sk_left_pane_g1

0x7063,	// (0x00040490) ai5_sk_left_pane_g2

0x706b,	// (0x00040498) ai5_sk_left_pane_g3

0x7073,	// (0x000404a0) ai5_sk_left_pane_g4

0x0003,

0xfe5b,	// (0x00049288) ai5_sk_left_pane_g

0x707b,	// (0x000404a8) ai5_sk_left_pane_t1

0x208d,	// (0x0003b4ba) ai5_sk_right_pane_g1

0x7089,	// (0x000404b6) ai5_sk_right_pane_g2

0x7091,	// (0x000404be) ai5_sk_right_pane_g3

0x7099,	// (0x000404c6) ai5_sk_right_pane_g4

0x0003,

0xfe64,	// (0x00049291) ai5_sk_right_pane_g

0x70a1,	// (0x000404ce) ai5_sk_right_pane_t1

0x208d,	// (0x0003b4ba) ai5_sk_middle_pane_g1

0x2085,	// (0x0003b4b2) ai5_sk_middle_pane_g2

0x20a5,	// (0x0003b4d2) ai5_sk_middle_pane_g3

0x7091,	// (0x000404be) ai5_sk_middle_pane_g4

0x706b,	// (0x00040498) ai5_sk_middle_pane_g5

0x70af,	// (0x000404dc) ai5_sk_middle_pane_g6

0xeb2d,	// (0x00047f5a) ai5_sk_middle_pane_g7

0x0006,

0xfe6d,	// (0x0004929a) ai5_sk_middle_pane_g

0xa342,	// (0x0004376f) aid_touch_area_size_lc0_ParamLimits

0xa342,	// (0x0004376f) aid_touch_area_size_lc0

0x0f0d,	// (0x0003a33a) cell_hwr_candidate_pane_t1_ParamLimits

0x03ba,	// (0x000397e7) aid_touch_navi_pane

0xa5ce,	// (0x000439fb) status_dt_navi_pane_ParamLimits

0xa5ce,	// (0x000439fb) status_dt_navi_pane

0xa5e6,	// (0x00043a13) status_dt_sta_pane_ParamLimits

0xa5e6,	// (0x00043a13) status_dt_sta_pane

0xeb35,	// (0x00047f62) dt_sta_controll_pane

0xeb42,	// (0x00047f6f) dt_sta_indi_pane

0xeb4f,	// (0x00047f7c) dt_sta_title_pane

0xb65a,	// (0x00044a87) bg_dt_sta_indi_pane_ParamLimits

0xb65a,	// (0x00044a87) bg_dt_sta_indi_pane

0xeb61,	// (0x00047f8e) dt_sta_battery_pane

0xeb69,	// (0x00047f96) dt_sta_indi_pane_g1

0x7101,	// (0x0004052e) dt_sta_indi_pane_g2

0x710a,	// (0x00040537) dt_sta_indi_pane_g3

0x0002,

0xfe7c,	// (0x000492a9) dt_sta_indi_pane_g

0x7113,	// (0x00040540) dt_sta_signal_pane

0xb8e6,	// (0x00044d13) bg_dt_sta_title_pane_ParamLimits

0xb8e6,	// (0x00044d13) bg_dt_sta_title_pane

0x2edf,	// (0x0003c30c) dt_sta_title_pane_g1

0xeb72,	// (0x00047f9f) dt_sta_title_pane_t1_ParamLimits

0xeb72,	// (0x00047f9f) dt_sta_title_pane_t1

0xb4c0,	// (0x000448ed) bg_dt_sta_control_pane

0xeb87,	// (0x00047fb4) dt_sta_controll_pane_g1

0xeb90,	// (0x00047fbd) bg_dt_sta_title_pane_g1

0xeb99,	// (0x00047fc6) bg_dt_sta_title_pane_g2

0xeba2,	// (0x00047fcf) bg_dt_sta_title_pane_g3

0x0002,

0xfe83,	// (0x000492b0) bg_dt_sta_title_pane_g

0x46b1,	// (0x0003dade) bg_dt_sta_indi_pane_g1

0x7155,	// (0x00040582) dt_sta_signal_pane_g1

0x715d,	// (0x0004058a) dt_sta_signal_pane_g2

0x0001,

0xfe8a,	// (0x000492b7) dt_sta_signal_pane_g

0x7165,	// (0x00040592) dt_sta_battery_pane_g1

0x716e,	// (0x0004059b) dt_sta_battery_pane_t1

0x46b1,	// (0x0003dade) bg_dt_sta_control_pane_g1

0xbdbb,	// (0x000451e8) fep_china_uni_eep_pane

0xbdc3,	// (0x000451f0) fep_china_uni_entry_pane_ParamLimits

0xbdd3,	// (0x00045200) popup_fep_china_uni_window_g1_ParamLimits

0xbde3,	// (0x00045210) popup_fep_china_uni_window_g2_ParamLimits

0xbde3,	// (0x00045210) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x00048b16) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x00048b16) popup_fep_china_uni_window_g

0x717d,	// (0x000405aa) fep_china_uni_eep_pane_g1

0x7185,	// (0x000405b2) fep_china_uni_eep_pane_t1

0x6b96,	// (0x0003ffc3) aid_touch_area_size_smil_player

0x0510,	// (0x0003993d) lc0_clock_pane

0x1f0f,	// (0x0003b33c) status_pane_g5_ParamLimits

0x1f0f,	// (0x0003b33c) status_pane_g5

0x9d7a,	// (0x000431a7) popup_keymap_window

0x1ecd,	// (0x0003b2fa) status_icon_pane

0x6d92,	// (0x000401bf) cell_ai5_widget_pane_g3_ParamLimits

0x6dac,	// (0x000401d9) cell_ai5_widget_pane_g4_ParamLimits

0x6dbc,	// (0x000401e9) cell_ai5_widget_pane_g5_ParamLimits

0x6de4,	// (0x00040211) cell_ai5_widget_pane_g8_ParamLimits

0x6de4,	// (0x00040211) cell_ai5_widget_pane_g8

0x6df8,	// (0x00040225) cell_ai5_widget_pane_g9_ParamLimits

0x6df8,	// (0x00040225) cell_ai5_widget_pane_g9

0x6e0c,	// (0x00040239) cell_ai5_widget_pane_g10_ParamLimits

0x6e0c,	// (0x00040239) cell_ai5_widget_pane_g10

0x7194,	// (0x000405c1) status_icon_pane_g1

0xb4c0,	// (0x000448ed) bg_popup_sub_pane_cp13

0x719c,	// (0x000405c9) popup_keymap_window_t1

0x9a36,	// (0x00042e63) control_pane_g6_ParamLimits

0x9a36,	// (0x00042e63) control_pane_g6

0x9a43,	// (0x00042e70) control_pane_g7_ParamLimits

0x9a43,	// (0x00042e70) control_pane_g7

0x9a50,	// (0x00042e7d) control_pane_g8_ParamLimits

0x9a50,	// (0x00042e7d) control_pane_g8

0xeb35,	// (0x00047f62) dt_sta_controll_pane_ParamLimits

0xeb42,	// (0x00047f6f) dt_sta_indi_pane_ParamLimits

0xeb4f,	// (0x00047f7c) dt_sta_title_pane_ParamLimits

0xb831,	// (0x00044c5e) aid_size_touch_scroll_bar_cale

0x880b,	// (0x00041c38) popup_discreet_window_ParamLimits

0x880b,	// (0x00041c38) popup_discreet_window

0x885d,	// (0x00041c8a) popup_sk_window

0x2723,	// (0x0003bb50) bg_popup_sub_pane_cp28_ParamLimits

0x2723,	// (0x0003bb50) bg_popup_sub_pane_cp28

0x71aa,	// (0x000405d7) popup_discreet_window_g1_ParamLimits

0x71aa,	// (0x000405d7) popup_discreet_window_g1

0xebab,	// (0x00047fd8) popup_discreet_window_t1_ParamLimits

0xebab,	// (0x00047fd8) popup_discreet_window_t1

0x71e8,	// (0x00040615) popup_discreet_window_t2_ParamLimits

0x71e8,	// (0x00040615) popup_discreet_window_t2

0x0002,

0xfe8f,	// (0x000492bc) popup_discreet_window_t_ParamLimits

0xfe8f,	// (0x000492bc) popup_discreet_window_t

0x1a54,	// (0x0003ae81) popup_sk_window_g1

0x1a5e,	// (0x0003ae8b) popup_sk_window_g2

0x0001,

0xfe96,	// (0x000492c3) popup_sk_window_g

0xb203,	// (0x00044630) popup_sk_window_t1

0xb211,	// (0x0004463e) popup_sk_window_t1_copy1

0x6d7e,	// (0x000401ab) cell_ai5_widget_pane_g2_ParamLimits

0x6f19,	// (0x00040346) cell_ai5_widget_pane_t9_ParamLimits

0x6f19,	// (0x00040346) cell_ai5_widget_pane_t9

0xb4c0,	// (0x000448ed) main_fep_fshwr2_pane

0xb21f,	// (0x0004464c) aid_fshwr2_btn_pane

0xb233,	// (0x00044660) aid_fshwr2_syb_pane

0xb247,	// (0x00044674) aid_fshwr2_txt_pane

0xb257,	// (0x00044684) fshwr2_func_candi_pane

0xb277,	// (0x000446a4) fshwr2_hwr_syb_pane

0xb299,	// (0x000446c6) fshwr2_icf_pane

0xdb1f,	// (0x00046f4c) fshwr2_icf_bg_pane

0x1b26,	// (0x0003af53) fshwr2_icf_pane_t1_ParamLimits

0x1b26,	// (0x0003af53) fshwr2_icf_pane_t1

0xbd38,	// (0x00045165) fshwr2_func_candi_pane_g1

0xebc9,	// (0x00047ff6) fshwr2_func_candi_row_pane_ParamLimits

0xebc9,	// (0x00047ff6) fshwr2_func_candi_row_pane

0xb2c9,	// (0x000446f6) cell_fshwr2_syb_pane_ParamLimits

0xb2c9,	// (0x000446f6) cell_fshwr2_syb_pane

0x1b62,	// (0x0003af8f) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1b62,	// (0x0003af8f) fshwr2_hwr_syb_pane_g1

0xdb1f,	// (0x00046f4c) bg_popup_call_pane_cp01

0xb2ef,	// (0x0004471c) fshwr2_func_candi_cell_pane_ParamLimits

0xb2ef,	// (0x0004471c) fshwr2_func_candi_cell_pane

0x250c,	// (0x0003b939) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x250c,	// (0x0003b939) fshwr2_func_candi_cell_bg_pane

0xb33a,	// (0x00044767) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb33a,	// (0x00044767) fshwr2_func_candi_cell_pane_g1

0xb371,	// (0x0004479e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb371,	// (0x0004479e) fshwr2_func_candi_cell_pane_t1

0xdb1f,	// (0x00046f4c) bg_button_pane_cp08

0xba28,	// (0x00044e55) cell_fshwr2_syb_bg_pane

0xb38c,	// (0x000447b9) cell_fshwr2_syb_bg_pane_g1

0xb39f,	// (0x000447cc) cell_fshwr2_syb_bg_pane_t1

0xb8e6,	// (0x00044d13) main_tmo_pane

0xc717,	// (0x00045b44) uni_indicator_pane_g1_ParamLimits

0xc72d,	// (0x00045b5a) uni_indicator_pane_g2_ParamLimits

0xc743,	// (0x00045b70) uni_indicator_pane_g3_ParamLimits

0x324c,	// (0x0003c679) uni_indicator_pane_g4_ParamLimits

0x324c,	// (0x0003c679) uni_indicator_pane_g4

0x3260,	// (0x0003c68d) uni_indicator_pane_g5_ParamLimits

0x3260,	// (0x0003c68d) uni_indicator_pane_g5

0x3260,	// (0x0003c68d) uni_indicator_pane_g6_ParamLimits

0x3260,	// (0x0003c68d) uni_indicator_pane_g6

0xf8e8,	// (0x00048d15) uni_indicator_pane_g_ParamLimits

0xd503,	// (0x00046930) popup_tmo_note_window_ParamLimits

0xd503,	// (0x00046930) popup_tmo_note_window

0x12b1,	// (0x0003a6de) fshwr2_bg_pane

0xb362,	// (0x0004478f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb362,	// (0x0004478f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9b,	// (0x000492c8) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9b,	// (0x000492c8) fshwr2_func_candi_cell_pane_g

0x0ec6,	// (0x0003a2f3) bg_popup_window_pane_cp01

0x1c18,	// (0x0003b045) bg_popup_window_pane_g1_cp01

0x7261,	// (0x0004068e) bg_popup_window_pane_cp22_ParamLimits

0x7261,	// (0x0004068e) bg_popup_window_pane_cp22

0xebec,	// (0x00048019) listscroll_tmo_link_pane_ParamLimits

0xebec,	// (0x00048019) listscroll_tmo_link_pane

0x72af,	// (0x000406dc) popup_tmo_note_window_g1_ParamLimits

0x72af,	// (0x000406dc) popup_tmo_note_window_g1

0xec2c,	// (0x00048059) tmo_note_info_pane_ParamLimits

0xec2c,	// (0x00048059) tmo_note_info_pane

0xec46,	// (0x00048073) list_tmo_note_info_pane_g1_ParamLimits

0xec46,	// (0x00048073) list_tmo_note_info_pane_g1

0x72ed,	// (0x0004071a) list_tmo_note_info_pane_g2_ParamLimits

0x72ed,	// (0x0004071a) list_tmo_note_info_pane_g2

0x0001,

0xfea0,	// (0x000492cd) list_tmo_note_info_pane_g_ParamLimits

0xfea0,	// (0x000492cd) list_tmo_note_info_pane_g

0x7309,	// (0x00040736) list_tmo_note_info_text_pane_ParamLimits

0x7309,	// (0x00040736) list_tmo_note_info_text_pane

0x738a,	// (0x000407b7) list_tmo_link_pane

0x7397,	// (0x000407c4) scroll_pane_cp20

0x73a4,	// (0x000407d1) list_single_tmo_link_pane_ParamLimits

0x73a4,	// (0x000407d1) list_single_tmo_link_pane

0x73b4,	// (0x000407e1) list_single_tmo_link_pane_t1

0x73c2,	// (0x000407ef) list_tmo_note_info_text_pane_t1_ParamLimits

0x73c2,	// (0x000407ef) list_tmo_note_info_text_pane_t1

0x93d0,	// (0x000427fd) aid_size_touch_scroll_bar_cp01_ParamLimits

0x93d0,	// (0x000427fd) aid_size_touch_scroll_bar_cp01

0x92d0,	// (0x000426fd) aid_size_touch_slider_marker

0x884d,	// (0x00041c7a) popup_settings_window_ParamLimits

0x884d,	// (0x00041c7a) popup_settings_window

0xdd6b,	// (0x00047198) popup_candi_list_indi_window

0x03ba,	// (0x000397e7) aid_touch_navi_pane_ParamLimits

0x120c,	// (0x0003a639) rs_clock_indi_pane

0x1215,	// (0x0003a642) sctrl_sk_bottom_pane_ParamLimits

0x1226,	// (0x0003a653) sctrl_sk_top_pane_ParamLimits

0xae58,	// (0x00044285) popup_fep_tooltip_window

0x6cf4,	// (0x00040121) aid_size_cell_widget_grid_ParamLimits

0x6d69,	// (0x00040196) cell_ai5_widget_pane_g1_ParamLimits

0x6d69,	// (0x00040196) cell_ai5_widget_pane_g1

0x6dcc,	// (0x000401f9) cell_ai5_widget_pane_g6_ParamLimits

0x6dd8,	// (0x00040205) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe14,	// (0x00049241) cell_ai5_widget_pane_g_ParamLimits

0xfe14,	// (0x00049241) cell_ai5_widget_pane_g

0x6f48,	// (0x00040375) cell_ai5_widget_pane_t10_ParamLimits

0x6f48,	// (0x00040375) cell_ai5_widget_pane_t10

0x6f8b,	// (0x000403b8) grid_ai5_widget_pane_ParamLimits

0x7023,	// (0x00040450) cell_contacts_ai5_widget_pane_ParamLimits

0x7023,	// (0x00040450) cell_contacts_ai5_widget_pane

0x71fd,	// (0x0004062a) popup_discreet_window_t3_ParamLimits

0x71fd,	// (0x0004062a) popup_discreet_window_t3

0xb2b5,	// (0x000446e2) popup_fshwr2_char_preview_window_ParamLimits

0xb2b5,	// (0x000446e2) popup_fshwr2_char_preview_window

0xec5d,	// (0x0004808a) tmo_note_info_pane_t1

0xec72,	// (0x0004809f) tmo_note_info_pane_t2

0xec89,	// (0x000480b6) tmo_note_info_pane_t3

0x7366,	// (0x00040793) tmo_note_info_pane_t4

0x7378,	// (0x000407a5) tmo_note_info_pane_t5

0x0004,

0xfea5,	// (0x000492d2) tmo_note_info_pane_t

0x738a,	// (0x000407b7) list_tmo_link_pane_ParamLimits

0x7397,	// (0x000407c4) scroll_pane_cp20_ParamLimits

0xdb1f,	// (0x00046f4c) bg_popup_fep_char_preview_window_cp01

0xec9e,	// (0x000480cb) popup_fshwr2_char_preview_window_t1

0x73e9,	// (0x00040816) popup_candi_list_indi_window_g1

0x73f2,	// (0x0004081f) bg_cell_contacts_ai5_widget_pane

0x73fe,	// (0x0004082b) cell_contacts_ai5_widget_pane_g1

0x4d77,	// (0x0003e1a4) cell_contacts_ai5_widget_pane_g2

0x7413,	// (0x00040840) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb0,	// (0x000492dd) cell_contacts_ai5_widget_pane_g

0x741f,	// (0x0004084c) cell_contacts_ai5_widget_pane_t1

0xb8e6,	// (0x00044d13) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7496,	// (0x000408c3) settings_container_pane

0xc1a2,	// (0x000455cf) listscroll_set_pane_copy1

0x3d8d,	// (0x0003d1ba) scroll_pane_cp121_copy1

0x24c8,	// (0x0003b8f5) set_content_pane_copy1

0xecac,	// (0x000480d9) aid_height_set_list_copy1_ParamLimits

0xecac,	// (0x000480d9) aid_height_set_list_copy1

0x3458,	// (0x0003c885) aid_size_parent_copy1_ParamLimits

0x3458,	// (0x0003c885) aid_size_parent_copy1

0xecb8,	// (0x000480e5) button_value_adjust_pane_cp6_copy1_ParamLimits

0xecb8,	// (0x000480e5) button_value_adjust_pane_cp6_copy1

0xba28,	// (0x00044e55) list_highlight_pane_cp2_copy1_ParamLimits

0xba28,	// (0x00044e55) list_highlight_pane_cp2_copy1

0xeccc,	// (0x000480f9) list_set_pane_copy1_ParamLimits

0xeccc,	// (0x000480f9) list_set_pane_copy1

0x7431,	// (0x0004085e) main_pane_set_t1_copy1_ParamLimits

0x7431,	// (0x0004085e) main_pane_set_t1_copy1

0x746b,	// (0x00040898) main_pane_set_t2_copy1_ParamLimits

0x746b,	// (0x00040898) main_pane_set_t2_copy1

0xed79,	// (0x000481a6) main_pane_set_t3_copy1

0xed87,	// (0x000481b4) main_pane_set_t4_copy1

0x748a,	// (0x000408b7) set_content_pane_g1_copy1_ParamLimits

0x748a,	// (0x000408b7) set_content_pane_g1_copy1

0xed95,	// (0x000481c2) setting_code_pane_copy1

0x7593,	// (0x000409c0) setting_slider_graphic_pane_copy1

0x7593,	// (0x000409c0) setting_slider_pane_copy1

0x759b,	// (0x000409c8) setting_text_pane_copy1

0x759b,	// (0x000409c8) setting_volume_pane_copy1

0xed95,	// (0x000481c2) settings_code_pane_cp2_copy1

0xed9d,	// (0x000481ca) settings_code_pane_cp_copy1_ParamLimits

0xed9d,	// (0x000481ca) settings_code_pane_cp_copy1

0xb3b5,	// (0x000447e2) volume_set_pane_copy1

0xedb1,	// (0x000481de) volume_set_pane_g10_copy1

0xedb9,	// (0x000481e6) volume_set_pane_g1_copy1

0xedc1,	// (0x000481ee) volume_set_pane_g2_copy1

0xedc9,	// (0x000481f6) volume_set_pane_g3_copy1

0xedd1,	// (0x000481fe) volume_set_pane_g4_copy1

0xedd9,	// (0x00048206) volume_set_pane_g5_copy1

0xede1,	// (0x0004820e) volume_set_pane_g6_copy1

0xede9,	// (0x00048216) volume_set_pane_g7_copy1

0xedf1,	// (0x0004821e) volume_set_pane_g8_copy1

0xedf9,	// (0x00048226) volume_set_pane_g9_copy1

0xb530,	// (0x0004495d) bg_set_opt_pane_cp_copy1_ParamLimits

0xb530,	// (0x0004495d) bg_set_opt_pane_cp_copy1

0xb3bd,	// (0x000447ea) setting_slider_pane_t1_copy1_ParamLimits

0xb3bd,	// (0x000447ea) setting_slider_pane_t1_copy1

0xb3dc,	// (0x00044809) setting_slider_pane_t2_copy1_ParamLimits

0xb3dc,	// (0x00044809) setting_slider_pane_t2_copy1

0xb3f6,	// (0x00044823) setting_slider_pane_t3_copy1_ParamLimits

0xb3f6,	// (0x00044823) setting_slider_pane_t3_copy1

0xb40e,	// (0x0004483b) slider_set_pane_copy1_ParamLimits

0xb40e,	// (0x0004483b) slider_set_pane_copy1

0xb93e,	// (0x00044d6b) set_opt_bg_pane_g1_copy2

0xb946,	// (0x00044d73) set_opt_bg_pane_g2_copy2

0x7607,	// (0x00040a34) set_opt_bg_pane_g3_copy2

0xb956,	// (0x00044d83) set_opt_bg_pane_g4_copy2

0xb95e,	// (0x00044d8b) set_opt_bg_pane_g5_copy2

0xb966,	// (0x00044d93) set_opt_bg_pane_g6_copy2

0xee01,	// (0x0004822e) set_opt_bg_pane_g7_copy2

0x7619,	// (0x00040a46) set_opt_bg_pane_g8_copy2

0x7623,	// (0x00040a50) set_opt_bg_pane_g9_copy2

0xb424,	// (0x00044851) aid_size_touch_slider_mark_copy1_ParamLimits

0xb424,	// (0x00044851) aid_size_touch_slider_mark_copy1

0xee09,	// (0x00048236) slider_set_pane_g1_copy1

0x1ca4,	// (0x0003b0d1) slider_set_pane_g2_copy1

0xaa26,	// (0x00043e53) slider_set_pane_g3_copy1_ParamLimits

0xaa26,	// (0x00043e53) slider_set_pane_g3_copy1

0xaa3a,	// (0x00043e67) slider_set_pane_g4_copy1_ParamLimits

0xaa3a,	// (0x00043e67) slider_set_pane_g4_copy1

0xaa52,	// (0x00043e7f) slider_set_pane_g5_copy1_ParamLimits

0xaa52,	// (0x00043e7f) slider_set_pane_g5_copy1

0xaa26,	// (0x00043e53) slider_set_pane_g6_copy1_ParamLimits

0xaa26,	// (0x00043e53) slider_set_pane_g6_copy1

0xb438,	// (0x00044865) slider_set_pane_g7_copy1_ParamLimits

0xb438,	// (0x00044865) slider_set_pane_g7_copy1

0xb4d4,	// (0x00044901) bg_set_opt_pane_cp2_copy1

0xee12,	// (0x0004823f) setting_slider_graphic_pane_g1_copy1

0xee1b,	// (0x00048248) setting_slider_graphic_pane_t1_copy1

0xee2b,	// (0x00048258) setting_slider_graphic_pane_t2_copy1

0xee3b,	// (0x00048268) slider_set_pane_cp_copy1

0x766f,	// (0x00040a9c) input_focus_pane_cp1_copy1

0x7678,	// (0x00040aa5) list_set_text_pane_copy1

0x7680,	// (0x00040aad) setting_text_pane_g1_copy1

0xee4b,	// (0x00048278) set_text_pane_t1_copy1

0x766f,	// (0x00040a9c) input_focus_pane_cp2_copy1

0x7680,	// (0x00040aad) setting_code_pane_g1_copy1

0x7689,	// (0x00040ab6) setting_code_pane_t1_copy1

0x7697,	// (0x00040ac4) list_set_graphic_pane_copy1

0xb4d4,	// (0x00044901) bg_set_opt_pane_cp4_copy1

0xbf13,	// (0x00045340) list_set_graphic_pane_g1_copy1_ParamLimits

0xbf13,	// (0x00045340) list_set_graphic_pane_g1_copy1

0x76ab,	// (0x00040ad8) list_set_graphic_pane_g2_copy1

0xbf2b,	// (0x00045358) list_set_graphic_pane_t1_copy1_ParamLimits

0xbf2b,	// (0x00045358) list_set_graphic_pane_t1_copy1

0x46b1,	// (0x0003dade) rs_clock_indi_pane_g1

0x76b3,	// (0x00040ae0) rs_clock_indi_pane_t1

0x76c1,	// (0x00040aee) rs_indi_pane

0x76c9,	// (0x00040af6) rs_indi_pane_g1

0x76d2,	// (0x00040aff) rs_indi_pane_g2

0x73e9,	// (0x00040816) rs_indi_pane_g3

0x0002,

0xfeb7,	// (0x000492e4) rs_indi_pane_g

0xc1a2,	// (0x000455cf) bg_popup_preview_window_pane_cp03

0x76db,	// (0x00040b08) popup_fep_tooltip_window_t1

0xd1a9,	// (0x000465d6) popup_note2_window_g2_ParamLimits

0xd1a9,	// (0x000465d6) popup_note2_window_g2

0x0001,

0xfc4b,	// (0x00049078) popup_note2_window_g_ParamLimits

0xfc4b,	// (0x00049078) popup_note2_window_g

0x5861,	// (0x0003ec8e) bg_popup_sub_pane_cp11_ParamLimits

0x586e,	// (0x0003ec9b) cell_ai3_links_pane_g1_ParamLimits

0x5885,	// (0x0003ecb2) cell_ai3_links_pane_t1

0xee4b,	// (0x00048278) set_text_pane_t1_copy1_ParamLimits

0xc0d8,	// (0x00045505) cell_graphic_popup_pane_cp2_ParamLimits

0xc0d8,	// (0x00045505) cell_graphic_popup_pane_cp2

0xee67,	// (0x00048294) cell_graphic_popup_pane_g1_cp2

0xb7b4,	// (0x00044be1) cell_graphic_popup_pane_g2_cp2

0x76f1,	// (0x00040b1e) cell_graphic_popup_pane_g3_cp2

0xee6f,	// (0x0004829c) cell_graphic_popup_pane_t2_cp2

0xb7c5,	// (0x00044bf2) grid_highlight_pane_cp3_cp2

0xbbb5,	// (0x00044fe2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb8e6,	// (0x00044d13) main_tmo_pane_ParamLimits

0xd4f7,	// (0x00046924) popup_tmo_big_image_note_window

0x6d58,	// (0x00040185) cell_ai5_widget_list_pane

0x6d60,	// (0x0004018d) cell_ai5_widget_lrg_icon_pane

0xec5d,	// (0x0004808a) tmo_note_info_pane_t1_ParamLimits

0xec72,	// (0x0004809f) tmo_note_info_pane_t2_ParamLimits

0xec89,	// (0x000480b6) tmo_note_info_pane_t3_ParamLimits

0x7366,	// (0x00040793) tmo_note_info_pane_t4_ParamLimits

0x7378,	// (0x000407a5) tmo_note_info_pane_t5_ParamLimits

0xfea5,	// (0x000492d2) tmo_note_info_pane_t_ParamLimits

0x7496,	// (0x000408c3) settings_container_pane_ParamLimits

0xee43,	// (0x00048270) indicator_popup_pane_cp5

0xee43,	// (0x00048270) indicator_popup_pane_cp6

0x7697,	// (0x00040ac4) list_set_graphic_pane_copy1_ParamLimits

0xb4c0,	// (0x000448ed) bg_popup_window_pane_cp23

0x7707,	// (0x00040b34) popup_tmo_big_image_note_window_g1

0x7710,	// (0x00040b3d) popup_tmo_big_image_note_window_t1

0x7720,	// (0x00040b4d) popup_tmo_big_image_note_window_t2

0x7730,	// (0x00040b5d) popup_tmo_big_image_note_window_t3

0x0002,

0xfebe,	// (0x000492eb) popup_tmo_big_image_note_window_t

0x46b1,	// (0x0003dade) cell_ai5_widget_lrg_icon_pane_g1

0x7740,	// (0x00040b6d) cell_ai5_widget_lrg_icon_pane_t1

0x774e,	// (0x00040b7b) cell_ai5_widget_list_row_pane_ParamLimits

0x774e,	// (0x00040b7b) cell_ai5_widget_list_row_pane

0x7765,	// (0x00040b92) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7765,	// (0x00040b92) cell_ai5_widget_list_row_pane_g1

0xee7d,	// (0x000482aa) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xee7d,	// (0x000482aa) cell_ai5_widget_list_row_pane_t1

0x779d,	// (0x00040bca) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x779d,	// (0x00040bca) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec5,	// (0x000492f2) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec5,	// (0x000492f2) cell_ai5_widget_list_row_pane_t

0xdb1f,	// (0x00046f4c) main_fep_vtchi_ss_pane

0x77ed,	// (0x00040c1a) popup_fep_char_pre_window

0x77f5,	// (0x00040c22) popup_fep_ituss_window

0xeed8,	// (0x00048305) popup_fep_vkbss_window

0xba28,	// (0x00044e55) grid_vkbss_keypad_pane_ParamLimits

0xba28,	// (0x00044e55) grid_vkbss_keypad_pane

0x7861,	// (0x00040c8e) ituss_keypad_pane

0x1ccc,	// (0x0003b0f9) aid_vkbss_key_offset_ParamLimits

0x1ccc,	// (0x0003b0f9) aid_vkbss_key_offset

0xb44e,	// (0x0004487b) cell_vkbss_key_pane_ParamLimits

0xb44e,	// (0x0004487b) cell_vkbss_key_pane

0x7871,	// (0x00040c9e) bg_cell_vkbss_key_g1_ParamLimits

0x7871,	// (0x00040c9e) bg_cell_vkbss_key_g1

0xeee5,	// (0x00048312) cell_vkbss_key_3p_pane_ParamLimits

0xeee5,	// (0x00048312) cell_vkbss_key_3p_pane

0xef1b,	// (0x00048348) cell_vkbss_key_g1_ParamLimits

0xef1b,	// (0x00048348) cell_vkbss_key_g1

0xef51,	// (0x0004837e) cell_vkbss_key_t1_ParamLimits

0xef51,	// (0x0004837e) cell_vkbss_key_t1

0x1d23,	// (0x0003b150) cell_ituss_key_pane_ParamLimits

0x1d23,	// (0x0003b150) cell_ituss_key_pane

0x7945,	// (0x00040d72) bg_cell_ituss_key_g1_ParamLimits

0x7945,	// (0x00040d72) bg_cell_ituss_key_g1

0x7951,	// (0x00040d7e) cell_ituss_key_pane_g1_ParamLimits

0x7951,	// (0x00040d7e) cell_ituss_key_pane_g1

0x1d34,	// (0x0003b161) cell_ituss_key_pane_g2_ParamLimits

0x1d34,	// (0x0003b161) cell_ituss_key_pane_g2

0x0005,

0xfecc,	// (0x000492f9) cell_ituss_key_pane_g_ParamLimits

0xfecc,	// (0x000492f9) cell_ituss_key_pane_g

0x1db8,	// (0x0003b1e5) cell_ituss_key_t1_ParamLimits

0x1db8,	// (0x0003b1e5) cell_ituss_key_t1

0x1df2,	// (0x0003b21f) cell_ituss_key_t2_ParamLimits

0x1df2,	// (0x0003b21f) cell_ituss_key_t2

0x1e24,	// (0x0003b251) cell_ituss_key_t3_ParamLimits

0x1e24,	// (0x0003b251) cell_ituss_key_t3

0x1e55,	// (0x0003b282) cell_ituss_key_t4_ParamLimits

0x1e55,	// (0x0003b282) cell_ituss_key_t4

0x0004,

0xfed9,	// (0x00049306) cell_ituss_key_t_ParamLimits

0xfed9,	// (0x00049306) cell_ituss_key_t

0xefad,	// (0x000483da) cell_vkbss_key_3p_pane_g1

0xefb5,	// (0x000483e2) cell_vkbss_key_3p_pane_g2

0xefbd,	// (0x000483ea) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee4,	// (0x00049311) cell_vkbss_key_3p_pane_g

0xc1a2,	// (0x000455cf) bg_popup_fep_char_preview_window_cp02

0x798f,	// (0x00040dbc) popup_fep_char_pre_window_t1

0xeae5,	// (0x00047f12) main_ai5_sk_pane

0x73f2,	// (0x0004081f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x73fe,	// (0x0004082b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4d77,	// (0x0003e1a4) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7413,	// (0x00040840) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb0,	// (0x000492dd) cell_contacts_ai5_widget_pane_g_ParamLimits

0x741f,	// (0x0004084c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb8e6,	// (0x00044d13) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xefc5,	// (0x000483f2) main_ai5_sk_pane_g1

0xc370,	// (0x0004579d) popup_query_code_window_g1

0xeec9,	// (0x000482f6) popup_fep_vkb_icf_pane

0x7838,	// (0x00040c65) popup_fep_vtchi_icf_pane

0x79a6,	// (0x00040dd3) bg_icf_pane

0x79a6,	// (0x00040dd3) list_vkb_icf_pane

0x79b2,	// (0x00040ddf) bg_icf_pane_cp01

0x79c5,	// (0x00040df2) vtchi_icf_list_pane

0xf01a,	// (0x00048447) list_vkb_icf_pane_t1_ParamLimits

0xf01a,	// (0x00048447) list_vkb_icf_pane_t1

0x7a4a,	// (0x00040e77) vtchi_icf_list_pane_t1_ParamLimits

0x7a4a,	// (0x00040e77) vtchi_icf_list_pane_t1

0x77f5,	// (0x00040c22) popup_fep_ituss_window_ParamLimits

0x7838,	// (0x00040c65) popup_fep_vtchi_icf_pane_ParamLimits

0x7861,	// (0x00040c8e) ituss_keypad_pane_ParamLimits

0x1cc2,	// (0x0003b0ef) ituss_sks_pane

0x79a6,	// (0x00040dd3) bg_icf_pane_ParamLimits

0xeeae,	// (0x000482db) icf_edit_indi_pane_ParamLimits

0xeeae,	// (0x000482db) icf_edit_indi_pane

0x79a6,	// (0x00040dd3) list_vkb_icf_pane_ParamLimits

0x79b2,	// (0x00040ddf) bg_icf_pane_cp01_ParamLimits

0x77e0,	// (0x00040c0d) icf_edit_indi_pane_cp01_ParamLimits

0x77e0,	// (0x00040c0d) icf_edit_indi_pane_cp01

0x79c5,	// (0x00040df2) vtchi_query_pane

0x6b66,	// (0x0003ff93) icf_edit_indi_pane_g1_ParamLimits

0x6b66,	// (0x0003ff93) icf_edit_indi_pane_g1

0xf032,	// (0x0004845f) icf_edit_indi_pane_g2_ParamLimits

0xf032,	// (0x0004845f) icf_edit_indi_pane_g2

0x0001,

0xff0f,	// (0x0004933c) icf_edit_indi_pane_g_ParamLimits

0xff0f,	// (0x0004933c) icf_edit_indi_pane_g

0xf046,	// (0x00048473) icf_edit_indi_pane_t1

0x7a6e,	// (0x00040e9b) bg_input_focus_pane_cp042

0xb828,	// (0x00044c55) vtchi_button_pane

0x7a77,	// (0x00040ea4) vtchi_query_pane_t1

0x7a85,	// (0x00040eb2) vtchi_query_pane_t2

0x7a93,	// (0x00040ec0) vtchi_query_pane_t3

0x0002,

0xfefe,	// (0x0004932b) vtchi_query_pane_t

0xdb1f,	// (0x00046f4c) bg_button_pane_cp13

0x7aa1,	// (0x00040ece) vtchi_button_pane_g1

0x1e98,	// (0x0003b2c5) ituss_sks_pane_g1

0x1ea3,	// (0x0003b2d0) ituss_sks_pane_g2

0x0001,

0xff05,	// (0x00049332) ituss_sks_pane_g

0x7aa9,	// (0x00040ed6) ituss_sks_pane_t1

0x7ab7,	// (0x00040ee4) ituss_sks_pane_t2

0x0001,

0xff0a,	// (0x00049337) ituss_sks_pane_t

0x4125,	// (0x0003d552) indicator_nsta_pane_cp_g1

0x412e,	// (0x0003d55b) indicator_nsta_pane_cp_g2

0x4136,	// (0x0003d563) indicator_nsta_pane_cp_g3

0x413e,	// (0x0003d56b) indicator_nsta_pane_cp_g4

0x412e,	// (0x0003d55b) indicator_nsta_pane_cp_g5

0x4136,	// (0x0003d563) indicator_nsta_pane_cp_g6

0x0005,

0xfa89,	// (0x00048eb6) indicator_nsta_pane_cp_g

0xe8c4,	// (0x00047cf1) cell_graphic2_pane_t2_ParamLimits

0xe8c4,	// (0x00047cf1) cell_graphic2_pane_t2

0x0001,

0xfd9b,	// (0x000491c8) cell_graphic2_pane_t_ParamLimits

0xfd9b,	// (0x000491c8) cell_graphic2_pane_t

0xe8fb,	// (0x00047d28) cell_graphic2_control_pane_t1

0x96a8,	// (0x00042ad5) signal_pane_g3_ParamLimits

0x96a8,	// (0x00042ad5) signal_pane_g3

0x96bc,	// (0x00042ae9) signal_pane_g4_ParamLimits

0x96bc,	// (0x00042ae9) signal_pane_g4

0x77af,	// (0x00040bdc) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x77af,	// (0x00040bdc) cell_ai5_widget_list_row_pane_t3

0x7965,	// (0x00040d92) cell_ituss_key_pane_t1_ParamLimits

0x7965,	// (0x00040d92) cell_ituss_key_pane_t1

0x2197,	// (0x0003b5c4) form_field_data_wide_pane_vc_t2_ParamLimits

0x2197,	// (0x0003b5c4) form_field_data_wide_pane_vc_t2

0x21ab,	// (0x0003b5d8) form_field_data_wide_pane_vc_t3_ParamLimits

0x21ab,	// (0x0003b5d8) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d0,	// (0x00048bfd) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d0,	// (0x00048bfd) form_field_data_wide_pane_vc_t

0x3dcf,	// (0x0003d1fc) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3dcf,	// (0x0003d1fc) form_field_slider_wide_pane_vc_t3

0x3ead,	// (0x0003d2da) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3ead,	// (0x0003d2da) form_field_popup_wide_pane_vc_t2

0x3ec4,	// (0x0003d2f1) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3ec4,	// (0x0003d2f1) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa78,	// (0x00048ea5) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa78,	// (0x00048ea5) form_field_popup_wide_pane_vc_t

0xb21f,	// (0x0004464c) aid_fshwr2_btn_pane_ParamLimits

0xb233,	// (0x00044660) aid_fshwr2_syb_pane_ParamLimits

0xb247,	// (0x00044674) aid_fshwr2_txt_pane_ParamLimits

0x12b1,	// (0x0003a6de) fshwr2_bg_pane_ParamLimits

0xb257,	// (0x00044684) fshwr2_func_candi_pane_ParamLimits

0xb277,	// (0x000446a4) fshwr2_hwr_syb_pane_ParamLimits

0xb299,	// (0x000446c6) fshwr2_icf_pane_ParamLimits

0xe155,	// (0x00047582) list_double_graphic_pane_vc_g4_ParamLimits

0xe155,	// (0x00047582) list_double_graphic_pane_vc_g4

0x1d54,	// (0x0003b181) cell_ituss_key_pane_g3_ParamLimits

0x1d54,	// (0x0003b181) cell_ituss_key_pane_g3

0x1e86,	// (0x0003b2b3) cell_ituss_key_t5_ParamLimits

0x1e86,	// (0x0003b2b3) cell_ituss_key_t5

0xeed8,	// (0x00048305) popup_fep_vkbss_window_ParamLimits

0x4ea8,	// (0x0003e2d5) aid_cell_ai5_quarter

0xf046,	// (0x00048473) icf_edit_indi_pane_t1_ParamLimits

0x8c76,	// (0x000420a3) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8c76,	// (0x000420a3) aid_tch_indicator_popup_pane_cp2

0x8c89,	// (0x000420b6) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8c89,	// (0x000420b6) aid_tch_query_popup_data_pane_cp2

0x250c,	// (0x0003b939) aid_tch_query_popup_pane_ParamLimits

0x250c,	// (0x0003b939) aid_tch_query_popup_pane

0x250c,	// (0x0003b939) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x250c,	// (0x0003b939) aid_tch_query_popup_data_pane_cp1

0xba28,	// (0x00044e55) cell_fshwr2_syb_bg_pane_ParamLimits

0xb38c,	// (0x000447b9) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xb39f,	// (0x000447cc) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeec9,	// (0x000482f6) popup_fep_vkb_icf_pane_ParamLimits

0xb185,	// (0x000445b2) bg_popup_fep_char_preview_window_g10

0x6e20,	// (0x0004024d) cell_ai5_widget_pane_g11_ParamLimits

0x6e20,	// (0x0004024d) cell_ai5_widget_pane_g11

0x6e2c,	// (0x00040259) cell_ai5_widget_pane_g12_ParamLimits

0x6e2c,	// (0x00040259) cell_ai5_widget_pane_g12

0x6e38,	// (0x00040265) cell_ai5_widget_pane_g13_ParamLimits

0x6e38,	// (0x00040265) cell_ai5_widget_pane_g13

0x6f67,	// (0x00040394) cell_ai5_widget_pane_t11_ParamLimits

0x6f67,	// (0x00040394) cell_ai5_widget_pane_t11

0x6f79,	// (0x000403a6) cell_ai5_widget_pane_t12_ParamLimits

0x6f79,	// (0x000403a6) cell_ai5_widget_pane_t12

0x1d60,	// (0x0003b18d) cell_ituss_key_pane_g4_ParamLimits

0x1d60,	// (0x0003b18d) cell_ituss_key_pane_g4

0x1d7c,	// (0x0003b1a9) cell_ituss_key_pane_g5_ParamLimits

0x1d7c,	// (0x0003b1a9) cell_ituss_key_pane_g5

0x1d98,	// (0x0003b1c5) cell_ituss_key_pane_g6_ParamLimits

0x1d98,	// (0x0003b1c5) cell_ituss_key_pane_g6

0x207d,	// (0x0003b4aa) bg_icf_pane_g1

0xefce,	// (0x000483fb) bg_icf_pane_g2

0xefd8,	// (0x00048405) bg_icf_pane_g3

0xefe0,	// (0x0004840d) bg_icf_pane_g4

0xefea,	// (0x00048417) bg_icf_pane_g5

0xeff4,	// (0x00048421) bg_icf_pane_g6

0xeffe,	// (0x0004842b) bg_icf_pane_g7

0xf006,	// (0x00048433) bg_icf_pane_g8

0xf010,	// (0x0004843d) bg_icf_pane_g9

0x0008,

0xfeeb,	// (0x00049318) bg_icf_pane_g

0x784e,	// (0x00040c7b) popup_hyb_candi_window_ParamLimits

0x784e,	// (0x00040c7b) popup_hyb_candi_window

0x2109,	// (0x0003b536) bg_popup_sub_pane_cp01_ParamLimits

0x2109,	// (0x0003b536) bg_popup_sub_pane_cp01

0x7af2,	// (0x00040f1f) entry_hyb_candi_pane_ParamLimits

0x7af2,	// (0x00040f1f) entry_hyb_candi_pane

0x7b01,	// (0x00040f2e) grid_hyb_candi_pane_ParamLimits

0x7b01,	// (0x00040f2e) grid_hyb_candi_pane

0x7b16,	// (0x00040f43) grid_hyb_phrase_pane_ParamLimits

0x7b16,	// (0x00040f43) grid_hyb_phrase_pane

0x7b25,	// (0x00040f52) cell_hyb_candi_pane_ParamLimits

0x7b25,	// (0x00040f52) cell_hyb_candi_pane

0x7b48,	// (0x00040f75) cell_hyb_candi_scroll_pane

0xbd38,	// (0x00045165) cell_hyb_candi_pane_g1

0x7b51,	// (0x00040f7e) cell_hyb_candi_pane_t1

0x7b5f,	// (0x00040f8c) cell_hyb_phrase_pane

0xbd38,	// (0x00045165) cell_hyb_phrase_pane_g1

0x7b68,	// (0x00040f95) cell_hyb_phrase_pane_t1

0x7b76,	// (0x00040fa3) entry_hyb_candi_pane_t1

0xc1a2,	// (0x000455cf) input_focus_pane_cp06

0x7b84,	// (0x00040fb1) cell_hyb_candi_scroll_pane_g1

0x7b8c,	// (0x00040fb9) cell_hyb_candi_scroll_pane_g1_aid

0x7b94,	// (0x00040fc1) cell_hyb_candi_scroll_pane_g2

0x7b9c,	// (0x00040fc9) cell_hyb_candi_scroll_pane_g2_aid

0x7ba4,	// (0x00040fd1) cell_hyb_candi_scroll_pane_g3

0x7bac,	// (0x00040fd9) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
