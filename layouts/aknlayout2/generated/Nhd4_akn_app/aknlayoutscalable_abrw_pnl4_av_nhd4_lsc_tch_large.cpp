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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0005d63d };

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
0x8e3c,	// (0x00066479) Screen

0x8e48,	// (0x00066485) application_window_ParamLimits

0x8e48,	// (0x00066485) application_window

0x6fa2,	// (0x000645df) screen_g1

0x8e80,	// (0x000664bd) area_bottom_pane_ParamLimits

0x8e80,	// (0x000664bd) area_bottom_pane

0x8f3e,	// (0x0006657b) area_top_pane_ParamLimits

0x8f3e,	// (0x0006657b) area_top_pane

0x8fd2,	// (0x0006660f) main_pane_ParamLimits

0x8fd2,	// (0x0006660f) main_pane

0x6fac,	// (0x000645e9) misc_graphics

0xada9,	// (0x000683e6) battery_pane_ParamLimits

0xada9,	// (0x000683e6) battery_pane

0x27c9,	// (0x0005fe06) bg_status_flat_pane_g8

0x27d1,	// (0x0005fe0e) bg_status_flat_pane_g9

0x0387,	// (0x0005d9c4) context_pane_ParamLimits

0x0387,	// (0x0005d9c4) context_pane

0xaf14,	// (0x00068551) navi_pane_ParamLimits

0xaf14,	// (0x00068551) navi_pane

0xaf92,	// (0x000685cf) signal_pane_ParamLimits

0xaf92,	// (0x000685cf) signal_pane

0x0008,

0xf83e,	// (0x0006ce7b) bg_status_flat_pane_g

0xb022,	// (0x0006865f) status_pane_g1_ParamLimits

0xb022,	// (0x0006865f) status_pane_g1

0xb038,	// (0x00068675) status_pane_g2_ParamLimits

0xb038,	// (0x00068675) status_pane_g2

0x1dca,	// (0x0005f407) status_pane_g3_ParamLimits

0x1dca,	// (0x0005f407) status_pane_g3

0x0004,

0xf771,	// (0x0006cdae) status_pane_g_ParamLimits

0xf771,	// (0x0006cdae) status_pane_g

0xb044,	// (0x00068681) title_pane_ParamLimits

0xb044,	// (0x00068681) title_pane

0xb0a7,	// (0x000686e4) uni_indicator_pane_ParamLimits

0xb0a7,	// (0x000686e4) uni_indicator_pane

0xc55d,	// (0x00069b9a) bg_list_pane_ParamLimits

0xc55d,	// (0x00069b9a) bg_list_pane

0xa597,	// (0x00067bd4) find_pane

0x1fde,	// (0x0005f61b) listscroll_app_pane_ParamLimits

0x1fde,	// (0x0005f61b) listscroll_app_pane

0xc57d,	// (0x00069bba) listscroll_form_pane

0xa59f,	// (0x00067bdc) listscroll_gen_pane_ParamLimits

0xa59f,	// (0x00067bdc) listscroll_gen_pane

0xf4c5,	// (0x0006cb02) listscroll_set_pane

0x332d,	// (0x0006096a) main_idle_act_pane

0xc3f1,	// (0x00069a2e) main_idle_trad_pane

0xc3f1,	// (0x00069a2e) main_list_empty_pane

0x8434,	// (0x00065a71) main_midp_pane

0xc597,	// (0x00069bd4) main_pane_g1_ParamLimits

0xc597,	// (0x00069bd4) main_pane_g1

0xa5b3,	// (0x00067bf0) popup_ai_message_window_ParamLimits

0xa5b3,	// (0x00067bf0) popup_ai_message_window

0xa664,	// (0x00067ca1) popup_fep_china_uni_window_ParamLimits

0xa664,	// (0x00067ca1) popup_fep_china_uni_window

0xa6be,	// (0x00067cfb) popup_fep_japan_candidate_window_ParamLimits

0xa6be,	// (0x00067cfb) popup_fep_japan_candidate_window

0xa6dc,	// (0x00067d19) popup_fep_japan_predictive_window_ParamLimits

0xa6dc,	// (0x00067d19) popup_fep_japan_predictive_window

0xa6ee,	// (0x00067d2b) popup_find_window

0xa70b,	// (0x00067d48) popup_grid_graphic_window_ParamLimits

0xa70b,	// (0x00067d48) popup_grid_graphic_window

0xf503,	// (0x0006cb40) popup_large_graphic_colour_window

0xa7a9,	// (0x00067de6) popup_menu_window_ParamLimits

0xa7a9,	// (0x00067de6) popup_menu_window

0xa97b,	// (0x00067fb8) popup_note_image_window

0xa941,	// (0x00067f7e) popup_note_wait_window_ParamLimits

0xa941,	// (0x00067f7e) popup_note_wait_window

0xa993,	// (0x00067fd0) popup_note_window_ParamLimits

0xa993,	// (0x00067fd0) popup_note_window

0xaa42,	// (0x0006807f) popup_query_code_window_ParamLimits

0xaa42,	// (0x0006807f) popup_query_code_window

0xaa7c,	// (0x000680b9) popup_query_data_code_window_ParamLimits

0xaa7c,	// (0x000680b9) popup_query_data_code_window

0xaa99,	// (0x000680d6) popup_query_data_window_ParamLimits

0xaa99,	// (0x000680d6) popup_query_data_window

0xab1b,	// (0x00068158) popup_query_sat_info_window_ParamLimits

0xab1b,	// (0x00068158) popup_query_sat_info_window

0xabb2,	// (0x000681ef) popup_snote_single_graphic_window_ParamLimits

0xabb2,	// (0x000681ef) popup_snote_single_graphic_window

0xabb2,	// (0x000681ef) popup_snote_single_text_window_ParamLimits

0xabb2,	// (0x000681ef) popup_snote_single_text_window

0x00fe,	// (0x0005d73b) popup_sub_window_general

0xad0f,	// (0x0006834c) popup_window_general_ParamLimits

0xad0f,	// (0x0006834c) popup_window_general

0x0243,	// (0x0005d880) power_save_pane

0xa3f1,	// (0x00067a2e) control_pane_g1_ParamLimits

0xa3f1,	// (0x00067a2e) control_pane_g1

0xa41a,	// (0x00067a57) control_pane_g2_ParamLimits

0xa41a,	// (0x00067a57) control_pane_g2

0xc547,	// (0x00069b84) control_pane_g3_ParamLimits

0xc547,	// (0x00069b84) control_pane_g3

0x0007,

0xf759,	// (0x0006cd96) control_pane_g_ParamLimits

0xf759,	// (0x0006cd96) control_pane_g

0xa482,	// (0x00067abf) control_pane_t1_ParamLimits

0xa482,	// (0x00067abf) control_pane_t1

0xa4ea,	// (0x00067b27) control_pane_t2_ParamLimits

0xa4ea,	// (0x00067b27) control_pane_t2

0x0002,

0xf76a,	// (0x0006cda7) control_pane_t_ParamLimits

0xf76a,	// (0x0006cda7) control_pane_t

0xa368,	// (0x000679a5) navi_navi_volume_pane_cp1

0xa370,	// (0x000679ad) status_small_icon_pane

0xc4f3,	// (0x00069b30) status_small_pane_g1_ParamLimits

0xc4f3,	// (0x00069b30) status_small_pane_g1

0xa378,	// (0x000679b5) status_small_pane_g2_ParamLimits

0xa378,	// (0x000679b5) status_small_pane_g2

0xc527,	// (0x00069b64) status_small_pane_g3_ParamLimits

0xc527,	// (0x00069b64) status_small_pane_g3

0xa384,	// (0x000679c1) status_small_pane_g4_ParamLimits

0xa384,	// (0x000679c1) status_small_pane_g4

0xa392,	// (0x000679cf) status_small_pane_g5_ParamLimits

0xa392,	// (0x000679cf) status_small_pane_g5

0xa3a0,	// (0x000679dd) status_small_pane_g6_ParamLimits

0xa3a0,	// (0x000679dd) status_small_pane_g6

0x0007,

0xf748,	// (0x0006cd85) status_small_pane_g_ParamLimits

0xf748,	// (0x0006cd85) status_small_pane_g

0xa3bb,	// (0x000679f8) status_small_pane_t1

0xa3dd,	// (0x00067a1a) status_small_wait_pane_ParamLimits

0xa3dd,	// (0x00067a1a) status_small_wait_pane

0xa04f,	// (0x0006768c) aid_levels_signal_ParamLimits

0xa04f,	// (0x0006768c) aid_levels_signal

0xa067,	// (0x000676a4) signal_pane_g1_ParamLimits

0xa067,	// (0x000676a4) signal_pane_g1

0xa082,	// (0x000676bf) signal_pane_g2_ParamLimits

0xa082,	// (0x000676bf) signal_pane_g2

0x0003,

0xf6d9,	// (0x0006cd16) signal_pane_g_ParamLimits

0xf6d9,	// (0x0006cd16) signal_pane_g

0xbfeb,	// (0x00069628) context_pane_g1

0x91cd,	// (0x0006680a) title_pane_g1

0x9204,	// (0x00066841) title_pane_t1

0x6fc2,	// (0x000645ff) title_pane_t2

0x6fe8,	// (0x00064625) title_pane_t3

0x0002,

0xf532,	// (0x0006cb6f) title_pane_t

0xb0cf,	// (0x0006870c) aid_levels_battery_ParamLimits

0xb0cf,	// (0x0006870c) aid_levels_battery

0xb0eb,	// (0x00068728) battery_pane_g1_ParamLimits

0xb0eb,	// (0x00068728) battery_pane_g1

0xb108,	// (0x00068745) battery_pane_g2_ParamLimits

0xb108,	// (0x00068745) battery_pane_g2

0x0001,

0xf77c,	// (0x0006cdb9) battery_pane_g_ParamLimits

0xf77c,	// (0x0006cdb9) battery_pane_g

0xc966,	// (0x00069fa3) uni_indicator_pane_g1

0xc97c,	// (0x00069fb9) uni_indicator_pane_g2

0xc992,	// (0x00069fcf) uni_indicator_pane_g3

0x0005,

0xf8e6,	// (0x0006cf23) uni_indicator_pane_g

0xc294,	// (0x000698d1) navi_icon_pane_ParamLimits

0xc294,	// (0x000698d1) navi_icon_pane

0xc1dd,	// (0x0006981a) navi_midp_pane

0xc2b0,	// (0x000698ed) navi_navi_pane

0xc2ba,	// (0x000698f7) navi_text_pane_ParamLimits

0xc2ba,	// (0x000698f7) navi_text_pane

0x6fa2,	// (0x000645df) status_small_wait_pane_g1

0x7239,	// (0x00064876) status_small_wait_pane_g2

0x0001,

0xf8e1,	// (0x0006cf1e) status_small_wait_pane_g

0xc8bf,	// (0x00069efc) navi_navi_icon_text_pane

0x2e1c,	// (0x00060459) navi_navi_pane_g1_ParamLimits

0x2e1c,	// (0x00060459) navi_navi_pane_g1

0x2e2e,	// (0x0006046b) navi_navi_pane_g2_ParamLimits

0x2e2e,	// (0x0006046b) navi_navi_pane_g2

0x0001,

0xf8af,	// (0x0006ceec) navi_navi_pane_g_ParamLimits

0xf8af,	// (0x0006ceec) navi_navi_pane_g

0x2e40,	// (0x0006047d) navi_navi_tabs_pane

0x2e49,	// (0x00060486) navi_navi_text_pane

0xc8bf,	// (0x00069efc) navi_navi_volume_pane

0x2df0,	// (0x0006042d) navi_text_pane_t1

0x2de4,	// (0x00060421) navi_icon_pane_g1

0x2d37,	// (0x00060374) navi_navi_text_pane_t1

0xb3cb,	// (0x00068a08) navi_navi_volume_pane_g1

0x0843,	// (0x0005de80) volume_small_pane

0x2c9d,	// (0x000602da) navi_navi_icon_text_pane_g1

0xc817,	// (0x00069e54) navi_navi_icon_text_pane_t1

0xc2b0,	// (0x000698ed) navi_tabs_2_long_pane

0xc2b0,	// (0x000698ed) navi_tabs_2_pane

0xc2b0,	// (0x000698ed) navi_tabs_3_long_pane

0xc2b0,	// (0x000698ed) navi_tabs_3_pane

0xc2b0,	// (0x000698ed) navi_tabs_4_pane

0x081b,	// (0x0005de58) tabs_2_active_pane_ParamLimits

0x081b,	// (0x0005de58) tabs_2_active_pane

0x082b,	// (0x0005de68) tabs_2_passive_pane_ParamLimits

0x082b,	// (0x0005de68) tabs_2_passive_pane

0x07e9,	// (0x0005de26) tabs_3_active_pane_ParamLimits

0x07e9,	// (0x0005de26) tabs_3_active_pane

0x07f9,	// (0x0005de36) tabs_3_passive_pane_ParamLimits

0x07f9,	// (0x0005de36) tabs_3_passive_pane

0x080a,	// (0x0005de47) tabs_3_passive_pane_cp_ParamLimits

0x080a,	// (0x0005de47) tabs_3_passive_pane_cp

0x07a5,	// (0x0005dde2) tabs_4_active_pane_ParamLimits

0x07a5,	// (0x0005dde2) tabs_4_active_pane

0x07b6,	// (0x0005ddf3) tabs_4_passive_pane_ParamLimits

0x07b6,	// (0x0005ddf3) tabs_4_passive_pane

0x07c7,	// (0x0005de04) tabs_4_passive_pane_cp_ParamLimits

0x07c7,	// (0x0005de04) tabs_4_passive_pane_cp

0x07d8,	// (0x0005de15) tabs_4_passive_pane_cp2_ParamLimits

0x07d8,	// (0x0005de15) tabs_4_passive_pane_cp2

0x0781,	// (0x0005ddbe) tabs_2_long_active_pane_ParamLimits

0x0781,	// (0x0005ddbe) tabs_2_long_active_pane

0x0793,	// (0x0005ddd0) tabs_2_long_passive_pane_ParamLimits

0x0793,	// (0x0005ddd0) tabs_2_long_passive_pane

0x073c,	// (0x0005dd79) tabs_3_long_active_pane_ParamLimits

0x073c,	// (0x0005dd79) tabs_3_long_active_pane

0x0755,	// (0x0005dd92) tabs_3_long_passive_pane_ParamLimits

0x0755,	// (0x0005dd92) tabs_3_long_passive_pane

0x0768,	// (0x0005dda5) tabs_3_long_passive_pane_cp_ParamLimits

0x0768,	// (0x0005dda5) tabs_3_long_passive_pane_cp

0x06e2,	// (0x0005dd1f) volume_small_pane_g1

0x06eb,	// (0x0005dd28) volume_small_pane_g2

0x06f4,	// (0x0005dd31) volume_small_pane_g3

0x06fd,	// (0x0005dd3a) volume_small_pane_g4

0x0706,	// (0x0005dd43) volume_small_pane_g5

0x070f,	// (0x0005dd4c) volume_small_pane_g6

0x0718,	// (0x0005dd55) volume_small_pane_g7

0x0721,	// (0x0005dd5e) volume_small_pane_g8

0x072a,	// (0x0005dd67) volume_small_pane_g9

0x0733,	// (0x0005dd70) volume_small_pane_g10

0x0009,

0xf87b,	// (0x0006ceb8) volume_small_pane_g

0x7124,	// (0x00064761) bg_active_tab_pane_cp2_ParamLimits

0x7124,	// (0x00064761) bg_active_tab_pane_cp2

0x9290,	// (0x000668cd) tabs_3_active_pane_g1

0x9298,	// (0x000668d5) tabs_3_active_pane_t1

0x7124,	// (0x00064761) bg_passive_tab_pane_cp2_ParamLimits

0x7124,	// (0x00064761) bg_passive_tab_pane_cp2

0x9290,	// (0x000668cd) tabs_3_passive_pane_g1

0x9298,	// (0x000668d5) tabs_3_passive_pane_t1

0x7124,	// (0x00064761) bg_active_tab_pane_cp3_ParamLimits

0x7124,	// (0x00064761) bg_active_tab_pane_cp3

0x92aa,	// (0x000668e7) tabs_4_active_pane_g1

0x92b2,	// (0x000668ef) tabs_4_active_pane_t1

0x7124,	// (0x00064761) bg_passive_tab_pane_cp3_ParamLimits

0x7124,	// (0x00064761) bg_passive_tab_pane_cp3

0x92aa,	// (0x000668e7) tabs_4_1_passive_pane_g1

0x92b2,	// (0x000668ef) tabs_4_1_passive_pane_t1

0x8434,	// (0x00065a71) list_highlight_pane_cp2

0xcaa0,	// (0x0006a0dd) list_set_pane_ParamLimits

0xcaa0,	// (0x0006a0dd) list_set_pane

0xcb3a,	// (0x0006a177) main_pane_set_t1_ParamLimits

0xcb3a,	// (0x0006a177) main_pane_set_t1

0xcb5a,	// (0x0006a197) main_pane_set_t2_ParamLimits

0xcb5a,	// (0x0006a197) main_pane_set_t2

0xcb6e,	// (0x0006a1ab) main_pane_set_t3_ParamLimits

0xcb6e,	// (0x0006a1ab) main_pane_set_t3

0xcb80,	// (0x0006a1bd) main_pane_set_t4_ParamLimits

0xcb80,	// (0x0006a1bd) main_pane_set_t4

0x0003,

0xf94b,	// (0x0006cf88) main_pane_set_t_ParamLimits

0xf94b,	// (0x0006cf88) main_pane_set_t

0xcb92,	// (0x0006a1cf) setting_code_pane

0xcb9c,	// (0x0006a1d9) setting_slider_graphic_pane

0xcb9c,	// (0x0006a1d9) setting_slider_pane

0xcb9c,	// (0x0006a1d9) setting_text_pane

0xcb9c,	// (0x0006a1d9) setting_volume_pane

0x92c4,	// (0x00066901) volume_set_pane

0x6ffa,	// (0x00064637) bg_set_opt_pane_cp

0x92cc,	// (0x00066909) setting_slider_pane_t1

0x92e5,	// (0x00066922) setting_slider_pane_t2

0x92ff,	// (0x0006693c) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0006cb76) setting_slider_pane_t

0x9317,	// (0x00066954) slider_set_pane

0x6fac,	// (0x000645e9) bg_set_opt_pane_cp2

0x7008,	// (0x00064645) setting_slider_graphic_pane_g1

0x932d,	// (0x0006696a) setting_slider_graphic_pane_t1

0x933d,	// (0x0006697a) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0006cb7d) setting_slider_graphic_pane_t

0x934d,	// (0x0006698a) slider_set_pane_cp

0x6fac,	// (0x000645e9) input_focus_pane_cp1

0x3314,	// (0x00060951) list_set_text_pane

0x6fa2,	// (0x000645df) setting_text_pane_g1

0x6fac,	// (0x000645e9) input_focus_pane_cp2

0x6fa2,	// (0x000645df) setting_code_pane_g1

0x7011,	// (0x0006464e) setting_code_pane_t1

0xbeb5,	// (0x000694f2) set_text_pane_t1_ParamLimits

0xbeb5,	// (0x000694f2) set_text_pane_t1

0x80b1,	// (0x000656ee) set_opt_bg_pane_g1

0x80b9,	// (0x000656f6) set_opt_bg_pane_g2

0xca55,	// (0x0006a092) set_opt_bg_pane_g3

0x80c9,	// (0x00065706) set_opt_bg_pane_g4

0x80d1,	// (0x0006570e) set_opt_bg_pane_g5

0x80d9,	// (0x00065716) set_opt_bg_pane_g6

0xca5f,	// (0x0006a09c) set_opt_bg_pane_g7

0xca67,	// (0x0006a0a4) set_opt_bg_pane_g8

0xca71,	// (0x0006a0ae) set_opt_bg_pane_g9

0x0008,

0xf938,	// (0x0006cf75) set_opt_bg_pane_g

0xca48,	// (0x0006a085) slider_set_pane_g1

0x08c2,	// (0x0005deff) slider_set_pane_g2

0x0006,

0xf929,	// (0x0006cf66) slider_set_pane_g

0xb3d3,	// (0x00068a10) volume_set_pane_g1

0xb3db,	// (0x00068a18) volume_set_pane_g2

0xb3e3,	// (0x00068a20) volume_set_pane_g3

0xb3eb,	// (0x00068a28) volume_set_pane_g4

0xb3f3,	// (0x00068a30) volume_set_pane_g5

0xb3fb,	// (0x00068a38) volume_set_pane_g6

0xb403,	// (0x00068a40) volume_set_pane_g7

0xb40b,	// (0x00068a48) volume_set_pane_g8

0xb413,	// (0x00068a50) volume_set_pane_g9

0xb41b,	// (0x00068a58) volume_set_pane_g10

0x0009,

0xf901,	// (0x0006cf3e) volume_set_pane_g

0x9355,	// (0x00066992) indicator_pane_ParamLimits

0x9355,	// (0x00066992) indicator_pane

0x937d,	// (0x000669ba) main_idle_pane_g2_ParamLimits

0x937d,	// (0x000669ba) main_idle_pane_g2

0x93b5,	// (0x000669f2) main_pane_idle_g1_ParamLimits

0x93b5,	// (0x000669f2) main_pane_idle_g1

0x701f,	// (0x0006465c) popup_clock_digital_analogue_window_ParamLimits

0x701f,	// (0x0006465c) popup_clock_digital_analogue_window

0x93dc,	// (0x00066a19) soft_indicator_pane_ParamLimits

0x93dc,	// (0x00066a19) soft_indicator_pane

0x9400,	// (0x00066a3d) wallpaper_pane_ParamLimits

0x9400,	// (0x00066a3d) wallpaper_pane

0x6fa2,	// (0x000645df) wallpaper_pane_g1

0x9412,	// (0x00066a4f) indicator_pane_g1_ParamLimits

0x9412,	// (0x00066a4f) indicator_pane_g1

0x3774,	// (0x00060db1) navi_navi_icon_text_pane_srt_g1

0x704d,	// (0x0006468a) soft_indicator_pane_t1

0x7067,	// (0x000646a4) aid_ps_area_pane

0x9428,	// (0x00066a65) aid_ps_clock_pane

0x7078,	// (0x000646b5) aid_ps_indicator_pane

0x7084,	// (0x000646c1) indicator_ps_pane_ParamLimits

0x7084,	// (0x000646c1) indicator_ps_pane

0x7093,	// (0x000646d0) power_save_pane_g1_ParamLimits

0x7093,	// (0x000646d0) power_save_pane_g1

0x709f,	// (0x000646dc) power_save_pane_g2_ParamLimits

0x709f,	// (0x000646dc) power_save_pane_g2

0xe787,	// (0x0006bdc4) aid_navinavi_width_pane

0x7067,	// (0x000646a4) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0006cb82) power_save_pane_g_ParamLimits

0xf545,	// (0x0006cb82) power_save_pane_g

0x70ad,	// (0x000646ea) power_save_pane_t1_ParamLimits

0x70ad,	// (0x000646ea) power_save_pane_t1

0x9428,	// (0x00066a65) aid_ps_clock_pane_ParamLimits

0x7078,	// (0x000646b5) aid_ps_indicator_pane_ParamLimits

0x70bf,	// (0x000646fc) power_save_pane_t4_ParamLimits

0x70bf,	// (0x000646fc) power_save_pane_t4

0x0001,

0xf54a,	// (0x0006cb87) power_save_pane_t_ParamLimits

0xf54a,	// (0x0006cb87) power_save_pane_t

0x70e9,	// (0x00064726) power_save_t3_ParamLimits

0x70e9,	// (0x00064726) power_save_t3

0x70d4,	// (0x00064711) power_save_t2_ParamLimits

0x70d4,	// (0x00064711) power_save_t2

0x70fe,	// (0x0006473b) indicator_ps_pane_g1

0x9436,	// (0x00066a73) ai_gene_pane_ParamLimits

0x9436,	// (0x00066a73) ai_gene_pane

0x944d,	// (0x00066a8a) ai_links_pane_ParamLimits

0x944d,	// (0x00066a8a) ai_links_pane

0x9465,	// (0x00066aa2) indicator_pane_cp1_ParamLimits

0x9465,	// (0x00066aa2) indicator_pane_cp1

0x9474,	// (0x00066ab1) main_pane_idle_g1_cp_ParamLimits

0x9474,	// (0x00066ab1) main_pane_idle_g1_cp

0x948c,	// (0x00066ac9) popup_ai_links_title_window

0x9495,	// (0x00066ad2) soft_indicator_pane_cp1_ParamLimits

0x9495,	// (0x00066ad2) soft_indicator_pane_cp1

0x30db,	// (0x00060718) ai_links_pane_g1

0x30e4,	// (0x00060721) grid_ai_links_pane

0xc95d,	// (0x00069f9a) ai_gene_pane_1

0x30c9,	// (0x00060706) ai_gene_pane_2

0x30d2,	// (0x0006070f) list_highlight_pane_cp4

0xc939,	// (0x00069f76) cell_ai_link_pane_ParamLimits

0xc939,	// (0x00069f76) cell_ai_link_pane

0x309a,	// (0x000606d7) cell_ai_link_pane_g1

0x7239,	// (0x00064876) cell_ai_link_pane_g2

0x0001,

0xf8dc,	// (0x0006cf19) cell_ai_link_pane_g

0x6fac,	// (0x000645e9) grid_highlight_cp2

0x6fac,	// (0x000645e9) bg_popup_sub_pane_cp1

0x7115,	// (0x00064752) popup_ai_links_title_window_t1

0x2fea,	// (0x00060627) ai_gene_pane_1_g1_ParamLimits

0x2fea,	// (0x00060627) ai_gene_pane_1_g1

0x2ff6,	// (0x00060633) ai_gene_pane_1_g2_ParamLimits

0x2ff6,	// (0x00060633) ai_gene_pane_1_g2

0x0001,

0xf8d2,	// (0x0006cf0f) ai_gene_pane_1_g_ParamLimits

0xf8d2,	// (0x0006cf0f) ai_gene_pane_1_g

0x3003,	// (0x00060640) ai_gene_pane_1_t1_ParamLimits

0x3003,	// (0x00060640) ai_gene_pane_1_t1

0x3037,	// (0x00060674) grid_ai_soft_ind_pane

0x2fd5,	// (0x00060612) ai_gene_pane_2_t1_ParamLimits

0x2fd5,	// (0x00060612) ai_gene_pane_2_t1

0x94a9,	// (0x00066ae6) main_pane_empty_t1_ParamLimits

0x94a9,	// (0x00066ae6) main_pane_empty_t1

0x94c1,	// (0x00066afe) main_pane_empty_t2_ParamLimits

0x94c1,	// (0x00066afe) main_pane_empty_t2

0x94d6,	// (0x00066b13) main_pane_empty_t3_ParamLimits

0x94d6,	// (0x00066b13) main_pane_empty_t3

0x94e8,	// (0x00066b25) main_pane_empty_t4_ParamLimits

0x94e8,	// (0x00066b25) main_pane_empty_t4

0x94fa,	// (0x00066b37) main_pane_empty_t5_ParamLimits

0x94fa,	// (0x00066b37) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0006cb8c) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0006cb8c) main_pane_empty_t

0x8136,	// (0x00065773) bg_popup_window_pane_ParamLimits

0x8136,	// (0x00065773) bg_popup_window_pane

0xc8b3,	// (0x00069ef0) find_popup_pane_cp2_ParamLimits

0xc8b3,	// (0x00069ef0) find_popup_pane_cp2

0x2d51,	// (0x0006038e) heading_pane_ParamLimits

0x2d51,	// (0x0006038e) heading_pane

0x6fac,	// (0x000645e9) bg_popup_sub_pane

0xc834,	// (0x00069e71) bg_popup_window_pane_g1_ParamLimits

0xc834,	// (0x00069e71) bg_popup_window_pane_g1

0xc843,	// (0x00069e80) bg_popup_window_pane_g2_ParamLimits

0xc843,	// (0x00069e80) bg_popup_window_pane_g2

0xc84f,	// (0x00069e8c) bg_popup_window_pane_g3_ParamLimits

0xc84f,	// (0x00069e8c) bg_popup_window_pane_g3

0xc85b,	// (0x00069e98) bg_popup_window_pane_g4_ParamLimits

0xc85b,	// (0x00069e98) bg_popup_window_pane_g4

0xc86a,	// (0x00069ea7) bg_popup_window_pane_g5_ParamLimits

0xc86a,	// (0x00069ea7) bg_popup_window_pane_g5

0xc87a,	// (0x00069eb7) bg_popup_window_pane_g6_ParamLimits

0xc87a,	// (0x00069eb7) bg_popup_window_pane_g6

0xc886,	// (0x00069ec3) bg_popup_window_pane_g7_ParamLimits

0xc886,	// (0x00069ec3) bg_popup_window_pane_g7

0xc895,	// (0x00069ed2) bg_popup_window_pane_g8_ParamLimits

0xc895,	// (0x00069ed2) bg_popup_window_pane_g8

0xc8a4,	// (0x00069ee1) bg_popup_window_pane_g9_ParamLimits

0xc8a4,	// (0x00069ee1) bg_popup_window_pane_g9

0x2d2b,	// (0x00060368) bg_popup_window_pane_g10_ParamLimits

0x2d2b,	// (0x00060368) bg_popup_window_pane_g10

0x0009,

0xf89a,	// (0x0006ced7) bg_popup_window_pane_g_ParamLimits

0xf89a,	// (0x0006ced7) bg_popup_window_pane_g

0x2c54,	// (0x00060291) bg_popup_heading_pane_ParamLimits

0x2c54,	// (0x00060291) bg_popup_heading_pane

0x0a06,	// (0x0005e043) tabs_4_passive_pane_cp_srt_ParamLimits

0x0a06,	// (0x0005e043) tabs_4_passive_pane_cp_srt

0x0a18,	// (0x0005e055) tabs_4_passive_pane_srt_ParamLimits

0x2c68,	// (0x000602a5) heading_pane_g2

0x0a18,	// (0x0005e055) tabs_4_passive_pane_srt

0x1fde,	// (0x0005f61b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1fde,	// (0x0005f61b) bg_passive_tab_pane_cp3_srt

0x2c70,	// (0x000602ad) heading_pane_t1_ParamLimits

0x2c70,	// (0x000602ad) heading_pane_t1

0x2c87,	// (0x000602c4) heading_pane_t2_ParamLimits

0x2c87,	// (0x000602c4) heading_pane_t2

0x0001,

0xf895,	// (0x0006ced2) heading_pane_t_ParamLimits

0xf895,	// (0x0006ced2) heading_pane_t

0x2791,	// (0x0005fdce) bg_popup_heading_pane_g1

0x2840,	// (0x0005fe7d) bg_popup_heading_pane_g2

0x284a,	// (0x0005fe87) bg_popup_heading_pane_g3

0x2854,	// (0x0005fe91) bg_popup_heading_pane_g4

0x285e,	// (0x0005fe9b) bg_popup_heading_pane_g5

0x2868,	// (0x0005fea5) bg_popup_heading_pane_g6

0x2870,	// (0x0005fead) bg_popup_heading_pane_g7

0x2878,	// (0x0005feb5) bg_popup_heading_pane_g8

0x2882,	// (0x0005febf) bg_popup_heading_pane_g9

0x0008,

0xf851,	// (0x0006ce8e) bg_popup_heading_pane_g

0x1f52,	// (0x0005f58f) bg_popup_sub_pane_g1

0x1f62,	// (0x0005f59f) bg_popup_sub_pane_g2

0x1f5a,	// (0x0005f597) bg_popup_sub_pane_g3

0x1f72,	// (0x0005f5af) bg_popup_sub_pane_g4

0x1f6a,	// (0x0005f5a7) bg_popup_sub_pane_g5

0x1f7a,	// (0x0005f5b7) bg_popup_sub_pane_g6

0x1f82,	// (0x0005f5bf) bg_popup_sub_pane_g7

0x1f92,	// (0x0005f5cf) bg_popup_sub_pane_g8

0x1f8a,	// (0x0005f5c7) bg_popup_sub_pane_g9

0x0008,

0xf82b,	// (0x0006ce68) bg_popup_sub_pane_g

0x7124,	// (0x00064761) bg_popup_window_pane_cp5_ParamLimits

0x7124,	// (0x00064761) bg_popup_window_pane_cp5

0x7140,	// (0x0006477d) popup_note_window_g1_ParamLimits

0x7140,	// (0x0006477d) popup_note_window_g1

0x714c,	// (0x00064789) popup_note_window_t1_ParamLimits

0x714c,	// (0x00064789) popup_note_window_t1

0x7162,	// (0x0006479f) popup_note_window_t2_ParamLimits

0x7162,	// (0x0006479f) popup_note_window_t2

0x7178,	// (0x000647b5) popup_note_window_t3_ParamLimits

0x7178,	// (0x000647b5) popup_note_window_t3

0x718e,	// (0x000647cb) popup_note_window_t4_ParamLimits

0x718e,	// (0x000647cb) popup_note_window_t4

0x71b6,	// (0x000647f3) popup_note_window_t5_ParamLimits

0x71b6,	// (0x000647f3) popup_note_window_t5

0x0004,

0xf55a,	// (0x0006cb97) popup_note_window_t_ParamLimits

0xf55a,	// (0x0006cb97) popup_note_window_t

0x71da,	// (0x00064817) bg_popup_window_pane_cp6_ParamLimits

0x71da,	// (0x00064817) bg_popup_window_pane_cp6

0x270d,	// (0x0005fd4a) popup_note_image_window_g1_ParamLimits

0x270d,	// (0x0005fd4a) popup_note_image_window_g1

0xc6d9,	// (0x00069d16) popup_note_image_window_g2_ParamLimits

0xc6d9,	// (0x00069d16) popup_note_image_window_g2

0x0001,

0xf81f,	// (0x0006ce5c) popup_note_image_window_g_ParamLimits

0xf81f,	// (0x0006ce5c) popup_note_image_window_g

0x2732,	// (0x0005fd6f) popup_note_image_window_t1_ParamLimits

0x2732,	// (0x0005fd6f) popup_note_image_window_t1

0x274b,	// (0x0005fd88) popup_note_image_window_t2_ParamLimits

0x274b,	// (0x0005fd88) popup_note_image_window_t2

0x2764,	// (0x0005fda1) popup_note_image_window_t3_ParamLimits

0x2764,	// (0x0005fda1) popup_note_image_window_t3

0x0002,

0xf824,	// (0x0006ce61) popup_note_image_window_t_ParamLimits

0xf824,	// (0x0006ce61) popup_note_image_window_t

0x25d6,	// (0x0005fc13) bg_popup_window_pane_cp7_ParamLimits

0x25d6,	// (0x0005fc13) bg_popup_window_pane_cp7

0x2606,	// (0x0005fc43) popup_note_wait_window_g1_ParamLimits

0x2606,	// (0x0005fc43) popup_note_wait_window_g1

0x2612,	// (0x0005fc4f) popup_note_wait_window_g2_ParamLimits

0x2612,	// (0x0005fc4f) popup_note_wait_window_g2

0x0002,

0xf80d,	// (0x0006ce4a) popup_note_wait_window_g_ParamLimits

0xf80d,	// (0x0006ce4a) popup_note_wait_window_g

0x262a,	// (0x0005fc67) popup_note_wait_window_t1_ParamLimits

0x262a,	// (0x0005fc67) popup_note_wait_window_t1

0xc67a,	// (0x00069cb7) popup_note_wait_window_t2_ParamLimits

0xc67a,	// (0x00069cb7) popup_note_wait_window_t2

0xc697,	// (0x00069cd4) popup_note_wait_window_t3_ParamLimits

0xc697,	// (0x00069cd4) popup_note_wait_window_t3

0xc6aa,	// (0x00069ce7) popup_note_wait_window_t4_ParamLimits

0xc6aa,	// (0x00069ce7) popup_note_wait_window_t4

0x0004,

0xf814,	// (0x0006ce51) popup_note_wait_window_t_ParamLimits

0xf814,	// (0x0006ce51) popup_note_wait_window_t

0x26a6,	// (0x0005fce3) wait_bar_pane_ParamLimits

0x26a6,	// (0x0005fce3) wait_bar_pane

0x6fac,	// (0x000645e9) wait_anim_pane

0x6fac,	// (0x000645e9) wait_border_pane

0x6fa2,	// (0x000645df) wait_anim_pane_g1

0x6fa2,	// (0x000645df) wait_anim_pane_g2

0x0001,

0xf6d4,	// (0x0006cd11) wait_anim_pane_g

0x2582,	// (0x0005fbbf) wait_border_pane_g1

0x258d,	// (0x0005fbca) wait_border_pane_g2

0x2596,	// (0x0005fbd3) wait_border_pane_g3

0x0002,

0xf806,	// (0x0006ce43) wait_border_pane_g

0x23ed,	// (0x0005fa2a) bg_popup_window_pane_cp16_ParamLimits

0x23ed,	// (0x0005fa2a) bg_popup_window_pane_cp16

0xc62a,	// (0x00069c67) indicator_popup_pane_cp4_ParamLimits

0xc62a,	// (0x00069c67) indicator_popup_pane_cp4

0x2501,	// (0x0005fb3e) popup_query_data_window_t1_ParamLimits

0x2501,	// (0x0005fb3e) popup_query_data_window_t1

0x2513,	// (0x0005fb50) popup_query_data_window_t2_ParamLimits

0x2513,	// (0x0005fb50) popup_query_data_window_t2

0x252c,	// (0x0005fb69) popup_query_data_window_t3_ParamLimits

0x252c,	// (0x0005fb69) popup_query_data_window_t3

0x0002,

0xf7ff,	// (0x0006ce3c) popup_query_data_window_t_ParamLimits

0xf7ff,	// (0x0006ce3c) popup_query_data_window_t

0xc63e,	// (0x00069c7b) query_popup_data_pane_ParamLimits

0xc63e,	// (0x00069c7b) query_popup_data_pane

0xc652,	// (0x00069c8f) query_popup_data_pane_cp1_ParamLimits

0xc652,	// (0x00069c8f) query_popup_data_pane_cp1

0x23ed,	// (0x0005fa2a) bg_popup_window_pane_cp10_ParamLimits

0x23ed,	// (0x0005fa2a) bg_popup_window_pane_cp10

0xc5a5,	// (0x00069be2) indicator_popup_pane_ParamLimits

0xc5a5,	// (0x00069be2) indicator_popup_pane

0xc5c7,	// (0x00069c04) popup_query_code_window_t1_ParamLimits

0xc5c7,	// (0x00069c04) popup_query_code_window_t1

0xc5e1,	// (0x00069c1e) popup_query_code_window_t2_ParamLimits

0xc5e1,	// (0x00069c1e) popup_query_code_window_t2

0x24a4,	// (0x0005fae1) popup_query_code_window_t3_ParamLimits

0x24a4,	// (0x0005fae1) popup_query_code_window_t3

0x0002,

0xf7f8,	// (0x0006ce35) popup_query_code_window_t_ParamLimits

0xf7f8,	// (0x0006ce35) popup_query_code_window_t

0x24d3,	// (0x0005fb10) query_popup_pane_ParamLimits

0x24d3,	// (0x0005fb10) query_popup_pane

0x71da,	// (0x00064817) bg_popup_window_pane_cp15_ParamLimits

0x71da,	// (0x00064817) bg_popup_window_pane_cp15

0x9532,	// (0x00066b6f) indicator_popup_pane_cp1_ParamLimits

0x9532,	// (0x00066b6f) indicator_popup_pane_cp1

0x9545,	// (0x00066b82) indicator_popup_pane_cp2_ParamLimits

0x9545,	// (0x00066b82) indicator_popup_pane_cp2

0x9558,	// (0x00066b95) popup_query_data_code_window_g1_ParamLimits

0x9558,	// (0x00066b95) popup_query_data_code_window_g1

0x71f8,	// (0x00064835) popup_query_data_code_window_t1_ParamLimits

0x71f8,	// (0x00064835) popup_query_data_code_window_t1

0x720a,	// (0x00064847) popup_query_data_code_window_t2_ParamLimits

0x720a,	// (0x00064847) popup_query_data_code_window_t2

0x956b,	// (0x00066ba8) popup_query_data_code_window_t3_ParamLimits

0x956b,	// (0x00066ba8) popup_query_data_code_window_t3

0x9581,	// (0x00066bbe) popup_query_data_code_window_t4_ParamLimits

0x9581,	// (0x00066bbe) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0006cba2) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0006cba2) popup_query_data_code_window_t

0x05c5,	// (0x0005dc02) list_single_midp_graphic_pane_g3

0x9599,	// (0x00066bd6) query_popup_data_pane_cp2_ParamLimits

0x95ac,	// (0x00066be9) query_popup_pane_cp2_ParamLimits

0x95ac,	// (0x00066be9) query_popup_pane_cp2

0x6fac,	// (0x000645e9) bg_popup_window_pane_cp11

0x23d1,	// (0x0005fa0e) heading_pane_cp5

0x23d9,	// (0x0005fa16) listscroll_popup_info_pane

0x6fac,	// (0x000645e9) input_focus_pane_cp3

0x721c,	// (0x00064859) query_popup_pane_t1

0x722a,	// (0x00064867) list_popup_info_pane_ParamLimits

0x722a,	// (0x00064867) list_popup_info_pane

0x7239,	// (0x00064876) listscroll_popup_info_pane_g1

0x7241,	// (0x0006487e) scroll_pane_cp7

0x95bf,	// (0x00066bfc) popup_info_list_pane_t1_ParamLimits

0x95bf,	// (0x00066bfc) popup_info_list_pane_t1

0x95d9,	// (0x00066c16) popup_info_list_pane_t2_ParamLimits

0x95d9,	// (0x00066c16) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0006cbab) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0006cbab) popup_info_list_pane_t

0x6fac,	// (0x000645e9) bg_popup_window_pane_cp12

0xcd41,	// (0x0006a37e) find_popup_pane

0x6ffa,	// (0x00064637) bg_popup_window_pane_cp3

0x724b,	// (0x00064888) heading_pane_cp3

0x725a,	// (0x00064897) listscroll_popup_graphic_pane

0x6fac,	// (0x000645e9) bg_popup_window_pane_cp4

0x9643,	// (0x00066c80) heading_pane_cp4

0x7f05,	// (0x00065542) listscroll_popup_colour_pane

0x964d,	// (0x00066c8a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x964d,	// (0x00066c8a) cell_large_graphic_colour_none_popup_pane

0x9661,	// (0x00066c9e) grid_large_graphic_colour_popup_pane_ParamLimits

0x9661,	// (0x00066c9e) grid_large_graphic_colour_popup_pane

0x9685,	// (0x00066cc2) listscroll_popup_colour_pane_g1_ParamLimits

0x9685,	// (0x00066cc2) listscroll_popup_colour_pane_g1

0x969c,	// (0x00066cd9) listscroll_popup_colour_pane_g2_ParamLimits

0x969c,	// (0x00066cd9) listscroll_popup_colour_pane_g2

0x96b0,	// (0x00066ced) listscroll_popup_colour_pane_g3_ParamLimits

0x96b0,	// (0x00066ced) listscroll_popup_colour_pane_g3

0x96c0,	// (0x00066cfd) listscroll_popup_colour_pane_g4_ParamLimits

0x96c0,	// (0x00066cfd) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0006cbb0) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0006cbb0) listscroll_popup_colour_pane_g

0x7f0d,	// (0x0006554a) scroll_pane_cp6_ParamLimits

0x7f0d,	// (0x0006554a) scroll_pane_cp6

0x96d0,	// (0x00066d0d) cell_large_graphic_colour_popup_pane_ParamLimits

0x96d0,	// (0x00066d0d) cell_large_graphic_colour_popup_pane

0x96ef,	// (0x00066d2c) cell_large_graphic_colour_none_popup_pane_t1

0x6fac,	// (0x000645e9) grid_highlight_pane_cp5

0x7f1f,	// (0x0006555c) cell_large_graphic_colour_popup_pane_g1

0x7f27,	// (0x00065564) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0006cbb9) cell_large_graphic_colour_popup_pane_g

0x7f2f,	// (0x0006556c) cell_large_graphic_colour_popup_pane_g2_copy1

0x7f38,	// (0x00065575) grid_highlight_pane_cp4

0x7f40,	// (0x0006557d) bg_popup_window_pane_cp8_ParamLimits

0x7f40,	// (0x0006557d) bg_popup_window_pane_cp8

0x96fe,	// (0x00066d3b) popup_snote_single_text_window_g1_ParamLimits

0x96fe,	// (0x00066d3b) popup_snote_single_text_window_g1

0x9710,	// (0x00066d4d) popup_snote_single_text_window_t1_ParamLimits

0x9710,	// (0x00066d4d) popup_snote_single_text_window_t1

0x9723,	// (0x00066d60) popup_snote_single_text_window_t2_ParamLimits

0x9723,	// (0x00066d60) popup_snote_single_text_window_t2

0x9736,	// (0x00066d73) popup_snote_single_text_window_t3_ParamLimits

0x9736,	// (0x00066d73) popup_snote_single_text_window_t3

0x976f,	// (0x00066dac) popup_snote_single_text_window_t4_ParamLimits

0x976f,	// (0x00066dac) popup_snote_single_text_window_t4

0x97a3,	// (0x00066de0) popup_snote_single_text_window_t5_ParamLimits

0x97a3,	// (0x00066de0) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0006cbbe) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0006cbbe) popup_snote_single_text_window_t

0x7f5b,	// (0x00065598) bg_popup_window_pane_cp9_ParamLimits

0x7f5b,	// (0x00065598) bg_popup_window_pane_cp9

0x96fe,	// (0x00066d3b) popup_snote_single_graphic_window_g1_ParamLimits

0x96fe,	// (0x00066d3b) popup_snote_single_graphic_window_g1

0x7f69,	// (0x000655a6) popup_snote_single_graphic_window_g2_ParamLimits

0x7f69,	// (0x000655a6) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0006cbc9) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0006cbc9) popup_snote_single_graphic_window_g

0x7f75,	// (0x000655b2) popup_snote_single_graphic_window_t1_ParamLimits

0x7f75,	// (0x000655b2) popup_snote_single_graphic_window_t1

0x7f88,	// (0x000655c5) popup_snote_single_graphic_window_t2_ParamLimits

0x7f88,	// (0x000655c5) popup_snote_single_graphic_window_t2

0x9736,	// (0x00066d73) popup_snote_single_graphic_window_t3_ParamLimits

0x9736,	// (0x00066d73) popup_snote_single_graphic_window_t3

0x976f,	// (0x00066dac) popup_snote_single_graphic_window_t4_ParamLimits

0x976f,	// (0x00066dac) popup_snote_single_graphic_window_t4

0x97d2,	// (0x00066e0f) popup_snote_single_graphic_window_t5_ParamLimits

0x97d2,	// (0x00066e0f) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0006cbce) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0006cbce) popup_snote_single_graphic_window_t

0x36d0,	// (0x00060d0d) grid_graphic_popup_pane_ParamLimits

0x36d0,	// (0x00060d0d) grid_graphic_popup_pane

0x36fa,	// (0x00060d37) listscroll_popup_graphic_pane_g1_ParamLimits

0x36fa,	// (0x00060d37) listscroll_popup_graphic_pane_g1

0xccdf,	// (0x0006a31c) listscroll_popup_graphic_pane_g2_ParamLimits

0xccdf,	// (0x0006a31c) listscroll_popup_graphic_pane_g2

0x0001,

0xf975,	// (0x0006cfb2) listscroll_popup_graphic_pane_g_ParamLimits

0xf975,	// (0x0006cfb2) listscroll_popup_graphic_pane_g

0x3722,	// (0x00060d5f) scroll_pane_cp5

0xcc9e,	// (0x0006a2db) cell_graphic_popup_pane_ParamLimits

0xcc9e,	// (0x0006a2db) cell_graphic_popup_pane

0x3647,	// (0x00060c84) cell_graphic_popup_pane_g1

0x364f,	// (0x00060c8c) cell_graphic_popup_pane_g2

0x7f2f,	// (0x0006556c) cell_graphic_popup_pane_g3

0x0002,

0xf96e,	// (0x0006cfab) cell_graphic_popup_pane_g

0x3658,	// (0x00060c95) cell_graphic_popup_pane_t2

0x7f38,	// (0x00065575) grid_highlight_pane_cp3

0x7fad,	// (0x000655ea) list_gen_pane_ParamLimits

0x7fad,	// (0x000655ea) list_gen_pane

0x7fd5,	// (0x00065612) scroll_pane

0xcc08,	// (0x0006a245) bg_list_pane_g1_ParamLimits

0xcc08,	// (0x0006a245) bg_list_pane_g1

0xcc23,	// (0x0006a260) bg_list_pane_g2_ParamLimits

0xcc23,	// (0x0006a260) bg_list_pane_g2

0xcc36,	// (0x0006a273) bg_list_pane_g3_ParamLimits

0xcc36,	// (0x0006a273) bg_list_pane_g3

0xcc48,	// (0x0006a285) bg_list_pane_g4_ParamLimits

0xcc48,	// (0x0006a285) bg_list_pane_g4

0xcc5a,	// (0x0006a297) bg_list_pane_g5_ParamLimits

0xcc5a,	// (0x0006a297) bg_list_pane_g5

0x0004,

0xf963,	// (0x0006cfa0) bg_list_pane_g_ParamLimits

0xf963,	// (0x0006cfa0) bg_list_pane_g

0xb4e5,	// (0x00068b22) list_double2_graphic_large_graphic_pane_ParamLimits

0xb4e5,	// (0x00068b22) list_double2_graphic_large_graphic_pane

0xb4e5,	// (0x00068b22) list_double2_graphic_pane_ParamLimits

0xb4e5,	// (0x00068b22) list_double2_graphic_pane

0xb4e5,	// (0x00068b22) list_double2_large_graphic_pane_ParamLimits

0xb4e5,	// (0x00068b22) list_double2_large_graphic_pane

0xb4e5,	// (0x00068b22) list_double2_pane_ParamLimits

0xb4e5,	// (0x00068b22) list_double2_pane

0xb4e5,	// (0x00068b22) list_double_graphic_heading_pane_ParamLimits

0xb4e5,	// (0x00068b22) list_double_graphic_heading_pane

0xb4e5,	// (0x00068b22) list_double_graphic_pane_ParamLimits

0xb4e5,	// (0x00068b22) list_double_graphic_pane

0xb4e5,	// (0x00068b22) list_double_heading_pane_ParamLimits

0xb4e5,	// (0x00068b22) list_double_heading_pane

0xb4e5,	// (0x00068b22) list_double_large_graphic_pane_ParamLimits

0xb4e5,	// (0x00068b22) list_double_large_graphic_pane

0xb4e5,	// (0x00068b22) list_double_number_pane_ParamLimits

0xb4e5,	// (0x00068b22) list_double_number_pane

0xb4e5,	// (0x00068b22) list_double_pane_ParamLimits

0xb4e5,	// (0x00068b22) list_double_pane

0xb4e5,	// (0x00068b22) list_double_time_pane_ParamLimits

0xb4e5,	// (0x00068b22) list_double_time_pane

0xb4e5,	// (0x00068b22) list_setting_number_pane_ParamLimits

0xb4e5,	// (0x00068b22) list_setting_number_pane

0xb4e5,	// (0x00068b22) list_setting_pane_ParamLimits

0xb4e5,	// (0x00068b22) list_setting_pane

0x9e12,	// (0x0006744f) list_single_2graphic_pane_ParamLimits

0x9e12,	// (0x0006744f) list_single_2graphic_pane

0x9e12,	// (0x0006744f) list_single_graphic_heading_pane_ParamLimits

0x9e12,	// (0x0006744f) list_single_graphic_heading_pane

0x9e12,	// (0x0006744f) list_single_graphic_pane_ParamLimits

0x9e12,	// (0x0006744f) list_single_graphic_pane

0x9e12,	// (0x0006744f) list_single_heading_pane_ParamLimits

0x9e12,	// (0x0006744f) list_single_heading_pane

0xcbf5,	// (0x0006a232) list_single_large_graphic_pane_ParamLimits

0xcbf5,	// (0x0006a232) list_single_large_graphic_pane

0x9e12,	// (0x0006744f) list_single_number_heading_pane_ParamLimits

0x9e12,	// (0x0006744f) list_single_number_heading_pane

0x9e12,	// (0x0006744f) list_single_number_pane_ParamLimits

0x9e12,	// (0x0006744f) list_single_number_pane

0x9e12,	// (0x0006744f) list_single_pane_ParamLimits

0x9e12,	// (0x0006744f) list_single_pane

0x6fac,	// (0x000645e9) list_highlight_pane_cp1

0xbeda,	// (0x00069517) list_single_pane_g1_ParamLimits

0xbeda,	// (0x00069517) list_single_pane_g1

0x0594,	// (0x0005dbd1) list_single_pane_g2_ParamLimits

0x0594,	// (0x0005dbd1) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0006cbea) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0006cbea) list_single_pane_g

0xb4cf,	// (0x00068b0c) list_single_pane_t1_ParamLimits

0xb4cf,	// (0x00068b0c) list_single_pane_t1

0xbeda,	// (0x00069517) list_single_number_pane_g1_ParamLimits

0xbeda,	// (0x00069517) list_single_number_pane_g1

0x0594,	// (0x0005dbd1) list_single_number_pane_g2_ParamLimits

0x0594,	// (0x0005dbd1) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0006cbea) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0006cbea) list_single_number_pane_g

0xbee6,	// (0x00069523) list_single_number_pane_t1_ParamLimits

0xbee6,	// (0x00069523) list_single_number_pane_t1

0xb423,	// (0x00068a60) list_single_number_pane_t2_ParamLimits

0xb423,	// (0x00068a60) list_single_number_pane_t2

0x0001,

0xf924,	// (0x0006cf61) list_single_number_pane_t_ParamLimits

0xf924,	// (0x0006cf61) list_single_number_pane_t

0xbece,	// (0x0006950b) list_single_graphic_pane_g1_ParamLimits

0xbece,	// (0x0006950b) list_single_graphic_pane_g1

0xbeda,	// (0x00069517) list_single_graphic_pane_g2_ParamLimits

0xbeda,	// (0x00069517) list_single_graphic_pane_g2

0x0594,	// (0x0005dbd1) list_single_graphic_pane_g3_ParamLimits

0x0594,	// (0x0005dbd1) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0006cbd9) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0006cbd9) list_single_graphic_pane_g

0xbee6,	// (0x00069523) list_single_graphic_pane_t1_ParamLimits

0xbee6,	// (0x00069523) list_single_graphic_pane_t1

0x980b,	// (0x00066e48) list_single_heading_pane_g1_ParamLimits

0x980b,	// (0x00066e48) list_single_heading_pane_g1

0x0594,	// (0x0005dbd1) list_single_heading_pane_g2_ParamLimits

0x0594,	// (0x0005dbd1) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0006cbe0) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0006cbe0) list_single_heading_pane_g

0x981e,	// (0x00066e5b) list_single_heading_pane_t1_ParamLimits

0x981e,	// (0x00066e5b) list_single_heading_pane_t1

0x9834,	// (0x00066e71) list_single_heading_pane_t2_ParamLimits

0x9834,	// (0x00066e71) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0006cbe5) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0006cbe5) list_single_heading_pane_t

0xbeda,	// (0x00069517) list_single_number_heading_pane_g1_ParamLimits

0xbeda,	// (0x00069517) list_single_number_heading_pane_g1

0x0594,	// (0x0005dbd1) list_single_number_heading_pane_g2_ParamLimits

0x0594,	// (0x0005dbd1) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0006cbea) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0006cbea) list_single_number_heading_pane_g

0xbefc,	// (0x00069539) list_single_number_heading_pane_t1_ParamLimits

0xbefc,	// (0x00069539) list_single_number_heading_pane_t1

0x9846,	// (0x00066e83) list_single_number_heading_pane_t2_ParamLimits

0x9846,	// (0x00066e83) list_single_number_heading_pane_t2

0x9858,	// (0x00066e95) list_single_number_heading_pane_t3_ParamLimits

0x9858,	// (0x00066e95) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0006cbef) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0006cbef) list_single_number_heading_pane_t

0x986a,	// (0x00066ea7) list_single_graphic_heading_pane_g1_ParamLimits

0x986a,	// (0x00066ea7) list_single_graphic_heading_pane_g1

0x9876,	// (0x00066eb3) list_single_graphic_heading_pane_g4_ParamLimits

0x9876,	// (0x00066eb3) list_single_graphic_heading_pane_g4

0x0594,	// (0x0005dbd1) list_single_graphic_heading_pane_g5_ParamLimits

0x0594,	// (0x0005dbd1) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0006cbf6) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0006cbf6) list_single_graphic_heading_pane_g

0xbefc,	// (0x00069539) list_single_graphic_heading_pane_t1_ParamLimits

0xbefc,	// (0x00069539) list_single_graphic_heading_pane_t1

0x9887,	// (0x00066ec4) list_single_graphic_heading_pane_t2_ParamLimits

0x9887,	// (0x00066ec4) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0006cbfd) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0006cbfd) list_single_graphic_heading_pane_t

0x3cb7,	// (0x000612f4) list_single_large_graphic_pane_g1_ParamLimits

0x3cb7,	// (0x000612f4) list_single_large_graphic_pane_g1

0xe7d1,	// (0x0006be0e) list_single_large_graphic_pane_g2_ParamLimits

0xe7d1,	// (0x0006be0e) list_single_large_graphic_pane_g2

0xe7dd,	// (0x0006be1a) list_single_large_graphic_pane_g3_ParamLimits

0xe7dd,	// (0x0006be1a) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0006cc02) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0006cc02) list_single_large_graphic_pane_g

0x258d,	// (0x0005fbca) wait_border_pane_g2_copy1

0x9899,	// (0x00066ed6) list_single_large_graphic_pane_g4_cp2

0xbf12,	// (0x0006954f) list_single_large_graphic_pane_t1_ParamLimits

0xbf12,	// (0x0006954f) list_single_large_graphic_pane_t1

0x98a1,	// (0x00066ede) list_double_pane_g1_ParamLimits

0x98a1,	// (0x00066ede) list_double_pane_g1

0x98ad,	// (0x00066eea) list_double_pane_g2_ParamLimits

0x98ad,	// (0x00066eea) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0006cc09) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0006cc09) list_double_pane_g

0x98b9,	// (0x00066ef6) list_double_pane_t1_ParamLimits

0x98b9,	// (0x00066ef6) list_double_pane_t1

0x98cf,	// (0x00066f0c) list_double_pane_t2_ParamLimits

0x98cf,	// (0x00066f0c) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0006cc0e) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0006cc0e) list_double_pane_t

0x98e1,	// (0x00066f1e) list_double2_pane_g1_ParamLimits

0x98e1,	// (0x00066f1e) list_double2_pane_g1

0x98f2,	// (0x00066f2f) list_double2_pane_g2_ParamLimits

0x98f2,	// (0x00066f2f) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0006cc13) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0006cc13) list_double2_pane_g

0x98fe,	// (0x00066f3b) list_double2_pane_t1_ParamLimits

0x98fe,	// (0x00066f3b) list_double2_pane_t1

0x9914,	// (0x00066f51) list_double2_pane_t2_ParamLimits

0x9914,	// (0x00066f51) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0006cc18) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0006cc18) list_double2_pane_t

0x98a1,	// (0x00066ede) list_double_number_pane_g1_ParamLimits

0x98a1,	// (0x00066ede) list_double_number_pane_g1

0x98ad,	// (0x00066eea) list_double_number_pane_g2_ParamLimits

0x98ad,	// (0x00066eea) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0006cc09) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0006cc09) list_double_number_pane_g

0x9926,	// (0x00066f63) list_double_number_pane_t1_ParamLimits

0x9926,	// (0x00066f63) list_double_number_pane_t1

0x9938,	// (0x00066f75) list_double_number_pane_t2_ParamLimits

0x9938,	// (0x00066f75) list_double_number_pane_t2

0x994e,	// (0x00066f8b) list_double_number_pane_t3_ParamLimits

0x994e,	// (0x00066f8b) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0006cc1d) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0006cc1d) list_double_number_pane_t

0x9960,	// (0x00066f9d) list_double_graphic_pane_g1_ParamLimits

0x9960,	// (0x00066f9d) list_double_graphic_pane_g1

0x996c,	// (0x00066fa9) list_double_graphic_pane_g2_ParamLimits

0x996c,	// (0x00066fa9) list_double_graphic_pane_g2

0x3abe,	// (0x000610fb) list_double_graphic_pane_g3_ParamLimits

0x3abe,	// (0x000610fb) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0006cc24) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0006cc24) list_double_graphic_pane_g

0x98b9,	// (0x00066ef6) list_double_graphic_pane_t1_ParamLimits

0x98b9,	// (0x00066ef6) list_double_graphic_pane_t1

0x98cf,	// (0x00066f0c) list_double_graphic_pane_t2_ParamLimits

0x98cf,	// (0x00066f0c) list_double_graphic_pane_t2

0x0001,

0xf5d1,	// (0x0006cc0e) list_double_graphic_pane_t_ParamLimits

0xf5d1,	// (0x0006cc0e) list_double_graphic_pane_t

0x9987,	// (0x00066fc4) list_double2_graphic_pane_g1_ParamLimits

0x9987,	// (0x00066fc4) list_double2_graphic_pane_g1

0x9993,	// (0x00066fd0) list_double2_graphic_pane_g2_ParamLimits

0x9993,	// (0x00066fd0) list_double2_graphic_pane_g2

0x999f,	// (0x00066fdc) list_double2_graphic_pane_g3_ParamLimits

0x999f,	// (0x00066fdc) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0006cc2d) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0006cc2d) list_double2_graphic_pane_g

0x99ab,	// (0x00066fe8) list_double2_graphic_pane_t1_ParamLimits

0x99ab,	// (0x00066fe8) list_double2_graphic_pane_t1

0x99c1,	// (0x00066ffe) list_double2_graphic_pane_t2_ParamLimits

0x99c1,	// (0x00066ffe) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0006cc34) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0006cc34) list_double2_graphic_pane_t

0x99d3,	// (0x00067010) list_double_large_graphic_pane_g1_ParamLimits

0x99d3,	// (0x00067010) list_double_large_graphic_pane_g1

0x99f2,	// (0x0006702f) list_double_large_graphic_pane_g2_ParamLimits

0x99f2,	// (0x0006702f) list_double_large_graphic_pane_g2

0x98ad,	// (0x00066eea) list_double_large_graphic_pane_g3_ParamLimits

0x98ad,	// (0x00066eea) list_double_large_graphic_pane_g3

0x9a08,	// (0x00067045) list_double_large_graphic_pane_g4_ParamLimits

0x9a08,	// (0x00067045) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0006cc39) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0006cc39) list_double_large_graphic_pane_g

0x9a1b,	// (0x00067058) list_double_large_graphic_pane_t1_ParamLimits

0x9a1b,	// (0x00067058) list_double_large_graphic_pane_t1

0x9a34,	// (0x00067071) list_double_large_graphic_pane_t2_ParamLimits

0x9a34,	// (0x00067071) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0006cc44) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0006cc44) list_double_large_graphic_pane_t

0x9a46,	// (0x00067083) list_double2_large_graphic_pane_g1_ParamLimits

0x9a46,	// (0x00067083) list_double2_large_graphic_pane_g1

0x9a52,	// (0x0006708f) list_double2_large_graphic_pane_g2_ParamLimits

0x9a52,	// (0x0006708f) list_double2_large_graphic_pane_g2

0x999f,	// (0x00066fdc) list_double2_large_graphic_pane_g3_ParamLimits

0x999f,	// (0x00066fdc) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0006cc49) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0006cc49) list_double2_large_graphic_pane_g

0x99ab,	// (0x00066fe8) list_double2_large_graphic_pane_t1_ParamLimits

0x99ab,	// (0x00066fe8) list_double2_large_graphic_pane_t1

0x99c1,	// (0x00066ffe) list_double2_large_graphic_pane_t2_ParamLimits

0x99c1,	// (0x00066ffe) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0006cc34) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0006cc34) list_double2_large_graphic_pane_t

0x9a63,	// (0x000670a0) list_double_heading_pane_g1_ParamLimits

0x9a63,	// (0x000670a0) list_double_heading_pane_g1

0xe7fe,	// (0x0006be3b) list_double_heading_pane_g2_ParamLimits

0xe7fe,	// (0x0006be3b) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x0006cc50) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x0006cc50) list_double_heading_pane_g

0x9a74,	// (0x000670b1) list_double_heading_pane_t1_ParamLimits

0x9a74,	// (0x000670b1) list_double_heading_pane_t1

0x99c1,	// (0x00066ffe) list_double_heading_pane_t2_ParamLimits

0x99c1,	// (0x00066ffe) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x0006cc55) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x0006cc55) list_double_heading_pane_t

0x9a8a,	// (0x000670c7) list_double_graphic_heading_pane_g1_ParamLimits

0x9a8a,	// (0x000670c7) list_double_graphic_heading_pane_g1

0x9a63,	// (0x000670a0) list_double_graphic_heading_pane_g2_ParamLimits

0x9a63,	// (0x000670a0) list_double_graphic_heading_pane_g2

0xe7fe,	// (0x0006be3b) list_double_graphic_heading_pane_g3_ParamLimits

0xe7fe,	// (0x0006be3b) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0006cc5a) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0006cc5a) list_double_graphic_heading_pane_g

0x9a74,	// (0x000670b1) list_double_graphic_heading_pane_t1_ParamLimits

0x9a74,	// (0x000670b1) list_double_graphic_heading_pane_t1

0x99c1,	// (0x00066ffe) list_double_graphic_heading_pane_t2_ParamLimits

0x99c1,	// (0x00066ffe) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x0006cc55) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x0006cc55) list_double_graphic_heading_pane_t

0x9a96,	// (0x000670d3) list_double_time_pane_g1_ParamLimits

0x9a96,	// (0x000670d3) list_double_time_pane_g1

0xe80a,	// (0x0006be47) list_double_time_pane_g2_ParamLimits

0xe80a,	// (0x0006be47) list_double_time_pane_g2

0x0001,

0xf624,	// (0x0006cc61) list_double_time_pane_g_ParamLimits

0xf624,	// (0x0006cc61) list_double_time_pane_g

0x9aa7,	// (0x000670e4) list_double_time_pane_t1_ParamLimits

0x9aa7,	// (0x000670e4) list_double_time_pane_t1

0x9abd,	// (0x000670fa) list_double_time_pane_t2_ParamLimits

0x9abd,	// (0x000670fa) list_double_time_pane_t2

0x9acf,	// (0x0006710c) list_double_time_pane_t3_ParamLimits

0x9acf,	// (0x0006710c) list_double_time_pane_t3

0x9ae1,	// (0x0006711e) list_double_time_pane_t4_ParamLimits

0x9ae1,	// (0x0006711e) list_double_time_pane_t4

0x0003,

0xf629,	// (0x0006cc66) list_double_time_pane_t_ParamLimits

0xf629,	// (0x0006cc66) list_double_time_pane_t

0x9af3,	// (0x00067130) list_setting_pane_g1_ParamLimits

0x9af3,	// (0x00067130) list_setting_pane_g1

0x9aff,	// (0x0006713c) list_setting_pane_g2_ParamLimits

0x9aff,	// (0x0006713c) list_setting_pane_g2

0x0001,

0xf632,	// (0x0006cc6f) list_setting_pane_g_ParamLimits

0xf632,	// (0x0006cc6f) list_setting_pane_g

0x9b0b,	// (0x00067148) list_setting_pane_t1_ParamLimits

0x9b0b,	// (0x00067148) list_setting_pane_t1

0x9b25,	// (0x00067162) list_setting_pane_t2_ParamLimits

0x9b25,	// (0x00067162) list_setting_pane_t2

0x0002,

0xf637,	// (0x0006cc74) list_setting_pane_t_ParamLimits

0xf637,	// (0x0006cc74) list_setting_pane_t

0x9b64,	// (0x000671a1) set_value_pane_cp_ParamLimits

0x9b64,	// (0x000671a1) set_value_pane_cp

0x9b70,	// (0x000671ad) list_setting_number_pane_g1_ParamLimits

0x9b70,	// (0x000671ad) list_setting_number_pane_g1

0x9b7c,	// (0x000671b9) list_setting_number_pane_g2_ParamLimits

0x9b7c,	// (0x000671b9) list_setting_number_pane_g2

0x0001,

0xf63e,	// (0x0006cc7b) list_setting_number_pane_g_ParamLimits

0xf63e,	// (0x0006cc7b) list_setting_number_pane_g

0x9b88,	// (0x000671c5) list_setting_number_pane_t1_ParamLimits

0x9b88,	// (0x000671c5) list_setting_number_pane_t1

0x9ba1,	// (0x000671de) list_setting_number_pane_t2_ParamLimits

0x9ba1,	// (0x000671de) list_setting_number_pane_t2

0x9bbb,	// (0x000671f8) list_setting_number_pane_t3_ParamLimits

0x9bbb,	// (0x000671f8) list_setting_number_pane_t3

0x0003,

0xf643,	// (0x0006cc80) list_setting_number_pane_t_ParamLimits

0xf643,	// (0x0006cc80) list_setting_number_pane_t

0x9b64,	// (0x000671a1) set_value_pane_ParamLimits

0x9b64,	// (0x000671a1) set_value_pane

0x8009,	// (0x00065646) bg_set_opt_pane_ParamLimits

0x8009,	// (0x00065646) bg_set_opt_pane

0xe816,	// (0x0006be53) set_value_pane_t1

0x802a,	// (0x00065667) slider_set_pane_cp3

0x9bfe,	// (0x0006723b) volume_small_pane_cp

0x8033,	// (0x00065670) list_form_gen_pane

0x803c,	// (0x00065679) scroll_pane_cp8

0x9c07,	// (0x00067244) form_field_data_pane_ParamLimits

0x9c07,	// (0x00067244) form_field_data_pane

0x9c1e,	// (0x0006725b) form_field_data_wide_pane_ParamLimits

0x9c1e,	// (0x0006725b) form_field_data_wide_pane

0x9c3e,	// (0x0006727b) form_field_popup_pane_ParamLimits

0x9c3e,	// (0x0006727b) form_field_popup_pane

0x9c5e,	// (0x0006729b) form_field_popup_wide_pane_ParamLimits

0x9c5e,	// (0x0006729b) form_field_popup_wide_pane

0xe834,	// (0x0006be71) form_field_slider_pane_ParamLimits

0xe834,	// (0x0006be71) form_field_slider_pane

0x9c75,	// (0x000672b2) form_field_slider_wide_pane_ParamLimits

0x9c75,	// (0x000672b2) form_field_slider_wide_pane

0x804d,	// (0x0006568a) data_form_pane

0x9c92,	// (0x000672cf) form_field_data_pane_t1

0x8059,	// (0x00065696) input_focus_pane

0xe847,	// (0x0006be84) data_form_wide_pane

0xe864,	// (0x0006bea1) form_field_data_wide_pane_t1

0x7f4d,	// (0x0006558a) input_focus_pane_cp6

0x9cac,	// (0x000672e9) form_field_popup_pane_t1

0x8059,	// (0x00065696) input_focus_pane_cp7

0x8087,	// (0x000656c4) list_form_pane

0xe88e,	// (0x0006becb) form_field_popup_wide_pane_t1

0x8059,	// (0x00065696) input_focus_pane_cp8

0x8093,	// (0x000656d0) list_form_wide_pane

0x9cce,	// (0x0006730b) form_field_slider_pane_t1_ParamLimits

0x9cce,	// (0x0006730b) form_field_slider_pane_t1

0x9ce6,	// (0x00067323) form_field_slider_pane_t2_ParamLimits

0x9ce6,	// (0x00067323) form_field_slider_pane_t2

0x0001,

0xf653,	// (0x0006cc90) form_field_slider_pane_t_ParamLimits

0xf653,	// (0x0006cc90) form_field_slider_pane_t

0x7124,	// (0x00064761) input_focus_pane_cp9_ParamLimits

0x7124,	// (0x00064761) input_focus_pane_cp9

0x9cfb,	// (0x00067338) slider_cont_pane_ParamLimits

0x9cfb,	// (0x00067338) slider_cont_pane

0x809f,	// (0x000656dc) form_field_slider_wide_pane_t1_ParamLimits

0x809f,	// (0x000656dc) form_field_slider_wide_pane_t1

0xe8a3,	// (0x0006bee0) form_field_slider_wide_pane_t2_ParamLimits

0xe8a3,	// (0x0006bee0) form_field_slider_wide_pane_t2

0x0001,

0xf658,	// (0x0006cc95) form_field_slider_wide_pane_t_ParamLimits

0xf658,	// (0x0006cc95) form_field_slider_wide_pane_t

0x7124,	// (0x00064761) input_focus_pane_cp10_ParamLimits

0x7124,	// (0x00064761) input_focus_pane_cp10

0x9d0f,	// (0x0006734c) slider_cont_pane_cp1_ParamLimits

0x9d0f,	// (0x0006734c) slider_cont_pane_cp1

0x9d23,	// (0x00067360) slider_form_pane_cp

0x80b1,	// (0x000656ee) input_focus_pane_g1

0x80b9,	// (0x000656f6) input_focus_pane_g2

0x80c1,	// (0x000656fe) input_focus_pane_g3

0x80c9,	// (0x00065706) input_focus_pane_g4

0x80d1,	// (0x0006570e) input_focus_pane_g5

0x80d9,	// (0x00065716) input_focus_pane_g6

0x80e1,	// (0x0006571e) input_focus_pane_g7

0x80e9,	// (0x00065726) input_focus_pane_g8

0x80f1,	// (0x0006572e) input_focus_pane_g9

0x6fa2,	// (0x000645df) input_focus_pane_g10

0x0009,

0xf65d,	// (0x0006cc9a) input_focus_pane_g

0x2596,	// (0x0005fbd3) wait_border_pane_g3_copy1

0x9d2b,	// (0x00067368) data_form_pane_t1

0x6fa2,	// (0x000645df) wait_anim_pane_g1_copy1

0xb4a1,	// (0x00068ade) data_form_wide_pane_t1

0x9d45,	// (0x00067382) list_form_graphic_pane_cp_ParamLimits

0x9d45,	// (0x00067382) list_form_graphic_pane_cp

0x3485,	// (0x00060ac2) slider_form_pane_g1

0x348e,	// (0x00060acb) slider_form_pane_g2

0x0006,

0xf954,	// (0x0006cf91) slider_form_pane_g

0x9d57,	// (0x00067394) list_form_graphic_pane_ParamLimits

0x9d57,	// (0x00067394) list_form_graphic_pane

0x9d6a,	// (0x000673a7) list_form_graphic_pane_g1

0x9d72,	// (0x000673af) list_form_graphic_pane_t1_ParamLimits

0x9d72,	// (0x000673af) list_form_graphic_pane_t1

0x6ffa,	// (0x00064637) list_highlight_pane_cp5_ParamLimits

0x6ffa,	// (0x00064637) list_highlight_pane_cp5

0x9d87,	// (0x000673c4) find_pane_g1

0x80f9,	// (0x00065736) input_find_pane

0x9d90,	// (0x000673cd) input_find_pane_g1_ParamLimits

0x9d90,	// (0x000673cd) input_find_pane_g1

0x9d9c,	// (0x000673d9) input_find_pane_t1_ParamLimits

0x9d9c,	// (0x000673d9) input_find_pane_t1

0x9db1,	// (0x000673ee) input_find_pane_t2_ParamLimits

0x9db1,	// (0x000673ee) input_find_pane_t2

0x0001,

0xf672,	// (0x0006ccaf) input_find_pane_t_ParamLimits

0xf672,	// (0x0006ccaf) input_find_pane_t

0x8102,	// (0x0006573f) input_focus_pane_cp5_ParamLimits

0x8102,	// (0x0006573f) input_focus_pane_cp5

0x8115,	// (0x00065752) bg_popup_window_pane_cp2_ParamLimits

0x8115,	// (0x00065752) bg_popup_window_pane_cp2

0x8122,	// (0x0006575f) listscroll_menu_pane_ParamLimits

0x8122,	// (0x0006575f) listscroll_menu_pane

0x9dd2,	// (0x0006740f) popup_submenu_window_ParamLimits

0x9dd2,	// (0x0006740f) popup_submenu_window

0x812e,	// (0x0006576b) find_popup_pane_g1

0x9dfa,	// (0x00067437) input_popup_find_pane_cp

0x8136,	// (0x00065773) input_focus_pane_cp4_ParamLimits

0x8136,	// (0x00065773) input_focus_pane_cp4

0x8144,	// (0x00065781) input_popup_find_pane_t1_ParamLimits

0x8144,	// (0x00065781) input_popup_find_pane_t1

0x6fac,	// (0x000645e9) bg_popup_sub_pane_cp

0x8172,	// (0x000657af) listscroll_popup_sub_pane

0x817a,	// (0x000657b7) list_submenu_pane_ParamLimits

0x817a,	// (0x000657b7) list_submenu_pane

0x818b,	// (0x000657c8) scroll_pane_cp4

0x9e12,	// (0x0006744f) list_single_popup_submenu_pane_ParamLimits

0x9e12,	// (0x0006744f) list_single_popup_submenu_pane

0x9e26,	// (0x00067463) list_single_popup_submenu_pane_g1

0x9e2e,	// (0x0006746b) list_single_popup_submenu_pane_t1_ParamLimits

0x9e2e,	// (0x0006746b) list_single_popup_submenu_pane_t1

0x7124,	// (0x00064761) bg_active_tab_pane_cp1_ParamLimits

0x7124,	// (0x00064761) bg_active_tab_pane_cp1

0x8193,	// (0x000657d0) tabs_2_active_pane_g1

0x9e43,	// (0x00067480) tabs_2_active_pane_t1

0x7124,	// (0x00064761) bg_passive_tab_pane_cp1_ParamLimits

0x7124,	// (0x00064761) bg_passive_tab_pane_cp1

0x8193,	// (0x000657d0) tabs_2_passive_pane_g1

0x9e43,	// (0x00067480) tabs_2_passive_pane_t1

0x6ffa,	// (0x00064637) bg_active_tab_pane_cp4

0x9e55,	// (0x00067492) tabs_2_long_active_pane_t1

0x8434,	// (0x00065a71) bg_passive_tab_pane_cp4

0x05cd,	// (0x0005dc0a) list_single_midp_graphic_pane_g4_ParamLimits

0x6ffa,	// (0x00064637) bg_active_tab_pane_cp5

0x9e68,	// (0x000674a5) tabs_3_long_active_pane_t1

0x8434,	// (0x00065a71) bg_passive_tab_pane_cp5

0x05cd,	// (0x0005dc0a) list_single_midp_graphic_pane_g4

0x6ffa,	// (0x00064637) bg_popup_window_pane_cp13_ParamLimits

0x6ffa,	// (0x00064637) bg_popup_window_pane_cp13

0x819b,	// (0x000657d8) listscroll_popup_fast_pane_ParamLimits

0x819b,	// (0x000657d8) listscroll_popup_fast_pane

0x81a7,	// (0x000657e4) grid_popup_fast_pane_ParamLimits

0x81a7,	// (0x000657e4) grid_popup_fast_pane

0x81b9,	// (0x000657f6) scroll_pane_cp9_ParamLimits

0x81b9,	// (0x000657f6) scroll_pane_cp9

0x4f95,	// (0x000625d2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4f95,	// (0x000625d2) list_single_graphic_hl_pane_t1_cp2

0x81cc,	// (0x00065809) input_focus_pane_cp20_ParamLimits

0x81cc,	// (0x00065809) input_focus_pane_cp20

0x81da,	// (0x00065817) query_popup_data_pane_t1_ParamLimits

0x81da,	// (0x00065817) query_popup_data_pane_t1

0x81ed,	// (0x0006582a) query_popup_data_pane_t2_ParamLimits

0x81ed,	// (0x0006582a) query_popup_data_pane_t2

0x8233,	// (0x00065870) query_popup_data_pane_t3_ParamLimits

0x8233,	// (0x00065870) query_popup_data_pane_t3

0x8274,	// (0x000658b1) query_popup_data_pane_t4_ParamLimits

0x8274,	// (0x000658b1) query_popup_data_pane_t4

0x82b0,	// (0x000658ed) query_popup_data_pane_t5_ParamLimits

0x82b0,	// (0x000658ed) query_popup_data_pane_t5

0x0004,

0xf677,	// (0x0006ccb4) query_popup_data_pane_t_ParamLimits

0xf677,	// (0x0006ccb4) query_popup_data_pane_t

0x80b1,	// (0x000656ee) bg_set_opt_pane_g1

0x80b9,	// (0x000656f6) bg_set_opt_pane_g2

0x80c1,	// (0x000656fe) bg_set_opt_pane_g3

0x80c9,	// (0x00065706) bg_set_opt_pane_g4

0x80d1,	// (0x0006570e) bg_set_opt_pane_g5

0x80d9,	// (0x00065716) bg_set_opt_pane_g6

0x80e1,	// (0x0006571e) bg_set_opt_pane_g7

0x80e9,	// (0x00065726) bg_set_opt_pane_g8

0x80f1,	// (0x0006572e) bg_set_opt_pane_g9

0x0008,

0xf682,	// (0x0006ccbf) bg_set_opt_pane_g

0xf2bc,	// (0x0006c8f9) control_top_pane_stacon_ParamLimits

0xf2bc,	// (0x0006c8f9) control_top_pane_stacon

0xf30f,	// (0x0006c94c) signal_pane_stacon_ParamLimits

0xf30f,	// (0x0006c94c) signal_pane_stacon

0xc130,	// (0x0006976d) stacon_top_pane_g1_ParamLimits

0xc130,	// (0x0006976d) stacon_top_pane_g1

0xf334,	// (0x0006c971) title_pane_stacon_ParamLimits

0xf334,	// (0x0006c971) title_pane_stacon

0xf35e,	// (0x0006c99b) uni_indicator_pane_stacon_ParamLimits

0xf35e,	// (0x0006c99b) uni_indicator_pane_stacon

0xf373,	// (0x0006c9b0) battery_pane_stacon_ParamLimits

0xf373,	// (0x0006c9b0) battery_pane_stacon

0xf3b7,	// (0x0006c9f4) control_bottom_pane_stacon_ParamLimits

0xf3b7,	// (0x0006c9f4) control_bottom_pane_stacon

0xf3da,	// (0x0006ca17) navi_pane_stacon_ParamLimits

0xf3da,	// (0x0006ca17) navi_pane_stacon

0xc152,	// (0x0006978f) stacon_bottom_pane_g1_ParamLimits

0xc152,	// (0x0006978f) stacon_bottom_pane_g1

0xe8b5,	// (0x0006bef2) aid_levels_signal_lsc_ParamLimits

0xe8b5,	// (0x0006bef2) aid_levels_signal_lsc

0xe8cb,	// (0x0006bf08) signal_pane_stacon_g1_ParamLimits

0xe8cb,	// (0x0006bf08) signal_pane_stacon_g1

0xe8df,	// (0x0006bf1c) signal_pane_stacon_g2_ParamLimits

0xe8df,	// (0x0006bf1c) signal_pane_stacon_g2

0x0001,

0xf695,	// (0x0006ccd2) signal_pane_stacon_g_ParamLimits

0xf695,	// (0x0006ccd2) signal_pane_stacon_g

0xe914,	// (0x0006bf51) title_pane_stacon_t1_ParamLimits

0xe914,	// (0x0006bf51) title_pane_stacon_t1

0x82f4,	// (0x00065931) uni_indicator_pane_stacon_g1

0x82fe,	// (0x0006593b) uni_indicator_pane_stacon_g2

0x8308,	// (0x00065945) uni_indicator_pane_stacon_g3

0x8312,	// (0x0006594f) uni_indicator_pane_stacon_g4

0x0003,

0xf6a1,	// (0x0006ccde) uni_indicator_pane_stacon_g

0xe939,	// (0x0006bf76) control_top_pane_stacon_g1

0xe941,	// (0x0006bf7e) control_top_pane_stacon_t1_ParamLimits

0xe941,	// (0x0006bf7e) control_top_pane_stacon_t1

0xe978,	// (0x0006bfb5) aid_levels_battery_lsc_ParamLimits

0xe978,	// (0x0006bfb5) aid_levels_battery_lsc

0xf159,	// (0x0006c796) battery_pane_stacon_g1_ParamLimits

0xf159,	// (0x0006c796) battery_pane_stacon_g1

0xf16c,	// (0x0006c7a9) battery_pane_stacon_g2_ParamLimits

0xf16c,	// (0x0006c7a9) battery_pane_stacon_g2

0x0001,

0xf6aa,	// (0x0006cce7) battery_pane_stacon_g_ParamLimits

0xf6aa,	// (0x0006cce7) battery_pane_stacon_g

0xf1aa,	// (0x0006c7e7) navi_icon_pane_stacon

0xf1be,	// (0x0006c7fb) navi_navi_pane_stacon

0xf1aa,	// (0x0006c7e7) navi_text_pane_stacon

0xe939,	// (0x0006bf76) control_bottom_pane_stacon_g1

0xf1d2,	// (0x0006c80f) control_bottom_pane_stacon_t1_ParamLimits

0xf1d2,	// (0x0006c80f) control_bottom_pane_stacon_t1

0x9e94,	// (0x000674d1) grid_app_pane_ParamLimits

0x9e94,	// (0x000674d1) grid_app_pane

0x9ecc,	// (0x00067509) scroll_pane_cp15_ParamLimits

0x9ecc,	// (0x00067509) scroll_pane_cp15

0x9ee1,	// (0x0006751e) cell_app_pane_ParamLimits

0x9ee1,	// (0x0006751e) cell_app_pane

0x9f26,	// (0x00067563) cell_app_pane_g1_ParamLimits

0x9f26,	// (0x00067563) cell_app_pane_g1

0x8336,	// (0x00065973) cell_app_pane_g2_ParamLimits

0x8336,	// (0x00065973) cell_app_pane_g2

0x0001,

0xf6af,	// (0x0006ccec) cell_app_pane_g_ParamLimits

0xf6af,	// (0x0006ccec) cell_app_pane_g

0x9f4a,	// (0x00067587) cell_app_pane_t1_ParamLimits

0x9f4a,	// (0x00067587) cell_app_pane_t1

0x8342,	// (0x0006597f) grid_highlight_pane_ParamLimits

0x8342,	// (0x0006597f) grid_highlight_pane

0x80b1,	// (0x000656ee) cell_highlight_pane_g1

0x80b9,	// (0x000656f6) cell_highlight_pane_g2

0x80c1,	// (0x000656fe) cell_highlight_pane_g3

0x80c9,	// (0x00065706) cell_highlight_pane_g4

0x80d1,	// (0x0006570e) cell_highlight_pane_g5

0x80d9,	// (0x00065716) cell_highlight_pane_g6

0x80e1,	// (0x0006571e) cell_highlight_pane_g7

0x80e9,	// (0x00065726) cell_highlight_pane_g8

0x80f1,	// (0x0006572e) cell_highlight_pane_g9

0x6fa2,	// (0x000645df) cell_highlight_pane_g10

0x0009,

0xf65d,	// (0x0006cc9a) cell_highlight_pane_g

0x8353,	// (0x00065990) bg_scroll_pane

0x9f6a,	// (0x000675a7) scroll_handle_pane

0x839a,	// (0x000659d7) scroll_bg_pane_g1

0x83af,	// (0x000659ec) scroll_bg_pane_g2

0x83c7,	// (0x00065a04) scroll_bg_pane_g3

0x0002,

0xf6b4,	// (0x0006ccf1) scroll_bg_pane_g

0x9f7e,	// (0x000675bb) scroll_handle_focus_pane_ParamLimits

0x9f7e,	// (0x000675bb) scroll_handle_focus_pane

0x839a,	// (0x000659d7) scroll_handle_pane_g1

0x83dc,	// (0x00065a19) scroll_handle_pane_g2

0x83c7,	// (0x00065a04) scroll_handle_pane_g3

0x0002,

0xf6bb,	// (0x0006ccf8) scroll_handle_pane_g

0x8136,	// (0x00065773) bg_popup_sub_pane_cp21_ParamLimits

0x8136,	// (0x00065773) bg_popup_sub_pane_cp21

0x9f8b,	// (0x000675c8) popup_fep_japan_predictive_window_t1_ParamLimits

0x9f8b,	// (0x000675c8) popup_fep_japan_predictive_window_t1

0x9fa2,	// (0x000675df) popup_fep_japan_predictive_window_t2_ParamLimits

0x9fa2,	// (0x000675df) popup_fep_japan_predictive_window_t2

0x9fd5,	// (0x00067612) popup_fep_japan_predictive_window_t3_ParamLimits

0x9fd5,	// (0x00067612) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c2,	// (0x0006ccff) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c2,	// (0x0006ccff) popup_fep_japan_predictive_window_t

0x6fac,	// (0x000645e9) bg_popup_sub_pane_cp23

0xa00c,	// (0x00067649) listscroll_japin_cand_pane

0x83f0,	// (0x00065a2d) popup_fep_japan_candidate_window_t1

0x83fe,	// (0x00065a3b) candidate_pane_ParamLimits

0x83fe,	// (0x00065a3b) candidate_pane

0xa014,	// (0x00067651) scroll_pane_cp30

0x8410,	// (0x00065a4d) list_single_popup_jap_candidate_pane_ParamLimits

0x8410,	// (0x00065a4d) list_single_popup_jap_candidate_pane

0x6fac,	// (0x000645e9) list_highlight_pane_cp30

0x8425,	// (0x00065a62) list_single_popup_jap_candidate_pane_t1

0xbf28,	// (0x00069565) level_1_signal

0xbf35,	// (0x00069572) level_2_signal

0xbf42,	// (0x0006957f) level_3_signal

0xbf4f,	// (0x0006958c) level_4_signal

0xbf5c,	// (0x00069599) level_5_signal

0xbf69,	// (0x000695a6) level_6_signal

0xbf76,	// (0x000695b3) level_7_signal

0xbf28,	// (0x00069565) level_1_battery

0xbf35,	// (0x00069572) level_2_battery

0xbf42,	// (0x0006957f) level_3_battery

0xbf4f,	// (0x0006958c) level_4_battery

0xbf5c,	// (0x00069599) level_5_battery

0xbf69,	// (0x000695a6) level_6_battery

0xbf76,	// (0x000695b3) level_7_battery

0xbf9b,	// (0x000695d8) list_menu_pane_ParamLimits

0xbf9b,	// (0x000695d8) list_menu_pane

0xbfb1,	// (0x000695ee) scroll_pane_cp25_ParamLimits

0xbfb1,	// (0x000695ee) scroll_pane_cp25

0xa01c,	// (0x00067659) list_double2_graphic_pane_cp2_ParamLimits

0xa01c,	// (0x00067659) list_double2_graphic_pane_cp2

0xa01c,	// (0x00067659) list_double2_large_graphic_pane_cp2_ParamLimits

0xa01c,	// (0x00067659) list_double2_large_graphic_pane_cp2

0xa01c,	// (0x00067659) list_double2_pane_cp2_ParamLimits

0xa01c,	// (0x00067659) list_double2_pane_cp2

0xa01c,	// (0x00067659) list_double_graphic_pane_cp2_ParamLimits

0xa01c,	// (0x00067659) list_double_graphic_pane_cp2

0xa01c,	// (0x00067659) list_double_large_graphic_pane_cp2_ParamLimits

0xa01c,	// (0x00067659) list_double_large_graphic_pane_cp2

0xa01c,	// (0x00067659) list_double_number_pane_cp2_ParamLimits

0xa01c,	// (0x00067659) list_double_number_pane_cp2

0xa01c,	// (0x00067659) list_double_pane_cp2_ParamLimits

0xa01c,	// (0x00067659) list_double_pane_cp2

0xa02b,	// (0x00067668) list_single_2graphic_pane_cp2_ParamLimits

0xa02b,	// (0x00067668) list_single_2graphic_pane_cp2

0xa02b,	// (0x00067668) list_single_graphic_heading_pane_cp2_ParamLimits

0xa02b,	// (0x00067668) list_single_graphic_heading_pane_cp2

0xa02b,	// (0x00067668) list_single_graphic_pane_cp2_ParamLimits

0xa02b,	// (0x00067668) list_single_graphic_pane_cp2

0xa02b,	// (0x00067668) list_single_heading_pane_cp2_ParamLimits

0xa02b,	// (0x00067668) list_single_heading_pane_cp2

0xbfda,	// (0x00069617) list_single_large_graphic_pane_cp2_ParamLimits

0xbfda,	// (0x00069617) list_single_large_graphic_pane_cp2

0xa02b,	// (0x00067668) list_single_number_heading_pane_cp2_ParamLimits

0xa02b,	// (0x00067668) list_single_number_heading_pane_cp2

0xa02b,	// (0x00067668) list_single_number_pane_cp2_ParamLimits

0xa02b,	// (0x00067668) list_single_number_pane_cp2

0xa03d,	// (0x0006767a) list_single_pane_cp2_ParamLimits

0xa03d,	// (0x0006767a) list_single_pane_cp2

0xbff4,	// (0x00069631) bg_popup_sub_pane_cp22

0xf2a2,	// (0x0006c8df) popup_side_volume_key_window_g1

0xf2ae,	// (0x0006c8eb) popup_side_volume_key_window_t1

0xa105,	// (0x00067742) volume_small_pane_cp1

0x7124,	// (0x00064761) bg_popup_sub_pane_cp24_ParamLimits

0x7124,	// (0x00064761) bg_popup_sub_pane_cp24

0xc00a,	// (0x00069647) fep_china_uni_candidate_pane_ParamLimits

0xc00a,	// (0x00069647) fep_china_uni_candidate_pane

0xc01e,	// (0x0006965b) fep_china_uni_entry_pane

0xc02e,	// (0x0006966b) popup_fep_china_uni_window_g1

0xa10d,	// (0x0006774a) fep_china_uni_entry_pane_g1

0xa115,	// (0x00067752) fep_china_uni_entry_pane_g2

0x0001,

0xf6f3,	// (0x0006cd30) fep_china_uni_entry_pane_g

0xc04a,	// (0x00069687) fep_entry_item_pane

0xc054,	// (0x00069691) fep_candidate_item_pane

0xa11d,	// (0x0006775a) fep_china_uni_candidate_pane_g1

0xc05c,	// (0x00069699) fep_china_uni_candidate_pane_g2

0xc064,	// (0x000696a1) fep_china_uni_candidate_pane_g3

0xa125,	// (0x00067762) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f8,	// (0x0006cd35) fep_china_uni_candidate_pane_g

0x6fa2,	// (0x000645df) fep_entry_item_pane_g1

0xc06c,	// (0x000696a9) fep_entry_item_pane_t1_ParamLimits

0xc06c,	// (0x000696a9) fep_entry_item_pane_t1

0xc082,	// (0x000696bf) fep_candidate_item_pane_t1_ParamLimits

0xc082,	// (0x000696bf) fep_candidate_item_pane_t1

0xc097,	// (0x000696d4) fep_candidate_item_pane_t2_ParamLimits

0xc097,	// (0x000696d4) fep_candidate_item_pane_t2

0x0001,

0xf701,	// (0x0006cd3e) fep_candidate_item_pane_t_ParamLimits

0xf701,	// (0x0006cd3e) fep_candidate_item_pane_t

0x6ffa,	// (0x00064637) list_highlight_pane_cp31_ParamLimits

0x6ffa,	// (0x00064637) list_highlight_pane_cp31

0xc0a9,	// (0x000696e6) level_1_signal_lsc

0xc0b2,	// (0x000696ef) level_2_signal_lsc

0xc0bb,	// (0x000696f8) level_3_signal_lsc

0xc0c4,	// (0x00069701) level_4_signal_lsc

0xc0cd,	// (0x0006970a) level_5_signal_lsc

0xc0d6,	// (0x00069713) level_6_signal_lsc

0xc0df,	// (0x0006971c) level_7_signal_lsc

0xc0df,	// (0x0006971c) level_1_battery_lsc

0xc0e8,	// (0x00069725) level_2_battery_lsc

0xc0f1,	// (0x0006972e) level_3_battery_lsc

0xc0fa,	// (0x00069737) level_4_battery_lsc

0xc103,	// (0x00069740) level_5_battery_lsc

0xc10c,	// (0x00069749) level_6_battery_lsc

0xc0a9,	// (0x000696e6) level_7_battery_lsc

0xc115,	// (0x00069752) scroll_handle_focus_pane_g1

0xc11e,	// (0x0006975b) scroll_handle_focus_pane_g2

0xc127,	// (0x00069764) scroll_handle_focus_pane_g3

0x0002,

0xf706,	// (0x0006cd43) scroll_handle_focus_pane_g

0xa12d,	// (0x0006776a) list_single_2graphic_pane_g1_ParamLimits

0xa12d,	// (0x0006776a) list_single_2graphic_pane_g1

0x9876,	// (0x00066eb3) list_single_2graphic_pane_g2_ParamLimits

0x9876,	// (0x00066eb3) list_single_2graphic_pane_g2

0x0594,	// (0x0005dbd1) list_single_2graphic_pane_g3_ParamLimits

0x0594,	// (0x0005dbd1) list_single_2graphic_pane_g3

0xa139,	// (0x00067776) list_single_2graphic_pane_g4_ParamLimits

0xa139,	// (0x00067776) list_single_2graphic_pane_g4

0x0003,

0xf70d,	// (0x0006cd4a) list_single_2graphic_pane_g_ParamLimits

0xf70d,	// (0x0006cd4a) list_single_2graphic_pane_g

0xa145,	// (0x00067782) list_single_2graphic_pane_t1_ParamLimits

0xa145,	// (0x00067782) list_single_2graphic_pane_t1

0xa173,	// (0x000677b0) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa173,	// (0x000677b0) list_double2_graphic_large_graphic_pane_g1

0x9a52,	// (0x0006708f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9a52,	// (0x0006708f) list_double2_graphic_large_graphic_pane_g2

0x999f,	// (0x00066fdc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x999f,	// (0x00066fdc) list_double2_graphic_large_graphic_pane_g3

0xa185,	// (0x000677c2) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa185,	// (0x000677c2) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf716,	// (0x0006cd53) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf716,	// (0x0006cd53) list_double2_graphic_large_graphic_pane_g

0xa191,	// (0x000677ce) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa191,	// (0x000677ce) list_double2_graphic_large_graphic_pane_t1

0xa1a7,	// (0x000677e4) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa1a7,	// (0x000677e4) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71f,	// (0x0006cd5c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71f,	// (0x0006cd5c) list_double2_graphic_large_graphic_pane_t

0xa22c,	// (0x00067869) popup_fast_swap_window_ParamLimits

0xa22c,	// (0x00067869) popup_fast_swap_window

0xa248,	// (0x00067885) popup_side_volume_key_window

0xc1dd,	// (0x0006981a) stacon_top_pane

0xc1e7,	// (0x00069824) status_pane_ParamLimits

0xc1e7,	// (0x00069824) status_pane

0x6f98,	// (0x000645d5) status_small_pane

0x6fac,	// (0x000645e9) control_pane

0x6fac,	// (0x000645e9) stacon_bottom_pane

0x803c,	// (0x00065679) scroll_pane_cp121

0x8033,	// (0x00065670) set_content_pane

0xa1b9,	// (0x000677f6) bg_active_tab_pane_g1_cp1

0xa1c2,	// (0x000677ff) bg_active_tab_pane_g2_cp1

0xa1cb,	// (0x00067808) bg_active_tab_pane_g3_cp1

0xa1b9,	// (0x000677f6) bg_passive_tab_pane_g1_cp1

0xa1c2,	// (0x000677ff) bg_passive_tab_pane_g2_cp1

0xa1cb,	// (0x00067808) bg_passive_tab_pane_g3_cp1

0xa1d4,	// (0x00067811) bg_active_tab_pane_g1_cp2

0xa1c2,	// (0x000677ff) bg_active_tab_pane_g2_cp2

0xa1dd,	// (0x0006781a) bg_active_tab_pane_g3_cp2

0xa1d4,	// (0x00067811) bg_passive_tab_pane_g1_cp2

0xa1c2,	// (0x000677ff) bg_passive_tab_pane_g2_cp2

0xa1dd,	// (0x0006781a) bg_passive_tab_pane_g3_cp2

0xa1e6,	// (0x00067823) bg_active_tab_pane_g1_cp3

0xa1c2,	// (0x000677ff) bg_active_tab_pane_g2_cp3

0xa1ef,	// (0x0006782c) bg_active_tab_pane_g3_cp3

0xa1e6,	// (0x00067823) bg_passive_tab_pane_g1_cp3

0xa1c2,	// (0x000677ff) bg_passive_tab_pane_g2_cp3

0xa1ef,	// (0x0006782c) bg_passive_tab_pane_g3_cp3

0xa1f8,	// (0x00067835) bg_active_tab_pane_g1_cp4

0xa1c2,	// (0x000677ff) bg_active_tab_pane_g2_cp4

0xa203,	// (0x00067840) bg_active_tab_pane_g3_cp4

0xa1f8,	// (0x00067835) bg_passive_tab_pane_g1_cp4

0xa1c2,	// (0x000677ff) bg_passive_tab_pane_g2_cp4

0xa203,	// (0x00067840) bg_passive_tab_pane_g3_cp4

0xa20e,	// (0x0006784b) bg_active_tab_pane_g1_cp5

0xa1c2,	// (0x000677ff) bg_active_tab_pane_g2_cp5

0xa217,	// (0x00067854) bg_active_tab_pane_g3_cp5

0xa20e,	// (0x0006784b) bg_passive_tab_pane_g1_cp5

0xa1c2,	// (0x000677ff) bg_passive_tab_pane_g2_cp5

0xa217,	// (0x00067854) bg_passive_tab_pane_g3_cp5

0x3ae2,	// (0x0006111f) list_set_graphic_pane_ParamLimits

0x3ae2,	// (0x0006111f) list_set_graphic_pane

0x6fac,	// (0x000645e9) bg_set_opt_pane_cp4

0xc16e,	// (0x000697ab) list_set_graphic_pane_g1_ParamLimits

0xc16e,	// (0x000697ab) list_set_graphic_pane_g1

0xc17a,	// (0x000697b7) list_set_graphic_pane_g2_ParamLimits

0xc17a,	// (0x000697b7) list_set_graphic_pane_g2

0x0001,

0xf724,	// (0x0006cd61) list_set_graphic_pane_g_ParamLimits

0xf724,	// (0x0006cd61) list_set_graphic_pane_g

0x0009,

0xfaa9,	// (0x0006d0e6) volume_small_pane_cp_g

0xa220,	// (0x0006785d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa220,	// (0x0006785d) list_double2_large_graphic_pane_g1_cp2

0xc19c,	// (0x000697d9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc19c,	// (0x000697d9) list_double2_large_graphic_pane_g2_cp2

0xc1ad,	// (0x000697ea) list_double2_large_graphic_pane_g3_cp2

0xc1b5,	// (0x000697f2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc1b5,	// (0x000697f2) list_double2_large_graphic_pane_t1_cp2

0xc1cb,	// (0x00069808) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc1cb,	// (0x00069808) list_double2_large_graphic_pane_t2_cp2

0xc928,	// (0x00069f65) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc928,	// (0x00069f65) list_double_large_graphic_pane_g1_cp2

0x3058,	// (0x00060695) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3058,	// (0x00060695) list_double_large_graphic_pane_g2_cp2

0xc303,	// (0x00069940) list_double_large_graphic_pane_g3_cp2

0x3069,	// (0x000606a6) list_double_large_graphic_pane_g4_cp

0x3071,	// (0x000606ae) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3071,	// (0x000606ae) list_double_large_graphic_pane_t1_cp2

0x3088,	// (0x000606c5) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3088,	// (0x000606c5) list_double_large_graphic_pane_t2_cp2

0xc1f5,	// (0x00069832) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc1f5,	// (0x00069832) list_double2_graphic_pane_g1_cp2

0xc203,	// (0x00069840) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc203,	// (0x00069840) list_double2_graphic_pane_g2_cp2

0xc214,	// (0x00069851) list_double2_graphic_pane_g3_cp2

0xc21e,	// (0x0006985b) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc21e,	// (0x0006985b) list_double2_graphic_pane_t1_cp2

0xc234,	// (0x00069871) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc234,	// (0x00069871) list_double2_graphic_pane_t2_cp2

0xc246,	// (0x00069883) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc246,	// (0x00069883) list_single_number_heading_pane_g1_cp2

0xc252,	// (0x0006988f) list_single_number_heading_pane_g2_cp2

0xc25a,	// (0x00069897) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc25a,	// (0x00069897) list_single_number_heading_pane_t1_cp2

0xc270,	// (0x000698ad) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc270,	// (0x000698ad) list_single_number_heading_pane_t2_cp2

0xc282,	// (0x000698bf) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc282,	// (0x000698bf) list_single_number_heading_pane_t3_cp2

0xc246,	// (0x00069883) list_single_heading_pane_g1_cp2_ParamLimits

0xc246,	// (0x00069883) list_single_heading_pane_g1_cp2

0xc252,	// (0x0006988f) list_single_heading_pane_g2_cp2

0xc25a,	// (0x00069897) list_single_heading_pane_t1_cp2_ParamLimits

0xc25a,	// (0x00069897) list_single_heading_pane_t1_cp2

0x2e51,	// (0x0006048e) list_single_heading_pane_t2_cp2_ParamLimits

0x2e51,	// (0x0006048e) list_single_heading_pane_t2_cp2

0x2d99,	// (0x000603d6) list_double_graphic_pane_g1_cp2_ParamLimits

0x2d99,	// (0x000603d6) list_double_graphic_pane_g1_cp2

0x2da5,	// (0x000603e2) list_double_graphic_pane_g2_cp2_ParamLimits

0x2da5,	// (0x000603e2) list_double_graphic_pane_g2_cp2

0x2db4,	// (0x000603f1) list_double_graphic_pane_g3_cp2

0x2dbc,	// (0x000603f9) list_double_graphic_pane_t1_cp2_ParamLimits

0x2dbc,	// (0x000603f9) list_double_graphic_pane_t1_cp2

0x2dd2,	// (0x0006040f) list_double_graphic_pane_t2_cp2_ParamLimits

0x2dd2,	// (0x0006040f) list_double_graphic_pane_t2_cp2

0xc2f7,	// (0x00069934) list_double_number_pane_g1_cp2_ParamLimits

0xc2f7,	// (0x00069934) list_double_number_pane_g1_cp2

0xc303,	// (0x00069940) list_double_number_pane_g2_cp2

0x2d5d,	// (0x0006039a) list_double_number_pane_t1_cp2_ParamLimits

0x2d5d,	// (0x0006039a) list_double_number_pane_t1_cp2

0x2d71,	// (0x000603ae) list_double_number_pane_t2_cp2_ParamLimits

0x2d71,	// (0x000603ae) list_double_number_pane_t2_cp2

0x2d87,	// (0x000603c4) list_double_number_pane_t3_cp2_ParamLimits

0x2d87,	// (0x000603c4) list_double_number_pane_t3_cp2

0x2c46,	// (0x00060283) list_single_graphic_pane_g1_cp2_ParamLimits

0x2c46,	// (0x00060283) list_single_graphic_pane_g1_cp2

0xbeda,	// (0x00069517) list_single_graphic_pane_g2_cp2_ParamLimits

0xbeda,	// (0x00069517) list_single_graphic_pane_g2_cp2

0xc35c,	// (0x00069999) list_single_graphic_pane_g3_cp2

0x2c1c,	// (0x00060259) list_single_graphic_pane_t1_cp2_ParamLimits

0x2c1c,	// (0x00060259) list_single_graphic_pane_t1_cp2

0xbeda,	// (0x00069517) list_single_number_pane_g1_cp2_ParamLimits

0xbeda,	// (0x00069517) list_single_number_pane_g1_cp2

0xc35c,	// (0x00069999) list_single_number_pane_g2_cp2

0x2c1c,	// (0x00060259) list_single_number_pane_t1_cp2_ParamLimits

0x2c1c,	// (0x00060259) list_single_number_pane_t1_cp2

0x2c32,	// (0x0006026f) list_single_number_pane_t2_cp2_ParamLimits

0x2c32,	// (0x0006026f) list_single_number_pane_t2_cp2

0xc19c,	// (0x000697d9) list_double2_pane_g1_cp2_ParamLimits

0xc19c,	// (0x000697d9) list_double2_pane_g1_cp2

0xc1ad,	// (0x000697ea) list_double2_pane_g2_cp2

0xc2cf,	// (0x0006990c) list_double2_pane_t1_cp2_ParamLimits

0xc2cf,	// (0x0006990c) list_double2_pane_t1_cp2

0xc2e5,	// (0x00069922) list_double2_pane_t2_cp2_ParamLimits

0xc2e5,	// (0x00069922) list_double2_pane_t2_cp2

0xc2f7,	// (0x00069934) list_double_pane_g1_cp2_ParamLimits

0xc2f7,	// (0x00069934) list_double_pane_g1_cp2

0xc303,	// (0x00069940) list_double_pane_g2_cp2

0xc30b,	// (0x00069948) list_double_pane_t1_cp2_ParamLimits

0xc30b,	// (0x00069948) list_double_pane_t1_cp2

0xc321,	// (0x0006995e) list_double_pane_t2_cp2_ParamLimits

0xc321,	// (0x0006995e) list_double_pane_t2_cp2

0xa262,	// (0x0006789f) list_single_pane_cp2_g3

0xbeda,	// (0x00069517) list_single_pane_g1_cp2_ParamLimits

0xbeda,	// (0x00069517) list_single_pane_g1_cp2

0xc35c,	// (0x00069999) list_single_pane_g2_cp2

0xc364,	// (0x000699a1) list_single_pane_t1_cp2_ParamLimits

0xc364,	// (0x000699a1) list_single_pane_t1_cp2

0xa26a,	// (0x000678a7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa26a,	// (0x000678a7) list_single_large_graphic_pane_g1_cp2

0xc37c,	// (0x000699b9) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc37c,	// (0x000699b9) list_single_large_graphic_pane_g2_cp2

0xc388,	// (0x000699c5) list_single_large_graphic_pane_g3_cp2

0xa276,	// (0x000678b3) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa276,	// (0x000678b3) list_single_large_graphic_pane_g4_cp1

0xc390,	// (0x000699cd) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc390,	// (0x000699cd) list_single_large_graphic_pane_t1_cp2

0x2be8,	// (0x00060225) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2be8,	// (0x00060225) list_single_graphic_heading_pane_g1_cp2

0x2bb5,	// (0x000601f2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2bb5,	// (0x000601f2) list_single_graphic_heading_pane_g4_cp2

0xc35c,	// (0x00069999) list_single_graphic_heading_pane_g5_cp2

0x2bf4,	// (0x00060231) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2bf4,	// (0x00060231) list_single_graphic_heading_pane_t1_cp2

0x2c0a,	// (0x00060247) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2c0a,	// (0x00060247) list_single_graphic_heading_pane_t2_cp2

0x2ba9,	// (0x000601e6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2ba9,	// (0x000601e6) list_single_2graphic_pane_g1_cp2

0x2bb5,	// (0x000601f2) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2bb5,	// (0x000601f2) list_single_2graphic_pane_g2_cp2

0xc35c,	// (0x00069999) list_single_2graphic_pane_g3_cp2

0x2bc6,	// (0x00060203) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2bc6,	// (0x00060203) list_single_2graphic_pane_g4_cp2

0x2bd2,	// (0x0006020f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2bd2,	// (0x0006020f) list_single_2graphic_pane_t1_cp2

0x6fa2,	// (0x000645df) list_highlight_pane_g10_cp1

0x2791,	// (0x0005fdce) list_highlight_pane_g1_cp1

0x2799,	// (0x0005fdd6) list_highlight_pane_g2_cp1

0x27a1,	// (0x0005fdde) list_highlight_pane_g3_cp1

0x27a9,	// (0x0005fde6) list_highlight_pane_g4_cp1

0x27b1,	// (0x0005fdee) list_highlight_pane_g5_cp1

0x27b9,	// (0x0005fdf6) list_highlight_pane_g6_cp1

0x27c1,	// (0x0005fdfe) list_highlight_pane_g7_cp1

0x27c9,	// (0x0005fe06) list_highlight_pane_g8_cp1

0x27d1,	// (0x0005fe0e) list_highlight_pane_g9_cp1

0xc6bd,	// (0x00069cfa) form_field_slider_pane_t3

0xc6cb,	// (0x00069d08) form_field_slider_pane_t4

0x26d5,	// (0x0005fd12) slider_form_pane_ParamLimits

0x26d5,	// (0x0005fd12) slider_form_pane

0x6fac,	// (0x000645e9) control_abbreviations

0x6fac,	// (0x000645e9) control_conventions

0x6fac,	// (0x000645e9) control_definitions

0x6fac,	// (0x000645e9) format_table_attribute

0xc8ff,	// (0x00069f3c) bg_popup_preview_window_pane_g9

0x6fac,	// (0x000645e9) format_table_data2

0x6fac,	// (0x000645e9) format_table_data3

0x6fac,	// (0x000645e9) format_table_data_example

0x0008,

0x6fac,	// (0x000645e9) intro_purpose

0xf8b4,	// (0x0006cef1) bg_popup_preview_window_pane_g

0x6fac,	// (0x000645e9) texts_category

0x6fac,	// (0x000645e9) texts_graphics

0xc3a6,	// (0x000699e3) text_digital

0xc3b5,	// (0x000699f2) text_primary

0xc3c4,	// (0x00069a01) text_primary_small

0xc3d3,	// (0x00069a10) text_secondary

0xc3e2,	// (0x00069a1f) text_title

0xcc6e,	// (0x0006a2ab) bg_passive_tab_pane_g1_cp3_srt

0xa1c2,	// (0x000677ff) bg_passive_tab_pane_g2_cp3_srt

0xcc77,	// (0x0006a2b4) bg_passive_tab_pane_g3_cp3_srt

0x7124,	// (0x00064761) bg_active_tab_pane_cp3_srt_ParamLimits

0x7124,	// (0x00064761) bg_active_tab_pane_cp3_srt

0xcc80,	// (0x0006a2bd) tabs_4_active_pane_srt_g1

0xcc88,	// (0x0006a2c5) tabs_4_active_pane_srt_t1_ParamLimits

0xcc88,	// (0x0006a2c5) tabs_4_active_pane_srt_t1

0xcc6e,	// (0x0006a2ab) bg_active_tab_pane_g1_cp3_copy1

0xa1c2,	// (0x000677ff) bg_active_tab_pane_g2_cp3_copy1

0xcc77,	// (0x0006a2b4) bg_active_tab_pane_g3_cp3_copy1

0x6ffa,	// (0x00064637) tabs_2_long_active_pane_srt_ParamLimits

0x6ffa,	// (0x00064637) tabs_2_long_active_pane_srt

0x6ffa,	// (0x00064637) tabs_2_long_passive_pane_srt_ParamLimits

0x6ffa,	// (0x00064637) tabs_2_long_passive_pane_srt

0x8434,	// (0x00065a71) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8434,	// (0x00065a71) bg_passive_tab_pane_cp4_srt

0xca1f,	// (0x0006a05c) bg_passive_tab_pane_g1_cp4_srt

0xa1c2,	// (0x000677ff) bg_passive_tab_pane_g2_cp4_srt

0xca28,	// (0x0006a065) bg_passive_tab_pane_g3_cp4_srt

0x6ffa,	// (0x00064637) bg_active_tab_pane_cp4_srt_ParamLimits

0x6ffa,	// (0x00064637) bg_active_tab_pane_cp4_srt

0xca31,	// (0x0006a06e) tabs_2_long_active_pane_srt_t1_ParamLimits

0xca31,	// (0x0006a06e) tabs_2_long_active_pane_srt_t1

0xca1f,	// (0x0006a05c) bg_active_tab_pane_g1_cp4_srt

0xa1c2,	// (0x000677ff) bg_active_tab_pane_g2_cp4_srt

0xca28,	// (0x0006a065) bg_active_tab_pane_g3_cp4_srt

0x7124,	// (0x00064761) tabs_3_long_active_pane_srt_ParamLimits

0x7124,	// (0x00064761) tabs_3_long_active_pane_srt

0x7124,	// (0x00064761) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7124,	// (0x00064761) tabs_3_long_passive_pane_cp_srt

0x7124,	// (0x00064761) tabs_3_long_passive_pane_srt_ParamLimits

0x7124,	// (0x00064761) tabs_3_long_passive_pane_srt

0x8434,	// (0x00065a71) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8434,	// (0x00065a71) bg_passive_tab_pane_cp5_srt

0xa20e,	// (0x0006784b) bg_passive_tab_pane_g1_cp5_srt

0xa1c2,	// (0x000677ff) bg_passive_tab_pane_g2_cp5_srt

0xa217,	// (0x00067854) bg_passive_tab_pane_g3_cp5_srt

0x6ffa,	// (0x00064637) bg_active_tab_pane_cp5_srt_ParamLimits

0x6ffa,	// (0x00064637) bg_active_tab_pane_cp5_srt

0xca09,	// (0x0006a046) tabs_3_long_active_pane_srt_t1_ParamLimits

0xca09,	// (0x0006a046) tabs_3_long_active_pane_srt_t1

0xa20e,	// (0x0006784b) bg_active_tab_pane_g1_cp5_srt

0xa1c2,	// (0x000677ff) bg_active_tab_pane_g2_cp5_srt

0xa217,	// (0x00067854) bg_active_tab_pane_g3_cp5_srt

0x329c,	// (0x000608d9) navi_text_pane_srt_t1

0x3294,	// (0x000608d1) navi_icon_pane_srt_g1

0xc4cd,	// (0x00069b0a) midp_editing_number_pane_srt

0xc3f1,	// (0x00069a2e) midp_ticker_pane_srt

0xc4d5,	// (0x00069b12) midp_ticker_pane_srt_g1

0xc4dd,	// (0x00069b1a) midp_ticker_pane_srt_g2

0x0001,

0xf743,	// (0x0006cd80) midp_ticker_pane_srt_g

0xc4e5,	// (0x00069b22) midp_ticker_pane_srt_t1

0x3285,	// (0x000608c2) midp_editing_number_pane_t1_copy1

0xa290,	// (0x000678cd) listscroll_midp_pane

0xa290,	// (0x000678cd) midp_form_pane

0xa2fb,	// (0x00067938) midp_info_popup_window_ParamLimits

0xa2fb,	// (0x00067938) midp_info_popup_window

0x8136,	// (0x00065773) bg_popup_sub_pane_cp50_ParamLimits

0x8136,	// (0x00065773) bg_popup_sub_pane_cp50

0x23c5,	// (0x0005fa02) listscroll_midp_info_pane_ParamLimits

0x23c5,	// (0x0005fa02) listscroll_midp_info_pane

0x23a5,	// (0x0005f9e2) listscroll_form_midp_pane_ParamLimits

0x23a5,	// (0x0005f9e2) listscroll_form_midp_pane

0x23b1,	// (0x0005f9ee) scroll_bar_cp050

0x23a5,	// (0x0005f9e2) list_midp_pane

0xce12,	// (0x0006a44f) signal_pane_g2_cp

0x22bf,	// (0x0005f8fc) listscroll_midp_info_pane_t1_ParamLimits

0x22bf,	// (0x0005f8fc) listscroll_midp_info_pane_t1

0xb31d,	// (0x0006895a) listscroll_midp_info_pane_t2_ParamLimits

0xb31d,	// (0x0006895a) listscroll_midp_info_pane_t2

0xb35b,	// (0x00068998) listscroll_midp_info_pane_t3_ParamLimits

0xb35b,	// (0x00068998) listscroll_midp_info_pane_t3

0xb395,	// (0x000689d2) listscroll_midp_info_pane_t4_ParamLimits

0xb395,	// (0x000689d2) listscroll_midp_info_pane_t4

0x0003,

0xf7ef,	// (0x0006ce2c) listscroll_midp_info_pane_t_ParamLimits

0xf7ef,	// (0x0006ce2c) listscroll_midp_info_pane_t

0x818b,	// (0x000657c8) scroll_pane_cp21

0x225f,	// (0x0005f89c) form_midp_field_choice_group_pane

0xb2e0,	// (0x0006891d) form_midp_field_text_pane

0x22a5,	// (0x0005f8e2) form_midp_field_time_pane

0x22ad,	// (0x0005f8ea) form_midp_gauge_slider_pane

0x22b6,	// (0x0005f8f3) form_midp_gauge_wait_pane

0x6fac,	// (0x000645e9) form_midp_image_pane

0xb2ca,	// (0x00068907) list_single_midp_pane_ParamLimits

0xb2ca,	// (0x00068907) list_single_midp_pane

0xb2a8,	// (0x000688e5) form_midp_field_text_pane_t1

0x1fde,	// (0x0005f61b) input_focus_pane_cp050

0x224e,	// (0x0005f88b) list_midp_form_text_pane

0x21e3,	// (0x0005f820) form_midp_field_choice_group_pane_t1

0x21f1,	// (0x0005f82e) input_focus_pane_cp051

0x2205,	// (0x0005f842) list_midp_choice_pane

0x6fac,	// (0x000645e9) status_idle_pane

0x21c7,	// (0x0005f804) form_midp_field_time_pane_t1

0x6fa2,	// (0x000645df) wait_anim_pane_g2_copy1

0x21d5,	// (0x0005f812) form_midp_field_time_pane_t2

0x0001,

0xc451,	// (0x00069a8e) aid_navinavi_width_2_pane

0xf7ea,	// (0x0006ce27) form_midp_field_time_pane_t

0x6fac,	// (0x000645e9) input_focus_pane_cp052

0x6fac,	// (0x000645e9) bg_input_focus_pane_cp040

0x2187,	// (0x0005f7c4) form_midp_gauge_slider_pane_t1

0x2195,	// (0x0005f7d2) form_midp_gauge_slider_pane_t2

0xb28c,	// (0x000688c9) form_midp_gauge_slider_pane_t3

0xb29a,	// (0x000688d7) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e1,	// (0x0006ce1e) form_midp_gauge_slider_pane_t

0x21bf,	// (0x0005f7fc) form_midp_slider_pane

0x6ffa,	// (0x00064637) bg_input_focus_pane_cp041_ParamLimits

0x6ffa,	// (0x00064637) bg_input_focus_pane_cp041

0x2154,	// (0x0005f791) form_midp_gauge_wait_pane_t1_ParamLimits

0x2154,	// (0x0005f791) form_midp_gauge_wait_pane_t1

0x2166,	// (0x0005f7a3) form_midp_gauge_wait_pane_t2_ParamLimits

0x2166,	// (0x0005f7a3) form_midp_gauge_wait_pane_t2

0x0001,

0xf7dc,	// (0x0006ce19) form_midp_gauge_wait_pane_t_ParamLimits

0xf7dc,	// (0x0006ce19) form_midp_gauge_wait_pane_t

0x2178,	// (0x0005f7b5) form_midp_wait_pane_ParamLimits

0x2178,	// (0x0005f7b5) form_midp_wait_pane

0xb256,	// (0x00068893) form_midp_image_pane_g1

0xb25f,	// (0x0006889c) form_midp_image_pane_t1

0xb26e,	// (0x000688ab) form_midp_image_pane_t2

0xb27d,	// (0x000688ba) form_midp_image_pane_t3

0x0002,

0xf7d5,	// (0x0006ce12) form_midp_image_pane_t

0x2115,	// (0x0005f752) list_single_midp_pane_g1

0xea9b,	// (0x0006c0d8) list_single_midp_pane_t1

0xb241,	// (0x0006887e) list_midp_form_item_pane_ParamLimits

0xb241,	// (0x0006887e) list_midp_form_item_pane

0xc3f9,	// (0x00069a36) list_midp_form_item_pane_t1

0xc408,	// (0x00069a45) midp_ticker_pane_g1

0xc414,	// (0x00069a51) midp_ticker_pane_g2

0x0001,

0xf729,	// (0x0006cd66) midp_ticker_pane_g

0xc420,	// (0x00069a5d) midp_ticker_pane_t1

0x34d2,	// (0x00060b0f) midp_editing_number_pane_t1

0x34b0,	// (0x00060aed) midp_editing_number_pane

0x34bf,	// (0x00060afc) midp_ticker_pane

0x3275,	// (0x000608b2) ai_message_heading_pane

0x6fac,	// (0x000645e9) bg_popup_window_pane_cp14

0x327d,	// (0x000608ba) listscroll_ai_message_pane

0x31ff,	// (0x0006083c) ai_message_heading_pane_g1_ParamLimits

0x31ff,	// (0x0006083c) ai_message_heading_pane_g1

0xc9d1,	// (0x0006a00e) ai_message_heading_pane_g2_ParamLimits

0xc9d1,	// (0x0006a00e) ai_message_heading_pane_g2

0x3217,	// (0x00060854) ai_message_heading_pane_g3_ParamLimits

0x3217,	// (0x00060854) ai_message_heading_pane_g3

0x3223,	// (0x00060860) ai_message_heading_pane_g4_ParamLimits

0x3223,	// (0x00060860) ai_message_heading_pane_g4

0x0003,

0xf916,	// (0x0006cf53) ai_message_heading_pane_g_ParamLimits

0xf916,	// (0x0006cf53) ai_message_heading_pane_g

0xc9dd,	// (0x0006a01a) ai_message_heading_pane_t1_ParamLimits

0xc9dd,	// (0x0006a01a) ai_message_heading_pane_t1

0xc9f7,	// (0x0006a034) ai_message_heading_pane_t2_ParamLimits

0xc9f7,	// (0x0006a034) ai_message_heading_pane_t2

0x0001,

0xf91f,	// (0x0006cf5c) ai_message_heading_pane_t_ParamLimits

0xf91f,	// (0x0006cf5c) ai_message_heading_pane_t

0x325b,	// (0x00060898) bg_popup_heading_pane_cp1_ParamLimits

0x325b,	// (0x00060898) bg_popup_heading_pane_cp1

0x31ed,	// (0x0006082a) list_ai_message_pane_ParamLimits

0x31ed,	// (0x0006082a) list_ai_message_pane

0x818b,	// (0x000657c8) scroll_pane_cp10

0xc9c9,	// (0x0006a006) list_ai_message_pane_g1

0x3191,	// (0x000607ce) list_ai_message_pane_g2

0x0001,

0xf8f3,	// (0x0006cf30) list_ai_message_pane_g

0x3199,	// (0x000607d6) list_ai_message_pane_t1_ParamLimits

0x3199,	// (0x000607d6) list_ai_message_pane_t1

0x31ae,	// (0x000607eb) list_ai_message_pane_t2_ParamLimits

0x31ae,	// (0x000607eb) list_ai_message_pane_t2

0x31c3,	// (0x00060800) list_ai_message_pane_t3_ParamLimits

0x31c3,	// (0x00060800) list_ai_message_pane_t3

0x31d8,	// (0x00060815) list_ai_message_pane_t4_ParamLimits

0x31d8,	// (0x00060815) list_ai_message_pane_t4

0x0003,

0xf8f8,	// (0x0006cf35) list_ai_message_pane_t_ParamLimits

0xf8f8,	// (0x0006cf35) list_ai_message_pane_t

0xc9a5,	// (0x00069fe2) cell_ai_soft_ind_pane_ParamLimits

0xc9a5,	// (0x00069fe2) cell_ai_soft_ind_pane

0xc432,	// (0x00069a6f) cell_ai_soft_ind_pane_g1_ParamLimits

0xc432,	// (0x00069a6f) cell_ai_soft_ind_pane_g1

0x6fac,	// (0x000645e9) grid_highlight_cp1

0xc43f,	// (0x00069a7c) text_secondary_cp56_ParamLimits

0xc43f,	// (0x00069a7c) text_secondary_cp56

0x3149,	// (0x00060786) example_general_pane_ParamLimits

0x3149,	// (0x00060786) example_general_pane

0x3155,	// (0x00060792) example_parent_pane_g1_ParamLimits

0x3155,	// (0x00060792) example_parent_pane_g1

0x3161,	// (0x0006079e) example_parent_pane_t1_ParamLimits

0x3161,	// (0x0006079e) example_parent_pane_t1

0xa9c5,	// (0x00068002) popup_preview_text_window_ParamLimits

0xa9c5,	// (0x00068002) popup_preview_text_window

0xc354,	// (0x00069991) list_single_pane_cp2_g4

0x71da,	// (0x00064817) bg_popup_preview_window_pane_ParamLimits

0x71da,	// (0x00064817) bg_popup_preview_window_pane

0xc907,	// (0x00069f44) popup_preview_text_window_t1_ParamLimits

0xc907,	// (0x00069f44) popup_preview_text_window_t1

0x2ec1,	// (0x000604fe) popup_preview_text_window_t2_ParamLimits

0x2ec1,	// (0x000604fe) popup_preview_text_window_t2

0x2f0a,	// (0x00060547) popup_preview_text_window_t3_ParamLimits

0x2f0a,	// (0x00060547) popup_preview_text_window_t3

0x2f4f,	// (0x0006058c) popup_preview_text_window_t4_ParamLimits

0x2f4f,	// (0x0006058c) popup_preview_text_window_t4

0x0004,

0xf8c7,	// (0x0006cf04) popup_preview_text_window_t_ParamLimits

0xf8c7,	// (0x0006cf04) popup_preview_text_window_t

0x2fcd,	// (0x0006060a) scroll_pane_cp11

0x1f52,	// (0x0005f58f) bg_popup_preview_window_pane_g1

0xc8c7,	// (0x00069f04) bg_popup_preview_window_pane_g2

0xc8cf,	// (0x00069f0c) bg_popup_preview_window_pane_g3

0xc8d7,	// (0x00069f14) bg_popup_preview_window_pane_g4

0xc8df,	// (0x00069f1c) bg_popup_preview_window_pane_g5

0xc8e7,	// (0x00069f24) bg_popup_preview_window_pane_g6

0xc8ef,	// (0x00069f2c) bg_popup_preview_window_pane_g7

0xc8f7,	// (0x00069f34) bg_popup_preview_window_pane_g8

0xe793,	// (0x0006bdd0) aid_popup_width_pane

0xa941,	// (0x00067f7e) popup_midp_note_alarm_window_ParamLimits

0xa941,	// (0x00067f7e) popup_midp_note_alarm_window

0x804d,	// (0x0006568a) data_form_pane_ParamLimits

0x9c88,	// (0x000672c5) form_field_data_pane_g1

0x9c92,	// (0x000672cf) form_field_data_pane_t1_ParamLimits

0x8059,	// (0x00065696) input_focus_pane_ParamLimits

0xe847,	// (0x0006be84) data_form_wide_pane_ParamLimits

0xe858,	// (0x0006be95) form_field_data_wide_pane_g1

0xe864,	// (0x0006bea1) form_field_data_wide_pane_t1_ParamLimits

0x7f4d,	// (0x0006558a) input_focus_pane_cp6_ParamLimits

0x9e04,	// (0x00067441) input_popup_find_pane_g1_ParamLimits

0x9e04,	// (0x00067441) input_popup_find_pane_g1

0xf17d,	// (0x0006c7ba) aid_navi_side_left_pane

0xf192,	// (0x0006c7cf) aid_navi_side_right_pane

0x288c,	// (0x0005fec9) bg_popup_window_pane_cp30_ParamLimits

0x288c,	// (0x0005fec9) bg_popup_window_pane_cp30

0x2906,	// (0x0005ff43) popup_midp_note_alarm_window_g1_ParamLimits

0x2906,	// (0x0005ff43) popup_midp_note_alarm_window_g1

0x2936,	// (0x0005ff73) popup_midp_note_alarm_window_t1_ParamLimits

0x2936,	// (0x0005ff73) popup_midp_note_alarm_window_t1

0xc710,	// (0x00069d4d) popup_midp_note_alarm_window_t2_ParamLimits

0xc710,	// (0x00069d4d) popup_midp_note_alarm_window_t2

0xc7be,	// (0x00069dfb) popup_midp_note_alarm_window_t3_ParamLimits

0xc7be,	// (0x00069dfb) popup_midp_note_alarm_window_t3

0xc7e6,	// (0x00069e23) popup_midp_note_alarm_window_t4_ParamLimits

0xc7e6,	// (0x00069e23) popup_midp_note_alarm_window_t4

0x2acd,	// (0x0006010a) popup_midp_note_alarm_window_t5_ParamLimits

0x2acd,	// (0x0006010a) popup_midp_note_alarm_window_t5

0x000a,

0xf864,	// (0x0006cea1) popup_midp_note_alarm_window_t_ParamLimits

0xf864,	// (0x0006cea1) popup_midp_note_alarm_window_t

0x2b79,	// (0x000601b6) wait_bar_pane_cp1_ParamLimits

0x2b79,	// (0x000601b6) wait_bar_pane_cp1

0x6fac,	// (0x000645e9) wait_anim_pane_copy1

0x6fac,	// (0x000645e9) wait_border_pane_copy1

0x2582,	// (0x0005fbbf) wait_border_pane_g1_copy1

0xe87e,	// (0x0006bebb) form_field_popup_pane_g1

0x9cac,	// (0x000672e9) form_field_popup_pane_t1_ParamLimits

0x8059,	// (0x00065696) input_focus_pane_cp7_ParamLimits

0x8087,	// (0x000656c4) list_form_pane_ParamLimits

0xe886,	// (0x0006bec3) form_field_popup_wide_pane_g1

0xe88e,	// (0x0006becb) form_field_popup_wide_pane_t1_ParamLimits

0x8059,	// (0x00065696) input_focus_pane_cp8_ParamLimits

0x8093,	// (0x000656d0) list_form_wide_pane_ParamLimits

0x36b8,	// (0x00060cf5) aid_size_cell_graphic_pane

0x9d2b,	// (0x00067368) data_form_pane_t1_ParamLimits

0xb4a1,	// (0x00068ade) data_form_wide_pane_t1_ParamLimits

0xae08,	// (0x00068445) bg_status_flat_pane

0x9204,	// (0x00066841) title_pane_t1_ParamLimits

0x6fc2,	// (0x000645ff) title_pane_t2_ParamLimits

0x6fe8,	// (0x00064625) title_pane_t3_ParamLimits

0xf532,	// (0x0006cb6f) title_pane_t_ParamLimits

0xbf28,	// (0x00069565) level_1_signal_ParamLimits

0xbf35,	// (0x00069572) level_2_signal_ParamLimits

0xbf42,	// (0x0006957f) level_3_signal_ParamLimits

0xbf4f,	// (0x0006958c) level_4_signal_ParamLimits

0xbf5c,	// (0x00069599) level_5_signal_ParamLimits

0xbf69,	// (0x000695a6) level_6_signal_ParamLimits

0xbf76,	// (0x000695b3) level_7_signal_ParamLimits

0xbf28,	// (0x00069565) level_1_battery_ParamLimits

0xbf35,	// (0x00069572) level_2_battery_ParamLimits

0xbf42,	// (0x0006957f) level_3_battery_ParamLimits

0xbf4f,	// (0x0006958c) level_4_battery_ParamLimits

0xbf5c,	// (0x00069599) level_5_battery_ParamLimits

0xbf69,	// (0x000695a6) level_6_battery_ParamLimits

0xbf76,	// (0x000695b3) level_7_battery_ParamLimits

0x2791,	// (0x0005fdce) bg_status_flat_pane_g1

0x2799,	// (0x0005fdd6) bg_status_flat_pane_g2

0x27a1,	// (0x0005fdde) bg_status_flat_pane_g3

0x27a9,	// (0x0005fde6) bg_status_flat_pane_g4

0x27b1,	// (0x0005fdee) bg_status_flat_pane_g5

0x27b9,	// (0x0005fdf6) bg_status_flat_pane_g6

0x27c1,	// (0x0005fdfe) bg_status_flat_pane_g7

0x9298,	// (0x000668d5) tabs_3_active_pane_t1_ParamLimits

0x9298,	// (0x000668d5) tabs_3_passive_pane_t1_ParamLimits

0x92b2,	// (0x000668ef) tabs_4_active_pane_t1_ParamLimits

0x92b2,	// (0x000668ef) tabs_4_1_passive_pane_t1_ParamLimits

0x9e43,	// (0x00067480) tabs_2_active_pane_t1_ParamLimits

0x9e43,	// (0x00067480) tabs_2_passive_pane_t1_ParamLimits

0x6ffa,	// (0x00064637) bg_active_tab_pane_cp4_ParamLimits

0x9e55,	// (0x00067492) tabs_2_long_active_pane_t1_ParamLimits

0x8434,	// (0x00065a71) bg_passive_tab_pane_cp4_ParamLimits

0x0601,	// (0x0005dc3e) list_single_midp_graphic_pane_t1_ParamLimits

0x6ffa,	// (0x00064637) bg_active_tab_pane_cp5_ParamLimits

0x9e68,	// (0x000674a5) tabs_3_long_active_pane_t1_ParamLimits

0x8434,	// (0x00065a71) bg_passive_tab_pane_cp5_ParamLimits

0x0601,	// (0x0005dc3e) list_single_midp_graphic_pane_t1

0xae08,	// (0x00068445) bg_status_flat_pane_ParamLimits

0x03c9,	// (0x0005da06) indicator_pane_cp2_ParamLimits

0x03c9,	// (0x0005da06) indicator_pane_cp2

0xaf86,	// (0x000685c3) navi_pane_srt_ParamLimits

0xaf86,	// (0x000685c3) navi_pane_srt

0x0518,	// (0x0005db55) popup_clock_digital_analogue_window_cp1

0x703e,	// (0x0006467b) indicator_pane_t1

0xc3f1,	// (0x00069a2e) copy_highlight_pane

0xc3f1,	// (0x00069a2e) cursor_graphics_pane

0xc3f1,	// (0x00069a2e) graphic_within_text_pane

0xc3f1,	// (0x00069a2e) link_highlight_pane

0x2f90,	// (0x000605cd) popup_preview_text_window_t5_ParamLimits

0x2f90,	// (0x000605cd) popup_preview_text_window_t5

0xc459,	// (0x00069a96) cursor_digital_pane

0xc459,	// (0x00069a96) cursor_primary_pane

0xc46a,	// (0x00069aa7) cursor_primary_small_pane

0xc472,	// (0x00069aaf) cursor_secondary_pane

0xc47a,	// (0x00069ab7) cursor_title_pane

0xc459,	// (0x00069a96) link_highlight_digital_pane

0xc461,	// (0x00069a9e) link_highlight_primary_pane

0xc46a,	// (0x00069aa7) link_highlight_primary_small_pane

0xc472,	// (0x00069aaf) link_highlight_secondary_pane

0xc47a,	// (0x00069ab7) link_highlight_title_pane

0xc459,	// (0x00069a96) copy_highlight_digital_pane

0xc459,	// (0x00069a96) copy_highlight_primary_pane

0xc46a,	// (0x00069aa7) copy_highlight_primary_small_pane

0xc472,	// (0x00069aaf) copy_highlight_secondary_pane

0xc47a,	// (0x00069ab7) copy_highlight_title_pane

0xc472,	// (0x00069aaf) graphic_text_digital_pane

0x282f,	// (0x0005fe6c) graphic_text_primary_pane

0x2838,	// (0x0005fe75) graphic_text_primary_small_pane

0xc46a,	// (0x00069aa7) graphic_text_secondary_pane

0xc459,	// (0x00069a96) graphic_text_title_pane

0xa34c,	// (0x00067989) cursor_primary_pane_g1

0x2821,	// (0x0005fe5e) cursor_text_primary_t1

0xc706,	// (0x00069d43) cursor_primary_small_pane_g1

0x2813,	// (0x0005fe50) cursor_text_primary_small_t1

0xc6fc,	// (0x00069d39) cursor_primary_small_pane_g1_copy1

0x27fb,	// (0x0005fe38) cursor_text_primary_small_t1_copy1

0x27d9,	// (0x0005fe16) cursor_text_title_t1

0xc6f2,	// (0x00069d2f) cursor_title_pane_g1

0xa34c,	// (0x00067989) cursor_digital_pane_g1

0xc482,	// (0x00069abf) cursor_text_digital_t1

0xc490,	// (0x00069acd) link_highlight_primary_pane_g1

0x2782,	// (0x0005fdbf) link_highlight_primary_pane_t1

0xc490,	// (0x00069acd) link_highlight_primary_small_pane_g1

0xc498,	// (0x00069ad5) link_highlight_primary_small_pane_t1

0xc490,	// (0x00069acd) link_highlight_secondary_pane_g1

0xc4a7,	// (0x00069ae4) link_highlight_secondary_pane_t1

0x26e7,	// (0x0005fd24) link_highlight_title_pane_g1

0x26fe,	// (0x0005fd3b) link_highlight_title_pane_t1

0x26e7,	// (0x0005fd24) link_highlight_digital_pane_g1

0x26ef,	// (0x0005fd2c) link_highlight_digital_pane_t1

0x25a1,	// (0x0005fbde) copy_highlight_primary_pane_g1

0x25c7,	// (0x0005fc04) copy_highlight_primary_pane_t1

0x25a1,	// (0x0005fbde) copy_highlight_primary_small_pane_g1

0x25b8,	// (0x0005fbf5) copy_highlight_primary_small_pane_t1

0xc4b6,	// (0x00069af3) copy_highlight_secondary_pane_g1

0xc4be,	// (0x00069afb) copy_highlight_secondary_pane_t1

0x25a1,	// (0x0005fbde) copy_highlight_title_pane_g1

0x25a9,	// (0x0005fbe6) copy_highlight_title_pane_t1

0x25a1,	// (0x0005fbde) copy_highlight_digital_pane_g1

0x3886,	// (0x00060ec3) copy_highlight_digital_pane_t1

0x37da,	// (0x00060e17) graphic_text_primary_pane_g1

0x386a,	// (0x00060ea7) graphic_text_primary_pane_t1

0x3878,	// (0x00060eb5) graphic_text_primary_pane_t2

0x0001,

0xf993,	// (0x0006cfd0) graphic_text_primary_pane_t

0x3846,	// (0x00060e83) graphic_text_primary_small_pane_g1

0x384e,	// (0x00060e8b) graphic_text_primary_small_pane_t1

0x385c,	// (0x00060e99) graphic_text_primary_small_pane_t2

0x0001,

0xf98e,	// (0x0006cfcb) graphic_text_primary_small_pane_t

0x3822,	// (0x00060e5f) graphic_text_secondary_pane_g1

0x382a,	// (0x00060e67) graphic_text_secondary_pane_t1

0x3838,	// (0x00060e75) graphic_text_secondary_pane_t2

0x0001,

0xf989,	// (0x0006cfc6) graphic_text_secondary_pane_t

0x37fe,	// (0x00060e3b) graphic_text_title_pane_g1

0x3806,	// (0x00060e43) graphic_text_title_pane_t1

0x3814,	// (0x00060e51) graphic_text_title_pane_t2

0x0001,

0xf984,	// (0x0006cfc1) graphic_text_title_pane_t

0x37da,	// (0x00060e17) graphic_text_digital_pane_g1

0x37e2,	// (0x00060e1f) graphic_text_digital_pane_t1

0x37f0,	// (0x00060e2d) graphic_text_digital_pane_t2

0x0001,

0xf97f,	// (0x0006cfbc) graphic_text_digital_pane_t

0x6ffa,	// (0x00064637) navi_icon_pane_srt_ParamLimits

0x6ffa,	// (0x00064637) navi_icon_pane_srt

0x6fac,	// (0x000645e9) navi_midp_pane_srt

0x6fac,	// (0x000645e9) navi_navi_pane_srt

0x6ffa,	// (0x00064637) navi_text_pane_srt_ParamLimits

0x6ffa,	// (0x00064637) navi_text_pane_srt

0x37a5,	// (0x00060de2) navi_navi_icon_text_pane_srt

0x37ad,	// (0x00060dea) navi_navi_pane_srt_g1_ParamLimits

0x37ad,	// (0x00060dea) navi_navi_pane_srt_g1

0x37bf,	// (0x00060dfc) navi_navi_pane_srt_g2_ParamLimits

0x37bf,	// (0x00060dfc) navi_navi_pane_srt_g2

0x0001,

0xf97a,	// (0x0006cfb7) navi_navi_pane_srt_g_ParamLimits

0xf97a,	// (0x0006cfb7) navi_navi_pane_srt_g

0x37d1,	// (0x00060e0e) navi_navi_tabs_pane_srt

0x37a5,	// (0x00060de2) navi_navi_text_pane_srt

0x37a5,	// (0x00060de2) navi_navi_volume_pane_srt

0x3796,	// (0x00060dd3) navi_navi_text_pane_srt_t1

0x0a7d,	// (0x0005e0ba) navi_navi_volume_pane_srt_g1

0x0a85,	// (0x0005e0c2) volume_small_pane_srt_ParamLimits

0x0a85,	// (0x0005e0c2) volume_small_pane_srt

0xf3fd,	// (0x0006ca3a) volume_small_pane_srt_g1_ParamLimits

0xf3fd,	// (0x0006ca3a) volume_small_pane_srt_g1

0xf40d,	// (0x0006ca4a) volume_small_pane_srt_g2_ParamLimits

0xf40d,	// (0x0006ca4a) volume_small_pane_srt_g2

0xf41e,	// (0x0006ca5b) volume_small_pane_srt_g3_ParamLimits

0xf41e,	// (0x0006ca5b) volume_small_pane_srt_g3

0xf42f,	// (0x0006ca6c) volume_small_pane_srt_g4_ParamLimits

0xf42f,	// (0x0006ca6c) volume_small_pane_srt_g4

0xf440,	// (0x0006ca7d) volume_small_pane_srt_g5_ParamLimits

0xf440,	// (0x0006ca7d) volume_small_pane_srt_g5

0xf451,	// (0x0006ca8e) volume_small_pane_srt_g6_ParamLimits

0xf451,	// (0x0006ca8e) volume_small_pane_srt_g6

0xf462,	// (0x0006ca9f) volume_small_pane_srt_g7_ParamLimits

0xf462,	// (0x0006ca9f) volume_small_pane_srt_g7

0xf473,	// (0x0006cab0) volume_small_pane_srt_g8_ParamLimits

0xf473,	// (0x0006cab0) volume_small_pane_srt_g8

0xf484,	// (0x0006cac1) volume_small_pane_srt_g9_ParamLimits

0xf484,	// (0x0006cac1) volume_small_pane_srt_g9

0xf495,	// (0x0006cad2) volume_small_pane_srt_g10_ParamLimits

0xf495,	// (0x0006cad2) volume_small_pane_srt_g10

0x0009,

0xf72e,	// (0x0006cd6b) volume_small_pane_srt_g_ParamLimits

0xf72e,	// (0x0006cd6b) volume_small_pane_srt_g

0x9599,	// (0x00066bd6) query_popup_data_pane_cp2

0x377c,	// (0x00060db9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x377c,	// (0x00060db9) navi_navi_icon_text_pane_srt_t1

0x282f,	// (0x0005fe6c) navi_tabs_2_long_pane_srt

0x282f,	// (0x0005fe6c) navi_tabs_2_pane_srt

0x282f,	// (0x0005fe6c) navi_tabs_3_long_pane_srt

0x282f,	// (0x0005fe6c) navi_tabs_3_pane_srt

0x282f,	// (0x0005fe6c) navi_tabs_4_pane_srt

0xb53c,	// (0x00068b79) tabs_2_active_pane_srt_ParamLimits

0xb53c,	// (0x00068b79) tabs_2_active_pane_srt

0xb54c,	// (0x00068b89) tabs_2_passive_pane_srt_ParamLimits

0xb54c,	// (0x00068b89) tabs_2_passive_pane_srt

0x1fde,	// (0x0005f61b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1fde,	// (0x0005f61b) bg_passive_tab_pane_cp1_srt

0xcd11,	// (0x0006a34e) bg_passive_tab_pane_g1_cp1_srt

0xa1c2,	// (0x000677ff) bg_passive_tab_pane_g2_cp1_srt

0xcd1a,	// (0x0006a357) bg_passive_tab_pane_g3_cp1_srt

0x7124,	// (0x00064761) bg_active_tab_pane_cp1_srt_ParamLimits

0x7124,	// (0x00064761) bg_active_tab_pane_cp1_srt

0xcd23,	// (0x0006a360) tabs_2_active_pane_srt_g1

0xcd2b,	// (0x0006a368) tabs_2_active_pane_srt_t1_ParamLimits

0xcd2b,	// (0x0006a368) tabs_2_active_pane_srt_t1

0xcd11,	// (0x0006a34e) bg_active_tab_pane_g1_cp1_srt

0xa1c2,	// (0x000677ff) bg_active_tab_pane_g2_cp1_srt

0xcd1a,	// (0x0006a357) bg_active_tab_pane_g3_cp1_srt

0xb509,	// (0x00068b46) tabs_3_active_pane_srt_ParamLimits

0xb509,	// (0x00068b46) tabs_3_active_pane_srt

0xb51a,	// (0x00068b57) tabs_3_passive_pane_cp_srt_ParamLimits

0xb51a,	// (0x00068b57) tabs_3_passive_pane_cp_srt

0xb52b,	// (0x00068b68) tabs_3_passive_pane_srt_ParamLimits

0xb52b,	// (0x00068b68) tabs_3_passive_pane_srt

0x1fde,	// (0x0005f61b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1fde,	// (0x0005f61b) bg_passive_tab_pane_cp2_srt

0xa356,	// (0x00067993) bg_passive_tab_pane_g1_cp2_srt

0xa1c2,	// (0x000677ff) bg_passive_tab_pane_g2_cp2_srt

0xa35f,	// (0x0006799c) bg_passive_tab_pane_g3_cp2_srt

0x7124,	// (0x00064761) bg_active_tab_pane_cp2_srt_ParamLimits

0x7124,	// (0x00064761) bg_active_tab_pane_cp2_srt

0xccf3,	// (0x0006a330) tabs_3_active_pane_srt_g1

0xccfb,	// (0x0006a338) tabs_3_active_pane_srt_t1_ParamLimits

0xccfb,	// (0x0006a338) tabs_3_active_pane_srt_t1

0xa356,	// (0x00067993) bg_active_tab_pane_g1_cp2_srt

0xa1c2,	// (0x000677ff) bg_active_tab_pane_g2_cp2_srt

0xa35f,	// (0x0006799c) bg_active_tab_pane_g3_cp2_srt

0x09e2,	// (0x0005e01f) tabs_4_active_pane_srt_ParamLimits

0x09e2,	// (0x0005e01f) tabs_4_active_pane_srt

0x09f4,	// (0x0005e031) tabs_4_passive_pane_cp2_srt_ParamLimits

0x09f4,	// (0x0005e031) tabs_4_passive_pane_cp2_srt

0xf4b5,	// (0x0006caf2) aid_size_cell_toolbar

0x332d,	// (0x0006096a) main_idle_act_pane_ParamLimits

0xf503,	// (0x0006cb40) popup_large_graphic_colour_window_ParamLimits

0xac77,	// (0x000682b4) popup_toolbar_window_ParamLimits

0xac77,	// (0x000682b4) popup_toolbar_window

0x34fd,	// (0x00060b3a) list_single_graphic_2heading_pane_ParamLimits

0x34fd,	// (0x00060b3a) list_single_graphic_2heading_pane

0x831c,	// (0x00065959) aid_size_cell_apps_grid_lsc_pane

0x832e,	// (0x0006596b) aid_size_cell_apps_grid_prt_pane

0x8434,	// (0x00065a71) bg_wml_button_pane_cp1_ParamLimits

0x8434,	// (0x00065a71) bg_wml_button_pane_cp1

0xb2a8,	// (0x000688e5) form_midp_field_text_pane_t1_ParamLimits

0x1fde,	// (0x0005f61b) input_focus_pane_cp050_ParamLimits

0x224e,	// (0x0005f88b) list_midp_form_text_pane_ParamLimits

0x21f1,	// (0x0005f82e) input_focus_pane_cp051_ParamLimits

0x2205,	// (0x0005f842) list_midp_choice_pane_ParamLimits

0xb20d,	// (0x0006884a) list_single_2graphic_pane_cp3_ParamLimits

0xb20d,	// (0x0006884a) list_single_2graphic_pane_cp3

0xb221,	// (0x0006885e) list_single_midp_graphic_pane_ParamLimits

0xb221,	// (0x0006885e) list_single_midp_graphic_pane

0xe99f,	// (0x0006bfdc) list_single_graphic_2heading_pane_g1_ParamLimits

0xe99f,	// (0x0006bfdc) list_single_graphic_2heading_pane_g1

0xe9ab,	// (0x0006bfe8) list_single_graphic_2heading_pane_g4_ParamLimits

0xe9ab,	// (0x0006bfe8) list_single_graphic_2heading_pane_g4

0xe9b7,	// (0x0006bff4) list_single_graphic_2heading_pane_g5_ParamLimits

0xe9b7,	// (0x0006bff4) list_single_graphic_2heading_pane_g5

0x0002,

0xf781,	// (0x0006cdbe) list_single_graphic_2heading_pane_g_ParamLimits

0xf781,	// (0x0006cdbe) list_single_graphic_2heading_pane_g

0xe9c3,	// (0x0006c000) list_single_graphic_2heading_pane_t1_ParamLimits

0xe9c3,	// (0x0006c000) list_single_graphic_2heading_pane_t1

0xe9d7,	// (0x0006c014) list_single_graphic_2heading_pane_t2_ParamLimits

0xe9d7,	// (0x0006c014) list_single_graphic_2heading_pane_t2

0xe9f1,	// (0x0006c02e) list_single_graphic_2heading_pane_t3_ParamLimits

0xe9f1,	// (0x0006c02e) list_single_graphic_2heading_pane_t3

0x0002,

0xf788,	// (0x0006cdc5) list_single_graphic_2heading_pane_t_ParamLimits

0xf788,	// (0x0006cdc5) list_single_graphic_2heading_pane_t

0x1e90,	// (0x0005f4cd) bg_popup_sub_pane_cp2

0x1eba,	// (0x0005f4f7) grid_toobar_pane

0x0564,	// (0x0005dba1) cell_toolbar_pane_ParamLimits

0x0564,	// (0x0005dba1) cell_toolbar_pane

0x1ef6,	// (0x0005f533) cell_toolbar_pane_g1_ParamLimits

0x1ef6,	// (0x0005f533) cell_toolbar_pane_g1

0xb125,	// (0x00068762) cell_toolbar_pane_g2_ParamLimits

0xb125,	// (0x00068762) cell_toolbar_pane_g2

0x0001,

0xf78f,	// (0x0006cdcc) cell_toolbar_pane_g_ParamLimits

0xf78f,	// (0x0006cdcc) cell_toolbar_pane_g

0x1f2c,	// (0x0005f569) grid_highlight_pane_cp2_ParamLimits

0x1f2c,	// (0x0005f569) grid_highlight_pane_cp2

0x1f46,	// (0x0005f583) toolbar_button_pane

0x1f52,	// (0x0005f58f) toolbar_button_pane_g1

0x1f5a,	// (0x0005f597) toolbar_button_pane_g2

0x1f62,	// (0x0005f59f) toolbar_button_pane_g3

0x1f6a,	// (0x0005f5a7) toolbar_button_pane_g4

0x1f72,	// (0x0005f5af) toolbar_button_pane_g5

0x1f7a,	// (0x0005f5b7) toolbar_button_pane_g6

0x1f82,	// (0x0005f5bf) toolbar_button_pane_g7

0x1f8a,	// (0x0005f5c7) toolbar_button_pane_g8

0x1f92,	// (0x0005f5cf) toolbar_button_pane_g9

0x0009,

0xf794,	// (0x0006cdd1) toolbar_button_pane_g

0x05a8,	// (0x0005dbe5) list_single_2graphic_pane_g1_cp3_ParamLimits

0x05a8,	// (0x0005dbe5) list_single_2graphic_pane_g1_cp3

0xb139,	// (0x00068776) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb139,	// (0x00068776) list_single_2graphic_pane_g2_cp3

0x05c5,	// (0x0005dc02) list_single_2graphic_pane_g3_cp3

0x05cd,	// (0x0005dc0a) list_single_2graphic_pane_g4_cp3_ParamLimits

0x05cd,	// (0x0005dc0a) list_single_2graphic_pane_g4_cp3

0xb14a,	// (0x00068787) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb14a,	// (0x00068787) list_single_2graphic_pane_t1_cp3

0x05f5,	// (0x0005dc32) list_single_midp_graphic_pane_g2_ParamLimits

0x05f5,	// (0x0005dc32) list_single_midp_graphic_pane_g2

0xe98f,	// (0x0006bfcc) aid_zoom_text_primary

0xf4bd,	// (0x0006cafa) aid_zoom_text_secondary

0xc533,	// (0x00069b70) status_small_pane_g7_ParamLimits

0xc533,	// (0x00069b70) status_small_pane_g7

0xa3bb,	// (0x000679f8) status_small_pane_t1_ParamLimits

0x91e0,	// (0x0006681d) title_pane_g2

0x0003,

0xf529,	// (0x0006cb66) title_pane_g

0x95f3,	// (0x00066c30) aid_size_cell_colour_1_pane_ParamLimits

0x95f3,	// (0x00066c30) aid_size_cell_colour_1_pane

0x9607,	// (0x00066c44) aid_size_cell_colour_2_pane_ParamLimits

0x9607,	// (0x00066c44) aid_size_cell_colour_2_pane

0x961b,	// (0x00066c58) aid_size_cell_colour_3_pane_ParamLimits

0x961b,	// (0x00066c58) aid_size_cell_colour_3_pane

0x962f,	// (0x00066c6c) aid_size_cell_colour_4_pane_ParamLimits

0x962f,	// (0x00066c6c) aid_size_cell_colour_4_pane

0xe8f0,	// (0x0006bf2d) title_pane_stacon_g1_ParamLimits

0xe8f0,	// (0x0006bf2d) title_pane_stacon_g1

0x261e,	// (0x0005fc5b) popup_note_wait_window_g3_ParamLimits

0x261e,	// (0x0005fc5b) popup_note_wait_window_g3

0x2694,	// (0x0005fcd1) popup_note_wait_window_t5_ParamLimits

0x2694,	// (0x0005fcd1) popup_note_wait_window_t5

0x6fac,	// (0x000645e9) main_feb_china_hwr_fs_writing_pane

0xa62b,	// (0x00067c68) popup_feb_china_hwr_fs_window_ParamLimits

0xa62b,	// (0x00067c68) popup_feb_china_hwr_fs_window

0xb166,	// (0x000687a3) aid_size_cell_hwr_fs_ParamLimits

0xb166,	// (0x000687a3) aid_size_cell_hwr_fs

0x1fde,	// (0x0005f61b) bg_popup_sub_pane_cp3_ParamLimits

0x1fde,	// (0x0005f61b) bg_popup_sub_pane_cp3

0xb17b,	// (0x000687b8) grid_hwr_fs_pane_ParamLimits

0xb17b,	// (0x000687b8) grid_hwr_fs_pane

0x0644,	// (0x0005dc81) linegrid_hwr_fs_pane_ParamLimits

0x0644,	// (0x0005dc81) linegrid_hwr_fs_pane

0xb193,	// (0x000687d0) cell_hwr_fs_pane_ParamLimits

0xb193,	// (0x000687d0) cell_hwr_fs_pane

0x1fea,	// (0x0005f627) linegrid_hwr_fs_pane_g1_ParamLimits

0x1fea,	// (0x0005f627) linegrid_hwr_fs_pane_g1

0xb1b9,	// (0x000687f6) linegrid_hwr_fs_pane_g2_ParamLimits

0xb1b9,	// (0x000687f6) linegrid_hwr_fs_pane_g2

0x2008,	// (0x0005f645) linegrid_hwr_fs_pane_g3_ParamLimits

0x2008,	// (0x0005f645) linegrid_hwr_fs_pane_g3

0xb1cb,	// (0x00068808) linegrid_hwr_fs_pane_g4_ParamLimits

0xb1cb,	// (0x00068808) linegrid_hwr_fs_pane_g4

0x0690,	// (0x0005dccd) linegrid_hwr_fs_pane_g5_ParamLimits

0x0690,	// (0x0005dccd) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ba,	// (0x0006cdf7) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ba,	// (0x0006cdf7) linegrid_hwr_fs_pane_g

0x2014,	// (0x0005f651) cell_hwr_fs_pane_g1_ParamLimits

0x2014,	// (0x0005f651) cell_hwr_fs_pane_g1

0x1dca,	// (0x0005f407) cell_hwr_fs_pane_g2_ParamLimits

0x1dca,	// (0x0005f407) cell_hwr_fs_pane_g2

0xb1e5,	// (0x00068822) cell_hwr_fs_pane_g3_ParamLimits

0xb1e5,	// (0x00068822) cell_hwr_fs_pane_g3

0xb1f2,	// (0x0006882f) cell_hwr_fs_pane_g4_ParamLimits

0xb1f2,	// (0x0006882f) cell_hwr_fs_pane_g4

0x0003,

0xf7c5,	// (0x0006ce02) cell_hwr_fs_pane_g_ParamLimits

0xf7c5,	// (0x0006ce02) cell_hwr_fs_pane_g

0xb1ff,	// (0x0006883c) cell_hwr_fs_pane_t1

0x6fac,	// (0x000645e9) grid_highlight_pane_cp6

0x6fac,	// (0x000645e9) main_idle_act2_pane

0x8172,	// (0x000657af) aid_inside_area_popup_secondary

0xc825,	// (0x00069e62) aid_inside_area_window_primary_ParamLimits

0xc825,	// (0x00069e62) aid_inside_area_window_primary

0xcd49,	// (0x0006a386) ai2_news_ticker_pane

0x389d,	// (0x00060eda) aid_size_cell_ai1_link_ParamLimits

0x389d,	// (0x00060eda) aid_size_cell_ai1_link

0xcd51,	// (0x0006a38e) popup_ai2_data_window_ParamLimits

0xcd51,	// (0x0006a38e) popup_ai2_data_window

0x38cd,	// (0x00060f0a) popup_ai2_link_window_ParamLimits

0x38cd,	// (0x00060f0a) popup_ai2_link_window

0x1fde,	// (0x0005f61b) bg_popup_sub_pane_cp4_ParamLimits

0x1fde,	// (0x0005f61b) bg_popup_sub_pane_cp4

0x38e1,	// (0x00060f1e) grid_ai2_link_pane_ParamLimits

0x38e1,	// (0x00060f1e) grid_ai2_link_pane

0x38f8,	// (0x00060f35) popup_ai2_link_window_g1_ParamLimits

0x38f8,	// (0x00060f35) popup_ai2_link_window_g1

0x3904,	// (0x00060f41) popup_ai2_link_window_g2_ParamLimits

0x3904,	// (0x00060f41) popup_ai2_link_window_g2

0x0001,

0xf998,	// (0x0006cfd5) popup_ai2_link_window_g_ParamLimits

0xf998,	// (0x0006cfd5) popup_ai2_link_window_g

0x3913,	// (0x00060f50) ai2_mp_button_pane

0x391b,	// (0x00060f58) ai2_mp_volume_pane

0x21f1,	// (0x0005f82e) bg_popup_sub_pane_cp5_ParamLimits

0x21f1,	// (0x0005f82e) bg_popup_sub_pane_cp5

0x3923,	// (0x00060f60) heading_ai2_gene_pane_ParamLimits

0x3923,	// (0x00060f60) heading_ai2_gene_pane

0x392f,	// (0x00060f6c) list_ai2_gene_pane_ParamLimits

0x392f,	// (0x00060f6c) list_ai2_gene_pane

0x3977,	// (0x00060fb4) cell_ai2_link_pane_ParamLimits

0x3977,	// (0x00060fb4) cell_ai2_link_pane

0x398d,	// (0x00060fca) cell_ai2_link_pane_g1

0x6fac,	// (0x000645e9) grid_highlight_pane_cp7

0x0a9a,	// (0x0005e0d7) ai2_mp_volume_pane_g1

0x3a5d,	// (0x0006109a) ai2_mp_volume_pane_g2

0x39d2,	// (0x0006100f) list_ai2_gene_pane_t1

0x3a65,	// (0x000610a2) ai2_mp_volume_pane_g3

0x0002,

0xf9b1,	// (0x0006cfee) ai2_mp_volume_pane_g

0xb55c,	// (0x00068b99) volume_small_pane_cp3

0x3a6d,	// (0x000610aa) aid_size_cell_ai2_button

0x3a75,	// (0x000610b2) grid_ai2_button_pane

0x3a7e,	// (0x000610bb) cell_ai2_button_pane_ParamLimits

0x3a7e,	// (0x000610bb) cell_ai2_button_pane

0x6fa2,	// (0x000645df) cell_ai2_button_pane_g1

0x6fac,	// (0x000645e9) grid_highlight_pane_cp8

0x3a1d,	// (0x0006105a) ai2_gene_pane_t1_ParamLimits

0x3a1d,	// (0x0006105a) ai2_gene_pane_t1

0xa58d,	// (0x00067bca) aid_height_parent_landscape

0xca7b,	// (0x0006a0b8) aid_height_set_list

0x332d,	// (0x0006096a) aid_size_parent

0x36b8,	// (0x00060cf5) aid_size_cell_graphic_pane_ParamLimits

0x393f,	// (0x00060f7c) popup_ai2_data_window_g1_ParamLimits

0x393f,	// (0x00060f7c) popup_ai2_data_window_g1

0x394b,	// (0x00060f88) ai2_news_ticker_pane_g1

0x3953,	// (0x00060f90) ai2_news_ticker_pane_g2

0x0001,

0xf99d,	// (0x0006cfda) ai2_news_ticker_pane_g

0x395b,	// (0x00060f98) ai2_news_ticker_pane_t1

0x3969,	// (0x00060fa6) ai2_news_ticker_pane_t2

0x0001,

0xf9a2,	// (0x0006cfdf) ai2_news_ticker_pane_t

0x3996,	// (0x00060fd3) heading_ai2_gene_pane_g1

0x399e,	// (0x00060fdb) heading_ai2_gene_pane_t1_ParamLimits

0x399e,	// (0x00060fdb) heading_ai2_gene_pane_t1

0x39b3,	// (0x00060ff0) list_highlight_pane_cp6

0x39bb,	// (0x00060ff8) ai2_gene_pane_ParamLimits

0x39bb,	// (0x00060ff8) ai2_gene_pane

0x39e0,	// (0x0006101d) list_ai2_gene_pane_t2

0x0001,

0xf9a7,	// (0x0006cfe4) list_ai2_gene_pane_t

0x39ee,	// (0x0006102b) list_highlight_pane_cp8_ParamLimits

0x39ee,	// (0x0006102b) list_highlight_pane_cp8

0x39ff,	// (0x0006103c) ai2_gene_pane_g1_ParamLimits

0x39ff,	// (0x0006103c) ai2_gene_pane_g1

0x3a11,	// (0x0006104e) ai2_gene_pane_g2_ParamLimits

0x3a11,	// (0x0006104e) ai2_gene_pane_g2

0x0001,

0xf9ac,	// (0x0006cfe9) ai2_gene_pane_g_ParamLimits

0xf9ac,	// (0x0006cfe9) ai2_gene_pane_g

0x7ff8,	// (0x00065635) scroll_pane_cp12

0xa54a,	// (0x00067b87) control_pane_t3_ParamLimits

0xa54a,	// (0x00067b87) control_pane_t3

0xa3ac,	// (0x000679e9) status_small_pane_g8_ParamLimits

0xa3ac,	// (0x000679e9) status_small_pane_g8

0xa6ee,	// (0x00067d2b) popup_find_window_ParamLimits

0xa97b,	// (0x00067fb8) popup_note_image_window_ParamLimits

0xbece,	// (0x0006950b) list_double2_graphic_pane_vc_g1_ParamLimits

0xbece,	// (0x0006950b) list_double2_graphic_pane_vc_g1

0xbeda,	// (0x00069517) list_double2_graphic_pane_vc_g2_ParamLimits

0xbeda,	// (0x00069517) list_double2_graphic_pane_vc_g2

0x0594,	// (0x0005dbd1) list_double2_graphic_pane_vc_g3_ParamLimits

0x0594,	// (0x0005dbd1) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x0006cbd9) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x0006cbd9) list_double2_graphic_pane_vc_g

0xbee6,	// (0x00069523) list_double2_graphic_pane_vc_t1_ParamLimits

0xbee6,	// (0x00069523) list_double2_graphic_pane_vc_t1

0xbeda,	// (0x00069517) list_single_heading_pane_vc_g1_ParamLimits

0xbeda,	// (0x00069517) list_single_heading_pane_vc_g1

0x0594,	// (0x0005dbd1) list_single_heading_pane_vc_g2_ParamLimits

0x0594,	// (0x0005dbd1) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006cbea) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006cbea) list_single_heading_pane_vc_g

0xea09,	// (0x0006c046) list_single_heading_pane_vc_t1_ParamLimits

0xea09,	// (0x0006c046) list_single_heading_pane_vc_t1

0xea1f,	// (0x0006c05c) list_single_heading_pane_vc_t2_ParamLimits

0xea1f,	// (0x0006c05c) list_single_heading_pane_vc_t2

0x0001,

0xf7a9,	// (0x0006cde6) list_single_heading_pane_vc_t_ParamLimits

0xf7a9,	// (0x0006cde6) list_single_heading_pane_vc_t

0x1f9a,	// (0x0005f5d7) list_setting_number_pane_vc_g1_ParamLimits

0x1f9a,	// (0x0005f5d7) list_setting_number_pane_vc_g1

0x1fa6,	// (0x0005f5e3) list_setting_number_pane_vc_g2_ParamLimits

0x1fa6,	// (0x0005f5e3) list_setting_number_pane_vc_g2

0x0001,

0xf7ae,	// (0x0006cdeb) list_setting_number_pane_vc_g_ParamLimits

0xf7ae,	// (0x0006cdeb) list_setting_number_pane_vc_g

0xea31,	// (0x0006c06e) list_setting_number_pane_vc_t1_ParamLimits

0xea31,	// (0x0006c06e) list_setting_number_pane_vc_t1

0xea45,	// (0x0006c082) list_setting_number_pane_vc_t2_ParamLimits

0xea45,	// (0x0006c082) list_setting_number_pane_vc_t2

0xea61,	// (0x0006c09e) list_setting_number_pane_vc_t3_ParamLimits

0xea61,	// (0x0006c09e) list_setting_number_pane_vc_t3

0x0002,

0xf7b3,	// (0x0006cdf0) list_setting_number_pane_vc_t_ParamLimits

0xf7b3,	// (0x0006cdf0) list_setting_number_pane_vc_t

0xea8b,	// (0x0006c0c8) set_value_pane_vc_ParamLimits

0xea8b,	// (0x0006c0c8) set_value_pane_vc

0x34fd,	// (0x00060b3a) list_double2_graphic_pane_vc_ParamLimits

0x34fd,	// (0x00060b3a) list_double2_graphic_pane_vc

0x3510,	// (0x00060b4d) list_double2_large_graphic_pane_vc_ParamLimits

0x3510,	// (0x00060b4d) list_double2_large_graphic_pane_vc

0x34fd,	// (0x00060b3a) list_double2_pane_vc_ParamLimits

0x34fd,	// (0x00060b3a) list_double2_pane_vc

0x34fd,	// (0x00060b3a) list_double_graphic_heading_pane_vc_ParamLimits

0x34fd,	// (0x00060b3a) list_double_graphic_heading_pane_vc

0x34fd,	// (0x00060b3a) list_double_graphic_pane_vc_ParamLimits

0x34fd,	// (0x00060b3a) list_double_graphic_pane_vc

0x34fd,	// (0x00060b3a) list_double_heading_pane_vc_ParamLimits

0x34fd,	// (0x00060b3a) list_double_heading_pane_vc

0x3522,	// (0x00060b5f) list_double_large_graphic_pane_vc_ParamLimits

0x3522,	// (0x00060b5f) list_double_large_graphic_pane_vc

0x34fd,	// (0x00060b3a) list_double_number_pane_vc_ParamLimits

0x34fd,	// (0x00060b3a) list_double_number_pane_vc

0x34fd,	// (0x00060b3a) list_double_pane_vc_ParamLimits

0x34fd,	// (0x00060b3a) list_double_pane_vc

0x34fd,	// (0x00060b3a) list_double_time_pane_vc_ParamLimits

0x34fd,	// (0x00060b3a) list_double_time_pane_vc

0x34fd,	// (0x00060b3a) list_setting_number_pane_vc_ParamLimits

0x34fd,	// (0x00060b3a) list_setting_number_pane_vc

0x34fd,	// (0x00060b3a) list_setting_pane_vc_ParamLimits

0x34fd,	// (0x00060b3a) list_setting_pane_vc

0x34fd,	// (0x00060b3a) list_single_graphic_heading_pane_vc_ParamLimits

0x34fd,	// (0x00060b3a) list_single_graphic_heading_pane_vc

0x34fd,	// (0x00060b3a) list_single_heading_pane_vc_ParamLimits

0x34fd,	// (0x00060b3a) list_single_heading_pane_vc

0x34fd,	// (0x00060b3a) list_single_number_heading_pane_vc_ParamLimits

0x34fd,	// (0x00060b3a) list_single_number_heading_pane_vc

0xeaaa,	// (0x0006c0e7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xeaaa,	// (0x0006c0e7) list_double_graphic_heading_pane_vc_g1

0xbeda,	// (0x00069517) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xbeda,	// (0x00069517) list_double_graphic_heading_pane_vc_g2

0x0594,	// (0x0005dbd1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0594,	// (0x0005dbd1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9b8,	// (0x0006cff5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9b8,	// (0x0006cff5) list_double_graphic_heading_pane_vc_g

0xeab6,	// (0x0006c0f3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeab6,	// (0x0006c0f3) list_double_graphic_heading_pane_vc_t1

0xeaca,	// (0x0006c107) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeaca,	// (0x0006c107) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9bf,	// (0x0006cffc) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9bf,	// (0x0006cffc) list_double_graphic_heading_pane_vc_t

0x1f9a,	// (0x0005f5d7) list_setting_pane_vc_g1_ParamLimits

0x1f9a,	// (0x0005f5d7) list_setting_pane_vc_g1

0x1fa6,	// (0x0005f5e3) list_setting_pane_vc_g2_ParamLimits

0x1fa6,	// (0x0005f5e3) list_setting_pane_vc_g2

0x0001,

0xf7ae,	// (0x0006cdeb) list_setting_pane_vc_g_ParamLimits

0xf7ae,	// (0x0006cdeb) list_setting_pane_vc_g

0xeae2,	// (0x0006c11f) list_setting_pane_vc_t1_ParamLimits

0xeae2,	// (0x0006c11f) list_setting_pane_vc_t1

0xeafe,	// (0x0006c13b) list_setting_pane_vc_t2_ParamLimits

0xeafe,	// (0x0006c13b) list_setting_pane_vc_t2

0x0001,

0xfa02,	// (0x0006d03f) list_setting_pane_vc_t_ParamLimits

0xfa02,	// (0x0006d03f) list_setting_pane_vc_t

0xea8b,	// (0x0006c0c8) set_value_pane_cp_vc_ParamLimits

0xea8b,	// (0x0006c0c8) set_value_pane_cp_vc

0xbeda,	// (0x00069517) list_single_number_heading_pane_vc_g1_ParamLimits

0xbeda,	// (0x00069517) list_single_number_heading_pane_vc_g1

0x0594,	// (0x0005dbd1) list_single_number_heading_pane_vc_g2_ParamLimits

0x0594,	// (0x0005dbd1) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006cbea) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006cbea) list_single_number_heading_pane_vc_g

0xbefc,	// (0x00069539) list_single_number_heading_pane_vc_t1_ParamLimits

0xbefc,	// (0x00069539) list_single_number_heading_pane_vc_t1

0xeb18,	// (0x0006c155) list_single_number_heading_pane_vc_t2_ParamLimits

0xeb18,	// (0x0006c155) list_single_number_heading_pane_vc_t2

0xeb2e,	// (0x0006c16b) list_single_number_heading_pane_vc_t3_ParamLimits

0xeb2e,	// (0x0006c16b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa07,	// (0x0006d044) list_single_number_heading_pane_vc_t_ParamLimits

0xfa07,	// (0x0006d044) list_single_number_heading_pane_vc_t

0xeb40,	// (0x0006c17d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xeb40,	// (0x0006c17d) list_single_graphic_heading_pane_vc_g1

0xbeda,	// (0x00069517) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xbeda,	// (0x00069517) list_single_graphic_heading_pane_vc_g4

0x0594,	// (0x0005dbd1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0594,	// (0x0005dbd1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0e,	// (0x0006d04b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0e,	// (0x0006d04b) list_single_graphic_heading_pane_vc_g

0xbefc,	// (0x00069539) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xbefc,	// (0x00069539) list_single_graphic_heading_pane_vc_t1

0xeb4c,	// (0x0006c189) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xeb4c,	// (0x0006c189) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa15,	// (0x0006d052) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa15,	// (0x0006d052) list_single_graphic_heading_pane_vc_t

0xbeda,	// (0x00069517) list_double2_pane_vc_g1_ParamLimits

0xbeda,	// (0x00069517) list_double2_pane_vc_g1

0x0594,	// (0x0005dbd1) list_double2_pane_vc_g2_ParamLimits

0x0594,	// (0x0005dbd1) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006cbea) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006cbea) list_double2_pane_vc_g

0xeb5e,	// (0x0006c19b) list_double2_pane_vc_t1_ParamLimits

0xeb5e,	// (0x0006c19b) list_double2_pane_vc_t1

0x3cb7,	// (0x000612f4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3cb7,	// (0x000612f4) list_double2_large_graphic_pane_vc_g1

0xe7d1,	// (0x0006be0e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe7d1,	// (0x0006be0e) list_double2_large_graphic_pane_vc_g2

0xe7dd,	// (0x0006be1a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe7dd,	// (0x0006be1a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x0006cc02) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x0006cc02) list_double2_large_graphic_pane_vc_g

0xbf12,	// (0x0006954f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xbf12,	// (0x0006954f) list_double2_large_graphic_pane_vc_t1

0x3cc3,	// (0x00061300) list_double_time_pane_vc_g1_ParamLimits

0x3cc3,	// (0x00061300) list_double_time_pane_vc_g1

0x3ccf,	// (0x0006130c) list_double_time_pane_vc_g2_ParamLimits

0x3ccf,	// (0x0006130c) list_double_time_pane_vc_g2

0x0001,

0xfa1a,	// (0x0006d057) list_double_time_pane_vc_g_ParamLimits

0xfa1a,	// (0x0006d057) list_double_time_pane_vc_g

0xeb76,	// (0x0006c1b3) list_double_time_pane_vc_t1_ParamLimits

0xeb76,	// (0x0006c1b3) list_double_time_pane_vc_t1

0xeb9a,	// (0x0006c1d7) list_double_time_pane_vc_t2_ParamLimits

0xeb9a,	// (0x0006c1d7) list_double_time_pane_vc_t2

0xebe9,	// (0x0006c226) list_double_time_pane_vc_t3_ParamLimits

0xebe9,	// (0x0006c226) list_double_time_pane_vc_t3

0xebfb,	// (0x0006c238) list_double_time_pane_vc_t4_ParamLimits

0xebfb,	// (0x0006c238) list_double_time_pane_vc_t4

0x0003,

0xfa1f,	// (0x0006d05c) list_double_time_pane_vc_t_ParamLimits

0xfa1f,	// (0x0006d05c) list_double_time_pane_vc_t

0xbeda,	// (0x00069517) list_double_pane_vc_g1_ParamLimits

0xbeda,	// (0x00069517) list_double_pane_vc_g1

0x0594,	// (0x0005dbd1) list_double_pane_vc_g2_ParamLimits

0x0594,	// (0x0005dbd1) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006cbea) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006cbea) list_double_pane_vc_g

0xec0f,	// (0x0006c24c) list_double_pane_vc_t1_ParamLimits

0xec0f,	// (0x0006c24c) list_double_pane_vc_t1

0xec23,	// (0x0006c260) list_double_pane_vc_t2_ParamLimits

0xec23,	// (0x0006c260) list_double_pane_vc_t2

0x0001,

0xfa28,	// (0x0006d065) list_double_pane_vc_t_ParamLimits

0xfa28,	// (0x0006d065) list_double_pane_vc_t

0xbeda,	// (0x00069517) list_double_number_pane_vc_g1_ParamLimits

0xbeda,	// (0x00069517) list_double_number_pane_vc_g1

0x0594,	// (0x0005dbd1) list_double_number_pane_vc_g2_ParamLimits

0x0594,	// (0x0005dbd1) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006cbea) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006cbea) list_double_number_pane_vc_g

0xec3b,	// (0x0006c278) list_double_number_pane_vc_t1_ParamLimits

0xec3b,	// (0x0006c278) list_double_number_pane_vc_t1

0xec0f,	// (0x0006c24c) list_double_number_pane_vc_t2_ParamLimits

0xec0f,	// (0x0006c24c) list_double_number_pane_vc_t2

0xec4d,	// (0x0006c28a) list_double_number_pane_vc_t3_ParamLimits

0xec4d,	// (0x0006c28a) list_double_number_pane_vc_t3

0x0002,

0xfa2d,	// (0x0006d06a) list_double_number_pane_vc_t_ParamLimits

0xfa2d,	// (0x0006d06a) list_double_number_pane_vc_t

0x3cdb,	// (0x00061318) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3cdb,	// (0x00061318) list_double_large_graphic_pane_vc_g1

0x3cf7,	// (0x00061334) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3cf7,	// (0x00061334) list_double_large_graphic_pane_vc_g2

0x3d0b,	// (0x00061348) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3d0b,	// (0x00061348) list_double_large_graphic_pane_vc_g3

0xec65,	// (0x0006c2a2) list_double_large_graphic_pane_vc_g4_ParamLimits

0xec65,	// (0x0006c2a2) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa34,	// (0x0006d071) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0006d071) list_double_large_graphic_pane_vc_g

0xec74,	// (0x0006c2b1) list_double_large_graphic_pane_vc_t1_ParamLimits

0xec74,	// (0x0006c2b1) list_double_large_graphic_pane_vc_t1

0xec90,	// (0x0006c2cd) list_double_large_graphic_pane_vc_t2_ParamLimits

0xec90,	// (0x0006c2cd) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0006d07a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3d,	// (0x0006d07a) list_double_large_graphic_pane_vc_t

0xbeda,	// (0x00069517) list_double_heading_pane_vc_g1_ParamLimits

0xbeda,	// (0x00069517) list_double_heading_pane_vc_g1

0x0594,	// (0x0005dbd1) list_double_heading_pane_vc_g2_ParamLimits

0x0594,	// (0x0005dbd1) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006cbea) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006cbea) list_double_heading_pane_vc_g

0xecb2,	// (0x0006c2ef) list_double_heading_pane_vc_t1_ParamLimits

0xecb2,	// (0x0006c2ef) list_double_heading_pane_vc_t1

0xecc6,	// (0x0006c303) list_double_heading_pane_vc_t2_ParamLimits

0xecc6,	// (0x0006c303) list_double_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0006d07f) list_double_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0006d07f) list_double_heading_pane_vc_t

0xecde,	// (0x0006c31b) list_double_graphic_pane_vc_g1_ParamLimits

0xecde,	// (0x0006c31b) list_double_graphic_pane_vc_g1

0x3d1a,	// (0x00061357) list_double_graphic_pane_vc_g2_ParamLimits

0x3d1a,	// (0x00061357) list_double_graphic_pane_vc_g2

0xbeda,	// (0x00069517) list_double_graphic_pane_vc_g3_ParamLimits

0xbeda,	// (0x00069517) list_double_graphic_pane_vc_g3

0x0003,

0xfa47,	// (0x0006d084) list_double_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0006d084) list_double_graphic_pane_vc_g

0xecf1,	// (0x0006c32e) list_double_graphic_pane_vc_t1_ParamLimits

0xecf1,	// (0x0006c32e) list_double_graphic_pane_vc_t1

0xed10,	// (0x0006c34d) list_double_graphic_pane_vc_t2_ParamLimits

0xed10,	// (0x0006c34d) list_double_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x0006d08d) list_double_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x0006d08d) list_double_graphic_pane_vc_t

0xe79f,	// (0x0006bddc) aid_size_cell_fastswap

0x8e58,	// (0x00066495) aid_size_cell_touch_ParamLimits

0x8e58,	// (0x00066495) aid_size_cell_touch

0xe7b1,	// (0x0006bdee) popup_fast_swap_wide_window_ParamLimits

0xe7b1,	// (0x0006bdee) popup_fast_swap_wide_window

0x9177,	// (0x000667b4) touch_pane_ParamLimits

0x9177,	// (0x000667b4) touch_pane

0x8045,	// (0x00065682) button_value_adjust_pane_cp2

0xe824,	// (0x0006be61) button_value_adjust_pane_cp4

0xe82c,	// (0x0006be69) form_field_data_pane_cp2

0x9c34,	// (0x00067271) form_field_data_wide_pane_cp2

0x8353,	// (0x00065990) bg_scroll_pane_ParamLimits

0x9f6a,	// (0x000675a7) scroll_handle_pane_ParamLimits

0xf213,	// (0x0006c850) scroll_sc2_down_pane_ParamLimits

0xf213,	// (0x0006c850) scroll_sc2_down_pane

0x8384,	// (0x000659c1) scroll_sc2_up_pane_ParamLimits

0x8384,	// (0x000659c1) scroll_sc2_up_pane

0xce9a,	// (0x0006a4d7) grid_wheel_folder_pane_g1_ParamLimits

0xce9a,	// (0x0006a4d7) grid_wheel_folder_pane_g1

0xf395,	// (0x0006c9d2) clock_nsta_pane_cp2_ParamLimits

0xf395,	// (0x0006c9d2) clock_nsta_pane_cp2

0xa290,	// (0x000678cd) listscroll_midp_pane_ParamLimits

0xa29c,	// (0x000678d9) midp_canvas_pane

0xc555,	// (0x00069b92) nsta_clock_indic_pane

0xc57d,	// (0x00069bba) listscroll_form_pane_vc

0xc585,	// (0x00069bc2) listscroll_set_pane_vc_ParamLimits

0xc585,	// (0x00069bc2) listscroll_set_pane_vc

0xae30,	// (0x0006846d) clock_nsta_pane

0xae5a,	// (0x00068497) indicator_nsta_pane

0x1e90,	// (0x0005f4cd) bg_popup_sub_pane_cp2_ParamLimits

0x1ea4,	// (0x0005f4e1) find_pane_cp2_ParamLimits

0x1ea4,	// (0x0005f4e1) find_pane_cp2

0x1eba,	// (0x0005f4f7) grid_toobar_pane_ParamLimits

0x1fb2,	// (0x0005f5ef) list_form_gen_pane_vc_ParamLimits

0x1fb2,	// (0x0005f5ef) list_form_gen_pane_vc

0x1fc8,	// (0x0005f605) scroll_pane_cp8_vc_ParamLimits

0x1fc8,	// (0x0005f605) scroll_pane_cp8_vc

0x2044,	// (0x0005f681) data_form_wide_pane_vc_ParamLimits

0x2044,	// (0x0005f681) data_form_wide_pane_vc

0x2050,	// (0x0005f68d) form_field_data_wide_pane_vc_g1

0x2058,	// (0x0005f695) form_field_data_wide_pane_vc_t1_ParamLimits

0x2058,	// (0x0005f695) form_field_data_wide_pane_vc_t1

0x8059,	// (0x00065696) input_focus_pane_cp6_vc_ParamLimits

0x8059,	// (0x00065696) input_focus_pane_cp6_vc

0x23a5,	// (0x0005f9e2) list_midp_pane_ParamLimits

0x3722,	// (0x00060d5f) scroll_pane_cp16_ParamLimits

0x3722,	// (0x00060d5f) scroll_pane_cp16

0x23fb,	// (0x0005fa38) button_value_adjust_pane_ParamLimits

0x23fb,	// (0x0005fa38) button_value_adjust_pane

0xca8c,	// (0x0006a0c9) button_value_adjust_pane_cp6_ParamLimits

0xca8c,	// (0x0006a0c9) button_value_adjust_pane_cp6

0xcba6,	// (0x0006a1e3) settings_code_pane_cp_ParamLimits

0xcba6,	// (0x0006a1e3) settings_code_pane_cp

0x6fa2,	// (0x000645df) cell_touch_pane_g1

0x6fa2,	// (0x000645df) cell_touch_pane_g2

0x0001,

0xf6d4,	// (0x0006cd11) cell_touch_pane_g

0xcd67,	// (0x0006a3a4) cell_touch_pane_cp_ParamLimits

0xcd67,	// (0x0006a3a4) cell_touch_pane_cp

0xcd83,	// (0x0006a3c0) cell_touch_pane_ParamLimits

0xcd83,	// (0x0006a3c0) cell_touch_pane

0x6fa2,	// (0x000645df) scroll_sc2_down_pane_g1

0x6fa2,	// (0x000645df) scroll_sc2_up_pane_g1

0x6fac,	// (0x000645e9) bg_set_opt_pane_cp4_vc

0x3ab2,	// (0x000610ef) list_set_graphic_pane_vc_g1_ParamLimits

0x3ab2,	// (0x000610ef) list_set_graphic_pane_vc_g1

0x3abe,	// (0x000610fb) list_set_graphic_pane_vc_g2_ParamLimits

0x3abe,	// (0x000610fb) list_set_graphic_pane_vc_g2

0x0001,

0xf9c4,	// (0x0006d001) list_set_graphic_pane_vc_g_ParamLimits

0xf9c4,	// (0x0006d001) list_set_graphic_pane_vc_g

0x3aca,	// (0x00061107) text_primary_small_cp13_vc_ParamLimits

0x3aca,	// (0x00061107) text_primary_small_cp13_vc

0x3ae2,	// (0x0006111f) list_set_graphic_pane_vc_ParamLimits

0x3ae2,	// (0x0006111f) list_set_graphic_pane_vc

0x6fac,	// (0x000645e9) input_focus_pane_cp2_vc

0x6fa2,	// (0x000645df) setting_code_pane_vc_g1

0x7011,	// (0x0006464e) setting_code_pane_vc_t1

0x3af5,	// (0x00061132) set_text_pane_vc_t1_ParamLimits

0x3af5,	// (0x00061132) set_text_pane_vc_t1

0x6fac,	// (0x000645e9) input_focus_pane_cp1_vc

0x3b12,	// (0x0006114f) list_set_text_pane_vc

0x6fa2,	// (0x000645df) setting_text_pane_vc_g1

0x6fac,	// (0x000645e9) bg_set_opt_pane_cp2_vc

0x7008,	// (0x00064645) setting_slider_graphic_pane_vc_g1

0x3b1c,	// (0x00061159) setting_slider_graphic_pane_vc_t1

0x3b2c,	// (0x00061169) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c9,	// (0x0006d006) setting_slider_graphic_pane_vc_t

0x3b3c,	// (0x00061179) slider_set_pane_cp_vc

0x3b44,	// (0x00061181) slider_set_pane_vc_g1

0x3b4d,	// (0x0006118a) slider_set_pane_vc_g2

0x0006,

0xf9ce,	// (0x0006d00b) slider_set_pane_vc_g

0x80b1,	// (0x000656ee) set_opt_bg_pane_g1_copy1

0x80b9,	// (0x000656f6) set_opt_bg_pane_g2_copy1

0x3b79,	// (0x000611b6) set_opt_bg_pane_g3_copy1

0x80c9,	// (0x00065706) set_opt_bg_pane_g4_copy1

0x80d1,	// (0x0006570e) set_opt_bg_pane_g5_copy1

0x80d9,	// (0x00065716) set_opt_bg_pane_g6_copy1

0x3b81,	// (0x000611be) set_opt_bg_pane_g7_copy1

0x3b8b,	// (0x000611c8) set_opt_bg_pane_g8_copy1

0x3b93,	// (0x000611d0) set_opt_bg_pane_g9_copy1

0x6fac,	// (0x000645e9) bg_set_opt_pane_cp_vc

0x3b9b,	// (0x000611d8) setting_slider_pane_vc_t1

0x3baa,	// (0x000611e7) setting_slider_pane_vc_t2

0x3bba,	// (0x000611f7) setting_slider_pane_vc_t3

0x0002,

0xf9dd,	// (0x0006d01a) setting_slider_pane_vc_t

0x3bca,	// (0x00061207) slider_set_pane_vc

0x06e2,	// (0x0005dd1f) volume_set_pane_vc_g1

0x0aab,	// (0x0005e0e8) volume_set_pane_vc_g2

0x0ab4,	// (0x0005e0f1) volume_set_pane_vc_g3

0x0abd,	// (0x0005e0fa) volume_set_pane_vc_g4

0x0ac6,	// (0x0005e103) volume_set_pane_vc_g5

0x0acf,	// (0x0005e10c) volume_set_pane_vc_g6

0x0ad8,	// (0x0005e115) volume_set_pane_vc_g7

0x0ae1,	// (0x0005e11e) volume_set_pane_vc_g8

0x0aea,	// (0x0005e127) volume_set_pane_vc_g9

0x0af3,	// (0x0005e130) volume_set_pane_vc_g10

0x0009,

0xf9e4,	// (0x0006d021) volume_set_pane_vc_g

0x3bd2,	// (0x0006120f) volume_set_pane_vc

0x3bdc,	// (0x00061219) button_value_adjust_pane_cp1_vc

0x3be6,	// (0x00061223) list_highlight_pane_cp2_vc

0x3bef,	// (0x0006122c) list_set_pane_vc_ParamLimits

0x3bef,	// (0x0006122c) list_set_pane_vc

0x3c4d,	// (0x0006128a) main_pane_set_vc_t1_ParamLimits

0x3c4d,	// (0x0006128a) main_pane_set_vc_t1

0x3c62,	// (0x0006129f) main_pane_set_vc_t2_ParamLimits

0x3c62,	// (0x0006129f) main_pane_set_vc_t2

0x3c74,	// (0x000612b1) main_pane_set_vc_t3_ParamLimits

0x3c74,	// (0x000612b1) main_pane_set_vc_t3

0x3c86,	// (0x000612c3) main_pane_set_vc_t4_ParamLimits

0x3c86,	// (0x000612c3) main_pane_set_vc_t4

0x0003,

0xf9f9,	// (0x0006d036) main_pane_set_vc_t_ParamLimits

0xf9f9,	// (0x0006d036) main_pane_set_vc_t

0x3c98,	// (0x000612d5) setting_code_pane_vc_ParamLimits

0x3c98,	// (0x000612d5) setting_code_pane_vc

0x3ca7,	// (0x000612e4) setting_slider_graphic_pane_vc

0x3ca7,	// (0x000612e4) setting_slider_pane_vc

0x3ca7,	// (0x000612e4) setting_text_pane_vc

0x3ca7,	// (0x000612e4) setting_volume_pane_vc

0x3caf,	// (0x000612ec) scroll_pane_cp121_vc

0x8033,	// (0x00065670) set_content_pane_vc

0x3d37,	// (0x00061374) button_value_adjust_pane_g1

0x3d40,	// (0x0006137d) button_value_adjust_pane_g2

0x0001,

0xfa55,	// (0x0006d092) button_value_adjust_pane_g

0x3d49,	// (0x00061386) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3d49,	// (0x00061386) form_field_slider_wide_pane_vc_t1

0x3d5d,	// (0x0006139a) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3d5d,	// (0x0006139a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5a,	// (0x0006d097) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5a,	// (0x0006d097) form_field_slider_wide_pane_vc_t

0x7124,	// (0x00064761) input_focus_pane_cp10_vc_ParamLimits

0x7124,	// (0x00064761) input_focus_pane_cp10_vc

0x3d8b,	// (0x000613c8) slider_cont_pane_cp1_vc_ParamLimits

0x3d8b,	// (0x000613c8) slider_cont_pane_cp1_vc

0x3d9d,	// (0x000613da) slider_form_pane_g1_cp2

0x3b4d,	// (0x0006118a) slider_form_pane_g2_cp2

0x3dca,	// (0x00061407) form_field_slider_pane_vc_t3

0x3dd8,	// (0x00061415) form_field_slider_pane_vc_t4

0x3de6,	// (0x00061423) slider_form_pane_vc_ParamLimits

0x3de6,	// (0x00061423) slider_form_pane_vc

0x3df3,	// (0x00061430) form_field_slider_pane_vc_t1_ParamLimits

0x3df3,	// (0x00061430) form_field_slider_pane_vc_t1

0x3d5d,	// (0x0006139a) form_field_slider_pane_vc_t2_ParamLimits

0x3d5d,	// (0x0006139a) form_field_slider_pane_vc_t2

0x0001,

0xfa6c,	// (0x0006d0a9) form_field_slider_pane_vc_t_ParamLimits

0xfa6c,	// (0x0006d0a9) form_field_slider_pane_vc_t

0x7124,	// (0x00064761) input_focus_pane_cp9_vc_ParamLimits

0x7124,	// (0x00064761) input_focus_pane_cp9_vc

0x3e0f,	// (0x0006144c) slider_cont_pane_vc_ParamLimits

0x3e0f,	// (0x0006144c) slider_cont_pane_vc

0x3e23,	// (0x00061460) list_form_graphic_pane_cp_vc_ParamLimits

0x3e23,	// (0x00061460) list_form_graphic_pane_cp_vc

0x2050,	// (0x0005f68d) form_field_popup_wide_pane_vc_g1

0x3e38,	// (0x00061475) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3e38,	// (0x00061475) form_field_popup_wide_pane_vc_t1

0x8059,	// (0x00065696) input_focus_pane_cp8_vc_ParamLimits

0x8059,	// (0x00065696) input_focus_pane_cp8_vc

0x3e7d,	// (0x000614ba) list_form_wide_pane_vc_ParamLimits

0x3e7d,	// (0x000614ba) list_form_wide_pane_vc

0x3e89,	// (0x000614c6) list_form_graphic_pane_vc_g1

0x3e91,	// (0x000614ce) list_form_graphic_pane_vc_t1_ParamLimits

0x3e91,	// (0x000614ce) list_form_graphic_pane_vc_t1

0x6ffa,	// (0x00064637) list_highlight_pane_cp5_vc_ParamLimits

0x6ffa,	// (0x00064637) list_highlight_pane_cp5_vc

0x3ead,	// (0x000614ea) list_form_graphic_pane_vc_ParamLimits

0x3ead,	// (0x000614ea) list_form_graphic_pane_vc

0x2050,	// (0x0005f68d) form_field_popup_pane_vc_g1

0x3ec3,	// (0x00061500) form_field_popup_pane_vc_t1_ParamLimits

0x3ec3,	// (0x00061500) form_field_popup_pane_vc_t1

0x8059,	// (0x00065696) input_focus_pane_cp7_vc_ParamLimits

0x8059,	// (0x00065696) input_focus_pane_cp7_vc

0x3eda,	// (0x00061517) list_form_pane_vc_ParamLimits

0x3eda,	// (0x00061517) list_form_pane_vc

0x3ee6,	// (0x00061523) data_form_pane_vc_t1_ParamLimits

0x3ee6,	// (0x00061523) data_form_pane_vc_t1

0x80b1,	// (0x000656ee) input_focus_pane_vc_g1

0x80b9,	// (0x000656f6) input_focus_pane_vc_g2

0x80c1,	// (0x000656fe) input_focus_pane_vc_g3

0x80c9,	// (0x00065706) input_focus_pane_vc_g4

0x80d1,	// (0x0006570e) input_focus_pane_vc_g5

0x80d9,	// (0x00065716) input_focus_pane_vc_g6

0x80e1,	// (0x0006571e) input_focus_pane_vc_g7

0x80e9,	// (0x00065726) input_focus_pane_vc_g8

0x80f1,	// (0x0006572e) input_focus_pane_vc_g9

0x6fa2,	// (0x000645df) input_focus_pane_vc_g10

0x0009,

0xf65d,	// (0x0006cc9a) input_focus_pane_vc_g

0x2044,	// (0x0005f681) data_form_pane_vc_ParamLimits

0x2044,	// (0x0005f681) data_form_pane_vc

0x2050,	// (0x0005f68d) form_field_data_pane_vc_g1

0x3f01,	// (0x0006153e) form_field_data_pane_vc_t1_ParamLimits

0x3f01,	// (0x0006153e) form_field_data_pane_vc_t1

0x8059,	// (0x00065696) input_focus_pane_vc_ParamLimits

0x8059,	// (0x00065696) input_focus_pane_vc

0x3f1b,	// (0x00061558) button_value_adjust_pane_cp3_vc

0x3f23,	// (0x00061560) button_value_adjust_pane_cp5_vc

0x3f2b,	// (0x00061568) form_field_data_pane_vc_ParamLimits

0x3f2b,	// (0x00061568) form_field_data_pane_vc

0x3f42,	// (0x0006157f) form_field_data_pane_vc_cp2

0x3f4a,	// (0x00061587) form_field_data_wide_pane_vc_ParamLimits

0x3f4a,	// (0x00061587) form_field_data_wide_pane_vc

0x3f60,	// (0x0006159d) form_field_data_wide_pane_vc_cp2

0x3f68,	// (0x000615a5) form_field_popup_pane_vc_ParamLimits

0x3f68,	// (0x000615a5) form_field_popup_pane_vc

0x3f7f,	// (0x000615bc) form_field_popup_wide_pane_vc_ParamLimits

0x3f7f,	// (0x000615bc) form_field_popup_wide_pane_vc

0x3f95,	// (0x000615d2) form_field_slider_pane_vc_ParamLimits

0x3f95,	// (0x000615d2) form_field_slider_pane_vc

0x3fa8,	// (0x000615e5) form_field_slider_wide_pane_vc_ParamLimits

0x3fa8,	// (0x000615e5) form_field_slider_wide_pane_vc

0xcda0,	// (0x0006a3dd) grid_touch_1_pane_ParamLimits

0xcda0,	// (0x0006a3dd) grid_touch_1_pane

0xcdb4,	// (0x0006a3f1) grid_touch_2_pane_ParamLimits

0xcdb4,	// (0x0006a3f1) grid_touch_2_pane

0x408c,	// (0x000616c9) touch_pane_g1_ParamLimits

0x408c,	// (0x000616c9) touch_pane_g1

0x3fdf,	// (0x0006161c) cell_app_pane_cp_wide_ParamLimits

0x3fdf,	// (0x0006161c) cell_app_pane_cp_wide

0x3ff0,	// (0x0006162d) grid_popup_fast_wide_pane_ParamLimits

0x3ff0,	// (0x0006162d) grid_popup_fast_wide_pane

0x4004,	// (0x00061641) scroll_pane_cp19_ParamLimits

0x4004,	// (0x00061641) scroll_pane_cp19

0x6fac,	// (0x000645e9) bg_popup_window_pane_cp20

0x4018,	// (0x00061655) listscroll_popup_fast_wide_pane

0xcdde,	// (0x0006a41b) grid_indicator_nsta_pane

0x4032,	// (0x0006166f) clock_nsta_pane_g1

0x403b,	// (0x00061678) clock_nsta_pane_t1

0xcdea,	// (0x0006a427) cell_indicator_nsta_pane_ParamLimits

0xcdea,	// (0x0006a427) cell_indicator_nsta_pane

0x408c,	// (0x000616c9) cell_indicator_nsta_pane_g1

0xce05,	// (0x0006a442) cell_indicator_nsta_pane_g2

0x0001,

0xfa7d,	// (0x0006d0ba) cell_indicator_nsta_pane_g

0x40ac,	// (0x000616e9) clock_nsta_pane_cp

0x40b5,	// (0x000616f2) indicator_nsta_pane_cp

0x40bf,	// (0x000616fc) nsta_clock_indic_pane_g1

0x7036,	// (0x00064673) grid_indicator_pane

0xa004,	// (0x00067641) scroll_pane_cp29

0xf2e4,	// (0x0006c921) indicator_nsta_pane_cp2_ParamLimits

0xf2e4,	// (0x0006c921) indicator_nsta_pane_cp2

0x6ffa,	// (0x00064637) main_apps_wheel_pane

0xb2e0,	// (0x0006891d) form_midp_field_text_pane_ParamLimits

0x23b1,	// (0x0005f9ee) scroll_bar_cp050_ParamLimits

0x4118,	// (0x00061755) cell_indicator_pane_ParamLimits

0x4118,	// (0x00061755) cell_indicator_pane

0x4131,	// (0x0006176e) cell_indicator_pane_g1

0xce24,	// (0x0006a461) grid_wheel_folder_pane_ParamLimits

0xce24,	// (0x0006a461) grid_wheel_folder_pane

0xce32,	// (0x0006a46f) list_wheel_apps_pane_ParamLimits

0xce32,	// (0x0006a46f) list_wheel_apps_pane

0xce40,	// (0x0006a47d) main_apps_wheel_pane_g1_ParamLimits

0xce40,	// (0x0006a47d) main_apps_wheel_pane_g1

0xce4c,	// (0x0006a489) main_apps_wheel_pane_g2_ParamLimits

0xce4c,	// (0x0006a489) main_apps_wheel_pane_g2

0x0001,

0xfa99,	// (0x0006d0d6) main_apps_wheel_pane_g_ParamLimits

0xfa99,	// (0x0006d0d6) main_apps_wheel_pane_g

0xce5a,	// (0x0006a497) main_apps_wheel_pane_t1_ParamLimits

0xce5a,	// (0x0006a497) main_apps_wheel_pane_t1

0xce6e,	// (0x0006a4ab) list_wheel_apps_pane_g1

0xce76,	// (0x0006a4b3) list_wheel_apps_pane_g2

0xce7e,	// (0x0006a4bb) list_wheel_apps_pane_g3

0xce86,	// (0x0006a4c3) list_wheel_apps_pane_g4

0xce90,	// (0x0006a4cd) list_wheel_apps_pane_g5

0x0004,

0xfa9e,	// (0x0006d0db) list_wheel_apps_pane_g

0xc2a2,	// (0x000698df) navi_icon_text_pane

0xad24,	// (0x00068361) aid_fill_nsta

0x41f8,	// (0x00061835) navi_icon_text_pane_g1

0x4204,	// (0x00061841) navi_icon_text_pane_t1

0xc186,	// (0x000697c3) list_set_graphic_pane_t1_ParamLimits

0xc186,	// (0x000697c3) list_set_graphic_pane_t1

0x2afc,	// (0x00060139) popup_midp_note_alarm_window_t6_ParamLimits

0x2afc,	// (0x00060139) popup_midp_note_alarm_window_t6

0x2b0e,	// (0x0006014b) popup_midp_note_alarm_window_t7_ParamLimits

0x2b0e,	// (0x0006014b) popup_midp_note_alarm_window_t7

0x2b20,	// (0x0006015d) popup_midp_note_alarm_window_t8_ParamLimits

0x2b20,	// (0x0006015d) popup_midp_note_alarm_window_t8

0x2b32,	// (0x0006016f) popup_midp_note_alarm_window_t9_ParamLimits

0x2b32,	// (0x0006016f) popup_midp_note_alarm_window_t9

0x2b44,	// (0x00060181) popup_midp_note_alarm_window_t10_ParamLimits

0x2b44,	// (0x00060181) popup_midp_note_alarm_window_t10

0x2b56,	// (0x00060193) popup_midp_note_alarm_window_t11_ParamLimits

0x2b56,	// (0x00060193) popup_midp_note_alarm_window_t11

0xc806,	// (0x00069e43) scroll_pane_cp17_ParamLimits

0xc806,	// (0x00069e43) scroll_pane_cp17

0x06e2,	// (0x0005dd1f) volume_small_pane_cp_g1

0x0afc,	// (0x0005e139) volume_small_pane_cp_g2

0x0b05,	// (0x0005e142) volume_small_pane_cp_g3

0x0b0e,	// (0x0005e14b) volume_small_pane_cp_g4

0x0b17,	// (0x0005e154) volume_small_pane_cp_g5

0x0ac6,	// (0x0005e103) volume_small_pane_cp_g6

0x0b20,	// (0x0005e15d) volume_small_pane_cp_g7

0x0b29,	// (0x0005e166) volume_small_pane_cp_g8

0x0b32,	// (0x0005e16f) volume_small_pane_cp_g9

0x0b3b,	// (0x0005e178) volume_small_pane_cp_g10

0xc408,	// (0x00069a45) midp_ticker_pane_g1_ParamLimits

0xc414,	// (0x00069a51) midp_ticker_pane_g2_ParamLimits

0xf729,	// (0x0006cd66) midp_ticker_pane_g_ParamLimits

0xc420,	// (0x00069a5d) midp_ticker_pane_t1_ParamLimits

0xad48,	// (0x00068385) aid_fill_nsta_2

0x239d,	// (0x0005f9da) list_form2_midp_pane

0x34b0,	// (0x00060aed) midp_editing_number_pane_ParamLimits

0x34bf,	// (0x00060afc) midp_ticker_pane_ParamLimits

0x4216,	// (0x00061853) form2_midp_field_pane

0x423a,	// (0x00061877) scroll_pane_cp51

0x425a,	// (0x00061897) form2_midp_button_pane_ParamLimits

0x425a,	// (0x00061897) form2_midp_button_pane

0x426c,	// (0x000618a9) form2_midp_content_pane_ParamLimits

0x426c,	// (0x000618a9) form2_midp_content_pane

0x4286,	// (0x000618c3) form2_midp_field_choice_group_pane

0x428e,	// (0x000618cb) form2_midp_field_pane_g1

0x4296,	// (0x000618d3) form2_midp_field_pane_g2

0x429e,	// (0x000618db) form2_midp_field_pane_g3

0x42a6,	// (0x000618e3) form2_midp_field_pane_g4

0x0003,

0xfac3,	// (0x0006d100) form2_midp_field_pane_g

0x42ae,	// (0x000618eb) form2_midp_gauge_slider_pane

0x42b6,	// (0x000618f3) form2_midp_gauge_wait_pane

0x42be,	// (0x000618fb) form2_midp_image_pane_ParamLimits

0x42be,	// (0x000618fb) form2_midp_image_pane

0xcec3,	// (0x0006a500) form2_midp_label_pane_ParamLimits

0xcec3,	// (0x0006a500) form2_midp_label_pane

0xcedc,	// (0x0006a519) form2_midp_label_pane_cp_ParamLimits

0xcedc,	// (0x0006a519) form2_midp_label_pane_cp

0x4313,	// (0x00061950) form2_midp_string_pane_ParamLimits

0x4313,	// (0x00061950) form2_midp_string_pane

0xb565,	// (0x00068ba2) form2_midp_text_pane_ParamLimits

0xb565,	// (0x00068ba2) form2_midp_text_pane

0x4325,	// (0x00061962) form2_midp_time_pane

0x4335,	// (0x00061972) input_focus_pane_cp51_ParamLimits

0x4335,	// (0x00061972) input_focus_pane_cp51

0xcefb,	// (0x0006a538) form2_midp_label_pane_t1_ParamLimits

0xcefb,	// (0x0006a538) form2_midp_label_pane_t1

0xb57e,	// (0x00068bbb) form2_mdip_text_pane_t1_ParamLimits

0xb57e,	// (0x00068bbb) form2_mdip_text_pane_t1

0xed3a,	// (0x0006c377) form2_midp_time_pane_t1

0x4396,	// (0x000619d3) form2_midp_gauge_slider_pane_t1

0xcf3b,	// (0x0006a578) form2_midp_gauge_slider_pane_t2

0xcf4d,	// (0x0006a58a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacc,	// (0x0006d109) form2_midp_gauge_slider_pane_t

0x43cc,	// (0x00061a09) form2_midp_slider_pane

0x43d8,	// (0x00061a15) form2_midp_gauge_wait_pane_t1

0x43e6,	// (0x00061a23) form2_midp_wait_pane_ParamLimits

0x43e6,	// (0x00061a23) form2_midp_wait_pane

0xcf5f,	// (0x0006a59c) list_single_2graphic_pane_cp4_ParamLimits

0xcf5f,	// (0x0006a59c) list_single_2graphic_pane_cp4

0xb221,	// (0x0006885e) list_single_midp_graphic_pane_cp_ParamLimits

0xb221,	// (0x0006885e) list_single_midp_graphic_pane_cp

0x6fac,	// (0x000645e9) list_highlight_pane_cp20

0x4439,	// (0x00061a76) list_single_2graphic_pane_g1_cp4

0x3996,	// (0x00060fd3) list_single_2graphic_pane_g2_cp4

0x4441,	// (0x00061a7e) list_single_2graphic_pane_t1_cp4

0x6ffa,	// (0x00064637) list_highlight_pane_cp21

0x4450,	// (0x00061a8d) list_single_midp_graphic_pane_g4_cp

0x445f,	// (0x00061a9c) list_single_midp_graphic_pane_t1_cp

0xcf74,	// (0x0006a5b1) form2_mdip_string_pane_t1_ParamLimits

0xcf74,	// (0x0006a5b1) form2_mdip_string_pane_t1

0x6fac,	// (0x000645e9) bg_wml_button_pane_cp2

0x6fa2,	// (0x000645df) form2_midp_image_pane_g1

0xe7e9,	// (0x0006be26) list_double_large_graphic_pane_g5_ParamLimits

0xe7e9,	// (0x0006be26) list_double_large_graphic_pane_g5

0xa290,	// (0x000678cd) midp_form_pane_ParamLimits

0x6ffa,	// (0x00064637) main_apps_wheel_pane_ParamLimits

0xaa02,	// (0x0006803f) popup_preview_window_ParamLimits

0xaa02,	// (0x0006803f) popup_preview_window

0xaccf,	// (0x0006830c) popup_touch_info_window_ParamLimits

0xaccf,	// (0x0006830c) popup_touch_info_window

0xaced,	// (0x0006832a) popup_touch_menu_window_ParamLimits

0xaced,	// (0x0006832a) popup_touch_menu_window

0x6f98,	// (0x000645d5) bg_popup_sub_pane_cp6

0x457b,	// (0x00061bb8) list_touch_menu_pane

0xcfea,	// (0x0006a627) list_single_touch_menu_pane_ParamLimits

0xcfea,	// (0x0006a627) list_single_touch_menu_pane

0xcffe,	// (0x0006a63b) list_single_touch_menu_pane_t1

0x6ffa,	// (0x00064637) bg_popup_sub_pane_cp7_ParamLimits

0x6ffa,	// (0x00064637) bg_popup_sub_pane_cp7

0x45a7,	// (0x00061be4) heading_sub_pane

0x4684,	// (0x00061cc1) list_touch_info_pane_ParamLimits

0x4684,	// (0x00061cc1) list_touch_info_pane

0x4693,	// (0x00061cd0) list_single_touch_info_pane_ParamLimits

0x4693,	// (0x00061cd0) list_single_touch_info_pane

0x46a5,	// (0x00061ce2) list_single_touch_info_pane_t1

0x46b3,	// (0x00061cf0) list_single_touch_info_pane_t2

0x0001,

0xfada,	// (0x0006d117) list_single_touch_info_pane_t

0xc3f1,	// (0x00069a2e) bg_popup_heading_pane_cp

0x46c1,	// (0x00061cfe) heading_sub_pane_t1

0x1fde,	// (0x0005f61b) bg_popup_preview_window_pane_cp_ParamLimits

0x1fde,	// (0x0005f61b) bg_popup_preview_window_pane_cp

0x45a7,	// (0x00061be4) heading_preview_pane

0x4684,	// (0x00061cc1) list_preview_pane_ParamLimits

0x4684,	// (0x00061cc1) list_preview_pane

0x46cf,	// (0x00061d0c) popup_preview_window_g1

0x4693,	// (0x00061cd0) list_single_preview_pane_ParamLimits

0x4693,	// (0x00061cd0) list_single_preview_pane

0x46d7,	// (0x00061d14) list_single_preview_pane_g1

0x46df,	// (0x00061d1c) list_single_preview_pane_t1

0x46a5,	// (0x00061ce2) list_single_preview_pane_t2

0x0001,

0xfadf,	// (0x0006d11c) list_single_preview_pane_t

0x46ed,	// (0x00061d2a) bg_popup_heading_pane_cp2_ParamLimits

0x46ed,	// (0x00061d2a) bg_popup_heading_pane_cp2

0x4703,	// (0x00061d40) heading_preview_pane_g1

0x470b,	// (0x00061d48) heading_preview_pane_t1_ParamLimits

0x470b,	// (0x00061d48) heading_preview_pane_t1

0x704d,	// (0x0006468a) soft_indicator_pane_t1_ParamLimits

0x7fd5,	// (0x00065612) scroll_pane_ParamLimits

0x8372,	// (0x000659af) scroll_sc2_left_pane

0x837b,	// (0x000659b8) scroll_sc2_right_pane

0x839a,	// (0x000659d7) scroll_bg_pane_g1_ParamLimits

0x83af,	// (0x000659ec) scroll_bg_pane_g2_ParamLimits

0x83c7,	// (0x00065a04) scroll_bg_pane_g3_ParamLimits

0xf6b4,	// (0x0006ccf1) scroll_bg_pane_g_ParamLimits

0x839a,	// (0x000659d7) scroll_handle_pane_g1_ParamLimits

0x83dc,	// (0x00065a19) scroll_handle_pane_g2_ParamLimits

0x83c7,	// (0x00065a04) scroll_handle_pane_g3_ParamLimits

0xf6bb,	// (0x0006ccf8) scroll_handle_pane_g_ParamLimits

0xa5cf,	// (0x00067c0c) popup_choice_list_window_ParamLimits

0xa5cf,	// (0x00067c0c) popup_choice_list_window

0x1e9c,	// (0x0005f4d9) choice_list_pane

0x1f1e,	// (0x0005f55b) cell_toolbar_pane_t1

0x1f46,	// (0x0005f583) toolbar_button_pane_ParamLimits

0x3022,	// (0x0006065f) ai_gene_pane_1_t2_ParamLimits

0x3022,	// (0x0006065f) ai_gene_pane_1_t2

0x0001,

0xf8d7,	// (0x0006cf14) ai_gene_pane_1_t_ParamLimits

0xf8d7,	// (0x0006cf14) ai_gene_pane_1_t

0x4728,	// (0x00061d65) scroll_sc2_left_pane_g1

0x4728,	// (0x00061d65) scroll_sc2_right_pane_g1

0x8434,	// (0x00065a71) bg_popup_sub_pane_cp10

0x4732,	// (0x00061d6f) list_choice_list_pane

0xcbcf,	// (0x0006a20c) list_single_choice_list_pane_ParamLimits

0xcbcf,	// (0x0006a20c) list_single_choice_list_pane

0xd00c,	// (0x0006a649) list_single_choice_list_pane_g1

0x9e2e,	// (0x0006746b) list_single_choice_list_pane_t1_ParamLimits

0x9e2e,	// (0x0006746b) list_single_choice_list_pane_t1

0x4766,	// (0x00061da3) choice_list_pane_g1

0xd014,	// (0x0006a651) choice_list_pane_t1

0x6f98,	// (0x000645d5) input_focus_pane_cp11

0x82e7,	// (0x00065924) title_pane_stacon_g2_ParamLimits

0x82e7,	// (0x00065924) title_pane_stacon_g2

0x0002,

0xf69a,	// (0x0006ccd7) title_pane_stacon_g_ParamLimits

0xf69a,	// (0x0006ccd7) title_pane_stacon_g

0xc3f1,	// (0x00069a2e) cursor_press_pane

0xa676,	// (0x00067cb3) popup_fep_hwr_window_ParamLimits

0xa676,	// (0x00067cb3) popup_fep_hwr_window

0xf4e5,	// (0x0006cb22) popup_fep_vkb_window_ParamLimits

0xf4e5,	// (0x0006cb22) popup_fep_vkb_window

0xd022,	// (0x0006a65f) cursor_press_pane_g1

0x0002,

0xfb08,	// (0x0006d145) fep_vkb_side_pane_g_ParamLimits

0x0bb8,	// (0x0005e1f5) fep_hwr_candidate_pane_ParamLimits

0x0bb8,	// (0x0005e1f5) fep_hwr_candidate_pane

0x0be2,	// (0x0005e21f) fep_hwr_side_pane_ParamLimits

0x0be2,	// (0x0005e21f) fep_hwr_side_pane

0x0c02,	// (0x0005e23f) fep_hwr_top_pane_ParamLimits

0x0c02,	// (0x0005e23f) fep_hwr_top_pane

0x0c1a,	// (0x0005e257) fep_hwr_write_pane_ParamLimits

0x0c1a,	// (0x0005e257) fep_hwr_write_pane

0xfb08,	// (0x0006d145) fep_vkb_side_pane_g

0x4784,	// (0x00061dc1) fep_hwr_top_pane_g1

0x4796,	// (0x00061dd3) fep_hwr_top_pane_g2

0x0c54,	// (0x0005e291) fep_hwr_top_pane_g3

0x0002,

0xfae4,	// (0x0006d121) fep_hwr_top_pane_g

0x0c69,	// (0x0005e2a6) fep_hwr_top_text_pane

0xbf93,	// (0x000695d0) fep_hwr_top_text_pane_g1

0x47cc,	// (0x00061e09) fep_hwr_top_text_pane_t1

0x0d5f,	// (0x0005e39c) fep_hwr_candidate_pane_g1

0x4a11,	// (0x0006204e) fep_vkb_keypad_pane_g3_ParamLimits

0x4a11,	// (0x0006204e) fep_vkb_keypad_pane_g3

0x4a39,	// (0x00062076) fep_vkb_keypad_pane_g4_ParamLimits

0x4a39,	// (0x00062076) fep_vkb_keypad_pane_g4

0x4aa8,	// (0x000620e5) fep_vkb_bottom_pane_g2_ParamLimits

0x4aa8,	// (0x000620e5) fep_vkb_bottom_pane_g2

0x0001,

0xfb0f,	// (0x0006d14c) fep_vkb_bottom_pane_g_ParamLimits

0xfb0f,	// (0x0006d14c) fep_vkb_bottom_pane_g

0x4728,	// (0x00061d65) cell_vkb_side_pane_g2

0x0001,

0xfb19,	// (0x0006d156) cell_vkb_side_pane_g

0x4b33,	// (0x00062170) cell_vkb_side_pane_t1

0x4b41,	// (0x0006217e) cell_vkb_side_pane_t1_copy1

0x4728,	// (0x00061d65) bg_fep_vkb_candidate_pane_g2

0x4c6d,	// (0x000622aa) cell_vkb_candidate_pane_ParamLimits

0x47da,	// (0x00061e17) aid_size_cell_vkb_ParamLimits

0x47da,	// (0x00061e17) aid_size_cell_vkb

0x4c6d,	// (0x000622aa) cell_vkb_candidate_pane

0x0d86,	// (0x0005e3c3) bg_popup_fep_shadow_pane_g1

0xd049,	// (0x0006a686) fep_vkb_bottom_pane_ParamLimits

0xd049,	// (0x0006a686) fep_vkb_bottom_pane

0x489e,	// (0x00061edb) fep_vkb_candidate_pane_ParamLimits

0x489e,	// (0x00061edb) fep_vkb_candidate_pane

0xd06e,	// (0x0006a6ab) fep_vkb_keypad_pane_ParamLimits

0xd06e,	// (0x0006a6ab) fep_vkb_keypad_pane

0xd0a3,	// (0x0006a6e0) fep_vkb_side_pane_ParamLimits

0xd0a3,	// (0x0006a6e0) fep_vkb_side_pane

0xd0df,	// (0x0006a71c) fep_vkb_top_pane_ParamLimits

0xd0df,	// (0x0006a71c) fep_vkb_top_pane

0x496a,	// (0x00061fa7) fep_vkb_top_pane_g1_ParamLimits

0x496a,	// (0x00061fa7) fep_vkb_top_pane_g1

0x4979,	// (0x00061fb6) fep_vkb_top_pane_g2_ParamLimits

0x4979,	// (0x00061fb6) fep_vkb_top_pane_g2

0x4988,	// (0x00061fc5) fep_vkb_top_pane_g3_ParamLimits

0x4988,	// (0x00061fc5) fep_vkb_top_pane_g3

0x0003,

0xfaff,	// (0x0006d13c) fep_vkb_top_pane_g_ParamLimits

0xfaff,	// (0x0006d13c) fep_vkb_top_pane_g

0x49a6,	// (0x00061fe3) fep_vkb_top_text_pane_ParamLimits

0x49a6,	// (0x00061fe3) fep_vkb_top_text_pane

0xd114,	// (0x0006a751) fep_vkb_side_pane_g1_ParamLimits

0xd114,	// (0x0006a751) fep_vkb_side_pane_g1

0x4a00,	// (0x0006203d) grid_vkb_side_pane_ParamLimits

0x4a00,	// (0x0006203d) grid_vkb_side_pane

0x0d8e,	// (0x0005e3cb) bg_popup_fep_shadow_pane_g2

0x0d97,	// (0x0005e3d4) bg_popup_fep_shadow_pane_g3

0x0d9f,	// (0x0005e3dc) bg_popup_fep_shadow_pane_g4

0x0da8,	// (0x0005e3e5) bg_popup_fep_shadow_pane_g5

0x0db2,	// (0x0005e3ef) bg_popup_fep_shadow_pane_g6

0x0dba,	// (0x0005e3f7) bg_popup_fep_shadow_pane_g7

0x80c9,	// (0x00065706) bg_popup_fep_shadow_pane_g8

0x4a57,	// (0x00062094) grid_vkb_keypad_number_pane_ParamLimits

0x4a57,	// (0x00062094) grid_vkb_keypad_number_pane

0x4a67,	// (0x000620a4) grid_vkb_keypad_pane_ParamLimits

0x4a67,	// (0x000620a4) grid_vkb_keypad_pane

0x4a8d,	// (0x000620ca) fep_vkb_bottom_pane_g1_ParamLimits

0x4a8d,	// (0x000620ca) fep_vkb_bottom_pane_g1

0x4ab6,	// (0x000620f3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4ab6,	// (0x000620f3) grid_vkb_keypad_bottom_left_pane

0x4acb,	// (0x00062108) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4acb,	// (0x00062108) grid_vkb_keypad_bottom_right_pane

0x4ae0,	// (0x0006211d) fep_vkb_top_text_pane_g1

0xd15b,	// (0x0006a798) fep_vkb_top_text_pane_t1

0xd16d,	// (0x0006a7aa) cell_vkb_side_pane_ParamLimits

0xd16d,	// (0x0006a7aa) cell_vkb_side_pane

0x4728,	// (0x00061d65) cell_vkb_side_pane_g1

0x4b4f,	// (0x0006218c) cell_vkb_keypad_pane_ParamLimits

0x4b4f,	// (0x0006218c) cell_vkb_keypad_pane

0x4bc4,	// (0x00062201) cell_vkb_keypad_pane_g1

0x0008,

0xfb2c,	// (0x0006d169) bg_popup_fep_shadow_pane_g

0x0dcc,	// (0x0005e409) cell_hwr_side_pane_g1

0x0dcc,	// (0x0005e409) cell_hwr_side_pane_g2

0x4bce,	// (0x0006220b) cell_vkb_keypad_pane_t1

0xd183,	// (0x0006a7c0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd183,	// (0x0006a7c0) cell_vkb_keypad_bottom_left_pane

0xd198,	// (0x0006a7d5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd198,	// (0x0006a7d5) cell_vkb_keypad_bottom_right_pane

0x4728,	// (0x00061d65) cell_vkb_keypad_bottom_left_pane_g1

0x4728,	// (0x00061d65) cell_vkb_keypad_bottom_right_pane_g1

0x4c32,	// (0x0006226f) cell_vkb_keypad_number_pane_ParamLimits

0x4c32,	// (0x0006226f) cell_vkb_keypad_number_pane

0x4c51,	// (0x0006228e) cell_vkb_keypad_number_pane_g1

0x4c5b,	// (0x00062298) cell_vkb_keypad_number_pane_g2

0x4c64,	// (0x000622a1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1e,	// (0x0006d15b) cell_vkb_keypad_number_pane_g

0x4bce,	// (0x0006220b) cell_vkb_keypad_number_pane_t1

0x4c88,	// (0x000622c5) fep_vkb_candidate_pane_g1

0x0001,

0xfb3f,	// (0x0006d17c) cell_hwr_side_pane_g

0x4ca1,	// (0x000622de) cell_hwr_side_pane_t1

0x0dd6,	// (0x0005e413) cell_hwr_side_pane_t1_copy1

0x0de4,	// (0x0005e421) cell_hwr_candidate_pane_g1

0x0e13,	// (0x0005e450) cell_hwr_candidate_pane_t1

0x4728,	// (0x00061d65) cell_vkb_candidate_pane_g2

0x4d06,	// (0x00062343) cell_vkb_candidate_pane_t1

0x0b7f,	// (0x0005e1bc) bg_popup_fep_shadow_pane_ParamLimits

0x0b7f,	// (0x0005e1bc) bg_popup_fep_shadow_pane

0x0c34,	// (0x0005e271) bg_fep_hwr_top_pane_g4

0x47a8,	// (0x00061de5) bg_hwr_side_pane_g1_ParamLimits

0x47a8,	// (0x00061de5) bg_hwr_side_pane_g1

0xb5b0,	// (0x00068bed) cell_hwr_side_pane_ParamLimits

0xb5b0,	// (0x00068bed) cell_hwr_side_pane

0x0ce0,	// (0x0005e31d) fep_hwr_write_pane_g1_ParamLimits

0x0ce0,	// (0x0005e31d) fep_hwr_write_pane_g1

0x0ced,	// (0x0005e32a) fep_hwr_write_pane_g2_ParamLimits

0x0ced,	// (0x0005e32a) fep_hwr_write_pane_g2

0x0cfa,	// (0x0005e337) fep_hwr_write_pane_g3_ParamLimits

0x0cfa,	// (0x0005e337) fep_hwr_write_pane_g3

0xb5d0,	// (0x00068c0d) fep_hwr_write_pane_g4_ParamLimits

0xb5d0,	// (0x00068c0d) fep_hwr_write_pane_g4

0x0005,

0xfaeb,	// (0x0006d128) fep_hwr_write_pane_g_ParamLimits

0xfaeb,	// (0x0006d128) fep_hwr_write_pane_g

0x0c34,	// (0x0005e271) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0c34,	// (0x0005e271) bg_fep_hwr_candidate_pane_g2

0x0d1d,	// (0x0005e35a) cell_hwr_candidate_pane_ParamLimits

0x0d1d,	// (0x0005e35a) cell_hwr_candidate_pane

0x0d5f,	// (0x0005e39c) fep_hwr_candidate_pane_g1_ParamLimits

0x4808,	// (0x00061e45) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4808,	// (0x00061e45) bg_popup_fep_shadow_pane_cp2

0x4998,	// (0x00061fd5) fep_vkb_top_pane_g4_ParamLimits

0x4998,	// (0x00061fd5) fep_vkb_top_pane_g4

0x49de,	// (0x0006201b) fep_vkb_side_pane_g2_ParamLimits

0x49de,	// (0x0006201b) fep_vkb_side_pane_g2

0x9b39,	// (0x00067176) list_setting_pane_t4_ParamLimits

0x9b39,	// (0x00067176) list_setting_pane_t4

0x9bd3,	// (0x00067210) list_setting_number_pane_t5_ParamLimits

0x9bd3,	// (0x00067210) list_setting_number_pane_t5

0xbfca,	// (0x00069607) list_double_heading_pane_cp2_ParamLimits

0xbfca,	// (0x00069607) list_double_heading_pane_cp2

0xd1b3,	// (0x0006a7f0) list_double_heading_pane_g1_cp2_ParamLimits

0xd1b3,	// (0x0006a7f0) list_double_heading_pane_g1_cp2

0x4d14,	// (0x00062351) list_double_heading_pane_g2_cp2_ParamLimits

0x4d14,	// (0x00062351) list_double_heading_pane_g2_cp2

0x4d28,	// (0x00062365) list_double_heading_pane_t1_cp2_ParamLimits

0x4d28,	// (0x00062365) list_double_heading_pane_t1_cp2

0x4d3e,	// (0x0006237b) list_double_heading_pane_t2_cp2_ParamLimits

0x4d3e,	// (0x0006237b) list_double_heading_pane_t2_cp2

0x6f90,	// (0x000645cd) aid_value_unit2

0xe7c7,	// (0x0006be04) popup_preview_fixed_window

0x7132,	// (0x0006476f) bg_popup_preview_window_pane_cp02

0x4d50,	// (0x0006238d) list_preview_fixed_pane

0x4d96,	// (0x000623d3) list_empty_pane_fp_ParamLimits

0x4d96,	// (0x000623d3) list_empty_pane_fp

0x4d96,	// (0x000623d3) list_single_cale_day_pane_fp_ParamLimits

0x4d96,	// (0x000623d3) list_single_cale_day_pane_fp

0x4d96,	// (0x000623d3) list_single_graphic_heading_pane_fp_ParamLimits

0x4d96,	// (0x000623d3) list_single_graphic_heading_pane_fp

0x4d96,	// (0x000623d3) list_single_graphic_pane_fp_ParamLimits

0x4d96,	// (0x000623d3) list_single_graphic_pane_fp

0x4d96,	// (0x000623d3) list_single_heading_pane_fp_ParamLimits

0x4d96,	// (0x000623d3) list_single_heading_pane_fp

0x4d96,	// (0x000623d3) list_single_pane_fp_ParamLimits

0x4d96,	// (0x000623d3) list_single_pane_fp

0x4dac,	// (0x000623e9) list_single_pane_fp_g1_ParamLimits

0x4dac,	// (0x000623e9) list_single_pane_fp_g1

0xd1bf,	// (0x0006a7fc) list_single_pane_fp_g2_ParamLimits

0xd1bf,	// (0x0006a7fc) list_single_pane_fp_g2

0x4db8,	// (0x000623f5) list_single_pane_fp_g3_ParamLimits

0x4db8,	// (0x000623f5) list_single_pane_fp_g3

0x4dcc,	// (0x00062409) list_single_pane_fp_g4_ParamLimits

0x4dcc,	// (0x00062409) list_single_pane_fp_g4

0x0003,

0xfb52,	// (0x0006d18f) list_single_pane_fp_g_ParamLimits

0xfb52,	// (0x0006d18f) list_single_pane_fp_g

0xed4d,	// (0x0006c38a) list_single_pane_fp_t1_ParamLimits

0xed4d,	// (0x0006c38a) list_single_pane_fp_t1

0xed64,	// (0x0006c3a1) list_single_graphic_pane_fp_g1_ParamLimits

0xed64,	// (0x0006c3a1) list_single_graphic_pane_fp_g1

0x4dac,	// (0x000623e9) list_single_graphic_pane_fp_g2_ParamLimits

0x4dac,	// (0x000623e9) list_single_graphic_pane_fp_g2

0xd1bf,	// (0x0006a7fc) list_single_graphic_pane_fp_g3_ParamLimits

0xd1bf,	// (0x0006a7fc) list_single_graphic_pane_fp_g3

0x4db8,	// (0x000623f5) list_single_graphic_pane_fp_g4_ParamLimits

0x4db8,	// (0x000623f5) list_single_graphic_pane_fp_g4

0x4dcc,	// (0x00062409) list_single_graphic_pane_fp_g5_ParamLimits

0x4dcc,	// (0x00062409) list_single_graphic_pane_fp_g5

0x0004,

0xfb5b,	// (0x0006d198) list_single_graphic_pane_fp_g_ParamLimits

0xfb5b,	// (0x0006d198) list_single_graphic_pane_fp_g

0xed70,	// (0x0006c3ad) list_single_graphic_pane_fp_t1_ParamLimits

0xed70,	// (0x0006c3ad) list_single_graphic_pane_fp_t1

0xed64,	// (0x0006c3a1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xed64,	// (0x0006c3a1) list_single_graphic_heading_pane_fp_g1

0x4dac,	// (0x000623e9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4dac,	// (0x000623e9) list_single_graphic_heading_pane_fp_g2

0xd1bf,	// (0x0006a7fc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd1bf,	// (0x0006a7fc) list_single_graphic_heading_pane_fp_g3

0x4db8,	// (0x000623f5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4db8,	// (0x000623f5) list_single_graphic_heading_pane_fp_g4

0x4dcc,	// (0x00062409) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4dcc,	// (0x00062409) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5b,	// (0x0006d198) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5b,	// (0x0006d198) list_single_graphic_heading_pane_fp_g

0xed86,	// (0x0006c3c3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xed86,	// (0x0006c3c3) list_single_graphic_heading_pane_fp_t1

0xed9c,	// (0x0006c3d9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xed9c,	// (0x0006c3d9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb66,	// (0x0006d1a3) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb66,	// (0x0006d1a3) list_single_graphic_heading_pane_fp_t

0xedae,	// (0x0006c3eb) list_single_cale_day_pane_fp_g1_ParamLimits

0xedae,	// (0x0006c3eb) list_single_cale_day_pane_fp_g1

0x4dd8,	// (0x00062415) list_single_cale_day_pane_fp_g2_ParamLimits

0x4dd8,	// (0x00062415) list_single_cale_day_pane_fp_g2

0x45af,	// (0x00061bec) list_single_cale_day_pane_fp_g3_ParamLimits

0x45af,	// (0x00061bec) list_single_cale_day_pane_fp_g3

0x45d7,	// (0x00061c14) list_single_cale_day_pane_fp_g4_ParamLimits

0x45d7,	// (0x00061c14) list_single_cale_day_pane_fp_g4

0x45fb,	// (0x00061c38) list_single_cale_day_pane_fp_g5_ParamLimits

0x45fb,	// (0x00061c38) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6b,	// (0x0006d1a8) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6b,	// (0x0006d1a8) list_single_cale_day_pane_fp_g

0xede6,	// (0x0006c423) list_single_cale_day_pane_fp_t1_ParamLimits

0xede6,	// (0x0006c423) list_single_cale_day_pane_fp_t1

0xee0c,	// (0x0006c449) list_single_cale_day_pane_fp_t2_ParamLimits

0xee0c,	// (0x0006c449) list_single_cale_day_pane_fp_t2

0xee25,	// (0x0006c462) list_single_cale_day_pane_fp_t3_ParamLimits

0xee25,	// (0x0006c462) list_single_cale_day_pane_fp_t3

0x0002,

0xfb76,	// (0x0006d1b3) list_single_cale_day_pane_fp_t_ParamLimits

0xfb76,	// (0x0006d1b3) list_single_cale_day_pane_fp_t

0x4dac,	// (0x000623e9) list_empty_pane_fp_g1_ParamLimits

0x4dac,	// (0x000623e9) list_empty_pane_fp_g1

0xee3e,	// (0x0006c47b) list_empty_pane_fp_t1

0xee4c,	// (0x0006c489) list_empty_pane_fp_t2

0x0001,

0xfb7d,	// (0x0006d1ba) list_empty_pane_fp_t

0x4dac,	// (0x000623e9) list_single_heading_pane_fp_g1_ParamLimits

0x4dac,	// (0x000623e9) list_single_heading_pane_fp_g1

0xd1bf,	// (0x0006a7fc) list_single_heading_pane_fp_g2_ParamLimits

0xd1bf,	// (0x0006a7fc) list_single_heading_pane_fp_g2

0x4db8,	// (0x000623f5) list_single_heading_pane_fp_g3_ParamLimits

0x4db8,	// (0x000623f5) list_single_heading_pane_fp_g3

0x0002,

0xfb82,	// (0x0006d1bf) list_single_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0006d1bf) list_single_heading_pane_fp_g

0xee5a,	// (0x0006c497) list_single_heading_pane_fp_t1_ParamLimits

0xee5a,	// (0x0006c497) list_single_heading_pane_fp_t1

0xee6c,	// (0x0006c4a9) list_single_heading_pane_fp_t2_ParamLimits

0xee6c,	// (0x0006c4a9) list_single_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x0006d1c6) list_single_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x0006d1c6) list_single_heading_pane_fp_t

0x9e7a,	// (0x000674b7) aid_size_cell_fast

0x7107,	// (0x00064744) soft_indicator_pane_cp1_t1

0x9e83,	// (0x000674c0) cell_app_pane_cp2_ParamLimits

0x9e83,	// (0x000674c0) cell_app_pane_cp2

0x0ba1,	// (0x0005e1de) fep_hwr_candidate_drop_down_list_pane

0x0d79,	// (0x0005e3b6) fep_hwr_candidate_pane_g3_ParamLimits

0x0d79,	// (0x0005e3b6) fep_hwr_candidate_pane_g3

0xd02a,	// (0x0006a667) fep_hwr_candidate_pane_g4_ParamLimits

0xd02a,	// (0x0006a667) fep_hwr_candidate_pane_g4

0x0002,

0xfaf8,	// (0x0006d135) fep_hwr_candidate_pane_g_ParamLimits

0xfaf8,	// (0x0006d135) fep_hwr_candidate_pane_g

0x488d,	// (0x00061eca) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x488d,	// (0x00061eca) fep_vkb_candidate_drop_down_list_pane

0x4c90,	// (0x000622cd) fep_vkb_candidate_pane_g3

0x4c98,	// (0x000622d5) fep_vkb_candidate_pane_g4

0x0002,

0xfb25,	// (0x0006d162) fep_vkb_candidate_pane_g

0x0de4,	// (0x0005e421) cell_hwr_candidate_pane_g1_ParamLimits

0x0df2,	// (0x0005e42f) cell_hwr_candidate_pane_g3_ParamLimits

0x0df2,	// (0x0005e42f) cell_hwr_candidate_pane_g3

0x4caf,	// (0x000622ec) cell_hwr_candidate_pane_g4_ParamLimits

0x4caf,	// (0x000622ec) cell_hwr_candidate_pane_g4

0x0002,

0xfb44,	// (0x0006d181) cell_hwr_candidate_pane_g_ParamLimits

0xfb44,	// (0x0006d181) cell_hwr_candidate_pane_g

0x4cd0,	// (0x0006230d) cell_vkb_candidate_pane_g3_ParamLimits

0x4cd0,	// (0x0006230d) cell_vkb_candidate_pane_g3

0x4ceb,	// (0x00062328) cell_vkb_candidate_pane_g4_ParamLimits

0x4ceb,	// (0x00062328) cell_vkb_candidate_pane_g4

0xd1cb,	// (0x0006a808) cell_app_pane_cp2_g1_ParamLimits

0xd1cb,	// (0x0006a808) cell_app_pane_cp2_g1

0x4e02,	// (0x0006243f) cell_app_pane_cp2_g2_ParamLimits

0x4e02,	// (0x0006243f) cell_app_pane_cp2_g2

0x0001,

0xfb8e,	// (0x0006d1cb) cell_app_pane_cp2_g_ParamLimits

0xfb8e,	// (0x0006d1cb) cell_app_pane_cp2_g

0x4e0e,	// (0x0006244b) cell_app_pane_cp2_t1_ParamLimits

0x4e0e,	// (0x0006244b) cell_app_pane_cp2_t1

0x8059,	// (0x00065696) grid_highlight_pane_cp1_ParamLimits

0x8059,	// (0x00065696) grid_highlight_pane_cp1

0x0e31,	// (0x0005e46e) cell_hwr_candidate_pane_cp1_ParamLimits

0x0e31,	// (0x0005e46e) cell_hwr_candidate_pane_cp1

0x0de4,	// (0x0005e421) fep_hwr_candidate_drop_down_list_pane_g1

0x0e50,	// (0x0005e48d) fep_hwr_candidate_drop_down_list_pane_g2

0x0e5d,	// (0x0005e49a) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb93,	// (0x0006d1d0) fep_hwr_candidate_drop_down_list_pane_g

0x0e6a,	// (0x0005e4a7) fep_hwr_candidate_drop_down_list_scroll_pane

0x0e73,	// (0x0005e4b0) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0e73,	// (0x0005e4b0) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0e80,	// (0x0005e4bd) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0e80,	// (0x0005e4bd) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0e8d,	// (0x0005e4ca) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0e8d,	// (0x0005e4ca) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0e9a,	// (0x0005e4d7) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0e9a,	// (0x0005e4d7) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0eb5,	// (0x0005e4f2) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0eb5,	// (0x0005e4f2) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0ed0,	// (0x0005e50d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0ed0,	// (0x0005e50d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0eeb,	// (0x0005e528) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0eeb,	// (0x0005e528) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0f06,	// (0x0005e543) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0f06,	// (0x0005e543) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9a,	// (0x0006d1d7) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9a,	// (0x0006d1d7) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4e20,	// (0x0006245d) cell_vkb_candidate_pane_cp1_ParamLimits

0x4e20,	// (0x0006245d) cell_vkb_candidate_pane_cp1

0x4998,	// (0x00061fd5) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4998,	// (0x00061fd5) fep_vkb_candidate_drop_down_list_pane_g1

0x4e40,	// (0x0006247d) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4e40,	// (0x0006247d) fep_vkb_candidate_drop_down_list_pane_g2

0x4e4d,	// (0x0006248a) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4e4d,	// (0x0006248a) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x0006d1e8) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbab,	// (0x0006d1e8) fep_vkb_candidate_drop_down_list_pane_g

0x4e5a,	// (0x00062497) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4e5a,	// (0x00062497) fep_vkb_candidate_drop_down_list_scroll_pane

0x4e67,	// (0x000624a4) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4e67,	// (0x000624a4) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4e74,	// (0x000624b1) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4e74,	// (0x000624b1) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4e80,	// (0x000624bd) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4e80,	// (0x000624bd) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4e8c,	// (0x000624c9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4e8c,	// (0x000624c9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4ead,	// (0x000624ea) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4ead,	// (0x000624ea) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4ece,	// (0x0006250b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4ece,	// (0x0006250b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4eef,	// (0x0006252c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4eef,	// (0x0006252c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4f10,	// (0x0006254d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4f10,	// (0x0006254d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0006d1ef) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0006d1ef) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x91cd,	// (0x0006680a) title_pane_g1_ParamLimits

0x91e0,	// (0x0006681d) title_pane_g2_ParamLimits

0xf529,	// (0x0006cb66) title_pane_g_ParamLimits

0xbf83,	// (0x000695c0) aid_call2_pane

0xbf8b,	// (0x000695c8) aid_call_pane

0xbf93,	// (0x000695d0) popup_clock_analogue_window_g1

0xbf93,	// (0x000695d0) popup_clock_analogue_window_g2

0xf228,	// (0x0006c865) popup_clock_analogue_window_g3

0xf231,	// (0x0006c86e) popup_clock_analogue_window_g4

0x6fa2,	// (0x000645df) popup_clock_analogue_window_g5

0x0004,

0xf6c9,	// (0x0006cd06) popup_clock_analogue_window_g

0xf239,	// (0x0006c876) popup_clock_analogue_window_t1

0xf247,	// (0x0006c884) clock_digital_number_pane_ParamLimits

0xf247,	// (0x0006c884) clock_digital_number_pane

0xf253,	// (0x0006c890) clock_digital_number_pane_cp02_ParamLimits

0xf253,	// (0x0006c890) clock_digital_number_pane_cp02

0xf25f,	// (0x0006c89c) clock_digital_number_pane_cp03_ParamLimits

0xf25f,	// (0x0006c89c) clock_digital_number_pane_cp03

0xf26b,	// (0x0006c8a8) clock_digital_number_pane_cp04_ParamLimits

0xf26b,	// (0x0006c8a8) clock_digital_number_pane_cp04

0xf277,	// (0x0006c8b4) clock_digital_separator_pane_ParamLimits

0xf277,	// (0x0006c8b4) clock_digital_separator_pane

0xf283,	// (0x0006c8c0) popup_clock_digital_window_t1_ParamLimits

0xf283,	// (0x0006c8c0) popup_clock_digital_window_t1

0x6fa2,	// (0x000645df) clock_digital_number_pane_g1

0x6fa2,	// (0x000645df) clock_digital_number_pane_g2

0x0001,

0xf6d4,	// (0x0006cd11) clock_digital_number_pane_g

0x6fa2,	// (0x000645df) clock_digital_separator_pane_g1

0x6fa2,	// (0x000645df) clock_digital_separator_pane_g2

0x0001,

0xf6d4,	// (0x0006cd11) clock_digital_separator_pane_g

0xad24,	// (0x00068361) aid_fill_nsta_ParamLimits

0xae5a,	// (0x00068497) indicator_nsta_pane_ParamLimits

0x0510,	// (0x0005db4d) popup_clock_analogue_window

0x0510,	// (0x0005db4d) popup_clock_digital_window

0xcdde,	// (0x0006a41b) grid_indicator_nsta_pane_ParamLimits

0x4049,	// (0x00061686) clock_nsta_pane_t2

0x0001,

0xfa78,	// (0x0006d0b5) clock_nsta_pane_t

0xf209,	// (0x0006c846) aid_size_max_handle

0x9f61,	// (0x0006759e) aid_size_min_handle

0xc3f1,	// (0x00069a2e) editor_scroll_pane

0x4f2b,	// (0x00062568) ex_editor_pane

0x818b,	// (0x000657c8) scroll_pane_cp13

0x8001,	// (0x0006563e) scroll_pane_cp14

0xbfc2,	// (0x000695ff) scroll_pane_cp36

0xa02b,	// (0x00067668) list_single_graphic_hl_pane_cp2_ParamLimits

0xa02b,	// (0x00067668) list_single_graphic_hl_pane_cp2

0xb4f7,	// (0x00068b34) list_single_graphic_hl_pane_ParamLimits

0xb4f7,	// (0x00068b34) list_single_graphic_hl_pane

0xb5e5,	// (0x00068c22) aid_size_min_hl_cp1

0x4f33,	// (0x00062570) list_highlight_pane_cp34_ParamLimits

0x4f33,	// (0x00062570) list_highlight_pane_cp34

0x4f44,	// (0x00062581) list_single_graphic_hl_pane_g1_ParamLimits

0x4f44,	// (0x00062581) list_single_graphic_hl_pane_g1

0xb5ee,	// (0x00068c2b) list_single_graphic_hl_pane_g2_ParamLimits

0xb5ee,	// (0x00068c2b) list_single_graphic_hl_pane_g2

0xb5ee,	// (0x00068c2b) list_single_graphic_hl_pane_g3_ParamLimits

0xb5ee,	// (0x00068c2b) list_single_graphic_hl_pane_g3

0xc37c,	// (0x000699b9) list_single_graphic_hl_pane_g4_ParamLimits

0xc37c,	// (0x000699b9) list_single_graphic_hl_pane_g4

0xb5fa,	// (0x00068c37) list_single_graphic_hl_pane_g5_ParamLimits

0xb5fa,	// (0x00068c37) list_single_graphic_hl_pane_g5

0x0004,

0xfbc3,	// (0x0006d200) list_single_graphic_hl_pane_g_ParamLimits

0xfbc3,	// (0x0006d200) list_single_graphic_hl_pane_g

0xb60e,	// (0x00068c4b) list_single_graphic_hl_pane_t1_ParamLimits

0xb60e,	// (0x00068c4b) list_single_graphic_hl_pane_t1

0x4f51,	// (0x0006258e) aid_size_min_hl_cp2

0x4f5a,	// (0x00062597) list_highlight_pane_cp34_cp2_ParamLimits

0x4f5a,	// (0x00062597) list_highlight_pane_cp34_cp2

0x4f44,	// (0x00062581) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4f44,	// (0x00062581) list_single_graphic_hl_pane_g1_cp2

0x4f67,	// (0x000625a4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4f67,	// (0x000625a4) list_single_graphic_hl_pane_g2_cp2

0xd1e9,	// (0x0006a826) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd1e9,	// (0x0006a826) list_single_graphic_hl_pane_g3_cp2

0xbeda,	// (0x00069517) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbeda,	// (0x00069517) list_single_graphic_hl_pane_g4_cp2

0x4f81,	// (0x000625be) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4f81,	// (0x000625be) list_single_graphic_hl_pane_g5_cp2

0xa443,	// (0x00067a80) control_pane_g4_ParamLimits

0xa443,	// (0x00067a80) control_pane_g4

0x8434,	// (0x00065a71) bg_popup_sub_pane_cp10_ParamLimits

0x4732,	// (0x00061d6f) list_choice_list_pane_ParamLimits

0x4741,	// (0x00061d7e) scroll_pane_cp23

0x7132,	// (0x0006476f) bg_popup_preview_window_pane_cp02_ParamLimits

0x4d50,	// (0x0006238d) list_preview_fixed_pane_ParamLimits

0x4d66,	// (0x000623a3) list_preview_fixed_pane_cp_ParamLimits

0x4d66,	// (0x000623a3) list_preview_fixed_pane_cp

0x4d72,	// (0x000623af) popup_preview_fixed_window_g1_ParamLimits

0x4d72,	// (0x000623af) popup_preview_fixed_window_g1

0x4d7e,	// (0x000623bb) popup_preview_fixed_window_g2_ParamLimits

0x4d7e,	// (0x000623bb) popup_preview_fixed_window_g2

0x0002,

0xfb4b,	// (0x0006d188) popup_preview_fixed_window_g_ParamLimits

0xfb4b,	// (0x0006d188) popup_preview_fixed_window_g

0xf17d,	// (0x0006c7ba) aid_navi_side_left_pane_ParamLimits

0xf192,	// (0x0006c7cf) aid_navi_side_right_pane_ParamLimits

0xf1aa,	// (0x0006c7e7) navi_icon_pane_stacon_ParamLimits

0xf1be,	// (0x0006c7fb) navi_navi_pane_stacon_ParamLimits

0xf1aa,	// (0x0006c7e7) navi_text_pane_stacon_ParamLimits

0xe7a7,	// (0x0006bde4) main_text_info_pane

0x4fab,	// (0x000625e8) listscroll_text_info_pane

0x4fb3,	// (0x000625f0) list_text_info_pane_ParamLimits

0x4fb3,	// (0x000625f0) list_text_info_pane

0x4fc2,	// (0x000625ff) scroll_pane_cp24_ParamLimits

0x4fc2,	// (0x000625ff) scroll_pane_cp24

0xd1f7,	// (0x0006a834) list_text_info_pane_t1_ParamLimits

0xd1f7,	// (0x0006a834) list_text_info_pane_t1

0xa5eb,	// (0x00067c28) popup_fast_swap2_window_ParamLimits

0xa5eb,	// (0x00067c28) popup_fast_swap2_window

0x5014,	// (0x00062651) aid_size_cell_fast2

0x6f98,	// (0x000645d5) bg_popup_window_pane_cp17

0x501e,	// (0x0006265b) heading_pane_cp2

0x5026,	// (0x00062663) listscroll_fast2_pane

0x502e,	// (0x0006266b) grid_fast2_pane

0x5038,	// (0x00062675) listscroll_fast2_pane_g1

0x5040,	// (0x0006267d) listscroll_fast2_pane_g2

0x0001,

0xfbce,	// (0x0006d20b) listscroll_fast2_pane_g

0x818b,	// (0x000657c8) scroll_pane_cp26

0x504a,	// (0x00062687) cell_fast2_pane_ParamLimits

0x504a,	// (0x00062687) cell_fast2_pane

0x505f,	// (0x0006269c) cell_fast2_pane_g1

0x5068,	// (0x000626a5) cell_fast2_pane_g2

0x5071,	// (0x000626ae) cell_fast2_pane_g3

0x0002,

0xfbd3,	// (0x0006d210) cell_fast2_pane_g

0x7f38,	// (0x00065575) grid_highlight_pane_cp9

0xf4cd,	// (0x0006cb0a) main_eswt_pane_ParamLimits

0xf4cd,	// (0x0006cb0a) main_eswt_pane

0x4fd7,	// (0x00062614) list_single_text_info_pane

0x5079,	// (0x000626b6) eswt_ctrl_button_pane

0x5079,	// (0x000626b6) eswt_ctrl_canvas_pane

0xd213,	// (0x0006a850) eswt_ctrl_combo_pane

0x5079,	// (0x000626b6) eswt_ctrl_default_pane

0x5079,	// (0x000626b6) eswt_ctrl_label_pane

0x5089,	// (0x000626c6) eswt_ctrl_wait_pane

0xd21b,	// (0x0006a858) eswt_shell_pane

0x6f98,	// (0x000645d5) listscroll_eswt_app_pane

0x50b1,	// (0x000626ee) popup_eswt_tasktip_window_ParamLimits

0x50b1,	// (0x000626ee) popup_eswt_tasktip_window

0x1fde,	// (0x0005f61b) bg_popup_window_pane_cp18

0x50ca,	// (0x00062707) eswt_control_pane_g1_ParamLimits

0x50ca,	// (0x00062707) eswt_control_pane_g1

0x50d7,	// (0x00062714) eswt_control_pane_g2_ParamLimits

0x50d7,	// (0x00062714) eswt_control_pane_g2

0x50e4,	// (0x00062721) eswt_control_pane_g3_ParamLimits

0x50e4,	// (0x00062721) eswt_control_pane_g3

0x50f1,	// (0x0006272e) eswt_control_pane_g4_ParamLimits

0x50f1,	// (0x0006272e) eswt_control_pane_g4

0x0003,

0xfbda,	// (0x0006d217) eswt_control_pane_g_ParamLimits

0xfbda,	// (0x0006d217) eswt_control_pane_g

0x8059,	// (0x00065696) bg_button_pane_ParamLimits

0x8059,	// (0x00065696) bg_button_pane

0x7f4d,	// (0x0006558a) common_borders_pane_copy2_ParamLimits

0x7f4d,	// (0x0006558a) common_borders_pane_copy2

0x50fe,	// (0x0006273b) control_button_pane_g1_ParamLimits

0x50fe,	// (0x0006273b) control_button_pane_g1

0x510a,	// (0x00062747) control_button_pane_g2_ParamLimits

0x510a,	// (0x00062747) control_button_pane_g2

0x5116,	// (0x00062753) control_button_pane_g3_ParamLimits

0x5116,	// (0x00062753) control_button_pane_g3

0x0002,

0xfbe3,	// (0x0006d220) control_button_pane_g_ParamLimits

0xfbe3,	// (0x0006d220) control_button_pane_g

0x512a,	// (0x00062767) control_button_pane_t1

0x5138,	// (0x00062775) control_button_pane_t2

0x0001,

0xfbea,	// (0x0006d227) control_button_pane_t

0x1f52,	// (0x0005f58f) bg_button_pane_g1

0x1f62,	// (0x0005f59f) bg_button_pane_g2

0x1f5a,	// (0x0005f597) bg_button_pane_g3

0x1f72,	// (0x0005f5af) bg_button_pane_g4

0x1f6a,	// (0x0005f5a7) bg_button_pane_g5

0x1f7a,	// (0x0005f5b7) bg_button_pane_g6

0x1f82,	// (0x0005f5bf) bg_button_pane_g7

0x1f92,	// (0x0005f5cf) bg_button_pane_g8

0x1f8a,	// (0x0005f5c7) bg_button_pane_g9

0x0008,

0xf82b,	// (0x0006ce68) bg_button_pane_g

0x46ed,	// (0x00061d2a) common_borders_pane_ParamLimits

0x46ed,	// (0x00061d2a) common_borders_pane

0x50ca,	// (0x00062707) eswt_control_pane_g1_copy1_ParamLimits

0x50ca,	// (0x00062707) eswt_control_pane_g1_copy1

0x50d7,	// (0x00062714) eswt_control_pane_g2_copy1_ParamLimits

0x50d7,	// (0x00062714) eswt_control_pane_g2_copy1

0x50e4,	// (0x00062721) eswt_control_pane_g3_copy1_ParamLimits

0x50e4,	// (0x00062721) eswt_control_pane_g3_copy1

0x50f1,	// (0x0006272e) eswt_control_pane_g4_copy1_ParamLimits

0x50f1,	// (0x0006272e) eswt_control_pane_g4_copy1

0x4728,	// (0x00061d65) bg_eswt_ctrl_canvas_pane_g1

0x46ed,	// (0x00061d2a) common_borders_pane_cp2_ParamLimits

0x46ed,	// (0x00061d2a) common_borders_pane_cp2

0x46ed,	// (0x00061d2a) common_borders_pane_cp3_ParamLimits

0x46ed,	// (0x00061d2a) common_borders_pane_cp3

0x5146,	// (0x00062783) separator_horizontal_pane

0x514e,	// (0x0006278b) separator_vertical_pane

0x50ca,	// (0x00062707) eswt_control_pane_g1_copy2_ParamLimits

0x50ca,	// (0x00062707) eswt_control_pane_g1_copy2

0x50d7,	// (0x00062714) eswt_control_pane_g2_copy2_ParamLimits

0x50d7,	// (0x00062714) eswt_control_pane_g2_copy2

0x50e4,	// (0x00062721) eswt_control_pane_g3_copy2_ParamLimits

0x50e4,	// (0x00062721) eswt_control_pane_g3_copy2

0x50f1,	// (0x0006272e) eswt_control_pane_g4_copy2_ParamLimits

0x50f1,	// (0x0006272e) eswt_control_pane_g4_copy2

0x6f98,	// (0x000645d5) common_borders_pane_cp4

0x5157,	// (0x00062794) separator_horizontal_pane_g1

0x5160,	// (0x0006279d) separator_horizontal_pane_g2

0x5169,	// (0x000627a6) separator_horizontal_pane_g3

0x0002,

0xfbef,	// (0x0006d22c) separator_horizontal_pane_g

0x50ca,	// (0x00062707) eswt_control_pane_g1_copy3_ParamLimits

0x50ca,	// (0x00062707) eswt_control_pane_g1_copy3

0x50d7,	// (0x00062714) eswt_control_pane_g2_copy3_ParamLimits

0x50d7,	// (0x00062714) eswt_control_pane_g2_copy3

0x50e4,	// (0x00062721) eswt_control_pane_g3_copy3_ParamLimits

0x50e4,	// (0x00062721) eswt_control_pane_g3_copy3

0x50f1,	// (0x0006272e) eswt_control_pane_g4_copy3_ParamLimits

0x50f1,	// (0x0006272e) eswt_control_pane_g4_copy3

0x6f98,	// (0x000645d5) common_borders_pane_cp5

0x5172,	// (0x000627af) separator_vertical_pane_g1

0x517b,	// (0x000627b8) separator_vertical_pane_g2

0x5184,	// (0x000627c1) separator_vertical_pane_g3

0x0002,

0xfbf6,	// (0x0006d233) separator_vertical_pane_g

0x50ca,	// (0x00062707) eswt_control_pane_g1_copy4_ParamLimits

0x50ca,	// (0x00062707) eswt_control_pane_g1_copy4

0x50d7,	// (0x00062714) eswt_control_pane_g2_copy4_ParamLimits

0x50d7,	// (0x00062714) eswt_control_pane_g2_copy4

0x50e4,	// (0x00062721) eswt_control_pane_g3_copy4_ParamLimits

0x50e4,	// (0x00062721) eswt_control_pane_g3_copy4

0x50f1,	// (0x0006272e) eswt_control_pane_g4_copy4_ParamLimits

0x50f1,	// (0x0006272e) eswt_control_pane_g4_copy4

0xd23b,	// (0x0006a878) eswt_ctrl_combo_button_pane

0xd243,	// (0x0006a880) eswt_ctrl_input_pane

0xd24b,	// (0x0006a888) popup_choice_list_window_cp70

0xd253,	// (0x0006a890) eswt_ctrl_input_pane_t1

0x6f98,	// (0x000645d5) input_focus_pane_cp70

0x46ed,	// (0x00061d2a) bg_button_pane_cp70_ParamLimits

0x46ed,	// (0x00061d2a) bg_button_pane_cp70

0xd261,	// (0x0006a89e) eswt_ctrl_combo_button_pane_g1

0x51bb,	// (0x000627f8) wait_bar_pane_cp70

0x1fde,	// (0x0005f61b) bg_popup_window_pane_cp70_ParamLimits

0x1fde,	// (0x0005f61b) bg_popup_window_pane_cp70

0x51c3,	// (0x00062800) popup_eswt_tasktip_window_t1

0x51d9,	// (0x00062816) wait_bar_pane_cp71_ParamLimits

0x51d9,	// (0x00062816) wait_bar_pane_cp71

0x51e5,	// (0x00062822) grid_eswt_app_pane

0x8372,	// (0x000659af) scroll_pane_cp70

0xd269,	// (0x0006a8a6) cell_eswt_app_pane_ParamLimits

0xd269,	// (0x0006a8a6) cell_eswt_app_pane

0xd293,	// (0x0006a8d0) cell_eswt_app_pane_g1_ParamLimits

0xd293,	// (0x0006a8d0) cell_eswt_app_pane_g1

0xd2c2,	// (0x0006a8ff) cell_eswt_app_pane_g2_ParamLimits

0xd2c2,	// (0x0006a8ff) cell_eswt_app_pane_g2

0x0001,

0xfbfd,	// (0x0006d23a) cell_eswt_app_pane_g_ParamLimits

0xfbfd,	// (0x0006d23a) cell_eswt_app_pane_g

0xd2e6,	// (0x0006a923) cell_eswt_app_pane_t1_ParamLimits

0xd2e6,	// (0x0006a923) cell_eswt_app_pane_t1

0x52a3,	// (0x000628e0) grid_highlight_pane_cp70_ParamLimits

0x52a3,	// (0x000628e0) grid_highlight_pane_cp70

0xc2f7,	// (0x00069934) set_content_pane_g1

0xa3d5,	// (0x00067a12) status_small_volume_pane

0xb624,	// (0x00068c61) status_small_volume_pane_g1

0xb62c,	// (0x00068c69) volume_small2_pane

0xb635,	// (0x00068c72) volume_small2_pane_g1

0xb63e,	// (0x00068c7b) volume_small2_pane_g2

0xb647,	// (0x00068c84) volume_small2_pane_g3

0xb650,	// (0x00068c8d) volume_small2_pane_g4

0xb659,	// (0x00068c96) volume_small2_pane_g5

0xb662,	// (0x00068c9f) volume_small2_pane_g6

0xb66b,	// (0x00068ca8) volume_small2_pane_g7

0xb674,	// (0x00068cb1) volume_small2_pane_g8

0xb67d,	// (0x00068cba) volume_small2_pane_g9

0xb686,	// (0x00068cc3) volume_small2_pane_g10

0x0009,

0xfc02,	// (0x0006d23f) volume_small2_pane_g

0x4ae0,	// (0x0006211d) fep_vkb_top_text_pane_g1_ParamLimits

0xd15b,	// (0x0006a798) fep_vkb_top_text_pane_t1_ParamLimits

0x4d8a,	// (0x000623c7) popup_preview_fixed_window_g3_ParamLimits

0x4d8a,	// (0x000623c7) popup_preview_fixed_window_g3

0xac62,	// (0x0006829f) popup_toolbar_trans_pane

0xca7b,	// (0x0006a0b8) aid_height_set_list_ParamLimits

0x332d,	// (0x0006096a) aid_size_parent_ParamLimits

0x8434,	// (0x00065a71) list_highlight_pane_cp2_ParamLimits

0xc2f7,	// (0x00069934) set_content_pane_g1_ParamLimits

0xcbe3,	// (0x0006a220) list_single_image_pane_ParamLimits

0xcbe3,	// (0x0006a220) list_single_image_pane

0xd318,	// (0x0006a955) aid_size_cell_image_ParamLimits

0xd318,	// (0x0006a955) aid_size_cell_image

0xd325,	// (0x0006a962) grid_single_image_pane_ParamLimits

0xd325,	// (0x0006a962) grid_single_image_pane

0xd1bf,	// (0x0006a7fc) list_single_image_pane_g1_ParamLimits

0xd1bf,	// (0x0006a7fc) list_single_image_pane_g1

0x4db8,	// (0x000623f5) list_single_image_pane_g2_ParamLimits

0x4db8,	// (0x000623f5) list_single_image_pane_g2

0x0001,

0xfc17,	// (0x0006d254) list_single_image_pane_g_ParamLimits

0xfc17,	// (0x0006d254) list_single_image_pane_g

0x52c8,	// (0x00062905) list_single_image_pane_t1_ParamLimits

0x52c8,	// (0x00062905) list_single_image_pane_t1

0xd331,	// (0x0006a96e) cell_image_list_pane_ParamLimits

0xd331,	// (0x0006a96e) cell_image_list_pane

0xd345,	// (0x0006a982) cell_image_list_pane_g1

0xd34e,	// (0x0006a98b) cell_image_list_pane_g2

0x0001,

0xfc1c,	// (0x0006d259) cell_image_list_pane_g

0xd357,	// (0x0006a994) aid_size_cell_tb_trans_pane

0x8059,	// (0x00065696) bg_tb_trans_pane

0xd369,	// (0x0006a9a6) grid_tb_trans_pane

0x1f52,	// (0x0005f58f) bg_tb_trans_pane_g1

0x1f62,	// (0x0005f59f) bg_tb_trans_pane_g2

0x1f5a,	// (0x0005f597) bg_tb_trans_pane_g3

0x1f72,	// (0x0005f5af) bg_tb_trans_pane_g4

0x1f6a,	// (0x0005f5a7) bg_tb_trans_pane_g5

0x1f92,	// (0x0005f5cf) bg_tb_trans_pane_g6

0x1f8a,	// (0x0005f5c7) bg_tb_trans_pane_g7

0x1f7a,	// (0x0005f5b7) bg_tb_trans_pane_g8

0x1f82,	// (0x0005f5bf) bg_tb_trans_pane_g9

0x0008,

0xfc21,	// (0x0006d25e) bg_tb_trans_pane_g

0xd37d,	// (0x0006a9ba) cell_toolbar_trans_pane_ParamLimits

0xd37d,	// (0x0006a9ba) cell_toolbar_trans_pane

0x4728,	// (0x00061d65) cell_toolbar_trans_pane_g1

0xcea7,	// (0x0006a4e4) list_form2_midp_pane_t1

0xceb5,	// (0x0006a4f2) list_form2_midp_pane_t2

0x0001,

0xfabe,	// (0x0006d0fb) list_form2_midp_pane_t

0x423a,	// (0x00061877) scroll_pane_cp51_ParamLimits

0x43f6,	// (0x00061a33) form2_midp_wait_pane_g1

0x43ff,	// (0x00061a3c) form2_midp_wait_pane_g2

0x4408,	// (0x00061a45) form2_midp_wait_pane_g3

0x0002,

0xfad3,	// (0x0006d110) form2_midp_wait_pane_g

0x6ffa,	// (0x00064637) list_highlight_pane_cp21_ParamLimits

0x4450,	// (0x00061a8d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x445f,	// (0x00061a9c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x34fd,	// (0x00060b3a) list_single_2graphic_im_pane_ParamLimits

0x34fd,	// (0x00060b3a) list_single_2graphic_im_pane

0xd3a3,	// (0x0006a9e0) list_single_2graphic_im_pane_g1_ParamLimits

0xd3a3,	// (0x0006a9e0) list_single_2graphic_im_pane_g1

0xd3b4,	// (0x0006a9f1) list_single_2graphic_im_pane_g2_ParamLimits

0xd3b4,	// (0x0006a9f1) list_single_2graphic_im_pane_g2

0xd3c0,	// (0x0006a9fd) list_single_2graphic_im_pane_g3_ParamLimits

0xd3c0,	// (0x0006a9fd) list_single_2graphic_im_pane_g3

0x0003,

0xfc34,	// (0x0006d271) list_single_2graphic_im_pane_g_ParamLimits

0xfc34,	// (0x0006d271) list_single_2graphic_im_pane_g

0xd3d4,	// (0x0006aa11) list_single_2graphic_im_pane_t1_ParamLimits

0xd3d4,	// (0x0006aa11) list_single_2graphic_im_pane_t1

0x4d96,	// (0x000623d3) list_single_graphic_2heading_pane_fp_ParamLimits

0x4d96,	// (0x000623d3) list_single_graphic_2heading_pane_fp

0xed64,	// (0x0006c3a1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xed64,	// (0x0006c3a1) list_single_graphic_2heading_pane_fp_g1

0x4dac,	// (0x000623e9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4dac,	// (0x000623e9) list_single_graphic_2heading_pane_fp_g2

0xd1bf,	// (0x0006a7fc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd1bf,	// (0x0006a7fc) list_single_graphic_2heading_pane_fp_g3

0x4db8,	// (0x000623f5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4db8,	// (0x000623f5) list_single_graphic_2heading_pane_fp_g4

0x4dcc,	// (0x00062409) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4dcc,	// (0x00062409) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5b,	// (0x0006d198) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5b,	// (0x0006d198) list_single_graphic_2heading_pane_fp_g

0xee82,	// (0x0006c4bf) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xee82,	// (0x0006c4bf) list_single_graphic_2heading_pane_fp_t1

0xed9c,	// (0x0006c3d9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xed9c,	// (0x0006c3d9) list_single_graphic_2heading_pane_fp_t2

0xee98,	// (0x0006c4d5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xee98,	// (0x0006c4d5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3d,	// (0x0006d27a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3d,	// (0x0006d27a) list_single_graphic_2heading_pane_fp_t

0x47b4,	// (0x00061df1) fep_hwr_write_pane_g5_ParamLimits

0x47b4,	// (0x00061df1) fep_hwr_write_pane_g5

0x47c0,	// (0x00061dfd) fep_hwr_write_pane_g6_ParamLimits

0x47c0,	// (0x00061dfd) fep_hwr_write_pane_g6

0xd21b,	// (0x0006a858) eswt_shell_pane_ParamLimits

0x1fde,	// (0x0005f61b) bg_popup_window_pane_cp18_ParamLimits

0x50c2,	// (0x000626ff) heading_pane_cp70

0x51c3,	// (0x00062800) popup_eswt_tasktip_window_t1_ParamLimits

0xad7f,	// (0x000683bc) aid_touch_tab_arrow_left

0xad95,	// (0x000683d2) aid_touch_tab_arrow_right

0x91f8,	// (0x00066835) title_pane_g3_ParamLimits

0x91f8,	// (0x00066835) title_pane_g3

0x8021,	// (0x0006565e) set_value_pane_g1

0xac62,	// (0x0006829f) popup_toolbar_trans_pane_ParamLimits

0xd357,	// (0x0006a994) aid_size_cell_tb_trans_pane_ParamLimits

0x8059,	// (0x00065696) bg_tb_trans_pane_ParamLimits

0xd369,	// (0x0006a9a6) grid_tb_trans_pane_ParamLimits

0x7132,	// (0x0006476f) cont_note_pane_ParamLimits

0x7132,	// (0x0006476f) cont_note_pane

0x7f4d,	// (0x0006558a) cont_snote2_single_text_pane_ParamLimits

0x7f4d,	// (0x0006558a) cont_snote2_single_text_pane

0x7f4d,	// (0x0006558a) cont_snote2_single_graphic_pane_ParamLimits

0x7f4d,	// (0x0006558a) cont_snote2_single_graphic_pane

0x25f8,	// (0x0005fc35) cont_note_wait_pane_ParamLimits

0x25f8,	// (0x0005fc35) cont_note_wait_pane

0x25f8,	// (0x0005fc35) cont_note_image_pane_ParamLimits

0x25f8,	// (0x0005fc35) cont_note_image_pane

0x53be,	// (0x000629fb) popup_note2_window_g1_ParamLimits

0x53be,	// (0x000629fb) popup_note2_window_g1

0xd412,	// (0x0006aa4f) popup_note2_window_t1_ParamLimits

0xd412,	// (0x0006aa4f) popup_note2_window_t1

0xd457,	// (0x0006aa94) popup_note2_window_t2_ParamLimits

0xd457,	// (0x0006aa94) popup_note2_window_t2

0xd49c,	// (0x0006aad9) popup_note2_window_t3_ParamLimits

0xd49c,	// (0x0006aad9) popup_note2_window_t3

0x54be,	// (0x00062afb) popup_note2_window_t4_ParamLimits

0x54be,	// (0x00062afb) popup_note2_window_t4

0x71b6,	// (0x000647f3) popup_note2_window_t5_ParamLimits

0x71b6,	// (0x000647f3) popup_note2_window_t5

0x0004,

0xfc49,	// (0x0006d286) popup_note2_window_t_ParamLimits

0xfc49,	// (0x0006d286) popup_note2_window_t

0x54ed,	// (0x00062b2a) popup_note2_image_window_g1_ParamLimits

0x54ed,	// (0x00062b2a) popup_note2_image_window_g1

0xd4e1,	// (0x0006ab1e) popup_note2_image_window_g2_ParamLimits

0xd4e1,	// (0x0006ab1e) popup_note2_image_window_g2

0x0001,

0xfc54,	// (0x0006d291) popup_note2_image_window_g_ParamLimits

0xfc54,	// (0x0006d291) popup_note2_image_window_g

0x550b,	// (0x00062b48) popup_note2_image_window_t1_ParamLimits

0x550b,	// (0x00062b48) popup_note2_image_window_t1

0x5523,	// (0x00062b60) popup_note2_image_window_t2_ParamLimits

0x5523,	// (0x00062b60) popup_note2_image_window_t2

0x553b,	// (0x00062b78) popup_note2_image_window_t3_ParamLimits

0x553b,	// (0x00062b78) popup_note2_image_window_t3

0x0002,

0xfc59,	// (0x0006d296) popup_note2_image_window_t_ParamLimits

0xfc59,	// (0x0006d296) popup_note2_image_window_t

0x2606,	// (0x0005fc43) popup_note2_wait_window_g1_ParamLimits

0x2606,	// (0x0005fc43) popup_note2_wait_window_g1

0x2612,	// (0x0005fc4f) popup_note2_wait_window_g2_ParamLimits

0x2612,	// (0x0005fc4f) popup_note2_wait_window_g2

0x261e,	// (0x0005fc5b) popup_note2_wait_window_g3_ParamLimits

0x261e,	// (0x0005fc5b) popup_note2_wait_window_g3

0x0002,

0xf80d,	// (0x0006ce4a) popup_note2_wait_window_g_ParamLimits

0xf80d,	// (0x0006ce4a) popup_note2_wait_window_g

0x5557,	// (0x00062b94) popup_note2_wait_window_t1_ParamLimits

0x5557,	// (0x00062b94) popup_note2_wait_window_t1

0x5575,	// (0x00062bb2) popup_note2_wait_window_t2_ParamLimits

0x5575,	// (0x00062bb2) popup_note2_wait_window_t2

0x5593,	// (0x00062bd0) popup_note2_wait_window_t3_ParamLimits

0x5593,	// (0x00062bd0) popup_note2_wait_window_t3

0x55a5,	// (0x00062be2) popup_note2_wait_window_t4_ParamLimits

0x55a5,	// (0x00062be2) popup_note2_wait_window_t4

0x0003,

0xfc60,	// (0x0006d29d) popup_note2_wait_window_t_ParamLimits

0xfc60,	// (0x0006d29d) popup_note2_wait_window_t

0x55b7,	// (0x00062bf4) wait_bar2_pane_ParamLimits

0x55b7,	// (0x00062bf4) wait_bar2_pane

0x55cf,	// (0x00062c0c) popup_snote2_single_text_window_g1_ParamLimits

0x55cf,	// (0x00062c0c) popup_snote2_single_text_window_g1

0x55f7,	// (0x00062c34) popup_snote2_single_text_window_t1_ParamLimits

0x55f7,	// (0x00062c34) popup_snote2_single_text_window_t1

0x5643,	// (0x00062c80) popup_snote2_single_text_window_t2_ParamLimits

0x5643,	// (0x00062c80) popup_snote2_single_text_window_t2

0x568f,	// (0x00062ccc) popup_snote2_single_text_window_t3_ParamLimits

0x568f,	// (0x00062ccc) popup_snote2_single_text_window_t3

0x56d0,	// (0x00062d0d) popup_snote2_single_text_window_t4_ParamLimits

0x56d0,	// (0x00062d0d) popup_snote2_single_text_window_t4

0x5706,	// (0x00062d43) popup_snote2_single_text_window_t5_ParamLimits

0x5706,	// (0x00062d43) popup_snote2_single_text_window_t5

0x0004,

0xfc69,	// (0x0006d2a6) popup_snote2_single_text_window_t_ParamLimits

0xfc69,	// (0x0006d2a6) popup_snote2_single_text_window_t

0xd4f3,	// (0x0006ab30) popup_snote2_single_graphic_window_g1_ParamLimits

0xd4f3,	// (0x0006ab30) popup_snote2_single_graphic_window_g1

0x5759,	// (0x00062d96) popup_snote2_single_graphic_window_g2_ParamLimits

0x5759,	// (0x00062d96) popup_snote2_single_graphic_window_g2

0x0001,

0xfc74,	// (0x0006d2b1) popup_snote2_single_graphic_window_g_ParamLimits

0xfc74,	// (0x0006d2b1) popup_snote2_single_graphic_window_g

0x5781,	// (0x00062dbe) popup_snote2_single_graphic_window_t1_ParamLimits

0x5781,	// (0x00062dbe) popup_snote2_single_graphic_window_t1

0x57cd,	// (0x00062e0a) popup_snote2_single_graphic_window_t2_ParamLimits

0x57cd,	// (0x00062e0a) popup_snote2_single_graphic_window_t2

0x568f,	// (0x00062ccc) popup_snote2_single_graphic_window_t3_ParamLimits

0x568f,	// (0x00062ccc) popup_snote2_single_graphic_window_t3

0x56d0,	// (0x00062d0d) popup_snote2_single_graphic_window_t4_ParamLimits

0x56d0,	// (0x00062d0d) popup_snote2_single_graphic_window_t4

0x5706,	// (0x00062d43) popup_snote2_single_graphic_window_t5_ParamLimits

0x5706,	// (0x00062d43) popup_snote2_single_graphic_window_t5

0x0004,

0xfc79,	// (0x0006d2b6) popup_snote2_single_graphic_window_t_ParamLimits

0xfc79,	// (0x0006d2b6) popup_snote2_single_graphic_window_t

0x40f7,	// (0x00061734) clock_nsta_pane_cp2_t1

0x40f7,	// (0x00061734) clock_nsta_pane_cp2_t2

0x0001,

0xfa94,	// (0x0006d0d1) clock_nsta_pane_cp2_t

0xe858,	// (0x0006be95) form_field_data_wide_pane_g1_ParamLimits

0x8067,	// (0x000656a4) form_field_data_wide_pane_g2_ParamLimits

0x8067,	// (0x000656a4) form_field_data_wide_pane_g2

0x8073,	// (0x000656b0) form_field_data_wide_pane_g3_ParamLimits

0x8073,	// (0x000656b0) form_field_data_wide_pane_g3

0x0002,

0xf64c,	// (0x0006cc89) form_field_data_wide_pane_g_ParamLimits

0xf64c,	// (0x0006cc89) form_field_data_wide_pane_g

0xcdc8,	// (0x0006a405) grid_touch_3_pane_ParamLimits

0xcdc8,	// (0x0006a405) grid_touch_3_pane

0xd51b,	// (0x0006ab58) cell_touch_3_pane_ParamLimits

0xd51b,	// (0x0006ab58) cell_touch_3_pane

0x4728,	// (0x00061d65) cell_touch_3_pane_g1

0x4728,	// (0x00061d65) cell_touch_3_pane_g2

0x0001,

0xfb19,	// (0x0006d156) cell_touch_3_pane_g

0x71e8,	// (0x00064825) cont_query_data_pane

0x71f0,	// (0x0006482d) cont_query_data_pane_cp1

0x5847,	// (0x00062e84) button_value_adjust_pane_cp7

0x584f,	// (0x00062e8c) query_popup_pane_cp3

0xbff4,	// (0x00069631) bg_popup_sub_pane_cp22_ParamLimits

0xa0ca,	// (0x00067707) navi_navi_volume_pane_cp2

0xa0d9,	// (0x00067716) popup_side_volume_key_window_g2

0xa0e8,	// (0x00067725) popup_side_volume_key_window_g3

0x0002,

0xf6e2,	// (0x0006cd1f) popup_side_volume_key_window_g

0xa0f7,	// (0x00067734) popup_side_volume_key_window_t2

0x0001,

0xf6e9,	// (0x0006cd26) popup_side_volume_key_window_t

0xa248,	// (0x00067885) popup_side_volume_key_window_ParamLimits

0x997b,	// (0x00066fb8) list_double_graphic_pane_g4_ParamLimits

0x997b,	// (0x00066fb8) list_double_graphic_pane_g4

0xcbcf,	// (0x0006a20c) list_single_2heading_msg_pane_ParamLimits

0xcbcf,	// (0x0006a20c) list_single_2heading_msg_pane

0xd564,	// (0x0006aba1) list_single_2heading_msg_pane_g1_ParamLimits

0xd564,	// (0x0006aba1) list_single_2heading_msg_pane_g1

0xd570,	// (0x0006abad) list_single_2heading_msg_pane_g2_ParamLimits

0xd570,	// (0x0006abad) list_single_2heading_msg_pane_g2

0xd583,	// (0x0006abc0) list_single_2heading_msg_pane_g3_ParamLimits

0xd583,	// (0x0006abc0) list_single_2heading_msg_pane_g3

0xd58f,	// (0x0006abcc) list_single_2heading_msg_pane_g4_ParamLimits

0xd58f,	// (0x0006abcc) list_single_2heading_msg_pane_g4

0x0003,

0xfc84,	// (0x0006d2c1) list_single_2heading_msg_pane_g_ParamLimits

0xfc84,	// (0x0006d2c1) list_single_2heading_msg_pane_g

0xb68f,	// (0x00068ccc) list_single_2heading_msg_pane_t1_ParamLimits

0xb68f,	// (0x00068ccc) list_single_2heading_msg_pane_t1

0xb6b7,	// (0x00068cf4) list_single_2heading_msg_pane_t2_ParamLimits

0xb6b7,	// (0x00068cf4) list_single_2heading_msg_pane_t2

0xb722,	// (0x00068d5f) list_single_2heading_msg_pane_t3_ParamLimits

0xb722,	// (0x00068d5f) list_single_2heading_msg_pane_t3

0xeeb8,	// (0x0006c4f5) list_single_2heading_msg_pane_t4_ParamLimits

0xeeb8,	// (0x0006c4f5) list_single_2heading_msg_pane_t4

0x0003,

0xfc8d,	// (0x0006d2ca) list_single_2heading_msg_pane_t_ParamLimits

0xfc8d,	// (0x0006d2ca) list_single_2heading_msg_pane_t

0x6fb6,	// (0x000645f3) title_pane_g4_ParamLimits

0x6fb6,	// (0x000645f3) title_pane_g4

0xe904,	// (0x0006bf41) title_pane_stacon_g3_ParamLimits

0xe904,	// (0x0006bf41) title_pane_stacon_g3

0x5381,	// (0x000629be) list_single_2graphic_im_pane_g4_ParamLimits

0x5381,	// (0x000629be) list_single_2graphic_im_pane_g4

0xc920,	// (0x00069f5d) popup_side_volume_key_window_cp

0x38a9,	// (0x00060ee6) main_idle_act2_pane_t1

0x05a0,	// (0x0005dbdd) toolbar_button_pane_g10

0x9801,	// (0x00066e3e) popup_toolbar_window_cp1

0x40e8,	// (0x00061725) clock_nsta_pane_cp_t1

0x40e8,	// (0x00061725) clock_nsta_pane_cp_t2

0x0001,

0xfa8f,	// (0x0006d0cc) clock_nsta_pane_cp_t

0xa0ca,	// (0x00067707) navi_navi_volume_pane_cp2_ParamLimits

0xf2a2,	// (0x0006c8df) popup_side_volume_key_window_g1_ParamLimits

0xa0d9,	// (0x00067716) popup_side_volume_key_window_g2_ParamLimits

0xa0e8,	// (0x00067725) popup_side_volume_key_window_g3_ParamLimits

0xf6e2,	// (0x0006cd1f) popup_side_volume_key_window_g_ParamLimits

0x0b8d,	// (0x0005e1ca) fep_hwr_aid_pane

0x0c34,	// (0x0005e271) bg_fep_hwr_top_pane_g4_ParamLimits

0x4784,	// (0x00061dc1) fep_hwr_top_pane_g1_ParamLimits

0x4796,	// (0x00061dd3) fep_hwr_top_pane_g2_ParamLimits

0x0c54,	// (0x0005e291) fep_hwr_top_pane_g3_ParamLimits

0xfae4,	// (0x0006d121) fep_hwr_top_pane_g_ParamLimits

0x0c69,	// (0x0005e2a6) fep_hwr_top_text_pane_ParamLimits

0x2e02,	// (0x0006043f) aid_touch_tab_arrow_arrow_2

0x2e0b,	// (0x00060448) aid_touch_tab_arrow_left_2

0x0ba1,	// (0x0005e1de) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0bd8,	// (0x0005e215) fep_hwr_prediction_pane

0x48ef,	// (0x00061f2c) fep_vkb_prediction_pane

0xd13b,	// (0x0006a778) fep_vkb_side_pane_g3_ParamLimits

0xd13b,	// (0x0006a778) fep_vkb_side_pane_g3

0x0de4,	// (0x0005e421) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0e50,	// (0x0005e48d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0e5d,	// (0x0005e49a) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb93,	// (0x0006d1d0) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1067,	// (0x0005e6a4) fep_hwr_prediction_pane_g1

0x1071,	// (0x0005e6ae) fep_hwr_prediction_pane_g2

0x1079,	// (0x0005e6b6) fep_hwr_prediction_pane_g3

0x1081,	// (0x0005e6be) fep_hwr_prediction_pane_g4

0x0003,

0xfc96,	// (0x0006d2d3) fep_hwr_prediction_pane_g

0x5874,	// (0x00062eb1) fep_vkb_prediction_pane_g1

0x587e,	// (0x00062ebb) fep_vkb_prediction_pane_g2

0x5886,	// (0x00062ec3) fep_vkb_prediction_pane_g3

0x588e,	// (0x00062ecb) fep_vkb_prediction_pane_g4

0x0003,

0xfc9f,	// (0x0006d2dc) fep_vkb_prediction_pane_g

0xb449,	// (0x00068a86) slider_set_pane_g3

0xb45d,	// (0x00068a9a) slider_set_pane_g4

0xb475,	// (0x00068ab2) slider_set_pane_g5

0xb449,	// (0x00068a86) slider_set_pane_g6

0xb48b,	// (0x00068ac8) slider_set_pane_g7

0x348e,	// (0x00060acb) slider_form_pane_g3

0x3497,	// (0x00060ad4) slider_form_pane_g4

0x349f,	// (0x00060adc) slider_form_pane_g5

0x348e,	// (0x00060acb) slider_form_pane_g6

0xcbc6,	// (0x0006a203) slider_form_pane_g7

0x3b55,	// (0x00061192) slider_set_pane_vc_g3

0x3b5e,	// (0x0006119b) slider_set_pane_vc_g4

0x3b67,	// (0x000611a4) slider_set_pane_vc_g5

0x3b55,	// (0x00061192) slider_set_pane_vc_g6

0x3b70,	// (0x000611ad) slider_set_pane_vc_g7

0x3da6,	// (0x000613e3) slider_form_pane_vc_g1

0x3daf,	// (0x000613ec) slider_form_pane_vc_g2

0x3db8,	// (0x000613f5) slider_form_pane_vc_g3

0x3da6,	// (0x000613e3) slider_form_pane_vc_g4

0x3dc1,	// (0x000613fe) slider_form_pane_vc_g5

0x0004,

0xfa61,	// (0x0006d09e) slider_form_pane_vc_g

0xe7a7,	// (0x0006bde4) main_idle_act3_pane

0x5896,	// (0x00062ed3) ai3_links_pane

0xd5a7,	// (0x0006abe4) popup_ai3_data_window_ParamLimits

0xd5a7,	// (0x0006abe4) popup_ai3_data_window

0x6f98,	// (0x000645d5) grid_ai3_links_pane

0xd5bf,	// (0x0006abfc) cell_ai3_links_pane_ParamLimits

0xd5bf,	// (0x0006abfc) cell_ai3_links_pane

0x58cf,	// (0x00062f0c) bg_popup_sub_pane_cp11

0x58dc,	// (0x00062f19) cell_ai3_links_pane_g1

0x6f98,	// (0x000645d5) bg_popup_sub_pane_cp12

0x5901,	// (0x00062f3e) heading_ai3_data_pane

0x5909,	// (0x00062f46) list_ai3_gene_pane

0x5915,	// (0x00062f52) popup_ai3_data_window_g1

0x591d,	// (0x00062f5a) heading_ai3_data_pane_g1

0x5925,	// (0x00062f62) heading_ai3_data_pane_t1

0xd5d9,	// (0x0006ac16) list_double_ai3_gene_pane_ParamLimits

0xd5d9,	// (0x0006ac16) list_double_ai3_gene_pane

0x5940,	// (0x00062f7d) list_single_ai3_gene_pane_ParamLimits

0x5940,	// (0x00062f7d) list_single_ai3_gene_pane

0x46ed,	// (0x00061d2a) list_highlight_pane_cp7_ParamLimits

0x46ed,	// (0x00061d2a) list_highlight_pane_cp7

0x594d,	// (0x00062f8a) list_single_a13_gene_pane_t1_ParamLimits

0x594d,	// (0x00062f8a) list_single_a13_gene_pane_t1

0x5964,	// (0x00062fa1) list_single_ai3_gene_pane_g1

0x596d,	// (0x00062faa) list_single_ai3_gene_pane_g2

0x0001,

0xfca8,	// (0x0006d2e5) list_single_ai3_gene_pane_g

0x5975,	// (0x00062fb2) list_double_ai3_gene_pane_g1_ParamLimits

0x5975,	// (0x00062fb2) list_double_ai3_gene_pane_g1

0xd5e6,	// (0x0006ac23) list_double_ai3_gene_pane_t1_ParamLimits

0xd5e6,	// (0x0006ac23) list_double_ai3_gene_pane_t1

0x599d,	// (0x00062fda) list_double_ai3_gene_pane_t2_ParamLimits

0x599d,	// (0x00062fda) list_double_ai3_gene_pane_t2

0x59b2,	// (0x00062fef) list_double_ai3_gene_pane_t3_ParamLimits

0x59b2,	// (0x00062fef) list_double_ai3_gene_pane_t3

0x0002,

0xfcad,	// (0x0006d2ea) list_double_ai3_gene_pane_t_ParamLimits

0xfcad,	// (0x0006d2ea) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xeeae,	// (0x0006c4eb) aid_size_min_col_2

0xd54e,	// (0x0006ab8b) aid_size_min_msg_ParamLimits

0xd54e,	// (0x0006ab8b) aid_size_min_msg

0xd14f,	// (0x0006a78c) fep_vkb_top_text_pane_g2_ParamLimits

0xd14f,	// (0x0006a78c) fep_vkb_top_text_pane_g2

0x0001,

0xfb14,	// (0x0006d151) fep_vkb_top_text_pane_g_ParamLimits

0xfb14,	// (0x0006d151) fep_vkb_top_text_pane_g

0xe7a7,	// (0x0006bde4) main_hc_apps_shell_pane

0x59cf,	// (0x0006300c) grid_hc_apps_pane_ParamLimits

0x59cf,	// (0x0006300c) grid_hc_apps_pane

0x59e1,	// (0x0006301e) list_hc_apps_pane

0x59e9,	// (0x00063026) scroll_pane_cp37_ParamLimits

0x59e9,	// (0x00063026) scroll_pane_cp37

0xd602,	// (0x0006ac3f) cell_hc_apps_pane_ParamLimits

0xd602,	// (0x0006ac3f) cell_hc_apps_pane

0xd6c0,	// (0x0006acfd) cell_hc_apps_pane_g1_ParamLimits

0xd6c0,	// (0x0006acfd) cell_hc_apps_pane_g1

0x5ad3,	// (0x00063110) cell_hc_apps_pane_g2_ParamLimits

0x5ad3,	// (0x00063110) cell_hc_apps_pane_g2

0x5aef,	// (0x0006312c) cell_hc_apps_pane_g3_ParamLimits

0x5aef,	// (0x0006312c) cell_hc_apps_pane_g3

0x0002,

0xfcb4,	// (0x0006d2f1) cell_hc_apps_pane_g_ParamLimits

0xfcb4,	// (0x0006d2f1) cell_hc_apps_pane_g

0xd6ec,	// (0x0006ad29) cell_hc_apps_pane_t1_ParamLimits

0xd6ec,	// (0x0006ad29) cell_hc_apps_pane_t1

0x7132,	// (0x0006476f) grid_highlight_pane_cp10_ParamLimits

0x7132,	// (0x0006476f) grid_highlight_pane_cp10

0xd72a,	// (0x0006ad67) list_single_hc_apps_pane_ParamLimits

0xd72a,	// (0x0006ad67) list_single_hc_apps_pane

0xd75a,	// (0x0006ad97) list_single_hc_apps_pane_g1

0xd773,	// (0x0006adb0) list_single_hc_apps_pane_g2

0x0001,

0xfcbb,	// (0x0006d2f8) list_single_hc_apps_pane_g

0xd78c,	// (0x0006adc9) list_single_hc_apps_pane_g2_copy1

0xb790,	// (0x00068dcd) list_single_hc_apps_pane_t1

0x6ffa,	// (0x00064637) bg_set_opt_pane_cp_ParamLimits

0x92cc,	// (0x00066909) setting_slider_pane_t1_ParamLimits

0x92e5,	// (0x00066922) setting_slider_pane_t2_ParamLimits

0x92ff,	// (0x0006693c) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0006cb76) setting_slider_pane_t_ParamLimits

0x9317,	// (0x00066954) slider_set_pane_ParamLimits

0xf4a6,	// (0x0006cae3) control_pane_g5_ParamLimits

0xf4a6,	// (0x0006cae3) control_pane_g5

0xca48,	// (0x0006a085) slider_set_pane_g1_ParamLimits

0x08c2,	// (0x0005deff) slider_set_pane_g2_ParamLimits

0xb449,	// (0x00068a86) slider_set_pane_g3_ParamLimits

0xb45d,	// (0x00068a9a) slider_set_pane_g4_ParamLimits

0xb475,	// (0x00068ab2) slider_set_pane_g5_ParamLimits

0xb449,	// (0x00068a86) slider_set_pane_g6_ParamLimits

0xb48b,	// (0x00068ac8) slider_set_pane_g7_ParamLimits

0xf929,	// (0x0006cf66) slider_set_pane_g_ParamLimits

0xc2a2,	// (0x000698df) navi_icon_text_pane_ParamLimits

0xad48,	// (0x00068385) aid_fill_nsta_2_ParamLimits

0xad7f,	// (0x000683bc) aid_touch_tab_arrow_left_ParamLimits

0xad95,	// (0x000683d2) aid_touch_tab_arrow_right_ParamLimits

0xae30,	// (0x0006846d) clock_nsta_pane_ParamLimits

0x2de4,	// (0x00060421) navi_icon_pane_g1_ParamLimits

0x2df0,	// (0x0006042d) navi_text_pane_t1_ParamLimits

0x41f8,	// (0x00061835) navi_icon_text_pane_g1_ParamLimits

0x4204,	// (0x00061841) navi_icon_text_pane_t1_ParamLimits

0xd75a,	// (0x0006ad97) list_single_hc_apps_pane_g1_ParamLimits

0xd773,	// (0x0006adb0) list_single_hc_apps_pane_g2_ParamLimits

0xfcbb,	// (0x0006d2f8) list_single_hc_apps_pane_g_ParamLimits

0xd78c,	// (0x0006adc9) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb790,	// (0x00068dcd) list_single_hc_apps_pane_t1_ParamLimits

0x90fd,	// (0x0006673a) popup_toolbar2_fixed_window_ParamLimits

0x90fd,	// (0x0006673a) popup_toolbar2_fixed_window

0xac58,	// (0x00068295) popup_toolbar2_float_window

0x6f98,	// (0x000645d5) bg_popup_sub_pane_cp27

0x5bcd,	// (0x0006320a) grid_toolbar2_float_pane

0x6f98,	// (0x000645d5) bg_popup_sub_pane_cp26

0x5bcd,	// (0x0006320a) grid_toolbar2_fixed_pane

0xd7a8,	// (0x0006ade5) cell_toolbar2_fixed_pane_ParamLimits

0xd7a8,	// (0x0006ade5) cell_toolbar2_fixed_pane

0xd7c2,	// (0x0006adff) cell_toolbar2_fixed_pane_g1

0x0049,	// (0x0005d686) toolbar2_fixed_button_pane

0x1f52,	// (0x0005f58f) toolbar2_fixed_button_pane_g1

0x1f62,	// (0x0005f59f) toolbar2_fixed_button_pane_g2

0x1f5a,	// (0x0005f597) toolbar2_fixed_button_pane_g3

0x1f72,	// (0x0005f5af) toolbar2_fixed_button_pane_g4

0x1f6a,	// (0x0005f5a7) toolbar2_fixed_button_pane_g5

0x1f7a,	// (0x0005f5b7) toolbar2_fixed_button_pane_g6

0x1f82,	// (0x0005f5bf) toolbar2_fixed_button_pane_g7

0x1f92,	// (0x0005f5cf) toolbar2_fixed_button_pane_g8

0x1f8a,	// (0x0005f5c7) toolbar2_fixed_button_pane_g9

0x0008,

0xf82b,	// (0x0006ce68) toolbar2_fixed_button_pane_g

0x5bee,	// (0x0006322b) cell_toolbar2_float_pane_ParamLimits

0x5bee,	// (0x0006322b) cell_toolbar2_float_pane

0x5bff,	// (0x0006323c) cell_toolbar2_float_pane_g1

0x0049,	// (0x0005d686) toolbar2_fixed_button_pane_cp

0xd037,	// (0x0006a674) fep_vkb_accented_list_pane_ParamLimits

0xd037,	// (0x0006a674) fep_vkb_accented_list_pane

0x0dc4,	// (0x0005e401) bg_popup_fep_shadow_pane_g9

0xc3f1,	// (0x00069a2e) bg_popup_fep_shadow_pane_cp3

0x8172,	// (0x000657af) list_accented_list_pane

0x5c08,	// (0x00063245) list_single_accented_list_pane_ParamLimits

0x5c08,	// (0x00063245) list_single_accented_list_pane

0xc3f1,	// (0x00069a2e) list_highlight_pane_cp10

0x5c19,	// (0x00063256) list_single_accented_list_pane_t1

0xab82,	// (0x000681bf) popup_slider_window_ParamLimits

0xab82,	// (0x000681bf) popup_slider_window

0x5857,	// (0x00062e94) aid_indentation_list_msg

0xd8b3,	// (0x0006aef0) bg_popup_window_pane_cp19

0x5d3f,	// (0x0006337c) popup_slider_window_g1

0x5d5b,	// (0x00063398) popup_slider_window_g2

0x5d77,	// (0x000633b4) popup_slider_window_g3

0x0005,

0xfcc0,	// (0x0006d2fd) popup_slider_window_g

0x5ddd,	// (0x0006341a) popup_slider_window_t1

0x5e51,	// (0x0006348e) small_volume_slider_vertical_pane

0x4728,	// (0x00061d65) small_volume_slider_vertical_pane_g1

0x4728,	// (0x00061d65) small_volume_slider_vertical_pane_g2

0x5e6d,	// (0x000634aa) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd2,	// (0x0006d30f) small_volume_slider_vertical_pane_g

0x8efc,	// (0x00066539) area_side_right_pane_ParamLimits

0x8efc,	// (0x00066539) area_side_right_pane

0xb7be,	// (0x00068dfb) aid_size_side_button_ParamLimits

0xb7be,	// (0x00068dfb) aid_size_side_button

0xb7d7,	// (0x00068e14) grid_sctrl_middle_pane_ParamLimits

0xb7d7,	// (0x00068e14) grid_sctrl_middle_pane

0x10ea,	// (0x0005e727) sctrl_sk_bottom_pane

0x10fb,	// (0x0005e738) sctrl_sk_top_pane

0x110d,	// (0x0005e74a) aid_touch_sctrl_top

0x111a,	// (0x0005e757) bg_sctrl_sk_pane_ParamLimits

0x111a,	// (0x0005e757) bg_sctrl_sk_pane

0x1128,	// (0x0005e765) sctrl_sk_top_pane_g1

0x1135,	// (0x0005e772) sctrl_sk_top_pane_t1

0x110d,	// (0x0005e74a) aid_touch_sctrl_bottom

0x111a,	// (0x0005e757) bg_sctrl_sk_pane_cp_ParamLimits

0x111a,	// (0x0005e757) bg_sctrl_sk_pane_cp

0x1150,	// (0x0005e78d) sctrl_sk_bottom_pane_g1

0x1135,	// (0x0005e772) sctrl_sk_bottom_pane_t1

0xb7f1,	// (0x00068e2e) cell_sctrl_middle_pane_ParamLimits

0xb7f1,	// (0x00068e2e) cell_sctrl_middle_pane

0xb802,	// (0x00068e3f) aid_touch_sctrl_middle_ParamLimits

0xb802,	// (0x00068e3f) aid_touch_sctrl_middle

0xb80f,	// (0x00068e4c) bg_sctrl_middle_pane_ParamLimits

0xb80f,	// (0x00068e4c) bg_sctrl_middle_pane

0x17c0,	// (0x0005edfd) cell_sctrl_middle_pane_g1_ParamLimits

0x17c0,	// (0x0005edfd) cell_sctrl_middle_pane_g1

0xb81d,	// (0x00068e5a) cell_sctrl_middle_pane_g2_ParamLimits

0xb81d,	// (0x00068e5a) cell_sctrl_middle_pane_g2

0x0001,

0xfcde,	// (0x0006d31b) cell_sctrl_middle_pane_g_ParamLimits

0xfcde,	// (0x0006d31b) cell_sctrl_middle_pane_g

0x1f52,	// (0x0005f58f) bg_sctrl_middle_pane_g1

0x1f5a,	// (0x0005f597) bg_sctrl_middle_pane_g2

0x1f62,	// (0x0005f59f) bg_sctrl_middle_pane_g3

0x1f6a,	// (0x0005f5a7) bg_sctrl_middle_pane_g4

0x1f72,	// (0x0005f5af) bg_sctrl_middle_pane_g5

0x1f7a,	// (0x0005f5b7) bg_sctrl_middle_pane_g6

0x1f82,	// (0x0005f5bf) bg_sctrl_middle_pane_g7

0x1f8a,	// (0x0005f5c7) bg_sctrl_middle_pane_g8

0x0007,

0xfce3,	// (0x0006d320) bg_sctrl_middle_pane_g

0x1f92,	// (0x0005f5cf) bg_sctrl_middle_pane_g8_copy1

0x1f52,	// (0x0005f58f) bg_sctrl_sk_pane_g1

0x1f62,	// (0x0005f59f) bg_sctrl_sk_pane_g2

0x1f5a,	// (0x0005f597) bg_sctrl_sk_pane_g3

0x0008,

0xf82b,	// (0x0006ce68) bg_sctrl_sk_pane_g

0x7f9b,	// (0x000655d8) aid_size_touch_scroll_bar

0x1f72,	// (0x0005f5af) bg_sctrl_sk_pane_g4

0x1f6a,	// (0x0005f5a7) bg_sctrl_sk_pane_g5

0x1f7a,	// (0x0005f5b7) bg_sctrl_sk_pane_g6

0x1f82,	// (0x0005f5bf) bg_sctrl_sk_pane_g7

0x1f92,	// (0x0005f5cf) bg_sctrl_sk_pane_g8

0x1f8a,	// (0x0005f5c7) bg_sctrl_sk_pane_g9

0xf4db,	// (0x0006cb18) popup_fep_china_hwr2_fs_candidate_window

0xa648,	// (0x00067c85) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa648,	// (0x00067c85) popup_fep_china_hwr2_fs_control_window

0x0de4,	// (0x0005e421) sctrl_sk_top_pane_g2

0x0001,

0xfcd9,	// (0x0006d316) sctrl_sk_top_pane_g

0xd949,	// (0x0006af86) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd949,	// (0x0006af86) aid_fep_china_hwr2_fs_cell

0xd95d,	// (0x0006af9a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd95d,	// (0x0006af9a) bg_popup_fep_shadow_pane_cp4

0xd974,	// (0x0006afb1) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd974,	// (0x0006afb1) bg_popup_fep_shadow_pane_cp5

0xd986,	// (0x0006afc3) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd986,	// (0x0006afc3) popup_fep_china_hwr2_fs_control_bar_grid

0xd99a,	// (0x0006afd7) popup_fep_china_hwr2_fs_control_funtion_grid

0x5ec9,	// (0x00063506) aid_fep_china_hwr2_fs_candi_cell

0x6f98,	// (0x000645d5) bg_popup_fep_shadow_pane_cp6

0x5ed3,	// (0x00063510) popup_fep_china_hwr2_fs_candidate_grid

0xd9a2,	// (0x0006afdf) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9a2,	// (0x0006afdf) cell_fep_china_hwr2_fs_funtion_grid

0x4728,	// (0x00061d65) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5ef5,	// (0x00063532) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5ef5,	// (0x00063532) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5f03,	// (0x00063540) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5f03,	// (0x00063540) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf4,	// (0x0006d331) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf4,	// (0x0006d331) cell_fep_china_hwr2_fs_funtion_grid_g

0xd9ba,	// (0x0006aff7) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd9ba,	// (0x0006aff7) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd9cf,	// (0x0006b00c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd9cf,	// (0x0006b00c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf9,	// (0x0006d336) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf9,	// (0x0006d336) cell_fep_china_hwr2_fs_funtion_grid_t

0x5f4a,	// (0x00063587) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5f52,	// (0x0006358f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5f5a,	// (0x00063597) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfe,	// (0x0006d33b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5f62,	// (0x0006359f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5f62,	// (0x0006359f) cell_fep_china_hwr2_fs_candidate_grid

0x5f7b,	// (0x000635b8) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5f83,	// (0x000635c0) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4728,	// (0x00061d65) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4728,	// (0x00061d65) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb19,	// (0x0006d156) cell_fep_china_hwr2_fs_candidate_grid_g

0x5f8b,	// (0x000635c8) cell_fep_china_hwr2_fs_candidate_grid_t1

0x032f,	// (0x0005d96c) clock_nsta_pane_cp_24_ParamLimits

0x032f,	// (0x0005d96c) clock_nsta_pane_cp_24

0x03ad,	// (0x0005d9ea) indicator_nsta_pane_cp_24_ParamLimits

0x03ad,	// (0x0005d9ea) indicator_nsta_pane_cp_24

0x2c60,	// (0x0006029d) heading_pane_g1

0x0001,

0xf890,	// (0x0006cecd) heading_pane_g

0x36f2,	// (0x00060d2f) grid_sct_catagory_button_pane

0x3722,	// (0x00060d5f) scroll_pane_cp5_ParamLimits

0x4246,	// (0x00061883) button_value_adjust_pane_cp5_ParamLimits

0x4246,	// (0x00061883) button_value_adjust_pane_cp5

0x4325,	// (0x00061962) form2_midp_time_pane_ParamLimits

0x5f99,	// (0x000635d6) cell_sct_catagory_button_pane_ParamLimits

0x5f99,	// (0x000635d6) cell_sct_catagory_button_pane

0x46ed,	// (0x00061d2a) bg_button_pane_cp01_ParamLimits

0x46ed,	// (0x00061d2a) bg_button_pane_cp01

0x4728,	// (0x00061d65) cell_sct_catagory_button_pane_g1

0xabfb,	// (0x00068238) popup_tb_extension_window

0xd9eb,	// (0x0006b028) aid_size_cell_ext_ParamLimits

0xd9eb,	// (0x0006b028) aid_size_cell_ext

0x7f4d,	// (0x0006558a) bg_tb_trans_pane_cp1_ParamLimits

0x7f4d,	// (0x0006558a) bg_tb_trans_pane_cp1

0xda11,	// (0x0006b04e) grid_tb_ext_pane_ParamLimits

0xda11,	// (0x0006b04e) grid_tb_ext_pane

0xda50,	// (0x0006b08d) cell_tb_ext_pane_ParamLimits

0xda50,	// (0x0006b08d) cell_tb_ext_pane

0xda78,	// (0x0006b0b5) cell_tb_ext_pane_g1_ParamLimits

0xda78,	// (0x0006b0b5) cell_tb_ext_pane_g1

0x602f,	// (0x0006366c) cell_tb_ext_pane_t1

0x7132,	// (0x0006476f) list_highlight_pane_cp11_ParamLimits

0x7132,	// (0x0006476f) list_highlight_pane_cp11

0x9112,	// (0x0006674f) popup_uni_indicator_window_ParamLimits

0x9112,	// (0x0006674f) popup_uni_indicator_window

0x8059,	// (0x00065696) bg_popup_sub_pane_cp14

0xda95,	// (0x0006b0d2) list_uniindi_pane

0xdaa1,	// (0x0006b0de) uniindi_top_pane

0x7132,	// (0x0006476f) bg_uniindi_top_pane

0xdac0,	// (0x0006b0fd) uniindi_top_pane_g1

0xdad6,	// (0x0006b113) uniindi_top_pane_g2

0x0003,

0xfd05,	// (0x0006d342) uniindi_top_pane_g

0xdaf3,	// (0x0006b130) uniindi_top_pane_t1

0x60e0,	// (0x0006371d) list_single_uniindi_pane_ParamLimits

0x60e0,	// (0x0006371d) list_single_uniindi_pane

0x4728,	// (0x00061d65) bg_uniindi_top_pane_g1

0x60f3,	// (0x00063730) list_single_uniindi_pane_g1

0x6106,	// (0x00063743) list_single_uniindi_pane_t1

0xe7a7,	// (0x0006bde4) control_bg_pane

0x612b,	// (0x00063768) bg_sctrl_sk_pane_cp1

0x6134,	// (0x00063771) bg_sctrl_sk_pane_cp2

0x613d,	// (0x0006377a) control_bg_pane_g1

0x6146,	// (0x00063783) control_bg_pane_g2

0x0001,

0xfd0e,	// (0x0006d34b) control_bg_pane_g

0x408c,	// (0x000616c9) cell_indicator_nsta_pane_g1_ParamLimits

0xce05,	// (0x0006a442) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7d,	// (0x0006d0ba) cell_indicator_nsta_pane_g_ParamLimits

0xed3a,	// (0x0006c377) form2_midp_time_pane_t1_ParamLimits

0x0b7f,	// (0x0005e1bc) main_idle_act4_pane_ParamLimits

0x0b7f,	// (0x0005e1bc) main_idle_act4_pane

0xabfb,	// (0x00068238) popup_tb_extension_window_ParamLimits

0xda36,	// (0x0006b073) tb_ext_find_pane_ParamLimits

0xda36,	// (0x0006b073) tb_ext_find_pane

0x614f,	// (0x0006378c) ai_gene_pane_1_cp1

0xc472,	// (0x00069aaf) ai_gene_pane_2_cp1

0xdb1d,	// (0x0006b15a) list_single_idle_plugin_calendar_pane

0x6160,	// (0x0006379d) list_single_idle_plugin_notification_pane

0x6169,	// (0x000637a6) list_single_idle_plugin_player_pane

0xdb26,	// (0x0006b163) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb26,	// (0x0006b163) list_single_idle_plugin_shortcut_pane

0xdb4e,	// (0x0006b18b) main_idle_act4_pane_t1

0xdb65,	// (0x0006b1a2) main_idle_act4_pane_t2

0x0001,

0xfd13,	// (0x0006d350) main_idle_act4_pane_t

0xdb7c,	// (0x0006b1b9) middle_sk_idle_act4_pane_ParamLimits

0xdb7c,	// (0x0006b1b9) middle_sk_idle_act4_pane

0xdb98,	// (0x0006b1d5) popup_clock_digital_analogue_window_cp2

0xdbc4,	// (0x0006b201) shortcut_wheel_idle_act4_pane_ParamLimits

0xdbc4,	// (0x0006b201) shortcut_wheel_idle_act4_pane

0x4728,	// (0x00061d65) shortcut_wheel_idle_act4_pane_g1

0x4728,	// (0x00061d65) shortcut_wheel_idle_act4_pane_g2

0x4728,	// (0x00061d65) shortcut_wheel_idle_act4_pane_g3

0x4728,	// (0x00061d65) shortcut_wheel_idle_act4_pane_g4

0x4728,	// (0x00061d65) shortcut_wheel_idle_act4_pane_g5

0x61fc,	// (0x00063839) shortcut_wheel_idle_act4_pane_g6

0x6204,	// (0x00063841) shortcut_wheel_idle_act4_pane_g7

0x620c,	// (0x00063849) shortcut_wheel_idle_act4_pane_g8

0x6214,	// (0x00063851) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd18,	// (0x0006d355) shortcut_wheel_idle_act4_pane_g

0xdc41,	// (0x0006b27e) middle_sk_idle_act4_pane_g1_ParamLimits

0xdc41,	// (0x0006b27e) middle_sk_idle_act4_pane_g1

0xdc4f,	// (0x0006b28c) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc4f,	// (0x0006b28c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3b,	// (0x0006d378) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3b,	// (0x0006d378) middle_sk_idle_act4_pane_g

0xdc67,	// (0x0006b2a4) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc67,	// (0x0006b2a4) middle_sk_idle_act4_pane_t1

0xdc96,	// (0x0006b2d3) grid_ai_shortcut_pane_ParamLimits

0xdc96,	// (0x0006b2d3) grid_ai_shortcut_pane

0xdcb3,	// (0x0006b2f0) list_highlight_pane_cp16_ParamLimits

0xdcb3,	// (0x0006b2f0) list_highlight_pane_cp16

0xdcc0,	// (0x0006b2fd) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdcc0,	// (0x0006b2fd) list_single_idle_plugin_shortcut_pane_g1

0xdccc,	// (0x0006b309) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdccc,	// (0x0006b309) list_single_idle_plugin_shortcut_pane_g2

0xdce8,	// (0x0006b325) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdce8,	// (0x0006b325) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd40,	// (0x0006d37d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd40,	// (0x0006d37d) list_single_idle_plugin_shortcut_pane_g

0xdcfd,	// (0x0006b33a) cell_ai_shortcut_pane_ParamLimits

0xdcfd,	// (0x0006b33a) cell_ai_shortcut_pane

0xdd13,	// (0x0006b350) cell_ai_shortcut_pane_g1_ParamLimits

0xdd13,	// (0x0006b350) cell_ai_shortcut_pane_g1

0x614f,	// (0x0006378c) ai_gene_pane_1_cp2

0x6344,	// (0x00063981) ai_gene_pane_2_cp2

0x634c,	// (0x00063989) list_highlight_pane_cp15

0xdd35,	// (0x0006b372) list_single_idle_plugin_calendar_pane_g1

0x634c,	// (0x00063989) list_highlight_pane_cp17

0x635d,	// (0x0006399a) list_single_idle_plugin_calendar_pane_g1_copy1

0x6365,	// (0x000639a2) list_single_idle_plugin_player_pane_g1

0x394b,	// (0x00060f88) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd47,	// (0x0006d384) list_single_idle_plugin_player_pane_g

0x636d,	// (0x000639aa) list_single_idle_plugin_player_pane_t1

0x637b,	// (0x000639b8) list_single_idle_plugin_player_pane_t2

0x6389,	// (0x000639c6) list_single_idle_plugin_player_pane_t3

0x6397,	// (0x000639d4) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4c,	// (0x0006d389) list_single_idle_plugin_player_pane_t

0x63a5,	// (0x000639e2) wait_bar_pane_cp15

0x63ad,	// (0x000639ea) grid_ai_notification_pane

0x394b,	// (0x00060f88) list_single_idle_plugin_notification_pane_g1

0xdd3d,	// (0x0006b37a) cell_ai_notification_pane_ParamLimits

0xdd3d,	// (0x0006b37a) cell_ai_notification_pane

0x63c3,	// (0x00063a00) cell_ai_notification_pane_g1

0x63cb,	// (0x00063a08) cell_ai_notification_pane_t1

0xdd4a,	// (0x0006b387) tb_ext_find_button_pane

0xdd52,	// (0x0006b38f) tb_ext_find_pane_g1

0xdd5a,	// (0x0006b397) tb_ext_find_pane_t1

0xbf93,	// (0x000695d0) tb_ext_find_button_pane_g1

0xdd68,	// (0x0006b3a5) tb_ext_find_button_pane_g2

0x0001,

0xfd55,	// (0x0006d392) tb_ext_find_button_pane_g

0xdb4e,	// (0x0006b18b) main_idle_act4_pane_t1_ParamLimits

0xdb65,	// (0x0006b1a2) main_idle_act4_pane_t2_ParamLimits

0xfd13,	// (0x0006d350) main_idle_act4_pane_t_ParamLimits

0xdb98,	// (0x0006b1d5) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdbb0,	// (0x0006b1ed) sat_plugin_idle_act4_pane_ParamLimits

0xdbb0,	// (0x0006b1ed) sat_plugin_idle_act4_pane

0xdd71,	// (0x0006b3ae) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd71,	// (0x0006b3ae) sat_plugin_idle_act4_pane_t1

0xdd89,	// (0x0006b3c6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd89,	// (0x0006b3c6) sat_plugin_idle_act4_pane_t2

0xdda1,	// (0x0006b3de) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdda1,	// (0x0006b3de) sat_plugin_idle_act4_pane_t3

0xddb9,	// (0x0006b3f6) sat_plugin_idle_act4_pane_t4_ParamLimits

0xddb9,	// (0x0006b3f6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5a,	// (0x0006d397) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5a,	// (0x0006d397) sat_plugin_idle_act4_pane_t

0x908d,	// (0x000666ca) popup_battery_window_ParamLimits

0x908d,	// (0x000666ca) popup_battery_window

0x7132,	// (0x0006476f) bg_popup_sub_pane_cp25_ParamLimits

0x7132,	// (0x0006476f) bg_popup_sub_pane_cp25

0x644c,	// (0x00063a89) popup_battery_window_g1_ParamLimits

0x644c,	// (0x00063a89) popup_battery_window_g1

0x6458,	// (0x00063a95) popup_battery_window_t1_ParamLimits

0x6458,	// (0x00063a95) popup_battery_window_t1

0x646a,	// (0x00063aa7) popup_battery_window_t2_ParamLimits

0x646a,	// (0x00063aa7) popup_battery_window_t2

0x0001,

0xfd63,	// (0x0006d3a0) popup_battery_window_t_ParamLimits

0xfd63,	// (0x0006d3a0) popup_battery_window_t

0xa29c,	// (0x000678d9) midp_canvas_pane_ParamLimits

0xa30e,	// (0x0006794b) midp_keypad_pane_ParamLimits

0xa30e,	// (0x0006794b) midp_keypad_pane

0x8434,	// (0x00065a71) main_midp_pane_ParamLimits

0xce12,	// (0x0006a44f) signal_pane_g2_cp_ParamLimits

0xddd1,	// (0x0006b40e) aid_size_cell_midp_keypad_ParamLimits

0xddd1,	// (0x0006b40e) aid_size_cell_midp_keypad

0xddef,	// (0x0006b42c) midp_keyp_game_grid_pane_ParamLimits

0xddef,	// (0x0006b42c) midp_keyp_game_grid_pane

0xde16,	// (0x0006b453) midp_keyp_rocker_pane_ParamLimits

0xde16,	// (0x0006b453) midp_keyp_rocker_pane

0xde67,	// (0x0006b4a4) midp_keyp_sk_left_pane_ParamLimits

0xde67,	// (0x0006b4a4) midp_keyp_sk_left_pane

0xdebb,	// (0x0006b4f8) midp_keyp_sk_right_pane_ParamLimits

0xdebb,	// (0x0006b4f8) midp_keyp_sk_right_pane

0x6f98,	// (0x000645d5) bg_button_pane_cp03

0xdf0f,	// (0x0006b54c) midp_keyp_sk_left_pane_g1

0x6f98,	// (0x000645d5) bg_button_pane_cp04

0xdf0f,	// (0x0006b54c) midp_keyp_sk_right_pane_g1

0x4728,	// (0x00061d65) midp_keyp_rocker_pane_g1

0xdf18,	// (0x0006b555) keyp_game_cell_pane_ParamLimits

0xdf18,	// (0x0006b555) keyp_game_cell_pane

0x6f98,	// (0x000645d5) bg_button_pane_cp02

0xdf3c,	// (0x0006b579) keyp_game_cell_pane_g1

0x90ad,	// (0x000666ea) popup_fep_vkb2_window_ParamLimits

0x90ad,	// (0x000666ea) popup_fep_vkb2_window

0xb829,	// (0x00068e66) aid_size_cell_vkb2_ParamLimits

0xb829,	// (0x00068e66) aid_size_cell_vkb2

0xb85d,	// (0x00068e9a) popup_fep_vkb2_window_g1_ParamLimits

0xb85d,	// (0x00068e9a) popup_fep_vkb2_window_g1

0xb8ad,	// (0x00068eea) vkb2_area_bottom_pane_ParamLimits

0xb8ad,	// (0x00068eea) vkb2_area_bottom_pane

0xb901,	// (0x00068f3e) vkb2_area_keypad_pane_ParamLimits

0xb901,	// (0x00068f3e) vkb2_area_keypad_pane

0xb949,	// (0x00068f86) vkb2_area_top_pane_ParamLimits

0xb949,	// (0x00068f86) vkb2_area_top_pane

0xb9d5,	// (0x00069012) vkb2_top_entry_pane_ParamLimits

0xb9d5,	// (0x00069012) vkb2_top_entry_pane

0xba02,	// (0x0006903f) vkb2_top_grid_left_pane_ParamLimits

0xba02,	// (0x0006903f) vkb2_top_grid_left_pane

0xba23,	// (0x00069060) vkb2_top_grid_right_pane_ParamLimits

0xba23,	// (0x00069060) vkb2_top_grid_right_pane

0x13bb,	// (0x0005e9f8) vkb2_cell_keypad_pane_ParamLimits

0x13bb,	// (0x0005e9f8) vkb2_cell_keypad_pane

0xba6b,	// (0x000690a8) vkb2_area_bottom_grid_pane_ParamLimits

0xba6b,	// (0x000690a8) vkb2_area_bottom_grid_pane

0xba95,	// (0x000690d2) vkb2_area_bottom_pane_g1_ParamLimits

0xba95,	// (0x000690d2) vkb2_area_bottom_pane_g1

0xbabb,	// (0x000690f8) vkb2_area_bottom_pane_g2_ParamLimits

0xbabb,	// (0x000690f8) vkb2_area_bottom_pane_g2

0xbaec,	// (0x00069129) vkb2_area_bottom_pane_g3_ParamLimits

0xbaec,	// (0x00069129) vkb2_area_bottom_pane_g3

0x0002,

0xfd68,	// (0x0006d3a5) vkb2_area_bottom_pane_g_ParamLimits

0xfd68,	// (0x0006d3a5) vkb2_area_bottom_pane_g

0x1565,	// (0x0005eba2) vkb2_top_cell_left_pane_ParamLimits

0x1565,	// (0x0005eba2) vkb2_top_cell_left_pane

0xdf45,	// (0x0006b582) vkb2_top_entry_pane_g1_ParamLimits

0xdf45,	// (0x0006b582) vkb2_top_entry_pane_g1

0xdf53,	// (0x0006b590) vkb2_top_entry_pane_t1_ParamLimits

0xdf53,	// (0x0006b590) vkb2_top_entry_pane_t1

0x661b,	// (0x00063c58) vkb2_top_entry_pane_t2_ParamLimits

0x661b,	// (0x00063c58) vkb2_top_entry_pane_t2

0x664d,	// (0x00063c8a) vkb2_top_entry_pane_t3_ParamLimits

0x664d,	// (0x00063c8a) vkb2_top_entry_pane_t3

0x0002,

0xfd6f,	// (0x0006d3ac) vkb2_top_entry_pane_t_ParamLimits

0xfd6f,	// (0x0006d3ac) vkb2_top_entry_pane_t

0xbb56,	// (0x00069193) vkb2_top_grid_right_pane_g1_ParamLimits

0xbb56,	// (0x00069193) vkb2_top_grid_right_pane_g1

0x15c8,	// (0x0005ec05) vkb2_top_grid_right_pane_g2_ParamLimits

0x15c8,	// (0x0005ec05) vkb2_top_grid_right_pane_g2

0x15e0,	// (0x0005ec1d) vkb2_top_grid_right_pane_g3_ParamLimits

0x15e0,	// (0x0005ec1d) vkb2_top_grid_right_pane_g3

0xbb6c,	// (0x000691a9) vkb2_top_grid_right_pane_g4_ParamLimits

0xbb6c,	// (0x000691a9) vkb2_top_grid_right_pane_g4

0x0003,

0xfd76,	// (0x0006d3b3) vkb2_top_grid_right_pane_g_ParamLimits

0xfd76,	// (0x0006d3b3) vkb2_top_grid_right_pane_g

0x160e,	// (0x0005ec4b) vkb2_top_cell_left_pane_g1

0x1625,	// (0x0005ec62) vkb2_cell_keypad_pane_g1_ParamLimits

0x1625,	// (0x0005ec62) vkb2_cell_keypad_pane_g1

0x6671,	// (0x00063cae) vkb2_cell_keypad_pane_t1_ParamLimits

0x6671,	// (0x00063cae) vkb2_cell_keypad_pane_t1

0x1633,	// (0x0005ec70) vkb2_cell_bottom_grid_pane_ParamLimits

0x1633,	// (0x0005ec70) vkb2_cell_bottom_grid_pane

0x166c,	// (0x0005eca9) vkb2_cell_bottom_grid_pane_g1

0xdbe5,	// (0x0006b222) aid_call2_pane_cp02

0xdbed,	// (0x0006b22a) aid_call_pane_cp02

0xdbf5,	// (0x0006b232) clock_digital_number_pane_cp10

0xdbfd,	// (0x0006b23a) clock_digital_number_pane_cp11

0xdc05,	// (0x0006b242) clock_digital_number_pane_cp12

0xdc0d,	// (0x0006b24a) clock_digital_number_pane_cp13

0xdc15,	// (0x0006b252) clock_digital_separator_pane_cp10

0xbf93,	// (0x000695d0) popup_clock_digital_analogue_window_cp2_g1

0xbf93,	// (0x000695d0) popup_clock_digital_analogue_window_cp2_g2

0xdc1d,	// (0x0006b25a) popup_clock_digital_analogue_window_cp2_g3

0xbf93,	// (0x000695d0) popup_clock_digital_analogue_window_cp2_g4

0xdc1d,	// (0x0006b25a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2b,	// (0x0006d368) popup_clock_digital_analogue_window_cp2_g

0xdc25,	// (0x0006b262) popup_clock_digital_analogue_window_cp2_t1

0xdc33,	// (0x0006b270) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd36,	// (0x0006d373) popup_clock_digital_analogue_window_cp2_t

0x4728,	// (0x00061d65) clock_digital_number_pane_cp10_g1

0x4728,	// (0x00061d65) clock_digital_number_pane_cp10_g2

0x0001,

0xfb19,	// (0x0006d156) clock_digital_number_pane_cp10_g

0x4728,	// (0x00061d65) clock_digital_separator_pane_cp10_g1

0x4728,	// (0x00061d65) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb19,	// (0x0006d156) clock_digital_separator_pane_cp10_g

0xdae2,	// (0x0006b11f) uniindi_top_pane_g3

0x60a9,	// (0x000636e6) uniindi_top_pane_g4

0x1446,	// (0x0005ea83) vkb2_row_keypad_pane_ParamLimits

0x1446,	// (0x0005ea83) vkb2_row_keypad_pane

0x168c,	// (0x0005ecc9) vkb2_cell_t_keypad_pane_ParamLimits

0x168c,	// (0x0005ecc9) vkb2_cell_t_keypad_pane

0x169c,	// (0x0005ecd9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x169c,	// (0x0005ecd9) vkb2_cell_t_keypad_pane_cp08

0x16af,	// (0x0005ecec) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x16af,	// (0x0005ecec) vkb2_cell_t_keypad_pane_cp09

0x16c3,	// (0x0005ed00) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x16c3,	// (0x0005ed00) vkb2_cell_t_keypad_pane_cp01

0x16d4,	// (0x0005ed11) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x16d4,	// (0x0005ed11) vkb2_cell_t_keypad_pane_cp02

0x16e5,	// (0x0005ed22) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x16e5,	// (0x0005ed22) vkb2_cell_t_keypad_pane_cp03

0x16f6,	// (0x0005ed33) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x16f6,	// (0x0005ed33) vkb2_cell_t_keypad_pane_cp04

0x1707,	// (0x0005ed44) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1707,	// (0x0005ed44) vkb2_cell_t_keypad_pane_cp05

0x1718,	// (0x0005ed55) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1718,	// (0x0005ed55) vkb2_cell_t_keypad_pane_cp06

0x1729,	// (0x0005ed66) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1729,	// (0x0005ed66) vkb2_cell_t_keypad_pane_cp07

0x173a,	// (0x0005ed77) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x173a,	// (0x0005ed77) vkb2_cell_t_keypad_pane_cp10

0x0de4,	// (0x0005e421) vkb2_cell_t_keypad_pane_g1

0x6688,	// (0x00063cc5) vkb2_cell_t_keypad_pane_t1

0xe7a7,	// (0x0006bde4) popup_grid_graphic2_window

0xdf8c,	// (0x0006b5c9) aid_size_cell_graphic2_ParamLimits

0xdf8c,	// (0x0006b5c9) aid_size_cell_graphic2

0xdfca,	// (0x0006b607) bg_popup_window_pane_cp21_ParamLimits

0xdfca,	// (0x0006b607) bg_popup_window_pane_cp21

0xdfd8,	// (0x0006b615) graphic2_pages_pane_ParamLimits

0xdfd8,	// (0x0006b615) graphic2_pages_pane

0xe02e,	// (0x0006b66b) grid_graphic2_control_pane_ParamLimits

0xe02e,	// (0x0006b66b) grid_graphic2_control_pane

0xe076,	// (0x0006b6b3) grid_graphic2_pane_ParamLimits

0xe076,	// (0x0006b6b3) grid_graphic2_pane

0xe0fd,	// (0x0006b73a) cell_graphic2_pane

0xe7a7,	// (0x0006bde4) main_comp_mode_pane

0x5909,	// (0x00062f46) list_ai3_gene_pane_ParamLimits

0xd8b3,	// (0x0006aef0) bg_popup_window_pane_cp19_ParamLimits

0x5ce3,	// (0x00063320) bg_touch_area_indi_pane_ParamLimits

0x5ce3,	// (0x00063320) bg_touch_area_indi_pane

0x5cf9,	// (0x00063336) bg_touch_area_indi_pane_cp01_ParamLimits

0x5cf9,	// (0x00063336) bg_touch_area_indi_pane_cp01

0x5d0f,	// (0x0006334c) bg_touch_area_indi_pane_cp02_ParamLimits

0x5d0f,	// (0x0006334c) bg_touch_area_indi_pane_cp02

0x5d25,	// (0x00063362) bg_touch_area_indi_pane_cp03_ParamLimits

0x5d25,	// (0x00063362) bg_touch_area_indi_pane_cp03

0x5d3f,	// (0x0006337c) popup_slider_window_g1_ParamLimits

0x5d5b,	// (0x00063398) popup_slider_window_g2_ParamLimits

0x5d77,	// (0x000633b4) popup_slider_window_g3_ParamLimits

0xfcc0,	// (0x0006d2fd) popup_slider_window_g_ParamLimits

0x5ddd,	// (0x0006341a) popup_slider_window_t1_ParamLimits

0x5e51,	// (0x0006348e) small_volume_slider_vertical_pane_ParamLimits

0xe0fd,	// (0x0006b73a) cell_graphic2_pane_ParamLimits

0xe158,	// (0x0006b795) bg_button_pane_cp10_ParamLimits

0xe158,	// (0x0006b795) bg_button_pane_cp10

0xe16b,	// (0x0006b7a8) bg_button_pane_cp11_ParamLimits

0xe16b,	// (0x0006b7a8) bg_button_pane_cp11

0xe17e,	// (0x0006b7bb) graphic2_pages_pane_g1_ParamLimits

0xe17e,	// (0x0006b7bb) graphic2_pages_pane_g1

0xe199,	// (0x0006b7d6) graphic2_pages_pane_g2_ParamLimits

0xe199,	// (0x0006b7d6) graphic2_pages_pane_g2

0x0001,

0xfd84,	// (0x0006d3c1) graphic2_pages_pane_g_ParamLimits

0xfd84,	// (0x0006d3c1) graphic2_pages_pane_g

0xe1b1,	// (0x0006b7ee) graphic2_pages_pane_t1_ParamLimits

0xe1b1,	// (0x0006b7ee) graphic2_pages_pane_t1

0xe1c9,	// (0x0006b806) cell_graphic2_control_pane_ParamLimits

0xe1c9,	// (0x0006b806) cell_graphic2_control_pane

0xe1fb,	// (0x0006b838) cell_graphic2_pane_g1_ParamLimits

0xe1fb,	// (0x0006b838) cell_graphic2_pane_g1

0xe208,	// (0x0006b845) cell_graphic2_pane_g2_ParamLimits

0xe208,	// (0x0006b845) cell_graphic2_pane_g2

0xd02a,	// (0x0006a667) cell_graphic2_pane_g3_ParamLimits

0xd02a,	// (0x0006a667) cell_graphic2_pane_g3

0xe215,	// (0x0006b852) cell_graphic2_pane_g4_ParamLimits

0xe215,	// (0x0006b852) cell_graphic2_pane_g4

0xe222,	// (0x0006b85f) cell_graphic2_pane_g5_ParamLimits

0xe222,	// (0x0006b85f) cell_graphic2_pane_g5

0x0004,

0xfd89,	// (0x0006d3c6) cell_graphic2_pane_g_ParamLimits

0xfd89,	// (0x0006d3c6) cell_graphic2_pane_g

0xe23f,	// (0x0006b87c) cell_graphic2_pane_t1_ParamLimits

0xe23f,	// (0x0006b87c) cell_graphic2_pane_t1

0x2c54,	// (0x00060291) grid_highlight_pane_cp11_ParamLimits

0x2c54,	// (0x00060291) grid_highlight_pane_cp11

0x7132,	// (0x0006476f) bg_button_pane_cp05

0xe289,	// (0x0006b8c6) cell_graphic2_control_pane_g1

0x4728,	// (0x00061d65) bg_touch_area_indi_pane_g1

0x6961,	// (0x00063f9e) aid_cmod_rocker_key_size

0x696b,	// (0x00063fa8) aid_cmode_itu_key_size

0x6975,	// (0x00063fb2) main_cmode_video_pane

0x697f,	// (0x00063fbc) main_comp_mode_itu_pane

0x698b,	// (0x00063fc8) main_comp_mode_rocker_pane

0x6997,	// (0x00063fd4) cell_cmode_rocker_pane_ParamLimits

0x6997,	// (0x00063fd4) cell_cmode_rocker_pane

0x69a9,	// (0x00063fe6) cell_cmode_itu_pane_ParamLimits

0x69a9,	// (0x00063fe6) cell_cmode_itu_pane

0x8059,	// (0x00065696) bg_button_pane_cp06_ParamLimits

0x8059,	// (0x00065696) bg_button_pane_cp06

0x4998,	// (0x00061fd5) cell_cmode_rocker_pane_g1_ParamLimits

0x4998,	// (0x00061fd5) cell_cmode_rocker_pane_g1

0x5ef5,	// (0x00063532) cell_cmode_rocker_pane_g2_ParamLimits

0x5ef5,	// (0x00063532) cell_cmode_rocker_pane_g2

0x0001,

0xfd99,	// (0x0006d3d6) cell_cmode_rocker_pane_g_ParamLimits

0xfd99,	// (0x0006d3d6) cell_cmode_rocker_pane_g

0x6f98,	// (0x000645d5) bg_button_pane_cp07

0x69be,	// (0x00063ffb) cell_cmode_itu_pane_g1

0x69c7,	// (0x00064004) cell_cmode_itu_pane_t1

0x69d5,	// (0x00064012) cell_cmode_itu_pane_t2

0x0001,

0xfd9e,	// (0x0006d3db) cell_cmode_itu_pane_t

0x611b,	// (0x00063758) aid_touch_ctrl_left

0x6123,	// (0x00063760) aid_touch_ctrl_right

0x6f98,	// (0x000645d5) compa_mode_pane

0xe2af,	// (0x0006b8ec) aid_cmod_rocker_key_size_cp

0xe2b9,	// (0x0006b8f6) aid_cmode_itu_key_size_cp

0x69f7,	// (0x00064034) compa_mode_pane_g1

0x69ff,	// (0x0006403c) compa_mode_pane_g2

0x6a07,	// (0x00064044) compa_mode_pane_g3

0x0002,

0xfda3,	// (0x0006d3e0) compa_mode_pane_g

0xe2c3,	// (0x0006b900) main_comp_mode_itu_pane_cp

0xe2cb,	// (0x0006b908) main_comp_mode_rocker_pane_cp

0xe2d3,	// (0x0006b910) cell_cmode_itu_pane_cp_ParamLimits

0xe2d3,	// (0x0006b910) cell_cmode_itu_pane_cp

0xe2e8,	// (0x0006b925) cell_cmode_rocker_pane_cp_ParamLimits

0xe2e8,	// (0x0006b925) cell_cmode_rocker_pane_cp

0x8059,	// (0x00065696) bg_button_pane_cp06_cp_ParamLimits

0x8059,	// (0x00065696) bg_button_pane_cp06_cp

0x4998,	// (0x00061fd5) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4998,	// (0x00061fd5) cell_cmode_rocker_pane_g1_cp

0x4728,	// (0x00061d65) cell_cmode_rocker_pane_g2_cp

0x6f98,	// (0x000645d5) bg_button_pane_cp07_cp

0xe2fa,	// (0x0006b937) cell_cmode_itu_pane_g1_cp

0xe303,	// (0x0006b940) cell_cmode_itu_pane_t1_cp

0xe303,	// (0x0006b940) cell_cmode_itu_pane_t2_cp

0xcbbc,	// (0x0006a1f9) settings_code_pane_cp2

0x6ffa,	// (0x00064637) bg_popup_window_pane_cp3_ParamLimits

0x724b,	// (0x00064888) heading_pane_cp3_ParamLimits

0x725a,	// (0x00064897) listscroll_popup_graphic_pane_ParamLimits

0x0b8d,	// (0x0005e1ca) fep_hwr_aid_pane_ParamLimits

0x110d,	// (0x0005e74a) aid_touch_sctrl_top_ParamLimits

0x1128,	// (0x0005e765) sctrl_sk_top_pane_g1_ParamLimits

0x0de4,	// (0x0005e421) sctrl_sk_top_pane_g2_ParamLimits

0xfcd9,	// (0x0006d316) sctrl_sk_top_pane_g_ParamLimits

0x1135,	// (0x0005e772) sctrl_sk_top_pane_t1_ParamLimits

0x110d,	// (0x0005e74a) aid_touch_sctrl_bottom_ParamLimits

0x1135,	// (0x0005e772) sctrl_sk_bottom_pane_t1_ParamLimits

0xdaae,	// (0x0006b0eb) aid_area_touch_clock

0xb995,	// (0x00068fd2) aid_vkb2_area_top_pane_cell_ParamLimits

0xb995,	// (0x00068fd2) aid_vkb2_area_top_pane_cell

0xba44,	// (0x00069081) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xba44,	// (0x00069081) aid_vkb2_area_bottom_pane_cell

0x65d3,	// (0x00063c10) popup_char_count_window

0x6a5d,	// (0x0006409a) popup_char_count_window_g1

0x6a66,	// (0x000640a3) popup_char_count_window_g2

0x6a6f,	// (0x000640ac) popup_char_count_window_g3

0x0002,

0xfdaa,	// (0x0006d3e7) popup_char_count_window_g

0x6a78,	// (0x000640b5) popup_char_count_window_t1

0x11dc,	// (0x0005e819) popup_fep_char_preview_window_ParamLimits

0x11dc,	// (0x0005e819) popup_fep_char_preview_window

0xb9b5,	// (0x00068ff2) vkb2_top_candi_pane_ParamLimits

0xb9b5,	// (0x00068ff2) vkb2_top_candi_pane

0xe311,	// (0x0006b94e) cell_vkb2_top_candi_pane_ParamLimits

0xe311,	// (0x0006b94e) cell_vkb2_top_candi_pane

0x174f,	// (0x0005ed8c) bg_popup_fep_char_preview_window_ParamLimits

0x174f,	// (0x0005ed8c) bg_popup_fep_char_preview_window

0x175d,	// (0x0005ed9a) popup_fep_char_preview_window_t1_ParamLimits

0x175d,	// (0x0005ed9a) popup_fep_char_preview_window_t1

0x6ad0,	// (0x0006410d) bg_popup_fep_char_preview_window_g1

0x6ad8,	// (0x00064115) bg_popup_fep_char_preview_window_g2

0x6ae0,	// (0x0006411d) bg_popup_fep_char_preview_window_g3

0x6ae8,	// (0x00064125) bg_popup_fep_char_preview_window_g4

0x6af0,	// (0x0006412d) bg_popup_fep_char_preview_window_g5

0x6af8,	// (0x00064135) bg_popup_fep_char_preview_window_g6

0x6b00,	// (0x0006413d) bg_popup_fep_char_preview_window_g7

0x6b08,	// (0x00064145) bg_popup_fep_char_preview_window_g8

0x6b10,	// (0x0006414d) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb1,	// (0x0006d3ee) bg_popup_fep_char_preview_window_g

0x0de4,	// (0x0005e421) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0de4,	// (0x0005e421) cell_vkb2_top_candi_pane_g1

0x0df2,	// (0x0005e42f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0df2,	// (0x0005e42f) cell_vkb2_top_candi_pane_g2

0x4caf,	// (0x000622ec) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4caf,	// (0x000622ec) cell_vkb2_top_candi_pane_g3

0x179f,	// (0x0005eddc) cell_vkb2_top_candi_pane_g4_ParamLimits

0x179f,	// (0x0005eddc) cell_vkb2_top_candi_pane_g4

0x4ead,	// (0x000624ea) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4ead,	// (0x000624ea) cell_vkb2_top_candi_pane_g5

0x17c0,	// (0x0005edfd) cell_vkb2_top_candi_pane_g6_ParamLimits

0x17c0,	// (0x0005edfd) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc6,	// (0x0006d403) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc6,	// (0x0006d403) cell_vkb2_top_candi_pane_g

0x17ce,	// (0x0005ee0b) cell_vkb2_top_candi_pane_t1

0xb435,	// (0x00068a72) aid_size_touch_slider_mark_ParamLimits

0xb435,	// (0x00068a72) aid_size_touch_slider_mark

0xe014,	// (0x0006b651) grid_graphic2_catg_pane_ParamLimits

0xe014,	// (0x0006b651) grid_graphic2_catg_pane

0xe0d0,	// (0x0006b70d) popup_grid_graphic2_window_t1_ParamLimits

0xe0d0,	// (0x0006b70d) popup_grid_graphic2_window_t1

0xe0e6,	// (0x0006b723) popup_grid_graphic2_window_t2_ParamLimits

0xe0e6,	// (0x0006b723) popup_grid_graphic2_window_t2

0x0001,

0xfd7f,	// (0x0006d3bc) popup_grid_graphic2_window_t_ParamLimits

0xfd7f,	// (0x0006d3bc) popup_grid_graphic2_window_t

0x7132,	// (0x0006476f) bg_button_pane_cp05_ParamLimits

0xe289,	// (0x0006b8c6) cell_graphic2_control_pane_g1_ParamLimits

0xe371,	// (0x0006b9ae) cell_graphic2_catg_pane_ParamLimits

0xe371,	// (0x0006b9ae) cell_graphic2_catg_pane

0x6f98,	// (0x000645d5) bg_button_pane_cp12

0xe383,	// (0x0006b9c0) cell_graphic2_catg_pane_g1

0x602f,	// (0x0006366c) cell_tb_ext_pane_t1_ParamLimits

0x1585,	// (0x0005ebc2) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1585,	// (0x0005ebc2) vkb2_top_cell_right_narrow_pane

0x159d,	// (0x0005ebda) vkb2_top_cell_right_wide_pane_ParamLimits

0x159d,	// (0x0005ebda) vkb2_top_cell_right_wide_pane

0x0b7f,	// (0x0005e1bc) bg_vkb2_func_pane_ParamLimits

0x0b7f,	// (0x0005e1bc) bg_vkb2_func_pane

0x160e,	// (0x0005ec4b) vkb2_top_cell_left_pane_g1_ParamLimits

0x0b7f,	// (0x0005e1bc) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0b7f,	// (0x0005e1bc) bg_vkb2_fuc_pane_cp03

0x166c,	// (0x0005eca9) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1f5a,	// (0x0005f597) bg_vkb2_func_pane_g1

0x1f62,	// (0x0005f59f) bg_vkb2_func_pane_g2

0x1f72,	// (0x0005f5af) bg_vkb2_func_pane_g3

0x1f6a,	// (0x0005f5a7) bg_vkb2_func_pane_g4

0x1f7a,	// (0x0005f5b7) bg_vkb2_func_pane_g5

0x1f82,	// (0x0005f5bf) bg_vkb2_func_pane_g6

0x1f8a,	// (0x0005f5c7) bg_vkb2_func_pane_g7

0x1f92,	// (0x0005f5cf) bg_vkb2_func_pane_g8

0x1f52,	// (0x0005f58f) bg_vkb2_func_pane_g9

0x0008,

0xfdd3,	// (0x0006d410) bg_vkb2_func_pane_g

0x0b7f,	// (0x0005e1bc) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0b7f,	// (0x0005e1bc) bg_vkb2_fuc_pane_cp01

0x160e,	// (0x0005ec4b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x160e,	// (0x0005ec4b) vkb2_top_cell_right_wide_pane_g1

0x0b7f,	// (0x0005e1bc) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0b7f,	// (0x0005e1bc) bg_vkb2_fuc_pane_cp02

0x17ed,	// (0x0005ee2a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x17ed,	// (0x0005ee2a) vkb2_top_cell_right_narrow_pane_g1

0xd7f5,	// (0x0006ae32) aid_touch_area_decrease_ParamLimits

0xd7f5,	// (0x0006ae32) aid_touch_area_decrease

0xd82f,	// (0x0006ae6c) aid_touch_area_increase_ParamLimits

0xd82f,	// (0x0006ae6c) aid_touch_area_increase

0xd857,	// (0x0006ae94) aid_touch_area_mute_ParamLimits

0xd857,	// (0x0006ae94) aid_touch_area_mute

0xd87f,	// (0x0006aebc) aid_touch_area_slider_ParamLimits

0xd87f,	// (0x0006aebc) aid_touch_area_slider

0xd8bf,	// (0x0006aefc) popup_slider_window_g4_ParamLimits

0xd8bf,	// (0x0006aefc) popup_slider_window_g4

0xd8d9,	// (0x0006af16) popup_slider_window_g5_ParamLimits

0xd8d9,	// (0x0006af16) popup_slider_window_g5

0xd8ff,	// (0x0006af3c) popup_slider_window_g6_ParamLimits

0xd8ff,	// (0x0006af3c) popup_slider_window_g6

0x5e0b,	// (0x00063448) popup_slider_window_t2_ParamLimits

0x5e0b,	// (0x00063448) popup_slider_window_t2

0x0001,

0xfccd,	// (0x0006d30a) popup_slider_window_t_ParamLimits

0xfccd,	// (0x0006d30a) popup_slider_window_t

0xd915,	// (0x0006af52) slider_pane_ParamLimits

0xd915,	// (0x0006af52) slider_pane

0x6b33,	// (0x00064170) slider_pane_g1_ParamLimits

0x6b33,	// (0x00064170) slider_pane_g1

0x6b47,	// (0x00064184) slider_pane_g2_ParamLimits

0x6b47,	// (0x00064184) slider_pane_g2

0x6b5d,	// (0x0006419a) slider_pane_g3_ParamLimits

0x6b5d,	// (0x0006419a) slider_pane_g3

0x0003,

0xfde6,	// (0x0006d423) slider_pane_g_ParamLimits

0xfde6,	// (0x0006d423) slider_pane_g

0xac43,	// (0x00068280) popup_tb_float_extension_window_ParamLimits

0xac43,	// (0x00068280) popup_tb_float_extension_window

0x6b89,	// (0x000641c6) aid_size_cell_tb_float_ext

0x6f98,	// (0x000645d5) bg_popup_sub_window_cp28

0xe38c,	// (0x0006b9c9) grid_tb_float_ext_pane

0xe396,	// (0x0006b9d3) cell_tb_float_ext_pane_ParamLimits

0xe396,	// (0x0006b9d3) cell_tb_float_ext_pane

0xe3b0,	// (0x0006b9ed) cell_tb_float_ext_pane_g1

0xe3b9,	// (0x0006b9f6) grid_highlight_pane_cp12

0xb5c3,	// (0x00068c00) cell_last_hwr_side_pane_ParamLimits

0xb5c3,	// (0x00068c00) cell_last_hwr_side_pane

0x4728,	// (0x00061d65) cell_last_hwr_side_pane_g1

0x6bcb,	// (0x00064208) cell_last_hwr_side_pane_g2

0x0001,

0xfdef,	// (0x0006d42c) cell_last_hwr_side_pane_g

0xbb21,	// (0x0006915e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbb21,	// (0x0006915e) vkb2_area_bottom_space_btn_pane

0x0de4,	// (0x0005e421) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6688,	// (0x00063cc5) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x17ce,	// (0x0005ee0b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x180d,	// (0x0005ee4a) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x180d,	// (0x0005ee4a) vkb2_area_bottom_space_btn_pane_g1

0x1847,	// (0x0005ee84) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1847,	// (0x0005ee84) vkb2_area_bottom_space_btn_pane_g2

0x187d,	// (0x0005eeba) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x187d,	// (0x0005eeba) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf4,	// (0x0006d431) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf4,	// (0x0006d431) vkb2_area_bottom_space_btn_pane_g

0x0c42,	// (0x0005e27f) cel_fep_hwr_func_pane_ParamLimits

0x0c42,	// (0x0005e27f) cel_fep_hwr_func_pane

0xb598,	// (0x00068bd5) cell_hwr_side_button_pane_ParamLimits

0xb598,	// (0x00068bd5) cell_hwr_side_button_pane

0xdaae,	// (0x0006b0eb) aid_area_touch_clock_ParamLimits

0x7132,	// (0x0006476f) bg_uniindi_top_pane_ParamLimits

0xdac0,	// (0x0006b0fd) uniindi_top_pane_g1_ParamLimits

0xdad6,	// (0x0006b113) uniindi_top_pane_g2_ParamLimits

0xdae2,	// (0x0006b11f) uniindi_top_pane_g3_ParamLimits

0x60a9,	// (0x000636e6) uniindi_top_pane_g4_ParamLimits

0xfd05,	// (0x0006d342) uniindi_top_pane_g_ParamLimits

0xdaf3,	// (0x0006b130) uniindi_top_pane_t1_ParamLimits

0x7132,	// (0x0006476f) bg_vkb2_func_pane_cp01_ParamLimits

0x7132,	// (0x0006476f) bg_vkb2_func_pane_cp01

0x6bd4,	// (0x00064211) cel_fep_hwr_func_pane_g1_ParamLimits

0x6bd4,	// (0x00064211) cel_fep_hwr_func_pane_g1

0x7132,	// (0x0006476f) bg_vkb2_func_pane_cp02_ParamLimits

0x7132,	// (0x0006476f) bg_vkb2_func_pane_cp02

0x6bd4,	// (0x00064211) cell_hwr_side_button_pane_g1_ParamLimits

0x6bd4,	// (0x00064211) cell_hwr_side_button_pane_g1

0x1dd6,	// (0x0005f413) status_pane_g4_ParamLimits

0x1dd6,	// (0x0005f413) status_pane_g4

0x1df0,	// (0x0005f42d) status_pane_t1

0x438e,	// (0x000619cb) form2_midp_gauge_slider_cont_pane

0x4396,	// (0x000619d3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcf3b,	// (0x0006a578) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcf4d,	// (0x0006a58a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacc,	// (0x0006d109) form2_midp_gauge_slider_pane_t_ParamLimits

0x43cc,	// (0x00061a09) form2_midp_slider_pane_ParamLimits

0x11a4,	// (0x0005e7e1) aid_size_cell_func_vkb2_ParamLimits

0x11a4,	// (0x0005e7e1) aid_size_cell_func_vkb2

0x6b75,	// (0x000641b2) slider_pane_g4_ParamLimits

0x6b75,	// (0x000641b2) slider_pane_g4

0xbb8a,	// (0x000691c7) form2_midp_gauge_slider_pane_t2_cp01

0xbb98,	// (0x000691d5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbb98,	// (0x000691d5) form2_midp_gauge_slider_pane_t3_cp01

0x18f2,	// (0x0005ef2f) form2_midp_slider_pane_cp01

0x6f98,	// (0x000645d5) navi_smil_pane

0x6c0d,	// (0x0006424a) navi_smil_pane_g1

0x6c15,	// (0x00064252) navi_smil_pane_t1

0x6be2,	// (0x0006421f) form2_midp_slider_pane_g1

0x6beb,	// (0x00064228) form2_midp_slider_pane_g2

0x6bf3,	// (0x00064230) form2_midp_slider_pane_g3

0x6be2,	// (0x0006421f) form2_midp_slider_pane_g4

0xe3c2,	// (0x0006b9ff) form2_midp_slider_pane_g5

0x0004,

0xfdfd,	// (0x0006d43a) form2_midp_slider_pane_g

0x18b7,	// (0x0005eef4) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x18b7,	// (0x0005eef4) vkb2_area_bottom_space_btn_pane_g4

0xae7b,	// (0x000684b8) lc0_navi_pane_ParamLimits

0xae7b,	// (0x000684b8) lc0_navi_pane

0xaee5,	// (0x00068522) lc0_stat_indi_pane_ParamLimits

0xaee5,	// (0x00068522) lc0_stat_indi_pane

0xaefa,	// (0x00068537) ls0_title_pane_ParamLimits

0xaefa,	// (0x00068537) ls0_title_pane

0x8059,	// (0x00065696) bg_popup_sub_pane_cp14_ParamLimits

0xda95,	// (0x0006b0d2) list_uniindi_pane_ParamLimits

0xdaa1,	// (0x0006b0de) uniindi_top_pane_ParamLimits

0x60f3,	// (0x00063730) list_single_uniindi_pane_g1_ParamLimits

0x6106,	// (0x00063743) list_single_uniindi_pane_t1_ParamLimits

0xbbb5,	// (0x000691f2) lc0_stat_clock_pane_ParamLimits

0xbbb5,	// (0x000691f2) lc0_stat_clock_pane

0xe3cd,	// (0x0006ba0a) lc0_stat_indi_pane_g1_ParamLimits

0xe3cd,	// (0x0006ba0a) lc0_stat_indi_pane_g1

0xe3da,	// (0x0006ba17) lc0_stat_indi_pane_g2_ParamLimits

0xe3da,	// (0x0006ba17) lc0_stat_indi_pane_g2

0x0001,

0xfe08,	// (0x0006d445) lc0_stat_indi_pane_g_ParamLimits

0xfe08,	// (0x0006d445) lc0_stat_indi_pane_g

0xbbc5,	// (0x00069202) lc0_uni_indicator_pane_ParamLimits

0xbbc5,	// (0x00069202) lc0_uni_indicator_pane

0xe3e7,	// (0x0006ba24) ls0_title_pane_g1_ParamLimits

0xe3e7,	// (0x0006ba24) ls0_title_pane_g1

0xe3fb,	// (0x0006ba38) ls0_title_pane_t1_ParamLimits

0xe3fb,	// (0x0006ba38) ls0_title_pane_t1

0xbbd5,	// (0x00069212) lc0_uni_indicator_pane_g1_ParamLimits

0xbbd5,	// (0x00069212) lc0_uni_indicator_pane_g1

0x6c87,	// (0x000642c4) lc0_stat_clock_pane_t1

0xe7a7,	// (0x0006bde4) main_ai5_pane

0x6c95,	// (0x000642d2) ai5_sk_pane_ParamLimits

0x6c95,	// (0x000642d2) ai5_sk_pane

0xe429,	// (0x0006ba66) cell_ai5_widget_pane_ParamLimits

0xe429,	// (0x0006ba66) cell_ai5_widget_pane

0x6d6b,	// (0x000643a8) aid_size_cell_widget_grid

0x6d79,	// (0x000643b6) bg_ai5_widget_pane_ParamLimits

0x6d79,	// (0x000643b6) bg_ai5_widget_pane

0x6df5,	// (0x00064432) cell_ai5_widget_pane_g2

0x6e09,	// (0x00064446) cell_ai5_widget_pane_g3

0x6e23,	// (0x00064460) cell_ai5_widget_pane_g4

0x6e33,	// (0x00064470) cell_ai5_widget_pane_g5

0x6e43,	// (0x00064480) cell_ai5_widget_pane_g6

0x6e4f,	// (0x0006448c) cell_ai5_widget_pane_g7

0x6ebb,	// (0x000644f8) cell_ai5_widget_pane_t1_ParamLimits

0x6ebb,	// (0x000644f8) cell_ai5_widget_pane_t1

0x6ed8,	// (0x00064515) cell_ai5_widget_pane_t2_ParamLimits

0x6ed8,	// (0x00064515) cell_ai5_widget_pane_t2

0x6ef0,	// (0x0006452d) cell_ai5_widget_pane_t3_ParamLimits

0x6ef0,	// (0x0006452d) cell_ai5_widget_pane_t3

0x6f08,	// (0x00064545) cell_ai5_widget_pane_t4_ParamLimits

0x6f08,	// (0x00064545) cell_ai5_widget_pane_t4

0xe495,	// (0x0006bad2) cell_ai5_widget_pane_t5_ParamLimits

0xe495,	// (0x0006bad2) cell_ai5_widget_pane_t5

0x6f4d,	// (0x0006458a) cell_ai5_widget_pane_t6_ParamLimits

0x6f4d,	// (0x0006458a) cell_ai5_widget_pane_t6

0x6f5f,	// (0x0006459c) cell_ai5_widget_pane_t7_ParamLimits

0x6f5f,	// (0x0006459c) cell_ai5_widget_pane_t7

0x6f7e,	// (0x000645bb) cell_ai5_widget_pane_t8_ParamLimits

0x6f7e,	// (0x000645bb) cell_ai5_widget_pane_t8

0x000b,

0xfe28,	// (0x0006d465) cell_ai5_widget_pane_t_ParamLimits

0xfe28,	// (0x0006d465) cell_ai5_widget_pane_t

0x72dc,	// (0x00064919) grid_ai5_widget_pane

0x8059,	// (0x00065696) highlight_cell_ai5_widget_pane_ParamLimits

0x8059,	// (0x00065696) highlight_cell_ai5_widget_pane

0xe4b5,	// (0x0006baf2) ai5_sk_left_pane

0xe4bf,	// (0x0006bafc) ai5_sk_middle_pane

0xe4c9,	// (0x0006bb06) ai5_sk_right_pane

0x7308,	// (0x00064945) bg_ai5_widget_pane_g1_ParamLimits

0x7308,	// (0x00064945) bg_ai5_widget_pane_g1

0x7314,	// (0x00064951) bg_ai5_widget_pane_g2_ParamLimits

0x7314,	// (0x00064951) bg_ai5_widget_pane_g2

0x7320,	// (0x0006495d) bg_ai5_widget_pane_g3_ParamLimits

0x7320,	// (0x0006495d) bg_ai5_widget_pane_g3

0x732c,	// (0x00064969) bg_ai5_widget_pane_g4_ParamLimits

0x732c,	// (0x00064969) bg_ai5_widget_pane_g4

0x7338,	// (0x00064975) bg_ai5_widget_pane_g5_ParamLimits

0x7338,	// (0x00064975) bg_ai5_widget_pane_g5

0x7344,	// (0x00064981) bg_ai5_widget_pane_g6_ParamLimits

0x7344,	// (0x00064981) bg_ai5_widget_pane_g6

0x7350,	// (0x0006498d) bg_ai5_widget_pane_g7_ParamLimits

0x7350,	// (0x0006498d) bg_ai5_widget_pane_g7

0x735c,	// (0x00064999) bg_ai5_widget_pane_g8_ParamLimits

0x735c,	// (0x00064999) bg_ai5_widget_pane_g8

0x7368,	// (0x000649a5) bg_ai5_widget_pane_g9_ParamLimits

0x7368,	// (0x000649a5) bg_ai5_widget_pane_g9

0x0008,

0xfe41,	// (0x0006d47e) bg_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x0006d47e) bg_ai5_widget_pane_g

0x739a,	// (0x000649d7) cell_shortcut_ai5_widget_pane_ParamLimits

0x739a,	// (0x000649d7) cell_shortcut_ai5_widget_pane

0xc3f1,	// (0x00069a2e) bg_cell_shortcut_ai5_widget_pane

0x73ab,	// (0x000649e8) cell_grid_ai5_widget_pane_g1

0xc3f1,	// (0x00069a2e) highlight_cell_shortcut_ai5_widget_pane

0x1f5a,	// (0x0005f597) ai5_sk_left_pane_g1

0x73b4,	// (0x000649f1) ai5_sk_left_pane_g2

0x73bc,	// (0x000649f9) ai5_sk_left_pane_g3

0x73c4,	// (0x00064a01) ai5_sk_left_pane_g4

0x0003,

0xfe54,	// (0x0006d491) ai5_sk_left_pane_g

0x73cc,	// (0x00064a09) ai5_sk_left_pane_t1

0x1f62,	// (0x0005f59f) ai5_sk_right_pane_g1

0x73da,	// (0x00064a17) ai5_sk_right_pane_g2

0x73e2,	// (0x00064a1f) ai5_sk_right_pane_g3

0x73ea,	// (0x00064a27) ai5_sk_right_pane_g4

0x0003,

0xfe5d,	// (0x0006d49a) ai5_sk_right_pane_g

0x73f2,	// (0x00064a2f) ai5_sk_right_pane_t1

0x1f62,	// (0x0005f59f) ai5_sk_middle_pane_g1

0x1f5a,	// (0x0005f597) ai5_sk_middle_pane_g2

0x1f7a,	// (0x0005f5b7) ai5_sk_middle_pane_g3

0x73e2,	// (0x00064a1f) ai5_sk_middle_pane_g4

0x73bc,	// (0x000649f9) ai5_sk_middle_pane_g5

0x7400,	// (0x00064a3d) ai5_sk_middle_pane_g6

0xe4d3,	// (0x0006bb10) ai5_sk_middle_pane_g7

0x0006,

0xfe66,	// (0x0006d4a3) ai5_sk_middle_pane_g

0xad67,	// (0x000683a4) aid_touch_area_size_lc0_ParamLimits

0xad67,	// (0x000683a4) aid_touch_area_size_lc0

0x0e13,	// (0x0005e450) cell_hwr_candidate_pane_t1_ParamLimits

0x028b,	// (0x0005d8c8) aid_touch_navi_pane

0xaff3,	// (0x00068630) status_dt_navi_pane_ParamLimits

0xaff3,	// (0x00068630) status_dt_navi_pane

0xb00b,	// (0x00068648) status_dt_sta_pane_ParamLimits

0xb00b,	// (0x00068648) status_dt_sta_pane

0xe4db,	// (0x0006bb18) dt_sta_controll_pane

0xe4e8,	// (0x0006bb25) dt_sta_indi_pane

0xe4f5,	// (0x0006bb32) dt_sta_title_pane

0x7132,	// (0x0006476f) bg_dt_sta_indi_pane_ParamLimits

0x7132,	// (0x0006476f) bg_dt_sta_indi_pane

0xe507,	// (0x0006bb44) dt_sta_battery_pane

0xe50f,	// (0x0006bb4c) dt_sta_indi_pane_g1

0x7452,	// (0x00064a8f) dt_sta_indi_pane_g2

0x745b,	// (0x00064a98) dt_sta_indi_pane_g3

0x0002,

0xfe75,	// (0x0006d4b2) dt_sta_indi_pane_g

0x7464,	// (0x00064aa1) dt_sta_signal_pane

0x8059,	// (0x00065696) bg_dt_sta_title_pane_ParamLimits

0x8059,	// (0x00065696) bg_dt_sta_title_pane

0x2db4,	// (0x000603f1) dt_sta_title_pane_g1

0xe518,	// (0x0006bb55) dt_sta_title_pane_t1_ParamLimits

0xe518,	// (0x0006bb55) dt_sta_title_pane_t1

0x6f98,	// (0x000645d5) bg_dt_sta_control_pane

0xe52d,	// (0x0006bb6a) dt_sta_controll_pane_g1

0xe536,	// (0x0006bb73) bg_dt_sta_title_pane_g1

0xe53f,	// (0x0006bb7c) bg_dt_sta_title_pane_g2

0xe548,	// (0x0006bb85) bg_dt_sta_title_pane_g3

0x0002,

0xfe7c,	// (0x0006d4b9) bg_dt_sta_title_pane_g

0x4728,	// (0x00061d65) bg_dt_sta_indi_pane_g1

0x74a6,	// (0x00064ae3) dt_sta_signal_pane_g1

0x74ae,	// (0x00064aeb) dt_sta_signal_pane_g2

0x0001,

0xfe83,	// (0x0006d4c0) dt_sta_signal_pane_g

0x74b6,	// (0x00064af3) dt_sta_battery_pane_g1

0x74bf,	// (0x00064afc) dt_sta_battery_pane_t1

0x4728,	// (0x00061d65) bg_dt_sta_control_pane_g1

0xc016,	// (0x00069653) fep_china_uni_eep_pane

0xc01e,	// (0x0006965b) fep_china_uni_entry_pane_ParamLimits

0xc02e,	// (0x0006966b) popup_fep_china_uni_window_g1_ParamLimits

0xc03e,	// (0x0006967b) popup_fep_china_uni_window_g2_ParamLimits

0xc03e,	// (0x0006967b) popup_fep_china_uni_window_g2

0x0001,

0xf6ee,	// (0x0006cd2b) popup_fep_china_uni_window_g_ParamLimits

0xf6ee,	// (0x0006cd2b) popup_fep_china_uni_window_g

0x74ce,	// (0x00064b0b) fep_china_uni_eep_pane_g1

0x74d6,	// (0x00064b13) fep_china_uni_eep_pane_t1

0x6c04,	// (0x00064241) aid_touch_area_size_smil_player

0x03e1,	// (0x0005da1e) lc0_clock_pane

0x1de4,	// (0x0005f421) status_pane_g5_ParamLimits

0x1de4,	// (0x0005f421) status_pane_g5

0xa79f,	// (0x00067ddc) popup_keymap_window

0x1da2,	// (0x0005f3df) status_icon_pane

0x6e09,	// (0x00064446) cell_ai5_widget_pane_g3_ParamLimits

0x6e23,	// (0x00064460) cell_ai5_widget_pane_g4_ParamLimits

0x6e33,	// (0x00064470) cell_ai5_widget_pane_g5_ParamLimits

0x6e5b,	// (0x00064498) cell_ai5_widget_pane_g8_ParamLimits

0x6e5b,	// (0x00064498) cell_ai5_widget_pane_g8

0x6e6f,	// (0x000644ac) cell_ai5_widget_pane_g9_ParamLimits

0x6e6f,	// (0x000644ac) cell_ai5_widget_pane_g9

0x6e83,	// (0x000644c0) cell_ai5_widget_pane_g10_ParamLimits

0x6e83,	// (0x000644c0) cell_ai5_widget_pane_g10

0x74e5,	// (0x00064b22) status_icon_pane_g1

0x6f98,	// (0x000645d5) bg_popup_sub_pane_cp13

0x74ed,	// (0x00064b2a) popup_keymap_window_t1

0xa45b,	// (0x00067a98) control_pane_g6_ParamLimits

0xa45b,	// (0x00067a98) control_pane_g6

0xa468,	// (0x00067aa5) control_pane_g7_ParamLimits

0xa468,	// (0x00067aa5) control_pane_g7

0xa475,	// (0x00067ab2) control_pane_g8_ParamLimits

0xa475,	// (0x00067ab2) control_pane_g8

0xe4db,	// (0x0006bb18) dt_sta_controll_pane_ParamLimits

0xe4e8,	// (0x0006bb25) dt_sta_indi_pane_ParamLimits

0xe4f5,	// (0x0006bb32) dt_sta_title_pane_ParamLimits

0x7fa4,	// (0x000655e1) aid_size_touch_scroll_bar_cale

0x90a1,	// (0x000666de) popup_discreet_window_ParamLimits

0x90a1,	// (0x000666de) popup_discreet_window

0x90f3,	// (0x00066730) popup_sk_window

0x25f8,	// (0x0005fc35) bg_popup_sub_pane_cp28_ParamLimits

0x25f8,	// (0x0005fc35) bg_popup_sub_pane_cp28

0x74fb,	// (0x00064b38) popup_discreet_window_g1_ParamLimits

0x74fb,	// (0x00064b38) popup_discreet_window_g1

0xe551,	// (0x0006bb8e) popup_discreet_window_t1_ParamLimits

0xe551,	// (0x0006bb8e) popup_discreet_window_t1

0x7539,	// (0x00064b76) popup_discreet_window_t2_ParamLimits

0x7539,	// (0x00064b76) popup_discreet_window_t2

0x0002,

0xfe88,	// (0x0006d4c5) popup_discreet_window_t_ParamLimits

0xfe88,	// (0x0006d4c5) popup_discreet_window_t

0x1929,	// (0x0005ef66) popup_sk_window_g1

0x1933,	// (0x0005ef70) popup_sk_window_g2

0x0001,

0xfe8f,	// (0x0006d4cc) popup_sk_window_g

0xbc00,	// (0x0006923d) popup_sk_window_t1

0xbc0e,	// (0x0006924b) popup_sk_window_t1_copy1

0x6df5,	// (0x00064432) cell_ai5_widget_pane_g2_ParamLimits

0x726a,	// (0x000648a7) cell_ai5_widget_pane_t9_ParamLimits

0x726a,	// (0x000648a7) cell_ai5_widget_pane_t9

0x6f98,	// (0x000645d5) main_fep_fshwr2_pane

0xbc1c,	// (0x00069259) aid_fshwr2_btn_pane

0xbc30,	// (0x0006926d) aid_fshwr2_syb_pane

0xbc44,	// (0x00069281) aid_fshwr2_txt_pane

0xbc54,	// (0x00069291) fshwr2_func_candi_pane

0xbc74,	// (0x000692b1) fshwr2_hwr_syb_pane

0xbc96,	// (0x000692d3) fshwr2_icf_pane

0xe7a7,	// (0x0006bde4) fshwr2_icf_bg_pane

0x19fb,	// (0x0005f038) fshwr2_icf_pane_t1_ParamLimits

0x19fb,	// (0x0005f038) fshwr2_icf_pane_t1

0xbf93,	// (0x000695d0) fshwr2_func_candi_pane_g1

0xe56f,	// (0x0006bbac) fshwr2_func_candi_row_pane_ParamLimits

0xe56f,	// (0x0006bbac) fshwr2_func_candi_row_pane

0xbcc6,	// (0x00069303) cell_fshwr2_syb_pane_ParamLimits

0xbcc6,	// (0x00069303) cell_fshwr2_syb_pane

0x1a37,	// (0x0005f074) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1a37,	// (0x0005f074) fshwr2_hwr_syb_pane_g1

0xe7a7,	// (0x0006bde4) bg_popup_call_pane_cp01

0xbcec,	// (0x00069329) fshwr2_func_candi_cell_pane_ParamLimits

0xbcec,	// (0x00069329) fshwr2_func_candi_cell_pane

0x23e1,	// (0x0005fa1e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x23e1,	// (0x0005fa1e) fshwr2_func_candi_cell_bg_pane

0xbd37,	// (0x00069374) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbd37,	// (0x00069374) fshwr2_func_candi_cell_pane_g1

0xbd6e,	// (0x000693ab) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbd6e,	// (0x000693ab) fshwr2_func_candi_cell_pane_t1

0xe7a7,	// (0x0006bde4) bg_button_pane_cp08

0x8434,	// (0x00065a71) cell_fshwr2_syb_bg_pane

0xbd89,	// (0x000693c6) cell_fshwr2_syb_bg_pane_g1

0xbd9c,	// (0x000693d9) cell_fshwr2_syb_bg_pane_t1

0x8059,	// (0x00065696) main_tmo_pane

0xc966,	// (0x00069fa3) uni_indicator_pane_g1_ParamLimits

0xc97c,	// (0x00069fb9) uni_indicator_pane_g2_ParamLimits

0xc992,	// (0x00069fcf) uni_indicator_pane_g3_ParamLimits

0x3121,	// (0x0006075e) uni_indicator_pane_g4_ParamLimits

0x3121,	// (0x0006075e) uni_indicator_pane_g4

0x3135,	// (0x00060772) uni_indicator_pane_g5_ParamLimits

0x3135,	// (0x00060772) uni_indicator_pane_g5

0x3135,	// (0x00060772) uni_indicator_pane_g6_ParamLimits

0x3135,	// (0x00060772) uni_indicator_pane_g6

0xf8e6,	// (0x0006cf23) uni_indicator_pane_g_ParamLimits

0xd7d7,	// (0x0006ae14) popup_tmo_note_window_ParamLimits

0xd7d7,	// (0x0006ae14) popup_tmo_note_window

0x1186,	// (0x0005e7c3) fshwr2_bg_pane

0xbd5f,	// (0x0006939c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbd5f,	// (0x0006939c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe94,	// (0x0006d4d1) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe94,	// (0x0006d4d1) fshwr2_func_candi_cell_pane_g

0x0dcc,	// (0x0005e409) bg_popup_window_pane_cp01

0x1aed,	// (0x0005f12a) bg_popup_window_pane_g1_cp01

0x75b2,	// (0x00064bef) bg_popup_window_pane_cp22_ParamLimits

0x75b2,	// (0x00064bef) bg_popup_window_pane_cp22

0xe592,	// (0x0006bbcf) listscroll_tmo_link_pane_ParamLimits

0xe592,	// (0x0006bbcf) listscroll_tmo_link_pane

0x7600,	// (0x00064c3d) popup_tmo_note_window_g1_ParamLimits

0x7600,	// (0x00064c3d) popup_tmo_note_window_g1

0xe5d2,	// (0x0006bc0f) tmo_note_info_pane_ParamLimits

0xe5d2,	// (0x0006bc0f) tmo_note_info_pane

0xe5ec,	// (0x0006bc29) list_tmo_note_info_pane_g1_ParamLimits

0xe5ec,	// (0x0006bc29) list_tmo_note_info_pane_g1

0x763e,	// (0x00064c7b) list_tmo_note_info_pane_g2_ParamLimits

0x763e,	// (0x00064c7b) list_tmo_note_info_pane_g2

0x0001,

0xfe99,	// (0x0006d4d6) list_tmo_note_info_pane_g_ParamLimits

0xfe99,	// (0x0006d4d6) list_tmo_note_info_pane_g

0x765a,	// (0x00064c97) list_tmo_note_info_text_pane_ParamLimits

0x765a,	// (0x00064c97) list_tmo_note_info_text_pane

0x76db,	// (0x00064d18) list_tmo_link_pane

0x76e8,	// (0x00064d25) scroll_pane_cp20

0x76f5,	// (0x00064d32) list_single_tmo_link_pane_ParamLimits

0x76f5,	// (0x00064d32) list_single_tmo_link_pane

0x7705,	// (0x00064d42) list_single_tmo_link_pane_t1

0x7713,	// (0x00064d50) list_tmo_note_info_text_pane_t1_ParamLimits

0x7713,	// (0x00064d50) list_tmo_note_info_text_pane_t1

0x9dc6,	// (0x00067403) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9dc6,	// (0x00067403) aid_size_touch_scroll_bar_cp01

0x9cc6,	// (0x00067303) aid_size_touch_slider_marker

0x90e3,	// (0x00066720) popup_settings_window_ParamLimits

0x90e3,	// (0x00066720) popup_settings_window

0xe997,	// (0x0006bfd4) popup_candi_list_indi_window

0x028b,	// (0x0005d8c8) aid_touch_navi_pane_ParamLimits

0x10e1,	// (0x0005e71e) rs_clock_indi_pane

0x10ea,	// (0x0005e727) sctrl_sk_bottom_pane_ParamLimits

0x10fb,	// (0x0005e738) sctrl_sk_top_pane_ParamLimits

0xb855,	// (0x00068e92) popup_fep_tooltip_window

0x6d6b,	// (0x000643a8) aid_size_cell_widget_grid_ParamLimits

0x6de0,	// (0x0006441d) cell_ai5_widget_pane_g1_ParamLimits

0x6de0,	// (0x0006441d) cell_ai5_widget_pane_g1

0x6e43,	// (0x00064480) cell_ai5_widget_pane_g6_ParamLimits

0x6e4f,	// (0x0006448c) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0d,	// (0x0006d44a) cell_ai5_widget_pane_g_ParamLimits

0xfe0d,	// (0x0006d44a) cell_ai5_widget_pane_g

0x7299,	// (0x000648d6) cell_ai5_widget_pane_t10_ParamLimits

0x7299,	// (0x000648d6) cell_ai5_widget_pane_t10

0x72dc,	// (0x00064919) grid_ai5_widget_pane_ParamLimits

0x7374,	// (0x000649b1) cell_contacts_ai5_widget_pane_ParamLimits

0x7374,	// (0x000649b1) cell_contacts_ai5_widget_pane

0x754e,	// (0x00064b8b) popup_discreet_window_t3_ParamLimits

0x754e,	// (0x00064b8b) popup_discreet_window_t3

0xbcb2,	// (0x000692ef) popup_fshwr2_char_preview_window_ParamLimits

0xbcb2,	// (0x000692ef) popup_fshwr2_char_preview_window

0xe603,	// (0x0006bc40) tmo_note_info_pane_t1

0xe618,	// (0x0006bc55) tmo_note_info_pane_t2

0xe62f,	// (0x0006bc6c) tmo_note_info_pane_t3

0x76b7,	// (0x00064cf4) tmo_note_info_pane_t4

0x76c9,	// (0x00064d06) tmo_note_info_pane_t5

0x0004,

0xfe9e,	// (0x0006d4db) tmo_note_info_pane_t

0x76db,	// (0x00064d18) list_tmo_link_pane_ParamLimits

0x76e8,	// (0x00064d25) scroll_pane_cp20_ParamLimits

0xe7a7,	// (0x0006bde4) bg_popup_fep_char_preview_window_cp01

0xe644,	// (0x0006bc81) popup_fshwr2_char_preview_window_t1

0x773a,	// (0x00064d77) popup_candi_list_indi_window_g1

0x7743,	// (0x00064d80) bg_cell_contacts_ai5_widget_pane

0x774f,	// (0x00064d8c) cell_contacts_ai5_widget_pane_g1

0x4e02,	// (0x0006243f) cell_contacts_ai5_widget_pane_g2

0x7764,	// (0x00064da1) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea9,	// (0x0006d4e6) cell_contacts_ai5_widget_pane_g

0x7770,	// (0x00064dad) cell_contacts_ai5_widget_pane_t1

0x8059,	// (0x00065696) highlight_cell_shortcut_ai5_widget_pane_cp01

0x77e7,	// (0x00064e24) settings_container_pane

0xc3f1,	// (0x00069a2e) listscroll_set_pane_copy1

0x3caf,	// (0x000612ec) scroll_pane_cp121_copy1

0x239d,	// (0x0005f9da) set_content_pane_copy1

0xe652,	// (0x0006bc8f) aid_height_set_list_copy1_ParamLimits

0xe652,	// (0x0006bc8f) aid_height_set_list_copy1

0x332d,	// (0x0006096a) aid_size_parent_copy1_ParamLimits

0x332d,	// (0x0006096a) aid_size_parent_copy1

0xe65e,	// (0x0006bc9b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe65e,	// (0x0006bc9b) button_value_adjust_pane_cp6_copy1

0x8434,	// (0x00065a71) list_highlight_pane_cp2_copy1_ParamLimits

0x8434,	// (0x00065a71) list_highlight_pane_cp2_copy1

0xe672,	// (0x0006bcaf) list_set_pane_copy1_ParamLimits

0xe672,	// (0x0006bcaf) list_set_pane_copy1

0x7782,	// (0x00064dbf) main_pane_set_t1_copy1_ParamLimits

0x7782,	// (0x00064dbf) main_pane_set_t1_copy1

0x77bc,	// (0x00064df9) main_pane_set_t2_copy1_ParamLimits

0x77bc,	// (0x00064df9) main_pane_set_t2_copy1

0xe71f,	// (0x0006bd5c) main_pane_set_t3_copy1

0xe72d,	// (0x0006bd6a) main_pane_set_t4_copy1

0x77db,	// (0x00064e18) set_content_pane_g1_copy1_ParamLimits

0x77db,	// (0x00064e18) set_content_pane_g1_copy1

0xe73b,	// (0x0006bd78) setting_code_pane_copy1

0x78e4,	// (0x00064f21) setting_slider_graphic_pane_copy1

0x78e4,	// (0x00064f21) setting_slider_pane_copy1

0x78ec,	// (0x00064f29) setting_text_pane_copy1

0x78ec,	// (0x00064f29) setting_volume_pane_copy1

0xe73b,	// (0x0006bd78) settings_code_pane_cp2_copy1

0xe743,	// (0x0006bd80) settings_code_pane_cp_copy1_ParamLimits

0xe743,	// (0x0006bd80) settings_code_pane_cp_copy1

0xbdb2,	// (0x000693ef) volume_set_pane_copy1

0xe757,	// (0x0006bd94) volume_set_pane_g10_copy1

0xe75f,	// (0x0006bd9c) volume_set_pane_g1_copy1

0xe767,	// (0x0006bda4) volume_set_pane_g2_copy1

0xe76f,	// (0x0006bdac) volume_set_pane_g3_copy1

0xe777,	// (0x0006bdb4) volume_set_pane_g4_copy1

0xe77f,	// (0x0006bdbc) volume_set_pane_g5_copy1

0xeedd,	// (0x0006c51a) volume_set_pane_g6_copy1

0xeee5,	// (0x0006c522) volume_set_pane_g7_copy1

0xeeed,	// (0x0006c52a) volume_set_pane_g8_copy1

0xeef5,	// (0x0006c532) volume_set_pane_g9_copy1

0x6ffa,	// (0x00064637) bg_set_opt_pane_cp_copy1_ParamLimits

0x6ffa,	// (0x00064637) bg_set_opt_pane_cp_copy1

0xbdba,	// (0x000693f7) setting_slider_pane_t1_copy1_ParamLimits

0xbdba,	// (0x000693f7) setting_slider_pane_t1_copy1

0xbdd9,	// (0x00069416) setting_slider_pane_t2_copy1_ParamLimits

0xbdd9,	// (0x00069416) setting_slider_pane_t2_copy1

0xbdf3,	// (0x00069430) setting_slider_pane_t3_copy1_ParamLimits

0xbdf3,	// (0x00069430) setting_slider_pane_t3_copy1

0xbe0b,	// (0x00069448) slider_set_pane_copy1_ParamLimits

0xbe0b,	// (0x00069448) slider_set_pane_copy1

0x80b1,	// (0x000656ee) set_opt_bg_pane_g1_copy2

0x80b9,	// (0x000656f6) set_opt_bg_pane_g2_copy2

0x7958,	// (0x00064f95) set_opt_bg_pane_g3_copy2

0x80c9,	// (0x00065706) set_opt_bg_pane_g4_copy2

0x80d1,	// (0x0006570e) set_opt_bg_pane_g5_copy2

0x80d9,	// (0x00065716) set_opt_bg_pane_g6_copy2

0xeefd,	// (0x0006c53a) set_opt_bg_pane_g7_copy2

0x796a,	// (0x00064fa7) set_opt_bg_pane_g8_copy2

0x7974,	// (0x00064fb1) set_opt_bg_pane_g9_copy2

0xbe21,	// (0x0006945e) aid_size_touch_slider_mark_copy1_ParamLimits

0xbe21,	// (0x0006945e) aid_size_touch_slider_mark_copy1

0xef05,	// (0x0006c542) slider_set_pane_g1_copy1

0x1b79,	// (0x0005f1b6) slider_set_pane_g2_copy1

0xb449,	// (0x00068a86) slider_set_pane_g3_copy1_ParamLimits

0xb449,	// (0x00068a86) slider_set_pane_g3_copy1

0xb45d,	// (0x00068a9a) slider_set_pane_g4_copy1_ParamLimits

0xb45d,	// (0x00068a9a) slider_set_pane_g4_copy1

0xb475,	// (0x00068ab2) slider_set_pane_g5_copy1_ParamLimits

0xb475,	// (0x00068ab2) slider_set_pane_g5_copy1

0xb449,	// (0x00068a86) slider_set_pane_g6_copy1_ParamLimits

0xb449,	// (0x00068a86) slider_set_pane_g6_copy1

0xbe35,	// (0x00069472) slider_set_pane_g7_copy1_ParamLimits

0xbe35,	// (0x00069472) slider_set_pane_g7_copy1

0x6fac,	// (0x000645e9) bg_set_opt_pane_cp2_copy1

0xef0e,	// (0x0006c54b) setting_slider_graphic_pane_g1_copy1

0xef17,	// (0x0006c554) setting_slider_graphic_pane_t1_copy1

0xef27,	// (0x0006c564) setting_slider_graphic_pane_t2_copy1

0xef37,	// (0x0006c574) slider_set_pane_cp_copy1

0x79c0,	// (0x00064ffd) input_focus_pane_cp1_copy1

0x79c9,	// (0x00065006) list_set_text_pane_copy1

0x79d1,	// (0x0006500e) setting_text_pane_g1_copy1

0xef47,	// (0x0006c584) set_text_pane_t1_copy1

0x79c0,	// (0x00064ffd) input_focus_pane_cp2_copy1

0x79d1,	// (0x0006500e) setting_code_pane_g1_copy1

0x79da,	// (0x00065017) setting_code_pane_t1_copy1

0x79e8,	// (0x00065025) list_set_graphic_pane_copy1

0x6fac,	// (0x000645e9) bg_set_opt_pane_cp4_copy1

0xc16e,	// (0x000697ab) list_set_graphic_pane_g1_copy1_ParamLimits

0xc16e,	// (0x000697ab) list_set_graphic_pane_g1_copy1

0x79fc,	// (0x00065039) list_set_graphic_pane_g2_copy1

0xc186,	// (0x000697c3) list_set_graphic_pane_t1_copy1_ParamLimits

0xc186,	// (0x000697c3) list_set_graphic_pane_t1_copy1

0x4728,	// (0x00061d65) rs_clock_indi_pane_g1

0x7a04,	// (0x00065041) rs_clock_indi_pane_t1

0x7a12,	// (0x0006504f) rs_indi_pane

0x7a1a,	// (0x00065057) rs_indi_pane_g1

0x7a23,	// (0x00065060) rs_indi_pane_g2

0x773a,	// (0x00064d77) rs_indi_pane_g3

0x0002,

0xfeb0,	// (0x0006d4ed) rs_indi_pane_g

0xc3f1,	// (0x00069a2e) bg_popup_preview_window_pane_cp03

0x7a2c,	// (0x00065069) popup_fep_tooltip_window_t1

0xd405,	// (0x0006aa42) popup_note2_window_g2_ParamLimits

0xd405,	// (0x0006aa42) popup_note2_window_g2

0x0001,

0xfc44,	// (0x0006d281) popup_note2_window_g_ParamLimits

0xfc44,	// (0x0006d281) popup_note2_window_g

0x58cf,	// (0x00062f0c) bg_popup_sub_pane_cp11_ParamLimits

0x58dc,	// (0x00062f19) cell_ai3_links_pane_g1_ParamLimits

0x58f3,	// (0x00062f30) cell_ai3_links_pane_t1

0xef47,	// (0x0006c584) set_text_pane_t1_copy1_ParamLimits

0xc333,	// (0x00069970) cell_graphic_popup_pane_cp2_ParamLimits

0xc333,	// (0x00069970) cell_graphic_popup_pane_cp2

0xef61,	// (0x0006c59e) cell_graphic_popup_pane_g1_cp2

0x7f27,	// (0x00065564) cell_graphic_popup_pane_g2_cp2

0x7a42,	// (0x0006507f) cell_graphic_popup_pane_g3_cp2

0xef69,	// (0x0006c5a6) cell_graphic_popup_pane_t2_cp2

0x7f38,	// (0x00065575) grid_highlight_pane_cp3_cp2

0x831c,	// (0x00065959) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8059,	// (0x00065696) main_tmo_pane_ParamLimits

0xd7cb,	// (0x0006ae08) popup_tmo_big_image_note_window

0x6dcf,	// (0x0006440c) cell_ai5_widget_list_pane

0x6dd7,	// (0x00064414) cell_ai5_widget_lrg_icon_pane

0xe603,	// (0x0006bc40) tmo_note_info_pane_t1_ParamLimits

0xe618,	// (0x0006bc55) tmo_note_info_pane_t2_ParamLimits

0xe62f,	// (0x0006bc6c) tmo_note_info_pane_t3_ParamLimits

0x76b7,	// (0x00064cf4) tmo_note_info_pane_t4_ParamLimits

0x76c9,	// (0x00064d06) tmo_note_info_pane_t5_ParamLimits

0xfe9e,	// (0x0006d4db) tmo_note_info_pane_t_ParamLimits

0x77e7,	// (0x00064e24) settings_container_pane_ParamLimits

0xef3f,	// (0x0006c57c) indicator_popup_pane_cp5

0xef3f,	// (0x0006c57c) indicator_popup_pane_cp6

0x79e8,	// (0x00065025) list_set_graphic_pane_copy1_ParamLimits

0x6f98,	// (0x000645d5) bg_popup_window_pane_cp23

0x7a58,	// (0x00065095) popup_tmo_big_image_note_window_g1

0x7a61,	// (0x0006509e) popup_tmo_big_image_note_window_t1

0x7a71,	// (0x000650ae) popup_tmo_big_image_note_window_t2

0x7a81,	// (0x000650be) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb7,	// (0x0006d4f4) popup_tmo_big_image_note_window_t

0x4728,	// (0x00061d65) cell_ai5_widget_lrg_icon_pane_g1

0x7a91,	// (0x000650ce) cell_ai5_widget_lrg_icon_pane_t1

0x7a9f,	// (0x000650dc) cell_ai5_widget_list_row_pane_ParamLimits

0x7a9f,	// (0x000650dc) cell_ai5_widget_list_row_pane

0x7ab6,	// (0x000650f3) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7ab6,	// (0x000650f3) cell_ai5_widget_list_row_pane_g1

0xef77,	// (0x0006c5b4) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xef77,	// (0x0006c5b4) cell_ai5_widget_list_row_pane_t1

0x7aee,	// (0x0006512b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7aee,	// (0x0006512b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebe,	// (0x0006d4fb) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebe,	// (0x0006d4fb) cell_ai5_widget_list_row_pane_t

0xe7a7,	// (0x0006bde4) main_fep_vtchi_ss_pane

0x7b3e,	// (0x0006517b) popup_fep_char_pre_window

0x7b46,	// (0x00065183) popup_fep_ituss_window

0xefd2,	// (0x0006c60f) popup_fep_vkbss_window

0x8434,	// (0x00065a71) grid_vkbss_keypad_pane_ParamLimits

0x8434,	// (0x00065a71) grid_vkbss_keypad_pane

0x7bb2,	// (0x000651ef) ituss_keypad_pane

0x1ba1,	// (0x0005f1de) aid_vkbss_key_offset_ParamLimits

0x1ba1,	// (0x0005f1de) aid_vkbss_key_offset

0xbe4b,	// (0x00069488) cell_vkbss_key_pane_ParamLimits

0xbe4b,	// (0x00069488) cell_vkbss_key_pane

0x7bc2,	// (0x000651ff) bg_cell_vkbss_key_g1_ParamLimits

0x7bc2,	// (0x000651ff) bg_cell_vkbss_key_g1

0xefdf,	// (0x0006c61c) cell_vkbss_key_3p_pane_ParamLimits

0xefdf,	// (0x0006c61c) cell_vkbss_key_3p_pane

0xf015,	// (0x0006c652) cell_vkbss_key_g1_ParamLimits

0xf015,	// (0x0006c652) cell_vkbss_key_g1

0xf04b,	// (0x0006c688) cell_vkbss_key_t1_ParamLimits

0xf04b,	// (0x0006c688) cell_vkbss_key_t1

0x1bf8,	// (0x0005f235) cell_ituss_key_pane_ParamLimits

0x1bf8,	// (0x0005f235) cell_ituss_key_pane

0x7c96,	// (0x000652d3) bg_cell_ituss_key_g1_ParamLimits

0x7c96,	// (0x000652d3) bg_cell_ituss_key_g1

0x7ca2,	// (0x000652df) cell_ituss_key_pane_g1_ParamLimits

0x7ca2,	// (0x000652df) cell_ituss_key_pane_g1

0x1c09,	// (0x0005f246) cell_ituss_key_pane_g2_ParamLimits

0x1c09,	// (0x0005f246) cell_ituss_key_pane_g2

0x0005,

0xfec5,	// (0x0006d502) cell_ituss_key_pane_g_ParamLimits

0xfec5,	// (0x0006d502) cell_ituss_key_pane_g

0x1c8d,	// (0x0005f2ca) cell_ituss_key_t1_ParamLimits

0x1c8d,	// (0x0005f2ca) cell_ituss_key_t1

0x1cc7,	// (0x0005f304) cell_ituss_key_t2_ParamLimits

0x1cc7,	// (0x0005f304) cell_ituss_key_t2

0x1cf9,	// (0x0005f336) cell_ituss_key_t3_ParamLimits

0x1cf9,	// (0x0005f336) cell_ituss_key_t3

0x1d2a,	// (0x0005f367) cell_ituss_key_t4_ParamLimits

0x1d2a,	// (0x0005f367) cell_ituss_key_t4

0x0004,

0xfed2,	// (0x0006d50f) cell_ituss_key_t_ParamLimits

0xfed2,	// (0x0006d50f) cell_ituss_key_t

0xf0a7,	// (0x0006c6e4) cell_vkbss_key_3p_pane_g1

0xf0af,	// (0x0006c6ec) cell_vkbss_key_3p_pane_g2

0xf0b7,	// (0x0006c6f4) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedd,	// (0x0006d51a) cell_vkbss_key_3p_pane_g

0xc3f1,	// (0x00069a2e) bg_popup_fep_char_preview_window_cp02

0x7ce0,	// (0x0006531d) popup_fep_char_pre_window_t1

0xe48b,	// (0x0006bac8) main_ai5_sk_pane

0x7743,	// (0x00064d80) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x774f,	// (0x00064d8c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4e02,	// (0x0006243f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7764,	// (0x00064da1) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea9,	// (0x0006d4e6) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7770,	// (0x00064dad) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8059,	// (0x00065696) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf0bf,	// (0x0006c6fc) main_ai5_sk_pane_g1

0xc5bf,	// (0x00069bfc) popup_query_code_window_g1

0xefc3,	// (0x0006c600) popup_fep_vkb_icf_pane

0x7b89,	// (0x000651c6) popup_fep_vtchi_icf_pane

0x7cf7,	// (0x00065334) bg_icf_pane

0x7cf7,	// (0x00065334) list_vkb_icf_pane

0x7d03,	// (0x00065340) bg_icf_pane_cp01

0x7d16,	// (0x00065353) vtchi_icf_list_pane

0xf114,	// (0x0006c751) list_vkb_icf_pane_t1_ParamLimits

0xf114,	// (0x0006c751) list_vkb_icf_pane_t1

0x7d9b,	// (0x000653d8) vtchi_icf_list_pane_t1_ParamLimits

0x7d9b,	// (0x000653d8) vtchi_icf_list_pane_t1

0x7b46,	// (0x00065183) popup_fep_ituss_window_ParamLimits

0x7b89,	// (0x000651c6) popup_fep_vtchi_icf_pane_ParamLimits

0x7bb2,	// (0x000651ef) ituss_keypad_pane_ParamLimits

0x1b97,	// (0x0005f1d4) ituss_sks_pane

0x7cf7,	// (0x00065334) bg_icf_pane_ParamLimits

0xefa8,	// (0x0006c5e5) icf_edit_indi_pane_ParamLimits

0xefa8,	// (0x0006c5e5) icf_edit_indi_pane

0x7cf7,	// (0x00065334) list_vkb_icf_pane_ParamLimits

0x7d03,	// (0x00065340) bg_icf_pane_cp01_ParamLimits

0x7b31,	// (0x0006516e) icf_edit_indi_pane_cp01_ParamLimits

0x7b31,	// (0x0006516e) icf_edit_indi_pane_cp01

0x7d16,	// (0x00065353) vtchi_query_pane

0x6bd4,	// (0x00064211) icf_edit_indi_pane_g1_ParamLimits

0x6bd4,	// (0x00064211) icf_edit_indi_pane_g1

0xf12c,	// (0x0006c769) icf_edit_indi_pane_g2_ParamLimits

0xf12c,	// (0x0006c769) icf_edit_indi_pane_g2

0x0001,

0xff08,	// (0x0006d545) icf_edit_indi_pane_g_ParamLimits

0xff08,	// (0x0006d545) icf_edit_indi_pane_g

0xf140,	// (0x0006c77d) icf_edit_indi_pane_t1

0x7dbf,	// (0x000653fc) bg_input_focus_pane_cp042

0x7f9b,	// (0x000655d8) vtchi_button_pane

0x7dc8,	// (0x00065405) vtchi_query_pane_t1

0x7dd6,	// (0x00065413) vtchi_query_pane_t2

0x7de4,	// (0x00065421) vtchi_query_pane_t3

0x0002,

0xfef7,	// (0x0006d534) vtchi_query_pane_t

0xe7a7,	// (0x0006bde4) bg_button_pane_cp13

0x7df2,	// (0x0006542f) vtchi_button_pane_g1

0x1d6d,	// (0x0005f3aa) ituss_sks_pane_g1

0x1d78,	// (0x0005f3b5) ituss_sks_pane_g2

0x0001,

0xfefe,	// (0x0006d53b) ituss_sks_pane_g

0x7dfa,	// (0x00065437) ituss_sks_pane_t1

0x7e08,	// (0x00065445) ituss_sks_pane_t2

0x0001,

0xff03,	// (0x0006d540) ituss_sks_pane_t

0x40c7,	// (0x00061704) indicator_nsta_pane_cp_g1

0x40d0,	// (0x0006170d) indicator_nsta_pane_cp_g2

0x40d8,	// (0x00061715) indicator_nsta_pane_cp_g3

0x40e0,	// (0x0006171d) indicator_nsta_pane_cp_g4

0x40d0,	// (0x0006170d) indicator_nsta_pane_cp_g5

0x40d8,	// (0x00061715) indicator_nsta_pane_cp_g6

0x0005,

0xfa82,	// (0x0006d0bf) indicator_nsta_pane_cp_g

0xe26a,	// (0x0006b8a7) cell_graphic2_pane_t2_ParamLimits

0xe26a,	// (0x0006b8a7) cell_graphic2_pane_t2

0x0001,

0xfd94,	// (0x0006d3d1) cell_graphic2_pane_t_ParamLimits

0xfd94,	// (0x0006d3d1) cell_graphic2_pane_t

0xe2a1,	// (0x0006b8de) cell_graphic2_control_pane_t1

0xa09e,	// (0x000676db) signal_pane_g3_ParamLimits

0xa09e,	// (0x000676db) signal_pane_g3

0xa0b2,	// (0x000676ef) signal_pane_g4_ParamLimits

0xa0b2,	// (0x000676ef) signal_pane_g4

0x7b00,	// (0x0006513d) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7b00,	// (0x0006513d) cell_ai5_widget_list_row_pane_t3

0x7cb6,	// (0x000652f3) cell_ituss_key_pane_t1_ParamLimits

0x7cb6,	// (0x000652f3) cell_ituss_key_pane_t1

0x206c,	// (0x0005f6a9) form_field_data_wide_pane_vc_t2_ParamLimits

0x206c,	// (0x0005f6a9) form_field_data_wide_pane_vc_t2

0x2080,	// (0x0005f6bd) form_field_data_wide_pane_vc_t3_ParamLimits

0x2080,	// (0x0005f6bd) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ce,	// (0x0006ce0b) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ce,	// (0x0006ce0b) form_field_data_wide_pane_vc_t

0x3d71,	// (0x000613ae) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3d71,	// (0x000613ae) form_field_slider_wide_pane_vc_t3

0x3e4f,	// (0x0006148c) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3e4f,	// (0x0006148c) form_field_popup_wide_pane_vc_t2

0x3e66,	// (0x000614a3) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3e66,	// (0x000614a3) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa71,	// (0x0006d0ae) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa71,	// (0x0006d0ae) form_field_popup_wide_pane_vc_t

0xbc1c,	// (0x00069259) aid_fshwr2_btn_pane_ParamLimits

0xbc30,	// (0x0006926d) aid_fshwr2_syb_pane_ParamLimits

0xbc44,	// (0x00069281) aid_fshwr2_txt_pane_ParamLimits

0x1186,	// (0x0005e7c3) fshwr2_bg_pane_ParamLimits

0xbc54,	// (0x00069291) fshwr2_func_candi_pane_ParamLimits

0xbc74,	// (0x000692b1) fshwr2_hwr_syb_pane_ParamLimits

0xbc96,	// (0x000692d3) fshwr2_icf_pane_ParamLimits

0x3d2b,	// (0x00061368) list_double_graphic_pane_vc_g4_ParamLimits

0x3d2b,	// (0x00061368) list_double_graphic_pane_vc_g4

0x1c29,	// (0x0005f266) cell_ituss_key_pane_g3_ParamLimits

0x1c29,	// (0x0005f266) cell_ituss_key_pane_g3

0x1d5b,	// (0x0005f398) cell_ituss_key_t5_ParamLimits

0x1d5b,	// (0x0005f398) cell_ituss_key_t5

0xefd2,	// (0x0006c60f) popup_fep_vkbss_window_ParamLimits

0x6d62,	// (0x0006439f) aid_cell_ai5_quarter

0xf140,	// (0x0006c77d) icf_edit_indi_pane_t1_ParamLimits

0x950c,	// (0x00066b49) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x950c,	// (0x00066b49) aid_tch_indicator_popup_pane_cp2

0x951f,	// (0x00066b5c) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x951f,	// (0x00066b5c) aid_tch_query_popup_data_pane_cp2

0x23e1,	// (0x0005fa1e) aid_tch_query_popup_pane_ParamLimits

0x23e1,	// (0x0005fa1e) aid_tch_query_popup_pane

0x23e1,	// (0x0005fa1e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x23e1,	// (0x0005fa1e) aid_tch_query_popup_data_pane_cp1

0x8434,	// (0x00065a71) cell_fshwr2_syb_bg_pane_ParamLimits

0xbd89,	// (0x000693c6) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xbd9c,	// (0x000693d9) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xefc3,	// (0x0006c600) popup_fep_vkb_icf_pane_ParamLimits

0xbb82,	// (0x000691bf) bg_popup_fep_char_preview_window_g10

0x6e97,	// (0x000644d4) cell_ai5_widget_pane_g11_ParamLimits

0x6e97,	// (0x000644d4) cell_ai5_widget_pane_g11

0x6ea3,	// (0x000644e0) cell_ai5_widget_pane_g12_ParamLimits

0x6ea3,	// (0x000644e0) cell_ai5_widget_pane_g12

0x6eaf,	// (0x000644ec) cell_ai5_widget_pane_g13_ParamLimits

0x6eaf,	// (0x000644ec) cell_ai5_widget_pane_g13

0x72b8,	// (0x000648f5) cell_ai5_widget_pane_t11_ParamLimits

0x72b8,	// (0x000648f5) cell_ai5_widget_pane_t11

0x72ca,	// (0x00064907) cell_ai5_widget_pane_t12_ParamLimits

0x72ca,	// (0x00064907) cell_ai5_widget_pane_t12

0x1c35,	// (0x0005f272) cell_ituss_key_pane_g4_ParamLimits

0x1c35,	// (0x0005f272) cell_ituss_key_pane_g4

0x1c51,	// (0x0005f28e) cell_ituss_key_pane_g5_ParamLimits

0x1c51,	// (0x0005f28e) cell_ituss_key_pane_g5

0x1c6d,	// (0x0005f2aa) cell_ituss_key_pane_g6_ParamLimits

0x1c6d,	// (0x0005f2aa) cell_ituss_key_pane_g6

0x1f52,	// (0x0005f58f) bg_icf_pane_g1

0xf0c8,	// (0x0006c705) bg_icf_pane_g2

0xf0d2,	// (0x0006c70f) bg_icf_pane_g3

0xf0da,	// (0x0006c717) bg_icf_pane_g4

0xf0e4,	// (0x0006c721) bg_icf_pane_g5

0xf0ee,	// (0x0006c72b) bg_icf_pane_g6

0xf0f8,	// (0x0006c735) bg_icf_pane_g7

0xf100,	// (0x0006c73d) bg_icf_pane_g8

0xf10a,	// (0x0006c747) bg_icf_pane_g9

0x0008,

0xfee4,	// (0x0006d521) bg_icf_pane_g

0x7b9f,	// (0x000651dc) popup_hyb_candi_window_ParamLimits

0x7b9f,	// (0x000651dc) popup_hyb_candi_window

0x1fde,	// (0x0005f61b) bg_popup_sub_pane_cp01_ParamLimits

0x1fde,	// (0x0005f61b) bg_popup_sub_pane_cp01

0x7e43,	// (0x00065480) entry_hyb_candi_pane_ParamLimits

0x7e43,	// (0x00065480) entry_hyb_candi_pane

0x7e52,	// (0x0006548f) grid_hyb_candi_pane_ParamLimits

0x7e52,	// (0x0006548f) grid_hyb_candi_pane

0x7e67,	// (0x000654a4) grid_hyb_phrase_pane_ParamLimits

0x7e67,	// (0x000654a4) grid_hyb_phrase_pane

0x7e76,	// (0x000654b3) cell_hyb_candi_pane_ParamLimits

0x7e76,	// (0x000654b3) cell_hyb_candi_pane

0x7e99,	// (0x000654d6) cell_hyb_candi_scroll_pane

0xbf93,	// (0x000695d0) cell_hyb_candi_pane_g1

0x7ea2,	// (0x000654df) cell_hyb_candi_pane_t1

0x7eb0,	// (0x000654ed) cell_hyb_phrase_pane

0xbf93,	// (0x000695d0) cell_hyb_phrase_pane_g1

0x7eb9,	// (0x000654f6) cell_hyb_phrase_pane_t1

0x7ec7,	// (0x00065504) entry_hyb_candi_pane_t1

0xc3f1,	// (0x00069a2e) input_focus_pane_cp06

0x7ed5,	// (0x00065512) cell_hyb_candi_scroll_pane_g1

0x7edd,	// (0x0006551a) cell_hyb_candi_scroll_pane_g1_aid

0x7ee5,	// (0x00065522) cell_hyb_candi_scroll_pane_g2

0x7eed,	// (0x0006552a) cell_hyb_candi_scroll_pane_g2_aid

0x7ef5,	// (0x00065532) cell_hyb_candi_scroll_pane_g3

0x7efd,	// (0x0006553a) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
