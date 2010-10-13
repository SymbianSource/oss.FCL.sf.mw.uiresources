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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00039464 };

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
0x85a6,	// (0x00041a0a) Screen

0x85b2,	// (0x00041a16) application_window_ParamLimits

0x85b2,	// (0x00041a16) application_window

0xb4ca,	// (0x0004492e) screen_g1

0x85ea,	// (0x00041a4e) area_bottom_pane_ParamLimits

0x85ea,	// (0x00041a4e) area_bottom_pane

0x86a8,	// (0x00041b0c) area_top_pane_ParamLimits

0x86a8,	// (0x00041b0c) area_top_pane

0x873c,	// (0x00041ba0) main_pane_ParamLimits

0x873c,	// (0x00041ba0) main_pane

0xb4d4,	// (0x00044938) misc_graphics

0xa384,	// (0x000437e8) battery_pane_ParamLimits

0xa384,	// (0x000437e8) battery_pane

0x28f4,	// (0x0003bd58) bg_status_flat_pane_g8

0x28fc,	// (0x0003bd60) bg_status_flat_pane_g9

0x04ab,	// (0x0003990f) context_pane_ParamLimits

0x04ab,	// (0x0003990f) context_pane

0xa4ef,	// (0x00043953) navi_pane_ParamLimits

0xa4ef,	// (0x00043953) navi_pane

0xa56d,	// (0x000439d1) signal_pane_ParamLimits

0xa56d,	// (0x000439d1) signal_pane

0x0008,

0xf840,	// (0x00048ca4) bg_status_flat_pane_g

0xa5fd,	// (0x00043a61) status_pane_g1_ParamLimits

0xa5fd,	// (0x00043a61) status_pane_g1

0xa613,	// (0x00043a77) status_pane_g2_ParamLimits

0xa613,	// (0x00043a77) status_pane_g2

0x1ef5,	// (0x0003b359) status_pane_g3_ParamLimits

0x1ef5,	// (0x0003b359) status_pane_g3

0x0004,

0xf76c,	// (0x00048bd0) status_pane_g_ParamLimits

0xf76c,	// (0x00048bd0) status_pane_g

0xa61f,	// (0x00043a83) title_pane_ParamLimits

0xa61f,	// (0x00043a83) title_pane

0xa682,	// (0x00043ae6) uni_indicator_pane_ParamLimits

0xa682,	// (0x00043ae6) uni_indicator_pane

0xc30e,	// (0x00045772) bg_list_pane_ParamLimits

0xc30e,	// (0x00045772) bg_list_pane

0x9b72,	// (0x00042fd6) find_pane

0x2109,	// (0x0003b56d) listscroll_app_pane_ParamLimits

0x2109,	// (0x0003b56d) listscroll_app_pane

0xc32e,	// (0x00045792) listscroll_form_pane

0x9b7a,	// (0x00042fde) listscroll_gen_pane_ParamLimits

0x9b7a,	// (0x00042fde) listscroll_gen_pane

0xf4c5,	// (0x00048929) listscroll_set_pane

0x3458,	// (0x0003c8bc) main_idle_act_pane

0xc1a2,	// (0x00045606) main_idle_trad_pane

0xc1a2,	// (0x00045606) main_list_empty_pane

0xba28,	// (0x00044e8c) main_midp_pane

0xc348,	// (0x000457ac) main_pane_g1_ParamLimits

0xc348,	// (0x000457ac) main_pane_g1

0x9b8e,	// (0x00042ff2) popup_ai_message_window_ParamLimits

0x9b8e,	// (0x00042ff2) popup_ai_message_window

0x9c3f,	// (0x000430a3) popup_fep_china_uni_window_ParamLimits

0x9c3f,	// (0x000430a3) popup_fep_china_uni_window

0x9c99,	// (0x000430fd) popup_fep_japan_candidate_window_ParamLimits

0x9c99,	// (0x000430fd) popup_fep_japan_candidate_window

0x9cb7,	// (0x0004311b) popup_fep_japan_predictive_window_ParamLimits

0x9cb7,	// (0x0004311b) popup_fep_japan_predictive_window

0x9cc9,	// (0x0004312d) popup_find_window

0x9ce6,	// (0x0004314a) popup_grid_graphic_window_ParamLimits

0x9ce6,	// (0x0004314a) popup_grid_graphic_window

0xf503,	// (0x00048967) popup_large_graphic_colour_window

0x9d84,	// (0x000431e8) popup_menu_window_ParamLimits

0x9d84,	// (0x000431e8) popup_menu_window

0x9f56,	// (0x000433ba) popup_note_image_window

0x9f1c,	// (0x00043380) popup_note_wait_window_ParamLimits

0x9f1c,	// (0x00043380) popup_note_wait_window

0x9f6e,	// (0x000433d2) popup_note_window_ParamLimits

0x9f6e,	// (0x000433d2) popup_note_window

0xa01d,	// (0x00043481) popup_query_code_window_ParamLimits

0xa01d,	// (0x00043481) popup_query_code_window

0xa057,	// (0x000434bb) popup_query_data_code_window_ParamLimits

0xa057,	// (0x000434bb) popup_query_data_code_window

0xa074,	// (0x000434d8) popup_query_data_window_ParamLimits

0xa074,	// (0x000434d8) popup_query_data_window

0xa0f6,	// (0x0004355a) popup_query_sat_info_window_ParamLimits

0xa0f6,	// (0x0004355a) popup_query_sat_info_window

0xa18d,	// (0x000435f1) popup_snote_single_graphic_window_ParamLimits

0xa18d,	// (0x000435f1) popup_snote_single_graphic_window

0xa18d,	// (0x000435f1) popup_snote_single_text_window_ParamLimits

0xa18d,	// (0x000435f1) popup_snote_single_text_window

0x0222,	// (0x00039686) popup_sub_window_general

0xa2ea,	// (0x0004374e) popup_window_general_ParamLimits

0xa2ea,	// (0x0004374e) popup_window_general

0x0367,	// (0x000397cb) power_save_pane

0x99cc,	// (0x00042e30) control_pane_g1_ParamLimits

0x99cc,	// (0x00042e30) control_pane_g1

0x99f5,	// (0x00042e59) control_pane_g2_ParamLimits

0x99f5,	// (0x00042e59) control_pane_g2

0xc2f8,	// (0x0004575c) control_pane_g3_ParamLimits

0xc2f8,	// (0x0004575c) control_pane_g3

0x0007,

0xf754,	// (0x00048bb8) control_pane_g_ParamLimits

0xf754,	// (0x00048bb8) control_pane_g

0x9a5d,	// (0x00042ec1) control_pane_t1_ParamLimits

0x9a5d,	// (0x00042ec1) control_pane_t1

0x9ac5,	// (0x00042f29) control_pane_t2_ParamLimits

0x9ac5,	// (0x00042f29) control_pane_t2

0x0002,

0xf765,	// (0x00048bc9) control_pane_t_ParamLimits

0xf765,	// (0x00048bc9) control_pane_t

0x9943,	// (0x00042da7) navi_navi_volume_pane_cp1

0x994b,	// (0x00042daf) status_small_icon_pane

0xc2a4,	// (0x00045708) status_small_pane_g1_ParamLimits

0xc2a4,	// (0x00045708) status_small_pane_g1

0x9953,	// (0x00042db7) status_small_pane_g2_ParamLimits

0x9953,	// (0x00042db7) status_small_pane_g2

0xc2d8,	// (0x0004573c) status_small_pane_g3_ParamLimits

0xc2d8,	// (0x0004573c) status_small_pane_g3

0x995f,	// (0x00042dc3) status_small_pane_g4_ParamLimits

0x995f,	// (0x00042dc3) status_small_pane_g4

0x996d,	// (0x00042dd1) status_small_pane_g5_ParamLimits

0x996d,	// (0x00042dd1) status_small_pane_g5

0x997b,	// (0x00042ddf) status_small_pane_g6_ParamLimits

0x997b,	// (0x00042ddf) status_small_pane_g6

0x0007,

0xf743,	// (0x00048ba7) status_small_pane_g_ParamLimits

0xf743,	// (0x00048ba7) status_small_pane_g

0x9996,	// (0x00042dfa) status_small_pane_t1

0x99b8,	// (0x00042e1c) status_small_wait_pane_ParamLimits

0x99b8,	// (0x00042e1c) status_small_wait_pane

0x9659,	// (0x00042abd) aid_levels_signal_ParamLimits

0x9659,	// (0x00042abd) aid_levels_signal

0x9671,	// (0x00042ad5) signal_pane_g1_ParamLimits

0x9671,	// (0x00042ad5) signal_pane_g1

0x968c,	// (0x00042af0) signal_pane_g2_ParamLimits

0x968c,	// (0x00042af0) signal_pane_g2

0x0003,

0xf6d4,	// (0x00048b38) signal_pane_g_ParamLimits

0xf6d4,	// (0x00048b38) signal_pane_g

0xbd90,	// (0x000451f4) context_pane_g1

0x8937,	// (0x00041d9b) title_pane_g1

0x896e,	// (0x00041dd2) title_pane_t1

0xb4ea,	// (0x0004494e) title_pane_t2

0xb510,	// (0x00044974) title_pane_t3

0x0002,

0xf532,	// (0x00048996) title_pane_t

0xa6aa,	// (0x00043b0e) aid_levels_battery_ParamLimits

0xa6aa,	// (0x00043b0e) aid_levels_battery

0xa6c6,	// (0x00043b2a) battery_pane_g1_ParamLimits

0xa6c6,	// (0x00043b2a) battery_pane_g1

0xa6e3,	// (0x00043b47) battery_pane_g2_ParamLimits

0xa6e3,	// (0x00043b47) battery_pane_g2

0x0001,

0xf777,	// (0x00048bdb) battery_pane_g_ParamLimits

0xf777,	// (0x00048bdb) battery_pane_g

0xc717,	// (0x00045b7b) uni_indicator_pane_g1

0xc72d,	// (0x00045b91) uni_indicator_pane_g2

0xc743,	// (0x00045ba7) uni_indicator_pane_g3

0x0005,

0xf8e8,	// (0x00048d4c) uni_indicator_pane_g

0xc039,	// (0x0004549d) navi_icon_pane_ParamLimits

0xc039,	// (0x0004549d) navi_icon_pane

0xbf82,	// (0x000453e6) navi_midp_pane

0xc055,	// (0x000454b9) navi_navi_pane

0xc05f,	// (0x000454c3) navi_text_pane_ParamLimits

0xc05f,	// (0x000454c3) navi_text_pane

0xb4ca,	// (0x0004492e) status_small_wait_pane_g1

0xb761,	// (0x00044bc5) status_small_wait_pane_g2

0x0001,

0xf8e3,	// (0x00048d47) status_small_wait_pane_g

0xc670,	// (0x00045ad4) navi_navi_icon_text_pane

0x2f47,	// (0x0003c3ab) navi_navi_pane_g1_ParamLimits

0x2f47,	// (0x0003c3ab) navi_navi_pane_g1

0x2f59,	// (0x0003c3bd) navi_navi_pane_g2_ParamLimits

0x2f59,	// (0x0003c3bd) navi_navi_pane_g2

0x0001,

0xf8b1,	// (0x00048d15) navi_navi_pane_g_ParamLimits

0xf8b1,	// (0x00048d15) navi_navi_pane_g

0x2f6b,	// (0x0003c3cf) navi_navi_tabs_pane

0x2f74,	// (0x0003c3d8) navi_navi_text_pane

0xc670,	// (0x00045ad4) navi_navi_volume_pane

0x2f1b,	// (0x0003c37f) navi_text_pane_t1

0x2f0f,	// (0x0003c373) navi_icon_pane_g1

0x2e62,	// (0x0003c2c6) navi_navi_text_pane_t1

0xa9a8,	// (0x00043e0c) navi_navi_volume_pane_g1

0x0960,	// (0x00039dc4) volume_small_pane

0x2dc8,	// (0x0003c22c) navi_navi_icon_text_pane_g1

0xc5c8,	// (0x00045a2c) navi_navi_icon_text_pane_t1

0xc055,	// (0x000454b9) navi_tabs_2_long_pane

0xc055,	// (0x000454b9) navi_tabs_2_pane

0xc055,	// (0x000454b9) navi_tabs_3_long_pane

0xc055,	// (0x000454b9) navi_tabs_3_pane

0xc055,	// (0x000454b9) navi_tabs_4_pane

0x0938,	// (0x00039d9c) tabs_2_active_pane_ParamLimits

0x0938,	// (0x00039d9c) tabs_2_active_pane

0x0948,	// (0x00039dac) tabs_2_passive_pane_ParamLimits

0x0948,	// (0x00039dac) tabs_2_passive_pane

0x0906,	// (0x00039d6a) tabs_3_active_pane_ParamLimits

0x0906,	// (0x00039d6a) tabs_3_active_pane

0x0916,	// (0x00039d7a) tabs_3_passive_pane_ParamLimits

0x0916,	// (0x00039d7a) tabs_3_passive_pane

0x0927,	// (0x00039d8b) tabs_3_passive_pane_cp_ParamLimits

0x0927,	// (0x00039d8b) tabs_3_passive_pane_cp

0x08c2,	// (0x00039d26) tabs_4_active_pane_ParamLimits

0x08c2,	// (0x00039d26) tabs_4_active_pane

0x08d3,	// (0x00039d37) tabs_4_passive_pane_ParamLimits

0x08d3,	// (0x00039d37) tabs_4_passive_pane

0x08e4,	// (0x00039d48) tabs_4_passive_pane_cp_ParamLimits

0x08e4,	// (0x00039d48) tabs_4_passive_pane_cp

0x08f5,	// (0x00039d59) tabs_4_passive_pane_cp2_ParamLimits

0x08f5,	// (0x00039d59) tabs_4_passive_pane_cp2

0x089e,	// (0x00039d02) tabs_2_long_active_pane_ParamLimits

0x089e,	// (0x00039d02) tabs_2_long_active_pane

0x08b0,	// (0x00039d14) tabs_2_long_passive_pane_ParamLimits

0x08b0,	// (0x00039d14) tabs_2_long_passive_pane

0x0859,	// (0x00039cbd) tabs_3_long_active_pane_ParamLimits

0x0859,	// (0x00039cbd) tabs_3_long_active_pane

0x0872,	// (0x00039cd6) tabs_3_long_passive_pane_ParamLimits

0x0872,	// (0x00039cd6) tabs_3_long_passive_pane

0x0885,	// (0x00039ce9) tabs_3_long_passive_pane_cp_ParamLimits

0x0885,	// (0x00039ce9) tabs_3_long_passive_pane_cp

0x07ff,	// (0x00039c63) volume_small_pane_g1

0x0808,	// (0x00039c6c) volume_small_pane_g2

0x0811,	// (0x00039c75) volume_small_pane_g3

0x081a,	// (0x00039c7e) volume_small_pane_g4

0x0823,	// (0x00039c87) volume_small_pane_g5

0x082c,	// (0x00039c90) volume_small_pane_g6

0x0835,	// (0x00039c99) volume_small_pane_g7

0x083e,	// (0x00039ca2) volume_small_pane_g8

0x0847,	// (0x00039cab) volume_small_pane_g9

0x0850,	// (0x00039cb4) volume_small_pane_g10

0x0009,

0xf87d,	// (0x00048ce1) volume_small_pane_g

0xb522,	// (0x00044986) bg_active_tab_pane_cp2_ParamLimits

0xb522,	// (0x00044986) bg_active_tab_pane_cp2

0x89fa,	// (0x00041e5e) tabs_3_active_pane_g1

0x8a02,	// (0x00041e66) tabs_3_active_pane_t1

0xb522,	// (0x00044986) bg_passive_tab_pane_cp2_ParamLimits

0xb522,	// (0x00044986) bg_passive_tab_pane_cp2

0x89fa,	// (0x00041e5e) tabs_3_passive_pane_g1

0x8a02,	// (0x00041e66) tabs_3_passive_pane_t1

0xb522,	// (0x00044986) bg_active_tab_pane_cp3_ParamLimits

0xb522,	// (0x00044986) bg_active_tab_pane_cp3

0x8a14,	// (0x00041e78) tabs_4_active_pane_g1

0x8a1c,	// (0x00041e80) tabs_4_active_pane_t1

0xb522,	// (0x00044986) bg_passive_tab_pane_cp3_ParamLimits

0xb522,	// (0x00044986) bg_passive_tab_pane_cp3

0x8a14,	// (0x00041e78) tabs_4_1_passive_pane_g1

0x8a1c,	// (0x00041e80) tabs_4_1_passive_pane_t1

0xba28,	// (0x00044e8c) list_highlight_pane_cp2

0xc851,	// (0x00045cb5) list_set_pane_ParamLimits

0xc851,	// (0x00045cb5) list_set_pane

0xc8eb,	// (0x00045d4f) main_pane_set_t1_ParamLimits

0xc8eb,	// (0x00045d4f) main_pane_set_t1

0xc90b,	// (0x00045d6f) main_pane_set_t2_ParamLimits

0xc90b,	// (0x00045d6f) main_pane_set_t2

0xc91f,	// (0x00045d83) main_pane_set_t3_ParamLimits

0xc91f,	// (0x00045d83) main_pane_set_t3

0xc931,	// (0x00045d95) main_pane_set_t4_ParamLimits

0xc931,	// (0x00045d95) main_pane_set_t4

0x0003,

0xf94d,	// (0x00048db1) main_pane_set_t_ParamLimits

0xf94d,	// (0x00048db1) main_pane_set_t

0xc943,	// (0x00045da7) setting_code_pane

0xc94d,	// (0x00045db1) setting_slider_graphic_pane

0xc94d,	// (0x00045db1) setting_slider_pane

0xc94d,	// (0x00045db1) setting_text_pane

0xc94d,	// (0x00045db1) setting_volume_pane

0x8a2e,	// (0x00041e92) volume_set_pane

0xb530,	// (0x00044994) bg_set_opt_pane_cp

0x8a36,	// (0x00041e9a) setting_slider_pane_t1

0x8a4f,	// (0x00041eb3) setting_slider_pane_t2

0x8a69,	// (0x00041ecd) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0004899d) setting_slider_pane_t

0x8a81,	// (0x00041ee5) slider_set_pane

0xb4d4,	// (0x00044938) bg_set_opt_pane_cp2

0xb53e,	// (0x000449a2) setting_slider_graphic_pane_g1

0x8a97,	// (0x00041efb) setting_slider_graphic_pane_t1

0x8aa7,	// (0x00041f0b) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x000489a4) setting_slider_graphic_pane_t

0x8ab7,	// (0x00041f1b) slider_set_pane_cp

0xb4d4,	// (0x00044938) input_focus_pane_cp1

0x343f,	// (0x0003c8a3) list_set_text_pane

0xb4ca,	// (0x0004492e) setting_text_pane_g1

0xb4d4,	// (0x00044938) input_focus_pane_cp2

0xb4ca,	// (0x0004492e) setting_code_pane_g1

0xb547,	// (0x000449ab) setting_code_pane_t1

0xdb29,	// (0x00046f8d) set_text_pane_t1_ParamLimits

0xdb29,	// (0x00046f8d) set_text_pane_t1

0xb93e,	// (0x00044da2) set_opt_bg_pane_g1

0xb946,	// (0x00044daa) set_opt_bg_pane_g2

0xc806,	// (0x00045c6a) set_opt_bg_pane_g3

0xb956,	// (0x00044dba) set_opt_bg_pane_g4

0xb95e,	// (0x00044dc2) set_opt_bg_pane_g5

0xb966,	// (0x00044dca) set_opt_bg_pane_g6

0xc810,	// (0x00045c74) set_opt_bg_pane_g7

0xc818,	// (0x00045c7c) set_opt_bg_pane_g8

0xc822,	// (0x00045c86) set_opt_bg_pane_g9

0x0008,

0xf93a,	// (0x00048d9e) set_opt_bg_pane_g

0xc7f9,	// (0x00045c5d) slider_set_pane_g1

0x09df,	// (0x00039e43) slider_set_pane_g2

0x0006,

0xf92b,	// (0x00048d8f) slider_set_pane_g

0xa9b0,	// (0x00043e14) volume_set_pane_g1

0xa9b8,	// (0x00043e1c) volume_set_pane_g2

0xa9c0,	// (0x00043e24) volume_set_pane_g3

0xa9c8,	// (0x00043e2c) volume_set_pane_g4

0xa9d0,	// (0x00043e34) volume_set_pane_g5

0xa9d8,	// (0x00043e3c) volume_set_pane_g6

0xa9e0,	// (0x00043e44) volume_set_pane_g7

0xa9e8,	// (0x00043e4c) volume_set_pane_g8

0xa9f0,	// (0x00043e54) volume_set_pane_g9

0xa9f8,	// (0x00043e5c) volume_set_pane_g10

0x0009,

0xf903,	// (0x00048d67) volume_set_pane_g

0x8abf,	// (0x00041f23) indicator_pane_ParamLimits

0x8abf,	// (0x00041f23) indicator_pane

0x8ae7,	// (0x00041f4b) main_idle_pane_g2_ParamLimits

0x8ae7,	// (0x00041f4b) main_idle_pane_g2

0x8b1f,	// (0x00041f83) main_pane_idle_g1_ParamLimits

0x8b1f,	// (0x00041f83) main_pane_idle_g1

0xb555,	// (0x000449b9) popup_clock_digital_analogue_window_ParamLimits

0xb555,	// (0x000449b9) popup_clock_digital_analogue_window

0x8b46,	// (0x00041faa) soft_indicator_pane_ParamLimits

0x8b46,	// (0x00041faa) soft_indicator_pane

0x8b6a,	// (0x00041fce) wallpaper_pane_ParamLimits

0x8b6a,	// (0x00041fce) wallpaper_pane

0xb4ca,	// (0x0004492e) wallpaper_pane_g1

0x8b7c,	// (0x00041fe0) indicator_pane_g1_ParamLimits

0x8b7c,	// (0x00041fe0) indicator_pane_g1

0x3852,	// (0x0003ccb6) navi_navi_icon_text_pane_srt_g1

0xb583,	// (0x000449e7) soft_indicator_pane_t1

0xb59d,	// (0x00044a01) aid_ps_area_pane

0x8b92,	// (0x00041ff6) aid_ps_clock_pane

0xb5ae,	// (0x00044a12) aid_ps_indicator_pane

0xb5ba,	// (0x00044a1e) indicator_ps_pane_ParamLimits

0xb5ba,	// (0x00044a1e) indicator_ps_pane

0xb5c9,	// (0x00044a2d) power_save_pane_g1_ParamLimits

0xb5c9,	// (0x00044a2d) power_save_pane_g1

0xb5d5,	// (0x00044a39) power_save_pane_g2_ParamLimits

0xb5d5,	// (0x00044a39) power_save_pane_g2

0xdaff,	// (0x00046f63) aid_navinavi_width_pane

0xb59d,	// (0x00044a01) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x000489a9) power_save_pane_g_ParamLimits

0xf545,	// (0x000489a9) power_save_pane_g

0xb5e3,	// (0x00044a47) power_save_pane_t1_ParamLimits

0xb5e3,	// (0x00044a47) power_save_pane_t1

0x8b92,	// (0x00041ff6) aid_ps_clock_pane_ParamLimits

0xb5ae,	// (0x00044a12) aid_ps_indicator_pane_ParamLimits

0xb5f5,	// (0x00044a59) power_save_pane_t4_ParamLimits

0xb5f5,	// (0x00044a59) power_save_pane_t4

0x0001,

0xf54a,	// (0x000489ae) power_save_pane_t_ParamLimits

0xf54a,	// (0x000489ae) power_save_pane_t

0xb61f,	// (0x00044a83) power_save_t3_ParamLimits

0xb61f,	// (0x00044a83) power_save_t3

0xb60a,	// (0x00044a6e) power_save_t2_ParamLimits

0xb60a,	// (0x00044a6e) power_save_t2

0xb634,	// (0x00044a98) indicator_ps_pane_g1

0x8ba0,	// (0x00042004) ai_gene_pane_ParamLimits

0x8ba0,	// (0x00042004) ai_gene_pane

0x8bb7,	// (0x0004201b) ai_links_pane_ParamLimits

0x8bb7,	// (0x0004201b) ai_links_pane

0x8bcf,	// (0x00042033) indicator_pane_cp1_ParamLimits

0x8bcf,	// (0x00042033) indicator_pane_cp1

0x8bde,	// (0x00042042) main_pane_idle_g1_cp_ParamLimits

0x8bde,	// (0x00042042) main_pane_idle_g1_cp

0x8bf6,	// (0x0004205a) popup_ai_links_title_window

0x8bff,	// (0x00042063) soft_indicator_pane_cp1_ParamLimits

0x8bff,	// (0x00042063) soft_indicator_pane_cp1

0x3206,	// (0x0003c66a) ai_links_pane_g1

0x320f,	// (0x0003c673) grid_ai_links_pane

0xc70e,	// (0x00045b72) ai_gene_pane_1

0x31f4,	// (0x0003c658) ai_gene_pane_2

0x31fd,	// (0x0003c661) list_highlight_pane_cp4

0xc6ea,	// (0x00045b4e) cell_ai_link_pane_ParamLimits

0xc6ea,	// (0x00045b4e) cell_ai_link_pane

0x31c5,	// (0x0003c629) cell_ai_link_pane_g1

0xb761,	// (0x00044bc5) cell_ai_link_pane_g2

0x0001,

0xf8de,	// (0x00048d42) cell_ai_link_pane_g

0xb4d4,	// (0x00044938) grid_highlight_cp2

0xb4d4,	// (0x00044938) bg_popup_sub_pane_cp1

0xb64b,	// (0x00044aaf) popup_ai_links_title_window_t1

0x3115,	// (0x0003c579) ai_gene_pane_1_g1_ParamLimits

0x3115,	// (0x0003c579) ai_gene_pane_1_g1

0x3121,	// (0x0003c585) ai_gene_pane_1_g2_ParamLimits

0x3121,	// (0x0003c585) ai_gene_pane_1_g2

0x0001,

0xf8d4,	// (0x00048d38) ai_gene_pane_1_g_ParamLimits

0xf8d4,	// (0x00048d38) ai_gene_pane_1_g

0x312e,	// (0x0003c592) ai_gene_pane_1_t1_ParamLimits

0x312e,	// (0x0003c592) ai_gene_pane_1_t1

0x3162,	// (0x0003c5c6) grid_ai_soft_ind_pane

0x3100,	// (0x0003c564) ai_gene_pane_2_t1_ParamLimits

0x3100,	// (0x0003c564) ai_gene_pane_2_t1

0x8c13,	// (0x00042077) main_pane_empty_t1_ParamLimits

0x8c13,	// (0x00042077) main_pane_empty_t1

0x8c2b,	// (0x0004208f) main_pane_empty_t2_ParamLimits

0x8c2b,	// (0x0004208f) main_pane_empty_t2

0x8c40,	// (0x000420a4) main_pane_empty_t3_ParamLimits

0x8c40,	// (0x000420a4) main_pane_empty_t3

0x8c52,	// (0x000420b6) main_pane_empty_t4_ParamLimits

0x8c52,	// (0x000420b6) main_pane_empty_t4

0x8c64,	// (0x000420c8) main_pane_empty_t5_ParamLimits

0x8c64,	// (0x000420c8) main_pane_empty_t5

0x0004,

0xf54f,	// (0x000489b3) main_pane_empty_t_ParamLimits

0xf54f,	// (0x000489b3) main_pane_empty_t

0xb9c3,	// (0x00044e27) bg_popup_window_pane_ParamLimits

0xb9c3,	// (0x00044e27) bg_popup_window_pane

0xc664,	// (0x00045ac8) find_popup_pane_cp2_ParamLimits

0xc664,	// (0x00045ac8) find_popup_pane_cp2

0x2e7c,	// (0x0003c2e0) heading_pane_ParamLimits

0x2e7c,	// (0x0003c2e0) heading_pane

0xb4d4,	// (0x00044938) bg_popup_sub_pane

0xc5e5,	// (0x00045a49) bg_popup_window_pane_g1_ParamLimits

0xc5e5,	// (0x00045a49) bg_popup_window_pane_g1

0xc5f4,	// (0x00045a58) bg_popup_window_pane_g2_ParamLimits

0xc5f4,	// (0x00045a58) bg_popup_window_pane_g2

0xc600,	// (0x00045a64) bg_popup_window_pane_g3_ParamLimits

0xc600,	// (0x00045a64) bg_popup_window_pane_g3

0xc60c,	// (0x00045a70) bg_popup_window_pane_g4_ParamLimits

0xc60c,	// (0x00045a70) bg_popup_window_pane_g4

0xc61b,	// (0x00045a7f) bg_popup_window_pane_g5_ParamLimits

0xc61b,	// (0x00045a7f) bg_popup_window_pane_g5

0xc62b,	// (0x00045a8f) bg_popup_window_pane_g6_ParamLimits

0xc62b,	// (0x00045a8f) bg_popup_window_pane_g6

0xc637,	// (0x00045a9b) bg_popup_window_pane_g7_ParamLimits

0xc637,	// (0x00045a9b) bg_popup_window_pane_g7

0xc646,	// (0x00045aaa) bg_popup_window_pane_g8_ParamLimits

0xc646,	// (0x00045aaa) bg_popup_window_pane_g8

0xc655,	// (0x00045ab9) bg_popup_window_pane_g9_ParamLimits

0xc655,	// (0x00045ab9) bg_popup_window_pane_g9

0x2e56,	// (0x0003c2ba) bg_popup_window_pane_g10_ParamLimits

0x2e56,	// (0x0003c2ba) bg_popup_window_pane_g10

0x0009,

0xf89c,	// (0x00048d00) bg_popup_window_pane_g_ParamLimits

0xf89c,	// (0x00048d00) bg_popup_window_pane_g

0x2d7f,	// (0x0003c1e3) bg_popup_heading_pane_ParamLimits

0x2d7f,	// (0x0003c1e3) bg_popup_heading_pane

0x0b30,	// (0x00039f94) tabs_4_passive_pane_cp_srt_ParamLimits

0x0b30,	// (0x00039f94) tabs_4_passive_pane_cp_srt

0x0b42,	// (0x00039fa6) tabs_4_passive_pane_srt_ParamLimits

0x2d93,	// (0x0003c1f7) heading_pane_g2

0x0b42,	// (0x00039fa6) tabs_4_passive_pane_srt

0x2109,	// (0x0003b56d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2109,	// (0x0003b56d) bg_passive_tab_pane_cp3_srt

0x2d9b,	// (0x0003c1ff) heading_pane_t1_ParamLimits

0x2d9b,	// (0x0003c1ff) heading_pane_t1

0x2db2,	// (0x0003c216) heading_pane_t2_ParamLimits

0x2db2,	// (0x0003c216) heading_pane_t2

0x0001,

0xf897,	// (0x00048cfb) heading_pane_t_ParamLimits

0xf897,	// (0x00048cfb) heading_pane_t

0x28bc,	// (0x0003bd20) bg_popup_heading_pane_g1

0x296b,	// (0x0003bdcf) bg_popup_heading_pane_g2

0x2975,	// (0x0003bdd9) bg_popup_heading_pane_g3

0x297f,	// (0x0003bde3) bg_popup_heading_pane_g4

0x2989,	// (0x0003bded) bg_popup_heading_pane_g5

0x2993,	// (0x0003bdf7) bg_popup_heading_pane_g6

0x299b,	// (0x0003bdff) bg_popup_heading_pane_g7

0x29a3,	// (0x0003be07) bg_popup_heading_pane_g8

0x29ad,	// (0x0003be11) bg_popup_heading_pane_g9

0x0008,

0xf853,	// (0x00048cb7) bg_popup_heading_pane_g

0x207d,	// (0x0003b4e1) bg_popup_sub_pane_g1

0x208d,	// (0x0003b4f1) bg_popup_sub_pane_g2

0x2085,	// (0x0003b4e9) bg_popup_sub_pane_g3

0x209d,	// (0x0003b501) bg_popup_sub_pane_g4

0x2095,	// (0x0003b4f9) bg_popup_sub_pane_g5

0x20a5,	// (0x0003b509) bg_popup_sub_pane_g6

0x20ad,	// (0x0003b511) bg_popup_sub_pane_g7

0x20bd,	// (0x0003b521) bg_popup_sub_pane_g8

0x20b5,	// (0x0003b519) bg_popup_sub_pane_g9

0x0008,

0xf82d,	// (0x00048c91) bg_popup_sub_pane_g

0xb522,	// (0x00044986) bg_popup_window_pane_cp5_ParamLimits

0xb522,	// (0x00044986) bg_popup_window_pane_cp5

0xb668,	// (0x00044acc) popup_note_window_g1_ParamLimits

0xb668,	// (0x00044acc) popup_note_window_g1

0xb674,	// (0x00044ad8) popup_note_window_t1_ParamLimits

0xb674,	// (0x00044ad8) popup_note_window_t1

0xb68a,	// (0x00044aee) popup_note_window_t2_ParamLimits

0xb68a,	// (0x00044aee) popup_note_window_t2

0xb6a0,	// (0x00044b04) popup_note_window_t3_ParamLimits

0xb6a0,	// (0x00044b04) popup_note_window_t3

0xb6b6,	// (0x00044b1a) popup_note_window_t4_ParamLimits

0xb6b6,	// (0x00044b1a) popup_note_window_t4

0xb6de,	// (0x00044b42) popup_note_window_t5_ParamLimits

0xb6de,	// (0x00044b42) popup_note_window_t5

0x0004,

0xf55a,	// (0x000489be) popup_note_window_t_ParamLimits

0xf55a,	// (0x000489be) popup_note_window_t

0xb702,	// (0x00044b66) bg_popup_window_pane_cp6_ParamLimits

0xb702,	// (0x00044b66) bg_popup_window_pane_cp6

0x2838,	// (0x0003bc9c) popup_note_image_window_g1_ParamLimits

0x2838,	// (0x0003bc9c) popup_note_image_window_g1

0xc48a,	// (0x000458ee) popup_note_image_window_g2_ParamLimits

0xc48a,	// (0x000458ee) popup_note_image_window_g2

0x0001,

0xf821,	// (0x00048c85) popup_note_image_window_g_ParamLimits

0xf821,	// (0x00048c85) popup_note_image_window_g

0x285d,	// (0x0003bcc1) popup_note_image_window_t1_ParamLimits

0x285d,	// (0x0003bcc1) popup_note_image_window_t1

0x2876,	// (0x0003bcda) popup_note_image_window_t2_ParamLimits

0x2876,	// (0x0003bcda) popup_note_image_window_t2

0x288f,	// (0x0003bcf3) popup_note_image_window_t3_ParamLimits

0x288f,	// (0x0003bcf3) popup_note_image_window_t3

0x0002,

0xf826,	// (0x00048c8a) popup_note_image_window_t_ParamLimits

0xf826,	// (0x00048c8a) popup_note_image_window_t

0x2701,	// (0x0003bb65) bg_popup_window_pane_cp7_ParamLimits

0x2701,	// (0x0003bb65) bg_popup_window_pane_cp7

0x2731,	// (0x0003bb95) popup_note_wait_window_g1_ParamLimits

0x2731,	// (0x0003bb95) popup_note_wait_window_g1

0x273d,	// (0x0003bba1) popup_note_wait_window_g2_ParamLimits

0x273d,	// (0x0003bba1) popup_note_wait_window_g2

0x0002,

0xf80f,	// (0x00048c73) popup_note_wait_window_g_ParamLimits

0xf80f,	// (0x00048c73) popup_note_wait_window_g

0x2755,	// (0x0003bbb9) popup_note_wait_window_t1_ParamLimits

0x2755,	// (0x0003bbb9) popup_note_wait_window_t1

0xc42b,	// (0x0004588f) popup_note_wait_window_t2_ParamLimits

0xc42b,	// (0x0004588f) popup_note_wait_window_t2

0xc448,	// (0x000458ac) popup_note_wait_window_t3_ParamLimits

0xc448,	// (0x000458ac) popup_note_wait_window_t3

0xc45b,	// (0x000458bf) popup_note_wait_window_t4_ParamLimits

0xc45b,	// (0x000458bf) popup_note_wait_window_t4

0x0004,

0xf816,	// (0x00048c7a) popup_note_wait_window_t_ParamLimits

0xf816,	// (0x00048c7a) popup_note_wait_window_t

0x27d1,	// (0x0003bc35) wait_bar_pane_ParamLimits

0x27d1,	// (0x0003bc35) wait_bar_pane

0xb4d4,	// (0x00044938) wait_anim_pane

0xb4d4,	// (0x00044938) wait_border_pane

0xb4ca,	// (0x0004492e) wait_anim_pane_g1

0xb4ca,	// (0x0004492e) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x00048b33) wait_anim_pane_g

0x26ad,	// (0x0003bb11) wait_border_pane_g1

0x26b8,	// (0x0003bb1c) wait_border_pane_g2

0x26c1,	// (0x0003bb25) wait_border_pane_g3

0x0002,

0xf808,	// (0x00048c6c) wait_border_pane_g

0x2518,	// (0x0003b97c) bg_popup_window_pane_cp16_ParamLimits

0x2518,	// (0x0003b97c) bg_popup_window_pane_cp16

0xc3db,	// (0x0004583f) indicator_popup_pane_cp4_ParamLimits

0xc3db,	// (0x0004583f) indicator_popup_pane_cp4

0x262c,	// (0x0003ba90) popup_query_data_window_t1_ParamLimits

0x262c,	// (0x0003ba90) popup_query_data_window_t1

0x263e,	// (0x0003baa2) popup_query_data_window_t2_ParamLimits

0x263e,	// (0x0003baa2) popup_query_data_window_t2

0x2657,	// (0x0003babb) popup_query_data_window_t3_ParamLimits

0x2657,	// (0x0003babb) popup_query_data_window_t3

0x0002,

0xf801,	// (0x00048c65) popup_query_data_window_t_ParamLimits

0xf801,	// (0x00048c65) popup_query_data_window_t

0xc3ef,	// (0x00045853) query_popup_data_pane_ParamLimits

0xc3ef,	// (0x00045853) query_popup_data_pane

0xc403,	// (0x00045867) query_popup_data_pane_cp1_ParamLimits

0xc403,	// (0x00045867) query_popup_data_pane_cp1

0x2518,	// (0x0003b97c) bg_popup_window_pane_cp10_ParamLimits

0x2518,	// (0x0003b97c) bg_popup_window_pane_cp10

0xc356,	// (0x000457ba) indicator_popup_pane_ParamLimits

0xc356,	// (0x000457ba) indicator_popup_pane

0xc378,	// (0x000457dc) popup_query_code_window_t1_ParamLimits

0xc378,	// (0x000457dc) popup_query_code_window_t1

0xc392,	// (0x000457f6) popup_query_code_window_t2_ParamLimits

0xc392,	// (0x000457f6) popup_query_code_window_t2

0x25cf,	// (0x0003ba33) popup_query_code_window_t3_ParamLimits

0x25cf,	// (0x0003ba33) popup_query_code_window_t3

0x0002,

0xf7fa,	// (0x00048c5e) popup_query_code_window_t_ParamLimits

0xf7fa,	// (0x00048c5e) popup_query_code_window_t

0x25fe,	// (0x0003ba62) query_popup_pane_ParamLimits

0x25fe,	// (0x0003ba62) query_popup_pane

0xb702,	// (0x00044b66) bg_popup_window_pane_cp15_ParamLimits

0xb702,	// (0x00044b66) bg_popup_window_pane_cp15

0x8c9c,	// (0x00042100) indicator_popup_pane_cp1_ParamLimits

0x8c9c,	// (0x00042100) indicator_popup_pane_cp1

0x8caf,	// (0x00042113) indicator_popup_pane_cp2_ParamLimits

0x8caf,	// (0x00042113) indicator_popup_pane_cp2

0x8cc2,	// (0x00042126) popup_query_data_code_window_g1_ParamLimits

0x8cc2,	// (0x00042126) popup_query_data_code_window_g1

0xb720,	// (0x00044b84) popup_query_data_code_window_t1_ParamLimits

0xb720,	// (0x00044b84) popup_query_data_code_window_t1

0xb732,	// (0x00044b96) popup_query_data_code_window_t2_ParamLimits

0xb732,	// (0x00044b96) popup_query_data_code_window_t2

0x8cd5,	// (0x00042139) popup_query_data_code_window_t3_ParamLimits

0x8cd5,	// (0x00042139) popup_query_data_code_window_t3

0x8ceb,	// (0x0004214f) popup_query_data_code_window_t4_ParamLimits

0x8ceb,	// (0x0004214f) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x000489c9) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x000489c9) popup_query_data_code_window_t

0x06dd,	// (0x00039b41) list_single_midp_graphic_pane_g3

0x8d03,	// (0x00042167) query_popup_data_pane_cp2_ParamLimits

0x8d16,	// (0x0004217a) query_popup_pane_cp2_ParamLimits

0x8d16,	// (0x0004217a) query_popup_pane_cp2

0xb4d4,	// (0x00044938) bg_popup_window_pane_cp11

0x24fc,	// (0x0003b960) heading_pane_cp5

0x2504,	// (0x0003b968) listscroll_popup_info_pane

0xb4d4,	// (0x00044938) input_focus_pane_cp3

0xb744,	// (0x00044ba8) query_popup_pane_t1

0xb752,	// (0x00044bb6) list_popup_info_pane_ParamLimits

0xb752,	// (0x00044bb6) list_popup_info_pane

0xb761,	// (0x00044bc5) listscroll_popup_info_pane_g1

0xb769,	// (0x00044bcd) scroll_pane_cp7

0x8d29,	// (0x0004218d) popup_info_list_pane_t1_ParamLimits

0x8d29,	// (0x0004218d) popup_info_list_pane_t1

0x8d43,	// (0x000421a7) popup_info_list_pane_t2_ParamLimits

0x8d43,	// (0x000421a7) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x000489d2) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x000489d2) popup_info_list_pane_t

0xb4d4,	// (0x00044938) bg_popup_window_pane_cp12

0xcaf2,	// (0x00045f56) find_popup_pane

0xb530,	// (0x00044994) bg_popup_window_pane_cp3

0xb773,	// (0x00044bd7) heading_pane_cp3

0xb782,	// (0x00044be6) listscroll_popup_graphic_pane

0xb4d4,	// (0x00044938) bg_popup_window_pane_cp4

0x8dad,	// (0x00042211) heading_pane_cp4

0xb792,	// (0x00044bf6) listscroll_popup_colour_pane

0x8db7,	// (0x0004221b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8db7,	// (0x0004221b) cell_large_graphic_colour_none_popup_pane

0x8dcb,	// (0x0004222f) grid_large_graphic_colour_popup_pane_ParamLimits

0x8dcb,	// (0x0004222f) grid_large_graphic_colour_popup_pane

0x8def,	// (0x00042253) listscroll_popup_colour_pane_g1_ParamLimits

0x8def,	// (0x00042253) listscroll_popup_colour_pane_g1

0x8e06,	// (0x0004226a) listscroll_popup_colour_pane_g2_ParamLimits

0x8e06,	// (0x0004226a) listscroll_popup_colour_pane_g2

0x8e1a,	// (0x0004227e) listscroll_popup_colour_pane_g3_ParamLimits

0x8e1a,	// (0x0004227e) listscroll_popup_colour_pane_g3

0x8e2a,	// (0x0004228e) listscroll_popup_colour_pane_g4_ParamLimits

0x8e2a,	// (0x0004228e) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x000489d7) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x000489d7) listscroll_popup_colour_pane_g

0xb79a,	// (0x00044bfe) scroll_pane_cp6_ParamLimits

0xb79a,	// (0x00044bfe) scroll_pane_cp6

0x8e3a,	// (0x0004229e) cell_large_graphic_colour_popup_pane_ParamLimits

0x8e3a,	// (0x0004229e) cell_large_graphic_colour_popup_pane

0x8e59,	// (0x000422bd) cell_large_graphic_colour_none_popup_pane_t1

0xb4d4,	// (0x00044938) grid_highlight_pane_cp5

0xb7ac,	// (0x00044c10) cell_large_graphic_colour_popup_pane_g1

0xb7b4,	// (0x00044c18) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x000489e0) cell_large_graphic_colour_popup_pane_g

0xb7bc,	// (0x00044c20) cell_large_graphic_colour_popup_pane_g2_copy1

0xb7c5,	// (0x00044c29) grid_highlight_pane_cp4

0xb7cd,	// (0x00044c31) bg_popup_window_pane_cp8_ParamLimits

0xb7cd,	// (0x00044c31) bg_popup_window_pane_cp8

0x8e68,	// (0x000422cc) popup_snote_single_text_window_g1_ParamLimits

0x8e68,	// (0x000422cc) popup_snote_single_text_window_g1

0x8e7a,	// (0x000422de) popup_snote_single_text_window_t1_ParamLimits

0x8e7a,	// (0x000422de) popup_snote_single_text_window_t1

0x8e8d,	// (0x000422f1) popup_snote_single_text_window_t2_ParamLimits

0x8e8d,	// (0x000422f1) popup_snote_single_text_window_t2

0x8ea0,	// (0x00042304) popup_snote_single_text_window_t3_ParamLimits

0x8ea0,	// (0x00042304) popup_snote_single_text_window_t3

0x8ed9,	// (0x0004233d) popup_snote_single_text_window_t4_ParamLimits

0x8ed9,	// (0x0004233d) popup_snote_single_text_window_t4

0x8f0d,	// (0x00042371) popup_snote_single_text_window_t5_ParamLimits

0x8f0d,	// (0x00042371) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x000489e5) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x000489e5) popup_snote_single_text_window_t

0xb7e8,	// (0x00044c4c) bg_popup_window_pane_cp9_ParamLimits

0xb7e8,	// (0x00044c4c) bg_popup_window_pane_cp9

0x8e68,	// (0x000422cc) popup_snote_single_graphic_window_g1_ParamLimits

0x8e68,	// (0x000422cc) popup_snote_single_graphic_window_g1

0xb7f6,	// (0x00044c5a) popup_snote_single_graphic_window_g2_ParamLimits

0xb7f6,	// (0x00044c5a) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x000489f0) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x000489f0) popup_snote_single_graphic_window_g

0xb802,	// (0x00044c66) popup_snote_single_graphic_window_t1_ParamLimits

0xb802,	// (0x00044c66) popup_snote_single_graphic_window_t1

0xb815,	// (0x00044c79) popup_snote_single_graphic_window_t2_ParamLimits

0xb815,	// (0x00044c79) popup_snote_single_graphic_window_t2

0x8ea0,	// (0x00042304) popup_snote_single_graphic_window_t3_ParamLimits

0x8ea0,	// (0x00042304) popup_snote_single_graphic_window_t3

0x8ed9,	// (0x0004233d) popup_snote_single_graphic_window_t4_ParamLimits

0x8ed9,	// (0x0004233d) popup_snote_single_graphic_window_t4

0x8f3c,	// (0x000423a0) popup_snote_single_graphic_window_t5_ParamLimits

0x8f3c,	// (0x000423a0) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x000489f5) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x000489f5) popup_snote_single_graphic_window_t

0x37ae,	// (0x0003cc12) grid_graphic_popup_pane_ParamLimits

0x37ae,	// (0x0003cc12) grid_graphic_popup_pane

0x37d8,	// (0x0003cc3c) listscroll_popup_graphic_pane_g1_ParamLimits

0x37d8,	// (0x0003cc3c) listscroll_popup_graphic_pane_g1

0xca90,	// (0x00045ef4) listscroll_popup_graphic_pane_g2_ParamLimits

0xca90,	// (0x00045ef4) listscroll_popup_graphic_pane_g2

0x0001,

0xf977,	// (0x00048ddb) listscroll_popup_graphic_pane_g_ParamLimits

0xf977,	// (0x00048ddb) listscroll_popup_graphic_pane_g

0x3800,	// (0x0003cc64) scroll_pane_cp5

0xca4f,	// (0x00045eb3) cell_graphic_popup_pane_ParamLimits

0xca4f,	// (0x00045eb3) cell_graphic_popup_pane

0x3725,	// (0x0003cb89) cell_graphic_popup_pane_g1

0x372d,	// (0x0003cb91) cell_graphic_popup_pane_g2

0xb7bc,	// (0x00044c20) cell_graphic_popup_pane_g3

0x0002,

0xf970,	// (0x00048dd4) cell_graphic_popup_pane_g

0x3736,	// (0x0003cb9a) cell_graphic_popup_pane_t2

0xb7c5,	// (0x00044c29) grid_highlight_pane_cp3

0xb83a,	// (0x00044c9e) list_gen_pane_ParamLimits

0xb83a,	// (0x00044c9e) list_gen_pane

0xb862,	// (0x00044cc6) scroll_pane

0xc9b9,	// (0x00045e1d) bg_list_pane_g1_ParamLimits

0xc9b9,	// (0x00045e1d) bg_list_pane_g1

0xc9d4,	// (0x00045e38) bg_list_pane_g2_ParamLimits

0xc9d4,	// (0x00045e38) bg_list_pane_g2

0xc9e7,	// (0x00045e4b) bg_list_pane_g3_ParamLimits

0xc9e7,	// (0x00045e4b) bg_list_pane_g3

0xc9f9,	// (0x00045e5d) bg_list_pane_g4_ParamLimits

0xc9f9,	// (0x00045e5d) bg_list_pane_g4

0xca0b,	// (0x00045e6f) bg_list_pane_g5_ParamLimits

0xca0b,	// (0x00045e6f) bg_list_pane_g5

0x0004,

0xf965,	// (0x00048dc9) bg_list_pane_g_ParamLimits

0xf965,	// (0x00048dc9) bg_list_pane_g

0xc980,	// (0x00045de4) list_double2_graphic_large_graphic_pane_ParamLimits

0xc980,	// (0x00045de4) list_double2_graphic_large_graphic_pane

0xc980,	// (0x00045de4) list_double2_graphic_pane_ParamLimits

0xc980,	// (0x00045de4) list_double2_graphic_pane

0xc980,	// (0x00045de4) list_double2_large_graphic_pane_ParamLimits

0xc980,	// (0x00045de4) list_double2_large_graphic_pane

0xc980,	// (0x00045de4) list_double2_pane_ParamLimits

0xc980,	// (0x00045de4) list_double2_pane

0xc980,	// (0x00045de4) list_double_graphic_heading_pane_ParamLimits

0xc980,	// (0x00045de4) list_double_graphic_heading_pane

0xc980,	// (0x00045de4) list_double_graphic_pane_ParamLimits

0xc980,	// (0x00045de4) list_double_graphic_pane

0xc980,	// (0x00045de4) list_double_heading_pane_ParamLimits

0xc980,	// (0x00045de4) list_double_heading_pane

0xc980,	// (0x00045de4) list_double_large_graphic_pane_ParamLimits

0xc980,	// (0x00045de4) list_double_large_graphic_pane

0xc980,	// (0x00045de4) list_double_number_pane_ParamLimits

0xc980,	// (0x00045de4) list_double_number_pane

0xc980,	// (0x00045de4) list_double_pane_ParamLimits

0xc980,	// (0x00045de4) list_double_pane

0xc980,	// (0x00045de4) list_double_time_pane_ParamLimits

0xc980,	// (0x00045de4) list_double_time_pane

0xc980,	// (0x00045de4) list_setting_number_pane_ParamLimits

0xc980,	// (0x00045de4) list_setting_number_pane

0xc980,	// (0x00045de4) list_setting_pane_ParamLimits

0xc980,	// (0x00045de4) list_setting_pane

0x941c,	// (0x00042880) list_single_2graphic_pane_ParamLimits

0x941c,	// (0x00042880) list_single_2graphic_pane

0x941c,	// (0x00042880) list_single_graphic_heading_pane_ParamLimits

0x941c,	// (0x00042880) list_single_graphic_heading_pane

0x941c,	// (0x00042880) list_single_graphic_pane_ParamLimits

0x941c,	// (0x00042880) list_single_graphic_pane

0x941c,	// (0x00042880) list_single_heading_pane_ParamLimits

0x941c,	// (0x00042880) list_single_heading_pane

0x941c,	// (0x00042880) list_single_large_graphic_pane_ParamLimits

0x941c,	// (0x00042880) list_single_large_graphic_pane

0x941c,	// (0x00042880) list_single_number_heading_pane_ParamLimits

0x941c,	// (0x00042880) list_single_number_heading_pane

0x941c,	// (0x00042880) list_single_number_pane_ParamLimits

0x941c,	// (0x00042880) list_single_number_pane

0x941c,	// (0x00042880) list_single_pane_ParamLimits

0x941c,	// (0x00042880) list_single_pane

0xb4d4,	// (0x00044938) list_highlight_pane_cp1

0xdb50,	// (0x00046fb4) list_single_pane_g1_ParamLimits

0xdb50,	// (0x00046fb4) list_single_pane_g1

0xdb5c,	// (0x00046fc0) list_single_pane_g2_ParamLimits

0xdb5c,	// (0x00046fc0) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00048a07) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00048a07) list_single_pane_g

0xaaaa,	// (0x00043f0e) list_single_pane_t1_ParamLimits

0xaaaa,	// (0x00043f0e) list_single_pane_t1

0xdb50,	// (0x00046fb4) list_single_number_pane_g1_ParamLimits

0xdb50,	// (0x00046fb4) list_single_number_pane_g1

0xdb5c,	// (0x00046fc0) list_single_number_pane_g2_ParamLimits

0xdb5c,	// (0x00046fc0) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00048a07) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00048a07) list_single_number_pane_g

0xdb68,	// (0x00046fcc) list_single_number_pane_t1_ParamLimits

0xdb68,	// (0x00046fcc) list_single_number_pane_t1

0xaa00,	// (0x00043e64) list_single_number_pane_t2_ParamLimits

0xaa00,	// (0x00043e64) list_single_number_pane_t2

0x0001,

0xf926,	// (0x00048d8a) list_single_number_pane_t_ParamLimits

0xf926,	// (0x00048d8a) list_single_number_pane_t

0xdb44,	// (0x00046fa8) list_single_graphic_pane_g1_ParamLimits

0xdb44,	// (0x00046fa8) list_single_graphic_pane_g1

0xdb50,	// (0x00046fb4) list_single_graphic_pane_g2_ParamLimits

0xdb50,	// (0x00046fb4) list_single_graphic_pane_g2

0xdb5c,	// (0x00046fc0) list_single_graphic_pane_g3_ParamLimits

0xdb5c,	// (0x00046fc0) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00048a00) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00048a00) list_single_graphic_pane_g

0xdb68,	// (0x00046fcc) list_single_graphic_pane_t1_ParamLimits

0xdb68,	// (0x00046fcc) list_single_graphic_pane_t1

0xdb50,	// (0x00046fb4) list_single_heading_pane_g1_ParamLimits

0xdb50,	// (0x00046fb4) list_single_heading_pane_g1

0xdb5c,	// (0x00046fc0) list_single_heading_pane_g2_ParamLimits

0xdb5c,	// (0x00046fc0) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00048a07) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00048a07) list_single_heading_pane_g

0xdb7e,	// (0x00046fe2) list_single_heading_pane_t1_ParamLimits

0xdb7e,	// (0x00046fe2) list_single_heading_pane_t1

0xdb94,	// (0x00046ff8) list_single_heading_pane_t2_ParamLimits

0xdb94,	// (0x00046ff8) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00048a0c) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00048a0c) list_single_heading_pane_t

0xdb50,	// (0x00046fb4) list_single_number_heading_pane_g1_ParamLimits

0xdb50,	// (0x00046fb4) list_single_number_heading_pane_g1

0xdb5c,	// (0x00046fc0) list_single_number_heading_pane_g2_ParamLimits

0xdb5c,	// (0x00046fc0) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00048a07) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00048a07) list_single_number_heading_pane_g

0xdb7e,	// (0x00046fe2) list_single_number_heading_pane_t1_ParamLimits

0xdb7e,	// (0x00046fe2) list_single_number_heading_pane_t1

0xdba6,	// (0x0004700a) list_single_number_heading_pane_t2_ParamLimits

0xdba6,	// (0x0004700a) list_single_number_heading_pane_t2

0xdbb8,	// (0x0004701c) list_single_number_heading_pane_t3_ParamLimits

0xdbb8,	// (0x0004701c) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00048a11) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00048a11) list_single_number_heading_pane_t

0xdbca,	// (0x0004702e) list_single_graphic_heading_pane_g1_ParamLimits

0xdbca,	// (0x0004702e) list_single_graphic_heading_pane_g1

0x8f75,	// (0x000423d9) list_single_graphic_heading_pane_g4_ParamLimits

0x8f75,	// (0x000423d9) list_single_graphic_heading_pane_g4

0xdb5c,	// (0x00046fc0) list_single_graphic_heading_pane_g5_ParamLimits

0xdb5c,	// (0x00046fc0) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00048a18) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00048a18) list_single_graphic_heading_pane_g

0xdb7e,	// (0x00046fe2) list_single_graphic_heading_pane_t1_ParamLimits

0xdb7e,	// (0x00046fe2) list_single_graphic_heading_pane_t1

0x8f86,	// (0x000423ea) list_single_graphic_heading_pane_t2_ParamLimits

0x8f86,	// (0x000423ea) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00048a1f) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00048a1f) list_single_graphic_heading_pane_t

0xdbd6,	// (0x0004703a) list_single_large_graphic_pane_g1_ParamLimits

0xdbd6,	// (0x0004703a) list_single_large_graphic_pane_g1

0xdb50,	// (0x00046fb4) list_single_large_graphic_pane_g2_ParamLimits

0xdb50,	// (0x00046fb4) list_single_large_graphic_pane_g2

0xdb5c,	// (0x00046fc0) list_single_large_graphic_pane_g3_ParamLimits

0xdb5c,	// (0x00046fc0) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00048a24) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00048a24) list_single_large_graphic_pane_g

0x26b8,	// (0x0003bb1c) wait_border_pane_g2_copy1

0x8f98,	// (0x000423fc) list_single_large_graphic_pane_g4_cp2

0xdb68,	// (0x00046fcc) list_single_large_graphic_pane_t1_ParamLimits

0xdb68,	// (0x00046fcc) list_single_large_graphic_pane_t1

0xdbe2,	// (0x00047046) list_double_pane_g1_ParamLimits

0xdbe2,	// (0x00047046) list_double_pane_g1

0xdbee,	// (0x00047052) list_double_pane_g2_ParamLimits

0xdbee,	// (0x00047052) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00048a2b) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00048a2b) list_double_pane_g

0x8fa0,	// (0x00042404) list_double_pane_t1_ParamLimits

0x8fa0,	// (0x00042404) list_double_pane_t1

0x8fb6,	// (0x0004241a) list_double_pane_t2_ParamLimits

0x8fb6,	// (0x0004241a) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00048a30) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00048a30) list_double_pane_t

0x8fc8,	// (0x0004242c) list_double2_pane_g1_ParamLimits

0x8fc8,	// (0x0004242c) list_double2_pane_g1

0xdbee,	// (0x00047052) list_double2_pane_g2_ParamLimits

0xdbee,	// (0x00047052) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00048a35) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00048a35) list_double2_pane_g

0x8fa0,	// (0x00042404) list_double2_pane_t1_ParamLimits

0x8fa0,	// (0x00042404) list_double2_pane_t1

0x8fd9,	// (0x0004243d) list_double2_pane_t2_ParamLimits

0x8fd9,	// (0x0004243d) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00048a3a) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00048a3a) list_double2_pane_t

0xdbe2,	// (0x00047046) list_double_number_pane_g1_ParamLimits

0xdbe2,	// (0x00047046) list_double_number_pane_g1

0xdbee,	// (0x00047052) list_double_number_pane_g2_ParamLimits

0xdbee,	// (0x00047052) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00048a2b) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00048a2b) list_double_number_pane_g

0x8feb,	// (0x0004244f) list_double_number_pane_t1_ParamLimits

0x8feb,	// (0x0004244f) list_double_number_pane_t1

0x8ffd,	// (0x00042461) list_double_number_pane_t2_ParamLimits

0x8ffd,	// (0x00042461) list_double_number_pane_t2

0x9013,	// (0x00042477) list_double_number_pane_t3_ParamLimits

0x9013,	// (0x00042477) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00048a3f) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00048a3f) list_double_number_pane_t

0x9025,	// (0x00042489) list_double_graphic_pane_g1_ParamLimits

0x9025,	// (0x00042489) list_double_graphic_pane_g1

0xdbfa,	// (0x0004705e) list_double_graphic_pane_g2_ParamLimits

0xdbfa,	// (0x0004705e) list_double_graphic_pane_g2

0xdc09,	// (0x0004706d) list_double_graphic_pane_g3_ParamLimits

0xdc09,	// (0x0004706d) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00048a46) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00048a46) list_double_graphic_pane_g

0x903d,	// (0x000424a1) list_double_graphic_pane_t1_ParamLimits

0x903d,	// (0x000424a1) list_double_graphic_pane_t1

0x9053,	// (0x000424b7) list_double_graphic_pane_t2_ParamLimits

0x9053,	// (0x000424b7) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00048a4f) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00048a4f) list_double_graphic_pane_t

0x9065,	// (0x000424c9) list_double2_graphic_pane_g1_ParamLimits

0x9065,	// (0x000424c9) list_double2_graphic_pane_g1

0xdc15,	// (0x00047079) list_double2_graphic_pane_g2_ParamLimits

0xdc15,	// (0x00047079) list_double2_graphic_pane_g2

0xdc21,	// (0x00047085) list_double2_graphic_pane_g3_ParamLimits

0xdc21,	// (0x00047085) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00048a54) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00048a54) list_double2_graphic_pane_g

0x8ffd,	// (0x00042461) list_double2_graphic_pane_t1_ParamLimits

0x8ffd,	// (0x00042461) list_double2_graphic_pane_t1

0x9071,	// (0x000424d5) list_double2_graphic_pane_t2_ParamLimits

0x9071,	// (0x000424d5) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00048a5b) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00048a5b) list_double2_graphic_pane_t

0x9083,	// (0x000424e7) list_double_large_graphic_pane_g1_ParamLimits

0x9083,	// (0x000424e7) list_double_large_graphic_pane_g1

0x8fc8,	// (0x0004242c) list_double_large_graphic_pane_g2_ParamLimits

0x8fc8,	// (0x0004242c) list_double_large_graphic_pane_g2

0xdbee,	// (0x00047052) list_double_large_graphic_pane_g3_ParamLimits

0xdbee,	// (0x00047052) list_double_large_graphic_pane_g3

0x9096,	// (0x000424fa) list_double_large_graphic_pane_g4_ParamLimits

0x9096,	// (0x000424fa) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00048a60) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00048a60) list_double_large_graphic_pane_g

0x90a8,	// (0x0004250c) list_double_large_graphic_pane_t1_ParamLimits

0x90a8,	// (0x0004250c) list_double_large_graphic_pane_t1

0x90c1,	// (0x00042525) list_double_large_graphic_pane_t2_ParamLimits

0x90c1,	// (0x00042525) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00048a6b) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00048a6b) list_double_large_graphic_pane_t

0x90d3,	// (0x00042537) list_double2_large_graphic_pane_g1_ParamLimits

0x90d3,	// (0x00042537) list_double2_large_graphic_pane_g1

0x8fc8,	// (0x0004242c) list_double2_large_graphic_pane_g2_ParamLimits

0x8fc8,	// (0x0004242c) list_double2_large_graphic_pane_g2

0xdbee,	// (0x00047052) list_double2_large_graphic_pane_g3_ParamLimits

0xdbee,	// (0x00047052) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00048a70) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00048a70) list_double2_large_graphic_pane_g

0x8ffd,	// (0x00042461) list_double2_large_graphic_pane_t1_ParamLimits

0x8ffd,	// (0x00042461) list_double2_large_graphic_pane_t1

0x9071,	// (0x000424d5) list_double2_large_graphic_pane_t2_ParamLimits

0x9071,	// (0x000424d5) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00048a5b) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00048a5b) list_double2_large_graphic_pane_t

0x90df,	// (0x00042543) list_double_heading_pane_g1_ParamLimits

0x90df,	// (0x00042543) list_double_heading_pane_g1

0xdc42,	// (0x000470a6) list_double_heading_pane_g2_ParamLimits

0xdc42,	// (0x000470a6) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x00048a77) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x00048a77) list_double_heading_pane_g

0x90f0,	// (0x00042554) list_double_heading_pane_t1_ParamLimits

0x90f0,	// (0x00042554) list_double_heading_pane_t1

0x9071,	// (0x000424d5) list_double_heading_pane_t2_ParamLimits

0x9071,	// (0x000424d5) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x00048a7c) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x00048a7c) list_double_heading_pane_t

0x9106,	// (0x0004256a) list_double_graphic_heading_pane_g1_ParamLimits

0x9106,	// (0x0004256a) list_double_graphic_heading_pane_g1

0x90df,	// (0x00042543) list_double_graphic_heading_pane_g2_ParamLimits

0x90df,	// (0x00042543) list_double_graphic_heading_pane_g2

0xdc42,	// (0x000470a6) list_double_graphic_heading_pane_g3_ParamLimits

0xdc42,	// (0x000470a6) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x00048a81) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00048a81) list_double_graphic_heading_pane_g

0x90f0,	// (0x00042554) list_double_graphic_heading_pane_t1_ParamLimits

0x90f0,	// (0x00042554) list_double_graphic_heading_pane_t1

0x9071,	// (0x000424d5) list_double_graphic_heading_pane_t2_ParamLimits

0x9071,	// (0x000424d5) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x00048a7c) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x00048a7c) list_double_graphic_heading_pane_t

0x8fc8,	// (0x0004242c) list_double_time_pane_g1_ParamLimits

0x8fc8,	// (0x0004242c) list_double_time_pane_g1

0xdbee,	// (0x00047052) list_double_time_pane_g2_ParamLimits

0xdbee,	// (0x00047052) list_double_time_pane_g2

0x0001,

0xf5d1,	// (0x00048a35) list_double_time_pane_g_ParamLimits

0xf5d1,	// (0x00048a35) list_double_time_pane_g

0xdc4e,	// (0x000470b2) list_double_time_pane_t1_ParamLimits

0xdc4e,	// (0x000470b2) list_double_time_pane_t1

0xdc64,	// (0x000470c8) list_double_time_pane_t2_ParamLimits

0xdc64,	// (0x000470c8) list_double_time_pane_t2

0xdc76,	// (0x000470da) list_double_time_pane_t3_ParamLimits

0xdc76,	// (0x000470da) list_double_time_pane_t3

0xdc88,	// (0x000470ec) list_double_time_pane_t4_ParamLimits

0xdc88,	// (0x000470ec) list_double_time_pane_t4

0x0003,

0xf624,	// (0x00048a88) list_double_time_pane_t_ParamLimits

0xf624,	// (0x00048a88) list_double_time_pane_t

0xdc9a,	// (0x000470fe) list_setting_pane_g1_ParamLimits

0xdc9a,	// (0x000470fe) list_setting_pane_g1

0xdca6,	// (0x0004710a) list_setting_pane_g2_ParamLimits

0xdca6,	// (0x0004710a) list_setting_pane_g2

0x0001,

0xf62d,	// (0x00048a91) list_setting_pane_g_ParamLimits

0xf62d,	// (0x00048a91) list_setting_pane_g

0x9112,	// (0x00042576) list_setting_pane_t1_ParamLimits

0x9112,	// (0x00042576) list_setting_pane_t1

0x9129,	// (0x0004258d) list_setting_pane_t2_ParamLimits

0x9129,	// (0x0004258d) list_setting_pane_t2

0x0002,

0xf632,	// (0x00048a96) list_setting_pane_t_ParamLimits

0xf632,	// (0x00048a96) list_setting_pane_t

0x9168,	// (0x000425cc) set_value_pane_cp_ParamLimits

0x9168,	// (0x000425cc) set_value_pane_cp

0xdcb2,	// (0x00047116) list_setting_number_pane_g1_ParamLimits

0xdcb2,	// (0x00047116) list_setting_number_pane_g1

0xdcbe,	// (0x00047122) list_setting_number_pane_g2_ParamLimits

0xdcbe,	// (0x00047122) list_setting_number_pane_g2

0x0001,

0xf639,	// (0x00048a9d) list_setting_number_pane_g_ParamLimits

0xf639,	// (0x00048a9d) list_setting_number_pane_g

0x9174,	// (0x000425d8) list_setting_number_pane_t1_ParamLimits

0x9174,	// (0x000425d8) list_setting_number_pane_t1

0xdcca,	// (0x0004712e) list_setting_number_pane_t2_ParamLimits

0xdcca,	// (0x0004712e) list_setting_number_pane_t2

0x9188,	// (0x000425ec) list_setting_number_pane_t3_ParamLimits

0x9188,	// (0x000425ec) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x00048aa2) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x00048aa2) list_setting_number_pane_t

0x9168,	// (0x000425cc) set_value_pane_ParamLimits

0x9168,	// (0x000425cc) set_value_pane

0xb896,	// (0x00044cfa) bg_set_opt_pane_ParamLimits

0xb896,	// (0x00044cfa) bg_set_opt_pane

0x91a0,	// (0x00042604) set_value_pane_t1

0xb8b7,	// (0x00044d1b) slider_set_pane_cp3

0x91ae,	// (0x00042612) volume_small_pane_cp

0xb8c0,	// (0x00044d24) list_form_gen_pane

0xb8c9,	// (0x00044d2d) scroll_pane_cp8

0x91b7,	// (0x0004261b) form_field_data_pane_ParamLimits

0x91b7,	// (0x0004261b) form_field_data_pane

0x91ce,	// (0x00042632) form_field_data_wide_pane_ParamLimits

0x91ce,	// (0x00042632) form_field_data_wide_pane

0x91ee,	// (0x00042652) form_field_popup_pane_ParamLimits

0x91ee,	// (0x00042652) form_field_popup_pane

0x9206,	// (0x0004266a) form_field_popup_wide_pane_ParamLimits

0x9206,	// (0x0004266a) form_field_popup_wide_pane

0xdd1c,	// (0x00047180) form_field_slider_pane_ParamLimits

0xdd1c,	// (0x00047180) form_field_slider_pane

0x9223,	// (0x00042687) form_field_slider_wide_pane_ParamLimits

0x9223,	// (0x00042687) form_field_slider_wide_pane

0xb8da,	// (0x00044d3e) data_form_pane

0x9240,	// (0x000426a4) form_field_data_pane_t1

0xb8e6,	// (0x00044d4a) input_focus_pane

0x925a,	// (0x000426be) data_form_wide_pane

0x9277,	// (0x000426db) form_field_data_wide_pane_t1

0xb7da,	// (0x00044c3e) input_focus_pane_cp6

0x9299,	// (0x000426fd) form_field_popup_pane_t1

0xb8e6,	// (0x00044d4a) input_focus_pane_cp7

0xb914,	// (0x00044d78) list_form_pane

0x92bb,	// (0x0004271f) form_field_popup_wide_pane_t1

0xb8e6,	// (0x00044d4a) input_focus_pane_cp8

0xb920,	// (0x00044d84) list_form_wide_pane

0x92d8,	// (0x0004273c) form_field_slider_pane_t1_ParamLimits

0x92d8,	// (0x0004273c) form_field_slider_pane_t1

0x92f0,	// (0x00042754) form_field_slider_pane_t2_ParamLimits

0x92f0,	// (0x00042754) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x00048ab2) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x00048ab2) form_field_slider_pane_t

0xb522,	// (0x00044986) input_focus_pane_cp9_ParamLimits

0xb522,	// (0x00044986) input_focus_pane_cp9

0x9305,	// (0x00042769) slider_cont_pane_ParamLimits

0x9305,	// (0x00042769) slider_cont_pane

0xb92c,	// (0x00044d90) form_field_slider_wide_pane_t1_ParamLimits

0xb92c,	// (0x00044d90) form_field_slider_wide_pane_t1

0x9319,	// (0x0004277d) form_field_slider_wide_pane_t2_ParamLimits

0x9319,	// (0x0004277d) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x00048ab7) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x00048ab7) form_field_slider_wide_pane_t

0xb522,	// (0x00044986) input_focus_pane_cp10_ParamLimits

0xb522,	// (0x00044986) input_focus_pane_cp10

0x932b,	// (0x0004278f) slider_cont_pane_cp1_ParamLimits

0x932b,	// (0x0004278f) slider_cont_pane_cp1

0x933f,	// (0x000427a3) slider_form_pane_cp

0xb93e,	// (0x00044da2) input_focus_pane_g1

0xb946,	// (0x00044daa) input_focus_pane_g2

0xb94e,	// (0x00044db2) input_focus_pane_g3

0xb956,	// (0x00044dba) input_focus_pane_g4

0xb95e,	// (0x00044dc2) input_focus_pane_g5

0xb966,	// (0x00044dca) input_focus_pane_g6

0xb96e,	// (0x00044dd2) input_focus_pane_g7

0xb976,	// (0x00044dda) input_focus_pane_g8

0xb97e,	// (0x00044de2) input_focus_pane_g9

0xb4ca,	// (0x0004492e) input_focus_pane_g10

0x0009,

0xf658,	// (0x00048abc) input_focus_pane_g

0x26c1,	// (0x0003bb25) wait_border_pane_g3_copy1

0x9347,	// (0x000427ab) data_form_pane_t1

0xb4ca,	// (0x0004492e) wait_anim_pane_g1_copy1

0xaa7e,	// (0x00043ee2) data_form_wide_pane_t1

0x9361,	// (0x000427c5) list_form_graphic_pane_cp_ParamLimits

0x9361,	// (0x000427c5) list_form_graphic_pane_cp

0x35b0,	// (0x0003ca14) slider_form_pane_g1

0x35b9,	// (0x0003ca1d) slider_form_pane_g2

0x0006,

0xf956,	// (0x00048dba) slider_form_pane_g

0x9361,	// (0x000427c5) list_form_graphic_pane_ParamLimits

0x9361,	// (0x000427c5) list_form_graphic_pane

0x9374,	// (0x000427d8) list_form_graphic_pane_g1

0x937c,	// (0x000427e0) list_form_graphic_pane_t1_ParamLimits

0x937c,	// (0x000427e0) list_form_graphic_pane_t1

0xb530,	// (0x00044994) list_highlight_pane_cp5_ParamLimits

0xb530,	// (0x00044994) list_highlight_pane_cp5

0x9391,	// (0x000427f5) find_pane_g1

0xb986,	// (0x00044dea) input_find_pane

0x939a,	// (0x000427fe) input_find_pane_g1_ParamLimits

0x939a,	// (0x000427fe) input_find_pane_g1

0x93a6,	// (0x0004280a) input_find_pane_t1_ParamLimits

0x93a6,	// (0x0004280a) input_find_pane_t1

0x93bb,	// (0x0004281f) input_find_pane_t2_ParamLimits

0x93bb,	// (0x0004281f) input_find_pane_t2

0x0001,

0xf66d,	// (0x00048ad1) input_find_pane_t_ParamLimits

0xf66d,	// (0x00048ad1) input_find_pane_t

0xb98f,	// (0x00044df3) input_focus_pane_cp5_ParamLimits

0xb98f,	// (0x00044df3) input_focus_pane_cp5

0xb9a2,	// (0x00044e06) bg_popup_window_pane_cp2_ParamLimits

0xb9a2,	// (0x00044e06) bg_popup_window_pane_cp2

0xb9af,	// (0x00044e13) listscroll_menu_pane_ParamLimits

0xb9af,	// (0x00044e13) listscroll_menu_pane

0x93dc,	// (0x00042840) popup_submenu_window_ParamLimits

0x93dc,	// (0x00042840) popup_submenu_window

0xb9bb,	// (0x00044e1f) find_popup_pane_g1

0x9404,	// (0x00042868) input_popup_find_pane_cp

0xb9c3,	// (0x00044e27) input_focus_pane_cp4_ParamLimits

0xb9c3,	// (0x00044e27) input_focus_pane_cp4

0xb9d1,	// (0x00044e35) input_popup_find_pane_t1_ParamLimits

0xb9d1,	// (0x00044e35) input_popup_find_pane_t1

0xb4d4,	// (0x00044938) bg_popup_sub_pane_cp

0xb9ff,	// (0x00044e63) listscroll_popup_sub_pane

0xba07,	// (0x00044e6b) list_submenu_pane_ParamLimits

0xba07,	// (0x00044e6b) list_submenu_pane

0xba18,	// (0x00044e7c) scroll_pane_cp4

0x941c,	// (0x00042880) list_single_popup_submenu_pane_ParamLimits

0x941c,	// (0x00042880) list_single_popup_submenu_pane

0x9430,	// (0x00042894) list_single_popup_submenu_pane_g1

0x9438,	// (0x0004289c) list_single_popup_submenu_pane_t1_ParamLimits

0x9438,	// (0x0004289c) list_single_popup_submenu_pane_t1

0xb522,	// (0x00044986) bg_active_tab_pane_cp1_ParamLimits

0xb522,	// (0x00044986) bg_active_tab_pane_cp1

0xba20,	// (0x00044e84) tabs_2_active_pane_g1

0x944d,	// (0x000428b1) tabs_2_active_pane_t1

0xb522,	// (0x00044986) bg_passive_tab_pane_cp1_ParamLimits

0xb522,	// (0x00044986) bg_passive_tab_pane_cp1

0xba20,	// (0x00044e84) tabs_2_passive_pane_g1

0x944d,	// (0x000428b1) tabs_2_passive_pane_t1

0xb530,	// (0x00044994) bg_active_tab_pane_cp4

0x945f,	// (0x000428c3) tabs_2_long_active_pane_t1

0xba28,	// (0x00044e8c) bg_passive_tab_pane_cp4

0x06e5,	// (0x00039b49) list_single_midp_graphic_pane_g4_ParamLimits

0xb530,	// (0x00044994) bg_active_tab_pane_cp5

0x9472,	// (0x000428d6) tabs_3_long_active_pane_t1

0xba28,	// (0x00044e8c) bg_passive_tab_pane_cp5

0x06e5,	// (0x00039b49) list_single_midp_graphic_pane_g4

0xb530,	// (0x00044994) bg_popup_window_pane_cp13_ParamLimits

0xb530,	// (0x00044994) bg_popup_window_pane_cp13

0xba34,	// (0x00044e98) listscroll_popup_fast_pane_ParamLimits

0xba34,	// (0x00044e98) listscroll_popup_fast_pane

0xba40,	// (0x00044ea4) grid_popup_fast_pane_ParamLimits

0xba40,	// (0x00044ea4) grid_popup_fast_pane

0xba52,	// (0x00044eb6) scroll_pane_cp9_ParamLimits

0xba52,	// (0x00044eb6) scroll_pane_cp9

0x4f13,	// (0x0003e377) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4f13,	// (0x0003e377) list_single_graphic_hl_pane_t1_cp2

0xba65,	// (0x00044ec9) input_focus_pane_cp20_ParamLimits

0xba65,	// (0x00044ec9) input_focus_pane_cp20

0xba73,	// (0x00044ed7) query_popup_data_pane_t1_ParamLimits

0xba73,	// (0x00044ed7) query_popup_data_pane_t1

0xba86,	// (0x00044eea) query_popup_data_pane_t2_ParamLimits

0xba86,	// (0x00044eea) query_popup_data_pane_t2

0xbacc,	// (0x00044f30) query_popup_data_pane_t3_ParamLimits

0xbacc,	// (0x00044f30) query_popup_data_pane_t3

0xbb0d,	// (0x00044f71) query_popup_data_pane_t4_ParamLimits

0xbb0d,	// (0x00044f71) query_popup_data_pane_t4

0xbb49,	// (0x00044fad) query_popup_data_pane_t5_ParamLimits

0xbb49,	// (0x00044fad) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x00048ad6) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x00048ad6) query_popup_data_pane_t

0xb93e,	// (0x00044da2) bg_set_opt_pane_g1

0xb946,	// (0x00044daa) bg_set_opt_pane_g2

0xb94e,	// (0x00044db2) bg_set_opt_pane_g3

0xb956,	// (0x00044dba) bg_set_opt_pane_g4

0xb95e,	// (0x00044dc2) bg_set_opt_pane_g5

0xb966,	// (0x00044dca) bg_set_opt_pane_g6

0xb96e,	// (0x00044dd2) bg_set_opt_pane_g7

0xb976,	// (0x00044dda) bg_set_opt_pane_g8

0xb97e,	// (0x00044de2) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x00048ae1) bg_set_opt_pane_g

0xf2bc,	// (0x00048720) control_top_pane_stacon_ParamLimits

0xf2bc,	// (0x00048720) control_top_pane_stacon

0xf30f,	// (0x00048773) signal_pane_stacon_ParamLimits

0xf30f,	// (0x00048773) signal_pane_stacon

0xbed5,	// (0x00045339) stacon_top_pane_g1_ParamLimits

0xbed5,	// (0x00045339) stacon_top_pane_g1

0xf334,	// (0x00048798) title_pane_stacon_ParamLimits

0xf334,	// (0x00048798) title_pane_stacon

0xf35e,	// (0x000487c2) uni_indicator_pane_stacon_ParamLimits

0xf35e,	// (0x000487c2) uni_indicator_pane_stacon

0xf373,	// (0x000487d7) battery_pane_stacon_ParamLimits

0xf373,	// (0x000487d7) battery_pane_stacon

0xf3b7,	// (0x0004881b) control_bottom_pane_stacon_ParamLimits

0xf3b7,	// (0x0004881b) control_bottom_pane_stacon

0xf3da,	// (0x0004883e) navi_pane_stacon_ParamLimits

0xf3da,	// (0x0004883e) navi_pane_stacon

0xbef7,	// (0x0004535b) stacon_bottom_pane_g1_ParamLimits

0xbef7,	// (0x0004535b) stacon_bottom_pane_g1

0xf07f,	// (0x000484e3) aid_levels_signal_lsc_ParamLimits

0xf07f,	// (0x000484e3) aid_levels_signal_lsc

0xf095,	// (0x000484f9) signal_pane_stacon_g1_ParamLimits

0xf095,	// (0x000484f9) signal_pane_stacon_g1

0xf0a9,	// (0x0004850d) signal_pane_stacon_g2_ParamLimits

0xf0a9,	// (0x0004850d) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x00048af4) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x00048af4) signal_pane_stacon_g

0xf0de,	// (0x00048542) title_pane_stacon_t1_ParamLimits

0xf0de,	// (0x00048542) title_pane_stacon_t1

0xbb8d,	// (0x00044ff1) uni_indicator_pane_stacon_g1

0xbb97,	// (0x00044ffb) uni_indicator_pane_stacon_g2

0xbba1,	// (0x00045005) uni_indicator_pane_stacon_g3

0xbbab,	// (0x0004500f) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x00048b00) uni_indicator_pane_stacon_g

0xf103,	// (0x00048567) control_top_pane_stacon_g1

0xf10b,	// (0x0004856f) control_top_pane_stacon_t1_ParamLimits

0xf10b,	// (0x0004856f) control_top_pane_stacon_t1

0xf142,	// (0x000485a6) aid_levels_battery_lsc_ParamLimits

0xf142,	// (0x000485a6) aid_levels_battery_lsc

0xf159,	// (0x000485bd) battery_pane_stacon_g1_ParamLimits

0xf159,	// (0x000485bd) battery_pane_stacon_g1

0xf16c,	// (0x000485d0) battery_pane_stacon_g2_ParamLimits

0xf16c,	// (0x000485d0) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x00048b09) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x00048b09) battery_pane_stacon_g

0xf1aa,	// (0x0004860e) navi_icon_pane_stacon

0xf1be,	// (0x00048622) navi_navi_pane_stacon

0xf1aa,	// (0x0004860e) navi_text_pane_stacon

0xf103,	// (0x00048567) control_bottom_pane_stacon_g1

0xf1d2,	// (0x00048636) control_bottom_pane_stacon_t1_ParamLimits

0xf1d2,	// (0x00048636) control_bottom_pane_stacon_t1

0x949e,	// (0x00042902) grid_app_pane_ParamLimits

0x949e,	// (0x00042902) grid_app_pane

0x94d6,	// (0x0004293a) scroll_pane_cp15_ParamLimits

0x94d6,	// (0x0004293a) scroll_pane_cp15

0x94eb,	// (0x0004294f) cell_app_pane_ParamLimits

0x94eb,	// (0x0004294f) cell_app_pane

0x9530,	// (0x00042994) cell_app_pane_g1_ParamLimits

0x9530,	// (0x00042994) cell_app_pane_g1

0xbbcf,	// (0x00045033) cell_app_pane_g2_ParamLimits

0xbbcf,	// (0x00045033) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x00048b0e) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x00048b0e) cell_app_pane_g

0x9554,	// (0x000429b8) cell_app_pane_t1_ParamLimits

0x9554,	// (0x000429b8) cell_app_pane_t1

0xbbdb,	// (0x0004503f) grid_highlight_pane_ParamLimits

0xbbdb,	// (0x0004503f) grid_highlight_pane

0xb93e,	// (0x00044da2) cell_highlight_pane_g1

0xb946,	// (0x00044daa) cell_highlight_pane_g2

0xb94e,	// (0x00044db2) cell_highlight_pane_g3

0xb956,	// (0x00044dba) cell_highlight_pane_g4

0xb95e,	// (0x00044dc2) cell_highlight_pane_g5

0xb966,	// (0x00044dca) cell_highlight_pane_g6

0xb96e,	// (0x00044dd2) cell_highlight_pane_g7

0xb976,	// (0x00044dda) cell_highlight_pane_g8

0xb97e,	// (0x00044de2) cell_highlight_pane_g9

0xb4ca,	// (0x0004492e) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x00048abc) cell_highlight_pane_g

0xbbec,	// (0x00045050) bg_scroll_pane

0x9574,	// (0x000429d8) scroll_handle_pane

0xbc33,	// (0x00045097) scroll_bg_pane_g1

0xbc48,	// (0x000450ac) scroll_bg_pane_g2

0xbc60,	// (0x000450c4) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x00048b13) scroll_bg_pane_g

0x9588,	// (0x000429ec) scroll_handle_focus_pane_ParamLimits

0x9588,	// (0x000429ec) scroll_handle_focus_pane

0xbc33,	// (0x00045097) scroll_handle_pane_g1

0xbc75,	// (0x000450d9) scroll_handle_pane_g2

0xbc60,	// (0x000450c4) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x00048b1a) scroll_handle_pane_g

0xb9c3,	// (0x00044e27) bg_popup_sub_pane_cp21_ParamLimits

0xb9c3,	// (0x00044e27) bg_popup_sub_pane_cp21

0x9595,	// (0x000429f9) popup_fep_japan_predictive_window_t1_ParamLimits

0x9595,	// (0x000429f9) popup_fep_japan_predictive_window_t1

0x95ac,	// (0x00042a10) popup_fep_japan_predictive_window_t2_ParamLimits

0x95ac,	// (0x00042a10) popup_fep_japan_predictive_window_t2

0x95df,	// (0x00042a43) popup_fep_japan_predictive_window_t3_ParamLimits

0x95df,	// (0x00042a43) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x00048b21) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x00048b21) popup_fep_japan_predictive_window_t

0xb4d4,	// (0x00044938) bg_popup_sub_pane_cp23

0x9616,	// (0x00042a7a) listscroll_japin_cand_pane

0xbc89,	// (0x000450ed) popup_fep_japan_candidate_window_t1

0xbc97,	// (0x000450fb) candidate_pane_ParamLimits

0xbc97,	// (0x000450fb) candidate_pane

0x961e,	// (0x00042a82) scroll_pane_cp30

0xbca9,	// (0x0004510d) list_single_popup_jap_candidate_pane_ParamLimits

0xbca9,	// (0x0004510d) list_single_popup_jap_candidate_pane

0xb4d4,	// (0x00044938) list_highlight_pane_cp30

0xbcbe,	// (0x00045122) list_single_popup_jap_candidate_pane_t1

0xbccd,	// (0x00045131) level_1_signal

0xbcda,	// (0x0004513e) level_2_signal

0xbce7,	// (0x0004514b) level_3_signal

0xbcf4,	// (0x00045158) level_4_signal

0xbd01,	// (0x00045165) level_5_signal

0xbd0e,	// (0x00045172) level_6_signal

0xbd1b,	// (0x0004517f) level_7_signal

0xbccd,	// (0x00045131) level_1_battery

0xbcda,	// (0x0004513e) level_2_battery

0xbce7,	// (0x0004514b) level_3_battery

0xbcf4,	// (0x00045158) level_4_battery

0xbd01,	// (0x00045165) level_5_battery

0xbd0e,	// (0x00045172) level_6_battery

0xbd1b,	// (0x0004517f) level_7_battery

0xbd40,	// (0x000451a4) list_menu_pane_ParamLimits

0xbd40,	// (0x000451a4) list_menu_pane

0xbd56,	// (0x000451ba) scroll_pane_cp25_ParamLimits

0xbd56,	// (0x000451ba) scroll_pane_cp25

0x9626,	// (0x00042a8a) list_double2_graphic_pane_cp2_ParamLimits

0x9626,	// (0x00042a8a) list_double2_graphic_pane_cp2

0x9626,	// (0x00042a8a) list_double2_large_graphic_pane_cp2_ParamLimits

0x9626,	// (0x00042a8a) list_double2_large_graphic_pane_cp2

0x9626,	// (0x00042a8a) list_double2_pane_cp2_ParamLimits

0x9626,	// (0x00042a8a) list_double2_pane_cp2

0x9626,	// (0x00042a8a) list_double_graphic_pane_cp2_ParamLimits

0x9626,	// (0x00042a8a) list_double_graphic_pane_cp2

0x9626,	// (0x00042a8a) list_double_large_graphic_pane_cp2_ParamLimits

0x9626,	// (0x00042a8a) list_double_large_graphic_pane_cp2

0x9626,	// (0x00042a8a) list_double_number_pane_cp2_ParamLimits

0x9626,	// (0x00042a8a) list_double_number_pane_cp2

0x9626,	// (0x00042a8a) list_double_pane_cp2_ParamLimits

0x9626,	// (0x00042a8a) list_double_pane_cp2

0x9635,	// (0x00042a99) list_single_2graphic_pane_cp2_ParamLimits

0x9635,	// (0x00042a99) list_single_2graphic_pane_cp2

0x9635,	// (0x00042a99) list_single_graphic_heading_pane_cp2_ParamLimits

0x9635,	// (0x00042a99) list_single_graphic_heading_pane_cp2

0x9635,	// (0x00042a99) list_single_graphic_pane_cp2_ParamLimits

0x9635,	// (0x00042a99) list_single_graphic_pane_cp2

0x9635,	// (0x00042a99) list_single_heading_pane_cp2_ParamLimits

0x9635,	// (0x00042a99) list_single_heading_pane_cp2

0xbd7f,	// (0x000451e3) list_single_large_graphic_pane_cp2_ParamLimits

0xbd7f,	// (0x000451e3) list_single_large_graphic_pane_cp2

0x9635,	// (0x00042a99) list_single_number_heading_pane_cp2_ParamLimits

0x9635,	// (0x00042a99) list_single_number_heading_pane_cp2

0x9635,	// (0x00042a99) list_single_number_pane_cp2_ParamLimits

0x9635,	// (0x00042a99) list_single_number_pane_cp2

0x9647,	// (0x00042aab) list_single_pane_cp2_ParamLimits

0x9647,	// (0x00042aab) list_single_pane_cp2

0xbd99,	// (0x000451fd) bg_popup_sub_pane_cp22

0xf2a2,	// (0x00048706) popup_side_volume_key_window_g1

0xf2ae,	// (0x00048712) popup_side_volume_key_window_t1

0x970f,	// (0x00042b73) volume_small_pane_cp1

0xb522,	// (0x00044986) bg_popup_sub_pane_cp24_ParamLimits

0xb522,	// (0x00044986) bg_popup_sub_pane_cp24

0xbdaf,	// (0x00045213) fep_china_uni_candidate_pane_ParamLimits

0xbdaf,	// (0x00045213) fep_china_uni_candidate_pane

0xbdc3,	// (0x00045227) fep_china_uni_entry_pane

0xbdd3,	// (0x00045237) popup_fep_china_uni_window_g1

0x9717,	// (0x00042b7b) fep_china_uni_entry_pane_g1

0x971f,	// (0x00042b83) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x00048b52) fep_china_uni_entry_pane_g

0xbdef,	// (0x00045253) fep_entry_item_pane

0xbdf9,	// (0x0004525d) fep_candidate_item_pane

0x9727,	// (0x00042b8b) fep_china_uni_candidate_pane_g1

0xbe01,	// (0x00045265) fep_china_uni_candidate_pane_g2

0xbe09,	// (0x0004526d) fep_china_uni_candidate_pane_g3

0x972f,	// (0x00042b93) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x00048b57) fep_china_uni_candidate_pane_g

0xb4ca,	// (0x0004492e) fep_entry_item_pane_g1

0xbe11,	// (0x00045275) fep_entry_item_pane_t1_ParamLimits

0xbe11,	// (0x00045275) fep_entry_item_pane_t1

0xbe27,	// (0x0004528b) fep_candidate_item_pane_t1_ParamLimits

0xbe27,	// (0x0004528b) fep_candidate_item_pane_t1

0xbe3c,	// (0x000452a0) fep_candidate_item_pane_t2_ParamLimits

0xbe3c,	// (0x000452a0) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x00048b60) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x00048b60) fep_candidate_item_pane_t

0xb530,	// (0x00044994) list_highlight_pane_cp31_ParamLimits

0xb530,	// (0x00044994) list_highlight_pane_cp31

0xbe4e,	// (0x000452b2) level_1_signal_lsc

0xbe57,	// (0x000452bb) level_2_signal_lsc

0xbe60,	// (0x000452c4) level_3_signal_lsc

0xbe69,	// (0x000452cd) level_4_signal_lsc

0xbe72,	// (0x000452d6) level_5_signal_lsc

0xbe7b,	// (0x000452df) level_6_signal_lsc

0xbe84,	// (0x000452e8) level_7_signal_lsc

0xbe84,	// (0x000452e8) level_1_battery_lsc

0xbe8d,	// (0x000452f1) level_2_battery_lsc

0xbe96,	// (0x000452fa) level_3_battery_lsc

0xbe9f,	// (0x00045303) level_4_battery_lsc

0xbea8,	// (0x0004530c) level_5_battery_lsc

0xbeb1,	// (0x00045315) level_6_battery_lsc

0xbe4e,	// (0x000452b2) level_7_battery_lsc

0xbeba,	// (0x0004531e) scroll_handle_focus_pane_g1

0xbec3,	// (0x00045327) scroll_handle_focus_pane_g2

0xbecc,	// (0x00045330) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x00048b65) scroll_handle_focus_pane_g

0x9737,	// (0x00042b9b) list_single_2graphic_pane_g1_ParamLimits

0x9737,	// (0x00042b9b) list_single_2graphic_pane_g1

0x8f75,	// (0x000423d9) list_single_2graphic_pane_g2_ParamLimits

0x8f75,	// (0x000423d9) list_single_2graphic_pane_g2

0xdb5c,	// (0x00046fc0) list_single_2graphic_pane_g3_ParamLimits

0xdb5c,	// (0x00046fc0) list_single_2graphic_pane_g3

0x9743,	// (0x00042ba7) list_single_2graphic_pane_g4_ParamLimits

0x9743,	// (0x00042ba7) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x00048b6c) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x00048b6c) list_single_2graphic_pane_g

0x9754,	// (0x00042bb8) list_single_2graphic_pane_t1_ParamLimits

0x9754,	// (0x00042bb8) list_single_2graphic_pane_t1

0x9782,	// (0x00042be6) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9782,	// (0x00042be6) list_double2_graphic_large_graphic_pane_g1

0x8fc8,	// (0x0004242c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8fc8,	// (0x0004242c) list_double2_graphic_large_graphic_pane_g2

0xdbee,	// (0x00047052) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xdbee,	// (0x00047052) list_double2_graphic_large_graphic_pane_g3

0xdd2f,	// (0x00047193) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xdd2f,	// (0x00047193) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x00048b75) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x00048b75) list_double2_graphic_large_graphic_pane_g

0xdd3b,	// (0x0004719f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xdd3b,	// (0x0004719f) list_double2_graphic_large_graphic_pane_t1

0xdd51,	// (0x000471b5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xdd51,	// (0x000471b5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x00048b7e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x00048b7e) list_double2_graphic_large_graphic_pane_t

0x9807,	// (0x00042c6b) popup_fast_swap_window_ParamLimits

0x9807,	// (0x00042c6b) popup_fast_swap_window

0x9823,	// (0x00042c87) popup_side_volume_key_window

0xbf82,	// (0x000453e6) stacon_top_pane

0xbf8c,	// (0x000453f0) status_pane_ParamLimits

0xbf8c,	// (0x000453f0) status_pane

0xb4c0,	// (0x00044924) status_small_pane

0xb4d4,	// (0x00044938) control_pane

0xb4d4,	// (0x00044938) stacon_bottom_pane

0xb8c9,	// (0x00044d2d) scroll_pane_cp121

0xb8c0,	// (0x00044d24) set_content_pane

0x9794,	// (0x00042bf8) bg_active_tab_pane_g1_cp1

0x979d,	// (0x00042c01) bg_active_tab_pane_g2_cp1

0x97a6,	// (0x00042c0a) bg_active_tab_pane_g3_cp1

0x9794,	// (0x00042bf8) bg_passive_tab_pane_g1_cp1

0x979d,	// (0x00042c01) bg_passive_tab_pane_g2_cp1

0x97a6,	// (0x00042c0a) bg_passive_tab_pane_g3_cp1

0x97af,	// (0x00042c13) bg_active_tab_pane_g1_cp2

0x979d,	// (0x00042c01) bg_active_tab_pane_g2_cp2

0x97b8,	// (0x00042c1c) bg_active_tab_pane_g3_cp2

0x97af,	// (0x00042c13) bg_passive_tab_pane_g1_cp2

0x979d,	// (0x00042c01) bg_passive_tab_pane_g2_cp2

0x97b8,	// (0x00042c1c) bg_passive_tab_pane_g3_cp2

0x97c1,	// (0x00042c25) bg_active_tab_pane_g1_cp3

0x979d,	// (0x00042c01) bg_active_tab_pane_g2_cp3

0x97ca,	// (0x00042c2e) bg_active_tab_pane_g3_cp3

0x97c1,	// (0x00042c25) bg_passive_tab_pane_g1_cp3

0x979d,	// (0x00042c01) bg_passive_tab_pane_g2_cp3

0x97ca,	// (0x00042c2e) bg_passive_tab_pane_g3_cp3

0x97d3,	// (0x00042c37) bg_active_tab_pane_g1_cp4

0x979d,	// (0x00042c01) bg_active_tab_pane_g2_cp4

0x97de,	// (0x00042c42) bg_active_tab_pane_g3_cp4

0x97d3,	// (0x00042c37) bg_passive_tab_pane_g1_cp4

0x979d,	// (0x00042c01) bg_passive_tab_pane_g2_cp4

0x97de,	// (0x00042c42) bg_passive_tab_pane_g3_cp4

0x97e9,	// (0x00042c4d) bg_active_tab_pane_g1_cp5

0x979d,	// (0x00042c01) bg_active_tab_pane_g2_cp5

0x97f2,	// (0x00042c56) bg_active_tab_pane_g3_cp5

0x97e9,	// (0x00042c4d) bg_passive_tab_pane_g1_cp5

0x979d,	// (0x00042c01) bg_passive_tab_pane_g2_cp5

0x97f2,	// (0x00042c56) bg_passive_tab_pane_g3_cp5

0x3bc0,	// (0x0003d024) list_set_graphic_pane_ParamLimits

0x3bc0,	// (0x0003d024) list_set_graphic_pane

0xb4d4,	// (0x00044938) bg_set_opt_pane_cp4

0xbf13,	// (0x00045377) list_set_graphic_pane_g1_ParamLimits

0xbf13,	// (0x00045377) list_set_graphic_pane_g1

0xbf1f,	// (0x00045383) list_set_graphic_pane_g2_ParamLimits

0xbf1f,	// (0x00045383) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x00048b83) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x00048b83) list_set_graphic_pane_g

0x0009,

0xfab0,	// (0x00048f14) volume_small_pane_cp_g

0x97fb,	// (0x00042c5f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x97fb,	// (0x00042c5f) list_double2_large_graphic_pane_g1_cp2

0xbf41,	// (0x000453a5) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbf41,	// (0x000453a5) list_double2_large_graphic_pane_g2_cp2

0xbf52,	// (0x000453b6) list_double2_large_graphic_pane_g3_cp2

0xbf5a,	// (0x000453be) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbf5a,	// (0x000453be) list_double2_large_graphic_pane_t1_cp2

0xbf70,	// (0x000453d4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbf70,	// (0x000453d4) list_double2_large_graphic_pane_t2_cp2

0xc6d9,	// (0x00045b3d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc6d9,	// (0x00045b3d) list_double_large_graphic_pane_g1_cp2

0x3183,	// (0x0003c5e7) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3183,	// (0x0003c5e7) list_double_large_graphic_pane_g2_cp2

0xc0a8,	// (0x0004550c) list_double_large_graphic_pane_g3_cp2

0x3194,	// (0x0003c5f8) list_double_large_graphic_pane_g4_cp

0x319c,	// (0x0003c600) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x319c,	// (0x0003c600) list_double_large_graphic_pane_t1_cp2

0x31b3,	// (0x0003c617) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x31b3,	// (0x0003c617) list_double_large_graphic_pane_t2_cp2

0xbf9a,	// (0x000453fe) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbf9a,	// (0x000453fe) list_double2_graphic_pane_g1_cp2

0xbfa8,	// (0x0004540c) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbfa8,	// (0x0004540c) list_double2_graphic_pane_g2_cp2

0xbfb9,	// (0x0004541d) list_double2_graphic_pane_g3_cp2

0xbfc3,	// (0x00045427) list_double2_graphic_pane_t1_cp2_ParamLimits

0xbfc3,	// (0x00045427) list_double2_graphic_pane_t1_cp2

0xbfd9,	// (0x0004543d) list_double2_graphic_pane_t2_cp2_ParamLimits

0xbfd9,	// (0x0004543d) list_double2_graphic_pane_t2_cp2

0xbfeb,	// (0x0004544f) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbfeb,	// (0x0004544f) list_single_number_heading_pane_g1_cp2

0xbff7,	// (0x0004545b) list_single_number_heading_pane_g2_cp2

0xbfff,	// (0x00045463) list_single_number_heading_pane_t1_cp2_ParamLimits

0xbfff,	// (0x00045463) list_single_number_heading_pane_t1_cp2

0xc015,	// (0x00045479) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc015,	// (0x00045479) list_single_number_heading_pane_t2_cp2

0xc027,	// (0x0004548b) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc027,	// (0x0004548b) list_single_number_heading_pane_t3_cp2

0xbfeb,	// (0x0004544f) list_single_heading_pane_g1_cp2_ParamLimits

0xbfeb,	// (0x0004544f) list_single_heading_pane_g1_cp2

0xbff7,	// (0x0004545b) list_single_heading_pane_g2_cp2

0xbfff,	// (0x00045463) list_single_heading_pane_t1_cp2_ParamLimits

0xbfff,	// (0x00045463) list_single_heading_pane_t1_cp2

0x2f7c,	// (0x0003c3e0) list_single_heading_pane_t2_cp2_ParamLimits

0x2f7c,	// (0x0003c3e0) list_single_heading_pane_t2_cp2

0x2ec4,	// (0x0003c328) list_double_graphic_pane_g1_cp2_ParamLimits

0x2ec4,	// (0x0003c328) list_double_graphic_pane_g1_cp2

0x2ed0,	// (0x0003c334) list_double_graphic_pane_g2_cp2_ParamLimits

0x2ed0,	// (0x0003c334) list_double_graphic_pane_g2_cp2

0x2edf,	// (0x0003c343) list_double_graphic_pane_g3_cp2

0x2ee7,	// (0x0003c34b) list_double_graphic_pane_t1_cp2_ParamLimits

0x2ee7,	// (0x0003c34b) list_double_graphic_pane_t1_cp2

0x2efd,	// (0x0003c361) list_double_graphic_pane_t2_cp2_ParamLimits

0x2efd,	// (0x0003c361) list_double_graphic_pane_t2_cp2

0xc09c,	// (0x00045500) list_double_number_pane_g1_cp2_ParamLimits

0xc09c,	// (0x00045500) list_double_number_pane_g1_cp2

0xc0a8,	// (0x0004550c) list_double_number_pane_g2_cp2

0x2e88,	// (0x0003c2ec) list_double_number_pane_t1_cp2_ParamLimits

0x2e88,	// (0x0003c2ec) list_double_number_pane_t1_cp2

0x2e9c,	// (0x0003c300) list_double_number_pane_t2_cp2_ParamLimits

0x2e9c,	// (0x0003c300) list_double_number_pane_t2_cp2

0x2eb2,	// (0x0003c316) list_double_number_pane_t3_cp2_ParamLimits

0x2eb2,	// (0x0003c316) list_double_number_pane_t3_cp2

0x2d71,	// (0x0003c1d5) list_single_graphic_pane_g1_cp2_ParamLimits

0x2d71,	// (0x0003c1d5) list_single_graphic_pane_g1_cp2

0xc101,	// (0x00045565) list_single_graphic_pane_g2_cp2_ParamLimits

0xc101,	// (0x00045565) list_single_graphic_pane_g2_cp2

0xc10d,	// (0x00045571) list_single_graphic_pane_g3_cp2

0x2d47,	// (0x0003c1ab) list_single_graphic_pane_t1_cp2_ParamLimits

0x2d47,	// (0x0003c1ab) list_single_graphic_pane_t1_cp2

0xc101,	// (0x00045565) list_single_number_pane_g1_cp2_ParamLimits

0xc101,	// (0x00045565) list_single_number_pane_g1_cp2

0xc10d,	// (0x00045571) list_single_number_pane_g2_cp2

0x2d47,	// (0x0003c1ab) list_single_number_pane_t1_cp2_ParamLimits

0x2d47,	// (0x0003c1ab) list_single_number_pane_t1_cp2

0x2d5d,	// (0x0003c1c1) list_single_number_pane_t2_cp2_ParamLimits

0x2d5d,	// (0x0003c1c1) list_single_number_pane_t2_cp2

0xbf41,	// (0x000453a5) list_double2_pane_g1_cp2_ParamLimits

0xbf41,	// (0x000453a5) list_double2_pane_g1_cp2

0xbf52,	// (0x000453b6) list_double2_pane_g2_cp2

0xc074,	// (0x000454d8) list_double2_pane_t1_cp2_ParamLimits

0xc074,	// (0x000454d8) list_double2_pane_t1_cp2

0xc08a,	// (0x000454ee) list_double2_pane_t2_cp2_ParamLimits

0xc08a,	// (0x000454ee) list_double2_pane_t2_cp2

0xc09c,	// (0x00045500) list_double_pane_g1_cp2_ParamLimits

0xc09c,	// (0x00045500) list_double_pane_g1_cp2

0xc0a8,	// (0x0004550c) list_double_pane_g2_cp2

0xc0b0,	// (0x00045514) list_double_pane_t1_cp2_ParamLimits

0xc0b0,	// (0x00045514) list_double_pane_t1_cp2

0xc0c6,	// (0x0004552a) list_double_pane_t2_cp2_ParamLimits

0xc0c6,	// (0x0004552a) list_double_pane_t2_cp2

0x983d,	// (0x00042ca1) list_single_pane_cp2_g3

0xc101,	// (0x00045565) list_single_pane_g1_cp2_ParamLimits

0xc101,	// (0x00045565) list_single_pane_g1_cp2

0xc10d,	// (0x00045571) list_single_pane_g2_cp2

0xc115,	// (0x00045579) list_single_pane_t1_cp2_ParamLimits

0xc115,	// (0x00045579) list_single_pane_t1_cp2

0x9845,	// (0x00042ca9) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9845,	// (0x00042ca9) list_single_large_graphic_pane_g1_cp2

0xc12d,	// (0x00045591) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc12d,	// (0x00045591) list_single_large_graphic_pane_g2_cp2

0xc139,	// (0x0004559d) list_single_large_graphic_pane_g3_cp2

0x9851,	// (0x00042cb5) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9851,	// (0x00042cb5) list_single_large_graphic_pane_g4_cp1

0xc141,	// (0x000455a5) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc141,	// (0x000455a5) list_single_large_graphic_pane_t1_cp2

0x2d13,	// (0x0003c177) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2d13,	// (0x0003c177) list_single_graphic_heading_pane_g1_cp2

0x2ce0,	// (0x0003c144) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2ce0,	// (0x0003c144) list_single_graphic_heading_pane_g4_cp2

0xc10d,	// (0x00045571) list_single_graphic_heading_pane_g5_cp2

0x2d1f,	// (0x0003c183) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2d1f,	// (0x0003c183) list_single_graphic_heading_pane_t1_cp2

0x2d35,	// (0x0003c199) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2d35,	// (0x0003c199) list_single_graphic_heading_pane_t2_cp2

0x2cd4,	// (0x0003c138) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2cd4,	// (0x0003c138) list_single_2graphic_pane_g1_cp2

0x2ce0,	// (0x0003c144) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2ce0,	// (0x0003c144) list_single_2graphic_pane_g2_cp2

0xc10d,	// (0x00045571) list_single_2graphic_pane_g3_cp2

0x2cf1,	// (0x0003c155) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2cf1,	// (0x0003c155) list_single_2graphic_pane_g4_cp2

0x2cfd,	// (0x0003c161) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2cfd,	// (0x0003c161) list_single_2graphic_pane_t1_cp2

0xb4ca,	// (0x0004492e) list_highlight_pane_g10_cp1

0x28bc,	// (0x0003bd20) list_highlight_pane_g1_cp1

0x28c4,	// (0x0003bd28) list_highlight_pane_g2_cp1

0x28cc,	// (0x0003bd30) list_highlight_pane_g3_cp1

0x28d4,	// (0x0003bd38) list_highlight_pane_g4_cp1

0x28dc,	// (0x0003bd40) list_highlight_pane_g5_cp1

0x28e4,	// (0x0003bd48) list_highlight_pane_g6_cp1

0x28ec,	// (0x0003bd50) list_highlight_pane_g7_cp1

0x28f4,	// (0x0003bd58) list_highlight_pane_g8_cp1

0x28fc,	// (0x0003bd60) list_highlight_pane_g9_cp1

0xc46e,	// (0x000458d2) form_field_slider_pane_t3

0xc47c,	// (0x000458e0) form_field_slider_pane_t4

0x2800,	// (0x0003bc64) slider_form_pane_ParamLimits

0x2800,	// (0x0003bc64) slider_form_pane

0xb4d4,	// (0x00044938) control_abbreviations

0xb4d4,	// (0x00044938) control_conventions

0xb4d4,	// (0x00044938) control_definitions

0xb4d4,	// (0x00044938) format_table_attribute

0xc6b0,	// (0x00045b14) bg_popup_preview_window_pane_g9

0xb4d4,	// (0x00044938) format_table_data2

0xb4d4,	// (0x00044938) format_table_data3

0xb4d4,	// (0x00044938) format_table_data_example

0x0008,

0xb4d4,	// (0x00044938) intro_purpose

0xf8b6,	// (0x00048d1a) bg_popup_preview_window_pane_g

0xb4d4,	// (0x00044938) texts_category

0xb4d4,	// (0x00044938) texts_graphics

0xc157,	// (0x000455bb) text_digital

0xc166,	// (0x000455ca) text_primary

0xc175,	// (0x000455d9) text_primary_small

0xc184,	// (0x000455e8) text_secondary

0xc193,	// (0x000455f7) text_title

0xca1f,	// (0x00045e83) bg_passive_tab_pane_g1_cp3_srt

0x979d,	// (0x00042c01) bg_passive_tab_pane_g2_cp3_srt

0xca28,	// (0x00045e8c) bg_passive_tab_pane_g3_cp3_srt

0xb522,	// (0x00044986) bg_active_tab_pane_cp3_srt_ParamLimits

0xb522,	// (0x00044986) bg_active_tab_pane_cp3_srt

0xca31,	// (0x00045e95) tabs_4_active_pane_srt_g1

0xca39,	// (0x00045e9d) tabs_4_active_pane_srt_t1_ParamLimits

0xca39,	// (0x00045e9d) tabs_4_active_pane_srt_t1

0xca1f,	// (0x00045e83) bg_active_tab_pane_g1_cp3_copy1

0x979d,	// (0x00042c01) bg_active_tab_pane_g2_cp3_copy1

0xca28,	// (0x00045e8c) bg_active_tab_pane_g3_cp3_copy1

0xb530,	// (0x00044994) tabs_2_long_active_pane_srt_ParamLimits

0xb530,	// (0x00044994) tabs_2_long_active_pane_srt

0xb530,	// (0x00044994) tabs_2_long_passive_pane_srt_ParamLimits

0xb530,	// (0x00044994) tabs_2_long_passive_pane_srt

0xba28,	// (0x00044e8c) bg_passive_tab_pane_cp4_srt_ParamLimits

0xba28,	// (0x00044e8c) bg_passive_tab_pane_cp4_srt

0xc7d0,	// (0x00045c34) bg_passive_tab_pane_g1_cp4_srt

0x979d,	// (0x00042c01) bg_passive_tab_pane_g2_cp4_srt

0xc7d9,	// (0x00045c3d) bg_passive_tab_pane_g3_cp4_srt

0xb530,	// (0x00044994) bg_active_tab_pane_cp4_srt_ParamLimits

0xb530,	// (0x00044994) bg_active_tab_pane_cp4_srt

0xc7e2,	// (0x00045c46) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc7e2,	// (0x00045c46) tabs_2_long_active_pane_srt_t1

0xc7d0,	// (0x00045c34) bg_active_tab_pane_g1_cp4_srt

0x979d,	// (0x00042c01) bg_active_tab_pane_g2_cp4_srt

0xc7d9,	// (0x00045c3d) bg_active_tab_pane_g3_cp4_srt

0xb522,	// (0x00044986) tabs_3_long_active_pane_srt_ParamLimits

0xb522,	// (0x00044986) tabs_3_long_active_pane_srt

0xb522,	// (0x00044986) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb522,	// (0x00044986) tabs_3_long_passive_pane_cp_srt

0xb522,	// (0x00044986) tabs_3_long_passive_pane_srt_ParamLimits

0xb522,	// (0x00044986) tabs_3_long_passive_pane_srt

0xba28,	// (0x00044e8c) bg_passive_tab_pane_cp5_srt_ParamLimits

0xba28,	// (0x00044e8c) bg_passive_tab_pane_cp5_srt

0x97e9,	// (0x00042c4d) bg_passive_tab_pane_g1_cp5_srt

0x979d,	// (0x00042c01) bg_passive_tab_pane_g2_cp5_srt

0x97f2,	// (0x00042c56) bg_passive_tab_pane_g3_cp5_srt

0xb530,	// (0x00044994) bg_active_tab_pane_cp5_srt_ParamLimits

0xb530,	// (0x00044994) bg_active_tab_pane_cp5_srt

0xc7ba,	// (0x00045c1e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc7ba,	// (0x00045c1e) tabs_3_long_active_pane_srt_t1

0x97e9,	// (0x00042c4d) bg_active_tab_pane_g1_cp5_srt

0x979d,	// (0x00042c01) bg_active_tab_pane_g2_cp5_srt

0x97f2,	// (0x00042c56) bg_active_tab_pane_g3_cp5_srt

0x33c7,	// (0x0003c82b) navi_text_pane_srt_t1

0x33bf,	// (0x0003c823) navi_icon_pane_srt_g1

0xc27e,	// (0x000456e2) midp_editing_number_pane_srt

0xc1a2,	// (0x00045606) midp_ticker_pane_srt

0xc286,	// (0x000456ea) midp_ticker_pane_srt_g1

0xc28e,	// (0x000456f2) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x00048ba2) midp_ticker_pane_srt_g

0xc296,	// (0x000456fa) midp_ticker_pane_srt_t1

0x33b0,	// (0x0003c814) midp_editing_number_pane_t1_copy1

0x986b,	// (0x00042ccf) listscroll_midp_pane

0x986b,	// (0x00042ccf) midp_form_pane

0x98d6,	// (0x00042d3a) midp_info_popup_window_ParamLimits

0x98d6,	// (0x00042d3a) midp_info_popup_window

0xb9c3,	// (0x00044e27) bg_popup_sub_pane_cp50_ParamLimits

0xb9c3,	// (0x00044e27) bg_popup_sub_pane_cp50

0x24f0,	// (0x0003b954) listscroll_midp_info_pane_ParamLimits

0x24f0,	// (0x0003b954) listscroll_midp_info_pane

0x24d0,	// (0x0003b934) listscroll_form_midp_pane_ParamLimits

0x24d0,	// (0x0003b934) listscroll_form_midp_pane

0x24dc,	// (0x0003b940) scroll_bar_cp050

0x24d0,	// (0x0003b934) list_midp_pane

0xcbc3,	// (0x00046027) signal_pane_g2_cp

0x23ea,	// (0x0003b84e) listscroll_midp_info_pane_t1_ParamLimits

0x23ea,	// (0x0003b84e) listscroll_midp_info_pane_t1

0xa8fa,	// (0x00043d5e) listscroll_midp_info_pane_t2_ParamLimits

0xa8fa,	// (0x00043d5e) listscroll_midp_info_pane_t2

0xa938,	// (0x00043d9c) listscroll_midp_info_pane_t3_ParamLimits

0xa938,	// (0x00043d9c) listscroll_midp_info_pane_t3

0xa972,	// (0x00043dd6) listscroll_midp_info_pane_t4_ParamLimits

0xa972,	// (0x00043dd6) listscroll_midp_info_pane_t4

0x0003,

0xf7f1,	// (0x00048c55) listscroll_midp_info_pane_t_ParamLimits

0xf7f1,	// (0x00048c55) listscroll_midp_info_pane_t

0xba18,	// (0x00044e7c) scroll_pane_cp21

0x238a,	// (0x0003b7ee) form_midp_field_choice_group_pane

0xa8bd,	// (0x00043d21) form_midp_field_text_pane

0x23d0,	// (0x0003b834) form_midp_field_time_pane

0x23d8,	// (0x0003b83c) form_midp_gauge_slider_pane

0x23e1,	// (0x0003b845) form_midp_gauge_wait_pane

0xb4d4,	// (0x00044938) form_midp_image_pane

0xa8a5,	// (0x00043d09) list_single_midp_pane_ParamLimits

0xa8a5,	// (0x00043d09) list_single_midp_pane

0xa883,	// (0x00043ce7) form_midp_field_text_pane_t1

0x2109,	// (0x0003b56d) input_focus_pane_cp050

0x2379,	// (0x0003b7dd) list_midp_form_text_pane

0x230e,	// (0x0003b772) form_midp_field_choice_group_pane_t1

0x231c,	// (0x0003b780) input_focus_pane_cp051

0x2330,	// (0x0003b794) list_midp_choice_pane

0xb4d4,	// (0x00044938) status_idle_pane

0x22f2,	// (0x0003b756) form_midp_field_time_pane_t1

0xb4ca,	// (0x0004492e) wait_anim_pane_g2_copy1

0x2300,	// (0x0003b764) form_midp_field_time_pane_t2

0x0001,

0xc202,	// (0x00045666) aid_navinavi_width_2_pane

0xf7ec,	// (0x00048c50) form_midp_field_time_pane_t

0xb4d4,	// (0x00044938) input_focus_pane_cp052

0xb4d4,	// (0x00044938) bg_input_focus_pane_cp040

0x22b2,	// (0x0003b716) form_midp_gauge_slider_pane_t1

0x22c0,	// (0x0003b724) form_midp_gauge_slider_pane_t2

0xa867,	// (0x00043ccb) form_midp_gauge_slider_pane_t3

0xa875,	// (0x00043cd9) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e3,	// (0x00048c47) form_midp_gauge_slider_pane_t

0x22ea,	// (0x0003b74e) form_midp_slider_pane

0xb530,	// (0x00044994) bg_input_focus_pane_cp041_ParamLimits

0xb530,	// (0x00044994) bg_input_focus_pane_cp041

0x227f,	// (0x0003b6e3) form_midp_gauge_wait_pane_t1_ParamLimits

0x227f,	// (0x0003b6e3) form_midp_gauge_wait_pane_t1

0x2291,	// (0x0003b6f5) form_midp_gauge_wait_pane_t2_ParamLimits

0x2291,	// (0x0003b6f5) form_midp_gauge_wait_pane_t2

0x0001,

0xf7de,	// (0x00048c42) form_midp_gauge_wait_pane_t_ParamLimits

0xf7de,	// (0x00048c42) form_midp_gauge_wait_pane_t

0x22a3,	// (0x0003b707) form_midp_wait_pane_ParamLimits

0x22a3,	// (0x0003b707) form_midp_wait_pane

0xa831,	// (0x00043c95) form_midp_image_pane_g1

0xa83a,	// (0x00043c9e) form_midp_image_pane_t1

0xa849,	// (0x00043cad) form_midp_image_pane_t2

0xa858,	// (0x00043cbc) form_midp_image_pane_t3

0x0002,

0xf7d7,	// (0x00048c3b) form_midp_image_pane_t

0x2240,	// (0x0003b6a4) list_single_midp_pane_g1

0xde87,	// (0x000472eb) list_single_midp_pane_t1

0xa81c,	// (0x00043c80) list_midp_form_item_pane_ParamLimits

0xa81c,	// (0x00043c80) list_midp_form_item_pane

0xc1aa,	// (0x0004560e) list_midp_form_item_pane_t1

0xc1b9,	// (0x0004561d) midp_ticker_pane_g1

0xc1c5,	// (0x00045629) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x00048b88) midp_ticker_pane_g

0xc1d1,	// (0x00045635) midp_ticker_pane_t1

0x35fd,	// (0x0003ca61) midp_editing_number_pane_t1

0x35db,	// (0x0003ca3f) midp_editing_number_pane

0x35ea,	// (0x0003ca4e) midp_ticker_pane

0x33a0,	// (0x0003c804) ai_message_heading_pane

0xb4d4,	// (0x00044938) bg_popup_window_pane_cp14

0x33a8,	// (0x0003c80c) listscroll_ai_message_pane

0x332a,	// (0x0003c78e) ai_message_heading_pane_g1_ParamLimits

0x332a,	// (0x0003c78e) ai_message_heading_pane_g1

0xc782,	// (0x00045be6) ai_message_heading_pane_g2_ParamLimits

0xc782,	// (0x00045be6) ai_message_heading_pane_g2

0x3342,	// (0x0003c7a6) ai_message_heading_pane_g3_ParamLimits

0x3342,	// (0x0003c7a6) ai_message_heading_pane_g3

0x334e,	// (0x0003c7b2) ai_message_heading_pane_g4_ParamLimits

0x334e,	// (0x0003c7b2) ai_message_heading_pane_g4

0x0003,

0xf918,	// (0x00048d7c) ai_message_heading_pane_g_ParamLimits

0xf918,	// (0x00048d7c) ai_message_heading_pane_g

0xc78e,	// (0x00045bf2) ai_message_heading_pane_t1_ParamLimits

0xc78e,	// (0x00045bf2) ai_message_heading_pane_t1

0xc7a8,	// (0x00045c0c) ai_message_heading_pane_t2_ParamLimits

0xc7a8,	// (0x00045c0c) ai_message_heading_pane_t2

0x0001,

0xf921,	// (0x00048d85) ai_message_heading_pane_t_ParamLimits

0xf921,	// (0x00048d85) ai_message_heading_pane_t

0x3386,	// (0x0003c7ea) bg_popup_heading_pane_cp1_ParamLimits

0x3386,	// (0x0003c7ea) bg_popup_heading_pane_cp1

0x3318,	// (0x0003c77c) list_ai_message_pane_ParamLimits

0x3318,	// (0x0003c77c) list_ai_message_pane

0xba18,	// (0x00044e7c) scroll_pane_cp10

0xc77a,	// (0x00045bde) list_ai_message_pane_g1

0x32bc,	// (0x0003c720) list_ai_message_pane_g2

0x0001,

0xf8f5,	// (0x00048d59) list_ai_message_pane_g

0x32c4,	// (0x0003c728) list_ai_message_pane_t1_ParamLimits

0x32c4,	// (0x0003c728) list_ai_message_pane_t1

0x32d9,	// (0x0003c73d) list_ai_message_pane_t2_ParamLimits

0x32d9,	// (0x0003c73d) list_ai_message_pane_t2

0x32ee,	// (0x0003c752) list_ai_message_pane_t3_ParamLimits

0x32ee,	// (0x0003c752) list_ai_message_pane_t3

0x3303,	// (0x0003c767) list_ai_message_pane_t4_ParamLimits

0x3303,	// (0x0003c767) list_ai_message_pane_t4

0x0003,

0xf8fa,	// (0x00048d5e) list_ai_message_pane_t_ParamLimits

0xf8fa,	// (0x00048d5e) list_ai_message_pane_t

0xc756,	// (0x00045bba) cell_ai_soft_ind_pane_ParamLimits

0xc756,	// (0x00045bba) cell_ai_soft_ind_pane

0xc1e3,	// (0x00045647) cell_ai_soft_ind_pane_g1_ParamLimits

0xc1e3,	// (0x00045647) cell_ai_soft_ind_pane_g1

0xb4d4,	// (0x00044938) grid_highlight_cp1

0xc1f0,	// (0x00045654) text_secondary_cp56_ParamLimits

0xc1f0,	// (0x00045654) text_secondary_cp56

0x3274,	// (0x0003c6d8) example_general_pane_ParamLimits

0x3274,	// (0x0003c6d8) example_general_pane

0x3280,	// (0x0003c6e4) example_parent_pane_g1_ParamLimits

0x3280,	// (0x0003c6e4) example_parent_pane_g1

0x328c,	// (0x0003c6f0) example_parent_pane_t1_ParamLimits

0x328c,	// (0x0003c6f0) example_parent_pane_t1

0x9fa0,	// (0x00043404) popup_preview_text_window_ParamLimits

0x9fa0,	// (0x00043404) popup_preview_text_window

0xc0f9,	// (0x0004555d) list_single_pane_cp2_g4

0xb702,	// (0x00044b66) bg_popup_preview_window_pane_ParamLimits

0xb702,	// (0x00044b66) bg_popup_preview_window_pane

0xc6b8,	// (0x00045b1c) popup_preview_text_window_t1_ParamLimits

0xc6b8,	// (0x00045b1c) popup_preview_text_window_t1

0x2fec,	// (0x0003c450) popup_preview_text_window_t2_ParamLimits

0x2fec,	// (0x0003c450) popup_preview_text_window_t2

0x3035,	// (0x0003c499) popup_preview_text_window_t3_ParamLimits

0x3035,	// (0x0003c499) popup_preview_text_window_t3

0x307a,	// (0x0003c4de) popup_preview_text_window_t4_ParamLimits

0x307a,	// (0x0003c4de) popup_preview_text_window_t4

0x0004,

0xf8c9,	// (0x00048d2d) popup_preview_text_window_t_ParamLimits

0xf8c9,	// (0x00048d2d) popup_preview_text_window_t

0x30f8,	// (0x0003c55c) scroll_pane_cp11

0x207d,	// (0x0003b4e1) bg_popup_preview_window_pane_g1

0xc678,	// (0x00045adc) bg_popup_preview_window_pane_g2

0xc680,	// (0x00045ae4) bg_popup_preview_window_pane_g3

0xc688,	// (0x00045aec) bg_popup_preview_window_pane_g4

0xc690,	// (0x00045af4) bg_popup_preview_window_pane_g5

0xc698,	// (0x00045afc) bg_popup_preview_window_pane_g6

0xc6a0,	// (0x00045b04) bg_popup_preview_window_pane_g7

0xc6a8,	// (0x00045b0c) bg_popup_preview_window_pane_g8

0xdb0b,	// (0x00046f6f) aid_popup_width_pane

0x9f1c,	// (0x00043380) popup_midp_note_alarm_window_ParamLimits

0x9f1c,	// (0x00043380) popup_midp_note_alarm_window

0xb8da,	// (0x00044d3e) data_form_pane_ParamLimits

0x9236,	// (0x0004269a) form_field_data_pane_g1

0x9240,	// (0x000426a4) form_field_data_pane_t1_ParamLimits

0xb8e6,	// (0x00044d4a) input_focus_pane_ParamLimits

0x925a,	// (0x000426be) data_form_wide_pane_ParamLimits

0x926b,	// (0x000426cf) form_field_data_wide_pane_g1

0x9277,	// (0x000426db) form_field_data_wide_pane_t1_ParamLimits

0xb7da,	// (0x00044c3e) input_focus_pane_cp6_ParamLimits

0x940e,	// (0x00042872) input_popup_find_pane_g1_ParamLimits

0x940e,	// (0x00042872) input_popup_find_pane_g1

0xf17d,	// (0x000485e1) aid_navi_side_left_pane

0xf192,	// (0x000485f6) aid_navi_side_right_pane

0x29b7,	// (0x0003be1b) bg_popup_window_pane_cp30_ParamLimits

0x29b7,	// (0x0003be1b) bg_popup_window_pane_cp30

0x2a31,	// (0x0003be95) popup_midp_note_alarm_window_g1_ParamLimits

0x2a31,	// (0x0003be95) popup_midp_note_alarm_window_g1

0x2a61,	// (0x0003bec5) popup_midp_note_alarm_window_t1_ParamLimits

0x2a61,	// (0x0003bec5) popup_midp_note_alarm_window_t1

0xc4c1,	// (0x00045925) popup_midp_note_alarm_window_t2_ParamLimits

0xc4c1,	// (0x00045925) popup_midp_note_alarm_window_t2

0xc56f,	// (0x000459d3) popup_midp_note_alarm_window_t3_ParamLimits

0xc56f,	// (0x000459d3) popup_midp_note_alarm_window_t3

0xc597,	// (0x000459fb) popup_midp_note_alarm_window_t4_ParamLimits

0xc597,	// (0x000459fb) popup_midp_note_alarm_window_t4

0x2bf8,	// (0x0003c05c) popup_midp_note_alarm_window_t5_ParamLimits

0x2bf8,	// (0x0003c05c) popup_midp_note_alarm_window_t5

0x000a,

0xf866,	// (0x00048cca) popup_midp_note_alarm_window_t_ParamLimits

0xf866,	// (0x00048cca) popup_midp_note_alarm_window_t

0x2ca4,	// (0x0003c108) wait_bar_pane_cp1_ParamLimits

0x2ca4,	// (0x0003c108) wait_bar_pane_cp1

0xb4d4,	// (0x00044938) wait_anim_pane_copy1

0xb4d4,	// (0x00044938) wait_border_pane_copy1

0x26ad,	// (0x0003bb11) wait_border_pane_g1_copy1

0x9291,	// (0x000426f5) form_field_popup_pane_g1

0x9299,	// (0x000426fd) form_field_popup_pane_t1_ParamLimits

0xb8e6,	// (0x00044d4a) input_focus_pane_cp7_ParamLimits

0xb914,	// (0x00044d78) list_form_pane_ParamLimits

0x92b3,	// (0x00042717) form_field_popup_wide_pane_g1

0x92bb,	// (0x0004271f) form_field_popup_wide_pane_t1_ParamLimits

0xb8e6,	// (0x00044d4a) input_focus_pane_cp8_ParamLimits

0xb920,	// (0x00044d84) list_form_wide_pane_ParamLimits

0x3796,	// (0x0003cbfa) aid_size_cell_graphic_pane

0x9347,	// (0x000427ab) data_form_pane_t1_ParamLimits

0xaa7e,	// (0x00043ee2) data_form_wide_pane_t1_ParamLimits

0xa3e3,	// (0x00043847) bg_status_flat_pane

0x896e,	// (0x00041dd2) title_pane_t1_ParamLimits

0xb4ea,	// (0x0004494e) title_pane_t2_ParamLimits

0xb510,	// (0x00044974) title_pane_t3_ParamLimits

0xf532,	// (0x00048996) title_pane_t_ParamLimits

0xbccd,	// (0x00045131) level_1_signal_ParamLimits

0xbcda,	// (0x0004513e) level_2_signal_ParamLimits

0xbce7,	// (0x0004514b) level_3_signal_ParamLimits

0xbcf4,	// (0x00045158) level_4_signal_ParamLimits

0xbd01,	// (0x00045165) level_5_signal_ParamLimits

0xbd0e,	// (0x00045172) level_6_signal_ParamLimits

0xbd1b,	// (0x0004517f) level_7_signal_ParamLimits

0xbccd,	// (0x00045131) level_1_battery_ParamLimits

0xbcda,	// (0x0004513e) level_2_battery_ParamLimits

0xbce7,	// (0x0004514b) level_3_battery_ParamLimits

0xbcf4,	// (0x00045158) level_4_battery_ParamLimits

0xbd01,	// (0x00045165) level_5_battery_ParamLimits

0xbd0e,	// (0x00045172) level_6_battery_ParamLimits

0xbd1b,	// (0x0004517f) level_7_battery_ParamLimits

0x28bc,	// (0x0003bd20) bg_status_flat_pane_g1

0x28c4,	// (0x0003bd28) bg_status_flat_pane_g2

0x28cc,	// (0x0003bd30) bg_status_flat_pane_g3

0x28d4,	// (0x0003bd38) bg_status_flat_pane_g4

0x28dc,	// (0x0003bd40) bg_status_flat_pane_g5

0x28e4,	// (0x0003bd48) bg_status_flat_pane_g6

0x28ec,	// (0x0003bd50) bg_status_flat_pane_g7

0x8a02,	// (0x00041e66) tabs_3_active_pane_t1_ParamLimits

0x8a02,	// (0x00041e66) tabs_3_passive_pane_t1_ParamLimits

0x8a1c,	// (0x00041e80) tabs_4_active_pane_t1_ParamLimits

0x8a1c,	// (0x00041e80) tabs_4_1_passive_pane_t1_ParamLimits

0x944d,	// (0x000428b1) tabs_2_active_pane_t1_ParamLimits

0x944d,	// (0x000428b1) tabs_2_passive_pane_t1_ParamLimits

0xb530,	// (0x00044994) bg_active_tab_pane_cp4_ParamLimits

0x945f,	// (0x000428c3) tabs_2_long_active_pane_t1_ParamLimits

0xba28,	// (0x00044e8c) bg_passive_tab_pane_cp4_ParamLimits

0x0719,	// (0x00039b7d) list_single_midp_graphic_pane_t1_ParamLimits

0xb530,	// (0x00044994) bg_active_tab_pane_cp5_ParamLimits

0x9472,	// (0x000428d6) tabs_3_long_active_pane_t1_ParamLimits

0xba28,	// (0x00044e8c) bg_passive_tab_pane_cp5_ParamLimits

0x0719,	// (0x00039b7d) list_single_midp_graphic_pane_t1

0xa3e3,	// (0x00043847) bg_status_flat_pane_ParamLimits

0x04ed,	// (0x00039951) indicator_pane_cp2_ParamLimits

0x04ed,	// (0x00039951) indicator_pane_cp2

0xa561,	// (0x000439c5) navi_pane_srt_ParamLimits

0xa561,	// (0x000439c5) navi_pane_srt

0x063c,	// (0x00039aa0) popup_clock_digital_analogue_window_cp1

0xb574,	// (0x000449d8) indicator_pane_t1

0xc1a2,	// (0x00045606) copy_highlight_pane

0xc1a2,	// (0x00045606) cursor_graphics_pane

0xc1a2,	// (0x00045606) graphic_within_text_pane

0xc1a2,	// (0x00045606) link_highlight_pane

0x30bb,	// (0x0003c51f) popup_preview_text_window_t5_ParamLimits

0x30bb,	// (0x0003c51f) popup_preview_text_window_t5

0xc20a,	// (0x0004566e) cursor_digital_pane

0xc20a,	// (0x0004566e) cursor_primary_pane

0xc21b,	// (0x0004567f) cursor_primary_small_pane

0xc223,	// (0x00045687) cursor_secondary_pane

0xc22b,	// (0x0004568f) cursor_title_pane

0xc20a,	// (0x0004566e) link_highlight_digital_pane

0xc212,	// (0x00045676) link_highlight_primary_pane

0xc21b,	// (0x0004567f) link_highlight_primary_small_pane

0xc223,	// (0x00045687) link_highlight_secondary_pane

0xc22b,	// (0x0004568f) link_highlight_title_pane

0xc20a,	// (0x0004566e) copy_highlight_digital_pane

0xc20a,	// (0x0004566e) copy_highlight_primary_pane

0xc21b,	// (0x0004567f) copy_highlight_primary_small_pane

0xc223,	// (0x00045687) copy_highlight_secondary_pane

0xc22b,	// (0x0004568f) copy_highlight_title_pane

0xc223,	// (0x00045687) graphic_text_digital_pane

0x295a,	// (0x0003bdbe) graphic_text_primary_pane

0x2963,	// (0x0003bdc7) graphic_text_primary_small_pane

0xc21b,	// (0x0004567f) graphic_text_secondary_pane

0xc20a,	// (0x0004566e) graphic_text_title_pane

0x9927,	// (0x00042d8b) cursor_primary_pane_g1

0x294c,	// (0x0003bdb0) cursor_text_primary_t1

0xc4b7,	// (0x0004591b) cursor_primary_small_pane_g1

0x293e,	// (0x0003bda2) cursor_text_primary_small_t1

0xc4ad,	// (0x00045911) cursor_primary_small_pane_g1_copy1

0x2926,	// (0x0003bd8a) cursor_text_primary_small_t1_copy1

0x2904,	// (0x0003bd68) cursor_text_title_t1

0xc4a3,	// (0x00045907) cursor_title_pane_g1

0x9927,	// (0x00042d8b) cursor_digital_pane_g1

0xc233,	// (0x00045697) cursor_text_digital_t1

0xc241,	// (0x000456a5) link_highlight_primary_pane_g1

0x28ad,	// (0x0003bd11) link_highlight_primary_pane_t1

0xc241,	// (0x000456a5) link_highlight_primary_small_pane_g1

0xc249,	// (0x000456ad) link_highlight_primary_small_pane_t1

0xc241,	// (0x000456a5) link_highlight_secondary_pane_g1

0xc258,	// (0x000456bc) link_highlight_secondary_pane_t1

0x2812,	// (0x0003bc76) link_highlight_title_pane_g1

0x2829,	// (0x0003bc8d) link_highlight_title_pane_t1

0x2812,	// (0x0003bc76) link_highlight_digital_pane_g1

0x281a,	// (0x0003bc7e) link_highlight_digital_pane_t1

0x26cc,	// (0x0003bb30) copy_highlight_primary_pane_g1

0x26f2,	// (0x0003bb56) copy_highlight_primary_pane_t1

0x26cc,	// (0x0003bb30) copy_highlight_primary_small_pane_g1

0x26e3,	// (0x0003bb47) copy_highlight_primary_small_pane_t1

0xc267,	// (0x000456cb) copy_highlight_secondary_pane_g1

0xc26f,	// (0x000456d3) copy_highlight_secondary_pane_t1

0x26cc,	// (0x0003bb30) copy_highlight_title_pane_g1

0x26d4,	// (0x0003bb38) copy_highlight_title_pane_t1

0x26cc,	// (0x0003bb30) copy_highlight_digital_pane_g1

0x3964,	// (0x0003cdc8) copy_highlight_digital_pane_t1

0x38b8,	// (0x0003cd1c) graphic_text_primary_pane_g1

0x3948,	// (0x0003cdac) graphic_text_primary_pane_t1

0x3956,	// (0x0003cdba) graphic_text_primary_pane_t2

0x0001,

0xf995,	// (0x00048df9) graphic_text_primary_pane_t

0x3924,	// (0x0003cd88) graphic_text_primary_small_pane_g1

0x392c,	// (0x0003cd90) graphic_text_primary_small_pane_t1

0x393a,	// (0x0003cd9e) graphic_text_primary_small_pane_t2

0x0001,

0xf990,	// (0x00048df4) graphic_text_primary_small_pane_t

0x3900,	// (0x0003cd64) graphic_text_secondary_pane_g1

0x3908,	// (0x0003cd6c) graphic_text_secondary_pane_t1

0x3916,	// (0x0003cd7a) graphic_text_secondary_pane_t2

0x0001,

0xf98b,	// (0x00048def) graphic_text_secondary_pane_t

0x38dc,	// (0x0003cd40) graphic_text_title_pane_g1

0x38e4,	// (0x0003cd48) graphic_text_title_pane_t1

0x38f2,	// (0x0003cd56) graphic_text_title_pane_t2

0x0001,

0xf986,	// (0x00048dea) graphic_text_title_pane_t

0x38b8,	// (0x0003cd1c) graphic_text_digital_pane_g1

0x38c0,	// (0x0003cd24) graphic_text_digital_pane_t1

0x38ce,	// (0x0003cd32) graphic_text_digital_pane_t2

0x0001,

0xf981,	// (0x00048de5) graphic_text_digital_pane_t

0xb530,	// (0x00044994) navi_icon_pane_srt_ParamLimits

0xb530,	// (0x00044994) navi_icon_pane_srt

0xb4d4,	// (0x00044938) navi_midp_pane_srt

0xb4d4,	// (0x00044938) navi_navi_pane_srt

0xb530,	// (0x00044994) navi_text_pane_srt_ParamLimits

0xb530,	// (0x00044994) navi_text_pane_srt

0x3883,	// (0x0003cce7) navi_navi_icon_text_pane_srt

0x388b,	// (0x0003ccef) navi_navi_pane_srt_g1_ParamLimits

0x388b,	// (0x0003ccef) navi_navi_pane_srt_g1

0x389d,	// (0x0003cd01) navi_navi_pane_srt_g2_ParamLimits

0x389d,	// (0x0003cd01) navi_navi_pane_srt_g2

0x0001,

0xf97c,	// (0x00048de0) navi_navi_pane_srt_g_ParamLimits

0xf97c,	// (0x00048de0) navi_navi_pane_srt_g

0x38af,	// (0x0003cd13) navi_navi_tabs_pane_srt

0x3883,	// (0x0003cce7) navi_navi_text_pane_srt

0x3883,	// (0x0003cce7) navi_navi_volume_pane_srt

0x3874,	// (0x0003ccd8) navi_navi_text_pane_srt_t1

0x0ba7,	// (0x0003a00b) navi_navi_volume_pane_srt_g1

0x0baf,	// (0x0003a013) volume_small_pane_srt_ParamLimits

0x0baf,	// (0x0003a013) volume_small_pane_srt

0xf3fd,	// (0x00048861) volume_small_pane_srt_g1_ParamLimits

0xf3fd,	// (0x00048861) volume_small_pane_srt_g1

0xf40d,	// (0x00048871) volume_small_pane_srt_g2_ParamLimits

0xf40d,	// (0x00048871) volume_small_pane_srt_g2

0xf41e,	// (0x00048882) volume_small_pane_srt_g3_ParamLimits

0xf41e,	// (0x00048882) volume_small_pane_srt_g3

0xf42f,	// (0x00048893) volume_small_pane_srt_g4_ParamLimits

0xf42f,	// (0x00048893) volume_small_pane_srt_g4

0xf440,	// (0x000488a4) volume_small_pane_srt_g5_ParamLimits

0xf440,	// (0x000488a4) volume_small_pane_srt_g5

0xf451,	// (0x000488b5) volume_small_pane_srt_g6_ParamLimits

0xf451,	// (0x000488b5) volume_small_pane_srt_g6

0xf462,	// (0x000488c6) volume_small_pane_srt_g7_ParamLimits

0xf462,	// (0x000488c6) volume_small_pane_srt_g7

0xf473,	// (0x000488d7) volume_small_pane_srt_g8_ParamLimits

0xf473,	// (0x000488d7) volume_small_pane_srt_g8

0xf484,	// (0x000488e8) volume_small_pane_srt_g9_ParamLimits

0xf484,	// (0x000488e8) volume_small_pane_srt_g9

0xf495,	// (0x000488f9) volume_small_pane_srt_g10_ParamLimits

0xf495,	// (0x000488f9) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x00048b8d) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x00048b8d) volume_small_pane_srt_g

0x8d03,	// (0x00042167) query_popup_data_pane_cp2

0x385a,	// (0x0003ccbe) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x385a,	// (0x0003ccbe) navi_navi_icon_text_pane_srt_t1

0x295a,	// (0x0003bdbe) navi_tabs_2_long_pane_srt

0x295a,	// (0x0003bdbe) navi_tabs_2_pane_srt

0x295a,	// (0x0003bdbe) navi_tabs_3_long_pane_srt

0x295a,	// (0x0003bdbe) navi_tabs_3_pane_srt

0x295a,	// (0x0003bdbe) navi_tabs_4_pane_srt

0xab06,	// (0x00043f6a) tabs_2_active_pane_srt_ParamLimits

0xab06,	// (0x00043f6a) tabs_2_active_pane_srt

0xab16,	// (0x00043f7a) tabs_2_passive_pane_srt_ParamLimits

0xab16,	// (0x00043f7a) tabs_2_passive_pane_srt

0x2109,	// (0x0003b56d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2109,	// (0x0003b56d) bg_passive_tab_pane_cp1_srt

0xcac2,	// (0x00045f26) bg_passive_tab_pane_g1_cp1_srt

0x979d,	// (0x00042c01) bg_passive_tab_pane_g2_cp1_srt

0xcacb,	// (0x00045f2f) bg_passive_tab_pane_g3_cp1_srt

0xb522,	// (0x00044986) bg_active_tab_pane_cp1_srt_ParamLimits

0xb522,	// (0x00044986) bg_active_tab_pane_cp1_srt

0xcad4,	// (0x00045f38) tabs_2_active_pane_srt_g1

0xcadc,	// (0x00045f40) tabs_2_active_pane_srt_t1_ParamLimits

0xcadc,	// (0x00045f40) tabs_2_active_pane_srt_t1

0xcac2,	// (0x00045f26) bg_active_tab_pane_g1_cp1_srt

0x979d,	// (0x00042c01) bg_active_tab_pane_g2_cp1_srt

0xcacb,	// (0x00045f2f) bg_active_tab_pane_g3_cp1_srt

0xaad3,	// (0x00043f37) tabs_3_active_pane_srt_ParamLimits

0xaad3,	// (0x00043f37) tabs_3_active_pane_srt

0xaae4,	// (0x00043f48) tabs_3_passive_pane_cp_srt_ParamLimits

0xaae4,	// (0x00043f48) tabs_3_passive_pane_cp_srt

0xaaf5,	// (0x00043f59) tabs_3_passive_pane_srt_ParamLimits

0xaaf5,	// (0x00043f59) tabs_3_passive_pane_srt

0x2109,	// (0x0003b56d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2109,	// (0x0003b56d) bg_passive_tab_pane_cp2_srt

0x9931,	// (0x00042d95) bg_passive_tab_pane_g1_cp2_srt

0x979d,	// (0x00042c01) bg_passive_tab_pane_g2_cp2_srt

0x993a,	// (0x00042d9e) bg_passive_tab_pane_g3_cp2_srt

0xb522,	// (0x00044986) bg_active_tab_pane_cp2_srt_ParamLimits

0xb522,	// (0x00044986) bg_active_tab_pane_cp2_srt

0xcaa4,	// (0x00045f08) tabs_3_active_pane_srt_g1

0xcaac,	// (0x00045f10) tabs_3_active_pane_srt_t1_ParamLimits

0xcaac,	// (0x00045f10) tabs_3_active_pane_srt_t1

0x9931,	// (0x00042d95) bg_active_tab_pane_g1_cp2_srt

0x979d,	// (0x00042c01) bg_active_tab_pane_g2_cp2_srt

0x993a,	// (0x00042d9e) bg_active_tab_pane_g3_cp2_srt

0x0b0c,	// (0x00039f70) tabs_4_active_pane_srt_ParamLimits

0x0b0c,	// (0x00039f70) tabs_4_active_pane_srt

0x0b1e,	// (0x00039f82) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0b1e,	// (0x00039f82) tabs_4_passive_pane_cp2_srt

0xf4b5,	// (0x00048919) aid_size_cell_toolbar

0x3458,	// (0x0003c8bc) main_idle_act_pane_ParamLimits

0xf503,	// (0x00048967) popup_large_graphic_colour_window_ParamLimits

0xa252,	// (0x000436b6) popup_toolbar_window_ParamLimits

0xa252,	// (0x000436b6) popup_toolbar_window

0x360c,	// (0x0003ca70) list_single_graphic_2heading_pane_ParamLimits

0x360c,	// (0x0003ca70) list_single_graphic_2heading_pane

0xbbb5,	// (0x00045019) aid_size_cell_apps_grid_lsc_pane

0xbbc7,	// (0x0004502b) aid_size_cell_apps_grid_prt_pane

0xba28,	// (0x00044e8c) bg_wml_button_pane_cp1_ParamLimits

0xba28,	// (0x00044e8c) bg_wml_button_pane_cp1

0xa883,	// (0x00043ce7) form_midp_field_text_pane_t1_ParamLimits

0x2109,	// (0x0003b56d) input_focus_pane_cp050_ParamLimits

0x2379,	// (0x0003b7dd) list_midp_form_text_pane_ParamLimits

0x231c,	// (0x0003b780) input_focus_pane_cp051_ParamLimits

0x2330,	// (0x0003b794) list_midp_choice_pane_ParamLimits

0xa7e8,	// (0x00043c4c) list_single_2graphic_pane_cp3_ParamLimits

0xa7e8,	// (0x00043c4c) list_single_2graphic_pane_cp3

0xa7fc,	// (0x00043c60) list_single_midp_graphic_pane_ParamLimits

0xa7fc,	// (0x00043c60) list_single_midp_graphic_pane

0xdd73,	// (0x000471d7) list_single_graphic_2heading_pane_g1_ParamLimits

0xdd73,	// (0x000471d7) list_single_graphic_2heading_pane_g1

0xdd7f,	// (0x000471e3) list_single_graphic_2heading_pane_g4_ParamLimits

0xdd7f,	// (0x000471e3) list_single_graphic_2heading_pane_g4

0xdd8b,	// (0x000471ef) list_single_graphic_2heading_pane_g5_ParamLimits

0xdd8b,	// (0x000471ef) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x00048be0) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x00048be0) list_single_graphic_2heading_pane_g

0xdd97,	// (0x000471fb) list_single_graphic_2heading_pane_t1_ParamLimits

0xdd97,	// (0x000471fb) list_single_graphic_2heading_pane_t1

0xddab,	// (0x0004720f) list_single_graphic_2heading_pane_t2_ParamLimits

0xddab,	// (0x0004720f) list_single_graphic_2heading_pane_t2

0xddc5,	// (0x00047229) list_single_graphic_2heading_pane_t3_ParamLimits

0xddc5,	// (0x00047229) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x00048be7) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x00048be7) list_single_graphic_2heading_pane_t

0x1fbb,	// (0x0003b41f) bg_popup_sub_pane_cp2

0x1fe5,	// (0x0003b449) grid_toobar_pane

0x0688,	// (0x00039aec) cell_toolbar_pane_ParamLimits

0x0688,	// (0x00039aec) cell_toolbar_pane

0x2021,	// (0x0003b485) cell_toolbar_pane_g1_ParamLimits

0x2021,	// (0x0003b485) cell_toolbar_pane_g1

0xa700,	// (0x00043b64) cell_toolbar_pane_g2_ParamLimits

0xa700,	// (0x00043b64) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x00048bf5) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x00048bf5) cell_toolbar_pane_g

0x2057,	// (0x0003b4bb) grid_highlight_pane_cp2_ParamLimits

0x2057,	// (0x0003b4bb) grid_highlight_pane_cp2

0x2071,	// (0x0003b4d5) toolbar_button_pane

0x207d,	// (0x0003b4e1) toolbar_button_pane_g1

0x2085,	// (0x0003b4e9) toolbar_button_pane_g2

0x208d,	// (0x0003b4f1) toolbar_button_pane_g3

0x2095,	// (0x0003b4f9) toolbar_button_pane_g4

0x209d,	// (0x0003b501) toolbar_button_pane_g5

0x20a5,	// (0x0003b509) toolbar_button_pane_g6

0x20ad,	// (0x0003b511) toolbar_button_pane_g7

0x20b5,	// (0x0003b519) toolbar_button_pane_g8

0x20bd,	// (0x0003b521) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x00048bfa) toolbar_button_pane_g

0x06c0,	// (0x00039b24) list_single_2graphic_pane_g1_cp3_ParamLimits

0x06c0,	// (0x00039b24) list_single_2graphic_pane_g1_cp3

0xa714,	// (0x00043b78) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa714,	// (0x00043b78) list_single_2graphic_pane_g2_cp3

0x06dd,	// (0x00039b41) list_single_2graphic_pane_g3_cp3

0x06e5,	// (0x00039b49) list_single_2graphic_pane_g4_cp3_ParamLimits

0x06e5,	// (0x00039b49) list_single_2graphic_pane_g4_cp3

0xa725,	// (0x00043b89) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa725,	// (0x00043b89) list_single_2graphic_pane_t1_cp3

0x070d,	// (0x00039b71) list_single_midp_graphic_pane_g2_ParamLimits

0x070d,	// (0x00039b71) list_single_midp_graphic_pane_g2

0xf4bd,	// (0x00048921) aid_zoom_text_primary

0xdd63,	// (0x000471c7) aid_zoom_text_secondary

0xc2e4,	// (0x00045748) status_small_pane_g7_ParamLimits

0xc2e4,	// (0x00045748) status_small_pane_g7

0x9996,	// (0x00042dfa) status_small_pane_t1_ParamLimits

0x894a,	// (0x00041dae) title_pane_g2

0x0003,

0xf529,	// (0x0004898d) title_pane_g

0x8d5d,	// (0x000421c1) aid_size_cell_colour_1_pane_ParamLimits

0x8d5d,	// (0x000421c1) aid_size_cell_colour_1_pane

0x8d71,	// (0x000421d5) aid_size_cell_colour_2_pane_ParamLimits

0x8d71,	// (0x000421d5) aid_size_cell_colour_2_pane

0x8d85,	// (0x000421e9) aid_size_cell_colour_3_pane_ParamLimits

0x8d85,	// (0x000421e9) aid_size_cell_colour_3_pane

0x8d99,	// (0x000421fd) aid_size_cell_colour_4_pane_ParamLimits

0x8d99,	// (0x000421fd) aid_size_cell_colour_4_pane

0xf0ba,	// (0x0004851e) title_pane_stacon_g1_ParamLimits

0xf0ba,	// (0x0004851e) title_pane_stacon_g1

0x2749,	// (0x0003bbad) popup_note_wait_window_g3_ParamLimits

0x2749,	// (0x0003bbad) popup_note_wait_window_g3

0x27bf,	// (0x0003bc23) popup_note_wait_window_t5_ParamLimits

0x27bf,	// (0x0003bc23) popup_note_wait_window_t5

0xb4d4,	// (0x00044938) main_feb_china_hwr_fs_writing_pane

0x9c06,	// (0x0004306a) popup_feb_china_hwr_fs_window_ParamLimits

0x9c06,	// (0x0004306a) popup_feb_china_hwr_fs_window

0xa741,	// (0x00043ba5) aid_size_cell_hwr_fs_ParamLimits

0xa741,	// (0x00043ba5) aid_size_cell_hwr_fs

0x2109,	// (0x0003b56d) bg_popup_sub_pane_cp3_ParamLimits

0x2109,	// (0x0003b56d) bg_popup_sub_pane_cp3

0xa756,	// (0x00043bba) grid_hwr_fs_pane_ParamLimits

0xa756,	// (0x00043bba) grid_hwr_fs_pane

0x075c,	// (0x00039bc0) linegrid_hwr_fs_pane_ParamLimits

0x075c,	// (0x00039bc0) linegrid_hwr_fs_pane

0xa76e,	// (0x00043bd2) cell_hwr_fs_pane_ParamLimits

0xa76e,	// (0x00043bd2) cell_hwr_fs_pane

0x2115,	// (0x0003b579) linegrid_hwr_fs_pane_g1_ParamLimits

0x2115,	// (0x0003b579) linegrid_hwr_fs_pane_g1

0xa794,	// (0x00043bf8) linegrid_hwr_fs_pane_g2_ParamLimits

0xa794,	// (0x00043bf8) linegrid_hwr_fs_pane_g2

0x2133,	// (0x0003b597) linegrid_hwr_fs_pane_g3_ParamLimits

0x2133,	// (0x0003b597) linegrid_hwr_fs_pane_g3

0xa7a6,	// (0x00043c0a) linegrid_hwr_fs_pane_g4_ParamLimits

0xa7a6,	// (0x00043c0a) linegrid_hwr_fs_pane_g4

0x07a8,	// (0x00039c0c) linegrid_hwr_fs_pane_g5_ParamLimits

0x07a8,	// (0x00039c0c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bc,	// (0x00048c20) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bc,	// (0x00048c20) linegrid_hwr_fs_pane_g

0x213f,	// (0x0003b5a3) cell_hwr_fs_pane_g1_ParamLimits

0x213f,	// (0x0003b5a3) cell_hwr_fs_pane_g1

0x1ef5,	// (0x0003b359) cell_hwr_fs_pane_g2_ParamLimits

0x1ef5,	// (0x0003b359) cell_hwr_fs_pane_g2

0xa7c0,	// (0x00043c24) cell_hwr_fs_pane_g3_ParamLimits

0xa7c0,	// (0x00043c24) cell_hwr_fs_pane_g3

0xa7cd,	// (0x00043c31) cell_hwr_fs_pane_g4_ParamLimits

0xa7cd,	// (0x00043c31) cell_hwr_fs_pane_g4

0x0003,

0xf7c7,	// (0x00048c2b) cell_hwr_fs_pane_g_ParamLimits

0xf7c7,	// (0x00048c2b) cell_hwr_fs_pane_g

0xa7da,	// (0x00043c3e) cell_hwr_fs_pane_t1

0xb4d4,	// (0x00044938) grid_highlight_pane_cp6

0xb4d4,	// (0x00044938) main_idle_act2_pane

0xb9ff,	// (0x00044e63) aid_inside_area_popup_secondary

0xc5d6,	// (0x00045a3a) aid_inside_area_window_primary_ParamLimits

0xc5d6,	// (0x00045a3a) aid_inside_area_window_primary

0xcafa,	// (0x00045f5e) ai2_news_ticker_pane

0x397b,	// (0x0003cddf) aid_size_cell_ai1_link_ParamLimits

0x397b,	// (0x0003cddf) aid_size_cell_ai1_link

0xcb02,	// (0x00045f66) popup_ai2_data_window_ParamLimits

0xcb02,	// (0x00045f66) popup_ai2_data_window

0x39ab,	// (0x0003ce0f) popup_ai2_link_window_ParamLimits

0x39ab,	// (0x0003ce0f) popup_ai2_link_window

0x2109,	// (0x0003b56d) bg_popup_sub_pane_cp4_ParamLimits

0x2109,	// (0x0003b56d) bg_popup_sub_pane_cp4

0x39bf,	// (0x0003ce23) grid_ai2_link_pane_ParamLimits

0x39bf,	// (0x0003ce23) grid_ai2_link_pane

0x39d6,	// (0x0003ce3a) popup_ai2_link_window_g1_ParamLimits

0x39d6,	// (0x0003ce3a) popup_ai2_link_window_g1

0x39e2,	// (0x0003ce46) popup_ai2_link_window_g2_ParamLimits

0x39e2,	// (0x0003ce46) popup_ai2_link_window_g2

0x0001,

0xf99a,	// (0x00048dfe) popup_ai2_link_window_g_ParamLimits

0xf99a,	// (0x00048dfe) popup_ai2_link_window_g

0x39f1,	// (0x0003ce55) ai2_mp_button_pane

0x39f9,	// (0x0003ce5d) ai2_mp_volume_pane

0x231c,	// (0x0003b780) bg_popup_sub_pane_cp5_ParamLimits

0x231c,	// (0x0003b780) bg_popup_sub_pane_cp5

0x3a01,	// (0x0003ce65) heading_ai2_gene_pane_ParamLimits

0x3a01,	// (0x0003ce65) heading_ai2_gene_pane

0x3a0d,	// (0x0003ce71) list_ai2_gene_pane_ParamLimits

0x3a0d,	// (0x0003ce71) list_ai2_gene_pane

0x3a55,	// (0x0003ceb9) cell_ai2_link_pane_ParamLimits

0x3a55,	// (0x0003ceb9) cell_ai2_link_pane

0x3a6b,	// (0x0003cecf) cell_ai2_link_pane_g1

0xb4d4,	// (0x00044938) grid_highlight_pane_cp7

0x0bc4,	// (0x0003a028) ai2_mp_volume_pane_g1

0x3b3b,	// (0x0003cf9f) ai2_mp_volume_pane_g2

0x3ab0,	// (0x0003cf14) list_ai2_gene_pane_t1

0x3b43,	// (0x0003cfa7) ai2_mp_volume_pane_g3

0x0002,

0xf9b3,	// (0x00048e17) ai2_mp_volume_pane_g

0xab26,	// (0x00043f8a) volume_small_pane_cp3

0x3b4b,	// (0x0003cfaf) aid_size_cell_ai2_button

0x3b53,	// (0x0003cfb7) grid_ai2_button_pane

0x3b5c,	// (0x0003cfc0) cell_ai2_button_pane_ParamLimits

0x3b5c,	// (0x0003cfc0) cell_ai2_button_pane

0xb4ca,	// (0x0004492e) cell_ai2_button_pane_g1

0xb4d4,	// (0x00044938) grid_highlight_pane_cp8

0x3afb,	// (0x0003cf5f) ai2_gene_pane_t1_ParamLimits

0x3afb,	// (0x0003cf5f) ai2_gene_pane_t1

0x9b68,	// (0x00042fcc) aid_height_parent_landscape

0xc82c,	// (0x00045c90) aid_height_set_list

0x3458,	// (0x0003c8bc) aid_size_parent

0x3796,	// (0x0003cbfa) aid_size_cell_graphic_pane_ParamLimits

0x3a1d,	// (0x0003ce81) popup_ai2_data_window_g1_ParamLimits

0x3a1d,	// (0x0003ce81) popup_ai2_data_window_g1

0x3a29,	// (0x0003ce8d) ai2_news_ticker_pane_g1

0x3a31,	// (0x0003ce95) ai2_news_ticker_pane_g2

0x0001,

0xf99f,	// (0x00048e03) ai2_news_ticker_pane_g

0x3a39,	// (0x0003ce9d) ai2_news_ticker_pane_t1

0x3a47,	// (0x0003ceab) ai2_news_ticker_pane_t2

0x0001,

0xf9a4,	// (0x00048e08) ai2_news_ticker_pane_t

0x3a74,	// (0x0003ced8) heading_ai2_gene_pane_g1

0x3a7c,	// (0x0003cee0) heading_ai2_gene_pane_t1_ParamLimits

0x3a7c,	// (0x0003cee0) heading_ai2_gene_pane_t1

0x3a91,	// (0x0003cef5) list_highlight_pane_cp6

0x3a99,	// (0x0003cefd) ai2_gene_pane_ParamLimits

0x3a99,	// (0x0003cefd) ai2_gene_pane

0x3abe,	// (0x0003cf22) list_ai2_gene_pane_t2

0x0001,

0xf9a9,	// (0x00048e0d) list_ai2_gene_pane_t

0x3acc,	// (0x0003cf30) list_highlight_pane_cp8_ParamLimits

0x3acc,	// (0x0003cf30) list_highlight_pane_cp8

0x3add,	// (0x0003cf41) ai2_gene_pane_g1_ParamLimits

0x3add,	// (0x0003cf41) ai2_gene_pane_g1

0x3aef,	// (0x0003cf53) ai2_gene_pane_g2_ParamLimits

0x3aef,	// (0x0003cf53) ai2_gene_pane_g2

0x0001,

0xf9ae,	// (0x00048e12) ai2_gene_pane_g_ParamLimits

0xf9ae,	// (0x00048e12) ai2_gene_pane_g

0xb885,	// (0x00044ce9) scroll_pane_cp12

0x9b25,	// (0x00042f89) control_pane_t3_ParamLimits

0x9b25,	// (0x00042f89) control_pane_t3

0x9987,	// (0x00042deb) status_small_pane_g8_ParamLimits

0x9987,	// (0x00042deb) status_small_pane_g8

0x9cc9,	// (0x0004312d) popup_find_window_ParamLimits

0x9f56,	// (0x000433ba) popup_note_image_window_ParamLimits

0xdb44,	// (0x00046fa8) list_double2_graphic_pane_vc_g1_ParamLimits

0xdb44,	// (0x00046fa8) list_double2_graphic_pane_vc_g1

0xdddd,	// (0x00047241) list_double2_graphic_pane_vc_g2_ParamLimits

0xdddd,	// (0x00047241) list_double2_graphic_pane_vc_g2

0xdde9,	// (0x0004724d) list_double2_graphic_pane_vc_g3_ParamLimits

0xdde9,	// (0x0004724d) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x00048bee) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x00048bee) list_double2_graphic_pane_vc_g

0xdb68,	// (0x00046fcc) list_double2_graphic_pane_vc_t1_ParamLimits

0xdb68,	// (0x00046fcc) list_double2_graphic_pane_vc_t1

0xdb50,	// (0x00046fb4) list_single_heading_pane_vc_g1_ParamLimits

0xdb50,	// (0x00046fb4) list_single_heading_pane_vc_g1

0xdb5c,	// (0x00046fc0) list_single_heading_pane_vc_g2_ParamLimits

0xdb5c,	// (0x00046fc0) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00048a07) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00048a07) list_single_heading_pane_vc_g

0xddf5,	// (0x00047259) list_single_heading_pane_vc_t1_ParamLimits

0xddf5,	// (0x00047259) list_single_heading_pane_vc_t1

0xde0b,	// (0x0004726f) list_single_heading_pane_vc_t2_ParamLimits

0xde0b,	// (0x0004726f) list_single_heading_pane_vc_t2

0x0001,

0xf7ab,	// (0x00048c0f) list_single_heading_pane_vc_t_ParamLimits

0xf7ab,	// (0x00048c0f) list_single_heading_pane_vc_t

0x20c5,	// (0x0003b529) list_setting_number_pane_vc_g1_ParamLimits

0x20c5,	// (0x0003b529) list_setting_number_pane_vc_g1

0x20d1,	// (0x0003b535) list_setting_number_pane_vc_g2_ParamLimits

0x20d1,	// (0x0003b535) list_setting_number_pane_vc_g2

0x0001,

0xf7b0,	// (0x00048c14) list_setting_number_pane_vc_g_ParamLimits

0xf7b0,	// (0x00048c14) list_setting_number_pane_vc_g

0xde1d,	// (0x00047281) list_setting_number_pane_vc_t1_ParamLimits

0xde1d,	// (0x00047281) list_setting_number_pane_vc_t1

0xde31,	// (0x00047295) list_setting_number_pane_vc_t2_ParamLimits

0xde31,	// (0x00047295) list_setting_number_pane_vc_t2

0xde4d,	// (0x000472b1) list_setting_number_pane_vc_t3_ParamLimits

0xde4d,	// (0x000472b1) list_setting_number_pane_vc_t3

0x0002,

0xf7b5,	// (0x00048c19) list_setting_number_pane_vc_t_ParamLimits

0xf7b5,	// (0x00048c19) list_setting_number_pane_vc_t

0xde77,	// (0x000472db) set_value_pane_vc_ParamLimits

0xde77,	// (0x000472db) set_value_pane_vc

0x360c,	// (0x0003ca70) list_double2_graphic_pane_vc_ParamLimits

0x360c,	// (0x0003ca70) list_double2_graphic_pane_vc

0x360c,	// (0x0003ca70) list_double2_large_graphic_pane_vc_ParamLimits

0x360c,	// (0x0003ca70) list_double2_large_graphic_pane_vc

0x360c,	// (0x0003ca70) list_double2_pane_vc_ParamLimits

0x360c,	// (0x0003ca70) list_double2_pane_vc

0x360c,	// (0x0003ca70) list_double_graphic_heading_pane_vc_ParamLimits

0x360c,	// (0x0003ca70) list_double_graphic_heading_pane_vc

0x360c,	// (0x0003ca70) list_double_graphic_pane_vc_ParamLimits

0x360c,	// (0x0003ca70) list_double_graphic_pane_vc

0x360c,	// (0x0003ca70) list_double_heading_pane_vc_ParamLimits

0x360c,	// (0x0003ca70) list_double_heading_pane_vc

0xde96,	// (0x000472fa) list_double_large_graphic_pane_vc_ParamLimits

0xde96,	// (0x000472fa) list_double_large_graphic_pane_vc

0x360c,	// (0x0003ca70) list_double_number_pane_vc_ParamLimits

0x360c,	// (0x0003ca70) list_double_number_pane_vc

0x360c,	// (0x0003ca70) list_double_pane_vc_ParamLimits

0x360c,	// (0x0003ca70) list_double_pane_vc

0x360c,	// (0x0003ca70) list_double_time_pane_vc_ParamLimits

0x360c,	// (0x0003ca70) list_double_time_pane_vc

0x360c,	// (0x0003ca70) list_setting_number_pane_vc_ParamLimits

0x360c,	// (0x0003ca70) list_setting_number_pane_vc

0x360c,	// (0x0003ca70) list_setting_pane_vc_ParamLimits

0x360c,	// (0x0003ca70) list_setting_pane_vc

0x360c,	// (0x0003ca70) list_single_graphic_heading_pane_vc_ParamLimits

0x360c,	// (0x0003ca70) list_single_graphic_heading_pane_vc

0x360c,	// (0x0003ca70) list_single_heading_pane_vc_ParamLimits

0x360c,	// (0x0003ca70) list_single_heading_pane_vc

0x360c,	// (0x0003ca70) list_single_number_heading_pane_vc_ParamLimits

0x360c,	// (0x0003ca70) list_single_number_heading_pane_vc

0xdbca,	// (0x0004702e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xdbca,	// (0x0004702e) list_double_graphic_heading_pane_vc_g1

0xdddd,	// (0x00047241) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xdddd,	// (0x00047241) list_double_graphic_heading_pane_vc_g2

0xdde9,	// (0x0004724d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xdde9,	// (0x0004724d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ba,	// (0x00048e1e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ba,	// (0x00048e1e) list_double_graphic_heading_pane_vc_g

0xdeb5,	// (0x00047319) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xdeb5,	// (0x00047319) list_double_graphic_heading_pane_vc_t1

0xdec9,	// (0x0004732d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xdec9,	// (0x0004732d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c1,	// (0x00048e25) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c1,	// (0x00048e25) list_double_graphic_heading_pane_vc_t

0x20c5,	// (0x0003b529) list_setting_pane_vc_g1_ParamLimits

0x20c5,	// (0x0003b529) list_setting_pane_vc_g1

0x20d1,	// (0x0003b535) list_setting_pane_vc_g2_ParamLimits

0x20d1,	// (0x0003b535) list_setting_pane_vc_g2

0x0001,

0xf7b0,	// (0x00048c14) list_setting_pane_vc_g_ParamLimits

0xf7b0,	// (0x00048c14) list_setting_pane_vc_g

0xdee1,	// (0x00047345) list_setting_pane_vc_t1_ParamLimits

0xdee1,	// (0x00047345) list_setting_pane_vc_t1

0xdefd,	// (0x00047361) list_setting_pane_vc_t2_ParamLimits

0xdefd,	// (0x00047361) list_setting_pane_vc_t2

0x0001,

0xfa04,	// (0x00048e68) list_setting_pane_vc_t_ParamLimits

0xfa04,	// (0x00048e68) list_setting_pane_vc_t

0xde77,	// (0x000472db) set_value_pane_cp_vc_ParamLimits

0xde77,	// (0x000472db) set_value_pane_cp_vc

0xdb50,	// (0x00046fb4) list_single_number_heading_pane_vc_g1_ParamLimits

0xdb50,	// (0x00046fb4) list_single_number_heading_pane_vc_g1

0xdb5c,	// (0x00046fc0) list_single_number_heading_pane_vc_g2_ParamLimits

0xdb5c,	// (0x00046fc0) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00048a07) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00048a07) list_single_number_heading_pane_vc_g

0xdb7e,	// (0x00046fe2) list_single_number_heading_pane_vc_t1_ParamLimits

0xdb7e,	// (0x00046fe2) list_single_number_heading_pane_vc_t1

0xdf17,	// (0x0004737b) list_single_number_heading_pane_vc_t2_ParamLimits

0xdf17,	// (0x0004737b) list_single_number_heading_pane_vc_t2

0xdf2d,	// (0x00047391) list_single_number_heading_pane_vc_t3_ParamLimits

0xdf2d,	// (0x00047391) list_single_number_heading_pane_vc_t3

0x0002,

0xfa09,	// (0x00048e6d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x00048e6d) list_single_number_heading_pane_vc_t

0xdf3f,	// (0x000473a3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xdf3f,	// (0x000473a3) list_single_graphic_heading_pane_vc_g1

0xdb50,	// (0x00046fb4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xdb50,	// (0x00046fb4) list_single_graphic_heading_pane_vc_g4

0xdb5c,	// (0x00046fc0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xdb5c,	// (0x00046fc0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa10,	// (0x00048e74) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa10,	// (0x00048e74) list_single_graphic_heading_pane_vc_g

0xdb7e,	// (0x00046fe2) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xdb7e,	// (0x00046fe2) list_single_graphic_heading_pane_vc_t1

0xdf4b,	// (0x000473af) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xdf4b,	// (0x000473af) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa17,	// (0x00048e7b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa17,	// (0x00048e7b) list_single_graphic_heading_pane_vc_t

0xdb50,	// (0x00046fb4) list_double2_pane_vc_g1_ParamLimits

0xdb50,	// (0x00046fb4) list_double2_pane_vc_g1

0xdb5c,	// (0x00046fc0) list_double2_pane_vc_g2_ParamLimits

0xdb5c,	// (0x00046fc0) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00048a07) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00048a07) list_double2_pane_vc_g

0xdf5d,	// (0x000473c1) list_double2_pane_vc_t1_ParamLimits

0xdf5d,	// (0x000473c1) list_double2_pane_vc_t1

0xdbd6,	// (0x0004703a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xdbd6,	// (0x0004703a) list_double2_large_graphic_pane_vc_g1

0xdb50,	// (0x00046fb4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xdb50,	// (0x00046fb4) list_double2_large_graphic_pane_vc_g2

0xdb5c,	// (0x00046fc0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xdb5c,	// (0x00046fc0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00048a24) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00048a24) list_double2_large_graphic_pane_vc_g

0xdb68,	// (0x00046fcc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdb68,	// (0x00046fcc) list_double2_large_graphic_pane_vc_t1

0xdf75,	// (0x000473d9) list_double_time_pane_vc_g1_ParamLimits

0xdf75,	// (0x000473d9) list_double_time_pane_vc_g1

0xdf81,	// (0x000473e5) list_double_time_pane_vc_g2_ParamLimits

0xdf81,	// (0x000473e5) list_double_time_pane_vc_g2

0x0001,

0xfa1c,	// (0x00048e80) list_double_time_pane_vc_g_ParamLimits

0xfa1c,	// (0x00048e80) list_double_time_pane_vc_g

0xdf8d,	// (0x000473f1) list_double_time_pane_vc_t1_ParamLimits

0xdf8d,	// (0x000473f1) list_double_time_pane_vc_t1

0xdfb1,	// (0x00047415) list_double_time_pane_vc_t2_ParamLimits

0xdfb1,	// (0x00047415) list_double_time_pane_vc_t2

0xe000,	// (0x00047464) list_double_time_pane_vc_t3_ParamLimits

0xe000,	// (0x00047464) list_double_time_pane_vc_t3

0xe012,	// (0x00047476) list_double_time_pane_vc_t4_ParamLimits

0xe012,	// (0x00047476) list_double_time_pane_vc_t4

0x0003,

0xfa21,	// (0x00048e85) list_double_time_pane_vc_t_ParamLimits

0xfa21,	// (0x00048e85) list_double_time_pane_vc_t

0xdb50,	// (0x00046fb4) list_double_pane_vc_g1_ParamLimits

0xdb50,	// (0x00046fb4) list_double_pane_vc_g1

0xdb5c,	// (0x00046fc0) list_double_pane_vc_g2_ParamLimits

0xdb5c,	// (0x00046fc0) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00048a07) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00048a07) list_double_pane_vc_g

0xe026,	// (0x0004748a) list_double_pane_vc_t1_ParamLimits

0xe026,	// (0x0004748a) list_double_pane_vc_t1

0xe03a,	// (0x0004749e) list_double_pane_vc_t2_ParamLimits

0xe03a,	// (0x0004749e) list_double_pane_vc_t2

0x0001,

0xfa2a,	// (0x00048e8e) list_double_pane_vc_t_ParamLimits

0xfa2a,	// (0x00048e8e) list_double_pane_vc_t

0xdb50,	// (0x00046fb4) list_double_number_pane_vc_g1_ParamLimits

0xdb50,	// (0x00046fb4) list_double_number_pane_vc_g1

0xdb5c,	// (0x00046fc0) list_double_number_pane_vc_g2_ParamLimits

0xdb5c,	// (0x00046fc0) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00048a07) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00048a07) list_double_number_pane_vc_g

0xe052,	// (0x000474b6) list_double_number_pane_vc_t1_ParamLimits

0xe052,	// (0x000474b6) list_double_number_pane_vc_t1

0xe026,	// (0x0004748a) list_double_number_pane_vc_t2_ParamLimits

0xe026,	// (0x0004748a) list_double_number_pane_vc_t2

0xe064,	// (0x000474c8) list_double_number_pane_vc_t3_ParamLimits

0xe064,	// (0x000474c8) list_double_number_pane_vc_t3

0x0002,

0xfa2f,	// (0x00048e93) list_double_number_pane_vc_t_ParamLimits

0xfa2f,	// (0x00048e93) list_double_number_pane_vc_t

0xe07c,	// (0x000474e0) list_double_large_graphic_pane_vc_g1_ParamLimits

0xe07c,	// (0x000474e0) list_double_large_graphic_pane_vc_g1

0xe098,	// (0x000474fc) list_double_large_graphic_pane_vc_g2_ParamLimits

0xe098,	// (0x000474fc) list_double_large_graphic_pane_vc_g2

0xe0ac,	// (0x00047510) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe0ac,	// (0x00047510) list_double_large_graphic_pane_vc_g3

0xe0bb,	// (0x0004751f) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe0bb,	// (0x0004751f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa36,	// (0x00048e9a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x00048e9a) list_double_large_graphic_pane_vc_g

0xe0c7,	// (0x0004752b) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe0c7,	// (0x0004752b) list_double_large_graphic_pane_vc_t1

0xe0e3,	// (0x00047547) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe0e3,	// (0x00047547) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3f,	// (0x00048ea3) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3f,	// (0x00048ea3) list_double_large_graphic_pane_vc_t

0xdddd,	// (0x00047241) list_double_heading_pane_vc_g1_ParamLimits

0xdddd,	// (0x00047241) list_double_heading_pane_vc_g1

0xdde9,	// (0x0004724d) list_double_heading_pane_vc_g2_ParamLimits

0xdde9,	// (0x0004724d) list_double_heading_pane_vc_g2

0x0001,

0xfa44,	// (0x00048ea8) list_double_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x00048ea8) list_double_heading_pane_vc_g

0xe105,	// (0x00047569) list_double_heading_pane_vc_t1_ParamLimits

0xe105,	// (0x00047569) list_double_heading_pane_vc_t1

0xe119,	// (0x0004757d) list_double_heading_pane_vc_t2_ParamLimits

0xe119,	// (0x0004757d) list_double_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x00048ead) list_double_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x00048ead) list_double_heading_pane_vc_t

0xe131,	// (0x00047595) list_double_graphic_pane_vc_g1_ParamLimits

0xe131,	// (0x00047595) list_double_graphic_pane_vc_g1

0xe144,	// (0x000475a8) list_double_graphic_pane_vc_g2_ParamLimits

0xe144,	// (0x000475a8) list_double_graphic_pane_vc_g2

0xdb50,	// (0x00046fb4) list_double_graphic_pane_vc_g3_ParamLimits

0xdb50,	// (0x00046fb4) list_double_graphic_pane_vc_g3

0x0003,

0xfa4e,	// (0x00048eb2) list_double_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x00048eb2) list_double_graphic_pane_vc_g

0xe161,	// (0x000475c5) list_double_graphic_pane_vc_t1_ParamLimits

0xe161,	// (0x000475c5) list_double_graphic_pane_vc_t1

0xe180,	// (0x000475e4) list_double_graphic_pane_vc_t2_ParamLimits

0xe180,	// (0x000475e4) list_double_graphic_pane_vc_t2

0x0001,

0xfa57,	// (0x00048ebb) list_double_graphic_pane_vc_t_ParamLimits

0xfa57,	// (0x00048ebb) list_double_graphic_pane_vc_t

0xdb17,	// (0x00046f7b) aid_size_cell_fastswap

0x85c2,	// (0x00041a26) aid_size_cell_touch_ParamLimits

0x85c2,	// (0x00041a26) aid_size_cell_touch

0xf05f,	// (0x000484c3) popup_fast_swap_wide_window_ParamLimits

0xf05f,	// (0x000484c3) popup_fast_swap_wide_window

0x88e1,	// (0x00041d45) touch_pane_ParamLimits

0x88e1,	// (0x00041d45) touch_pane

0xb8d2,	// (0x00044d36) button_value_adjust_pane_cp2

0xdd0c,	// (0x00047170) button_value_adjust_pane_cp4

0xdd14,	// (0x00047178) form_field_data_pane_cp2

0x91e4,	// (0x00042648) form_field_data_wide_pane_cp2

0xbbec,	// (0x00045050) bg_scroll_pane_ParamLimits

0x9574,	// (0x000429d8) scroll_handle_pane_ParamLimits

0xf213,	// (0x00048677) scroll_sc2_down_pane_ParamLimits

0xf213,	// (0x00048677) scroll_sc2_down_pane

0xbc1d,	// (0x00045081) scroll_sc2_up_pane_ParamLimits

0xbc1d,	// (0x00045081) scroll_sc2_up_pane

0xcc4b,	// (0x000460af) grid_wheel_folder_pane_g1_ParamLimits

0xcc4b,	// (0x000460af) grid_wheel_folder_pane_g1

0xf395,	// (0x000487f9) clock_nsta_pane_cp2_ParamLimits

0xf395,	// (0x000487f9) clock_nsta_pane_cp2

0x986b,	// (0x00042ccf) listscroll_midp_pane_ParamLimits

0x9877,	// (0x00042cdb) midp_canvas_pane

0xc306,	// (0x0004576a) nsta_clock_indic_pane

0xc32e,	// (0x00045792) listscroll_form_pane_vc

0xc336,	// (0x0004579a) listscroll_set_pane_vc_ParamLimits

0xc336,	// (0x0004579a) listscroll_set_pane_vc

0xa40b,	// (0x0004386f) clock_nsta_pane

0xa435,	// (0x00043899) indicator_nsta_pane

0x1fbb,	// (0x0003b41f) bg_popup_sub_pane_cp2_ParamLimits

0x1fcf,	// (0x0003b433) find_pane_cp2_ParamLimits

0x1fcf,	// (0x0003b433) find_pane_cp2

0x1fe5,	// (0x0003b449) grid_toobar_pane_ParamLimits

0x20dd,	// (0x0003b541) list_form_gen_pane_vc_ParamLimits

0x20dd,	// (0x0003b541) list_form_gen_pane_vc

0x20f3,	// (0x0003b557) scroll_pane_cp8_vc_ParamLimits

0x20f3,	// (0x0003b557) scroll_pane_cp8_vc

0x216f,	// (0x0003b5d3) data_form_wide_pane_vc_ParamLimits

0x216f,	// (0x0003b5d3) data_form_wide_pane_vc

0x217b,	// (0x0003b5df) form_field_data_wide_pane_vc_g1

0x2183,	// (0x0003b5e7) form_field_data_wide_pane_vc_t1_ParamLimits

0x2183,	// (0x0003b5e7) form_field_data_wide_pane_vc_t1

0xb8e6,	// (0x00044d4a) input_focus_pane_cp6_vc_ParamLimits

0xb8e6,	// (0x00044d4a) input_focus_pane_cp6_vc

0x24d0,	// (0x0003b934) list_midp_pane_ParamLimits

0x3800,	// (0x0003cc64) scroll_pane_cp16_ParamLimits

0x3800,	// (0x0003cc64) scroll_pane_cp16

0x2526,	// (0x0003b98a) button_value_adjust_pane_ParamLimits

0x2526,	// (0x0003b98a) button_value_adjust_pane

0xc83d,	// (0x00045ca1) button_value_adjust_pane_cp6_ParamLimits

0xc83d,	// (0x00045ca1) button_value_adjust_pane_cp6

0xc957,	// (0x00045dbb) settings_code_pane_cp_ParamLimits

0xc957,	// (0x00045dbb) settings_code_pane_cp

0xb4ca,	// (0x0004492e) cell_touch_pane_g1

0xb4ca,	// (0x0004492e) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x00048b33) cell_touch_pane_g

0xcb18,	// (0x00045f7c) cell_touch_pane_cp_ParamLimits

0xcb18,	// (0x00045f7c) cell_touch_pane_cp

0xcb34,	// (0x00045f98) cell_touch_pane_ParamLimits

0xcb34,	// (0x00045f98) cell_touch_pane

0xb4ca,	// (0x0004492e) scroll_sc2_down_pane_g1

0xb4ca,	// (0x0004492e) scroll_sc2_up_pane_g1

0xb4d4,	// (0x00044938) bg_set_opt_pane_cp4_vc

0x3b90,	// (0x0003cff4) list_set_graphic_pane_vc_g1_ParamLimits

0x3b90,	// (0x0003cff4) list_set_graphic_pane_vc_g1

0x3b9c,	// (0x0003d000) list_set_graphic_pane_vc_g2_ParamLimits

0x3b9c,	// (0x0003d000) list_set_graphic_pane_vc_g2

0x0001,

0xf9c6,	// (0x00048e2a) list_set_graphic_pane_vc_g_ParamLimits

0xf9c6,	// (0x00048e2a) list_set_graphic_pane_vc_g

0x3ba8,	// (0x0003d00c) text_primary_small_cp13_vc_ParamLimits

0x3ba8,	// (0x0003d00c) text_primary_small_cp13_vc

0x3bc0,	// (0x0003d024) list_set_graphic_pane_vc_ParamLimits

0x3bc0,	// (0x0003d024) list_set_graphic_pane_vc

0xb4d4,	// (0x00044938) input_focus_pane_cp2_vc

0xb4ca,	// (0x0004492e) setting_code_pane_vc_g1

0xb547,	// (0x000449ab) setting_code_pane_vc_t1

0x3bd3,	// (0x0003d037) set_text_pane_vc_t1_ParamLimits

0x3bd3,	// (0x0003d037) set_text_pane_vc_t1

0xb4d4,	// (0x00044938) input_focus_pane_cp1_vc

0x3bf0,	// (0x0003d054) list_set_text_pane_vc

0xb4ca,	// (0x0004492e) setting_text_pane_vc_g1

0xb4d4,	// (0x00044938) bg_set_opt_pane_cp2_vc

0xb53e,	// (0x000449a2) setting_slider_graphic_pane_vc_g1

0x3bfa,	// (0x0003d05e) setting_slider_graphic_pane_vc_t1

0x3c0a,	// (0x0003d06e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cb,	// (0x00048e2f) setting_slider_graphic_pane_vc_t

0x3c1a,	// (0x0003d07e) slider_set_pane_cp_vc

0x3c22,	// (0x0003d086) slider_set_pane_vc_g1

0x3c2b,	// (0x0003d08f) slider_set_pane_vc_g2

0x0006,

0xf9d0,	// (0x00048e34) slider_set_pane_vc_g

0xb93e,	// (0x00044da2) set_opt_bg_pane_g1_copy1

0xb946,	// (0x00044daa) set_opt_bg_pane_g2_copy1

0x3c57,	// (0x0003d0bb) set_opt_bg_pane_g3_copy1

0xb956,	// (0x00044dba) set_opt_bg_pane_g4_copy1

0xb95e,	// (0x00044dc2) set_opt_bg_pane_g5_copy1

0xb966,	// (0x00044dca) set_opt_bg_pane_g6_copy1

0x3c5f,	// (0x0003d0c3) set_opt_bg_pane_g7_copy1

0x3c69,	// (0x0003d0cd) set_opt_bg_pane_g8_copy1

0x3c71,	// (0x0003d0d5) set_opt_bg_pane_g9_copy1

0xb4d4,	// (0x00044938) bg_set_opt_pane_cp_vc

0x3c79,	// (0x0003d0dd) setting_slider_pane_vc_t1

0x3c88,	// (0x0003d0ec) setting_slider_pane_vc_t2

0x3c98,	// (0x0003d0fc) setting_slider_pane_vc_t3

0x0002,

0xf9df,	// (0x00048e43) setting_slider_pane_vc_t

0x3ca8,	// (0x0003d10c) slider_set_pane_vc

0x07ff,	// (0x00039c63) volume_set_pane_vc_g1

0x0bd5,	// (0x0003a039) volume_set_pane_vc_g2

0x0bde,	// (0x0003a042) volume_set_pane_vc_g3

0x0be7,	// (0x0003a04b) volume_set_pane_vc_g4

0x0bf0,	// (0x0003a054) volume_set_pane_vc_g5

0x0bf9,	// (0x0003a05d) volume_set_pane_vc_g6

0x0c02,	// (0x0003a066) volume_set_pane_vc_g7

0x0c0b,	// (0x0003a06f) volume_set_pane_vc_g8

0x0c14,	// (0x0003a078) volume_set_pane_vc_g9

0x0c1d,	// (0x0003a081) volume_set_pane_vc_g10

0x0009,

0xf9e6,	// (0x00048e4a) volume_set_pane_vc_g

0x3cb0,	// (0x0003d114) volume_set_pane_vc

0x3cba,	// (0x0003d11e) button_value_adjust_pane_cp1_vc

0x3cc4,	// (0x0003d128) list_highlight_pane_cp2_vc

0x3ccd,	// (0x0003d131) list_set_pane_vc_ParamLimits

0x3ccd,	// (0x0003d131) list_set_pane_vc

0x3d2b,	// (0x0003d18f) main_pane_set_vc_t1_ParamLimits

0x3d2b,	// (0x0003d18f) main_pane_set_vc_t1

0x3d40,	// (0x0003d1a4) main_pane_set_vc_t2_ParamLimits

0x3d40,	// (0x0003d1a4) main_pane_set_vc_t2

0x3d52,	// (0x0003d1b6) main_pane_set_vc_t3_ParamLimits

0x3d52,	// (0x0003d1b6) main_pane_set_vc_t3

0x3d64,	// (0x0003d1c8) main_pane_set_vc_t4_ParamLimits

0x3d64,	// (0x0003d1c8) main_pane_set_vc_t4

0x0003,

0xf9fb,	// (0x00048e5f) main_pane_set_vc_t_ParamLimits

0xf9fb,	// (0x00048e5f) main_pane_set_vc_t

0x3d76,	// (0x0003d1da) setting_code_pane_vc_ParamLimits

0x3d76,	// (0x0003d1da) setting_code_pane_vc

0x3d85,	// (0x0003d1e9) setting_slider_graphic_pane_vc

0x3d85,	// (0x0003d1e9) setting_slider_pane_vc

0x3d85,	// (0x0003d1e9) setting_text_pane_vc

0x3d85,	// (0x0003d1e9) setting_volume_pane_vc

0x3d8d,	// (0x0003d1f1) scroll_pane_cp121_vc

0xb8c0,	// (0x00044d24) set_content_pane_vc

0x3d95,	// (0x0003d1f9) button_value_adjust_pane_g1

0x3d9e,	// (0x0003d202) button_value_adjust_pane_g2

0x0001,

0xfa5c,	// (0x00048ec0) button_value_adjust_pane_g

0x3da7,	// (0x0003d20b) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3da7,	// (0x0003d20b) form_field_slider_wide_pane_vc_t1

0x3dbb,	// (0x0003d21f) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3dbb,	// (0x0003d21f) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa61,	// (0x00048ec5) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa61,	// (0x00048ec5) form_field_slider_wide_pane_vc_t

0xb522,	// (0x00044986) input_focus_pane_cp10_vc_ParamLimits

0xb522,	// (0x00044986) input_focus_pane_cp10_vc

0x3de9,	// (0x0003d24d) slider_cont_pane_cp1_vc_ParamLimits

0x3de9,	// (0x0003d24d) slider_cont_pane_cp1_vc

0x3dfb,	// (0x0003d25f) slider_form_pane_g1_cp2

0x3c2b,	// (0x0003d08f) slider_form_pane_g2_cp2

0x3e28,	// (0x0003d28c) form_field_slider_pane_vc_t3

0x3e36,	// (0x0003d29a) form_field_slider_pane_vc_t4

0x3e44,	// (0x0003d2a8) slider_form_pane_vc_ParamLimits

0x3e44,	// (0x0003d2a8) slider_form_pane_vc

0x3e51,	// (0x0003d2b5) form_field_slider_pane_vc_t1_ParamLimits

0x3e51,	// (0x0003d2b5) form_field_slider_pane_vc_t1

0x3dbb,	// (0x0003d21f) form_field_slider_pane_vc_t2_ParamLimits

0x3dbb,	// (0x0003d21f) form_field_slider_pane_vc_t2

0x0001,

0xfa73,	// (0x00048ed7) form_field_slider_pane_vc_t_ParamLimits

0xfa73,	// (0x00048ed7) form_field_slider_pane_vc_t

0xb522,	// (0x00044986) input_focus_pane_cp9_vc_ParamLimits

0xb522,	// (0x00044986) input_focus_pane_cp9_vc

0x3e6d,	// (0x0003d2d1) slider_cont_pane_vc_ParamLimits

0x3e6d,	// (0x0003d2d1) slider_cont_pane_vc

0x3e81,	// (0x0003d2e5) list_form_graphic_pane_cp_vc_ParamLimits

0x3e81,	// (0x0003d2e5) list_form_graphic_pane_cp_vc

0x217b,	// (0x0003b5df) form_field_popup_wide_pane_vc_g1

0x3e96,	// (0x0003d2fa) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3e96,	// (0x0003d2fa) form_field_popup_wide_pane_vc_t1

0xb8e6,	// (0x00044d4a) input_focus_pane_cp8_vc_ParamLimits

0xb8e6,	// (0x00044d4a) input_focus_pane_cp8_vc

0x3edb,	// (0x0003d33f) list_form_wide_pane_vc_ParamLimits

0x3edb,	// (0x0003d33f) list_form_wide_pane_vc

0x3ee7,	// (0x0003d34b) list_form_graphic_pane_vc_g1

0x3eef,	// (0x0003d353) list_form_graphic_pane_vc_t1_ParamLimits

0x3eef,	// (0x0003d353) list_form_graphic_pane_vc_t1

0xb530,	// (0x00044994) list_highlight_pane_cp5_vc_ParamLimits

0xb530,	// (0x00044994) list_highlight_pane_cp5_vc

0x3f0b,	// (0x0003d36f) list_form_graphic_pane_vc_ParamLimits

0x3f0b,	// (0x0003d36f) list_form_graphic_pane_vc

0x217b,	// (0x0003b5df) form_field_popup_pane_vc_g1

0x3f21,	// (0x0003d385) form_field_popup_pane_vc_t1_ParamLimits

0x3f21,	// (0x0003d385) form_field_popup_pane_vc_t1

0xb8e6,	// (0x00044d4a) input_focus_pane_cp7_vc_ParamLimits

0xb8e6,	// (0x00044d4a) input_focus_pane_cp7_vc

0x3f38,	// (0x0003d39c) list_form_pane_vc_ParamLimits

0x3f38,	// (0x0003d39c) list_form_pane_vc

0x3f44,	// (0x0003d3a8) data_form_pane_vc_t1_ParamLimits

0x3f44,	// (0x0003d3a8) data_form_pane_vc_t1

0xb93e,	// (0x00044da2) input_focus_pane_vc_g1

0xb946,	// (0x00044daa) input_focus_pane_vc_g2

0xb94e,	// (0x00044db2) input_focus_pane_vc_g3

0xb956,	// (0x00044dba) input_focus_pane_vc_g4

0xb95e,	// (0x00044dc2) input_focus_pane_vc_g5

0xb966,	// (0x00044dca) input_focus_pane_vc_g6

0xb96e,	// (0x00044dd2) input_focus_pane_vc_g7

0xb976,	// (0x00044dda) input_focus_pane_vc_g8

0xb97e,	// (0x00044de2) input_focus_pane_vc_g9

0xb4ca,	// (0x0004492e) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x00048abc) input_focus_pane_vc_g

0x216f,	// (0x0003b5d3) data_form_pane_vc_ParamLimits

0x216f,	// (0x0003b5d3) data_form_pane_vc

0x217b,	// (0x0003b5df) form_field_data_pane_vc_g1

0x3f5f,	// (0x0003d3c3) form_field_data_pane_vc_t1_ParamLimits

0x3f5f,	// (0x0003d3c3) form_field_data_pane_vc_t1

0xb8e6,	// (0x00044d4a) input_focus_pane_vc_ParamLimits

0xb8e6,	// (0x00044d4a) input_focus_pane_vc

0x3f79,	// (0x0003d3dd) button_value_adjust_pane_cp3_vc

0x3f81,	// (0x0003d3e5) button_value_adjust_pane_cp5_vc

0x3f89,	// (0x0003d3ed) form_field_data_pane_vc_ParamLimits

0x3f89,	// (0x0003d3ed) form_field_data_pane_vc

0x3fa0,	// (0x0003d404) form_field_data_pane_vc_cp2

0x3fa8,	// (0x0003d40c) form_field_data_wide_pane_vc_ParamLimits

0x3fa8,	// (0x0003d40c) form_field_data_wide_pane_vc

0x3fbe,	// (0x0003d422) form_field_data_wide_pane_vc_cp2

0x3fc6,	// (0x0003d42a) form_field_popup_pane_vc_ParamLimits

0x3fc6,	// (0x0003d42a) form_field_popup_pane_vc

0x3fdd,	// (0x0003d441) form_field_popup_wide_pane_vc_ParamLimits

0x3fdd,	// (0x0003d441) form_field_popup_wide_pane_vc

0x3ff3,	// (0x0003d457) form_field_slider_pane_vc_ParamLimits

0x3ff3,	// (0x0003d457) form_field_slider_pane_vc

0x4006,	// (0x0003d46a) form_field_slider_wide_pane_vc_ParamLimits

0x4006,	// (0x0003d46a) form_field_slider_wide_pane_vc

0xcb51,	// (0x00045fb5) grid_touch_1_pane_ParamLimits

0xcb51,	// (0x00045fb5) grid_touch_1_pane

0xcb65,	// (0x00045fc9) grid_touch_2_pane_ParamLimits

0xcb65,	// (0x00045fc9) grid_touch_2_pane

0x40ea,	// (0x0003d54e) touch_pane_g1_ParamLimits

0x40ea,	// (0x0003d54e) touch_pane_g1

0x403d,	// (0x0003d4a1) cell_app_pane_cp_wide_ParamLimits

0x403d,	// (0x0003d4a1) cell_app_pane_cp_wide

0x404e,	// (0x0003d4b2) grid_popup_fast_wide_pane_ParamLimits

0x404e,	// (0x0003d4b2) grid_popup_fast_wide_pane

0x4062,	// (0x0003d4c6) scroll_pane_cp19_ParamLimits

0x4062,	// (0x0003d4c6) scroll_pane_cp19

0xb4d4,	// (0x00044938) bg_popup_window_pane_cp20

0x4076,	// (0x0003d4da) listscroll_popup_fast_wide_pane

0xcb8f,	// (0x00045ff3) grid_indicator_nsta_pane

0x4090,	// (0x0003d4f4) clock_nsta_pane_g1

0x4099,	// (0x0003d4fd) clock_nsta_pane_t1

0xcb9b,	// (0x00045fff) cell_indicator_nsta_pane_ParamLimits

0xcb9b,	// (0x00045fff) cell_indicator_nsta_pane

0x40ea,	// (0x0003d54e) cell_indicator_nsta_pane_g1

0xcbb6,	// (0x0004601a) cell_indicator_nsta_pane_g2

0x0001,

0xfa84,	// (0x00048ee8) cell_indicator_nsta_pane_g

0x410a,	// (0x0003d56e) clock_nsta_pane_cp

0x4113,	// (0x0003d577) indicator_nsta_pane_cp

0x411d,	// (0x0003d581) nsta_clock_indic_pane_g1

0xb56c,	// (0x000449d0) grid_indicator_pane

0x960e,	// (0x00042a72) scroll_pane_cp29

0xf2e4,	// (0x00048748) indicator_nsta_pane_cp2_ParamLimits

0xf2e4,	// (0x00048748) indicator_nsta_pane_cp2

0xb530,	// (0x00044994) main_apps_wheel_pane

0xa8bd,	// (0x00043d21) form_midp_field_text_pane_ParamLimits

0x24dc,	// (0x0003b940) scroll_bar_cp050_ParamLimits

0x4176,	// (0x0003d5da) cell_indicator_pane_ParamLimits

0x4176,	// (0x0003d5da) cell_indicator_pane

0x418f,	// (0x0003d5f3) cell_indicator_pane_g1

0xcbd5,	// (0x00046039) grid_wheel_folder_pane_ParamLimits

0xcbd5,	// (0x00046039) grid_wheel_folder_pane

0xcbe3,	// (0x00046047) list_wheel_apps_pane_ParamLimits

0xcbe3,	// (0x00046047) list_wheel_apps_pane

0xcbf1,	// (0x00046055) main_apps_wheel_pane_g1_ParamLimits

0xcbf1,	// (0x00046055) main_apps_wheel_pane_g1

0xcbfd,	// (0x00046061) main_apps_wheel_pane_g2_ParamLimits

0xcbfd,	// (0x00046061) main_apps_wheel_pane_g2

0x0001,

0xfaa0,	// (0x00048f04) main_apps_wheel_pane_g_ParamLimits

0xfaa0,	// (0x00048f04) main_apps_wheel_pane_g

0xcc0b,	// (0x0004606f) main_apps_wheel_pane_t1_ParamLimits

0xcc0b,	// (0x0004606f) main_apps_wheel_pane_t1

0xcc1f,	// (0x00046083) list_wheel_apps_pane_g1

0xcc27,	// (0x0004608b) list_wheel_apps_pane_g2

0xcc2f,	// (0x00046093) list_wheel_apps_pane_g3

0xcc37,	// (0x0004609b) list_wheel_apps_pane_g4

0xcc41,	// (0x000460a5) list_wheel_apps_pane_g5

0x0004,

0xfaa5,	// (0x00048f09) list_wheel_apps_pane_g

0xc047,	// (0x000454ab) navi_icon_text_pane

0xa2ff,	// (0x00043763) aid_fill_nsta

0x4256,	// (0x0003d6ba) navi_icon_text_pane_g1

0x4262,	// (0x0003d6c6) navi_icon_text_pane_t1

0xbf2b,	// (0x0004538f) list_set_graphic_pane_t1_ParamLimits

0xbf2b,	// (0x0004538f) list_set_graphic_pane_t1

0x2c27,	// (0x0003c08b) popup_midp_note_alarm_window_t6_ParamLimits

0x2c27,	// (0x0003c08b) popup_midp_note_alarm_window_t6

0x2c39,	// (0x0003c09d) popup_midp_note_alarm_window_t7_ParamLimits

0x2c39,	// (0x0003c09d) popup_midp_note_alarm_window_t7

0x2c4b,	// (0x0003c0af) popup_midp_note_alarm_window_t8_ParamLimits

0x2c4b,	// (0x0003c0af) popup_midp_note_alarm_window_t8

0x2c5d,	// (0x0003c0c1) popup_midp_note_alarm_window_t9_ParamLimits

0x2c5d,	// (0x0003c0c1) popup_midp_note_alarm_window_t9

0x2c6f,	// (0x0003c0d3) popup_midp_note_alarm_window_t10_ParamLimits

0x2c6f,	// (0x0003c0d3) popup_midp_note_alarm_window_t10

0x2c81,	// (0x0003c0e5) popup_midp_note_alarm_window_t11_ParamLimits

0x2c81,	// (0x0003c0e5) popup_midp_note_alarm_window_t11

0xc5b7,	// (0x00045a1b) scroll_pane_cp17_ParamLimits

0xc5b7,	// (0x00045a1b) scroll_pane_cp17

0x07ff,	// (0x00039c63) volume_small_pane_cp_g1

0x0c26,	// (0x0003a08a) volume_small_pane_cp_g2

0x0c2f,	// (0x0003a093) volume_small_pane_cp_g3

0x0c38,	// (0x0003a09c) volume_small_pane_cp_g4

0x0c41,	// (0x0003a0a5) volume_small_pane_cp_g5

0x0bf0,	// (0x0003a054) volume_small_pane_cp_g6

0x0c4a,	// (0x0003a0ae) volume_small_pane_cp_g7

0x0c53,	// (0x0003a0b7) volume_small_pane_cp_g8

0x0c5c,	// (0x0003a0c0) volume_small_pane_cp_g9

0x0c65,	// (0x0003a0c9) volume_small_pane_cp_g10

0xc1b9,	// (0x0004561d) midp_ticker_pane_g1_ParamLimits

0xc1c5,	// (0x00045629) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x00048b88) midp_ticker_pane_g_ParamLimits

0xc1d1,	// (0x00045635) midp_ticker_pane_t1_ParamLimits

0xa323,	// (0x00043787) aid_fill_nsta_2

0x24c8,	// (0x0003b92c) list_form2_midp_pane

0x35db,	// (0x0003ca3f) midp_editing_number_pane_ParamLimits

0x35ea,	// (0x0003ca4e) midp_ticker_pane_ParamLimits

0x4274,	// (0x0003d6d8) form2_midp_field_pane

0x4298,	// (0x0003d6fc) scroll_pane_cp51

0x42b8,	// (0x0003d71c) form2_midp_button_pane_ParamLimits

0x42b8,	// (0x0003d71c) form2_midp_button_pane

0x42ca,	// (0x0003d72e) form2_midp_content_pane_ParamLimits

0x42ca,	// (0x0003d72e) form2_midp_content_pane

0x42e4,	// (0x0003d748) form2_midp_field_choice_group_pane

0x42ec,	// (0x0003d750) form2_midp_field_pane_g1

0x42f4,	// (0x0003d758) form2_midp_field_pane_g2

0x42fc,	// (0x0003d760) form2_midp_field_pane_g3

0x4304,	// (0x0003d768) form2_midp_field_pane_g4

0x0003,

0xfaca,	// (0x00048f2e) form2_midp_field_pane_g

0x430c,	// (0x0003d770) form2_midp_gauge_slider_pane

0x4314,	// (0x0003d778) form2_midp_gauge_wait_pane

0x431c,	// (0x0003d780) form2_midp_image_pane_ParamLimits

0x431c,	// (0x0003d780) form2_midp_image_pane

0xcc74,	// (0x000460d8) form2_midp_label_pane_ParamLimits

0xcc74,	// (0x000460d8) form2_midp_label_pane

0xcc8d,	// (0x000460f1) form2_midp_label_pane_cp_ParamLimits

0xcc8d,	// (0x000460f1) form2_midp_label_pane_cp

0x4371,	// (0x0003d7d5) form2_midp_string_pane_ParamLimits

0x4371,	// (0x0003d7d5) form2_midp_string_pane

0xe1aa,	// (0x0004760e) form2_midp_text_pane_ParamLimits

0xe1aa,	// (0x0004760e) form2_midp_text_pane

0x4383,	// (0x0003d7e7) form2_midp_time_pane

0x4393,	// (0x0003d7f7) input_focus_pane_cp51_ParamLimits

0x4393,	// (0x0003d7f7) input_focus_pane_cp51

0xccac,	// (0x00046110) form2_midp_label_pane_t1_ParamLimits

0xccac,	// (0x00046110) form2_midp_label_pane_t1

0xe1c3,	// (0x00047627) form2_mdip_text_pane_t1_ParamLimits

0xe1c3,	// (0x00047627) form2_mdip_text_pane_t1

0xe1e1,	// (0x00047645) form2_midp_time_pane_t1

0x43f4,	// (0x0003d858) form2_midp_gauge_slider_pane_t1

0xccec,	// (0x00046150) form2_midp_gauge_slider_pane_t2

0xccfe,	// (0x00046162) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad3,	// (0x00048f37) form2_midp_gauge_slider_pane_t

0x442a,	// (0x0003d88e) form2_midp_slider_pane

0x4436,	// (0x0003d89a) form2_midp_gauge_wait_pane_t1

0x4444,	// (0x0003d8a8) form2_midp_wait_pane_ParamLimits

0x4444,	// (0x0003d8a8) form2_midp_wait_pane

0xcd10,	// (0x00046174) list_single_2graphic_pane_cp4_ParamLimits

0xcd10,	// (0x00046174) list_single_2graphic_pane_cp4

0xa7fc,	// (0x00043c60) list_single_midp_graphic_pane_cp_ParamLimits

0xa7fc,	// (0x00043c60) list_single_midp_graphic_pane_cp

0xb4d4,	// (0x00044938) list_highlight_pane_cp20

0x4497,	// (0x0003d8fb) list_single_2graphic_pane_g1_cp4

0x3a74,	// (0x0003ced8) list_single_2graphic_pane_g2_cp4

0x449f,	// (0x0003d903) list_single_2graphic_pane_t1_cp4

0xb530,	// (0x00044994) list_highlight_pane_cp21

0x44ae,	// (0x0003d912) list_single_midp_graphic_pane_g4_cp

0x44bd,	// (0x0003d921) list_single_midp_graphic_pane_t1_cp

0xcd25,	// (0x00046189) form2_mdip_string_pane_t1_ParamLimits

0xcd25,	// (0x00046189) form2_mdip_string_pane_t1

0xb4d4,	// (0x00044938) bg_wml_button_pane_cp2

0xb4ca,	// (0x0004492e) form2_midp_image_pane_g1

0xdc2d,	// (0x00047091) list_double_large_graphic_pane_g5_ParamLimits

0xdc2d,	// (0x00047091) list_double_large_graphic_pane_g5

0x986b,	// (0x00042ccf) midp_form_pane_ParamLimits

0xb530,	// (0x00044994) main_apps_wheel_pane_ParamLimits

0x9fdd,	// (0x00043441) popup_preview_window_ParamLimits

0x9fdd,	// (0x00043441) popup_preview_window

0xa2aa,	// (0x0004370e) popup_touch_info_window_ParamLimits

0xa2aa,	// (0x0004370e) popup_touch_info_window

0xa2c8,	// (0x0004372c) popup_touch_menu_window_ParamLimits

0xa2c8,	// (0x0004372c) popup_touch_menu_window

0xb4c0,	// (0x00044924) bg_popup_sub_pane_cp6

0x45d9,	// (0x0003da3d) list_touch_menu_pane

0xcd9b,	// (0x000461ff) list_single_touch_menu_pane_ParamLimits

0xcd9b,	// (0x000461ff) list_single_touch_menu_pane

0xcdaf,	// (0x00046213) list_single_touch_menu_pane_t1

0xb530,	// (0x00044994) bg_popup_sub_pane_cp7_ParamLimits

0xb530,	// (0x00044994) bg_popup_sub_pane_cp7

0x4605,	// (0x0003da69) heading_sub_pane

0x460d,	// (0x0003da71) list_touch_info_pane_ParamLimits

0x460d,	// (0x0003da71) list_touch_info_pane

0x461c,	// (0x0003da80) list_single_touch_info_pane_ParamLimits

0x461c,	// (0x0003da80) list_single_touch_info_pane

0x462e,	// (0x0003da92) list_single_touch_info_pane_t1

0x463c,	// (0x0003daa0) list_single_touch_info_pane_t2

0x0001,

0xfae1,	// (0x00048f45) list_single_touch_info_pane_t

0xc1a2,	// (0x00045606) bg_popup_heading_pane_cp

0x464a,	// (0x0003daae) heading_sub_pane_t1

0x2109,	// (0x0003b56d) bg_popup_preview_window_pane_cp_ParamLimits

0x2109,	// (0x0003b56d) bg_popup_preview_window_pane_cp

0x4605,	// (0x0003da69) heading_preview_pane

0x460d,	// (0x0003da71) list_preview_pane_ParamLimits

0x460d,	// (0x0003da71) list_preview_pane

0x4658,	// (0x0003dabc) popup_preview_window_g1

0x461c,	// (0x0003da80) list_single_preview_pane_ParamLimits

0x461c,	// (0x0003da80) list_single_preview_pane

0x4660,	// (0x0003dac4) list_single_preview_pane_g1

0x4668,	// (0x0003dacc) list_single_preview_pane_t1

0x462e,	// (0x0003da92) list_single_preview_pane_t2

0x0001,

0xfae6,	// (0x00048f4a) list_single_preview_pane_t

0x4676,	// (0x0003dada) bg_popup_heading_pane_cp2_ParamLimits

0x4676,	// (0x0003dada) bg_popup_heading_pane_cp2

0x468c,	// (0x0003daf0) heading_preview_pane_g1

0x4694,	// (0x0003daf8) heading_preview_pane_t1_ParamLimits

0x4694,	// (0x0003daf8) heading_preview_pane_t1

0xb583,	// (0x000449e7) soft_indicator_pane_t1_ParamLimits

0xb862,	// (0x00044cc6) scroll_pane_ParamLimits

0xbc0b,	// (0x0004506f) scroll_sc2_left_pane

0xbc14,	// (0x00045078) scroll_sc2_right_pane

0xbc33,	// (0x00045097) scroll_bg_pane_g1_ParamLimits

0xbc48,	// (0x000450ac) scroll_bg_pane_g2_ParamLimits

0xbc60,	// (0x000450c4) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x00048b13) scroll_bg_pane_g_ParamLimits

0xbc33,	// (0x00045097) scroll_handle_pane_g1_ParamLimits

0xbc75,	// (0x000450d9) scroll_handle_pane_g2_ParamLimits

0xbc60,	// (0x000450c4) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x00048b1a) scroll_handle_pane_g_ParamLimits

0x9baa,	// (0x0004300e) popup_choice_list_window_ParamLimits

0x9baa,	// (0x0004300e) popup_choice_list_window

0x1fc7,	// (0x0003b42b) choice_list_pane

0x2049,	// (0x0003b4ad) cell_toolbar_pane_t1

0x2071,	// (0x0003b4d5) toolbar_button_pane_ParamLimits

0x314d,	// (0x0003c5b1) ai_gene_pane_1_t2_ParamLimits

0x314d,	// (0x0003c5b1) ai_gene_pane_1_t2

0x0001,

0xf8d9,	// (0x00048d3d) ai_gene_pane_1_t_ParamLimits

0xf8d9,	// (0x00048d3d) ai_gene_pane_1_t

0x46b1,	// (0x0003db15) scroll_sc2_left_pane_g1

0x46b1,	// (0x0003db15) scroll_sc2_right_pane_g1

0xba28,	// (0x00044e8c) bg_popup_sub_pane_cp10

0x46bb,	// (0x0003db1f) list_choice_list_pane

0xc993,	// (0x00045df7) list_single_choice_list_pane_ParamLimits

0xc993,	// (0x00045df7) list_single_choice_list_pane

0xcdbd,	// (0x00046221) list_single_choice_list_pane_g1

0x9438,	// (0x0004289c) list_single_choice_list_pane_t1_ParamLimits

0x9438,	// (0x0004289c) list_single_choice_list_pane_t1

0x46ef,	// (0x0003db53) choice_list_pane_g1

0xcdc5,	// (0x00046229) choice_list_pane_t1

0xb4c0,	// (0x00044924) input_focus_pane_cp11

0xbb80,	// (0x00044fe4) title_pane_stacon_g2_ParamLimits

0xbb80,	// (0x00044fe4) title_pane_stacon_g2

0x0002,

0xf695,	// (0x00048af9) title_pane_stacon_g_ParamLimits

0xf695,	// (0x00048af9) title_pane_stacon_g

0xc1a2,	// (0x00045606) cursor_press_pane

0x9c51,	// (0x000430b5) popup_fep_hwr_window_ParamLimits

0x9c51,	// (0x000430b5) popup_fep_hwr_window

0xf4e5,	// (0x00048949) popup_fep_vkb_window_ParamLimits

0xf4e5,	// (0x00048949) popup_fep_vkb_window

0xcdd3,	// (0x00046237) cursor_press_pane_g1

0x0002,

0xfb0f,	// (0x00048f73) fep_vkb_side_pane_g_ParamLimits

0x0ca7,	// (0x0003a10b) fep_hwr_candidate_pane_ParamLimits

0x0ca7,	// (0x0003a10b) fep_hwr_candidate_pane

0x0cd1,	// (0x0003a135) fep_hwr_side_pane_ParamLimits

0x0cd1,	// (0x0003a135) fep_hwr_side_pane

0x0cf1,	// (0x0003a155) fep_hwr_top_pane_ParamLimits

0x0cf1,	// (0x0003a155) fep_hwr_top_pane

0x0d09,	// (0x0003a16d) fep_hwr_write_pane_ParamLimits

0x0d09,	// (0x0003a16d) fep_hwr_write_pane

0xfb0f,	// (0x00048f73) fep_vkb_side_pane_g

0x470d,	// (0x0003db71) fep_hwr_top_pane_g1

0x471f,	// (0x0003db83) fep_hwr_top_pane_g2

0x0d43,	// (0x0003a1a7) fep_hwr_top_pane_g3

0x0002,

0xfaeb,	// (0x00048f4f) fep_hwr_top_pane_g

0x0d58,	// (0x0003a1bc) fep_hwr_top_text_pane

0xbd38,	// (0x0004519c) fep_hwr_top_text_pane_g1

0x4755,	// (0x0003dbb9) fep_hwr_top_text_pane_t1

0x0e4e,	// (0x0003a2b2) fep_hwr_candidate_pane_g1

0x499a,	// (0x0003ddfe) fep_vkb_keypad_pane_g3_ParamLimits

0x499a,	// (0x0003ddfe) fep_vkb_keypad_pane_g3

0x49c2,	// (0x0003de26) fep_vkb_keypad_pane_g4_ParamLimits

0x49c2,	// (0x0003de26) fep_vkb_keypad_pane_g4

0x4a31,	// (0x0003de95) fep_vkb_bottom_pane_g2_ParamLimits

0x4a31,	// (0x0003de95) fep_vkb_bottom_pane_g2

0x0001,

0xfb16,	// (0x00048f7a) fep_vkb_bottom_pane_g_ParamLimits

0xfb16,	// (0x00048f7a) fep_vkb_bottom_pane_g

0x46b1,	// (0x0003db15) cell_vkb_side_pane_g2

0x0001,

0xfb20,	// (0x00048f84) cell_vkb_side_pane_g

0x4abc,	// (0x0003df20) cell_vkb_side_pane_t1

0x4aca,	// (0x0003df2e) cell_vkb_side_pane_t1_copy1

0x46b1,	// (0x0003db15) bg_fep_vkb_candidate_pane_g2

0x4bf6,	// (0x0003e05a) cell_vkb_candidate_pane_ParamLimits

0x4763,	// (0x0003dbc7) aid_size_cell_vkb_ParamLimits

0x4763,	// (0x0003dbc7) aid_size_cell_vkb

0x4bf6,	// (0x0003e05a) cell_vkb_candidate_pane

0x0e75,	// (0x0003a2d9) bg_popup_fep_shadow_pane_g1

0xcded,	// (0x00046251) fep_vkb_bottom_pane_ParamLimits

0xcded,	// (0x00046251) fep_vkb_bottom_pane

0x4827,	// (0x0003dc8b) fep_vkb_candidate_pane_ParamLimits

0x4827,	// (0x0003dc8b) fep_vkb_candidate_pane

0xce12,	// (0x00046276) fep_vkb_keypad_pane_ParamLimits

0xce12,	// (0x00046276) fep_vkb_keypad_pane

0xce47,	// (0x000462ab) fep_vkb_side_pane_ParamLimits

0xce47,	// (0x000462ab) fep_vkb_side_pane

0xce83,	// (0x000462e7) fep_vkb_top_pane_ParamLimits

0xce83,	// (0x000462e7) fep_vkb_top_pane

0x48f3,	// (0x0003dd57) fep_vkb_top_pane_g1_ParamLimits

0x48f3,	// (0x0003dd57) fep_vkb_top_pane_g1

0x4902,	// (0x0003dd66) fep_vkb_top_pane_g2_ParamLimits

0x4902,	// (0x0003dd66) fep_vkb_top_pane_g2

0x4911,	// (0x0003dd75) fep_vkb_top_pane_g3_ParamLimits

0x4911,	// (0x0003dd75) fep_vkb_top_pane_g3

0x0003,

0xfb06,	// (0x00048f6a) fep_vkb_top_pane_g_ParamLimits

0xfb06,	// (0x00048f6a) fep_vkb_top_pane_g

0x492f,	// (0x0003dd93) fep_vkb_top_text_pane_ParamLimits

0x492f,	// (0x0003dd93) fep_vkb_top_text_pane

0xceb8,	// (0x0004631c) fep_vkb_side_pane_g1_ParamLimits

0xceb8,	// (0x0004631c) fep_vkb_side_pane_g1

0x4989,	// (0x0003dded) grid_vkb_side_pane_ParamLimits

0x4989,	// (0x0003dded) grid_vkb_side_pane

0x0e7d,	// (0x0003a2e1) bg_popup_fep_shadow_pane_g2

0x0e86,	// (0x0003a2ea) bg_popup_fep_shadow_pane_g3

0x0e8e,	// (0x0003a2f2) bg_popup_fep_shadow_pane_g4

0x0e97,	// (0x0003a2fb) bg_popup_fep_shadow_pane_g5

0x0ea1,	// (0x0003a305) bg_popup_fep_shadow_pane_g6

0x0ea9,	// (0x0003a30d) bg_popup_fep_shadow_pane_g7

0xb956,	// (0x00044dba) bg_popup_fep_shadow_pane_g8

0x49e0,	// (0x0003de44) grid_vkb_keypad_number_pane_ParamLimits

0x49e0,	// (0x0003de44) grid_vkb_keypad_number_pane

0x49f0,	// (0x0003de54) grid_vkb_keypad_pane_ParamLimits

0x49f0,	// (0x0003de54) grid_vkb_keypad_pane

0x4a16,	// (0x0003de7a) fep_vkb_bottom_pane_g1_ParamLimits

0x4a16,	// (0x0003de7a) fep_vkb_bottom_pane_g1

0x4a3f,	// (0x0003dea3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4a3f,	// (0x0003dea3) grid_vkb_keypad_bottom_left_pane

0x4a54,	// (0x0003deb8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4a54,	// (0x0003deb8) grid_vkb_keypad_bottom_right_pane

0x4a69,	// (0x0003decd) fep_vkb_top_text_pane_g1

0xceff,	// (0x00046363) fep_vkb_top_text_pane_t1

0xcf11,	// (0x00046375) cell_vkb_side_pane_ParamLimits

0xcf11,	// (0x00046375) cell_vkb_side_pane

0x46b1,	// (0x0003db15) cell_vkb_side_pane_g1

0x4ad8,	// (0x0003df3c) cell_vkb_keypad_pane_ParamLimits

0x4ad8,	// (0x0003df3c) cell_vkb_keypad_pane

0x4b4d,	// (0x0003dfb1) cell_vkb_keypad_pane_g1

0x0008,

0xfb33,	// (0x00048f97) bg_popup_fep_shadow_pane_g

0x0ebb,	// (0x0003a31f) cell_hwr_side_pane_g1

0x0ebb,	// (0x0003a31f) cell_hwr_side_pane_g2

0x4b57,	// (0x0003dfbb) cell_vkb_keypad_pane_t1

0xcf27,	// (0x0004638b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcf27,	// (0x0004638b) cell_vkb_keypad_bottom_left_pane

0xcf3c,	// (0x000463a0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcf3c,	// (0x000463a0) cell_vkb_keypad_bottom_right_pane

0x46b1,	// (0x0003db15) cell_vkb_keypad_bottom_left_pane_g1

0x46b1,	// (0x0003db15) cell_vkb_keypad_bottom_right_pane_g1

0x4bbb,	// (0x0003e01f) cell_vkb_keypad_number_pane_ParamLimits

0x4bbb,	// (0x0003e01f) cell_vkb_keypad_number_pane

0x4bda,	// (0x0003e03e) cell_vkb_keypad_number_pane_g1

0x4be4,	// (0x0003e048) cell_vkb_keypad_number_pane_g2

0x4bed,	// (0x0003e051) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb25,	// (0x00048f89) cell_vkb_keypad_number_pane_g

0x4b57,	// (0x0003dfbb) cell_vkb_keypad_number_pane_t1

0x4c11,	// (0x0003e075) fep_vkb_candidate_pane_g1

0x0001,

0xfb46,	// (0x00048faa) cell_hwr_side_pane_g

0x4c2a,	// (0x0003e08e) cell_hwr_side_pane_t1

0x0ec5,	// (0x0003a329) cell_hwr_side_pane_t1_copy1

0x0ed3,	// (0x0003a337) cell_hwr_candidate_pane_g1

0x0f02,	// (0x0003a366) cell_hwr_candidate_pane_t1

0x46b1,	// (0x0003db15) cell_vkb_candidate_pane_g2

0x4c8f,	// (0x0003e0f3) cell_vkb_candidate_pane_t1

0x0c6e,	// (0x0003a0d2) bg_popup_fep_shadow_pane_ParamLimits

0x0c6e,	// (0x0003a0d2) bg_popup_fep_shadow_pane

0x0d23,	// (0x0003a187) bg_fep_hwr_top_pane_g4

0x4731,	// (0x0003db95) bg_hwr_side_pane_g1_ParamLimits

0x4731,	// (0x0003db95) bg_hwr_side_pane_g1

0xab47,	// (0x00043fab) cell_hwr_side_pane_ParamLimits

0xab47,	// (0x00043fab) cell_hwr_side_pane

0x0dcf,	// (0x0003a233) fep_hwr_write_pane_g1_ParamLimits

0x0dcf,	// (0x0003a233) fep_hwr_write_pane_g1

0x0ddc,	// (0x0003a240) fep_hwr_write_pane_g2_ParamLimits

0x0ddc,	// (0x0003a240) fep_hwr_write_pane_g2

0x0de9,	// (0x0003a24d) fep_hwr_write_pane_g3_ParamLimits

0x0de9,	// (0x0003a24d) fep_hwr_write_pane_g3

0xab67,	// (0x00043fcb) fep_hwr_write_pane_g4_ParamLimits

0xab67,	// (0x00043fcb) fep_hwr_write_pane_g4

0x0005,

0xfaf2,	// (0x00048f56) fep_hwr_write_pane_g_ParamLimits

0xfaf2,	// (0x00048f56) fep_hwr_write_pane_g

0x0d23,	// (0x0003a187) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0d23,	// (0x0003a187) bg_fep_hwr_candidate_pane_g2

0x0e0c,	// (0x0003a270) cell_hwr_candidate_pane_ParamLimits

0x0e0c,	// (0x0003a270) cell_hwr_candidate_pane

0x0e4e,	// (0x0003a2b2) fep_hwr_candidate_pane_g1_ParamLimits

0x4791,	// (0x0003dbf5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4791,	// (0x0003dbf5) bg_popup_fep_shadow_pane_cp2

0x4921,	// (0x0003dd85) fep_vkb_top_pane_g4_ParamLimits

0x4921,	// (0x0003dd85) fep_vkb_top_pane_g4

0x4967,	// (0x0003ddcb) fep_vkb_side_pane_g2_ParamLimits

0x4967,	// (0x0003ddcb) fep_vkb_side_pane_g2

0x913d,	// (0x000425a1) list_setting_pane_t4_ParamLimits

0x913d,	// (0x000425a1) list_setting_pane_t4

0xdce1,	// (0x00047145) list_setting_number_pane_t5_ParamLimits

0xdce1,	// (0x00047145) list_setting_number_pane_t5

0xbd6f,	// (0x000451d3) list_double_heading_pane_cp2_ParamLimits

0xbd6f,	// (0x000451d3) list_double_heading_pane_cp2

0xcf57,	// (0x000463bb) list_double_heading_pane_g1_cp2_ParamLimits

0xcf57,	// (0x000463bb) list_double_heading_pane_g1_cp2

0x4c9d,	// (0x0003e101) list_double_heading_pane_g2_cp2_ParamLimits

0x4c9d,	// (0x0003e101) list_double_heading_pane_g2_cp2

0x4cb1,	// (0x0003e115) list_double_heading_pane_t1_cp2_ParamLimits

0x4cb1,	// (0x0003e115) list_double_heading_pane_t1_cp2

0x4cc7,	// (0x0003e12b) list_double_heading_pane_t2_cp2_ParamLimits

0x4cc7,	// (0x0003e12b) list_double_heading_pane_t2_cp2

0xb4b8,	// (0x0004491c) aid_value_unit2

0xf075,	// (0x000484d9) popup_preview_fixed_window

0xb65a,	// (0x00044abe) bg_popup_preview_window_pane_cp02

0x4cd9,	// (0x0003e13d) list_preview_fixed_pane

0x4d1f,	// (0x0003e183) list_empty_pane_fp_ParamLimits

0x4d1f,	// (0x0003e183) list_empty_pane_fp

0x4d1f,	// (0x0003e183) list_single_cale_day_pane_fp_ParamLimits

0x4d1f,	// (0x0003e183) list_single_cale_day_pane_fp

0x4d1f,	// (0x0003e183) list_single_graphic_heading_pane_fp_ParamLimits

0x4d1f,	// (0x0003e183) list_single_graphic_heading_pane_fp

0x4d1f,	// (0x0003e183) list_single_graphic_pane_fp_ParamLimits

0x4d1f,	// (0x0003e183) list_single_graphic_pane_fp

0x4d1f,	// (0x0003e183) list_single_heading_pane_fp_ParamLimits

0x4d1f,	// (0x0003e183) list_single_heading_pane_fp

0x4d1f,	// (0x0003e183) list_single_pane_fp_ParamLimits

0x4d1f,	// (0x0003e183) list_single_pane_fp

0x4d35,	// (0x0003e199) list_single_pane_fp_g1_ParamLimits

0x4d35,	// (0x0003e199) list_single_pane_fp_g1

0xdc15,	// (0x00047079) list_single_pane_fp_g2_ParamLimits

0xdc15,	// (0x00047079) list_single_pane_fp_g2

0xe201,	// (0x00047665) list_single_pane_fp_g3_ParamLimits

0xe201,	// (0x00047665) list_single_pane_fp_g3

0x4d41,	// (0x0003e1a5) list_single_pane_fp_g4_ParamLimits

0x4d41,	// (0x0003e1a5) list_single_pane_fp_g4

0x0003,

0xfb59,	// (0x00048fbd) list_single_pane_fp_g_ParamLimits

0xfb59,	// (0x00048fbd) list_single_pane_fp_g

0xe215,	// (0x00047679) list_single_pane_fp_t1_ParamLimits

0xe215,	// (0x00047679) list_single_pane_fp_t1

0xe22c,	// (0x00047690) list_single_graphic_pane_fp_g1_ParamLimits

0xe22c,	// (0x00047690) list_single_graphic_pane_fp_g1

0x4d35,	// (0x0003e199) list_single_graphic_pane_fp_g2_ParamLimits

0x4d35,	// (0x0003e199) list_single_graphic_pane_fp_g2

0xdc15,	// (0x00047079) list_single_graphic_pane_fp_g3_ParamLimits

0xdc15,	// (0x00047079) list_single_graphic_pane_fp_g3

0xe201,	// (0x00047665) list_single_graphic_pane_fp_g4_ParamLimits

0xe201,	// (0x00047665) list_single_graphic_pane_fp_g4

0x4d41,	// (0x0003e1a5) list_single_graphic_pane_fp_g5_ParamLimits

0x4d41,	// (0x0003e1a5) list_single_graphic_pane_fp_g5

0x0004,

0xfb62,	// (0x00048fc6) list_single_graphic_pane_fp_g_ParamLimits

0xfb62,	// (0x00048fc6) list_single_graphic_pane_fp_g

0xe238,	// (0x0004769c) list_single_graphic_pane_fp_t1_ParamLimits

0xe238,	// (0x0004769c) list_single_graphic_pane_fp_t1

0xe22c,	// (0x00047690) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe22c,	// (0x00047690) list_single_graphic_heading_pane_fp_g1

0x4d35,	// (0x0003e199) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4d35,	// (0x0003e199) list_single_graphic_heading_pane_fp_g2

0xdc15,	// (0x00047079) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xdc15,	// (0x00047079) list_single_graphic_heading_pane_fp_g3

0xe201,	// (0x00047665) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xe201,	// (0x00047665) list_single_graphic_heading_pane_fp_g4

0x4d41,	// (0x0003e1a5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4d41,	// (0x0003e1a5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb62,	// (0x00048fc6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb62,	// (0x00048fc6) list_single_graphic_heading_pane_fp_g

0xe24e,	// (0x000476b2) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe24e,	// (0x000476b2) list_single_graphic_heading_pane_fp_t1

0xe264,	// (0x000476c8) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe264,	// (0x000476c8) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6d,	// (0x00048fd1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6d,	// (0x00048fd1) list_single_graphic_heading_pane_fp_t

0xe276,	// (0x000476da) list_single_cale_day_pane_fp_g1_ParamLimits

0xe276,	// (0x000476da) list_single_cale_day_pane_fp_g1

0x4d4d,	// (0x0003e1b1) list_single_cale_day_pane_fp_g2_ParamLimits

0x4d4d,	// (0x0003e1b1) list_single_cale_day_pane_fp_g2

0xe2ae,	// (0x00047712) list_single_cale_day_pane_fp_g3_ParamLimits

0xe2ae,	// (0x00047712) list_single_cale_day_pane_fp_g3

0xe2d6,	// (0x0004773a) list_single_cale_day_pane_fp_g4_ParamLimits

0xe2d6,	// (0x0004773a) list_single_cale_day_pane_fp_g4

0xe2fa,	// (0x0004775e) list_single_cale_day_pane_fp_g5_ParamLimits

0xe2fa,	// (0x0004775e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb72,	// (0x00048fd6) list_single_cale_day_pane_fp_g_ParamLimits

0xfb72,	// (0x00048fd6) list_single_cale_day_pane_fp_g

0xe31e,	// (0x00047782) list_single_cale_day_pane_fp_t1_ParamLimits

0xe31e,	// (0x00047782) list_single_cale_day_pane_fp_t1

0xe344,	// (0x000477a8) list_single_cale_day_pane_fp_t2_ParamLimits

0xe344,	// (0x000477a8) list_single_cale_day_pane_fp_t2

0xe35d,	// (0x000477c1) list_single_cale_day_pane_fp_t3_ParamLimits

0xe35d,	// (0x000477c1) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7d,	// (0x00048fe1) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7d,	// (0x00048fe1) list_single_cale_day_pane_fp_t

0x4d35,	// (0x0003e199) list_empty_pane_fp_g1_ParamLimits

0x4d35,	// (0x0003e199) list_empty_pane_fp_g1

0xe376,	// (0x000477da) list_empty_pane_fp_t1

0xe384,	// (0x000477e8) list_empty_pane_fp_t2

0x0001,

0xfb84,	// (0x00048fe8) list_empty_pane_fp_t

0x4d35,	// (0x0003e199) list_single_heading_pane_fp_g1_ParamLimits

0x4d35,	// (0x0003e199) list_single_heading_pane_fp_g1

0xdc15,	// (0x00047079) list_single_heading_pane_fp_g2_ParamLimits

0xdc15,	// (0x00047079) list_single_heading_pane_fp_g2

0xe201,	// (0x00047665) list_single_heading_pane_fp_g3_ParamLimits

0xe201,	// (0x00047665) list_single_heading_pane_fp_g3

0x0002,

0xfb89,	// (0x00048fed) list_single_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x00048fed) list_single_heading_pane_fp_g

0xe392,	// (0x000477f6) list_single_heading_pane_fp_t1_ParamLimits

0xe392,	// (0x000477f6) list_single_heading_pane_fp_t1

0xe3a4,	// (0x00047808) list_single_heading_pane_fp_t2_ParamLimits

0xe3a4,	// (0x00047808) list_single_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x00048ff4) list_single_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x00048ff4) list_single_heading_pane_fp_t

0x9484,	// (0x000428e8) aid_size_cell_fast

0xb63d,	// (0x00044aa1) soft_indicator_pane_cp1_t1

0x948d,	// (0x000428f1) cell_app_pane_cp2_ParamLimits

0x948d,	// (0x000428f1) cell_app_pane_cp2

0x0c90,	// (0x0003a0f4) fep_hwr_candidate_drop_down_list_pane

0x0e68,	// (0x0003a2cc) fep_hwr_candidate_pane_g3_ParamLimits

0x0e68,	// (0x0003a2cc) fep_hwr_candidate_pane_g3

0xe1f4,	// (0x00047658) fep_hwr_candidate_pane_g4_ParamLimits

0xe1f4,	// (0x00047658) fep_hwr_candidate_pane_g4

0x0002,

0xfaff,	// (0x00048f63) fep_hwr_candidate_pane_g_ParamLimits

0xfaff,	// (0x00048f63) fep_hwr_candidate_pane_g

0x4816,	// (0x0003dc7a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4816,	// (0x0003dc7a) fep_vkb_candidate_drop_down_list_pane

0x4c19,	// (0x0003e07d) fep_vkb_candidate_pane_g3

0x4c21,	// (0x0003e085) fep_vkb_candidate_pane_g4

0x0002,

0xfb2c,	// (0x00048f90) fep_vkb_candidate_pane_g

0x0ed3,	// (0x0003a337) cell_hwr_candidate_pane_g1_ParamLimits

0x0ee1,	// (0x0003a345) cell_hwr_candidate_pane_g3_ParamLimits

0x0ee1,	// (0x0003a345) cell_hwr_candidate_pane_g3

0x4c38,	// (0x0003e09c) cell_hwr_candidate_pane_g4_ParamLimits

0x4c38,	// (0x0003e09c) cell_hwr_candidate_pane_g4

0x0002,

0xfb4b,	// (0x00048faf) cell_hwr_candidate_pane_g_ParamLimits

0xfb4b,	// (0x00048faf) cell_hwr_candidate_pane_g

0x4c59,	// (0x0003e0bd) cell_vkb_candidate_pane_g3_ParamLimits

0x4c59,	// (0x0003e0bd) cell_vkb_candidate_pane_g3

0x4c74,	// (0x0003e0d8) cell_vkb_candidate_pane_g4_ParamLimits

0x4c74,	// (0x0003e0d8) cell_vkb_candidate_pane_g4

0xcf63,	// (0x000463c7) cell_app_pane_cp2_g1_ParamLimits

0xcf63,	// (0x000463c7) cell_app_pane_cp2_g1

0x4d77,	// (0x0003e1db) cell_app_pane_cp2_g2_ParamLimits

0x4d77,	// (0x0003e1db) cell_app_pane_cp2_g2

0x0001,

0xfb95,	// (0x00048ff9) cell_app_pane_cp2_g_ParamLimits

0xfb95,	// (0x00048ff9) cell_app_pane_cp2_g

0x4d83,	// (0x0003e1e7) cell_app_pane_cp2_t1_ParamLimits

0x4d83,	// (0x0003e1e7) cell_app_pane_cp2_t1

0xb8e6,	// (0x00044d4a) grid_highlight_pane_cp1_ParamLimits

0xb8e6,	// (0x00044d4a) grid_highlight_pane_cp1

0x0f20,	// (0x0003a384) cell_hwr_candidate_pane_cp1_ParamLimits

0x0f20,	// (0x0003a384) cell_hwr_candidate_pane_cp1

0x0ed3,	// (0x0003a337) fep_hwr_candidate_drop_down_list_pane_g1

0x0f3f,	// (0x0003a3a3) fep_hwr_candidate_drop_down_list_pane_g2

0x0f4c,	// (0x0003a3b0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x00048ffe) fep_hwr_candidate_drop_down_list_pane_g

0x0f59,	// (0x0003a3bd) fep_hwr_candidate_drop_down_list_scroll_pane

0x0f62,	// (0x0003a3c6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0f62,	// (0x0003a3c6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0f6f,	// (0x0003a3d3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0f6f,	// (0x0003a3d3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0f7c,	// (0x0003a3e0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0f7c,	// (0x0003a3e0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0f89,	// (0x0003a3ed) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0f89,	// (0x0003a3ed) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0fa4,	// (0x0003a408) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0fa4,	// (0x0003a408) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0fbf,	// (0x0003a423) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0fbf,	// (0x0003a423) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0fda,	// (0x0003a43e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0fda,	// (0x0003a43e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0ff5,	// (0x0003a459) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0ff5,	// (0x0003a459) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba1,	// (0x00049005) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba1,	// (0x00049005) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4d95,	// (0x0003e1f9) cell_vkb_candidate_pane_cp1_ParamLimits

0x4d95,	// (0x0003e1f9) cell_vkb_candidate_pane_cp1

0x4921,	// (0x0003dd85) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4921,	// (0x0003dd85) fep_vkb_candidate_drop_down_list_pane_g1

0x4db5,	// (0x0003e219) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4db5,	// (0x0003e219) fep_vkb_candidate_drop_down_list_pane_g2

0x4dc2,	// (0x0003e226) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4dc2,	// (0x0003e226) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x00049016) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb2,	// (0x00049016) fep_vkb_candidate_drop_down_list_pane_g

0x4dcf,	// (0x0003e233) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4dcf,	// (0x0003e233) fep_vkb_candidate_drop_down_list_scroll_pane

0x4ddc,	// (0x0003e240) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4ddc,	// (0x0003e240) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4de9,	// (0x0003e24d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4de9,	// (0x0003e24d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4df5,	// (0x0003e259) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4df5,	// (0x0003e259) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4e01,	// (0x0003e265) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4e01,	// (0x0003e265) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4e22,	// (0x0003e286) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4e22,	// (0x0003e286) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4e43,	// (0x0003e2a7) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4e43,	// (0x0003e2a7) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4e64,	// (0x0003e2c8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4e64,	// (0x0003e2c8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4e85,	// (0x0003e2e9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4e85,	// (0x0003e2e9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x0004901d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x0004901d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8937,	// (0x00041d9b) title_pane_g1_ParamLimits

0x894a,	// (0x00041dae) title_pane_g2_ParamLimits

0xf529,	// (0x0004898d) title_pane_g_ParamLimits

0xbd28,	// (0x0004518c) aid_call2_pane

0xbd30,	// (0x00045194) aid_call_pane

0xbd38,	// (0x0004519c) popup_clock_analogue_window_g1

0xbd38,	// (0x0004519c) popup_clock_analogue_window_g2

0xf228,	// (0x0004868c) popup_clock_analogue_window_g3

0xf231,	// (0x00048695) popup_clock_analogue_window_g4

0xb4ca,	// (0x0004492e) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x00048b28) popup_clock_analogue_window_g

0xf239,	// (0x0004869d) popup_clock_analogue_window_t1

0xf247,	// (0x000486ab) clock_digital_number_pane_ParamLimits

0xf247,	// (0x000486ab) clock_digital_number_pane

0xf253,	// (0x000486b7) clock_digital_number_pane_cp02_ParamLimits

0xf253,	// (0x000486b7) clock_digital_number_pane_cp02

0xf25f,	// (0x000486c3) clock_digital_number_pane_cp03_ParamLimits

0xf25f,	// (0x000486c3) clock_digital_number_pane_cp03

0xf26b,	// (0x000486cf) clock_digital_number_pane_cp04_ParamLimits

0xf26b,	// (0x000486cf) clock_digital_number_pane_cp04

0xf277,	// (0x000486db) clock_digital_separator_pane_ParamLimits

0xf277,	// (0x000486db) clock_digital_separator_pane

0xf283,	// (0x000486e7) popup_clock_digital_window_t1_ParamLimits

0xf283,	// (0x000486e7) popup_clock_digital_window_t1

0xb4ca,	// (0x0004492e) clock_digital_number_pane_g1

0xb4ca,	// (0x0004492e) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x00048b33) clock_digital_number_pane_g

0xb4ca,	// (0x0004492e) clock_digital_separator_pane_g1

0xb4ca,	// (0x0004492e) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x00048b33) clock_digital_separator_pane_g

0xa2ff,	// (0x00043763) aid_fill_nsta_ParamLimits

0xa435,	// (0x00043899) indicator_nsta_pane_ParamLimits

0x0634,	// (0x00039a98) popup_clock_analogue_window

0x0634,	// (0x00039a98) popup_clock_digital_window

0xcb8f,	// (0x00045ff3) grid_indicator_nsta_pane_ParamLimits

0x40a7,	// (0x0003d50b) clock_nsta_pane_t2

0x0001,

0xfa7f,	// (0x00048ee3) clock_nsta_pane_t

0xf209,	// (0x0004866d) aid_size_max_handle

0x956b,	// (0x000429cf) aid_size_min_handle

0xc1a2,	// (0x00045606) editor_scroll_pane

0x4ea0,	// (0x0003e304) ex_editor_pane

0xba18,	// (0x00044e7c) scroll_pane_cp13

0xb88e,	// (0x00044cf2) scroll_pane_cp14

0xbd67,	// (0x000451cb) scroll_pane_cp36

0x9635,	// (0x00042a99) list_single_graphic_hl_pane_cp2_ParamLimits

0x9635,	// (0x00042a99) list_single_graphic_hl_pane_cp2

0xaac0,	// (0x00043f24) list_single_graphic_hl_pane_ParamLimits

0xaac0,	// (0x00043f24) list_single_graphic_hl_pane

0xab7c,	// (0x00043fe0) aid_size_min_hl_cp1

0x4eb1,	// (0x0003e315) list_highlight_pane_cp34_ParamLimits

0x4eb1,	// (0x0003e315) list_highlight_pane_cp34

0x4ec2,	// (0x0003e326) list_single_graphic_hl_pane_g1_ParamLimits

0x4ec2,	// (0x0003e326) list_single_graphic_hl_pane_g1

0xab85,	// (0x00043fe9) list_single_graphic_hl_pane_g2_ParamLimits

0xab85,	// (0x00043fe9) list_single_graphic_hl_pane_g2

0xab85,	// (0x00043fe9) list_single_graphic_hl_pane_g3_ParamLimits

0xab85,	// (0x00043fe9) list_single_graphic_hl_pane_g3

0xab91,	// (0x00043ff5) list_single_graphic_hl_pane_g4_ParamLimits

0xab91,	// (0x00043ff5) list_single_graphic_hl_pane_g4

0xab9d,	// (0x00044001) list_single_graphic_hl_pane_g5_ParamLimits

0xab9d,	// (0x00044001) list_single_graphic_hl_pane_g5

0x0004,

0xfbca,	// (0x0004902e) list_single_graphic_hl_pane_g_ParamLimits

0xfbca,	// (0x0004902e) list_single_graphic_hl_pane_g

0xabb1,	// (0x00044015) list_single_graphic_hl_pane_t1_ParamLimits

0xabb1,	// (0x00044015) list_single_graphic_hl_pane_t1

0x4ecf,	// (0x0003e333) aid_size_min_hl_cp2

0x4ed8,	// (0x0003e33c) list_highlight_pane_cp34_cp2_ParamLimits

0x4ed8,	// (0x0003e33c) list_highlight_pane_cp34_cp2

0x4ec2,	// (0x0003e326) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4ec2,	// (0x0003e326) list_single_graphic_hl_pane_g1_cp2

0x4ee5,	// (0x0003e349) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4ee5,	// (0x0003e349) list_single_graphic_hl_pane_g2_cp2

0xcf81,	// (0x000463e5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcf81,	// (0x000463e5) list_single_graphic_hl_pane_g3_cp2

0xc101,	// (0x00045565) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc101,	// (0x00045565) list_single_graphic_hl_pane_g4_cp2

0x4eff,	// (0x0003e363) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4eff,	// (0x0003e363) list_single_graphic_hl_pane_g5_cp2

0x9a1e,	// (0x00042e82) control_pane_g4_ParamLimits

0x9a1e,	// (0x00042e82) control_pane_g4

0xba28,	// (0x00044e8c) bg_popup_sub_pane_cp10_ParamLimits

0x46bb,	// (0x0003db1f) list_choice_list_pane_ParamLimits

0x46ca,	// (0x0003db2e) scroll_pane_cp23

0xb65a,	// (0x00044abe) bg_popup_preview_window_pane_cp02_ParamLimits

0x4cd9,	// (0x0003e13d) list_preview_fixed_pane_ParamLimits

0x4cef,	// (0x0003e153) list_preview_fixed_pane_cp_ParamLimits

0x4cef,	// (0x0003e153) list_preview_fixed_pane_cp

0x4cfb,	// (0x0003e15f) popup_preview_fixed_window_g1_ParamLimits

0x4cfb,	// (0x0003e15f) popup_preview_fixed_window_g1

0x4d07,	// (0x0003e16b) popup_preview_fixed_window_g2_ParamLimits

0x4d07,	// (0x0003e16b) popup_preview_fixed_window_g2

0x0002,

0xfb52,	// (0x00048fb6) popup_preview_fixed_window_g_ParamLimits

0xfb52,	// (0x00048fb6) popup_preview_fixed_window_g

0xf17d,	// (0x000485e1) aid_navi_side_left_pane_ParamLimits

0xf192,	// (0x000485f6) aid_navi_side_right_pane_ParamLimits

0xf1aa,	// (0x0004860e) navi_icon_pane_stacon_ParamLimits

0xf1be,	// (0x00048622) navi_navi_pane_stacon_ParamLimits

0xf1aa,	// (0x0004860e) navi_text_pane_stacon_ParamLimits

0xdb1f,	// (0x00046f83) main_text_info_pane

0x4f29,	// (0x0003e38d) listscroll_text_info_pane

0x4f31,	// (0x0003e395) list_text_info_pane_ParamLimits

0x4f31,	// (0x0003e395) list_text_info_pane

0x4f40,	// (0x0003e3a4) scroll_pane_cp24_ParamLimits

0x4f40,	// (0x0003e3a4) scroll_pane_cp24

0xcf8f,	// (0x000463f3) list_text_info_pane_t1_ParamLimits

0xcf8f,	// (0x000463f3) list_text_info_pane_t1

0x9bc6,	// (0x0004302a) popup_fast_swap2_window_ParamLimits

0x9bc6,	// (0x0004302a) popup_fast_swap2_window

0x4f92,	// (0x0003e3f6) aid_size_cell_fast2

0xb4c0,	// (0x00044924) bg_popup_window_pane_cp17

0x4f9c,	// (0x0003e400) heading_pane_cp2

0x4fa4,	// (0x0003e408) listscroll_fast2_pane

0x4fac,	// (0x0003e410) grid_fast2_pane

0x4fb6,	// (0x0003e41a) listscroll_fast2_pane_g1

0x4fbe,	// (0x0003e422) listscroll_fast2_pane_g2

0x0001,

0xfbd5,	// (0x00049039) listscroll_fast2_pane_g

0xba18,	// (0x00044e7c) scroll_pane_cp26

0x4fc8,	// (0x0003e42c) cell_fast2_pane_ParamLimits

0x4fc8,	// (0x0003e42c) cell_fast2_pane

0x4fdd,	// (0x0003e441) cell_fast2_pane_g1

0x4fe6,	// (0x0003e44a) cell_fast2_pane_g2

0x4fef,	// (0x0003e453) cell_fast2_pane_g3

0x0002,

0xfbda,	// (0x0004903e) cell_fast2_pane_g

0xb7c5,	// (0x00044c29) grid_highlight_pane_cp9

0xf4cd,	// (0x00048931) main_eswt_pane_ParamLimits

0xf4cd,	// (0x00048931) main_eswt_pane

0x4f55,	// (0x0003e3b9) list_single_text_info_pane

0x4ff7,	// (0x0003e45b) eswt_ctrl_button_pane

0x4ff7,	// (0x0003e45b) eswt_ctrl_canvas_pane

0xcfab,	// (0x0004640f) eswt_ctrl_combo_pane

0x4ff7,	// (0x0003e45b) eswt_ctrl_default_pane

0x4ff7,	// (0x0003e45b) eswt_ctrl_label_pane

0x5007,	// (0x0003e46b) eswt_ctrl_wait_pane

0xcfb3,	// (0x00046417) eswt_shell_pane

0xb4c0,	// (0x00044924) listscroll_eswt_app_pane

0x502f,	// (0x0003e493) popup_eswt_tasktip_window_ParamLimits

0x502f,	// (0x0003e493) popup_eswt_tasktip_window

0x2109,	// (0x0003b56d) bg_popup_window_pane_cp18

0x5048,	// (0x0003e4ac) eswt_control_pane_g1_ParamLimits

0x5048,	// (0x0003e4ac) eswt_control_pane_g1

0x5055,	// (0x0003e4b9) eswt_control_pane_g2_ParamLimits

0x5055,	// (0x0003e4b9) eswt_control_pane_g2

0x5062,	// (0x0003e4c6) eswt_control_pane_g3_ParamLimits

0x5062,	// (0x0003e4c6) eswt_control_pane_g3

0x506f,	// (0x0003e4d3) eswt_control_pane_g4_ParamLimits

0x506f,	// (0x0003e4d3) eswt_control_pane_g4

0x0003,

0xfbe1,	// (0x00049045) eswt_control_pane_g_ParamLimits

0xfbe1,	// (0x00049045) eswt_control_pane_g

0xb8e6,	// (0x00044d4a) bg_button_pane_ParamLimits

0xb8e6,	// (0x00044d4a) bg_button_pane

0xb7da,	// (0x00044c3e) common_borders_pane_copy2_ParamLimits

0xb7da,	// (0x00044c3e) common_borders_pane_copy2

0x507c,	// (0x0003e4e0) control_button_pane_g1_ParamLimits

0x507c,	// (0x0003e4e0) control_button_pane_g1

0x5088,	// (0x0003e4ec) control_button_pane_g2_ParamLimits

0x5088,	// (0x0003e4ec) control_button_pane_g2

0x5094,	// (0x0003e4f8) control_button_pane_g3_ParamLimits

0x5094,	// (0x0003e4f8) control_button_pane_g3

0x0002,

0xfbea,	// (0x0004904e) control_button_pane_g_ParamLimits

0xfbea,	// (0x0004904e) control_button_pane_g

0x50a8,	// (0x0003e50c) control_button_pane_t1

0x50b6,	// (0x0003e51a) control_button_pane_t2

0x0001,

0xfbf1,	// (0x00049055) control_button_pane_t

0x207d,	// (0x0003b4e1) bg_button_pane_g1

0x208d,	// (0x0003b4f1) bg_button_pane_g2

0x2085,	// (0x0003b4e9) bg_button_pane_g3

0x209d,	// (0x0003b501) bg_button_pane_g4

0x2095,	// (0x0003b4f9) bg_button_pane_g5

0x20a5,	// (0x0003b509) bg_button_pane_g6

0x20ad,	// (0x0003b511) bg_button_pane_g7

0x20bd,	// (0x0003b521) bg_button_pane_g8

0x20b5,	// (0x0003b519) bg_button_pane_g9

0x0008,

0xf82d,	// (0x00048c91) bg_button_pane_g

0x4676,	// (0x0003dada) common_borders_pane_ParamLimits

0x4676,	// (0x0003dada) common_borders_pane

0x5048,	// (0x0003e4ac) eswt_control_pane_g1_copy1_ParamLimits

0x5048,	// (0x0003e4ac) eswt_control_pane_g1_copy1

0x5055,	// (0x0003e4b9) eswt_control_pane_g2_copy1_ParamLimits

0x5055,	// (0x0003e4b9) eswt_control_pane_g2_copy1

0x5062,	// (0x0003e4c6) eswt_control_pane_g3_copy1_ParamLimits

0x5062,	// (0x0003e4c6) eswt_control_pane_g3_copy1

0x506f,	// (0x0003e4d3) eswt_control_pane_g4_copy1_ParamLimits

0x506f,	// (0x0003e4d3) eswt_control_pane_g4_copy1

0x46b1,	// (0x0003db15) bg_eswt_ctrl_canvas_pane_g1

0x4676,	// (0x0003dada) common_borders_pane_cp2_ParamLimits

0x4676,	// (0x0003dada) common_borders_pane_cp2

0x4676,	// (0x0003dada) common_borders_pane_cp3_ParamLimits

0x4676,	// (0x0003dada) common_borders_pane_cp3

0x50c4,	// (0x0003e528) separator_horizontal_pane

0x50cc,	// (0x0003e530) separator_vertical_pane

0x5048,	// (0x0003e4ac) eswt_control_pane_g1_copy2_ParamLimits

0x5048,	// (0x0003e4ac) eswt_control_pane_g1_copy2

0x5055,	// (0x0003e4b9) eswt_control_pane_g2_copy2_ParamLimits

0x5055,	// (0x0003e4b9) eswt_control_pane_g2_copy2

0x5062,	// (0x0003e4c6) eswt_control_pane_g3_copy2_ParamLimits

0x5062,	// (0x0003e4c6) eswt_control_pane_g3_copy2

0x506f,	// (0x0003e4d3) eswt_control_pane_g4_copy2_ParamLimits

0x506f,	// (0x0003e4d3) eswt_control_pane_g4_copy2

0xb4c0,	// (0x00044924) common_borders_pane_cp4

0x50d5,	// (0x0003e539) separator_horizontal_pane_g1

0x50de,	// (0x0003e542) separator_horizontal_pane_g2

0x50e7,	// (0x0003e54b) separator_horizontal_pane_g3

0x0002,

0xfbf6,	// (0x0004905a) separator_horizontal_pane_g

0x5048,	// (0x0003e4ac) eswt_control_pane_g1_copy3_ParamLimits

0x5048,	// (0x0003e4ac) eswt_control_pane_g1_copy3

0x5055,	// (0x0003e4b9) eswt_control_pane_g2_copy3_ParamLimits

0x5055,	// (0x0003e4b9) eswt_control_pane_g2_copy3

0x5062,	// (0x0003e4c6) eswt_control_pane_g3_copy3_ParamLimits

0x5062,	// (0x0003e4c6) eswt_control_pane_g3_copy3

0x506f,	// (0x0003e4d3) eswt_control_pane_g4_copy3_ParamLimits

0x506f,	// (0x0003e4d3) eswt_control_pane_g4_copy3

0xb4c0,	// (0x00044924) common_borders_pane_cp5

0x50f0,	// (0x0003e554) separator_vertical_pane_g1

0x50f9,	// (0x0003e55d) separator_vertical_pane_g2

0x5102,	// (0x0003e566) separator_vertical_pane_g3

0x0002,

0xfbfd,	// (0x00049061) separator_vertical_pane_g

0x5048,	// (0x0003e4ac) eswt_control_pane_g1_copy4_ParamLimits

0x5048,	// (0x0003e4ac) eswt_control_pane_g1_copy4

0x5055,	// (0x0003e4b9) eswt_control_pane_g2_copy4_ParamLimits

0x5055,	// (0x0003e4b9) eswt_control_pane_g2_copy4

0x5062,	// (0x0003e4c6) eswt_control_pane_g3_copy4_ParamLimits

0x5062,	// (0x0003e4c6) eswt_control_pane_g3_copy4

0x506f,	// (0x0003e4d3) eswt_control_pane_g4_copy4_ParamLimits

0x506f,	// (0x0003e4d3) eswt_control_pane_g4_copy4

0xcfd3,	// (0x00046437) eswt_ctrl_combo_button_pane

0xcfdb,	// (0x0004643f) eswt_ctrl_input_pane

0xcfe3,	// (0x00046447) popup_choice_list_window_cp70

0xcfeb,	// (0x0004644f) eswt_ctrl_input_pane_t1

0xb4c0,	// (0x00044924) input_focus_pane_cp70

0x4676,	// (0x0003dada) bg_button_pane_cp70_ParamLimits

0x4676,	// (0x0003dada) bg_button_pane_cp70

0xcff9,	// (0x0004645d) eswt_ctrl_combo_button_pane_g1

0x5139,	// (0x0003e59d) wait_bar_pane_cp70

0x2109,	// (0x0003b56d) bg_popup_window_pane_cp70_ParamLimits

0x2109,	// (0x0003b56d) bg_popup_window_pane_cp70

0x5141,	// (0x0003e5a5) popup_eswt_tasktip_window_t1

0x5157,	// (0x0003e5bb) wait_bar_pane_cp71_ParamLimits

0x5157,	// (0x0003e5bb) wait_bar_pane_cp71

0x5163,	// (0x0003e5c7) grid_eswt_app_pane

0xbc0b,	// (0x0004506f) scroll_pane_cp70

0xd001,	// (0x00046465) cell_eswt_app_pane_ParamLimits

0xd001,	// (0x00046465) cell_eswt_app_pane

0xd02b,	// (0x0004648f) cell_eswt_app_pane_g1_ParamLimits

0xd02b,	// (0x0004648f) cell_eswt_app_pane_g1

0xd05a,	// (0x000464be) cell_eswt_app_pane_g2_ParamLimits

0xd05a,	// (0x000464be) cell_eswt_app_pane_g2

0x0001,

0xfc04,	// (0x00049068) cell_eswt_app_pane_g_ParamLimits

0xfc04,	// (0x00049068) cell_eswt_app_pane_g

0xd07e,	// (0x000464e2) cell_eswt_app_pane_t1_ParamLimits

0xd07e,	// (0x000464e2) cell_eswt_app_pane_t1

0x5221,	// (0x0003e685) grid_highlight_pane_cp70_ParamLimits

0x5221,	// (0x0003e685) grid_highlight_pane_cp70

0xc09c,	// (0x00045500) set_content_pane_g1

0x99b0,	// (0x00042e14) status_small_volume_pane

0xabc7,	// (0x0004402b) status_small_volume_pane_g1

0xabcf,	// (0x00044033) volume_small2_pane

0xabd8,	// (0x0004403c) volume_small2_pane_g1

0xabe1,	// (0x00044045) volume_small2_pane_g2

0xabea,	// (0x0004404e) volume_small2_pane_g3

0xabf3,	// (0x00044057) volume_small2_pane_g4

0xabfc,	// (0x00044060) volume_small2_pane_g5

0xac05,	// (0x00044069) volume_small2_pane_g6

0xac0e,	// (0x00044072) volume_small2_pane_g7

0xac17,	// (0x0004407b) volume_small2_pane_g8

0xac20,	// (0x00044084) volume_small2_pane_g9

0xac29,	// (0x0004408d) volume_small2_pane_g10

0x0009,

0xfc09,	// (0x0004906d) volume_small2_pane_g

0x4a69,	// (0x0003decd) fep_vkb_top_text_pane_g1_ParamLimits

0xceff,	// (0x00046363) fep_vkb_top_text_pane_t1_ParamLimits

0x4d13,	// (0x0003e177) popup_preview_fixed_window_g3_ParamLimits

0x4d13,	// (0x0003e177) popup_preview_fixed_window_g3

0xa23d,	// (0x000436a1) popup_toolbar_trans_pane

0xc82c,	// (0x00045c90) aid_height_set_list_ParamLimits

0x3458,	// (0x0003c8bc) aid_size_parent_ParamLimits

0xba28,	// (0x00044e8c) list_highlight_pane_cp2_ParamLimits

0xc09c,	// (0x00045500) set_content_pane_g1_ParamLimits

0xc9a7,	// (0x00045e0b) list_single_image_pane_ParamLimits

0xc9a7,	// (0x00045e0b) list_single_image_pane

0xd0b0,	// (0x00046514) aid_size_cell_image_ParamLimits

0xd0b0,	// (0x00046514) aid_size_cell_image

0xd0bd,	// (0x00046521) grid_single_image_pane_ParamLimits

0xd0bd,	// (0x00046521) grid_single_image_pane

0xd0c9,	// (0x0004652d) list_single_image_pane_g1_ParamLimits

0xd0c9,	// (0x0004652d) list_single_image_pane_g1

0x5246,	// (0x0003e6aa) list_single_image_pane_g2_ParamLimits

0x5246,	// (0x0003e6aa) list_single_image_pane_g2

0x0001,

0xfc1e,	// (0x00049082) list_single_image_pane_g_ParamLimits

0xfc1e,	// (0x00049082) list_single_image_pane_g

0x525a,	// (0x0003e6be) list_single_image_pane_t1_ParamLimits

0x525a,	// (0x0003e6be) list_single_image_pane_t1

0xd0d5,	// (0x00046539) cell_image_list_pane_ParamLimits

0xd0d5,	// (0x00046539) cell_image_list_pane

0xd0e9,	// (0x0004654d) cell_image_list_pane_g1

0xd0f2,	// (0x00046556) cell_image_list_pane_g2

0x0001,

0xfc23,	// (0x00049087) cell_image_list_pane_g

0xd0fb,	// (0x0004655f) aid_size_cell_tb_trans_pane

0xb8e6,	// (0x00044d4a) bg_tb_trans_pane

0xd10d,	// (0x00046571) grid_tb_trans_pane

0x207d,	// (0x0003b4e1) bg_tb_trans_pane_g1

0x208d,	// (0x0003b4f1) bg_tb_trans_pane_g2

0x2085,	// (0x0003b4e9) bg_tb_trans_pane_g3

0x209d,	// (0x0003b501) bg_tb_trans_pane_g4

0x2095,	// (0x0003b4f9) bg_tb_trans_pane_g5

0x20bd,	// (0x0003b521) bg_tb_trans_pane_g6

0x20b5,	// (0x0003b519) bg_tb_trans_pane_g7

0x20a5,	// (0x0003b509) bg_tb_trans_pane_g8

0x20ad,	// (0x0003b511) bg_tb_trans_pane_g9

0x0008,

0xfc28,	// (0x0004908c) bg_tb_trans_pane_g

0xd121,	// (0x00046585) cell_toolbar_trans_pane_ParamLimits

0xd121,	// (0x00046585) cell_toolbar_trans_pane

0x46b1,	// (0x0003db15) cell_toolbar_trans_pane_g1

0xcc58,	// (0x000460bc) list_form2_midp_pane_t1

0xcc66,	// (0x000460ca) list_form2_midp_pane_t2

0x0001,

0xfac5,	// (0x00048f29) list_form2_midp_pane_t

0x4298,	// (0x0003d6fc) scroll_pane_cp51_ParamLimits

0x4454,	// (0x0003d8b8) form2_midp_wait_pane_g1

0x445d,	// (0x0003d8c1) form2_midp_wait_pane_g2

0x4466,	// (0x0003d8ca) form2_midp_wait_pane_g3

0x0002,

0xfada,	// (0x00048f3e) form2_midp_wait_pane_g

0xb530,	// (0x00044994) list_highlight_pane_cp21_ParamLimits

0x44ae,	// (0x0003d912) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x44bd,	// (0x0003d921) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x360c,	// (0x0003ca70) list_single_2graphic_im_pane_ParamLimits

0x360c,	// (0x0003ca70) list_single_2graphic_im_pane

0xd147,	// (0x000465ab) list_single_2graphic_im_pane_g1_ParamLimits

0xd147,	// (0x000465ab) list_single_2graphic_im_pane_g1

0xd158,	// (0x000465bc) list_single_2graphic_im_pane_g2_ParamLimits

0xd158,	// (0x000465bc) list_single_2graphic_im_pane_g2

0xd164,	// (0x000465c8) list_single_2graphic_im_pane_g3_ParamLimits

0xd164,	// (0x000465c8) list_single_2graphic_im_pane_g3

0x0003,

0xfc3b,	// (0x0004909f) list_single_2graphic_im_pane_g_ParamLimits

0xfc3b,	// (0x0004909f) list_single_2graphic_im_pane_g

0xd178,	// (0x000465dc) list_single_2graphic_im_pane_t1_ParamLimits

0xd178,	// (0x000465dc) list_single_2graphic_im_pane_t1

0x4d1f,	// (0x0003e183) list_single_graphic_2heading_pane_fp_ParamLimits

0x4d1f,	// (0x0003e183) list_single_graphic_2heading_pane_fp

0xe22c,	// (0x00047690) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe22c,	// (0x00047690) list_single_graphic_2heading_pane_fp_g1

0x4d35,	// (0x0003e199) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4d35,	// (0x0003e199) list_single_graphic_2heading_pane_fp_g2

0xdc15,	// (0x00047079) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xdc15,	// (0x00047079) list_single_graphic_2heading_pane_fp_g3

0xe201,	// (0x00047665) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xe201,	// (0x00047665) list_single_graphic_2heading_pane_fp_g4

0x4d41,	// (0x0003e1a5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4d41,	// (0x0003e1a5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb62,	// (0x00048fc6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb62,	// (0x00048fc6) list_single_graphic_2heading_pane_fp_g

0xe3ba,	// (0x0004781e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe3ba,	// (0x0004781e) list_single_graphic_2heading_pane_fp_t1

0xe264,	// (0x000476c8) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe264,	// (0x000476c8) list_single_graphic_2heading_pane_fp_t2

0xe3d0,	// (0x00047834) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe3d0,	// (0x00047834) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc44,	// (0x000490a8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc44,	// (0x000490a8) list_single_graphic_2heading_pane_fp_t

0x473d,	// (0x0003dba1) fep_hwr_write_pane_g5_ParamLimits

0x473d,	// (0x0003dba1) fep_hwr_write_pane_g5

0x4749,	// (0x0003dbad) fep_hwr_write_pane_g6_ParamLimits

0x4749,	// (0x0003dbad) fep_hwr_write_pane_g6

0xcfb3,	// (0x00046417) eswt_shell_pane_ParamLimits

0x2109,	// (0x0003b56d) bg_popup_window_pane_cp18_ParamLimits

0x5040,	// (0x0003e4a4) heading_pane_cp70

0x5141,	// (0x0003e5a5) popup_eswt_tasktip_window_t1_ParamLimits

0xa35a,	// (0x000437be) aid_touch_tab_arrow_left

0xa370,	// (0x000437d4) aid_touch_tab_arrow_right

0x8962,	// (0x00041dc6) title_pane_g3_ParamLimits

0x8962,	// (0x00041dc6) title_pane_g3

0xb8ae,	// (0x00044d12) set_value_pane_g1

0xa23d,	// (0x000436a1) popup_toolbar_trans_pane_ParamLimits

0xd0fb,	// (0x0004655f) aid_size_cell_tb_trans_pane_ParamLimits

0xb8e6,	// (0x00044d4a) bg_tb_trans_pane_ParamLimits

0xd10d,	// (0x00046571) grid_tb_trans_pane_ParamLimits

0xb65a,	// (0x00044abe) cont_note_pane_ParamLimits

0xb65a,	// (0x00044abe) cont_note_pane

0xb7da,	// (0x00044c3e) cont_snote2_single_text_pane_ParamLimits

0xb7da,	// (0x00044c3e) cont_snote2_single_text_pane

0xb7da,	// (0x00044c3e) cont_snote2_single_graphic_pane_ParamLimits

0xb7da,	// (0x00044c3e) cont_snote2_single_graphic_pane

0x2723,	// (0x0003bb87) cont_note_wait_pane_ParamLimits

0x2723,	// (0x0003bb87) cont_note_wait_pane

0x2723,	// (0x0003bb87) cont_note_image_pane_ParamLimits

0x2723,	// (0x0003bb87) cont_note_image_pane

0x5350,	// (0x0003e7b4) popup_note2_window_g1_ParamLimits

0x5350,	// (0x0003e7b4) popup_note2_window_g1

0xd1b6,	// (0x0004661a) popup_note2_window_t1_ParamLimits

0xd1b6,	// (0x0004661a) popup_note2_window_t1

0xd1fb,	// (0x0004665f) popup_note2_window_t2_ParamLimits

0xd1fb,	// (0x0004665f) popup_note2_window_t2

0xd240,	// (0x000466a4) popup_note2_window_t3_ParamLimits

0xd240,	// (0x000466a4) popup_note2_window_t3

0x5450,	// (0x0003e8b4) popup_note2_window_t4_ParamLimits

0x5450,	// (0x0003e8b4) popup_note2_window_t4

0xb6de,	// (0x00044b42) popup_note2_window_t5_ParamLimits

0xb6de,	// (0x00044b42) popup_note2_window_t5

0x0004,

0xfc50,	// (0x000490b4) popup_note2_window_t_ParamLimits

0xfc50,	// (0x000490b4) popup_note2_window_t

0x547f,	// (0x0003e8e3) popup_note2_image_window_g1_ParamLimits

0x547f,	// (0x0003e8e3) popup_note2_image_window_g1

0xd285,	// (0x000466e9) popup_note2_image_window_g2_ParamLimits

0xd285,	// (0x000466e9) popup_note2_image_window_g2

0x0001,

0xfc5b,	// (0x000490bf) popup_note2_image_window_g_ParamLimits

0xfc5b,	// (0x000490bf) popup_note2_image_window_g

0x549d,	// (0x0003e901) popup_note2_image_window_t1_ParamLimits

0x549d,	// (0x0003e901) popup_note2_image_window_t1

0x54b5,	// (0x0003e919) popup_note2_image_window_t2_ParamLimits

0x54b5,	// (0x0003e919) popup_note2_image_window_t2

0x54cd,	// (0x0003e931) popup_note2_image_window_t3_ParamLimits

0x54cd,	// (0x0003e931) popup_note2_image_window_t3

0x0002,

0xfc60,	// (0x000490c4) popup_note2_image_window_t_ParamLimits

0xfc60,	// (0x000490c4) popup_note2_image_window_t

0x2731,	// (0x0003bb95) popup_note2_wait_window_g1_ParamLimits

0x2731,	// (0x0003bb95) popup_note2_wait_window_g1

0x273d,	// (0x0003bba1) popup_note2_wait_window_g2_ParamLimits

0x273d,	// (0x0003bba1) popup_note2_wait_window_g2

0x2749,	// (0x0003bbad) popup_note2_wait_window_g3_ParamLimits

0x2749,	// (0x0003bbad) popup_note2_wait_window_g3

0x0002,

0xf80f,	// (0x00048c73) popup_note2_wait_window_g_ParamLimits

0xf80f,	// (0x00048c73) popup_note2_wait_window_g

0x54e9,	// (0x0003e94d) popup_note2_wait_window_t1_ParamLimits

0x54e9,	// (0x0003e94d) popup_note2_wait_window_t1

0x5507,	// (0x0003e96b) popup_note2_wait_window_t2_ParamLimits

0x5507,	// (0x0003e96b) popup_note2_wait_window_t2

0x5525,	// (0x0003e989) popup_note2_wait_window_t3_ParamLimits

0x5525,	// (0x0003e989) popup_note2_wait_window_t3

0x5537,	// (0x0003e99b) popup_note2_wait_window_t4_ParamLimits

0x5537,	// (0x0003e99b) popup_note2_wait_window_t4

0x0003,

0xfc67,	// (0x000490cb) popup_note2_wait_window_t_ParamLimits

0xfc67,	// (0x000490cb) popup_note2_wait_window_t

0x5549,	// (0x0003e9ad) wait_bar2_pane_ParamLimits

0x5549,	// (0x0003e9ad) wait_bar2_pane

0x5561,	// (0x0003e9c5) popup_snote2_single_text_window_g1_ParamLimits

0x5561,	// (0x0003e9c5) popup_snote2_single_text_window_g1

0x5589,	// (0x0003e9ed) popup_snote2_single_text_window_t1_ParamLimits

0x5589,	// (0x0003e9ed) popup_snote2_single_text_window_t1

0x55d5,	// (0x0003ea39) popup_snote2_single_text_window_t2_ParamLimits

0x55d5,	// (0x0003ea39) popup_snote2_single_text_window_t2

0x5621,	// (0x0003ea85) popup_snote2_single_text_window_t3_ParamLimits

0x5621,	// (0x0003ea85) popup_snote2_single_text_window_t3

0x5662,	// (0x0003eac6) popup_snote2_single_text_window_t4_ParamLimits

0x5662,	// (0x0003eac6) popup_snote2_single_text_window_t4

0x5698,	// (0x0003eafc) popup_snote2_single_text_window_t5_ParamLimits

0x5698,	// (0x0003eafc) popup_snote2_single_text_window_t5

0x0004,

0xfc70,	// (0x000490d4) popup_snote2_single_text_window_t_ParamLimits

0xfc70,	// (0x000490d4) popup_snote2_single_text_window_t

0xd297,	// (0x000466fb) popup_snote2_single_graphic_window_g1_ParamLimits

0xd297,	// (0x000466fb) popup_snote2_single_graphic_window_g1

0x56eb,	// (0x0003eb4f) popup_snote2_single_graphic_window_g2_ParamLimits

0x56eb,	// (0x0003eb4f) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7b,	// (0x000490df) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7b,	// (0x000490df) popup_snote2_single_graphic_window_g

0x5713,	// (0x0003eb77) popup_snote2_single_graphic_window_t1_ParamLimits

0x5713,	// (0x0003eb77) popup_snote2_single_graphic_window_t1

0x575f,	// (0x0003ebc3) popup_snote2_single_graphic_window_t2_ParamLimits

0x575f,	// (0x0003ebc3) popup_snote2_single_graphic_window_t2

0x5621,	// (0x0003ea85) popup_snote2_single_graphic_window_t3_ParamLimits

0x5621,	// (0x0003ea85) popup_snote2_single_graphic_window_t3

0x5662,	// (0x0003eac6) popup_snote2_single_graphic_window_t4_ParamLimits

0x5662,	// (0x0003eac6) popup_snote2_single_graphic_window_t4

0x5698,	// (0x0003eafc) popup_snote2_single_graphic_window_t5_ParamLimits

0x5698,	// (0x0003eafc) popup_snote2_single_graphic_window_t5

0x0004,

0xfc80,	// (0x000490e4) popup_snote2_single_graphic_window_t_ParamLimits

0xfc80,	// (0x000490e4) popup_snote2_single_graphic_window_t

0x4155,	// (0x0003d5b9) clock_nsta_pane_cp2_t1

0x4155,	// (0x0003d5b9) clock_nsta_pane_cp2_t2

0x0001,

0xfa9b,	// (0x00048eff) clock_nsta_pane_cp2_t

0x926b,	// (0x000426cf) form_field_data_wide_pane_g1_ParamLimits

0xb8f4,	// (0x00044d58) form_field_data_wide_pane_g2_ParamLimits

0xb8f4,	// (0x00044d58) form_field_data_wide_pane_g2

0xb900,	// (0x00044d64) form_field_data_wide_pane_g3_ParamLimits

0xb900,	// (0x00044d64) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x00048aab) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x00048aab) form_field_data_wide_pane_g

0xcb79,	// (0x00045fdd) grid_touch_3_pane_ParamLimits

0xcb79,	// (0x00045fdd) grid_touch_3_pane

0xd2bf,	// (0x00046723) cell_touch_3_pane_ParamLimits

0xd2bf,	// (0x00046723) cell_touch_3_pane

0x46b1,	// (0x0003db15) cell_touch_3_pane_g1

0x46b1,	// (0x0003db15) cell_touch_3_pane_g2

0x0001,

0xfb20,	// (0x00048f84) cell_touch_3_pane_g

0xb710,	// (0x00044b74) cont_query_data_pane

0xb718,	// (0x00044b7c) cont_query_data_pane_cp1

0x57d9,	// (0x0003ec3d) button_value_adjust_pane_cp7

0x57e1,	// (0x0003ec45) query_popup_pane_cp3

0xbd99,	// (0x000451fd) bg_popup_sub_pane_cp22_ParamLimits

0x96d4,	// (0x00042b38) navi_navi_volume_pane_cp2

0x96e3,	// (0x00042b47) popup_side_volume_key_window_g2

0x96f2,	// (0x00042b56) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x00048b41) popup_side_volume_key_window_g

0x9701,	// (0x00042b65) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x00048b48) popup_side_volume_key_window_t

0x9823,	// (0x00042c87) popup_side_volume_key_window_ParamLimits

0x9031,	// (0x00042495) list_double_graphic_pane_g4_ParamLimits

0x9031,	// (0x00042495) list_double_graphic_pane_g4

0xc993,	// (0x00045df7) list_single_2heading_msg_pane_ParamLimits

0xc993,	// (0x00045df7) list_single_2heading_msg_pane

0xac32,	// (0x00044096) list_single_2heading_msg_pane_g1_ParamLimits

0xac32,	// (0x00044096) list_single_2heading_msg_pane_g1

0xac3e,	// (0x000440a2) list_single_2heading_msg_pane_g2_ParamLimits

0xac3e,	// (0x000440a2) list_single_2heading_msg_pane_g2

0xac51,	// (0x000440b5) list_single_2heading_msg_pane_g3_ParamLimits

0xac51,	// (0x000440b5) list_single_2heading_msg_pane_g3

0xe3f0,	// (0x00047854) list_single_2heading_msg_pane_g4_ParamLimits

0xe3f0,	// (0x00047854) list_single_2heading_msg_pane_g4

0x0003,

0xfc8b,	// (0x000490ef) list_single_2heading_msg_pane_g_ParamLimits

0xfc8b,	// (0x000490ef) list_single_2heading_msg_pane_g

0xac5d,	// (0x000440c1) list_single_2heading_msg_pane_t1_ParamLimits

0xac5d,	// (0x000440c1) list_single_2heading_msg_pane_t1

0xac85,	// (0x000440e9) list_single_2heading_msg_pane_t2_ParamLimits

0xac85,	// (0x000440e9) list_single_2heading_msg_pane_t2

0xacf0,	// (0x00044154) list_single_2heading_msg_pane_t3_ParamLimits

0xacf0,	// (0x00044154) list_single_2heading_msg_pane_t3

0xe408,	// (0x0004786c) list_single_2heading_msg_pane_t4_ParamLimits

0xe408,	// (0x0004786c) list_single_2heading_msg_pane_t4

0x0003,

0xfc94,	// (0x000490f8) list_single_2heading_msg_pane_t_ParamLimits

0xfc94,	// (0x000490f8) list_single_2heading_msg_pane_t

0xb4de,	// (0x00044942) title_pane_g4_ParamLimits

0xb4de,	// (0x00044942) title_pane_g4

0xf0ce,	// (0x00048532) title_pane_stacon_g3_ParamLimits

0xf0ce,	// (0x00048532) title_pane_stacon_g3

0x5313,	// (0x0003e777) list_single_2graphic_im_pane_g4_ParamLimits

0x5313,	// (0x0003e777) list_single_2graphic_im_pane_g4

0xc6d1,	// (0x00045b35) popup_side_volume_key_window_cp

0x3987,	// (0x0003cdeb) main_idle_act2_pane_t1

0x06b8,	// (0x00039b1c) toolbar_button_pane_g10

0x8f6b,	// (0x000423cf) popup_toolbar_window_cp1

0x4146,	// (0x0003d5aa) clock_nsta_pane_cp_t1

0x4146,	// (0x0003d5aa) clock_nsta_pane_cp_t2

0x0001,

0xfa96,	// (0x00048efa) clock_nsta_pane_cp_t

0x96d4,	// (0x00042b38) navi_navi_volume_pane_cp2_ParamLimits

0xf2a2,	// (0x00048706) popup_side_volume_key_window_g1_ParamLimits

0x96e3,	// (0x00042b47) popup_side_volume_key_window_g2_ParamLimits

0x96f2,	// (0x00042b56) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x00048b41) popup_side_volume_key_window_g_ParamLimits

0x0c7c,	// (0x0003a0e0) fep_hwr_aid_pane

0x0d23,	// (0x0003a187) bg_fep_hwr_top_pane_g4_ParamLimits

0x470d,	// (0x0003db71) fep_hwr_top_pane_g1_ParamLimits

0x471f,	// (0x0003db83) fep_hwr_top_pane_g2_ParamLimits

0x0d43,	// (0x0003a1a7) fep_hwr_top_pane_g3_ParamLimits

0xfaeb,	// (0x00048f4f) fep_hwr_top_pane_g_ParamLimits

0x0d58,	// (0x0003a1bc) fep_hwr_top_text_pane_ParamLimits

0x2f2d,	// (0x0003c391) aid_touch_tab_arrow_arrow_2

0x2f36,	// (0x0003c39a) aid_touch_tab_arrow_left_2

0x0c90,	// (0x0003a0f4) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0cc7,	// (0x0003a12b) fep_hwr_prediction_pane

0x4878,	// (0x0003dcdc) fep_vkb_prediction_pane

0xcedf,	// (0x00046343) fep_vkb_side_pane_g3_ParamLimits

0xcedf,	// (0x00046343) fep_vkb_side_pane_g3

0x0ed3,	// (0x0003a337) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0f3f,	// (0x0003a3a3) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0f4c,	// (0x0003a3b0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9a,	// (0x00048ffe) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1152,	// (0x0003a5b6) fep_hwr_prediction_pane_g1

0x115c,	// (0x0003a5c0) fep_hwr_prediction_pane_g2

0x1164,	// (0x0003a5c8) fep_hwr_prediction_pane_g3

0x116c,	// (0x0003a5d0) fep_hwr_prediction_pane_g4

0x0003,

0xfc9d,	// (0x00049101) fep_hwr_prediction_pane_g

0x5806,	// (0x0003ec6a) fep_vkb_prediction_pane_g1

0x5810,	// (0x0003ec74) fep_vkb_prediction_pane_g2

0x5818,	// (0x0003ec7c) fep_vkb_prediction_pane_g3

0x5820,	// (0x0003ec84) fep_vkb_prediction_pane_g4

0x0003,

0xfca6,	// (0x0004910a) fep_vkb_prediction_pane_g

0xaa26,	// (0x00043e8a) slider_set_pane_g3

0xaa3a,	// (0x00043e9e) slider_set_pane_g4

0xaa52,	// (0x00043eb6) slider_set_pane_g5

0xaa26,	// (0x00043e8a) slider_set_pane_g6

0xaa68,	// (0x00043ecc) slider_set_pane_g7

0x35b9,	// (0x0003ca1d) slider_form_pane_g3

0x35c2,	// (0x0003ca26) slider_form_pane_g4

0x35ca,	// (0x0003ca2e) slider_form_pane_g5

0x35b9,	// (0x0003ca1d) slider_form_pane_g6

0xc977,	// (0x00045ddb) slider_form_pane_g7

0x3c33,	// (0x0003d097) slider_set_pane_vc_g3

0x3c3c,	// (0x0003d0a0) slider_set_pane_vc_g4

0x3c45,	// (0x0003d0a9) slider_set_pane_vc_g5

0x3c33,	// (0x0003d097) slider_set_pane_vc_g6

0x3c4e,	// (0x0003d0b2) slider_set_pane_vc_g7

0x3e04,	// (0x0003d268) slider_form_pane_vc_g1

0x3e0d,	// (0x0003d271) slider_form_pane_vc_g2

0x3e16,	// (0x0003d27a) slider_form_pane_vc_g3

0x3e04,	// (0x0003d268) slider_form_pane_vc_g4

0x3e1f,	// (0x0003d283) slider_form_pane_vc_g5

0x0004,

0xfa68,	// (0x00048ecc) slider_form_pane_vc_g

0xdb1f,	// (0x00046f83) main_idle_act3_pane

0x5828,	// (0x0003ec8c) ai3_links_pane

0xd308,	// (0x0004676c) popup_ai3_data_window_ParamLimits

0xd308,	// (0x0004676c) popup_ai3_data_window

0xb4c0,	// (0x00044924) grid_ai3_links_pane

0xd320,	// (0x00046784) cell_ai3_links_pane_ParamLimits

0xd320,	// (0x00046784) cell_ai3_links_pane

0x5861,	// (0x0003ecc5) bg_popup_sub_pane_cp11

0x586e,	// (0x0003ecd2) cell_ai3_links_pane_g1

0xb4c0,	// (0x00044924) bg_popup_sub_pane_cp12

0x5893,	// (0x0003ecf7) heading_ai3_data_pane

0x589b,	// (0x0003ecff) list_ai3_gene_pane

0x58a7,	// (0x0003ed0b) popup_ai3_data_window_g1

0x58af,	// (0x0003ed13) heading_ai3_data_pane_g1

0x58b7,	// (0x0003ed1b) heading_ai3_data_pane_t1

0xd33a,	// (0x0004679e) list_double_ai3_gene_pane_ParamLimits

0xd33a,	// (0x0004679e) list_double_ai3_gene_pane

0x58d2,	// (0x0003ed36) list_single_ai3_gene_pane_ParamLimits

0x58d2,	// (0x0003ed36) list_single_ai3_gene_pane

0x4676,	// (0x0003dada) list_highlight_pane_cp7_ParamLimits

0x4676,	// (0x0003dada) list_highlight_pane_cp7

0x58df,	// (0x0003ed43) list_single_a13_gene_pane_t1_ParamLimits

0x58df,	// (0x0003ed43) list_single_a13_gene_pane_t1

0x58f6,	// (0x0003ed5a) list_single_ai3_gene_pane_g1

0x58ff,	// (0x0003ed63) list_single_ai3_gene_pane_g2

0x0001,

0xfcaf,	// (0x00049113) list_single_ai3_gene_pane_g

0x5907,	// (0x0003ed6b) list_double_ai3_gene_pane_g1_ParamLimits

0x5907,	// (0x0003ed6b) list_double_ai3_gene_pane_g1

0xd347,	// (0x000467ab) list_double_ai3_gene_pane_t1_ParamLimits

0xd347,	// (0x000467ab) list_double_ai3_gene_pane_t1

0x592f,	// (0x0003ed93) list_double_ai3_gene_pane_t2_ParamLimits

0x592f,	// (0x0003ed93) list_double_ai3_gene_pane_t2

0x5944,	// (0x0003eda8) list_double_ai3_gene_pane_t3_ParamLimits

0x5944,	// (0x0003eda8) list_double_ai3_gene_pane_t3

0x0002,

0xfcb4,	// (0x00049118) list_double_ai3_gene_pane_t_ParamLimits

0xfcb4,	// (0x00049118) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe3e6,	// (0x0004784a) aid_size_min_col_2

0xd2f2,	// (0x00046756) aid_size_min_msg_ParamLimits

0xd2f2,	// (0x00046756) aid_size_min_msg

0xcef3,	// (0x00046357) fep_vkb_top_text_pane_g2_ParamLimits

0xcef3,	// (0x00046357) fep_vkb_top_text_pane_g2

0x0001,

0xfb1b,	// (0x00048f7f) fep_vkb_top_text_pane_g_ParamLimits

0xfb1b,	// (0x00048f7f) fep_vkb_top_text_pane_g

0xdb1f,	// (0x00046f83) main_hc_apps_shell_pane

0x5961,	// (0x0003edc5) grid_hc_apps_pane_ParamLimits

0x5961,	// (0x0003edc5) grid_hc_apps_pane

0x5973,	// (0x0003edd7) list_hc_apps_pane

0x597b,	// (0x0003eddf) scroll_pane_cp37_ParamLimits

0x597b,	// (0x0003eddf) scroll_pane_cp37

0xd363,	// (0x000467c7) cell_hc_apps_pane_ParamLimits

0xd363,	// (0x000467c7) cell_hc_apps_pane

0xd421,	// (0x00046885) cell_hc_apps_pane_g1_ParamLimits

0xd421,	// (0x00046885) cell_hc_apps_pane_g1

0x5a65,	// (0x0003eec9) cell_hc_apps_pane_g2_ParamLimits

0x5a65,	// (0x0003eec9) cell_hc_apps_pane_g2

0x5a81,	// (0x0003eee5) cell_hc_apps_pane_g3_ParamLimits

0x5a81,	// (0x0003eee5) cell_hc_apps_pane_g3

0x0002,

0xfcbb,	// (0x0004911f) cell_hc_apps_pane_g_ParamLimits

0xfcbb,	// (0x0004911f) cell_hc_apps_pane_g

0xd44d,	// (0x000468b1) cell_hc_apps_pane_t1_ParamLimits

0xd44d,	// (0x000468b1) cell_hc_apps_pane_t1

0xb65a,	// (0x00044abe) grid_highlight_pane_cp10_ParamLimits

0xb65a,	// (0x00044abe) grid_highlight_pane_cp10

0xd48b,	// (0x000468ef) list_single_hc_apps_pane_ParamLimits

0xd48b,	// (0x000468ef) list_single_hc_apps_pane

0xd4bb,	// (0x0004691f) list_single_hc_apps_pane_g1

0xad5e,	// (0x000441c2) list_single_hc_apps_pane_g2

0x0001,

0xfcc2,	// (0x00049126) list_single_hc_apps_pane_g

0xad77,	// (0x000441db) list_single_hc_apps_pane_g2_copy1

0xad93,	// (0x000441f7) list_single_hc_apps_pane_t1

0xb530,	// (0x00044994) bg_set_opt_pane_cp_ParamLimits

0x8a36,	// (0x00041e9a) setting_slider_pane_t1_ParamLimits

0x8a4f,	// (0x00041eb3) setting_slider_pane_t2_ParamLimits

0x8a69,	// (0x00041ecd) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0004899d) setting_slider_pane_t_ParamLimits

0x8a81,	// (0x00041ee5) slider_set_pane_ParamLimits

0xf4a6,	// (0x0004890a) control_pane_g5_ParamLimits

0xf4a6,	// (0x0004890a) control_pane_g5

0xc7f9,	// (0x00045c5d) slider_set_pane_g1_ParamLimits

0x09df,	// (0x00039e43) slider_set_pane_g2_ParamLimits

0xaa26,	// (0x00043e8a) slider_set_pane_g3_ParamLimits

0xaa3a,	// (0x00043e9e) slider_set_pane_g4_ParamLimits

0xaa52,	// (0x00043eb6) slider_set_pane_g5_ParamLimits

0xaa26,	// (0x00043e8a) slider_set_pane_g6_ParamLimits

0xaa68,	// (0x00043ecc) slider_set_pane_g7_ParamLimits

0xf92b,	// (0x00048d8f) slider_set_pane_g_ParamLimits

0xc047,	// (0x000454ab) navi_icon_text_pane_ParamLimits

0xa323,	// (0x00043787) aid_fill_nsta_2_ParamLimits

0xa35a,	// (0x000437be) aid_touch_tab_arrow_left_ParamLimits

0xa370,	// (0x000437d4) aid_touch_tab_arrow_right_ParamLimits

0xa40b,	// (0x0004386f) clock_nsta_pane_ParamLimits

0x2f0f,	// (0x0003c373) navi_icon_pane_g1_ParamLimits

0x2f1b,	// (0x0003c37f) navi_text_pane_t1_ParamLimits

0x4256,	// (0x0003d6ba) navi_icon_text_pane_g1_ParamLimits

0x4262,	// (0x0003d6c6) navi_icon_text_pane_t1_ParamLimits

0xd4bb,	// (0x0004691f) list_single_hc_apps_pane_g1_ParamLimits

0xad5e,	// (0x000441c2) list_single_hc_apps_pane_g2_ParamLimits

0xfcc2,	// (0x00049126) list_single_hc_apps_pane_g_ParamLimits

0xad77,	// (0x000441db) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xad93,	// (0x000441f7) list_single_hc_apps_pane_t1_ParamLimits

0x8867,	// (0x00041ccb) popup_toolbar2_fixed_window_ParamLimits

0x8867,	// (0x00041ccb) popup_toolbar2_fixed_window

0xa233,	// (0x00043697) popup_toolbar2_float_window

0xb4c0,	// (0x00044924) bg_popup_sub_pane_cp27

0x5b5f,	// (0x0003efc3) grid_toolbar2_float_pane

0xb4c0,	// (0x00044924) bg_popup_sub_pane_cp26

0x5b5f,	// (0x0003efc3) grid_toolbar2_fixed_pane

0xd4d4,	// (0x00046938) cell_toolbar2_fixed_pane_ParamLimits

0xd4d4,	// (0x00046938) cell_toolbar2_fixed_pane

0xd4ee,	// (0x00046952) cell_toolbar2_fixed_pane_g1

0x016d,	// (0x000395d1) toolbar2_fixed_button_pane

0x207d,	// (0x0003b4e1) toolbar2_fixed_button_pane_g1

0x208d,	// (0x0003b4f1) toolbar2_fixed_button_pane_g2

0x2085,	// (0x0003b4e9) toolbar2_fixed_button_pane_g3

0x209d,	// (0x0003b501) toolbar2_fixed_button_pane_g4

0x2095,	// (0x0003b4f9) toolbar2_fixed_button_pane_g5

0x20a5,	// (0x0003b509) toolbar2_fixed_button_pane_g6

0x20ad,	// (0x0003b511) toolbar2_fixed_button_pane_g7

0x20bd,	// (0x0003b521) toolbar2_fixed_button_pane_g8

0x20b5,	// (0x0003b519) toolbar2_fixed_button_pane_g9

0x0008,

0xf82d,	// (0x00048c91) toolbar2_fixed_button_pane_g

0x5b80,	// (0x0003efe4) cell_toolbar2_float_pane_ParamLimits

0x5b80,	// (0x0003efe4) cell_toolbar2_float_pane

0x5b91,	// (0x0003eff5) cell_toolbar2_float_pane_g1

0x016d,	// (0x000395d1) toolbar2_fixed_button_pane_cp

0xcddb,	// (0x0004623f) fep_vkb_accented_list_pane_ParamLimits

0xcddb,	// (0x0004623f) fep_vkb_accented_list_pane

0x0eb3,	// (0x0003a317) bg_popup_fep_shadow_pane_g9

0xc1a2,	// (0x00045606) bg_popup_fep_shadow_pane_cp3

0xb9ff,	// (0x00044e63) list_accented_list_pane

0x5b9a,	// (0x0003effe) list_single_accented_list_pane_ParamLimits

0x5b9a,	// (0x0003effe) list_single_accented_list_pane

0xc1a2,	// (0x00045606) list_highlight_pane_cp10

0x5bab,	// (0x0003f00f) list_single_accented_list_pane_t1

0xa15d,	// (0x000435c1) popup_slider_window_ParamLimits

0xa15d,	// (0x000435c1) popup_slider_window

0x57e9,	// (0x0003ec4d) aid_indentation_list_msg

0xd5df,	// (0x00046a43) bg_popup_window_pane_cp19

0x5cd1,	// (0x0003f135) popup_slider_window_g1

0x5ced,	// (0x0003f151) popup_slider_window_g2

0x5d09,	// (0x0003f16d) popup_slider_window_g3

0x0005,

0xfcc7,	// (0x0004912b) popup_slider_window_g

0x5d6f,	// (0x0003f1d3) popup_slider_window_t1

0x5de3,	// (0x0003f247) small_volume_slider_vertical_pane

0x46b1,	// (0x0003db15) small_volume_slider_vertical_pane_g1

0x46b1,	// (0x0003db15) small_volume_slider_vertical_pane_g2

0x5dff,	// (0x0003f263) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd9,	// (0x0004913d) small_volume_slider_vertical_pane_g

0x8666,	// (0x00041aca) area_side_right_pane_ParamLimits

0x8666,	// (0x00041aca) area_side_right_pane

0xadc1,	// (0x00044225) aid_size_side_button_ParamLimits

0xadc1,	// (0x00044225) aid_size_side_button

0xadda,	// (0x0004423e) grid_sctrl_middle_pane_ParamLimits

0xadda,	// (0x0004423e) grid_sctrl_middle_pane

0x120a,	// (0x0003a66e) sctrl_sk_bottom_pane

0x121b,	// (0x0003a67f) sctrl_sk_top_pane

0x122d,	// (0x0003a691) aid_touch_sctrl_top

0x123a,	// (0x0003a69e) bg_sctrl_sk_pane_ParamLimits

0x123a,	// (0x0003a69e) bg_sctrl_sk_pane

0x1248,	// (0x0003a6ac) sctrl_sk_top_pane_g1

0x1255,	// (0x0003a6b9) sctrl_sk_top_pane_t1

0x122d,	// (0x0003a691) aid_touch_sctrl_bottom

0x123a,	// (0x0003a69e) bg_sctrl_sk_pane_cp_ParamLimits

0x123a,	// (0x0003a69e) bg_sctrl_sk_pane_cp

0x1270,	// (0x0003a6d4) sctrl_sk_bottom_pane_g1

0x1255,	// (0x0003a6b9) sctrl_sk_bottom_pane_t1

0xadf4,	// (0x00044258) cell_sctrl_middle_pane_ParamLimits

0xadf4,	// (0x00044258) cell_sctrl_middle_pane

0xae05,	// (0x00044269) aid_touch_sctrl_middle_ParamLimits

0xae05,	// (0x00044269) aid_touch_sctrl_middle

0xae12,	// (0x00044276) bg_sctrl_middle_pane_ParamLimits

0xae12,	// (0x00044276) bg_sctrl_middle_pane

0x18eb,	// (0x0003ad4f) cell_sctrl_middle_pane_g1_ParamLimits

0x18eb,	// (0x0003ad4f) cell_sctrl_middle_pane_g1

0xae20,	// (0x00044284) cell_sctrl_middle_pane_g2_ParamLimits

0xae20,	// (0x00044284) cell_sctrl_middle_pane_g2

0x0001,

0xfce5,	// (0x00049149) cell_sctrl_middle_pane_g_ParamLimits

0xfce5,	// (0x00049149) cell_sctrl_middle_pane_g

0x207d,	// (0x0003b4e1) bg_sctrl_middle_pane_g1

0x2085,	// (0x0003b4e9) bg_sctrl_middle_pane_g2

0x208d,	// (0x0003b4f1) bg_sctrl_middle_pane_g3

0x2095,	// (0x0003b4f9) bg_sctrl_middle_pane_g4

0x209d,	// (0x0003b501) bg_sctrl_middle_pane_g5

0x20a5,	// (0x0003b509) bg_sctrl_middle_pane_g6

0x20ad,	// (0x0003b511) bg_sctrl_middle_pane_g7

0x20b5,	// (0x0003b519) bg_sctrl_middle_pane_g8

0x0007,

0xfcea,	// (0x0004914e) bg_sctrl_middle_pane_g

0x20bd,	// (0x0003b521) bg_sctrl_middle_pane_g8_copy1

0x207d,	// (0x0003b4e1) bg_sctrl_sk_pane_g1

0x208d,	// (0x0003b4f1) bg_sctrl_sk_pane_g2

0x2085,	// (0x0003b4e9) bg_sctrl_sk_pane_g3

0x0008,

0xf82d,	// (0x00048c91) bg_sctrl_sk_pane_g

0xb828,	// (0x00044c8c) aid_size_touch_scroll_bar

0x209d,	// (0x0003b501) bg_sctrl_sk_pane_g4

0x2095,	// (0x0003b4f9) bg_sctrl_sk_pane_g5

0x20a5,	// (0x0003b509) bg_sctrl_sk_pane_g6

0x20ad,	// (0x0003b511) bg_sctrl_sk_pane_g7

0x20bd,	// (0x0003b521) bg_sctrl_sk_pane_g8

0x20b5,	// (0x0003b519) bg_sctrl_sk_pane_g9

0xf4db,	// (0x0004893f) popup_fep_china_hwr2_fs_candidate_window

0x9c23,	// (0x00043087) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9c23,	// (0x00043087) popup_fep_china_hwr2_fs_control_window

0x0ed3,	// (0x0003a337) sctrl_sk_top_pane_g2

0x0001,

0xfce0,	// (0x00049144) sctrl_sk_top_pane_g

0xd675,	// (0x00046ad9) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd675,	// (0x00046ad9) aid_fep_china_hwr2_fs_cell

0xd689,	// (0x00046aed) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd689,	// (0x00046aed) bg_popup_fep_shadow_pane_cp4

0xd6a0,	// (0x00046b04) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd6a0,	// (0x00046b04) bg_popup_fep_shadow_pane_cp5

0xd6b2,	// (0x00046b16) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd6b2,	// (0x00046b16) popup_fep_china_hwr2_fs_control_bar_grid

0xd6c6,	// (0x00046b2a) popup_fep_china_hwr2_fs_control_funtion_grid

0x5e5b,	// (0x0003f2bf) aid_fep_china_hwr2_fs_candi_cell

0xb4c0,	// (0x00044924) bg_popup_fep_shadow_pane_cp6

0x5e65,	// (0x0003f2c9) popup_fep_china_hwr2_fs_candidate_grid

0xd6ce,	// (0x00046b32) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd6ce,	// (0x00046b32) cell_fep_china_hwr2_fs_funtion_grid

0x46b1,	// (0x0003db15) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5e87,	// (0x0003f2eb) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5e87,	// (0x0003f2eb) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5e95,	// (0x0003f2f9) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5e95,	// (0x0003f2f9) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfb,	// (0x0004915f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfb,	// (0x0004915f) cell_fep_china_hwr2_fs_funtion_grid_g

0xd6e6,	// (0x00046b4a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd6e6,	// (0x00046b4a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd6fb,	// (0x00046b5f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd6fb,	// (0x00046b5f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd00,	// (0x00049164) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd00,	// (0x00049164) cell_fep_china_hwr2_fs_funtion_grid_t

0x5edc,	// (0x0003f340) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5ee4,	// (0x0003f348) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5eec,	// (0x0003f350) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd05,	// (0x00049169) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5ef4,	// (0x0003f358) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5ef4,	// (0x0003f358) cell_fep_china_hwr2_fs_candidate_grid

0x5f0d,	// (0x0003f371) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5f15,	// (0x0003f379) popup_fep_china_hwr2_fs_candidate_grid_g21

0x46b1,	// (0x0003db15) cell_fep_china_hwr2_fs_candidate_grid_g1

0x46b1,	// (0x0003db15) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb20,	// (0x00048f84) cell_fep_china_hwr2_fs_candidate_grid_g

0x5f1d,	// (0x0003f381) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0453,	// (0x000398b7) clock_nsta_pane_cp_24_ParamLimits

0x0453,	// (0x000398b7) clock_nsta_pane_cp_24

0x04d1,	// (0x00039935) indicator_nsta_pane_cp_24_ParamLimits

0x04d1,	// (0x00039935) indicator_nsta_pane_cp_24

0x2d8b,	// (0x0003c1ef) heading_pane_g1

0x0001,

0xf892,	// (0x00048cf6) heading_pane_g

0x37d0,	// (0x0003cc34) grid_sct_catagory_button_pane

0x3800,	// (0x0003cc64) scroll_pane_cp5_ParamLimits

0x42a4,	// (0x0003d708) button_value_adjust_pane_cp5_ParamLimits

0x42a4,	// (0x0003d708) button_value_adjust_pane_cp5

0x4383,	// (0x0003d7e7) form2_midp_time_pane_ParamLimits

0x5f2b,	// (0x0003f38f) cell_sct_catagory_button_pane_ParamLimits

0x5f2b,	// (0x0003f38f) cell_sct_catagory_button_pane

0x4676,	// (0x0003dada) bg_button_pane_cp01_ParamLimits

0x4676,	// (0x0003dada) bg_button_pane_cp01

0x46b1,	// (0x0003db15) cell_sct_catagory_button_pane_g1

0xa1d6,	// (0x0004363a) popup_tb_extension_window

0xd717,	// (0x00046b7b) aid_size_cell_ext_ParamLimits

0xd717,	// (0x00046b7b) aid_size_cell_ext

0xb7da,	// (0x00044c3e) bg_tb_trans_pane_cp1_ParamLimits

0xb7da,	// (0x00044c3e) bg_tb_trans_pane_cp1

0xd73d,	// (0x00046ba1) grid_tb_ext_pane_ParamLimits

0xd73d,	// (0x00046ba1) grid_tb_ext_pane

0xd77c,	// (0x00046be0) cell_tb_ext_pane_ParamLimits

0xd77c,	// (0x00046be0) cell_tb_ext_pane

0xd7a4,	// (0x00046c08) cell_tb_ext_pane_g1_ParamLimits

0xd7a4,	// (0x00046c08) cell_tb_ext_pane_g1

0x5fc1,	// (0x0003f425) cell_tb_ext_pane_t1

0xb65a,	// (0x00044abe) list_highlight_pane_cp11_ParamLimits

0xb65a,	// (0x00044abe) list_highlight_pane_cp11

0x887c,	// (0x00041ce0) popup_uni_indicator_window_ParamLimits

0x887c,	// (0x00041ce0) popup_uni_indicator_window

0xb8e6,	// (0x00044d4a) bg_popup_sub_pane_cp14

0xd7c1,	// (0x00046c25) list_uniindi_pane

0xd7cd,	// (0x00046c31) uniindi_top_pane

0xb65a,	// (0x00044abe) bg_uniindi_top_pane

0xd7ec,	// (0x00046c50) uniindi_top_pane_g1

0xd802,	// (0x00046c66) uniindi_top_pane_g2

0x0003,

0xfd0c,	// (0x00049170) uniindi_top_pane_g

0xd81f,	// (0x00046c83) uniindi_top_pane_t1

0x6072,	// (0x0003f4d6) list_single_uniindi_pane_ParamLimits

0x6072,	// (0x0003f4d6) list_single_uniindi_pane

0x46b1,	// (0x0003db15) bg_uniindi_top_pane_g1

0x6085,	// (0x0003f4e9) list_single_uniindi_pane_g1

0x6098,	// (0x0003f4fc) list_single_uniindi_pane_t1

0xdb1f,	// (0x00046f83) control_bg_pane

0x60bd,	// (0x0003f521) bg_sctrl_sk_pane_cp1

0x60c6,	// (0x0003f52a) bg_sctrl_sk_pane_cp2

0x60cf,	// (0x0003f533) control_bg_pane_g1

0x60d8,	// (0x0003f53c) control_bg_pane_g2

0x0001,

0xfd15,	// (0x00049179) control_bg_pane_g

0x40ea,	// (0x0003d54e) cell_indicator_nsta_pane_g1_ParamLimits

0xcbb6,	// (0x0004601a) cell_indicator_nsta_pane_g2_ParamLimits

0xfa84,	// (0x00048ee8) cell_indicator_nsta_pane_g_ParamLimits

0xe1e1,	// (0x00047645) form2_midp_time_pane_t1_ParamLimits

0x0c6e,	// (0x0003a0d2) main_idle_act4_pane_ParamLimits

0x0c6e,	// (0x0003a0d2) main_idle_act4_pane

0xa1d6,	// (0x0004363a) popup_tb_extension_window_ParamLimits

0xd762,	// (0x00046bc6) tb_ext_find_pane_ParamLimits

0xd762,	// (0x00046bc6) tb_ext_find_pane

0x60e1,	// (0x0003f545) ai_gene_pane_1_cp1

0xc223,	// (0x00045687) ai_gene_pane_2_cp1

0xd849,	// (0x00046cad) list_single_idle_plugin_calendar_pane

0x60f2,	// (0x0003f556) list_single_idle_plugin_notification_pane

0x60fb,	// (0x0003f55f) list_single_idle_plugin_player_pane

0xd852,	// (0x00046cb6) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd852,	// (0x00046cb6) list_single_idle_plugin_shortcut_pane

0xd87a,	// (0x00046cde) main_idle_act4_pane_t1

0xd891,	// (0x00046cf5) main_idle_act4_pane_t2

0x0001,

0xfd1a,	// (0x0004917e) main_idle_act4_pane_t

0xd8a8,	// (0x00046d0c) middle_sk_idle_act4_pane_ParamLimits

0xd8a8,	// (0x00046d0c) middle_sk_idle_act4_pane

0xd8c4,	// (0x00046d28) popup_clock_digital_analogue_window_cp2

0xd8f0,	// (0x00046d54) shortcut_wheel_idle_act4_pane_ParamLimits

0xd8f0,	// (0x00046d54) shortcut_wheel_idle_act4_pane

0x46b1,	// (0x0003db15) shortcut_wheel_idle_act4_pane_g1

0x46b1,	// (0x0003db15) shortcut_wheel_idle_act4_pane_g2

0x46b1,	// (0x0003db15) shortcut_wheel_idle_act4_pane_g3

0x46b1,	// (0x0003db15) shortcut_wheel_idle_act4_pane_g4

0x46b1,	// (0x0003db15) shortcut_wheel_idle_act4_pane_g5

0x618e,	// (0x0003f5f2) shortcut_wheel_idle_act4_pane_g6

0x6196,	// (0x0003f5fa) shortcut_wheel_idle_act4_pane_g7

0x619e,	// (0x0003f602) shortcut_wheel_idle_act4_pane_g8

0x61a6,	// (0x0003f60a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1f,	// (0x00049183) shortcut_wheel_idle_act4_pane_g

0xd96d,	// (0x00046dd1) middle_sk_idle_act4_pane_g1_ParamLimits

0xd96d,	// (0x00046dd1) middle_sk_idle_act4_pane_g1

0xd97b,	// (0x00046ddf) middle_sk_idle_act4_pane_g2_ParamLimits

0xd97b,	// (0x00046ddf) middle_sk_idle_act4_pane_g2

0x0001,

0xfd42,	// (0x000491a6) middle_sk_idle_act4_pane_g_ParamLimits

0xfd42,	// (0x000491a6) middle_sk_idle_act4_pane_g

0xd993,	// (0x00046df7) middle_sk_idle_act4_pane_t1_ParamLimits

0xd993,	// (0x00046df7) middle_sk_idle_act4_pane_t1

0xd9c2,	// (0x00046e26) grid_ai_shortcut_pane_ParamLimits

0xd9c2,	// (0x00046e26) grid_ai_shortcut_pane

0xd9df,	// (0x00046e43) list_highlight_pane_cp16_ParamLimits

0xd9df,	// (0x00046e43) list_highlight_pane_cp16

0xd9ec,	// (0x00046e50) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd9ec,	// (0x00046e50) list_single_idle_plugin_shortcut_pane_g1

0xd9f8,	// (0x00046e5c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd9f8,	// (0x00046e5c) list_single_idle_plugin_shortcut_pane_g2

0xda14,	// (0x00046e78) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xda14,	// (0x00046e78) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd47,	// (0x000491ab) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd47,	// (0x000491ab) list_single_idle_plugin_shortcut_pane_g

0xda29,	// (0x00046e8d) cell_ai_shortcut_pane_ParamLimits

0xda29,	// (0x00046e8d) cell_ai_shortcut_pane

0xda3f,	// (0x00046ea3) cell_ai_shortcut_pane_g1_ParamLimits

0xda3f,	// (0x00046ea3) cell_ai_shortcut_pane_g1

0x60e1,	// (0x0003f545) ai_gene_pane_1_cp2

0x62d6,	// (0x0003f73a) ai_gene_pane_2_cp2

0x62de,	// (0x0003f742) list_highlight_pane_cp15

0xda61,	// (0x00046ec5) list_single_idle_plugin_calendar_pane_g1

0x62de,	// (0x0003f742) list_highlight_pane_cp17

0x62ef,	// (0x0003f753) list_single_idle_plugin_calendar_pane_g1_copy1

0x62f7,	// (0x0003f75b) list_single_idle_plugin_player_pane_g1

0x3a29,	// (0x0003ce8d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4e,	// (0x000491b2) list_single_idle_plugin_player_pane_g

0x62ff,	// (0x0003f763) list_single_idle_plugin_player_pane_t1

0x630d,	// (0x0003f771) list_single_idle_plugin_player_pane_t2

0x631b,	// (0x0003f77f) list_single_idle_plugin_player_pane_t3

0x6329,	// (0x0003f78d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd53,	// (0x000491b7) list_single_idle_plugin_player_pane_t

0x6337,	// (0x0003f79b) wait_bar_pane_cp15

0x633f,	// (0x0003f7a3) grid_ai_notification_pane

0x3a29,	// (0x0003ce8d) list_single_idle_plugin_notification_pane_g1

0xda69,	// (0x00046ecd) cell_ai_notification_pane_ParamLimits

0xda69,	// (0x00046ecd) cell_ai_notification_pane

0x6355,	// (0x0003f7b9) cell_ai_notification_pane_g1

0x635d,	// (0x0003f7c1) cell_ai_notification_pane_t1

0xda76,	// (0x00046eda) tb_ext_find_button_pane

0xda7e,	// (0x00046ee2) tb_ext_find_pane_g1

0xda86,	// (0x00046eea) tb_ext_find_pane_t1

0xbd38,	// (0x0004519c) tb_ext_find_button_pane_g1

0xda94,	// (0x00046ef8) tb_ext_find_button_pane_g2

0x0001,

0xfd5c,	// (0x000491c0) tb_ext_find_button_pane_g

0xd87a,	// (0x00046cde) main_idle_act4_pane_t1_ParamLimits

0xd891,	// (0x00046cf5) main_idle_act4_pane_t2_ParamLimits

0xfd1a,	// (0x0004917e) main_idle_act4_pane_t_ParamLimits

0xd8c4,	// (0x00046d28) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd8dc,	// (0x00046d40) sat_plugin_idle_act4_pane_ParamLimits

0xd8dc,	// (0x00046d40) sat_plugin_idle_act4_pane

0xda9d,	// (0x00046f01) sat_plugin_idle_act4_pane_t1_ParamLimits

0xda9d,	// (0x00046f01) sat_plugin_idle_act4_pane_t1

0xdab5,	// (0x00046f19) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdab5,	// (0x00046f19) sat_plugin_idle_act4_pane_t2

0xdacd,	// (0x00046f31) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdacd,	// (0x00046f31) sat_plugin_idle_act4_pane_t3

0xe42d,	// (0x00047891) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe42d,	// (0x00047891) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd61,	// (0x000491c5) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd61,	// (0x000491c5) sat_plugin_idle_act4_pane_t

0x87f7,	// (0x00041c5b) popup_battery_window_ParamLimits

0x87f7,	// (0x00041c5b) popup_battery_window

0xb65a,	// (0x00044abe) bg_popup_sub_pane_cp25_ParamLimits

0xb65a,	// (0x00044abe) bg_popup_sub_pane_cp25

0x63de,	// (0x0003f842) popup_battery_window_g1_ParamLimits

0x63de,	// (0x0003f842) popup_battery_window_g1

0x63ea,	// (0x0003f84e) popup_battery_window_t1_ParamLimits

0x63ea,	// (0x0003f84e) popup_battery_window_t1

0x63fc,	// (0x0003f860) popup_battery_window_t2_ParamLimits

0x63fc,	// (0x0003f860) popup_battery_window_t2

0x0001,

0xfd6a,	// (0x000491ce) popup_battery_window_t_ParamLimits

0xfd6a,	// (0x000491ce) popup_battery_window_t

0x9877,	// (0x00042cdb) midp_canvas_pane_ParamLimits

0x98e9,	// (0x00042d4d) midp_keypad_pane_ParamLimits

0x98e9,	// (0x00042d4d) midp_keypad_pane

0xba28,	// (0x00044e8c) main_midp_pane_ParamLimits

0xcbc3,	// (0x00046027) signal_pane_g2_cp_ParamLimits

0xe445,	// (0x000478a9) aid_size_cell_midp_keypad_ParamLimits

0xe445,	// (0x000478a9) aid_size_cell_midp_keypad

0xe463,	// (0x000478c7) midp_keyp_game_grid_pane_ParamLimits

0xe463,	// (0x000478c7) midp_keyp_game_grid_pane

0xe48a,	// (0x000478ee) midp_keyp_rocker_pane_ParamLimits

0xe48a,	// (0x000478ee) midp_keyp_rocker_pane

0xe4db,	// (0x0004793f) midp_keyp_sk_left_pane_ParamLimits

0xe4db,	// (0x0004793f) midp_keyp_sk_left_pane

0xe52f,	// (0x00047993) midp_keyp_sk_right_pane_ParamLimits

0xe52f,	// (0x00047993) midp_keyp_sk_right_pane

0xb4c0,	// (0x00044924) bg_button_pane_cp03

0xe583,	// (0x000479e7) midp_keyp_sk_left_pane_g1

0xb4c0,	// (0x00044924) bg_button_pane_cp04

0xe583,	// (0x000479e7) midp_keyp_sk_right_pane_g1

0x46b1,	// (0x0003db15) midp_keyp_rocker_pane_g1

0xe58c,	// (0x000479f0) keyp_game_cell_pane_ParamLimits

0xe58c,	// (0x000479f0) keyp_game_cell_pane

0xb4c0,	// (0x00044924) bg_button_pane_cp02

0xe5b0,	// (0x00047a14) keyp_game_cell_pane_g1

0x8817,	// (0x00041c7b) popup_fep_vkb2_window_ParamLimits

0x8817,	// (0x00041c7b) popup_fep_vkb2_window

0xae2c,	// (0x00044290) aid_size_cell_vkb2_ParamLimits

0xae2c,	// (0x00044290) aid_size_cell_vkb2

0xae60,	// (0x000442c4) popup_fep_vkb2_window_g1_ParamLimits

0xae60,	// (0x000442c4) popup_fep_vkb2_window_g1

0xaeb0,	// (0x00044314) vkb2_area_bottom_pane_ParamLimits

0xaeb0,	// (0x00044314) vkb2_area_bottom_pane

0xaf04,	// (0x00044368) vkb2_area_keypad_pane_ParamLimits

0xaf04,	// (0x00044368) vkb2_area_keypad_pane

0xaf4c,	// (0x000443b0) vkb2_area_top_pane_ParamLimits

0xaf4c,	// (0x000443b0) vkb2_area_top_pane

0xafd8,	// (0x0004443c) vkb2_top_entry_pane_ParamLimits

0xafd8,	// (0x0004443c) vkb2_top_entry_pane

0xb005,	// (0x00044469) vkb2_top_grid_left_pane_ParamLimits

0xb005,	// (0x00044469) vkb2_top_grid_left_pane

0xb026,	// (0x0004448a) vkb2_top_grid_right_pane_ParamLimits

0xb026,	// (0x0004448a) vkb2_top_grid_right_pane

0x14db,	// (0x0003a93f) vkb2_cell_keypad_pane_ParamLimits

0x14db,	// (0x0003a93f) vkb2_cell_keypad_pane

0xb06e,	// (0x000444d2) vkb2_area_bottom_grid_pane_ParamLimits

0xb06e,	// (0x000444d2) vkb2_area_bottom_grid_pane

0xb098,	// (0x000444fc) vkb2_area_bottom_pane_g1_ParamLimits

0xb098,	// (0x000444fc) vkb2_area_bottom_pane_g1

0xb0be,	// (0x00044522) vkb2_area_bottom_pane_g2_ParamLimits

0xb0be,	// (0x00044522) vkb2_area_bottom_pane_g2

0xb0ef,	// (0x00044553) vkb2_area_bottom_pane_g3_ParamLimits

0xb0ef,	// (0x00044553) vkb2_area_bottom_pane_g3

0x0002,

0xfd6f,	// (0x000491d3) vkb2_area_bottom_pane_g_ParamLimits

0xfd6f,	// (0x000491d3) vkb2_area_bottom_pane_g

0x1685,	// (0x0003aae9) vkb2_top_cell_left_pane_ParamLimits

0x1685,	// (0x0003aae9) vkb2_top_cell_left_pane

0xe5b9,	// (0x00047a1d) vkb2_top_entry_pane_g1_ParamLimits

0xe5b9,	// (0x00047a1d) vkb2_top_entry_pane_g1

0xe5c7,	// (0x00047a2b) vkb2_top_entry_pane_t1_ParamLimits

0xe5c7,	// (0x00047a2b) vkb2_top_entry_pane_t1

0x65ad,	// (0x0003fa11) vkb2_top_entry_pane_t2_ParamLimits

0x65ad,	// (0x0003fa11) vkb2_top_entry_pane_t2

0x65df,	// (0x0003fa43) vkb2_top_entry_pane_t3_ParamLimits

0x65df,	// (0x0003fa43) vkb2_top_entry_pane_t3

0x0002,

0xfd76,	// (0x000491da) vkb2_top_entry_pane_t_ParamLimits

0xfd76,	// (0x000491da) vkb2_top_entry_pane_t

0xb159,	// (0x000445bd) vkb2_top_grid_right_pane_g1_ParamLimits

0xb159,	// (0x000445bd) vkb2_top_grid_right_pane_g1

0x16e8,	// (0x0003ab4c) vkb2_top_grid_right_pane_g2_ParamLimits

0x16e8,	// (0x0003ab4c) vkb2_top_grid_right_pane_g2

0x1700,	// (0x0003ab64) vkb2_top_grid_right_pane_g3_ParamLimits

0x1700,	// (0x0003ab64) vkb2_top_grid_right_pane_g3

0xb16f,	// (0x000445d3) vkb2_top_grid_right_pane_g4_ParamLimits

0xb16f,	// (0x000445d3) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7d,	// (0x000491e1) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7d,	// (0x000491e1) vkb2_top_grid_right_pane_g

0x172e,	// (0x0003ab92) vkb2_top_cell_left_pane_g1

0x1750,	// (0x0003abb4) vkb2_cell_keypad_pane_g1_ParamLimits

0x1750,	// (0x0003abb4) vkb2_cell_keypad_pane_g1

0x6603,	// (0x0003fa67) vkb2_cell_keypad_pane_t1_ParamLimits

0x6603,	// (0x0003fa67) vkb2_cell_keypad_pane_t1

0x175e,	// (0x0003abc2) vkb2_cell_bottom_grid_pane_ParamLimits

0x175e,	// (0x0003abc2) vkb2_cell_bottom_grid_pane

0x1797,	// (0x0003abfb) vkb2_cell_bottom_grid_pane_g1

0xd911,	// (0x00046d75) aid_call2_pane_cp02

0xd919,	// (0x00046d7d) aid_call_pane_cp02

0xd921,	// (0x00046d85) clock_digital_number_pane_cp10

0xd929,	// (0x00046d8d) clock_digital_number_pane_cp11

0xd931,	// (0x00046d95) clock_digital_number_pane_cp12

0xd939,	// (0x00046d9d) clock_digital_number_pane_cp13

0xd941,	// (0x00046da5) clock_digital_separator_pane_cp10

0xbd38,	// (0x0004519c) popup_clock_digital_analogue_window_cp2_g1

0xbd38,	// (0x0004519c) popup_clock_digital_analogue_window_cp2_g2

0xd949,	// (0x00046dad) popup_clock_digital_analogue_window_cp2_g3

0xbd38,	// (0x0004519c) popup_clock_digital_analogue_window_cp2_g4

0xd949,	// (0x00046dad) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd32,	// (0x00049196) popup_clock_digital_analogue_window_cp2_g

0xd951,	// (0x00046db5) popup_clock_digital_analogue_window_cp2_t1

0xd95f,	// (0x00046dc3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3d,	// (0x000491a1) popup_clock_digital_analogue_window_cp2_t

0x46b1,	// (0x0003db15) clock_digital_number_pane_cp10_g1

0x46b1,	// (0x0003db15) clock_digital_number_pane_cp10_g2

0x0001,

0xfb20,	// (0x00048f84) clock_digital_number_pane_cp10_g

0x46b1,	// (0x0003db15) clock_digital_separator_pane_cp10_g1

0x46b1,	// (0x0003db15) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb20,	// (0x00048f84) clock_digital_separator_pane_cp10_g

0xd80e,	// (0x00046c72) uniindi_top_pane_g3

0x603b,	// (0x0003f49f) uniindi_top_pane_g4

0x1566,	// (0x0003a9ca) vkb2_row_keypad_pane_ParamLimits

0x1566,	// (0x0003a9ca) vkb2_row_keypad_pane

0x17b7,	// (0x0003ac1b) vkb2_cell_t_keypad_pane_ParamLimits

0x17b7,	// (0x0003ac1b) vkb2_cell_t_keypad_pane

0x17c7,	// (0x0003ac2b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x17c7,	// (0x0003ac2b) vkb2_cell_t_keypad_pane_cp08

0x17da,	// (0x0003ac3e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x17da,	// (0x0003ac3e) vkb2_cell_t_keypad_pane_cp09

0x17ee,	// (0x0003ac52) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x17ee,	// (0x0003ac52) vkb2_cell_t_keypad_pane_cp01

0x17ff,	// (0x0003ac63) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x17ff,	// (0x0003ac63) vkb2_cell_t_keypad_pane_cp02

0x1810,	// (0x0003ac74) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1810,	// (0x0003ac74) vkb2_cell_t_keypad_pane_cp03

0x1821,	// (0x0003ac85) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1821,	// (0x0003ac85) vkb2_cell_t_keypad_pane_cp04

0x1832,	// (0x0003ac96) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1832,	// (0x0003ac96) vkb2_cell_t_keypad_pane_cp05

0x1843,	// (0x0003aca7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1843,	// (0x0003aca7) vkb2_cell_t_keypad_pane_cp06

0x1854,	// (0x0003acb8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1854,	// (0x0003acb8) vkb2_cell_t_keypad_pane_cp07

0x1865,	// (0x0003acc9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1865,	// (0x0003acc9) vkb2_cell_t_keypad_pane_cp10

0x0ed3,	// (0x0003a337) vkb2_cell_t_keypad_pane_g1

0x661a,	// (0x0003fa7e) vkb2_cell_t_keypad_pane_t1

0xdb1f,	// (0x00046f83) popup_grid_graphic2_window

0xe600,	// (0x00047a64) aid_size_cell_graphic2_ParamLimits

0xe600,	// (0x00047a64) aid_size_cell_graphic2

0xe63e,	// (0x00047aa2) bg_popup_window_pane_cp21_ParamLimits

0xe63e,	// (0x00047aa2) bg_popup_window_pane_cp21

0xe64c,	// (0x00047ab0) graphic2_pages_pane_ParamLimits

0xe64c,	// (0x00047ab0) graphic2_pages_pane

0xe6a2,	// (0x00047b06) grid_graphic2_control_pane_ParamLimits

0xe6a2,	// (0x00047b06) grid_graphic2_control_pane

0xe6ea,	// (0x00047b4e) grid_graphic2_pane_ParamLimits

0xe6ea,	// (0x00047b4e) grid_graphic2_pane

0xe771,	// (0x00047bd5) cell_graphic2_pane

0xdb1f,	// (0x00046f83) main_comp_mode_pane

0x589b,	// (0x0003ecff) list_ai3_gene_pane_ParamLimits

0xd5df,	// (0x00046a43) bg_popup_window_pane_cp19_ParamLimits

0x5c75,	// (0x0003f0d9) bg_touch_area_indi_pane_ParamLimits

0x5c75,	// (0x0003f0d9) bg_touch_area_indi_pane

0x5c8b,	// (0x0003f0ef) bg_touch_area_indi_pane_cp01_ParamLimits

0x5c8b,	// (0x0003f0ef) bg_touch_area_indi_pane_cp01

0x5ca1,	// (0x0003f105) bg_touch_area_indi_pane_cp02_ParamLimits

0x5ca1,	// (0x0003f105) bg_touch_area_indi_pane_cp02

0x5cb7,	// (0x0003f11b) bg_touch_area_indi_pane_cp03_ParamLimits

0x5cb7,	// (0x0003f11b) bg_touch_area_indi_pane_cp03

0x5cd1,	// (0x0003f135) popup_slider_window_g1_ParamLimits

0x5ced,	// (0x0003f151) popup_slider_window_g2_ParamLimits

0x5d09,	// (0x0003f16d) popup_slider_window_g3_ParamLimits

0xfcc7,	// (0x0004912b) popup_slider_window_g_ParamLimits

0x5d6f,	// (0x0003f1d3) popup_slider_window_t1_ParamLimits

0x5de3,	// (0x0003f247) small_volume_slider_vertical_pane_ParamLimits

0xe771,	// (0x00047bd5) cell_graphic2_pane_ParamLimits

0xe7cc,	// (0x00047c30) bg_button_pane_cp10_ParamLimits

0xe7cc,	// (0x00047c30) bg_button_pane_cp10

0xe7df,	// (0x00047c43) bg_button_pane_cp11_ParamLimits

0xe7df,	// (0x00047c43) bg_button_pane_cp11

0xe7f2,	// (0x00047c56) graphic2_pages_pane_g1_ParamLimits

0xe7f2,	// (0x00047c56) graphic2_pages_pane_g1

0xe80d,	// (0x00047c71) graphic2_pages_pane_g2_ParamLimits

0xe80d,	// (0x00047c71) graphic2_pages_pane_g2

0x0001,

0xfd8b,	// (0x000491ef) graphic2_pages_pane_g_ParamLimits

0xfd8b,	// (0x000491ef) graphic2_pages_pane_g

0xe825,	// (0x00047c89) graphic2_pages_pane_t1_ParamLimits

0xe825,	// (0x00047c89) graphic2_pages_pane_t1

0xe83d,	// (0x00047ca1) cell_graphic2_control_pane_ParamLimits

0xe83d,	// (0x00047ca1) cell_graphic2_control_pane

0xe86f,	// (0x00047cd3) cell_graphic2_pane_g1_ParamLimits

0xe86f,	// (0x00047cd3) cell_graphic2_pane_g1

0xdae5,	// (0x00046f49) cell_graphic2_pane_g2_ParamLimits

0xdae5,	// (0x00046f49) cell_graphic2_pane_g2

0xe1f4,	// (0x00047658) cell_graphic2_pane_g3_ParamLimits

0xe1f4,	// (0x00047658) cell_graphic2_pane_g3

0xdaf2,	// (0x00046f56) cell_graphic2_pane_g4_ParamLimits

0xdaf2,	// (0x00046f56) cell_graphic2_pane_g4

0xe87c,	// (0x00047ce0) cell_graphic2_pane_g5_ParamLimits

0xe87c,	// (0x00047ce0) cell_graphic2_pane_g5

0x0004,

0xfd90,	// (0x000491f4) cell_graphic2_pane_g_ParamLimits

0xfd90,	// (0x000491f4) cell_graphic2_pane_g

0xe899,	// (0x00047cfd) cell_graphic2_pane_t1_ParamLimits

0xe899,	// (0x00047cfd) cell_graphic2_pane_t1

0x2d7f,	// (0x0003c1e3) grid_highlight_pane_cp11_ParamLimits

0x2d7f,	// (0x0003c1e3) grid_highlight_pane_cp11

0xb65a,	// (0x00044abe) bg_button_pane_cp05

0xe8e3,	// (0x00047d47) cell_graphic2_control_pane_g1

0x46b1,	// (0x0003db15) bg_touch_area_indi_pane_g1

0x68f3,	// (0x0003fd57) aid_cmod_rocker_key_size

0x68fd,	// (0x0003fd61) aid_cmode_itu_key_size

0x6907,	// (0x0003fd6b) main_cmode_video_pane

0x6911,	// (0x0003fd75) main_comp_mode_itu_pane

0x691d,	// (0x0003fd81) main_comp_mode_rocker_pane

0x6929,	// (0x0003fd8d) cell_cmode_rocker_pane_ParamLimits

0x6929,	// (0x0003fd8d) cell_cmode_rocker_pane

0x693b,	// (0x0003fd9f) cell_cmode_itu_pane_ParamLimits

0x693b,	// (0x0003fd9f) cell_cmode_itu_pane

0xb8e6,	// (0x00044d4a) bg_button_pane_cp06_ParamLimits

0xb8e6,	// (0x00044d4a) bg_button_pane_cp06

0x4921,	// (0x0003dd85) cell_cmode_rocker_pane_g1_ParamLimits

0x4921,	// (0x0003dd85) cell_cmode_rocker_pane_g1

0x5e87,	// (0x0003f2eb) cell_cmode_rocker_pane_g2_ParamLimits

0x5e87,	// (0x0003f2eb) cell_cmode_rocker_pane_g2

0x0001,

0xfda0,	// (0x00049204) cell_cmode_rocker_pane_g_ParamLimits

0xfda0,	// (0x00049204) cell_cmode_rocker_pane_g

0xb4c0,	// (0x00044924) bg_button_pane_cp07

0x6950,	// (0x0003fdb4) cell_cmode_itu_pane_g1

0x6959,	// (0x0003fdbd) cell_cmode_itu_pane_t1

0x6967,	// (0x0003fdcb) cell_cmode_itu_pane_t2

0x0001,

0xfda5,	// (0x00049209) cell_cmode_itu_pane_t

0x60ad,	// (0x0003f511) aid_touch_ctrl_left

0x60b5,	// (0x0003f519) aid_touch_ctrl_right

0xb4c0,	// (0x00044924) compa_mode_pane

0xe909,	// (0x00047d6d) aid_cmod_rocker_key_size_cp

0xe913,	// (0x00047d77) aid_cmode_itu_key_size_cp

0x6989,	// (0x0003fded) compa_mode_pane_g1

0x6991,	// (0x0003fdf5) compa_mode_pane_g2

0x6999,	// (0x0003fdfd) compa_mode_pane_g3

0x0002,

0xfdaa,	// (0x0004920e) compa_mode_pane_g

0xe91d,	// (0x00047d81) main_comp_mode_itu_pane_cp

0xe925,	// (0x00047d89) main_comp_mode_rocker_pane_cp

0xe92d,	// (0x00047d91) cell_cmode_itu_pane_cp_ParamLimits

0xe92d,	// (0x00047d91) cell_cmode_itu_pane_cp

0xe942,	// (0x00047da6) cell_cmode_rocker_pane_cp_ParamLimits

0xe942,	// (0x00047da6) cell_cmode_rocker_pane_cp

0xb8e6,	// (0x00044d4a) bg_button_pane_cp06_cp_ParamLimits

0xb8e6,	// (0x00044d4a) bg_button_pane_cp06_cp

0x4921,	// (0x0003dd85) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4921,	// (0x0003dd85) cell_cmode_rocker_pane_g1_cp

0x46b1,	// (0x0003db15) cell_cmode_rocker_pane_g2_cp

0xb4c0,	// (0x00044924) bg_button_pane_cp07_cp

0xe954,	// (0x00047db8) cell_cmode_itu_pane_g1_cp

0xe95d,	// (0x00047dc1) cell_cmode_itu_pane_t1_cp

0xe95d,	// (0x00047dc1) cell_cmode_itu_pane_t2_cp

0xc96d,	// (0x00045dd1) settings_code_pane_cp2

0xb530,	// (0x00044994) bg_popup_window_pane_cp3_ParamLimits

0xb773,	// (0x00044bd7) heading_pane_cp3_ParamLimits

0xb782,	// (0x00044be6) listscroll_popup_graphic_pane_ParamLimits

0x0c7c,	// (0x0003a0e0) fep_hwr_aid_pane_ParamLimits

0x122d,	// (0x0003a691) aid_touch_sctrl_top_ParamLimits

0x1248,	// (0x0003a6ac) sctrl_sk_top_pane_g1_ParamLimits

0x0ed3,	// (0x0003a337) sctrl_sk_top_pane_g2_ParamLimits

0xfce0,	// (0x00049144) sctrl_sk_top_pane_g_ParamLimits

0x1255,	// (0x0003a6b9) sctrl_sk_top_pane_t1_ParamLimits

0x122d,	// (0x0003a691) aid_touch_sctrl_bottom_ParamLimits

0x1255,	// (0x0003a6b9) sctrl_sk_bottom_pane_t1_ParamLimits

0xd7da,	// (0x00046c3e) aid_area_touch_clock

0xaf98,	// (0x000443fc) aid_vkb2_area_top_pane_cell_ParamLimits

0xaf98,	// (0x000443fc) aid_vkb2_area_top_pane_cell

0xb047,	// (0x000444ab) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb047,	// (0x000444ab) aid_vkb2_area_bottom_pane_cell

0x6565,	// (0x0003f9c9) popup_char_count_window

0x69ef,	// (0x0003fe53) popup_char_count_window_g1

0x69f8,	// (0x0003fe5c) popup_char_count_window_g2

0x6a01,	// (0x0003fe65) popup_char_count_window_g3

0x0002,

0xfdb1,	// (0x00049215) popup_char_count_window_g

0x6a0a,	// (0x0003fe6e) popup_char_count_window_t1

0x12fc,	// (0x0003a760) popup_fep_char_preview_window_ParamLimits

0x12fc,	// (0x0003a760) popup_fep_char_preview_window

0xafb8,	// (0x0004441c) vkb2_top_candi_pane_ParamLimits

0xafb8,	// (0x0004441c) vkb2_top_candi_pane

0xe96b,	// (0x00047dcf) cell_vkb2_top_candi_pane_ParamLimits

0xe96b,	// (0x00047dcf) cell_vkb2_top_candi_pane

0x187a,	// (0x0003acde) bg_popup_fep_char_preview_window_ParamLimits

0x187a,	// (0x0003acde) bg_popup_fep_char_preview_window

0x1888,	// (0x0003acec) popup_fep_char_preview_window_t1_ParamLimits

0x1888,	// (0x0003acec) popup_fep_char_preview_window_t1

0x6a62,	// (0x0003fec6) bg_popup_fep_char_preview_window_g1

0x6a6a,	// (0x0003fece) bg_popup_fep_char_preview_window_g2

0x6a72,	// (0x0003fed6) bg_popup_fep_char_preview_window_g3

0x6a7a,	// (0x0003fede) bg_popup_fep_char_preview_window_g4

0x6a82,	// (0x0003fee6) bg_popup_fep_char_preview_window_g5

0x6a8a,	// (0x0003feee) bg_popup_fep_char_preview_window_g6

0x6a92,	// (0x0003fef6) bg_popup_fep_char_preview_window_g7

0x6a9a,	// (0x0003fefe) bg_popup_fep_char_preview_window_g8

0x6aa2,	// (0x0003ff06) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb8,	// (0x0004921c) bg_popup_fep_char_preview_window_g

0x0ed3,	// (0x0003a337) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0ed3,	// (0x0003a337) cell_vkb2_top_candi_pane_g1

0x0ee1,	// (0x0003a345) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0ee1,	// (0x0003a345) cell_vkb2_top_candi_pane_g2

0x4c38,	// (0x0003e09c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4c38,	// (0x0003e09c) cell_vkb2_top_candi_pane_g3

0x18ca,	// (0x0003ad2e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x18ca,	// (0x0003ad2e) cell_vkb2_top_candi_pane_g4

0x4e22,	// (0x0003e286) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4e22,	// (0x0003e286) cell_vkb2_top_candi_pane_g5

0x18eb,	// (0x0003ad4f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x18eb,	// (0x0003ad4f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcd,	// (0x00049231) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcd,	// (0x00049231) cell_vkb2_top_candi_pane_g

0x18f9,	// (0x0003ad5d) cell_vkb2_top_candi_pane_t1

0xaa12,	// (0x00043e76) aid_size_touch_slider_mark_ParamLimits

0xaa12,	// (0x00043e76) aid_size_touch_slider_mark

0xe688,	// (0x00047aec) grid_graphic2_catg_pane_ParamLimits

0xe688,	// (0x00047aec) grid_graphic2_catg_pane

0xe744,	// (0x00047ba8) popup_grid_graphic2_window_t1_ParamLimits

0xe744,	// (0x00047ba8) popup_grid_graphic2_window_t1

0xe75a,	// (0x00047bbe) popup_grid_graphic2_window_t2_ParamLimits

0xe75a,	// (0x00047bbe) popup_grid_graphic2_window_t2

0x0001,

0xfd86,	// (0x000491ea) popup_grid_graphic2_window_t_ParamLimits

0xfd86,	// (0x000491ea) popup_grid_graphic2_window_t

0xb65a,	// (0x00044abe) bg_button_pane_cp05_ParamLimits

0xe8e3,	// (0x00047d47) cell_graphic2_control_pane_g1_ParamLimits

0xe9cb,	// (0x00047e2f) cell_graphic2_catg_pane_ParamLimits

0xe9cb,	// (0x00047e2f) cell_graphic2_catg_pane

0xb4c0,	// (0x00044924) bg_button_pane_cp12

0xe9dd,	// (0x00047e41) cell_graphic2_catg_pane_g1

0x5fc1,	// (0x0003f425) cell_tb_ext_pane_t1_ParamLimits

0x16a5,	// (0x0003ab09) vkb2_top_cell_right_narrow_pane_ParamLimits

0x16a5,	// (0x0003ab09) vkb2_top_cell_right_narrow_pane

0x16bd,	// (0x0003ab21) vkb2_top_cell_right_wide_pane_ParamLimits

0x16bd,	// (0x0003ab21) vkb2_top_cell_right_wide_pane

0x0c6e,	// (0x0003a0d2) bg_vkb2_func_pane_ParamLimits

0x0c6e,	// (0x0003a0d2) bg_vkb2_func_pane

0x172e,	// (0x0003ab92) vkb2_top_cell_left_pane_g1_ParamLimits

0x0c6e,	// (0x0003a0d2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0c6e,	// (0x0003a0d2) bg_vkb2_fuc_pane_cp03

0x1797,	// (0x0003abfb) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2085,	// (0x0003b4e9) bg_vkb2_func_pane_g1

0x208d,	// (0x0003b4f1) bg_vkb2_func_pane_g2

0x209d,	// (0x0003b501) bg_vkb2_func_pane_g3

0x2095,	// (0x0003b4f9) bg_vkb2_func_pane_g4

0x20a5,	// (0x0003b509) bg_vkb2_func_pane_g5

0x20ad,	// (0x0003b511) bg_vkb2_func_pane_g6

0x20b5,	// (0x0003b519) bg_vkb2_func_pane_g7

0x20bd,	// (0x0003b521) bg_vkb2_func_pane_g8

0x207d,	// (0x0003b4e1) bg_vkb2_func_pane_g9

0x0008,

0xfdda,	// (0x0004923e) bg_vkb2_func_pane_g

0x0c6e,	// (0x0003a0d2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0c6e,	// (0x0003a0d2) bg_vkb2_fuc_pane_cp01

0x172e,	// (0x0003ab92) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x172e,	// (0x0003ab92) vkb2_top_cell_right_wide_pane_g1

0x0c6e,	// (0x0003a0d2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0c6e,	// (0x0003a0d2) bg_vkb2_fuc_pane_cp02

0x1918,	// (0x0003ad7c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1918,	// (0x0003ad7c) vkb2_top_cell_right_narrow_pane_g1

0xd521,	// (0x00046985) aid_touch_area_decrease_ParamLimits

0xd521,	// (0x00046985) aid_touch_area_decrease

0xd55b,	// (0x000469bf) aid_touch_area_increase_ParamLimits

0xd55b,	// (0x000469bf) aid_touch_area_increase

0xd583,	// (0x000469e7) aid_touch_area_mute_ParamLimits

0xd583,	// (0x000469e7) aid_touch_area_mute

0xd5ab,	// (0x00046a0f) aid_touch_area_slider_ParamLimits

0xd5ab,	// (0x00046a0f) aid_touch_area_slider

0xd5eb,	// (0x00046a4f) popup_slider_window_g4_ParamLimits

0xd5eb,	// (0x00046a4f) popup_slider_window_g4

0xd605,	// (0x00046a69) popup_slider_window_g5_ParamLimits

0xd605,	// (0x00046a69) popup_slider_window_g5

0xd62b,	// (0x00046a8f) popup_slider_window_g6_ParamLimits

0xd62b,	// (0x00046a8f) popup_slider_window_g6

0x5d9d,	// (0x0003f201) popup_slider_window_t2_ParamLimits

0x5d9d,	// (0x0003f201) popup_slider_window_t2

0x0001,

0xfcd4,	// (0x00049138) popup_slider_window_t_ParamLimits

0xfcd4,	// (0x00049138) popup_slider_window_t

0xd641,	// (0x00046aa5) slider_pane_ParamLimits

0xd641,	// (0x00046aa5) slider_pane

0x6ac5,	// (0x0003ff29) slider_pane_g1_ParamLimits

0x6ac5,	// (0x0003ff29) slider_pane_g1

0x6ad9,	// (0x0003ff3d) slider_pane_g2_ParamLimits

0x6ad9,	// (0x0003ff3d) slider_pane_g2

0x6aef,	// (0x0003ff53) slider_pane_g3_ParamLimits

0x6aef,	// (0x0003ff53) slider_pane_g3

0x0003,

0xfded,	// (0x00049251) slider_pane_g_ParamLimits

0xfded,	// (0x00049251) slider_pane_g

0xa21e,	// (0x00043682) popup_tb_float_extension_window_ParamLimits

0xa21e,	// (0x00043682) popup_tb_float_extension_window

0x6b1b,	// (0x0003ff7f) aid_size_cell_tb_float_ext

0xb4c0,	// (0x00044924) bg_popup_sub_window_cp28

0xe9e6,	// (0x00047e4a) grid_tb_float_ext_pane

0xe9f0,	// (0x00047e54) cell_tb_float_ext_pane_ParamLimits

0xe9f0,	// (0x00047e54) cell_tb_float_ext_pane

0xea0a,	// (0x00047e6e) cell_tb_float_ext_pane_g1

0xea13,	// (0x00047e77) grid_highlight_pane_cp12

0xab5a,	// (0x00043fbe) cell_last_hwr_side_pane_ParamLimits

0xab5a,	// (0x00043fbe) cell_last_hwr_side_pane

0x46b1,	// (0x0003db15) cell_last_hwr_side_pane_g1

0x6b5d,	// (0x0003ffc1) cell_last_hwr_side_pane_g2

0x0001,

0xfdf6,	// (0x0004925a) cell_last_hwr_side_pane_g

0xb124,	// (0x00044588) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb124,	// (0x00044588) vkb2_area_bottom_space_btn_pane

0x0ed3,	// (0x0003a337) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x661a,	// (0x0003fa7e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x18f9,	// (0x0003ad5d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1938,	// (0x0003ad9c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1938,	// (0x0003ad9c) vkb2_area_bottom_space_btn_pane_g1

0x1972,	// (0x0003add6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1972,	// (0x0003add6) vkb2_area_bottom_space_btn_pane_g2

0x19a8,	// (0x0003ae0c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x19a8,	// (0x0003ae0c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfb,	// (0x0004925f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfb,	// (0x0004925f) vkb2_area_bottom_space_btn_pane_g

0x0d31,	// (0x0003a195) cel_fep_hwr_func_pane_ParamLimits

0x0d31,	// (0x0003a195) cel_fep_hwr_func_pane

0xab2f,	// (0x00043f93) cell_hwr_side_button_pane_ParamLimits

0xab2f,	// (0x00043f93) cell_hwr_side_button_pane

0xd7da,	// (0x00046c3e) aid_area_touch_clock_ParamLimits

0xb65a,	// (0x00044abe) bg_uniindi_top_pane_ParamLimits

0xd7ec,	// (0x00046c50) uniindi_top_pane_g1_ParamLimits

0xd802,	// (0x00046c66) uniindi_top_pane_g2_ParamLimits

0xd80e,	// (0x00046c72) uniindi_top_pane_g3_ParamLimits

0x603b,	// (0x0003f49f) uniindi_top_pane_g4_ParamLimits

0xfd0c,	// (0x00049170) uniindi_top_pane_g_ParamLimits

0xd81f,	// (0x00046c83) uniindi_top_pane_t1_ParamLimits

0xb65a,	// (0x00044abe) bg_vkb2_func_pane_cp01_ParamLimits

0xb65a,	// (0x00044abe) bg_vkb2_func_pane_cp01

0x6b66,	// (0x0003ffca) cel_fep_hwr_func_pane_g1_ParamLimits

0x6b66,	// (0x0003ffca) cel_fep_hwr_func_pane_g1

0xb65a,	// (0x00044abe) bg_vkb2_func_pane_cp02_ParamLimits

0xb65a,	// (0x00044abe) bg_vkb2_func_pane_cp02

0x6b66,	// (0x0003ffca) cell_hwr_side_button_pane_g1_ParamLimits

0x6b66,	// (0x0003ffca) cell_hwr_side_button_pane_g1

0x1f01,	// (0x0003b365) status_pane_g4_ParamLimits

0x1f01,	// (0x0003b365) status_pane_g4

0x1f1b,	// (0x0003b37f) status_pane_t1

0x43ec,	// (0x0003d850) form2_midp_gauge_slider_cont_pane

0x43f4,	// (0x0003d858) form2_midp_gauge_slider_pane_t1_ParamLimits

0xccec,	// (0x00046150) form2_midp_gauge_slider_pane_t2_ParamLimits

0xccfe,	// (0x00046162) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad3,	// (0x00048f37) form2_midp_gauge_slider_pane_t_ParamLimits

0x442a,	// (0x0003d88e) form2_midp_slider_pane_ParamLimits

0x12c4,	// (0x0003a728) aid_size_cell_func_vkb2_ParamLimits

0x12c4,	// (0x0003a728) aid_size_cell_func_vkb2

0x6b07,	// (0x0003ff6b) slider_pane_g4_ParamLimits

0x6b07,	// (0x0003ff6b) slider_pane_g4

0xb18d,	// (0x000445f1) form2_midp_gauge_slider_pane_t2_cp01

0xb19b,	// (0x000445ff) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb19b,	// (0x000445ff) form2_midp_gauge_slider_pane_t3_cp01

0x1a1d,	// (0x0003ae81) form2_midp_slider_pane_cp01

0xb4c0,	// (0x00044924) navi_smil_pane

0x6b9f,	// (0x00040003) navi_smil_pane_g1

0x6ba7,	// (0x0004000b) navi_smil_pane_t1

0x6b74,	// (0x0003ffd8) form2_midp_slider_pane_g1

0x6b7d,	// (0x0003ffe1) form2_midp_slider_pane_g2

0x6b85,	// (0x0003ffe9) form2_midp_slider_pane_g3

0x6b74,	// (0x0003ffd8) form2_midp_slider_pane_g4

0xea1c,	// (0x00047e80) form2_midp_slider_pane_g5

0x0004,

0xfe04,	// (0x00049268) form2_midp_slider_pane_g

0x19e2,	// (0x0003ae46) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x19e2,	// (0x0003ae46) vkb2_area_bottom_space_btn_pane_g4

0xa456,	// (0x000438ba) lc0_navi_pane_ParamLimits

0xa456,	// (0x000438ba) lc0_navi_pane

0xa4c0,	// (0x00043924) lc0_stat_indi_pane_ParamLimits

0xa4c0,	// (0x00043924) lc0_stat_indi_pane

0xa4d5,	// (0x00043939) ls0_title_pane_ParamLimits

0xa4d5,	// (0x00043939) ls0_title_pane

0xb8e6,	// (0x00044d4a) bg_popup_sub_pane_cp14_ParamLimits

0xd7c1,	// (0x00046c25) list_uniindi_pane_ParamLimits

0xd7cd,	// (0x00046c31) uniindi_top_pane_ParamLimits

0x6085,	// (0x0003f4e9) list_single_uniindi_pane_g1_ParamLimits

0x6098,	// (0x0003f4fc) list_single_uniindi_pane_t1_ParamLimits

0xb1b8,	// (0x0004461c) lc0_stat_clock_pane_ParamLimits

0xb1b8,	// (0x0004461c) lc0_stat_clock_pane

0xea27,	// (0x00047e8b) lc0_stat_indi_pane_g1_ParamLimits

0xea27,	// (0x00047e8b) lc0_stat_indi_pane_g1

0xea34,	// (0x00047e98) lc0_stat_indi_pane_g2_ParamLimits

0xea34,	// (0x00047e98) lc0_stat_indi_pane_g2

0x0001,

0xfe0f,	// (0x00049273) lc0_stat_indi_pane_g_ParamLimits

0xfe0f,	// (0x00049273) lc0_stat_indi_pane_g

0xb1c8,	// (0x0004462c) lc0_uni_indicator_pane_ParamLimits

0xb1c8,	// (0x0004462c) lc0_uni_indicator_pane

0xea41,	// (0x00047ea5) ls0_title_pane_g1_ParamLimits

0xea41,	// (0x00047ea5) ls0_title_pane_g1

0xea55,	// (0x00047eb9) ls0_title_pane_t1_ParamLimits

0xea55,	// (0x00047eb9) ls0_title_pane_t1

0xb1d8,	// (0x0004463c) lc0_uni_indicator_pane_g1_ParamLimits

0xb1d8,	// (0x0004463c) lc0_uni_indicator_pane_g1

0x6c19,	// (0x0004007d) lc0_stat_clock_pane_t1

0xdb1f,	// (0x00046f83) main_ai5_pane

0x6c27,	// (0x0004008b) ai5_sk_pane_ParamLimits

0x6c27,	// (0x0004008b) ai5_sk_pane

0xea83,	// (0x00047ee7) cell_ai5_widget_pane_ParamLimits

0xea83,	// (0x00047ee7) cell_ai5_widget_pane

0x6cf4,	// (0x00040158) aid_size_cell_widget_grid

0x6d02,	// (0x00040166) bg_ai5_widget_pane_ParamLimits

0x6d02,	// (0x00040166) bg_ai5_widget_pane

0x6d7e,	// (0x000401e2) cell_ai5_widget_pane_g2

0x6d92,	// (0x000401f6) cell_ai5_widget_pane_g3

0x6dac,	// (0x00040210) cell_ai5_widget_pane_g4

0x6dbc,	// (0x00040220) cell_ai5_widget_pane_g5

0x6dcc,	// (0x00040230) cell_ai5_widget_pane_g6

0x6dd8,	// (0x0004023c) cell_ai5_widget_pane_g7

0x6e44,	// (0x000402a8) cell_ai5_widget_pane_t1_ParamLimits

0x6e44,	// (0x000402a8) cell_ai5_widget_pane_t1

0x6e61,	// (0x000402c5) cell_ai5_widget_pane_t2_ParamLimits

0x6e61,	// (0x000402c5) cell_ai5_widget_pane_t2

0x6e79,	// (0x000402dd) cell_ai5_widget_pane_t3_ParamLimits

0x6e79,	// (0x000402dd) cell_ai5_widget_pane_t3

0x6e91,	// (0x000402f5) cell_ai5_widget_pane_t4_ParamLimits

0x6e91,	// (0x000402f5) cell_ai5_widget_pane_t4

0xeaef,	// (0x00047f53) cell_ai5_widget_pane_t5_ParamLimits

0xeaef,	// (0x00047f53) cell_ai5_widget_pane_t5

0x6ed6,	// (0x0004033a) cell_ai5_widget_pane_t6_ParamLimits

0x6ed6,	// (0x0004033a) cell_ai5_widget_pane_t6

0x6ee8,	// (0x0004034c) cell_ai5_widget_pane_t7_ParamLimits

0x6ee8,	// (0x0004034c) cell_ai5_widget_pane_t7

0x6f07,	// (0x0004036b) cell_ai5_widget_pane_t8_ParamLimits

0x6f07,	// (0x0004036b) cell_ai5_widget_pane_t8

0x000b,

0xfe2f,	// (0x00049293) cell_ai5_widget_pane_t_ParamLimits

0xfe2f,	// (0x00049293) cell_ai5_widget_pane_t

0x6f8b,	// (0x000403ef) grid_ai5_widget_pane

0xb8e6,	// (0x00044d4a) highlight_cell_ai5_widget_pane_ParamLimits

0xb8e6,	// (0x00044d4a) highlight_cell_ai5_widget_pane

0xeb0f,	// (0x00047f73) ai5_sk_left_pane

0xeb19,	// (0x00047f7d) ai5_sk_middle_pane

0xeb23,	// (0x00047f87) ai5_sk_right_pane

0x6fb7,	// (0x0004041b) bg_ai5_widget_pane_g1_ParamLimits

0x6fb7,	// (0x0004041b) bg_ai5_widget_pane_g1

0x6fc3,	// (0x00040427) bg_ai5_widget_pane_g2_ParamLimits

0x6fc3,	// (0x00040427) bg_ai5_widget_pane_g2

0x6fcf,	// (0x00040433) bg_ai5_widget_pane_g3_ParamLimits

0x6fcf,	// (0x00040433) bg_ai5_widget_pane_g3

0x6fdb,	// (0x0004043f) bg_ai5_widget_pane_g4_ParamLimits

0x6fdb,	// (0x0004043f) bg_ai5_widget_pane_g4

0x6fe7,	// (0x0004044b) bg_ai5_widget_pane_g5_ParamLimits

0x6fe7,	// (0x0004044b) bg_ai5_widget_pane_g5

0x6ff3,	// (0x00040457) bg_ai5_widget_pane_g6_ParamLimits

0x6ff3,	// (0x00040457) bg_ai5_widget_pane_g6

0x6fff,	// (0x00040463) bg_ai5_widget_pane_g7_ParamLimits

0x6fff,	// (0x00040463) bg_ai5_widget_pane_g7

0x700b,	// (0x0004046f) bg_ai5_widget_pane_g8_ParamLimits

0x700b,	// (0x0004046f) bg_ai5_widget_pane_g8

0x7017,	// (0x0004047b) bg_ai5_widget_pane_g9_ParamLimits

0x7017,	// (0x0004047b) bg_ai5_widget_pane_g9

0x0008,

0xfe48,	// (0x000492ac) bg_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x000492ac) bg_ai5_widget_pane_g

0x7049,	// (0x000404ad) cell_shortcut_ai5_widget_pane_ParamLimits

0x7049,	// (0x000404ad) cell_shortcut_ai5_widget_pane

0xc1a2,	// (0x00045606) bg_cell_shortcut_ai5_widget_pane

0x705a,	// (0x000404be) cell_grid_ai5_widget_pane_g1

0xc1a2,	// (0x00045606) highlight_cell_shortcut_ai5_widget_pane

0x2085,	// (0x0003b4e9) ai5_sk_left_pane_g1

0x7063,	// (0x000404c7) ai5_sk_left_pane_g2

0x706b,	// (0x000404cf) ai5_sk_left_pane_g3

0x7073,	// (0x000404d7) ai5_sk_left_pane_g4

0x0003,

0xfe5b,	// (0x000492bf) ai5_sk_left_pane_g

0x707b,	// (0x000404df) ai5_sk_left_pane_t1

0x208d,	// (0x0003b4f1) ai5_sk_right_pane_g1

0x7089,	// (0x000404ed) ai5_sk_right_pane_g2

0x7091,	// (0x000404f5) ai5_sk_right_pane_g3

0x7099,	// (0x000404fd) ai5_sk_right_pane_g4

0x0003,

0xfe64,	// (0x000492c8) ai5_sk_right_pane_g

0x70a1,	// (0x00040505) ai5_sk_right_pane_t1

0x208d,	// (0x0003b4f1) ai5_sk_middle_pane_g1

0x2085,	// (0x0003b4e9) ai5_sk_middle_pane_g2

0x20a5,	// (0x0003b509) ai5_sk_middle_pane_g3

0x7091,	// (0x000404f5) ai5_sk_middle_pane_g4

0x706b,	// (0x000404cf) ai5_sk_middle_pane_g5

0x70af,	// (0x00040513) ai5_sk_middle_pane_g6

0xeb2d,	// (0x00047f91) ai5_sk_middle_pane_g7

0x0006,

0xfe6d,	// (0x000492d1) ai5_sk_middle_pane_g

0xa342,	// (0x000437a6) aid_touch_area_size_lc0_ParamLimits

0xa342,	// (0x000437a6) aid_touch_area_size_lc0

0x0f02,	// (0x0003a366) cell_hwr_candidate_pane_t1_ParamLimits

0x03af,	// (0x00039813) aid_touch_navi_pane

0xa5ce,	// (0x00043a32) status_dt_navi_pane_ParamLimits

0xa5ce,	// (0x00043a32) status_dt_navi_pane

0xa5e6,	// (0x00043a4a) status_dt_sta_pane_ParamLimits

0xa5e6,	// (0x00043a4a) status_dt_sta_pane

0xeb35,	// (0x00047f99) dt_sta_controll_pane

0xeb42,	// (0x00047fa6) dt_sta_indi_pane

0xeb4f,	// (0x00047fb3) dt_sta_title_pane

0xb65a,	// (0x00044abe) bg_dt_sta_indi_pane_ParamLimits

0xb65a,	// (0x00044abe) bg_dt_sta_indi_pane

0xeb61,	// (0x00047fc5) dt_sta_battery_pane

0xeb69,	// (0x00047fcd) dt_sta_indi_pane_g1

0x7101,	// (0x00040565) dt_sta_indi_pane_g2

0x710a,	// (0x0004056e) dt_sta_indi_pane_g3

0x0002,

0xfe7c,	// (0x000492e0) dt_sta_indi_pane_g

0x7113,	// (0x00040577) dt_sta_signal_pane

0xb8e6,	// (0x00044d4a) bg_dt_sta_title_pane_ParamLimits

0xb8e6,	// (0x00044d4a) bg_dt_sta_title_pane

0x2edf,	// (0x0003c343) dt_sta_title_pane_g1

0xeb72,	// (0x00047fd6) dt_sta_title_pane_t1_ParamLimits

0xeb72,	// (0x00047fd6) dt_sta_title_pane_t1

0xb4c0,	// (0x00044924) bg_dt_sta_control_pane

0xeb87,	// (0x00047feb) dt_sta_controll_pane_g1

0xeb90,	// (0x00047ff4) bg_dt_sta_title_pane_g1

0xeb99,	// (0x00047ffd) bg_dt_sta_title_pane_g2

0xeba2,	// (0x00048006) bg_dt_sta_title_pane_g3

0x0002,

0xfe83,	// (0x000492e7) bg_dt_sta_title_pane_g

0x46b1,	// (0x0003db15) bg_dt_sta_indi_pane_g1

0x7155,	// (0x000405b9) dt_sta_signal_pane_g1

0x715d,	// (0x000405c1) dt_sta_signal_pane_g2

0x0001,

0xfe8a,	// (0x000492ee) dt_sta_signal_pane_g

0x7165,	// (0x000405c9) dt_sta_battery_pane_g1

0x716e,	// (0x000405d2) dt_sta_battery_pane_t1

0x46b1,	// (0x0003db15) bg_dt_sta_control_pane_g1

0xbdbb,	// (0x0004521f) fep_china_uni_eep_pane

0xbdc3,	// (0x00045227) fep_china_uni_entry_pane_ParamLimits

0xbdd3,	// (0x00045237) popup_fep_china_uni_window_g1_ParamLimits

0xbde3,	// (0x00045247) popup_fep_china_uni_window_g2_ParamLimits

0xbde3,	// (0x00045247) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x00048b4d) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x00048b4d) popup_fep_china_uni_window_g

0x717d,	// (0x000405e1) fep_china_uni_eep_pane_g1

0x7185,	// (0x000405e9) fep_china_uni_eep_pane_t1

0x6b96,	// (0x0003fffa) aid_touch_area_size_smil_player

0x0505,	// (0x00039969) lc0_clock_pane

0x1f0f,	// (0x0003b373) status_pane_g5_ParamLimits

0x1f0f,	// (0x0003b373) status_pane_g5

0x9d7a,	// (0x000431de) popup_keymap_window

0x1ecd,	// (0x0003b331) status_icon_pane

0x6d92,	// (0x000401f6) cell_ai5_widget_pane_g3_ParamLimits

0x6dac,	// (0x00040210) cell_ai5_widget_pane_g4_ParamLimits

0x6dbc,	// (0x00040220) cell_ai5_widget_pane_g5_ParamLimits

0x6de4,	// (0x00040248) cell_ai5_widget_pane_g8_ParamLimits

0x6de4,	// (0x00040248) cell_ai5_widget_pane_g8

0x6df8,	// (0x0004025c) cell_ai5_widget_pane_g9_ParamLimits

0x6df8,	// (0x0004025c) cell_ai5_widget_pane_g9

0x6e0c,	// (0x00040270) cell_ai5_widget_pane_g10_ParamLimits

0x6e0c,	// (0x00040270) cell_ai5_widget_pane_g10

0x7194,	// (0x000405f8) status_icon_pane_g1

0xb4c0,	// (0x00044924) bg_popup_sub_pane_cp13

0x719c,	// (0x00040600) popup_keymap_window_t1

0x9a36,	// (0x00042e9a) control_pane_g6_ParamLimits

0x9a36,	// (0x00042e9a) control_pane_g6

0x9a43,	// (0x00042ea7) control_pane_g7_ParamLimits

0x9a43,	// (0x00042ea7) control_pane_g7

0x9a50,	// (0x00042eb4) control_pane_g8_ParamLimits

0x9a50,	// (0x00042eb4) control_pane_g8

0xeb35,	// (0x00047f99) dt_sta_controll_pane_ParamLimits

0xeb42,	// (0x00047fa6) dt_sta_indi_pane_ParamLimits

0xeb4f,	// (0x00047fb3) dt_sta_title_pane_ParamLimits

0xb831,	// (0x00044c95) aid_size_touch_scroll_bar_cale

0x880b,	// (0x00041c6f) popup_discreet_window_ParamLimits

0x880b,	// (0x00041c6f) popup_discreet_window

0x885d,	// (0x00041cc1) popup_sk_window

0x2723,	// (0x0003bb87) bg_popup_sub_pane_cp28_ParamLimits

0x2723,	// (0x0003bb87) bg_popup_sub_pane_cp28

0x71aa,	// (0x0004060e) popup_discreet_window_g1_ParamLimits

0x71aa,	// (0x0004060e) popup_discreet_window_g1

0xebab,	// (0x0004800f) popup_discreet_window_t1_ParamLimits

0xebab,	// (0x0004800f) popup_discreet_window_t1

0x71e8,	// (0x0004064c) popup_discreet_window_t2_ParamLimits

0x71e8,	// (0x0004064c) popup_discreet_window_t2

0x0002,

0xfe8f,	// (0x000492f3) popup_discreet_window_t_ParamLimits

0xfe8f,	// (0x000492f3) popup_discreet_window_t

0x1a54,	// (0x0003aeb8) popup_sk_window_g1

0x1a5e,	// (0x0003aec2) popup_sk_window_g2

0x0001,

0xfe96,	// (0x000492fa) popup_sk_window_g

0xb203,	// (0x00044667) popup_sk_window_t1

0xb211,	// (0x00044675) popup_sk_window_t1_copy1

0x6d7e,	// (0x000401e2) cell_ai5_widget_pane_g2_ParamLimits

0x6f19,	// (0x0004037d) cell_ai5_widget_pane_t9_ParamLimits

0x6f19,	// (0x0004037d) cell_ai5_widget_pane_t9

0xb4c0,	// (0x00044924) main_fep_fshwr2_pane

0xb21f,	// (0x00044683) aid_fshwr2_btn_pane

0xb233,	// (0x00044697) aid_fshwr2_syb_pane

0xb247,	// (0x000446ab) aid_fshwr2_txt_pane

0xb257,	// (0x000446bb) fshwr2_func_candi_pane

0xb277,	// (0x000446db) fshwr2_hwr_syb_pane

0xb299,	// (0x000446fd) fshwr2_icf_pane

0xdb1f,	// (0x00046f83) fshwr2_icf_bg_pane

0x1b26,	// (0x0003af8a) fshwr2_icf_pane_t1_ParamLimits

0x1b26,	// (0x0003af8a) fshwr2_icf_pane_t1

0xbd38,	// (0x0004519c) fshwr2_func_candi_pane_g1

0xebc9,	// (0x0004802d) fshwr2_func_candi_row_pane_ParamLimits

0xebc9,	// (0x0004802d) fshwr2_func_candi_row_pane

0xb2c9,	// (0x0004472d) cell_fshwr2_syb_pane_ParamLimits

0xb2c9,	// (0x0004472d) cell_fshwr2_syb_pane

0x1b62,	// (0x0003afc6) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1b62,	// (0x0003afc6) fshwr2_hwr_syb_pane_g1

0xdb1f,	// (0x00046f83) bg_popup_call_pane_cp01

0xb2ef,	// (0x00044753) fshwr2_func_candi_cell_pane_ParamLimits

0xb2ef,	// (0x00044753) fshwr2_func_candi_cell_pane

0x250c,	// (0x0003b970) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x250c,	// (0x0003b970) fshwr2_func_candi_cell_bg_pane

0xb33a,	// (0x0004479e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb33a,	// (0x0004479e) fshwr2_func_candi_cell_pane_g1

0xb371,	// (0x000447d5) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb371,	// (0x000447d5) fshwr2_func_candi_cell_pane_t1

0xdb1f,	// (0x00046f83) bg_button_pane_cp08

0xba28,	// (0x00044e8c) cell_fshwr2_syb_bg_pane

0xb38c,	// (0x000447f0) cell_fshwr2_syb_bg_pane_g1

0xb39f,	// (0x00044803) cell_fshwr2_syb_bg_pane_t1

0xb8e6,	// (0x00044d4a) main_tmo_pane

0xc717,	// (0x00045b7b) uni_indicator_pane_g1_ParamLimits

0xc72d,	// (0x00045b91) uni_indicator_pane_g2_ParamLimits

0xc743,	// (0x00045ba7) uni_indicator_pane_g3_ParamLimits

0x324c,	// (0x0003c6b0) uni_indicator_pane_g4_ParamLimits

0x324c,	// (0x0003c6b0) uni_indicator_pane_g4

0x3260,	// (0x0003c6c4) uni_indicator_pane_g5_ParamLimits

0x3260,	// (0x0003c6c4) uni_indicator_pane_g5

0x3260,	// (0x0003c6c4) uni_indicator_pane_g6_ParamLimits

0x3260,	// (0x0003c6c4) uni_indicator_pane_g6

0xf8e8,	// (0x00048d4c) uni_indicator_pane_g_ParamLimits

0xd503,	// (0x00046967) popup_tmo_note_window_ParamLimits

0xd503,	// (0x00046967) popup_tmo_note_window

0x12a6,	// (0x0003a70a) fshwr2_bg_pane

0xb362,	// (0x000447c6) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb362,	// (0x000447c6) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9b,	// (0x000492ff) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9b,	// (0x000492ff) fshwr2_func_candi_cell_pane_g

0x0ebb,	// (0x0003a31f) bg_popup_window_pane_cp01

0x1c18,	// (0x0003b07c) bg_popup_window_pane_g1_cp01

0x7261,	// (0x000406c5) bg_popup_window_pane_cp22_ParamLimits

0x7261,	// (0x000406c5) bg_popup_window_pane_cp22

0xebec,	// (0x00048050) listscroll_tmo_link_pane_ParamLimits

0xebec,	// (0x00048050) listscroll_tmo_link_pane

0x72af,	// (0x00040713) popup_tmo_note_window_g1_ParamLimits

0x72af,	// (0x00040713) popup_tmo_note_window_g1

0xec2c,	// (0x00048090) tmo_note_info_pane_ParamLimits

0xec2c,	// (0x00048090) tmo_note_info_pane

0xec46,	// (0x000480aa) list_tmo_note_info_pane_g1_ParamLimits

0xec46,	// (0x000480aa) list_tmo_note_info_pane_g1

0x72ed,	// (0x00040751) list_tmo_note_info_pane_g2_ParamLimits

0x72ed,	// (0x00040751) list_tmo_note_info_pane_g2

0x0001,

0xfea0,	// (0x00049304) list_tmo_note_info_pane_g_ParamLimits

0xfea0,	// (0x00049304) list_tmo_note_info_pane_g

0x7309,	// (0x0004076d) list_tmo_note_info_text_pane_ParamLimits

0x7309,	// (0x0004076d) list_tmo_note_info_text_pane

0x738a,	// (0x000407ee) list_tmo_link_pane

0x7397,	// (0x000407fb) scroll_pane_cp20

0x73a4,	// (0x00040808) list_single_tmo_link_pane_ParamLimits

0x73a4,	// (0x00040808) list_single_tmo_link_pane

0x73b4,	// (0x00040818) list_single_tmo_link_pane_t1

0x73c2,	// (0x00040826) list_tmo_note_info_text_pane_t1_ParamLimits

0x73c2,	// (0x00040826) list_tmo_note_info_text_pane_t1

0x93d0,	// (0x00042834) aid_size_touch_scroll_bar_cp01_ParamLimits

0x93d0,	// (0x00042834) aid_size_touch_scroll_bar_cp01

0x92d0,	// (0x00042734) aid_size_touch_slider_marker

0x884d,	// (0x00041cb1) popup_settings_window_ParamLimits

0x884d,	// (0x00041cb1) popup_settings_window

0xdd6b,	// (0x000471cf) popup_candi_list_indi_window

0x03af,	// (0x00039813) aid_touch_navi_pane_ParamLimits

0x1201,	// (0x0003a665) rs_clock_indi_pane

0x120a,	// (0x0003a66e) sctrl_sk_bottom_pane_ParamLimits

0x121b,	// (0x0003a67f) sctrl_sk_top_pane_ParamLimits

0xae58,	// (0x000442bc) popup_fep_tooltip_window

0x6cf4,	// (0x00040158) aid_size_cell_widget_grid_ParamLimits

0x6d69,	// (0x000401cd) cell_ai5_widget_pane_g1_ParamLimits

0x6d69,	// (0x000401cd) cell_ai5_widget_pane_g1

0x6dcc,	// (0x00040230) cell_ai5_widget_pane_g6_ParamLimits

0x6dd8,	// (0x0004023c) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe14,	// (0x00049278) cell_ai5_widget_pane_g_ParamLimits

0xfe14,	// (0x00049278) cell_ai5_widget_pane_g

0x6f48,	// (0x000403ac) cell_ai5_widget_pane_t10_ParamLimits

0x6f48,	// (0x000403ac) cell_ai5_widget_pane_t10

0x6f8b,	// (0x000403ef) grid_ai5_widget_pane_ParamLimits

0x7023,	// (0x00040487) cell_contacts_ai5_widget_pane_ParamLimits

0x7023,	// (0x00040487) cell_contacts_ai5_widget_pane

0x71fd,	// (0x00040661) popup_discreet_window_t3_ParamLimits

0x71fd,	// (0x00040661) popup_discreet_window_t3

0xb2b5,	// (0x00044719) popup_fshwr2_char_preview_window_ParamLimits

0xb2b5,	// (0x00044719) popup_fshwr2_char_preview_window

0xec5d,	// (0x000480c1) tmo_note_info_pane_t1

0xec72,	// (0x000480d6) tmo_note_info_pane_t2

0xec89,	// (0x000480ed) tmo_note_info_pane_t3

0x7366,	// (0x000407ca) tmo_note_info_pane_t4

0x7378,	// (0x000407dc) tmo_note_info_pane_t5

0x0004,

0xfea5,	// (0x00049309) tmo_note_info_pane_t

0x738a,	// (0x000407ee) list_tmo_link_pane_ParamLimits

0x7397,	// (0x000407fb) scroll_pane_cp20_ParamLimits

0xdb1f,	// (0x00046f83) bg_popup_fep_char_preview_window_cp01

0xec9e,	// (0x00048102) popup_fshwr2_char_preview_window_t1

0x73e9,	// (0x0004084d) popup_candi_list_indi_window_g1

0x73f2,	// (0x00040856) bg_cell_contacts_ai5_widget_pane

0x73fe,	// (0x00040862) cell_contacts_ai5_widget_pane_g1

0x4d77,	// (0x0003e1db) cell_contacts_ai5_widget_pane_g2

0x7413,	// (0x00040877) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb0,	// (0x00049314) cell_contacts_ai5_widget_pane_g

0x741f,	// (0x00040883) cell_contacts_ai5_widget_pane_t1

0xb8e6,	// (0x00044d4a) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7496,	// (0x000408fa) settings_container_pane

0xc1a2,	// (0x00045606) listscroll_set_pane_copy1

0x3d8d,	// (0x0003d1f1) scroll_pane_cp121_copy1

0x24c8,	// (0x0003b92c) set_content_pane_copy1

0xecac,	// (0x00048110) aid_height_set_list_copy1_ParamLimits

0xecac,	// (0x00048110) aid_height_set_list_copy1

0x3458,	// (0x0003c8bc) aid_size_parent_copy1_ParamLimits

0x3458,	// (0x0003c8bc) aid_size_parent_copy1

0xecb8,	// (0x0004811c) button_value_adjust_pane_cp6_copy1_ParamLimits

0xecb8,	// (0x0004811c) button_value_adjust_pane_cp6_copy1

0xba28,	// (0x00044e8c) list_highlight_pane_cp2_copy1_ParamLimits

0xba28,	// (0x00044e8c) list_highlight_pane_cp2_copy1

0xeccc,	// (0x00048130) list_set_pane_copy1_ParamLimits

0xeccc,	// (0x00048130) list_set_pane_copy1

0x7431,	// (0x00040895) main_pane_set_t1_copy1_ParamLimits

0x7431,	// (0x00040895) main_pane_set_t1_copy1

0x746b,	// (0x000408cf) main_pane_set_t2_copy1_ParamLimits

0x746b,	// (0x000408cf) main_pane_set_t2_copy1

0xed79,	// (0x000481dd) main_pane_set_t3_copy1

0xed87,	// (0x000481eb) main_pane_set_t4_copy1

0x748a,	// (0x000408ee) set_content_pane_g1_copy1_ParamLimits

0x748a,	// (0x000408ee) set_content_pane_g1_copy1

0xed95,	// (0x000481f9) setting_code_pane_copy1

0x7593,	// (0x000409f7) setting_slider_graphic_pane_copy1

0x7593,	// (0x000409f7) setting_slider_pane_copy1

0x759b,	// (0x000409ff) setting_text_pane_copy1

0x759b,	// (0x000409ff) setting_volume_pane_copy1

0xed95,	// (0x000481f9) settings_code_pane_cp2_copy1

0xed9d,	// (0x00048201) settings_code_pane_cp_copy1_ParamLimits

0xed9d,	// (0x00048201) settings_code_pane_cp_copy1

0xb3b5,	// (0x00044819) volume_set_pane_copy1

0xedb1,	// (0x00048215) volume_set_pane_g10_copy1

0xedb9,	// (0x0004821d) volume_set_pane_g1_copy1

0xedc1,	// (0x00048225) volume_set_pane_g2_copy1

0xedc9,	// (0x0004822d) volume_set_pane_g3_copy1

0xedd1,	// (0x00048235) volume_set_pane_g4_copy1

0xedd9,	// (0x0004823d) volume_set_pane_g5_copy1

0xede1,	// (0x00048245) volume_set_pane_g6_copy1

0xede9,	// (0x0004824d) volume_set_pane_g7_copy1

0xedf1,	// (0x00048255) volume_set_pane_g8_copy1

0xedf9,	// (0x0004825d) volume_set_pane_g9_copy1

0xb530,	// (0x00044994) bg_set_opt_pane_cp_copy1_ParamLimits

0xb530,	// (0x00044994) bg_set_opt_pane_cp_copy1

0xb3bd,	// (0x00044821) setting_slider_pane_t1_copy1_ParamLimits

0xb3bd,	// (0x00044821) setting_slider_pane_t1_copy1

0xb3dc,	// (0x00044840) setting_slider_pane_t2_copy1_ParamLimits

0xb3dc,	// (0x00044840) setting_slider_pane_t2_copy1

0xb3f6,	// (0x0004485a) setting_slider_pane_t3_copy1_ParamLimits

0xb3f6,	// (0x0004485a) setting_slider_pane_t3_copy1

0xb40e,	// (0x00044872) slider_set_pane_copy1_ParamLimits

0xb40e,	// (0x00044872) slider_set_pane_copy1

0xb93e,	// (0x00044da2) set_opt_bg_pane_g1_copy2

0xb946,	// (0x00044daa) set_opt_bg_pane_g2_copy2

0x7607,	// (0x00040a6b) set_opt_bg_pane_g3_copy2

0xb956,	// (0x00044dba) set_opt_bg_pane_g4_copy2

0xb95e,	// (0x00044dc2) set_opt_bg_pane_g5_copy2

0xb966,	// (0x00044dca) set_opt_bg_pane_g6_copy2

0xee01,	// (0x00048265) set_opt_bg_pane_g7_copy2

0x7619,	// (0x00040a7d) set_opt_bg_pane_g8_copy2

0x7623,	// (0x00040a87) set_opt_bg_pane_g9_copy2

0xb424,	// (0x00044888) aid_size_touch_slider_mark_copy1_ParamLimits

0xb424,	// (0x00044888) aid_size_touch_slider_mark_copy1

0xee09,	// (0x0004826d) slider_set_pane_g1_copy1

0x1ca4,	// (0x0003b108) slider_set_pane_g2_copy1

0xaa26,	// (0x00043e8a) slider_set_pane_g3_copy1_ParamLimits

0xaa26,	// (0x00043e8a) slider_set_pane_g3_copy1

0xaa3a,	// (0x00043e9e) slider_set_pane_g4_copy1_ParamLimits

0xaa3a,	// (0x00043e9e) slider_set_pane_g4_copy1

0xaa52,	// (0x00043eb6) slider_set_pane_g5_copy1_ParamLimits

0xaa52,	// (0x00043eb6) slider_set_pane_g5_copy1

0xaa26,	// (0x00043e8a) slider_set_pane_g6_copy1_ParamLimits

0xaa26,	// (0x00043e8a) slider_set_pane_g6_copy1

0xb438,	// (0x0004489c) slider_set_pane_g7_copy1_ParamLimits

0xb438,	// (0x0004489c) slider_set_pane_g7_copy1

0xb4d4,	// (0x00044938) bg_set_opt_pane_cp2_copy1

0xee12,	// (0x00048276) setting_slider_graphic_pane_g1_copy1

0xee1b,	// (0x0004827f) setting_slider_graphic_pane_t1_copy1

0xee2b,	// (0x0004828f) setting_slider_graphic_pane_t2_copy1

0xee3b,	// (0x0004829f) slider_set_pane_cp_copy1

0x766f,	// (0x00040ad3) input_focus_pane_cp1_copy1

0x7678,	// (0x00040adc) list_set_text_pane_copy1

0x7680,	// (0x00040ae4) setting_text_pane_g1_copy1

0xee4b,	// (0x000482af) set_text_pane_t1_copy1

0x766f,	// (0x00040ad3) input_focus_pane_cp2_copy1

0x7680,	// (0x00040ae4) setting_code_pane_g1_copy1

0x7689,	// (0x00040aed) setting_code_pane_t1_copy1

0x7697,	// (0x00040afb) list_set_graphic_pane_copy1

0xb4d4,	// (0x00044938) bg_set_opt_pane_cp4_copy1

0xbf13,	// (0x00045377) list_set_graphic_pane_g1_copy1_ParamLimits

0xbf13,	// (0x00045377) list_set_graphic_pane_g1_copy1

0x76ab,	// (0x00040b0f) list_set_graphic_pane_g2_copy1

0xbf2b,	// (0x0004538f) list_set_graphic_pane_t1_copy1_ParamLimits

0xbf2b,	// (0x0004538f) list_set_graphic_pane_t1_copy1

0x46b1,	// (0x0003db15) rs_clock_indi_pane_g1

0x76b3,	// (0x00040b17) rs_clock_indi_pane_t1

0x76c1,	// (0x00040b25) rs_indi_pane

0x76c9,	// (0x00040b2d) rs_indi_pane_g1

0x76d2,	// (0x00040b36) rs_indi_pane_g2

0x73e9,	// (0x0004084d) rs_indi_pane_g3

0x0002,

0xfeb7,	// (0x0004931b) rs_indi_pane_g

0xc1a2,	// (0x00045606) bg_popup_preview_window_pane_cp03

0x76db,	// (0x00040b3f) popup_fep_tooltip_window_t1

0xd1a9,	// (0x0004660d) popup_note2_window_g2_ParamLimits

0xd1a9,	// (0x0004660d) popup_note2_window_g2

0x0001,

0xfc4b,	// (0x000490af) popup_note2_window_g_ParamLimits

0xfc4b,	// (0x000490af) popup_note2_window_g

0x5861,	// (0x0003ecc5) bg_popup_sub_pane_cp11_ParamLimits

0x586e,	// (0x0003ecd2) cell_ai3_links_pane_g1_ParamLimits

0x5885,	// (0x0003ece9) cell_ai3_links_pane_t1

0xee4b,	// (0x000482af) set_text_pane_t1_copy1_ParamLimits

0xc0d8,	// (0x0004553c) cell_graphic_popup_pane_cp2_ParamLimits

0xc0d8,	// (0x0004553c) cell_graphic_popup_pane_cp2

0xee67,	// (0x000482cb) cell_graphic_popup_pane_g1_cp2

0xb7b4,	// (0x00044c18) cell_graphic_popup_pane_g2_cp2

0x76f1,	// (0x00040b55) cell_graphic_popup_pane_g3_cp2

0xee6f,	// (0x000482d3) cell_graphic_popup_pane_t2_cp2

0xb7c5,	// (0x00044c29) grid_highlight_pane_cp3_cp2

0xbbb5,	// (0x00045019) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb8e6,	// (0x00044d4a) main_tmo_pane_ParamLimits

0xd4f7,	// (0x0004695b) popup_tmo_big_image_note_window

0x6d58,	// (0x000401bc) cell_ai5_widget_list_pane

0x6d60,	// (0x000401c4) cell_ai5_widget_lrg_icon_pane

0xec5d,	// (0x000480c1) tmo_note_info_pane_t1_ParamLimits

0xec72,	// (0x000480d6) tmo_note_info_pane_t2_ParamLimits

0xec89,	// (0x000480ed) tmo_note_info_pane_t3_ParamLimits

0x7366,	// (0x000407ca) tmo_note_info_pane_t4_ParamLimits

0x7378,	// (0x000407dc) tmo_note_info_pane_t5_ParamLimits

0xfea5,	// (0x00049309) tmo_note_info_pane_t_ParamLimits

0x7496,	// (0x000408fa) settings_container_pane_ParamLimits

0xee43,	// (0x000482a7) indicator_popup_pane_cp5

0xee43,	// (0x000482a7) indicator_popup_pane_cp6

0x7697,	// (0x00040afb) list_set_graphic_pane_copy1_ParamLimits

0xb4c0,	// (0x00044924) bg_popup_window_pane_cp23

0x7707,	// (0x00040b6b) popup_tmo_big_image_note_window_g1

0x7710,	// (0x00040b74) popup_tmo_big_image_note_window_t1

0x7720,	// (0x00040b84) popup_tmo_big_image_note_window_t2

0x7730,	// (0x00040b94) popup_tmo_big_image_note_window_t3

0x0002,

0xfebe,	// (0x00049322) popup_tmo_big_image_note_window_t

0x46b1,	// (0x0003db15) cell_ai5_widget_lrg_icon_pane_g1

0x7740,	// (0x00040ba4) cell_ai5_widget_lrg_icon_pane_t1

0x774e,	// (0x00040bb2) cell_ai5_widget_list_row_pane_ParamLimits

0x774e,	// (0x00040bb2) cell_ai5_widget_list_row_pane

0x7765,	// (0x00040bc9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7765,	// (0x00040bc9) cell_ai5_widget_list_row_pane_g1

0xee7d,	// (0x000482e1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xee7d,	// (0x000482e1) cell_ai5_widget_list_row_pane_t1

0x779d,	// (0x00040c01) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x779d,	// (0x00040c01) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec5,	// (0x00049329) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec5,	// (0x00049329) cell_ai5_widget_list_row_pane_t

0xdb1f,	// (0x00046f83) main_fep_vtchi_ss_pane

0x77ed,	// (0x00040c51) popup_fep_char_pre_window

0x77f5,	// (0x00040c59) popup_fep_ituss_window

0xeed8,	// (0x0004833c) popup_fep_vkbss_window

0xba28,	// (0x00044e8c) grid_vkbss_keypad_pane_ParamLimits

0xba28,	// (0x00044e8c) grid_vkbss_keypad_pane

0x7861,	// (0x00040cc5) ituss_keypad_pane

0x1ccc,	// (0x0003b130) aid_vkbss_key_offset_ParamLimits

0x1ccc,	// (0x0003b130) aid_vkbss_key_offset

0xb44e,	// (0x000448b2) cell_vkbss_key_pane_ParamLimits

0xb44e,	// (0x000448b2) cell_vkbss_key_pane

0x7871,	// (0x00040cd5) bg_cell_vkbss_key_g1_ParamLimits

0x7871,	// (0x00040cd5) bg_cell_vkbss_key_g1

0xeee5,	// (0x00048349) cell_vkbss_key_3p_pane_ParamLimits

0xeee5,	// (0x00048349) cell_vkbss_key_3p_pane

0xef1b,	// (0x0004837f) cell_vkbss_key_g1_ParamLimits

0xef1b,	// (0x0004837f) cell_vkbss_key_g1

0xef51,	// (0x000483b5) cell_vkbss_key_t1_ParamLimits

0xef51,	// (0x000483b5) cell_vkbss_key_t1

0x1d23,	// (0x0003b187) cell_ituss_key_pane_ParamLimits

0x1d23,	// (0x0003b187) cell_ituss_key_pane

0x7945,	// (0x00040da9) bg_cell_ituss_key_g1_ParamLimits

0x7945,	// (0x00040da9) bg_cell_ituss_key_g1

0x7951,	// (0x00040db5) cell_ituss_key_pane_g1_ParamLimits

0x7951,	// (0x00040db5) cell_ituss_key_pane_g1

0x1d34,	// (0x0003b198) cell_ituss_key_pane_g2_ParamLimits

0x1d34,	// (0x0003b198) cell_ituss_key_pane_g2

0x0005,

0xfecc,	// (0x00049330) cell_ituss_key_pane_g_ParamLimits

0xfecc,	// (0x00049330) cell_ituss_key_pane_g

0x1db8,	// (0x0003b21c) cell_ituss_key_t1_ParamLimits

0x1db8,	// (0x0003b21c) cell_ituss_key_t1

0x1df2,	// (0x0003b256) cell_ituss_key_t2_ParamLimits

0x1df2,	// (0x0003b256) cell_ituss_key_t2

0x1e24,	// (0x0003b288) cell_ituss_key_t3_ParamLimits

0x1e24,	// (0x0003b288) cell_ituss_key_t3

0x1e55,	// (0x0003b2b9) cell_ituss_key_t4_ParamLimits

0x1e55,	// (0x0003b2b9) cell_ituss_key_t4

0x0004,

0xfed9,	// (0x0004933d) cell_ituss_key_t_ParamLimits

0xfed9,	// (0x0004933d) cell_ituss_key_t

0xefad,	// (0x00048411) cell_vkbss_key_3p_pane_g1

0xefb5,	// (0x00048419) cell_vkbss_key_3p_pane_g2

0xefbd,	// (0x00048421) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee4,	// (0x00049348) cell_vkbss_key_3p_pane_g

0xc1a2,	// (0x00045606) bg_popup_fep_char_preview_window_cp02

0x798f,	// (0x00040df3) popup_fep_char_pre_window_t1

0xeae5,	// (0x00047f49) main_ai5_sk_pane

0x73f2,	// (0x00040856) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x73fe,	// (0x00040862) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4d77,	// (0x0003e1db) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7413,	// (0x00040877) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb0,	// (0x00049314) cell_contacts_ai5_widget_pane_g_ParamLimits

0x741f,	// (0x00040883) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb8e6,	// (0x00044d4a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xefc5,	// (0x00048429) main_ai5_sk_pane_g1

0xc370,	// (0x000457d4) popup_query_code_window_g1

0xeec9,	// (0x0004832d) popup_fep_vkb_icf_pane

0x7838,	// (0x00040c9c) popup_fep_vtchi_icf_pane

0x79a6,	// (0x00040e0a) bg_icf_pane

0x79a6,	// (0x00040e0a) list_vkb_icf_pane

0x79b2,	// (0x00040e16) bg_icf_pane_cp01

0x79c5,	// (0x00040e29) vtchi_icf_list_pane

0xf01a,	// (0x0004847e) list_vkb_icf_pane_t1_ParamLimits

0xf01a,	// (0x0004847e) list_vkb_icf_pane_t1

0x7a4a,	// (0x00040eae) vtchi_icf_list_pane_t1_ParamLimits

0x7a4a,	// (0x00040eae) vtchi_icf_list_pane_t1

0x77f5,	// (0x00040c59) popup_fep_ituss_window_ParamLimits

0x7838,	// (0x00040c9c) popup_fep_vtchi_icf_pane_ParamLimits

0x7861,	// (0x00040cc5) ituss_keypad_pane_ParamLimits

0x1cc2,	// (0x0003b126) ituss_sks_pane

0x79a6,	// (0x00040e0a) bg_icf_pane_ParamLimits

0xeeae,	// (0x00048312) icf_edit_indi_pane_ParamLimits

0xeeae,	// (0x00048312) icf_edit_indi_pane

0x79a6,	// (0x00040e0a) list_vkb_icf_pane_ParamLimits

0x79b2,	// (0x00040e16) bg_icf_pane_cp01_ParamLimits

0x77e0,	// (0x00040c44) icf_edit_indi_pane_cp01_ParamLimits

0x77e0,	// (0x00040c44) icf_edit_indi_pane_cp01

0x79c5,	// (0x00040e29) vtchi_query_pane

0x6b66,	// (0x0003ffca) icf_edit_indi_pane_g1_ParamLimits

0x6b66,	// (0x0003ffca) icf_edit_indi_pane_g1

0xf032,	// (0x00048496) icf_edit_indi_pane_g2_ParamLimits

0xf032,	// (0x00048496) icf_edit_indi_pane_g2

0x0001,

0xff0f,	// (0x00049373) icf_edit_indi_pane_g_ParamLimits

0xff0f,	// (0x00049373) icf_edit_indi_pane_g

0xf046,	// (0x000484aa) icf_edit_indi_pane_t1

0x7a6e,	// (0x00040ed2) bg_input_focus_pane_cp042

0xb828,	// (0x00044c8c) vtchi_button_pane

0x7a77,	// (0x00040edb) vtchi_query_pane_t1

0x7a85,	// (0x00040ee9) vtchi_query_pane_t2

0x7a93,	// (0x00040ef7) vtchi_query_pane_t3

0x0002,

0xfefe,	// (0x00049362) vtchi_query_pane_t

0xdb1f,	// (0x00046f83) bg_button_pane_cp13

0x7aa1,	// (0x00040f05) vtchi_button_pane_g1

0x1e98,	// (0x0003b2fc) ituss_sks_pane_g1

0x1ea3,	// (0x0003b307) ituss_sks_pane_g2

0x0001,

0xff05,	// (0x00049369) ituss_sks_pane_g

0x7aa9,	// (0x00040f0d) ituss_sks_pane_t1

0x7ab7,	// (0x00040f1b) ituss_sks_pane_t2

0x0001,

0xff0a,	// (0x0004936e) ituss_sks_pane_t

0x4125,	// (0x0003d589) indicator_nsta_pane_cp_g1

0x412e,	// (0x0003d592) indicator_nsta_pane_cp_g2

0x4136,	// (0x0003d59a) indicator_nsta_pane_cp_g3

0x413e,	// (0x0003d5a2) indicator_nsta_pane_cp_g4

0x412e,	// (0x0003d592) indicator_nsta_pane_cp_g5

0x4136,	// (0x0003d59a) indicator_nsta_pane_cp_g6

0x0005,

0xfa89,	// (0x00048eed) indicator_nsta_pane_cp_g

0xe8c4,	// (0x00047d28) cell_graphic2_pane_t2_ParamLimits

0xe8c4,	// (0x00047d28) cell_graphic2_pane_t2

0x0001,

0xfd9b,	// (0x000491ff) cell_graphic2_pane_t_ParamLimits

0xfd9b,	// (0x000491ff) cell_graphic2_pane_t

0xe8fb,	// (0x00047d5f) cell_graphic2_control_pane_t1

0x96a8,	// (0x00042b0c) signal_pane_g3_ParamLimits

0x96a8,	// (0x00042b0c) signal_pane_g3

0x96bc,	// (0x00042b20) signal_pane_g4_ParamLimits

0x96bc,	// (0x00042b20) signal_pane_g4

0x77af,	// (0x00040c13) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x77af,	// (0x00040c13) cell_ai5_widget_list_row_pane_t3

0x7965,	// (0x00040dc9) cell_ituss_key_pane_t1_ParamLimits

0x7965,	// (0x00040dc9) cell_ituss_key_pane_t1

0x2197,	// (0x0003b5fb) form_field_data_wide_pane_vc_t2_ParamLimits

0x2197,	// (0x0003b5fb) form_field_data_wide_pane_vc_t2

0x21ab,	// (0x0003b60f) form_field_data_wide_pane_vc_t3_ParamLimits

0x21ab,	// (0x0003b60f) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d0,	// (0x00048c34) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d0,	// (0x00048c34) form_field_data_wide_pane_vc_t

0x3dcf,	// (0x0003d233) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3dcf,	// (0x0003d233) form_field_slider_wide_pane_vc_t3

0x3ead,	// (0x0003d311) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3ead,	// (0x0003d311) form_field_popup_wide_pane_vc_t2

0x3ec4,	// (0x0003d328) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3ec4,	// (0x0003d328) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa78,	// (0x00048edc) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa78,	// (0x00048edc) form_field_popup_wide_pane_vc_t

0xb21f,	// (0x00044683) aid_fshwr2_btn_pane_ParamLimits

0xb233,	// (0x00044697) aid_fshwr2_syb_pane_ParamLimits

0xb247,	// (0x000446ab) aid_fshwr2_txt_pane_ParamLimits

0x12a6,	// (0x0003a70a) fshwr2_bg_pane_ParamLimits

0xb257,	// (0x000446bb) fshwr2_func_candi_pane_ParamLimits

0xb277,	// (0x000446db) fshwr2_hwr_syb_pane_ParamLimits

0xb299,	// (0x000446fd) fshwr2_icf_pane_ParamLimits

0xe155,	// (0x000475b9) list_double_graphic_pane_vc_g4_ParamLimits

0xe155,	// (0x000475b9) list_double_graphic_pane_vc_g4

0x1d54,	// (0x0003b1b8) cell_ituss_key_pane_g3_ParamLimits

0x1d54,	// (0x0003b1b8) cell_ituss_key_pane_g3

0x1e86,	// (0x0003b2ea) cell_ituss_key_t5_ParamLimits

0x1e86,	// (0x0003b2ea) cell_ituss_key_t5

0xeed8,	// (0x0004833c) popup_fep_vkbss_window_ParamLimits

0x4ea8,	// (0x0003e30c) aid_cell_ai5_quarter

0xf046,	// (0x000484aa) icf_edit_indi_pane_t1_ParamLimits

0x8c76,	// (0x000420da) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8c76,	// (0x000420da) aid_tch_indicator_popup_pane_cp2

0x8c89,	// (0x000420ed) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8c89,	// (0x000420ed) aid_tch_query_popup_data_pane_cp2

0x250c,	// (0x0003b970) aid_tch_query_popup_pane_ParamLimits

0x250c,	// (0x0003b970) aid_tch_query_popup_pane

0x250c,	// (0x0003b970) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x250c,	// (0x0003b970) aid_tch_query_popup_data_pane_cp1

0xba28,	// (0x00044e8c) cell_fshwr2_syb_bg_pane_ParamLimits

0xb38c,	// (0x000447f0) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xb39f,	// (0x00044803) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeec9,	// (0x0004832d) popup_fep_vkb_icf_pane_ParamLimits

0xb185,	// (0x000445e9) bg_popup_fep_char_preview_window_g10

0x6e20,	// (0x00040284) cell_ai5_widget_pane_g11_ParamLimits

0x6e20,	// (0x00040284) cell_ai5_widget_pane_g11

0x6e2c,	// (0x00040290) cell_ai5_widget_pane_g12_ParamLimits

0x6e2c,	// (0x00040290) cell_ai5_widget_pane_g12

0x6e38,	// (0x0004029c) cell_ai5_widget_pane_g13_ParamLimits

0x6e38,	// (0x0004029c) cell_ai5_widget_pane_g13

0x6f67,	// (0x000403cb) cell_ai5_widget_pane_t11_ParamLimits

0x6f67,	// (0x000403cb) cell_ai5_widget_pane_t11

0x6f79,	// (0x000403dd) cell_ai5_widget_pane_t12_ParamLimits

0x6f79,	// (0x000403dd) cell_ai5_widget_pane_t12

0x1d60,	// (0x0003b1c4) cell_ituss_key_pane_g4_ParamLimits

0x1d60,	// (0x0003b1c4) cell_ituss_key_pane_g4

0x1d7c,	// (0x0003b1e0) cell_ituss_key_pane_g5_ParamLimits

0x1d7c,	// (0x0003b1e0) cell_ituss_key_pane_g5

0x1d98,	// (0x0003b1fc) cell_ituss_key_pane_g6_ParamLimits

0x1d98,	// (0x0003b1fc) cell_ituss_key_pane_g6

0x207d,	// (0x0003b4e1) bg_icf_pane_g1

0xefce,	// (0x00048432) bg_icf_pane_g2

0xefd8,	// (0x0004843c) bg_icf_pane_g3

0xefe0,	// (0x00048444) bg_icf_pane_g4

0xefea,	// (0x0004844e) bg_icf_pane_g5

0xeff4,	// (0x00048458) bg_icf_pane_g6

0xeffe,	// (0x00048462) bg_icf_pane_g7

0xf006,	// (0x0004846a) bg_icf_pane_g8

0xf010,	// (0x00048474) bg_icf_pane_g9

0x0008,

0xfeeb,	// (0x0004934f) bg_icf_pane_g

0x784e,	// (0x00040cb2) popup_hyb_candi_window_ParamLimits

0x784e,	// (0x00040cb2) popup_hyb_candi_window

0x2109,	// (0x0003b56d) bg_popup_sub_pane_cp01_ParamLimits

0x2109,	// (0x0003b56d) bg_popup_sub_pane_cp01

0x7af2,	// (0x00040f56) entry_hyb_candi_pane_ParamLimits

0x7af2,	// (0x00040f56) entry_hyb_candi_pane

0x7b01,	// (0x00040f65) grid_hyb_candi_pane_ParamLimits

0x7b01,	// (0x00040f65) grid_hyb_candi_pane

0x7b16,	// (0x00040f7a) grid_hyb_phrase_pane_ParamLimits

0x7b16,	// (0x00040f7a) grid_hyb_phrase_pane

0x7b25,	// (0x00040f89) cell_hyb_candi_pane_ParamLimits

0x7b25,	// (0x00040f89) cell_hyb_candi_pane

0x7b48,	// (0x00040fac) cell_hyb_candi_scroll_pane

0xbd38,	// (0x0004519c) cell_hyb_candi_pane_g1

0x7b51,	// (0x00040fb5) cell_hyb_candi_pane_t1

0x7b5f,	// (0x00040fc3) cell_hyb_phrase_pane

0xbd38,	// (0x0004519c) cell_hyb_phrase_pane_g1

0x7b68,	// (0x00040fcc) cell_hyb_phrase_pane_t1

0x7b76,	// (0x00040fda) entry_hyb_candi_pane_t1

0xc1a2,	// (0x00045606) input_focus_pane_cp06

0x7b84,	// (0x00040fe8) cell_hyb_candi_scroll_pane_g1

0x7b8c,	// (0x00040ff0) cell_hyb_candi_scroll_pane_g1_aid

0x7b94,	// (0x00040ff8) cell_hyb_candi_scroll_pane_g2

0x7b9c,	// (0x00041000) cell_hyb_candi_scroll_pane_g2_aid

0x7ba4,	// (0x00041008) cell_hyb_candi_scroll_pane_g3

0x7bac,	// (0x00041010) cell_hyb_candi_scroll_pane_g4
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
