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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00053c3b };

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
0x524b,	// (0x00058e86) Screen

0x5257,	// (0x00058e92) application_window_ParamLimits

0x5257,	// (0x00058e92) application_window

0xeb85,	// (0x000627c0) screen_g1

0x52b3,	// (0x00058eee) area_bottom_pane_ParamLimits

0x52b3,	// (0x00058eee) area_bottom_pane

0x5373,	// (0x00058fae) area_top_pane_ParamLimits

0x5373,	// (0x00058fae) area_top_pane

0x5411,	// (0x0005904c) main_pane_ParamLimits

0x5411,	// (0x0005904c) main_pane

0xeb8f,	// (0x000627ca) misc_graphics

0x8ea9,	// (0x0005cae4) battery_pane_ParamLimits

0x8ea9,	// (0x0005cae4) battery_pane

0x9b83,	// (0x0005d7be) bg_status_flat_pane_g8

0x9b8b,	// (0x0005d7c6) bg_status_flat_pane_g9

0x8f71,	// (0x0005cbac) context_pane_ParamLimits

0x8f71,	// (0x0005cbac) context_pane

0x9087,	// (0x0005ccc2) navi_pane_ParamLimits

0x9087,	// (0x0005ccc2) navi_pane

0x910b,	// (0x0005cd46) signal_pane_ParamLimits

0x910b,	// (0x0005cd46) signal_pane

0x0008,

0xf874,	// (0x000634af) bg_status_flat_pane_g

0x9178,	// (0x0005cdb3) status_pane_g1_ParamLimits

0x9178,	// (0x0005cdb3) status_pane_g1

0x918c,	// (0x0005cdc7) status_pane_g2_ParamLimits

0x918c,	// (0x0005cdc7) status_pane_g2

0x9198,	// (0x0005cdd3) status_pane_g3_ParamLimits

0x9198,	// (0x0005cdd3) status_pane_g3

0x0004,

0xf79b,	// (0x000633d6) status_pane_g_ParamLimits

0xf79b,	// (0x000633d6) status_pane_g

0x91cc,	// (0x0005ce07) title_pane_ParamLimits

0x91cc,	// (0x0005ce07) title_pane

0x9209,	// (0x0005ce44) uni_indicator_pane_ParamLimits

0x9209,	// (0x0005ce44) uni_indicator_pane

0x8dc8,	// (0x0005ca03) bg_list_pane_ParamLimits

0x8dc8,	// (0x0005ca03) bg_list_pane

0x6d94,	// (0x0005a9cf) find_pane

0x8de8,	// (0x0005ca23) listscroll_app_pane_ParamLimits

0x8de8,	// (0x0005ca23) listscroll_app_pane

0x8df9,	// (0x0005ca34) listscroll_form_pane

0x6d9c,	// (0x0005a9d7) listscroll_gen_pane_ParamLimits

0x6d9c,	// (0x0005a9d7) listscroll_gen_pane

0x6db0,	// (0x0005a9eb) listscroll_set_pane

0x62d6,	// (0x00059f11) main_idle_act_pane

0x8ac8,	// (0x0005c703) main_idle_trad_pane

0x8ac8,	// (0x0005c703) main_list_empty_pane

0x8e13,	// (0x0005ca4e) main_midp_pane

0x8e1f,	// (0x0005ca5a) main_pane_g1_ParamLimits

0x8e1f,	// (0x0005ca5a) main_pane_g1

0x6dc6,	// (0x0005aa01) popup_ai_message_window_ParamLimits

0x6dc6,	// (0x0005aa01) popup_ai_message_window

0x6e6a,	// (0x0005aaa5) popup_fep_china_uni_window_ParamLimits

0x6e6a,	// (0x0005aaa5) popup_fep_china_uni_window

0x6ec4,	// (0x0005aaff) popup_fep_japan_candidate_window_ParamLimits

0x6ec4,	// (0x0005aaff) popup_fep_japan_candidate_window

0x6ee2,	// (0x0005ab1d) popup_fep_japan_predictive_window_ParamLimits

0x6ee2,	// (0x0005ab1d) popup_fep_japan_predictive_window

0x6f12,	// (0x0005ab4d) popup_find_window

0x6f1f,	// (0x0005ab5a) popup_grid_graphic_window_ParamLimits

0x6f1f,	// (0x0005ab5a) popup_grid_graphic_window

0x6f49,	// (0x0005ab84) popup_large_graphic_colour_window

0x6f6f,	// (0x0005abaa) popup_menu_window_ParamLimits

0x6f6f,	// (0x0005abaa) popup_menu_window

0x712b,	// (0x0005ad66) popup_note_image_window

0x7117,	// (0x0005ad52) popup_note_wait_window_ParamLimits

0x7117,	// (0x0005ad52) popup_note_wait_window

0x7117,	// (0x0005ad52) popup_note_window_ParamLimits

0x7117,	// (0x0005ad52) popup_note_window

0x7181,	// (0x0005adbc) popup_query_code_window_ParamLimits

0x7181,	// (0x0005adbc) popup_query_code_window

0x7195,	// (0x0005add0) popup_query_data_code_window_ParamLimits

0x7195,	// (0x0005add0) popup_query_data_code_window

0x71b2,	// (0x0005aded) popup_query_data_window_ParamLimits

0x71b2,	// (0x0005aded) popup_query_data_window

0x71ce,	// (0x0005ae09) popup_query_sat_info_window_ParamLimits

0x71ce,	// (0x0005ae09) popup_query_sat_info_window

0x7207,	// (0x0005ae42) popup_snote_single_graphic_window_ParamLimits

0x7207,	// (0x0005ae42) popup_snote_single_graphic_window

0x7207,	// (0x0005ae42) popup_snote_single_text_window_ParamLimits

0x7207,	// (0x0005ae42) popup_snote_single_text_window

0x721c,	// (0x0005ae57) popup_sub_window_general

0x734c,	// (0x0005af87) popup_window_general_ParamLimits

0x734c,	// (0x0005af87) popup_window_general

0x8e2d,	// (0x0005ca68) power_save_pane

0x6c26,	// (0x0005a861) control_pane_g1_ParamLimits

0x6c26,	// (0x0005a861) control_pane_g1

0x6c4d,	// (0x0005a888) control_pane_g2_ParamLimits

0x6c4d,	// (0x0005a888) control_pane_g2

0x8d8b,	// (0x0005c9c6) control_pane_g3_ParamLimits

0x8d8b,	// (0x0005c9c6) control_pane_g3

0x0007,

0xf783,	// (0x000633be) control_pane_g_ParamLimits

0xf783,	// (0x000633be) control_pane_g

0x6c97,	// (0x0005a8d2) control_pane_t1_ParamLimits

0x6c97,	// (0x0005a8d2) control_pane_t1

0x6ceb,	// (0x0005a926) control_pane_t2_ParamLimits

0x6ceb,	// (0x0005a926) control_pane_t2

0x0002,

0xf794,	// (0x000633cf) control_pane_t_ParamLimits

0xf794,	// (0x000633cf) control_pane_t

0x8cb0,	// (0x0005c8eb) navi_navi_volume_pane_cp1

0x8cb8,	// (0x0005c8f3) status_small_icon_pane

0x8cc0,	// (0x0005c8fb) status_small_pane_g1_ParamLimits

0x8cc0,	// (0x0005c8fb) status_small_pane_g1

0x8cf4,	// (0x0005c92f) status_small_pane_g2_ParamLimits

0x8cf4,	// (0x0005c92f) status_small_pane_g2

0x8d00,	// (0x0005c93b) status_small_pane_g3_ParamLimits

0x8d00,	// (0x0005c93b) status_small_pane_g3

0x8d0c,	// (0x0005c947) status_small_pane_g4_ParamLimits

0x8d0c,	// (0x0005c947) status_small_pane_g4

0x8d18,	// (0x0005c953) status_small_pane_g5_ParamLimits

0x8d18,	// (0x0005c953) status_small_pane_g5

0x8d26,	// (0x0005c961) status_small_pane_g6_ParamLimits

0x8d26,	// (0x0005c961) status_small_pane_g6

0x0007,

0xf772,	// (0x000633ad) status_small_pane_g_ParamLimits

0xf772,	// (0x000633ad) status_small_pane_g

0x8d55,	// (0x0005c990) status_small_pane_t1

0x8d77,	// (0x0005c9b2) status_small_wait_pane_ParamLimits

0x8d77,	// (0x0005c9b2) status_small_wait_pane

0x66ab,	// (0x0005a2e6) aid_levels_signal_ParamLimits

0x66ab,	// (0x0005a2e6) aid_levels_signal

0x66bd,	// (0x0005a2f8) signal_pane_g1_ParamLimits

0x66bd,	// (0x0005a2f8) signal_pane_g1

0x66d2,	// (0x0005a30d) signal_pane_g2_ParamLimits

0x66d2,	// (0x0005a30d) signal_pane_g2

0x0003,

0xf703,	// (0x0006333e) signal_pane_g_ParamLimits

0xf703,	// (0x0006333e) signal_pane_g

0x133d,	// (0x00054f78) context_pane_g1

0x5652,	// (0x0005928d) title_pane_g1

0x567c,	// (0x000592b7) title_pane_t1

0xeba5,	// (0x000627e0) title_pane_t2

0xebcb,	// (0x00062806) title_pane_t3

0x0002,

0xf557,	// (0x00063192) title_pane_t

0x9221,	// (0x0005ce5c) aid_levels_battery_ParamLimits

0x9221,	// (0x0005ce5c) aid_levels_battery

0x9235,	// (0x0005ce70) battery_pane_g1_ParamLimits

0x9235,	// (0x0005ce70) battery_pane_g1

0x924b,	// (0x0005ce86) battery_pane_g2_ParamLimits

0x924b,	// (0x0005ce86) battery_pane_g2

0x0001,

0xf7a6,	// (0x000633e1) battery_pane_g_ParamLimits

0xf7a6,	// (0x000633e1) battery_pane_g

0xa4a7,	// (0x0005e0e2) uni_indicator_pane_g1

0xa4ba,	// (0x0005e0f5) uni_indicator_pane_g2

0xa4cc,	// (0x0005e107) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x00063557) uni_indicator_pane_g

0x6aaa,	// (0x0005a6e5) navi_icon_pane_ParamLimits

0x6aaa,	// (0x0005a6e5) navi_icon_pane

0x36ae,	// (0x000572e9) navi_midp_pane

0x6ac6,	// (0x0005a701) navi_navi_pane

0x6ad0,	// (0x0005a70b) navi_text_pane_ParamLimits

0x6ad0,	// (0x0005a70b) navi_text_pane

0xeb85,	// (0x000627c0) status_small_wait_pane_g1

0xee1c,	// (0x00062a57) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x00063552) status_small_wait_pane_g

0xa1ce,	// (0x0005de09) navi_navi_icon_text_pane

0xa1d6,	// (0x0005de11) navi_navi_pane_g1_ParamLimits

0xa1d6,	// (0x0005de11) navi_navi_pane_g1

0xa1e8,	// (0x0005de23) navi_navi_pane_g2_ParamLimits

0xa1e8,	// (0x0005de23) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x00063520) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x00063520) navi_navi_pane_g

0xa1fa,	// (0x0005de35) navi_navi_tabs_pane

0xa203,	// (0x0005de3e) navi_navi_text_pane

0xa1ce,	// (0x0005de09) navi_navi_volume_pane

0xa1aa,	// (0x0005dde5) navi_text_pane_t1

0xa19e,	// (0x0005ddd9) navi_icon_pane_g1

0xa0f1,	// (0x0005dd2c) navi_navi_text_pane_t1

0x762c,	// (0x0005b267) navi_navi_volume_pane_g1

0x7634,	// (0x0005b26f) volume_small_pane

0xa057,	// (0x0005dc92) navi_navi_icon_text_pane_g1

0xa05f,	// (0x0005dc9a) navi_navi_icon_text_pane_t1

0x6ac6,	// (0x0005a701) navi_tabs_2_long_pane

0x6ac6,	// (0x0005a701) navi_tabs_2_pane

0x6ac6,	// (0x0005a701) navi_tabs_3_long_pane

0x6ac6,	// (0x0005a701) navi_tabs_3_pane

0x6ac6,	// (0x0005a701) navi_tabs_4_pane

0x760c,	// (0x0005b247) tabs_2_active_pane_ParamLimits

0x760c,	// (0x0005b247) tabs_2_active_pane

0x761c,	// (0x0005b257) tabs_2_passive_pane_ParamLimits

0x761c,	// (0x0005b257) tabs_2_passive_pane

0x75da,	// (0x0005b215) tabs_3_active_pane_ParamLimits

0x75da,	// (0x0005b215) tabs_3_active_pane

0x75ea,	// (0x0005b225) tabs_3_passive_pane_ParamLimits

0x75ea,	// (0x0005b225) tabs_3_passive_pane

0x75fb,	// (0x0005b236) tabs_3_passive_pane_cp_ParamLimits

0x75fb,	// (0x0005b236) tabs_3_passive_pane_cp

0x7596,	// (0x0005b1d1) tabs_4_active_pane_ParamLimits

0x7596,	// (0x0005b1d1) tabs_4_active_pane

0x75a7,	// (0x0005b1e2) tabs_4_passive_pane_ParamLimits

0x75a7,	// (0x0005b1e2) tabs_4_passive_pane

0x75b8,	// (0x0005b1f3) tabs_4_passive_pane_cp_ParamLimits

0x75b8,	// (0x0005b1f3) tabs_4_passive_pane_cp

0x75c9,	// (0x0005b204) tabs_4_passive_pane_cp2_ParamLimits

0x75c9,	// (0x0005b204) tabs_4_passive_pane_cp2

0x7572,	// (0x0005b1ad) tabs_2_long_active_pane_ParamLimits

0x7572,	// (0x0005b1ad) tabs_2_long_active_pane

0x7584,	// (0x0005b1bf) tabs_2_long_passive_pane_ParamLimits

0x7584,	// (0x0005b1bf) tabs_2_long_passive_pane

0x752d,	// (0x0005b168) tabs_3_long_active_pane_ParamLimits

0x752d,	// (0x0005b168) tabs_3_long_active_pane

0x7546,	// (0x0005b181) tabs_3_long_passive_pane_ParamLimits

0x7546,	// (0x0005b181) tabs_3_long_passive_pane

0x7559,	// (0x0005b194) tabs_3_long_passive_pane_cp_ParamLimits

0x7559,	// (0x0005b194) tabs_3_long_passive_pane_cp

0x74d3,	// (0x0005b10e) volume_small_pane_g1

0x74dc,	// (0x0005b117) volume_small_pane_g2

0x74e5,	// (0x0005b120) volume_small_pane_g3

0x74ee,	// (0x0005b129) volume_small_pane_g4

0x74f7,	// (0x0005b132) volume_small_pane_g5

0x7500,	// (0x0005b13b) volume_small_pane_g6

0x7509,	// (0x0005b144) volume_small_pane_g7

0x7512,	// (0x0005b14d) volume_small_pane_g8

0x751b,	// (0x0005b156) volume_small_pane_g9

0x7524,	// (0x0005b15f) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x000634ec) volume_small_pane_g

0xebdd,	// (0x00062818) bg_active_tab_pane_cp2_ParamLimits

0xebdd,	// (0x00062818) bg_active_tab_pane_cp2

0x56e4,	// (0x0005931f) tabs_3_active_pane_g1

0x56ec,	// (0x00059327) tabs_3_active_pane_t1

0xebdd,	// (0x00062818) bg_passive_tab_pane_cp2_ParamLimits

0xebdd,	// (0x00062818) bg_passive_tab_pane_cp2

0x56e4,	// (0x0005931f) tabs_3_passive_pane_g1

0x56ec,	// (0x00059327) tabs_3_passive_pane_t1

0xebdd,	// (0x00062818) bg_active_tab_pane_cp3_ParamLimits

0xebdd,	// (0x00062818) bg_active_tab_pane_cp3

0x56fe,	// (0x00059339) tabs_4_active_pane_g1

0x5706,	// (0x00059341) tabs_4_active_pane_t1

0xebdd,	// (0x00062818) bg_passive_tab_pane_cp3_ParamLimits

0xebdd,	// (0x00062818) bg_passive_tab_pane_cp3

0x56fe,	// (0x00059339) tabs_4_1_passive_pane_g1

0x5706,	// (0x00059341) tabs_4_1_passive_pane_t1

0x8e13,	// (0x0005ca4e) list_highlight_pane_cp2

0xa70f,	// (0x0005e34a) list_set_pane_ParamLimits

0xa70f,	// (0x0005e34a) list_set_pane

0xa7b1,	// (0x0005e3ec) main_pane_set_t1_ParamLimits

0xa7b1,	// (0x0005e3ec) main_pane_set_t1

0xa7d1,	// (0x0005e40c) main_pane_set_t2_ParamLimits

0xa7d1,	// (0x0005e40c) main_pane_set_t2

0xa7e5,	// (0x0005e420) main_pane_set_t3_ParamLimits

0xa7e5,	// (0x0005e420) main_pane_set_t3

0xa7f7,	// (0x0005e432) main_pane_set_t4_ParamLimits

0xa7f7,	// (0x0005e432) main_pane_set_t4

0x0003,

0xf981,	// (0x000635bc) main_pane_set_t_ParamLimits

0xf981,	// (0x000635bc) main_pane_set_t

0xa809,	// (0x0005e444) setting_code_pane

0xa815,	// (0x0005e450) setting_slider_graphic_pane

0xa815,	// (0x0005e450) setting_slider_pane

0xa815,	// (0x0005e450) setting_text_pane

0xa815,	// (0x0005e450) setting_volume_pane

0x5718,	// (0x00059353) volume_set_pane

0xebdd,	// (0x00062818) bg_set_opt_pane_cp

0x5720,	// (0x0005935b) setting_slider_pane_t1

0x5739,	// (0x00059374) setting_slider_pane_t2

0x5753,	// (0x0005938e) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00063199) setting_slider_pane_t

0x576b,	// (0x000593a6) slider_set_pane

0xeb8f,	// (0x000627ca) bg_set_opt_pane_cp2

0xebeb,	// (0x00062826) setting_slider_graphic_pane_g1

0x5781,	// (0x000593bc) setting_slider_graphic_pane_t1

0x5791,	// (0x000593cc) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000631a0) setting_slider_graphic_pane_t

0x57a1,	// (0x000593dc) slider_set_pane_cp

0xeb8f,	// (0x000627ca) input_focus_pane_cp1

0xa6ce,	// (0x0005e309) list_set_text_pane

0xeb85,	// (0x000627c0) setting_text_pane_g1

0xeb8f,	// (0x000627ca) input_focus_pane_cp2

0xeb85,	// (0x000627c0) setting_code_pane_g1

0xebf4,	// (0x0006282f) setting_code_pane_t1

0x3435,	// (0x00057070) set_text_pane_t1_ParamLimits

0x3435,	// (0x00057070) set_text_pane_t1

0xf1b7,	// (0x00062df2) set_opt_bg_pane_g1

0xf1bf,	// (0x00062dfa) set_opt_bg_pane_g2

0xa6a8,	// (0x0005e2e3) set_opt_bg_pane_g3

0xf1cf,	// (0x00062e0a) set_opt_bg_pane_g4

0xf1d7,	// (0x00062e12) set_opt_bg_pane_g5

0xf1df,	// (0x00062e1a) set_opt_bg_pane_g6

0xa6b2,	// (0x0005e2ed) set_opt_bg_pane_g7

0xa6ba,	// (0x0005e2f5) set_opt_bg_pane_g8

0xa6c4,	// (0x0005e2ff) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x000635a9) set_opt_bg_pane_g

0xa69b,	// (0x0005e2d6) slider_set_pane_g1

0x76b3,	// (0x0005b2ee) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0006359a) slider_set_pane_g

0x763d,	// (0x0005b278) volume_set_pane_g1

0x7645,	// (0x0005b280) volume_set_pane_g2

0x764d,	// (0x0005b288) volume_set_pane_g3

0x7655,	// (0x0005b290) volume_set_pane_g4

0x765d,	// (0x0005b298) volume_set_pane_g5

0x7665,	// (0x0005b2a0) volume_set_pane_g6

0x766d,	// (0x0005b2a8) volume_set_pane_g7

0x7675,	// (0x0005b2b0) volume_set_pane_g8

0x767d,	// (0x0005b2b8) volume_set_pane_g9

0x7685,	// (0x0005b2c0) volume_set_pane_g10

0x0009,

0xf937,	// (0x00063572) volume_set_pane_g

0x57a9,	// (0x000593e4) indicator_pane_ParamLimits

0x57a9,	// (0x000593e4) indicator_pane

0x57b5,	// (0x000593f0) main_idle_pane_g2_ParamLimits

0x57b5,	// (0x000593f0) main_idle_pane_g2

0x57dd,	// (0x00059418) main_pane_idle_g1_ParamLimits

0x57dd,	// (0x00059418) main_pane_idle_g1

0xec02,	// (0x0006283d) popup_clock_digital_analogue_window_ParamLimits

0xec02,	// (0x0006283d) popup_clock_digital_analogue_window

0x57ea,	// (0x00059425) soft_indicator_pane_ParamLimits

0x57ea,	// (0x00059425) soft_indicator_pane

0x57f6,	// (0x00059431) wallpaper_pane_ParamLimits

0x57f6,	// (0x00059431) wallpaper_pane

0xeb85,	// (0x000627c0) wallpaper_pane_g1

0x5802,	// (0x0005943d) indicator_pane_g1_ParamLimits

0x5802,	// (0x0005943d) indicator_pane_g1

0xac9a,	// (0x0005e8d5) navi_navi_icon_text_pane_srt_g1

0xec30,	// (0x0006286b) soft_indicator_pane_t1

0xec4a,	// (0x00062885) aid_ps_area_pane

0x580e,	// (0x00059449) aid_ps_clock_pane

0xec5b,	// (0x00062896) aid_ps_indicator_pane

0xec67,	// (0x000628a2) indicator_ps_pane_ParamLimits

0xec67,	// (0x000628a2) indicator_ps_pane

0xec76,	// (0x000628b1) power_save_pane_g1_ParamLimits

0xec76,	// (0x000628b1) power_save_pane_g1

0xec82,	// (0x000628bd) power_save_pane_g2_ParamLimits

0xec82,	// (0x000628bd) power_save_pane_g2

0x5267,	// (0x00058ea2) aid_navinavi_width_pane

0xec4a,	// (0x00062885) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000631a5) power_save_pane_g_ParamLimits

0xf56a,	// (0x000631a5) power_save_pane_g

0xec90,	// (0x000628cb) power_save_pane_t1_ParamLimits

0xec90,	// (0x000628cb) power_save_pane_t1

0x580e,	// (0x00059449) aid_ps_clock_pane_ParamLimits

0xec5b,	// (0x00062896) aid_ps_indicator_pane_ParamLimits

0xeca2,	// (0x000628dd) power_save_pane_t4_ParamLimits

0xeca2,	// (0x000628dd) power_save_pane_t4

0x0001,

0xf56f,	// (0x000631aa) power_save_pane_t_ParamLimits

0xf56f,	// (0x000631aa) power_save_pane_t

0xeccc,	// (0x00062907) power_save_t3_ParamLimits

0xeccc,	// (0x00062907) power_save_t3

0xecb7,	// (0x000628f2) power_save_t2_ParamLimits

0xecb7,	// (0x000628f2) power_save_t2

0xece1,	// (0x0006291c) indicator_ps_pane_g1

0x581c,	// (0x00059457) ai_gene_pane_ParamLimits

0x581c,	// (0x00059457) ai_gene_pane

0x5828,	// (0x00059463) ai_links_pane_ParamLimits

0x5828,	// (0x00059463) ai_links_pane

0x5834,	// (0x0005946f) indicator_pane_cp1_ParamLimits

0x5834,	// (0x0005946f) indicator_pane_cp1

0x5840,	// (0x0005947b) main_pane_idle_g1_cp_ParamLimits

0x5840,	// (0x0005947b) main_pane_idle_g1_cp

0x584c,	// (0x00059487) popup_ai_links_title_window

0x5855,	// (0x00059490) soft_indicator_pane_cp1_ParamLimits

0x5855,	// (0x00059490) soft_indicator_pane_cp1

0xa495,	// (0x0005e0d0) ai_links_pane_g1

0xa49e,	// (0x0005e0d9) grid_ai_links_pane

0xa478,	// (0x0005e0b3) ai_gene_pane_1

0xa483,	// (0x0005e0be) ai_gene_pane_2

0xa48c,	// (0x0005e0c7) list_highlight_pane_cp4

0xa45c,	// (0x0005e097) cell_ai_link_pane_ParamLimits

0xa45c,	// (0x0005e097) cell_ai_link_pane

0xa454,	// (0x0005e08f) cell_ai_link_pane_g1

0xee1c,	// (0x00062a57) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0006354d) cell_ai_link_pane_g

0xeb8f,	// (0x000627ca) grid_highlight_cp2

0xeb8f,	// (0x000627ca) bg_popup_sub_pane_cp1

0xecf8,	// (0x00062933) popup_ai_links_title_window_t1

0xa3a4,	// (0x0005dfdf) ai_gene_pane_1_g1_ParamLimits

0xa3a4,	// (0x0005dfdf) ai_gene_pane_1_g1

0xa3b0,	// (0x0005dfeb) ai_gene_pane_1_g2_ParamLimits

0xa3b0,	// (0x0005dfeb) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x00063543) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x00063543) ai_gene_pane_1_g

0xa3bd,	// (0x0005dff8) ai_gene_pane_1_t1_ParamLimits

0xa3bd,	// (0x0005dff8) ai_gene_pane_1_t1

0xa3f1,	// (0x0005e02c) grid_ai_soft_ind_pane

0xa38f,	// (0x0005dfca) ai_gene_pane_2_t1_ParamLimits

0xa38f,	// (0x0005dfca) ai_gene_pane_2_t1

0x5861,	// (0x0005949c) main_pane_empty_t1_ParamLimits

0x5861,	// (0x0005949c) main_pane_empty_t1

0x5879,	// (0x000594b4) main_pane_empty_t2_ParamLimits

0x5879,	// (0x000594b4) main_pane_empty_t2

0x588e,	// (0x000594c9) main_pane_empty_t3_ParamLimits

0x588e,	// (0x000594c9) main_pane_empty_t3

0x58a0,	// (0x000594db) main_pane_empty_t4_ParamLimits

0x58a0,	// (0x000594db) main_pane_empty_t4

0x58b2,	// (0x000594ed) main_pane_empty_t5_ParamLimits

0x58b2,	// (0x000594ed) main_pane_empty_t5

0x0004,

0xf574,	// (0x000631af) main_pane_empty_t_ParamLimits

0xf574,	// (0x000631af) main_pane_empty_t

0xf208,	// (0x00062e43) bg_popup_window_pane_ParamLimits

0xf208,	// (0x00062e43) bg_popup_window_pane

0xa0ff,	// (0x0005dd3a) find_popup_pane_cp2_ParamLimits

0xa0ff,	// (0x0005dd3a) find_popup_pane_cp2

0xa10b,	// (0x0005dd46) heading_pane_ParamLimits

0xa10b,	// (0x0005dd46) heading_pane

0xeb8f,	// (0x000627ca) bg_popup_sub_pane

0xa079,	// (0x0005dcb4) bg_popup_window_pane_g1_ParamLimits

0xa079,	// (0x0005dcb4) bg_popup_window_pane_g1

0xa085,	// (0x0005dcc0) bg_popup_window_pane_g2_ParamLimits

0xa085,	// (0x0005dcc0) bg_popup_window_pane_g2

0xa091,	// (0x0005dccc) bg_popup_window_pane_g3_ParamLimits

0xa091,	// (0x0005dccc) bg_popup_window_pane_g3

0xa09d,	// (0x0005dcd8) bg_popup_window_pane_g4_ParamLimits

0xa09d,	// (0x0005dcd8) bg_popup_window_pane_g4

0xa0a9,	// (0x0005dce4) bg_popup_window_pane_g5_ParamLimits

0xa0a9,	// (0x0005dce4) bg_popup_window_pane_g5

0xa0b5,	// (0x0005dcf0) bg_popup_window_pane_g6_ParamLimits

0xa0b5,	// (0x0005dcf0) bg_popup_window_pane_g6

0xa0c1,	// (0x0005dcfc) bg_popup_window_pane_g7_ParamLimits

0xa0c1,	// (0x0005dcfc) bg_popup_window_pane_g7

0xa0cd,	// (0x0005dd08) bg_popup_window_pane_g8_ParamLimits

0xa0cd,	// (0x0005dd08) bg_popup_window_pane_g8

0xa0d9,	// (0x0005dd14) bg_popup_window_pane_g9_ParamLimits

0xa0d9,	// (0x0005dd14) bg_popup_window_pane_g9

0xa0e5,	// (0x0005dd20) bg_popup_window_pane_g10_ParamLimits

0xa0e5,	// (0x0005dd20) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0006350b) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0006350b) bg_popup_window_pane_g

0xa00e,	// (0x0005dc49) bg_popup_heading_pane_ParamLimits

0xa00e,	// (0x0005dc49) bg_popup_heading_pane

0x77ba,	// (0x0005b3f5) tabs_4_passive_pane_cp_srt_ParamLimits

0x77ba,	// (0x0005b3f5) tabs_4_passive_pane_cp_srt

0x77cc,	// (0x0005b407) tabs_4_passive_pane_srt_ParamLimits

0xa022,	// (0x0005dc5d) heading_pane_g2

0x77cc,	// (0x0005b407) tabs_4_passive_pane_srt

0x8e13,	// (0x0005ca4e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8e13,	// (0x0005ca4e) bg_passive_tab_pane_cp3_srt

0xa02a,	// (0x0005dc65) heading_pane_t1_ParamLimits

0xa02a,	// (0x0005dc65) heading_pane_t1

0xa041,	// (0x0005dc7c) heading_pane_t2_ParamLimits

0xa041,	// (0x0005dc7c) heading_pane_t2

0x0001,

0xf8cb,	// (0x00063506) heading_pane_t_ParamLimits

0xf8cb,	// (0x00063506) heading_pane_t

0x9b4b,	// (0x0005d786) bg_popup_heading_pane_g1

0x9bfa,	// (0x0005d835) bg_popup_heading_pane_g2

0x9c04,	// (0x0005d83f) bg_popup_heading_pane_g3

0x9c0e,	// (0x0005d849) bg_popup_heading_pane_g4

0x9c18,	// (0x0005d853) bg_popup_heading_pane_g5

0x9c22,	// (0x0005d85d) bg_popup_heading_pane_g6

0x9c2a,	// (0x0005d865) bg_popup_heading_pane_g7

0x9c32,	// (0x0005d86d) bg_popup_heading_pane_g8

0x9c3c,	// (0x0005d877) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x000634c2) bg_popup_heading_pane_g

0x9320,	// (0x0005cf5b) bg_popup_sub_pane_g1

0x9330,	// (0x0005cf6b) bg_popup_sub_pane_g2

0x9328,	// (0x0005cf63) bg_popup_sub_pane_g3

0x9340,	// (0x0005cf7b) bg_popup_sub_pane_g4

0x9338,	// (0x0005cf73) bg_popup_sub_pane_g5

0x9348,	// (0x0005cf83) bg_popup_sub_pane_g6

0x9350,	// (0x0005cf8b) bg_popup_sub_pane_g7

0x9360,	// (0x0005cf9b) bg_popup_sub_pane_g8

0x9358,	// (0x0005cf93) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0006349c) bg_popup_sub_pane_g

0xed07,	// (0x00062942) bg_popup_window_pane_cp5_ParamLimits

0xed07,	// (0x00062942) bg_popup_window_pane_cp5

0xed23,	// (0x0006295e) popup_note_window_g1_ParamLimits

0xed23,	// (0x0006295e) popup_note_window_g1

0xed2f,	// (0x0006296a) popup_note_window_t1_ParamLimits

0xed2f,	// (0x0006296a) popup_note_window_t1

0xed45,	// (0x00062980) popup_note_window_t2_ParamLimits

0xed45,	// (0x00062980) popup_note_window_t2

0xed5b,	// (0x00062996) popup_note_window_t3_ParamLimits

0xed5b,	// (0x00062996) popup_note_window_t3

0xed71,	// (0x000629ac) popup_note_window_t4_ParamLimits

0xed71,	// (0x000629ac) popup_note_window_t4

0xed99,	// (0x000629d4) popup_note_window_t5_ParamLimits

0xed99,	// (0x000629d4) popup_note_window_t5

0x0004,

0xf57f,	// (0x000631ba) popup_note_window_t_ParamLimits

0xf57f,	// (0x000631ba) popup_note_window_t

0xedbd,	// (0x000629f8) bg_popup_window_pane_cp6_ParamLimits

0xedbd,	// (0x000629f8) bg_popup_window_pane_cp6

0x9ac7,	// (0x0005d702) popup_note_image_window_g1_ParamLimits

0x9ac7,	// (0x0005d702) popup_note_image_window_g1

0x9ad3,	// (0x0005d70e) popup_note_image_window_g2_ParamLimits

0x9ad3,	// (0x0005d70e) popup_note_image_window_g2

0x0001,

0xf855,	// (0x00063490) popup_note_image_window_g_ParamLimits

0xf855,	// (0x00063490) popup_note_image_window_g

0x9aec,	// (0x0005d727) popup_note_image_window_t1_ParamLimits

0x9aec,	// (0x0005d727) popup_note_image_window_t1

0x9b05,	// (0x0005d740) popup_note_image_window_t2_ParamLimits

0x9b05,	// (0x0005d740) popup_note_image_window_t2

0x9b1e,	// (0x0005d759) popup_note_image_window_t3_ParamLimits

0x9b1e,	// (0x0005d759) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x00063495) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x00063495) popup_note_image_window_t

0x9990,	// (0x0005d5cb) bg_popup_window_pane_cp7_ParamLimits

0x9990,	// (0x0005d5cb) bg_popup_window_pane_cp7

0x99c0,	// (0x0005d5fb) popup_note_wait_window_g1_ParamLimits

0x99c0,	// (0x0005d5fb) popup_note_wait_window_g1

0x99cc,	// (0x0005d607) popup_note_wait_window_g2_ParamLimits

0x99cc,	// (0x0005d607) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0006347e) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0006347e) popup_note_wait_window_g

0x99e4,	// (0x0005d61f) popup_note_wait_window_t1_ParamLimits

0x99e4,	// (0x0005d61f) popup_note_wait_window_t1

0x9a0b,	// (0x0005d646) popup_note_wait_window_t2_ParamLimits

0x9a0b,	// (0x0005d646) popup_note_wait_window_t2

0x9a28,	// (0x0005d663) popup_note_wait_window_t3_ParamLimits

0x9a28,	// (0x0005d663) popup_note_wait_window_t3

0x9a3b,	// (0x0005d676) popup_note_wait_window_t4_ParamLimits

0x9a3b,	// (0x0005d676) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x00063485) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x00063485) popup_note_wait_window_t

0x9a60,	// (0x0005d69b) wait_bar_pane_ParamLimits

0x9a60,	// (0x0005d69b) wait_bar_pane

0xeb8f,	// (0x000627ca) wait_anim_pane

0xeb8f,	// (0x000627ca) wait_border_pane

0xeb85,	// (0x000627c0) wait_anim_pane_g1

0xeb85,	// (0x000627c0) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00063339) wait_anim_pane_g

0x993c,	// (0x0005d577) wait_border_pane_g1

0x9947,	// (0x0005d582) wait_border_pane_g2

0x9950,	// (0x0005d58b) wait_border_pane_g3

0x0002,

0xf83c,	// (0x00063477) wait_border_pane_g

0x97a7,	// (0x0005d3e2) bg_popup_window_pane_cp16_ParamLimits

0x97a7,	// (0x0005d3e2) bg_popup_window_pane_cp16

0x98a7,	// (0x0005d4e2) indicator_popup_pane_cp4_ParamLimits

0x98a7,	// (0x0005d4e2) indicator_popup_pane_cp4

0x98bb,	// (0x0005d4f6) popup_query_data_window_t1_ParamLimits

0x98bb,	// (0x0005d4f6) popup_query_data_window_t1

0x98cd,	// (0x0005d508) popup_query_data_window_t2_ParamLimits

0x98cd,	// (0x0005d508) popup_query_data_window_t2

0x98e6,	// (0x0005d521) popup_query_data_window_t3_ParamLimits

0x98e6,	// (0x0005d521) popup_query_data_window_t3

0x0002,

0xf835,	// (0x00063470) popup_query_data_window_t_ParamLimits

0xf835,	// (0x00063470) popup_query_data_window_t

0x9900,	// (0x0005d53b) query_popup_data_pane_ParamLimits

0x9900,	// (0x0005d53b) query_popup_data_pane

0x9914,	// (0x0005d54f) query_popup_data_pane_cp1_ParamLimits

0x9914,	// (0x0005d54f) query_popup_data_pane_cp1

0x97a7,	// (0x0005d3e2) bg_popup_window_pane_cp10_ParamLimits

0x97a7,	// (0x0005d3e2) bg_popup_window_pane_cp10

0x97d9,	// (0x0005d414) indicator_popup_pane_ParamLimits

0x97d9,	// (0x0005d414) indicator_popup_pane

0x97fb,	// (0x0005d436) popup_query_code_window_t1_ParamLimits

0x97fb,	// (0x0005d436) popup_query_code_window_t1

0x9815,	// (0x0005d450) popup_query_code_window_t2_ParamLimits

0x9815,	// (0x0005d450) popup_query_code_window_t2

0x985e,	// (0x0005d499) popup_query_code_window_t3_ParamLimits

0x985e,	// (0x0005d499) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x00063469) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x00063469) popup_query_code_window_t

0x988d,	// (0x0005d4c8) query_popup_pane_ParamLimits

0x988d,	// (0x0005d4c8) query_popup_pane

0xedbd,	// (0x000629f8) bg_popup_window_pane_cp15_ParamLimits

0xedbd,	// (0x000629f8) bg_popup_window_pane_cp15

0x58c6,	// (0x00059501) indicator_popup_pane_cp1_ParamLimits

0x58c6,	// (0x00059501) indicator_popup_pane_cp1

0x58d9,	// (0x00059514) indicator_popup_pane_cp2_ParamLimits

0x58d9,	// (0x00059514) indicator_popup_pane_cp2

0x58ec,	// (0x00059527) popup_query_data_code_window_g1_ParamLimits

0x58ec,	// (0x00059527) popup_query_data_code_window_g1

0xeddb,	// (0x00062a16) popup_query_data_code_window_t1_ParamLimits

0xeddb,	// (0x00062a16) popup_query_data_code_window_t1

0xeded,	// (0x00062a28) popup_query_data_code_window_t2_ParamLimits

0xeded,	// (0x00062a28) popup_query_data_code_window_t2

0x58ff,	// (0x0005953a) popup_query_data_code_window_t3_ParamLimits

0x58ff,	// (0x0005953a) popup_query_data_code_window_t3

0x5915,	// (0x00059550) popup_query_data_code_window_t4_ParamLimits

0x5915,	// (0x00059550) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000631c5) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000631c5) popup_query_data_code_window_t

0x73b6,	// (0x0005aff1) list_single_midp_graphic_pane_g3

0x592d,	// (0x00059568) query_popup_data_pane_cp2_ParamLimits

0x5940,	// (0x0005957b) query_popup_pane_cp2_ParamLimits

0x5940,	// (0x0005957b) query_popup_pane_cp2

0xeb8f,	// (0x000627ca) bg_popup_window_pane_cp11

0x979f,	// (0x0005d3da) heading_pane_cp5

0xee49,	// (0x00062a84) listscroll_popup_info_pane

0xeb8f,	// (0x000627ca) input_focus_pane_cp3

0xedff,	// (0x00062a3a) query_popup_pane_t1

0xee0d,	// (0x00062a48) list_popup_info_pane_ParamLimits

0xee0d,	// (0x00062a48) list_popup_info_pane

0xee1c,	// (0x00062a57) listscroll_popup_info_pane_g1

0xee24,	// (0x00062a5f) scroll_pane_cp7

0x5953,	// (0x0005958e) popup_info_list_pane_t1_ParamLimits

0x5953,	// (0x0005958e) popup_info_list_pane_t1

0x596d,	// (0x000595a8) popup_info_list_pane_t2_ParamLimits

0x596d,	// (0x000595a8) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000631ce) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000631ce) popup_info_list_pane_t

0xeb8f,	// (0x000627ca) bg_popup_window_pane_cp12

0xacb4,	// (0x0005e8ef) find_popup_pane

0xebdd,	// (0x00062818) bg_popup_window_pane_cp3

0xee2e,	// (0x00062a69) heading_pane_cp3

0xee3a,	// (0x00062a75) listscroll_popup_graphic_pane

0xeb8f,	// (0x000627ca) bg_popup_window_pane_cp4

0x59d7,	// (0x00059612) heading_pane_cp4

0xee49,	// (0x00062a84) listscroll_popup_colour_pane

0x59e1,	// (0x0005961c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x59e1,	// (0x0005961c) cell_large_graphic_colour_none_popup_pane

0x59f5,	// (0x00059630) grid_large_graphic_colour_popup_pane_ParamLimits

0x59f5,	// (0x00059630) grid_large_graphic_colour_popup_pane

0x5a1d,	// (0x00059658) listscroll_popup_colour_pane_g1_ParamLimits

0x5a1d,	// (0x00059658) listscroll_popup_colour_pane_g1

0x5a34,	// (0x0005966f) listscroll_popup_colour_pane_g2_ParamLimits

0x5a34,	// (0x0005966f) listscroll_popup_colour_pane_g2

0x5a4b,	// (0x00059686) listscroll_popup_colour_pane_g3_ParamLimits

0x5a4b,	// (0x00059686) listscroll_popup_colour_pane_g3

0x5a5b,	// (0x00059696) listscroll_popup_colour_pane_g4_ParamLimits

0x5a5b,	// (0x00059696) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000631d3) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000631d3) listscroll_popup_colour_pane_g

0xee51,	// (0x00062a8c) scroll_pane_cp6_ParamLimits

0xee51,	// (0x00062a8c) scroll_pane_cp6

0x5a6b,	// (0x000596a6) cell_large_graphic_colour_popup_pane_ParamLimits

0x5a6b,	// (0x000596a6) cell_large_graphic_colour_popup_pane

0x5a8a,	// (0x000596c5) cell_large_graphic_colour_none_popup_pane_t1

0xeb8f,	// (0x000627ca) grid_highlight_pane_cp5

0xee63,	// (0x00062a9e) cell_large_graphic_colour_popup_pane_g1

0xee6b,	// (0x00062aa6) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000631dc) cell_large_graphic_colour_popup_pane_g

0xee73,	// (0x00062aae) cell_large_graphic_colour_popup_pane_g2_copy1

0xee7c,	// (0x00062ab7) grid_highlight_pane_cp4

0xee84,	// (0x00062abf) bg_popup_window_pane_cp8_ParamLimits

0xee84,	// (0x00062abf) bg_popup_window_pane_cp8

0x5a99,	// (0x000596d4) popup_snote_single_text_window_g1_ParamLimits

0x5a99,	// (0x000596d4) popup_snote_single_text_window_g1

0x5aab,	// (0x000596e6) popup_snote_single_text_window_t1_ParamLimits

0x5aab,	// (0x000596e6) popup_snote_single_text_window_t1

0x5abe,	// (0x000596f9) popup_snote_single_text_window_t2_ParamLimits

0x5abe,	// (0x000596f9) popup_snote_single_text_window_t2

0x5ad1,	// (0x0005970c) popup_snote_single_text_window_t3_ParamLimits

0x5ad1,	// (0x0005970c) popup_snote_single_text_window_t3

0x5b0a,	// (0x00059745) popup_snote_single_text_window_t4_ParamLimits

0x5b0a,	// (0x00059745) popup_snote_single_text_window_t4

0x5b3e,	// (0x00059779) popup_snote_single_text_window_t5_ParamLimits

0x5b3e,	// (0x00059779) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000631e1) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000631e1) popup_snote_single_text_window_t

0xee9f,	// (0x00062ada) bg_popup_window_pane_cp9_ParamLimits

0xee9f,	// (0x00062ada) bg_popup_window_pane_cp9

0x5a99,	// (0x000596d4) popup_snote_single_graphic_window_g1_ParamLimits

0x5a99,	// (0x000596d4) popup_snote_single_graphic_window_g1

0xeead,	// (0x00062ae8) popup_snote_single_graphic_window_g2_ParamLimits

0xeead,	// (0x00062ae8) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000631ec) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000631ec) popup_snote_single_graphic_window_g

0xeeb9,	// (0x00062af4) popup_snote_single_graphic_window_t1_ParamLimits

0xeeb9,	// (0x00062af4) popup_snote_single_graphic_window_t1

0xeecc,	// (0x00062b07) popup_snote_single_graphic_window_t2_ParamLimits

0xeecc,	// (0x00062b07) popup_snote_single_graphic_window_t2

0x5b6d,	// (0x000597a8) popup_snote_single_graphic_window_t3_ParamLimits

0x5b6d,	// (0x000597a8) popup_snote_single_graphic_window_t3

0x5ba6,	// (0x000597e1) popup_snote_single_graphic_window_t4_ParamLimits

0x5ba6,	// (0x000597e1) popup_snote_single_graphic_window_t4

0x5bda,	// (0x00059815) popup_snote_single_graphic_window_t5_ParamLimits

0x5bda,	// (0x00059815) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000631f1) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000631f1) popup_snote_single_graphic_window_t

0xabf6,	// (0x0005e831) grid_graphic_popup_pane_ParamLimits

0xabf6,	// (0x0005e831) grid_graphic_popup_pane

0xac20,	// (0x0005e85b) listscroll_popup_graphic_pane_g1_ParamLimits

0xac20,	// (0x0005e85b) listscroll_popup_graphic_pane_g1

0xac34,	// (0x0005e86f) listscroll_popup_graphic_pane_g2_ParamLimits

0xac34,	// (0x0005e86f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x000635e6) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x000635e6) listscroll_popup_graphic_pane_g

0xac48,	// (0x0005e883) scroll_pane_cp5

0xab95,	// (0x0005e7d0) cell_graphic_popup_pane_ParamLimits

0xab95,	// (0x0005e7d0) cell_graphic_popup_pane

0xab76,	// (0x0005e7b1) cell_graphic_popup_pane_g1

0xab7e,	// (0x0005e7b9) cell_graphic_popup_pane_g2

0xee73,	// (0x00062aae) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x000635df) cell_graphic_popup_pane_g

0xab87,	// (0x0005e7c2) cell_graphic_popup_pane_t2

0xee7c,	// (0x00062ab7) grid_highlight_pane_cp3

0xeef1,	// (0x00062b2c) list_gen_pane_ParamLimits

0xeef1,	// (0x00062b2c) list_gen_pane

0xef19,	// (0x00062b54) scroll_pane

0xaace,	// (0x0005e709) bg_list_pane_g1_ParamLimits

0xaace,	// (0x0005e709) bg_list_pane_g1

0xaaeb,	// (0x0005e726) bg_list_pane_g2_ParamLimits

0xaaeb,	// (0x0005e726) bg_list_pane_g2

0xab00,	// (0x0005e73b) bg_list_pane_g3_ParamLimits

0xab00,	// (0x0005e73b) bg_list_pane_g3

0xab14,	// (0x0005e74f) bg_list_pane_g4_ParamLimits

0xab14,	// (0x0005e74f) bg_list_pane_g4

0xab28,	// (0x0005e763) bg_list_pane_g5_ParamLimits

0xab28,	// (0x0005e763) bg_list_pane_g5

0x0004,

0xf999,	// (0x000635d4) bg_list_pane_g_ParamLimits

0xf999,	// (0x000635d4) bg_list_pane_g

0x775d,	// (0x0005b398) list_double2_graphic_large_graphic_pane_ParamLimits

0x775d,	// (0x0005b398) list_double2_graphic_large_graphic_pane

0x775d,	// (0x0005b398) list_double2_graphic_pane_ParamLimits

0x775d,	// (0x0005b398) list_double2_graphic_pane

0x775d,	// (0x0005b398) list_double2_large_graphic_pane_ParamLimits

0x775d,	// (0x0005b398) list_double2_large_graphic_pane

0x775d,	// (0x0005b398) list_double2_pane_ParamLimits

0x775d,	// (0x0005b398) list_double2_pane

0x775d,	// (0x0005b398) list_double_graphic_heading_pane_ParamLimits

0x775d,	// (0x0005b398) list_double_graphic_heading_pane

0x775d,	// (0x0005b398) list_double_graphic_pane_ParamLimits

0x775d,	// (0x0005b398) list_double_graphic_pane

0x775d,	// (0x0005b398) list_double_heading_pane_ParamLimits

0x775d,	// (0x0005b398) list_double_heading_pane

0x775d,	// (0x0005b398) list_double_large_graphic_pane_ParamLimits

0x775d,	// (0x0005b398) list_double_large_graphic_pane

0x775d,	// (0x0005b398) list_double_number_pane_ParamLimits

0x775d,	// (0x0005b398) list_double_number_pane

0x775d,	// (0x0005b398) list_double_pane_ParamLimits

0x775d,	// (0x0005b398) list_double_pane

0x775d,	// (0x0005b398) list_double_time_pane_ParamLimits

0x775d,	// (0x0005b398) list_double_time_pane

0x775d,	// (0x0005b398) list_setting_number_pane_ParamLimits

0x775d,	// (0x0005b398) list_setting_number_pane

0x775d,	// (0x0005b398) list_setting_pane_ParamLimits

0x775d,	// (0x0005b398) list_setting_pane

0xa8ab,	// (0x0005e4e6) list_single_2graphic_pane_ParamLimits

0xa8ab,	// (0x0005e4e6) list_single_2graphic_pane

0xa8ab,	// (0x0005e4e6) list_single_graphic_heading_pane_ParamLimits

0xa8ab,	// (0x0005e4e6) list_single_graphic_heading_pane

0xa8ab,	// (0x0005e4e6) list_single_graphic_pane_ParamLimits

0xa8ab,	// (0x0005e4e6) list_single_graphic_pane

0xa8ab,	// (0x0005e4e6) list_single_heading_pane_ParamLimits

0xa8ab,	// (0x0005e4e6) list_single_heading_pane

0xa906,	// (0x0005e541) list_single_large_graphic_pane_ParamLimits

0xa906,	// (0x0005e541) list_single_large_graphic_pane

0xa8ab,	// (0x0005e4e6) list_single_number_heading_pane_ParamLimits

0xa8ab,	// (0x0005e4e6) list_single_number_heading_pane

0xa8ab,	// (0x0005e4e6) list_single_number_pane_ParamLimits

0xa8ab,	// (0x0005e4e6) list_single_number_pane

0xa8ab,	// (0x0005e4e6) list_single_pane_ParamLimits

0xa8ab,	// (0x0005e4e6) list_single_pane

0xeb8f,	// (0x000627ca) list_highlight_pane_cp1

0x5c1f,	// (0x0005985a) list_single_pane_g1_ParamLimits

0x5c1f,	// (0x0005985a) list_single_pane_g1

0x5c2b,	// (0x00059866) list_single_pane_g2_ParamLimits

0x5c2b,	// (0x00059866) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0006320d) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0006320d) list_single_pane_g

0x7747,	// (0x0005b382) list_single_pane_t1_ParamLimits

0x7747,	// (0x0005b382) list_single_pane_t1

0x5c1f,	// (0x0005985a) list_single_number_pane_g1_ParamLimits

0x5c1f,	// (0x0005985a) list_single_number_pane_g1

0x5c2b,	// (0x00059866) list_single_number_pane_g2_ParamLimits

0x5c2b,	// (0x00059866) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0006320d) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0006320d) list_single_number_pane_g

0x5c37,	// (0x00059872) list_single_number_pane_t1_ParamLimits

0x5c37,	// (0x00059872) list_single_number_pane_t1

0x768d,	// (0x0005b2c8) list_single_number_pane_t2_ParamLimits

0x768d,	// (0x0005b2c8) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x00063595) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x00063595) list_single_number_pane_t

0x5c13,	// (0x0005984e) list_single_graphic_pane_g1_ParamLimits

0x5c13,	// (0x0005984e) list_single_graphic_pane_g1

0x5c1f,	// (0x0005985a) list_single_graphic_pane_g2_ParamLimits

0x5c1f,	// (0x0005985a) list_single_graphic_pane_g2

0x5c2b,	// (0x00059866) list_single_graphic_pane_g3_ParamLimits

0x5c2b,	// (0x00059866) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000631fc) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000631fc) list_single_graphic_pane_g

0x5c37,	// (0x00059872) list_single_graphic_pane_t1_ParamLimits

0x5c37,	// (0x00059872) list_single_graphic_pane_t1

0x5c4d,	// (0x00059888) list_single_heading_pane_g1_ParamLimits

0x5c4d,	// (0x00059888) list_single_heading_pane_g1

0x5c2b,	// (0x00059866) list_single_heading_pane_g2_ParamLimits

0x5c2b,	// (0x00059866) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00063203) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00063203) list_single_heading_pane_g

0x5c60,	// (0x0005989b) list_single_heading_pane_t1_ParamLimits

0x5c60,	// (0x0005989b) list_single_heading_pane_t1

0x5c76,	// (0x000598b1) list_single_heading_pane_t2_ParamLimits

0x5c76,	// (0x000598b1) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00063208) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00063208) list_single_heading_pane_t

0x5c1f,	// (0x0005985a) list_single_number_heading_pane_g1_ParamLimits

0x5c1f,	// (0x0005985a) list_single_number_heading_pane_g1

0x5c2b,	// (0x00059866) list_single_number_heading_pane_g2_ParamLimits

0x5c2b,	// (0x00059866) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0006320d) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0006320d) list_single_number_heading_pane_g

0x5c88,	// (0x000598c3) list_single_number_heading_pane_t1_ParamLimits

0x5c88,	// (0x000598c3) list_single_number_heading_pane_t1

0x5c9e,	// (0x000598d9) list_single_number_heading_pane_t2_ParamLimits

0x5c9e,	// (0x000598d9) list_single_number_heading_pane_t2

0x5cb0,	// (0x000598eb) list_single_number_heading_pane_t3_ParamLimits

0x5cb0,	// (0x000598eb) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00063212) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00063212) list_single_number_heading_pane_t

0x5cc2,	// (0x000598fd) list_single_graphic_heading_pane_g1_ParamLimits

0x5cc2,	// (0x000598fd) list_single_graphic_heading_pane_g1

0x5cd8,	// (0x00059913) list_single_graphic_heading_pane_g4_ParamLimits

0x5cd8,	// (0x00059913) list_single_graphic_heading_pane_g4

0x5c2b,	// (0x00059866) list_single_graphic_heading_pane_g5_ParamLimits

0x5c2b,	// (0x00059866) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00063219) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00063219) list_single_graphic_heading_pane_g

0x5c88,	// (0x000598c3) list_single_graphic_heading_pane_t1_ParamLimits

0x5c88,	// (0x000598c3) list_single_graphic_heading_pane_t1

0x5ce9,	// (0x00059924) list_single_graphic_heading_pane_t2_ParamLimits

0x5ce9,	// (0x00059924) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00063220) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00063220) list_single_graphic_heading_pane_t

0x5d01,	// (0x0005993c) list_single_large_graphic_pane_g1_ParamLimits

0x5d01,	// (0x0005993c) list_single_large_graphic_pane_g1

0x465e,	// (0x00058299) list_single_large_graphic_pane_g2_ParamLimits

0x465e,	// (0x00058299) list_single_large_graphic_pane_g2

0x466a,	// (0x000582a5) list_single_large_graphic_pane_g3_ParamLimits

0x466a,	// (0x000582a5) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00063225) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00063225) list_single_large_graphic_pane_g

0x9947,	// (0x0005d582) wait_border_pane_g2_copy1

0x5d0d,	// (0x00059948) list_single_large_graphic_pane_g4_cp2

0x5d15,	// (0x00059950) list_single_large_graphic_pane_t1_ParamLimits

0x5d15,	// (0x00059950) list_single_large_graphic_pane_t1

0x5d2b,	// (0x00059966) list_double_pane_g1_ParamLimits

0x5d2b,	// (0x00059966) list_double_pane_g1

0x5d37,	// (0x00059972) list_double_pane_g2_ParamLimits

0x5d37,	// (0x00059972) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0006322c) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0006322c) list_double_pane_g

0x5d43,	// (0x0005997e) list_double_pane_t1_ParamLimits

0x5d43,	// (0x0005997e) list_double_pane_t1

0x5d59,	// (0x00059994) list_double_pane_t2_ParamLimits

0x5d59,	// (0x00059994) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00063231) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00063231) list_double_pane_t

0x5d6b,	// (0x000599a6) list_double2_pane_g1_ParamLimits

0x5d6b,	// (0x000599a6) list_double2_pane_g1

0x3470,	// (0x000570ab) list_double2_pane_g2_ParamLimits

0x3470,	// (0x000570ab) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00063236) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00063236) list_double2_pane_g

0x5d7c,	// (0x000599b7) list_double2_pane_t1_ParamLimits

0x5d7c,	// (0x000599b7) list_double2_pane_t1

0x5d92,	// (0x000599cd) list_double2_pane_t2_ParamLimits

0x5d92,	// (0x000599cd) list_double2_pane_t2

0x0001,

0xf600,	// (0x0006323b) list_double2_pane_t_ParamLimits

0xf600,	// (0x0006323b) list_double2_pane_t

0x5d2b,	// (0x00059966) list_double_number_pane_g1_ParamLimits

0x5d2b,	// (0x00059966) list_double_number_pane_g1

0x5d37,	// (0x00059972) list_double_number_pane_g2_ParamLimits

0x5d37,	// (0x00059972) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0006322c) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0006322c) list_double_number_pane_g

0x5da4,	// (0x000599df) list_double_number_pane_t1_ParamLimits

0x5da4,	// (0x000599df) list_double_number_pane_t1

0x5db6,	// (0x000599f1) list_double_number_pane_t2_ParamLimits

0x5db6,	// (0x000599f1) list_double_number_pane_t2

0x5dcc,	// (0x00059a07) list_double_number_pane_t3_ParamLimits

0x5dcc,	// (0x00059a07) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00063240) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00063240) list_double_number_pane_t

0x5dde,	// (0x00059a19) list_double_graphic_pane_g1_ParamLimits

0x5dde,	// (0x00059a19) list_double_graphic_pane_g1

0x5dea,	// (0x00059a25) list_double_graphic_pane_g2_ParamLimits

0x5dea,	// (0x00059a25) list_double_graphic_pane_g2

0x5df9,	// (0x00059a34) list_double_graphic_pane_g3_ParamLimits

0x5df9,	// (0x00059a34) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00063247) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00063247) list_double_graphic_pane_g

0x5db6,	// (0x000599f1) list_double_graphic_pane_t1_ParamLimits

0x5db6,	// (0x000599f1) list_double_graphic_pane_t1

0x5dcc,	// (0x00059a07) list_double_graphic_pane_t2_ParamLimits

0x5dcc,	// (0x00059a07) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00063250) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00063250) list_double_graphic_pane_t

0x5e11,	// (0x00059a4c) list_double2_graphic_pane_g1_ParamLimits

0x5e11,	// (0x00059a4c) list_double2_graphic_pane_g1

0xaa83,	// (0x0005e6be) list_double2_graphic_pane_g2_ParamLimits

0xaa83,	// (0x0005e6be) list_double2_graphic_pane_g2

0x4676,	// (0x000582b1) list_double2_graphic_pane_g3_ParamLimits

0x4676,	// (0x000582b1) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00063255) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00063255) list_double2_graphic_pane_g

0x5e1d,	// (0x00059a58) list_double2_graphic_pane_t1_ParamLimits

0x5e1d,	// (0x00059a58) list_double2_graphic_pane_t1

0x5e33,	// (0x00059a6e) list_double2_graphic_pane_t2_ParamLimits

0x5e33,	// (0x00059a6e) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0006325c) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0006325c) list_double2_graphic_pane_t

0x5e45,	// (0x00059a80) list_double_large_graphic_pane_g1_ParamLimits

0x5e45,	// (0x00059a80) list_double_large_graphic_pane_g1

0x5e64,	// (0x00059a9f) list_double_large_graphic_pane_g2_ParamLimits

0x5e64,	// (0x00059a9f) list_double_large_graphic_pane_g2

0x5d37,	// (0x00059972) list_double_large_graphic_pane_g3_ParamLimits

0x5d37,	// (0x00059972) list_double_large_graphic_pane_g3

0x5e7a,	// (0x00059ab5) list_double_large_graphic_pane_g4_ParamLimits

0x5e7a,	// (0x00059ab5) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00063261) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00063261) list_double_large_graphic_pane_g

0x5e8c,	// (0x00059ac7) list_double_large_graphic_pane_t1_ParamLimits

0x5e8c,	// (0x00059ac7) list_double_large_graphic_pane_t1

0x5ea5,	// (0x00059ae0) list_double_large_graphic_pane_t2_ParamLimits

0x5ea5,	// (0x00059ae0) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0006326c) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0006326c) list_double_large_graphic_pane_t

0x5eb7,	// (0x00059af2) list_double2_large_graphic_pane_g1_ParamLimits

0x5eb7,	// (0x00059af2) list_double2_large_graphic_pane_g1

0x5ec3,	// (0x00059afe) list_double2_large_graphic_pane_g2_ParamLimits

0x5ec3,	// (0x00059afe) list_double2_large_graphic_pane_g2

0x4676,	// (0x000582b1) list_double2_large_graphic_pane_g3_ParamLimits

0x4676,	// (0x000582b1) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00063271) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00063271) list_double2_large_graphic_pane_g

0x5e1d,	// (0x00059a58) list_double2_large_graphic_pane_t1_ParamLimits

0x5e1d,	// (0x00059a58) list_double2_large_graphic_pane_t1

0x5e33,	// (0x00059a6e) list_double2_large_graphic_pane_t2_ParamLimits

0x5e33,	// (0x00059a6e) list_double2_large_graphic_pane_t2

0x0001,

0xf621,	// (0x0006325c) list_double2_large_graphic_pane_t_ParamLimits

0xf621,	// (0x0006325c) list_double2_large_graphic_pane_t

0x5ed4,	// (0x00059b0f) list_double_heading_pane_g1_ParamLimits

0x5ed4,	// (0x00059b0f) list_double_heading_pane_g1

0x5ee5,	// (0x00059b20) list_double_heading_pane_g2_ParamLimits

0x5ee5,	// (0x00059b20) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00063278) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00063278) list_double_heading_pane_g

0x5ef1,	// (0x00059b2c) list_double_heading_pane_t1_ParamLimits

0x5ef1,	// (0x00059b2c) list_double_heading_pane_t1

0x5e33,	// (0x00059a6e) list_double_heading_pane_t2_ParamLimits

0x5e33,	// (0x00059a6e) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0006327d) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0006327d) list_double_heading_pane_t

0x5f07,	// (0x00059b42) list_double_graphic_heading_pane_g1_ParamLimits

0x5f07,	// (0x00059b42) list_double_graphic_heading_pane_g1

0x5ed4,	// (0x00059b0f) list_double_graphic_heading_pane_g2_ParamLimits

0x5ed4,	// (0x00059b0f) list_double_graphic_heading_pane_g2

0x5ee5,	// (0x00059b20) list_double_graphic_heading_pane_g3_ParamLimits

0x5ee5,	// (0x00059b20) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00063282) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00063282) list_double_graphic_heading_pane_g

0x5ef1,	// (0x00059b2c) list_double_graphic_heading_pane_t1_ParamLimits

0x5ef1,	// (0x00059b2c) list_double_graphic_heading_pane_t1

0x5e33,	// (0x00059a6e) list_double_graphic_heading_pane_t2_ParamLimits

0x5e33,	// (0x00059a6e) list_double_graphic_heading_pane_t2

0x0001,

0xf642,	// (0x0006327d) list_double_graphic_heading_pane_t_ParamLimits

0xf642,	// (0x0006327d) list_double_graphic_heading_pane_t

0x5f13,	// (0x00059b4e) list_double_time_pane_g1_ParamLimits

0x5f13,	// (0x00059b4e) list_double_time_pane_g1

0x5f24,	// (0x00059b5f) list_double_time_pane_g2_ParamLimits

0x5f24,	// (0x00059b5f) list_double_time_pane_g2

0x0001,

0xf64e,	// (0x00063289) list_double_time_pane_g_ParamLimits

0xf64e,	// (0x00063289) list_double_time_pane_g

0x5f30,	// (0x00059b6b) list_double_time_pane_t1_ParamLimits

0x5f30,	// (0x00059b6b) list_double_time_pane_t1

0x5f46,	// (0x00059b81) list_double_time_pane_t2_ParamLimits

0x5f46,	// (0x00059b81) list_double_time_pane_t2

0x5f58,	// (0x00059b93) list_double_time_pane_t3_ParamLimits

0x5f58,	// (0x00059b93) list_double_time_pane_t3

0x5f6a,	// (0x00059ba5) list_double_time_pane_t4_ParamLimits

0x5f6a,	// (0x00059ba5) list_double_time_pane_t4

0x0003,

0xf653,	// (0x0006328e) list_double_time_pane_t_ParamLimits

0xf653,	// (0x0006328e) list_double_time_pane_t

0x5f7c,	// (0x00059bb7) list_setting_pane_g1_ParamLimits

0x5f7c,	// (0x00059bb7) list_setting_pane_g1

0x3470,	// (0x000570ab) list_setting_pane_g2_ParamLimits

0x3470,	// (0x000570ab) list_setting_pane_g2

0x0001,

0xf65c,	// (0x00063297) list_setting_pane_g_ParamLimits

0xf65c,	// (0x00063297) list_setting_pane_g

0x5f88,	// (0x00059bc3) list_setting_pane_t1_ParamLimits

0x5f88,	// (0x00059bc3) list_setting_pane_t1

0x5fa2,	// (0x00059bdd) list_setting_pane_t2_ParamLimits

0x5fa2,	// (0x00059bdd) list_setting_pane_t2

0x0002,

0xf661,	// (0x0006329c) list_setting_pane_t_ParamLimits

0xf661,	// (0x0006329c) list_setting_pane_t

0x5fdf,	// (0x00059c1a) set_value_pane_cp_ParamLimits

0x5fdf,	// (0x00059c1a) set_value_pane_cp

0x5feb,	// (0x00059c26) list_setting_number_pane_g1_ParamLimits

0x5feb,	// (0x00059c26) list_setting_number_pane_g1

0x5ff7,	// (0x00059c32) list_setting_number_pane_g2_ParamLimits

0x5ff7,	// (0x00059c32) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x000632a3) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x000632a3) list_setting_number_pane_g

0x6003,	// (0x00059c3e) list_setting_number_pane_t1_ParamLimits

0x6003,	// (0x00059c3e) list_setting_number_pane_t1

0x601c,	// (0x00059c57) list_setting_number_pane_t2_ParamLimits

0x601c,	// (0x00059c57) list_setting_number_pane_t2

0x6036,	// (0x00059c71) list_setting_number_pane_t3_ParamLimits

0x6036,	// (0x00059c71) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x000632a8) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x000632a8) list_setting_number_pane_t

0x5fdf,	// (0x00059c1a) set_value_pane_ParamLimits

0x5fdf,	// (0x00059c1a) set_value_pane

0xef4d,	// (0x00062b88) bg_set_opt_pane_ParamLimits

0xef4d,	// (0x00062b88) bg_set_opt_pane

0x347c,	// (0x000570b7) set_value_pane_t1

0xef6e,	// (0x00062ba9) slider_set_pane_cp3

0x6079,	// (0x00059cb4) volume_small_pane_cp

0xef77,	// (0x00062bb2) list_form_gen_pane

0xef80,	// (0x00062bbb) scroll_pane_cp8

0x6082,	// (0x00059cbd) form_field_data_pane_ParamLimits

0x6082,	// (0x00059cbd) form_field_data_pane

0x609c,	// (0x00059cd7) form_field_data_wide_pane_ParamLimits

0x609c,	// (0x00059cd7) form_field_data_wide_pane

0x60bf,	// (0x00059cfa) form_field_popup_pane_ParamLimits

0x60bf,	// (0x00059cfa) form_field_popup_pane

0x60df,	// (0x00059d1a) form_field_popup_wide_pane_ParamLimits

0x60df,	// (0x00059d1a) form_field_popup_wide_pane

0x349a,	// (0x000570d5) form_field_slider_pane_ParamLimits

0x349a,	// (0x000570d5) form_field_slider_pane

0x60fc,	// (0x00059d37) form_field_slider_wide_pane_ParamLimits

0x60fc,	// (0x00059d37) form_field_slider_wide_pane

0xef91,	// (0x00062bcc) data_form_pane

0x6119,	// (0x00059d54) form_field_data_pane_t1

0xef9d,	// (0x00062bd8) input_focus_pane

0x34ad,	// (0x000570e8) data_form_wide_pane

0x34ca,	// (0x00057105) form_field_data_wide_pane_t1

0xee91,	// (0x00062acc) input_focus_pane_cp6

0x6131,	// (0x00059d6c) form_field_popup_pane_t1

0xef9d,	// (0x00062bd8) input_focus_pane_cp7

0xf18d,	// (0x00062dc8) list_form_pane

0x34f4,	// (0x0005712f) form_field_popup_wide_pane_t1

0xef9d,	// (0x00062bd8) input_focus_pane_cp8

0xf199,	// (0x00062dd4) list_form_wide_pane

0x6151,	// (0x00059d8c) form_field_slider_pane_t1_ParamLimits

0x6151,	// (0x00059d8c) form_field_slider_pane_t1

0x6167,	// (0x00059da2) form_field_slider_pane_t2_ParamLimits

0x6167,	// (0x00059da2) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x000632b8) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x000632b8) form_field_slider_pane_t

0xed07,	// (0x00062942) input_focus_pane_cp9_ParamLimits

0xed07,	// (0x00062942) input_focus_pane_cp9

0x617c,	// (0x00059db7) slider_cont_pane_ParamLimits

0x617c,	// (0x00059db7) slider_cont_pane

0xf1a5,	// (0x00062de0) form_field_slider_wide_pane_t1_ParamLimits

0xf1a5,	// (0x00062de0) form_field_slider_wide_pane_t1

0x3509,	// (0x00057144) form_field_slider_wide_pane_t2_ParamLimits

0x3509,	// (0x00057144) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x000632bd) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x000632bd) form_field_slider_wide_pane_t

0xed07,	// (0x00062942) input_focus_pane_cp10_ParamLimits

0xed07,	// (0x00062942) input_focus_pane_cp10

0x6190,	// (0x00059dcb) slider_cont_pane_cp1_ParamLimits

0x6190,	// (0x00059dcb) slider_cont_pane_cp1

0x61a4,	// (0x00059ddf) slider_form_pane_cp

0xf1b7,	// (0x00062df2) input_focus_pane_g1

0xf1bf,	// (0x00062dfa) input_focus_pane_g2

0xf1c7,	// (0x00062e02) input_focus_pane_g3

0xf1cf,	// (0x00062e0a) input_focus_pane_g4

0xf1d7,	// (0x00062e12) input_focus_pane_g5

0xf1df,	// (0x00062e1a) input_focus_pane_g6

0xf1e7,	// (0x00062e22) input_focus_pane_g7

0xf1ef,	// (0x00062e2a) input_focus_pane_g8

0xf1f7,	// (0x00062e32) input_focus_pane_g9

0xeb85,	// (0x000627c0) input_focus_pane_g10

0x0009,

0xf687,	// (0x000632c2) input_focus_pane_g

0x9950,	// (0x0005d58b) wait_border_pane_g3_copy1

0x61ac,	// (0x00059de7) data_form_pane_t1

0xeb85,	// (0x000627c0) wait_anim_pane_g1_copy1

0x7717,	// (0x0005b352) data_form_wide_pane_t1

0x61c7,	// (0x00059e02) list_form_graphic_pane_cp_ParamLimits

0x61c7,	// (0x00059e02) list_form_graphic_pane_cp

0xa83f,	// (0x0005e47a) slider_form_pane_g1

0xa848,	// (0x0005e483) slider_form_pane_g2

0x0006,

0xf98a,	// (0x000635c5) slider_form_pane_g

0x61c7,	// (0x00059e02) list_form_graphic_pane_ParamLimits

0x61c7,	// (0x00059e02) list_form_graphic_pane

0x61e0,	// (0x00059e1b) list_form_graphic_pane_g1

0x61e8,	// (0x00059e23) list_form_graphic_pane_t1_ParamLimits

0x61e8,	// (0x00059e23) list_form_graphic_pane_t1

0xebdd,	// (0x00062818) list_highlight_pane_cp5_ParamLimits

0xebdd,	// (0x00062818) list_highlight_pane_cp5

0x61fd,	// (0x00059e38) find_pane_g1

0xf1ff,	// (0x00062e3a) input_find_pane

0x6206,	// (0x00059e41) input_find_pane_g1_ParamLimits

0x6206,	// (0x00059e41) input_find_pane_g1

0x6212,	// (0x00059e4d) input_find_pane_t1_ParamLimits

0x6212,	// (0x00059e4d) input_find_pane_t1

0x6227,	// (0x00059e62) input_find_pane_t2_ParamLimits

0x6227,	// (0x00059e62) input_find_pane_t2

0x0001,

0xf69c,	// (0x000632d7) input_find_pane_t_ParamLimits

0xf69c,	// (0x000632d7) input_find_pane_t

0xf208,	// (0x00062e43) input_focus_pane_cp5_ParamLimits

0xf208,	// (0x00062e43) input_focus_pane_cp5

0xf216,	// (0x00062e51) bg_popup_window_pane_cp2_ParamLimits

0xf216,	// (0x00062e51) bg_popup_window_pane_cp2

0xf223,	// (0x00062e5e) listscroll_menu_pane_ParamLimits

0xf223,	// (0x00062e5e) listscroll_menu_pane

0x6248,	// (0x00059e83) popup_submenu_window_ParamLimits

0x6248,	// (0x00059e83) popup_submenu_window

0xf22f,	// (0x00062e6a) find_popup_pane_g1

0x6270,	// (0x00059eab) input_popup_find_pane_cp

0xf208,	// (0x00062e43) input_focus_pane_cp4_ParamLimits

0xf208,	// (0x00062e43) input_focus_pane_cp4

0xf237,	// (0x00062e72) input_popup_find_pane_t1_ParamLimits

0xf237,	// (0x00062e72) input_popup_find_pane_t1

0xeb8f,	// (0x000627ca) bg_popup_sub_pane_cp

0xf265,	// (0x00062ea0) listscroll_popup_sub_pane

0xf26d,	// (0x00062ea8) list_submenu_pane_ParamLimits

0xf26d,	// (0x00062ea8) list_submenu_pane

0xf27e,	// (0x00062eb9) scroll_pane_cp4

0x6288,	// (0x00059ec3) list_single_popup_submenu_pane_ParamLimits

0x6288,	// (0x00059ec3) list_single_popup_submenu_pane

0x241a,	// (0x00056055) list_single_popup_submenu_pane_g1

0x629c,	// (0x00059ed7) list_single_popup_submenu_pane_t1_ParamLimits

0x629c,	// (0x00059ed7) list_single_popup_submenu_pane_t1

0xebdd,	// (0x00062818) bg_active_tab_pane_cp1_ParamLimits

0xebdd,	// (0x00062818) bg_active_tab_pane_cp1

0xf286,	// (0x00062ec1) tabs_2_active_pane_g1

0x62b1,	// (0x00059eec) tabs_2_active_pane_t1

0xebdd,	// (0x00062818) bg_passive_tab_pane_cp1_ParamLimits

0xebdd,	// (0x00062818) bg_passive_tab_pane_cp1

0xf286,	// (0x00062ec1) tabs_2_passive_pane_g1

0x62b1,	// (0x00059eec) tabs_2_passive_pane_t1

0x21da,	// (0x00055e15) bg_active_tab_pane_cp4

0x62c3,	// (0x00059efe) tabs_2_long_active_pane_t1

0x62d6,	// (0x00059f11) bg_passive_tab_pane_cp4

0x73be,	// (0x0005aff9) list_single_midp_graphic_pane_g4_ParamLimits

0x21da,	// (0x00055e15) bg_active_tab_pane_cp5

0x62e2,	// (0x00059f1d) tabs_3_long_active_pane_t1

0x62d6,	// (0x00059f11) bg_passive_tab_pane_cp5

0x73be,	// (0x0005aff9) list_single_midp_graphic_pane_g4

0xebdd,	// (0x00062818) bg_popup_window_pane_cp13_ParamLimits

0xebdd,	// (0x00062818) bg_popup_window_pane_cp13

0xf28e,	// (0x00062ec9) listscroll_popup_fast_pane_ParamLimits

0xf28e,	// (0x00062ec9) listscroll_popup_fast_pane

0xf29a,	// (0x00062ed5) grid_popup_fast_pane_ParamLimits

0xf29a,	// (0x00062ed5) grid_popup_fast_pane

0xf2ac,	// (0x00062ee7) scroll_pane_cp9_ParamLimits

0xf2ac,	// (0x00062ee7) scroll_pane_cp9

0xc325,	// (0x0005ff60) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc325,	// (0x0005ff60) list_single_graphic_hl_pane_t1_cp2

0xf2bf,	// (0x00062efa) input_focus_pane_cp20_ParamLimits

0xf2bf,	// (0x00062efa) input_focus_pane_cp20

0xf2cd,	// (0x00062f08) query_popup_data_pane_t1_ParamLimits

0xf2cd,	// (0x00062f08) query_popup_data_pane_t1

0xf2e0,	// (0x00062f1b) query_popup_data_pane_t2_ParamLimits

0xf2e0,	// (0x00062f1b) query_popup_data_pane_t2

0xf326,	// (0x00062f61) query_popup_data_pane_t3_ParamLimits

0xf326,	// (0x00062f61) query_popup_data_pane_t3

0xf367,	// (0x00062fa2) query_popup_data_pane_t4_ParamLimits

0xf367,	// (0x00062fa2) query_popup_data_pane_t4

0xf3a3,	// (0x00062fde) query_popup_data_pane_t5_ParamLimits

0xf3a3,	// (0x00062fde) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x000632dc) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x000632dc) query_popup_data_pane_t

0xf1b7,	// (0x00062df2) bg_set_opt_pane_g1

0xf1bf,	// (0x00062dfa) bg_set_opt_pane_g2

0xf1c7,	// (0x00062e02) bg_set_opt_pane_g3

0xf1cf,	// (0x00062e0a) bg_set_opt_pane_g4

0xf1d7,	// (0x00062e12) bg_set_opt_pane_g5

0xf1df,	// (0x00062e1a) bg_set_opt_pane_g6

0xf1e7,	// (0x00062e22) bg_set_opt_pane_g7

0xf1ef,	// (0x00062e2a) bg_set_opt_pane_g8

0xf1f7,	// (0x00062e32) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x000632e7) bg_set_opt_pane_g

0x6859,	// (0x0005a494) control_top_pane_stacon_ParamLimits

0x6859,	// (0x0005a494) control_top_pane_stacon

0x68ac,	// (0x0005a4e7) signal_pane_stacon_ParamLimits

0x68ac,	// (0x0005a4e7) signal_pane_stacon

0x3601,	// (0x0005723c) stacon_top_pane_g1_ParamLimits

0x3601,	// (0x0005723c) stacon_top_pane_g1

0x68d1,	// (0x0005a50c) title_pane_stacon_ParamLimits

0x68d1,	// (0x0005a50c) title_pane_stacon

0x68fb,	// (0x0005a536) uni_indicator_pane_stacon_ParamLimits

0x68fb,	// (0x0005a536) uni_indicator_pane_stacon

0x6910,	// (0x0005a54b) battery_pane_stacon_ParamLimits

0x6910,	// (0x0005a54b) battery_pane_stacon

0x6954,	// (0x0005a58f) control_bottom_pane_stacon_ParamLimits

0x6954,	// (0x0005a58f) control_bottom_pane_stacon

0x6977,	// (0x0005a5b2) navi_pane_stacon_ParamLimits

0x6977,	// (0x0005a5b2) navi_pane_stacon

0x3623,	// (0x0005725e) stacon_bottom_pane_g1_ParamLimits

0x3623,	// (0x0005725e) stacon_bottom_pane_g1

0x630e,	// (0x00059f49) aid_levels_signal_lsc_ParamLimits

0x630e,	// (0x00059f49) aid_levels_signal_lsc

0x6324,	// (0x00059f5f) signal_pane_stacon_g1_ParamLimits

0x6324,	// (0x00059f5f) signal_pane_stacon_g1

0x6338,	// (0x00059f73) signal_pane_stacon_g2_ParamLimits

0x6338,	// (0x00059f73) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x000632fa) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x000632fa) signal_pane_stacon_g

0x636d,	// (0x00059fa8) title_pane_stacon_t1_ParamLimits

0x636d,	// (0x00059fa8) title_pane_stacon_t1

0xf3e7,	// (0x00063022) uni_indicator_pane_stacon_g1

0xf3f1,	// (0x0006302c) uni_indicator_pane_stacon_g2

0xf3fb,	// (0x00063036) uni_indicator_pane_stacon_g3

0xf405,	// (0x00063040) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00063306) uni_indicator_pane_stacon_g

0x6392,	// (0x00059fcd) control_top_pane_stacon_g1

0x639a,	// (0x00059fd5) control_top_pane_stacon_t1_ParamLimits

0x639a,	// (0x00059fd5) control_top_pane_stacon_t1

0x63d1,	// (0x0005a00c) aid_levels_battery_lsc_ParamLimits

0x63d1,	// (0x0005a00c) aid_levels_battery_lsc

0x63e8,	// (0x0005a023) battery_pane_stacon_g1_ParamLimits

0x63e8,	// (0x0005a023) battery_pane_stacon_g1

0x63fb,	// (0x0005a036) battery_pane_stacon_g2_ParamLimits

0x63fb,	// (0x0005a036) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0006330f) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0006330f) battery_pane_stacon_g

0x6439,	// (0x0005a074) navi_icon_pane_stacon

0x644d,	// (0x0005a088) navi_navi_pane_stacon

0x6439,	// (0x0005a074) navi_text_pane_stacon

0x6392,	// (0x00059fcd) control_bottom_pane_stacon_g1

0x6461,	// (0x0005a09c) control_bottom_pane_stacon_t1_ParamLimits

0x6461,	// (0x0005a09c) control_bottom_pane_stacon_t1

0x6498,	// (0x0005a0d3) grid_app_pane_ParamLimits

0x6498,	// (0x0005a0d3) grid_app_pane

0x64bc,	// (0x0005a0f7) scroll_pane_cp15_ParamLimits

0x64bc,	// (0x0005a0f7) scroll_pane_cp15

0x64cf,	// (0x0005a10a) cell_app_pane_ParamLimits

0x64cf,	// (0x0005a10a) cell_app_pane

0x64f7,	// (0x0005a132) cell_app_pane_g1_ParamLimits

0x64f7,	// (0x0005a132) cell_app_pane_g1

0xf429,	// (0x00063064) cell_app_pane_g2_ParamLimits

0xf429,	// (0x00063064) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00063314) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00063314) cell_app_pane_g

0x651b,	// (0x0005a156) cell_app_pane_t1_ParamLimits

0x651b,	// (0x0005a156) cell_app_pane_t1

0xf435,	// (0x00063070) grid_highlight_pane_ParamLimits

0xf435,	// (0x00063070) grid_highlight_pane

0xf1b7,	// (0x00062df2) cell_highlight_pane_g1

0xf1bf,	// (0x00062dfa) cell_highlight_pane_g2

0xf1c7,	// (0x00062e02) cell_highlight_pane_g3

0xf1cf,	// (0x00062e0a) cell_highlight_pane_g4

0xf1d7,	// (0x00062e12) cell_highlight_pane_g5

0xf1df,	// (0x00062e1a) cell_highlight_pane_g6

0xf1e7,	// (0x00062e22) cell_highlight_pane_g7

0xf1ef,	// (0x00062e2a) cell_highlight_pane_g8

0xf1f7,	// (0x00062e32) cell_highlight_pane_g9

0xeb85,	// (0x000627c0) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x000632c2) cell_highlight_pane_g

0xf446,	// (0x00063081) bg_scroll_pane

0x6545,	// (0x0005a180) scroll_handle_pane

0xf48d,	// (0x000630c8) scroll_bg_pane_g1

0xf4a2,	// (0x000630dd) scroll_bg_pane_g2

0xf4ba,	// (0x000630f5) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00063319) scroll_bg_pane_g

0x656e,	// (0x0005a1a9) scroll_handle_focus_pane_ParamLimits

0x656e,	// (0x0005a1a9) scroll_handle_focus_pane

0xf48d,	// (0x000630c8) scroll_handle_pane_g1

0xf4cf,	// (0x0006310a) scroll_handle_pane_g2

0xf4ba,	// (0x000630f5) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00063320) scroll_handle_pane_g

0xf208,	// (0x00062e43) bg_popup_sub_pane_cp21_ParamLimits

0xf208,	// (0x00062e43) bg_popup_sub_pane_cp21

0x657b,	// (0x0005a1b6) popup_fep_japan_predictive_window_t1_ParamLimits

0x657b,	// (0x0005a1b6) popup_fep_japan_predictive_window_t1

0x6595,	// (0x0005a1d0) popup_fep_japan_predictive_window_t2_ParamLimits

0x6595,	// (0x0005a1d0) popup_fep_japan_predictive_window_t2

0x65c8,	// (0x0005a203) popup_fep_japan_predictive_window_t3_ParamLimits

0x65c8,	// (0x0005a203) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00063327) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00063327) popup_fep_japan_predictive_window_t

0xeb8f,	// (0x000627ca) bg_popup_sub_pane_cp23

0x2d5a,	// (0x00056995) listscroll_japin_cand_pane

0xf4e3,	// (0x0006311e) popup_fep_japan_candidate_window_t1

0xf4f1,	// (0x0006312c) candidate_pane_ParamLimits

0xf4f1,	// (0x0006312c) candidate_pane

0x65ff,	// (0x0005a23a) scroll_pane_cp30

0xf503,	// (0x0006313e) list_single_popup_jap_candidate_pane_ParamLimits

0xf503,	// (0x0006313e) list_single_popup_jap_candidate_pane

0xeb8f,	// (0x000627ca) list_highlight_pane_cp30

0xf518,	// (0x00063153) list_single_popup_jap_candidate_pane_t1

0xf527,	// (0x00063162) level_1_signal

0xf534,	// (0x0006316f) level_2_signal

0xf541,	// (0x0006317c) level_3_signal

0x12a1,	// (0x00054edc) level_4_signal

0x12ae,	// (0x00054ee9) level_5_signal

0x12bb,	// (0x00054ef6) level_6_signal

0x12c8,	// (0x00054f03) level_7_signal

0xf527,	// (0x00063162) level_1_battery

0xf534,	// (0x0006316f) level_2_battery

0xf541,	// (0x0006317c) level_3_battery

0x12a1,	// (0x00054edc) level_4_battery

0x12ae,	// (0x00054ee9) level_5_battery

0x12bb,	// (0x00054ef6) level_6_battery

0x12c8,	// (0x00054f03) level_7_battery

0x12ed,	// (0x00054f28) list_menu_pane_ParamLimits

0x12ed,	// (0x00054f28) list_menu_pane

0x1303,	// (0x00054f3e) scroll_pane_cp25_ParamLimits

0x1303,	// (0x00054f3e) scroll_pane_cp25

0x131c,	// (0x00054f57) list_double2_graphic_pane_cp2_ParamLimits

0x131c,	// (0x00054f57) list_double2_graphic_pane_cp2

0x131c,	// (0x00054f57) list_double2_large_graphic_pane_cp2_ParamLimits

0x131c,	// (0x00054f57) list_double2_large_graphic_pane_cp2

0x131c,	// (0x00054f57) list_double2_pane_cp2_ParamLimits

0x131c,	// (0x00054f57) list_double2_pane_cp2

0x131c,	// (0x00054f57) list_double_graphic_pane_cp2_ParamLimits

0x131c,	// (0x00054f57) list_double_graphic_pane_cp2

0x131c,	// (0x00054f57) list_double_large_graphic_pane_cp2_ParamLimits

0x131c,	// (0x00054f57) list_double_large_graphic_pane_cp2

0x131c,	// (0x00054f57) list_double_number_pane_cp2_ParamLimits

0x131c,	// (0x00054f57) list_double_number_pane_cp2

0x131c,	// (0x00054f57) list_double_pane_cp2_ParamLimits

0x131c,	// (0x00054f57) list_double_pane_cp2

0x663a,	// (0x0005a275) list_single_2graphic_pane_cp2_ParamLimits

0x663a,	// (0x0005a275) list_single_2graphic_pane_cp2

0x663a,	// (0x0005a275) list_single_graphic_heading_pane_cp2_ParamLimits

0x663a,	// (0x0005a275) list_single_graphic_heading_pane_cp2

0x663a,	// (0x0005a275) list_single_graphic_pane_cp2_ParamLimits

0x663a,	// (0x0005a275) list_single_graphic_pane_cp2

0x663a,	// (0x0005a275) list_single_heading_pane_cp2_ParamLimits

0x663a,	// (0x0005a275) list_single_heading_pane_cp2

0x132c,	// (0x00054f67) list_single_large_graphic_pane_cp2_ParamLimits

0x132c,	// (0x00054f67) list_single_large_graphic_pane_cp2

0x663a,	// (0x0005a275) list_single_number_heading_pane_cp2_ParamLimits

0x663a,	// (0x0005a275) list_single_number_heading_pane_cp2

0x663a,	// (0x0005a275) list_single_number_pane_cp2_ParamLimits

0x663a,	// (0x0005a275) list_single_number_pane_cp2

0x663a,	// (0x0005a275) list_single_pane_cp2_ParamLimits

0x663a,	// (0x0005a275) list_single_pane_cp2

0x1346,	// (0x00054f81) bg_popup_sub_pane_cp22

0x6712,	// (0x0005a34d) popup_side_volume_key_window_g1

0x6736,	// (0x0005a371) popup_side_volume_key_window_t1

0x6752,	// (0x0005a38d) volume_small_pane_cp1

0xed07,	// (0x00062942) bg_popup_sub_pane_cp24_ParamLimits

0xed07,	// (0x00062942) bg_popup_sub_pane_cp24

0x135c,	// (0x00054f97) fep_china_uni_candidate_pane_ParamLimits

0x135c,	// (0x00054f97) fep_china_uni_candidate_pane

0x1370,	// (0x00054fab) fep_china_uni_entry_pane

0x1380,	// (0x00054fbb) popup_fep_china_uni_window_g1

0x675a,	// (0x0005a395) fep_china_uni_entry_pane_g1

0x6762,	// (0x0005a39d) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00063358) fep_china_uni_entry_pane_g

0x351b,	// (0x00057156) fep_entry_item_pane

0x3525,	// (0x00057160) fep_candidate_item_pane

0x676a,	// (0x0005a3a5) fep_china_uni_candidate_pane_g1

0x352d,	// (0x00057168) fep_china_uni_candidate_pane_g2

0x3535,	// (0x00057170) fep_china_uni_candidate_pane_g3

0x6772,	// (0x0005a3ad) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0006335d) fep_china_uni_candidate_pane_g

0xeb85,	// (0x000627c0) fep_entry_item_pane_g1

0x353d,	// (0x00057178) fep_entry_item_pane_t1_ParamLimits

0x353d,	// (0x00057178) fep_entry_item_pane_t1

0x3553,	// (0x0005718e) fep_candidate_item_pane_t1_ParamLimits

0x3553,	// (0x0005718e) fep_candidate_item_pane_t1

0x3568,	// (0x000571a3) fep_candidate_item_pane_t2_ParamLimits

0x3568,	// (0x000571a3) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00063366) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00063366) fep_candidate_item_pane_t

0xebdd,	// (0x00062818) list_highlight_pane_cp31_ParamLimits

0xebdd,	// (0x00062818) list_highlight_pane_cp31

0x357a,	// (0x000571b5) level_1_signal_lsc

0x3583,	// (0x000571be) level_2_signal_lsc

0x358c,	// (0x000571c7) level_3_signal_lsc

0x3595,	// (0x000571d0) level_4_signal_lsc

0x359e,	// (0x000571d9) level_5_signal_lsc

0x35a7,	// (0x000571e2) level_6_signal_lsc

0x35b0,	// (0x000571eb) level_7_signal_lsc

0x35b0,	// (0x000571eb) level_1_battery_lsc

0x35b9,	// (0x000571f4) level_2_battery_lsc

0x35c2,	// (0x000571fd) level_3_battery_lsc

0x35cb,	// (0x00057206) level_4_battery_lsc

0x35d4,	// (0x0005720f) level_5_battery_lsc

0x35dd,	// (0x00057218) level_6_battery_lsc

0x357a,	// (0x000571b5) level_7_battery_lsc

0x35e6,	// (0x00057221) scroll_handle_focus_pane_g1

0x35ef,	// (0x0005722a) scroll_handle_focus_pane_g2

0x35f8,	// (0x00057233) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0006336b) scroll_handle_focus_pane_g

0x677a,	// (0x0005a3b5) list_single_2graphic_pane_g1_ParamLimits

0x677a,	// (0x0005a3b5) list_single_2graphic_pane_g1

0x5cd8,	// (0x00059913) list_single_2graphic_pane_g2_ParamLimits

0x5cd8,	// (0x00059913) list_single_2graphic_pane_g2

0x5c2b,	// (0x00059866) list_single_2graphic_pane_g3_ParamLimits

0x5c2b,	// (0x00059866) list_single_2graphic_pane_g3

0x6786,	// (0x0005a3c1) list_single_2graphic_pane_g4_ParamLimits

0x6786,	// (0x0005a3c1) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x00063372) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x00063372) list_single_2graphic_pane_g

0x6792,	// (0x0005a3cd) list_single_2graphic_pane_t1_ParamLimits

0x6792,	// (0x0005a3cd) list_single_2graphic_pane_t1

0x67c0,	// (0x0005a3fb) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x67c0,	// (0x0005a3fb) list_double2_graphic_large_graphic_pane_g1

0x5ec3,	// (0x00059afe) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5ec3,	// (0x00059afe) list_double2_graphic_large_graphic_pane_g2

0x4676,	// (0x000582b1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4676,	// (0x000582b1) list_double2_graphic_large_graphic_pane_g3

0x67d0,	// (0x0005a40b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x67d0,	// (0x0005a40b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0006337b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0006337b) list_double2_graphic_large_graphic_pane_g

0x67dc,	// (0x0005a417) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x67dc,	// (0x0005a417) list_double2_graphic_large_graphic_pane_t1

0x67f2,	// (0x0005a42d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x67f2,	// (0x0005a42d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00063384) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00063384) list_double2_graphic_large_graphic_pane_t

0x69d6,	// (0x0005a611) popup_fast_swap_window_ParamLimits

0x69d6,	// (0x0005a611) popup_fast_swap_window

0x69f2,	// (0x0005a62d) popup_side_volume_key_window

0x36ae,	// (0x000572e9) stacon_top_pane

0x36b8,	// (0x000572f3) status_pane_ParamLimits

0x36b8,	// (0x000572f3) status_pane

0x6a0c,	// (0x0005a647) status_small_pane

0xeb8f,	// (0x000627ca) control_pane

0xeb8f,	// (0x000627ca) stacon_bottom_pane

0xef80,	// (0x00062bbb) scroll_pane_cp121

0xef77,	// (0x00062bb2) set_content_pane

0x6804,	// (0x0005a43f) bg_active_tab_pane_g1_cp1

0x680d,	// (0x0005a448) bg_active_tab_pane_g2_cp1

0x6816,	// (0x0005a451) bg_active_tab_pane_g3_cp1

0x6804,	// (0x0005a43f) bg_passive_tab_pane_g1_cp1

0x680d,	// (0x0005a448) bg_passive_tab_pane_g2_cp1

0x6816,	// (0x0005a451) bg_passive_tab_pane_g3_cp1

0x681f,	// (0x0005a45a) bg_active_tab_pane_g1_cp2

0x680d,	// (0x0005a448) bg_active_tab_pane_g2_cp2

0x6828,	// (0x0005a463) bg_active_tab_pane_g3_cp2

0x681f,	// (0x0005a45a) bg_passive_tab_pane_g1_cp2

0x680d,	// (0x0005a448) bg_passive_tab_pane_g2_cp2

0x6828,	// (0x0005a463) bg_passive_tab_pane_g3_cp2

0x6831,	// (0x0005a46c) bg_active_tab_pane_g1_cp3

0x680d,	// (0x0005a448) bg_active_tab_pane_g2_cp3

0x683a,	// (0x0005a475) bg_active_tab_pane_g3_cp3

0x6831,	// (0x0005a46c) bg_passive_tab_pane_g1_cp3

0x680d,	// (0x0005a448) bg_passive_tab_pane_g2_cp3

0x683a,	// (0x0005a475) bg_passive_tab_pane_g3_cp3

0x6843,	// (0x0005a47e) bg_active_tab_pane_g1_cp4

0x680d,	// (0x0005a448) bg_active_tab_pane_g2_cp4

0x684e,	// (0x0005a489) bg_active_tab_pane_g3_cp4

0x6843,	// (0x0005a47e) bg_passive_tab_pane_g1_cp4

0x680d,	// (0x0005a448) bg_passive_tab_pane_g2_cp4

0x684e,	// (0x0005a489) bg_passive_tab_pane_g3_cp4

0x699a,	// (0x0005a5d5) bg_active_tab_pane_g1_cp5

0x680d,	// (0x0005a448) bg_active_tab_pane_g2_cp5

0x69a3,	// (0x0005a5de) bg_active_tab_pane_g3_cp5

0x699a,	// (0x0005a5d5) bg_passive_tab_pane_g1_cp5

0x680d,	// (0x0005a448) bg_passive_tab_pane_g2_cp5

0x69a3,	// (0x0005a5de) bg_passive_tab_pane_g3_cp5

0x69ac,	// (0x0005a5e7) list_set_graphic_pane_ParamLimits

0x69ac,	// (0x0005a5e7) list_set_graphic_pane

0xeb8f,	// (0x000627ca) bg_set_opt_pane_cp4

0x363f,	// (0x0005727a) list_set_graphic_pane_g1_ParamLimits

0x363f,	// (0x0005727a) list_set_graphic_pane_g1

0x364b,	// (0x00057286) list_set_graphic_pane_g2_ParamLimits

0x364b,	// (0x00057286) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00063389) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00063389) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x00063721) volume_small_pane_cp_g

0x69ca,	// (0x0005a605) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x69ca,	// (0x0005a605) list_double2_large_graphic_pane_g1_cp2

0x366d,	// (0x000572a8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x366d,	// (0x000572a8) list_double2_large_graphic_pane_g2_cp2

0x367e,	// (0x000572b9) list_double2_large_graphic_pane_g3_cp2

0x3686,	// (0x000572c1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3686,	// (0x000572c1) list_double2_large_graphic_pane_t1_cp2

0x369c,	// (0x000572d7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x369c,	// (0x000572d7) list_double2_large_graphic_pane_t2_cp2

0xa401,	// (0x0005e03c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa401,	// (0x0005e03c) list_double_large_graphic_pane_g1_cp2

0xa412,	// (0x0005e04d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa412,	// (0x0005e04d) list_double_large_graphic_pane_g2_cp2

0x6b19,	// (0x0005a754) list_double_large_graphic_pane_g3_cp2

0xa423,	// (0x0005e05e) list_double_large_graphic_pane_g4_cp

0xa42b,	// (0x0005e066) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa42b,	// (0x0005e066) list_double_large_graphic_pane_t1_cp2

0xa442,	// (0x0005e07d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa442,	// (0x0005e07d) list_double_large_graphic_pane_t2_cp2

0x6a17,	// (0x0005a652) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6a17,	// (0x0005a652) list_double2_graphic_pane_g1_cp2

0x6a25,	// (0x0005a660) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6a25,	// (0x0005a660) list_double2_graphic_pane_g2_cp2

0x6a36,	// (0x0005a671) list_double2_graphic_pane_g3_cp2

0x6a40,	// (0x0005a67b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x6a40,	// (0x0005a67b) list_double2_graphic_pane_t1_cp2

0x6a56,	// (0x0005a691) list_double2_graphic_pane_t2_cp2_ParamLimits

0x6a56,	// (0x0005a691) list_double2_graphic_pane_t2_cp2

0x139c,	// (0x00054fd7) list_single_number_heading_pane_g1_cp2_ParamLimits

0x139c,	// (0x00054fd7) list_single_number_heading_pane_g1_cp2

0x6a68,	// (0x0005a6a3) list_single_number_heading_pane_g2_cp2

0x6a70,	// (0x0005a6ab) list_single_number_heading_pane_t1_cp2_ParamLimits

0x6a70,	// (0x0005a6ab) list_single_number_heading_pane_t1_cp2

0x6a86,	// (0x0005a6c1) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6a86,	// (0x0005a6c1) list_single_number_heading_pane_t2_cp2

0x6a98,	// (0x0005a6d3) list_single_number_heading_pane_t3_cp2_ParamLimits

0x6a98,	// (0x0005a6d3) list_single_number_heading_pane_t3_cp2

0x139c,	// (0x00054fd7) list_single_heading_pane_g1_cp2_ParamLimits

0x139c,	// (0x00054fd7) list_single_heading_pane_g1_cp2

0x6a68,	// (0x0005a6a3) list_single_heading_pane_g2_cp2

0x6a70,	// (0x0005a6ab) list_single_heading_pane_t1_cp2_ParamLimits

0x6a70,	// (0x0005a6ab) list_single_heading_pane_t1_cp2

0xa20b,	// (0x0005de46) list_single_heading_pane_t2_cp2_ParamLimits

0xa20b,	// (0x0005de46) list_single_heading_pane_t2_cp2

0xa153,	// (0x0005dd8e) list_double_graphic_pane_g1_cp2_ParamLimits

0xa153,	// (0x0005dd8e) list_double_graphic_pane_g1_cp2

0xa15f,	// (0x0005dd9a) list_double_graphic_pane_g2_cp2_ParamLimits

0xa15f,	// (0x0005dd9a) list_double_graphic_pane_g2_cp2

0xa16e,	// (0x0005dda9) list_double_graphic_pane_g3_cp2

0xa176,	// (0x0005ddb1) list_double_graphic_pane_t1_cp2_ParamLimits

0xa176,	// (0x0005ddb1) list_double_graphic_pane_t1_cp2

0xa18c,	// (0x0005ddc7) list_double_graphic_pane_t2_cp2_ParamLimits

0xa18c,	// (0x0005ddc7) list_double_graphic_pane_t2_cp2

0x6b0d,	// (0x0005a748) list_double_number_pane_g1_cp2_ParamLimits

0x6b0d,	// (0x0005a748) list_double_number_pane_g1_cp2

0x6b19,	// (0x0005a754) list_double_number_pane_g2_cp2

0xa117,	// (0x0005dd52) list_double_number_pane_t1_cp2_ParamLimits

0xa117,	// (0x0005dd52) list_double_number_pane_t1_cp2

0xa12b,	// (0x0005dd66) list_double_number_pane_t2_cp2_ParamLimits

0xa12b,	// (0x0005dd66) list_double_number_pane_t2_cp2

0xa141,	// (0x0005dd7c) list_double_number_pane_t3_cp2_ParamLimits

0xa141,	// (0x0005dd7c) list_double_number_pane_t3_cp2

0xa000,	// (0x0005dc3b) list_single_graphic_pane_g1_cp2_ParamLimits

0xa000,	// (0x0005dc3b) list_single_graphic_pane_g1_cp2

0x6b71,	// (0x0005a7ac) list_single_graphic_pane_g2_cp2_ParamLimits

0x6b71,	// (0x0005a7ac) list_single_graphic_pane_g2_cp2

0x8a0d,	// (0x0005c648) list_single_graphic_pane_g3_cp2

0x9fd6,	// (0x0005dc11) list_single_graphic_pane_t1_cp2_ParamLimits

0x9fd6,	// (0x0005dc11) list_single_graphic_pane_t1_cp2

0x6b71,	// (0x0005a7ac) list_single_number_pane_g1_cp2_ParamLimits

0x6b71,	// (0x0005a7ac) list_single_number_pane_g1_cp2

0x8a0d,	// (0x0005c648) list_single_number_pane_g2_cp2

0x9fd6,	// (0x0005dc11) list_single_number_pane_t1_cp2_ParamLimits

0x9fd6,	// (0x0005dc11) list_single_number_pane_t1_cp2

0x9fec,	// (0x0005dc27) list_single_number_pane_t2_cp2_ParamLimits

0x9fec,	// (0x0005dc27) list_single_number_pane_t2_cp2

0x366d,	// (0x000572a8) list_double2_pane_g1_cp2_ParamLimits

0x366d,	// (0x000572a8) list_double2_pane_g1_cp2

0x367e,	// (0x000572b9) list_double2_pane_g2_cp2

0x6ae5,	// (0x0005a720) list_double2_pane_t1_cp2_ParamLimits

0x6ae5,	// (0x0005a720) list_double2_pane_t1_cp2

0x6afb,	// (0x0005a736) list_double2_pane_t2_cp2_ParamLimits

0x6afb,	// (0x0005a736) list_double2_pane_t2_cp2

0x6b0d,	// (0x0005a748) list_double_pane_g1_cp2_ParamLimits

0x6b0d,	// (0x0005a748) list_double_pane_g1_cp2

0x6b19,	// (0x0005a754) list_double_pane_g2_cp2

0x6b21,	// (0x0005a75c) list_double_pane_t1_cp2_ParamLimits

0x6b21,	// (0x0005a75c) list_double_pane_t1_cp2

0x6b37,	// (0x0005a772) list_double_pane_t2_cp2_ParamLimits

0x6b37,	// (0x0005a772) list_double_pane_t2_cp2

0x6b61,	// (0x0005a79c) list_single_pane_cp2_g3

0x6b71,	// (0x0005a7ac) list_single_pane_g1_cp2_ParamLimits

0x6b71,	// (0x0005a7ac) list_single_pane_g1_cp2

0x8a0d,	// (0x0005c648) list_single_pane_g2_cp2

0x8a15,	// (0x0005c650) list_single_pane_t1_cp2_ParamLimits

0x8a15,	// (0x0005c650) list_single_pane_t1_cp2

0x8a2d,	// (0x0005c668) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a2d,	// (0x0005c668) list_single_large_graphic_pane_g1_cp2

0x8a39,	// (0x0005c674) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8a39,	// (0x0005c674) list_single_large_graphic_pane_g2_cp2

0x8a45,	// (0x0005c680) list_single_large_graphic_pane_g3_cp2

0x8a4d,	// (0x0005c688) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8a4d,	// (0x0005c688) list_single_large_graphic_pane_g4_cp1

0x8a67,	// (0x0005c6a2) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8a67,	// (0x0005c6a2) list_single_large_graphic_pane_t1_cp2

0x9fa2,	// (0x0005dbdd) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9fa2,	// (0x0005dbdd) list_single_graphic_heading_pane_g1_cp2

0x9f6f,	// (0x0005dbaa) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9f6f,	// (0x0005dbaa) list_single_graphic_heading_pane_g4_cp2

0x8a0d,	// (0x0005c648) list_single_graphic_heading_pane_g5_cp2

0x9fae,	// (0x0005dbe9) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9fae,	// (0x0005dbe9) list_single_graphic_heading_pane_t1_cp2

0x9fc4,	// (0x0005dbff) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9fc4,	// (0x0005dbff) list_single_graphic_heading_pane_t2_cp2

0x9f63,	// (0x0005db9e) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9f63,	// (0x0005db9e) list_single_2graphic_pane_g1_cp2

0x9f6f,	// (0x0005dbaa) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9f6f,	// (0x0005dbaa) list_single_2graphic_pane_g2_cp2

0x8a0d,	// (0x0005c648) list_single_2graphic_pane_g3_cp2

0x9f80,	// (0x0005dbbb) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9f80,	// (0x0005dbbb) list_single_2graphic_pane_g4_cp2

0x9f8c,	// (0x0005dbc7) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9f8c,	// (0x0005dbc7) list_single_2graphic_pane_t1_cp2

0xeb85,	// (0x000627c0) list_highlight_pane_g10_cp1

0x9b4b,	// (0x0005d786) list_highlight_pane_g1_cp1

0x9b53,	// (0x0005d78e) list_highlight_pane_g2_cp1

0x9b5b,	// (0x0005d796) list_highlight_pane_g3_cp1

0x9b63,	// (0x0005d79e) list_highlight_pane_g4_cp1

0x9b6b,	// (0x0005d7a6) list_highlight_pane_g5_cp1

0x9b73,	// (0x0005d7ae) list_highlight_pane_g6_cp1

0x9b7b,	// (0x0005d7b6) list_highlight_pane_g7_cp1

0x9b83,	// (0x0005d7be) list_highlight_pane_g8_cp1

0x9b8b,	// (0x0005d7c6) list_highlight_pane_g9_cp1

0x9a73,	// (0x0005d6ae) form_field_slider_pane_t3

0x9a81,	// (0x0005d6bc) form_field_slider_pane_t4

0x9a8f,	// (0x0005d6ca) slider_form_pane_ParamLimits

0x9a8f,	// (0x0005d6ca) slider_form_pane

0xeb8f,	// (0x000627ca) control_abbreviations

0xeb8f,	// (0x000627ca) control_conventions

0xeb8f,	// (0x000627ca) control_definitions

0xeb8f,	// (0x000627ca) format_table_attribute

0xa255,	// (0x0005de90) bg_popup_preview_window_pane_g9

0xeb8f,	// (0x000627ca) format_table_data2

0xeb8f,	// (0x000627ca) format_table_data3

0xeb8f,	// (0x000627ca) format_table_data_example

0x0008,

0xeb8f,	// (0x000627ca) intro_purpose

0xf8ea,	// (0x00063525) bg_popup_preview_window_pane_g

0xeb8f,	// (0x000627ca) texts_category

0xeb8f,	// (0x000627ca) texts_graphics

0x8a7d,	// (0x0005c6b8) text_digital

0x8a8c,	// (0x0005c6c7) text_primary

0x8a9b,	// (0x0005c6d6) text_primary_small

0x8aaa,	// (0x0005c6e5) text_secondary

0x8ab9,	// (0x0005c6f4) text_title

0xab4a,	// (0x0005e785) bg_passive_tab_pane_g1_cp3_srt

0x680d,	// (0x0005a448) bg_passive_tab_pane_g2_cp3_srt

0xab53,	// (0x0005e78e) bg_passive_tab_pane_g3_cp3_srt

0xebdd,	// (0x00062818) bg_active_tab_pane_cp3_srt_ParamLimits

0xebdd,	// (0x00062818) bg_active_tab_pane_cp3_srt

0xab5c,	// (0x0005e797) tabs_4_active_pane_srt_g1

0xab64,	// (0x0005e79f) tabs_4_active_pane_srt_t1_ParamLimits

0xab64,	// (0x0005e79f) tabs_4_active_pane_srt_t1

0xab4a,	// (0x0005e785) bg_active_tab_pane_g1_cp3_copy1

0x680d,	// (0x0005a448) bg_active_tab_pane_g2_cp3_copy1

0xab53,	// (0x0005e78e) bg_active_tab_pane_g3_cp3_copy1

0xebdd,	// (0x00062818) tabs_2_long_active_pane_srt_ParamLimits

0xebdd,	// (0x00062818) tabs_2_long_active_pane_srt

0xebdd,	// (0x00062818) tabs_2_long_passive_pane_srt_ParamLimits

0xebdd,	// (0x00062818) tabs_2_long_passive_pane_srt

0x62d6,	// (0x00059f11) bg_passive_tab_pane_cp4_srt_ParamLimits

0x62d6,	// (0x00059f11) bg_passive_tab_pane_cp4_srt

0xa676,	// (0x0005e2b1) bg_passive_tab_pane_g1_cp4_srt

0x680d,	// (0x0005a448) bg_passive_tab_pane_g2_cp4_srt

0xa67f,	// (0x0005e2ba) bg_passive_tab_pane_g3_cp4_srt

0x21da,	// (0x00055e15) bg_active_tab_pane_cp4_srt_ParamLimits

0x21da,	// (0x00055e15) bg_active_tab_pane_cp4_srt

0xa688,	// (0x0005e2c3) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa688,	// (0x0005e2c3) tabs_2_long_active_pane_srt_t1

0xa676,	// (0x0005e2b1) bg_active_tab_pane_g1_cp4_srt

0x680d,	// (0x0005a448) bg_active_tab_pane_g2_cp4_srt

0xa67f,	// (0x0005e2ba) bg_active_tab_pane_g3_cp4_srt

0xed07,	// (0x00062942) tabs_3_long_active_pane_srt_ParamLimits

0xed07,	// (0x00062942) tabs_3_long_active_pane_srt

0xed07,	// (0x00062942) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xed07,	// (0x00062942) tabs_3_long_passive_pane_cp_srt

0xed07,	// (0x00062942) tabs_3_long_passive_pane_srt_ParamLimits

0xed07,	// (0x00062942) tabs_3_long_passive_pane_srt

0x62d6,	// (0x00059f11) bg_passive_tab_pane_cp5_srt_ParamLimits

0x62d6,	// (0x00059f11) bg_passive_tab_pane_cp5_srt

0x699a,	// (0x0005a5d5) bg_passive_tab_pane_g1_cp5_srt

0x680d,	// (0x0005a448) bg_passive_tab_pane_g2_cp5_srt

0x69a3,	// (0x0005a5de) bg_passive_tab_pane_g3_cp5_srt

0x21da,	// (0x00055e15) bg_active_tab_pane_cp5_srt_ParamLimits

0x21da,	// (0x00055e15) bg_active_tab_pane_cp5_srt

0xa664,	// (0x0005e29f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa664,	// (0x0005e29f) tabs_3_long_active_pane_srt_t1

0x699a,	// (0x0005a5d5) bg_active_tab_pane_g1_cp5_srt

0x680d,	// (0x0005a448) bg_active_tab_pane_g2_cp5_srt

0x69a3,	// (0x0005a5de) bg_active_tab_pane_g3_cp5_srt

0xa656,	// (0x0005e291) navi_text_pane_srt_t1

0xa64e,	// (0x0005e289) navi_icon_pane_srt_g1

0x8c8a,	// (0x0005c8c5) midp_editing_number_pane_srt

0x8ac8,	// (0x0005c703) midp_ticker_pane_srt

0x8c92,	// (0x0005c8cd) midp_ticker_pane_srt_g1

0x8c9a,	// (0x0005c8d5) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x000633a8) midp_ticker_pane_srt_g

0x8ca2,	// (0x0005c8dd) midp_ticker_pane_srt_t1

0xa63f,	// (0x0005e27a) midp_editing_number_pane_t1_copy1

0x8ad0,	// (0x0005c70b) listscroll_midp_pane

0x8ad0,	// (0x0005c70b) midp_form_pane

0x8b42,	// (0x0005c77d) midp_info_popup_window_ParamLimits

0x8b42,	// (0x0005c77d) midp_info_popup_window

0xf208,	// (0x00062e43) bg_popup_sub_pane_cp50_ParamLimits

0xf208,	// (0x00062e43) bg_popup_sub_pane_cp50

0x9793,	// (0x0005d3ce) listscroll_midp_info_pane_ParamLimits

0x9793,	// (0x0005d3ce) listscroll_midp_info_pane

0x9773,	// (0x0005d3ae) listscroll_form_midp_pane_ParamLimits

0x9773,	// (0x0005d3ae) listscroll_form_midp_pane

0x977f,	// (0x0005d3ba) scroll_bar_cp050

0x9753,	// (0x0005d38e) list_midp_pane

0xb580,	// (0x0005f1bb) signal_pane_g2_cp

0x968d,	// (0x0005d2c8) listscroll_midp_info_pane_t1_ParamLimits

0x968d,	// (0x0005d2c8) listscroll_midp_info_pane_t1

0x96a5,	// (0x0005d2e0) listscroll_midp_info_pane_t2_ParamLimits

0x96a5,	// (0x0005d2e0) listscroll_midp_info_pane_t2

0x96e3,	// (0x0005d31e) listscroll_midp_info_pane_t3_ParamLimits

0x96e3,	// (0x0005d31e) listscroll_midp_info_pane_t3

0x971d,	// (0x0005d358) listscroll_midp_info_pane_t4_ParamLimits

0x971d,	// (0x0005d358) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x00063460) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x00063460) listscroll_midp_info_pane_t

0xf27e,	// (0x00062eb9) scroll_pane_cp21

0x962d,	// (0x0005d268) form_midp_field_choice_group_pane

0x9636,	// (0x0005d271) form_midp_field_text_pane

0x9673,	// (0x0005d2ae) form_midp_field_time_pane

0x967b,	// (0x0005d2b6) form_midp_gauge_slider_pane

0x9684,	// (0x0005d2bf) form_midp_gauge_wait_pane

0xeb8f,	// (0x000627ca) form_midp_image_pane

0x74a5,	// (0x0005b0e0) list_single_midp_pane_ParamLimits

0x74a5,	// (0x0005b0e0) list_single_midp_pane

0x95e2,	// (0x0005d21d) form_midp_field_text_pane_t1

0x93ac,	// (0x0005cfe7) input_focus_pane_cp050

0x961c,	// (0x0005d257) list_midp_form_text_pane

0x95b1,	// (0x0005d1ec) form_midp_field_choice_group_pane_t1

0x95bf,	// (0x0005d1fa) input_focus_pane_cp051

0x95d3,	// (0x0005d20e) list_midp_choice_pane

0xeb8f,	// (0x000627ca) status_idle_pane

0x9595,	// (0x0005d1d0) form_midp_field_time_pane_t1

0xeb85,	// (0x000627c0) wait_anim_pane_g2_copy1

0x95a3,	// (0x0005d1de) form_midp_field_time_pane_t2

0x0001,

0x8bf2,	// (0x0005c82d) aid_navinavi_width_2_pane

0xf820,	// (0x0006345b) form_midp_field_time_pane_t

0xeb8f,	// (0x000627ca) input_focus_pane_cp052

0xeb8f,	// (0x000627ca) bg_input_focus_pane_cp040

0x9555,	// (0x0005d190) form_midp_gauge_slider_pane_t1

0x9563,	// (0x0005d19e) form_midp_gauge_slider_pane_t2

0x9571,	// (0x0005d1ac) form_midp_gauge_slider_pane_t3

0x957f,	// (0x0005d1ba) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x00063452) form_midp_gauge_slider_pane_t

0x958d,	// (0x0005d1c8) form_midp_slider_pane

0xebdd,	// (0x00062818) bg_input_focus_pane_cp041_ParamLimits

0xebdd,	// (0x00062818) bg_input_focus_pane_cp041

0x9522,	// (0x0005d15d) form_midp_gauge_wait_pane_t1_ParamLimits

0x9522,	// (0x0005d15d) form_midp_gauge_wait_pane_t1

0x9534,	// (0x0005d16f) form_midp_gauge_wait_pane_t2_ParamLimits

0x9534,	// (0x0005d16f) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0006344d) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0006344d) form_midp_gauge_wait_pane_t

0x9546,	// (0x0005d181) form_midp_wait_pane_ParamLimits

0x9546,	// (0x0005d181) form_midp_wait_pane

0x94ec,	// (0x0005d127) form_midp_image_pane_g1

0x94f5,	// (0x0005d130) form_midp_image_pane_t1

0x9504,	// (0x0005d13f) form_midp_image_pane_t2

0x9513,	// (0x0005d14e) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x00063446) form_midp_image_pane_t

0x94e3,	// (0x0005d11e) list_single_midp_pane_g1

0x41f3,	// (0x00057e2e) list_single_midp_pane_t1

0x94ba,	// (0x0005d0f5) list_midp_form_item_pane_ParamLimits

0x94ba,	// (0x0005d0f5) list_midp_form_item_pane

0x8b9a,	// (0x0005c7d5) list_midp_form_item_pane_t1

0x8ba9,	// (0x0005c7e4) midp_ticker_pane_g1

0x8bb5,	// (0x0005c7f0) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0006338e) midp_ticker_pane_g

0x8bc1,	// (0x0005c7fc) midp_ticker_pane_t1

0xaa8f,	// (0x0005e6ca) midp_editing_number_pane_t1

0xa86a,	// (0x0005e4a5) midp_editing_number_pane

0xa879,	// (0x0005e4b4) midp_ticker_pane

0xa62f,	// (0x0005e26a) ai_message_heading_pane

0xeb8f,	// (0x000627ca) bg_popup_window_pane_cp14

0xa637,	// (0x0005e272) listscroll_ai_message_pane

0xa5b9,	// (0x0005e1f4) ai_message_heading_pane_g1_ParamLimits

0xa5b9,	// (0x0005e1f4) ai_message_heading_pane_g1

0xa5c5,	// (0x0005e200) ai_message_heading_pane_g2_ParamLimits

0xa5c5,	// (0x0005e200) ai_message_heading_pane_g2

0xa5d1,	// (0x0005e20c) ai_message_heading_pane_g3_ParamLimits

0xa5d1,	// (0x0005e20c) ai_message_heading_pane_g3

0xa5dd,	// (0x0005e218) ai_message_heading_pane_g4_ParamLimits

0xa5dd,	// (0x0005e218) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x00063587) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x00063587) ai_message_heading_pane_g

0xa5e9,	// (0x0005e224) ai_message_heading_pane_t1_ParamLimits

0xa5e9,	// (0x0005e224) ai_message_heading_pane_t1

0xa603,	// (0x0005e23e) ai_message_heading_pane_t2_ParamLimits

0xa603,	// (0x0005e23e) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x00063590) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x00063590) ai_message_heading_pane_t

0xa615,	// (0x0005e250) bg_popup_heading_pane_cp1_ParamLimits

0xa615,	// (0x0005e250) bg_popup_heading_pane_cp1

0xa5a7,	// (0x0005e1e2) list_ai_message_pane_ParamLimits

0xa5a7,	// (0x0005e1e2) list_ai_message_pane

0xf27e,	// (0x00062eb9) scroll_pane_cp10

0xa543,	// (0x0005e17e) list_ai_message_pane_g1

0xa54b,	// (0x0005e186) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x00063564) list_ai_message_pane_g

0xa553,	// (0x0005e18e) list_ai_message_pane_t1_ParamLimits

0xa553,	// (0x0005e18e) list_ai_message_pane_t1

0xa568,	// (0x0005e1a3) list_ai_message_pane_t2_ParamLimits

0xa568,	// (0x0005e1a3) list_ai_message_pane_t2

0xa57d,	// (0x0005e1b8) list_ai_message_pane_t3_ParamLimits

0xa57d,	// (0x0005e1b8) list_ai_message_pane_t3

0xa592,	// (0x0005e1cd) list_ai_message_pane_t4_ParamLimits

0xa592,	// (0x0005e1cd) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x00063569) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x00063569) list_ai_message_pane_t

0xa52e,	// (0x0005e169) cell_ai_soft_ind_pane_ParamLimits

0xa52e,	// (0x0005e169) cell_ai_soft_ind_pane

0x8bd3,	// (0x0005c80e) cell_ai_soft_ind_pane_g1_ParamLimits

0x8bd3,	// (0x0005c80e) cell_ai_soft_ind_pane_g1

0xeb8f,	// (0x000627ca) grid_highlight_cp1

0x8be0,	// (0x0005c81b) text_secondary_cp56_ParamLimits

0x8be0,	// (0x0005c81b) text_secondary_cp56

0xa503,	// (0x0005e13e) example_general_pane_ParamLimits

0xa503,	// (0x0005e13e) example_general_pane

0xa50f,	// (0x0005e14a) example_parent_pane_g1_ParamLimits

0xa50f,	// (0x0005e14a) example_parent_pane_g1

0xa51b,	// (0x0005e156) example_parent_pane_t1_ParamLimits

0xa51b,	// (0x0005e156) example_parent_pane_t1

0x7139,	// (0x0005ad74) popup_preview_text_window_ParamLimits

0x7139,	// (0x0005ad74) popup_preview_text_window

0x6b69,	// (0x0005a7a4) list_single_pane_cp2_g4

0xedbd,	// (0x000629f8) bg_popup_preview_window_pane_ParamLimits

0xedbd,	// (0x000629f8) bg_popup_preview_window_pane

0xa25d,	// (0x0005de98) popup_preview_text_window_t1_ParamLimits

0xa25d,	// (0x0005de98) popup_preview_text_window_t1

0xa27b,	// (0x0005deb6) popup_preview_text_window_t2_ParamLimits

0xa27b,	// (0x0005deb6) popup_preview_text_window_t2

0xa2c4,	// (0x0005deff) popup_preview_text_window_t3_ParamLimits

0xa2c4,	// (0x0005deff) popup_preview_text_window_t3

0xa309,	// (0x0005df44) popup_preview_text_window_t4_ParamLimits

0xa309,	// (0x0005df44) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x00063538) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x00063538) popup_preview_text_window_t

0xa387,	// (0x0005dfc2) scroll_pane_cp11

0x9320,	// (0x0005cf5b) bg_popup_preview_window_pane_g1

0xa21d,	// (0x0005de58) bg_popup_preview_window_pane_g2

0xa225,	// (0x0005de60) bg_popup_preview_window_pane_g3

0xa22d,	// (0x0005de68) bg_popup_preview_window_pane_g4

0xa235,	// (0x0005de70) bg_popup_preview_window_pane_g5

0xa23d,	// (0x0005de78) bg_popup_preview_window_pane_g6

0xa245,	// (0x0005de80) bg_popup_preview_window_pane_g7

0xa24d,	// (0x0005de88) bg_popup_preview_window_pane_g8

0x5273,	// (0x00058eae) aid_popup_width_pane

0x7117,	// (0x0005ad52) popup_midp_note_alarm_window_ParamLimits

0x7117,	// (0x0005ad52) popup_midp_note_alarm_window

0xef91,	// (0x00062bcc) data_form_pane_ParamLimits

0x610f,	// (0x00059d4a) form_field_data_pane_g1

0x6119,	// (0x00059d54) form_field_data_pane_t1_ParamLimits

0xef9d,	// (0x00062bd8) input_focus_pane_ParamLimits

0x34ad,	// (0x000570e8) data_form_wide_pane_ParamLimits

0x34be,	// (0x000570f9) form_field_data_wide_pane_g1

0x34ca,	// (0x00057105) form_field_data_wide_pane_t1_ParamLimits

0xee91,	// (0x00062acc) input_focus_pane_cp6_ParamLimits

0x627a,	// (0x00059eb5) input_popup_find_pane_g1_ParamLimits

0x627a,	// (0x00059eb5) input_popup_find_pane_g1

0x640c,	// (0x0005a047) aid_navi_side_left_pane

0x6421,	// (0x0005a05c) aid_navi_side_right_pane

0x9c46,	// (0x0005d881) bg_popup_window_pane_cp30_ParamLimits

0x9c46,	// (0x0005d881) bg_popup_window_pane_cp30

0x9cc0,	// (0x0005d8fb) popup_midp_note_alarm_window_g1_ParamLimits

0x9cc0,	// (0x0005d8fb) popup_midp_note_alarm_window_g1

0x9cf0,	// (0x0005d92b) popup_midp_note_alarm_window_t1_ParamLimits

0x9cf0,	// (0x0005d92b) popup_midp_note_alarm_window_t1

0x9d91,	// (0x0005d9cc) popup_midp_note_alarm_window_t2_ParamLimits

0x9d91,	// (0x0005d9cc) popup_midp_note_alarm_window_t2

0x9e3f,	// (0x0005da7a) popup_midp_note_alarm_window_t3_ParamLimits

0x9e3f,	// (0x0005da7a) popup_midp_note_alarm_window_t3

0x9e67,	// (0x0005daa2) popup_midp_note_alarm_window_t4_ParamLimits

0x9e67,	// (0x0005daa2) popup_midp_note_alarm_window_t4

0x9e87,	// (0x0005dac2) popup_midp_note_alarm_window_t5_ParamLimits

0x9e87,	// (0x0005dac2) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x000634d5) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x000634d5) popup_midp_note_alarm_window_t

0x9f33,	// (0x0005db6e) wait_bar_pane_cp1_ParamLimits

0x9f33,	// (0x0005db6e) wait_bar_pane_cp1

0xeb8f,	// (0x000627ca) wait_anim_pane_copy1

0xeb8f,	// (0x000627ca) wait_border_pane_copy1

0x993c,	// (0x0005d577) wait_border_pane_g1_copy1

0x34e4,	// (0x0005711f) form_field_popup_pane_g1

0x6131,	// (0x00059d6c) form_field_popup_pane_t1_ParamLimits

0xef9d,	// (0x00062bd8) input_focus_pane_cp7_ParamLimits

0xf18d,	// (0x00062dc8) list_form_pane_ParamLimits

0x34ec,	// (0x00057127) form_field_popup_wide_pane_g1

0x34f4,	// (0x0005712f) form_field_popup_wide_pane_t1_ParamLimits

0xef9d,	// (0x00062bd8) input_focus_pane_cp8_ParamLimits

0xf199,	// (0x00062dd4) list_form_wide_pane_ParamLimits

0xabde,	// (0x0005e819) aid_size_cell_graphic_pane

0x61ac,	// (0x00059de7) data_form_pane_t1_ParamLimits

0x7717,	// (0x0005b352) data_form_wide_pane_t1_ParamLimits

0x8eea,	// (0x0005cb25) bg_status_flat_pane

0x567c,	// (0x000592b7) title_pane_t1_ParamLimits

0xeba5,	// (0x000627e0) title_pane_t2_ParamLimits

0xebcb,	// (0x00062806) title_pane_t3_ParamLimits

0xf557,	// (0x00063192) title_pane_t_ParamLimits

0xf527,	// (0x00063162) level_1_signal_ParamLimits

0xf534,	// (0x0006316f) level_2_signal_ParamLimits

0xf541,	// (0x0006317c) level_3_signal_ParamLimits

0x12a1,	// (0x00054edc) level_4_signal_ParamLimits

0x12ae,	// (0x00054ee9) level_5_signal_ParamLimits

0x12bb,	// (0x00054ef6) level_6_signal_ParamLimits

0x12c8,	// (0x00054f03) level_7_signal_ParamLimits

0xf527,	// (0x00063162) level_1_battery_ParamLimits

0xf534,	// (0x0006316f) level_2_battery_ParamLimits

0xf541,	// (0x0006317c) level_3_battery_ParamLimits

0x12a1,	// (0x00054edc) level_4_battery_ParamLimits

0x12ae,	// (0x00054ee9) level_5_battery_ParamLimits

0x12bb,	// (0x00054ef6) level_6_battery_ParamLimits

0x12c8,	// (0x00054f03) level_7_battery_ParamLimits

0x9b4b,	// (0x0005d786) bg_status_flat_pane_g1

0x9b53,	// (0x0005d78e) bg_status_flat_pane_g2

0x9b5b,	// (0x0005d796) bg_status_flat_pane_g3

0x9b63,	// (0x0005d79e) bg_status_flat_pane_g4

0x9b6b,	// (0x0005d7a6) bg_status_flat_pane_g5

0x9b73,	// (0x0005d7ae) bg_status_flat_pane_g6

0x9b7b,	// (0x0005d7b6) bg_status_flat_pane_g7

0x56ec,	// (0x00059327) tabs_3_active_pane_t1_ParamLimits

0x56ec,	// (0x00059327) tabs_3_passive_pane_t1_ParamLimits

0x5706,	// (0x00059341) tabs_4_active_pane_t1_ParamLimits

0x5706,	// (0x00059341) tabs_4_1_passive_pane_t1_ParamLimits

0x62b1,	// (0x00059eec) tabs_2_active_pane_t1_ParamLimits

0x62b1,	// (0x00059eec) tabs_2_passive_pane_t1_ParamLimits

0x21da,	// (0x00055e15) bg_active_tab_pane_cp4_ParamLimits

0x62c3,	// (0x00059efe) tabs_2_long_active_pane_t1_ParamLimits

0x62d6,	// (0x00059f11) bg_passive_tab_pane_cp4_ParamLimits

0x73f2,	// (0x0005b02d) list_single_midp_graphic_pane_t1_ParamLimits

0x21da,	// (0x00055e15) bg_active_tab_pane_cp5_ParamLimits

0x62e2,	// (0x00059f1d) tabs_3_long_active_pane_t1_ParamLimits

0x62d6,	// (0x00059f11) bg_passive_tab_pane_cp5_ParamLimits

0x73f2,	// (0x0005b02d) list_single_midp_graphic_pane_t1

0x8eea,	// (0x0005cb25) bg_status_flat_pane_ParamLimits

0x8fb3,	// (0x0005cbee) indicator_pane_cp2_ParamLimits

0x8fb3,	// (0x0005cbee) indicator_pane_cp2

0x90de,	// (0x0005cd19) navi_pane_srt_ParamLimits

0x90de,	// (0x0005cd19) navi_pane_srt

0x9102,	// (0x0005cd3d) popup_clock_digital_analogue_window_cp1

0xec21,	// (0x0006285c) indicator_pane_t1

0x8ac8,	// (0x0005c703) copy_highlight_pane

0x8ac8,	// (0x0005c703) cursor_graphics_pane

0x8ac8,	// (0x0005c703) graphic_within_text_pane

0x8ac8,	// (0x0005c703) link_highlight_pane

0xa34a,	// (0x0005df85) popup_preview_text_window_t5_ParamLimits

0xa34a,	// (0x0005df85) popup_preview_text_window_t5

0x8bfa,	// (0x0005c835) cursor_digital_pane

0x8bfa,	// (0x0005c835) cursor_primary_pane

0x8c0b,	// (0x0005c846) cursor_primary_small_pane

0x8c13,	// (0x0005c84e) cursor_secondary_pane

0x8c1b,	// (0x0005c856) cursor_title_pane

0x8bfa,	// (0x0005c835) link_highlight_digital_pane

0x8c02,	// (0x0005c83d) link_highlight_primary_pane

0x8c0b,	// (0x0005c846) link_highlight_primary_small_pane

0x8c13,	// (0x0005c84e) link_highlight_secondary_pane

0x8c1b,	// (0x0005c856) link_highlight_title_pane

0x8bfa,	// (0x0005c835) copy_highlight_digital_pane

0x8bfa,	// (0x0005c835) copy_highlight_primary_pane

0x8c0b,	// (0x0005c846) copy_highlight_primary_small_pane

0x8c13,	// (0x0005c84e) copy_highlight_secondary_pane

0x8c1b,	// (0x0005c856) copy_highlight_title_pane

0x8c13,	// (0x0005c84e) graphic_text_digital_pane

0x9be9,	// (0x0005d824) graphic_text_primary_pane

0x9bf2,	// (0x0005d82d) graphic_text_primary_small_pane

0x8c0b,	// (0x0005c846) graphic_text_secondary_pane

0x8bfa,	// (0x0005c835) graphic_text_title_pane

0x8c23,	// (0x0005c85e) cursor_primary_pane_g1

0x9bdb,	// (0x0005d816) cursor_text_primary_t1

0x9bc3,	// (0x0005d7fe) cursor_primary_small_pane_g1

0x9bcd,	// (0x0005d808) cursor_text_primary_small_t1

0x9bab,	// (0x0005d7e6) cursor_primary_small_pane_g1_copy1

0x9bb5,	// (0x0005d7f0) cursor_text_primary_small_t1_copy1

0x9b93,	// (0x0005d7ce) cursor_text_title_t1

0x9ba1,	// (0x0005d7dc) cursor_title_pane_g1

0x8c23,	// (0x0005c85e) cursor_digital_pane_g1

0x8c2d,	// (0x0005c868) cursor_text_digital_t1

0x8c3b,	// (0x0005c876) link_highlight_primary_pane_g1

0x9b3c,	// (0x0005d777) link_highlight_primary_pane_t1

0x8c3b,	// (0x0005c876) link_highlight_primary_small_pane_g1

0x8c43,	// (0x0005c87e) link_highlight_primary_small_pane_t1

0x8c3b,	// (0x0005c876) link_highlight_secondary_pane_g1

0x8c52,	// (0x0005c88d) link_highlight_secondary_pane_t1

0x9aa1,	// (0x0005d6dc) link_highlight_title_pane_g1

0x9ab8,	// (0x0005d6f3) link_highlight_title_pane_t1

0x9aa1,	// (0x0005d6dc) link_highlight_digital_pane_g1

0x9aa9,	// (0x0005d6e4) link_highlight_digital_pane_t1

0x995b,	// (0x0005d596) copy_highlight_primary_pane_g1

0x9981,	// (0x0005d5bc) copy_highlight_primary_pane_t1

0x995b,	// (0x0005d596) copy_highlight_primary_small_pane_g1

0x9972,	// (0x0005d5ad) copy_highlight_primary_small_pane_t1

0x8c61,	// (0x0005c89c) copy_highlight_secondary_pane_g1

0x8c69,	// (0x0005c8a4) copy_highlight_secondary_pane_t1

0x995b,	// (0x0005d596) copy_highlight_title_pane_g1

0x9963,	// (0x0005d59e) copy_highlight_title_pane_t1

0x995b,	// (0x0005d596) copy_highlight_digital_pane_g1

0xadac,	// (0x0005e9e7) copy_highlight_digital_pane_t1

0xad00,	// (0x0005e93b) graphic_text_primary_pane_g1

0xad90,	// (0x0005e9cb) graphic_text_primary_pane_t1

0xad9e,	// (0x0005e9d9) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x00063604) graphic_text_primary_pane_t

0xad6c,	// (0x0005e9a7) graphic_text_primary_small_pane_g1

0xad74,	// (0x0005e9af) graphic_text_primary_small_pane_t1

0xad82,	// (0x0005e9bd) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x000635ff) graphic_text_primary_small_pane_t

0xad48,	// (0x0005e983) graphic_text_secondary_pane_g1

0xad50,	// (0x0005e98b) graphic_text_secondary_pane_t1

0xad5e,	// (0x0005e999) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x000635fa) graphic_text_secondary_pane_t

0xad24,	// (0x0005e95f) graphic_text_title_pane_g1

0xad2c,	// (0x0005e967) graphic_text_title_pane_t1

0xad3a,	// (0x0005e975) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x000635f5) graphic_text_title_pane_t

0xad00,	// (0x0005e93b) graphic_text_digital_pane_g1

0xad08,	// (0x0005e943) graphic_text_digital_pane_t1

0xad16,	// (0x0005e951) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x000635f0) graphic_text_digital_pane_t

0xebdd,	// (0x00062818) navi_icon_pane_srt_ParamLimits

0xebdd,	// (0x00062818) navi_icon_pane_srt

0xeb8f,	// (0x000627ca) navi_midp_pane_srt

0xeb8f,	// (0x000627ca) navi_navi_pane_srt

0xebdd,	// (0x00062818) navi_text_pane_srt_ParamLimits

0xebdd,	// (0x00062818) navi_text_pane_srt

0xaccb,	// (0x0005e906) navi_navi_icon_text_pane_srt

0xacd3,	// (0x0005e90e) navi_navi_pane_srt_g1_ParamLimits

0xacd3,	// (0x0005e90e) navi_navi_pane_srt_g1

0xace5,	// (0x0005e920) navi_navi_pane_srt_g2_ParamLimits

0xace5,	// (0x0005e920) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x000635eb) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x000635eb) navi_navi_pane_srt_g

0xacf7,	// (0x0005e932) navi_navi_tabs_pane_srt

0xaccb,	// (0x0005e906) navi_navi_text_pane_srt

0xaccb,	// (0x0005e906) navi_navi_volume_pane_srt

0xacbc,	// (0x0005e8f7) navi_navi_text_pane_srt_t1

0x7831,	// (0x0005b46c) navi_navi_volume_pane_srt_g1

0x7839,	// (0x0005b474) volume_small_pane_srt_ParamLimits

0x7839,	// (0x0005b474) volume_small_pane_srt

0x6b7d,	// (0x0005a7b8) volume_small_pane_srt_g1_ParamLimits

0x6b7d,	// (0x0005a7b8) volume_small_pane_srt_g1

0x6b8d,	// (0x0005a7c8) volume_small_pane_srt_g2_ParamLimits

0x6b8d,	// (0x0005a7c8) volume_small_pane_srt_g2

0x6b9e,	// (0x0005a7d9) volume_small_pane_srt_g3_ParamLimits

0x6b9e,	// (0x0005a7d9) volume_small_pane_srt_g3

0x6baf,	// (0x0005a7ea) volume_small_pane_srt_g4_ParamLimits

0x6baf,	// (0x0005a7ea) volume_small_pane_srt_g4

0x6bc0,	// (0x0005a7fb) volume_small_pane_srt_g5_ParamLimits

0x6bc0,	// (0x0005a7fb) volume_small_pane_srt_g5

0x6bd1,	// (0x0005a80c) volume_small_pane_srt_g6_ParamLimits

0x6bd1,	// (0x0005a80c) volume_small_pane_srt_g6

0x6be2,	// (0x0005a81d) volume_small_pane_srt_g7_ParamLimits

0x6be2,	// (0x0005a81d) volume_small_pane_srt_g7

0x6bf3,	// (0x0005a82e) volume_small_pane_srt_g8_ParamLimits

0x6bf3,	// (0x0005a82e) volume_small_pane_srt_g8

0x6c04,	// (0x0005a83f) volume_small_pane_srt_g9_ParamLimits

0x6c04,	// (0x0005a83f) volume_small_pane_srt_g9

0x6c15,	// (0x0005a850) volume_small_pane_srt_g10_ParamLimits

0x6c15,	// (0x0005a850) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00063393) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00063393) volume_small_pane_srt_g

0x592d,	// (0x00059568) query_popup_data_pane_cp2

0xaca2,	// (0x0005e8dd) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaca2,	// (0x0005e8dd) navi_navi_icon_text_pane_srt_t1

0x9be9,	// (0x0005d824) navi_tabs_2_long_pane_srt

0x9be9,	// (0x0005d824) navi_tabs_2_pane_srt

0x9be9,	// (0x0005d824) navi_tabs_3_long_pane_srt

0x9be9,	// (0x0005d824) navi_tabs_3_pane_srt

0x9be9,	// (0x0005d824) navi_tabs_4_pane_srt

0x7811,	// (0x0005b44c) tabs_2_active_pane_srt_ParamLimits

0x7811,	// (0x0005b44c) tabs_2_active_pane_srt

0x7821,	// (0x0005b45c) tabs_2_passive_pane_srt_ParamLimits

0x7821,	// (0x0005b45c) tabs_2_passive_pane_srt

0x8e13,	// (0x0005ca4e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8e13,	// (0x0005ca4e) bg_passive_tab_pane_cp1_srt

0xac6e,	// (0x0005e8a9) bg_passive_tab_pane_g1_cp1_srt

0x680d,	// (0x0005a448) bg_passive_tab_pane_g2_cp1_srt

0xac77,	// (0x0005e8b2) bg_passive_tab_pane_g3_cp1_srt

0xebdd,	// (0x00062818) bg_active_tab_pane_cp1_srt_ParamLimits

0xebdd,	// (0x00062818) bg_active_tab_pane_cp1_srt

0xac80,	// (0x0005e8bb) tabs_2_active_pane_srt_g1

0xac88,	// (0x0005e8c3) tabs_2_active_pane_srt_t1_ParamLimits

0xac88,	// (0x0005e8c3) tabs_2_active_pane_srt_t1

0xac6e,	// (0x0005e8a9) bg_active_tab_pane_g1_cp1_srt

0x680d,	// (0x0005a448) bg_active_tab_pane_g2_cp1_srt

0xac77,	// (0x0005e8b2) bg_active_tab_pane_g3_cp1_srt

0x77de,	// (0x0005b419) tabs_3_active_pane_srt_ParamLimits

0x77de,	// (0x0005b419) tabs_3_active_pane_srt

0x77ef,	// (0x0005b42a) tabs_3_passive_pane_cp_srt_ParamLimits

0x77ef,	// (0x0005b42a) tabs_3_passive_pane_cp_srt

0x7800,	// (0x0005b43b) tabs_3_passive_pane_srt_ParamLimits

0x7800,	// (0x0005b43b) tabs_3_passive_pane_srt

0x8e13,	// (0x0005ca4e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8e13,	// (0x0005ca4e) bg_passive_tab_pane_cp2_srt

0x8c78,	// (0x0005c8b3) bg_passive_tab_pane_g1_cp2_srt

0x680d,	// (0x0005a448) bg_passive_tab_pane_g2_cp2_srt

0x8c81,	// (0x0005c8bc) bg_passive_tab_pane_g3_cp2_srt

0xebdd,	// (0x00062818) bg_active_tab_pane_cp2_srt_ParamLimits

0xebdd,	// (0x00062818) bg_active_tab_pane_cp2_srt

0xac54,	// (0x0005e88f) tabs_3_active_pane_srt_g1

0xac5c,	// (0x0005e897) tabs_3_active_pane_srt_t1_ParamLimits

0xac5c,	// (0x0005e897) tabs_3_active_pane_srt_t1

0x8c78,	// (0x0005c8b3) bg_active_tab_pane_g1_cp2_srt

0x680d,	// (0x0005a448) bg_active_tab_pane_g2_cp2_srt

0x8c81,	// (0x0005c8bc) bg_active_tab_pane_g3_cp2_srt

0x7796,	// (0x0005b3d1) tabs_4_active_pane_srt_ParamLimits

0x7796,	// (0x0005b3d1) tabs_4_active_pane_srt

0x77a8,	// (0x0005b3e3) tabs_4_passive_pane_cp2_srt_ParamLimits

0x77a8,	// (0x0005b3e3) tabs_4_passive_pane_cp2_srt

0x6d84,	// (0x0005a9bf) aid_size_cell_toolbar

0x62d6,	// (0x00059f11) main_idle_act_pane_ParamLimits

0x6f49,	// (0x0005ab84) popup_large_graphic_colour_window_ParamLimits

0x72b4,	// (0x0005aeef) popup_toolbar_window_ParamLimits

0x72b4,	// (0x0005aeef) popup_toolbar_window

0xaa9e,	// (0x0005e6d9) list_single_graphic_2heading_pane_ParamLimits

0xaa9e,	// (0x0005e6d9) list_single_graphic_2heading_pane

0xf40f,	// (0x0006304a) aid_size_cell_apps_grid_lsc_pane

0xf421,	// (0x0006305c) aid_size_cell_apps_grid_prt_pane

0x8e13,	// (0x0005ca4e) bg_wml_button_pane_cp1_ParamLimits

0x8e13,	// (0x0005ca4e) bg_wml_button_pane_cp1

0x95e2,	// (0x0005d21d) form_midp_field_text_pane_t1_ParamLimits

0x93ac,	// (0x0005cfe7) input_focus_pane_cp050_ParamLimits

0x961c,	// (0x0005d257) list_midp_form_text_pane_ParamLimits

0x95bf,	// (0x0005d1fa) input_focus_pane_cp051_ParamLimits

0x95d3,	// (0x0005d20e) list_midp_choice_pane_ParamLimits

0x9462,	// (0x0005d09d) list_single_2graphic_pane_cp3_ParamLimits

0x9462,	// (0x0005d09d) list_single_2graphic_pane_cp3

0x9487,	// (0x0005d0c2) list_single_midp_graphic_pane_ParamLimits

0x9487,	// (0x0005d0c2) list_single_midp_graphic_pane

0x51e1,	// (0x00058e1c) list_single_graphic_2heading_pane_g1_ParamLimits

0x51e1,	// (0x00058e1c) list_single_graphic_2heading_pane_g1

0x51ed,	// (0x00058e28) list_single_graphic_2heading_pane_g4_ParamLimits

0x51ed,	// (0x00058e28) list_single_graphic_2heading_pane_g4

0x51f9,	// (0x00058e34) list_single_graphic_2heading_pane_g5_ParamLimits

0x51f9,	// (0x00058e34) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x000633e6) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x000633e6) list_single_graphic_2heading_pane_g

0x5205,	// (0x00058e40) list_single_graphic_2heading_pane_t1_ParamLimits

0x5205,	// (0x00058e40) list_single_graphic_2heading_pane_t1

0x5219,	// (0x00058e54) list_single_graphic_2heading_pane_t2_ParamLimits

0x5219,	// (0x00058e54) list_single_graphic_2heading_pane_t2

0x5233,	// (0x00058e6e) list_single_graphic_2heading_pane_t3_ParamLimits

0x5233,	// (0x00058e6e) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x000633ed) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x000633ed) list_single_graphic_2heading_pane_t

0x925e,	// (0x0005ce99) bg_popup_sub_pane_cp2

0x9288,	// (0x0005cec3) grid_toobar_pane

0x7361,	// (0x0005af9c) cell_toolbar_pane_ParamLimits

0x7361,	// (0x0005af9c) cell_toolbar_pane

0x92c4,	// (0x0005ceff) cell_toolbar_pane_g1_ParamLimits

0x92c4,	// (0x0005ceff) cell_toolbar_pane_g1

0x92d8,	// (0x0005cf13) cell_toolbar_pane_g2_ParamLimits

0x92d8,	// (0x0005cf13) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x000633fb) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x000633fb) cell_toolbar_pane_g

0x92fa,	// (0x0005cf35) grid_highlight_pane_cp2_ParamLimits

0x92fa,	// (0x0005cf35) grid_highlight_pane_cp2

0x9314,	// (0x0005cf4f) toolbar_button_pane

0x9320,	// (0x0005cf5b) toolbar_button_pane_g1

0x9328,	// (0x0005cf63) toolbar_button_pane_g2

0x9330,	// (0x0005cf6b) toolbar_button_pane_g3

0x9338,	// (0x0005cf73) toolbar_button_pane_g4

0x9340,	// (0x0005cf7b) toolbar_button_pane_g5

0x9348,	// (0x0005cf83) toolbar_button_pane_g6

0x9350,	// (0x0005cf8b) toolbar_button_pane_g7

0x9358,	// (0x0005cf93) toolbar_button_pane_g8

0x9360,	// (0x0005cf9b) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x00063400) toolbar_button_pane_g

0x7399,	// (0x0005afd4) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7399,	// (0x0005afd4) list_single_2graphic_pane_g1_cp3

0x73a5,	// (0x0005afe0) list_single_2graphic_pane_g2_cp3_ParamLimits

0x73a5,	// (0x0005afe0) list_single_2graphic_pane_g2_cp3

0x73b6,	// (0x0005aff1) list_single_2graphic_pane_g3_cp3

0x73be,	// (0x0005aff9) list_single_2graphic_pane_g4_cp3_ParamLimits

0x73be,	// (0x0005aff9) list_single_2graphic_pane_g4_cp3

0x73ca,	// (0x0005b005) list_single_2graphic_pane_t1_cp3_ParamLimits

0x73ca,	// (0x0005b005) list_single_2graphic_pane_t1_cp3

0x73e6,	// (0x0005b021) list_single_midp_graphic_pane_g2_ParamLimits

0x73e6,	// (0x0005b021) list_single_midp_graphic_pane_g2

0x51d9,	// (0x00058e14) aid_zoom_text_primary

0x6d8c,	// (0x0005a9c7) aid_zoom_text_secondary

0x8d32,	// (0x0005c96d) status_small_pane_g7_ParamLimits

0x8d32,	// (0x0005c96d) status_small_pane_g7

0x8d55,	// (0x0005c990) status_small_pane_t1_ParamLimits

0x565f,	// (0x0005929a) title_pane_g2

0x0003,

0xf54e,	// (0x00063189) title_pane_g

0x5987,	// (0x000595c2) aid_size_cell_colour_1_pane_ParamLimits

0x5987,	// (0x000595c2) aid_size_cell_colour_1_pane

0x599b,	// (0x000595d6) aid_size_cell_colour_2_pane_ParamLimits

0x599b,	// (0x000595d6) aid_size_cell_colour_2_pane

0x59af,	// (0x000595ea) aid_size_cell_colour_3_pane_ParamLimits

0x59af,	// (0x000595ea) aid_size_cell_colour_3_pane

0x59c3,	// (0x000595fe) aid_size_cell_colour_4_pane_ParamLimits

0x59c3,	// (0x000595fe) aid_size_cell_colour_4_pane

0x6349,	// (0x00059f84) title_pane_stacon_g1_ParamLimits

0x6349,	// (0x00059f84) title_pane_stacon_g1

0x99d8,	// (0x0005d613) popup_note_wait_window_g3_ParamLimits

0x99d8,	// (0x0005d613) popup_note_wait_window_g3

0x9a4e,	// (0x0005d689) popup_note_wait_window_t5_ParamLimits

0x9a4e,	// (0x0005d689) popup_note_wait_window_t5

0xeb8f,	// (0x000627ca) main_feb_china_hwr_fs_writing_pane

0x6e30,	// (0x0005aa6b) popup_feb_china_hwr_fs_window_ParamLimits

0x6e30,	// (0x0005aa6b) popup_feb_china_hwr_fs_window

0x7408,	// (0x0005b043) aid_size_cell_hwr_fs_ParamLimits

0x7408,	// (0x0005b043) aid_size_cell_hwr_fs

0x93ac,	// (0x0005cfe7) bg_popup_sub_pane_cp3_ParamLimits

0x93ac,	// (0x0005cfe7) bg_popup_sub_pane_cp3

0x741d,	// (0x0005b058) grid_hwr_fs_pane_ParamLimits

0x741d,	// (0x0005b058) grid_hwr_fs_pane

0x7435,	// (0x0005b070) linegrid_hwr_fs_pane_ParamLimits

0x7435,	// (0x0005b070) linegrid_hwr_fs_pane

0x7445,	// (0x0005b080) cell_hwr_fs_pane_ParamLimits

0x7445,	// (0x0005b080) cell_hwr_fs_pane

0x93b8,	// (0x0005cff3) linegrid_hwr_fs_pane_g1_ParamLimits

0x93b8,	// (0x0005cff3) linegrid_hwr_fs_pane_g1

0x93c4,	// (0x0005cfff) linegrid_hwr_fs_pane_g2_ParamLimits

0x93c4,	// (0x0005cfff) linegrid_hwr_fs_pane_g2

0x93d6,	// (0x0005d011) linegrid_hwr_fs_pane_g3_ParamLimits

0x93d6,	// (0x0005d011) linegrid_hwr_fs_pane_g3

0x7467,	// (0x0005b0a2) linegrid_hwr_fs_pane_g4_ParamLimits

0x7467,	// (0x0005b0a2) linegrid_hwr_fs_pane_g4

0x7481,	// (0x0005b0bc) linegrid_hwr_fs_pane_g5_ParamLimits

0x7481,	// (0x0005b0bc) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0006342b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0006342b) linegrid_hwr_fs_pane_g

0x93e2,	// (0x0005d01d) cell_hwr_fs_pane_g1_ParamLimits

0x93e2,	// (0x0005d01d) cell_hwr_fs_pane_g1

0x9198,	// (0x0005cdd3) cell_hwr_fs_pane_g2_ParamLimits

0x9198,	// (0x0005cdd3) cell_hwr_fs_pane_g2

0x93f8,	// (0x0005d033) cell_hwr_fs_pane_g3_ParamLimits

0x93f8,	// (0x0005d033) cell_hwr_fs_pane_g3

0x9405,	// (0x0005d040) cell_hwr_fs_pane_g4_ParamLimits

0x9405,	// (0x0005d040) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x00063436) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x00063436) cell_hwr_fs_pane_g

0x7497,	// (0x0005b0d2) cell_hwr_fs_pane_t1

0xeb8f,	// (0x000627ca) grid_highlight_pane_cp6

0xeb8f,	// (0x000627ca) main_idle_act2_pane

0xf265,	// (0x00062ea0) aid_inside_area_popup_secondary

0xa06d,	// (0x0005dca8) aid_inside_area_window_primary_ParamLimits

0xa06d,	// (0x0005dca8) aid_inside_area_window_primary

0xadbb,	// (0x0005e9f6) ai2_news_ticker_pane

0xadc3,	// (0x0005e9fe) aid_size_cell_ai1_link_ParamLimits

0xadc3,	// (0x0005e9fe) aid_size_cell_ai1_link

0xaddd,	// (0x0005ea18) popup_ai2_data_window_ParamLimits

0xaddd,	// (0x0005ea18) popup_ai2_data_window

0xadf3,	// (0x0005ea2e) popup_ai2_link_window_ParamLimits

0xadf3,	// (0x0005ea2e) popup_ai2_link_window

0x93ac,	// (0x0005cfe7) bg_popup_sub_pane_cp4_ParamLimits

0x93ac,	// (0x0005cfe7) bg_popup_sub_pane_cp4

0xae07,	// (0x0005ea42) grid_ai2_link_pane_ParamLimits

0xae07,	// (0x0005ea42) grid_ai2_link_pane

0xae1e,	// (0x0005ea59) popup_ai2_link_window_g1_ParamLimits

0xae1e,	// (0x0005ea59) popup_ai2_link_window_g1

0xae2a,	// (0x0005ea65) popup_ai2_link_window_g2_ParamLimits

0xae2a,	// (0x0005ea65) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x00063609) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x00063609) popup_ai2_link_window_g

0xae39,	// (0x0005ea74) ai2_mp_button_pane

0xae41,	// (0x0005ea7c) ai2_mp_volume_pane

0x95bf,	// (0x0005d1fa) bg_popup_sub_pane_cp5_ParamLimits

0x95bf,	// (0x0005d1fa) bg_popup_sub_pane_cp5

0xae49,	// (0x0005ea84) heading_ai2_gene_pane_ParamLimits

0xae49,	// (0x0005ea84) heading_ai2_gene_pane

0xae55,	// (0x0005ea90) list_ai2_gene_pane_ParamLimits

0xae55,	// (0x0005ea90) list_ai2_gene_pane

0xae9d,	// (0x0005ead8) cell_ai2_link_pane_ParamLimits

0xae9d,	// (0x0005ead8) cell_ai2_link_pane

0xaeb3,	// (0x0005eaee) cell_ai2_link_pane_g1

0xeb8f,	// (0x000627ca) grid_highlight_pane_cp7

0x784e,	// (0x0005b489) ai2_mp_volume_pane_g1

0xaf83,	// (0x0005ebbe) ai2_mp_volume_pane_g2

0xaef8,	// (0x0005eb33) list_ai2_gene_pane_t1

0xaf8b,	// (0x0005ebc6) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x00063622) ai2_mp_volume_pane_g

0x7856,	// (0x0005b491) volume_small_pane_cp3

0xaf93,	// (0x0005ebce) aid_size_cell_ai2_button

0xaf9b,	// (0x0005ebd6) grid_ai2_button_pane

0xafa4,	// (0x0005ebdf) cell_ai2_button_pane_ParamLimits

0xafa4,	// (0x0005ebdf) cell_ai2_button_pane

0xeb85,	// (0x000627c0) cell_ai2_button_pane_g1

0xeb8f,	// (0x000627ca) grid_highlight_pane_cp8

0xaf43,	// (0x0005eb7e) ai2_gene_pane_t1_ParamLimits

0xaf43,	// (0x0005eb7e) ai2_gene_pane_t1

0x6d7a,	// (0x0005a9b5) aid_height_parent_landscape

0xa6d6,	// (0x0005e311) aid_height_set_list

0xa6e7,	// (0x0005e322) aid_size_parent

0xabde,	// (0x0005e819) aid_size_cell_graphic_pane_ParamLimits

0xae65,	// (0x0005eaa0) popup_ai2_data_window_g1_ParamLimits

0xae65,	// (0x0005eaa0) popup_ai2_data_window_g1

0xae71,	// (0x0005eaac) ai2_news_ticker_pane_g1

0xae79,	// (0x0005eab4) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0006360e) ai2_news_ticker_pane_g

0xae81,	// (0x0005eabc) ai2_news_ticker_pane_t1

0xae8f,	// (0x0005eaca) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x00063613) ai2_news_ticker_pane_t

0xaebc,	// (0x0005eaf7) heading_ai2_gene_pane_g1

0xaec4,	// (0x0005eaff) heading_ai2_gene_pane_t1_ParamLimits

0xaec4,	// (0x0005eaff) heading_ai2_gene_pane_t1

0xaed9,	// (0x0005eb14) list_highlight_pane_cp6

0xaee1,	// (0x0005eb1c) ai2_gene_pane_ParamLimits

0xaee1,	// (0x0005eb1c) ai2_gene_pane

0xaf06,	// (0x0005eb41) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x00063618) list_ai2_gene_pane_t

0xaf14,	// (0x0005eb4f) list_highlight_pane_cp8_ParamLimits

0xaf14,	// (0x0005eb4f) list_highlight_pane_cp8

0xaf25,	// (0x0005eb60) ai2_gene_pane_g1_ParamLimits

0xaf25,	// (0x0005eb60) ai2_gene_pane_g1

0xaf37,	// (0x0005eb72) ai2_gene_pane_g2_ParamLimits

0xaf37,	// (0x0005eb72) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0006361d) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0006361d) ai2_gene_pane_g

0xef3c,	// (0x00062b77) scroll_pane_cp12

0x6d37,	// (0x0005a972) control_pane_t3_ParamLimits

0x6d37,	// (0x0005a972) control_pane_t3

0x8d46,	// (0x0005c981) status_small_pane_g8_ParamLimits

0x8d46,	// (0x0005c981) status_small_pane_g8

0x6f12,	// (0x0005ab4d) popup_find_window_ParamLimits

0x712b,	// (0x0005ad66) popup_note_image_window_ParamLimits

0x344e,	// (0x00057089) list_double2_graphic_pane_vc_g1_ParamLimits

0x344e,	// (0x00057089) list_double2_graphic_pane_vc_g1

0x465e,	// (0x00058299) list_double2_graphic_pane_vc_g2_ParamLimits

0x465e,	// (0x00058299) list_double2_graphic_pane_vc_g2

0x466a,	// (0x000582a5) list_double2_graphic_pane_vc_g3_ParamLimits

0x466a,	// (0x000582a5) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x000633f4) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x000633f4) list_double2_graphic_pane_vc_g

0x345a,	// (0x00057095) list_double2_graphic_pane_vc_t1_ParamLimits

0x345a,	// (0x00057095) list_double2_graphic_pane_vc_t1

0x465e,	// (0x00058299) list_single_heading_pane_vc_g1_ParamLimits

0x465e,	// (0x00058299) list_single_heading_pane_vc_g1

0x466a,	// (0x000582a5) list_single_heading_pane_vc_g2_ParamLimits

0x466a,	// (0x000582a5) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00063415) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00063415) list_single_heading_pane_vc_g

0x3740,	// (0x0005737b) list_single_heading_pane_vc_t1_ParamLimits

0x3740,	// (0x0005737b) list_single_heading_pane_vc_t1

0x3756,	// (0x00057391) list_single_heading_pane_vc_t2_ParamLimits

0x3756,	// (0x00057391) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0006341a) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0006341a) list_single_heading_pane_vc_t

0x9368,	// (0x0005cfa3) list_setting_number_pane_vc_g1_ParamLimits

0x9368,	// (0x0005cfa3) list_setting_number_pane_vc_g1

0x9374,	// (0x0005cfaf) list_setting_number_pane_vc_g2_ParamLimits

0x9374,	// (0x0005cfaf) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0006341f) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0006341f) list_setting_number_pane_vc_g

0x3768,	// (0x000573a3) list_setting_number_pane_vc_t1_ParamLimits

0x3768,	// (0x000573a3) list_setting_number_pane_vc_t1

0x377c,	// (0x000573b7) list_setting_number_pane_vc_t2_ParamLimits

0x377c,	// (0x000573b7) list_setting_number_pane_vc_t2

0x3798,	// (0x000573d3) list_setting_number_pane_vc_t3_ParamLimits

0x3798,	// (0x000573d3) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x00063424) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x00063424) list_setting_number_pane_vc_t

0x41e3,	// (0x00057e1e) set_value_pane_vc_ParamLimits

0x41e3,	// (0x00057e1e) set_value_pane_vc

0xaa9e,	// (0x0005e6d9) list_double2_graphic_pane_vc_ParamLimits

0xaa9e,	// (0x0005e6d9) list_double2_graphic_pane_vc

0xaa9e,	// (0x0005e6d9) list_double2_large_graphic_pane_vc_ParamLimits

0xaa9e,	// (0x0005e6d9) list_double2_large_graphic_pane_vc

0xaa9e,	// (0x0005e6d9) list_double2_pane_vc_ParamLimits

0xaa9e,	// (0x0005e6d9) list_double2_pane_vc

0xaa9e,	// (0x0005e6d9) list_double_graphic_heading_pane_vc_ParamLimits

0xaa9e,	// (0x0005e6d9) list_double_graphic_heading_pane_vc

0xaa9e,	// (0x0005e6d9) list_double_graphic_pane_vc_ParamLimits

0xaa9e,	// (0x0005e6d9) list_double_graphic_pane_vc

0xaa9e,	// (0x0005e6d9) list_double_heading_pane_vc_ParamLimits

0xaa9e,	// (0x0005e6d9) list_double_heading_pane_vc

0xaab0,	// (0x0005e6eb) list_double_large_graphic_pane_vc_ParamLimits

0xaab0,	// (0x0005e6eb) list_double_large_graphic_pane_vc

0xaa9e,	// (0x0005e6d9) list_double_number_pane_vc_ParamLimits

0xaa9e,	// (0x0005e6d9) list_double_number_pane_vc

0xaa9e,	// (0x0005e6d9) list_double_pane_vc_ParamLimits

0xaa9e,	// (0x0005e6d9) list_double_pane_vc

0xaa9e,	// (0x0005e6d9) list_double_time_pane_vc_ParamLimits

0xaa9e,	// (0x0005e6d9) list_double_time_pane_vc

0xaa9e,	// (0x0005e6d9) list_setting_number_pane_vc_ParamLimits

0xaa9e,	// (0x0005e6d9) list_setting_number_pane_vc

0xaa9e,	// (0x0005e6d9) list_setting_pane_vc_ParamLimits

0xaa9e,	// (0x0005e6d9) list_setting_pane_vc

0xaa9e,	// (0x0005e6d9) list_single_graphic_heading_pane_vc_ParamLimits

0xaa9e,	// (0x0005e6d9) list_single_graphic_heading_pane_vc

0xaa9e,	// (0x0005e6d9) list_single_heading_pane_vc_ParamLimits

0xaa9e,	// (0x0005e6d9) list_single_heading_pane_vc

0xa88c,	// (0x0005e4c7) list_single_number_heading_pane_vc_ParamLimits

0xa88c,	// (0x0005e4c7) list_single_number_heading_pane_vc

0x4202,	// (0x00057e3d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4202,	// (0x00057e3d) list_double_graphic_heading_pane_vc_g1

0x465e,	// (0x00058299) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x465e,	// (0x00058299) list_double_graphic_heading_pane_vc_g2

0x466a,	// (0x000582a5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x466a,	// (0x000582a5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x00063629) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00063629) list_double_graphic_heading_pane_vc_g

0x420e,	// (0x00057e49) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x420e,	// (0x00057e49) list_double_graphic_heading_pane_vc_t1

0x4222,	// (0x00057e5d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4222,	// (0x00057e5d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x00063630) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x00063630) list_double_graphic_heading_pane_vc_t

0x9368,	// (0x0005cfa3) list_setting_pane_vc_g1_ParamLimits

0x9368,	// (0x0005cfa3) list_setting_pane_vc_g1

0x9374,	// (0x0005cfaf) list_setting_pane_vc_g2_ParamLimits

0x9374,	// (0x0005cfaf) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0006341f) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0006341f) list_setting_pane_vc_g

0x423a,	// (0x00057e75) list_setting_pane_vc_t1_ParamLimits

0x423a,	// (0x00057e75) list_setting_pane_vc_t1

0x4256,	// (0x00057e91) list_setting_pane_vc_t2_ParamLimits

0x4256,	// (0x00057e91) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x00063673) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x00063673) list_setting_pane_vc_t

0x41e3,	// (0x00057e1e) set_value_pane_cp_vc_ParamLimits

0x41e3,	// (0x00057e1e) set_value_pane_cp_vc

0x465e,	// (0x00058299) list_single_number_heading_pane_vc_g1_ParamLimits

0x465e,	// (0x00058299) list_single_number_heading_pane_vc_g1

0x466a,	// (0x000582a5) list_single_number_heading_pane_vc_g2_ParamLimits

0x466a,	// (0x000582a5) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00063415) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00063415) list_single_number_heading_pane_vc_g

0x4270,	// (0x00057eab) list_single_number_heading_pane_vc_t1_ParamLimits

0x4270,	// (0x00057eab) list_single_number_heading_pane_vc_t1

0x4286,	// (0x00057ec1) list_single_number_heading_pane_vc_t2_ParamLimits

0x4286,	// (0x00057ec1) list_single_number_heading_pane_vc_t2

0x4298,	// (0x00057ed3) list_single_number_heading_pane_vc_t3_ParamLimits

0x4298,	// (0x00057ed3) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x00063678) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x00063678) list_single_number_heading_pane_vc_t

0x42aa,	// (0x00057ee5) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x42aa,	// (0x00057ee5) list_single_graphic_heading_pane_vc_g1

0x465e,	// (0x00058299) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x465e,	// (0x00058299) list_single_graphic_heading_pane_vc_g4

0x466a,	// (0x000582a5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x466a,	// (0x000582a5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa44,	// (0x0006367f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x0006367f) list_single_graphic_heading_pane_vc_g

0x3740,	// (0x0005737b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3740,	// (0x0005737b) list_single_graphic_heading_pane_vc_t1

0x42b6,	// (0x00057ef1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x42b6,	// (0x00057ef1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4b,	// (0x00063686) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4b,	// (0x00063686) list_single_graphic_heading_pane_vc_t

0x465e,	// (0x00058299) list_double2_pane_vc_g1_ParamLimits

0x465e,	// (0x00058299) list_double2_pane_vc_g1

0x466a,	// (0x000582a5) list_double2_pane_vc_g2_ParamLimits

0x466a,	// (0x000582a5) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x00063415) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x00063415) list_double2_pane_vc_g

0x42c8,	// (0x00057f03) list_double2_pane_vc_t1_ParamLimits

0x42c8,	// (0x00057f03) list_double2_pane_vc_t1

0xa928,	// (0x0005e563) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xa928,	// (0x0005e563) list_double2_large_graphic_pane_vc_g1

0x465e,	// (0x00058299) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x465e,	// (0x00058299) list_double2_large_graphic_pane_vc_g2

0x466a,	// (0x000582a5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x466a,	// (0x000582a5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa50,	// (0x0006368b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa50,	// (0x0006368b) list_double2_large_graphic_pane_vc_g

0x345a,	// (0x00057095) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x345a,	// (0x00057095) list_double2_large_graphic_pane_vc_t1

0xa934,	// (0x0005e56f) list_double_time_pane_vc_g1_ParamLimits

0xa934,	// (0x0005e56f) list_double_time_pane_vc_g1

0xa940,	// (0x0005e57b) list_double_time_pane_vc_g2_ParamLimits

0xa940,	// (0x0005e57b) list_double_time_pane_vc_g2

0x0001,

0xfa57,	// (0x00063692) list_double_time_pane_vc_g_ParamLimits

0xfa57,	// (0x00063692) list_double_time_pane_vc_g

0x42e0,	// (0x00057f1b) list_double_time_pane_vc_t1_ParamLimits

0x42e0,	// (0x00057f1b) list_double_time_pane_vc_t1

0x4304,	// (0x00057f3f) list_double_time_pane_vc_t2_ParamLimits

0x4304,	// (0x00057f3f) list_double_time_pane_vc_t2

0x4353,	// (0x00057f8e) list_double_time_pane_vc_t3_ParamLimits

0x4353,	// (0x00057f8e) list_double_time_pane_vc_t3

0x4365,	// (0x00057fa0) list_double_time_pane_vc_t4_ParamLimits

0x4365,	// (0x00057fa0) list_double_time_pane_vc_t4

0x0003,

0xfa5c,	// (0x00063697) list_double_time_pane_vc_t_ParamLimits

0xfa5c,	// (0x00063697) list_double_time_pane_vc_t

0x465e,	// (0x00058299) list_double_pane_vc_g1_ParamLimits

0x465e,	// (0x00058299) list_double_pane_vc_g1

0x466a,	// (0x000582a5) list_double_pane_vc_g2_ParamLimits

0x466a,	// (0x000582a5) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x00063415) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x00063415) list_double_pane_vc_g

0x4379,	// (0x00057fb4) list_double_pane_vc_t1_ParamLimits

0x4379,	// (0x00057fb4) list_double_pane_vc_t1

0x438d,	// (0x00057fc8) list_double_pane_vc_t2_ParamLimits

0x438d,	// (0x00057fc8) list_double_pane_vc_t2

0x0001,

0xfa65,	// (0x000636a0) list_double_pane_vc_t_ParamLimits

0xfa65,	// (0x000636a0) list_double_pane_vc_t

0x465e,	// (0x00058299) list_double_number_pane_vc_g1_ParamLimits

0x465e,	// (0x00058299) list_double_number_pane_vc_g1

0x466a,	// (0x000582a5) list_double_number_pane_vc_g2_ParamLimits

0x466a,	// (0x000582a5) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x00063415) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x00063415) list_double_number_pane_vc_g

0x43a5,	// (0x00057fe0) list_double_number_pane_vc_t1_ParamLimits

0x43a5,	// (0x00057fe0) list_double_number_pane_vc_t1

0x4379,	// (0x00057fb4) list_double_number_pane_vc_t2_ParamLimits

0x4379,	// (0x00057fb4) list_double_number_pane_vc_t2

0x43b7,	// (0x00057ff2) list_double_number_pane_vc_t3_ParamLimits

0x43b7,	// (0x00057ff2) list_double_number_pane_vc_t3

0x0002,

0xfa6a,	// (0x000636a5) list_double_number_pane_vc_t_ParamLimits

0xfa6a,	// (0x000636a5) list_double_number_pane_vc_t

0xa94c,	// (0x0005e587) list_double_large_graphic_pane_vc_g1_ParamLimits

0xa94c,	// (0x0005e587) list_double_large_graphic_pane_vc_g1

0xa96e,	// (0x0005e5a9) list_double_large_graphic_pane_vc_g2_ParamLimits

0xa96e,	// (0x0005e5a9) list_double_large_graphic_pane_vc_g2

0xa982,	// (0x0005e5bd) list_double_large_graphic_pane_vc_g3_ParamLimits

0xa982,	// (0x0005e5bd) list_double_large_graphic_pane_vc_g3

0x43cf,	// (0x0005800a) list_double_large_graphic_pane_vc_g4_ParamLimits

0x43cf,	// (0x0005800a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa71,	// (0x000636ac) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x000636ac) list_double_large_graphic_pane_vc_g

0x43db,	// (0x00058016) list_double_large_graphic_pane_vc_t1_ParamLimits

0x43db,	// (0x00058016) list_double_large_graphic_pane_vc_t1

0x43f7,	// (0x00058032) list_double_large_graphic_pane_vc_t2_ParamLimits

0x43f7,	// (0x00058032) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x000636b5) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x000636b5) list_double_large_graphic_pane_vc_t

0x465e,	// (0x00058299) list_double_heading_pane_vc_g1_ParamLimits

0x465e,	// (0x00058299) list_double_heading_pane_vc_g1

0x466a,	// (0x000582a5) list_double_heading_pane_vc_g2_ParamLimits

0x466a,	// (0x000582a5) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00063415) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00063415) list_double_heading_pane_vc_g

0x4419,	// (0x00058054) list_double_heading_pane_vc_t1_ParamLimits

0x4419,	// (0x00058054) list_double_heading_pane_vc_t1

0x442d,	// (0x00058068) list_double_heading_pane_vc_t2_ParamLimits

0x442d,	// (0x00058068) list_double_heading_pane_vc_t2

0x0001,

0xfa7f,	// (0x000636ba) list_double_heading_pane_vc_t_ParamLimits

0xfa7f,	// (0x000636ba) list_double_heading_pane_vc_t

0x4445,	// (0x00058080) list_double_graphic_pane_vc_g1_ParamLimits

0x4445,	// (0x00058080) list_double_graphic_pane_vc_g1

0xa991,	// (0x0005e5cc) list_double_graphic_pane_vc_g2_ParamLimits

0xa991,	// (0x0005e5cc) list_double_graphic_pane_vc_g2

0x465e,	// (0x00058299) list_double_graphic_pane_vc_g3_ParamLimits

0x465e,	// (0x00058299) list_double_graphic_pane_vc_g3

0x0003,

0xfa84,	// (0x000636bf) list_double_graphic_pane_vc_g_ParamLimits

0xfa84,	// (0x000636bf) list_double_graphic_pane_vc_g

0x4458,	// (0x00058093) list_double_graphic_pane_vc_t1_ParamLimits

0x4458,	// (0x00058093) list_double_graphic_pane_vc_t1

0x4477,	// (0x000580b2) list_double_graphic_pane_vc_t2_ParamLimits

0x4477,	// (0x000580b2) list_double_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x000636c8) list_double_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x000636c8) list_double_graphic_pane_vc_t

0x527f,	// (0x00058eba) aid_size_cell_fastswap

0x5287,	// (0x00058ec2) aid_size_cell_touch_ParamLimits

0x5287,	// (0x00058ec2) aid_size_cell_touch

0x54ec,	// (0x00059127) popup_fast_swap_wide_window_ParamLimits

0x54ec,	// (0x00059127) popup_fast_swap_wide_window

0x55f2,	// (0x0005922d) touch_pane_ParamLimits

0x55f2,	// (0x0005922d) touch_pane

0xef89,	// (0x00062bc4) button_value_adjust_pane_cp2

0x348a,	// (0x000570c5) button_value_adjust_pane_cp4

0x3492,	// (0x000570cd) form_field_data_pane_cp2

0x60b5,	// (0x00059cf0) form_field_data_wide_pane_cp2

0xf446,	// (0x00063081) bg_scroll_pane_ParamLimits

0x6545,	// (0x0005a180) scroll_handle_pane_ParamLimits

0x6559,	// (0x0005a194) scroll_sc2_down_pane_ParamLimits

0x6559,	// (0x0005a194) scroll_sc2_down_pane

0xf477,	// (0x000630b2) scroll_sc2_up_pane_ParamLimits

0xf477,	// (0x000630b2) scroll_sc2_up_pane

0xb659,	// (0x0005f294) grid_wheel_folder_pane_g1_ParamLimits

0xb659,	// (0x0005f294) grid_wheel_folder_pane_g1

0x6932,	// (0x0005a56d) clock_nsta_pane_cp2_ParamLimits

0x6932,	// (0x0005a56d) clock_nsta_pane_cp2

0x8ad0,	// (0x0005c70b) listscroll_midp_pane_ParamLimits

0x8adc,	// (0x0005c717) midp_canvas_pane

0x8dc0,	// (0x0005c9fb) nsta_clock_indic_pane

0x8df9,	// (0x0005ca34) listscroll_form_pane_vc

0x8e01,	// (0x0005ca3c) listscroll_set_pane_vc_ParamLimits

0x8e01,	// (0x0005ca3c) listscroll_set_pane_vc

0x8f06,	// (0x0005cb41) clock_nsta_pane

0x8f81,	// (0x0005cbbc) indicator_nsta_pane

0x925e,	// (0x0005ce99) bg_popup_sub_pane_cp2_ParamLimits

0x9272,	// (0x0005cead) find_pane_cp2_ParamLimits

0x9272,	// (0x0005cead) find_pane_cp2

0x9288,	// (0x0005cec3) grid_toobar_pane_ParamLimits

0x9380,	// (0x0005cfbb) list_form_gen_pane_vc_ParamLimits

0x9380,	// (0x0005cfbb) list_form_gen_pane_vc

0x9396,	// (0x0005cfd1) scroll_pane_cp8_vc_ParamLimits

0x9396,	// (0x0005cfd1) scroll_pane_cp8_vc

0x9412,	// (0x0005d04d) data_form_wide_pane_vc_ParamLimits

0x9412,	// (0x0005d04d) data_form_wide_pane_vc

0x941e,	// (0x0005d059) form_field_data_wide_pane_vc_g1

0x9426,	// (0x0005d061) form_field_data_wide_pane_vc_t1_ParamLimits

0x9426,	// (0x0005d061) form_field_data_wide_pane_vc_t1

0xef9d,	// (0x00062bd8) input_focus_pane_cp6_vc_ParamLimits

0xef9d,	// (0x00062bd8) input_focus_pane_cp6_vc

0x9753,	// (0x0005d38e) list_midp_pane_ParamLimits

0x975f,	// (0x0005d39a) scroll_pane_cp16_ParamLimits

0x975f,	// (0x0005d39a) scroll_pane_cp16

0x97b5,	// (0x0005d3f0) button_value_adjust_pane_ParamLimits

0x97b5,	// (0x0005d3f0) button_value_adjust_pane

0xa6f9,	// (0x0005e334) button_value_adjust_pane_cp6_ParamLimits

0xa6f9,	// (0x0005e334) button_value_adjust_pane_cp6

0xa81f,	// (0x0005e45a) settings_code_pane_cp_ParamLimits

0xa81f,	// (0x0005e45a) settings_code_pane_cp

0xeb85,	// (0x000627c0) cell_touch_pane_g1

0xeb85,	// (0x000627c0) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00063339) cell_touch_pane_g

0xafb6,	// (0x0005ebf1) cell_touch_pane_cp_ParamLimits

0xafb6,	// (0x0005ebf1) cell_touch_pane_cp

0xafc6,	// (0x0005ec01) cell_touch_pane_ParamLimits

0xafc6,	// (0x0005ec01) cell_touch_pane

0xeb85,	// (0x000627c0) scroll_sc2_down_pane_g1

0xeb85,	// (0x000627c0) scroll_sc2_up_pane_g1

0xeb8f,	// (0x000627ca) bg_set_opt_pane_cp4_vc

0xafd8,	// (0x0005ec13) list_set_graphic_pane_vc_g1_ParamLimits

0xafd8,	// (0x0005ec13) list_set_graphic_pane_vc_g1

0xafe4,	// (0x0005ec1f) list_set_graphic_pane_vc_g2_ParamLimits

0xafe4,	// (0x0005ec1f) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x00063635) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x00063635) list_set_graphic_pane_vc_g

0xaff0,	// (0x0005ec2b) text_primary_small_cp13_vc_ParamLimits

0xaff0,	// (0x0005ec2b) text_primary_small_cp13_vc

0xb008,	// (0x0005ec43) list_set_graphic_pane_vc_ParamLimits

0xb008,	// (0x0005ec43) list_set_graphic_pane_vc

0xeb8f,	// (0x000627ca) input_focus_pane_cp2_vc

0xeb85,	// (0x000627c0) setting_code_pane_vc_g1

0xebf4,	// (0x0006282f) setting_code_pane_vc_t1

0xb01b,	// (0x0005ec56) set_text_pane_vc_t1_ParamLimits

0xb01b,	// (0x0005ec56) set_text_pane_vc_t1

0xeb8f,	// (0x000627ca) input_focus_pane_cp1_vc

0xb037,	// (0x0005ec72) list_set_text_pane_vc

0xeb85,	// (0x000627c0) setting_text_pane_vc_g1

0xeb8f,	// (0x000627ca) bg_set_opt_pane_cp2_vc

0xebeb,	// (0x00062826) setting_slider_graphic_pane_vc_g1

0xb041,	// (0x0005ec7c) setting_slider_graphic_pane_vc_t1

0xb051,	// (0x0005ec8c) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0006363a) setting_slider_graphic_pane_vc_t

0xb061,	// (0x0005ec9c) slider_set_pane_cp_vc

0xb069,	// (0x0005eca4) slider_set_pane_vc_g1

0xb072,	// (0x0005ecad) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0006363f) slider_set_pane_vc_g

0xf1b7,	// (0x00062df2) set_opt_bg_pane_g1_copy1

0xf1bf,	// (0x00062dfa) set_opt_bg_pane_g2_copy1

0xb09e,	// (0x0005ecd9) set_opt_bg_pane_g3_copy1

0xf1cf,	// (0x00062e0a) set_opt_bg_pane_g4_copy1

0xf1d7,	// (0x00062e12) set_opt_bg_pane_g5_copy1

0xf1df,	// (0x00062e1a) set_opt_bg_pane_g6_copy1

0xb0a6,	// (0x0005ece1) set_opt_bg_pane_g7_copy1

0xb0ae,	// (0x0005ece9) set_opt_bg_pane_g8_copy1

0xb0b6,	// (0x0005ecf1) set_opt_bg_pane_g9_copy1

0xeb8f,	// (0x000627ca) bg_set_opt_pane_cp_vc

0xb0be,	// (0x0005ecf9) setting_slider_pane_vc_t1

0xb0cd,	// (0x0005ed08) setting_slider_pane_vc_t2

0xb0dd,	// (0x0005ed18) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0006364e) setting_slider_pane_vc_t

0xb0ed,	// (0x0005ed28) slider_set_pane_vc

0x74d3,	// (0x0005b10e) volume_set_pane_vc_g1

0x785f,	// (0x0005b49a) volume_set_pane_vc_g2

0x7868,	// (0x0005b4a3) volume_set_pane_vc_g3

0x7871,	// (0x0005b4ac) volume_set_pane_vc_g4

0x787a,	// (0x0005b4b5) volume_set_pane_vc_g5

0x7883,	// (0x0005b4be) volume_set_pane_vc_g6

0x788c,	// (0x0005b4c7) volume_set_pane_vc_g7

0x7895,	// (0x0005b4d0) volume_set_pane_vc_g8

0x789e,	// (0x0005b4d9) volume_set_pane_vc_g9

0x78a7,	// (0x0005b4e2) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x00063655) volume_set_pane_vc_g

0xb0f5,	// (0x0005ed30) volume_set_pane_vc

0xb0fd,	// (0x0005ed38) button_value_adjust_pane_cp1_vc

0xb107,	// (0x0005ed42) list_highlight_pane_cp2_vc

0xb110,	// (0x0005ed4b) list_set_pane_vc_ParamLimits

0xb110,	// (0x0005ed4b) list_set_pane_vc

0xb16e,	// (0x0005eda9) main_pane_set_vc_t1_ParamLimits

0xb16e,	// (0x0005eda9) main_pane_set_vc_t1

0xb183,	// (0x0005edbe) main_pane_set_vc_t2_ParamLimits

0xb183,	// (0x0005edbe) main_pane_set_vc_t2

0xb195,	// (0x0005edd0) main_pane_set_vc_t3_ParamLimits

0xb195,	// (0x0005edd0) main_pane_set_vc_t3

0xb1a7,	// (0x0005ede2) main_pane_set_vc_t4_ParamLimits

0xb1a7,	// (0x0005ede2) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x0006366a) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x0006366a) main_pane_set_vc_t

0xb1b9,	// (0x0005edf4) setting_code_pane_vc_ParamLimits

0xb1b9,	// (0x0005edf4) setting_code_pane_vc

0xb1c8,	// (0x0005ee03) setting_slider_graphic_pane_vc

0xb1c8,	// (0x0005ee03) setting_slider_pane_vc

0xb1c8,	// (0x0005ee03) setting_text_pane_vc

0xb1c8,	// (0x0005ee03) setting_volume_pane_vc

0xb1d0,	// (0x0005ee0b) scroll_pane_cp121_vc

0xef77,	// (0x00062bb2) set_content_pane_vc

0xb1d8,	// (0x0005ee13) button_value_adjust_pane_g1

0xb1e1,	// (0x0005ee1c) button_value_adjust_pane_g2

0x0001,

0xfa92,	// (0x000636cd) button_value_adjust_pane_g

0xb1ea,	// (0x0005ee25) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb1ea,	// (0x0005ee25) form_field_slider_wide_pane_vc_t1

0xb1fe,	// (0x0005ee39) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb1fe,	// (0x0005ee39) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa97,	// (0x000636d2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x000636d2) form_field_slider_wide_pane_vc_t

0xed07,	// (0x00062942) input_focus_pane_cp10_vc_ParamLimits

0xed07,	// (0x00062942) input_focus_pane_cp10_vc

0xb22c,	// (0x0005ee67) slider_cont_pane_cp1_vc_ParamLimits

0xb22c,	// (0x0005ee67) slider_cont_pane_cp1_vc

0xb23e,	// (0x0005ee79) slider_form_pane_g1_cp2

0xb072,	// (0x0005ecad) slider_form_pane_g2_cp2

0xb26b,	// (0x0005eea6) form_field_slider_pane_vc_t3

0xb279,	// (0x0005eeb4) form_field_slider_pane_vc_t4

0xb287,	// (0x0005eec2) slider_form_pane_vc_ParamLimits

0xb287,	// (0x0005eec2) slider_form_pane_vc

0xb294,	// (0x0005eecf) form_field_slider_pane_vc_t1_ParamLimits

0xb294,	// (0x0005eecf) form_field_slider_pane_vc_t1

0xb1fe,	// (0x0005ee39) form_field_slider_pane_vc_t2_ParamLimits

0xb1fe,	// (0x0005ee39) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x000636e4) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x000636e4) form_field_slider_pane_vc_t

0xed07,	// (0x00062942) input_focus_pane_cp9_vc_ParamLimits

0xed07,	// (0x00062942) input_focus_pane_cp9_vc

0xb2b0,	// (0x0005eeeb) slider_cont_pane_vc_ParamLimits

0xb2b0,	// (0x0005eeeb) slider_cont_pane_vc

0xb2c4,	// (0x0005eeff) list_form_graphic_pane_cp_vc_ParamLimits

0xb2c4,	// (0x0005eeff) list_form_graphic_pane_cp_vc

0x941e,	// (0x0005d059) form_field_popup_wide_pane_vc_g1

0xb2d9,	// (0x0005ef14) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb2d9,	// (0x0005ef14) form_field_popup_wide_pane_vc_t1

0xef9d,	// (0x00062bd8) input_focus_pane_cp8_vc_ParamLimits

0xef9d,	// (0x00062bd8) input_focus_pane_cp8_vc

0xb31e,	// (0x0005ef59) list_form_wide_pane_vc_ParamLimits

0xb31e,	// (0x0005ef59) list_form_wide_pane_vc

0xb32a,	// (0x0005ef65) list_form_graphic_pane_vc_g1

0xb332,	// (0x0005ef6d) list_form_graphic_pane_vc_t1_ParamLimits

0xb332,	// (0x0005ef6d) list_form_graphic_pane_vc_t1

0xebdd,	// (0x00062818) list_highlight_pane_cp5_vc_ParamLimits

0xebdd,	// (0x00062818) list_highlight_pane_cp5_vc

0xb34e,	// (0x0005ef89) list_form_graphic_pane_vc_ParamLimits

0xb34e,	// (0x0005ef89) list_form_graphic_pane_vc

0x941e,	// (0x0005d059) form_field_popup_pane_vc_g1

0xb364,	// (0x0005ef9f) form_field_popup_pane_vc_t1_ParamLimits

0xb364,	// (0x0005ef9f) form_field_popup_pane_vc_t1

0xef9d,	// (0x00062bd8) input_focus_pane_cp7_vc_ParamLimits

0xef9d,	// (0x00062bd8) input_focus_pane_cp7_vc

0xb37b,	// (0x0005efb6) list_form_pane_vc_ParamLimits

0xb37b,	// (0x0005efb6) list_form_pane_vc

0xb387,	// (0x0005efc2) data_form_pane_vc_t1_ParamLimits

0xb387,	// (0x0005efc2) data_form_pane_vc_t1

0xf1b7,	// (0x00062df2) input_focus_pane_vc_g1

0xf1bf,	// (0x00062dfa) input_focus_pane_vc_g2

0xf1c7,	// (0x00062e02) input_focus_pane_vc_g3

0xf1cf,	// (0x00062e0a) input_focus_pane_vc_g4

0xf1d7,	// (0x00062e12) input_focus_pane_vc_g5

0xf1df,	// (0x00062e1a) input_focus_pane_vc_g6

0xf1e7,	// (0x00062e22) input_focus_pane_vc_g7

0xf1ef,	// (0x00062e2a) input_focus_pane_vc_g8

0xf1f7,	// (0x00062e32) input_focus_pane_vc_g9

0xeb85,	// (0x000627c0) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x000632c2) input_focus_pane_vc_g

0x9412,	// (0x0005d04d) data_form_pane_vc_ParamLimits

0x9412,	// (0x0005d04d) data_form_pane_vc

0x941e,	// (0x0005d059) form_field_data_pane_vc_g1

0xb3a2,	// (0x0005efdd) form_field_data_pane_vc_t1_ParamLimits

0xb3a2,	// (0x0005efdd) form_field_data_pane_vc_t1

0xef9d,	// (0x00062bd8) input_focus_pane_vc_ParamLimits

0xef9d,	// (0x00062bd8) input_focus_pane_vc

0xb3bc,	// (0x0005eff7) button_value_adjust_pane_cp3_vc

0xb3c4,	// (0x0005efff) button_value_adjust_pane_cp5_vc

0xb3cc,	// (0x0005f007) form_field_data_pane_vc_ParamLimits

0xb3cc,	// (0x0005f007) form_field_data_pane_vc

0xb3e3,	// (0x0005f01e) form_field_data_pane_vc_cp2

0xb3eb,	// (0x0005f026) form_field_data_wide_pane_vc_ParamLimits

0xb3eb,	// (0x0005f026) form_field_data_wide_pane_vc

0xb401,	// (0x0005f03c) form_field_data_wide_pane_vc_cp2

0xb409,	// (0x0005f044) form_field_popup_pane_vc_ParamLimits

0xb409,	// (0x0005f044) form_field_popup_pane_vc

0xb420,	// (0x0005f05b) form_field_popup_wide_pane_vc_ParamLimits

0xb420,	// (0x0005f05b) form_field_popup_wide_pane_vc

0xb436,	// (0x0005f071) form_field_slider_pane_vc_ParamLimits

0xb436,	// (0x0005f071) form_field_slider_pane_vc

0xb449,	// (0x0005f084) form_field_slider_wide_pane_vc_ParamLimits

0xb449,	// (0x0005f084) form_field_slider_wide_pane_vc

0xb45c,	// (0x0005f097) grid_touch_1_pane_ParamLimits

0xb45c,	// (0x0005f097) grid_touch_1_pane

0xb468,	// (0x0005f0a3) grid_touch_2_pane_ParamLimits

0xb468,	// (0x0005f0a3) grid_touch_2_pane

0x8d8b,	// (0x0005c9c6) touch_pane_g1_ParamLimits

0x8d8b,	// (0x0005c9c6) touch_pane_g1

0xb480,	// (0x0005f0bb) cell_app_pane_cp_wide_ParamLimits

0xb480,	// (0x0005f0bb) cell_app_pane_cp_wide

0xb491,	// (0x0005f0cc) grid_popup_fast_wide_pane_ParamLimits

0xb491,	// (0x0005f0cc) grid_popup_fast_wide_pane

0xb4a5,	// (0x0005f0e0) scroll_pane_cp19_ParamLimits

0xb4a5,	// (0x0005f0e0) scroll_pane_cp19

0xeb8f,	// (0x000627ca) bg_popup_window_pane_cp20

0xb4b9,	// (0x0005f0f4) listscroll_popup_fast_wide_pane

0xebdd,	// (0x00062818) grid_indicator_nsta_pane

0xb4c1,	// (0x0005f0fc) clock_nsta_pane_g1

0xb4ca,	// (0x0005f105) clock_nsta_pane_t1

0xb4e6,	// (0x0005f121) cell_indicator_nsta_pane_ParamLimits

0xb4e6,	// (0x0005f121) cell_indicator_nsta_pane

0xb517,	// (0x0005f152) cell_indicator_nsta_pane_g1

0xb525,	// (0x0005f160) cell_indicator_nsta_pane_g2

0x0001,

0xfaba,	// (0x000636f5) cell_indicator_nsta_pane_g

0xb532,	// (0x0005f16d) clock_nsta_pane_cp

0xb53a,	// (0x0005f175) indicator_nsta_pane_cp

0xb542,	// (0x0005f17d) nsta_clock_indic_pane_g1

0xec19,	// (0x00062854) grid_indicator_pane

0x65f7,	// (0x0005a232) scroll_pane_cp29

0x6881,	// (0x0005a4bc) indicator_nsta_pane_cp2_ParamLimits

0x6881,	// (0x0005a4bc) indicator_nsta_pane_cp2

0xebdd,	// (0x00062818) main_apps_wheel_pane

0x9636,	// (0x0005d271) form_midp_field_text_pane_ParamLimits

0x977f,	// (0x0005d3ba) scroll_bar_cp050_ParamLimits

0xb592,	// (0x0005f1cd) cell_indicator_pane_ParamLimits

0xb592,	// (0x0005f1cd) cell_indicator_pane

0xb5ab,	// (0x0005f1e6) cell_indicator_pane_g1

0xb5b5,	// (0x0005f1f0) grid_wheel_folder_pane_ParamLimits

0xb5b5,	// (0x0005f1f0) grid_wheel_folder_pane

0xb5cb,	// (0x0005f206) list_wheel_apps_pane_ParamLimits

0xb5cb,	// (0x0005f206) list_wheel_apps_pane

0xb5dc,	// (0x0005f217) main_apps_wheel_pane_g1_ParamLimits

0xb5dc,	// (0x0005f217) main_apps_wheel_pane_g1

0xb5f0,	// (0x0005f22b) main_apps_wheel_pane_g2_ParamLimits

0xb5f0,	// (0x0005f22b) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x00063711) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x00063711) main_apps_wheel_pane_g

0xb608,	// (0x0005f243) main_apps_wheel_pane_t1_ParamLimits

0xb608,	// (0x0005f243) main_apps_wheel_pane_t1

0xb62b,	// (0x0005f266) list_wheel_apps_pane_g1

0xb633,	// (0x0005f26e) list_wheel_apps_pane_g2

0xb63b,	// (0x0005f276) list_wheel_apps_pane_g3

0xb645,	// (0x0005f280) list_wheel_apps_pane_g4

0xb64f,	// (0x0005f28a) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x00063716) list_wheel_apps_pane_g

0x6ab8,	// (0x0005a6f3) navi_icon_text_pane

0x8e35,	// (0x0005ca70) aid_fill_nsta

0xb672,	// (0x0005f2ad) navi_icon_text_pane_g1

0xb67e,	// (0x0005f2b9) navi_icon_text_pane_t1

0x3657,	// (0x00057292) list_set_graphic_pane_t1_ParamLimits

0x3657,	// (0x00057292) list_set_graphic_pane_t1

0x9eb6,	// (0x0005daf1) popup_midp_note_alarm_window_t6_ParamLimits

0x9eb6,	// (0x0005daf1) popup_midp_note_alarm_window_t6

0x9ec8,	// (0x0005db03) popup_midp_note_alarm_window_t7_ParamLimits

0x9ec8,	// (0x0005db03) popup_midp_note_alarm_window_t7

0x9eda,	// (0x0005db15) popup_midp_note_alarm_window_t8_ParamLimits

0x9eda,	// (0x0005db15) popup_midp_note_alarm_window_t8

0x9eec,	// (0x0005db27) popup_midp_note_alarm_window_t9_ParamLimits

0x9eec,	// (0x0005db27) popup_midp_note_alarm_window_t9

0x9efe,	// (0x0005db39) popup_midp_note_alarm_window_t10_ParamLimits

0x9efe,	// (0x0005db39) popup_midp_note_alarm_window_t10

0x9f10,	// (0x0005db4b) popup_midp_note_alarm_window_t11_ParamLimits

0x9f10,	// (0x0005db4b) popup_midp_note_alarm_window_t11

0x9f22,	// (0x0005db5d) scroll_pane_cp17_ParamLimits

0x9f22,	// (0x0005db5d) scroll_pane_cp17

0x74d3,	// (0x0005b10e) volume_small_pane_cp_g1

0x78b0,	// (0x0005b4eb) volume_small_pane_cp_g2

0x78b9,	// (0x0005b4f4) volume_small_pane_cp_g3

0x78c2,	// (0x0005b4fd) volume_small_pane_cp_g4

0x78cb,	// (0x0005b506) volume_small_pane_cp_g5

0x787a,	// (0x0005b4b5) volume_small_pane_cp_g6

0x78d4,	// (0x0005b50f) volume_small_pane_cp_g7

0x78dd,	// (0x0005b518) volume_small_pane_cp_g8

0x78e6,	// (0x0005b521) volume_small_pane_cp_g9

0x78ef,	// (0x0005b52a) volume_small_pane_cp_g10

0x8ba9,	// (0x0005c7e4) midp_ticker_pane_g1_ParamLimits

0x8bb5,	// (0x0005c7f0) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0006338e) midp_ticker_pane_g_ParamLimits

0x8bc1,	// (0x0005c7fc) midp_ticker_pane_t1_ParamLimits

0x8e4b,	// (0x0005ca86) aid_fill_nsta_2

0x976b,	// (0x0005d3a6) list_form2_midp_pane

0xa86a,	// (0x0005e4a5) midp_editing_number_pane_ParamLimits

0xa879,	// (0x0005e4b4) midp_ticker_pane_ParamLimits

0xb690,	// (0x0005f2cb) form2_midp_field_pane

0xb6b4,	// (0x0005f2ef) scroll_pane_cp51

0xb6d4,	// (0x0005f30f) form2_midp_button_pane_ParamLimits

0xb6d4,	// (0x0005f30f) form2_midp_button_pane

0xb6e6,	// (0x0005f321) form2_midp_content_pane_ParamLimits

0xb6e6,	// (0x0005f321) form2_midp_content_pane

0xb700,	// (0x0005f33b) form2_midp_field_choice_group_pane

0xb708,	// (0x0005f343) form2_midp_field_pane_g1

0xb710,	// (0x0005f34b) form2_midp_field_pane_g2

0xb718,	// (0x0005f353) form2_midp_field_pane_g3

0xb720,	// (0x0005f35b) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x0006373b) form2_midp_field_pane_g

0xb728,	// (0x0005f363) form2_midp_gauge_slider_pane

0xb730,	// (0x0005f36b) form2_midp_gauge_wait_pane

0xb738,	// (0x0005f373) form2_midp_image_pane_ParamLimits

0xb738,	// (0x0005f373) form2_midp_image_pane

0xb753,	// (0x0005f38e) form2_midp_label_pane_ParamLimits

0xb753,	// (0x0005f38e) form2_midp_label_pane

0xb76c,	// (0x0005f3a7) form2_midp_label_pane_cp_ParamLimits

0xb76c,	// (0x0005f3a7) form2_midp_label_pane_cp

0xb78d,	// (0x0005f3c8) form2_midp_string_pane_ParamLimits

0xb78d,	// (0x0005f3c8) form2_midp_string_pane

0x78f8,	// (0x0005b533) form2_midp_text_pane_ParamLimits

0x78f8,	// (0x0005b533) form2_midp_text_pane

0xb79f,	// (0x0005f3da) form2_midp_time_pane

0xb7af,	// (0x0005f3ea) input_focus_pane_cp51_ParamLimits

0xb7af,	// (0x0005f3ea) input_focus_pane_cp51

0xb7c7,	// (0x0005f402) form2_midp_label_pane_t1_ParamLimits

0xb7c7,	// (0x0005f402) form2_midp_label_pane_t1

0x7915,	// (0x0005b550) form2_mdip_text_pane_t1_ParamLimits

0x7915,	// (0x0005b550) form2_mdip_text_pane_t1

0x44a1,	// (0x000580dc) form2_midp_time_pane_t1

0xb810,	// (0x0005f44b) form2_midp_gauge_slider_pane_t1

0xb822,	// (0x0005f45d) form2_midp_gauge_slider_pane_t2

0xb834,	// (0x0005f46f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x00063744) form2_midp_gauge_slider_pane_t

0xb846,	// (0x0005f481) form2_midp_slider_pane

0xb852,	// (0x0005f48d) form2_midp_gauge_wait_pane_t1

0xb860,	// (0x0005f49b) form2_midp_wait_pane_ParamLimits

0xb860,	// (0x0005f49b) form2_midp_wait_pane

0xb88b,	// (0x0005f4c6) list_single_2graphic_pane_cp4_ParamLimits

0xb88b,	// (0x0005f4c6) list_single_2graphic_pane_cp4

0x9487,	// (0x0005d0c2) list_single_midp_graphic_pane_cp_ParamLimits

0x9487,	// (0x0005d0c2) list_single_midp_graphic_pane_cp

0xeb8f,	// (0x000627ca) list_highlight_pane_cp20

0xb8b3,	// (0x0005f4ee) list_single_2graphic_pane_g1_cp4

0xaebc,	// (0x0005eaf7) list_single_2graphic_pane_g2_cp4

0xb8bb,	// (0x0005f4f6) list_single_2graphic_pane_t1_cp4

0xebdd,	// (0x00062818) list_highlight_pane_cp21

0xb8ca,	// (0x0005f505) list_single_midp_graphic_pane_g4_cp

0xb8d9,	// (0x0005f514) list_single_midp_graphic_pane_t1_cp

0xb8ee,	// (0x0005f529) form2_mdip_string_pane_t1_ParamLimits

0xb8ee,	// (0x0005f529) form2_mdip_string_pane_t1

0xeb8f,	// (0x000627ca) bg_wml_button_pane_cp2

0xeb85,	// (0x000627c0) form2_midp_image_pane_g1

0x4682,	// (0x000582bd) list_double_large_graphic_pane_g5_ParamLimits

0x4682,	// (0x000582bd) list_double_large_graphic_pane_g5

0x8ad0,	// (0x0005c70b) midp_form_pane_ParamLimits

0xebdd,	// (0x00062818) main_apps_wheel_pane_ParamLimits

0x7151,	// (0x0005ad8c) popup_preview_window_ParamLimits

0x7151,	// (0x0005ad8c) popup_preview_window

0x730c,	// (0x0005af47) popup_touch_info_window_ParamLimits

0x730c,	// (0x0005af47) popup_touch_info_window

0x732a,	// (0x0005af65) popup_touch_menu_window_ParamLimits

0x732a,	// (0x0005af65) popup_touch_menu_window

0xeb7b,	// (0x000627b6) bg_popup_sub_pane_cp6

0xb9f5,	// (0x0005f630) list_touch_menu_pane

0xb9fd,	// (0x0005f638) list_single_touch_menu_pane_ParamLimits

0xb9fd,	// (0x0005f638) list_single_touch_menu_pane

0xba13,	// (0x0005f64e) list_single_touch_menu_pane_t1

0xebdd,	// (0x00062818) bg_popup_sub_pane_cp7_ParamLimits

0xebdd,	// (0x00062818) bg_popup_sub_pane_cp7

0xba21,	// (0x0005f65c) heading_sub_pane

0xba29,	// (0x0005f664) list_touch_info_pane_ParamLimits

0xba29,	// (0x0005f664) list_touch_info_pane

0xba38,	// (0x0005f673) list_single_touch_info_pane_ParamLimits

0xba38,	// (0x0005f673) list_single_touch_info_pane

0xba4a,	// (0x0005f685) list_single_touch_info_pane_t1

0xba58,	// (0x0005f693) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x00063752) list_single_touch_info_pane_t

0x8ac8,	// (0x0005c703) bg_popup_heading_pane_cp

0xba66,	// (0x0005f6a1) heading_sub_pane_t1

0x93ac,	// (0x0005cfe7) bg_popup_preview_window_pane_cp_ParamLimits

0x93ac,	// (0x0005cfe7) bg_popup_preview_window_pane_cp

0xba21,	// (0x0005f65c) heading_preview_pane

0xba29,	// (0x0005f664) list_preview_pane_ParamLimits

0xba29,	// (0x0005f664) list_preview_pane

0xba74,	// (0x0005f6af) popup_preview_window_g1

0xba38,	// (0x0005f673) list_single_preview_pane_ParamLimits

0xba38,	// (0x0005f673) list_single_preview_pane

0xba7c,	// (0x0005f6b7) list_single_preview_pane_g1

0xba84,	// (0x0005f6bf) list_single_preview_pane_t1

0xba4a,	// (0x0005f685) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x00063757) list_single_preview_pane_t

0xba92,	// (0x0005f6cd) bg_popup_heading_pane_cp2_ParamLimits

0xba92,	// (0x0005f6cd) bg_popup_heading_pane_cp2

0xbaa8,	// (0x0005f6e3) heading_preview_pane_g1

0xbab0,	// (0x0005f6eb) heading_preview_pane_t1_ParamLimits

0xbab0,	// (0x0005f6eb) heading_preview_pane_t1

0xec30,	// (0x0006286b) soft_indicator_pane_t1_ParamLimits

0xef19,	// (0x00062b54) scroll_pane_ParamLimits

0xf465,	// (0x000630a0) scroll_sc2_left_pane

0xf46e,	// (0x000630a9) scroll_sc2_right_pane

0xf48d,	// (0x000630c8) scroll_bg_pane_g1_ParamLimits

0xf4a2,	// (0x000630dd) scroll_bg_pane_g2_ParamLimits

0xf4ba,	// (0x000630f5) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00063319) scroll_bg_pane_g_ParamLimits

0xf48d,	// (0x000630c8) scroll_handle_pane_g1_ParamLimits

0xf4cf,	// (0x0006310a) scroll_handle_pane_g2_ParamLimits

0xf4ba,	// (0x000630f5) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00063320) scroll_handle_pane_g_ParamLimits

0x6dd4,	// (0x0005aa0f) popup_choice_list_window_ParamLimits

0x6dd4,	// (0x0005aa0f) popup_choice_list_window

0x926a,	// (0x0005cea5) choice_list_pane

0x92ec,	// (0x0005cf27) cell_toolbar_pane_t1

0x9314,	// (0x0005cf4f) toolbar_button_pane_ParamLimits

0xa3dc,	// (0x0005e017) ai_gene_pane_1_t2_ParamLimits

0xa3dc,	// (0x0005e017) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x00063548) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x00063548) ai_gene_pane_1_t

0xbacd,	// (0x0005f708) scroll_sc2_left_pane_g1

0xbacd,	// (0x0005f708) scroll_sc2_right_pane_g1

0x8e13,	// (0x0005ca4e) bg_popup_sub_pane_cp10

0xbad7,	// (0x0005f712) list_choice_list_pane

0xbaf0,	// (0x0005f72b) list_single_choice_list_pane_ParamLimits

0xbaf0,	// (0x0005f72b) list_single_choice_list_pane

0xbb03,	// (0x0005f73e) list_single_choice_list_pane_g1

0x629c,	// (0x00059ed7) list_single_choice_list_pane_t1_ParamLimits

0x629c,	// (0x00059ed7) list_single_choice_list_pane_t1

0xbb0b,	// (0x0005f746) choice_list_pane_g1

0xbb13,	// (0x0005f74e) choice_list_pane_t1

0xeb7b,	// (0x000627b6) input_focus_pane_cp11

0xf3da,	// (0x00063015) title_pane_stacon_g2_ParamLimits

0xf3da,	// (0x00063015) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x000632ff) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x000632ff) title_pane_stacon_g

0x8ac8,	// (0x0005c703) cursor_press_pane

0x6e7c,	// (0x0005aab7) popup_fep_hwr_window_ParamLimits

0x6e7c,	// (0x0005aab7) popup_fep_hwr_window

0x6ef4,	// (0x0005ab2f) popup_fep_vkb_window_ParamLimits

0x6ef4,	// (0x0005ab2f) popup_fep_vkb_window

0xbb21,	// (0x0005f75c) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x00063780) fep_vkb_side_pane_g_ParamLimits

0x796c,	// (0x0005b5a7) fep_hwr_candidate_pane_ParamLimits

0x796c,	// (0x0005b5a7) fep_hwr_candidate_pane

0x7996,	// (0x0005b5d1) fep_hwr_side_pane_ParamLimits

0x7996,	// (0x0005b5d1) fep_hwr_side_pane

0x79b6,	// (0x0005b5f1) fep_hwr_top_pane_ParamLimits

0x79b6,	// (0x0005b5f1) fep_hwr_top_pane

0x79ce,	// (0x0005b609) fep_hwr_write_pane_ParamLimits

0x79ce,	// (0x0005b609) fep_hwr_write_pane

0xfb45,	// (0x00063780) fep_vkb_side_pane_g

0xbb29,	// (0x0005f764) fep_hwr_top_pane_g1

0xbb3b,	// (0x0005f776) fep_hwr_top_pane_g2

0x7a08,	// (0x0005b643) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x0006375c) fep_hwr_top_pane_g

0x7a1d,	// (0x0005b658) fep_hwr_top_text_pane

0x12e5,	// (0x00054f20) fep_hwr_top_text_pane_g1

0xbb71,	// (0x0005f7ac) fep_hwr_top_text_pane_t1

0x7b13,	// (0x0005b74e) fep_hwr_candidate_pane_g1

0xbdb6,	// (0x0005f9f1) fep_vkb_keypad_pane_g3_ParamLimits

0xbdb6,	// (0x0005f9f1) fep_vkb_keypad_pane_g3

0xbdde,	// (0x0005fa19) fep_vkb_keypad_pane_g4_ParamLimits

0xbdde,	// (0x0005fa19) fep_vkb_keypad_pane_g4

0xbe4d,	// (0x0005fa88) fep_vkb_bottom_pane_g2_ParamLimits

0xbe4d,	// (0x0005fa88) fep_vkb_bottom_pane_g2

0x0001,

0xfb4c,	// (0x00063787) fep_vkb_bottom_pane_g_ParamLimits

0xfb4c,	// (0x00063787) fep_vkb_bottom_pane_g

0xbacd,	// (0x0005f708) cell_vkb_side_pane_g2

0x0001,

0xfb56,	// (0x00063791) cell_vkb_side_pane_g

0xbed8,	// (0x0005fb13) cell_vkb_side_pane_t1

0xbee6,	// (0x0005fb21) cell_vkb_side_pane_t1_copy1

0xbacd,	// (0x0005f708) bg_fep_vkb_candidate_pane_g2

0xc012,	// (0x0005fc4d) cell_vkb_candidate_pane_ParamLimits

0xbb7f,	// (0x0005f7ba) aid_size_cell_vkb_ParamLimits

0xbb7f,	// (0x0005f7ba) aid_size_cell_vkb

0xc012,	// (0x0005fc4d) cell_vkb_candidate_pane

0x7b3a,	// (0x0005b775) bg_popup_fep_shadow_pane_g1

0xbc0d,	// (0x0005f848) fep_vkb_bottom_pane_ParamLimits

0xbc0d,	// (0x0005f848) fep_vkb_bottom_pane

0xbc43,	// (0x0005f87e) fep_vkb_candidate_pane_ParamLimits

0xbc43,	// (0x0005f87e) fep_vkb_candidate_pane

0xbc5f,	// (0x0005f89a) fep_vkb_keypad_pane_ParamLimits

0xbc5f,	// (0x0005f89a) fep_vkb_keypad_pane

0xbc9e,	// (0x0005f8d9) fep_vkb_side_pane_ParamLimits

0xbc9e,	// (0x0005f8d9) fep_vkb_side_pane

0xbcda,	// (0x0005f915) fep_vkb_top_pane_ParamLimits

0xbcda,	// (0x0005f915) fep_vkb_top_pane

0xbd0f,	// (0x0005f94a) fep_vkb_top_pane_g1_ParamLimits

0xbd0f,	// (0x0005f94a) fep_vkb_top_pane_g1

0xbd1e,	// (0x0005f959) fep_vkb_top_pane_g2_ParamLimits

0xbd1e,	// (0x0005f959) fep_vkb_top_pane_g2

0xbd2d,	// (0x0005f968) fep_vkb_top_pane_g3_ParamLimits

0xbd2d,	// (0x0005f968) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x00063777) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x00063777) fep_vkb_top_pane_g

0xbd4b,	// (0x0005f986) fep_vkb_top_text_pane_ParamLimits

0xbd4b,	// (0x0005f986) fep_vkb_top_text_pane

0xbd5c,	// (0x0005f997) fep_vkb_side_pane_g1_ParamLimits

0xbd5c,	// (0x0005f997) fep_vkb_side_pane_g1

0xbda5,	// (0x0005f9e0) grid_vkb_side_pane_ParamLimits

0xbda5,	// (0x0005f9e0) grid_vkb_side_pane

0x7b42,	// (0x0005b77d) bg_popup_fep_shadow_pane_g2

0x7b4b,	// (0x0005b786) bg_popup_fep_shadow_pane_g3

0x7b53,	// (0x0005b78e) bg_popup_fep_shadow_pane_g4

0x7b5c,	// (0x0005b797) bg_popup_fep_shadow_pane_g5

0x7b66,	// (0x0005b7a1) bg_popup_fep_shadow_pane_g6

0x7b6e,	// (0x0005b7a9) bg_popup_fep_shadow_pane_g7

0xf1cf,	// (0x00062e0a) bg_popup_fep_shadow_pane_g8

0xbdfc,	// (0x0005fa37) grid_vkb_keypad_number_pane_ParamLimits

0xbdfc,	// (0x0005fa37) grid_vkb_keypad_number_pane

0xbe0c,	// (0x0005fa47) grid_vkb_keypad_pane_ParamLimits

0xbe0c,	// (0x0005fa47) grid_vkb_keypad_pane

0xbe32,	// (0x0005fa6d) fep_vkb_bottom_pane_g1_ParamLimits

0xbe32,	// (0x0005fa6d) fep_vkb_bottom_pane_g1

0xbe5b,	// (0x0005fa96) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbe5b,	// (0x0005fa96) grid_vkb_keypad_bottom_left_pane

0xbe70,	// (0x0005faab) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbe70,	// (0x0005faab) grid_vkb_keypad_bottom_right_pane

0xbe85,	// (0x0005fac0) fep_vkb_top_text_pane_g1

0xbea0,	// (0x0005fadb) fep_vkb_top_text_pane_t1

0xbeb5,	// (0x0005faf0) cell_vkb_side_pane_ParamLimits

0xbeb5,	// (0x0005faf0) cell_vkb_side_pane

0xbacd,	// (0x0005f708) cell_vkb_side_pane_g1

0xbef4,	// (0x0005fb2f) cell_vkb_keypad_pane_ParamLimits

0xbef4,	// (0x0005fb2f) cell_vkb_keypad_pane

0xbf69,	// (0x0005fba4) cell_vkb_keypad_pane_g1

0x0008,

0xfb69,	// (0x000637a4) bg_popup_fep_shadow_pane_g

0x7b80,	// (0x0005b7bb) cell_hwr_side_pane_g1

0x7b80,	// (0x0005b7bb) cell_hwr_side_pane_g2

0xbf73,	// (0x0005fbae) cell_vkb_keypad_pane_t1

0xbf81,	// (0x0005fbbc) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbf81,	// (0x0005fbbc) cell_vkb_keypad_bottom_left_pane

0xbf9e,	// (0x0005fbd9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbf9e,	// (0x0005fbd9) cell_vkb_keypad_bottom_right_pane

0xbacd,	// (0x0005f708) cell_vkb_keypad_bottom_left_pane_g1

0xbacd,	// (0x0005f708) cell_vkb_keypad_bottom_right_pane_g1

0xbfd7,	// (0x0005fc12) cell_vkb_keypad_number_pane_ParamLimits

0xbfd7,	// (0x0005fc12) cell_vkb_keypad_number_pane

0xbff6,	// (0x0005fc31) cell_vkb_keypad_number_pane_g1

0xc000,	// (0x0005fc3b) cell_vkb_keypad_number_pane_g2

0xc009,	// (0x0005fc44) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5b,	// (0x00063796) cell_vkb_keypad_number_pane_g

0xbf73,	// (0x0005fbae) cell_vkb_keypad_number_pane_t1

0xc02d,	// (0x0005fc68) fep_vkb_candidate_pane_g1

0x0001,

0xfb7c,	// (0x000637b7) cell_hwr_side_pane_g

0xc046,	// (0x0005fc81) cell_hwr_side_pane_t1

0x7b8a,	// (0x0005b7c5) cell_hwr_side_pane_t1_copy1

0x7b98,	// (0x0005b7d3) cell_hwr_candidate_pane_g1

0x7bc7,	// (0x0005b802) cell_hwr_candidate_pane_t1

0xbacd,	// (0x0005f708) cell_vkb_candidate_pane_g2

0xc08a,	// (0x0005fcc5) cell_vkb_candidate_pane_t1

0x7933,	// (0x0005b56e) bg_popup_fep_shadow_pane_ParamLimits

0x7933,	// (0x0005b56e) bg_popup_fep_shadow_pane

0x79e8,	// (0x0005b623) bg_fep_hwr_top_pane_g4

0xbb4d,	// (0x0005f788) bg_hwr_side_pane_g1_ParamLimits

0xbb4d,	// (0x0005f788) bg_hwr_side_pane_g1

0x7a59,	// (0x0005b694) cell_hwr_side_pane_ParamLimits

0x7a59,	// (0x0005b694) cell_hwr_side_pane

0x7a94,	// (0x0005b6cf) fep_hwr_write_pane_g1_ParamLimits

0x7a94,	// (0x0005b6cf) fep_hwr_write_pane_g1

0x7aa1,	// (0x0005b6dc) fep_hwr_write_pane_g2_ParamLimits

0x7aa1,	// (0x0005b6dc) fep_hwr_write_pane_g2

0x7aae,	// (0x0005b6e9) fep_hwr_write_pane_g3_ParamLimits

0x7aae,	// (0x0005b6e9) fep_hwr_write_pane_g3

0x7abc,	// (0x0005b6f7) fep_hwr_write_pane_g4_ParamLimits

0x7abc,	// (0x0005b6f7) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x00063763) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x00063763) fep_hwr_write_pane_g

0x79e8,	// (0x0005b623) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x79e8,	// (0x0005b623) bg_fep_hwr_candidate_pane_g2

0x7ad1,	// (0x0005b70c) cell_hwr_candidate_pane_ParamLimits

0x7ad1,	// (0x0005b70c) cell_hwr_candidate_pane

0x7b13,	// (0x0005b74e) fep_hwr_candidate_pane_g1_ParamLimits

0xbbad,	// (0x0005f7e8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbbad,	// (0x0005f7e8) bg_popup_fep_shadow_pane_cp2

0xbd3d,	// (0x0005f978) fep_vkb_top_pane_g4_ParamLimits

0xbd3d,	// (0x0005f978) fep_vkb_top_pane_g4

0xbd83,	// (0x0005f9be) fep_vkb_side_pane_g2_ParamLimits

0xbd83,	// (0x0005f9be) fep_vkb_side_pane_g2

0x5fb4,	// (0x00059bef) list_setting_pane_t4_ParamLimits

0x5fb4,	// (0x00059bef) list_setting_pane_t4

0x604e,	// (0x00059c89) list_setting_number_pane_t5_ParamLimits

0x604e,	// (0x00059c89) list_setting_number_pane_t5

0x6626,	// (0x0005a261) list_double_heading_pane_cp2_ParamLimits

0x6626,	// (0x0005a261) list_double_heading_pane_cp2

0xaa83,	// (0x0005e6be) list_double_heading_pane_g1_cp2_ParamLimits

0xaa83,	// (0x0005e6be) list_double_heading_pane_g1_cp2

0xc098,	// (0x0005fcd3) list_double_heading_pane_g2_cp2_ParamLimits

0xc098,	// (0x0005fcd3) list_double_heading_pane_g2_cp2

0xc0ac,	// (0x0005fce7) list_double_heading_pane_t1_cp2_ParamLimits

0xc0ac,	// (0x0005fce7) list_double_heading_pane_t1_cp2

0xc0c2,	// (0x0005fcfd) list_double_heading_pane_t2_cp2_ParamLimits

0xc0c2,	// (0x0005fcfd) list_double_heading_pane_t2_cp2

0xeb73,	// (0x000627ae) aid_value_unit2

0x5538,	// (0x00059173) popup_preview_fixed_window

0xed15,	// (0x00062950) bg_popup_preview_window_pane_cp02

0xc0d4,	// (0x0005fd0f) list_preview_fixed_pane

0xc11a,	// (0x0005fd55) list_empty_pane_fp_ParamLimits

0xc11a,	// (0x0005fd55) list_empty_pane_fp

0xc11a,	// (0x0005fd55) list_single_cale_day_pane_fp_ParamLimits

0xc11a,	// (0x0005fd55) list_single_cale_day_pane_fp

0xc11a,	// (0x0005fd55) list_single_graphic_heading_pane_fp_ParamLimits

0xc11a,	// (0x0005fd55) list_single_graphic_heading_pane_fp

0xc11a,	// (0x0005fd55) list_single_graphic_pane_fp_ParamLimits

0xc11a,	// (0x0005fd55) list_single_graphic_pane_fp

0xc11a,	// (0x0005fd55) list_single_heading_pane_fp_ParamLimits

0xc11a,	// (0x0005fd55) list_single_heading_pane_fp

0xc11a,	// (0x0005fd55) list_single_pane_fp_ParamLimits

0xc11a,	// (0x0005fd55) list_single_pane_fp

0xc130,	// (0x0005fd6b) list_single_pane_fp_g1_ParamLimits

0xc130,	// (0x0005fd6b) list_single_pane_fp_g1

0xc13c,	// (0x0005fd77) list_single_pane_fp_g2_ParamLimits

0xc13c,	// (0x0005fd77) list_single_pane_fp_g2

0xc148,	// (0x0005fd83) list_single_pane_fp_g3_ParamLimits

0xc148,	// (0x0005fd83) list_single_pane_fp_g3

0xc15c,	// (0x0005fd97) list_single_pane_fp_g4_ParamLimits

0xc15c,	// (0x0005fd97) list_single_pane_fp_g4

0x0003,

0xfb8f,	// (0x000637ca) list_single_pane_fp_g_ParamLimits

0xfb8f,	// (0x000637ca) list_single_pane_fp_g

0x44b4,	// (0x000580ef) list_single_pane_fp_t1_ParamLimits

0x44b4,	// (0x000580ef) list_single_pane_fp_t1

0x44cb,	// (0x00058106) list_single_graphic_pane_fp_g1_ParamLimits

0x44cb,	// (0x00058106) list_single_graphic_pane_fp_g1

0xc130,	// (0x0005fd6b) list_single_graphic_pane_fp_g2_ParamLimits

0xc130,	// (0x0005fd6b) list_single_graphic_pane_fp_g2

0xc13c,	// (0x0005fd77) list_single_graphic_pane_fp_g3_ParamLimits

0xc13c,	// (0x0005fd77) list_single_graphic_pane_fp_g3

0xc148,	// (0x0005fd83) list_single_graphic_pane_fp_g4_ParamLimits

0xc148,	// (0x0005fd83) list_single_graphic_pane_fp_g4

0xc15c,	// (0x0005fd97) list_single_graphic_pane_fp_g5_ParamLimits

0xc15c,	// (0x0005fd97) list_single_graphic_pane_fp_g5

0x0004,

0xfb98,	// (0x000637d3) list_single_graphic_pane_fp_g_ParamLimits

0xfb98,	// (0x000637d3) list_single_graphic_pane_fp_g

0x44d7,	// (0x00058112) list_single_graphic_pane_fp_t1_ParamLimits

0x44d7,	// (0x00058112) list_single_graphic_pane_fp_t1

0x44cb,	// (0x00058106) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x44cb,	// (0x00058106) list_single_graphic_heading_pane_fp_g1

0xc130,	// (0x0005fd6b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc130,	// (0x0005fd6b) list_single_graphic_heading_pane_fp_g2

0xc13c,	// (0x0005fd77) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc13c,	// (0x0005fd77) list_single_graphic_heading_pane_fp_g3

0xc148,	// (0x0005fd83) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc148,	// (0x0005fd83) list_single_graphic_heading_pane_fp_g4

0xc15c,	// (0x0005fd97) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc15c,	// (0x0005fd97) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb98,	// (0x000637d3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb98,	// (0x000637d3) list_single_graphic_heading_pane_fp_g

0x44ed,	// (0x00058128) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x44ed,	// (0x00058128) list_single_graphic_heading_pane_fp_t1

0x4503,	// (0x0005813e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4503,	// (0x0005813e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x000637de) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x000637de) list_single_graphic_heading_pane_fp_t

0x4515,	// (0x00058150) list_single_cale_day_pane_fp_g1_ParamLimits

0x4515,	// (0x00058150) list_single_cale_day_pane_fp_g1

0xc168,	// (0x0005fda3) list_single_cale_day_pane_fp_g2_ParamLimits

0xc168,	// (0x0005fda3) list_single_cale_day_pane_fp_g2

0xa9ae,	// (0x0005e5e9) list_single_cale_day_pane_fp_g3_ParamLimits

0xa9ae,	// (0x0005e5e9) list_single_cale_day_pane_fp_g3

0xa9d6,	// (0x0005e611) list_single_cale_day_pane_fp_g4_ParamLimits

0xa9d6,	// (0x0005e611) list_single_cale_day_pane_fp_g4

0xa9fa,	// (0x0005e635) list_single_cale_day_pane_fp_g5_ParamLimits

0xa9fa,	// (0x0005e635) list_single_cale_day_pane_fp_g5

0x0004,

0xfba8,	// (0x000637e3) list_single_cale_day_pane_fp_g_ParamLimits

0xfba8,	// (0x000637e3) list_single_cale_day_pane_fp_g

0x454d,	// (0x00058188) list_single_cale_day_pane_fp_t1_ParamLimits

0x454d,	// (0x00058188) list_single_cale_day_pane_fp_t1

0x4573,	// (0x000581ae) list_single_cale_day_pane_fp_t2_ParamLimits

0x4573,	// (0x000581ae) list_single_cale_day_pane_fp_t2

0x458c,	// (0x000581c7) list_single_cale_day_pane_fp_t3_ParamLimits

0x458c,	// (0x000581c7) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb3,	// (0x000637ee) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb3,	// (0x000637ee) list_single_cale_day_pane_fp_t

0xc130,	// (0x0005fd6b) list_empty_pane_fp_g1_ParamLimits

0xc130,	// (0x0005fd6b) list_empty_pane_fp_g1

0x45a5,	// (0x000581e0) list_empty_pane_fp_t1

0x45b3,	// (0x000581ee) list_empty_pane_fp_t2

0x0001,

0xfbba,	// (0x000637f5) list_empty_pane_fp_t

0xc130,	// (0x0005fd6b) list_single_heading_pane_fp_g1_ParamLimits

0xc130,	// (0x0005fd6b) list_single_heading_pane_fp_g1

0xc13c,	// (0x0005fd77) list_single_heading_pane_fp_g2_ParamLimits

0xc13c,	// (0x0005fd77) list_single_heading_pane_fp_g2

0xc148,	// (0x0005fd83) list_single_heading_pane_fp_g3_ParamLimits

0xc148,	// (0x0005fd83) list_single_heading_pane_fp_g3

0x0002,

0xfbbf,	// (0x000637fa) list_single_heading_pane_fp_g_ParamLimits

0xfbbf,	// (0x000637fa) list_single_heading_pane_fp_g

0x45c1,	// (0x000581fc) list_single_heading_pane_fp_t1_ParamLimits

0x45c1,	// (0x000581fc) list_single_heading_pane_fp_t1

0x45d3,	// (0x0005820e) list_single_heading_pane_fp_t2_ParamLimits

0x45d3,	// (0x0005820e) list_single_heading_pane_fp_t2

0x0001,

0xfbc6,	// (0x00063801) list_single_heading_pane_fp_t_ParamLimits

0xfbc6,	// (0x00063801) list_single_heading_pane_fp_t

0x62f4,	// (0x00059f2f) aid_size_cell_fast

0xecea,	// (0x00062925) soft_indicator_pane_cp1_t1

0x62fd,	// (0x00059f38) cell_app_pane_cp2_ParamLimits

0x62fd,	// (0x00059f38) cell_app_pane_cp2

0x7955,	// (0x0005b590) fep_hwr_candidate_drop_down_list_pane

0x7b2d,	// (0x0005b768) fep_hwr_candidate_pane_g3_ParamLimits

0x7b2d,	// (0x0005b768) fep_hwr_candidate_pane_g3

0x3428,	// (0x00057063) fep_hwr_candidate_pane_g4_ParamLimits

0x3428,	// (0x00057063) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x00063770) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x00063770) fep_hwr_candidate_pane_g

0xbc32,	// (0x0005f86d) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbc32,	// (0x0005f86d) fep_vkb_candidate_drop_down_list_pane

0xc035,	// (0x0005fc70) fep_vkb_candidate_pane_g3

0xc03d,	// (0x0005fc78) fep_vkb_candidate_pane_g4

0x0002,

0xfb62,	// (0x0006379d) fep_vkb_candidate_pane_g

0x7b98,	// (0x0005b7d3) cell_hwr_candidate_pane_g1_ParamLimits

0x7ba6,	// (0x0005b7e1) cell_hwr_candidate_pane_g3_ParamLimits

0x7ba6,	// (0x0005b7e1) cell_hwr_candidate_pane_g3

0xcafb,	// (0x00060736) cell_hwr_candidate_pane_g4_ParamLimits

0xcafb,	// (0x00060736) cell_hwr_candidate_pane_g4

0x0002,

0xfb81,	// (0x000637bc) cell_hwr_candidate_pane_g_ParamLimits

0xfb81,	// (0x000637bc) cell_hwr_candidate_pane_g

0xc054,	// (0x0005fc8f) cell_vkb_candidate_pane_g3_ParamLimits

0xc054,	// (0x0005fc8f) cell_vkb_candidate_pane_g3

0xc06f,	// (0x0005fcaa) cell_vkb_candidate_pane_g4_ParamLimits

0xc06f,	// (0x0005fcaa) cell_vkb_candidate_pane_g4

0xc174,	// (0x0005fdaf) cell_app_pane_cp2_g1_ParamLimits

0xc174,	// (0x0005fdaf) cell_app_pane_cp2_g1

0xc192,	// (0x0005fdcd) cell_app_pane_cp2_g2_ParamLimits

0xc192,	// (0x0005fdcd) cell_app_pane_cp2_g2

0x0001,

0xfbcb,	// (0x00063806) cell_app_pane_cp2_g_ParamLimits

0xfbcb,	// (0x00063806) cell_app_pane_cp2_g

0xc19e,	// (0x0005fdd9) cell_app_pane_cp2_t1_ParamLimits

0xc19e,	// (0x0005fdd9) cell_app_pane_cp2_t1

0xef9d,	// (0x00062bd8) grid_highlight_pane_cp1_ParamLimits

0xef9d,	// (0x00062bd8) grid_highlight_pane_cp1

0x7be5,	// (0x0005b820) cell_hwr_candidate_pane_cp1_ParamLimits

0x7be5,	// (0x0005b820) cell_hwr_candidate_pane_cp1

0x7b98,	// (0x0005b7d3) fep_hwr_candidate_drop_down_list_pane_g1

0x7c04,	// (0x0005b83f) fep_hwr_candidate_drop_down_list_pane_g2

0x7c11,	// (0x0005b84c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x0006380b) fep_hwr_candidate_drop_down_list_pane_g

0x7c1e,	// (0x0005b859) fep_hwr_candidate_drop_down_list_scroll_pane

0x7c27,	// (0x0005b862) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7c27,	// (0x0005b862) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7c34,	// (0x0005b86f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7c34,	// (0x0005b86f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7c41,	// (0x0005b87c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7c41,	// (0x0005b87c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7c4e,	// (0x0005b889) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c4e,	// (0x0005b889) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c69,	// (0x0005b8a4) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c69,	// (0x0005b8a4) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7c84,	// (0x0005b8bf) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7c84,	// (0x0005b8bf) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7c9f,	// (0x0005b8da) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7c9f,	// (0x0005b8da) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7cba,	// (0x0005b8f5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7cba,	// (0x0005b8f5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x00063812) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x00063812) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc1b0,	// (0x0005fdeb) cell_vkb_candidate_pane_cp1_ParamLimits

0xc1b0,	// (0x0005fdeb) cell_vkb_candidate_pane_cp1

0xbd3d,	// (0x0005f978) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbd3d,	// (0x0005f978) fep_vkb_candidate_drop_down_list_pane_g1

0xc1d0,	// (0x0005fe0b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc1d0,	// (0x0005fe0b) fep_vkb_candidate_drop_down_list_pane_g2

0xc1dd,	// (0x0005fe18) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc1dd,	// (0x0005fe18) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x00063823) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe8,	// (0x00063823) fep_vkb_candidate_drop_down_list_pane_g

0xc1ea,	// (0x0005fe25) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc1ea,	// (0x0005fe25) fep_vkb_candidate_drop_down_list_scroll_pane

0xc1f7,	// (0x0005fe32) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc1f7,	// (0x0005fe32) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc204,	// (0x0005fe3f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc204,	// (0x0005fe3f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc210,	// (0x0005fe4b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc210,	// (0x0005fe4b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc21c,	// (0x0005fe57) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc21c,	// (0x0005fe57) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc23d,	// (0x0005fe78) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc23d,	// (0x0005fe78) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc25e,	// (0x0005fe99) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc25e,	// (0x0005fe99) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc27f,	// (0x0005feba) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc27f,	// (0x0005feba) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc2a0,	// (0x0005fedb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc2a0,	// (0x0005fedb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbef,	// (0x0006382a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbef,	// (0x0006382a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5652,	// (0x0005928d) title_pane_g1_ParamLimits

0x565f,	// (0x0005929a) title_pane_g2_ParamLimits

0xf54e,	// (0x00063189) title_pane_g_ParamLimits

0x12dd,	// (0x00054f18) aid_call2_pane

0x12d5,	// (0x00054f10) aid_call_pane

0x12e5,	// (0x00054f20) popup_clock_analogue_window_g1

0x12e5,	// (0x00054f20) popup_clock_analogue_window_g2

0x6607,	// (0x0005a242) popup_clock_analogue_window_g3

0x6610,	// (0x0005a24b) popup_clock_analogue_window_g4

0xeb85,	// (0x000627c0) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0006332e) popup_clock_analogue_window_g

0x6618,	// (0x0005a253) popup_clock_analogue_window_t1

0x6650,	// (0x0005a28b) clock_digital_number_pane_ParamLimits

0x6650,	// (0x0005a28b) clock_digital_number_pane

0x665c,	// (0x0005a297) clock_digital_number_pane_cp02_ParamLimits

0x665c,	// (0x0005a297) clock_digital_number_pane_cp02

0x6668,	// (0x0005a2a3) clock_digital_number_pane_cp03_ParamLimits

0x6668,	// (0x0005a2a3) clock_digital_number_pane_cp03

0x6674,	// (0x0005a2af) clock_digital_number_pane_cp04_ParamLimits

0x6674,	// (0x0005a2af) clock_digital_number_pane_cp04

0x6680,	// (0x0005a2bb) clock_digital_separator_pane_ParamLimits

0x6680,	// (0x0005a2bb) clock_digital_separator_pane

0x668c,	// (0x0005a2c7) popup_clock_digital_window_t1_ParamLimits

0x668c,	// (0x0005a2c7) popup_clock_digital_window_t1

0xeb85,	// (0x000627c0) clock_digital_number_pane_g1

0xeb85,	// (0x000627c0) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00063339) clock_digital_number_pane_g

0xeb85,	// (0x000627c0) clock_digital_separator_pane_g1

0xeb85,	// (0x000627c0) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00063339) clock_digital_separator_pane_g

0x8e35,	// (0x0005ca70) aid_fill_nsta_ParamLimits

0x8f81,	// (0x0005cbbc) indicator_nsta_pane_ParamLimits

0x90fa,	// (0x0005cd35) popup_clock_analogue_window

0x90fa,	// (0x0005cd35) popup_clock_digital_window

0xebdd,	// (0x00062818) grid_indicator_nsta_pane_ParamLimits

0xb4d8,	// (0x0005f113) clock_nsta_pane_t2

0x0001,

0xfab5,	// (0x000636f0) clock_nsta_pane_t

0x6532,	// (0x0005a16d) aid_size_max_handle

0x653c,	// (0x0005a177) aid_size_min_handle

0x8ac8,	// (0x0005c703) editor_scroll_pane

0xc2bb,	// (0x0005fef6) ex_editor_pane

0xf27e,	// (0x00062eb9) scroll_pane_cp13

0xef45,	// (0x00062b80) scroll_pane_cp14

0x1314,	// (0x00054f4f) scroll_pane_cp36

0x663a,	// (0x0005a275) list_single_graphic_hl_pane_cp2_ParamLimits

0x663a,	// (0x0005a275) list_single_graphic_hl_pane_cp2

0x7778,	// (0x0005b3b3) list_single_graphic_hl_pane_ParamLimits

0x7778,	// (0x0005b3b3) list_single_graphic_hl_pane

0x7cd5,	// (0x0005b910) aid_size_min_hl_cp1

0xc2c3,	// (0x0005fefe) list_highlight_pane_cp34_ParamLimits

0xc2c3,	// (0x0005fefe) list_highlight_pane_cp34

0xc2d4,	// (0x0005ff0f) list_single_graphic_hl_pane_g1_ParamLimits

0xc2d4,	// (0x0005ff0f) list_single_graphic_hl_pane_g1

0x7cde,	// (0x0005b919) list_single_graphic_hl_pane_g2_ParamLimits

0x7cde,	// (0x0005b919) list_single_graphic_hl_pane_g2

0x7cde,	// (0x0005b919) list_single_graphic_hl_pane_g3_ParamLimits

0x7cde,	// (0x0005b919) list_single_graphic_hl_pane_g3

0x8a39,	// (0x0005c674) list_single_graphic_hl_pane_g4_ParamLimits

0x8a39,	// (0x0005c674) list_single_graphic_hl_pane_g4

0x7cea,	// (0x0005b925) list_single_graphic_hl_pane_g5_ParamLimits

0x7cea,	// (0x0005b925) list_single_graphic_hl_pane_g5

0x0004,

0xfc00,	// (0x0006383b) list_single_graphic_hl_pane_g_ParamLimits

0xfc00,	// (0x0006383b) list_single_graphic_hl_pane_g

0x7cfe,	// (0x0005b939) list_single_graphic_hl_pane_t1_ParamLimits

0x7cfe,	// (0x0005b939) list_single_graphic_hl_pane_t1

0xc2e1,	// (0x0005ff1c) aid_size_min_hl_cp2

0xc2ea,	// (0x0005ff25) list_highlight_pane_cp34_cp2_ParamLimits

0xc2ea,	// (0x0005ff25) list_highlight_pane_cp34_cp2

0xc2d4,	// (0x0005ff0f) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc2d4,	// (0x0005ff0f) list_single_graphic_hl_pane_g1_cp2

0xc2f7,	// (0x0005ff32) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc2f7,	// (0x0005ff32) list_single_graphic_hl_pane_g2_cp2

0xc303,	// (0x0005ff3e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc303,	// (0x0005ff3e) list_single_graphic_hl_pane_g3_cp2

0x6b71,	// (0x0005a7ac) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x6b71,	// (0x0005a7ac) list_single_graphic_hl_pane_g4_cp2

0xc311,	// (0x0005ff4c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc311,	// (0x0005ff4c) list_single_graphic_hl_pane_g5_cp2

0x6c74,	// (0x0005a8af) control_pane_g4_ParamLimits

0x6c74,	// (0x0005a8af) control_pane_g4

0x8e13,	// (0x0005ca4e) bg_popup_sub_pane_cp10_ParamLimits

0xbad7,	// (0x0005f712) list_choice_list_pane_ParamLimits

0xbae6,	// (0x0005f721) scroll_pane_cp23

0xed15,	// (0x00062950) bg_popup_preview_window_pane_cp02_ParamLimits

0xc0d4,	// (0x0005fd0f) list_preview_fixed_pane_ParamLimits

0xc0ea,	// (0x0005fd25) list_preview_fixed_pane_cp_ParamLimits

0xc0ea,	// (0x0005fd25) list_preview_fixed_pane_cp

0xc0f6,	// (0x0005fd31) popup_preview_fixed_window_g1_ParamLimits

0xc0f6,	// (0x0005fd31) popup_preview_fixed_window_g1

0xc102,	// (0x0005fd3d) popup_preview_fixed_window_g2_ParamLimits

0xc102,	// (0x0005fd3d) popup_preview_fixed_window_g2

0x0002,

0xfb88,	// (0x000637c3) popup_preview_fixed_window_g_ParamLimits

0xfb88,	// (0x000637c3) popup_preview_fixed_window_g

0x640c,	// (0x0005a047) aid_navi_side_left_pane_ParamLimits

0x6421,	// (0x0005a05c) aid_navi_side_right_pane_ParamLimits

0x6439,	// (0x0005a074) navi_icon_pane_stacon_ParamLimits

0x644d,	// (0x0005a088) navi_navi_pane_stacon_ParamLimits

0x6439,	// (0x0005a074) navi_text_pane_stacon_ParamLimits

0x5407,	// (0x00059042) main_text_info_pane

0xc33b,	// (0x0005ff76) listscroll_text_info_pane

0xc343,	// (0x0005ff7e) list_text_info_pane_ParamLimits

0xc343,	// (0x0005ff7e) list_text_info_pane

0xc352,	// (0x0005ff8d) scroll_pane_cp24_ParamLimits

0xc352,	// (0x0005ff8d) scroll_pane_cp24

0xc370,	// (0x0005ffab) list_text_info_pane_t1_ParamLimits

0xc370,	// (0x0005ffab) list_text_info_pane_t1

0x6df0,	// (0x0005aa2b) popup_fast_swap2_window_ParamLimits

0x6df0,	// (0x0005aa2b) popup_fast_swap2_window

0xc3a4,	// (0x0005ffdf) aid_size_cell_fast2

0xeb7b,	// (0x000627b6) bg_popup_window_pane_cp17

0x979f,	// (0x0005d3da) heading_pane_cp2

0xee49,	// (0x00062a84) listscroll_fast2_pane

0xc3ae,	// (0x0005ffe9) grid_fast2_pane

0xc3b8,	// (0x0005fff3) listscroll_fast2_pane_g1

0xc3c0,	// (0x0005fffb) listscroll_fast2_pane_g2

0x0001,

0xfc0b,	// (0x00063846) listscroll_fast2_pane_g

0xf27e,	// (0x00062eb9) scroll_pane_cp26

0xc3ca,	// (0x00060005) cell_fast2_pane_ParamLimits

0xc3ca,	// (0x00060005) cell_fast2_pane

0xc3df,	// (0x0006001a) cell_fast2_pane_g1

0xc3e8,	// (0x00060023) cell_fast2_pane_g2

0xc3f1,	// (0x0006002c) cell_fast2_pane_g3

0x0002,

0xfc10,	// (0x0006384b) cell_fast2_pane_g

0xee7c,	// (0x00062ab7) grid_highlight_pane_cp9

0x6db8,	// (0x0005a9f3) main_eswt_pane_ParamLimits

0x6db8,	// (0x0005a9f3) main_eswt_pane

0xc367,	// (0x0005ffa2) list_single_text_info_pane

0xc3f9,	// (0x00060034) eswt_ctrl_button_pane

0xc3f9,	// (0x00060034) eswt_ctrl_canvas_pane

0xc401,	// (0x0006003c) eswt_ctrl_combo_pane

0xc3f9,	// (0x00060034) eswt_ctrl_default_pane

0xc3f9,	// (0x00060034) eswt_ctrl_label_pane

0xc409,	// (0x00060044) eswt_ctrl_wait_pane

0xc411,	// (0x0006004c) eswt_shell_pane

0xeb7b,	// (0x000627b6) listscroll_eswt_app_pane

0xc431,	// (0x0006006c) popup_eswt_tasktip_window_ParamLimits

0xc431,	// (0x0006006c) popup_eswt_tasktip_window

0x93ac,	// (0x0005cfe7) bg_popup_window_pane_cp18

0xc442,	// (0x0006007d) eswt_control_pane_g1_ParamLimits

0xc442,	// (0x0006007d) eswt_control_pane_g1

0xc44f,	// (0x0006008a) eswt_control_pane_g2_ParamLimits

0xc44f,	// (0x0006008a) eswt_control_pane_g2

0xc45c,	// (0x00060097) eswt_control_pane_g3_ParamLimits

0xc45c,	// (0x00060097) eswt_control_pane_g3

0xc469,	// (0x000600a4) eswt_control_pane_g4_ParamLimits

0xc469,	// (0x000600a4) eswt_control_pane_g4

0x0003,

0xfc17,	// (0x00063852) eswt_control_pane_g_ParamLimits

0xfc17,	// (0x00063852) eswt_control_pane_g

0xef9d,	// (0x00062bd8) bg_button_pane_ParamLimits

0xef9d,	// (0x00062bd8) bg_button_pane

0xee91,	// (0x00062acc) common_borders_pane_copy2_ParamLimits

0xee91,	// (0x00062acc) common_borders_pane_copy2

0xc476,	// (0x000600b1) control_button_pane_g1_ParamLimits

0xc476,	// (0x000600b1) control_button_pane_g1

0xc482,	// (0x000600bd) control_button_pane_g2_ParamLimits

0xc482,	// (0x000600bd) control_button_pane_g2

0xc48e,	// (0x000600c9) control_button_pane_g3_ParamLimits

0xc48e,	// (0x000600c9) control_button_pane_g3

0x0002,

0xfc20,	// (0x0006385b) control_button_pane_g_ParamLimits

0xfc20,	// (0x0006385b) control_button_pane_g

0xc4a2,	// (0x000600dd) control_button_pane_t1

0xc4b0,	// (0x000600eb) control_button_pane_t2

0x0001,

0xfc27,	// (0x00063862) control_button_pane_t

0x9320,	// (0x0005cf5b) bg_button_pane_g1

0x9330,	// (0x0005cf6b) bg_button_pane_g2

0x9328,	// (0x0005cf63) bg_button_pane_g3

0x9340,	// (0x0005cf7b) bg_button_pane_g4

0x9338,	// (0x0005cf73) bg_button_pane_g5

0x9348,	// (0x0005cf83) bg_button_pane_g6

0x9350,	// (0x0005cf8b) bg_button_pane_g7

0x9360,	// (0x0005cf9b) bg_button_pane_g8

0x9358,	// (0x0005cf93) bg_button_pane_g9

0x0008,

0xf861,	// (0x0006349c) bg_button_pane_g

0xba92,	// (0x0005f6cd) common_borders_pane_ParamLimits

0xba92,	// (0x0005f6cd) common_borders_pane

0xc442,	// (0x0006007d) eswt_control_pane_g1_copy1_ParamLimits

0xc442,	// (0x0006007d) eswt_control_pane_g1_copy1

0xc44f,	// (0x0006008a) eswt_control_pane_g2_copy1_ParamLimits

0xc44f,	// (0x0006008a) eswt_control_pane_g2_copy1

0xc45c,	// (0x00060097) eswt_control_pane_g3_copy1_ParamLimits

0xc45c,	// (0x00060097) eswt_control_pane_g3_copy1

0xc469,	// (0x000600a4) eswt_control_pane_g4_copy1_ParamLimits

0xc469,	// (0x000600a4) eswt_control_pane_g4_copy1

0xbacd,	// (0x0005f708) bg_eswt_ctrl_canvas_pane_g1

0xba92,	// (0x0005f6cd) common_borders_pane_cp2_ParamLimits

0xba92,	// (0x0005f6cd) common_borders_pane_cp2

0xba92,	// (0x0005f6cd) common_borders_pane_cp3_ParamLimits

0xba92,	// (0x0005f6cd) common_borders_pane_cp3

0xc4be,	// (0x000600f9) separator_horizontal_pane

0xc4c6,	// (0x00060101) separator_vertical_pane

0xc442,	// (0x0006007d) eswt_control_pane_g1_copy2_ParamLimits

0xc442,	// (0x0006007d) eswt_control_pane_g1_copy2

0xc44f,	// (0x0006008a) eswt_control_pane_g2_copy2_ParamLimits

0xc44f,	// (0x0006008a) eswt_control_pane_g2_copy2

0xc45c,	// (0x00060097) eswt_control_pane_g3_copy2_ParamLimits

0xc45c,	// (0x00060097) eswt_control_pane_g3_copy2

0xc469,	// (0x000600a4) eswt_control_pane_g4_copy2_ParamLimits

0xc469,	// (0x000600a4) eswt_control_pane_g4_copy2

0xeb7b,	// (0x000627b6) common_borders_pane_cp4

0xc4cf,	// (0x0006010a) separator_horizontal_pane_g1

0xc4d8,	// (0x00060113) separator_horizontal_pane_g2

0xc4e1,	// (0x0006011c) separator_horizontal_pane_g3

0x0002,

0xfc2c,	// (0x00063867) separator_horizontal_pane_g

0xc442,	// (0x0006007d) eswt_control_pane_g1_copy3_ParamLimits

0xc442,	// (0x0006007d) eswt_control_pane_g1_copy3

0xc44f,	// (0x0006008a) eswt_control_pane_g2_copy3_ParamLimits

0xc44f,	// (0x0006008a) eswt_control_pane_g2_copy3

0xc45c,	// (0x00060097) eswt_control_pane_g3_copy3_ParamLimits

0xc45c,	// (0x00060097) eswt_control_pane_g3_copy3

0xc469,	// (0x000600a4) eswt_control_pane_g4_copy3_ParamLimits

0xc469,	// (0x000600a4) eswt_control_pane_g4_copy3

0xeb7b,	// (0x000627b6) common_borders_pane_cp5

0xc4ea,	// (0x00060125) separator_vertical_pane_g1

0xc4f3,	// (0x0006012e) separator_vertical_pane_g2

0xc4fc,	// (0x00060137) separator_vertical_pane_g3

0x0002,

0xfc33,	// (0x0006386e) separator_vertical_pane_g

0xc442,	// (0x0006007d) eswt_control_pane_g1_copy4_ParamLimits

0xc442,	// (0x0006007d) eswt_control_pane_g1_copy4

0xc44f,	// (0x0006008a) eswt_control_pane_g2_copy4_ParamLimits

0xc44f,	// (0x0006008a) eswt_control_pane_g2_copy4

0xc45c,	// (0x00060097) eswt_control_pane_g3_copy4_ParamLimits

0xc45c,	// (0x00060097) eswt_control_pane_g3_copy4

0xc469,	// (0x000600a4) eswt_control_pane_g4_copy4_ParamLimits

0xc469,	// (0x000600a4) eswt_control_pane_g4_copy4

0xc505,	// (0x00060140) eswt_ctrl_combo_button_pane

0xc50d,	// (0x00060148) eswt_ctrl_input_pane

0xc515,	// (0x00060150) popup_choice_list_window_cp70

0xc51d,	// (0x00060158) eswt_ctrl_input_pane_t1

0xeb7b,	// (0x000627b6) input_focus_pane_cp70

0xba92,	// (0x0005f6cd) bg_button_pane_cp70_ParamLimits

0xba92,	// (0x0005f6cd) bg_button_pane_cp70

0xc52b,	// (0x00060166) eswt_ctrl_combo_button_pane_g1

0xc533,	// (0x0006016e) wait_bar_pane_cp70

0x93ac,	// (0x0005cfe7) bg_popup_window_pane_cp70_ParamLimits

0x93ac,	// (0x0005cfe7) bg_popup_window_pane_cp70

0xc53b,	// (0x00060176) popup_eswt_tasktip_window_t1

0xc551,	// (0x0006018c) wait_bar_pane_cp71_ParamLimits

0xc551,	// (0x0006018c) wait_bar_pane_cp71

0xc55d,	// (0x00060198) grid_eswt_app_pane

0xf465,	// (0x000630a0) scroll_pane_cp70

0xc566,	// (0x000601a1) cell_eswt_app_pane_ParamLimits

0xc566,	// (0x000601a1) cell_eswt_app_pane

0xc596,	// (0x000601d1) cell_eswt_app_pane_g1_ParamLimits

0xc596,	// (0x000601d1) cell_eswt_app_pane_g1

0xc5c5,	// (0x00060200) cell_eswt_app_pane_g2_ParamLimits

0xc5c5,	// (0x00060200) cell_eswt_app_pane_g2

0x0001,

0xfc3a,	// (0x00063875) cell_eswt_app_pane_g_ParamLimits

0xfc3a,	// (0x00063875) cell_eswt_app_pane_g

0xc5e9,	// (0x00060224) cell_eswt_app_pane_t1_ParamLimits

0xc5e9,	// (0x00060224) cell_eswt_app_pane_t1

0xc61b,	// (0x00060256) grid_highlight_pane_cp70_ParamLimits

0xc61b,	// (0x00060256) grid_highlight_pane_cp70

0x6b0d,	// (0x0005a748) set_content_pane_g1

0x8d6f,	// (0x0005c9aa) status_small_volume_pane

0x7d14,	// (0x0005b94f) status_small_volume_pane_g1

0x7d1c,	// (0x0005b957) volume_small2_pane

0x7d25,	// (0x0005b960) volume_small2_pane_g1

0x7d2e,	// (0x0005b969) volume_small2_pane_g2

0x7d37,	// (0x0005b972) volume_small2_pane_g3

0x7d40,	// (0x0005b97b) volume_small2_pane_g4

0x7d49,	// (0x0005b984) volume_small2_pane_g5

0x7d52,	// (0x0005b98d) volume_small2_pane_g6

0x7d5b,	// (0x0005b996) volume_small2_pane_g7

0x7d64,	// (0x0005b99f) volume_small2_pane_g8

0x7d6d,	// (0x0005b9a8) volume_small2_pane_g9

0x7d76,	// (0x0005b9b1) volume_small2_pane_g10

0x0009,

0xfc3f,	// (0x0006387a) volume_small2_pane_g

0xbe85,	// (0x0005fac0) fep_vkb_top_text_pane_g1_ParamLimits

0xbea0,	// (0x0005fadb) fep_vkb_top_text_pane_t1_ParamLimits

0xc10e,	// (0x0005fd49) popup_preview_fixed_window_g3_ParamLimits

0xc10e,	// (0x0005fd49) popup_preview_fixed_window_g3

0x729f,	// (0x0005aeda) popup_toolbar_trans_pane

0xa6d6,	// (0x0005e311) aid_height_set_list_ParamLimits

0xa6e7,	// (0x0005e322) aid_size_parent_ParamLimits

0x8e13,	// (0x0005ca4e) list_highlight_pane_cp2_ParamLimits

0x6b0d,	// (0x0005a748) set_content_pane_g1_ParamLimits

0xa8eb,	// (0x0005e526) list_single_image_pane_ParamLimits

0xa8eb,	// (0x0005e526) list_single_image_pane

0xc627,	// (0x00060262) aid_size_cell_image_ParamLimits

0xc627,	// (0x00060262) aid_size_cell_image

0xc634,	// (0x0006026f) grid_single_image_pane_ParamLimits

0xc634,	// (0x0006026f) grid_single_image_pane

0xc13c,	// (0x0005fd77) list_single_image_pane_g1_ParamLimits

0xc13c,	// (0x0005fd77) list_single_image_pane_g1

0xc148,	// (0x0005fd83) list_single_image_pane_g2_ParamLimits

0xc148,	// (0x0005fd83) list_single_image_pane_g2

0x0001,

0xfc54,	// (0x0006388f) list_single_image_pane_g_ParamLimits

0xfc54,	// (0x0006388f) list_single_image_pane_g

0xc642,	// (0x0006027d) list_single_image_pane_t1_ParamLimits

0xc642,	// (0x0006027d) list_single_image_pane_t1

0xc658,	// (0x00060293) cell_image_list_pane_ParamLimits

0xc658,	// (0x00060293) cell_image_list_pane

0xc66c,	// (0x000602a7) cell_image_list_pane_g1

0xc675,	// (0x000602b0) cell_image_list_pane_g2

0x0001,

0xfc59,	// (0x00063894) cell_image_list_pane_g

0xc67e,	// (0x000602b9) aid_size_cell_tb_trans_pane

0xef9d,	// (0x00062bd8) bg_tb_trans_pane

0xc690,	// (0x000602cb) grid_tb_trans_pane

0x9320,	// (0x0005cf5b) bg_tb_trans_pane_g1

0x9330,	// (0x0005cf6b) bg_tb_trans_pane_g2

0x9328,	// (0x0005cf63) bg_tb_trans_pane_g3

0x9340,	// (0x0005cf7b) bg_tb_trans_pane_g4

0x9338,	// (0x0005cf73) bg_tb_trans_pane_g5

0x9360,	// (0x0005cf9b) bg_tb_trans_pane_g6

0x9358,	// (0x0005cf93) bg_tb_trans_pane_g7

0x9348,	// (0x0005cf83) bg_tb_trans_pane_g8

0x9350,	// (0x0005cf8b) bg_tb_trans_pane_g9

0x0008,

0xfc5e,	// (0x00063899) bg_tb_trans_pane_g

0xc6a4,	// (0x000602df) cell_toolbar_trans_pane_ParamLimits

0xc6a4,	// (0x000602df) cell_toolbar_trans_pane

0xbacd,	// (0x0005f708) cell_toolbar_trans_pane_g1

0xb698,	// (0x0005f2d3) list_form2_midp_pane_t1

0xb6a6,	// (0x0005f2e1) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x00063736) list_form2_midp_pane_t

0xb6b4,	// (0x0005f2ef) scroll_pane_cp51_ParamLimits

0xb870,	// (0x0005f4ab) form2_midp_wait_pane_g1

0xb879,	// (0x0005f4b4) form2_midp_wait_pane_g2

0xb882,	// (0x0005f4bd) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x0006374b) form2_midp_wait_pane_g

0xebdd,	// (0x00062818) list_highlight_pane_cp21_ParamLimits

0xb8ca,	// (0x0005f505) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb8d9,	// (0x0005f514) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa88c,	// (0x0005e4c7) list_single_2graphic_im_pane_ParamLimits

0xa88c,	// (0x0005e4c7) list_single_2graphic_im_pane

0xc6ca,	// (0x00060305) list_single_2graphic_im_pane_g1_ParamLimits

0xc6ca,	// (0x00060305) list_single_2graphic_im_pane_g1

0xc6db,	// (0x00060316) list_single_2graphic_im_pane_g2_ParamLimits

0xc6db,	// (0x00060316) list_single_2graphic_im_pane_g2

0xc6e7,	// (0x00060322) list_single_2graphic_im_pane_g3_ParamLimits

0xc6e7,	// (0x00060322) list_single_2graphic_im_pane_g3

0x0003,

0xfc71,	// (0x000638ac) list_single_2graphic_im_pane_g_ParamLimits

0xfc71,	// (0x000638ac) list_single_2graphic_im_pane_g

0xc707,	// (0x00060342) list_single_2graphic_im_pane_t1_ParamLimits

0xc707,	// (0x00060342) list_single_2graphic_im_pane_t1

0xc11a,	// (0x0005fd55) list_single_graphic_2heading_pane_fp_ParamLimits

0xc11a,	// (0x0005fd55) list_single_graphic_2heading_pane_fp

0x44cb,	// (0x00058106) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x44cb,	// (0x00058106) list_single_graphic_2heading_pane_fp_g1

0xc130,	// (0x0005fd6b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc130,	// (0x0005fd6b) list_single_graphic_2heading_pane_fp_g2

0xc13c,	// (0x0005fd77) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc13c,	// (0x0005fd77) list_single_graphic_2heading_pane_fp_g3

0xc148,	// (0x0005fd83) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc148,	// (0x0005fd83) list_single_graphic_2heading_pane_fp_g4

0xc15c,	// (0x0005fd97) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc15c,	// (0x0005fd97) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb98,	// (0x000637d3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb98,	// (0x000637d3) list_single_graphic_2heading_pane_fp_g

0x45e9,	// (0x00058224) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x45e9,	// (0x00058224) list_single_graphic_2heading_pane_fp_t1

0x4503,	// (0x0005813e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4503,	// (0x0005813e) list_single_graphic_2heading_pane_fp_t2

0x45ff,	// (0x0005823a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x45ff,	// (0x0005823a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7a,	// (0x000638b5) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7a,	// (0x000638b5) list_single_graphic_2heading_pane_fp_t

0xbb59,	// (0x0005f794) fep_hwr_write_pane_g5_ParamLimits

0xbb59,	// (0x0005f794) fep_hwr_write_pane_g5

0xbb65,	// (0x0005f7a0) fep_hwr_write_pane_g6_ParamLimits

0xbb65,	// (0x0005f7a0) fep_hwr_write_pane_g6

0xc411,	// (0x0006004c) eswt_shell_pane_ParamLimits

0x93ac,	// (0x0005cfe7) bg_popup_window_pane_cp18_ParamLimits

0xa62f,	// (0x0005e26a) heading_pane_cp70

0xc53b,	// (0x00060176) popup_eswt_tasktip_window_t1_ParamLimits

0x8e8a,	// (0x0005cac5) aid_touch_tab_arrow_left

0x8e99,	// (0x0005cad4) aid_touch_tab_arrow_right

0x5670,	// (0x000592ab) title_pane_g3_ParamLimits

0x5670,	// (0x000592ab) title_pane_g3

0xef65,	// (0x00062ba0) set_value_pane_g1

0x729f,	// (0x0005aeda) popup_toolbar_trans_pane_ParamLimits

0xc67e,	// (0x000602b9) aid_size_cell_tb_trans_pane_ParamLimits

0xef9d,	// (0x00062bd8) bg_tb_trans_pane_ParamLimits

0xc690,	// (0x000602cb) grid_tb_trans_pane_ParamLimits

0xed15,	// (0x00062950) cont_note_pane_ParamLimits

0xed15,	// (0x00062950) cont_note_pane

0xee91,	// (0x00062acc) cont_snote2_single_text_pane_ParamLimits

0xee91,	// (0x00062acc) cont_snote2_single_text_pane

0xee91,	// (0x00062acc) cont_snote2_single_graphic_pane_ParamLimits

0xee91,	// (0x00062acc) cont_snote2_single_graphic_pane

0x99b2,	// (0x0005d5ed) cont_note_wait_pane_ParamLimits

0x99b2,	// (0x0005d5ed) cont_note_wait_pane

0x99b2,	// (0x0005d5ed) cont_note_image_pane_ParamLimits

0x99b2,	// (0x0005d5ed) cont_note_image_pane

0xc738,	// (0x00060373) popup_note2_window_g1_ParamLimits

0xc738,	// (0x00060373) popup_note2_window_g1

0xc769,	// (0x000603a4) popup_note2_window_t1_ParamLimits

0xc769,	// (0x000603a4) popup_note2_window_t1

0xc7ae,	// (0x000603e9) popup_note2_window_t2_ParamLimits

0xc7ae,	// (0x000603e9) popup_note2_window_t2

0xc7f3,	// (0x0006042e) popup_note2_window_t3_ParamLimits

0xc7f3,	// (0x0006042e) popup_note2_window_t3

0xc838,	// (0x00060473) popup_note2_window_t4_ParamLimits

0xc838,	// (0x00060473) popup_note2_window_t4

0xed99,	// (0x000629d4) popup_note2_window_t5_ParamLimits

0xed99,	// (0x000629d4) popup_note2_window_t5

0x0004,

0xfc86,	// (0x000638c1) popup_note2_window_t_ParamLimits

0xfc86,	// (0x000638c1) popup_note2_window_t

0xc867,	// (0x000604a2) popup_note2_image_window_g1_ParamLimits

0xc867,	// (0x000604a2) popup_note2_image_window_g1

0xc873,	// (0x000604ae) popup_note2_image_window_g2_ParamLimits

0xc873,	// (0x000604ae) popup_note2_image_window_g2

0x0001,

0xfc91,	// (0x000638cc) popup_note2_image_window_g_ParamLimits

0xfc91,	// (0x000638cc) popup_note2_image_window_g

0xc885,	// (0x000604c0) popup_note2_image_window_t1_ParamLimits

0xc885,	// (0x000604c0) popup_note2_image_window_t1

0xc89d,	// (0x000604d8) popup_note2_image_window_t2_ParamLimits

0xc89d,	// (0x000604d8) popup_note2_image_window_t2

0xc8b5,	// (0x000604f0) popup_note2_image_window_t3_ParamLimits

0xc8b5,	// (0x000604f0) popup_note2_image_window_t3

0x0002,

0xfc96,	// (0x000638d1) popup_note2_image_window_t_ParamLimits

0xfc96,	// (0x000638d1) popup_note2_image_window_t

0x99c0,	// (0x0005d5fb) popup_note2_wait_window_g1_ParamLimits

0x99c0,	// (0x0005d5fb) popup_note2_wait_window_g1

0x99cc,	// (0x0005d607) popup_note2_wait_window_g2_ParamLimits

0x99cc,	// (0x0005d607) popup_note2_wait_window_g2

0x99d8,	// (0x0005d613) popup_note2_wait_window_g3_ParamLimits

0x99d8,	// (0x0005d613) popup_note2_wait_window_g3

0x0002,

0xf843,	// (0x0006347e) popup_note2_wait_window_g_ParamLimits

0xf843,	// (0x0006347e) popup_note2_wait_window_g

0xc8d1,	// (0x0006050c) popup_note2_wait_window_t1_ParamLimits

0xc8d1,	// (0x0006050c) popup_note2_wait_window_t1

0xc8ef,	// (0x0006052a) popup_note2_wait_window_t2_ParamLimits

0xc8ef,	// (0x0006052a) popup_note2_wait_window_t2

0xc90d,	// (0x00060548) popup_note2_wait_window_t3_ParamLimits

0xc90d,	// (0x00060548) popup_note2_wait_window_t3

0xc91f,	// (0x0006055a) popup_note2_wait_window_t4_ParamLimits

0xc91f,	// (0x0006055a) popup_note2_wait_window_t4

0x0003,

0xfc9d,	// (0x000638d8) popup_note2_wait_window_t_ParamLimits

0xfc9d,	// (0x000638d8) popup_note2_wait_window_t

0xc931,	// (0x0006056c) wait_bar2_pane_ParamLimits

0xc931,	// (0x0006056c) wait_bar2_pane

0xc949,	// (0x00060584) popup_snote2_single_text_window_g1_ParamLimits

0xc949,	// (0x00060584) popup_snote2_single_text_window_g1

0xc971,	// (0x000605ac) popup_snote2_single_text_window_t1_ParamLimits

0xc971,	// (0x000605ac) popup_snote2_single_text_window_t1

0xc9bd,	// (0x000605f8) popup_snote2_single_text_window_t2_ParamLimits

0xc9bd,	// (0x000605f8) popup_snote2_single_text_window_t2

0xca09,	// (0x00060644) popup_snote2_single_text_window_t3_ParamLimits

0xca09,	// (0x00060644) popup_snote2_single_text_window_t3

0xca4a,	// (0x00060685) popup_snote2_single_text_window_t4_ParamLimits

0xca4a,	// (0x00060685) popup_snote2_single_text_window_t4

0xca80,	// (0x000606bb) popup_snote2_single_text_window_t5_ParamLimits

0xca80,	// (0x000606bb) popup_snote2_single_text_window_t5

0x0004,

0xfca6,	// (0x000638e1) popup_snote2_single_text_window_t_ParamLimits

0xfca6,	// (0x000638e1) popup_snote2_single_text_window_t

0xcaab,	// (0x000606e6) popup_snote2_single_graphic_window_g1_ParamLimits

0xcaab,	// (0x000606e6) popup_snote2_single_graphic_window_g1

0xcad3,	// (0x0006070e) popup_snote2_single_graphic_window_g2_ParamLimits

0xcad3,	// (0x0006070e) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb1,	// (0x000638ec) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb1,	// (0x000638ec) popup_snote2_single_graphic_window_g

0xcb1c,	// (0x00060757) popup_snote2_single_graphic_window_t1_ParamLimits

0xcb1c,	// (0x00060757) popup_snote2_single_graphic_window_t1

0xcb68,	// (0x000607a3) popup_snote2_single_graphic_window_t2_ParamLimits

0xcb68,	// (0x000607a3) popup_snote2_single_graphic_window_t2

0xca09,	// (0x00060644) popup_snote2_single_graphic_window_t3_ParamLimits

0xca09,	// (0x00060644) popup_snote2_single_graphic_window_t3

0xca4a,	// (0x00060685) popup_snote2_single_graphic_window_t4_ParamLimits

0xca4a,	// (0x00060685) popup_snote2_single_graphic_window_t4

0xca80,	// (0x000606bb) popup_snote2_single_graphic_window_t5_ParamLimits

0xca80,	// (0x000606bb) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb6,	// (0x000638f1) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb6,	// (0x000638f1) popup_snote2_single_graphic_window_t

0xb571,	// (0x0005f1ac) clock_nsta_pane_cp2_t1

0xb571,	// (0x0005f1ac) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x0006370c) clock_nsta_pane_cp2_t

0x34be,	// (0x000570f9) form_field_data_wide_pane_g1_ParamLimits

0xefab,	// (0x00062be6) form_field_data_wide_pane_g2_ParamLimits

0xefab,	// (0x00062be6) form_field_data_wide_pane_g2

0xefb7,	// (0x00062bf2) form_field_data_wide_pane_g3_ParamLimits

0xefb7,	// (0x00062bf2) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x000632b1) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x000632b1) form_field_data_wide_pane_g

0xb474,	// (0x0005f0af) grid_touch_3_pane_ParamLimits

0xb474,	// (0x0005f0af) grid_touch_3_pane

0xcbb4,	// (0x000607ef) cell_touch_3_pane_ParamLimits

0xcbb4,	// (0x000607ef) cell_touch_3_pane

0xbacd,	// (0x0005f708) cell_touch_3_pane_g1

0xbacd,	// (0x0005f708) cell_touch_3_pane_g2

0x0001,

0xfb56,	// (0x00063791) cell_touch_3_pane_g

0xedcb,	// (0x00062a06) cont_query_data_pane

0xedd3,	// (0x00062a0e) cont_query_data_pane_cp1

0xcbe2,	// (0x0006081d) button_value_adjust_pane_cp7

0xcbea,	// (0x00060825) query_popup_pane_cp3

0x1346,	// (0x00054f81) bg_popup_sub_pane_cp22_ParamLimits

0x6706,	// (0x0005a341) navi_navi_volume_pane_cp2

0x671e,	// (0x0005a359) popup_side_volume_key_window_g2

0x672a,	// (0x0005a365) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00063347) popup_side_volume_key_window_g

0x6744,	// (0x0005a37f) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0006334e) popup_side_volume_key_window_t

0x69f2,	// (0x0005a62d) popup_side_volume_key_window_ParamLimits

0x5e05,	// (0x00059a40) list_double_graphic_pane_g4_ParamLimits

0x5e05,	// (0x00059a40) list_double_graphic_pane_g4

0xa8cb,	// (0x0005e506) list_single_2heading_msg_pane_ParamLimits

0xa8cb,	// (0x0005e506) list_single_2heading_msg_pane

0xaa1e,	// (0x0005e659) list_single_2heading_msg_pane_g1_ParamLimits

0xaa1e,	// (0x0005e659) list_single_2heading_msg_pane_g1

0x5c1f,	// (0x0005985a) list_single_2heading_msg_pane_g2_ParamLimits

0x5c1f,	// (0x0005985a) list_single_2heading_msg_pane_g2

0xaa2a,	// (0x0005e665) list_single_2heading_msg_pane_g3_ParamLimits

0xaa2a,	// (0x0005e665) list_single_2heading_msg_pane_g3

0xaa36,	// (0x0005e671) list_single_2heading_msg_pane_g4_ParamLimits

0xaa36,	// (0x0005e671) list_single_2heading_msg_pane_g4

0x0003,

0xfcc1,	// (0x000638fc) list_single_2heading_msg_pane_g_ParamLimits

0xfcc1,	// (0x000638fc) list_single_2heading_msg_pane_g

0x7d7f,	// (0x0005b9ba) list_single_2heading_msg_pane_t1_ParamLimits

0x7d7f,	// (0x0005b9ba) list_single_2heading_msg_pane_t1

0x7da7,	// (0x0005b9e2) list_single_2heading_msg_pane_t2_ParamLimits

0x7da7,	// (0x0005b9e2) list_single_2heading_msg_pane_t2

0x7dd6,	// (0x0005ba11) list_single_2heading_msg_pane_t3_ParamLimits

0x7dd6,	// (0x0005ba11) list_single_2heading_msg_pane_t3

0x461f,	// (0x0005825a) list_single_2heading_msg_pane_t4_ParamLimits

0x461f,	// (0x0005825a) list_single_2heading_msg_pane_t4

0x0003,

0xfcca,	// (0x00063905) list_single_2heading_msg_pane_t_ParamLimits

0xfcca,	// (0x00063905) list_single_2heading_msg_pane_t

0xeb99,	// (0x000627d4) title_pane_g4_ParamLimits

0xeb99,	// (0x000627d4) title_pane_g4

0x635d,	// (0x00059f98) title_pane_stacon_g3_ParamLimits

0x635d,	// (0x00059f98) title_pane_stacon_g3

0xc6fb,	// (0x00060336) list_single_2graphic_im_pane_g4_ParamLimits

0xc6fb,	// (0x00060336) list_single_2graphic_im_pane_g4

0xa3f9,	// (0x0005e034) popup_side_volume_key_window_cp

0xadcf,	// (0x0005ea0a) main_idle_act2_pane_t1

0x7391,	// (0x0005afcc) toolbar_button_pane_g10

0x5c09,	// (0x00059844) popup_toolbar_window_cp1

0xb562,	// (0x0005f19d) clock_nsta_pane_cp_t1

0xb562,	// (0x0005f19d) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x00063707) clock_nsta_pane_cp_t

0x6706,	// (0x0005a341) navi_navi_volume_pane_cp2_ParamLimits

0x6712,	// (0x0005a34d) popup_side_volume_key_window_g1_ParamLimits

0x671e,	// (0x0005a359) popup_side_volume_key_window_g2_ParamLimits

0x672a,	// (0x0005a365) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00063347) popup_side_volume_key_window_g_ParamLimits

0x7941,	// (0x0005b57c) fep_hwr_aid_pane

0x79e8,	// (0x0005b623) bg_fep_hwr_top_pane_g4_ParamLimits

0xbb29,	// (0x0005f764) fep_hwr_top_pane_g1_ParamLimits

0xbb3b,	// (0x0005f776) fep_hwr_top_pane_g2_ParamLimits

0x7a08,	// (0x0005b643) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x0006375c) fep_hwr_top_pane_g_ParamLimits

0x7a1d,	// (0x0005b658) fep_hwr_top_text_pane_ParamLimits

0xa1bc,	// (0x0005ddf7) aid_touch_tab_arrow_arrow_2

0xa1c5,	// (0x0005de00) aid_touch_tab_arrow_left_2

0x7955,	// (0x0005b590) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x798c,	// (0x0005b5c7) fep_hwr_prediction_pane

0xbc94,	// (0x0005f8cf) fep_vkb_prediction_pane

0xbd91,	// (0x0005f9cc) fep_vkb_side_pane_g3_ParamLimits

0xbd91,	// (0x0005f9cc) fep_vkb_side_pane_g3

0x7b98,	// (0x0005b7d3) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7c04,	// (0x0005b83f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7c11,	// (0x0005b84c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd0,	// (0x0006380b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7e0f,	// (0x0005ba4a) fep_hwr_prediction_pane_g1

0x7e19,	// (0x0005ba54) fep_hwr_prediction_pane_g2

0x7e21,	// (0x0005ba5c) fep_hwr_prediction_pane_g3

0x7e29,	// (0x0005ba64) fep_hwr_prediction_pane_g4

0x0003,

0xfcd3,	// (0x0006390e) fep_hwr_prediction_pane_g

0xcc0f,	// (0x0006084a) fep_vkb_prediction_pane_g1

0xcc19,	// (0x00060854) fep_vkb_prediction_pane_g2

0xcc21,	// (0x0006085c) fep_vkb_prediction_pane_g3

0xcc29,	// (0x00060864) fep_vkb_prediction_pane_g4

0x0003,

0xfcdc,	// (0x00063917) fep_vkb_prediction_pane_g

0x76bf,	// (0x0005b2fa) slider_set_pane_g3

0x76d3,	// (0x0005b30e) slider_set_pane_g4

0x76eb,	// (0x0005b326) slider_set_pane_g5

0x76bf,	// (0x0005b2fa) slider_set_pane_g6

0x7701,	// (0x0005b33c) slider_set_pane_g7

0xa848,	// (0x0005e483) slider_form_pane_g3

0xa851,	// (0x0005e48c) slider_form_pane_g4

0xa859,	// (0x0005e494) slider_form_pane_g5

0xa848,	// (0x0005e483) slider_form_pane_g6

0xa861,	// (0x0005e49c) slider_form_pane_g7

0xb07a,	// (0x0005ecb5) slider_set_pane_vc_g3

0xb083,	// (0x0005ecbe) slider_set_pane_vc_g4

0xb08c,	// (0x0005ecc7) slider_set_pane_vc_g5

0xb07a,	// (0x0005ecb5) slider_set_pane_vc_g6

0xb095,	// (0x0005ecd0) slider_set_pane_vc_g7

0xb247,	// (0x0005ee82) slider_form_pane_vc_g1

0xb250,	// (0x0005ee8b) slider_form_pane_vc_g2

0xb259,	// (0x0005ee94) slider_form_pane_vc_g3

0xb247,	// (0x0005ee82) slider_form_pane_vc_g4

0xb262,	// (0x0005ee9d) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x000636d9) slider_form_pane_vc_g

0x5407,	// (0x00059042) main_idle_act3_pane

0xcc31,	// (0x0006086c) ai3_links_pane

0xcc3a,	// (0x00060875) popup_ai3_data_window_ParamLimits

0xcc3a,	// (0x00060875) popup_ai3_data_window

0xeb7b,	// (0x000627b6) grid_ai3_links_pane

0xcc52,	// (0x0006088d) cell_ai3_links_pane_ParamLimits

0xcc52,	// (0x0006088d) cell_ai3_links_pane

0xcc6a,	// (0x000608a5) bg_popup_sub_pane_cp11

0xcc77,	// (0x000608b2) cell_ai3_links_pane_g1

0xeb7b,	// (0x000627b6) bg_popup_sub_pane_cp12

0xcc9c,	// (0x000608d7) heading_ai3_data_pane

0xcca4,	// (0x000608df) list_ai3_gene_pane

0xccb0,	// (0x000608eb) popup_ai3_data_window_g1

0xccb8,	// (0x000608f3) heading_ai3_data_pane_g1

0xccc0,	// (0x000608fb) heading_ai3_data_pane_t1

0xccce,	// (0x00060909) list_double_ai3_gene_pane_ParamLimits

0xccce,	// (0x00060909) list_double_ai3_gene_pane

0xccdb,	// (0x00060916) list_single_ai3_gene_pane_ParamLimits

0xccdb,	// (0x00060916) list_single_ai3_gene_pane

0xba92,	// (0x0005f6cd) list_highlight_pane_cp7_ParamLimits

0xba92,	// (0x0005f6cd) list_highlight_pane_cp7

0xcce8,	// (0x00060923) list_single_a13_gene_pane_t1_ParamLimits

0xcce8,	// (0x00060923) list_single_a13_gene_pane_t1

0xccff,	// (0x0006093a) list_single_ai3_gene_pane_g1

0xcd08,	// (0x00060943) list_single_ai3_gene_pane_g2

0x0001,

0xfce5,	// (0x00063920) list_single_ai3_gene_pane_g

0xcd10,	// (0x0006094b) list_double_ai3_gene_pane_g1_ParamLimits

0xcd10,	// (0x0006094b) list_double_ai3_gene_pane_g1

0xcd1c,	// (0x00060957) list_double_ai3_gene_pane_t1_ParamLimits

0xcd1c,	// (0x00060957) list_double_ai3_gene_pane_t1

0xcd38,	// (0x00060973) list_double_ai3_gene_pane_t2_ParamLimits

0xcd38,	// (0x00060973) list_double_ai3_gene_pane_t2

0xcd4d,	// (0x00060988) list_double_ai3_gene_pane_t3_ParamLimits

0xcd4d,	// (0x00060988) list_double_ai3_gene_pane_t3

0x0002,

0xfcea,	// (0x00063925) list_double_ai3_gene_pane_t_ParamLimits

0xfcea,	// (0x00063925) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4615,	// (0x00058250) aid_size_min_col_2

0xcbfb,	// (0x00060836) aid_size_min_msg_ParamLimits

0xcbfb,	// (0x00060836) aid_size_min_msg

0xbe91,	// (0x0005facc) fep_vkb_top_text_pane_g2_ParamLimits

0xbe91,	// (0x0005facc) fep_vkb_top_text_pane_g2

0x0001,

0xfb51,	// (0x0006378c) fep_vkb_top_text_pane_g_ParamLimits

0xfb51,	// (0x0006378c) fep_vkb_top_text_pane_g

0x5407,	// (0x00059042) main_hc_apps_shell_pane

0xcd6a,	// (0x000609a5) grid_hc_apps_pane_ParamLimits

0xcd6a,	// (0x000609a5) grid_hc_apps_pane

0xcd79,	// (0x000609b4) list_hc_apps_pane

0xcd81,	// (0x000609bc) scroll_pane_cp37_ParamLimits

0xcd81,	// (0x000609bc) scroll_pane_cp37

0xcd8d,	// (0x000609c8) cell_hc_apps_pane_ParamLimits

0xcd8d,	// (0x000609c8) cell_hc_apps_pane

0xce3b,	// (0x00060a76) cell_hc_apps_pane_g1_ParamLimits

0xce3b,	// (0x00060a76) cell_hc_apps_pane_g1

0xce6c,	// (0x00060aa7) cell_hc_apps_pane_g2_ParamLimits

0xce6c,	// (0x00060aa7) cell_hc_apps_pane_g2

0xce88,	// (0x00060ac3) cell_hc_apps_pane_g3_ParamLimits

0xce88,	// (0x00060ac3) cell_hc_apps_pane_g3

0x0002,

0xfcf1,	// (0x0006392c) cell_hc_apps_pane_g_ParamLimits

0xfcf1,	// (0x0006392c) cell_hc_apps_pane_g

0xceaa,	// (0x00060ae5) cell_hc_apps_pane_t1_ParamLimits

0xceaa,	// (0x00060ae5) cell_hc_apps_pane_t1

0xed15,	// (0x00062950) grid_highlight_pane_cp10_ParamLimits

0xed15,	// (0x00062950) grid_highlight_pane_cp10

0xceea,	// (0x00060b25) list_single_hc_apps_pane_ParamLimits

0xceea,	// (0x00060b25) list_single_hc_apps_pane

0xcf4d,	// (0x00060b88) list_single_hc_apps_pane_g1

0xaa4e,	// (0x0005e689) list_single_hc_apps_pane_g2

0x0001,

0xfcf8,	// (0x00063933) list_single_hc_apps_pane_g

0xaa67,	// (0x0005e6a2) list_single_hc_apps_pane_g2_copy1

0x7e31,	// (0x0005ba6c) list_single_hc_apps_pane_t1

0xebdd,	// (0x00062818) bg_set_opt_pane_cp_ParamLimits

0x5720,	// (0x0005935b) setting_slider_pane_t1_ParamLimits

0x5739,	// (0x00059374) setting_slider_pane_t2_ParamLimits

0x5753,	// (0x0005938e) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00063199) setting_slider_pane_t_ParamLimits

0x576b,	// (0x000593a6) slider_set_pane_ParamLimits

0x6c88,	// (0x0005a8c3) control_pane_g5_ParamLimits

0x6c88,	// (0x0005a8c3) control_pane_g5

0xa69b,	// (0x0005e2d6) slider_set_pane_g1_ParamLimits

0x76b3,	// (0x0005b2ee) slider_set_pane_g2_ParamLimits

0x76bf,	// (0x0005b2fa) slider_set_pane_g3_ParamLimits

0x76d3,	// (0x0005b30e) slider_set_pane_g4_ParamLimits

0x76eb,	// (0x0005b326) slider_set_pane_g5_ParamLimits

0x76bf,	// (0x0005b2fa) slider_set_pane_g6_ParamLimits

0x7701,	// (0x0005b33c) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0006359a) slider_set_pane_g_ParamLimits

0x6ab8,	// (0x0005a6f3) navi_icon_text_pane_ParamLimits

0x8e4b,	// (0x0005ca86) aid_fill_nsta_2_ParamLimits

0x8e8a,	// (0x0005cac5) aid_touch_tab_arrow_left_ParamLimits

0x8e99,	// (0x0005cad4) aid_touch_tab_arrow_right_ParamLimits

0x8f06,	// (0x0005cb41) clock_nsta_pane_ParamLimits

0xa19e,	// (0x0005ddd9) navi_icon_pane_g1_ParamLimits

0xa1aa,	// (0x0005dde5) navi_text_pane_t1_ParamLimits

0xb672,	// (0x0005f2ad) navi_icon_text_pane_g1_ParamLimits

0xb67e,	// (0x0005f2b9) navi_icon_text_pane_t1_ParamLimits

0xcf4d,	// (0x00060b88) list_single_hc_apps_pane_g1_ParamLimits

0xaa4e,	// (0x0005e689) list_single_hc_apps_pane_g2_ParamLimits

0xfcf8,	// (0x00063933) list_single_hc_apps_pane_g_ParamLimits

0xaa67,	// (0x0005e6a2) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7e31,	// (0x0005ba6c) list_single_hc_apps_pane_t1_ParamLimits

0x5564,	// (0x0005919f) popup_toolbar2_fixed_window_ParamLimits

0x5564,	// (0x0005919f) popup_toolbar2_fixed_window

0x7295,	// (0x0005aed0) popup_toolbar2_float_window

0xeb7b,	// (0x000627b6) bg_popup_sub_pane_cp27

0xcf66,	// (0x00060ba1) grid_toolbar2_float_pane

0xeb7b,	// (0x000627b6) bg_popup_sub_pane_cp26

0xcf66,	// (0x00060ba1) grid_toolbar2_fixed_pane

0xcf6e,	// (0x00060ba9) cell_toolbar2_fixed_pane_ParamLimits

0xcf6e,	// (0x00060ba9) cell_toolbar2_fixed_pane

0xcf7e,	// (0x00060bb9) cell_toolbar2_fixed_pane_g1

0x7167,	// (0x0005ada2) toolbar2_fixed_button_pane

0x9320,	// (0x0005cf5b) toolbar2_fixed_button_pane_g1

0x9330,	// (0x0005cf6b) toolbar2_fixed_button_pane_g2

0x9328,	// (0x0005cf63) toolbar2_fixed_button_pane_g3

0x9340,	// (0x0005cf7b) toolbar2_fixed_button_pane_g4

0x9338,	// (0x0005cf73) toolbar2_fixed_button_pane_g5

0x9348,	// (0x0005cf83) toolbar2_fixed_button_pane_g6

0x9350,	// (0x0005cf8b) toolbar2_fixed_button_pane_g7

0x9360,	// (0x0005cf9b) toolbar2_fixed_button_pane_g8

0x9358,	// (0x0005cf93) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0006349c) toolbar2_fixed_button_pane_g

0xcf87,	// (0x00060bc2) cell_toolbar2_float_pane_ParamLimits

0xcf87,	// (0x00060bc2) cell_toolbar2_float_pane

0xcf98,	// (0x00060bd3) cell_toolbar2_float_pane_g1

0x7167,	// (0x0005ada2) toolbar2_fixed_button_pane_cp

0xbbfb,	// (0x0005f836) fep_vkb_accented_list_pane_ParamLimits

0xbbfb,	// (0x0005f836) fep_vkb_accented_list_pane

0x7b78,	// (0x0005b7b3) bg_popup_fep_shadow_pane_g9

0x8ac8,	// (0x0005c703) bg_popup_fep_shadow_pane_cp3

0xf265,	// (0x00062ea0) list_accented_list_pane

0xcfa1,	// (0x00060bdc) list_single_accented_list_pane_ParamLimits

0xcfa1,	// (0x00060bdc) list_single_accented_list_pane

0x8ac8,	// (0x0005c703) list_highlight_pane_cp10

0xcfb2,	// (0x00060bed) list_single_accented_list_pane_t1

0x71e5,	// (0x0005ae20) popup_slider_window_ParamLimits

0x71e5,	// (0x0005ae20) popup_slider_window

0xcbf2,	// (0x0006082d) aid_indentation_list_msg

0xd068,	// (0x00060ca3) bg_popup_window_pane_cp19

0xd0d2,	// (0x00060d0d) popup_slider_window_g1

0xd0ee,	// (0x00060d29) popup_slider_window_g2

0xd10a,	// (0x00060d45) popup_slider_window_g3

0x0005,

0xfcfd,	// (0x00063938) popup_slider_window_g

0xd166,	// (0x00060da1) popup_slider_window_t1

0xd1da,	// (0x00060e15) small_volume_slider_vertical_pane

0xbacd,	// (0x0005f708) small_volume_slider_vertical_pane_g1

0xbacd,	// (0x0005f708) small_volume_slider_vertical_pane_g2

0xd1f6,	// (0x00060e31) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0f,	// (0x0006394a) small_volume_slider_vertical_pane_g

0x532a,	// (0x00058f65) area_side_right_pane_ParamLimits

0x532a,	// (0x00058f65) area_side_right_pane

0x7e5f,	// (0x0005ba9a) aid_size_side_button_ParamLimits

0x7e5f,	// (0x0005ba9a) aid_size_side_button

0x7e73,	// (0x0005baae) grid_sctrl_middle_pane_ParamLimits

0x7e73,	// (0x0005baae) grid_sctrl_middle_pane

0x7e92,	// (0x0005bacd) sctrl_sk_bottom_pane

0x7ea3,	// (0x0005bade) sctrl_sk_top_pane

0x7eb5,	// (0x0005baf0) aid_touch_sctrl_top

0x7ec2,	// (0x0005bafd) bg_sctrl_sk_pane_ParamLimits

0x7ec2,	// (0x0005bafd) bg_sctrl_sk_pane

0x7ed0,	// (0x0005bb0b) sctrl_sk_top_pane_g1

0x7edd,	// (0x0005bb18) sctrl_sk_top_pane_t1

0x7eb5,	// (0x0005baf0) aid_touch_sctrl_bottom

0x7ec2,	// (0x0005bafd) bg_sctrl_sk_pane_cp_ParamLimits

0x7ec2,	// (0x0005bafd) bg_sctrl_sk_pane_cp

0x7ef8,	// (0x0005bb33) sctrl_sk_bottom_pane_g1

0x7edd,	// (0x0005bb18) sctrl_sk_bottom_pane_t1

0x7f01,	// (0x0005bb3c) cell_sctrl_middle_pane_ParamLimits

0x7f01,	// (0x0005bb3c) cell_sctrl_middle_pane

0x7f1c,	// (0x0005bb57) aid_touch_sctrl_middle_ParamLimits

0x7f1c,	// (0x0005bb57) aid_touch_sctrl_middle

0x7f2e,	// (0x0005bb69) bg_sctrl_middle_pane_ParamLimits

0x7f2e,	// (0x0005bb69) bg_sctrl_middle_pane

0x7b98,	// (0x0005b7d3) cell_sctrl_middle_pane_g1_ParamLimits

0x7b98,	// (0x0005b7d3) cell_sctrl_middle_pane_g1

0x7f3c,	// (0x0005bb77) cell_sctrl_middle_pane_g2_ParamLimits

0x7f3c,	// (0x0005bb77) cell_sctrl_middle_pane_g2

0x0001,

0xfd1b,	// (0x00063956) cell_sctrl_middle_pane_g_ParamLimits

0xfd1b,	// (0x00063956) cell_sctrl_middle_pane_g

0x9320,	// (0x0005cf5b) bg_sctrl_middle_pane_g1

0x9328,	// (0x0005cf63) bg_sctrl_middle_pane_g2

0x9330,	// (0x0005cf6b) bg_sctrl_middle_pane_g3

0x9338,	// (0x0005cf73) bg_sctrl_middle_pane_g4

0x9340,	// (0x0005cf7b) bg_sctrl_middle_pane_g5

0x9348,	// (0x0005cf83) bg_sctrl_middle_pane_g6

0x9350,	// (0x0005cf8b) bg_sctrl_middle_pane_g7

0x9358,	// (0x0005cf93) bg_sctrl_middle_pane_g8

0x0007,

0xfd20,	// (0x0006395b) bg_sctrl_middle_pane_g

0x9360,	// (0x0005cf9b) bg_sctrl_middle_pane_g8_copy1

0x9320,	// (0x0005cf5b) bg_sctrl_sk_pane_g1

0x9330,	// (0x0005cf6b) bg_sctrl_sk_pane_g2

0x9328,	// (0x0005cf63) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0006349c) bg_sctrl_sk_pane_g

0xeedf,	// (0x00062b1a) aid_size_touch_scroll_bar

0x9340,	// (0x0005cf7b) bg_sctrl_sk_pane_g4

0x9338,	// (0x0005cf73) bg_sctrl_sk_pane_g5

0x9348,	// (0x0005cf83) bg_sctrl_sk_pane_g6

0x9350,	// (0x0005cf8b) bg_sctrl_sk_pane_g7

0x9360,	// (0x0005cf9b) bg_sctrl_sk_pane_g8

0x9358,	// (0x0005cf93) bg_sctrl_sk_pane_g9

0x6e4e,	// (0x0005aa89) popup_fep_china_hwr2_fs_candidate_window

0x6e58,	// (0x0005aa93) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6e58,	// (0x0005aa93) popup_fep_china_hwr2_fs_control_window

0x7b98,	// (0x0005b7d3) sctrl_sk_top_pane_g2

0x0001,

0xfd16,	// (0x00063951) sctrl_sk_top_pane_g

0xd1ff,	// (0x00060e3a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd1ff,	// (0x00060e3a) aid_fep_china_hwr2_fs_cell

0xd211,	// (0x00060e4c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd211,	// (0x00060e4c) bg_popup_fep_shadow_pane_cp4

0xd228,	// (0x00060e63) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd228,	// (0x00060e63) bg_popup_fep_shadow_pane_cp5

0xd23a,	// (0x00060e75) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd23a,	// (0x00060e75) popup_fep_china_hwr2_fs_control_bar_grid

0xd24a,	// (0x00060e85) popup_fep_china_hwr2_fs_control_funtion_grid

0xd252,	// (0x00060e8d) aid_fep_china_hwr2_fs_candi_cell

0xeb7b,	// (0x000627b6) bg_popup_fep_shadow_pane_cp6

0xd25c,	// (0x00060e97) popup_fep_china_hwr2_fs_candidate_grid

0xd266,	// (0x00060ea1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd266,	// (0x00060ea1) cell_fep_china_hwr2_fs_funtion_grid

0xbacd,	// (0x0005f708) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd27e,	// (0x00060eb9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd27e,	// (0x00060eb9) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd28c,	// (0x00060ec7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd28c,	// (0x00060ec7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd31,	// (0x0006396c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd31,	// (0x0006396c) cell_fep_china_hwr2_fs_funtion_grid_g

0xd2a2,	// (0x00060edd) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd2a2,	// (0x00060edd) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd2b7,	// (0x00060ef2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd2b7,	// (0x00060ef2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd36,	// (0x00063971) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd36,	// (0x00063971) cell_fep_china_hwr2_fs_funtion_grid_t

0xd2d3,	// (0x00060f0e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd2db,	// (0x00060f16) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd2e3,	// (0x00060f1e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3b,	// (0x00063976) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd2eb,	// (0x00060f26) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd2eb,	// (0x00060f26) cell_fep_china_hwr2_fs_candidate_grid

0xd304,	// (0x00060f3f) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd30c,	// (0x00060f47) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbacd,	// (0x0005f708) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbacd,	// (0x0005f708) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb56,	// (0x00063791) cell_fep_china_hwr2_fs_candidate_grid_g

0xd314,	// (0x00060f4f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8f19,	// (0x0005cb54) clock_nsta_pane_cp_24_ParamLimits

0x8f19,	// (0x0005cb54) clock_nsta_pane_cp_24

0x8f97,	// (0x0005cbd2) indicator_nsta_pane_cp_24_ParamLimits

0x8f97,	// (0x0005cbd2) indicator_nsta_pane_cp_24

0xa01a,	// (0x0005dc55) heading_pane_g1

0x0001,

0xf8c6,	// (0x00063501) heading_pane_g

0xac18,	// (0x0005e853) grid_sct_catagory_button_pane

0xac48,	// (0x0005e883) scroll_pane_cp5_ParamLimits

0xb6c0,	// (0x0005f2fb) button_value_adjust_pane_cp5_ParamLimits

0xb6c0,	// (0x0005f2fb) button_value_adjust_pane_cp5

0xb79f,	// (0x0005f3da) form2_midp_time_pane_ParamLimits

0xd322,	// (0x00060f5d) cell_sct_catagory_button_pane_ParamLimits

0xd322,	// (0x00060f5d) cell_sct_catagory_button_pane

0xba92,	// (0x0005f6cd) bg_button_pane_cp01_ParamLimits

0xba92,	// (0x0005f6cd) bg_button_pane_cp01

0xbacd,	// (0x0005f708) cell_sct_catagory_button_pane_g1

0x7224,	// (0x0005ae5f) popup_tb_extension_window

0xd334,	// (0x00060f6f) aid_size_cell_ext_ParamLimits

0xd334,	// (0x00060f6f) aid_size_cell_ext

0xed15,	// (0x00062950) bg_tb_trans_pane_cp1_ParamLimits

0xed15,	// (0x00062950) bg_tb_trans_pane_cp1

0xd354,	// (0x00060f8f) grid_tb_ext_pane_ParamLimits

0xd354,	// (0x00060f8f) grid_tb_ext_pane

0xd384,	// (0x00060fbf) cell_tb_ext_pane_ParamLimits

0xd384,	// (0x00060fbf) cell_tb_ext_pane

0xd39b,	// (0x00060fd6) cell_tb_ext_pane_g1_ParamLimits

0xd39b,	// (0x00060fd6) cell_tb_ext_pane_g1

0xd3b8,	// (0x00060ff3) cell_tb_ext_pane_t1

0xed15,	// (0x00062950) list_highlight_pane_cp11_ParamLimits

0xed15,	// (0x00062950) list_highlight_pane_cp11

0x5583,	// (0x000591be) popup_uni_indicator_window_ParamLimits

0x5583,	// (0x000591be) popup_uni_indicator_window

0xef9d,	// (0x00062bd8) bg_popup_sub_pane_cp14

0xd3d4,	// (0x0006100f) list_uniindi_pane

0xd3e0,	// (0x0006101b) uniindi_top_pane

0xed15,	// (0x00062950) bg_uniindi_top_pane

0xd3ff,	// (0x0006103a) uniindi_top_pane_g1

0xd415,	// (0x00061050) uniindi_top_pane_g2

0x0003,

0xfd42,	// (0x0006397d) uniindi_top_pane_g

0xd43f,	// (0x0006107a) uniindi_top_pane_t1

0xd469,	// (0x000610a4) list_single_uniindi_pane_ParamLimits

0xd469,	// (0x000610a4) list_single_uniindi_pane

0xbacd,	// (0x0005f708) bg_uniindi_top_pane_g1

0xd47b,	// (0x000610b6) list_single_uniindi_pane_g1

0xd48e,	// (0x000610c9) list_single_uniindi_pane_t1

0x5407,	// (0x00059042) control_bg_pane

0xd4b3,	// (0x000610ee) bg_sctrl_sk_pane_cp1

0xd4bc,	// (0x000610f7) bg_sctrl_sk_pane_cp2

0xd4c5,	// (0x00061100) control_bg_pane_g1

0xd4ce,	// (0x00061109) control_bg_pane_g2

0x0001,

0xfd4b,	// (0x00063986) control_bg_pane_g

0xb517,	// (0x0005f152) cell_indicator_nsta_pane_g1_ParamLimits

0xb525,	// (0x0005f160) cell_indicator_nsta_pane_g2_ParamLimits

0xfaba,	// (0x000636f5) cell_indicator_nsta_pane_g_ParamLimits

0x44a1,	// (0x000580dc) form2_midp_time_pane_t1_ParamLimits

0x6db8,	// (0x0005a9f3) main_idle_act4_pane_ParamLimits

0x6db8,	// (0x0005a9f3) main_idle_act4_pane

0x7224,	// (0x0005ae5f) popup_tb_extension_window_ParamLimits

0xd374,	// (0x00060faf) tb_ext_find_pane_ParamLimits

0xd374,	// (0x00060faf) tb_ext_find_pane

0xd4d7,	// (0x00061112) ai_gene_pane_1_cp1

0x8c13,	// (0x0005c84e) ai_gene_pane_2_cp1

0xd4df,	// (0x0006111a) list_single_idle_plugin_calendar_pane

0xd4e8,	// (0x00061123) list_single_idle_plugin_notification_pane

0xd4f1,	// (0x0006112c) list_single_idle_plugin_player_pane

0xd4fa,	// (0x00061135) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd4fa,	// (0x00061135) list_single_idle_plugin_shortcut_pane

0xd51c,	// (0x00061157) main_idle_act4_pane_t1

0xd52e,	// (0x00061169) main_idle_act4_pane_t2

0x0001,

0xfd50,	// (0x0006398b) main_idle_act4_pane_t

0xd540,	// (0x0006117b) middle_sk_idle_act4_pane_ParamLimits

0xd540,	// (0x0006117b) middle_sk_idle_act4_pane

0xd556,	// (0x00061191) popup_clock_digital_analogue_window_cp2

0xd570,	// (0x000611ab) shortcut_wheel_idle_act4_pane_ParamLimits

0xd570,	// (0x000611ab) shortcut_wheel_idle_act4_pane

0xbacd,	// (0x0005f708) shortcut_wheel_idle_act4_pane_g1

0xbacd,	// (0x0005f708) shortcut_wheel_idle_act4_pane_g2

0xbacd,	// (0x0005f708) shortcut_wheel_idle_act4_pane_g3

0xbacd,	// (0x0005f708) shortcut_wheel_idle_act4_pane_g4

0xbacd,	// (0x0005f708) shortcut_wheel_idle_act4_pane_g5

0xd584,	// (0x000611bf) shortcut_wheel_idle_act4_pane_g6

0xd58c,	// (0x000611c7) shortcut_wheel_idle_act4_pane_g7

0xd594,	// (0x000611cf) shortcut_wheel_idle_act4_pane_g8

0xd59c,	// (0x000611d7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd55,	// (0x00063990) shortcut_wheel_idle_act4_pane_g

0xbd3d,	// (0x0005f978) middle_sk_idle_act4_pane_g1_ParamLimits

0xbd3d,	// (0x0005f978) middle_sk_idle_act4_pane_g1

0xd600,	// (0x0006123b) middle_sk_idle_act4_pane_g2_ParamLimits

0xd600,	// (0x0006123b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd78,	// (0x000639b3) middle_sk_idle_act4_pane_g_ParamLimits

0xfd78,	// (0x000639b3) middle_sk_idle_act4_pane_g

0xd60c,	// (0x00061247) middle_sk_idle_act4_pane_t1_ParamLimits

0xd60c,	// (0x00061247) middle_sk_idle_act4_pane_t1

0xd629,	// (0x00061264) grid_ai_shortcut_pane_ParamLimits

0xd629,	// (0x00061264) grid_ai_shortcut_pane

0xd642,	// (0x0006127d) list_highlight_pane_cp16_ParamLimits

0xd642,	// (0x0006127d) list_highlight_pane_cp16

0xd64f,	// (0x0006128a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd64f,	// (0x0006128a) list_single_idle_plugin_shortcut_pane_g1

0xd65b,	// (0x00061296) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd65b,	// (0x00061296) list_single_idle_plugin_shortcut_pane_g2

0xd673,	// (0x000612ae) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd673,	// (0x000612ae) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7d,	// (0x000639b8) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7d,	// (0x000639b8) list_single_idle_plugin_shortcut_pane_g

0xd686,	// (0x000612c1) cell_ai_shortcut_pane_ParamLimits

0xd686,	// (0x000612c1) cell_ai_shortcut_pane

0xd6aa,	// (0x000612e5) cell_ai_shortcut_pane_g1_ParamLimits

0xd6aa,	// (0x000612e5) cell_ai_shortcut_pane_g1

0xd4d7,	// (0x00061112) ai_gene_pane_1_cp2

0xd6cc,	// (0x00061307) ai_gene_pane_2_cp2

0xd6d4,	// (0x0006130f) list_highlight_pane_cp15

0xd6dd,	// (0x00061318) list_single_idle_plugin_calendar_pane_g1

0xd6d4,	// (0x0006130f) list_highlight_pane_cp17

0xd6e5,	// (0x00061320) list_single_idle_plugin_calendar_pane_g1_copy1

0xd6ed,	// (0x00061328) list_single_idle_plugin_player_pane_g1

0xae71,	// (0x0005eaac) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd84,	// (0x000639bf) list_single_idle_plugin_player_pane_g

0xd6f5,	// (0x00061330) list_single_idle_plugin_player_pane_t1

0xd703,	// (0x0006133e) list_single_idle_plugin_player_pane_t2

0xd711,	// (0x0006134c) list_single_idle_plugin_player_pane_t3

0xd71f,	// (0x0006135a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd89,	// (0x000639c4) list_single_idle_plugin_player_pane_t

0xd72d,	// (0x00061368) wait_bar_pane_cp15

0xd735,	// (0x00061370) grid_ai_notification_pane

0xae71,	// (0x0005eaac) list_single_idle_plugin_notification_pane_g1

0xd73e,	// (0x00061379) cell_ai_notification_pane_ParamLimits

0xd73e,	// (0x00061379) cell_ai_notification_pane

0xd74b,	// (0x00061386) cell_ai_notification_pane_g1

0xd753,	// (0x0006138e) cell_ai_notification_pane_t1

0xd761,	// (0x0006139c) tb_ext_find_button_pane

0xd769,	// (0x000613a4) tb_ext_find_pane_g1

0xd771,	// (0x000613ac) tb_ext_find_pane_t1

0x12e5,	// (0x00054f20) tb_ext_find_button_pane_g1

0xd77f,	// (0x000613ba) tb_ext_find_button_pane_g2

0x0001,

0xfd92,	// (0x000639cd) tb_ext_find_button_pane_g

0xd51c,	// (0x00061157) main_idle_act4_pane_t1_ParamLimits

0xd52e,	// (0x00061169) main_idle_act4_pane_t2_ParamLimits

0xfd50,	// (0x0006398b) main_idle_act4_pane_t_ParamLimits

0xd556,	// (0x00061191) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd564,	// (0x0006119f) sat_plugin_idle_act4_pane_ParamLimits

0xd564,	// (0x0006119f) sat_plugin_idle_act4_pane

0xd788,	// (0x000613c3) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd788,	// (0x000613c3) sat_plugin_idle_act4_pane_t1

0xd79b,	// (0x000613d6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd79b,	// (0x000613d6) sat_plugin_idle_act4_pane_t2

0xd7ae,	// (0x000613e9) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd7ae,	// (0x000613e9) sat_plugin_idle_act4_pane_t3

0xd7c1,	// (0x000613fc) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd7c1,	// (0x000613fc) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd97,	// (0x000639d2) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd97,	// (0x000639d2) sat_plugin_idle_act4_pane_t

0x54cc,	// (0x00059107) popup_battery_window_ParamLimits

0x54cc,	// (0x00059107) popup_battery_window

0xed15,	// (0x00062950) bg_popup_sub_pane_cp25_ParamLimits

0xed15,	// (0x00062950) bg_popup_sub_pane_cp25

0xd7d4,	// (0x0006140f) popup_battery_window_g1_ParamLimits

0xd7d4,	// (0x0006140f) popup_battery_window_g1

0xd7e0,	// (0x0006141b) popup_battery_window_t1_ParamLimits

0xd7e0,	// (0x0006141b) popup_battery_window_t1

0xd7f2,	// (0x0006142d) popup_battery_window_t2_ParamLimits

0xd7f2,	// (0x0006142d) popup_battery_window_t2

0x0001,

0xfda0,	// (0x000639db) popup_battery_window_t_ParamLimits

0xfda0,	// (0x000639db) popup_battery_window_t

0x8adc,	// (0x0005c717) midp_canvas_pane_ParamLimits

0x8b55,	// (0x0005c790) midp_keypad_pane_ParamLimits

0x8b55,	// (0x0005c790) midp_keypad_pane

0x8e13,	// (0x0005ca4e) main_midp_pane_ParamLimits

0xb580,	// (0x0005f1bb) signal_pane_g2_cp_ParamLimits

0xd80f,	// (0x0006144a) aid_size_cell_midp_keypad_ParamLimits

0xd80f,	// (0x0006144a) aid_size_cell_midp_keypad

0xd829,	// (0x00061464) midp_keyp_game_grid_pane_ParamLimits

0xd829,	// (0x00061464) midp_keyp_game_grid_pane

0xd849,	// (0x00061484) midp_keyp_rocker_pane_ParamLimits

0xd849,	// (0x00061484) midp_keyp_rocker_pane

0xd882,	// (0x000614bd) midp_keyp_sk_left_pane_ParamLimits

0xd882,	// (0x000614bd) midp_keyp_sk_left_pane

0xd8dc,	// (0x00061517) midp_keyp_sk_right_pane_ParamLimits

0xd8dc,	// (0x00061517) midp_keyp_sk_right_pane

0xeb7b,	// (0x000627b6) bg_button_pane_cp03

0xd936,	// (0x00061571) midp_keyp_sk_left_pane_g1

0xeb7b,	// (0x000627b6) bg_button_pane_cp04

0xd936,	// (0x00061571) midp_keyp_sk_right_pane_g1

0xbacd,	// (0x0005f708) midp_keyp_rocker_pane_g1

0xd93f,	// (0x0006157a) keyp_game_cell_pane_ParamLimits

0xd93f,	// (0x0006157a) keyp_game_cell_pane

0xeb7b,	// (0x000627b6) bg_button_pane_cp02

0xd952,	// (0x0006158d) keyp_game_cell_pane_g1

0x5502,	// (0x0005913d) popup_fep_vkb2_window_ParamLimits

0x5502,	// (0x0005913d) popup_fep_vkb2_window

0x7f5a,	// (0x0005bb95) aid_size_cell_vkb2_ParamLimits

0x7f5a,	// (0x0005bb95) aid_size_cell_vkb2

0x7fae,	// (0x0005bbe9) popup_fep_vkb2_window_g1_ParamLimits

0x7fae,	// (0x0005bbe9) popup_fep_vkb2_window_g1

0x7ff6,	// (0x0005bc31) vkb2_area_bottom_pane_ParamLimits

0x7ff6,	// (0x0005bc31) vkb2_area_bottom_pane

0x8042,	// (0x0005bc7d) vkb2_area_keypad_pane_ParamLimits

0x8042,	// (0x0005bc7d) vkb2_area_keypad_pane

0x8084,	// (0x0005bcbf) vkb2_area_top_pane_ParamLimits

0x8084,	// (0x0005bcbf) vkb2_area_top_pane

0x80fe,	// (0x0005bd39) vkb2_top_entry_pane_ParamLimits

0x80fe,	// (0x0005bd39) vkb2_top_entry_pane

0x8128,	// (0x0005bd63) vkb2_top_grid_left_pane_ParamLimits

0x8128,	// (0x0005bd63) vkb2_top_grid_left_pane

0x8146,	// (0x0005bd81) vkb2_top_grid_right_pane_ParamLimits

0x8146,	// (0x0005bd81) vkb2_top_grid_right_pane

0x8164,	// (0x0005bd9f) vkb2_cell_keypad_pane_ParamLimits

0x8164,	// (0x0005bd9f) vkb2_cell_keypad_pane

0x8235,	// (0x0005be70) vkb2_area_bottom_grid_pane_ParamLimits

0x8235,	// (0x0005be70) vkb2_area_bottom_grid_pane

0x825b,	// (0x0005be96) vkb2_area_bottom_pane_g1_ParamLimits

0x825b,	// (0x0005be96) vkb2_area_bottom_pane_g1

0x827f,	// (0x0005beba) vkb2_area_bottom_pane_g2_ParamLimits

0x827f,	// (0x0005beba) vkb2_area_bottom_pane_g2

0x82ad,	// (0x0005bee8) vkb2_area_bottom_pane_g3_ParamLimits

0x82ad,	// (0x0005bee8) vkb2_area_bottom_pane_g3

0x0002,

0xfda5,	// (0x000639e0) vkb2_area_bottom_pane_g_ParamLimits

0xfda5,	// (0x000639e0) vkb2_area_bottom_pane_g

0x830e,	// (0x0005bf49) vkb2_top_cell_left_pane_ParamLimits

0x830e,	// (0x0005bf49) vkb2_top_cell_left_pane

0xd963,	// (0x0006159e) vkb2_top_entry_pane_g1_ParamLimits

0xd963,	// (0x0006159e) vkb2_top_entry_pane_g1

0xd971,	// (0x000615ac) vkb2_top_entry_pane_t1_ParamLimits

0xd971,	// (0x000615ac) vkb2_top_entry_pane_t1

0xd9a3,	// (0x000615de) vkb2_top_entry_pane_t2_ParamLimits

0xd9a3,	// (0x000615de) vkb2_top_entry_pane_t2

0xd9d5,	// (0x00061610) vkb2_top_entry_pane_t3_ParamLimits

0xd9d5,	// (0x00061610) vkb2_top_entry_pane_t3

0x0002,

0xfdac,	// (0x000639e7) vkb2_top_entry_pane_t_ParamLimits

0xfdac,	// (0x000639e7) vkb2_top_entry_pane_t

0x835b,	// (0x0005bf96) vkb2_top_grid_right_pane_g1_ParamLimits

0x835b,	// (0x0005bf96) vkb2_top_grid_right_pane_g1

0x8371,	// (0x0005bfac) vkb2_top_grid_right_pane_g2_ParamLimits

0x8371,	// (0x0005bfac) vkb2_top_grid_right_pane_g2

0x8389,	// (0x0005bfc4) vkb2_top_grid_right_pane_g3_ParamLimits

0x8389,	// (0x0005bfc4) vkb2_top_grid_right_pane_g3

0x83a1,	// (0x0005bfdc) vkb2_top_grid_right_pane_g4_ParamLimits

0x83a1,	// (0x0005bfdc) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb3,	// (0x000639ee) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb3,	// (0x000639ee) vkb2_top_grid_right_pane_g

0x83b7,	// (0x0005bff2) vkb2_top_cell_left_pane_g1

0x83ce,	// (0x0005c009) vkb2_cell_keypad_pane_g1_ParamLimits

0x83ce,	// (0x0005c009) vkb2_cell_keypad_pane_g1

0xd9f9,	// (0x00061634) vkb2_cell_keypad_pane_t1_ParamLimits

0xd9f9,	// (0x00061634) vkb2_cell_keypad_pane_t1

0x83dc,	// (0x0005c017) vkb2_cell_bottom_grid_pane_ParamLimits

0x83dc,	// (0x0005c017) vkb2_cell_bottom_grid_pane

0x8415,	// (0x0005c050) vkb2_cell_bottom_grid_pane_g1

0xd5a4,	// (0x000611df) aid_call2_pane_cp02

0xd5ac,	// (0x000611e7) aid_call_pane_cp02

0xd5b4,	// (0x000611ef) clock_digital_number_pane_cp10

0xd5bc,	// (0x000611f7) clock_digital_number_pane_cp11

0xd5c4,	// (0x000611ff) clock_digital_number_pane_cp12

0xd5cc,	// (0x00061207) clock_digital_number_pane_cp13

0xd5d4,	// (0x0006120f) clock_digital_separator_pane_cp10

0x12e5,	// (0x00054f20) popup_clock_digital_analogue_window_cp2_g1

0x12e5,	// (0x00054f20) popup_clock_digital_analogue_window_cp2_g2

0xd5dc,	// (0x00061217) popup_clock_digital_analogue_window_cp2_g3

0x12e5,	// (0x00054f20) popup_clock_digital_analogue_window_cp2_g4

0xd5dc,	// (0x00061217) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd68,	// (0x000639a3) popup_clock_digital_analogue_window_cp2_g

0xd5e4,	// (0x0006121f) popup_clock_digital_analogue_window_cp2_t1

0xd5f2,	// (0x0006122d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd73,	// (0x000639ae) popup_clock_digital_analogue_window_cp2_t

0xbacd,	// (0x0005f708) clock_digital_number_pane_cp10_g1

0xbacd,	// (0x0005f708) clock_digital_number_pane_cp10_g2

0x0001,

0xfb56,	// (0x00063791) clock_digital_number_pane_cp10_g

0xbacd,	// (0x0005f708) clock_digital_separator_pane_cp10_g1

0xbacd,	// (0x0005f708) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb56,	// (0x00063791) clock_digital_separator_pane_cp10_g

0xd421,	// (0x0006105c) uniindi_top_pane_g3

0xd432,	// (0x0006106d) uniindi_top_pane_g4

0x81ef,	// (0x0005be2a) vkb2_row_keypad_pane_ParamLimits

0x81ef,	// (0x0005be2a) vkb2_row_keypad_pane

0x8431,	// (0x0005c06c) vkb2_cell_t_keypad_pane_ParamLimits

0x8431,	// (0x0005c06c) vkb2_cell_t_keypad_pane

0x8441,	// (0x0005c07c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8441,	// (0x0005c07c) vkb2_cell_t_keypad_pane_cp08

0x8454,	// (0x0005c08f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8454,	// (0x0005c08f) vkb2_cell_t_keypad_pane_cp09

0x8468,	// (0x0005c0a3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8468,	// (0x0005c0a3) vkb2_cell_t_keypad_pane_cp01

0x8479,	// (0x0005c0b4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8479,	// (0x0005c0b4) vkb2_cell_t_keypad_pane_cp02

0x848a,	// (0x0005c0c5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x848a,	// (0x0005c0c5) vkb2_cell_t_keypad_pane_cp03

0x849b,	// (0x0005c0d6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x849b,	// (0x0005c0d6) vkb2_cell_t_keypad_pane_cp04

0x84ac,	// (0x0005c0e7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x84ac,	// (0x0005c0e7) vkb2_cell_t_keypad_pane_cp05

0x84bd,	// (0x0005c0f8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x84bd,	// (0x0005c0f8) vkb2_cell_t_keypad_pane_cp06

0x84ce,	// (0x0005c109) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x84ce,	// (0x0005c109) vkb2_cell_t_keypad_pane_cp07

0x84df,	// (0x0005c11a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x84df,	// (0x0005c11a) vkb2_cell_t_keypad_pane_cp10

0x7b98,	// (0x0005b7d3) vkb2_cell_t_keypad_pane_g1

0xda10,	// (0x0006164b) vkb2_cell_t_keypad_pane_t1

0x5407,	// (0x00059042) popup_grid_graphic2_window

0xda22,	// (0x0006165d) aid_size_cell_graphic2_ParamLimits

0xda22,	// (0x0006165d) aid_size_cell_graphic2

0xda5a,	// (0x00061695) bg_popup_window_pane_cp21_ParamLimits

0xda5a,	// (0x00061695) bg_popup_window_pane_cp21

0xda68,	// (0x000616a3) graphic2_pages_pane_ParamLimits

0xda68,	// (0x000616a3) graphic2_pages_pane

0xdaae,	// (0x000616e9) grid_graphic2_control_pane_ParamLimits

0xdaae,	// (0x000616e9) grid_graphic2_control_pane

0xdaec,	// (0x00061727) grid_graphic2_pane_ParamLimits

0xdaec,	// (0x00061727) grid_graphic2_pane

0xdb60,	// (0x0006179b) cell_graphic2_pane

0x5407,	// (0x00059042) main_comp_mode_pane

0xcca4,	// (0x000608df) list_ai3_gene_pane_ParamLimits

0xd068,	// (0x00060ca3) bg_popup_window_pane_cp19_ParamLimits

0xd074,	// (0x00060caf) bg_touch_area_indi_pane_ParamLimits

0xd074,	// (0x00060caf) bg_touch_area_indi_pane

0xd08a,	// (0x00060cc5) bg_touch_area_indi_pane_cp01_ParamLimits

0xd08a,	// (0x00060cc5) bg_touch_area_indi_pane_cp01

0xd0a0,	// (0x00060cdb) bg_touch_area_indi_pane_cp02_ParamLimits

0xd0a0,	// (0x00060cdb) bg_touch_area_indi_pane_cp02

0xd0b8,	// (0x00060cf3) bg_touch_area_indi_pane_cp03_ParamLimits

0xd0b8,	// (0x00060cf3) bg_touch_area_indi_pane_cp03

0xd0d2,	// (0x00060d0d) popup_slider_window_g1_ParamLimits

0xd0ee,	// (0x00060d29) popup_slider_window_g2_ParamLimits

0xd10a,	// (0x00060d45) popup_slider_window_g3_ParamLimits

0xfcfd,	// (0x00063938) popup_slider_window_g_ParamLimits

0xd166,	// (0x00060da1) popup_slider_window_t1_ParamLimits

0xd1da,	// (0x00060e15) small_volume_slider_vertical_pane_ParamLimits

0xdb60,	// (0x0006179b) cell_graphic2_pane_ParamLimits

0xdbaf,	// (0x000617ea) bg_button_pane_cp10_ParamLimits

0xdbaf,	// (0x000617ea) bg_button_pane_cp10

0xdbc2,	// (0x000617fd) bg_button_pane_cp11_ParamLimits

0xdbc2,	// (0x000617fd) bg_button_pane_cp11

0xdbd5,	// (0x00061810) graphic2_pages_pane_g1_ParamLimits

0xdbd5,	// (0x00061810) graphic2_pages_pane_g1

0xdbf0,	// (0x0006182b) graphic2_pages_pane_g2_ParamLimits

0xdbf0,	// (0x0006182b) graphic2_pages_pane_g2

0x0001,

0xfdc1,	// (0x000639fc) graphic2_pages_pane_g_ParamLimits

0xfdc1,	// (0x000639fc) graphic2_pages_pane_g

0xdc08,	// (0x00061843) graphic2_pages_pane_t1_ParamLimits

0xdc08,	// (0x00061843) graphic2_pages_pane_t1

0xdc20,	// (0x0006185b) cell_graphic2_control_pane_ParamLimits

0xdc20,	// (0x0006185b) cell_graphic2_control_pane

0xdc3e,	// (0x00061879) cell_graphic2_pane_g1_ParamLimits

0xdc3e,	// (0x00061879) cell_graphic2_pane_g1

0xdc4b,	// (0x00061886) cell_graphic2_pane_g2_ParamLimits

0xdc4b,	// (0x00061886) cell_graphic2_pane_g2

0xdc58,	// (0x00061893) cell_graphic2_pane_g3_ParamLimits

0xdc58,	// (0x00061893) cell_graphic2_pane_g3

0xdc65,	// (0x000618a0) cell_graphic2_pane_g4_ParamLimits

0xdc65,	// (0x000618a0) cell_graphic2_pane_g4

0xdc72,	// (0x000618ad) cell_graphic2_pane_g5_ParamLimits

0xdc72,	// (0x000618ad) cell_graphic2_pane_g5

0x0004,

0xfdc6,	// (0x00063a01) cell_graphic2_pane_g_ParamLimits

0xfdc6,	// (0x00063a01) cell_graphic2_pane_g

0xdc8d,	// (0x000618c8) cell_graphic2_pane_t1_ParamLimits

0xdc8d,	// (0x000618c8) cell_graphic2_pane_t1

0x93ac,	// (0x0005cfe7) grid_highlight_pane_cp11_ParamLimits

0x93ac,	// (0x0005cfe7) grid_highlight_pane_cp11

0xed15,	// (0x00062950) bg_button_pane_cp05

0xdcc4,	// (0x000618ff) cell_graphic2_control_pane_g1

0xbacd,	// (0x0005f708) bg_touch_area_indi_pane_g1

0xdcec,	// (0x00061927) aid_cmod_rocker_key_size

0xdcf6,	// (0x00061931) aid_cmode_itu_key_size

0xdd00,	// (0x0006193b) main_cmode_video_pane

0xdd0a,	// (0x00061945) main_comp_mode_itu_pane

0xdd16,	// (0x00061951) main_comp_mode_rocker_pane

0xdd22,	// (0x0006195d) cell_cmode_rocker_pane_ParamLimits

0xdd22,	// (0x0006195d) cell_cmode_rocker_pane

0xdd34,	// (0x0006196f) cell_cmode_itu_pane_ParamLimits

0xdd34,	// (0x0006196f) cell_cmode_itu_pane

0xef9d,	// (0x00062bd8) bg_button_pane_cp06_ParamLimits

0xef9d,	// (0x00062bd8) bg_button_pane_cp06

0xbd3d,	// (0x0005f978) cell_cmode_rocker_pane_g1_ParamLimits

0xbd3d,	// (0x0005f978) cell_cmode_rocker_pane_g1

0xd27e,	// (0x00060eb9) cell_cmode_rocker_pane_g2_ParamLimits

0xd27e,	// (0x00060eb9) cell_cmode_rocker_pane_g2

0x0001,

0xfdd6,	// (0x00063a11) cell_cmode_rocker_pane_g_ParamLimits

0xfdd6,	// (0x00063a11) cell_cmode_rocker_pane_g

0xeb7b,	// (0x000627b6) bg_button_pane_cp07

0xdd49,	// (0x00061984) cell_cmode_itu_pane_g1

0xdd52,	// (0x0006198d) cell_cmode_itu_pane_t1

0xdd60,	// (0x0006199b) cell_cmode_itu_pane_t2

0x0001,

0xfddb,	// (0x00063a16) cell_cmode_itu_pane_t

0xd4a3,	// (0x000610de) aid_touch_ctrl_left

0xd4ab,	// (0x000610e6) aid_touch_ctrl_right

0xeb7b,	// (0x000627b6) compa_mode_pane

0xdd6e,	// (0x000619a9) aid_cmod_rocker_key_size_cp

0xdd78,	// (0x000619b3) aid_cmode_itu_key_size_cp

0xdd82,	// (0x000619bd) compa_mode_pane_g1

0xdd8a,	// (0x000619c5) compa_mode_pane_g2

0xdd92,	// (0x000619cd) compa_mode_pane_g3

0x0002,

0xfde0,	// (0x00063a1b) compa_mode_pane_g

0xdd9a,	// (0x000619d5) main_comp_mode_itu_pane_cp

0xdda2,	// (0x000619dd) main_comp_mode_rocker_pane_cp

0xddaa,	// (0x000619e5) cell_cmode_itu_pane_cp_ParamLimits

0xddaa,	// (0x000619e5) cell_cmode_itu_pane_cp

0xddbf,	// (0x000619fa) cell_cmode_rocker_pane_cp_ParamLimits

0xddbf,	// (0x000619fa) cell_cmode_rocker_pane_cp

0xef9d,	// (0x00062bd8) bg_button_pane_cp06_cp_ParamLimits

0xef9d,	// (0x00062bd8) bg_button_pane_cp06_cp

0xbd3d,	// (0x0005f978) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbd3d,	// (0x0005f978) cell_cmode_rocker_pane_g1_cp

0xbacd,	// (0x0005f708) cell_cmode_rocker_pane_g2_cp

0xeb7b,	// (0x000627b6) bg_button_pane_cp07_cp

0xddd1,	// (0x00061a0c) cell_cmode_itu_pane_g1_cp

0xddda,	// (0x00061a15) cell_cmode_itu_pane_t1_cp

0xddda,	// (0x00061a15) cell_cmode_itu_pane_t2_cp

0xa835,	// (0x0005e470) settings_code_pane_cp2

0xebdd,	// (0x00062818) bg_popup_window_pane_cp3_ParamLimits

0xee2e,	// (0x00062a69) heading_pane_cp3_ParamLimits

0xee3a,	// (0x00062a75) listscroll_popup_graphic_pane_ParamLimits

0x7941,	// (0x0005b57c) fep_hwr_aid_pane_ParamLimits

0x7eb5,	// (0x0005baf0) aid_touch_sctrl_top_ParamLimits

0x7ed0,	// (0x0005bb0b) sctrl_sk_top_pane_g1_ParamLimits

0x7b98,	// (0x0005b7d3) sctrl_sk_top_pane_g2_ParamLimits

0xfd16,	// (0x00063951) sctrl_sk_top_pane_g_ParamLimits

0x7edd,	// (0x0005bb18) sctrl_sk_top_pane_t1_ParamLimits

0x7eb5,	// (0x0005baf0) aid_touch_sctrl_bottom_ParamLimits

0x7edd,	// (0x0005bb18) sctrl_sk_bottom_pane_t1_ParamLimits

0xd3ed,	// (0x00061028) aid_area_touch_clock

0x80c6,	// (0x0005bd01) aid_vkb2_area_top_pane_cell_ParamLimits

0x80c6,	// (0x0005bd01) aid_vkb2_area_top_pane_cell

0x8211,	// (0x0005be4c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8211,	// (0x0005be4c) aid_vkb2_area_bottom_pane_cell

0xd95b,	// (0x00061596) popup_char_count_window

0xdde8,	// (0x00061a23) popup_char_count_window_g1

0xddf1,	// (0x00061a2c) popup_char_count_window_g2

0xddfa,	// (0x00061a35) popup_char_count_window_g3

0x0002,

0xfde7,	// (0x00063a22) popup_char_count_window_g

0xde03,	// (0x00061a3e) popup_char_count_window_t1

0x7f8c,	// (0x0005bbc7) popup_fep_char_preview_window_ParamLimits

0x7f8c,	// (0x0005bbc7) popup_fep_char_preview_window

0x80e4,	// (0x0005bd1f) vkb2_top_candi_pane_ParamLimits

0x80e4,	// (0x0005bd1f) vkb2_top_candi_pane

0xde11,	// (0x00061a4c) cell_vkb2_top_candi_pane_ParamLimits

0xde11,	// (0x00061a4c) cell_vkb2_top_candi_pane

0x84f4,	// (0x0005c12f) bg_popup_fep_char_preview_window_ParamLimits

0x84f4,	// (0x0005c12f) bg_popup_fep_char_preview_window

0x8502,	// (0x0005c13d) popup_fep_char_preview_window_t1_ParamLimits

0x8502,	// (0x0005c13d) popup_fep_char_preview_window_t1

0xde5e,	// (0x00061a99) bg_popup_fep_char_preview_window_g1

0xde66,	// (0x00061aa1) bg_popup_fep_char_preview_window_g2

0xde6e,	// (0x00061aa9) bg_popup_fep_char_preview_window_g3

0xde76,	// (0x00061ab1) bg_popup_fep_char_preview_window_g4

0xde7e,	// (0x00061ab9) bg_popup_fep_char_preview_window_g5

0x853c,	// (0x0005c177) bg_popup_fep_char_preview_window_g6

0xde86,	// (0x00061ac1) bg_popup_fep_char_preview_window_g7

0xde8e,	// (0x00061ac9) bg_popup_fep_char_preview_window_g8

0xde96,	// (0x00061ad1) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdee,	// (0x00063a29) bg_popup_fep_char_preview_window_g

0x7b98,	// (0x0005b7d3) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7b98,	// (0x0005b7d3) cell_vkb2_top_candi_pane_g1

0x7ba6,	// (0x0005b7e1) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7ba6,	// (0x0005b7e1) cell_vkb2_top_candi_pane_g2

0xcafb,	// (0x00060736) cell_vkb2_top_candi_pane_g3_ParamLimits

0xcafb,	// (0x00060736) cell_vkb2_top_candi_pane_g3

0x8544,	// (0x0005c17f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8544,	// (0x0005c17f) cell_vkb2_top_candi_pane_g4

0xc23d,	// (0x0005fe78) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc23d,	// (0x0005fe78) cell_vkb2_top_candi_pane_g5

0x8565,	// (0x0005c1a0) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8565,	// (0x0005c1a0) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe01,	// (0x00063a3c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe01,	// (0x00063a3c) cell_vkb2_top_candi_pane_g

0x8573,	// (0x0005c1ae) cell_vkb2_top_candi_pane_t1

0x769f,	// (0x0005b2da) aid_size_touch_slider_mark_ParamLimits

0x769f,	// (0x0005b2da) aid_size_touch_slider_mark

0xda9e,	// (0x000616d9) grid_graphic2_catg_pane_ParamLimits

0xda9e,	// (0x000616d9) grid_graphic2_catg_pane

0xdb3c,	// (0x00061777) popup_grid_graphic2_window_t1_ParamLimits

0xdb3c,	// (0x00061777) popup_grid_graphic2_window_t1

0xdb4e,	// (0x00061789) popup_grid_graphic2_window_t2_ParamLimits

0xdb4e,	// (0x00061789) popup_grid_graphic2_window_t2

0x0001,

0xfdbc,	// (0x000639f7) popup_grid_graphic2_window_t_ParamLimits

0xfdbc,	// (0x000639f7) popup_grid_graphic2_window_t

0xed15,	// (0x00062950) bg_button_pane_cp05_ParamLimits

0xdcc4,	// (0x000618ff) cell_graphic2_control_pane_g1_ParamLimits

0xde9e,	// (0x00061ad9) cell_graphic2_catg_pane_ParamLimits

0xde9e,	// (0x00061ad9) cell_graphic2_catg_pane

0xeb7b,	// (0x000627b6) bg_button_pane_cp12

0xdeb0,	// (0x00061aeb) cell_graphic2_catg_pane_g1

0xd3b8,	// (0x00060ff3) cell_tb_ext_pane_t1_ParamLimits

0x832e,	// (0x0005bf69) vkb2_top_cell_right_narrow_pane_ParamLimits

0x832e,	// (0x0005bf69) vkb2_top_cell_right_narrow_pane

0x8346,	// (0x0005bf81) vkb2_top_cell_right_wide_pane_ParamLimits

0x8346,	// (0x0005bf81) vkb2_top_cell_right_wide_pane

0x7933,	// (0x0005b56e) bg_vkb2_func_pane_ParamLimits

0x7933,	// (0x0005b56e) bg_vkb2_func_pane

0x83b7,	// (0x0005bff2) vkb2_top_cell_left_pane_g1_ParamLimits

0x7933,	// (0x0005b56e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7933,	// (0x0005b56e) bg_vkb2_fuc_pane_cp03

0x8415,	// (0x0005c050) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9328,	// (0x0005cf63) bg_vkb2_func_pane_g1

0x9330,	// (0x0005cf6b) bg_vkb2_func_pane_g2

0x9340,	// (0x0005cf7b) bg_vkb2_func_pane_g3

0x9338,	// (0x0005cf73) bg_vkb2_func_pane_g4

0x9348,	// (0x0005cf83) bg_vkb2_func_pane_g5

0x9350,	// (0x0005cf8b) bg_vkb2_func_pane_g6

0x9358,	// (0x0005cf93) bg_vkb2_func_pane_g7

0x9360,	// (0x0005cf9b) bg_vkb2_func_pane_g8

0x9320,	// (0x0005cf5b) bg_vkb2_func_pane_g9

0x0008,

0xfe0e,	// (0x00063a49) bg_vkb2_func_pane_g

0x7933,	// (0x0005b56e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7933,	// (0x0005b56e) bg_vkb2_fuc_pane_cp01

0x83b7,	// (0x0005bff2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x83b7,	// (0x0005bff2) vkb2_top_cell_right_wide_pane_g1

0x7933,	// (0x0005b56e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7933,	// (0x0005b56e) bg_vkb2_fuc_pane_cp02

0x8415,	// (0x0005c050) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8415,	// (0x0005c050) vkb2_top_cell_right_narrow_pane_g1

0xcfea,	// (0x00060c25) aid_touch_area_decrease_ParamLimits

0xcfea,	// (0x00060c25) aid_touch_area_decrease

0xd00a,	// (0x00060c45) aid_touch_area_increase_ParamLimits

0xd00a,	// (0x00060c45) aid_touch_area_increase

0xd016,	// (0x00060c51) aid_touch_area_mute_ParamLimits

0xd016,	// (0x00060c51) aid_touch_area_mute

0xd03a,	// (0x00060c75) aid_touch_area_slider_ParamLimits

0xd03a,	// (0x00060c75) aid_touch_area_slider

0xd126,	// (0x00060d61) popup_slider_window_g4_ParamLimits

0xd126,	// (0x00060d61) popup_slider_window_g4

0xd132,	// (0x00060d6d) popup_slider_window_g5_ParamLimits

0xd132,	// (0x00060d6d) popup_slider_window_g5

0xd154,	// (0x00060d8f) popup_slider_window_g6_ParamLimits

0xd154,	// (0x00060d8f) popup_slider_window_g6

0xd194,	// (0x00060dcf) popup_slider_window_t2_ParamLimits

0xd194,	// (0x00060dcf) popup_slider_window_t2

0x0001,

0xfd0a,	// (0x00063945) popup_slider_window_t_ParamLimits

0xfd0a,	// (0x00063945) popup_slider_window_t

0xd1ac,	// (0x00060de7) slider_pane_ParamLimits

0xd1ac,	// (0x00060de7) slider_pane

0xdeb9,	// (0x00061af4) slider_pane_g1_ParamLimits

0xdeb9,	// (0x00061af4) slider_pane_g1

0xdecd,	// (0x00061b08) slider_pane_g2_ParamLimits

0xdecd,	// (0x00061b08) slider_pane_g2

0xdee3,	// (0x00061b1e) slider_pane_g3_ParamLimits

0xdee3,	// (0x00061b1e) slider_pane_g3

0x0003,

0xfe21,	// (0x00063a5c) slider_pane_g_ParamLimits

0xfe21,	// (0x00063a5c) slider_pane_g

0x7280,	// (0x0005aebb) popup_tb_float_extension_window_ParamLimits

0x7280,	// (0x0005aebb) popup_tb_float_extension_window

0xdf0f,	// (0x00061b4a) aid_size_cell_tb_float_ext

0xeb7b,	// (0x000627b6) bg_popup_sub_window_cp28

0xdf1b,	// (0x00061b56) grid_tb_float_ext_pane

0xdf25,	// (0x00061b60) cell_tb_float_ext_pane_ParamLimits

0xdf25,	// (0x00061b60) cell_tb_float_ext_pane

0xdf3f,	// (0x00061b7a) cell_tb_float_ext_pane_g1

0xdf48,	// (0x00061b83) grid_highlight_pane_cp12

0x7a82,	// (0x0005b6bd) cell_last_hwr_side_pane_ParamLimits

0x7a82,	// (0x0005b6bd) cell_last_hwr_side_pane

0xbacd,	// (0x0005f708) cell_last_hwr_side_pane_g1

0xdf51,	// (0x00061b8c) cell_last_hwr_side_pane_g2

0x0001,

0xfe2a,	// (0x00063a65) cell_last_hwr_side_pane_g

0x82dd,	// (0x0005bf18) vkb2_area_bottom_space_btn_pane_ParamLimits

0x82dd,	// (0x0005bf18) vkb2_area_bottom_space_btn_pane

0x7b98,	// (0x0005b7d3) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xda10,	// (0x0006164b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8573,	// (0x0005c1ae) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8592,	// (0x0005c1cd) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8592,	// (0x0005c1cd) vkb2_area_bottom_space_btn_pane_g1

0x85cc,	// (0x0005c207) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x85cc,	// (0x0005c207) vkb2_area_bottom_space_btn_pane_g2

0x8602,	// (0x0005c23d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8602,	// (0x0005c23d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2f,	// (0x00063a6a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2f,	// (0x00063a6a) vkb2_area_bottom_space_btn_pane_g

0x79f6,	// (0x0005b631) cel_fep_hwr_func_pane_ParamLimits

0x79f6,	// (0x0005b631) cel_fep_hwr_func_pane

0x7a32,	// (0x0005b66d) cell_hwr_side_button_pane_ParamLimits

0x7a32,	// (0x0005b66d) cell_hwr_side_button_pane

0xd3ed,	// (0x00061028) aid_area_touch_clock_ParamLimits

0xed15,	// (0x00062950) bg_uniindi_top_pane_ParamLimits

0xd3ff,	// (0x0006103a) uniindi_top_pane_g1_ParamLimits

0xd415,	// (0x00061050) uniindi_top_pane_g2_ParamLimits

0xd421,	// (0x0006105c) uniindi_top_pane_g3_ParamLimits

0xd432,	// (0x0006106d) uniindi_top_pane_g4_ParamLimits

0xfd42,	// (0x0006397d) uniindi_top_pane_g_ParamLimits

0xd43f,	// (0x0006107a) uniindi_top_pane_t1_ParamLimits

0xed15,	// (0x00062950) bg_vkb2_func_pane_cp01_ParamLimits

0xed15,	// (0x00062950) bg_vkb2_func_pane_cp01

0xdf5a,	// (0x00061b95) cel_fep_hwr_func_pane_g1_ParamLimits

0xdf5a,	// (0x00061b95) cel_fep_hwr_func_pane_g1

0xed15,	// (0x00062950) bg_vkb2_func_pane_cp02_ParamLimits

0xed15,	// (0x00062950) bg_vkb2_func_pane_cp02

0xdf5a,	// (0x00061b95) cell_hwr_side_button_pane_g1_ParamLimits

0xdf5a,	// (0x00061b95) cell_hwr_side_button_pane_g1

0x91a4,	// (0x0005cddf) status_pane_g4_ParamLimits

0x91a4,	// (0x0005cddf) status_pane_g4

0x91be,	// (0x0005cdf9) status_pane_t1

0xb808,	// (0x0005f443) form2_midp_gauge_slider_cont_pane

0xb810,	// (0x0005f44b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb822,	// (0x0005f45d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb834,	// (0x0005f46f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x00063744) form2_midp_gauge_slider_pane_t_ParamLimits

0xb846,	// (0x0005f481) form2_midp_slider_pane_ParamLimits

0x7f4c,	// (0x0005bb87) aid_size_cell_func_vkb2_ParamLimits

0x7f4c,	// (0x0005bb87) aid_size_cell_func_vkb2

0xdefb,	// (0x00061b36) slider_pane_g4_ParamLimits

0xdefb,	// (0x00061b36) slider_pane_g4

0x864c,	// (0x0005c287) form2_midp_gauge_slider_pane_t2_cp01

0x865a,	// (0x0005c295) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x865a,	// (0x0005c295) form2_midp_gauge_slider_pane_t3_cp01

0x8677,	// (0x0005c2b2) form2_midp_slider_pane_cp01

0xeb7b,	// (0x000627b6) navi_smil_pane

0xdf93,	// (0x00061bce) navi_smil_pane_g1

0xdf9b,	// (0x00061bd6) navi_smil_pane_t1

0xdf68,	// (0x00061ba3) form2_midp_slider_pane_g1

0xdf71,	// (0x00061bac) form2_midp_slider_pane_g2

0xdf79,	// (0x00061bb4) form2_midp_slider_pane_g3

0xdf68,	// (0x00061ba3) form2_midp_slider_pane_g4

0xdf81,	// (0x00061bbc) form2_midp_slider_pane_g5

0x0004,

0xfe38,	// (0x00063a73) form2_midp_slider_pane_g

0x863c,	// (0x0005c277) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x863c,	// (0x0005c277) vkb2_area_bottom_space_btn_pane_g4

0x8fd3,	// (0x0005cc0e) lc0_navi_pane_ParamLimits

0x8fd3,	// (0x0005cc0e) lc0_navi_pane

0x9049,	// (0x0005cc84) lc0_stat_indi_pane_ParamLimits

0x9049,	// (0x0005cc84) lc0_stat_indi_pane

0x9060,	// (0x0005cc9b) ls0_title_pane_ParamLimits

0x9060,	// (0x0005cc9b) ls0_title_pane

0xef9d,	// (0x00062bd8) bg_popup_sub_pane_cp14_ParamLimits

0xd3d4,	// (0x0006100f) list_uniindi_pane_ParamLimits

0xd3e0,	// (0x0006101b) uniindi_top_pane_ParamLimits

0xd47b,	// (0x000610b6) list_single_uniindi_pane_g1_ParamLimits

0xd48e,	// (0x000610c9) list_single_uniindi_pane_t1_ParamLimits

0x8680,	// (0x0005c2bb) lc0_stat_clock_pane_ParamLimits

0x8680,	// (0x0005c2bb) lc0_stat_clock_pane

0xdfa9,	// (0x00061be4) lc0_stat_indi_pane_g1_ParamLimits

0xdfa9,	// (0x00061be4) lc0_stat_indi_pane_g1

0xdfb6,	// (0x00061bf1) lc0_stat_indi_pane_g2_ParamLimits

0xdfb6,	// (0x00061bf1) lc0_stat_indi_pane_g2

0x0001,

0xfe43,	// (0x00063a7e) lc0_stat_indi_pane_g_ParamLimits

0xfe43,	// (0x00063a7e) lc0_stat_indi_pane_g

0x868d,	// (0x0005c2c8) lc0_uni_indicator_pane_ParamLimits

0x868d,	// (0x0005c2c8) lc0_uni_indicator_pane

0xdfc3,	// (0x00061bfe) ls0_title_pane_g1_ParamLimits

0xdfc3,	// (0x00061bfe) ls0_title_pane_g1

0xdfd7,	// (0x00061c12) ls0_title_pane_t1_ParamLimits

0xdfd7,	// (0x00061c12) ls0_title_pane_t1

0x869a,	// (0x0005c2d5) lc0_uni_indicator_pane_g1_ParamLimits

0x869a,	// (0x0005c2d5) lc0_uni_indicator_pane_g1

0xe00d,	// (0x00061c48) lc0_stat_clock_pane_t1

0x5407,	// (0x00059042) main_ai5_pane

0xe01b,	// (0x00061c56) ai5_sk_pane_ParamLimits

0xe01b,	// (0x00061c56) ai5_sk_pane

0xe028,	// (0x00061c63) cell_ai5_widget_pane_ParamLimits

0xe028,	// (0x00061c63) cell_ai5_widget_pane

0xe0da,	// (0x00061d15) aid_size_cell_widget_grid

0xe0e8,	// (0x00061d23) bg_ai5_widget_pane_ParamLimits

0xe0e8,	// (0x00061d23) bg_ai5_widget_pane

0xe15c,	// (0x00061d97) cell_ai5_widget_pane_g2

0xe16c,	// (0x00061da7) cell_ai5_widget_pane_g3

0xe183,	// (0x00061dbe) cell_ai5_widget_pane_g4

0xe18f,	// (0x00061dca) cell_ai5_widget_pane_g5

0xe19b,	// (0x00061dd6) cell_ai5_widget_pane_g6

0xe1a7,	// (0x00061de2) cell_ai5_widget_pane_g7

0xe1ef,	// (0x00061e2a) cell_ai5_widget_pane_t1_ParamLimits

0xe1ef,	// (0x00061e2a) cell_ai5_widget_pane_t1

0xe20c,	// (0x00061e47) cell_ai5_widget_pane_t2_ParamLimits

0xe20c,	// (0x00061e47) cell_ai5_widget_pane_t2

0xe224,	// (0x00061e5f) cell_ai5_widget_pane_t3_ParamLimits

0xe224,	// (0x00061e5f) cell_ai5_widget_pane_t3

0xe23c,	// (0x00061e77) cell_ai5_widget_pane_t4_ParamLimits

0xe23c,	// (0x00061e77) cell_ai5_widget_pane_t4

0xe259,	// (0x00061e94) cell_ai5_widget_pane_t5_ParamLimits

0xe259,	// (0x00061e94) cell_ai5_widget_pane_t5

0xe278,	// (0x00061eb3) cell_ai5_widget_pane_t6_ParamLimits

0xe278,	// (0x00061eb3) cell_ai5_widget_pane_t6

0xe28a,	// (0x00061ec5) cell_ai5_widget_pane_t7_ParamLimits

0xe28a,	// (0x00061ec5) cell_ai5_widget_pane_t7

0xe2a3,	// (0x00061ede) cell_ai5_widget_pane_t8_ParamLimits

0xe2a3,	// (0x00061ede) cell_ai5_widget_pane_t8

0x0009,

0xfe5d,	// (0x00063a98) cell_ai5_widget_pane_t_ParamLimits

0xfe5d,	// (0x00063a98) cell_ai5_widget_pane_t

0xe2f7,	// (0x00061f32) grid_ai5_widget_pane

0xef9d,	// (0x00062bd8) highlight_cell_ai5_widget_pane_ParamLimits

0xef9d,	// (0x00062bd8) highlight_cell_ai5_widget_pane

0xe305,	// (0x00061f40) ai5_sk_left_pane

0xe30f,	// (0x00061f4a) ai5_sk_middle_pane

0xe319,	// (0x00061f54) ai5_sk_right_pane

0xe323,	// (0x00061f5e) bg_ai5_widget_pane_g1_ParamLimits

0xe323,	// (0x00061f5e) bg_ai5_widget_pane_g1

0xe32f,	// (0x00061f6a) bg_ai5_widget_pane_g2_ParamLimits

0xe32f,	// (0x00061f6a) bg_ai5_widget_pane_g2

0xe33b,	// (0x00061f76) bg_ai5_widget_pane_g3_ParamLimits

0xe33b,	// (0x00061f76) bg_ai5_widget_pane_g3

0xe347,	// (0x00061f82) bg_ai5_widget_pane_g4_ParamLimits

0xe347,	// (0x00061f82) bg_ai5_widget_pane_g4

0xe353,	// (0x00061f8e) bg_ai5_widget_pane_g5_ParamLimits

0xe353,	// (0x00061f8e) bg_ai5_widget_pane_g5

0xe35f,	// (0x00061f9a) bg_ai5_widget_pane_g6_ParamLimits

0xe35f,	// (0x00061f9a) bg_ai5_widget_pane_g6

0xe36b,	// (0x00061fa6) bg_ai5_widget_pane_g7_ParamLimits

0xe36b,	// (0x00061fa6) bg_ai5_widget_pane_g7

0xe377,	// (0x00061fb2) bg_ai5_widget_pane_g8_ParamLimits

0xe377,	// (0x00061fb2) bg_ai5_widget_pane_g8

0xe383,	// (0x00061fbe) bg_ai5_widget_pane_g9_ParamLimits

0xe383,	// (0x00061fbe) bg_ai5_widget_pane_g9

0x0008,

0xfe72,	// (0x00063aad) bg_ai5_widget_pane_g_ParamLimits

0xfe72,	// (0x00063aad) bg_ai5_widget_pane_g

0xe3b5,	// (0x00061ff0) cell_shortcut_ai5_widget_pane_ParamLimits

0xe3b5,	// (0x00061ff0) cell_shortcut_ai5_widget_pane

0x8ac8,	// (0x0005c703) bg_cell_shortcut_ai5_widget_pane

0xe3c6,	// (0x00062001) cell_grid_ai5_widget_pane_g1

0x8ac8,	// (0x0005c703) highlight_cell_shortcut_ai5_widget_pane

0x9328,	// (0x0005cf63) ai5_sk_left_pane_g1

0xe3cf,	// (0x0006200a) ai5_sk_left_pane_g2

0xe3d7,	// (0x00062012) ai5_sk_left_pane_g3

0xe3df,	// (0x0006201a) ai5_sk_left_pane_g4

0x0003,

0xfe85,	// (0x00063ac0) ai5_sk_left_pane_g

0xe3e7,	// (0x00062022) ai5_sk_left_pane_t1

0x9330,	// (0x0005cf6b) ai5_sk_right_pane_g1

0xe3f5,	// (0x00062030) ai5_sk_right_pane_g2

0xe3fd,	// (0x00062038) ai5_sk_right_pane_g3

0xe405,	// (0x00062040) ai5_sk_right_pane_g4

0x0003,

0xfe8e,	// (0x00063ac9) ai5_sk_right_pane_g

0xe40d,	// (0x00062048) ai5_sk_right_pane_t1

0x9330,	// (0x0005cf6b) ai5_sk_middle_pane_g1

0x9328,	// (0x0005cf63) ai5_sk_middle_pane_g2

0x9348,	// (0x0005cf83) ai5_sk_middle_pane_g3

0xe3fd,	// (0x00062038) ai5_sk_middle_pane_g4

0xe3d7,	// (0x00062012) ai5_sk_middle_pane_g5

0xe41b,	// (0x00062056) ai5_sk_middle_pane_g6

0xe423,	// (0x0006205e) ai5_sk_middle_pane_g7

0x0006,

0xfe97,	// (0x00063ad2) ai5_sk_middle_pane_g

0x8e59,	// (0x0005ca94) aid_touch_area_size_lc0_ParamLimits

0x8e59,	// (0x0005ca94) aid_touch_area_size_lc0

0x7bc7,	// (0x0005b802) cell_hwr_candidate_pane_t1_ParamLimits

0x8e75,	// (0x0005cab0) aid_touch_navi_pane

0x914e,	// (0x0005cd89) status_dt_navi_pane_ParamLimits

0x914e,	// (0x0005cd89) status_dt_navi_pane

0x915b,	// (0x0005cd96) status_dt_sta_pane_ParamLimits

0x915b,	// (0x0005cd96) status_dt_sta_pane

0xe42b,	// (0x00062066) dt_sta_controll_pane

0xe438,	// (0x00062073) dt_sta_indi_pane

0xe449,	// (0x00062084) dt_sta_title_pane

0xed15,	// (0x00062950) bg_dt_sta_indi_pane_ParamLimits

0xed15,	// (0x00062950) bg_dt_sta_indi_pane

0xe45c,	// (0x00062097) dt_sta_battery_pane

0xe464,	// (0x0006209f) dt_sta_indi_pane_g1

0xe46d,	// (0x000620a8) dt_sta_indi_pane_g2

0xe476,	// (0x000620b1) dt_sta_indi_pane_g3

0x0002,

0xfea6,	// (0x00063ae1) dt_sta_indi_pane_g

0xe47f,	// (0x000620ba) dt_sta_signal_pane

0xef9d,	// (0x00062bd8) bg_dt_sta_title_pane_ParamLimits

0xef9d,	// (0x00062bd8) bg_dt_sta_title_pane

0xa16e,	// (0x0005dda9) dt_sta_title_pane_g1

0xe488,	// (0x000620c3) dt_sta_title_pane_t1_ParamLimits

0xe488,	// (0x000620c3) dt_sta_title_pane_t1

0xeb7b,	// (0x000627b6) bg_dt_sta_control_pane

0xe49d,	// (0x000620d8) dt_sta_controll_pane_g1

0xe4a6,	// (0x000620e1) bg_dt_sta_title_pane_g1

0xe4af,	// (0x000620ea) bg_dt_sta_title_pane_g2

0xe4b8,	// (0x000620f3) bg_dt_sta_title_pane_g3

0x0002,

0xfead,	// (0x00063ae8) bg_dt_sta_title_pane_g

0xbacd,	// (0x0005f708) bg_dt_sta_indi_pane_g1

0xe4c1,	// (0x000620fc) dt_sta_signal_pane_g1

0xe4c9,	// (0x00062104) dt_sta_signal_pane_g2

0x0001,

0xfeb4,	// (0x00063aef) dt_sta_signal_pane_g

0xe4d1,	// (0x0006210c) dt_sta_battery_pane_g1

0xe4da,	// (0x00062115) dt_sta_battery_pane_t1

0xbacd,	// (0x0005f708) bg_dt_sta_control_pane_g1

0x1368,	// (0x00054fa3) fep_china_uni_eep_pane

0x1370,	// (0x00054fab) fep_china_uni_entry_pane_ParamLimits

0x1380,	// (0x00054fbb) popup_fep_china_uni_window_g1_ParamLimits

0x1390,	// (0x00054fcb) popup_fep_china_uni_window_g2_ParamLimits

0x1390,	// (0x00054fcb) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00063353) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00063353) popup_fep_china_uni_window_g

0xe4e9,	// (0x00062124) fep_china_uni_eep_pane_g1

0xe4f1,	// (0x0006212c) fep_china_uni_eep_pane_t1

0xdf8a,	// (0x00061bc5) aid_touch_area_size_smil_player

0x8fcb,	// (0x0005cc06) lc0_clock_pane

0x91b2,	// (0x0005cded) status_pane_g5_ParamLimits

0x91b2,	// (0x0005cded) status_pane_g5

0x6f41,	// (0x0005ab7c) popup_keymap_window

0x9170,	// (0x0005cdab) status_icon_pane

0xe16c,	// (0x00061da7) cell_ai5_widget_pane_g3_ParamLimits

0xe183,	// (0x00061dbe) cell_ai5_widget_pane_g4_ParamLimits

0xe18f,	// (0x00061dca) cell_ai5_widget_pane_g5_ParamLimits

0xe1b3,	// (0x00061dee) cell_ai5_widget_pane_g8_ParamLimits

0xe1b3,	// (0x00061dee) cell_ai5_widget_pane_g8

0xe1c7,	// (0x00061e02) cell_ai5_widget_pane_g9_ParamLimits

0xe1c7,	// (0x00061e02) cell_ai5_widget_pane_g9

0xe1db,	// (0x00061e16) cell_ai5_widget_pane_g10_ParamLimits

0xe1db,	// (0x00061e16) cell_ai5_widget_pane_g10

0xe500,	// (0x0006213b) status_icon_pane_g1

0xeb7b,	// (0x000627b6) bg_popup_sub_pane_cp13

0xe508,	// (0x00062143) popup_keymap_window_t1

0x8d99,	// (0x0005c9d4) control_pane_g6_ParamLimits

0x8d99,	// (0x0005c9d4) control_pane_g6

0x8da6,	// (0x0005c9e1) control_pane_g7_ParamLimits

0x8da6,	// (0x0005c9e1) control_pane_g7

0x8db3,	// (0x0005c9ee) control_pane_g8_ParamLimits

0x8db3,	// (0x0005c9ee) control_pane_g8

0xe42b,	// (0x00062066) dt_sta_controll_pane_ParamLimits

0xe438,	// (0x00062073) dt_sta_indi_pane_ParamLimits

0xe449,	// (0x00062084) dt_sta_title_pane_ParamLimits

0xeee8,	// (0x00062b23) aid_size_touch_scroll_bar_cale

0x54e0,	// (0x0005911b) popup_discreet_window_ParamLimits

0x54e0,	// (0x0005911b) popup_discreet_window

0x555a,	// (0x00059195) popup_sk_window

0x99b2,	// (0x0005d5ed) bg_popup_sub_pane_cp28_ParamLimits

0x99b2,	// (0x0005d5ed) bg_popup_sub_pane_cp28

0xe516,	// (0x00062151) popup_discreet_window_g1_ParamLimits

0xe516,	// (0x00062151) popup_discreet_window_g1

0xe536,	// (0x00062171) popup_discreet_window_t1_ParamLimits

0xe536,	// (0x00062171) popup_discreet_window_t1

0xe554,	// (0x0006218f) popup_discreet_window_t2_ParamLimits

0xe554,	// (0x0006218f) popup_discreet_window_t2

0x0002,

0xfeb9,	// (0x00063af4) popup_discreet_window_t_ParamLimits

0xfeb9,	// (0x00063af4) popup_discreet_window_t

0x86ae,	// (0x0005c2e9) popup_sk_window_g1

0x86b8,	// (0x0005c2f3) popup_sk_window_g2

0x0001,

0xfec0,	// (0x00063afb) popup_sk_window_g

0x86c0,	// (0x0005c2fb) popup_sk_window_t1

0x86ce,	// (0x0005c309) popup_sk_window_t1_copy1

0xe15c,	// (0x00061d97) cell_ai5_widget_pane_g2_ParamLimits

0xe2b5,	// (0x00061ef0) cell_ai5_widget_pane_t9_ParamLimits

0xe2b5,	// (0x00061ef0) cell_ai5_widget_pane_t9

0xeb7b,	// (0x000627b6) main_fep_fshwr2_pane

0x86dc,	// (0x0005c317) aid_fshwr2_btn_pane

0x86e8,	// (0x0005c323) aid_fshwr2_syb_pane

0x86f9,	// (0x0005c334) aid_fshwr2_txt_pane

0x8705,	// (0x0005c340) fshwr2_func_candi_pane

0x871d,	// (0x0005c358) fshwr2_hwr_syb_pane

0x8734,	// (0x0005c36f) fshwr2_icf_pane

0x5407,	// (0x00059042) fshwr2_icf_bg_pane

0x875d,	// (0x0005c398) fshwr2_icf_pane_t1_ParamLimits

0x875d,	// (0x0005c398) fshwr2_icf_pane_t1

0x12e5,	// (0x00054f20) fshwr2_func_candi_pane_g1

0xe5a6,	// (0x000621e1) fshwr2_func_candi_row_pane_ParamLimits

0xe5a6,	// (0x000621e1) fshwr2_func_candi_row_pane

0x8776,	// (0x0005c3b1) cell_fshwr2_syb_pane_ParamLimits

0x8776,	// (0x0005c3b1) cell_fshwr2_syb_pane

0x7b98,	// (0x0005b7d3) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7b98,	// (0x0005b7d3) fshwr2_hwr_syb_pane_g1

0x5407,	// (0x00059042) bg_popup_call_pane_cp01

0x878c,	// (0x0005c3c7) fshwr2_func_candi_cell_pane_ParamLimits

0x878c,	// (0x0005c3c7) fshwr2_func_candi_cell_pane

0xa00e,	// (0x0005dc49) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa00e,	// (0x0005dc49) fshwr2_func_candi_cell_bg_pane

0x87d7,	// (0x0005c412) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x87d7,	// (0x0005c412) fshwr2_func_candi_cell_pane_g1

0x87ff,	// (0x0005c43a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x87ff,	// (0x0005c43a) fshwr2_func_candi_cell_pane_t1

0x5407,	// (0x00059042) bg_button_pane_cp08

0xe5b6,	// (0x000621f1) cell_fshwr2_syb_bg_pane

0x8812,	// (0x0005c44d) cell_fshwr2_syb_bg_pane_g1

0x881a,	// (0x0005c455) cell_fshwr2_syb_bg_pane_t1

0xef9d,	// (0x00062bd8) main_tmo_pane

0xa4a7,	// (0x0005e0e2) uni_indicator_pane_g1_ParamLimits

0xa4ba,	// (0x0005e0f5) uni_indicator_pane_g2_ParamLimits

0xa4cc,	// (0x0005e107) uni_indicator_pane_g3_ParamLimits

0xa4db,	// (0x0005e116) uni_indicator_pane_g4_ParamLimits

0xa4db,	// (0x0005e116) uni_indicator_pane_g4

0xa4ef,	// (0x0005e12a) uni_indicator_pane_g5_ParamLimits

0xa4ef,	// (0x0005e12a) uni_indicator_pane_g5

0xa4ef,	// (0x0005e12a) uni_indicator_pane_g6_ParamLimits

0xa4ef,	// (0x0005e12a) uni_indicator_pane_g6

0xf91c,	// (0x00063557) uni_indicator_pane_g_ParamLimits

0xcfcc,	// (0x00060c07) popup_tmo_note_window_ParamLimits

0xcfcc,	// (0x00060c07) popup_tmo_note_window

0x7f2e,	// (0x0005bb69) fshwr2_bg_pane

0x87f0,	// (0x0005c42b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x87f0,	// (0x0005c42b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec5,	// (0x00063b00) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec5,	// (0x00063b00) fshwr2_func_candi_cell_pane_g

0x7b80,	// (0x0005b7bb) bg_popup_window_pane_cp01

0x8829,	// (0x0005c464) bg_popup_window_pane_g1_cp01

0xe5be,	// (0x000621f9) bg_popup_window_pane_cp22_ParamLimits

0xe5be,	// (0x000621f9) bg_popup_window_pane_cp22

0xe5cc,	// (0x00062207) listscroll_tmo_link_pane_ParamLimits

0xe5cc,	// (0x00062207) listscroll_tmo_link_pane

0xe60c,	// (0x00062247) popup_tmo_note_window_g1_ParamLimits

0xe60c,	// (0x00062247) popup_tmo_note_window_g1

0xe619,	// (0x00062254) tmo_note_info_pane_ParamLimits

0xe619,	// (0x00062254) tmo_note_info_pane

0xe633,	// (0x0006226e) list_tmo_note_info_pane_g1_ParamLimits

0xe633,	// (0x0006226e) list_tmo_note_info_pane_g1

0xe64a,	// (0x00062285) list_tmo_note_info_pane_g2_ParamLimits

0xe64a,	// (0x00062285) list_tmo_note_info_pane_g2

0x0001,

0xfeca,	// (0x00063b05) list_tmo_note_info_pane_g_ParamLimits

0xfeca,	// (0x00063b05) list_tmo_note_info_pane_g

0xe666,	// (0x000622a1) list_tmo_note_info_text_pane_ParamLimits

0xe666,	// (0x000622a1) list_tmo_note_info_text_pane

0xe6e7,	// (0x00062322) list_tmo_link_pane

0xe6f4,	// (0x0006232f) scroll_pane_cp20

0xe701,	// (0x0006233c) list_single_tmo_link_pane_ParamLimits

0xe701,	// (0x0006233c) list_single_tmo_link_pane

0xe711,	// (0x0006234c) list_single_tmo_link_pane_t1

0xe71f,	// (0x0006235a) list_tmo_note_info_text_pane_t1_ParamLimits

0xe71f,	// (0x0006235a) list_tmo_note_info_text_pane_t1

0x623c,	// (0x00059e77) aid_size_touch_scroll_bar_cp01_ParamLimits

0x623c,	// (0x00059e77) aid_size_touch_scroll_bar_cp01

0x6149,	// (0x00059d84) aid_size_touch_slider_marker

0x5542,	// (0x0005917d) popup_settings_window_ParamLimits

0x5542,	// (0x0005917d) popup_settings_window

0x36ce,	// (0x00057309) popup_candi_list_indi_window

0x8e75,	// (0x0005cab0) aid_touch_navi_pane_ParamLimits

0x7e89,	// (0x0005bac4) rs_clock_indi_pane

0x7e92,	// (0x0005bacd) sctrl_sk_bottom_pane_ParamLimits

0x7ea3,	// (0x0005bade) sctrl_sk_top_pane_ParamLimits

0x7fa6,	// (0x0005bbe1) popup_fep_tooltip_window

0xe0da,	// (0x00061d15) aid_size_cell_widget_grid_ParamLimits

0xe147,	// (0x00061d82) cell_ai5_widget_pane_g1_ParamLimits

0xe147,	// (0x00061d82) cell_ai5_widget_pane_g1

0xe19b,	// (0x00061dd6) cell_ai5_widget_pane_g6_ParamLimits

0xe1a7,	// (0x00061de2) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe48,	// (0x00063a83) cell_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x00063a83) cell_ai5_widget_pane_g

0xe2d9,	// (0x00061f14) cell_ai5_widget_pane_t10_ParamLimits

0xe2d9,	// (0x00061f14) cell_ai5_widget_pane_t10

0xe2f7,	// (0x00061f32) grid_ai5_widget_pane_ParamLimits

0xe38f,	// (0x00061fca) cell_contacts_ai5_widget_pane_ParamLimits

0xe38f,	// (0x00061fca) cell_contacts_ai5_widget_pane

0xe569,	// (0x000621a4) popup_discreet_window_t3_ParamLimits

0xe569,	// (0x000621a4) popup_discreet_window_t3

0x8749,	// (0x0005c384) popup_fshwr2_char_preview_window_ParamLimits

0x8749,	// (0x0005c384) popup_fshwr2_char_preview_window

0xe684,	// (0x000622bf) tmo_note_info_pane_t1

0xe699,	// (0x000622d4) tmo_note_info_pane_t2

0xe6ae,	// (0x000622e9) tmo_note_info_pane_t3

0xe6c3,	// (0x000622fe) tmo_note_info_pane_t4

0xe6d5,	// (0x00062310) tmo_note_info_pane_t5

0x0004,

0xfecf,	// (0x00063b0a) tmo_note_info_pane_t

0xe6e7,	// (0x00062322) list_tmo_link_pane_ParamLimits

0xe6f4,	// (0x0006232f) scroll_pane_cp20_ParamLimits

0x5407,	// (0x00059042) bg_popup_fep_char_preview_window_cp01

0xe738,	// (0x00062373) popup_fshwr2_char_preview_window_t1

0xe746,	// (0x00062381) popup_candi_list_indi_window_g1

0xe74f,	// (0x0006238a) bg_cell_contacts_ai5_widget_pane

0xe75b,	// (0x00062396) cell_contacts_ai5_widget_pane_g1

0xc192,	// (0x0005fdcd) cell_contacts_ai5_widget_pane_g2

0xe770,	// (0x000623ab) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeda,	// (0x00063b15) cell_contacts_ai5_widget_pane_g

0xe77c,	// (0x000623b7) cell_contacts_ai5_widget_pane_t1

0xef9d,	// (0x00062bd8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe7f3,	// (0x0006242e) settings_container_pane

0x8ac8,	// (0x0005c703) listscroll_set_pane_copy1

0xb1d0,	// (0x0005ee0b) scroll_pane_cp121_copy1

0x976b,	// (0x0005d3a6) set_content_pane_copy1

0xe7ff,	// (0x0006243a) aid_height_set_list_copy1_ParamLimits

0xe7ff,	// (0x0006243a) aid_height_set_list_copy1

0xa6e7,	// (0x0005e322) aid_size_parent_copy1_ParamLimits

0xa6e7,	// (0x0005e322) aid_size_parent_copy1

0xe80b,	// (0x00062446) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe80b,	// (0x00062446) button_value_adjust_pane_cp6_copy1

0x8e13,	// (0x0005ca4e) list_highlight_pane_cp2_copy1_ParamLimits

0x8e13,	// (0x0005ca4e) list_highlight_pane_cp2_copy1

0xe81f,	// (0x0006245a) list_set_pane_copy1_ParamLimits

0xe81f,	// (0x0006245a) list_set_pane_copy1

0xe78e,	// (0x000623c9) main_pane_set_t1_copy1_ParamLimits

0xe78e,	// (0x000623c9) main_pane_set_t1_copy1

0xe7c8,	// (0x00062403) main_pane_set_t2_copy1_ParamLimits

0xe7c8,	// (0x00062403) main_pane_set_t2_copy1

0xe8cc,	// (0x00062507) main_pane_set_t3_copy1

0xe8da,	// (0x00062515) main_pane_set_t4_copy1

0xe7e7,	// (0x00062422) set_content_pane_g1_copy1_ParamLimits

0xe7e7,	// (0x00062422) set_content_pane_g1_copy1

0xe8e8,	// (0x00062523) setting_code_pane_copy1

0xe8f0,	// (0x0006252b) setting_slider_graphic_pane_copy1

0xe8f0,	// (0x0006252b) setting_slider_pane_copy1

0xe8f0,	// (0x0006252b) setting_text_pane_copy1

0xe8f0,	// (0x0006252b) setting_volume_pane_copy1

0xe8e8,	// (0x00062523) settings_code_pane_cp2_copy1

0xe8f8,	// (0x00062533) settings_code_pane_cp_copy1_ParamLimits

0xe8f8,	// (0x00062533) settings_code_pane_cp_copy1

0x8832,	// (0x0005c46d) volume_set_pane_copy1

0xe90c,	// (0x00062547) volume_set_pane_g10_copy1

0xe914,	// (0x0006254f) volume_set_pane_g1_copy1

0xe91c,	// (0x00062557) volume_set_pane_g2_copy1

0xe924,	// (0x0006255f) volume_set_pane_g3_copy1

0xe92c,	// (0x00062567) volume_set_pane_g4_copy1

0xe934,	// (0x0006256f) volume_set_pane_g5_copy1

0xe93c,	// (0x00062577) volume_set_pane_g6_copy1

0xe944,	// (0x0006257f) volume_set_pane_g7_copy1

0xe94c,	// (0x00062587) volume_set_pane_g8_copy1

0xe954,	// (0x0006258f) volume_set_pane_g9_copy1

0xebdd,	// (0x00062818) bg_set_opt_pane_cp_copy1_ParamLimits

0xebdd,	// (0x00062818) bg_set_opt_pane_cp_copy1

0x883a,	// (0x0005c475) setting_slider_pane_t1_copy1_ParamLimits

0x883a,	// (0x0005c475) setting_slider_pane_t1_copy1

0x8858,	// (0x0005c493) setting_slider_pane_t2_copy1_ParamLimits

0x8858,	// (0x0005c493) setting_slider_pane_t2_copy1

0x8872,	// (0x0005c4ad) setting_slider_pane_t3_copy1_ParamLimits

0x8872,	// (0x0005c4ad) setting_slider_pane_t3_copy1

0x888a,	// (0x0005c4c5) slider_set_pane_copy1_ParamLimits

0x888a,	// (0x0005c4c5) slider_set_pane_copy1

0xf1b7,	// (0x00062df2) set_opt_bg_pane_g1_copy2

0xf1bf,	// (0x00062dfa) set_opt_bg_pane_g2_copy2

0xe95c,	// (0x00062597) set_opt_bg_pane_g3_copy2

0xf1cf,	// (0x00062e0a) set_opt_bg_pane_g4_copy2

0xf1d7,	// (0x00062e12) set_opt_bg_pane_g5_copy2

0xf1df,	// (0x00062e1a) set_opt_bg_pane_g6_copy2

0xe966,	// (0x000625a1) set_opt_bg_pane_g7_copy2

0xe96e,	// (0x000625a9) set_opt_bg_pane_g8_copy2

0xe978,	// (0x000625b3) set_opt_bg_pane_g9_copy2

0x88a0,	// (0x0005c4db) aid_size_touch_slider_mark_copy1_ParamLimits

0x88a0,	// (0x0005c4db) aid_size_touch_slider_mark_copy1

0xe982,	// (0x000625bd) slider_set_pane_g1_copy1

0x88b4,	// (0x0005c4ef) slider_set_pane_g2_copy1

0x76bf,	// (0x0005b2fa) slider_set_pane_g3_copy1_ParamLimits

0x76bf,	// (0x0005b2fa) slider_set_pane_g3_copy1

0x76d3,	// (0x0005b30e) slider_set_pane_g4_copy1_ParamLimits

0x76d3,	// (0x0005b30e) slider_set_pane_g4_copy1

0x76eb,	// (0x0005b326) slider_set_pane_g5_copy1_ParamLimits

0x76eb,	// (0x0005b326) slider_set_pane_g5_copy1

0x76bf,	// (0x0005b2fa) slider_set_pane_g6_copy1_ParamLimits

0x76bf,	// (0x0005b2fa) slider_set_pane_g6_copy1

0x88bc,	// (0x0005c4f7) slider_set_pane_g7_copy1_ParamLimits

0x88bc,	// (0x0005c4f7) slider_set_pane_g7_copy1

0xeb8f,	// (0x000627ca) bg_set_opt_pane_cp2_copy1

0xe98b,	// (0x000625c6) setting_slider_graphic_pane_g1_copy1

0xe994,	// (0x000625cf) setting_slider_graphic_pane_t1_copy1

0xe9a4,	// (0x000625df) setting_slider_graphic_pane_t2_copy1

0xe9b4,	// (0x000625ef) slider_set_pane_cp_copy1

0xe9c4,	// (0x000625ff) input_focus_pane_cp1_copy1

0xe9cd,	// (0x00062608) list_set_text_pane_copy1

0xe9d5,	// (0x00062610) setting_text_pane_g1_copy1

0x4644,	// (0x0005827f) set_text_pane_t1_copy1

0xe9c4,	// (0x000625ff) input_focus_pane_cp2_copy1

0xe9d5,	// (0x00062610) setting_code_pane_g1_copy1

0xe9de,	// (0x00062619) setting_code_pane_t1_copy1

0xe9ec,	// (0x00062627) list_set_graphic_pane_copy1

0xeb8f,	// (0x000627ca) bg_set_opt_pane_cp4_copy1

0x363f,	// (0x0005727a) list_set_graphic_pane_g1_copy1_ParamLimits

0x363f,	// (0x0005727a) list_set_graphic_pane_g1_copy1

0xea00,	// (0x0006263b) list_set_graphic_pane_g2_copy1

0x3657,	// (0x00057292) list_set_graphic_pane_t1_copy1_ParamLimits

0x3657,	// (0x00057292) list_set_graphic_pane_t1_copy1

0xbacd,	// (0x0005f708) rs_clock_indi_pane_g1

0xea08,	// (0x00062643) rs_clock_indi_pane_t1

0xea16,	// (0x00062651) rs_indi_pane

0xea1e,	// (0x00062659) rs_indi_pane_g1

0xea27,	// (0x00062662) rs_indi_pane_g2

0xe746,	// (0x00062381) rs_indi_pane_g3

0x0002,

0xfee1,	// (0x00063b1c) rs_indi_pane_g

0x8ac8,	// (0x0005c703) bg_popup_preview_window_pane_cp03

0xea30,	// (0x0006266b) popup_fep_tooltip_window_t1

0xc75c,	// (0x00060397) popup_note2_window_g2_ParamLimits

0xc75c,	// (0x00060397) popup_note2_window_g2

0x0001,

0xfc81,	// (0x000638bc) popup_note2_window_g_ParamLimits

0xfc81,	// (0x000638bc) popup_note2_window_g

0xcc6a,	// (0x000608a5) bg_popup_sub_pane_cp11_ParamLimits

0xcc77,	// (0x000608b2) cell_ai3_links_pane_g1_ParamLimits

0xcc8e,	// (0x000608c9) cell_ai3_links_pane_t1

0x4644,	// (0x0005827f) set_text_pane_t1_copy1_ParamLimits

0x6b49,	// (0x0005a784) cell_graphic_popup_pane_cp2_ParamLimits

0x6b49,	// (0x0005a784) cell_graphic_popup_pane_cp2

0xea3e,	// (0x00062679) cell_graphic_popup_pane_g1_cp2

0xee6b,	// (0x00062aa6) cell_graphic_popup_pane_g2_cp2

0xea46,	// (0x00062681) cell_graphic_popup_pane_g3_cp2

0xea4e,	// (0x00062689) cell_graphic_popup_pane_t2_cp2

0xee7c,	// (0x00062ab7) grid_highlight_pane_cp3_cp2

0xf40f,	// (0x0006304a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xef9d,	// (0x00062bd8) main_tmo_pane_ParamLimits

0xcfc0,	// (0x00060bfb) popup_tmo_big_image_note_window

0xe136,	// (0x00061d71) cell_ai5_widget_list_pane

0xe13e,	// (0x00061d79) cell_ai5_widget_lrg_icon_pane

0xe684,	// (0x000622bf) tmo_note_info_pane_t1_ParamLimits

0xe699,	// (0x000622d4) tmo_note_info_pane_t2_ParamLimits

0xe6ae,	// (0x000622e9) tmo_note_info_pane_t3_ParamLimits

0xe6c3,	// (0x000622fe) tmo_note_info_pane_t4_ParamLimits

0xe6d5,	// (0x00062310) tmo_note_info_pane_t5_ParamLimits

0xfecf,	// (0x00063b0a) tmo_note_info_pane_t_ParamLimits

0xe7f3,	// (0x0006242e) settings_container_pane_ParamLimits

0xe9bc,	// (0x000625f7) indicator_popup_pane_cp5

0xe9bc,	// (0x000625f7) indicator_popup_pane_cp6

0xe9ec,	// (0x00062627) list_set_graphic_pane_copy1_ParamLimits

0xeb7b,	// (0x000627b6) bg_popup_window_pane_cp23

0xea5c,	// (0x00062697) popup_tmo_big_image_note_window_g1

0xea65,	// (0x000626a0) popup_tmo_big_image_note_window_t1

0xea75,	// (0x000626b0) popup_tmo_big_image_note_window_t2

0xea85,	// (0x000626c0) popup_tmo_big_image_note_window_t3

0x0002,

0xfee8,	// (0x00063b23) popup_tmo_big_image_note_window_t

0xbacd,	// (0x0005f708) cell_ai5_widget_lrg_icon_pane_g1

0xea95,	// (0x000626d0) cell_ai5_widget_lrg_icon_pane_t1

0xeaa3,	// (0x000626de) cell_ai5_widget_list_row_pane_ParamLimits

0xeaa3,	// (0x000626de) cell_ai5_widget_list_row_pane

0xeaba,	// (0x000626f5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeaba,	// (0x000626f5) cell_ai5_widget_list_row_pane_g1

0xeac7,	// (0x00062702) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeac7,	// (0x00062702) cell_ai5_widget_list_row_pane_t1

0xeaf2,	// (0x0006272d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xeaf2,	// (0x0006272d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeef,	// (0x00063b2a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeef,	// (0x00063b2a) cell_ai5_widget_list_row_pane_t

0x5407,	// (0x00059042) main_fep_vtchi_ss_pane

0xeb36,	// (0x00062771) popup_fep_char_pre_window

0xeb3e,	// (0x00062779) popup_fep_ituss_window

0xeb5f,	// (0x0006279a) popup_fep_vkbss_window

0xefe1,	// (0x00062c1c) grid_vkbss_keypad_pane_ParamLimits

0xefe1,	// (0x00062c1c) grid_vkbss_keypad_pane

0xeff1,	// (0x00062c2c) ituss_keypad_pane

0x88de,	// (0x0005c519) aid_vkbss_key_offset_ParamLimits

0x88de,	// (0x0005c519) aid_vkbss_key_offset

0x88ea,	// (0x0005c525) cell_vkbss_key_pane_ParamLimits

0x88ea,	// (0x0005c525) cell_vkbss_key_pane

0x918c,	// (0x0005cdc7) bg_cell_vkbss_key_g1_ParamLimits

0x918c,	// (0x0005cdc7) bg_cell_vkbss_key_g1

0xf000,	// (0x00062c3b) cell_vkbss_key_3p_pane_ParamLimits

0xf000,	// (0x00062c3b) cell_vkbss_key_3p_pane

0xf014,	// (0x00062c4f) cell_vkbss_key_g1_ParamLimits

0xf014,	// (0x00062c4f) cell_vkbss_key_g1

0xf028,	// (0x00062c63) cell_vkbss_key_t1_ParamLimits

0xf028,	// (0x00062c63) cell_vkbss_key_t1

0x8900,	// (0x0005c53b) cell_ituss_key_pane_ParamLimits

0x8900,	// (0x0005c53b) cell_ituss_key_pane

0xf053,	// (0x00062c8e) bg_cell_ituss_key_g1_ParamLimits

0xf053,	// (0x00062c8e) bg_cell_ituss_key_g1

0xf05f,	// (0x00062c9a) cell_ituss_key_pane_g1_ParamLimits

0xf05f,	// (0x00062c9a) cell_ituss_key_pane_g1

0x8911,	// (0x0005c54c) cell_ituss_key_pane_g2_ParamLimits

0x8911,	// (0x0005c54c) cell_ituss_key_pane_g2

0x0002,

0xfef6,	// (0x00063b31) cell_ituss_key_pane_g_ParamLimits

0xfef6,	// (0x00063b31) cell_ituss_key_pane_g

0x893d,	// (0x0005c578) cell_ituss_key_t1_ParamLimits

0x893d,	// (0x0005c578) cell_ituss_key_t1

0x8977,	// (0x0005c5b2) cell_ituss_key_t2_ParamLimits

0x8977,	// (0x0005c5b2) cell_ituss_key_t2

0x89a8,	// (0x0005c5e3) cell_ituss_key_t3_ParamLimits

0x89a8,	// (0x0005c5e3) cell_ituss_key_t3

0x8977,	// (0x0005c5b2) cell_ituss_key_t4_ParamLimits

0x8977,	// (0x0005c5b2) cell_ituss_key_t4

0x0004,

0xfefd,	// (0x00063b38) cell_ituss_key_t_ParamLimits

0xfefd,	// (0x00063b38) cell_ituss_key_t

0xf085,	// (0x00062cc0) cell_vkbss_key_3p_pane_g1

0xf08d,	// (0x00062cc8) cell_vkbss_key_3p_pane_g2

0xf095,	// (0x00062cd0) cell_vkbss_key_3p_pane_g3

0x0002,

0xff08,	// (0x00063b43) cell_vkbss_key_3p_pane_g

0x5407,	// (0x00059042) bg_popup_fep_char_preview_window_cp02

0x89eb,	// (0x0005c626) popup_fep_char_pre_window_t1

0xe0d0,	// (0x00061d0b) main_ai5_sk_pane

0xe74f,	// (0x0006238a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe75b,	// (0x00062396) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc192,	// (0x0005fdcd) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe770,	// (0x000623ab) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeda,	// (0x00063b15) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe77c,	// (0x000623b7) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xef9d,	// (0x00062bd8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf09d,	// (0x00062cd8) main_ai5_sk_pane_g1

0x97f3,	// (0x0005d42e) popup_query_code_window_g1

0xeb54,	// (0x0006278f) popup_fep_vkb_icf_pane

0xefcb,	// (0x00062c06) popup_fep_vtchi_icf_pane

0xf0a6,	// (0x00062ce1) bg_icf_pane

0xf0b2,	// (0x00062ced) list_vkb_icf_pane

0xf0c1,	// (0x00062cfc) bg_icf_pane_cp01

0xf0d4,	// (0x00062d0f) vtchi_icf_list_pane

0xf0e4,	// (0x00062d1f) list_vkb_icf_pane_t1_ParamLimits

0xf0e4,	// (0x00062d1f) list_vkb_icf_pane_t1

0xf0fb,	// (0x00062d36) vtchi_icf_list_pane_t1_ParamLimits

0xf0fb,	// (0x00062d36) vtchi_icf_list_pane_t1

0xeb3e,	// (0x00062779) popup_fep_ituss_window_ParamLimits

0xefcb,	// (0x00062c06) popup_fep_vtchi_icf_pane_ParamLimits

0xeff1,	// (0x00062c2c) ituss_keypad_pane_ParamLimits

0x88d2,	// (0x0005c50d) ituss_sks_pane

0xf0a6,	// (0x00062ce1) bg_icf_pane_ParamLimits

0xeb1a,	// (0x00062755) icf_edit_indi_pane_ParamLimits

0xeb1a,	// (0x00062755) icf_edit_indi_pane

0xf0b2,	// (0x00062ced) list_vkb_icf_pane_ParamLimits

0xf0c1,	// (0x00062cfc) bg_icf_pane_cp01_ParamLimits

0xeb29,	// (0x00062764) icf_edit_indi_pane_cp01_ParamLimits

0xeb29,	// (0x00062764) icf_edit_indi_pane_cp01

0xf0dc,	// (0x00062d17) vtchi_query_pane

0xbd3d,	// (0x0005f978) icf_edit_indi_pane_g1_ParamLimits

0xbd3d,	// (0x0005f978) icf_edit_indi_pane_g1

0xf170,	// (0x00062dab) icf_edit_indi_pane_g2_ParamLimits

0xf170,	// (0x00062dab) icf_edit_indi_pane_g2

0x0001,

0xff20,	// (0x00063b5b) icf_edit_indi_pane_g_ParamLimits

0xff20,	// (0x00063b5b) icf_edit_indi_pane_g

0xf17f,	// (0x00062dba) icf_edit_indi_pane_t1

0xf119,	// (0x00062d54) bg_input_focus_pane_cp042

0xeedf,	// (0x00062b1a) vtchi_button_pane

0xf122,	// (0x00062d5d) vtchi_query_pane_t1

0xf130,	// (0x00062d6b) vtchi_query_pane_t2

0xf13e,	// (0x00062d79) vtchi_query_pane_t3

0x0002,

0xff0f,	// (0x00063b4a) vtchi_query_pane_t

0x5407,	// (0x00059042) bg_button_pane_cp13

0xf14c,	// (0x00062d87) vtchi_button_pane_g1

0x89fa,	// (0x0005c635) ituss_sks_pane_g1

0x8a05,	// (0x0005c640) ituss_sks_pane_g2

0x0001,

0xff16,	// (0x00063b51) ituss_sks_pane_g

0xf154,	// (0x00062d8f) ituss_sks_pane_t1

0xf162,	// (0x00062d9d) ituss_sks_pane_t2

0x0001,

0xff1b,	// (0x00063b56) ituss_sks_pane_t

0xb54a,	// (0x0005f185) indicator_nsta_pane_cp_g1

0xb552,	// (0x0005f18d) indicator_nsta_pane_cp_g2

0xb55a,	// (0x0005f195) indicator_nsta_pane_cp_g3

0xb54a,	// (0x0005f185) indicator_nsta_pane_cp_g4

0xb552,	// (0x0005f18d) indicator_nsta_pane_cp_g5

0xb55a,	// (0x0005f195) indicator_nsta_pane_cp_g6

0x0005,

0xfabf,	// (0x000636fa) indicator_nsta_pane_cp_g

0xdcb1,	// (0x000618ec) cell_graphic2_pane_t2_ParamLimits

0xdcb1,	// (0x000618ec) cell_graphic2_pane_t2

0x0001,

0xfdd1,	// (0x00063a0c) cell_graphic2_pane_t_ParamLimits

0xfdd1,	// (0x00063a0c) cell_graphic2_pane_t

0xdcde,	// (0x00061919) cell_graphic2_control_pane_t1

0x66e4,	// (0x0005a31f) signal_pane_g3_ParamLimits

0x66e4,	// (0x0005a31f) signal_pane_g3

0x66f6,	// (0x0005a331) signal_pane_g4_ParamLimits

0x66f6,	// (0x0005a331) signal_pane_g4

0xeb04,	// (0x0006273f) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xeb04,	// (0x0006273f) cell_ai5_widget_list_row_pane_t3

0xf073,	// (0x00062cae) cell_ituss_key_pane_t1_ParamLimits

0xf073,	// (0x00062cae) cell_ituss_key_pane_t1

0x943a,	// (0x0005d075) form_field_data_wide_pane_vc_t2_ParamLimits

0x943a,	// (0x0005d075) form_field_data_wide_pane_vc_t2

0x944e,	// (0x0005d089) form_field_data_wide_pane_vc_t3_ParamLimits

0x944e,	// (0x0005d089) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0006343f) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0006343f) form_field_data_wide_pane_vc_t

0xb212,	// (0x0005ee4d) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb212,	// (0x0005ee4d) form_field_slider_wide_pane_vc_t3

0xb2f0,	// (0x0005ef2b) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb2f0,	// (0x0005ef2b) form_field_popup_wide_pane_vc_t2

0xb307,	// (0x0005ef42) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb307,	// (0x0005ef42) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaae,	// (0x000636e9) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaae,	// (0x000636e9) form_field_popup_wide_pane_vc_t

0x86dc,	// (0x0005c317) aid_fshwr2_btn_pane_ParamLimits

0x86e8,	// (0x0005c323) aid_fshwr2_syb_pane_ParamLimits

0x86f9,	// (0x0005c334) aid_fshwr2_txt_pane_ParamLimits

0x7f2e,	// (0x0005bb69) fshwr2_bg_pane_ParamLimits

0x8705,	// (0x0005c340) fshwr2_func_candi_pane_ParamLimits

0x871d,	// (0x0005c358) fshwr2_hwr_syb_pane_ParamLimits

0x8734,	// (0x0005c36f) fshwr2_icf_pane_ParamLimits

0xa9a2,	// (0x0005e5dd) list_double_graphic_pane_vc_g4_ParamLimits

0xa9a2,	// (0x0005e5dd) list_double_graphic_pane_vc_g4

0x8931,	// (0x0005c56c) cell_ituss_key_pane_g3_ParamLimits

0x8931,	// (0x0005c56c) cell_ituss_key_pane_g3

0x89d9,	// (0x0005c614) cell_ituss_key_t5_ParamLimits

0x89d9,	// (0x0005c614) cell_ituss_key_t5

0xeb5f,	// (0x0006279a) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
