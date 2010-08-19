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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000471c0 };

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
0xa1c9,	// (0x00051389) Screen

0xa1dd,	// (0x0005139d) application_window_ParamLimits

0xa1dd,	// (0x0005139d) application_window

0xa1f7,	// (0x000513b7) screen_g1

0xa229,	// (0x000513e9) area_bottom_pane_ParamLimits

0xa229,	// (0x000513e9) area_bottom_pane

0xf1f3,	// (0x000563b3) area_top_pane_ParamLimits

0xf1f3,	// (0x000563b3) area_top_pane

0xf287,	// (0x00056447) main_pane_ParamLimits

0xf287,	// (0x00056447) main_pane

0xa2e7,	// (0x000514a7) misc_graphics

0xbcdc,	// (0x00052e9c) battery_pane_ParamLimits

0xbcdc,	// (0x00052e9c) battery_pane

0x3c31,	// (0x0004adf1) bg_status_flat_pane_g8

0x3c39,	// (0x0004adf9) bg_status_flat_pane_g9

0x3031,	// (0x0004a1f1) context_pane_ParamLimits

0x3031,	// (0x0004a1f1) context_pane

0xc701,	// (0x000538c1) navi_pane_ParamLimits

0xc701,	// (0x000538c1) navi_pane

0xc78b,	// (0x0005394b) signal_pane_ParamLimits

0xc78b,	// (0x0005394b) signal_pane

0x0008,

0xf854,	// (0x00056a14) bg_status_flat_pane_g

0xc81b,	// (0x000539db) status_pane_g1_ParamLimits

0xc81b,	// (0x000539db) status_pane_g1

0xc831,	// (0x000539f1) status_pane_g2_ParamLimits

0xc831,	// (0x000539f1) status_pane_g2

0x326a,	// (0x0004a42a) status_pane_g3_ParamLimits

0x326a,	// (0x0004a42a) status_pane_g3

0x0004,

0xf780,	// (0x00056940) status_pane_g_ParamLimits

0xf780,	// (0x00056940) status_pane_g

0xc83d,	// (0x000539fd) title_pane_ParamLimits

0xc83d,	// (0x000539fd) title_pane

0xc8a4,	// (0x00053a64) uni_indicator_pane_ParamLimits

0xc8a4,	// (0x00053a64) uni_indicator_pane

0x2e9b,	// (0x0004a05b) bg_list_pane_ParamLimits

0x2e9b,	// (0x0004a05b) bg_list_pane

0x9f8e,	// (0x0005114e) find_pane

0x3465,	// (0x0004a625) listscroll_app_pane_ParamLimits

0x3465,	// (0x0004a625) listscroll_app_pane

0x2ec7,	// (0x0004a087) listscroll_form_pane

0x9f96,	// (0x00051156) listscroll_gen_pane_ParamLimits

0x9f96,	// (0x00051156) listscroll_gen_pane

0x08f9,	// (0x00047ab9) listscroll_set_pane

0x47ce,	// (0x0004b98e) main_idle_act_pane

0x2b94,	// (0x00049d54) main_idle_trad_pane

0x2b94,	// (0x00049d54) main_list_empty_pane

0x2ebb,	// (0x0004a07b) main_midp_pane

0x2ee1,	// (0x0004a0a1) main_pane_g1_ParamLimits

0x2ee1,	// (0x0004a0a1) main_pane_g1

0xb532,	// (0x000526f2) popup_ai_message_window_ParamLimits

0xb532,	// (0x000526f2) popup_ai_message_window

0xb5d2,	// (0x00052792) popup_fep_china_uni_window_ParamLimits

0xb5d2,	// (0x00052792) popup_fep_china_uni_window

0x0a15,	// (0x00047bd5) popup_fep_japan_candidate_window_ParamLimits

0x0a15,	// (0x00047bd5) popup_fep_japan_candidate_window

0x0a3f,	// (0x00047bff) popup_fep_japan_predictive_window_ParamLimits

0x0a3f,	// (0x00047bff) popup_fep_japan_predictive_window

0xb632,	// (0x000527f2) popup_find_window

0xb64f,	// (0x0005280f) popup_grid_graphic_window_ParamLimits

0xb64f,	// (0x0005280f) popup_grid_graphic_window

0x0ab2,	// (0x00047c72) popup_large_graphic_colour_window

0xb6f9,	// (0x000528b9) popup_menu_window_ParamLimits

0xb6f9,	// (0x000528b9) popup_menu_window

0xb8e9,	// (0x00052aa9) popup_note_image_window

0xb8a9,	// (0x00052a69) popup_note_wait_window_ParamLimits

0xb8a9,	// (0x00052a69) popup_note_wait_window

0xb901,	// (0x00052ac1) popup_note_window_ParamLimits

0xb901,	// (0x00052ac1) popup_note_window

0xb9af,	// (0x00052b6f) popup_query_code_window_ParamLimits

0xb9af,	// (0x00052b6f) popup_query_code_window

0x0d1e,	// (0x00047ede) popup_query_data_code_window_ParamLimits

0x0d1e,	// (0x00047ede) popup_query_data_code_window

0xb9ef,	// (0x00052baf) popup_query_data_window_ParamLimits

0xb9ef,	// (0x00052baf) popup_query_data_window

0xba83,	// (0x00052c43) popup_query_sat_info_window_ParamLimits

0xba83,	// (0x00052c43) popup_query_sat_info_window

0xbb2c,	// (0x00052cec) popup_snote_single_graphic_window_ParamLimits

0xbb2c,	// (0x00052cec) popup_snote_single_graphic_window

0xbb2c,	// (0x00052cec) popup_snote_single_text_window_ParamLimits

0xbb2c,	// (0x00052cec) popup_snote_single_text_window

0x0db9,	// (0x00047f79) popup_sub_window_general

0x0eff,	// (0x000480bf) popup_window_general_ParamLimits

0x0eff,	// (0x000480bf) popup_window_general

0x2eef,	// (0x0004a0af) power_save_pane

0xb392,	// (0x00052552) control_pane_g1_ParamLimits

0xb392,	// (0x00052552) control_pane_g1

0xb3bb,	// (0x0005257b) control_pane_g2_ParamLimits

0xb3bb,	// (0x0005257b) control_pane_g2

0x2e5e,	// (0x0004a01e) control_pane_g3_ParamLimits

0x2e5e,	// (0x0004a01e) control_pane_g3

0x0007,

0xf768,	// (0x00056928) control_pane_g_ParamLimits

0xf768,	// (0x00056928) control_pane_g

0xb421,	// (0x000525e1) control_pane_t1_ParamLimits

0xb421,	// (0x000525e1) control_pane_t1

0xb487,	// (0x00052647) control_pane_t2_ParamLimits

0xb487,	// (0x00052647) control_pane_t2

0x0002,

0xf779,	// (0x00056939) control_pane_t_ParamLimits

0xf779,	// (0x00056939) control_pane_t

0xb2eb,	// (0x000524ab) navi_navi_volume_pane_cp1

0xb2f3,	// (0x000524b3) status_small_icon_pane

0x2d93,	// (0x00049f53) status_small_pane_g1_ParamLimits

0x2d93,	// (0x00049f53) status_small_pane_g1

0xb2fb,	// (0x000524bb) status_small_pane_g2_ParamLimits

0xb2fb,	// (0x000524bb) status_small_pane_g2

0xb307,	// (0x000524c7) status_small_pane_g3_ParamLimits

0xb307,	// (0x000524c7) status_small_pane_g3

0xb313,	// (0x000524d3) status_small_pane_g4_ParamLimits

0xb313,	// (0x000524d3) status_small_pane_g4

0xb31f,	// (0x000524df) status_small_pane_g5_ParamLimits

0xb31f,	// (0x000524df) status_small_pane_g5

0xb32d,	// (0x000524ed) status_small_pane_g6_ParamLimits

0xb32d,	// (0x000524ed) status_small_pane_g6

0x0007,

0xf757,	// (0x00056917) status_small_pane_g_ParamLimits

0xf757,	// (0x00056917) status_small_pane_g

0xb35c,	// (0x0005251c) status_small_pane_t1

0xb37e,	// (0x0005253e) status_small_wait_pane_ParamLimits

0xb37e,	// (0x0005253e) status_small_wait_pane

0xb124,	// (0x000522e4) aid_levels_signal_ParamLimits

0xb124,	// (0x000522e4) aid_levels_signal

0xb13c,	// (0x000522fc) signal_pane_g1_ParamLimits

0xb13c,	// (0x000522fc) signal_pane_g1

0xb157,	// (0x00052317) signal_pane_g2_ParamLimits

0xb157,	// (0x00052317) signal_pane_g2

0x0003,

0xf6e8,	// (0x000568a8) signal_pane_g_ParamLimits

0xf6e8,	// (0x000568a8) signal_pane_g

0x2667,	// (0x00049827) context_pane_g1

0xa41f,	// (0x000515df) title_pane_g1

0xa46e,	// (0x0005162e) title_pane_t1

0xa4fa,	// (0x000516ba) title_pane_t2

0xa520,	// (0x000516e0) title_pane_t3

0x0002,

0xf532,	// (0x000566f2) title_pane_t

0xc8cc,	// (0x00053a8c) aid_levels_battery_ParamLimits

0xc8cc,	// (0x00053a8c) aid_levels_battery

0xc8e8,	// (0x00053aa8) battery_pane_g1_ParamLimits

0xc8e8,	// (0x00053aa8) battery_pane_g1

0xc905,	// (0x00053ac5) battery_pane_g2_ParamLimits

0xc905,	// (0x00053ac5) battery_pane_g2

0x0001,

0xf78b,	// (0x0005694b) battery_pane_g_ParamLimits

0xf78b,	// (0x0005694b) battery_pane_g

0xcb06,	// (0x00053cc6) uni_indicator_pane_g1

0xcb1c,	// (0x00053cdc) uni_indicator_pane_g2

0xcb32,	// (0x00053cf2) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x00056abc) uni_indicator_pane_g

0x2a02,	// (0x00049bc2) navi_icon_pane_ParamLimits

0x2a02,	// (0x00049bc2) navi_icon_pane

0x294a,	// (0x00049b0a) navi_midp_pane

0x2a1e,	// (0x00049bde) navi_navi_pane

0x2a28,	// (0x00049be8) navi_text_pane_ParamLimits

0x2a28,	// (0x00049be8) navi_text_pane

0xa1f7,	// (0x000513b7) status_small_wait_pane_g1

0xaa25,	// (0x00051be5) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x00056ab7) status_small_wait_pane_g

0xcaa5,	// (0x00053c65) navi_navi_icon_text_pane

0xcaad,	// (0x00053c6d) navi_navi_pane_g1_ParamLimits

0xcaad,	// (0x00053c6d) navi_navi_pane_g1

0xcabf,	// (0x00053c7f) navi_navi_pane_g2_ParamLimits

0xcabf,	// (0x00053c7f) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x00056a85) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x00056a85) navi_navi_pane_g

0x42ba,	// (0x0004b47a) navi_navi_tabs_pane

0xcad1,	// (0x00053c91) navi_navi_text_pane

0xcaa5,	// (0x00053c65) navi_navi_volume_pane

0xca93,	// (0x00053c53) navi_text_pane_t1

0xca87,	// (0x00053c47) navi_icon_pane_g1

0x41b1,	// (0x0004b371) navi_navi_text_pane_t1

0xbfe6,	// (0x000531a6) navi_navi_volume_pane_g1

0xbfee,	// (0x000531ae) volume_small_pane

0xc9e3,	// (0x00053ba3) navi_navi_icon_text_pane_g1

0xc9eb,	// (0x00053bab) navi_navi_icon_text_pane_t1

0x2a1e,	// (0x00049bde) navi_tabs_2_long_pane

0x2a1e,	// (0x00049bde) navi_tabs_2_pane

0x2a1e,	// (0x00049bde) navi_tabs_3_long_pane

0x2a1e,	// (0x00049bde) navi_tabs_3_pane

0x2a1e,	// (0x00049bde) navi_tabs_4_pane

0xbfc6,	// (0x00053186) tabs_2_active_pane_ParamLimits

0xbfc6,	// (0x00053186) tabs_2_active_pane

0xbfd6,	// (0x00053196) tabs_2_passive_pane_ParamLimits

0xbfd6,	// (0x00053196) tabs_2_passive_pane

0xbf94,	// (0x00053154) tabs_3_active_pane_ParamLimits

0xbf94,	// (0x00053154) tabs_3_active_pane

0xbfa4,	// (0x00053164) tabs_3_passive_pane_ParamLimits

0xbfa4,	// (0x00053164) tabs_3_passive_pane

0xbfb5,	// (0x00053175) tabs_3_passive_pane_cp_ParamLimits

0xbfb5,	// (0x00053175) tabs_3_passive_pane_cp

0xbf50,	// (0x00053110) tabs_4_active_pane_ParamLimits

0xbf50,	// (0x00053110) tabs_4_active_pane

0xbf61,	// (0x00053121) tabs_4_passive_pane_ParamLimits

0xbf61,	// (0x00053121) tabs_4_passive_pane

0xbf72,	// (0x00053132) tabs_4_passive_pane_cp_ParamLimits

0xbf72,	// (0x00053132) tabs_4_passive_pane_cp

0xbf83,	// (0x00053143) tabs_4_passive_pane_cp2_ParamLimits

0xbf83,	// (0x00053143) tabs_4_passive_pane_cp2

0xbf2c,	// (0x000530ec) tabs_2_long_active_pane_ParamLimits

0xbf2c,	// (0x000530ec) tabs_2_long_active_pane

0xbf3e,	// (0x000530fe) tabs_2_long_passive_pane_ParamLimits

0xbf3e,	// (0x000530fe) tabs_2_long_passive_pane

0xbee1,	// (0x000530a1) tabs_3_long_active_pane_ParamLimits

0xbee1,	// (0x000530a1) tabs_3_long_active_pane

0xbefa,	// (0x000530ba) tabs_3_long_passive_pane_ParamLimits

0xbefa,	// (0x000530ba) tabs_3_long_passive_pane

0xbf13,	// (0x000530d3) tabs_3_long_passive_pane_cp_ParamLimits

0xbf13,	// (0x000530d3) tabs_3_long_passive_pane_cp

0x1065,	// (0x00048225) volume_small_pane_g1

0xbe90,	// (0x00053050) volume_small_pane_g2

0xbe99,	// (0x00053059) volume_small_pane_g3

0xbea2,	// (0x00053062) volume_small_pane_g4

0xbeab,	// (0x0005306b) volume_small_pane_g5

0xbeb4,	// (0x00053074) volume_small_pane_g6

0xbebd,	// (0x0005307d) volume_small_pane_g7

0xbec6,	// (0x00053086) volume_small_pane_g8

0xbecf,	// (0x0005308f) volume_small_pane_g9

0xbed8,	// (0x00053098) volume_small_pane_g10

0x0009,

0xf891,	// (0x00056a51) volume_small_pane_g

0xa532,	// (0x000516f2) bg_active_tab_pane_cp2_ParamLimits

0xa532,	// (0x000516f2) bg_active_tab_pane_cp2

0xa540,	// (0x00051700) tabs_3_active_pane_g1

0xa548,	// (0x00051708) tabs_3_active_pane_t1

0xa532,	// (0x000516f2) bg_passive_tab_pane_cp2_ParamLimits

0xa532,	// (0x000516f2) bg_passive_tab_pane_cp2

0xa540,	// (0x00051700) tabs_3_passive_pane_g1

0xa548,	// (0x00051708) tabs_3_passive_pane_t1

0xa532,	// (0x000516f2) bg_active_tab_pane_cp3_ParamLimits

0xa532,	// (0x000516f2) bg_active_tab_pane_cp3

0xa55a,	// (0x0005171a) tabs_4_active_pane_g1

0xa562,	// (0x00051722) tabs_4_active_pane_t1

0xa532,	// (0x000516f2) bg_passive_tab_pane_cp3_ParamLimits

0xa532,	// (0x000516f2) bg_passive_tab_pane_cp3

0xa55a,	// (0x0005171a) tabs_4_1_passive_pane_g1

0xa562,	// (0x00051722) tabs_4_1_passive_pane_t1

0x2ebb,	// (0x0004a07b) list_highlight_pane_cp2

0xcbc5,	// (0x00053d85) list_set_pane_ParamLimits

0xcbc5,	// (0x00053d85) list_set_pane

0xcc87,	// (0x00053e47) main_pane_set_t1_ParamLimits

0xcc87,	// (0x00053e47) main_pane_set_t1

0xcca7,	// (0x00053e67) main_pane_set_t2_ParamLimits

0xcca7,	// (0x00053e67) main_pane_set_t2

0xccbb,	// (0x00053e7b) main_pane_set_t3_ParamLimits

0xccbb,	// (0x00053e7b) main_pane_set_t3

0xcccf,	// (0x00053e8f) main_pane_set_t4_ParamLimits

0xcccf,	// (0x00053e8f) main_pane_set_t4

0x0003,

0xf961,	// (0x00056b21) main_pane_set_t_ParamLimits

0xf961,	// (0x00056b21) main_pane_set_t

0xcce3,	// (0x00053ea3) setting_code_pane

0x491c,	// (0x0004badc) setting_slider_graphic_pane

0x491c,	// (0x0004badc) setting_slider_pane

0x491c,	// (0x0004badc) setting_text_pane

0x491c,	// (0x0004badc) setting_volume_pane

0xf496,	// (0x00056656) volume_set_pane

0xa574,	// (0x00051734) bg_set_opt_pane_cp

0xf4a0,	// (0x00056660) setting_slider_pane_t1

0xf4b9,	// (0x00056679) setting_slider_pane_t2

0xf4d3,	// (0x00056693) setting_slider_pane_t3

0x0002,

0xf539,	// (0x000566f9) setting_slider_pane_t

0xf4eb,	// (0x000566ab) slider_set_pane

0xa2e7,	// (0x000514a7) bg_set_opt_pane_cp2

0xa582,	// (0x00051742) setting_slider_graphic_pane_g1

0xf501,	// (0x000566c1) setting_slider_graphic_pane_t1

0xf511,	// (0x000566d1) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00056700) setting_slider_graphic_pane_t

0xf521,	// (0x000566e1) slider_set_pane_cp

0xa2e7,	// (0x000514a7) input_focus_pane_cp1

0x47b5,	// (0x0004b975) list_set_text_pane

0xa1f7,	// (0x000513b7) setting_text_pane_g1

0xa2e7,	// (0x000514a7) input_focus_pane_cp2

0xa1f7,	// (0x000513b7) setting_code_pane_g1

0xa58b,	// (0x0005174b) setting_code_pane_t1

0xe3d1,	// (0x00055591) set_text_pane_t1_ParamLimits

0xe3d1,	// (0x00055591) set_text_pane_t1

0xaedd,	// (0x0005209d) set_opt_bg_pane_g1

0xaee5,	// (0x000520a5) set_opt_bg_pane_g2

0x478d,	// (0x0004b94d) set_opt_bg_pane_g3

0xaef5,	// (0x000520b5) set_opt_bg_pane_g4

0xaefd,	// (0x000520bd) set_opt_bg_pane_g5

0xaf05,	// (0x000520c5) set_opt_bg_pane_g6

0x4797,	// (0x0004b957) set_opt_bg_pane_g7

0x47a1,	// (0x0004b961) set_opt_bg_pane_g8

0x47ab,	// (0x0004b96b) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x00056b0e) set_opt_bg_pane_g

0x4780,	// (0x0004b940) slider_set_pane_g1

0x1249,	// (0x00048409) slider_set_pane_g2

0x0006,

0xf93f,	// (0x00056aff) slider_set_pane_g

0x11d1,	// (0x00048391) volume_set_pane_g1

0x11db,	// (0x0004839b) volume_set_pane_g2

0x11e5,	// (0x000483a5) volume_set_pane_g3

0x11ef,	// (0x000483af) volume_set_pane_g4

0x11f9,	// (0x000483b9) volume_set_pane_g5

0x1203,	// (0x000483c3) volume_set_pane_g6

0x120d,	// (0x000483cd) volume_set_pane_g7

0x1217,	// (0x000483d7) volume_set_pane_g8

0x1221,	// (0x000483e1) volume_set_pane_g9

0x122b,	// (0x000483eb) volume_set_pane_g10

0x0009,

0xf917,	// (0x00056ad7) volume_set_pane_g

0xa599,	// (0x00051759) indicator_pane_ParamLimits

0xa599,	// (0x00051759) indicator_pane

0xa5c5,	// (0x00051785) main_idle_pane_g2_ParamLimits

0xa5c5,	// (0x00051785) main_idle_pane_g2

0xa5fd,	// (0x000517bd) main_pane_idle_g1_ParamLimits

0xa5fd,	// (0x000517bd) main_pane_idle_g1

0xa627,	// (0x000517e7) popup_clock_digital_analogue_window_ParamLimits

0xa627,	// (0x000517e7) popup_clock_digital_analogue_window

0xa63e,	// (0x000517fe) soft_indicator_pane_ParamLimits

0xa63e,	// (0x000517fe) soft_indicator_pane

0xa65a,	// (0x0005181a) wallpaper_pane_ParamLimits

0xa65a,	// (0x0005181a) wallpaper_pane

0xa1f7,	// (0x000513b7) wallpaper_pane_g1

0xa674,	// (0x00051834) indicator_pane_g1_ParamLimits

0xa674,	// (0x00051834) indicator_pane_g1

0x4ba9,	// (0x0004bd69) navi_navi_icon_text_pane_srt_g1

0xa69c,	// (0x0005185c) soft_indicator_pane_t1

0xa6b6,	// (0x00051876) aid_ps_area_pane

0xa6c7,	// (0x00051887) aid_ps_clock_pane

0xa6d5,	// (0x00051895) aid_ps_indicator_pane

0xa6e1,	// (0x000518a1) indicator_ps_pane_ParamLimits

0xa6e1,	// (0x000518a1) indicator_ps_pane

0xa6f0,	// (0x000518b0) power_save_pane_g1_ParamLimits

0xa6f0,	// (0x000518b0) power_save_pane_g1

0xa6fc,	// (0x000518bc) power_save_pane_g2_ParamLimits

0xa6fc,	// (0x000518bc) power_save_pane_g2

0xf1d3,	// (0x00056393) aid_navinavi_width_pane

0xa6b6,	// (0x00051876) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00056705) power_save_pane_g_ParamLimits

0xf545,	// (0x00056705) power_save_pane_g

0xa70a,	// (0x000518ca) power_save_pane_t1_ParamLimits

0xa70a,	// (0x000518ca) power_save_pane_t1

0xa6c7,	// (0x00051887) aid_ps_clock_pane_ParamLimits

0xa6d5,	// (0x00051895) aid_ps_indicator_pane_ParamLimits

0xa71c,	// (0x000518dc) power_save_pane_t4_ParamLimits

0xa71c,	// (0x000518dc) power_save_pane_t4

0x0001,

0xf54a,	// (0x0005670a) power_save_pane_t_ParamLimits

0xf54a,	// (0x0005670a) power_save_pane_t

0xa746,	// (0x00051906) power_save_t3_ParamLimits

0xa746,	// (0x00051906) power_save_t3

0xa731,	// (0x000518f1) power_save_t2_ParamLimits

0xa731,	// (0x000518f1) power_save_t2

0xa75b,	// (0x0005191b) indicator_ps_pane_g1

0xa764,	// (0x00051924) ai_gene_pane_ParamLimits

0xa764,	// (0x00051924) ai_gene_pane

0xa77b,	// (0x0005193b) ai_links_pane_ParamLimits

0xa77b,	// (0x0005193b) ai_links_pane

0xa793,	// (0x00051953) indicator_pane_cp1_ParamLimits

0xa793,	// (0x00051953) indicator_pane_cp1

0xa7a2,	// (0x00051962) main_pane_idle_g1_cp_ParamLimits

0xa7a2,	// (0x00051962) main_pane_idle_g1_cp

0xa7ba,	// (0x0005197a) popup_ai_links_title_window

0xa7c3,	// (0x00051983) soft_indicator_pane_cp1_ParamLimits

0xa7c3,	// (0x00051983) soft_indicator_pane_cp1

0x4569,	// (0x0004b729) ai_links_pane_g1

0x4572,	// (0x0004b732) grid_ai_links_pane

0xcafd,	// (0x00053cbd) ai_gene_pane_1

0x4557,	// (0x0004b717) ai_gene_pane_2

0x4560,	// (0x0004b720) list_highlight_pane_cp4

0xcad9,	// (0x00053c99) cell_ai_link_pane_ParamLimits

0xcad9,	// (0x00053c99) cell_ai_link_pane

0x4526,	// (0x0004b6e6) cell_ai_link_pane_g1

0xaa25,	// (0x00051be5) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x00056ab2) cell_ai_link_pane_g

0xa2e7,	// (0x000514a7) grid_highlight_cp2

0xa2e7,	// (0x000514a7) bg_popup_sub_pane_cp1

0xa7e5,	// (0x000519a5) popup_ai_links_title_window_t1

0x4472,	// (0x0004b632) ai_gene_pane_1_g1_ParamLimits

0x4472,	// (0x0004b632) ai_gene_pane_1_g1

0x447e,	// (0x0004b63e) ai_gene_pane_1_g2_ParamLimits

0x447e,	// (0x0004b63e) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x00056aa8) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x00056aa8) ai_gene_pane_1_g

0x448b,	// (0x0004b64b) ai_gene_pane_1_t1_ParamLimits

0x448b,	// (0x0004b64b) ai_gene_pane_1_t1

0x44bf,	// (0x0004b67f) grid_ai_soft_ind_pane

0x445d,	// (0x0004b61d) ai_gene_pane_2_t1_ParamLimits

0x445d,	// (0x0004b61d) ai_gene_pane_2_t1

0xa7f4,	// (0x000519b4) main_pane_empty_t1_ParamLimits

0xa7f4,	// (0x000519b4) main_pane_empty_t1

0xa80c,	// (0x000519cc) main_pane_empty_t2_ParamLimits

0xa80c,	// (0x000519cc) main_pane_empty_t2

0xa821,	// (0x000519e1) main_pane_empty_t3_ParamLimits

0xa821,	// (0x000519e1) main_pane_empty_t3

0xa833,	// (0x000519f3) main_pane_empty_t4_ParamLimits

0xa833,	// (0x000519f3) main_pane_empty_t4

0xa845,	// (0x00051a05) main_pane_empty_t5_ParamLimits

0xa845,	// (0x00051a05) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0005670f) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0005670f) main_pane_empty_t

0xe45b,	// (0x0005561b) bg_popup_window_pane_ParamLimits

0xe45b,	// (0x0005561b) bg_popup_window_pane

0x41bf,	// (0x0004b37f) find_popup_pane_cp2_ParamLimits

0x41bf,	// (0x0004b37f) find_popup_pane_cp2

0x41cb,	// (0x0004b38b) heading_pane_ParamLimits

0x41cb,	// (0x0004b38b) heading_pane

0xa2e7,	// (0x000514a7) bg_popup_sub_pane

0xca08,	// (0x00053bc8) bg_popup_window_pane_g1_ParamLimits

0xca08,	// (0x00053bc8) bg_popup_window_pane_g1

0xca17,	// (0x00053bd7) bg_popup_window_pane_g2_ParamLimits

0xca17,	// (0x00053bd7) bg_popup_window_pane_g2

0xca23,	// (0x00053be3) bg_popup_window_pane_g3_ParamLimits

0xca23,	// (0x00053be3) bg_popup_window_pane_g3

0xca2f,	// (0x00053bef) bg_popup_window_pane_g4_ParamLimits

0xca2f,	// (0x00053bef) bg_popup_window_pane_g4

0xca3e,	// (0x00053bfe) bg_popup_window_pane_g5_ParamLimits

0xca3e,	// (0x00053bfe) bg_popup_window_pane_g5

0xca4e,	// (0x00053c0e) bg_popup_window_pane_g6_ParamLimits

0xca4e,	// (0x00053c0e) bg_popup_window_pane_g6

0xca5a,	// (0x00053c1a) bg_popup_window_pane_g7_ParamLimits

0xca5a,	// (0x00053c1a) bg_popup_window_pane_g7

0xca69,	// (0x00053c29) bg_popup_window_pane_g8_ParamLimits

0xca69,	// (0x00053c29) bg_popup_window_pane_g8

0xca78,	// (0x00053c38) bg_popup_window_pane_g9_ParamLimits

0xca78,	// (0x00053c38) bg_popup_window_pane_g9

0x41a5,	// (0x0004b365) bg_popup_window_pane_g10_ParamLimits

0x41a5,	// (0x0004b365) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x00056a70) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x00056a70) bg_popup_window_pane_g

0x40ce,	// (0x0004b28e) bg_popup_heading_pane_ParamLimits

0x40ce,	// (0x0004b28e) bg_popup_heading_pane

0x1362,	// (0x00048522) tabs_4_passive_pane_cp_srt_ParamLimits

0x1362,	// (0x00048522) tabs_4_passive_pane_cp_srt

0x1374,	// (0x00048534) tabs_4_passive_pane_srt_ParamLimits

0x40e2,	// (0x0004b2a2) heading_pane_g2

0x1374,	// (0x00048534) tabs_4_passive_pane_srt

0x3465,	// (0x0004a625) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3465,	// (0x0004a625) bg_passive_tab_pane_cp3_srt

0x40ea,	// (0x0004b2aa) heading_pane_t1_ParamLimits

0x40ea,	// (0x0004b2aa) heading_pane_t1

0x4101,	// (0x0004b2c1) heading_pane_t2_ParamLimits

0x4101,	// (0x0004b2c1) heading_pane_t2

0x0001,

0xf8ab,	// (0x00056a6b) heading_pane_t_ParamLimits

0xf8ab,	// (0x00056a6b) heading_pane_t

0x3bf9,	// (0x0004adb9) bg_popup_heading_pane_g1

0x3ca8,	// (0x0004ae68) bg_popup_heading_pane_g2

0x3cb2,	// (0x0004ae72) bg_popup_heading_pane_g3

0x3cbc,	// (0x0004ae7c) bg_popup_heading_pane_g4

0x3cc6,	// (0x0004ae86) bg_popup_heading_pane_g5

0x3cd0,	// (0x0004ae90) bg_popup_heading_pane_g6

0x3cd8,	// (0x0004ae98) bg_popup_heading_pane_g7

0x3ce0,	// (0x0004aea0) bg_popup_heading_pane_g8

0x3cea,	// (0x0004aeaa) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x00056a27) bg_popup_heading_pane_g

0x33f1,	// (0x0004a5b1) bg_popup_sub_pane_g1

0x33f9,	// (0x0004a5b9) bg_popup_sub_pane_g2

0x3401,	// (0x0004a5c1) bg_popup_sub_pane_g3

0x3409,	// (0x0004a5c9) bg_popup_sub_pane_g4

0x3411,	// (0x0004a5d1) bg_popup_sub_pane_g5

0x3419,	// (0x0004a5d9) bg_popup_sub_pane_g6

0x3421,	// (0x0004a5e1) bg_popup_sub_pane_g7

0x3429,	// (0x0004a5e9) bg_popup_sub_pane_g8

0x3431,	// (0x0004a5f1) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x00056a01) bg_popup_sub_pane_g

0xa532,	// (0x000516f2) bg_popup_window_pane_cp5_ParamLimits

0xa532,	// (0x000516f2) bg_popup_window_pane_cp5

0xa865,	// (0x00051a25) popup_note_window_g1_ParamLimits

0xa865,	// (0x00051a25) popup_note_window_g1

0xa871,	// (0x00051a31) popup_note_window_t1_ParamLimits

0xa871,	// (0x00051a31) popup_note_window_t1

0xa887,	// (0x00051a47) popup_note_window_t2_ParamLimits

0xa887,	// (0x00051a47) popup_note_window_t2

0xa89d,	// (0x00051a5d) popup_note_window_t3_ParamLimits

0xa89d,	// (0x00051a5d) popup_note_window_t3

0xa8b3,	// (0x00051a73) popup_note_window_t4_ParamLimits

0xa8b3,	// (0x00051a73) popup_note_window_t4

0xa8db,	// (0x00051a9b) popup_note_window_t5_ParamLimits

0xa8db,	// (0x00051a9b) popup_note_window_t5

0x0004,

0xf55a,	// (0x0005671a) popup_note_window_t_ParamLimits

0xf55a,	// (0x0005671a) popup_note_window_t

0xa925,	// (0x00051ae5) bg_popup_window_pane_cp6_ParamLimits

0xa925,	// (0x00051ae5) bg_popup_window_pane_cp6

0x3b75,	// (0x0004ad35) popup_note_image_window_g1_ParamLimits

0x3b75,	// (0x0004ad35) popup_note_image_window_g1

0x3b81,	// (0x0004ad41) popup_note_image_window_g2_ParamLimits

0x3b81,	// (0x0004ad41) popup_note_image_window_g2

0x0001,

0xf835,	// (0x000569f5) popup_note_image_window_g_ParamLimits

0xf835,	// (0x000569f5) popup_note_image_window_g

0x3b9a,	// (0x0004ad5a) popup_note_image_window_t1_ParamLimits

0x3b9a,	// (0x0004ad5a) popup_note_image_window_t1

0x3bb3,	// (0x0004ad73) popup_note_image_window_t2_ParamLimits

0x3bb3,	// (0x0004ad73) popup_note_image_window_t2

0x3bcc,	// (0x0004ad8c) popup_note_image_window_t3_ParamLimits

0x3bcc,	// (0x0004ad8c) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x000569fa) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x000569fa) popup_note_image_window_t

0x3a35,	// (0x0004abf5) bg_popup_window_pane_cp7_ParamLimits

0x3a35,	// (0x0004abf5) bg_popup_window_pane_cp7

0x3a65,	// (0x0004ac25) popup_note_wait_window_g1_ParamLimits

0x3a65,	// (0x0004ac25) popup_note_wait_window_g1

0x3a71,	// (0x0004ac31) popup_note_wait_window_g2_ParamLimits

0x3a71,	// (0x0004ac31) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x000569e3) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x000569e3) popup_note_wait_window_g

0x3a89,	// (0x0004ac49) popup_note_wait_window_t1_ParamLimits

0x3a89,	// (0x0004ac49) popup_note_wait_window_t1

0x3ab0,	// (0x0004ac70) popup_note_wait_window_t2_ParamLimits

0x3ab0,	// (0x0004ac70) popup_note_wait_window_t2

0x3ace,	// (0x0004ac8e) popup_note_wait_window_t3_ParamLimits

0x3ace,	// (0x0004ac8e) popup_note_wait_window_t3

0x3ae1,	// (0x0004aca1) popup_note_wait_window_t4_ParamLimits

0x3ae1,	// (0x0004aca1) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x000569ea) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x000569ea) popup_note_wait_window_t

0x3b06,	// (0x0004acc6) wait_bar_pane_ParamLimits

0x3b06,	// (0x0004acc6) wait_bar_pane

0xa2e7,	// (0x000514a7) wait_anim_pane

0xa2e7,	// (0x000514a7) wait_border_pane

0xa1f7,	// (0x000513b7) wait_anim_pane_g1

0xa1f7,	// (0x000513b7) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x000568a3) wait_anim_pane_g

0x39d9,	// (0x0004ab99) wait_border_pane_g1

0x39e4,	// (0x0004aba4) wait_border_pane_g2

0x39ed,	// (0x0004abad) wait_border_pane_g3

0x0002,

0xf81c,	// (0x000569dc) wait_border_pane_g

0x3843,	// (0x0004aa03) bg_popup_window_pane_cp16_ParamLimits

0x3843,	// (0x0004aa03) bg_popup_window_pane_cp16

0x3943,	// (0x0004ab03) indicator_popup_pane_cp4_ParamLimits

0x3943,	// (0x0004ab03) indicator_popup_pane_cp4

0x3957,	// (0x0004ab17) popup_query_data_window_t1_ParamLimits

0x3957,	// (0x0004ab17) popup_query_data_window_t1

0x3969,	// (0x0004ab29) popup_query_data_window_t2_ParamLimits

0x3969,	// (0x0004ab29) popup_query_data_window_t2

0x3982,	// (0x0004ab42) popup_query_data_window_t3_ParamLimits

0x3982,	// (0x0004ab42) popup_query_data_window_t3

0x0002,

0xf815,	// (0x000569d5) popup_query_data_window_t_ParamLimits

0xf815,	// (0x000569d5) popup_query_data_window_t

0x399c,	// (0x0004ab5c) query_popup_data_pane_ParamLimits

0x399c,	// (0x0004ab5c) query_popup_data_pane

0x39b0,	// (0x0004ab70) query_popup_data_pane_cp1_ParamLimits

0x39b0,	// (0x0004ab70) query_popup_data_pane_cp1

0x3843,	// (0x0004aa03) bg_popup_window_pane_cp10_ParamLimits

0x3843,	// (0x0004aa03) bg_popup_window_pane_cp10

0x3875,	// (0x0004aa35) indicator_popup_pane_ParamLimits

0x3875,	// (0x0004aa35) indicator_popup_pane

0x3897,	// (0x0004aa57) popup_query_code_window_t1_ParamLimits

0x3897,	// (0x0004aa57) popup_query_code_window_t1

0x38b1,	// (0x0004aa71) popup_query_code_window_t2_ParamLimits

0x38b1,	// (0x0004aa71) popup_query_code_window_t2

0x38fa,	// (0x0004aaba) popup_query_code_window_t3_ParamLimits

0x38fa,	// (0x0004aaba) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x000569ce) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x000569ce) popup_query_code_window_t

0x3929,	// (0x0004aae9) query_popup_pane_ParamLimits

0x3929,	// (0x0004aae9) query_popup_pane

0xa925,	// (0x00051ae5) bg_popup_window_pane_cp15_ParamLimits

0xa925,	// (0x00051ae5) bg_popup_window_pane_cp15

0xa945,	// (0x00051b05) indicator_popup_pane_cp1_ParamLimits

0xa945,	// (0x00051b05) indicator_popup_pane_cp1

0xa958,	// (0x00051b18) indicator_popup_pane_cp2_ParamLimits

0xa958,	// (0x00051b18) indicator_popup_pane_cp2

0xa973,	// (0x00051b33) popup_query_data_code_window_g1_ParamLimits

0xa973,	// (0x00051b33) popup_query_data_code_window_g1

0xa986,	// (0x00051b46) popup_query_data_code_window_t1_ParamLimits

0xa986,	// (0x00051b46) popup_query_data_code_window_t1

0xa998,	// (0x00051b58) popup_query_data_code_window_t2_ParamLimits

0xa998,	// (0x00051b58) popup_query_data_code_window_t2

0xa9aa,	// (0x00051b6a) popup_query_data_code_window_t3_ParamLimits

0xa9aa,	// (0x00051b6a) popup_query_data_code_window_t3

0xa9c0,	// (0x00051b80) popup_query_data_code_window_t4_ParamLimits

0xa9c0,	// (0x00051b80) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00056725) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00056725) popup_query_data_code_window_t

0x29be,	// (0x00049b7e) list_single_midp_graphic_pane_g3

0xa9da,	// (0x00051b9a) query_popup_data_pane_cp2_ParamLimits

0xa9ed,	// (0x00051bad) query_popup_pane_cp2_ParamLimits

0xa9ed,	// (0x00051bad) query_popup_pane_cp2

0xa2e7,	// (0x000514a7) bg_popup_window_pane_cp11

0x3827,	// (0x0004a9e7) heading_pane_cp5

0x382f,	// (0x0004a9ef) listscroll_popup_info_pane

0xa2e7,	// (0x000514a7) input_focus_pane_cp3

0xaa08,	// (0x00051bc8) query_popup_pane_t1

0xaa16,	// (0x00051bd6) list_popup_info_pane_ParamLimits

0xaa16,	// (0x00051bd6) list_popup_info_pane

0xaa25,	// (0x00051be5) listscroll_popup_info_pane_g1

0xaa2d,	// (0x00051bed) scroll_pane_cp7

0xaa37,	// (0x00051bf7) popup_info_list_pane_t1_ParamLimits

0xaa37,	// (0x00051bf7) popup_info_list_pane_t1

0xaa51,	// (0x00051c11) popup_info_list_pane_t2_ParamLimits

0xaa51,	// (0x00051c11) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0005672e) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0005672e) popup_info_list_pane_t

0xa2e7,	// (0x000514a7) bg_popup_window_pane_cp12

0x4bc3,	// (0x0004bd83) find_popup_pane

0xa574,	// (0x00051734) bg_popup_window_pane_cp3

0xaa6b,	// (0x00051c2b) heading_pane_cp3

0xaa7a,	// (0x00051c3a) listscroll_popup_graphic_pane

0xa2e7,	// (0x000514a7) bg_popup_window_pane_cp4

0xaada,	// (0x00051c9a) heading_pane_cp4

0xaae4,	// (0x00051ca4) listscroll_popup_colour_pane

0xaaec,	// (0x00051cac) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xaaec,	// (0x00051cac) cell_large_graphic_colour_none_popup_pane

0xab00,	// (0x00051cc0) grid_large_graphic_colour_popup_pane_ParamLimits

0xab00,	// (0x00051cc0) grid_large_graphic_colour_popup_pane

0xab24,	// (0x00051ce4) listscroll_popup_colour_pane_g1_ParamLimits

0xab24,	// (0x00051ce4) listscroll_popup_colour_pane_g1

0xab3b,	// (0x00051cfb) listscroll_popup_colour_pane_g2_ParamLimits

0xab3b,	// (0x00051cfb) listscroll_popup_colour_pane_g2

0xab52,	// (0x00051d12) listscroll_popup_colour_pane_g3_ParamLimits

0xab52,	// (0x00051d12) listscroll_popup_colour_pane_g3

0xab62,	// (0x00051d22) listscroll_popup_colour_pane_g4_ParamLimits

0xab62,	// (0x00051d22) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00056733) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00056733) listscroll_popup_colour_pane_g

0xab72,	// (0x00051d32) scroll_pane_cp6_ParamLimits

0xab72,	// (0x00051d32) scroll_pane_cp6

0xab84,	// (0x00051d44) cell_large_graphic_colour_popup_pane_ParamLimits

0xab84,	// (0x00051d44) cell_large_graphic_colour_popup_pane

0xaba5,	// (0x00051d65) cell_large_graphic_colour_none_popup_pane_t1

0xa2e7,	// (0x000514a7) grid_highlight_pane_cp5

0xabb4,	// (0x00051d74) cell_large_graphic_colour_popup_pane_g1

0xabbc,	// (0x00051d7c) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0005673c) cell_large_graphic_colour_popup_pane_g

0xabc4,	// (0x00051d84) cell_large_graphic_colour_popup_pane_g2_copy1

0xabcd,	// (0x00051d8d) grid_highlight_pane_cp4

0xabd5,	// (0x00051d95) bg_popup_window_pane_cp8_ParamLimits

0xabd5,	// (0x00051d95) bg_popup_window_pane_cp8

0xabf0,	// (0x00051db0) popup_snote_single_text_window_g1_ParamLimits

0xabf0,	// (0x00051db0) popup_snote_single_text_window_g1

0xac02,	// (0x00051dc2) popup_snote_single_text_window_t1_ParamLimits

0xac02,	// (0x00051dc2) popup_snote_single_text_window_t1

0xac15,	// (0x00051dd5) popup_snote_single_text_window_t2_ParamLimits

0xac15,	// (0x00051dd5) popup_snote_single_text_window_t2

0xac28,	// (0x00051de8) popup_snote_single_text_window_t3_ParamLimits

0xac28,	// (0x00051de8) popup_snote_single_text_window_t3

0xac61,	// (0x00051e21) popup_snote_single_text_window_t4_ParamLimits

0xac61,	// (0x00051e21) popup_snote_single_text_window_t4

0xac95,	// (0x00051e55) popup_snote_single_text_window_t5_ParamLimits

0xac95,	// (0x00051e55) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00056741) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00056741) popup_snote_single_text_window_t

0xacc4,	// (0x00051e84) bg_popup_window_pane_cp9_ParamLimits

0xacc4,	// (0x00051e84) bg_popup_window_pane_cp9

0xabf0,	// (0x00051db0) popup_snote_single_graphic_window_g1_ParamLimits

0xabf0,	// (0x00051db0) popup_snote_single_graphic_window_g1

0xacd2,	// (0x00051e92) popup_snote_single_graphic_window_g2_ParamLimits

0xacd2,	// (0x00051e92) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0005674c) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0005674c) popup_snote_single_graphic_window_g

0xacde,	// (0x00051e9e) popup_snote_single_graphic_window_t1_ParamLimits

0xacde,	// (0x00051e9e) popup_snote_single_graphic_window_t1

0xacf1,	// (0x00051eb1) popup_snote_single_graphic_window_t2_ParamLimits

0xacf1,	// (0x00051eb1) popup_snote_single_graphic_window_t2

0xad04,	// (0x00051ec4) popup_snote_single_graphic_window_t3_ParamLimits

0xad04,	// (0x00051ec4) popup_snote_single_graphic_window_t3

0xad3d,	// (0x00051efd) popup_snote_single_graphic_window_t4_ParamLimits

0xad3d,	// (0x00051efd) popup_snote_single_graphic_window_t4

0xad71,	// (0x00051f31) popup_snote_single_graphic_window_t5_ParamLimits

0xad71,	// (0x00051f31) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00056751) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00056751) popup_snote_single_graphic_window_t

0x4b01,	// (0x0004bcc1) grid_graphic_popup_pane_ParamLimits

0x4b01,	// (0x0004bcc1) grid_graphic_popup_pane

0x4b2f,	// (0x0004bcef) listscroll_popup_graphic_pane_g1_ParamLimits

0x4b2f,	// (0x0004bcef) listscroll_popup_graphic_pane_g1

0xcdef,	// (0x00053faf) listscroll_popup_graphic_pane_g2_ParamLimits

0xcdef,	// (0x00053faf) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x00056b4b) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x00056b4b) listscroll_popup_graphic_pane_g

0x4b57,	// (0x0004bd17) scroll_pane_cp5

0xcda7,	// (0x00053f67) cell_graphic_popup_pane_ParamLimits

0xcda7,	// (0x00053f67) cell_graphic_popup_pane

0x4a7a,	// (0x0004bc3a) cell_graphic_popup_pane_g1

0x4a82,	// (0x0004bc42) cell_graphic_popup_pane_g2

0xabc4,	// (0x00051d84) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x00056b44) cell_graphic_popup_pane_g

0x4a8b,	// (0x0004bc4b) cell_graphic_popup_pane_t2

0xabcd,	// (0x00051d8d) grid_highlight_pane_cp3

0xadb2,	// (0x00051f72) list_gen_pane_ParamLimits

0xadb2,	// (0x00051f72) list_gen_pane

0xade4,	// (0x00051fa4) scroll_pane

0xcd5e,	// (0x00053f1e) bg_list_pane_g1_ParamLimits

0xcd5e,	// (0x00053f1e) bg_list_pane_g1

0x49ef,	// (0x0004bbaf) bg_list_pane_g2_ParamLimits

0x49ef,	// (0x0004bbaf) bg_list_pane_g2

0x4a04,	// (0x0004bbc4) bg_list_pane_g3_ParamLimits

0x4a04,	// (0x0004bbc4) bg_list_pane_g3

0x4a18,	// (0x0004bbd8) bg_list_pane_g4_ParamLimits

0x4a18,	// (0x0004bbd8) bg_list_pane_g4

0xcd7b,	// (0x00053f3b) bg_list_pane_g5_ParamLimits

0xcd7b,	// (0x00053f3b) bg_list_pane_g5

0x0004,

0xf979,	// (0x00056b39) bg_list_pane_g_ParamLimits

0xf979,	// (0x00056b39) bg_list_pane_g

0xbff7,	// (0x000531b7) list_double2_graphic_large_graphic_pane_ParamLimits

0xbff7,	// (0x000531b7) list_double2_graphic_large_graphic_pane

0xbff7,	// (0x000531b7) list_double2_graphic_pane_ParamLimits

0xbff7,	// (0x000531b7) list_double2_graphic_pane

0xbff7,	// (0x000531b7) list_double2_large_graphic_pane_ParamLimits

0xbff7,	// (0x000531b7) list_double2_large_graphic_pane

0xbff7,	// (0x000531b7) list_double2_pane_ParamLimits

0xbff7,	// (0x000531b7) list_double2_pane

0xbff7,	// (0x000531b7) list_double_graphic_heading_pane_ParamLimits

0xbff7,	// (0x000531b7) list_double_graphic_heading_pane

0xbff7,	// (0x000531b7) list_double_graphic_pane_ParamLimits

0xbff7,	// (0x000531b7) list_double_graphic_pane

0xbff7,	// (0x000531b7) list_double_heading_pane_ParamLimits

0xbff7,	// (0x000531b7) list_double_heading_pane

0xbff7,	// (0x000531b7) list_double_large_graphic_pane_ParamLimits

0xbff7,	// (0x000531b7) list_double_large_graphic_pane

0xbff7,	// (0x000531b7) list_double_number_pane_ParamLimits

0xbff7,	// (0x000531b7) list_double_number_pane

0xbff7,	// (0x000531b7) list_double_pane_ParamLimits

0xbff7,	// (0x000531b7) list_double_pane

0xbff7,	// (0x000531b7) list_double_time_pane_ParamLimits

0xbff7,	// (0x000531b7) list_double_time_pane

0xbff7,	// (0x000531b7) list_setting_number_pane_ParamLimits

0xbff7,	// (0x000531b7) list_setting_number_pane

0xbff7,	// (0x000531b7) list_setting_pane_ParamLimits

0xbff7,	// (0x000531b7) list_setting_pane

0xcd21,	// (0x00053ee1) list_single_2graphic_pane_ParamLimits

0xcd21,	// (0x00053ee1) list_single_2graphic_pane

0xcd21,	// (0x00053ee1) list_single_graphic_heading_pane_ParamLimits

0xcd21,	// (0x00053ee1) list_single_graphic_heading_pane

0xcd21,	// (0x00053ee1) list_single_graphic_pane_ParamLimits

0xcd21,	// (0x00053ee1) list_single_graphic_pane

0xcd21,	// (0x00053ee1) list_single_heading_pane_ParamLimits

0xcd21,	// (0x00053ee1) list_single_heading_pane

0xcd21,	// (0x00053ee1) list_single_large_graphic_pane_ParamLimits

0xcd21,	// (0x00053ee1) list_single_large_graphic_pane

0xcd21,	// (0x00053ee1) list_single_number_heading_pane_ParamLimits

0xcd21,	// (0x00053ee1) list_single_number_heading_pane

0xcd21,	// (0x00053ee1) list_single_number_pane_ParamLimits

0xcd21,	// (0x00053ee1) list_single_number_pane

0xcd21,	// (0x00053ee1) list_single_pane_ParamLimits

0xcd21,	// (0x00053ee1) list_single_pane

0xa2e7,	// (0x000514a7) list_highlight_pane_cp1

0x0f48,	// (0x00048108) list_single_pane_g1_ParamLimits

0x0f48,	// (0x00048108) list_single_pane_g1

0x0f54,	// (0x00048114) list_single_pane_g2_ParamLimits

0x0f54,	// (0x00048114) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0005676d) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0005676d) list_single_pane_g

0xee89,	// (0x00056049) list_single_pane_t1_ParamLimits

0xee89,	// (0x00056049) list_single_pane_t1

0x0f48,	// (0x00048108) list_single_number_pane_g1_ParamLimits

0x0f48,	// (0x00048108) list_single_number_pane_g1

0x0f54,	// (0x00048114) list_single_number_pane_g2_ParamLimits

0x0f54,	// (0x00048114) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0005676d) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0005676d) list_single_number_pane_g

0xeda4,	// (0x00055f64) list_single_number_pane_t1_ParamLimits

0xeda4,	// (0x00055f64) list_single_number_pane_t1

0xee77,	// (0x00056037) list_single_number_pane_t2_ParamLimits

0xee77,	// (0x00056037) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x00056afa) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x00056afa) list_single_number_pane_t

0x9935,	// (0x00050af5) list_single_graphic_pane_g1_ParamLimits

0x9935,	// (0x00050af5) list_single_graphic_pane_g1

0x0f48,	// (0x00048108) list_single_graphic_pane_g2_ParamLimits

0x0f48,	// (0x00048108) list_single_graphic_pane_g2

0x0f54,	// (0x00048114) list_single_graphic_pane_g3_ParamLimits

0x0f54,	// (0x00048114) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0005675c) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0005675c) list_single_graphic_pane_g

0x9941,	// (0x00050b01) list_single_graphic_pane_t1_ParamLimits

0x9941,	// (0x00050b01) list_single_graphic_pane_t1

0x9957,	// (0x00050b17) list_single_heading_pane_g1_ParamLimits

0x9957,	// (0x00050b17) list_single_heading_pane_g1

0x0f54,	// (0x00048114) list_single_heading_pane_g2_ParamLimits

0x0f54,	// (0x00048114) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00056763) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00056763) list_single_heading_pane_g

0x996a,	// (0x00050b2a) list_single_heading_pane_t1_ParamLimits

0x996a,	// (0x00050b2a) list_single_heading_pane_t1

0x9980,	// (0x00050b40) list_single_heading_pane_t2_ParamLimits

0x9980,	// (0x00050b40) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00056768) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00056768) list_single_heading_pane_t

0x0f48,	// (0x00048108) list_single_number_heading_pane_g1_ParamLimits

0x0f48,	// (0x00048108) list_single_number_heading_pane_g1

0x0f54,	// (0x00048114) list_single_number_heading_pane_g2_ParamLimits

0x0f54,	// (0x00048114) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0005676d) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0005676d) list_single_number_heading_pane_g

0x9992,	// (0x00050b52) list_single_number_heading_pane_t1_ParamLimits

0x9992,	// (0x00050b52) list_single_number_heading_pane_t1

0xebf6,	// (0x00055db6) list_single_number_heading_pane_t2_ParamLimits

0xebf6,	// (0x00055db6) list_single_number_heading_pane_t2

0xec08,	// (0x00055dc8) list_single_number_heading_pane_t3_ParamLimits

0xec08,	// (0x00055dc8) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00056772) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00056772) list_single_number_heading_pane_t

0x99a8,	// (0x00050b68) list_single_graphic_heading_pane_g1_ParamLimits

0x99a8,	// (0x00050b68) list_single_graphic_heading_pane_g1

0x99c0,	// (0x00050b80) list_single_graphic_heading_pane_g4_ParamLimits

0x99c0,	// (0x00050b80) list_single_graphic_heading_pane_g4

0x0f54,	// (0x00048114) list_single_graphic_heading_pane_g5_ParamLimits

0x0f54,	// (0x00048114) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x00056779) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x00056779) list_single_graphic_heading_pane_g

0x9992,	// (0x00050b52) list_single_graphic_heading_pane_t1_ParamLimits

0x9992,	// (0x00050b52) list_single_graphic_heading_pane_t1

0x99d1,	// (0x00050b91) list_single_graphic_heading_pane_t2_ParamLimits

0x99d1,	// (0x00050b91) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00056780) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00056780) list_single_graphic_heading_pane_t

0x1407,	// (0x000485c7) list_single_large_graphic_pane_g1_ParamLimits

0x1407,	// (0x000485c7) list_single_large_graphic_pane_g1

0x0f48,	// (0x00048108) list_single_large_graphic_pane_g2_ParamLimits

0x0f48,	// (0x00048108) list_single_large_graphic_pane_g2

0x0f54,	// (0x00048114) list_single_large_graphic_pane_g3_ParamLimits

0x0f54,	// (0x00048114) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00056785) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00056785) list_single_large_graphic_pane_g

0x39e4,	// (0x0004aba4) wait_border_pane_g2_copy1

0xae18,	// (0x00051fd8) list_single_large_graphic_pane_g4_cp2

0xec1a,	// (0x00055dda) list_single_large_graphic_pane_t1_ParamLimits

0xec1a,	// (0x00055dda) list_single_large_graphic_pane_t1

0x99e9,	// (0x00050ba9) list_double_pane_g1_ParamLimits

0x99e9,	// (0x00050ba9) list_double_pane_g1

0x99f5,	// (0x00050bb5) list_double_pane_g2_ParamLimits

0x99f5,	// (0x00050bb5) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0005678c) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0005678c) list_double_pane_g

0x9a01,	// (0x00050bc1) list_double_pane_t1_ParamLimits

0x9a01,	// (0x00050bc1) list_double_pane_t1

0x9a17,	// (0x00050bd7) list_double_pane_t2_ParamLimits

0x9a17,	// (0x00050bd7) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00056791) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00056791) list_double_pane_t

0x9a29,	// (0x00050be9) list_double2_pane_g1_ParamLimits

0x9a29,	// (0x00050be9) list_double2_pane_g1

0x9a3a,	// (0x00050bfa) list_double2_pane_g2_ParamLimits

0x9a3a,	// (0x00050bfa) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00056796) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00056796) list_double2_pane_g

0x9a46,	// (0x00050c06) list_double2_pane_t1_ParamLimits

0x9a46,	// (0x00050c06) list_double2_pane_t1

0x9a5c,	// (0x00050c1c) list_double2_pane_t2_ParamLimits

0x9a5c,	// (0x00050c1c) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0005679b) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0005679b) list_double2_pane_t

0x99e9,	// (0x00050ba9) list_double_number_pane_g1_ParamLimits

0x99e9,	// (0x00050ba9) list_double_number_pane_g1

0x99f5,	// (0x00050bb5) list_double_number_pane_g2_ParamLimits

0x99f5,	// (0x00050bb5) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0005678c) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0005678c) list_double_number_pane_g

0x9a6e,	// (0x00050c2e) list_double_number_pane_t1_ParamLimits

0x9a6e,	// (0x00050c2e) list_double_number_pane_t1

0x9a80,	// (0x00050c40) list_double_number_pane_t2_ParamLimits

0x9a80,	// (0x00050c40) list_double_number_pane_t2

0x9a96,	// (0x00050c56) list_double_number_pane_t3_ParamLimits

0x9a96,	// (0x00050c56) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x000567a0) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x000567a0) list_double_number_pane_t

0x9aa8,	// (0x00050c68) list_double_graphic_pane_g1_ParamLimits

0x9aa8,	// (0x00050c68) list_double_graphic_pane_g1

0x9ab4,	// (0x00050c74) list_double_graphic_pane_g2_ParamLimits

0x9ab4,	// (0x00050c74) list_double_graphic_pane_g2

0x4f01,	// (0x0004c0c1) list_double_graphic_pane_g3_ParamLimits

0x4f01,	// (0x0004c0c1) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x000567a7) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x000567a7) list_double_graphic_pane_g

0x9acf,	// (0x00050c8f) list_double_graphic_pane_t1_ParamLimits

0x9acf,	// (0x00050c8f) list_double_graphic_pane_t1

0x9ae5,	// (0x00050ca5) list_double_graphic_pane_t2_ParamLimits

0x9ae5,	// (0x00050ca5) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x000567b0) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x000567b0) list_double_graphic_pane_t

0x9af7,	// (0x00050cb7) list_double2_graphic_pane_g1_ParamLimits

0x9af7,	// (0x00050cb7) list_double2_graphic_pane_g1

0x9b03,	// (0x00050cc3) list_double2_graphic_pane_g2_ParamLimits

0x9b03,	// (0x00050cc3) list_double2_graphic_pane_g2

0x9b0f,	// (0x00050ccf) list_double2_graphic_pane_g3_ParamLimits

0x9b0f,	// (0x00050ccf) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x000567b5) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x000567b5) list_double2_graphic_pane_g

0x9b1b,	// (0x00050cdb) list_double2_graphic_pane_t1_ParamLimits

0x9b1b,	// (0x00050cdb) list_double2_graphic_pane_t1

0x9b31,	// (0x00050cf1) list_double2_graphic_pane_t2_ParamLimits

0x9b31,	// (0x00050cf1) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x000567bc) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x000567bc) list_double2_graphic_pane_t

0x9b43,	// (0x00050d03) list_double_large_graphic_pane_g1_ParamLimits

0x9b43,	// (0x00050d03) list_double_large_graphic_pane_g1

0x9b62,	// (0x00050d22) list_double_large_graphic_pane_g2_ParamLimits

0x9b62,	// (0x00050d22) list_double_large_graphic_pane_g2

0x99f5,	// (0x00050bb5) list_double_large_graphic_pane_g3_ParamLimits

0x99f5,	// (0x00050bb5) list_double_large_graphic_pane_g3

0x9b78,	// (0x00050d38) list_double_large_graphic_pane_g4_ParamLimits

0x9b78,	// (0x00050d38) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x000567c1) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x000567c1) list_double_large_graphic_pane_g

0x9b8b,	// (0x00050d4b) list_double_large_graphic_pane_t1_ParamLimits

0x9b8b,	// (0x00050d4b) list_double_large_graphic_pane_t1

0x9ba4,	// (0x00050d64) list_double_large_graphic_pane_t2_ParamLimits

0x9ba4,	// (0x00050d64) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x000567cc) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x000567cc) list_double_large_graphic_pane_t

0xae20,	// (0x00051fe0) list_double2_large_graphic_pane_g1_ParamLimits

0xae20,	// (0x00051fe0) list_double2_large_graphic_pane_g1

0x9bb6,	// (0x00050d76) list_double2_large_graphic_pane_g2_ParamLimits

0x9bb6,	// (0x00050d76) list_double2_large_graphic_pane_g2

0x9b0f,	// (0x00050ccf) list_double2_large_graphic_pane_g3_ParamLimits

0x9b0f,	// (0x00050ccf) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x000567d1) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x000567d1) list_double2_large_graphic_pane_g

0x9bc7,	// (0x00050d87) list_double2_large_graphic_pane_t1_ParamLimits

0x9bc7,	// (0x00050d87) list_double2_large_graphic_pane_t1

0x9bdd,	// (0x00050d9d) list_double2_large_graphic_pane_t2_ParamLimits

0x9bdd,	// (0x00050d9d) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x000567d8) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x000567d8) list_double2_large_graphic_pane_t

0x9bef,	// (0x00050daf) list_double_heading_pane_g1_ParamLimits

0x9bef,	// (0x00050daf) list_double_heading_pane_g1

0xe3ea,	// (0x000555aa) list_double_heading_pane_g2_ParamLimits

0xe3ea,	// (0x000555aa) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x000567dd) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x000567dd) list_double_heading_pane_g

0x9c00,	// (0x00050dc0) list_double_heading_pane_t1_ParamLimits

0x9c00,	// (0x00050dc0) list_double_heading_pane_t1

0x9a5c,	// (0x00050c1c) list_double_heading_pane_t2_ParamLimits

0x9a5c,	// (0x00050c1c) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x000567e2) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x000567e2) list_double_heading_pane_t

0x9aa8,	// (0x00050c68) list_double_graphic_heading_pane_g1_ParamLimits

0x9aa8,	// (0x00050c68) list_double_graphic_heading_pane_g1

0x9bef,	// (0x00050daf) list_double_graphic_heading_pane_g2_ParamLimits

0x9bef,	// (0x00050daf) list_double_graphic_heading_pane_g2

0xe3ea,	// (0x000555aa) list_double_graphic_heading_pane_g3_ParamLimits

0xe3ea,	// (0x000555aa) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x000567e7) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x000567e7) list_double_graphic_heading_pane_g

0x9c16,	// (0x00050dd6) list_double_graphic_heading_pane_t1_ParamLimits

0x9c16,	// (0x00050dd6) list_double_graphic_heading_pane_t1

0x9b31,	// (0x00050cf1) list_double_graphic_heading_pane_t2_ParamLimits

0x9b31,	// (0x00050cf1) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x000567ee) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x000567ee) list_double_graphic_heading_pane_t

0x9c2c,	// (0x00050dec) list_double_time_pane_g1_ParamLimits

0x9c2c,	// (0x00050dec) list_double_time_pane_g1

0x9c3d,	// (0x00050dfd) list_double_time_pane_g2_ParamLimits

0x9c3d,	// (0x00050dfd) list_double_time_pane_g2

0x0001,

0xf633,	// (0x000567f3) list_double_time_pane_g_ParamLimits

0xf633,	// (0x000567f3) list_double_time_pane_g

0x9c49,	// (0x00050e09) list_double_time_pane_t1_ParamLimits

0x9c49,	// (0x00050e09) list_double_time_pane_t1

0x9c5f,	// (0x00050e1f) list_double_time_pane_t2_ParamLimits

0x9c5f,	// (0x00050e1f) list_double_time_pane_t2

0x9c71,	// (0x00050e31) list_double_time_pane_t3_ParamLimits

0x9c71,	// (0x00050e31) list_double_time_pane_t3

0x9c83,	// (0x00050e43) list_double_time_pane_t4_ParamLimits

0x9c83,	// (0x00050e43) list_double_time_pane_t4

0x0003,

0xf638,	// (0x000567f8) list_double_time_pane_t_ParamLimits

0xf638,	// (0x000567f8) list_double_time_pane_t

0x9c95,	// (0x00050e55) list_setting_pane_g1_ParamLimits

0x9c95,	// (0x00050e55) list_setting_pane_g1

0x9ca1,	// (0x00050e61) list_setting_pane_g2_ParamLimits

0x9ca1,	// (0x00050e61) list_setting_pane_g2

0x0001,

0xf641,	// (0x00056801) list_setting_pane_g_ParamLimits

0xf641,	// (0x00056801) list_setting_pane_g

0x9cad,	// (0x00050e6d) list_setting_pane_t1_ParamLimits

0x9cad,	// (0x00050e6d) list_setting_pane_t1

0x9cc7,	// (0x00050e87) list_setting_pane_t2_ParamLimits

0x9cc7,	// (0x00050e87) list_setting_pane_t2

0x0002,

0xf646,	// (0x00056806) list_setting_pane_t_ParamLimits

0xf646,	// (0x00056806) list_setting_pane_t

0x9d06,	// (0x00050ec6) set_value_pane_cp_ParamLimits

0x9d06,	// (0x00050ec6) set_value_pane_cp

0x9d14,	// (0x00050ed4) list_setting_number_pane_g1_ParamLimits

0x9d14,	// (0x00050ed4) list_setting_number_pane_g1

0x9d20,	// (0x00050ee0) list_setting_number_pane_g2_ParamLimits

0x9d20,	// (0x00050ee0) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0005680d) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0005680d) list_setting_number_pane_g

0x9d2c,	// (0x00050eec) list_setting_number_pane_t1_ParamLimits

0x9d2c,	// (0x00050eec) list_setting_number_pane_t1

0x9d45,	// (0x00050f05) list_setting_number_pane_t2_ParamLimits

0x9d45,	// (0x00050f05) list_setting_number_pane_t2

0x9d5f,	// (0x00050f1f) list_setting_number_pane_t3_ParamLimits

0x9d5f,	// (0x00050f1f) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x00056812) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x00056812) list_setting_number_pane_t

0x9d06,	// (0x00050ec6) set_value_pane_ParamLimits

0x9d06,	// (0x00050ec6) set_value_pane

0xae2c,	// (0x00051fec) bg_set_opt_pane_ParamLimits

0xae2c,	// (0x00051fec) bg_set_opt_pane

0xe3f6,	// (0x000555b6) set_value_pane_t1

0xae4d,	// (0x0005200d) slider_set_pane_cp3

0xae56,	// (0x00052016) volume_small_pane_cp

0xae5f,	// (0x0005201f) list_form_gen_pane

0xae68,	// (0x00052028) scroll_pane_cp8

0x9da2,	// (0x00050f62) form_field_data_pane_ParamLimits

0x9da2,	// (0x00050f62) form_field_data_pane

0x9dbf,	// (0x00050f7f) form_field_data_wide_pane_ParamLimits

0x9dbf,	// (0x00050f7f) form_field_data_wide_pane

0x9de3,	// (0x00050fa3) form_field_popup_pane_ParamLimits

0x9de3,	// (0x00050fa3) form_field_popup_pane

0xec30,	// (0x00055df0) form_field_popup_wide_pane_ParamLimits

0xec30,	// (0x00055df0) form_field_popup_wide_pane

0xec51,	// (0x00055e11) form_field_slider_pane_ParamLimits

0xec51,	// (0x00055e11) form_field_slider_pane

0xec64,	// (0x00055e24) form_field_slider_wide_pane_ParamLimits

0xec64,	// (0x00055e24) form_field_slider_wide_pane

0xae79,	// (0x00052039) data_form_pane

0x9e0f,	// (0x00050fcf) form_field_data_pane_t1

0xae85,	// (0x00052045) input_focus_pane

0xec77,	// (0x00055e37) data_form_wide_pane

0xec94,	// (0x00055e54) form_field_data_wide_pane_t1

0xabe2,	// (0x00051da2) input_focus_pane_cp6

0x9e29,	// (0x00050fe9) form_field_popup_pane_t1

0xae85,	// (0x00052045) input_focus_pane_cp7

0xaeb3,	// (0x00052073) list_form_pane

0xecbe,	// (0x00055e7e) form_field_popup_wide_pane_t1

0xae85,	// (0x00052045) input_focus_pane_cp8

0xaebf,	// (0x0005207f) list_form_wide_pane

0x9e4b,	// (0x0005100b) form_field_slider_pane_t1_ParamLimits

0x9e4b,	// (0x0005100b) form_field_slider_pane_t1

0x9e63,	// (0x00051023) form_field_slider_pane_t2_ParamLimits

0x9e63,	// (0x00051023) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x00056822) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x00056822) form_field_slider_pane_t

0xa532,	// (0x000516f2) input_focus_pane_cp9_ParamLimits

0xa532,	// (0x000516f2) input_focus_pane_cp9

0x9e78,	// (0x00051038) slider_cont_pane_ParamLimits

0x9e78,	// (0x00051038) slider_cont_pane

0xaecb,	// (0x0005208b) form_field_slider_wide_pane_t1_ParamLimits

0xaecb,	// (0x0005208b) form_field_slider_wide_pane_t1

0xecd3,	// (0x00055e93) form_field_slider_wide_pane_t2_ParamLimits

0xecd3,	// (0x00055e93) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x00056827) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x00056827) form_field_slider_wide_pane_t

0xa532,	// (0x000516f2) input_focus_pane_cp10_ParamLimits

0xa532,	// (0x000516f2) input_focus_pane_cp10

0x9e8c,	// (0x0005104c) slider_cont_pane_cp1_ParamLimits

0x9e8c,	// (0x0005104c) slider_cont_pane_cp1

0x9ea0,	// (0x00051060) slider_form_pane_cp

0xaedd,	// (0x0005209d) input_focus_pane_g1

0xaee5,	// (0x000520a5) input_focus_pane_g2

0xaeed,	// (0x000520ad) input_focus_pane_g3

0xaef5,	// (0x000520b5) input_focus_pane_g4

0xaefd,	// (0x000520bd) input_focus_pane_g5

0xaf05,	// (0x000520c5) input_focus_pane_g6

0xaf0d,	// (0x000520cd) input_focus_pane_g7

0xaf15,	// (0x000520d5) input_focus_pane_g8

0xaf1d,	// (0x000520dd) input_focus_pane_g9

0xa1f7,	// (0x000513b7) input_focus_pane_g10

0x0009,

0xf66c,	// (0x0005682c) input_focus_pane_g

0x39ed,	// (0x0004abad) wait_border_pane_g3_copy1

0x9ea8,	// (0x00051068) data_form_pane_t1

0xa1f7,	// (0x000513b7) wait_anim_pane_g1_copy1

0x9fc6,	// (0x00051186) data_form_wide_pane_t1

0xece5,	// (0x00055ea5) list_form_graphic_pane_cp_ParamLimits

0xece5,	// (0x00055ea5) list_form_graphic_pane_cp

0x4944,	// (0x0004bb04) slider_form_pane_g1

0x494d,	// (0x0004bb0d) slider_form_pane_g2

0x0006,

0xf96a,	// (0x00056b2a) slider_form_pane_g

0x9ec4,	// (0x00051084) list_form_graphic_pane_ParamLimits

0x9ec4,	// (0x00051084) list_form_graphic_pane

0xecf7,	// (0x00055eb7) list_form_graphic_pane_g1

0xecff,	// (0x00055ebf) list_form_graphic_pane_t1_ParamLimits

0xecff,	// (0x00055ebf) list_form_graphic_pane_t1

0xa574,	// (0x00051734) list_highlight_pane_cp5_ParamLimits

0xa574,	// (0x00051734) list_highlight_pane_cp5

0x9ed5,	// (0x00051095) find_pane_g1

0xe414,	// (0x000555d4) input_find_pane

0x9ede,	// (0x0005109e) input_find_pane_g1_ParamLimits

0x9ede,	// (0x0005109e) input_find_pane_g1

0x9eea,	// (0x000510aa) input_find_pane_t1_ParamLimits

0x9eea,	// (0x000510aa) input_find_pane_t1

0x9eff,	// (0x000510bf) input_find_pane_t2_ParamLimits

0x9eff,	// (0x000510bf) input_find_pane_t2

0x0001,

0xf681,	// (0x00056841) input_find_pane_t_ParamLimits

0xf681,	// (0x00056841) input_find_pane_t

0xe41d,	// (0x000555dd) input_focus_pane_cp5_ParamLimits

0xe41d,	// (0x000555dd) input_focus_pane_cp5

0xe430,	// (0x000555f0) bg_popup_window_pane_cp2_ParamLimits

0xe430,	// (0x000555f0) bg_popup_window_pane_cp2

0xe43d,	// (0x000555fd) listscroll_menu_pane_ParamLimits

0xe43d,	// (0x000555fd) listscroll_menu_pane

0xaf31,	// (0x000520f1) popup_submenu_window_ParamLimits

0xaf31,	// (0x000520f1) popup_submenu_window

0xe449,	// (0x00055609) find_popup_pane_g1

0xe451,	// (0x00055611) input_popup_find_pane_cp

0xe45b,	// (0x0005561b) input_focus_pane_cp4_ParamLimits

0xe45b,	// (0x0005561b) input_focus_pane_cp4

0xe469,	// (0x00055629) input_popup_find_pane_t1_ParamLimits

0xe469,	// (0x00055629) input_popup_find_pane_t1

0xa2e7,	// (0x000514a7) bg_popup_sub_pane_cp

0xe497,	// (0x00055657) listscroll_popup_sub_pane

0xe49f,	// (0x0005565f) list_submenu_pane_ParamLimits

0xe49f,	// (0x0005565f) list_submenu_pane

0xe4b0,	// (0x00055670) scroll_pane_cp4

0xe4b8,	// (0x00055678) list_single_popup_submenu_pane_ParamLimits

0xe4b8,	// (0x00055678) list_single_popup_submenu_pane

0xe4cd,	// (0x0005568d) list_single_popup_submenu_pane_g1

0xe4d5,	// (0x00055695) list_single_popup_submenu_pane_t1_ParamLimits

0xe4d5,	// (0x00055695) list_single_popup_submenu_pane_t1

0xa532,	// (0x000516f2) bg_active_tab_pane_cp1_ParamLimits

0xa532,	// (0x000516f2) bg_active_tab_pane_cp1

0xaf6f,	// (0x0005212f) tabs_2_active_pane_g1

0xaf77,	// (0x00052137) tabs_2_active_pane_t1

0xa532,	// (0x000516f2) bg_passive_tab_pane_cp1_ParamLimits

0xa532,	// (0x000516f2) bg_passive_tab_pane_cp1

0xaf6f,	// (0x0005212f) tabs_2_passive_pane_g1

0xaf77,	// (0x00052137) tabs_2_passive_pane_t1

0xa574,	// (0x00051734) bg_active_tab_pane_cp4

0xaf89,	// (0x00052149) tabs_2_long_active_pane_t1

0x2ebb,	// (0x0004a07b) bg_passive_tab_pane_cp4

0x0f85,	// (0x00048145) list_single_midp_graphic_pane_g4_ParamLimits

0xa574,	// (0x00051734) bg_active_tab_pane_cp5

0xaf9c,	// (0x0005215c) tabs_3_long_active_pane_t1

0x2ebb,	// (0x0004a07b) bg_passive_tab_pane_cp5

0x0f85,	// (0x00048145) list_single_midp_graphic_pane_g4

0xa574,	// (0x00051734) bg_popup_window_pane_cp13_ParamLimits

0xa574,	// (0x00051734) bg_popup_window_pane_cp13

0xe4f3,	// (0x000556b3) listscroll_popup_fast_pane_ParamLimits

0xe4f3,	// (0x000556b3) listscroll_popup_fast_pane

0xe502,	// (0x000556c2) grid_popup_fast_pane_ParamLimits

0xe502,	// (0x000556c2) grid_popup_fast_pane

0xe514,	// (0x000556d4) scroll_pane_cp9_ParamLimits

0xe514,	// (0x000556d4) scroll_pane_cp9

0x627d,	// (0x0004d43d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x627d,	// (0x0004d43d) list_single_graphic_hl_pane_t1_cp2

0xe538,	// (0x000556f8) input_focus_pane_cp20_ParamLimits

0xe538,	// (0x000556f8) input_focus_pane_cp20

0xe546,	// (0x00055706) query_popup_data_pane_t1_ParamLimits

0xe546,	// (0x00055706) query_popup_data_pane_t1

0xe559,	// (0x00055719) query_popup_data_pane_t2_ParamLimits

0xe559,	// (0x00055719) query_popup_data_pane_t2

0xe59f,	// (0x0005575f) query_popup_data_pane_t3_ParamLimits

0xe59f,	// (0x0005575f) query_popup_data_pane_t3

0xe5e0,	// (0x000557a0) query_popup_data_pane_t4_ParamLimits

0xe5e0,	// (0x000557a0) query_popup_data_pane_t4

0xe61c,	// (0x000557dc) query_popup_data_pane_t5_ParamLimits

0xe61c,	// (0x000557dc) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x00056846) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x00056846) query_popup_data_pane_t

0xaedd,	// (0x0005209d) bg_set_opt_pane_g1

0xaee5,	// (0x000520a5) bg_set_opt_pane_g2

0xaeed,	// (0x000520ad) bg_set_opt_pane_g3

0xaef5,	// (0x000520b5) bg_set_opt_pane_g4

0xaefd,	// (0x000520bd) bg_set_opt_pane_g5

0xaf05,	// (0x000520c5) bg_set_opt_pane_g6

0xaf0d,	// (0x000520cd) bg_set_opt_pane_g7

0xaf15,	// (0x000520d5) bg_set_opt_pane_g8

0xaf1d,	// (0x000520dd) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x00056851) bg_set_opt_pane_g

0x057d,	// (0x0004773d) control_top_pane_stacon_ParamLimits

0x057d,	// (0x0004773d) control_top_pane_stacon

0x05d0,	// (0x00047790) signal_pane_stacon_ParamLimits

0x05d0,	// (0x00047790) signal_pane_stacon

0x2829,	// (0x000499e9) stacon_top_pane_g1_ParamLimits

0x2829,	// (0x000499e9) stacon_top_pane_g1

0x05f5,	// (0x000477b5) title_pane_stacon_ParamLimits

0x05f5,	// (0x000477b5) title_pane_stacon

0x061f,	// (0x000477df) uni_indicator_pane_stacon_ParamLimits

0x061f,	// (0x000477df) uni_indicator_pane_stacon

0x0634,	// (0x000477f4) battery_pane_stacon_ParamLimits

0x0634,	// (0x000477f4) battery_pane_stacon

0x0678,	// (0x00047838) control_bottom_pane_stacon_ParamLimits

0x0678,	// (0x00047838) control_bottom_pane_stacon

0x069b,	// (0x0004785b) navi_pane_stacon_ParamLimits

0x069b,	// (0x0004785b) navi_pane_stacon

0x284b,	// (0x00049a0b) stacon_bottom_pane_g1_ParamLimits

0x284b,	// (0x00049a0b) stacon_bottom_pane_g1

0x01db,	// (0x0004739b) aid_levels_signal_lsc_ParamLimits

0x01db,	// (0x0004739b) aid_levels_signal_lsc

0x01f2,	// (0x000473b2) signal_pane_stacon_g1_ParamLimits

0x01f2,	// (0x000473b2) signal_pane_stacon_g1

0x0206,	// (0x000473c6) signal_pane_stacon_g2_ParamLimits

0x0206,	// (0x000473c6) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x00056864) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00056864) signal_pane_stacon_g

0x023b,	// (0x000473fb) title_pane_stacon_t1_ParamLimits

0x023b,	// (0x000473fb) title_pane_stacon_t1

0xe660,	// (0x00055820) uni_indicator_pane_stacon_g1

0xe66a,	// (0x0005582a) uni_indicator_pane_stacon_g2

0xe674,	// (0x00055834) uni_indicator_pane_stacon_g3

0xe67e,	// (0x0005583e) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x00056870) uni_indicator_pane_stacon_g

0x0260,	// (0x00047420) control_top_pane_stacon_g1

0x0268,	// (0x00047428) control_top_pane_stacon_t1_ParamLimits

0x0268,	// (0x00047428) control_top_pane_stacon_t1

0x029f,	// (0x0004745f) aid_levels_battery_lsc_ParamLimits

0x029f,	// (0x0004745f) aid_levels_battery_lsc

0x02b7,	// (0x00047477) battery_pane_stacon_g1_ParamLimits

0x02b7,	// (0x00047477) battery_pane_stacon_g1

0x02ca,	// (0x0004748a) battery_pane_stacon_g2_ParamLimits

0x02ca,	// (0x0004748a) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x00056879) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x00056879) battery_pane_stacon_g

0x0308,	// (0x000474c8) navi_icon_pane_stacon

0x031c,	// (0x000474dc) navi_navi_pane_stacon

0x0308,	// (0x000474c8) navi_text_pane_stacon

0x0260,	// (0x00047420) control_bottom_pane_stacon_g1

0x0332,	// (0x000474f2) control_bottom_pane_stacon_t1_ParamLimits

0x0332,	// (0x000474f2) control_bottom_pane_stacon_t1

0xafae,	// (0x0005216e) grid_app_pane_ParamLimits

0xafae,	// (0x0005216e) grid_app_pane

0xafe6,	// (0x000521a6) scroll_pane_cp15_ParamLimits

0xafe6,	// (0x000521a6) scroll_pane_cp15

0xaffb,	// (0x000521bb) cell_app_pane_ParamLimits

0xaffb,	// (0x000521bb) cell_app_pane

0xb048,	// (0x00052208) cell_app_pane_g1_ParamLimits

0xb048,	// (0x00052208) cell_app_pane_g1

0xe6a2,	// (0x00055862) cell_app_pane_g2_ParamLimits

0xe6a2,	// (0x00055862) cell_app_pane_g2

0x0001,

0xf6be,	// (0x0005687e) cell_app_pane_g_ParamLimits

0xf6be,	// (0x0005687e) cell_app_pane_g

0xb06c,	// (0x0005222c) cell_app_pane_t1_ParamLimits

0xb06c,	// (0x0005222c) cell_app_pane_t1

0xe6ae,	// (0x0005586e) grid_highlight_pane_ParamLimits

0xe6ae,	// (0x0005586e) grid_highlight_pane

0xaedd,	// (0x0005209d) cell_highlight_pane_g1

0xaee5,	// (0x000520a5) cell_highlight_pane_g2

0xaeed,	// (0x000520ad) cell_highlight_pane_g3

0xaef5,	// (0x000520b5) cell_highlight_pane_g4

0xaefd,	// (0x000520bd) cell_highlight_pane_g5

0xaf05,	// (0x000520c5) cell_highlight_pane_g6

0xaf0d,	// (0x000520cd) cell_highlight_pane_g7

0xaf15,	// (0x000520d5) cell_highlight_pane_g8

0xaf1d,	// (0x000520dd) cell_highlight_pane_g9

0xa1f7,	// (0x000513b7) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x0005682c) cell_highlight_pane_g

0xe6bf,	// (0x0005587f) bg_scroll_pane

0x0418,	// (0x000475d8) scroll_handle_pane

0xe706,	// (0x000558c6) scroll_bg_pane_g1

0xe71b,	// (0x000558db) scroll_bg_pane_g2

0xe733,	// (0x000558f3) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x00056883) scroll_bg_pane_g

0xe748,	// (0x00055908) scroll_handle_focus_pane_ParamLimits

0xe748,	// (0x00055908) scroll_handle_focus_pane

0xe706,	// (0x000558c6) scroll_handle_pane_g1

0xe755,	// (0x00055915) scroll_handle_pane_g2

0xe733,	// (0x000558f3) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x0005688a) scroll_handle_pane_g

0xe45b,	// (0x0005561b) bg_popup_sub_pane_cp21_ParamLimits

0xe45b,	// (0x0005561b) bg_popup_sub_pane_cp21

0xe769,	// (0x00055929) popup_fep_japan_predictive_window_t1_ParamLimits

0xe769,	// (0x00055929) popup_fep_japan_predictive_window_t1

0xe780,	// (0x00055940) popup_fep_japan_predictive_window_t2_ParamLimits

0xe780,	// (0x00055940) popup_fep_japan_predictive_window_t2

0xe7b3,	// (0x00055973) popup_fep_japan_predictive_window_t3_ParamLimits

0xe7b3,	// (0x00055973) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x00056891) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x00056891) popup_fep_japan_predictive_window_t

0xa2e7,	// (0x000514a7) bg_popup_sub_pane_cp23

0xe7ea,	// (0x000559aa) listscroll_japin_cand_pane

0xe7f2,	// (0x000559b2) popup_fep_japan_candidate_window_t1

0xe800,	// (0x000559c0) candidate_pane_ParamLimits

0xe800,	// (0x000559c0) candidate_pane

0xe812,	// (0x000559d2) scroll_pane_cp30

0xe81c,	// (0x000559dc) list_single_popup_jap_candidate_pane_ParamLimits

0xe81c,	// (0x000559dc) list_single_popup_jap_candidate_pane

0xa2e7,	// (0x000514a7) list_highlight_pane_cp30

0xe830,	// (0x000559f0) list_single_popup_jap_candidate_pane_t1

0xb08c,	// (0x0005224c) level_1_signal

0xb09e,	// (0x0005225e) level_2_signal

0xb0b1,	// (0x00052271) level_3_signal

0xb0c4,	// (0x00052284) level_4_signal

0xb0d7,	// (0x00052297) level_5_signal

0xb0ea,	// (0x000522aa) level_6_signal

0xb0fd,	// (0x000522bd) level_7_signal

0xb08c,	// (0x0005224c) level_1_battery

0xb09e,	// (0x0005225e) level_2_battery

0xb0b1,	// (0x00052271) level_3_battery

0xb0c4,	// (0x00052284) level_4_battery

0xb0d7,	// (0x00052297) level_5_battery

0xb0ea,	// (0x000522aa) level_6_battery

0xb0fd,	// (0x000522bd) level_7_battery

0x2590,	// (0x00049750) list_menu_pane_ParamLimits

0x2590,	// (0x00049750) list_menu_pane

0x25a6,	// (0x00049766) scroll_pane_cp25_ParamLimits

0x25a6,	// (0x00049766) scroll_pane_cp25

0x25bf,	// (0x0004977f) list_double2_graphic_pane_cp2_ParamLimits

0x25bf,	// (0x0004977f) list_double2_graphic_pane_cp2

0x25bf,	// (0x0004977f) list_double2_large_graphic_pane_cp2_ParamLimits

0x25bf,	// (0x0004977f) list_double2_large_graphic_pane_cp2

0x25bf,	// (0x0004977f) list_double2_pane_cp2_ParamLimits

0x25bf,	// (0x0004977f) list_double2_pane_cp2

0x25bf,	// (0x0004977f) list_double_graphic_pane_cp2_ParamLimits

0x25bf,	// (0x0004977f) list_double_graphic_pane_cp2

0x25bf,	// (0x0004977f) list_double_large_graphic_pane_cp2_ParamLimits

0x25bf,	// (0x0004977f) list_double_large_graphic_pane_cp2

0x25bf,	// (0x0004977f) list_double_number_pane_cp2_ParamLimits

0x25bf,	// (0x0004977f) list_double_number_pane_cp2

0x25bf,	// (0x0004977f) list_double_pane_cp2_ParamLimits

0x25bf,	// (0x0004977f) list_double_pane_cp2

0xb110,	// (0x000522d0) list_single_2graphic_pane_cp2_ParamLimits

0xb110,	// (0x000522d0) list_single_2graphic_pane_cp2

0xb110,	// (0x000522d0) list_single_graphic_heading_pane_cp2_ParamLimits

0xb110,	// (0x000522d0) list_single_graphic_heading_pane_cp2

0xb110,	// (0x000522d0) list_single_graphic_pane_cp2_ParamLimits

0xb110,	// (0x000522d0) list_single_graphic_pane_cp2

0xb110,	// (0x000522d0) list_single_heading_pane_cp2_ParamLimits

0xb110,	// (0x000522d0) list_single_heading_pane_cp2

0x2602,	// (0x000497c2) list_single_large_graphic_pane_cp2_ParamLimits

0x2602,	// (0x000497c2) list_single_large_graphic_pane_cp2

0xb110,	// (0x000522d0) list_single_number_heading_pane_cp2_ParamLimits

0xb110,	// (0x000522d0) list_single_number_heading_pane_cp2

0xb110,	// (0x000522d0) list_single_number_pane_cp2_ParamLimits

0xb110,	// (0x000522d0) list_single_number_pane_cp2

0xb110,	// (0x000522d0) list_single_pane_cp2_ParamLimits

0xb110,	// (0x000522d0) list_single_pane_cp2

0x2670,	// (0x00049830) bg_popup_sub_pane_cp22

0x04fe,	// (0x000476be) popup_side_volume_key_window_g1

0x0528,	// (0x000476e8) popup_side_volume_key_window_t1

0x0546,	// (0x00047706) volume_small_pane_cp1

0xa532,	// (0x000516f2) bg_popup_sub_pane_cp24_ParamLimits

0xa532,	// (0x000516f2) bg_popup_sub_pane_cp24

0x2686,	// (0x00049846) fep_china_uni_candidate_pane_ParamLimits

0x2686,	// (0x00049846) fep_china_uni_candidate_pane

0x269a,	// (0x0004985a) fep_china_uni_entry_pane

0x26aa,	// (0x0004986a) popup_fep_china_uni_window_g1

0x26c6,	// (0x00049886) fep_china_uni_entry_pane_g1

0x26d0,	// (0x00049890) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x000568c2) fep_china_uni_entry_pane_g

0x26da,	// (0x0004989a) fep_entry_item_pane

0x26e4,	// (0x000498a4) fep_candidate_item_pane

0x26ec,	// (0x000498ac) fep_china_uni_candidate_pane_g1

0x26f6,	// (0x000498b6) fep_china_uni_candidate_pane_g2

0x26fe,	// (0x000498be) fep_china_uni_candidate_pane_g3

0x2706,	// (0x000498c6) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x000568c7) fep_china_uni_candidate_pane_g

0xa1f7,	// (0x000513b7) fep_entry_item_pane_g1

0x2710,	// (0x000498d0) fep_entry_item_pane_t1_ParamLimits

0x2710,	// (0x000498d0) fep_entry_item_pane_t1

0x2726,	// (0x000498e6) fep_candidate_item_pane_t1_ParamLimits

0x2726,	// (0x000498e6) fep_candidate_item_pane_t1

0x273b,	// (0x000498fb) fep_candidate_item_pane_t2_ParamLimits

0x273b,	// (0x000498fb) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x000568d0) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x000568d0) fep_candidate_item_pane_t

0xa574,	// (0x00051734) list_highlight_pane_cp31_ParamLimits

0xa574,	// (0x00051734) list_highlight_pane_cp31

0x274d,	// (0x0004990d) level_1_signal_lsc

0x2756,	// (0x00049916) level_2_signal_lsc

0x275f,	// (0x0004991f) level_3_signal_lsc

0x2768,	// (0x00049928) level_4_signal_lsc

0x2771,	// (0x00049931) level_5_signal_lsc

0x277a,	// (0x0004993a) level_6_signal_lsc

0x2783,	// (0x00049943) level_7_signal_lsc

0x2783,	// (0x00049943) level_1_battery_lsc

0x278c,	// (0x0004994c) level_2_battery_lsc

0x2795,	// (0x00049955) level_3_battery_lsc

0x279e,	// (0x0004995e) level_4_battery_lsc

0x27a7,	// (0x00049967) level_5_battery_lsc

0x27b0,	// (0x00049970) level_6_battery_lsc

0x274d,	// (0x0004990d) level_7_battery_lsc

0x27b9,	// (0x00049979) scroll_handle_focus_pane_g1

0x27c2,	// (0x00049982) scroll_handle_focus_pane_g2

0x27cb,	// (0x0004998b) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x000568d5) scroll_handle_focus_pane_g

0x9f14,	// (0x000510d4) list_single_2graphic_pane_g1_ParamLimits

0x9f14,	// (0x000510d4) list_single_2graphic_pane_g1

0x99c0,	// (0x00050b80) list_single_2graphic_pane_g2_ParamLimits

0x99c0,	// (0x00050b80) list_single_2graphic_pane_g2

0x0f54,	// (0x00048114) list_single_2graphic_pane_g3_ParamLimits

0x0f54,	// (0x00048114) list_single_2graphic_pane_g3

0x9f20,	// (0x000510e0) list_single_2graphic_pane_g4_ParamLimits

0x9f20,	// (0x000510e0) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x000568dc) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x000568dc) list_single_2graphic_pane_g

0x9f2c,	// (0x000510ec) list_single_2graphic_pane_t1_ParamLimits

0x9f2c,	// (0x000510ec) list_single_2graphic_pane_t1

0xb19f,	// (0x0005235f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb19f,	// (0x0005235f) list_double2_graphic_large_graphic_pane_g1

0x9bb6,	// (0x00050d76) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9bb6,	// (0x00050d76) list_double2_graphic_large_graphic_pane_g2

0x9b0f,	// (0x00050ccf) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9b0f,	// (0x00050ccf) list_double2_graphic_large_graphic_pane_g3

0x9f5a,	// (0x0005111a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9f5a,	// (0x0005111a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x000568e5) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x000568e5) list_double2_graphic_large_graphic_pane_g

0x9f66,	// (0x00051126) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9f66,	// (0x00051126) list_double2_graphic_large_graphic_pane_t1

0x9f7c,	// (0x0005113c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9f7c,	// (0x0005113c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x000568ee) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x000568ee) list_double2_graphic_large_graphic_pane_t

0x290e,	// (0x00049ace) popup_fast_swap_window_ParamLimits

0x290e,	// (0x00049ace) popup_fast_swap_window

0x292c,	// (0x00049aec) popup_side_volume_key_window

0x294a,	// (0x00049b0a) stacon_top_pane

0x2954,	// (0x00049b14) status_pane_ParamLimits

0x2954,	// (0x00049b14) status_pane

0xb1f9,	// (0x000523b9) status_small_pane

0xa2e7,	// (0x000514a7) control_pane

0xa2e7,	// (0x000514a7) stacon_bottom_pane

0xae68,	// (0x00052028) scroll_pane_cp121

0xae5f,	// (0x0005201f) set_content_pane

0xb1b1,	// (0x00052371) bg_active_tab_pane_g1_cp1

0x27dd,	// (0x0004999d) bg_active_tab_pane_g2_cp1

0xb1ba,	// (0x0005237a) bg_active_tab_pane_g3_cp1

0xb1b1,	// (0x00052371) bg_passive_tab_pane_g1_cp1

0x27dd,	// (0x0004999d) bg_passive_tab_pane_g2_cp1

0xb1ba,	// (0x0005237a) bg_passive_tab_pane_g3_cp1

0xb1c3,	// (0x00052383) bg_active_tab_pane_g1_cp2

0x27dd,	// (0x0004999d) bg_active_tab_pane_g2_cp2

0xb1cc,	// (0x0005238c) bg_active_tab_pane_g3_cp2

0xb1c3,	// (0x00052383) bg_passive_tab_pane_g1_cp2

0x27dd,	// (0x0004999d) bg_passive_tab_pane_g2_cp2

0xb1cc,	// (0x0005238c) bg_passive_tab_pane_g3_cp2

0xb1d5,	// (0x00052395) bg_active_tab_pane_g1_cp3

0x27dd,	// (0x0004999d) bg_active_tab_pane_g2_cp3

0xb1de,	// (0x0005239e) bg_active_tab_pane_g3_cp3

0xb1d5,	// (0x00052395) bg_passive_tab_pane_g1_cp3

0x27dd,	// (0x0004999d) bg_passive_tab_pane_g2_cp3

0xb1de,	// (0x0005239e) bg_passive_tab_pane_g3_cp3

0xb1e7,	// (0x000523a7) bg_active_tab_pane_g1_cp4

0x27dd,	// (0x0004999d) bg_active_tab_pane_g2_cp4

0xb1f0,	// (0x000523b0) bg_active_tab_pane_g3_cp4

0xb1e7,	// (0x000523a7) bg_passive_tab_pane_g1_cp4

0x27dd,	// (0x0004999d) bg_passive_tab_pane_g2_cp4

0xb1f0,	// (0x000523b0) bg_passive_tab_pane_g3_cp4

0x2867,	// (0x00049a27) bg_active_tab_pane_g1_cp5

0x27dd,	// (0x0004999d) bg_active_tab_pane_g2_cp5

0x2870,	// (0x00049a30) bg_active_tab_pane_g3_cp5

0x2867,	// (0x00049a27) bg_passive_tab_pane_g1_cp5

0x27dd,	// (0x0004999d) bg_passive_tab_pane_g2_cp5

0x2870,	// (0x00049a30) bg_passive_tab_pane_g3_cp5

0x4f25,	// (0x0004c0e5) list_set_graphic_pane_ParamLimits

0x4f25,	// (0x0004c0e5) list_set_graphic_pane

0xa2e7,	// (0x000514a7) bg_set_opt_pane_cp4

0x288f,	// (0x00049a4f) list_set_graphic_pane_g1_ParamLimits

0x288f,	// (0x00049a4f) list_set_graphic_pane_g1

0x289b,	// (0x00049a5b) list_set_graphic_pane_g2_ParamLimits

0x289b,	// (0x00049a5b) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x000568f3) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x000568f3) list_set_graphic_pane_g

0x0009,

0xfab8,	// (0x00056c78) volume_small_pane_cp_g

0x28bf,	// (0x00049a7f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x28bf,	// (0x00049a7f) list_double2_large_graphic_pane_g1_cp2

0x28cd,	// (0x00049a8d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x28cd,	// (0x00049a8d) list_double2_large_graphic_pane_g2_cp2

0x28de,	// (0x00049a9e) list_double2_large_graphic_pane_g3_cp2

0x28e6,	// (0x00049aa6) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x28e6,	// (0x00049aa6) list_double2_large_graphic_pane_t1_cp2

0x28fc,	// (0x00049abc) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x28fc,	// (0x00049abc) list_double2_large_graphic_pane_t2_cp2

0x44d1,	// (0x0004b691) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x44d1,	// (0x0004b691) list_double_large_graphic_pane_g1_cp2

0x44e4,	// (0x0004b6a4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x44e4,	// (0x0004b6a4) list_double_large_graphic_pane_g2_cp2

0x2a71,	// (0x00049c31) list_double_large_graphic_pane_g3_cp2

0x44f5,	// (0x0004b6b5) list_double_large_graphic_pane_g4_cp

0x44fd,	// (0x0004b6bd) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x44fd,	// (0x0004b6bd) list_double_large_graphic_pane_t1_cp2

0x4514,	// (0x0004b6d4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4514,	// (0x0004b6d4) list_double_large_graphic_pane_t2_cp2

0x296d,	// (0x00049b2d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x296d,	// (0x00049b2d) list_double2_graphic_pane_g1_cp2

0x297b,	// (0x00049b3b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x297b,	// (0x00049b3b) list_double2_graphic_pane_g2_cp2

0x298c,	// (0x00049b4c) list_double2_graphic_pane_g3_cp2

0x2996,	// (0x00049b56) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2996,	// (0x00049b56) list_double2_graphic_pane_t1_cp2

0x29ac,	// (0x00049b6c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x29ac,	// (0x00049b6c) list_double2_graphic_pane_t2_cp2

0x2545,	// (0x00049705) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2545,	// (0x00049705) list_single_number_heading_pane_g1_cp2

0x29be,	// (0x00049b7e) list_single_number_heading_pane_g2_cp2

0x29c6,	// (0x00049b86) list_single_number_heading_pane_t1_cp2_ParamLimits

0x29c6,	// (0x00049b86) list_single_number_heading_pane_t1_cp2

0x29dc,	// (0x00049b9c) list_single_number_heading_pane_t2_cp2_ParamLimits

0x29dc,	// (0x00049b9c) list_single_number_heading_pane_t2_cp2

0x29f0,	// (0x00049bb0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x29f0,	// (0x00049bb0) list_single_number_heading_pane_t3_cp2

0x2545,	// (0x00049705) list_single_heading_pane_g1_cp2_ParamLimits

0x2545,	// (0x00049705) list_single_heading_pane_g1_cp2

0x29be,	// (0x00049b7e) list_single_heading_pane_g2_cp2

0x29c6,	// (0x00049b86) list_single_heading_pane_t1_cp2_ParamLimits

0x29c6,	// (0x00049b86) list_single_heading_pane_t1_cp2

0x42cb,	// (0x0004b48b) list_single_heading_pane_t2_cp2_ParamLimits

0x42cb,	// (0x0004b48b) list_single_heading_pane_t2_cp2

0x4213,	// (0x0004b3d3) list_double_graphic_pane_g1_cp2_ParamLimits

0x4213,	// (0x0004b3d3) list_double_graphic_pane_g1_cp2

0x421f,	// (0x0004b3df) list_double_graphic_pane_g2_cp2_ParamLimits

0x421f,	// (0x0004b3df) list_double_graphic_pane_g2_cp2

0x422e,	// (0x0004b3ee) list_double_graphic_pane_g3_cp2

0x4236,	// (0x0004b3f6) list_double_graphic_pane_t1_cp2_ParamLimits

0x4236,	// (0x0004b3f6) list_double_graphic_pane_t1_cp2

0x424c,	// (0x0004b40c) list_double_graphic_pane_t2_cp2_ParamLimits

0x424c,	// (0x0004b40c) list_double_graphic_pane_t2_cp2

0x2a65,	// (0x00049c25) list_double_number_pane_g1_cp2_ParamLimits

0x2a65,	// (0x00049c25) list_double_number_pane_g1_cp2

0x2a71,	// (0x00049c31) list_double_number_pane_g2_cp2

0x41d7,	// (0x0004b397) list_double_number_pane_t1_cp2_ParamLimits

0x41d7,	// (0x0004b397) list_double_number_pane_t1_cp2

0x41eb,	// (0x0004b3ab) list_double_number_pane_t2_cp2_ParamLimits

0x41eb,	// (0x0004b3ab) list_double_number_pane_t2_cp2

0x4201,	// (0x0004b3c1) list_double_number_pane_t3_cp2_ParamLimits

0x4201,	// (0x0004b3c1) list_double_number_pane_t3_cp2

0x40c0,	// (0x0004b280) list_single_graphic_pane_g1_cp2_ParamLimits

0x40c0,	// (0x0004b280) list_single_graphic_pane_g1_cp2

0x2acb,	// (0x00049c8b) list_single_graphic_pane_g2_cp2_ParamLimits

0x2acb,	// (0x00049c8b) list_single_graphic_pane_g2_cp2

0x2ad7,	// (0x00049c97) list_single_graphic_pane_g3_cp2

0x4096,	// (0x0004b256) list_single_graphic_pane_t1_cp2_ParamLimits

0x4096,	// (0x0004b256) list_single_graphic_pane_t1_cp2

0x2acb,	// (0x00049c8b) list_single_number_pane_g1_cp2_ParamLimits

0x2acb,	// (0x00049c8b) list_single_number_pane_g1_cp2

0x2ad7,	// (0x00049c97) list_single_number_pane_g2_cp2

0x4096,	// (0x0004b256) list_single_number_pane_t1_cp2_ParamLimits

0x4096,	// (0x0004b256) list_single_number_pane_t1_cp2

0x40ac,	// (0x0004b26c) list_single_number_pane_t2_cp2_ParamLimits

0x40ac,	// (0x0004b26c) list_single_number_pane_t2_cp2

0x28cd,	// (0x00049a8d) list_double2_pane_g1_cp2_ParamLimits

0x28cd,	// (0x00049a8d) list_double2_pane_g1_cp2

0x28de,	// (0x00049a9e) list_double2_pane_g2_cp2

0x2a3d,	// (0x00049bfd) list_double2_pane_t1_cp2_ParamLimits

0x2a3d,	// (0x00049bfd) list_double2_pane_t1_cp2

0x2a53,	// (0x00049c13) list_double2_pane_t2_cp2_ParamLimits

0x2a53,	// (0x00049c13) list_double2_pane_t2_cp2

0x2a65,	// (0x00049c25) list_double_pane_g1_cp2_ParamLimits

0x2a65,	// (0x00049c25) list_double_pane_g1_cp2

0x2a71,	// (0x00049c31) list_double_pane_g2_cp2

0x2a79,	// (0x00049c39) list_double_pane_t1_cp2_ParamLimits

0x2a79,	// (0x00049c39) list_double_pane_t1_cp2

0x2a8f,	// (0x00049c4f) list_double_pane_t2_cp2_ParamLimits

0x2a8f,	// (0x00049c4f) list_double_pane_t2_cp2

0x2abb,	// (0x00049c7b) list_single_pane_cp2_g3

0x2acb,	// (0x00049c8b) list_single_pane_g1_cp2_ParamLimits

0x2acb,	// (0x00049c8b) list_single_pane_g1_cp2

0x2ad7,	// (0x00049c97) list_single_pane_g2_cp2

0x2adf,	// (0x00049c9f) list_single_pane_t1_cp2_ParamLimits

0x2adf,	// (0x00049c9f) list_single_pane_t1_cp2

0x2af7,	// (0x00049cb7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2af7,	// (0x00049cb7) list_single_large_graphic_pane_g1_cp2

0x2b05,	// (0x00049cc5) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2b05,	// (0x00049cc5) list_single_large_graphic_pane_g2_cp2

0x2b11,	// (0x00049cd1) list_single_large_graphic_pane_g3_cp2

0x2b19,	// (0x00049cd9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2b19,	// (0x00049cd9) list_single_large_graphic_pane_g4_cp1

0x2b33,	// (0x00049cf3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2b33,	// (0x00049cf3) list_single_large_graphic_pane_t1_cp2

0x4060,	// (0x0004b220) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4060,	// (0x0004b220) list_single_graphic_heading_pane_g1_cp2

0x402d,	// (0x0004b1ed) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x402d,	// (0x0004b1ed) list_single_graphic_heading_pane_g4_cp2

0x2ad7,	// (0x00049c97) list_single_graphic_heading_pane_g5_cp2

0x406c,	// (0x0004b22c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x406c,	// (0x0004b22c) list_single_graphic_heading_pane_t1_cp2

0x4082,	// (0x0004b242) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4082,	// (0x0004b242) list_single_graphic_heading_pane_t2_cp2

0x4021,	// (0x0004b1e1) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4021,	// (0x0004b1e1) list_single_2graphic_pane_g1_cp2

0x402d,	// (0x0004b1ed) list_single_2graphic_pane_g2_cp2_ParamLimits

0x402d,	// (0x0004b1ed) list_single_2graphic_pane_g2_cp2

0x2ad7,	// (0x00049c97) list_single_2graphic_pane_g3_cp2

0x403e,	// (0x0004b1fe) list_single_2graphic_pane_g4_cp2_ParamLimits

0x403e,	// (0x0004b1fe) list_single_2graphic_pane_g4_cp2

0x404a,	// (0x0004b20a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x404a,	// (0x0004b20a) list_single_2graphic_pane_t1_cp2

0xa1f7,	// (0x000513b7) list_highlight_pane_g10_cp1

0x3bf9,	// (0x0004adb9) list_highlight_pane_g1_cp1

0x3c01,	// (0x0004adc1) list_highlight_pane_g2_cp1

0x3c09,	// (0x0004adc9) list_highlight_pane_g3_cp1

0x3c11,	// (0x0004add1) list_highlight_pane_g4_cp1

0x3c19,	// (0x0004add9) list_highlight_pane_g5_cp1

0x3c21,	// (0x0004ade1) list_highlight_pane_g6_cp1

0x3c29,	// (0x0004ade9) list_highlight_pane_g7_cp1

0x3c31,	// (0x0004adf1) list_highlight_pane_g8_cp1

0x3c39,	// (0x0004adf9) list_highlight_pane_g9_cp1

0xc9a9,	// (0x00053b69) form_field_slider_pane_t3

0xc9b7,	// (0x00053b77) form_field_slider_pane_t4

0x3b35,	// (0x0004acf5) slider_form_pane_ParamLimits

0x3b35,	// (0x0004acf5) slider_form_pane

0xa2e7,	// (0x000514a7) control_abbreviations

0xa2e7,	// (0x000514a7) control_conventions

0xa2e7,	// (0x000514a7) control_definitions

0xa2e7,	// (0x000514a7) format_table_attribute

0x4321,	// (0x0004b4e1) bg_popup_preview_window_pane_g9

0xa2e7,	// (0x000514a7) format_table_data2

0xa2e7,	// (0x000514a7) format_table_data3

0xa2e7,	// (0x000514a7) format_table_data_example

0x0008,

0xa2e7,	// (0x000514a7) intro_purpose

0xf8ca,	// (0x00056a8a) bg_popup_preview_window_pane_g

0xa2e7,	// (0x000514a7) texts_category

0xa2e7,	// (0x000514a7) texts_graphics

0x2b49,	// (0x00049d09) text_digital

0x2b58,	// (0x00049d18) text_primary

0x2b67,	// (0x00049d27) text_primary_small

0x2b76,	// (0x00049d36) text_secondary

0x2b85,	// (0x00049d45) text_title

0x4a4e,	// (0x0004bc0e) bg_passive_tab_pane_g1_cp3_srt

0x27dd,	// (0x0004999d) bg_passive_tab_pane_g2_cp3_srt

0x4a57,	// (0x0004bc17) bg_passive_tab_pane_g3_cp3_srt

0xa532,	// (0x000516f2) bg_active_tab_pane_cp3_srt_ParamLimits

0xa532,	// (0x000516f2) bg_active_tab_pane_cp3_srt

0x4a60,	// (0x0004bc20) tabs_4_active_pane_srt_g1

0xcd91,	// (0x00053f51) tabs_4_active_pane_srt_t1_ParamLimits

0xcd91,	// (0x00053f51) tabs_4_active_pane_srt_t1

0x4a4e,	// (0x0004bc0e) bg_active_tab_pane_g1_cp3_copy1

0x27dd,	// (0x0004999d) bg_active_tab_pane_g2_cp3_copy1

0x4a57,	// (0x0004bc17) bg_active_tab_pane_g3_cp3_copy1

0xa574,	// (0x00051734) tabs_2_long_active_pane_srt_ParamLimits

0xa574,	// (0x00051734) tabs_2_long_active_pane_srt

0xa574,	// (0x00051734) tabs_2_long_passive_pane_srt_ParamLimits

0xa574,	// (0x00051734) tabs_2_long_passive_pane_srt

0x2ebb,	// (0x0004a07b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2ebb,	// (0x0004a07b) bg_passive_tab_pane_cp4_srt

0x475b,	// (0x0004b91b) bg_passive_tab_pane_g1_cp4_srt

0x27dd,	// (0x0004999d) bg_passive_tab_pane_g2_cp4_srt

0x4764,	// (0x0004b924) bg_passive_tab_pane_g3_cp4_srt

0xa574,	// (0x00051734) bg_active_tab_pane_cp4_srt_ParamLimits

0xa574,	// (0x00051734) bg_active_tab_pane_cp4_srt

0xcb89,	// (0x00053d49) tabs_2_long_active_pane_srt_t1_ParamLimits

0xcb89,	// (0x00053d49) tabs_2_long_active_pane_srt_t1

0x475b,	// (0x0004b91b) bg_active_tab_pane_g1_cp4_srt

0x27dd,	// (0x0004999d) bg_active_tab_pane_g2_cp4_srt

0x4764,	// (0x0004b924) bg_active_tab_pane_g3_cp4_srt

0xa532,	// (0x000516f2) tabs_3_long_active_pane_srt_ParamLimits

0xa532,	// (0x000516f2) tabs_3_long_active_pane_srt

0xa532,	// (0x000516f2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xa532,	// (0x000516f2) tabs_3_long_passive_pane_cp_srt

0xa532,	// (0x000516f2) tabs_3_long_passive_pane_srt_ParamLimits

0xa532,	// (0x000516f2) tabs_3_long_passive_pane_srt

0x2ebb,	// (0x0004a07b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2ebb,	// (0x0004a07b) bg_passive_tab_pane_cp5_srt

0x2867,	// (0x00049a27) bg_passive_tab_pane_g1_cp5_srt

0x27dd,	// (0x0004999d) bg_passive_tab_pane_g2_cp5_srt

0x2870,	// (0x00049a30) bg_passive_tab_pane_g3_cp5_srt

0xa574,	// (0x00051734) bg_active_tab_pane_cp5_srt_ParamLimits

0xa574,	// (0x00051734) bg_active_tab_pane_cp5_srt

0xcb73,	// (0x00053d33) tabs_3_long_active_pane_srt_t1_ParamLimits

0xcb73,	// (0x00053d33) tabs_3_long_active_pane_srt_t1

0x2867,	// (0x00049a27) bg_active_tab_pane_g1_cp5_srt

0x27dd,	// (0x0004999d) bg_active_tab_pane_g2_cp5_srt

0x2870,	// (0x00049a30) bg_active_tab_pane_g3_cp5_srt

0x473b,	// (0x0004b8fb) navi_text_pane_srt_t1

0x4733,	// (0x0004b8f3) navi_icon_pane_srt_g1

0x2d5d,	// (0x00049f1d) midp_editing_number_pane_srt

0x2b94,	// (0x00049d54) midp_ticker_pane_srt

0x2d65,	// (0x00049f25) midp_ticker_pane_srt_g1

0x2d6d,	// (0x00049f2d) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x00056912) midp_ticker_pane_srt_g

0x2d75,	// (0x00049f35) midp_ticker_pane_srt_t1

0x4724,	// (0x0004b8e4) midp_editing_number_pane_t1_copy1

0xb22b,	// (0x000523eb) listscroll_midp_pane

0xb22b,	// (0x000523eb) midp_form_pane

0x2c0b,	// (0x00049dcb) midp_info_popup_window_ParamLimits

0x2c0b,	// (0x00049dcb) midp_info_popup_window

0xe45b,	// (0x0005561b) bg_popup_sub_pane_cp50_ParamLimits

0xe45b,	// (0x0005561b) bg_popup_sub_pane_cp50

0x381b,	// (0x0004a9db) listscroll_midp_info_pane_ParamLimits

0x381b,	// (0x0004a9db) listscroll_midp_info_pane

0x37fb,	// (0x0004a9bb) listscroll_form_midp_pane_ParamLimits

0x37fb,	// (0x0004a9bb) listscroll_form_midp_pane

0x3807,	// (0x0004a9c7) scroll_bar_cp050

0x37fb,	// (0x0004a9bb) list_midp_pane

0x5502,	// (0x0004c6c2) signal_pane_g2_cp

0x3715,	// (0x0004a8d5) listscroll_midp_info_pane_t1_ParamLimits

0x3715,	// (0x0004a8d5) listscroll_midp_info_pane_t1

0x372d,	// (0x0004a8ed) listscroll_midp_info_pane_t2_ParamLimits

0x372d,	// (0x0004a8ed) listscroll_midp_info_pane_t2

0x376b,	// (0x0004a92b) listscroll_midp_info_pane_t3_ParamLimits

0x376b,	// (0x0004a92b) listscroll_midp_info_pane_t3

0x37a5,	// (0x0004a965) listscroll_midp_info_pane_t4_ParamLimits

0x37a5,	// (0x0004a965) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x000569c5) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x000569c5) listscroll_midp_info_pane_t

0xe4b0,	// (0x00055670) scroll_pane_cp21

0x36af,	// (0x0004a86f) form_midp_field_choice_group_pane

0x36b8,	// (0x0004a878) form_midp_field_text_pane

0x36fb,	// (0x0004a8bb) form_midp_field_time_pane

0x3703,	// (0x0004a8c3) form_midp_gauge_slider_pane

0x370c,	// (0x0004a8cc) form_midp_gauge_wait_pane

0xa2e7,	// (0x000514a7) form_midp_image_pane

0x9faa,	// (0x0005116a) list_single_midp_pane_ParamLimits

0x9faa,	// (0x0005116a) list_single_midp_pane

0xc981,	// (0x00053b41) form_midp_field_text_pane_t1

0x3465,	// (0x0004a625) input_focus_pane_cp050

0x369e,	// (0x0004a85e) list_midp_form_text_pane

0x3642,	// (0x0004a802) form_midp_field_choice_group_pane_t1

0x3650,	// (0x0004a810) input_focus_pane_cp051

0x3664,	// (0x0004a824) list_midp_choice_pane

0xa2e7,	// (0x000514a7) status_idle_pane

0x3626,	// (0x0004a7e6) form_midp_field_time_pane_t1

0xa1f7,	// (0x000513b7) wait_anim_pane_g2_copy1

0x3634,	// (0x0004a7f4) form_midp_field_time_pane_t2

0x0001,

0x2cbb,	// (0x00049e7b) aid_navinavi_width_2_pane

0xf800,	// (0x000569c0) form_midp_field_time_pane_t

0xa2e7,	// (0x000514a7) input_focus_pane_cp052

0xa2e7,	// (0x000514a7) bg_input_focus_pane_cp040

0x35e6,	// (0x0004a7a6) form_midp_gauge_slider_pane_t1

0x35f4,	// (0x0004a7b4) form_midp_gauge_slider_pane_t2

0xc965,	// (0x00053b25) form_midp_gauge_slider_pane_t3

0xc973,	// (0x00053b33) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x000569b7) form_midp_gauge_slider_pane_t

0x361e,	// (0x0004a7de) form_midp_slider_pane

0xa574,	// (0x00051734) bg_input_focus_pane_cp041_ParamLimits

0xa574,	// (0x00051734) bg_input_focus_pane_cp041

0x35b3,	// (0x0004a773) form_midp_gauge_wait_pane_t1_ParamLimits

0x35b3,	// (0x0004a773) form_midp_gauge_wait_pane_t1

0x35c5,	// (0x0004a785) form_midp_gauge_wait_pane_t2_ParamLimits

0x35c5,	// (0x0004a785) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x000569b2) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x000569b2) form_midp_gauge_wait_pane_t

0x35d7,	// (0x0004a797) form_midp_wait_pane_ParamLimits

0x35d7,	// (0x0004a797) form_midp_wait_pane

0x357b,	// (0x0004a73b) form_midp_image_pane_g1

0x3584,	// (0x0004a744) form_midp_image_pane_t1

0x3593,	// (0x0004a753) form_midp_image_pane_t2

0x35a2,	// (0x0004a762) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x000569ab) form_midp_image_pane_t

0x3572,	// (0x0004a732) list_single_midp_pane_g1

0xee68,	// (0x00056028) list_single_midp_pane_t1

0xc94e,	// (0x00053b0e) list_midp_form_item_pane_ParamLimits

0xc94e,	// (0x00053b0e) list_midp_form_item_pane

0x2c63,	// (0x00049e23) list_midp_form_item_pane_t1

0x2c72,	// (0x00049e32) midp_ticker_pane_g1

0x2c7e,	// (0x00049e3e) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x000568f8) midp_ticker_pane_g

0xb2cf,	// (0x0005248f) midp_ticker_pane_t1

0xcd12,	// (0x00053ed2) midp_editing_number_pane_t1

0x496f,	// (0x0004bb2f) midp_editing_number_pane

0x497e,	// (0x0004bb3e) midp_ticker_pane

0x4714,	// (0x0004b8d4) ai_message_heading_pane

0xa2e7,	// (0x000514a7) bg_popup_window_pane_cp14

0x471c,	// (0x0004b8dc) listscroll_ai_message_pane

0x469a,	// (0x0004b85a) ai_message_heading_pane_g1_ParamLimits

0x469a,	// (0x0004b85a) ai_message_heading_pane_g1

0x46a6,	// (0x0004b866) ai_message_heading_pane_g2_ParamLimits

0x46a6,	// (0x0004b866) ai_message_heading_pane_g2

0x46b4,	// (0x0004b874) ai_message_heading_pane_g3_ParamLimits

0x46b4,	// (0x0004b874) ai_message_heading_pane_g3

0x46c0,	// (0x0004b880) ai_message_heading_pane_g4_ParamLimits

0x46c0,	// (0x0004b880) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x00056aec) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x00056aec) ai_message_heading_pane_g

0x46cc,	// (0x0004b88c) ai_message_heading_pane_t1_ParamLimits

0x46cc,	// (0x0004b88c) ai_message_heading_pane_t1

0x46e6,	// (0x0004b8a6) ai_message_heading_pane_t2_ParamLimits

0x46e6,	// (0x0004b8a6) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x00056af5) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x00056af5) ai_message_heading_pane_t

0x46fa,	// (0x0004b8ba) bg_popup_heading_pane_cp1_ParamLimits

0x46fa,	// (0x0004b8ba) bg_popup_heading_pane_cp1

0x4688,	// (0x0004b848) list_ai_message_pane_ParamLimits

0x4688,	// (0x0004b848) list_ai_message_pane

0xe4b0,	// (0x00055670) scroll_pane_cp10

0x4624,	// (0x0004b7e4) list_ai_message_pane_g1

0x462c,	// (0x0004b7ec) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x00056ac9) list_ai_message_pane_g

0x4634,	// (0x0004b7f4) list_ai_message_pane_t1_ParamLimits

0x4634,	// (0x0004b7f4) list_ai_message_pane_t1

0x4649,	// (0x0004b809) list_ai_message_pane_t2_ParamLimits

0x4649,	// (0x0004b809) list_ai_message_pane_t2

0x465e,	// (0x0004b81e) list_ai_message_pane_t3_ParamLimits

0x465e,	// (0x0004b81e) list_ai_message_pane_t3

0x4673,	// (0x0004b833) list_ai_message_pane_t4_ParamLimits

0x4673,	// (0x0004b833) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x00056ace) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x00056ace) list_ai_message_pane_t

0xcb59,	// (0x00053d19) cell_ai_soft_ind_pane_ParamLimits

0xcb59,	// (0x00053d19) cell_ai_soft_ind_pane

0x2c9c,	// (0x00049e5c) cell_ai_soft_ind_pane_g1_ParamLimits

0x2c9c,	// (0x00049e5c) cell_ai_soft_ind_pane_g1

0xa2e7,	// (0x000514a7) grid_highlight_cp1

0x2ca9,	// (0x00049e69) text_secondary_cp56_ParamLimits

0x2ca9,	// (0x00049e69) text_secondary_cp56

0x45e2,	// (0x0004b7a2) example_general_pane_ParamLimits

0x45e2,	// (0x0004b7a2) example_general_pane

0x45ee,	// (0x0004b7ae) example_parent_pane_g1_ParamLimits

0x45ee,	// (0x0004b7ae) example_parent_pane_g1

0x45fa,	// (0x0004b7ba) example_parent_pane_t1_ParamLimits

0x45fa,	// (0x0004b7ba) example_parent_pane_t1

0xb939,	// (0x00052af9) popup_preview_text_window_ParamLimits

0xb939,	// (0x00052af9) popup_preview_text_window

0x2ac3,	// (0x00049c83) list_single_pane_cp2_g4

0xa925,	// (0x00051ae5) bg_popup_preview_window_pane_ParamLimits

0xa925,	// (0x00051ae5) bg_popup_preview_window_pane

0x432b,	// (0x0004b4eb) popup_preview_text_window_t1_ParamLimits

0x432b,	// (0x0004b4eb) popup_preview_text_window_t1

0x4349,	// (0x0004b509) popup_preview_text_window_t2_ParamLimits

0x4349,	// (0x0004b509) popup_preview_text_window_t2

0x4392,	// (0x0004b552) popup_preview_text_window_t3_ParamLimits

0x4392,	// (0x0004b552) popup_preview_text_window_t3

0x43d7,	// (0x0004b597) popup_preview_text_window_t4_ParamLimits

0x43d7,	// (0x0004b597) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x00056a9d) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x00056a9d) popup_preview_text_window_t

0x4455,	// (0x0004b615) scroll_pane_cp11

0x33f1,	// (0x0004a5b1) bg_popup_preview_window_pane_g1

0x42df,	// (0x0004b49f) bg_popup_preview_window_pane_g2

0x42e9,	// (0x0004b4a9) bg_popup_preview_window_pane_g3

0x42f3,	// (0x0004b4b3) bg_popup_preview_window_pane_g4

0x42fd,	// (0x0004b4bd) bg_popup_preview_window_pane_g5

0x4307,	// (0x0004b4c7) bg_popup_preview_window_pane_g6

0x430f,	// (0x0004b4cf) bg_popup_preview_window_pane_g7

0x4317,	// (0x0004b4d7) bg_popup_preview_window_pane_g8

0xf1df,	// (0x0005639f) aid_popup_width_pane

0xb8a9,	// (0x00052a69) popup_midp_note_alarm_window_ParamLimits

0xb8a9,	// (0x00052a69) popup_midp_note_alarm_window

0xae79,	// (0x00052039) data_form_pane_ParamLimits

0x9e05,	// (0x00050fc5) form_field_data_pane_g1

0x9e0f,	// (0x00050fcf) form_field_data_pane_t1_ParamLimits

0xae85,	// (0x00052045) input_focus_pane_ParamLimits

0xec77,	// (0x00055e37) data_form_wide_pane_ParamLimits

0xec88,	// (0x00055e48) form_field_data_wide_pane_g1

0xec94,	// (0x00055e54) form_field_data_wide_pane_t1_ParamLimits

0xabe2,	// (0x00051da2) input_focus_pane_cp6_ParamLimits

0xaf61,	// (0x00052121) input_popup_find_pane_g1_ParamLimits

0xaf61,	// (0x00052121) input_popup_find_pane_g1

0x02db,	// (0x0004749b) aid_navi_side_left_pane

0x02f0,	// (0x000474b0) aid_navi_side_right_pane

0x3cf4,	// (0x0004aeb4) bg_popup_window_pane_cp30_ParamLimits

0x3cf4,	// (0x0004aeb4) bg_popup_window_pane_cp30

0x3d6e,	// (0x0004af2e) popup_midp_note_alarm_window_g1_ParamLimits

0x3d6e,	// (0x0004af2e) popup_midp_note_alarm_window_g1

0x3d9e,	// (0x0004af5e) popup_midp_note_alarm_window_t1_ParamLimits

0x3d9e,	// (0x0004af5e) popup_midp_note_alarm_window_t1

0x3e3f,	// (0x0004afff) popup_midp_note_alarm_window_t2_ParamLimits

0x3e3f,	// (0x0004afff) popup_midp_note_alarm_window_t2

0x3eed,	// (0x0004b0ad) popup_midp_note_alarm_window_t3_ParamLimits

0x3eed,	// (0x0004b0ad) popup_midp_note_alarm_window_t3

0x3f1f,	// (0x0004b0df) popup_midp_note_alarm_window_t4_ParamLimits

0x3f1f,	// (0x0004b0df) popup_midp_note_alarm_window_t4

0x3f45,	// (0x0004b105) popup_midp_note_alarm_window_t5_ParamLimits

0x3f45,	// (0x0004b105) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x00056a3a) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x00056a3a) popup_midp_note_alarm_window_t

0x3ff1,	// (0x0004b1b1) wait_bar_pane_cp1_ParamLimits

0x3ff1,	// (0x0004b1b1) wait_bar_pane_cp1

0xa2e7,	// (0x000514a7) wait_anim_pane_copy1

0xa2e7,	// (0x000514a7) wait_border_pane_copy1

0x39d9,	// (0x0004ab99) wait_border_pane_g1_copy1

0xecae,	// (0x00055e6e) form_field_popup_pane_g1

0x9e29,	// (0x00050fe9) form_field_popup_pane_t1_ParamLimits

0xae85,	// (0x00052045) input_focus_pane_cp7_ParamLimits

0xaeb3,	// (0x00052073) list_form_pane_ParamLimits

0xecb6,	// (0x00055e76) form_field_popup_wide_pane_g1

0xecbe,	// (0x00055e7e) form_field_popup_wide_pane_t1_ParamLimits

0xae85,	// (0x00052045) input_focus_pane_cp8_ParamLimits

0xaebf,	// (0x0005207f) list_form_wide_pane_ParamLimits

0x4ae9,	// (0x0004bca9) aid_size_cell_graphic_pane

0x9ea8,	// (0x00051068) data_form_pane_t1_ParamLimits

0x9fc6,	// (0x00051186) data_form_wide_pane_t1_ParamLimits

0xbd3b,	// (0x00052efb) bg_status_flat_pane

0xa46e,	// (0x0005162e) title_pane_t1_ParamLimits

0xa4fa,	// (0x000516ba) title_pane_t2_ParamLimits

0xa520,	// (0x000516e0) title_pane_t3_ParamLimits

0xf532,	// (0x000566f2) title_pane_t_ParamLimits

0xb08c,	// (0x0005224c) level_1_signal_ParamLimits

0xb09e,	// (0x0005225e) level_2_signal_ParamLimits

0xb0b1,	// (0x00052271) level_3_signal_ParamLimits

0xb0c4,	// (0x00052284) level_4_signal_ParamLimits

0xb0d7,	// (0x00052297) level_5_signal_ParamLimits

0xb0ea,	// (0x000522aa) level_6_signal_ParamLimits

0xb0fd,	// (0x000522bd) level_7_signal_ParamLimits

0xb08c,	// (0x0005224c) level_1_battery_ParamLimits

0xb09e,	// (0x0005225e) level_2_battery_ParamLimits

0xb0b1,	// (0x00052271) level_3_battery_ParamLimits

0xb0c4,	// (0x00052284) level_4_battery_ParamLimits

0xb0d7,	// (0x00052297) level_5_battery_ParamLimits

0xb0ea,	// (0x000522aa) level_6_battery_ParamLimits

0xb0fd,	// (0x000522bd) level_7_battery_ParamLimits

0x3bf9,	// (0x0004adb9) bg_status_flat_pane_g1

0x3c01,	// (0x0004adc1) bg_status_flat_pane_g2

0x3c09,	// (0x0004adc9) bg_status_flat_pane_g3

0x3c11,	// (0x0004add1) bg_status_flat_pane_g4

0x3c19,	// (0x0004add9) bg_status_flat_pane_g5

0x3c21,	// (0x0004ade1) bg_status_flat_pane_g6

0x3c29,	// (0x0004ade9) bg_status_flat_pane_g7

0xa548,	// (0x00051708) tabs_3_active_pane_t1_ParamLimits

0xa548,	// (0x00051708) tabs_3_passive_pane_t1_ParamLimits

0xa562,	// (0x00051722) tabs_4_active_pane_t1_ParamLimits

0xa562,	// (0x00051722) tabs_4_1_passive_pane_t1_ParamLimits

0xaf77,	// (0x00052137) tabs_2_active_pane_t1_ParamLimits

0xaf77,	// (0x00052137) tabs_2_passive_pane_t1_ParamLimits

0xa574,	// (0x00051734) bg_active_tab_pane_cp4_ParamLimits

0xaf89,	// (0x00052149) tabs_2_long_active_pane_t1_ParamLimits

0x2ebb,	// (0x0004a07b) bg_passive_tab_pane_cp4_ParamLimits

0x0fac,	// (0x0004816c) list_single_midp_graphic_pane_t1_ParamLimits

0xa574,	// (0x00051734) bg_active_tab_pane_cp5_ParamLimits

0xaf9c,	// (0x0005215c) tabs_3_long_active_pane_t1_ParamLimits

0x2ebb,	// (0x0004a07b) bg_passive_tab_pane_cp5_ParamLimits

0x0fac,	// (0x0004816c) list_single_midp_graphic_pane_t1

0xbd3b,	// (0x00052efb) bg_status_flat_pane_ParamLimits

0x3075,	// (0x0004a235) indicator_pane_cp2_ParamLimits

0x3075,	// (0x0004a235) indicator_pane_cp2

0xc77f,	// (0x0005393f) navi_pane_srt_ParamLimits

0xc77f,	// (0x0005393f) navi_pane_srt

0x31dc,	// (0x0004a39c) popup_clock_digital_analogue_window_cp1

0xa68d,	// (0x0005184d) indicator_pane_t1

0x2b94,	// (0x00049d54) copy_highlight_pane

0x2b94,	// (0x00049d54) cursor_graphics_pane

0x2b94,	// (0x00049d54) graphic_within_text_pane

0x2b94,	// (0x00049d54) link_highlight_pane

0x4418,	// (0x0004b5d8) popup_preview_text_window_t5_ParamLimits

0x4418,	// (0x0004b5d8) popup_preview_text_window_t5

0x2cc5,	// (0x00049e85) cursor_digital_pane

0x2cc5,	// (0x00049e85) cursor_primary_pane

0x2cd6,	// (0x00049e96) cursor_primary_small_pane

0x2cde,	// (0x00049e9e) cursor_secondary_pane

0x2ce6,	// (0x00049ea6) cursor_title_pane

0x2cc5,	// (0x00049e85) link_highlight_digital_pane

0x2ccd,	// (0x00049e8d) link_highlight_primary_pane

0x2cd6,	// (0x00049e96) link_highlight_primary_small_pane

0x2cde,	// (0x00049e9e) link_highlight_secondary_pane

0x2ce6,	// (0x00049ea6) link_highlight_title_pane

0x2cc5,	// (0x00049e85) copy_highlight_digital_pane

0x2cc5,	// (0x00049e85) copy_highlight_primary_pane

0x2cd6,	// (0x00049e96) copy_highlight_primary_small_pane

0x2cde,	// (0x00049e9e) copy_highlight_secondary_pane

0x2ce6,	// (0x00049ea6) copy_highlight_title_pane

0x2cde,	// (0x00049e9e) graphic_text_digital_pane

0x3c97,	// (0x0004ae57) graphic_text_primary_pane

0x3ca0,	// (0x0004ae60) graphic_text_primary_small_pane

0x2cd6,	// (0x00049e96) graphic_text_secondary_pane

0x2cc5,	// (0x00049e85) graphic_text_title_pane

0xb2e1,	// (0x000524a1) cursor_primary_pane_g1

0x3c89,	// (0x0004ae49) cursor_text_primary_t1

0xc9d9,	// (0x00053b99) cursor_primary_small_pane_g1

0x3c7b,	// (0x0004ae3b) cursor_text_primary_small_t1

0xc9cf,	// (0x00053b8f) cursor_primary_small_pane_g1_copy1

0x3c63,	// (0x0004ae23) cursor_text_primary_small_t1_copy1

0x3c41,	// (0x0004ae01) cursor_text_title_t1

0xc9c5,	// (0x00053b85) cursor_title_pane_g1

0xb2e1,	// (0x000524a1) cursor_digital_pane_g1

0x2cf8,	// (0x00049eb8) cursor_text_digital_t1

0x2d06,	// (0x00049ec6) link_highlight_primary_pane_g1

0x3bea,	// (0x0004adaa) link_highlight_primary_pane_t1

0x2d06,	// (0x00049ec6) link_highlight_primary_small_pane_g1

0x2d0e,	// (0x00049ece) link_highlight_primary_small_pane_t1

0x2d1d,	// (0x00049edd) link_highlight_secondary_pane_g1

0x2d25,	// (0x00049ee5) link_highlight_secondary_pane_t1

0x3b5e,	// (0x0004ad1e) link_highlight_title_pane_g1

0x3b66,	// (0x0004ad26) link_highlight_title_pane_t1

0x3b47,	// (0x0004ad07) link_highlight_digital_pane_g1

0x3b4f,	// (0x0004ad0f) link_highlight_digital_pane_t1

0x3a0f,	// (0x0004abcf) copy_highlight_primary_pane_g1

0x3a26,	// (0x0004abe6) copy_highlight_primary_pane_t1

0x3a0f,	// (0x0004abcf) copy_highlight_primary_small_pane_g1

0x3a17,	// (0x0004abd7) copy_highlight_primary_small_pane_t1

0x2d34,	// (0x00049ef4) copy_highlight_secondary_pane_g1

0x2d3c,	// (0x00049efc) copy_highlight_secondary_pane_t1

0x39f8,	// (0x0004abb8) copy_highlight_title_pane_g1

0x3a00,	// (0x0004abc0) copy_highlight_title_pane_t1

0x3a0f,	// (0x0004abcf) copy_highlight_digital_pane_g1

0x4cbb,	// (0x0004be7b) copy_highlight_digital_pane_t1

0x4c0f,	// (0x0004bdcf) graphic_text_primary_pane_g1

0x4c9f,	// (0x0004be5f) graphic_text_primary_pane_t1

0x4cad,	// (0x0004be6d) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x00056b69) graphic_text_primary_pane_t

0x4c7b,	// (0x0004be3b) graphic_text_primary_small_pane_g1

0x4c83,	// (0x0004be43) graphic_text_primary_small_pane_t1

0x4c91,	// (0x0004be51) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x00056b64) graphic_text_primary_small_pane_t

0x4c57,	// (0x0004be17) graphic_text_secondary_pane_g1

0x4c5f,	// (0x0004be1f) graphic_text_secondary_pane_t1

0x4c6d,	// (0x0004be2d) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x00056b5f) graphic_text_secondary_pane_t

0x4c33,	// (0x0004bdf3) graphic_text_title_pane_g1

0x4c3b,	// (0x0004bdfb) graphic_text_title_pane_t1

0x4c49,	// (0x0004be09) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x00056b5a) graphic_text_title_pane_t

0x4c0f,	// (0x0004bdcf) graphic_text_digital_pane_g1

0x4c17,	// (0x0004bdd7) graphic_text_digital_pane_t1

0x4c25,	// (0x0004bde5) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x00056b55) graphic_text_digital_pane_t

0xa574,	// (0x00051734) navi_icon_pane_srt_ParamLimits

0xa574,	// (0x00051734) navi_icon_pane_srt

0xa2e7,	// (0x000514a7) navi_midp_pane_srt

0xa2e7,	// (0x000514a7) navi_navi_pane_srt

0xa574,	// (0x00051734) navi_text_pane_srt_ParamLimits

0xa574,	// (0x00051734) navi_text_pane_srt

0x4bda,	// (0x0004bd9a) navi_navi_icon_text_pane_srt

0x4be2,	// (0x0004bda2) navi_navi_pane_srt_g1_ParamLimits

0x4be2,	// (0x0004bda2) navi_navi_pane_srt_g1

0x4bf4,	// (0x0004bdb4) navi_navi_pane_srt_g2_ParamLimits

0x4bf4,	// (0x0004bdb4) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x00056b50) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x00056b50) navi_navi_pane_srt_g

0x4c06,	// (0x0004bdc6) navi_navi_tabs_pane_srt

0x4bda,	// (0x0004bd9a) navi_navi_text_pane_srt

0x4bda,	// (0x0004bd9a) navi_navi_volume_pane_srt

0x4bcb,	// (0x0004bd8b) navi_navi_text_pane_srt_t1

0x13d9,	// (0x00048599) navi_navi_volume_pane_srt_g1

0x13e1,	// (0x000485a1) volume_small_pane_srt_ParamLimits

0x13e1,	// (0x000485a1) volume_small_pane_srt

0x06be,	// (0x0004787e) volume_small_pane_srt_g1_ParamLimits

0x06be,	// (0x0004787e) volume_small_pane_srt_g1

0x06ce,	// (0x0004788e) volume_small_pane_srt_g2_ParamLimits

0x06ce,	// (0x0004788e) volume_small_pane_srt_g2

0x06df,	// (0x0004789f) volume_small_pane_srt_g3_ParamLimits

0x06df,	// (0x0004789f) volume_small_pane_srt_g3

0x06f0,	// (0x000478b0) volume_small_pane_srt_g4_ParamLimits

0x06f0,	// (0x000478b0) volume_small_pane_srt_g4

0x0701,	// (0x000478c1) volume_small_pane_srt_g5_ParamLimits

0x0701,	// (0x000478c1) volume_small_pane_srt_g5

0x0712,	// (0x000478d2) volume_small_pane_srt_g6_ParamLimits

0x0712,	// (0x000478d2) volume_small_pane_srt_g6

0x0723,	// (0x000478e3) volume_small_pane_srt_g7_ParamLimits

0x0723,	// (0x000478e3) volume_small_pane_srt_g7

0x0734,	// (0x000478f4) volume_small_pane_srt_g8_ParamLimits

0x0734,	// (0x000478f4) volume_small_pane_srt_g8

0x0745,	// (0x00047905) volume_small_pane_srt_g9_ParamLimits

0x0745,	// (0x00047905) volume_small_pane_srt_g9

0x0756,	// (0x00047916) volume_small_pane_srt_g10_ParamLimits

0x0756,	// (0x00047916) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x000568fd) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x000568fd) volume_small_pane_srt_g

0xa9da,	// (0x00051b9a) query_popup_data_pane_cp2

0x4bb1,	// (0x0004bd71) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4bb1,	// (0x0004bd71) navi_navi_icon_text_pane_srt_t1

0x3c97,	// (0x0004ae57) navi_tabs_2_long_pane_srt

0x3c97,	// (0x0004ae57) navi_tabs_2_pane_srt

0x3c97,	// (0x0004ae57) navi_tabs_3_long_pane_srt

0x3c97,	// (0x0004ae57) navi_tabs_3_pane_srt

0x3c97,	// (0x0004ae57) navi_tabs_4_pane_srt

0x13b9,	// (0x00048579) tabs_2_active_pane_srt_ParamLimits

0x13b9,	// (0x00048579) tabs_2_active_pane_srt

0x13c9,	// (0x00048589) tabs_2_passive_pane_srt_ParamLimits

0x13c9,	// (0x00048589) tabs_2_passive_pane_srt

0x3465,	// (0x0004a625) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3465,	// (0x0004a625) bg_passive_tab_pane_cp1_srt

0x4b7d,	// (0x0004bd3d) bg_passive_tab_pane_g1_cp1_srt

0x27dd,	// (0x0004999d) bg_passive_tab_pane_g2_cp1_srt

0x4b86,	// (0x0004bd46) bg_passive_tab_pane_g3_cp1_srt

0xa532,	// (0x000516f2) bg_active_tab_pane_cp1_srt_ParamLimits

0xa532,	// (0x000516f2) bg_active_tab_pane_cp1_srt

0x4b8f,	// (0x0004bd4f) tabs_2_active_pane_srt_g1

0xce19,	// (0x00053fd9) tabs_2_active_pane_srt_t1_ParamLimits

0xce19,	// (0x00053fd9) tabs_2_active_pane_srt_t1

0x4b7d,	// (0x0004bd3d) bg_active_tab_pane_g1_cp1_srt

0x27dd,	// (0x0004999d) bg_active_tab_pane_g2_cp1_srt

0x4b86,	// (0x0004bd46) bg_active_tab_pane_g3_cp1_srt

0x1386,	// (0x00048546) tabs_3_active_pane_srt_ParamLimits

0x1386,	// (0x00048546) tabs_3_active_pane_srt

0x1397,	// (0x00048557) tabs_3_passive_pane_cp_srt_ParamLimits

0x1397,	// (0x00048557) tabs_3_passive_pane_cp_srt

0x13a8,	// (0x00048568) tabs_3_passive_pane_srt_ParamLimits

0x13a8,	// (0x00048568) tabs_3_passive_pane_srt

0x3465,	// (0x0004a625) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3465,	// (0x0004a625) bg_passive_tab_pane_cp2_srt

0x2d4b,	// (0x00049f0b) bg_passive_tab_pane_g1_cp2_srt

0x27dd,	// (0x0004999d) bg_passive_tab_pane_g2_cp2_srt

0x2d54,	// (0x00049f14) bg_passive_tab_pane_g3_cp2_srt

0xa532,	// (0x000516f2) bg_active_tab_pane_cp2_srt_ParamLimits

0xa532,	// (0x000516f2) bg_active_tab_pane_cp2_srt

0x4b63,	// (0x0004bd23) tabs_3_active_pane_srt_g1

0xce03,	// (0x00053fc3) tabs_3_active_pane_srt_t1_ParamLimits

0xce03,	// (0x00053fc3) tabs_3_active_pane_srt_t1

0x2d4b,	// (0x00049f0b) bg_active_tab_pane_g1_cp2_srt

0x27dd,	// (0x0004999d) bg_active_tab_pane_g2_cp2_srt

0x2d54,	// (0x00049f14) bg_active_tab_pane_g3_cp2_srt

0x133e,	// (0x000484fe) tabs_4_active_pane_srt_ParamLimits

0x133e,	// (0x000484fe) tabs_4_active_pane_srt

0x1350,	// (0x00048510) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1350,	// (0x00048510) tabs_4_passive_pane_cp2_srt

0x08d5,	// (0x00047a95) aid_size_cell_toolbar

0x47ce,	// (0x0004b98e) main_idle_act_pane_ParamLimits

0x0ab2,	// (0x00047c72) popup_large_graphic_colour_window_ParamLimits

0xbbfd,	// (0x00052dbd) popup_toolbar_window_ParamLimits

0xbbfd,	// (0x00052dbd) popup_toolbar_window

0x12ad,	// (0x0004846d) list_single_graphic_2heading_pane_ParamLimits

0x12ad,	// (0x0004846d) list_single_graphic_2heading_pane

0xe688,	// (0x00055848) aid_size_cell_apps_grid_lsc_pane

0xe69a,	// (0x0005585a) aid_size_cell_apps_grid_prt_pane

0x2ebb,	// (0x0004a07b) bg_wml_button_pane_cp1_ParamLimits

0x2ebb,	// (0x0004a07b) bg_wml_button_pane_cp1

0xc981,	// (0x00053b41) form_midp_field_text_pane_t1_ParamLimits

0x3465,	// (0x0004a625) input_focus_pane_cp050_ParamLimits

0x369e,	// (0x0004a85e) list_midp_form_text_pane_ParamLimits

0x3650,	// (0x0004a810) input_focus_pane_cp051_ParamLimits

0x3664,	// (0x0004a824) list_midp_choice_pane_ParamLimits

0x351e,	// (0x0004a6de) list_single_2graphic_pane_cp3_ParamLimits

0x351e,	// (0x0004a6de) list_single_2graphic_pane_cp3

0x3534,	// (0x0004a6f4) list_single_midp_graphic_pane_ParamLimits

0x3534,	// (0x0004a6f4) list_single_midp_graphic_pane

0xed2c,	// (0x00055eec) list_single_graphic_2heading_pane_g1_ParamLimits

0xed2c,	// (0x00055eec) list_single_graphic_2heading_pane_g1

0xed38,	// (0x00055ef8) list_single_graphic_2heading_pane_g4_ParamLimits

0xed38,	// (0x00055ef8) list_single_graphic_2heading_pane_g4

0xed44,	// (0x00055f04) list_single_graphic_2heading_pane_g5_ParamLimits

0xed44,	// (0x00055f04) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x00056950) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x00056950) list_single_graphic_2heading_pane_g

0xed50,	// (0x00055f10) list_single_graphic_2heading_pane_t1_ParamLimits

0xed50,	// (0x00055f10) list_single_graphic_2heading_pane_t1

0xed64,	// (0x00055f24) list_single_graphic_2heading_pane_t2_ParamLimits

0xed64,	// (0x00055f24) list_single_graphic_2heading_pane_t2

0xed80,	// (0x00055f40) list_single_graphic_2heading_pane_t3_ParamLimits

0xed80,	// (0x00055f40) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x00056957) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x00056957) list_single_graphic_2heading_pane_t

0x332f,	// (0x0004a4ef) bg_popup_sub_pane_cp2

0x3359,	// (0x0004a519) grid_toobar_pane

0x0f18,	// (0x000480d8) cell_toolbar_pane_ParamLimits

0x0f18,	// (0x000480d8) cell_toolbar_pane

0x3395,	// (0x0004a555) cell_toolbar_pane_g1_ParamLimits

0x3395,	// (0x0004a555) cell_toolbar_pane_g1

0x33a9,	// (0x0004a569) cell_toolbar_pane_g2_ParamLimits

0x33a9,	// (0x0004a569) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x00056965) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x00056965) cell_toolbar_pane_g

0x33cb,	// (0x0004a58b) grid_highlight_pane_cp2_ParamLimits

0x33cb,	// (0x0004a58b) grid_highlight_pane_cp2

0x33e5,	// (0x0004a5a5) toolbar_button_pane

0x33f1,	// (0x0004a5b1) toolbar_button_pane_g1

0x33f9,	// (0x0004a5b9) toolbar_button_pane_g2

0x3401,	// (0x0004a5c1) toolbar_button_pane_g3

0x3409,	// (0x0004a5c9) toolbar_button_pane_g4

0x3411,	// (0x0004a5d1) toolbar_button_pane_g5

0x3419,	// (0x0004a5d9) toolbar_button_pane_g6

0x3421,	// (0x0004a5e1) toolbar_button_pane_g7

0x3429,	// (0x0004a5e9) toolbar_button_pane_g8

0x3431,	// (0x0004a5f1) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x0005696a) toolbar_button_pane_g

0x0f68,	// (0x00048128) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0f68,	// (0x00048128) list_single_2graphic_pane_g1_cp3

0xbe1e,	// (0x00052fde) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbe1e,	// (0x00052fde) list_single_2graphic_pane_g2_cp3

0x29be,	// (0x00049b7e) list_single_2graphic_pane_g3_cp3

0x0f85,	// (0x00048145) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0f85,	// (0x00048145) list_single_2graphic_pane_g4_cp3

0x0f91,	// (0x00048151) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0f91,	// (0x00048151) list_single_2graphic_pane_t1_cp3

0x2545,	// (0x00049705) list_single_midp_graphic_pane_g2_ParamLimits

0x2545,	// (0x00049705) list_single_midp_graphic_pane_g2

0xed14,	// (0x00055ed4) aid_zoom_text_primary

0xed1c,	// (0x00055edc) aid_zoom_text_secondary

0xb339,	// (0x000524f9) status_small_pane_g7_ParamLimits

0xb339,	// (0x000524f9) status_small_pane_g7

0xb35c,	// (0x0005251c) status_small_pane_t1_ParamLimits

0xa432,	// (0x000515f2) title_pane_g2

0x0003,

0xf529,	// (0x000566e9) title_pane_g

0xaa8a,	// (0x00051c4a) aid_size_cell_colour_1_pane_ParamLimits

0xaa8a,	// (0x00051c4a) aid_size_cell_colour_1_pane

0xaa9e,	// (0x00051c5e) aid_size_cell_colour_2_pane_ParamLimits

0xaa9e,	// (0x00051c5e) aid_size_cell_colour_2_pane

0xaab2,	// (0x00051c72) aid_size_cell_colour_3_pane_ParamLimits

0xaab2,	// (0x00051c72) aid_size_cell_colour_3_pane

0xaac6,	// (0x00051c86) aid_size_cell_colour_4_pane_ParamLimits

0xaac6,	// (0x00051c86) aid_size_cell_colour_4_pane

0x0217,	// (0x000473d7) title_pane_stacon_g1_ParamLimits

0x0217,	// (0x000473d7) title_pane_stacon_g1

0x3a7d,	// (0x0004ac3d) popup_note_wait_window_g3_ParamLimits

0x3a7d,	// (0x0004ac3d) popup_note_wait_window_g3

0x3af4,	// (0x0004acb4) popup_note_wait_window_t5_ParamLimits

0x3af4,	// (0x0004acb4) popup_note_wait_window_t5

0xa2e7,	// (0x000514a7) main_feb_china_hwr_fs_writing_pane

0xb590,	// (0x00052750) popup_feb_china_hwr_fs_window_ParamLimits

0xb590,	// (0x00052750) popup_feb_china_hwr_fs_window

0xbe2f,	// (0x00052fef) aid_size_cell_hwr_fs_ParamLimits

0xbe2f,	// (0x00052fef) aid_size_cell_hwr_fs

0x3465,	// (0x0004a625) bg_popup_sub_pane_cp3_ParamLimits

0x3465,	// (0x0004a625) bg_popup_sub_pane_cp3

0xbe44,	// (0x00053004) grid_hwr_fs_pane_ParamLimits

0xbe44,	// (0x00053004) grid_hwr_fs_pane

0x0fef,	// (0x000481af) linegrid_hwr_fs_pane_ParamLimits

0x0fef,	// (0x000481af) linegrid_hwr_fs_pane

0xbe5c,	// (0x0005301c) cell_hwr_fs_pane_ParamLimits

0xbe5c,	// (0x0005301c) cell_hwr_fs_pane

0x3471,	// (0x0004a631) linegrid_hwr_fs_pane_g1_ParamLimits

0x3471,	// (0x0004a631) linegrid_hwr_fs_pane_g1

0xc922,	// (0x00053ae2) linegrid_hwr_fs_pane_g2_ParamLimits

0xc922,	// (0x00053ae2) linegrid_hwr_fs_pane_g2

0x348f,	// (0x0004a64f) linegrid_hwr_fs_pane_g3_ParamLimits

0x348f,	// (0x0004a64f) linegrid_hwr_fs_pane_g3

0x1023,	// (0x000481e3) linegrid_hwr_fs_pane_g4_ParamLimits

0x1023,	// (0x000481e3) linegrid_hwr_fs_pane_g4

0x1041,	// (0x00048201) linegrid_hwr_fs_pane_g5_ParamLimits

0x1041,	// (0x00048201) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x00056990) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x00056990) linegrid_hwr_fs_pane_g

0x349b,	// (0x0004a65b) cell_hwr_fs_pane_g1_ParamLimits

0x349b,	// (0x0004a65b) cell_hwr_fs_pane_g1

0x326a,	// (0x0004a42a) cell_hwr_fs_pane_g2_ParamLimits

0x326a,	// (0x0004a42a) cell_hwr_fs_pane_g2

0xc934,	// (0x00053af4) cell_hwr_fs_pane_g3_ParamLimits

0xc934,	// (0x00053af4) cell_hwr_fs_pane_g3

0xc941,	// (0x00053b01) cell_hwr_fs_pane_g4_ParamLimits

0xc941,	// (0x00053b01) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0005699b) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0005699b) cell_hwr_fs_pane_g

0xbe82,	// (0x00053042) cell_hwr_fs_pane_t1

0xa2e7,	// (0x000514a7) grid_highlight_pane_cp6

0xa2e7,	// (0x000514a7) main_idle_act2_pane

0xe497,	// (0x00055657) aid_inside_area_popup_secondary

0xc9f9,	// (0x00053bb9) aid_inside_area_window_primary_ParamLimits

0xc9f9,	// (0x00053bb9) aid_inside_area_window_primary

0x4cca,	// (0x0004be8a) ai2_news_ticker_pane

0x4cd2,	// (0x0004be92) aid_size_cell_ai1_link_ParamLimits

0x4cd2,	// (0x0004be92) aid_size_cell_ai1_link

0x4cec,	// (0x0004beac) popup_ai2_data_window_ParamLimits

0x4cec,	// (0x0004beac) popup_ai2_data_window

0x4d0a,	// (0x0004beca) popup_ai2_link_window_ParamLimits

0x4d0a,	// (0x0004beca) popup_ai2_link_window

0x3465,	// (0x0004a625) bg_popup_sub_pane_cp4_ParamLimits

0x3465,	// (0x0004a625) bg_popup_sub_pane_cp4

0x4d20,	// (0x0004bee0) grid_ai2_link_pane_ParamLimits

0x4d20,	// (0x0004bee0) grid_ai2_link_pane

0x4d37,	// (0x0004bef7) popup_ai2_link_window_g1_ParamLimits

0x4d37,	// (0x0004bef7) popup_ai2_link_window_g1

0x4d43,	// (0x0004bf03) popup_ai2_link_window_g2_ParamLimits

0x4d43,	// (0x0004bf03) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x00056b6e) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x00056b6e) popup_ai2_link_window_g

0x4d54,	// (0x0004bf14) ai2_mp_button_pane

0x4d5c,	// (0x0004bf1c) ai2_mp_volume_pane

0x3650,	// (0x0004a810) bg_popup_sub_pane_cp5_ParamLimits

0x3650,	// (0x0004a810) bg_popup_sub_pane_cp5

0x4d64,	// (0x0004bf24) heading_ai2_gene_pane_ParamLimits

0x4d64,	// (0x0004bf24) heading_ai2_gene_pane

0x4d70,	// (0x0004bf30) list_ai2_gene_pane_ParamLimits

0x4d70,	// (0x0004bf30) list_ai2_gene_pane

0x4db8,	// (0x0004bf78) cell_ai2_link_pane_ParamLimits

0x4db8,	// (0x0004bf78) cell_ai2_link_pane

0x4dce,	// (0x0004bf8e) cell_ai2_link_pane_g1

0xa2e7,	// (0x000514a7) grid_highlight_pane_cp7

0x13f6,	// (0x000485b6) ai2_mp_volume_pane_g1

0x4ea1,	// (0x0004c061) ai2_mp_volume_pane_g2

0x4e16,	// (0x0004bfd6) list_ai2_gene_pane_t1

0x4ea9,	// (0x0004c069) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x00056b87) ai2_mp_volume_pane_g

0x13fe,	// (0x000485be) volume_small_pane_cp3

0x4eb1,	// (0x0004c071) aid_size_cell_ai2_button

0x4eb9,	// (0x0004c079) grid_ai2_button_pane

0x4ec2,	// (0x0004c082) cell_ai2_button_pane_ParamLimits

0x4ec2,	// (0x0004c082) cell_ai2_button_pane

0xa1f7,	// (0x000513b7) cell_ai2_button_pane_g1

0xa2e7,	// (0x000514a7) grid_highlight_pane_cp8

0x4e61,	// (0x0004c021) ai2_gene_pane_t1_ParamLimits

0x4e61,	// (0x0004c021) ai2_gene_pane_t1

0xb528,	// (0x000526e8) aid_height_parent_landscape

0xcba0,	// (0x00053d60) aid_height_set_list

0x47ce,	// (0x0004b98e) aid_size_parent

0x4ae9,	// (0x0004bca9) aid_size_cell_graphic_pane_ParamLimits

0x4d80,	// (0x0004bf40) popup_ai2_data_window_g1_ParamLimits

0x4d80,	// (0x0004bf40) popup_ai2_data_window_g1

0x4d8c,	// (0x0004bf4c) ai2_news_ticker_pane_g1

0x4d94,	// (0x0004bf54) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x00056b73) ai2_news_ticker_pane_g

0x4d9c,	// (0x0004bf5c) ai2_news_ticker_pane_t1

0x4daa,	// (0x0004bf6a) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x00056b78) ai2_news_ticker_pane_t

0x4dd7,	// (0x0004bf97) heading_ai2_gene_pane_g1

0x4ddf,	// (0x0004bf9f) heading_ai2_gene_pane_t1_ParamLimits

0x4ddf,	// (0x0004bf9f) heading_ai2_gene_pane_t1

0x4df4,	// (0x0004bfb4) list_highlight_pane_cp6

0x4dfc,	// (0x0004bfbc) ai2_gene_pane_ParamLimits

0x4dfc,	// (0x0004bfbc) ai2_gene_pane

0x4e24,	// (0x0004bfe4) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x00056b7d) list_ai2_gene_pane_t

0x4e32,	// (0x0004bff2) list_highlight_pane_cp8_ParamLimits

0x4e32,	// (0x0004bff2) list_highlight_pane_cp8

0x4e43,	// (0x0004c003) ai2_gene_pane_g1_ParamLimits

0x4e43,	// (0x0004c003) ai2_gene_pane_g1

0x4e55,	// (0x0004c015) ai2_gene_pane_g2_ParamLimits

0x4e55,	// (0x0004c015) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x00056b82) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x00056b82) ai2_gene_pane_g

0xae07,	// (0x00051fc7) scroll_pane_cp12

0xb4e5,	// (0x000526a5) control_pane_t3_ParamLimits

0xb4e5,	// (0x000526a5) control_pane_t3

0xb34d,	// (0x0005250d) status_small_pane_g8_ParamLimits

0xb34d,	// (0x0005250d) status_small_pane_g8

0xb632,	// (0x000527f2) popup_find_window_ParamLimits

0xb8e9,	// (0x00052aa9) popup_note_image_window_ParamLimits

0xed98,	// (0x00055f58) list_double2_graphic_pane_vc_g1_ParamLimits

0xed98,	// (0x00055f58) list_double2_graphic_pane_vc_g1

0x0f48,	// (0x00048108) list_double2_graphic_pane_vc_g2_ParamLimits

0x0f48,	// (0x00048108) list_double2_graphic_pane_vc_g2

0x0f54,	// (0x00048114) list_double2_graphic_pane_vc_g3_ParamLimits

0x0f54,	// (0x00048114) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x0005695e) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x0005695e) list_double2_graphic_pane_vc_g

0xeda4,	// (0x00055f64) list_double2_graphic_pane_vc_t1_ParamLimits

0xeda4,	// (0x00055f64) list_double2_graphic_pane_vc_t1

0x0f48,	// (0x00048108) list_single_heading_pane_vc_g1_ParamLimits

0x0f48,	// (0x00048108) list_single_heading_pane_vc_g1

0x0f54,	// (0x00048114) list_single_heading_pane_vc_g2_ParamLimits

0x0f54,	// (0x00048114) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005676d) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005676d) list_single_heading_pane_vc_g

0xedba,	// (0x00055f7a) list_single_heading_pane_vc_t1_ParamLimits

0xedba,	// (0x00055f7a) list_single_heading_pane_vc_t1

0xedd0,	// (0x00055f90) list_single_heading_pane_vc_t2_ParamLimits

0xedd0,	// (0x00055f90) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0005697f) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0005697f) list_single_heading_pane_vc_t

0xede2,	// (0x00055fa2) list_setting_number_pane_vc_g1_ParamLimits

0xede2,	// (0x00055fa2) list_setting_number_pane_vc_g1

0xedee,	// (0x00055fae) list_setting_number_pane_vc_g2_ParamLimits

0xedee,	// (0x00055fae) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x00056984) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x00056984) list_setting_number_pane_vc_g

0xedfa,	// (0x00055fba) list_setting_number_pane_vc_t1_ParamLimits

0xedfa,	// (0x00055fba) list_setting_number_pane_vc_t1

0xee0e,	// (0x00055fce) list_setting_number_pane_vc_t2_ParamLimits

0xee0e,	// (0x00055fce) list_setting_number_pane_vc_t2

0xee2a,	// (0x00055fea) list_setting_number_pane_vc_t3_ParamLimits

0xee2a,	// (0x00055fea) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x00056989) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x00056989) list_setting_number_pane_vc_t

0xee56,	// (0x00056016) set_value_pane_vc_ParamLimits

0xee56,	// (0x00056016) set_value_pane_vc

0x12ad,	// (0x0004846d) list_double2_graphic_pane_vc_ParamLimits

0x12ad,	// (0x0004846d) list_double2_graphic_pane_vc

0x12ad,	// (0x0004846d) list_double2_large_graphic_pane_vc_ParamLimits

0x12ad,	// (0x0004846d) list_double2_large_graphic_pane_vc

0x12ad,	// (0x0004846d) list_double2_pane_vc_ParamLimits

0x12ad,	// (0x0004846d) list_double2_pane_vc

0x12ad,	// (0x0004846d) list_double_graphic_heading_pane_vc_ParamLimits

0x12ad,	// (0x0004846d) list_double_graphic_heading_pane_vc

0x12ad,	// (0x0004846d) list_double_graphic_pane_vc_ParamLimits

0x12ad,	// (0x0004846d) list_double_graphic_pane_vc

0x12ad,	// (0x0004846d) list_double_heading_pane_vc_ParamLimits

0x12ad,	// (0x0004846d) list_double_heading_pane_vc

0x12c1,	// (0x00048481) list_double_large_graphic_pane_vc_ParamLimits

0x12c1,	// (0x00048481) list_double_large_graphic_pane_vc

0x12ad,	// (0x0004846d) list_double_number_pane_vc_ParamLimits

0x12ad,	// (0x0004846d) list_double_number_pane_vc

0x12ad,	// (0x0004846d) list_double_pane_vc_ParamLimits

0x12ad,	// (0x0004846d) list_double_pane_vc

0x12ad,	// (0x0004846d) list_double_time_pane_vc_ParamLimits

0x12ad,	// (0x0004846d) list_double_time_pane_vc

0x12ad,	// (0x0004846d) list_setting_number_pane_vc_ParamLimits

0x12ad,	// (0x0004846d) list_setting_number_pane_vc

0x12ad,	// (0x0004846d) list_setting_pane_vc_ParamLimits

0x12ad,	// (0x0004846d) list_setting_pane_vc

0x12ad,	// (0x0004846d) list_single_graphic_heading_pane_vc_ParamLimits

0x12ad,	// (0x0004846d) list_single_graphic_heading_pane_vc

0x12ad,	// (0x0004846d) list_single_heading_pane_vc_ParamLimits

0x12ad,	// (0x0004846d) list_single_heading_pane_vc

0x12ad,	// (0x0004846d) list_single_number_heading_pane_vc_ParamLimits

0x12ad,	// (0x0004846d) list_single_number_heading_pane_vc

0xee9f,	// (0x0005605f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xee9f,	// (0x0005605f) list_double_graphic_heading_pane_vc_g1

0x0f48,	// (0x00048108) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0f48,	// (0x00048108) list_double_graphic_heading_pane_vc_g2

0x0f54,	// (0x00048114) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0f54,	// (0x00048114) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x00056b8e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x00056b8e) list_double_graphic_heading_pane_vc_g

0xeeab,	// (0x0005606b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeeab,	// (0x0005606b) list_double_graphic_heading_pane_vc_t1

0xeec1,	// (0x00056081) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeec1,	// (0x00056081) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x00056b95) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x00056b95) list_double_graphic_heading_pane_vc_t

0xede2,	// (0x00055fa2) list_setting_pane_vc_g1_ParamLimits

0xede2,	// (0x00055fa2) list_setting_pane_vc_g1

0xedee,	// (0x00055fae) list_setting_pane_vc_g2_ParamLimits

0xedee,	// (0x00055fae) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x00056984) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x00056984) list_setting_pane_vc_g

0xeedf,	// (0x0005609f) list_setting_pane_vc_t1_ParamLimits

0xeedf,	// (0x0005609f) list_setting_pane_vc_t1

0xeefb,	// (0x000560bb) list_setting_pane_vc_t2_ParamLimits

0xeefb,	// (0x000560bb) list_setting_pane_vc_t2

0x0001,

0xfa18,	// (0x00056bd8) list_setting_pane_vc_t_ParamLimits

0xfa18,	// (0x00056bd8) list_setting_pane_vc_t

0xee56,	// (0x00056016) set_value_pane_cp_vc_ParamLimits

0xee56,	// (0x00056016) set_value_pane_cp_vc

0x0f48,	// (0x00048108) list_single_number_heading_pane_vc_g1_ParamLimits

0x0f48,	// (0x00048108) list_single_number_heading_pane_vc_g1

0x0f54,	// (0x00048114) list_single_number_heading_pane_vc_g2_ParamLimits

0x0f54,	// (0x00048114) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005676d) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005676d) list_single_number_heading_pane_vc_g

0xef17,	// (0x000560d7) list_single_number_heading_pane_vc_t1_ParamLimits

0xef17,	// (0x000560d7) list_single_number_heading_pane_vc_t1

0xebf6,	// (0x00055db6) list_single_number_heading_pane_vc_t2_ParamLimits

0xebf6,	// (0x00055db6) list_single_number_heading_pane_vc_t2

0xec08,	// (0x00055dc8) list_single_number_heading_pane_vc_t3_ParamLimits

0xec08,	// (0x00055dc8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1d,	// (0x00056bdd) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1d,	// (0x00056bdd) list_single_number_heading_pane_vc_t

0xed98,	// (0x00055f58) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xed98,	// (0x00055f58) list_single_graphic_heading_pane_vc_g1

0x0f48,	// (0x00048108) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0f48,	// (0x00048108) list_single_graphic_heading_pane_vc_g4

0x0f54,	// (0x00048114) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0f54,	// (0x00048114) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x0005695e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0005695e) list_single_graphic_heading_pane_vc_g

0xef2d,	// (0x000560ed) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xef2d,	// (0x000560ed) list_single_graphic_heading_pane_vc_t1

0xef43,	// (0x00056103) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xef43,	// (0x00056103) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa24,	// (0x00056be4) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa24,	// (0x00056be4) list_single_graphic_heading_pane_vc_t

0x0f48,	// (0x00048108) list_double2_pane_vc_g1_ParamLimits

0x0f48,	// (0x00048108) list_double2_pane_vc_g1

0x0f54,	// (0x00048114) list_double2_pane_vc_g2_ParamLimits

0x0f54,	// (0x00048114) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005676d) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005676d) list_double2_pane_vc_g

0xee89,	// (0x00056049) list_double2_pane_vc_t1_ParamLimits

0xee89,	// (0x00056049) list_double2_pane_vc_t1

0x1407,	// (0x000485c7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x1407,	// (0x000485c7) list_double2_large_graphic_pane_vc_g1

0x0f48,	// (0x00048108) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0f48,	// (0x00048108) list_double2_large_graphic_pane_vc_g2

0x0f54,	// (0x00048114) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0f54,	// (0x00048114) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x00056785) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x00056785) list_double2_large_graphic_pane_vc_g

0xec1a,	// (0x00055dda) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xec1a,	// (0x00055dda) list_double2_large_graphic_pane_vc_t1

0xef55,	// (0x00056115) list_double_time_pane_vc_g1_ParamLimits

0xef55,	// (0x00056115) list_double_time_pane_vc_g1

0xef61,	// (0x00056121) list_double_time_pane_vc_g2_ParamLimits

0xef61,	// (0x00056121) list_double_time_pane_vc_g2

0x0001,

0xfa29,	// (0x00056be9) list_double_time_pane_vc_g_ParamLimits

0xfa29,	// (0x00056be9) list_double_time_pane_vc_g

0xef6d,	// (0x0005612d) list_double_time_pane_vc_t1_ParamLimits

0xef6d,	// (0x0005612d) list_double_time_pane_vc_t1

0xef97,	// (0x00056157) list_double_time_pane_vc_t2_ParamLimits

0xef97,	// (0x00056157) list_double_time_pane_vc_t2

0xefe0,	// (0x000561a0) list_double_time_pane_vc_t3_ParamLimits

0xefe0,	// (0x000561a0) list_double_time_pane_vc_t3

0xeff2,	// (0x000561b2) list_double_time_pane_vc_t4_ParamLimits

0xeff2,	// (0x000561b2) list_double_time_pane_vc_t4

0x0003,

0xfa2e,	// (0x00056bee) list_double_time_pane_vc_t_ParamLimits

0xfa2e,	// (0x00056bee) list_double_time_pane_vc_t

0x0f48,	// (0x00048108) list_double_pane_vc_g1_ParamLimits

0x0f48,	// (0x00048108) list_double_pane_vc_g1

0x0f54,	// (0x00048114) list_double_pane_vc_g2_ParamLimits

0x0f54,	// (0x00048114) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005676d) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005676d) list_double_pane_vc_g

0xf006,	// (0x000561c6) list_double_pane_vc_t1_ParamLimits

0xf006,	// (0x000561c6) list_double_pane_vc_t1

0xf01a,	// (0x000561da) list_double_pane_vc_t2_ParamLimits

0xf01a,	// (0x000561da) list_double_pane_vc_t2

0x0001,

0xfa37,	// (0x00056bf7) list_double_pane_vc_t_ParamLimits

0xfa37,	// (0x00056bf7) list_double_pane_vc_t

0x0f48,	// (0x00048108) list_double_number_pane_vc_g1_ParamLimits

0x0f48,	// (0x00048108) list_double_number_pane_vc_g1

0x0f54,	// (0x00048114) list_double_number_pane_vc_g2_ParamLimits

0x0f54,	// (0x00048114) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005676d) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005676d) list_double_number_pane_vc_g

0xee77,	// (0x00056037) list_double_number_pane_vc_t1_ParamLimits

0xee77,	// (0x00056037) list_double_number_pane_vc_t1

0xf030,	// (0x000561f0) list_double_number_pane_vc_t2_ParamLimits

0xf030,	// (0x000561f0) list_double_number_pane_vc_t2

0xf01a,	// (0x000561da) list_double_number_pane_vc_t3_ParamLimits

0xf01a,	// (0x000561da) list_double_number_pane_vc_t3

0x0002,

0xfa3c,	// (0x00056bfc) list_double_number_pane_vc_t_ParamLimits

0xfa3c,	// (0x00056bfc) list_double_number_pane_vc_t

0x1413,	// (0x000485d3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x1413,	// (0x000485d3) list_double_large_graphic_pane_vc_g1

0x1435,	// (0x000485f5) list_double_large_graphic_pane_vc_g2_ParamLimits

0x1435,	// (0x000485f5) list_double_large_graphic_pane_vc_g2

0x1449,	// (0x00048609) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1449,	// (0x00048609) list_double_large_graphic_pane_vc_g3

0xf044,	// (0x00056204) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf044,	// (0x00056204) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa43,	// (0x00056c03) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x00056c03) list_double_large_graphic_pane_vc_g

0xf050,	// (0x00056210) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf050,	// (0x00056210) list_double_large_graphic_pane_vc_t1

0xf06c,	// (0x0005622c) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf06c,	// (0x0005622c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x00056c0c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x00056c0c) list_double_large_graphic_pane_vc_t

0x0f48,	// (0x00048108) list_double_heading_pane_vc_g1_ParamLimits

0x0f48,	// (0x00048108) list_double_heading_pane_vc_g1

0x0f54,	// (0x00048114) list_double_heading_pane_vc_g2_ParamLimits

0x0f54,	// (0x00048114) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005676d) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005676d) list_double_heading_pane_vc_g

0xf08c,	// (0x0005624c) list_double_heading_pane_vc_t1_ParamLimits

0xf08c,	// (0x0005624c) list_double_heading_pane_vc_t1

0xf09e,	// (0x0005625e) list_double_heading_pane_vc_t2_ParamLimits

0xf09e,	// (0x0005625e) list_double_heading_pane_vc_t2

0x0001,

0xfa51,	// (0x00056c11) list_double_heading_pane_vc_t_ParamLimits

0xfa51,	// (0x00056c11) list_double_heading_pane_vc_t

0xf0b6,	// (0x00056276) list_double_graphic_pane_vc_g1_ParamLimits

0xf0b6,	// (0x00056276) list_double_graphic_pane_vc_g1

0xf0c2,	// (0x00056282) list_double_graphic_pane_vc_g2_ParamLimits

0xf0c2,	// (0x00056282) list_double_graphic_pane_vc_g2

0x0f48,	// (0x00048108) list_double_graphic_pane_vc_g3_ParamLimits

0x0f48,	// (0x00048108) list_double_graphic_pane_vc_g3

0x0003,

0xfa56,	// (0x00056c16) list_double_graphic_pane_vc_g_ParamLimits

0xfa56,	// (0x00056c16) list_double_graphic_pane_vc_g

0xf0df,	// (0x0005629f) list_double_graphic_pane_vc_t1_ParamLimits

0xf0df,	// (0x0005629f) list_double_graphic_pane_vc_t1

0xf109,	// (0x000562c9) list_double_graphic_pane_vc_t2_ParamLimits

0xf109,	// (0x000562c9) list_double_graphic_pane_vc_t2

0x0001,

0xfa5f,	// (0x00056c1f) list_double_graphic_pane_vc_t_ParamLimits

0xfa5f,	// (0x00056c1f) list_double_graphic_pane_vc_t

0xf1eb,	// (0x000563ab) aid_size_cell_fastswap

0xa201,	// (0x000513c1) aid_size_cell_touch_ParamLimits

0xa201,	// (0x000513c1) aid_size_cell_touch

0xf368,	// (0x00056528) popup_fast_swap_wide_window_ParamLimits

0xf368,	// (0x00056528) popup_fast_swap_wide_window

0xa3c9,	// (0x00051589) touch_pane_ParamLimits

0xa3c9,	// (0x00051589) touch_pane

0xae71,	// (0x00052031) button_value_adjust_pane_cp2

0xe404,	// (0x000555c4) button_value_adjust_pane_cp4

0xe40c,	// (0x000555cc) form_field_data_pane_cp2

0x9dd9,	// (0x00050f99) form_field_data_wide_pane_cp2

0xe6bf,	// (0x0005587f) bg_scroll_pane_ParamLimits

0x0418,	// (0x000475d8) scroll_handle_pane_ParamLimits

0x042c,	// (0x000475ec) scroll_sc2_down_pane_ParamLimits

0x042c,	// (0x000475ec) scroll_sc2_down_pane

0xe6f0,	// (0x000558b0) scroll_sc2_up_pane_ParamLimits

0xe6f0,	// (0x000558b0) scroll_sc2_up_pane

0xcf5b,	// (0x0005411b) grid_wheel_folder_pane_g1_ParamLimits

0xcf5b,	// (0x0005411b) grid_wheel_folder_pane_g1

0x0656,	// (0x00047816) clock_nsta_pane_cp2_ParamLimits

0x0656,	// (0x00047816) clock_nsta_pane_cp2

0xb22b,	// (0x000523eb) listscroll_midp_pane_ParamLimits

0xb237,	// (0x000523f7) midp_canvas_pane

0x2e93,	// (0x0004a053) nsta_clock_indic_pane

0x2ec7,	// (0x0004a087) listscroll_form_pane_vc

0x2ecf,	// (0x0004a08f) listscroll_set_pane_vc_ParamLimits

0x2ecf,	// (0x0004a08f) listscroll_set_pane_vc

0xbd63,	// (0x00052f23) clock_nsta_pane

0xbd8d,	// (0x00052f4d) indicator_nsta_pane

0x332f,	// (0x0004a4ef) bg_popup_sub_pane_cp2_ParamLimits

0x3343,	// (0x0004a503) find_pane_cp2_ParamLimits

0x3343,	// (0x0004a503) find_pane_cp2

0x3359,	// (0x0004a519) grid_toobar_pane_ParamLimits

0x3439,	// (0x0004a5f9) list_form_gen_pane_vc_ParamLimits

0x3439,	// (0x0004a5f9) list_form_gen_pane_vc

0x344f,	// (0x0004a60f) scroll_pane_cp8_vc_ParamLimits

0x344f,	// (0x0004a60f) scroll_pane_cp8_vc

0x34cb,	// (0x0004a68b) data_form_wide_pane_vc_ParamLimits

0x34cb,	// (0x0004a68b) data_form_wide_pane_vc

0x34d7,	// (0x0004a697) form_field_data_wide_pane_vc_g1

0x34df,	// (0x0004a69f) form_field_data_wide_pane_vc_t1_ParamLimits

0x34df,	// (0x0004a69f) form_field_data_wide_pane_vc_t1

0xae85,	// (0x00052045) input_focus_pane_cp6_vc_ParamLimits

0xae85,	// (0x00052045) input_focus_pane_cp6_vc

0x37fb,	// (0x0004a9bb) list_midp_pane_ParamLimits

0x4b57,	// (0x0004bd17) scroll_pane_cp16_ParamLimits

0x4b57,	// (0x0004bd17) scroll_pane_cp16

0x3851,	// (0x0004aa11) button_value_adjust_pane_ParamLimits

0x3851,	// (0x0004aa11) button_value_adjust_pane

0xcbb1,	// (0x00053d71) button_value_adjust_pane_cp6_ParamLimits

0xcbb1,	// (0x00053d71) button_value_adjust_pane_cp6

0xcced,	// (0x00053ead) settings_code_pane_cp_ParamLimits

0xcced,	// (0x00053ead) settings_code_pane_cp

0xa1f7,	// (0x000513b7) cell_touch_pane_g1

0xa1f7,	// (0x000513b7) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x000568a3) cell_touch_pane_g

0xce2f,	// (0x00053fef) cell_touch_pane_cp_ParamLimits

0xce2f,	// (0x00053fef) cell_touch_pane_cp

0xce4b,	// (0x0005400b) cell_touch_pane_ParamLimits

0xce4b,	// (0x0005400b) cell_touch_pane

0xa1f7,	// (0x000513b7) scroll_sc2_down_pane_g1

0xa1f7,	// (0x000513b7) scroll_sc2_up_pane_g1

0xa2e7,	// (0x000514a7) bg_set_opt_pane_cp4_vc

0x4ef5,	// (0x0004c0b5) list_set_graphic_pane_vc_g1_ParamLimits

0x4ef5,	// (0x0004c0b5) list_set_graphic_pane_vc_g1

0x4f01,	// (0x0004c0c1) list_set_graphic_pane_vc_g2_ParamLimits

0x4f01,	// (0x0004c0c1) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x00056b9a) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x00056b9a) list_set_graphic_pane_vc_g

0x4f0d,	// (0x0004c0cd) text_primary_small_cp13_vc_ParamLimits

0x4f0d,	// (0x0004c0cd) text_primary_small_cp13_vc

0x4f25,	// (0x0004c0e5) list_set_graphic_pane_vc_ParamLimits

0x4f25,	// (0x0004c0e5) list_set_graphic_pane_vc

0xa2e7,	// (0x000514a7) input_focus_pane_cp2_vc

0xa1f7,	// (0x000513b7) setting_code_pane_vc_g1

0xa58b,	// (0x0005174b) setting_code_pane_vc_t1

0x4f38,	// (0x0004c0f8) set_text_pane_vc_t1_ParamLimits

0x4f38,	// (0x0004c0f8) set_text_pane_vc_t1

0xa2e7,	// (0x000514a7) input_focus_pane_cp1_vc

0x4f59,	// (0x0004c119) list_set_text_pane_vc

0xa1f7,	// (0x000513b7) setting_text_pane_vc_g1

0xa2e7,	// (0x000514a7) bg_set_opt_pane_cp2_vc

0xa582,	// (0x00051742) setting_slider_graphic_pane_vc_g1

0x4f63,	// (0x0004c123) setting_slider_graphic_pane_vc_t1

0x4f75,	// (0x0004c135) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x00056b9f) setting_slider_graphic_pane_vc_t

0x4f87,	// (0x0004c147) slider_set_pane_cp_vc

0x4f91,	// (0x0004c151) slider_set_pane_vc_g1

0x4f9a,	// (0x0004c15a) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x00056ba4) slider_set_pane_vc_g

0xaedd,	// (0x0005209d) set_opt_bg_pane_g1_copy1

0xaee5,	// (0x000520a5) set_opt_bg_pane_g2_copy1

0x4fc6,	// (0x0004c186) set_opt_bg_pane_g3_copy1

0xaef5,	// (0x000520b5) set_opt_bg_pane_g4_copy1

0xaefd,	// (0x000520bd) set_opt_bg_pane_g5_copy1

0xaf05,	// (0x000520c5) set_opt_bg_pane_g6_copy1

0x4fd0,	// (0x0004c190) set_opt_bg_pane_g7_copy1

0x4fda,	// (0x0004c19a) set_opt_bg_pane_g8_copy1

0x4fe4,	// (0x0004c1a4) set_opt_bg_pane_g9_copy1

0xa2e7,	// (0x000514a7) bg_set_opt_pane_cp_vc

0x4fee,	// (0x0004c1ae) setting_slider_pane_vc_t1

0x4ffd,	// (0x0004c1bd) setting_slider_pane_vc_t2

0x500f,	// (0x0004c1cf) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x00056bb3) setting_slider_pane_vc_t

0x5021,	// (0x0004c1e1) slider_set_pane_vc

0x1065,	// (0x00048225) volume_set_pane_vc_g1

0x106e,	// (0x0004822e) volume_set_pane_vc_g2

0x1077,	// (0x00048237) volume_set_pane_vc_g3

0x1080,	// (0x00048240) volume_set_pane_vc_g4

0x1089,	// (0x00048249) volume_set_pane_vc_g5

0x1092,	// (0x00048252) volume_set_pane_vc_g6

0x109b,	// (0x0004825b) volume_set_pane_vc_g7

0x10a4,	// (0x00048264) volume_set_pane_vc_g8

0x10ad,	// (0x0004826d) volume_set_pane_vc_g9

0x10b6,	// (0x00048276) volume_set_pane_vc_g10

0x0009,

0xf9fa,	// (0x00056bba) volume_set_pane_vc_g

0x502b,	// (0x0004c1eb) volume_set_pane_vc

0x5035,	// (0x0004c1f5) button_value_adjust_pane_cp1_vc

0x503f,	// (0x0004c1ff) list_highlight_pane_cp2_vc

0x5048,	// (0x0004c208) list_set_pane_vc_ParamLimits

0x5048,	// (0x0004c208) list_set_pane_vc

0x50b6,	// (0x0004c276) main_pane_set_vc_t1_ParamLimits

0x50b6,	// (0x0004c276) main_pane_set_vc_t1

0x50cb,	// (0x0004c28b) main_pane_set_vc_t2_ParamLimits

0x50cb,	// (0x0004c28b) main_pane_set_vc_t2

0x50dd,	// (0x0004c29d) main_pane_set_vc_t3_ParamLimits

0x50dd,	// (0x0004c29d) main_pane_set_vc_t3

0x50f1,	// (0x0004c2b1) main_pane_set_vc_t4_ParamLimits

0x50f1,	// (0x0004c2b1) main_pane_set_vc_t4

0x0003,

0xfa0f,	// (0x00056bcf) main_pane_set_vc_t_ParamLimits

0xfa0f,	// (0x00056bcf) main_pane_set_vc_t

0x5105,	// (0x0004c2c5) setting_code_pane_vc_ParamLimits

0x5105,	// (0x0004c2c5) setting_code_pane_vc

0x5116,	// (0x0004c2d6) setting_slider_graphic_pane_vc

0x5116,	// (0x0004c2d6) setting_slider_pane_vc

0x5116,	// (0x0004c2d6) setting_text_pane_vc

0x5116,	// (0x0004c2d6) setting_volume_pane_vc

0x5120,	// (0x0004c2e0) scroll_pane_cp121_vc

0xae5f,	// (0x0005201f) set_content_pane_vc

0x5128,	// (0x0004c2e8) button_value_adjust_pane_g1

0x5131,	// (0x0004c2f1) button_value_adjust_pane_g2

0x0001,

0xfa64,	// (0x00056c24) button_value_adjust_pane_g

0x513a,	// (0x0004c2fa) form_field_slider_wide_pane_vc_t1_ParamLimits

0x513a,	// (0x0004c2fa) form_field_slider_wide_pane_vc_t1

0x514c,	// (0x0004c30c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x514c,	// (0x0004c30c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa69,	// (0x00056c29) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa69,	// (0x00056c29) form_field_slider_wide_pane_vc_t

0xa532,	// (0x000516f2) input_focus_pane_cp10_vc_ParamLimits

0xa532,	// (0x000516f2) input_focus_pane_cp10_vc

0x5178,	// (0x0004c338) slider_cont_pane_cp1_vc_ParamLimits

0x5178,	// (0x0004c338) slider_cont_pane_cp1_vc

0x518a,	// (0x0004c34a) slider_form_pane_g1_cp2

0x4f9a,	// (0x0004c15a) slider_form_pane_g2_cp2

0x51b7,	// (0x0004c377) form_field_slider_pane_vc_t3

0x51c5,	// (0x0004c385) form_field_slider_pane_vc_t4

0x51d3,	// (0x0004c393) slider_form_pane_vc_ParamLimits

0x51d3,	// (0x0004c393) slider_form_pane_vc

0x51e0,	// (0x0004c3a0) form_field_slider_pane_vc_t1_ParamLimits

0x51e0,	// (0x0004c3a0) form_field_slider_pane_vc_t1

0x514c,	// (0x0004c30c) form_field_slider_pane_vc_t2_ParamLimits

0x514c,	// (0x0004c30c) form_field_slider_pane_vc_t2

0x0001,

0xfa7b,	// (0x00056c3b) form_field_slider_pane_vc_t_ParamLimits

0xfa7b,	// (0x00056c3b) form_field_slider_pane_vc_t

0xa532,	// (0x000516f2) input_focus_pane_cp9_vc_ParamLimits

0xa532,	// (0x000516f2) input_focus_pane_cp9_vc

0x51f6,	// (0x0004c3b6) slider_cont_pane_vc_ParamLimits

0x51f6,	// (0x0004c3b6) slider_cont_pane_vc

0x520a,	// (0x0004c3ca) list_form_graphic_pane_cp_vc_ParamLimits

0x520a,	// (0x0004c3ca) list_form_graphic_pane_cp_vc

0x34d7,	// (0x0004a697) form_field_popup_wide_pane_vc_g1

0x521f,	// (0x0004c3df) form_field_popup_wide_pane_vc_t1_ParamLimits

0x521f,	// (0x0004c3df) form_field_popup_wide_pane_vc_t1

0xae85,	// (0x00052045) input_focus_pane_cp8_vc_ParamLimits

0xae85,	// (0x00052045) input_focus_pane_cp8_vc

0x5264,	// (0x0004c424) list_form_wide_pane_vc_ParamLimits

0x5264,	// (0x0004c424) list_form_wide_pane_vc

0x5270,	// (0x0004c430) list_form_graphic_pane_vc_g1

0x5278,	// (0x0004c438) list_form_graphic_pane_vc_t1_ParamLimits

0x5278,	// (0x0004c438) list_form_graphic_pane_vc_t1

0xa574,	// (0x00051734) list_highlight_pane_cp5_vc_ParamLimits

0xa574,	// (0x00051734) list_highlight_pane_cp5_vc

0x5294,	// (0x0004c454) list_form_graphic_pane_vc_ParamLimits

0x5294,	// (0x0004c454) list_form_graphic_pane_vc

0x34d7,	// (0x0004a697) form_field_popup_pane_vc_g1

0x52aa,	// (0x0004c46a) form_field_popup_pane_vc_t1_ParamLimits

0x52aa,	// (0x0004c46a) form_field_popup_pane_vc_t1

0xae85,	// (0x00052045) input_focus_pane_cp7_vc_ParamLimits

0xae85,	// (0x00052045) input_focus_pane_cp7_vc

0x52c1,	// (0x0004c481) list_form_pane_vc_ParamLimits

0x52c1,	// (0x0004c481) list_form_pane_vc

0x52cd,	// (0x0004c48d) data_form_pane_vc_t1_ParamLimits

0x52cd,	// (0x0004c48d) data_form_pane_vc_t1

0xaedd,	// (0x0005209d) input_focus_pane_vc_g1

0xaee5,	// (0x000520a5) input_focus_pane_vc_g2

0xaeed,	// (0x000520ad) input_focus_pane_vc_g3

0xaef5,	// (0x000520b5) input_focus_pane_vc_g4

0xaefd,	// (0x000520bd) input_focus_pane_vc_g5

0xaf05,	// (0x000520c5) input_focus_pane_vc_g6

0xaf0d,	// (0x000520cd) input_focus_pane_vc_g7

0xaf15,	// (0x000520d5) input_focus_pane_vc_g8

0xaf1d,	// (0x000520dd) input_focus_pane_vc_g9

0xa1f7,	// (0x000513b7) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x0005682c) input_focus_pane_vc_g

0x34cb,	// (0x0004a68b) data_form_pane_vc_ParamLimits

0x34cb,	// (0x0004a68b) data_form_pane_vc

0x34d7,	// (0x0004a697) form_field_data_pane_vc_g1

0x52ea,	// (0x0004c4aa) form_field_data_pane_vc_t1_ParamLimits

0x52ea,	// (0x0004c4aa) form_field_data_pane_vc_t1

0xae85,	// (0x00052045) input_focus_pane_vc_ParamLimits

0xae85,	// (0x00052045) input_focus_pane_vc

0x5304,	// (0x0004c4c4) button_value_adjust_pane_cp3_vc

0x530c,	// (0x0004c4cc) button_value_adjust_pane_cp5_vc

0x5314,	// (0x0004c4d4) form_field_data_pane_vc_ParamLimits

0x5314,	// (0x0004c4d4) form_field_data_pane_vc

0x532f,	// (0x0004c4ef) form_field_data_pane_vc_cp2

0x5337,	// (0x0004c4f7) form_field_data_wide_pane_vc_ParamLimits

0x5337,	// (0x0004c4f7) form_field_data_wide_pane_vc

0x5351,	// (0x0004c511) form_field_data_wide_pane_vc_cp2

0x5359,	// (0x0004c519) form_field_popup_pane_vc_ParamLimits

0x5359,	// (0x0004c519) form_field_popup_pane_vc

0x5374,	// (0x0004c534) form_field_popup_wide_pane_vc_ParamLimits

0x5374,	// (0x0004c534) form_field_popup_wide_pane_vc

0x538e,	// (0x0004c54e) form_field_slider_pane_vc_ParamLimits

0x538e,	// (0x0004c54e) form_field_slider_pane_vc

0x53a1,	// (0x0004c561) form_field_slider_wide_pane_vc_ParamLimits

0x53a1,	// (0x0004c561) form_field_slider_wide_pane_vc

0xce69,	// (0x00054029) grid_touch_1_pane_ParamLimits

0xce69,	// (0x00054029) grid_touch_1_pane

0xce7d,	// (0x0005403d) grid_touch_2_pane_ParamLimits

0xce7d,	// (0x0005403d) grid_touch_2_pane

0x5487,	// (0x0004c647) touch_pane_g1_ParamLimits

0x5487,	// (0x0004c647) touch_pane_g1

0x53da,	// (0x0004c59a) cell_app_pane_cp_wide_ParamLimits

0x53da,	// (0x0004c59a) cell_app_pane_cp_wide

0x53eb,	// (0x0004c5ab) grid_popup_fast_wide_pane_ParamLimits

0x53eb,	// (0x0004c5ab) grid_popup_fast_wide_pane

0x53ff,	// (0x0004c5bf) scroll_pane_cp19_ParamLimits

0x53ff,	// (0x0004c5bf) scroll_pane_cp19

0xa2e7,	// (0x000514a7) bg_popup_window_pane_cp20

0x5413,	// (0x0004c5d3) listscroll_popup_fast_wide_pane

0xcea9,	// (0x00054069) grid_indicator_nsta_pane

0x542d,	// (0x0004c5ed) clock_nsta_pane_g1

0x5436,	// (0x0004c5f6) clock_nsta_pane_t1

0xceb5,	// (0x00054075) cell_indicator_nsta_pane_ParamLimits

0xceb5,	// (0x00054075) cell_indicator_nsta_pane

0x5487,	// (0x0004c647) cell_indicator_nsta_pane_g1

0xced0,	// (0x00054090) cell_indicator_nsta_pane_g2

0x0001,

0xfa8c,	// (0x00056c4c) cell_indicator_nsta_pane_g

0x54a8,	// (0x0004c668) clock_nsta_pane_cp

0x54b1,	// (0x0004c671) indicator_nsta_pane_cp

0x54bb,	// (0x0004c67b) nsta_clock_indic_pane_g1

0xa66c,	// (0x0005182c) grid_indicator_pane

0xe7e2,	// (0x000559a2) scroll_pane_cp29

0x05a5,	// (0x00047765) indicator_nsta_pane_cp2_ParamLimits

0x05a5,	// (0x00047765) indicator_nsta_pane_cp2

0xa574,	// (0x00051734) main_apps_wheel_pane

0x36b8,	// (0x0004a878) form_midp_field_text_pane_ParamLimits

0x3807,	// (0x0004a9c7) scroll_bar_cp050_ParamLimits

0x5514,	// (0x0004c6d4) cell_indicator_pane_ParamLimits

0x5514,	// (0x0004c6d4) cell_indicator_pane

0x552c,	// (0x0004c6ec) cell_indicator_pane_g1

0xcedd,	// (0x0005409d) grid_wheel_folder_pane_ParamLimits

0xcedd,	// (0x0005409d) grid_wheel_folder_pane

0xceeb,	// (0x000540ab) list_wheel_apps_pane_ParamLimits

0xceeb,	// (0x000540ab) list_wheel_apps_pane

0xcef9,	// (0x000540b9) main_apps_wheel_pane_g1_ParamLimits

0xcef9,	// (0x000540b9) main_apps_wheel_pane_g1

0xcf09,	// (0x000540c9) main_apps_wheel_pane_g2_ParamLimits

0xcf09,	// (0x000540c9) main_apps_wheel_pane_g2

0x0001,

0xfaa8,	// (0x00056c68) main_apps_wheel_pane_g_ParamLimits

0xfaa8,	// (0x00056c68) main_apps_wheel_pane_g

0xcf19,	// (0x000540d9) main_apps_wheel_pane_t1_ParamLimits

0xcf19,	// (0x000540d9) main_apps_wheel_pane_t1

0xcf31,	// (0x000540f1) list_wheel_apps_pane_g1

0xcf39,	// (0x000540f9) list_wheel_apps_pane_g2

0xcf41,	// (0x00054101) list_wheel_apps_pane_g3

0xcf49,	// (0x00054109) list_wheel_apps_pane_g4

0xcf51,	// (0x00054111) list_wheel_apps_pane_g5

0x0004,

0xfaad,	// (0x00056c6d) list_wheel_apps_pane_g

0x2a10,	// (0x00049bd0) navi_icon_text_pane

0xbc55,	// (0x00052e15) aid_fill_nsta

0xcf6e,	// (0x0005412e) navi_icon_text_pane_g1

0xcf7a,	// (0x0005413a) navi_icon_text_pane_t1

0x28a7,	// (0x00049a67) list_set_graphic_pane_t1_ParamLimits

0x28a7,	// (0x00049a67) list_set_graphic_pane_t1

0x3f74,	// (0x0004b134) popup_midp_note_alarm_window_t6_ParamLimits

0x3f74,	// (0x0004b134) popup_midp_note_alarm_window_t6

0x3f86,	// (0x0004b146) popup_midp_note_alarm_window_t7_ParamLimits

0x3f86,	// (0x0004b146) popup_midp_note_alarm_window_t7

0x3f98,	// (0x0004b158) popup_midp_note_alarm_window_t8_ParamLimits

0x3f98,	// (0x0004b158) popup_midp_note_alarm_window_t8

0x3faa,	// (0x0004b16a) popup_midp_note_alarm_window_t9_ParamLimits

0x3faa,	// (0x0004b16a) popup_midp_note_alarm_window_t9

0x3fbc,	// (0x0004b17c) popup_midp_note_alarm_window_t10_ParamLimits

0x3fbc,	// (0x0004b17c) popup_midp_note_alarm_window_t10

0x3fce,	// (0x0004b18e) popup_midp_note_alarm_window_t11_ParamLimits

0x3fce,	// (0x0004b18e) popup_midp_note_alarm_window_t11

0x3fe0,	// (0x0004b1a0) scroll_pane_cp17_ParamLimits

0x3fe0,	// (0x0004b1a0) scroll_pane_cp17

0x1065,	// (0x00048225) volume_small_pane_cp_g1

0x1458,	// (0x00048618) volume_small_pane_cp_g2

0x1461,	// (0x00048621) volume_small_pane_cp_g3

0x146a,	// (0x0004862a) volume_small_pane_cp_g4

0x1473,	// (0x00048633) volume_small_pane_cp_g5

0x147c,	// (0x0004863c) volume_small_pane_cp_g6

0x1485,	// (0x00048645) volume_small_pane_cp_g7

0x148e,	// (0x0004864e) volume_small_pane_cp_g8

0x1497,	// (0x00048657) volume_small_pane_cp_g9

0x14a0,	// (0x00048660) volume_small_pane_cp_g10

0x2c72,	// (0x00049e32) midp_ticker_pane_g1_ParamLimits

0x2c7e,	// (0x00049e3e) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x000568f8) midp_ticker_pane_g_ParamLimits

0xb2cf,	// (0x0005248f) midp_ticker_pane_t1_ParamLimits

0xbc79,	// (0x00052e39) aid_fill_nsta_2

0x37f3,	// (0x0004a9b3) list_form2_midp_pane

0x496f,	// (0x0004bb2f) midp_editing_number_pane_ParamLimits

0x497e,	// (0x0004bb3e) midp_ticker_pane_ParamLimits

0x561f,	// (0x0004c7df) form2_midp_field_pane

0x5643,	// (0x0004c803) scroll_pane_cp51

0x5663,	// (0x0004c823) form2_midp_button_pane_ParamLimits

0x5663,	// (0x0004c823) form2_midp_button_pane

0x5675,	// (0x0004c835) form2_midp_content_pane_ParamLimits

0x5675,	// (0x0004c835) form2_midp_content_pane

0x568f,	// (0x0004c84f) form2_midp_field_choice_group_pane

0x5697,	// (0x0004c857) form2_midp_field_pane_g1

0x569f,	// (0x0004c85f) form2_midp_field_pane_g2

0x56a7,	// (0x0004c867) form2_midp_field_pane_g3

0x56af,	// (0x0004c86f) form2_midp_field_pane_g4

0x0003,

0xfad2,	// (0x00056c92) form2_midp_field_pane_g

0x56b7,	// (0x0004c877) form2_midp_gauge_slider_pane

0x56bf,	// (0x0004c87f) form2_midp_gauge_wait_pane

0x56c7,	// (0x0004c887) form2_midp_image_pane_ParamLimits

0x56c7,	// (0x0004c887) form2_midp_image_pane

0x56e2,	// (0x0004c8a2) form2_midp_label_pane_ParamLimits

0x56e2,	// (0x0004c8a2) form2_midp_label_pane

0xcfa8,	// (0x00054168) form2_midp_label_pane_cp_ParamLimits

0xcfa8,	// (0x00054168) form2_midp_label_pane_cp

0x5722,	// (0x0004c8e2) form2_midp_string_pane_ParamLimits

0x5722,	// (0x0004c8e2) form2_midp_string_pane

0x9ff6,	// (0x000511b6) form2_midp_text_pane_ParamLimits

0x9ff6,	// (0x000511b6) form2_midp_text_pane

0x5734,	// (0x0004c8f4) form2_midp_time_pane

0x5744,	// (0x0004c904) input_focus_pane_cp51_ParamLimits

0x5744,	// (0x0004c904) input_focus_pane_cp51

0x575c,	// (0x0004c91c) form2_midp_label_pane_t1_ParamLimits

0x575c,	// (0x0004c91c) form2_midp_label_pane_t1

0xa019,	// (0x000511d9) form2_mdip_text_pane_t1_ParamLimits

0xa019,	// (0x000511d9) form2_mdip_text_pane_t1

0xf127,	// (0x000562e7) form2_midp_time_pane_t1

0x57aa,	// (0x0004c96a) form2_midp_gauge_slider_pane_t1

0xcfc9,	// (0x00054189) form2_midp_gauge_slider_pane_t2

0xcfdb,	// (0x0005419b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfadb,	// (0x00056c9b) form2_midp_gauge_slider_pane_t

0x57e0,	// (0x0004c9a0) form2_midp_slider_pane

0x57ec,	// (0x0004c9ac) form2_midp_gauge_wait_pane_t1

0x57fa,	// (0x0004c9ba) form2_midp_wait_pane_ParamLimits

0x57fa,	// (0x0004c9ba) form2_midp_wait_pane

0x351e,	// (0x0004a6de) list_single_2graphic_pane_cp4_ParamLimits

0x351e,	// (0x0004a6de) list_single_2graphic_pane_cp4

0xcfed,	// (0x000541ad) list_single_midp_graphic_pane_cp_ParamLimits

0xcfed,	// (0x000541ad) list_single_midp_graphic_pane_cp

0xa2e7,	// (0x000514a7) list_highlight_pane_cp20

0x583e,	// (0x0004c9fe) list_single_2graphic_pane_g1_cp4

0x4dd7,	// (0x0004bf97) list_single_2graphic_pane_g2_cp4

0x5846,	// (0x0004ca06) list_single_2graphic_pane_t1_cp4

0xa574,	// (0x00051734) list_highlight_pane_cp21

0x5855,	// (0x0004ca15) list_single_midp_graphic_pane_g4_cp

0x5864,	// (0x0004ca24) list_single_midp_graphic_pane_t1_cp

0xd00e,	// (0x000541ce) form2_mdip_string_pane_t1_ParamLimits

0xd00e,	// (0x000541ce) form2_mdip_string_pane_t1

0xa2e7,	// (0x000514a7) bg_wml_button_pane_cp2

0xa1f7,	// (0x000513b7) form2_midp_image_pane_g1

0x0106,	// (0x000472c6) list_double_large_graphic_pane_g5_ParamLimits

0x0106,	// (0x000472c6) list_double_large_graphic_pane_g5

0xb22b,	// (0x000523eb) midp_form_pane_ParamLimits

0xa574,	// (0x00051734) main_apps_wheel_pane_ParamLimits

0xb96f,	// (0x00052b2f) popup_preview_window_ParamLimits

0xb96f,	// (0x00052b2f) popup_preview_window

0x0eb1,	// (0x00048071) popup_touch_info_window_ParamLimits

0x0eb1,	// (0x00048071) popup_touch_info_window

0x0ed3,	// (0x00048093) popup_touch_menu_window_ParamLimits

0x0ed3,	// (0x00048093) popup_touch_menu_window

0xa1ed,	// (0x000513ad) bg_popup_sub_pane_cp6

0x5915,	// (0x0004cad5) list_touch_menu_pane

0x591d,	// (0x0004cadd) list_single_touch_menu_pane_ParamLimits

0x591d,	// (0x0004cadd) list_single_touch_menu_pane

0x5935,	// (0x0004caf5) list_single_touch_menu_pane_t1

0xa574,	// (0x00051734) bg_popup_sub_pane_cp7_ParamLimits

0xa574,	// (0x00051734) bg_popup_sub_pane_cp7

0x5943,	// (0x0004cb03) heading_sub_pane

0x594b,	// (0x0004cb0b) list_touch_info_pane_ParamLimits

0x594b,	// (0x0004cb0b) list_touch_info_pane

0x595a,	// (0x0004cb1a) list_single_touch_info_pane_ParamLimits

0x595a,	// (0x0004cb1a) list_single_touch_info_pane

0x596c,	// (0x0004cb2c) list_single_touch_info_pane_t1

0x597a,	// (0x0004cb3a) list_single_touch_info_pane_t2

0x0001,

0xfae9,	// (0x00056ca9) list_single_touch_info_pane_t

0x2b94,	// (0x00049d54) bg_popup_heading_pane_cp

0x5988,	// (0x0004cb48) heading_sub_pane_t1

0x3465,	// (0x0004a625) bg_popup_preview_window_pane_cp_ParamLimits

0x3465,	// (0x0004a625) bg_popup_preview_window_pane_cp

0x5943,	// (0x0004cb03) heading_preview_pane

0x594b,	// (0x0004cb0b) list_preview_pane_ParamLimits

0x594b,	// (0x0004cb0b) list_preview_pane

0x5996,	// (0x0004cb56) popup_preview_window_g1

0x595a,	// (0x0004cb1a) list_single_preview_pane_ParamLimits

0x595a,	// (0x0004cb1a) list_single_preview_pane

0x599e,	// (0x0004cb5e) list_single_preview_pane_g1

0x59a6,	// (0x0004cb66) list_single_preview_pane_t1

0x596c,	// (0x0004cb2c) list_single_preview_pane_t2

0x0001,

0xfaee,	// (0x00056cae) list_single_preview_pane_t

0x59b4,	// (0x0004cb74) bg_popup_heading_pane_cp2_ParamLimits

0x59b4,	// (0x0004cb74) bg_popup_heading_pane_cp2

0x59ca,	// (0x0004cb8a) heading_preview_pane_g1

0x59d2,	// (0x0004cb92) heading_preview_pane_t1_ParamLimits

0x59d2,	// (0x0004cb92) heading_preview_pane_t1

0xa69c,	// (0x0005185c) soft_indicator_pane_t1_ParamLimits

0xade4,	// (0x00051fa4) scroll_pane_ParamLimits

0xe6de,	// (0x0005589e) scroll_sc2_left_pane

0xe6e7,	// (0x000558a7) scroll_sc2_right_pane

0xe706,	// (0x000558c6) scroll_bg_pane_g1_ParamLimits

0xe71b,	// (0x000558db) scroll_bg_pane_g2_ParamLimits

0xe733,	// (0x000558f3) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x00056883) scroll_bg_pane_g_ParamLimits

0xe706,	// (0x000558c6) scroll_handle_pane_g1_ParamLimits

0xe755,	// (0x00055915) scroll_handle_pane_g2_ParamLimits

0xe733,	// (0x000558f3) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x0005688a) scroll_handle_pane_g_ParamLimits

0x090f,	// (0x00047acf) popup_choice_list_window_ParamLimits

0x090f,	// (0x00047acf) popup_choice_list_window

0x333b,	// (0x0004a4fb) choice_list_pane

0x33bd,	// (0x0004a57d) cell_toolbar_pane_t1

0x33e5,	// (0x0004a5a5) toolbar_button_pane_ParamLimits

0x44aa,	// (0x0004b66a) ai_gene_pane_1_t2_ParamLimits

0x44aa,	// (0x0004b66a) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x00056aad) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x00056aad) ai_gene_pane_1_t

0x59ef,	// (0x0004cbaf) scroll_sc2_left_pane_g1

0x59ef,	// (0x0004cbaf) scroll_sc2_right_pane_g1

0x2ebb,	// (0x0004a07b) bg_popup_sub_pane_cp10

0x59f9,	// (0x0004cbb9) list_choice_list_pane

0x5a12,	// (0x0004cbd2) list_single_choice_list_pane_ParamLimits

0x5a12,	// (0x0004cbd2) list_single_choice_list_pane

0x5a2a,	// (0x0004cbea) list_single_choice_list_pane_g1

0xe4d5,	// (0x00055695) list_single_choice_list_pane_t1_ParamLimits

0xe4d5,	// (0x00055695) list_single_choice_list_pane_t1

0x5a32,	// (0x0004cbf2) choice_list_pane_g1

0x5a3a,	// (0x0004cbfa) choice_list_pane_t1

0xa1ed,	// (0x000513ad) input_focus_pane_cp11

0xe653,	// (0x00055813) title_pane_stacon_g2_ParamLimits

0xe653,	// (0x00055813) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x00056869) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x00056869) title_pane_stacon_g

0x2b94,	// (0x00049d54) cursor_press_pane

0xb5e6,	// (0x000527a6) popup_fep_hwr_window_ParamLimits

0xb5e6,	// (0x000527a6) popup_fep_hwr_window

0x0a53,	// (0x00047c13) popup_fep_vkb_window_ParamLimits

0x0a53,	// (0x00047c13) popup_fep_vkb_window

0x5a48,	// (0x0004cc08) cursor_press_pane_g1

0x0002,

0xfb17,	// (0x00056cd7) fep_vkb_side_pane_g_ParamLimits

0x14e2,	// (0x000486a2) fep_hwr_candidate_pane_ParamLimits

0x14e2,	// (0x000486a2) fep_hwr_candidate_pane

0x150c,	// (0x000486cc) fep_hwr_side_pane_ParamLimits

0x150c,	// (0x000486cc) fep_hwr_side_pane

0x152e,	// (0x000486ee) fep_hwr_top_pane_ParamLimits

0x152e,	// (0x000486ee) fep_hwr_top_pane

0x1546,	// (0x00048706) fep_hwr_write_pane_ParamLimits

0x1546,	// (0x00048706) fep_hwr_write_pane

0xfb17,	// (0x00056cd7) fep_vkb_side_pane_g

0x5a50,	// (0x0004cc10) fep_hwr_top_pane_g1

0x5a62,	// (0x0004cc22) fep_hwr_top_pane_g2

0x1572,	// (0x00048732) fep_hwr_top_pane_g3

0x0002,

0xfaf3,	// (0x00056cb3) fep_hwr_top_pane_g

0x1587,	// (0x00048747) fep_hwr_top_text_pane

0x2588,	// (0x00049748) fep_hwr_top_text_pane_g1

0x5a98,	// (0x0004cc58) fep_hwr_top_text_pane_t1

0x1691,	// (0x00048851) fep_hwr_candidate_pane_g1

0x5ce3,	// (0x0004cea3) fep_vkb_keypad_pane_g3_ParamLimits

0x5ce3,	// (0x0004cea3) fep_vkb_keypad_pane_g3

0x5d0f,	// (0x0004cecf) fep_vkb_keypad_pane_g4_ParamLimits

0x5d0f,	// (0x0004cecf) fep_vkb_keypad_pane_g4

0x5d86,	// (0x0004cf46) fep_vkb_bottom_pane_g2_ParamLimits

0x5d86,	// (0x0004cf46) fep_vkb_bottom_pane_g2

0x0001,

0xfb1e,	// (0x00056cde) fep_vkb_bottom_pane_g_ParamLimits

0xfb1e,	// (0x00056cde) fep_vkb_bottom_pane_g

0x59ef,	// (0x0004cbaf) cell_vkb_side_pane_g2

0x0001,

0xfb28,	// (0x00056ce8) cell_vkb_side_pane_g

0x5e11,	// (0x0004cfd1) cell_vkb_side_pane_t1

0x5e1f,	// (0x0004cfdf) cell_vkb_side_pane_t1_copy1

0x59ef,	// (0x0004cbaf) bg_fep_vkb_candidate_pane_g2

0x5f63,	// (0x0004d123) cell_vkb_candidate_pane_ParamLimits

0x5aa6,	// (0x0004cc66) aid_size_cell_vkb_ParamLimits

0x5aa6,	// (0x0004cc66) aid_size_cell_vkb

0x5f63,	// (0x0004d123) cell_vkb_candidate_pane

0x16ab,	// (0x0004886b) bg_popup_fep_shadow_pane_g1

0xd0d2,	// (0x00054292) fep_vkb_bottom_pane_ParamLimits

0xd0d2,	// (0x00054292) fep_vkb_bottom_pane

0x5b75,	// (0x0004cd35) fep_vkb_candidate_pane_ParamLimits

0x5b75,	// (0x0004cd35) fep_vkb_candidate_pane

0xd0fe,	// (0x000542be) fep_vkb_keypad_pane_ParamLimits

0xd0fe,	// (0x000542be) fep_vkb_keypad_pane

0xd125,	// (0x000542e5) fep_vkb_side_pane_ParamLimits

0xd125,	// (0x000542e5) fep_vkb_side_pane

0xd161,	// (0x00054321) fep_vkb_top_pane_ParamLimits

0xd161,	// (0x00054321) fep_vkb_top_pane

0x5c3c,	// (0x0004cdfc) fep_vkb_top_pane_g1_ParamLimits

0x5c3c,	// (0x0004cdfc) fep_vkb_top_pane_g1

0x5c4b,	// (0x0004ce0b) fep_vkb_top_pane_g2_ParamLimits

0x5c4b,	// (0x0004ce0b) fep_vkb_top_pane_g2

0x5c5a,	// (0x0004ce1a) fep_vkb_top_pane_g3_ParamLimits

0x5c5a,	// (0x0004ce1a) fep_vkb_top_pane_g3

0x0003,

0xfb0e,	// (0x00056cce) fep_vkb_top_pane_g_ParamLimits

0xfb0e,	// (0x00056cce) fep_vkb_top_pane_g

0x5c78,	// (0x0004ce38) fep_vkb_top_text_pane_ParamLimits

0x5c78,	// (0x0004ce38) fep_vkb_top_text_pane

0xd19d,	// (0x0005435d) fep_vkb_side_pane_g1_ParamLimits

0xd19d,	// (0x0005435d) fep_vkb_side_pane_g1

0x5cd2,	// (0x0004ce92) grid_vkb_side_pane_ParamLimits

0x5cd2,	// (0x0004ce92) grid_vkb_side_pane

0x16b3,	// (0x00048873) bg_popup_fep_shadow_pane_g2

0x16bc,	// (0x0004887c) bg_popup_fep_shadow_pane_g3

0x16c4,	// (0x00048884) bg_popup_fep_shadow_pane_g4

0x16cd,	// (0x0004888d) bg_popup_fep_shadow_pane_g5

0x16d7,	// (0x00048897) bg_popup_fep_shadow_pane_g6

0x16df,	// (0x0004889f) bg_popup_fep_shadow_pane_g7

0xaefd,	// (0x000520bd) bg_popup_fep_shadow_pane_g8

0x5d31,	// (0x0004cef1) grid_vkb_keypad_number_pane_ParamLimits

0x5d31,	// (0x0004cef1) grid_vkb_keypad_number_pane

0x5d45,	// (0x0004cf05) grid_vkb_keypad_pane_ParamLimits

0x5d45,	// (0x0004cf05) grid_vkb_keypad_pane

0x5d6b,	// (0x0004cf2b) fep_vkb_bottom_pane_g1_ParamLimits

0x5d6b,	// (0x0004cf2b) fep_vkb_bottom_pane_g1

0x5d94,	// (0x0004cf54) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5d94,	// (0x0004cf54) grid_vkb_keypad_bottom_left_pane

0x5da9,	// (0x0004cf69) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5da9,	// (0x0004cf69) grid_vkb_keypad_bottom_right_pane

0x5dbe,	// (0x0004cf7e) fep_vkb_top_text_pane_g1

0xd1e4,	// (0x000543a4) fep_vkb_top_text_pane_t1

0xd1f6,	// (0x000543b6) cell_vkb_side_pane_ParamLimits

0xd1f6,	// (0x000543b6) cell_vkb_side_pane

0x59ef,	// (0x0004cbaf) cell_vkb_side_pane_g1

0x5e2d,	// (0x0004cfed) cell_vkb_keypad_pane_ParamLimits

0x5e2d,	// (0x0004cfed) cell_vkb_keypad_pane

0x5eba,	// (0x0004d07a) cell_vkb_keypad_pane_g1

0x0008,

0xfb3b,	// (0x00056cfb) bg_popup_fep_shadow_pane_g

0x59ef,	// (0x0004cbaf) cell_hwr_side_pane_g1

0x59ef,	// (0x0004cbaf) cell_hwr_side_pane_g2

0x5ec4,	// (0x0004d084) cell_vkb_keypad_pane_t1

0xd20c,	// (0x000543cc) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd20c,	// (0x000543cc) cell_vkb_keypad_bottom_left_pane

0xd221,	// (0x000543e1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd221,	// (0x000543e1) cell_vkb_keypad_bottom_right_pane

0x59ef,	// (0x0004cbaf) cell_vkb_keypad_bottom_left_pane_g1

0x59ef,	// (0x0004cbaf) cell_vkb_keypad_bottom_right_pane_g1

0x5f28,	// (0x0004d0e8) cell_vkb_keypad_number_pane_ParamLimits

0x5f28,	// (0x0004d0e8) cell_vkb_keypad_number_pane

0x5f47,	// (0x0004d107) cell_vkb_keypad_number_pane_g1

0x5f51,	// (0x0004d111) cell_vkb_keypad_number_pane_g2

0x5f5a,	// (0x0004d11a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2d,	// (0x00056ced) cell_vkb_keypad_number_pane_g

0x5ec4,	// (0x0004d084) cell_vkb_keypad_number_pane_t1

0x5f84,	// (0x0004d144) fep_vkb_candidate_pane_g1

0x0001,

0xfb28,	// (0x00056ce8) cell_hwr_side_pane_g

0x5f9d,	// (0x0004d15d) cell_hwr_side_pane_t1

0x16f1,	// (0x000488b1) cell_hwr_side_pane_t1_copy1

0x5c6a,	// (0x0004ce2a) cell_hwr_candidate_pane_g1

0x16ff,	// (0x000488bf) cell_hwr_candidate_pane_t1

0x59ef,	// (0x0004cbaf) cell_vkb_candidate_pane_g2

0x6023,	// (0x0004d1e3) cell_vkb_candidate_pane_t1

0x14a9,	// (0x00048669) bg_popup_fep_shadow_pane_ParamLimits

0x14a9,	// (0x00048669) bg_popup_fep_shadow_pane

0xd098,	// (0x00054258) bg_fep_hwr_top_pane_g4

0x5a74,	// (0x0004cc34) bg_hwr_side_pane_g1_ParamLimits

0x5a74,	// (0x0004cc34) bg_hwr_side_pane_g1

0xc038,	// (0x000531f8) cell_hwr_side_pane_ParamLimits

0xc038,	// (0x000531f8) cell_hwr_side_pane

0x1602,	// (0x000487c2) fep_hwr_write_pane_g1_ParamLimits

0x1602,	// (0x000487c2) fep_hwr_write_pane_g1

0x160f,	// (0x000487cf) fep_hwr_write_pane_g2_ParamLimits

0x160f,	// (0x000487cf) fep_hwr_write_pane_g2

0x161c,	// (0x000487dc) fep_hwr_write_pane_g3_ParamLimits

0x161c,	// (0x000487dc) fep_hwr_write_pane_g3

0xc058,	// (0x00053218) fep_hwr_write_pane_g4_ParamLimits

0xc058,	// (0x00053218) fep_hwr_write_pane_g4

0x0005,

0xfafa,	// (0x00056cba) fep_hwr_write_pane_g_ParamLimits

0xfafa,	// (0x00056cba) fep_hwr_write_pane_g

0xd098,	// (0x00054258) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd098,	// (0x00054258) bg_fep_hwr_candidate_pane_g2

0x163f,	// (0x000487ff) cell_hwr_candidate_pane_ParamLimits

0x163f,	// (0x000487ff) cell_hwr_candidate_pane

0x1691,	// (0x00048851) fep_hwr_candidate_pane_g1_ParamLimits

0x5ad4,	// (0x0004cc94) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5ad4,	// (0x0004cc94) bg_popup_fep_shadow_pane_cp2

0x5c6a,	// (0x0004ce2a) fep_vkb_top_pane_g4_ParamLimits

0x5c6a,	// (0x0004ce2a) fep_vkb_top_pane_g4

0x5cb0,	// (0x0004ce70) fep_vkb_side_pane_g2_ParamLimits

0x5cb0,	// (0x0004ce70) fep_vkb_side_pane_g2

0x9cdb,	// (0x00050e9b) list_setting_pane_t4_ParamLimits

0x9cdb,	// (0x00050e9b) list_setting_pane_t4

0x9d77,	// (0x00050f37) list_setting_number_pane_t5_ParamLimits

0x9d77,	// (0x00050f37) list_setting_number_pane_t5

0x25bf,	// (0x0004977f) list_double_heading_pane_cp2_ParamLimits

0x25bf,	// (0x0004977f) list_double_heading_pane_cp2

0x6031,	// (0x0004d1f1) list_double_heading_pane_g1_cp2_ParamLimits

0x6031,	// (0x0004d1f1) list_double_heading_pane_g1_cp2

0x603d,	// (0x0004d1fd) list_double_heading_pane_g2_cp2_ParamLimits

0x603d,	// (0x0004d1fd) list_double_heading_pane_g2_cp2

0x6051,	// (0x0004d211) list_double_heading_pane_t1_cp2_ParamLimits

0x6051,	// (0x0004d211) list_double_heading_pane_t1_cp2

0x6067,	// (0x0004d227) list_double_heading_pane_t2_cp2_ParamLimits

0x6067,	// (0x0004d227) list_double_heading_pane_t2_cp2

0xa1d5,	// (0x00051395) aid_value_unit2

0xf38c,	// (0x0005654c) popup_preview_fixed_window

0xa857,	// (0x00051a17) bg_popup_preview_window_pane_cp02

0x6079,	// (0x0004d239) list_preview_fixed_pane

0x60bf,	// (0x0004d27f) list_empty_pane_fp_ParamLimits

0x60bf,	// (0x0004d27f) list_empty_pane_fp

0x60bf,	// (0x0004d27f) list_single_cale_day_pane_fp_ParamLimits

0x60bf,	// (0x0004d27f) list_single_cale_day_pane_fp

0x60bf,	// (0x0004d27f) list_single_graphic_heading_pane_fp_ParamLimits

0x60bf,	// (0x0004d27f) list_single_graphic_heading_pane_fp

0x60bf,	// (0x0004d27f) list_single_graphic_pane_fp_ParamLimits

0x60bf,	// (0x0004d27f) list_single_graphic_pane_fp

0x60bf,	// (0x0004d27f) list_single_heading_pane_fp_ParamLimits

0x60bf,	// (0x0004d27f) list_single_heading_pane_fp

0x60bf,	// (0x0004d27f) list_single_pane_fp_ParamLimits

0x60bf,	// (0x0004d27f) list_single_pane_fp

0x60d8,	// (0x0004d298) list_single_pane_fp_g1_ParamLimits

0x60d8,	// (0x0004d298) list_single_pane_fp_g1

0x6031,	// (0x0004d1f1) list_single_pane_fp_g2_ParamLimits

0x6031,	// (0x0004d1f1) list_single_pane_fp_g2

0x603d,	// (0x0004d1fd) list_single_pane_fp_g3_ParamLimits

0x603d,	// (0x0004d1fd) list_single_pane_fp_g3

0x60e4,	// (0x0004d2a4) list_single_pane_fp_g4_ParamLimits

0x60e4,	// (0x0004d2a4) list_single_pane_fp_g4

0x0003,

0xfb5c,	// (0x00056d1c) list_single_pane_fp_g_ParamLimits

0xfb5c,	// (0x00056d1c) list_single_pane_fp_g

0xf13a,	// (0x000562fa) list_single_pane_fp_t1_ParamLimits

0xf13a,	// (0x000562fa) list_single_pane_fp_t1

0xf151,	// (0x00056311) list_single_graphic_pane_fp_g1_ParamLimits

0xf151,	// (0x00056311) list_single_graphic_pane_fp_g1

0x60d8,	// (0x0004d298) list_single_graphic_pane_fp_g2_ParamLimits

0x60d8,	// (0x0004d298) list_single_graphic_pane_fp_g2

0x6031,	// (0x0004d1f1) list_single_graphic_pane_fp_g3_ParamLimits

0x6031,	// (0x0004d1f1) list_single_graphic_pane_fp_g3

0x603d,	// (0x0004d1fd) list_single_graphic_pane_fp_g4_ParamLimits

0x603d,	// (0x0004d1fd) list_single_graphic_pane_fp_g4

0x60e4,	// (0x0004d2a4) list_single_graphic_pane_fp_g5_ParamLimits

0x60e4,	// (0x0004d2a4) list_single_graphic_pane_fp_g5

0x0004,

0xfb65,	// (0x00056d25) list_single_graphic_pane_fp_g_ParamLimits

0xfb65,	// (0x00056d25) list_single_graphic_pane_fp_g

0xf15d,	// (0x0005631d) list_single_graphic_pane_fp_t1_ParamLimits

0xf15d,	// (0x0005631d) list_single_graphic_pane_fp_t1

0xf151,	// (0x00056311) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf151,	// (0x00056311) list_single_graphic_heading_pane_fp_g1

0x60d8,	// (0x0004d298) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x60d8,	// (0x0004d298) list_single_graphic_heading_pane_fp_g2

0x6031,	// (0x0004d1f1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6031,	// (0x0004d1f1) list_single_graphic_heading_pane_fp_g3

0x603d,	// (0x0004d1fd) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x603d,	// (0x0004d1fd) list_single_graphic_heading_pane_fp_g4

0x60e4,	// (0x0004d2a4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x60e4,	// (0x0004d2a4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb65,	// (0x00056d25) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb65,	// (0x00056d25) list_single_graphic_heading_pane_fp_g

0xf173,	// (0x00056333) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf173,	// (0x00056333) list_single_graphic_heading_pane_fp_t1

0xf189,	// (0x00056349) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf189,	// (0x00056349) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb70,	// (0x00056d30) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb70,	// (0x00056d30) list_single_graphic_heading_pane_fp_t

0xf19b,	// (0x0005635b) list_single_cale_day_pane_fp_g1_ParamLimits

0xf19b,	// (0x0005635b) list_single_cale_day_pane_fp_g1

0x60f0,	// (0x0004d2b0) list_single_cale_day_pane_fp_g2_ParamLimits

0x60f0,	// (0x0004d2b0) list_single_cale_day_pane_fp_g2

0x171d,	// (0x000488dd) list_single_cale_day_pane_fp_g3_ParamLimits

0x171d,	// (0x000488dd) list_single_cale_day_pane_fp_g3

0x1745,	// (0x00048905) list_single_cale_day_pane_fp_g4_ParamLimits

0x1745,	// (0x00048905) list_single_cale_day_pane_fp_g4

0x1769,	// (0x00048929) list_single_cale_day_pane_fp_g5_ParamLimits

0x1769,	// (0x00048929) list_single_cale_day_pane_fp_g5

0x0004,

0xfb75,	// (0x00056d35) list_single_cale_day_pane_fp_g_ParamLimits

0xfb75,	// (0x00056d35) list_single_cale_day_pane_fp_g

0xf396,	// (0x00056556) list_single_cale_day_pane_fp_t1_ParamLimits

0xf396,	// (0x00056556) list_single_cale_day_pane_fp_t1

0xf3bc,	// (0x0005657c) list_single_cale_day_pane_fp_t2_ParamLimits

0xf3bc,	// (0x0005657c) list_single_cale_day_pane_fp_t2

0xf3d5,	// (0x00056595) list_single_cale_day_pane_fp_t3_ParamLimits

0xf3d5,	// (0x00056595) list_single_cale_day_pane_fp_t3

0x0002,

0xfb80,	// (0x00056d40) list_single_cale_day_pane_fp_t_ParamLimits

0xfb80,	// (0x00056d40) list_single_cale_day_pane_fp_t

0x60d8,	// (0x0004d298) list_empty_pane_fp_g1_ParamLimits

0x60d8,	// (0x0004d298) list_empty_pane_fp_g1

0xf3ee,	// (0x000565ae) list_empty_pane_fp_t1

0xf3fc,	// (0x000565bc) list_empty_pane_fp_t2

0x0001,

0xfb87,	// (0x00056d47) list_empty_pane_fp_t

0x60d8,	// (0x0004d298) list_single_heading_pane_fp_g1_ParamLimits

0x60d8,	// (0x0004d298) list_single_heading_pane_fp_g1

0x6031,	// (0x0004d1f1) list_single_heading_pane_fp_g2_ParamLimits

0x6031,	// (0x0004d1f1) list_single_heading_pane_fp_g2

0x603d,	// (0x0004d1fd) list_single_heading_pane_fp_g3_ParamLimits

0x603d,	// (0x0004d1fd) list_single_heading_pane_fp_g3

0x0002,

0xfb8c,	// (0x00056d4c) list_single_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x00056d4c) list_single_heading_pane_fp_g

0xf40a,	// (0x000565ca) list_single_heading_pane_fp_t1_ParamLimits

0xf40a,	// (0x000565ca) list_single_heading_pane_fp_t1

0xf41c,	// (0x000565dc) list_single_heading_pane_fp_t2_ParamLimits

0xf41c,	// (0x000565dc) list_single_heading_pane_fp_t2

0x0001,

0xfb93,	// (0x00056d53) list_single_heading_pane_fp_t_ParamLimits

0xfb93,	// (0x00056d53) list_single_heading_pane_fp_t

0xe4ea,	// (0x000556aa) aid_size_cell_fast

0xa7d7,	// (0x00051997) soft_indicator_pane_cp1_t1

0xe527,	// (0x000556e7) cell_app_pane_cp2_ParamLimits

0xe527,	// (0x000556e7) cell_app_pane_cp2

0x14cb,	// (0x0004868b) fep_hwr_candidate_drop_down_list_pane

0xd0a6,	// (0x00054266) fep_hwr_candidate_pane_g3_ParamLimits

0xd0a6,	// (0x00054266) fep_hwr_candidate_pane_g3

0xd0b3,	// (0x00054273) fep_hwr_candidate_pane_g4_ParamLimits

0xd0b3,	// (0x00054273) fep_hwr_candidate_pane_g4

0x0002,

0xfb07,	// (0x00056cc7) fep_hwr_candidate_pane_g_ParamLimits

0xfb07,	// (0x00056cc7) fep_hwr_candidate_pane_g

0x5b64,	// (0x0004cd24) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5b64,	// (0x0004cd24) fep_vkb_candidate_drop_down_list_pane

0x5f8c,	// (0x0004d14c) fep_vkb_candidate_pane_g3

0x5f94,	// (0x0004d154) fep_vkb_candidate_pane_g4

0x0002,

0xfb34,	// (0x00056cf4) fep_vkb_candidate_pane_g

0x5c6a,	// (0x0004ce2a) cell_hwr_candidate_pane_g1_ParamLimits

0x5fab,	// (0x0004d16b) cell_hwr_candidate_pane_g3_ParamLimits

0x5fab,	// (0x0004d16b) cell_hwr_candidate_pane_g3

0x5fcc,	// (0x0004d18c) cell_hwr_candidate_pane_g4_ParamLimits

0x5fcc,	// (0x0004d18c) cell_hwr_candidate_pane_g4

0x0002,

0xfb4e,	// (0x00056d0e) cell_hwr_candidate_pane_g_ParamLimits

0xfb4e,	// (0x00056d0e) cell_hwr_candidate_pane_g

0x5fed,	// (0x0004d1ad) cell_vkb_candidate_pane_g3_ParamLimits

0x5fed,	// (0x0004d1ad) cell_vkb_candidate_pane_g3

0x6008,	// (0x0004d1c8) cell_vkb_candidate_pane_g4_ParamLimits

0x6008,	// (0x0004d1c8) cell_vkb_candidate_pane_g4

0x60fc,	// (0x0004d2bc) cell_app_pane_cp2_g1_ParamLimits

0x60fc,	// (0x0004d2bc) cell_app_pane_cp2_g1

0x611a,	// (0x0004d2da) cell_app_pane_cp2_g2_ParamLimits

0x611a,	// (0x0004d2da) cell_app_pane_cp2_g2

0x0001,

0xfb98,	// (0x00056d58) cell_app_pane_cp2_g_ParamLimits

0xfb98,	// (0x00056d58) cell_app_pane_cp2_g

0x6126,	// (0x0004d2e6) cell_app_pane_cp2_t1_ParamLimits

0x6126,	// (0x0004d2e6) cell_app_pane_cp2_t1

0xae85,	// (0x00052045) grid_highlight_pane_cp1_ParamLimits

0xae85,	// (0x00052045) grid_highlight_pane_cp1

0x178d,	// (0x0004894d) cell_hwr_candidate_pane_cp1_ParamLimits

0x178d,	// (0x0004894d) cell_hwr_candidate_pane_cp1

0x5c6a,	// (0x0004ce2a) fep_hwr_candidate_drop_down_list_pane_g1

0x6138,	// (0x0004d2f8) fep_hwr_candidate_drop_down_list_pane_g2

0x6145,	// (0x0004d305) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9d,	// (0x00056d5d) fep_hwr_candidate_drop_down_list_pane_g

0x17b1,	// (0x00048971) fep_hwr_candidate_drop_down_list_scroll_pane

0x17ba,	// (0x0004897a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x17ba,	// (0x0004897a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x17c7,	// (0x00048987) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x17c7,	// (0x00048987) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x17d4,	// (0x00048994) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x17d4,	// (0x00048994) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5fed,	// (0x0004d1ad) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5fed,	// (0x0004d1ad) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6008,	// (0x0004d1c8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6008,	// (0x0004d1c8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x17e1,	// (0x000489a1) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x17e1,	// (0x000489a1) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x17fc,	// (0x000489bc) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x17fc,	// (0x000489bc) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1817,	// (0x000489d7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1817,	// (0x000489d7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba4,	// (0x00056d64) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba4,	// (0x00056d64) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x6152,	// (0x0004d312) cell_vkb_candidate_pane_cp1_ParamLimits

0x6152,	// (0x0004d312) cell_vkb_candidate_pane_cp1

0x5c6a,	// (0x0004ce2a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5c6a,	// (0x0004ce2a) fep_vkb_candidate_drop_down_list_pane_g1

0x6138,	// (0x0004d2f8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6138,	// (0x0004d2f8) fep_vkb_candidate_drop_down_list_pane_g2

0x6145,	// (0x0004d305) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6145,	// (0x0004d305) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9d,	// (0x00056d5d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9d,	// (0x00056d5d) fep_vkb_candidate_drop_down_list_pane_g

0x6178,	// (0x0004d338) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6178,	// (0x0004d338) fep_vkb_candidate_drop_down_list_scroll_pane

0x6185,	// (0x0004d345) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6185,	// (0x0004d345) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6192,	// (0x0004d352) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6192,	// (0x0004d352) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x619e,	// (0x0004d35e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x619e,	// (0x0004d35e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5fab,	// (0x0004d16b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5fab,	// (0x0004d16b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5fcc,	// (0x0004d18c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5fcc,	// (0x0004d18c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x61aa,	// (0x0004d36a) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x61aa,	// (0x0004d36a) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x61cb,	// (0x0004d38b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x61cb,	// (0x0004d38b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x61ec,	// (0x0004d3ac) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x61ec,	// (0x0004d3ac) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb5,	// (0x00056d75) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb5,	// (0x00056d75) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa41f,	// (0x000515df) title_pane_g1_ParamLimits

0xa432,	// (0x000515f2) title_pane_g2_ParamLimits

0xf529,	// (0x000566e9) title_pane_g_ParamLimits

0x2578,	// (0x00049738) aid_call2_pane

0x2580,	// (0x00049740) aid_call_pane

0x2588,	// (0x00049748) popup_clock_analogue_window_g1

0x2588,	// (0x00049748) popup_clock_analogue_window_g2

0x0475,	// (0x00047635) popup_clock_analogue_window_g3

0x047e,	// (0x0004763e) popup_clock_analogue_window_g4

0xa1f7,	// (0x000513b7) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x00056898) popup_clock_analogue_window_g

0x0486,	// (0x00047646) popup_clock_analogue_window_t1

0x0494,	// (0x00047654) clock_digital_number_pane_ParamLimits

0x0494,	// (0x00047654) clock_digital_number_pane

0x04a0,	// (0x00047660) clock_digital_number_pane_cp02_ParamLimits

0x04a0,	// (0x00047660) clock_digital_number_pane_cp02

0x04ac,	// (0x0004766c) clock_digital_number_pane_cp03_ParamLimits

0x04ac,	// (0x0004766c) clock_digital_number_pane_cp03

0x04b8,	// (0x00047678) clock_digital_number_pane_cp04_ParamLimits

0x04b8,	// (0x00047678) clock_digital_number_pane_cp04

0x04c4,	// (0x00047684) clock_digital_separator_pane_ParamLimits

0x04c4,	// (0x00047684) clock_digital_separator_pane

0x04d0,	// (0x00047690) popup_clock_digital_window_t1_ParamLimits

0x04d0,	// (0x00047690) popup_clock_digital_window_t1

0xa1f7,	// (0x000513b7) clock_digital_number_pane_g1

0xa1f7,	// (0x000513b7) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x000568a3) clock_digital_number_pane_g

0xa1f7,	// (0x000513b7) clock_digital_separator_pane_g1

0xa1f7,	// (0x000513b7) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x000568a3) clock_digital_separator_pane_g

0xbc55,	// (0x00052e15) aid_fill_nsta_ParamLimits

0xbd8d,	// (0x00052f4d) indicator_nsta_pane_ParamLimits

0x31d4,	// (0x0004a394) popup_clock_analogue_window

0x31d4,	// (0x0004a394) popup_clock_digital_window

0xcea9,	// (0x00054069) grid_indicator_nsta_pane_ParamLimits

0x5444,	// (0x0004c604) clock_nsta_pane_t2

0x0001,

0xfa87,	// (0x00056c47) clock_nsta_pane_t

0x0405,	// (0x000475c5) aid_size_max_handle

0xb083,	// (0x00052243) aid_size_min_handle

0x2b94,	// (0x00049d54) editor_scroll_pane

0x6207,	// (0x0004d3c7) ex_editor_pane

0xe4b0,	// (0x00055670) scroll_pane_cp13

0xae10,	// (0x00051fd0) scroll_pane_cp14

0x25b7,	// (0x00049777) scroll_pane_cp36

0xb110,	// (0x000522d0) list_single_graphic_hl_pane_cp2_ParamLimits

0xb110,	// (0x000522d0) list_single_graphic_hl_pane_cp2

0xcd36,	// (0x00053ef6) list_single_graphic_hl_pane_ParamLimits

0xcd36,	// (0x00053ef6) list_single_graphic_hl_pane

0xf432,	// (0x000565f2) aid_size_min_hl_cp1

0x620f,	// (0x0004d3cf) list_highlight_pane_cp34_ParamLimits

0x620f,	// (0x0004d3cf) list_highlight_pane_cp34

0x6220,	// (0x0004d3e0) list_single_graphic_hl_pane_g1_ParamLimits

0x6220,	// (0x0004d3e0) list_single_graphic_hl_pane_g1

0xa035,	// (0x000511f5) list_single_graphic_hl_pane_g2_ParamLimits

0xa035,	// (0x000511f5) list_single_graphic_hl_pane_g2

0xa035,	// (0x000511f5) list_single_graphic_hl_pane_g3_ParamLimits

0xa035,	// (0x000511f5) list_single_graphic_hl_pane_g3

0x18a9,	// (0x00048a69) list_single_graphic_hl_pane_g4_ParamLimits

0x18a9,	// (0x00048a69) list_single_graphic_hl_pane_g4

0xc06d,	// (0x0005322d) list_single_graphic_hl_pane_g5_ParamLimits

0xc06d,	// (0x0005322d) list_single_graphic_hl_pane_g5

0x0004,

0xfbc6,	// (0x00056d86) list_single_graphic_hl_pane_g_ParamLimits

0xfbc6,	// (0x00056d86) list_single_graphic_hl_pane_g

0xa041,	// (0x00051201) list_single_graphic_hl_pane_t1_ParamLimits

0xa041,	// (0x00051201) list_single_graphic_hl_pane_t1

0x622d,	// (0x0004d3ed) aid_size_min_hl_cp2

0x6236,	// (0x0004d3f6) list_highlight_pane_cp34_cp2_ParamLimits

0x6236,	// (0x0004d3f6) list_highlight_pane_cp34_cp2

0x6220,	// (0x0004d3e0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x6220,	// (0x0004d3e0) list_single_graphic_hl_pane_g1_cp2

0x6243,	// (0x0004d403) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x6243,	// (0x0004d403) list_single_graphic_hl_pane_g2_cp2

0x624f,	// (0x0004d40f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x624f,	// (0x0004d40f) list_single_graphic_hl_pane_g3_cp2

0x625d,	// (0x0004d41d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x625d,	// (0x0004d41d) list_single_graphic_hl_pane_g4_cp2

0x6269,	// (0x0004d429) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x6269,	// (0x0004d429) list_single_graphic_hl_pane_g5_cp2

0xb3e4,	// (0x000525a4) control_pane_g4_ParamLimits

0xb3e4,	// (0x000525a4) control_pane_g4

0x2ebb,	// (0x0004a07b) bg_popup_sub_pane_cp10_ParamLimits

0x59f9,	// (0x0004cbb9) list_choice_list_pane_ParamLimits

0x5a08,	// (0x0004cbc8) scroll_pane_cp23

0xa857,	// (0x00051a17) bg_popup_preview_window_pane_cp02_ParamLimits

0x6079,	// (0x0004d239) list_preview_fixed_pane_ParamLimits

0x608f,	// (0x0004d24f) list_preview_fixed_pane_cp_ParamLimits

0x608f,	// (0x0004d24f) list_preview_fixed_pane_cp

0x609b,	// (0x0004d25b) popup_preview_fixed_window_g1_ParamLimits

0x609b,	// (0x0004d25b) popup_preview_fixed_window_g1

0x60a7,	// (0x0004d267) popup_preview_fixed_window_g2_ParamLimits

0x60a7,	// (0x0004d267) popup_preview_fixed_window_g2

0x0002,

0xfb55,	// (0x00056d15) popup_preview_fixed_window_g_ParamLimits

0xfb55,	// (0x00056d15) popup_preview_fixed_window_g

0x02db,	// (0x0004749b) aid_navi_side_left_pane_ParamLimits

0x02f0,	// (0x000474b0) aid_navi_side_right_pane_ParamLimits

0x0308,	// (0x000474c8) navi_icon_pane_stacon_ParamLimits

0x031c,	// (0x000474dc) navi_navi_pane_stacon_ParamLimits

0x0308,	// (0x000474c8) navi_text_pane_stacon_ParamLimits

0xa1ed,	// (0x000513ad) main_text_info_pane

0x6293,	// (0x0004d453) listscroll_text_info_pane

0x629b,	// (0x0004d45b) list_text_info_pane_ParamLimits

0x629b,	// (0x0004d45b) list_text_info_pane

0x62aa,	// (0x0004d46a) scroll_pane_cp24_ParamLimits

0x62aa,	// (0x0004d46a) scroll_pane_cp24

0xd23c,	// (0x000543fc) list_text_info_pane_t1_ParamLimits

0xd23c,	// (0x000543fc) list_text_info_pane_t1

0xb54a,	// (0x0005270a) popup_fast_swap2_window_ParamLimits

0xb54a,	// (0x0005270a) popup_fast_swap2_window

0x62ed,	// (0x0004d4ad) aid_size_cell_fast2

0xa1ed,	// (0x000513ad) bg_popup_window_pane_cp17

0x3827,	// (0x0004a9e7) heading_pane_cp2

0x382f,	// (0x0004a9ef) listscroll_fast2_pane

0x62f7,	// (0x0004d4b7) grid_fast2_pane

0x6301,	// (0x0004d4c1) listscroll_fast2_pane_g1

0x630b,	// (0x0004d4cb) listscroll_fast2_pane_g2

0x0001,

0xfbd1,	// (0x00056d91) listscroll_fast2_pane_g

0xe4b0,	// (0x00055670) scroll_pane_cp26

0x6315,	// (0x0004d4d5) cell_fast2_pane_ParamLimits

0x6315,	// (0x0004d4d5) cell_fast2_pane

0x632c,	// (0x0004d4ec) cell_fast2_pane_g1

0x6335,	// (0x0004d4f5) cell_fast2_pane_g2

0x633e,	// (0x0004d4fe) cell_fast2_pane_g3

0x0002,

0xfbd6,	// (0x00056d96) cell_fast2_pane_g

0xabcd,	// (0x00051d8d) grid_highlight_pane_cp9

0xabe2,	// (0x00051da2) main_eswt_pane_ParamLimits

0xabe2,	// (0x00051da2) main_eswt_pane

0x62bf,	// (0x0004d47f) list_single_text_info_pane

0x6346,	// (0x0004d506) eswt_ctrl_button_pane

0x6346,	// (0x0004d506) eswt_ctrl_canvas_pane

0x634e,	// (0x0004d50e) eswt_ctrl_combo_pane

0x6346,	// (0x0004d506) eswt_ctrl_default_pane

0x6346,	// (0x0004d506) eswt_ctrl_label_pane

0x6356,	// (0x0004d516) eswt_ctrl_wait_pane

0x635e,	// (0x0004d51e) eswt_shell_pane

0xa1ed,	// (0x000513ad) listscroll_eswt_app_pane

0x637e,	// (0x0004d53e) popup_eswt_tasktip_window_ParamLimits

0x637e,	// (0x0004d53e) popup_eswt_tasktip_window

0x3465,	// (0x0004a625) bg_popup_window_pane_cp18

0x638f,	// (0x0004d54f) eswt_control_pane_g1_ParamLimits

0x638f,	// (0x0004d54f) eswt_control_pane_g1

0x639c,	// (0x0004d55c) eswt_control_pane_g2_ParamLimits

0x639c,	// (0x0004d55c) eswt_control_pane_g2

0x63a9,	// (0x0004d569) eswt_control_pane_g3_ParamLimits

0x63a9,	// (0x0004d569) eswt_control_pane_g3

0x63b6,	// (0x0004d576) eswt_control_pane_g4_ParamLimits

0x63b6,	// (0x0004d576) eswt_control_pane_g4

0x0003,

0xfbdd,	// (0x00056d9d) eswt_control_pane_g_ParamLimits

0xfbdd,	// (0x00056d9d) eswt_control_pane_g

0xae85,	// (0x00052045) bg_button_pane_ParamLimits

0xae85,	// (0x00052045) bg_button_pane

0xabe2,	// (0x00051da2) common_borders_pane_copy2_ParamLimits

0xabe2,	// (0x00051da2) common_borders_pane_copy2

0x63c3,	// (0x0004d583) control_button_pane_g1_ParamLimits

0x63c3,	// (0x0004d583) control_button_pane_g1

0x63cf,	// (0x0004d58f) control_button_pane_g2_ParamLimits

0x63cf,	// (0x0004d58f) control_button_pane_g2

0x63db,	// (0x0004d59b) control_button_pane_g3_ParamLimits

0x63db,	// (0x0004d59b) control_button_pane_g3

0x0002,

0xfbe6,	// (0x00056da6) control_button_pane_g_ParamLimits

0xfbe6,	// (0x00056da6) control_button_pane_g

0x63ef,	// (0x0004d5af) control_button_pane_t1

0x63fd,	// (0x0004d5bd) control_button_pane_t2

0x0001,

0xfbed,	// (0x00056dad) control_button_pane_t

0x33f1,	// (0x0004a5b1) bg_button_pane_g1

0x33f9,	// (0x0004a5b9) bg_button_pane_g2

0x3401,	// (0x0004a5c1) bg_button_pane_g3

0x3409,	// (0x0004a5c9) bg_button_pane_g4

0x3411,	// (0x0004a5d1) bg_button_pane_g5

0x3419,	// (0x0004a5d9) bg_button_pane_g6

0x3421,	// (0x0004a5e1) bg_button_pane_g7

0x3429,	// (0x0004a5e9) bg_button_pane_g8

0x3431,	// (0x0004a5f1) bg_button_pane_g9

0x0008,

0xf841,	// (0x00056a01) bg_button_pane_g

0x59b4,	// (0x0004cb74) common_borders_pane_ParamLimits

0x59b4,	// (0x0004cb74) common_borders_pane

0x638f,	// (0x0004d54f) eswt_control_pane_g1_copy1_ParamLimits

0x638f,	// (0x0004d54f) eswt_control_pane_g1_copy1

0x639c,	// (0x0004d55c) eswt_control_pane_g2_copy1_ParamLimits

0x639c,	// (0x0004d55c) eswt_control_pane_g2_copy1

0x63a9,	// (0x0004d569) eswt_control_pane_g3_copy1_ParamLimits

0x63a9,	// (0x0004d569) eswt_control_pane_g3_copy1

0x63b6,	// (0x0004d576) eswt_control_pane_g4_copy1_ParamLimits

0x63b6,	// (0x0004d576) eswt_control_pane_g4_copy1

0x59ef,	// (0x0004cbaf) bg_eswt_ctrl_canvas_pane_g1

0x59b4,	// (0x0004cb74) common_borders_pane_cp2_ParamLimits

0x59b4,	// (0x0004cb74) common_borders_pane_cp2

0x59b4,	// (0x0004cb74) common_borders_pane_cp3_ParamLimits

0x59b4,	// (0x0004cb74) common_borders_pane_cp3

0x640b,	// (0x0004d5cb) separator_horizontal_pane

0x6413,	// (0x0004d5d3) separator_vertical_pane

0x638f,	// (0x0004d54f) eswt_control_pane_g1_copy2_ParamLimits

0x638f,	// (0x0004d54f) eswt_control_pane_g1_copy2

0x639c,	// (0x0004d55c) eswt_control_pane_g2_copy2_ParamLimits

0x639c,	// (0x0004d55c) eswt_control_pane_g2_copy2

0x63a9,	// (0x0004d569) eswt_control_pane_g3_copy2_ParamLimits

0x63a9,	// (0x0004d569) eswt_control_pane_g3_copy2

0x63b6,	// (0x0004d576) eswt_control_pane_g4_copy2_ParamLimits

0x63b6,	// (0x0004d576) eswt_control_pane_g4_copy2

0xa1ed,	// (0x000513ad) common_borders_pane_cp4

0x641c,	// (0x0004d5dc) separator_horizontal_pane_g1

0x6425,	// (0x0004d5e5) separator_horizontal_pane_g2

0x642e,	// (0x0004d5ee) separator_horizontal_pane_g3

0x0002,

0xfbf2,	// (0x00056db2) separator_horizontal_pane_g

0x638f,	// (0x0004d54f) eswt_control_pane_g1_copy3_ParamLimits

0x638f,	// (0x0004d54f) eswt_control_pane_g1_copy3

0x639c,	// (0x0004d55c) eswt_control_pane_g2_copy3_ParamLimits

0x639c,	// (0x0004d55c) eswt_control_pane_g2_copy3

0x63a9,	// (0x0004d569) eswt_control_pane_g3_copy3_ParamLimits

0x63a9,	// (0x0004d569) eswt_control_pane_g3_copy3

0x63b6,	// (0x0004d576) eswt_control_pane_g4_copy3_ParamLimits

0x63b6,	// (0x0004d576) eswt_control_pane_g4_copy3

0xa1ed,	// (0x000513ad) common_borders_pane_cp5

0x6437,	// (0x0004d5f7) separator_vertical_pane_g1

0x6440,	// (0x0004d600) separator_vertical_pane_g2

0x6449,	// (0x0004d609) separator_vertical_pane_g3

0x0002,

0xfbf9,	// (0x00056db9) separator_vertical_pane_g

0x638f,	// (0x0004d54f) eswt_control_pane_g1_copy4_ParamLimits

0x638f,	// (0x0004d54f) eswt_control_pane_g1_copy4

0x639c,	// (0x0004d55c) eswt_control_pane_g2_copy4_ParamLimits

0x639c,	// (0x0004d55c) eswt_control_pane_g2_copy4

0x63a9,	// (0x0004d569) eswt_control_pane_g3_copy4_ParamLimits

0x63a9,	// (0x0004d569) eswt_control_pane_g3_copy4

0x63b6,	// (0x0004d576) eswt_control_pane_g4_copy4_ParamLimits

0x63b6,	// (0x0004d576) eswt_control_pane_g4_copy4

0xd25e,	// (0x0005441e) eswt_ctrl_combo_button_pane

0xd266,	// (0x00054426) eswt_ctrl_input_pane

0xd26e,	// (0x0005442e) popup_choice_list_window_cp70

0xd276,	// (0x00054436) eswt_ctrl_input_pane_t1

0xa1ed,	// (0x000513ad) input_focus_pane_cp70

0x59b4,	// (0x0004cb74) bg_button_pane_cp70_ParamLimits

0x59b4,	// (0x0004cb74) bg_button_pane_cp70

0xd284,	// (0x00054444) eswt_ctrl_combo_button_pane_g1

0x6480,	// (0x0004d640) wait_bar_pane_cp70

0x3465,	// (0x0004a625) bg_popup_window_pane_cp70_ParamLimits

0x3465,	// (0x0004a625) bg_popup_window_pane_cp70

0x6488,	// (0x0004d648) popup_eswt_tasktip_window_t1

0x649e,	// (0x0004d65e) wait_bar_pane_cp71_ParamLimits

0x649e,	// (0x0004d65e) wait_bar_pane_cp71

0x64aa,	// (0x0004d66a) grid_eswt_app_pane

0xe6e7,	// (0x000558a7) scroll_pane_cp70

0xd28c,	// (0x0005444c) cell_eswt_app_pane_ParamLimits

0xd28c,	// (0x0005444c) cell_eswt_app_pane

0xd2be,	// (0x0005447e) cell_eswt_app_pane_g1_ParamLimits

0xd2be,	// (0x0005447e) cell_eswt_app_pane_g1

0xd2ed,	// (0x000544ad) cell_eswt_app_pane_g2_ParamLimits

0xd2ed,	// (0x000544ad) cell_eswt_app_pane_g2

0x0001,

0xfc00,	// (0x00056dc0) cell_eswt_app_pane_g_ParamLimits

0xfc00,	// (0x00056dc0) cell_eswt_app_pane_g

0xd316,	// (0x000544d6) cell_eswt_app_pane_t1_ParamLimits

0xd316,	// (0x000544d6) cell_eswt_app_pane_t1

0x656f,	// (0x0004d72f) grid_highlight_pane_cp70_ParamLimits

0x656f,	// (0x0004d72f) grid_highlight_pane_cp70

0x2a65,	// (0x00049c25) set_content_pane_g1

0xb376,	// (0x00052536) status_small_volume_pane

0x1832,	// (0x000489f2) status_small_volume_pane_g1

0x183a,	// (0x000489fa) volume_small2_pane

0x1843,	// (0x00048a03) volume_small2_pane_g1

0x184c,	// (0x00048a0c) volume_small2_pane_g2

0x1855,	// (0x00048a15) volume_small2_pane_g3

0x185e,	// (0x00048a1e) volume_small2_pane_g4

0x1867,	// (0x00048a27) volume_small2_pane_g5

0x1870,	// (0x00048a30) volume_small2_pane_g6

0x1879,	// (0x00048a39) volume_small2_pane_g7

0x1882,	// (0x00048a42) volume_small2_pane_g8

0x188b,	// (0x00048a4b) volume_small2_pane_g9

0x1894,	// (0x00048a54) volume_small2_pane_g10

0x0009,

0xfc05,	// (0x00056dc5) volume_small2_pane_g

0x5dbe,	// (0x0004cf7e) fep_vkb_top_text_pane_g1_ParamLimits

0xd1e4,	// (0x000543a4) fep_vkb_top_text_pane_t1_ParamLimits

0x60b3,	// (0x0004d273) popup_preview_fixed_window_g3_ParamLimits

0x60b3,	// (0x0004d273) popup_preview_fixed_window_g3

0xbbe8,	// (0x00052da8) popup_toolbar_trans_pane

0xcba0,	// (0x00053d60) aid_height_set_list_ParamLimits

0x47ce,	// (0x0004b98e) aid_size_parent_ParamLimits

0x2ebb,	// (0x0004a07b) list_highlight_pane_cp2_ParamLimits

0x2a65,	// (0x00049c25) set_content_pane_g1_ParamLimits

0xcd4a,	// (0x00053f0a) list_single_image_pane_ParamLimits

0xcd4a,	// (0x00053f0a) list_single_image_pane

0xd348,	// (0x00054508) aid_size_cell_image_ParamLimits

0xd348,	// (0x00054508) aid_size_cell_image

0xd355,	// (0x00054515) grid_single_image_pane_ParamLimits

0xd355,	// (0x00054515) grid_single_image_pane

0xae93,	// (0x00052053) list_single_image_pane_g1_ParamLimits

0xae93,	// (0x00052053) list_single_image_pane_g1

0xae9f,	// (0x0005205f) list_single_image_pane_g2_ParamLimits

0xae9f,	// (0x0005205f) list_single_image_pane_g2

0x0001,

0xfc1a,	// (0x00056dda) list_single_image_pane_g_ParamLimits

0xfc1a,	// (0x00056dda) list_single_image_pane_g

0x6596,	// (0x0004d756) list_single_image_pane_t1_ParamLimits

0x6596,	// (0x0004d756) list_single_image_pane_t1

0xd363,	// (0x00054523) cell_image_list_pane_ParamLimits

0xd363,	// (0x00054523) cell_image_list_pane

0xd379,	// (0x00054539) cell_image_list_pane_g1

0xd382,	// (0x00054542) cell_image_list_pane_g2

0x0001,

0xfc1f,	// (0x00056ddf) cell_image_list_pane_g

0x65d6,	// (0x0004d796) aid_size_cell_tb_trans_pane

0xae85,	// (0x00052045) bg_tb_trans_pane

0x65e8,	// (0x0004d7a8) grid_tb_trans_pane

0x33f1,	// (0x0004a5b1) bg_tb_trans_pane_g1

0x33f9,	// (0x0004a5b9) bg_tb_trans_pane_g2

0x3401,	// (0x0004a5c1) bg_tb_trans_pane_g3

0x3409,	// (0x0004a5c9) bg_tb_trans_pane_g4

0x3411,	// (0x0004a5d1) bg_tb_trans_pane_g5

0x3429,	// (0x0004a5e9) bg_tb_trans_pane_g6

0x3431,	// (0x0004a5f1) bg_tb_trans_pane_g7

0x3419,	// (0x0004a5d9) bg_tb_trans_pane_g8

0x3421,	// (0x0004a5e1) bg_tb_trans_pane_g9

0x0008,

0xfc24,	// (0x00056de4) bg_tb_trans_pane_g

0x65fc,	// (0x0004d7bc) cell_toolbar_trans_pane_ParamLimits

0x65fc,	// (0x0004d7bc) cell_toolbar_trans_pane

0x59ef,	// (0x0004cbaf) cell_toolbar_trans_pane_g1

0xcf8c,	// (0x0005414c) list_form2_midp_pane_t1

0xcf9a,	// (0x0005415a) list_form2_midp_pane_t2

0x0001,

0xfacd,	// (0x00056c8d) list_form2_midp_pane_t

0x5643,	// (0x0004c803) scroll_pane_cp51_ParamLimits

0x580a,	// (0x0004c9ca) form2_midp_wait_pane_g1

0x5813,	// (0x0004c9d3) form2_midp_wait_pane_g2

0x581c,	// (0x0004c9dc) form2_midp_wait_pane_g3

0x0002,

0xfae2,	// (0x00056ca2) form2_midp_wait_pane_g

0xa574,	// (0x00051734) list_highlight_pane_cp21_ParamLimits

0x5855,	// (0x0004ca15) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5864,	// (0x0004ca24) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x12ad,	// (0x0004846d) list_single_2graphic_im_pane_ParamLimits

0x12ad,	// (0x0004846d) list_single_2graphic_im_pane

0xd38b,	// (0x0005454b) list_single_2graphic_im_pane_g1_ParamLimits

0xd38b,	// (0x0005454b) list_single_2graphic_im_pane_g1

0xd39c,	// (0x0005455c) list_single_2graphic_im_pane_g2_ParamLimits

0xd39c,	// (0x0005455c) list_single_2graphic_im_pane_g2

0xd3a8,	// (0x00054568) list_single_2graphic_im_pane_g3_ParamLimits

0xd3a8,	// (0x00054568) list_single_2graphic_im_pane_g3

0x0003,

0xfc37,	// (0x00056df7) list_single_2graphic_im_pane_g_ParamLimits

0xfc37,	// (0x00056df7) list_single_2graphic_im_pane_g

0xd3bc,	// (0x0005457c) list_single_2graphic_im_pane_t1_ParamLimits

0xd3bc,	// (0x0005457c) list_single_2graphic_im_pane_t1

0x60bf,	// (0x0004d27f) list_single_graphic_2heading_pane_fp_ParamLimits

0x60bf,	// (0x0004d27f) list_single_graphic_2heading_pane_fp

0xf151,	// (0x00056311) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf151,	// (0x00056311) list_single_graphic_2heading_pane_fp_g1

0x60d8,	// (0x0004d298) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x60d8,	// (0x0004d298) list_single_graphic_2heading_pane_fp_g2

0x6031,	// (0x0004d1f1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6031,	// (0x0004d1f1) list_single_graphic_2heading_pane_fp_g3

0x603d,	// (0x0004d1fd) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x603d,	// (0x0004d1fd) list_single_graphic_2heading_pane_fp_g4

0x60e4,	// (0x0004d2a4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x60e4,	// (0x0004d2a4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb65,	// (0x00056d25) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb65,	// (0x00056d25) list_single_graphic_2heading_pane_fp_g

0xf43b,	// (0x000565fb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf43b,	// (0x000565fb) list_single_graphic_2heading_pane_fp_t1

0xf189,	// (0x00056349) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf189,	// (0x00056349) list_single_graphic_2heading_pane_fp_t2

0xf451,	// (0x00056611) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf451,	// (0x00056611) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc40,	// (0x00056e00) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc40,	// (0x00056e00) list_single_graphic_2heading_pane_fp_t

0x5a80,	// (0x0004cc40) fep_hwr_write_pane_g5_ParamLimits

0x5a80,	// (0x0004cc40) fep_hwr_write_pane_g5

0x5a8c,	// (0x0004cc4c) fep_hwr_write_pane_g6_ParamLimits

0x5a8c,	// (0x0004cc4c) fep_hwr_write_pane_g6

0x635e,	// (0x0004d51e) eswt_shell_pane_ParamLimits

0x3465,	// (0x0004a625) bg_popup_window_pane_cp18_ParamLimits

0x4714,	// (0x0004b8d4) heading_pane_cp70

0x6488,	// (0x0004d648) popup_eswt_tasktip_window_t1_ParamLimits

0xbcb2,	// (0x00052e72) aid_touch_tab_arrow_left

0xbcc8,	// (0x00052e88) aid_touch_tab_arrow_right

0xa456,	// (0x00051616) title_pane_g3_ParamLimits

0xa456,	// (0x00051616) title_pane_g3

0xae44,	// (0x00052004) set_value_pane_g1

0xbbe8,	// (0x00052da8) popup_toolbar_trans_pane_ParamLimits

0x65d6,	// (0x0004d796) aid_size_cell_tb_trans_pane_ParamLimits

0xae85,	// (0x00052045) bg_tb_trans_pane_ParamLimits

0x65e8,	// (0x0004d7a8) grid_tb_trans_pane_ParamLimits

0xa857,	// (0x00051a17) cont_note_pane_ParamLimits

0xa857,	// (0x00051a17) cont_note_pane

0xabe2,	// (0x00051da2) cont_snote2_single_text_pane_ParamLimits

0xabe2,	// (0x00051da2) cont_snote2_single_text_pane

0xabe2,	// (0x00051da2) cont_snote2_single_graphic_pane_ParamLimits

0xabe2,	// (0x00051da2) cont_snote2_single_graphic_pane

0x3a57,	// (0x0004ac17) cont_note_wait_pane_ParamLimits

0x3a57,	// (0x0004ac17) cont_note_wait_pane

0x3a57,	// (0x0004ac17) cont_note_image_pane_ParamLimits

0x3a57,	// (0x0004ac17) cont_note_image_pane

0x6690,	// (0x0004d850) popup_note2_window_g1_ParamLimits

0x6690,	// (0x0004d850) popup_note2_window_g1

0x66c1,	// (0x0004d881) popup_note2_window_t1_ParamLimits

0x66c1,	// (0x0004d881) popup_note2_window_t1

0x6706,	// (0x0004d8c6) popup_note2_window_t2_ParamLimits

0x6706,	// (0x0004d8c6) popup_note2_window_t2

0x674b,	// (0x0004d90b) popup_note2_window_t3_ParamLimits

0x674b,	// (0x0004d90b) popup_note2_window_t3

0x6790,	// (0x0004d950) popup_note2_window_t4_ParamLimits

0x6790,	// (0x0004d950) popup_note2_window_t4

0xa8db,	// (0x00051a9b) popup_note2_window_t5_ParamLimits

0xa8db,	// (0x00051a9b) popup_note2_window_t5

0x0004,

0xfc4c,	// (0x00056e0c) popup_note2_window_t_ParamLimits

0xfc4c,	// (0x00056e0c) popup_note2_window_t

0x67bf,	// (0x0004d97f) popup_note2_image_window_g1_ParamLimits

0x67bf,	// (0x0004d97f) popup_note2_image_window_g1

0x67cb,	// (0x0004d98b) popup_note2_image_window_g2_ParamLimits

0x67cb,	// (0x0004d98b) popup_note2_image_window_g2

0x0001,

0xfc57,	// (0x00056e17) popup_note2_image_window_g_ParamLimits

0xfc57,	// (0x00056e17) popup_note2_image_window_g

0x67dd,	// (0x0004d99d) popup_note2_image_window_t1_ParamLimits

0x67dd,	// (0x0004d99d) popup_note2_image_window_t1

0x67f5,	// (0x0004d9b5) popup_note2_image_window_t2_ParamLimits

0x67f5,	// (0x0004d9b5) popup_note2_image_window_t2

0x680d,	// (0x0004d9cd) popup_note2_image_window_t3_ParamLimits

0x680d,	// (0x0004d9cd) popup_note2_image_window_t3

0x0002,

0xfc5c,	// (0x00056e1c) popup_note2_image_window_t_ParamLimits

0xfc5c,	// (0x00056e1c) popup_note2_image_window_t

0x3a65,	// (0x0004ac25) popup_note2_wait_window_g1_ParamLimits

0x3a65,	// (0x0004ac25) popup_note2_wait_window_g1

0x6829,	// (0x0004d9e9) popup_note2_wait_window_g2_ParamLimits

0x6829,	// (0x0004d9e9) popup_note2_wait_window_g2

0x3a7d,	// (0x0004ac3d) popup_note2_wait_window_g3_ParamLimits

0x3a7d,	// (0x0004ac3d) popup_note2_wait_window_g3

0x0002,

0xfc63,	// (0x00056e23) popup_note2_wait_window_g_ParamLimits

0xfc63,	// (0x00056e23) popup_note2_wait_window_g

0x6835,	// (0x0004d9f5) popup_note2_wait_window_t1_ParamLimits

0x6835,	// (0x0004d9f5) popup_note2_wait_window_t1

0x6853,	// (0x0004da13) popup_note2_wait_window_t2_ParamLimits

0x6853,	// (0x0004da13) popup_note2_wait_window_t2

0x6871,	// (0x0004da31) popup_note2_wait_window_t3_ParamLimits

0x6871,	// (0x0004da31) popup_note2_wait_window_t3

0x6883,	// (0x0004da43) popup_note2_wait_window_t4_ParamLimits

0x6883,	// (0x0004da43) popup_note2_wait_window_t4

0x0003,

0xfc6a,	// (0x00056e2a) popup_note2_wait_window_t_ParamLimits

0xfc6a,	// (0x00056e2a) popup_note2_wait_window_t

0x6895,	// (0x0004da55) wait_bar2_pane_ParamLimits

0x6895,	// (0x0004da55) wait_bar2_pane

0x68ad,	// (0x0004da6d) popup_snote2_single_text_window_g1_ParamLimits

0x68ad,	// (0x0004da6d) popup_snote2_single_text_window_g1

0x68d5,	// (0x0004da95) popup_snote2_single_text_window_t1_ParamLimits

0x68d5,	// (0x0004da95) popup_snote2_single_text_window_t1

0x6921,	// (0x0004dae1) popup_snote2_single_text_window_t2_ParamLimits

0x6921,	// (0x0004dae1) popup_snote2_single_text_window_t2

0x696d,	// (0x0004db2d) popup_snote2_single_text_window_t3_ParamLimits

0x696d,	// (0x0004db2d) popup_snote2_single_text_window_t3

0x69ae,	// (0x0004db6e) popup_snote2_single_text_window_t4_ParamLimits

0x69ae,	// (0x0004db6e) popup_snote2_single_text_window_t4

0x69e4,	// (0x0004dba4) popup_snote2_single_text_window_t5_ParamLimits

0x69e4,	// (0x0004dba4) popup_snote2_single_text_window_t5

0x0004,

0xfc73,	// (0x00056e33) popup_snote2_single_text_window_t_ParamLimits

0xfc73,	// (0x00056e33) popup_snote2_single_text_window_t

0x6a0f,	// (0x0004dbcf) popup_snote2_single_graphic_window_g1_ParamLimits

0x6a0f,	// (0x0004dbcf) popup_snote2_single_graphic_window_g1

0x6a37,	// (0x0004dbf7) popup_snote2_single_graphic_window_g2_ParamLimits

0x6a37,	// (0x0004dbf7) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7e,	// (0x00056e3e) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7e,	// (0x00056e3e) popup_snote2_single_graphic_window_g

0x6a5f,	// (0x0004dc1f) popup_snote2_single_graphic_window_t1_ParamLimits

0x6a5f,	// (0x0004dc1f) popup_snote2_single_graphic_window_t1

0x6aab,	// (0x0004dc6b) popup_snote2_single_graphic_window_t2_ParamLimits

0x6aab,	// (0x0004dc6b) popup_snote2_single_graphic_window_t2

0x696d,	// (0x0004db2d) popup_snote2_single_graphic_window_t3_ParamLimits

0x696d,	// (0x0004db2d) popup_snote2_single_graphic_window_t3

0x69ae,	// (0x0004db6e) popup_snote2_single_graphic_window_t4_ParamLimits

0x69ae,	// (0x0004db6e) popup_snote2_single_graphic_window_t4

0x69e4,	// (0x0004dba4) popup_snote2_single_graphic_window_t5_ParamLimits

0x69e4,	// (0x0004dba4) popup_snote2_single_graphic_window_t5

0x0004,

0xfc83,	// (0x00056e43) popup_snote2_single_graphic_window_t_ParamLimits

0xfc83,	// (0x00056e43) popup_snote2_single_graphic_window_t

0x54f3,	// (0x0004c6b3) clock_nsta_pane_cp2_t1

0x54f3,	// (0x0004c6b3) clock_nsta_pane_cp2_t2

0x0001,

0xfaa3,	// (0x00056c63) clock_nsta_pane_cp2_t

0xec88,	// (0x00055e48) form_field_data_wide_pane_g1_ParamLimits

0xae93,	// (0x00052053) form_field_data_wide_pane_g2_ParamLimits

0xae93,	// (0x00052053) form_field_data_wide_pane_g2

0xae9f,	// (0x0005205f) form_field_data_wide_pane_g3_ParamLimits

0xae9f,	// (0x0005205f) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x0005681b) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x0005681b) form_field_data_wide_pane_g

0xce93,	// (0x00054053) grid_touch_3_pane_ParamLimits

0xce93,	// (0x00054053) grid_touch_3_pane

0xd3ed,	// (0x000545ad) cell_touch_3_pane_ParamLimits

0xd3ed,	// (0x000545ad) cell_touch_3_pane

0x59ef,	// (0x0004cbaf) cell_touch_3_pane_g1

0x59ef,	// (0x0004cbaf) cell_touch_3_pane_g2

0x0001,

0xfb28,	// (0x00056ce8) cell_touch_3_pane_g

0xa933,	// (0x00051af3) cont_query_data_pane

0xa93b,	// (0x00051afb) cont_query_data_pane_cp1

0x6b2a,	// (0x0004dcea) button_value_adjust_pane_cp7

0x6b32,	// (0x0004dcf2) query_popup_pane_cp3

0x2670,	// (0x00049830) bg_popup_sub_pane_cp22_ParamLimits

0x04ef,	// (0x000476af) navi_navi_volume_pane_cp2

0x050a,	// (0x000476ca) popup_side_volume_key_window_g2

0x0519,	// (0x000476d9) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x000568b1) popup_side_volume_key_window_g

0x0536,	// (0x000476f6) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x000568b8) popup_side_volume_key_window_t

0x292c,	// (0x00049aec) popup_side_volume_key_window_ParamLimits

0x9ac3,	// (0x00050c83) list_double_graphic_pane_g4_ParamLimits

0x9ac3,	// (0x00050c83) list_double_graphic_pane_g4

0xc00b,	// (0x000531cb) list_single_2heading_msg_pane_ParamLimits

0xc00b,	// (0x000531cb) list_single_2heading_msg_pane

0xa057,	// (0x00051217) list_single_2heading_msg_pane_g1_ParamLimits

0xa057,	// (0x00051217) list_single_2heading_msg_pane_g1

0xa063,	// (0x00051223) list_single_2heading_msg_pane_g2_ParamLimits

0xa063,	// (0x00051223) list_single_2heading_msg_pane_g2

0xa076,	// (0x00051236) list_single_2heading_msg_pane_g3_ParamLimits

0xa076,	// (0x00051236) list_single_2heading_msg_pane_g3

0xa082,	// (0x00051242) list_single_2heading_msg_pane_g4_ParamLimits

0xa082,	// (0x00051242) list_single_2heading_msg_pane_g4

0x0003,

0xfc8e,	// (0x00056e4e) list_single_2heading_msg_pane_g_ParamLimits

0xfc8e,	// (0x00056e4e) list_single_2heading_msg_pane_g

0xa09a,	// (0x0005125a) list_single_2heading_msg_pane_t1_ParamLimits

0xa09a,	// (0x0005125a) list_single_2heading_msg_pane_t1

0xa0c2,	// (0x00051282) list_single_2heading_msg_pane_t2_ParamLimits

0xa0c2,	// (0x00051282) list_single_2heading_msg_pane_t2

0xa12d,	// (0x000512ed) list_single_2heading_msg_pane_t3_ParamLimits

0xa12d,	// (0x000512ed) list_single_2heading_msg_pane_t3

0xf471,	// (0x00056631) list_single_2heading_msg_pane_t4_ParamLimits

0xf471,	// (0x00056631) list_single_2heading_msg_pane_t4

0x0003,

0xfc97,	// (0x00056e57) list_single_2heading_msg_pane_t_ParamLimits

0xfc97,	// (0x00056e57) list_single_2heading_msg_pane_t

0xa462,	// (0x00051622) title_pane_g4_ParamLimits

0xa462,	// (0x00051622) title_pane_g4

0x022b,	// (0x000473eb) title_pane_stacon_g3_ParamLimits

0x022b,	// (0x000473eb) title_pane_stacon_g3

0x6653,	// (0x0004d813) list_single_2graphic_im_pane_g4_ParamLimits

0x6653,	// (0x0004d813) list_single_2graphic_im_pane_g4

0x44c7,	// (0x0004b687) popup_side_volume_key_window_cp

0x4cde,	// (0x0004be9e) main_idle_act2_pane_t1

0x0f60,	// (0x00048120) toolbar_button_pane_g10

0xadda,	// (0x00051f9a) popup_toolbar_window_cp1

0x54e4,	// (0x0004c6a4) clock_nsta_pane_cp_t1

0x54e4,	// (0x0004c6a4) clock_nsta_pane_cp_t2

0x0001,

0xfa9e,	// (0x00056c5e) clock_nsta_pane_cp_t

0x04ef,	// (0x000476af) navi_navi_volume_pane_cp2_ParamLimits

0x04fe,	// (0x000476be) popup_side_volume_key_window_g1_ParamLimits

0x050a,	// (0x000476ca) popup_side_volume_key_window_g2_ParamLimits

0x0519,	// (0x000476d9) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x000568b1) popup_side_volume_key_window_g_ParamLimits

0x14b7,	// (0x00048677) fep_hwr_aid_pane

0xd098,	// (0x00054258) bg_fep_hwr_top_pane_g4_ParamLimits

0x5a50,	// (0x0004cc10) fep_hwr_top_pane_g1_ParamLimits

0x5a62,	// (0x0004cc22) fep_hwr_top_pane_g2_ParamLimits

0x1572,	// (0x00048732) fep_hwr_top_pane_g3_ParamLimits

0xfaf3,	// (0x00056cb3) fep_hwr_top_pane_g_ParamLimits

0x1587,	// (0x00048747) fep_hwr_top_text_pane_ParamLimits

0x427c,	// (0x0004b43c) aid_touch_tab_arrow_arrow_2

0x4285,	// (0x0004b445) aid_touch_tab_arrow_left_2

0x14cb,	// (0x0004868b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1502,	// (0x000486c2) fep_hwr_prediction_pane

0x5bb8,	// (0x0004cd78) fep_vkb_prediction_pane

0xd1c4,	// (0x00054384) fep_vkb_side_pane_g3_ParamLimits

0xd1c4,	// (0x00054384) fep_vkb_side_pane_g3

0x5c6a,	// (0x0004ce2a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6138,	// (0x0004d2f8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6145,	// (0x0004d305) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9d,	// (0x00056d5d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6b59,	// (0x0004dd19) fep_hwr_prediction_pane_g1

0x18d9,	// (0x00048a99) fep_hwr_prediction_pane_g2

0x18e1,	// (0x00048aa1) fep_hwr_prediction_pane_g3

0x18e9,	// (0x00048aa9) fep_hwr_prediction_pane_g4

0x0003,

0xfca0,	// (0x00056e60) fep_hwr_prediction_pane_g

0x6b59,	// (0x0004dd19) fep_vkb_prediction_pane_g1

0x6b63,	// (0x0004dd23) fep_vkb_prediction_pane_g2

0x6b6b,	// (0x0004dd2b) fep_vkb_prediction_pane_g3

0x6b73,	// (0x0004dd33) fep_vkb_prediction_pane_g4

0x0003,

0xfca9,	// (0x00056e69) fep_vkb_prediction_pane_g

0x1255,	// (0x00048415) slider_set_pane_g3

0x1269,	// (0x00048429) slider_set_pane_g4

0x1281,	// (0x00048441) slider_set_pane_g5

0x1255,	// (0x00048415) slider_set_pane_g6

0x1297,	// (0x00048457) slider_set_pane_g7

0x494d,	// (0x0004bb0d) slider_form_pane_g3

0x4956,	// (0x0004bb16) slider_form_pane_g4

0x495e,	// (0x0004bb1e) slider_form_pane_g5

0x494d,	// (0x0004bb0d) slider_form_pane_g6

0xcd09,	// (0x00053ec9) slider_form_pane_g7

0x4fa2,	// (0x0004c162) slider_set_pane_vc_g3

0x4fab,	// (0x0004c16b) slider_set_pane_vc_g4

0x4fb4,	// (0x0004c174) slider_set_pane_vc_g5

0x4fa2,	// (0x0004c162) slider_set_pane_vc_g6

0x4fbd,	// (0x0004c17d) slider_set_pane_vc_g7

0x5193,	// (0x0004c353) slider_form_pane_vc_g1

0x519c,	// (0x0004c35c) slider_form_pane_vc_g2

0x51a5,	// (0x0004c365) slider_form_pane_vc_g3

0x5193,	// (0x0004c353) slider_form_pane_vc_g4

0x51ae,	// (0x0004c36e) slider_form_pane_vc_g5

0x0004,

0xfa70,	// (0x00056c30) slider_form_pane_vc_g

0xa1ed,	// (0x000513ad) main_idle_act3_pane

0x6b7b,	// (0x0004dd3b) ai3_links_pane

0xd439,	// (0x000545f9) popup_ai3_data_window_ParamLimits

0xd439,	// (0x000545f9) popup_ai3_data_window

0xa1ed,	// (0x000513ad) grid_ai3_links_pane

0xd457,	// (0x00054617) cell_ai3_links_pane_ParamLimits

0xd457,	// (0x00054617) cell_ai3_links_pane

0x6bbc,	// (0x0004dd7c) bg_popup_sub_pane_cp11

0x6bc9,	// (0x0004dd89) cell_ai3_links_pane_g1

0xa1ed,	// (0x000513ad) bg_popup_sub_pane_cp12

0x6bee,	// (0x0004ddae) heading_ai3_data_pane

0x6bf6,	// (0x0004ddb6) list_ai3_gene_pane

0x6c02,	// (0x0004ddc2) popup_ai3_data_window_g1

0x6c0a,	// (0x0004ddca) heading_ai3_data_pane_g1

0x6c12,	// (0x0004ddd2) heading_ai3_data_pane_t1

0x6c20,	// (0x0004dde0) list_double_ai3_gene_pane_ParamLimits

0x6c20,	// (0x0004dde0) list_double_ai3_gene_pane

0x6c2d,	// (0x0004dded) list_single_ai3_gene_pane_ParamLimits

0x6c2d,	// (0x0004dded) list_single_ai3_gene_pane

0x59b4,	// (0x0004cb74) list_highlight_pane_cp7_ParamLimits

0x59b4,	// (0x0004cb74) list_highlight_pane_cp7

0x6c3a,	// (0x0004ddfa) list_single_a13_gene_pane_t1_ParamLimits

0x6c3a,	// (0x0004ddfa) list_single_a13_gene_pane_t1

0x6c51,	// (0x0004de11) list_single_ai3_gene_pane_g1

0x6c5a,	// (0x0004de1a) list_single_ai3_gene_pane_g2

0x0001,

0xfcb2,	// (0x00056e72) list_single_ai3_gene_pane_g

0x6c62,	// (0x0004de22) list_double_ai3_gene_pane_g1_ParamLimits

0x6c62,	// (0x0004de22) list_double_ai3_gene_pane_g1

0x6c6e,	// (0x0004de2e) list_double_ai3_gene_pane_t1_ParamLimits

0x6c6e,	// (0x0004de2e) list_double_ai3_gene_pane_t1

0x6c8a,	// (0x0004de4a) list_double_ai3_gene_pane_t2_ParamLimits

0x6c8a,	// (0x0004de4a) list_double_ai3_gene_pane_t2

0x6c9f,	// (0x0004de5f) list_double_ai3_gene_pane_t3_ParamLimits

0x6c9f,	// (0x0004de5f) list_double_ai3_gene_pane_t3

0x0002,

0xfcb7,	// (0x00056e77) list_double_ai3_gene_pane_t_ParamLimits

0xfcb7,	// (0x00056e77) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf467,	// (0x00056627) aid_size_min_col_2

0xd423,	// (0x000545e3) aid_size_min_msg_ParamLimits

0xd423,	// (0x000545e3) aid_size_min_msg

0xd1d8,	// (0x00054398) fep_vkb_top_text_pane_g2_ParamLimits

0xd1d8,	// (0x00054398) fep_vkb_top_text_pane_g2

0x0001,

0xfb23,	// (0x00056ce3) fep_vkb_top_text_pane_g_ParamLimits

0xfb23,	// (0x00056ce3) fep_vkb_top_text_pane_g

0xa1ed,	// (0x000513ad) main_hc_apps_shell_pane

0x6cbc,	// (0x0004de7c) grid_hc_apps_pane_ParamLimits

0x6cbc,	// (0x0004de7c) grid_hc_apps_pane

0x6cce,	// (0x0004de8e) list_hc_apps_pane

0x6cd6,	// (0x0004de96) scroll_pane_cp37_ParamLimits

0x6cd6,	// (0x0004de96) scroll_pane_cp37

0xd471,	// (0x00054631) cell_hc_apps_pane_ParamLimits

0xd471,	// (0x00054631) cell_hc_apps_pane

0xd539,	// (0x000546f9) cell_hc_apps_pane_g1_ParamLimits

0xd539,	// (0x000546f9) cell_hc_apps_pane_g1

0x6dc4,	// (0x0004df84) cell_hc_apps_pane_g2_ParamLimits

0x6dc4,	// (0x0004df84) cell_hc_apps_pane_g2

0x6de0,	// (0x0004dfa0) cell_hc_apps_pane_g3_ParamLimits

0x6de0,	// (0x0004dfa0) cell_hc_apps_pane_g3

0x0002,

0xfcbe,	// (0x00056e7e) cell_hc_apps_pane_g_ParamLimits

0xfcbe,	// (0x00056e7e) cell_hc_apps_pane_g

0xd565,	// (0x00054725) cell_hc_apps_pane_t1_ParamLimits

0xd565,	// (0x00054725) cell_hc_apps_pane_t1

0xa857,	// (0x00051a17) grid_highlight_pane_cp10_ParamLimits

0xa857,	// (0x00051a17) grid_highlight_pane_cp10

0xd5a5,	// (0x00054765) list_single_hc_apps_pane_ParamLimits

0xd5a5,	// (0x00054765) list_single_hc_apps_pane

0xd5df,	// (0x0005479f) list_single_hc_apps_pane_g1

0xc081,	// (0x00053241) list_single_hc_apps_pane_g2

0x0001,

0xfcc5,	// (0x00056e85) list_single_hc_apps_pane_g

0xc09a,	// (0x0005325a) list_single_hc_apps_pane_g2_copy1

0xa19b,	// (0x0005135b) list_single_hc_apps_pane_t1

0xa574,	// (0x00051734) bg_set_opt_pane_cp_ParamLimits

0xf4a0,	// (0x00056660) setting_slider_pane_t1_ParamLimits

0xf4b9,	// (0x00056679) setting_slider_pane_t2_ParamLimits

0xf4d3,	// (0x00056693) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x000566f9) setting_slider_pane_t_ParamLimits

0xf4eb,	// (0x000566ab) slider_set_pane_ParamLimits

0x07cd,	// (0x0004798d) control_pane_g5_ParamLimits

0x07cd,	// (0x0004798d) control_pane_g5

0x4780,	// (0x0004b940) slider_set_pane_g1_ParamLimits

0x1249,	// (0x00048409) slider_set_pane_g2_ParamLimits

0x1255,	// (0x00048415) slider_set_pane_g3_ParamLimits

0x1269,	// (0x00048429) slider_set_pane_g4_ParamLimits

0x1281,	// (0x00048441) slider_set_pane_g5_ParamLimits

0x1255,	// (0x00048415) slider_set_pane_g6_ParamLimits

0x1297,	// (0x00048457) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x00056aff) slider_set_pane_g_ParamLimits

0x2a10,	// (0x00049bd0) navi_icon_text_pane_ParamLimits

0xbc79,	// (0x00052e39) aid_fill_nsta_2_ParamLimits

0xbcb2,	// (0x00052e72) aid_touch_tab_arrow_left_ParamLimits

0xbcc8,	// (0x00052e88) aid_touch_tab_arrow_right_ParamLimits

0xbd63,	// (0x00052f23) clock_nsta_pane_ParamLimits

0xca87,	// (0x00053c47) navi_icon_pane_g1_ParamLimits

0xca93,	// (0x00053c53) navi_text_pane_t1_ParamLimits

0xcf6e,	// (0x0005412e) navi_icon_text_pane_g1_ParamLimits

0xcf7a,	// (0x0005413a) navi_icon_text_pane_t1_ParamLimits

0xd5df,	// (0x0005479f) list_single_hc_apps_pane_g1_ParamLimits

0xc081,	// (0x00053241) list_single_hc_apps_pane_g2_ParamLimits

0xfcc5,	// (0x00056e85) list_single_hc_apps_pane_g_ParamLimits

0xc09a,	// (0x0005325a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xa19b,	// (0x0005135b) list_single_hc_apps_pane_t1_ParamLimits

0xa345,	// (0x00051505) popup_toolbar2_fixed_window_ParamLimits

0xa345,	// (0x00051505) popup_toolbar2_fixed_window

0xbbde,	// (0x00052d9e) popup_toolbar2_float_window

0xa1ed,	// (0x000513ad) bg_popup_sub_pane_cp27

0x6e9a,	// (0x0004e05a) grid_toolbar2_float_pane

0xa1ed,	// (0x000513ad) bg_popup_sub_pane_cp26

0x6e9a,	// (0x0004e05a) grid_toolbar2_fixed_pane

0xd5f8,	// (0x000547b8) cell_toolbar2_fixed_pane_ParamLimits

0xd5f8,	// (0x000547b8) cell_toolbar2_fixed_pane

0xd612,	// (0x000547d2) cell_toolbar2_fixed_pane_g1

0x6ebb,	// (0x0004e07b) toolbar2_fixed_button_pane

0x33f1,	// (0x0004a5b1) toolbar2_fixed_button_pane_g1

0x33f9,	// (0x0004a5b9) toolbar2_fixed_button_pane_g2

0x3401,	// (0x0004a5c1) toolbar2_fixed_button_pane_g3

0x3409,	// (0x0004a5c9) toolbar2_fixed_button_pane_g4

0x3411,	// (0x0004a5d1) toolbar2_fixed_button_pane_g5

0x3419,	// (0x0004a5d9) toolbar2_fixed_button_pane_g6

0x3421,	// (0x0004a5e1) toolbar2_fixed_button_pane_g7

0x3429,	// (0x0004a5e9) toolbar2_fixed_button_pane_g8

0x3431,	// (0x0004a5f1) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x00056a01) toolbar2_fixed_button_pane_g

0x6ec3,	// (0x0004e083) cell_toolbar2_float_pane_ParamLimits

0x6ec3,	// (0x0004e083) cell_toolbar2_float_pane

0x6ed4,	// (0x0004e094) cell_toolbar2_float_pane_g1

0x6ebb,	// (0x0004e07b) toolbar2_fixed_button_pane_cp

0xd0c0,	// (0x00054280) fep_vkb_accented_list_pane_ParamLimits

0xd0c0,	// (0x00054280) fep_vkb_accented_list_pane

0x16e9,	// (0x000488a9) bg_popup_fep_shadow_pane_g9

0x2b94,	// (0x00049d54) bg_popup_fep_shadow_pane_cp3

0xe497,	// (0x00055657) list_accented_list_pane

0x6edd,	// (0x0004e09d) list_single_accented_list_pane_ParamLimits

0x6edd,	// (0x0004e09d) list_single_accented_list_pane

0x2b94,	// (0x00049d54) list_highlight_pane_cp10

0x6eee,	// (0x0004e0ae) list_single_accented_list_pane_t1

0xbafc,	// (0x00052cbc) popup_slider_window_ParamLimits

0xbafc,	// (0x00052cbc) popup_slider_window

0x6b3a,	// (0x0004dcfa) aid_indentation_list_msg

0xd715,	// (0x000548d5) bg_popup_window_pane_cp19

0x702a,	// (0x0004e1ea) popup_slider_window_g1

0x7046,	// (0x0004e206) popup_slider_window_g2

0x7062,	// (0x0004e222) popup_slider_window_g3

0x0005,

0xfcca,	// (0x00056e8a) popup_slider_window_g

0x70c8,	// (0x0004e288) popup_slider_window_t1

0x713c,	// (0x0004e2fc) small_volume_slider_vertical_pane

0x59ef,	// (0x0004cbaf) small_volume_slider_vertical_pane_g1

0x59ef,	// (0x0004cbaf) small_volume_slider_vertical_pane_g2

0x7158,	// (0x0004e318) small_volume_slider_vertical_pane_g3

0x0002,

0xfcdc,	// (0x00056e9c) small_volume_slider_vertical_pane_g

0xa2a5,	// (0x00051465) area_side_right_pane_ParamLimits

0xa2a5,	// (0x00051465) area_side_right_pane

0xc0b6,	// (0x00053276) aid_size_side_button_ParamLimits

0xc0b6,	// (0x00053276) aid_size_side_button

0xc0cf,	// (0x0005328f) grid_sctrl_middle_pane_ParamLimits

0xc0cf,	// (0x0005328f) grid_sctrl_middle_pane

0x1959,	// (0x00048b19) sctrl_sk_bottom_pane

0x196a,	// (0x00048b2a) sctrl_sk_top_pane

0x197c,	// (0x00048b3c) aid_touch_sctrl_top

0xa857,	// (0x00051a17) bg_sctrl_sk_pane_ParamLimits

0xa857,	// (0x00051a17) bg_sctrl_sk_pane

0x1989,	// (0x00048b49) sctrl_sk_top_pane_g1

0x1996,	// (0x00048b56) sctrl_sk_top_pane_t1

0x197c,	// (0x00048b3c) aid_touch_sctrl_bottom

0xa857,	// (0x00051a17) bg_sctrl_sk_pane_cp_ParamLimits

0xa857,	// (0x00051a17) bg_sctrl_sk_pane_cp

0x19b1,	// (0x00048b71) sctrl_sk_bottom_pane_g1

0x1996,	// (0x00048b56) sctrl_sk_bottom_pane_t1

0xc0e9,	// (0x000532a9) cell_sctrl_middle_pane_ParamLimits

0xc0e9,	// (0x000532a9) cell_sctrl_middle_pane

0xc0fc,	// (0x000532bc) aid_touch_sctrl_middle_ParamLimits

0xc0fc,	// (0x000532bc) aid_touch_sctrl_middle

0xc109,	// (0x000532c9) bg_sctrl_middle_pane_ParamLimits

0xc109,	// (0x000532c9) bg_sctrl_middle_pane

0x71e3,	// (0x0004e3a3) cell_sctrl_middle_pane_g1_ParamLimits

0x71e3,	// (0x0004e3a3) cell_sctrl_middle_pane_g1

0xc117,	// (0x000532d7) cell_sctrl_middle_pane_g2_ParamLimits

0xc117,	// (0x000532d7) cell_sctrl_middle_pane_g2

0x0001,

0xfce8,	// (0x00056ea8) cell_sctrl_middle_pane_g_ParamLimits

0xfce8,	// (0x00056ea8) cell_sctrl_middle_pane_g

0x33f1,	// (0x0004a5b1) bg_sctrl_middle_pane_g1

0x33f9,	// (0x0004a5b9) bg_sctrl_middle_pane_g2

0x3401,	// (0x0004a5c1) bg_sctrl_middle_pane_g3

0x3409,	// (0x0004a5c9) bg_sctrl_middle_pane_g4

0x3411,	// (0x0004a5d1) bg_sctrl_middle_pane_g5

0x3419,	// (0x0004a5d9) bg_sctrl_middle_pane_g6

0x3421,	// (0x0004a5e1) bg_sctrl_middle_pane_g7

0x3429,	// (0x0004a5e9) bg_sctrl_middle_pane_g8

0x0007,

0xfced,	// (0x00056ead) bg_sctrl_middle_pane_g

0x3431,	// (0x0004a5f1) bg_sctrl_middle_pane_g8_copy1

0x33f1,	// (0x0004a5b1) bg_sctrl_sk_pane_g1

0x33f9,	// (0x0004a5b9) bg_sctrl_sk_pane_g2

0x3401,	// (0x0004a5c1) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x00056a01) bg_sctrl_sk_pane_g

0xada0,	// (0x00051f60) aid_size_touch_scroll_bar

0x3409,	// (0x0004a5c9) bg_sctrl_sk_pane_g4

0x3411,	// (0x0004a5d1) bg_sctrl_sk_pane_g5

0x3419,	// (0x0004a5d9) bg_sctrl_sk_pane_g6

0x3421,	// (0x0004a5e1) bg_sctrl_sk_pane_g7

0x3429,	// (0x0004a5e9) bg_sctrl_sk_pane_g8

0x3431,	// (0x0004a5f1) bg_sctrl_sk_pane_g9

0x0995,	// (0x00047b55) popup_fep_china_hwr2_fs_candidate_window

0xb5ae,	// (0x0005276e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb5ae,	// (0x0005276e) popup_fep_china_hwr2_fs_control_window

0x5c6a,	// (0x0004ce2a) sctrl_sk_top_pane_g2

0x0001,

0xfce3,	// (0x00056ea3) sctrl_sk_top_pane_g

0xd7cd,	// (0x0005498d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7cd,	// (0x0005498d) aid_fep_china_hwr2_fs_cell

0xd7e3,	// (0x000549a3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7e3,	// (0x000549a3) bg_popup_fep_shadow_pane_cp4

0xd7fa,	// (0x000549ba) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7fa,	// (0x000549ba) bg_popup_fep_shadow_pane_cp5

0xd80c,	// (0x000549cc) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd80c,	// (0x000549cc) popup_fep_china_hwr2_fs_control_bar_grid

0xd820,	// (0x000549e0) popup_fep_china_hwr2_fs_control_funtion_grid

0x71b7,	// (0x0004e377) aid_fep_china_hwr2_fs_candi_cell

0xa1ed,	// (0x000513ad) bg_popup_fep_shadow_pane_cp6

0x71c1,	// (0x0004e381) popup_fep_china_hwr2_fs_candidate_grid

0xd828,	// (0x000549e8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd828,	// (0x000549e8) cell_fep_china_hwr2_fs_funtion_grid

0x59ef,	// (0x0004cbaf) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x71e3,	// (0x0004e3a3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x71e3,	// (0x0004e3a3) cell_fep_china_hwr2_fs_funtion_grid_g1

0x71f1,	// (0x0004e3b1) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x71f1,	// (0x0004e3b1) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfe,	// (0x00056ebe) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfe,	// (0x00056ebe) cell_fep_china_hwr2_fs_funtion_grid_g

0xd840,	// (0x00054a00) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd840,	// (0x00054a00) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd855,	// (0x00054a15) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd855,	// (0x00054a15) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd03,	// (0x00056ec3) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd03,	// (0x00056ec3) cell_fep_china_hwr2_fs_funtion_grid_t

0x7238,	// (0x0004e3f8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x7240,	// (0x0004e400) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x7248,	// (0x0004e408) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd08,	// (0x00056ec8) popup_fep_china_hwr2_fs_control_bar_grid_g

0x7250,	// (0x0004e410) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x7250,	// (0x0004e410) cell_fep_china_hwr2_fs_candidate_grid

0x726f,	// (0x0004e42f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7277,	// (0x0004e437) popup_fep_china_hwr2_fs_candidate_grid_g21

0x59ef,	// (0x0004cbaf) cell_fep_china_hwr2_fs_candidate_grid_g1

0x59ef,	// (0x0004cbaf) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb28,	// (0x00056ce8) cell_fep_china_hwr2_fs_candidate_grid_g

0x727f,	// (0x0004e43f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2fd9,	// (0x0004a199) clock_nsta_pane_cp_24_ParamLimits

0x2fd9,	// (0x0004a199) clock_nsta_pane_cp_24

0x3059,	// (0x0004a219) indicator_nsta_pane_cp_24_ParamLimits

0x3059,	// (0x0004a219) indicator_nsta_pane_cp_24

0x40da,	// (0x0004b29a) heading_pane_g1

0x0001,

0xf8a6,	// (0x00056a66) heading_pane_g

0x4b25,	// (0x0004bce5) grid_sct_catagory_button_pane

0x4b57,	// (0x0004bd17) scroll_pane_cp5_ParamLimits

0x564f,	// (0x0004c80f) button_value_adjust_pane_cp5_ParamLimits

0x564f,	// (0x0004c80f) button_value_adjust_pane_cp5

0x5734,	// (0x0004c8f4) form2_midp_time_pane_ParamLimits

0x728d,	// (0x0004e44d) cell_sct_catagory_button_pane_ParamLimits

0x728d,	// (0x0004e44d) cell_sct_catagory_button_pane

0x59b4,	// (0x0004cb74) bg_button_pane_cp01_ParamLimits

0x59b4,	// (0x0004cb74) bg_button_pane_cp01

0x59ef,	// (0x0004cbaf) cell_sct_catagory_button_pane_g1

0xbb7b,	// (0x00052d3b) popup_tb_extension_window

0xd871,	// (0x00054a31) aid_size_cell_ext_ParamLimits

0xd871,	// (0x00054a31) aid_size_cell_ext

0xabe2,	// (0x00051da2) bg_tb_trans_pane_cp1_ParamLimits

0xabe2,	// (0x00051da2) bg_tb_trans_pane_cp1

0xd897,	// (0x00054a57) grid_tb_ext_pane_ParamLimits

0xd897,	// (0x00054a57) grid_tb_ext_pane

0xd8d4,	// (0x00054a94) cell_tb_ext_pane_ParamLimits

0xd8d4,	// (0x00054a94) cell_tb_ext_pane

0xd8fc,	// (0x00054abc) cell_tb_ext_pane_g1_ParamLimits

0xd8fc,	// (0x00054abc) cell_tb_ext_pane_g1

0x7321,	// (0x0004e4e1) cell_tb_ext_pane_t1

0xa857,	// (0x00051a17) list_highlight_pane_cp11_ParamLimits

0xa857,	// (0x00051a17) list_highlight_pane_cp11

0xa35a,	// (0x0005151a) popup_uni_indicator_window_ParamLimits

0xa35a,	// (0x0005151a) popup_uni_indicator_window

0xae85,	// (0x00052045) bg_popup_sub_pane_cp14

0x733c,	// (0x0004e4fc) list_uniindi_pane

0x7348,	// (0x0004e508) uniindi_top_pane

0xa857,	// (0x00051a17) bg_uniindi_top_pane

0x7369,	// (0x0004e529) uniindi_top_pane_g1

0x737f,	// (0x0004e53f) uniindi_top_pane_g2

0x0003,

0xfd0f,	// (0x00056ecf) uniindi_top_pane_g

0x73a9,	// (0x0004e569) uniindi_top_pane_t1

0x73d5,	// (0x0004e595) list_single_uniindi_pane_ParamLimits

0x73d5,	// (0x0004e595) list_single_uniindi_pane

0x59ef,	// (0x0004cbaf) bg_uniindi_top_pane_g1

0x73e8,	// (0x0004e5a8) list_single_uniindi_pane_g1

0x73fb,	// (0x0004e5bb) list_single_uniindi_pane_t1

0xa1ed,	// (0x000513ad) control_bg_pane

0x7420,	// (0x0004e5e0) bg_sctrl_sk_pane_cp1

0x7429,	// (0x0004e5e9) bg_sctrl_sk_pane_cp2

0x7432,	// (0x0004e5f2) control_bg_pane_g1

0x743b,	// (0x0004e5fb) control_bg_pane_g2

0x0001,

0xfd18,	// (0x00056ed8) control_bg_pane_g

0x5487,	// (0x0004c647) cell_indicator_nsta_pane_g1_ParamLimits

0xced0,	// (0x00054090) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8c,	// (0x00056c4c) cell_indicator_nsta_pane_g_ParamLimits

0xf127,	// (0x000562e7) form2_midp_time_pane_t1_ParamLimits

0x14a9,	// (0x00048669) main_idle_act4_pane_ParamLimits

0x14a9,	// (0x00048669) main_idle_act4_pane

0xbb7b,	// (0x00052d3b) popup_tb_extension_window_ParamLimits

0xd8bc,	// (0x00054a7c) tb_ext_find_pane_ParamLimits

0xd8bc,	// (0x00054a7c) tb_ext_find_pane

0x7444,	// (0x0004e604) ai_gene_pane_1_cp1

0x2cde,	// (0x00049e9e) ai_gene_pane_2_cp1

0x744c,	// (0x0004e60c) list_single_idle_plugin_calendar_pane

0x7455,	// (0x0004e615) list_single_idle_plugin_notification_pane

0x745e,	// (0x0004e61e) list_single_idle_plugin_player_pane

0xd919,	// (0x00054ad9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd919,	// (0x00054ad9) list_single_idle_plugin_shortcut_pane

0xd941,	// (0x00054b01) main_idle_act4_pane_t1

0xd959,	// (0x00054b19) main_idle_act4_pane_t2

0x0001,

0xfd1d,	// (0x00056edd) main_idle_act4_pane_t

0xd971,	// (0x00054b31) middle_sk_idle_act4_pane_ParamLimits

0xd971,	// (0x00054b31) middle_sk_idle_act4_pane

0xd98d,	// (0x00054b4d) popup_clock_digital_analogue_window_cp2

0xd9b4,	// (0x00054b74) shortcut_wheel_idle_act4_pane_ParamLimits

0xd9b4,	// (0x00054b74) shortcut_wheel_idle_act4_pane

0x59ef,	// (0x0004cbaf) shortcut_wheel_idle_act4_pane_g1

0x59ef,	// (0x0004cbaf) shortcut_wheel_idle_act4_pane_g2

0x59ef,	// (0x0004cbaf) shortcut_wheel_idle_act4_pane_g3

0x59ef,	// (0x0004cbaf) shortcut_wheel_idle_act4_pane_g4

0x59ef,	// (0x0004cbaf) shortcut_wheel_idle_act4_pane_g5

0x74f1,	// (0x0004e6b1) shortcut_wheel_idle_act4_pane_g6

0x74f9,	// (0x0004e6b9) shortcut_wheel_idle_act4_pane_g7

0x7501,	// (0x0004e6c1) shortcut_wheel_idle_act4_pane_g8

0x7509,	// (0x0004e6c9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd22,	// (0x00056ee2) shortcut_wheel_idle_act4_pane_g

0xd098,	// (0x00054258) middle_sk_idle_act4_pane_g1_ParamLimits

0xd098,	// (0x00054258) middle_sk_idle_act4_pane_g1

0xda31,	// (0x00054bf1) middle_sk_idle_act4_pane_g2_ParamLimits

0xda31,	// (0x00054bf1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd45,	// (0x00056f05) middle_sk_idle_act4_pane_g_ParamLimits

0xfd45,	// (0x00056f05) middle_sk_idle_act4_pane_g

0xda49,	// (0x00054c09) middle_sk_idle_act4_pane_t1_ParamLimits

0xda49,	// (0x00054c09) middle_sk_idle_act4_pane_t1

0xda78,	// (0x00054c38) grid_ai_shortcut_pane_ParamLimits

0xda78,	// (0x00054c38) grid_ai_shortcut_pane

0xda95,	// (0x00054c55) list_highlight_pane_cp16_ParamLimits

0xda95,	// (0x00054c55) list_highlight_pane_cp16

0xdaa2,	// (0x00054c62) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdaa2,	// (0x00054c62) list_single_idle_plugin_shortcut_pane_g1

0xdaae,	// (0x00054c6e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdaae,	// (0x00054c6e) list_single_idle_plugin_shortcut_pane_g2

0xdacc,	// (0x00054c8c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdacc,	// (0x00054c8c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4a,	// (0x00056f0a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4a,	// (0x00056f0a) list_single_idle_plugin_shortcut_pane_g

0xdae1,	// (0x00054ca1) cell_ai_shortcut_pane_ParamLimits

0xdae1,	// (0x00054ca1) cell_ai_shortcut_pane

0xdaf7,	// (0x00054cb7) cell_ai_shortcut_pane_g1_ParamLimits

0xdaf7,	// (0x00054cb7) cell_ai_shortcut_pane_g1

0x7444,	// (0x0004e604) ai_gene_pane_1_cp2

0x763a,	// (0x0004e7fa) ai_gene_pane_2_cp2

0x7642,	// (0x0004e802) list_highlight_pane_cp15

0x764b,	// (0x0004e80b) list_single_idle_plugin_calendar_pane_g1

0x7642,	// (0x0004e802) list_highlight_pane_cp17

0x7653,	// (0x0004e813) list_single_idle_plugin_calendar_pane_g1_copy1

0x765b,	// (0x0004e81b) list_single_idle_plugin_player_pane_g1

0x4d8c,	// (0x0004bf4c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd51,	// (0x00056f11) list_single_idle_plugin_player_pane_g

0x7663,	// (0x0004e823) list_single_idle_plugin_player_pane_t1

0x7671,	// (0x0004e831) list_single_idle_plugin_player_pane_t2

0x767f,	// (0x0004e83f) list_single_idle_plugin_player_pane_t3

0x768d,	// (0x0004e84d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd56,	// (0x00056f16) list_single_idle_plugin_player_pane_t

0x769b,	// (0x0004e85b) wait_bar_pane_cp15

0x76a3,	// (0x0004e863) grid_ai_notification_pane

0x4d8c,	// (0x0004bf4c) list_single_idle_plugin_notification_pane_g1

0xdb19,	// (0x00054cd9) cell_ai_notification_pane_ParamLimits

0xdb19,	// (0x00054cd9) cell_ai_notification_pane

0x76b9,	// (0x0004e879) cell_ai_notification_pane_g1

0x76c1,	// (0x0004e881) cell_ai_notification_pane_t1

0xdb26,	// (0x00054ce6) tb_ext_find_button_pane

0xdb2e,	// (0x00054cee) tb_ext_find_pane_g1

0xdb36,	// (0x00054cf6) tb_ext_find_pane_t1

0x2588,	// (0x00049748) tb_ext_find_button_pane_g1

0x76ed,	// (0x0004e8ad) tb_ext_find_button_pane_g2

0x0001,

0xfd5f,	// (0x00056f1f) tb_ext_find_button_pane_g

0xd941,	// (0x00054b01) main_idle_act4_pane_t1_ParamLimits

0xd959,	// (0x00054b19) main_idle_act4_pane_t2_ParamLimits

0xfd1d,	// (0x00056edd) main_idle_act4_pane_t_ParamLimits

0xd98d,	// (0x00054b4d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd9a4,	// (0x00054b64) sat_plugin_idle_act4_pane_ParamLimits

0xd9a4,	// (0x00054b64) sat_plugin_idle_act4_pane

0xdb44,	// (0x00054d04) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdb44,	// (0x00054d04) sat_plugin_idle_act4_pane_t1

0xdb5c,	// (0x00054d1c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdb5c,	// (0x00054d1c) sat_plugin_idle_act4_pane_t2

0xdb74,	// (0x00054d34) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdb74,	// (0x00054d34) sat_plugin_idle_act4_pane_t3

0xdb8c,	// (0x00054d4c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdb8c,	// (0x00054d4c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd64,	// (0x00056f24) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd64,	// (0x00056f24) sat_plugin_idle_act4_pane_t

0xf342,	// (0x00056502) popup_battery_window_ParamLimits

0xf342,	// (0x00056502) popup_battery_window

0xa857,	// (0x00051a17) bg_popup_sub_pane_cp25_ParamLimits

0xa857,	// (0x00051a17) bg_popup_sub_pane_cp25

0x7742,	// (0x0004e902) popup_battery_window_g1_ParamLimits

0x7742,	// (0x0004e902) popup_battery_window_g1

0x774e,	// (0x0004e90e) popup_battery_window_t1_ParamLimits

0x774e,	// (0x0004e90e) popup_battery_window_t1

0x7760,	// (0x0004e920) popup_battery_window_t2_ParamLimits

0x7760,	// (0x0004e920) popup_battery_window_t2

0x0001,

0xfd6d,	// (0x00056f2d) popup_battery_window_t_ParamLimits

0xfd6d,	// (0x00056f2d) popup_battery_window_t

0xb237,	// (0x000523f7) midp_canvas_pane_ParamLimits

0xb293,	// (0x00052453) midp_keypad_pane_ParamLimits

0xb293,	// (0x00052453) midp_keypad_pane

0x2ebb,	// (0x0004a07b) main_midp_pane_ParamLimits

0x5502,	// (0x0004c6c2) signal_pane_g2_cp_ParamLimits

0xdba4,	// (0x00054d64) aid_size_cell_midp_keypad_ParamLimits

0xdba4,	// (0x00054d64) aid_size_cell_midp_keypad

0xdbc2,	// (0x00054d82) midp_keyp_game_grid_pane_ParamLimits

0xdbc2,	// (0x00054d82) midp_keyp_game_grid_pane

0xdbe9,	// (0x00054da9) midp_keyp_rocker_pane_ParamLimits

0xdbe9,	// (0x00054da9) midp_keyp_rocker_pane

0xdc38,	// (0x00054df8) midp_keyp_sk_left_pane_ParamLimits

0xdc38,	// (0x00054df8) midp_keyp_sk_left_pane

0xdc8e,	// (0x00054e4e) midp_keyp_sk_right_pane_ParamLimits

0xdc8e,	// (0x00054e4e) midp_keyp_sk_right_pane

0xa1ed,	// (0x000513ad) bg_button_pane_cp03

0xdce4,	// (0x00054ea4) midp_keyp_sk_left_pane_g1

0xa1ed,	// (0x000513ad) bg_button_pane_cp04

0xdce4,	// (0x00054ea4) midp_keyp_sk_right_pane_g1

0x59ef,	// (0x0004cbaf) midp_keyp_rocker_pane_g1

0xdcec,	// (0x00054eac) keyp_game_cell_pane_ParamLimits

0xdcec,	// (0x00054eac) keyp_game_cell_pane

0xa1ed,	// (0x000513ad) bg_button_pane_cp02

0xdd12,	// (0x00054ed2) keyp_game_cell_pane_g1

0xa2f1,	// (0x000514b1) popup_fep_vkb2_window_ParamLimits

0xa2f1,	// (0x000514b1) popup_fep_vkb2_window

0xc123,	// (0x000532e3) aid_size_cell_vkb2_ParamLimits

0xc123,	// (0x000532e3) aid_size_cell_vkb2

0xc159,	// (0x00053319) popup_fep_vkb2_window_g1_ParamLimits

0xc159,	// (0x00053319) popup_fep_vkb2_window_g1

0xc1a9,	// (0x00053369) vkb2_area_bottom_pane_ParamLimits

0xc1a9,	// (0x00053369) vkb2_area_bottom_pane

0xc205,	// (0x000533c5) vkb2_area_keypad_pane_ParamLimits

0xc205,	// (0x000533c5) vkb2_area_keypad_pane

0xc253,	// (0x00053413) vkb2_area_top_pane_ParamLimits

0xc253,	// (0x00053413) vkb2_area_top_pane

0xc2d9,	// (0x00053499) vkb2_top_entry_pane_ParamLimits

0xc2d9,	// (0x00053499) vkb2_top_entry_pane

0xc306,	// (0x000534c6) vkb2_top_grid_left_pane_ParamLimits

0xc306,	// (0x000534c6) vkb2_top_grid_left_pane

0xc326,	// (0x000534e6) vkb2_top_grid_right_pane_ParamLimits

0xc326,	// (0x000534e6) vkb2_top_grid_right_pane

0x1c1d,	// (0x00048ddd) vkb2_cell_keypad_pane_ParamLimits

0x1c1d,	// (0x00048ddd) vkb2_cell_keypad_pane

0xc36c,	// (0x0005352c) vkb2_area_bottom_grid_pane_ParamLimits

0xc36c,	// (0x0005352c) vkb2_area_bottom_grid_pane

0xc396,	// (0x00053556) vkb2_area_bottom_pane_g1_ParamLimits

0xc396,	// (0x00053556) vkb2_area_bottom_pane_g1

0xc3bc,	// (0x0005357c) vkb2_area_bottom_pane_g2_ParamLimits

0xc3bc,	// (0x0005357c) vkb2_area_bottom_pane_g2

0xc3ed,	// (0x000535ad) vkb2_area_bottom_pane_g3_ParamLimits

0xc3ed,	// (0x000535ad) vkb2_area_bottom_pane_g3

0x0002,

0xfd72,	// (0x00056f32) vkb2_area_bottom_pane_g_ParamLimits

0xfd72,	// (0x00056f32) vkb2_area_bottom_pane_g

0x1dc7,	// (0x00048f87) vkb2_top_cell_left_pane_ParamLimits

0x1dc7,	// (0x00048f87) vkb2_top_cell_left_pane

0xdd1b,	// (0x00054edb) vkb2_top_entry_pane_g1_ParamLimits

0xdd1b,	// (0x00054edb) vkb2_top_entry_pane_g1

0xdd29,	// (0x00054ee9) vkb2_top_entry_pane_t1_ParamLimits

0xdd29,	// (0x00054ee9) vkb2_top_entry_pane_t1

0x790a,	// (0x0004eaca) vkb2_top_entry_pane_t2_ParamLimits

0x790a,	// (0x0004eaca) vkb2_top_entry_pane_t2

0x793c,	// (0x0004eafc) vkb2_top_entry_pane_t3_ParamLimits

0x793c,	// (0x0004eafc) vkb2_top_entry_pane_t3

0x0002,

0xfd79,	// (0x00056f39) vkb2_top_entry_pane_t_ParamLimits

0xfd79,	// (0x00056f39) vkb2_top_entry_pane_t

0xc457,	// (0x00053617) vkb2_top_grid_right_pane_g1_ParamLimits

0xc457,	// (0x00053617) vkb2_top_grid_right_pane_g1

0x1e2a,	// (0x00048fea) vkb2_top_grid_right_pane_g2_ParamLimits

0x1e2a,	// (0x00048fea) vkb2_top_grid_right_pane_g2

0x1e42,	// (0x00049002) vkb2_top_grid_right_pane_g3_ParamLimits

0x1e42,	// (0x00049002) vkb2_top_grid_right_pane_g3

0xc46d,	// (0x0005362d) vkb2_top_grid_right_pane_g4_ParamLimits

0xc46d,	// (0x0005362d) vkb2_top_grid_right_pane_g4

0x0003,

0xfd80,	// (0x00056f40) vkb2_top_grid_right_pane_g_ParamLimits

0xfd80,	// (0x00056f40) vkb2_top_grid_right_pane_g

0x1e70,	// (0x00049030) vkb2_top_cell_left_pane_g1

0x1e87,	// (0x00049047) vkb2_cell_keypad_pane_g1_ParamLimits

0x1e87,	// (0x00049047) vkb2_cell_keypad_pane_g1

0x7960,	// (0x0004eb20) vkb2_cell_keypad_pane_t1_ParamLimits

0x7960,	// (0x0004eb20) vkb2_cell_keypad_pane_t1

0x1e95,	// (0x00049055) vkb2_cell_bottom_grid_pane_ParamLimits

0x1e95,	// (0x00049055) vkb2_cell_bottom_grid_pane

0x1ece,	// (0x0004908e) vkb2_cell_bottom_grid_pane_g1

0xd9d5,	// (0x00054b95) aid_call2_pane_cp02

0xd9dd,	// (0x00054b9d) aid_call_pane_cp02

0xd9e5,	// (0x00054ba5) clock_digital_number_pane_cp10

0xd9ed,	// (0x00054bad) clock_digital_number_pane_cp11

0xd9f5,	// (0x00054bb5) clock_digital_number_pane_cp12

0xd9fd,	// (0x00054bbd) clock_digital_number_pane_cp13

0xda05,	// (0x00054bc5) clock_digital_separator_pane_cp10

0x2588,	// (0x00049748) popup_clock_digital_analogue_window_cp2_g1

0x2588,	// (0x00049748) popup_clock_digital_analogue_window_cp2_g2

0xda0d,	// (0x00054bcd) popup_clock_digital_analogue_window_cp2_g3

0x2588,	// (0x00049748) popup_clock_digital_analogue_window_cp2_g4

0xda0d,	// (0x00054bcd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd35,	// (0x00056ef5) popup_clock_digital_analogue_window_cp2_g

0xda15,	// (0x00054bd5) popup_clock_digital_analogue_window_cp2_t1

0xda23,	// (0x00054be3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd40,	// (0x00056f00) popup_clock_digital_analogue_window_cp2_t

0x59ef,	// (0x0004cbaf) clock_digital_number_pane_cp10_g1

0x59ef,	// (0x0004cbaf) clock_digital_number_pane_cp10_g2

0x0001,

0xfb28,	// (0x00056ce8) clock_digital_number_pane_cp10_g

0x59ef,	// (0x0004cbaf) clock_digital_separator_pane_cp10_g1

0x59ef,	// (0x0004cbaf) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb28,	// (0x00056ce8) clock_digital_separator_pane_cp10_g

0x738b,	// (0x0004e54b) uniindi_top_pane_g3

0x739c,	// (0x0004e55c) uniindi_top_pane_g4

0x1ca8,	// (0x00048e68) vkb2_row_keypad_pane_ParamLimits

0x1ca8,	// (0x00048e68) vkb2_row_keypad_pane

0x1eea,	// (0x000490aa) vkb2_cell_t_keypad_pane_ParamLimits

0x1eea,	// (0x000490aa) vkb2_cell_t_keypad_pane

0x1efa,	// (0x000490ba) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1efa,	// (0x000490ba) vkb2_cell_t_keypad_pane_cp08

0x1f0f,	// (0x000490cf) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1f0f,	// (0x000490cf) vkb2_cell_t_keypad_pane_cp09

0x1f23,	// (0x000490e3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1f23,	// (0x000490e3) vkb2_cell_t_keypad_pane_cp01

0x1f34,	// (0x000490f4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1f34,	// (0x000490f4) vkb2_cell_t_keypad_pane_cp02

0x1f45,	// (0x00049105) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1f45,	// (0x00049105) vkb2_cell_t_keypad_pane_cp03

0x1f56,	// (0x00049116) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1f56,	// (0x00049116) vkb2_cell_t_keypad_pane_cp04

0x1f67,	// (0x00049127) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1f67,	// (0x00049127) vkb2_cell_t_keypad_pane_cp05

0x1f78,	// (0x00049138) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1f78,	// (0x00049138) vkb2_cell_t_keypad_pane_cp06

0x1f8b,	// (0x0004914b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1f8b,	// (0x0004914b) vkb2_cell_t_keypad_pane_cp07

0x1fa0,	// (0x00049160) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1fa0,	// (0x00049160) vkb2_cell_t_keypad_pane_cp10

0x5c6a,	// (0x0004ce2a) vkb2_cell_t_keypad_pane_g1

0x7977,	// (0x0004eb37) vkb2_cell_t_keypad_pane_t1

0xa1ed,	// (0x000513ad) popup_grid_graphic2_window

0xdd62,	// (0x00054f22) aid_size_cell_graphic2_ParamLimits

0xdd62,	// (0x00054f22) aid_size_cell_graphic2

0xdda0,	// (0x00054f60) bg_popup_window_pane_cp21_ParamLimits

0xdda0,	// (0x00054f60) bg_popup_window_pane_cp21

0xddae,	// (0x00054f6e) graphic2_pages_pane_ParamLimits

0xddae,	// (0x00054f6e) graphic2_pages_pane

0xde06,	// (0x00054fc6) grid_graphic2_control_pane_ParamLimits

0xde06,	// (0x00054fc6) grid_graphic2_control_pane

0xde4e,	// (0x0005500e) grid_graphic2_pane_ParamLimits

0xde4e,	// (0x0005500e) grid_graphic2_pane

0xded9,	// (0x00055099) cell_graphic2_pane

0xa1ed,	// (0x000513ad) main_comp_mode_pane

0x6bf6,	// (0x0004ddb6) list_ai3_gene_pane_ParamLimits

0xd715,	// (0x000548d5) bg_popup_window_pane_cp19_ParamLimits

0x6fca,	// (0x0004e18a) bg_touch_area_indi_pane_ParamLimits

0x6fca,	// (0x0004e18a) bg_touch_area_indi_pane

0x6fe0,	// (0x0004e1a0) bg_touch_area_indi_pane_cp01_ParamLimits

0x6fe0,	// (0x0004e1a0) bg_touch_area_indi_pane_cp01

0x6ff6,	// (0x0004e1b6) bg_touch_area_indi_pane_cp02_ParamLimits

0x6ff6,	// (0x0004e1b6) bg_touch_area_indi_pane_cp02

0x7010,	// (0x0004e1d0) bg_touch_area_indi_pane_cp03_ParamLimits

0x7010,	// (0x0004e1d0) bg_touch_area_indi_pane_cp03

0x702a,	// (0x0004e1ea) popup_slider_window_g1_ParamLimits

0x7046,	// (0x0004e206) popup_slider_window_g2_ParamLimits

0x7062,	// (0x0004e222) popup_slider_window_g3_ParamLimits

0xfcca,	// (0x00056e8a) popup_slider_window_g_ParamLimits

0x70c8,	// (0x0004e288) popup_slider_window_t1_ParamLimits

0x713c,	// (0x0004e2fc) small_volume_slider_vertical_pane_ParamLimits

0xded9,	// (0x00055099) cell_graphic2_pane_ParamLimits

0xdf3b,	// (0x000550fb) bg_button_pane_cp10_ParamLimits

0xdf3b,	// (0x000550fb) bg_button_pane_cp10

0xdf4e,	// (0x0005510e) bg_button_pane_cp11_ParamLimits

0xdf4e,	// (0x0005510e) bg_button_pane_cp11

0xdf61,	// (0x00055121) graphic2_pages_pane_g1_ParamLimits

0xdf61,	// (0x00055121) graphic2_pages_pane_g1

0xdf7c,	// (0x0005513c) graphic2_pages_pane_g2_ParamLimits

0xdf7c,	// (0x0005513c) graphic2_pages_pane_g2

0x0001,

0xfd8e,	// (0x00056f4e) graphic2_pages_pane_g_ParamLimits

0xfd8e,	// (0x00056f4e) graphic2_pages_pane_g

0xdf94,	// (0x00055154) graphic2_pages_pane_t1_ParamLimits

0xdf94,	// (0x00055154) graphic2_pages_pane_t1

0xdfac,	// (0x0005516c) cell_graphic2_control_pane_ParamLimits

0xdfac,	// (0x0005516c) cell_graphic2_control_pane

0xdfda,	// (0x0005519a) cell_graphic2_pane_g1_ParamLimits

0xdfda,	// (0x0005519a) cell_graphic2_pane_g1

0xd0a6,	// (0x00054266) cell_graphic2_pane_g2_ParamLimits

0xd0a6,	// (0x00054266) cell_graphic2_pane_g2

0xdfe7,	// (0x000551a7) cell_graphic2_pane_g3_ParamLimits

0xdfe7,	// (0x000551a7) cell_graphic2_pane_g3

0xd0b3,	// (0x00054273) cell_graphic2_pane_g4_ParamLimits

0xd0b3,	// (0x00054273) cell_graphic2_pane_g4

0xdff4,	// (0x000551b4) cell_graphic2_pane_g5_ParamLimits

0xdff4,	// (0x000551b4) cell_graphic2_pane_g5

0x0004,

0xfd93,	// (0x00056f53) cell_graphic2_pane_g_ParamLimits

0xfd93,	// (0x00056f53) cell_graphic2_pane_g

0xe010,	// (0x000551d0) cell_graphic2_pane_t1_ParamLimits

0xe010,	// (0x000551d0) cell_graphic2_pane_t1

0x40ce,	// (0x0004b28e) grid_highlight_pane_cp11_ParamLimits

0x40ce,	// (0x0004b28e) grid_highlight_pane_cp11

0xa857,	// (0x00051a17) bg_button_pane_cp05

0xe059,	// (0x00055219) cell_graphic2_control_pane_g1

0x59ef,	// (0x0004cbaf) bg_touch_area_indi_pane_g1

0x7c5a,	// (0x0004ee1a) aid_cmod_rocker_key_size

0x7c64,	// (0x0004ee24) aid_cmode_itu_key_size

0x7c6e,	// (0x0004ee2e) main_cmode_video_pane

0x7c78,	// (0x0004ee38) main_comp_mode_itu_pane

0x7c84,	// (0x0004ee44) main_comp_mode_rocker_pane

0x7c90,	// (0x0004ee50) cell_cmode_rocker_pane_ParamLimits

0x7c90,	// (0x0004ee50) cell_cmode_rocker_pane

0x7ca4,	// (0x0004ee64) cell_cmode_itu_pane_ParamLimits

0x7ca4,	// (0x0004ee64) cell_cmode_itu_pane

0xae85,	// (0x00052045) bg_button_pane_cp06_ParamLimits

0xae85,	// (0x00052045) bg_button_pane_cp06

0x5c6a,	// (0x0004ce2a) cell_cmode_rocker_pane_g1_ParamLimits

0x5c6a,	// (0x0004ce2a) cell_cmode_rocker_pane_g1

0x71e3,	// (0x0004e3a3) cell_cmode_rocker_pane_g2_ParamLimits

0x71e3,	// (0x0004e3a3) cell_cmode_rocker_pane_g2

0x0001,

0xfda3,	// (0x00056f63) cell_cmode_rocker_pane_g_ParamLimits

0xfda3,	// (0x00056f63) cell_cmode_rocker_pane_g

0xa1ed,	// (0x000513ad) bg_button_pane_cp07

0x7cbb,	// (0x0004ee7b) cell_cmode_itu_pane_g1

0x7cc4,	// (0x0004ee84) cell_cmode_itu_pane_t1

0x7cd2,	// (0x0004ee92) cell_cmode_itu_pane_t2

0x0001,

0xfda8,	// (0x00056f68) cell_cmode_itu_pane_t

0x7410,	// (0x0004e5d0) aid_touch_ctrl_left

0x7418,	// (0x0004e5d8) aid_touch_ctrl_right

0xa1ed,	// (0x000513ad) compa_mode_pane

0xe081,	// (0x00055241) aid_cmod_rocker_key_size_cp

0xe08b,	// (0x0005524b) aid_cmode_itu_key_size_cp

0x7cf4,	// (0x0004eeb4) compa_mode_pane_g1

0x7cfc,	// (0x0004eebc) compa_mode_pane_g2

0x7d04,	// (0x0004eec4) compa_mode_pane_g3

0x0002,

0xfdad,	// (0x00056f6d) compa_mode_pane_g

0xe095,	// (0x00055255) main_comp_mode_itu_pane_cp

0xe09d,	// (0x0005525d) main_comp_mode_rocker_pane_cp

0xe0a5,	// (0x00055265) cell_cmode_itu_pane_cp_ParamLimits

0xe0a5,	// (0x00055265) cell_cmode_itu_pane_cp

0xe0ba,	// (0x0005527a) cell_cmode_rocker_pane_cp_ParamLimits

0xe0ba,	// (0x0005527a) cell_cmode_rocker_pane_cp

0xae85,	// (0x00052045) bg_button_pane_cp06_cp_ParamLimits

0xae85,	// (0x00052045) bg_button_pane_cp06_cp

0x5c6a,	// (0x0004ce2a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5c6a,	// (0x0004ce2a) cell_cmode_rocker_pane_g1_cp

0x59ef,	// (0x0004cbaf) cell_cmode_rocker_pane_g2_cp

0xa1ed,	// (0x000513ad) bg_button_pane_cp07_cp

0xe0cc,	// (0x0005528c) cell_cmode_itu_pane_g1_cp

0xe0d5,	// (0x00055295) cell_cmode_itu_pane_t1_cp

0xe0d5,	// (0x00055295) cell_cmode_itu_pane_t2_cp

0xcd01,	// (0x00053ec1) settings_code_pane_cp2

0xa574,	// (0x00051734) bg_popup_window_pane_cp3_ParamLimits

0xaa6b,	// (0x00051c2b) heading_pane_cp3_ParamLimits

0xaa7a,	// (0x00051c3a) listscroll_popup_graphic_pane_ParamLimits

0x14b7,	// (0x00048677) fep_hwr_aid_pane_ParamLimits

0x197c,	// (0x00048b3c) aid_touch_sctrl_top_ParamLimits

0x1989,	// (0x00048b49) sctrl_sk_top_pane_g1_ParamLimits

0x5c6a,	// (0x0004ce2a) sctrl_sk_top_pane_g2_ParamLimits

0xfce3,	// (0x00056ea3) sctrl_sk_top_pane_g_ParamLimits

0x1996,	// (0x00048b56) sctrl_sk_top_pane_t1_ParamLimits

0x197c,	// (0x00048b3c) aid_touch_sctrl_bottom_ParamLimits

0x1996,	// (0x00048b56) sctrl_sk_bottom_pane_t1_ParamLimits

0x7355,	// (0x0004e515) aid_area_touch_clock

0xc29b,	// (0x0005345b) aid_vkb2_area_top_pane_cell_ParamLimits

0xc29b,	// (0x0005345b) aid_vkb2_area_top_pane_cell

0xc346,	// (0x00053506) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc346,	// (0x00053506) aid_vkb2_area_bottom_pane_cell

0x78c2,	// (0x0004ea82) popup_char_count_window

0x7d5a,	// (0x0004ef1a) popup_char_count_window_g1

0x7d63,	// (0x0004ef23) popup_char_count_window_g2

0x7d6c,	// (0x0004ef2c) popup_char_count_window_g3

0x0002,

0xfdb4,	// (0x00056f74) popup_char_count_window_g

0x7d75,	// (0x0004ef35) popup_char_count_window_t1

0x1a39,	// (0x00048bf9) popup_fep_char_preview_window_ParamLimits

0x1a39,	// (0x00048bf9) popup_fep_char_preview_window

0xc2bb,	// (0x0005347b) vkb2_top_candi_pane_ParamLimits

0xc2bb,	// (0x0005347b) vkb2_top_candi_pane

0xe0e3,	// (0x000552a3) cell_vkb2_top_candi_pane_ParamLimits

0xe0e3,	// (0x000552a3) cell_vkb2_top_candi_pane

0x3a57,	// (0x0004ac17) bg_popup_fep_char_preview_window_ParamLimits

0x3a57,	// (0x0004ac17) bg_popup_fep_char_preview_window

0x1fb5,	// (0x00049175) popup_fep_char_preview_window_t1_ParamLimits

0x1fb5,	// (0x00049175) popup_fep_char_preview_window_t1

0x7dd4,	// (0x0004ef94) bg_popup_fep_char_preview_window_g1

0x7ddc,	// (0x0004ef9c) bg_popup_fep_char_preview_window_g2

0x7de4,	// (0x0004efa4) bg_popup_fep_char_preview_window_g3

0x7dec,	// (0x0004efac) bg_popup_fep_char_preview_window_g4

0x7df4,	// (0x0004efb4) bg_popup_fep_char_preview_window_g5

0x7dfc,	// (0x0004efbc) bg_popup_fep_char_preview_window_g6

0x7e04,	// (0x0004efc4) bg_popup_fep_char_preview_window_g7

0x7e0c,	// (0x0004efcc) bg_popup_fep_char_preview_window_g8

0x7e14,	// (0x0004efd4) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbb,	// (0x00056f7b) bg_popup_fep_char_preview_window_g

0x5c6a,	// (0x0004ce2a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5c6a,	// (0x0004ce2a) cell_vkb2_top_candi_pane_g1

0x5fab,	// (0x0004d16b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5fab,	// (0x0004d16b) cell_vkb2_top_candi_pane_g2

0x5fcc,	// (0x0004d18c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5fcc,	// (0x0004d18c) cell_vkb2_top_candi_pane_g3

0x1ff7,	// (0x000491b7) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1ff7,	// (0x000491b7) cell_vkb2_top_candi_pane_g4

0x7e1c,	// (0x0004efdc) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7e1c,	// (0x0004efdc) cell_vkb2_top_candi_pane_g5

0x71e3,	// (0x0004e3a3) cell_vkb2_top_candi_pane_g6_ParamLimits

0x71e3,	// (0x0004e3a3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd0,	// (0x00056f90) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd0,	// (0x00056f90) cell_vkb2_top_candi_pane_g

0x2018,	// (0x000491d8) cell_vkb2_top_candi_pane_t1

0x1235,	// (0x000483f5) aid_size_touch_slider_mark_ParamLimits

0x1235,	// (0x000483f5) aid_size_touch_slider_mark

0xddea,	// (0x00054faa) grid_graphic2_catg_pane_ParamLimits

0xddea,	// (0x00054faa) grid_graphic2_catg_pane

0xdea8,	// (0x00055068) popup_grid_graphic2_window_t1_ParamLimits

0xdea8,	// (0x00055068) popup_grid_graphic2_window_t1

0xdebe,	// (0x0005507e) popup_grid_graphic2_window_t2_ParamLimits

0xdebe,	// (0x0005507e) popup_grid_graphic2_window_t2

0x0001,

0xfd89,	// (0x00056f49) popup_grid_graphic2_window_t_ParamLimits

0xfd89,	// (0x00056f49) popup_grid_graphic2_window_t

0xa857,	// (0x00051a17) bg_button_pane_cp05_ParamLimits

0xe059,	// (0x00055219) cell_graphic2_control_pane_g1_ParamLimits

0xe14d,	// (0x0005530d) cell_graphic2_catg_pane_ParamLimits

0xe14d,	// (0x0005530d) cell_graphic2_catg_pane

0xa1ed,	// (0x000513ad) bg_button_pane_cp12

0xe15f,	// (0x0005531f) cell_graphic2_catg_pane_g1

0x7321,	// (0x0004e4e1) cell_tb_ext_pane_t1_ParamLimits

0x1de7,	// (0x00048fa7) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1de7,	// (0x00048fa7) vkb2_top_cell_right_narrow_pane

0x1dff,	// (0x00048fbf) vkb2_top_cell_right_wide_pane_ParamLimits

0x1dff,	// (0x00048fbf) vkb2_top_cell_right_wide_pane

0x14a9,	// (0x00048669) bg_vkb2_func_pane_ParamLimits

0x14a9,	// (0x00048669) bg_vkb2_func_pane

0x1e70,	// (0x00049030) vkb2_top_cell_left_pane_g1_ParamLimits

0x14a9,	// (0x00048669) bg_vkb2_fuc_pane_cp03_ParamLimits

0x14a9,	// (0x00048669) bg_vkb2_fuc_pane_cp03

0x1ece,	// (0x0004908e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x33f9,	// (0x0004a5b9) bg_vkb2_func_pane_g1

0x3401,	// (0x0004a5c1) bg_vkb2_func_pane_g2

0x3411,	// (0x0004a5d1) bg_vkb2_func_pane_g3

0x3409,	// (0x0004a5c9) bg_vkb2_func_pane_g4

0x3419,	// (0x0004a5d9) bg_vkb2_func_pane_g5

0x3421,	// (0x0004a5e1) bg_vkb2_func_pane_g6

0x3429,	// (0x0004a5e9) bg_vkb2_func_pane_g7

0x3431,	// (0x0004a5f1) bg_vkb2_func_pane_g8

0x33f1,	// (0x0004a5b1) bg_vkb2_func_pane_g9

0x0008,

0xfddd,	// (0x00056f9d) bg_vkb2_func_pane_g

0x14a9,	// (0x00048669) bg_vkb2_fuc_pane_cp01_ParamLimits

0x14a9,	// (0x00048669) bg_vkb2_fuc_pane_cp01

0x1e70,	// (0x00049030) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1e70,	// (0x00049030) vkb2_top_cell_right_wide_pane_g1

0x14a9,	// (0x00048669) bg_vkb2_fuc_pane_cp02_ParamLimits

0x14a9,	// (0x00048669) bg_vkb2_fuc_pane_cp02

0x1ece,	// (0x0004908e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1ece,	// (0x0004908e) vkb2_top_cell_right_narrow_pane_g1

0xd657,	// (0x00054817) aid_touch_area_decrease_ParamLimits

0xd657,	// (0x00054817) aid_touch_area_decrease

0xd691,	// (0x00054851) aid_touch_area_increase_ParamLimits

0xd691,	// (0x00054851) aid_touch_area_increase

0xd6b9,	// (0x00054879) aid_touch_area_mute_ParamLimits

0xd6b9,	// (0x00054879) aid_touch_area_mute

0xd6e1,	// (0x000548a1) aid_touch_area_slider_ParamLimits

0xd6e1,	// (0x000548a1) aid_touch_area_slider

0xd721,	// (0x000548e1) popup_slider_window_g4_ParamLimits

0xd721,	// (0x000548e1) popup_slider_window_g4

0xd749,	// (0x00054909) popup_slider_window_g5_ParamLimits

0xd749,	// (0x00054909) popup_slider_window_g5

0xd77d,	// (0x0005493d) popup_slider_window_g6_ParamLimits

0xd77d,	// (0x0005493d) popup_slider_window_g6

0x70f6,	// (0x0004e2b6) popup_slider_window_t2_ParamLimits

0x70f6,	// (0x0004e2b6) popup_slider_window_t2

0x0001,

0xfcd7,	// (0x00056e97) popup_slider_window_t_ParamLimits

0xfcd7,	// (0x00056e97) popup_slider_window_t

0xd799,	// (0x00054959) slider_pane_ParamLimits

0xd799,	// (0x00054959) slider_pane

0x7e58,	// (0x0004f018) slider_pane_g1_ParamLimits

0x7e58,	// (0x0004f018) slider_pane_g1

0x7e6c,	// (0x0004f02c) slider_pane_g2_ParamLimits

0x7e6c,	// (0x0004f02c) slider_pane_g2

0x7e82,	// (0x0004f042) slider_pane_g3_ParamLimits

0x7e82,	// (0x0004f042) slider_pane_g3

0x0003,

0xfdf0,	// (0x00056fb0) slider_pane_g_ParamLimits

0xfdf0,	// (0x00056fb0) slider_pane_g

0xbbc7,	// (0x00052d87) popup_tb_float_extension_window_ParamLimits

0xbbc7,	// (0x00052d87) popup_tb_float_extension_window

0x7eae,	// (0x0004f06e) aid_size_cell_tb_float_ext

0xa1ed,	// (0x000513ad) bg_popup_sub_window_cp28

0x7eba,	// (0x0004f07a) grid_tb_float_ext_pane

0x7ec6,	// (0x0004f086) cell_tb_float_ext_pane_ParamLimits

0x7ec6,	// (0x0004f086) cell_tb_float_ext_pane

0x7ee2,	// (0x0004f0a2) cell_tb_float_ext_pane_g1

0x7eeb,	// (0x0004f0ab) grid_highlight_pane_cp12

0xc04b,	// (0x0005320b) cell_last_hwr_side_pane_ParamLimits

0xc04b,	// (0x0005320b) cell_last_hwr_side_pane

0x59ef,	// (0x0004cbaf) cell_last_hwr_side_pane_g1

0x7ef4,	// (0x0004f0b4) cell_last_hwr_side_pane_g2

0x0001,

0xfdf9,	// (0x00056fb9) cell_last_hwr_side_pane_g

0xc422,	// (0x000535e2) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc422,	// (0x000535e2) vkb2_area_bottom_space_btn_pane

0x5c6a,	// (0x0004ce2a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7977,	// (0x0004eb37) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2018,	// (0x000491d8) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2036,	// (0x000491f6) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2036,	// (0x000491f6) vkb2_area_bottom_space_btn_pane_g1

0x2070,	// (0x00049230) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2070,	// (0x00049230) vkb2_area_bottom_space_btn_pane_g2

0x20a6,	// (0x00049266) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x20a6,	// (0x00049266) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfe,	// (0x00056fbe) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfe,	// (0x00056fbe) vkb2_area_bottom_space_btn_pane_g

0x1560,	// (0x00048720) cel_fep_hwr_func_pane_ParamLimits

0x1560,	// (0x00048720) cel_fep_hwr_func_pane

0xc020,	// (0x000531e0) cell_hwr_side_button_pane_ParamLimits

0xc020,	// (0x000531e0) cell_hwr_side_button_pane

0x7355,	// (0x0004e515) aid_area_touch_clock_ParamLimits

0xa857,	// (0x00051a17) bg_uniindi_top_pane_ParamLimits

0x7369,	// (0x0004e529) uniindi_top_pane_g1_ParamLimits

0x737f,	// (0x0004e53f) uniindi_top_pane_g2_ParamLimits

0x738b,	// (0x0004e54b) uniindi_top_pane_g3_ParamLimits

0x739c,	// (0x0004e55c) uniindi_top_pane_g4_ParamLimits

0xfd0f,	// (0x00056ecf) uniindi_top_pane_g_ParamLimits

0x73a9,	// (0x0004e569) uniindi_top_pane_t1_ParamLimits

0xa857,	// (0x00051a17) bg_vkb2_func_pane_cp01_ParamLimits

0xa857,	// (0x00051a17) bg_vkb2_func_pane_cp01

0x7efd,	// (0x0004f0bd) cel_fep_hwr_func_pane_g1_ParamLimits

0x7efd,	// (0x0004f0bd) cel_fep_hwr_func_pane_g1

0xa857,	// (0x00051a17) bg_vkb2_func_pane_cp02_ParamLimits

0xa857,	// (0x00051a17) bg_vkb2_func_pane_cp02

0x7efd,	// (0x0004f0bd) cell_hwr_side_button_pane_g1_ParamLimits

0x7efd,	// (0x0004f0bd) cell_hwr_side_button_pane_g1

0x3276,	// (0x0004a436) status_pane_g4_ParamLimits

0x3276,	// (0x0004a436) status_pane_g4

0x3290,	// (0x0004a450) status_pane_t1

0x57a2,	// (0x0004c962) form2_midp_gauge_slider_cont_pane

0x57aa,	// (0x0004c96a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcfc9,	// (0x00054189) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcfdb,	// (0x0005419b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfadb,	// (0x00056c9b) form2_midp_gauge_slider_pane_t_ParamLimits

0x57e0,	// (0x0004c9a0) form2_midp_slider_pane_ParamLimits

0x19f9,	// (0x00048bb9) aid_size_cell_func_vkb2_ParamLimits

0x19f9,	// (0x00048bb9) aid_size_cell_func_vkb2

0x7e9a,	// (0x0004f05a) slider_pane_g4_ParamLimits

0x7e9a,	// (0x0004f05a) slider_pane_g4

0xc48b,	// (0x0005364b) form2_midp_gauge_slider_pane_t2_cp01

0xc499,	// (0x00053659) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc499,	// (0x00053659) form2_midp_gauge_slider_pane_t3_cp01

0x211b,	// (0x000492db) form2_midp_slider_pane_cp01

0xa1ed,	// (0x000513ad) navi_smil_pane

0x7f36,	// (0x0004f0f6) navi_smil_pane_g1

0x7f3e,	// (0x0004f0fe) navi_smil_pane_t1

0x7f0b,	// (0x0004f0cb) form2_midp_slider_pane_g1

0x7f14,	// (0x0004f0d4) form2_midp_slider_pane_g2

0x7f1c,	// (0x0004f0dc) form2_midp_slider_pane_g3

0x7f0b,	// (0x0004f0cb) form2_midp_slider_pane_g4

0xe168,	// (0x00055328) form2_midp_slider_pane_g5

0x0004,

0xfe07,	// (0x00056fc7) form2_midp_slider_pane_g

0x20e0,	// (0x000492a0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x20e0,	// (0x000492a0) vkb2_area_bottom_space_btn_pane_g4

0xbdae,	// (0x00052f6e) lc0_navi_pane_ParamLimits

0xbdae,	// (0x00052f6e) lc0_navi_pane

0xc6cc,	// (0x0005388c) lc0_stat_indi_pane_ParamLimits

0xc6cc,	// (0x0005388c) lc0_stat_indi_pane

0xc6e1,	// (0x000538a1) ls0_title_pane_ParamLimits

0xc6e1,	// (0x000538a1) ls0_title_pane

0xae85,	// (0x00052045) bg_popup_sub_pane_cp14_ParamLimits

0x733c,	// (0x0004e4fc) list_uniindi_pane_ParamLimits

0x7348,	// (0x0004e508) uniindi_top_pane_ParamLimits

0x73e8,	// (0x0004e5a8) list_single_uniindi_pane_g1_ParamLimits

0x73fb,	// (0x0004e5bb) list_single_uniindi_pane_t1_ParamLimits

0xc4b6,	// (0x00053676) lc0_stat_clock_pane_ParamLimits

0xc4b6,	// (0x00053676) lc0_stat_clock_pane

0xe171,	// (0x00055331) lc0_stat_indi_pane_g1_ParamLimits

0xe171,	// (0x00055331) lc0_stat_indi_pane_g1

0xe17e,	// (0x0005533e) lc0_stat_indi_pane_g2_ParamLimits

0xe17e,	// (0x0005533e) lc0_stat_indi_pane_g2

0x0001,

0xfe12,	// (0x00056fd2) lc0_stat_indi_pane_g_ParamLimits

0xfe12,	// (0x00056fd2) lc0_stat_indi_pane_g

0xc4c3,	// (0x00053683) lc0_uni_indicator_pane_ParamLimits

0xc4c3,	// (0x00053683) lc0_uni_indicator_pane

0xe18b,	// (0x0005534b) ls0_title_pane_g1_ParamLimits

0xe18b,	// (0x0005534b) ls0_title_pane_g1

0xe19f,	// (0x0005535f) ls0_title_pane_t1_ParamLimits

0xe19f,	// (0x0005535f) ls0_title_pane_t1

0xc4d0,	// (0x00053690) lc0_uni_indicator_pane_g1_ParamLimits

0xc4d0,	// (0x00053690) lc0_uni_indicator_pane_g1

0x7fb0,	// (0x0004f170) lc0_stat_clock_pane_t1

0xa1ed,	// (0x000513ad) main_ai5_pane

0x7fbe,	// (0x0004f17e) ai5_sk_pane_ParamLimits

0x7fbe,	// (0x0004f17e) ai5_sk_pane

0xe1cd,	// (0x0005538d) cell_ai5_widget_pane_ParamLimits

0xe1cd,	// (0x0005538d) cell_ai5_widget_pane

0xe23c,	// (0x000553fc) aid_size_cell_widget_grid

0x807c,	// (0x0004f23c) bg_ai5_widget_pane_ParamLimits

0x807c,	// (0x0004f23c) bg_ai5_widget_pane

0xe270,	// (0x00055430) cell_ai5_widget_pane_g2

0xe284,	// (0x00055444) cell_ai5_widget_pane_g3

0xe29e,	// (0x0005545e) cell_ai5_widget_pane_g4

0xe2ae,	// (0x0005546e) cell_ai5_widget_pane_g5

0xe2be,	// (0x0005547e) cell_ai5_widget_pane_g6

0xe2ca,	// (0x0005548a) cell_ai5_widget_pane_g7

0xe2ee,	// (0x000554ae) cell_ai5_widget_pane_t1_ParamLimits

0xe2ee,	// (0x000554ae) cell_ai5_widget_pane_t1

0x81db,	// (0x0004f39b) cell_ai5_widget_pane_t2_ParamLimits

0x81db,	// (0x0004f39b) cell_ai5_widget_pane_t2

0x81f3,	// (0x0004f3b3) cell_ai5_widget_pane_t3_ParamLimits

0x81f3,	// (0x0004f3b3) cell_ai5_widget_pane_t3

0xe30b,	// (0x000554cb) cell_ai5_widget_pane_t4_ParamLimits

0xe30b,	// (0x000554cb) cell_ai5_widget_pane_t4

0xe331,	// (0x000554f1) cell_ai5_widget_pane_t5_ParamLimits

0xe331,	// (0x000554f1) cell_ai5_widget_pane_t5

0x8251,	// (0x0004f411) cell_ai5_widget_pane_t6_ParamLimits

0x8251,	// (0x0004f411) cell_ai5_widget_pane_t6

0x8263,	// (0x0004f423) cell_ai5_widget_pane_t7_ParamLimits

0x8263,	// (0x0004f423) cell_ai5_widget_pane_t7

0x8282,	// (0x0004f442) cell_ai5_widget_pane_t8_ParamLimits

0x8282,	// (0x0004f442) cell_ai5_widget_pane_t8

0x000b,

0xfe32,	// (0x00056ff2) cell_ai5_widget_pane_t_ParamLimits

0xfe32,	// (0x00056ff2) cell_ai5_widget_pane_t

0xe3c3,	// (0x00055583) grid_ai5_widget_pane

0xae85,	// (0x00052045) highlight_cell_ai5_widget_pane_ParamLimits

0xae85,	// (0x00052045) highlight_cell_ai5_widget_pane

0xe83f,	// (0x000559ff) ai5_sk_left_pane

0xe849,	// (0x00055a09) ai5_sk_middle_pane

0xe853,	// (0x00055a13) ai5_sk_right_pane

0x8332,	// (0x0004f4f2) bg_ai5_widget_pane_g1_ParamLimits

0x8332,	// (0x0004f4f2) bg_ai5_widget_pane_g1

0x833e,	// (0x0004f4fe) bg_ai5_widget_pane_g2_ParamLimits

0x833e,	// (0x0004f4fe) bg_ai5_widget_pane_g2

0x834a,	// (0x0004f50a) bg_ai5_widget_pane_g3_ParamLimits

0x834a,	// (0x0004f50a) bg_ai5_widget_pane_g3

0x8356,	// (0x0004f516) bg_ai5_widget_pane_g4_ParamLimits

0x8356,	// (0x0004f516) bg_ai5_widget_pane_g4

0x8362,	// (0x0004f522) bg_ai5_widget_pane_g5_ParamLimits

0x8362,	// (0x0004f522) bg_ai5_widget_pane_g5

0x836e,	// (0x0004f52e) bg_ai5_widget_pane_g6_ParamLimits

0x836e,	// (0x0004f52e) bg_ai5_widget_pane_g6

0x837a,	// (0x0004f53a) bg_ai5_widget_pane_g7_ParamLimits

0x837a,	// (0x0004f53a) bg_ai5_widget_pane_g7

0x8386,	// (0x0004f546) bg_ai5_widget_pane_g8_ParamLimits

0x8386,	// (0x0004f546) bg_ai5_widget_pane_g8

0x8392,	// (0x0004f552) bg_ai5_widget_pane_g9_ParamLimits

0x8392,	// (0x0004f552) bg_ai5_widget_pane_g9

0x0008,

0xfe4b,	// (0x0005700b) bg_ai5_widget_pane_g_ParamLimits

0xfe4b,	// (0x0005700b) bg_ai5_widget_pane_g

0xe889,	// (0x00055a49) cell_shortcut_ai5_widget_pane_ParamLimits

0xe889,	// (0x00055a49) cell_shortcut_ai5_widget_pane

0x2b94,	// (0x00049d54) bg_cell_shortcut_ai5_widget_pane

0x83dd,	// (0x0004f59d) cell_grid_ai5_widget_pane_g1

0x2b94,	// (0x00049d54) highlight_cell_shortcut_ai5_widget_pane

0x3401,	// (0x0004a5c1) ai5_sk_left_pane_g1

0x83e6,	// (0x0004f5a6) ai5_sk_left_pane_g2

0x83ee,	// (0x0004f5ae) ai5_sk_left_pane_g3

0x83f6,	// (0x0004f5b6) ai5_sk_left_pane_g4

0x0003,

0xfe5e,	// (0x0005701e) ai5_sk_left_pane_g

0x83fe,	// (0x0004f5be) ai5_sk_left_pane_t1

0x33f9,	// (0x0004a5b9) ai5_sk_right_pane_g1

0x840c,	// (0x0004f5cc) ai5_sk_right_pane_g2

0x8414,	// (0x0004f5d4) ai5_sk_right_pane_g3

0x841c,	// (0x0004f5dc) ai5_sk_right_pane_g4

0x0003,

0xfe67,	// (0x00057027) ai5_sk_right_pane_g

0x8424,	// (0x0004f5e4) ai5_sk_right_pane_t1

0x33f9,	// (0x0004a5b9) ai5_sk_middle_pane_g1

0x3401,	// (0x0004a5c1) ai5_sk_middle_pane_g2

0x3419,	// (0x0004a5d9) ai5_sk_middle_pane_g3

0x8414,	// (0x0004f5d4) ai5_sk_middle_pane_g4

0x83ee,	// (0x0004f5ae) ai5_sk_middle_pane_g5

0x8432,	// (0x0004f5f2) ai5_sk_middle_pane_g6

0xe89c,	// (0x00055a5c) ai5_sk_middle_pane_g7

0x0006,

0xfe70,	// (0x00057030) ai5_sk_middle_pane_g

0xbc98,	// (0x00052e58) aid_touch_area_size_lc0_ParamLimits

0xbc98,	// (0x00052e58) aid_touch_area_size_lc0

0x16ff,	// (0x000488bf) cell_hwr_candidate_pane_t1_ParamLimits

0x2f39,	// (0x0004a0f9) aid_touch_navi_pane

0xc7ec,	// (0x000539ac) status_dt_navi_pane_ParamLimits

0xc7ec,	// (0x000539ac) status_dt_navi_pane

0xc804,	// (0x000539c4) status_dt_sta_pane_ParamLimits

0xc804,	// (0x000539c4) status_dt_sta_pane

0xe8a4,	// (0x00055a64) dt_sta_controll_pane

0xe8b1,	// (0x00055a71) dt_sta_indi_pane

0xe8be,	// (0x00055a7e) dt_sta_title_pane

0xa857,	// (0x00051a17) bg_dt_sta_indi_pane_ParamLimits

0xa857,	// (0x00051a17) bg_dt_sta_indi_pane

0xe8d0,	// (0x00055a90) dt_sta_battery_pane

0xe8d8,	// (0x00055a98) dt_sta_indi_pane_g1

0xe8e1,	// (0x00055aa1) dt_sta_indi_pane_g2

0xe8ea,	// (0x00055aaa) dt_sta_indi_pane_g3

0x0002,

0xfe7f,	// (0x0005703f) dt_sta_indi_pane_g

0xe8f3,	// (0x00055ab3) dt_sta_signal_pane

0xae85,	// (0x00052045) bg_dt_sta_title_pane_ParamLimits

0xae85,	// (0x00052045) bg_dt_sta_title_pane

0xe8fc,	// (0x00055abc) dt_sta_title_pane_g1

0xe904,	// (0x00055ac4) dt_sta_title_pane_t1_ParamLimits

0xe904,	// (0x00055ac4) dt_sta_title_pane_t1

0xa1ed,	// (0x000513ad) bg_dt_sta_control_pane

0xe919,	// (0x00055ad9) dt_sta_controll_pane_g1

0xe922,	// (0x00055ae2) bg_dt_sta_title_pane_g1

0xe92b,	// (0x00055aeb) bg_dt_sta_title_pane_g2

0xe934,	// (0x00055af4) bg_dt_sta_title_pane_g3

0x0002,

0xfe86,	// (0x00057046) bg_dt_sta_title_pane_g

0x59ef,	// (0x0004cbaf) bg_dt_sta_indi_pane_g1

0x84e0,	// (0x0004f6a0) dt_sta_signal_pane_g1

0x84e8,	// (0x0004f6a8) dt_sta_signal_pane_g2

0x0001,

0xfe8d,	// (0x0005704d) dt_sta_signal_pane_g

0x84f0,	// (0x0004f6b0) dt_sta_battery_pane_g1

0x84f9,	// (0x0004f6b9) dt_sta_battery_pane_t1

0x59ef,	// (0x0004cbaf) bg_dt_sta_control_pane_g1

0x2692,	// (0x00049852) fep_china_uni_eep_pane

0x269a,	// (0x0004985a) fep_china_uni_entry_pane_ParamLimits

0x26aa,	// (0x0004986a) popup_fep_china_uni_window_g1_ParamLimits

0x26ba,	// (0x0004987a) popup_fep_china_uni_window_g2_ParamLimits

0x26ba,	// (0x0004987a) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x000568bd) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x000568bd) popup_fep_china_uni_window_g

0x8508,	// (0x0004f6c8) fep_china_uni_eep_pane_g1

0x8510,	// (0x0004f6d0) fep_china_uni_eep_pane_t1

0x7f2d,	// (0x0004f0ed) aid_touch_area_size_smil_player

0x308d,	// (0x0004a24d) lc0_clock_pane

0x3284,	// (0x0004a444) status_pane_g5_ParamLimits

0x3284,	// (0x0004a444) status_pane_g5

0xb6ef,	// (0x000528af) popup_keymap_window

0x324a,	// (0x0004a40a) status_icon_pane

0xe284,	// (0x00055444) cell_ai5_widget_pane_g3_ParamLimits

0xe29e,	// (0x0005545e) cell_ai5_widget_pane_g4_ParamLimits

0xe2ae,	// (0x0005546e) cell_ai5_widget_pane_g5_ParamLimits

0x815e,	// (0x0004f31e) cell_ai5_widget_pane_g8_ParamLimits

0x815e,	// (0x0004f31e) cell_ai5_widget_pane_g8

0x8172,	// (0x0004f332) cell_ai5_widget_pane_g9_ParamLimits

0x8172,	// (0x0004f332) cell_ai5_widget_pane_g9

0x8186,	// (0x0004f346) cell_ai5_widget_pane_g10_ParamLimits

0x8186,	// (0x0004f346) cell_ai5_widget_pane_g10

0x851f,	// (0x0004f6df) status_icon_pane_g1

0xa1ed,	// (0x000513ad) bg_popup_sub_pane_cp13

0x8527,	// (0x0004f6e7) popup_keymap_window_t1

0xb3fa,	// (0x000525ba) control_pane_g6_ParamLimits

0xb3fa,	// (0x000525ba) control_pane_g6

0xb407,	// (0x000525c7) control_pane_g7_ParamLimits

0xb407,	// (0x000525c7) control_pane_g7

0xb414,	// (0x000525d4) control_pane_g8_ParamLimits

0xb414,	// (0x000525d4) control_pane_g8

0xe8a4,	// (0x00055a64) dt_sta_controll_pane_ParamLimits

0xe8b1,	// (0x00055a71) dt_sta_indi_pane_ParamLimits

0xe8be,	// (0x00055a7e) dt_sta_title_pane_ParamLimits

0xada9,	// (0x00051f69) aid_size_touch_scroll_bar_cale

0xf35a,	// (0x0005651a) popup_discreet_window_ParamLimits

0xf35a,	// (0x0005651a) popup_discreet_window

0xa33b,	// (0x000514fb) popup_sk_window

0x3a57,	// (0x0004ac17) bg_popup_sub_pane_cp28_ParamLimits

0x3a57,	// (0x0004ac17) bg_popup_sub_pane_cp28

0x8535,	// (0x0004f6f5) popup_discreet_window_g1_ParamLimits

0x8535,	// (0x0004f6f5) popup_discreet_window_g1

0x8555,	// (0x0004f715) popup_discreet_window_t1_ParamLimits

0x8555,	// (0x0004f715) popup_discreet_window_t1

0x8573,	// (0x0004f733) popup_discreet_window_t2_ParamLimits

0x8573,	// (0x0004f733) popup_discreet_window_t2

0x0002,

0xfe92,	// (0x00057052) popup_discreet_window_t_ParamLimits

0xfe92,	// (0x00057052) popup_discreet_window_t

0x2151,	// (0x00049311) popup_sk_window_g1

0x215b,	// (0x0004931b) popup_sk_window_g2

0x0001,

0xfe99,	// (0x00057059) popup_sk_window_g

0x2163,	// (0x00049323) popup_sk_window_t1

0x2171,	// (0x00049331) popup_sk_window_t1_copy1

0xe270,	// (0x00055430) cell_ai5_widget_pane_g2_ParamLimits

0xe351,	// (0x00055511) cell_ai5_widget_pane_t9_ParamLimits

0xe351,	// (0x00055511) cell_ai5_widget_pane_t9

0xa1ed,	// (0x000513ad) main_fep_fshwr2_pane

0xc4ef,	// (0x000536af) aid_fshwr2_btn_pane

0xc503,	// (0x000536c3) aid_fshwr2_syb_pane

0xc517,	// (0x000536d7) aid_fshwr2_txt_pane

0xc527,	// (0x000536e7) fshwr2_func_candi_pane

0xc549,	// (0x00053709) fshwr2_hwr_syb_pane

0xc56d,	// (0x0005372d) fshwr2_icf_pane

0xa1ed,	// (0x000513ad) fshwr2_icf_bg_pane

0x220b,	// (0x000493cb) fshwr2_icf_pane_t1_ParamLimits

0x220b,	// (0x000493cb) fshwr2_icf_pane_t1

0x2588,	// (0x00049748) fshwr2_func_candi_pane_g1

0xe93d,	// (0x00055afd) fshwr2_func_candi_row_pane_ParamLimits

0xe93d,	// (0x00055afd) fshwr2_func_candi_row_pane

0xc59d,	// (0x0005375d) cell_fshwr2_syb_pane_ParamLimits

0xc59d,	// (0x0005375d) cell_fshwr2_syb_pane

0x7efd,	// (0x0004f0bd) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7efd,	// (0x0004f0bd) fshwr2_hwr_syb_pane_g1

0xa1ed,	// (0x000513ad) bg_popup_call_pane_cp01

0xc5c5,	// (0x00053785) fshwr2_func_candi_cell_pane_ParamLimits

0xc5c5,	// (0x00053785) fshwr2_func_candi_cell_pane

0x3837,	// (0x0004a9f7) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3837,	// (0x0004a9f7) fshwr2_func_candi_cell_bg_pane

0xc610,	// (0x000537d0) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc610,	// (0x000537d0) fshwr2_func_candi_cell_pane_g1

0xc647,	// (0x00053807) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc647,	// (0x00053807) fshwr2_func_candi_cell_pane_t1

0xa1ed,	// (0x000513ad) bg_button_pane_cp08

0x2ebb,	// (0x0004a07b) cell_fshwr2_syb_bg_pane

0xc662,	// (0x00053822) cell_fshwr2_syb_bg_pane_g1

0xc676,	// (0x00053836) cell_fshwr2_syb_bg_pane_t1

0xae85,	// (0x00052045) main_tmo_pane

0xcb06,	// (0x00053cc6) uni_indicator_pane_g1_ParamLimits

0xcb1c,	// (0x00053cdc) uni_indicator_pane_g2_ParamLimits

0xcb32,	// (0x00053cf2) uni_indicator_pane_g3_ParamLimits

0xcb45,	// (0x00053d05) uni_indicator_pane_g4_ParamLimits

0xcb45,	// (0x00053d05) uni_indicator_pane_g4

0x45ce,	// (0x0004b78e) uni_indicator_pane_g5_ParamLimits

0x45ce,	// (0x0004b78e) uni_indicator_pane_g5

0x45ce,	// (0x0004b78e) uni_indicator_pane_g6_ParamLimits

0x45ce,	// (0x0004b78e) uni_indicator_pane_g6

0xf8fc,	// (0x00056abc) uni_indicator_pane_g_ParamLimits

0xd627,	// (0x000547e7) popup_tmo_note_window_ParamLimits

0xd627,	// (0x000547e7) popup_tmo_note_window

0xae85,	// (0x00052045) fshwr2_bg_pane

0xc638,	// (0x000537f8) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc638,	// (0x000537f8) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9e,	// (0x0005705e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9e,	// (0x0005705e) fshwr2_func_candi_cell_pane_g

0x59ef,	// (0x0004cbaf) bg_popup_window_pane_cp01

0x22ef,	// (0x000494af) bg_popup_window_pane_g1_cp01

0x85e8,	// (0x0004f7a8) bg_popup_window_pane_cp22_ParamLimits

0x85e8,	// (0x0004f7a8) bg_popup_window_pane_cp22

0x85f6,	// (0x0004f7b6) listscroll_tmo_link_pane_ParamLimits

0x85f6,	// (0x0004f7b6) listscroll_tmo_link_pane

0x8636,	// (0x0004f7f6) popup_tmo_note_window_g1_ParamLimits

0x8636,	// (0x0004f7f6) popup_tmo_note_window_g1

0x8643,	// (0x0004f803) tmo_note_info_pane_ParamLimits

0x8643,	// (0x0004f803) tmo_note_info_pane

0xe964,	// (0x00055b24) list_tmo_note_info_pane_g1_ParamLimits

0xe964,	// (0x00055b24) list_tmo_note_info_pane_g1

0x8674,	// (0x0004f834) list_tmo_note_info_pane_g2_ParamLimits

0x8674,	// (0x0004f834) list_tmo_note_info_pane_g2

0x0001,

0xfea3,	// (0x00057063) list_tmo_note_info_pane_g_ParamLimits

0xfea3,	// (0x00057063) list_tmo_note_info_pane_g

0x8690,	// (0x0004f850) list_tmo_note_info_text_pane_ParamLimits

0x8690,	// (0x0004f850) list_tmo_note_info_text_pane

0x8715,	// (0x0004f8d5) list_tmo_link_pane

0x8722,	// (0x0004f8e2) scroll_pane_cp20

0x872f,	// (0x0004f8ef) list_single_tmo_link_pane_ParamLimits

0x872f,	// (0x0004f8ef) list_single_tmo_link_pane

0x873f,	// (0x0004f8ff) list_single_tmo_link_pane_t1

0x874d,	// (0x0004f90d) list_tmo_note_info_text_pane_t1_ParamLimits

0x874d,	// (0x0004f90d) list_tmo_note_info_text_pane_t1

0xaf25,	// (0x000520e5) aid_size_touch_scroll_bar_cp01_ParamLimits

0xaf25,	// (0x000520e5) aid_size_touch_scroll_bar_cp01

0x9e43,	// (0x00051003) aid_size_touch_slider_marker

0xa32b,	// (0x000514eb) popup_settings_window_ParamLimits

0xa32b,	// (0x000514eb) popup_settings_window

0xed24,	// (0x00055ee4) popup_candi_list_indi_window

0x2f39,	// (0x0004a0f9) aid_touch_navi_pane_ParamLimits

0x1950,	// (0x00048b10) rs_clock_indi_pane

0x1959,	// (0x00048b19) sctrl_sk_bottom_pane_ParamLimits

0x196a,	// (0x00048b2a) sctrl_sk_top_pane_ParamLimits

0x1a53,	// (0x00048c13) popup_fep_tooltip_window

0xe23c,	// (0x000553fc) aid_size_cell_widget_grid_ParamLimits

0xe25b,	// (0x0005541b) cell_ai5_widget_pane_g1_ParamLimits

0xe25b,	// (0x0005541b) cell_ai5_widget_pane_g1

0xe2be,	// (0x0005547e) cell_ai5_widget_pane_g6_ParamLimits

0xe2ca,	// (0x0005548a) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe17,	// (0x00056fd7) cell_ai5_widget_pane_g_ParamLimits

0xfe17,	// (0x00056fd7) cell_ai5_widget_pane_g

0xe380,	// (0x00055540) cell_ai5_widget_pane_t10_ParamLimits

0xe380,	// (0x00055540) cell_ai5_widget_pane_t10

0xe3c3,	// (0x00055583) grid_ai5_widget_pane_ParamLimits

0xe85d,	// (0x00055a1d) cell_contacts_ai5_widget_pane_ParamLimits

0xe85d,	// (0x00055a1d) cell_contacts_ai5_widget_pane

0x8588,	// (0x0004f748) popup_discreet_window_t3_ParamLimits

0x8588,	// (0x0004f748) popup_discreet_window_t3

0xc589,	// (0x00053749) popup_fshwr2_char_preview_window_ParamLimits

0xc589,	// (0x00053749) popup_fshwr2_char_preview_window

0xe97b,	// (0x00055b3b) tmo_note_info_pane_t1

0xe990,	// (0x00055b50) tmo_note_info_pane_t2

0xe9a9,	// (0x00055b69) tmo_note_info_pane_t3

0x86f1,	// (0x0004f8b1) tmo_note_info_pane_t4

0x8703,	// (0x0004f8c3) tmo_note_info_pane_t5

0x0004,

0xfea8,	// (0x00057068) tmo_note_info_pane_t

0x8715,	// (0x0004f8d5) list_tmo_link_pane_ParamLimits

0x8722,	// (0x0004f8e2) scroll_pane_cp20_ParamLimits

0xa1ed,	// (0x000513ad) bg_popup_fep_char_preview_window_cp01

0x8766,	// (0x0004f926) popup_fshwr2_char_preview_window_t1

0x8774,	// (0x0004f934) popup_candi_list_indi_window_g1

0x877d,	// (0x0004f93d) bg_cell_contacts_ai5_widget_pane

0x8789,	// (0x0004f949) cell_contacts_ai5_widget_pane_g1

0x879e,	// (0x0004f95e) cell_contacts_ai5_widget_pane_g2

0x87aa,	// (0x0004f96a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb3,	// (0x00057073) cell_contacts_ai5_widget_pane_g

0x87b6,	// (0x0004f976) cell_contacts_ai5_widget_pane_t1

0xae85,	// (0x00052045) highlight_cell_shortcut_ai5_widget_pane_cp01

0x882d,	// (0x0004f9ed) settings_container_pane

0x2b94,	// (0x00049d54) listscroll_set_pane_copy1

0x5120,	// (0x0004c2e0) scroll_pane_cp121_copy1

0x8839,	// (0x0004f9f9) set_content_pane_copy1

0x8841,	// (0x0004fa01) aid_height_set_list_copy1_ParamLimits

0x8841,	// (0x0004fa01) aid_height_set_list_copy1

0x47ce,	// (0x0004b98e) aid_size_parent_copy1_ParamLimits

0x47ce,	// (0x0004b98e) aid_size_parent_copy1

0x884d,	// (0x0004fa0d) button_value_adjust_pane_cp6_copy1_ParamLimits

0x884d,	// (0x0004fa0d) button_value_adjust_pane_cp6_copy1

0x2ebb,	// (0x0004a07b) list_highlight_pane_cp2_copy1_ParamLimits

0x2ebb,	// (0x0004a07b) list_highlight_pane_cp2_copy1

0x8861,	// (0x0004fa21) list_set_pane_copy1_ParamLimits

0x8861,	// (0x0004fa21) list_set_pane_copy1

0x87c8,	// (0x0004f988) main_pane_set_t1_copy1_ParamLimits

0x87c8,	// (0x0004f988) main_pane_set_t1_copy1

0x8802,	// (0x0004f9c2) main_pane_set_t2_copy1_ParamLimits

0x8802,	// (0x0004f9c2) main_pane_set_t2_copy1

0x8922,	// (0x0004fae2) main_pane_set_t3_copy1

0x8930,	// (0x0004faf0) main_pane_set_t4_copy1

0x8821,	// (0x0004f9e1) set_content_pane_g1_copy1_ParamLimits

0x8821,	// (0x0004f9e1) set_content_pane_g1_copy1

0x893e,	// (0x0004fafe) setting_code_pane_copy1

0x8946,	// (0x0004fb06) setting_slider_graphic_pane_copy1

0x8946,	// (0x0004fb06) setting_slider_pane_copy1

0x894e,	// (0x0004fb0e) setting_text_pane_copy1

0x894e,	// (0x0004fb0e) setting_volume_pane_copy1

0x893e,	// (0x0004fafe) settings_code_pane_cp2_copy1

0x8956,	// (0x0004fb16) settings_code_pane_cp_copy1_ParamLimits

0x8956,	// (0x0004fb16) settings_code_pane_cp_copy1

0x22f8,	// (0x000494b8) volume_set_pane_copy1

0x896a,	// (0x0004fb2a) volume_set_pane_g10_copy1

0x8976,	// (0x0004fb36) volume_set_pane_g1_copy1

0x8980,	// (0x0004fb40) volume_set_pane_g2_copy1

0x898a,	// (0x0004fb4a) volume_set_pane_g3_copy1

0x8994,	// (0x0004fb54) volume_set_pane_g4_copy1

0x899e,	// (0x0004fb5e) volume_set_pane_g5_copy1

0x89a8,	// (0x0004fb68) volume_set_pane_g6_copy1

0x89b2,	// (0x0004fb72) volume_set_pane_g7_copy1

0x89bc,	// (0x0004fb7c) volume_set_pane_g8_copy1

0x89c6,	// (0x0004fb86) volume_set_pane_g9_copy1

0xa574,	// (0x00051734) bg_set_opt_pane_cp_copy1_ParamLimits

0xa574,	// (0x00051734) bg_set_opt_pane_cp_copy1

0x2304,	// (0x000494c4) setting_slider_pane_t1_copy1_ParamLimits

0x2304,	// (0x000494c4) setting_slider_pane_t1_copy1

0x2323,	// (0x000494e3) setting_slider_pane_t2_copy1_ParamLimits

0x2323,	// (0x000494e3) setting_slider_pane_t2_copy1

0x233d,	// (0x000494fd) setting_slider_pane_t3_copy1_ParamLimits

0x233d,	// (0x000494fd) setting_slider_pane_t3_copy1

0x2355,	// (0x00049515) slider_set_pane_copy1_ParamLimits

0x2355,	// (0x00049515) slider_set_pane_copy1

0xaedd,	// (0x0005209d) set_opt_bg_pane_g1_copy2

0xaee5,	// (0x000520a5) set_opt_bg_pane_g2_copy2

0x89d2,	// (0x0004fb92) set_opt_bg_pane_g3_copy2

0xaef5,	// (0x000520b5) set_opt_bg_pane_g4_copy2

0xaefd,	// (0x000520bd) set_opt_bg_pane_g5_copy2

0xaf05,	// (0x000520c5) set_opt_bg_pane_g6_copy2

0x89dc,	// (0x0004fb9c) set_opt_bg_pane_g7_copy2

0x89e6,	// (0x0004fba6) set_opt_bg_pane_g8_copy2

0x89f0,	// (0x0004fbb0) set_opt_bg_pane_g9_copy2

0x236b,	// (0x0004952b) aid_size_touch_slider_mark_copy1_ParamLimits

0x236b,	// (0x0004952b) aid_size_touch_slider_mark_copy1

0x89fa,	// (0x0004fbba) slider_set_pane_g1_copy1

0x237f,	// (0x0004953f) slider_set_pane_g2_copy1

0x1255,	// (0x00048415) slider_set_pane_g3_copy1_ParamLimits

0x1255,	// (0x00048415) slider_set_pane_g3_copy1

0x1269,	// (0x00048429) slider_set_pane_g4_copy1_ParamLimits

0x1269,	// (0x00048429) slider_set_pane_g4_copy1

0x1281,	// (0x00048441) slider_set_pane_g5_copy1_ParamLimits

0x1281,	// (0x00048441) slider_set_pane_g5_copy1

0x1255,	// (0x00048415) slider_set_pane_g6_copy1_ParamLimits

0x1255,	// (0x00048415) slider_set_pane_g6_copy1

0x2387,	// (0x00049547) slider_set_pane_g7_copy1_ParamLimits

0x2387,	// (0x00049547) slider_set_pane_g7_copy1

0xa2e7,	// (0x000514a7) bg_set_opt_pane_cp2_copy1

0x8a03,	// (0x0004fbc3) setting_slider_graphic_pane_g1_copy1

0x8a0c,	// (0x0004fbcc) setting_slider_graphic_pane_t1_copy1

0x8a1c,	// (0x0004fbdc) setting_slider_graphic_pane_t2_copy1

0x8a2c,	// (0x0004fbec) slider_set_pane_cp_copy1

0x8a3c,	// (0x0004fbfc) input_focus_pane_cp1_copy1

0x8a45,	// (0x0004fc05) list_set_text_pane_copy1

0x8a4d,	// (0x0004fc0d) setting_text_pane_g1_copy1

0xe3d1,	// (0x00055591) set_text_pane_t1_copy1

0x8a3c,	// (0x0004fbfc) input_focus_pane_cp2_copy1

0x8a4d,	// (0x0004fc0d) setting_code_pane_g1_copy1

0x8a56,	// (0x0004fc16) setting_code_pane_t1_copy1

0x4f25,	// (0x0004c0e5) list_set_graphic_pane_copy1

0xa2e7,	// (0x000514a7) bg_set_opt_pane_cp4_copy1

0x288f,	// (0x00049a4f) list_set_graphic_pane_g1_copy1_ParamLimits

0x288f,	// (0x00049a4f) list_set_graphic_pane_g1_copy1

0x8a64,	// (0x0004fc24) list_set_graphic_pane_g2_copy1

0x28a7,	// (0x00049a67) list_set_graphic_pane_t1_copy1_ParamLimits

0x28a7,	// (0x00049a67) list_set_graphic_pane_t1_copy1

0x59ef,	// (0x0004cbaf) rs_clock_indi_pane_g1

0x8a6c,	// (0x0004fc2c) rs_clock_indi_pane_t1

0x8a7a,	// (0x0004fc3a) rs_indi_pane

0x8a82,	// (0x0004fc42) rs_indi_pane_g1

0x8a8b,	// (0x0004fc4b) rs_indi_pane_g2

0x8a94,	// (0x0004fc54) rs_indi_pane_g3

0x0002,

0xfeba,	// (0x0005707a) rs_indi_pane_g

0x2b94,	// (0x00049d54) bg_popup_preview_window_pane_cp03

0x8a9d,	// (0x0004fc5d) popup_fep_tooltip_window_t1

0x66b4,	// (0x0004d874) popup_note2_window_g2_ParamLimits

0x66b4,	// (0x0004d874) popup_note2_window_g2

0x0001,

0xfc47,	// (0x00056e07) popup_note2_window_g_ParamLimits

0xfc47,	// (0x00056e07) popup_note2_window_g

0x6bbc,	// (0x0004dd7c) bg_popup_sub_pane_cp11_ParamLimits

0x6bc9,	// (0x0004dd89) cell_ai3_links_pane_g1_ParamLimits

0x6be0,	// (0x0004dda0) cell_ai3_links_pane_t1

0xe3d1,	// (0x00055591) set_text_pane_t1_copy1_ParamLimits

0xb204,	// (0x000523c4) cell_graphic_popup_pane_cp2_ParamLimits

0xb204,	// (0x000523c4) cell_graphic_popup_pane_cp2

0x8aab,	// (0x0004fc6b) cell_graphic_popup_pane_g1_cp2

0xabbc,	// (0x00051d7c) cell_graphic_popup_pane_g2_cp2

0x8ab3,	// (0x0004fc73) cell_graphic_popup_pane_g3_cp2

0x8abb,	// (0x0004fc7b) cell_graphic_popup_pane_t2_cp2

0xabcd,	// (0x00051d8d) grid_highlight_pane_cp3_cp2

0xe688,	// (0x00055848) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xae85,	// (0x00052045) main_tmo_pane_ParamLimits

0xd61b,	// (0x000547db) popup_tmo_big_image_note_window

0xe24a,	// (0x0005540a) cell_ai5_widget_list_pane

0xe252,	// (0x00055412) cell_ai5_widget_lrg_icon_pane

0xe97b,	// (0x00055b3b) tmo_note_info_pane_t1_ParamLimits

0xe990,	// (0x00055b50) tmo_note_info_pane_t2_ParamLimits

0xe9a9,	// (0x00055b69) tmo_note_info_pane_t3_ParamLimits

0x86f1,	// (0x0004f8b1) tmo_note_info_pane_t4_ParamLimits

0x8703,	// (0x0004f8c3) tmo_note_info_pane_t5_ParamLimits

0xfea8,	// (0x00057068) tmo_note_info_pane_t_ParamLimits

0x882d,	// (0x0004f9ed) settings_container_pane_ParamLimits

0x8a34,	// (0x0004fbf4) indicator_popup_pane_cp5

0x8a34,	// (0x0004fbf4) indicator_popup_pane_cp6

0x4f25,	// (0x0004c0e5) list_set_graphic_pane_copy1_ParamLimits

0xa1ed,	// (0x000513ad) bg_popup_window_pane_cp23

0x8ac9,	// (0x0004fc89) popup_tmo_big_image_note_window_g1

0x8ad5,	// (0x0004fc95) popup_tmo_big_image_note_window_t1

0x8ae5,	// (0x0004fca5) popup_tmo_big_image_note_window_t2

0x8af5,	// (0x0004fcb5) popup_tmo_big_image_note_window_t3

0x0002,

0xfec1,	// (0x00057081) popup_tmo_big_image_note_window_t

0x59ef,	// (0x0004cbaf) cell_ai5_widget_lrg_icon_pane_g1

0xe9be,	// (0x00055b7e) cell_ai5_widget_lrg_icon_pane_t1

0xe9cc,	// (0x00055b8c) cell_ai5_widget_list_row_pane_ParamLimits

0xe9cc,	// (0x00055b8c) cell_ai5_widget_list_row_pane

0xe9e4,	// (0x00055ba4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe9e4,	// (0x00055ba4) cell_ai5_widget_list_row_pane_g1

0xe9f1,	// (0x00055bb1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe9f1,	// (0x00055bb1) cell_ai5_widget_list_row_pane_t1

0xea1c,	// (0x00055bdc) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xea1c,	// (0x00055bdc) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec8,	// (0x00057088) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec8,	// (0x00057088) cell_ai5_widget_list_row_pane_t

0xa1ed,	// (0x000513ad) main_fep_vtchi_ss_pane

0x8bb3,	// (0x0004fd73) popup_fep_char_pre_window

0x8bbb,	// (0x0004fd7b) popup_fep_ituss_window

0xea6e,	// (0x00055c2e) popup_fep_vkbss_window

0x2ebb,	// (0x0004a07b) grid_vkbss_keypad_pane_ParamLimits

0x2ebb,	// (0x0004a07b) grid_vkbss_keypad_pane

0x8c29,	// (0x0004fde9) ituss_keypad_pane

0x23a9,	// (0x00049569) aid_vkbss_key_offset_ParamLimits

0x23a9,	// (0x00049569) aid_vkbss_key_offset

0xc68c,	// (0x0005384c) cell_vkbss_key_pane_ParamLimits

0xc68c,	// (0x0005384c) cell_vkbss_key_pane

0x8c35,	// (0x0004fdf5) bg_cell_vkbss_key_g1_ParamLimits

0x8c35,	// (0x0004fdf5) bg_cell_vkbss_key_g1

0xea7d,	// (0x00055c3d) cell_vkbss_key_3p_pane_ParamLimits

0xea7d,	// (0x00055c3d) cell_vkbss_key_3p_pane

0xeab3,	// (0x00055c73) cell_vkbss_key_g1_ParamLimits

0xeab3,	// (0x00055c73) cell_vkbss_key_g1

0xeae9,	// (0x00055ca9) cell_vkbss_key_t1_ParamLimits

0xeae9,	// (0x00055ca9) cell_vkbss_key_t1

0x23ef,	// (0x000495af) cell_ituss_key_pane_ParamLimits

0x23ef,	// (0x000495af) cell_ituss_key_pane

0x8d09,	// (0x0004fec9) bg_cell_ituss_key_g1_ParamLimits

0x8d09,	// (0x0004fec9) bg_cell_ituss_key_g1

0x8d15,	// (0x0004fed5) cell_ituss_key_pane_g1_ParamLimits

0x8d15,	// (0x0004fed5) cell_ituss_key_pane_g1

0x2400,	// (0x000495c0) cell_ituss_key_pane_g2_ParamLimits

0x2400,	// (0x000495c0) cell_ituss_key_pane_g2

0x0005,

0xfecf,	// (0x0005708f) cell_ituss_key_pane_g_ParamLimits

0xfecf,	// (0x0005708f) cell_ituss_key_pane_g

0x2484,	// (0x00049644) cell_ituss_key_t1_ParamLimits

0x2484,	// (0x00049644) cell_ituss_key_t1

0x24be,	// (0x0004967e) cell_ituss_key_t2_ParamLimits

0x24be,	// (0x0004967e) cell_ituss_key_t2

0x24ef,	// (0x000496af) cell_ituss_key_t3_ParamLimits

0x24ef,	// (0x000496af) cell_ituss_key_t3

0x24be,	// (0x0004967e) cell_ituss_key_t4_ParamLimits

0x24be,	// (0x0004967e) cell_ituss_key_t4

0x0004,

0xfedc,	// (0x0005709c) cell_ituss_key_t_ParamLimits

0xfedc,	// (0x0005709c) cell_ituss_key_t

0xeb45,	// (0x00055d05) cell_vkbss_key_3p_pane_g1

0xeb4d,	// (0x00055d0d) cell_vkbss_key_3p_pane_g2

0xeb55,	// (0x00055d15) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee7,	// (0x000570a7) cell_vkbss_key_3p_pane_g

0x2b94,	// (0x00049d54) bg_popup_fep_char_preview_window_cp02

0x8d53,	// (0x0004ff13) popup_fep_char_pre_window_t1

0xe229,	// (0x000553e9) main_ai5_sk_pane

0x877d,	// (0x0004f93d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8789,	// (0x0004f949) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x879e,	// (0x0004f95e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x87aa,	// (0x0004f96a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb3,	// (0x00057073) cell_contacts_ai5_widget_pane_g_ParamLimits

0x87b6,	// (0x0004f976) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xae85,	// (0x00052045) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeb5d,	// (0x00055d1d) main_ai5_sk_pane_g1

0x388f,	// (0x0004aa4f) popup_query_code_window_g1

0xea5f,	// (0x00055c1f) popup_fep_vkb_icf_pane

0x8c00,	// (0x0004fdc0) popup_fep_vtchi_icf_pane

0x2ebb,	// (0x0004a07b) bg_icf_pane

0x2ebb,	// (0x0004a07b) list_vkb_icf_pane

0x8d6a,	// (0x0004ff2a) bg_icf_pane_cp01

0x8d7d,	// (0x0004ff3d) vtchi_icf_list_pane

0xebb2,	// (0x00055d72) list_vkb_icf_pane_t1_ParamLimits

0xebb2,	// (0x00055d72) list_vkb_icf_pane_t1

0x8e01,	// (0x0004ffc1) vtchi_icf_list_pane_t1_ParamLimits

0x8e01,	// (0x0004ffc1) vtchi_icf_list_pane_t1

0x8bbb,	// (0x0004fd7b) popup_fep_ituss_window_ParamLimits

0x8c00,	// (0x0004fdc0) popup_fep_vtchi_icf_pane_ParamLimits

0x8c29,	// (0x0004fde9) ituss_keypad_pane_ParamLimits

0x239d,	// (0x0004955d) ituss_sks_pane

0x2ebb,	// (0x0004a07b) bg_icf_pane_ParamLimits

0xea44,	// (0x00055c04) icf_edit_indi_pane_ParamLimits

0xea44,	// (0x00055c04) icf_edit_indi_pane

0x2ebb,	// (0x0004a07b) list_vkb_icf_pane_ParamLimits

0x8d6a,	// (0x0004ff2a) bg_icf_pane_cp01_ParamLimits

0x8ba6,	// (0x0004fd66) icf_edit_indi_pane_cp01_ParamLimits

0x8ba6,	// (0x0004fd66) icf_edit_indi_pane_cp01

0x8d85,	// (0x0004ff45) vtchi_query_pane

0x7efd,	// (0x0004f0bd) icf_edit_indi_pane_g1_ParamLimits

0x7efd,	// (0x0004f0bd) icf_edit_indi_pane_g1

0xebc9,	// (0x00055d89) icf_edit_indi_pane_g2_ParamLimits

0xebc9,	// (0x00055d89) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x000570d2) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x000570d2) icf_edit_indi_pane_g

0xebdd,	// (0x00055d9d) icf_edit_indi_pane_t1

0x8e1a,	// (0x0004ffda) bg_input_focus_pane_cp042

0xada0,	// (0x00051f60) vtchi_button_pane

0x8e23,	// (0x0004ffe3) vtchi_query_pane_t1

0x8e31,	// (0x0004fff1) vtchi_query_pane_t2

0x8e3f,	// (0x0004ffff) vtchi_query_pane_t3

0x0002,

0xff01,	// (0x000570c1) vtchi_query_pane_t

0xa1ed,	// (0x000513ad) bg_button_pane_cp13

0x8e4d,	// (0x0005000d) vtchi_button_pane_g1

0x2532,	// (0x000496f2) ituss_sks_pane_g1

0x253d,	// (0x000496fd) ituss_sks_pane_g2

0x0001,

0xff08,	// (0x000570c8) ituss_sks_pane_g

0x8e55,	// (0x00050015) ituss_sks_pane_t1

0x8e63,	// (0x00050023) ituss_sks_pane_t2

0x0001,

0xff0d,	// (0x000570cd) ituss_sks_pane_t

0x54c3,	// (0x0004c683) indicator_nsta_pane_cp_g1

0x54cc,	// (0x0004c68c) indicator_nsta_pane_cp_g2

0x54d4,	// (0x0004c694) indicator_nsta_pane_cp_g3

0x54dc,	// (0x0004c69c) indicator_nsta_pane_cp_g4

0x54cc,	// (0x0004c68c) indicator_nsta_pane_cp_g5

0x54d4,	// (0x0004c694) indicator_nsta_pane_cp_g6

0x0005,

0xfa91,	// (0x00056c51) indicator_nsta_pane_cp_g

0xe03b,	// (0x000551fb) cell_graphic2_pane_t2_ParamLimits

0xe03b,	// (0x000551fb) cell_graphic2_pane_t2

0x0001,

0xfd9e,	// (0x00056f5e) cell_graphic2_pane_t_ParamLimits

0xfd9e,	// (0x00056f5e) cell_graphic2_pane_t

0xe073,	// (0x00055233) cell_graphic2_control_pane_t1

0xb173,	// (0x00052333) signal_pane_g3_ParamLimits

0xb173,	// (0x00052333) signal_pane_g3

0xb187,	// (0x00052347) signal_pane_g4_ParamLimits

0xb187,	// (0x00052347) signal_pane_g4

0xea2e,	// (0x00055bee) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xea2e,	// (0x00055bee) cell_ai5_widget_list_row_pane_t3

0x8d29,	// (0x0004fee9) cell_ituss_key_pane_t1_ParamLimits

0x8d29,	// (0x0004fee9) cell_ituss_key_pane_t1

0x34f6,	// (0x0004a6b6) form_field_data_wide_pane_vc_t2_ParamLimits

0x34f6,	// (0x0004a6b6) form_field_data_wide_pane_vc_t2

0x350a,	// (0x0004a6ca) form_field_data_wide_pane_vc_t3_ParamLimits

0x350a,	// (0x0004a6ca) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x000569a4) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x000569a4) form_field_data_wide_pane_vc_t

0x5160,	// (0x0004c320) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5160,	// (0x0004c320) form_field_slider_wide_pane_vc_t3

0x5236,	// (0x0004c3f6) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5236,	// (0x0004c3f6) form_field_popup_wide_pane_vc_t2

0x524d,	// (0x0004c40d) form_field_popup_wide_pane_vc_t3_ParamLimits

0x524d,	// (0x0004c40d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa80,	// (0x00056c40) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x00056c40) form_field_popup_wide_pane_vc_t

0xc4ef,	// (0x000536af) aid_fshwr2_btn_pane_ParamLimits

0xc503,	// (0x000536c3) aid_fshwr2_syb_pane_ParamLimits

0xc517,	// (0x000536d7) aid_fshwr2_txt_pane_ParamLimits

0xae85,	// (0x00052045) fshwr2_bg_pane_ParamLimits

0xc527,	// (0x000536e7) fshwr2_func_candi_pane_ParamLimits

0xc549,	// (0x00053709) fshwr2_hwr_syb_pane_ParamLimits

0xc56d,	// (0x0005372d) fshwr2_icf_pane_ParamLimits

0xf0d3,	// (0x00056293) list_double_graphic_pane_vc_g4_ParamLimits

0xf0d3,	// (0x00056293) list_double_graphic_pane_vc_g4

0x2420,	// (0x000495e0) cell_ituss_key_pane_g3_ParamLimits

0x2420,	// (0x000495e0) cell_ituss_key_pane_g3

0x2520,	// (0x000496e0) cell_ituss_key_t5_ParamLimits

0x2520,	// (0x000496e0) cell_ituss_key_t5

0xea6e,	// (0x00055c2e) popup_fep_vkbss_window_ParamLimits

0xe233,	// (0x000553f3) aid_cell_ai5_quarter

0xebdd,	// (0x00055d9d) icf_edit_indi_pane_t1_ParamLimits

0xa8ff,	// (0x00051abf) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xa8ff,	// (0x00051abf) aid_tch_indicator_popup_pane_cp2

0xa912,	// (0x00051ad2) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xa912,	// (0x00051ad2) aid_tch_query_popup_data_pane_cp2

0x3837,	// (0x0004a9f7) aid_tch_query_popup_pane_ParamLimits

0x3837,	// (0x0004a9f7) aid_tch_query_popup_pane

0x3837,	// (0x0004a9f7) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3837,	// (0x0004a9f7) aid_tch_query_popup_data_pane_cp1

0x2ebb,	// (0x0004a07b) cell_fshwr2_syb_bg_pane_ParamLimits

0xc662,	// (0x00053822) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc676,	// (0x00053836) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xea5f,	// (0x00055c1f) popup_fep_vkb_icf_pane_ParamLimits

0xc483,	// (0x00053643) bg_popup_fep_char_preview_window_g10

0xe2d6,	// (0x00055496) cell_ai5_widget_pane_g11_ParamLimits

0xe2d6,	// (0x00055496) cell_ai5_widget_pane_g11

0x81a6,	// (0x0004f366) cell_ai5_widget_pane_g12_ParamLimits

0x81a6,	// (0x0004f366) cell_ai5_widget_pane_g12

0xe2e2,	// (0x000554a2) cell_ai5_widget_pane_g13_ParamLimits

0xe2e2,	// (0x000554a2) cell_ai5_widget_pane_g13

0xe39f,	// (0x0005555f) cell_ai5_widget_pane_t11_ParamLimits

0xe39f,	// (0x0005555f) cell_ai5_widget_pane_t11

0xe3b1,	// (0x00055571) cell_ai5_widget_pane_t12_ParamLimits

0xe3b1,	// (0x00055571) cell_ai5_widget_pane_t12

0x242c,	// (0x000495ec) cell_ituss_key_pane_g4_ParamLimits

0x242c,	// (0x000495ec) cell_ituss_key_pane_g4

0x2448,	// (0x00049608) cell_ituss_key_pane_g5_ParamLimits

0x2448,	// (0x00049608) cell_ituss_key_pane_g5

0x2464,	// (0x00049624) cell_ituss_key_pane_g6_ParamLimits

0x2464,	// (0x00049624) cell_ituss_key_pane_g6

0x33f1,	// (0x0004a5b1) bg_icf_pane_g1

0xeb66,	// (0x00055d26) bg_icf_pane_g2

0xeb70,	// (0x00055d30) bg_icf_pane_g3

0xeb78,	// (0x00055d38) bg_icf_pane_g4

0xeb82,	// (0x00055d42) bg_icf_pane_g5

0xeb8c,	// (0x00055d4c) bg_icf_pane_g6

0xeb96,	// (0x00055d56) bg_icf_pane_g7

0xeb9e,	// (0x00055d5e) bg_icf_pane_g8

0xeba8,	// (0x00055d68) bg_icf_pane_g9

0x0008,

0xfeee,	// (0x000570ae) bg_icf_pane_g

0x8c16,	// (0x0004fdd6) popup_hyb_candi_window_ParamLimits

0x8c16,	// (0x0004fdd6) popup_hyb_candi_window

0x3465,	// (0x0004a625) bg_popup_sub_pane_cp01_ParamLimits

0x3465,	// (0x0004a625) bg_popup_sub_pane_cp01

0x8e9e,	// (0x0005005e) entry_hyb_candi_pane_ParamLimits

0x8e9e,	// (0x0005005e) entry_hyb_candi_pane

0x8ead,	// (0x0005006d) grid_hyb_candi_pane_ParamLimits

0x8ead,	// (0x0005006d) grid_hyb_candi_pane

0x8ec2,	// (0x00050082) grid_hyb_phrase_pane_ParamLimits

0x8ec2,	// (0x00050082) grid_hyb_phrase_pane

0x8ed1,	// (0x00050091) cell_hyb_candi_pane_ParamLimits

0x8ed1,	// (0x00050091) cell_hyb_candi_pane

0xada9,	// (0x00051f69) cell_hyb_candi_scroll_pane

0x2588,	// (0x00049748) cell_hyb_candi_pane_g1

0x8eed,	// (0x000500ad) cell_hyb_candi_pane_t1

0x8efb,	// (0x000500bb) cell_hyb_phrase_pane

0x2588,	// (0x00049748) cell_hyb_phrase_pane_g1

0x8f04,	// (0x000500c4) cell_hyb_phrase_pane_t1

0x8f12,	// (0x000500d2) entry_hyb_candi_pane_t1

0x2b94,	// (0x00049d54) input_focus_pane_cp06

0x8f20,	// (0x000500e0) cell_hyb_candi_scroll_pane_g1

0x8f28,	// (0x000500e8) cell_hyb_candi_scroll_pane_g1_aid

0x8f30,	// (0x000500f0) cell_hyb_candi_scroll_pane_g2

0x8f38,	// (0x000500f8) cell_hyb_candi_scroll_pane_g2_aid

0x8f40,	// (0x00050100) cell_hyb_candi_scroll_pane_g3

0x8f48,	// (0x00050108) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
