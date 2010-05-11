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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00054212 };

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
0x5245,	// (0x00059457) Screen

0x5251,	// (0x00059463) application_window_ParamLimits

0x5251,	// (0x00059463) application_window

0xec27,	// (0x00062e39) screen_g1

0x52ad,	// (0x000594bf) area_bottom_pane_ParamLimits

0x52ad,	// (0x000594bf) area_bottom_pane

0x536d,	// (0x0005957f) area_top_pane_ParamLimits

0x536d,	// (0x0005957f) area_top_pane

0x540b,	// (0x0005961d) main_pane_ParamLimits

0x540b,	// (0x0005961d) main_pane

0xec31,	// (0x00062e43) misc_graphics

0x8d75,	// (0x0005cf87) battery_pane_ParamLimits

0x8d75,	// (0x0005cf87) battery_pane

0x9a47,	// (0x0005dc59) bg_status_flat_pane_g8

0x9a4f,	// (0x0005dc61) bg_status_flat_pane_g9

0x8e3d,	// (0x0005d04f) context_pane_ParamLimits

0x8e3d,	// (0x0005d04f) context_pane

0x8f53,	// (0x0005d165) navi_pane_ParamLimits

0x8f53,	// (0x0005d165) navi_pane

0x8fd7,	// (0x0005d1e9) signal_pane_ParamLimits

0x8fd7,	// (0x0005d1e9) signal_pane

0x0008,

0xf87e,	// (0x00063a90) bg_status_flat_pane_g

0x9044,	// (0x0005d256) status_pane_g1_ParamLimits

0x9044,	// (0x0005d256) status_pane_g1

0x9058,	// (0x0005d26a) status_pane_g2_ParamLimits

0x9058,	// (0x0005d26a) status_pane_g2

0x9064,	// (0x0005d276) status_pane_g3_ParamLimits

0x9064,	// (0x0005d276) status_pane_g3

0x0004,

0xf7a5,	// (0x000639b7) status_pane_g_ParamLimits

0xf7a5,	// (0x000639b7) status_pane_g

0x9098,	// (0x0005d2aa) title_pane_ParamLimits

0x9098,	// (0x0005d2aa) title_pane

0x90d5,	// (0x0005d2e7) uni_indicator_pane_ParamLimits

0x90d5,	// (0x0005d2e7) uni_indicator_pane

0x8c99,	// (0x0005ceab) bg_list_pane_ParamLimits

0x8c99,	// (0x0005ceab) bg_list_pane

0x6d94,	// (0x0005afa6) find_pane

0x8cb9,	// (0x0005cecb) listscroll_app_pane_ParamLimits

0x8cb9,	// (0x0005cecb) listscroll_app_pane

0x8cc5,	// (0x0005ced7) listscroll_form_pane

0x6d9c,	// (0x0005afae) listscroll_gen_pane_ParamLimits

0x6d9c,	// (0x0005afae) listscroll_gen_pane

0x6db0,	// (0x0005afc2) listscroll_set_pane

0x6333,	// (0x0005a545) main_idle_act_pane

0x6b19,	// (0x0005ad2b) main_idle_trad_pane

0x6b19,	// (0x0005ad2b) main_list_empty_pane

0x8cdf,	// (0x0005cef1) main_midp_pane

0x8ceb,	// (0x0005cefd) main_pane_g1_ParamLimits

0x8ceb,	// (0x0005cefd) main_pane_g1

0x6dc6,	// (0x0005afd8) popup_ai_message_window_ParamLimits

0x6dc6,	// (0x0005afd8) popup_ai_message_window

0x6e6a,	// (0x0005b07c) popup_fep_china_uni_window_ParamLimits

0x6e6a,	// (0x0005b07c) popup_fep_china_uni_window

0x6ec4,	// (0x0005b0d6) popup_fep_japan_candidate_window_ParamLimits

0x6ec4,	// (0x0005b0d6) popup_fep_japan_candidate_window

0x6ee2,	// (0x0005b0f4) popup_fep_japan_predictive_window_ParamLimits

0x6ee2,	// (0x0005b0f4) popup_fep_japan_predictive_window

0x6f12,	// (0x0005b124) popup_find_window

0x6f1f,	// (0x0005b131) popup_grid_graphic_window_ParamLimits

0x6f1f,	// (0x0005b131) popup_grid_graphic_window

0x6f49,	// (0x0005b15b) popup_large_graphic_colour_window

0x6f6f,	// (0x0005b181) popup_menu_window_ParamLimits

0x6f6f,	// (0x0005b181) popup_menu_window

0x712b,	// (0x0005b33d) popup_note_image_window

0x7117,	// (0x0005b329) popup_note_wait_window_ParamLimits

0x7117,	// (0x0005b329) popup_note_wait_window

0x7117,	// (0x0005b329) popup_note_window_ParamLimits

0x7117,	// (0x0005b329) popup_note_window

0x7181,	// (0x0005b393) popup_query_code_window_ParamLimits

0x7181,	// (0x0005b393) popup_query_code_window

0x7195,	// (0x0005b3a7) popup_query_data_code_window_ParamLimits

0x7195,	// (0x0005b3a7) popup_query_data_code_window

0x71b2,	// (0x0005b3c4) popup_query_data_window_ParamLimits

0x71b2,	// (0x0005b3c4) popup_query_data_window

0x71ce,	// (0x0005b3e0) popup_query_sat_info_window_ParamLimits

0x71ce,	// (0x0005b3e0) popup_query_sat_info_window

0x7207,	// (0x0005b419) popup_snote_single_graphic_window_ParamLimits

0x7207,	// (0x0005b419) popup_snote_single_graphic_window

0x7207,	// (0x0005b419) popup_snote_single_text_window_ParamLimits

0x7207,	// (0x0005b419) popup_snote_single_text_window

0x721c,	// (0x0005b42e) popup_sub_window_general

0x734c,	// (0x0005b55e) popup_window_general_ParamLimits

0x734c,	// (0x0005b55e) popup_window_general

0x8cf9,	// (0x0005cf0b) power_save_pane

0x6c30,	// (0x0005ae42) control_pane_g1_ParamLimits

0x6c30,	// (0x0005ae42) control_pane_g1

0x6c57,	// (0x0005ae69) control_pane_g2_ParamLimits

0x6c57,	// (0x0005ae69) control_pane_g2

0x8c5c,	// (0x0005ce6e) control_pane_g3_ParamLimits

0x8c5c,	// (0x0005ce6e) control_pane_g3

0x0007,

0xf78d,	// (0x0006399f) control_pane_g_ParamLimits

0xf78d,	// (0x0006399f) control_pane_g

0x6ca1,	// (0x0005aeb3) control_pane_t1_ParamLimits

0x6ca1,	// (0x0005aeb3) control_pane_t1

0x6ced,	// (0x0005aeff) control_pane_t2_ParamLimits

0x6ced,	// (0x0005aeff) control_pane_t2

0x0002,

0xf79e,	// (0x000639b0) control_pane_t_ParamLimits

0xf79e,	// (0x000639b0) control_pane_t

0x8b81,	// (0x0005cd93) navi_navi_volume_pane_cp1

0x8b89,	// (0x0005cd9b) status_small_icon_pane

0x8b91,	// (0x0005cda3) status_small_pane_g1_ParamLimits

0x8b91,	// (0x0005cda3) status_small_pane_g1

0x8bc5,	// (0x0005cdd7) status_small_pane_g2_ParamLimits

0x8bc5,	// (0x0005cdd7) status_small_pane_g2

0x8bd1,	// (0x0005cde3) status_small_pane_g3_ParamLimits

0x8bd1,	// (0x0005cde3) status_small_pane_g3

0x8bdd,	// (0x0005cdef) status_small_pane_g4_ParamLimits

0x8bdd,	// (0x0005cdef) status_small_pane_g4

0x8be9,	// (0x0005cdfb) status_small_pane_g5_ParamLimits

0x8be9,	// (0x0005cdfb) status_small_pane_g5

0x8bf7,	// (0x0005ce09) status_small_pane_g6_ParamLimits

0x8bf7,	// (0x0005ce09) status_small_pane_g6

0x0007,

0xf77c,	// (0x0006398e) status_small_pane_g_ParamLimits

0xf77c,	// (0x0006398e) status_small_pane_g

0x8c26,	// (0x0005ce38) status_small_pane_t1

0x8c48,	// (0x0005ce5a) status_small_wait_pane_ParamLimits

0x8c48,	// (0x0005ce5a) status_small_wait_pane

0x6708,	// (0x0005a91a) aid_levels_signal_ParamLimits

0x6708,	// (0x0005a91a) aid_levels_signal

0x671a,	// (0x0005a92c) signal_pane_g1_ParamLimits

0x671a,	// (0x0005a92c) signal_pane_g1

0x672f,	// (0x0005a941) signal_pane_g2_ParamLimits

0x672f,	// (0x0005a941) signal_pane_g2

0x0003,

0xf70d,	// (0x0006391f) signal_pane_g_ParamLimits

0xf70d,	// (0x0006391f) signal_pane_g

0xf4cd,	// (0x000636df) context_pane_g1

0x564c,	// (0x0005985e) title_pane_g1

0x5676,	// (0x00059888) title_pane_t1

0xec47,	// (0x00062e59) title_pane_t2

0xec6d,	// (0x00062e7f) title_pane_t3

0x0002,

0xf557,	// (0x00063769) title_pane_t

0x90ed,	// (0x0005d2ff) aid_levels_battery_ParamLimits

0x90ed,	// (0x0005d2ff) aid_levels_battery

0x9101,	// (0x0005d313) battery_pane_g1_ParamLimits

0x9101,	// (0x0005d313) battery_pane_g1

0x9117,	// (0x0005d329) battery_pane_g2_ParamLimits

0x9117,	// (0x0005d329) battery_pane_g2

0x0001,

0xf7b0,	// (0x000639c2) battery_pane_g_ParamLimits

0xf7b0,	// (0x000639c2) battery_pane_g

0xa36b,	// (0x0005e57d) uni_indicator_pane_g1

0xa381,	// (0x0005e593) uni_indicator_pane_g2

0xa397,	// (0x0005e5a9) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x00063b38) uni_indicator_pane_g

0x3645,	// (0x00057857) navi_icon_pane_ParamLimits

0x3645,	// (0x00057857) navi_icon_pane

0x359a,	// (0x000577ac) navi_midp_pane

0x3661,	// (0x00057873) navi_navi_pane

0x366b,	// (0x0005787d) navi_text_pane_ParamLimits

0x366b,	// (0x0005787d) navi_text_pane

0xec27,	// (0x00062e39) status_small_wait_pane_g1

0xeebe,	// (0x000630d0) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x00063b33) status_small_wait_pane_g

0xa092,	// (0x0005e2a4) navi_navi_icon_text_pane

0xa09a,	// (0x0005e2ac) navi_navi_pane_g1_ParamLimits

0xa09a,	// (0x0005e2ac) navi_navi_pane_g1

0xa0ac,	// (0x0005e2be) navi_navi_pane_g2_ParamLimits

0xa0ac,	// (0x0005e2be) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x00063b01) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x00063b01) navi_navi_pane_g

0xa0be,	// (0x0005e2d0) navi_navi_tabs_pane

0xa0c7,	// (0x0005e2d9) navi_navi_text_pane

0xa092,	// (0x0005e2a4) navi_navi_volume_pane

0xa06e,	// (0x0005e280) navi_text_pane_t1

0xa062,	// (0x0005e274) navi_icon_pane_g1

0x9fb5,	// (0x0005e1c7) navi_navi_text_pane_t1

0x762c,	// (0x0005b83e) navi_navi_volume_pane_g1

0x7634,	// (0x0005b846) volume_small_pane

0x9f1b,	// (0x0005e12d) navi_navi_icon_text_pane_g1

0x9f23,	// (0x0005e135) navi_navi_icon_text_pane_t1

0x3661,	// (0x00057873) navi_tabs_2_long_pane

0x3661,	// (0x00057873) navi_tabs_2_pane

0x3661,	// (0x00057873) navi_tabs_3_long_pane

0x3661,	// (0x00057873) navi_tabs_3_pane

0x3661,	// (0x00057873) navi_tabs_4_pane

0x760c,	// (0x0005b81e) tabs_2_active_pane_ParamLimits

0x760c,	// (0x0005b81e) tabs_2_active_pane

0x761c,	// (0x0005b82e) tabs_2_passive_pane_ParamLimits

0x761c,	// (0x0005b82e) tabs_2_passive_pane

0x75da,	// (0x0005b7ec) tabs_3_active_pane_ParamLimits

0x75da,	// (0x0005b7ec) tabs_3_active_pane

0x75ea,	// (0x0005b7fc) tabs_3_passive_pane_ParamLimits

0x75ea,	// (0x0005b7fc) tabs_3_passive_pane

0x75fb,	// (0x0005b80d) tabs_3_passive_pane_cp_ParamLimits

0x75fb,	// (0x0005b80d) tabs_3_passive_pane_cp

0x7596,	// (0x0005b7a8) tabs_4_active_pane_ParamLimits

0x7596,	// (0x0005b7a8) tabs_4_active_pane

0x75a7,	// (0x0005b7b9) tabs_4_passive_pane_ParamLimits

0x75a7,	// (0x0005b7b9) tabs_4_passive_pane

0x75b8,	// (0x0005b7ca) tabs_4_passive_pane_cp_ParamLimits

0x75b8,	// (0x0005b7ca) tabs_4_passive_pane_cp

0x75c9,	// (0x0005b7db) tabs_4_passive_pane_cp2_ParamLimits

0x75c9,	// (0x0005b7db) tabs_4_passive_pane_cp2

0x7572,	// (0x0005b784) tabs_2_long_active_pane_ParamLimits

0x7572,	// (0x0005b784) tabs_2_long_active_pane

0x7584,	// (0x0005b796) tabs_2_long_passive_pane_ParamLimits

0x7584,	// (0x0005b796) tabs_2_long_passive_pane

0x752d,	// (0x0005b73f) tabs_3_long_active_pane_ParamLimits

0x752d,	// (0x0005b73f) tabs_3_long_active_pane

0x7546,	// (0x0005b758) tabs_3_long_passive_pane_ParamLimits

0x7546,	// (0x0005b758) tabs_3_long_passive_pane

0x7559,	// (0x0005b76b) tabs_3_long_passive_pane_cp_ParamLimits

0x7559,	// (0x0005b76b) tabs_3_long_passive_pane_cp

0x74d3,	// (0x0005b6e5) volume_small_pane_g1

0x74dc,	// (0x0005b6ee) volume_small_pane_g2

0x74e5,	// (0x0005b6f7) volume_small_pane_g3

0x74ee,	// (0x0005b700) volume_small_pane_g4

0x74f7,	// (0x0005b709) volume_small_pane_g5

0x7500,	// (0x0005b712) volume_small_pane_g6

0x7509,	// (0x0005b71b) volume_small_pane_g7

0x7512,	// (0x0005b724) volume_small_pane_g8

0x751b,	// (0x0005b72d) volume_small_pane_g9

0x7524,	// (0x0005b736) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x00063acd) volume_small_pane_g

0xec7f,	// (0x00062e91) bg_active_tab_pane_cp2_ParamLimits

0xec7f,	// (0x00062e91) bg_active_tab_pane_cp2

0x56de,	// (0x000598f0) tabs_3_active_pane_g1

0x56e6,	// (0x000598f8) tabs_3_active_pane_t1

0xec7f,	// (0x00062e91) bg_passive_tab_pane_cp2_ParamLimits

0xec7f,	// (0x00062e91) bg_passive_tab_pane_cp2

0x56de,	// (0x000598f0) tabs_3_passive_pane_g1

0x56e6,	// (0x000598f8) tabs_3_passive_pane_t1

0xec7f,	// (0x00062e91) bg_active_tab_pane_cp3_ParamLimits

0xec7f,	// (0x00062e91) bg_active_tab_pane_cp3

0x56f8,	// (0x0005990a) tabs_4_active_pane_g1

0x5700,	// (0x00059912) tabs_4_active_pane_t1

0xec7f,	// (0x00062e91) bg_passive_tab_pane_cp3_ParamLimits

0xec7f,	// (0x00062e91) bg_passive_tab_pane_cp3

0x56f8,	// (0x0005990a) tabs_4_1_passive_pane_g1

0x5700,	// (0x00059912) tabs_4_1_passive_pane_t1

0x8cdf,	// (0x0005cef1) list_highlight_pane_cp2

0xa5e0,	// (0x0005e7f2) list_set_pane_ParamLimits

0xa5e0,	// (0x0005e7f2) list_set_pane

0xa686,	// (0x0005e898) main_pane_set_t1_ParamLimits

0xa686,	// (0x0005e898) main_pane_set_t1

0xa6a6,	// (0x0005e8b8) main_pane_set_t2_ParamLimits

0xa6a6,	// (0x0005e8b8) main_pane_set_t2

0xa6ba,	// (0x0005e8cc) main_pane_set_t3_ParamLimits

0xa6ba,	// (0x0005e8cc) main_pane_set_t3

0xa6cc,	// (0x0005e8de) main_pane_set_t4_ParamLimits

0xa6cc,	// (0x0005e8de) main_pane_set_t4

0x0003,

0xf98b,	// (0x00063b9d) main_pane_set_t_ParamLimits

0xf98b,	// (0x00063b9d) main_pane_set_t

0xa6de,	// (0x0005e8f0) setting_code_pane

0xa6ea,	// (0x0005e8fc) setting_slider_graphic_pane

0xa6ea,	// (0x0005e8fc) setting_slider_pane

0xa6ea,	// (0x0005e8fc) setting_text_pane

0xa6ea,	// (0x0005e8fc) setting_volume_pane

0x5712,	// (0x00059924) volume_set_pane

0xec7f,	// (0x00062e91) bg_set_opt_pane_cp

0x571a,	// (0x0005992c) setting_slider_pane_t1

0x5733,	// (0x00059945) setting_slider_pane_t2

0x574d,	// (0x0005995f) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00063770) setting_slider_pane_t

0x5765,	// (0x00059977) slider_set_pane

0xec31,	// (0x00062e43) bg_set_opt_pane_cp2

0xec8d,	// (0x00062e9f) setting_slider_graphic_pane_g1

0x577b,	// (0x0005998d) setting_slider_graphic_pane_t1

0x578b,	// (0x0005999d) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00063777) setting_slider_graphic_pane_t

0x579b,	// (0x000599ad) slider_set_pane_cp

0xec31,	// (0x00062e43) input_focus_pane_cp1

0xa59f,	// (0x0005e7b1) list_set_text_pane

0xec27,	// (0x00062e39) setting_text_pane_g1

0xec31,	// (0x00062e43) input_focus_pane_cp2

0xec27,	// (0x00062e39) setting_code_pane_g1

0xec96,	// (0x00062ea8) setting_code_pane_t1

0x3426,	// (0x00057638) set_text_pane_t1_ParamLimits

0x3426,	// (0x00057638) set_text_pane_t1

0xf09a,	// (0x000632ac) set_opt_bg_pane_g1

0xf0a2,	// (0x000632b4) set_opt_bg_pane_g2

0xa579,	// (0x0005e78b) set_opt_bg_pane_g3

0xf0b2,	// (0x000632c4) set_opt_bg_pane_g4

0xf0ba,	// (0x000632cc) set_opt_bg_pane_g5

0xf0c2,	// (0x000632d4) set_opt_bg_pane_g6

0xa583,	// (0x0005e795) set_opt_bg_pane_g7

0xa58b,	// (0x0005e79d) set_opt_bg_pane_g8

0xa595,	// (0x0005e7a7) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x00063b8a) set_opt_bg_pane_g

0xa56c,	// (0x0005e77e) slider_set_pane_g1

0x76c9,	// (0x0005b8db) slider_set_pane_g2

0x0006,

0xf969,	// (0x00063b7b) slider_set_pane_g

0x763d,	// (0x0005b84f) volume_set_pane_g1

0x7645,	// (0x0005b857) volume_set_pane_g2

0x764d,	// (0x0005b85f) volume_set_pane_g3

0x7655,	// (0x0005b867) volume_set_pane_g4

0x765d,	// (0x0005b86f) volume_set_pane_g5

0x7665,	// (0x0005b877) volume_set_pane_g6

0x766d,	// (0x0005b87f) volume_set_pane_g7

0x7675,	// (0x0005b887) volume_set_pane_g8

0x767d,	// (0x0005b88f) volume_set_pane_g9

0x7685,	// (0x0005b897) volume_set_pane_g10

0x0009,

0xf941,	// (0x00063b53) volume_set_pane_g

0x57a3,	// (0x000599b5) indicator_pane_ParamLimits

0x57a3,	// (0x000599b5) indicator_pane

0x57af,	// (0x000599c1) main_idle_pane_g2_ParamLimits

0x57af,	// (0x000599c1) main_idle_pane_g2

0x57d7,	// (0x000599e9) main_pane_idle_g1_ParamLimits

0x57d7,	// (0x000599e9) main_pane_idle_g1

0xeca4,	// (0x00062eb6) popup_clock_digital_analogue_window_ParamLimits

0xeca4,	// (0x00062eb6) popup_clock_digital_analogue_window

0x57e4,	// (0x000599f6) soft_indicator_pane_ParamLimits

0x57e4,	// (0x000599f6) soft_indicator_pane

0x57f0,	// (0x00059a02) wallpaper_pane_ParamLimits

0x57f0,	// (0x00059a02) wallpaper_pane

0xec27,	// (0x00062e39) wallpaper_pane_g1

0x57fc,	// (0x00059a0e) indicator_pane_g1_ParamLimits

0x57fc,	// (0x00059a0e) indicator_pane_g1

0xaa08,	// (0x0005ec1a) navi_navi_icon_text_pane_srt_g1

0xecd2,	// (0x00062ee4) soft_indicator_pane_t1

0xecec,	// (0x00062efe) aid_ps_area_pane

0x5808,	// (0x00059a1a) aid_ps_clock_pane

0xecfd,	// (0x00062f0f) aid_ps_indicator_pane

0xed09,	// (0x00062f1b) indicator_ps_pane_ParamLimits

0xed09,	// (0x00062f1b) indicator_ps_pane

0xed18,	// (0x00062f2a) power_save_pane_g1_ParamLimits

0xed18,	// (0x00062f2a) power_save_pane_g1

0xed24,	// (0x00062f36) power_save_pane_g2_ParamLimits

0xed24,	// (0x00062f36) power_save_pane_g2

0x5261,	// (0x00059473) aid_navinavi_width_pane

0xecec,	// (0x00062efe) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0006377c) power_save_pane_g_ParamLimits

0xf56a,	// (0x0006377c) power_save_pane_g

0xed32,	// (0x00062f44) power_save_pane_t1_ParamLimits

0xed32,	// (0x00062f44) power_save_pane_t1

0x5808,	// (0x00059a1a) aid_ps_clock_pane_ParamLimits

0xecfd,	// (0x00062f0f) aid_ps_indicator_pane_ParamLimits

0xed44,	// (0x00062f56) power_save_pane_t4_ParamLimits

0xed44,	// (0x00062f56) power_save_pane_t4

0x0001,

0xf56f,	// (0x00063781) power_save_pane_t_ParamLimits

0xf56f,	// (0x00063781) power_save_pane_t

0xed6e,	// (0x00062f80) power_save_t3_ParamLimits

0xed6e,	// (0x00062f80) power_save_t3

0xed59,	// (0x00062f6b) power_save_t2_ParamLimits

0xed59,	// (0x00062f6b) power_save_t2

0xed83,	// (0x00062f95) indicator_ps_pane_g1

0x5816,	// (0x00059a28) ai_gene_pane_ParamLimits

0x5816,	// (0x00059a28) ai_gene_pane

0x5822,	// (0x00059a34) ai_links_pane_ParamLimits

0x5822,	// (0x00059a34) ai_links_pane

0x582e,	// (0x00059a40) indicator_pane_cp1_ParamLimits

0x582e,	// (0x00059a40) indicator_pane_cp1

0x583a,	// (0x00059a4c) main_pane_idle_g1_cp_ParamLimits

0x583a,	// (0x00059a4c) main_pane_idle_g1_cp

0x5846,	// (0x00059a58) popup_ai_links_title_window

0x584f,	// (0x00059a61) soft_indicator_pane_cp1_ParamLimits

0x584f,	// (0x00059a61) soft_indicator_pane_cp1

0xa359,	// (0x0005e56b) ai_links_pane_g1

0xa362,	// (0x0005e574) grid_ai_links_pane

0xa33c,	// (0x0005e54e) ai_gene_pane_1

0xa347,	// (0x0005e559) ai_gene_pane_2

0xa350,	// (0x0005e562) list_highlight_pane_cp4

0xa320,	// (0x0005e532) cell_ai_link_pane_ParamLimits

0xa320,	// (0x0005e532) cell_ai_link_pane

0xa318,	// (0x0005e52a) cell_ai_link_pane_g1

0xeebe,	// (0x000630d0) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x00063b2e) cell_ai_link_pane_g

0xec31,	// (0x00062e43) grid_highlight_cp2

0xec31,	// (0x00062e43) bg_popup_sub_pane_cp1

0xed9a,	// (0x00062fac) popup_ai_links_title_window_t1

0xa268,	// (0x0005e47a) ai_gene_pane_1_g1_ParamLimits

0xa268,	// (0x0005e47a) ai_gene_pane_1_g1

0xa274,	// (0x0005e486) ai_gene_pane_1_g2_ParamLimits

0xa274,	// (0x0005e486) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x00063b24) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x00063b24) ai_gene_pane_1_g

0xa281,	// (0x0005e493) ai_gene_pane_1_t1_ParamLimits

0xa281,	// (0x0005e493) ai_gene_pane_1_t1

0xa2b5,	// (0x0005e4c7) grid_ai_soft_ind_pane

0xa253,	// (0x0005e465) ai_gene_pane_2_t1_ParamLimits

0xa253,	// (0x0005e465) ai_gene_pane_2_t1

0x585b,	// (0x00059a6d) main_pane_empty_t1_ParamLimits

0x585b,	// (0x00059a6d) main_pane_empty_t1

0x5873,	// (0x00059a85) main_pane_empty_t2_ParamLimits

0x5873,	// (0x00059a85) main_pane_empty_t2

0x5888,	// (0x00059a9a) main_pane_empty_t3_ParamLimits

0x5888,	// (0x00059a9a) main_pane_empty_t3

0x589a,	// (0x00059aac) main_pane_empty_t4_ParamLimits

0x589a,	// (0x00059aac) main_pane_empty_t4

0x58ac,	// (0x00059abe) main_pane_empty_t5_ParamLimits

0x58ac,	// (0x00059abe) main_pane_empty_t5

0x0004,

0xf574,	// (0x00063786) main_pane_empty_t_ParamLimits

0xf574,	// (0x00063786) main_pane_empty_t

0xf0eb,	// (0x000632fd) bg_popup_window_pane_ParamLimits

0xf0eb,	// (0x000632fd) bg_popup_window_pane

0x9fc3,	// (0x0005e1d5) find_popup_pane_cp2_ParamLimits

0x9fc3,	// (0x0005e1d5) find_popup_pane_cp2

0x9fcf,	// (0x0005e1e1) heading_pane_ParamLimits

0x9fcf,	// (0x0005e1e1) heading_pane

0xec31,	// (0x00062e43) bg_popup_sub_pane

0x9f3d,	// (0x0005e14f) bg_popup_window_pane_g1_ParamLimits

0x9f3d,	// (0x0005e14f) bg_popup_window_pane_g1

0x9f49,	// (0x0005e15b) bg_popup_window_pane_g2_ParamLimits

0x9f49,	// (0x0005e15b) bg_popup_window_pane_g2

0x9f55,	// (0x0005e167) bg_popup_window_pane_g3_ParamLimits

0x9f55,	// (0x0005e167) bg_popup_window_pane_g3

0x9f61,	// (0x0005e173) bg_popup_window_pane_g4_ParamLimits

0x9f61,	// (0x0005e173) bg_popup_window_pane_g4

0x9f6d,	// (0x0005e17f) bg_popup_window_pane_g5_ParamLimits

0x9f6d,	// (0x0005e17f) bg_popup_window_pane_g5

0x9f79,	// (0x0005e18b) bg_popup_window_pane_g6_ParamLimits

0x9f79,	// (0x0005e18b) bg_popup_window_pane_g6

0x9f85,	// (0x0005e197) bg_popup_window_pane_g7_ParamLimits

0x9f85,	// (0x0005e197) bg_popup_window_pane_g7

0x9f91,	// (0x0005e1a3) bg_popup_window_pane_g8_ParamLimits

0x9f91,	// (0x0005e1a3) bg_popup_window_pane_g8

0x9f9d,	// (0x0005e1af) bg_popup_window_pane_g9_ParamLimits

0x9f9d,	// (0x0005e1af) bg_popup_window_pane_g9

0x9fa9,	// (0x0005e1bb) bg_popup_window_pane_g10_ParamLimits

0x9fa9,	// (0x0005e1bb) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x00063aec) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x00063aec) bg_popup_window_pane_g

0x9ed2,	// (0x0005e0e4) bg_popup_heading_pane_ParamLimits

0x9ed2,	// (0x0005e0e4) bg_popup_heading_pane

0x77d0,	// (0x0005b9e2) tabs_4_passive_pane_cp_srt_ParamLimits

0x77d0,	// (0x0005b9e2) tabs_4_passive_pane_cp_srt

0x77e2,	// (0x0005b9f4) tabs_4_passive_pane_srt_ParamLimits

0x9ee6,	// (0x0005e0f8) heading_pane_g2

0x77e2,	// (0x0005b9f4) tabs_4_passive_pane_srt

0x8cdf,	// (0x0005cef1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8cdf,	// (0x0005cef1) bg_passive_tab_pane_cp3_srt

0x9eee,	// (0x0005e100) heading_pane_t1_ParamLimits

0x9eee,	// (0x0005e100) heading_pane_t1

0x9f05,	// (0x0005e117) heading_pane_t2_ParamLimits

0x9f05,	// (0x0005e117) heading_pane_t2

0x0001,

0xf8d5,	// (0x00063ae7) heading_pane_t_ParamLimits

0xf8d5,	// (0x00063ae7) heading_pane_t

0x9a0f,	// (0x0005dc21) bg_popup_heading_pane_g1

0x9abe,	// (0x0005dcd0) bg_popup_heading_pane_g2

0x9ac8,	// (0x0005dcda) bg_popup_heading_pane_g3

0x9ad2,	// (0x0005dce4) bg_popup_heading_pane_g4

0x9adc,	// (0x0005dcee) bg_popup_heading_pane_g5

0x9ae6,	// (0x0005dcf8) bg_popup_heading_pane_g6

0x9aee,	// (0x0005dd00) bg_popup_heading_pane_g7

0x9af6,	// (0x0005dd08) bg_popup_heading_pane_g8

0x9b00,	// (0x0005dd12) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x00063aa3) bg_popup_heading_pane_g

0x91ec,	// (0x0005d3fe) bg_popup_sub_pane_g1

0x91fc,	// (0x0005d40e) bg_popup_sub_pane_g2

0x91f4,	// (0x0005d406) bg_popup_sub_pane_g3

0x920c,	// (0x0005d41e) bg_popup_sub_pane_g4

0x9204,	// (0x0005d416) bg_popup_sub_pane_g5

0x9214,	// (0x0005d426) bg_popup_sub_pane_g6

0x921c,	// (0x0005d42e) bg_popup_sub_pane_g7

0x922c,	// (0x0005d43e) bg_popup_sub_pane_g8

0x9224,	// (0x0005d436) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x00063a7d) bg_popup_sub_pane_g

0xeda9,	// (0x00062fbb) bg_popup_window_pane_cp5_ParamLimits

0xeda9,	// (0x00062fbb) bg_popup_window_pane_cp5

0xedc5,	// (0x00062fd7) popup_note_window_g1_ParamLimits

0xedc5,	// (0x00062fd7) popup_note_window_g1

0xedd1,	// (0x00062fe3) popup_note_window_t1_ParamLimits

0xedd1,	// (0x00062fe3) popup_note_window_t1

0xede7,	// (0x00062ff9) popup_note_window_t2_ParamLimits

0xede7,	// (0x00062ff9) popup_note_window_t2

0xedfd,	// (0x0006300f) popup_note_window_t3_ParamLimits

0xedfd,	// (0x0006300f) popup_note_window_t3

0xee13,	// (0x00063025) popup_note_window_t4_ParamLimits

0xee13,	// (0x00063025) popup_note_window_t4

0xee3b,	// (0x0006304d) popup_note_window_t5_ParamLimits

0xee3b,	// (0x0006304d) popup_note_window_t5

0x0004,

0xf57f,	// (0x00063791) popup_note_window_t_ParamLimits

0xf57f,	// (0x00063791) popup_note_window_t

0xee5f,	// (0x00063071) bg_popup_window_pane_cp6_ParamLimits

0xee5f,	// (0x00063071) bg_popup_window_pane_cp6

0x998b,	// (0x0005db9d) popup_note_image_window_g1_ParamLimits

0x998b,	// (0x0005db9d) popup_note_image_window_g1

0x9997,	// (0x0005dba9) popup_note_image_window_g2_ParamLimits

0x9997,	// (0x0005dba9) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x00063a71) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x00063a71) popup_note_image_window_g

0x99b0,	// (0x0005dbc2) popup_note_image_window_t1_ParamLimits

0x99b0,	// (0x0005dbc2) popup_note_image_window_t1

0x99c9,	// (0x0005dbdb) popup_note_image_window_t2_ParamLimits

0x99c9,	// (0x0005dbdb) popup_note_image_window_t2

0x99e2,	// (0x0005dbf4) popup_note_image_window_t3_ParamLimits

0x99e2,	// (0x0005dbf4) popup_note_image_window_t3

0x0002,

0xf864,	// (0x00063a76) popup_note_image_window_t_ParamLimits

0xf864,	// (0x00063a76) popup_note_image_window_t

0x9854,	// (0x0005da66) bg_popup_window_pane_cp7_ParamLimits

0x9854,	// (0x0005da66) bg_popup_window_pane_cp7

0x9884,	// (0x0005da96) popup_note_wait_window_g1_ParamLimits

0x9884,	// (0x0005da96) popup_note_wait_window_g1

0x9890,	// (0x0005daa2) popup_note_wait_window_g2_ParamLimits

0x9890,	// (0x0005daa2) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x00063a5f) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x00063a5f) popup_note_wait_window_g

0x98a8,	// (0x0005daba) popup_note_wait_window_t1_ParamLimits

0x98a8,	// (0x0005daba) popup_note_wait_window_t1

0x98cf,	// (0x0005dae1) popup_note_wait_window_t2_ParamLimits

0x98cf,	// (0x0005dae1) popup_note_wait_window_t2

0x98ec,	// (0x0005dafe) popup_note_wait_window_t3_ParamLimits

0x98ec,	// (0x0005dafe) popup_note_wait_window_t3

0x98ff,	// (0x0005db11) popup_note_wait_window_t4_ParamLimits

0x98ff,	// (0x0005db11) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x00063a66) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x00063a66) popup_note_wait_window_t

0x9924,	// (0x0005db36) wait_bar_pane_ParamLimits

0x9924,	// (0x0005db36) wait_bar_pane

0xec31,	// (0x00062e43) wait_anim_pane

0xec31,	// (0x00062e43) wait_border_pane

0xec27,	// (0x00062e39) wait_anim_pane_g1

0xec27,	// (0x00062e39) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0006391a) wait_anim_pane_g

0x9800,	// (0x0005da12) wait_border_pane_g1

0x980b,	// (0x0005da1d) wait_border_pane_g2

0x9814,	// (0x0005da26) wait_border_pane_g3

0x0002,

0xf846,	// (0x00063a58) wait_border_pane_g

0x966b,	// (0x0005d87d) bg_popup_window_pane_cp16_ParamLimits

0x966b,	// (0x0005d87d) bg_popup_window_pane_cp16

0x976b,	// (0x0005d97d) indicator_popup_pane_cp4_ParamLimits

0x976b,	// (0x0005d97d) indicator_popup_pane_cp4

0x977f,	// (0x0005d991) popup_query_data_window_t1_ParamLimits

0x977f,	// (0x0005d991) popup_query_data_window_t1

0x9791,	// (0x0005d9a3) popup_query_data_window_t2_ParamLimits

0x9791,	// (0x0005d9a3) popup_query_data_window_t2

0x97aa,	// (0x0005d9bc) popup_query_data_window_t3_ParamLimits

0x97aa,	// (0x0005d9bc) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x00063a51) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x00063a51) popup_query_data_window_t

0x97c4,	// (0x0005d9d6) query_popup_data_pane_ParamLimits

0x97c4,	// (0x0005d9d6) query_popup_data_pane

0x97d8,	// (0x0005d9ea) query_popup_data_pane_cp1_ParamLimits

0x97d8,	// (0x0005d9ea) query_popup_data_pane_cp1

0x966b,	// (0x0005d87d) bg_popup_window_pane_cp10_ParamLimits

0x966b,	// (0x0005d87d) bg_popup_window_pane_cp10

0x969d,	// (0x0005d8af) indicator_popup_pane_ParamLimits

0x969d,	// (0x0005d8af) indicator_popup_pane

0x96bf,	// (0x0005d8d1) popup_query_code_window_t1_ParamLimits

0x96bf,	// (0x0005d8d1) popup_query_code_window_t1

0x96d9,	// (0x0005d8eb) popup_query_code_window_t2_ParamLimits

0x96d9,	// (0x0005d8eb) popup_query_code_window_t2

0x9722,	// (0x0005d934) popup_query_code_window_t3_ParamLimits

0x9722,	// (0x0005d934) popup_query_code_window_t3

0x0002,

0xf838,	// (0x00063a4a) popup_query_code_window_t_ParamLimits

0xf838,	// (0x00063a4a) popup_query_code_window_t

0x9751,	// (0x0005d963) query_popup_pane_ParamLimits

0x9751,	// (0x0005d963) query_popup_pane

0xee5f,	// (0x00063071) bg_popup_window_pane_cp15_ParamLimits

0xee5f,	// (0x00063071) bg_popup_window_pane_cp15

0x58c0,	// (0x00059ad2) indicator_popup_pane_cp1_ParamLimits

0x58c0,	// (0x00059ad2) indicator_popup_pane_cp1

0x58d3,	// (0x00059ae5) indicator_popup_pane_cp2_ParamLimits

0x58d3,	// (0x00059ae5) indicator_popup_pane_cp2

0x58e6,	// (0x00059af8) popup_query_data_code_window_g1_ParamLimits

0x58e6,	// (0x00059af8) popup_query_data_code_window_g1

0xee7d,	// (0x0006308f) popup_query_data_code_window_t1_ParamLimits

0xee7d,	// (0x0006308f) popup_query_data_code_window_t1

0xee8f,	// (0x000630a1) popup_query_data_code_window_t2_ParamLimits

0xee8f,	// (0x000630a1) popup_query_data_code_window_t2

0x58f9,	// (0x00059b0b) popup_query_data_code_window_t3_ParamLimits

0x58f9,	// (0x00059b0b) popup_query_data_code_window_t3

0x590f,	// (0x00059b21) popup_query_data_code_window_t4_ParamLimits

0x590f,	// (0x00059b21) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0006379c) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0006379c) popup_query_data_code_window_t

0x73b6,	// (0x0005b5c8) list_single_midp_graphic_pane_g3

0x5927,	// (0x00059b39) query_popup_data_pane_cp2_ParamLimits

0x593a,	// (0x00059b4c) query_popup_pane_cp2_ParamLimits

0x593a,	// (0x00059b4c) query_popup_pane_cp2

0xec31,	// (0x00062e43) bg_popup_window_pane_cp11

0x9663,	// (0x0005d875) heading_pane_cp5

0xeeeb,	// (0x000630fd) listscroll_popup_info_pane

0xec31,	// (0x00062e43) input_focus_pane_cp3

0xeea1,	// (0x000630b3) query_popup_pane_t1

0xeeaf,	// (0x000630c1) list_popup_info_pane_ParamLimits

0xeeaf,	// (0x000630c1) list_popup_info_pane

0xeebe,	// (0x000630d0) listscroll_popup_info_pane_g1

0xeec6,	// (0x000630d8) scroll_pane_cp7

0x594d,	// (0x00059b5f) popup_info_list_pane_t1_ParamLimits

0x594d,	// (0x00059b5f) popup_info_list_pane_t1

0x5967,	// (0x00059b79) popup_info_list_pane_t2_ParamLimits

0x5967,	// (0x00059b79) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000637a5) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000637a5) popup_info_list_pane_t

0xec31,	// (0x00062e43) bg_popup_window_pane_cp12

0xab89,	// (0x0005ed9b) find_popup_pane

0xec7f,	// (0x00062e91) bg_popup_window_pane_cp3

0xeed0,	// (0x000630e2) heading_pane_cp3

0xeedc,	// (0x000630ee) listscroll_popup_graphic_pane

0xec31,	// (0x00062e43) bg_popup_window_pane_cp4

0x59d1,	// (0x00059be3) heading_pane_cp4

0xeeeb,	// (0x000630fd) listscroll_popup_colour_pane

0x59db,	// (0x00059bed) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x59db,	// (0x00059bed) cell_large_graphic_colour_none_popup_pane

0x59ef,	// (0x00059c01) grid_large_graphic_colour_popup_pane_ParamLimits

0x59ef,	// (0x00059c01) grid_large_graphic_colour_popup_pane

0x5a17,	// (0x00059c29) listscroll_popup_colour_pane_g1_ParamLimits

0x5a17,	// (0x00059c29) listscroll_popup_colour_pane_g1

0x5a2e,	// (0x00059c40) listscroll_popup_colour_pane_g2_ParamLimits

0x5a2e,	// (0x00059c40) listscroll_popup_colour_pane_g2

0x5a45,	// (0x00059c57) listscroll_popup_colour_pane_g3_ParamLimits

0x5a45,	// (0x00059c57) listscroll_popup_colour_pane_g3

0x5a55,	// (0x00059c67) listscroll_popup_colour_pane_g4_ParamLimits

0x5a55,	// (0x00059c67) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000637aa) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000637aa) listscroll_popup_colour_pane_g

0xeef3,	// (0x00063105) scroll_pane_cp6_ParamLimits

0xeef3,	// (0x00063105) scroll_pane_cp6

0x5a65,	// (0x00059c77) cell_large_graphic_colour_popup_pane_ParamLimits

0x5a65,	// (0x00059c77) cell_large_graphic_colour_popup_pane

0x5a84,	// (0x00059c96) cell_large_graphic_colour_none_popup_pane_t1

0xec31,	// (0x00062e43) grid_highlight_pane_cp5

0xef05,	// (0x00063117) cell_large_graphic_colour_popup_pane_g1

0xef0d,	// (0x0006311f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000637b3) cell_large_graphic_colour_popup_pane_g

0xef15,	// (0x00063127) cell_large_graphic_colour_popup_pane_g2_copy1

0xef1e,	// (0x00063130) grid_highlight_pane_cp4

0xef26,	// (0x00063138) bg_popup_window_pane_cp8_ParamLimits

0xef26,	// (0x00063138) bg_popup_window_pane_cp8

0x5a93,	// (0x00059ca5) popup_snote_single_text_window_g1_ParamLimits

0x5a93,	// (0x00059ca5) popup_snote_single_text_window_g1

0x5aa5,	// (0x00059cb7) popup_snote_single_text_window_t1_ParamLimits

0x5aa5,	// (0x00059cb7) popup_snote_single_text_window_t1

0x5ab8,	// (0x00059cca) popup_snote_single_text_window_t2_ParamLimits

0x5ab8,	// (0x00059cca) popup_snote_single_text_window_t2

0x5acb,	// (0x00059cdd) popup_snote_single_text_window_t3_ParamLimits

0x5acb,	// (0x00059cdd) popup_snote_single_text_window_t3

0x5b04,	// (0x00059d16) popup_snote_single_text_window_t4_ParamLimits

0x5b04,	// (0x00059d16) popup_snote_single_text_window_t4

0x5b38,	// (0x00059d4a) popup_snote_single_text_window_t5_ParamLimits

0x5b38,	// (0x00059d4a) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000637b8) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000637b8) popup_snote_single_text_window_t

0xef41,	// (0x00063153) bg_popup_window_pane_cp9_ParamLimits

0xef41,	// (0x00063153) bg_popup_window_pane_cp9

0x5a93,	// (0x00059ca5) popup_snote_single_graphic_window_g1_ParamLimits

0x5a93,	// (0x00059ca5) popup_snote_single_graphic_window_g1

0xef4f,	// (0x00063161) popup_snote_single_graphic_window_g2_ParamLimits

0xef4f,	// (0x00063161) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000637c3) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000637c3) popup_snote_single_graphic_window_g

0xef5b,	// (0x0006316d) popup_snote_single_graphic_window_t1_ParamLimits

0xef5b,	// (0x0006316d) popup_snote_single_graphic_window_t1

0xef6e,	// (0x00063180) popup_snote_single_graphic_window_t2_ParamLimits

0xef6e,	// (0x00063180) popup_snote_single_graphic_window_t2

0x5b67,	// (0x00059d79) popup_snote_single_graphic_window_t3_ParamLimits

0x5b67,	// (0x00059d79) popup_snote_single_graphic_window_t3

0x5ba0,	// (0x00059db2) popup_snote_single_graphic_window_t4_ParamLimits

0x5ba0,	// (0x00059db2) popup_snote_single_graphic_window_t4

0x5bd4,	// (0x00059de6) popup_snote_single_graphic_window_t5_ParamLimits

0x5bd4,	// (0x00059de6) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000637c8) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000637c8) popup_snote_single_graphic_window_t

0xa966,	// (0x0005eb78) grid_graphic_popup_pane_ParamLimits

0xa966,	// (0x0005eb78) grid_graphic_popup_pane

0xa98e,	// (0x0005eba0) listscroll_popup_graphic_pane_g1_ParamLimits

0xa98e,	// (0x0005eba0) listscroll_popup_graphic_pane_g1

0xa9a2,	// (0x0005ebb4) listscroll_popup_graphic_pane_g2_ParamLimits

0xa9a2,	// (0x0005ebb4) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x00063bc7) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x00063bc7) listscroll_popup_graphic_pane_g

0xa9b6,	// (0x0005ebc8) scroll_pane_cp5

0xa903,	// (0x0005eb15) cell_graphic_popup_pane_ParamLimits

0xa903,	// (0x0005eb15) cell_graphic_popup_pane

0xa8e4,	// (0x0005eaf6) cell_graphic_popup_pane_g1

0xa8ec,	// (0x0005eafe) cell_graphic_popup_pane_g2

0xef15,	// (0x00063127) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x00063bc0) cell_graphic_popup_pane_g

0xa8f5,	// (0x0005eb07) cell_graphic_popup_pane_t2

0xef1e,	// (0x00063130) grid_highlight_pane_cp3

0xef93,	// (0x000631a5) list_gen_pane_ParamLimits

0xef93,	// (0x000631a5) list_gen_pane

0xefbb,	// (0x000631cd) scroll_pane

0xa83c,	// (0x0005ea4e) bg_list_pane_g1_ParamLimits

0xa83c,	// (0x0005ea4e) bg_list_pane_g1

0xa859,	// (0x0005ea6b) bg_list_pane_g2_ParamLimits

0xa859,	// (0x0005ea6b) bg_list_pane_g2

0xa86e,	// (0x0005ea80) bg_list_pane_g3_ParamLimits

0xa86e,	// (0x0005ea80) bg_list_pane_g3

0xa882,	// (0x0005ea94) bg_list_pane_g4_ParamLimits

0xa882,	// (0x0005ea94) bg_list_pane_g4

0xa896,	// (0x0005eaa8) bg_list_pane_g5_ParamLimits

0xa896,	// (0x0005eaa8) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x00063bb5) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x00063bb5) bg_list_pane_g

0x7773,	// (0x0005b985) list_double2_graphic_large_graphic_pane_ParamLimits

0x7773,	// (0x0005b985) list_double2_graphic_large_graphic_pane

0x7773,	// (0x0005b985) list_double2_graphic_pane_ParamLimits

0x7773,	// (0x0005b985) list_double2_graphic_pane

0x7773,	// (0x0005b985) list_double2_large_graphic_pane_ParamLimits

0x7773,	// (0x0005b985) list_double2_large_graphic_pane

0x7773,	// (0x0005b985) list_double2_pane_ParamLimits

0x7773,	// (0x0005b985) list_double2_pane

0x7773,	// (0x0005b985) list_double_graphic_heading_pane_ParamLimits

0x7773,	// (0x0005b985) list_double_graphic_heading_pane

0x7773,	// (0x0005b985) list_double_graphic_pane_ParamLimits

0x7773,	// (0x0005b985) list_double_graphic_pane

0x7773,	// (0x0005b985) list_double_heading_pane_ParamLimits

0x7773,	// (0x0005b985) list_double_heading_pane

0x7773,	// (0x0005b985) list_double_large_graphic_pane_ParamLimits

0x7773,	// (0x0005b985) list_double_large_graphic_pane

0x7773,	// (0x0005b985) list_double_number_pane_ParamLimits

0x7773,	// (0x0005b985) list_double_number_pane

0x7773,	// (0x0005b985) list_double_pane_ParamLimits

0x7773,	// (0x0005b985) list_double_pane

0x7773,	// (0x0005b985) list_double_time_pane_ParamLimits

0x7773,	// (0x0005b985) list_double_time_pane

0x7773,	// (0x0005b985) list_setting_number_pane_ParamLimits

0x7773,	// (0x0005b985) list_setting_number_pane

0x7773,	// (0x0005b985) list_setting_pane_ParamLimits

0x7773,	// (0x0005b985) list_setting_pane

0xa7bf,	// (0x0005e9d1) list_single_2graphic_pane_ParamLimits

0xa7bf,	// (0x0005e9d1) list_single_2graphic_pane

0xa7bf,	// (0x0005e9d1) list_single_graphic_heading_pane_ParamLimits

0xa7bf,	// (0x0005e9d1) list_single_graphic_heading_pane

0xa7bf,	// (0x0005e9d1) list_single_graphic_pane_ParamLimits

0xa7bf,	// (0x0005e9d1) list_single_graphic_pane

0xa7bf,	// (0x0005e9d1) list_single_heading_pane_ParamLimits

0xa7bf,	// (0x0005e9d1) list_single_heading_pane

0xa81a,	// (0x0005ea2c) list_single_large_graphic_pane_ParamLimits

0xa81a,	// (0x0005ea2c) list_single_large_graphic_pane

0xa7bf,	// (0x0005e9d1) list_single_number_heading_pane_ParamLimits

0xa7bf,	// (0x0005e9d1) list_single_number_heading_pane

0xa7bf,	// (0x0005e9d1) list_single_number_pane_ParamLimits

0xa7bf,	// (0x0005e9d1) list_single_number_pane

0xa7bf,	// (0x0005e9d1) list_single_pane_ParamLimits

0xa7bf,	// (0x0005e9d1) list_single_pane

0xec31,	// (0x00062e43) list_highlight_pane_cp1

0x5c19,	// (0x00059e2b) list_single_pane_g1_ParamLimits

0x5c19,	// (0x00059e2b) list_single_pane_g1

0x5c25,	// (0x00059e37) list_single_pane_g2_ParamLimits

0x5c25,	// (0x00059e37) list_single_pane_g2

0x0001,

0xf5d2,	// (0x000637e4) list_single_pane_g_ParamLimits

0xf5d2,	// (0x000637e4) list_single_pane_g

0x775d,	// (0x0005b96f) list_single_pane_t1_ParamLimits

0x775d,	// (0x0005b96f) list_single_pane_t1

0x5c19,	// (0x00059e2b) list_single_number_pane_g1_ParamLimits

0x5c19,	// (0x00059e2b) list_single_number_pane_g1

0x5c25,	// (0x00059e37) list_single_number_pane_g2_ParamLimits

0x5c25,	// (0x00059e37) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x000637e4) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x000637e4) list_single_number_pane_g

0x768d,	// (0x0005b89f) list_single_number_pane_t1_ParamLimits

0x768d,	// (0x0005b89f) list_single_number_pane_t1

0x76a3,	// (0x0005b8b5) list_single_number_pane_t2_ParamLimits

0x76a3,	// (0x0005b8b5) list_single_number_pane_t2

0x0001,

0xf964,	// (0x00063b76) list_single_number_pane_t_ParamLimits

0xf964,	// (0x00063b76) list_single_number_pane_t

0x5c0d,	// (0x00059e1f) list_single_graphic_pane_g1_ParamLimits

0x5c0d,	// (0x00059e1f) list_single_graphic_pane_g1

0x5c19,	// (0x00059e2b) list_single_graphic_pane_g2_ParamLimits

0x5c19,	// (0x00059e2b) list_single_graphic_pane_g2

0x5c25,	// (0x00059e37) list_single_graphic_pane_g3_ParamLimits

0x5c25,	// (0x00059e37) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000637d3) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000637d3) list_single_graphic_pane_g

0x5c31,	// (0x00059e43) list_single_graphic_pane_t1_ParamLimits

0x5c31,	// (0x00059e43) list_single_graphic_pane_t1

0x5c47,	// (0x00059e59) list_single_heading_pane_g1_ParamLimits

0x5c47,	// (0x00059e59) list_single_heading_pane_g1

0x5c25,	// (0x00059e37) list_single_heading_pane_g2_ParamLimits

0x5c25,	// (0x00059e37) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000637da) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000637da) list_single_heading_pane_g

0x5c5a,	// (0x00059e6c) list_single_heading_pane_t1_ParamLimits

0x5c5a,	// (0x00059e6c) list_single_heading_pane_t1

0x5c70,	// (0x00059e82) list_single_heading_pane_t2_ParamLimits

0x5c70,	// (0x00059e82) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000637df) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000637df) list_single_heading_pane_t

0x5c19,	// (0x00059e2b) list_single_number_heading_pane_g1_ParamLimits

0x5c19,	// (0x00059e2b) list_single_number_heading_pane_g1

0x5c25,	// (0x00059e37) list_single_number_heading_pane_g2_ParamLimits

0x5c25,	// (0x00059e37) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x000637e4) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x000637e4) list_single_number_heading_pane_g

0x5c82,	// (0x00059e94) list_single_number_heading_pane_t1_ParamLimits

0x5c82,	// (0x00059e94) list_single_number_heading_pane_t1

0x5c98,	// (0x00059eaa) list_single_number_heading_pane_t2_ParamLimits

0x5c98,	// (0x00059eaa) list_single_number_heading_pane_t2

0x5caa,	// (0x00059ebc) list_single_number_heading_pane_t3_ParamLimits

0x5caa,	// (0x00059ebc) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x000637e9) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x000637e9) list_single_number_heading_pane_t

0x5cbc,	// (0x00059ece) list_single_graphic_heading_pane_g1_ParamLimits

0x5cbc,	// (0x00059ece) list_single_graphic_heading_pane_g1

0x5cd2,	// (0x00059ee4) list_single_graphic_heading_pane_g4_ParamLimits

0x5cd2,	// (0x00059ee4) list_single_graphic_heading_pane_g4

0x5c25,	// (0x00059e37) list_single_graphic_heading_pane_g5_ParamLimits

0x5c25,	// (0x00059e37) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x000637f0) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x000637f0) list_single_graphic_heading_pane_g

0x5c82,	// (0x00059e94) list_single_graphic_heading_pane_t1_ParamLimits

0x5c82,	// (0x00059e94) list_single_graphic_heading_pane_t1

0x5ce3,	// (0x00059ef5) list_single_graphic_heading_pane_t2_ParamLimits

0x5ce3,	// (0x00059ef5) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x000637f7) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x000637f7) list_single_graphic_heading_pane_t

0x5cfb,	// (0x00059f0d) list_single_large_graphic_pane_g1_ParamLimits

0x5cfb,	// (0x00059f0d) list_single_large_graphic_pane_g1

0x4636,	// (0x00058848) list_single_large_graphic_pane_g2_ParamLimits

0x4636,	// (0x00058848) list_single_large_graphic_pane_g2

0x4642,	// (0x00058854) list_single_large_graphic_pane_g3_ParamLimits

0x4642,	// (0x00058854) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x000637fc) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x000637fc) list_single_large_graphic_pane_g

0x980b,	// (0x0005da1d) wait_border_pane_g2_copy1

0x5d07,	// (0x00059f19) list_single_large_graphic_pane_g4_cp2

0x5d0f,	// (0x00059f21) list_single_large_graphic_pane_t1_ParamLimits

0x5d0f,	// (0x00059f21) list_single_large_graphic_pane_t1

0x5d25,	// (0x00059f37) list_double_pane_g1_ParamLimits

0x5d25,	// (0x00059f37) list_double_pane_g1

0x5d31,	// (0x00059f43) list_double_pane_g2_ParamLimits

0x5d31,	// (0x00059f43) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00063803) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00063803) list_double_pane_g

0x5d3d,	// (0x00059f4f) list_double_pane_t1_ParamLimits

0x5d3d,	// (0x00059f4f) list_double_pane_t1

0x5d53,	// (0x00059f65) list_double_pane_t2_ParamLimits

0x5d53,	// (0x00059f65) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00063808) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00063808) list_double_pane_t

0x5d65,	// (0x00059f77) list_double2_pane_g1_ParamLimits

0x5d65,	// (0x00059f77) list_double2_pane_g1

0x346d,	// (0x0005767f) list_double2_pane_g2_ParamLimits

0x346d,	// (0x0005767f) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0006380d) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0006380d) list_double2_pane_g

0x5d76,	// (0x00059f88) list_double2_pane_t1_ParamLimits

0x5d76,	// (0x00059f88) list_double2_pane_t1

0x5d8c,	// (0x00059f9e) list_double2_pane_t2_ParamLimits

0x5d8c,	// (0x00059f9e) list_double2_pane_t2

0x0001,

0xf600,	// (0x00063812) list_double2_pane_t_ParamLimits

0xf600,	// (0x00063812) list_double2_pane_t

0x5d25,	// (0x00059f37) list_double_number_pane_g1_ParamLimits

0x5d25,	// (0x00059f37) list_double_number_pane_g1

0x5d31,	// (0x00059f43) list_double_number_pane_g2_ParamLimits

0x5d31,	// (0x00059f43) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00063803) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00063803) list_double_number_pane_g

0x5d9e,	// (0x00059fb0) list_double_number_pane_t1_ParamLimits

0x5d9e,	// (0x00059fb0) list_double_number_pane_t1

0x5db0,	// (0x00059fc2) list_double_number_pane_t2_ParamLimits

0x5db0,	// (0x00059fc2) list_double_number_pane_t2

0x5dc6,	// (0x00059fd8) list_double_number_pane_t3_ParamLimits

0x5dc6,	// (0x00059fd8) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00063817) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00063817) list_double_number_pane_t

0x5dd8,	// (0x00059fea) list_double_graphic_pane_g1_ParamLimits

0x5dd8,	// (0x00059fea) list_double_graphic_pane_g1

0x5de4,	// (0x00059ff6) list_double_graphic_pane_g2_ParamLimits

0x5de4,	// (0x00059ff6) list_double_graphic_pane_g2

0x5df3,	// (0x0005a005) list_double_graphic_pane_g3_ParamLimits

0x5df3,	// (0x0005a005) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0006381e) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0006381e) list_double_graphic_pane_g

0x5e0b,	// (0x0005a01d) list_double_graphic_pane_t1_ParamLimits

0x5e0b,	// (0x0005a01d) list_double_graphic_pane_t1

0x5e21,	// (0x0005a033) list_double_graphic_pane_t2_ParamLimits

0x5e21,	// (0x0005a033) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00063827) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00063827) list_double_graphic_pane_t

0x3455,	// (0x00057667) list_double2_graphic_pane_g1_ParamLimits

0x3455,	// (0x00057667) list_double2_graphic_pane_g1

0xab7d,	// (0x0005ed8f) list_double2_graphic_pane_g2_ParamLimits

0xab7d,	// (0x0005ed8f) list_double2_graphic_pane_g2

0x464e,	// (0x00058860) list_double2_graphic_pane_g3_ParamLimits

0x464e,	// (0x00058860) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0006382c) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0006382c) list_double2_graphic_pane_g

0x343f,	// (0x00057651) list_double2_graphic_pane_t1_ParamLimits

0x343f,	// (0x00057651) list_double2_graphic_pane_t1

0x5e33,	// (0x0005a045) list_double2_graphic_pane_t2_ParamLimits

0x5e33,	// (0x0005a045) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00063833) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00063833) list_double2_graphic_pane_t

0x5e45,	// (0x0005a057) list_double_large_graphic_pane_g1_ParamLimits

0x5e45,	// (0x0005a057) list_double_large_graphic_pane_g1

0x5e64,	// (0x0005a076) list_double_large_graphic_pane_g2_ParamLimits

0x5e64,	// (0x0005a076) list_double_large_graphic_pane_g2

0x5d31,	// (0x00059f43) list_double_large_graphic_pane_g3_ParamLimits

0x5d31,	// (0x00059f43) list_double_large_graphic_pane_g3

0x5e7a,	// (0x0005a08c) list_double_large_graphic_pane_g4_ParamLimits

0x5e7a,	// (0x0005a08c) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00063838) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00063838) list_double_large_graphic_pane_g

0x5e8c,	// (0x0005a09e) list_double_large_graphic_pane_t1_ParamLimits

0x5e8c,	// (0x0005a09e) list_double_large_graphic_pane_t1

0x5ea5,	// (0x0005a0b7) list_double_large_graphic_pane_t2_ParamLimits

0x5ea5,	// (0x0005a0b7) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00063843) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00063843) list_double_large_graphic_pane_t

0x5eb7,	// (0x0005a0c9) list_double2_large_graphic_pane_g1_ParamLimits

0x5eb7,	// (0x0005a0c9) list_double2_large_graphic_pane_g1

0x5ec3,	// (0x0005a0d5) list_double2_large_graphic_pane_g2_ParamLimits

0x5ec3,	// (0x0005a0d5) list_double2_large_graphic_pane_g2

0x464e,	// (0x00058860) list_double2_large_graphic_pane_g3_ParamLimits

0x464e,	// (0x00058860) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00063848) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00063848) list_double2_large_graphic_pane_g

0x5ed4,	// (0x0005a0e6) list_double2_large_graphic_pane_t1_ParamLimits

0x5ed4,	// (0x0005a0e6) list_double2_large_graphic_pane_t1

0x5eea,	// (0x0005a0fc) list_double2_large_graphic_pane_t2_ParamLimits

0x5eea,	// (0x0005a0fc) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0006384f) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0006384f) list_double2_large_graphic_pane_t

0x5efc,	// (0x0005a10e) list_double_heading_pane_g1_ParamLimits

0x5efc,	// (0x0005a10e) list_double_heading_pane_g1

0x5f0d,	// (0x0005a11f) list_double_heading_pane_g2_ParamLimits

0x5f0d,	// (0x0005a11f) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x00063854) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x00063854) list_double_heading_pane_g

0x5f19,	// (0x0005a12b) list_double_heading_pane_t1_ParamLimits

0x5f19,	// (0x0005a12b) list_double_heading_pane_t1

0x5d8c,	// (0x00059f9e) list_double_heading_pane_t2_ParamLimits

0x5d8c,	// (0x00059f9e) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00063859) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00063859) list_double_heading_pane_t

0x3461,	// (0x00057673) list_double_graphic_heading_pane_g1_ParamLimits

0x3461,	// (0x00057673) list_double_graphic_heading_pane_g1

0x5efc,	// (0x0005a10e) list_double_graphic_heading_pane_g2_ParamLimits

0x5efc,	// (0x0005a10e) list_double_graphic_heading_pane_g2

0x5f0d,	// (0x0005a11f) list_double_graphic_heading_pane_g3_ParamLimits

0x5f0d,	// (0x0005a11f) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0006385e) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0006385e) list_double_graphic_heading_pane_g

0x5f2f,	// (0x0005a141) list_double_graphic_heading_pane_t1_ParamLimits

0x5f2f,	// (0x0005a141) list_double_graphic_heading_pane_t1

0x5e33,	// (0x0005a045) list_double_graphic_heading_pane_t2_ParamLimits

0x5e33,	// (0x0005a045) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00063865) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00063865) list_double_graphic_heading_pane_t

0x5f45,	// (0x0005a157) list_double_time_pane_g1_ParamLimits

0x5f45,	// (0x0005a157) list_double_time_pane_g1

0x5f56,	// (0x0005a168) list_double_time_pane_g2_ParamLimits

0x5f56,	// (0x0005a168) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0006386a) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0006386a) list_double_time_pane_g

0x5f62,	// (0x0005a174) list_double_time_pane_t1_ParamLimits

0x5f62,	// (0x0005a174) list_double_time_pane_t1

0x5f78,	// (0x0005a18a) list_double_time_pane_t2_ParamLimits

0x5f78,	// (0x0005a18a) list_double_time_pane_t2

0x5f8a,	// (0x0005a19c) list_double_time_pane_t3_ParamLimits

0x5f8a,	// (0x0005a19c) list_double_time_pane_t3

0x5f9c,	// (0x0005a1ae) list_double_time_pane_t4_ParamLimits

0x5f9c,	// (0x0005a1ae) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0006386f) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0006386f) list_double_time_pane_t

0x5fae,	// (0x0005a1c0) list_setting_pane_g1_ParamLimits

0x5fae,	// (0x0005a1c0) list_setting_pane_g1

0x346d,	// (0x0005767f) list_setting_pane_g2_ParamLimits

0x346d,	// (0x0005767f) list_setting_pane_g2

0x0001,

0xf666,	// (0x00063878) list_setting_pane_g_ParamLimits

0xf666,	// (0x00063878) list_setting_pane_g

0x5fba,	// (0x0005a1cc) list_setting_pane_t1_ParamLimits

0x5fba,	// (0x0005a1cc) list_setting_pane_t1

0x5fd4,	// (0x0005a1e6) list_setting_pane_t2_ParamLimits

0x5fd4,	// (0x0005a1e6) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0006387d) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0006387d) list_setting_pane_t

0x6011,	// (0x0005a223) set_value_pane_cp_ParamLimits

0x6011,	// (0x0005a223) set_value_pane_cp

0x601d,	// (0x0005a22f) list_setting_number_pane_g1_ParamLimits

0x601d,	// (0x0005a22f) list_setting_number_pane_g1

0x6029,	// (0x0005a23b) list_setting_number_pane_g2_ParamLimits

0x6029,	// (0x0005a23b) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00063884) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00063884) list_setting_number_pane_g

0x6035,	// (0x0005a247) list_setting_number_pane_t1_ParamLimits

0x6035,	// (0x0005a247) list_setting_number_pane_t1

0x604e,	// (0x0005a260) list_setting_number_pane_t2_ParamLimits

0x604e,	// (0x0005a260) list_setting_number_pane_t2

0x6068,	// (0x0005a27a) list_setting_number_pane_t3_ParamLimits

0x6068,	// (0x0005a27a) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x00063889) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x00063889) list_setting_number_pane_t

0x6011,	// (0x0005a223) set_value_pane_ParamLimits

0x6011,	// (0x0005a223) set_value_pane

0xefef,	// (0x00063201) bg_set_opt_pane_ParamLimits

0xefef,	// (0x00063201) bg_set_opt_pane

0x3479,	// (0x0005768b) set_value_pane_t1

0xf010,	// (0x00063222) slider_set_pane_cp3

0x60ab,	// (0x0005a2bd) volume_small_pane_cp

0xf019,	// (0x0006322b) list_form_gen_pane

0xf022,	// (0x00063234) scroll_pane_cp8

0x60b4,	// (0x0005a2c6) form_field_data_pane_ParamLimits

0x60b4,	// (0x0005a2c6) form_field_data_pane

0x60ce,	// (0x0005a2e0) form_field_data_wide_pane_ParamLimits

0x60ce,	// (0x0005a2e0) form_field_data_wide_pane

0x60f1,	// (0x0005a303) form_field_popup_pane_ParamLimits

0x60f1,	// (0x0005a303) form_field_popup_pane

0x6111,	// (0x0005a323) form_field_popup_wide_pane_ParamLimits

0x6111,	// (0x0005a323) form_field_popup_wide_pane

0x3497,	// (0x000576a9) form_field_slider_pane_ParamLimits

0x3497,	// (0x000576a9) form_field_slider_pane

0x612e,	// (0x0005a340) form_field_slider_wide_pane_ParamLimits

0x612e,	// (0x0005a340) form_field_slider_wide_pane

0xf033,	// (0x00063245) data_form_pane

0x614b,	// (0x0005a35d) form_field_data_pane_t1

0xf03f,	// (0x00063251) input_focus_pane

0x6163,	// (0x0005a375) data_form_wide_pane

0x6174,	// (0x0005a386) form_field_data_wide_pane_t1

0xef33,	// (0x00063145) input_focus_pane_cp6

0x618e,	// (0x0005a3a0) form_field_popup_pane_t1

0xf03f,	// (0x00063251) input_focus_pane_cp7

0xf06d,	// (0x0006327f) list_form_pane

0x34c6,	// (0x000576d8) form_field_popup_wide_pane_t1

0xf03f,	// (0x00063251) input_focus_pane_cp8

0xf079,	// (0x0006328b) list_form_wide_pane

0x61ae,	// (0x0005a3c0) form_field_slider_pane_t1_ParamLimits

0x61ae,	// (0x0005a3c0) form_field_slider_pane_t1

0x61c4,	// (0x0005a3d6) form_field_slider_pane_t2_ParamLimits

0x61c4,	// (0x0005a3d6) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x00063899) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x00063899) form_field_slider_pane_t

0xeda9,	// (0x00062fbb) input_focus_pane_cp9_ParamLimits

0xeda9,	// (0x00062fbb) input_focus_pane_cp9

0x61d9,	// (0x0005a3eb) slider_cont_pane_ParamLimits

0x61d9,	// (0x0005a3eb) slider_cont_pane

0xf088,	// (0x0006329a) form_field_slider_wide_pane_t1_ParamLimits

0xf088,	// (0x0006329a) form_field_slider_wide_pane_t1

0x34db,	// (0x000576ed) form_field_slider_wide_pane_t2_ParamLimits

0x34db,	// (0x000576ed) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0006389e) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0006389e) form_field_slider_wide_pane_t

0xeda9,	// (0x00062fbb) input_focus_pane_cp10_ParamLimits

0xeda9,	// (0x00062fbb) input_focus_pane_cp10

0x61ed,	// (0x0005a3ff) slider_cont_pane_cp1_ParamLimits

0x61ed,	// (0x0005a3ff) slider_cont_pane_cp1

0x6201,	// (0x0005a413) slider_form_pane_cp

0xf09a,	// (0x000632ac) input_focus_pane_g1

0xf0a2,	// (0x000632b4) input_focus_pane_g2

0xf0aa,	// (0x000632bc) input_focus_pane_g3

0xf0b2,	// (0x000632c4) input_focus_pane_g4

0xf0ba,	// (0x000632cc) input_focus_pane_g5

0xf0c2,	// (0x000632d4) input_focus_pane_g6

0xf0ca,	// (0x000632dc) input_focus_pane_g7

0xf0d2,	// (0x000632e4) input_focus_pane_g8

0xf0da,	// (0x000632ec) input_focus_pane_g9

0xec27,	// (0x00062e39) input_focus_pane_g10

0x0009,

0xf691,	// (0x000638a3) input_focus_pane_g

0x9814,	// (0x0005da26) wait_border_pane_g3_copy1

0x6209,	// (0x0005a41b) data_form_pane_t1

0xec27,	// (0x00062e39) wait_anim_pane_g1_copy1

0x772d,	// (0x0005b93f) data_form_wide_pane_t1

0x6224,	// (0x0005a436) list_form_graphic_pane_cp_ParamLimits

0x6224,	// (0x0005a436) list_form_graphic_pane_cp

0xa714,	// (0x0005e926) slider_form_pane_g1

0xa71d,	// (0x0005e92f) slider_form_pane_g2

0x0006,

0xf994,	// (0x00063ba6) slider_form_pane_g

0x6224,	// (0x0005a436) list_form_graphic_pane_ParamLimits

0x6224,	// (0x0005a436) list_form_graphic_pane

0x623d,	// (0x0005a44f) list_form_graphic_pane_g1

0x6245,	// (0x0005a457) list_form_graphic_pane_t1_ParamLimits

0x6245,	// (0x0005a457) list_form_graphic_pane_t1

0xec7f,	// (0x00062e91) list_highlight_pane_cp5_ParamLimits

0xec7f,	// (0x00062e91) list_highlight_pane_cp5

0x625a,	// (0x0005a46c) find_pane_g1

0xf0e2,	// (0x000632f4) input_find_pane

0x6263,	// (0x0005a475) input_find_pane_g1_ParamLimits

0x6263,	// (0x0005a475) input_find_pane_g1

0x626f,	// (0x0005a481) input_find_pane_t1_ParamLimits

0x626f,	// (0x0005a481) input_find_pane_t1

0x6284,	// (0x0005a496) input_find_pane_t2_ParamLimits

0x6284,	// (0x0005a496) input_find_pane_t2

0x0001,

0xf6a6,	// (0x000638b8) input_find_pane_t_ParamLimits

0xf6a6,	// (0x000638b8) input_find_pane_t

0xf0eb,	// (0x000632fd) input_focus_pane_cp5_ParamLimits

0xf0eb,	// (0x000632fd) input_focus_pane_cp5

0xf0f9,	// (0x0006330b) bg_popup_window_pane_cp2_ParamLimits

0xf0f9,	// (0x0006330b) bg_popup_window_pane_cp2

0xf106,	// (0x00063318) listscroll_menu_pane_ParamLimits

0xf106,	// (0x00063318) listscroll_menu_pane

0x62a5,	// (0x0005a4b7) popup_submenu_window_ParamLimits

0x62a5,	// (0x0005a4b7) popup_submenu_window

0xf112,	// (0x00063324) find_popup_pane_g1

0x62cd,	// (0x0005a4df) input_popup_find_pane_cp

0xf0eb,	// (0x000632fd) input_focus_pane_cp4_ParamLimits

0xf0eb,	// (0x000632fd) input_focus_pane_cp4

0xf11a,	// (0x0006332c) input_popup_find_pane_t1_ParamLimits

0xf11a,	// (0x0006332c) input_popup_find_pane_t1

0xec31,	// (0x00062e43) bg_popup_sub_pane_cp

0xf148,	// (0x0006335a) listscroll_popup_sub_pane

0xf150,	// (0x00063362) list_submenu_pane_ParamLimits

0xf150,	// (0x00063362) list_submenu_pane

0xf161,	// (0x00063373) scroll_pane_cp4

0x62e5,	// (0x0005a4f7) list_single_popup_submenu_pane_ParamLimits

0x62e5,	// (0x0005a4f7) list_single_popup_submenu_pane

0x2301,	// (0x00056513) list_single_popup_submenu_pane_g1

0x62f9,	// (0x0005a50b) list_single_popup_submenu_pane_t1_ParamLimits

0x62f9,	// (0x0005a50b) list_single_popup_submenu_pane_t1

0xec7f,	// (0x00062e91) bg_active_tab_pane_cp1_ParamLimits

0xec7f,	// (0x00062e91) bg_active_tab_pane_cp1

0xf169,	// (0x0006337b) tabs_2_active_pane_g1

0x630e,	// (0x0005a520) tabs_2_active_pane_t1

0xec7f,	// (0x00062e91) bg_passive_tab_pane_cp1_ParamLimits

0xec7f,	// (0x00062e91) bg_passive_tab_pane_cp1

0xf169,	// (0x0006337b) tabs_2_passive_pane_g1

0x630e,	// (0x0005a520) tabs_2_passive_pane_t1

0x20c0,	// (0x000562d2) bg_active_tab_pane_cp4

0x6320,	// (0x0005a532) tabs_2_long_active_pane_t1

0x6333,	// (0x0005a545) bg_passive_tab_pane_cp4

0x73be,	// (0x0005b5d0) list_single_midp_graphic_pane_g4_ParamLimits

0x20c0,	// (0x000562d2) bg_active_tab_pane_cp5

0x633f,	// (0x0005a551) tabs_3_long_active_pane_t1

0x6333,	// (0x0005a545) bg_passive_tab_pane_cp5

0x73be,	// (0x0005b5d0) list_single_midp_graphic_pane_g4

0xec7f,	// (0x00062e91) bg_popup_window_pane_cp13_ParamLimits

0xec7f,	// (0x00062e91) bg_popup_window_pane_cp13

0xf171,	// (0x00063383) listscroll_popup_fast_pane_ParamLimits

0xf171,	// (0x00063383) listscroll_popup_fast_pane

0xf17d,	// (0x0006338f) grid_popup_fast_pane_ParamLimits

0xf17d,	// (0x0006338f) grid_popup_fast_pane

0xf18f,	// (0x000633a1) scroll_pane_cp9_ParamLimits

0xf18f,	// (0x000633a1) scroll_pane_cp9

0xc211,	// (0x00060423) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc211,	// (0x00060423) list_single_graphic_hl_pane_t1_cp2

0xf1a2,	// (0x000633b4) input_focus_pane_cp20_ParamLimits

0xf1a2,	// (0x000633b4) input_focus_pane_cp20

0xf1b0,	// (0x000633c2) query_popup_data_pane_t1_ParamLimits

0xf1b0,	// (0x000633c2) query_popup_data_pane_t1

0xf1c3,	// (0x000633d5) query_popup_data_pane_t2_ParamLimits

0xf1c3,	// (0x000633d5) query_popup_data_pane_t2

0xf209,	// (0x0006341b) query_popup_data_pane_t3_ParamLimits

0xf209,	// (0x0006341b) query_popup_data_pane_t3

0xf24a,	// (0x0006345c) query_popup_data_pane_t4_ParamLimits

0xf24a,	// (0x0006345c) query_popup_data_pane_t4

0xf286,	// (0x00063498) query_popup_data_pane_t5_ParamLimits

0xf286,	// (0x00063498) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x000638bd) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x000638bd) query_popup_data_pane_t

0xf09a,	// (0x000632ac) bg_set_opt_pane_g1

0xf0a2,	// (0x000632b4) bg_set_opt_pane_g2

0xf0aa,	// (0x000632bc) bg_set_opt_pane_g3

0xf0b2,	// (0x000632c4) bg_set_opt_pane_g4

0xf0ba,	// (0x000632cc) bg_set_opt_pane_g5

0xf0c2,	// (0x000632d4) bg_set_opt_pane_g6

0xf0ca,	// (0x000632dc) bg_set_opt_pane_g7

0xf0d2,	// (0x000632e4) bg_set_opt_pane_g8

0xf0da,	// (0x000632ec) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x000638c8) bg_set_opt_pane_g

0x68b6,	// (0x0005aac8) control_top_pane_stacon_ParamLimits

0x68b6,	// (0x0005aac8) control_top_pane_stacon

0x6909,	// (0x0005ab1b) signal_pane_stacon_ParamLimits

0x6909,	// (0x0005ab1b) signal_pane_stacon

0x34ed,	// (0x000576ff) stacon_top_pane_g1_ParamLimits

0x34ed,	// (0x000576ff) stacon_top_pane_g1

0x692e,	// (0x0005ab40) title_pane_stacon_ParamLimits

0x692e,	// (0x0005ab40) title_pane_stacon

0x6958,	// (0x0005ab6a) uni_indicator_pane_stacon_ParamLimits

0x6958,	// (0x0005ab6a) uni_indicator_pane_stacon

0x696d,	// (0x0005ab7f) battery_pane_stacon_ParamLimits

0x696d,	// (0x0005ab7f) battery_pane_stacon

0x69b1,	// (0x0005abc3) control_bottom_pane_stacon_ParamLimits

0x69b1,	// (0x0005abc3) control_bottom_pane_stacon

0x69d4,	// (0x0005abe6) navi_pane_stacon_ParamLimits

0x69d4,	// (0x0005abe6) navi_pane_stacon

0x350f,	// (0x00057721) stacon_bottom_pane_g1_ParamLimits

0x350f,	// (0x00057721) stacon_bottom_pane_g1

0x636b,	// (0x0005a57d) aid_levels_signal_lsc_ParamLimits

0x636b,	// (0x0005a57d) aid_levels_signal_lsc

0x6381,	// (0x0005a593) signal_pane_stacon_g1_ParamLimits

0x6381,	// (0x0005a593) signal_pane_stacon_g1

0x6395,	// (0x0005a5a7) signal_pane_stacon_g2_ParamLimits

0x6395,	// (0x0005a5a7) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x000638db) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x000638db) signal_pane_stacon_g

0x63ca,	// (0x0005a5dc) title_pane_stacon_t1_ParamLimits

0x63ca,	// (0x0005a5dc) title_pane_stacon_t1

0xf2ca,	// (0x000634dc) uni_indicator_pane_stacon_g1

0xf2d4,	// (0x000634e6) uni_indicator_pane_stacon_g2

0xf2de,	// (0x000634f0) uni_indicator_pane_stacon_g3

0xf2e8,	// (0x000634fa) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x000638e7) uni_indicator_pane_stacon_g

0x63ef,	// (0x0005a601) control_top_pane_stacon_g1

0x63f7,	// (0x0005a609) control_top_pane_stacon_t1_ParamLimits

0x63f7,	// (0x0005a609) control_top_pane_stacon_t1

0x642e,	// (0x0005a640) aid_levels_battery_lsc_ParamLimits

0x642e,	// (0x0005a640) aid_levels_battery_lsc

0x6445,	// (0x0005a657) battery_pane_stacon_g1_ParamLimits

0x6445,	// (0x0005a657) battery_pane_stacon_g1

0x6458,	// (0x0005a66a) battery_pane_stacon_g2_ParamLimits

0x6458,	// (0x0005a66a) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x000638f0) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x000638f0) battery_pane_stacon_g

0x6496,	// (0x0005a6a8) navi_icon_pane_stacon

0x64aa,	// (0x0005a6bc) navi_navi_pane_stacon

0x6496,	// (0x0005a6a8) navi_text_pane_stacon

0x63ef,	// (0x0005a601) control_bottom_pane_stacon_g1

0x64be,	// (0x0005a6d0) control_bottom_pane_stacon_t1_ParamLimits

0x64be,	// (0x0005a6d0) control_bottom_pane_stacon_t1

0x64f5,	// (0x0005a707) grid_app_pane_ParamLimits

0x64f5,	// (0x0005a707) grid_app_pane

0x6519,	// (0x0005a72b) scroll_pane_cp15_ParamLimits

0x6519,	// (0x0005a72b) scroll_pane_cp15

0x652c,	// (0x0005a73e) cell_app_pane_ParamLimits

0x652c,	// (0x0005a73e) cell_app_pane

0x6554,	// (0x0005a766) cell_app_pane_g1_ParamLimits

0x6554,	// (0x0005a766) cell_app_pane_g1

0xf30c,	// (0x0006351e) cell_app_pane_g2_ParamLimits

0xf30c,	// (0x0006351e) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x000638f5) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x000638f5) cell_app_pane_g

0x6578,	// (0x0005a78a) cell_app_pane_t1_ParamLimits

0x6578,	// (0x0005a78a) cell_app_pane_t1

0xf318,	// (0x0006352a) grid_highlight_pane_ParamLimits

0xf318,	// (0x0006352a) grid_highlight_pane

0xf09a,	// (0x000632ac) cell_highlight_pane_g1

0xf0a2,	// (0x000632b4) cell_highlight_pane_g2

0xf0aa,	// (0x000632bc) cell_highlight_pane_g3

0xf0b2,	// (0x000632c4) cell_highlight_pane_g4

0xf0ba,	// (0x000632cc) cell_highlight_pane_g5

0xf0c2,	// (0x000632d4) cell_highlight_pane_g6

0xf0ca,	// (0x000632dc) cell_highlight_pane_g7

0xf0d2,	// (0x000632e4) cell_highlight_pane_g8

0xf0da,	// (0x000632ec) cell_highlight_pane_g9

0xec27,	// (0x00062e39) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x000638a3) cell_highlight_pane_g

0xf329,	// (0x0006353b) bg_scroll_pane

0x65a2,	// (0x0005a7b4) scroll_handle_pane

0xf370,	// (0x00063582) scroll_bg_pane_g1

0xf385,	// (0x00063597) scroll_bg_pane_g2

0xf39d,	// (0x000635af) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x000638fa) scroll_bg_pane_g

0x65cb,	// (0x0005a7dd) scroll_handle_focus_pane_ParamLimits

0x65cb,	// (0x0005a7dd) scroll_handle_focus_pane

0xf370,	// (0x00063582) scroll_handle_pane_g1

0xf3b2,	// (0x000635c4) scroll_handle_pane_g2

0xf39d,	// (0x000635af) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00063901) scroll_handle_pane_g

0xf0eb,	// (0x000632fd) bg_popup_sub_pane_cp21_ParamLimits

0xf0eb,	// (0x000632fd) bg_popup_sub_pane_cp21

0x65d8,	// (0x0005a7ea) popup_fep_japan_predictive_window_t1_ParamLimits

0x65d8,	// (0x0005a7ea) popup_fep_japan_predictive_window_t1

0x65f2,	// (0x0005a804) popup_fep_japan_predictive_window_t2_ParamLimits

0x65f2,	// (0x0005a804) popup_fep_japan_predictive_window_t2

0x6625,	// (0x0005a837) popup_fep_japan_predictive_window_t3_ParamLimits

0x6625,	// (0x0005a837) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00063908) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00063908) popup_fep_japan_predictive_window_t

0xec31,	// (0x00062e43) bg_popup_sub_pane_cp23

0x2c41,	// (0x00056e53) listscroll_japin_cand_pane

0xf3c6,	// (0x000635d8) popup_fep_japan_candidate_window_t1

0xf3d4,	// (0x000635e6) candidate_pane_ParamLimits

0xf3d4,	// (0x000635e6) candidate_pane

0x665c,	// (0x0005a86e) scroll_pane_cp30

0xf3e6,	// (0x000635f8) list_single_popup_jap_candidate_pane_ParamLimits

0xf3e6,	// (0x000635f8) list_single_popup_jap_candidate_pane

0xec31,	// (0x00062e43) list_highlight_pane_cp30

0xf3fb,	// (0x0006360d) list_single_popup_jap_candidate_pane_t1

0xf40a,	// (0x0006361c) level_1_signal

0xf417,	// (0x00063629) level_2_signal

0xf424,	// (0x00063636) level_3_signal

0xf431,	// (0x00063643) level_4_signal

0xf43e,	// (0x00063650) level_5_signal

0xf44b,	// (0x0006365d) level_6_signal

0xf458,	// (0x0006366a) level_7_signal

0xf40a,	// (0x0006361c) level_1_battery

0xf417,	// (0x00063629) level_2_battery

0xf424,	// (0x00063636) level_3_battery

0xf431,	// (0x00063643) level_4_battery

0xf43e,	// (0x00063650) level_5_battery

0xf44b,	// (0x0006365d) level_6_battery

0xf458,	// (0x0006366a) level_7_battery

0xf47d,	// (0x0006368f) list_menu_pane_ParamLimits

0xf47d,	// (0x0006368f) list_menu_pane

0xf493,	// (0x000636a5) scroll_pane_cp25_ParamLimits

0xf493,	// (0x000636a5) scroll_pane_cp25

0xf4ac,	// (0x000636be) list_double2_graphic_pane_cp2_ParamLimits

0xf4ac,	// (0x000636be) list_double2_graphic_pane_cp2

0xf4ac,	// (0x000636be) list_double2_large_graphic_pane_cp2_ParamLimits

0xf4ac,	// (0x000636be) list_double2_large_graphic_pane_cp2

0xf4ac,	// (0x000636be) list_double2_pane_cp2_ParamLimits

0xf4ac,	// (0x000636be) list_double2_pane_cp2

0xf4ac,	// (0x000636be) list_double_graphic_pane_cp2_ParamLimits

0xf4ac,	// (0x000636be) list_double_graphic_pane_cp2

0xf4ac,	// (0x000636be) list_double_large_graphic_pane_cp2_ParamLimits

0xf4ac,	// (0x000636be) list_double_large_graphic_pane_cp2

0xf4ac,	// (0x000636be) list_double_number_pane_cp2_ParamLimits

0xf4ac,	// (0x000636be) list_double_number_pane_cp2

0xf4ac,	// (0x000636be) list_double_pane_cp2_ParamLimits

0xf4ac,	// (0x000636be) list_double_pane_cp2

0x6697,	// (0x0005a8a9) list_single_2graphic_pane_cp2_ParamLimits

0x6697,	// (0x0005a8a9) list_single_2graphic_pane_cp2

0x6697,	// (0x0005a8a9) list_single_graphic_heading_pane_cp2_ParamLimits

0x6697,	// (0x0005a8a9) list_single_graphic_heading_pane_cp2

0x6697,	// (0x0005a8a9) list_single_graphic_pane_cp2_ParamLimits

0x6697,	// (0x0005a8a9) list_single_graphic_pane_cp2

0x6697,	// (0x0005a8a9) list_single_heading_pane_cp2_ParamLimits

0x6697,	// (0x0005a8a9) list_single_heading_pane_cp2

0xf4bc,	// (0x000636ce) list_single_large_graphic_pane_cp2_ParamLimits

0xf4bc,	// (0x000636ce) list_single_large_graphic_pane_cp2

0x6697,	// (0x0005a8a9) list_single_number_heading_pane_cp2_ParamLimits

0x6697,	// (0x0005a8a9) list_single_number_heading_pane_cp2

0x6697,	// (0x0005a8a9) list_single_number_pane_cp2_ParamLimits

0x6697,	// (0x0005a8a9) list_single_number_pane_cp2

0x6697,	// (0x0005a8a9) list_single_pane_cp2_ParamLimits

0x6697,	// (0x0005a8a9) list_single_pane_cp2

0xf4d6,	// (0x000636e8) bg_popup_sub_pane_cp22

0x676f,	// (0x0005a981) popup_side_volume_key_window_g1

0x6793,	// (0x0005a9a5) popup_side_volume_key_window_t1

0x67af,	// (0x0005a9c1) volume_small_pane_cp1

0xeda9,	// (0x00062fbb) bg_popup_sub_pane_cp24_ParamLimits

0xeda9,	// (0x00062fbb) bg_popup_sub_pane_cp24

0xf4ec,	// (0x000636fe) fep_china_uni_candidate_pane_ParamLimits

0xf4ec,	// (0x000636fe) fep_china_uni_candidate_pane

0xf500,	// (0x00063712) fep_china_uni_entry_pane

0xf510,	// (0x00063722) popup_fep_china_uni_window_g1

0x67b7,	// (0x0005a9c9) fep_china_uni_entry_pane_g1

0x67bf,	// (0x0005a9d1) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00063939) fep_china_uni_entry_pane_g

0xf52c,	// (0x0006373e) fep_entry_item_pane

0xf536,	// (0x00063748) fep_candidate_item_pane

0x67c7,	// (0x0005a9d9) fep_china_uni_candidate_pane_g1

0xf53e,	// (0x00063750) fep_china_uni_candidate_pane_g2

0xf546,	// (0x00063758) fep_china_uni_candidate_pane_g3

0x67cf,	// (0x0005a9e1) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0006393e) fep_china_uni_candidate_pane_g

0xec27,	// (0x00062e39) fep_entry_item_pane_g1

0x11c5,	// (0x000553d7) fep_entry_item_pane_t1_ParamLimits

0x11c5,	// (0x000553d7) fep_entry_item_pane_t1

0x11db,	// (0x000553ed) fep_candidate_item_pane_t1_ParamLimits

0x11db,	// (0x000553ed) fep_candidate_item_pane_t1

0x11f0,	// (0x00055402) fep_candidate_item_pane_t2_ParamLimits

0x11f0,	// (0x00055402) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00063947) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00063947) fep_candidate_item_pane_t

0xec7f,	// (0x00062e91) list_highlight_pane_cp31_ParamLimits

0xec7f,	// (0x00062e91) list_highlight_pane_cp31

0x1202,	// (0x00055414) level_1_signal_lsc

0x120b,	// (0x0005541d) level_2_signal_lsc

0x1214,	// (0x00055426) level_3_signal_lsc

0x121d,	// (0x0005542f) level_4_signal_lsc

0x1226,	// (0x00055438) level_5_signal_lsc

0x122f,	// (0x00055441) level_6_signal_lsc

0x1238,	// (0x0005544a) level_7_signal_lsc

0x1238,	// (0x0005544a) level_1_battery_lsc

0x1241,	// (0x00055453) level_2_battery_lsc

0x124a,	// (0x0005545c) level_3_battery_lsc

0x1253,	// (0x00055465) level_4_battery_lsc

0x125c,	// (0x0005546e) level_5_battery_lsc

0x1265,	// (0x00055477) level_6_battery_lsc

0x1202,	// (0x00055414) level_7_battery_lsc

0x126e,	// (0x00055480) scroll_handle_focus_pane_g1

0x1277,	// (0x00055489) scroll_handle_focus_pane_g2

0x1280,	// (0x00055492) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0006394c) scroll_handle_focus_pane_g

0x67d7,	// (0x0005a9e9) list_single_2graphic_pane_g1_ParamLimits

0x67d7,	// (0x0005a9e9) list_single_2graphic_pane_g1

0x5cd2,	// (0x00059ee4) list_single_2graphic_pane_g2_ParamLimits

0x5cd2,	// (0x00059ee4) list_single_2graphic_pane_g2

0x5c25,	// (0x00059e37) list_single_2graphic_pane_g3_ParamLimits

0x5c25,	// (0x00059e37) list_single_2graphic_pane_g3

0x67e3,	// (0x0005a9f5) list_single_2graphic_pane_g4_ParamLimits

0x67e3,	// (0x0005a9f5) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00063953) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00063953) list_single_2graphic_pane_g

0x67ef,	// (0x0005aa01) list_single_2graphic_pane_t1_ParamLimits

0x67ef,	// (0x0005aa01) list_single_2graphic_pane_t1

0x681d,	// (0x0005aa2f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x681d,	// (0x0005aa2f) list_double2_graphic_large_graphic_pane_g1

0x5ec3,	// (0x0005a0d5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5ec3,	// (0x0005a0d5) list_double2_graphic_large_graphic_pane_g2

0x464e,	// (0x00058860) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x464e,	// (0x00058860) list_double2_graphic_large_graphic_pane_g3

0x682d,	// (0x0005aa3f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x682d,	// (0x0005aa3f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0006395c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0006395c) list_double2_graphic_large_graphic_pane_g

0x6839,	// (0x0005aa4b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6839,	// (0x0005aa4b) list_double2_graphic_large_graphic_pane_t1

0x684f,	// (0x0005aa61) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x684f,	// (0x0005aa61) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00063965) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00063965) list_double2_graphic_large_graphic_pane_t

0x6a35,	// (0x0005ac47) popup_fast_swap_window_ParamLimits

0x6a35,	// (0x0005ac47) popup_fast_swap_window

0x6a51,	// (0x0005ac63) popup_side_volume_key_window

0x359a,	// (0x000577ac) stacon_top_pane

0x35a4,	// (0x000577b6) status_pane_ParamLimits

0x35a4,	// (0x000577b6) status_pane

0x6a6b,	// (0x0005ac7d) status_small_pane

0xec31,	// (0x00062e43) control_pane

0xec31,	// (0x00062e43) stacon_bottom_pane

0xf022,	// (0x00063234) scroll_pane_cp121

0xf019,	// (0x0006322b) set_content_pane

0x6861,	// (0x0005aa73) bg_active_tab_pane_g1_cp1

0x686a,	// (0x0005aa7c) bg_active_tab_pane_g2_cp1

0x6873,	// (0x0005aa85) bg_active_tab_pane_g3_cp1

0x6861,	// (0x0005aa73) bg_passive_tab_pane_g1_cp1

0x686a,	// (0x0005aa7c) bg_passive_tab_pane_g2_cp1

0x6873,	// (0x0005aa85) bg_passive_tab_pane_g3_cp1

0x687c,	// (0x0005aa8e) bg_active_tab_pane_g1_cp2

0x686a,	// (0x0005aa7c) bg_active_tab_pane_g2_cp2

0x6885,	// (0x0005aa97) bg_active_tab_pane_g3_cp2

0x687c,	// (0x0005aa8e) bg_passive_tab_pane_g1_cp2

0x686a,	// (0x0005aa7c) bg_passive_tab_pane_g2_cp2

0x6885,	// (0x0005aa97) bg_passive_tab_pane_g3_cp2

0x688e,	// (0x0005aaa0) bg_active_tab_pane_g1_cp3

0x686a,	// (0x0005aa7c) bg_active_tab_pane_g2_cp3

0x6897,	// (0x0005aaa9) bg_active_tab_pane_g3_cp3

0x688e,	// (0x0005aaa0) bg_passive_tab_pane_g1_cp3

0x686a,	// (0x0005aa7c) bg_passive_tab_pane_g2_cp3

0x6897,	// (0x0005aaa9) bg_passive_tab_pane_g3_cp3

0x68a0,	// (0x0005aab2) bg_active_tab_pane_g1_cp4

0x686a,	// (0x0005aa7c) bg_active_tab_pane_g2_cp4

0x68ab,	// (0x0005aabd) bg_active_tab_pane_g3_cp4

0x68a0,	// (0x0005aab2) bg_passive_tab_pane_g1_cp4

0x686a,	// (0x0005aa7c) bg_passive_tab_pane_g2_cp4

0x68ab,	// (0x0005aabd) bg_passive_tab_pane_g3_cp4

0x69f7,	// (0x0005ac09) bg_active_tab_pane_g1_cp5

0x686a,	// (0x0005aa7c) bg_active_tab_pane_g2_cp5

0x6a00,	// (0x0005ac12) bg_active_tab_pane_g3_cp5

0x69f7,	// (0x0005ac09) bg_passive_tab_pane_g1_cp5

0x686a,	// (0x0005aa7c) bg_passive_tab_pane_g2_cp5

0x6a00,	// (0x0005ac12) bg_passive_tab_pane_g3_cp5

0x6a09,	// (0x0005ac1b) list_set_graphic_pane_ParamLimits

0x6a09,	// (0x0005ac1b) list_set_graphic_pane

0xec31,	// (0x00062e43) bg_set_opt_pane_cp4

0x352b,	// (0x0005773d) list_set_graphic_pane_g1_ParamLimits

0x352b,	// (0x0005773d) list_set_graphic_pane_g1

0x3537,	// (0x00057749) list_set_graphic_pane_g2_ParamLimits

0x3537,	// (0x00057749) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0006396a) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0006396a) list_set_graphic_pane_g

0x0009,

0xfae2,	// (0x00063cf4) volume_small_pane_cp_g

0x6a29,	// (0x0005ac3b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6a29,	// (0x0005ac3b) list_double2_large_graphic_pane_g1_cp2

0x3559,	// (0x0005776b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3559,	// (0x0005776b) list_double2_large_graphic_pane_g2_cp2

0x356a,	// (0x0005777c) list_double2_large_graphic_pane_g3_cp2

0x3572,	// (0x00057784) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3572,	// (0x00057784) list_double2_large_graphic_pane_t1_cp2

0x3588,	// (0x0005779a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3588,	// (0x0005779a) list_double2_large_graphic_pane_t2_cp2

0xa2c5,	// (0x0005e4d7) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa2c5,	// (0x0005e4d7) list_double_large_graphic_pane_g1_cp2

0xa2d6,	// (0x0005e4e8) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa2d6,	// (0x0005e4e8) list_double_large_graphic_pane_g2_cp2

0x36b4,	// (0x000578c6) list_double_large_graphic_pane_g3_cp2

0xa2e7,	// (0x0005e4f9) list_double_large_graphic_pane_g4_cp

0xa2ef,	// (0x0005e501) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa2ef,	// (0x0005e501) list_double_large_graphic_pane_t1_cp2

0xa306,	// (0x0005e518) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa306,	// (0x0005e518) list_double_large_graphic_pane_t2_cp2

0x35b2,	// (0x000577c4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x35b2,	// (0x000577c4) list_double2_graphic_pane_g1_cp2

0x35c0,	// (0x000577d2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x35c0,	// (0x000577d2) list_double2_graphic_pane_g2_cp2

0x35d1,	// (0x000577e3) list_double2_graphic_pane_g3_cp2

0x35db,	// (0x000577ed) list_double2_graphic_pane_t1_cp2_ParamLimits

0x35db,	// (0x000577ed) list_double2_graphic_pane_t1_cp2

0x35f1,	// (0x00057803) list_double2_graphic_pane_t2_cp2_ParamLimits

0x35f1,	// (0x00057803) list_double2_graphic_pane_t2_cp2

0x1289,	// (0x0005549b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1289,	// (0x0005549b) list_single_number_heading_pane_g1_cp2

0x3603,	// (0x00057815) list_single_number_heading_pane_g2_cp2

0x360b,	// (0x0005781d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x360b,	// (0x0005781d) list_single_number_heading_pane_t1_cp2

0x3621,	// (0x00057833) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3621,	// (0x00057833) list_single_number_heading_pane_t2_cp2

0x3633,	// (0x00057845) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3633,	// (0x00057845) list_single_number_heading_pane_t3_cp2

0x1289,	// (0x0005549b) list_single_heading_pane_g1_cp2_ParamLimits

0x1289,	// (0x0005549b) list_single_heading_pane_g1_cp2

0x3603,	// (0x00057815) list_single_heading_pane_g2_cp2

0x360b,	// (0x0005781d) list_single_heading_pane_t1_cp2_ParamLimits

0x360b,	// (0x0005781d) list_single_heading_pane_t1_cp2

0xa0cf,	// (0x0005e2e1) list_single_heading_pane_t2_cp2_ParamLimits

0xa0cf,	// (0x0005e2e1) list_single_heading_pane_t2_cp2

0xa017,	// (0x0005e229) list_double_graphic_pane_g1_cp2_ParamLimits

0xa017,	// (0x0005e229) list_double_graphic_pane_g1_cp2

0xa023,	// (0x0005e235) list_double_graphic_pane_g2_cp2_ParamLimits

0xa023,	// (0x0005e235) list_double_graphic_pane_g2_cp2

0xa032,	// (0x0005e244) list_double_graphic_pane_g3_cp2

0xa03a,	// (0x0005e24c) list_double_graphic_pane_t1_cp2_ParamLimits

0xa03a,	// (0x0005e24c) list_double_graphic_pane_t1_cp2

0xa050,	// (0x0005e262) list_double_graphic_pane_t2_cp2_ParamLimits

0xa050,	// (0x0005e262) list_double_graphic_pane_t2_cp2

0x36a8,	// (0x000578ba) list_double_number_pane_g1_cp2_ParamLimits

0x36a8,	// (0x000578ba) list_double_number_pane_g1_cp2

0x36b4,	// (0x000578c6) list_double_number_pane_g2_cp2

0x9fdb,	// (0x0005e1ed) list_double_number_pane_t1_cp2_ParamLimits

0x9fdb,	// (0x0005e1ed) list_double_number_pane_t1_cp2

0x9fef,	// (0x0005e201) list_double_number_pane_t2_cp2_ParamLimits

0x9fef,	// (0x0005e201) list_double_number_pane_t2_cp2

0xa005,	// (0x0005e217) list_double_number_pane_t3_cp2_ParamLimits

0xa005,	// (0x0005e217) list_double_number_pane_t3_cp2

0x9ec4,	// (0x0005e0d6) list_single_graphic_pane_g1_cp2_ParamLimits

0x9ec4,	// (0x0005e0d6) list_single_graphic_pane_g1_cp2

0x3704,	// (0x00057916) list_single_graphic_pane_g2_cp2_ParamLimits

0x3704,	// (0x00057916) list_single_graphic_pane_g2_cp2

0x3710,	// (0x00057922) list_single_graphic_pane_g3_cp2

0x9e9a,	// (0x0005e0ac) list_single_graphic_pane_t1_cp2_ParamLimits

0x9e9a,	// (0x0005e0ac) list_single_graphic_pane_t1_cp2

0x3704,	// (0x00057916) list_single_number_pane_g1_cp2_ParamLimits

0x3704,	// (0x00057916) list_single_number_pane_g1_cp2

0x3710,	// (0x00057922) list_single_number_pane_g2_cp2

0x9e9a,	// (0x0005e0ac) list_single_number_pane_t1_cp2_ParamLimits

0x9e9a,	// (0x0005e0ac) list_single_number_pane_t1_cp2

0x9eb0,	// (0x0005e0c2) list_single_number_pane_t2_cp2_ParamLimits

0x9eb0,	// (0x0005e0c2) list_single_number_pane_t2_cp2

0x3559,	// (0x0005776b) list_double2_pane_g1_cp2_ParamLimits

0x3559,	// (0x0005776b) list_double2_pane_g1_cp2

0x356a,	// (0x0005777c) list_double2_pane_g2_cp2

0x3680,	// (0x00057892) list_double2_pane_t1_cp2_ParamLimits

0x3680,	// (0x00057892) list_double2_pane_t1_cp2

0x3696,	// (0x000578a8) list_double2_pane_t2_cp2_ParamLimits

0x3696,	// (0x000578a8) list_double2_pane_t2_cp2

0x36a8,	// (0x000578ba) list_double_pane_g1_cp2_ParamLimits

0x36a8,	// (0x000578ba) list_double_pane_g1_cp2

0x36b4,	// (0x000578c6) list_double_pane_g2_cp2

0x36bc,	// (0x000578ce) list_double_pane_t1_cp2_ParamLimits

0x36bc,	// (0x000578ce) list_double_pane_t1_cp2

0x36d2,	// (0x000578e4) list_double_pane_t2_cp2_ParamLimits

0x36d2,	// (0x000578e4) list_double_pane_t2_cp2

0x6a76,	// (0x0005ac88) list_single_pane_cp2_g3

0x3704,	// (0x00057916) list_single_pane_g1_cp2_ParamLimits

0x3704,	// (0x00057916) list_single_pane_g1_cp2

0x3710,	// (0x00057922) list_single_pane_g2_cp2

0x3718,	// (0x0005792a) list_single_pane_t1_cp2_ParamLimits

0x3718,	// (0x0005792a) list_single_pane_t1_cp2

0x6a7e,	// (0x0005ac90) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6a7e,	// (0x0005ac90) list_single_large_graphic_pane_g1_cp2

0x6a8a,	// (0x0005ac9c) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x6a8a,	// (0x0005ac9c) list_single_large_graphic_pane_g2_cp2

0x6a96,	// (0x0005aca8) list_single_large_graphic_pane_g3_cp2

0x6a9e,	// (0x0005acb0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x6a9e,	// (0x0005acb0) list_single_large_graphic_pane_g4_cp1

0x6ab8,	// (0x0005acca) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x6ab8,	// (0x0005acca) list_single_large_graphic_pane_t1_cp2

0x9e66,	// (0x0005e078) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9e66,	// (0x0005e078) list_single_graphic_heading_pane_g1_cp2

0x9e33,	// (0x0005e045) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9e33,	// (0x0005e045) list_single_graphic_heading_pane_g4_cp2

0x3710,	// (0x00057922) list_single_graphic_heading_pane_g5_cp2

0x9e72,	// (0x0005e084) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9e72,	// (0x0005e084) list_single_graphic_heading_pane_t1_cp2

0x9e88,	// (0x0005e09a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9e88,	// (0x0005e09a) list_single_graphic_heading_pane_t2_cp2

0x9e27,	// (0x0005e039) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9e27,	// (0x0005e039) list_single_2graphic_pane_g1_cp2

0x9e33,	// (0x0005e045) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9e33,	// (0x0005e045) list_single_2graphic_pane_g2_cp2

0x3710,	// (0x00057922) list_single_2graphic_pane_g3_cp2

0x9e44,	// (0x0005e056) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9e44,	// (0x0005e056) list_single_2graphic_pane_g4_cp2

0x9e50,	// (0x0005e062) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9e50,	// (0x0005e062) list_single_2graphic_pane_t1_cp2

0xec27,	// (0x00062e39) list_highlight_pane_g10_cp1

0x9a0f,	// (0x0005dc21) list_highlight_pane_g1_cp1

0x9a17,	// (0x0005dc29) list_highlight_pane_g2_cp1

0x9a1f,	// (0x0005dc31) list_highlight_pane_g3_cp1

0x9a27,	// (0x0005dc39) list_highlight_pane_g4_cp1

0x9a2f,	// (0x0005dc41) list_highlight_pane_g5_cp1

0x9a37,	// (0x0005dc49) list_highlight_pane_g6_cp1

0x9a3f,	// (0x0005dc51) list_highlight_pane_g7_cp1

0x9a47,	// (0x0005dc59) list_highlight_pane_g8_cp1

0x9a4f,	// (0x0005dc61) list_highlight_pane_g9_cp1

0x9937,	// (0x0005db49) form_field_slider_pane_t3

0x9945,	// (0x0005db57) form_field_slider_pane_t4

0x9953,	// (0x0005db65) slider_form_pane_ParamLimits

0x9953,	// (0x0005db65) slider_form_pane

0xec31,	// (0x00062e43) control_abbreviations

0xec31,	// (0x00062e43) control_conventions

0xec31,	// (0x00062e43) control_definitions

0xec31,	// (0x00062e43) format_table_attribute

0xa119,	// (0x0005e32b) bg_popup_preview_window_pane_g9

0xec31,	// (0x00062e43) format_table_data2

0xec31,	// (0x00062e43) format_table_data3

0xec31,	// (0x00062e43) format_table_data_example

0x0008,

0xec31,	// (0x00062e43) intro_purpose

0xf8f4,	// (0x00063b06) bg_popup_preview_window_pane_g

0xec31,	// (0x00062e43) texts_category

0xec31,	// (0x00062e43) texts_graphics

0x6ace,	// (0x0005ace0) text_digital

0x6add,	// (0x0005acef) text_primary

0x6aec,	// (0x0005acfe) text_primary_small

0x6afb,	// (0x0005ad0d) text_secondary

0x6b0a,	// (0x0005ad1c) text_title

0xa8b8,	// (0x0005eaca) bg_passive_tab_pane_g1_cp3_srt

0x686a,	// (0x0005aa7c) bg_passive_tab_pane_g2_cp3_srt

0xa8c1,	// (0x0005ead3) bg_passive_tab_pane_g3_cp3_srt

0xec7f,	// (0x00062e91) bg_active_tab_pane_cp3_srt_ParamLimits

0xec7f,	// (0x00062e91) bg_active_tab_pane_cp3_srt

0xa8ca,	// (0x0005eadc) tabs_4_active_pane_srt_g1

0xa8d2,	// (0x0005eae4) tabs_4_active_pane_srt_t1_ParamLimits

0xa8d2,	// (0x0005eae4) tabs_4_active_pane_srt_t1

0xa8b8,	// (0x0005eaca) bg_active_tab_pane_g1_cp3_copy1

0x686a,	// (0x0005aa7c) bg_active_tab_pane_g2_cp3_copy1

0xa8c1,	// (0x0005ead3) bg_active_tab_pane_g3_cp3_copy1

0xec7f,	// (0x00062e91) tabs_2_long_active_pane_srt_ParamLimits

0xec7f,	// (0x00062e91) tabs_2_long_active_pane_srt

0xec7f,	// (0x00062e91) tabs_2_long_passive_pane_srt_ParamLimits

0xec7f,	// (0x00062e91) tabs_2_long_passive_pane_srt

0x6333,	// (0x0005a545) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6333,	// (0x0005a545) bg_passive_tab_pane_cp4_srt

0xa547,	// (0x0005e759) bg_passive_tab_pane_g1_cp4_srt

0x686a,	// (0x0005aa7c) bg_passive_tab_pane_g2_cp4_srt

0xa550,	// (0x0005e762) bg_passive_tab_pane_g3_cp4_srt

0x20c0,	// (0x000562d2) bg_active_tab_pane_cp4_srt_ParamLimits

0x20c0,	// (0x000562d2) bg_active_tab_pane_cp4_srt

0xa559,	// (0x0005e76b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa559,	// (0x0005e76b) tabs_2_long_active_pane_srt_t1

0xa547,	// (0x0005e759) bg_active_tab_pane_g1_cp4_srt

0x686a,	// (0x0005aa7c) bg_active_tab_pane_g2_cp4_srt

0xa550,	// (0x0005e762) bg_active_tab_pane_g3_cp4_srt

0xeda9,	// (0x00062fbb) tabs_3_long_active_pane_srt_ParamLimits

0xeda9,	// (0x00062fbb) tabs_3_long_active_pane_srt

0xeda9,	// (0x00062fbb) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xeda9,	// (0x00062fbb) tabs_3_long_passive_pane_cp_srt

0xeda9,	// (0x00062fbb) tabs_3_long_passive_pane_srt_ParamLimits

0xeda9,	// (0x00062fbb) tabs_3_long_passive_pane_srt

0x6333,	// (0x0005a545) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6333,	// (0x0005a545) bg_passive_tab_pane_cp5_srt

0x69f7,	// (0x0005ac09) bg_passive_tab_pane_g1_cp5_srt

0x686a,	// (0x0005aa7c) bg_passive_tab_pane_g2_cp5_srt

0x6a00,	// (0x0005ac12) bg_passive_tab_pane_g3_cp5_srt

0x20c0,	// (0x000562d2) bg_active_tab_pane_cp5_srt_ParamLimits

0x20c0,	// (0x000562d2) bg_active_tab_pane_cp5_srt

0xa535,	// (0x0005e747) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa535,	// (0x0005e747) tabs_3_long_active_pane_srt_t1

0x69f7,	// (0x0005ac09) bg_active_tab_pane_g1_cp5_srt

0x686a,	// (0x0005aa7c) bg_active_tab_pane_g2_cp5_srt

0x6a00,	// (0x0005ac12) bg_active_tab_pane_g3_cp5_srt

0xa527,	// (0x0005e739) navi_text_pane_srt_t1

0xa51f,	// (0x0005e731) navi_icon_pane_srt_g1

0x8b5b,	// (0x0005cd6d) midp_editing_number_pane_srt

0x6b19,	// (0x0005ad2b) midp_ticker_pane_srt

0x8b63,	// (0x0005cd75) midp_ticker_pane_srt_g1

0x8b6b,	// (0x0005cd7d) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00063989) midp_ticker_pane_srt_g

0x8b73,	// (0x0005cd85) midp_ticker_pane_srt_t1

0xa510,	// (0x0005e722) midp_editing_number_pane_t1_copy1

0x6333,	// (0x0005a545) listscroll_midp_pane

0x6333,	// (0x0005a545) midp_form_pane

0x8a13,	// (0x0005cc25) midp_info_popup_window_ParamLimits

0x8a13,	// (0x0005cc25) midp_info_popup_window

0xf0eb,	// (0x000632fd) bg_popup_sub_pane_cp50_ParamLimits

0xf0eb,	// (0x000632fd) bg_popup_sub_pane_cp50

0x9657,	// (0x0005d869) listscroll_midp_info_pane_ParamLimits

0x9657,	// (0x0005d869) listscroll_midp_info_pane

0x963f,	// (0x0005d851) listscroll_form_midp_pane_ParamLimits

0x963f,	// (0x0005d851) listscroll_form_midp_pane

0x964b,	// (0x0005d85d) scroll_bar_cp050

0x961f,	// (0x0005d831) list_midp_pane

0xb466,	// (0x0005f678) signal_pane_g2_cp

0x9559,	// (0x0005d76b) listscroll_midp_info_pane_t1_ParamLimits

0x9559,	// (0x0005d76b) listscroll_midp_info_pane_t1

0x9571,	// (0x0005d783) listscroll_midp_info_pane_t2_ParamLimits

0x9571,	// (0x0005d783) listscroll_midp_info_pane_t2

0x95af,	// (0x0005d7c1) listscroll_midp_info_pane_t3_ParamLimits

0x95af,	// (0x0005d7c1) listscroll_midp_info_pane_t3

0x95e9,	// (0x0005d7fb) listscroll_midp_info_pane_t4_ParamLimits

0x95e9,	// (0x0005d7fb) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x00063a41) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x00063a41) listscroll_midp_info_pane_t

0xf161,	// (0x00063373) scroll_pane_cp21

0x94f9,	// (0x0005d70b) form_midp_field_choice_group_pane

0x9502,	// (0x0005d714) form_midp_field_text_pane

0x953f,	// (0x0005d751) form_midp_field_time_pane

0x9547,	// (0x0005d759) form_midp_gauge_slider_pane

0x9550,	// (0x0005d762) form_midp_gauge_wait_pane

0xec31,	// (0x00062e43) form_midp_image_pane

0x74a5,	// (0x0005b6b7) list_single_midp_pane_ParamLimits

0x74a5,	// (0x0005b6b7) list_single_midp_pane

0x94ae,	// (0x0005d6c0) form_midp_field_text_pane_t1

0x9278,	// (0x0005d48a) input_focus_pane_cp050

0x94e8,	// (0x0005d6fa) list_midp_form_text_pane

0x947d,	// (0x0005d68f) form_midp_field_choice_group_pane_t1

0x948b,	// (0x0005d69d) input_focus_pane_cp051

0x949f,	// (0x0005d6b1) list_midp_choice_pane

0xec31,	// (0x00062e43) status_idle_pane

0x9461,	// (0x0005d673) form_midp_field_time_pane_t1

0xec27,	// (0x00062e39) wait_anim_pane_g2_copy1

0x946f,	// (0x0005d681) form_midp_field_time_pane_t2

0x0001,

0x8ac3,	// (0x0005ccd5) aid_navinavi_width_2_pane

0xf82a,	// (0x00063a3c) form_midp_field_time_pane_t

0xec31,	// (0x00062e43) input_focus_pane_cp052

0xec31,	// (0x00062e43) bg_input_focus_pane_cp040

0x9421,	// (0x0005d633) form_midp_gauge_slider_pane_t1

0x942f,	// (0x0005d641) form_midp_gauge_slider_pane_t2

0x943d,	// (0x0005d64f) form_midp_gauge_slider_pane_t3

0x944b,	// (0x0005d65d) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x00063a33) form_midp_gauge_slider_pane_t

0x9459,	// (0x0005d66b) form_midp_slider_pane

0xec7f,	// (0x00062e91) bg_input_focus_pane_cp041_ParamLimits

0xec7f,	// (0x00062e91) bg_input_focus_pane_cp041

0x93ee,	// (0x0005d600) form_midp_gauge_wait_pane_t1_ParamLimits

0x93ee,	// (0x0005d600) form_midp_gauge_wait_pane_t1

0x9400,	// (0x0005d612) form_midp_gauge_wait_pane_t2_ParamLimits

0x9400,	// (0x0005d612) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x00063a2e) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x00063a2e) form_midp_gauge_wait_pane_t

0x9412,	// (0x0005d624) form_midp_wait_pane_ParamLimits

0x9412,	// (0x0005d624) form_midp_wait_pane

0x93b8,	// (0x0005d5ca) form_midp_image_pane_g1

0x93c1,	// (0x0005d5d3) form_midp_image_pane_t1

0x93d0,	// (0x0005d5e2) form_midp_image_pane_t2

0x93df,	// (0x0005d5f1) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x00063a27) form_midp_image_pane_t

0x93af,	// (0x0005d5c1) list_single_midp_pane_g1

0x386a,	// (0x00057a7c) list_single_midp_pane_t1

0x9386,	// (0x0005d598) list_midp_form_item_pane_ParamLimits

0x9386,	// (0x0005d598) list_midp_form_item_pane

0x8a6b,	// (0x0005cc7d) list_midp_form_item_pane_t1

0x8a7a,	// (0x0005cc8c) midp_ticker_pane_g1

0x8a86,	// (0x0005cc98) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0006396f) midp_ticker_pane_g

0x8a92,	// (0x0005cca4) midp_ticker_pane_t1

0xa761,	// (0x0005e973) midp_editing_number_pane_t1

0xa73f,	// (0x0005e951) midp_editing_number_pane

0xa74e,	// (0x0005e960) midp_ticker_pane

0xa500,	// (0x0005e712) ai_message_heading_pane

0xec31,	// (0x00062e43) bg_popup_window_pane_cp14

0xa508,	// (0x0005e71a) listscroll_ai_message_pane

0xa48a,	// (0x0005e69c) ai_message_heading_pane_g1_ParamLimits

0xa48a,	// (0x0005e69c) ai_message_heading_pane_g1

0xa496,	// (0x0005e6a8) ai_message_heading_pane_g2_ParamLimits

0xa496,	// (0x0005e6a8) ai_message_heading_pane_g2

0xa4a2,	// (0x0005e6b4) ai_message_heading_pane_g3_ParamLimits

0xa4a2,	// (0x0005e6b4) ai_message_heading_pane_g3

0xa4ae,	// (0x0005e6c0) ai_message_heading_pane_g4_ParamLimits

0xa4ae,	// (0x0005e6c0) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x00063b68) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x00063b68) ai_message_heading_pane_g

0xa4ba,	// (0x0005e6cc) ai_message_heading_pane_t1_ParamLimits

0xa4ba,	// (0x0005e6cc) ai_message_heading_pane_t1

0xa4d4,	// (0x0005e6e6) ai_message_heading_pane_t2_ParamLimits

0xa4d4,	// (0x0005e6e6) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x00063b71) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x00063b71) ai_message_heading_pane_t

0xa4e6,	// (0x0005e6f8) bg_popup_heading_pane_cp1_ParamLimits

0xa4e6,	// (0x0005e6f8) bg_popup_heading_pane_cp1

0xa478,	// (0x0005e68a) list_ai_message_pane_ParamLimits

0xa478,	// (0x0005e68a) list_ai_message_pane

0xf161,	// (0x00063373) scroll_pane_cp10

0xa414,	// (0x0005e626) list_ai_message_pane_g1

0xa41c,	// (0x0005e62e) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x00063b45) list_ai_message_pane_g

0xa424,	// (0x0005e636) list_ai_message_pane_t1_ParamLimits

0xa424,	// (0x0005e636) list_ai_message_pane_t1

0xa439,	// (0x0005e64b) list_ai_message_pane_t2_ParamLimits

0xa439,	// (0x0005e64b) list_ai_message_pane_t2

0xa44e,	// (0x0005e660) list_ai_message_pane_t3_ParamLimits

0xa44e,	// (0x0005e660) list_ai_message_pane_t3

0xa463,	// (0x0005e675) list_ai_message_pane_t4_ParamLimits

0xa463,	// (0x0005e675) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x00063b4a) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x00063b4a) list_ai_message_pane_t

0xa3ff,	// (0x0005e611) cell_ai_soft_ind_pane_ParamLimits

0xa3ff,	// (0x0005e611) cell_ai_soft_ind_pane

0x8aa4,	// (0x0005ccb6) cell_ai_soft_ind_pane_g1_ParamLimits

0x8aa4,	// (0x0005ccb6) cell_ai_soft_ind_pane_g1

0xec31,	// (0x00062e43) grid_highlight_cp1

0x8ab1,	// (0x0005ccc3) text_secondary_cp56_ParamLimits

0x8ab1,	// (0x0005ccc3) text_secondary_cp56

0xa3d4,	// (0x0005e5e6) example_general_pane_ParamLimits

0xa3d4,	// (0x0005e5e6) example_general_pane

0xa3e0,	// (0x0005e5f2) example_parent_pane_g1_ParamLimits

0xa3e0,	// (0x0005e5f2) example_parent_pane_g1

0xa3ec,	// (0x0005e5fe) example_parent_pane_t1_ParamLimits

0xa3ec,	// (0x0005e5fe) example_parent_pane_t1

0x7139,	// (0x0005b34b) popup_preview_text_window_ParamLimits

0x7139,	// (0x0005b34b) popup_preview_text_window

0x36fc,	// (0x0005790e) list_single_pane_cp2_g4

0xee5f,	// (0x00063071) bg_popup_preview_window_pane_ParamLimits

0xee5f,	// (0x00063071) bg_popup_preview_window_pane

0xa121,	// (0x0005e333) popup_preview_text_window_t1_ParamLimits

0xa121,	// (0x0005e333) popup_preview_text_window_t1

0xa13f,	// (0x0005e351) popup_preview_text_window_t2_ParamLimits

0xa13f,	// (0x0005e351) popup_preview_text_window_t2

0xa188,	// (0x0005e39a) popup_preview_text_window_t3_ParamLimits

0xa188,	// (0x0005e39a) popup_preview_text_window_t3

0xa1cd,	// (0x0005e3df) popup_preview_text_window_t4_ParamLimits

0xa1cd,	// (0x0005e3df) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x00063b19) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x00063b19) popup_preview_text_window_t

0xa24b,	// (0x0005e45d) scroll_pane_cp11

0x91ec,	// (0x0005d3fe) bg_popup_preview_window_pane_g1

0xa0e1,	// (0x0005e2f3) bg_popup_preview_window_pane_g2

0xa0e9,	// (0x0005e2fb) bg_popup_preview_window_pane_g3

0xa0f1,	// (0x0005e303) bg_popup_preview_window_pane_g4

0xa0f9,	// (0x0005e30b) bg_popup_preview_window_pane_g5

0xa101,	// (0x0005e313) bg_popup_preview_window_pane_g6

0xa109,	// (0x0005e31b) bg_popup_preview_window_pane_g7

0xa111,	// (0x0005e323) bg_popup_preview_window_pane_g8

0x526d,	// (0x0005947f) aid_popup_width_pane

0x7117,	// (0x0005b329) popup_midp_note_alarm_window_ParamLimits

0x7117,	// (0x0005b329) popup_midp_note_alarm_window

0xf033,	// (0x00063245) data_form_pane_ParamLimits

0x6141,	// (0x0005a353) form_field_data_pane_g1

0x614b,	// (0x0005a35d) form_field_data_pane_t1_ParamLimits

0xf03f,	// (0x00063251) input_focus_pane_ParamLimits

0x6163,	// (0x0005a375) data_form_wide_pane_ParamLimits

0x34aa,	// (0x000576bc) form_field_data_wide_pane_g1

0x6174,	// (0x0005a386) form_field_data_wide_pane_t1_ParamLimits

0xef33,	// (0x00063145) input_focus_pane_cp6_ParamLimits

0x62d7,	// (0x0005a4e9) input_popup_find_pane_g1_ParamLimits

0x62d7,	// (0x0005a4e9) input_popup_find_pane_g1

0x6469,	// (0x0005a67b) aid_navi_side_left_pane

0x647e,	// (0x0005a690) aid_navi_side_right_pane

0x9b0a,	// (0x0005dd1c) bg_popup_window_pane_cp30_ParamLimits

0x9b0a,	// (0x0005dd1c) bg_popup_window_pane_cp30

0x9b84,	// (0x0005dd96) popup_midp_note_alarm_window_g1_ParamLimits

0x9b84,	// (0x0005dd96) popup_midp_note_alarm_window_g1

0x9bb4,	// (0x0005ddc6) popup_midp_note_alarm_window_t1_ParamLimits

0x9bb4,	// (0x0005ddc6) popup_midp_note_alarm_window_t1

0x9c55,	// (0x0005de67) popup_midp_note_alarm_window_t2_ParamLimits

0x9c55,	// (0x0005de67) popup_midp_note_alarm_window_t2

0x9d03,	// (0x0005df15) popup_midp_note_alarm_window_t3_ParamLimits

0x9d03,	// (0x0005df15) popup_midp_note_alarm_window_t3

0x9d2b,	// (0x0005df3d) popup_midp_note_alarm_window_t4_ParamLimits

0x9d2b,	// (0x0005df3d) popup_midp_note_alarm_window_t4

0x9d4b,	// (0x0005df5d) popup_midp_note_alarm_window_t5_ParamLimits

0x9d4b,	// (0x0005df5d) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x00063ab6) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x00063ab6) popup_midp_note_alarm_window_t

0x9df7,	// (0x0005e009) wait_bar_pane_cp1_ParamLimits

0x9df7,	// (0x0005e009) wait_bar_pane_cp1

0xec31,	// (0x00062e43) wait_anim_pane_copy1

0xec31,	// (0x00062e43) wait_border_pane_copy1

0x9800,	// (0x0005da12) wait_border_pane_g1_copy1

0x34b6,	// (0x000576c8) form_field_popup_pane_g1

0x618e,	// (0x0005a3a0) form_field_popup_pane_t1_ParamLimits

0xf03f,	// (0x00063251) input_focus_pane_cp7_ParamLimits

0xf06d,	// (0x0006327f) list_form_pane_ParamLimits

0x34be,	// (0x000576d0) form_field_popup_wide_pane_g1

0x34c6,	// (0x000576d8) form_field_popup_wide_pane_t1_ParamLimits

0xf03f,	// (0x00063251) input_focus_pane_cp8_ParamLimits

0xf079,	// (0x0006328b) list_form_wide_pane_ParamLimits

0xa950,	// (0x0005eb62) aid_size_cell_graphic_pane

0x6209,	// (0x0005a41b) data_form_pane_t1_ParamLimits

0x772d,	// (0x0005b93f) data_form_wide_pane_t1_ParamLimits

0x8db6,	// (0x0005cfc8) bg_status_flat_pane

0x5676,	// (0x00059888) title_pane_t1_ParamLimits

0xec47,	// (0x00062e59) title_pane_t2_ParamLimits

0xec6d,	// (0x00062e7f) title_pane_t3_ParamLimits

0xf557,	// (0x00063769) title_pane_t_ParamLimits

0xf40a,	// (0x0006361c) level_1_signal_ParamLimits

0xf417,	// (0x00063629) level_2_signal_ParamLimits

0xf424,	// (0x00063636) level_3_signal_ParamLimits

0xf431,	// (0x00063643) level_4_signal_ParamLimits

0xf43e,	// (0x00063650) level_5_signal_ParamLimits

0xf44b,	// (0x0006365d) level_6_signal_ParamLimits

0xf458,	// (0x0006366a) level_7_signal_ParamLimits

0xf40a,	// (0x0006361c) level_1_battery_ParamLimits

0xf417,	// (0x00063629) level_2_battery_ParamLimits

0xf424,	// (0x00063636) level_3_battery_ParamLimits

0xf431,	// (0x00063643) level_4_battery_ParamLimits

0xf43e,	// (0x00063650) level_5_battery_ParamLimits

0xf44b,	// (0x0006365d) level_6_battery_ParamLimits

0xf458,	// (0x0006366a) level_7_battery_ParamLimits

0x9a0f,	// (0x0005dc21) bg_status_flat_pane_g1

0x9a17,	// (0x0005dc29) bg_status_flat_pane_g2

0x9a1f,	// (0x0005dc31) bg_status_flat_pane_g3

0x9a27,	// (0x0005dc39) bg_status_flat_pane_g4

0x9a2f,	// (0x0005dc41) bg_status_flat_pane_g5

0x9a37,	// (0x0005dc49) bg_status_flat_pane_g6

0x9a3f,	// (0x0005dc51) bg_status_flat_pane_g7

0x56e6,	// (0x000598f8) tabs_3_active_pane_t1_ParamLimits

0x56e6,	// (0x000598f8) tabs_3_passive_pane_t1_ParamLimits

0x5700,	// (0x00059912) tabs_4_active_pane_t1_ParamLimits

0x5700,	// (0x00059912) tabs_4_1_passive_pane_t1_ParamLimits

0x630e,	// (0x0005a520) tabs_2_active_pane_t1_ParamLimits

0x630e,	// (0x0005a520) tabs_2_passive_pane_t1_ParamLimits

0x20c0,	// (0x000562d2) bg_active_tab_pane_cp4_ParamLimits

0x6320,	// (0x0005a532) tabs_2_long_active_pane_t1_ParamLimits

0x6333,	// (0x0005a545) bg_passive_tab_pane_cp4_ParamLimits

0x73f2,	// (0x0005b604) list_single_midp_graphic_pane_t1_ParamLimits

0x20c0,	// (0x000562d2) bg_active_tab_pane_cp5_ParamLimits

0x633f,	// (0x0005a551) tabs_3_long_active_pane_t1_ParamLimits

0x6333,	// (0x0005a545) bg_passive_tab_pane_cp5_ParamLimits

0x73f2,	// (0x0005b604) list_single_midp_graphic_pane_t1

0x8db6,	// (0x0005cfc8) bg_status_flat_pane_ParamLimits

0x8e7f,	// (0x0005d091) indicator_pane_cp2_ParamLimits

0x8e7f,	// (0x0005d091) indicator_pane_cp2

0x8faa,	// (0x0005d1bc) navi_pane_srt_ParamLimits

0x8faa,	// (0x0005d1bc) navi_pane_srt

0x8fce,	// (0x0005d1e0) popup_clock_digital_analogue_window_cp1

0xecc3,	// (0x00062ed5) indicator_pane_t1

0x6b19,	// (0x0005ad2b) copy_highlight_pane

0x6b19,	// (0x0005ad2b) cursor_graphics_pane

0x6b19,	// (0x0005ad2b) graphic_within_text_pane

0x6b19,	// (0x0005ad2b) link_highlight_pane

0xa20e,	// (0x0005e420) popup_preview_text_window_t5_ParamLimits

0xa20e,	// (0x0005e420) popup_preview_text_window_t5

0x8acb,	// (0x0005ccdd) cursor_digital_pane

0x8acb,	// (0x0005ccdd) cursor_primary_pane

0x8adc,	// (0x0005ccee) cursor_primary_small_pane

0x8ae4,	// (0x0005ccf6) cursor_secondary_pane

0x8aec,	// (0x0005ccfe) cursor_title_pane

0x8acb,	// (0x0005ccdd) link_highlight_digital_pane

0x8ad3,	// (0x0005cce5) link_highlight_primary_pane

0x8adc,	// (0x0005ccee) link_highlight_primary_small_pane

0x8ae4,	// (0x0005ccf6) link_highlight_secondary_pane

0x8aec,	// (0x0005ccfe) link_highlight_title_pane

0x8acb,	// (0x0005ccdd) copy_highlight_digital_pane

0x8acb,	// (0x0005ccdd) copy_highlight_primary_pane

0x8adc,	// (0x0005ccee) copy_highlight_primary_small_pane

0x8ae4,	// (0x0005ccf6) copy_highlight_secondary_pane

0x8aec,	// (0x0005ccfe) copy_highlight_title_pane

0x8ae4,	// (0x0005ccf6) graphic_text_digital_pane

0x9aad,	// (0x0005dcbf) graphic_text_primary_pane

0x9ab6,	// (0x0005dcc8) graphic_text_primary_small_pane

0x8adc,	// (0x0005ccee) graphic_text_secondary_pane

0x8acb,	// (0x0005ccdd) graphic_text_title_pane

0x8af4,	// (0x0005cd06) cursor_primary_pane_g1

0x9a9f,	// (0x0005dcb1) cursor_text_primary_t1

0x9a87,	// (0x0005dc99) cursor_primary_small_pane_g1

0x9a91,	// (0x0005dca3) cursor_text_primary_small_t1

0x9a6f,	// (0x0005dc81) cursor_primary_small_pane_g1_copy1

0x9a79,	// (0x0005dc8b) cursor_text_primary_small_t1_copy1

0x9a57,	// (0x0005dc69) cursor_text_title_t1

0x9a65,	// (0x0005dc77) cursor_title_pane_g1

0x8af4,	// (0x0005cd06) cursor_digital_pane_g1

0x8afe,	// (0x0005cd10) cursor_text_digital_t1

0x8b0c,	// (0x0005cd1e) link_highlight_primary_pane_g1

0x9a00,	// (0x0005dc12) link_highlight_primary_pane_t1

0x8b0c,	// (0x0005cd1e) link_highlight_primary_small_pane_g1

0x8b14,	// (0x0005cd26) link_highlight_primary_small_pane_t1

0x8b0c,	// (0x0005cd1e) link_highlight_secondary_pane_g1

0x8b23,	// (0x0005cd35) link_highlight_secondary_pane_t1

0x9965,	// (0x0005db77) link_highlight_title_pane_g1

0x997c,	// (0x0005db8e) link_highlight_title_pane_t1

0x9965,	// (0x0005db77) link_highlight_digital_pane_g1

0x996d,	// (0x0005db7f) link_highlight_digital_pane_t1

0x981f,	// (0x0005da31) copy_highlight_primary_pane_g1

0x9845,	// (0x0005da57) copy_highlight_primary_pane_t1

0x981f,	// (0x0005da31) copy_highlight_primary_small_pane_g1

0x9836,	// (0x0005da48) copy_highlight_primary_small_pane_t1

0x8b32,	// (0x0005cd44) copy_highlight_secondary_pane_g1

0x8b3a,	// (0x0005cd4c) copy_highlight_secondary_pane_t1

0x981f,	// (0x0005da31) copy_highlight_title_pane_g1

0x9827,	// (0x0005da39) copy_highlight_title_pane_t1

0x981f,	// (0x0005da31) copy_highlight_digital_pane_g1

0xac81,	// (0x0005ee93) copy_highlight_digital_pane_t1

0xabd5,	// (0x0005ede7) graphic_text_primary_pane_g1

0xac65,	// (0x0005ee77) graphic_text_primary_pane_t1

0xac73,	// (0x0005ee85) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x00063be5) graphic_text_primary_pane_t

0xac41,	// (0x0005ee53) graphic_text_primary_small_pane_g1

0xac49,	// (0x0005ee5b) graphic_text_primary_small_pane_t1

0xac57,	// (0x0005ee69) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x00063be0) graphic_text_primary_small_pane_t

0xac1d,	// (0x0005ee2f) graphic_text_secondary_pane_g1

0xac25,	// (0x0005ee37) graphic_text_secondary_pane_t1

0xac33,	// (0x0005ee45) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x00063bdb) graphic_text_secondary_pane_t

0xabf9,	// (0x0005ee0b) graphic_text_title_pane_g1

0xac01,	// (0x0005ee13) graphic_text_title_pane_t1

0xac0f,	// (0x0005ee21) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x00063bd6) graphic_text_title_pane_t

0xabd5,	// (0x0005ede7) graphic_text_digital_pane_g1

0xabdd,	// (0x0005edef) graphic_text_digital_pane_t1

0xabeb,	// (0x0005edfd) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x00063bd1) graphic_text_digital_pane_t

0xec7f,	// (0x00062e91) navi_icon_pane_srt_ParamLimits

0xec7f,	// (0x00062e91) navi_icon_pane_srt

0xec31,	// (0x00062e43) navi_midp_pane_srt

0xec31,	// (0x00062e43) navi_navi_pane_srt

0xec7f,	// (0x00062e91) navi_text_pane_srt_ParamLimits

0xec7f,	// (0x00062e91) navi_text_pane_srt

0xaba0,	// (0x0005edb2) navi_navi_icon_text_pane_srt

0xaba8,	// (0x0005edba) navi_navi_pane_srt_g1_ParamLimits

0xaba8,	// (0x0005edba) navi_navi_pane_srt_g1

0xabba,	// (0x0005edcc) navi_navi_pane_srt_g2_ParamLimits

0xabba,	// (0x0005edcc) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x00063bcc) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x00063bcc) navi_navi_pane_srt_g

0xabcc,	// (0x0005edde) navi_navi_tabs_pane_srt

0xaba0,	// (0x0005edb2) navi_navi_text_pane_srt

0xaba0,	// (0x0005edb2) navi_navi_volume_pane_srt

0xab91,	// (0x0005eda3) navi_navi_text_pane_srt_t1

0x7847,	// (0x0005ba59) navi_navi_volume_pane_srt_g1

0x784f,	// (0x0005ba61) volume_small_pane_srt_ParamLimits

0x784f,	// (0x0005ba61) volume_small_pane_srt

0x6b87,	// (0x0005ad99) volume_small_pane_srt_g1_ParamLimits

0x6b87,	// (0x0005ad99) volume_small_pane_srt_g1

0x6b97,	// (0x0005ada9) volume_small_pane_srt_g2_ParamLimits

0x6b97,	// (0x0005ada9) volume_small_pane_srt_g2

0x6ba8,	// (0x0005adba) volume_small_pane_srt_g3_ParamLimits

0x6ba8,	// (0x0005adba) volume_small_pane_srt_g3

0x6bb9,	// (0x0005adcb) volume_small_pane_srt_g4_ParamLimits

0x6bb9,	// (0x0005adcb) volume_small_pane_srt_g4

0x6bca,	// (0x0005addc) volume_small_pane_srt_g5_ParamLimits

0x6bca,	// (0x0005addc) volume_small_pane_srt_g5

0x6bdb,	// (0x0005aded) volume_small_pane_srt_g6_ParamLimits

0x6bdb,	// (0x0005aded) volume_small_pane_srt_g6

0x6bec,	// (0x0005adfe) volume_small_pane_srt_g7_ParamLimits

0x6bec,	// (0x0005adfe) volume_small_pane_srt_g7

0x6bfd,	// (0x0005ae0f) volume_small_pane_srt_g8_ParamLimits

0x6bfd,	// (0x0005ae0f) volume_small_pane_srt_g8

0x6c0e,	// (0x0005ae20) volume_small_pane_srt_g9_ParamLimits

0x6c0e,	// (0x0005ae20) volume_small_pane_srt_g9

0x6c1f,	// (0x0005ae31) volume_small_pane_srt_g10_ParamLimits

0x6c1f,	// (0x0005ae31) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00063974) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00063974) volume_small_pane_srt_g

0x5927,	// (0x00059b39) query_popup_data_pane_cp2

0xaa10,	// (0x0005ec22) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaa10,	// (0x0005ec22) navi_navi_icon_text_pane_srt_t1

0x9aad,	// (0x0005dcbf) navi_tabs_2_long_pane_srt

0x9aad,	// (0x0005dcbf) navi_tabs_2_pane_srt

0x9aad,	// (0x0005dcbf) navi_tabs_3_long_pane_srt

0x9aad,	// (0x0005dcbf) navi_tabs_3_pane_srt

0x9aad,	// (0x0005dcbf) navi_tabs_4_pane_srt

0x7827,	// (0x0005ba39) tabs_2_active_pane_srt_ParamLimits

0x7827,	// (0x0005ba39) tabs_2_active_pane_srt

0x7837,	// (0x0005ba49) tabs_2_passive_pane_srt_ParamLimits

0x7837,	// (0x0005ba49) tabs_2_passive_pane_srt

0x8cdf,	// (0x0005cef1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8cdf,	// (0x0005cef1) bg_passive_tab_pane_cp1_srt

0xa9dc,	// (0x0005ebee) bg_passive_tab_pane_g1_cp1_srt

0x686a,	// (0x0005aa7c) bg_passive_tab_pane_g2_cp1_srt

0xa9e5,	// (0x0005ebf7) bg_passive_tab_pane_g3_cp1_srt

0xec7f,	// (0x00062e91) bg_active_tab_pane_cp1_srt_ParamLimits

0xec7f,	// (0x00062e91) bg_active_tab_pane_cp1_srt

0xa9ee,	// (0x0005ec00) tabs_2_active_pane_srt_g1

0xa9f6,	// (0x0005ec08) tabs_2_active_pane_srt_t1_ParamLimits

0xa9f6,	// (0x0005ec08) tabs_2_active_pane_srt_t1

0xa9dc,	// (0x0005ebee) bg_active_tab_pane_g1_cp1_srt

0x686a,	// (0x0005aa7c) bg_active_tab_pane_g2_cp1_srt

0xa9e5,	// (0x0005ebf7) bg_active_tab_pane_g3_cp1_srt

0x77f4,	// (0x0005ba06) tabs_3_active_pane_srt_ParamLimits

0x77f4,	// (0x0005ba06) tabs_3_active_pane_srt

0x7805,	// (0x0005ba17) tabs_3_passive_pane_cp_srt_ParamLimits

0x7805,	// (0x0005ba17) tabs_3_passive_pane_cp_srt

0x7816,	// (0x0005ba28) tabs_3_passive_pane_srt_ParamLimits

0x7816,	// (0x0005ba28) tabs_3_passive_pane_srt

0x8cdf,	// (0x0005cef1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8cdf,	// (0x0005cef1) bg_passive_tab_pane_cp2_srt

0x8b49,	// (0x0005cd5b) bg_passive_tab_pane_g1_cp2_srt

0x686a,	// (0x0005aa7c) bg_passive_tab_pane_g2_cp2_srt

0x8b52,	// (0x0005cd64) bg_passive_tab_pane_g3_cp2_srt

0xec7f,	// (0x00062e91) bg_active_tab_pane_cp2_srt_ParamLimits

0xec7f,	// (0x00062e91) bg_active_tab_pane_cp2_srt

0xa9c2,	// (0x0005ebd4) tabs_3_active_pane_srt_g1

0xa9ca,	// (0x0005ebdc) tabs_3_active_pane_srt_t1_ParamLimits

0xa9ca,	// (0x0005ebdc) tabs_3_active_pane_srt_t1

0x8b49,	// (0x0005cd5b) bg_active_tab_pane_g1_cp2_srt

0x686a,	// (0x0005aa7c) bg_active_tab_pane_g2_cp2_srt

0x8b52,	// (0x0005cd64) bg_active_tab_pane_g3_cp2_srt

0x77ac,	// (0x0005b9be) tabs_4_active_pane_srt_ParamLimits

0x77ac,	// (0x0005b9be) tabs_4_active_pane_srt

0x77be,	// (0x0005b9d0) tabs_4_passive_pane_cp2_srt_ParamLimits

0x77be,	// (0x0005b9d0) tabs_4_passive_pane_cp2_srt

0x6d84,	// (0x0005af96) aid_size_cell_toolbar

0x6333,	// (0x0005a545) main_idle_act_pane_ParamLimits

0x6f49,	// (0x0005b15b) popup_large_graphic_colour_window_ParamLimits

0x72b4,	// (0x0005b4c6) popup_toolbar_window_ParamLimits

0x72b4,	// (0x0005b4c6) popup_toolbar_window

0xa770,	// (0x0005e982) list_single_graphic_2heading_pane_ParamLimits

0xa770,	// (0x0005e982) list_single_graphic_2heading_pane

0xf2f2,	// (0x00063504) aid_size_cell_apps_grid_lsc_pane

0xf304,	// (0x00063516) aid_size_cell_apps_grid_prt_pane

0x8cdf,	// (0x0005cef1) bg_wml_button_pane_cp1_ParamLimits

0x8cdf,	// (0x0005cef1) bg_wml_button_pane_cp1

0x94ae,	// (0x0005d6c0) form_midp_field_text_pane_t1_ParamLimits

0x9278,	// (0x0005d48a) input_focus_pane_cp050_ParamLimits

0x94e8,	// (0x0005d6fa) list_midp_form_text_pane_ParamLimits

0x948b,	// (0x0005d69d) input_focus_pane_cp051_ParamLimits

0x949f,	// (0x0005d6b1) list_midp_choice_pane_ParamLimits

0x932e,	// (0x0005d540) list_single_2graphic_pane_cp3_ParamLimits

0x932e,	// (0x0005d540) list_single_2graphic_pane_cp3

0x9353,	// (0x0005d565) list_single_midp_graphic_pane_ParamLimits

0x9353,	// (0x0005d565) list_single_midp_graphic_pane

0x51db,	// (0x000593ed) list_single_graphic_2heading_pane_g1_ParamLimits

0x51db,	// (0x000593ed) list_single_graphic_2heading_pane_g1

0x51e7,	// (0x000593f9) list_single_graphic_2heading_pane_g4_ParamLimits

0x51e7,	// (0x000593f9) list_single_graphic_2heading_pane_g4

0x51f3,	// (0x00059405) list_single_graphic_2heading_pane_g5_ParamLimits

0x51f3,	// (0x00059405) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x000639c7) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x000639c7) list_single_graphic_2heading_pane_g

0x51ff,	// (0x00059411) list_single_graphic_2heading_pane_t1_ParamLimits

0x51ff,	// (0x00059411) list_single_graphic_2heading_pane_t1

0x5213,	// (0x00059425) list_single_graphic_2heading_pane_t2_ParamLimits

0x5213,	// (0x00059425) list_single_graphic_2heading_pane_t2

0x522d,	// (0x0005943f) list_single_graphic_2heading_pane_t3_ParamLimits

0x522d,	// (0x0005943f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x000639ce) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x000639ce) list_single_graphic_2heading_pane_t

0x912a,	// (0x0005d33c) bg_popup_sub_pane_cp2

0x9154,	// (0x0005d366) grid_toobar_pane

0x7361,	// (0x0005b573) cell_toolbar_pane_ParamLimits

0x7361,	// (0x0005b573) cell_toolbar_pane

0x9190,	// (0x0005d3a2) cell_toolbar_pane_g1_ParamLimits

0x9190,	// (0x0005d3a2) cell_toolbar_pane_g1

0x91a4,	// (0x0005d3b6) cell_toolbar_pane_g2_ParamLimits

0x91a4,	// (0x0005d3b6) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x000639dc) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x000639dc) cell_toolbar_pane_g

0x91c6,	// (0x0005d3d8) grid_highlight_pane_cp2_ParamLimits

0x91c6,	// (0x0005d3d8) grid_highlight_pane_cp2

0x91e0,	// (0x0005d3f2) toolbar_button_pane

0x91ec,	// (0x0005d3fe) toolbar_button_pane_g1

0x91f4,	// (0x0005d406) toolbar_button_pane_g2

0x91fc,	// (0x0005d40e) toolbar_button_pane_g3

0x9204,	// (0x0005d416) toolbar_button_pane_g4

0x920c,	// (0x0005d41e) toolbar_button_pane_g5

0x9214,	// (0x0005d426) toolbar_button_pane_g6

0x921c,	// (0x0005d42e) toolbar_button_pane_g7

0x9224,	// (0x0005d436) toolbar_button_pane_g8

0x922c,	// (0x0005d43e) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x000639e1) toolbar_button_pane_g

0x7399,	// (0x0005b5ab) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7399,	// (0x0005b5ab) list_single_2graphic_pane_g1_cp3

0x73a5,	// (0x0005b5b7) list_single_2graphic_pane_g2_cp3_ParamLimits

0x73a5,	// (0x0005b5b7) list_single_2graphic_pane_g2_cp3

0x73b6,	// (0x0005b5c8) list_single_2graphic_pane_g3_cp3

0x73be,	// (0x0005b5d0) list_single_2graphic_pane_g4_cp3_ParamLimits

0x73be,	// (0x0005b5d0) list_single_2graphic_pane_g4_cp3

0x73ca,	// (0x0005b5dc) list_single_2graphic_pane_t1_cp3_ParamLimits

0x73ca,	// (0x0005b5dc) list_single_2graphic_pane_t1_cp3

0x73e6,	// (0x0005b5f8) list_single_midp_graphic_pane_g2_ParamLimits

0x73e6,	// (0x0005b5f8) list_single_midp_graphic_pane_g2

0x51d3,	// (0x000593e5) aid_zoom_text_primary

0x6d8c,	// (0x0005af9e) aid_zoom_text_secondary

0x8c03,	// (0x0005ce15) status_small_pane_g7_ParamLimits

0x8c03,	// (0x0005ce15) status_small_pane_g7

0x8c26,	// (0x0005ce38) status_small_pane_t1_ParamLimits

0x5659,	// (0x0005986b) title_pane_g2

0x0003,

0xf54e,	// (0x00063760) title_pane_g

0x5981,	// (0x00059b93) aid_size_cell_colour_1_pane_ParamLimits

0x5981,	// (0x00059b93) aid_size_cell_colour_1_pane

0x5995,	// (0x00059ba7) aid_size_cell_colour_2_pane_ParamLimits

0x5995,	// (0x00059ba7) aid_size_cell_colour_2_pane

0x59a9,	// (0x00059bbb) aid_size_cell_colour_3_pane_ParamLimits

0x59a9,	// (0x00059bbb) aid_size_cell_colour_3_pane

0x59bd,	// (0x00059bcf) aid_size_cell_colour_4_pane_ParamLimits

0x59bd,	// (0x00059bcf) aid_size_cell_colour_4_pane

0x63a6,	// (0x0005a5b8) title_pane_stacon_g1_ParamLimits

0x63a6,	// (0x0005a5b8) title_pane_stacon_g1

0x989c,	// (0x0005daae) popup_note_wait_window_g3_ParamLimits

0x989c,	// (0x0005daae) popup_note_wait_window_g3

0x9912,	// (0x0005db24) popup_note_wait_window_t5_ParamLimits

0x9912,	// (0x0005db24) popup_note_wait_window_t5

0xec31,	// (0x00062e43) main_feb_china_hwr_fs_writing_pane

0x6e30,	// (0x0005b042) popup_feb_china_hwr_fs_window_ParamLimits

0x6e30,	// (0x0005b042) popup_feb_china_hwr_fs_window

0x7408,	// (0x0005b61a) aid_size_cell_hwr_fs_ParamLimits

0x7408,	// (0x0005b61a) aid_size_cell_hwr_fs

0x9278,	// (0x0005d48a) bg_popup_sub_pane_cp3_ParamLimits

0x9278,	// (0x0005d48a) bg_popup_sub_pane_cp3

0x741d,	// (0x0005b62f) grid_hwr_fs_pane_ParamLimits

0x741d,	// (0x0005b62f) grid_hwr_fs_pane

0x7435,	// (0x0005b647) linegrid_hwr_fs_pane_ParamLimits

0x7435,	// (0x0005b647) linegrid_hwr_fs_pane

0x7445,	// (0x0005b657) cell_hwr_fs_pane_ParamLimits

0x7445,	// (0x0005b657) cell_hwr_fs_pane

0x9284,	// (0x0005d496) linegrid_hwr_fs_pane_g1_ParamLimits

0x9284,	// (0x0005d496) linegrid_hwr_fs_pane_g1

0x9290,	// (0x0005d4a2) linegrid_hwr_fs_pane_g2_ParamLimits

0x9290,	// (0x0005d4a2) linegrid_hwr_fs_pane_g2

0x92a2,	// (0x0005d4b4) linegrid_hwr_fs_pane_g3_ParamLimits

0x92a2,	// (0x0005d4b4) linegrid_hwr_fs_pane_g3

0x7467,	// (0x0005b679) linegrid_hwr_fs_pane_g4_ParamLimits

0x7467,	// (0x0005b679) linegrid_hwr_fs_pane_g4

0x7481,	// (0x0005b693) linegrid_hwr_fs_pane_g5_ParamLimits

0x7481,	// (0x0005b693) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x00063a0c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x00063a0c) linegrid_hwr_fs_pane_g

0x92ae,	// (0x0005d4c0) cell_hwr_fs_pane_g1_ParamLimits

0x92ae,	// (0x0005d4c0) cell_hwr_fs_pane_g1

0x9064,	// (0x0005d276) cell_hwr_fs_pane_g2_ParamLimits

0x9064,	// (0x0005d276) cell_hwr_fs_pane_g2

0x92c4,	// (0x0005d4d6) cell_hwr_fs_pane_g3_ParamLimits

0x92c4,	// (0x0005d4d6) cell_hwr_fs_pane_g3

0x92d1,	// (0x0005d4e3) cell_hwr_fs_pane_g4_ParamLimits

0x92d1,	// (0x0005d4e3) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x00063a17) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x00063a17) cell_hwr_fs_pane_g

0x7497,	// (0x0005b6a9) cell_hwr_fs_pane_t1

0xec31,	// (0x00062e43) grid_highlight_pane_cp6

0xec31,	// (0x00062e43) main_idle_act2_pane

0xf148,	// (0x0006335a) aid_inside_area_popup_secondary

0x9f31,	// (0x0005e143) aid_inside_area_window_primary_ParamLimits

0x9f31,	// (0x0005e143) aid_inside_area_window_primary

0xac90,	// (0x0005eea2) ai2_news_ticker_pane

0xac98,	// (0x0005eeaa) aid_size_cell_ai1_link_ParamLimits

0xac98,	// (0x0005eeaa) aid_size_cell_ai1_link

0xacb2,	// (0x0005eec4) popup_ai2_data_window_ParamLimits

0xacb2,	// (0x0005eec4) popup_ai2_data_window

0xacc8,	// (0x0005eeda) popup_ai2_link_window_ParamLimits

0xacc8,	// (0x0005eeda) popup_ai2_link_window

0x9278,	// (0x0005d48a) bg_popup_sub_pane_cp4_ParamLimits

0x9278,	// (0x0005d48a) bg_popup_sub_pane_cp4

0xacdc,	// (0x0005eeee) grid_ai2_link_pane_ParamLimits

0xacdc,	// (0x0005eeee) grid_ai2_link_pane

0xacf3,	// (0x0005ef05) popup_ai2_link_window_g1_ParamLimits

0xacf3,	// (0x0005ef05) popup_ai2_link_window_g1

0xacff,	// (0x0005ef11) popup_ai2_link_window_g2_ParamLimits

0xacff,	// (0x0005ef11) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x00063bea) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x00063bea) popup_ai2_link_window_g

0xad0e,	// (0x0005ef20) ai2_mp_button_pane

0xad16,	// (0x0005ef28) ai2_mp_volume_pane

0x948b,	// (0x0005d69d) bg_popup_sub_pane_cp5_ParamLimits

0x948b,	// (0x0005d69d) bg_popup_sub_pane_cp5

0xad1e,	// (0x0005ef30) heading_ai2_gene_pane_ParamLimits

0xad1e,	// (0x0005ef30) heading_ai2_gene_pane

0xad2a,	// (0x0005ef3c) list_ai2_gene_pane_ParamLimits

0xad2a,	// (0x0005ef3c) list_ai2_gene_pane

0xad72,	// (0x0005ef84) cell_ai2_link_pane_ParamLimits

0xad72,	// (0x0005ef84) cell_ai2_link_pane

0xad88,	// (0x0005ef9a) cell_ai2_link_pane_g1

0xec31,	// (0x00062e43) grid_highlight_pane_cp7

0x7864,	// (0x0005ba76) ai2_mp_volume_pane_g1

0xae58,	// (0x0005f06a) ai2_mp_volume_pane_g2

0xadcd,	// (0x0005efdf) list_ai2_gene_pane_t1

0xae60,	// (0x0005f072) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x00063c03) ai2_mp_volume_pane_g

0x786c,	// (0x0005ba7e) volume_small_pane_cp3

0xae68,	// (0x0005f07a) aid_size_cell_ai2_button

0xae70,	// (0x0005f082) grid_ai2_button_pane

0xae79,	// (0x0005f08b) cell_ai2_button_pane_ParamLimits

0xae79,	// (0x0005f08b) cell_ai2_button_pane

0xec27,	// (0x00062e39) cell_ai2_button_pane_g1

0xec31,	// (0x00062e43) grid_highlight_pane_cp8

0xae18,	// (0x0005f02a) ai2_gene_pane_t1_ParamLimits

0xae18,	// (0x0005f02a) ai2_gene_pane_t1

0x6d7a,	// (0x0005af8c) aid_height_parent_landscape

0xa5a7,	// (0x0005e7b9) aid_height_set_list

0xa5b8,	// (0x0005e7ca) aid_size_parent

0xa950,	// (0x0005eb62) aid_size_cell_graphic_pane_ParamLimits

0xad3a,	// (0x0005ef4c) popup_ai2_data_window_g1_ParamLimits

0xad3a,	// (0x0005ef4c) popup_ai2_data_window_g1

0xad46,	// (0x0005ef58) ai2_news_ticker_pane_g1

0xad4e,	// (0x0005ef60) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x00063bef) ai2_news_ticker_pane_g

0xad56,	// (0x0005ef68) ai2_news_ticker_pane_t1

0xad64,	// (0x0005ef76) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x00063bf4) ai2_news_ticker_pane_t

0xad91,	// (0x0005efa3) heading_ai2_gene_pane_g1

0xad99,	// (0x0005efab) heading_ai2_gene_pane_t1_ParamLimits

0xad99,	// (0x0005efab) heading_ai2_gene_pane_t1

0xadae,	// (0x0005efc0) list_highlight_pane_cp6

0xadb6,	// (0x0005efc8) ai2_gene_pane_ParamLimits

0xadb6,	// (0x0005efc8) ai2_gene_pane

0xaddb,	// (0x0005efed) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x00063bf9) list_ai2_gene_pane_t

0xade9,	// (0x0005effb) list_highlight_pane_cp8_ParamLimits

0xade9,	// (0x0005effb) list_highlight_pane_cp8

0xadfa,	// (0x0005f00c) ai2_gene_pane_g1_ParamLimits

0xadfa,	// (0x0005f00c) ai2_gene_pane_g1

0xae0c,	// (0x0005f01e) ai2_gene_pane_g2_ParamLimits

0xae0c,	// (0x0005f01e) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x00063bfe) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x00063bfe) ai2_gene_pane_g

0xefde,	// (0x000631f0) scroll_pane_cp12

0x6d39,	// (0x0005af4b) control_pane_t3_ParamLimits

0x6d39,	// (0x0005af4b) control_pane_t3

0x8c17,	// (0x0005ce29) status_small_pane_g8_ParamLimits

0x8c17,	// (0x0005ce29) status_small_pane_g8

0x6f12,	// (0x0005b124) popup_find_window_ParamLimits

0x712b,	// (0x0005b33d) popup_note_image_window_ParamLimits

0x37aa,	// (0x000579bc) list_double2_graphic_pane_vc_g1_ParamLimits

0x37aa,	// (0x000579bc) list_double2_graphic_pane_vc_g1

0x4636,	// (0x00058848) list_double2_graphic_pane_vc_g2_ParamLimits

0x4636,	// (0x00058848) list_double2_graphic_pane_vc_g2

0x4642,	// (0x00058854) list_double2_graphic_pane_vc_g3_ParamLimits

0x4642,	// (0x00058854) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x000639d5) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x000639d5) list_double2_graphic_pane_vc_g

0x37b6,	// (0x000579c8) list_double2_graphic_pane_vc_t1_ParamLimits

0x37b6,	// (0x000579c8) list_double2_graphic_pane_vc_t1

0x4636,	// (0x00058848) list_single_heading_pane_vc_g1_ParamLimits

0x4636,	// (0x00058848) list_single_heading_pane_vc_g1

0x4642,	// (0x00058854) list_single_heading_pane_vc_g2_ParamLimits

0x4642,	// (0x00058854) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x000639f6) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x000639f6) list_single_heading_pane_vc_g

0x37cc,	// (0x000579de) list_single_heading_pane_vc_t1_ParamLimits

0x37cc,	// (0x000579de) list_single_heading_pane_vc_t1

0x37e4,	// (0x000579f6) list_single_heading_pane_vc_t2_ParamLimits

0x37e4,	// (0x000579f6) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x000639fb) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x000639fb) list_single_heading_pane_vc_t

0x9234,	// (0x0005d446) list_setting_number_pane_vc_g1_ParamLimits

0x9234,	// (0x0005d446) list_setting_number_pane_vc_g1

0x9240,	// (0x0005d452) list_setting_number_pane_vc_g2_ParamLimits

0x9240,	// (0x0005d452) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x00063a00) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x00063a00) list_setting_number_pane_vc_g

0x3800,	// (0x00057a12) list_setting_number_pane_vc_t1_ParamLimits

0x3800,	// (0x00057a12) list_setting_number_pane_vc_t1

0x3814,	// (0x00057a26) list_setting_number_pane_vc_t2_ParamLimits

0x3814,	// (0x00057a26) list_setting_number_pane_vc_t2

0x3830,	// (0x00057a42) list_setting_number_pane_vc_t3_ParamLimits

0x3830,	// (0x00057a42) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x00063a05) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x00063a05) list_setting_number_pane_vc_t

0x385a,	// (0x00057a6c) set_value_pane_vc_ParamLimits

0x385a,	// (0x00057a6c) set_value_pane_vc

0xa770,	// (0x0005e982) list_double2_graphic_pane_vc_ParamLimits

0xa770,	// (0x0005e982) list_double2_graphic_pane_vc

0xa770,	// (0x0005e982) list_double2_large_graphic_pane_vc_ParamLimits

0xa770,	// (0x0005e982) list_double2_large_graphic_pane_vc

0xa770,	// (0x0005e982) list_double2_pane_vc_ParamLimits

0xa770,	// (0x0005e982) list_double2_pane_vc

0xa770,	// (0x0005e982) list_double_graphic_heading_pane_vc_ParamLimits

0xa770,	// (0x0005e982) list_double_graphic_heading_pane_vc

0xa770,	// (0x0005e982) list_double_graphic_pane_vc_ParamLimits

0xa770,	// (0x0005e982) list_double_graphic_pane_vc

0xa770,	// (0x0005e982) list_double_heading_pane_vc_ParamLimits

0xa770,	// (0x0005e982) list_double_heading_pane_vc

0xa782,	// (0x0005e994) list_double_large_graphic_pane_vc_ParamLimits

0xa782,	// (0x0005e994) list_double_large_graphic_pane_vc

0xa770,	// (0x0005e982) list_double_number_pane_vc_ParamLimits

0xa770,	// (0x0005e982) list_double_number_pane_vc

0xa770,	// (0x0005e982) list_double_pane_vc_ParamLimits

0xa770,	// (0x0005e982) list_double_pane_vc

0xa770,	// (0x0005e982) list_double_time_pane_vc_ParamLimits

0xa770,	// (0x0005e982) list_double_time_pane_vc

0xa770,	// (0x0005e982) list_setting_number_pane_vc_ParamLimits

0xa770,	// (0x0005e982) list_setting_number_pane_vc

0xa770,	// (0x0005e982) list_setting_pane_vc_ParamLimits

0xa770,	// (0x0005e982) list_setting_pane_vc

0xa770,	// (0x0005e982) list_single_graphic_heading_pane_vc_ParamLimits

0xa770,	// (0x0005e982) list_single_graphic_heading_pane_vc

0xa770,	// (0x0005e982) list_single_heading_pane_vc_ParamLimits

0xa770,	// (0x0005e982) list_single_heading_pane_vc

0xa7a0,	// (0x0005e9b2) list_single_number_heading_pane_vc_ParamLimits

0xa7a0,	// (0x0005e9b2) list_single_number_heading_pane_vc

0x37aa,	// (0x000579bc) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x37aa,	// (0x000579bc) list_double_graphic_heading_pane_vc_g1

0x4636,	// (0x00058848) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4636,	// (0x00058848) list_double_graphic_heading_pane_vc_g2

0x4642,	// (0x00058854) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4642,	// (0x00058854) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x000639d5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x000639d5) list_double_graphic_heading_pane_vc_g

0x4238,	// (0x0005844a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4238,	// (0x0005844a) list_double_graphic_heading_pane_vc_t1

0x4254,	// (0x00058466) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4254,	// (0x00058466) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x00063c0a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x00063c0a) list_double_graphic_heading_pane_vc_t

0x9234,	// (0x0005d446) list_setting_pane_vc_g1_ParamLimits

0x9234,	// (0x0005d446) list_setting_pane_vc_g1

0x9240,	// (0x0005d452) list_setting_pane_vc_g2_ParamLimits

0x9240,	// (0x0005d452) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x00063a00) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x00063a00) list_setting_pane_vc_g

0x4272,	// (0x00058484) list_setting_pane_vc_t1_ParamLimits

0x4272,	// (0x00058484) list_setting_pane_vc_t1

0x428e,	// (0x000584a0) list_setting_pane_vc_t2_ParamLimits

0x428e,	// (0x000584a0) list_setting_pane_vc_t2

0x0001,

0xfa3b,	// (0x00063c4d) list_setting_pane_vc_t_ParamLimits

0xfa3b,	// (0x00063c4d) list_setting_pane_vc_t

0x385a,	// (0x00057a6c) set_value_pane_cp_vc_ParamLimits

0x385a,	// (0x00057a6c) set_value_pane_cp_vc

0x4636,	// (0x00058848) list_single_number_heading_pane_vc_g1_ParamLimits

0x4636,	// (0x00058848) list_single_number_heading_pane_vc_g1

0x4642,	// (0x00058854) list_single_number_heading_pane_vc_g2_ParamLimits

0x4642,	// (0x00058854) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x000639f6) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x000639f6) list_single_number_heading_pane_vc_g

0x37cc,	// (0x000579de) list_single_number_heading_pane_vc_t1_ParamLimits

0x37cc,	// (0x000579de) list_single_number_heading_pane_vc_t1

0x42a8,	// (0x000584ba) list_single_number_heading_pane_vc_t2_ParamLimits

0x42a8,	// (0x000584ba) list_single_number_heading_pane_vc_t2

0x41e8,	// (0x000583fa) list_single_number_heading_pane_vc_t3_ParamLimits

0x41e8,	// (0x000583fa) list_single_number_heading_pane_vc_t3

0x0002,

0xfa40,	// (0x00063c52) list_single_number_heading_pane_vc_t_ParamLimits

0xfa40,	// (0x00063c52) list_single_number_heading_pane_vc_t

0x37aa,	// (0x000579bc) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x37aa,	// (0x000579bc) list_single_graphic_heading_pane_vc_g1

0x4636,	// (0x00058848) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4636,	// (0x00058848) list_single_graphic_heading_pane_vc_g4

0x4642,	// (0x00058854) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4642,	// (0x00058854) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x000639d5) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x000639d5) list_single_graphic_heading_pane_vc_g

0x37cc,	// (0x000579de) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x37cc,	// (0x000579de) list_single_graphic_heading_pane_vc_t1

0x42bc,	// (0x000584ce) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x42bc,	// (0x000584ce) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa47,	// (0x00063c59) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa47,	// (0x00063c59) list_single_graphic_heading_pane_vc_t

0x4636,	// (0x00058848) list_double2_pane_vc_g1_ParamLimits

0x4636,	// (0x00058848) list_double2_pane_vc_g1

0x4642,	// (0x00058854) list_double2_pane_vc_g2_ParamLimits

0x4642,	// (0x00058854) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x000639f6) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x000639f6) list_double2_pane_vc_g

0x4222,	// (0x00058434) list_double2_pane_vc_t1_ParamLimits

0x4222,	// (0x00058434) list_double2_pane_vc_t1

0xaa22,	// (0x0005ec34) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xaa22,	// (0x0005ec34) list_double2_large_graphic_pane_vc_g1

0x4636,	// (0x00058848) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4636,	// (0x00058848) list_double2_large_graphic_pane_vc_g2

0x4642,	// (0x00058854) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4642,	// (0x00058854) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4c,	// (0x00063c5e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x00063c5e) list_double2_large_graphic_pane_vc_g

0x41fa,	// (0x0005840c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x41fa,	// (0x0005840c) list_double2_large_graphic_pane_vc_t1

0xaa2e,	// (0x0005ec40) list_double_time_pane_vc_g1_ParamLimits

0xaa2e,	// (0x0005ec40) list_double_time_pane_vc_g1

0xaa3a,	// (0x0005ec4c) list_double_time_pane_vc_g2_ParamLimits

0xaa3a,	// (0x0005ec4c) list_double_time_pane_vc_g2

0x0001,

0xfa53,	// (0x00063c65) list_double_time_pane_vc_g_ParamLimits

0xfa53,	// (0x00063c65) list_double_time_pane_vc_g

0x42d0,	// (0x000584e2) list_double_time_pane_vc_t1_ParamLimits

0x42d0,	// (0x000584e2) list_double_time_pane_vc_t1

0x42f4,	// (0x00058506) list_double_time_pane_vc_t2_ParamLimits

0x42f4,	// (0x00058506) list_double_time_pane_vc_t2

0x4343,	// (0x00058555) list_double_time_pane_vc_t3_ParamLimits

0x4343,	// (0x00058555) list_double_time_pane_vc_t3

0x4355,	// (0x00058567) list_double_time_pane_vc_t4_ParamLimits

0x4355,	// (0x00058567) list_double_time_pane_vc_t4

0x0003,

0xfa58,	// (0x00063c6a) list_double_time_pane_vc_t_ParamLimits

0xfa58,	// (0x00063c6a) list_double_time_pane_vc_t

0x4636,	// (0x00058848) list_double_pane_vc_g1_ParamLimits

0x4636,	// (0x00058848) list_double_pane_vc_g1

0x4642,	// (0x00058854) list_double_pane_vc_g2_ParamLimits

0x4642,	// (0x00058854) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x000639f6) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x000639f6) list_double_pane_vc_g

0x4369,	// (0x0005857b) list_double_pane_vc_t1_ParamLimits

0x4369,	// (0x0005857b) list_double_pane_vc_t1

0x437d,	// (0x0005858f) list_double_pane_vc_t2_ParamLimits

0x437d,	// (0x0005858f) list_double_pane_vc_t2

0x0001,

0xfa61,	// (0x00063c73) list_double_pane_vc_t_ParamLimits

0xfa61,	// (0x00063c73) list_double_pane_vc_t

0x4636,	// (0x00058848) list_double_number_pane_vc_g1_ParamLimits

0x4636,	// (0x00058848) list_double_number_pane_vc_g1

0x4642,	// (0x00058854) list_double_number_pane_vc_g2_ParamLimits

0x4642,	// (0x00058854) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x000639f6) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x000639f6) list_double_number_pane_vc_g

0x4210,	// (0x00058422) list_double_number_pane_vc_t1_ParamLimits

0x4210,	// (0x00058422) list_double_number_pane_vc_t1

0x4395,	// (0x000585a7) list_double_number_pane_vc_t2_ParamLimits

0x4395,	// (0x000585a7) list_double_number_pane_vc_t2

0x43a9,	// (0x000585bb) list_double_number_pane_vc_t3_ParamLimits

0x43a9,	// (0x000585bb) list_double_number_pane_vc_t3

0x0002,

0xfa66,	// (0x00063c78) list_double_number_pane_vc_t_ParamLimits

0xfa66,	// (0x00063c78) list_double_number_pane_vc_t

0xaa46,	// (0x0005ec58) list_double_large_graphic_pane_vc_g1_ParamLimits

0xaa46,	// (0x0005ec58) list_double_large_graphic_pane_vc_g1

0xaa68,	// (0x0005ec7a) list_double_large_graphic_pane_vc_g2_ParamLimits

0xaa68,	// (0x0005ec7a) list_double_large_graphic_pane_vc_g2

0xaa7c,	// (0x0005ec8e) list_double_large_graphic_pane_vc_g3_ParamLimits

0xaa7c,	// (0x0005ec8e) list_double_large_graphic_pane_vc_g3

0x43c1,	// (0x000585d3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x43c1,	// (0x000585d3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6d,	// (0x00063c7f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x00063c7f) list_double_large_graphic_pane_vc_g

0x43cd,	// (0x000585df) list_double_large_graphic_pane_vc_t1_ParamLimits

0x43cd,	// (0x000585df) list_double_large_graphic_pane_vc_t1

0x43e9,	// (0x000585fb) list_double_large_graphic_pane_vc_t2_ParamLimits

0x43e9,	// (0x000585fb) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x00063c88) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x00063c88) list_double_large_graphic_pane_vc_t

0x4636,	// (0x00058848) list_double_heading_pane_vc_g1_ParamLimits

0x4636,	// (0x00058848) list_double_heading_pane_vc_g1

0x4642,	// (0x00058854) list_double_heading_pane_vc_g2_ParamLimits

0x4642,	// (0x00058854) list_double_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x000639f6) list_double_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x000639f6) list_double_heading_pane_vc_g

0x440b,	// (0x0005861d) list_double_heading_pane_vc_t1_ParamLimits

0x440b,	// (0x0005861d) list_double_heading_pane_vc_t1

0x37cc,	// (0x000579de) list_double_heading_pane_vc_t2_ParamLimits

0x37cc,	// (0x000579de) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x00063c8d) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x00063c8d) list_double_heading_pane_vc_t

0x441f,	// (0x00058631) list_double_graphic_pane_vc_g1_ParamLimits

0x441f,	// (0x00058631) list_double_graphic_pane_vc_g1

0xaa8b,	// (0x0005ec9d) list_double_graphic_pane_vc_g2_ParamLimits

0xaa8b,	// (0x0005ec9d) list_double_graphic_pane_vc_g2

0x4636,	// (0x00058848) list_double_graphic_pane_vc_g3_ParamLimits

0x4636,	// (0x00058848) list_double_graphic_pane_vc_g3

0x0003,

0xfa80,	// (0x00063c92) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x00063c92) list_double_graphic_pane_vc_g

0x442b,	// (0x0005863d) list_double_graphic_pane_vc_t1_ParamLimits

0x442b,	// (0x0005863d) list_double_graphic_pane_vc_t1

0x444f,	// (0x00058661) list_double_graphic_pane_vc_t2_ParamLimits

0x444f,	// (0x00058661) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x00063c9b) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x00063c9b) list_double_graphic_pane_vc_t

0x5279,	// (0x0005948b) aid_size_cell_fastswap

0x5281,	// (0x00059493) aid_size_cell_touch_ParamLimits

0x5281,	// (0x00059493) aid_size_cell_touch

0x54e6,	// (0x000596f8) popup_fast_swap_wide_window_ParamLimits

0x54e6,	// (0x000596f8) popup_fast_swap_wide_window

0x55ec,	// (0x000597fe) touch_pane_ParamLimits

0x55ec,	// (0x000597fe) touch_pane

0xf02b,	// (0x0006323d) button_value_adjust_pane_cp2

0x3487,	// (0x00057699) button_value_adjust_pane_cp4

0x348f,	// (0x000576a1) form_field_data_pane_cp2

0x60e7,	// (0x0005a2f9) form_field_data_wide_pane_cp2

0xf329,	// (0x0006353b) bg_scroll_pane_ParamLimits

0x65a2,	// (0x0005a7b4) scroll_handle_pane_ParamLimits

0x65b6,	// (0x0005a7c8) scroll_sc2_down_pane_ParamLimits

0x65b6,	// (0x0005a7c8) scroll_sc2_down_pane

0xf35a,	// (0x0006356c) scroll_sc2_up_pane_ParamLimits

0xf35a,	// (0x0006356c) scroll_sc2_up_pane

0xb53f,	// (0x0005f751) grid_wheel_folder_pane_g1_ParamLimits

0xb53f,	// (0x0005f751) grid_wheel_folder_pane_g1

0x698f,	// (0x0005aba1) clock_nsta_pane_cp2_ParamLimits

0x698f,	// (0x0005aba1) clock_nsta_pane_cp2

0x6333,	// (0x0005a545) listscroll_midp_pane_ParamLimits

0x6b21,	// (0x0005ad33) midp_canvas_pane

0x8c91,	// (0x0005cea3) nsta_clock_indic_pane

0x8cc5,	// (0x0005ced7) listscroll_form_pane_vc

0x8ccd,	// (0x0005cedf) listscroll_set_pane_vc_ParamLimits

0x8ccd,	// (0x0005cedf) listscroll_set_pane_vc

0x8dd2,	// (0x0005cfe4) clock_nsta_pane

0x8e4d,	// (0x0005d05f) indicator_nsta_pane

0x912a,	// (0x0005d33c) bg_popup_sub_pane_cp2_ParamLimits

0x913e,	// (0x0005d350) find_pane_cp2_ParamLimits

0x913e,	// (0x0005d350) find_pane_cp2

0x9154,	// (0x0005d366) grid_toobar_pane_ParamLimits

0x924c,	// (0x0005d45e) list_form_gen_pane_vc_ParamLimits

0x924c,	// (0x0005d45e) list_form_gen_pane_vc

0x9262,	// (0x0005d474) scroll_pane_cp8_vc_ParamLimits

0x9262,	// (0x0005d474) scroll_pane_cp8_vc

0x92de,	// (0x0005d4f0) data_form_wide_pane_vc_ParamLimits

0x92de,	// (0x0005d4f0) data_form_wide_pane_vc

0x92ea,	// (0x0005d4fc) form_field_data_wide_pane_vc_g1

0x92f2,	// (0x0005d504) form_field_data_wide_pane_vc_t1_ParamLimits

0x92f2,	// (0x0005d504) form_field_data_wide_pane_vc_t1

0xf03f,	// (0x00063251) input_focus_pane_cp6_vc_ParamLimits

0xf03f,	// (0x00063251) input_focus_pane_cp6_vc

0x961f,	// (0x0005d831) list_midp_pane_ParamLimits

0x962b,	// (0x0005d83d) scroll_pane_cp16_ParamLimits

0x962b,	// (0x0005d83d) scroll_pane_cp16

0x9679,	// (0x0005d88b) button_value_adjust_pane_ParamLimits

0x9679,	// (0x0005d88b) button_value_adjust_pane

0xa5ca,	// (0x0005e7dc) button_value_adjust_pane_cp6_ParamLimits

0xa5ca,	// (0x0005e7dc) button_value_adjust_pane_cp6

0xa6f4,	// (0x0005e906) settings_code_pane_cp_ParamLimits

0xa6f4,	// (0x0005e906) settings_code_pane_cp

0xec27,	// (0x00062e39) cell_touch_pane_g1

0xec27,	// (0x00062e39) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0006391a) cell_touch_pane_g

0xae8b,	// (0x0005f09d) cell_touch_pane_cp_ParamLimits

0xae8b,	// (0x0005f09d) cell_touch_pane_cp

0xae9b,	// (0x0005f0ad) cell_touch_pane_ParamLimits

0xae9b,	// (0x0005f0ad) cell_touch_pane

0xec27,	// (0x00062e39) scroll_sc2_down_pane_g1

0xec27,	// (0x00062e39) scroll_sc2_up_pane_g1

0xec31,	// (0x00062e43) bg_set_opt_pane_cp4_vc

0xaead,	// (0x0005f0bf) list_set_graphic_pane_vc_g1_ParamLimits

0xaead,	// (0x0005f0bf) list_set_graphic_pane_vc_g1

0xaeb9,	// (0x0005f0cb) list_set_graphic_pane_vc_g2_ParamLimits

0xaeb9,	// (0x0005f0cb) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x00063c0f) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x00063c0f) list_set_graphic_pane_vc_g

0xaec5,	// (0x0005f0d7) text_primary_small_cp13_vc_ParamLimits

0xaec5,	// (0x0005f0d7) text_primary_small_cp13_vc

0xaedd,	// (0x0005f0ef) list_set_graphic_pane_vc_ParamLimits

0xaedd,	// (0x0005f0ef) list_set_graphic_pane_vc

0xec31,	// (0x00062e43) input_focus_pane_cp2_vc

0xec27,	// (0x00062e39) setting_code_pane_vc_g1

0xec96,	// (0x00062ea8) setting_code_pane_vc_t1

0xaef0,	// (0x0005f102) set_text_pane_vc_t1_ParamLimits

0xaef0,	// (0x0005f102) set_text_pane_vc_t1

0xec31,	// (0x00062e43) input_focus_pane_cp1_vc

0xaf0c,	// (0x0005f11e) list_set_text_pane_vc

0xec27,	// (0x00062e39) setting_text_pane_vc_g1

0xec31,	// (0x00062e43) bg_set_opt_pane_cp2_vc

0xec8d,	// (0x00062e9f) setting_slider_graphic_pane_vc_g1

0xaf16,	// (0x0005f128) setting_slider_graphic_pane_vc_t1

0xaf26,	// (0x0005f138) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x00063c14) setting_slider_graphic_pane_vc_t

0xaf36,	// (0x0005f148) slider_set_pane_cp_vc

0xaf3e,	// (0x0005f150) slider_set_pane_vc_g1

0xaf47,	// (0x0005f159) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x00063c19) slider_set_pane_vc_g

0xf09a,	// (0x000632ac) set_opt_bg_pane_g1_copy1

0xf0a2,	// (0x000632b4) set_opt_bg_pane_g2_copy1

0xaf73,	// (0x0005f185) set_opt_bg_pane_g3_copy1

0xf0b2,	// (0x000632c4) set_opt_bg_pane_g4_copy1

0xf0ba,	// (0x000632cc) set_opt_bg_pane_g5_copy1

0xf0c2,	// (0x000632d4) set_opt_bg_pane_g6_copy1

0xaf7b,	// (0x0005f18d) set_opt_bg_pane_g7_copy1

0xaf83,	// (0x0005f195) set_opt_bg_pane_g8_copy1

0xaf8b,	// (0x0005f19d) set_opt_bg_pane_g9_copy1

0xec31,	// (0x00062e43) bg_set_opt_pane_cp_vc

0xaf93,	// (0x0005f1a5) setting_slider_pane_vc_t1

0xafa2,	// (0x0005f1b4) setting_slider_pane_vc_t2

0xafb2,	// (0x0005f1c4) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x00063c28) setting_slider_pane_vc_t

0xafc2,	// (0x0005f1d4) slider_set_pane_vc

0x74d3,	// (0x0005b6e5) volume_set_pane_vc_g1

0x7875,	// (0x0005ba87) volume_set_pane_vc_g2

0x787e,	// (0x0005ba90) volume_set_pane_vc_g3

0x7887,	// (0x0005ba99) volume_set_pane_vc_g4

0x7890,	// (0x0005baa2) volume_set_pane_vc_g5

0x7899,	// (0x0005baab) volume_set_pane_vc_g6

0x78a2,	// (0x0005bab4) volume_set_pane_vc_g7

0x78ab,	// (0x0005babd) volume_set_pane_vc_g8

0x78b4,	// (0x0005bac6) volume_set_pane_vc_g9

0x78bd,	// (0x0005bacf) volume_set_pane_vc_g10

0x0009,

0xfa1d,	// (0x00063c2f) volume_set_pane_vc_g

0xafca,	// (0x0005f1dc) volume_set_pane_vc

0xafd2,	// (0x0005f1e4) button_value_adjust_pane_cp1_vc

0xafdc,	// (0x0005f1ee) list_highlight_pane_cp2_vc

0xafe5,	// (0x0005f1f7) list_set_pane_vc_ParamLimits

0xafe5,	// (0x0005f1f7) list_set_pane_vc

0xb043,	// (0x0005f255) main_pane_set_vc_t1_ParamLimits

0xb043,	// (0x0005f255) main_pane_set_vc_t1

0xb058,	// (0x0005f26a) main_pane_set_vc_t2_ParamLimits

0xb058,	// (0x0005f26a) main_pane_set_vc_t2

0xb06a,	// (0x0005f27c) main_pane_set_vc_t3_ParamLimits

0xb06a,	// (0x0005f27c) main_pane_set_vc_t3

0xb07c,	// (0x0005f28e) main_pane_set_vc_t4_ParamLimits

0xb07c,	// (0x0005f28e) main_pane_set_vc_t4

0x0003,

0xfa32,	// (0x00063c44) main_pane_set_vc_t_ParamLimits

0xfa32,	// (0x00063c44) main_pane_set_vc_t

0xb08e,	// (0x0005f2a0) setting_code_pane_vc_ParamLimits

0xb08e,	// (0x0005f2a0) setting_code_pane_vc

0xb09d,	// (0x0005f2af) setting_slider_graphic_pane_vc

0xb09d,	// (0x0005f2af) setting_slider_pane_vc

0xb09d,	// (0x0005f2af) setting_text_pane_vc

0xb09d,	// (0x0005f2af) setting_volume_pane_vc

0xb0a5,	// (0x0005f2b7) scroll_pane_cp121_vc

0xf019,	// (0x0006322b) set_content_pane_vc

0xb0ad,	// (0x0005f2bf) button_value_adjust_pane_g1

0xb0b6,	// (0x0005f2c8) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x00063ca0) button_value_adjust_pane_g

0xb0bf,	// (0x0005f2d1) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb0bf,	// (0x0005f2d1) form_field_slider_wide_pane_vc_t1

0xb0d3,	// (0x0005f2e5) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb0d3,	// (0x0005f2e5) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa93,	// (0x00063ca5) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x00063ca5) form_field_slider_wide_pane_vc_t

0xeda9,	// (0x00062fbb) input_focus_pane_cp10_vc_ParamLimits

0xeda9,	// (0x00062fbb) input_focus_pane_cp10_vc

0xb101,	// (0x0005f313) slider_cont_pane_cp1_vc_ParamLimits

0xb101,	// (0x0005f313) slider_cont_pane_cp1_vc

0xb113,	// (0x0005f325) slider_form_pane_g1_cp2

0xaf47,	// (0x0005f159) slider_form_pane_g2_cp2

0xb140,	// (0x0005f352) form_field_slider_pane_vc_t3

0xb14e,	// (0x0005f360) form_field_slider_pane_vc_t4

0xb15c,	// (0x0005f36e) slider_form_pane_vc_ParamLimits

0xb15c,	// (0x0005f36e) slider_form_pane_vc

0xb169,	// (0x0005f37b) form_field_slider_pane_vc_t1_ParamLimits

0xb169,	// (0x0005f37b) form_field_slider_pane_vc_t1

0xb0d3,	// (0x0005f2e5) form_field_slider_pane_vc_t2_ParamLimits

0xb0d3,	// (0x0005f2e5) form_field_slider_pane_vc_t2

0x0001,

0xfaa5,	// (0x00063cb7) form_field_slider_pane_vc_t_ParamLimits

0xfaa5,	// (0x00063cb7) form_field_slider_pane_vc_t

0xeda9,	// (0x00062fbb) input_focus_pane_cp9_vc_ParamLimits

0xeda9,	// (0x00062fbb) input_focus_pane_cp9_vc

0xb185,	// (0x0005f397) slider_cont_pane_vc_ParamLimits

0xb185,	// (0x0005f397) slider_cont_pane_vc

0xb199,	// (0x0005f3ab) list_form_graphic_pane_cp_vc_ParamLimits

0xb199,	// (0x0005f3ab) list_form_graphic_pane_cp_vc

0x92ea,	// (0x0005d4fc) form_field_popup_wide_pane_vc_g1

0xb1ae,	// (0x0005f3c0) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb1ae,	// (0x0005f3c0) form_field_popup_wide_pane_vc_t1

0xf03f,	// (0x00063251) input_focus_pane_cp8_vc_ParamLimits

0xf03f,	// (0x00063251) input_focus_pane_cp8_vc

0xb1f3,	// (0x0005f405) list_form_wide_pane_vc_ParamLimits

0xb1f3,	// (0x0005f405) list_form_wide_pane_vc

0xb1ff,	// (0x0005f411) list_form_graphic_pane_vc_g1

0xb207,	// (0x0005f419) list_form_graphic_pane_vc_t1_ParamLimits

0xb207,	// (0x0005f419) list_form_graphic_pane_vc_t1

0xec7f,	// (0x00062e91) list_highlight_pane_cp5_vc_ParamLimits

0xec7f,	// (0x00062e91) list_highlight_pane_cp5_vc

0xb223,	// (0x0005f435) list_form_graphic_pane_vc_ParamLimits

0xb223,	// (0x0005f435) list_form_graphic_pane_vc

0x92ea,	// (0x0005d4fc) form_field_popup_pane_vc_g1

0xb239,	// (0x0005f44b) form_field_popup_pane_vc_t1_ParamLimits

0xb239,	// (0x0005f44b) form_field_popup_pane_vc_t1

0xf03f,	// (0x00063251) input_focus_pane_cp7_vc_ParamLimits

0xf03f,	// (0x00063251) input_focus_pane_cp7_vc

0xb250,	// (0x0005f462) list_form_pane_vc_ParamLimits

0xb250,	// (0x0005f462) list_form_pane_vc

0xb25c,	// (0x0005f46e) data_form_pane_vc_t1_ParamLimits

0xb25c,	// (0x0005f46e) data_form_pane_vc_t1

0xf09a,	// (0x000632ac) input_focus_pane_vc_g1

0xf0a2,	// (0x000632b4) input_focus_pane_vc_g2

0xf0aa,	// (0x000632bc) input_focus_pane_vc_g3

0xf0b2,	// (0x000632c4) input_focus_pane_vc_g4

0xf0ba,	// (0x000632cc) input_focus_pane_vc_g5

0xf0c2,	// (0x000632d4) input_focus_pane_vc_g6

0xf0ca,	// (0x000632dc) input_focus_pane_vc_g7

0xf0d2,	// (0x000632e4) input_focus_pane_vc_g8

0xf0da,	// (0x000632ec) input_focus_pane_vc_g9

0xec27,	// (0x00062e39) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x000638a3) input_focus_pane_vc_g

0x92de,	// (0x0005d4f0) data_form_pane_vc_ParamLimits

0x92de,	// (0x0005d4f0) data_form_pane_vc

0x92ea,	// (0x0005d4fc) form_field_data_pane_vc_g1

0xb277,	// (0x0005f489) form_field_data_pane_vc_t1_ParamLimits

0xb277,	// (0x0005f489) form_field_data_pane_vc_t1

0xf03f,	// (0x00063251) input_focus_pane_vc_ParamLimits

0xf03f,	// (0x00063251) input_focus_pane_vc

0xb291,	// (0x0005f4a3) button_value_adjust_pane_cp3_vc

0xb299,	// (0x0005f4ab) button_value_adjust_pane_cp5_vc

0xb2a1,	// (0x0005f4b3) form_field_data_pane_vc_ParamLimits

0xb2a1,	// (0x0005f4b3) form_field_data_pane_vc

0xb2b8,	// (0x0005f4ca) form_field_data_pane_vc_cp2

0xb2c0,	// (0x0005f4d2) form_field_data_wide_pane_vc_ParamLimits

0xb2c0,	// (0x0005f4d2) form_field_data_wide_pane_vc

0xb2d6,	// (0x0005f4e8) form_field_data_wide_pane_vc_cp2

0xb2de,	// (0x0005f4f0) form_field_popup_pane_vc_ParamLimits

0xb2de,	// (0x0005f4f0) form_field_popup_pane_vc

0xb2f5,	// (0x0005f507) form_field_popup_wide_pane_vc_ParamLimits

0xb2f5,	// (0x0005f507) form_field_popup_wide_pane_vc

0xb30b,	// (0x0005f51d) form_field_slider_pane_vc_ParamLimits

0xb30b,	// (0x0005f51d) form_field_slider_pane_vc

0xb31e,	// (0x0005f530) form_field_slider_wide_pane_vc_ParamLimits

0xb31e,	// (0x0005f530) form_field_slider_wide_pane_vc

0xb331,	// (0x0005f543) grid_touch_1_pane_ParamLimits

0xb331,	// (0x0005f543) grid_touch_1_pane

0xb33d,	// (0x0005f54f) grid_touch_2_pane_ParamLimits

0xb33d,	// (0x0005f54f) grid_touch_2_pane

0x8c5c,	// (0x0005ce6e) touch_pane_g1_ParamLimits

0x8c5c,	// (0x0005ce6e) touch_pane_g1

0xb355,	// (0x0005f567) cell_app_pane_cp_wide_ParamLimits

0xb355,	// (0x0005f567) cell_app_pane_cp_wide

0xb366,	// (0x0005f578) grid_popup_fast_wide_pane_ParamLimits

0xb366,	// (0x0005f578) grid_popup_fast_wide_pane

0xb37a,	// (0x0005f58c) scroll_pane_cp19_ParamLimits

0xb37a,	// (0x0005f58c) scroll_pane_cp19

0xec31,	// (0x00062e43) bg_popup_window_pane_cp20

0xb38e,	// (0x0005f5a0) listscroll_popup_fast_wide_pane

0xec7f,	// (0x00062e91) grid_indicator_nsta_pane

0xb396,	// (0x0005f5a8) clock_nsta_pane_g1

0xb39f,	// (0x0005f5b1) clock_nsta_pane_t1

0xb3bb,	// (0x0005f5cd) cell_indicator_nsta_pane_ParamLimits

0xb3bb,	// (0x0005f5cd) cell_indicator_nsta_pane

0xb3ec,	// (0x0005f5fe) cell_indicator_nsta_pane_g1

0xb3fa,	// (0x0005f60c) cell_indicator_nsta_pane_g2

0x0001,

0xfab6,	// (0x00063cc8) cell_indicator_nsta_pane_g

0xb407,	// (0x0005f619) clock_nsta_pane_cp

0xb40f,	// (0x0005f621) indicator_nsta_pane_cp

0xb417,	// (0x0005f629) nsta_clock_indic_pane_g1

0xecbb,	// (0x00062ecd) grid_indicator_pane

0x6654,	// (0x0005a866) scroll_pane_cp29

0x68de,	// (0x0005aaf0) indicator_nsta_pane_cp2_ParamLimits

0x68de,	// (0x0005aaf0) indicator_nsta_pane_cp2

0xec7f,	// (0x00062e91) main_apps_wheel_pane

0x9502,	// (0x0005d714) form_midp_field_text_pane_ParamLimits

0x964b,	// (0x0005d85d) scroll_bar_cp050_ParamLimits

0xb478,	// (0x0005f68a) cell_indicator_pane_ParamLimits

0xb478,	// (0x0005f68a) cell_indicator_pane

0xb491,	// (0x0005f6a3) cell_indicator_pane_g1

0xb49b,	// (0x0005f6ad) grid_wheel_folder_pane_ParamLimits

0xb49b,	// (0x0005f6ad) grid_wheel_folder_pane

0xb4b1,	// (0x0005f6c3) list_wheel_apps_pane_ParamLimits

0xb4b1,	// (0x0005f6c3) list_wheel_apps_pane

0xb4c2,	// (0x0005f6d4) main_apps_wheel_pane_g1_ParamLimits

0xb4c2,	// (0x0005f6d4) main_apps_wheel_pane_g1

0xb4d6,	// (0x0005f6e8) main_apps_wheel_pane_g2_ParamLimits

0xb4d6,	// (0x0005f6e8) main_apps_wheel_pane_g2

0x0001,

0xfad2,	// (0x00063ce4) main_apps_wheel_pane_g_ParamLimits

0xfad2,	// (0x00063ce4) main_apps_wheel_pane_g

0xb4ee,	// (0x0005f700) main_apps_wheel_pane_t1_ParamLimits

0xb4ee,	// (0x0005f700) main_apps_wheel_pane_t1

0xb511,	// (0x0005f723) list_wheel_apps_pane_g1

0xb519,	// (0x0005f72b) list_wheel_apps_pane_g2

0xb521,	// (0x0005f733) list_wheel_apps_pane_g3

0xb52b,	// (0x0005f73d) list_wheel_apps_pane_g4

0xb535,	// (0x0005f747) list_wheel_apps_pane_g5

0x0004,

0xfad7,	// (0x00063ce9) list_wheel_apps_pane_g

0x3653,	// (0x00057865) navi_icon_text_pane

0x8d01,	// (0x0005cf13) aid_fill_nsta

0xb558,	// (0x0005f76a) navi_icon_text_pane_g1

0xb564,	// (0x0005f776) navi_icon_text_pane_t1

0x3543,	// (0x00057755) list_set_graphic_pane_t1_ParamLimits

0x3543,	// (0x00057755) list_set_graphic_pane_t1

0x9d7a,	// (0x0005df8c) popup_midp_note_alarm_window_t6_ParamLimits

0x9d7a,	// (0x0005df8c) popup_midp_note_alarm_window_t6

0x9d8c,	// (0x0005df9e) popup_midp_note_alarm_window_t7_ParamLimits

0x9d8c,	// (0x0005df9e) popup_midp_note_alarm_window_t7

0x9d9e,	// (0x0005dfb0) popup_midp_note_alarm_window_t8_ParamLimits

0x9d9e,	// (0x0005dfb0) popup_midp_note_alarm_window_t8

0x9db0,	// (0x0005dfc2) popup_midp_note_alarm_window_t9_ParamLimits

0x9db0,	// (0x0005dfc2) popup_midp_note_alarm_window_t9

0x9dc2,	// (0x0005dfd4) popup_midp_note_alarm_window_t10_ParamLimits

0x9dc2,	// (0x0005dfd4) popup_midp_note_alarm_window_t10

0x9dd4,	// (0x0005dfe6) popup_midp_note_alarm_window_t11_ParamLimits

0x9dd4,	// (0x0005dfe6) popup_midp_note_alarm_window_t11

0x9de6,	// (0x0005dff8) scroll_pane_cp17_ParamLimits

0x9de6,	// (0x0005dff8) scroll_pane_cp17

0x74d3,	// (0x0005b6e5) volume_small_pane_cp_g1

0x78c6,	// (0x0005bad8) volume_small_pane_cp_g2

0x78cf,	// (0x0005bae1) volume_small_pane_cp_g3

0x78d8,	// (0x0005baea) volume_small_pane_cp_g4

0x78e1,	// (0x0005baf3) volume_small_pane_cp_g5

0x7890,	// (0x0005baa2) volume_small_pane_cp_g6

0x78ea,	// (0x0005bafc) volume_small_pane_cp_g7

0x78f3,	// (0x0005bb05) volume_small_pane_cp_g8

0x78fc,	// (0x0005bb0e) volume_small_pane_cp_g9

0x7905,	// (0x0005bb17) volume_small_pane_cp_g10

0x8a7a,	// (0x0005cc8c) midp_ticker_pane_g1_ParamLimits

0x8a86,	// (0x0005cc98) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0006396f) midp_ticker_pane_g_ParamLimits

0x8a92,	// (0x0005cca4) midp_ticker_pane_t1_ParamLimits

0x8d17,	// (0x0005cf29) aid_fill_nsta_2

0x9637,	// (0x0005d849) list_form2_midp_pane

0xa73f,	// (0x0005e951) midp_editing_number_pane_ParamLimits

0xa74e,	// (0x0005e960) midp_ticker_pane_ParamLimits

0xb576,	// (0x0005f788) form2_midp_field_pane

0xb59a,	// (0x0005f7ac) scroll_pane_cp51

0xb5ba,	// (0x0005f7cc) form2_midp_button_pane_ParamLimits

0xb5ba,	// (0x0005f7cc) form2_midp_button_pane

0xb5cc,	// (0x0005f7de) form2_midp_content_pane_ParamLimits

0xb5cc,	// (0x0005f7de) form2_midp_content_pane

0xb5e6,	// (0x0005f7f8) form2_midp_field_choice_group_pane

0xb5ee,	// (0x0005f800) form2_midp_field_pane_g1

0xb5f6,	// (0x0005f808) form2_midp_field_pane_g2

0xb5fe,	// (0x0005f810) form2_midp_field_pane_g3

0xb606,	// (0x0005f818) form2_midp_field_pane_g4

0x0003,

0xfafc,	// (0x00063d0e) form2_midp_field_pane_g

0xb60e,	// (0x0005f820) form2_midp_gauge_slider_pane

0xb616,	// (0x0005f828) form2_midp_gauge_wait_pane

0xb61e,	// (0x0005f830) form2_midp_image_pane_ParamLimits

0xb61e,	// (0x0005f830) form2_midp_image_pane

0xb639,	// (0x0005f84b) form2_midp_label_pane_ParamLimits

0xb639,	// (0x0005f84b) form2_midp_label_pane

0xb652,	// (0x0005f864) form2_midp_label_pane_cp_ParamLimits

0xb652,	// (0x0005f864) form2_midp_label_pane_cp

0xb673,	// (0x0005f885) form2_midp_string_pane_ParamLimits

0xb673,	// (0x0005f885) form2_midp_string_pane

0x790e,	// (0x0005bb20) form2_midp_text_pane_ParamLimits

0x790e,	// (0x0005bb20) form2_midp_text_pane

0xb685,	// (0x0005f897) form2_midp_time_pane

0xb695,	// (0x0005f8a7) input_focus_pane_cp51_ParamLimits

0xb695,	// (0x0005f8a7) input_focus_pane_cp51

0xb6ad,	// (0x0005f8bf) form2_midp_label_pane_t1_ParamLimits

0xb6ad,	// (0x0005f8bf) form2_midp_label_pane_t1

0x792b,	// (0x0005bb3d) form2_mdip_text_pane_t1_ParamLimits

0x792b,	// (0x0005bb3d) form2_mdip_text_pane_t1

0x4479,	// (0x0005868b) form2_midp_time_pane_t1

0xb6f6,	// (0x0005f908) form2_midp_gauge_slider_pane_t1

0xb708,	// (0x0005f91a) form2_midp_gauge_slider_pane_t2

0xb71a,	// (0x0005f92c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb05,	// (0x00063d17) form2_midp_gauge_slider_pane_t

0xb72c,	// (0x0005f93e) form2_midp_slider_pane

0xb738,	// (0x0005f94a) form2_midp_gauge_wait_pane_t1

0xb746,	// (0x0005f958) form2_midp_wait_pane_ParamLimits

0xb746,	// (0x0005f958) form2_midp_wait_pane

0xb771,	// (0x0005f983) list_single_2graphic_pane_cp4_ParamLimits

0xb771,	// (0x0005f983) list_single_2graphic_pane_cp4

0x9353,	// (0x0005d565) list_single_midp_graphic_pane_cp_ParamLimits

0x9353,	// (0x0005d565) list_single_midp_graphic_pane_cp

0xec31,	// (0x00062e43) list_highlight_pane_cp20

0xb799,	// (0x0005f9ab) list_single_2graphic_pane_g1_cp4

0xad91,	// (0x0005efa3) list_single_2graphic_pane_g2_cp4

0xb7a1,	// (0x0005f9b3) list_single_2graphic_pane_t1_cp4

0xec7f,	// (0x00062e91) list_highlight_pane_cp21

0xb7b0,	// (0x0005f9c2) list_single_midp_graphic_pane_g4_cp

0xb7bf,	// (0x0005f9d1) list_single_midp_graphic_pane_t1_cp

0xb7d4,	// (0x0005f9e6) form2_mdip_string_pane_t1_ParamLimits

0xb7d4,	// (0x0005f9e6) form2_mdip_string_pane_t1

0xec31,	// (0x00062e43) bg_wml_button_pane_cp2

0xec27,	// (0x00062e39) form2_midp_image_pane_g1

0x465a,	// (0x0005886c) list_double_large_graphic_pane_g5_ParamLimits

0x465a,	// (0x0005886c) list_double_large_graphic_pane_g5

0x6333,	// (0x0005a545) midp_form_pane_ParamLimits

0xec7f,	// (0x00062e91) main_apps_wheel_pane_ParamLimits

0x7151,	// (0x0005b363) popup_preview_window_ParamLimits

0x7151,	// (0x0005b363) popup_preview_window

0x730c,	// (0x0005b51e) popup_touch_info_window_ParamLimits

0x730c,	// (0x0005b51e) popup_touch_info_window

0x732a,	// (0x0005b53c) popup_touch_menu_window_ParamLimits

0x732a,	// (0x0005b53c) popup_touch_menu_window

0xec1d,	// (0x00062e2f) bg_popup_sub_pane_cp6

0xb8e1,	// (0x0005faf3) list_touch_menu_pane

0xb8e9,	// (0x0005fafb) list_single_touch_menu_pane_ParamLimits

0xb8e9,	// (0x0005fafb) list_single_touch_menu_pane

0xb8ff,	// (0x0005fb11) list_single_touch_menu_pane_t1

0xec7f,	// (0x00062e91) bg_popup_sub_pane_cp7_ParamLimits

0xec7f,	// (0x00062e91) bg_popup_sub_pane_cp7

0xb90d,	// (0x0005fb1f) heading_sub_pane

0xb915,	// (0x0005fb27) list_touch_info_pane_ParamLimits

0xb915,	// (0x0005fb27) list_touch_info_pane

0xb924,	// (0x0005fb36) list_single_touch_info_pane_ParamLimits

0xb924,	// (0x0005fb36) list_single_touch_info_pane

0xb936,	// (0x0005fb48) list_single_touch_info_pane_t1

0xb944,	// (0x0005fb56) list_single_touch_info_pane_t2

0x0001,

0xfb13,	// (0x00063d25) list_single_touch_info_pane_t

0x6b19,	// (0x0005ad2b) bg_popup_heading_pane_cp

0xb952,	// (0x0005fb64) heading_sub_pane_t1

0x9278,	// (0x0005d48a) bg_popup_preview_window_pane_cp_ParamLimits

0x9278,	// (0x0005d48a) bg_popup_preview_window_pane_cp

0xb90d,	// (0x0005fb1f) heading_preview_pane

0xb915,	// (0x0005fb27) list_preview_pane_ParamLimits

0xb915,	// (0x0005fb27) list_preview_pane

0xb960,	// (0x0005fb72) popup_preview_window_g1

0xb924,	// (0x0005fb36) list_single_preview_pane_ParamLimits

0xb924,	// (0x0005fb36) list_single_preview_pane

0xb968,	// (0x0005fb7a) list_single_preview_pane_g1

0xb970,	// (0x0005fb82) list_single_preview_pane_t1

0xb936,	// (0x0005fb48) list_single_preview_pane_t2

0x0001,

0xfb18,	// (0x00063d2a) list_single_preview_pane_t

0xb97e,	// (0x0005fb90) bg_popup_heading_pane_cp2_ParamLimits

0xb97e,	// (0x0005fb90) bg_popup_heading_pane_cp2

0xb994,	// (0x0005fba6) heading_preview_pane_g1

0xb99c,	// (0x0005fbae) heading_preview_pane_t1_ParamLimits

0xb99c,	// (0x0005fbae) heading_preview_pane_t1

0xecd2,	// (0x00062ee4) soft_indicator_pane_t1_ParamLimits

0xefbb,	// (0x000631cd) scroll_pane_ParamLimits

0xf348,	// (0x0006355a) scroll_sc2_left_pane

0xf351,	// (0x00063563) scroll_sc2_right_pane

0xf370,	// (0x00063582) scroll_bg_pane_g1_ParamLimits

0xf385,	// (0x00063597) scroll_bg_pane_g2_ParamLimits

0xf39d,	// (0x000635af) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x000638fa) scroll_bg_pane_g_ParamLimits

0xf370,	// (0x00063582) scroll_handle_pane_g1_ParamLimits

0xf3b2,	// (0x000635c4) scroll_handle_pane_g2_ParamLimits

0xf39d,	// (0x000635af) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00063901) scroll_handle_pane_g_ParamLimits

0x6dd4,	// (0x0005afe6) popup_choice_list_window_ParamLimits

0x6dd4,	// (0x0005afe6) popup_choice_list_window

0x9136,	// (0x0005d348) choice_list_pane

0x91b8,	// (0x0005d3ca) cell_toolbar_pane_t1

0x91e0,	// (0x0005d3f2) toolbar_button_pane_ParamLimits

0xa2a0,	// (0x0005e4b2) ai_gene_pane_1_t2_ParamLimits

0xa2a0,	// (0x0005e4b2) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x00063b29) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x00063b29) ai_gene_pane_1_t

0xb9b9,	// (0x0005fbcb) scroll_sc2_left_pane_g1

0xb9b9,	// (0x0005fbcb) scroll_sc2_right_pane_g1

0x8cdf,	// (0x0005cef1) bg_popup_sub_pane_cp10

0xb9c3,	// (0x0005fbd5) list_choice_list_pane

0xb9dc,	// (0x0005fbee) list_single_choice_list_pane_ParamLimits

0xb9dc,	// (0x0005fbee) list_single_choice_list_pane

0xb9ef,	// (0x0005fc01) list_single_choice_list_pane_g1

0x62f9,	// (0x0005a50b) list_single_choice_list_pane_t1_ParamLimits

0x62f9,	// (0x0005a50b) list_single_choice_list_pane_t1

0xb9f7,	// (0x0005fc09) choice_list_pane_g1

0xb9ff,	// (0x0005fc11) choice_list_pane_t1

0xec1d,	// (0x00062e2f) input_focus_pane_cp11

0xf2bd,	// (0x000634cf) title_pane_stacon_g2_ParamLimits

0xf2bd,	// (0x000634cf) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x000638e0) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x000638e0) title_pane_stacon_g

0x6b19,	// (0x0005ad2b) cursor_press_pane

0x6e7c,	// (0x0005b08e) popup_fep_hwr_window_ParamLimits

0x6e7c,	// (0x0005b08e) popup_fep_hwr_window

0x6ef4,	// (0x0005b106) popup_fep_vkb_window_ParamLimits

0x6ef4,	// (0x0005b106) popup_fep_vkb_window

0xba0d,	// (0x0005fc1f) cursor_press_pane_g1

0x0002,

0xfb41,	// (0x00063d53) fep_vkb_side_pane_g_ParamLimits

0x7982,	// (0x0005bb94) fep_hwr_candidate_pane_ParamLimits

0x7982,	// (0x0005bb94) fep_hwr_candidate_pane

0x79ac,	// (0x0005bbbe) fep_hwr_side_pane_ParamLimits

0x79ac,	// (0x0005bbbe) fep_hwr_side_pane

0x79cc,	// (0x0005bbde) fep_hwr_top_pane_ParamLimits

0x79cc,	// (0x0005bbde) fep_hwr_top_pane

0x79e4,	// (0x0005bbf6) fep_hwr_write_pane_ParamLimits

0x79e4,	// (0x0005bbf6) fep_hwr_write_pane

0xfb41,	// (0x00063d53) fep_vkb_side_pane_g

0xba15,	// (0x0005fc27) fep_hwr_top_pane_g1

0xba27,	// (0x0005fc39) fep_hwr_top_pane_g2

0x7a1e,	// (0x0005bc30) fep_hwr_top_pane_g3

0x0002,

0xfb1d,	// (0x00063d2f) fep_hwr_top_pane_g

0x7a33,	// (0x0005bc45) fep_hwr_top_text_pane

0xf475,	// (0x00063687) fep_hwr_top_text_pane_g1

0xba5d,	// (0x0005fc6f) fep_hwr_top_text_pane_t1

0x7b29,	// (0x0005bd3b) fep_hwr_candidate_pane_g1

0xbca2,	// (0x0005feb4) fep_vkb_keypad_pane_g3_ParamLimits

0xbca2,	// (0x0005feb4) fep_vkb_keypad_pane_g3

0xbcca,	// (0x0005fedc) fep_vkb_keypad_pane_g4_ParamLimits

0xbcca,	// (0x0005fedc) fep_vkb_keypad_pane_g4

0xbd39,	// (0x0005ff4b) fep_vkb_bottom_pane_g2_ParamLimits

0xbd39,	// (0x0005ff4b) fep_vkb_bottom_pane_g2

0x0001,

0xfb48,	// (0x00063d5a) fep_vkb_bottom_pane_g_ParamLimits

0xfb48,	// (0x00063d5a) fep_vkb_bottom_pane_g

0xb9b9,	// (0x0005fbcb) cell_vkb_side_pane_g2

0x0001,

0xfb52,	// (0x00063d64) cell_vkb_side_pane_g

0xbdc4,	// (0x0005ffd6) cell_vkb_side_pane_t1

0xbdd2,	// (0x0005ffe4) cell_vkb_side_pane_t1_copy1

0xb9b9,	// (0x0005fbcb) bg_fep_vkb_candidate_pane_g2

0xbefe,	// (0x00060110) cell_vkb_candidate_pane_ParamLimits

0xba6b,	// (0x0005fc7d) aid_size_cell_vkb_ParamLimits

0xba6b,	// (0x0005fc7d) aid_size_cell_vkb

0xbefe,	// (0x00060110) cell_vkb_candidate_pane

0x7b50,	// (0x0005bd62) bg_popup_fep_shadow_pane_g1

0xbaf9,	// (0x0005fd0b) fep_vkb_bottom_pane_ParamLimits

0xbaf9,	// (0x0005fd0b) fep_vkb_bottom_pane

0xbb2f,	// (0x0005fd41) fep_vkb_candidate_pane_ParamLimits

0xbb2f,	// (0x0005fd41) fep_vkb_candidate_pane

0xbb4b,	// (0x0005fd5d) fep_vkb_keypad_pane_ParamLimits

0xbb4b,	// (0x0005fd5d) fep_vkb_keypad_pane

0xbb8a,	// (0x0005fd9c) fep_vkb_side_pane_ParamLimits

0xbb8a,	// (0x0005fd9c) fep_vkb_side_pane

0xbbc6,	// (0x0005fdd8) fep_vkb_top_pane_ParamLimits

0xbbc6,	// (0x0005fdd8) fep_vkb_top_pane

0xbbfb,	// (0x0005fe0d) fep_vkb_top_pane_g1_ParamLimits

0xbbfb,	// (0x0005fe0d) fep_vkb_top_pane_g1

0xbc0a,	// (0x0005fe1c) fep_vkb_top_pane_g2_ParamLimits

0xbc0a,	// (0x0005fe1c) fep_vkb_top_pane_g2

0xbc19,	// (0x0005fe2b) fep_vkb_top_pane_g3_ParamLimits

0xbc19,	// (0x0005fe2b) fep_vkb_top_pane_g3

0x0003,

0xfb38,	// (0x00063d4a) fep_vkb_top_pane_g_ParamLimits

0xfb38,	// (0x00063d4a) fep_vkb_top_pane_g

0xbc37,	// (0x0005fe49) fep_vkb_top_text_pane_ParamLimits

0xbc37,	// (0x0005fe49) fep_vkb_top_text_pane

0xbc48,	// (0x0005fe5a) fep_vkb_side_pane_g1_ParamLimits

0xbc48,	// (0x0005fe5a) fep_vkb_side_pane_g1

0xbc91,	// (0x0005fea3) grid_vkb_side_pane_ParamLimits

0xbc91,	// (0x0005fea3) grid_vkb_side_pane

0x7b58,	// (0x0005bd6a) bg_popup_fep_shadow_pane_g2

0x7b61,	// (0x0005bd73) bg_popup_fep_shadow_pane_g3

0x7b69,	// (0x0005bd7b) bg_popup_fep_shadow_pane_g4

0x7b72,	// (0x0005bd84) bg_popup_fep_shadow_pane_g5

0x7b7c,	// (0x0005bd8e) bg_popup_fep_shadow_pane_g6

0x7b84,	// (0x0005bd96) bg_popup_fep_shadow_pane_g7

0xf0b2,	// (0x000632c4) bg_popup_fep_shadow_pane_g8

0xbce8,	// (0x0005fefa) grid_vkb_keypad_number_pane_ParamLimits

0xbce8,	// (0x0005fefa) grid_vkb_keypad_number_pane

0xbcf8,	// (0x0005ff0a) grid_vkb_keypad_pane_ParamLimits

0xbcf8,	// (0x0005ff0a) grid_vkb_keypad_pane

0xbd1e,	// (0x0005ff30) fep_vkb_bottom_pane_g1_ParamLimits

0xbd1e,	// (0x0005ff30) fep_vkb_bottom_pane_g1

0xbd47,	// (0x0005ff59) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbd47,	// (0x0005ff59) grid_vkb_keypad_bottom_left_pane

0xbd5c,	// (0x0005ff6e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbd5c,	// (0x0005ff6e) grid_vkb_keypad_bottom_right_pane

0xbd71,	// (0x0005ff83) fep_vkb_top_text_pane_g1

0xbd8c,	// (0x0005ff9e) fep_vkb_top_text_pane_t1

0xbda1,	// (0x0005ffb3) cell_vkb_side_pane_ParamLimits

0xbda1,	// (0x0005ffb3) cell_vkb_side_pane

0xb9b9,	// (0x0005fbcb) cell_vkb_side_pane_g1

0xbde0,	// (0x0005fff2) cell_vkb_keypad_pane_ParamLimits

0xbde0,	// (0x0005fff2) cell_vkb_keypad_pane

0xbe55,	// (0x00060067) cell_vkb_keypad_pane_g1

0x0008,

0xfb65,	// (0x00063d77) bg_popup_fep_shadow_pane_g

0x7b96,	// (0x0005bda8) cell_hwr_side_pane_g1

0x7b96,	// (0x0005bda8) cell_hwr_side_pane_g2

0xbe5f,	// (0x00060071) cell_vkb_keypad_pane_t1

0xbe6d,	// (0x0006007f) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbe6d,	// (0x0006007f) cell_vkb_keypad_bottom_left_pane

0xbe8a,	// (0x0006009c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbe8a,	// (0x0006009c) cell_vkb_keypad_bottom_right_pane

0xb9b9,	// (0x0005fbcb) cell_vkb_keypad_bottom_left_pane_g1

0xb9b9,	// (0x0005fbcb) cell_vkb_keypad_bottom_right_pane_g1

0xbec3,	// (0x000600d5) cell_vkb_keypad_number_pane_ParamLimits

0xbec3,	// (0x000600d5) cell_vkb_keypad_number_pane

0xbee2,	// (0x000600f4) cell_vkb_keypad_number_pane_g1

0xbeec,	// (0x000600fe) cell_vkb_keypad_number_pane_g2

0xbef5,	// (0x00060107) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb57,	// (0x00063d69) cell_vkb_keypad_number_pane_g

0xbe5f,	// (0x00060071) cell_vkb_keypad_number_pane_t1

0xbf19,	// (0x0006012b) fep_vkb_candidate_pane_g1

0x0001,

0xfb78,	// (0x00063d8a) cell_hwr_side_pane_g

0xbf32,	// (0x00060144) cell_hwr_side_pane_t1

0x7ba0,	// (0x0005bdb2) cell_hwr_side_pane_t1_copy1

0x7bae,	// (0x0005bdc0) cell_hwr_candidate_pane_g1

0x7bdd,	// (0x0005bdef) cell_hwr_candidate_pane_t1

0xb9b9,	// (0x0005fbcb) cell_vkb_candidate_pane_g2

0xbf76,	// (0x00060188) cell_vkb_candidate_pane_t1

0x7949,	// (0x0005bb5b) bg_popup_fep_shadow_pane_ParamLimits

0x7949,	// (0x0005bb5b) bg_popup_fep_shadow_pane

0x79fe,	// (0x0005bc10) bg_fep_hwr_top_pane_g4

0xba39,	// (0x0005fc4b) bg_hwr_side_pane_g1_ParamLimits

0xba39,	// (0x0005fc4b) bg_hwr_side_pane_g1

0x7a6f,	// (0x0005bc81) cell_hwr_side_pane_ParamLimits

0x7a6f,	// (0x0005bc81) cell_hwr_side_pane

0x7aaa,	// (0x0005bcbc) fep_hwr_write_pane_g1_ParamLimits

0x7aaa,	// (0x0005bcbc) fep_hwr_write_pane_g1

0x7ab7,	// (0x0005bcc9) fep_hwr_write_pane_g2_ParamLimits

0x7ab7,	// (0x0005bcc9) fep_hwr_write_pane_g2

0x7ac4,	// (0x0005bcd6) fep_hwr_write_pane_g3_ParamLimits

0x7ac4,	// (0x0005bcd6) fep_hwr_write_pane_g3

0x7ad2,	// (0x0005bce4) fep_hwr_write_pane_g4_ParamLimits

0x7ad2,	// (0x0005bce4) fep_hwr_write_pane_g4

0x0005,

0xfb24,	// (0x00063d36) fep_hwr_write_pane_g_ParamLimits

0xfb24,	// (0x00063d36) fep_hwr_write_pane_g

0x79fe,	// (0x0005bc10) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x79fe,	// (0x0005bc10) bg_fep_hwr_candidate_pane_g2

0x7ae7,	// (0x0005bcf9) cell_hwr_candidate_pane_ParamLimits

0x7ae7,	// (0x0005bcf9) cell_hwr_candidate_pane

0x7b29,	// (0x0005bd3b) fep_hwr_candidate_pane_g1_ParamLimits

0xba99,	// (0x0005fcab) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xba99,	// (0x0005fcab) bg_popup_fep_shadow_pane_cp2

0xbc29,	// (0x0005fe3b) fep_vkb_top_pane_g4_ParamLimits

0xbc29,	// (0x0005fe3b) fep_vkb_top_pane_g4

0xbc6f,	// (0x0005fe81) fep_vkb_side_pane_g2_ParamLimits

0xbc6f,	// (0x0005fe81) fep_vkb_side_pane_g2

0x5fe6,	// (0x0005a1f8) list_setting_pane_t4_ParamLimits

0x5fe6,	// (0x0005a1f8) list_setting_pane_t4

0x6080,	// (0x0005a292) list_setting_number_pane_t5_ParamLimits

0x6080,	// (0x0005a292) list_setting_number_pane_t5

0x6683,	// (0x0005a895) list_double_heading_pane_cp2_ParamLimits

0x6683,	// (0x0005a895) list_double_heading_pane_cp2

0xab7d,	// (0x0005ed8f) list_double_heading_pane_g1_cp2_ParamLimits

0xab7d,	// (0x0005ed8f) list_double_heading_pane_g1_cp2

0xbf84,	// (0x00060196) list_double_heading_pane_g2_cp2_ParamLimits

0xbf84,	// (0x00060196) list_double_heading_pane_g2_cp2

0xbf98,	// (0x000601aa) list_double_heading_pane_t1_cp2_ParamLimits

0xbf98,	// (0x000601aa) list_double_heading_pane_t1_cp2

0xbfae,	// (0x000601c0) list_double_heading_pane_t2_cp2_ParamLimits

0xbfae,	// (0x000601c0) list_double_heading_pane_t2_cp2

0xec15,	// (0x00062e27) aid_value_unit2

0x5532,	// (0x00059744) popup_preview_fixed_window

0xedb7,	// (0x00062fc9) bg_popup_preview_window_pane_cp02

0xbfc0,	// (0x000601d2) list_preview_fixed_pane

0xc006,	// (0x00060218) list_empty_pane_fp_ParamLimits

0xc006,	// (0x00060218) list_empty_pane_fp

0xc006,	// (0x00060218) list_single_cale_day_pane_fp_ParamLimits

0xc006,	// (0x00060218) list_single_cale_day_pane_fp

0xc006,	// (0x00060218) list_single_graphic_heading_pane_fp_ParamLimits

0xc006,	// (0x00060218) list_single_graphic_heading_pane_fp

0xc006,	// (0x00060218) list_single_graphic_pane_fp_ParamLimits

0xc006,	// (0x00060218) list_single_graphic_pane_fp

0xc006,	// (0x00060218) list_single_heading_pane_fp_ParamLimits

0xc006,	// (0x00060218) list_single_heading_pane_fp

0xc006,	// (0x00060218) list_single_pane_fp_ParamLimits

0xc006,	// (0x00060218) list_single_pane_fp

0xc01c,	// (0x0006022e) list_single_pane_fp_g1_ParamLimits

0xc01c,	// (0x0006022e) list_single_pane_fp_g1

0xc028,	// (0x0006023a) list_single_pane_fp_g2_ParamLimits

0xc028,	// (0x0006023a) list_single_pane_fp_g2

0xc034,	// (0x00060246) list_single_pane_fp_g3_ParamLimits

0xc034,	// (0x00060246) list_single_pane_fp_g3

0xc048,	// (0x0006025a) list_single_pane_fp_g4_ParamLimits

0xc048,	// (0x0006025a) list_single_pane_fp_g4

0x0003,

0xfb8b,	// (0x00063d9d) list_single_pane_fp_g_ParamLimits

0xfb8b,	// (0x00063d9d) list_single_pane_fp_g

0x448c,	// (0x0005869e) list_single_pane_fp_t1_ParamLimits

0x448c,	// (0x0005869e) list_single_pane_fp_t1

0x44a3,	// (0x000586b5) list_single_graphic_pane_fp_g1_ParamLimits

0x44a3,	// (0x000586b5) list_single_graphic_pane_fp_g1

0xc01c,	// (0x0006022e) list_single_graphic_pane_fp_g2_ParamLimits

0xc01c,	// (0x0006022e) list_single_graphic_pane_fp_g2

0xc028,	// (0x0006023a) list_single_graphic_pane_fp_g3_ParamLimits

0xc028,	// (0x0006023a) list_single_graphic_pane_fp_g3

0xc034,	// (0x00060246) list_single_graphic_pane_fp_g4_ParamLimits

0xc034,	// (0x00060246) list_single_graphic_pane_fp_g4

0xc048,	// (0x0006025a) list_single_graphic_pane_fp_g5_ParamLimits

0xc048,	// (0x0006025a) list_single_graphic_pane_fp_g5

0x0004,

0xfb94,	// (0x00063da6) list_single_graphic_pane_fp_g_ParamLimits

0xfb94,	// (0x00063da6) list_single_graphic_pane_fp_g

0x44af,	// (0x000586c1) list_single_graphic_pane_fp_t1_ParamLimits

0x44af,	// (0x000586c1) list_single_graphic_pane_fp_t1

0x44a3,	// (0x000586b5) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x44a3,	// (0x000586b5) list_single_graphic_heading_pane_fp_g1

0xc01c,	// (0x0006022e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc01c,	// (0x0006022e) list_single_graphic_heading_pane_fp_g2

0xc028,	// (0x0006023a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc028,	// (0x0006023a) list_single_graphic_heading_pane_fp_g3

0xc034,	// (0x00060246) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc034,	// (0x00060246) list_single_graphic_heading_pane_fp_g4

0xc048,	// (0x0006025a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc048,	// (0x0006025a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb94,	// (0x00063da6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb94,	// (0x00063da6) list_single_graphic_heading_pane_fp_g

0x44c5,	// (0x000586d7) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x44c5,	// (0x000586d7) list_single_graphic_heading_pane_fp_t1

0x44db,	// (0x000586ed) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x44db,	// (0x000586ed) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9f,	// (0x00063db1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9f,	// (0x00063db1) list_single_graphic_heading_pane_fp_t

0x44ed,	// (0x000586ff) list_single_cale_day_pane_fp_g1_ParamLimits

0x44ed,	// (0x000586ff) list_single_cale_day_pane_fp_g1

0xc054,	// (0x00060266) list_single_cale_day_pane_fp_g2_ParamLimits

0xc054,	// (0x00060266) list_single_cale_day_pane_fp_g2

0xaaa8,	// (0x0005ecba) list_single_cale_day_pane_fp_g3_ParamLimits

0xaaa8,	// (0x0005ecba) list_single_cale_day_pane_fp_g3

0xaad0,	// (0x0005ece2) list_single_cale_day_pane_fp_g4_ParamLimits

0xaad0,	// (0x0005ece2) list_single_cale_day_pane_fp_g4

0xaaf4,	// (0x0005ed06) list_single_cale_day_pane_fp_g5_ParamLimits

0xaaf4,	// (0x0005ed06) list_single_cale_day_pane_fp_g5

0x0004,

0xfba4,	// (0x00063db6) list_single_cale_day_pane_fp_g_ParamLimits

0xfba4,	// (0x00063db6) list_single_cale_day_pane_fp_g

0x4525,	// (0x00058737) list_single_cale_day_pane_fp_t1_ParamLimits

0x4525,	// (0x00058737) list_single_cale_day_pane_fp_t1

0x454b,	// (0x0005875d) list_single_cale_day_pane_fp_t2_ParamLimits

0x454b,	// (0x0005875d) list_single_cale_day_pane_fp_t2

0x4564,	// (0x00058776) list_single_cale_day_pane_fp_t3_ParamLimits

0x4564,	// (0x00058776) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaf,	// (0x00063dc1) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaf,	// (0x00063dc1) list_single_cale_day_pane_fp_t

0xc01c,	// (0x0006022e) list_empty_pane_fp_g1_ParamLimits

0xc01c,	// (0x0006022e) list_empty_pane_fp_g1

0x457d,	// (0x0005878f) list_empty_pane_fp_t1

0x458b,	// (0x0005879d) list_empty_pane_fp_t2

0x0001,

0xfbb6,	// (0x00063dc8) list_empty_pane_fp_t

0xc01c,	// (0x0006022e) list_single_heading_pane_fp_g1_ParamLimits

0xc01c,	// (0x0006022e) list_single_heading_pane_fp_g1

0xc028,	// (0x0006023a) list_single_heading_pane_fp_g2_ParamLimits

0xc028,	// (0x0006023a) list_single_heading_pane_fp_g2

0xc034,	// (0x00060246) list_single_heading_pane_fp_g3_ParamLimits

0xc034,	// (0x00060246) list_single_heading_pane_fp_g3

0x0002,

0xfbbb,	// (0x00063dcd) list_single_heading_pane_fp_g_ParamLimits

0xfbbb,	// (0x00063dcd) list_single_heading_pane_fp_g

0x4599,	// (0x000587ab) list_single_heading_pane_fp_t1_ParamLimits

0x4599,	// (0x000587ab) list_single_heading_pane_fp_t1

0x45ab,	// (0x000587bd) list_single_heading_pane_fp_t2_ParamLimits

0x45ab,	// (0x000587bd) list_single_heading_pane_fp_t2

0x0001,

0xfbc2,	// (0x00063dd4) list_single_heading_pane_fp_t_ParamLimits

0xfbc2,	// (0x00063dd4) list_single_heading_pane_fp_t

0x6351,	// (0x0005a563) aid_size_cell_fast

0xed8c,	// (0x00062f9e) soft_indicator_pane_cp1_t1

0x635a,	// (0x0005a56c) cell_app_pane_cp2_ParamLimits

0x635a,	// (0x0005a56c) cell_app_pane_cp2

0x796b,	// (0x0005bb7d) fep_hwr_candidate_drop_down_list_pane

0x7b43,	// (0x0005bd55) fep_hwr_candidate_pane_g3_ParamLimits

0x7b43,	// (0x0005bd55) fep_hwr_candidate_pane_g3

0x3419,	// (0x0005762b) fep_hwr_candidate_pane_g4_ParamLimits

0x3419,	// (0x0005762b) fep_hwr_candidate_pane_g4

0x0002,

0xfb31,	// (0x00063d43) fep_hwr_candidate_pane_g_ParamLimits

0xfb31,	// (0x00063d43) fep_hwr_candidate_pane_g

0xbb1e,	// (0x0005fd30) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbb1e,	// (0x0005fd30) fep_vkb_candidate_drop_down_list_pane

0xbf21,	// (0x00060133) fep_vkb_candidate_pane_g3

0xbf29,	// (0x0006013b) fep_vkb_candidate_pane_g4

0x0002,

0xfb5e,	// (0x00063d70) fep_vkb_candidate_pane_g

0x7bae,	// (0x0005bdc0) cell_hwr_candidate_pane_g1_ParamLimits

0x7bbc,	// (0x0005bdce) cell_hwr_candidate_pane_g3_ParamLimits

0x7bbc,	// (0x0005bdce) cell_hwr_candidate_pane_g3

0xcd06,	// (0x00060f18) cell_hwr_candidate_pane_g4_ParamLimits

0xcd06,	// (0x00060f18) cell_hwr_candidate_pane_g4

0x0002,

0xfb7d,	// (0x00063d8f) cell_hwr_candidate_pane_g_ParamLimits

0xfb7d,	// (0x00063d8f) cell_hwr_candidate_pane_g

0xbf40,	// (0x00060152) cell_vkb_candidate_pane_g3_ParamLimits

0xbf40,	// (0x00060152) cell_vkb_candidate_pane_g3

0xbf5b,	// (0x0006016d) cell_vkb_candidate_pane_g4_ParamLimits

0xbf5b,	// (0x0006016d) cell_vkb_candidate_pane_g4

0xc060,	// (0x00060272) cell_app_pane_cp2_g1_ParamLimits

0xc060,	// (0x00060272) cell_app_pane_cp2_g1

0xc07e,	// (0x00060290) cell_app_pane_cp2_g2_ParamLimits

0xc07e,	// (0x00060290) cell_app_pane_cp2_g2

0x0001,

0xfbc7,	// (0x00063dd9) cell_app_pane_cp2_g_ParamLimits

0xfbc7,	// (0x00063dd9) cell_app_pane_cp2_g

0xc08a,	// (0x0006029c) cell_app_pane_cp2_t1_ParamLimits

0xc08a,	// (0x0006029c) cell_app_pane_cp2_t1

0xf03f,	// (0x00063251) grid_highlight_pane_cp1_ParamLimits

0xf03f,	// (0x00063251) grid_highlight_pane_cp1

0x7bfb,	// (0x0005be0d) cell_hwr_candidate_pane_cp1_ParamLimits

0x7bfb,	// (0x0005be0d) cell_hwr_candidate_pane_cp1

0x7bae,	// (0x0005bdc0) fep_hwr_candidate_drop_down_list_pane_g1

0x7c1a,	// (0x0005be2c) fep_hwr_candidate_drop_down_list_pane_g2

0x7c27,	// (0x0005be39) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcc,	// (0x00063dde) fep_hwr_candidate_drop_down_list_pane_g

0x7c34,	// (0x0005be46) fep_hwr_candidate_drop_down_list_scroll_pane

0x7c3d,	// (0x0005be4f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7c3d,	// (0x0005be4f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7c4a,	// (0x0005be5c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7c4a,	// (0x0005be5c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7c57,	// (0x0005be69) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7c57,	// (0x0005be69) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7c64,	// (0x0005be76) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c64,	// (0x0005be76) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c7f,	// (0x0005be91) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c7f,	// (0x0005be91) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7c9a,	// (0x0005beac) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7c9a,	// (0x0005beac) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7cb5,	// (0x0005bec7) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7cb5,	// (0x0005bec7) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7cd0,	// (0x0005bee2) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7cd0,	// (0x0005bee2) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd3,	// (0x00063de5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd3,	// (0x00063de5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc09c,	// (0x000602ae) cell_vkb_candidate_pane_cp1_ParamLimits

0xc09c,	// (0x000602ae) cell_vkb_candidate_pane_cp1

0xbc29,	// (0x0005fe3b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbc29,	// (0x0005fe3b) fep_vkb_candidate_drop_down_list_pane_g1

0xc0bc,	// (0x000602ce) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc0bc,	// (0x000602ce) fep_vkb_candidate_drop_down_list_pane_g2

0xc0c9,	// (0x000602db) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc0c9,	// (0x000602db) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe4,	// (0x00063df6) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe4,	// (0x00063df6) fep_vkb_candidate_drop_down_list_pane_g

0xc0d6,	// (0x000602e8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc0d6,	// (0x000602e8) fep_vkb_candidate_drop_down_list_scroll_pane

0xc0e3,	// (0x000602f5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc0e3,	// (0x000602f5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc0f0,	// (0x00060302) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc0f0,	// (0x00060302) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc0fc,	// (0x0006030e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc0fc,	// (0x0006030e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc108,	// (0x0006031a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc108,	// (0x0006031a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc129,	// (0x0006033b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc129,	// (0x0006033b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc14a,	// (0x0006035c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc14a,	// (0x0006035c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc16b,	// (0x0006037d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc16b,	// (0x0006037d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc18c,	// (0x0006039e) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc18c,	// (0x0006039e) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbeb,	// (0x00063dfd) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbeb,	// (0x00063dfd) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x564c,	// (0x0005985e) title_pane_g1_ParamLimits

0x5659,	// (0x0005986b) title_pane_g2_ParamLimits

0xf54e,	// (0x00063760) title_pane_g_ParamLimits

0xf465,	// (0x00063677) aid_call2_pane

0xf46d,	// (0x0006367f) aid_call_pane

0xf475,	// (0x00063687) popup_clock_analogue_window_g1

0xf475,	// (0x00063687) popup_clock_analogue_window_g2

0x6664,	// (0x0005a876) popup_clock_analogue_window_g3

0x666d,	// (0x0005a87f) popup_clock_analogue_window_g4

0xec27,	// (0x00062e39) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0006390f) popup_clock_analogue_window_g

0x6675,	// (0x0005a887) popup_clock_analogue_window_t1

0x66ad,	// (0x0005a8bf) clock_digital_number_pane_ParamLimits

0x66ad,	// (0x0005a8bf) clock_digital_number_pane

0x66b9,	// (0x0005a8cb) clock_digital_number_pane_cp02_ParamLimits

0x66b9,	// (0x0005a8cb) clock_digital_number_pane_cp02

0x66c5,	// (0x0005a8d7) clock_digital_number_pane_cp03_ParamLimits

0x66c5,	// (0x0005a8d7) clock_digital_number_pane_cp03

0x66d1,	// (0x0005a8e3) clock_digital_number_pane_cp04_ParamLimits

0x66d1,	// (0x0005a8e3) clock_digital_number_pane_cp04

0x66dd,	// (0x0005a8ef) clock_digital_separator_pane_ParamLimits

0x66dd,	// (0x0005a8ef) clock_digital_separator_pane

0x66e9,	// (0x0005a8fb) popup_clock_digital_window_t1_ParamLimits

0x66e9,	// (0x0005a8fb) popup_clock_digital_window_t1

0xec27,	// (0x00062e39) clock_digital_number_pane_g1

0xec27,	// (0x00062e39) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0006391a) clock_digital_number_pane_g

0xec27,	// (0x00062e39) clock_digital_separator_pane_g1

0xec27,	// (0x00062e39) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0006391a) clock_digital_separator_pane_g

0x8d01,	// (0x0005cf13) aid_fill_nsta_ParamLimits

0x8e4d,	// (0x0005d05f) indicator_nsta_pane_ParamLimits

0x8fc6,	// (0x0005d1d8) popup_clock_analogue_window

0x8fc6,	// (0x0005d1d8) popup_clock_digital_window

0xec7f,	// (0x00062e91) grid_indicator_nsta_pane_ParamLimits

0xb3ad,	// (0x0005f5bf) clock_nsta_pane_t2

0x0001,

0xfab1,	// (0x00063cc3) clock_nsta_pane_t

0x658f,	// (0x0005a7a1) aid_size_max_handle

0x6599,	// (0x0005a7ab) aid_size_min_handle

0x6b19,	// (0x0005ad2b) editor_scroll_pane

0xc1a7,	// (0x000603b9) ex_editor_pane

0xf161,	// (0x00063373) scroll_pane_cp13

0xefe7,	// (0x000631f9) scroll_pane_cp14

0xf4a4,	// (0x000636b6) scroll_pane_cp36

0x6697,	// (0x0005a8a9) list_single_graphic_hl_pane_cp2_ParamLimits

0x6697,	// (0x0005a8a9) list_single_graphic_hl_pane_cp2

0x778e,	// (0x0005b9a0) list_single_graphic_hl_pane_ParamLimits

0x778e,	// (0x0005b9a0) list_single_graphic_hl_pane

0x7ceb,	// (0x0005befd) aid_size_min_hl_cp1

0xc1af,	// (0x000603c1) list_highlight_pane_cp34_ParamLimits

0xc1af,	// (0x000603c1) list_highlight_pane_cp34

0xc1c0,	// (0x000603d2) list_single_graphic_hl_pane_g1_ParamLimits

0xc1c0,	// (0x000603d2) list_single_graphic_hl_pane_g1

0x7cf4,	// (0x0005bf06) list_single_graphic_hl_pane_g2_ParamLimits

0x7cf4,	// (0x0005bf06) list_single_graphic_hl_pane_g2

0x7cf4,	// (0x0005bf06) list_single_graphic_hl_pane_g3_ParamLimits

0x7cf4,	// (0x0005bf06) list_single_graphic_hl_pane_g3

0x6a8a,	// (0x0005ac9c) list_single_graphic_hl_pane_g4_ParamLimits

0x6a8a,	// (0x0005ac9c) list_single_graphic_hl_pane_g4

0x7d00,	// (0x0005bf12) list_single_graphic_hl_pane_g5_ParamLimits

0x7d00,	// (0x0005bf12) list_single_graphic_hl_pane_g5

0x0004,

0xfbfc,	// (0x00063e0e) list_single_graphic_hl_pane_g_ParamLimits

0xfbfc,	// (0x00063e0e) list_single_graphic_hl_pane_g

0x7d14,	// (0x0005bf26) list_single_graphic_hl_pane_t1_ParamLimits

0x7d14,	// (0x0005bf26) list_single_graphic_hl_pane_t1

0xc1cd,	// (0x000603df) aid_size_min_hl_cp2

0xc1d6,	// (0x000603e8) list_highlight_pane_cp34_cp2_ParamLimits

0xc1d6,	// (0x000603e8) list_highlight_pane_cp34_cp2

0xc1c0,	// (0x000603d2) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc1c0,	// (0x000603d2) list_single_graphic_hl_pane_g1_cp2

0xc1e3,	// (0x000603f5) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc1e3,	// (0x000603f5) list_single_graphic_hl_pane_g2_cp2

0xc1ef,	// (0x00060401) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc1ef,	// (0x00060401) list_single_graphic_hl_pane_g3_cp2

0x3704,	// (0x00057916) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3704,	// (0x00057916) list_single_graphic_hl_pane_g4_cp2

0xc1fd,	// (0x0006040f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc1fd,	// (0x0006040f) list_single_graphic_hl_pane_g5_cp2

0x6c7e,	// (0x0005ae90) control_pane_g4_ParamLimits

0x6c7e,	// (0x0005ae90) control_pane_g4

0x8cdf,	// (0x0005cef1) bg_popup_sub_pane_cp10_ParamLimits

0xb9c3,	// (0x0005fbd5) list_choice_list_pane_ParamLimits

0xb9d2,	// (0x0005fbe4) scroll_pane_cp23

0xedb7,	// (0x00062fc9) bg_popup_preview_window_pane_cp02_ParamLimits

0xbfc0,	// (0x000601d2) list_preview_fixed_pane_ParamLimits

0xbfd6,	// (0x000601e8) list_preview_fixed_pane_cp_ParamLimits

0xbfd6,	// (0x000601e8) list_preview_fixed_pane_cp

0xbfe2,	// (0x000601f4) popup_preview_fixed_window_g1_ParamLimits

0xbfe2,	// (0x000601f4) popup_preview_fixed_window_g1

0xbfee,	// (0x00060200) popup_preview_fixed_window_g2_ParamLimits

0xbfee,	// (0x00060200) popup_preview_fixed_window_g2

0x0002,

0xfb84,	// (0x00063d96) popup_preview_fixed_window_g_ParamLimits

0xfb84,	// (0x00063d96) popup_preview_fixed_window_g

0x6469,	// (0x0005a67b) aid_navi_side_left_pane_ParamLimits

0x647e,	// (0x0005a690) aid_navi_side_right_pane_ParamLimits

0x6496,	// (0x0005a6a8) navi_icon_pane_stacon_ParamLimits

0x64aa,	// (0x0005a6bc) navi_navi_pane_stacon_ParamLimits

0x6496,	// (0x0005a6a8) navi_text_pane_stacon_ParamLimits

0x5401,	// (0x00059613) main_text_info_pane

0xc227,	// (0x00060439) listscroll_text_info_pane

0xc22f,	// (0x00060441) list_text_info_pane_ParamLimits

0xc22f,	// (0x00060441) list_text_info_pane

0xc23e,	// (0x00060450) scroll_pane_cp24_ParamLimits

0xc23e,	// (0x00060450) scroll_pane_cp24

0xc25c,	// (0x0006046e) list_text_info_pane_t1_ParamLimits

0xc25c,	// (0x0006046e) list_text_info_pane_t1

0x6df0,	// (0x0005b002) popup_fast_swap2_window_ParamLimits

0x6df0,	// (0x0005b002) popup_fast_swap2_window

0xc290,	// (0x000604a2) aid_size_cell_fast2

0xec1d,	// (0x00062e2f) bg_popup_window_pane_cp17

0x9663,	// (0x0005d875) heading_pane_cp2

0xeeeb,	// (0x000630fd) listscroll_fast2_pane

0xc29a,	// (0x000604ac) grid_fast2_pane

0xc2a4,	// (0x000604b6) listscroll_fast2_pane_g1

0xc2ac,	// (0x000604be) listscroll_fast2_pane_g2

0x0001,

0xfc07,	// (0x00063e19) listscroll_fast2_pane_g

0xf161,	// (0x00063373) scroll_pane_cp26

0xc2b6,	// (0x000604c8) cell_fast2_pane_ParamLimits

0xc2b6,	// (0x000604c8) cell_fast2_pane

0xc2cb,	// (0x000604dd) cell_fast2_pane_g1

0xc2d4,	// (0x000604e6) cell_fast2_pane_g2

0xc2dd,	// (0x000604ef) cell_fast2_pane_g3

0x0002,

0xfc0c,	// (0x00063e1e) cell_fast2_pane_g

0xef1e,	// (0x00063130) grid_highlight_pane_cp9

0x6db8,	// (0x0005afca) main_eswt_pane_ParamLimits

0x6db8,	// (0x0005afca) main_eswt_pane

0xc253,	// (0x00060465) list_single_text_info_pane

0xc2e5,	// (0x000604f7) eswt_ctrl_button_pane

0xc2e5,	// (0x000604f7) eswt_ctrl_canvas_pane

0xc2ed,	// (0x000604ff) eswt_ctrl_combo_pane

0xc2e5,	// (0x000604f7) eswt_ctrl_default_pane

0xc2e5,	// (0x000604f7) eswt_ctrl_label_pane

0xc2f5,	// (0x00060507) eswt_ctrl_wait_pane

0xc2fd,	// (0x0006050f) eswt_shell_pane

0xec1d,	// (0x00062e2f) listscroll_eswt_app_pane

0xc31d,	// (0x0006052f) popup_eswt_tasktip_window_ParamLimits

0xc31d,	// (0x0006052f) popup_eswt_tasktip_window

0x9278,	// (0x0005d48a) bg_popup_window_pane_cp18

0xc32e,	// (0x00060540) eswt_control_pane_g1_ParamLimits

0xc32e,	// (0x00060540) eswt_control_pane_g1

0xc33b,	// (0x0006054d) eswt_control_pane_g2_ParamLimits

0xc33b,	// (0x0006054d) eswt_control_pane_g2

0xc348,	// (0x0006055a) eswt_control_pane_g3_ParamLimits

0xc348,	// (0x0006055a) eswt_control_pane_g3

0xc355,	// (0x00060567) eswt_control_pane_g4_ParamLimits

0xc355,	// (0x00060567) eswt_control_pane_g4

0x0003,

0xfc13,	// (0x00063e25) eswt_control_pane_g_ParamLimits

0xfc13,	// (0x00063e25) eswt_control_pane_g

0xf03f,	// (0x00063251) bg_button_pane_ParamLimits

0xf03f,	// (0x00063251) bg_button_pane

0xef33,	// (0x00063145) common_borders_pane_copy2_ParamLimits

0xef33,	// (0x00063145) common_borders_pane_copy2

0xc362,	// (0x00060574) control_button_pane_g1_ParamLimits

0xc362,	// (0x00060574) control_button_pane_g1

0xc36e,	// (0x00060580) control_button_pane_g2_ParamLimits

0xc36e,	// (0x00060580) control_button_pane_g2

0xc37a,	// (0x0006058c) control_button_pane_g3_ParamLimits

0xc37a,	// (0x0006058c) control_button_pane_g3

0x0002,

0xfc1c,	// (0x00063e2e) control_button_pane_g_ParamLimits

0xfc1c,	// (0x00063e2e) control_button_pane_g

0xc38e,	// (0x000605a0) control_button_pane_t1

0xc39c,	// (0x000605ae) control_button_pane_t2

0x0001,

0xfc23,	// (0x00063e35) control_button_pane_t

0x91ec,	// (0x0005d3fe) bg_button_pane_g1

0x91fc,	// (0x0005d40e) bg_button_pane_g2

0x91f4,	// (0x0005d406) bg_button_pane_g3

0x920c,	// (0x0005d41e) bg_button_pane_g4

0x9204,	// (0x0005d416) bg_button_pane_g5

0x9214,	// (0x0005d426) bg_button_pane_g6

0x921c,	// (0x0005d42e) bg_button_pane_g7

0x922c,	// (0x0005d43e) bg_button_pane_g8

0x9224,	// (0x0005d436) bg_button_pane_g9

0x0008,

0xf86b,	// (0x00063a7d) bg_button_pane_g

0xb97e,	// (0x0005fb90) common_borders_pane_ParamLimits

0xb97e,	// (0x0005fb90) common_borders_pane

0xc32e,	// (0x00060540) eswt_control_pane_g1_copy1_ParamLimits

0xc32e,	// (0x00060540) eswt_control_pane_g1_copy1

0xc33b,	// (0x0006054d) eswt_control_pane_g2_copy1_ParamLimits

0xc33b,	// (0x0006054d) eswt_control_pane_g2_copy1

0xc348,	// (0x0006055a) eswt_control_pane_g3_copy1_ParamLimits

0xc348,	// (0x0006055a) eswt_control_pane_g3_copy1

0xc355,	// (0x00060567) eswt_control_pane_g4_copy1_ParamLimits

0xc355,	// (0x00060567) eswt_control_pane_g4_copy1

0xb9b9,	// (0x0005fbcb) bg_eswt_ctrl_canvas_pane_g1

0xb97e,	// (0x0005fb90) common_borders_pane_cp2_ParamLimits

0xb97e,	// (0x0005fb90) common_borders_pane_cp2

0xb97e,	// (0x0005fb90) common_borders_pane_cp3_ParamLimits

0xb97e,	// (0x0005fb90) common_borders_pane_cp3

0xc3aa,	// (0x000605bc) separator_horizontal_pane

0xc3b2,	// (0x000605c4) separator_vertical_pane

0xc32e,	// (0x00060540) eswt_control_pane_g1_copy2_ParamLimits

0xc32e,	// (0x00060540) eswt_control_pane_g1_copy2

0xc33b,	// (0x0006054d) eswt_control_pane_g2_copy2_ParamLimits

0xc33b,	// (0x0006054d) eswt_control_pane_g2_copy2

0xc348,	// (0x0006055a) eswt_control_pane_g3_copy2_ParamLimits

0xc348,	// (0x0006055a) eswt_control_pane_g3_copy2

0xc355,	// (0x00060567) eswt_control_pane_g4_copy2_ParamLimits

0xc355,	// (0x00060567) eswt_control_pane_g4_copy2

0xec1d,	// (0x00062e2f) common_borders_pane_cp4

0xc3bb,	// (0x000605cd) separator_horizontal_pane_g1

0xc3c4,	// (0x000605d6) separator_horizontal_pane_g2

0xc3cd,	// (0x000605df) separator_horizontal_pane_g3

0x0002,

0xfc28,	// (0x00063e3a) separator_horizontal_pane_g

0xc32e,	// (0x00060540) eswt_control_pane_g1_copy3_ParamLimits

0xc32e,	// (0x00060540) eswt_control_pane_g1_copy3

0xc33b,	// (0x0006054d) eswt_control_pane_g2_copy3_ParamLimits

0xc33b,	// (0x0006054d) eswt_control_pane_g2_copy3

0xc348,	// (0x0006055a) eswt_control_pane_g3_copy3_ParamLimits

0xc348,	// (0x0006055a) eswt_control_pane_g3_copy3

0xc355,	// (0x00060567) eswt_control_pane_g4_copy3_ParamLimits

0xc355,	// (0x00060567) eswt_control_pane_g4_copy3

0xec1d,	// (0x00062e2f) common_borders_pane_cp5

0xc3d6,	// (0x000605e8) separator_vertical_pane_g1

0xc3df,	// (0x000605f1) separator_vertical_pane_g2

0xc3e8,	// (0x000605fa) separator_vertical_pane_g3

0x0002,

0xfc2f,	// (0x00063e41) separator_vertical_pane_g

0xc32e,	// (0x00060540) eswt_control_pane_g1_copy4_ParamLimits

0xc32e,	// (0x00060540) eswt_control_pane_g1_copy4

0xc33b,	// (0x0006054d) eswt_control_pane_g2_copy4_ParamLimits

0xc33b,	// (0x0006054d) eswt_control_pane_g2_copy4

0xc348,	// (0x0006055a) eswt_control_pane_g3_copy4_ParamLimits

0xc348,	// (0x0006055a) eswt_control_pane_g3_copy4

0xc355,	// (0x00060567) eswt_control_pane_g4_copy4_ParamLimits

0xc355,	// (0x00060567) eswt_control_pane_g4_copy4

0xc3f1,	// (0x00060603) eswt_ctrl_combo_button_pane

0xc3f9,	// (0x0006060b) eswt_ctrl_input_pane

0xc401,	// (0x00060613) popup_choice_list_window_cp70

0xc409,	// (0x0006061b) eswt_ctrl_input_pane_t1

0xec1d,	// (0x00062e2f) input_focus_pane_cp70

0xb97e,	// (0x0005fb90) bg_button_pane_cp70_ParamLimits

0xb97e,	// (0x0005fb90) bg_button_pane_cp70

0xc417,	// (0x00060629) eswt_ctrl_combo_button_pane_g1

0xc41f,	// (0x00060631) wait_bar_pane_cp70

0x9278,	// (0x0005d48a) bg_popup_window_pane_cp70_ParamLimits

0x9278,	// (0x0005d48a) bg_popup_window_pane_cp70

0xc427,	// (0x00060639) popup_eswt_tasktip_window_t1

0xc43d,	// (0x0006064f) wait_bar_pane_cp71_ParamLimits

0xc43d,	// (0x0006064f) wait_bar_pane_cp71

0xc449,	// (0x0006065b) grid_eswt_app_pane

0xf348,	// (0x0006355a) scroll_pane_cp70

0xc452,	// (0x00060664) cell_eswt_app_pane_ParamLimits

0xc452,	// (0x00060664) cell_eswt_app_pane

0xc482,	// (0x00060694) cell_eswt_app_pane_g1_ParamLimits

0xc482,	// (0x00060694) cell_eswt_app_pane_g1

0xc4b1,	// (0x000606c3) cell_eswt_app_pane_g2_ParamLimits

0xc4b1,	// (0x000606c3) cell_eswt_app_pane_g2

0x0001,

0xfc36,	// (0x00063e48) cell_eswt_app_pane_g_ParamLimits

0xfc36,	// (0x00063e48) cell_eswt_app_pane_g

0xc4d5,	// (0x000606e7) cell_eswt_app_pane_t1_ParamLimits

0xc4d5,	// (0x000606e7) cell_eswt_app_pane_t1

0xc507,	// (0x00060719) grid_highlight_pane_cp70_ParamLimits

0xc507,	// (0x00060719) grid_highlight_pane_cp70

0x36a8,	// (0x000578ba) set_content_pane_g1

0x8c40,	// (0x0005ce52) status_small_volume_pane

0x7d2a,	// (0x0005bf3c) status_small_volume_pane_g1

0x7d32,	// (0x0005bf44) volume_small2_pane

0x7d3b,	// (0x0005bf4d) volume_small2_pane_g1

0x7d44,	// (0x0005bf56) volume_small2_pane_g2

0x7d4d,	// (0x0005bf5f) volume_small2_pane_g3

0x7d56,	// (0x0005bf68) volume_small2_pane_g4

0x7d5f,	// (0x0005bf71) volume_small2_pane_g5

0x7d68,	// (0x0005bf7a) volume_small2_pane_g6

0x7d71,	// (0x0005bf83) volume_small2_pane_g7

0x7d7a,	// (0x0005bf8c) volume_small2_pane_g8

0x7d83,	// (0x0005bf95) volume_small2_pane_g9

0x7d8c,	// (0x0005bf9e) volume_small2_pane_g10

0x0009,

0xfc3b,	// (0x00063e4d) volume_small2_pane_g

0xbd71,	// (0x0005ff83) fep_vkb_top_text_pane_g1_ParamLimits

0xbd8c,	// (0x0005ff9e) fep_vkb_top_text_pane_t1_ParamLimits

0xbffa,	// (0x0006020c) popup_preview_fixed_window_g3_ParamLimits

0xbffa,	// (0x0006020c) popup_preview_fixed_window_g3

0x729f,	// (0x0005b4b1) popup_toolbar_trans_pane

0xa5a7,	// (0x0005e7b9) aid_height_set_list_ParamLimits

0xa5b8,	// (0x0005e7ca) aid_size_parent_ParamLimits

0x8cdf,	// (0x0005cef1) list_highlight_pane_cp2_ParamLimits

0x36a8,	// (0x000578ba) set_content_pane_g1_ParamLimits

0xa7ff,	// (0x0005ea11) list_single_image_pane_ParamLimits

0xa7ff,	// (0x0005ea11) list_single_image_pane

0xc513,	// (0x00060725) aid_size_cell_image_ParamLimits

0xc513,	// (0x00060725) aid_size_cell_image

0xc520,	// (0x00060732) grid_single_image_pane_ParamLimits

0xc520,	// (0x00060732) grid_single_image_pane

0xc028,	// (0x0006023a) list_single_image_pane_g1_ParamLimits

0xc028,	// (0x0006023a) list_single_image_pane_g1

0xc034,	// (0x00060246) list_single_image_pane_g2_ParamLimits

0xc034,	// (0x00060246) list_single_image_pane_g2

0x0001,

0xfc50,	// (0x00063e62) list_single_image_pane_g_ParamLimits

0xfc50,	// (0x00063e62) list_single_image_pane_g

0xc52e,	// (0x00060740) list_single_image_pane_t1_ParamLimits

0xc52e,	// (0x00060740) list_single_image_pane_t1

0xc544,	// (0x00060756) cell_image_list_pane_ParamLimits

0xc544,	// (0x00060756) cell_image_list_pane

0xc558,	// (0x0006076a) cell_image_list_pane_g1

0xc561,	// (0x00060773) cell_image_list_pane_g2

0x0001,

0xfc55,	// (0x00063e67) cell_image_list_pane_g

0xc56a,	// (0x0006077c) aid_size_cell_tb_trans_pane

0xf03f,	// (0x00063251) bg_tb_trans_pane

0xc57c,	// (0x0006078e) grid_tb_trans_pane

0x91ec,	// (0x0005d3fe) bg_tb_trans_pane_g1

0x91fc,	// (0x0005d40e) bg_tb_trans_pane_g2

0x91f4,	// (0x0005d406) bg_tb_trans_pane_g3

0x920c,	// (0x0005d41e) bg_tb_trans_pane_g4

0x9204,	// (0x0005d416) bg_tb_trans_pane_g5

0x922c,	// (0x0005d43e) bg_tb_trans_pane_g6

0x9224,	// (0x0005d436) bg_tb_trans_pane_g7

0x9214,	// (0x0005d426) bg_tb_trans_pane_g8

0x921c,	// (0x0005d42e) bg_tb_trans_pane_g9

0x0008,

0xfc5a,	// (0x00063e6c) bg_tb_trans_pane_g

0xc590,	// (0x000607a2) cell_toolbar_trans_pane_ParamLimits

0xc590,	// (0x000607a2) cell_toolbar_trans_pane

0xb9b9,	// (0x0005fbcb) cell_toolbar_trans_pane_g1

0xb57e,	// (0x0005f790) list_form2_midp_pane_t1

0xb58c,	// (0x0005f79e) list_form2_midp_pane_t2

0x0001,

0xfaf7,	// (0x00063d09) list_form2_midp_pane_t

0xb59a,	// (0x0005f7ac) scroll_pane_cp51_ParamLimits

0xb756,	// (0x0005f968) form2_midp_wait_pane_g1

0xb75f,	// (0x0005f971) form2_midp_wait_pane_g2

0xb768,	// (0x0005f97a) form2_midp_wait_pane_g3

0x0002,

0xfb0c,	// (0x00063d1e) form2_midp_wait_pane_g

0xec7f,	// (0x00062e91) list_highlight_pane_cp21_ParamLimits

0xb7b0,	// (0x0005f9c2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb7bf,	// (0x0005f9d1) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa7a0,	// (0x0005e9b2) list_single_2graphic_im_pane_ParamLimits

0xa7a0,	// (0x0005e9b2) list_single_2graphic_im_pane

0xc5b6,	// (0x000607c8) list_single_2graphic_im_pane_g1_ParamLimits

0xc5b6,	// (0x000607c8) list_single_2graphic_im_pane_g1

0xc5c7,	// (0x000607d9) list_single_2graphic_im_pane_g2_ParamLimits

0xc5c7,	// (0x000607d9) list_single_2graphic_im_pane_g2

0xc5d3,	// (0x000607e5) list_single_2graphic_im_pane_g3_ParamLimits

0xc5d3,	// (0x000607e5) list_single_2graphic_im_pane_g3

0x0003,

0xfc6d,	// (0x00063e7f) list_single_2graphic_im_pane_g_ParamLimits

0xfc6d,	// (0x00063e7f) list_single_2graphic_im_pane_g

0xc5f3,	// (0x00060805) list_single_2graphic_im_pane_t1_ParamLimits

0xc5f3,	// (0x00060805) list_single_2graphic_im_pane_t1

0xc006,	// (0x00060218) list_single_graphic_2heading_pane_fp_ParamLimits

0xc006,	// (0x00060218) list_single_graphic_2heading_pane_fp

0x44a3,	// (0x000586b5) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x44a3,	// (0x000586b5) list_single_graphic_2heading_pane_fp_g1

0xc01c,	// (0x0006022e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc01c,	// (0x0006022e) list_single_graphic_2heading_pane_fp_g2

0xc028,	// (0x0006023a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc028,	// (0x0006023a) list_single_graphic_2heading_pane_fp_g3

0xc034,	// (0x00060246) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc034,	// (0x00060246) list_single_graphic_2heading_pane_fp_g4

0xc048,	// (0x0006025a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc048,	// (0x0006025a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb94,	// (0x00063da6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb94,	// (0x00063da6) list_single_graphic_2heading_pane_fp_g

0x45c1,	// (0x000587d3) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x45c1,	// (0x000587d3) list_single_graphic_2heading_pane_fp_t1

0x44db,	// (0x000586ed) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x44db,	// (0x000586ed) list_single_graphic_2heading_pane_fp_t2

0x45d7,	// (0x000587e9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x45d7,	// (0x000587e9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc76,	// (0x00063e88) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc76,	// (0x00063e88) list_single_graphic_2heading_pane_fp_t

0xba45,	// (0x0005fc57) fep_hwr_write_pane_g5_ParamLimits

0xba45,	// (0x0005fc57) fep_hwr_write_pane_g5

0xba51,	// (0x0005fc63) fep_hwr_write_pane_g6_ParamLimits

0xba51,	// (0x0005fc63) fep_hwr_write_pane_g6

0xc2fd,	// (0x0006050f) eswt_shell_pane_ParamLimits

0x9278,	// (0x0005d48a) bg_popup_window_pane_cp18_ParamLimits

0xa500,	// (0x0005e712) heading_pane_cp70

0xc427,	// (0x00060639) popup_eswt_tasktip_window_t1_ParamLimits

0x8d56,	// (0x0005cf68) aid_touch_tab_arrow_left

0x8d65,	// (0x0005cf77) aid_touch_tab_arrow_right

0x566a,	// (0x0005987c) title_pane_g3_ParamLimits

0x566a,	// (0x0005987c) title_pane_g3

0xf007,	// (0x00063219) set_value_pane_g1

0x729f,	// (0x0005b4b1) popup_toolbar_trans_pane_ParamLimits

0xc56a,	// (0x0006077c) aid_size_cell_tb_trans_pane_ParamLimits

0xf03f,	// (0x00063251) bg_tb_trans_pane_ParamLimits

0xc57c,	// (0x0006078e) grid_tb_trans_pane_ParamLimits

0xedb7,	// (0x00062fc9) cont_note_pane_ParamLimits

0xedb7,	// (0x00062fc9) cont_note_pane

0xef33,	// (0x00063145) cont_snote2_single_text_pane_ParamLimits

0xef33,	// (0x00063145) cont_snote2_single_text_pane

0xef33,	// (0x00063145) cont_snote2_single_graphic_pane_ParamLimits

0xef33,	// (0x00063145) cont_snote2_single_graphic_pane

0x9876,	// (0x0005da88) cont_note_wait_pane_ParamLimits

0x9876,	// (0x0005da88) cont_note_wait_pane

0x9876,	// (0x0005da88) cont_note_image_pane_ParamLimits

0x9876,	// (0x0005da88) cont_note_image_pane

0xc624,	// (0x00060836) popup_note2_window_g1_ParamLimits

0xc624,	// (0x00060836) popup_note2_window_g1

0xc655,	// (0x00060867) popup_note2_window_t1_ParamLimits

0xc655,	// (0x00060867) popup_note2_window_t1

0xc69a,	// (0x000608ac) popup_note2_window_t2_ParamLimits

0xc69a,	// (0x000608ac) popup_note2_window_t2

0xc6df,	// (0x000608f1) popup_note2_window_t3_ParamLimits

0xc6df,	// (0x000608f1) popup_note2_window_t3

0xc724,	// (0x00060936) popup_note2_window_t4_ParamLimits

0xc724,	// (0x00060936) popup_note2_window_t4

0xee3b,	// (0x0006304d) popup_note2_window_t5_ParamLimits

0xee3b,	// (0x0006304d) popup_note2_window_t5

0x0004,

0xfc82,	// (0x00063e94) popup_note2_window_t_ParamLimits

0xfc82,	// (0x00063e94) popup_note2_window_t

0xc753,	// (0x00060965) popup_note2_image_window_g1_ParamLimits

0xc753,	// (0x00060965) popup_note2_image_window_g1

0xc75f,	// (0x00060971) popup_note2_image_window_g2_ParamLimits

0xc75f,	// (0x00060971) popup_note2_image_window_g2

0x0001,

0xfc8d,	// (0x00063e9f) popup_note2_image_window_g_ParamLimits

0xfc8d,	// (0x00063e9f) popup_note2_image_window_g

0xc771,	// (0x00060983) popup_note2_image_window_t1_ParamLimits

0xc771,	// (0x00060983) popup_note2_image_window_t1

0xc789,	// (0x0006099b) popup_note2_image_window_t2_ParamLimits

0xc789,	// (0x0006099b) popup_note2_image_window_t2

0xc7a1,	// (0x000609b3) popup_note2_image_window_t3_ParamLimits

0xc7a1,	// (0x000609b3) popup_note2_image_window_t3

0x0002,

0xfc92,	// (0x00063ea4) popup_note2_image_window_t_ParamLimits

0xfc92,	// (0x00063ea4) popup_note2_image_window_t

0x9884,	// (0x0005da96) popup_note2_wait_window_g1_ParamLimits

0x9884,	// (0x0005da96) popup_note2_wait_window_g1

0x9890,	// (0x0005daa2) popup_note2_wait_window_g2_ParamLimits

0x9890,	// (0x0005daa2) popup_note2_wait_window_g2

0x989c,	// (0x0005daae) popup_note2_wait_window_g3_ParamLimits

0x989c,	// (0x0005daae) popup_note2_wait_window_g3

0x0002,

0xf84d,	// (0x00063a5f) popup_note2_wait_window_g_ParamLimits

0xf84d,	// (0x00063a5f) popup_note2_wait_window_g

0xc7bd,	// (0x000609cf) popup_note2_wait_window_t1_ParamLimits

0xc7bd,	// (0x000609cf) popup_note2_wait_window_t1

0xc7db,	// (0x000609ed) popup_note2_wait_window_t2_ParamLimits

0xc7db,	// (0x000609ed) popup_note2_wait_window_t2

0xc7f9,	// (0x00060a0b) popup_note2_wait_window_t3_ParamLimits

0xc7f9,	// (0x00060a0b) popup_note2_wait_window_t3

0xc80b,	// (0x00060a1d) popup_note2_wait_window_t4_ParamLimits

0xc80b,	// (0x00060a1d) popup_note2_wait_window_t4

0x0003,

0xfc99,	// (0x00063eab) popup_note2_wait_window_t_ParamLimits

0xfc99,	// (0x00063eab) popup_note2_wait_window_t

0xc81d,	// (0x00060a2f) wait_bar2_pane_ParamLimits

0xc81d,	// (0x00060a2f) wait_bar2_pane

0xc835,	// (0x00060a47) popup_snote2_single_text_window_g1_ParamLimits

0xc835,	// (0x00060a47) popup_snote2_single_text_window_g1

0xc85d,	// (0x00060a6f) popup_snote2_single_text_window_t1_ParamLimits

0xc85d,	// (0x00060a6f) popup_snote2_single_text_window_t1

0xc8a9,	// (0x00060abb) popup_snote2_single_text_window_t2_ParamLimits

0xc8a9,	// (0x00060abb) popup_snote2_single_text_window_t2

0xc8f5,	// (0x00060b07) popup_snote2_single_text_window_t3_ParamLimits

0xc8f5,	// (0x00060b07) popup_snote2_single_text_window_t3

0xc936,	// (0x00060b48) popup_snote2_single_text_window_t4_ParamLimits

0xc936,	// (0x00060b48) popup_snote2_single_text_window_t4

0xc96c,	// (0x00060b7e) popup_snote2_single_text_window_t5_ParamLimits

0xc96c,	// (0x00060b7e) popup_snote2_single_text_window_t5

0x0004,

0xfca2,	// (0x00063eb4) popup_snote2_single_text_window_t_ParamLimits

0xfca2,	// (0x00063eb4) popup_snote2_single_text_window_t

0xc997,	// (0x00060ba9) popup_snote2_single_graphic_window_g1_ParamLimits

0xc997,	// (0x00060ba9) popup_snote2_single_graphic_window_g1

0xc9bf,	// (0x00060bd1) popup_snote2_single_graphic_window_g2_ParamLimits

0xc9bf,	// (0x00060bd1) popup_snote2_single_graphic_window_g2

0x0001,

0xfcad,	// (0x00063ebf) popup_snote2_single_graphic_window_g_ParamLimits

0xfcad,	// (0x00063ebf) popup_snote2_single_graphic_window_g

0xc9e7,	// (0x00060bf9) popup_snote2_single_graphic_window_t1_ParamLimits

0xc9e7,	// (0x00060bf9) popup_snote2_single_graphic_window_t1

0xca33,	// (0x00060c45) popup_snote2_single_graphic_window_t2_ParamLimits

0xca33,	// (0x00060c45) popup_snote2_single_graphic_window_t2

0xc8f5,	// (0x00060b07) popup_snote2_single_graphic_window_t3_ParamLimits

0xc8f5,	// (0x00060b07) popup_snote2_single_graphic_window_t3

0xc936,	// (0x00060b48) popup_snote2_single_graphic_window_t4_ParamLimits

0xc936,	// (0x00060b48) popup_snote2_single_graphic_window_t4

0xc96c,	// (0x00060b7e) popup_snote2_single_graphic_window_t5_ParamLimits

0xc96c,	// (0x00060b7e) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb2,	// (0x00063ec4) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb2,	// (0x00063ec4) popup_snote2_single_graphic_window_t

0xb457,	// (0x0005f669) clock_nsta_pane_cp2_t1

0xb457,	// (0x0005f669) clock_nsta_pane_cp2_t2

0x0001,

0xfacd,	// (0x00063cdf) clock_nsta_pane_cp2_t

0x34aa,	// (0x000576bc) form_field_data_wide_pane_g1_ParamLimits

0xf04d,	// (0x0006325f) form_field_data_wide_pane_g2_ParamLimits

0xf04d,	// (0x0006325f) form_field_data_wide_pane_g2

0xf059,	// (0x0006326b) form_field_data_wide_pane_g3_ParamLimits

0xf059,	// (0x0006326b) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00063892) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00063892) form_field_data_wide_pane_g

0xb349,	// (0x0005f55b) grid_touch_3_pane_ParamLimits

0xb349,	// (0x0005f55b) grid_touch_3_pane

0xca7f,	// (0x00060c91) cell_touch_3_pane_ParamLimits

0xca7f,	// (0x00060c91) cell_touch_3_pane

0xb9b9,	// (0x0005fbcb) cell_touch_3_pane_g1

0xb9b9,	// (0x0005fbcb) cell_touch_3_pane_g2

0x0001,

0xfb52,	// (0x00063d64) cell_touch_3_pane_g

0xee6d,	// (0x0006307f) cont_query_data_pane

0xee75,	// (0x00063087) cont_query_data_pane_cp1

0xcaad,	// (0x00060cbf) button_value_adjust_pane_cp7

0xcab5,	// (0x00060cc7) query_popup_pane_cp3

0xf4d6,	// (0x000636e8) bg_popup_sub_pane_cp22_ParamLimits

0x6763,	// (0x0005a975) navi_navi_volume_pane_cp2

0x677b,	// (0x0005a98d) popup_side_volume_key_window_g2

0x6787,	// (0x0005a999) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00063928) popup_side_volume_key_window_g

0x67a1,	// (0x0005a9b3) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0006392f) popup_side_volume_key_window_t

0x6a51,	// (0x0005ac63) popup_side_volume_key_window_ParamLimits

0x5dff,	// (0x0005a011) list_double_graphic_pane_g4_ParamLimits

0x5dff,	// (0x0005a011) list_double_graphic_pane_g4

0xa7df,	// (0x0005e9f1) list_single_2heading_msg_pane_ParamLimits

0xa7df,	// (0x0005e9f1) list_single_2heading_msg_pane

0xab18,	// (0x0005ed2a) list_single_2heading_msg_pane_g1_ParamLimits

0xab18,	// (0x0005ed2a) list_single_2heading_msg_pane_g1

0x5c19,	// (0x00059e2b) list_single_2heading_msg_pane_g2_ParamLimits

0x5c19,	// (0x00059e2b) list_single_2heading_msg_pane_g2

0xab24,	// (0x0005ed36) list_single_2heading_msg_pane_g3_ParamLimits

0xab24,	// (0x0005ed36) list_single_2heading_msg_pane_g3

0xab30,	// (0x0005ed42) list_single_2heading_msg_pane_g4_ParamLimits

0xab30,	// (0x0005ed42) list_single_2heading_msg_pane_g4

0x0003,

0xfcbd,	// (0x00063ecf) list_single_2heading_msg_pane_g_ParamLimits

0xfcbd,	// (0x00063ecf) list_single_2heading_msg_pane_g

0x7d95,	// (0x0005bfa7) list_single_2heading_msg_pane_t1_ParamLimits

0x7d95,	// (0x0005bfa7) list_single_2heading_msg_pane_t1

0x7dbd,	// (0x0005bfcf) list_single_2heading_msg_pane_t2_ParamLimits

0x7dbd,	// (0x0005bfcf) list_single_2heading_msg_pane_t2

0x7dec,	// (0x0005bffe) list_single_2heading_msg_pane_t3_ParamLimits

0x7dec,	// (0x0005bffe) list_single_2heading_msg_pane_t3

0x45f7,	// (0x00058809) list_single_2heading_msg_pane_t4_ParamLimits

0x45f7,	// (0x00058809) list_single_2heading_msg_pane_t4

0x0003,

0xfcc6,	// (0x00063ed8) list_single_2heading_msg_pane_t_ParamLimits

0xfcc6,	// (0x00063ed8) list_single_2heading_msg_pane_t

0xec3b,	// (0x00062e4d) title_pane_g4_ParamLimits

0xec3b,	// (0x00062e4d) title_pane_g4

0x63ba,	// (0x0005a5cc) title_pane_stacon_g3_ParamLimits

0x63ba,	// (0x0005a5cc) title_pane_stacon_g3

0xc5e7,	// (0x000607f9) list_single_2graphic_im_pane_g4_ParamLimits

0xc5e7,	// (0x000607f9) list_single_2graphic_im_pane_g4

0xa2bd,	// (0x0005e4cf) popup_side_volume_key_window_cp

0xaca4,	// (0x0005eeb6) main_idle_act2_pane_t1

0x7391,	// (0x0005b5a3) toolbar_button_pane_g10

0x5c03,	// (0x00059e15) popup_toolbar_window_cp1

0xb448,	// (0x0005f65a) clock_nsta_pane_cp_t1

0xb448,	// (0x0005f65a) clock_nsta_pane_cp_t2

0x0001,

0xfac8,	// (0x00063cda) clock_nsta_pane_cp_t

0x6763,	// (0x0005a975) navi_navi_volume_pane_cp2_ParamLimits

0x676f,	// (0x0005a981) popup_side_volume_key_window_g1_ParamLimits

0x677b,	// (0x0005a98d) popup_side_volume_key_window_g2_ParamLimits

0x6787,	// (0x0005a999) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00063928) popup_side_volume_key_window_g_ParamLimits

0x7957,	// (0x0005bb69) fep_hwr_aid_pane

0x79fe,	// (0x0005bc10) bg_fep_hwr_top_pane_g4_ParamLimits

0xba15,	// (0x0005fc27) fep_hwr_top_pane_g1_ParamLimits

0xba27,	// (0x0005fc39) fep_hwr_top_pane_g2_ParamLimits

0x7a1e,	// (0x0005bc30) fep_hwr_top_pane_g3_ParamLimits

0xfb1d,	// (0x00063d2f) fep_hwr_top_pane_g_ParamLimits

0x7a33,	// (0x0005bc45) fep_hwr_top_text_pane_ParamLimits

0xa080,	// (0x0005e292) aid_touch_tab_arrow_arrow_2

0xa089,	// (0x0005e29b) aid_touch_tab_arrow_left_2

0x796b,	// (0x0005bb7d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x79a2,	// (0x0005bbb4) fep_hwr_prediction_pane

0xbb80,	// (0x0005fd92) fep_vkb_prediction_pane

0xbc7d,	// (0x0005fe8f) fep_vkb_side_pane_g3_ParamLimits

0xbc7d,	// (0x0005fe8f) fep_vkb_side_pane_g3

0x7bae,	// (0x0005bdc0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7c1a,	// (0x0005be2c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7c27,	// (0x0005be39) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcc,	// (0x00063dde) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7e25,	// (0x0005c037) fep_hwr_prediction_pane_g1

0x7e2f,	// (0x0005c041) fep_hwr_prediction_pane_g2

0x7e37,	// (0x0005c049) fep_hwr_prediction_pane_g3

0x7e3f,	// (0x0005c051) fep_hwr_prediction_pane_g4

0x0003,

0xfccf,	// (0x00063ee1) fep_hwr_prediction_pane_g

0xcada,	// (0x00060cec) fep_vkb_prediction_pane_g1

0xcae4,	// (0x00060cf6) fep_vkb_prediction_pane_g2

0xcaec,	// (0x00060cfe) fep_vkb_prediction_pane_g3

0xcaf4,	// (0x00060d06) fep_vkb_prediction_pane_g4

0x0003,

0xfcd8,	// (0x00063eea) fep_vkb_prediction_pane_g

0x76d5,	// (0x0005b8e7) slider_set_pane_g3

0x76e9,	// (0x0005b8fb) slider_set_pane_g4

0x7701,	// (0x0005b913) slider_set_pane_g5

0x76d5,	// (0x0005b8e7) slider_set_pane_g6

0x7717,	// (0x0005b929) slider_set_pane_g7

0xa71d,	// (0x0005e92f) slider_form_pane_g3

0xa726,	// (0x0005e938) slider_form_pane_g4

0xa72e,	// (0x0005e940) slider_form_pane_g5

0xa71d,	// (0x0005e92f) slider_form_pane_g6

0xa736,	// (0x0005e948) slider_form_pane_g7

0xaf4f,	// (0x0005f161) slider_set_pane_vc_g3

0xaf58,	// (0x0005f16a) slider_set_pane_vc_g4

0xaf61,	// (0x0005f173) slider_set_pane_vc_g5

0xaf4f,	// (0x0005f161) slider_set_pane_vc_g6

0xaf6a,	// (0x0005f17c) slider_set_pane_vc_g7

0xb11c,	// (0x0005f32e) slider_form_pane_vc_g1

0xb125,	// (0x0005f337) slider_form_pane_vc_g2

0xb12e,	// (0x0005f340) slider_form_pane_vc_g3

0xb11c,	// (0x0005f32e) slider_form_pane_vc_g4

0xb137,	// (0x0005f349) slider_form_pane_vc_g5

0x0004,

0xfa9a,	// (0x00063cac) slider_form_pane_vc_g

0x5401,	// (0x00059613) main_idle_act3_pane

0xcafc,	// (0x00060d0e) ai3_links_pane

0xcb05,	// (0x00060d17) popup_ai3_data_window_ParamLimits

0xcb05,	// (0x00060d17) popup_ai3_data_window

0xec1d,	// (0x00062e2f) grid_ai3_links_pane

0xcb1d,	// (0x00060d2f) cell_ai3_links_pane_ParamLimits

0xcb1d,	// (0x00060d2f) cell_ai3_links_pane

0xcb35,	// (0x00060d47) bg_popup_sub_pane_cp11

0xcb42,	// (0x00060d54) cell_ai3_links_pane_g1

0xec1d,	// (0x00062e2f) bg_popup_sub_pane_cp12

0xcb67,	// (0x00060d79) heading_ai3_data_pane

0xcb6f,	// (0x00060d81) list_ai3_gene_pane

0xcb7b,	// (0x00060d8d) popup_ai3_data_window_g1

0xcb83,	// (0x00060d95) heading_ai3_data_pane_g1

0xcb8b,	// (0x00060d9d) heading_ai3_data_pane_t1

0xcb99,	// (0x00060dab) list_double_ai3_gene_pane_ParamLimits

0xcb99,	// (0x00060dab) list_double_ai3_gene_pane

0xcba6,	// (0x00060db8) list_single_ai3_gene_pane_ParamLimits

0xcba6,	// (0x00060db8) list_single_ai3_gene_pane

0xb97e,	// (0x0005fb90) list_highlight_pane_cp7_ParamLimits

0xb97e,	// (0x0005fb90) list_highlight_pane_cp7

0xcbb3,	// (0x00060dc5) list_single_a13_gene_pane_t1_ParamLimits

0xcbb3,	// (0x00060dc5) list_single_a13_gene_pane_t1

0xcbca,	// (0x00060ddc) list_single_ai3_gene_pane_g1

0xcbd3,	// (0x00060de5) list_single_ai3_gene_pane_g2

0x0001,

0xfce1,	// (0x00063ef3) list_single_ai3_gene_pane_g

0xcbdb,	// (0x00060ded) list_double_ai3_gene_pane_g1_ParamLimits

0xcbdb,	// (0x00060ded) list_double_ai3_gene_pane_g1

0xcbe7,	// (0x00060df9) list_double_ai3_gene_pane_t1_ParamLimits

0xcbe7,	// (0x00060df9) list_double_ai3_gene_pane_t1

0xcc03,	// (0x00060e15) list_double_ai3_gene_pane_t2_ParamLimits

0xcc03,	// (0x00060e15) list_double_ai3_gene_pane_t2

0xcc18,	// (0x00060e2a) list_double_ai3_gene_pane_t3_ParamLimits

0xcc18,	// (0x00060e2a) list_double_ai3_gene_pane_t3

0x0002,

0xfce6,	// (0x00063ef8) list_double_ai3_gene_pane_t_ParamLimits

0xfce6,	// (0x00063ef8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x45ed,	// (0x000587ff) aid_size_min_col_2

0xcac6,	// (0x00060cd8) aid_size_min_msg_ParamLimits

0xcac6,	// (0x00060cd8) aid_size_min_msg

0xbd7d,	// (0x0005ff8f) fep_vkb_top_text_pane_g2_ParamLimits

0xbd7d,	// (0x0005ff8f) fep_vkb_top_text_pane_g2

0x0001,

0xfb4d,	// (0x00063d5f) fep_vkb_top_text_pane_g_ParamLimits

0xfb4d,	// (0x00063d5f) fep_vkb_top_text_pane_g

0x5401,	// (0x00059613) main_hc_apps_shell_pane

0xcc35,	// (0x00060e47) grid_hc_apps_pane_ParamLimits

0xcc35,	// (0x00060e47) grid_hc_apps_pane

0xcc44,	// (0x00060e56) list_hc_apps_pane

0xcc4c,	// (0x00060e5e) scroll_pane_cp37_ParamLimits

0xcc4c,	// (0x00060e5e) scroll_pane_cp37

0xcc58,	// (0x00060e6a) cell_hc_apps_pane_ParamLimits

0xcc58,	// (0x00060e6a) cell_hc_apps_pane

0xcd27,	// (0x00060f39) cell_hc_apps_pane_g1_ParamLimits

0xcd27,	// (0x00060f39) cell_hc_apps_pane_g1

0xcd58,	// (0x00060f6a) cell_hc_apps_pane_g2_ParamLimits

0xcd58,	// (0x00060f6a) cell_hc_apps_pane_g2

0xcd74,	// (0x00060f86) cell_hc_apps_pane_g3_ParamLimits

0xcd74,	// (0x00060f86) cell_hc_apps_pane_g3

0x0002,

0xfced,	// (0x00063eff) cell_hc_apps_pane_g_ParamLimits

0xfced,	// (0x00063eff) cell_hc_apps_pane_g

0xcd96,	// (0x00060fa8) cell_hc_apps_pane_t1_ParamLimits

0xcd96,	// (0x00060fa8) cell_hc_apps_pane_t1

0xedb7,	// (0x00062fc9) grid_highlight_pane_cp10_ParamLimits

0xedb7,	// (0x00062fc9) grid_highlight_pane_cp10

0xcdd6,	// (0x00060fe8) list_single_hc_apps_pane_ParamLimits

0xcdd6,	// (0x00060fe8) list_single_hc_apps_pane

0xce39,	// (0x0006104b) list_single_hc_apps_pane_g1

0xab48,	// (0x0005ed5a) list_single_hc_apps_pane_g2

0x0001,

0xfcf4,	// (0x00063f06) list_single_hc_apps_pane_g

0xab61,	// (0x0005ed73) list_single_hc_apps_pane_g2_copy1

0x7e47,	// (0x0005c059) list_single_hc_apps_pane_t1

0xec7f,	// (0x00062e91) bg_set_opt_pane_cp_ParamLimits

0x571a,	// (0x0005992c) setting_slider_pane_t1_ParamLimits

0x5733,	// (0x00059945) setting_slider_pane_t2_ParamLimits

0x574d,	// (0x0005995f) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00063770) setting_slider_pane_t_ParamLimits

0x5765,	// (0x00059977) slider_set_pane_ParamLimits

0x6c92,	// (0x0005aea4) control_pane_g5_ParamLimits

0x6c92,	// (0x0005aea4) control_pane_g5

0xa56c,	// (0x0005e77e) slider_set_pane_g1_ParamLimits

0x76c9,	// (0x0005b8db) slider_set_pane_g2_ParamLimits

0x76d5,	// (0x0005b8e7) slider_set_pane_g3_ParamLimits

0x76e9,	// (0x0005b8fb) slider_set_pane_g4_ParamLimits

0x7701,	// (0x0005b913) slider_set_pane_g5_ParamLimits

0x76d5,	// (0x0005b8e7) slider_set_pane_g6_ParamLimits

0x7717,	// (0x0005b929) slider_set_pane_g7_ParamLimits

0xf969,	// (0x00063b7b) slider_set_pane_g_ParamLimits

0x3653,	// (0x00057865) navi_icon_text_pane_ParamLimits

0x8d17,	// (0x0005cf29) aid_fill_nsta_2_ParamLimits

0x8d56,	// (0x0005cf68) aid_touch_tab_arrow_left_ParamLimits

0x8d65,	// (0x0005cf77) aid_touch_tab_arrow_right_ParamLimits

0x8dd2,	// (0x0005cfe4) clock_nsta_pane_ParamLimits

0xa062,	// (0x0005e274) navi_icon_pane_g1_ParamLimits

0xa06e,	// (0x0005e280) navi_text_pane_t1_ParamLimits

0xb558,	// (0x0005f76a) navi_icon_text_pane_g1_ParamLimits

0xb564,	// (0x0005f776) navi_icon_text_pane_t1_ParamLimits

0xce39,	// (0x0006104b) list_single_hc_apps_pane_g1_ParamLimits

0xab48,	// (0x0005ed5a) list_single_hc_apps_pane_g2_ParamLimits

0xfcf4,	// (0x00063f06) list_single_hc_apps_pane_g_ParamLimits

0xab61,	// (0x0005ed73) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7e47,	// (0x0005c059) list_single_hc_apps_pane_t1_ParamLimits

0x555e,	// (0x00059770) popup_toolbar2_fixed_window_ParamLimits

0x555e,	// (0x00059770) popup_toolbar2_fixed_window

0x7295,	// (0x0005b4a7) popup_toolbar2_float_window

0xec1d,	// (0x00062e2f) bg_popup_sub_pane_cp27

0xce52,	// (0x00061064) grid_toolbar2_float_pane

0xec1d,	// (0x00062e2f) bg_popup_sub_pane_cp26

0xce52,	// (0x00061064) grid_toolbar2_fixed_pane

0xce5a,	// (0x0006106c) cell_toolbar2_fixed_pane_ParamLimits

0xce5a,	// (0x0006106c) cell_toolbar2_fixed_pane

0xce6a,	// (0x0006107c) cell_toolbar2_fixed_pane_g1

0x7167,	// (0x0005b379) toolbar2_fixed_button_pane

0x91ec,	// (0x0005d3fe) toolbar2_fixed_button_pane_g1

0x91fc,	// (0x0005d40e) toolbar2_fixed_button_pane_g2

0x91f4,	// (0x0005d406) toolbar2_fixed_button_pane_g3

0x920c,	// (0x0005d41e) toolbar2_fixed_button_pane_g4

0x9204,	// (0x0005d416) toolbar2_fixed_button_pane_g5

0x9214,	// (0x0005d426) toolbar2_fixed_button_pane_g6

0x921c,	// (0x0005d42e) toolbar2_fixed_button_pane_g7

0x922c,	// (0x0005d43e) toolbar2_fixed_button_pane_g8

0x9224,	// (0x0005d436) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x00063a7d) toolbar2_fixed_button_pane_g

0xce73,	// (0x00061085) cell_toolbar2_float_pane_ParamLimits

0xce73,	// (0x00061085) cell_toolbar2_float_pane

0xce84,	// (0x00061096) cell_toolbar2_float_pane_g1

0x7167,	// (0x0005b379) toolbar2_fixed_button_pane_cp

0xbae7,	// (0x0005fcf9) fep_vkb_accented_list_pane_ParamLimits

0xbae7,	// (0x0005fcf9) fep_vkb_accented_list_pane

0x7b8e,	// (0x0005bda0) bg_popup_fep_shadow_pane_g9

0x6b19,	// (0x0005ad2b) bg_popup_fep_shadow_pane_cp3

0xf148,	// (0x0006335a) list_accented_list_pane

0xce8d,	// (0x0006109f) list_single_accented_list_pane_ParamLimits

0xce8d,	// (0x0006109f) list_single_accented_list_pane

0x6b19,	// (0x0005ad2b) list_highlight_pane_cp10

0xce9e,	// (0x000610b0) list_single_accented_list_pane_t1

0x71e5,	// (0x0005b3f7) popup_slider_window_ParamLimits

0x71e5,	// (0x0005b3f7) popup_slider_window

0xcabd,	// (0x00060ccf) aid_indentation_list_msg

0xcf54,	// (0x00061166) bg_popup_window_pane_cp19

0xcfbe,	// (0x000611d0) popup_slider_window_g1

0xcfda,	// (0x000611ec) popup_slider_window_g2

0xcff6,	// (0x00061208) popup_slider_window_g3

0x0005,

0xfcf9,	// (0x00063f0b) popup_slider_window_g

0xd052,	// (0x00061264) popup_slider_window_t1

0xd0c6,	// (0x000612d8) small_volume_slider_vertical_pane

0xb9b9,	// (0x0005fbcb) small_volume_slider_vertical_pane_g1

0xb9b9,	// (0x0005fbcb) small_volume_slider_vertical_pane_g2

0xd0e2,	// (0x000612f4) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0b,	// (0x00063f1d) small_volume_slider_vertical_pane_g

0x5324,	// (0x00059536) area_side_right_pane_ParamLimits

0x5324,	// (0x00059536) area_side_right_pane

0x7e75,	// (0x0005c087) aid_size_side_button_ParamLimits

0x7e75,	// (0x0005c087) aid_size_side_button

0x7e89,	// (0x0005c09b) grid_sctrl_middle_pane_ParamLimits

0x7e89,	// (0x0005c09b) grid_sctrl_middle_pane

0x7ea8,	// (0x0005c0ba) sctrl_sk_bottom_pane

0x7eb9,	// (0x0005c0cb) sctrl_sk_top_pane

0x7ecb,	// (0x0005c0dd) aid_touch_sctrl_top

0x7ed8,	// (0x0005c0ea) bg_sctrl_sk_pane_ParamLimits

0x7ed8,	// (0x0005c0ea) bg_sctrl_sk_pane

0x7ee6,	// (0x0005c0f8) sctrl_sk_top_pane_g1

0x7ef3,	// (0x0005c105) sctrl_sk_top_pane_t1

0x7ecb,	// (0x0005c0dd) aid_touch_sctrl_bottom

0x7ed8,	// (0x0005c0ea) bg_sctrl_sk_pane_cp_ParamLimits

0x7ed8,	// (0x0005c0ea) bg_sctrl_sk_pane_cp

0x7f0e,	// (0x0005c120) sctrl_sk_bottom_pane_g1

0x7ef3,	// (0x0005c105) sctrl_sk_bottom_pane_t1

0x7f17,	// (0x0005c129) cell_sctrl_middle_pane_ParamLimits

0x7f17,	// (0x0005c129) cell_sctrl_middle_pane

0x7f32,	// (0x0005c144) aid_touch_sctrl_middle_ParamLimits

0x7f32,	// (0x0005c144) aid_touch_sctrl_middle

0x7f44,	// (0x0005c156) bg_sctrl_middle_pane_ParamLimits

0x7f44,	// (0x0005c156) bg_sctrl_middle_pane

0x7bae,	// (0x0005bdc0) cell_sctrl_middle_pane_g1_ParamLimits

0x7bae,	// (0x0005bdc0) cell_sctrl_middle_pane_g1

0x7f52,	// (0x0005c164) cell_sctrl_middle_pane_g2_ParamLimits

0x7f52,	// (0x0005c164) cell_sctrl_middle_pane_g2

0x0001,

0xfd17,	// (0x00063f29) cell_sctrl_middle_pane_g_ParamLimits

0xfd17,	// (0x00063f29) cell_sctrl_middle_pane_g

0x91ec,	// (0x0005d3fe) bg_sctrl_middle_pane_g1

0x91f4,	// (0x0005d406) bg_sctrl_middle_pane_g2

0x91fc,	// (0x0005d40e) bg_sctrl_middle_pane_g3

0x9204,	// (0x0005d416) bg_sctrl_middle_pane_g4

0x920c,	// (0x0005d41e) bg_sctrl_middle_pane_g5

0x9214,	// (0x0005d426) bg_sctrl_middle_pane_g6

0x921c,	// (0x0005d42e) bg_sctrl_middle_pane_g7

0x9224,	// (0x0005d436) bg_sctrl_middle_pane_g8

0x0007,

0xfd1c,	// (0x00063f2e) bg_sctrl_middle_pane_g

0x922c,	// (0x0005d43e) bg_sctrl_middle_pane_g8_copy1

0x91ec,	// (0x0005d3fe) bg_sctrl_sk_pane_g1

0x91fc,	// (0x0005d40e) bg_sctrl_sk_pane_g2

0x91f4,	// (0x0005d406) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x00063a7d) bg_sctrl_sk_pane_g

0xef81,	// (0x00063193) aid_size_touch_scroll_bar

0x920c,	// (0x0005d41e) bg_sctrl_sk_pane_g4

0x9204,	// (0x0005d416) bg_sctrl_sk_pane_g5

0x9214,	// (0x0005d426) bg_sctrl_sk_pane_g6

0x921c,	// (0x0005d42e) bg_sctrl_sk_pane_g7

0x922c,	// (0x0005d43e) bg_sctrl_sk_pane_g8

0x9224,	// (0x0005d436) bg_sctrl_sk_pane_g9

0x6e4e,	// (0x0005b060) popup_fep_china_hwr2_fs_candidate_window

0x6e58,	// (0x0005b06a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6e58,	// (0x0005b06a) popup_fep_china_hwr2_fs_control_window

0x7bae,	// (0x0005bdc0) sctrl_sk_top_pane_g2

0x0001,

0xfd12,	// (0x00063f24) sctrl_sk_top_pane_g

0xd0eb,	// (0x000612fd) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd0eb,	// (0x000612fd) aid_fep_china_hwr2_fs_cell

0xd0fd,	// (0x0006130f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd0fd,	// (0x0006130f) bg_popup_fep_shadow_pane_cp4

0xd114,	// (0x00061326) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd114,	// (0x00061326) bg_popup_fep_shadow_pane_cp5

0xd126,	// (0x00061338) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd126,	// (0x00061338) popup_fep_china_hwr2_fs_control_bar_grid

0xd136,	// (0x00061348) popup_fep_china_hwr2_fs_control_funtion_grid

0xd13e,	// (0x00061350) aid_fep_china_hwr2_fs_candi_cell

0xec1d,	// (0x00062e2f) bg_popup_fep_shadow_pane_cp6

0xd148,	// (0x0006135a) popup_fep_china_hwr2_fs_candidate_grid

0xd152,	// (0x00061364) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd152,	// (0x00061364) cell_fep_china_hwr2_fs_funtion_grid

0xb9b9,	// (0x0005fbcb) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd16a,	// (0x0006137c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd16a,	// (0x0006137c) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd178,	// (0x0006138a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd178,	// (0x0006138a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2d,	// (0x00063f3f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2d,	// (0x00063f3f) cell_fep_china_hwr2_fs_funtion_grid_g

0xd18e,	// (0x000613a0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd18e,	// (0x000613a0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd1a3,	// (0x000613b5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd1a3,	// (0x000613b5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd32,	// (0x00063f44) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd32,	// (0x00063f44) cell_fep_china_hwr2_fs_funtion_grid_t

0xd1bf,	// (0x000613d1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd1c7,	// (0x000613d9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd1cf,	// (0x000613e1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd37,	// (0x00063f49) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd1d7,	// (0x000613e9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd1d7,	// (0x000613e9) cell_fep_china_hwr2_fs_candidate_grid

0xd1f0,	// (0x00061402) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd1f8,	// (0x0006140a) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb9b9,	// (0x0005fbcb) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb9b9,	// (0x0005fbcb) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb52,	// (0x00063d64) cell_fep_china_hwr2_fs_candidate_grid_g

0xd200,	// (0x00061412) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8de5,	// (0x0005cff7) clock_nsta_pane_cp_24_ParamLimits

0x8de5,	// (0x0005cff7) clock_nsta_pane_cp_24

0x8e63,	// (0x0005d075) indicator_nsta_pane_cp_24_ParamLimits

0x8e63,	// (0x0005d075) indicator_nsta_pane_cp_24

0x9ede,	// (0x0005e0f0) heading_pane_g1

0x0001,

0xf8d0,	// (0x00063ae2) heading_pane_g

0xa986,	// (0x0005eb98) grid_sct_catagory_button_pane

0xa9b6,	// (0x0005ebc8) scroll_pane_cp5_ParamLimits

0xb5a6,	// (0x0005f7b8) button_value_adjust_pane_cp5_ParamLimits

0xb5a6,	// (0x0005f7b8) button_value_adjust_pane_cp5

0xb685,	// (0x0005f897) form2_midp_time_pane_ParamLimits

0xd20e,	// (0x00061420) cell_sct_catagory_button_pane_ParamLimits

0xd20e,	// (0x00061420) cell_sct_catagory_button_pane

0xb97e,	// (0x0005fb90) bg_button_pane_cp01_ParamLimits

0xb97e,	// (0x0005fb90) bg_button_pane_cp01

0xb9b9,	// (0x0005fbcb) cell_sct_catagory_button_pane_g1

0x7224,	// (0x0005b436) popup_tb_extension_window

0xd220,	// (0x00061432) aid_size_cell_ext_ParamLimits

0xd220,	// (0x00061432) aid_size_cell_ext

0xedb7,	// (0x00062fc9) bg_tb_trans_pane_cp1_ParamLimits

0xedb7,	// (0x00062fc9) bg_tb_trans_pane_cp1

0xd240,	// (0x00061452) grid_tb_ext_pane_ParamLimits

0xd240,	// (0x00061452) grid_tb_ext_pane

0xd270,	// (0x00061482) cell_tb_ext_pane_ParamLimits

0xd270,	// (0x00061482) cell_tb_ext_pane

0xd287,	// (0x00061499) cell_tb_ext_pane_g1_ParamLimits

0xd287,	// (0x00061499) cell_tb_ext_pane_g1

0xd2a4,	// (0x000614b6) cell_tb_ext_pane_t1

0xedb7,	// (0x00062fc9) list_highlight_pane_cp11_ParamLimits

0xedb7,	// (0x00062fc9) list_highlight_pane_cp11

0x557d,	// (0x0005978f) popup_uni_indicator_window_ParamLimits

0x557d,	// (0x0005978f) popup_uni_indicator_window

0xf03f,	// (0x00063251) bg_popup_sub_pane_cp14

0xd2bf,	// (0x000614d1) list_uniindi_pane

0xd2cb,	// (0x000614dd) uniindi_top_pane

0xedb7,	// (0x00062fc9) bg_uniindi_top_pane

0xd2ea,	// (0x000614fc) uniindi_top_pane_g1

0xd300,	// (0x00061512) uniindi_top_pane_g2

0x0003,

0xfd3e,	// (0x00063f50) uniindi_top_pane_g

0xd32a,	// (0x0006153c) uniindi_top_pane_t1

0xd354,	// (0x00061566) list_single_uniindi_pane_ParamLimits

0xd354,	// (0x00061566) list_single_uniindi_pane

0xb9b9,	// (0x0005fbcb) bg_uniindi_top_pane_g1

0xd366,	// (0x00061578) list_single_uniindi_pane_g1

0xd379,	// (0x0006158b) list_single_uniindi_pane_t1

0x5401,	// (0x00059613) control_bg_pane

0xd39e,	// (0x000615b0) bg_sctrl_sk_pane_cp1

0xd3a7,	// (0x000615b9) bg_sctrl_sk_pane_cp2

0xd3b0,	// (0x000615c2) control_bg_pane_g1

0xd3b9,	// (0x000615cb) control_bg_pane_g2

0x0001,

0xfd47,	// (0x00063f59) control_bg_pane_g

0xb3ec,	// (0x0005f5fe) cell_indicator_nsta_pane_g1_ParamLimits

0xb3fa,	// (0x0005f60c) cell_indicator_nsta_pane_g2_ParamLimits

0xfab6,	// (0x00063cc8) cell_indicator_nsta_pane_g_ParamLimits

0x4479,	// (0x0005868b) form2_midp_time_pane_t1_ParamLimits

0x6db8,	// (0x0005afca) main_idle_act4_pane_ParamLimits

0x6db8,	// (0x0005afca) main_idle_act4_pane

0x7224,	// (0x0005b436) popup_tb_extension_window_ParamLimits

0xd260,	// (0x00061472) tb_ext_find_pane_ParamLimits

0xd260,	// (0x00061472) tb_ext_find_pane

0xd3c2,	// (0x000615d4) ai_gene_pane_1_cp1

0x8ae4,	// (0x0005ccf6) ai_gene_pane_2_cp1

0xd3ca,	// (0x000615dc) list_single_idle_plugin_calendar_pane

0xd3d3,	// (0x000615e5) list_single_idle_plugin_notification_pane

0xd3dc,	// (0x000615ee) list_single_idle_plugin_player_pane

0xd3e5,	// (0x000615f7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd3e5,	// (0x000615f7) list_single_idle_plugin_shortcut_pane

0xd407,	// (0x00061619) main_idle_act4_pane_t1

0xd419,	// (0x0006162b) main_idle_act4_pane_t2

0x0001,

0xfd4c,	// (0x00063f5e) main_idle_act4_pane_t

0xd42b,	// (0x0006163d) middle_sk_idle_act4_pane_ParamLimits

0xd42b,	// (0x0006163d) middle_sk_idle_act4_pane

0xd441,	// (0x00061653) popup_clock_digital_analogue_window_cp2

0xd45b,	// (0x0006166d) shortcut_wheel_idle_act4_pane_ParamLimits

0xd45b,	// (0x0006166d) shortcut_wheel_idle_act4_pane

0xb9b9,	// (0x0005fbcb) shortcut_wheel_idle_act4_pane_g1

0xb9b9,	// (0x0005fbcb) shortcut_wheel_idle_act4_pane_g2

0xb9b9,	// (0x0005fbcb) shortcut_wheel_idle_act4_pane_g3

0xb9b9,	// (0x0005fbcb) shortcut_wheel_idle_act4_pane_g4

0xb9b9,	// (0x0005fbcb) shortcut_wheel_idle_act4_pane_g5

0xd46f,	// (0x00061681) shortcut_wheel_idle_act4_pane_g6

0xd477,	// (0x00061689) shortcut_wheel_idle_act4_pane_g7

0xd47f,	// (0x00061691) shortcut_wheel_idle_act4_pane_g8

0xd487,	// (0x00061699) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd51,	// (0x00063f63) shortcut_wheel_idle_act4_pane_g

0xbc29,	// (0x0005fe3b) middle_sk_idle_act4_pane_g1_ParamLimits

0xbc29,	// (0x0005fe3b) middle_sk_idle_act4_pane_g1

0xd4eb,	// (0x000616fd) middle_sk_idle_act4_pane_g2_ParamLimits

0xd4eb,	// (0x000616fd) middle_sk_idle_act4_pane_g2

0x0001,

0xfd74,	// (0x00063f86) middle_sk_idle_act4_pane_g_ParamLimits

0xfd74,	// (0x00063f86) middle_sk_idle_act4_pane_g

0xd4f7,	// (0x00061709) middle_sk_idle_act4_pane_t1_ParamLimits

0xd4f7,	// (0x00061709) middle_sk_idle_act4_pane_t1

0xd514,	// (0x00061726) grid_ai_shortcut_pane_ParamLimits

0xd514,	// (0x00061726) grid_ai_shortcut_pane

0xd52d,	// (0x0006173f) list_highlight_pane_cp16_ParamLimits

0xd52d,	// (0x0006173f) list_highlight_pane_cp16

0xd53a,	// (0x0006174c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd53a,	// (0x0006174c) list_single_idle_plugin_shortcut_pane_g1

0xd546,	// (0x00061758) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd546,	// (0x00061758) list_single_idle_plugin_shortcut_pane_g2

0xd55e,	// (0x00061770) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd55e,	// (0x00061770) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd79,	// (0x00063f8b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd79,	// (0x00063f8b) list_single_idle_plugin_shortcut_pane_g

0xd571,	// (0x00061783) cell_ai_shortcut_pane_ParamLimits

0xd571,	// (0x00061783) cell_ai_shortcut_pane

0xd595,	// (0x000617a7) cell_ai_shortcut_pane_g1_ParamLimits

0xd595,	// (0x000617a7) cell_ai_shortcut_pane_g1

0xd3c2,	// (0x000615d4) ai_gene_pane_1_cp2

0xd5b7,	// (0x000617c9) ai_gene_pane_2_cp2

0xd5bf,	// (0x000617d1) list_highlight_pane_cp15

0xd5c8,	// (0x000617da) list_single_idle_plugin_calendar_pane_g1

0xd5bf,	// (0x000617d1) list_highlight_pane_cp17

0xd5d0,	// (0x000617e2) list_single_idle_plugin_calendar_pane_g1_copy1

0xd5d8,	// (0x000617ea) list_single_idle_plugin_player_pane_g1

0xad46,	// (0x0005ef58) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd80,	// (0x00063f92) list_single_idle_plugin_player_pane_g

0xd5e0,	// (0x000617f2) list_single_idle_plugin_player_pane_t1

0xd5ee,	// (0x00061800) list_single_idle_plugin_player_pane_t2

0xd5fc,	// (0x0006180e) list_single_idle_plugin_player_pane_t3

0xd60a,	// (0x0006181c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd85,	// (0x00063f97) list_single_idle_plugin_player_pane_t

0xd618,	// (0x0006182a) wait_bar_pane_cp15

0xd620,	// (0x00061832) grid_ai_notification_pane

0xad46,	// (0x0005ef58) list_single_idle_plugin_notification_pane_g1

0xd629,	// (0x0006183b) cell_ai_notification_pane_ParamLimits

0xd629,	// (0x0006183b) cell_ai_notification_pane

0xd636,	// (0x00061848) cell_ai_notification_pane_g1

0xd63e,	// (0x00061850) cell_ai_notification_pane_t1

0xd64c,	// (0x0006185e) tb_ext_find_button_pane

0xd654,	// (0x00061866) tb_ext_find_pane_g1

0xd65c,	// (0x0006186e) tb_ext_find_pane_t1

0xf475,	// (0x00063687) tb_ext_find_button_pane_g1

0xd66a,	// (0x0006187c) tb_ext_find_button_pane_g2

0x0001,

0xfd8e,	// (0x00063fa0) tb_ext_find_button_pane_g

0xd407,	// (0x00061619) main_idle_act4_pane_t1_ParamLimits

0xd419,	// (0x0006162b) main_idle_act4_pane_t2_ParamLimits

0xfd4c,	// (0x00063f5e) main_idle_act4_pane_t_ParamLimits

0xd441,	// (0x00061653) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd44f,	// (0x00061661) sat_plugin_idle_act4_pane_ParamLimits

0xd44f,	// (0x00061661) sat_plugin_idle_act4_pane

0xd673,	// (0x00061885) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd673,	// (0x00061885) sat_plugin_idle_act4_pane_t1

0xd686,	// (0x00061898) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd686,	// (0x00061898) sat_plugin_idle_act4_pane_t2

0xd699,	// (0x000618ab) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd699,	// (0x000618ab) sat_plugin_idle_act4_pane_t3

0xd6ac,	// (0x000618be) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd6ac,	// (0x000618be) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd93,	// (0x00063fa5) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd93,	// (0x00063fa5) sat_plugin_idle_act4_pane_t

0x54c6,	// (0x000596d8) popup_battery_window_ParamLimits

0x54c6,	// (0x000596d8) popup_battery_window

0xedb7,	// (0x00062fc9) bg_popup_sub_pane_cp25_ParamLimits

0xedb7,	// (0x00062fc9) bg_popup_sub_pane_cp25

0xd6bf,	// (0x000618d1) popup_battery_window_g1_ParamLimits

0xd6bf,	// (0x000618d1) popup_battery_window_g1

0xd6cb,	// (0x000618dd) popup_battery_window_t1_ParamLimits

0xd6cb,	// (0x000618dd) popup_battery_window_t1

0xd6dd,	// (0x000618ef) popup_battery_window_t2_ParamLimits

0xd6dd,	// (0x000618ef) popup_battery_window_t2

0x0001,

0xfd9c,	// (0x00063fae) popup_battery_window_t_ParamLimits

0xfd9c,	// (0x00063fae) popup_battery_window_t

0x6b21,	// (0x0005ad33) midp_canvas_pane_ParamLimits

0x8a26,	// (0x0005cc38) midp_keypad_pane_ParamLimits

0x8a26,	// (0x0005cc38) midp_keypad_pane

0x8cdf,	// (0x0005cef1) main_midp_pane_ParamLimits

0xb466,	// (0x0005f678) signal_pane_g2_cp_ParamLimits

0xd6fa,	// (0x0006190c) aid_size_cell_midp_keypad_ParamLimits

0xd6fa,	// (0x0006190c) aid_size_cell_midp_keypad

0xd714,	// (0x00061926) midp_keyp_game_grid_pane_ParamLimits

0xd714,	// (0x00061926) midp_keyp_game_grid_pane

0xd734,	// (0x00061946) midp_keyp_rocker_pane_ParamLimits

0xd734,	// (0x00061946) midp_keyp_rocker_pane

0xd76d,	// (0x0006197f) midp_keyp_sk_left_pane_ParamLimits

0xd76d,	// (0x0006197f) midp_keyp_sk_left_pane

0xd7c7,	// (0x000619d9) midp_keyp_sk_right_pane_ParamLimits

0xd7c7,	// (0x000619d9) midp_keyp_sk_right_pane

0xec1d,	// (0x00062e2f) bg_button_pane_cp03

0xd821,	// (0x00061a33) midp_keyp_sk_left_pane_g1

0xec1d,	// (0x00062e2f) bg_button_pane_cp04

0xd821,	// (0x00061a33) midp_keyp_sk_right_pane_g1

0xb9b9,	// (0x0005fbcb) midp_keyp_rocker_pane_g1

0xd82a,	// (0x00061a3c) keyp_game_cell_pane_ParamLimits

0xd82a,	// (0x00061a3c) keyp_game_cell_pane

0xec1d,	// (0x00062e2f) bg_button_pane_cp02

0xd83d,	// (0x00061a4f) keyp_game_cell_pane_g1

0x54fc,	// (0x0005970e) popup_fep_vkb2_window_ParamLimits

0x54fc,	// (0x0005970e) popup_fep_vkb2_window

0x7f70,	// (0x0005c182) aid_size_cell_vkb2_ParamLimits

0x7f70,	// (0x0005c182) aid_size_cell_vkb2

0x7fc4,	// (0x0005c1d6) popup_fep_vkb2_window_g1_ParamLimits

0x7fc4,	// (0x0005c1d6) popup_fep_vkb2_window_g1

0x800c,	// (0x0005c21e) vkb2_area_bottom_pane_ParamLimits

0x800c,	// (0x0005c21e) vkb2_area_bottom_pane

0x8058,	// (0x0005c26a) vkb2_area_keypad_pane_ParamLimits

0x8058,	// (0x0005c26a) vkb2_area_keypad_pane

0x809a,	// (0x0005c2ac) vkb2_area_top_pane_ParamLimits

0x809a,	// (0x0005c2ac) vkb2_area_top_pane

0x8114,	// (0x0005c326) vkb2_top_entry_pane_ParamLimits

0x8114,	// (0x0005c326) vkb2_top_entry_pane

0x813e,	// (0x0005c350) vkb2_top_grid_left_pane_ParamLimits

0x813e,	// (0x0005c350) vkb2_top_grid_left_pane

0x815c,	// (0x0005c36e) vkb2_top_grid_right_pane_ParamLimits

0x815c,	// (0x0005c36e) vkb2_top_grid_right_pane

0x817a,	// (0x0005c38c) vkb2_cell_keypad_pane_ParamLimits

0x817a,	// (0x0005c38c) vkb2_cell_keypad_pane

0x824b,	// (0x0005c45d) vkb2_area_bottom_grid_pane_ParamLimits

0x824b,	// (0x0005c45d) vkb2_area_bottom_grid_pane

0x8271,	// (0x0005c483) vkb2_area_bottom_pane_g1_ParamLimits

0x8271,	// (0x0005c483) vkb2_area_bottom_pane_g1

0x8295,	// (0x0005c4a7) vkb2_area_bottom_pane_g2_ParamLimits

0x8295,	// (0x0005c4a7) vkb2_area_bottom_pane_g2

0x82c3,	// (0x0005c4d5) vkb2_area_bottom_pane_g3_ParamLimits

0x82c3,	// (0x0005c4d5) vkb2_area_bottom_pane_g3

0x0002,

0xfda1,	// (0x00063fb3) vkb2_area_bottom_pane_g_ParamLimits

0xfda1,	// (0x00063fb3) vkb2_area_bottom_pane_g

0x8324,	// (0x0005c536) vkb2_top_cell_left_pane_ParamLimits

0x8324,	// (0x0005c536) vkb2_top_cell_left_pane

0xd84e,	// (0x00061a60) vkb2_top_entry_pane_g1_ParamLimits

0xd84e,	// (0x00061a60) vkb2_top_entry_pane_g1

0xd85c,	// (0x00061a6e) vkb2_top_entry_pane_t1_ParamLimits

0xd85c,	// (0x00061a6e) vkb2_top_entry_pane_t1

0xd88e,	// (0x00061aa0) vkb2_top_entry_pane_t2_ParamLimits

0xd88e,	// (0x00061aa0) vkb2_top_entry_pane_t2

0xd8c0,	// (0x00061ad2) vkb2_top_entry_pane_t3_ParamLimits

0xd8c0,	// (0x00061ad2) vkb2_top_entry_pane_t3

0x0002,

0xfda8,	// (0x00063fba) vkb2_top_entry_pane_t_ParamLimits

0xfda8,	// (0x00063fba) vkb2_top_entry_pane_t

0x8371,	// (0x0005c583) vkb2_top_grid_right_pane_g1_ParamLimits

0x8371,	// (0x0005c583) vkb2_top_grid_right_pane_g1

0x8387,	// (0x0005c599) vkb2_top_grid_right_pane_g2_ParamLimits

0x8387,	// (0x0005c599) vkb2_top_grid_right_pane_g2

0x839f,	// (0x0005c5b1) vkb2_top_grid_right_pane_g3_ParamLimits

0x839f,	// (0x0005c5b1) vkb2_top_grid_right_pane_g3

0x83b7,	// (0x0005c5c9) vkb2_top_grid_right_pane_g4_ParamLimits

0x83b7,	// (0x0005c5c9) vkb2_top_grid_right_pane_g4

0x0003,

0xfdaf,	// (0x00063fc1) vkb2_top_grid_right_pane_g_ParamLimits

0xfdaf,	// (0x00063fc1) vkb2_top_grid_right_pane_g

0x83cd,	// (0x0005c5df) vkb2_top_cell_left_pane_g1

0x83e4,	// (0x0005c5f6) vkb2_cell_keypad_pane_g1_ParamLimits

0x83e4,	// (0x0005c5f6) vkb2_cell_keypad_pane_g1

0xd8e4,	// (0x00061af6) vkb2_cell_keypad_pane_t1_ParamLimits

0xd8e4,	// (0x00061af6) vkb2_cell_keypad_pane_t1

0x83f2,	// (0x0005c604) vkb2_cell_bottom_grid_pane_ParamLimits

0x83f2,	// (0x0005c604) vkb2_cell_bottom_grid_pane

0x842b,	// (0x0005c63d) vkb2_cell_bottom_grid_pane_g1

0xd48f,	// (0x000616a1) aid_call2_pane_cp02

0xd497,	// (0x000616a9) aid_call_pane_cp02

0xd49f,	// (0x000616b1) clock_digital_number_pane_cp10

0xd4a7,	// (0x000616b9) clock_digital_number_pane_cp11

0xd4af,	// (0x000616c1) clock_digital_number_pane_cp12

0xd4b7,	// (0x000616c9) clock_digital_number_pane_cp13

0xd4bf,	// (0x000616d1) clock_digital_separator_pane_cp10

0xf475,	// (0x00063687) popup_clock_digital_analogue_window_cp2_g1

0xf475,	// (0x00063687) popup_clock_digital_analogue_window_cp2_g2

0xd4c7,	// (0x000616d9) popup_clock_digital_analogue_window_cp2_g3

0xf475,	// (0x00063687) popup_clock_digital_analogue_window_cp2_g4

0xd4c7,	// (0x000616d9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd64,	// (0x00063f76) popup_clock_digital_analogue_window_cp2_g

0xd4cf,	// (0x000616e1) popup_clock_digital_analogue_window_cp2_t1

0xd4dd,	// (0x000616ef) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6f,	// (0x00063f81) popup_clock_digital_analogue_window_cp2_t

0xb9b9,	// (0x0005fbcb) clock_digital_number_pane_cp10_g1

0xb9b9,	// (0x0005fbcb) clock_digital_number_pane_cp10_g2

0x0001,

0xfb52,	// (0x00063d64) clock_digital_number_pane_cp10_g

0xb9b9,	// (0x0005fbcb) clock_digital_separator_pane_cp10_g1

0xb9b9,	// (0x0005fbcb) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb52,	// (0x00063d64) clock_digital_separator_pane_cp10_g

0xd30c,	// (0x0006151e) uniindi_top_pane_g3

0xd31d,	// (0x0006152f) uniindi_top_pane_g4

0x8205,	// (0x0005c417) vkb2_row_keypad_pane_ParamLimits

0x8205,	// (0x0005c417) vkb2_row_keypad_pane

0x8447,	// (0x0005c659) vkb2_cell_t_keypad_pane_ParamLimits

0x8447,	// (0x0005c659) vkb2_cell_t_keypad_pane

0x8457,	// (0x0005c669) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8457,	// (0x0005c669) vkb2_cell_t_keypad_pane_cp08

0x846a,	// (0x0005c67c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x846a,	// (0x0005c67c) vkb2_cell_t_keypad_pane_cp09

0x847e,	// (0x0005c690) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x847e,	// (0x0005c690) vkb2_cell_t_keypad_pane_cp01

0x848f,	// (0x0005c6a1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x848f,	// (0x0005c6a1) vkb2_cell_t_keypad_pane_cp02

0x84a0,	// (0x0005c6b2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x84a0,	// (0x0005c6b2) vkb2_cell_t_keypad_pane_cp03

0x84b1,	// (0x0005c6c3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x84b1,	// (0x0005c6c3) vkb2_cell_t_keypad_pane_cp04

0x84c2,	// (0x0005c6d4) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x84c2,	// (0x0005c6d4) vkb2_cell_t_keypad_pane_cp05

0x84d3,	// (0x0005c6e5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x84d3,	// (0x0005c6e5) vkb2_cell_t_keypad_pane_cp06

0x84e4,	// (0x0005c6f6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x84e4,	// (0x0005c6f6) vkb2_cell_t_keypad_pane_cp07

0x84f5,	// (0x0005c707) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x84f5,	// (0x0005c707) vkb2_cell_t_keypad_pane_cp10

0x7bae,	// (0x0005bdc0) vkb2_cell_t_keypad_pane_g1

0xd8fb,	// (0x00061b0d) vkb2_cell_t_keypad_pane_t1

0x5401,	// (0x00059613) popup_grid_graphic2_window

0xd90d,	// (0x00061b1f) aid_size_cell_graphic2_ParamLimits

0xd90d,	// (0x00061b1f) aid_size_cell_graphic2

0xd945,	// (0x00061b57) bg_popup_window_pane_cp21_ParamLimits

0xd945,	// (0x00061b57) bg_popup_window_pane_cp21

0xd953,	// (0x00061b65) graphic2_pages_pane_ParamLimits

0xd953,	// (0x00061b65) graphic2_pages_pane

0xd999,	// (0x00061bab) grid_graphic2_control_pane_ParamLimits

0xd999,	// (0x00061bab) grid_graphic2_control_pane

0xd9d7,	// (0x00061be9) grid_graphic2_pane_ParamLimits

0xd9d7,	// (0x00061be9) grid_graphic2_pane

0xda4b,	// (0x00061c5d) cell_graphic2_pane

0x5401,	// (0x00059613) main_comp_mode_pane

0xcb6f,	// (0x00060d81) list_ai3_gene_pane_ParamLimits

0xcf54,	// (0x00061166) bg_popup_window_pane_cp19_ParamLimits

0xcf60,	// (0x00061172) bg_touch_area_indi_pane_ParamLimits

0xcf60,	// (0x00061172) bg_touch_area_indi_pane

0xcf76,	// (0x00061188) bg_touch_area_indi_pane_cp01_ParamLimits

0xcf76,	// (0x00061188) bg_touch_area_indi_pane_cp01

0xcf8c,	// (0x0006119e) bg_touch_area_indi_pane_cp02_ParamLimits

0xcf8c,	// (0x0006119e) bg_touch_area_indi_pane_cp02

0xcfa4,	// (0x000611b6) bg_touch_area_indi_pane_cp03_ParamLimits

0xcfa4,	// (0x000611b6) bg_touch_area_indi_pane_cp03

0xcfbe,	// (0x000611d0) popup_slider_window_g1_ParamLimits

0xcfda,	// (0x000611ec) popup_slider_window_g2_ParamLimits

0xcff6,	// (0x00061208) popup_slider_window_g3_ParamLimits

0xfcf9,	// (0x00063f0b) popup_slider_window_g_ParamLimits

0xd052,	// (0x00061264) popup_slider_window_t1_ParamLimits

0xd0c6,	// (0x000612d8) small_volume_slider_vertical_pane_ParamLimits

0xda4b,	// (0x00061c5d) cell_graphic2_pane_ParamLimits

0xda99,	// (0x00061cab) bg_button_pane_cp10_ParamLimits

0xda99,	// (0x00061cab) bg_button_pane_cp10

0xdaac,	// (0x00061cbe) bg_button_pane_cp11_ParamLimits

0xdaac,	// (0x00061cbe) bg_button_pane_cp11

0xdabf,	// (0x00061cd1) graphic2_pages_pane_g1_ParamLimits

0xdabf,	// (0x00061cd1) graphic2_pages_pane_g1

0xdada,	// (0x00061cec) graphic2_pages_pane_g2_ParamLimits

0xdada,	// (0x00061cec) graphic2_pages_pane_g2

0x0001,

0xfdbd,	// (0x00063fcf) graphic2_pages_pane_g_ParamLimits

0xfdbd,	// (0x00063fcf) graphic2_pages_pane_g

0xdaf2,	// (0x00061d04) graphic2_pages_pane_t1_ParamLimits

0xdaf2,	// (0x00061d04) graphic2_pages_pane_t1

0xdb0a,	// (0x00061d1c) cell_graphic2_control_pane_ParamLimits

0xdb0a,	// (0x00061d1c) cell_graphic2_control_pane

0xdb2b,	// (0x00061d3d) cell_graphic2_pane_g1_ParamLimits

0xdb2b,	// (0x00061d3d) cell_graphic2_pane_g1

0xdb38,	// (0x00061d4a) cell_graphic2_pane_g2_ParamLimits

0xdb38,	// (0x00061d4a) cell_graphic2_pane_g2

0xdb45,	// (0x00061d57) cell_graphic2_pane_g3_ParamLimits

0xdb45,	// (0x00061d57) cell_graphic2_pane_g3

0xdb52,	// (0x00061d64) cell_graphic2_pane_g4_ParamLimits

0xdb52,	// (0x00061d64) cell_graphic2_pane_g4

0xdb5f,	// (0x00061d71) cell_graphic2_pane_g5_ParamLimits

0xdb5f,	// (0x00061d71) cell_graphic2_pane_g5

0x0004,

0xfdc2,	// (0x00063fd4) cell_graphic2_pane_g_ParamLimits

0xfdc2,	// (0x00063fd4) cell_graphic2_pane_g

0xdb7a,	// (0x00061d8c) cell_graphic2_pane_t1_ParamLimits

0xdb7a,	// (0x00061d8c) cell_graphic2_pane_t1

0x9278,	// (0x0005d48a) grid_highlight_pane_cp11_ParamLimits

0x9278,	// (0x0005d48a) grid_highlight_pane_cp11

0xedb7,	// (0x00062fc9) bg_button_pane_cp05

0xdba3,	// (0x00061db5) cell_graphic2_control_pane_g1

0xb9b9,	// (0x0005fbcb) bg_touch_area_indi_pane_g1

0xdbcb,	// (0x00061ddd) aid_cmod_rocker_key_size

0xdbd5,	// (0x00061de7) aid_cmode_itu_key_size

0xdbdf,	// (0x00061df1) main_cmode_video_pane

0xdbe9,	// (0x00061dfb) main_comp_mode_itu_pane

0xdbf5,	// (0x00061e07) main_comp_mode_rocker_pane

0xdc01,	// (0x00061e13) cell_cmode_rocker_pane_ParamLimits

0xdc01,	// (0x00061e13) cell_cmode_rocker_pane

0xdc13,	// (0x00061e25) cell_cmode_itu_pane_ParamLimits

0xdc13,	// (0x00061e25) cell_cmode_itu_pane

0xf03f,	// (0x00063251) bg_button_pane_cp06_ParamLimits

0xf03f,	// (0x00063251) bg_button_pane_cp06

0xbc29,	// (0x0005fe3b) cell_cmode_rocker_pane_g1_ParamLimits

0xbc29,	// (0x0005fe3b) cell_cmode_rocker_pane_g1

0xd16a,	// (0x0006137c) cell_cmode_rocker_pane_g2_ParamLimits

0xd16a,	// (0x0006137c) cell_cmode_rocker_pane_g2

0x0001,

0xfdd2,	// (0x00063fe4) cell_cmode_rocker_pane_g_ParamLimits

0xfdd2,	// (0x00063fe4) cell_cmode_rocker_pane_g

0xec1d,	// (0x00062e2f) bg_button_pane_cp07

0xdc28,	// (0x00061e3a) cell_cmode_itu_pane_g1

0xdc31,	// (0x00061e43) cell_cmode_itu_pane_t1

0xdc3f,	// (0x00061e51) cell_cmode_itu_pane_t2

0x0001,

0xfdd7,	// (0x00063fe9) cell_cmode_itu_pane_t

0xd38e,	// (0x000615a0) aid_touch_ctrl_left

0xd396,	// (0x000615a8) aid_touch_ctrl_right

0xec1d,	// (0x00062e2f) compa_mode_pane

0xdc4d,	// (0x00061e5f) aid_cmod_rocker_key_size_cp

0xdc57,	// (0x00061e69) aid_cmode_itu_key_size_cp

0xdc61,	// (0x00061e73) compa_mode_pane_g1

0xdc69,	// (0x00061e7b) compa_mode_pane_g2

0xdc71,	// (0x00061e83) compa_mode_pane_g3

0x0002,

0xfddc,	// (0x00063fee) compa_mode_pane_g

0xdc79,	// (0x00061e8b) main_comp_mode_itu_pane_cp

0xdc81,	// (0x00061e93) main_comp_mode_rocker_pane_cp

0xdc89,	// (0x00061e9b) cell_cmode_itu_pane_cp_ParamLimits

0xdc89,	// (0x00061e9b) cell_cmode_itu_pane_cp

0xdc9e,	// (0x00061eb0) cell_cmode_rocker_pane_cp_ParamLimits

0xdc9e,	// (0x00061eb0) cell_cmode_rocker_pane_cp

0xf03f,	// (0x00063251) bg_button_pane_cp06_cp_ParamLimits

0xf03f,	// (0x00063251) bg_button_pane_cp06_cp

0xbc29,	// (0x0005fe3b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbc29,	// (0x0005fe3b) cell_cmode_rocker_pane_g1_cp

0xb9b9,	// (0x0005fbcb) cell_cmode_rocker_pane_g2_cp

0xec1d,	// (0x00062e2f) bg_button_pane_cp07_cp

0xdcb0,	// (0x00061ec2) cell_cmode_itu_pane_g1_cp

0xdcb9,	// (0x00061ecb) cell_cmode_itu_pane_t1_cp

0xdcb9,	// (0x00061ecb) cell_cmode_itu_pane_t2_cp

0xa70a,	// (0x0005e91c) settings_code_pane_cp2

0xec7f,	// (0x00062e91) bg_popup_window_pane_cp3_ParamLimits

0xeed0,	// (0x000630e2) heading_pane_cp3_ParamLimits

0xeedc,	// (0x000630ee) listscroll_popup_graphic_pane_ParamLimits

0x7957,	// (0x0005bb69) fep_hwr_aid_pane_ParamLimits

0x7ecb,	// (0x0005c0dd) aid_touch_sctrl_top_ParamLimits

0x7ee6,	// (0x0005c0f8) sctrl_sk_top_pane_g1_ParamLimits

0x7bae,	// (0x0005bdc0) sctrl_sk_top_pane_g2_ParamLimits

0xfd12,	// (0x00063f24) sctrl_sk_top_pane_g_ParamLimits

0x7ef3,	// (0x0005c105) sctrl_sk_top_pane_t1_ParamLimits

0x7ecb,	// (0x0005c0dd) aid_touch_sctrl_bottom_ParamLimits

0x7ef3,	// (0x0005c105) sctrl_sk_bottom_pane_t1_ParamLimits

0xd2d8,	// (0x000614ea) aid_area_touch_clock

0x80dc,	// (0x0005c2ee) aid_vkb2_area_top_pane_cell_ParamLimits

0x80dc,	// (0x0005c2ee) aid_vkb2_area_top_pane_cell

0x8227,	// (0x0005c439) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8227,	// (0x0005c439) aid_vkb2_area_bottom_pane_cell

0xd846,	// (0x00061a58) popup_char_count_window

0xdcc7,	// (0x00061ed9) popup_char_count_window_g1

0xdcd0,	// (0x00061ee2) popup_char_count_window_g2

0xdcd9,	// (0x00061eeb) popup_char_count_window_g3

0x0002,

0xfde3,	// (0x00063ff5) popup_char_count_window_g

0xdce2,	// (0x00061ef4) popup_char_count_window_t1

0x7fa2,	// (0x0005c1b4) popup_fep_char_preview_window_ParamLimits

0x7fa2,	// (0x0005c1b4) popup_fep_char_preview_window

0x80fa,	// (0x0005c30c) vkb2_top_candi_pane_ParamLimits

0x80fa,	// (0x0005c30c) vkb2_top_candi_pane

0xdcf0,	// (0x00061f02) cell_vkb2_top_candi_pane_ParamLimits

0xdcf0,	// (0x00061f02) cell_vkb2_top_candi_pane

0x850a,	// (0x0005c71c) bg_popup_fep_char_preview_window_ParamLimits

0x850a,	// (0x0005c71c) bg_popup_fep_char_preview_window

0x8518,	// (0x0005c72a) popup_fep_char_preview_window_t1_ParamLimits

0x8518,	// (0x0005c72a) popup_fep_char_preview_window_t1

0xdd3d,	// (0x00061f4f) bg_popup_fep_char_preview_window_g1

0xdd45,	// (0x00061f57) bg_popup_fep_char_preview_window_g2

0xdd4d,	// (0x00061f5f) bg_popup_fep_char_preview_window_g3

0xdd55,	// (0x00061f67) bg_popup_fep_char_preview_window_g4

0xdd5d,	// (0x00061f6f) bg_popup_fep_char_preview_window_g5

0x8552,	// (0x0005c764) bg_popup_fep_char_preview_window_g6

0xdd65,	// (0x00061f77) bg_popup_fep_char_preview_window_g7

0xdd6d,	// (0x00061f7f) bg_popup_fep_char_preview_window_g8

0xdd75,	// (0x00061f87) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdea,	// (0x00063ffc) bg_popup_fep_char_preview_window_g

0x7bae,	// (0x0005bdc0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7bae,	// (0x0005bdc0) cell_vkb2_top_candi_pane_g1

0x7bbc,	// (0x0005bdce) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7bbc,	// (0x0005bdce) cell_vkb2_top_candi_pane_g2

0xcd06,	// (0x00060f18) cell_vkb2_top_candi_pane_g3_ParamLimits

0xcd06,	// (0x00060f18) cell_vkb2_top_candi_pane_g3

0x855a,	// (0x0005c76c) cell_vkb2_top_candi_pane_g4_ParamLimits

0x855a,	// (0x0005c76c) cell_vkb2_top_candi_pane_g4

0xc129,	// (0x0006033b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc129,	// (0x0006033b) cell_vkb2_top_candi_pane_g5

0x857b,	// (0x0005c78d) cell_vkb2_top_candi_pane_g6_ParamLimits

0x857b,	// (0x0005c78d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfd,	// (0x0006400f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfd,	// (0x0006400f) cell_vkb2_top_candi_pane_g

0x8589,	// (0x0005c79b) cell_vkb2_top_candi_pane_t1

0x76b5,	// (0x0005b8c7) aid_size_touch_slider_mark_ParamLimits

0x76b5,	// (0x0005b8c7) aid_size_touch_slider_mark

0xd989,	// (0x00061b9b) grid_graphic2_catg_pane_ParamLimits

0xd989,	// (0x00061b9b) grid_graphic2_catg_pane

0xda27,	// (0x00061c39) popup_grid_graphic2_window_t1_ParamLimits

0xda27,	// (0x00061c39) popup_grid_graphic2_window_t1

0xda39,	// (0x00061c4b) popup_grid_graphic2_window_t2_ParamLimits

0xda39,	// (0x00061c4b) popup_grid_graphic2_window_t2

0x0001,

0xfdb8,	// (0x00063fca) popup_grid_graphic2_window_t_ParamLimits

0xfdb8,	// (0x00063fca) popup_grid_graphic2_window_t

0xedb7,	// (0x00062fc9) bg_button_pane_cp05_ParamLimits

0xdba3,	// (0x00061db5) cell_graphic2_control_pane_g1_ParamLimits

0xdd7d,	// (0x00061f8f) cell_graphic2_catg_pane_ParamLimits

0xdd7d,	// (0x00061f8f) cell_graphic2_catg_pane

0xec1d,	// (0x00062e2f) bg_button_pane_cp12

0xdd8f,	// (0x00061fa1) cell_graphic2_catg_pane_g1

0xd2a4,	// (0x000614b6) cell_tb_ext_pane_t1_ParamLimits

0x8344,	// (0x0005c556) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8344,	// (0x0005c556) vkb2_top_cell_right_narrow_pane

0x835c,	// (0x0005c56e) vkb2_top_cell_right_wide_pane_ParamLimits

0x835c,	// (0x0005c56e) vkb2_top_cell_right_wide_pane

0x7949,	// (0x0005bb5b) bg_vkb2_func_pane_ParamLimits

0x7949,	// (0x0005bb5b) bg_vkb2_func_pane

0x83cd,	// (0x0005c5df) vkb2_top_cell_left_pane_g1_ParamLimits

0x7949,	// (0x0005bb5b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7949,	// (0x0005bb5b) bg_vkb2_fuc_pane_cp03

0x842b,	// (0x0005c63d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x91f4,	// (0x0005d406) bg_vkb2_func_pane_g1

0x91fc,	// (0x0005d40e) bg_vkb2_func_pane_g2

0x920c,	// (0x0005d41e) bg_vkb2_func_pane_g3

0x9204,	// (0x0005d416) bg_vkb2_func_pane_g4

0x9214,	// (0x0005d426) bg_vkb2_func_pane_g5

0x921c,	// (0x0005d42e) bg_vkb2_func_pane_g6

0x9224,	// (0x0005d436) bg_vkb2_func_pane_g7

0x922c,	// (0x0005d43e) bg_vkb2_func_pane_g8

0x91ec,	// (0x0005d3fe) bg_vkb2_func_pane_g9

0x0008,

0xfe0a,	// (0x0006401c) bg_vkb2_func_pane_g

0x7949,	// (0x0005bb5b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7949,	// (0x0005bb5b) bg_vkb2_fuc_pane_cp01

0x83cd,	// (0x0005c5df) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x83cd,	// (0x0005c5df) vkb2_top_cell_right_wide_pane_g1

0x7949,	// (0x0005bb5b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7949,	// (0x0005bb5b) bg_vkb2_fuc_pane_cp02

0x842b,	// (0x0005c63d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x842b,	// (0x0005c63d) vkb2_top_cell_right_narrow_pane_g1

0xced6,	// (0x000610e8) aid_touch_area_decrease_ParamLimits

0xced6,	// (0x000610e8) aid_touch_area_decrease

0xcef6,	// (0x00061108) aid_touch_area_increase_ParamLimits

0xcef6,	// (0x00061108) aid_touch_area_increase

0xcf02,	// (0x00061114) aid_touch_area_mute_ParamLimits

0xcf02,	// (0x00061114) aid_touch_area_mute

0xcf26,	// (0x00061138) aid_touch_area_slider_ParamLimits

0xcf26,	// (0x00061138) aid_touch_area_slider

0xd012,	// (0x00061224) popup_slider_window_g4_ParamLimits

0xd012,	// (0x00061224) popup_slider_window_g4

0xd01e,	// (0x00061230) popup_slider_window_g5_ParamLimits

0xd01e,	// (0x00061230) popup_slider_window_g5

0xd040,	// (0x00061252) popup_slider_window_g6_ParamLimits

0xd040,	// (0x00061252) popup_slider_window_g6

0xd080,	// (0x00061292) popup_slider_window_t2_ParamLimits

0xd080,	// (0x00061292) popup_slider_window_t2

0x0001,

0xfd06,	// (0x00063f18) popup_slider_window_t_ParamLimits

0xfd06,	// (0x00063f18) popup_slider_window_t

0xd098,	// (0x000612aa) slider_pane_ParamLimits

0xd098,	// (0x000612aa) slider_pane

0xdd98,	// (0x00061faa) slider_pane_g1_ParamLimits

0xdd98,	// (0x00061faa) slider_pane_g1

0xddac,	// (0x00061fbe) slider_pane_g2_ParamLimits

0xddac,	// (0x00061fbe) slider_pane_g2

0xddc2,	// (0x00061fd4) slider_pane_g3_ParamLimits

0xddc2,	// (0x00061fd4) slider_pane_g3

0x0003,

0xfe1d,	// (0x0006402f) slider_pane_g_ParamLimits

0xfe1d,	// (0x0006402f) slider_pane_g

0x7280,	// (0x0005b492) popup_tb_float_extension_window_ParamLimits

0x7280,	// (0x0005b492) popup_tb_float_extension_window

0xddee,	// (0x00062000) aid_size_cell_tb_float_ext

0xec1d,	// (0x00062e2f) bg_popup_sub_window_cp28

0xddfa,	// (0x0006200c) grid_tb_float_ext_pane

0xde04,	// (0x00062016) cell_tb_float_ext_pane_ParamLimits

0xde04,	// (0x00062016) cell_tb_float_ext_pane

0xde1e,	// (0x00062030) cell_tb_float_ext_pane_g1

0xde27,	// (0x00062039) grid_highlight_pane_cp12

0x7a98,	// (0x0005bcaa) cell_last_hwr_side_pane_ParamLimits

0x7a98,	// (0x0005bcaa) cell_last_hwr_side_pane

0xb9b9,	// (0x0005fbcb) cell_last_hwr_side_pane_g1

0xde30,	// (0x00062042) cell_last_hwr_side_pane_g2

0x0001,

0xfe26,	// (0x00064038) cell_last_hwr_side_pane_g

0x82f3,	// (0x0005c505) vkb2_area_bottom_space_btn_pane_ParamLimits

0x82f3,	// (0x0005c505) vkb2_area_bottom_space_btn_pane

0x7bae,	// (0x0005bdc0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd8fb,	// (0x00061b0d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8589,	// (0x0005c79b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x85a8,	// (0x0005c7ba) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x85a8,	// (0x0005c7ba) vkb2_area_bottom_space_btn_pane_g1

0x85e2,	// (0x0005c7f4) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x85e2,	// (0x0005c7f4) vkb2_area_bottom_space_btn_pane_g2

0x8618,	// (0x0005c82a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8618,	// (0x0005c82a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2b,	// (0x0006403d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2b,	// (0x0006403d) vkb2_area_bottom_space_btn_pane_g

0x7a0c,	// (0x0005bc1e) cel_fep_hwr_func_pane_ParamLimits

0x7a0c,	// (0x0005bc1e) cel_fep_hwr_func_pane

0x7a48,	// (0x0005bc5a) cell_hwr_side_button_pane_ParamLimits

0x7a48,	// (0x0005bc5a) cell_hwr_side_button_pane

0xd2d8,	// (0x000614ea) aid_area_touch_clock_ParamLimits

0xedb7,	// (0x00062fc9) bg_uniindi_top_pane_ParamLimits

0xd2ea,	// (0x000614fc) uniindi_top_pane_g1_ParamLimits

0xd300,	// (0x00061512) uniindi_top_pane_g2_ParamLimits

0xd30c,	// (0x0006151e) uniindi_top_pane_g3_ParamLimits

0xd31d,	// (0x0006152f) uniindi_top_pane_g4_ParamLimits

0xfd3e,	// (0x00063f50) uniindi_top_pane_g_ParamLimits

0xd32a,	// (0x0006153c) uniindi_top_pane_t1_ParamLimits

0xedb7,	// (0x00062fc9) bg_vkb2_func_pane_cp01_ParamLimits

0xedb7,	// (0x00062fc9) bg_vkb2_func_pane_cp01

0xde39,	// (0x0006204b) cel_fep_hwr_func_pane_g1_ParamLimits

0xde39,	// (0x0006204b) cel_fep_hwr_func_pane_g1

0xedb7,	// (0x00062fc9) bg_vkb2_func_pane_cp02_ParamLimits

0xedb7,	// (0x00062fc9) bg_vkb2_func_pane_cp02

0xde39,	// (0x0006204b) cell_hwr_side_button_pane_g1_ParamLimits

0xde39,	// (0x0006204b) cell_hwr_side_button_pane_g1

0x9070,	// (0x0005d282) status_pane_g4_ParamLimits

0x9070,	// (0x0005d282) status_pane_g4

0x908a,	// (0x0005d29c) status_pane_t1

0xb6ee,	// (0x0005f900) form2_midp_gauge_slider_cont_pane

0xb6f6,	// (0x0005f908) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb708,	// (0x0005f91a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb71a,	// (0x0005f92c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb05,	// (0x00063d17) form2_midp_gauge_slider_pane_t_ParamLimits

0xb72c,	// (0x0005f93e) form2_midp_slider_pane_ParamLimits

0x7f62,	// (0x0005c174) aid_size_cell_func_vkb2_ParamLimits

0x7f62,	// (0x0005c174) aid_size_cell_func_vkb2

0xddda,	// (0x00061fec) slider_pane_g4_ParamLimits

0xddda,	// (0x00061fec) slider_pane_g4

0x8662,	// (0x0005c874) form2_midp_gauge_slider_pane_t2_cp01

0x8670,	// (0x0005c882) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8670,	// (0x0005c882) form2_midp_gauge_slider_pane_t3_cp01

0x868d,	// (0x0005c89f) form2_midp_slider_pane_cp01

0xec1d,	// (0x00062e2f) navi_smil_pane

0xde72,	// (0x00062084) navi_smil_pane_g1

0xde7a,	// (0x0006208c) navi_smil_pane_t1

0xde47,	// (0x00062059) form2_midp_slider_pane_g1

0xde50,	// (0x00062062) form2_midp_slider_pane_g2

0xde58,	// (0x0006206a) form2_midp_slider_pane_g3

0xde47,	// (0x00062059) form2_midp_slider_pane_g4

0xde60,	// (0x00062072) form2_midp_slider_pane_g5

0x0004,

0xfe34,	// (0x00064046) form2_midp_slider_pane_g

0x8652,	// (0x0005c864) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8652,	// (0x0005c864) vkb2_area_bottom_space_btn_pane_g4

0x8e9f,	// (0x0005d0b1) lc0_navi_pane_ParamLimits

0x8e9f,	// (0x0005d0b1) lc0_navi_pane

0x8f15,	// (0x0005d127) lc0_stat_indi_pane_ParamLimits

0x8f15,	// (0x0005d127) lc0_stat_indi_pane

0x8f2c,	// (0x0005d13e) ls0_title_pane_ParamLimits

0x8f2c,	// (0x0005d13e) ls0_title_pane

0xf03f,	// (0x00063251) bg_popup_sub_pane_cp14_ParamLimits

0xd2bf,	// (0x000614d1) list_uniindi_pane_ParamLimits

0xd2cb,	// (0x000614dd) uniindi_top_pane_ParamLimits

0xd366,	// (0x00061578) list_single_uniindi_pane_g1_ParamLimits

0xd379,	// (0x0006158b) list_single_uniindi_pane_t1_ParamLimits

0x8696,	// (0x0005c8a8) lc0_stat_clock_pane_ParamLimits

0x8696,	// (0x0005c8a8) lc0_stat_clock_pane

0xde88,	// (0x0006209a) lc0_stat_indi_pane_g1_ParamLimits

0xde88,	// (0x0006209a) lc0_stat_indi_pane_g1

0xde95,	// (0x000620a7) lc0_stat_indi_pane_g2_ParamLimits

0xde95,	// (0x000620a7) lc0_stat_indi_pane_g2

0x0001,

0xfe3f,	// (0x00064051) lc0_stat_indi_pane_g_ParamLimits

0xfe3f,	// (0x00064051) lc0_stat_indi_pane_g

0x86a3,	// (0x0005c8b5) lc0_uni_indicator_pane_ParamLimits

0x86a3,	// (0x0005c8b5) lc0_uni_indicator_pane

0xdea2,	// (0x000620b4) ls0_title_pane_g1_ParamLimits

0xdea2,	// (0x000620b4) ls0_title_pane_g1

0xdeb6,	// (0x000620c8) ls0_title_pane_t1_ParamLimits

0xdeb6,	// (0x000620c8) ls0_title_pane_t1

0x86b0,	// (0x0005c8c2) lc0_uni_indicator_pane_g1_ParamLimits

0x86b0,	// (0x0005c8c2) lc0_uni_indicator_pane_g1

0xdeec,	// (0x000620fe) lc0_stat_clock_pane_t1

0x5401,	// (0x00059613) main_ai5_pane

0xdefa,	// (0x0006210c) ai5_sk_pane_ParamLimits

0xdefa,	// (0x0006210c) ai5_sk_pane

0xdf07,	// (0x00062119) cell_ai5_widget_pane_ParamLimits

0xdf07,	// (0x00062119) cell_ai5_widget_pane

0xdfc3,	// (0x000621d5) aid_size_cell_widget_grid

0xdfd1,	// (0x000621e3) bg_ai5_widget_pane_ParamLimits

0xdfd1,	// (0x000621e3) bg_ai5_widget_pane

0xe045,	// (0x00062257) cell_ai5_widget_pane_g2

0xe055,	// (0x00062267) cell_ai5_widget_pane_g3

0xe06c,	// (0x0006227e) cell_ai5_widget_pane_g4

0xe078,	// (0x0006228a) cell_ai5_widget_pane_g5

0xe084,	// (0x00062296) cell_ai5_widget_pane_g6

0xe090,	// (0x000622a2) cell_ai5_widget_pane_g7

0xe0d8,	// (0x000622ea) cell_ai5_widget_pane_t1_ParamLimits

0xe0d8,	// (0x000622ea) cell_ai5_widget_pane_t1

0xe0f5,	// (0x00062307) cell_ai5_widget_pane_t2_ParamLimits

0xe0f5,	// (0x00062307) cell_ai5_widget_pane_t2

0xe10d,	// (0x0006231f) cell_ai5_widget_pane_t3_ParamLimits

0xe10d,	// (0x0006231f) cell_ai5_widget_pane_t3

0xe125,	// (0x00062337) cell_ai5_widget_pane_t4_ParamLimits

0xe125,	// (0x00062337) cell_ai5_widget_pane_t4

0xe142,	// (0x00062354) cell_ai5_widget_pane_t5_ParamLimits

0xe142,	// (0x00062354) cell_ai5_widget_pane_t5

0xe161,	// (0x00062373) cell_ai5_widget_pane_t6_ParamLimits

0xe161,	// (0x00062373) cell_ai5_widget_pane_t6

0xe173,	// (0x00062385) cell_ai5_widget_pane_t7_ParamLimits

0xe173,	// (0x00062385) cell_ai5_widget_pane_t7

0xe18c,	// (0x0006239e) cell_ai5_widget_pane_t8_ParamLimits

0xe18c,	// (0x0006239e) cell_ai5_widget_pane_t8

0x0009,

0xfe59,	// (0x0006406b) cell_ai5_widget_pane_t_ParamLimits

0xfe59,	// (0x0006406b) cell_ai5_widget_pane_t

0xe1e0,	// (0x000623f2) grid_ai5_widget_pane

0xf03f,	// (0x00063251) highlight_cell_ai5_widget_pane_ParamLimits

0xf03f,	// (0x00063251) highlight_cell_ai5_widget_pane

0xe1ee,	// (0x00062400) ai5_sk_left_pane

0xe1f8,	// (0x0006240a) ai5_sk_middle_pane

0xe202,	// (0x00062414) ai5_sk_right_pane

0xe20c,	// (0x0006241e) bg_ai5_widget_pane_g1_ParamLimits

0xe20c,	// (0x0006241e) bg_ai5_widget_pane_g1

0xe218,	// (0x0006242a) bg_ai5_widget_pane_g2_ParamLimits

0xe218,	// (0x0006242a) bg_ai5_widget_pane_g2

0xe224,	// (0x00062436) bg_ai5_widget_pane_g3_ParamLimits

0xe224,	// (0x00062436) bg_ai5_widget_pane_g3

0xe230,	// (0x00062442) bg_ai5_widget_pane_g4_ParamLimits

0xe230,	// (0x00062442) bg_ai5_widget_pane_g4

0xe23c,	// (0x0006244e) bg_ai5_widget_pane_g5_ParamLimits

0xe23c,	// (0x0006244e) bg_ai5_widget_pane_g5

0xe248,	// (0x0006245a) bg_ai5_widget_pane_g6_ParamLimits

0xe248,	// (0x0006245a) bg_ai5_widget_pane_g6

0xe254,	// (0x00062466) bg_ai5_widget_pane_g7_ParamLimits

0xe254,	// (0x00062466) bg_ai5_widget_pane_g7

0xe260,	// (0x00062472) bg_ai5_widget_pane_g8_ParamLimits

0xe260,	// (0x00062472) bg_ai5_widget_pane_g8

0xe26c,	// (0x0006247e) bg_ai5_widget_pane_g9_ParamLimits

0xe26c,	// (0x0006247e) bg_ai5_widget_pane_g9

0x0008,

0xfe6e,	// (0x00064080) bg_ai5_widget_pane_g_ParamLimits

0xfe6e,	// (0x00064080) bg_ai5_widget_pane_g

0xe29e,	// (0x000624b0) cell_shortcut_ai5_widget_pane_ParamLimits

0xe29e,	// (0x000624b0) cell_shortcut_ai5_widget_pane

0x6b19,	// (0x0005ad2b) bg_cell_shortcut_ai5_widget_pane

0xe2af,	// (0x000624c1) cell_grid_ai5_widget_pane_g1

0x6b19,	// (0x0005ad2b) highlight_cell_shortcut_ai5_widget_pane

0x91f4,	// (0x0005d406) ai5_sk_left_pane_g1

0xe2b8,	// (0x000624ca) ai5_sk_left_pane_g2

0xe2c0,	// (0x000624d2) ai5_sk_left_pane_g3

0xe2c8,	// (0x000624da) ai5_sk_left_pane_g4

0x0003,

0xfe81,	// (0x00064093) ai5_sk_left_pane_g

0xe2d0,	// (0x000624e2) ai5_sk_left_pane_t1

0x91fc,	// (0x0005d40e) ai5_sk_right_pane_g1

0xe2de,	// (0x000624f0) ai5_sk_right_pane_g2

0xe2e6,	// (0x000624f8) ai5_sk_right_pane_g3

0xe2ee,	// (0x00062500) ai5_sk_right_pane_g4

0x0003,

0xfe8a,	// (0x0006409c) ai5_sk_right_pane_g

0xe2f6,	// (0x00062508) ai5_sk_right_pane_t1

0x91fc,	// (0x0005d40e) ai5_sk_middle_pane_g1

0x91f4,	// (0x0005d406) ai5_sk_middle_pane_g2

0x9214,	// (0x0005d426) ai5_sk_middle_pane_g3

0xe2e6,	// (0x000624f8) ai5_sk_middle_pane_g4

0xe2c0,	// (0x000624d2) ai5_sk_middle_pane_g5

0xe304,	// (0x00062516) ai5_sk_middle_pane_g6

0xe30c,	// (0x0006251e) ai5_sk_middle_pane_g7

0x0006,

0xfe93,	// (0x000640a5) ai5_sk_middle_pane_g

0x8d25,	// (0x0005cf37) aid_touch_area_size_lc0_ParamLimits

0x8d25,	// (0x0005cf37) aid_touch_area_size_lc0

0x7bdd,	// (0x0005bdef) cell_hwr_candidate_pane_t1_ParamLimits

0x8d41,	// (0x0005cf53) aid_touch_navi_pane

0x901a,	// (0x0005d22c) status_dt_navi_pane_ParamLimits

0x901a,	// (0x0005d22c) status_dt_navi_pane

0x9027,	// (0x0005d239) status_dt_sta_pane_ParamLimits

0x9027,	// (0x0005d239) status_dt_sta_pane

0xe314,	// (0x00062526) dt_sta_controll_pane

0xe321,	// (0x00062533) dt_sta_indi_pane

0xe332,	// (0x00062544) dt_sta_title_pane

0xedb7,	// (0x00062fc9) bg_dt_sta_indi_pane_ParamLimits

0xedb7,	// (0x00062fc9) bg_dt_sta_indi_pane

0xe345,	// (0x00062557) dt_sta_battery_pane

0xe34d,	// (0x0006255f) dt_sta_indi_pane_g1

0xe356,	// (0x00062568) dt_sta_indi_pane_g2

0xe35f,	// (0x00062571) dt_sta_indi_pane_g3

0x0002,

0xfea2,	// (0x000640b4) dt_sta_indi_pane_g

0xe368,	// (0x0006257a) dt_sta_signal_pane

0xf03f,	// (0x00063251) bg_dt_sta_title_pane_ParamLimits

0xf03f,	// (0x00063251) bg_dt_sta_title_pane

0xa032,	// (0x0005e244) dt_sta_title_pane_g1

0xe371,	// (0x00062583) dt_sta_title_pane_t1_ParamLimits

0xe371,	// (0x00062583) dt_sta_title_pane_t1

0xec1d,	// (0x00062e2f) bg_dt_sta_control_pane

0xe386,	// (0x00062598) dt_sta_controll_pane_g1

0xe38f,	// (0x000625a1) bg_dt_sta_title_pane_g1

0xe398,	// (0x000625aa) bg_dt_sta_title_pane_g2

0xe3a1,	// (0x000625b3) bg_dt_sta_title_pane_g3

0x0002,

0xfea9,	// (0x000640bb) bg_dt_sta_title_pane_g

0xb9b9,	// (0x0005fbcb) bg_dt_sta_indi_pane_g1

0xe3aa,	// (0x000625bc) dt_sta_signal_pane_g1

0xe3b2,	// (0x000625c4) dt_sta_signal_pane_g2

0x0001,

0xfeb0,	// (0x000640c2) dt_sta_signal_pane_g

0xe3ba,	// (0x000625cc) dt_sta_battery_pane_g1

0xe3c3,	// (0x000625d5) dt_sta_battery_pane_t1

0xb9b9,	// (0x0005fbcb) bg_dt_sta_control_pane_g1

0xf4f8,	// (0x0006370a) fep_china_uni_eep_pane

0xf500,	// (0x00063712) fep_china_uni_entry_pane_ParamLimits

0xf510,	// (0x00063722) popup_fep_china_uni_window_g1_ParamLimits

0xf520,	// (0x00063732) popup_fep_china_uni_window_g2_ParamLimits

0xf520,	// (0x00063732) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00063934) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00063934) popup_fep_china_uni_window_g

0xe3d2,	// (0x000625e4) fep_china_uni_eep_pane_g1

0xe3da,	// (0x000625ec) fep_china_uni_eep_pane_t1

0xde69,	// (0x0006207b) aid_touch_area_size_smil_player

0x8e97,	// (0x0005d0a9) lc0_clock_pane

0x907e,	// (0x0005d290) status_pane_g5_ParamLimits

0x907e,	// (0x0005d290) status_pane_g5

0x6f41,	// (0x0005b153) popup_keymap_window

0x903c,	// (0x0005d24e) status_icon_pane

0xe055,	// (0x00062267) cell_ai5_widget_pane_g3_ParamLimits

0xe06c,	// (0x0006227e) cell_ai5_widget_pane_g4_ParamLimits

0xe078,	// (0x0006228a) cell_ai5_widget_pane_g5_ParamLimits

0xe09c,	// (0x000622ae) cell_ai5_widget_pane_g8_ParamLimits

0xe09c,	// (0x000622ae) cell_ai5_widget_pane_g8

0xe0b0,	// (0x000622c2) cell_ai5_widget_pane_g9_ParamLimits

0xe0b0,	// (0x000622c2) cell_ai5_widget_pane_g9

0xe0c4,	// (0x000622d6) cell_ai5_widget_pane_g10_ParamLimits

0xe0c4,	// (0x000622d6) cell_ai5_widget_pane_g10

0xe3e9,	// (0x000625fb) status_icon_pane_g1

0xec1d,	// (0x00062e2f) bg_popup_sub_pane_cp13

0xe3f1,	// (0x00062603) popup_keymap_window_t1

0x8c6a,	// (0x0005ce7c) control_pane_g6_ParamLimits

0x8c6a,	// (0x0005ce7c) control_pane_g6

0x8c77,	// (0x0005ce89) control_pane_g7_ParamLimits

0x8c77,	// (0x0005ce89) control_pane_g7

0x8c84,	// (0x0005ce96) control_pane_g8_ParamLimits

0x8c84,	// (0x0005ce96) control_pane_g8

0xe314,	// (0x00062526) dt_sta_controll_pane_ParamLimits

0xe321,	// (0x00062533) dt_sta_indi_pane_ParamLimits

0xe332,	// (0x00062544) dt_sta_title_pane_ParamLimits

0xef8a,	// (0x0006319c) aid_size_touch_scroll_bar_cale

0x54da,	// (0x000596ec) popup_discreet_window_ParamLimits

0x54da,	// (0x000596ec) popup_discreet_window

0x5554,	// (0x00059766) popup_sk_window

0x9876,	// (0x0005da88) bg_popup_sub_pane_cp28_ParamLimits

0x9876,	// (0x0005da88) bg_popup_sub_pane_cp28

0xe3ff,	// (0x00062611) popup_discreet_window_g1_ParamLimits

0xe3ff,	// (0x00062611) popup_discreet_window_g1

0xe41f,	// (0x00062631) popup_discreet_window_t1_ParamLimits

0xe41f,	// (0x00062631) popup_discreet_window_t1

0xe43d,	// (0x0006264f) popup_discreet_window_t2_ParamLimits

0xe43d,	// (0x0006264f) popup_discreet_window_t2

0x0002,

0xfeb5,	// (0x000640c7) popup_discreet_window_t_ParamLimits

0xfeb5,	// (0x000640c7) popup_discreet_window_t

0x86c4,	// (0x0005c8d6) popup_sk_window_g1

0x86ce,	// (0x0005c8e0) popup_sk_window_g2

0x0001,

0xfebc,	// (0x000640ce) popup_sk_window_g

0x86d8,	// (0x0005c8ea) popup_sk_window_t1

0x86e6,	// (0x0005c8f8) popup_sk_window_t1_copy1

0xe045,	// (0x00062257) cell_ai5_widget_pane_g2_ParamLimits

0xe19e,	// (0x000623b0) cell_ai5_widget_pane_t9_ParamLimits

0xe19e,	// (0x000623b0) cell_ai5_widget_pane_t9

0xec1d,	// (0x00062e2f) main_fep_fshwr2_pane

0x86f4,	// (0x0005c906) aid_fshwr2_btn_pane

0x8700,	// (0x0005c912) aid_fshwr2_syb_pane

0x870c,	// (0x0005c91e) aid_fshwr2_txt_pane

0x8718,	// (0x0005c92a) fshwr2_func_candi_pane

0x872d,	// (0x0005c93f) fshwr2_hwr_syb_pane

0x873d,	// (0x0005c94f) fshwr2_icf_pane

0x5401,	// (0x00059613) fshwr2_icf_bg_pane

0x8766,	// (0x0005c978) fshwr2_icf_pane_t1_ParamLimits

0x8766,	// (0x0005c978) fshwr2_icf_pane_t1

0xf475,	// (0x00063687) fshwr2_func_candi_pane_g1

0xe48f,	// (0x000626a1) fshwr2_func_candi_row_pane_ParamLimits

0xe48f,	// (0x000626a1) fshwr2_func_candi_row_pane

0x877e,	// (0x0005c990) cell_fshwr2_syb_pane_ParamLimits

0x877e,	// (0x0005c990) cell_fshwr2_syb_pane

0x7bae,	// (0x0005bdc0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7bae,	// (0x0005bdc0) fshwr2_hwr_syb_pane_g1

0x5401,	// (0x00059613) bg_popup_call_pane_cp01

0x8794,	// (0x0005c9a6) fshwr2_func_candi_cell_pane_ParamLimits

0x8794,	// (0x0005c9a6) fshwr2_func_candi_cell_pane

0x9ed2,	// (0x0005e0e4) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9ed2,	// (0x0005e0e4) fshwr2_func_candi_cell_bg_pane

0x87dd,	// (0x0005c9ef) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x87dd,	// (0x0005c9ef) fshwr2_func_candi_cell_pane_g1

0x8805,	// (0x0005ca17) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8805,	// (0x0005ca17) fshwr2_func_candi_cell_pane_t1

0x5401,	// (0x00059613) bg_button_pane_cp08

0xe49f,	// (0x000626b1) cell_fshwr2_syb_bg_pane

0x8818,	// (0x0005ca2a) cell_fshwr2_syb_bg_pane_g1

0x8820,	// (0x0005ca32) cell_fshwr2_syb_bg_pane_t1

0xf03f,	// (0x00063251) main_tmo_pane

0xa36b,	// (0x0005e57d) uni_indicator_pane_g1_ParamLimits

0xa381,	// (0x0005e593) uni_indicator_pane_g2_ParamLimits

0xa397,	// (0x0005e5a9) uni_indicator_pane_g3_ParamLimits

0xa3ac,	// (0x0005e5be) uni_indicator_pane_g4_ParamLimits

0xa3ac,	// (0x0005e5be) uni_indicator_pane_g4

0xa3c0,	// (0x0005e5d2) uni_indicator_pane_g5_ParamLimits

0xa3c0,	// (0x0005e5d2) uni_indicator_pane_g5

0xa3c0,	// (0x0005e5d2) uni_indicator_pane_g6_ParamLimits

0xa3c0,	// (0x0005e5d2) uni_indicator_pane_g6

0xf926,	// (0x00063b38) uni_indicator_pane_g_ParamLimits

0xceb8,	// (0x000610ca) popup_tmo_note_window_ParamLimits

0xceb8,	// (0x000610ca) popup_tmo_note_window

0x7f44,	// (0x0005c156) fshwr2_bg_pane

0x87f6,	// (0x0005ca08) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x87f6,	// (0x0005ca08) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec1,	// (0x000640d3) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec1,	// (0x000640d3) fshwr2_func_candi_cell_pane_g

0x7b96,	// (0x0005bda8) bg_popup_window_pane_cp01

0x882f,	// (0x0005ca41) bg_popup_window_pane_g1_cp01

0xe4a7,	// (0x000626b9) bg_popup_window_pane_cp22_ParamLimits

0xe4a7,	// (0x000626b9) bg_popup_window_pane_cp22

0xe4b5,	// (0x000626c7) listscroll_tmo_link_pane_ParamLimits

0xe4b5,	// (0x000626c7) listscroll_tmo_link_pane

0xe4f5,	// (0x00062707) popup_tmo_note_window_g1_ParamLimits

0xe4f5,	// (0x00062707) popup_tmo_note_window_g1

0xe502,	// (0x00062714) tmo_note_info_pane_ParamLimits

0xe502,	// (0x00062714) tmo_note_info_pane

0xe51c,	// (0x0006272e) list_tmo_note_info_pane_g1_ParamLimits

0xe51c,	// (0x0006272e) list_tmo_note_info_pane_g1

0xe533,	// (0x00062745) list_tmo_note_info_pane_g2_ParamLimits

0xe533,	// (0x00062745) list_tmo_note_info_pane_g2

0x0001,

0xfec6,	// (0x000640d8) list_tmo_note_info_pane_g_ParamLimits

0xfec6,	// (0x000640d8) list_tmo_note_info_pane_g

0xe54f,	// (0x00062761) list_tmo_note_info_text_pane_ParamLimits

0xe54f,	// (0x00062761) list_tmo_note_info_text_pane

0xe5d0,	// (0x000627e2) list_tmo_link_pane

0xe5dd,	// (0x000627ef) scroll_pane_cp20

0xe5ea,	// (0x000627fc) list_single_tmo_link_pane_ParamLimits

0xe5ea,	// (0x000627fc) list_single_tmo_link_pane

0xe5fa,	// (0x0006280c) list_single_tmo_link_pane_t1

0xe608,	// (0x0006281a) list_tmo_note_info_text_pane_t1_ParamLimits

0xe608,	// (0x0006281a) list_tmo_note_info_text_pane_t1

0x6299,	// (0x0005a4ab) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6299,	// (0x0005a4ab) aid_size_touch_scroll_bar_cp01

0x61a6,	// (0x0005a3b8) aid_size_touch_slider_marker

0x553c,	// (0x0005974e) popup_settings_window_ParamLimits

0x553c,	// (0x0005974e) popup_settings_window

0x3738,	// (0x0005794a) popup_candi_list_indi_window

0x8d41,	// (0x0005cf53) aid_touch_navi_pane_ParamLimits

0x7e9f,	// (0x0005c0b1) rs_clock_indi_pane

0x7ea8,	// (0x0005c0ba) sctrl_sk_bottom_pane_ParamLimits

0x7eb9,	// (0x0005c0cb) sctrl_sk_top_pane_ParamLimits

0x7fbc,	// (0x0005c1ce) popup_fep_tooltip_window

0xdfc3,	// (0x000621d5) aid_size_cell_widget_grid_ParamLimits

0xe030,	// (0x00062242) cell_ai5_widget_pane_g1_ParamLimits

0xe030,	// (0x00062242) cell_ai5_widget_pane_g1

0xe084,	// (0x00062296) cell_ai5_widget_pane_g6_ParamLimits

0xe090,	// (0x000622a2) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe44,	// (0x00064056) cell_ai5_widget_pane_g_ParamLimits

0xfe44,	// (0x00064056) cell_ai5_widget_pane_g

0xe1c2,	// (0x000623d4) cell_ai5_widget_pane_t10_ParamLimits

0xe1c2,	// (0x000623d4) cell_ai5_widget_pane_t10

0xe1e0,	// (0x000623f2) grid_ai5_widget_pane_ParamLimits

0xe278,	// (0x0006248a) cell_contacts_ai5_widget_pane_ParamLimits

0xe278,	// (0x0006248a) cell_contacts_ai5_widget_pane

0xe452,	// (0x00062664) popup_discreet_window_t3_ParamLimits

0xe452,	// (0x00062664) popup_discreet_window_t3

0x8752,	// (0x0005c964) popup_fshwr2_char_preview_window_ParamLimits

0x8752,	// (0x0005c964) popup_fshwr2_char_preview_window

0xe56d,	// (0x0006277f) tmo_note_info_pane_t1

0xe582,	// (0x00062794) tmo_note_info_pane_t2

0xe597,	// (0x000627a9) tmo_note_info_pane_t3

0xe5ac,	// (0x000627be) tmo_note_info_pane_t4

0xe5be,	// (0x000627d0) tmo_note_info_pane_t5

0x0004,

0xfecb,	// (0x000640dd) tmo_note_info_pane_t

0xe5d0,	// (0x000627e2) list_tmo_link_pane_ParamLimits

0xe5dd,	// (0x000627ef) scroll_pane_cp20_ParamLimits

0x5401,	// (0x00059613) bg_popup_fep_char_preview_window_cp01

0xe621,	// (0x00062833) popup_fshwr2_char_preview_window_t1

0xe62f,	// (0x00062841) popup_candi_list_indi_window_g1

0xe638,	// (0x0006284a) bg_cell_contacts_ai5_widget_pane

0xe644,	// (0x00062856) cell_contacts_ai5_widget_pane_g1

0xc07e,	// (0x00060290) cell_contacts_ai5_widget_pane_g2

0xe659,	// (0x0006286b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed6,	// (0x000640e8) cell_contacts_ai5_widget_pane_g

0xe665,	// (0x00062877) cell_contacts_ai5_widget_pane_t1

0xf03f,	// (0x00063251) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe6dc,	// (0x000628ee) settings_container_pane

0x6b19,	// (0x0005ad2b) listscroll_set_pane_copy1

0xb0a5,	// (0x0005f2b7) scroll_pane_cp121_copy1

0xe6e8,	// (0x000628fa) set_content_pane_copy1

0xe6f0,	// (0x00062902) aid_height_set_list_copy1_ParamLimits

0xe6f0,	// (0x00062902) aid_height_set_list_copy1

0xa5b8,	// (0x0005e7ca) aid_size_parent_copy1_ParamLimits

0xa5b8,	// (0x0005e7ca) aid_size_parent_copy1

0xe6fc,	// (0x0006290e) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe6fc,	// (0x0006290e) button_value_adjust_pane_cp6_copy1

0x8cdf,	// (0x0005cef1) list_highlight_pane_cp2_copy1_ParamLimits

0x8cdf,	// (0x0005cef1) list_highlight_pane_cp2_copy1

0xe710,	// (0x00062922) list_set_pane_copy1_ParamLimits

0xe710,	// (0x00062922) list_set_pane_copy1

0xe677,	// (0x00062889) main_pane_set_t1_copy1_ParamLimits

0xe677,	// (0x00062889) main_pane_set_t1_copy1

0xe6b1,	// (0x000628c3) main_pane_set_t2_copy1_ParamLimits

0xe6b1,	// (0x000628c3) main_pane_set_t2_copy1

0xe7bd,	// (0x000629cf) main_pane_set_t3_copy1

0xe7cb,	// (0x000629dd) main_pane_set_t4_copy1

0xe6d0,	// (0x000628e2) set_content_pane_g1_copy1_ParamLimits

0xe6d0,	// (0x000628e2) set_content_pane_g1_copy1

0xe7d9,	// (0x000629eb) setting_code_pane_copy1

0xe7e1,	// (0x000629f3) setting_slider_graphic_pane_copy1

0xe7e1,	// (0x000629f3) setting_slider_pane_copy1

0xe7e1,	// (0x000629f3) setting_text_pane_copy1

0xe7e1,	// (0x000629f3) setting_volume_pane_copy1

0xe7d9,	// (0x000629eb) settings_code_pane_cp2_copy1

0xe7e9,	// (0x000629fb) settings_code_pane_cp_copy1_ParamLimits

0xe7e9,	// (0x000629fb) settings_code_pane_cp_copy1

0x8838,	// (0x0005ca4a) volume_set_pane_copy1

0xe7fd,	// (0x00062a0f) volume_set_pane_g10_copy1

0xe805,	// (0x00062a17) volume_set_pane_g1_copy1

0xe80d,	// (0x00062a1f) volume_set_pane_g2_copy1

0xe815,	// (0x00062a27) volume_set_pane_g3_copy1

0xe81d,	// (0x00062a2f) volume_set_pane_g4_copy1

0xe825,	// (0x00062a37) volume_set_pane_g5_copy1

0xe82d,	// (0x00062a3f) volume_set_pane_g6_copy1

0xe835,	// (0x00062a47) volume_set_pane_g7_copy1

0xe83d,	// (0x00062a4f) volume_set_pane_g8_copy1

0xe845,	// (0x00062a57) volume_set_pane_g9_copy1

0xec7f,	// (0x00062e91) bg_set_opt_pane_cp_copy1_ParamLimits

0xec7f,	// (0x00062e91) bg_set_opt_pane_cp_copy1

0x8840,	// (0x0005ca52) setting_slider_pane_t1_copy1_ParamLimits

0x8840,	// (0x0005ca52) setting_slider_pane_t1_copy1

0x885e,	// (0x0005ca70) setting_slider_pane_t2_copy1_ParamLimits

0x885e,	// (0x0005ca70) setting_slider_pane_t2_copy1

0x8878,	// (0x0005ca8a) setting_slider_pane_t3_copy1_ParamLimits

0x8878,	// (0x0005ca8a) setting_slider_pane_t3_copy1

0x8890,	// (0x0005caa2) slider_set_pane_copy1_ParamLimits

0x8890,	// (0x0005caa2) slider_set_pane_copy1

0xf09a,	// (0x000632ac) set_opt_bg_pane_g1_copy2

0xf0a2,	// (0x000632b4) set_opt_bg_pane_g2_copy2

0xe84d,	// (0x00062a5f) set_opt_bg_pane_g3_copy2

0xf0b2,	// (0x000632c4) set_opt_bg_pane_g4_copy2

0xf0ba,	// (0x000632cc) set_opt_bg_pane_g5_copy2

0xf0c2,	// (0x000632d4) set_opt_bg_pane_g6_copy2

0xe857,	// (0x00062a69) set_opt_bg_pane_g7_copy2

0xe85f,	// (0x00062a71) set_opt_bg_pane_g8_copy2

0xe869,	// (0x00062a7b) set_opt_bg_pane_g9_copy2

0x88a6,	// (0x0005cab8) aid_size_touch_slider_mark_copy1_ParamLimits

0x88a6,	// (0x0005cab8) aid_size_touch_slider_mark_copy1

0xe873,	// (0x00062a85) slider_set_pane_g1_copy1

0x88ba,	// (0x0005cacc) slider_set_pane_g2_copy1

0x76d5,	// (0x0005b8e7) slider_set_pane_g3_copy1_ParamLimits

0x76d5,	// (0x0005b8e7) slider_set_pane_g3_copy1

0x76e9,	// (0x0005b8fb) slider_set_pane_g4_copy1_ParamLimits

0x76e9,	// (0x0005b8fb) slider_set_pane_g4_copy1

0x7701,	// (0x0005b913) slider_set_pane_g5_copy1_ParamLimits

0x7701,	// (0x0005b913) slider_set_pane_g5_copy1

0x76d5,	// (0x0005b8e7) slider_set_pane_g6_copy1_ParamLimits

0x76d5,	// (0x0005b8e7) slider_set_pane_g6_copy1

0x88c2,	// (0x0005cad4) slider_set_pane_g7_copy1_ParamLimits

0x88c2,	// (0x0005cad4) slider_set_pane_g7_copy1

0xec31,	// (0x00062e43) bg_set_opt_pane_cp2_copy1

0xe87c,	// (0x00062a8e) setting_slider_graphic_pane_g1_copy1

0xe885,	// (0x00062a97) setting_slider_graphic_pane_t1_copy1

0xe895,	// (0x00062aa7) setting_slider_graphic_pane_t2_copy1

0xe8a5,	// (0x00062ab7) slider_set_pane_cp_copy1

0xe8b5,	// (0x00062ac7) input_focus_pane_cp1_copy1

0xe8be,	// (0x00062ad0) list_set_text_pane_copy1

0xe8c6,	// (0x00062ad8) setting_text_pane_g1_copy1

0x461c,	// (0x0005882e) set_text_pane_t1_copy1

0xe8b5,	// (0x00062ac7) input_focus_pane_cp2_copy1

0xe8c6,	// (0x00062ad8) setting_code_pane_g1_copy1

0xe8cf,	// (0x00062ae1) setting_code_pane_t1_copy1

0xaedd,	// (0x0005f0ef) list_set_graphic_pane_copy1

0xec31,	// (0x00062e43) bg_set_opt_pane_cp4_copy1

0x352b,	// (0x0005773d) list_set_graphic_pane_g1_copy1_ParamLimits

0x352b,	// (0x0005773d) list_set_graphic_pane_g1_copy1

0xe8dd,	// (0x00062aef) list_set_graphic_pane_g2_copy1

0x3543,	// (0x00057755) list_set_graphic_pane_t1_copy1_ParamLimits

0x3543,	// (0x00057755) list_set_graphic_pane_t1_copy1

0xb9b9,	// (0x0005fbcb) rs_clock_indi_pane_g1

0xe8e5,	// (0x00062af7) rs_clock_indi_pane_t1

0xe8f3,	// (0x00062b05) rs_indi_pane

0xe8fb,	// (0x00062b0d) rs_indi_pane_g1

0xe904,	// (0x00062b16) rs_indi_pane_g2

0xe62f,	// (0x00062841) rs_indi_pane_g3

0x0002,

0xfedd,	// (0x000640ef) rs_indi_pane_g

0x6b19,	// (0x0005ad2b) bg_popup_preview_window_pane_cp03

0xe90d,	// (0x00062b1f) popup_fep_tooltip_window_t1

0xc648,	// (0x0006085a) popup_note2_window_g2_ParamLimits

0xc648,	// (0x0006085a) popup_note2_window_g2

0x0001,

0xfc7d,	// (0x00063e8f) popup_note2_window_g_ParamLimits

0xfc7d,	// (0x00063e8f) popup_note2_window_g

0xcb35,	// (0x00060d47) bg_popup_sub_pane_cp11_ParamLimits

0xcb42,	// (0x00060d54) cell_ai3_links_pane_g1_ParamLimits

0xcb59,	// (0x00060d6b) cell_ai3_links_pane_t1

0x461c,	// (0x0005882e) set_text_pane_t1_copy1_ParamLimits

0x36e4,	// (0x000578f6) cell_graphic_popup_pane_cp2_ParamLimits

0x36e4,	// (0x000578f6) cell_graphic_popup_pane_cp2

0xe91b,	// (0x00062b2d) cell_graphic_popup_pane_g1_cp2

0xef0d,	// (0x0006311f) cell_graphic_popup_pane_g2_cp2

0xe923,	// (0x00062b35) cell_graphic_popup_pane_g3_cp2

0xe92b,	// (0x00062b3d) cell_graphic_popup_pane_t2_cp2

0xef1e,	// (0x00063130) grid_highlight_pane_cp3_cp2

0xf2f2,	// (0x00063504) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf03f,	// (0x00063251) main_tmo_pane_ParamLimits

0xceac,	// (0x000610be) popup_tmo_big_image_note_window

0xe01f,	// (0x00062231) cell_ai5_widget_list_pane

0xe027,	// (0x00062239) cell_ai5_widget_lrg_icon_pane

0xe56d,	// (0x0006277f) tmo_note_info_pane_t1_ParamLimits

0xe582,	// (0x00062794) tmo_note_info_pane_t2_ParamLimits

0xe597,	// (0x000627a9) tmo_note_info_pane_t3_ParamLimits

0xe5ac,	// (0x000627be) tmo_note_info_pane_t4_ParamLimits

0xe5be,	// (0x000627d0) tmo_note_info_pane_t5_ParamLimits

0xfecb,	// (0x000640dd) tmo_note_info_pane_t_ParamLimits

0xe6dc,	// (0x000628ee) settings_container_pane_ParamLimits

0xe8ad,	// (0x00062abf) indicator_popup_pane_cp5

0xe8ad,	// (0x00062abf) indicator_popup_pane_cp6

0xaedd,	// (0x0005f0ef) list_set_graphic_pane_copy1_ParamLimits

0xec1d,	// (0x00062e2f) bg_popup_window_pane_cp23

0xe939,	// (0x00062b4b) popup_tmo_big_image_note_window_g1

0xe942,	// (0x00062b54) popup_tmo_big_image_note_window_t1

0xe952,	// (0x00062b64) popup_tmo_big_image_note_window_t2

0xe962,	// (0x00062b74) popup_tmo_big_image_note_window_t3

0x0002,

0xfee4,	// (0x000640f6) popup_tmo_big_image_note_window_t

0xb9b9,	// (0x0005fbcb) cell_ai5_widget_lrg_icon_pane_g1

0xe972,	// (0x00062b84) cell_ai5_widget_lrg_icon_pane_t1

0xe980,	// (0x00062b92) cell_ai5_widget_list_row_pane_ParamLimits

0xe980,	// (0x00062b92) cell_ai5_widget_list_row_pane

0xe997,	// (0x00062ba9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe997,	// (0x00062ba9) cell_ai5_widget_list_row_pane_g1

0xe9a4,	// (0x00062bb6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe9a4,	// (0x00062bb6) cell_ai5_widget_list_row_pane_t1

0xe9cf,	// (0x00062be1) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe9cf,	// (0x00062be1) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeeb,	// (0x000640fd) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeeb,	// (0x000640fd) cell_ai5_widget_list_row_pane_t

0x5401,	// (0x00059613) main_fep_vtchi_ss_pane

0xea13,	// (0x00062c25) popup_fep_char_pre_window

0xea1b,	// (0x00062c2d) popup_fep_ituss_window

0xea3c,	// (0x00062c4e) popup_fep_vkbss_window

0xea5b,	// (0x00062c6d) grid_vkbss_keypad_pane_ParamLimits

0xea5b,	// (0x00062c6d) grid_vkbss_keypad_pane

0xea6b,	// (0x00062c7d) ituss_keypad_pane

0x88e4,	// (0x0005caf6) aid_vkbss_key_offset_ParamLimits

0x88e4,	// (0x0005caf6) aid_vkbss_key_offset

0x88f0,	// (0x0005cb02) cell_vkbss_key_pane_ParamLimits

0x88f0,	// (0x0005cb02) cell_vkbss_key_pane

0x9058,	// (0x0005d26a) bg_cell_vkbss_key_g1_ParamLimits

0x9058,	// (0x0005d26a) bg_cell_vkbss_key_g1

0xea7a,	// (0x00062c8c) cell_vkbss_key_3p_pane_ParamLimits

0xea7a,	// (0x00062c8c) cell_vkbss_key_3p_pane

0xea94,	// (0x00062ca6) cell_vkbss_key_g1_ParamLimits

0xea94,	// (0x00062ca6) cell_vkbss_key_g1

0xeaae,	// (0x00062cc0) cell_vkbss_key_t1_ParamLimits

0xeaae,	// (0x00062cc0) cell_vkbss_key_t1

0x8906,	// (0x0005cb18) cell_ituss_key_pane_ParamLimits

0x8906,	// (0x0005cb18) cell_ituss_key_pane

0xead9,	// (0x00062ceb) bg_cell_ituss_key_g1_ParamLimits

0xead9,	// (0x00062ceb) bg_cell_ituss_key_g1

0xeae5,	// (0x00062cf7) cell_ituss_key_pane_g1_ParamLimits

0xeae5,	// (0x00062cf7) cell_ituss_key_pane_g1

0x8917,	// (0x0005cb29) cell_ituss_key_pane_g2_ParamLimits

0x8917,	// (0x0005cb29) cell_ituss_key_pane_g2

0x0002,

0xfef2,	// (0x00064104) cell_ituss_key_pane_g_ParamLimits

0xfef2,	// (0x00064104) cell_ituss_key_pane_g

0x8943,	// (0x0005cb55) cell_ituss_key_t1_ParamLimits

0x8943,	// (0x0005cb55) cell_ituss_key_t1

0x897d,	// (0x0005cb8f) cell_ituss_key_t2_ParamLimits

0x897d,	// (0x0005cb8f) cell_ituss_key_t2

0x89ae,	// (0x0005cbc0) cell_ituss_key_t3_ParamLimits

0x89ae,	// (0x0005cbc0) cell_ituss_key_t3

0x897d,	// (0x0005cb8f) cell_ituss_key_t4_ParamLimits

0x897d,	// (0x0005cb8f) cell_ituss_key_t4

0x0004,

0xfef9,	// (0x0006410b) cell_ituss_key_t_ParamLimits

0xfef9,	// (0x0006410b) cell_ituss_key_t

0xeb11,	// (0x00062d23) cell_vkbss_key_3p_pane_g1

0xeb19,	// (0x00062d2b) cell_vkbss_key_3p_pane_g2

0xeb21,	// (0x00062d33) cell_vkbss_key_3p_pane_g3

0x0002,

0xff04,	// (0x00064116) cell_vkbss_key_3p_pane_g

0x5401,	// (0x00059613) bg_popup_fep_char_preview_window_cp02

0x89f1,	// (0x0005cc03) popup_fep_char_pre_window_t1

0xdfb9,	// (0x000621cb) main_ai5_sk_pane

0xe638,	// (0x0006284a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe644,	// (0x00062856) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc07e,	// (0x00060290) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe659,	// (0x0006286b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed6,	// (0x000640e8) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe665,	// (0x00062877) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf03f,	// (0x00063251) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeb29,	// (0x00062d3b) main_ai5_sk_pane_g1

0x96b7,	// (0x0005d8c9) popup_query_code_window_g1

0xea31,	// (0x00062c43) popup_fep_vkb_icf_pane

0xea45,	// (0x00062c57) popup_fep_vtchi_icf_pane

0xeb32,	// (0x00062d44) bg_icf_pane

0xeb3e,	// (0x00062d50) list_vkb_icf_pane

0xeb4d,	// (0x00062d5f) bg_icf_pane_cp01

0xeb60,	// (0x00062d72) vtchi_icf_list_pane

0xeb70,	// (0x00062d82) list_vkb_icf_pane_t1_ParamLimits

0xeb70,	// (0x00062d82) list_vkb_icf_pane_t1

0xeb86,	// (0x00062d98) vtchi_icf_list_pane_t1_ParamLimits

0xeb86,	// (0x00062d98) vtchi_icf_list_pane_t1

0xea1b,	// (0x00062c2d) popup_fep_ituss_window_ParamLimits

0xea45,	// (0x00062c57) popup_fep_vtchi_icf_pane_ParamLimits

0xea6b,	// (0x00062c7d) ituss_keypad_pane_ParamLimits

0x88d8,	// (0x0005caea) ituss_sks_pane

0xeb32,	// (0x00062d44) bg_icf_pane_ParamLimits

0xe9f7,	// (0x00062c09) icf_edit_indi_pane_ParamLimits

0xe9f7,	// (0x00062c09) icf_edit_indi_pane

0xeb3e,	// (0x00062d50) list_vkb_icf_pane_ParamLimits

0xeb4d,	// (0x00062d5f) bg_icf_pane_cp01_ParamLimits

0xea06,	// (0x00062c18) icf_edit_indi_pane_cp01_ParamLimits

0xea06,	// (0x00062c18) icf_edit_indi_pane_cp01

0xeb68,	// (0x00062d7a) vtchi_query_pane

0xbc29,	// (0x0005fe3b) icf_edit_indi_pane_g1_ParamLimits

0xbc29,	// (0x0005fe3b) icf_edit_indi_pane_g1

0xebf8,	// (0x00062e0a) icf_edit_indi_pane_g2_ParamLimits

0xebf8,	// (0x00062e0a) icf_edit_indi_pane_g2

0x0001,

0xff1c,	// (0x0006412e) icf_edit_indi_pane_g_ParamLimits

0xff1c,	// (0x0006412e) icf_edit_indi_pane_g

0xec07,	// (0x00062e19) icf_edit_indi_pane_t1

0xeba1,	// (0x00062db3) bg_input_focus_pane_cp042

0xef81,	// (0x00063193) vtchi_button_pane

0xebaa,	// (0x00062dbc) vtchi_query_pane_t1

0xebb8,	// (0x00062dca) vtchi_query_pane_t2

0xebc6,	// (0x00062dd8) vtchi_query_pane_t3

0x0002,

0xff0b,	// (0x0006411d) vtchi_query_pane_t

0x5401,	// (0x00059613) bg_button_pane_cp13

0xebd4,	// (0x00062de6) vtchi_button_pane_g1

0x8a00,	// (0x0005cc12) ituss_sks_pane_g1

0x8a0b,	// (0x0005cc1d) ituss_sks_pane_g2

0x0001,

0xff12,	// (0x00064124) ituss_sks_pane_g

0xebdc,	// (0x00062dee) ituss_sks_pane_t1

0xebea,	// (0x00062dfc) ituss_sks_pane_t2

0x0001,

0xff17,	// (0x00064129) ituss_sks_pane_t

0xb41f,	// (0x0005f631) indicator_nsta_pane_cp_g1

0xb428,	// (0x0005f63a) indicator_nsta_pane_cp_g2

0xb430,	// (0x0005f642) indicator_nsta_pane_cp_g3

0xb438,	// (0x0005f64a) indicator_nsta_pane_cp_g4

0xb440,	// (0x0005f652) indicator_nsta_pane_cp_g5

0xb440,	// (0x0005f652) indicator_nsta_pane_cp_g6

0x0005,

0xfabb,	// (0x00063ccd) indicator_nsta_pane_cp_g

0xdb90,	// (0x00061da2) cell_graphic2_pane_t2_ParamLimits

0xdb90,	// (0x00061da2) cell_graphic2_pane_t2

0x0001,

0xfdcd,	// (0x00063fdf) cell_graphic2_pane_t_ParamLimits

0xfdcd,	// (0x00063fdf) cell_graphic2_pane_t

0xdbbd,	// (0x00061dcf) cell_graphic2_control_pane_t1

0x6741,	// (0x0005a953) signal_pane_g3_ParamLimits

0x6741,	// (0x0005a953) signal_pane_g3

0x6753,	// (0x0005a965) signal_pane_g4_ParamLimits

0x6753,	// (0x0005a965) signal_pane_g4

0xe9e1,	// (0x00062bf3) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe9e1,	// (0x00062bf3) cell_ai5_widget_list_row_pane_t3

0xeaff,	// (0x00062d11) cell_ituss_key_pane_t1_ParamLimits

0xeaff,	// (0x00062d11) cell_ituss_key_pane_t1

0x9306,	// (0x0005d518) form_field_data_wide_pane_vc_t2_ParamLimits

0x9306,	// (0x0005d518) form_field_data_wide_pane_vc_t2

0x931a,	// (0x0005d52c) form_field_data_wide_pane_vc_t3_ParamLimits

0x931a,	// (0x0005d52c) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x00063a20) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x00063a20) form_field_data_wide_pane_vc_t

0xb0e7,	// (0x0005f2f9) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb0e7,	// (0x0005f2f9) form_field_slider_wide_pane_vc_t3

0xb1c5,	// (0x0005f3d7) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb1c5,	// (0x0005f3d7) form_field_popup_wide_pane_vc_t2

0xb1dc,	// (0x0005f3ee) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb1dc,	// (0x0005f3ee) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaaa,	// (0x00063cbc) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaaa,	// (0x00063cbc) form_field_popup_wide_pane_vc_t

0x86f4,	// (0x0005c906) aid_fshwr2_btn_pane_ParamLimits

0x8700,	// (0x0005c912) aid_fshwr2_syb_pane_ParamLimits

0x870c,	// (0x0005c91e) aid_fshwr2_txt_pane_ParamLimits

0x7f44,	// (0x0005c156) fshwr2_bg_pane_ParamLimits

0x8718,	// (0x0005c92a) fshwr2_func_candi_pane_ParamLimits

0x872d,	// (0x0005c93f) fshwr2_hwr_syb_pane_ParamLimits

0x873d,	// (0x0005c94f) fshwr2_icf_pane_ParamLimits

0xaa9c,	// (0x0005ecae) list_double_graphic_pane_vc_g4_ParamLimits

0xaa9c,	// (0x0005ecae) list_double_graphic_pane_vc_g4

0x8937,	// (0x0005cb49) cell_ituss_key_pane_g3_ParamLimits

0x8937,	// (0x0005cb49) cell_ituss_key_pane_g3

0x89df,	// (0x0005cbf1) cell_ituss_key_t5_ParamLimits

0x89df,	// (0x0005cbf1) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
