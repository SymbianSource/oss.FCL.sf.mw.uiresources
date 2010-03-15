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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000988c };

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
0x7cd4,	// (0x00011560) Screen

0x7ce8,	// (0x00011574) application_window_ParamLimits

0x7ce8,	// (0x00011574) application_window

0x7d02,	// (0x0001158e) screen_g1

0x59d6,	// (0x0000f262) area_bottom_pane_ParamLimits

0x59d6,	// (0x0000f262) area_bottom_pane

0x5a96,	// (0x0000f322) area_top_pane_ParamLimits

0x5a96,	// (0x0000f322) area_top_pane

0x5b34,	// (0x0000f3c0) main_pane_ParamLimits

0x5b34,	// (0x0000f3c0) main_pane

0x7d0c,	// (0x00011598) misc_graphics

0x9dce,	// (0x0001365a) battery_pane_ParamLimits

0x9dce,	// (0x0001365a) battery_pane

0xaba6,	// (0x00014432) bg_status_flat_pane_g8

0xabae,	// (0x0001443a) bg_status_flat_pane_g9

0x9e90,	// (0x0001371c) context_pane_ParamLimits

0x9e90,	// (0x0001371c) context_pane

0x9fa6,	// (0x00013832) navi_pane_ParamLimits

0x9fa6,	// (0x00013832) navi_pane

0xa024,	// (0x000138b0) signal_pane_ParamLimits

0xa024,	// (0x000138b0) signal_pane

0x0008,

0xf875,	// (0x00019101) bg_status_flat_pane_g

0xa091,	// (0x0001391d) status_pane_g1_ParamLimits

0xa091,	// (0x0001391d) status_pane_g1

0xa0a5,	// (0x00013931) status_pane_g2_ParamLimits

0xa0a5,	// (0x00013931) status_pane_g2

0xa0b1,	// (0x0001393d) status_pane_g3_ParamLimits

0xa0b1,	// (0x0001393d) status_pane_g3

0x0004,

0xf7a1,	// (0x0001902d) status_pane_g_ParamLimits

0xf7a1,	// (0x0001902d) status_pane_g

0xa0e5,	// (0x00013971) title_pane_ParamLimits

0xa0e5,	// (0x00013971) title_pane

0xa122,	// (0x000139ae) uni_indicator_pane_ParamLimits

0xa122,	// (0x000139ae) uni_indicator_pane

0x9ce2,	// (0x0001356e) bg_list_pane_ParamLimits

0x9ce2,	// (0x0001356e) bg_list_pane

0x9d02,	// (0x0001358e) find_pane

0x9d0a,	// (0x00013596) listscroll_app_pane_ParamLimits

0x9d0a,	// (0x00013596) listscroll_app_pane

0x9d16,	// (0x000135a2) listscroll_form_pane

0x63e6,	// (0x0000fc72) listscroll_gen_pane_ParamLimits

0x63e6,	// (0x0000fc72) listscroll_gen_pane

0x9d16,	// (0x000135a2) listscroll_set_pane

0x8ef6,	// (0x00012782) main_idle_act_pane

0x99ec,	// (0x00013278) main_idle_trad_pane

0x99ec,	// (0x00013278) main_list_empty_pane

0x9d30,	// (0x000135bc) main_midp_pane

0x9d3c,	// (0x000135c8) main_pane_g1_ParamLimits

0x9d3c,	// (0x000135c8) main_pane_g1

0x6408,	// (0x0000fc94) popup_ai_message_window_ParamLimits

0x6408,	// (0x0000fc94) popup_ai_message_window

0x64ac,	// (0x0000fd38) popup_fep_china_uni_window_ParamLimits

0x64ac,	// (0x0000fd38) popup_fep_china_uni_window

0x6506,	// (0x0000fd92) popup_fep_japan_candidate_window_ParamLimits

0x6506,	// (0x0000fd92) popup_fep_japan_candidate_window

0x6524,	// (0x0000fdb0) popup_fep_japan_predictive_window_ParamLimits

0x6524,	// (0x0000fdb0) popup_fep_japan_predictive_window

0x6554,	// (0x0000fde0) popup_find_window

0x6561,	// (0x0000fded) popup_grid_graphic_window_ParamLimits

0x6561,	// (0x0000fded) popup_grid_graphic_window

0x6589,	// (0x0000fe15) popup_large_graphic_colour_window

0x65af,	// (0x0000fe3b) popup_menu_window_ParamLimits

0x65af,	// (0x0000fe3b) popup_menu_window

0x6769,	// (0x0000fff5) popup_note_image_window

0x6755,	// (0x0000ffe1) popup_note_wait_window_ParamLimits

0x6755,	// (0x0000ffe1) popup_note_wait_window

0x6755,	// (0x0000ffe1) popup_note_window_ParamLimits

0x6755,	// (0x0000ffe1) popup_note_window

0x67bf,	// (0x0001004b) popup_query_code_window_ParamLimits

0x67bf,	// (0x0001004b) popup_query_code_window

0x67d3,	// (0x0001005f) popup_query_data_code_window_ParamLimits

0x67d3,	// (0x0001005f) popup_query_data_code_window

0x67ee,	// (0x0001007a) popup_query_data_window_ParamLimits

0x67ee,	// (0x0001007a) popup_query_data_window

0x6808,	// (0x00010094) popup_query_sat_info_window_ParamLimits

0x6808,	// (0x00010094) popup_query_sat_info_window

0x6841,	// (0x000100cd) popup_snote_single_graphic_window_ParamLimits

0x6841,	// (0x000100cd) popup_snote_single_graphic_window

0x6841,	// (0x000100cd) popup_snote_single_text_window_ParamLimits

0x6841,	// (0x000100cd) popup_snote_single_text_window

0x6856,	// (0x000100e2) popup_sub_window_general

0x6984,	// (0x00010210) popup_window_general_ParamLimits

0x6984,	// (0x00010210) popup_window_general

0x9d52,	// (0x000135de) power_save_pane

0x627c,	// (0x0000fb08) control_pane_g1_ParamLimits

0x627c,	// (0x0000fb08) control_pane_g1

0x62a3,	// (0x0000fb2f) control_pane_g2_ParamLimits

0x62a3,	// (0x0000fb2f) control_pane_g2

0x9ca5,	// (0x00013531) control_pane_g3_ParamLimits

0x9ca5,	// (0x00013531) control_pane_g3

0x0007,

0xf789,	// (0x00019015) control_pane_g_ParamLimits

0xf789,	// (0x00019015) control_pane_g

0x62eb,	// (0x0000fb77) control_pane_t1_ParamLimits

0x62eb,	// (0x0000fb77) control_pane_t1

0x6337,	// (0x0000fbc3) control_pane_t2_ParamLimits

0x6337,	// (0x0000fbc3) control_pane_t2

0x0002,

0xf79a,	// (0x00019026) control_pane_t_ParamLimits

0xf79a,	// (0x00019026) control_pane_t

0x9bc6,	// (0x00013452) navi_navi_volume_pane_cp1

0x9bcf,	// (0x0001345b) status_small_icon_pane

0x9bd7,	// (0x00013463) status_small_pane_g1_ParamLimits

0x9bd7,	// (0x00013463) status_small_pane_g1

0x9c0b,	// (0x00013497) status_small_pane_g2_ParamLimits

0x9c0b,	// (0x00013497) status_small_pane_g2

0x9c17,	// (0x000134a3) status_small_pane_g3_ParamLimits

0x9c17,	// (0x000134a3) status_small_pane_g3

0x9c23,	// (0x000134af) status_small_pane_g4_ParamLimits

0x9c23,	// (0x000134af) status_small_pane_g4

0x9c2f,	// (0x000134bb) status_small_pane_g5_ParamLimits

0x9c2f,	// (0x000134bb) status_small_pane_g5

0x9c3e,	// (0x000134ca) status_small_pane_g6_ParamLimits

0x9c3e,	// (0x000134ca) status_small_pane_g6

0x0007,

0xf778,	// (0x00019004) status_small_pane_g_ParamLimits

0xf778,	// (0x00019004) status_small_pane_g

0x9c6e,	// (0x000134fa) status_small_pane_t1

0x9c91,	// (0x0001351d) status_small_wait_pane_ParamLimits

0x9c91,	// (0x0001351d) status_small_wait_pane

0x93e8,	// (0x00012c74) aid_levels_signal_ParamLimits

0x93e8,	// (0x00012c74) aid_levels_signal

0x93fa,	// (0x00012c86) signal_pane_g1_ParamLimits

0x93fa,	// (0x00012c86) signal_pane_g1

0x940f,	// (0x00012c9b) signal_pane_g2_ParamLimits

0x940f,	// (0x00012c9b) signal_pane_g2

0x0003,

0xf709,	// (0x00018f95) signal_pane_g_ParamLimits

0xf709,	// (0x00018f95) signal_pane_g

0x9449,	// (0x00012cd5) context_pane_g1

0x7d16,	// (0x000115a2) title_pane_g1

0x7d4c,	// (0x000115d8) title_pane_t1

0x7db4,	// (0x00011640) title_pane_t2

0x7dda,	// (0x00011666) title_pane_t3

0x0002,

0xf55d,	// (0x00018de9) title_pane_t

0xa13a,	// (0x000139c6) aid_levels_battery_ParamLimits

0xa13a,	// (0x000139c6) aid_levels_battery

0xa14e,	// (0x000139da) battery_pane_g1_ParamLimits

0xa14e,	// (0x000139da) battery_pane_g1

0xa164,	// (0x000139f0) battery_pane_g2_ParamLimits

0xa164,	// (0x000139f0) battery_pane_g2

0x0001,

0xf7ac,	// (0x00019038) battery_pane_g_ParamLimits

0xf7ac,	// (0x00019038) battery_pane_g

0xb4da,	// (0x00014d66) uni_indicator_pane_g1

0xb4ef,	// (0x00014d7b) uni_indicator_pane_g2

0xb505,	// (0x00014d91) uni_indicator_pane_g3

0x0005,

0xf91d,	// (0x000191a9) uni_indicator_pane_g

0x986a,	// (0x000130f6) navi_icon_pane_ParamLimits

0x986a,	// (0x000130f6) navi_icon_pane

0x97b3,	// (0x0001303f) navi_midp_pane

0x9886,	// (0x00013112) navi_navi_pane

0x9890,	// (0x0001311c) navi_text_pane_ParamLimits

0x9890,	// (0x0001311c) navi_text_pane

0x7d02,	// (0x0001158e) status_small_wait_pane_g1

0x8217,	// (0x00011aa3) status_small_wait_pane_g2

0x0001,

0xf918,	// (0x000191a4) status_small_wait_pane_g

0xb201,	// (0x00014a8d) navi_navi_icon_text_pane

0xb209,	// (0x00014a95) navi_navi_pane_g1_ParamLimits

0xb209,	// (0x00014a95) navi_navi_pane_g1

0xb21b,	// (0x00014aa7) navi_navi_pane_g2_ParamLimits

0xb21b,	// (0x00014aa7) navi_navi_pane_g2

0x0001,

0xf8e6,	// (0x00019172) navi_navi_pane_g_ParamLimits

0xf8e6,	// (0x00019172) navi_navi_pane_g

0xb22d,	// (0x00014ab9) navi_navi_tabs_pane

0xb236,	// (0x00014ac2) navi_navi_text_pane

0xb201,	// (0x00014a8d) navi_navi_volume_pane

0xb1dd,	// (0x00014a69) navi_text_pane_t1

0xb1d1,	// (0x00014a5d) navi_icon_pane_g1

0xb124,	// (0x000149b0) navi_navi_text_pane_t1

0x6c94,	// (0x00010520) navi_navi_volume_pane_g1

0x6c9c,	// (0x00010528) volume_small_pane

0xb08a,	// (0x00014916) navi_navi_icon_text_pane_g1

0xb092,	// (0x0001491e) navi_navi_icon_text_pane_t1

0x9886,	// (0x00013112) navi_tabs_2_long_pane

0x9886,	// (0x00013112) navi_tabs_2_pane

0x9886,	// (0x00013112) navi_tabs_3_long_pane

0x9886,	// (0x00013112) navi_tabs_3_pane

0x9886,	// (0x00013112) navi_tabs_4_pane

0x6c74,	// (0x00010500) tabs_2_active_pane_ParamLimits

0x6c74,	// (0x00010500) tabs_2_active_pane

0x6c84,	// (0x00010510) tabs_2_passive_pane_ParamLimits

0x6c84,	// (0x00010510) tabs_2_passive_pane

0x6c42,	// (0x000104ce) tabs_3_active_pane_ParamLimits

0x6c42,	// (0x000104ce) tabs_3_active_pane

0x6c52,	// (0x000104de) tabs_3_passive_pane_ParamLimits

0x6c52,	// (0x000104de) tabs_3_passive_pane

0x6c63,	// (0x000104ef) tabs_3_passive_pane_cp_ParamLimits

0x6c63,	// (0x000104ef) tabs_3_passive_pane_cp

0x6bfe,	// (0x0001048a) tabs_4_active_pane_ParamLimits

0x6bfe,	// (0x0001048a) tabs_4_active_pane

0x6c0f,	// (0x0001049b) tabs_4_passive_pane_ParamLimits

0x6c0f,	// (0x0001049b) tabs_4_passive_pane

0x6c20,	// (0x000104ac) tabs_4_passive_pane_cp_ParamLimits

0x6c20,	// (0x000104ac) tabs_4_passive_pane_cp

0x6c31,	// (0x000104bd) tabs_4_passive_pane_cp2_ParamLimits

0x6c31,	// (0x000104bd) tabs_4_passive_pane_cp2

0x6bda,	// (0x00010466) tabs_2_long_active_pane_ParamLimits

0x6bda,	// (0x00010466) tabs_2_long_active_pane

0x6bec,	// (0x00010478) tabs_2_long_passive_pane_ParamLimits

0x6bec,	// (0x00010478) tabs_2_long_passive_pane

0x6ba1,	// (0x0001042d) tabs_3_long_active_pane_ParamLimits

0x6ba1,	// (0x0001042d) tabs_3_long_active_pane

0x6bb4,	// (0x00010440) tabs_3_long_passive_pane_ParamLimits

0x6bb4,	// (0x00010440) tabs_3_long_passive_pane

0x6bc7,	// (0x00010453) tabs_3_long_passive_pane_cp_ParamLimits

0x6bc7,	// (0x00010453) tabs_3_long_passive_pane_cp

0x6b47,	// (0x000103d3) volume_small_pane_g1

0x6b50,	// (0x000103dc) volume_small_pane_g2

0x6b59,	// (0x000103e5) volume_small_pane_g3

0x6b62,	// (0x000103ee) volume_small_pane_g4

0x6b6b,	// (0x000103f7) volume_small_pane_g5

0x6b74,	// (0x00010400) volume_small_pane_g6

0x6b7d,	// (0x00010409) volume_small_pane_g7

0x6b86,	// (0x00010412) volume_small_pane_g8

0x6b8f,	// (0x0001041b) volume_small_pane_g9

0x6b98,	// (0x00010424) volume_small_pane_g10

0x0009,

0xf8b2,	// (0x0001913e) volume_small_pane_g

0x7dec,	// (0x00011678) bg_active_tab_pane_cp2_ParamLimits

0x7dec,	// (0x00011678) bg_active_tab_pane_cp2

0x7dfa,	// (0x00011686) tabs_3_active_pane_g1

0x7e02,	// (0x0001168e) tabs_3_active_pane_t1

0x7dec,	// (0x00011678) bg_passive_tab_pane_cp2_ParamLimits

0x7dec,	// (0x00011678) bg_passive_tab_pane_cp2

0x7dfa,	// (0x00011686) tabs_3_passive_pane_g1

0x7e02,	// (0x0001168e) tabs_3_passive_pane_t1

0x7dec,	// (0x00011678) bg_active_tab_pane_cp3_ParamLimits

0x7dec,	// (0x00011678) bg_active_tab_pane_cp3

0x7e14,	// (0x000116a0) tabs_4_active_pane_g1

0x7e1c,	// (0x000116a8) tabs_4_active_pane_t1

0x7dec,	// (0x00011678) bg_passive_tab_pane_cp3_ParamLimits

0x7dec,	// (0x00011678) bg_passive_tab_pane_cp3

0x7e14,	// (0x000116a0) tabs_4_1_passive_pane_g1

0x7e1c,	// (0x000116a8) tabs_4_1_passive_pane_t1

0x9d30,	// (0x000135bc) list_highlight_pane_cp2

0xb770,	// (0x00014ffc) list_set_pane_ParamLimits

0xb770,	// (0x00014ffc) list_set_pane

0xb816,	// (0x000150a2) main_pane_set_t1_ParamLimits

0xb816,	// (0x000150a2) main_pane_set_t1

0xb836,	// (0x000150c2) main_pane_set_t2_ParamLimits

0xb836,	// (0x000150c2) main_pane_set_t2

0xb84a,	// (0x000150d6) main_pane_set_t3_ParamLimits

0xb84a,	// (0x000150d6) main_pane_set_t3

0xb85c,	// (0x000150e8) main_pane_set_t4_ParamLimits

0xb85c,	// (0x000150e8) main_pane_set_t4

0x0003,

0xf982,	// (0x0001920e) main_pane_set_t_ParamLimits

0xf982,	// (0x0001920e) main_pane_set_t

0xb86e,	// (0x000150fa) setting_code_pane

0xb878,	// (0x00015104) setting_slider_graphic_pane

0xb878,	// (0x00015104) setting_slider_pane

0xb878,	// (0x00015104) setting_text_pane

0xb878,	// (0x00015104) setting_volume_pane

0x5d6b,	// (0x0000f5f7) volume_set_pane

0x7dec,	// (0x00011678) bg_set_opt_pane_cp

0x5d73,	// (0x0000f5ff) setting_slider_pane_t1

0x5d8c,	// (0x0000f618) setting_slider_pane_t2

0x5da6,	// (0x0000f632) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00018df0) setting_slider_pane_t

0x5dbe,	// (0x0000f64a) slider_set_pane

0x7d0c,	// (0x00011598) bg_set_opt_pane_cp2

0x7e2e,	// (0x000116ba) setting_slider_graphic_pane_g1

0x5dd4,	// (0x0000f660) setting_slider_graphic_pane_t1

0x5de4,	// (0x0000f670) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00018df7) setting_slider_graphic_pane_t

0x5df4,	// (0x0000f680) slider_set_pane_cp

0x7d0c,	// (0x00011598) input_focus_pane_cp1

0xb72f,	// (0x00014fbb) list_set_text_pane

0x7d02,	// (0x0001158e) setting_text_pane_g1

0x7d0c,	// (0x00011598) input_focus_pane_cp2

0x7d02,	// (0x0001158e) setting_code_pane_g1

0x7e37,	// (0x000116c3) setting_code_pane_t1

0x7e45,	// (0x000116d1) set_text_pane_t1_ParamLimits

0x7e45,	// (0x000116d1) set_text_pane_t1

0x8ce1,	// (0x0001256d) set_opt_bg_pane_g1

0x8ce9,	// (0x00012575) set_opt_bg_pane_g2

0xb70f,	// (0x00014f9b) set_opt_bg_pane_g3

0x8cf9,	// (0x00012585) set_opt_bg_pane_g4

0x8d01,	// (0x0001258d) set_opt_bg_pane_g5

0x8d09,	// (0x00012595) set_opt_bg_pane_g6

0xb717,	// (0x00014fa3) set_opt_bg_pane_g7

0xb71f,	// (0x00014fab) set_opt_bg_pane_g8

0xb727,	// (0x00014fb3) set_opt_bg_pane_g9

0x0008,

0xf96f,	// (0x000191fb) set_opt_bg_pane_g

0xb702,	// (0x00014f8e) slider_set_pane_g1

0x6d09,	// (0x00010595) slider_set_pane_g2

0x0006,

0xf960,	// (0x000191ec) slider_set_pane_g

0x6ca5,	// (0x00010531) volume_set_pane_g1

0x6cad,	// (0x00010539) volume_set_pane_g2

0x6cb5,	// (0x00010541) volume_set_pane_g3

0x6cbd,	// (0x00010549) volume_set_pane_g4

0x6cc5,	// (0x00010551) volume_set_pane_g5

0x6ccd,	// (0x00010559) volume_set_pane_g6

0x6cd5,	// (0x00010561) volume_set_pane_g7

0x6cdd,	// (0x00010569) volume_set_pane_g8

0x6ce5,	// (0x00010571) volume_set_pane_g9

0x6ced,	// (0x00010579) volume_set_pane_g10

0x0009,

0xf938,	// (0x000191c4) volume_set_pane_g

0x7e5f,	// (0x000116eb) indicator_pane_ParamLimits

0x7e5f,	// (0x000116eb) indicator_pane

0x7e6b,	// (0x000116f7) main_idle_pane_g2_ParamLimits

0x7e6b,	// (0x000116f7) main_idle_pane_g2

0x7e93,	// (0x0001171f) main_pane_idle_g1_ParamLimits

0x7e93,	// (0x0001171f) main_pane_idle_g1

0x7ea0,	// (0x0001172c) popup_clock_digital_analogue_window_ParamLimits

0x7ea0,	// (0x0001172c) popup_clock_digital_analogue_window

0x7eb7,	// (0x00011743) soft_indicator_pane_ParamLimits

0x7eb7,	// (0x00011743) soft_indicator_pane

0x7ec3,	// (0x0001174f) wallpaper_pane_ParamLimits

0x7ec3,	// (0x0001174f) wallpaper_pane

0x7d02,	// (0x0001158e) wallpaper_pane_g1

0x7ed7,	// (0x00011763) indicator_pane_g1_ParamLimits

0x7ed7,	// (0x00011763) indicator_pane_g1

0xbbea,	// (0x00015476) navi_navi_icon_text_pane_srt_g1

0x7ef2,	// (0x0001177e) soft_indicator_pane_t1

0x7f0c,	// (0x00011798) aid_ps_area_pane

0x7f1d,	// (0x000117a9) aid_ps_clock_pane

0x7f2b,	// (0x000117b7) aid_ps_indicator_pane

0x7f37,	// (0x000117c3) indicator_ps_pane_ParamLimits

0x7f37,	// (0x000117c3) indicator_ps_pane

0x7f46,	// (0x000117d2) power_save_pane_g1_ParamLimits

0x7f46,	// (0x000117d2) power_save_pane_g1

0x7f52,	// (0x000117de) power_save_pane_g2_ParamLimits

0x7f52,	// (0x000117de) power_save_pane_g2

0x598a,	// (0x0000f216) aid_navinavi_width_pane

0x7f0c,	// (0x00011798) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00018dfc) power_save_pane_g_ParamLimits

0xf570,	// (0x00018dfc) power_save_pane_g

0x7f60,	// (0x000117ec) power_save_pane_t1_ParamLimits

0x7f60,	// (0x000117ec) power_save_pane_t1

0x7f1d,	// (0x000117a9) aid_ps_clock_pane_ParamLimits

0x7f2b,	// (0x000117b7) aid_ps_indicator_pane_ParamLimits

0x7f72,	// (0x000117fe) power_save_pane_t4_ParamLimits

0x7f72,	// (0x000117fe) power_save_pane_t4

0x0001,

0xf575,	// (0x00018e01) power_save_pane_t_ParamLimits

0xf575,	// (0x00018e01) power_save_pane_t

0x7f9c,	// (0x00011828) power_save_t3_ParamLimits

0x7f9c,	// (0x00011828) power_save_t3

0x7f87,	// (0x00011813) power_save_t2_ParamLimits

0x7f87,	// (0x00011813) power_save_t2

0x7fb1,	// (0x0001183d) indicator_ps_pane_g1

0x7fba,	// (0x00011846) ai_gene_pane_ParamLimits

0x7fba,	// (0x00011846) ai_gene_pane

0x7fc6,	// (0x00011852) ai_links_pane_ParamLimits

0x7fc6,	// (0x00011852) ai_links_pane

0x7fd2,	// (0x0001185e) indicator_pane_cp1_ParamLimits

0x7fd2,	// (0x0001185e) indicator_pane_cp1

0x7fde,	// (0x0001186a) main_pane_idle_g1_cp_ParamLimits

0x7fde,	// (0x0001186a) main_pane_idle_g1_cp

0x7fea,	// (0x00011876) popup_ai_links_title_window

0x7ff3,	// (0x0001187f) soft_indicator_pane_cp1_ParamLimits

0x7ff3,	// (0x0001187f) soft_indicator_pane_cp1

0xb4c8,	// (0x00014d54) ai_links_pane_g1

0xb4d1,	// (0x00014d5d) grid_ai_links_pane

0xb4ab,	// (0x00014d37) ai_gene_pane_1

0xb4b6,	// (0x00014d42) ai_gene_pane_2

0xb4bf,	// (0x00014d4b) list_highlight_pane_cp4

0xb48f,	// (0x00014d1b) cell_ai_link_pane_ParamLimits

0xb48f,	// (0x00014d1b) cell_ai_link_pane

0xb487,	// (0x00014d13) cell_ai_link_pane_g1

0x8217,	// (0x00011aa3) cell_ai_link_pane_g2

0x0001,

0xf913,	// (0x0001919f) cell_ai_link_pane_g

0x7d0c,	// (0x00011598) grid_highlight_cp2

0x7d0c,	// (0x00011598) bg_popup_sub_pane_cp1

0x800d,	// (0x00011899) popup_ai_links_title_window_t1

0xb3d7,	// (0x00014c63) ai_gene_pane_1_g1_ParamLimits

0xb3d7,	// (0x00014c63) ai_gene_pane_1_g1

0xb3e3,	// (0x00014c6f) ai_gene_pane_1_g2_ParamLimits

0xb3e3,	// (0x00014c6f) ai_gene_pane_1_g2

0x0001,

0xf909,	// (0x00019195) ai_gene_pane_1_g_ParamLimits

0xf909,	// (0x00019195) ai_gene_pane_1_g

0xb3f0,	// (0x00014c7c) ai_gene_pane_1_t1_ParamLimits

0xb3f0,	// (0x00014c7c) ai_gene_pane_1_t1

0xb424,	// (0x00014cb0) grid_ai_soft_ind_pane

0xb3c2,	// (0x00014c4e) ai_gene_pane_2_t1_ParamLimits

0xb3c2,	// (0x00014c4e) ai_gene_pane_2_t1

0x801c,	// (0x000118a8) main_pane_empty_t1_ParamLimits

0x801c,	// (0x000118a8) main_pane_empty_t1

0x8034,	// (0x000118c0) main_pane_empty_t2_ParamLimits

0x8034,	// (0x000118c0) main_pane_empty_t2

0x8049,	// (0x000118d5) main_pane_empty_t3_ParamLimits

0x8049,	// (0x000118d5) main_pane_empty_t3

0x805b,	// (0x000118e7) main_pane_empty_t4_ParamLimits

0x805b,	// (0x000118e7) main_pane_empty_t4

0x806d,	// (0x000118f9) main_pane_empty_t5_ParamLimits

0x806d,	// (0x000118f9) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00018e06) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00018e06) main_pane_empty_t

0x8dc0,	// (0x0001264c) bg_popup_window_pane_ParamLimits

0x8dc0,	// (0x0001264c) bg_popup_window_pane

0xb132,	// (0x000149be) find_popup_pane_cp2_ParamLimits

0xb132,	// (0x000149be) find_popup_pane_cp2

0xb13e,	// (0x000149ca) heading_pane_ParamLimits

0xb13e,	// (0x000149ca) heading_pane

0x7d0c,	// (0x00011598) bg_popup_sub_pane

0xb0ac,	// (0x00014938) bg_popup_window_pane_g1_ParamLimits

0xb0ac,	// (0x00014938) bg_popup_window_pane_g1

0xb0b8,	// (0x00014944) bg_popup_window_pane_g2_ParamLimits

0xb0b8,	// (0x00014944) bg_popup_window_pane_g2

0xb0c4,	// (0x00014950) bg_popup_window_pane_g3_ParamLimits

0xb0c4,	// (0x00014950) bg_popup_window_pane_g3

0xb0d0,	// (0x0001495c) bg_popup_window_pane_g4_ParamLimits

0xb0d0,	// (0x0001495c) bg_popup_window_pane_g4

0xb0dc,	// (0x00014968) bg_popup_window_pane_g5_ParamLimits

0xb0dc,	// (0x00014968) bg_popup_window_pane_g5

0xb0e8,	// (0x00014974) bg_popup_window_pane_g6_ParamLimits

0xb0e8,	// (0x00014974) bg_popup_window_pane_g6

0xb0f4,	// (0x00014980) bg_popup_window_pane_g7_ParamLimits

0xb0f4,	// (0x00014980) bg_popup_window_pane_g7

0xb100,	// (0x0001498c) bg_popup_window_pane_g8_ParamLimits

0xb100,	// (0x0001498c) bg_popup_window_pane_g8

0xb10c,	// (0x00014998) bg_popup_window_pane_g9_ParamLimits

0xb10c,	// (0x00014998) bg_popup_window_pane_g9

0xb118,	// (0x000149a4) bg_popup_window_pane_g10_ParamLimits

0xb118,	// (0x000149a4) bg_popup_window_pane_g10

0x0009,

0xf8d1,	// (0x0001915d) bg_popup_window_pane_g_ParamLimits

0xf8d1,	// (0x0001915d) bg_popup_window_pane_g

0xb041,	// (0x000148cd) bg_popup_heading_pane_ParamLimits

0xb041,	// (0x000148cd) bg_popup_heading_pane

0x6d91,	// (0x0001061d) tabs_4_passive_pane_cp_srt_ParamLimits

0x6d91,	// (0x0001061d) tabs_4_passive_pane_cp_srt

0x6da3,	// (0x0001062f) tabs_4_passive_pane_srt_ParamLimits

0xb055,	// (0x000148e1) heading_pane_g2

0x6da3,	// (0x0001062f) tabs_4_passive_pane_srt

0x9d30,	// (0x000135bc) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9d30,	// (0x000135bc) bg_passive_tab_pane_cp3_srt

0xb05d,	// (0x000148e9) heading_pane_t1_ParamLimits

0xb05d,	// (0x000148e9) heading_pane_t1

0xb074,	// (0x00014900) heading_pane_t2_ParamLimits

0xb074,	// (0x00014900) heading_pane_t2

0x0001,

0xf8cc,	// (0x00019158) heading_pane_t_ParamLimits

0xf8cc,	// (0x00019158) heading_pane_t

0xab6e,	// (0x000143fa) bg_popup_heading_pane_g1

0xac1d,	// (0x000144a9) bg_popup_heading_pane_g2

0xac27,	// (0x000144b3) bg_popup_heading_pane_g3

0xac31,	// (0x000144bd) bg_popup_heading_pane_g4

0xac3b,	// (0x000144c7) bg_popup_heading_pane_g5

0xac45,	// (0x000144d1) bg_popup_heading_pane_g6

0xac4d,	// (0x000144d9) bg_popup_heading_pane_g7

0xac55,	// (0x000144e1) bg_popup_heading_pane_g8

0xac5f,	// (0x000144eb) bg_popup_heading_pane_g9

0x0008,

0xf888,	// (0x00019114) bg_popup_heading_pane_g

0xa252,	// (0x00013ade) bg_popup_sub_pane_g1

0xa262,	// (0x00013aee) bg_popup_sub_pane_g2

0xa25a,	// (0x00013ae6) bg_popup_sub_pane_g3

0xa272,	// (0x00013afe) bg_popup_sub_pane_g4

0xa26a,	// (0x00013af6) bg_popup_sub_pane_g5

0xa27a,	// (0x00013b06) bg_popup_sub_pane_g6

0xa282,	// (0x00013b0e) bg_popup_sub_pane_g7

0xa292,	// (0x00013b1e) bg_popup_sub_pane_g8

0xa28a,	// (0x00013b16) bg_popup_sub_pane_g9

0x0008,

0xf862,	// (0x000190ee) bg_popup_sub_pane_g

0x8081,	// (0x0001190d) bg_popup_window_pane_cp5_ParamLimits

0x8081,	// (0x0001190d) bg_popup_window_pane_cp5

0x809d,	// (0x00011929) popup_note_window_g1_ParamLimits

0x809d,	// (0x00011929) popup_note_window_g1

0x80a9,	// (0x00011935) popup_note_window_t1_ParamLimits

0x80a9,	// (0x00011935) popup_note_window_t1

0x80bb,	// (0x00011947) popup_note_window_t2_ParamLimits

0x80bb,	// (0x00011947) popup_note_window_t2

0x80cd,	// (0x00011959) popup_note_window_t3_ParamLimits

0x80cd,	// (0x00011959) popup_note_window_t3

0x80df,	// (0x0001196b) popup_note_window_t4_ParamLimits

0x80df,	// (0x0001196b) popup_note_window_t4

0x8107,	// (0x00011993) popup_note_window_t5_ParamLimits

0x8107,	// (0x00011993) popup_note_window_t5

0x0004,

0xf585,	// (0x00018e11) popup_note_window_t_ParamLimits

0xf585,	// (0x00018e11) popup_note_window_t

0x812b,	// (0x000119b7) bg_popup_window_pane_cp6_ParamLimits

0x812b,	// (0x000119b7) bg_popup_window_pane_cp6

0xaae2,	// (0x0001436e) popup_note_image_window_g1_ParamLimits

0xaae2,	// (0x0001436e) popup_note_image_window_g1

0xaaee,	// (0x0001437a) popup_note_image_window_g2_ParamLimits

0xaaee,	// (0x0001437a) popup_note_image_window_g2

0x0001,

0xf856,	// (0x000190e2) popup_note_image_window_g_ParamLimits

0xf856,	// (0x000190e2) popup_note_image_window_g

0xab07,	// (0x00014393) popup_note_image_window_t1_ParamLimits

0xab07,	// (0x00014393) popup_note_image_window_t1

0xab20,	// (0x000143ac) popup_note_image_window_t2_ParamLimits

0xab20,	// (0x000143ac) popup_note_image_window_t2

0xab39,	// (0x000143c5) popup_note_image_window_t3_ParamLimits

0xab39,	// (0x000143c5) popup_note_image_window_t3

0x0002,

0xf85b,	// (0x000190e7) popup_note_image_window_t_ParamLimits

0xf85b,	// (0x000190e7) popup_note_image_window_t

0xa9a3,	// (0x0001422f) bg_popup_window_pane_cp7_ParamLimits

0xa9a3,	// (0x0001422f) bg_popup_window_pane_cp7

0xa9d3,	// (0x0001425f) popup_note_wait_window_g1_ParamLimits

0xa9d3,	// (0x0001425f) popup_note_wait_window_g1

0xa9df,	// (0x0001426b) popup_note_wait_window_g2_ParamLimits

0xa9df,	// (0x0001426b) popup_note_wait_window_g2

0x0002,

0xf844,	// (0x000190d0) popup_note_wait_window_g_ParamLimits

0xf844,	// (0x000190d0) popup_note_wait_window_g

0xa9f7,	// (0x00014283) popup_note_wait_window_t1_ParamLimits

0xa9f7,	// (0x00014283) popup_note_wait_window_t1

0xaa1e,	// (0x000142aa) popup_note_wait_window_t2_ParamLimits

0xaa1e,	// (0x000142aa) popup_note_wait_window_t2

0xaa3b,	// (0x000142c7) popup_note_wait_window_t3_ParamLimits

0xaa3b,	// (0x000142c7) popup_note_wait_window_t3

0xaa4e,	// (0x000142da) popup_note_wait_window_t4_ParamLimits

0xaa4e,	// (0x000142da) popup_note_wait_window_t4

0x0004,

0xf84b,	// (0x000190d7) popup_note_wait_window_t_ParamLimits

0xf84b,	// (0x000190d7) popup_note_wait_window_t

0xaa73,	// (0x000142ff) wait_bar_pane_ParamLimits

0xaa73,	// (0x000142ff) wait_bar_pane

0x7d0c,	// (0x00011598) wait_anim_pane

0x7d0c,	// (0x00011598) wait_border_pane

0x7d02,	// (0x0001158e) wait_anim_pane_g1

0x7d02,	// (0x0001158e) wait_anim_pane_g2

0x0001,

0xf704,	// (0x00018f90) wait_anim_pane_g

0xa947,	// (0x000141d3) wait_border_pane_g1

0xa952,	// (0x000141de) wait_border_pane_g2

0xa95b,	// (0x000141e7) wait_border_pane_g3

0x0002,

0xf83d,	// (0x000190c9) wait_border_pane_g

0xa7b7,	// (0x00014043) bg_popup_window_pane_cp16_ParamLimits

0xa7b7,	// (0x00014043) bg_popup_window_pane_cp16

0xa8b7,	// (0x00014143) indicator_popup_pane_cp4_ParamLimits

0xa8b7,	// (0x00014143) indicator_popup_pane_cp4

0xa8cb,	// (0x00014157) popup_query_data_window_t1_ParamLimits

0xa8cb,	// (0x00014157) popup_query_data_window_t1

0xa8dd,	// (0x00014169) popup_query_data_window_t2_ParamLimits

0xa8dd,	// (0x00014169) popup_query_data_window_t2

0xa8f6,	// (0x00014182) popup_query_data_window_t3_ParamLimits

0xa8f6,	// (0x00014182) popup_query_data_window_t3

0x0002,

0xf836,	// (0x000190c2) popup_query_data_window_t_ParamLimits

0xf836,	// (0x000190c2) popup_query_data_window_t

0xa910,	// (0x0001419c) query_popup_data_pane_ParamLimits

0xa910,	// (0x0001419c) query_popup_data_pane

0xa924,	// (0x000141b0) query_popup_data_pane_cp1_ParamLimits

0xa924,	// (0x000141b0) query_popup_data_pane_cp1

0xa7b7,	// (0x00014043) bg_popup_window_pane_cp10_ParamLimits

0xa7b7,	// (0x00014043) bg_popup_window_pane_cp10

0xa7e9,	// (0x00014075) indicator_popup_pane_ParamLimits

0xa7e9,	// (0x00014075) indicator_popup_pane

0xa80b,	// (0x00014097) popup_query_code_window_t1_ParamLimits

0xa80b,	// (0x00014097) popup_query_code_window_t1

0xa825,	// (0x000140b1) popup_query_code_window_t2_ParamLimits

0xa825,	// (0x000140b1) popup_query_code_window_t2

0xa86e,	// (0x000140fa) popup_query_code_window_t3_ParamLimits

0xa86e,	// (0x000140fa) popup_query_code_window_t3

0x0002,

0xf82f,	// (0x000190bb) popup_query_code_window_t_ParamLimits

0xf82f,	// (0x000190bb) popup_query_code_window_t

0xa89d,	// (0x00014129) query_popup_pane_ParamLimits

0xa89d,	// (0x00014129) query_popup_pane

0x812b,	// (0x000119b7) bg_popup_window_pane_cp15_ParamLimits

0x812b,	// (0x000119b7) bg_popup_window_pane_cp15

0x8149,	// (0x000119d5) indicator_popup_pane_cp1_ParamLimits

0x8149,	// (0x000119d5) indicator_popup_pane_cp1

0x815c,	// (0x000119e8) indicator_popup_pane_cp2_ParamLimits

0x815c,	// (0x000119e8) indicator_popup_pane_cp2

0x816f,	// (0x000119fb) popup_query_data_code_window_g1_ParamLimits

0x816f,	// (0x000119fb) popup_query_data_code_window_g1

0x8182,	// (0x00011a0e) popup_query_data_code_window_t1_ParamLimits

0x8182,	// (0x00011a0e) popup_query_data_code_window_t1

0x8194,	// (0x00011a20) popup_query_data_code_window_t2_ParamLimits

0x8194,	// (0x00011a20) popup_query_data_code_window_t2

0x81a6,	// (0x00011a32) popup_query_data_code_window_t3_ParamLimits

0x81a6,	// (0x00011a32) popup_query_data_code_window_t3

0x81bc,	// (0x00011a48) popup_query_data_code_window_t4_ParamLimits

0x81bc,	// (0x00011a48) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00018e1c) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00018e1c) popup_query_data_code_window_t

0x6a5a,	// (0x000102e6) list_single_midp_graphic_pane_g3

0x81d4,	// (0x00011a60) query_popup_data_pane_cp2_ParamLimits

0x81e7,	// (0x00011a73) query_popup_pane_cp2_ParamLimits

0x81e7,	// (0x00011a73) query_popup_pane_cp2

0x7d0c,	// (0x00011598) bg_popup_window_pane_cp11

0xa7af,	// (0x0001403b) heading_pane_cp5

0x82cf,	// (0x00011b5b) listscroll_popup_info_pane

0x7d0c,	// (0x00011598) input_focus_pane_cp3

0x81fa,	// (0x00011a86) query_popup_pane_t1

0x8208,	// (0x00011a94) list_popup_info_pane_ParamLimits

0x8208,	// (0x00011a94) list_popup_info_pane

0x8217,	// (0x00011aa3) listscroll_popup_info_pane_g1

0x821f,	// (0x00011aab) scroll_pane_cp7

0x8229,	// (0x00011ab5) popup_info_list_pane_t1_ParamLimits

0x8229,	// (0x00011ab5) popup_info_list_pane_t1

0x8243,	// (0x00011acf) popup_info_list_pane_t2_ParamLimits

0x8243,	// (0x00011acf) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00018e25) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00018e25) popup_info_list_pane_t

0x7d0c,	// (0x00011598) bg_popup_window_pane_cp12

0xbc04,	// (0x00015490) find_popup_pane

0x7dec,	// (0x00011678) bg_popup_window_pane_cp3

0x825d,	// (0x00011ae9) heading_pane_cp3

0x8269,	// (0x00011af5) listscroll_popup_graphic_pane

0x7d0c,	// (0x00011598) bg_popup_window_pane_cp4

0x82c5,	// (0x00011b51) heading_pane_cp4

0x82cf,	// (0x00011b5b) listscroll_popup_colour_pane

0x82d7,	// (0x00011b63) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x82d7,	// (0x00011b63) cell_large_graphic_colour_none_popup_pane

0x82eb,	// (0x00011b77) grid_large_graphic_colour_popup_pane_ParamLimits

0x82eb,	// (0x00011b77) grid_large_graphic_colour_popup_pane

0x8313,	// (0x00011b9f) listscroll_popup_colour_pane_g1_ParamLimits

0x8313,	// (0x00011b9f) listscroll_popup_colour_pane_g1

0x832a,	// (0x00011bb6) listscroll_popup_colour_pane_g2_ParamLimits

0x832a,	// (0x00011bb6) listscroll_popup_colour_pane_g2

0x8341,	// (0x00011bcd) listscroll_popup_colour_pane_g3_ParamLimits

0x8341,	// (0x00011bcd) listscroll_popup_colour_pane_g3

0x8351,	// (0x00011bdd) listscroll_popup_colour_pane_g4_ParamLimits

0x8351,	// (0x00011bdd) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00018e2a) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00018e2a) listscroll_popup_colour_pane_g

0x8360,	// (0x00011bec) scroll_pane_cp6_ParamLimits

0x8360,	// (0x00011bec) scroll_pane_cp6

0x8372,	// (0x00011bfe) cell_large_graphic_colour_popup_pane_ParamLimits

0x8372,	// (0x00011bfe) cell_large_graphic_colour_popup_pane

0x8391,	// (0x00011c1d) cell_large_graphic_colour_none_popup_pane_t1

0x7d0c,	// (0x00011598) grid_highlight_pane_cp5

0x83a0,	// (0x00011c2c) cell_large_graphic_colour_popup_pane_g1

0x83a8,	// (0x00011c34) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00018e33) cell_large_graphic_colour_popup_pane_g

0x83b0,	// (0x00011c3c) cell_large_graphic_colour_popup_pane_g2_copy1

0x83b9,	// (0x00011c45) grid_highlight_pane_cp4

0x83c1,	// (0x00011c4d) bg_popup_window_pane_cp8_ParamLimits

0x83c1,	// (0x00011c4d) bg_popup_window_pane_cp8

0x83dc,	// (0x00011c68) popup_snote_single_text_window_g1_ParamLimits

0x83dc,	// (0x00011c68) popup_snote_single_text_window_g1

0x83ee,	// (0x00011c7a) popup_snote_single_text_window_t1_ParamLimits

0x83ee,	// (0x00011c7a) popup_snote_single_text_window_t1

0x8401,	// (0x00011c8d) popup_snote_single_text_window_t2_ParamLimits

0x8401,	// (0x00011c8d) popup_snote_single_text_window_t2

0x8414,	// (0x00011ca0) popup_snote_single_text_window_t3_ParamLimits

0x8414,	// (0x00011ca0) popup_snote_single_text_window_t3

0x844d,	// (0x00011cd9) popup_snote_single_text_window_t4_ParamLimits

0x844d,	// (0x00011cd9) popup_snote_single_text_window_t4

0x8481,	// (0x00011d0d) popup_snote_single_text_window_t5_ParamLimits

0x8481,	// (0x00011d0d) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00018e38) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00018e38) popup_snote_single_text_window_t

0x84b0,	// (0x00011d3c) bg_popup_window_pane_cp9_ParamLimits

0x84b0,	// (0x00011d3c) bg_popup_window_pane_cp9

0x83dc,	// (0x00011c68) popup_snote_single_graphic_window_g1_ParamLimits

0x83dc,	// (0x00011c68) popup_snote_single_graphic_window_g1

0x84be,	// (0x00011d4a) popup_snote_single_graphic_window_g2_ParamLimits

0x84be,	// (0x00011d4a) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00018e43) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00018e43) popup_snote_single_graphic_window_g

0x84ca,	// (0x00011d56) popup_snote_single_graphic_window_t1_ParamLimits

0x84ca,	// (0x00011d56) popup_snote_single_graphic_window_t1

0x84dd,	// (0x00011d69) popup_snote_single_graphic_window_t2_ParamLimits

0x84dd,	// (0x00011d69) popup_snote_single_graphic_window_t2

0x84f0,	// (0x00011d7c) popup_snote_single_graphic_window_t3_ParamLimits

0x84f0,	// (0x00011d7c) popup_snote_single_graphic_window_t3

0x8529,	// (0x00011db5) popup_snote_single_graphic_window_t4_ParamLimits

0x8529,	// (0x00011db5) popup_snote_single_graphic_window_t4

0x855d,	// (0x00011de9) popup_snote_single_graphic_window_t5_ParamLimits

0x855d,	// (0x00011de9) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00018e48) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00018e48) popup_snote_single_graphic_window_t

0xbb48,	// (0x000153d4) grid_graphic_popup_pane_ParamLimits

0xbb48,	// (0x000153d4) grid_graphic_popup_pane

0xbb70,	// (0x000153fc) listscroll_popup_graphic_pane_g1_ParamLimits

0xbb70,	// (0x000153fc) listscroll_popup_graphic_pane_g1

0xbb84,	// (0x00015410) listscroll_popup_graphic_pane_g2_ParamLimits

0xbb84,	// (0x00015410) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ac,	// (0x00019238) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ac,	// (0x00019238) listscroll_popup_graphic_pane_g

0xbb98,	// (0x00015424) scroll_pane_cp5

0xbaf3,	// (0x0001537f) cell_graphic_popup_pane_ParamLimits

0xbaf3,	// (0x0001537f) cell_graphic_popup_pane

0xbad4,	// (0x00015360) cell_graphic_popup_pane_g1

0xbadc,	// (0x00015368) cell_graphic_popup_pane_g2

0x83b0,	// (0x00011c3c) cell_graphic_popup_pane_g3

0x0002,

0xf9a5,	// (0x00019231) cell_graphic_popup_pane_g

0xbae5,	// (0x00015371) cell_graphic_popup_pane_t2

0x83b9,	// (0x00011c45) grid_highlight_pane_cp3

0x859e,	// (0x00011e2a) list_gen_pane_ParamLimits

0x859e,	// (0x00011e2a) list_gen_pane

0x85d0,	// (0x00011e5c) scroll_pane

0xba36,	// (0x000152c2) bg_list_pane_g1_ParamLimits

0xba36,	// (0x000152c2) bg_list_pane_g1

0xba51,	// (0x000152dd) bg_list_pane_g2_ParamLimits

0xba51,	// (0x000152dd) bg_list_pane_g2

0xba64,	// (0x000152f0) bg_list_pane_g3_ParamLimits

0xba64,	// (0x000152f0) bg_list_pane_g3

0xba76,	// (0x00015302) bg_list_pane_g4_ParamLimits

0xba76,	// (0x00015302) bg_list_pane_g4

0xba88,	// (0x00015314) bg_list_pane_g5_ParamLimits

0xba88,	// (0x00015314) bg_list_pane_g5

0x0004,

0xf99a,	// (0x00019226) bg_list_pane_g_ParamLimits

0xf99a,	// (0x00019226) bg_list_pane_g

0xb92f,	// (0x000151bb) list_double2_graphic_large_graphic_pane_ParamLimits

0xb92f,	// (0x000151bb) list_double2_graphic_large_graphic_pane

0xb92f,	// (0x000151bb) list_double2_graphic_pane_ParamLimits

0xb92f,	// (0x000151bb) list_double2_graphic_pane

0xb92f,	// (0x000151bb) list_double2_large_graphic_pane_ParamLimits

0xb92f,	// (0x000151bb) list_double2_large_graphic_pane

0xb92f,	// (0x000151bb) list_double2_pane_ParamLimits

0xb92f,	// (0x000151bb) list_double2_pane

0xb92f,	// (0x000151bb) list_double_graphic_heading_pane_ParamLimits

0xb92f,	// (0x000151bb) list_double_graphic_heading_pane

0xb92f,	// (0x000151bb) list_double_graphic_pane_ParamLimits

0xb92f,	// (0x000151bb) list_double_graphic_pane

0xb92f,	// (0x000151bb) list_double_heading_pane_ParamLimits

0xb92f,	// (0x000151bb) list_double_heading_pane

0xb92f,	// (0x000151bb) list_double_large_graphic_pane_ParamLimits

0xb92f,	// (0x000151bb) list_double_large_graphic_pane

0xb92f,	// (0x000151bb) list_double_number_pane_ParamLimits

0xb92f,	// (0x000151bb) list_double_number_pane

0xb92f,	// (0x000151bb) list_double_pane_ParamLimits

0xb92f,	// (0x000151bb) list_double_pane

0xb92f,	// (0x000151bb) list_double_time_pane_ParamLimits

0xb92f,	// (0x000151bb) list_double_time_pane

0xb92f,	// (0x000151bb) list_setting_number_pane_ParamLimits

0xb92f,	// (0x000151bb) list_setting_number_pane

0xb92f,	// (0x000151bb) list_setting_pane_ParamLimits

0xb92f,	// (0x000151bb) list_setting_pane

0xb992,	// (0x0001521e) list_single_2graphic_pane_ParamLimits

0xb992,	// (0x0001521e) list_single_2graphic_pane

0xb992,	// (0x0001521e) list_single_graphic_heading_pane_ParamLimits

0xb992,	// (0x0001521e) list_single_graphic_heading_pane

0xb992,	// (0x0001521e) list_single_graphic_pane_ParamLimits

0xb992,	// (0x0001521e) list_single_graphic_pane

0xb992,	// (0x0001521e) list_single_heading_pane_ParamLimits

0xb992,	// (0x0001521e) list_single_heading_pane

0xba13,	// (0x0001529f) list_single_large_graphic_pane_ParamLimits

0xba13,	// (0x0001529f) list_single_large_graphic_pane

0xb992,	// (0x0001521e) list_single_number_heading_pane_ParamLimits

0xb992,	// (0x0001521e) list_single_number_heading_pane

0xb992,	// (0x0001521e) list_single_number_pane_ParamLimits

0xb992,	// (0x0001521e) list_single_number_pane

0xb992,	// (0x0001521e) list_single_pane_ParamLimits

0xb992,	// (0x0001521e) list_single_pane

0x7d0c,	// (0x00011598) list_highlight_pane_cp1

0x8610,	// (0x00011e9c) list_single_pane_g1_ParamLimits

0x8610,	// (0x00011e9c) list_single_pane_g1

0x861c,	// (0x00011ea8) list_single_pane_g2_ParamLimits

0x861c,	// (0x00011ea8) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00018e5a) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00018e5a) list_single_pane_g

0xb8e8,	// (0x00015174) list_single_pane_t1_ParamLimits

0xb8e8,	// (0x00015174) list_single_pane_t1

0x8610,	// (0x00011e9c) list_single_number_pane_g1_ParamLimits

0x8610,	// (0x00011e9c) list_single_number_pane_g1

0x861c,	// (0x00011ea8) list_single_number_pane_g2_ParamLimits

0x861c,	// (0x00011ea8) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00018e5a) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00018e5a) list_single_number_pane_g

0xa1e0,	// (0x00013a6c) list_single_number_pane_t1_ParamLimits

0xa1e0,	// (0x00013a6c) list_single_number_pane_t1

0xb694,	// (0x00014f20) list_single_number_pane_t2_ParamLimits

0xb694,	// (0x00014f20) list_single_number_pane_t2

0x0001,

0xf95b,	// (0x000191e7) list_single_number_pane_t_ParamLimits

0xf95b,	// (0x000191e7) list_single_number_pane_t

0x8604,	// (0x00011e90) list_single_graphic_pane_g1_ParamLimits

0x8604,	// (0x00011e90) list_single_graphic_pane_g1

0x8610,	// (0x00011e9c) list_single_graphic_pane_g2_ParamLimits

0x8610,	// (0x00011e9c) list_single_graphic_pane_g2

0x861c,	// (0x00011ea8) list_single_graphic_pane_g3_ParamLimits

0x861c,	// (0x00011ea8) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00018e53) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00018e53) list_single_graphic_pane_g

0x8628,	// (0x00011eb4) list_single_graphic_pane_t1_ParamLimits

0x8628,	// (0x00011eb4) list_single_graphic_pane_t1

0x8610,	// (0x00011e9c) list_single_heading_pane_g1_ParamLimits

0x8610,	// (0x00011e9c) list_single_heading_pane_g1

0x861c,	// (0x00011ea8) list_single_heading_pane_g2_ParamLimits

0x861c,	// (0x00011ea8) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00018e5a) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00018e5a) list_single_heading_pane_g

0x863e,	// (0x00011eca) list_single_heading_pane_t1_ParamLimits

0x863e,	// (0x00011eca) list_single_heading_pane_t1

0x8654,	// (0x00011ee0) list_single_heading_pane_t2_ParamLimits

0x8654,	// (0x00011ee0) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00018e5f) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00018e5f) list_single_heading_pane_t

0x8610,	// (0x00011e9c) list_single_number_heading_pane_g1_ParamLimits

0x8610,	// (0x00011e9c) list_single_number_heading_pane_g1

0x861c,	// (0x00011ea8) list_single_number_heading_pane_g2_ParamLimits

0x861c,	// (0x00011ea8) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00018e5a) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00018e5a) list_single_number_heading_pane_g

0x863e,	// (0x00011eca) list_single_number_heading_pane_t1_ParamLimits

0x863e,	// (0x00011eca) list_single_number_heading_pane_t1

0x8666,	// (0x00011ef2) list_single_number_heading_pane_t2_ParamLimits

0x8666,	// (0x00011ef2) list_single_number_heading_pane_t2

0x8678,	// (0x00011f04) list_single_number_heading_pane_t3_ParamLimits

0x8678,	// (0x00011f04) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x00018e64) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x00018e64) list_single_number_heading_pane_t

0x868a,	// (0x00011f16) list_single_graphic_heading_pane_g1_ParamLimits

0x868a,	// (0x00011f16) list_single_graphic_heading_pane_g1

0x8696,	// (0x00011f22) list_single_graphic_heading_pane_g4_ParamLimits

0x8696,	// (0x00011f22) list_single_graphic_heading_pane_g4

0x861c,	// (0x00011ea8) list_single_graphic_heading_pane_g5_ParamLimits

0x861c,	// (0x00011ea8) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x00018e6b) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x00018e6b) list_single_graphic_heading_pane_g

0x863e,	// (0x00011eca) list_single_graphic_heading_pane_t1_ParamLimits

0x863e,	// (0x00011eca) list_single_graphic_heading_pane_t1

0x86a7,	// (0x00011f33) list_single_graphic_heading_pane_t2_ParamLimits

0x86a7,	// (0x00011f33) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x00018e72) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x00018e72) list_single_graphic_heading_pane_t

0x86b9,	// (0x00011f45) list_single_large_graphic_pane_g1_ParamLimits

0x86b9,	// (0x00011f45) list_single_large_graphic_pane_g1

0x86c5,	// (0x00011f51) list_single_large_graphic_pane_g2_ParamLimits

0x86c5,	// (0x00011f51) list_single_large_graphic_pane_g2

0x86d1,	// (0x00011f5d) list_single_large_graphic_pane_g3_ParamLimits

0x86d1,	// (0x00011f5d) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00018e77) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00018e77) list_single_large_graphic_pane_g

0xa952,	// (0x000141de) wait_border_pane_g2_copy1

0x86dd,	// (0x00011f69) list_single_large_graphic_pane_g4_cp2

0x86e5,	// (0x00011f71) list_single_large_graphic_pane_t1_ParamLimits

0x86e5,	// (0x00011f71) list_single_large_graphic_pane_t1

0x86fb,	// (0x00011f87) list_double_pane_g1_ParamLimits

0x86fb,	// (0x00011f87) list_double_pane_g1

0x8707,	// (0x00011f93) list_double_pane_g2_ParamLimits

0x8707,	// (0x00011f93) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00018e7e) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00018e7e) list_double_pane_g

0x8713,	// (0x00011f9f) list_double_pane_t1_ParamLimits

0x8713,	// (0x00011f9f) list_double_pane_t1

0x8729,	// (0x00011fb5) list_double_pane_t2_ParamLimits

0x8729,	// (0x00011fb5) list_double_pane_t2

0x0001,

0xf5f7,	// (0x00018e83) list_double_pane_t_ParamLimits

0xf5f7,	// (0x00018e83) list_double_pane_t

0x873b,	// (0x00011fc7) list_double2_pane_g1_ParamLimits

0x873b,	// (0x00011fc7) list_double2_pane_g1

0x874c,	// (0x00011fd8) list_double2_pane_g2_ParamLimits

0x874c,	// (0x00011fd8) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x00018e88) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x00018e88) list_double2_pane_g

0x8758,	// (0x00011fe4) list_double2_pane_t1_ParamLimits

0x8758,	// (0x00011fe4) list_double2_pane_t1

0x876e,	// (0x00011ffa) list_double2_pane_t2_ParamLimits

0x876e,	// (0x00011ffa) list_double2_pane_t2

0x0001,

0xf601,	// (0x00018e8d) list_double2_pane_t_ParamLimits

0xf601,	// (0x00018e8d) list_double2_pane_t

0x86fb,	// (0x00011f87) list_double_number_pane_g1_ParamLimits

0x86fb,	// (0x00011f87) list_double_number_pane_g1

0x8707,	// (0x00011f93) list_double_number_pane_g2_ParamLimits

0x8707,	// (0x00011f93) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00018e7e) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00018e7e) list_double_number_pane_g

0x8780,	// (0x0001200c) list_double_number_pane_t1_ParamLimits

0x8780,	// (0x0001200c) list_double_number_pane_t1

0x8792,	// (0x0001201e) list_double_number_pane_t2_ParamLimits

0x8792,	// (0x0001201e) list_double_number_pane_t2

0x87a8,	// (0x00012034) list_double_number_pane_t3_ParamLimits

0x87a8,	// (0x00012034) list_double_number_pane_t3

0x0002,

0xf606,	// (0x00018e92) list_double_number_pane_t_ParamLimits

0xf606,	// (0x00018e92) list_double_number_pane_t

0x87ba,	// (0x00012046) list_double_graphic_pane_g1_ParamLimits

0x87ba,	// (0x00012046) list_double_graphic_pane_g1

0x87c6,	// (0x00012052) list_double_graphic_pane_g2_ParamLimits

0x87c6,	// (0x00012052) list_double_graphic_pane_g2

0x87d5,	// (0x00012061) list_double_graphic_pane_g3_ParamLimits

0x87d5,	// (0x00012061) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x00018e99) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x00018e99) list_double_graphic_pane_g

0x87ed,	// (0x00012079) list_double_graphic_pane_t1_ParamLimits

0x87ed,	// (0x00012079) list_double_graphic_pane_t1

0x8803,	// (0x0001208f) list_double_graphic_pane_t2_ParamLimits

0x8803,	// (0x0001208f) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x00018ea2) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x00018ea2) list_double_graphic_pane_t

0x8815,	// (0x000120a1) list_double2_graphic_pane_g1_ParamLimits

0x8815,	// (0x000120a1) list_double2_graphic_pane_g1

0x8821,	// (0x000120ad) list_double2_graphic_pane_g2_ParamLimits

0x8821,	// (0x000120ad) list_double2_graphic_pane_g2

0x874c,	// (0x00011fd8) list_double2_graphic_pane_g3_ParamLimits

0x874c,	// (0x00011fd8) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x00018ea7) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x00018ea7) list_double2_graphic_pane_g

0x882d,	// (0x000120b9) list_double2_graphic_pane_t1_ParamLimits

0x882d,	// (0x000120b9) list_double2_graphic_pane_t1

0x8843,	// (0x000120cf) list_double2_graphic_pane_t2_ParamLimits

0x8843,	// (0x000120cf) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00018eae) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00018eae) list_double2_graphic_pane_t

0x8855,	// (0x000120e1) list_double_large_graphic_pane_g1_ParamLimits

0x8855,	// (0x000120e1) list_double_large_graphic_pane_g1

0x8880,	// (0x0001210c) list_double_large_graphic_pane_g2_ParamLimits

0x8880,	// (0x0001210c) list_double_large_graphic_pane_g2

0x8707,	// (0x00011f93) list_double_large_graphic_pane_g3_ParamLimits

0x8707,	// (0x00011f93) list_double_large_graphic_pane_g3

0x8891,	// (0x0001211d) list_double_large_graphic_pane_g4_ParamLimits

0x8891,	// (0x0001211d) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x00018eb3) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x00018eb3) list_double_large_graphic_pane_g

0x88b9,	// (0x00012145) list_double_large_graphic_pane_t1_ParamLimits

0x88b9,	// (0x00012145) list_double_large_graphic_pane_t1

0x88d2,	// (0x0001215e) list_double_large_graphic_pane_t2_ParamLimits

0x88d2,	// (0x0001215e) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00018ebe) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00018ebe) list_double_large_graphic_pane_t

0x88e4,	// (0x00012170) list_double2_large_graphic_pane_g1_ParamLimits

0x88e4,	// (0x00012170) list_double2_large_graphic_pane_g1

0x873b,	// (0x00011fc7) list_double2_large_graphic_pane_g2_ParamLimits

0x873b,	// (0x00011fc7) list_double2_large_graphic_pane_g2

0x874c,	// (0x00011fd8) list_double2_large_graphic_pane_g3_ParamLimits

0x874c,	// (0x00011fd8) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00018ec3) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00018ec3) list_double2_large_graphic_pane_g

0x88f0,	// (0x0001217c) list_double2_large_graphic_pane_t1_ParamLimits

0x88f0,	// (0x0001217c) list_double2_large_graphic_pane_t1

0x8906,	// (0x00012192) list_double2_large_graphic_pane_t2_ParamLimits

0x8906,	// (0x00012192) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x00018eca) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x00018eca) list_double2_large_graphic_pane_t

0x8918,	// (0x000121a4) list_double_heading_pane_g1_ParamLimits

0x8918,	// (0x000121a4) list_double_heading_pane_g1

0x8929,	// (0x000121b5) list_double_heading_pane_g2_ParamLimits

0x8929,	// (0x000121b5) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00018ecf) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00018ecf) list_double_heading_pane_g

0x8935,	// (0x000121c1) list_double_heading_pane_t1_ParamLimits

0x8935,	// (0x000121c1) list_double_heading_pane_t1

0x876e,	// (0x00011ffa) list_double_heading_pane_t2_ParamLimits

0x876e,	// (0x00011ffa) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x00018ed4) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x00018ed4) list_double_heading_pane_t

0x894b,	// (0x000121d7) list_double_graphic_heading_pane_g1_ParamLimits

0x894b,	// (0x000121d7) list_double_graphic_heading_pane_g1

0x8918,	// (0x000121a4) list_double_graphic_heading_pane_g2_ParamLimits

0x8918,	// (0x000121a4) list_double_graphic_heading_pane_g2

0x8929,	// (0x000121b5) list_double_graphic_heading_pane_g3_ParamLimits

0x8929,	// (0x000121b5) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x00018ed9) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x00018ed9) list_double_graphic_heading_pane_g

0x8957,	// (0x000121e3) list_double_graphic_heading_pane_t1_ParamLimits

0x8957,	// (0x000121e3) list_double_graphic_heading_pane_t1

0x8843,	// (0x000120cf) list_double_graphic_heading_pane_t2_ParamLimits

0x8843,	// (0x000120cf) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00018ee0) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00018ee0) list_double_graphic_heading_pane_t

0x8880,	// (0x0001210c) list_double_time_pane_g1_ParamLimits

0x8880,	// (0x0001210c) list_double_time_pane_g1

0x8707,	// (0x00011f93) list_double_time_pane_g2_ParamLimits

0x8707,	// (0x00011f93) list_double_time_pane_g2

0x0001,

0xf659,	// (0x00018ee5) list_double_time_pane_g_ParamLimits

0xf659,	// (0x00018ee5) list_double_time_pane_g

0x896d,	// (0x000121f9) list_double_time_pane_t1_ParamLimits

0x896d,	// (0x000121f9) list_double_time_pane_t1

0x8983,	// (0x0001220f) list_double_time_pane_t2_ParamLimits

0x8983,	// (0x0001220f) list_double_time_pane_t2

0x8995,	// (0x00012221) list_double_time_pane_t3_ParamLimits

0x8995,	// (0x00012221) list_double_time_pane_t3

0x89a7,	// (0x00012233) list_double_time_pane_t4_ParamLimits

0x89a7,	// (0x00012233) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x00018eea) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x00018eea) list_double_time_pane_t

0x8821,	// (0x000120ad) list_setting_pane_g1_ParamLimits

0x8821,	// (0x000120ad) list_setting_pane_g1

0x874c,	// (0x00011fd8) list_setting_pane_g2_ParamLimits

0x874c,	// (0x00011fd8) list_setting_pane_g2

0x0001,

0xf667,	// (0x00018ef3) list_setting_pane_g_ParamLimits

0xf667,	// (0x00018ef3) list_setting_pane_g

0x89b9,	// (0x00012245) list_setting_pane_t1_ParamLimits

0x89b9,	// (0x00012245) list_setting_pane_t1

0x89d0,	// (0x0001225c) list_setting_pane_t2_ParamLimits

0x89d0,	// (0x0001225c) list_setting_pane_t2

0x0002,

0xf66c,	// (0x00018ef8) list_setting_pane_t_ParamLimits

0xf66c,	// (0x00018ef8) list_setting_pane_t

0x8a0d,	// (0x00012299) set_value_pane_cp_ParamLimits

0x8a0d,	// (0x00012299) set_value_pane_cp

0x8821,	// (0x000120ad) list_setting_number_pane_g1_ParamLimits

0x8821,	// (0x000120ad) list_setting_number_pane_g1

0x874c,	// (0x00011fd8) list_setting_number_pane_g2_ParamLimits

0x874c,	// (0x00011fd8) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x00018ef3) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x00018ef3) list_setting_number_pane_g

0x8a19,	// (0x000122a5) list_setting_number_pane_t1_ParamLimits

0x8a19,	// (0x000122a5) list_setting_number_pane_t1

0x8a2d,	// (0x000122b9) list_setting_number_pane_t2_ParamLimits

0x8a2d,	// (0x000122b9) list_setting_number_pane_t2

0x8a44,	// (0x000122d0) list_setting_number_pane_t3_ParamLimits

0x8a44,	// (0x000122d0) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x00018eff) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x00018eff) list_setting_number_pane_t

0x8a0d,	// (0x00012299) set_value_pane_ParamLimits

0x8a0d,	// (0x00012299) set_value_pane

0x8a87,	// (0x00012313) bg_set_opt_pane_ParamLimits

0x8a87,	// (0x00012313) bg_set_opt_pane

0x8aa8,	// (0x00012334) set_value_pane_t1

0x8ab6,	// (0x00012342) slider_set_pane_cp3

0x8abf,	// (0x0001234b) volume_small_pane_cp

0x8ac8,	// (0x00012354) list_form_gen_pane

0x8ad1,	// (0x0001235d) scroll_pane_cp8

0x8ae2,	// (0x0001236e) form_field_data_pane_ParamLimits

0x8ae2,	// (0x0001236e) form_field_data_pane

0x8b02,	// (0x0001238e) form_field_data_wide_pane_ParamLimits

0x8b02,	// (0x0001238e) form_field_data_wide_pane

0x8b23,	// (0x000123af) form_field_popup_pane_ParamLimits

0x8b23,	// (0x000123af) form_field_popup_pane

0x8b41,	// (0x000123cd) form_field_popup_wide_pane_ParamLimits

0x8b41,	// (0x000123cd) form_field_popup_wide_pane

0x8b5e,	// (0x000123ea) form_field_slider_pane_ParamLimits

0x8b5e,	// (0x000123ea) form_field_slider_pane

0x8b71,	// (0x000123fd) form_field_slider_wide_pane_ParamLimits

0x8b71,	// (0x000123fd) form_field_slider_wide_pane

0x8b84,	// (0x00012410) data_form_pane

0x8b9a,	// (0x00012426) form_field_data_pane_t1

0x8bb4,	// (0x00012440) input_focus_pane

0x8bc2,	// (0x0001244e) data_form_wide_pane

0x8bee,	// (0x0001247a) form_field_data_wide_pane_t1

0x83ce,	// (0x00011c5a) input_focus_pane_cp6

0x8c0d,	// (0x00012499) form_field_popup_pane_t1

0x8bb4,	// (0x00012440) input_focus_pane_cp7

0x8c27,	// (0x000124b3) list_form_pane

0x8c3b,	// (0x000124c7) form_field_popup_wide_pane_t1

0x8bb4,	// (0x00012440) input_focus_pane_cp8

0x8c50,	// (0x000124dc) list_form_wide_pane

0x8c67,	// (0x000124f3) form_field_slider_pane_t1_ParamLimits

0x8c67,	// (0x000124f3) form_field_slider_pane_t1

0x8c7b,	// (0x00012507) form_field_slider_pane_t2_ParamLimits

0x8c7b,	// (0x00012507) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x00018f0f) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x00018f0f) form_field_slider_pane_t

0x8081,	// (0x0001190d) input_focus_pane_cp9_ParamLimits

0x8081,	// (0x0001190d) input_focus_pane_cp9

0x8c8d,	// (0x00012519) slider_cont_pane_ParamLimits

0x8c8d,	// (0x00012519) slider_cont_pane

0x8ca1,	// (0x0001252d) form_field_slider_wide_pane_t1_ParamLimits

0x8ca1,	// (0x0001252d) form_field_slider_wide_pane_t1

0x8cb3,	// (0x0001253f) form_field_slider_wide_pane_t2_ParamLimits

0x8cb3,	// (0x0001253f) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x00018f14) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x00018f14) form_field_slider_wide_pane_t

0x8081,	// (0x0001190d) input_focus_pane_cp10_ParamLimits

0x8081,	// (0x0001190d) input_focus_pane_cp10

0x8cc5,	// (0x00012551) slider_cont_pane_cp1_ParamLimits

0x8cc5,	// (0x00012551) slider_cont_pane_cp1

0x8cd9,	// (0x00012565) slider_form_pane_cp

0x8ce1,	// (0x0001256d) input_focus_pane_g1

0x8ce9,	// (0x00012575) input_focus_pane_g2

0x8cf1,	// (0x0001257d) input_focus_pane_g3

0x8cf9,	// (0x00012585) input_focus_pane_g4

0x8d01,	// (0x0001258d) input_focus_pane_g5

0x8d09,	// (0x00012595) input_focus_pane_g6

0x8d11,	// (0x0001259d) input_focus_pane_g7

0x8d19,	// (0x000125a5) input_focus_pane_g8

0x8d21,	// (0x000125ad) input_focus_pane_g9

0x7d02,	// (0x0001158e) input_focus_pane_g10

0x0009,

0xf68d,	// (0x00018f19) input_focus_pane_g

0xa95b,	// (0x000141e7) wait_border_pane_g3_copy1

0x8d29,	// (0x000125b5) data_form_pane_t1

0x7d02,	// (0x0001158e) wait_anim_pane_g1_copy1

0xb8cb,	// (0x00015157) data_form_wide_pane_t1

0x8d44,	// (0x000125d0) list_form_graphic_pane_cp_ParamLimits

0x8d44,	// (0x000125d0) list_form_graphic_pane_cp

0xb8a0,	// (0x0001512c) slider_form_pane_g1

0xb8a9,	// (0x00015135) slider_form_pane_g2

0x0006,

0xf98b,	// (0x00019217) slider_form_pane_g

0x8d44,	// (0x000125d0) list_form_graphic_pane_ParamLimits

0x8d44,	// (0x000125d0) list_form_graphic_pane

0x8d5b,	// (0x000125e7) list_form_graphic_pane_g1

0x8d63,	// (0x000125ef) list_form_graphic_pane_t1_ParamLimits

0x8d63,	// (0x000125ef) list_form_graphic_pane_t1

0x7dec,	// (0x00011678) list_highlight_pane_cp5_ParamLimits

0x7dec,	// (0x00011678) list_highlight_pane_cp5

0x8d78,	// (0x00012604) find_pane_g1

0x8d81,	// (0x0001260d) input_find_pane

0x8d8a,	// (0x00012616) input_find_pane_g1_ParamLimits

0x8d8a,	// (0x00012616) input_find_pane_g1

0x8d96,	// (0x00012622) input_find_pane_t1_ParamLimits

0x8d96,	// (0x00012622) input_find_pane_t1

0x8dab,	// (0x00012637) input_find_pane_t2_ParamLimits

0x8dab,	// (0x00012637) input_find_pane_t2

0x0001,

0xf6a2,	// (0x00018f2e) input_find_pane_t_ParamLimits

0xf6a2,	// (0x00018f2e) input_find_pane_t

0x8dc0,	// (0x0001264c) input_focus_pane_cp5_ParamLimits

0x8dc0,	// (0x0001264c) input_focus_pane_cp5

0x8dda,	// (0x00012666) bg_popup_window_pane_cp2_ParamLimits

0x8dda,	// (0x00012666) bg_popup_window_pane_cp2

0x8de7,	// (0x00012673) listscroll_menu_pane_ParamLimits

0x8de7,	// (0x00012673) listscroll_menu_pane

0x8df3,	// (0x0001267f) popup_submenu_window_ParamLimits

0x8df3,	// (0x0001267f) popup_submenu_window

0x8e1b,	// (0x000126a7) find_popup_pane_g1

0x8e23,	// (0x000126af) input_popup_find_pane_cp

0x8dc0,	// (0x0001264c) input_focus_pane_cp4_ParamLimits

0x8dc0,	// (0x0001264c) input_focus_pane_cp4

0x8e3b,	// (0x000126c7) input_popup_find_pane_t1_ParamLimits

0x8e3b,	// (0x000126c7) input_popup_find_pane_t1

0x7d0c,	// (0x00011598) bg_popup_sub_pane_cp

0x8e69,	// (0x000126f5) listscroll_popup_sub_pane

0x8e71,	// (0x000126fd) list_submenu_pane_ParamLimits

0x8e71,	// (0x000126fd) list_submenu_pane

0x8e82,	// (0x0001270e) scroll_pane_cp4

0x8e8a,	// (0x00012716) list_single_popup_submenu_pane_ParamLimits

0x8e8a,	// (0x00012716) list_single_popup_submenu_pane

0x8e9e,	// (0x0001272a) list_single_popup_submenu_pane_g1

0x8ea6,	// (0x00012732) list_single_popup_submenu_pane_t1_ParamLimits

0x8ea6,	// (0x00012732) list_single_popup_submenu_pane_t1

0x7dec,	// (0x00011678) bg_active_tab_pane_cp1_ParamLimits

0x7dec,	// (0x00011678) bg_active_tab_pane_cp1

0x8ebb,	// (0x00012747) tabs_2_active_pane_g1

0x8ec3,	// (0x0001274f) tabs_2_active_pane_t1

0x7dec,	// (0x00011678) bg_passive_tab_pane_cp1_ParamLimits

0x7dec,	// (0x00011678) bg_passive_tab_pane_cp1

0x8ebb,	// (0x00012747) tabs_2_passive_pane_g1

0x8ec3,	// (0x0001274f) tabs_2_passive_pane_t1

0x8ed5,	// (0x00012761) bg_active_tab_pane_cp4

0x8ee3,	// (0x0001276f) tabs_2_long_active_pane_t1

0x8ef6,	// (0x00012782) bg_passive_tab_pane_cp4

0x6a62,	// (0x000102ee) list_single_midp_graphic_pane_g4_ParamLimits

0x8ed5,	// (0x00012761) bg_active_tab_pane_cp5

0x8f02,	// (0x0001278e) tabs_3_long_active_pane_t1

0x8ef6,	// (0x00012782) bg_passive_tab_pane_cp5

0x6a62,	// (0x000102ee) list_single_midp_graphic_pane_g4

0x7dec,	// (0x00011678) bg_popup_window_pane_cp13_ParamLimits

0x7dec,	// (0x00011678) bg_popup_window_pane_cp13

0x8f1d,	// (0x000127a9) listscroll_popup_fast_pane_ParamLimits

0x8f1d,	// (0x000127a9) listscroll_popup_fast_pane

0x8f29,	// (0x000127b5) grid_popup_fast_pane_ParamLimits

0x8f29,	// (0x000127b5) grid_popup_fast_pane

0x8f3b,	// (0x000127c7) scroll_pane_cp9_ParamLimits

0x8f3b,	// (0x000127c7) scroll_pane_cp9

0xd772,	// (0x00016ffe) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xd772,	// (0x00016ffe) list_single_graphic_hl_pane_t1_cp2

0x8f5f,	// (0x000127eb) input_focus_pane_cp20_ParamLimits

0x8f5f,	// (0x000127eb) input_focus_pane_cp20

0x8f6d,	// (0x000127f9) query_popup_data_pane_t1_ParamLimits

0x8f6d,	// (0x000127f9) query_popup_data_pane_t1

0x8f80,	// (0x0001280c) query_popup_data_pane_t2_ParamLimits

0x8f80,	// (0x0001280c) query_popup_data_pane_t2

0x8fc6,	// (0x00012852) query_popup_data_pane_t3_ParamLimits

0x8fc6,	// (0x00012852) query_popup_data_pane_t3

0x9007,	// (0x00012893) query_popup_data_pane_t4_ParamLimits

0x9007,	// (0x00012893) query_popup_data_pane_t4

0x9043,	// (0x000128cf) query_popup_data_pane_t5_ParamLimits

0x9043,	// (0x000128cf) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x00018f33) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x00018f33) query_popup_data_pane_t

0x8ce1,	// (0x0001256d) bg_set_opt_pane_g1

0x8ce9,	// (0x00012575) bg_set_opt_pane_g2

0x8cf1,	// (0x0001257d) bg_set_opt_pane_g3

0x8cf9,	// (0x00012585) bg_set_opt_pane_g4

0x8d01,	// (0x0001258d) bg_set_opt_pane_g5

0x8d09,	// (0x00012595) bg_set_opt_pane_g6

0x8d11,	// (0x0001259d) bg_set_opt_pane_g7

0x8d19,	// (0x000125a5) bg_set_opt_pane_g8

0x8d21,	// (0x000125ad) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x00018f3e) bg_set_opt_pane_g

0x6092,	// (0x0000f91e) control_top_pane_stacon_ParamLimits

0x6092,	// (0x0000f91e) control_top_pane_stacon

0x60e5,	// (0x0000f971) signal_pane_stacon_ParamLimits

0x60e5,	// (0x0000f971) signal_pane_stacon

0x9692,	// (0x00012f1e) stacon_top_pane_g1_ParamLimits

0x9692,	// (0x00012f1e) stacon_top_pane_g1

0x610a,	// (0x0000f996) title_pane_stacon_ParamLimits

0x610a,	// (0x0000f996) title_pane_stacon

0x6134,	// (0x0000f9c0) uni_indicator_pane_stacon_ParamLimits

0x6134,	// (0x0000f9c0) uni_indicator_pane_stacon

0x6149,	// (0x0000f9d5) battery_pane_stacon_ParamLimits

0x6149,	// (0x0000f9d5) battery_pane_stacon

0x618d,	// (0x0000fa19) control_bottom_pane_stacon_ParamLimits

0x618d,	// (0x0000fa19) control_bottom_pane_stacon

0x61b0,	// (0x0000fa3c) navi_pane_stacon_ParamLimits

0x61b0,	// (0x0000fa3c) navi_pane_stacon

0x96b4,	// (0x00012f40) stacon_bottom_pane_g1_ParamLimits

0x96b4,	// (0x00012f40) stacon_bottom_pane_g1

0x5dfc,	// (0x0000f688) aid_levels_signal_lsc_ParamLimits

0x5dfc,	// (0x0000f688) aid_levels_signal_lsc

0x5e13,	// (0x0000f69f) signal_pane_stacon_g1_ParamLimits

0x5e13,	// (0x0000f69f) signal_pane_stacon_g1

0x5e27,	// (0x0000f6b3) signal_pane_stacon_g2_ParamLimits

0x5e27,	// (0x0000f6b3) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x00018f51) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x00018f51) signal_pane_stacon_g

0x5e5c,	// (0x0000f6e8) title_pane_stacon_t1_ParamLimits

0x5e5c,	// (0x0000f6e8) title_pane_stacon_t1

0x9087,	// (0x00012913) uni_indicator_pane_stacon_g1

0x9091,	// (0x0001291d) uni_indicator_pane_stacon_g2

0x909b,	// (0x00012927) uni_indicator_pane_stacon_g3

0x90a5,	// (0x00012931) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x00018f5d) uni_indicator_pane_stacon_g

0x5e81,	// (0x0000f70d) control_top_pane_stacon_g1

0x5e89,	// (0x0000f715) control_top_pane_stacon_t1_ParamLimits

0x5e89,	// (0x0000f715) control_top_pane_stacon_t1

0x5ec0,	// (0x0000f74c) aid_levels_battery_lsc_ParamLimits

0x5ec0,	// (0x0000f74c) aid_levels_battery_lsc

0x5ed8,	// (0x0000f764) battery_pane_stacon_g1_ParamLimits

0x5ed8,	// (0x0000f764) battery_pane_stacon_g1

0x5eeb,	// (0x0000f777) battery_pane_stacon_g2_ParamLimits

0x5eeb,	// (0x0000f777) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x00018f66) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x00018f66) battery_pane_stacon_g

0x5f29,	// (0x0000f7b5) navi_icon_pane_stacon

0x5f3d,	// (0x0000f7c9) navi_navi_pane_stacon

0x5f29,	// (0x0000f7b5) navi_text_pane_stacon

0x5e81,	// (0x0000f70d) control_bottom_pane_stacon_g1

0x5f51,	// (0x0000f7dd) control_bottom_pane_stacon_t1_ParamLimits

0x5f51,	// (0x0000f7dd) control_bottom_pane_stacon_t1

0x90c9,	// (0x00012955) grid_app_pane_ParamLimits

0x90c9,	// (0x00012955) grid_app_pane

0x90eb,	// (0x00012977) scroll_pane_cp15_ParamLimits

0x90eb,	// (0x00012977) scroll_pane_cp15

0x9100,	// (0x0001298c) cell_app_pane_ParamLimits

0x9100,	// (0x0001298c) cell_app_pane

0x9126,	// (0x000129b2) cell_app_pane_g1_ParamLimits

0x9126,	// (0x000129b2) cell_app_pane_g1

0x9146,	// (0x000129d2) cell_app_pane_g2_ParamLimits

0x9146,	// (0x000129d2) cell_app_pane_g2

0x0001,

0xf6df,	// (0x00018f6b) cell_app_pane_g_ParamLimits

0xf6df,	// (0x00018f6b) cell_app_pane_g

0x9152,	// (0x000129de) cell_app_pane_t1_ParamLimits

0x9152,	// (0x000129de) cell_app_pane_t1

0x9169,	// (0x000129f5) grid_highlight_pane_ParamLimits

0x9169,	// (0x000129f5) grid_highlight_pane

0x8ce1,	// (0x0001256d) cell_highlight_pane_g1

0x8ce9,	// (0x00012575) cell_highlight_pane_g2

0x8cf1,	// (0x0001257d) cell_highlight_pane_g3

0x8cf9,	// (0x00012585) cell_highlight_pane_g4

0x8d01,	// (0x0001258d) cell_highlight_pane_g5

0x8d09,	// (0x00012595) cell_highlight_pane_g6

0x8d11,	// (0x0001259d) cell_highlight_pane_g7

0x8d19,	// (0x000125a5) cell_highlight_pane_g8

0x8d21,	// (0x000125ad) cell_highlight_pane_g9

0x7d02,	// (0x0001158e) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x00018f19) cell_highlight_pane_g

0x917a,	// (0x00012a06) bg_scroll_pane

0x5f9b,	// (0x0000f827) scroll_handle_pane

0x91c1,	// (0x00012a4d) scroll_bg_pane_g1

0x91d6,	// (0x00012a62) scroll_bg_pane_g2

0x91ee,	// (0x00012a7a) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x00018f70) scroll_bg_pane_g

0x9203,	// (0x00012a8f) scroll_handle_focus_pane_ParamLimits

0x9203,	// (0x00012a8f) scroll_handle_focus_pane

0x91c1,	// (0x00012a4d) scroll_handle_pane_g1

0x9210,	// (0x00012a9c) scroll_handle_pane_g2

0x91ee,	// (0x00012a7a) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x00018f77) scroll_handle_pane_g

0x8dc0,	// (0x0001264c) bg_popup_sub_pane_cp21_ParamLimits

0x8dc0,	// (0x0001264c) bg_popup_sub_pane_cp21

0x9224,	// (0x00012ab0) popup_fep_japan_predictive_window_t1_ParamLimits

0x9224,	// (0x00012ab0) popup_fep_japan_predictive_window_t1

0x923e,	// (0x00012aca) popup_fep_japan_predictive_window_t2_ParamLimits

0x923e,	// (0x00012aca) popup_fep_japan_predictive_window_t2

0x9271,	// (0x00012afd) popup_fep_japan_predictive_window_t3_ParamLimits

0x9271,	// (0x00012afd) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x00018f7e) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x00018f7e) popup_fep_japan_predictive_window_t

0x7d0c,	// (0x00011598) bg_popup_sub_pane_cp23

0x92a8,	// (0x00012b34) listscroll_japin_cand_pane

0x92b0,	// (0x00012b3c) popup_fep_japan_candidate_window_t1

0x92be,	// (0x00012b4a) candidate_pane_ParamLimits

0x92be,	// (0x00012b4a) candidate_pane

0x92d0,	// (0x00012b5c) scroll_pane_cp30

0x92d8,	// (0x00012b64) list_single_popup_jap_candidate_pane_ParamLimits

0x92d8,	// (0x00012b64) list_single_popup_jap_candidate_pane

0x7d0c,	// (0x00011598) list_highlight_pane_cp30

0x92ec,	// (0x00012b78) list_single_popup_jap_candidate_pane_t1

0x92fb,	// (0x00012b87) level_1_signal

0x9308,	// (0x00012b94) level_2_signal

0x9315,	// (0x00012ba1) level_3_signal

0x9322,	// (0x00012bae) level_4_signal

0x932f,	// (0x00012bbb) level_5_signal

0x933c,	// (0x00012bc8) level_6_signal

0x9349,	// (0x00012bd5) level_7_signal

0x92fb,	// (0x00012b87) level_1_battery

0x9308,	// (0x00012b94) level_2_battery

0x9315,	// (0x00012ba1) level_3_battery

0x9322,	// (0x00012bae) level_4_battery

0x932f,	// (0x00012bbb) level_5_battery

0x933c,	// (0x00012bc8) level_6_battery

0x9349,	// (0x00012bd5) level_7_battery

0x936e,	// (0x00012bfa) list_menu_pane_ParamLimits

0x936e,	// (0x00012bfa) list_menu_pane

0x9384,	// (0x00012c10) scroll_pane_cp25_ParamLimits

0x9384,	// (0x00012c10) scroll_pane_cp25

0x939d,	// (0x00012c29) list_double2_graphic_pane_cp2_ParamLimits

0x939d,	// (0x00012c29) list_double2_graphic_pane_cp2

0x939d,	// (0x00012c29) list_double2_large_graphic_pane_cp2_ParamLimits

0x939d,	// (0x00012c29) list_double2_large_graphic_pane_cp2

0x939d,	// (0x00012c29) list_double2_pane_cp2_ParamLimits

0x939d,	// (0x00012c29) list_double2_pane_cp2

0x939d,	// (0x00012c29) list_double_graphic_pane_cp2_ParamLimits

0x939d,	// (0x00012c29) list_double_graphic_pane_cp2

0x939d,	// (0x00012c29) list_double_large_graphic_pane_cp2_ParamLimits

0x939d,	// (0x00012c29) list_double_large_graphic_pane_cp2

0x939d,	// (0x00012c29) list_double_number_pane_cp2_ParamLimits

0x939d,	// (0x00012c29) list_double_number_pane_cp2

0x939d,	// (0x00012c29) list_double_pane_cp2_ParamLimits

0x939d,	// (0x00012c29) list_double_pane_cp2

0x93c1,	// (0x00012c4d) list_single_2graphic_pane_cp2_ParamLimits

0x93c1,	// (0x00012c4d) list_single_2graphic_pane_cp2

0x93c1,	// (0x00012c4d) list_single_graphic_heading_pane_cp2_ParamLimits

0x93c1,	// (0x00012c4d) list_single_graphic_heading_pane_cp2

0x93c1,	// (0x00012c4d) list_single_graphic_pane_cp2_ParamLimits

0x93c1,	// (0x00012c4d) list_single_graphic_pane_cp2

0x93c1,	// (0x00012c4d) list_single_heading_pane_cp2_ParamLimits

0x93c1,	// (0x00012c4d) list_single_heading_pane_cp2

0x93d7,	// (0x00012c63) list_single_large_graphic_pane_cp2_ParamLimits

0x93d7,	// (0x00012c63) list_single_large_graphic_pane_cp2

0x93c1,	// (0x00012c4d) list_single_number_heading_pane_cp2_ParamLimits

0x93c1,	// (0x00012c4d) list_single_number_heading_pane_cp2

0x93c1,	// (0x00012c4d) list_single_number_pane_cp2_ParamLimits

0x93c1,	// (0x00012c4d) list_single_number_pane_cp2

0x93c1,	// (0x00012c4d) list_single_pane_cp2_ParamLimits

0x93c1,	// (0x00012c4d) list_single_pane_cp2

0x9452,	// (0x00012cde) bg_popup_sub_pane_cp22

0x604a,	// (0x0000f8d6) popup_side_volume_key_window_g1

0x606e,	// (0x0000f8fa) popup_side_volume_key_window_t1

0x608a,	// (0x0000f916) volume_small_pane_cp1

0x8081,	// (0x0001190d) bg_popup_sub_pane_cp24_ParamLimits

0x8081,	// (0x0001190d) bg_popup_sub_pane_cp24

0x9468,	// (0x00012cf4) fep_china_uni_candidate_pane_ParamLimits

0x9468,	// (0x00012cf4) fep_china_uni_candidate_pane

0x947c,	// (0x00012d08) fep_china_uni_entry_pane

0x948c,	// (0x00012d18) popup_fep_china_uni_window_g1

0x94a8,	// (0x00012d34) fep_china_uni_entry_pane_g1

0x94b0,	// (0x00012d3c) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x00018faf) fep_china_uni_entry_pane_g

0x94b8,	// (0x00012d44) fep_entry_item_pane

0x94c2,	// (0x00012d4e) fep_candidate_item_pane

0x94ca,	// (0x00012d56) fep_china_uni_candidate_pane_g1

0x94d2,	// (0x00012d5e) fep_china_uni_candidate_pane_g2

0x94da,	// (0x00012d66) fep_china_uni_candidate_pane_g3

0x94e2,	// (0x00012d6e) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x00018fb4) fep_china_uni_candidate_pane_g

0x7d02,	// (0x0001158e) fep_entry_item_pane_g1

0x94ea,	// (0x00012d76) fep_entry_item_pane_t1_ParamLimits

0x94ea,	// (0x00012d76) fep_entry_item_pane_t1

0x9500,	// (0x00012d8c) fep_candidate_item_pane_t1_ParamLimits

0x9500,	// (0x00012d8c) fep_candidate_item_pane_t1

0x9515,	// (0x00012da1) fep_candidate_item_pane_t2_ParamLimits

0x9515,	// (0x00012da1) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x00018fbd) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x00018fbd) fep_candidate_item_pane_t

0x7dec,	// (0x00011678) list_highlight_pane_cp31_ParamLimits

0x7dec,	// (0x00011678) list_highlight_pane_cp31

0x9527,	// (0x00012db3) level_1_signal_lsc

0x9530,	// (0x00012dbc) level_2_signal_lsc

0x9539,	// (0x00012dc5) level_3_signal_lsc

0x9542,	// (0x00012dce) level_4_signal_lsc

0x954b,	// (0x00012dd7) level_5_signal_lsc

0x9554,	// (0x00012de0) level_6_signal_lsc

0x955d,	// (0x00012de9) level_7_signal_lsc

0x955d,	// (0x00012de9) level_1_battery_lsc

0x9566,	// (0x00012df2) level_2_battery_lsc

0x956f,	// (0x00012dfb) level_3_battery_lsc

0x9578,	// (0x00012e04) level_4_battery_lsc

0x9581,	// (0x00012e0d) level_5_battery_lsc

0x958a,	// (0x00012e16) level_6_battery_lsc

0x9527,	// (0x00012db3) level_7_battery_lsc

0x9593,	// (0x00012e1f) scroll_handle_focus_pane_g1

0x959c,	// (0x00012e28) scroll_handle_focus_pane_g2

0x95a5,	// (0x00012e31) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x00018fc2) scroll_handle_focus_pane_g

0x95ae,	// (0x00012e3a) list_single_2graphic_pane_g1_ParamLimits

0x95ae,	// (0x00012e3a) list_single_2graphic_pane_g1

0x8696,	// (0x00011f22) list_single_2graphic_pane_g2_ParamLimits

0x8696,	// (0x00011f22) list_single_2graphic_pane_g2

0x861c,	// (0x00011ea8) list_single_2graphic_pane_g3_ParamLimits

0x861c,	// (0x00011ea8) list_single_2graphic_pane_g3

0x95ba,	// (0x00012e46) list_single_2graphic_pane_g4_ParamLimits

0x95ba,	// (0x00012e46) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x00018fc9) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x00018fc9) list_single_2graphic_pane_g

0x95cb,	// (0x00012e57) list_single_2graphic_pane_t1_ParamLimits

0x95cb,	// (0x00012e57) list_single_2graphic_pane_t1

0x95f9,	// (0x00012e85) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x95f9,	// (0x00012e85) list_double2_graphic_large_graphic_pane_g1

0x873b,	// (0x00011fc7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x873b,	// (0x00011fc7) list_double2_graphic_large_graphic_pane_g2

0x874c,	// (0x00011fd8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x874c,	// (0x00011fd8) list_double2_graphic_large_graphic_pane_g3

0x9609,	// (0x00012e95) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9609,	// (0x00012e95) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x00018fd2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x00018fd2) list_double2_graphic_large_graphic_pane_g

0x9615,	// (0x00012ea1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9615,	// (0x00012ea1) list_double2_graphic_large_graphic_pane_t1

0x962b,	// (0x00012eb7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x962b,	// (0x00012eb7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x00018fdb) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x00018fdb) list_double2_graphic_large_graphic_pane_t

0x977d,	// (0x00013009) popup_fast_swap_window_ParamLimits

0x977d,	// (0x00013009) popup_fast_swap_window

0x9799,	// (0x00013025) popup_side_volume_key_window

0x97b3,	// (0x0001303f) stacon_top_pane

0x97bd,	// (0x00013049) status_pane_ParamLimits

0x97bd,	// (0x00013049) status_pane

0x97b3,	// (0x0001303f) status_small_pane

0x7d0c,	// (0x00011598) control_pane

0x7d0c,	// (0x00011598) stacon_bottom_pane

0x8ad1,	// (0x0001235d) scroll_pane_cp121

0x8ac8,	// (0x00012354) set_content_pane

0x963d,	// (0x00012ec9) bg_active_tab_pane_g1_cp1

0x9646,	// (0x00012ed2) bg_active_tab_pane_g2_cp1

0x964f,	// (0x00012edb) bg_active_tab_pane_g3_cp1

0x963d,	// (0x00012ec9) bg_passive_tab_pane_g1_cp1

0x9646,	// (0x00012ed2) bg_passive_tab_pane_g2_cp1

0x964f,	// (0x00012edb) bg_passive_tab_pane_g3_cp1

0x9658,	// (0x00012ee4) bg_active_tab_pane_g1_cp2

0x9646,	// (0x00012ed2) bg_active_tab_pane_g2_cp2

0x9661,	// (0x00012eed) bg_active_tab_pane_g3_cp2

0x9658,	// (0x00012ee4) bg_passive_tab_pane_g1_cp2

0x9646,	// (0x00012ed2) bg_passive_tab_pane_g2_cp2

0x9661,	// (0x00012eed) bg_passive_tab_pane_g3_cp2

0x966a,	// (0x00012ef6) bg_active_tab_pane_g1_cp3

0x9646,	// (0x00012ed2) bg_active_tab_pane_g2_cp3

0x9673,	// (0x00012eff) bg_active_tab_pane_g3_cp3

0x966a,	// (0x00012ef6) bg_passive_tab_pane_g1_cp3

0x9646,	// (0x00012ed2) bg_passive_tab_pane_g2_cp3

0x9673,	// (0x00012eff) bg_passive_tab_pane_g3_cp3

0x967c,	// (0x00012f08) bg_active_tab_pane_g1_cp4

0x9646,	// (0x00012ed2) bg_active_tab_pane_g2_cp4

0x9687,	// (0x00012f13) bg_active_tab_pane_g3_cp4

0x967c,	// (0x00012f08) bg_passive_tab_pane_g1_cp4

0x9646,	// (0x00012ed2) bg_passive_tab_pane_g2_cp4

0x9687,	// (0x00012f13) bg_passive_tab_pane_g3_cp4

0x96d0,	// (0x00012f5c) bg_active_tab_pane_g1_cp5

0x9646,	// (0x00012ed2) bg_active_tab_pane_g2_cp5

0x96d9,	// (0x00012f65) bg_active_tab_pane_g3_cp5

0x96d0,	// (0x00012f5c) bg_passive_tab_pane_g1_cp5

0x9646,	// (0x00012ed2) bg_passive_tab_pane_g2_cp5

0x96d9,	// (0x00012f65) bg_passive_tab_pane_g3_cp5

0x96e2,	// (0x00012f6e) list_set_graphic_pane_ParamLimits

0x96e2,	// (0x00012f6e) list_set_graphic_pane

0x7d0c,	// (0x00011598) bg_set_opt_pane_cp4

0x9702,	// (0x00012f8e) list_set_graphic_pane_g1_ParamLimits

0x9702,	// (0x00012f8e) list_set_graphic_pane_g1

0x970e,	// (0x00012f9a) list_set_graphic_pane_g2_ParamLimits

0x970e,	// (0x00012f9a) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x00018fe0) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x00018fe0) list_set_graphic_pane_g

0x0009,

0xfae3,	// (0x0001936f) volume_small_pane_cp_g

0x9730,	// (0x00012fbc) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9730,	// (0x00012fbc) list_double2_large_graphic_pane_g1_cp2

0x973c,	// (0x00012fc8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x973c,	// (0x00012fc8) list_double2_large_graphic_pane_g2_cp2

0x974d,	// (0x00012fd9) list_double2_large_graphic_pane_g3_cp2

0x9755,	// (0x00012fe1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9755,	// (0x00012fe1) list_double2_large_graphic_pane_t1_cp2

0x976b,	// (0x00012ff7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x976b,	// (0x00012ff7) list_double2_large_graphic_pane_t2_cp2

0xb434,	// (0x00014cc0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb434,	// (0x00014cc0) list_double_large_graphic_pane_g1_cp2

0xb445,	// (0x00014cd1) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xb445,	// (0x00014cd1) list_double_large_graphic_pane_g2_cp2

0x98d9,	// (0x00013165) list_double_large_graphic_pane_g3_cp2

0xb456,	// (0x00014ce2) list_double_large_graphic_pane_g4_cp

0xb45e,	// (0x00014cea) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xb45e,	// (0x00014cea) list_double_large_graphic_pane_t1_cp2

0xb475,	// (0x00014d01) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xb475,	// (0x00014d01) list_double_large_graphic_pane_t2_cp2

0x97cb,	// (0x00013057) list_double2_graphic_pane_g1_cp2_ParamLimits

0x97cb,	// (0x00013057) list_double2_graphic_pane_g1_cp2

0x97d9,	// (0x00013065) list_double2_graphic_pane_g2_cp2_ParamLimits

0x97d9,	// (0x00013065) list_double2_graphic_pane_g2_cp2

0x97ea,	// (0x00013076) list_double2_graphic_pane_g3_cp2

0x97f4,	// (0x00013080) list_double2_graphic_pane_t1_cp2_ParamLimits

0x97f4,	// (0x00013080) list_double2_graphic_pane_t1_cp2

0x980a,	// (0x00013096) list_double2_graphic_pane_t2_cp2_ParamLimits

0x980a,	// (0x00013096) list_double2_graphic_pane_t2_cp2

0x981c,	// (0x000130a8) list_single_number_heading_pane_g1_cp2_ParamLimits

0x981c,	// (0x000130a8) list_single_number_heading_pane_g1_cp2

0x9828,	// (0x000130b4) list_single_number_heading_pane_g2_cp2

0x9830,	// (0x000130bc) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9830,	// (0x000130bc) list_single_number_heading_pane_t1_cp2

0x9846,	// (0x000130d2) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9846,	// (0x000130d2) list_single_number_heading_pane_t2_cp2

0x9858,	// (0x000130e4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9858,	// (0x000130e4) list_single_number_heading_pane_t3_cp2

0x981c,	// (0x000130a8) list_single_heading_pane_g1_cp2_ParamLimits

0x981c,	// (0x000130a8) list_single_heading_pane_g1_cp2

0x9828,	// (0x000130b4) list_single_heading_pane_g2_cp2

0x9830,	// (0x000130bc) list_single_heading_pane_t1_cp2_ParamLimits

0x9830,	// (0x000130bc) list_single_heading_pane_t1_cp2

0xb23e,	// (0x00014aca) list_single_heading_pane_t2_cp2_ParamLimits

0xb23e,	// (0x00014aca) list_single_heading_pane_t2_cp2

0xb186,	// (0x00014a12) list_double_graphic_pane_g1_cp2_ParamLimits

0xb186,	// (0x00014a12) list_double_graphic_pane_g1_cp2

0xb192,	// (0x00014a1e) list_double_graphic_pane_g2_cp2_ParamLimits

0xb192,	// (0x00014a1e) list_double_graphic_pane_g2_cp2

0xb1a1,	// (0x00014a2d) list_double_graphic_pane_g3_cp2

0xb1a9,	// (0x00014a35) list_double_graphic_pane_t1_cp2_ParamLimits

0xb1a9,	// (0x00014a35) list_double_graphic_pane_t1_cp2

0xb1bf,	// (0x00014a4b) list_double_graphic_pane_t2_cp2_ParamLimits

0xb1bf,	// (0x00014a4b) list_double_graphic_pane_t2_cp2

0x98cd,	// (0x00013159) list_double_number_pane_g1_cp2_ParamLimits

0x98cd,	// (0x00013159) list_double_number_pane_g1_cp2

0x98d9,	// (0x00013165) list_double_number_pane_g2_cp2

0xb14a,	// (0x000149d6) list_double_number_pane_t1_cp2_ParamLimits

0xb14a,	// (0x000149d6) list_double_number_pane_t1_cp2

0xb15e,	// (0x000149ea) list_double_number_pane_t2_cp2_ParamLimits

0xb15e,	// (0x000149ea) list_double_number_pane_t2_cp2

0xb174,	// (0x00014a00) list_double_number_pane_t3_cp2_ParamLimits

0xb174,	// (0x00014a00) list_double_number_pane_t3_cp2

0xb033,	// (0x000148bf) list_single_graphic_pane_g1_cp2_ParamLimits

0xb033,	// (0x000148bf) list_single_graphic_pane_g1_cp2

0x8610,	// (0x00011e9c) list_single_graphic_pane_g2_cp2_ParamLimits

0x8610,	// (0x00011e9c) list_single_graphic_pane_g2_cp2

0x9931,	// (0x000131bd) list_single_graphic_pane_g3_cp2

0xb009,	// (0x00014895) list_single_graphic_pane_t1_cp2_ParamLimits

0xb009,	// (0x00014895) list_single_graphic_pane_t1_cp2

0x8610,	// (0x00011e9c) list_single_number_pane_g1_cp2_ParamLimits

0x8610,	// (0x00011e9c) list_single_number_pane_g1_cp2

0x9931,	// (0x000131bd) list_single_number_pane_g2_cp2

0xb009,	// (0x00014895) list_single_number_pane_t1_cp2_ParamLimits

0xb009,	// (0x00014895) list_single_number_pane_t1_cp2

0xb01f,	// (0x000148ab) list_single_number_pane_t2_cp2_ParamLimits

0xb01f,	// (0x000148ab) list_single_number_pane_t2_cp2

0x973c,	// (0x00012fc8) list_double2_pane_g1_cp2_ParamLimits

0x973c,	// (0x00012fc8) list_double2_pane_g1_cp2

0x974d,	// (0x00012fd9) list_double2_pane_g2_cp2

0x98a5,	// (0x00013131) list_double2_pane_t1_cp2_ParamLimits

0x98a5,	// (0x00013131) list_double2_pane_t1_cp2

0x98bb,	// (0x00013147) list_double2_pane_t2_cp2_ParamLimits

0x98bb,	// (0x00013147) list_double2_pane_t2_cp2

0x98cd,	// (0x00013159) list_double_pane_g1_cp2_ParamLimits

0x98cd,	// (0x00013159) list_double_pane_g1_cp2

0x98d9,	// (0x00013165) list_double_pane_g2_cp2

0x98e1,	// (0x0001316d) list_double_pane_t1_cp2_ParamLimits

0x98e1,	// (0x0001316d) list_double_pane_t1_cp2

0x98f7,	// (0x00013183) list_double_pane_t2_cp2_ParamLimits

0x98f7,	// (0x00013183) list_double_pane_t2_cp2

0x9921,	// (0x000131ad) list_single_pane_cp2_g3

0x8610,	// (0x00011e9c) list_single_pane_g1_cp2_ParamLimits

0x8610,	// (0x00011e9c) list_single_pane_g1_cp2

0x9931,	// (0x000131bd) list_single_pane_g2_cp2

0x9939,	// (0x000131c5) list_single_pane_t1_cp2_ParamLimits

0x9939,	// (0x000131c5) list_single_pane_t1_cp2

0x9951,	// (0x000131dd) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9951,	// (0x000131dd) list_single_large_graphic_pane_g1_cp2

0x995d,	// (0x000131e9) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x995d,	// (0x000131e9) list_single_large_graphic_pane_g2_cp2

0x9969,	// (0x000131f5) list_single_large_graphic_pane_g3_cp2

0x9971,	// (0x000131fd) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9971,	// (0x000131fd) list_single_large_graphic_pane_g4_cp1

0x998b,	// (0x00013217) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x998b,	// (0x00013217) list_single_large_graphic_pane_t1_cp2

0xafd5,	// (0x00014861) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xafd5,	// (0x00014861) list_single_graphic_heading_pane_g1_cp2

0xafa2,	// (0x0001482e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xafa2,	// (0x0001482e) list_single_graphic_heading_pane_g4_cp2

0x9931,	// (0x000131bd) list_single_graphic_heading_pane_g5_cp2

0xafe1,	// (0x0001486d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xafe1,	// (0x0001486d) list_single_graphic_heading_pane_t1_cp2

0xaff7,	// (0x00014883) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xaff7,	// (0x00014883) list_single_graphic_heading_pane_t2_cp2

0xaf96,	// (0x00014822) list_single_2graphic_pane_g1_cp2_ParamLimits

0xaf96,	// (0x00014822) list_single_2graphic_pane_g1_cp2

0xafa2,	// (0x0001482e) list_single_2graphic_pane_g2_cp2_ParamLimits

0xafa2,	// (0x0001482e) list_single_2graphic_pane_g2_cp2

0x9931,	// (0x000131bd) list_single_2graphic_pane_g3_cp2

0xafb3,	// (0x0001483f) list_single_2graphic_pane_g4_cp2_ParamLimits

0xafb3,	// (0x0001483f) list_single_2graphic_pane_g4_cp2

0xafbf,	// (0x0001484b) list_single_2graphic_pane_t1_cp2_ParamLimits

0xafbf,	// (0x0001484b) list_single_2graphic_pane_t1_cp2

0x7d02,	// (0x0001158e) list_highlight_pane_g10_cp1

0xab6e,	// (0x000143fa) list_highlight_pane_g1_cp1

0xab76,	// (0x00014402) list_highlight_pane_g2_cp1

0xab7e,	// (0x0001440a) list_highlight_pane_g3_cp1

0xab86,	// (0x00014412) list_highlight_pane_g4_cp1

0xab8e,	// (0x0001441a) list_highlight_pane_g5_cp1

0xab96,	// (0x00014422) list_highlight_pane_g6_cp1

0xab9e,	// (0x0001442a) list_highlight_pane_g7_cp1

0xaba6,	// (0x00014432) list_highlight_pane_g8_cp1

0xabae,	// (0x0001443a) list_highlight_pane_g9_cp1

0xaa86,	// (0x00014312) form_field_slider_pane_t3

0xaa94,	// (0x00014320) form_field_slider_pane_t4

0xaaa2,	// (0x0001432e) slider_form_pane_ParamLimits

0xaaa2,	// (0x0001432e) slider_form_pane

0x7d0c,	// (0x00011598) control_abbreviations

0x7d0c,	// (0x00011598) control_conventions

0x7d0c,	// (0x00011598) control_definitions

0x7d0c,	// (0x00011598) format_table_attribute

0xb288,	// (0x00014b14) bg_popup_preview_window_pane_g9

0x7d0c,	// (0x00011598) format_table_data2

0x7d0c,	// (0x00011598) format_table_data3

0x7d0c,	// (0x00011598) format_table_data_example

0x0008,

0x7d0c,	// (0x00011598) intro_purpose

0xf8eb,	// (0x00019177) bg_popup_preview_window_pane_g

0x7d0c,	// (0x00011598) texts_category

0x7d0c,	// (0x00011598) texts_graphics

0x99a1,	// (0x0001322d) text_digital

0x99b0,	// (0x0001323c) text_primary

0x99bf,	// (0x0001324b) text_primary_small

0x99ce,	// (0x0001325a) text_secondary

0x99dd,	// (0x00013269) text_title

0xbaa8,	// (0x00015334) bg_passive_tab_pane_g1_cp3_srt

0x9646,	// (0x00012ed2) bg_passive_tab_pane_g2_cp3_srt

0xbab1,	// (0x0001533d) bg_passive_tab_pane_g3_cp3_srt

0x7dec,	// (0x00011678) bg_active_tab_pane_cp3_srt_ParamLimits

0x7dec,	// (0x00011678) bg_active_tab_pane_cp3_srt

0xbaba,	// (0x00015346) tabs_4_active_pane_srt_g1

0xbac2,	// (0x0001534e) tabs_4_active_pane_srt_t1_ParamLimits

0xbac2,	// (0x0001534e) tabs_4_active_pane_srt_t1

0xbaa8,	// (0x00015334) bg_active_tab_pane_g1_cp3_copy1

0x9646,	// (0x00012ed2) bg_active_tab_pane_g2_cp3_copy1

0xbab1,	// (0x0001533d) bg_active_tab_pane_g3_cp3_copy1

0x7dec,	// (0x00011678) tabs_2_long_active_pane_srt_ParamLimits

0x7dec,	// (0x00011678) tabs_2_long_active_pane_srt

0x7dec,	// (0x00011678) tabs_2_long_passive_pane_srt_ParamLimits

0x7dec,	// (0x00011678) tabs_2_long_passive_pane_srt

0x8ef6,	// (0x00012782) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8ef6,	// (0x00012782) bg_passive_tab_pane_cp4_srt

0xb6dd,	// (0x00014f69) bg_passive_tab_pane_g1_cp4_srt

0x9646,	// (0x00012ed2) bg_passive_tab_pane_g2_cp4_srt

0xb6e6,	// (0x00014f72) bg_passive_tab_pane_g3_cp4_srt

0x8ed5,	// (0x00012761) bg_active_tab_pane_cp4_srt_ParamLimits

0x8ed5,	// (0x00012761) bg_active_tab_pane_cp4_srt

0xb6ef,	// (0x00014f7b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb6ef,	// (0x00014f7b) tabs_2_long_active_pane_srt_t1

0xb6dd,	// (0x00014f69) bg_active_tab_pane_g1_cp4_srt

0x9646,	// (0x00012ed2) bg_active_tab_pane_g2_cp4_srt

0xb6e6,	// (0x00014f72) bg_active_tab_pane_g3_cp4_srt

0x8081,	// (0x0001190d) tabs_3_long_active_pane_srt_ParamLimits

0x8081,	// (0x0001190d) tabs_3_long_active_pane_srt

0x8081,	// (0x0001190d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8081,	// (0x0001190d) tabs_3_long_passive_pane_cp_srt

0x8081,	// (0x0001190d) tabs_3_long_passive_pane_srt_ParamLimits

0x8081,	// (0x0001190d) tabs_3_long_passive_pane_srt

0x8ef6,	// (0x00012782) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8ef6,	// (0x00012782) bg_passive_tab_pane_cp5_srt

0x96d0,	// (0x00012f5c) bg_passive_tab_pane_g1_cp5_srt

0x9646,	// (0x00012ed2) bg_passive_tab_pane_g2_cp5_srt

0x96d9,	// (0x00012f65) bg_passive_tab_pane_g3_cp5_srt

0x8ed5,	// (0x00012761) bg_active_tab_pane_cp5_srt_ParamLimits

0x8ed5,	// (0x00012761) bg_active_tab_pane_cp5_srt

0xb6cb,	// (0x00014f57) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb6cb,	// (0x00014f57) tabs_3_long_active_pane_srt_t1

0x96d0,	// (0x00012f5c) bg_active_tab_pane_g1_cp5_srt

0x9646,	// (0x00012ed2) bg_active_tab_pane_g2_cp5_srt

0x96d9,	// (0x00012f65) bg_active_tab_pane_g3_cp5_srt

0xb6bd,	// (0x00014f49) navi_text_pane_srt_t1

0xb6b5,	// (0x00014f41) navi_icon_pane_srt_g1

0x9ba0,	// (0x0001342c) midp_editing_number_pane_srt

0x99ec,	// (0x00013278) midp_ticker_pane_srt

0x9ba8,	// (0x00013434) midp_ticker_pane_srt_g1

0x9bb0,	// (0x0001343c) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x00018fff) midp_ticker_pane_srt_g

0x9bb8,	// (0x00013444) midp_ticker_pane_srt_t1

0xb6a6,	// (0x00014f32) midp_editing_number_pane_t1_copy1

0x8ef6,	// (0x00012782) listscroll_midp_pane

0x8ef6,	// (0x00012782) midp_form_pane

0x9a58,	// (0x000132e4) midp_info_popup_window_ParamLimits

0x9a58,	// (0x000132e4) midp_info_popup_window

0x8dc0,	// (0x0001264c) bg_popup_sub_pane_cp50_ParamLimits

0x8dc0,	// (0x0001264c) bg_popup_sub_pane_cp50

0xa7a3,	// (0x0001402f) listscroll_midp_info_pane_ParamLimits

0xa7a3,	// (0x0001402f) listscroll_midp_info_pane

0xa78b,	// (0x00014017) listscroll_form_midp_pane_ParamLimits

0xa78b,	// (0x00014017) listscroll_form_midp_pane

0xa797,	// (0x00014023) scroll_bar_cp050

0xa76b,	// (0x00013ff7) list_midp_pane

0xc7b3,	// (0x0001603f) signal_pane_g2_cp

0xa6a5,	// (0x00013f31) listscroll_midp_info_pane_t1_ParamLimits

0xa6a5,	// (0x00013f31) listscroll_midp_info_pane_t1

0xa6bd,	// (0x00013f49) listscroll_midp_info_pane_t2_ParamLimits

0xa6bd,	// (0x00013f49) listscroll_midp_info_pane_t2

0xa6fb,	// (0x00013f87) listscroll_midp_info_pane_t3_ParamLimits

0xa6fb,	// (0x00013f87) listscroll_midp_info_pane_t3

0xa735,	// (0x00013fc1) listscroll_midp_info_pane_t4_ParamLimits

0xa735,	// (0x00013fc1) listscroll_midp_info_pane_t4

0x0003,

0xf826,	// (0x000190b2) listscroll_midp_info_pane_t_ParamLimits

0xf826,	// (0x000190b2) listscroll_midp_info_pane_t

0x8e82,	// (0x0001270e) scroll_pane_cp21

0xa647,	// (0x00013ed3) form_midp_field_choice_group_pane

0xa650,	// (0x00013edc) form_midp_field_text_pane

0xa68b,	// (0x00013f17) form_midp_field_time_pane

0xa693,	// (0x00013f1f) form_midp_gauge_slider_pane

0xa69c,	// (0x00013f28) form_midp_gauge_wait_pane

0x7d0c,	// (0x00011598) form_midp_image_pane

0xa611,	// (0x00013e9d) list_single_midp_pane_ParamLimits

0xa611,	// (0x00013e9d) list_single_midp_pane

0xa5c5,	// (0x00013e51) form_midp_field_text_pane_t1

0xa36e,	// (0x00013bfa) input_focus_pane_cp050

0xa600,	// (0x00013e8c) list_midp_form_text_pane

0xa594,	// (0x00013e20) form_midp_field_choice_group_pane_t1

0xa5a2,	// (0x00013e2e) input_focus_pane_cp051

0xa5b6,	// (0x00013e42) list_midp_choice_pane

0x7d0c,	// (0x00011598) status_idle_pane

0xa578,	// (0x00013e04) form_midp_field_time_pane_t1

0x7d02,	// (0x0001158e) wait_anim_pane_g2_copy1

0xa586,	// (0x00013e12) form_midp_field_time_pane_t2

0x0001,

0x9b08,	// (0x00013394) aid_navinavi_width_2_pane

0xf821,	// (0x000190ad) form_midp_field_time_pane_t

0x7d0c,	// (0x00011598) input_focus_pane_cp052

0x7d0c,	// (0x00011598) bg_input_focus_pane_cp040

0xa538,	// (0x00013dc4) form_midp_gauge_slider_pane_t1

0xa546,	// (0x00013dd2) form_midp_gauge_slider_pane_t2

0xa554,	// (0x00013de0) form_midp_gauge_slider_pane_t3

0xa562,	// (0x00013dee) form_midp_gauge_slider_pane_t4

0x0003,

0xf818,	// (0x000190a4) form_midp_gauge_slider_pane_t

0xa570,	// (0x00013dfc) form_midp_slider_pane

0x7dec,	// (0x00011678) bg_input_focus_pane_cp041_ParamLimits

0x7dec,	// (0x00011678) bg_input_focus_pane_cp041

0xa505,	// (0x00013d91) form_midp_gauge_wait_pane_t1_ParamLimits

0xa505,	// (0x00013d91) form_midp_gauge_wait_pane_t1

0xa517,	// (0x00013da3) form_midp_gauge_wait_pane_t2_ParamLimits

0xa517,	// (0x00013da3) form_midp_gauge_wait_pane_t2

0x0001,

0xf813,	// (0x0001909f) form_midp_gauge_wait_pane_t_ParamLimits

0xf813,	// (0x0001909f) form_midp_gauge_wait_pane_t

0xa529,	// (0x00013db5) form_midp_wait_pane_ParamLimits

0xa529,	// (0x00013db5) form_midp_wait_pane

0xa4cf,	// (0x00013d5b) form_midp_image_pane_g1

0xa4d8,	// (0x00013d64) form_midp_image_pane_t1

0xa4e7,	// (0x00013d73) form_midp_image_pane_t2

0xa4f6,	// (0x00013d82) form_midp_image_pane_t3

0x0002,

0xf80c,	// (0x00019098) form_midp_image_pane_t

0xa4b7,	// (0x00013d43) list_single_midp_pane_g1

0xa4c0,	// (0x00013d4c) list_single_midp_pane_t1

0xa488,	// (0x00013d14) list_midp_form_item_pane_ParamLimits

0xa488,	// (0x00013d14) list_midp_form_item_pane

0x9ab0,	// (0x0001333c) list_midp_form_item_pane_t1

0x9abf,	// (0x0001334b) midp_ticker_pane_g1

0x9acb,	// (0x00013357) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x00018fe5) midp_ticker_pane_g

0x9ad7,	// (0x00013363) midp_ticker_pane_t1

0xb920,	// (0x000151ac) midp_editing_number_pane_t1

0xb8fe,	// (0x0001518a) midp_editing_number_pane

0xb90d,	// (0x00015199) midp_ticker_pane

0xb684,	// (0x00014f10) ai_message_heading_pane

0x7d0c,	// (0x00011598) bg_popup_window_pane_cp14

0xb68c,	// (0x00014f18) listscroll_ai_message_pane

0xb60e,	// (0x00014e9a) ai_message_heading_pane_g1_ParamLimits

0xb60e,	// (0x00014e9a) ai_message_heading_pane_g1

0xb61a,	// (0x00014ea6) ai_message_heading_pane_g2_ParamLimits

0xb61a,	// (0x00014ea6) ai_message_heading_pane_g2

0xb626,	// (0x00014eb2) ai_message_heading_pane_g3_ParamLimits

0xb626,	// (0x00014eb2) ai_message_heading_pane_g3

0xb632,	// (0x00014ebe) ai_message_heading_pane_g4_ParamLimits

0xb632,	// (0x00014ebe) ai_message_heading_pane_g4

0x0003,

0xf94d,	// (0x000191d9) ai_message_heading_pane_g_ParamLimits

0xf94d,	// (0x000191d9) ai_message_heading_pane_g

0xb63e,	// (0x00014eca) ai_message_heading_pane_t1_ParamLimits

0xb63e,	// (0x00014eca) ai_message_heading_pane_t1

0xb658,	// (0x00014ee4) ai_message_heading_pane_t2_ParamLimits

0xb658,	// (0x00014ee4) ai_message_heading_pane_t2

0x0001,

0xf956,	// (0x000191e2) ai_message_heading_pane_t_ParamLimits

0xf956,	// (0x000191e2) ai_message_heading_pane_t

0xb66a,	// (0x00014ef6) bg_popup_heading_pane_cp1_ParamLimits

0xb66a,	// (0x00014ef6) bg_popup_heading_pane_cp1

0xb5fc,	// (0x00014e88) list_ai_message_pane_ParamLimits

0xb5fc,	// (0x00014e88) list_ai_message_pane

0x8e82,	// (0x0001270e) scroll_pane_cp10

0xb598,	// (0x00014e24) list_ai_message_pane_g1

0xb5a0,	// (0x00014e2c) list_ai_message_pane_g2

0x0001,

0xf92a,	// (0x000191b6) list_ai_message_pane_g

0xb5a8,	// (0x00014e34) list_ai_message_pane_t1_ParamLimits

0xb5a8,	// (0x00014e34) list_ai_message_pane_t1

0xb5bd,	// (0x00014e49) list_ai_message_pane_t2_ParamLimits

0xb5bd,	// (0x00014e49) list_ai_message_pane_t2

0xb5d2,	// (0x00014e5e) list_ai_message_pane_t3_ParamLimits

0xb5d2,	// (0x00014e5e) list_ai_message_pane_t3

0xb5e7,	// (0x00014e73) list_ai_message_pane_t4_ParamLimits

0xb5e7,	// (0x00014e73) list_ai_message_pane_t4

0x0003,

0xf92f,	// (0x000191bb) list_ai_message_pane_t_ParamLimits

0xf92f,	// (0x000191bb) list_ai_message_pane_t

0xb582,	// (0x00014e0e) cell_ai_soft_ind_pane_ParamLimits

0xb582,	// (0x00014e0e) cell_ai_soft_ind_pane

0x9ae9,	// (0x00013375) cell_ai_soft_ind_pane_g1_ParamLimits

0x9ae9,	// (0x00013375) cell_ai_soft_ind_pane_g1

0x7d0c,	// (0x00011598) grid_highlight_cp1

0x9af6,	// (0x00013382) text_secondary_cp56_ParamLimits

0x9af6,	// (0x00013382) text_secondary_cp56

0xb557,	// (0x00014de3) example_general_pane_ParamLimits

0xb557,	// (0x00014de3) example_general_pane

0xb563,	// (0x00014def) example_parent_pane_g1_ParamLimits

0xb563,	// (0x00014def) example_parent_pane_g1

0xb56f,	// (0x00014dfb) example_parent_pane_t1_ParamLimits

0xb56f,	// (0x00014dfb) example_parent_pane_t1

0x6777,	// (0x00010003) popup_preview_text_window_ParamLimits

0x6777,	// (0x00010003) popup_preview_text_window

0x9929,	// (0x000131b5) list_single_pane_cp2_g4

0x812b,	// (0x000119b7) bg_popup_preview_window_pane_ParamLimits

0x812b,	// (0x000119b7) bg_popup_preview_window_pane

0xb290,	// (0x00014b1c) popup_preview_text_window_t1_ParamLimits

0xb290,	// (0x00014b1c) popup_preview_text_window_t1

0xb2ae,	// (0x00014b3a) popup_preview_text_window_t2_ParamLimits

0xb2ae,	// (0x00014b3a) popup_preview_text_window_t2

0xb2f7,	// (0x00014b83) popup_preview_text_window_t3_ParamLimits

0xb2f7,	// (0x00014b83) popup_preview_text_window_t3

0xb33c,	// (0x00014bc8) popup_preview_text_window_t4_ParamLimits

0xb33c,	// (0x00014bc8) popup_preview_text_window_t4

0x0004,

0xf8fe,	// (0x0001918a) popup_preview_text_window_t_ParamLimits

0xf8fe,	// (0x0001918a) popup_preview_text_window_t

0xb3ba,	// (0x00014c46) scroll_pane_cp11

0xa252,	// (0x00013ade) bg_popup_preview_window_pane_g1

0xb250,	// (0x00014adc) bg_popup_preview_window_pane_g2

0xb258,	// (0x00014ae4) bg_popup_preview_window_pane_g3

0xb260,	// (0x00014aec) bg_popup_preview_window_pane_g4

0xb268,	// (0x00014af4) bg_popup_preview_window_pane_g5

0xb270,	// (0x00014afc) bg_popup_preview_window_pane_g6

0xb278,	// (0x00014b04) bg_popup_preview_window_pane_g7

0xb280,	// (0x00014b0c) bg_popup_preview_window_pane_g8

0x5996,	// (0x0000f222) aid_popup_width_pane

0x6755,	// (0x0000ffe1) popup_midp_note_alarm_window_ParamLimits

0x6755,	// (0x0000ffe1) popup_midp_note_alarm_window

0x8b84,	// (0x00012410) data_form_pane_ParamLimits

0x8b90,	// (0x0001241c) form_field_data_pane_g1

0x8b9a,	// (0x00012426) form_field_data_pane_t1_ParamLimits

0x8bb4,	// (0x00012440) input_focus_pane_ParamLimits

0x8bc2,	// (0x0001244e) data_form_wide_pane_ParamLimits

0x8bce,	// (0x0001245a) form_field_data_wide_pane_g1

0x8bee,	// (0x0001247a) form_field_data_wide_pane_t1_ParamLimits

0x83ce,	// (0x00011c5a) input_focus_pane_cp6_ParamLimits

0x8e2d,	// (0x000126b9) input_popup_find_pane_g1_ParamLimits

0x8e2d,	// (0x000126b9) input_popup_find_pane_g1

0x5efc,	// (0x0000f788) aid_navi_side_left_pane

0x5f11,	// (0x0000f79d) aid_navi_side_right_pane

0xac69,	// (0x000144f5) bg_popup_window_pane_cp30_ParamLimits

0xac69,	// (0x000144f5) bg_popup_window_pane_cp30

0xace3,	// (0x0001456f) popup_midp_note_alarm_window_g1_ParamLimits

0xace3,	// (0x0001456f) popup_midp_note_alarm_window_g1

0xad13,	// (0x0001459f) popup_midp_note_alarm_window_t1_ParamLimits

0xad13,	// (0x0001459f) popup_midp_note_alarm_window_t1

0xadb4,	// (0x00014640) popup_midp_note_alarm_window_t2_ParamLimits

0xadb4,	// (0x00014640) popup_midp_note_alarm_window_t2

0xae62,	// (0x000146ee) popup_midp_note_alarm_window_t3_ParamLimits

0xae62,	// (0x000146ee) popup_midp_note_alarm_window_t3

0xae94,	// (0x00014720) popup_midp_note_alarm_window_t4_ParamLimits

0xae94,	// (0x00014720) popup_midp_note_alarm_window_t4

0xaeba,	// (0x00014746) popup_midp_note_alarm_window_t5_ParamLimits

0xaeba,	// (0x00014746) popup_midp_note_alarm_window_t5

0x000a,

0xf89b,	// (0x00019127) popup_midp_note_alarm_window_t_ParamLimits

0xf89b,	// (0x00019127) popup_midp_note_alarm_window_t

0xaf66,	// (0x000147f2) wait_bar_pane_cp1_ParamLimits

0xaf66,	// (0x000147f2) wait_bar_pane_cp1

0x7d0c,	// (0x00011598) wait_anim_pane_copy1

0x7d0c,	// (0x00011598) wait_border_pane_copy1

0xa947,	// (0x000141d3) wait_border_pane_g1_copy1

0x8c05,	// (0x00012491) form_field_popup_pane_g1

0x8c0d,	// (0x00012499) form_field_popup_pane_t1_ParamLimits

0x8bb4,	// (0x00012440) input_focus_pane_cp7_ParamLimits

0x8c27,	// (0x000124b3) list_form_pane_ParamLimits

0x8c33,	// (0x000124bf) form_field_popup_wide_pane_g1

0x8c3b,	// (0x000124c7) form_field_popup_wide_pane_t1_ParamLimits

0x8bb4,	// (0x00012440) input_focus_pane_cp8_ParamLimits

0x8c50,	// (0x000124dc) list_form_wide_pane_ParamLimits

0xbb32,	// (0x000153be) aid_size_cell_graphic_pane

0x8d29,	// (0x000125b5) data_form_pane_t1_ParamLimits

0xb8cb,	// (0x00015157) data_form_wide_pane_t1_ParamLimits

0x9e0f,	// (0x0001369b) bg_status_flat_pane

0x7d4c,	// (0x000115d8) title_pane_t1_ParamLimits

0x7db4,	// (0x00011640) title_pane_t2_ParamLimits

0x7dda,	// (0x00011666) title_pane_t3_ParamLimits

0xf55d,	// (0x00018de9) title_pane_t_ParamLimits

0x92fb,	// (0x00012b87) level_1_signal_ParamLimits

0x9308,	// (0x00012b94) level_2_signal_ParamLimits

0x9315,	// (0x00012ba1) level_3_signal_ParamLimits

0x9322,	// (0x00012bae) level_4_signal_ParamLimits

0x932f,	// (0x00012bbb) level_5_signal_ParamLimits

0x933c,	// (0x00012bc8) level_6_signal_ParamLimits

0x9349,	// (0x00012bd5) level_7_signal_ParamLimits

0x92fb,	// (0x00012b87) level_1_battery_ParamLimits

0x9308,	// (0x00012b94) level_2_battery_ParamLimits

0x9315,	// (0x00012ba1) level_3_battery_ParamLimits

0x9322,	// (0x00012bae) level_4_battery_ParamLimits

0x932f,	// (0x00012bbb) level_5_battery_ParamLimits

0x933c,	// (0x00012bc8) level_6_battery_ParamLimits

0x9349,	// (0x00012bd5) level_7_battery_ParamLimits

0xab6e,	// (0x000143fa) bg_status_flat_pane_g1

0xab76,	// (0x00014402) bg_status_flat_pane_g2

0xab7e,	// (0x0001440a) bg_status_flat_pane_g3

0xab86,	// (0x00014412) bg_status_flat_pane_g4

0xab8e,	// (0x0001441a) bg_status_flat_pane_g5

0xab96,	// (0x00014422) bg_status_flat_pane_g6

0xab9e,	// (0x0001442a) bg_status_flat_pane_g7

0x7e02,	// (0x0001168e) tabs_3_active_pane_t1_ParamLimits

0x7e02,	// (0x0001168e) tabs_3_passive_pane_t1_ParamLimits

0x7e1c,	// (0x000116a8) tabs_4_active_pane_t1_ParamLimits

0x7e1c,	// (0x000116a8) tabs_4_1_passive_pane_t1_ParamLimits

0x8ec3,	// (0x0001274f) tabs_2_active_pane_t1_ParamLimits

0x8ec3,	// (0x0001274f) tabs_2_passive_pane_t1_ParamLimits

0x8ed5,	// (0x00012761) bg_active_tab_pane_cp4_ParamLimits

0x8ee3,	// (0x0001276f) tabs_2_long_active_pane_t1_ParamLimits

0x8ef6,	// (0x00012782) bg_passive_tab_pane_cp4_ParamLimits

0x6a94,	// (0x00010320) list_single_midp_graphic_pane_t1_ParamLimits

0x8ed5,	// (0x00012761) bg_active_tab_pane_cp5_ParamLimits

0x8f02,	// (0x0001278e) tabs_3_long_active_pane_t1_ParamLimits

0x8ef6,	// (0x00012782) bg_passive_tab_pane_cp5_ParamLimits

0x6a94,	// (0x00010320) list_single_midp_graphic_pane_t1

0x9e0f,	// (0x0001369b) bg_status_flat_pane_ParamLimits

0x9ed2,	// (0x0001375e) indicator_pane_cp2_ParamLimits

0x9ed2,	// (0x0001375e) indicator_pane_cp2

0x9ff7,	// (0x00013883) navi_pane_srt_ParamLimits

0x9ff7,	// (0x00013883) navi_pane_srt

0xa01b,	// (0x000138a7) popup_clock_digital_analogue_window_cp1

0x7ee3,	// (0x0001176f) indicator_pane_t1

0x99ec,	// (0x00013278) copy_highlight_pane

0x99ec,	// (0x00013278) cursor_graphics_pane

0x99ec,	// (0x00013278) graphic_within_text_pane

0x99ec,	// (0x00013278) link_highlight_pane

0xb37d,	// (0x00014c09) popup_preview_text_window_t5_ParamLimits

0xb37d,	// (0x00014c09) popup_preview_text_window_t5

0x9b10,	// (0x0001339c) cursor_digital_pane

0x9b10,	// (0x0001339c) cursor_primary_pane

0x9b21,	// (0x000133ad) cursor_primary_small_pane

0x9b29,	// (0x000133b5) cursor_secondary_pane

0x9b31,	// (0x000133bd) cursor_title_pane

0x9b10,	// (0x0001339c) link_highlight_digital_pane

0x9b18,	// (0x000133a4) link_highlight_primary_pane

0x9b21,	// (0x000133ad) link_highlight_primary_small_pane

0x9b29,	// (0x000133b5) link_highlight_secondary_pane

0x9b31,	// (0x000133bd) link_highlight_title_pane

0x9b10,	// (0x0001339c) copy_highlight_digital_pane

0x9b10,	// (0x0001339c) copy_highlight_primary_pane

0x9b21,	// (0x000133ad) copy_highlight_primary_small_pane

0x9b29,	// (0x000133b5) copy_highlight_secondary_pane

0x9b31,	// (0x000133bd) copy_highlight_title_pane

0x9b29,	// (0x000133b5) graphic_text_digital_pane

0xac0c,	// (0x00014498) graphic_text_primary_pane

0xac15,	// (0x000144a1) graphic_text_primary_small_pane

0x9b21,	// (0x000133ad) graphic_text_secondary_pane

0x9b10,	// (0x0001339c) graphic_text_title_pane

0x9b39,	// (0x000133c5) cursor_primary_pane_g1

0xabfe,	// (0x0001448a) cursor_text_primary_t1

0xabe6,	// (0x00014472) cursor_primary_small_pane_g1

0xabf0,	// (0x0001447c) cursor_text_primary_small_t1

0xabce,	// (0x0001445a) cursor_primary_small_pane_g1_copy1

0xabd8,	// (0x00014464) cursor_text_primary_small_t1_copy1

0xabb6,	// (0x00014442) cursor_text_title_t1

0xabc4,	// (0x00014450) cursor_title_pane_g1

0x9b39,	// (0x000133c5) cursor_digital_pane_g1

0x9b43,	// (0x000133cf) cursor_text_digital_t1

0xab57,	// (0x000143e3) link_highlight_primary_pane_g1

0xab5f,	// (0x000143eb) link_highlight_primary_pane_t1

0x9b51,	// (0x000133dd) link_highlight_primary_small_pane_g1

0x9b59,	// (0x000133e5) link_highlight_primary_small_pane_t1

0x9b51,	// (0x000133dd) link_highlight_secondary_pane_g1

0x9b68,	// (0x000133f4) link_highlight_secondary_pane_t1

0xaacb,	// (0x00014357) link_highlight_title_pane_g1

0xaad3,	// (0x0001435f) link_highlight_title_pane_t1

0xaab4,	// (0x00014340) link_highlight_digital_pane_g1

0xaabc,	// (0x00014348) link_highlight_digital_pane_t1

0xa98c,	// (0x00014218) copy_highlight_primary_pane_g1

0xa994,	// (0x00014220) copy_highlight_primary_pane_t1

0xa966,	// (0x000141f2) copy_highlight_primary_small_pane_g1

0xa97d,	// (0x00014209) copy_highlight_primary_small_pane_t1

0x9b77,	// (0x00013403) copy_highlight_secondary_pane_g1

0x9b7f,	// (0x0001340b) copy_highlight_secondary_pane_t1

0xa966,	// (0x000141f2) copy_highlight_title_pane_g1

0xa96e,	// (0x000141fa) copy_highlight_title_pane_t1

0xa98c,	// (0x00014218) copy_highlight_digital_pane_g1

0xbcfc,	// (0x00015588) copy_highlight_digital_pane_t1

0xbc50,	// (0x000154dc) graphic_text_primary_pane_g1

0xbce0,	// (0x0001556c) graphic_text_primary_pane_t1

0xbcee,	// (0x0001557a) graphic_text_primary_pane_t2

0x0001,

0xf9ca,	// (0x00019256) graphic_text_primary_pane_t

0xbcbc,	// (0x00015548) graphic_text_primary_small_pane_g1

0xbcc4,	// (0x00015550) graphic_text_primary_small_pane_t1

0xbcd2,	// (0x0001555e) graphic_text_primary_small_pane_t2

0x0001,

0xf9c5,	// (0x00019251) graphic_text_primary_small_pane_t

0xbc98,	// (0x00015524) graphic_text_secondary_pane_g1

0xbca0,	// (0x0001552c) graphic_text_secondary_pane_t1

0xbcae,	// (0x0001553a) graphic_text_secondary_pane_t2

0x0001,

0xf9c0,	// (0x0001924c) graphic_text_secondary_pane_t

0xbc74,	// (0x00015500) graphic_text_title_pane_g1

0xbc7c,	// (0x00015508) graphic_text_title_pane_t1

0xbc8a,	// (0x00015516) graphic_text_title_pane_t2

0x0001,

0xf9bb,	// (0x00019247) graphic_text_title_pane_t

0xbc50,	// (0x000154dc) graphic_text_digital_pane_g1

0xbc58,	// (0x000154e4) graphic_text_digital_pane_t1

0xbc66,	// (0x000154f2) graphic_text_digital_pane_t2

0x0001,

0xf9b6,	// (0x00019242) graphic_text_digital_pane_t

0x7dec,	// (0x00011678) navi_icon_pane_srt_ParamLimits

0x7dec,	// (0x00011678) navi_icon_pane_srt

0x7d0c,	// (0x00011598) navi_midp_pane_srt

0x7d0c,	// (0x00011598) navi_navi_pane_srt

0x7dec,	// (0x00011678) navi_text_pane_srt_ParamLimits

0x7dec,	// (0x00011678) navi_text_pane_srt

0xbc1b,	// (0x000154a7) navi_navi_icon_text_pane_srt

0xbc23,	// (0x000154af) navi_navi_pane_srt_g1_ParamLimits

0xbc23,	// (0x000154af) navi_navi_pane_srt_g1

0xbc35,	// (0x000154c1) navi_navi_pane_srt_g2_ParamLimits

0xbc35,	// (0x000154c1) navi_navi_pane_srt_g2

0x0001,

0xf9b1,	// (0x0001923d) navi_navi_pane_srt_g_ParamLimits

0xf9b1,	// (0x0001923d) navi_navi_pane_srt_g

0xbc47,	// (0x000154d3) navi_navi_tabs_pane_srt

0xbc1b,	// (0x000154a7) navi_navi_text_pane_srt

0xbc1b,	// (0x000154a7) navi_navi_volume_pane_srt

0xbc0c,	// (0x00015498) navi_navi_text_pane_srt_t1

0x6e08,	// (0x00010694) navi_navi_volume_pane_srt_g1

0x6e10,	// (0x0001069c) volume_small_pane_srt_ParamLimits

0x6e10,	// (0x0001069c) volume_small_pane_srt

0x61d3,	// (0x0000fa5f) volume_small_pane_srt_g1_ParamLimits

0x61d3,	// (0x0000fa5f) volume_small_pane_srt_g1

0x61e3,	// (0x0000fa6f) volume_small_pane_srt_g2_ParamLimits

0x61e3,	// (0x0000fa6f) volume_small_pane_srt_g2

0x61f4,	// (0x0000fa80) volume_small_pane_srt_g3_ParamLimits

0x61f4,	// (0x0000fa80) volume_small_pane_srt_g3

0x6205,	// (0x0000fa91) volume_small_pane_srt_g4_ParamLimits

0x6205,	// (0x0000fa91) volume_small_pane_srt_g4

0x6216,	// (0x0000faa2) volume_small_pane_srt_g5_ParamLimits

0x6216,	// (0x0000faa2) volume_small_pane_srt_g5

0x6227,	// (0x0000fab3) volume_small_pane_srt_g6_ParamLimits

0x6227,	// (0x0000fab3) volume_small_pane_srt_g6

0x6238,	// (0x0000fac4) volume_small_pane_srt_g7_ParamLimits

0x6238,	// (0x0000fac4) volume_small_pane_srt_g7

0x6249,	// (0x0000fad5) volume_small_pane_srt_g8_ParamLimits

0x6249,	// (0x0000fad5) volume_small_pane_srt_g8

0x625a,	// (0x0000fae6) volume_small_pane_srt_g9_ParamLimits

0x625a,	// (0x0000fae6) volume_small_pane_srt_g9

0x626b,	// (0x0000faf7) volume_small_pane_srt_g10_ParamLimits

0x626b,	// (0x0000faf7) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x00018fea) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x00018fea) volume_small_pane_srt_g

0x81d4,	// (0x00011a60) query_popup_data_pane_cp2

0xbbf2,	// (0x0001547e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xbbf2,	// (0x0001547e) navi_navi_icon_text_pane_srt_t1

0xac0c,	// (0x00014498) navi_tabs_2_long_pane_srt

0xac0c,	// (0x00014498) navi_tabs_2_pane_srt

0xac0c,	// (0x00014498) navi_tabs_3_long_pane_srt

0xac0c,	// (0x00014498) navi_tabs_3_pane_srt

0xac0c,	// (0x00014498) navi_tabs_4_pane_srt

0x6de8,	// (0x00010674) tabs_2_active_pane_srt_ParamLimits

0x6de8,	// (0x00010674) tabs_2_active_pane_srt

0x6df8,	// (0x00010684) tabs_2_passive_pane_srt_ParamLimits

0x6df8,	// (0x00010684) tabs_2_passive_pane_srt

0x9d30,	// (0x000135bc) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9d30,	// (0x000135bc) bg_passive_tab_pane_cp1_srt

0xbbbe,	// (0x0001544a) bg_passive_tab_pane_g1_cp1_srt

0x9646,	// (0x00012ed2) bg_passive_tab_pane_g2_cp1_srt

0xbbc7,	// (0x00015453) bg_passive_tab_pane_g3_cp1_srt

0x7dec,	// (0x00011678) bg_active_tab_pane_cp1_srt_ParamLimits

0x7dec,	// (0x00011678) bg_active_tab_pane_cp1_srt

0xbbd0,	// (0x0001545c) tabs_2_active_pane_srt_g1

0xbbd8,	// (0x00015464) tabs_2_active_pane_srt_t1_ParamLimits

0xbbd8,	// (0x00015464) tabs_2_active_pane_srt_t1

0xbbbe,	// (0x0001544a) bg_active_tab_pane_g1_cp1_srt

0x9646,	// (0x00012ed2) bg_active_tab_pane_g2_cp1_srt

0xbbc7,	// (0x00015453) bg_active_tab_pane_g3_cp1_srt

0x6db5,	// (0x00010641) tabs_3_active_pane_srt_ParamLimits

0x6db5,	// (0x00010641) tabs_3_active_pane_srt

0x6dc6,	// (0x00010652) tabs_3_passive_pane_cp_srt_ParamLimits

0x6dc6,	// (0x00010652) tabs_3_passive_pane_cp_srt

0x6dd7,	// (0x00010663) tabs_3_passive_pane_srt_ParamLimits

0x6dd7,	// (0x00010663) tabs_3_passive_pane_srt

0x9d30,	// (0x000135bc) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9d30,	// (0x000135bc) bg_passive_tab_pane_cp2_srt

0x9b8e,	// (0x0001341a) bg_passive_tab_pane_g1_cp2_srt

0x9646,	// (0x00012ed2) bg_passive_tab_pane_g2_cp2_srt

0x9b97,	// (0x00013423) bg_passive_tab_pane_g3_cp2_srt

0x7dec,	// (0x00011678) bg_active_tab_pane_cp2_srt_ParamLimits

0x7dec,	// (0x00011678) bg_active_tab_pane_cp2_srt

0xbba4,	// (0x00015430) tabs_3_active_pane_srt_g1

0xbbac,	// (0x00015438) tabs_3_active_pane_srt_t1_ParamLimits

0xbbac,	// (0x00015438) tabs_3_active_pane_srt_t1

0x9b8e,	// (0x0001341a) bg_active_tab_pane_g1_cp2_srt

0x9646,	// (0x00012ed2) bg_active_tab_pane_g2_cp2_srt

0x9b97,	// (0x00013423) bg_active_tab_pane_g3_cp2_srt

0x6d6d,	// (0x000105f9) tabs_4_active_pane_srt_ParamLimits

0x6d6d,	// (0x000105f9) tabs_4_active_pane_srt

0x6d7f,	// (0x0001060b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6d7f,	// (0x0001060b) tabs_4_passive_pane_cp2_srt

0x63ce,	// (0x0000fc5a) aid_size_cell_toolbar

0x8ef6,	// (0x00012782) main_idle_act_pane_ParamLimits

0x6589,	// (0x0000fe15) popup_large_graphic_colour_window_ParamLimits

0x68ee,	// (0x0001017a) popup_toolbar_window_ParamLimits

0x68ee,	// (0x0001017a) popup_toolbar_window

0xb94b,	// (0x000151d7) list_single_graphic_2heading_pane_ParamLimits

0xb94b,	// (0x000151d7) list_single_graphic_2heading_pane

0x90af,	// (0x0001293b) aid_size_cell_apps_grid_lsc_pane

0x90c1,	// (0x0001294d) aid_size_cell_apps_grid_prt_pane

0x9d30,	// (0x000135bc) bg_wml_button_pane_cp1_ParamLimits

0x9d30,	// (0x000135bc) bg_wml_button_pane_cp1

0xa5c5,	// (0x00013e51) form_midp_field_text_pane_t1_ParamLimits

0xa36e,	// (0x00013bfa) input_focus_pane_cp050_ParamLimits

0xa600,	// (0x00013e8c) list_midp_form_text_pane_ParamLimits

0xa5a2,	// (0x00013e2e) input_focus_pane_cp051_ParamLimits

0xa5b6,	// (0x00013e42) list_midp_choice_pane_ParamLimits

0xa424,	// (0x00013cb0) list_single_2graphic_pane_cp3_ParamLimits

0xa424,	// (0x00013cb0) list_single_2graphic_pane_cp3

0xa44f,	// (0x00013cdb) list_single_midp_graphic_pane_ParamLimits

0xa44f,	// (0x00013cdb) list_single_midp_graphic_pane

0x6999,	// (0x00010225) list_single_graphic_2heading_pane_g1_ParamLimits

0x6999,	// (0x00010225) list_single_graphic_2heading_pane_g1

0x69a5,	// (0x00010231) list_single_graphic_2heading_pane_g4_ParamLimits

0x69a5,	// (0x00010231) list_single_graphic_2heading_pane_g4

0x69b1,	// (0x0001023d) list_single_graphic_2heading_pane_g5_ParamLimits

0x69b1,	// (0x0001023d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0001903d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0001903d) list_single_graphic_2heading_pane_g

0x69bd,	// (0x00010249) list_single_graphic_2heading_pane_t1_ParamLimits

0x69bd,	// (0x00010249) list_single_graphic_2heading_pane_t1

0x69d1,	// (0x0001025d) list_single_graphic_2heading_pane_t2_ParamLimits

0x69d1,	// (0x0001025d) list_single_graphic_2heading_pane_t2

0x69ed,	// (0x00010279) list_single_graphic_2heading_pane_t3_ParamLimits

0x69ed,	// (0x00010279) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x00019044) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x00019044) list_single_graphic_2heading_pane_t

0xa17a,	// (0x00013a06) bg_popup_sub_pane_cp2

0xa1a4,	// (0x00013a30) grid_toobar_pane

0x6a05,	// (0x00010291) cell_toolbar_pane_ParamLimits

0x6a05,	// (0x00010291) cell_toolbar_pane

0xa1f6,	// (0x00013a82) cell_toolbar_pane_g1_ParamLimits

0xa1f6,	// (0x00013a82) cell_toolbar_pane_g1

0xa20a,	// (0x00013a96) cell_toolbar_pane_g2_ParamLimits

0xa20a,	// (0x00013a96) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x00019052) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x00019052) cell_toolbar_pane_g

0xa22c,	// (0x00013ab8) grid_highlight_pane_cp2_ParamLimits

0xa22c,	// (0x00013ab8) grid_highlight_pane_cp2

0xa246,	// (0x00013ad2) toolbar_button_pane

0xa252,	// (0x00013ade) toolbar_button_pane_g1

0xa25a,	// (0x00013ae6) toolbar_button_pane_g2

0xa262,	// (0x00013aee) toolbar_button_pane_g3

0xa26a,	// (0x00013af6) toolbar_button_pane_g4

0xa272,	// (0x00013afe) toolbar_button_pane_g5

0xa27a,	// (0x00013b06) toolbar_button_pane_g6

0xa282,	// (0x00013b0e) toolbar_button_pane_g7

0xa28a,	// (0x00013b16) toolbar_button_pane_g8

0xa292,	// (0x00013b1e) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x00019057) toolbar_button_pane_g

0x6a3d,	// (0x000102c9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6a3d,	// (0x000102c9) list_single_2graphic_pane_g1_cp3

0x6a49,	// (0x000102d5) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6a49,	// (0x000102d5) list_single_2graphic_pane_g2_cp3

0x6a5a,	// (0x000102e6) list_single_2graphic_pane_g3_cp3

0x6a62,	// (0x000102ee) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6a62,	// (0x000102ee) list_single_2graphic_pane_g4_cp3

0x6a6e,	// (0x000102fa) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6a6e,	// (0x000102fa) list_single_2graphic_pane_t1_cp3

0x6a88,	// (0x00010314) list_single_midp_graphic_pane_g2_ParamLimits

0x6a88,	// (0x00010314) list_single_midp_graphic_pane_g2

0x63d6,	// (0x0000fc62) aid_zoom_text_primary

0x63de,	// (0x0000fc6a) aid_zoom_text_secondary

0x9c4b,	// (0x000134d7) status_small_pane_g7_ParamLimits

0x9c4b,	// (0x000134d7) status_small_pane_g7

0x9c6e,	// (0x000134fa) status_small_pane_t1_ParamLimits

0x7d23,	// (0x000115af) title_pane_g2

0x0003,

0xf554,	// (0x00018de0) title_pane_g

0x8275,	// (0x00011b01) aid_size_cell_colour_1_pane_ParamLimits

0x8275,	// (0x00011b01) aid_size_cell_colour_1_pane

0x8289,	// (0x00011b15) aid_size_cell_colour_2_pane_ParamLimits

0x8289,	// (0x00011b15) aid_size_cell_colour_2_pane

0x829d,	// (0x00011b29) aid_size_cell_colour_3_pane_ParamLimits

0x829d,	// (0x00011b29) aid_size_cell_colour_3_pane

0x82b1,	// (0x00011b3d) aid_size_cell_colour_4_pane_ParamLimits

0x82b1,	// (0x00011b3d) aid_size_cell_colour_4_pane

0x5e38,	// (0x0000f6c4) title_pane_stacon_g1_ParamLimits

0x5e38,	// (0x0000f6c4) title_pane_stacon_g1

0xa9eb,	// (0x00014277) popup_note_wait_window_g3_ParamLimits

0xa9eb,	// (0x00014277) popup_note_wait_window_g3

0xaa61,	// (0x000142ed) popup_note_wait_window_t5_ParamLimits

0xaa61,	// (0x000142ed) popup_note_wait_window_t5

0x7d0c,	// (0x00011598) main_feb_china_hwr_fs_writing_pane

0x6472,	// (0x0000fcfe) popup_feb_china_hwr_fs_window_ParamLimits

0x6472,	// (0x0000fcfe) popup_feb_china_hwr_fs_window

0x6aaa,	// (0x00010336) aid_size_cell_hwr_fs_ParamLimits

0x6aaa,	// (0x00010336) aid_size_cell_hwr_fs

0xa36e,	// (0x00013bfa) bg_popup_sub_pane_cp3_ParamLimits

0xa36e,	// (0x00013bfa) bg_popup_sub_pane_cp3

0x6abf,	// (0x0001034b) grid_hwr_fs_pane_ParamLimits

0x6abf,	// (0x0001034b) grid_hwr_fs_pane

0x6ad7,	// (0x00010363) linegrid_hwr_fs_pane_ParamLimits

0x6ad7,	// (0x00010363) linegrid_hwr_fs_pane

0x6ae7,	// (0x00010373) cell_hwr_fs_pane_ParamLimits

0x6ae7,	// (0x00010373) cell_hwr_fs_pane

0xa37a,	// (0x00013c06) linegrid_hwr_fs_pane_g1_ParamLimits

0xa37a,	// (0x00013c06) linegrid_hwr_fs_pane_g1

0xa386,	// (0x00013c12) linegrid_hwr_fs_pane_g2_ParamLimits

0xa386,	// (0x00013c12) linegrid_hwr_fs_pane_g2

0xa398,	// (0x00013c24) linegrid_hwr_fs_pane_g3_ParamLimits

0xa398,	// (0x00013c24) linegrid_hwr_fs_pane_g3

0x6b09,	// (0x00010395) linegrid_hwr_fs_pane_g4_ParamLimits

0x6b09,	// (0x00010395) linegrid_hwr_fs_pane_g4

0x6b23,	// (0x000103af) linegrid_hwr_fs_pane_g5_ParamLimits

0x6b23,	// (0x000103af) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f1,	// (0x0001907d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0001907d) linegrid_hwr_fs_pane_g

0xa3a4,	// (0x00013c30) cell_hwr_fs_pane_g1_ParamLimits

0xa3a4,	// (0x00013c30) cell_hwr_fs_pane_g1

0xa0b1,	// (0x0001393d) cell_hwr_fs_pane_g2_ParamLimits

0xa0b1,	// (0x0001393d) cell_hwr_fs_pane_g2

0xa3ba,	// (0x00013c46) cell_hwr_fs_pane_g3_ParamLimits

0xa3ba,	// (0x00013c46) cell_hwr_fs_pane_g3

0xa3c7,	// (0x00013c53) cell_hwr_fs_pane_g4_ParamLimits

0xa3c7,	// (0x00013c53) cell_hwr_fs_pane_g4

0x0003,

0xf7fc,	// (0x00019088) cell_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x00019088) cell_hwr_fs_pane_g

0x6b39,	// (0x000103c5) cell_hwr_fs_pane_t1

0x7d0c,	// (0x00011598) grid_highlight_pane_cp6

0x7d0c,	// (0x00011598) main_idle_act2_pane

0x8e69,	// (0x000126f5) aid_inside_area_popup_secondary

0xb0a0,	// (0x0001492c) aid_inside_area_window_primary_ParamLimits

0xb0a0,	// (0x0001492c) aid_inside_area_window_primary

0xbd0b,	// (0x00015597) ai2_news_ticker_pane

0xbd13,	// (0x0001559f) aid_size_cell_ai1_link_ParamLimits

0xbd13,	// (0x0001559f) aid_size_cell_ai1_link

0xbd2d,	// (0x000155b9) popup_ai2_data_window_ParamLimits

0xbd2d,	// (0x000155b9) popup_ai2_data_window

0xbd41,	// (0x000155cd) popup_ai2_link_window_ParamLimits

0xbd41,	// (0x000155cd) popup_ai2_link_window

0xa36e,	// (0x00013bfa) bg_popup_sub_pane_cp4_ParamLimits

0xa36e,	// (0x00013bfa) bg_popup_sub_pane_cp4

0xbd55,	// (0x000155e1) grid_ai2_link_pane_ParamLimits

0xbd55,	// (0x000155e1) grid_ai2_link_pane

0xbd6c,	// (0x000155f8) popup_ai2_link_window_g1_ParamLimits

0xbd6c,	// (0x000155f8) popup_ai2_link_window_g1

0xbd78,	// (0x00015604) popup_ai2_link_window_g2_ParamLimits

0xbd78,	// (0x00015604) popup_ai2_link_window_g2

0x0001,

0xf9cf,	// (0x0001925b) popup_ai2_link_window_g_ParamLimits

0xf9cf,	// (0x0001925b) popup_ai2_link_window_g

0xbd87,	// (0x00015613) ai2_mp_button_pane

0xbd8f,	// (0x0001561b) ai2_mp_volume_pane

0xa5a2,	// (0x00013e2e) bg_popup_sub_pane_cp5_ParamLimits

0xa5a2,	// (0x00013e2e) bg_popup_sub_pane_cp5

0xbd97,	// (0x00015623) heading_ai2_gene_pane_ParamLimits

0xbd97,	// (0x00015623) heading_ai2_gene_pane

0xbda3,	// (0x0001562f) list_ai2_gene_pane_ParamLimits

0xbda3,	// (0x0001562f) list_ai2_gene_pane

0xbe2d,	// (0x000156b9) cell_ai2_link_pane_ParamLimits

0xbe2d,	// (0x000156b9) cell_ai2_link_pane

0xbe43,	// (0x000156cf) cell_ai2_link_pane_g1

0x7d0c,	// (0x00011598) grid_highlight_pane_cp7

0x6e25,	// (0x000106b1) ai2_mp_volume_pane_g1

0xbf14,	// (0x000157a0) ai2_mp_volume_pane_g2

0xbe89,	// (0x00015715) list_ai2_gene_pane_t1

0xbf1c,	// (0x000157a8) ai2_mp_volume_pane_g3

0x0002,

0xf9e8,	// (0x00019274) ai2_mp_volume_pane_g

0x6e2d,	// (0x000106b9) volume_small_pane_cp3

0xbf24,	// (0x000157b0) aid_size_cell_ai2_button

0xbf2c,	// (0x000157b8) grid_ai2_button_pane

0xbf35,	// (0x000157c1) cell_ai2_button_pane_ParamLimits

0xbf35,	// (0x000157c1) cell_ai2_button_pane

0x7d02,	// (0x0001158e) cell_ai2_button_pane_g1

0x7d0c,	// (0x00011598) grid_highlight_pane_cp8

0xbed4,	// (0x00015760) ai2_gene_pane_t1_ParamLimits

0xbed4,	// (0x00015760) ai2_gene_pane_t1

0x63c4,	// (0x0000fc50) aid_height_parent_landscape

0xb737,	// (0x00014fc3) aid_height_set_list

0xb748,	// (0x00014fd4) aid_size_parent

0xbb32,	// (0x000153be) aid_size_cell_graphic_pane_ParamLimits

0xbdb3,	// (0x0001563f) popup_ai2_data_window_g1_ParamLimits

0xbdb3,	// (0x0001563f) popup_ai2_data_window_g1

0xbe01,	// (0x0001568d) ai2_news_ticker_pane_g1

0xbe09,	// (0x00015695) ai2_news_ticker_pane_g2

0x0001,

0xf9d4,	// (0x00019260) ai2_news_ticker_pane_g

0xbe11,	// (0x0001569d) ai2_news_ticker_pane_t1

0xbe1f,	// (0x000156ab) ai2_news_ticker_pane_t2

0x0001,

0xf9d9,	// (0x00019265) ai2_news_ticker_pane_t

0xbe4c,	// (0x000156d8) heading_ai2_gene_pane_g1

0xbe54,	// (0x000156e0) heading_ai2_gene_pane_t1_ParamLimits

0xbe54,	// (0x000156e0) heading_ai2_gene_pane_t1

0xbe69,	// (0x000156f5) list_highlight_pane_cp6

0xbe71,	// (0x000156fd) ai2_gene_pane_ParamLimits

0xbe71,	// (0x000156fd) ai2_gene_pane

0xbe97,	// (0x00015723) list_ai2_gene_pane_t2

0x0001,

0xf9de,	// (0x0001926a) list_ai2_gene_pane_t

0xbea5,	// (0x00015731) list_highlight_pane_cp8_ParamLimits

0xbea5,	// (0x00015731) list_highlight_pane_cp8

0xbeb6,	// (0x00015742) ai2_gene_pane_g1_ParamLimits

0xbeb6,	// (0x00015742) ai2_gene_pane_g1

0xbec8,	// (0x00015754) ai2_gene_pane_g2_ParamLimits

0xbec8,	// (0x00015754) ai2_gene_pane_g2

0x0001,

0xf9e3,	// (0x0001926f) ai2_gene_pane_g_ParamLimits

0xf9e3,	// (0x0001926f) ai2_gene_pane_g

0x85f3,	// (0x00011e7f) scroll_pane_cp12

0x6383,	// (0x0000fc0f) control_pane_t3_ParamLimits

0x6383,	// (0x0000fc0f) control_pane_t3

0x9c5f,	// (0x000134eb) status_small_pane_g8_ParamLimits

0x9c5f,	// (0x000134eb) status_small_pane_g8

0x6554,	// (0x0000fde0) popup_find_window_ParamLimits

0x6769,	// (0x0000fff5) popup_note_image_window_ParamLimits

0x868a,	// (0x00011f16) list_double2_graphic_pane_vc_g1_ParamLimits

0x868a,	// (0x00011f16) list_double2_graphic_pane_vc_g1

0x8610,	// (0x00011e9c) list_double2_graphic_pane_vc_g2_ParamLimits

0x8610,	// (0x00011e9c) list_double2_graphic_pane_vc_g2

0x861c,	// (0x00011ea8) list_double2_graphic_pane_vc_g3_ParamLimits

0x861c,	// (0x00011ea8) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0001904b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001904b) list_double2_graphic_pane_vc_g

0xa1e0,	// (0x00013a6c) list_double2_graphic_pane_vc_t1_ParamLimits

0xa1e0,	// (0x00013a6c) list_double2_graphic_pane_vc_t1

0x8610,	// (0x00011e9c) list_single_heading_pane_vc_g1_ParamLimits

0x8610,	// (0x00011e9c) list_single_heading_pane_vc_g1

0x861c,	// (0x00011ea8) list_single_heading_pane_vc_g2_ParamLimits

0x861c,	// (0x00011ea8) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00018e5a) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00018e5a) list_single_heading_pane_vc_g

0xa29a,	// (0x00013b26) list_single_heading_pane_vc_t1_ParamLimits

0xa29a,	// (0x00013b26) list_single_heading_pane_vc_t1

0xa2b0,	// (0x00013b3c) list_single_heading_pane_vc_t2_ParamLimits

0xa2b0,	// (0x00013b3c) list_single_heading_pane_vc_t2

0x0001,

0xf7e0,	// (0x0001906c) list_single_heading_pane_vc_t_ParamLimits

0xf7e0,	// (0x0001906c) list_single_heading_pane_vc_t

0xa2c4,	// (0x00013b50) list_setting_number_pane_vc_g1_ParamLimits

0xa2c4,	// (0x00013b50) list_setting_number_pane_vc_g1

0xa2d0,	// (0x00013b5c) list_setting_number_pane_vc_g2_ParamLimits

0xa2d0,	// (0x00013b5c) list_setting_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x00019071) list_setting_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x00019071) list_setting_number_pane_vc_g

0xa2dc,	// (0x00013b68) list_setting_number_pane_vc_t1_ParamLimits

0xa2dc,	// (0x00013b68) list_setting_number_pane_vc_t1

0xa2f0,	// (0x00013b7c) list_setting_number_pane_vc_t2_ParamLimits

0xa2f0,	// (0x00013b7c) list_setting_number_pane_vc_t2

0xa30a,	// (0x00013b96) list_setting_number_pane_vc_t3_ParamLimits

0xa30a,	// (0x00013b96) list_setting_number_pane_vc_t3

0x0002,

0xf7ea,	// (0x00019076) list_setting_number_pane_vc_t_ParamLimits

0xf7ea,	// (0x00019076) list_setting_number_pane_vc_t

0xa332,	// (0x00013bbe) set_value_pane_vc_ParamLimits

0xa332,	// (0x00013bbe) set_value_pane_vc

0xb94b,	// (0x000151d7) list_double2_graphic_pane_vc_ParamLimits

0xb94b,	// (0x000151d7) list_double2_graphic_pane_vc

0xb95e,	// (0x000151ea) list_double2_large_graphic_pane_vc_ParamLimits

0xb95e,	// (0x000151ea) list_double2_large_graphic_pane_vc

0xb94b,	// (0x000151d7) list_double2_pane_vc_ParamLimits

0xb94b,	// (0x000151d7) list_double2_pane_vc

0xb94b,	// (0x000151d7) list_double_graphic_heading_pane_vc_ParamLimits

0xb94b,	// (0x000151d7) list_double_graphic_heading_pane_vc

0xb94b,	// (0x000151d7) list_double_graphic_pane_vc_ParamLimits

0xb94b,	// (0x000151d7) list_double_graphic_pane_vc

0xb94b,	// (0x000151d7) list_double_heading_pane_vc_ParamLimits

0xb94b,	// (0x000151d7) list_double_heading_pane_vc

0xb95e,	// (0x000151ea) list_double_large_graphic_pane_vc_ParamLimits

0xb95e,	// (0x000151ea) list_double_large_graphic_pane_vc

0xb94b,	// (0x000151d7) list_double_number_pane_vc_ParamLimits

0xb94b,	// (0x000151d7) list_double_number_pane_vc

0xb94b,	// (0x000151d7) list_double_pane_vc_ParamLimits

0xb94b,	// (0x000151d7) list_double_pane_vc

0xb94b,	// (0x000151d7) list_double_time_pane_vc_ParamLimits

0xb94b,	// (0x000151d7) list_double_time_pane_vc

0xb94b,	// (0x000151d7) list_setting_number_pane_vc_ParamLimits

0xb94b,	// (0x000151d7) list_setting_number_pane_vc

0xb94b,	// (0x000151d7) list_setting_pane_vc_ParamLimits

0xb94b,	// (0x000151d7) list_setting_pane_vc

0xb94b,	// (0x000151d7) list_single_graphic_heading_pane_vc_ParamLimits

0xb94b,	// (0x000151d7) list_single_graphic_heading_pane_vc

0xb94b,	// (0x000151d7) list_single_heading_pane_vc_ParamLimits

0xb94b,	// (0x000151d7) list_single_heading_pane_vc

0xb970,	// (0x000151fc) list_single_number_heading_pane_vc_ParamLimits

0xb970,	// (0x000151fc) list_single_number_heading_pane_vc

0xbf68,	// (0x000157f4) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xbf68,	// (0x000157f4) list_double_graphic_heading_pane_vc_g1

0xbf74,	// (0x00015800) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xbf74,	// (0x00015800) list_double_graphic_heading_pane_vc_g2

0xbf80,	// (0x0001580c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xbf80,	// (0x0001580c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ef,	// (0x0001927b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ef,	// (0x0001927b) list_double_graphic_heading_pane_vc_g

0xbf8c,	// (0x00015818) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xbf8c,	// (0x00015818) list_double_graphic_heading_pane_vc_t1

0xbfa8,	// (0x00015834) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xbfa8,	// (0x00015834) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f6,	// (0x00019282) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f6,	// (0x00019282) list_double_graphic_heading_pane_vc_t

0xa2c4,	// (0x00013b50) list_setting_pane_vc_g1_ParamLimits

0xa2c4,	// (0x00013b50) list_setting_pane_vc_g1

0xa2d0,	// (0x00013b5c) list_setting_pane_vc_g2_ParamLimits

0xa2d0,	// (0x00013b5c) list_setting_pane_vc_g2

0x0001,

0xf7e5,	// (0x00019071) list_setting_pane_vc_g_ParamLimits

0xf7e5,	// (0x00019071) list_setting_pane_vc_g

0xc1c3,	// (0x00015a4f) list_setting_pane_vc_t1_ParamLimits

0xc1c3,	// (0x00015a4f) list_setting_pane_vc_t1

0xc1dd,	// (0x00015a69) list_setting_pane_vc_t2_ParamLimits

0xc1dd,	// (0x00015a69) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x000192c5) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x000192c5) list_setting_pane_vc_t

0xa332,	// (0x00013bbe) set_value_pane_cp_vc_ParamLimits

0xa332,	// (0x00013bbe) set_value_pane_cp_vc

0x8610,	// (0x00011e9c) list_single_number_heading_pane_vc_g1_ParamLimits

0x8610,	// (0x00011e9c) list_single_number_heading_pane_vc_g1

0x861c,	// (0x00011ea8) list_single_number_heading_pane_vc_g2_ParamLimits

0x861c,	// (0x00011ea8) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x00018e5a) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x00018e5a) list_single_number_heading_pane_vc_g

0xa29a,	// (0x00013b26) list_single_number_heading_pane_vc_t1_ParamLimits

0xa29a,	// (0x00013b26) list_single_number_heading_pane_vc_t1

0xc1f5,	// (0x00015a81) list_single_number_heading_pane_vc_t2_ParamLimits

0xc1f5,	// (0x00015a81) list_single_number_heading_pane_vc_t2

0x8678,	// (0x00011f04) list_single_number_heading_pane_vc_t3_ParamLimits

0x8678,	// (0x00011f04) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x000192ca) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x000192ca) list_single_number_heading_pane_vc_t

0x868a,	// (0x00011f16) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x868a,	// (0x00011f16) list_single_graphic_heading_pane_vc_g1

0x8610,	// (0x00011e9c) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8610,	// (0x00011e9c) list_single_graphic_heading_pane_vc_g4

0x861c,	// (0x00011ea8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x861c,	// (0x00011ea8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x0001904b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001904b) list_single_graphic_heading_pane_vc_g

0xa29a,	// (0x00013b26) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xa29a,	// (0x00013b26) list_single_graphic_heading_pane_vc_t1

0xc209,	// (0x00015a95) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc209,	// (0x00015a95) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x000192d1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x000192d1) list_single_graphic_heading_pane_vc_t

0x8610,	// (0x00011e9c) list_double2_pane_vc_g1_ParamLimits

0x8610,	// (0x00011e9c) list_double2_pane_vc_g1

0x861c,	// (0x00011ea8) list_double2_pane_vc_g2_ParamLimits

0x861c,	// (0x00011ea8) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x00018e5a) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x00018e5a) list_double2_pane_vc_g

0xb8e8,	// (0x00015174) list_double2_pane_vc_t1_ParamLimits

0xb8e8,	// (0x00015174) list_double2_pane_vc_t1

0xc21d,	// (0x00015aa9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc21d,	// (0x00015aa9) list_double2_large_graphic_pane_vc_g1

0xc229,	// (0x00015ab5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc229,	// (0x00015ab5) list_double2_large_graphic_pane_vc_g2

0xc235,	// (0x00015ac1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc235,	// (0x00015ac1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4a,	// (0x000192d6) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x000192d6) list_double2_large_graphic_pane_vc_g

0xc241,	// (0x00015acd) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc241,	// (0x00015acd) list_double2_large_graphic_pane_vc_t1

0xc257,	// (0x00015ae3) list_double_time_pane_vc_g1_ParamLimits

0xc257,	// (0x00015ae3) list_double_time_pane_vc_g1

0xc263,	// (0x00015aef) list_double_time_pane_vc_g2_ParamLimits

0xc263,	// (0x00015aef) list_double_time_pane_vc_g2

0x0001,

0xfa51,	// (0x000192dd) list_double_time_pane_vc_g_ParamLimits

0xfa51,	// (0x000192dd) list_double_time_pane_vc_g

0xc26f,	// (0x00015afb) list_double_time_pane_vc_t1_ParamLimits

0xc26f,	// (0x00015afb) list_double_time_pane_vc_t1

0xc293,	// (0x00015b1f) list_double_time_pane_vc_t2_ParamLimits

0xc293,	// (0x00015b1f) list_double_time_pane_vc_t2

0xc2bd,	// (0x00015b49) list_double_time_pane_vc_t3_ParamLimits

0xc2bd,	// (0x00015b49) list_double_time_pane_vc_t3

0xc2cf,	// (0x00015b5b) list_double_time_pane_vc_t4_ParamLimits

0xc2cf,	// (0x00015b5b) list_double_time_pane_vc_t4

0x0003,

0xfa56,	// (0x000192e2) list_double_time_pane_vc_t_ParamLimits

0xfa56,	// (0x000192e2) list_double_time_pane_vc_t

0x8610,	// (0x00011e9c) list_double_pane_vc_g1_ParamLimits

0x8610,	// (0x00011e9c) list_double_pane_vc_g1

0x861c,	// (0x00011ea8) list_double_pane_vc_g2_ParamLimits

0x861c,	// (0x00011ea8) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x00018e5a) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x00018e5a) list_double_pane_vc_g

0xc2e3,	// (0x00015b6f) list_double_pane_vc_t1_ParamLimits

0xc2e3,	// (0x00015b6f) list_double_pane_vc_t1

0xc2f7,	// (0x00015b83) list_double_pane_vc_t2_ParamLimits

0xc2f7,	// (0x00015b83) list_double_pane_vc_t2

0x0001,

0xfa5f,	// (0x000192eb) list_double_pane_vc_t_ParamLimits

0xfa5f,	// (0x000192eb) list_double_pane_vc_t

0x8610,	// (0x00011e9c) list_double_number_pane_vc_g1_ParamLimits

0x8610,	// (0x00011e9c) list_double_number_pane_vc_g1

0x861c,	// (0x00011ea8) list_double_number_pane_vc_g2_ParamLimits

0x861c,	// (0x00011ea8) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x00018e5a) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x00018e5a) list_double_number_pane_vc_g

0xc30f,	// (0x00015b9b) list_double_number_pane_vc_t1_ParamLimits

0xc30f,	// (0x00015b9b) list_double_number_pane_vc_t1

0xc323,	// (0x00015baf) list_double_number_pane_vc_t2_ParamLimits

0xc323,	// (0x00015baf) list_double_number_pane_vc_t2

0xc2f7,	// (0x00015b83) list_double_number_pane_vc_t3_ParamLimits

0xc2f7,	// (0x00015b83) list_double_number_pane_vc_t3

0x0002,

0xfa64,	// (0x000192f0) list_double_number_pane_vc_t_ParamLimits

0xfa64,	// (0x000192f0) list_double_number_pane_vc_t

0xc337,	// (0x00015bc3) list_double_large_graphic_pane_vc_g1_ParamLimits

0xc337,	// (0x00015bc3) list_double_large_graphic_pane_vc_g1

0xc348,	// (0x00015bd4) list_double_large_graphic_pane_vc_g2_ParamLimits

0xc348,	// (0x00015bd4) list_double_large_graphic_pane_vc_g2

0xc235,	// (0x00015ac1) list_double_large_graphic_pane_vc_g3_ParamLimits

0xc235,	// (0x00015ac1) list_double_large_graphic_pane_vc_g3

0xc357,	// (0x00015be3) list_double_large_graphic_pane_vc_g4_ParamLimits

0xc357,	// (0x00015be3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6b,	// (0x000192f7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x000192f7) list_double_large_graphic_pane_vc_g

0xc363,	// (0x00015bef) list_double_large_graphic_pane_vc_t1_ParamLimits

0xc363,	// (0x00015bef) list_double_large_graphic_pane_vc_t1

0xc37c,	// (0x00015c08) list_double_large_graphic_pane_vc_t2_ParamLimits

0xc37c,	// (0x00015c08) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x00019300) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x00019300) list_double_large_graphic_pane_vc_t

0xbf74,	// (0x00015800) list_double_heading_pane_vc_g1_ParamLimits

0xbf74,	// (0x00015800) list_double_heading_pane_vc_g1

0xbf80,	// (0x0001580c) list_double_heading_pane_vc_g2_ParamLimits

0xbf80,	// (0x0001580c) list_double_heading_pane_vc_g2

0x0001,

0xfa79,	// (0x00019305) list_double_heading_pane_vc_g_ParamLimits

0xfa79,	// (0x00019305) list_double_heading_pane_vc_g

0xc395,	// (0x00015c21) list_double_heading_pane_vc_t1_ParamLimits

0xc395,	// (0x00015c21) list_double_heading_pane_vc_t1

0xa29a,	// (0x00013b26) list_double_heading_pane_vc_t2_ParamLimits

0xa29a,	// (0x00013b26) list_double_heading_pane_vc_t2

0x0001,

0xfa7e,	// (0x0001930a) list_double_heading_pane_vc_t_ParamLimits

0xfa7e,	// (0x0001930a) list_double_heading_pane_vc_t

0x868a,	// (0x00011f16) list_double_graphic_pane_vc_g1_ParamLimits

0x868a,	// (0x00011f16) list_double_graphic_pane_vc_g1

0xc3a9,	// (0x00015c35) list_double_graphic_pane_vc_g2_ParamLimits

0xc3a9,	// (0x00015c35) list_double_graphic_pane_vc_g2

0xc3b8,	// (0x00015c44) list_double_graphic_pane_vc_g3_ParamLimits

0xc3b8,	// (0x00015c44) list_double_graphic_pane_vc_g3

0x0002,

0xfa83,	// (0x0001930f) list_double_graphic_pane_vc_g_ParamLimits

0xfa83,	// (0x0001930f) list_double_graphic_pane_vc_g

0xc3c4,	// (0x00015c50) list_double_graphic_pane_vc_t1_ParamLimits

0xc3c4,	// (0x00015c50) list_double_graphic_pane_vc_t1

0xc3d8,	// (0x00015c64) list_double_graphic_pane_vc_t2_ParamLimits

0xc3d8,	// (0x00015c64) list_double_graphic_pane_vc_t2

0x0001,

0xfa8a,	// (0x00019316) list_double_graphic_pane_vc_t_ParamLimits

0xfa8a,	// (0x00019316) list_double_graphic_pane_vc_t

0x59a2,	// (0x0000f22e) aid_size_cell_fastswap

0x59aa,	// (0x0000f236) aid_size_cell_touch_ParamLimits

0x59aa,	// (0x0000f236) aid_size_cell_touch

0x5c0f,	// (0x0000f49b) popup_fast_swap_wide_window_ParamLimits

0x5c0f,	// (0x0000f49b) popup_fast_swap_wide_window

0x5d0b,	// (0x0000f597) touch_pane_ParamLimits

0x5d0b,	// (0x0000f597) touch_pane

0x8ada,	// (0x00012366) button_value_adjust_pane_cp2

0x8ada,	// (0x00012366) button_value_adjust_pane_cp4

0x8afa,	// (0x00012386) form_field_data_pane_cp2

0x8b19,	// (0x000123a5) form_field_data_wide_pane_cp2

0x917a,	// (0x00012a06) bg_scroll_pane_ParamLimits

0x5f9b,	// (0x0000f827) scroll_handle_pane_ParamLimits

0x5faf,	// (0x0000f83b) scroll_sc2_down_pane_ParamLimits

0x5faf,	// (0x0000f83b) scroll_sc2_down_pane

0x91ab,	// (0x00012a37) scroll_sc2_up_pane_ParamLimits

0x91ab,	// (0x00012a37) scroll_sc2_up_pane

0xc88e,	// (0x0001611a) grid_wheel_folder_pane_g1_ParamLimits

0xc88e,	// (0x0001611a) grid_wheel_folder_pane_g1

0x616b,	// (0x0000f9f7) clock_nsta_pane_cp2_ParamLimits

0x616b,	// (0x0000f9f7) clock_nsta_pane_cp2

0x8ef6,	// (0x00012782) listscroll_midp_pane_ParamLimits

0x99f4,	// (0x00013280) midp_canvas_pane

0x9cda,	// (0x00013566) nsta_clock_indic_pane

0x9d16,	// (0x000135a2) listscroll_form_pane_vc

0x9d1e,	// (0x000135aa) listscroll_set_pane_vc_ParamLimits

0x9d1e,	// (0x000135aa) listscroll_set_pane_vc

0x9e2b,	// (0x000136b7) clock_nsta_pane

0x9ea0,	// (0x0001372c) indicator_nsta_pane

0xa17a,	// (0x00013a06) bg_popup_sub_pane_cp2_ParamLimits

0xa18e,	// (0x00013a1a) find_pane_cp2_ParamLimits

0xa18e,	// (0x00013a1a) find_pane_cp2

0xa1a4,	// (0x00013a30) grid_toobar_pane_ParamLimits

0xa342,	// (0x00013bce) list_form_gen_pane_vc_ParamLimits

0xa342,	// (0x00013bce) list_form_gen_pane_vc

0xa358,	// (0x00013be4) scroll_pane_cp8_vc_ParamLimits

0xa358,	// (0x00013be4) scroll_pane_cp8_vc

0xa3d4,	// (0x00013c60) data_form_wide_pane_vc_ParamLimits

0xa3d4,	// (0x00013c60) data_form_wide_pane_vc

0xa3e0,	// (0x00013c6c) form_field_data_wide_pane_vc_g1

0xa3e8,	// (0x00013c74) form_field_data_wide_pane_vc_t1_ParamLimits

0xa3e8,	// (0x00013c74) form_field_data_wide_pane_vc_t1

0x8bb4,	// (0x00012440) input_focus_pane_cp6_vc_ParamLimits

0x8bb4,	// (0x00012440) input_focus_pane_cp6_vc

0xa76b,	// (0x00013ff7) list_midp_pane_ParamLimits

0xa777,	// (0x00014003) scroll_pane_cp16_ParamLimits

0xa777,	// (0x00014003) scroll_pane_cp16

0xa7c5,	// (0x00014051) button_value_adjust_pane_ParamLimits

0xa7c5,	// (0x00014051) button_value_adjust_pane

0xb75a,	// (0x00014fe6) button_value_adjust_pane_cp6_ParamLimits

0xb75a,	// (0x00014fe6) button_value_adjust_pane_cp6

0xb880,	// (0x0001510c) settings_code_pane_cp_ParamLimits

0xb880,	// (0x0001510c) settings_code_pane_cp

0x7d02,	// (0x0001158e) cell_touch_pane_g1

0x7d02,	// (0x0001158e) cell_touch_pane_g2

0x0001,

0xf704,	// (0x00018f90) cell_touch_pane_g

0xbf47,	// (0x000157d3) cell_touch_pane_cp_ParamLimits

0xbf47,	// (0x000157d3) cell_touch_pane_cp

0xbf57,	// (0x000157e3) cell_touch_pane_ParamLimits

0xbf57,	// (0x000157e3) cell_touch_pane

0x7d02,	// (0x0001158e) scroll_sc2_down_pane_g1

0x7d02,	// (0x0001158e) scroll_sc2_up_pane_g1

0x7d0c,	// (0x00011598) bg_set_opt_pane_cp4_vc

0xbfc0,	// (0x0001584c) list_set_graphic_pane_vc_g1_ParamLimits

0xbfc0,	// (0x0001584c) list_set_graphic_pane_vc_g1

0xbfcc,	// (0x00015858) list_set_graphic_pane_vc_g2_ParamLimits

0xbfcc,	// (0x00015858) list_set_graphic_pane_vc_g2

0x0001,

0xf9fb,	// (0x00019287) list_set_graphic_pane_vc_g_ParamLimits

0xf9fb,	// (0x00019287) list_set_graphic_pane_vc_g

0xbfd8,	// (0x00015864) text_primary_small_cp13_vc_ParamLimits

0xbfd8,	// (0x00015864) text_primary_small_cp13_vc

0xbff0,	// (0x0001587c) list_set_graphic_pane_vc_ParamLimits

0xbff0,	// (0x0001587c) list_set_graphic_pane_vc

0x7d0c,	// (0x00011598) input_focus_pane_cp2_vc

0x7d02,	// (0x0001158e) setting_code_pane_vc_g1

0x7e37,	// (0x000116c3) setting_code_pane_vc_t1

0xc003,	// (0x0001588f) set_text_pane_vc_t1_ParamLimits

0xc003,	// (0x0001588f) set_text_pane_vc_t1

0x7d0c,	// (0x00011598) input_focus_pane_cp1_vc

0xc020,	// (0x000158ac) list_set_text_pane_vc

0x7d02,	// (0x0001158e) setting_text_pane_vc_g1

0x7d0c,	// (0x00011598) bg_set_opt_pane_cp2_vc

0x7e2e,	// (0x000116ba) setting_slider_graphic_pane_vc_g1

0xc02a,	// (0x000158b6) setting_slider_graphic_pane_vc_t1

0xc03a,	// (0x000158c6) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa00,	// (0x0001928c) setting_slider_graphic_pane_vc_t

0xc04a,	// (0x000158d6) slider_set_pane_cp_vc

0xc052,	// (0x000158de) slider_set_pane_vc_g1

0xc05b,	// (0x000158e7) slider_set_pane_vc_g2

0x0006,

0xfa05,	// (0x00019291) slider_set_pane_vc_g

0x8ce1,	// (0x0001256d) set_opt_bg_pane_g1_copy1

0x8ce9,	// (0x00012575) set_opt_bg_pane_g2_copy1

0xc087,	// (0x00015913) set_opt_bg_pane_g3_copy1

0x8cf9,	// (0x00012585) set_opt_bg_pane_g4_copy1

0x8d01,	// (0x0001258d) set_opt_bg_pane_g5_copy1

0x8d09,	// (0x00012595) set_opt_bg_pane_g6_copy1

0xc08f,	// (0x0001591b) set_opt_bg_pane_g7_copy1

0xc099,	// (0x00015925) set_opt_bg_pane_g8_copy1

0xc0a1,	// (0x0001592d) set_opt_bg_pane_g9_copy1

0x7d0c,	// (0x00011598) bg_set_opt_pane_cp_vc

0xc0a9,	// (0x00015935) setting_slider_pane_vc_t1

0xc0b8,	// (0x00015944) setting_slider_pane_vc_t2

0xc0c8,	// (0x00015954) setting_slider_pane_vc_t3

0x0002,

0xfa14,	// (0x000192a0) setting_slider_pane_vc_t

0xc0d8,	// (0x00015964) slider_set_pane_vc

0x6b47,	// (0x000103d3) volume_set_pane_vc_g1

0x6e36,	// (0x000106c2) volume_set_pane_vc_g2

0x6e3f,	// (0x000106cb) volume_set_pane_vc_g3

0x6e48,	// (0x000106d4) volume_set_pane_vc_g4

0x6e51,	// (0x000106dd) volume_set_pane_vc_g5

0x6e5a,	// (0x000106e6) volume_set_pane_vc_g6

0x6b74,	// (0x00010400) volume_set_pane_vc_g7

0x6e63,	// (0x000106ef) volume_set_pane_vc_g8

0x6e6c,	// (0x000106f8) volume_set_pane_vc_g9

0x6e75,	// (0x00010701) volume_set_pane_vc_g10

0x0009,

0xfa1b,	// (0x000192a7) volume_set_pane_vc_g

0xc0e0,	// (0x0001596c) volume_set_pane_vc

0xc0e8,	// (0x00015974) button_value_adjust_pane_cp1_vc

0xc0f2,	// (0x0001597e) list_highlight_pane_cp2_vc

0xc0fb,	// (0x00015987) list_set_pane_vc_ParamLimits

0xc0fb,	// (0x00015987) list_set_pane_vc

0xc159,	// (0x000159e5) main_pane_set_vc_t1_ParamLimits

0xc159,	// (0x000159e5) main_pane_set_vc_t1

0xc16e,	// (0x000159fa) main_pane_set_vc_t2_ParamLimits

0xc16e,	// (0x000159fa) main_pane_set_vc_t2

0xc180,	// (0x00015a0c) main_pane_set_vc_t3_ParamLimits

0xc180,	// (0x00015a0c) main_pane_set_vc_t3

0xc192,	// (0x00015a1e) main_pane_set_vc_t4_ParamLimits

0xc192,	// (0x00015a1e) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x000192bc) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x000192bc) main_pane_set_vc_t

0xc1a4,	// (0x00015a30) setting_code_pane_vc_ParamLimits

0xc1a4,	// (0x00015a30) setting_code_pane_vc

0xc1b3,	// (0x00015a3f) setting_slider_graphic_pane_vc

0xc1b3,	// (0x00015a3f) setting_slider_pane_vc

0xc1b3,	// (0x00015a3f) setting_text_pane_vc

0xc1b3,	// (0x00015a3f) setting_volume_pane_vc

0xc1bb,	// (0x00015a47) scroll_pane_cp121_vc

0x8ac8,	// (0x00012354) set_content_pane_vc

0xc3f0,	// (0x00015c7c) button_value_adjust_pane_g1

0xc3f9,	// (0x00015c85) button_value_adjust_pane_g2

0x0001,

0xfa8f,	// (0x0001931b) button_value_adjust_pane_g

0xc402,	// (0x00015c8e) form_field_slider_wide_pane_vc_t1_ParamLimits

0xc402,	// (0x00015c8e) form_field_slider_wide_pane_vc_t1

0xc416,	// (0x00015ca2) form_field_slider_wide_pane_vc_t2_ParamLimits

0xc416,	// (0x00015ca2) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa94,	// (0x00019320) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa94,	// (0x00019320) form_field_slider_wide_pane_vc_t

0x8081,	// (0x0001190d) input_focus_pane_cp10_vc_ParamLimits

0x8081,	// (0x0001190d) input_focus_pane_cp10_vc

0xc442,	// (0x00015cce) slider_cont_pane_cp1_vc_ParamLimits

0xc442,	// (0x00015cce) slider_cont_pane_cp1_vc

0xc452,	// (0x00015cde) slider_form_pane_g1_cp2

0xc05b,	// (0x000158e7) slider_form_pane_g2_cp2

0xc47f,	// (0x00015d0b) form_field_slider_pane_vc_t3

0xc48d,	// (0x00015d19) form_field_slider_pane_vc_t4

0xc49b,	// (0x00015d27) slider_form_pane_vc_ParamLimits

0xc49b,	// (0x00015d27) slider_form_pane_vc

0xc4a8,	// (0x00015d34) form_field_slider_pane_vc_t1_ParamLimits

0xc4a8,	// (0x00015d34) form_field_slider_pane_vc_t1

0xc416,	// (0x00015ca2) form_field_slider_pane_vc_t2_ParamLimits

0xc416,	// (0x00015ca2) form_field_slider_pane_vc_t2

0x0001,

0xfaa6,	// (0x00019332) form_field_slider_pane_vc_t_ParamLimits

0xfaa6,	// (0x00019332) form_field_slider_pane_vc_t

0x8081,	// (0x0001190d) input_focus_pane_cp9_vc_ParamLimits

0x8081,	// (0x0001190d) input_focus_pane_cp9_vc

0xc4c4,	// (0x00015d50) slider_cont_pane_vc_ParamLimits

0xc4c4,	// (0x00015d50) slider_cont_pane_vc

0xc4d6,	// (0x00015d62) list_form_graphic_pane_cp_vc_ParamLimits

0xc4d6,	// (0x00015d62) list_form_graphic_pane_cp_vc

0xa3e0,	// (0x00013c6c) form_field_popup_wide_pane_vc_g1

0xc4eb,	// (0x00015d77) form_field_popup_wide_pane_vc_t1_ParamLimits

0xc4eb,	// (0x00015d77) form_field_popup_wide_pane_vc_t1

0x8bb4,	// (0x00012440) input_focus_pane_cp8_vc_ParamLimits

0x8bb4,	// (0x00012440) input_focus_pane_cp8_vc

0xc530,	// (0x00015dbc) list_form_wide_pane_vc_ParamLimits

0xc530,	// (0x00015dbc) list_form_wide_pane_vc

0xc53c,	// (0x00015dc8) list_form_graphic_pane_vc_g1

0xc544,	// (0x00015dd0) list_form_graphic_pane_vc_t1_ParamLimits

0xc544,	// (0x00015dd0) list_form_graphic_pane_vc_t1

0x7dec,	// (0x00011678) list_highlight_pane_cp5_vc_ParamLimits

0x7dec,	// (0x00011678) list_highlight_pane_cp5_vc

0xc560,	// (0x00015dec) list_form_graphic_pane_vc_ParamLimits

0xc560,	// (0x00015dec) list_form_graphic_pane_vc

0xa3e0,	// (0x00013c6c) form_field_popup_pane_vc_g1

0xc576,	// (0x00015e02) form_field_popup_pane_vc_t1_ParamLimits

0xc576,	// (0x00015e02) form_field_popup_pane_vc_t1

0x8bb4,	// (0x00012440) input_focus_pane_cp7_vc_ParamLimits

0x8bb4,	// (0x00012440) input_focus_pane_cp7_vc

0xc58d,	// (0x00015e19) list_form_pane_vc_ParamLimits

0xc58d,	// (0x00015e19) list_form_pane_vc

0xc599,	// (0x00015e25) data_form_pane_vc_t1_ParamLimits

0xc599,	// (0x00015e25) data_form_pane_vc_t1

0x8ce1,	// (0x0001256d) input_focus_pane_vc_g1

0x8ce9,	// (0x00012575) input_focus_pane_vc_g2

0x8cf1,	// (0x0001257d) input_focus_pane_vc_g3

0x8cf9,	// (0x00012585) input_focus_pane_vc_g4

0x8d01,	// (0x0001258d) input_focus_pane_vc_g5

0x8d09,	// (0x00012595) input_focus_pane_vc_g6

0x8d11,	// (0x0001259d) input_focus_pane_vc_g7

0x8d19,	// (0x000125a5) input_focus_pane_vc_g8

0x8d21,	// (0x000125ad) input_focus_pane_vc_g9

0x7d02,	// (0x0001158e) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x00018f19) input_focus_pane_vc_g

0xa3d4,	// (0x00013c60) data_form_pane_vc_ParamLimits

0xa3d4,	// (0x00013c60) data_form_pane_vc

0xa3e0,	// (0x00013c6c) form_field_data_pane_vc_g1

0xc5b4,	// (0x00015e40) form_field_data_pane_vc_t1_ParamLimits

0xc5b4,	// (0x00015e40) form_field_data_pane_vc_t1

0x8bb4,	// (0x00012440) input_focus_pane_vc_ParamLimits

0x8bb4,	// (0x00012440) input_focus_pane_vc

0xc5ce,	// (0x00015e5a) button_value_adjust_pane_cp3_vc

0xc5d6,	// (0x00015e62) button_value_adjust_pane_cp5_vc

0xc5de,	// (0x00015e6a) form_field_data_pane_vc_ParamLimits

0xc5de,	// (0x00015e6a) form_field_data_pane_vc

0xc5f5,	// (0x00015e81) form_field_data_pane_vc_cp2

0xc5fd,	// (0x00015e89) form_field_data_wide_pane_vc_ParamLimits

0xc5fd,	// (0x00015e89) form_field_data_wide_pane_vc

0xc613,	// (0x00015e9f) form_field_data_wide_pane_vc_cp2

0xc61b,	// (0x00015ea7) form_field_popup_pane_vc_ParamLimits

0xc61b,	// (0x00015ea7) form_field_popup_pane_vc

0xc632,	// (0x00015ebe) form_field_popup_wide_pane_vc_ParamLimits

0xc632,	// (0x00015ebe) form_field_popup_wide_pane_vc

0xc648,	// (0x00015ed4) form_field_slider_pane_vc_ParamLimits

0xc648,	// (0x00015ed4) form_field_slider_pane_vc

0xc65b,	// (0x00015ee7) form_field_slider_wide_pane_vc_ParamLimits

0xc65b,	// (0x00015ee7) form_field_slider_wide_pane_vc

0xc66e,	// (0x00015efa) grid_touch_1_pane_ParamLimits

0xc66e,	// (0x00015efa) grid_touch_1_pane

0xc67a,	// (0x00015f06) grid_touch_2_pane_ParamLimits

0xc67a,	// (0x00015f06) grid_touch_2_pane

0x9ca5,	// (0x00013531) touch_pane_g1_ParamLimits

0x9ca5,	// (0x00013531) touch_pane_g1

0xc692,	// (0x00015f1e) cell_app_pane_cp_wide_ParamLimits

0xc692,	// (0x00015f1e) cell_app_pane_cp_wide

0xc6a3,	// (0x00015f2f) grid_popup_fast_wide_pane_ParamLimits

0xc6a3,	// (0x00015f2f) grid_popup_fast_wide_pane

0xc6b7,	// (0x00015f43) scroll_pane_cp19_ParamLimits

0xc6b7,	// (0x00015f43) scroll_pane_cp19

0x7d0c,	// (0x00011598) bg_popup_window_pane_cp20

0xc6cb,	// (0x00015f57) listscroll_popup_fast_wide_pane

0x7dec,	// (0x00011678) grid_indicator_nsta_pane

0xc6d3,	// (0x00015f5f) clock_nsta_pane_g1

0xc6dc,	// (0x00015f68) clock_nsta_pane_t1

0xc6f8,	// (0x00015f84) cell_indicator_nsta_pane_ParamLimits

0xc6f8,	// (0x00015f84) cell_indicator_nsta_pane

0xc730,	// (0x00015fbc) cell_indicator_nsta_pane_g1

0xc73e,	// (0x00015fca) cell_indicator_nsta_pane_g2

0x0001,

0xfab7,	// (0x00019343) cell_indicator_nsta_pane_g

0xc754,	// (0x00015fe0) clock_nsta_pane_cp

0xc75c,	// (0x00015fe8) indicator_nsta_pane_cp

0xc764,	// (0x00015ff0) nsta_clock_indic_pane_g1

0x7ecf,	// (0x0001175b) grid_indicator_pane

0x92a0,	// (0x00012b2c) scroll_pane_cp29

0x60ba,	// (0x0000f946) indicator_nsta_pane_cp2_ParamLimits

0x60ba,	// (0x0000f946) indicator_nsta_pane_cp2

0x7dec,	// (0x00011678) main_apps_wheel_pane

0xa650,	// (0x00013edc) form_midp_field_text_pane_ParamLimits

0xa797,	// (0x00014023) scroll_bar_cp050_ParamLimits

0xc7c5,	// (0x00016051) cell_indicator_pane_ParamLimits

0xc7c5,	// (0x00016051) cell_indicator_pane

0xc7e0,	// (0x0001606c) cell_indicator_pane_g1

0xc7ea,	// (0x00016076) grid_wheel_folder_pane_ParamLimits

0xc7ea,	// (0x00016076) grid_wheel_folder_pane

0xc800,	// (0x0001608c) list_wheel_apps_pane_ParamLimits

0xc800,	// (0x0001608c) list_wheel_apps_pane

0xc811,	// (0x0001609d) main_apps_wheel_pane_g1_ParamLimits

0xc811,	// (0x0001609d) main_apps_wheel_pane_g1

0xc825,	// (0x000160b1) main_apps_wheel_pane_g2_ParamLimits

0xc825,	// (0x000160b1) main_apps_wheel_pane_g2

0x0001,

0xfad3,	// (0x0001935f) main_apps_wheel_pane_g_ParamLimits

0xfad3,	// (0x0001935f) main_apps_wheel_pane_g

0xc83d,	// (0x000160c9) main_apps_wheel_pane_t1_ParamLimits

0xc83d,	// (0x000160c9) main_apps_wheel_pane_t1

0xc860,	// (0x000160ec) list_wheel_apps_pane_g1

0xc868,	// (0x000160f4) list_wheel_apps_pane_g2

0xc870,	// (0x000160fc) list_wheel_apps_pane_g3

0xc87a,	// (0x00016106) list_wheel_apps_pane_g4

0xc884,	// (0x00016110) list_wheel_apps_pane_g5

0x0004,

0xfad8,	// (0x00019364) list_wheel_apps_pane_g

0x9878,	// (0x00013104) navi_icon_text_pane

0x9d5a,	// (0x000135e6) aid_fill_nsta

0xc8a7,	// (0x00016133) navi_icon_text_pane_g1

0xc8b3,	// (0x0001613f) navi_icon_text_pane_t1

0x971a,	// (0x00012fa6) list_set_graphic_pane_t1_ParamLimits

0x971a,	// (0x00012fa6) list_set_graphic_pane_t1

0xaee9,	// (0x00014775) popup_midp_note_alarm_window_t6_ParamLimits

0xaee9,	// (0x00014775) popup_midp_note_alarm_window_t6

0xaefb,	// (0x00014787) popup_midp_note_alarm_window_t7_ParamLimits

0xaefb,	// (0x00014787) popup_midp_note_alarm_window_t7

0xaf0d,	// (0x00014799) popup_midp_note_alarm_window_t8_ParamLimits

0xaf0d,	// (0x00014799) popup_midp_note_alarm_window_t8

0xaf1f,	// (0x000147ab) popup_midp_note_alarm_window_t9_ParamLimits

0xaf1f,	// (0x000147ab) popup_midp_note_alarm_window_t9

0xaf31,	// (0x000147bd) popup_midp_note_alarm_window_t10_ParamLimits

0xaf31,	// (0x000147bd) popup_midp_note_alarm_window_t10

0xaf43,	// (0x000147cf) popup_midp_note_alarm_window_t11_ParamLimits

0xaf43,	// (0x000147cf) popup_midp_note_alarm_window_t11

0xaf55,	// (0x000147e1) scroll_pane_cp17_ParamLimits

0xaf55,	// (0x000147e1) scroll_pane_cp17

0x6b47,	// (0x000103d3) volume_small_pane_cp_g1

0x6e7e,	// (0x0001070a) volume_small_pane_cp_g2

0x6e87,	// (0x00010713) volume_small_pane_cp_g3

0x6b59,	// (0x000103e5) volume_small_pane_cp_g4

0x6e90,	// (0x0001071c) volume_small_pane_cp_g5

0x6e51,	// (0x000106dd) volume_small_pane_cp_g6

0x6b6b,	// (0x000103f7) volume_small_pane_cp_g7

0x6e99,	// (0x00010725) volume_small_pane_cp_g8

0x6ea2,	// (0x0001072e) volume_small_pane_cp_g9

0x6b7d,	// (0x00010409) volume_small_pane_cp_g10

0x9abf,	// (0x0001334b) midp_ticker_pane_g1_ParamLimits

0x9acb,	// (0x00013357) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x00018fe5) midp_ticker_pane_g_ParamLimits

0x9ad7,	// (0x00013363) midp_ticker_pane_t1_ParamLimits

0x9d70,	// (0x000135fc) aid_fill_nsta_2

0xa783,	// (0x0001400f) list_form2_midp_pane

0xb8fe,	// (0x0001518a) midp_editing_number_pane_ParamLimits

0xb90d,	// (0x00015199) midp_ticker_pane_ParamLimits

0xc8c5,	// (0x00016151) form2_midp_field_pane

0xc8e9,	// (0x00016175) scroll_pane_cp51

0xc909,	// (0x00016195) form2_midp_button_pane_ParamLimits

0xc909,	// (0x00016195) form2_midp_button_pane

0xc91b,	// (0x000161a7) form2_midp_content_pane_ParamLimits

0xc91b,	// (0x000161a7) form2_midp_content_pane

0xc935,	// (0x000161c1) form2_midp_field_choice_group_pane

0xc93d,	// (0x000161c9) form2_midp_field_pane_g1

0xc945,	// (0x000161d1) form2_midp_field_pane_g2

0xc94d,	// (0x000161d9) form2_midp_field_pane_g3

0xc955,	// (0x000161e1) form2_midp_field_pane_g4

0x0003,

0xfafd,	// (0x00019389) form2_midp_field_pane_g

0xc95d,	// (0x000161e9) form2_midp_gauge_slider_pane

0xc965,	// (0x000161f1) form2_midp_gauge_wait_pane

0xc96d,	// (0x000161f9) form2_midp_image_pane_ParamLimits

0xc96d,	// (0x000161f9) form2_midp_image_pane

0xc988,	// (0x00016214) form2_midp_label_pane_ParamLimits

0xc988,	// (0x00016214) form2_midp_label_pane

0xc9a1,	// (0x0001622d) form2_midp_label_pane_cp_ParamLimits

0xc9a1,	// (0x0001622d) form2_midp_label_pane_cp

0xc9c2,	// (0x0001624e) form2_midp_string_pane_ParamLimits

0xc9c2,	// (0x0001624e) form2_midp_string_pane

0xc9d4,	// (0x00016260) form2_midp_text_pane_ParamLimits

0xc9d4,	// (0x00016260) form2_midp_text_pane

0xc9ef,	// (0x0001627b) form2_midp_time_pane

0xc9ff,	// (0x0001628b) input_focus_pane_cp51_ParamLimits

0xc9ff,	// (0x0001628b) input_focus_pane_cp51

0xca17,	// (0x000162a3) form2_midp_label_pane_t1_ParamLimits

0xca17,	// (0x000162a3) form2_midp_label_pane_t1

0xca57,	// (0x000162e3) form2_mdip_text_pane_t1_ParamLimits

0xca57,	// (0x000162e3) form2_mdip_text_pane_t1

0xca73,	// (0x000162ff) form2_midp_time_pane_t1

0xca8e,	// (0x0001631a) form2_midp_gauge_slider_pane_t1

0xcaa0,	// (0x0001632c) form2_midp_gauge_slider_pane_t2

0xcab2,	// (0x0001633e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb06,	// (0x00019392) form2_midp_gauge_slider_pane_t

0xcac4,	// (0x00016350) form2_midp_slider_pane

0xcad0,	// (0x0001635c) form2_midp_gauge_wait_pane_t1

0xcade,	// (0x0001636a) form2_midp_wait_pane_ParamLimits

0xcade,	// (0x0001636a) form2_midp_wait_pane

0xcb0a,	// (0x00016396) list_single_2graphic_pane_cp4_ParamLimits

0xcb0a,	// (0x00016396) list_single_2graphic_pane_cp4

0xa44f,	// (0x00013cdb) list_single_midp_graphic_pane_cp_ParamLimits

0xa44f,	// (0x00013cdb) list_single_midp_graphic_pane_cp

0x7d0c,	// (0x00011598) list_highlight_pane_cp20

0xcb38,	// (0x000163c4) list_single_2graphic_pane_g1_cp4

0xbe4c,	// (0x000156d8) list_single_2graphic_pane_g2_cp4

0xcb40,	// (0x000163cc) list_single_2graphic_pane_t1_cp4

0x7dec,	// (0x00011678) list_highlight_pane_cp21

0xcb4f,	// (0x000163db) list_single_midp_graphic_pane_g4_cp

0xcb5e,	// (0x000163ea) list_single_midp_graphic_pane_t1_cp

0xcb73,	// (0x000163ff) form2_mdip_string_pane_t1_ParamLimits

0xcb73,	// (0x000163ff) form2_mdip_string_pane_t1

0x7d0c,	// (0x00011598) bg_wml_button_pane_cp2

0x7d02,	// (0x0001158e) form2_midp_image_pane_g1

0x88a4,	// (0x00012130) list_double_large_graphic_pane_g5_ParamLimits

0x88a4,	// (0x00012130) list_double_large_graphic_pane_g5

0x8ef6,	// (0x00012782) midp_form_pane_ParamLimits

0x7dec,	// (0x00011678) main_apps_wheel_pane_ParamLimits

0x678f,	// (0x0001001b) popup_preview_window_ParamLimits

0x678f,	// (0x0001001b) popup_preview_window

0x6946,	// (0x000101d2) popup_touch_info_window_ParamLimits

0x6946,	// (0x000101d2) popup_touch_info_window

0x6964,	// (0x000101f0) popup_touch_menu_window_ParamLimits

0x6964,	// (0x000101f0) popup_touch_menu_window

0x7cf8,	// (0x00011584) bg_popup_sub_pane_cp6

0xcc96,	// (0x00016522) list_touch_menu_pane

0xcc9e,	// (0x0001652a) list_single_touch_menu_pane_ParamLimits

0xcc9e,	// (0x0001652a) list_single_touch_menu_pane

0xccb2,	// (0x0001653e) list_single_touch_menu_pane_t1

0x7dec,	// (0x00011678) bg_popup_sub_pane_cp7_ParamLimits

0x7dec,	// (0x00011678) bg_popup_sub_pane_cp7

0xccc0,	// (0x0001654c) heading_sub_pane

0xccc8,	// (0x00016554) list_touch_info_pane_ParamLimits

0xccc8,	// (0x00016554) list_touch_info_pane

0xccd7,	// (0x00016563) list_single_touch_info_pane_ParamLimits

0xccd7,	// (0x00016563) list_single_touch_info_pane

0xcce9,	// (0x00016575) list_single_touch_info_pane_t1

0xccf7,	// (0x00016583) list_single_touch_info_pane_t2

0x0001,

0xfb14,	// (0x000193a0) list_single_touch_info_pane_t

0x99ec,	// (0x00013278) bg_popup_heading_pane_cp

0xcd05,	// (0x00016591) heading_sub_pane_t1

0xa36e,	// (0x00013bfa) bg_popup_preview_window_pane_cp_ParamLimits

0xa36e,	// (0x00013bfa) bg_popup_preview_window_pane_cp

0xccc0,	// (0x0001654c) heading_preview_pane

0xccc8,	// (0x00016554) list_preview_pane_ParamLimits

0xccc8,	// (0x00016554) list_preview_pane

0xcd13,	// (0x0001659f) popup_preview_window_g1

0xccd7,	// (0x00016563) list_single_preview_pane_ParamLimits

0xccd7,	// (0x00016563) list_single_preview_pane

0xcd1b,	// (0x000165a7) list_single_preview_pane_g1

0xcd23,	// (0x000165af) list_single_preview_pane_t1

0xcce9,	// (0x00016575) list_single_preview_pane_t2

0x0001,

0xfb19,	// (0x000193a5) list_single_preview_pane_t

0xcd31,	// (0x000165bd) bg_popup_heading_pane_cp2_ParamLimits

0xcd31,	// (0x000165bd) bg_popup_heading_pane_cp2

0xcd47,	// (0x000165d3) heading_preview_pane_g1

0xcd4f,	// (0x000165db) heading_preview_pane_t1_ParamLimits

0xcd4f,	// (0x000165db) heading_preview_pane_t1

0x7ef2,	// (0x0001177e) soft_indicator_pane_t1_ParamLimits

0x85d0,	// (0x00011e5c) scroll_pane_ParamLimits

0x9199,	// (0x00012a25) scroll_sc2_left_pane

0x91a2,	// (0x00012a2e) scroll_sc2_right_pane

0x91c1,	// (0x00012a4d) scroll_bg_pane_g1_ParamLimits

0x91d6,	// (0x00012a62) scroll_bg_pane_g2_ParamLimits

0x91ee,	// (0x00012a7a) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x00018f70) scroll_bg_pane_g_ParamLimits

0x91c1,	// (0x00012a4d) scroll_handle_pane_g1_ParamLimits

0x9210,	// (0x00012a9c) scroll_handle_pane_g2_ParamLimits

0x91ee,	// (0x00012a7a) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x00018f77) scroll_handle_pane_g_ParamLimits

0x6416,	// (0x0000fca2) popup_choice_list_window_ParamLimits

0x6416,	// (0x0000fca2) popup_choice_list_window

0xa186,	// (0x00013a12) choice_list_pane

0xa21e,	// (0x00013aaa) cell_toolbar_pane_t1

0xa246,	// (0x00013ad2) toolbar_button_pane_ParamLimits

0xb40f,	// (0x00014c9b) ai_gene_pane_1_t2_ParamLimits

0xb40f,	// (0x00014c9b) ai_gene_pane_1_t2

0x0001,

0xf90e,	// (0x0001919a) ai_gene_pane_1_t_ParamLimits

0xf90e,	// (0x0001919a) ai_gene_pane_1_t

0xcd6c,	// (0x000165f8) scroll_sc2_left_pane_g1

0xcd6c,	// (0x000165f8) scroll_sc2_right_pane_g1

0x9d30,	// (0x000135bc) bg_popup_sub_pane_cp10

0xcd76,	// (0x00016602) list_choice_list_pane

0xcd8f,	// (0x0001661b) list_single_choice_list_pane_ParamLimits

0xcd8f,	// (0x0001661b) list_single_choice_list_pane

0xcda2,	// (0x0001662e) list_single_choice_list_pane_g1

0x8ea6,	// (0x00012732) list_single_choice_list_pane_t1_ParamLimits

0x8ea6,	// (0x00012732) list_single_choice_list_pane_t1

0xcdaa,	// (0x00016636) choice_list_pane_g1

0xcdb2,	// (0x0001663e) choice_list_pane_t1

0x7cf8,	// (0x00011584) input_focus_pane_cp11

0x907a,	// (0x00012906) title_pane_stacon_g2_ParamLimits

0x907a,	// (0x00012906) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x00018f56) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00018f56) title_pane_stacon_g

0x99ec,	// (0x00013278) cursor_press_pane

0x64be,	// (0x0000fd4a) popup_fep_hwr_window_ParamLimits

0x64be,	// (0x0000fd4a) popup_fep_hwr_window

0x6536,	// (0x0000fdc2) popup_fep_vkb_window_ParamLimits

0x6536,	// (0x0000fdc2) popup_fep_vkb_window

0xcdc0,	// (0x0001664c) cursor_press_pane_g1

0x0002,

0xfb42,	// (0x000193ce) fep_vkb_side_pane_g_ParamLimits

0x6ee4,	// (0x00010770) fep_hwr_candidate_pane_ParamLimits

0x6ee4,	// (0x00010770) fep_hwr_candidate_pane

0x6f0e,	// (0x0001079a) fep_hwr_side_pane_ParamLimits

0x6f0e,	// (0x0001079a) fep_hwr_side_pane

0x6f2e,	// (0x000107ba) fep_hwr_top_pane_ParamLimits

0x6f2e,	// (0x000107ba) fep_hwr_top_pane

0x6f46,	// (0x000107d2) fep_hwr_write_pane_ParamLimits

0x6f46,	// (0x000107d2) fep_hwr_write_pane

0xfb42,	// (0x000193ce) fep_vkb_side_pane_g

0xcdc8,	// (0x00016654) fep_hwr_top_pane_g1

0xcdda,	// (0x00016666) fep_hwr_top_pane_g2

0x6f80,	// (0x0001080c) fep_hwr_top_pane_g3

0x0002,

0xfb1e,	// (0x000193aa) fep_hwr_top_pane_g

0x6f95,	// (0x00010821) fep_hwr_top_text_pane

0x9366,	// (0x00012bf2) fep_hwr_top_text_pane_g1

0xce10,	// (0x0001669c) fep_hwr_top_text_pane_t1

0x708b,	// (0x00010917) fep_hwr_candidate_pane_g1

0xd053,	// (0x000168df) fep_vkb_keypad_pane_g3_ParamLimits

0xd053,	// (0x000168df) fep_vkb_keypad_pane_g3

0xd07b,	// (0x00016907) fep_vkb_keypad_pane_g4_ParamLimits

0xd07b,	// (0x00016907) fep_vkb_keypad_pane_g4

0xd0ea,	// (0x00016976) fep_vkb_bottom_pane_g2_ParamLimits

0xd0ea,	// (0x00016976) fep_vkb_bottom_pane_g2

0x0001,

0xfb49,	// (0x000193d5) fep_vkb_bottom_pane_g_ParamLimits

0xfb49,	// (0x000193d5) fep_vkb_bottom_pane_g

0xcd6c,	// (0x000165f8) cell_vkb_side_pane_g2

0x0001,

0xfb53,	// (0x000193df) cell_vkb_side_pane_g

0xd175,	// (0x00016a01) cell_vkb_side_pane_t1

0xd183,	// (0x00016a0f) cell_vkb_side_pane_t1_copy1

0xcd6c,	// (0x000165f8) bg_fep_vkb_candidate_pane_g2

0xd2af,	// (0x00016b3b) cell_vkb_candidate_pane_ParamLimits

0xce1e,	// (0x000166aa) aid_size_cell_vkb_ParamLimits

0xce1e,	// (0x000166aa) aid_size_cell_vkb

0xd2af,	// (0x00016b3b) cell_vkb_candidate_pane

0x70b2,	// (0x0001093e) bg_popup_fep_shadow_pane_g1

0xceaa,	// (0x00016736) fep_vkb_bottom_pane_ParamLimits

0xceaa,	// (0x00016736) fep_vkb_bottom_pane

0xcee0,	// (0x0001676c) fep_vkb_candidate_pane_ParamLimits

0xcee0,	// (0x0001676c) fep_vkb_candidate_pane

0xcefc,	// (0x00016788) fep_vkb_keypad_pane_ParamLimits

0xcefc,	// (0x00016788) fep_vkb_keypad_pane

0xcf3b,	// (0x000167c7) fep_vkb_side_pane_ParamLimits

0xcf3b,	// (0x000167c7) fep_vkb_side_pane

0xcf77,	// (0x00016803) fep_vkb_top_pane_ParamLimits

0xcf77,	// (0x00016803) fep_vkb_top_pane

0xcfac,	// (0x00016838) fep_vkb_top_pane_g1_ParamLimits

0xcfac,	// (0x00016838) fep_vkb_top_pane_g1

0xcfbb,	// (0x00016847) fep_vkb_top_pane_g2_ParamLimits

0xcfbb,	// (0x00016847) fep_vkb_top_pane_g2

0xcfca,	// (0x00016856) fep_vkb_top_pane_g3_ParamLimits

0xcfca,	// (0x00016856) fep_vkb_top_pane_g3

0x0003,

0xfb39,	// (0x000193c5) fep_vkb_top_pane_g_ParamLimits

0xfb39,	// (0x000193c5) fep_vkb_top_pane_g

0xcfe8,	// (0x00016874) fep_vkb_top_text_pane_ParamLimits

0xcfe8,	// (0x00016874) fep_vkb_top_text_pane

0xcff9,	// (0x00016885) fep_vkb_side_pane_g1_ParamLimits

0xcff9,	// (0x00016885) fep_vkb_side_pane_g1

0xd042,	// (0x000168ce) grid_vkb_side_pane_ParamLimits

0xd042,	// (0x000168ce) grid_vkb_side_pane

0x70ba,	// (0x00010946) bg_popup_fep_shadow_pane_g2

0x70c3,	// (0x0001094f) bg_popup_fep_shadow_pane_g3

0x70cb,	// (0x00010957) bg_popup_fep_shadow_pane_g4

0x70d4,	// (0x00010960) bg_popup_fep_shadow_pane_g5

0x70de,	// (0x0001096a) bg_popup_fep_shadow_pane_g6

0x70e6,	// (0x00010972) bg_popup_fep_shadow_pane_g7

0x8cf9,	// (0x00012585) bg_popup_fep_shadow_pane_g8

0xd099,	// (0x00016925) grid_vkb_keypad_number_pane_ParamLimits

0xd099,	// (0x00016925) grid_vkb_keypad_number_pane

0xd0a9,	// (0x00016935) grid_vkb_keypad_pane_ParamLimits

0xd0a9,	// (0x00016935) grid_vkb_keypad_pane

0xd0cf,	// (0x0001695b) fep_vkb_bottom_pane_g1_ParamLimits

0xd0cf,	// (0x0001695b) fep_vkb_bottom_pane_g1

0xd0f8,	// (0x00016984) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd0f8,	// (0x00016984) grid_vkb_keypad_bottom_left_pane

0xd10d,	// (0x00016999) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd10d,	// (0x00016999) grid_vkb_keypad_bottom_right_pane

0xd122,	// (0x000169ae) fep_vkb_top_text_pane_g1

0xd13d,	// (0x000169c9) fep_vkb_top_text_pane_t1

0xd152,	// (0x000169de) cell_vkb_side_pane_ParamLimits

0xd152,	// (0x000169de) cell_vkb_side_pane

0xcd6c,	// (0x000165f8) cell_vkb_side_pane_g1

0xd191,	// (0x00016a1d) cell_vkb_keypad_pane_ParamLimits

0xd191,	// (0x00016a1d) cell_vkb_keypad_pane

0xd206,	// (0x00016a92) cell_vkb_keypad_pane_g1

0x0008,

0xfb66,	// (0x000193f2) bg_popup_fep_shadow_pane_g

0x70f8,	// (0x00010984) cell_hwr_side_pane_g1

0x70f8,	// (0x00010984) cell_hwr_side_pane_g2

0xd210,	// (0x00016a9c) cell_vkb_keypad_pane_t1

0xd21e,	// (0x00016aaa) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd21e,	// (0x00016aaa) cell_vkb_keypad_bottom_left_pane

0xd23b,	// (0x00016ac7) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd23b,	// (0x00016ac7) cell_vkb_keypad_bottom_right_pane

0xcd6c,	// (0x000165f8) cell_vkb_keypad_bottom_left_pane_g1

0xcd6c,	// (0x000165f8) cell_vkb_keypad_bottom_right_pane_g1

0xd274,	// (0x00016b00) cell_vkb_keypad_number_pane_ParamLimits

0xd274,	// (0x00016b00) cell_vkb_keypad_number_pane

0xd293,	// (0x00016b1f) cell_vkb_keypad_number_pane_g1

0xd29d,	// (0x00016b29) cell_vkb_keypad_number_pane_g2

0xd2a6,	// (0x00016b32) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb58,	// (0x000193e4) cell_vkb_keypad_number_pane_g

0xd210,	// (0x00016a9c) cell_vkb_keypad_number_pane_t1

0xd2ca,	// (0x00016b56) fep_vkb_candidate_pane_g1

0x0001,

0xfb79,	// (0x00019405) cell_hwr_side_pane_g

0xd2e3,	// (0x00016b6f) cell_hwr_side_pane_t1

0x7102,	// (0x0001098e) cell_hwr_side_pane_t1_copy1

0x7110,	// (0x0001099c) cell_hwr_candidate_pane_g1

0x713f,	// (0x000109cb) cell_hwr_candidate_pane_t1

0xcd6c,	// (0x000165f8) cell_vkb_candidate_pane_g2

0xd327,	// (0x00016bb3) cell_vkb_candidate_pane_t1

0x6eab,	// (0x00010737) bg_popup_fep_shadow_pane_ParamLimits

0x6eab,	// (0x00010737) bg_popup_fep_shadow_pane

0x6f60,	// (0x000107ec) bg_fep_hwr_top_pane_g4

0xcdec,	// (0x00016678) bg_hwr_side_pane_g1_ParamLimits

0xcdec,	// (0x00016678) bg_hwr_side_pane_g1

0x6fd1,	// (0x0001085d) cell_hwr_side_pane_ParamLimits

0x6fd1,	// (0x0001085d) cell_hwr_side_pane

0x700c,	// (0x00010898) fep_hwr_write_pane_g1_ParamLimits

0x700c,	// (0x00010898) fep_hwr_write_pane_g1

0x7019,	// (0x000108a5) fep_hwr_write_pane_g2_ParamLimits

0x7019,	// (0x000108a5) fep_hwr_write_pane_g2

0x7026,	// (0x000108b2) fep_hwr_write_pane_g3_ParamLimits

0x7026,	// (0x000108b2) fep_hwr_write_pane_g3

0x7034,	// (0x000108c0) fep_hwr_write_pane_g4_ParamLimits

0x7034,	// (0x000108c0) fep_hwr_write_pane_g4

0x0005,

0xfb25,	// (0x000193b1) fep_hwr_write_pane_g_ParamLimits

0xfb25,	// (0x000193b1) fep_hwr_write_pane_g

0x6f60,	// (0x000107ec) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6f60,	// (0x000107ec) bg_fep_hwr_candidate_pane_g2

0x7049,	// (0x000108d5) cell_hwr_candidate_pane_ParamLimits

0x7049,	// (0x000108d5) cell_hwr_candidate_pane

0x708b,	// (0x00010917) fep_hwr_candidate_pane_g1_ParamLimits

0xce4c,	// (0x000166d8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xce4c,	// (0x000166d8) bg_popup_fep_shadow_pane_cp2

0xcfda,	// (0x00016866) fep_vkb_top_pane_g4_ParamLimits

0xcfda,	// (0x00016866) fep_vkb_top_pane_g4

0xd020,	// (0x000168ac) fep_vkb_side_pane_g2_ParamLimits

0xd020,	// (0x000168ac) fep_vkb_side_pane_g2

0x89e2,	// (0x0001226e) list_setting_pane_t4_ParamLimits

0x89e2,	// (0x0001226e) list_setting_pane_t4

0x8a5c,	// (0x000122e8) list_setting_number_pane_t5_ParamLimits

0x8a5c,	// (0x000122e8) list_setting_number_pane_t5

0x93ad,	// (0x00012c39) list_double_heading_pane_cp2_ParamLimits

0x93ad,	// (0x00012c39) list_double_heading_pane_cp2

0x8821,	// (0x000120ad) list_double_heading_pane_g1_cp2_ParamLimits

0x8821,	// (0x000120ad) list_double_heading_pane_g1_cp2

0x8bda,	// (0x00012466) list_double_heading_pane_g2_cp2_ParamLimits

0x8bda,	// (0x00012466) list_double_heading_pane_g2_cp2

0xd335,	// (0x00016bc1) list_double_heading_pane_t1_cp2_ParamLimits

0xd335,	// (0x00016bc1) list_double_heading_pane_t1_cp2

0xd34b,	// (0x00016bd7) list_double_heading_pane_t2_cp2_ParamLimits

0xd34b,	// (0x00016bd7) list_double_heading_pane_t2_cp2

0x7ce0,	// (0x0001156c) aid_value_unit2

0x5c5b,	// (0x0000f4e7) popup_preview_fixed_window

0x808f,	// (0x0001191b) bg_popup_preview_window_pane_cp02

0xd35d,	// (0x00016be9) list_preview_fixed_pane

0xd3a3,	// (0x00016c2f) list_empty_pane_fp_ParamLimits

0xd3a3,	// (0x00016c2f) list_empty_pane_fp

0xd3a3,	// (0x00016c2f) list_single_cale_day_pane_fp_ParamLimits

0xd3a3,	// (0x00016c2f) list_single_cale_day_pane_fp

0xd3a3,	// (0x00016c2f) list_single_graphic_heading_pane_fp_ParamLimits

0xd3a3,	// (0x00016c2f) list_single_graphic_heading_pane_fp

0xd3a3,	// (0x00016c2f) list_single_graphic_pane_fp_ParamLimits

0xd3a3,	// (0x00016c2f) list_single_graphic_pane_fp

0xd3a3,	// (0x00016c2f) list_single_heading_pane_fp_ParamLimits

0xd3a3,	// (0x00016c2f) list_single_heading_pane_fp

0xd3a3,	// (0x00016c2f) list_single_pane_fp_ParamLimits

0xd3a3,	// (0x00016c2f) list_single_pane_fp

0xd3b9,	// (0x00016c45) list_single_pane_fp_g1_ParamLimits

0xd3b9,	// (0x00016c45) list_single_pane_fp_g1

0x8821,	// (0x000120ad) list_single_pane_fp_g2_ParamLimits

0x8821,	// (0x000120ad) list_single_pane_fp_g2

0x8bda,	// (0x00012466) list_single_pane_fp_g3_ParamLimits

0x8bda,	// (0x00012466) list_single_pane_fp_g3

0xd3c5,	// (0x00016c51) list_single_pane_fp_g4_ParamLimits

0xd3c5,	// (0x00016c51) list_single_pane_fp_g4

0x0003,

0xfb8c,	// (0x00019418) list_single_pane_fp_g_ParamLimits

0xfb8c,	// (0x00019418) list_single_pane_fp_g

0xd3d1,	// (0x00016c5d) list_single_pane_fp_t1_ParamLimits

0xd3d1,	// (0x00016c5d) list_single_pane_fp_t1

0xd3e8,	// (0x00016c74) list_single_graphic_pane_fp_g1_ParamLimits

0xd3e8,	// (0x00016c74) list_single_graphic_pane_fp_g1

0xd3b9,	// (0x00016c45) list_single_graphic_pane_fp_g2_ParamLimits

0xd3b9,	// (0x00016c45) list_single_graphic_pane_fp_g2

0x8821,	// (0x000120ad) list_single_graphic_pane_fp_g3_ParamLimits

0x8821,	// (0x000120ad) list_single_graphic_pane_fp_g3

0x8bda,	// (0x00012466) list_single_graphic_pane_fp_g4_ParamLimits

0x8bda,	// (0x00012466) list_single_graphic_pane_fp_g4

0xd3c5,	// (0x00016c51) list_single_graphic_pane_fp_g5_ParamLimits

0xd3c5,	// (0x00016c51) list_single_graphic_pane_fp_g5

0x0004,

0xfb95,	// (0x00019421) list_single_graphic_pane_fp_g_ParamLimits

0xfb95,	// (0x00019421) list_single_graphic_pane_fp_g

0xd3f4,	// (0x00016c80) list_single_graphic_pane_fp_t1_ParamLimits

0xd3f4,	// (0x00016c80) list_single_graphic_pane_fp_t1

0xd3e8,	// (0x00016c74) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd3e8,	// (0x00016c74) list_single_graphic_heading_pane_fp_g1

0xd3b9,	// (0x00016c45) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xd3b9,	// (0x00016c45) list_single_graphic_heading_pane_fp_g2

0x8821,	// (0x000120ad) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8821,	// (0x000120ad) list_single_graphic_heading_pane_fp_g3

0x8bda,	// (0x00012466) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8bda,	// (0x00012466) list_single_graphic_heading_pane_fp_g4

0xd3c5,	// (0x00016c51) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xd3c5,	// (0x00016c51) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb95,	// (0x00019421) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x00019421) list_single_graphic_heading_pane_fp_g

0xd40a,	// (0x00016c96) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd40a,	// (0x00016c96) list_single_graphic_heading_pane_fp_t1

0xd420,	// (0x00016cac) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd420,	// (0x00016cac) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba0,	// (0x0001942c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba0,	// (0x0001942c) list_single_graphic_heading_pane_fp_t

0xd432,	// (0x00016cbe) list_single_cale_day_pane_fp_g1_ParamLimits

0xd432,	// (0x00016cbe) list_single_cale_day_pane_fp_g1

0xd46a,	// (0x00016cf6) list_single_cale_day_pane_fp_g2_ParamLimits

0xd46a,	// (0x00016cf6) list_single_cale_day_pane_fp_g2

0xd476,	// (0x00016d02) list_single_cale_day_pane_fp_g3_ParamLimits

0xd476,	// (0x00016d02) list_single_cale_day_pane_fp_g3

0xd49e,	// (0x00016d2a) list_single_cale_day_pane_fp_g4_ParamLimits

0xd49e,	// (0x00016d2a) list_single_cale_day_pane_fp_g4

0xd4c2,	// (0x00016d4e) list_single_cale_day_pane_fp_g5_ParamLimits

0xd4c2,	// (0x00016d4e) list_single_cale_day_pane_fp_g5

0x0004,

0xfba5,	// (0x00019431) list_single_cale_day_pane_fp_g_ParamLimits

0xfba5,	// (0x00019431) list_single_cale_day_pane_fp_g

0xd4e6,	// (0x00016d72) list_single_cale_day_pane_fp_t1_ParamLimits

0xd4e6,	// (0x00016d72) list_single_cale_day_pane_fp_t1

0xd50c,	// (0x00016d98) list_single_cale_day_pane_fp_t2_ParamLimits

0xd50c,	// (0x00016d98) list_single_cale_day_pane_fp_t2

0xd525,	// (0x00016db1) list_single_cale_day_pane_fp_t3_ParamLimits

0xd525,	// (0x00016db1) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb0,	// (0x0001943c) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb0,	// (0x0001943c) list_single_cale_day_pane_fp_t

0xd3b9,	// (0x00016c45) list_empty_pane_fp_g1_ParamLimits

0xd3b9,	// (0x00016c45) list_empty_pane_fp_g1

0xd53e,	// (0x00016dca) list_empty_pane_fp_t1

0xd54c,	// (0x00016dd8) list_empty_pane_fp_t2

0x0001,

0xfbb7,	// (0x00019443) list_empty_pane_fp_t

0xd3b9,	// (0x00016c45) list_single_heading_pane_fp_g1_ParamLimits

0xd3b9,	// (0x00016c45) list_single_heading_pane_fp_g1

0x8821,	// (0x000120ad) list_single_heading_pane_fp_g2_ParamLimits

0x8821,	// (0x000120ad) list_single_heading_pane_fp_g2

0x8bda,	// (0x00012466) list_single_heading_pane_fp_g3_ParamLimits

0x8bda,	// (0x00012466) list_single_heading_pane_fp_g3

0x0002,

0xfbbc,	// (0x00019448) list_single_heading_pane_fp_g_ParamLimits

0xfbbc,	// (0x00019448) list_single_heading_pane_fp_g

0xd55a,	// (0x00016de6) list_single_heading_pane_fp_t1_ParamLimits

0xd55a,	// (0x00016de6) list_single_heading_pane_fp_t1

0xd56c,	// (0x00016df8) list_single_heading_pane_fp_t2_ParamLimits

0xd56c,	// (0x00016df8) list_single_heading_pane_fp_t2

0x0001,

0xfbc3,	// (0x0001944f) list_single_heading_pane_fp_t_ParamLimits

0xfbc3,	// (0x0001944f) list_single_heading_pane_fp_t

0x8f14,	// (0x000127a0) aid_size_cell_fast

0x7fff,	// (0x0001188b) soft_indicator_pane_cp1_t1

0x8f4e,	// (0x000127da) cell_app_pane_cp2_ParamLimits

0x8f4e,	// (0x000127da) cell_app_pane_cp2

0x6ecd,	// (0x00010759) fep_hwr_candidate_drop_down_list_pane

0x70a5,	// (0x00010931) fep_hwr_candidate_pane_g3_ParamLimits

0x70a5,	// (0x00010931) fep_hwr_candidate_pane_g3

0x5285,	// (0x0000eb11) fep_hwr_candidate_pane_g4_ParamLimits

0x5285,	// (0x0000eb11) fep_hwr_candidate_pane_g4

0x0002,

0xfb32,	// (0x000193be) fep_hwr_candidate_pane_g_ParamLimits

0xfb32,	// (0x000193be) fep_hwr_candidate_pane_g

0xcecf,	// (0x0001675b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xcecf,	// (0x0001675b) fep_vkb_candidate_drop_down_list_pane

0xd2d2,	// (0x00016b5e) fep_vkb_candidate_pane_g3

0xd2da,	// (0x00016b66) fep_vkb_candidate_pane_g4

0x0002,

0xfb5f,	// (0x000193eb) fep_vkb_candidate_pane_g

0x7110,	// (0x0001099c) cell_hwr_candidate_pane_g1_ParamLimits

0x711e,	// (0x000109aa) cell_hwr_candidate_pane_g3_ParamLimits

0x711e,	// (0x000109aa) cell_hwr_candidate_pane_g3

0xf38a,	// (0x00018c16) cell_hwr_candidate_pane_g4_ParamLimits

0xf38a,	// (0x00018c16) cell_hwr_candidate_pane_g4

0x0002,

0xfb7e,	// (0x0001940a) cell_hwr_candidate_pane_g_ParamLimits

0xfb7e,	// (0x0001940a) cell_hwr_candidate_pane_g

0xd2f1,	// (0x00016b7d) cell_vkb_candidate_pane_g3_ParamLimits

0xd2f1,	// (0x00016b7d) cell_vkb_candidate_pane_g3

0xd30c,	// (0x00016b98) cell_vkb_candidate_pane_g4_ParamLimits

0xd30c,	// (0x00016b98) cell_vkb_candidate_pane_g4

0xd582,	// (0x00016e0e) cell_app_pane_cp2_g1_ParamLimits

0xd582,	// (0x00016e0e) cell_app_pane_cp2_g1

0xd5a0,	// (0x00016e2c) cell_app_pane_cp2_g2_ParamLimits

0xd5a0,	// (0x00016e2c) cell_app_pane_cp2_g2

0x0001,

0xfbc8,	// (0x00019454) cell_app_pane_cp2_g_ParamLimits

0xfbc8,	// (0x00019454) cell_app_pane_cp2_g

0xd5ac,	// (0x00016e38) cell_app_pane_cp2_t1_ParamLimits

0xd5ac,	// (0x00016e38) cell_app_pane_cp2_t1

0x8bb4,	// (0x00012440) grid_highlight_pane_cp1_ParamLimits

0x8bb4,	// (0x00012440) grid_highlight_pane_cp1

0x715d,	// (0x000109e9) cell_hwr_candidate_pane_cp1_ParamLimits

0x715d,	// (0x000109e9) cell_hwr_candidate_pane_cp1

0x7110,	// (0x0001099c) fep_hwr_candidate_drop_down_list_pane_g1

0x717c,	// (0x00010a08) fep_hwr_candidate_drop_down_list_pane_g2

0x7189,	// (0x00010a15) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcd,	// (0x00019459) fep_hwr_candidate_drop_down_list_pane_g

0x7196,	// (0x00010a22) fep_hwr_candidate_drop_down_list_scroll_pane

0x719f,	// (0x00010a2b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x719f,	// (0x00010a2b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x71ac,	// (0x00010a38) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71ac,	// (0x00010a38) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x71b9,	// (0x00010a45) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71b9,	// (0x00010a45) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x71c6,	// (0x00010a52) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x71c6,	// (0x00010a52) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x71e1,	// (0x00010a6d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x71e1,	// (0x00010a6d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x71fc,	// (0x00010a88) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71fc,	// (0x00010a88) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7217,	// (0x00010aa3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7217,	// (0x00010aa3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7232,	// (0x00010abe) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7232,	// (0x00010abe) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd4,	// (0x00019460) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd4,	// (0x00019460) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xd5be,	// (0x00016e4a) cell_vkb_candidate_pane_cp1_ParamLimits

0xd5be,	// (0x00016e4a) cell_vkb_candidate_pane_cp1

0xcfda,	// (0x00016866) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xcfda,	// (0x00016866) fep_vkb_candidate_drop_down_list_pane_g1

0xd5de,	// (0x00016e6a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xd5de,	// (0x00016e6a) fep_vkb_candidate_drop_down_list_pane_g2

0xd5eb,	// (0x00016e77) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xd5eb,	// (0x00016e77) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe5,	// (0x00019471) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe5,	// (0x00019471) fep_vkb_candidate_drop_down_list_pane_g

0xd5f8,	// (0x00016e84) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xd5f8,	// (0x00016e84) fep_vkb_candidate_drop_down_list_scroll_pane

0xd605,	// (0x00016e91) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xd605,	// (0x00016e91) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xd612,	// (0x00016e9e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xd612,	// (0x00016e9e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xd61e,	// (0x00016eaa) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xd61e,	// (0x00016eaa) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xd62a,	// (0x00016eb6) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd62a,	// (0x00016eb6) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xd64b,	// (0x00016ed7) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd64b,	// (0x00016ed7) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xd66c,	// (0x00016ef8) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd66c,	// (0x00016ef8) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xd68d,	// (0x00016f19) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd68d,	// (0x00016f19) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xd6ae,	// (0x00016f3a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd6ae,	// (0x00016f3a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbec,	// (0x00019478) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbec,	// (0x00019478) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7d16,	// (0x000115a2) title_pane_g1_ParamLimits

0x7d23,	// (0x000115af) title_pane_g2_ParamLimits

0xf554,	// (0x00018de0) title_pane_g_ParamLimits

0x9356,	// (0x00012be2) aid_call2_pane

0x935e,	// (0x00012bea) aid_call_pane

0x9366,	// (0x00012bf2) popup_clock_analogue_window_g1

0x9366,	// (0x00012bf2) popup_clock_analogue_window_g2

0x5fc4,	// (0x0000f850) popup_clock_analogue_window_g3

0x5fcd,	// (0x0000f859) popup_clock_analogue_window_g4

0x7d02,	// (0x0001158e) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x00018f85) popup_clock_analogue_window_g

0x5fd5,	// (0x0000f861) popup_clock_analogue_window_t1

0x5fe3,	// (0x0000f86f) clock_digital_number_pane_ParamLimits

0x5fe3,	// (0x0000f86f) clock_digital_number_pane

0x5fef,	// (0x0000f87b) clock_digital_number_pane_cp02_ParamLimits

0x5fef,	// (0x0000f87b) clock_digital_number_pane_cp02

0x5ffb,	// (0x0000f887) clock_digital_number_pane_cp03_ParamLimits

0x5ffb,	// (0x0000f887) clock_digital_number_pane_cp03

0x6007,	// (0x0000f893) clock_digital_number_pane_cp04_ParamLimits

0x6007,	// (0x0000f893) clock_digital_number_pane_cp04

0x6013,	// (0x0000f89f) clock_digital_separator_pane_ParamLimits

0x6013,	// (0x0000f89f) clock_digital_separator_pane

0x601f,	// (0x0000f8ab) popup_clock_digital_window_t1_ParamLimits

0x601f,	// (0x0000f8ab) popup_clock_digital_window_t1

0x7d02,	// (0x0001158e) clock_digital_number_pane_g1

0x7d02,	// (0x0001158e) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x00018f90) clock_digital_number_pane_g

0x7d02,	// (0x0001158e) clock_digital_separator_pane_g1

0x7d02,	// (0x0001158e) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x00018f90) clock_digital_separator_pane_g

0x9d5a,	// (0x000135e6) aid_fill_nsta_ParamLimits

0x9ea0,	// (0x0001372c) indicator_nsta_pane_ParamLimits

0xa013,	// (0x0001389f) popup_clock_analogue_window

0xa013,	// (0x0001389f) popup_clock_digital_window

0x7dec,	// (0x00011678) grid_indicator_nsta_pane_ParamLimits

0xc6ea,	// (0x00015f76) clock_nsta_pane_t2

0x0001,

0xfab2,	// (0x0001933e) clock_nsta_pane_t

0x5f88,	// (0x0000f814) aid_size_max_handle

0x5f92,	// (0x0000f81e) aid_size_min_handle

0x99ec,	// (0x00013278) editor_scroll_pane

0xd6c9,	// (0x00016f55) ex_editor_pane

0x8e82,	// (0x0001270e) scroll_pane_cp13

0x85fc,	// (0x00011e88) scroll_pane_cp14

0x9395,	// (0x00012c21) scroll_pane_cp36

0x93c1,	// (0x00012c4d) list_single_graphic_hl_pane_cp2_ParamLimits

0x93c1,	// (0x00012c4d) list_single_graphic_hl_pane_cp2

0xb9d8,	// (0x00015264) list_single_graphic_hl_pane_ParamLimits

0xb9d8,	// (0x00015264) list_single_graphic_hl_pane

0xd6d1,	// (0x00016f5d) aid_size_min_hl_cp1

0xd6da,	// (0x00016f66) list_highlight_pane_cp34_ParamLimits

0xd6da,	// (0x00016f66) list_highlight_pane_cp34

0xd6eb,	// (0x00016f77) list_single_graphic_hl_pane_g1_ParamLimits

0xd6eb,	// (0x00016f77) list_single_graphic_hl_pane_g1

0xd6f8,	// (0x00016f84) list_single_graphic_hl_pane_g2_ParamLimits

0xd6f8,	// (0x00016f84) list_single_graphic_hl_pane_g2

0xd6f8,	// (0x00016f84) list_single_graphic_hl_pane_g3_ParamLimits

0xd6f8,	// (0x00016f84) list_single_graphic_hl_pane_g3

0xbf74,	// (0x00015800) list_single_graphic_hl_pane_g4_ParamLimits

0xbf74,	// (0x00015800) list_single_graphic_hl_pane_g4

0xd704,	// (0x00016f90) list_single_graphic_hl_pane_g5_ParamLimits

0xd704,	// (0x00016f90) list_single_graphic_hl_pane_g5

0x0004,

0xfbfd,	// (0x00019489) list_single_graphic_hl_pane_g_ParamLimits

0xfbfd,	// (0x00019489) list_single_graphic_hl_pane_g

0xd718,	// (0x00016fa4) list_single_graphic_hl_pane_t1_ParamLimits

0xd718,	// (0x00016fa4) list_single_graphic_hl_pane_t1

0xd72e,	// (0x00016fba) aid_size_min_hl_cp2

0xd737,	// (0x00016fc3) list_highlight_pane_cp34_cp2_ParamLimits

0xd737,	// (0x00016fc3) list_highlight_pane_cp34_cp2

0xd6eb,	// (0x00016f77) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xd6eb,	// (0x00016f77) list_single_graphic_hl_pane_g1_cp2

0xd744,	// (0x00016fd0) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xd744,	// (0x00016fd0) list_single_graphic_hl_pane_g2_cp2

0xd750,	// (0x00016fdc) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd750,	// (0x00016fdc) list_single_graphic_hl_pane_g3_cp2

0x8610,	// (0x00011e9c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8610,	// (0x00011e9c) list_single_graphic_hl_pane_g4_cp2

0xd75e,	// (0x00016fea) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xd75e,	// (0x00016fea) list_single_graphic_hl_pane_g5_cp2

0x62ca,	// (0x0000fb56) control_pane_g4_ParamLimits

0x62ca,	// (0x0000fb56) control_pane_g4

0x9d30,	// (0x000135bc) bg_popup_sub_pane_cp10_ParamLimits

0xcd76,	// (0x00016602) list_choice_list_pane_ParamLimits

0xcd85,	// (0x00016611) scroll_pane_cp23

0x808f,	// (0x0001191b) bg_popup_preview_window_pane_cp02_ParamLimits

0xd35d,	// (0x00016be9) list_preview_fixed_pane_ParamLimits

0xd373,	// (0x00016bff) list_preview_fixed_pane_cp_ParamLimits

0xd373,	// (0x00016bff) list_preview_fixed_pane_cp

0xd37f,	// (0x00016c0b) popup_preview_fixed_window_g1_ParamLimits

0xd37f,	// (0x00016c0b) popup_preview_fixed_window_g1

0xd38b,	// (0x00016c17) popup_preview_fixed_window_g2_ParamLimits

0xd38b,	// (0x00016c17) popup_preview_fixed_window_g2

0x0002,

0xfb85,	// (0x00019411) popup_preview_fixed_window_g_ParamLimits

0xfb85,	// (0x00019411) popup_preview_fixed_window_g

0x5efc,	// (0x0000f788) aid_navi_side_left_pane_ParamLimits

0x5f11,	// (0x0000f79d) aid_navi_side_right_pane_ParamLimits

0x5f29,	// (0x0000f7b5) navi_icon_pane_stacon_ParamLimits

0x5f3d,	// (0x0000f7c9) navi_navi_pane_stacon_ParamLimits

0x5f29,	// (0x0000f7b5) navi_text_pane_stacon_ParamLimits

0x5b2a,	// (0x0000f3b6) main_text_info_pane

0xd788,	// (0x00017014) listscroll_text_info_pane

0xd790,	// (0x0001701c) list_text_info_pane_ParamLimits

0xd790,	// (0x0001701c) list_text_info_pane

0xd79f,	// (0x0001702b) scroll_pane_cp24_ParamLimits

0xd79f,	// (0x0001702b) scroll_pane_cp24

0xd7bd,	// (0x00017049) list_text_info_pane_t1_ParamLimits

0xd7bd,	// (0x00017049) list_text_info_pane_t1

0x6432,	// (0x0000fcbe) popup_fast_swap2_window_ParamLimits

0x6432,	// (0x0000fcbe) popup_fast_swap2_window

0xd7f2,	// (0x0001707e) aid_size_cell_fast2

0x7cf8,	// (0x00011584) bg_popup_window_pane_cp17

0xa7af,	// (0x0001403b) heading_pane_cp2

0x82cf,	// (0x00011b5b) listscroll_fast2_pane

0xd7fc,	// (0x00017088) grid_fast2_pane

0xd806,	// (0x00017092) listscroll_fast2_pane_g1

0xd80e,	// (0x0001709a) listscroll_fast2_pane_g2

0x0001,

0xfc08,	// (0x00019494) listscroll_fast2_pane_g

0x8e82,	// (0x0001270e) scroll_pane_cp26

0xd818,	// (0x000170a4) cell_fast2_pane_ParamLimits

0xd818,	// (0x000170a4) cell_fast2_pane

0xd82d,	// (0x000170b9) cell_fast2_pane_g1

0xd836,	// (0x000170c2) cell_fast2_pane_g2

0xd83f,	// (0x000170cb) cell_fast2_pane_g3

0x0002,

0xfc0d,	// (0x00019499) cell_fast2_pane_g

0x83b9,	// (0x00011c45) grid_highlight_pane_cp9

0x63fa,	// (0x0000fc86) main_eswt_pane_ParamLimits

0x63fa,	// (0x0000fc86) main_eswt_pane

0xd7b4,	// (0x00017040) list_single_text_info_pane

0xd847,	// (0x000170d3) eswt_ctrl_button_pane

0xd847,	// (0x000170d3) eswt_ctrl_canvas_pane

0xd84f,	// (0x000170db) eswt_ctrl_combo_pane

0xd847,	// (0x000170d3) eswt_ctrl_default_pane

0xd847,	// (0x000170d3) eswt_ctrl_label_pane

0xd857,	// (0x000170e3) eswt_ctrl_wait_pane

0xd85f,	// (0x000170eb) eswt_shell_pane

0x7cf8,	// (0x00011584) listscroll_eswt_app_pane

0xd87f,	// (0x0001710b) popup_eswt_tasktip_window_ParamLimits

0xd87f,	// (0x0001710b) popup_eswt_tasktip_window

0xa36e,	// (0x00013bfa) bg_popup_window_pane_cp18

0xd890,	// (0x0001711c) eswt_control_pane_g1_ParamLimits

0xd890,	// (0x0001711c) eswt_control_pane_g1

0xd89d,	// (0x00017129) eswt_control_pane_g2_ParamLimits

0xd89d,	// (0x00017129) eswt_control_pane_g2

0xd8aa,	// (0x00017136) eswt_control_pane_g3_ParamLimits

0xd8aa,	// (0x00017136) eswt_control_pane_g3

0xd8b7,	// (0x00017143) eswt_control_pane_g4_ParamLimits

0xd8b7,	// (0x00017143) eswt_control_pane_g4

0x0003,

0xfc14,	// (0x000194a0) eswt_control_pane_g_ParamLimits

0xfc14,	// (0x000194a0) eswt_control_pane_g

0x8bb4,	// (0x00012440) bg_button_pane_ParamLimits

0x8bb4,	// (0x00012440) bg_button_pane

0x83ce,	// (0x00011c5a) common_borders_pane_copy2_ParamLimits

0x83ce,	// (0x00011c5a) common_borders_pane_copy2

0xd8c4,	// (0x00017150) control_button_pane_g1_ParamLimits

0xd8c4,	// (0x00017150) control_button_pane_g1

0xd8d0,	// (0x0001715c) control_button_pane_g2_ParamLimits

0xd8d0,	// (0x0001715c) control_button_pane_g2

0xd8dc,	// (0x00017168) control_button_pane_g3_ParamLimits

0xd8dc,	// (0x00017168) control_button_pane_g3

0x0002,

0xfc1d,	// (0x000194a9) control_button_pane_g_ParamLimits

0xfc1d,	// (0x000194a9) control_button_pane_g

0xd8f0,	// (0x0001717c) control_button_pane_t1

0xd8fe,	// (0x0001718a) control_button_pane_t2

0x0001,

0xfc24,	// (0x000194b0) control_button_pane_t

0xa252,	// (0x00013ade) bg_button_pane_g1

0xa262,	// (0x00013aee) bg_button_pane_g2

0xa25a,	// (0x00013ae6) bg_button_pane_g3

0xa272,	// (0x00013afe) bg_button_pane_g4

0xa26a,	// (0x00013af6) bg_button_pane_g5

0xa27a,	// (0x00013b06) bg_button_pane_g6

0xa282,	// (0x00013b0e) bg_button_pane_g7

0xa292,	// (0x00013b1e) bg_button_pane_g8

0xa28a,	// (0x00013b16) bg_button_pane_g9

0x0008,

0xf862,	// (0x000190ee) bg_button_pane_g

0xcd31,	// (0x000165bd) common_borders_pane_ParamLimits

0xcd31,	// (0x000165bd) common_borders_pane

0xd890,	// (0x0001711c) eswt_control_pane_g1_copy1_ParamLimits

0xd890,	// (0x0001711c) eswt_control_pane_g1_copy1

0xd89d,	// (0x00017129) eswt_control_pane_g2_copy1_ParamLimits

0xd89d,	// (0x00017129) eswt_control_pane_g2_copy1

0xd8aa,	// (0x00017136) eswt_control_pane_g3_copy1_ParamLimits

0xd8aa,	// (0x00017136) eswt_control_pane_g3_copy1

0xd8b7,	// (0x00017143) eswt_control_pane_g4_copy1_ParamLimits

0xd8b7,	// (0x00017143) eswt_control_pane_g4_copy1

0xcd6c,	// (0x000165f8) bg_eswt_ctrl_canvas_pane_g1

0xcd31,	// (0x000165bd) common_borders_pane_cp2_ParamLimits

0xcd31,	// (0x000165bd) common_borders_pane_cp2

0xcd31,	// (0x000165bd) common_borders_pane_cp3_ParamLimits

0xcd31,	// (0x000165bd) common_borders_pane_cp3

0xd90c,	// (0x00017198) separator_horizontal_pane

0xd914,	// (0x000171a0) separator_vertical_pane

0xd890,	// (0x0001711c) eswt_control_pane_g1_copy2_ParamLimits

0xd890,	// (0x0001711c) eswt_control_pane_g1_copy2

0xd89d,	// (0x00017129) eswt_control_pane_g2_copy2_ParamLimits

0xd89d,	// (0x00017129) eswt_control_pane_g2_copy2

0xd8aa,	// (0x00017136) eswt_control_pane_g3_copy2_ParamLimits

0xd8aa,	// (0x00017136) eswt_control_pane_g3_copy2

0xd8b7,	// (0x00017143) eswt_control_pane_g4_copy2_ParamLimits

0xd8b7,	// (0x00017143) eswt_control_pane_g4_copy2

0x7cf8,	// (0x00011584) common_borders_pane_cp4

0xd91d,	// (0x000171a9) separator_horizontal_pane_g1

0xd926,	// (0x000171b2) separator_horizontal_pane_g2

0xd92f,	// (0x000171bb) separator_horizontal_pane_g3

0x0002,

0xfc29,	// (0x000194b5) separator_horizontal_pane_g

0xd890,	// (0x0001711c) eswt_control_pane_g1_copy3_ParamLimits

0xd890,	// (0x0001711c) eswt_control_pane_g1_copy3

0xd89d,	// (0x00017129) eswt_control_pane_g2_copy3_ParamLimits

0xd89d,	// (0x00017129) eswt_control_pane_g2_copy3

0xd8aa,	// (0x00017136) eswt_control_pane_g3_copy3_ParamLimits

0xd8aa,	// (0x00017136) eswt_control_pane_g3_copy3

0xd8b7,	// (0x00017143) eswt_control_pane_g4_copy3_ParamLimits

0xd8b7,	// (0x00017143) eswt_control_pane_g4_copy3

0x7cf8,	// (0x00011584) common_borders_pane_cp5

0xd938,	// (0x000171c4) separator_vertical_pane_g1

0xd941,	// (0x000171cd) separator_vertical_pane_g2

0xd94a,	// (0x000171d6) separator_vertical_pane_g3

0x0002,

0xfc30,	// (0x000194bc) separator_vertical_pane_g

0xd890,	// (0x0001711c) eswt_control_pane_g1_copy4_ParamLimits

0xd890,	// (0x0001711c) eswt_control_pane_g1_copy4

0xd89d,	// (0x00017129) eswt_control_pane_g2_copy4_ParamLimits

0xd89d,	// (0x00017129) eswt_control_pane_g2_copy4

0xd8aa,	// (0x00017136) eswt_control_pane_g3_copy4_ParamLimits

0xd8aa,	// (0x00017136) eswt_control_pane_g3_copy4

0xd8b7,	// (0x00017143) eswt_control_pane_g4_copy4_ParamLimits

0xd8b7,	// (0x00017143) eswt_control_pane_g4_copy4

0xd953,	// (0x000171df) eswt_ctrl_combo_button_pane

0xd95b,	// (0x000171e7) eswt_ctrl_input_pane

0xd963,	// (0x000171ef) popup_choice_list_window_cp70

0xd96b,	// (0x000171f7) eswt_ctrl_input_pane_t1

0x7cf8,	// (0x00011584) input_focus_pane_cp70

0xcd31,	// (0x000165bd) bg_button_pane_cp70_ParamLimits

0xcd31,	// (0x000165bd) bg_button_pane_cp70

0xd979,	// (0x00017205) eswt_ctrl_combo_button_pane_g1

0xd981,	// (0x0001720d) wait_bar_pane_cp70

0xa36e,	// (0x00013bfa) bg_popup_window_pane_cp70_ParamLimits

0xa36e,	// (0x00013bfa) bg_popup_window_pane_cp70

0xd989,	// (0x00017215) popup_eswt_tasktip_window_t1

0xd99f,	// (0x0001722b) wait_bar_pane_cp71_ParamLimits

0xd99f,	// (0x0001722b) wait_bar_pane_cp71

0xd9ab,	// (0x00017237) grid_eswt_app_pane

0x9199,	// (0x00012a25) scroll_pane_cp70

0xd9b4,	// (0x00017240) cell_eswt_app_pane_ParamLimits

0xd9b4,	// (0x00017240) cell_eswt_app_pane

0xd9e8,	// (0x00017274) cell_eswt_app_pane_g1_ParamLimits

0xd9e8,	// (0x00017274) cell_eswt_app_pane_g1

0xda17,	// (0x000172a3) cell_eswt_app_pane_g2_ParamLimits

0xda17,	// (0x000172a3) cell_eswt_app_pane_g2

0x0001,

0xfc37,	// (0x000194c3) cell_eswt_app_pane_g_ParamLimits

0xfc37,	// (0x000194c3) cell_eswt_app_pane_g

0xda3b,	// (0x000172c7) cell_eswt_app_pane_t1_ParamLimits

0xda3b,	// (0x000172c7) cell_eswt_app_pane_t1

0xda6d,	// (0x000172f9) grid_highlight_pane_cp70_ParamLimits

0xda6d,	// (0x000172f9) grid_highlight_pane_cp70

0x98cd,	// (0x00013159) set_content_pane_g1

0x9c88,	// (0x00013514) status_small_volume_pane

0x724d,	// (0x00010ad9) status_small_volume_pane_g1

0x7255,	// (0x00010ae1) volume_small2_pane

0x725e,	// (0x00010aea) volume_small2_pane_g1

0x7267,	// (0x00010af3) volume_small2_pane_g2

0x7270,	// (0x00010afc) volume_small2_pane_g3

0x7279,	// (0x00010b05) volume_small2_pane_g4

0x7282,	// (0x00010b0e) volume_small2_pane_g5

0x728b,	// (0x00010b17) volume_small2_pane_g6

0x7294,	// (0x00010b20) volume_small2_pane_g7

0x729d,	// (0x00010b29) volume_small2_pane_g8

0x72a6,	// (0x00010b32) volume_small2_pane_g9

0x72af,	// (0x00010b3b) volume_small2_pane_g10

0x0009,

0xfc3c,	// (0x000194c8) volume_small2_pane_g

0xd122,	// (0x000169ae) fep_vkb_top_text_pane_g1_ParamLimits

0xd13d,	// (0x000169c9) fep_vkb_top_text_pane_t1_ParamLimits

0xd397,	// (0x00016c23) popup_preview_fixed_window_g3_ParamLimits

0xd397,	// (0x00016c23) popup_preview_fixed_window_g3

0x68d9,	// (0x00010165) popup_toolbar_trans_pane

0xb737,	// (0x00014fc3) aid_height_set_list_ParamLimits

0xb748,	// (0x00014fd4) aid_size_parent_ParamLimits

0x9d30,	// (0x000135bc) list_highlight_pane_cp2_ParamLimits

0x98cd,	// (0x00013159) set_content_pane_g1_ParamLimits

0xb9f7,	// (0x00015283) list_single_image_pane_ParamLimits

0xb9f7,	// (0x00015283) list_single_image_pane

0xda79,	// (0x00017305) aid_size_cell_image_ParamLimits

0xda79,	// (0x00017305) aid_size_cell_image

0xda86,	// (0x00017312) grid_single_image_pane_ParamLimits

0xda86,	// (0x00017312) grid_single_image_pane

0xda92,	// (0x0001731e) list_single_image_pane_g1_ParamLimits

0xda92,	// (0x0001731e) list_single_image_pane_g1

0xda9e,	// (0x0001732a) list_single_image_pane_g2_ParamLimits

0xda9e,	// (0x0001732a) list_single_image_pane_g2

0x0001,

0xfc51,	// (0x000194dd) list_single_image_pane_g_ParamLimits

0xfc51,	// (0x000194dd) list_single_image_pane_g

0xdab2,	// (0x0001733e) list_single_image_pane_t1_ParamLimits

0xdab2,	// (0x0001733e) list_single_image_pane_t1

0xdac8,	// (0x00017354) cell_image_list_pane_ParamLimits

0xdac8,	// (0x00017354) cell_image_list_pane

0xdadc,	// (0x00017368) cell_image_list_pane_g1

0xdae5,	// (0x00017371) cell_image_list_pane_g2

0x0001,

0xfc56,	// (0x000194e2) cell_image_list_pane_g

0xdaee,	// (0x0001737a) aid_size_cell_tb_trans_pane

0x8bb4,	// (0x00012440) bg_tb_trans_pane

0xdb00,	// (0x0001738c) grid_tb_trans_pane

0xa252,	// (0x00013ade) bg_tb_trans_pane_g1

0xa262,	// (0x00013aee) bg_tb_trans_pane_g2

0xa25a,	// (0x00013ae6) bg_tb_trans_pane_g3

0xa272,	// (0x00013afe) bg_tb_trans_pane_g4

0xa26a,	// (0x00013af6) bg_tb_trans_pane_g5

0xa292,	// (0x00013b1e) bg_tb_trans_pane_g6

0xa28a,	// (0x00013b16) bg_tb_trans_pane_g7

0xa27a,	// (0x00013b06) bg_tb_trans_pane_g8

0xa282,	// (0x00013b0e) bg_tb_trans_pane_g9

0x0008,

0xfc5b,	// (0x000194e7) bg_tb_trans_pane_g

0xdb14,	// (0x000173a0) cell_toolbar_trans_pane_ParamLimits

0xdb14,	// (0x000173a0) cell_toolbar_trans_pane

0xcd6c,	// (0x000165f8) cell_toolbar_trans_pane_g1

0xc8cd,	// (0x00016159) list_form2_midp_pane_t1

0xc8db,	// (0x00016167) list_form2_midp_pane_t2

0x0001,

0xfaf8,	// (0x00019384) list_form2_midp_pane_t

0xc8e9,	// (0x00016175) scroll_pane_cp51_ParamLimits

0xcaef,	// (0x0001637b) form2_midp_wait_pane_g1

0xcaf8,	// (0x00016384) form2_midp_wait_pane_g2

0xcb01,	// (0x0001638d) form2_midp_wait_pane_g3

0x0002,

0xfb0d,	// (0x00019399) form2_midp_wait_pane_g

0x7dec,	// (0x00011678) list_highlight_pane_cp21_ParamLimits

0xcb4f,	// (0x000163db) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xcb5e,	// (0x000163ea) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb970,	// (0x000151fc) list_single_2graphic_im_pane_ParamLimits

0xb970,	// (0x000151fc) list_single_2graphic_im_pane

0xdb3a,	// (0x000173c6) list_single_2graphic_im_pane_g1_ParamLimits

0xdb3a,	// (0x000173c6) list_single_2graphic_im_pane_g1

0xdb4b,	// (0x000173d7) list_single_2graphic_im_pane_g2_ParamLimits

0xdb4b,	// (0x000173d7) list_single_2graphic_im_pane_g2

0xdb57,	// (0x000173e3) list_single_2graphic_im_pane_g3_ParamLimits

0xdb57,	// (0x000173e3) list_single_2graphic_im_pane_g3

0x0003,

0xfc6e,	// (0x000194fa) list_single_2graphic_im_pane_g_ParamLimits

0xfc6e,	// (0x000194fa) list_single_2graphic_im_pane_g

0xdb77,	// (0x00017403) list_single_2graphic_im_pane_t1_ParamLimits

0xdb77,	// (0x00017403) list_single_2graphic_im_pane_t1

0xd3a3,	// (0x00016c2f) list_single_graphic_2heading_pane_fp_ParamLimits

0xd3a3,	// (0x00016c2f) list_single_graphic_2heading_pane_fp

0xd3e8,	// (0x00016c74) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd3e8,	// (0x00016c74) list_single_graphic_2heading_pane_fp_g1

0xd3b9,	// (0x00016c45) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xd3b9,	// (0x00016c45) list_single_graphic_2heading_pane_fp_g2

0x8821,	// (0x000120ad) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8821,	// (0x000120ad) list_single_graphic_2heading_pane_fp_g3

0x8bda,	// (0x00012466) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8bda,	// (0x00012466) list_single_graphic_2heading_pane_fp_g4

0xd3c5,	// (0x00016c51) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xd3c5,	// (0x00016c51) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb95,	// (0x00019421) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb95,	// (0x00019421) list_single_graphic_2heading_pane_fp_g

0xdba8,	// (0x00017434) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xdba8,	// (0x00017434) list_single_graphic_2heading_pane_fp_t1

0xd420,	// (0x00016cac) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd420,	// (0x00016cac) list_single_graphic_2heading_pane_fp_t2

0xdbbe,	// (0x0001744a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xdbbe,	// (0x0001744a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc77,	// (0x00019503) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc77,	// (0x00019503) list_single_graphic_2heading_pane_fp_t

0xcdf8,	// (0x00016684) fep_hwr_write_pane_g5_ParamLimits

0xcdf8,	// (0x00016684) fep_hwr_write_pane_g5

0xce04,	// (0x00016690) fep_hwr_write_pane_g6_ParamLimits

0xce04,	// (0x00016690) fep_hwr_write_pane_g6

0xd85f,	// (0x000170eb) eswt_shell_pane_ParamLimits

0xa36e,	// (0x00013bfa) bg_popup_window_pane_cp18_ParamLimits

0xb684,	// (0x00014f10) heading_pane_cp70

0xd989,	// (0x00017215) popup_eswt_tasktip_window_t1_ParamLimits

0x9daf,	// (0x0001363b) aid_touch_tab_arrow_left

0x9dbe,	// (0x0001364a) aid_touch_tab_arrow_right

0x7d34,	// (0x000115c0) title_pane_g3_ParamLimits

0x7d34,	// (0x000115c0) title_pane_g3

0x8a9f,	// (0x0001232b) set_value_pane_g1

0x68d9,	// (0x00010165) popup_toolbar_trans_pane_ParamLimits

0xdaee,	// (0x0001737a) aid_size_cell_tb_trans_pane_ParamLimits

0x8bb4,	// (0x00012440) bg_tb_trans_pane_ParamLimits

0xdb00,	// (0x0001738c) grid_tb_trans_pane_ParamLimits

0x808f,	// (0x0001191b) cont_note_pane_ParamLimits

0x808f,	// (0x0001191b) cont_note_pane

0x83ce,	// (0x00011c5a) cont_snote2_single_text_pane_ParamLimits

0x83ce,	// (0x00011c5a) cont_snote2_single_text_pane

0x83ce,	// (0x00011c5a) cont_snote2_single_graphic_pane_ParamLimits

0x83ce,	// (0x00011c5a) cont_snote2_single_graphic_pane

0xa9c5,	// (0x00014251) cont_note_wait_pane_ParamLimits

0xa9c5,	// (0x00014251) cont_note_wait_pane

0xa9c5,	// (0x00014251) cont_note_image_pane_ParamLimits

0xa9c5,	// (0x00014251) cont_note_image_pane

0xdbd4,	// (0x00017460) popup_note2_window_g1_ParamLimits

0xdbd4,	// (0x00017460) popup_note2_window_g1

0xdc05,	// (0x00017491) popup_note2_window_t1_ParamLimits

0xdc05,	// (0x00017491) popup_note2_window_t1

0xdc4a,	// (0x000174d6) popup_note2_window_t2_ParamLimits

0xdc4a,	// (0x000174d6) popup_note2_window_t2

0xdc8f,	// (0x0001751b) popup_note2_window_t3_ParamLimits

0xdc8f,	// (0x0001751b) popup_note2_window_t3

0xdcd4,	// (0x00017560) popup_note2_window_t4_ParamLimits

0xdcd4,	// (0x00017560) popup_note2_window_t4

0x8107,	// (0x00011993) popup_note2_window_t5_ParamLimits

0x8107,	// (0x00011993) popup_note2_window_t5

0x0004,

0xfc83,	// (0x0001950f) popup_note2_window_t_ParamLimits

0xfc83,	// (0x0001950f) popup_note2_window_t

0xdd03,	// (0x0001758f) popup_note2_image_window_g1_ParamLimits

0xdd03,	// (0x0001758f) popup_note2_image_window_g1

0xdd0f,	// (0x0001759b) popup_note2_image_window_g2_ParamLimits

0xdd0f,	// (0x0001759b) popup_note2_image_window_g2

0x0001,

0xfc8e,	// (0x0001951a) popup_note2_image_window_g_ParamLimits

0xfc8e,	// (0x0001951a) popup_note2_image_window_g

0xdd21,	// (0x000175ad) popup_note2_image_window_t1_ParamLimits

0xdd21,	// (0x000175ad) popup_note2_image_window_t1

0xdd39,	// (0x000175c5) popup_note2_image_window_t2_ParamLimits

0xdd39,	// (0x000175c5) popup_note2_image_window_t2

0xdd51,	// (0x000175dd) popup_note2_image_window_t3_ParamLimits

0xdd51,	// (0x000175dd) popup_note2_image_window_t3

0x0002,

0xfc93,	// (0x0001951f) popup_note2_image_window_t_ParamLimits

0xfc93,	// (0x0001951f) popup_note2_image_window_t

0xa9d3,	// (0x0001425f) popup_note2_wait_window_g1_ParamLimits

0xa9d3,	// (0x0001425f) popup_note2_wait_window_g1

0xdd6d,	// (0x000175f9) popup_note2_wait_window_g2_ParamLimits

0xdd6d,	// (0x000175f9) popup_note2_wait_window_g2

0xa9eb,	// (0x00014277) popup_note2_wait_window_g3_ParamLimits

0xa9eb,	// (0x00014277) popup_note2_wait_window_g3

0x0002,

0xfc9a,	// (0x00019526) popup_note2_wait_window_g_ParamLimits

0xfc9a,	// (0x00019526) popup_note2_wait_window_g

0xdd79,	// (0x00017605) popup_note2_wait_window_t1_ParamLimits

0xdd79,	// (0x00017605) popup_note2_wait_window_t1

0xdd97,	// (0x00017623) popup_note2_wait_window_t2_ParamLimits

0xdd97,	// (0x00017623) popup_note2_wait_window_t2

0xddb5,	// (0x00017641) popup_note2_wait_window_t3_ParamLimits

0xddb5,	// (0x00017641) popup_note2_wait_window_t3

0xddc7,	// (0x00017653) popup_note2_wait_window_t4_ParamLimits

0xddc7,	// (0x00017653) popup_note2_wait_window_t4

0x0003,

0xfca1,	// (0x0001952d) popup_note2_wait_window_t_ParamLimits

0xfca1,	// (0x0001952d) popup_note2_wait_window_t

0xddd9,	// (0x00017665) wait_bar2_pane_ParamLimits

0xddd9,	// (0x00017665) wait_bar2_pane

0xddf1,	// (0x0001767d) popup_snote2_single_text_window_g1_ParamLimits

0xddf1,	// (0x0001767d) popup_snote2_single_text_window_g1

0xde19,	// (0x000176a5) popup_snote2_single_text_window_t1_ParamLimits

0xde19,	// (0x000176a5) popup_snote2_single_text_window_t1

0xde65,	// (0x000176f1) popup_snote2_single_text_window_t2_ParamLimits

0xde65,	// (0x000176f1) popup_snote2_single_text_window_t2

0xdeb1,	// (0x0001773d) popup_snote2_single_text_window_t3_ParamLimits

0xdeb1,	// (0x0001773d) popup_snote2_single_text_window_t3

0xdef2,	// (0x0001777e) popup_snote2_single_text_window_t4_ParamLimits

0xdef2,	// (0x0001777e) popup_snote2_single_text_window_t4

0xdf28,	// (0x000177b4) popup_snote2_single_text_window_t5_ParamLimits

0xdf28,	// (0x000177b4) popup_snote2_single_text_window_t5

0x0004,

0xfcaa,	// (0x00019536) popup_snote2_single_text_window_t_ParamLimits

0xfcaa,	// (0x00019536) popup_snote2_single_text_window_t

0xdf53,	// (0x000177df) popup_snote2_single_graphic_window_g1_ParamLimits

0xdf53,	// (0x000177df) popup_snote2_single_graphic_window_g1

0xdf7b,	// (0x00017807) popup_snote2_single_graphic_window_g2_ParamLimits

0xdf7b,	// (0x00017807) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb5,	// (0x00019541) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb5,	// (0x00019541) popup_snote2_single_graphic_window_g

0xdfa3,	// (0x0001782f) popup_snote2_single_graphic_window_t1_ParamLimits

0xdfa3,	// (0x0001782f) popup_snote2_single_graphic_window_t1

0xdfef,	// (0x0001787b) popup_snote2_single_graphic_window_t2_ParamLimits

0xdfef,	// (0x0001787b) popup_snote2_single_graphic_window_t2

0xdeb1,	// (0x0001773d) popup_snote2_single_graphic_window_t3_ParamLimits

0xdeb1,	// (0x0001773d) popup_snote2_single_graphic_window_t3

0xdef2,	// (0x0001777e) popup_snote2_single_graphic_window_t4_ParamLimits

0xdef2,	// (0x0001777e) popup_snote2_single_graphic_window_t4

0xdf28,	// (0x000177b4) popup_snote2_single_graphic_window_t5_ParamLimits

0xdf28,	// (0x000177b4) popup_snote2_single_graphic_window_t5

0x0004,

0xfcba,	// (0x00019546) popup_snote2_single_graphic_window_t_ParamLimits

0xfcba,	// (0x00019546) popup_snote2_single_graphic_window_t

0xc7a4,	// (0x00016030) clock_nsta_pane_cp2_t1

0xc7a4,	// (0x00016030) clock_nsta_pane_cp2_t2

0x0001,

0xface,	// (0x0001935a) clock_nsta_pane_cp2_t

0x8bce,	// (0x0001245a) form_field_data_wide_pane_g1_ParamLimits

0x8821,	// (0x000120ad) form_field_data_wide_pane_g2_ParamLimits

0x8821,	// (0x000120ad) form_field_data_wide_pane_g2

0x8bda,	// (0x00012466) form_field_data_wide_pane_g3_ParamLimits

0x8bda,	// (0x00012466) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x00018f08) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x00018f08) form_field_data_wide_pane_g

0xc686,	// (0x00015f12) grid_touch_3_pane_ParamLimits

0xc686,	// (0x00015f12) grid_touch_3_pane

0xe03b,	// (0x000178c7) cell_touch_3_pane_ParamLimits

0xe03b,	// (0x000178c7) cell_touch_3_pane

0xcd6c,	// (0x000165f8) cell_touch_3_pane_g1

0xcd6c,	// (0x000165f8) cell_touch_3_pane_g2

0x0001,

0xfb53,	// (0x000193df) cell_touch_3_pane_g

0x8139,	// (0x000119c5) cont_query_data_pane

0x8141,	// (0x000119cd) cont_query_data_pane_cp1

0xe06c,	// (0x000178f8) button_value_adjust_pane_cp7

0xe074,	// (0x00017900) query_popup_pane_cp3

0x9452,	// (0x00012cde) bg_popup_sub_pane_cp22_ParamLimits

0x603e,	// (0x0000f8ca) navi_navi_volume_pane_cp2

0x6056,	// (0x0000f8e2) popup_side_volume_key_window_g2

0x6062,	// (0x0000f8ee) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x00018f9e) popup_side_volume_key_window_g

0x607c,	// (0x0000f908) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x00018fa5) popup_side_volume_key_window_t

0x9799,	// (0x00013025) popup_side_volume_key_window_ParamLimits

0x87e1,	// (0x0001206d) list_double_graphic_pane_g4_ParamLimits

0x87e1,	// (0x0001206d) list_double_graphic_pane_g4

0xb9b5,	// (0x00015241) list_single_2heading_msg_pane_ParamLimits

0xb9b5,	// (0x00015241) list_single_2heading_msg_pane

0xe0a3,	// (0x0001792f) list_single_2heading_msg_pane_g1_ParamLimits

0xe0a3,	// (0x0001792f) list_single_2heading_msg_pane_g1

0x8610,	// (0x00011e9c) list_single_2heading_msg_pane_g2_ParamLimits

0x8610,	// (0x00011e9c) list_single_2heading_msg_pane_g2

0xc257,	// (0x00015ae3) list_single_2heading_msg_pane_g3_ParamLimits

0xc257,	// (0x00015ae3) list_single_2heading_msg_pane_g3

0xe0af,	// (0x0001793b) list_single_2heading_msg_pane_g4_ParamLimits

0xe0af,	// (0x0001793b) list_single_2heading_msg_pane_g4

0x0003,

0xfcc5,	// (0x00019551) list_single_2heading_msg_pane_g_ParamLimits

0xfcc5,	// (0x00019551) list_single_2heading_msg_pane_g

0xe0c7,	// (0x00017953) list_single_2heading_msg_pane_t1_ParamLimits

0xe0c7,	// (0x00017953) list_single_2heading_msg_pane_t1

0xe0ef,	// (0x0001797b) list_single_2heading_msg_pane_t2_ParamLimits

0xe0ef,	// (0x0001797b) list_single_2heading_msg_pane_t2

0xe123,	// (0x000179af) list_single_2heading_msg_pane_t3_ParamLimits

0xe123,	// (0x000179af) list_single_2heading_msg_pane_t3

0xe15c,	// (0x000179e8) list_single_2heading_msg_pane_t4_ParamLimits

0xe15c,	// (0x000179e8) list_single_2heading_msg_pane_t4

0x0003,

0xfcce,	// (0x0001955a) list_single_2heading_msg_pane_t_ParamLimits

0xfcce,	// (0x0001955a) list_single_2heading_msg_pane_t

0x7d40,	// (0x000115cc) title_pane_g4_ParamLimits

0x7d40,	// (0x000115cc) title_pane_g4

0x5e4c,	// (0x0000f6d8) title_pane_stacon_g3_ParamLimits

0x5e4c,	// (0x0000f6d8) title_pane_stacon_g3

0xdb6b,	// (0x000173f7) list_single_2graphic_im_pane_g4_ParamLimits

0xdb6b,	// (0x000173f7) list_single_2graphic_im_pane_g4

0xb42c,	// (0x00014cb8) popup_side_volume_key_window_cp

0xbd1f,	// (0x000155ab) main_idle_act2_pane_t1

0x6a35,	// (0x000102c1) toolbar_button_pane_g10

0x85c6,	// (0x00011e52) popup_toolbar_window_cp1

0xc795,	// (0x00016021) clock_nsta_pane_cp_t1

0xc795,	// (0x00016021) clock_nsta_pane_cp_t2

0x0001,

0xfac9,	// (0x00019355) clock_nsta_pane_cp_t

0x603e,	// (0x0000f8ca) navi_navi_volume_pane_cp2_ParamLimits

0x604a,	// (0x0000f8d6) popup_side_volume_key_window_g1_ParamLimits

0x6056,	// (0x0000f8e2) popup_side_volume_key_window_g2_ParamLimits

0x6062,	// (0x0000f8ee) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x00018f9e) popup_side_volume_key_window_g_ParamLimits

0x6eb9,	// (0x00010745) fep_hwr_aid_pane

0x6f60,	// (0x000107ec) bg_fep_hwr_top_pane_g4_ParamLimits

0xcdc8,	// (0x00016654) fep_hwr_top_pane_g1_ParamLimits

0xcdda,	// (0x00016666) fep_hwr_top_pane_g2_ParamLimits

0x6f80,	// (0x0001080c) fep_hwr_top_pane_g3_ParamLimits

0xfb1e,	// (0x000193aa) fep_hwr_top_pane_g_ParamLimits

0x6f95,	// (0x00010821) fep_hwr_top_text_pane_ParamLimits

0xb1f8,	// (0x00014a84) aid_touch_tab_arrow_arrow_2

0xb1ef,	// (0x00014a7b) aid_touch_tab_arrow_left_2

0x6ecd,	// (0x00010759) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6f04,	// (0x00010790) fep_hwr_prediction_pane

0xcf31,	// (0x000167bd) fep_vkb_prediction_pane

0xd02e,	// (0x000168ba) fep_vkb_side_pane_g3_ParamLimits

0xd02e,	// (0x000168ba) fep_vkb_side_pane_g3

0x7110,	// (0x0001099c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x717c,	// (0x00010a08) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7189,	// (0x00010a15) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcd,	// (0x00019459) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x72b8,	// (0x00010b44) fep_hwr_prediction_pane_g1

0x72c2,	// (0x00010b4e) fep_hwr_prediction_pane_g2

0x72ca,	// (0x00010b56) fep_hwr_prediction_pane_g3

0x72d2,	// (0x00010b5e) fep_hwr_prediction_pane_g4

0x0003,

0xfcd7,	// (0x00019563) fep_hwr_prediction_pane_g

0xe181,	// (0x00017a0d) fep_vkb_prediction_pane_g1

0xe18b,	// (0x00017a17) fep_vkb_prediction_pane_g2

0xe193,	// (0x00017a1f) fep_vkb_prediction_pane_g3

0xe19b,	// (0x00017a27) fep_vkb_prediction_pane_g4

0x0003,

0xfce0,	// (0x0001956c) fep_vkb_prediction_pane_g

0x6d15,	// (0x000105a1) slider_set_pane_g3

0x6d29,	// (0x000105b5) slider_set_pane_g4

0x6d41,	// (0x000105cd) slider_set_pane_g5

0x6d15,	// (0x000105a1) slider_set_pane_g6

0x6d57,	// (0x000105e3) slider_set_pane_g7

0xb8a9,	// (0x00015135) slider_form_pane_g3

0xb8b2,	// (0x0001513e) slider_form_pane_g4

0xb8ba,	// (0x00015146) slider_form_pane_g5

0xb8a9,	// (0x00015135) slider_form_pane_g6

0xb8c2,	// (0x0001514e) slider_form_pane_g7

0xc063,	// (0x000158ef) slider_set_pane_vc_g3

0xc06c,	// (0x000158f8) slider_set_pane_vc_g4

0xc075,	// (0x00015901) slider_set_pane_vc_g5

0xc063,	// (0x000158ef) slider_set_pane_vc_g6

0xc07e,	// (0x0001590a) slider_set_pane_vc_g7

0xc45b,	// (0x00015ce7) slider_form_pane_vc_g1

0xc464,	// (0x00015cf0) slider_form_pane_vc_g2

0xc46d,	// (0x00015cf9) slider_form_pane_vc_g3

0xc45b,	// (0x00015ce7) slider_form_pane_vc_g4

0xc476,	// (0x00015d02) slider_form_pane_vc_g5

0x0004,

0xfa9b,	// (0x00019327) slider_form_pane_vc_g

0x5b2a,	// (0x0000f3b6) main_idle_act3_pane

0xe1a3,	// (0x00017a2f) ai3_links_pane

0xe1ac,	// (0x00017a38) popup_ai3_data_window_ParamLimits

0xe1ac,	// (0x00017a38) popup_ai3_data_window

0x7cf8,	// (0x00011584) grid_ai3_links_pane

0xe1c4,	// (0x00017a50) cell_ai3_links_pane_ParamLimits

0xe1c4,	// (0x00017a50) cell_ai3_links_pane

0xe1dc,	// (0x00017a68) bg_popup_sub_pane_cp11

0xe1e9,	// (0x00017a75) cell_ai3_links_pane_g1

0x7cf8,	// (0x00011584) bg_popup_sub_pane_cp12

0xe20e,	// (0x00017a9a) heading_ai3_data_pane

0xe216,	// (0x00017aa2) list_ai3_gene_pane

0xe222,	// (0x00017aae) popup_ai3_data_window_g1

0xe22a,	// (0x00017ab6) heading_ai3_data_pane_g1

0xe232,	// (0x00017abe) heading_ai3_data_pane_t1

0xe240,	// (0x00017acc) list_double_ai3_gene_pane_ParamLimits

0xe240,	// (0x00017acc) list_double_ai3_gene_pane

0xe24d,	// (0x00017ad9) list_single_ai3_gene_pane_ParamLimits

0xe24d,	// (0x00017ad9) list_single_ai3_gene_pane

0xcd31,	// (0x000165bd) list_highlight_pane_cp7_ParamLimits

0xcd31,	// (0x000165bd) list_highlight_pane_cp7

0xe25a,	// (0x00017ae6) list_single_a13_gene_pane_t1_ParamLimits

0xe25a,	// (0x00017ae6) list_single_a13_gene_pane_t1

0xe271,	// (0x00017afd) list_single_ai3_gene_pane_g1

0xe27a,	// (0x00017b06) list_single_ai3_gene_pane_g2

0x0001,

0xfce9,	// (0x00019575) list_single_ai3_gene_pane_g

0xe282,	// (0x00017b0e) list_double_ai3_gene_pane_g1_ParamLimits

0xe282,	// (0x00017b0e) list_double_ai3_gene_pane_g1

0xe28e,	// (0x00017b1a) list_double_ai3_gene_pane_t1_ParamLimits

0xe28e,	// (0x00017b1a) list_double_ai3_gene_pane_t1

0xe2aa,	// (0x00017b36) list_double_ai3_gene_pane_t2_ParamLimits

0xe2aa,	// (0x00017b36) list_double_ai3_gene_pane_t2

0xe2bf,	// (0x00017b4b) list_double_ai3_gene_pane_t3_ParamLimits

0xe2bf,	// (0x00017b4b) list_double_ai3_gene_pane_t3

0x0002,

0xfcee,	// (0x0001957a) list_double_ai3_gene_pane_t_ParamLimits

0xfcee,	// (0x0001957a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe085,	// (0x00017911) aid_size_min_col_2

0xe08f,	// (0x0001791b) aid_size_min_msg_ParamLimits

0xe08f,	// (0x0001791b) aid_size_min_msg

0xd12e,	// (0x000169ba) fep_vkb_top_text_pane_g2_ParamLimits

0xd12e,	// (0x000169ba) fep_vkb_top_text_pane_g2

0x0001,

0xfb4e,	// (0x000193da) fep_vkb_top_text_pane_g_ParamLimits

0xfb4e,	// (0x000193da) fep_vkb_top_text_pane_g

0x5b2a,	// (0x0000f3b6) main_hc_apps_shell_pane

0xe2dc,	// (0x00017b68) grid_hc_apps_pane_ParamLimits

0xe2dc,	// (0x00017b68) grid_hc_apps_pane

0xe2eb,	// (0x00017b77) list_hc_apps_pane

0xe2f3,	// (0x00017b7f) scroll_pane_cp37_ParamLimits

0xe2f3,	// (0x00017b7f) scroll_pane_cp37

0xe2ff,	// (0x00017b8b) cell_hc_apps_pane_ParamLimits

0xe2ff,	// (0x00017b8b) cell_hc_apps_pane

0xe3ad,	// (0x00017c39) cell_hc_apps_pane_g1_ParamLimits

0xe3ad,	// (0x00017c39) cell_hc_apps_pane_g1

0xe3de,	// (0x00017c6a) cell_hc_apps_pane_g2_ParamLimits

0xe3de,	// (0x00017c6a) cell_hc_apps_pane_g2

0xe3fa,	// (0x00017c86) cell_hc_apps_pane_g3_ParamLimits

0xe3fa,	// (0x00017c86) cell_hc_apps_pane_g3

0x0002,

0xfcf5,	// (0x00019581) cell_hc_apps_pane_g_ParamLimits

0xfcf5,	// (0x00019581) cell_hc_apps_pane_g

0xe41c,	// (0x00017ca8) cell_hc_apps_pane_t1_ParamLimits

0xe41c,	// (0x00017ca8) cell_hc_apps_pane_t1

0x808f,	// (0x0001191b) grid_highlight_pane_cp10_ParamLimits

0x808f,	// (0x0001191b) grid_highlight_pane_cp10

0xe45c,	// (0x00017ce8) list_single_hc_apps_pane_ParamLimits

0xe45c,	// (0x00017ce8) list_single_hc_apps_pane

0xe4c4,	// (0x00017d50) list_single_hc_apps_pane_g1

0xe4dd,	// (0x00017d69) list_single_hc_apps_pane_g2

0x0001,

0xfcfc,	// (0x00019588) list_single_hc_apps_pane_g

0xe4f6,	// (0x00017d82) list_single_hc_apps_pane_g2_copy1

0xe512,	// (0x00017d9e) list_single_hc_apps_pane_t1

0x7dec,	// (0x00011678) bg_set_opt_pane_cp_ParamLimits

0x5d73,	// (0x0000f5ff) setting_slider_pane_t1_ParamLimits

0x5d8c,	// (0x0000f618) setting_slider_pane_t2_ParamLimits

0x5da6,	// (0x0000f632) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00018df0) setting_slider_pane_t_ParamLimits

0x5dbe,	// (0x0000f64a) slider_set_pane_ParamLimits

0x62de,	// (0x0000fb6a) control_pane_g5_ParamLimits

0x62de,	// (0x0000fb6a) control_pane_g5

0xb702,	// (0x00014f8e) slider_set_pane_g1_ParamLimits

0x6d09,	// (0x00010595) slider_set_pane_g2_ParamLimits

0x6d15,	// (0x000105a1) slider_set_pane_g3_ParamLimits

0x6d29,	// (0x000105b5) slider_set_pane_g4_ParamLimits

0x6d41,	// (0x000105cd) slider_set_pane_g5_ParamLimits

0x6d15,	// (0x000105a1) slider_set_pane_g6_ParamLimits

0x6d57,	// (0x000105e3) slider_set_pane_g7_ParamLimits

0xf960,	// (0x000191ec) slider_set_pane_g_ParamLimits

0x9878,	// (0x00013104) navi_icon_text_pane_ParamLimits

0x9d70,	// (0x000135fc) aid_fill_nsta_2_ParamLimits

0x9daf,	// (0x0001363b) aid_touch_tab_arrow_left_ParamLimits

0x9dbe,	// (0x0001364a) aid_touch_tab_arrow_right_ParamLimits

0x9e2b,	// (0x000136b7) clock_nsta_pane_ParamLimits

0xb1d1,	// (0x00014a5d) navi_icon_pane_g1_ParamLimits

0xb1dd,	// (0x00014a69) navi_text_pane_t1_ParamLimits

0xc8a7,	// (0x00016133) navi_icon_text_pane_g1_ParamLimits

0xc8b3,	// (0x0001613f) navi_icon_text_pane_t1_ParamLimits

0xe4c4,	// (0x00017d50) list_single_hc_apps_pane_g1_ParamLimits

0xe4dd,	// (0x00017d69) list_single_hc_apps_pane_g2_ParamLimits

0xfcfc,	// (0x00019588) list_single_hc_apps_pane_g_ParamLimits

0xe4f6,	// (0x00017d82) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xe512,	// (0x00017d9e) list_single_hc_apps_pane_t1_ParamLimits

0x5c87,	// (0x0000f513) popup_toolbar2_fixed_window_ParamLimits

0x5c87,	// (0x0000f513) popup_toolbar2_fixed_window

0x68cf,	// (0x0001015b) popup_toolbar2_float_window

0x7cf8,	// (0x00011584) bg_popup_sub_pane_cp27

0xe540,	// (0x00017dcc) grid_toolbar2_float_pane

0x7cf8,	// (0x00011584) bg_popup_sub_pane_cp26

0xe540,	// (0x00017dcc) grid_toolbar2_fixed_pane

0xe548,	// (0x00017dd4) cell_toolbar2_fixed_pane_ParamLimits

0xe548,	// (0x00017dd4) cell_toolbar2_fixed_pane

0xe559,	// (0x00017de5) cell_toolbar2_fixed_pane_g1

0x67a5,	// (0x00010031) toolbar2_fixed_button_pane

0xa252,	// (0x00013ade) toolbar2_fixed_button_pane_g1

0xa262,	// (0x00013aee) toolbar2_fixed_button_pane_g2

0xa25a,	// (0x00013ae6) toolbar2_fixed_button_pane_g3

0xa272,	// (0x00013afe) toolbar2_fixed_button_pane_g4

0xa26a,	// (0x00013af6) toolbar2_fixed_button_pane_g5

0xa27a,	// (0x00013b06) toolbar2_fixed_button_pane_g6

0xa282,	// (0x00013b0e) toolbar2_fixed_button_pane_g7

0xa292,	// (0x00013b1e) toolbar2_fixed_button_pane_g8

0xa28a,	// (0x00013b16) toolbar2_fixed_button_pane_g9

0x0008,

0xf862,	// (0x000190ee) toolbar2_fixed_button_pane_g

0xe562,	// (0x00017dee) cell_toolbar2_float_pane_ParamLimits

0xe562,	// (0x00017dee) cell_toolbar2_float_pane

0xe576,	// (0x00017e02) cell_toolbar2_float_pane_g1

0x67a5,	// (0x00010031) toolbar2_fixed_button_pane_cp

0xce98,	// (0x00016724) fep_vkb_accented_list_pane_ParamLimits

0xce98,	// (0x00016724) fep_vkb_accented_list_pane

0x70f0,	// (0x0001097c) bg_popup_fep_shadow_pane_g9

0x99ec,	// (0x00013278) bg_popup_fep_shadow_pane_cp3

0x8e69,	// (0x000126f5) list_accented_list_pane

0xe57f,	// (0x00017e0b) list_single_accented_list_pane_ParamLimits

0xe57f,	// (0x00017e0b) list_single_accented_list_pane

0x99ec,	// (0x00013278) list_highlight_pane_cp10

0xe590,	// (0x00017e1c) list_single_accented_list_pane_t1

0x681f,	// (0x000100ab) popup_slider_window_ParamLimits

0x681f,	// (0x000100ab) popup_slider_window

0xe07c,	// (0x00017908) aid_indentation_list_msg

0xe64a,	// (0x00017ed6) bg_popup_window_pane_cp19

0xe6b4,	// (0x00017f40) popup_slider_window_g1

0xe6d0,	// (0x00017f5c) popup_slider_window_g2

0xe6ec,	// (0x00017f78) popup_slider_window_g3

0x0005,

0xfd01,	// (0x0001958d) popup_slider_window_g

0xe748,	// (0x00017fd4) popup_slider_window_t1

0xe7bc,	// (0x00018048) small_volume_slider_vertical_pane

0xcd6c,	// (0x000165f8) small_volume_slider_vertical_pane_g1

0xcd6c,	// (0x000165f8) small_volume_slider_vertical_pane_g2

0xe7d8,	// (0x00018064) small_volume_slider_vertical_pane_g3

0x0002,

0xfd13,	// (0x0001959f) small_volume_slider_vertical_pane_g

0x5a4d,	// (0x0000f2d9) area_side_right_pane_ParamLimits

0x5a4d,	// (0x0000f2d9) area_side_right_pane

0x72da,	// (0x00010b66) aid_size_side_button_ParamLimits

0x72da,	// (0x00010b66) aid_size_side_button

0x72ee,	// (0x00010b7a) grid_sctrl_middle_pane_ParamLimits

0x72ee,	// (0x00010b7a) grid_sctrl_middle_pane

0x730d,	// (0x00010b99) sctrl_sk_bottom_pane

0x731e,	// (0x00010baa) sctrl_sk_top_pane

0x7330,	// (0x00010bbc) aid_touch_sctrl_top

0x733d,	// (0x00010bc9) bg_sctrl_sk_pane_ParamLimits

0x733d,	// (0x00010bc9) bg_sctrl_sk_pane

0x734b,	// (0x00010bd7) sctrl_sk_top_pane_g1

0x7358,	// (0x00010be4) sctrl_sk_top_pane_t1

0x7330,	// (0x00010bbc) aid_touch_sctrl_bottom

0x733d,	// (0x00010bc9) bg_sctrl_sk_pane_cp_ParamLimits

0x733d,	// (0x00010bc9) bg_sctrl_sk_pane_cp

0x7373,	// (0x00010bff) sctrl_sk_bottom_pane_g1

0x7358,	// (0x00010be4) sctrl_sk_bottom_pane_t1

0x737c,	// (0x00010c08) cell_sctrl_middle_pane_ParamLimits

0x737c,	// (0x00010c08) cell_sctrl_middle_pane

0x7397,	// (0x00010c23) aid_touch_sctrl_middle_ParamLimits

0x7397,	// (0x00010c23) aid_touch_sctrl_middle

0x73a9,	// (0x00010c35) bg_sctrl_middle_pane_ParamLimits

0x73a9,	// (0x00010c35) bg_sctrl_middle_pane

0x7110,	// (0x0001099c) cell_sctrl_middle_pane_g1_ParamLimits

0x7110,	// (0x0001099c) cell_sctrl_middle_pane_g1

0x73b7,	// (0x00010c43) cell_sctrl_middle_pane_g2_ParamLimits

0x73b7,	// (0x00010c43) cell_sctrl_middle_pane_g2

0x0001,

0xfd1f,	// (0x000195ab) cell_sctrl_middle_pane_g_ParamLimits

0xfd1f,	// (0x000195ab) cell_sctrl_middle_pane_g

0xa252,	// (0x00013ade) bg_sctrl_middle_pane_g1

0xa25a,	// (0x00013ae6) bg_sctrl_middle_pane_g2

0xa262,	// (0x00013aee) bg_sctrl_middle_pane_g3

0xa26a,	// (0x00013af6) bg_sctrl_middle_pane_g4

0xa272,	// (0x00013afe) bg_sctrl_middle_pane_g5

0xa27a,	// (0x00013b06) bg_sctrl_middle_pane_g6

0xa282,	// (0x00013b0e) bg_sctrl_middle_pane_g7

0xa28a,	// (0x00013b16) bg_sctrl_middle_pane_g8

0x0007,

0xfd24,	// (0x000195b0) bg_sctrl_middle_pane_g

0xa292,	// (0x00013b1e) bg_sctrl_middle_pane_g8_copy1

0xa252,	// (0x00013ade) bg_sctrl_sk_pane_g1

0xa262,	// (0x00013aee) bg_sctrl_sk_pane_g2

0xa25a,	// (0x00013ae6) bg_sctrl_sk_pane_g3

0x0008,

0xf862,	// (0x000190ee) bg_sctrl_sk_pane_g

0x858c,	// (0x00011e18) aid_size_touch_scroll_bar

0xa272,	// (0x00013afe) bg_sctrl_sk_pane_g4

0xa26a,	// (0x00013af6) bg_sctrl_sk_pane_g5

0xa27a,	// (0x00013b06) bg_sctrl_sk_pane_g6

0xa282,	// (0x00013b0e) bg_sctrl_sk_pane_g7

0xa292,	// (0x00013b1e) bg_sctrl_sk_pane_g8

0xa28a,	// (0x00013b16) bg_sctrl_sk_pane_g9

0x6490,	// (0x0000fd1c) popup_fep_china_hwr2_fs_candidate_window

0x649a,	// (0x0000fd26) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x649a,	// (0x0000fd26) popup_fep_china_hwr2_fs_control_window

0x7110,	// (0x0001099c) sctrl_sk_top_pane_g2

0x0001,

0xfd1a,	// (0x000195a6) sctrl_sk_top_pane_g

0xe7e1,	// (0x0001806d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe7e1,	// (0x0001806d) aid_fep_china_hwr2_fs_cell

0xe7f3,	// (0x0001807f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe7f3,	// (0x0001807f) bg_popup_fep_shadow_pane_cp4

0xe80a,	// (0x00018096) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe80a,	// (0x00018096) bg_popup_fep_shadow_pane_cp5

0xe81c,	// (0x000180a8) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe81c,	// (0x000180a8) popup_fep_china_hwr2_fs_control_bar_grid

0xe82c,	// (0x000180b8) popup_fep_china_hwr2_fs_control_funtion_grid

0xe834,	// (0x000180c0) aid_fep_china_hwr2_fs_candi_cell

0x7cf8,	// (0x00011584) bg_popup_fep_shadow_pane_cp6

0xe83e,	// (0x000180ca) popup_fep_china_hwr2_fs_candidate_grid

0xe848,	// (0x000180d4) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe848,	// (0x000180d4) cell_fep_china_hwr2_fs_funtion_grid

0xcd6c,	// (0x000165f8) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xe860,	// (0x000180ec) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xe860,	// (0x000180ec) cell_fep_china_hwr2_fs_funtion_grid_g1

0xe86e,	// (0x000180fa) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xe86e,	// (0x000180fa) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd35,	// (0x000195c1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd35,	// (0x000195c1) cell_fep_china_hwr2_fs_funtion_grid_g

0xe884,	// (0x00018110) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe884,	// (0x00018110) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe899,	// (0x00018125) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe899,	// (0x00018125) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3a,	// (0x000195c6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3a,	// (0x000195c6) cell_fep_china_hwr2_fs_funtion_grid_t

0xe8b5,	// (0x00018141) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xe8bd,	// (0x00018149) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xe8c5,	// (0x00018151) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3f,	// (0x000195cb) popup_fep_china_hwr2_fs_control_bar_grid_g

0xe8cd,	// (0x00018159) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xe8cd,	// (0x00018159) cell_fep_china_hwr2_fs_candidate_grid

0xe8e6,	// (0x00018172) popup_fep_china_hwr2_fs_candidate_grid_g20

0xe8ee,	// (0x0001817a) popup_fep_china_hwr2_fs_candidate_grid_g21

0xcd6c,	// (0x000165f8) cell_fep_china_hwr2_fs_candidate_grid_g1

0xcd6c,	// (0x000165f8) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb53,	// (0x000193df) cell_fep_china_hwr2_fs_candidate_grid_g

0xe8f6,	// (0x00018182) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9e38,	// (0x000136c4) clock_nsta_pane_cp_24_ParamLimits

0x9e38,	// (0x000136c4) clock_nsta_pane_cp_24

0x9eb6,	// (0x00013742) indicator_nsta_pane_cp_24_ParamLimits

0x9eb6,	// (0x00013742) indicator_nsta_pane_cp_24

0xb04d,	// (0x000148d9) heading_pane_g1

0x0001,

0xf8c7,	// (0x00019153) heading_pane_g

0xbb68,	// (0x000153f4) grid_sct_catagory_button_pane

0xbb98,	// (0x00015424) scroll_pane_cp5_ParamLimits

0xc8f5,	// (0x00016181) button_value_adjust_pane_cp5_ParamLimits

0xc8f5,	// (0x00016181) button_value_adjust_pane_cp5

0xc9ef,	// (0x0001627b) form2_midp_time_pane_ParamLimits

0xe904,	// (0x00018190) cell_sct_catagory_button_pane_ParamLimits

0xe904,	// (0x00018190) cell_sct_catagory_button_pane

0xcd31,	// (0x000165bd) bg_button_pane_cp01_ParamLimits

0xcd31,	// (0x000165bd) bg_button_pane_cp01

0xcd6c,	// (0x000165f8) cell_sct_catagory_button_pane_g1

0x685e,	// (0x000100ea) popup_tb_extension_window

0xe916,	// (0x000181a2) aid_size_cell_ext_ParamLimits

0xe916,	// (0x000181a2) aid_size_cell_ext

0x808f,	// (0x0001191b) bg_tb_trans_pane_cp1_ParamLimits

0x808f,	// (0x0001191b) bg_tb_trans_pane_cp1

0xe936,	// (0x000181c2) grid_tb_ext_pane_ParamLimits

0xe936,	// (0x000181c2) grid_tb_ext_pane

0xe968,	// (0x000181f4) cell_tb_ext_pane_ParamLimits

0xe968,	// (0x000181f4) cell_tb_ext_pane

0xe97f,	// (0x0001820b) cell_tb_ext_pane_g1_ParamLimits

0xe97f,	// (0x0001820b) cell_tb_ext_pane_g1

0xe99c,	// (0x00018228) cell_tb_ext_pane_t1

0x808f,	// (0x0001191b) list_highlight_pane_cp11_ParamLimits

0x808f,	// (0x0001191b) list_highlight_pane_cp11

0x5ca6,	// (0x0000f532) popup_uni_indicator_window_ParamLimits

0x5ca6,	// (0x0000f532) popup_uni_indicator_window

0x8bb4,	// (0x00012440) bg_popup_sub_pane_cp14

0xe9b7,	// (0x00018243) list_uniindi_pane

0xe9c3,	// (0x0001824f) uniindi_top_pane

0x808f,	// (0x0001191b) bg_uniindi_top_pane

0xe9e2,	// (0x0001826e) uniindi_top_pane_g1

0xe9f8,	// (0x00018284) uniindi_top_pane_g2

0x0003,

0xfd46,	// (0x000195d2) uniindi_top_pane_g

0xea22,	// (0x000182ae) uniindi_top_pane_t1

0xea4c,	// (0x000182d8) list_single_uniindi_pane_ParamLimits

0xea4c,	// (0x000182d8) list_single_uniindi_pane

0xcd6c,	// (0x000165f8) bg_uniindi_top_pane_g1

0xea5f,	// (0x000182eb) list_single_uniindi_pane_g1

0xea72,	// (0x000182fe) list_single_uniindi_pane_t1

0x5b2a,	// (0x0000f3b6) control_bg_pane

0xea97,	// (0x00018323) bg_sctrl_sk_pane_cp1

0xeaa0,	// (0x0001832c) bg_sctrl_sk_pane_cp2

0xeaa9,	// (0x00018335) control_bg_pane_g1

0xeab2,	// (0x0001833e) control_bg_pane_g2

0x0001,

0xfd4f,	// (0x000195db) control_bg_pane_g

0xc730,	// (0x00015fbc) cell_indicator_nsta_pane_g1_ParamLimits

0xc73e,	// (0x00015fca) cell_indicator_nsta_pane_g2_ParamLimits

0xfab7,	// (0x00019343) cell_indicator_nsta_pane_g_ParamLimits

0xca73,	// (0x000162ff) form2_midp_time_pane_t1_ParamLimits

0x63fa,	// (0x0000fc86) main_idle_act4_pane_ParamLimits

0x63fa,	// (0x0000fc86) main_idle_act4_pane

0x685e,	// (0x000100ea) popup_tb_extension_window_ParamLimits

0xe958,	// (0x000181e4) tb_ext_find_pane_ParamLimits

0xe958,	// (0x000181e4) tb_ext_find_pane

0xeabb,	// (0x00018347) ai_gene_pane_1_cp1

0x9b29,	// (0x000133b5) ai_gene_pane_2_cp1

0xeac3,	// (0x0001834f) list_single_idle_plugin_calendar_pane

0xeacc,	// (0x00018358) list_single_idle_plugin_notification_pane

0xead5,	// (0x00018361) list_single_idle_plugin_player_pane

0xeade,	// (0x0001836a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeade,	// (0x0001836a) list_single_idle_plugin_shortcut_pane

0xeb00,	// (0x0001838c) main_idle_act4_pane_t1

0xeb12,	// (0x0001839e) main_idle_act4_pane_t2

0x0001,

0xfd54,	// (0x000195e0) main_idle_act4_pane_t

0xeb24,	// (0x000183b0) middle_sk_idle_act4_pane_ParamLimits

0xeb24,	// (0x000183b0) middle_sk_idle_act4_pane

0xeb3a,	// (0x000183c6) popup_clock_digital_analogue_window_cp2

0xeb54,	// (0x000183e0) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb54,	// (0x000183e0) shortcut_wheel_idle_act4_pane

0xcd6c,	// (0x000165f8) shortcut_wheel_idle_act4_pane_g1

0xcd6c,	// (0x000165f8) shortcut_wheel_idle_act4_pane_g2

0xcd6c,	// (0x000165f8) shortcut_wheel_idle_act4_pane_g3

0xcd6c,	// (0x000165f8) shortcut_wheel_idle_act4_pane_g4

0xcd6c,	// (0x000165f8) shortcut_wheel_idle_act4_pane_g5

0xeb68,	// (0x000183f4) shortcut_wheel_idle_act4_pane_g6

0xeb70,	// (0x000183fc) shortcut_wheel_idle_act4_pane_g7

0xeb78,	// (0x00018404) shortcut_wheel_idle_act4_pane_g8

0xeb80,	// (0x0001840c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd59,	// (0x000195e5) shortcut_wheel_idle_act4_pane_g

0xcfda,	// (0x00016866) middle_sk_idle_act4_pane_g1_ParamLimits

0xcfda,	// (0x00016866) middle_sk_idle_act4_pane_g1

0xebe4,	// (0x00018470) middle_sk_idle_act4_pane_g2_ParamLimits

0xebe4,	// (0x00018470) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7c,	// (0x00019608) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7c,	// (0x00019608) middle_sk_idle_act4_pane_g

0xebf0,	// (0x0001847c) middle_sk_idle_act4_pane_t1_ParamLimits

0xebf0,	// (0x0001847c) middle_sk_idle_act4_pane_t1

0xec0d,	// (0x00018499) grid_ai_shortcut_pane_ParamLimits

0xec0d,	// (0x00018499) grid_ai_shortcut_pane

0xec26,	// (0x000184b2) list_highlight_pane_cp16_ParamLimits

0xec26,	// (0x000184b2) list_highlight_pane_cp16

0xec33,	// (0x000184bf) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec33,	// (0x000184bf) list_single_idle_plugin_shortcut_pane_g1

0xec3f,	// (0x000184cb) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec3f,	// (0x000184cb) list_single_idle_plugin_shortcut_pane_g2

0xec57,	// (0x000184e3) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec57,	// (0x000184e3) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd81,	// (0x0001960d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd81,	// (0x0001960d) list_single_idle_plugin_shortcut_pane_g

0xec6a,	// (0x000184f6) cell_ai_shortcut_pane_ParamLimits

0xec6a,	// (0x000184f6) cell_ai_shortcut_pane

0xec8b,	// (0x00018517) cell_ai_shortcut_pane_g1_ParamLimits

0xec8b,	// (0x00018517) cell_ai_shortcut_pane_g1

0xeabb,	// (0x00018347) ai_gene_pane_1_cp2

0xecad,	// (0x00018539) ai_gene_pane_2_cp2

0xecb5,	// (0x00018541) list_highlight_pane_cp15

0xecbe,	// (0x0001854a) list_single_idle_plugin_calendar_pane_g1

0xecb5,	// (0x00018541) list_highlight_pane_cp17

0xecc6,	// (0x00018552) list_single_idle_plugin_calendar_pane_g1_copy1

0xecce,	// (0x0001855a) list_single_idle_plugin_player_pane_g1

0xbe01,	// (0x0001568d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd88,	// (0x00019614) list_single_idle_plugin_player_pane_g

0xecd6,	// (0x00018562) list_single_idle_plugin_player_pane_t1

0xece4,	// (0x00018570) list_single_idle_plugin_player_pane_t2

0xecf2,	// (0x0001857e) list_single_idle_plugin_player_pane_t3

0xed00,	// (0x0001858c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8d,	// (0x00019619) list_single_idle_plugin_player_pane_t

0xed0e,	// (0x0001859a) wait_bar_pane_cp15

0xed16,	// (0x000185a2) grid_ai_notification_pane

0xbe01,	// (0x0001568d) list_single_idle_plugin_notification_pane_g1

0xed1f,	// (0x000185ab) cell_ai_notification_pane_ParamLimits

0xed1f,	// (0x000185ab) cell_ai_notification_pane

0xed2c,	// (0x000185b8) cell_ai_notification_pane_g1

0xed34,	// (0x000185c0) cell_ai_notification_pane_t1

0xed42,	// (0x000185ce) tb_ext_find_button_pane

0xed4a,	// (0x000185d6) tb_ext_find_pane_g1

0xed52,	// (0x000185de) tb_ext_find_pane_t1

0x9366,	// (0x00012bf2) tb_ext_find_button_pane_g1

0xed60,	// (0x000185ec) tb_ext_find_button_pane_g2

0x0001,

0xfd96,	// (0x00019622) tb_ext_find_button_pane_g

0xeb00,	// (0x0001838c) main_idle_act4_pane_t1_ParamLimits

0xeb12,	// (0x0001839e) main_idle_act4_pane_t2_ParamLimits

0xfd54,	// (0x000195e0) main_idle_act4_pane_t_ParamLimits

0xeb3a,	// (0x000183c6) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb48,	// (0x000183d4) sat_plugin_idle_act4_pane_ParamLimits

0xeb48,	// (0x000183d4) sat_plugin_idle_act4_pane

0xed69,	// (0x000185f5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xed69,	// (0x000185f5) sat_plugin_idle_act4_pane_t1

0xed7c,	// (0x00018608) sat_plugin_idle_act4_pane_t2_ParamLimits

0xed7c,	// (0x00018608) sat_plugin_idle_act4_pane_t2

0xed8f,	// (0x0001861b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xed8f,	// (0x0001861b) sat_plugin_idle_act4_pane_t3

0xeda2,	// (0x0001862e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeda2,	// (0x0001862e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9b,	// (0x00019627) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9b,	// (0x00019627) sat_plugin_idle_act4_pane_t

0x5bef,	// (0x0000f47b) popup_battery_window_ParamLimits

0x5bef,	// (0x0000f47b) popup_battery_window

0x808f,	// (0x0001191b) bg_popup_sub_pane_cp25_ParamLimits

0x808f,	// (0x0001191b) bg_popup_sub_pane_cp25

0xedb5,	// (0x00018641) popup_battery_window_g1_ParamLimits

0xedb5,	// (0x00018641) popup_battery_window_g1

0xedc1,	// (0x0001864d) popup_battery_window_t1_ParamLimits

0xedc1,	// (0x0001864d) popup_battery_window_t1

0xedd3,	// (0x0001865f) popup_battery_window_t2_ParamLimits

0xedd3,	// (0x0001865f) popup_battery_window_t2

0x0001,

0xfda4,	// (0x00019630) popup_battery_window_t_ParamLimits

0xfda4,	// (0x00019630) popup_battery_window_t

0x99f4,	// (0x00013280) midp_canvas_pane_ParamLimits

0x9a6b,	// (0x000132f7) midp_keypad_pane_ParamLimits

0x9a6b,	// (0x000132f7) midp_keypad_pane

0x9d30,	// (0x000135bc) main_midp_pane_ParamLimits

0xc7b3,	// (0x0001603f) signal_pane_g2_cp_ParamLimits

0xedf0,	// (0x0001867c) aid_size_cell_midp_keypad_ParamLimits

0xedf0,	// (0x0001867c) aid_size_cell_midp_keypad

0xee0a,	// (0x00018696) midp_keyp_game_grid_pane_ParamLimits

0xee0a,	// (0x00018696) midp_keyp_game_grid_pane

0xee2a,	// (0x000186b6) midp_keyp_rocker_pane_ParamLimits

0xee2a,	// (0x000186b6) midp_keyp_rocker_pane

0xee5f,	// (0x000186eb) midp_keyp_sk_left_pane_ParamLimits

0xee5f,	// (0x000186eb) midp_keyp_sk_left_pane

0xeeb7,	// (0x00018743) midp_keyp_sk_right_pane_ParamLimits

0xeeb7,	// (0x00018743) midp_keyp_sk_right_pane

0x7cf8,	// (0x00011584) bg_button_pane_cp03

0xef0f,	// (0x0001879b) midp_keyp_sk_left_pane_g1

0x7cf8,	// (0x00011584) bg_button_pane_cp04

0xef0f,	// (0x0001879b) midp_keyp_sk_right_pane_g1

0xcd6c,	// (0x000165f8) midp_keyp_rocker_pane_g1

0xef18,	// (0x000187a4) keyp_game_cell_pane_ParamLimits

0xef18,	// (0x000187a4) keyp_game_cell_pane

0x7cf8,	// (0x00011584) bg_button_pane_cp02

0xef2b,	// (0x000187b7) keyp_game_cell_pane_g1

0x5c25,	// (0x0000f4b1) popup_fep_vkb2_window_ParamLimits

0x5c25,	// (0x0000f4b1) popup_fep_vkb2_window

0x73d5,	// (0x00010c61) aid_size_cell_vkb2_ParamLimits

0x73d5,	// (0x00010c61) aid_size_cell_vkb2

0x7429,	// (0x00010cb5) popup_fep_vkb2_window_g1_ParamLimits

0x7429,	// (0x00010cb5) popup_fep_vkb2_window_g1

0x7471,	// (0x00010cfd) vkb2_area_bottom_pane_ParamLimits

0x7471,	// (0x00010cfd) vkb2_area_bottom_pane

0x74bd,	// (0x00010d49) vkb2_area_keypad_pane_ParamLimits

0x74bd,	// (0x00010d49) vkb2_area_keypad_pane

0x74ff,	// (0x00010d8b) vkb2_area_top_pane_ParamLimits

0x74ff,	// (0x00010d8b) vkb2_area_top_pane

0x7579,	// (0x00010e05) vkb2_top_entry_pane_ParamLimits

0x7579,	// (0x00010e05) vkb2_top_entry_pane

0x75a3,	// (0x00010e2f) vkb2_top_grid_left_pane_ParamLimits

0x75a3,	// (0x00010e2f) vkb2_top_grid_left_pane

0x75c1,	// (0x00010e4d) vkb2_top_grid_right_pane_ParamLimits

0x75c1,	// (0x00010e4d) vkb2_top_grid_right_pane

0x75df,	// (0x00010e6b) vkb2_cell_keypad_pane_ParamLimits

0x75df,	// (0x00010e6b) vkb2_cell_keypad_pane

0x76b0,	// (0x00010f3c) vkb2_area_bottom_grid_pane_ParamLimits

0x76b0,	// (0x00010f3c) vkb2_area_bottom_grid_pane

0x76d6,	// (0x00010f62) vkb2_area_bottom_pane_g1_ParamLimits

0x76d6,	// (0x00010f62) vkb2_area_bottom_pane_g1

0x76fa,	// (0x00010f86) vkb2_area_bottom_pane_g2_ParamLimits

0x76fa,	// (0x00010f86) vkb2_area_bottom_pane_g2

0x7728,	// (0x00010fb4) vkb2_area_bottom_pane_g3_ParamLimits

0x7728,	// (0x00010fb4) vkb2_area_bottom_pane_g3

0x0002,

0xfda9,	// (0x00019635) vkb2_area_bottom_pane_g_ParamLimits

0xfda9,	// (0x00019635) vkb2_area_bottom_pane_g

0x7789,	// (0x00011015) vkb2_top_cell_left_pane_ParamLimits

0x7789,	// (0x00011015) vkb2_top_cell_left_pane

0xef3c,	// (0x000187c8) vkb2_top_entry_pane_g1_ParamLimits

0xef3c,	// (0x000187c8) vkb2_top_entry_pane_g1

0xef4a,	// (0x000187d6) vkb2_top_entry_pane_t1_ParamLimits

0xef4a,	// (0x000187d6) vkb2_top_entry_pane_t1

0xef7c,	// (0x00018808) vkb2_top_entry_pane_t2_ParamLimits

0xef7c,	// (0x00018808) vkb2_top_entry_pane_t2

0xefae,	// (0x0001883a) vkb2_top_entry_pane_t3_ParamLimits

0xefae,	// (0x0001883a) vkb2_top_entry_pane_t3

0x0002,

0xfdb0,	// (0x0001963c) vkb2_top_entry_pane_t_ParamLimits

0xfdb0,	// (0x0001963c) vkb2_top_entry_pane_t

0x77d6,	// (0x00011062) vkb2_top_grid_right_pane_g1_ParamLimits

0x77d6,	// (0x00011062) vkb2_top_grid_right_pane_g1

0x77ec,	// (0x00011078) vkb2_top_grid_right_pane_g2_ParamLimits

0x77ec,	// (0x00011078) vkb2_top_grid_right_pane_g2

0x7804,	// (0x00011090) vkb2_top_grid_right_pane_g3_ParamLimits

0x7804,	// (0x00011090) vkb2_top_grid_right_pane_g3

0x781c,	// (0x000110a8) vkb2_top_grid_right_pane_g4_ParamLimits

0x781c,	// (0x000110a8) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb7,	// (0x00019643) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb7,	// (0x00019643) vkb2_top_grid_right_pane_g

0x7832,	// (0x000110be) vkb2_top_cell_left_pane_g1

0x7849,	// (0x000110d5) vkb2_cell_keypad_pane_g1_ParamLimits

0x7849,	// (0x000110d5) vkb2_cell_keypad_pane_g1

0xefd2,	// (0x0001885e) vkb2_cell_keypad_pane_t1_ParamLimits

0xefd2,	// (0x0001885e) vkb2_cell_keypad_pane_t1

0x7857,	// (0x000110e3) vkb2_cell_bottom_grid_pane_ParamLimits

0x7857,	// (0x000110e3) vkb2_cell_bottom_grid_pane

0x7890,	// (0x0001111c) vkb2_cell_bottom_grid_pane_g1

0xeb88,	// (0x00018414) aid_call2_pane_cp02

0xeb90,	// (0x0001841c) aid_call_pane_cp02

0xeb98,	// (0x00018424) clock_digital_number_pane_cp10

0xeba0,	// (0x0001842c) clock_digital_number_pane_cp11

0xeba8,	// (0x00018434) clock_digital_number_pane_cp12

0xebb0,	// (0x0001843c) clock_digital_number_pane_cp13

0xebb8,	// (0x00018444) clock_digital_separator_pane_cp10

0x9366,	// (0x00012bf2) popup_clock_digital_analogue_window_cp2_g1

0x9366,	// (0x00012bf2) popup_clock_digital_analogue_window_cp2_g2

0xebc0,	// (0x0001844c) popup_clock_digital_analogue_window_cp2_g3

0x9366,	// (0x00012bf2) popup_clock_digital_analogue_window_cp2_g4

0xebc0,	// (0x0001844c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6c,	// (0x000195f8) popup_clock_digital_analogue_window_cp2_g

0xebc8,	// (0x00018454) popup_clock_digital_analogue_window_cp2_t1

0xebd6,	// (0x00018462) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd77,	// (0x00019603) popup_clock_digital_analogue_window_cp2_t

0xcd6c,	// (0x000165f8) clock_digital_number_pane_cp10_g1

0xcd6c,	// (0x000165f8) clock_digital_number_pane_cp10_g2

0x0001,

0xfb53,	// (0x000193df) clock_digital_number_pane_cp10_g

0xcd6c,	// (0x000165f8) clock_digital_separator_pane_cp10_g1

0xcd6c,	// (0x000165f8) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb53,	// (0x000193df) clock_digital_separator_pane_cp10_g

0xea04,	// (0x00018290) uniindi_top_pane_g3

0xea15,	// (0x000182a1) uniindi_top_pane_g4

0x766a,	// (0x00010ef6) vkb2_row_keypad_pane_ParamLimits

0x766a,	// (0x00010ef6) vkb2_row_keypad_pane

0x78b0,	// (0x0001113c) vkb2_cell_t_keypad_pane_ParamLimits

0x78b0,	// (0x0001113c) vkb2_cell_t_keypad_pane

0x78c0,	// (0x0001114c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x78c0,	// (0x0001114c) vkb2_cell_t_keypad_pane_cp08

0x78d3,	// (0x0001115f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x78d3,	// (0x0001115f) vkb2_cell_t_keypad_pane_cp09

0x78e7,	// (0x00011173) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x78e7,	// (0x00011173) vkb2_cell_t_keypad_pane_cp01

0x78f8,	// (0x00011184) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x78f8,	// (0x00011184) vkb2_cell_t_keypad_pane_cp02

0x7909,	// (0x00011195) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7909,	// (0x00011195) vkb2_cell_t_keypad_pane_cp03

0x791a,	// (0x000111a6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x791a,	// (0x000111a6) vkb2_cell_t_keypad_pane_cp04

0x792b,	// (0x000111b7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x792b,	// (0x000111b7) vkb2_cell_t_keypad_pane_cp05

0x793c,	// (0x000111c8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x793c,	// (0x000111c8) vkb2_cell_t_keypad_pane_cp06

0x794d,	// (0x000111d9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x794d,	// (0x000111d9) vkb2_cell_t_keypad_pane_cp07

0x795e,	// (0x000111ea) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x795e,	// (0x000111ea) vkb2_cell_t_keypad_pane_cp10

0x7110,	// (0x0001099c) vkb2_cell_t_keypad_pane_g1

0xefe9,	// (0x00018875) vkb2_cell_t_keypad_pane_t1

0x5b2a,	// (0x0000f3b6) popup_grid_graphic2_window

0xeffb,	// (0x00018887) aid_size_cell_graphic2_ParamLimits

0xeffb,	// (0x00018887) aid_size_cell_graphic2

0xf033,	// (0x000188bf) bg_popup_window_pane_cp21_ParamLimits

0xf033,	// (0x000188bf) bg_popup_window_pane_cp21

0xf041,	// (0x000188cd) graphic2_pages_pane_ParamLimits

0xf041,	// (0x000188cd) graphic2_pages_pane

0xf087,	// (0x00018913) grid_graphic2_control_pane_ParamLimits

0xf087,	// (0x00018913) grid_graphic2_control_pane

0xf0c5,	// (0x00018951) grid_graphic2_pane_ParamLimits

0xf0c5,	// (0x00018951) grid_graphic2_pane

0xf139,	// (0x000189c5) cell_graphic2_pane

0x5b2a,	// (0x0000f3b6) main_comp_mode_pane

0xe216,	// (0x00017aa2) list_ai3_gene_pane_ParamLimits

0xe64a,	// (0x00017ed6) bg_popup_window_pane_cp19_ParamLimits

0xe656,	// (0x00017ee2) bg_touch_area_indi_pane_ParamLimits

0xe656,	// (0x00017ee2) bg_touch_area_indi_pane

0xe66c,	// (0x00017ef8) bg_touch_area_indi_pane_cp01_ParamLimits

0xe66c,	// (0x00017ef8) bg_touch_area_indi_pane_cp01

0xe682,	// (0x00017f0e) bg_touch_area_indi_pane_cp02_ParamLimits

0xe682,	// (0x00017f0e) bg_touch_area_indi_pane_cp02

0xe69a,	// (0x00017f26) bg_touch_area_indi_pane_cp03_ParamLimits

0xe69a,	// (0x00017f26) bg_touch_area_indi_pane_cp03

0xe6b4,	// (0x00017f40) popup_slider_window_g1_ParamLimits

0xe6d0,	// (0x00017f5c) popup_slider_window_g2_ParamLimits

0xe6ec,	// (0x00017f78) popup_slider_window_g3_ParamLimits

0xfd01,	// (0x0001958d) popup_slider_window_g_ParamLimits

0xe748,	// (0x00017fd4) popup_slider_window_t1_ParamLimits

0xe7bc,	// (0x00018048) small_volume_slider_vertical_pane_ParamLimits

0xf139,	// (0x000189c5) cell_graphic2_pane_ParamLimits

0xf187,	// (0x00018a13) bg_button_pane_cp10_ParamLimits

0xf187,	// (0x00018a13) bg_button_pane_cp10

0xf19a,	// (0x00018a26) bg_button_pane_cp11_ParamLimits

0xf19a,	// (0x00018a26) bg_button_pane_cp11

0xf1ad,	// (0x00018a39) graphic2_pages_pane_g1_ParamLimits

0xf1ad,	// (0x00018a39) graphic2_pages_pane_g1

0xf1c8,	// (0x00018a54) graphic2_pages_pane_g2_ParamLimits

0xf1c8,	// (0x00018a54) graphic2_pages_pane_g2

0x0001,

0xfdc5,	// (0x00019651) graphic2_pages_pane_g_ParamLimits

0xfdc5,	// (0x00019651) graphic2_pages_pane_g

0xf1e0,	// (0x00018a6c) graphic2_pages_pane_t1_ParamLimits

0xf1e0,	// (0x00018a6c) graphic2_pages_pane_t1

0xf1f6,	// (0x00018a82) cell_graphic2_control_pane_ParamLimits

0xf1f6,	// (0x00018a82) cell_graphic2_control_pane

0xf217,	// (0x00018aa3) cell_graphic2_pane_g1_ParamLimits

0xf217,	// (0x00018aa3) cell_graphic2_pane_g1

0xf224,	// (0x00018ab0) cell_graphic2_pane_g2_ParamLimits

0xf224,	// (0x00018ab0) cell_graphic2_pane_g2

0xf231,	// (0x00018abd) cell_graphic2_pane_g3_ParamLimits

0xf231,	// (0x00018abd) cell_graphic2_pane_g3

0xf23e,	// (0x00018aca) cell_graphic2_pane_g4_ParamLimits

0xf23e,	// (0x00018aca) cell_graphic2_pane_g4

0xf24b,	// (0x00018ad7) cell_graphic2_pane_g5_ParamLimits

0xf24b,	// (0x00018ad7) cell_graphic2_pane_g5

0x0004,

0xfdca,	// (0x00019656) cell_graphic2_pane_g_ParamLimits

0xfdca,	// (0x00019656) cell_graphic2_pane_g

0xf266,	// (0x00018af2) cell_graphic2_pane_t1_ParamLimits

0xf266,	// (0x00018af2) cell_graphic2_pane_t1

0xa36e,	// (0x00013bfa) grid_highlight_pane_cp11_ParamLimits

0xa36e,	// (0x00013bfa) grid_highlight_pane_cp11

0x808f,	// (0x0001191b) bg_button_pane_cp05

0xf28f,	// (0x00018b1b) cell_graphic2_control_pane_g1

0xcd6c,	// (0x000165f8) bg_touch_area_indi_pane_g1

0xf2b7,	// (0x00018b43) aid_cmod_rocker_key_size

0xf2c1,	// (0x00018b4d) aid_cmode_itu_key_size

0xf2cb,	// (0x00018b57) main_cmode_video_pane

0xf2d5,	// (0x00018b61) main_comp_mode_itu_pane

0xf2e1,	// (0x00018b6d) main_comp_mode_rocker_pane

0xf2ed,	// (0x00018b79) cell_cmode_rocker_pane_ParamLimits

0xf2ed,	// (0x00018b79) cell_cmode_rocker_pane

0xf2ff,	// (0x00018b8b) cell_cmode_itu_pane_ParamLimits

0xf2ff,	// (0x00018b8b) cell_cmode_itu_pane

0x8bb4,	// (0x00012440) bg_button_pane_cp06_ParamLimits

0x8bb4,	// (0x00012440) bg_button_pane_cp06

0xcfda,	// (0x00016866) cell_cmode_rocker_pane_g1_ParamLimits

0xcfda,	// (0x00016866) cell_cmode_rocker_pane_g1

0xe860,	// (0x000180ec) cell_cmode_rocker_pane_g2_ParamLimits

0xe860,	// (0x000180ec) cell_cmode_rocker_pane_g2

0x0001,

0xfdda,	// (0x00019666) cell_cmode_rocker_pane_g_ParamLimits

0xfdda,	// (0x00019666) cell_cmode_rocker_pane_g

0x7cf8,	// (0x00011584) bg_button_pane_cp07

0xf314,	// (0x00018ba0) cell_cmode_itu_pane_g1

0xf31d,	// (0x00018ba9) cell_cmode_itu_pane_t1

0xf32b,	// (0x00018bb7) cell_cmode_itu_pane_t2

0x0001,

0xfddf,	// (0x0001966b) cell_cmode_itu_pane_t

0xea87,	// (0x00018313) aid_touch_ctrl_left

0xea8f,	// (0x0001831b) aid_touch_ctrl_right

0x7cf8,	// (0x00011584) compa_mode_pane

0xf339,	// (0x00018bc5) aid_cmod_rocker_key_size_cp

0xf343,	// (0x00018bcf) aid_cmode_itu_key_size_cp

0xf34d,	// (0x00018bd9) compa_mode_pane_g1

0xf355,	// (0x00018be1) compa_mode_pane_g2

0xf35d,	// (0x00018be9) compa_mode_pane_g3

0x0002,

0xfde4,	// (0x00019670) compa_mode_pane_g

0xf365,	// (0x00018bf1) main_comp_mode_itu_pane_cp

0xf36d,	// (0x00018bf9) main_comp_mode_rocker_pane_cp

0xf375,	// (0x00018c01) cell_cmode_itu_pane_cp_ParamLimits

0xf375,	// (0x00018c01) cell_cmode_itu_pane_cp

0xf3ab,	// (0x00018c37) cell_cmode_rocker_pane_cp_ParamLimits

0xf3ab,	// (0x00018c37) cell_cmode_rocker_pane_cp

0x8bb4,	// (0x00012440) bg_button_pane_cp06_cp_ParamLimits

0x8bb4,	// (0x00012440) bg_button_pane_cp06_cp

0xcfda,	// (0x00016866) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xcfda,	// (0x00016866) cell_cmode_rocker_pane_g1_cp

0xcd6c,	// (0x000165f8) cell_cmode_rocker_pane_g2_cp

0x7cf8,	// (0x00011584) bg_button_pane_cp07_cp

0xf3bd,	// (0x00018c49) cell_cmode_itu_pane_g1_cp

0xf3c6,	// (0x00018c52) cell_cmode_itu_pane_t1_cp

0xf3c6,	// (0x00018c52) cell_cmode_itu_pane_t2_cp

0xb896,	// (0x00015122) settings_code_pane_cp2

0x7dec,	// (0x00011678) bg_popup_window_pane_cp3_ParamLimits

0x825d,	// (0x00011ae9) heading_pane_cp3_ParamLimits

0x8269,	// (0x00011af5) listscroll_popup_graphic_pane_ParamLimits

0x6eb9,	// (0x00010745) fep_hwr_aid_pane_ParamLimits

0x7330,	// (0x00010bbc) aid_touch_sctrl_top_ParamLimits

0x734b,	// (0x00010bd7) sctrl_sk_top_pane_g1_ParamLimits

0x7110,	// (0x0001099c) sctrl_sk_top_pane_g2_ParamLimits

0xfd1a,	// (0x000195a6) sctrl_sk_top_pane_g_ParamLimits

0x7358,	// (0x00010be4) sctrl_sk_top_pane_t1_ParamLimits

0x7330,	// (0x00010bbc) aid_touch_sctrl_bottom_ParamLimits

0x7358,	// (0x00010be4) sctrl_sk_bottom_pane_t1_ParamLimits

0xe9d0,	// (0x0001825c) aid_area_touch_clock

0x7541,	// (0x00010dcd) aid_vkb2_area_top_pane_cell_ParamLimits

0x7541,	// (0x00010dcd) aid_vkb2_area_top_pane_cell

0x768c,	// (0x00010f18) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x768c,	// (0x00010f18) aid_vkb2_area_bottom_pane_cell

0xef34,	// (0x000187c0) popup_char_count_window

0xf3d4,	// (0x00018c60) popup_char_count_window_g1

0xf3dd,	// (0x00018c69) popup_char_count_window_g2

0xf3e6,	// (0x00018c72) popup_char_count_window_g3

0x0002,

0xfdeb,	// (0x00019677) popup_char_count_window_g

0xf3ef,	// (0x00018c7b) popup_char_count_window_t1

0x7407,	// (0x00010c93) popup_fep_char_preview_window_ParamLimits

0x7407,	// (0x00010c93) popup_fep_char_preview_window

0x755f,	// (0x00010deb) vkb2_top_candi_pane_ParamLimits

0x755f,	// (0x00010deb) vkb2_top_candi_pane

0xf3fd,	// (0x00018c89) cell_vkb2_top_candi_pane_ParamLimits

0xf3fd,	// (0x00018c89) cell_vkb2_top_candi_pane

0x7973,	// (0x000111ff) bg_popup_fep_char_preview_window_ParamLimits

0x7973,	// (0x000111ff) bg_popup_fep_char_preview_window

0x7981,	// (0x0001120d) popup_fep_char_preview_window_t1_ParamLimits

0x7981,	// (0x0001120d) popup_fep_char_preview_window_t1

0xf44a,	// (0x00018cd6) bg_popup_fep_char_preview_window_g1

0xf452,	// (0x00018cde) bg_popup_fep_char_preview_window_g2

0xf45a,	// (0x00018ce6) bg_popup_fep_char_preview_window_g3

0xf462,	// (0x00018cee) bg_popup_fep_char_preview_window_g4

0xf46a,	// (0x00018cf6) bg_popup_fep_char_preview_window_g5

0x79bb,	// (0x00011247) bg_popup_fep_char_preview_window_g6

0xf472,	// (0x00018cfe) bg_popup_fep_char_preview_window_g7

0xf47a,	// (0x00018d06) bg_popup_fep_char_preview_window_g8

0xf482,	// (0x00018d0e) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf2,	// (0x0001967e) bg_popup_fep_char_preview_window_g

0x7110,	// (0x0001099c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7110,	// (0x0001099c) cell_vkb2_top_candi_pane_g1

0x711e,	// (0x000109aa) cell_vkb2_top_candi_pane_g2_ParamLimits

0x711e,	// (0x000109aa) cell_vkb2_top_candi_pane_g2

0xf38a,	// (0x00018c16) cell_vkb2_top_candi_pane_g3_ParamLimits

0xf38a,	// (0x00018c16) cell_vkb2_top_candi_pane_g3

0x79c3,	// (0x0001124f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x79c3,	// (0x0001124f) cell_vkb2_top_candi_pane_g4

0xd64b,	// (0x00016ed7) cell_vkb2_top_candi_pane_g5_ParamLimits

0xd64b,	// (0x00016ed7) cell_vkb2_top_candi_pane_g5

0x79e4,	// (0x00011270) cell_vkb2_top_candi_pane_g6_ParamLimits

0x79e4,	// (0x00011270) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe05,	// (0x00019691) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe05,	// (0x00019691) cell_vkb2_top_candi_pane_g

0x79f2,	// (0x0001127e) cell_vkb2_top_candi_pane_t1

0x6cf5,	// (0x00010581) aid_size_touch_slider_mark_ParamLimits

0x6cf5,	// (0x00010581) aid_size_touch_slider_mark

0xf077,	// (0x00018903) grid_graphic2_catg_pane_ParamLimits

0xf077,	// (0x00018903) grid_graphic2_catg_pane

0xf115,	// (0x000189a1) popup_grid_graphic2_window_t1_ParamLimits

0xf115,	// (0x000189a1) popup_grid_graphic2_window_t1

0xf127,	// (0x000189b3) popup_grid_graphic2_window_t2_ParamLimits

0xf127,	// (0x000189b3) popup_grid_graphic2_window_t2

0x0001,

0xfdc0,	// (0x0001964c) popup_grid_graphic2_window_t_ParamLimits

0xfdc0,	// (0x0001964c) popup_grid_graphic2_window_t

0x808f,	// (0x0001191b) bg_button_pane_cp05_ParamLimits

0xf28f,	// (0x00018b1b) cell_graphic2_control_pane_g1_ParamLimits

0xf48a,	// (0x00018d16) cell_graphic2_catg_pane_ParamLimits

0xf48a,	// (0x00018d16) cell_graphic2_catg_pane

0x7cf8,	// (0x00011584) bg_button_pane_cp12

0xf49c,	// (0x00018d28) cell_graphic2_catg_pane_g1

0xe99c,	// (0x00018228) cell_tb_ext_pane_t1_ParamLimits

0x77a9,	// (0x00011035) vkb2_top_cell_right_narrow_pane_ParamLimits

0x77a9,	// (0x00011035) vkb2_top_cell_right_narrow_pane

0x77c1,	// (0x0001104d) vkb2_top_cell_right_wide_pane_ParamLimits

0x77c1,	// (0x0001104d) vkb2_top_cell_right_wide_pane

0x6eab,	// (0x00010737) bg_vkb2_func_pane_ParamLimits

0x6eab,	// (0x00010737) bg_vkb2_func_pane

0x7832,	// (0x000110be) vkb2_top_cell_left_pane_g1_ParamLimits

0x6eab,	// (0x00010737) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6eab,	// (0x00010737) bg_vkb2_fuc_pane_cp03

0x7890,	// (0x0001111c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xa25a,	// (0x00013ae6) bg_vkb2_func_pane_g1

0xa262,	// (0x00013aee) bg_vkb2_func_pane_g2

0xa272,	// (0x00013afe) bg_vkb2_func_pane_g3

0xa26a,	// (0x00013af6) bg_vkb2_func_pane_g4

0xa27a,	// (0x00013b06) bg_vkb2_func_pane_g5

0xa282,	// (0x00013b0e) bg_vkb2_func_pane_g6

0xa28a,	// (0x00013b16) bg_vkb2_func_pane_g7

0xa292,	// (0x00013b1e) bg_vkb2_func_pane_g8

0xa252,	// (0x00013ade) bg_vkb2_func_pane_g9

0x0008,

0xfe12,	// (0x0001969e) bg_vkb2_func_pane_g

0x6eab,	// (0x00010737) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6eab,	// (0x00010737) bg_vkb2_fuc_pane_cp01

0x7832,	// (0x000110be) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7832,	// (0x000110be) vkb2_top_cell_right_wide_pane_g1

0x6eab,	// (0x00010737) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6eab,	// (0x00010737) bg_vkb2_fuc_pane_cp02

0x7890,	// (0x0001111c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7890,	// (0x0001111c) vkb2_top_cell_right_narrow_pane_g1

0xe5c8,	// (0x00017e54) aid_touch_area_decrease_ParamLimits

0xe5c8,	// (0x00017e54) aid_touch_area_decrease

0xe5ec,	// (0x00017e78) aid_touch_area_increase_ParamLimits

0xe5ec,	// (0x00017e78) aid_touch_area_increase

0xe5f8,	// (0x00017e84) aid_touch_area_mute_ParamLimits

0xe5f8,	// (0x00017e84) aid_touch_area_mute

0xe61c,	// (0x00017ea8) aid_touch_area_slider_ParamLimits

0xe61c,	// (0x00017ea8) aid_touch_area_slider

0xe708,	// (0x00017f94) popup_slider_window_g4_ParamLimits

0xe708,	// (0x00017f94) popup_slider_window_g4

0xe714,	// (0x00017fa0) popup_slider_window_g5_ParamLimits

0xe714,	// (0x00017fa0) popup_slider_window_g5

0xe736,	// (0x00017fc2) popup_slider_window_g6_ParamLimits

0xe736,	// (0x00017fc2) popup_slider_window_g6

0xe776,	// (0x00018002) popup_slider_window_t2_ParamLimits

0xe776,	// (0x00018002) popup_slider_window_t2

0x0001,

0xfd0e,	// (0x0001959a) popup_slider_window_t_ParamLimits

0xfd0e,	// (0x0001959a) popup_slider_window_t

0xe78e,	// (0x0001801a) slider_pane_ParamLimits

0xe78e,	// (0x0001801a) slider_pane

0xf4a5,	// (0x00018d31) slider_pane_g1_ParamLimits

0xf4a5,	// (0x00018d31) slider_pane_g1

0xf4b9,	// (0x00018d45) slider_pane_g2_ParamLimits

0xf4b9,	// (0x00018d45) slider_pane_g2

0xf4cf,	// (0x00018d5b) slider_pane_g3_ParamLimits

0xf4cf,	// (0x00018d5b) slider_pane_g3

0x0003,

0xfe25,	// (0x000196b1) slider_pane_g_ParamLimits

0xfe25,	// (0x000196b1) slider_pane_g

0x68ba,	// (0x00010146) popup_tb_float_extension_window_ParamLimits

0x68ba,	// (0x00010146) popup_tb_float_extension_window

0xf4fb,	// (0x00018d87) aid_size_cell_tb_float_ext

0x7cf8,	// (0x00011584) bg_popup_sub_window_cp28

0xf507,	// (0x00018d93) grid_tb_float_ext_pane

0xf511,	// (0x00018d9d) cell_tb_float_ext_pane_ParamLimits

0xf511,	// (0x00018d9d) cell_tb_float_ext_pane

0xf52b,	// (0x00018db7) cell_tb_float_ext_pane_g1

0xf534,	// (0x00018dc0) grid_highlight_pane_cp12

0x6ffa,	// (0x00010886) cell_last_hwr_side_pane_ParamLimits

0x6ffa,	// (0x00010886) cell_last_hwr_side_pane

0xcd6c,	// (0x000165f8) cell_last_hwr_side_pane_g1

0xf53d,	// (0x00018dc9) cell_last_hwr_side_pane_g2

0x0001,

0xfe2e,	// (0x000196ba) cell_last_hwr_side_pane_g

0x7758,	// (0x00010fe4) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7758,	// (0x00010fe4) vkb2_area_bottom_space_btn_pane

0x7110,	// (0x0001099c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xefe9,	// (0x00018875) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x79f2,	// (0x0001127e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7a11,	// (0x0001129d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7a11,	// (0x0001129d) vkb2_area_bottom_space_btn_pane_g1

0x7a4b,	// (0x000112d7) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7a4b,	// (0x000112d7) vkb2_area_bottom_space_btn_pane_g2

0x7a81,	// (0x0001130d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a81,	// (0x0001130d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe33,	// (0x000196bf) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe33,	// (0x000196bf) vkb2_area_bottom_space_btn_pane_g

0x6f6e,	// (0x000107fa) cel_fep_hwr_func_pane_ParamLimits

0x6f6e,	// (0x000107fa) cel_fep_hwr_func_pane

0x6faa,	// (0x00010836) cell_hwr_side_button_pane_ParamLimits

0x6faa,	// (0x00010836) cell_hwr_side_button_pane

0xe9d0,	// (0x0001825c) aid_area_touch_clock_ParamLimits

0x808f,	// (0x0001191b) bg_uniindi_top_pane_ParamLimits

0xe9e2,	// (0x0001826e) uniindi_top_pane_g1_ParamLimits

0xe9f8,	// (0x00018284) uniindi_top_pane_g2_ParamLimits

0xea04,	// (0x00018290) uniindi_top_pane_g3_ParamLimits

0xea15,	// (0x000182a1) uniindi_top_pane_g4_ParamLimits

0xfd46,	// (0x000195d2) uniindi_top_pane_g_ParamLimits

0xea22,	// (0x000182ae) uniindi_top_pane_t1_ParamLimits

0x808f,	// (0x0001191b) bg_vkb2_func_pane_cp01_ParamLimits

0x808f,	// (0x0001191b) bg_vkb2_func_pane_cp01

0xf546,	// (0x00018dd2) cel_fep_hwr_func_pane_g1_ParamLimits

0xf546,	// (0x00018dd2) cel_fep_hwr_func_pane_g1

0x808f,	// (0x0001191b) bg_vkb2_func_pane_cp02_ParamLimits

0x808f,	// (0x0001191b) bg_vkb2_func_pane_cp02

0xf546,	// (0x00018dd2) cell_hwr_side_button_pane_g1_ParamLimits

0xf546,	// (0x00018dd2) cell_hwr_side_button_pane_g1

0xa0bd,	// (0x00013949) status_pane_g4_ParamLimits

0xa0bd,	// (0x00013949) status_pane_g4

0xa0d7,	// (0x00013963) status_pane_t1

0xca86,	// (0x00016312) form2_midp_gauge_slider_cont_pane

0xca8e,	// (0x0001631a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcaa0,	// (0x0001632c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcab2,	// (0x0001633e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb06,	// (0x00019392) form2_midp_gauge_slider_pane_t_ParamLimits

0xcac4,	// (0x00016350) form2_midp_slider_pane_ParamLimits

0x73c7,	// (0x00010c53) aid_size_cell_func_vkb2_ParamLimits

0x73c7,	// (0x00010c53) aid_size_cell_func_vkb2

0xf4e7,	// (0x00018d73) slider_pane_g4_ParamLimits

0xf4e7,	// (0x00018d73) slider_pane_g4

0x7acb,	// (0x00011357) form2_midp_gauge_slider_pane_t2_cp01

0x7ad9,	// (0x00011365) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7ad9,	// (0x00011365) form2_midp_gauge_slider_pane_t3_cp01

0x7af6,	// (0x00011382) form2_midp_slider_pane_cp01

0x7cf8,	// (0x00011584) navi_smil_pane

0x0044,	// (0x000098d0) navi_smil_pane_g1

0x004c,	// (0x000098d8) navi_smil_pane_t1

0x0019,	// (0x000098a5) form2_midp_slider_pane_g1

0x0022,	// (0x000098ae) form2_midp_slider_pane_g2

0x002a,	// (0x000098b6) form2_midp_slider_pane_g3

0x0019,	// (0x000098a5) form2_midp_slider_pane_g4

0x0032,	// (0x000098be) form2_midp_slider_pane_g5

0x0004,

0xfe3c,	// (0x000196c8) form2_midp_slider_pane_g

0x7abb,	// (0x00011347) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7abb,	// (0x00011347) vkb2_area_bottom_space_btn_pane_g4

0x9ef2,	// (0x0001377e) lc0_navi_pane_ParamLimits

0x9ef2,	// (0x0001377e) lc0_navi_pane

0x9f68,	// (0x000137f4) lc0_stat_indi_pane_ParamLimits

0x9f68,	// (0x000137f4) lc0_stat_indi_pane

0x9f7f,	// (0x0001380b) ls0_title_pane_ParamLimits

0x9f7f,	// (0x0001380b) ls0_title_pane

0x8bb4,	// (0x00012440) bg_popup_sub_pane_cp14_ParamLimits

0xe9b7,	// (0x00018243) list_uniindi_pane_ParamLimits

0xe9c3,	// (0x0001824f) uniindi_top_pane_ParamLimits

0xea5f,	// (0x000182eb) list_single_uniindi_pane_g1_ParamLimits

0xea72,	// (0x000182fe) list_single_uniindi_pane_t1_ParamLimits

0x7aff,	// (0x0001138b) lc0_stat_clock_pane_ParamLimits

0x7aff,	// (0x0001138b) lc0_stat_clock_pane

0x0074,	// (0x00009900) lc0_stat_indi_pane_g1_ParamLimits

0x0074,	// (0x00009900) lc0_stat_indi_pane_g1

0x0067,	// (0x000098f3) lc0_stat_indi_pane_g2_ParamLimits

0x0067,	// (0x000098f3) lc0_stat_indi_pane_g2

0x0001,

0xfe47,	// (0x000196d3) lc0_stat_indi_pane_g_ParamLimits

0xfe47,	// (0x000196d3) lc0_stat_indi_pane_g

0x7b0c,	// (0x00011398) lc0_uni_indicator_pane_ParamLimits

0x7b0c,	// (0x00011398) lc0_uni_indicator_pane

0x008e,	// (0x0000991a) ls0_title_pane_g1_ParamLimits

0x008e,	// (0x0000991a) ls0_title_pane_g1

0x00a2,	// (0x0000992e) ls0_title_pane_t1_ParamLimits

0x00a2,	// (0x0000992e) ls0_title_pane_t1

0x7b19,	// (0x000113a5) lc0_uni_indicator_pane_g1_ParamLimits

0x7b19,	// (0x000113a5) lc0_uni_indicator_pane_g1

0x00ed,	// (0x00009979) lc0_stat_clock_pane_t1

0x5b2a,	// (0x0000f3b6) main_ai5_pane

0x00fb,	// (0x00009987) ai5_sk_pane_ParamLimits

0x00fb,	// (0x00009987) ai5_sk_pane

0x0108,	// (0x00009994) cell_ai5_widget_pane_ParamLimits

0x0108,	// (0x00009994) cell_ai5_widget_pane

0x01d2,	// (0x00009a5e) aid_size_cell_widget_grid

0x01e8,	// (0x00009a74) bg_ai5_widget_pane_ParamLimits

0x01e8,	// (0x00009a74) bg_ai5_widget_pane

0x0252,	// (0x00009ade) cell_ai5_widget_pane_g2

0x0262,	// (0x00009aee) cell_ai5_widget_pane_g3

0x0281,	// (0x00009b0d) cell_ai5_widget_pane_g4

0x028d,	// (0x00009b19) cell_ai5_widget_pane_g5

0x0299,	// (0x00009b25) cell_ai5_widget_pane_g6

0x02a5,	// (0x00009b31) cell_ai5_widget_pane_g7

0x02ed,	// (0x00009b79) cell_ai5_widget_pane_t1_ParamLimits

0x02ed,	// (0x00009b79) cell_ai5_widget_pane_t1

0x030a,	// (0x00009b96) cell_ai5_widget_pane_t2_ParamLimits

0x030a,	// (0x00009b96) cell_ai5_widget_pane_t2

0x0322,	// (0x00009bae) cell_ai5_widget_pane_t3_ParamLimits

0x0322,	// (0x00009bae) cell_ai5_widget_pane_t3

0x033a,	// (0x00009bc6) cell_ai5_widget_pane_t4_ParamLimits

0x033a,	// (0x00009bc6) cell_ai5_widget_pane_t4

0x0354,	// (0x00009be0) cell_ai5_widget_pane_t5_ParamLimits

0x0354,	// (0x00009be0) cell_ai5_widget_pane_t5

0x0373,	// (0x00009bff) cell_ai5_widget_pane_t6_ParamLimits

0x0373,	// (0x00009bff) cell_ai5_widget_pane_t6

0x0385,	// (0x00009c11) cell_ai5_widget_pane_t7_ParamLimits

0x0385,	// (0x00009c11) cell_ai5_widget_pane_t7

0x039e,	// (0x00009c2a) cell_ai5_widget_pane_t8_ParamLimits

0x039e,	// (0x00009c2a) cell_ai5_widget_pane_t8

0x0009,

0xfe61,	// (0x000196ed) cell_ai5_widget_pane_t_ParamLimits

0xfe61,	// (0x000196ed) cell_ai5_widget_pane_t

0x03ea,	// (0x00009c76) grid_ai5_widget_pane

0x8bb4,	// (0x00012440) highlight_cell_ai5_widget_pane_ParamLimits

0x8bb4,	// (0x00012440) highlight_cell_ai5_widget_pane

0x0402,	// (0x00009c8e) ai5_sk_left_pane

0x040c,	// (0x00009c98) ai5_sk_middle_pane

0x0416,	// (0x00009ca2) ai5_sk_right_pane

0x0420,	// (0x00009cac) bg_ai5_widget_pane_g1_ParamLimits

0x0420,	// (0x00009cac) bg_ai5_widget_pane_g1

0x042c,	// (0x00009cb8) bg_ai5_widget_pane_g2_ParamLimits

0x042c,	// (0x00009cb8) bg_ai5_widget_pane_g2

0x0438,	// (0x00009cc4) bg_ai5_widget_pane_g3_ParamLimits

0x0438,	// (0x00009cc4) bg_ai5_widget_pane_g3

0x0444,	// (0x00009cd0) bg_ai5_widget_pane_g4_ParamLimits

0x0444,	// (0x00009cd0) bg_ai5_widget_pane_g4

0x0450,	// (0x00009cdc) bg_ai5_widget_pane_g5_ParamLimits

0x0450,	// (0x00009cdc) bg_ai5_widget_pane_g5

0x045c,	// (0x00009ce8) bg_ai5_widget_pane_g6_ParamLimits

0x045c,	// (0x00009ce8) bg_ai5_widget_pane_g6

0x0468,	// (0x00009cf4) bg_ai5_widget_pane_g7_ParamLimits

0x0468,	// (0x00009cf4) bg_ai5_widget_pane_g7

0x0474,	// (0x00009d00) bg_ai5_widget_pane_g8_ParamLimits

0x0474,	// (0x00009d00) bg_ai5_widget_pane_g8

0x0480,	// (0x00009d0c) bg_ai5_widget_pane_g9_ParamLimits

0x0480,	// (0x00009d0c) bg_ai5_widget_pane_g9

0x0008,

0xfe76,	// (0x00019702) bg_ai5_widget_pane_g_ParamLimits

0xfe76,	// (0x00019702) bg_ai5_widget_pane_g

0x04b3,	// (0x00009d3f) cell_shortcut_ai5_widget_pane_ParamLimits

0x04b3,	// (0x00009d3f) cell_shortcut_ai5_widget_pane

0x99ec,	// (0x00013278) bg_cell_shortcut_ai5_widget_pane

0x04c4,	// (0x00009d50) cell_grid_ai5_widget_pane_g1

0x04cd,	// (0x00009d59) highlight_cell_shortcut_ai5_widget_pane

0xa25a,	// (0x00013ae6) ai5_sk_left_pane_g1

0x04d5,	// (0x00009d61) ai5_sk_left_pane_g2

0x04dd,	// (0x00009d69) ai5_sk_left_pane_g3

0x04e5,	// (0x00009d71) ai5_sk_left_pane_g4

0x0003,

0xfe89,	// (0x00019715) ai5_sk_left_pane_g

0x04ed,	// (0x00009d79) ai5_sk_left_pane_t1

0xa262,	// (0x00013aee) ai5_sk_right_pane_g1

0x04fb,	// (0x00009d87) ai5_sk_right_pane_g2

0x0503,	// (0x00009d8f) ai5_sk_right_pane_g3

0x050b,	// (0x00009d97) ai5_sk_right_pane_g4

0x0003,

0xfe92,	// (0x0001971e) ai5_sk_right_pane_g

0x0513,	// (0x00009d9f) ai5_sk_right_pane_t1

0xa262,	// (0x00013aee) ai5_sk_middle_pane_g1

0xa25a,	// (0x00013ae6) ai5_sk_middle_pane_g2

0xa27a,	// (0x00013b06) ai5_sk_middle_pane_g3

0x0503,	// (0x00009d8f) ai5_sk_middle_pane_g4

0x04dd,	// (0x00009d69) ai5_sk_middle_pane_g5

0x0521,	// (0x00009dad) ai5_sk_middle_pane_g6

0x0529,	// (0x00009db5) ai5_sk_middle_pane_g7

0x0006,

0xfe9b,	// (0x00019727) ai5_sk_middle_pane_g

0x9d7e,	// (0x0001360a) aid_touch_area_size_lc0_ParamLimits

0x9d7e,	// (0x0001360a) aid_touch_area_size_lc0

0x713f,	// (0x000109cb) cell_hwr_candidate_pane_t1_ParamLimits

0x9d9a,	// (0x00013626) aid_touch_navi_pane

0xa067,	// (0x000138f3) status_dt_navi_pane_ParamLimits

0xa067,	// (0x000138f3) status_dt_navi_pane

0xa074,	// (0x00013900) status_dt_sta_pane_ParamLimits

0xa074,	// (0x00013900) status_dt_sta_pane

0x0531,	// (0x00009dbd) dt_sta_controll_pane

0x053e,	// (0x00009dca) dt_sta_indi_pane

0x054f,	// (0x00009ddb) dt_sta_title_pane

0x808f,	// (0x0001191b) bg_dt_sta_indi_pane_ParamLimits

0x808f,	// (0x0001191b) bg_dt_sta_indi_pane

0x0562,	// (0x00009dee) dt_sta_battery_pane

0x056a,	// (0x00009df6) dt_sta_indi_pane_g1

0x0573,	// (0x00009dff) dt_sta_indi_pane_g2

0x057c,	// (0x00009e08) dt_sta_indi_pane_g3

0x0002,

0xfeaa,	// (0x00019736) dt_sta_indi_pane_g

0x0585,	// (0x00009e11) dt_sta_signal_pane

0x8bb4,	// (0x00012440) bg_dt_sta_title_pane_ParamLimits

0x8bb4,	// (0x00012440) bg_dt_sta_title_pane

0x058e,	// (0x00009e1a) dt_sta_title_pane_g1

0x0596,	// (0x00009e22) dt_sta_title_pane_t1_ParamLimits

0x0596,	// (0x00009e22) dt_sta_title_pane_t1

0x7cf8,	// (0x00011584) bg_dt_sta_control_pane

0x05ab,	// (0x00009e37) dt_sta_controll_pane_g1

0x05b4,	// (0x00009e40) bg_dt_sta_title_pane_g1

0x05bd,	// (0x00009e49) bg_dt_sta_title_pane_g2

0x05c6,	// (0x00009e52) bg_dt_sta_title_pane_g3

0x0002,

0xfeb1,	// (0x0001973d) bg_dt_sta_title_pane_g

0xcd6c,	// (0x000165f8) bg_dt_sta_indi_pane_g1

0x05cf,	// (0x00009e5b) dt_sta_signal_pane_g1

0x05d7,	// (0x00009e63) dt_sta_signal_pane_g2

0x0001,

0xfeb8,	// (0x00019744) dt_sta_signal_pane_g

0x05df,	// (0x00009e6b) dt_sta_battery_pane_g1

0x05e8,	// (0x00009e74) dt_sta_battery_pane_t1

0xcd6c,	// (0x000165f8) bg_dt_sta_control_pane_g1

0x9474,	// (0x00012d00) fep_china_uni_eep_pane

0x947c,	// (0x00012d08) fep_china_uni_entry_pane_ParamLimits

0x948c,	// (0x00012d18) popup_fep_china_uni_window_g1_ParamLimits

0x949c,	// (0x00012d28) popup_fep_china_uni_window_g2_ParamLimits

0x949c,	// (0x00012d28) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x00018faa) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x00018faa) popup_fep_china_uni_window_g

0x05f7,	// (0x00009e83) fep_china_uni_eep_pane_g1

0x05ff,	// (0x00009e8b) fep_china_uni_eep_pane_t1

0x003b,	// (0x000098c7) aid_touch_area_size_smil_player

0x9eea,	// (0x00013776) lc0_clock_pane

0xa0cb,	// (0x00013957) status_pane_g5_ParamLimits

0xa0cb,	// (0x00013957) status_pane_g5

0x6581,	// (0x0000fe0d) popup_keymap_window

0xa089,	// (0x00013915) status_icon_pane

0x0262,	// (0x00009aee) cell_ai5_widget_pane_g3_ParamLimits

0x0281,	// (0x00009b0d) cell_ai5_widget_pane_g4_ParamLimits

0x028d,	// (0x00009b19) cell_ai5_widget_pane_g5_ParamLimits

0x02b1,	// (0x00009b3d) cell_ai5_widget_pane_g8_ParamLimits

0x02b1,	// (0x00009b3d) cell_ai5_widget_pane_g8

0x02c5,	// (0x00009b51) cell_ai5_widget_pane_g9_ParamLimits

0x02c5,	// (0x00009b51) cell_ai5_widget_pane_g9

0x02d9,	// (0x00009b65) cell_ai5_widget_pane_g10_ParamLimits

0x02d9,	// (0x00009b65) cell_ai5_widget_pane_g10

0x060e,	// (0x00009e9a) status_icon_pane_g1

0x7cf8,	// (0x00011584) bg_popup_sub_pane_cp13

0x0616,	// (0x00009ea2) popup_keymap_window_t1

0x9cb3,	// (0x0001353f) control_pane_g6_ParamLimits

0x9cb3,	// (0x0001353f) control_pane_g6

0x9cc0,	// (0x0001354c) control_pane_g7_ParamLimits

0x9cc0,	// (0x0001354c) control_pane_g7

0x9ccd,	// (0x00013559) control_pane_g8_ParamLimits

0x9ccd,	// (0x00013559) control_pane_g8

0x0531,	// (0x00009dbd) dt_sta_controll_pane_ParamLimits

0x053e,	// (0x00009dca) dt_sta_indi_pane_ParamLimits

0x054f,	// (0x00009ddb) dt_sta_title_pane_ParamLimits

0x8595,	// (0x00011e21) aid_size_touch_scroll_bar_cale

0x5c03,	// (0x0000f48f) popup_discreet_window_ParamLimits

0x5c03,	// (0x0000f48f) popup_discreet_window

0x5c7d,	// (0x0000f509) popup_sk_window

0xa9c5,	// (0x00014251) bg_popup_sub_pane_cp28_ParamLimits

0xa9c5,	// (0x00014251) bg_popup_sub_pane_cp28

0x0624,	// (0x00009eb0) popup_discreet_window_g1_ParamLimits

0x0624,	// (0x00009eb0) popup_discreet_window_g1

0x0644,	// (0x00009ed0) popup_discreet_window_t1_ParamLimits

0x0644,	// (0x00009ed0) popup_discreet_window_t1

0x0662,	// (0x00009eee) popup_discreet_window_t2_ParamLimits

0x0662,	// (0x00009eee) popup_discreet_window_t2

0x0002,

0xfebd,	// (0x00019749) popup_discreet_window_t_ParamLimits

0xfebd,	// (0x00019749) popup_discreet_window_t

0x7b2e,	// (0x000113ba) popup_sk_window_g1

0x7b38,	// (0x000113c4) popup_sk_window_g2

0x0001,

0xfec4,	// (0x00019750) popup_sk_window_g

0x7b42,	// (0x000113ce) popup_sk_window_t1

0x7b50,	// (0x000113dc) popup_sk_window_t1_copy1

0x0252,	// (0x00009ade) cell_ai5_widget_pane_g2_ParamLimits

0x03b0,	// (0x00009c3c) cell_ai5_widget_pane_t9_ParamLimits

0x03b0,	// (0x00009c3c) cell_ai5_widget_pane_t9

0x7cf8,	// (0x00011584) main_fep_fshwr2_pane

0x7b5e,	// (0x000113ea) aid_fshwr2_btn_pane

0x7b6a,	// (0x000113f6) aid_fshwr2_syb_pane

0x7b76,	// (0x00011402) aid_fshwr2_txt_pane

0x7b82,	// (0x0001140e) fshwr2_func_candi_pane

0x7b97,	// (0x00011423) fshwr2_hwr_syb_pane

0x7ba7,	// (0x00011433) fshwr2_icf_pane

0x7cf8,	// (0x00011584) fshwr2_icf_bg_pane

0x0756,	// (0x00009fe2) fshwr2_icf_pane_t1_ParamLimits

0x0756,	// (0x00009fe2) fshwr2_icf_pane_t1

0xcd6c,	// (0x000165f8) fshwr2_func_candi_pane_g1

0x076d,	// (0x00009ff9) fshwr2_func_candi_row_pane_ParamLimits

0x076d,	// (0x00009ff9) fshwr2_func_candi_row_pane

0x077e,	// (0x0000a00a) cell_fshwr2_syb_pane_ParamLimits

0x077e,	// (0x0000a00a) cell_fshwr2_syb_pane

0xcfda,	// (0x00016866) fshwr2_hwr_syb_pane_g1_ParamLimits

0xcfda,	// (0x00016866) fshwr2_hwr_syb_pane_g1

0x7cf8,	// (0x00011584) bg_popup_call_pane_cp01

0x079a,	// (0x0000a026) fshwr2_func_candi_cell_pane_ParamLimits

0x079a,	// (0x0000a026) fshwr2_func_candi_cell_pane

0x07c8,	// (0x0000a054) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x07c8,	// (0x0000a054) fshwr2_func_candi_cell_bg_pane

0x07e2,	// (0x0000a06e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x07e2,	// (0x0000a06e) fshwr2_func_candi_cell_pane_g1

0x0802,	// (0x0000a08e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x0802,	// (0x0000a08e) fshwr2_func_candi_cell_pane_t1

0x7cf8,	// (0x00011584) bg_button_pane_cp08

0x99ec,	// (0x00013278) cell_fshwr2_syb_bg_pane

0x0815,	// (0x0000a0a1) cell_fshwr2_syb_bg_pane_g1

0x081d,	// (0x0000a0a9) cell_fshwr2_syb_bg_pane_t1

0x8bb4,	// (0x00012440) main_tmo_pane

0xb4da,	// (0x00014d66) uni_indicator_pane_g1_ParamLimits

0xb4ef,	// (0x00014d7b) uni_indicator_pane_g2_ParamLimits

0xb505,	// (0x00014d91) uni_indicator_pane_g3_ParamLimits

0xb51b,	// (0x00014da7) uni_indicator_pane_g4_ParamLimits

0xb51b,	// (0x00014da7) uni_indicator_pane_g4

0xb52f,	// (0x00014dbb) uni_indicator_pane_g5_ParamLimits

0xb52f,	// (0x00014dbb) uni_indicator_pane_g5

0xb543,	// (0x00014dcf) uni_indicator_pane_g6_ParamLimits

0xb543,	// (0x00014dcf) uni_indicator_pane_g6

0xf91d,	// (0x000191a9) uni_indicator_pane_g_ParamLimits

0xe5aa,	// (0x00017e36) popup_tmo_note_window_ParamLimits

0xe5aa,	// (0x00017e36) popup_tmo_note_window

0x73a9,	// (0x00010c35) fshwr2_bg_pane

0x07f3,	// (0x0000a07f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x07f3,	// (0x0000a07f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec9,	// (0x00019755) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec9,	// (0x00019755) fshwr2_func_candi_cell_pane_g

0xcd6c,	// (0x000165f8) bg_popup_window_pane_cp01

0x082c,	// (0x0000a0b8) bg_popup_window_pane_g1_cp01

0x0835,	// (0x0000a0c1) bg_popup_window_pane_cp22_ParamLimits

0x0835,	// (0x0000a0c1) bg_popup_window_pane_cp22

0x0843,	// (0x0000a0cf) listscroll_tmo_link_pane_ParamLimits

0x0843,	// (0x0000a0cf) listscroll_tmo_link_pane

0x0883,	// (0x0000a10f) popup_tmo_note_window_g1_ParamLimits

0x0883,	// (0x0000a10f) popup_tmo_note_window_g1

0x0890,	// (0x0000a11c) tmo_note_info_pane_ParamLimits

0x0890,	// (0x0000a11c) tmo_note_info_pane

0x08aa,	// (0x0000a136) list_tmo_note_info_pane_g1_ParamLimits

0x08aa,	// (0x0000a136) list_tmo_note_info_pane_g1

0x08c1,	// (0x0000a14d) list_tmo_note_info_pane_g2_ParamLimits

0x08c1,	// (0x0000a14d) list_tmo_note_info_pane_g2

0x0001,

0xfece,	// (0x0001975a) list_tmo_note_info_pane_g_ParamLimits

0xfece,	// (0x0001975a) list_tmo_note_info_pane_g

0x08dd,	// (0x0000a169) list_tmo_note_info_text_pane_ParamLimits

0x08dd,	// (0x0000a169) list_tmo_note_info_text_pane

0x0960,	// (0x0000a1ec) list_tmo_link_pane

0x096d,	// (0x0000a1f9) scroll_pane_cp20

0x097a,	// (0x0000a206) list_single_tmo_link_pane_ParamLimits

0x097a,	// (0x0000a206) list_single_tmo_link_pane

0x098a,	// (0x0000a216) list_single_tmo_link_pane_t1

0x0998,	// (0x0000a224) list_tmo_note_info_text_pane_t1_ParamLimits

0x0998,	// (0x0000a224) list_tmo_note_info_text_pane_t1

0x8dce,	// (0x0001265a) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8dce,	// (0x0001265a) aid_size_touch_scroll_bar_cp01

0x8c5f,	// (0x000124eb) aid_size_touch_slider_marker

0x5c65,	// (0x0000f4f1) popup_settings_window_ParamLimits

0x5c65,	// (0x0000f4f1) popup_settings_window

0x9d4a,	// (0x000135d6) popup_candi_list_indi_window

0x9d9a,	// (0x00013626) aid_touch_navi_pane_ParamLimits

0x7304,	// (0x00010b90) rs_clock_indi_pane

0x730d,	// (0x00010b99) sctrl_sk_bottom_pane_ParamLimits

0x731e,	// (0x00010baa) sctrl_sk_top_pane_ParamLimits

0x7421,	// (0x00010cad) popup_fep_tooltip_window

0x01d2,	// (0x00009a5e) aid_size_cell_widget_grid_ParamLimits

0x0246,	// (0x00009ad2) cell_ai5_widget_pane_g1_ParamLimits

0x0246,	// (0x00009ad2) cell_ai5_widget_pane_g1

0x0299,	// (0x00009b25) cell_ai5_widget_pane_g6_ParamLimits

0x02a5,	// (0x00009b31) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4c,	// (0x000196d8) cell_ai5_widget_pane_g_ParamLimits

0xfe4c,	// (0x000196d8) cell_ai5_widget_pane_g

0x03d4,	// (0x00009c60) cell_ai5_widget_pane_t10_ParamLimits

0x03d4,	// (0x00009c60) cell_ai5_widget_pane_t10

0x03ea,	// (0x00009c76) grid_ai5_widget_pane_ParamLimits

0x048c,	// (0x00009d18) cell_contacts_ai5_widget_pane_ParamLimits

0x048c,	// (0x00009d18) cell_contacts_ai5_widget_pane

0x0677,	// (0x00009f03) popup_discreet_window_t3_ParamLimits

0x0677,	// (0x00009f03) popup_discreet_window_t3

0x7bbc,	// (0x00011448) popup_fshwr2_char_preview_window_ParamLimits

0x7bbc,	// (0x00011448) popup_fshwr2_char_preview_window

0x08fb,	// (0x0000a187) tmo_note_info_pane_t1

0x0910,	// (0x0000a19c) tmo_note_info_pane_t2

0x0927,	// (0x0000a1b3) tmo_note_info_pane_t3

0x093c,	// (0x0000a1c8) tmo_note_info_pane_t4

0x094e,	// (0x0000a1da) tmo_note_info_pane_t5

0x0004,

0xfed3,	// (0x0001975f) tmo_note_info_pane_t

0x0960,	// (0x0000a1ec) list_tmo_link_pane_ParamLimits

0x096d,	// (0x0000a1f9) scroll_pane_cp20_ParamLimits

0x7cf8,	// (0x00011584) bg_popup_fep_char_preview_window_cp01

0x09b1,	// (0x0000a23d) popup_fshwr2_char_preview_window_t1

0x09bf,	// (0x0000a24b) popup_candi_list_indi_window_g1

0x09c8,	// (0x0000a254) bg_cell_contacts_ai5_widget_pane

0x09d4,	// (0x0000a260) cell_contacts_ai5_widget_pane_g1

0x09e7,	// (0x0000a273) cell_contacts_ai5_widget_pane_g2

0x09f3,	// (0x0000a27f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfede,	// (0x0001976a) cell_contacts_ai5_widget_pane_g

0x0a05,	// (0x0000a291) cell_contacts_ai5_widget_pane_t1

0x8bb4,	// (0x00012440) highlight_cell_shortcut_ai5_widget_pane_cp01

0x0a7f,	// (0x0000a30b) settings_container_pane

0x99ec,	// (0x00013278) listscroll_set_pane_copy1

0xc1bb,	// (0x00015a47) scroll_pane_cp121_copy1

0x0a8b,	// (0x0000a317) set_content_pane_copy1

0x0a93,	// (0x0000a31f) aid_height_set_list_copy1_ParamLimits

0x0a93,	// (0x0000a31f) aid_height_set_list_copy1

0xb748,	// (0x00014fd4) aid_size_parent_copy1_ParamLimits

0xb748,	// (0x00014fd4) aid_size_parent_copy1

0x0a9f,	// (0x0000a32b) button_value_adjust_pane_cp6_copy1_ParamLimits

0x0a9f,	// (0x0000a32b) button_value_adjust_pane_cp6_copy1

0x9d30,	// (0x000135bc) list_highlight_pane_cp2_copy1_ParamLimits

0x9d30,	// (0x000135bc) list_highlight_pane_cp2_copy1

0x0ab3,	// (0x0000a33f) list_set_pane_copy1_ParamLimits

0x0ab3,	// (0x0000a33f) list_set_pane_copy1

0x0a1a,	// (0x0000a2a6) main_pane_set_t1_copy1_ParamLimits

0x0a1a,	// (0x0000a2a6) main_pane_set_t1_copy1

0x0a54,	// (0x0000a2e0) main_pane_set_t2_copy1_ParamLimits

0x0a54,	// (0x0000a2e0) main_pane_set_t2_copy1

0x0b60,	// (0x0000a3ec) main_pane_set_t3_copy1

0x0b6e,	// (0x0000a3fa) main_pane_set_t4_copy1

0x0a73,	// (0x0000a2ff) set_content_pane_g1_copy1_ParamLimits

0x0a73,	// (0x0000a2ff) set_content_pane_g1_copy1

0x0b7c,	// (0x0000a408) setting_code_pane_copy1

0x0b84,	// (0x0000a410) setting_slider_graphic_pane_copy1

0x0b84,	// (0x0000a410) setting_slider_pane_copy1

0x0b84,	// (0x0000a410) setting_text_pane_copy1

0x0b84,	// (0x0000a410) setting_volume_pane_copy1

0x0b7c,	// (0x0000a408) settings_code_pane_cp2_copy1

0x0b8c,	// (0x0000a418) settings_code_pane_cp_copy1_ParamLimits

0x0b8c,	// (0x0000a418) settings_code_pane_cp_copy1

0x7bd0,	// (0x0001145c) volume_set_pane_copy1

0x0ba8,	// (0x0000a434) volume_set_pane_g10_copy1

0x0bb0,	// (0x0000a43c) volume_set_pane_g1_copy1

0x0bb8,	// (0x0000a444) volume_set_pane_g2_copy1

0x0bc0,	// (0x0000a44c) volume_set_pane_g3_copy1

0x0bc8,	// (0x0000a454) volume_set_pane_g4_copy1

0x0bd0,	// (0x0000a45c) volume_set_pane_g5_copy1

0x0bd8,	// (0x0000a464) volume_set_pane_g6_copy1

0x0be0,	// (0x0000a46c) volume_set_pane_g7_copy1

0x0be8,	// (0x0000a474) volume_set_pane_g8_copy1

0x0bf0,	// (0x0000a47c) volume_set_pane_g9_copy1

0x7dec,	// (0x00011678) bg_set_opt_pane_cp_copy1_ParamLimits

0x7dec,	// (0x00011678) bg_set_opt_pane_cp_copy1

0x7bd8,	// (0x00011464) setting_slider_pane_t1_copy1_ParamLimits

0x7bd8,	// (0x00011464) setting_slider_pane_t1_copy1

0x7bf6,	// (0x00011482) setting_slider_pane_t2_copy1_ParamLimits

0x7bf6,	// (0x00011482) setting_slider_pane_t2_copy1

0x7c10,	// (0x0001149c) setting_slider_pane_t3_copy1_ParamLimits

0x7c10,	// (0x0001149c) setting_slider_pane_t3_copy1

0x7c28,	// (0x000114b4) slider_set_pane_copy1_ParamLimits

0x7c28,	// (0x000114b4) slider_set_pane_copy1

0x8ce1,	// (0x0001256d) set_opt_bg_pane_g1_copy2

0x8ce9,	// (0x00012575) set_opt_bg_pane_g2_copy2

0x0c5e,	// (0x0000a4ea) set_opt_bg_pane_g3_copy2

0x8cf9,	// (0x00012585) set_opt_bg_pane_g4_copy2

0x8d01,	// (0x0001258d) set_opt_bg_pane_g5_copy2

0x8d09,	// (0x00012595) set_opt_bg_pane_g6_copy2

0x0c68,	// (0x0000a4f4) set_opt_bg_pane_g7_copy2

0x0c70,	// (0x0000a4fc) set_opt_bg_pane_g8_copy2

0x0c7a,	// (0x0000a506) set_opt_bg_pane_g9_copy2

0x0c84,	// (0x0000a510) aid_size_touch_slider_mark_copy1_ParamLimits

0x0c84,	// (0x0000a510) aid_size_touch_slider_mark_copy1

0x0c98,	// (0x0000a524) slider_set_pane_g1_copy1

0x0ca1,	// (0x0000a52d) slider_set_pane_g2_copy1

0xbdbf,	// (0x0001564b) slider_set_pane_g3_copy1_ParamLimits

0xbdbf,	// (0x0001564b) slider_set_pane_g3_copy1

0xbdd3,	// (0x0001565f) slider_set_pane_g4_copy1_ParamLimits

0xbdd3,	// (0x0001565f) slider_set_pane_g4_copy1

0xbdeb,	// (0x00015677) slider_set_pane_g5_copy1_ParamLimits

0xbdeb,	// (0x00015677) slider_set_pane_g5_copy1

0xbdbf,	// (0x0001564b) slider_set_pane_g6_copy1_ParamLimits

0xbdbf,	// (0x0001564b) slider_set_pane_g6_copy1

0x0ca9,	// (0x0000a535) slider_set_pane_g7_copy1_ParamLimits

0x0ca9,	// (0x0000a535) slider_set_pane_g7_copy1

0x7d0c,	// (0x00011598) bg_set_opt_pane_cp2_copy1

0x0cbf,	// (0x0000a54b) setting_slider_graphic_pane_g1_copy1

0x0cd8,	// (0x0000a564) setting_slider_graphic_pane_t1_copy1

0x0cc8,	// (0x0000a554) setting_slider_graphic_pane_t2_copy1

0x0ce8,	// (0x0000a574) slider_set_pane_cp_copy1

0x0cf8,	// (0x0000a584) input_focus_pane_cp1_copy1

0x0d01,	// (0x0000a58d) list_set_text_pane_copy1

0x0d09,	// (0x0000a595) setting_text_pane_g1_copy1

0x0d12,	// (0x0000a59e) set_text_pane_t1_copy1

0x0cf8,	// (0x0000a584) input_focus_pane_cp2_copy1

0x0d09,	// (0x0000a595) setting_code_pane_g1_copy1

0x0d2d,	// (0x0000a5b9) setting_code_pane_t1_copy1

0xbff0,	// (0x0001587c) list_set_graphic_pane_copy1

0x7d0c,	// (0x00011598) bg_set_opt_pane_cp4_copy1

0x9702,	// (0x00012f8e) list_set_graphic_pane_g1_copy1_ParamLimits

0x9702,	// (0x00012f8e) list_set_graphic_pane_g1_copy1

0x0d3b,	// (0x0000a5c7) list_set_graphic_pane_g2_copy1

0x971a,	// (0x00012fa6) list_set_graphic_pane_t1_copy1_ParamLimits

0x971a,	// (0x00012fa6) list_set_graphic_pane_t1_copy1

0xcd6c,	// (0x000165f8) rs_clock_indi_pane_g1

0x0d43,	// (0x0000a5cf) rs_clock_indi_pane_t1

0x0d51,	// (0x0000a5dd) rs_indi_pane

0x0d59,	// (0x0000a5e5) rs_indi_pane_g1

0x0d62,	// (0x0000a5ee) rs_indi_pane_g2

0x0d6b,	// (0x0000a5f7) rs_indi_pane_g3

0x0002,

0xfee5,	// (0x00019771) rs_indi_pane_g

0x99ec,	// (0x00013278) bg_popup_preview_window_pane_cp03

0x0d74,	// (0x0000a600) popup_fep_tooltip_window_t1

0xdbf8,	// (0x00017484) popup_note2_window_g2_ParamLimits

0xdbf8,	// (0x00017484) popup_note2_window_g2

0x0001,

0xfc7e,	// (0x0001950a) popup_note2_window_g_ParamLimits

0xfc7e,	// (0x0001950a) popup_note2_window_g

0xe1dc,	// (0x00017a68) bg_popup_sub_pane_cp11_ParamLimits

0xe1e9,	// (0x00017a75) cell_ai3_links_pane_g1_ParamLimits

0xe200,	// (0x00017a8c) cell_ai3_links_pane_t1

0x0d12,	// (0x0000a59e) set_text_pane_t1_copy1_ParamLimits

0x9909,	// (0x00013195) cell_graphic_popup_pane_cp2_ParamLimits

0x9909,	// (0x00013195) cell_graphic_popup_pane_cp2

0x0d82,	// (0x0000a60e) cell_graphic_popup_pane_g1_cp2

0x83a8,	// (0x00011c34) cell_graphic_popup_pane_g2_cp2

0x0d8a,	// (0x0000a616) cell_graphic_popup_pane_g3_cp2

0x0d92,	// (0x0000a61e) cell_graphic_popup_pane_t2_cp2

0x83b9,	// (0x00011c45) grid_highlight_pane_cp3_cp2

0x90af,	// (0x0001293b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8bb4,	// (0x00012440) main_tmo_pane_ParamLimits

0xe59e,	// (0x00017e2a) popup_tmo_big_image_note_window

0x0236,	// (0x00009ac2) cell_ai5_widget_list_pane

0x023e,	// (0x00009aca) cell_ai5_widget_lrg_icon_pane

0x08fb,	// (0x0000a187) tmo_note_info_pane_t1_ParamLimits

0x0910,	// (0x0000a19c) tmo_note_info_pane_t2_ParamLimits

0x0927,	// (0x0000a1b3) tmo_note_info_pane_t3_ParamLimits

0x093c,	// (0x0000a1c8) tmo_note_info_pane_t4_ParamLimits

0x094e,	// (0x0000a1da) tmo_note_info_pane_t5_ParamLimits

0xfed3,	// (0x0001975f) tmo_note_info_pane_t_ParamLimits

0x0a7f,	// (0x0000a30b) settings_container_pane_ParamLimits

0x0cf0,	// (0x0000a57c) indicator_popup_pane_cp5

0x0cf0,	// (0x0000a57c) indicator_popup_pane_cp6

0xbff0,	// (0x0001587c) list_set_graphic_pane_copy1_ParamLimits

0x7cf8,	// (0x00011584) bg_popup_window_pane_cp23

0x0da0,	// (0x0000a62c) popup_tmo_big_image_note_window_g1

0x0da9,	// (0x0000a635) popup_tmo_big_image_note_window_t1

0x0db9,	// (0x0000a645) popup_tmo_big_image_note_window_t2

0x0dc9,	// (0x0000a655) popup_tmo_big_image_note_window_t3

0x0002,

0xfeec,	// (0x00019778) popup_tmo_big_image_note_window_t

0x0dd9,	// (0x0000a665) cell_ai5_widget_lrg_icon_pane_g1

0x0de1,	// (0x0000a66d) cell_ai5_widget_lrg_icon_pane_t1

0x0def,	// (0x0000a67b) cell_ai5_widget_list_row_pane_ParamLimits

0x0def,	// (0x0000a67b) cell_ai5_widget_list_row_pane

0x0e07,	// (0x0000a693) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x0e07,	// (0x0000a693) cell_ai5_widget_list_row_pane_g1

0x0e14,	// (0x0000a6a0) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x0e14,	// (0x0000a6a0) cell_ai5_widget_list_row_pane_t1

0x0e2c,	// (0x0000a6b8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x0e2c,	// (0x0000a6b8) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfef3,	// (0x0001977f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef3,	// (0x0001977f) cell_ai5_widget_list_row_pane_t

0x5b2a,	// (0x0000f3b6) main_fep_vtchi_ss_pane

0x7c4d,	// (0x000114d9) popup_fep_char_pre_window

0x7c55,	// (0x000114e1) popup_fep_ituss_window

0x7c76,	// (0x00011502) popup_fep_vkbss_window

0x0eab,	// (0x0000a737) grid_vkbss_keypad_pane_ParamLimits

0x0eab,	// (0x0000a737) grid_vkbss_keypad_pane

0x0ebb,	// (0x0000a747) ituss_keypad_pane

0x7ca1,	// (0x0001152d) aid_vkbss_key_offset_ParamLimits

0x7ca1,	// (0x0001152d) aid_vkbss_key_offset

0x7cad,	// (0x00011539) cell_vkbss_key_pane_ParamLimits

0x7cad,	// (0x00011539) cell_vkbss_key_pane

0xa0a5,	// (0x00013931) bg_cell_vkbss_key_g1_ParamLimits

0xa0a5,	// (0x00013931) bg_cell_vkbss_key_g1

0x0ef9,	// (0x0000a785) cell_vkbss_key_3p_pane_ParamLimits

0x0ef9,	// (0x0000a785) cell_vkbss_key_3p_pane

0x0f13,	// (0x0000a79f) cell_vkbss_key_g1_ParamLimits

0x0f13,	// (0x0000a79f) cell_vkbss_key_g1

0x0f2d,	// (0x0000a7b9) cell_vkbss_key_t1_ParamLimits

0x0f2d,	// (0x0000a7b9) cell_vkbss_key_t1

0x7cc3,	// (0x0001154f) cell_ituss_key_pane_ParamLimits

0x7cc3,	// (0x0001154f) cell_ituss_key_pane

0x0f69,	// (0x0000a7f5) bg_cell_ituss_key_g1_ParamLimits

0x0f69,	// (0x0000a7f5) bg_cell_ituss_key_g1

0x0f75,	// (0x0000a801) cell_ituss_key_pane_g1_ParamLimits

0x0f75,	// (0x0000a801) cell_ituss_key_pane_g1

0x0f89,	// (0x0000a815) cell_ituss_key_pane_g2_ParamLimits

0x0f89,	// (0x0000a815) cell_ituss_key_pane_g2

0x0001,

0xfefa,	// (0x00019786) cell_ituss_key_pane_g_ParamLimits

0xfefa,	// (0x00019786) cell_ituss_key_pane_g

0x0fb7,	// (0x0000a843) cell_ituss_key_t1_ParamLimits

0x0fb7,	// (0x0000a843) cell_ituss_key_t1

0x0fed,	// (0x0000a879) cell_ituss_key_t2_ParamLimits

0x0fed,	// (0x0000a879) cell_ituss_key_t2

0x101e,	// (0x0000a8aa) cell_ituss_key_t3_ParamLimits

0x101e,	// (0x0000a8aa) cell_ituss_key_t3

0x1058,	// (0x0000a8e4) cell_ituss_key_t4_ParamLimits

0x1058,	// (0x0000a8e4) cell_ituss_key_t4

0x0003,

0xfeff,	// (0x0001978b) cell_ituss_key_t_ParamLimits

0xfeff,	// (0x0001978b) cell_ituss_key_t

0x10a2,	// (0x0000a92e) cell_vkbss_key_3p_pane_g1

0x109a,	// (0x0000a926) cell_vkbss_key_3p_pane_g2

0x1092,	// (0x0000a91e) cell_vkbss_key_3p_pane_g3

0x0002,

0xff08,	// (0x00019794) cell_vkbss_key_3p_pane_g

0x7cf8,	// (0x00011584) bg_popup_fep_char_preview_window_cp02

0x10aa,	// (0x0000a936) popup_fep_char_pre_window_t1

0x01c8,	// (0x00009a54) main_ai5_sk_pane

0x09c8,	// (0x0000a254) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x09d4,	// (0x0000a260) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x09e7,	// (0x0000a273) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x09f3,	// (0x0000a27f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfede,	// (0x0001976a) cell_contacts_ai5_widget_pane_g_ParamLimits

0x0a05,	// (0x0000a291) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8bb4,	// (0x00012440) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x10b9,	// (0x0000a945) main_ai5_sk_pane_g1

0xa803,	// (0x0001408f) popup_query_code_window_g1

0x7c6b,	// (0x000114f7) popup_fep_vkb_icf_pane

0x7c7f,	// (0x0001150b) popup_fep_vtchi_icf_pane

0x8bb4,	// (0x00012440) bg_icf_pane

0x10c2,	// (0x0000a94e) list_vkb_icf_pane

0x8bb4,	// (0x00012440) bg_icf_pane_cp01

0x10ce,	// (0x0000a95a) vtchi_icf_list_pane

0x10df,	// (0x0000a96b) list_vkb_icf_pane_t1_ParamLimits

0x10df,	// (0x0000a96b) list_vkb_icf_pane_t1

0x10f8,	// (0x0000a984) vtchi_icf_list_pane_t1_ParamLimits

0x10f8,	// (0x0000a984) vtchi_icf_list_pane_t1

0x7c55,	// (0x000114e1) popup_fep_ituss_window_ParamLimits

0x7c7f,	// (0x0001150b) popup_fep_vtchi_icf_pane_ParamLimits

0x0ebb,	// (0x0000a747) ituss_keypad_pane_ParamLimits

0x7c95,	// (0x00011521) ituss_sks_pane

0x8bb4,	// (0x00012440) bg_icf_pane_ParamLimits

0x7c3e,	// (0x000114ca) icf_edit_indi_pane_ParamLimits

0x7c3e,	// (0x000114ca) icf_edit_indi_pane

0x10c2,	// (0x0000a94e) list_vkb_icf_pane_ParamLimits

0x8bb4,	// (0x00012440) bg_icf_pane_cp01_ParamLimits

0x7c3e,	// (0x000114ca) icf_edit_indi_pane_cp01_ParamLimits

0x7c3e,	// (0x000114ca) icf_edit_indi_pane_cp01

0x10d6,	// (0x0000a962) vtchi_query_pane

0xcfda,	// (0x00016866) icf_edit_indi_pane_g1_ParamLimits

0xcfda,	// (0x00016866) icf_edit_indi_pane_g1

0x1185,	// (0x0000aa11) icf_edit_indi_pane_g2_ParamLimits

0x1185,	// (0x0000aa11) icf_edit_indi_pane_g2

0x0001,

0xff20,	// (0x000197ac) icf_edit_indi_pane_g_ParamLimits

0xff20,	// (0x000197ac) icf_edit_indi_pane_g

0x1194,	// (0x0000aa20) icf_edit_indi_pane_t1

0x111b,	// (0x0000a9a7) bg_input_focus_pane_cp042

0x858c,	// (0x00011e18) vtchi_button_pane

0x1124,	// (0x0000a9b0) vtchi_query_pane_t1

0x1132,	// (0x0000a9be) vtchi_query_pane_t2

0x1140,	// (0x0000a9cc) vtchi_query_pane_t3

0x0002,

0xff0f,	// (0x0001979b) vtchi_query_pane_t

0x7cf8,	// (0x00011584) bg_button_pane_cp13

0x114e,	// (0x0000a9da) vtchi_button_pane_g1

0x1156,	// (0x0000a9e2) ituss_sks_pane_g1

0x1161,	// (0x0000a9ed) ituss_sks_pane_g2

0x0001,

0xff16,	// (0x000197a2) ituss_sks_pane_g

0x1169,	// (0x0000a9f5) ituss_sks_pane_t1

0x1177,	// (0x0000aa03) ituss_sks_pane_t2

0x0001,

0xff1b,	// (0x000197a7) ituss_sks_pane_t

0xc76c,	// (0x00015ff8) indicator_nsta_pane_cp_g1

0xc775,	// (0x00016001) indicator_nsta_pane_cp_g2

0xc77d,	// (0x00016009) indicator_nsta_pane_cp_g3

0xc785,	// (0x00016011) indicator_nsta_pane_cp_g4

0xc78d,	// (0x00016019) indicator_nsta_pane_cp_g5

0xc78d,	// (0x00016019) indicator_nsta_pane_cp_g6

0x0005,

0xfabc,	// (0x00019348) indicator_nsta_pane_cp_g

0xf27c,	// (0x00018b08) cell_graphic2_pane_t2_ParamLimits

0xf27c,	// (0x00018b08) cell_graphic2_pane_t2

0x0001,

0xfdd5,	// (0x00019661) cell_graphic2_pane_t_ParamLimits

0xfdd5,	// (0x00019661) cell_graphic2_pane_t

0xf2a9,	// (0x00018b35) cell_graphic2_control_pane_t1

0x9424,	// (0x00012cb0) signal_pane_g3_ParamLimits

0x9424,	// (0x00012cb0) signal_pane_g3

0x9436,	// (0x00012cc2) signal_pane_g4_ParamLimits

0x9436,	// (0x00012cc2) signal_pane_g4

0x0e3e,	// (0x0000a6ca) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x0e3e,	// (0x0000a6ca) cell_ai5_widget_list_row_pane_t3

0x0fa5,	// (0x0000a831) cell_ituss_key_pane_t1_ParamLimits

0x0fa5,	// (0x0000a831) cell_ituss_key_pane_t1

0xa3fc,	// (0x00013c88) form_field_data_wide_pane_vc_t2_ParamLimits

0xa3fc,	// (0x00013c88) form_field_data_wide_pane_vc_t2

0xa410,	// (0x00013c9c) form_field_data_wide_pane_vc_t3_ParamLimits

0xa410,	// (0x00013c9c) form_field_data_wide_pane_vc_t3

0x0002,

0xf805,	// (0x00019091) form_field_data_wide_pane_vc_t_ParamLimits

0xf805,	// (0x00019091) form_field_data_wide_pane_vc_t

0xc428,	// (0x00015cb4) form_field_slider_wide_pane_vc_t3_ParamLimits

0xc428,	// (0x00015cb4) form_field_slider_wide_pane_vc_t3

0xc502,	// (0x00015d8e) form_field_popup_wide_pane_vc_t2_ParamLimits

0xc502,	// (0x00015d8e) form_field_popup_wide_pane_vc_t2

0xc519,	// (0x00015da5) form_field_popup_wide_pane_vc_t3_ParamLimits

0xc519,	// (0x00015da5) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaab,	// (0x00019337) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaab,	// (0x00019337) form_field_popup_wide_pane_vc_t

0x7b5e,	// (0x000113ea) aid_fshwr2_btn_pane_ParamLimits

0x7b6a,	// (0x000113f6) aid_fshwr2_syb_pane_ParamLimits

0x7b76,	// (0x00011402) aid_fshwr2_txt_pane_ParamLimits

0x73a9,	// (0x00010c35) fshwr2_bg_pane_ParamLimits

0x7b82,	// (0x0001140e) fshwr2_func_candi_pane_ParamLimits

0x7b97,	// (0x00011423) fshwr2_hwr_syb_pane_ParamLimits

0x7ba7,	// (0x00011433) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
