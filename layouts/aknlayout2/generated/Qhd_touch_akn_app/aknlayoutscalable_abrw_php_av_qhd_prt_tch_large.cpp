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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004a13b };

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
0x7cd4,	// (0x00051e0f) Screen

0x7ce8,	// (0x00051e23) application_window_ParamLimits

0x7ce8,	// (0x00051e23) application_window

0x7d02,	// (0x00051e3d) screen_g1

0x492a,	// (0x0004ea65) area_bottom_pane_ParamLimits

0x492a,	// (0x0004ea65) area_bottom_pane

0x49ea,	// (0x0004eb25) area_top_pane_ParamLimits

0x49ea,	// (0x0004eb25) area_top_pane

0x4a88,	// (0x0004ebc3) main_pane_ParamLimits

0x4a88,	// (0x0004ebc3) main_pane

0x7d0c,	// (0x00051e47) misc_graphics

0x96b5,	// (0x000537f0) battery_pane_ParamLimits

0x96b5,	// (0x000537f0) battery_pane

0xa387,	// (0x000544c2) bg_status_flat_pane_g8

0xa38f,	// (0x000544ca) bg_status_flat_pane_g9

0x9777,	// (0x000538b2) context_pane_ParamLimits

0x9777,	// (0x000538b2) context_pane

0x9899,	// (0x000539d4) navi_pane_ParamLimits

0x9899,	// (0x000539d4) navi_pane

0x991d,	// (0x00053a58) signal_pane_ParamLimits

0x991d,	// (0x00053a58) signal_pane

0x0008,

0xf884,	// (0x000599bf) bg_status_flat_pane_g

0x998a,	// (0x00053ac5) status_pane_g1_ParamLimits

0x998a,	// (0x00053ac5) status_pane_g1

0x999e,	// (0x00053ad9) status_pane_g2_ParamLimits

0x999e,	// (0x00053ad9) status_pane_g2

0x99aa,	// (0x00053ae5) status_pane_g3_ParamLimits

0x99aa,	// (0x00053ae5) status_pane_g3

0x0004,

0xf7ab,	// (0x000598e6) status_pane_g_ParamLimits

0xf7ab,	// (0x000598e6) status_pane_g

0x99de,	// (0x00053b19) title_pane_ParamLimits

0x99de,	// (0x00053b19) title_pane

0x9a1b,	// (0x00053b56) uni_indicator_pane_ParamLimits

0x9a1b,	// (0x00053b56) uni_indicator_pane

0x95d9,	// (0x00053714) bg_list_pane_ParamLimits

0x95d9,	// (0x00053714) bg_list_pane

0x7439,	// (0x00051574) find_pane

0x95f9,	// (0x00053734) listscroll_app_pane_ParamLimits

0x95f9,	// (0x00053734) listscroll_app_pane

0x9605,	// (0x00053740) listscroll_form_pane

0x5aad,	// (0x0004fbe8) listscroll_gen_pane_ParamLimits

0x5aad,	// (0x0004fbe8) listscroll_gen_pane

0x5ac1,	// (0x0004fbfc) listscroll_set_pane

0x883c,	// (0x00052977) main_idle_act_pane

0x92df,	// (0x0005341a) main_idle_trad_pane

0x92df,	// (0x0005341a) main_list_empty_pane

0x961f,	// (0x0005375a) main_midp_pane

0x962b,	// (0x00053766) main_pane_g1_ParamLimits

0x962b,	// (0x00053766) main_pane_g1

0x5ad7,	// (0x0004fc12) popup_ai_message_window_ParamLimits

0x5ad7,	// (0x0004fc12) popup_ai_message_window

0x5b85,	// (0x0004fcc0) popup_fep_china_uni_window_ParamLimits

0x5b85,	// (0x0004fcc0) popup_fep_china_uni_window

0x5be1,	// (0x0004fd1c) popup_fep_japan_candidate_window_ParamLimits

0x5be1,	// (0x0004fd1c) popup_fep_japan_candidate_window

0x5c01,	// (0x0004fd3c) popup_fep_japan_predictive_window_ParamLimits

0x5c01,	// (0x0004fd3c) popup_fep_japan_predictive_window

0x5c31,	// (0x0004fd6c) popup_find_window

0x5c3e,	// (0x0004fd79) popup_grid_graphic_window_ParamLimits

0x5c3e,	// (0x0004fd79) popup_grid_graphic_window

0x5c66,	// (0x0004fda1) popup_large_graphic_colour_window

0x5c8c,	// (0x0004fdc7) popup_menu_window_ParamLimits

0x5c8c,	// (0x0004fdc7) popup_menu_window

0x5e44,	// (0x0004ff7f) popup_note_image_window

0x5e30,	// (0x0004ff6b) popup_note_wait_window_ParamLimits

0x5e30,	// (0x0004ff6b) popup_note_wait_window

0x5e30,	// (0x0004ff6b) popup_note_window_ParamLimits

0x5e30,	// (0x0004ff6b) popup_note_window

0x5e9a,	// (0x0004ffd5) popup_query_code_window_ParamLimits

0x5e9a,	// (0x0004ffd5) popup_query_code_window

0x5eae,	// (0x0004ffe9) popup_query_data_code_window_ParamLimits

0x5eae,	// (0x0004ffe9) popup_query_data_code_window

0x5ecb,	// (0x00050006) popup_query_data_window_ParamLimits

0x5ecb,	// (0x00050006) popup_query_data_window

0x5ee7,	// (0x00050022) popup_query_sat_info_window_ParamLimits

0x5ee7,	// (0x00050022) popup_query_sat_info_window

0x5f20,	// (0x0005005b) popup_snote_single_graphic_window_ParamLimits

0x5f20,	// (0x0005005b) popup_snote_single_graphic_window

0x5f20,	// (0x0005005b) popup_snote_single_text_window_ParamLimits

0x5f20,	// (0x0005005b) popup_snote_single_text_window

0x5f35,	// (0x00050070) popup_sub_window_general

0x6065,	// (0x000501a0) popup_window_general_ParamLimits

0x6065,	// (0x000501a0) popup_window_general

0x9639,	// (0x00053774) power_save_pane

0x5949,	// (0x0004fa84) control_pane_g1_ParamLimits

0x5949,	// (0x0004fa84) control_pane_g1

0x5970,	// (0x0004faab) control_pane_g2_ParamLimits

0x5970,	// (0x0004faab) control_pane_g2

0x959c,	// (0x000536d7) control_pane_g3_ParamLimits

0x959c,	// (0x000536d7) control_pane_g3

0x0007,

0xf793,	// (0x000598ce) control_pane_g_ParamLimits

0xf793,	// (0x000598ce) control_pane_g

0x59ba,	// (0x0004faf5) control_pane_t1_ParamLimits

0x59ba,	// (0x0004faf5) control_pane_t1

0x5a06,	// (0x0004fb41) control_pane_t2_ParamLimits

0x5a06,	// (0x0004fb41) control_pane_t2

0x0002,

0xf7a4,	// (0x000598df) control_pane_t_ParamLimits

0xf7a4,	// (0x000598df) control_pane_t

0x94bd,	// (0x000535f8) navi_navi_volume_pane_cp1

0x94c6,	// (0x00053601) status_small_icon_pane

0x94ce,	// (0x00053609) status_small_pane_g1_ParamLimits

0x94ce,	// (0x00053609) status_small_pane_g1

0x9502,	// (0x0005363d) status_small_pane_g2_ParamLimits

0x9502,	// (0x0005363d) status_small_pane_g2

0x950e,	// (0x00053649) status_small_pane_g3_ParamLimits

0x950e,	// (0x00053649) status_small_pane_g3

0x951a,	// (0x00053655) status_small_pane_g4_ParamLimits

0x951a,	// (0x00053655) status_small_pane_g4

0x9526,	// (0x00053661) status_small_pane_g5_ParamLimits

0x9526,	// (0x00053661) status_small_pane_g5

0x9535,	// (0x00053670) status_small_pane_g6_ParamLimits

0x9535,	// (0x00053670) status_small_pane_g6

0x0007,

0xf782,	// (0x000598bd) status_small_pane_g_ParamLimits

0xf782,	// (0x000598bd) status_small_pane_g

0x9565,	// (0x000536a0) status_small_pane_t1

0x9588,	// (0x000536c3) status_small_wait_pane_ParamLimits

0x9588,	// (0x000536c3) status_small_wait_pane

0x8d5c,	// (0x00052e97) aid_levels_signal_ParamLimits

0x8d5c,	// (0x00052e97) aid_levels_signal

0x8d6e,	// (0x00052ea9) signal_pane_g1_ParamLimits

0x8d6e,	// (0x00052ea9) signal_pane_g1

0x8d83,	// (0x00052ebe) signal_pane_g2_ParamLimits

0x8d83,	// (0x00052ebe) signal_pane_g2

0x0003,

0xf713,	// (0x0005984e) signal_pane_g_ParamLimits

0xf713,	// (0x0005984e) signal_pane_g

0x8dbe,	// (0x00052ef9) context_pane_g1

0x7d16,	// (0x00051e51) title_pane_g1

0x7d4c,	// (0x00051e87) title_pane_t1

0x7db4,	// (0x00051eef) title_pane_t2

0x7dda,	// (0x00051f15) title_pane_t3

0x0002,

0xf55d,	// (0x00059698) title_pane_t

0x9a33,	// (0x00053b6e) aid_levels_battery_ParamLimits

0x9a33,	// (0x00053b6e) aid_levels_battery

0x9a47,	// (0x00053b82) battery_pane_g1_ParamLimits

0x9a47,	// (0x00053b82) battery_pane_g1

0x9a5d,	// (0x00053b98) battery_pane_g2_ParamLimits

0x9a5d,	// (0x00053b98) battery_pane_g2

0x0001,

0xf7b6,	// (0x000598f1) battery_pane_g_ParamLimits

0xf7b6,	// (0x000598f1) battery_pane_g

0xacbd,	// (0x00054df8) uni_indicator_pane_g1

0xacd4,	// (0x00054e0f) uni_indicator_pane_g2

0xace7,	// (0x00054e22) uni_indicator_pane_g3

0x0005,

0xf92c,	// (0x00059a67) uni_indicator_pane_g

0x9151,	// (0x0005328c) navi_icon_pane_ParamLimits

0x9151,	// (0x0005328c) navi_icon_pane

0x909a,	// (0x000531d5) navi_midp_pane

0x916d,	// (0x000532a8) navi_navi_pane

0x9177,	// (0x000532b2) navi_text_pane_ParamLimits

0x9177,	// (0x000532b2) navi_text_pane

0x7d02,	// (0x00051e3d) status_small_wait_pane_g1

0x8209,	// (0x00052344) status_small_wait_pane_g2

0x0001,

0xf927,	// (0x00059a62) status_small_wait_pane_g

0xa9e2,	// (0x00054b1d) navi_navi_icon_text_pane

0xa9ea,	// (0x00054b25) navi_navi_pane_g1_ParamLimits

0xa9ea,	// (0x00054b25) navi_navi_pane_g1

0xa9fc,	// (0x00054b37) navi_navi_pane_g2_ParamLimits

0xa9fc,	// (0x00054b37) navi_navi_pane_g2

0x0001,

0xf8f5,	// (0x00059a30) navi_navi_pane_g_ParamLimits

0xf8f5,	// (0x00059a30) navi_navi_pane_g

0xaa0e,	// (0x00054b49) navi_navi_tabs_pane

0xaa17,	// (0x00054b52) navi_navi_text_pane

0xa9e2,	// (0x00054b1d) navi_navi_volume_pane

0xa9be,	// (0x00054af9) navi_text_pane_t1

0xa9b2,	// (0x00054aed) navi_icon_pane_g1

0xa905,	// (0x00054a40) navi_navi_text_pane_t1

0x634b,	// (0x00050486) navi_navi_volume_pane_g1

0x6353,	// (0x0005048e) volume_small_pane

0xa86b,	// (0x000549a6) navi_navi_icon_text_pane_g1

0xa873,	// (0x000549ae) navi_navi_icon_text_pane_t1

0x916d,	// (0x000532a8) navi_tabs_2_long_pane

0x916d,	// (0x000532a8) navi_tabs_2_pane

0x916d,	// (0x000532a8) navi_tabs_3_long_pane

0x916d,	// (0x000532a8) navi_tabs_3_pane

0x916d,	// (0x000532a8) navi_tabs_4_pane

0x632b,	// (0x00050466) tabs_2_active_pane_ParamLimits

0x632b,	// (0x00050466) tabs_2_active_pane

0x633b,	// (0x00050476) tabs_2_passive_pane_ParamLimits

0x633b,	// (0x00050476) tabs_2_passive_pane

0x62f9,	// (0x00050434) tabs_3_active_pane_ParamLimits

0x62f9,	// (0x00050434) tabs_3_active_pane

0x6309,	// (0x00050444) tabs_3_passive_pane_ParamLimits

0x6309,	// (0x00050444) tabs_3_passive_pane

0x631a,	// (0x00050455) tabs_3_passive_pane_cp_ParamLimits

0x631a,	// (0x00050455) tabs_3_passive_pane_cp

0x62b5,	// (0x000503f0) tabs_4_active_pane_ParamLimits

0x62b5,	// (0x000503f0) tabs_4_active_pane

0x62c6,	// (0x00050401) tabs_4_passive_pane_ParamLimits

0x62c6,	// (0x00050401) tabs_4_passive_pane

0x62d7,	// (0x00050412) tabs_4_passive_pane_cp_ParamLimits

0x62d7,	// (0x00050412) tabs_4_passive_pane_cp

0x62e8,	// (0x00050423) tabs_4_passive_pane_cp2_ParamLimits

0x62e8,	// (0x00050423) tabs_4_passive_pane_cp2

0x6291,	// (0x000503cc) tabs_2_long_active_pane_ParamLimits

0x6291,	// (0x000503cc) tabs_2_long_active_pane

0x62a3,	// (0x000503de) tabs_2_long_passive_pane_ParamLimits

0x62a3,	// (0x000503de) tabs_2_long_passive_pane

0x6252,	// (0x0005038d) tabs_3_long_active_pane_ParamLimits

0x6252,	// (0x0005038d) tabs_3_long_active_pane

0x6265,	// (0x000503a0) tabs_3_long_passive_pane_ParamLimits

0x6265,	// (0x000503a0) tabs_3_long_passive_pane

0x627e,	// (0x000503b9) tabs_3_long_passive_pane_cp_ParamLimits

0x627e,	// (0x000503b9) tabs_3_long_passive_pane_cp

0x61f8,	// (0x00050333) volume_small_pane_g1

0x6201,	// (0x0005033c) volume_small_pane_g2

0x620a,	// (0x00050345) volume_small_pane_g3

0x6213,	// (0x0005034e) volume_small_pane_g4

0x621c,	// (0x00050357) volume_small_pane_g5

0x6225,	// (0x00050360) volume_small_pane_g6

0x622e,	// (0x00050369) volume_small_pane_g7

0x6237,	// (0x00050372) volume_small_pane_g8

0x6240,	// (0x0005037b) volume_small_pane_g9

0x6249,	// (0x00050384) volume_small_pane_g10

0x0009,

0xf8c1,	// (0x000599fc) volume_small_pane_g

0x7dec,	// (0x00051f27) bg_active_tab_pane_cp2_ParamLimits

0x7dec,	// (0x00051f27) bg_active_tab_pane_cp2

0x7dfa,	// (0x00051f35) tabs_3_active_pane_g1

0x7e02,	// (0x00051f3d) tabs_3_active_pane_t1

0x7dec,	// (0x00051f27) bg_passive_tab_pane_cp2_ParamLimits

0x7dec,	// (0x00051f27) bg_passive_tab_pane_cp2

0x7dfa,	// (0x00051f35) tabs_3_passive_pane_g1

0x7e02,	// (0x00051f3d) tabs_3_passive_pane_t1

0x7dec,	// (0x00051f27) bg_active_tab_pane_cp3_ParamLimits

0x7dec,	// (0x00051f27) bg_active_tab_pane_cp3

0x7e14,	// (0x00051f4f) tabs_4_active_pane_g1

0x7e1c,	// (0x00051f57) tabs_4_active_pane_t1

0x7dec,	// (0x00051f27) bg_passive_tab_pane_cp3_ParamLimits

0x7dec,	// (0x00051f27) bg_passive_tab_pane_cp3

0x7e14,	// (0x00051f4f) tabs_4_1_passive_pane_g1

0x7e1c,	// (0x00051f57) tabs_4_1_passive_pane_t1

0x961f,	// (0x0005375a) list_highlight_pane_cp2

0xaf2d,	// (0x00055068) list_set_pane_ParamLimits

0xaf2d,	// (0x00055068) list_set_pane

0xafd3,	// (0x0005510e) main_pane_set_t1_ParamLimits

0xafd3,	// (0x0005510e) main_pane_set_t1

0xaff3,	// (0x0005512e) main_pane_set_t2_ParamLimits

0xaff3,	// (0x0005512e) main_pane_set_t2

0xb007,	// (0x00055142) main_pane_set_t3_ParamLimits

0xb007,	// (0x00055142) main_pane_set_t3

0xb019,	// (0x00055154) main_pane_set_t4_ParamLimits

0xb019,	// (0x00055154) main_pane_set_t4

0x0003,

0xf991,	// (0x00059acc) main_pane_set_t_ParamLimits

0xf991,	// (0x00059acc) main_pane_set_t

0xb02b,	// (0x00055166) setting_code_pane

0xb037,	// (0x00055172) setting_slider_graphic_pane

0xb037,	// (0x00055172) setting_slider_pane

0xb037,	// (0x00055172) setting_text_pane

0xb037,	// (0x00055172) setting_volume_pane

0x4cd7,	// (0x0004ee12) volume_set_pane

0x7dec,	// (0x00051f27) bg_set_opt_pane_cp

0x4cdf,	// (0x0004ee1a) setting_slider_pane_t1

0x4cf8,	// (0x0004ee33) setting_slider_pane_t2

0x4d12,	// (0x0004ee4d) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0005969f) setting_slider_pane_t

0x4d2a,	// (0x0004ee65) slider_set_pane

0x7d0c,	// (0x00051e47) bg_set_opt_pane_cp2

0x7e2e,	// (0x00051f69) setting_slider_graphic_pane_g1

0x4d40,	// (0x0004ee7b) setting_slider_graphic_pane_t1

0x4d50,	// (0x0004ee8b) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x000596a6) setting_slider_graphic_pane_t

0x4d60,	// (0x0004ee9b) slider_set_pane_cp

0x7d0c,	// (0x00051e47) input_focus_pane_cp1

0xaeec,	// (0x00055027) list_set_text_pane

0x7d02,	// (0x00051e3d) setting_text_pane_g1

0x7d0c,	// (0x00051e47) input_focus_pane_cp2

0x7d02,	// (0x00051e3d) setting_code_pane_g1

0x7e37,	// (0x00051f72) setting_code_pane_t1

0x4d68,	// (0x0004eea3) set_text_pane_t1_ParamLimits

0x4d68,	// (0x0004eea3) set_text_pane_t1

0x86b3,	// (0x000527ee) set_opt_bg_pane_g1

0x86bb,	// (0x000527f6) set_opt_bg_pane_g2

0xaec6,	// (0x00055001) set_opt_bg_pane_g3

0x86cb,	// (0x00052806) set_opt_bg_pane_g4

0x86d3,	// (0x0005280e) set_opt_bg_pane_g5

0x86db,	// (0x00052816) set_opt_bg_pane_g6

0xaed0,	// (0x0005500b) set_opt_bg_pane_g7

0xaed8,	// (0x00055013) set_opt_bg_pane_g8

0xaee2,	// (0x0005501d) set_opt_bg_pane_g9

0x0008,

0xf97e,	// (0x00059ab9) set_opt_bg_pane_g

0xaeb9,	// (0x00054ff4) slider_set_pane_g1

0x63c0,	// (0x000504fb) slider_set_pane_g2

0x0006,

0xf96f,	// (0x00059aaa) slider_set_pane_g

0x635c,	// (0x00050497) volume_set_pane_g1

0x6364,	// (0x0005049f) volume_set_pane_g2

0x636c,	// (0x000504a7) volume_set_pane_g3

0x6374,	// (0x000504af) volume_set_pane_g4

0x637c,	// (0x000504b7) volume_set_pane_g5

0x6384,	// (0x000504bf) volume_set_pane_g6

0x638c,	// (0x000504c7) volume_set_pane_g7

0x6394,	// (0x000504cf) volume_set_pane_g8

0x639c,	// (0x000504d7) volume_set_pane_g9

0x63a4,	// (0x000504df) volume_set_pane_g10

0x0009,

0xf947,	// (0x00059a82) volume_set_pane_g

0x7e45,	// (0x00051f80) indicator_pane_ParamLimits

0x7e45,	// (0x00051f80) indicator_pane

0x7e51,	// (0x00051f8c) main_idle_pane_g2_ParamLimits

0x7e51,	// (0x00051f8c) main_idle_pane_g2

0x7e79,	// (0x00051fb4) main_pane_idle_g1_ParamLimits

0x7e79,	// (0x00051fb4) main_pane_idle_g1

0x7e86,	// (0x00051fc1) popup_clock_digital_analogue_window_ParamLimits

0x7e86,	// (0x00051fc1) popup_clock_digital_analogue_window

0x7e9d,	// (0x00051fd8) soft_indicator_pane_ParamLimits

0x7e9d,	// (0x00051fd8) soft_indicator_pane

0x7ea9,	// (0x00051fe4) wallpaper_pane_ParamLimits

0x7ea9,	// (0x00051fe4) wallpaper_pane

0x7d02,	// (0x00051e3d) wallpaper_pane_g1

0x7ebd,	// (0x00051ff8) indicator_pane_g1_ParamLimits

0x7ebd,	// (0x00051ff8) indicator_pane_g1

0xb2d1,	// (0x0005540c) navi_navi_icon_text_pane_srt_g1

0x7ed8,	// (0x00052013) soft_indicator_pane_t1

0x7ef2,	// (0x0005202d) aid_ps_area_pane

0x7f03,	// (0x0005203e) aid_ps_clock_pane

0x7f11,	// (0x0005204c) aid_ps_indicator_pane

0x7f1d,	// (0x00052058) indicator_ps_pane_ParamLimits

0x7f1d,	// (0x00052058) indicator_ps_pane

0x7f2c,	// (0x00052067) power_save_pane_g1_ParamLimits

0x7f2c,	// (0x00052067) power_save_pane_g1

0x7f38,	// (0x00052073) power_save_pane_g2_ParamLimits

0x7f38,	// (0x00052073) power_save_pane_g2

0x48de,	// (0x0004ea19) aid_navinavi_width_pane

0x7ef2,	// (0x0005202d) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x000596ab) power_save_pane_g_ParamLimits

0xf570,	// (0x000596ab) power_save_pane_g

0x7f46,	// (0x00052081) power_save_pane_t1_ParamLimits

0x7f46,	// (0x00052081) power_save_pane_t1

0x7f03,	// (0x0005203e) aid_ps_clock_pane_ParamLimits

0x7f11,	// (0x0005204c) aid_ps_indicator_pane_ParamLimits

0x7f58,	// (0x00052093) power_save_pane_t4_ParamLimits

0x7f58,	// (0x00052093) power_save_pane_t4

0x0001,

0xf575,	// (0x000596b0) power_save_pane_t_ParamLimits

0xf575,	// (0x000596b0) power_save_pane_t

0x7f82,	// (0x000520bd) power_save_t3_ParamLimits

0x7f82,	// (0x000520bd) power_save_t3

0x7f6d,	// (0x000520a8) power_save_t2_ParamLimits

0x7f6d,	// (0x000520a8) power_save_t2

0x7f97,	// (0x000520d2) indicator_ps_pane_g1

0x7fa0,	// (0x000520db) ai_gene_pane_ParamLimits

0x7fa0,	// (0x000520db) ai_gene_pane

0x7fac,	// (0x000520e7) ai_links_pane_ParamLimits

0x7fac,	// (0x000520e7) ai_links_pane

0x7fb8,	// (0x000520f3) indicator_pane_cp1_ParamLimits

0x7fb8,	// (0x000520f3) indicator_pane_cp1

0x7fc4,	// (0x000520ff) main_pane_idle_g1_cp_ParamLimits

0x7fc4,	// (0x000520ff) main_pane_idle_g1_cp

0x7fd0,	// (0x0005210b) popup_ai_links_title_window

0x7fd9,	// (0x00052114) soft_indicator_pane_cp1_ParamLimits

0x7fd9,	// (0x00052114) soft_indicator_pane_cp1

0xacab,	// (0x00054de6) ai_links_pane_g1

0xacb4,	// (0x00054def) grid_ai_links_pane

0xac8e,	// (0x00054dc9) ai_gene_pane_1

0xac99,	// (0x00054dd4) ai_gene_pane_2

0xaca2,	// (0x00054ddd) list_highlight_pane_cp4

0xac72,	// (0x00054dad) cell_ai_link_pane_ParamLimits

0xac72,	// (0x00054dad) cell_ai_link_pane

0xac6a,	// (0x00054da5) cell_ai_link_pane_g1

0x8209,	// (0x00052344) cell_ai_link_pane_g2

0x0001,

0xf922,	// (0x00059a5d) cell_ai_link_pane_g

0x7d0c,	// (0x00051e47) grid_highlight_cp2

0x7d0c,	// (0x00051e47) bg_popup_sub_pane_cp1

0x7ff3,	// (0x0005212e) popup_ai_links_title_window_t1

0xabb8,	// (0x00054cf3) ai_gene_pane_1_g1_ParamLimits

0xabb8,	// (0x00054cf3) ai_gene_pane_1_g1

0xabc4,	// (0x00054cff) ai_gene_pane_1_g2_ParamLimits

0xabc4,	// (0x00054cff) ai_gene_pane_1_g2

0x0001,

0xf918,	// (0x00059a53) ai_gene_pane_1_g_ParamLimits

0xf918,	// (0x00059a53) ai_gene_pane_1_g

0xabd1,	// (0x00054d0c) ai_gene_pane_1_t1_ParamLimits

0xabd1,	// (0x00054d0c) ai_gene_pane_1_t1

0xac05,	// (0x00054d40) grid_ai_soft_ind_pane

0xaba3,	// (0x00054cde) ai_gene_pane_2_t1_ParamLimits

0xaba3,	// (0x00054cde) ai_gene_pane_2_t1

0x8002,	// (0x0005213d) main_pane_empty_t1_ParamLimits

0x8002,	// (0x0005213d) main_pane_empty_t1

0x801a,	// (0x00052155) main_pane_empty_t2_ParamLimits

0x801a,	// (0x00052155) main_pane_empty_t2

0x802f,	// (0x0005216a) main_pane_empty_t3_ParamLimits

0x802f,	// (0x0005216a) main_pane_empty_t3

0x8041,	// (0x0005217c) main_pane_empty_t4_ParamLimits

0x8041,	// (0x0005217c) main_pane_empty_t4

0x8053,	// (0x0005218e) main_pane_empty_t5_ParamLimits

0x8053,	// (0x0005218e) main_pane_empty_t5

0x0004,

0xf57a,	// (0x000596b5) main_pane_empty_t_ParamLimits

0xf57a,	// (0x000596b5) main_pane_empty_t

0x8704,	// (0x0005283f) bg_popup_window_pane_ParamLimits

0x8704,	// (0x0005283f) bg_popup_window_pane

0xa913,	// (0x00054a4e) find_popup_pane_cp2_ParamLimits

0xa913,	// (0x00054a4e) find_popup_pane_cp2

0xa91f,	// (0x00054a5a) heading_pane_ParamLimits

0xa91f,	// (0x00054a5a) heading_pane

0x7d0c,	// (0x00051e47) bg_popup_sub_pane

0xa88d,	// (0x000549c8) bg_popup_window_pane_g1_ParamLimits

0xa88d,	// (0x000549c8) bg_popup_window_pane_g1

0xa899,	// (0x000549d4) bg_popup_window_pane_g2_ParamLimits

0xa899,	// (0x000549d4) bg_popup_window_pane_g2

0xa8a5,	// (0x000549e0) bg_popup_window_pane_g3_ParamLimits

0xa8a5,	// (0x000549e0) bg_popup_window_pane_g3

0xa8b1,	// (0x000549ec) bg_popup_window_pane_g4_ParamLimits

0xa8b1,	// (0x000549ec) bg_popup_window_pane_g4

0xa8bd,	// (0x000549f8) bg_popup_window_pane_g5_ParamLimits

0xa8bd,	// (0x000549f8) bg_popup_window_pane_g5

0xa8c9,	// (0x00054a04) bg_popup_window_pane_g6_ParamLimits

0xa8c9,	// (0x00054a04) bg_popup_window_pane_g6

0xa8d5,	// (0x00054a10) bg_popup_window_pane_g7_ParamLimits

0xa8d5,	// (0x00054a10) bg_popup_window_pane_g7

0xa8e1,	// (0x00054a1c) bg_popup_window_pane_g8_ParamLimits

0xa8e1,	// (0x00054a1c) bg_popup_window_pane_g8

0xa8ed,	// (0x00054a28) bg_popup_window_pane_g9_ParamLimits

0xa8ed,	// (0x00054a28) bg_popup_window_pane_g9

0xa8f9,	// (0x00054a34) bg_popup_window_pane_g10_ParamLimits

0xa8f9,	// (0x00054a34) bg_popup_window_pane_g10

0x0009,

0xf8e0,	// (0x00059a1b) bg_popup_window_pane_g_ParamLimits

0xf8e0,	// (0x00059a1b) bg_popup_window_pane_g

0xa822,	// (0x0005495d) bg_popup_heading_pane_ParamLimits

0xa822,	// (0x0005495d) bg_popup_heading_pane

0x6448,	// (0x00050583) tabs_4_passive_pane_cp_srt_ParamLimits

0x6448,	// (0x00050583) tabs_4_passive_pane_cp_srt

0x645a,	// (0x00050595) tabs_4_passive_pane_srt_ParamLimits

0xa836,	// (0x00054971) heading_pane_g2

0x645a,	// (0x00050595) tabs_4_passive_pane_srt

0x961f,	// (0x0005375a) bg_passive_tab_pane_cp3_srt_ParamLimits

0x961f,	// (0x0005375a) bg_passive_tab_pane_cp3_srt

0xa83e,	// (0x00054979) heading_pane_t1_ParamLimits

0xa83e,	// (0x00054979) heading_pane_t1

0xa855,	// (0x00054990) heading_pane_t2_ParamLimits

0xa855,	// (0x00054990) heading_pane_t2

0x0001,

0xf8db,	// (0x00059a16) heading_pane_t_ParamLimits

0xf8db,	// (0x00059a16) heading_pane_t

0xa34f,	// (0x0005448a) bg_popup_heading_pane_g1

0xa3fe,	// (0x00054539) bg_popup_heading_pane_g2

0xa408,	// (0x00054543) bg_popup_heading_pane_g3

0xa412,	// (0x0005454d) bg_popup_heading_pane_g4

0xa41c,	// (0x00054557) bg_popup_heading_pane_g5

0xa426,	// (0x00054561) bg_popup_heading_pane_g6

0xa42e,	// (0x00054569) bg_popup_heading_pane_g7

0xa436,	// (0x00054571) bg_popup_heading_pane_g8

0xa440,	// (0x0005457b) bg_popup_heading_pane_g9

0x0008,

0xf897,	// (0x000599d2) bg_popup_heading_pane_g

0x9b35,	// (0x00053c70) bg_popup_sub_pane_g1

0x9b45,	// (0x00053c80) bg_popup_sub_pane_g2

0x9b3d,	// (0x00053c78) bg_popup_sub_pane_g3

0x9b55,	// (0x00053c90) bg_popup_sub_pane_g4

0x9b4d,	// (0x00053c88) bg_popup_sub_pane_g5

0x9b5d,	// (0x00053c98) bg_popup_sub_pane_g6

0x9b65,	// (0x00053ca0) bg_popup_sub_pane_g7

0x9b75,	// (0x00053cb0) bg_popup_sub_pane_g8

0x9b6d,	// (0x00053ca8) bg_popup_sub_pane_g9

0x0008,

0xf871,	// (0x000599ac) bg_popup_sub_pane_g

0x8067,	// (0x000521a2) bg_popup_window_pane_cp5_ParamLimits

0x8067,	// (0x000521a2) bg_popup_window_pane_cp5

0x8083,	// (0x000521be) popup_note_window_g1_ParamLimits

0x8083,	// (0x000521be) popup_note_window_g1

0x808f,	// (0x000521ca) popup_note_window_t1_ParamLimits

0x808f,	// (0x000521ca) popup_note_window_t1

0x80a5,	// (0x000521e0) popup_note_window_t2_ParamLimits

0x80a5,	// (0x000521e0) popup_note_window_t2

0x80bb,	// (0x000521f6) popup_note_window_t3_ParamLimits

0x80bb,	// (0x000521f6) popup_note_window_t3

0x80d1,	// (0x0005220c) popup_note_window_t4_ParamLimits

0x80d1,	// (0x0005220c) popup_note_window_t4

0x80f9,	// (0x00052234) popup_note_window_t5_ParamLimits

0x80f9,	// (0x00052234) popup_note_window_t5

0x0004,

0xf585,	// (0x000596c0) popup_note_window_t_ParamLimits

0xf585,	// (0x000596c0) popup_note_window_t

0x811d,	// (0x00052258) bg_popup_window_pane_cp6_ParamLimits

0x811d,	// (0x00052258) bg_popup_window_pane_cp6

0xa2cb,	// (0x00054406) popup_note_image_window_g1_ParamLimits

0xa2cb,	// (0x00054406) popup_note_image_window_g1

0xa2d7,	// (0x00054412) popup_note_image_window_g2_ParamLimits

0xa2d7,	// (0x00054412) popup_note_image_window_g2

0x0001,

0xf865,	// (0x000599a0) popup_note_image_window_g_ParamLimits

0xf865,	// (0x000599a0) popup_note_image_window_g

0xa2f0,	// (0x0005442b) popup_note_image_window_t1_ParamLimits

0xa2f0,	// (0x0005442b) popup_note_image_window_t1

0xa309,	// (0x00054444) popup_note_image_window_t2_ParamLimits

0xa309,	// (0x00054444) popup_note_image_window_t2

0xa322,	// (0x0005445d) popup_note_image_window_t3_ParamLimits

0xa322,	// (0x0005445d) popup_note_image_window_t3

0x0002,

0xf86a,	// (0x000599a5) popup_note_image_window_t_ParamLimits

0xf86a,	// (0x000599a5) popup_note_image_window_t

0xa18c,	// (0x000542c7) bg_popup_window_pane_cp7_ParamLimits

0xa18c,	// (0x000542c7) bg_popup_window_pane_cp7

0xa1bc,	// (0x000542f7) popup_note_wait_window_g1_ParamLimits

0xa1bc,	// (0x000542f7) popup_note_wait_window_g1

0xa1c8,	// (0x00054303) popup_note_wait_window_g2_ParamLimits

0xa1c8,	// (0x00054303) popup_note_wait_window_g2

0x0002,

0xf853,	// (0x0005998e) popup_note_wait_window_g_ParamLimits

0xf853,	// (0x0005998e) popup_note_wait_window_g

0xa1e0,	// (0x0005431b) popup_note_wait_window_t1_ParamLimits

0xa1e0,	// (0x0005431b) popup_note_wait_window_t1

0xa207,	// (0x00054342) popup_note_wait_window_t2_ParamLimits

0xa207,	// (0x00054342) popup_note_wait_window_t2

0xa224,	// (0x0005435f) popup_note_wait_window_t3_ParamLimits

0xa224,	// (0x0005435f) popup_note_wait_window_t3

0xa237,	// (0x00054372) popup_note_wait_window_t4_ParamLimits

0xa237,	// (0x00054372) popup_note_wait_window_t4

0x0004,

0xf85a,	// (0x00059995) popup_note_wait_window_t_ParamLimits

0xf85a,	// (0x00059995) popup_note_wait_window_t

0xa25c,	// (0x00054397) wait_bar_pane_ParamLimits

0xa25c,	// (0x00054397) wait_bar_pane

0x7d0c,	// (0x00051e47) wait_anim_pane

0x7d0c,	// (0x00051e47) wait_border_pane

0x7d02,	// (0x00051e3d) wait_anim_pane_g1

0x7d02,	// (0x00051e3d) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x00059849) wait_anim_pane_g

0xa130,	// (0x0005426b) wait_border_pane_g1

0xa13b,	// (0x00054276) wait_border_pane_g2

0xa144,	// (0x0005427f) wait_border_pane_g3

0x0002,

0xf84c,	// (0x00059987) wait_border_pane_g

0x9f9b,	// (0x000540d6) bg_popup_window_pane_cp16_ParamLimits

0x9f9b,	// (0x000540d6) bg_popup_window_pane_cp16

0xa09b,	// (0x000541d6) indicator_popup_pane_cp4_ParamLimits

0xa09b,	// (0x000541d6) indicator_popup_pane_cp4

0xa0af,	// (0x000541ea) popup_query_data_window_t1_ParamLimits

0xa0af,	// (0x000541ea) popup_query_data_window_t1

0xa0c1,	// (0x000541fc) popup_query_data_window_t2_ParamLimits

0xa0c1,	// (0x000541fc) popup_query_data_window_t2

0xa0da,	// (0x00054215) popup_query_data_window_t3_ParamLimits

0xa0da,	// (0x00054215) popup_query_data_window_t3

0x0002,

0xf845,	// (0x00059980) popup_query_data_window_t_ParamLimits

0xf845,	// (0x00059980) popup_query_data_window_t

0xa0f4,	// (0x0005422f) query_popup_data_pane_ParamLimits

0xa0f4,	// (0x0005422f) query_popup_data_pane

0xa108,	// (0x00054243) query_popup_data_pane_cp1_ParamLimits

0xa108,	// (0x00054243) query_popup_data_pane_cp1

0x9f9b,	// (0x000540d6) bg_popup_window_pane_cp10_ParamLimits

0x9f9b,	// (0x000540d6) bg_popup_window_pane_cp10

0x9fcd,	// (0x00054108) indicator_popup_pane_ParamLimits

0x9fcd,	// (0x00054108) indicator_popup_pane

0x9fef,	// (0x0005412a) popup_query_code_window_t1_ParamLimits

0x9fef,	// (0x0005412a) popup_query_code_window_t1

0xa009,	// (0x00054144) popup_query_code_window_t2_ParamLimits

0xa009,	// (0x00054144) popup_query_code_window_t2

0xa052,	// (0x0005418d) popup_query_code_window_t3_ParamLimits

0xa052,	// (0x0005418d) popup_query_code_window_t3

0x0002,

0xf83e,	// (0x00059979) popup_query_code_window_t_ParamLimits

0xf83e,	// (0x00059979) popup_query_code_window_t

0xa081,	// (0x000541bc) query_popup_pane_ParamLimits

0xa081,	// (0x000541bc) query_popup_pane

0x811d,	// (0x00052258) bg_popup_window_pane_cp15_ParamLimits

0x811d,	// (0x00052258) bg_popup_window_pane_cp15

0x813b,	// (0x00052276) indicator_popup_pane_cp1_ParamLimits

0x813b,	// (0x00052276) indicator_popup_pane_cp1

0x814e,	// (0x00052289) indicator_popup_pane_cp2_ParamLimits

0x814e,	// (0x00052289) indicator_popup_pane_cp2

0x8161,	// (0x0005229c) popup_query_data_code_window_g1_ParamLimits

0x8161,	// (0x0005229c) popup_query_data_code_window_g1

0x8174,	// (0x000522af) popup_query_data_code_window_t1_ParamLimits

0x8174,	// (0x000522af) popup_query_data_code_window_t1

0x8186,	// (0x000522c1) popup_query_data_code_window_t2_ParamLimits

0x8186,	// (0x000522c1) popup_query_data_code_window_t2

0x8198,	// (0x000522d3) popup_query_data_code_window_t3_ParamLimits

0x8198,	// (0x000522d3) popup_query_data_code_window_t3

0x81ae,	// (0x000522e9) popup_query_data_code_window_t4_ParamLimits

0x81ae,	// (0x000522e9) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x000596cb) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x000596cb) popup_query_data_code_window_t

0x60f1,	// (0x0005022c) list_single_midp_graphic_pane_g3

0x81c6,	// (0x00052301) query_popup_data_pane_cp2_ParamLimits

0x81d9,	// (0x00052314) query_popup_pane_cp2_ParamLimits

0x81d9,	// (0x00052314) query_popup_pane_cp2

0x7d0c,	// (0x00051e47) bg_popup_window_pane_cp11

0x9f93,	// (0x000540ce) heading_pane_cp5

0x82c1,	// (0x000523fc) listscroll_popup_info_pane

0x7d0c,	// (0x00051e47) input_focus_pane_cp3

0x81ec,	// (0x00052327) query_popup_pane_t1

0x81fa,	// (0x00052335) list_popup_info_pane_ParamLimits

0x81fa,	// (0x00052335) list_popup_info_pane

0x8209,	// (0x00052344) listscroll_popup_info_pane_g1

0x8211,	// (0x0005234c) scroll_pane_cp7

0x821b,	// (0x00052356) popup_info_list_pane_t1_ParamLimits

0x821b,	// (0x00052356) popup_info_list_pane_t1

0x8235,	// (0x00052370) popup_info_list_pane_t2_ParamLimits

0x8235,	// (0x00052370) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x000596d4) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x000596d4) popup_info_list_pane_t

0x7d0c,	// (0x00051e47) bg_popup_window_pane_cp12

0xb2eb,	// (0x00055426) find_popup_pane

0x7dec,	// (0x00051f27) bg_popup_window_pane_cp3

0x824f,	// (0x0005238a) heading_pane_cp3

0x825b,	// (0x00052396) listscroll_popup_graphic_pane

0x7d0c,	// (0x00051e47) bg_popup_window_pane_cp4

0x82b7,	// (0x000523f2) heading_pane_cp4

0x82c1,	// (0x000523fc) listscroll_popup_colour_pane

0x82c9,	// (0x00052404) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x82c9,	// (0x00052404) cell_large_graphic_colour_none_popup_pane

0x82dd,	// (0x00052418) grid_large_graphic_colour_popup_pane_ParamLimits

0x82dd,	// (0x00052418) grid_large_graphic_colour_popup_pane

0x8309,	// (0x00052444) listscroll_popup_colour_pane_g1_ParamLimits

0x8309,	// (0x00052444) listscroll_popup_colour_pane_g1

0x8320,	// (0x0005245b) listscroll_popup_colour_pane_g2_ParamLimits

0x8320,	// (0x0005245b) listscroll_popup_colour_pane_g2

0x8337,	// (0x00052472) listscroll_popup_colour_pane_g3_ParamLimits

0x8337,	// (0x00052472) listscroll_popup_colour_pane_g3

0x8347,	// (0x00052482) listscroll_popup_colour_pane_g4_ParamLimits

0x8347,	// (0x00052482) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x000596d9) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x000596d9) listscroll_popup_colour_pane_g

0x835b,	// (0x00052496) scroll_pane_cp6_ParamLimits

0x835b,	// (0x00052496) scroll_pane_cp6

0x836d,	// (0x000524a8) cell_large_graphic_colour_popup_pane_ParamLimits

0x836d,	// (0x000524a8) cell_large_graphic_colour_popup_pane

0x838c,	// (0x000524c7) cell_large_graphic_colour_none_popup_pane_t1

0x7d0c,	// (0x00051e47) grid_highlight_pane_cp5

0x839b,	// (0x000524d6) cell_large_graphic_colour_popup_pane_g1

0x83a3,	// (0x000524de) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000596e2) cell_large_graphic_colour_popup_pane_g

0x83ab,	// (0x000524e6) cell_large_graphic_colour_popup_pane_g2_copy1

0x83b4,	// (0x000524ef) grid_highlight_pane_cp4

0x83bc,	// (0x000524f7) bg_popup_window_pane_cp8_ParamLimits

0x83bc,	// (0x000524f7) bg_popup_window_pane_cp8

0x83d7,	// (0x00052512) popup_snote_single_text_window_g1_ParamLimits

0x83d7,	// (0x00052512) popup_snote_single_text_window_g1

0x83e9,	// (0x00052524) popup_snote_single_text_window_t1_ParamLimits

0x83e9,	// (0x00052524) popup_snote_single_text_window_t1

0x83fc,	// (0x00052537) popup_snote_single_text_window_t2_ParamLimits

0x83fc,	// (0x00052537) popup_snote_single_text_window_t2

0x840f,	// (0x0005254a) popup_snote_single_text_window_t3_ParamLimits

0x840f,	// (0x0005254a) popup_snote_single_text_window_t3

0x8448,	// (0x00052583) popup_snote_single_text_window_t4_ParamLimits

0x8448,	// (0x00052583) popup_snote_single_text_window_t4

0x847c,	// (0x000525b7) popup_snote_single_text_window_t5_ParamLimits

0x847c,	// (0x000525b7) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x000596e7) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x000596e7) popup_snote_single_text_window_t

0x84ab,	// (0x000525e6) bg_popup_window_pane_cp9_ParamLimits

0x84ab,	// (0x000525e6) bg_popup_window_pane_cp9

0x83d7,	// (0x00052512) popup_snote_single_graphic_window_g1_ParamLimits

0x83d7,	// (0x00052512) popup_snote_single_graphic_window_g1

0x84b9,	// (0x000525f4) popup_snote_single_graphic_window_g2_ParamLimits

0x84b9,	// (0x000525f4) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x000596f2) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x000596f2) popup_snote_single_graphic_window_g

0x84c5,	// (0x00052600) popup_snote_single_graphic_window_t1_ParamLimits

0x84c5,	// (0x00052600) popup_snote_single_graphic_window_t1

0x84d8,	// (0x00052613) popup_snote_single_graphic_window_t2_ParamLimits

0x84d8,	// (0x00052613) popup_snote_single_graphic_window_t2

0x84eb,	// (0x00052626) popup_snote_single_graphic_window_t3_ParamLimits

0x84eb,	// (0x00052626) popup_snote_single_graphic_window_t3

0x8524,	// (0x0005265f) popup_snote_single_graphic_window_t4_ParamLimits

0x8524,	// (0x0005265f) popup_snote_single_graphic_window_t4

0x8558,	// (0x00052693) popup_snote_single_graphic_window_t5_ParamLimits

0x8558,	// (0x00052693) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x000596f7) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x000596f7) popup_snote_single_graphic_window_t

0xb1ed,	// (0x00055328) grid_graphic_popup_pane_ParamLimits

0xb1ed,	// (0x00055328) grid_graphic_popup_pane

0xb215,	// (0x00055350) listscroll_popup_graphic_pane_g1_ParamLimits

0xb215,	// (0x00055350) listscroll_popup_graphic_pane_g1

0xb26b,	// (0x000553a6) listscroll_popup_graphic_pane_g2_ParamLimits

0xb26b,	// (0x000553a6) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bb,	// (0x00059af6) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bb,	// (0x00059af6) listscroll_popup_graphic_pane_g

0xb27f,	// (0x000553ba) scroll_pane_cp5

0xb196,	// (0x000552d1) cell_graphic_popup_pane_ParamLimits

0xb196,	// (0x000552d1) cell_graphic_popup_pane

0xb177,	// (0x000552b2) cell_graphic_popup_pane_g1

0xb17f,	// (0x000552ba) cell_graphic_popup_pane_g2

0x83ab,	// (0x000524e6) cell_graphic_popup_pane_g3

0x0002,

0xf9b4,	// (0x00059aef) cell_graphic_popup_pane_g

0xb188,	// (0x000552c3) cell_graphic_popup_pane_t2

0x83b4,	// (0x000524ef) grid_highlight_pane_cp3

0x8599,	// (0x000526d4) list_gen_pane_ParamLimits

0x8599,	// (0x000526d4) list_gen_pane

0x85cb,	// (0x00052706) scroll_pane

0xb0cf,	// (0x0005520a) bg_list_pane_g1_ParamLimits

0xb0cf,	// (0x0005520a) bg_list_pane_g1

0xb0ec,	// (0x00055227) bg_list_pane_g2_ParamLimits

0xb0ec,	// (0x00055227) bg_list_pane_g2

0xb101,	// (0x0005523c) bg_list_pane_g3_ParamLimits

0xb101,	// (0x0005523c) bg_list_pane_g3

0xb115,	// (0x00055250) bg_list_pane_g4_ParamLimits

0xb115,	// (0x00055250) bg_list_pane_g4

0xb129,	// (0x00055264) bg_list_pane_g5_ParamLimits

0xb129,	// (0x00055264) bg_list_pane_g5

0x0004,

0xf9a9,	// (0x00059ae4) bg_list_pane_g_ParamLimits

0xf9a9,	// (0x00059ae4) bg_list_pane_g

0x7595,	// (0x000516d0) list_double2_graphic_large_graphic_pane_ParamLimits

0x7595,	// (0x000516d0) list_double2_graphic_large_graphic_pane

0x7595,	// (0x000516d0) list_double2_graphic_pane_ParamLimits

0x7595,	// (0x000516d0) list_double2_graphic_pane

0x7595,	// (0x000516d0) list_double2_large_graphic_pane_ParamLimits

0x7595,	// (0x000516d0) list_double2_large_graphic_pane

0x7595,	// (0x000516d0) list_double2_pane_ParamLimits

0x7595,	// (0x000516d0) list_double2_pane

0x7595,	// (0x000516d0) list_double_graphic_heading_pane_ParamLimits

0x7595,	// (0x000516d0) list_double_graphic_heading_pane

0x7595,	// (0x000516d0) list_double_graphic_pane_ParamLimits

0x7595,	// (0x000516d0) list_double_graphic_pane

0x7595,	// (0x000516d0) list_double_heading_pane_ParamLimits

0x7595,	// (0x000516d0) list_double_heading_pane

0x7595,	// (0x000516d0) list_double_large_graphic_pane_ParamLimits

0x7595,	// (0x000516d0) list_double_large_graphic_pane

0x7595,	// (0x000516d0) list_double_number_pane_ParamLimits

0x7595,	// (0x000516d0) list_double_number_pane

0x7595,	// (0x000516d0) list_double_pane_ParamLimits

0x7595,	// (0x000516d0) list_double_pane

0x7595,	// (0x000516d0) list_double_time_pane_ParamLimits

0x7595,	// (0x000516d0) list_double_time_pane

0x7595,	// (0x000516d0) list_setting_number_pane_ParamLimits

0x7595,	// (0x000516d0) list_setting_number_pane

0x7595,	// (0x000516d0) list_setting_pane_ParamLimits

0x7595,	// (0x000516d0) list_setting_pane

0x75df,	// (0x0005171a) list_single_2graphic_pane_ParamLimits

0x75df,	// (0x0005171a) list_single_2graphic_pane

0x75df,	// (0x0005171a) list_single_graphic_heading_pane_ParamLimits

0x75df,	// (0x0005171a) list_single_graphic_heading_pane

0x75df,	// (0x0005171a) list_single_graphic_pane_ParamLimits

0x75df,	// (0x0005171a) list_single_graphic_pane

0x75df,	// (0x0005171a) list_single_heading_pane_ParamLimits

0x75df,	// (0x0005171a) list_single_heading_pane

0x7650,	// (0x0005178b) list_single_large_graphic_pane_ParamLimits

0x7650,	// (0x0005178b) list_single_large_graphic_pane

0x75df,	// (0x0005171a) list_single_number_heading_pane_ParamLimits

0x75df,	// (0x0005171a) list_single_number_heading_pane

0x75df,	// (0x0005171a) list_single_number_pane_ParamLimits

0x75df,	// (0x0005171a) list_single_number_pane

0x75df,	// (0x0005171a) list_single_pane_ParamLimits

0x75df,	// (0x0005171a) list_single_pane

0x7d0c,	// (0x00051e47) list_highlight_pane_cp1

0x7371,	// (0x000514ac) list_single_pane_g1_ParamLimits

0x7371,	// (0x000514ac) list_single_pane_g1

0x737d,	// (0x000514b8) list_single_pane_g2_ParamLimits

0x737d,	// (0x000514b8) list_single_pane_g2

0x0001,

0xf5d8,	// (0x00059713) list_single_pane_g_ParamLimits

0xf5d8,	// (0x00059713) list_single_pane_g

0x757f,	// (0x000516ba) list_single_pane_t1_ParamLimits

0x757f,	// (0x000516ba) list_single_pane_t1

0x7371,	// (0x000514ac) list_single_number_pane_g1_ParamLimits

0x7371,	// (0x000514ac) list_single_number_pane_g1

0x737d,	// (0x000514b8) list_single_number_pane_g2_ParamLimits

0x737d,	// (0x000514b8) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x00059713) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x00059713) list_single_number_pane_g

0x7527,	// (0x00051662) list_single_number_pane_t1_ParamLimits

0x7527,	// (0x00051662) list_single_number_pane_t1

0x753d,	// (0x00051678) list_single_number_pane_t2_ParamLimits

0x753d,	// (0x00051678) list_single_number_pane_t2

0x0001,

0xf96a,	// (0x00059aa5) list_single_number_pane_t_ParamLimits

0xf96a,	// (0x00059aa5) list_single_number_pane_t

0x4d81,	// (0x0004eebc) list_single_graphic_pane_g1_ParamLimits

0x4d81,	// (0x0004eebc) list_single_graphic_pane_g1

0x7371,	// (0x000514ac) list_single_graphic_pane_g2_ParamLimits

0x7371,	// (0x000514ac) list_single_graphic_pane_g2

0x737d,	// (0x000514b8) list_single_graphic_pane_g3_ParamLimits

0x737d,	// (0x000514b8) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00059702) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00059702) list_single_graphic_pane_g

0x4d8d,	// (0x0004eec8) list_single_graphic_pane_t1_ParamLimits

0x4d8d,	// (0x0004eec8) list_single_graphic_pane_t1

0x4da3,	// (0x0004eede) list_single_heading_pane_g1_ParamLimits

0x4da3,	// (0x0004eede) list_single_heading_pane_g1

0x737d,	// (0x000514b8) list_single_heading_pane_g2_ParamLimits

0x737d,	// (0x000514b8) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00059709) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00059709) list_single_heading_pane_g

0x4db6,	// (0x0004eef1) list_single_heading_pane_t1_ParamLimits

0x4db6,	// (0x0004eef1) list_single_heading_pane_t1

0x7389,	// (0x000514c4) list_single_heading_pane_t2_ParamLimits

0x7389,	// (0x000514c4) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0005970e) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0005970e) list_single_heading_pane_t

0x7371,	// (0x000514ac) list_single_number_heading_pane_g1_ParamLimits

0x7371,	// (0x000514ac) list_single_number_heading_pane_g1

0x737d,	// (0x000514b8) list_single_number_heading_pane_g2_ParamLimits

0x737d,	// (0x000514b8) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x00059713) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x00059713) list_single_number_heading_pane_g

0x4dcc,	// (0x0004ef07) list_single_number_heading_pane_t1_ParamLimits

0x4dcc,	// (0x0004ef07) list_single_number_heading_pane_t1

0x4de2,	// (0x0004ef1d) list_single_number_heading_pane_t2_ParamLimits

0x4de2,	// (0x0004ef1d) list_single_number_heading_pane_t2

0x4df4,	// (0x0004ef2f) list_single_number_heading_pane_t3_ParamLimits

0x4df4,	// (0x0004ef2f) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x00059718) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x00059718) list_single_number_heading_pane_t

0x4e06,	// (0x0004ef41) list_single_graphic_heading_pane_g1_ParamLimits

0x4e06,	// (0x0004ef41) list_single_graphic_heading_pane_g1

0x739b,	// (0x000514d6) list_single_graphic_heading_pane_g4_ParamLimits

0x739b,	// (0x000514d6) list_single_graphic_heading_pane_g4

0x737d,	// (0x000514b8) list_single_graphic_heading_pane_g5_ParamLimits

0x737d,	// (0x000514b8) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0005971f) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0005971f) list_single_graphic_heading_pane_g

0x4dcc,	// (0x0004ef07) list_single_graphic_heading_pane_t1_ParamLimits

0x4dcc,	// (0x0004ef07) list_single_graphic_heading_pane_t1

0x4e1e,	// (0x0004ef59) list_single_graphic_heading_pane_t2_ParamLimits

0x4e1e,	// (0x0004ef59) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x00059726) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x00059726) list_single_graphic_heading_pane_t

0x73ac,	// (0x000514e7) list_single_large_graphic_pane_g1_ParamLimits

0x73ac,	// (0x000514e7) list_single_large_graphic_pane_g1

0x73b8,	// (0x000514f3) list_single_large_graphic_pane_g2_ParamLimits

0x73b8,	// (0x000514f3) list_single_large_graphic_pane_g2

0x73c4,	// (0x000514ff) list_single_large_graphic_pane_g3_ParamLimits

0x73c4,	// (0x000514ff) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0005972b) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0005972b) list_single_large_graphic_pane_g

0xa13b,	// (0x00054276) wait_border_pane_g2_copy1

0x73d0,	// (0x0005150b) list_single_large_graphic_pane_g4_cp2

0x4e34,	// (0x0004ef6f) list_single_large_graphic_pane_t1_ParamLimits

0x4e34,	// (0x0004ef6f) list_single_large_graphic_pane_t1

0x85ff,	// (0x0005273a) list_double_pane_g1_ParamLimits

0x85ff,	// (0x0005273a) list_double_pane_g1

0x73d8,	// (0x00051513) list_double_pane_g2_ParamLimits

0x73d8,	// (0x00051513) list_double_pane_g2

0x0001,

0xf5f7,	// (0x00059732) list_double_pane_g_ParamLimits

0xf5f7,	// (0x00059732) list_double_pane_g

0x4e4a,	// (0x0004ef85) list_double_pane_t1_ParamLimits

0x4e4a,	// (0x0004ef85) list_double_pane_t1

0x4e60,	// (0x0004ef9b) list_double_pane_t2_ParamLimits

0x4e60,	// (0x0004ef9b) list_double_pane_t2

0x0001,

0xf5fc,	// (0x00059737) list_double_pane_t_ParamLimits

0xf5fc,	// (0x00059737) list_double_pane_t

0x4e72,	// (0x0004efad) list_double2_pane_g1_ParamLimits

0x4e72,	// (0x0004efad) list_double2_pane_g1

0x4e83,	// (0x0004efbe) list_double2_pane_g2_ParamLimits

0x4e83,	// (0x0004efbe) list_double2_pane_g2

0x0001,

0xf601,	// (0x0005973c) list_double2_pane_g_ParamLimits

0xf601,	// (0x0005973c) list_double2_pane_g

0x4e8f,	// (0x0004efca) list_double2_pane_t1_ParamLimits

0x4e8f,	// (0x0004efca) list_double2_pane_t1

0x4ea5,	// (0x0004efe0) list_double2_pane_t2_ParamLimits

0x4ea5,	// (0x0004efe0) list_double2_pane_t2

0x0001,

0xf606,	// (0x00059741) list_double2_pane_t_ParamLimits

0xf606,	// (0x00059741) list_double2_pane_t

0x85ff,	// (0x0005273a) list_double_number_pane_g1_ParamLimits

0x85ff,	// (0x0005273a) list_double_number_pane_g1

0x73d8,	// (0x00051513) list_double_number_pane_g2_ParamLimits

0x73d8,	// (0x00051513) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x00059732) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x00059732) list_double_number_pane_g

0x4eb7,	// (0x0004eff2) list_double_number_pane_t1_ParamLimits

0x4eb7,	// (0x0004eff2) list_double_number_pane_t1

0x4ec9,	// (0x0004f004) list_double_number_pane_t2_ParamLimits

0x4ec9,	// (0x0004f004) list_double_number_pane_t2

0x4edf,	// (0x0004f01a) list_double_number_pane_t3_ParamLimits

0x4edf,	// (0x0004f01a) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x00059746) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x00059746) list_double_number_pane_t

0x4ef1,	// (0x0004f02c) list_double_graphic_pane_g1_ParamLimits

0x4ef1,	// (0x0004f02c) list_double_graphic_pane_g1

0x4efd,	// (0x0004f038) list_double_graphic_pane_g2_ParamLimits

0x4efd,	// (0x0004f038) list_double_graphic_pane_g2

0x4f0c,	// (0x0004f047) list_double_graphic_pane_g3_ParamLimits

0x4f0c,	// (0x0004f047) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0005974d) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0005974d) list_double_graphic_pane_g

0x4f24,	// (0x0004f05f) list_double_graphic_pane_t1_ParamLimits

0x4f24,	// (0x0004f05f) list_double_graphic_pane_t1

0x4f3a,	// (0x0004f075) list_double_graphic_pane_t2_ParamLimits

0x4f3a,	// (0x0004f075) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x00059756) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x00059756) list_double_graphic_pane_t

0x4f4c,	// (0x0004f087) list_double2_graphic_pane_g1_ParamLimits

0x4f4c,	// (0x0004f087) list_double2_graphic_pane_g1

0x979d,	// (0x000538d8) list_double2_graphic_pane_g2_ParamLimits

0x979d,	// (0x000538d8) list_double2_graphic_pane_g2

0x73e4,	// (0x0005151f) list_double2_graphic_pane_g3_ParamLimits

0x73e4,	// (0x0005151f) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0005975b) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0005975b) list_double2_graphic_pane_g

0x4f58,	// (0x0004f093) list_double2_graphic_pane_t1_ParamLimits

0x4f58,	// (0x0004f093) list_double2_graphic_pane_t1

0x4f6e,	// (0x0004f0a9) list_double2_graphic_pane_t2_ParamLimits

0x4f6e,	// (0x0004f0a9) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x00059762) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x00059762) list_double2_graphic_pane_t

0x4f80,	// (0x0004f0bb) list_double_large_graphic_pane_g1_ParamLimits

0x4f80,	// (0x0004f0bb) list_double_large_graphic_pane_g1

0x4f9f,	// (0x0004f0da) list_double_large_graphic_pane_g2_ParamLimits

0x4f9f,	// (0x0004f0da) list_double_large_graphic_pane_g2

0x73d8,	// (0x00051513) list_double_large_graphic_pane_g3_ParamLimits

0x73d8,	// (0x00051513) list_double_large_graphic_pane_g3

0x4fb5,	// (0x0004f0f0) list_double_large_graphic_pane_g4_ParamLimits

0x4fb5,	// (0x0004f0f0) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x00059767) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x00059767) list_double_large_graphic_pane_g

0x4fc6,	// (0x0004f101) list_double_large_graphic_pane_t1_ParamLimits

0x4fc6,	// (0x0004f101) list_double_large_graphic_pane_t1

0x4fdf,	// (0x0004f11a) list_double_large_graphic_pane_t2_ParamLimits

0x4fdf,	// (0x0004f11a) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x00059772) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x00059772) list_double_large_graphic_pane_t

0x7405,	// (0x00051540) list_double2_large_graphic_pane_g1_ParamLimits

0x7405,	// (0x00051540) list_double2_large_graphic_pane_g1

0x4ff1,	// (0x0004f12c) list_double2_large_graphic_pane_g2_ParamLimits

0x4ff1,	// (0x0004f12c) list_double2_large_graphic_pane_g2

0x73e4,	// (0x0005151f) list_double2_large_graphic_pane_g3_ParamLimits

0x73e4,	// (0x0005151f) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x00059777) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x00059777) list_double2_large_graphic_pane_g

0x5002,	// (0x0004f13d) list_double2_large_graphic_pane_t1_ParamLimits

0x5002,	// (0x0004f13d) list_double2_large_graphic_pane_t1

0x5018,	// (0x0004f153) list_double2_large_graphic_pane_t2_ParamLimits

0x5018,	// (0x0004f153) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0005977e) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0005977e) list_double2_large_graphic_pane_t

0x502a,	// (0x0004f165) list_double_heading_pane_g1_ParamLimits

0x502a,	// (0x0004f165) list_double_heading_pane_g1

0x7411,	// (0x0005154c) list_double_heading_pane_g2_ParamLimits

0x7411,	// (0x0005154c) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x00059783) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x00059783) list_double_heading_pane_g

0x503b,	// (0x0004f176) list_double_heading_pane_t1_ParamLimits

0x503b,	// (0x0004f176) list_double_heading_pane_t1

0x4ea5,	// (0x0004efe0) list_double_heading_pane_t2_ParamLimits

0x4ea5,	// (0x0004efe0) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x00059788) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x00059788) list_double_heading_pane_t

0x5051,	// (0x0004f18c) list_double_graphic_heading_pane_g1_ParamLimits

0x5051,	// (0x0004f18c) list_double_graphic_heading_pane_g1

0x502a,	// (0x0004f165) list_double_graphic_heading_pane_g2_ParamLimits

0x502a,	// (0x0004f165) list_double_graphic_heading_pane_g2

0x7411,	// (0x0005154c) list_double_graphic_heading_pane_g3_ParamLimits

0x7411,	// (0x0005154c) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0005978d) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0005978d) list_double_graphic_heading_pane_g

0x505d,	// (0x0004f198) list_double_graphic_heading_pane_t1_ParamLimits

0x505d,	// (0x0004f198) list_double_graphic_heading_pane_t1

0x4f6e,	// (0x0004f0a9) list_double_graphic_heading_pane_t2_ParamLimits

0x4f6e,	// (0x0004f0a9) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x00059794) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x00059794) list_double_graphic_heading_pane_t

0x5073,	// (0x0004f1ae) list_double_time_pane_g1_ParamLimits

0x5073,	// (0x0004f1ae) list_double_time_pane_g1

0x5084,	// (0x0004f1bf) list_double_time_pane_g2_ParamLimits

0x5084,	// (0x0004f1bf) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x00059799) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x00059799) list_double_time_pane_g

0x5090,	// (0x0004f1cb) list_double_time_pane_t1_ParamLimits

0x5090,	// (0x0004f1cb) list_double_time_pane_t1

0x50a6,	// (0x0004f1e1) list_double_time_pane_t2_ParamLimits

0x50a6,	// (0x0004f1e1) list_double_time_pane_t2

0x50b8,	// (0x0004f1f3) list_double_time_pane_t3_ParamLimits

0x50b8,	// (0x0004f1f3) list_double_time_pane_t3

0x50ca,	// (0x0004f205) list_double_time_pane_t4_ParamLimits

0x50ca,	// (0x0004f205) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0005979e) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0005979e) list_double_time_pane_t

0x50dc,	// (0x0004f217) list_setting_pane_g1_ParamLimits

0x50dc,	// (0x0004f217) list_setting_pane_g1

0x4e83,	// (0x0004efbe) list_setting_pane_g2_ParamLimits

0x4e83,	// (0x0004efbe) list_setting_pane_g2

0x0001,

0xf66c,	// (0x000597a7) list_setting_pane_g_ParamLimits

0xf66c,	// (0x000597a7) list_setting_pane_g

0x50e8,	// (0x0004f223) list_setting_pane_t1_ParamLimits

0x50e8,	// (0x0004f223) list_setting_pane_t1

0x5102,	// (0x0004f23d) list_setting_pane_t2_ParamLimits

0x5102,	// (0x0004f23d) list_setting_pane_t2

0x0002,

0xf671,	// (0x000597ac) list_setting_pane_t_ParamLimits

0xf671,	// (0x000597ac) list_setting_pane_t

0x5141,	// (0x0004f27c) set_value_pane_cp_ParamLimits

0x5141,	// (0x0004f27c) set_value_pane_cp

0x514d,	// (0x0004f288) list_setting_number_pane_g1_ParamLimits

0x514d,	// (0x0004f288) list_setting_number_pane_g1

0x5159,	// (0x0004f294) list_setting_number_pane_g2_ParamLimits

0x5159,	// (0x0004f294) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x000597b3) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x000597b3) list_setting_number_pane_g

0x5165,	// (0x0004f2a0) list_setting_number_pane_t1_ParamLimits

0x5165,	// (0x0004f2a0) list_setting_number_pane_t1

0x517e,	// (0x0004f2b9) list_setting_number_pane_t2_ParamLimits

0x517e,	// (0x0004f2b9) list_setting_number_pane_t2

0x5198,	// (0x0004f2d3) list_setting_number_pane_t3_ParamLimits

0x5198,	// (0x0004f2d3) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x000597b8) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x000597b8) list_setting_number_pane_t

0x5141,	// (0x0004f27c) set_value_pane_ParamLimits

0x5141,	// (0x0004f27c) set_value_pane

0x860b,	// (0x00052746) bg_set_opt_pane_ParamLimits

0x860b,	// (0x00052746) bg_set_opt_pane

0x51db,	// (0x0004f316) set_value_pane_t1

0x862c,	// (0x00052767) slider_set_pane_cp3

0x8635,	// (0x00052770) volume_small_pane_cp

0x863e,	// (0x00052779) list_form_gen_pane

0x8647,	// (0x00052782) scroll_pane_cp8

0x51f1,	// (0x0004f32c) form_field_data_pane_ParamLimits

0x51f1,	// (0x0004f32c) form_field_data_pane

0x5215,	// (0x0004f350) form_field_data_wide_pane_ParamLimits

0x5215,	// (0x0004f350) form_field_data_wide_pane

0x5238,	// (0x0004f373) form_field_popup_pane_ParamLimits

0x5238,	// (0x0004f373) form_field_popup_pane

0x5258,	// (0x0004f393) form_field_popup_wide_pane_ParamLimits

0x5258,	// (0x0004f393) form_field_popup_wide_pane

0x5277,	// (0x0004f3b2) form_field_slider_pane_ParamLimits

0x5277,	// (0x0004f3b2) form_field_slider_pane

0x528a,	// (0x0004f3c5) form_field_slider_wide_pane_ParamLimits

0x528a,	// (0x0004f3c5) form_field_slider_wide_pane

0x8658,	// (0x00052793) data_form_pane

0x52a7,	// (0x0004f3e2) form_field_data_pane_t1

0x8664,	// (0x0005279f) input_focus_pane

0x52bf,	// (0x0004f3fa) data_form_wide_pane

0x52dc,	// (0x0004f417) form_field_data_wide_pane_t1

0x83c9,	// (0x00052504) input_focus_pane_cp6

0x52fe,	// (0x0004f439) form_field_popup_pane_t1

0x8664,	// (0x0005279f) input_focus_pane_cp7

0x8686,	// (0x000527c1) list_form_pane

0x531e,	// (0x0004f459) form_field_popup_wide_pane_t1

0x8664,	// (0x0005279f) input_focus_pane_cp8

0x8692,	// (0x000527cd) list_form_wide_pane

0x533b,	// (0x0004f476) form_field_slider_pane_t1_ParamLimits

0x533b,	// (0x0004f476) form_field_slider_pane_t1

0x5351,	// (0x0004f48c) form_field_slider_pane_t2_ParamLimits

0x5351,	// (0x0004f48c) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x000597c8) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x000597c8) form_field_slider_pane_t

0x8067,	// (0x000521a2) input_focus_pane_cp9_ParamLimits

0x8067,	// (0x000521a2) input_focus_pane_cp9

0x5366,	// (0x0004f4a1) slider_cont_pane_ParamLimits

0x5366,	// (0x0004f4a1) slider_cont_pane

0x86a1,	// (0x000527dc) form_field_slider_wide_pane_t1_ParamLimits

0x86a1,	// (0x000527dc) form_field_slider_wide_pane_t1

0x537a,	// (0x0004f4b5) form_field_slider_wide_pane_t2_ParamLimits

0x537a,	// (0x0004f4b5) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x000597cd) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x000597cd) form_field_slider_wide_pane_t

0x8067,	// (0x000521a2) input_focus_pane_cp10_ParamLimits

0x8067,	// (0x000521a2) input_focus_pane_cp10

0x538c,	// (0x0004f4c7) slider_cont_pane_cp1_ParamLimits

0x538c,	// (0x0004f4c7) slider_cont_pane_cp1

0x53a0,	// (0x0004f4db) slider_form_pane_cp

0x86b3,	// (0x000527ee) input_focus_pane_g1

0x86bb,	// (0x000527f6) input_focus_pane_g2

0x86c3,	// (0x000527fe) input_focus_pane_g3

0x86cb,	// (0x00052806) input_focus_pane_g4

0x86d3,	// (0x0005280e) input_focus_pane_g5

0x86db,	// (0x00052816) input_focus_pane_g6

0x86e3,	// (0x0005281e) input_focus_pane_g7

0x86eb,	// (0x00052826) input_focus_pane_g8

0x86f3,	// (0x0005282e) input_focus_pane_g9

0x7d02,	// (0x00051e3d) input_focus_pane_g10

0x0009,

0xf697,	// (0x000597d2) input_focus_pane_g

0xa144,	// (0x0005427f) wait_border_pane_g3_copy1

0x53a8,	// (0x0004f4e3) data_form_pane_t1

0x7d02,	// (0x00051e3d) wait_anim_pane_g1_copy1

0x754f,	// (0x0005168a) data_form_wide_pane_t1

0x53c3,	// (0x0004f4fe) list_form_graphic_pane_cp_ParamLimits

0x53c3,	// (0x0004f4fe) list_form_graphic_pane_cp

0xb061,	// (0x0005519c) slider_form_pane_g1

0xb06a,	// (0x000551a5) slider_form_pane_g2

0x0006,

0xf99a,	// (0x00059ad5) slider_form_pane_g

0x53dc,	// (0x0004f517) list_form_graphic_pane_ParamLimits

0x53dc,	// (0x0004f517) list_form_graphic_pane

0x53f8,	// (0x0004f533) list_form_graphic_pane_g1

0x5400,	// (0x0004f53b) list_form_graphic_pane_t1_ParamLimits

0x5400,	// (0x0004f53b) list_form_graphic_pane_t1

0x7dec,	// (0x00051f27) list_highlight_pane_cp5_ParamLimits

0x7dec,	// (0x00051f27) list_highlight_pane_cp5

0x5415,	// (0x0004f550) find_pane_g1

0x86fb,	// (0x00052836) input_find_pane

0x541e,	// (0x0004f559) input_find_pane_g1_ParamLimits

0x541e,	// (0x0004f559) input_find_pane_g1

0x542a,	// (0x0004f565) input_find_pane_t1_ParamLimits

0x542a,	// (0x0004f565) input_find_pane_t1

0x543f,	// (0x0004f57a) input_find_pane_t2_ParamLimits

0x543f,	// (0x0004f57a) input_find_pane_t2

0x0001,

0xf6ac,	// (0x000597e7) input_find_pane_t_ParamLimits

0xf6ac,	// (0x000597e7) input_find_pane_t

0x8704,	// (0x0005283f) input_focus_pane_cp5_ParamLimits

0x8704,	// (0x0005283f) input_focus_pane_cp5

0x871e,	// (0x00052859) bg_popup_window_pane_cp2_ParamLimits

0x871e,	// (0x00052859) bg_popup_window_pane_cp2

0x872b,	// (0x00052866) listscroll_menu_pane_ParamLimits

0x872b,	// (0x00052866) listscroll_menu_pane

0x8737,	// (0x00052872) popup_submenu_window_ParamLimits

0x8737,	// (0x00052872) popup_submenu_window

0x8763,	// (0x0005289e) find_popup_pane_g1

0x876b,	// (0x000528a6) input_popup_find_pane_cp

0x8704,	// (0x0005283f) input_focus_pane_cp4_ParamLimits

0x8704,	// (0x0005283f) input_focus_pane_cp4

0x8781,	// (0x000528bc) input_popup_find_pane_t1_ParamLimits

0x8781,	// (0x000528bc) input_popup_find_pane_t1

0x7d0c,	// (0x00051e47) bg_popup_sub_pane_cp

0x87af,	// (0x000528ea) listscroll_popup_sub_pane

0x87b7,	// (0x000528f2) list_submenu_pane_ParamLimits

0x87b7,	// (0x000528f2) list_submenu_pane

0x87c8,	// (0x00052903) scroll_pane_cp4

0x87d0,	// (0x0005290b) list_single_popup_submenu_pane_ParamLimits

0x87d0,	// (0x0005290b) list_single_popup_submenu_pane

0x87e4,	// (0x0005291f) list_single_popup_submenu_pane_g1

0x87ec,	// (0x00052927) list_single_popup_submenu_pane_t1_ParamLimits

0x87ec,	// (0x00052927) list_single_popup_submenu_pane_t1

0x7dec,	// (0x00051f27) bg_active_tab_pane_cp1_ParamLimits

0x7dec,	// (0x00051f27) bg_active_tab_pane_cp1

0x8801,	// (0x0005293c) tabs_2_active_pane_g1

0x8809,	// (0x00052944) tabs_2_active_pane_t1

0x7dec,	// (0x00051f27) bg_passive_tab_pane_cp1_ParamLimits

0x7dec,	// (0x00051f27) bg_passive_tab_pane_cp1

0x8801,	// (0x0005293c) tabs_2_passive_pane_g1

0x8809,	// (0x00052944) tabs_2_passive_pane_t1

0x881b,	// (0x00052956) bg_active_tab_pane_cp4

0x8829,	// (0x00052964) tabs_2_long_active_pane_t1

0x883c,	// (0x00052977) bg_passive_tab_pane_cp4

0x60f9,	// (0x00050234) list_single_midp_graphic_pane_g4_ParamLimits

0x881b,	// (0x00052956) bg_active_tab_pane_cp5

0x8848,	// (0x00052983) tabs_3_long_active_pane_t1

0x883c,	// (0x00052977) bg_passive_tab_pane_cp5

0x60f9,	// (0x00050234) list_single_midp_graphic_pane_g4

0x7dec,	// (0x00051f27) bg_popup_window_pane_cp13_ParamLimits

0x7dec,	// (0x00051f27) bg_popup_window_pane_cp13

0x8863,	// (0x0005299e) listscroll_popup_fast_pane_ParamLimits

0x8863,	// (0x0005299e) listscroll_popup_fast_pane

0x8872,	// (0x000529ad) grid_popup_fast_pane_ParamLimits

0x8872,	// (0x000529ad) grid_popup_fast_pane

0x8884,	// (0x000529bf) scroll_pane_cp9_ParamLimits

0x8884,	// (0x000529bf) scroll_pane_cp9

0xc964,	// (0x00056a9f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc964,	// (0x00056a9f) list_single_graphic_hl_pane_t1_cp2

0x88a8,	// (0x000529e3) input_focus_pane_cp20_ParamLimits

0x88a8,	// (0x000529e3) input_focus_pane_cp20

0x88b6,	// (0x000529f1) query_popup_data_pane_t1_ParamLimits

0x88b6,	// (0x000529f1) query_popup_data_pane_t1

0x88c9,	// (0x00052a04) query_popup_data_pane_t2_ParamLimits

0x88c9,	// (0x00052a04) query_popup_data_pane_t2

0x890f,	// (0x00052a4a) query_popup_data_pane_t3_ParamLimits

0x890f,	// (0x00052a4a) query_popup_data_pane_t3

0x8950,	// (0x00052a8b) query_popup_data_pane_t4_ParamLimits

0x8950,	// (0x00052a8b) query_popup_data_pane_t4

0x898c,	// (0x00052ac7) query_popup_data_pane_t5_ParamLimits

0x898c,	// (0x00052ac7) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x000597ec) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x000597ec) query_popup_data_pane_t

0x86b3,	// (0x000527ee) bg_set_opt_pane_g1

0x86bb,	// (0x000527f6) bg_set_opt_pane_g2

0x86c3,	// (0x000527fe) bg_set_opt_pane_g3

0x86cb,	// (0x00052806) bg_set_opt_pane_g4

0x86d3,	// (0x0005280e) bg_set_opt_pane_g5

0x86db,	// (0x00052816) bg_set_opt_pane_g6

0x86e3,	// (0x0005281e) bg_set_opt_pane_g7

0x86eb,	// (0x00052826) bg_set_opt_pane_g8

0x86f3,	// (0x0005282e) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x000597f7) bg_set_opt_pane_g

0x575f,	// (0x0004f89a) control_top_pane_stacon_ParamLimits

0x575f,	// (0x0004f89a) control_top_pane_stacon

0x57b2,	// (0x0004f8ed) signal_pane_stacon_ParamLimits

0x57b2,	// (0x0004f8ed) signal_pane_stacon

0x8f78,	// (0x000530b3) stacon_top_pane_g1_ParamLimits

0x8f78,	// (0x000530b3) stacon_top_pane_g1

0x57d7,	// (0x0004f912) title_pane_stacon_ParamLimits

0x57d7,	// (0x0004f912) title_pane_stacon

0x5801,	// (0x0004f93c) uni_indicator_pane_stacon_ParamLimits

0x5801,	// (0x0004f93c) uni_indicator_pane_stacon

0x5816,	// (0x0004f951) battery_pane_stacon_ParamLimits

0x5816,	// (0x0004f951) battery_pane_stacon

0x585a,	// (0x0004f995) control_bottom_pane_stacon_ParamLimits

0x585a,	// (0x0004f995) control_bottom_pane_stacon

0x587d,	// (0x0004f9b8) navi_pane_stacon_ParamLimits

0x587d,	// (0x0004f9b8) navi_pane_stacon

0x8f9a,	// (0x000530d5) stacon_bottom_pane_g1_ParamLimits

0x8f9a,	// (0x000530d5) stacon_bottom_pane_g1

0x5454,	// (0x0004f58f) aid_levels_signal_lsc_ParamLimits

0x5454,	// (0x0004f58f) aid_levels_signal_lsc

0x546a,	// (0x0004f5a5) signal_pane_stacon_g1_ParamLimits

0x546a,	// (0x0004f5a5) signal_pane_stacon_g1

0x547e,	// (0x0004f5b9) signal_pane_stacon_g2_ParamLimits

0x547e,	// (0x0004f5b9) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0005980a) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0005980a) signal_pane_stacon_g

0x54b3,	// (0x0004f5ee) title_pane_stacon_t1_ParamLimits

0x54b3,	// (0x0004f5ee) title_pane_stacon_t1

0x89d0,	// (0x00052b0b) uni_indicator_pane_stacon_g1

0x89da,	// (0x00052b15) uni_indicator_pane_stacon_g2

0x89e4,	// (0x00052b1f) uni_indicator_pane_stacon_g3

0x89ee,	// (0x00052b29) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x00059816) uni_indicator_pane_stacon_g

0x54d8,	// (0x0004f613) control_top_pane_stacon_g1

0x54e0,	// (0x0004f61b) control_top_pane_stacon_t1_ParamLimits

0x54e0,	// (0x0004f61b) control_top_pane_stacon_t1

0x5517,	// (0x0004f652) aid_levels_battery_lsc_ParamLimits

0x5517,	// (0x0004f652) aid_levels_battery_lsc

0x552e,	// (0x0004f669) battery_pane_stacon_g1_ParamLimits

0x552e,	// (0x0004f669) battery_pane_stacon_g1

0x5541,	// (0x0004f67c) battery_pane_stacon_g2_ParamLimits

0x5541,	// (0x0004f67c) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0005981f) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0005981f) battery_pane_stacon_g

0x557f,	// (0x0004f6ba) navi_icon_pane_stacon

0x5593,	// (0x0004f6ce) navi_navi_pane_stacon

0x557f,	// (0x0004f6ba) navi_text_pane_stacon

0x54d8,	// (0x0004f613) control_bottom_pane_stacon_g1

0x55a7,	// (0x0004f6e2) control_bottom_pane_stacon_t1_ParamLimits

0x55a7,	// (0x0004f6e2) control_bottom_pane_stacon_t1

0x8a12,	// (0x00052b4d) grid_app_pane_ParamLimits

0x8a12,	// (0x00052b4d) grid_app_pane

0x8a36,	// (0x00052b71) scroll_pane_cp15_ParamLimits

0x8a36,	// (0x00052b71) scroll_pane_cp15

0x8a49,	// (0x00052b84) cell_app_pane_ParamLimits

0x8a49,	// (0x00052b84) cell_app_pane

0x8a6d,	// (0x00052ba8) cell_app_pane_g1_ParamLimits

0x8a6d,	// (0x00052ba8) cell_app_pane_g1

0x8a8d,	// (0x00052bc8) cell_app_pane_g2_ParamLimits

0x8a8d,	// (0x00052bc8) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x00059824) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x00059824) cell_app_pane_g

0x8a99,	// (0x00052bd4) cell_app_pane_t1_ParamLimits

0x8a99,	// (0x00052bd4) cell_app_pane_t1

0x8ab0,	// (0x00052beb) grid_highlight_pane_ParamLimits

0x8ab0,	// (0x00052beb) grid_highlight_pane

0x86b3,	// (0x000527ee) cell_highlight_pane_g1

0x86bb,	// (0x000527f6) cell_highlight_pane_g2

0x86c3,	// (0x000527fe) cell_highlight_pane_g3

0x86cb,	// (0x00052806) cell_highlight_pane_g4

0x86d3,	// (0x0005280e) cell_highlight_pane_g5

0x86db,	// (0x00052816) cell_highlight_pane_g6

0x86e3,	// (0x0005281e) cell_highlight_pane_g7

0x86eb,	// (0x00052826) cell_highlight_pane_g8

0x86f3,	// (0x0005282e) cell_highlight_pane_g9

0x7d02,	// (0x00051e3d) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x000597d2) cell_highlight_pane_g

0x8ac1,	// (0x00052bfc) bg_scroll_pane

0x55f1,	// (0x0004f72c) scroll_handle_pane

0x8b08,	// (0x00052c43) scroll_bg_pane_g1

0x8b1d,	// (0x00052c58) scroll_bg_pane_g2

0x8b35,	// (0x00052c70) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x00059829) scroll_bg_pane_g

0x8b4a,	// (0x00052c85) scroll_handle_focus_pane_ParamLimits

0x8b4a,	// (0x00052c85) scroll_handle_focus_pane

0x8b08,	// (0x00052c43) scroll_handle_pane_g1

0x8b57,	// (0x00052c92) scroll_handle_pane_g2

0x8b35,	// (0x00052c70) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x00059830) scroll_handle_pane_g

0x8704,	// (0x0005283f) bg_popup_sub_pane_cp21_ParamLimits

0x8704,	// (0x0005283f) bg_popup_sub_pane_cp21

0x8b6b,	// (0x00052ca6) popup_fep_japan_predictive_window_t1_ParamLimits

0x8b6b,	// (0x00052ca6) popup_fep_japan_predictive_window_t1

0x8b85,	// (0x00052cc0) popup_fep_japan_predictive_window_t2_ParamLimits

0x8b85,	// (0x00052cc0) popup_fep_japan_predictive_window_t2

0x8bb8,	// (0x00052cf3) popup_fep_japan_predictive_window_t3_ParamLimits

0x8bb8,	// (0x00052cf3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x00059837) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x00059837) popup_fep_japan_predictive_window_t

0x7d0c,	// (0x00051e47) bg_popup_sub_pane_cp23

0x8bef,	// (0x00052d2a) listscroll_japin_cand_pane

0x8bf7,	// (0x00052d32) popup_fep_japan_candidate_window_t1

0x8c05,	// (0x00052d40) candidate_pane_ParamLimits

0x8c05,	// (0x00052d40) candidate_pane

0x8c17,	// (0x00052d52) scroll_pane_cp30

0x8c1f,	// (0x00052d5a) list_single_popup_jap_candidate_pane_ParamLimits

0x8c1f,	// (0x00052d5a) list_single_popup_jap_candidate_pane

0x7d0c,	// (0x00051e47) list_highlight_pane_cp30

0x8c34,	// (0x00052d6f) list_single_popup_jap_candidate_pane_t1

0x8c43,	// (0x00052d7e) level_1_signal

0x8c55,	// (0x00052d90) level_2_signal

0x8c68,	// (0x00052da3) level_3_signal

0x8c7b,	// (0x00052db6) level_4_signal

0x8c8e,	// (0x00052dc9) level_5_signal

0x8ca1,	// (0x00052ddc) level_6_signal

0x8cb4,	// (0x00052def) level_7_signal

0x8c43,	// (0x00052d7e) level_1_battery

0x8c55,	// (0x00052d90) level_2_battery

0x8c68,	// (0x00052da3) level_3_battery

0x8c7b,	// (0x00052db6) level_4_battery

0x8c8e,	// (0x00052dc9) level_5_battery

0x8ca1,	// (0x00052ddc) level_6_battery

0x8cb4,	// (0x00052def) level_7_battery

0x8cdf,	// (0x00052e1a) list_menu_pane_ParamLimits

0x8cdf,	// (0x00052e1a) list_menu_pane

0x8cf5,	// (0x00052e30) scroll_pane_cp25_ParamLimits

0x8cf5,	// (0x00052e30) scroll_pane_cp25

0x8d0e,	// (0x00052e49) list_double2_graphic_pane_cp2_ParamLimits

0x8d0e,	// (0x00052e49) list_double2_graphic_pane_cp2

0x8d0e,	// (0x00052e49) list_double2_large_graphic_pane_cp2_ParamLimits

0x8d0e,	// (0x00052e49) list_double2_large_graphic_pane_cp2

0x8d0e,	// (0x00052e49) list_double2_pane_cp2_ParamLimits

0x8d0e,	// (0x00052e49) list_double2_pane_cp2

0x8d0e,	// (0x00052e49) list_double_graphic_pane_cp2_ParamLimits

0x8d0e,	// (0x00052e49) list_double_graphic_pane_cp2

0x8d0e,	// (0x00052e49) list_double_large_graphic_pane_cp2_ParamLimits

0x8d0e,	// (0x00052e49) list_double_large_graphic_pane_cp2

0x8d0e,	// (0x00052e49) list_double_number_pane_cp2_ParamLimits

0x8d0e,	// (0x00052e49) list_double_number_pane_cp2

0x8d0e,	// (0x00052e49) list_double_pane_cp2_ParamLimits

0x8d0e,	// (0x00052e49) list_double_pane_cp2

0x8d32,	// (0x00052e6d) list_single_2graphic_pane_cp2_ParamLimits

0x8d32,	// (0x00052e6d) list_single_2graphic_pane_cp2

0x8d32,	// (0x00052e6d) list_single_graphic_heading_pane_cp2_ParamLimits

0x8d32,	// (0x00052e6d) list_single_graphic_heading_pane_cp2

0x8d32,	// (0x00052e6d) list_single_graphic_pane_cp2_ParamLimits

0x8d32,	// (0x00052e6d) list_single_graphic_pane_cp2

0x8d32,	// (0x00052e6d) list_single_heading_pane_cp2_ParamLimits

0x8d32,	// (0x00052e6d) list_single_heading_pane_cp2

0x8d4b,	// (0x00052e86) list_single_large_graphic_pane_cp2_ParamLimits

0x8d4b,	// (0x00052e86) list_single_large_graphic_pane_cp2

0x8d32,	// (0x00052e6d) list_single_number_heading_pane_cp2_ParamLimits

0x8d32,	// (0x00052e6d) list_single_number_heading_pane_cp2

0x8d32,	// (0x00052e6d) list_single_number_pane_cp2_ParamLimits

0x8d32,	// (0x00052e6d) list_single_number_pane_cp2

0x8d32,	// (0x00052e6d) list_single_pane_cp2_ParamLimits

0x8d32,	// (0x00052e6d) list_single_pane_cp2

0x8dc7,	// (0x00052f02) bg_popup_sub_pane_cp22

0x56a3,	// (0x0004f7de) popup_side_volume_key_window_g1

0x56cd,	// (0x0004f808) popup_side_volume_key_window_t1

0x56e9,	// (0x0004f824) volume_small_pane_cp1

0x8067,	// (0x000521a2) bg_popup_sub_pane_cp24_ParamLimits

0x8067,	// (0x000521a2) bg_popup_sub_pane_cp24

0x8ddd,	// (0x00052f18) fep_china_uni_candidate_pane_ParamLimits

0x8ddd,	// (0x00052f18) fep_china_uni_candidate_pane

0x8df1,	// (0x00052f2c) fep_china_uni_entry_pane

0x8e01,	// (0x00052f3c) popup_fep_china_uni_window_g1

0x8e1d,	// (0x00052f58) fep_china_uni_entry_pane_g1

0x8e25,	// (0x00052f60) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x00059868) fep_china_uni_entry_pane_g

0x8e2d,	// (0x00052f68) fep_entry_item_pane

0x8e37,	// (0x00052f72) fep_candidate_item_pane

0x8e3f,	// (0x00052f7a) fep_china_uni_candidate_pane_g1

0x8e47,	// (0x00052f82) fep_china_uni_candidate_pane_g2

0x8e4f,	// (0x00052f8a) fep_china_uni_candidate_pane_g3

0x8e57,	// (0x00052f92) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0005986d) fep_china_uni_candidate_pane_g

0x7d02,	// (0x00051e3d) fep_entry_item_pane_g1

0x8e5f,	// (0x00052f9a) fep_entry_item_pane_t1_ParamLimits

0x8e5f,	// (0x00052f9a) fep_entry_item_pane_t1

0x8e75,	// (0x00052fb0) fep_candidate_item_pane_t1_ParamLimits

0x8e75,	// (0x00052fb0) fep_candidate_item_pane_t1

0x8e8a,	// (0x00052fc5) fep_candidate_item_pane_t2_ParamLimits

0x8e8a,	// (0x00052fc5) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x00059876) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x00059876) fep_candidate_item_pane_t

0x7dec,	// (0x00051f27) list_highlight_pane_cp31_ParamLimits

0x7dec,	// (0x00051f27) list_highlight_pane_cp31

0x8e9c,	// (0x00052fd7) level_1_signal_lsc

0x8ea5,	// (0x00052fe0) level_2_signal_lsc

0x8eae,	// (0x00052fe9) level_3_signal_lsc

0x8eb7,	// (0x00052ff2) level_4_signal_lsc

0x8ec0,	// (0x00052ffb) level_5_signal_lsc

0x8ec9,	// (0x00053004) level_6_signal_lsc

0x8ed2,	// (0x0005300d) level_7_signal_lsc

0x8ed2,	// (0x0005300d) level_1_battery_lsc

0x8edb,	// (0x00053016) level_2_battery_lsc

0x8ee4,	// (0x0005301f) level_3_battery_lsc

0x8eed,	// (0x00053028) level_4_battery_lsc

0x8ef6,	// (0x00053031) level_5_battery_lsc

0x8eff,	// (0x0005303a) level_6_battery_lsc

0x8e9c,	// (0x00052fd7) level_7_battery_lsc

0x8f08,	// (0x00053043) scroll_handle_focus_pane_g1

0x8f11,	// (0x0005304c) scroll_handle_focus_pane_g2

0x8f1a,	// (0x00053055) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0005987b) scroll_handle_focus_pane_g

0x56f1,	// (0x0004f82c) list_single_2graphic_pane_g1_ParamLimits

0x56f1,	// (0x0004f82c) list_single_2graphic_pane_g1

0x739b,	// (0x000514d6) list_single_2graphic_pane_g2_ParamLimits

0x739b,	// (0x000514d6) list_single_2graphic_pane_g2

0x737d,	// (0x000514b8) list_single_2graphic_pane_g3_ParamLimits

0x737d,	// (0x000514b8) list_single_2graphic_pane_g3

0x56fd,	// (0x0004f838) list_single_2graphic_pane_g4_ParamLimits

0x56fd,	// (0x0004f838) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x00059882) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x00059882) list_single_2graphic_pane_g

0x5709,	// (0x0004f844) list_single_2graphic_pane_t1_ParamLimits

0x5709,	// (0x0004f844) list_single_2graphic_pane_t1

0x741d,	// (0x00051558) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x741d,	// (0x00051558) list_double2_graphic_large_graphic_pane_g1

0x4ff1,	// (0x0004f12c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4ff1,	// (0x0004f12c) list_double2_graphic_large_graphic_pane_g2

0x73e4,	// (0x0005151f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x73e4,	// (0x0005151f) list_double2_graphic_large_graphic_pane_g3

0x742d,	// (0x00051568) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x742d,	// (0x00051568) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0005988b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0005988b) list_double2_graphic_large_graphic_pane_g

0x5737,	// (0x0004f872) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5737,	// (0x0004f872) list_double2_graphic_large_graphic_pane_t1

0x574d,	// (0x0004f888) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x574d,	// (0x0004f888) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x00059894) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x00059894) list_double2_graphic_large_graphic_pane_t

0x9062,	// (0x0005319d) popup_fast_swap_window_ParamLimits

0x9062,	// (0x0005319d) popup_fast_swap_window

0x907e,	// (0x000531b9) popup_side_volume_key_window

0x909a,	// (0x000531d5) stacon_top_pane

0x90a4,	// (0x000531df) status_pane_ParamLimits

0x90a4,	// (0x000531df) status_pane

0x909a,	// (0x000531d5) status_small_pane

0x7d0c,	// (0x00051e47) control_pane

0x7d0c,	// (0x00051e47) stacon_bottom_pane

0x8647,	// (0x00052782) scroll_pane_cp121

0x863e,	// (0x00052779) set_content_pane

0x8f23,	// (0x0005305e) bg_active_tab_pane_g1_cp1

0x8f2c,	// (0x00053067) bg_active_tab_pane_g2_cp1

0x8f35,	// (0x00053070) bg_active_tab_pane_g3_cp1

0x8f23,	// (0x0005305e) bg_passive_tab_pane_g1_cp1

0x8f2c,	// (0x00053067) bg_passive_tab_pane_g2_cp1

0x8f35,	// (0x00053070) bg_passive_tab_pane_g3_cp1

0x8f3e,	// (0x00053079) bg_active_tab_pane_g1_cp2

0x8f2c,	// (0x00053067) bg_active_tab_pane_g2_cp2

0x8f47,	// (0x00053082) bg_active_tab_pane_g3_cp2

0x8f3e,	// (0x00053079) bg_passive_tab_pane_g1_cp2

0x8f2c,	// (0x00053067) bg_passive_tab_pane_g2_cp2

0x8f47,	// (0x00053082) bg_passive_tab_pane_g3_cp2

0x8f50,	// (0x0005308b) bg_active_tab_pane_g1_cp3

0x8f2c,	// (0x00053067) bg_active_tab_pane_g2_cp3

0x8f59,	// (0x00053094) bg_active_tab_pane_g3_cp3

0x8f50,	// (0x0005308b) bg_passive_tab_pane_g1_cp3

0x8f2c,	// (0x00053067) bg_passive_tab_pane_g2_cp3

0x8f59,	// (0x00053094) bg_passive_tab_pane_g3_cp3

0x8f62,	// (0x0005309d) bg_active_tab_pane_g1_cp4

0x8f2c,	// (0x00053067) bg_active_tab_pane_g2_cp4

0x8f6d,	// (0x000530a8) bg_active_tab_pane_g3_cp4

0x8f62,	// (0x0005309d) bg_passive_tab_pane_g1_cp4

0x8f2c,	// (0x00053067) bg_passive_tab_pane_g2_cp4

0x8f6d,	// (0x000530a8) bg_passive_tab_pane_g3_cp4

0x8fb6,	// (0x000530f1) bg_active_tab_pane_g1_cp5

0x8f2c,	// (0x00053067) bg_active_tab_pane_g2_cp5

0x8fbf,	// (0x000530fa) bg_active_tab_pane_g3_cp5

0x8fb6,	// (0x000530f1) bg_passive_tab_pane_g1_cp5

0x8f2c,	// (0x00053067) bg_passive_tab_pane_g2_cp5

0x8fbf,	// (0x000530fa) bg_passive_tab_pane_g3_cp5

0x8fc8,	// (0x00053103) list_set_graphic_pane_ParamLimits

0x8fc8,	// (0x00053103) list_set_graphic_pane

0x7d0c,	// (0x00051e47) bg_set_opt_pane_cp4

0x8fe5,	// (0x00053120) list_set_graphic_pane_g1_ParamLimits

0x8fe5,	// (0x00053120) list_set_graphic_pane_g1

0x8ff1,	// (0x0005312c) list_set_graphic_pane_g2_ParamLimits

0x8ff1,	// (0x0005312c) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x00059899) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x00059899) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x00059c0c) volume_small_pane_cp_g

0x9015,	// (0x00053150) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9015,	// (0x00053150) list_double2_large_graphic_pane_g1_cp2

0x9021,	// (0x0005315c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9021,	// (0x0005315c) list_double2_large_graphic_pane_g2_cp2

0x9032,	// (0x0005316d) list_double2_large_graphic_pane_g3_cp2

0x903a,	// (0x00053175) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x903a,	// (0x00053175) list_double2_large_graphic_pane_t1_cp2

0x9050,	// (0x0005318b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9050,	// (0x0005318b) list_double2_large_graphic_pane_t2_cp2

0xac17,	// (0x00054d52) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xac17,	// (0x00054d52) list_double_large_graphic_pane_g1_cp2

0xac28,	// (0x00054d63) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xac28,	// (0x00054d63) list_double_large_graphic_pane_g2_cp2

0x91c0,	// (0x000532fb) list_double_large_graphic_pane_g3_cp2

0xac39,	// (0x00054d74) list_double_large_graphic_pane_g4_cp

0xac41,	// (0x00054d7c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xac41,	// (0x00054d7c) list_double_large_graphic_pane_t1_cp2

0xac58,	// (0x00054d93) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xac58,	// (0x00054d93) list_double_large_graphic_pane_t2_cp2

0x90b2,	// (0x000531ed) list_double2_graphic_pane_g1_cp2_ParamLimits

0x90b2,	// (0x000531ed) list_double2_graphic_pane_g1_cp2

0x90c0,	// (0x000531fb) list_double2_graphic_pane_g2_cp2_ParamLimits

0x90c0,	// (0x000531fb) list_double2_graphic_pane_g2_cp2

0x90d1,	// (0x0005320c) list_double2_graphic_pane_g3_cp2

0x90db,	// (0x00053216) list_double2_graphic_pane_t1_cp2_ParamLimits

0x90db,	// (0x00053216) list_double2_graphic_pane_t1_cp2

0x90f1,	// (0x0005322c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x90f1,	// (0x0005322c) list_double2_graphic_pane_t2_cp2

0x9103,	// (0x0005323e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9103,	// (0x0005323e) list_single_number_heading_pane_g1_cp2

0x910f,	// (0x0005324a) list_single_number_heading_pane_g2_cp2

0x9117,	// (0x00053252) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9117,	// (0x00053252) list_single_number_heading_pane_t1_cp2

0x912d,	// (0x00053268) list_single_number_heading_pane_t2_cp2_ParamLimits

0x912d,	// (0x00053268) list_single_number_heading_pane_t2_cp2

0x913f,	// (0x0005327a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x913f,	// (0x0005327a) list_single_number_heading_pane_t3_cp2

0x9103,	// (0x0005323e) list_single_heading_pane_g1_cp2_ParamLimits

0x9103,	// (0x0005323e) list_single_heading_pane_g1_cp2

0x910f,	// (0x0005324a) list_single_heading_pane_g2_cp2

0x9117,	// (0x00053252) list_single_heading_pane_t1_cp2_ParamLimits

0x9117,	// (0x00053252) list_single_heading_pane_t1_cp2

0xaa1f,	// (0x00054b5a) list_single_heading_pane_t2_cp2_ParamLimits

0xaa1f,	// (0x00054b5a) list_single_heading_pane_t2_cp2

0xa967,	// (0x00054aa2) list_double_graphic_pane_g1_cp2_ParamLimits

0xa967,	// (0x00054aa2) list_double_graphic_pane_g1_cp2

0xa973,	// (0x00054aae) list_double_graphic_pane_g2_cp2_ParamLimits

0xa973,	// (0x00054aae) list_double_graphic_pane_g2_cp2

0xa982,	// (0x00054abd) list_double_graphic_pane_g3_cp2

0xa98a,	// (0x00054ac5) list_double_graphic_pane_t1_cp2_ParamLimits

0xa98a,	// (0x00054ac5) list_double_graphic_pane_t1_cp2

0xa9a0,	// (0x00054adb) list_double_graphic_pane_t2_cp2_ParamLimits

0xa9a0,	// (0x00054adb) list_double_graphic_pane_t2_cp2

0x91b4,	// (0x000532ef) list_double_number_pane_g1_cp2_ParamLimits

0x91b4,	// (0x000532ef) list_double_number_pane_g1_cp2

0x91c0,	// (0x000532fb) list_double_number_pane_g2_cp2

0xa92b,	// (0x00054a66) list_double_number_pane_t1_cp2_ParamLimits

0xa92b,	// (0x00054a66) list_double_number_pane_t1_cp2

0xa93f,	// (0x00054a7a) list_double_number_pane_t2_cp2_ParamLimits

0xa93f,	// (0x00054a7a) list_double_number_pane_t2_cp2

0xa955,	// (0x00054a90) list_double_number_pane_t3_cp2_ParamLimits

0xa955,	// (0x00054a90) list_double_number_pane_t3_cp2

0xa814,	// (0x0005494f) list_single_graphic_pane_g1_cp2_ParamLimits

0xa814,	// (0x0005494f) list_single_graphic_pane_g1_cp2

0x9218,	// (0x00053353) list_single_graphic_pane_g2_cp2_ParamLimits

0x9218,	// (0x00053353) list_single_graphic_pane_g2_cp2

0x9224,	// (0x0005335f) list_single_graphic_pane_g3_cp2

0xa7ea,	// (0x00054925) list_single_graphic_pane_t1_cp2_ParamLimits

0xa7ea,	// (0x00054925) list_single_graphic_pane_t1_cp2

0x9218,	// (0x00053353) list_single_number_pane_g1_cp2_ParamLimits

0x9218,	// (0x00053353) list_single_number_pane_g1_cp2

0x9224,	// (0x0005335f) list_single_number_pane_g2_cp2

0xa7ea,	// (0x00054925) list_single_number_pane_t1_cp2_ParamLimits

0xa7ea,	// (0x00054925) list_single_number_pane_t1_cp2

0xa800,	// (0x0005493b) list_single_number_pane_t2_cp2_ParamLimits

0xa800,	// (0x0005493b) list_single_number_pane_t2_cp2

0x9021,	// (0x0005315c) list_double2_pane_g1_cp2_ParamLimits

0x9021,	// (0x0005315c) list_double2_pane_g1_cp2

0x9032,	// (0x0005316d) list_double2_pane_g2_cp2

0x918c,	// (0x000532c7) list_double2_pane_t1_cp2_ParamLimits

0x918c,	// (0x000532c7) list_double2_pane_t1_cp2

0x91a2,	// (0x000532dd) list_double2_pane_t2_cp2_ParamLimits

0x91a2,	// (0x000532dd) list_double2_pane_t2_cp2

0x91b4,	// (0x000532ef) list_double_pane_g1_cp2_ParamLimits

0x91b4,	// (0x000532ef) list_double_pane_g1_cp2

0x91c0,	// (0x000532fb) list_double_pane_g2_cp2

0x91c8,	// (0x00053303) list_double_pane_t1_cp2_ParamLimits

0x91c8,	// (0x00053303) list_double_pane_t1_cp2

0x91de,	// (0x00053319) list_double_pane_t2_cp2_ParamLimits

0x91de,	// (0x00053319) list_double_pane_t2_cp2

0x9208,	// (0x00053343) list_single_pane_cp2_g3

0x9218,	// (0x00053353) list_single_pane_g1_cp2_ParamLimits

0x9218,	// (0x00053353) list_single_pane_g1_cp2

0x9224,	// (0x0005335f) list_single_pane_g2_cp2

0x922c,	// (0x00053367) list_single_pane_t1_cp2_ParamLimits

0x922c,	// (0x00053367) list_single_pane_t1_cp2

0x9244,	// (0x0005337f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9244,	// (0x0005337f) list_single_large_graphic_pane_g1_cp2

0x9250,	// (0x0005338b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9250,	// (0x0005338b) list_single_large_graphic_pane_g2_cp2

0x925c,	// (0x00053397) list_single_large_graphic_pane_g3_cp2

0x9264,	// (0x0005339f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9264,	// (0x0005339f) list_single_large_graphic_pane_g4_cp1

0x927e,	// (0x000533b9) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x927e,	// (0x000533b9) list_single_large_graphic_pane_t1_cp2

0xa7b6,	// (0x000548f1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa7b6,	// (0x000548f1) list_single_graphic_heading_pane_g1_cp2

0xa783,	// (0x000548be) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa783,	// (0x000548be) list_single_graphic_heading_pane_g4_cp2

0x9224,	// (0x0005335f) list_single_graphic_heading_pane_g5_cp2

0xa7c2,	// (0x000548fd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa7c2,	// (0x000548fd) list_single_graphic_heading_pane_t1_cp2

0xa7d8,	// (0x00054913) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa7d8,	// (0x00054913) list_single_graphic_heading_pane_t2_cp2

0xa777,	// (0x000548b2) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa777,	// (0x000548b2) list_single_2graphic_pane_g1_cp2

0xa783,	// (0x000548be) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa783,	// (0x000548be) list_single_2graphic_pane_g2_cp2

0x9224,	// (0x0005335f) list_single_2graphic_pane_g3_cp2

0xa794,	// (0x000548cf) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa794,	// (0x000548cf) list_single_2graphic_pane_g4_cp2

0xa7a0,	// (0x000548db) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa7a0,	// (0x000548db) list_single_2graphic_pane_t1_cp2

0x7d02,	// (0x00051e3d) list_highlight_pane_g10_cp1

0xa34f,	// (0x0005448a) list_highlight_pane_g1_cp1

0xa357,	// (0x00054492) list_highlight_pane_g2_cp1

0xa35f,	// (0x0005449a) list_highlight_pane_g3_cp1

0xa367,	// (0x000544a2) list_highlight_pane_g4_cp1

0xa36f,	// (0x000544aa) list_highlight_pane_g5_cp1

0xa377,	// (0x000544b2) list_highlight_pane_g6_cp1

0xa37f,	// (0x000544ba) list_highlight_pane_g7_cp1

0xa387,	// (0x000544c2) list_highlight_pane_g8_cp1

0xa38f,	// (0x000544ca) list_highlight_pane_g9_cp1

0xa26f,	// (0x000543aa) form_field_slider_pane_t3

0xa27d,	// (0x000543b8) form_field_slider_pane_t4

0xa28b,	// (0x000543c6) slider_form_pane_ParamLimits

0xa28b,	// (0x000543c6) slider_form_pane

0x7d0c,	// (0x00051e47) control_abbreviations

0x7d0c,	// (0x00051e47) control_conventions

0x7d0c,	// (0x00051e47) control_definitions

0x7d0c,	// (0x00051e47) format_table_attribute

0xaa69,	// (0x00054ba4) bg_popup_preview_window_pane_g9

0x7d0c,	// (0x00051e47) format_table_data2

0x7d0c,	// (0x00051e47) format_table_data3

0x7d0c,	// (0x00051e47) format_table_data_example

0x0008,

0x7d0c,	// (0x00051e47) intro_purpose

0xf8fa,	// (0x00059a35) bg_popup_preview_window_pane_g

0x7d0c,	// (0x00051e47) texts_category

0x7d0c,	// (0x00051e47) texts_graphics

0x9294,	// (0x000533cf) text_digital

0x92a3,	// (0x000533de) text_primary

0x92b2,	// (0x000533ed) text_primary_small

0x92c1,	// (0x000533fc) text_secondary

0x92d0,	// (0x0005340b) text_title

0xb14b,	// (0x00055286) bg_passive_tab_pane_g1_cp3_srt

0x8f2c,	// (0x00053067) bg_passive_tab_pane_g2_cp3_srt

0xb154,	// (0x0005528f) bg_passive_tab_pane_g3_cp3_srt

0x7dec,	// (0x00051f27) bg_active_tab_pane_cp3_srt_ParamLimits

0x7dec,	// (0x00051f27) bg_active_tab_pane_cp3_srt

0xb15d,	// (0x00055298) tabs_4_active_pane_srt_g1

0xb165,	// (0x000552a0) tabs_4_active_pane_srt_t1_ParamLimits

0xb165,	// (0x000552a0) tabs_4_active_pane_srt_t1

0xb14b,	// (0x00055286) bg_active_tab_pane_g1_cp3_copy1

0x8f2c,	// (0x00053067) bg_active_tab_pane_g2_cp3_copy1

0xb154,	// (0x0005528f) bg_active_tab_pane_g3_cp3_copy1

0x7dec,	// (0x00051f27) tabs_2_long_active_pane_srt_ParamLimits

0x7dec,	// (0x00051f27) tabs_2_long_active_pane_srt

0x7dec,	// (0x00051f27) tabs_2_long_passive_pane_srt_ParamLimits

0x7dec,	// (0x00051f27) tabs_2_long_passive_pane_srt

0x883c,	// (0x00052977) bg_passive_tab_pane_cp4_srt_ParamLimits

0x883c,	// (0x00052977) bg_passive_tab_pane_cp4_srt

0xae94,	// (0x00054fcf) bg_passive_tab_pane_g1_cp4_srt

0x8f2c,	// (0x00053067) bg_passive_tab_pane_g2_cp4_srt

0xae9d,	// (0x00054fd8) bg_passive_tab_pane_g3_cp4_srt

0x881b,	// (0x00052956) bg_active_tab_pane_cp4_srt_ParamLimits

0x881b,	// (0x00052956) bg_active_tab_pane_cp4_srt

0xaea6,	// (0x00054fe1) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaea6,	// (0x00054fe1) tabs_2_long_active_pane_srt_t1

0xae94,	// (0x00054fcf) bg_active_tab_pane_g1_cp4_srt

0x8f2c,	// (0x00053067) bg_active_tab_pane_g2_cp4_srt

0xae9d,	// (0x00054fd8) bg_active_tab_pane_g3_cp4_srt

0x8067,	// (0x000521a2) tabs_3_long_active_pane_srt_ParamLimits

0x8067,	// (0x000521a2) tabs_3_long_active_pane_srt

0x8067,	// (0x000521a2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8067,	// (0x000521a2) tabs_3_long_passive_pane_cp_srt

0x8067,	// (0x000521a2) tabs_3_long_passive_pane_srt_ParamLimits

0x8067,	// (0x000521a2) tabs_3_long_passive_pane_srt

0x883c,	// (0x00052977) bg_passive_tab_pane_cp5_srt_ParamLimits

0x883c,	// (0x00052977) bg_passive_tab_pane_cp5_srt

0x8fb6,	// (0x000530f1) bg_passive_tab_pane_g1_cp5_srt

0x8f2c,	// (0x00053067) bg_passive_tab_pane_g2_cp5_srt

0x8fbf,	// (0x000530fa) bg_passive_tab_pane_g3_cp5_srt

0x881b,	// (0x00052956) bg_active_tab_pane_cp5_srt_ParamLimits

0x881b,	// (0x00052956) bg_active_tab_pane_cp5_srt

0xae82,	// (0x00054fbd) tabs_3_long_active_pane_srt_t1_ParamLimits

0xae82,	// (0x00054fbd) tabs_3_long_active_pane_srt_t1

0x8fb6,	// (0x000530f1) bg_active_tab_pane_g1_cp5_srt

0x8f2c,	// (0x00053067) bg_active_tab_pane_g2_cp5_srt

0x8fbf,	// (0x000530fa) bg_active_tab_pane_g3_cp5_srt

0xae74,	// (0x00054faf) navi_text_pane_srt_t1

0xae6c,	// (0x00054fa7) navi_icon_pane_srt_g1

0x9497,	// (0x000535d2) midp_editing_number_pane_srt

0x92df,	// (0x0005341a) midp_ticker_pane_srt

0x949f,	// (0x000535da) midp_ticker_pane_srt_g1

0x94a7,	// (0x000535e2) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x000598b8) midp_ticker_pane_srt_g

0x94af,	// (0x000535ea) midp_ticker_pane_srt_t1

0xae5d,	// (0x00054f98) midp_editing_number_pane_t1_copy1

0x883c,	// (0x00052977) listscroll_midp_pane

0x883c,	// (0x00052977) midp_form_pane

0x9349,	// (0x00053484) midp_info_popup_window_ParamLimits

0x9349,	// (0x00053484) midp_info_popup_window

0x8704,	// (0x0005283f) bg_popup_sub_pane_cp50_ParamLimits

0x8704,	// (0x0005283f) bg_popup_sub_pane_cp50

0x9f87,	// (0x000540c2) listscroll_midp_info_pane_ParamLimits

0x9f87,	// (0x000540c2) listscroll_midp_info_pane

0x9f6f,	// (0x000540aa) listscroll_form_midp_pane_ParamLimits

0x9f6f,	// (0x000540aa) listscroll_form_midp_pane

0x9f7b,	// (0x000540b6) scroll_bar_cp050

0x9f4f,	// (0x0005408a) list_midp_pane

0xbbdd,	// (0x00055d18) signal_pane_g2_cp

0x9e89,	// (0x00053fc4) listscroll_midp_info_pane_t1_ParamLimits

0x9e89,	// (0x00053fc4) listscroll_midp_info_pane_t1

0x9ea1,	// (0x00053fdc) listscroll_midp_info_pane_t2_ParamLimits

0x9ea1,	// (0x00053fdc) listscroll_midp_info_pane_t2

0x9edf,	// (0x0005401a) listscroll_midp_info_pane_t3_ParamLimits

0x9edf,	// (0x0005401a) listscroll_midp_info_pane_t3

0x9f19,	// (0x00054054) listscroll_midp_info_pane_t4_ParamLimits

0x9f19,	// (0x00054054) listscroll_midp_info_pane_t4

0x0003,

0xf835,	// (0x00059970) listscroll_midp_info_pane_t_ParamLimits

0xf835,	// (0x00059970) listscroll_midp_info_pane_t

0x87c8,	// (0x00052903) scroll_pane_cp21

0x9e27,	// (0x00053f62) form_midp_field_choice_group_pane

0x9e30,	// (0x00053f6b) form_midp_field_text_pane

0x9e6f,	// (0x00053faa) form_midp_field_time_pane

0x9e77,	// (0x00053fb2) form_midp_gauge_slider_pane

0x9e80,	// (0x00053fbb) form_midp_gauge_wait_pane

0x7d0c,	// (0x00051e47) form_midp_image_pane

0x74fc,	// (0x00051637) list_single_midp_pane_ParamLimits

0x74fc,	// (0x00051637) list_single_midp_pane

0x9ddf,	// (0x00053f1a) form_midp_field_text_pane_t1

0x9ba9,	// (0x00053ce4) input_focus_pane_cp050

0x9e16,	// (0x00053f51) list_midp_form_text_pane

0x9dae,	// (0x00053ee9) form_midp_field_choice_group_pane_t1

0x9dbc,	// (0x00053ef7) input_focus_pane_cp051

0x9dd0,	// (0x00053f0b) list_midp_choice_pane

0x7d0c,	// (0x00051e47) status_idle_pane

0x9d92,	// (0x00053ecd) form_midp_field_time_pane_t1

0x7d02,	// (0x00051e3d) wait_anim_pane_g2_copy1

0x9da0,	// (0x00053edb) form_midp_field_time_pane_t2

0x0001,

0x93f7,	// (0x00053532) aid_navinavi_width_2_pane

0xf830,	// (0x0005996b) form_midp_field_time_pane_t

0x7d0c,	// (0x00051e47) input_focus_pane_cp052

0x7d0c,	// (0x00051e47) bg_input_focus_pane_cp040

0x9d52,	// (0x00053e8d) form_midp_gauge_slider_pane_t1

0x9d60,	// (0x00053e9b) form_midp_gauge_slider_pane_t2

0x9d6e,	// (0x00053ea9) form_midp_gauge_slider_pane_t3

0x9d7c,	// (0x00053eb7) form_midp_gauge_slider_pane_t4

0x0003,

0xf827,	// (0x00059962) form_midp_gauge_slider_pane_t

0x9d8a,	// (0x00053ec5) form_midp_slider_pane

0x7dec,	// (0x00051f27) bg_input_focus_pane_cp041_ParamLimits

0x7dec,	// (0x00051f27) bg_input_focus_pane_cp041

0x9d1f,	// (0x00053e5a) form_midp_gauge_wait_pane_t1_ParamLimits

0x9d1f,	// (0x00053e5a) form_midp_gauge_wait_pane_t1

0x9d31,	// (0x00053e6c) form_midp_gauge_wait_pane_t2_ParamLimits

0x9d31,	// (0x00053e6c) form_midp_gauge_wait_pane_t2

0x0001,

0xf822,	// (0x0005995d) form_midp_gauge_wait_pane_t_ParamLimits

0xf822,	// (0x0005995d) form_midp_gauge_wait_pane_t

0x9d43,	// (0x00053e7e) form_midp_wait_pane_ParamLimits

0x9d43,	// (0x00053e7e) form_midp_wait_pane

0x9ce9,	// (0x00053e24) form_midp_image_pane_g1

0x9cf2,	// (0x00053e2d) form_midp_image_pane_t1

0x9d01,	// (0x00053e3c) form_midp_image_pane_t2

0x9d10,	// (0x00053e4b) form_midp_image_pane_t3

0x0002,

0xf81b,	// (0x00059956) form_midp_image_pane_t

0x9ce0,	// (0x00053e1b) list_single_midp_pane_g1

0x74ed,	// (0x00051628) list_single_midp_pane_t1

0x9cb8,	// (0x00053df3) list_midp_form_item_pane_ParamLimits

0x9cb8,	// (0x00053df3) list_midp_form_item_pane

0x939f,	// (0x000534da) list_midp_form_item_pane_t1

0x93ae,	// (0x000534e9) midp_ticker_pane_g1

0x93ba,	// (0x000534f5) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0005989e) midp_ticker_pane_g

0x93c6,	// (0x00053501) midp_ticker_pane_t1

0xb0ae,	// (0x000551e9) midp_editing_number_pane_t1

0xb08c,	// (0x000551c7) midp_editing_number_pane

0xb09b,	// (0x000551d6) midp_ticker_pane

0xae4d,	// (0x00054f88) ai_message_heading_pane

0x7d0c,	// (0x00051e47) bg_popup_window_pane_cp14

0xae55,	// (0x00054f90) listscroll_ai_message_pane

0xadd7,	// (0x00054f12) ai_message_heading_pane_g1_ParamLimits

0xadd7,	// (0x00054f12) ai_message_heading_pane_g1

0xade3,	// (0x00054f1e) ai_message_heading_pane_g2_ParamLimits

0xade3,	// (0x00054f1e) ai_message_heading_pane_g2

0xadef,	// (0x00054f2a) ai_message_heading_pane_g3_ParamLimits

0xadef,	// (0x00054f2a) ai_message_heading_pane_g3

0xadfb,	// (0x00054f36) ai_message_heading_pane_g4_ParamLimits

0xadfb,	// (0x00054f36) ai_message_heading_pane_g4

0x0003,

0xf95c,	// (0x00059a97) ai_message_heading_pane_g_ParamLimits

0xf95c,	// (0x00059a97) ai_message_heading_pane_g

0xae07,	// (0x00054f42) ai_message_heading_pane_t1_ParamLimits

0xae07,	// (0x00054f42) ai_message_heading_pane_t1

0xae21,	// (0x00054f5c) ai_message_heading_pane_t2_ParamLimits

0xae21,	// (0x00054f5c) ai_message_heading_pane_t2

0x0001,

0xf965,	// (0x00059aa0) ai_message_heading_pane_t_ParamLimits

0xf965,	// (0x00059aa0) ai_message_heading_pane_t

0xae33,	// (0x00054f6e) bg_popup_heading_pane_cp1_ParamLimits

0xae33,	// (0x00054f6e) bg_popup_heading_pane_cp1

0xadc5,	// (0x00054f00) list_ai_message_pane_ParamLimits

0xadc5,	// (0x00054f00) list_ai_message_pane

0x87c8,	// (0x00052903) scroll_pane_cp10

0xad61,	// (0x00054e9c) list_ai_message_pane_g1

0xad69,	// (0x00054ea4) list_ai_message_pane_g2

0x0001,

0xf939,	// (0x00059a74) list_ai_message_pane_g

0xad71,	// (0x00054eac) list_ai_message_pane_t1_ParamLimits

0xad71,	// (0x00054eac) list_ai_message_pane_t1

0xad86,	// (0x00054ec1) list_ai_message_pane_t2_ParamLimits

0xad86,	// (0x00054ec1) list_ai_message_pane_t2

0xad9b,	// (0x00054ed6) list_ai_message_pane_t3_ParamLimits

0xad9b,	// (0x00054ed6) list_ai_message_pane_t3

0xadb0,	// (0x00054eeb) list_ai_message_pane_t4_ParamLimits

0xadb0,	// (0x00054eeb) list_ai_message_pane_t4

0x0003,

0xf93e,	// (0x00059a79) list_ai_message_pane_t_ParamLimits

0xf93e,	// (0x00059a79) list_ai_message_pane_t

0xad4c,	// (0x00054e87) cell_ai_soft_ind_pane_ParamLimits

0xad4c,	// (0x00054e87) cell_ai_soft_ind_pane

0x93d8,	// (0x00053513) cell_ai_soft_ind_pane_g1_ParamLimits

0x93d8,	// (0x00053513) cell_ai_soft_ind_pane_g1

0x7d0c,	// (0x00051e47) grid_highlight_cp1

0x93e5,	// (0x00053520) text_secondary_cp56_ParamLimits

0x93e5,	// (0x00053520) text_secondary_cp56

0xad21,	// (0x00054e5c) example_general_pane_ParamLimits

0xad21,	// (0x00054e5c) example_general_pane

0xad2d,	// (0x00054e68) example_parent_pane_g1_ParamLimits

0xad2d,	// (0x00054e68) example_parent_pane_g1

0xad39,	// (0x00054e74) example_parent_pane_t1_ParamLimits

0xad39,	// (0x00054e74) example_parent_pane_t1

0x5e52,	// (0x0004ff8d) popup_preview_text_window_ParamLimits

0x5e52,	// (0x0004ff8d) popup_preview_text_window

0x9210,	// (0x0005334b) list_single_pane_cp2_g4

0x811d,	// (0x00052258) bg_popup_preview_window_pane_ParamLimits

0x811d,	// (0x00052258) bg_popup_preview_window_pane

0xaa71,	// (0x00054bac) popup_preview_text_window_t1_ParamLimits

0xaa71,	// (0x00054bac) popup_preview_text_window_t1

0xaa8f,	// (0x00054bca) popup_preview_text_window_t2_ParamLimits

0xaa8f,	// (0x00054bca) popup_preview_text_window_t2

0xaad8,	// (0x00054c13) popup_preview_text_window_t3_ParamLimits

0xaad8,	// (0x00054c13) popup_preview_text_window_t3

0xab1d,	// (0x00054c58) popup_preview_text_window_t4_ParamLimits

0xab1d,	// (0x00054c58) popup_preview_text_window_t4

0x0004,

0xf90d,	// (0x00059a48) popup_preview_text_window_t_ParamLimits

0xf90d,	// (0x00059a48) popup_preview_text_window_t

0xab9b,	// (0x00054cd6) scroll_pane_cp11

0x9b35,	// (0x00053c70) bg_popup_preview_window_pane_g1

0xaa31,	// (0x00054b6c) bg_popup_preview_window_pane_g2

0xaa39,	// (0x00054b74) bg_popup_preview_window_pane_g3

0xaa41,	// (0x00054b7c) bg_popup_preview_window_pane_g4

0xaa49,	// (0x00054b84) bg_popup_preview_window_pane_g5

0xaa51,	// (0x00054b8c) bg_popup_preview_window_pane_g6

0xaa59,	// (0x00054b94) bg_popup_preview_window_pane_g7

0xaa61,	// (0x00054b9c) bg_popup_preview_window_pane_g8

0x48ea,	// (0x0004ea25) aid_popup_width_pane

0x5e30,	// (0x0004ff6b) popup_midp_note_alarm_window_ParamLimits

0x5e30,	// (0x0004ff6b) popup_midp_note_alarm_window

0x8658,	// (0x00052793) data_form_pane_ParamLimits

0x529d,	// (0x0004f3d8) form_field_data_pane_g1

0x52a7,	// (0x0004f3e2) form_field_data_pane_t1_ParamLimits

0x8664,	// (0x0005279f) input_focus_pane_ParamLimits

0x52bf,	// (0x0004f3fa) data_form_wide_pane_ParamLimits

0x52d0,	// (0x0004f40b) form_field_data_wide_pane_g1

0x52dc,	// (0x0004f417) form_field_data_wide_pane_t1_ParamLimits

0x83c9,	// (0x00052504) input_focus_pane_cp6_ParamLimits

0x8775,	// (0x000528b0) input_popup_find_pane_g1_ParamLimits

0x8775,	// (0x000528b0) input_popup_find_pane_g1

0x5552,	// (0x0004f68d) aid_navi_side_left_pane

0x5567,	// (0x0004f6a2) aid_navi_side_right_pane

0xa44a,	// (0x00054585) bg_popup_window_pane_cp30_ParamLimits

0xa44a,	// (0x00054585) bg_popup_window_pane_cp30

0xa4c4,	// (0x000545ff) popup_midp_note_alarm_window_g1_ParamLimits

0xa4c4,	// (0x000545ff) popup_midp_note_alarm_window_g1

0xa4f4,	// (0x0005462f) popup_midp_note_alarm_window_t1_ParamLimits

0xa4f4,	// (0x0005462f) popup_midp_note_alarm_window_t1

0xa595,	// (0x000546d0) popup_midp_note_alarm_window_t2_ParamLimits

0xa595,	// (0x000546d0) popup_midp_note_alarm_window_t2

0xa643,	// (0x0005477e) popup_midp_note_alarm_window_t3_ParamLimits

0xa643,	// (0x0005477e) popup_midp_note_alarm_window_t3

0xa675,	// (0x000547b0) popup_midp_note_alarm_window_t4_ParamLimits

0xa675,	// (0x000547b0) popup_midp_note_alarm_window_t4

0xa69b,	// (0x000547d6) popup_midp_note_alarm_window_t5_ParamLimits

0xa69b,	// (0x000547d6) popup_midp_note_alarm_window_t5

0x000a,

0xf8aa,	// (0x000599e5) popup_midp_note_alarm_window_t_ParamLimits

0xf8aa,	// (0x000599e5) popup_midp_note_alarm_window_t

0xa747,	// (0x00054882) wait_bar_pane_cp1_ParamLimits

0xa747,	// (0x00054882) wait_bar_pane_cp1

0x7d0c,	// (0x00051e47) wait_anim_pane_copy1

0x7d0c,	// (0x00051e47) wait_border_pane_copy1

0xa130,	// (0x0005426b) wait_border_pane_g1_copy1

0x52f6,	// (0x0004f431) form_field_popup_pane_g1

0x52fe,	// (0x0004f439) form_field_popup_pane_t1_ParamLimits

0x8664,	// (0x0005279f) input_focus_pane_cp7_ParamLimits

0x8686,	// (0x000527c1) list_form_pane_ParamLimits

0x5316,	// (0x0004f451) form_field_popup_wide_pane_g1

0x531e,	// (0x0004f459) form_field_popup_wide_pane_t1_ParamLimits

0x8664,	// (0x0005279f) input_focus_pane_cp8_ParamLimits

0x8692,	// (0x000527cd) list_form_wide_pane_ParamLimits

0xb1d7,	// (0x00055312) aid_size_cell_graphic_pane

0x53a8,	// (0x0004f4e3) data_form_pane_t1_ParamLimits

0x754f,	// (0x0005168a) data_form_wide_pane_t1_ParamLimits

0x96f6,	// (0x00053831) bg_status_flat_pane

0x7d4c,	// (0x00051e87) title_pane_t1_ParamLimits

0x7db4,	// (0x00051eef) title_pane_t2_ParamLimits

0x7dda,	// (0x00051f15) title_pane_t3_ParamLimits

0xf55d,	// (0x00059698) title_pane_t_ParamLimits

0x8c43,	// (0x00052d7e) level_1_signal_ParamLimits

0x8c55,	// (0x00052d90) level_2_signal_ParamLimits

0x8c68,	// (0x00052da3) level_3_signal_ParamLimits

0x8c7b,	// (0x00052db6) level_4_signal_ParamLimits

0x8c8e,	// (0x00052dc9) level_5_signal_ParamLimits

0x8ca1,	// (0x00052ddc) level_6_signal_ParamLimits

0x8cb4,	// (0x00052def) level_7_signal_ParamLimits

0x8c43,	// (0x00052d7e) level_1_battery_ParamLimits

0x8c55,	// (0x00052d90) level_2_battery_ParamLimits

0x8c68,	// (0x00052da3) level_3_battery_ParamLimits

0x8c7b,	// (0x00052db6) level_4_battery_ParamLimits

0x8c8e,	// (0x00052dc9) level_5_battery_ParamLimits

0x8ca1,	// (0x00052ddc) level_6_battery_ParamLimits

0x8cb4,	// (0x00052def) level_7_battery_ParamLimits

0xa34f,	// (0x0005448a) bg_status_flat_pane_g1

0xa357,	// (0x00054492) bg_status_flat_pane_g2

0xa35f,	// (0x0005449a) bg_status_flat_pane_g3

0xa367,	// (0x000544a2) bg_status_flat_pane_g4

0xa36f,	// (0x000544aa) bg_status_flat_pane_g5

0xa377,	// (0x000544b2) bg_status_flat_pane_g6

0xa37f,	// (0x000544ba) bg_status_flat_pane_g7

0x7e02,	// (0x00051f3d) tabs_3_active_pane_t1_ParamLimits

0x7e02,	// (0x00051f3d) tabs_3_passive_pane_t1_ParamLimits

0x7e1c,	// (0x00051f57) tabs_4_active_pane_t1_ParamLimits

0x7e1c,	// (0x00051f57) tabs_4_1_passive_pane_t1_ParamLimits

0x8809,	// (0x00052944) tabs_2_active_pane_t1_ParamLimits

0x8809,	// (0x00052944) tabs_2_passive_pane_t1_ParamLimits

0x881b,	// (0x00052956) bg_active_tab_pane_cp4_ParamLimits

0x8829,	// (0x00052964) tabs_2_long_active_pane_t1_ParamLimits

0x883c,	// (0x00052977) bg_passive_tab_pane_cp4_ParamLimits

0x6145,	// (0x00050280) list_single_midp_graphic_pane_t1_ParamLimits

0x881b,	// (0x00052956) bg_active_tab_pane_cp5_ParamLimits

0x8848,	// (0x00052983) tabs_3_long_active_pane_t1_ParamLimits

0x883c,	// (0x00052977) bg_passive_tab_pane_cp5_ParamLimits

0x6145,	// (0x00050280) list_single_midp_graphic_pane_t1

0x96f6,	// (0x00053831) bg_status_flat_pane_ParamLimits

0x97c5,	// (0x00053900) indicator_pane_cp2_ParamLimits

0x97c5,	// (0x00053900) indicator_pane_cp2

0x98f0,	// (0x00053a2b) navi_pane_srt_ParamLimits

0x98f0,	// (0x00053a2b) navi_pane_srt

0x9914,	// (0x00053a4f) popup_clock_digital_analogue_window_cp1

0x7ec9,	// (0x00052004) indicator_pane_t1

0x92df,	// (0x0005341a) copy_highlight_pane

0x92df,	// (0x0005341a) cursor_graphics_pane

0x92df,	// (0x0005341a) graphic_within_text_pane

0x92df,	// (0x0005341a) link_highlight_pane

0xab5e,	// (0x00054c99) popup_preview_text_window_t5_ParamLimits

0xab5e,	// (0x00054c99) popup_preview_text_window_t5

0x93ff,	// (0x0005353a) cursor_digital_pane

0x93ff,	// (0x0005353a) cursor_primary_pane

0x9410,	// (0x0005354b) cursor_primary_small_pane

0x9418,	// (0x00053553) cursor_secondary_pane

0x9420,	// (0x0005355b) cursor_title_pane

0x93ff,	// (0x0005353a) link_highlight_digital_pane

0x9407,	// (0x00053542) link_highlight_primary_pane

0x9410,	// (0x0005354b) link_highlight_primary_small_pane

0x9418,	// (0x00053553) link_highlight_secondary_pane

0x9420,	// (0x0005355b) link_highlight_title_pane

0x93ff,	// (0x0005353a) copy_highlight_digital_pane

0x93ff,	// (0x0005353a) copy_highlight_primary_pane

0x9410,	// (0x0005354b) copy_highlight_primary_small_pane

0x9418,	// (0x00053553) copy_highlight_secondary_pane

0x9420,	// (0x0005355b) copy_highlight_title_pane

0x9418,	// (0x00053553) graphic_text_digital_pane

0xa3ed,	// (0x00054528) graphic_text_primary_pane

0xa3f6,	// (0x00054531) graphic_text_primary_small_pane

0x9410,	// (0x0005354b) graphic_text_secondary_pane

0x93ff,	// (0x0005353a) graphic_text_title_pane

0x9428,	// (0x00053563) cursor_primary_pane_g1

0xa3df,	// (0x0005451a) cursor_text_primary_t1

0xa3c7,	// (0x00054502) cursor_primary_small_pane_g1

0xa3d1,	// (0x0005450c) cursor_text_primary_small_t1

0xa3af,	// (0x000544ea) cursor_primary_small_pane_g1_copy1

0xa3b9,	// (0x000544f4) cursor_text_primary_small_t1_copy1

0xa397,	// (0x000544d2) cursor_text_title_t1

0xa3a5,	// (0x000544e0) cursor_title_pane_g1

0x9428,	// (0x00053563) cursor_digital_pane_g1

0x9432,	// (0x0005356d) cursor_text_digital_t1

0x9457,	// (0x00053592) link_highlight_primary_pane_g1

0xa340,	// (0x0005447b) link_highlight_primary_pane_t1

0x9440,	// (0x0005357b) link_highlight_primary_small_pane_g1

0x9448,	// (0x00053583) link_highlight_primary_small_pane_t1

0x9457,	// (0x00053592) link_highlight_secondary_pane_g1

0x945f,	// (0x0005359a) link_highlight_secondary_pane_t1

0xa2b4,	// (0x000543ef) link_highlight_title_pane_g1

0xa2bc,	// (0x000543f7) link_highlight_title_pane_t1

0xa29d,	// (0x000543d8) link_highlight_digital_pane_g1

0xa2a5,	// (0x000543e0) link_highlight_digital_pane_t1

0xa175,	// (0x000542b0) copy_highlight_primary_pane_g1

0xa17d,	// (0x000542b8) copy_highlight_primary_pane_t1

0xa14f,	// (0x0005428a) copy_highlight_primary_small_pane_g1

0xa166,	// (0x000542a1) copy_highlight_primary_small_pane_t1

0x946e,	// (0x000535a9) copy_highlight_secondary_pane_g1

0x9476,	// (0x000535b1) copy_highlight_secondary_pane_t1

0xa14f,	// (0x0005428a) copy_highlight_title_pane_g1

0xa157,	// (0x00054292) copy_highlight_title_pane_t1

0xa175,	// (0x000542b0) copy_highlight_digital_pane_g1

0xb3e3,	// (0x0005551e) copy_highlight_digital_pane_t1

0xb337,	// (0x00055472) graphic_text_primary_pane_g1

0xb3c7,	// (0x00055502) graphic_text_primary_pane_t1

0xb3d5,	// (0x00055510) graphic_text_primary_pane_t2

0x0001,

0xf9d9,	// (0x00059b14) graphic_text_primary_pane_t

0xb3a3,	// (0x000554de) graphic_text_primary_small_pane_g1

0xb3ab,	// (0x000554e6) graphic_text_primary_small_pane_t1

0xb3b9,	// (0x000554f4) graphic_text_primary_small_pane_t2

0x0001,

0xf9d4,	// (0x00059b0f) graphic_text_primary_small_pane_t

0xb37f,	// (0x000554ba) graphic_text_secondary_pane_g1

0xb387,	// (0x000554c2) graphic_text_secondary_pane_t1

0xb395,	// (0x000554d0) graphic_text_secondary_pane_t2

0x0001,

0xf9cf,	// (0x00059b0a) graphic_text_secondary_pane_t

0xb35b,	// (0x00055496) graphic_text_title_pane_g1

0xb363,	// (0x0005549e) graphic_text_title_pane_t1

0xb371,	// (0x000554ac) graphic_text_title_pane_t2

0x0001,

0xf9ca,	// (0x00059b05) graphic_text_title_pane_t

0xb337,	// (0x00055472) graphic_text_digital_pane_g1

0xb33f,	// (0x0005547a) graphic_text_digital_pane_t1

0xb34d,	// (0x00055488) graphic_text_digital_pane_t2

0x0001,

0xf9c5,	// (0x00059b00) graphic_text_digital_pane_t

0x7dec,	// (0x00051f27) navi_icon_pane_srt_ParamLimits

0x7dec,	// (0x00051f27) navi_icon_pane_srt

0x7d0c,	// (0x00051e47) navi_midp_pane_srt

0x7d0c,	// (0x00051e47) navi_navi_pane_srt

0x7dec,	// (0x00051f27) navi_text_pane_srt_ParamLimits

0x7dec,	// (0x00051f27) navi_text_pane_srt

0xb302,	// (0x0005543d) navi_navi_icon_text_pane_srt

0xb30a,	// (0x00055445) navi_navi_pane_srt_g1_ParamLimits

0xb30a,	// (0x00055445) navi_navi_pane_srt_g1

0xb31c,	// (0x00055457) navi_navi_pane_srt_g2_ParamLimits

0xb31c,	// (0x00055457) navi_navi_pane_srt_g2

0x0001,

0xf9c0,	// (0x00059afb) navi_navi_pane_srt_g_ParamLimits

0xf9c0,	// (0x00059afb) navi_navi_pane_srt_g

0xb32e,	// (0x00055469) navi_navi_tabs_pane_srt

0xb302,	// (0x0005543d) navi_navi_text_pane_srt

0xb302,	// (0x0005543d) navi_navi_volume_pane_srt

0xb2f3,	// (0x0005542e) navi_navi_text_pane_srt_t1

0x64bf,	// (0x000505fa) navi_navi_volume_pane_srt_g1

0x64c7,	// (0x00050602) volume_small_pane_srt_ParamLimits

0x64c7,	// (0x00050602) volume_small_pane_srt

0x58a0,	// (0x0004f9db) volume_small_pane_srt_g1_ParamLimits

0x58a0,	// (0x0004f9db) volume_small_pane_srt_g1

0x58b0,	// (0x0004f9eb) volume_small_pane_srt_g2_ParamLimits

0x58b0,	// (0x0004f9eb) volume_small_pane_srt_g2

0x58c1,	// (0x0004f9fc) volume_small_pane_srt_g3_ParamLimits

0x58c1,	// (0x0004f9fc) volume_small_pane_srt_g3

0x58d2,	// (0x0004fa0d) volume_small_pane_srt_g4_ParamLimits

0x58d2,	// (0x0004fa0d) volume_small_pane_srt_g4

0x58e3,	// (0x0004fa1e) volume_small_pane_srt_g5_ParamLimits

0x58e3,	// (0x0004fa1e) volume_small_pane_srt_g5

0x58f4,	// (0x0004fa2f) volume_small_pane_srt_g6_ParamLimits

0x58f4,	// (0x0004fa2f) volume_small_pane_srt_g6

0x5905,	// (0x0004fa40) volume_small_pane_srt_g7_ParamLimits

0x5905,	// (0x0004fa40) volume_small_pane_srt_g7

0x5916,	// (0x0004fa51) volume_small_pane_srt_g8_ParamLimits

0x5916,	// (0x0004fa51) volume_small_pane_srt_g8

0x5927,	// (0x0004fa62) volume_small_pane_srt_g9_ParamLimits

0x5927,	// (0x0004fa62) volume_small_pane_srt_g9

0x5938,	// (0x0004fa73) volume_small_pane_srt_g10_ParamLimits

0x5938,	// (0x0004fa73) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x000598a3) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x000598a3) volume_small_pane_srt_g

0x81c6,	// (0x00052301) query_popup_data_pane_cp2

0xb2d9,	// (0x00055414) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb2d9,	// (0x00055414) navi_navi_icon_text_pane_srt_t1

0xa3ed,	// (0x00054528) navi_tabs_2_long_pane_srt

0xa3ed,	// (0x00054528) navi_tabs_2_pane_srt

0xa3ed,	// (0x00054528) navi_tabs_3_long_pane_srt

0xa3ed,	// (0x00054528) navi_tabs_3_pane_srt

0xa3ed,	// (0x00054528) navi_tabs_4_pane_srt

0x649f,	// (0x000505da) tabs_2_active_pane_srt_ParamLimits

0x649f,	// (0x000505da) tabs_2_active_pane_srt

0x64af,	// (0x000505ea) tabs_2_passive_pane_srt_ParamLimits

0x64af,	// (0x000505ea) tabs_2_passive_pane_srt

0x961f,	// (0x0005375a) bg_passive_tab_pane_cp1_srt_ParamLimits

0x961f,	// (0x0005375a) bg_passive_tab_pane_cp1_srt

0xb2a5,	// (0x000553e0) bg_passive_tab_pane_g1_cp1_srt

0x8f2c,	// (0x00053067) bg_passive_tab_pane_g2_cp1_srt

0xb2ae,	// (0x000553e9) bg_passive_tab_pane_g3_cp1_srt

0x7dec,	// (0x00051f27) bg_active_tab_pane_cp1_srt_ParamLimits

0x7dec,	// (0x00051f27) bg_active_tab_pane_cp1_srt

0xb2b7,	// (0x000553f2) tabs_2_active_pane_srt_g1

0xb2bf,	// (0x000553fa) tabs_2_active_pane_srt_t1_ParamLimits

0xb2bf,	// (0x000553fa) tabs_2_active_pane_srt_t1

0xb2a5,	// (0x000553e0) bg_active_tab_pane_g1_cp1_srt

0x8f2c,	// (0x00053067) bg_active_tab_pane_g2_cp1_srt

0xb2ae,	// (0x000553e9) bg_active_tab_pane_g3_cp1_srt

0x646c,	// (0x000505a7) tabs_3_active_pane_srt_ParamLimits

0x646c,	// (0x000505a7) tabs_3_active_pane_srt

0x647d,	// (0x000505b8) tabs_3_passive_pane_cp_srt_ParamLimits

0x647d,	// (0x000505b8) tabs_3_passive_pane_cp_srt

0x648e,	// (0x000505c9) tabs_3_passive_pane_srt_ParamLimits

0x648e,	// (0x000505c9) tabs_3_passive_pane_srt

0x961f,	// (0x0005375a) bg_passive_tab_pane_cp2_srt_ParamLimits

0x961f,	// (0x0005375a) bg_passive_tab_pane_cp2_srt

0x9485,	// (0x000535c0) bg_passive_tab_pane_g1_cp2_srt

0x8f2c,	// (0x00053067) bg_passive_tab_pane_g2_cp2_srt

0x948e,	// (0x000535c9) bg_passive_tab_pane_g3_cp2_srt

0x7dec,	// (0x00051f27) bg_active_tab_pane_cp2_srt_ParamLimits

0x7dec,	// (0x00051f27) bg_active_tab_pane_cp2_srt

0xb28b,	// (0x000553c6) tabs_3_active_pane_srt_g1

0xb293,	// (0x000553ce) tabs_3_active_pane_srt_t1_ParamLimits

0xb293,	// (0x000553ce) tabs_3_active_pane_srt_t1

0x9485,	// (0x000535c0) bg_active_tab_pane_g1_cp2_srt

0x8f2c,	// (0x00053067) bg_active_tab_pane_g2_cp2_srt

0x948e,	// (0x000535c9) bg_active_tab_pane_g3_cp2_srt

0x6424,	// (0x0005055f) tabs_4_active_pane_srt_ParamLimits

0x6424,	// (0x0005055f) tabs_4_active_pane_srt

0x6436,	// (0x00050571) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6436,	// (0x00050571) tabs_4_passive_pane_cp2_srt

0x5a9d,	// (0x0004fbd8) aid_size_cell_toolbar

0x883c,	// (0x00052977) main_idle_act_pane_ParamLimits

0x5c66,	// (0x0004fda1) popup_large_graphic_colour_window_ParamLimits

0x5fcd,	// (0x00050108) popup_toolbar_window_ParamLimits

0x5fcd,	// (0x00050108) popup_toolbar_window

0xb0bd,	// (0x000551f8) list_single_graphic_2heading_pane_ParamLimits

0xb0bd,	// (0x000551f8) list_single_graphic_2heading_pane

0x89f8,	// (0x00052b33) aid_size_cell_apps_grid_lsc_pane

0x8a0a,	// (0x00052b45) aid_size_cell_apps_grid_prt_pane

0x961f,	// (0x0005375a) bg_wml_button_pane_cp1_ParamLimits

0x961f,	// (0x0005375a) bg_wml_button_pane_cp1

0x9ddf,	// (0x00053f1a) form_midp_field_text_pane_t1_ParamLimits

0x9ba9,	// (0x00053ce4) input_focus_pane_cp050_ParamLimits

0x9e16,	// (0x00053f51) list_midp_form_text_pane_ParamLimits

0x9dbc,	// (0x00053ef7) input_focus_pane_cp051_ParamLimits

0x9dd0,	// (0x00053f0b) list_midp_choice_pane_ParamLimits

0x9c62,	// (0x00053d9d) list_single_2graphic_pane_cp3_ParamLimits

0x9c62,	// (0x00053d9d) list_single_2graphic_pane_cp3

0x9c86,	// (0x00053dc1) list_single_midp_graphic_pane_ParamLimits

0x9c86,	// (0x00053dc1) list_single_midp_graphic_pane

0x4872,	// (0x0004e9ad) list_single_graphic_2heading_pane_g1_ParamLimits

0x4872,	// (0x0004e9ad) list_single_graphic_2heading_pane_g1

0x487e,	// (0x0004e9b9) list_single_graphic_2heading_pane_g4_ParamLimits

0x487e,	// (0x0004e9b9) list_single_graphic_2heading_pane_g4

0x488a,	// (0x0004e9c5) list_single_graphic_2heading_pane_g5_ParamLimits

0x488a,	// (0x0004e9c5) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x000598f6) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x000598f6) list_single_graphic_2heading_pane_g

0x4896,	// (0x0004e9d1) list_single_graphic_2heading_pane_t1_ParamLimits

0x4896,	// (0x0004e9d1) list_single_graphic_2heading_pane_t1

0x48aa,	// (0x0004e9e5) list_single_graphic_2heading_pane_t2_ParamLimits

0x48aa,	// (0x0004e9e5) list_single_graphic_2heading_pane_t2

0x48c6,	// (0x0004ea01) list_single_graphic_2heading_pane_t3_ParamLimits

0x48c6,	// (0x0004ea01) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x000598fd) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x000598fd) list_single_graphic_2heading_pane_t

0x9a73,	// (0x00053bae) bg_popup_sub_pane_cp2

0x9a9d,	// (0x00053bd8) grid_toobar_pane

0x607a,	// (0x000501b5) cell_toolbar_pane_ParamLimits

0x607a,	// (0x000501b5) cell_toolbar_pane

0x9ad9,	// (0x00053c14) cell_toolbar_pane_g1_ParamLimits

0x9ad9,	// (0x00053c14) cell_toolbar_pane_g1

0x9aed,	// (0x00053c28) cell_toolbar_pane_g2_ParamLimits

0x9aed,	// (0x00053c28) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x0005990b) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x0005990b) cell_toolbar_pane_g

0x9b0f,	// (0x00053c4a) grid_highlight_pane_cp2_ParamLimits

0x9b0f,	// (0x00053c4a) grid_highlight_pane_cp2

0x9b29,	// (0x00053c64) toolbar_button_pane

0x9b35,	// (0x00053c70) toolbar_button_pane_g1

0x9b3d,	// (0x00053c78) toolbar_button_pane_g2

0x9b45,	// (0x00053c80) toolbar_button_pane_g3

0x9b4d,	// (0x00053c88) toolbar_button_pane_g4

0x9b55,	// (0x00053c90) toolbar_button_pane_g5

0x9b5d,	// (0x00053c98) toolbar_button_pane_g6

0x9b65,	// (0x00053ca0) toolbar_button_pane_g7

0x9b6d,	// (0x00053ca8) toolbar_button_pane_g8

0x9b75,	// (0x00053cb0) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x00059910) toolbar_button_pane_g

0x60d4,	// (0x0005020f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x60d4,	// (0x0005020f) list_single_2graphic_pane_g1_cp3

0x60e0,	// (0x0005021b) list_single_2graphic_pane_g2_cp3_ParamLimits

0x60e0,	// (0x0005021b) list_single_2graphic_pane_g2_cp3

0x60f1,	// (0x0005022c) list_single_2graphic_pane_g3_cp3

0x60f9,	// (0x00050234) list_single_2graphic_pane_g4_cp3_ParamLimits

0x60f9,	// (0x00050234) list_single_2graphic_pane_g4_cp3

0x6105,	// (0x00050240) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6105,	// (0x00050240) list_single_2graphic_pane_t1_cp3

0x6139,	// (0x00050274) list_single_midp_graphic_pane_g2_ParamLimits

0x6139,	// (0x00050274) list_single_midp_graphic_pane_g2

0x486a,	// (0x0004e9a5) aid_zoom_text_primary

0x5aa5,	// (0x0004fbe0) aid_zoom_text_secondary

0x9542,	// (0x0005367d) status_small_pane_g7_ParamLimits

0x9542,	// (0x0005367d) status_small_pane_g7

0x9565,	// (0x000536a0) status_small_pane_t1_ParamLimits

0x7d23,	// (0x00051e5e) title_pane_g2

0x0003,

0xf554,	// (0x0005968f) title_pane_g

0x8267,	// (0x000523a2) aid_size_cell_colour_1_pane_ParamLimits

0x8267,	// (0x000523a2) aid_size_cell_colour_1_pane

0x827b,	// (0x000523b6) aid_size_cell_colour_2_pane_ParamLimits

0x827b,	// (0x000523b6) aid_size_cell_colour_2_pane

0x828f,	// (0x000523ca) aid_size_cell_colour_3_pane_ParamLimits

0x828f,	// (0x000523ca) aid_size_cell_colour_3_pane

0x82a3,	// (0x000523de) aid_size_cell_colour_4_pane_ParamLimits

0x82a3,	// (0x000523de) aid_size_cell_colour_4_pane

0x548f,	// (0x0004f5ca) title_pane_stacon_g1_ParamLimits

0x548f,	// (0x0004f5ca) title_pane_stacon_g1

0xa1d4,	// (0x0005430f) popup_note_wait_window_g3_ParamLimits

0xa1d4,	// (0x0005430f) popup_note_wait_window_g3

0xa24a,	// (0x00054385) popup_note_wait_window_t5_ParamLimits

0xa24a,	// (0x00054385) popup_note_wait_window_t5

0x7d0c,	// (0x00051e47) main_feb_china_hwr_fs_writing_pane

0x5b4b,	// (0x0004fc86) popup_feb_china_hwr_fs_window_ParamLimits

0x5b4b,	// (0x0004fc86) popup_feb_china_hwr_fs_window

0x615b,	// (0x00050296) aid_size_cell_hwr_fs_ParamLimits

0x615b,	// (0x00050296) aid_size_cell_hwr_fs

0x9ba9,	// (0x00053ce4) bg_popup_sub_pane_cp3_ParamLimits

0x9ba9,	// (0x00053ce4) bg_popup_sub_pane_cp3

0x6170,	// (0x000502ab) grid_hwr_fs_pane_ParamLimits

0x6170,	// (0x000502ab) grid_hwr_fs_pane

0x6188,	// (0x000502c3) linegrid_hwr_fs_pane_ParamLimits

0x6188,	// (0x000502c3) linegrid_hwr_fs_pane

0x6198,	// (0x000502d3) cell_hwr_fs_pane_ParamLimits

0x6198,	// (0x000502d3) cell_hwr_fs_pane

0x9bb5,	// (0x00053cf0) linegrid_hwr_fs_pane_g1_ParamLimits

0x9bb5,	// (0x00053cf0) linegrid_hwr_fs_pane_g1

0x9bc1,	// (0x00053cfc) linegrid_hwr_fs_pane_g2_ParamLimits

0x9bc1,	// (0x00053cfc) linegrid_hwr_fs_pane_g2

0x9bd3,	// (0x00053d0e) linegrid_hwr_fs_pane_g3_ParamLimits

0x9bd3,	// (0x00053d0e) linegrid_hwr_fs_pane_g3

0x61ba,	// (0x000502f5) linegrid_hwr_fs_pane_g4_ParamLimits

0x61ba,	// (0x000502f5) linegrid_hwr_fs_pane_g4

0x61d4,	// (0x0005030f) linegrid_hwr_fs_pane_g5_ParamLimits

0x61d4,	// (0x0005030f) linegrid_hwr_fs_pane_g5

0x0004,

0xf800,	// (0x0005993b) linegrid_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0005993b) linegrid_hwr_fs_pane_g

0x9bdf,	// (0x00053d1a) cell_hwr_fs_pane_g1_ParamLimits

0x9bdf,	// (0x00053d1a) cell_hwr_fs_pane_g1

0x99aa,	// (0x00053ae5) cell_hwr_fs_pane_g2_ParamLimits

0x99aa,	// (0x00053ae5) cell_hwr_fs_pane_g2

0x9bf5,	// (0x00053d30) cell_hwr_fs_pane_g3_ParamLimits

0x9bf5,	// (0x00053d30) cell_hwr_fs_pane_g3

0x9c02,	// (0x00053d3d) cell_hwr_fs_pane_g4_ParamLimits

0x9c02,	// (0x00053d3d) cell_hwr_fs_pane_g4

0x0003,

0xf80b,	// (0x00059946) cell_hwr_fs_pane_g_ParamLimits

0xf80b,	// (0x00059946) cell_hwr_fs_pane_g

0x61ea,	// (0x00050325) cell_hwr_fs_pane_t1

0x7d0c,	// (0x00051e47) grid_highlight_pane_cp6

0x7d0c,	// (0x00051e47) main_idle_act2_pane

0x87af,	// (0x000528ea) aid_inside_area_popup_secondary

0xa881,	// (0x000549bc) aid_inside_area_window_primary_ParamLimits

0xa881,	// (0x000549bc) aid_inside_area_window_primary

0xb3f2,	// (0x0005552d) ai2_news_ticker_pane

0xb3fa,	// (0x00055535) aid_size_cell_ai1_link_ParamLimits

0xb3fa,	// (0x00055535) aid_size_cell_ai1_link

0xb414,	// (0x0005554f) popup_ai2_data_window_ParamLimits

0xb414,	// (0x0005554f) popup_ai2_data_window

0xb42a,	// (0x00055565) popup_ai2_link_window_ParamLimits

0xb42a,	// (0x00055565) popup_ai2_link_window

0x9ba9,	// (0x00053ce4) bg_popup_sub_pane_cp4_ParamLimits

0x9ba9,	// (0x00053ce4) bg_popup_sub_pane_cp4

0xb43e,	// (0x00055579) grid_ai2_link_pane_ParamLimits

0xb43e,	// (0x00055579) grid_ai2_link_pane

0xb455,	// (0x00055590) popup_ai2_link_window_g1_ParamLimits

0xb455,	// (0x00055590) popup_ai2_link_window_g1

0xb461,	// (0x0005559c) popup_ai2_link_window_g2_ParamLimits

0xb461,	// (0x0005559c) popup_ai2_link_window_g2

0x0001,

0xf9de,	// (0x00059b19) popup_ai2_link_window_g_ParamLimits

0xf9de,	// (0x00059b19) popup_ai2_link_window_g

0xb470,	// (0x000555ab) ai2_mp_button_pane

0xb478,	// (0x000555b3) ai2_mp_volume_pane

0x9dbc,	// (0x00053ef7) bg_popup_sub_pane_cp5_ParamLimits

0x9dbc,	// (0x00053ef7) bg_popup_sub_pane_cp5

0xb480,	// (0x000555bb) heading_ai2_gene_pane_ParamLimits

0xb480,	// (0x000555bb) heading_ai2_gene_pane

0xb48c,	// (0x000555c7) list_ai2_gene_pane_ParamLimits

0xb48c,	// (0x000555c7) list_ai2_gene_pane

0xb4d4,	// (0x0005560f) cell_ai2_link_pane_ParamLimits

0xb4d4,	// (0x0005560f) cell_ai2_link_pane

0xb4ea,	// (0x00055625) cell_ai2_link_pane_g1

0x7d0c,	// (0x00051e47) grid_highlight_pane_cp7

0x64dc,	// (0x00050617) ai2_mp_volume_pane_g1

0xb5ba,	// (0x000556f5) ai2_mp_volume_pane_g2

0xb52f,	// (0x0005566a) list_ai2_gene_pane_t1

0xb5c2,	// (0x000556fd) ai2_mp_volume_pane_g3

0x0002,

0xf9f7,	// (0x00059b32) ai2_mp_volume_pane_g

0x64e4,	// (0x0005061f) volume_small_pane_cp3

0xb5ca,	// (0x00055705) aid_size_cell_ai2_button

0xb5d2,	// (0x0005570d) grid_ai2_button_pane

0xb5db,	// (0x00055716) cell_ai2_button_pane_ParamLimits

0xb5db,	// (0x00055716) cell_ai2_button_pane

0x7d02,	// (0x00051e3d) cell_ai2_button_pane_g1

0x7d0c,	// (0x00051e47) grid_highlight_pane_cp8

0xb57a,	// (0x000556b5) ai2_gene_pane_t1_ParamLimits

0xb57a,	// (0x000556b5) ai2_gene_pane_t1

0x5a93,	// (0x0004fbce) aid_height_parent_landscape

0xaef4,	// (0x0005502f) aid_height_set_list

0xaf05,	// (0x00055040) aid_size_parent

0xb1d7,	// (0x00055312) aid_size_cell_graphic_pane_ParamLimits

0xb49c,	// (0x000555d7) popup_ai2_data_window_g1_ParamLimits

0xb49c,	// (0x000555d7) popup_ai2_data_window_g1

0xb4a8,	// (0x000555e3) ai2_news_ticker_pane_g1

0xb4b0,	// (0x000555eb) ai2_news_ticker_pane_g2

0x0001,

0xf9e3,	// (0x00059b1e) ai2_news_ticker_pane_g

0xb4b8,	// (0x000555f3) ai2_news_ticker_pane_t1

0xb4c6,	// (0x00055601) ai2_news_ticker_pane_t2

0x0001,

0xf9e8,	// (0x00059b23) ai2_news_ticker_pane_t

0xb4f3,	// (0x0005562e) heading_ai2_gene_pane_g1

0xb4fb,	// (0x00055636) heading_ai2_gene_pane_t1_ParamLimits

0xb4fb,	// (0x00055636) heading_ai2_gene_pane_t1

0xb510,	// (0x0005564b) list_highlight_pane_cp6

0xb518,	// (0x00055653) ai2_gene_pane_ParamLimits

0xb518,	// (0x00055653) ai2_gene_pane

0xb53d,	// (0x00055678) list_ai2_gene_pane_t2

0x0001,

0xf9ed,	// (0x00059b28) list_ai2_gene_pane_t

0xb54b,	// (0x00055686) list_highlight_pane_cp8_ParamLimits

0xb54b,	// (0x00055686) list_highlight_pane_cp8

0xb55c,	// (0x00055697) ai2_gene_pane_g1_ParamLimits

0xb55c,	// (0x00055697) ai2_gene_pane_g1

0xb56e,	// (0x000556a9) ai2_gene_pane_g2_ParamLimits

0xb56e,	// (0x000556a9) ai2_gene_pane_g2

0x0001,

0xf9f2,	// (0x00059b2d) ai2_gene_pane_g_ParamLimits

0xf9f2,	// (0x00059b2d) ai2_gene_pane_g

0x85ee,	// (0x00052729) scroll_pane_cp12

0x5a52,	// (0x0004fb8d) control_pane_t3_ParamLimits

0x5a52,	// (0x0004fb8d) control_pane_t3

0x9556,	// (0x00053691) status_small_pane_g8_ParamLimits

0x9556,	// (0x00053691) status_small_pane_g8

0x5c31,	// (0x0004fd6c) popup_find_window_ParamLimits

0x5e44,	// (0x0004ff7f) popup_note_image_window_ParamLimits

0x60aa,	// (0x000501e5) list_double2_graphic_pane_vc_g1_ParamLimits

0x60aa,	// (0x000501e5) list_double2_graphic_pane_vc_g1

0x9218,	// (0x00053353) list_double2_graphic_pane_vc_g2_ParamLimits

0x9218,	// (0x00053353) list_double2_graphic_pane_vc_g2

0x7441,	// (0x0005157c) list_double2_graphic_pane_vc_g3_ParamLimits

0x7441,	// (0x0005157c) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x00059904) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x00059904) list_double2_graphic_pane_vc_g

0x60b6,	// (0x000501f1) list_double2_graphic_pane_vc_t1_ParamLimits

0x60b6,	// (0x000501f1) list_double2_graphic_pane_vc_t1

0x9218,	// (0x00053353) list_single_heading_pane_vc_g1_ParamLimits

0x9218,	// (0x00053353) list_single_heading_pane_vc_g1

0x7441,	// (0x0005157c) list_single_heading_pane_vc_g2_ParamLimits

0x7441,	// (0x0005157c) list_single_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x00059925) list_single_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x00059925) list_single_heading_pane_vc_g

0x6121,	// (0x0005025c) list_single_heading_pane_vc_t1_ParamLimits

0x6121,	// (0x0005025c) list_single_heading_pane_vc_t1

0x744d,	// (0x00051588) list_single_heading_pane_vc_t2_ParamLimits

0x744d,	// (0x00051588) list_single_heading_pane_vc_t2

0x0001,

0xf7ef,	// (0x0005992a) list_single_heading_pane_vc_t_ParamLimits

0xf7ef,	// (0x0005992a) list_single_heading_pane_vc_t

0x7469,	// (0x000515a4) list_setting_number_pane_vc_g1_ParamLimits

0x7469,	// (0x000515a4) list_setting_number_pane_vc_g1

0x7475,	// (0x000515b0) list_setting_number_pane_vc_g2_ParamLimits

0x7475,	// (0x000515b0) list_setting_number_pane_vc_g2

0x0001,

0xf7f4,	// (0x0005992f) list_setting_number_pane_vc_g_ParamLimits

0xf7f4,	// (0x0005992f) list_setting_number_pane_vc_g

0x7481,	// (0x000515bc) list_setting_number_pane_vc_t1_ParamLimits

0x7481,	// (0x000515bc) list_setting_number_pane_vc_t1

0x7495,	// (0x000515d0) list_setting_number_pane_vc_t2_ParamLimits

0x7495,	// (0x000515d0) list_setting_number_pane_vc_t2

0x74b1,	// (0x000515ec) list_setting_number_pane_vc_t3_ParamLimits

0x74b1,	// (0x000515ec) list_setting_number_pane_vc_t3

0x0002,

0xf7f9,	// (0x00059934) list_setting_number_pane_vc_t_ParamLimits

0xf7f9,	// (0x00059934) list_setting_number_pane_vc_t

0x74dd,	// (0x00051618) set_value_pane_vc_ParamLimits

0x74dd,	// (0x00051618) set_value_pane_vc

0xb0bd,	// (0x000551f8) list_double2_graphic_pane_vc_ParamLimits

0xb0bd,	// (0x000551f8) list_double2_graphic_pane_vc

0x75b0,	// (0x000516eb) list_double2_large_graphic_pane_vc_ParamLimits

0x75b0,	// (0x000516eb) list_double2_large_graphic_pane_vc

0xb0bd,	// (0x000551f8) list_double2_pane_vc_ParamLimits

0xb0bd,	// (0x000551f8) list_double2_pane_vc

0xb0bd,	// (0x000551f8) list_double_graphic_heading_pane_vc_ParamLimits

0xb0bd,	// (0x000551f8) list_double_graphic_heading_pane_vc

0xb0bd,	// (0x000551f8) list_double_graphic_pane_vc_ParamLimits

0xb0bd,	// (0x000551f8) list_double_graphic_pane_vc

0xb0bd,	// (0x000551f8) list_double_heading_pane_vc_ParamLimits

0xb0bd,	// (0x000551f8) list_double_heading_pane_vc

0x75b0,	// (0x000516eb) list_double_large_graphic_pane_vc_ParamLimits

0x75b0,	// (0x000516eb) list_double_large_graphic_pane_vc

0xb0bd,	// (0x000551f8) list_double_number_pane_vc_ParamLimits

0xb0bd,	// (0x000551f8) list_double_number_pane_vc

0xb0bd,	// (0x000551f8) list_double_pane_vc_ParamLimits

0xb0bd,	// (0x000551f8) list_double_pane_vc

0xb0bd,	// (0x000551f8) list_double_time_pane_vc_ParamLimits

0xb0bd,	// (0x000551f8) list_double_time_pane_vc

0xb0bd,	// (0x000551f8) list_setting_number_pane_vc_ParamLimits

0xb0bd,	// (0x000551f8) list_setting_number_pane_vc

0xb0bd,	// (0x000551f8) list_setting_pane_vc_ParamLimits

0xb0bd,	// (0x000551f8) list_setting_pane_vc

0xb0bd,	// (0x000551f8) list_single_graphic_heading_pane_vc_ParamLimits

0xb0bd,	// (0x000551f8) list_single_graphic_heading_pane_vc

0xb0bd,	// (0x000551f8) list_single_heading_pane_vc_ParamLimits

0xb0bd,	// (0x000551f8) list_single_heading_pane_vc

0x75c1,	// (0x000516fc) list_single_number_heading_pane_vc_ParamLimits

0x75c1,	// (0x000516fc) list_single_number_heading_pane_vc

0x60aa,	// (0x000501e5) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x60aa,	// (0x000501e5) list_double_graphic_heading_pane_vc_g1

0x9218,	// (0x00053353) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9218,	// (0x00053353) list_double_graphic_heading_pane_vc_g2

0x7441,	// (0x0005157c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7441,	// (0x0005157c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x00059904) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x00059904) list_double_graphic_heading_pane_vc_g

0x766f,	// (0x000517aa) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x766f,	// (0x000517aa) list_double_graphic_heading_pane_vc_t1

0x768b,	// (0x000517c6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x768b,	// (0x000517c6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fe,	// (0x00059b39) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fe,	// (0x00059b39) list_double_graphic_heading_pane_vc_t

0x7469,	// (0x000515a4) list_setting_pane_vc_g1_ParamLimits

0x7469,	// (0x000515a4) list_setting_pane_vc_g1

0x7475,	// (0x000515b0) list_setting_pane_vc_g2_ParamLimits

0x7475,	// (0x000515b0) list_setting_pane_vc_g2

0x0001,

0xf7f4,	// (0x0005992f) list_setting_pane_vc_g_ParamLimits

0xf7f4,	// (0x0005992f) list_setting_pane_vc_g

0x76a9,	// (0x000517e4) list_setting_pane_vc_t1_ParamLimits

0x76a9,	// (0x000517e4) list_setting_pane_vc_t1

0x76c5,	// (0x00051800) list_setting_pane_vc_t2_ParamLimits

0x76c5,	// (0x00051800) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x00059b67) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x00059b67) list_setting_pane_vc_t

0x74dd,	// (0x00051618) set_value_pane_cp_vc_ParamLimits

0x74dd,	// (0x00051618) set_value_pane_cp_vc

0x9218,	// (0x00053353) list_single_number_heading_pane_vc_g1_ParamLimits

0x9218,	// (0x00053353) list_single_number_heading_pane_vc_g1

0x7441,	// (0x0005157c) list_single_number_heading_pane_vc_g2_ParamLimits

0x7441,	// (0x0005157c) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x00059925) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x00059925) list_single_number_heading_pane_vc_g

0x6121,	// (0x0005025c) list_single_number_heading_pane_vc_t1_ParamLimits

0x6121,	// (0x0005025c) list_single_number_heading_pane_vc_t1

0x76e1,	// (0x0005181c) list_single_number_heading_pane_vc_t2_ParamLimits

0x76e1,	// (0x0005181c) list_single_number_heading_pane_vc_t2

0x76f5,	// (0x00051830) list_single_number_heading_pane_vc_t3_ParamLimits

0x76f5,	// (0x00051830) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x00059b6c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x00059b6c) list_single_number_heading_pane_vc_t

0x60aa,	// (0x000501e5) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x60aa,	// (0x000501e5) list_single_graphic_heading_pane_vc_g1

0x9218,	// (0x00053353) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9218,	// (0x00053353) list_single_graphic_heading_pane_vc_g4

0x7441,	// (0x0005157c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7441,	// (0x0005157c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x00059904) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x00059904) list_single_graphic_heading_pane_vc_g

0x6121,	// (0x0005025c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6121,	// (0x0005025c) list_single_graphic_heading_pane_vc_t1

0x7707,	// (0x00051842) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x7707,	// (0x00051842) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x00059b73) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00059b73) list_single_graphic_heading_pane_vc_t

0x9218,	// (0x00053353) list_double2_pane_vc_g1_ParamLimits

0x9218,	// (0x00053353) list_double2_pane_vc_g1

0x7441,	// (0x0005157c) list_double2_pane_vc_g2_ParamLimits

0x7441,	// (0x0005157c) list_double2_pane_vc_g2

0x0001,

0xf7ea,	// (0x00059925) list_double2_pane_vc_g_ParamLimits

0xf7ea,	// (0x00059925) list_double2_pane_vc_g

0x771b,	// (0x00051856) list_double2_pane_vc_t1_ParamLimits

0x771b,	// (0x00051856) list_double2_pane_vc_t1

0x7731,	// (0x0005186c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7731,	// (0x0005186c) list_double2_large_graphic_pane_vc_g1

0x773d,	// (0x00051878) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x773d,	// (0x00051878) list_double2_large_graphic_pane_vc_g2

0x7749,	// (0x00051884) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7749,	// (0x00051884) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3d,	// (0x00059b78) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x00059b78) list_double2_large_graphic_pane_vc_g

0x7755,	// (0x00051890) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7755,	// (0x00051890) list_double2_large_graphic_pane_vc_t1

0x776b,	// (0x000518a6) list_double_time_pane_vc_g1_ParamLimits

0x776b,	// (0x000518a6) list_double_time_pane_vc_g1

0x7777,	// (0x000518b2) list_double_time_pane_vc_g2_ParamLimits

0x7777,	// (0x000518b2) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x00059b7f) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x00059b7f) list_double_time_pane_vc_g

0x7783,	// (0x000518be) list_double_time_pane_vc_t1_ParamLimits

0x7783,	// (0x000518be) list_double_time_pane_vc_t1

0x77a7,	// (0x000518e2) list_double_time_pane_vc_t2_ParamLimits

0x77a7,	// (0x000518e2) list_double_time_pane_vc_t2

0x77f6,	// (0x00051931) list_double_time_pane_vc_t3_ParamLimits

0x77f6,	// (0x00051931) list_double_time_pane_vc_t3

0x7808,	// (0x00051943) list_double_time_pane_vc_t4_ParamLimits

0x7808,	// (0x00051943) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x00059b84) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x00059b84) list_double_time_pane_vc_t

0x9218,	// (0x00053353) list_double_pane_vc_g1_ParamLimits

0x9218,	// (0x00053353) list_double_pane_vc_g1

0x7441,	// (0x0005157c) list_double_pane_vc_g2_ParamLimits

0x7441,	// (0x0005157c) list_double_pane_vc_g2

0x0001,

0xf7ea,	// (0x00059925) list_double_pane_vc_g_ParamLimits

0xf7ea,	// (0x00059925) list_double_pane_vc_g

0x781c,	// (0x00051957) list_double_pane_vc_t1_ParamLimits

0x781c,	// (0x00051957) list_double_pane_vc_t1

0x7830,	// (0x0005196b) list_double_pane_vc_t2_ParamLimits

0x7830,	// (0x0005196b) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x00059b8d) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x00059b8d) list_double_pane_vc_t

0x9218,	// (0x00053353) list_double_number_pane_vc_g1_ParamLimits

0x9218,	// (0x00053353) list_double_number_pane_vc_g1

0x7441,	// (0x0005157c) list_double_number_pane_vc_g2_ParamLimits

0x7441,	// (0x0005157c) list_double_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x00059925) list_double_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x00059925) list_double_number_pane_vc_g

0x7848,	// (0x00051983) list_double_number_pane_vc_t1_ParamLimits

0x7848,	// (0x00051983) list_double_number_pane_vc_t1

0x785a,	// (0x00051995) list_double_number_pane_vc_t2_ParamLimits

0x785a,	// (0x00051995) list_double_number_pane_vc_t2

0x786e,	// (0x000519a9) list_double_number_pane_vc_t3_ParamLimits

0x786e,	// (0x000519a9) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x00059b92) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x00059b92) list_double_number_pane_vc_t

0x7886,	// (0x000519c1) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7886,	// (0x000519c1) list_double_large_graphic_pane_vc_g1

0x7892,	// (0x000519cd) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7892,	// (0x000519cd) list_double_large_graphic_pane_vc_g2

0x7749,	// (0x00051884) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7749,	// (0x00051884) list_double_large_graphic_pane_vc_g3

0x78a1,	// (0x000519dc) list_double_large_graphic_pane_vc_g4_ParamLimits

0x78a1,	// (0x000519dc) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x00059b99) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x00059b99) list_double_large_graphic_pane_vc_g

0x78ad,	// (0x000519e8) list_double_large_graphic_pane_vc_t1_ParamLimits

0x78ad,	// (0x000519e8) list_double_large_graphic_pane_vc_t1

0x78c1,	// (0x000519fc) list_double_large_graphic_pane_vc_t2_ParamLimits

0x78c1,	// (0x000519fc) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x00059ba2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x00059ba2) list_double_large_graphic_pane_vc_t

0x9218,	// (0x00053353) list_double_heading_pane_vc_g1_ParamLimits

0x9218,	// (0x00053353) list_double_heading_pane_vc_g1

0x7441,	// (0x0005157c) list_double_heading_pane_vc_g2_ParamLimits

0x7441,	// (0x0005157c) list_double_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x00059925) list_double_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x00059925) list_double_heading_pane_vc_g

0x78da,	// (0x00051a15) list_double_heading_pane_vc_t1_ParamLimits

0x78da,	// (0x00051a15) list_double_heading_pane_vc_t1

0x6121,	// (0x0005025c) list_double_heading_pane_vc_t2_ParamLimits

0x6121,	// (0x0005025c) list_double_heading_pane_vc_t2

0x0001,

0xfa6c,	// (0x00059ba7) list_double_heading_pane_vc_t_ParamLimits

0xfa6c,	// (0x00059ba7) list_double_heading_pane_vc_t

0x60aa,	// (0x000501e5) list_double_graphic_pane_vc_g1_ParamLimits

0x60aa,	// (0x000501e5) list_double_graphic_pane_vc_g1

0x78ee,	// (0x00051a29) list_double_graphic_pane_vc_g2_ParamLimits

0x78ee,	// (0x00051a29) list_double_graphic_pane_vc_g2

0xb61b,	// (0x00055756) list_double_graphic_pane_vc_g3_ParamLimits

0xb61b,	// (0x00055756) list_double_graphic_pane_vc_g3

0x0002,

0xfa71,	// (0x00059bac) list_double_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x00059bac) list_double_graphic_pane_vc_g

0x78fd,	// (0x00051a38) list_double_graphic_pane_vc_t1_ParamLimits

0x78fd,	// (0x00051a38) list_double_graphic_pane_vc_t1

0x7911,	// (0x00051a4c) list_double_graphic_pane_vc_t2_ParamLimits

0x7911,	// (0x00051a4c) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x00059bb3) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x00059bb3) list_double_graphic_pane_vc_t

0x48f6,	// (0x0004ea31) aid_size_cell_fastswap

0x48fe,	// (0x0004ea39) aid_size_cell_touch_ParamLimits

0x48fe,	// (0x0004ea39) aid_size_cell_touch

0x4b63,	// (0x0004ec9e) popup_fast_swap_wide_window_ParamLimits

0x4b63,	// (0x0004ec9e) popup_fast_swap_wide_window

0x4c77,	// (0x0004edb2) touch_pane_ParamLimits

0x4c77,	// (0x0004edb2) touch_pane

0x8650,	// (0x0005278b) button_value_adjust_pane_cp2

0x51e9,	// (0x0004f324) button_value_adjust_pane_cp4

0x520d,	// (0x0004f348) form_field_data_pane_cp2

0x522e,	// (0x0004f369) form_field_data_wide_pane_cp2

0x8ac1,	// (0x00052bfc) bg_scroll_pane_ParamLimits

0x55f1,	// (0x0004f72c) scroll_handle_pane_ParamLimits

0x5605,	// (0x0004f740) scroll_sc2_down_pane_ParamLimits

0x5605,	// (0x0004f740) scroll_sc2_down_pane

0x8af2,	// (0x00052c2d) scroll_sc2_up_pane_ParamLimits

0x8af2,	// (0x00052c2d) scroll_sc2_up_pane

0xbcb2,	// (0x00055ded) grid_wheel_folder_pane_g1_ParamLimits

0xbcb2,	// (0x00055ded) grid_wheel_folder_pane_g1

0x5838,	// (0x0004f973) clock_nsta_pane_cp2_ParamLimits

0x5838,	// (0x0004f973) clock_nsta_pane_cp2

0x883c,	// (0x00052977) listscroll_midp_pane_ParamLimits

0x92e7,	// (0x00053422) midp_canvas_pane

0x95d1,	// (0x0005370c) nsta_clock_indic_pane

0x9605,	// (0x00053740) listscroll_form_pane_vc

0x960d,	// (0x00053748) listscroll_set_pane_vc_ParamLimits

0x960d,	// (0x00053748) listscroll_set_pane_vc

0x9712,	// (0x0005384d) clock_nsta_pane

0x9787,	// (0x000538c2) indicator_nsta_pane

0x9a73,	// (0x00053bae) bg_popup_sub_pane_cp2_ParamLimits

0x9a87,	// (0x00053bc2) find_pane_cp2_ParamLimits

0x9a87,	// (0x00053bc2) find_pane_cp2

0x9a9d,	// (0x00053bd8) grid_toobar_pane_ParamLimits

0x9b7d,	// (0x00053cb8) list_form_gen_pane_vc_ParamLimits

0x9b7d,	// (0x00053cb8) list_form_gen_pane_vc

0x9b93,	// (0x00053cce) scroll_pane_cp8_vc_ParamLimits

0x9b93,	// (0x00053cce) scroll_pane_cp8_vc

0x9c0f,	// (0x00053d4a) data_form_wide_pane_vc_ParamLimits

0x9c0f,	// (0x00053d4a) data_form_wide_pane_vc

0x9c1b,	// (0x00053d56) form_field_data_wide_pane_vc_g1

0x9c23,	// (0x00053d5e) form_field_data_wide_pane_vc_t1_ParamLimits

0x9c23,	// (0x00053d5e) form_field_data_wide_pane_vc_t1

0x8664,	// (0x0005279f) input_focus_pane_cp6_vc_ParamLimits

0x8664,	// (0x0005279f) input_focus_pane_cp6_vc

0x9f4f,	// (0x0005408a) list_midp_pane_ParamLimits

0x9f5b,	// (0x00054096) scroll_pane_cp16_ParamLimits

0x9f5b,	// (0x00054096) scroll_pane_cp16

0x9fa9,	// (0x000540e4) button_value_adjust_pane_ParamLimits

0x9fa9,	// (0x000540e4) button_value_adjust_pane

0xaf17,	// (0x00055052) button_value_adjust_pane_cp6_ParamLimits

0xaf17,	// (0x00055052) button_value_adjust_pane_cp6

0xb041,	// (0x0005517c) settings_code_pane_cp_ParamLimits

0xb041,	// (0x0005517c) settings_code_pane_cp

0x7d02,	// (0x00051e3d) cell_touch_pane_g1

0x7d02,	// (0x00051e3d) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x00059849) cell_touch_pane_g

0xb5ed,	// (0x00055728) cell_touch_pane_cp_ParamLimits

0xb5ed,	// (0x00055728) cell_touch_pane_cp

0xb5fd,	// (0x00055738) cell_touch_pane_ParamLimits

0xb5fd,	// (0x00055738) cell_touch_pane

0x7d02,	// (0x00051e3d) scroll_sc2_down_pane_g1

0x7d02,	// (0x00051e3d) scroll_sc2_up_pane_g1

0x7d0c,	// (0x00051e47) bg_set_opt_pane_cp4_vc

0xb60f,	// (0x0005574a) list_set_graphic_pane_vc_g1_ParamLimits

0xb60f,	// (0x0005574a) list_set_graphic_pane_vc_g1

0xb61b,	// (0x00055756) list_set_graphic_pane_vc_g2_ParamLimits

0xb61b,	// (0x00055756) list_set_graphic_pane_vc_g2

0x0001,

0xfa03,	// (0x00059b3e) list_set_graphic_pane_vc_g_ParamLimits

0xfa03,	// (0x00059b3e) list_set_graphic_pane_vc_g

0xb627,	// (0x00055762) text_primary_small_cp13_vc_ParamLimits

0xb627,	// (0x00055762) text_primary_small_cp13_vc

0xb63f,	// (0x0005577a) list_set_graphic_pane_vc_ParamLimits

0xb63f,	// (0x0005577a) list_set_graphic_pane_vc

0x7d0c,	// (0x00051e47) input_focus_pane_cp2_vc

0x7d02,	// (0x00051e3d) setting_code_pane_vc_g1

0x7e37,	// (0x00051f72) setting_code_pane_vc_t1

0xb651,	// (0x0005578c) set_text_pane_vc_t1_ParamLimits

0xb651,	// (0x0005578c) set_text_pane_vc_t1

0x7d0c,	// (0x00051e47) input_focus_pane_cp1_vc

0xb66d,	// (0x000557a8) list_set_text_pane_vc

0x7d02,	// (0x00051e3d) setting_text_pane_vc_g1

0x7d0c,	// (0x00051e47) bg_set_opt_pane_cp2_vc

0x7e2e,	// (0x00051f69) setting_slider_graphic_pane_vc_g1

0xb677,	// (0x000557b2) setting_slider_graphic_pane_vc_t1

0xb687,	// (0x000557c2) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa08,	// (0x00059b43) setting_slider_graphic_pane_vc_t

0xb697,	// (0x000557d2) slider_set_pane_cp_vc

0xb69f,	// (0x000557da) slider_set_pane_vc_g1

0xb6a8,	// (0x000557e3) slider_set_pane_vc_g2

0x0006,

0xfa0d,	// (0x00059b48) slider_set_pane_vc_g

0x86b3,	// (0x000527ee) set_opt_bg_pane_g1_copy1

0x86bb,	// (0x000527f6) set_opt_bg_pane_g2_copy1

0xb6d4,	// (0x0005580f) set_opt_bg_pane_g3_copy1

0x86cb,	// (0x00052806) set_opt_bg_pane_g4_copy1

0x86d3,	// (0x0005280e) set_opt_bg_pane_g5_copy1

0x86db,	// (0x00052816) set_opt_bg_pane_g6_copy1

0xb6de,	// (0x00055819) set_opt_bg_pane_g7_copy1

0xb6e6,	// (0x00055821) set_opt_bg_pane_g8_copy1

0xb6f0,	// (0x0005582b) set_opt_bg_pane_g9_copy1

0x7d0c,	// (0x00051e47) bg_set_opt_pane_cp_vc

0xb6fa,	// (0x00055835) setting_slider_pane_vc_t1

0xb709,	// (0x00055844) setting_slider_pane_vc_t2

0xb719,	// (0x00055854) setting_slider_pane_vc_t3

0x0002,

0xfa1c,	// (0x00059b57) setting_slider_pane_vc_t

0xb729,	// (0x00055864) slider_set_pane_vc

0x61f8,	// (0x00050333) volume_set_pane_vc_g1

0x6201,	// (0x0005033c) volume_set_pane_vc_g2

0x620a,	// (0x00050345) volume_set_pane_vc_g3

0x6213,	// (0x0005034e) volume_set_pane_vc_g4

0x621c,	// (0x00050357) volume_set_pane_vc_g5

0x6225,	// (0x00050360) volume_set_pane_vc_g6

0x622e,	// (0x00050369) volume_set_pane_vc_g7

0x6237,	// (0x00050372) volume_set_pane_vc_g8

0x6240,	// (0x0005037b) volume_set_pane_vc_g9

0x6249,	// (0x00050384) volume_set_pane_vc_g10

0x0009,

0xf8c1,	// (0x000599fc) volume_set_pane_vc_g

0xb731,	// (0x0005586c) volume_set_pane_vc

0xb739,	// (0x00055874) button_value_adjust_pane_cp1_vc

0xb743,	// (0x0005587e) list_highlight_pane_cp2_vc

0xb74c,	// (0x00055887) list_set_pane_vc_ParamLimits

0xb74c,	// (0x00055887) list_set_pane_vc

0xb7aa,	// (0x000558e5) main_pane_set_vc_t1_ParamLimits

0xb7aa,	// (0x000558e5) main_pane_set_vc_t1

0xb7bf,	// (0x000558fa) main_pane_set_vc_t2_ParamLimits

0xb7bf,	// (0x000558fa) main_pane_set_vc_t2

0xb7d1,	// (0x0005590c) main_pane_set_vc_t3_ParamLimits

0xb7d1,	// (0x0005590c) main_pane_set_vc_t3

0xb7e5,	// (0x00055920) main_pane_set_vc_t4_ParamLimits

0xb7e5,	// (0x00055920) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x00059b5e) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x00059b5e) main_pane_set_vc_t

0xb7f9,	// (0x00055934) setting_code_pane_vc_ParamLimits

0xb7f9,	// (0x00055934) setting_code_pane_vc

0xb80a,	// (0x00055945) setting_slider_graphic_pane_vc

0xb80a,	// (0x00055945) setting_slider_pane_vc

0xb80a,	// (0x00055945) setting_text_pane_vc

0xb80a,	// (0x00055945) setting_volume_pane_vc

0xb814,	// (0x0005594f) scroll_pane_cp121_vc

0x863e,	// (0x00052779) set_content_pane_vc

0xb81c,	// (0x00055957) button_value_adjust_pane_g1

0xb825,	// (0x00055960) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x00059bb8) button_value_adjust_pane_g

0xb82e,	// (0x00055969) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb82e,	// (0x00055969) form_field_slider_wide_pane_vc_t1

0xb842,	// (0x0005597d) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb842,	// (0x0005597d) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x00059bbd) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x00059bbd) form_field_slider_wide_pane_vc_t

0x8067,	// (0x000521a2) input_focus_pane_cp10_vc_ParamLimits

0x8067,	// (0x000521a2) input_focus_pane_cp10_vc

0xb870,	// (0x000559ab) slider_cont_pane_cp1_vc_ParamLimits

0xb870,	// (0x000559ab) slider_cont_pane_cp1_vc

0xb882,	// (0x000559bd) slider_form_pane_g1_cp2

0xb6a8,	// (0x000557e3) slider_form_pane_g2_cp2

0xb8af,	// (0x000559ea) form_field_slider_pane_vc_t3

0xb8bd,	// (0x000559f8) form_field_slider_pane_vc_t4

0xb8cb,	// (0x00055a06) slider_form_pane_vc_ParamLimits

0xb8cb,	// (0x00055a06) slider_form_pane_vc

0xb8d8,	// (0x00055a13) form_field_slider_pane_vc_t1_ParamLimits

0xb8d8,	// (0x00055a13) form_field_slider_pane_vc_t1

0xb842,	// (0x0005597d) form_field_slider_pane_vc_t2_ParamLimits

0xb842,	// (0x0005597d) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x00059bcf) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x00059bcf) form_field_slider_pane_vc_t

0x8067,	// (0x000521a2) input_focus_pane_cp9_vc_ParamLimits

0x8067,	// (0x000521a2) input_focus_pane_cp9_vc

0xb8f4,	// (0x00055a2f) slider_cont_pane_vc_ParamLimits

0xb8f4,	// (0x00055a2f) slider_cont_pane_vc

0xb908,	// (0x00055a43) list_form_graphic_pane_cp_vc_ParamLimits

0xb908,	// (0x00055a43) list_form_graphic_pane_cp_vc

0x9c1b,	// (0x00053d56) form_field_popup_wide_pane_vc_g1

0xb91d,	// (0x00055a58) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb91d,	// (0x00055a58) form_field_popup_wide_pane_vc_t1

0x8664,	// (0x0005279f) input_focus_pane_cp8_vc_ParamLimits

0x8664,	// (0x0005279f) input_focus_pane_cp8_vc

0xb962,	// (0x00055a9d) list_form_wide_pane_vc_ParamLimits

0xb962,	// (0x00055a9d) list_form_wide_pane_vc

0xb96e,	// (0x00055aa9) list_form_graphic_pane_vc_g1

0xb976,	// (0x00055ab1) list_form_graphic_pane_vc_t1_ParamLimits

0xb976,	// (0x00055ab1) list_form_graphic_pane_vc_t1

0x7dec,	// (0x00051f27) list_highlight_pane_cp5_vc_ParamLimits

0x7dec,	// (0x00051f27) list_highlight_pane_cp5_vc

0xb992,	// (0x00055acd) list_form_graphic_pane_vc_ParamLimits

0xb992,	// (0x00055acd) list_form_graphic_pane_vc

0x9c1b,	// (0x00053d56) form_field_popup_pane_vc_g1

0xb9a8,	// (0x00055ae3) form_field_popup_pane_vc_t1_ParamLimits

0xb9a8,	// (0x00055ae3) form_field_popup_pane_vc_t1

0x8664,	// (0x0005279f) input_focus_pane_cp7_vc_ParamLimits

0x8664,	// (0x0005279f) input_focus_pane_cp7_vc

0xb9bf,	// (0x00055afa) list_form_pane_vc_ParamLimits

0xb9bf,	// (0x00055afa) list_form_pane_vc

0xb9cb,	// (0x00055b06) data_form_pane_vc_t1_ParamLimits

0xb9cb,	// (0x00055b06) data_form_pane_vc_t1

0x86b3,	// (0x000527ee) input_focus_pane_vc_g1

0x86bb,	// (0x000527f6) input_focus_pane_vc_g2

0x86c3,	// (0x000527fe) input_focus_pane_vc_g3

0x86cb,	// (0x00052806) input_focus_pane_vc_g4

0x86d3,	// (0x0005280e) input_focus_pane_vc_g5

0x86db,	// (0x00052816) input_focus_pane_vc_g6

0x86e3,	// (0x0005281e) input_focus_pane_vc_g7

0x86eb,	// (0x00052826) input_focus_pane_vc_g8

0x86f3,	// (0x0005282e) input_focus_pane_vc_g9

0x7d02,	// (0x00051e3d) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x000597d2) input_focus_pane_vc_g

0x9c0f,	// (0x00053d4a) data_form_pane_vc_ParamLimits

0x9c0f,	// (0x00053d4a) data_form_pane_vc

0x9c1b,	// (0x00053d56) form_field_data_pane_vc_g1

0xb9e6,	// (0x00055b21) form_field_data_pane_vc_t1_ParamLimits

0xb9e6,	// (0x00055b21) form_field_data_pane_vc_t1

0x8664,	// (0x0005279f) input_focus_pane_vc_ParamLimits

0x8664,	// (0x0005279f) input_focus_pane_vc

0xba00,	// (0x00055b3b) button_value_adjust_pane_cp3_vc

0xba08,	// (0x00055b43) button_value_adjust_pane_cp5_vc

0xba10,	// (0x00055b4b) form_field_data_pane_vc_ParamLimits

0xba10,	// (0x00055b4b) form_field_data_pane_vc

0xba27,	// (0x00055b62) form_field_data_pane_vc_cp2

0xba2f,	// (0x00055b6a) form_field_data_wide_pane_vc_ParamLimits

0xba2f,	// (0x00055b6a) form_field_data_wide_pane_vc

0xba45,	// (0x00055b80) form_field_data_wide_pane_vc_cp2

0xba4d,	// (0x00055b88) form_field_popup_pane_vc_ParamLimits

0xba4d,	// (0x00055b88) form_field_popup_pane_vc

0xba64,	// (0x00055b9f) form_field_popup_wide_pane_vc_ParamLimits

0xba64,	// (0x00055b9f) form_field_popup_wide_pane_vc

0xba7a,	// (0x00055bb5) form_field_slider_pane_vc_ParamLimits

0xba7a,	// (0x00055bb5) form_field_slider_pane_vc

0xba8d,	// (0x00055bc8) form_field_slider_wide_pane_vc_ParamLimits

0xba8d,	// (0x00055bc8) form_field_slider_wide_pane_vc

0xbaa0,	// (0x00055bdb) grid_touch_1_pane_ParamLimits

0xbaa0,	// (0x00055bdb) grid_touch_1_pane

0xbaac,	// (0x00055be7) grid_touch_2_pane_ParamLimits

0xbaac,	// (0x00055be7) grid_touch_2_pane

0x959c,	// (0x000536d7) touch_pane_g1_ParamLimits

0x959c,	// (0x000536d7) touch_pane_g1

0xbac4,	// (0x00055bff) cell_app_pane_cp_wide_ParamLimits

0xbac4,	// (0x00055bff) cell_app_pane_cp_wide

0xbad5,	// (0x00055c10) grid_popup_fast_wide_pane_ParamLimits

0xbad5,	// (0x00055c10) grid_popup_fast_wide_pane

0xbae9,	// (0x00055c24) scroll_pane_cp19_ParamLimits

0xbae9,	// (0x00055c24) scroll_pane_cp19

0x7d0c,	// (0x00051e47) bg_popup_window_pane_cp20

0xbafd,	// (0x00055c38) listscroll_popup_fast_wide_pane

0x7dec,	// (0x00051f27) grid_indicator_nsta_pane

0xbb05,	// (0x00055c40) clock_nsta_pane_g1

0xbb0e,	// (0x00055c49) clock_nsta_pane_t1

0xbb2a,	// (0x00055c65) cell_indicator_nsta_pane_ParamLimits

0xbb2a,	// (0x00055c65) cell_indicator_nsta_pane

0xbb62,	// (0x00055c9d) cell_indicator_nsta_pane_g1

0xbb70,	// (0x00055cab) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x00059be0) cell_indicator_nsta_pane_g

0xbb86,	// (0x00055cc1) clock_nsta_pane_cp

0xbb8e,	// (0x00055cc9) indicator_nsta_pane_cp

0xbb96,	// (0x00055cd1) nsta_clock_indic_pane_g1

0x7eb5,	// (0x00051ff0) grid_indicator_pane

0x8be7,	// (0x00052d22) scroll_pane_cp29

0x5787,	// (0x0004f8c2) indicator_nsta_pane_cp2_ParamLimits

0x5787,	// (0x0004f8c2) indicator_nsta_pane_cp2

0x7dec,	// (0x00051f27) main_apps_wheel_pane

0x9e30,	// (0x00053f6b) form_midp_field_text_pane_ParamLimits

0x9f7b,	// (0x000540b6) scroll_bar_cp050_ParamLimits

0xbbef,	// (0x00055d2a) cell_indicator_pane_ParamLimits

0xbbef,	// (0x00055d2a) cell_indicator_pane

0xbc06,	// (0x00055d41) cell_indicator_pane_g1

0xbc10,	// (0x00055d4b) grid_wheel_folder_pane_ParamLimits

0xbc10,	// (0x00055d4b) grid_wheel_folder_pane

0xbc26,	// (0x00055d61) list_wheel_apps_pane_ParamLimits

0xbc26,	// (0x00055d61) list_wheel_apps_pane

0xbc37,	// (0x00055d72) main_apps_wheel_pane_g1_ParamLimits

0xbc37,	// (0x00055d72) main_apps_wheel_pane_g1

0xbc4b,	// (0x00055d86) main_apps_wheel_pane_g2_ParamLimits

0xbc4b,	// (0x00055d86) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x00059bfc) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x00059bfc) main_apps_wheel_pane_g

0xbc63,	// (0x00055d9e) main_apps_wheel_pane_t1_ParamLimits

0xbc63,	// (0x00055d9e) main_apps_wheel_pane_t1

0xbc86,	// (0x00055dc1) list_wheel_apps_pane_g1

0xbc8e,	// (0x00055dc9) list_wheel_apps_pane_g2

0xbc96,	// (0x00055dd1) list_wheel_apps_pane_g3

0xbc9e,	// (0x00055dd9) list_wheel_apps_pane_g4

0xbca8,	// (0x00055de3) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x00059c01) list_wheel_apps_pane_g

0x915f,	// (0x0005329a) navi_icon_text_pane

0x9641,	// (0x0005377c) aid_fill_nsta

0xbccb,	// (0x00055e06) navi_icon_text_pane_g1

0xbcd7,	// (0x00055e12) navi_icon_text_pane_t1

0x8ffd,	// (0x00053138) list_set_graphic_pane_t1_ParamLimits

0x8ffd,	// (0x00053138) list_set_graphic_pane_t1

0xa6ca,	// (0x00054805) popup_midp_note_alarm_window_t6_ParamLimits

0xa6ca,	// (0x00054805) popup_midp_note_alarm_window_t6

0xa6dc,	// (0x00054817) popup_midp_note_alarm_window_t7_ParamLimits

0xa6dc,	// (0x00054817) popup_midp_note_alarm_window_t7

0xa6ee,	// (0x00054829) popup_midp_note_alarm_window_t8_ParamLimits

0xa6ee,	// (0x00054829) popup_midp_note_alarm_window_t8

0xa700,	// (0x0005483b) popup_midp_note_alarm_window_t9_ParamLimits

0xa700,	// (0x0005483b) popup_midp_note_alarm_window_t9

0xa712,	// (0x0005484d) popup_midp_note_alarm_window_t10_ParamLimits

0xa712,	// (0x0005484d) popup_midp_note_alarm_window_t10

0xa724,	// (0x0005485f) popup_midp_note_alarm_window_t11_ParamLimits

0xa724,	// (0x0005485f) popup_midp_note_alarm_window_t11

0xa736,	// (0x00054871) scroll_pane_cp17_ParamLimits

0xa736,	// (0x00054871) scroll_pane_cp17

0x61f8,	// (0x00050333) volume_small_pane_cp_g1

0x64ed,	// (0x00050628) volume_small_pane_cp_g2

0x64f6,	// (0x00050631) volume_small_pane_cp_g3

0x64ff,	// (0x0005063a) volume_small_pane_cp_g4

0x6508,	// (0x00050643) volume_small_pane_cp_g5

0x6511,	// (0x0005064c) volume_small_pane_cp_g6

0x651a,	// (0x00050655) volume_small_pane_cp_g7

0x6523,	// (0x0005065e) volume_small_pane_cp_g8

0x652c,	// (0x00050667) volume_small_pane_cp_g9

0x6535,	// (0x00050670) volume_small_pane_cp_g10

0x93ae,	// (0x000534e9) midp_ticker_pane_g1_ParamLimits

0x93ba,	// (0x000534f5) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0005989e) midp_ticker_pane_g_ParamLimits

0x93c6,	// (0x00053501) midp_ticker_pane_t1_ParamLimits

0x9657,	// (0x00053792) aid_fill_nsta_2

0x9f67,	// (0x000540a2) list_form2_midp_pane

0xb08c,	// (0x000551c7) midp_editing_number_pane_ParamLimits

0xb09b,	// (0x000551d6) midp_ticker_pane_ParamLimits

0xbce9,	// (0x00055e24) form2_midp_field_pane

0xbd0d,	// (0x00055e48) scroll_pane_cp51

0xbd2d,	// (0x00055e68) form2_midp_button_pane_ParamLimits

0xbd2d,	// (0x00055e68) form2_midp_button_pane

0xbd3f,	// (0x00055e7a) form2_midp_content_pane_ParamLimits

0xbd3f,	// (0x00055e7a) form2_midp_content_pane

0xbd59,	// (0x00055e94) form2_midp_field_choice_group_pane

0xbd61,	// (0x00055e9c) form2_midp_field_pane_g1

0xbd69,	// (0x00055ea4) form2_midp_field_pane_g2

0xbd71,	// (0x00055eac) form2_midp_field_pane_g3

0xbd79,	// (0x00055eb4) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x00059c26) form2_midp_field_pane_g

0xbd81,	// (0x00055ebc) form2_midp_gauge_slider_pane

0xbd89,	// (0x00055ec4) form2_midp_gauge_wait_pane

0xbd91,	// (0x00055ecc) form2_midp_image_pane_ParamLimits

0xbd91,	// (0x00055ecc) form2_midp_image_pane

0xbdac,	// (0x00055ee7) form2_midp_label_pane_ParamLimits

0xbdac,	// (0x00055ee7) form2_midp_label_pane

0xbdc5,	// (0x00055f00) form2_midp_label_pane_cp_ParamLimits

0xbdc5,	// (0x00055f00) form2_midp_label_pane_cp

0xbde6,	// (0x00055f21) form2_midp_string_pane_ParamLimits

0xbde6,	// (0x00055f21) form2_midp_string_pane

0x7929,	// (0x00051a64) form2_midp_text_pane_ParamLimits

0x7929,	// (0x00051a64) form2_midp_text_pane

0xbdf8,	// (0x00055f33) form2_midp_time_pane

0xbe08,	// (0x00055f43) input_focus_pane_cp51_ParamLimits

0xbe08,	// (0x00055f43) input_focus_pane_cp51

0xbe20,	// (0x00055f5b) form2_midp_label_pane_t1_ParamLimits

0xbe20,	// (0x00055f5b) form2_midp_label_pane_t1

0x7948,	// (0x00051a83) form2_mdip_text_pane_t1_ParamLimits

0x7948,	// (0x00051a83) form2_mdip_text_pane_t1

0x7966,	// (0x00051aa1) form2_midp_time_pane_t1

0xbe69,	// (0x00055fa4) form2_midp_gauge_slider_pane_t1

0xbe7b,	// (0x00055fb6) form2_midp_gauge_slider_pane_t2

0xbe8d,	// (0x00055fc8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x00059c2f) form2_midp_gauge_slider_pane_t

0xbe9f,	// (0x00055fda) form2_midp_slider_pane

0xbeab,	// (0x00055fe6) form2_midp_gauge_wait_pane_t1

0xbeb9,	// (0x00055ff4) form2_midp_wait_pane_ParamLimits

0xbeb9,	// (0x00055ff4) form2_midp_wait_pane

0x9c62,	// (0x00053d9d) list_single_2graphic_pane_cp4_ParamLimits

0x9c62,	// (0x00053d9d) list_single_2graphic_pane_cp4

0xbee4,	// (0x0005601f) list_single_midp_graphic_pane_cp_ParamLimits

0xbee4,	// (0x0005601f) list_single_midp_graphic_pane_cp

0x7d0c,	// (0x00051e47) list_highlight_pane_cp20

0xbf13,	// (0x0005604e) list_single_2graphic_pane_g1_cp4

0xbf1b,	// (0x00056056) list_single_2graphic_pane_g2_cp4

0xbf23,	// (0x0005605e) list_single_2graphic_pane_t1_cp4

0x7dec,	// (0x00051f27) list_highlight_pane_cp21

0xbf32,	// (0x0005606d) list_single_midp_graphic_pane_g4_cp

0xbf41,	// (0x0005607c) list_single_midp_graphic_pane_t1_cp

0xbf56,	// (0x00056091) form2_mdip_string_pane_t1_ParamLimits

0xbf56,	// (0x00056091) form2_mdip_string_pane_t1

0x7d0c,	// (0x00051e47) bg_wml_button_pane_cp2

0x7d02,	// (0x00051e3d) form2_midp_image_pane_g1

0x73f0,	// (0x0005152b) list_double_large_graphic_pane_g5_ParamLimits

0x73f0,	// (0x0005152b) list_double_large_graphic_pane_g5

0x883c,	// (0x00052977) midp_form_pane_ParamLimits

0x7dec,	// (0x00051f27) main_apps_wheel_pane_ParamLimits

0x5e6a,	// (0x0004ffa5) popup_preview_window_ParamLimits

0x5e6a,	// (0x0004ffa5) popup_preview_window

0x6025,	// (0x00050160) popup_touch_info_window_ParamLimits

0x6025,	// (0x00050160) popup_touch_info_window

0x6043,	// (0x0005017e) popup_touch_menu_window_ParamLimits

0x6043,	// (0x0005017e) popup_touch_menu_window

0x7cf8,	// (0x00051e33) bg_popup_sub_pane_cp6

0xc04f,	// (0x0005618a) list_touch_menu_pane

0xc057,	// (0x00056192) list_single_touch_menu_pane_ParamLimits

0xc057,	// (0x00056192) list_single_touch_menu_pane

0xc06d,	// (0x000561a8) list_single_touch_menu_pane_t1

0x7dec,	// (0x00051f27) bg_popup_sub_pane_cp7_ParamLimits

0x7dec,	// (0x00051f27) bg_popup_sub_pane_cp7

0xc07b,	// (0x000561b6) heading_sub_pane

0xc083,	// (0x000561be) list_touch_info_pane_ParamLimits

0xc083,	// (0x000561be) list_touch_info_pane

0xc092,	// (0x000561cd) list_single_touch_info_pane_ParamLimits

0xc092,	// (0x000561cd) list_single_touch_info_pane

0xc0a4,	// (0x000561df) list_single_touch_info_pane_t1

0xc0b2,	// (0x000561ed) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x00059c3d) list_single_touch_info_pane_t

0x92df,	// (0x0005341a) bg_popup_heading_pane_cp

0xc0c0,	// (0x000561fb) heading_sub_pane_t1

0x9ba9,	// (0x00053ce4) bg_popup_preview_window_pane_cp_ParamLimits

0x9ba9,	// (0x00053ce4) bg_popup_preview_window_pane_cp

0xc07b,	// (0x000561b6) heading_preview_pane

0xc083,	// (0x000561be) list_preview_pane_ParamLimits

0xc083,	// (0x000561be) list_preview_pane

0xc0ce,	// (0x00056209) popup_preview_window_g1

0xc092,	// (0x000561cd) list_single_preview_pane_ParamLimits

0xc092,	// (0x000561cd) list_single_preview_pane

0xc0d6,	// (0x00056211) list_single_preview_pane_g1

0xc0de,	// (0x00056219) list_single_preview_pane_t1

0xc0a4,	// (0x000561df) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x00059c42) list_single_preview_pane_t

0xc0ec,	// (0x00056227) bg_popup_heading_pane_cp2_ParamLimits

0xc0ec,	// (0x00056227) bg_popup_heading_pane_cp2

0xc102,	// (0x0005623d) heading_preview_pane_g1

0xc10a,	// (0x00056245) heading_preview_pane_t1_ParamLimits

0xc10a,	// (0x00056245) heading_preview_pane_t1

0x7ed8,	// (0x00052013) soft_indicator_pane_t1_ParamLimits

0x85cb,	// (0x00052706) scroll_pane_ParamLimits

0x8ae0,	// (0x00052c1b) scroll_sc2_left_pane

0x8ae9,	// (0x00052c24) scroll_sc2_right_pane

0x8b08,	// (0x00052c43) scroll_bg_pane_g1_ParamLimits

0x8b1d,	// (0x00052c58) scroll_bg_pane_g2_ParamLimits

0x8b35,	// (0x00052c70) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x00059829) scroll_bg_pane_g_ParamLimits

0x8b08,	// (0x00052c43) scroll_handle_pane_g1_ParamLimits

0x8b57,	// (0x00052c92) scroll_handle_pane_g2_ParamLimits

0x8b35,	// (0x00052c70) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x00059830) scroll_handle_pane_g_ParamLimits

0x5aed,	// (0x0004fc28) popup_choice_list_window_ParamLimits

0x5aed,	// (0x0004fc28) popup_choice_list_window

0x9a7f,	// (0x00053bba) choice_list_pane

0x9b01,	// (0x00053c3c) cell_toolbar_pane_t1

0x9b29,	// (0x00053c64) toolbar_button_pane_ParamLimits

0xabf0,	// (0x00054d2b) ai_gene_pane_1_t2_ParamLimits

0xabf0,	// (0x00054d2b) ai_gene_pane_1_t2

0x0001,

0xf91d,	// (0x00059a58) ai_gene_pane_1_t_ParamLimits

0xf91d,	// (0x00059a58) ai_gene_pane_1_t

0xc127,	// (0x00056262) scroll_sc2_left_pane_g1

0xc127,	// (0x00056262) scroll_sc2_right_pane_g1

0x961f,	// (0x0005375a) bg_popup_sub_pane_cp10

0xc131,	// (0x0005626c) list_choice_list_pane

0xc14a,	// (0x00056285) list_single_choice_list_pane_ParamLimits

0xc14a,	// (0x00056285) list_single_choice_list_pane

0xc15d,	// (0x00056298) list_single_choice_list_pane_g1

0x87ec,	// (0x00052927) list_single_choice_list_pane_t1_ParamLimits

0x87ec,	// (0x00052927) list_single_choice_list_pane_t1

0xc165,	// (0x000562a0) choice_list_pane_g1

0xc16d,	// (0x000562a8) choice_list_pane_t1

0x7cf8,	// (0x00051e33) input_focus_pane_cp11

0x89c3,	// (0x00052afe) title_pane_stacon_g2_ParamLimits

0x89c3,	// (0x00052afe) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0005980f) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0005980f) title_pane_stacon_g

0x92df,	// (0x0005341a) cursor_press_pane

0x5b99,	// (0x0004fcd4) popup_fep_hwr_window_ParamLimits

0x5b99,	// (0x0004fcd4) popup_fep_hwr_window

0x5c13,	// (0x0004fd4e) popup_fep_vkb_window_ParamLimits

0x5c13,	// (0x0004fd4e) popup_fep_vkb_window

0xc17b,	// (0x000562b6) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x00059c6b) fep_vkb_side_pane_g_ParamLimits

0x6577,	// (0x000506b2) fep_hwr_candidate_pane_ParamLimits

0x6577,	// (0x000506b2) fep_hwr_candidate_pane

0x65a1,	// (0x000506dc) fep_hwr_side_pane_ParamLimits

0x65a1,	// (0x000506dc) fep_hwr_side_pane

0x65c1,	// (0x000506fc) fep_hwr_top_pane_ParamLimits

0x65c1,	// (0x000506fc) fep_hwr_top_pane

0x65d9,	// (0x00050714) fep_hwr_write_pane_ParamLimits

0x65d9,	// (0x00050714) fep_hwr_write_pane

0xfb30,	// (0x00059c6b) fep_vkb_side_pane_g

0xc183,	// (0x000562be) fep_hwr_top_pane_g1

0xc195,	// (0x000562d0) fep_hwr_top_pane_g2

0x6613,	// (0x0005074e) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x00059c47) fep_hwr_top_pane_g

0x6628,	// (0x00050763) fep_hwr_top_text_pane

0x8cd7,	// (0x00052e12) fep_hwr_top_text_pane_g1

0xc1cb,	// (0x00056306) fep_hwr_top_text_pane_t1

0x671e,	// (0x00050859) fep_hwr_candidate_pane_g1

0xc41e,	// (0x00056559) fep_vkb_keypad_pane_g3_ParamLimits

0xc41e,	// (0x00056559) fep_vkb_keypad_pane_g3

0xc452,	// (0x0005658d) fep_vkb_keypad_pane_g4_ParamLimits

0xc452,	// (0x0005658d) fep_vkb_keypad_pane_g4

0xc4c1,	// (0x000565fc) fep_vkb_bottom_pane_g2_ParamLimits

0xc4c1,	// (0x000565fc) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x00059c72) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x00059c72) fep_vkb_bottom_pane_g

0xc127,	// (0x00056262) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x00059c7c) cell_vkb_side_pane_g

0xc54c,	// (0x00056687) cell_vkb_side_pane_t1

0xc55a,	// (0x00056695) cell_vkb_side_pane_t1_copy1

0xc127,	// (0x00056262) bg_fep_vkb_candidate_pane_g2

0xc686,	// (0x000567c1) cell_vkb_candidate_pane_ParamLimits

0xc1d9,	// (0x00056314) aid_size_cell_vkb_ParamLimits

0xc1d9,	// (0x00056314) aid_size_cell_vkb

0xc686,	// (0x000567c1) cell_vkb_candidate_pane

0x6745,	// (0x00050880) bg_popup_fep_shadow_pane_g1

0xc267,	// (0x000563a2) fep_vkb_bottom_pane_ParamLimits

0xc267,	// (0x000563a2) fep_vkb_bottom_pane

0xc29d,	// (0x000563d8) fep_vkb_candidate_pane_ParamLimits

0xc29d,	// (0x000563d8) fep_vkb_candidate_pane

0xc2b9,	// (0x000563f4) fep_vkb_keypad_pane_ParamLimits

0xc2b9,	// (0x000563f4) fep_vkb_keypad_pane

0xc2ff,	// (0x0005643a) fep_vkb_side_pane_ParamLimits

0xc2ff,	// (0x0005643a) fep_vkb_side_pane

0xc33b,	// (0x00056476) fep_vkb_top_pane_ParamLimits

0xc33b,	// (0x00056476) fep_vkb_top_pane

0xc377,	// (0x000564b2) fep_vkb_top_pane_g1_ParamLimits

0xc377,	// (0x000564b2) fep_vkb_top_pane_g1

0xc386,	// (0x000564c1) fep_vkb_top_pane_g2_ParamLimits

0xc386,	// (0x000564c1) fep_vkb_top_pane_g2

0xc395,	// (0x000564d0) fep_vkb_top_pane_g3_ParamLimits

0xc395,	// (0x000564d0) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x00059c62) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x00059c62) fep_vkb_top_pane_g

0xc3b3,	// (0x000564ee) fep_vkb_top_text_pane_ParamLimits

0xc3b3,	// (0x000564ee) fep_vkb_top_text_pane

0xc3c4,	// (0x000564ff) fep_vkb_side_pane_g1_ParamLimits

0xc3c4,	// (0x000564ff) fep_vkb_side_pane_g1

0xc40d,	// (0x00056548) grid_vkb_side_pane_ParamLimits

0xc40d,	// (0x00056548) grid_vkb_side_pane

0x674d,	// (0x00050888) bg_popup_fep_shadow_pane_g2

0x6756,	// (0x00050891) bg_popup_fep_shadow_pane_g3

0x675e,	// (0x00050899) bg_popup_fep_shadow_pane_g4

0x6767,	// (0x000508a2) bg_popup_fep_shadow_pane_g5

0x6771,	// (0x000508ac) bg_popup_fep_shadow_pane_g6

0x6779,	// (0x000508b4) bg_popup_fep_shadow_pane_g7

0x86cb,	// (0x00052806) bg_popup_fep_shadow_pane_g8

0xc470,	// (0x000565ab) grid_vkb_keypad_number_pane_ParamLimits

0xc470,	// (0x000565ab) grid_vkb_keypad_number_pane

0xc480,	// (0x000565bb) grid_vkb_keypad_pane_ParamLimits

0xc480,	// (0x000565bb) grid_vkb_keypad_pane

0xc4a6,	// (0x000565e1) fep_vkb_bottom_pane_g1_ParamLimits

0xc4a6,	// (0x000565e1) fep_vkb_bottom_pane_g1

0xc4cf,	// (0x0005660a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc4cf,	// (0x0005660a) grid_vkb_keypad_bottom_left_pane

0xc4e4,	// (0x0005661f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc4e4,	// (0x0005661f) grid_vkb_keypad_bottom_right_pane

0xc4f9,	// (0x00056634) fep_vkb_top_text_pane_g1

0xc514,	// (0x0005664f) fep_vkb_top_text_pane_t1

0xc529,	// (0x00056664) cell_vkb_side_pane_ParamLimits

0xc529,	// (0x00056664) cell_vkb_side_pane

0xc127,	// (0x00056262) cell_vkb_side_pane_g1

0xc568,	// (0x000566a3) cell_vkb_keypad_pane_ParamLimits

0xc568,	// (0x000566a3) cell_vkb_keypad_pane

0xc5dd,	// (0x00056718) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x00059c8f) bg_popup_fep_shadow_pane_g

0x678b,	// (0x000508c6) cell_hwr_side_pane_g1

0x678b,	// (0x000508c6) cell_hwr_side_pane_g2

0xc5e7,	// (0x00056722) cell_vkb_keypad_pane_t1

0xc5f5,	// (0x00056730) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc5f5,	// (0x00056730) cell_vkb_keypad_bottom_left_pane

0xc612,	// (0x0005674d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc612,	// (0x0005674d) cell_vkb_keypad_bottom_right_pane

0xc127,	// (0x00056262) cell_vkb_keypad_bottom_left_pane_g1

0xc127,	// (0x00056262) cell_vkb_keypad_bottom_right_pane_g1

0xc64b,	// (0x00056786) cell_vkb_keypad_number_pane_ParamLimits

0xc64b,	// (0x00056786) cell_vkb_keypad_number_pane

0xc66a,	// (0x000567a5) cell_vkb_keypad_number_pane_g1

0xc674,	// (0x000567af) cell_vkb_keypad_number_pane_g2

0xc67d,	// (0x000567b8) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x00059c81) cell_vkb_keypad_number_pane_g

0xc5e7,	// (0x00056722) cell_vkb_keypad_number_pane_t1

0xc6a1,	// (0x000567dc) fep_vkb_candidate_pane_g1

0x0001,

0xfb67,	// (0x00059ca2) cell_hwr_side_pane_g

0xc6ba,	// (0x000567f5) cell_hwr_side_pane_t1

0x6795,	// (0x000508d0) cell_hwr_side_pane_t1_copy1

0x67a3,	// (0x000508de) cell_hwr_candidate_pane_g1

0x67d2,	// (0x0005090d) cell_hwr_candidate_pane_t1

0xc127,	// (0x00056262) cell_vkb_candidate_pane_g2

0xc6fe,	// (0x00056839) cell_vkb_candidate_pane_t1

0x653e,	// (0x00050679) bg_popup_fep_shadow_pane_ParamLimits

0x653e,	// (0x00050679) bg_popup_fep_shadow_pane

0x65f3,	// (0x0005072e) bg_fep_hwr_top_pane_g4

0xc1a7,	// (0x000562e2) bg_hwr_side_pane_g1_ParamLimits

0xc1a7,	// (0x000562e2) bg_hwr_side_pane_g1

0x6664,	// (0x0005079f) cell_hwr_side_pane_ParamLimits

0x6664,	// (0x0005079f) cell_hwr_side_pane

0x669f,	// (0x000507da) fep_hwr_write_pane_g1_ParamLimits

0x669f,	// (0x000507da) fep_hwr_write_pane_g1

0x66ac,	// (0x000507e7) fep_hwr_write_pane_g2_ParamLimits

0x66ac,	// (0x000507e7) fep_hwr_write_pane_g2

0x66b9,	// (0x000507f4) fep_hwr_write_pane_g3_ParamLimits

0x66b9,	// (0x000507f4) fep_hwr_write_pane_g3

0x66c7,	// (0x00050802) fep_hwr_write_pane_g4_ParamLimits

0x66c7,	// (0x00050802) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x00059c4e) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x00059c4e) fep_hwr_write_pane_g

0x65f3,	// (0x0005072e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x65f3,	// (0x0005072e) bg_fep_hwr_candidate_pane_g2

0x66dc,	// (0x00050817) cell_hwr_candidate_pane_ParamLimits

0x66dc,	// (0x00050817) cell_hwr_candidate_pane

0x671e,	// (0x00050859) fep_hwr_candidate_pane_g1_ParamLimits

0xc207,	// (0x00056342) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc207,	// (0x00056342) bg_popup_fep_shadow_pane_cp2

0xc3a5,	// (0x000564e0) fep_vkb_top_pane_g4_ParamLimits

0xc3a5,	// (0x000564e0) fep_vkb_top_pane_g4

0xc3eb,	// (0x00056526) fep_vkb_side_pane_g2_ParamLimits

0xc3eb,	// (0x00056526) fep_vkb_side_pane_g2

0x5116,	// (0x0004f251) list_setting_pane_t4_ParamLimits

0x5116,	// (0x0004f251) list_setting_pane_t4

0x51b0,	// (0x0004f2eb) list_setting_number_pane_t5_ParamLimits

0x51b0,	// (0x0004f2eb) list_setting_number_pane_t5

0x8d1e,	// (0x00052e59) list_double_heading_pane_cp2_ParamLimits

0x8d1e,	// (0x00052e59) list_double_heading_pane_cp2

0x85ff,	// (0x0005273a) list_double_heading_pane_g1_cp2_ParamLimits

0x85ff,	// (0x0005273a) list_double_heading_pane_g1_cp2

0x8672,	// (0x000527ad) list_double_heading_pane_g2_cp2_ParamLimits

0x8672,	// (0x000527ad) list_double_heading_pane_g2_cp2

0xc70c,	// (0x00056847) list_double_heading_pane_t1_cp2_ParamLimits

0xc70c,	// (0x00056847) list_double_heading_pane_t1_cp2

0xc722,	// (0x0005685d) list_double_heading_pane_t2_cp2_ParamLimits

0xc722,	// (0x0005685d) list_double_heading_pane_t2_cp2

0x7ce0,	// (0x00051e1b) aid_value_unit2

0x4bbd,	// (0x0004ecf8) popup_preview_fixed_window

0x8075,	// (0x000521b0) bg_popup_preview_window_pane_cp02

0xc734,	// (0x0005686f) list_preview_fixed_pane

0xc77a,	// (0x000568b5) list_empty_pane_fp_ParamLimits

0xc77a,	// (0x000568b5) list_empty_pane_fp

0xc77a,	// (0x000568b5) list_single_cale_day_pane_fp_ParamLimits

0xc77a,	// (0x000568b5) list_single_cale_day_pane_fp

0xc77a,	// (0x000568b5) list_single_graphic_heading_pane_fp_ParamLimits

0xc77a,	// (0x000568b5) list_single_graphic_heading_pane_fp

0xc77a,	// (0x000568b5) list_single_graphic_pane_fp_ParamLimits

0xc77a,	// (0x000568b5) list_single_graphic_pane_fp

0xc77a,	// (0x000568b5) list_single_heading_pane_fp_ParamLimits

0xc77a,	// (0x000568b5) list_single_heading_pane_fp

0xc77a,	// (0x000568b5) list_single_pane_fp_ParamLimits

0xc77a,	// (0x000568b5) list_single_pane_fp

0xc78f,	// (0x000568ca) list_single_pane_fp_g1_ParamLimits

0xc78f,	// (0x000568ca) list_single_pane_fp_g1

0x85ff,	// (0x0005273a) list_single_pane_fp_g2_ParamLimits

0x85ff,	// (0x0005273a) list_single_pane_fp_g2

0x8672,	// (0x000527ad) list_single_pane_fp_g3_ParamLimits

0x8672,	// (0x000527ad) list_single_pane_fp_g3

0xc79b,	// (0x000568d6) list_single_pane_fp_g4_ParamLimits

0xc79b,	// (0x000568d6) list_single_pane_fp_g4

0x0003,

0xfb7a,	// (0x00059cb5) list_single_pane_fp_g_ParamLimits

0xfb7a,	// (0x00059cb5) list_single_pane_fp_g

0x7979,	// (0x00051ab4) list_single_pane_fp_t1_ParamLimits

0x7979,	// (0x00051ab4) list_single_pane_fp_t1

0x7990,	// (0x00051acb) list_single_graphic_pane_fp_g1_ParamLimits

0x7990,	// (0x00051acb) list_single_graphic_pane_fp_g1

0xc78f,	// (0x000568ca) list_single_graphic_pane_fp_g2_ParamLimits

0xc78f,	// (0x000568ca) list_single_graphic_pane_fp_g2

0x85ff,	// (0x0005273a) list_single_graphic_pane_fp_g3_ParamLimits

0x85ff,	// (0x0005273a) list_single_graphic_pane_fp_g3

0x8672,	// (0x000527ad) list_single_graphic_pane_fp_g4_ParamLimits

0x8672,	// (0x000527ad) list_single_graphic_pane_fp_g4

0xc79b,	// (0x000568d6) list_single_graphic_pane_fp_g5_ParamLimits

0xc79b,	// (0x000568d6) list_single_graphic_pane_fp_g5

0x0004,

0xfb83,	// (0x00059cbe) list_single_graphic_pane_fp_g_ParamLimits

0xfb83,	// (0x00059cbe) list_single_graphic_pane_fp_g

0x799c,	// (0x00051ad7) list_single_graphic_pane_fp_t1_ParamLimits

0x799c,	// (0x00051ad7) list_single_graphic_pane_fp_t1

0x7990,	// (0x00051acb) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7990,	// (0x00051acb) list_single_graphic_heading_pane_fp_g1

0xc78f,	// (0x000568ca) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc78f,	// (0x000568ca) list_single_graphic_heading_pane_fp_g2

0x85ff,	// (0x0005273a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x85ff,	// (0x0005273a) list_single_graphic_heading_pane_fp_g3

0x8672,	// (0x000527ad) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8672,	// (0x000527ad) list_single_graphic_heading_pane_fp_g4

0xc79b,	// (0x000568d6) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc79b,	// (0x000568d6) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb83,	// (0x00059cbe) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x00059cbe) list_single_graphic_heading_pane_fp_g

0x79b2,	// (0x00051aed) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x79b2,	// (0x00051aed) list_single_graphic_heading_pane_fp_t1

0x79c8,	// (0x00051b03) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x79c8,	// (0x00051b03) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8e,	// (0x00059cc9) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8e,	// (0x00059cc9) list_single_graphic_heading_pane_fp_t

0x79da,	// (0x00051b15) list_single_cale_day_pane_fp_g1_ParamLimits

0x79da,	// (0x00051b15) list_single_cale_day_pane_fp_g1

0xc7a7,	// (0x000568e2) list_single_cale_day_pane_fp_g2_ParamLimits

0xc7a7,	// (0x000568e2) list_single_cale_day_pane_fp_g2

0x7a12,	// (0x00051b4d) list_single_cale_day_pane_fp_g3_ParamLimits

0x7a12,	// (0x00051b4d) list_single_cale_day_pane_fp_g3

0x7a3a,	// (0x00051b75) list_single_cale_day_pane_fp_g4_ParamLimits

0x7a3a,	// (0x00051b75) list_single_cale_day_pane_fp_g4

0x7a5e,	// (0x00051b99) list_single_cale_day_pane_fp_g5_ParamLimits

0x7a5e,	// (0x00051b99) list_single_cale_day_pane_fp_g5

0x0004,

0xfb93,	// (0x00059cce) list_single_cale_day_pane_fp_g_ParamLimits

0xfb93,	// (0x00059cce) list_single_cale_day_pane_fp_g

0x7a82,	// (0x00051bbd) list_single_cale_day_pane_fp_t1_ParamLimits

0x7a82,	// (0x00051bbd) list_single_cale_day_pane_fp_t1

0x7aa8,	// (0x00051be3) list_single_cale_day_pane_fp_t2_ParamLimits

0x7aa8,	// (0x00051be3) list_single_cale_day_pane_fp_t2

0x7ac1,	// (0x00051bfc) list_single_cale_day_pane_fp_t3_ParamLimits

0x7ac1,	// (0x00051bfc) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9e,	// (0x00059cd9) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9e,	// (0x00059cd9) list_single_cale_day_pane_fp_t

0xc78f,	// (0x000568ca) list_empty_pane_fp_g1_ParamLimits

0xc78f,	// (0x000568ca) list_empty_pane_fp_g1

0x7ada,	// (0x00051c15) list_empty_pane_fp_t1

0x7ae8,	// (0x00051c23) list_empty_pane_fp_t2

0x0001,

0xfba5,	// (0x00059ce0) list_empty_pane_fp_t

0xc78f,	// (0x000568ca) list_single_heading_pane_fp_g1_ParamLimits

0xc78f,	// (0x000568ca) list_single_heading_pane_fp_g1

0x85ff,	// (0x0005273a) list_single_heading_pane_fp_g2_ParamLimits

0x85ff,	// (0x0005273a) list_single_heading_pane_fp_g2

0x8672,	// (0x000527ad) list_single_heading_pane_fp_g3_ParamLimits

0x8672,	// (0x000527ad) list_single_heading_pane_fp_g3

0x0002,

0xfbaa,	// (0x00059ce5) list_single_heading_pane_fp_g_ParamLimits

0xfbaa,	// (0x00059ce5) list_single_heading_pane_fp_g

0x7af6,	// (0x00051c31) list_single_heading_pane_fp_t1_ParamLimits

0x7af6,	// (0x00051c31) list_single_heading_pane_fp_t1

0x7b08,	// (0x00051c43) list_single_heading_pane_fp_t2_ParamLimits

0x7b08,	// (0x00051c43) list_single_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x00059cec) list_single_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x00059cec) list_single_heading_pane_fp_t

0x885a,	// (0x00052995) aid_size_cell_fast

0x7fe5,	// (0x00052120) soft_indicator_pane_cp1_t1

0x8897,	// (0x000529d2) cell_app_pane_cp2_ParamLimits

0x8897,	// (0x000529d2) cell_app_pane_cp2

0x6560,	// (0x0005069b) fep_hwr_candidate_drop_down_list_pane

0x6738,	// (0x00050873) fep_hwr_candidate_pane_g3_ParamLimits

0x6738,	// (0x00050873) fep_hwr_candidate_pane_g3

0x386f,	// (0x0004d9aa) fep_hwr_candidate_pane_g4_ParamLimits

0x386f,	// (0x0004d9aa) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x00059c5b) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x00059c5b) fep_hwr_candidate_pane_g

0xc28c,	// (0x000563c7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc28c,	// (0x000563c7) fep_vkb_candidate_drop_down_list_pane

0xc6a9,	// (0x000567e4) fep_vkb_candidate_pane_g3

0xc6b1,	// (0x000567ec) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x00059c88) fep_vkb_candidate_pane_g

0x67a3,	// (0x000508de) cell_hwr_candidate_pane_g1_ParamLimits

0x67b1,	// (0x000508ec) cell_hwr_candidate_pane_g3_ParamLimits

0x67b1,	// (0x000508ec) cell_hwr_candidate_pane_g3

0xdf1a,	// (0x00058055) cell_hwr_candidate_pane_g4_ParamLimits

0xdf1a,	// (0x00058055) cell_hwr_candidate_pane_g4

0x0002,

0xfb6c,	// (0x00059ca7) cell_hwr_candidate_pane_g_ParamLimits

0xfb6c,	// (0x00059ca7) cell_hwr_candidate_pane_g

0xc6c8,	// (0x00056803) cell_vkb_candidate_pane_g3_ParamLimits

0xc6c8,	// (0x00056803) cell_vkb_candidate_pane_g3

0xc6e3,	// (0x0005681e) cell_vkb_candidate_pane_g4_ParamLimits

0xc6e3,	// (0x0005681e) cell_vkb_candidate_pane_g4

0xc7b3,	// (0x000568ee) cell_app_pane_cp2_g1_ParamLimits

0xc7b3,	// (0x000568ee) cell_app_pane_cp2_g1

0xc7d1,	// (0x0005690c) cell_app_pane_cp2_g2_ParamLimits

0xc7d1,	// (0x0005690c) cell_app_pane_cp2_g2

0x0001,

0xfbb6,	// (0x00059cf1) cell_app_pane_cp2_g_ParamLimits

0xfbb6,	// (0x00059cf1) cell_app_pane_cp2_g

0xc7dd,	// (0x00056918) cell_app_pane_cp2_t1_ParamLimits

0xc7dd,	// (0x00056918) cell_app_pane_cp2_t1

0x8664,	// (0x0005279f) grid_highlight_pane_cp1_ParamLimits

0x8664,	// (0x0005279f) grid_highlight_pane_cp1

0x67f0,	// (0x0005092b) cell_hwr_candidate_pane_cp1_ParamLimits

0x67f0,	// (0x0005092b) cell_hwr_candidate_pane_cp1

0x67a3,	// (0x000508de) fep_hwr_candidate_drop_down_list_pane_g1

0x680f,	// (0x0005094a) fep_hwr_candidate_drop_down_list_pane_g2

0x681c,	// (0x00050957) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbb,	// (0x00059cf6) fep_hwr_candidate_drop_down_list_pane_g

0x6829,	// (0x00050964) fep_hwr_candidate_drop_down_list_scroll_pane

0x6832,	// (0x0005096d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6832,	// (0x0005096d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x683f,	// (0x0005097a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x683f,	// (0x0005097a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x684c,	// (0x00050987) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x684c,	// (0x00050987) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6859,	// (0x00050994) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6859,	// (0x00050994) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6874,	// (0x000509af) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6874,	// (0x000509af) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x688f,	// (0x000509ca) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x688f,	// (0x000509ca) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x68aa,	// (0x000509e5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x68aa,	// (0x000509e5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x68c5,	// (0x00050a00) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x68c5,	// (0x00050a00) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc2,	// (0x00059cfd) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc2,	// (0x00059cfd) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7ef,	// (0x0005692a) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7ef,	// (0x0005692a) cell_vkb_candidate_pane_cp1

0xc3a5,	// (0x000564e0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc3a5,	// (0x000564e0) fep_vkb_candidate_drop_down_list_pane_g1

0xc80f,	// (0x0005694a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc80f,	// (0x0005694a) fep_vkb_candidate_drop_down_list_pane_g2

0xc81c,	// (0x00056957) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc81c,	// (0x00056957) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd3,	// (0x00059d0e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd3,	// (0x00059d0e) fep_vkb_candidate_drop_down_list_pane_g

0xc829,	// (0x00056964) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc829,	// (0x00056964) fep_vkb_candidate_drop_down_list_scroll_pane

0xc836,	// (0x00056971) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc836,	// (0x00056971) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc843,	// (0x0005697e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc843,	// (0x0005697e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc84f,	// (0x0005698a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc84f,	// (0x0005698a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc85b,	// (0x00056996) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc85b,	// (0x00056996) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc87c,	// (0x000569b7) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc87c,	// (0x000569b7) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc89d,	// (0x000569d8) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc89d,	// (0x000569d8) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8be,	// (0x000569f9) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8be,	// (0x000569f9) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8df,	// (0x00056a1a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8df,	// (0x00056a1a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x00059d15) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x00059d15) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7d16,	// (0x00051e51) title_pane_g1_ParamLimits

0x7d23,	// (0x00051e5e) title_pane_g2_ParamLimits

0xf554,	// (0x0005968f) title_pane_g_ParamLimits

0x8cc7,	// (0x00052e02) aid_call2_pane

0x8ccf,	// (0x00052e0a) aid_call_pane

0x8cd7,	// (0x00052e12) popup_clock_analogue_window_g1

0x8cd7,	// (0x00052e12) popup_clock_analogue_window_g2

0x561a,	// (0x0004f755) popup_clock_analogue_window_g3

0x5623,	// (0x0004f75e) popup_clock_analogue_window_g4

0x7d02,	// (0x00051e3d) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0005983e) popup_clock_analogue_window_g

0x562b,	// (0x0004f766) popup_clock_analogue_window_t1

0x5639,	// (0x0004f774) clock_digital_number_pane_ParamLimits

0x5639,	// (0x0004f774) clock_digital_number_pane

0x5645,	// (0x0004f780) clock_digital_number_pane_cp02_ParamLimits

0x5645,	// (0x0004f780) clock_digital_number_pane_cp02

0x5651,	// (0x0004f78c) clock_digital_number_pane_cp03_ParamLimits

0x5651,	// (0x0004f78c) clock_digital_number_pane_cp03

0x565d,	// (0x0004f798) clock_digital_number_pane_cp04_ParamLimits

0x565d,	// (0x0004f798) clock_digital_number_pane_cp04

0x5669,	// (0x0004f7a4) clock_digital_separator_pane_ParamLimits

0x5669,	// (0x0004f7a4) clock_digital_separator_pane

0x5675,	// (0x0004f7b0) popup_clock_digital_window_t1_ParamLimits

0x5675,	// (0x0004f7b0) popup_clock_digital_window_t1

0x7d02,	// (0x00051e3d) clock_digital_number_pane_g1

0x7d02,	// (0x00051e3d) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x00059849) clock_digital_number_pane_g

0x7d02,	// (0x00051e3d) clock_digital_separator_pane_g1

0x7d02,	// (0x00051e3d) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x00059849) clock_digital_separator_pane_g

0x9641,	// (0x0005377c) aid_fill_nsta_ParamLimits

0x9787,	// (0x000538c2) indicator_nsta_pane_ParamLimits

0x990c,	// (0x00053a47) popup_clock_analogue_window

0x990c,	// (0x00053a47) popup_clock_digital_window

0x7dec,	// (0x00051f27) grid_indicator_nsta_pane_ParamLimits

0xbb1c,	// (0x00055c57) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x00059bdb) clock_nsta_pane_t

0x55de,	// (0x0004f719) aid_size_max_handle

0x55e8,	// (0x0004f723) aid_size_min_handle

0x92df,	// (0x0005341a) editor_scroll_pane

0xc8fa,	// (0x00056a35) ex_editor_pane

0x87c8,	// (0x00052903) scroll_pane_cp13

0x85f7,	// (0x00052732) scroll_pane_cp14

0x8d06,	// (0x00052e41) scroll_pane_cp36

0x8d32,	// (0x00052e6d) list_single_graphic_hl_pane_cp2_ParamLimits

0x8d32,	// (0x00052e6d) list_single_graphic_hl_pane_cp2

0x761d,	// (0x00051758) list_single_graphic_hl_pane_ParamLimits

0x761d,	// (0x00051758) list_single_graphic_hl_pane

0x7b1e,	// (0x00051c59) aid_size_min_hl_cp1

0xc902,	// (0x00056a3d) list_highlight_pane_cp34_ParamLimits

0xc902,	// (0x00056a3d) list_highlight_pane_cp34

0xc913,	// (0x00056a4e) list_single_graphic_hl_pane_g1_ParamLimits

0xc913,	// (0x00056a4e) list_single_graphic_hl_pane_g1

0x7b27,	// (0x00051c62) list_single_graphic_hl_pane_g2_ParamLimits

0x7b27,	// (0x00051c62) list_single_graphic_hl_pane_g2

0x7b27,	// (0x00051c62) list_single_graphic_hl_pane_g3_ParamLimits

0x7b27,	// (0x00051c62) list_single_graphic_hl_pane_g3

0x9250,	// (0x0005338b) list_single_graphic_hl_pane_g4_ParamLimits

0x9250,	// (0x0005338b) list_single_graphic_hl_pane_g4

0x7b33,	// (0x00051c6e) list_single_graphic_hl_pane_g5_ParamLimits

0x7b33,	// (0x00051c6e) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x00059d26) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x00059d26) list_single_graphic_hl_pane_g

0x7b47,	// (0x00051c82) list_single_graphic_hl_pane_t1_ParamLimits

0x7b47,	// (0x00051c82) list_single_graphic_hl_pane_t1

0xc920,	// (0x00056a5b) aid_size_min_hl_cp2

0xc929,	// (0x00056a64) list_highlight_pane_cp34_cp2_ParamLimits

0xc929,	// (0x00056a64) list_highlight_pane_cp34_cp2

0xc913,	// (0x00056a4e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc913,	// (0x00056a4e) list_single_graphic_hl_pane_g1_cp2

0xc936,	// (0x00056a71) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc936,	// (0x00056a71) list_single_graphic_hl_pane_g2_cp2

0xc942,	// (0x00056a7d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc942,	// (0x00056a7d) list_single_graphic_hl_pane_g3_cp2

0xc446,	// (0x00056581) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc446,	// (0x00056581) list_single_graphic_hl_pane_g4_cp2

0xc950,	// (0x00056a8b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc950,	// (0x00056a8b) list_single_graphic_hl_pane_g5_cp2

0x5997,	// (0x0004fad2) control_pane_g4_ParamLimits

0x5997,	// (0x0004fad2) control_pane_g4

0x961f,	// (0x0005375a) bg_popup_sub_pane_cp10_ParamLimits

0xc131,	// (0x0005626c) list_choice_list_pane_ParamLimits

0xc140,	// (0x0005627b) scroll_pane_cp23

0x8075,	// (0x000521b0) bg_popup_preview_window_pane_cp02_ParamLimits

0xc734,	// (0x0005686f) list_preview_fixed_pane_ParamLimits

0xc74a,	// (0x00056885) list_preview_fixed_pane_cp_ParamLimits

0xc74a,	// (0x00056885) list_preview_fixed_pane_cp

0xc756,	// (0x00056891) popup_preview_fixed_window_g1_ParamLimits

0xc756,	// (0x00056891) popup_preview_fixed_window_g1

0xc762,	// (0x0005689d) popup_preview_fixed_window_g2_ParamLimits

0xc762,	// (0x0005689d) popup_preview_fixed_window_g2

0x0002,

0xfb73,	// (0x00059cae) popup_preview_fixed_window_g_ParamLimits

0xfb73,	// (0x00059cae) popup_preview_fixed_window_g

0x5552,	// (0x0004f68d) aid_navi_side_left_pane_ParamLimits

0x5567,	// (0x0004f6a2) aid_navi_side_right_pane_ParamLimits

0x557f,	// (0x0004f6ba) navi_icon_pane_stacon_ParamLimits

0x5593,	// (0x0004f6ce) navi_navi_pane_stacon_ParamLimits

0x557f,	// (0x0004f6ba) navi_text_pane_stacon_ParamLimits

0x4a7e,	// (0x0004ebb9) main_text_info_pane

0xc97a,	// (0x00056ab5) listscroll_text_info_pane

0xc982,	// (0x00056abd) list_text_info_pane_ParamLimits

0xc982,	// (0x00056abd) list_text_info_pane

0xc991,	// (0x00056acc) scroll_pane_cp24_ParamLimits

0xc991,	// (0x00056acc) scroll_pane_cp24

0xc9af,	// (0x00056aea) list_text_info_pane_t1_ParamLimits

0xc9af,	// (0x00056aea) list_text_info_pane_t1

0x5b0b,	// (0x0004fc46) popup_fast_swap2_window_ParamLimits

0x5b0b,	// (0x0004fc46) popup_fast_swap2_window

0xc9e0,	// (0x00056b1b) aid_size_cell_fast2

0x7cf8,	// (0x00051e33) bg_popup_window_pane_cp17

0x9f93,	// (0x000540ce) heading_pane_cp2

0x82c1,	// (0x000523fc) listscroll_fast2_pane

0xc9ea,	// (0x00056b25) grid_fast2_pane

0xc9f4,	// (0x00056b2f) listscroll_fast2_pane_g1

0xc9fc,	// (0x00056b37) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x00059d31) listscroll_fast2_pane_g

0x87c8,	// (0x00052903) scroll_pane_cp26

0xca06,	// (0x00056b41) cell_fast2_pane_ParamLimits

0xca06,	// (0x00056b41) cell_fast2_pane

0xca1b,	// (0x00056b56) cell_fast2_pane_g1

0xca24,	// (0x00056b5f) cell_fast2_pane_g2

0xca2d,	// (0x00056b68) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x00059d36) cell_fast2_pane_g

0x83b4,	// (0x000524ef) grid_highlight_pane_cp9

0x5ac9,	// (0x0004fc04) main_eswt_pane_ParamLimits

0x5ac9,	// (0x0004fc04) main_eswt_pane

0xc9a6,	// (0x00056ae1) list_single_text_info_pane

0xca35,	// (0x00056b70) eswt_ctrl_button_pane

0xca35,	// (0x00056b70) eswt_ctrl_canvas_pane

0xca3d,	// (0x00056b78) eswt_ctrl_combo_pane

0xca35,	// (0x00056b70) eswt_ctrl_default_pane

0xca35,	// (0x00056b70) eswt_ctrl_label_pane

0xca45,	// (0x00056b80) eswt_ctrl_wait_pane

0xca4d,	// (0x00056b88) eswt_shell_pane

0x7cf8,	// (0x00051e33) listscroll_eswt_app_pane

0xca6d,	// (0x00056ba8) popup_eswt_tasktip_window_ParamLimits

0xca6d,	// (0x00056ba8) popup_eswt_tasktip_window

0x9ba9,	// (0x00053ce4) bg_popup_window_pane_cp18

0xca7e,	// (0x00056bb9) eswt_control_pane_g1_ParamLimits

0xca7e,	// (0x00056bb9) eswt_control_pane_g1

0xca8b,	// (0x00056bc6) eswt_control_pane_g2_ParamLimits

0xca8b,	// (0x00056bc6) eswt_control_pane_g2

0xca98,	// (0x00056bd3) eswt_control_pane_g3_ParamLimits

0xca98,	// (0x00056bd3) eswt_control_pane_g3

0xcaa5,	// (0x00056be0) eswt_control_pane_g4_ParamLimits

0xcaa5,	// (0x00056be0) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x00059d3d) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x00059d3d) eswt_control_pane_g

0x8664,	// (0x0005279f) bg_button_pane_ParamLimits

0x8664,	// (0x0005279f) bg_button_pane

0x83c9,	// (0x00052504) common_borders_pane_copy2_ParamLimits

0x83c9,	// (0x00052504) common_borders_pane_copy2

0xcab2,	// (0x00056bed) control_button_pane_g1_ParamLimits

0xcab2,	// (0x00056bed) control_button_pane_g1

0xcabe,	// (0x00056bf9) control_button_pane_g2_ParamLimits

0xcabe,	// (0x00056bf9) control_button_pane_g2

0xcaca,	// (0x00056c05) control_button_pane_g3_ParamLimits

0xcaca,	// (0x00056c05) control_button_pane_g3

0x0002,

0xfc0b,	// (0x00059d46) control_button_pane_g_ParamLimits

0xfc0b,	// (0x00059d46) control_button_pane_g

0xcade,	// (0x00056c19) control_button_pane_t1

0xcaec,	// (0x00056c27) control_button_pane_t2

0x0001,

0xfc12,	// (0x00059d4d) control_button_pane_t

0x9b35,	// (0x00053c70) bg_button_pane_g1

0x9b45,	// (0x00053c80) bg_button_pane_g2

0x9b3d,	// (0x00053c78) bg_button_pane_g3

0x9b55,	// (0x00053c90) bg_button_pane_g4

0x9b4d,	// (0x00053c88) bg_button_pane_g5

0x9b5d,	// (0x00053c98) bg_button_pane_g6

0x9b65,	// (0x00053ca0) bg_button_pane_g7

0x9b75,	// (0x00053cb0) bg_button_pane_g8

0x9b6d,	// (0x00053ca8) bg_button_pane_g9

0x0008,

0xf871,	// (0x000599ac) bg_button_pane_g

0xc0ec,	// (0x00056227) common_borders_pane_ParamLimits

0xc0ec,	// (0x00056227) common_borders_pane

0xca7e,	// (0x00056bb9) eswt_control_pane_g1_copy1_ParamLimits

0xca7e,	// (0x00056bb9) eswt_control_pane_g1_copy1

0xca8b,	// (0x00056bc6) eswt_control_pane_g2_copy1_ParamLimits

0xca8b,	// (0x00056bc6) eswt_control_pane_g2_copy1

0xca98,	// (0x00056bd3) eswt_control_pane_g3_copy1_ParamLimits

0xca98,	// (0x00056bd3) eswt_control_pane_g3_copy1

0xcaa5,	// (0x00056be0) eswt_control_pane_g4_copy1_ParamLimits

0xcaa5,	// (0x00056be0) eswt_control_pane_g4_copy1

0xc127,	// (0x00056262) bg_eswt_ctrl_canvas_pane_g1

0xc0ec,	// (0x00056227) common_borders_pane_cp2_ParamLimits

0xc0ec,	// (0x00056227) common_borders_pane_cp2

0xc0ec,	// (0x00056227) common_borders_pane_cp3_ParamLimits

0xc0ec,	// (0x00056227) common_borders_pane_cp3

0xcafa,	// (0x00056c35) separator_horizontal_pane

0xcb02,	// (0x00056c3d) separator_vertical_pane

0xca7e,	// (0x00056bb9) eswt_control_pane_g1_copy2_ParamLimits

0xca7e,	// (0x00056bb9) eswt_control_pane_g1_copy2

0xca8b,	// (0x00056bc6) eswt_control_pane_g2_copy2_ParamLimits

0xca8b,	// (0x00056bc6) eswt_control_pane_g2_copy2

0xca98,	// (0x00056bd3) eswt_control_pane_g3_copy2_ParamLimits

0xca98,	// (0x00056bd3) eswt_control_pane_g3_copy2

0xcaa5,	// (0x00056be0) eswt_control_pane_g4_copy2_ParamLimits

0xcaa5,	// (0x00056be0) eswt_control_pane_g4_copy2

0x7cf8,	// (0x00051e33) common_borders_pane_cp4

0xcb0b,	// (0x00056c46) separator_horizontal_pane_g1

0xcb14,	// (0x00056c4f) separator_horizontal_pane_g2

0xcb1d,	// (0x00056c58) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x00059d52) separator_horizontal_pane_g

0xca7e,	// (0x00056bb9) eswt_control_pane_g1_copy3_ParamLimits

0xca7e,	// (0x00056bb9) eswt_control_pane_g1_copy3

0xca8b,	// (0x00056bc6) eswt_control_pane_g2_copy3_ParamLimits

0xca8b,	// (0x00056bc6) eswt_control_pane_g2_copy3

0xca98,	// (0x00056bd3) eswt_control_pane_g3_copy3_ParamLimits

0xca98,	// (0x00056bd3) eswt_control_pane_g3_copy3

0xcaa5,	// (0x00056be0) eswt_control_pane_g4_copy3_ParamLimits

0xcaa5,	// (0x00056be0) eswt_control_pane_g4_copy3

0x7cf8,	// (0x00051e33) common_borders_pane_cp5

0xcb26,	// (0x00056c61) separator_vertical_pane_g1

0xcb2f,	// (0x00056c6a) separator_vertical_pane_g2

0xcb38,	// (0x00056c73) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x00059d59) separator_vertical_pane_g

0xca7e,	// (0x00056bb9) eswt_control_pane_g1_copy4_ParamLimits

0xca7e,	// (0x00056bb9) eswt_control_pane_g1_copy4

0xca8b,	// (0x00056bc6) eswt_control_pane_g2_copy4_ParamLimits

0xca8b,	// (0x00056bc6) eswt_control_pane_g2_copy4

0xca98,	// (0x00056bd3) eswt_control_pane_g3_copy4_ParamLimits

0xca98,	// (0x00056bd3) eswt_control_pane_g3_copy4

0xcaa5,	// (0x00056be0) eswt_control_pane_g4_copy4_ParamLimits

0xcaa5,	// (0x00056be0) eswt_control_pane_g4_copy4

0xcb41,	// (0x00056c7c) eswt_ctrl_combo_button_pane

0xcb49,	// (0x00056c84) eswt_ctrl_input_pane

0xcb51,	// (0x00056c8c) popup_choice_list_window_cp70

0xcb59,	// (0x00056c94) eswt_ctrl_input_pane_t1

0x7cf8,	// (0x00051e33) input_focus_pane_cp70

0xc0ec,	// (0x00056227) bg_button_pane_cp70_ParamLimits

0xc0ec,	// (0x00056227) bg_button_pane_cp70

0xcb67,	// (0x00056ca2) eswt_ctrl_combo_button_pane_g1

0xcb6f,	// (0x00056caa) wait_bar_pane_cp70

0x9ba9,	// (0x00053ce4) bg_popup_window_pane_cp70_ParamLimits

0x9ba9,	// (0x00053ce4) bg_popup_window_pane_cp70

0xcb77,	// (0x00056cb2) popup_eswt_tasktip_window_t1

0xcb8d,	// (0x00056cc8) wait_bar_pane_cp71_ParamLimits

0xcb8d,	// (0x00056cc8) wait_bar_pane_cp71

0xcb99,	// (0x00056cd4) grid_eswt_app_pane

0x8ae0,	// (0x00052c1b) scroll_pane_cp70

0xcba2,	// (0x00056cdd) cell_eswt_app_pane_ParamLimits

0xcba2,	// (0x00056cdd) cell_eswt_app_pane

0xcbd2,	// (0x00056d0d) cell_eswt_app_pane_g1_ParamLimits

0xcbd2,	// (0x00056d0d) cell_eswt_app_pane_g1

0xcc01,	// (0x00056d3c) cell_eswt_app_pane_g2_ParamLimits

0xcc01,	// (0x00056d3c) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x00059d60) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x00059d60) cell_eswt_app_pane_g

0xcc2a,	// (0x00056d65) cell_eswt_app_pane_t1_ParamLimits

0xcc2a,	// (0x00056d65) cell_eswt_app_pane_t1

0xcc5c,	// (0x00056d97) grid_highlight_pane_cp70_ParamLimits

0xcc5c,	// (0x00056d97) grid_highlight_pane_cp70

0x91b4,	// (0x000532ef) set_content_pane_g1

0x957f,	// (0x000536ba) status_small_volume_pane

0x68e0,	// (0x00050a1b) status_small_volume_pane_g1

0x68e8,	// (0x00050a23) volume_small2_pane

0x68f1,	// (0x00050a2c) volume_small2_pane_g1

0x68fa,	// (0x00050a35) volume_small2_pane_g2

0x6903,	// (0x00050a3e) volume_small2_pane_g3

0x690c,	// (0x00050a47) volume_small2_pane_g4

0x6915,	// (0x00050a50) volume_small2_pane_g5

0x691e,	// (0x00050a59) volume_small2_pane_g6

0x6927,	// (0x00050a62) volume_small2_pane_g7

0x6930,	// (0x00050a6b) volume_small2_pane_g8

0x6939,	// (0x00050a74) volume_small2_pane_g9

0x6942,	// (0x00050a7d) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x00059d65) volume_small2_pane_g

0xc4f9,	// (0x00056634) fep_vkb_top_text_pane_g1_ParamLimits

0xc514,	// (0x0005664f) fep_vkb_top_text_pane_t1_ParamLimits

0xc76e,	// (0x000568a9) popup_preview_fixed_window_g3_ParamLimits

0xc76e,	// (0x000568a9) popup_preview_fixed_window_g3

0x5fb8,	// (0x000500f3) popup_toolbar_trans_pane

0xaef4,	// (0x0005502f) aid_height_set_list_ParamLimits

0xaf05,	// (0x00055040) aid_size_parent_ParamLimits

0x961f,	// (0x0005375a) list_highlight_pane_cp2_ParamLimits

0x91b4,	// (0x000532ef) set_content_pane_g1_ParamLimits

0x7638,	// (0x00051773) list_single_image_pane_ParamLimits

0x7638,	// (0x00051773) list_single_image_pane

0xcc68,	// (0x00056da3) aid_size_cell_image_ParamLimits

0xcc68,	// (0x00056da3) aid_size_cell_image

0xcc75,	// (0x00056db0) grid_single_image_pane_ParamLimits

0xcc75,	// (0x00056db0) grid_single_image_pane

0x979d,	// (0x000538d8) list_single_image_pane_g1_ParamLimits

0x979d,	// (0x000538d8) list_single_image_pane_g1

0xcc81,	// (0x00056dbc) list_single_image_pane_g2_ParamLimits

0xcc81,	// (0x00056dbc) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x00059d7a) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x00059d7a) list_single_image_pane_g

0xcc95,	// (0x00056dd0) list_single_image_pane_t1_ParamLimits

0xcc95,	// (0x00056dd0) list_single_image_pane_t1

0xccab,	// (0x00056de6) cell_image_list_pane_ParamLimits

0xccab,	// (0x00056de6) cell_image_list_pane

0xccbf,	// (0x00056dfa) cell_image_list_pane_g1

0xccc8,	// (0x00056e03) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x00059d7f) cell_image_list_pane_g

0xccd1,	// (0x00056e0c) aid_size_cell_tb_trans_pane

0x8664,	// (0x0005279f) bg_tb_trans_pane

0xcce3,	// (0x00056e1e) grid_tb_trans_pane

0x9b35,	// (0x00053c70) bg_tb_trans_pane_g1

0x9b45,	// (0x00053c80) bg_tb_trans_pane_g2

0x9b3d,	// (0x00053c78) bg_tb_trans_pane_g3

0x9b55,	// (0x00053c90) bg_tb_trans_pane_g4

0x9b4d,	// (0x00053c88) bg_tb_trans_pane_g5

0x9b75,	// (0x00053cb0) bg_tb_trans_pane_g6

0x9b6d,	// (0x00053ca8) bg_tb_trans_pane_g7

0x9b5d,	// (0x00053c98) bg_tb_trans_pane_g8

0x9b65,	// (0x00053ca0) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x00059d84) bg_tb_trans_pane_g

0xccf7,	// (0x00056e32) cell_toolbar_trans_pane_ParamLimits

0xccf7,	// (0x00056e32) cell_toolbar_trans_pane

0xc127,	// (0x00056262) cell_toolbar_trans_pane_g1

0xbcf1,	// (0x00055e2c) list_form2_midp_pane_t1

0xbcff,	// (0x00055e3a) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x00059c21) list_form2_midp_pane_t

0xbd0d,	// (0x00055e48) scroll_pane_cp51_ParamLimits

0xbec9,	// (0x00056004) form2_midp_wait_pane_g1

0xbed2,	// (0x0005600d) form2_midp_wait_pane_g2

0xbedb,	// (0x00056016) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x00059c36) form2_midp_wait_pane_g

0x7dec,	// (0x00051f27) list_highlight_pane_cp21_ParamLimits

0xbf32,	// (0x0005606d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf41,	// (0x0005607c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x75c1,	// (0x000516fc) list_single_2graphic_im_pane_ParamLimits

0x75c1,	// (0x000516fc) list_single_2graphic_im_pane

0xcd1d,	// (0x00056e58) list_single_2graphic_im_pane_g1_ParamLimits

0xcd1d,	// (0x00056e58) list_single_2graphic_im_pane_g1

0xcd2e,	// (0x00056e69) list_single_2graphic_im_pane_g2_ParamLimits

0xcd2e,	// (0x00056e69) list_single_2graphic_im_pane_g2

0xcd3a,	// (0x00056e75) list_single_2graphic_im_pane_g3_ParamLimits

0xcd3a,	// (0x00056e75) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x00059d97) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x00059d97) list_single_2graphic_im_pane_g

0xcd5a,	// (0x00056e95) list_single_2graphic_im_pane_t1_ParamLimits

0xcd5a,	// (0x00056e95) list_single_2graphic_im_pane_t1

0xc77a,	// (0x000568b5) list_single_graphic_2heading_pane_fp_ParamLimits

0xc77a,	// (0x000568b5) list_single_graphic_2heading_pane_fp

0x7990,	// (0x00051acb) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7990,	// (0x00051acb) list_single_graphic_2heading_pane_fp_g1

0xc78f,	// (0x000568ca) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc78f,	// (0x000568ca) list_single_graphic_2heading_pane_fp_g2

0x85ff,	// (0x0005273a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x85ff,	// (0x0005273a) list_single_graphic_2heading_pane_fp_g3

0x8672,	// (0x000527ad) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8672,	// (0x000527ad) list_single_graphic_2heading_pane_fp_g4

0xc79b,	// (0x000568d6) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc79b,	// (0x000568d6) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb83,	// (0x00059cbe) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb83,	// (0x00059cbe) list_single_graphic_2heading_pane_fp_g

0x7b5d,	// (0x00051c98) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7b5d,	// (0x00051c98) list_single_graphic_2heading_pane_fp_t1

0x79c8,	// (0x00051b03) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x79c8,	// (0x00051b03) list_single_graphic_2heading_pane_fp_t2

0x7b73,	// (0x00051cae) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7b73,	// (0x00051cae) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x00059da0) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x00059da0) list_single_graphic_2heading_pane_fp_t

0xc1b3,	// (0x000562ee) fep_hwr_write_pane_g5_ParamLimits

0xc1b3,	// (0x000562ee) fep_hwr_write_pane_g5

0xc1bf,	// (0x000562fa) fep_hwr_write_pane_g6_ParamLimits

0xc1bf,	// (0x000562fa) fep_hwr_write_pane_g6

0xca4d,	// (0x00056b88) eswt_shell_pane_ParamLimits

0x9ba9,	// (0x00053ce4) bg_popup_window_pane_cp18_ParamLimits

0xae4d,	// (0x00054f88) heading_pane_cp70

0xcb77,	// (0x00056cb2) popup_eswt_tasktip_window_t1_ParamLimits

0x9696,	// (0x000537d1) aid_touch_tab_arrow_left

0x96a5,	// (0x000537e0) aid_touch_tab_arrow_right

0x7d34,	// (0x00051e6f) title_pane_g3_ParamLimits

0x7d34,	// (0x00051e6f) title_pane_g3

0x8623,	// (0x0005275e) set_value_pane_g1

0x5fb8,	// (0x000500f3) popup_toolbar_trans_pane_ParamLimits

0xccd1,	// (0x00056e0c) aid_size_cell_tb_trans_pane_ParamLimits

0x8664,	// (0x0005279f) bg_tb_trans_pane_ParamLimits

0xcce3,	// (0x00056e1e) grid_tb_trans_pane_ParamLimits

0x8075,	// (0x000521b0) cont_note_pane_ParamLimits

0x8075,	// (0x000521b0) cont_note_pane

0x83c9,	// (0x00052504) cont_snote2_single_text_pane_ParamLimits

0x83c9,	// (0x00052504) cont_snote2_single_text_pane

0x83c9,	// (0x00052504) cont_snote2_single_graphic_pane_ParamLimits

0x83c9,	// (0x00052504) cont_snote2_single_graphic_pane

0xa1ae,	// (0x000542e9) cont_note_wait_pane_ParamLimits

0xa1ae,	// (0x000542e9) cont_note_wait_pane

0xa1ae,	// (0x000542e9) cont_note_image_pane_ParamLimits

0xa1ae,	// (0x000542e9) cont_note_image_pane

0xcd8b,	// (0x00056ec6) popup_note2_window_g1_ParamLimits

0xcd8b,	// (0x00056ec6) popup_note2_window_g1

0xcdbc,	// (0x00056ef7) popup_note2_window_t1_ParamLimits

0xcdbc,	// (0x00056ef7) popup_note2_window_t1

0xce01,	// (0x00056f3c) popup_note2_window_t2_ParamLimits

0xce01,	// (0x00056f3c) popup_note2_window_t2

0xce46,	// (0x00056f81) popup_note2_window_t3_ParamLimits

0xce46,	// (0x00056f81) popup_note2_window_t3

0xce8b,	// (0x00056fc6) popup_note2_window_t4_ParamLimits

0xce8b,	// (0x00056fc6) popup_note2_window_t4

0x80f9,	// (0x00052234) popup_note2_window_t5_ParamLimits

0x80f9,	// (0x00052234) popup_note2_window_t5

0x0004,

0xfc71,	// (0x00059dac) popup_note2_window_t_ParamLimits

0xfc71,	// (0x00059dac) popup_note2_window_t

0xceba,	// (0x00056ff5) popup_note2_image_window_g1_ParamLimits

0xceba,	// (0x00056ff5) popup_note2_image_window_g1

0xcec6,	// (0x00057001) popup_note2_image_window_g2_ParamLimits

0xcec6,	// (0x00057001) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x00059db7) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x00059db7) popup_note2_image_window_g

0xced8,	// (0x00057013) popup_note2_image_window_t1_ParamLimits

0xced8,	// (0x00057013) popup_note2_image_window_t1

0xcef0,	// (0x0005702b) popup_note2_image_window_t2_ParamLimits

0xcef0,	// (0x0005702b) popup_note2_image_window_t2

0xcf08,	// (0x00057043) popup_note2_image_window_t3_ParamLimits

0xcf08,	// (0x00057043) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x00059dbc) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x00059dbc) popup_note2_image_window_t

0xa1bc,	// (0x000542f7) popup_note2_wait_window_g1_ParamLimits

0xa1bc,	// (0x000542f7) popup_note2_wait_window_g1

0xcf24,	// (0x0005705f) popup_note2_wait_window_g2_ParamLimits

0xcf24,	// (0x0005705f) popup_note2_wait_window_g2

0xa1d4,	// (0x0005430f) popup_note2_wait_window_g3_ParamLimits

0xa1d4,	// (0x0005430f) popup_note2_wait_window_g3

0x0002,

0xfc88,	// (0x00059dc3) popup_note2_wait_window_g_ParamLimits

0xfc88,	// (0x00059dc3) popup_note2_wait_window_g

0xcf30,	// (0x0005706b) popup_note2_wait_window_t1_ParamLimits

0xcf30,	// (0x0005706b) popup_note2_wait_window_t1

0xcf4e,	// (0x00057089) popup_note2_wait_window_t2_ParamLimits

0xcf4e,	// (0x00057089) popup_note2_wait_window_t2

0xcf6c,	// (0x000570a7) popup_note2_wait_window_t3_ParamLimits

0xcf6c,	// (0x000570a7) popup_note2_wait_window_t3

0xcf7e,	// (0x000570b9) popup_note2_wait_window_t4_ParamLimits

0xcf7e,	// (0x000570b9) popup_note2_wait_window_t4

0x0003,

0xfc8f,	// (0x00059dca) popup_note2_wait_window_t_ParamLimits

0xfc8f,	// (0x00059dca) popup_note2_wait_window_t

0xcf90,	// (0x000570cb) wait_bar2_pane_ParamLimits

0xcf90,	// (0x000570cb) wait_bar2_pane

0xcfa8,	// (0x000570e3) popup_snote2_single_text_window_g1_ParamLimits

0xcfa8,	// (0x000570e3) popup_snote2_single_text_window_g1

0xcfd0,	// (0x0005710b) popup_snote2_single_text_window_t1_ParamLimits

0xcfd0,	// (0x0005710b) popup_snote2_single_text_window_t1

0xd01c,	// (0x00057157) popup_snote2_single_text_window_t2_ParamLimits

0xd01c,	// (0x00057157) popup_snote2_single_text_window_t2

0xd068,	// (0x000571a3) popup_snote2_single_text_window_t3_ParamLimits

0xd068,	// (0x000571a3) popup_snote2_single_text_window_t3

0xd0a9,	// (0x000571e4) popup_snote2_single_text_window_t4_ParamLimits

0xd0a9,	// (0x000571e4) popup_snote2_single_text_window_t4

0xd0df,	// (0x0005721a) popup_snote2_single_text_window_t5_ParamLimits

0xd0df,	// (0x0005721a) popup_snote2_single_text_window_t5

0x0004,

0xfc98,	// (0x00059dd3) popup_snote2_single_text_window_t_ParamLimits

0xfc98,	// (0x00059dd3) popup_snote2_single_text_window_t

0xd10a,	// (0x00057245) popup_snote2_single_graphic_window_g1_ParamLimits

0xd10a,	// (0x00057245) popup_snote2_single_graphic_window_g1

0xd132,	// (0x0005726d) popup_snote2_single_graphic_window_g2_ParamLimits

0xd132,	// (0x0005726d) popup_snote2_single_graphic_window_g2

0x0001,

0xfca3,	// (0x00059dde) popup_snote2_single_graphic_window_g_ParamLimits

0xfca3,	// (0x00059dde) popup_snote2_single_graphic_window_g

0xd15a,	// (0x00057295) popup_snote2_single_graphic_window_t1_ParamLimits

0xd15a,	// (0x00057295) popup_snote2_single_graphic_window_t1

0xd1a6,	// (0x000572e1) popup_snote2_single_graphic_window_t2_ParamLimits

0xd1a6,	// (0x000572e1) popup_snote2_single_graphic_window_t2

0xd068,	// (0x000571a3) popup_snote2_single_graphic_window_t3_ParamLimits

0xd068,	// (0x000571a3) popup_snote2_single_graphic_window_t3

0xd0a9,	// (0x000571e4) popup_snote2_single_graphic_window_t4_ParamLimits

0xd0a9,	// (0x000571e4) popup_snote2_single_graphic_window_t4

0xd0df,	// (0x0005721a) popup_snote2_single_graphic_window_t5_ParamLimits

0xd0df,	// (0x0005721a) popup_snote2_single_graphic_window_t5

0x0004,

0xfca8,	// (0x00059de3) popup_snote2_single_graphic_window_t_ParamLimits

0xfca8,	// (0x00059de3) popup_snote2_single_graphic_window_t

0xbbce,	// (0x00055d09) clock_nsta_pane_cp2_t1

0xbbce,	// (0x00055d09) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x00059bf7) clock_nsta_pane_cp2_t

0x52d0,	// (0x0004f40b) form_field_data_wide_pane_g1_ParamLimits

0x85ff,	// (0x0005273a) form_field_data_wide_pane_g2_ParamLimits

0x85ff,	// (0x0005273a) form_field_data_wide_pane_g2

0x8672,	// (0x000527ad) form_field_data_wide_pane_g3_ParamLimits

0x8672,	// (0x000527ad) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x000597c1) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x000597c1) form_field_data_wide_pane_g

0xbab8,	// (0x00055bf3) grid_touch_3_pane_ParamLimits

0xbab8,	// (0x00055bf3) grid_touch_3_pane

0xd1f2,	// (0x0005732d) cell_touch_3_pane_ParamLimits

0xd1f2,	// (0x0005732d) cell_touch_3_pane

0xc127,	// (0x00056262) cell_touch_3_pane_g1

0xc127,	// (0x00056262) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x00059c7c) cell_touch_3_pane_g

0x812b,	// (0x00052266) cont_query_data_pane

0x8133,	// (0x0005226e) cont_query_data_pane_cp1

0xd220,	// (0x0005735b) button_value_adjust_pane_cp7

0xd228,	// (0x00057363) query_popup_pane_cp3

0x8dc7,	// (0x00052f02) bg_popup_sub_pane_cp22_ParamLimits

0x5694,	// (0x0004f7cf) navi_navi_volume_pane_cp2

0x56af,	// (0x0004f7ea) popup_side_volume_key_window_g2

0x56be,	// (0x0004f7f9) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x00059857) popup_side_volume_key_window_g

0x56db,	// (0x0004f816) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0005985e) popup_side_volume_key_window_t

0x907e,	// (0x000531b9) popup_side_volume_key_window_ParamLimits

0x4f18,	// (0x0004f053) list_double_graphic_pane_g4_ParamLimits

0x4f18,	// (0x0004f053) list_double_graphic_pane_g4

0x75fe,	// (0x00051739) list_single_2heading_msg_pane_ParamLimits

0x75fe,	// (0x00051739) list_single_2heading_msg_pane

0x7b93,	// (0x00051cce) list_single_2heading_msg_pane_g1_ParamLimits

0x7b93,	// (0x00051cce) list_single_2heading_msg_pane_g1

0x9218,	// (0x00053353) list_single_2heading_msg_pane_g2_ParamLimits

0x9218,	// (0x00053353) list_single_2heading_msg_pane_g2

0x776b,	// (0x000518a6) list_single_2heading_msg_pane_g3_ParamLimits

0x776b,	// (0x000518a6) list_single_2heading_msg_pane_g3

0x7b9f,	// (0x00051cda) list_single_2heading_msg_pane_g4_ParamLimits

0x7b9f,	// (0x00051cda) list_single_2heading_msg_pane_g4

0x0003,

0xfcb3,	// (0x00059dee) list_single_2heading_msg_pane_g_ParamLimits

0xfcb3,	// (0x00059dee) list_single_2heading_msg_pane_g

0x7bb7,	// (0x00051cf2) list_single_2heading_msg_pane_t1_ParamLimits

0x7bb7,	// (0x00051cf2) list_single_2heading_msg_pane_t1

0x7bdf,	// (0x00051d1a) list_single_2heading_msg_pane_t2_ParamLimits

0x7bdf,	// (0x00051d1a) list_single_2heading_msg_pane_t2

0x7c13,	// (0x00051d4e) list_single_2heading_msg_pane_t3_ParamLimits

0x7c13,	// (0x00051d4e) list_single_2heading_msg_pane_t3

0x7c4c,	// (0x00051d87) list_single_2heading_msg_pane_t4_ParamLimits

0x7c4c,	// (0x00051d87) list_single_2heading_msg_pane_t4

0x0003,

0xfcbc,	// (0x00059df7) list_single_2heading_msg_pane_t_ParamLimits

0xfcbc,	// (0x00059df7) list_single_2heading_msg_pane_t

0x7d40,	// (0x00051e7b) title_pane_g4_ParamLimits

0x7d40,	// (0x00051e7b) title_pane_g4

0x54a3,	// (0x0004f5de) title_pane_stacon_g3_ParamLimits

0x54a3,	// (0x0004f5de) title_pane_stacon_g3

0xcd4e,	// (0x00056e89) list_single_2graphic_im_pane_g4_ParamLimits

0xcd4e,	// (0x00056e89) list_single_2graphic_im_pane_g4

0xac0d,	// (0x00054d48) popup_side_volume_key_window_cp

0xb406,	// (0x00055541) main_idle_act2_pane_t1

0x60cc,	// (0x00050207) toolbar_button_pane_g10

0x85c1,	// (0x000526fc) popup_toolbar_window_cp1

0xbbbf,	// (0x00055cfa) clock_nsta_pane_cp_t1

0xbbbf,	// (0x00055cfa) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x00059bf2) clock_nsta_pane_cp_t

0x5694,	// (0x0004f7cf) navi_navi_volume_pane_cp2_ParamLimits

0x56a3,	// (0x0004f7de) popup_side_volume_key_window_g1_ParamLimits

0x56af,	// (0x0004f7ea) popup_side_volume_key_window_g2_ParamLimits

0x56be,	// (0x0004f7f9) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x00059857) popup_side_volume_key_window_g_ParamLimits

0x654c,	// (0x00050687) fep_hwr_aid_pane

0x65f3,	// (0x0005072e) bg_fep_hwr_top_pane_g4_ParamLimits

0xc183,	// (0x000562be) fep_hwr_top_pane_g1_ParamLimits

0xc195,	// (0x000562d0) fep_hwr_top_pane_g2_ParamLimits

0x6613,	// (0x0005074e) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x00059c47) fep_hwr_top_pane_g_ParamLimits

0x6628,	// (0x00050763) fep_hwr_top_text_pane_ParamLimits

0xa9d0,	// (0x00054b0b) aid_touch_tab_arrow_arrow_2

0xa9d9,	// (0x00054b14) aid_touch_tab_arrow_left_2

0x6560,	// (0x0005069b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6597,	// (0x000506d2) fep_hwr_prediction_pane

0xc2f5,	// (0x00056430) fep_vkb_prediction_pane

0xc3f9,	// (0x00056534) fep_vkb_side_pane_g3_ParamLimits

0xc3f9,	// (0x00056534) fep_vkb_side_pane_g3

0x67a3,	// (0x000508de) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x680f,	// (0x0005094a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x681c,	// (0x00050957) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbb,	// (0x00059cf6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x694b,	// (0x00050a86) fep_hwr_prediction_pane_g1

0x6955,	// (0x00050a90) fep_hwr_prediction_pane_g2

0x695d,	// (0x00050a98) fep_hwr_prediction_pane_g3

0x6965,	// (0x00050aa0) fep_hwr_prediction_pane_g4

0x0003,

0xfcc5,	// (0x00059e00) fep_hwr_prediction_pane_g

0xd24d,	// (0x00057388) fep_vkb_prediction_pane_g1

0xd257,	// (0x00057392) fep_vkb_prediction_pane_g2

0xd25f,	// (0x0005739a) fep_vkb_prediction_pane_g3

0xd267,	// (0x000573a2) fep_vkb_prediction_pane_g4

0x0003,

0xfcce,	// (0x00059e09) fep_vkb_prediction_pane_g

0x63cc,	// (0x00050507) slider_set_pane_g3

0x63e0,	// (0x0005051b) slider_set_pane_g4

0x63f8,	// (0x00050533) slider_set_pane_g5

0x63cc,	// (0x00050507) slider_set_pane_g6

0x640e,	// (0x00050549) slider_set_pane_g7

0xb06a,	// (0x000551a5) slider_form_pane_g3

0xb073,	// (0x000551ae) slider_form_pane_g4

0xb07b,	// (0x000551b6) slider_form_pane_g5

0xb06a,	// (0x000551a5) slider_form_pane_g6

0xb083,	// (0x000551be) slider_form_pane_g7

0xb6b0,	// (0x000557eb) slider_set_pane_vc_g3

0xb6b9,	// (0x000557f4) slider_set_pane_vc_g4

0xb6c2,	// (0x000557fd) slider_set_pane_vc_g5

0xb6b0,	// (0x000557eb) slider_set_pane_vc_g6

0xb6cb,	// (0x00055806) slider_set_pane_vc_g7

0xb88b,	// (0x000559c6) slider_form_pane_vc_g1

0xb894,	// (0x000559cf) slider_form_pane_vc_g2

0xb89d,	// (0x000559d8) slider_form_pane_vc_g3

0xb88b,	// (0x000559c6) slider_form_pane_vc_g4

0xb8a6,	// (0x000559e1) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x00059bc4) slider_form_pane_vc_g

0x4a7e,	// (0x0004ebb9) main_idle_act3_pane

0xd26f,	// (0x000573aa) ai3_links_pane

0xd278,	// (0x000573b3) popup_ai3_data_window_ParamLimits

0xd278,	// (0x000573b3) popup_ai3_data_window

0x7cf8,	// (0x00051e33) grid_ai3_links_pane

0xd292,	// (0x000573cd) cell_ai3_links_pane_ParamLimits

0xd292,	// (0x000573cd) cell_ai3_links_pane

0xd2aa,	// (0x000573e5) bg_popup_sub_pane_cp11

0xd2b7,	// (0x000573f2) cell_ai3_links_pane_g1

0x7cf8,	// (0x00051e33) bg_popup_sub_pane_cp12

0xd2dc,	// (0x00057417) heading_ai3_data_pane

0xd2e4,	// (0x0005741f) list_ai3_gene_pane

0xd2f0,	// (0x0005742b) popup_ai3_data_window_g1

0xd2f8,	// (0x00057433) heading_ai3_data_pane_g1

0xd300,	// (0x0005743b) heading_ai3_data_pane_t1

0xd30e,	// (0x00057449) list_double_ai3_gene_pane_ParamLimits

0xd30e,	// (0x00057449) list_double_ai3_gene_pane

0xd31b,	// (0x00057456) list_single_ai3_gene_pane_ParamLimits

0xd31b,	// (0x00057456) list_single_ai3_gene_pane

0xc0ec,	// (0x00056227) list_highlight_pane_cp7_ParamLimits

0xc0ec,	// (0x00056227) list_highlight_pane_cp7

0xd328,	// (0x00057463) list_single_a13_gene_pane_t1_ParamLimits

0xd328,	// (0x00057463) list_single_a13_gene_pane_t1

0xd33f,	// (0x0005747a) list_single_ai3_gene_pane_g1

0xd348,	// (0x00057483) list_single_ai3_gene_pane_g2

0x0001,

0xfcd7,	// (0x00059e12) list_single_ai3_gene_pane_g

0xd350,	// (0x0005748b) list_double_ai3_gene_pane_g1_ParamLimits

0xd350,	// (0x0005748b) list_double_ai3_gene_pane_g1

0xd35c,	// (0x00057497) list_double_ai3_gene_pane_t1_ParamLimits

0xd35c,	// (0x00057497) list_double_ai3_gene_pane_t1

0xd378,	// (0x000574b3) list_double_ai3_gene_pane_t2_ParamLimits

0xd378,	// (0x000574b3) list_double_ai3_gene_pane_t2

0xd38e,	// (0x000574c9) list_double_ai3_gene_pane_t3_ParamLimits

0xd38e,	// (0x000574c9) list_double_ai3_gene_pane_t3

0x0002,

0xfcdc,	// (0x00059e17) list_double_ai3_gene_pane_t_ParamLimits

0xfcdc,	// (0x00059e17) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7b89,	// (0x00051cc4) aid_size_min_col_2

0xd239,	// (0x00057374) aid_size_min_msg_ParamLimits

0xd239,	// (0x00057374) aid_size_min_msg

0xc505,	// (0x00056640) fep_vkb_top_text_pane_g2_ParamLimits

0xc505,	// (0x00056640) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x00059c77) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x00059c77) fep_vkb_top_text_pane_g

0x4a7e,	// (0x0004ebb9) main_hc_apps_shell_pane

0xd3ab,	// (0x000574e6) grid_hc_apps_pane_ParamLimits

0xd3ab,	// (0x000574e6) grid_hc_apps_pane

0xd3ba,	// (0x000574f5) list_hc_apps_pane

0xd3c2,	// (0x000574fd) scroll_pane_cp37_ParamLimits

0xd3c2,	// (0x000574fd) scroll_pane_cp37

0xd3ce,	// (0x00057509) cell_hc_apps_pane_ParamLimits

0xd3ce,	// (0x00057509) cell_hc_apps_pane

0xd47c,	// (0x000575b7) cell_hc_apps_pane_g1_ParamLimits

0xd47c,	// (0x000575b7) cell_hc_apps_pane_g1

0xd4ad,	// (0x000575e8) cell_hc_apps_pane_g2_ParamLimits

0xd4ad,	// (0x000575e8) cell_hc_apps_pane_g2

0xd4c9,	// (0x00057604) cell_hc_apps_pane_g3_ParamLimits

0xd4c9,	// (0x00057604) cell_hc_apps_pane_g3

0x0002,

0xfce3,	// (0x00059e1e) cell_hc_apps_pane_g_ParamLimits

0xfce3,	// (0x00059e1e) cell_hc_apps_pane_g

0xd4eb,	// (0x00057626) cell_hc_apps_pane_t1_ParamLimits

0xd4eb,	// (0x00057626) cell_hc_apps_pane_t1

0x8075,	// (0x000521b0) grid_highlight_pane_cp10_ParamLimits

0x8075,	// (0x000521b0) grid_highlight_pane_cp10

0xd52b,	// (0x00057666) list_single_hc_apps_pane_ParamLimits

0xd52b,	// (0x00057666) list_single_hc_apps_pane

0xd587,	// (0x000576c2) list_single_hc_apps_pane_g1

0x7c71,	// (0x00051dac) list_single_hc_apps_pane_g2

0x0001,

0xfcea,	// (0x00059e25) list_single_hc_apps_pane_g

0x7c8a,	// (0x00051dc5) list_single_hc_apps_pane_g2_copy1

0x7ca6,	// (0x00051de1) list_single_hc_apps_pane_t1

0x7dec,	// (0x00051f27) bg_set_opt_pane_cp_ParamLimits

0x4cdf,	// (0x0004ee1a) setting_slider_pane_t1_ParamLimits

0x4cf8,	// (0x0004ee33) setting_slider_pane_t2_ParamLimits

0x4d12,	// (0x0004ee4d) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0005969f) setting_slider_pane_t_ParamLimits

0x4d2a,	// (0x0004ee65) slider_set_pane_ParamLimits

0x59ab,	// (0x0004fae6) control_pane_g5_ParamLimits

0x59ab,	// (0x0004fae6) control_pane_g5

0xaeb9,	// (0x00054ff4) slider_set_pane_g1_ParamLimits

0x63c0,	// (0x000504fb) slider_set_pane_g2_ParamLimits

0x63cc,	// (0x00050507) slider_set_pane_g3_ParamLimits

0x63e0,	// (0x0005051b) slider_set_pane_g4_ParamLimits

0x63f8,	// (0x00050533) slider_set_pane_g5_ParamLimits

0x63cc,	// (0x00050507) slider_set_pane_g6_ParamLimits

0x640e,	// (0x00050549) slider_set_pane_g7_ParamLimits

0xf96f,	// (0x00059aaa) slider_set_pane_g_ParamLimits

0x915f,	// (0x0005329a) navi_icon_text_pane_ParamLimits

0x9657,	// (0x00053792) aid_fill_nsta_2_ParamLimits

0x9696,	// (0x000537d1) aid_touch_tab_arrow_left_ParamLimits

0x96a5,	// (0x000537e0) aid_touch_tab_arrow_right_ParamLimits

0x9712,	// (0x0005384d) clock_nsta_pane_ParamLimits

0xa9b2,	// (0x00054aed) navi_icon_pane_g1_ParamLimits

0xa9be,	// (0x00054af9) navi_text_pane_t1_ParamLimits

0xbccb,	// (0x00055e06) navi_icon_text_pane_g1_ParamLimits

0xbcd7,	// (0x00055e12) navi_icon_text_pane_t1_ParamLimits

0xd587,	// (0x000576c2) list_single_hc_apps_pane_g1_ParamLimits

0x7c71,	// (0x00051dac) list_single_hc_apps_pane_g2_ParamLimits

0xfcea,	// (0x00059e25) list_single_hc_apps_pane_g_ParamLimits

0x7c8a,	// (0x00051dc5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7ca6,	// (0x00051de1) list_single_hc_apps_pane_t1_ParamLimits

0x4be9,	// (0x0004ed24) popup_toolbar2_fixed_window_ParamLimits

0x4be9,	// (0x0004ed24) popup_toolbar2_fixed_window

0x5fae,	// (0x000500e9) popup_toolbar2_float_window

0x7cf8,	// (0x00051e33) bg_popup_sub_pane_cp27

0xd5a0,	// (0x000576db) grid_toolbar2_float_pane

0x7cf8,	// (0x00051e33) bg_popup_sub_pane_cp26

0xd5a0,	// (0x000576db) grid_toolbar2_fixed_pane

0xd5a8,	// (0x000576e3) cell_toolbar2_fixed_pane_ParamLimits

0xd5a8,	// (0x000576e3) cell_toolbar2_fixed_pane

0xd5b8,	// (0x000576f3) cell_toolbar2_fixed_pane_g1

0xd5c1,	// (0x000576fc) toolbar2_fixed_button_pane

0x9b35,	// (0x00053c70) toolbar2_fixed_button_pane_g1

0x9b45,	// (0x00053c80) toolbar2_fixed_button_pane_g2

0x9b3d,	// (0x00053c78) toolbar2_fixed_button_pane_g3

0x9b55,	// (0x00053c90) toolbar2_fixed_button_pane_g4

0x9b4d,	// (0x00053c88) toolbar2_fixed_button_pane_g5

0x9b5d,	// (0x00053c98) toolbar2_fixed_button_pane_g6

0x9b65,	// (0x00053ca0) toolbar2_fixed_button_pane_g7

0x9b75,	// (0x00053cb0) toolbar2_fixed_button_pane_g8

0x9b6d,	// (0x00053ca8) toolbar2_fixed_button_pane_g9

0x0008,

0xf871,	// (0x000599ac) toolbar2_fixed_button_pane_g

0xd5c9,	// (0x00057704) cell_toolbar2_float_pane_ParamLimits

0xd5c9,	// (0x00057704) cell_toolbar2_float_pane

0xd5da,	// (0x00057715) cell_toolbar2_float_pane_g1

0xd5c1,	// (0x000576fc) toolbar2_fixed_button_pane_cp

0xc255,	// (0x00056390) fep_vkb_accented_list_pane_ParamLimits

0xc255,	// (0x00056390) fep_vkb_accented_list_pane

0x6783,	// (0x000508be) bg_popup_fep_shadow_pane_g9

0x92df,	// (0x0005341a) bg_popup_fep_shadow_pane_cp3

0x87af,	// (0x000528ea) list_accented_list_pane

0xd5e3,	// (0x0005771e) list_single_accented_list_pane_ParamLimits

0xd5e3,	// (0x0005771e) list_single_accented_list_pane

0x92df,	// (0x0005341a) list_highlight_pane_cp10

0xd5f4,	// (0x0005772f) list_single_accented_list_pane_t1

0x5efe,	// (0x00050039) popup_slider_window_ParamLimits

0x5efe,	// (0x00050039) popup_slider_window

0xd230,	// (0x0005736b) aid_indentation_list_msg

0xd6ae,	// (0x000577e9) bg_popup_window_pane_cp19

0xd718,	// (0x00057853) popup_slider_window_g1

0xd734,	// (0x0005786f) popup_slider_window_g2

0xd750,	// (0x0005788b) popup_slider_window_g3

0x0005,

0xfcef,	// (0x00059e2a) popup_slider_window_g

0xd7ac,	// (0x000578e7) popup_slider_window_t1

0xd820,	// (0x0005795b) small_volume_slider_vertical_pane

0xc127,	// (0x00056262) small_volume_slider_vertical_pane_g1

0xc127,	// (0x00056262) small_volume_slider_vertical_pane_g2

0xd83c,	// (0x00057977) small_volume_slider_vertical_pane_g3

0x0002,

0xfd01,	// (0x00059e3c) small_volume_slider_vertical_pane_g

0x49a1,	// (0x0004eadc) area_side_right_pane_ParamLimits

0x49a1,	// (0x0004eadc) area_side_right_pane

0x696d,	// (0x00050aa8) aid_size_side_button_ParamLimits

0x696d,	// (0x00050aa8) aid_size_side_button

0x6981,	// (0x00050abc) grid_sctrl_middle_pane_ParamLimits

0x6981,	// (0x00050abc) grid_sctrl_middle_pane

0x69a0,	// (0x00050adb) sctrl_sk_bottom_pane

0x69b1,	// (0x00050aec) sctrl_sk_top_pane

0x69c3,	// (0x00050afe) aid_touch_sctrl_top

0x69d0,	// (0x00050b0b) bg_sctrl_sk_pane_ParamLimits

0x69d0,	// (0x00050b0b) bg_sctrl_sk_pane

0x69de,	// (0x00050b19) sctrl_sk_top_pane_g1

0x69eb,	// (0x00050b26) sctrl_sk_top_pane_t1

0x69c3,	// (0x00050afe) aid_touch_sctrl_bottom

0x69d0,	// (0x00050b0b) bg_sctrl_sk_pane_cp_ParamLimits

0x69d0,	// (0x00050b0b) bg_sctrl_sk_pane_cp

0x6a06,	// (0x00050b41) sctrl_sk_bottom_pane_g1

0x69eb,	// (0x00050b26) sctrl_sk_bottom_pane_t1

0x6a0f,	// (0x00050b4a) cell_sctrl_middle_pane_ParamLimits

0x6a0f,	// (0x00050b4a) cell_sctrl_middle_pane

0x6a2a,	// (0x00050b65) aid_touch_sctrl_middle_ParamLimits

0x6a2a,	// (0x00050b65) aid_touch_sctrl_middle

0x6a3c,	// (0x00050b77) bg_sctrl_middle_pane_ParamLimits

0x6a3c,	// (0x00050b77) bg_sctrl_middle_pane

0x67a3,	// (0x000508de) cell_sctrl_middle_pane_g1_ParamLimits

0x67a3,	// (0x000508de) cell_sctrl_middle_pane_g1

0x6a4a,	// (0x00050b85) cell_sctrl_middle_pane_g2_ParamLimits

0x6a4a,	// (0x00050b85) cell_sctrl_middle_pane_g2

0x0001,

0xfd0d,	// (0x00059e48) cell_sctrl_middle_pane_g_ParamLimits

0xfd0d,	// (0x00059e48) cell_sctrl_middle_pane_g

0x9b35,	// (0x00053c70) bg_sctrl_middle_pane_g1

0x9b3d,	// (0x00053c78) bg_sctrl_middle_pane_g2

0x9b45,	// (0x00053c80) bg_sctrl_middle_pane_g3

0x9b4d,	// (0x00053c88) bg_sctrl_middle_pane_g4

0x9b55,	// (0x00053c90) bg_sctrl_middle_pane_g5

0x9b5d,	// (0x00053c98) bg_sctrl_middle_pane_g6

0x9b65,	// (0x00053ca0) bg_sctrl_middle_pane_g7

0x9b6d,	// (0x00053ca8) bg_sctrl_middle_pane_g8

0x0007,

0xfd12,	// (0x00059e4d) bg_sctrl_middle_pane_g

0x9b75,	// (0x00053cb0) bg_sctrl_middle_pane_g8_copy1

0x9b35,	// (0x00053c70) bg_sctrl_sk_pane_g1

0x9b45,	// (0x00053c80) bg_sctrl_sk_pane_g2

0x9b3d,	// (0x00053c78) bg_sctrl_sk_pane_g3

0x0008,

0xf871,	// (0x000599ac) bg_sctrl_sk_pane_g

0x8587,	// (0x000526c2) aid_size_touch_scroll_bar

0x9b55,	// (0x00053c90) bg_sctrl_sk_pane_g4

0x9b4d,	// (0x00053c88) bg_sctrl_sk_pane_g5

0x9b5d,	// (0x00053c98) bg_sctrl_sk_pane_g6

0x9b65,	// (0x00053ca0) bg_sctrl_sk_pane_g7

0x9b75,	// (0x00053cb0) bg_sctrl_sk_pane_g8

0x9b6d,	// (0x00053ca8) bg_sctrl_sk_pane_g9

0x5b69,	// (0x0004fca4) popup_fep_china_hwr2_fs_candidate_window

0x5b73,	// (0x0004fcae) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5b73,	// (0x0004fcae) popup_fep_china_hwr2_fs_control_window

0x67a3,	// (0x000508de) sctrl_sk_top_pane_g2

0x0001,

0xfd08,	// (0x00059e43) sctrl_sk_top_pane_g

0xd845,	// (0x00057980) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd845,	// (0x00057980) aid_fep_china_hwr2_fs_cell

0xd857,	// (0x00057992) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd857,	// (0x00057992) bg_popup_fep_shadow_pane_cp4

0xd86e,	// (0x000579a9) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd86e,	// (0x000579a9) bg_popup_fep_shadow_pane_cp5

0xd880,	// (0x000579bb) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd880,	// (0x000579bb) popup_fep_china_hwr2_fs_control_bar_grid

0xd890,	// (0x000579cb) popup_fep_china_hwr2_fs_control_funtion_grid

0xd898,	// (0x000579d3) aid_fep_china_hwr2_fs_candi_cell

0x7cf8,	// (0x00051e33) bg_popup_fep_shadow_pane_cp6

0xd8a2,	// (0x000579dd) popup_fep_china_hwr2_fs_candidate_grid

0xd8ac,	// (0x000579e7) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd8ac,	// (0x000579e7) cell_fep_china_hwr2_fs_funtion_grid

0xc127,	// (0x00056262) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd8c4,	// (0x000579ff) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd8c4,	// (0x000579ff) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8d2,	// (0x00057a0d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8d2,	// (0x00057a0d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd23,	// (0x00059e5e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd23,	// (0x00059e5e) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8e8,	// (0x00057a23) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8e8,	// (0x00057a23) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8fd,	// (0x00057a38) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8fd,	// (0x00057a38) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd28,	// (0x00059e63) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd28,	// (0x00059e63) cell_fep_china_hwr2_fs_funtion_grid_t

0xd919,	// (0x00057a54) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd921,	// (0x00057a5c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd929,	// (0x00057a64) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2d,	// (0x00059e68) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd931,	// (0x00057a6c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd931,	// (0x00057a6c) cell_fep_china_hwr2_fs_candidate_grid

0xd94a,	// (0x00057a85) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd952,	// (0x00057a8d) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc127,	// (0x00056262) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc127,	// (0x00056262) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x00059c7c) cell_fep_china_hwr2_fs_candidate_grid_g

0xd95a,	// (0x00057a95) cell_fep_china_hwr2_fs_candidate_grid_t1

0x971f,	// (0x0005385a) clock_nsta_pane_cp_24_ParamLimits

0x971f,	// (0x0005385a) clock_nsta_pane_cp_24

0x97a9,	// (0x000538e4) indicator_nsta_pane_cp_24_ParamLimits

0x97a9,	// (0x000538e4) indicator_nsta_pane_cp_24

0xa82e,	// (0x00054969) heading_pane_g1

0x0001,

0xf8d6,	// (0x00059a11) heading_pane_g

0xb20d,	// (0x00055348) grid_sct_catagory_button_pane

0xb27f,	// (0x000553ba) scroll_pane_cp5_ParamLimits

0xbd19,	// (0x00055e54) button_value_adjust_pane_cp5_ParamLimits

0xbd19,	// (0x00055e54) button_value_adjust_pane_cp5

0xbdf8,	// (0x00055f33) form2_midp_time_pane_ParamLimits

0xd968,	// (0x00057aa3) cell_sct_catagory_button_pane_ParamLimits

0xd968,	// (0x00057aa3) cell_sct_catagory_button_pane

0xc0ec,	// (0x00056227) bg_button_pane_cp01_ParamLimits

0xc0ec,	// (0x00056227) bg_button_pane_cp01

0xc127,	// (0x00056262) cell_sct_catagory_button_pane_g1

0x5f3d,	// (0x00050078) popup_tb_extension_window

0xd97a,	// (0x00057ab5) aid_size_cell_ext_ParamLimits

0xd97a,	// (0x00057ab5) aid_size_cell_ext

0x8075,	// (0x000521b0) bg_tb_trans_pane_cp1_ParamLimits

0x8075,	// (0x000521b0) bg_tb_trans_pane_cp1

0xd99a,	// (0x00057ad5) grid_tb_ext_pane_ParamLimits

0xd99a,	// (0x00057ad5) grid_tb_ext_pane

0xd9c8,	// (0x00057b03) cell_tb_ext_pane_ParamLimits

0xd9c8,	// (0x00057b03) cell_tb_ext_pane

0xd9df,	// (0x00057b1a) cell_tb_ext_pane_g1_ParamLimits

0xd9df,	// (0x00057b1a) cell_tb_ext_pane_g1

0xd9fc,	// (0x00057b37) cell_tb_ext_pane_t1

0x8075,	// (0x000521b0) list_highlight_pane_cp11_ParamLimits

0x8075,	// (0x000521b0) list_highlight_pane_cp11

0x4c08,	// (0x0004ed43) popup_uni_indicator_window_ParamLimits

0x4c08,	// (0x0004ed43) popup_uni_indicator_window

0x8664,	// (0x0005279f) bg_popup_sub_pane_cp14

0xda17,	// (0x00057b52) list_uniindi_pane

0xda23,	// (0x00057b5e) uniindi_top_pane

0x8075,	// (0x000521b0) bg_uniindi_top_pane

0xda42,	// (0x00057b7d) uniindi_top_pane_g1

0xda58,	// (0x00057b93) uniindi_top_pane_g2

0x0003,

0xfd34,	// (0x00059e6f) uniindi_top_pane_g

0xda82,	// (0x00057bbd) uniindi_top_pane_t1

0xdaac,	// (0x00057be7) list_single_uniindi_pane_ParamLimits

0xdaac,	// (0x00057be7) list_single_uniindi_pane

0xc127,	// (0x00056262) bg_uniindi_top_pane_g1

0xdabf,	// (0x00057bfa) list_single_uniindi_pane_g1

0xdad2,	// (0x00057c0d) list_single_uniindi_pane_t1

0x4a7e,	// (0x0004ebb9) control_bg_pane

0xdaf7,	// (0x00057c32) bg_sctrl_sk_pane_cp1

0xdb00,	// (0x00057c3b) bg_sctrl_sk_pane_cp2

0xdb09,	// (0x00057c44) control_bg_pane_g1

0xdb12,	// (0x00057c4d) control_bg_pane_g2

0x0001,

0xfd3d,	// (0x00059e78) control_bg_pane_g

0xbb62,	// (0x00055c9d) cell_indicator_nsta_pane_g1_ParamLimits

0xbb70,	// (0x00055cab) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x00059be0) cell_indicator_nsta_pane_g_ParamLimits

0x7966,	// (0x00051aa1) form2_midp_time_pane_t1_ParamLimits

0x5ac9,	// (0x0004fc04) main_idle_act4_pane_ParamLimits

0x5ac9,	// (0x0004fc04) main_idle_act4_pane

0x5f3d,	// (0x00050078) popup_tb_extension_window_ParamLimits

0xd9b8,	// (0x00057af3) tb_ext_find_pane_ParamLimits

0xd9b8,	// (0x00057af3) tb_ext_find_pane

0xdb1b,	// (0x00057c56) ai_gene_pane_1_cp1

0x9418,	// (0x00053553) ai_gene_pane_2_cp1

0xdb23,	// (0x00057c5e) list_single_idle_plugin_calendar_pane

0xdb2c,	// (0x00057c67) list_single_idle_plugin_notification_pane

0xdb35,	// (0x00057c70) list_single_idle_plugin_player_pane

0xdb3e,	// (0x00057c79) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb3e,	// (0x00057c79) list_single_idle_plugin_shortcut_pane

0xdb60,	// (0x00057c9b) main_idle_act4_pane_t1

0xdb72,	// (0x00057cad) main_idle_act4_pane_t2

0x0001,

0xfd42,	// (0x00059e7d) main_idle_act4_pane_t

0xdb84,	// (0x00057cbf) middle_sk_idle_act4_pane_ParamLimits

0xdb84,	// (0x00057cbf) middle_sk_idle_act4_pane

0xdb9a,	// (0x00057cd5) popup_clock_digital_analogue_window_cp2

0xdbb4,	// (0x00057cef) shortcut_wheel_idle_act4_pane_ParamLimits

0xdbb4,	// (0x00057cef) shortcut_wheel_idle_act4_pane

0xc127,	// (0x00056262) shortcut_wheel_idle_act4_pane_g1

0xc127,	// (0x00056262) shortcut_wheel_idle_act4_pane_g2

0xc127,	// (0x00056262) shortcut_wheel_idle_act4_pane_g3

0xc127,	// (0x00056262) shortcut_wheel_idle_act4_pane_g4

0xc127,	// (0x00056262) shortcut_wheel_idle_act4_pane_g5

0xdbc8,	// (0x00057d03) shortcut_wheel_idle_act4_pane_g6

0xdbd0,	// (0x00057d0b) shortcut_wheel_idle_act4_pane_g7

0xdbd8,	// (0x00057d13) shortcut_wheel_idle_act4_pane_g8

0xdbe0,	// (0x00057d1b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd47,	// (0x00059e82) shortcut_wheel_idle_act4_pane_g

0xc3a5,	// (0x000564e0) middle_sk_idle_act4_pane_g1_ParamLimits

0xc3a5,	// (0x000564e0) middle_sk_idle_act4_pane_g1

0xdc44,	// (0x00057d7f) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc44,	// (0x00057d7f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6a,	// (0x00059ea5) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6a,	// (0x00059ea5) middle_sk_idle_act4_pane_g

0xdc50,	// (0x00057d8b) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc50,	// (0x00057d8b) middle_sk_idle_act4_pane_t1

0xdc6d,	// (0x00057da8) grid_ai_shortcut_pane_ParamLimits

0xdc6d,	// (0x00057da8) grid_ai_shortcut_pane

0xdc86,	// (0x00057dc1) list_highlight_pane_cp16_ParamLimits

0xdc86,	// (0x00057dc1) list_highlight_pane_cp16

0xdc93,	// (0x00057dce) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc93,	// (0x00057dce) list_single_idle_plugin_shortcut_pane_g1

0xdc9f,	// (0x00057dda) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc9f,	// (0x00057dda) list_single_idle_plugin_shortcut_pane_g2

0xdcb7,	// (0x00057df2) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdcb7,	// (0x00057df2) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6f,	// (0x00059eaa) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6f,	// (0x00059eaa) list_single_idle_plugin_shortcut_pane_g

0xdcca,	// (0x00057e05) cell_ai_shortcut_pane_ParamLimits

0xdcca,	// (0x00057e05) cell_ai_shortcut_pane

0xdcee,	// (0x00057e29) cell_ai_shortcut_pane_g1_ParamLimits

0xdcee,	// (0x00057e29) cell_ai_shortcut_pane_g1

0xdb1b,	// (0x00057c56) ai_gene_pane_1_cp2

0xdd10,	// (0x00057e4b) ai_gene_pane_2_cp2

0xdd18,	// (0x00057e53) list_highlight_pane_cp15

0xdd21,	// (0x00057e5c) list_single_idle_plugin_calendar_pane_g1

0xdd18,	// (0x00057e53) list_highlight_pane_cp17

0xdd29,	// (0x00057e64) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd31,	// (0x00057e6c) list_single_idle_plugin_player_pane_g1

0xb4a8,	// (0x000555e3) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd76,	// (0x00059eb1) list_single_idle_plugin_player_pane_g

0xdd39,	// (0x00057e74) list_single_idle_plugin_player_pane_t1

0xdd47,	// (0x00057e82) list_single_idle_plugin_player_pane_t2

0xdd55,	// (0x00057e90) list_single_idle_plugin_player_pane_t3

0xdd63,	// (0x00057e9e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7b,	// (0x00059eb6) list_single_idle_plugin_player_pane_t

0xdd71,	// (0x00057eac) wait_bar_pane_cp15

0xdd79,	// (0x00057eb4) grid_ai_notification_pane

0xb4a8,	// (0x000555e3) list_single_idle_plugin_notification_pane_g1

0xdd82,	// (0x00057ebd) cell_ai_notification_pane_ParamLimits

0xdd82,	// (0x00057ebd) cell_ai_notification_pane

0xdd8f,	// (0x00057eca) cell_ai_notification_pane_g1

0xdd97,	// (0x00057ed2) cell_ai_notification_pane_t1

0xdda5,	// (0x00057ee0) tb_ext_find_button_pane

0xddad,	// (0x00057ee8) tb_ext_find_pane_g1

0xddb5,	// (0x00057ef0) tb_ext_find_pane_t1

0x8cd7,	// (0x00052e12) tb_ext_find_button_pane_g1

0xddc3,	// (0x00057efe) tb_ext_find_button_pane_g2

0x0001,

0xfd84,	// (0x00059ebf) tb_ext_find_button_pane_g

0xdb60,	// (0x00057c9b) main_idle_act4_pane_t1_ParamLimits

0xdb72,	// (0x00057cad) main_idle_act4_pane_t2_ParamLimits

0xfd42,	// (0x00059e7d) main_idle_act4_pane_t_ParamLimits

0xdb9a,	// (0x00057cd5) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdba8,	// (0x00057ce3) sat_plugin_idle_act4_pane_ParamLimits

0xdba8,	// (0x00057ce3) sat_plugin_idle_act4_pane

0xddcc,	// (0x00057f07) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddcc,	// (0x00057f07) sat_plugin_idle_act4_pane_t1

0xdddf,	// (0x00057f1a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdddf,	// (0x00057f1a) sat_plugin_idle_act4_pane_t2

0xddf2,	// (0x00057f2d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddf2,	// (0x00057f2d) sat_plugin_idle_act4_pane_t3

0xde05,	// (0x00057f40) sat_plugin_idle_act4_pane_t4_ParamLimits

0xde05,	// (0x00057f40) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd89,	// (0x00059ec4) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd89,	// (0x00059ec4) sat_plugin_idle_act4_pane_t

0x4b43,	// (0x0004ec7e) popup_battery_window_ParamLimits

0x4b43,	// (0x0004ec7e) popup_battery_window

0x8075,	// (0x000521b0) bg_popup_sub_pane_cp25_ParamLimits

0x8075,	// (0x000521b0) bg_popup_sub_pane_cp25

0xde18,	// (0x00057f53) popup_battery_window_g1_ParamLimits

0xde18,	// (0x00057f53) popup_battery_window_g1

0xde24,	// (0x00057f5f) popup_battery_window_t1_ParamLimits

0xde24,	// (0x00057f5f) popup_battery_window_t1

0xde36,	// (0x00057f71) popup_battery_window_t2_ParamLimits

0xde36,	// (0x00057f71) popup_battery_window_t2

0x0001,

0xfd92,	// (0x00059ecd) popup_battery_window_t_ParamLimits

0xfd92,	// (0x00059ecd) popup_battery_window_t

0x92e7,	// (0x00053422) midp_canvas_pane_ParamLimits

0x935c,	// (0x00053497) midp_keypad_pane_ParamLimits

0x935c,	// (0x00053497) midp_keypad_pane

0x961f,	// (0x0005375a) main_midp_pane_ParamLimits

0xbbdd,	// (0x00055d18) signal_pane_g2_cp_ParamLimits

0xde53,	// (0x00057f8e) aid_size_cell_midp_keypad_ParamLimits

0xde53,	// (0x00057f8e) aid_size_cell_midp_keypad

0xde6d,	// (0x00057fa8) midp_keyp_game_grid_pane_ParamLimits

0xde6d,	// (0x00057fa8) midp_keyp_game_grid_pane

0xde8d,	// (0x00057fc8) midp_keyp_rocker_pane_ParamLimits

0xde8d,	// (0x00057fc8) midp_keyp_rocker_pane

0xdec2,	// (0x00057ffd) midp_keyp_sk_left_pane_ParamLimits

0xdec2,	// (0x00057ffd) midp_keyp_sk_left_pane

0xdf3b,	// (0x00058076) midp_keyp_sk_right_pane_ParamLimits

0xdf3b,	// (0x00058076) midp_keyp_sk_right_pane

0x7cf8,	// (0x00051e33) bg_button_pane_cp03

0xdf93,	// (0x000580ce) midp_keyp_sk_left_pane_g1

0x7cf8,	// (0x00051e33) bg_button_pane_cp04

0xdf93,	// (0x000580ce) midp_keyp_sk_right_pane_g1

0xc127,	// (0x00056262) midp_keyp_rocker_pane_g1

0xdf9c,	// (0x000580d7) keyp_game_cell_pane_ParamLimits

0xdf9c,	// (0x000580d7) keyp_game_cell_pane

0x7cf8,	// (0x00051e33) bg_button_pane_cp02

0xdfaf,	// (0x000580ea) keyp_game_cell_pane_g1

0x4b87,	// (0x0004ecc2) popup_fep_vkb2_window_ParamLimits

0x4b87,	// (0x0004ecc2) popup_fep_vkb2_window

0x6a68,	// (0x00050ba3) aid_size_cell_vkb2_ParamLimits

0x6a68,	// (0x00050ba3) aid_size_cell_vkb2

0x6abc,	// (0x00050bf7) popup_fep_vkb2_window_g1_ParamLimits

0x6abc,	// (0x00050bf7) popup_fep_vkb2_window_g1

0x6b04,	// (0x00050c3f) vkb2_area_bottom_pane_ParamLimits

0x6b04,	// (0x00050c3f) vkb2_area_bottom_pane

0x6b50,	// (0x00050c8b) vkb2_area_keypad_pane_ParamLimits

0x6b50,	// (0x00050c8b) vkb2_area_keypad_pane

0x6b92,	// (0x00050ccd) vkb2_area_top_pane_ParamLimits

0x6b92,	// (0x00050ccd) vkb2_area_top_pane

0x6c0c,	// (0x00050d47) vkb2_top_entry_pane_ParamLimits

0x6c0c,	// (0x00050d47) vkb2_top_entry_pane

0x6c36,	// (0x00050d71) vkb2_top_grid_left_pane_ParamLimits

0x6c36,	// (0x00050d71) vkb2_top_grid_left_pane

0x6c54,	// (0x00050d8f) vkb2_top_grid_right_pane_ParamLimits

0x6c54,	// (0x00050d8f) vkb2_top_grid_right_pane

0x6c72,	// (0x00050dad) vkb2_cell_keypad_pane_ParamLimits

0x6c72,	// (0x00050dad) vkb2_cell_keypad_pane

0x6d43,	// (0x00050e7e) vkb2_area_bottom_grid_pane_ParamLimits

0x6d43,	// (0x00050e7e) vkb2_area_bottom_grid_pane

0x6d69,	// (0x00050ea4) vkb2_area_bottom_pane_g1_ParamLimits

0x6d69,	// (0x00050ea4) vkb2_area_bottom_pane_g1

0x6d8d,	// (0x00050ec8) vkb2_area_bottom_pane_g2_ParamLimits

0x6d8d,	// (0x00050ec8) vkb2_area_bottom_pane_g2

0x6dbb,	// (0x00050ef6) vkb2_area_bottom_pane_g3_ParamLimits

0x6dbb,	// (0x00050ef6) vkb2_area_bottom_pane_g3

0x0002,

0xfd97,	// (0x00059ed2) vkb2_area_bottom_pane_g_ParamLimits

0xfd97,	// (0x00059ed2) vkb2_area_bottom_pane_g

0x6e1c,	// (0x00050f57) vkb2_top_cell_left_pane_ParamLimits

0x6e1c,	// (0x00050f57) vkb2_top_cell_left_pane

0xdfc0,	// (0x000580fb) vkb2_top_entry_pane_g1_ParamLimits

0xdfc0,	// (0x000580fb) vkb2_top_entry_pane_g1

0xdfce,	// (0x00058109) vkb2_top_entry_pane_t1_ParamLimits

0xdfce,	// (0x00058109) vkb2_top_entry_pane_t1

0xe000,	// (0x0005813b) vkb2_top_entry_pane_t2_ParamLimits

0xe000,	// (0x0005813b) vkb2_top_entry_pane_t2

0xe032,	// (0x0005816d) vkb2_top_entry_pane_t3_ParamLimits

0xe032,	// (0x0005816d) vkb2_top_entry_pane_t3

0x0002,

0xfd9e,	// (0x00059ed9) vkb2_top_entry_pane_t_ParamLimits

0xfd9e,	// (0x00059ed9) vkb2_top_entry_pane_t

0x6e69,	// (0x00050fa4) vkb2_top_grid_right_pane_g1_ParamLimits

0x6e69,	// (0x00050fa4) vkb2_top_grid_right_pane_g1

0x6e7f,	// (0x00050fba) vkb2_top_grid_right_pane_g2_ParamLimits

0x6e7f,	// (0x00050fba) vkb2_top_grid_right_pane_g2

0x6e97,	// (0x00050fd2) vkb2_top_grid_right_pane_g3_ParamLimits

0x6e97,	// (0x00050fd2) vkb2_top_grid_right_pane_g3

0x6eaf,	// (0x00050fea) vkb2_top_grid_right_pane_g4_ParamLimits

0x6eaf,	// (0x00050fea) vkb2_top_grid_right_pane_g4

0x0003,

0xfda5,	// (0x00059ee0) vkb2_top_grid_right_pane_g_ParamLimits

0xfda5,	// (0x00059ee0) vkb2_top_grid_right_pane_g

0x6ec5,	// (0x00051000) vkb2_top_cell_left_pane_g1

0x6edc,	// (0x00051017) vkb2_cell_keypad_pane_g1_ParamLimits

0x6edc,	// (0x00051017) vkb2_cell_keypad_pane_g1

0xe056,	// (0x00058191) vkb2_cell_keypad_pane_t1_ParamLimits

0xe056,	// (0x00058191) vkb2_cell_keypad_pane_t1

0x6eea,	// (0x00051025) vkb2_cell_bottom_grid_pane_ParamLimits

0x6eea,	// (0x00051025) vkb2_cell_bottom_grid_pane

0x6f23,	// (0x0005105e) vkb2_cell_bottom_grid_pane_g1

0xdbe8,	// (0x00057d23) aid_call2_pane_cp02

0xdbf0,	// (0x00057d2b) aid_call_pane_cp02

0xdbf8,	// (0x00057d33) clock_digital_number_pane_cp10

0xdc00,	// (0x00057d3b) clock_digital_number_pane_cp11

0xdc08,	// (0x00057d43) clock_digital_number_pane_cp12

0xdc10,	// (0x00057d4b) clock_digital_number_pane_cp13

0xdc18,	// (0x00057d53) clock_digital_separator_pane_cp10

0x8cd7,	// (0x00052e12) popup_clock_digital_analogue_window_cp2_g1

0x8cd7,	// (0x00052e12) popup_clock_digital_analogue_window_cp2_g2

0xdc20,	// (0x00057d5b) popup_clock_digital_analogue_window_cp2_g3

0x8cd7,	// (0x00052e12) popup_clock_digital_analogue_window_cp2_g4

0xdc20,	// (0x00057d5b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5a,	// (0x00059e95) popup_clock_digital_analogue_window_cp2_g

0xdc28,	// (0x00057d63) popup_clock_digital_analogue_window_cp2_t1

0xdc36,	// (0x00057d71) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd65,	// (0x00059ea0) popup_clock_digital_analogue_window_cp2_t

0xc127,	// (0x00056262) clock_digital_number_pane_cp10_g1

0xc127,	// (0x00056262) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x00059c7c) clock_digital_number_pane_cp10_g

0xc127,	// (0x00056262) clock_digital_separator_pane_cp10_g1

0xc127,	// (0x00056262) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x00059c7c) clock_digital_separator_pane_cp10_g

0xda64,	// (0x00057b9f) uniindi_top_pane_g3

0xda75,	// (0x00057bb0) uniindi_top_pane_g4

0x6cfd,	// (0x00050e38) vkb2_row_keypad_pane_ParamLimits

0x6cfd,	// (0x00050e38) vkb2_row_keypad_pane

0x6f3f,	// (0x0005107a) vkb2_cell_t_keypad_pane_ParamLimits

0x6f3f,	// (0x0005107a) vkb2_cell_t_keypad_pane

0x6f4f,	// (0x0005108a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6f4f,	// (0x0005108a) vkb2_cell_t_keypad_pane_cp08

0x6f62,	// (0x0005109d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6f62,	// (0x0005109d) vkb2_cell_t_keypad_pane_cp09

0x6f76,	// (0x000510b1) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6f76,	// (0x000510b1) vkb2_cell_t_keypad_pane_cp01

0x6f87,	// (0x000510c2) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6f87,	// (0x000510c2) vkb2_cell_t_keypad_pane_cp02

0x6f98,	// (0x000510d3) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6f98,	// (0x000510d3) vkb2_cell_t_keypad_pane_cp03

0x6fa9,	// (0x000510e4) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6fa9,	// (0x000510e4) vkb2_cell_t_keypad_pane_cp04

0x6fba,	// (0x000510f5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6fba,	// (0x000510f5) vkb2_cell_t_keypad_pane_cp05

0x6fcb,	// (0x00051106) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6fcb,	// (0x00051106) vkb2_cell_t_keypad_pane_cp06

0x6fdc,	// (0x00051117) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6fdc,	// (0x00051117) vkb2_cell_t_keypad_pane_cp07

0x6fed,	// (0x00051128) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6fed,	// (0x00051128) vkb2_cell_t_keypad_pane_cp10

0x67a3,	// (0x000508de) vkb2_cell_t_keypad_pane_g1

0xe06d,	// (0x000581a8) vkb2_cell_t_keypad_pane_t1

0x4a7e,	// (0x0004ebb9) popup_grid_graphic2_window

0xe07f,	// (0x000581ba) aid_size_cell_graphic2_ParamLimits

0xe07f,	// (0x000581ba) aid_size_cell_graphic2

0xe0b7,	// (0x000581f2) bg_popup_window_pane_cp21_ParamLimits

0xe0b7,	// (0x000581f2) bg_popup_window_pane_cp21

0xe0c5,	// (0x00058200) graphic2_pages_pane_ParamLimits

0xe0c5,	// (0x00058200) graphic2_pages_pane

0xe10b,	// (0x00058246) grid_graphic2_control_pane_ParamLimits

0xe10b,	// (0x00058246) grid_graphic2_control_pane

0xe149,	// (0x00058284) grid_graphic2_pane_ParamLimits

0xe149,	// (0x00058284) grid_graphic2_pane

0xe1bd,	// (0x000582f8) cell_graphic2_pane

0x4a7e,	// (0x0004ebb9) main_comp_mode_pane

0xd2e4,	// (0x0005741f) list_ai3_gene_pane_ParamLimits

0xd6ae,	// (0x000577e9) bg_popup_window_pane_cp19_ParamLimits

0xd6ba,	// (0x000577f5) bg_touch_area_indi_pane_ParamLimits

0xd6ba,	// (0x000577f5) bg_touch_area_indi_pane

0xd6d0,	// (0x0005780b) bg_touch_area_indi_pane_cp01_ParamLimits

0xd6d0,	// (0x0005780b) bg_touch_area_indi_pane_cp01

0xd6e6,	// (0x00057821) bg_touch_area_indi_pane_cp02_ParamLimits

0xd6e6,	// (0x00057821) bg_touch_area_indi_pane_cp02

0xd6fe,	// (0x00057839) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6fe,	// (0x00057839) bg_touch_area_indi_pane_cp03

0xd718,	// (0x00057853) popup_slider_window_g1_ParamLimits

0xd734,	// (0x0005786f) popup_slider_window_g2_ParamLimits

0xd750,	// (0x0005788b) popup_slider_window_g3_ParamLimits

0xfcef,	// (0x00059e2a) popup_slider_window_g_ParamLimits

0xd7ac,	// (0x000578e7) popup_slider_window_t1_ParamLimits

0xd820,	// (0x0005795b) small_volume_slider_vertical_pane_ParamLimits

0xe1bd,	// (0x000582f8) cell_graphic2_pane_ParamLimits

0xe20b,	// (0x00058346) bg_button_pane_cp10_ParamLimits

0xe20b,	// (0x00058346) bg_button_pane_cp10

0xe21e,	// (0x00058359) bg_button_pane_cp11_ParamLimits

0xe21e,	// (0x00058359) bg_button_pane_cp11

0xe231,	// (0x0005836c) graphic2_pages_pane_g1_ParamLimits

0xe231,	// (0x0005836c) graphic2_pages_pane_g1

0xe24c,	// (0x00058387) graphic2_pages_pane_g2_ParamLimits

0xe24c,	// (0x00058387) graphic2_pages_pane_g2

0x0001,

0xfdb3,	// (0x00059eee) graphic2_pages_pane_g_ParamLimits

0xfdb3,	// (0x00059eee) graphic2_pages_pane_g

0xe264,	// (0x0005839f) graphic2_pages_pane_t1_ParamLimits

0xe264,	// (0x0005839f) graphic2_pages_pane_t1

0xe27c,	// (0x000583b7) cell_graphic2_control_pane_ParamLimits

0xe27c,	// (0x000583b7) cell_graphic2_control_pane

0xe29d,	// (0x000583d8) cell_graphic2_pane_g1_ParamLimits

0xe29d,	// (0x000583d8) cell_graphic2_pane_g1

0xe2aa,	// (0x000583e5) cell_graphic2_pane_g2_ParamLimits

0xe2aa,	// (0x000583e5) cell_graphic2_pane_g2

0xe2b7,	// (0x000583f2) cell_graphic2_pane_g3_ParamLimits

0xe2b7,	// (0x000583f2) cell_graphic2_pane_g3

0xe2c4,	// (0x000583ff) cell_graphic2_pane_g4_ParamLimits

0xe2c4,	// (0x000583ff) cell_graphic2_pane_g4

0xe2d1,	// (0x0005840c) cell_graphic2_pane_g5_ParamLimits

0xe2d1,	// (0x0005840c) cell_graphic2_pane_g5

0x0004,

0xfdb8,	// (0x00059ef3) cell_graphic2_pane_g_ParamLimits

0xfdb8,	// (0x00059ef3) cell_graphic2_pane_g

0xe2ec,	// (0x00058427) cell_graphic2_pane_t1_ParamLimits

0xe2ec,	// (0x00058427) cell_graphic2_pane_t1

0x9ba9,	// (0x00053ce4) grid_highlight_pane_cp11_ParamLimits

0x9ba9,	// (0x00053ce4) grid_highlight_pane_cp11

0x8075,	// (0x000521b0) bg_button_pane_cp05

0xe315,	// (0x00058450) cell_graphic2_control_pane_g1

0xc127,	// (0x00056262) bg_touch_area_indi_pane_g1

0xe33d,	// (0x00058478) aid_cmod_rocker_key_size

0xe347,	// (0x00058482) aid_cmode_itu_key_size

0xe351,	// (0x0005848c) main_cmode_video_pane

0xe35b,	// (0x00058496) main_comp_mode_itu_pane

0xe367,	// (0x000584a2) main_comp_mode_rocker_pane

0xe373,	// (0x000584ae) cell_cmode_rocker_pane_ParamLimits

0xe373,	// (0x000584ae) cell_cmode_rocker_pane

0xe385,	// (0x000584c0) cell_cmode_itu_pane_ParamLimits

0xe385,	// (0x000584c0) cell_cmode_itu_pane

0x8664,	// (0x0005279f) bg_button_pane_cp06_ParamLimits

0x8664,	// (0x0005279f) bg_button_pane_cp06

0xc3a5,	// (0x000564e0) cell_cmode_rocker_pane_g1_ParamLimits

0xc3a5,	// (0x000564e0) cell_cmode_rocker_pane_g1

0xd8c4,	// (0x000579ff) cell_cmode_rocker_pane_g2_ParamLimits

0xd8c4,	// (0x000579ff) cell_cmode_rocker_pane_g2

0x0001,

0xfdc8,	// (0x00059f03) cell_cmode_rocker_pane_g_ParamLimits

0xfdc8,	// (0x00059f03) cell_cmode_rocker_pane_g

0x7cf8,	// (0x00051e33) bg_button_pane_cp07

0xe39a,	// (0x000584d5) cell_cmode_itu_pane_g1

0xe3a3,	// (0x000584de) cell_cmode_itu_pane_t1

0xe3b1,	// (0x000584ec) cell_cmode_itu_pane_t2

0x0001,

0xfdcd,	// (0x00059f08) cell_cmode_itu_pane_t

0xdae7,	// (0x00057c22) aid_touch_ctrl_left

0xdaef,	// (0x00057c2a) aid_touch_ctrl_right

0x7cf8,	// (0x00051e33) compa_mode_pane

0xe3bf,	// (0x000584fa) aid_cmod_rocker_key_size_cp

0xe3c9,	// (0x00058504) aid_cmode_itu_key_size_cp

0xe3d3,	// (0x0005850e) compa_mode_pane_g1

0xe3db,	// (0x00058516) compa_mode_pane_g2

0xe3e3,	// (0x0005851e) compa_mode_pane_g3

0x0002,

0xfdd2,	// (0x00059f0d) compa_mode_pane_g

0xe3eb,	// (0x00058526) main_comp_mode_itu_pane_cp

0xe3f3,	// (0x0005852e) main_comp_mode_rocker_pane_cp

0xe3fb,	// (0x00058536) cell_cmode_itu_pane_cp_ParamLimits

0xe3fb,	// (0x00058536) cell_cmode_itu_pane_cp

0xe410,	// (0x0005854b) cell_cmode_rocker_pane_cp_ParamLimits

0xe410,	// (0x0005854b) cell_cmode_rocker_pane_cp

0x8664,	// (0x0005279f) bg_button_pane_cp06_cp_ParamLimits

0x8664,	// (0x0005279f) bg_button_pane_cp06_cp

0xc3a5,	// (0x000564e0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc3a5,	// (0x000564e0) cell_cmode_rocker_pane_g1_cp

0xc127,	// (0x00056262) cell_cmode_rocker_pane_g2_cp

0x7cf8,	// (0x00051e33) bg_button_pane_cp07_cp

0xb06a,	// (0x000551a5) cell_cmode_itu_pane_g1_cp

0xe422,	// (0x0005855d) cell_cmode_itu_pane_t1_cp

0xe422,	// (0x0005855d) cell_cmode_itu_pane_t2_cp

0xb057,	// (0x00055192) settings_code_pane_cp2

0x7dec,	// (0x00051f27) bg_popup_window_pane_cp3_ParamLimits

0x824f,	// (0x0005238a) heading_pane_cp3_ParamLimits

0x825b,	// (0x00052396) listscroll_popup_graphic_pane_ParamLimits

0x654c,	// (0x00050687) fep_hwr_aid_pane_ParamLimits

0x69c3,	// (0x00050afe) aid_touch_sctrl_top_ParamLimits

0x69de,	// (0x00050b19) sctrl_sk_top_pane_g1_ParamLimits

0x67a3,	// (0x000508de) sctrl_sk_top_pane_g2_ParamLimits

0xfd08,	// (0x00059e43) sctrl_sk_top_pane_g_ParamLimits

0x69eb,	// (0x00050b26) sctrl_sk_top_pane_t1_ParamLimits

0x69c3,	// (0x00050afe) aid_touch_sctrl_bottom_ParamLimits

0x69eb,	// (0x00050b26) sctrl_sk_bottom_pane_t1_ParamLimits

0xda30,	// (0x00057b6b) aid_area_touch_clock

0x6bd4,	// (0x00050d0f) aid_vkb2_area_top_pane_cell_ParamLimits

0x6bd4,	// (0x00050d0f) aid_vkb2_area_top_pane_cell

0x6d1f,	// (0x00050e5a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6d1f,	// (0x00050e5a) aid_vkb2_area_bottom_pane_cell

0xdfb8,	// (0x000580f3) popup_char_count_window

0xe430,	// (0x0005856b) popup_char_count_window_g1

0xe439,	// (0x00058574) popup_char_count_window_g2

0xe442,	// (0x0005857d) popup_char_count_window_g3

0x0002,

0xfdd9,	// (0x00059f14) popup_char_count_window_g

0xe44b,	// (0x00058586) popup_char_count_window_t1

0x6a9a,	// (0x00050bd5) popup_fep_char_preview_window_ParamLimits

0x6a9a,	// (0x00050bd5) popup_fep_char_preview_window

0x6bf2,	// (0x00050d2d) vkb2_top_candi_pane_ParamLimits

0x6bf2,	// (0x00050d2d) vkb2_top_candi_pane

0xe459,	// (0x00058594) cell_vkb2_top_candi_pane_ParamLimits

0xe459,	// (0x00058594) cell_vkb2_top_candi_pane

0x7002,	// (0x0005113d) bg_popup_fep_char_preview_window_ParamLimits

0x7002,	// (0x0005113d) bg_popup_fep_char_preview_window

0x7010,	// (0x0005114b) popup_fep_char_preview_window_t1_ParamLimits

0x7010,	// (0x0005114b) popup_fep_char_preview_window_t1

0xe4a6,	// (0x000585e1) bg_popup_fep_char_preview_window_g1

0xe4ae,	// (0x000585e9) bg_popup_fep_char_preview_window_g2

0xe4b6,	// (0x000585f1) bg_popup_fep_char_preview_window_g3

0xe4be,	// (0x000585f9) bg_popup_fep_char_preview_window_g4

0xe4c6,	// (0x00058601) bg_popup_fep_char_preview_window_g5

0x704a,	// (0x00051185) bg_popup_fep_char_preview_window_g6

0xe4ce,	// (0x00058609) bg_popup_fep_char_preview_window_g7

0xe4d6,	// (0x00058611) bg_popup_fep_char_preview_window_g8

0xe4de,	// (0x00058619) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde0,	// (0x00059f1b) bg_popup_fep_char_preview_window_g

0x67a3,	// (0x000508de) cell_vkb2_top_candi_pane_g1_ParamLimits

0x67a3,	// (0x000508de) cell_vkb2_top_candi_pane_g1

0x67b1,	// (0x000508ec) cell_vkb2_top_candi_pane_g2_ParamLimits

0x67b1,	// (0x000508ec) cell_vkb2_top_candi_pane_g2

0xdf1a,	// (0x00058055) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdf1a,	// (0x00058055) cell_vkb2_top_candi_pane_g3

0x7052,	// (0x0005118d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7052,	// (0x0005118d) cell_vkb2_top_candi_pane_g4

0xc87c,	// (0x000569b7) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc87c,	// (0x000569b7) cell_vkb2_top_candi_pane_g5

0x7073,	// (0x000511ae) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7073,	// (0x000511ae) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf3,	// (0x00059f2e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf3,	// (0x00059f2e) cell_vkb2_top_candi_pane_g

0x7081,	// (0x000511bc) cell_vkb2_top_candi_pane_t1

0x63ac,	// (0x000504e7) aid_size_touch_slider_mark_ParamLimits

0x63ac,	// (0x000504e7) aid_size_touch_slider_mark

0xe0fb,	// (0x00058236) grid_graphic2_catg_pane_ParamLimits

0xe0fb,	// (0x00058236) grid_graphic2_catg_pane

0xe199,	// (0x000582d4) popup_grid_graphic2_window_t1_ParamLimits

0xe199,	// (0x000582d4) popup_grid_graphic2_window_t1

0xe1ab,	// (0x000582e6) popup_grid_graphic2_window_t2_ParamLimits

0xe1ab,	// (0x000582e6) popup_grid_graphic2_window_t2

0x0001,

0xfdae,	// (0x00059ee9) popup_grid_graphic2_window_t_ParamLimits

0xfdae,	// (0x00059ee9) popup_grid_graphic2_window_t

0x8075,	// (0x000521b0) bg_button_pane_cp05_ParamLimits

0xe315,	// (0x00058450) cell_graphic2_control_pane_g1_ParamLimits

0xe4e6,	// (0x00058621) cell_graphic2_catg_pane_ParamLimits

0xe4e6,	// (0x00058621) cell_graphic2_catg_pane

0x7cf8,	// (0x00051e33) bg_button_pane_cp12

0xe4f8,	// (0x00058633) cell_graphic2_catg_pane_g1

0xd9fc,	// (0x00057b37) cell_tb_ext_pane_t1_ParamLimits

0x6e3c,	// (0x00050f77) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6e3c,	// (0x00050f77) vkb2_top_cell_right_narrow_pane

0x6e54,	// (0x00050f8f) vkb2_top_cell_right_wide_pane_ParamLimits

0x6e54,	// (0x00050f8f) vkb2_top_cell_right_wide_pane

0x653e,	// (0x00050679) bg_vkb2_func_pane_ParamLimits

0x653e,	// (0x00050679) bg_vkb2_func_pane

0x6ec5,	// (0x00051000) vkb2_top_cell_left_pane_g1_ParamLimits

0x653e,	// (0x00050679) bg_vkb2_fuc_pane_cp03_ParamLimits

0x653e,	// (0x00050679) bg_vkb2_fuc_pane_cp03

0x6f23,	// (0x0005105e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9b3d,	// (0x00053c78) bg_vkb2_func_pane_g1

0x9b45,	// (0x00053c80) bg_vkb2_func_pane_g2

0x9b55,	// (0x00053c90) bg_vkb2_func_pane_g3

0x9b4d,	// (0x00053c88) bg_vkb2_func_pane_g4

0x9b5d,	// (0x00053c98) bg_vkb2_func_pane_g5

0x9b65,	// (0x00053ca0) bg_vkb2_func_pane_g6

0x9b6d,	// (0x00053ca8) bg_vkb2_func_pane_g7

0x9b75,	// (0x00053cb0) bg_vkb2_func_pane_g8

0x9b35,	// (0x00053c70) bg_vkb2_func_pane_g9

0x0008,

0xfe00,	// (0x00059f3b) bg_vkb2_func_pane_g

0x653e,	// (0x00050679) bg_vkb2_fuc_pane_cp01_ParamLimits

0x653e,	// (0x00050679) bg_vkb2_fuc_pane_cp01

0x6ec5,	// (0x00051000) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6ec5,	// (0x00051000) vkb2_top_cell_right_wide_pane_g1

0x653e,	// (0x00050679) bg_vkb2_fuc_pane_cp02_ParamLimits

0x653e,	// (0x00050679) bg_vkb2_fuc_pane_cp02

0x6f23,	// (0x0005105e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6f23,	// (0x0005105e) vkb2_top_cell_right_narrow_pane_g1

0xd632,	// (0x0005776d) aid_touch_area_decrease_ParamLimits

0xd632,	// (0x0005776d) aid_touch_area_decrease

0xd650,	// (0x0005778b) aid_touch_area_increase_ParamLimits

0xd650,	// (0x0005778b) aid_touch_area_increase

0xd65c,	// (0x00057797) aid_touch_area_mute_ParamLimits

0xd65c,	// (0x00057797) aid_touch_area_mute

0xd680,	// (0x000577bb) aid_touch_area_slider_ParamLimits

0xd680,	// (0x000577bb) aid_touch_area_slider

0xd76c,	// (0x000578a7) popup_slider_window_g4_ParamLimits

0xd76c,	// (0x000578a7) popup_slider_window_g4

0xd778,	// (0x000578b3) popup_slider_window_g5_ParamLimits

0xd778,	// (0x000578b3) popup_slider_window_g5

0xd79a,	// (0x000578d5) popup_slider_window_g6_ParamLimits

0xd79a,	// (0x000578d5) popup_slider_window_g6

0xd7da,	// (0x00057915) popup_slider_window_t2_ParamLimits

0xd7da,	// (0x00057915) popup_slider_window_t2

0x0001,

0xfcfc,	// (0x00059e37) popup_slider_window_t_ParamLimits

0xfcfc,	// (0x00059e37) popup_slider_window_t

0xd7f2,	// (0x0005792d) slider_pane_ParamLimits

0xd7f2,	// (0x0005792d) slider_pane

0xe501,	// (0x0005863c) slider_pane_g1_ParamLimits

0xe501,	// (0x0005863c) slider_pane_g1

0xe515,	// (0x00058650) slider_pane_g2_ParamLimits

0xe515,	// (0x00058650) slider_pane_g2

0xe52b,	// (0x00058666) slider_pane_g3_ParamLimits

0xe52b,	// (0x00058666) slider_pane_g3

0x0003,

0xfe13,	// (0x00059f4e) slider_pane_g_ParamLimits

0xfe13,	// (0x00059f4e) slider_pane_g

0x5f99,	// (0x000500d4) popup_tb_float_extension_window_ParamLimits

0x5f99,	// (0x000500d4) popup_tb_float_extension_window

0xe557,	// (0x00058692) aid_size_cell_tb_float_ext

0x7cf8,	// (0x00051e33) bg_popup_sub_window_cp28

0xe563,	// (0x0005869e) grid_tb_float_ext_pane

0xe56d,	// (0x000586a8) cell_tb_float_ext_pane_ParamLimits

0xe56d,	// (0x000586a8) cell_tb_float_ext_pane

0xe587,	// (0x000586c2) cell_tb_float_ext_pane_g1

0xe590,	// (0x000586cb) grid_highlight_pane_cp12

0x668d,	// (0x000507c8) cell_last_hwr_side_pane_ParamLimits

0x668d,	// (0x000507c8) cell_last_hwr_side_pane

0xc127,	// (0x00056262) cell_last_hwr_side_pane_g1

0xe599,	// (0x000586d4) cell_last_hwr_side_pane_g2

0x0001,

0xfe1c,	// (0x00059f57) cell_last_hwr_side_pane_g

0x6deb,	// (0x00050f26) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6deb,	// (0x00050f26) vkb2_area_bottom_space_btn_pane

0x67a3,	// (0x000508de) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe06d,	// (0x000581a8) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7081,	// (0x000511bc) cell_vkb2_top_candi_pane_t1_ParamLimits

0x70a0,	// (0x000511db) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x70a0,	// (0x000511db) vkb2_area_bottom_space_btn_pane_g1

0x70da,	// (0x00051215) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x70da,	// (0x00051215) vkb2_area_bottom_space_btn_pane_g2

0x7110,	// (0x0005124b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7110,	// (0x0005124b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe21,	// (0x00059f5c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe21,	// (0x00059f5c) vkb2_area_bottom_space_btn_pane_g

0x6601,	// (0x0005073c) cel_fep_hwr_func_pane_ParamLimits

0x6601,	// (0x0005073c) cel_fep_hwr_func_pane

0x663d,	// (0x00050778) cell_hwr_side_button_pane_ParamLimits

0x663d,	// (0x00050778) cell_hwr_side_button_pane

0xda30,	// (0x00057b6b) aid_area_touch_clock_ParamLimits

0x8075,	// (0x000521b0) bg_uniindi_top_pane_ParamLimits

0xda42,	// (0x00057b7d) uniindi_top_pane_g1_ParamLimits

0xda58,	// (0x00057b93) uniindi_top_pane_g2_ParamLimits

0xda64,	// (0x00057b9f) uniindi_top_pane_g3_ParamLimits

0xda75,	// (0x00057bb0) uniindi_top_pane_g4_ParamLimits

0xfd34,	// (0x00059e6f) uniindi_top_pane_g_ParamLimits

0xda82,	// (0x00057bbd) uniindi_top_pane_t1_ParamLimits

0x8075,	// (0x000521b0) bg_vkb2_func_pane_cp01_ParamLimits

0x8075,	// (0x000521b0) bg_vkb2_func_pane_cp01

0xe5a2,	// (0x000586dd) cel_fep_hwr_func_pane_g1_ParamLimits

0xe5a2,	// (0x000586dd) cel_fep_hwr_func_pane_g1

0x8075,	// (0x000521b0) bg_vkb2_func_pane_cp02_ParamLimits

0x8075,	// (0x000521b0) bg_vkb2_func_pane_cp02

0xe5a2,	// (0x000586dd) cell_hwr_side_button_pane_g1_ParamLimits

0xe5a2,	// (0x000586dd) cell_hwr_side_button_pane_g1

0x99b6,	// (0x00053af1) status_pane_g4_ParamLimits

0x99b6,	// (0x00053af1) status_pane_g4

0x99d0,	// (0x00053b0b) status_pane_t1

0xbe61,	// (0x00055f9c) form2_midp_gauge_slider_cont_pane

0xbe69,	// (0x00055fa4) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe7b,	// (0x00055fb6) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe8d,	// (0x00055fc8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x00059c2f) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe9f,	// (0x00055fda) form2_midp_slider_pane_ParamLimits

0x6a5a,	// (0x00050b95) aid_size_cell_func_vkb2_ParamLimits

0x6a5a,	// (0x00050b95) aid_size_cell_func_vkb2

0xe543,	// (0x0005867e) slider_pane_g4_ParamLimits

0xe543,	// (0x0005867e) slider_pane_g4

0x715a,	// (0x00051295) form2_midp_gauge_slider_pane_t2_cp01

0x7168,	// (0x000512a3) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7168,	// (0x000512a3) form2_midp_gauge_slider_pane_t3_cp01

0x7185,	// (0x000512c0) form2_midp_slider_pane_cp01

0x7cf8,	// (0x00051e33) navi_smil_pane

0xe5db,	// (0x00058716) navi_smil_pane_g1

0xe5e3,	// (0x0005871e) navi_smil_pane_t1

0xe5b0,	// (0x000586eb) form2_midp_slider_pane_g1

0xe5b9,	// (0x000586f4) form2_midp_slider_pane_g2

0xe5c1,	// (0x000586fc) form2_midp_slider_pane_g3

0xe5b0,	// (0x000586eb) form2_midp_slider_pane_g4

0xe5c9,	// (0x00058704) form2_midp_slider_pane_g5

0x0004,

0xfe2a,	// (0x00059f65) form2_midp_slider_pane_g

0x714a,	// (0x00051285) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x714a,	// (0x00051285) vkb2_area_bottom_space_btn_pane_g4

0x97e5,	// (0x00053920) lc0_navi_pane_ParamLimits

0x97e5,	// (0x00053920) lc0_navi_pane

0x985b,	// (0x00053996) lc0_stat_indi_pane_ParamLimits

0x985b,	// (0x00053996) lc0_stat_indi_pane

0x9872,	// (0x000539ad) ls0_title_pane_ParamLimits

0x9872,	// (0x000539ad) ls0_title_pane

0x8664,	// (0x0005279f) bg_popup_sub_pane_cp14_ParamLimits

0xda17,	// (0x00057b52) list_uniindi_pane_ParamLimits

0xda23,	// (0x00057b5e) uniindi_top_pane_ParamLimits

0xdabf,	// (0x00057bfa) list_single_uniindi_pane_g1_ParamLimits

0xdad2,	// (0x00057c0d) list_single_uniindi_pane_t1_ParamLimits

0x718e,	// (0x000512c9) lc0_stat_clock_pane_ParamLimits

0x718e,	// (0x000512c9) lc0_stat_clock_pane

0xe5f1,	// (0x0005872c) lc0_stat_indi_pane_g1_ParamLimits

0xe5f1,	// (0x0005872c) lc0_stat_indi_pane_g1

0xe5fe,	// (0x00058739) lc0_stat_indi_pane_g2_ParamLimits

0xe5fe,	// (0x00058739) lc0_stat_indi_pane_g2

0x0001,

0xfe35,	// (0x00059f70) lc0_stat_indi_pane_g_ParamLimits

0xfe35,	// (0x00059f70) lc0_stat_indi_pane_g

0x719b,	// (0x000512d6) lc0_uni_indicator_pane_ParamLimits

0x719b,	// (0x000512d6) lc0_uni_indicator_pane

0xe60b,	// (0x00058746) ls0_title_pane_g1_ParamLimits

0xe60b,	// (0x00058746) ls0_title_pane_g1

0xe61f,	// (0x0005875a) ls0_title_pane_t1_ParamLimits

0xe61f,	// (0x0005875a) ls0_title_pane_t1

0x71a8,	// (0x000512e3) lc0_uni_indicator_pane_g1_ParamLimits

0x71a8,	// (0x000512e3) lc0_uni_indicator_pane_g1

0xe655,	// (0x00058790) lc0_stat_clock_pane_t1

0x4a7e,	// (0x0004ebb9) main_ai5_pane

0xe663,	// (0x0005879e) ai5_sk_pane_ParamLimits

0xe663,	// (0x0005879e) ai5_sk_pane

0xe670,	// (0x000587ab) cell_ai5_widget_pane_ParamLimits

0xe670,	// (0x000587ab) cell_ai5_widget_pane

0xe726,	// (0x00058861) aid_size_cell_widget_grid

0xe73c,	// (0x00058877) bg_ai5_widget_pane_ParamLimits

0xe73c,	// (0x00058877) bg_ai5_widget_pane

0xe7b0,	// (0x000588eb) cell_ai5_widget_pane_g2

0xe7c0,	// (0x000588fb) cell_ai5_widget_pane_g3

0xe7d7,	// (0x00058912) cell_ai5_widget_pane_g4

0xe7e3,	// (0x0005891e) cell_ai5_widget_pane_g5

0xe7ef,	// (0x0005892a) cell_ai5_widget_pane_g6

0xe7fb,	// (0x00058936) cell_ai5_widget_pane_g7

0xe843,	// (0x0005897e) cell_ai5_widget_pane_t1_ParamLimits

0xe843,	// (0x0005897e) cell_ai5_widget_pane_t1

0xe860,	// (0x0005899b) cell_ai5_widget_pane_t2_ParamLimits

0xe860,	// (0x0005899b) cell_ai5_widget_pane_t2

0xe878,	// (0x000589b3) cell_ai5_widget_pane_t3_ParamLimits

0xe878,	// (0x000589b3) cell_ai5_widget_pane_t3

0xe890,	// (0x000589cb) cell_ai5_widget_pane_t4_ParamLimits

0xe890,	// (0x000589cb) cell_ai5_widget_pane_t4

0xe8ad,	// (0x000589e8) cell_ai5_widget_pane_t5_ParamLimits

0xe8ad,	// (0x000589e8) cell_ai5_widget_pane_t5

0xe8cc,	// (0x00058a07) cell_ai5_widget_pane_t6_ParamLimits

0xe8cc,	// (0x00058a07) cell_ai5_widget_pane_t6

0xe8de,	// (0x00058a19) cell_ai5_widget_pane_t7_ParamLimits

0xe8de,	// (0x00058a19) cell_ai5_widget_pane_t7

0xe8f7,	// (0x00058a32) cell_ai5_widget_pane_t8_ParamLimits

0xe8f7,	// (0x00058a32) cell_ai5_widget_pane_t8

0x0009,

0xfe4f,	// (0x00059f8a) cell_ai5_widget_pane_t_ParamLimits

0xfe4f,	// (0x00059f8a) cell_ai5_widget_pane_t

0xe94b,	// (0x00058a86) grid_ai5_widget_pane

0x8664,	// (0x0005279f) highlight_cell_ai5_widget_pane_ParamLimits

0x8664,	// (0x0005279f) highlight_cell_ai5_widget_pane

0xe963,	// (0x00058a9e) ai5_sk_left_pane

0xe96d,	// (0x00058aa8) ai5_sk_middle_pane

0xe977,	// (0x00058ab2) ai5_sk_right_pane

0xe981,	// (0x00058abc) bg_ai5_widget_pane_g1_ParamLimits

0xe981,	// (0x00058abc) bg_ai5_widget_pane_g1

0xe98d,	// (0x00058ac8) bg_ai5_widget_pane_g2_ParamLimits

0xe98d,	// (0x00058ac8) bg_ai5_widget_pane_g2

0xe999,	// (0x00058ad4) bg_ai5_widget_pane_g3_ParamLimits

0xe999,	// (0x00058ad4) bg_ai5_widget_pane_g3

0xe9a5,	// (0x00058ae0) bg_ai5_widget_pane_g4_ParamLimits

0xe9a5,	// (0x00058ae0) bg_ai5_widget_pane_g4

0xe9b1,	// (0x00058aec) bg_ai5_widget_pane_g5_ParamLimits

0xe9b1,	// (0x00058aec) bg_ai5_widget_pane_g5

0xe9bd,	// (0x00058af8) bg_ai5_widget_pane_g6_ParamLimits

0xe9bd,	// (0x00058af8) bg_ai5_widget_pane_g6

0xe9c9,	// (0x00058b04) bg_ai5_widget_pane_g7_ParamLimits

0xe9c9,	// (0x00058b04) bg_ai5_widget_pane_g7

0xe9d5,	// (0x00058b10) bg_ai5_widget_pane_g8_ParamLimits

0xe9d5,	// (0x00058b10) bg_ai5_widget_pane_g8

0xe9e1,	// (0x00058b1c) bg_ai5_widget_pane_g9_ParamLimits

0xe9e1,	// (0x00058b1c) bg_ai5_widget_pane_g9

0x0008,

0xfe64,	// (0x00059f9f) bg_ai5_widget_pane_g_ParamLimits

0xfe64,	// (0x00059f9f) bg_ai5_widget_pane_g

0xea13,	// (0x00058b4e) cell_shortcut_ai5_widget_pane_ParamLimits

0xea13,	// (0x00058b4e) cell_shortcut_ai5_widget_pane

0x92df,	// (0x0005341a) bg_cell_shortcut_ai5_widget_pane

0xea24,	// (0x00058b5f) cell_grid_ai5_widget_pane_g1

0xea2d,	// (0x00058b68) highlight_cell_shortcut_ai5_widget_pane

0x9b3d,	// (0x00053c78) ai5_sk_left_pane_g1

0xea35,	// (0x00058b70) ai5_sk_left_pane_g2

0xea3d,	// (0x00058b78) ai5_sk_left_pane_g3

0xea45,	// (0x00058b80) ai5_sk_left_pane_g4

0x0003,

0xfe77,	// (0x00059fb2) ai5_sk_left_pane_g

0xea4d,	// (0x00058b88) ai5_sk_left_pane_t1

0x9b45,	// (0x00053c80) ai5_sk_right_pane_g1

0xea5b,	// (0x00058b96) ai5_sk_right_pane_g2

0xea63,	// (0x00058b9e) ai5_sk_right_pane_g3

0xea6b,	// (0x00058ba6) ai5_sk_right_pane_g4

0x0003,

0xfe80,	// (0x00059fbb) ai5_sk_right_pane_g

0xea73,	// (0x00058bae) ai5_sk_right_pane_t1

0x9b45,	// (0x00053c80) ai5_sk_middle_pane_g1

0x9b3d,	// (0x00053c78) ai5_sk_middle_pane_g2

0x9b5d,	// (0x00053c98) ai5_sk_middle_pane_g3

0xea63,	// (0x00058b9e) ai5_sk_middle_pane_g4

0xea3d,	// (0x00058b78) ai5_sk_middle_pane_g5

0xea81,	// (0x00058bbc) ai5_sk_middle_pane_g6

0xea89,	// (0x00058bc4) ai5_sk_middle_pane_g7

0x0006,

0xfe89,	// (0x00059fc4) ai5_sk_middle_pane_g

0x9665,	// (0x000537a0) aid_touch_area_size_lc0_ParamLimits

0x9665,	// (0x000537a0) aid_touch_area_size_lc0

0x67d2,	// (0x0005090d) cell_hwr_candidate_pane_t1_ParamLimits

0x9681,	// (0x000537bc) aid_touch_navi_pane

0x9960,	// (0x00053a9b) status_dt_navi_pane_ParamLimits

0x9960,	// (0x00053a9b) status_dt_navi_pane

0x996d,	// (0x00053aa8) status_dt_sta_pane_ParamLimits

0x996d,	// (0x00053aa8) status_dt_sta_pane

0xea91,	// (0x00058bcc) dt_sta_controll_pane

0xea9e,	// (0x00058bd9) dt_sta_indi_pane

0xeaaf,	// (0x00058bea) dt_sta_title_pane

0x8075,	// (0x000521b0) bg_dt_sta_indi_pane_ParamLimits

0x8075,	// (0x000521b0) bg_dt_sta_indi_pane

0xeac2,	// (0x00058bfd) dt_sta_battery_pane

0xeaca,	// (0x00058c05) dt_sta_indi_pane_g1

0xead3,	// (0x00058c0e) dt_sta_indi_pane_g2

0xeadc,	// (0x00058c17) dt_sta_indi_pane_g3

0x0002,

0xfe98,	// (0x00059fd3) dt_sta_indi_pane_g

0xeae5,	// (0x00058c20) dt_sta_signal_pane

0x8664,	// (0x0005279f) bg_dt_sta_title_pane_ParamLimits

0x8664,	// (0x0005279f) bg_dt_sta_title_pane

0xeaee,	// (0x00058c29) dt_sta_title_pane_g1

0xeaf6,	// (0x00058c31) dt_sta_title_pane_t1_ParamLimits

0xeaf6,	// (0x00058c31) dt_sta_title_pane_t1

0x7cf8,	// (0x00051e33) bg_dt_sta_control_pane

0xeb0b,	// (0x00058c46) dt_sta_controll_pane_g1

0xeb14,	// (0x00058c4f) bg_dt_sta_title_pane_g1

0xeb1d,	// (0x00058c58) bg_dt_sta_title_pane_g2

0xeb26,	// (0x00058c61) bg_dt_sta_title_pane_g3

0x0002,

0xfe9f,	// (0x00059fda) bg_dt_sta_title_pane_g

0xc127,	// (0x00056262) bg_dt_sta_indi_pane_g1

0xeb2f,	// (0x00058c6a) dt_sta_signal_pane_g1

0xeb37,	// (0x00058c72) dt_sta_signal_pane_g2

0x0001,

0xfea6,	// (0x00059fe1) dt_sta_signal_pane_g

0xeb3f,	// (0x00058c7a) dt_sta_battery_pane_g1

0xeb48,	// (0x00058c83) dt_sta_battery_pane_t1

0xc127,	// (0x00056262) bg_dt_sta_control_pane_g1

0x8de9,	// (0x00052f24) fep_china_uni_eep_pane

0x8df1,	// (0x00052f2c) fep_china_uni_entry_pane_ParamLimits

0x8e01,	// (0x00052f3c) popup_fep_china_uni_window_g1_ParamLimits

0x8e11,	// (0x00052f4c) popup_fep_china_uni_window_g2_ParamLimits

0x8e11,	// (0x00052f4c) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x00059863) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x00059863) popup_fep_china_uni_window_g

0xeb57,	// (0x00058c92) fep_china_uni_eep_pane_g1

0xeb5f,	// (0x00058c9a) fep_china_uni_eep_pane_t1

0xe5d2,	// (0x0005870d) aid_touch_area_size_smil_player

0x97dd,	// (0x00053918) lc0_clock_pane

0x99c4,	// (0x00053aff) status_pane_g5_ParamLimits

0x99c4,	// (0x00053aff) status_pane_g5

0x5c5e,	// (0x0004fd99) popup_keymap_window

0x9982,	// (0x00053abd) status_icon_pane

0xe7c0,	// (0x000588fb) cell_ai5_widget_pane_g3_ParamLimits

0xe7d7,	// (0x00058912) cell_ai5_widget_pane_g4_ParamLimits

0xe7e3,	// (0x0005891e) cell_ai5_widget_pane_g5_ParamLimits

0xe807,	// (0x00058942) cell_ai5_widget_pane_g8_ParamLimits

0xe807,	// (0x00058942) cell_ai5_widget_pane_g8

0xe81b,	// (0x00058956) cell_ai5_widget_pane_g9_ParamLimits

0xe81b,	// (0x00058956) cell_ai5_widget_pane_g9

0xe82f,	// (0x0005896a) cell_ai5_widget_pane_g10_ParamLimits

0xe82f,	// (0x0005896a) cell_ai5_widget_pane_g10

0xeb6e,	// (0x00058ca9) status_icon_pane_g1

0x7cf8,	// (0x00051e33) bg_popup_sub_pane_cp13

0xeb76,	// (0x00058cb1) popup_keymap_window_t1

0x95aa,	// (0x000536e5) control_pane_g6_ParamLimits

0x95aa,	// (0x000536e5) control_pane_g6

0x95b7,	// (0x000536f2) control_pane_g7_ParamLimits

0x95b7,	// (0x000536f2) control_pane_g7

0x95c4,	// (0x000536ff) control_pane_g8_ParamLimits

0x95c4,	// (0x000536ff) control_pane_g8

0xea91,	// (0x00058bcc) dt_sta_controll_pane_ParamLimits

0xea9e,	// (0x00058bd9) dt_sta_indi_pane_ParamLimits

0xeaaf,	// (0x00058bea) dt_sta_title_pane_ParamLimits

0x8590,	// (0x000526cb) aid_size_touch_scroll_bar_cale

0x4b57,	// (0x0004ec92) popup_discreet_window_ParamLimits

0x4b57,	// (0x0004ec92) popup_discreet_window

0x4bdf,	// (0x0004ed1a) popup_sk_window

0xa1ae,	// (0x000542e9) bg_popup_sub_pane_cp28_ParamLimits

0xa1ae,	// (0x000542e9) bg_popup_sub_pane_cp28

0xeb84,	// (0x00058cbf) popup_discreet_window_g1_ParamLimits

0xeb84,	// (0x00058cbf) popup_discreet_window_g1

0xeba4,	// (0x00058cdf) popup_discreet_window_t1_ParamLimits

0xeba4,	// (0x00058cdf) popup_discreet_window_t1

0xebc2,	// (0x00058cfd) popup_discreet_window_t2_ParamLimits

0xebc2,	// (0x00058cfd) popup_discreet_window_t2

0x0002,

0xfeab,	// (0x00059fe6) popup_discreet_window_t_ParamLimits

0xfeab,	// (0x00059fe6) popup_discreet_window_t

0x71bc,	// (0x000512f7) popup_sk_window_g1

0x71c6,	// (0x00051301) popup_sk_window_g2

0x0001,

0xfeb2,	// (0x00059fed) popup_sk_window_g

0x71d0,	// (0x0005130b) popup_sk_window_t1

0x71de,	// (0x00051319) popup_sk_window_t1_copy1

0xe7b0,	// (0x000588eb) cell_ai5_widget_pane_g2_ParamLimits

0xe909,	// (0x00058a44) cell_ai5_widget_pane_t9_ParamLimits

0xe909,	// (0x00058a44) cell_ai5_widget_pane_t9

0x7cf8,	// (0x00051e33) main_fep_fshwr2_pane

0x71ec,	// (0x00051327) aid_fshwr2_btn_pane

0x71f8,	// (0x00051333) aid_fshwr2_syb_pane

0x7209,	// (0x00051344) aid_fshwr2_txt_pane

0x7215,	// (0x00051350) fshwr2_func_candi_pane

0x722d,	// (0x00051368) fshwr2_hwr_syb_pane

0x7244,	// (0x0005137f) fshwr2_icf_pane

0x7cf8,	// (0x00051e33) fshwr2_icf_bg_pane

0xec14,	// (0x00058d4f) fshwr2_icf_pane_t1_ParamLimits

0xec14,	// (0x00058d4f) fshwr2_icf_pane_t1

0x8cd7,	// (0x00052e12) fshwr2_func_candi_pane_g1

0xec2c,	// (0x00058d67) fshwr2_func_candi_row_pane_ParamLimits

0xec2c,	// (0x00058d67) fshwr2_func_candi_row_pane

0xec3c,	// (0x00058d77) cell_fshwr2_syb_pane_ParamLimits

0xec3c,	// (0x00058d77) cell_fshwr2_syb_pane

0xc3a5,	// (0x000564e0) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc3a5,	// (0x000564e0) fshwr2_hwr_syb_pane_g1

0x7cf8,	// (0x00051e33) bg_popup_call_pane_cp01

0xec56,	// (0x00058d91) fshwr2_func_candi_cell_pane_ParamLimits

0xec56,	// (0x00058d91) fshwr2_func_candi_cell_pane

0xec81,	// (0x00058dbc) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec81,	// (0x00058dbc) fshwr2_func_candi_cell_bg_pane

0xec8d,	// (0x00058dc8) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec8d,	// (0x00058dc8) fshwr2_func_candi_cell_pane_g1

0xecb5,	// (0x00058df0) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xecb5,	// (0x00058df0) fshwr2_func_candi_cell_pane_t1

0x7cf8,	// (0x00051e33) bg_button_pane_cp08

0x92df,	// (0x0005341a) cell_fshwr2_syb_bg_pane

0xecc8,	// (0x00058e03) cell_fshwr2_syb_bg_pane_g1

0xecd0,	// (0x00058e0b) cell_fshwr2_syb_bg_pane_t1

0x8664,	// (0x0005279f) main_tmo_pane

0xacbd,	// (0x00054df8) uni_indicator_pane_g1_ParamLimits

0xacd4,	// (0x00054e0f) uni_indicator_pane_g2_ParamLimits

0xace7,	// (0x00054e22) uni_indicator_pane_g3_ParamLimits

0xacf9,	// (0x00054e34) uni_indicator_pane_g4_ParamLimits

0xacf9,	// (0x00054e34) uni_indicator_pane_g4

0xad0d,	// (0x00054e48) uni_indicator_pane_g5_ParamLimits

0xad0d,	// (0x00054e48) uni_indicator_pane_g5

0xad0d,	// (0x00054e48) uni_indicator_pane_g6_ParamLimits

0xad0d,	// (0x00054e48) uni_indicator_pane_g6

0xf92c,	// (0x00059a67) uni_indicator_pane_g_ParamLimits

0xd60e,	// (0x00057749) popup_tmo_note_window_ParamLimits

0xd60e,	// (0x00057749) popup_tmo_note_window

0x6a3c,	// (0x00050b77) fshwr2_bg_pane

0xeca6,	// (0x00058de1) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xeca6,	// (0x00058de1) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb7,	// (0x00059ff2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb7,	// (0x00059ff2) fshwr2_func_candi_cell_pane_g

0xc127,	// (0x00056262) bg_popup_window_pane_cp01

0xecdf,	// (0x00058e1a) bg_popup_window_pane_g1_cp01

0xece8,	// (0x00058e23) bg_popup_window_pane_cp22_ParamLimits

0xece8,	// (0x00058e23) bg_popup_window_pane_cp22

0xecf6,	// (0x00058e31) listscroll_tmo_link_pane_ParamLimits

0xecf6,	// (0x00058e31) listscroll_tmo_link_pane

0xed36,	// (0x00058e71) popup_tmo_note_window_g1_ParamLimits

0xed36,	// (0x00058e71) popup_tmo_note_window_g1

0xed43,	// (0x00058e7e) tmo_note_info_pane_ParamLimits

0xed43,	// (0x00058e7e) tmo_note_info_pane

0xed5d,	// (0x00058e98) list_tmo_note_info_pane_g1_ParamLimits

0xed5d,	// (0x00058e98) list_tmo_note_info_pane_g1

0xed74,	// (0x00058eaf) list_tmo_note_info_pane_g2_ParamLimits

0xed74,	// (0x00058eaf) list_tmo_note_info_pane_g2

0x0001,

0xfebc,	// (0x00059ff7) list_tmo_note_info_pane_g_ParamLimits

0xfebc,	// (0x00059ff7) list_tmo_note_info_pane_g

0xed90,	// (0x00058ecb) list_tmo_note_info_text_pane_ParamLimits

0xed90,	// (0x00058ecb) list_tmo_note_info_text_pane

0xee11,	// (0x00058f4c) list_tmo_link_pane

0xee1e,	// (0x00058f59) scroll_pane_cp20

0xee2b,	// (0x00058f66) list_single_tmo_link_pane_ParamLimits

0xee2b,	// (0x00058f66) list_single_tmo_link_pane

0xee3b,	// (0x00058f76) list_single_tmo_link_pane_t1

0xee49,	// (0x00058f84) list_tmo_note_info_text_pane_t1_ParamLimits

0xee49,	// (0x00058f84) list_tmo_note_info_text_pane_t1

0x8712,	// (0x0005284d) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8712,	// (0x0005284d) aid_size_touch_scroll_bar_cp01

0x5333,	// (0x0004f46e) aid_size_touch_slider_marker

0x4bc7,	// (0x0004ed02) popup_settings_window_ParamLimits

0x4bc7,	// (0x0004ed02) popup_settings_window

0x5ae5,	// (0x0004fc20) popup_candi_list_indi_window

0x9681,	// (0x000537bc) aid_touch_navi_pane_ParamLimits

0x6997,	// (0x00050ad2) rs_clock_indi_pane

0x69a0,	// (0x00050adb) sctrl_sk_bottom_pane_ParamLimits

0x69b1,	// (0x00050aec) sctrl_sk_top_pane_ParamLimits

0x6ab4,	// (0x00050bef) popup_fep_tooltip_window

0xe726,	// (0x00058861) aid_size_cell_widget_grid_ParamLimits

0xe79b,	// (0x000588d6) cell_ai5_widget_pane_g1_ParamLimits

0xe79b,	// (0x000588d6) cell_ai5_widget_pane_g1

0xe7ef,	// (0x0005892a) cell_ai5_widget_pane_g6_ParamLimits

0xe7fb,	// (0x00058936) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3a,	// (0x00059f75) cell_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x00059f75) cell_ai5_widget_pane_g

0xe92d,	// (0x00058a68) cell_ai5_widget_pane_t10_ParamLimits

0xe92d,	// (0x00058a68) cell_ai5_widget_pane_t10

0xe94b,	// (0x00058a86) grid_ai5_widget_pane_ParamLimits

0xe9ed,	// (0x00058b28) cell_contacts_ai5_widget_pane_ParamLimits

0xe9ed,	// (0x00058b28) cell_contacts_ai5_widget_pane

0xebd7,	// (0x00058d12) popup_discreet_window_t3_ParamLimits

0xebd7,	// (0x00058d12) popup_discreet_window_t3

0x7259,	// (0x00051394) popup_fshwr2_char_preview_window_ParamLimits

0x7259,	// (0x00051394) popup_fshwr2_char_preview_window

0xedae,	// (0x00058ee9) tmo_note_info_pane_t1

0xedc3,	// (0x00058efe) tmo_note_info_pane_t2

0xedd8,	// (0x00058f13) tmo_note_info_pane_t3

0xeded,	// (0x00058f28) tmo_note_info_pane_t4

0xedff,	// (0x00058f3a) tmo_note_info_pane_t5

0x0004,

0xfec1,	// (0x00059ffc) tmo_note_info_pane_t

0xee11,	// (0x00058f4c) list_tmo_link_pane_ParamLimits

0xee1e,	// (0x00058f59) scroll_pane_cp20_ParamLimits

0x7cf8,	// (0x00051e33) bg_popup_fep_char_preview_window_cp01

0xee62,	// (0x00058f9d) popup_fshwr2_char_preview_window_t1

0xee70,	// (0x00058fab) popup_candi_list_indi_window_g1

0xee79,	// (0x00058fb4) bg_cell_contacts_ai5_widget_pane

0xee85,	// (0x00058fc0) cell_contacts_ai5_widget_pane_g1

0xc7d1,	// (0x0005690c) cell_contacts_ai5_widget_pane_g2

0xee98,	// (0x00058fd3) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecc,	// (0x0005a007) cell_contacts_ai5_widget_pane_g

0xeeaa,	// (0x00058fe5) cell_contacts_ai5_widget_pane_t1

0x8664,	// (0x0005279f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef21,	// (0x0005905c) settings_container_pane

0x92df,	// (0x0005341a) listscroll_set_pane_copy1

0xb814,	// (0x0005594f) scroll_pane_cp121_copy1

0xef2d,	// (0x00059068) set_content_pane_copy1

0xef35,	// (0x00059070) aid_height_set_list_copy1_ParamLimits

0xef35,	// (0x00059070) aid_height_set_list_copy1

0xaf05,	// (0x00055040) aid_size_parent_copy1_ParamLimits

0xaf05,	// (0x00055040) aid_size_parent_copy1

0xef41,	// (0x0005907c) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef41,	// (0x0005907c) button_value_adjust_pane_cp6_copy1

0x961f,	// (0x0005375a) list_highlight_pane_cp2_copy1_ParamLimits

0x961f,	// (0x0005375a) list_highlight_pane_cp2_copy1

0xef55,	// (0x00059090) list_set_pane_copy1_ParamLimits

0xef55,	// (0x00059090) list_set_pane_copy1

0xeebc,	// (0x00058ff7) main_pane_set_t1_copy1_ParamLimits

0xeebc,	// (0x00058ff7) main_pane_set_t1_copy1

0xeef6,	// (0x00059031) main_pane_set_t2_copy1_ParamLimits

0xeef6,	// (0x00059031) main_pane_set_t2_copy1

0xf002,	// (0x0005913d) main_pane_set_t3_copy1

0xf010,	// (0x0005914b) main_pane_set_t4_copy1

0xef15,	// (0x00059050) set_content_pane_g1_copy1_ParamLimits

0xef15,	// (0x00059050) set_content_pane_g1_copy1

0xf01e,	// (0x00059159) setting_code_pane_copy1

0xf026,	// (0x00059161) setting_slider_graphic_pane_copy1

0xf026,	// (0x00059161) setting_slider_pane_copy1

0xf026,	// (0x00059161) setting_text_pane_copy1

0xf026,	// (0x00059161) setting_volume_pane_copy1

0xf01e,	// (0x00059159) settings_code_pane_cp2_copy1

0xf02e,	// (0x00059169) settings_code_pane_cp_copy1_ParamLimits

0xf02e,	// (0x00059169) settings_code_pane_cp_copy1

0x726d,	// (0x000513a8) volume_set_pane_copy1

0xf042,	// (0x0005917d) volume_set_pane_g10_copy1

0xf04a,	// (0x00059185) volume_set_pane_g1_copy1

0xf052,	// (0x0005918d) volume_set_pane_g2_copy1

0xf05a,	// (0x00059195) volume_set_pane_g3_copy1

0xf062,	// (0x0005919d) volume_set_pane_g4_copy1

0xf06a,	// (0x000591a5) volume_set_pane_g5_copy1

0xf072,	// (0x000591ad) volume_set_pane_g6_copy1

0xf07a,	// (0x000591b5) volume_set_pane_g7_copy1

0xf082,	// (0x000591bd) volume_set_pane_g8_copy1

0xf08a,	// (0x000591c5) volume_set_pane_g9_copy1

0x7dec,	// (0x00051f27) bg_set_opt_pane_cp_copy1_ParamLimits

0x7dec,	// (0x00051f27) bg_set_opt_pane_cp_copy1

0x7275,	// (0x000513b0) setting_slider_pane_t1_copy1_ParamLimits

0x7275,	// (0x000513b0) setting_slider_pane_t1_copy1

0x7293,	// (0x000513ce) setting_slider_pane_t2_copy1_ParamLimits

0x7293,	// (0x000513ce) setting_slider_pane_t2_copy1

0x72ad,	// (0x000513e8) setting_slider_pane_t3_copy1_ParamLimits

0x72ad,	// (0x000513e8) setting_slider_pane_t3_copy1

0x72c5,	// (0x00051400) slider_set_pane_copy1_ParamLimits

0x72c5,	// (0x00051400) slider_set_pane_copy1

0x86b3,	// (0x000527ee) set_opt_bg_pane_g1_copy2

0x86bb,	// (0x000527f6) set_opt_bg_pane_g2_copy2

0xf092,	// (0x000591cd) set_opt_bg_pane_g3_copy2

0x86cb,	// (0x00052806) set_opt_bg_pane_g4_copy2

0x86d3,	// (0x0005280e) set_opt_bg_pane_g5_copy2

0x86db,	// (0x00052816) set_opt_bg_pane_g6_copy2

0xf09c,	// (0x000591d7) set_opt_bg_pane_g7_copy2

0xf0a4,	// (0x000591df) set_opt_bg_pane_g8_copy2

0xf0ae,	// (0x000591e9) set_opt_bg_pane_g9_copy2

0xf0b8,	// (0x000591f3) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0b8,	// (0x000591f3) aid_size_touch_slider_mark_copy1

0xf0cc,	// (0x00059207) slider_set_pane_g1_copy1

0xf0d5,	// (0x00059210) slider_set_pane_g2_copy1

0xb229,	// (0x00055364) slider_set_pane_g3_copy1_ParamLimits

0xb229,	// (0x00055364) slider_set_pane_g3_copy1

0xb23d,	// (0x00055378) slider_set_pane_g4_copy1_ParamLimits

0xb23d,	// (0x00055378) slider_set_pane_g4_copy1

0xb255,	// (0x00055390) slider_set_pane_g5_copy1_ParamLimits

0xb255,	// (0x00055390) slider_set_pane_g5_copy1

0xb229,	// (0x00055364) slider_set_pane_g6_copy1_ParamLimits

0xb229,	// (0x00055364) slider_set_pane_g6_copy1

0xf0dd,	// (0x00059218) slider_set_pane_g7_copy1_ParamLimits

0xf0dd,	// (0x00059218) slider_set_pane_g7_copy1

0x7d0c,	// (0x00051e47) bg_set_opt_pane_cp2_copy1

0xf0f3,	// (0x0005922e) setting_slider_graphic_pane_g1_copy1

0xf0fc,	// (0x00059237) setting_slider_graphic_pane_t1_copy1

0xf10c,	// (0x00059247) setting_slider_graphic_pane_t2_copy1

0xf11c,	// (0x00059257) slider_set_pane_cp_copy1

0xf12c,	// (0x00059267) input_focus_pane_cp1_copy1

0xf135,	// (0x00059270) list_set_text_pane_copy1

0xf13d,	// (0x00059278) setting_text_pane_g1_copy1

0x4d68,	// (0x0004eea3) set_text_pane_t1_copy1

0xf12c,	// (0x00059267) input_focus_pane_cp2_copy1

0xf13d,	// (0x00059278) setting_code_pane_g1_copy1

0xf146,	// (0x00059281) setting_code_pane_t1_copy1

0xf154,	// (0x0005928f) list_set_graphic_pane_copy1

0x7d0c,	// (0x00051e47) bg_set_opt_pane_cp4_copy1

0x8fe5,	// (0x00053120) list_set_graphic_pane_g1_copy1_ParamLimits

0x8fe5,	// (0x00053120) list_set_graphic_pane_g1_copy1

0xf166,	// (0x000592a1) list_set_graphic_pane_g2_copy1

0x8ffd,	// (0x00053138) list_set_graphic_pane_t1_copy1_ParamLimits

0x8ffd,	// (0x00053138) list_set_graphic_pane_t1_copy1

0xc127,	// (0x00056262) rs_clock_indi_pane_g1

0xf16e,	// (0x000592a9) rs_clock_indi_pane_t1

0xf17c,	// (0x000592b7) rs_indi_pane

0xf184,	// (0x000592bf) rs_indi_pane_g1

0xf18d,	// (0x000592c8) rs_indi_pane_g2

0xf196,	// (0x000592d1) rs_indi_pane_g3

0x0002,

0xfed3,	// (0x0005a00e) rs_indi_pane_g

0x92df,	// (0x0005341a) bg_popup_preview_window_pane_cp03

0xf19f,	// (0x000592da) popup_fep_tooltip_window_t1

0xcdaf,	// (0x00056eea) popup_note2_window_g2_ParamLimits

0xcdaf,	// (0x00056eea) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x00059da7) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x00059da7) popup_note2_window_g

0xd2aa,	// (0x000573e5) bg_popup_sub_pane_cp11_ParamLimits

0xd2b7,	// (0x000573f2) cell_ai3_links_pane_g1_ParamLimits

0xd2ce,	// (0x00057409) cell_ai3_links_pane_t1

0x4d68,	// (0x0004eea3) set_text_pane_t1_copy1_ParamLimits

0x91f0,	// (0x0005332b) cell_graphic_popup_pane_cp2_ParamLimits

0x91f0,	// (0x0005332b) cell_graphic_popup_pane_cp2

0xf1ad,	// (0x000592e8) cell_graphic_popup_pane_g1_cp2

0x83a3,	// (0x000524de) cell_graphic_popup_pane_g2_cp2

0xf1b5,	// (0x000592f0) cell_graphic_popup_pane_g3_cp2

0xf1bd,	// (0x000592f8) cell_graphic_popup_pane_t2_cp2

0x83b4,	// (0x000524ef) grid_highlight_pane_cp3_cp2

0x89f8,	// (0x00052b33) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8664,	// (0x0005279f) main_tmo_pane_ParamLimits

0xd602,	// (0x0005773d) popup_tmo_big_image_note_window

0xe78a,	// (0x000588c5) cell_ai5_widget_list_pane

0xe792,	// (0x000588cd) cell_ai5_widget_lrg_icon_pane

0xedae,	// (0x00058ee9) tmo_note_info_pane_t1_ParamLimits

0xedc3,	// (0x00058efe) tmo_note_info_pane_t2_ParamLimits

0xedd8,	// (0x00058f13) tmo_note_info_pane_t3_ParamLimits

0xeded,	// (0x00058f28) tmo_note_info_pane_t4_ParamLimits

0xedff,	// (0x00058f3a) tmo_note_info_pane_t5_ParamLimits

0xfec1,	// (0x00059ffc) tmo_note_info_pane_t_ParamLimits

0xef21,	// (0x0005905c) settings_container_pane_ParamLimits

0xf124,	// (0x0005925f) indicator_popup_pane_cp5

0xf124,	// (0x0005925f) indicator_popup_pane_cp6

0xf154,	// (0x0005928f) list_set_graphic_pane_copy1_ParamLimits

0x7cf8,	// (0x00051e33) bg_popup_window_pane_cp23

0xf1cb,	// (0x00059306) popup_tmo_big_image_note_window_g1

0xf1d5,	// (0x00059310) popup_tmo_big_image_note_window_t1

0xf1e5,	// (0x00059320) popup_tmo_big_image_note_window_t2

0xf1f5,	// (0x00059330) popup_tmo_big_image_note_window_t3

0x0002,

0xfeda,	// (0x0005a015) popup_tmo_big_image_note_window_t

0xc127,	// (0x00056262) cell_ai5_widget_lrg_icon_pane_g1

0xf205,	// (0x00059340) cell_ai5_widget_lrg_icon_pane_t1

0xf213,	// (0x0005934e) cell_ai5_widget_list_row_pane_ParamLimits

0xf213,	// (0x0005934e) cell_ai5_widget_list_row_pane

0xf22c,	// (0x00059367) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf22c,	// (0x00059367) cell_ai5_widget_list_row_pane_g1

0xf239,	// (0x00059374) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf239,	// (0x00059374) cell_ai5_widget_list_row_pane_t1

0xf26a,	// (0x000593a5) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf26a,	// (0x000593a5) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee1,	// (0x0005a01c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee1,	// (0x0005a01c) cell_ai5_widget_list_row_pane_t

0x4a7e,	// (0x0004ebb9) main_fep_vtchi_ss_pane

0x72ea,	// (0x00051425) popup_fep_char_pre_window

0x72f2,	// (0x0005142d) popup_fep_ituss_window

0x7313,	// (0x0005144e) popup_fep_vkbss_window

0xf292,	// (0x000593cd) grid_vkbss_keypad_pane_ParamLimits

0xf292,	// (0x000593cd) grid_vkbss_keypad_pane

0xf2a2,	// (0x000593dd) ituss_keypad_pane

0x733e,	// (0x00051479) aid_vkbss_key_offset_ParamLimits

0x733e,	// (0x00051479) aid_vkbss_key_offset

0x734a,	// (0x00051485) cell_vkbss_key_pane_ParamLimits

0x734a,	// (0x00051485) cell_vkbss_key_pane

0xf2b2,	// (0x000593ed) bg_cell_vkbss_key_g1_ParamLimits

0xf2b2,	// (0x000593ed) bg_cell_vkbss_key_g1

0xf2be,	// (0x000593f9) cell_vkbss_key_3p_pane_ParamLimits

0xf2be,	// (0x000593f9) cell_vkbss_key_3p_pane

0xf2d8,	// (0x00059413) cell_vkbss_key_g1_ParamLimits

0xf2d8,	// (0x00059413) cell_vkbss_key_g1

0xf2f2,	// (0x0005942d) cell_vkbss_key_t1_ParamLimits

0xf2f2,	// (0x0005942d) cell_vkbss_key_t1

0x7360,	// (0x0005149b) cell_ituss_key_pane_ParamLimits

0x7360,	// (0x0005149b) cell_ituss_key_pane

0xf31d,	// (0x00059458) bg_cell_ituss_key_g1_ParamLimits

0xf31d,	// (0x00059458) bg_cell_ituss_key_g1

0xf329,	// (0x00059464) cell_ituss_key_pane_g1_ParamLimits

0xf329,	// (0x00059464) cell_ituss_key_pane_g1

0xf343,	// (0x0005947e) cell_ituss_key_pane_g2_ParamLimits

0xf343,	// (0x0005947e) cell_ituss_key_pane_g2

0x0001,

0xfee8,	// (0x0005a023) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x0005a023) cell_ituss_key_pane_g

0xf371,	// (0x000594ac) cell_ituss_key_t1_ParamLimits

0xf371,	// (0x000594ac) cell_ituss_key_t1

0xf3ab,	// (0x000594e6) cell_ituss_key_t2_ParamLimits

0xf3ab,	// (0x000594e6) cell_ituss_key_t2

0xf3dc,	// (0x00059517) cell_ituss_key_t3_ParamLimits

0xf3dc,	// (0x00059517) cell_ituss_key_t3

0xf416,	// (0x00059551) cell_ituss_key_t4_ParamLimits

0xf416,	// (0x00059551) cell_ituss_key_t4

0x0003,

0xfeed,	// (0x0005a028) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0005a028) cell_ituss_key_t

0xf450,	// (0x0005958b) cell_vkbss_key_3p_pane_g1

0xf458,	// (0x00059593) cell_vkbss_key_3p_pane_g2

0xf460,	// (0x0005959b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x0005a031) cell_vkbss_key_3p_pane_g

0x7cf8,	// (0x00051e33) bg_popup_fep_char_preview_window_cp02

0xf468,	// (0x000595a3) popup_fep_char_pre_window_t1

0xe71c,	// (0x00058857) main_ai5_sk_pane

0xee79,	// (0x00058fb4) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee85,	// (0x00058fc0) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc7d1,	// (0x0005690c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee98,	// (0x00058fd3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecc,	// (0x0005a007) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeeaa,	// (0x00058fe5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8664,	// (0x0005279f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf477,	// (0x000595b2) main_ai5_sk_pane_g1

0x9fe7,	// (0x00054122) popup_query_code_window_g1

0x7308,	// (0x00051443) popup_fep_vkb_icf_pane

0x731c,	// (0x00051457) popup_fep_vtchi_icf_pane

0x8664,	// (0x0005279f) bg_icf_pane

0xf480,	// (0x000595bb) list_vkb_icf_pane

0x8664,	// (0x0005279f) bg_icf_pane_cp01

0xf48c,	// (0x000595c7) vtchi_icf_list_pane

0xf49d,	// (0x000595d8) list_vkb_icf_pane_t1_ParamLimits

0xf49d,	// (0x000595d8) list_vkb_icf_pane_t1

0xf4b3,	// (0x000595ee) vtchi_icf_list_pane_t1_ParamLimits

0xf4b3,	// (0x000595ee) vtchi_icf_list_pane_t1

0x72f2,	// (0x0005142d) popup_fep_ituss_window_ParamLimits

0x731c,	// (0x00051457) popup_fep_vtchi_icf_pane_ParamLimits

0xf2a2,	// (0x000593dd) ituss_keypad_pane_ParamLimits

0x7332,	// (0x0005146d) ituss_sks_pane

0x8664,	// (0x0005279f) bg_icf_pane_ParamLimits

0x72db,	// (0x00051416) icf_edit_indi_pane_ParamLimits

0x72db,	// (0x00051416) icf_edit_indi_pane

0xf480,	// (0x000595bb) list_vkb_icf_pane_ParamLimits

0x8664,	// (0x0005279f) bg_icf_pane_cp01_ParamLimits

0x72db,	// (0x00051416) icf_edit_indi_pane_cp01_ParamLimits

0x72db,	// (0x00051416) icf_edit_indi_pane_cp01

0xf494,	// (0x000595cf) vtchi_query_pane

0xc3a5,	// (0x000564e0) icf_edit_indi_pane_g1_ParamLimits

0xc3a5,	// (0x000564e0) icf_edit_indi_pane_g1

0xf537,	// (0x00059672) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x00059672) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x0005a049) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x0005a049) icf_edit_indi_pane_g

0xf546,	// (0x00059681) icf_edit_indi_pane_t1

0xf4cd,	// (0x00059608) bg_input_focus_pane_cp042

0x8587,	// (0x000526c2) vtchi_button_pane

0xf4d6,	// (0x00059611) vtchi_query_pane_t1

0xf4e4,	// (0x0005961f) vtchi_query_pane_t2

0xf4f2,	// (0x0005962d) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x0005a038) vtchi_query_pane_t

0x7cf8,	// (0x00051e33) bg_button_pane_cp13

0xf500,	// (0x0005963b) vtchi_button_pane_g1

0xf508,	// (0x00059643) ituss_sks_pane_g1

0xf513,	// (0x0005964e) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x0005a03f) ituss_sks_pane_g

0xf51b,	// (0x00059656) ituss_sks_pane_t1

0xf529,	// (0x00059664) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x0005a044) ituss_sks_pane_t

0xbb9e,	// (0x00055cd9) indicator_nsta_pane_cp_g1

0xbba7,	// (0x00055ce2) indicator_nsta_pane_cp_g2

0xbbaf,	// (0x00055cea) indicator_nsta_pane_cp_g3

0xbbb7,	// (0x00055cf2) indicator_nsta_pane_cp_g4

0xbbb7,	// (0x00055cf2) indicator_nsta_pane_cp_g5

0xbbb7,	// (0x00055cf2) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x00059be5) indicator_nsta_pane_cp_g

0xe302,	// (0x0005843d) cell_graphic2_pane_t2_ParamLimits

0xe302,	// (0x0005843d) cell_graphic2_pane_t2

0x0001,

0xfdc3,	// (0x00059efe) cell_graphic2_pane_t_ParamLimits

0xfdc3,	// (0x00059efe) cell_graphic2_pane_t

0xe32f,	// (0x0005846a) cell_graphic2_control_pane_t1

0x8d98,	// (0x00052ed3) signal_pane_g3_ParamLimits

0x8d98,	// (0x00052ed3) signal_pane_g3

0x8daa,	// (0x00052ee5) signal_pane_g4_ParamLimits

0x8daa,	// (0x00052ee5) signal_pane_g4

0xf27c,	// (0x000593b7) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf27c,	// (0x000593b7) cell_ai5_widget_list_row_pane_t3

0xf35f,	// (0x0005949a) cell_ituss_key_pane_t1_ParamLimits

0xf35f,	// (0x0005949a) cell_ituss_key_pane_t1

0x9c3a,	// (0x00053d75) form_field_data_wide_pane_vc_t2_ParamLimits

0x9c3a,	// (0x00053d75) form_field_data_wide_pane_vc_t2

0x9c4e,	// (0x00053d89) form_field_data_wide_pane_vc_t3_ParamLimits

0x9c4e,	// (0x00053d89) form_field_data_wide_pane_vc_t3

0x0002,

0xf814,	// (0x0005994f) form_field_data_wide_pane_vc_t_ParamLimits

0xf814,	// (0x0005994f) form_field_data_wide_pane_vc_t

0xb856,	// (0x00055991) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb856,	// (0x00055991) form_field_slider_wide_pane_vc_t3

0xb934,	// (0x00055a6f) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb934,	// (0x00055a6f) form_field_popup_wide_pane_vc_t2

0xb94b,	// (0x00055a86) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb94b,	// (0x00055a86) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x00059bd4) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x00059bd4) form_field_popup_wide_pane_vc_t

0x71ec,	// (0x00051327) aid_fshwr2_btn_pane_ParamLimits

0x71f8,	// (0x00051333) aid_fshwr2_syb_pane_ParamLimits

0x7209,	// (0x00051344) aid_fshwr2_txt_pane_ParamLimits

0x6a3c,	// (0x00050b77) fshwr2_bg_pane_ParamLimits

0x7215,	// (0x00051350) fshwr2_func_candi_pane_ParamLimits

0x722d,	// (0x00051368) fshwr2_hwr_syb_pane_ParamLimits

0x7244,	// (0x0005137f) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
