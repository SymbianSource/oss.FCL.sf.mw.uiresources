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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002a5f8 };

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
0x7e50,	// (0x00032448) Screen

0x7e64,	// (0x0003245c) application_window_ParamLimits

0x7e64,	// (0x0003245c) application_window

0x7e7e,	// (0x00032476) screen_g1

0x4901,	// (0x0002eef9) area_bottom_pane_ParamLimits

0x4901,	// (0x0002eef9) area_bottom_pane

0x49c1,	// (0x0002efb9) area_top_pane_ParamLimits

0x49c1,	// (0x0002efb9) area_top_pane

0x4a5f,	// (0x0002f057) main_pane_ParamLimits

0x4a5f,	// (0x0002f057) main_pane

0x7e88,	// (0x00032480) misc_graphics

0x984a,	// (0x00033e42) battery_pane_ParamLimits

0x984a,	// (0x00033e42) battery_pane

0xa518,	// (0x00034b10) bg_status_flat_pane_g8

0xa520,	// (0x00034b18) bg_status_flat_pane_g9

0x990c,	// (0x00033f04) context_pane_ParamLimits

0x990c,	// (0x00033f04) context_pane

0x9a22,	// (0x0003401a) navi_pane_ParamLimits

0x9a22,	// (0x0003401a) navi_pane

0x9aa6,	// (0x0003409e) signal_pane_ParamLimits

0x9aa6,	// (0x0003409e) signal_pane

0x0008,

0xf879,	// (0x00039e71) bg_status_flat_pane_g

0x9b13,	// (0x0003410b) status_pane_g1_ParamLimits

0x9b13,	// (0x0003410b) status_pane_g1

0x9b27,	// (0x0003411f) status_pane_g2_ParamLimits

0x9b27,	// (0x0003411f) status_pane_g2

0x9b33,	// (0x0003412b) status_pane_g3_ParamLimits

0x9b33,	// (0x0003412b) status_pane_g3

0x0004,

0xf7a0,	// (0x00039d98) status_pane_g_ParamLimits

0xf7a0,	// (0x00039d98) status_pane_g

0x9b67,	// (0x0003415f) title_pane_ParamLimits

0x9b67,	// (0x0003415f) title_pane

0x9ba4,	// (0x0003419c) uni_indicator_pane_ParamLimits

0x9ba4,	// (0x0003419c) uni_indicator_pane

0x976e,	// (0x00033d66) bg_list_pane_ParamLimits

0x976e,	// (0x00033d66) bg_list_pane

0x74e3,	// (0x00031adb) find_pane

0x978e,	// (0x00033d86) listscroll_app_pane_ParamLimits

0x978e,	// (0x00033d86) listscroll_app_pane

0x979a,	// (0x00033d92) listscroll_form_pane

0x4837,	// (0x0002ee2f) listscroll_gen_pane_ParamLimits

0x4837,	// (0x0002ee2f) listscroll_gen_pane

0x5a10,	// (0x00030008) listscroll_set_pane

0x89b8,	// (0x00032fb0) main_idle_act_pane

0x946a,	// (0x00033a62) main_idle_trad_pane

0x946a,	// (0x00033a62) main_list_empty_pane

0x97b4,	// (0x00033dac) main_midp_pane

0x97c0,	// (0x00033db8) main_pane_g1_ParamLimits

0x97c0,	// (0x00033db8) main_pane_g1

0x5a26,	// (0x0003001e) popup_ai_message_window_ParamLimits

0x5a26,	// (0x0003001e) popup_ai_message_window

0x5acc,	// (0x000300c4) popup_fep_china_uni_window_ParamLimits

0x5acc,	// (0x000300c4) popup_fep_china_uni_window

0x5b28,	// (0x00030120) popup_fep_japan_candidate_window_ParamLimits

0x5b28,	// (0x00030120) popup_fep_japan_candidate_window

0x5b48,	// (0x00030140) popup_fep_japan_predictive_window_ParamLimits

0x5b48,	// (0x00030140) popup_fep_japan_predictive_window

0x5b78,	// (0x00030170) popup_find_window

0x5b85,	// (0x0003017d) popup_grid_graphic_window_ParamLimits

0x5b85,	// (0x0003017d) popup_grid_graphic_window

0x5baf,	// (0x000301a7) popup_large_graphic_colour_window

0x5bd5,	// (0x000301cd) popup_menu_window_ParamLimits

0x5bd5,	// (0x000301cd) popup_menu_window

0x5d8d,	// (0x00030385) popup_note_image_window

0x5d79,	// (0x00030371) popup_note_wait_window_ParamLimits

0x5d79,	// (0x00030371) popup_note_wait_window

0x5d79,	// (0x00030371) popup_note_window_ParamLimits

0x5d79,	// (0x00030371) popup_note_window

0x5de3,	// (0x000303db) popup_query_code_window_ParamLimits

0x5de3,	// (0x000303db) popup_query_code_window

0x5df7,	// (0x000303ef) popup_query_data_code_window_ParamLimits

0x5df7,	// (0x000303ef) popup_query_data_code_window

0x5e14,	// (0x0003040c) popup_query_data_window_ParamLimits

0x5e14,	// (0x0003040c) popup_query_data_window

0x5e30,	// (0x00030428) popup_query_sat_info_window_ParamLimits

0x5e30,	// (0x00030428) popup_query_sat_info_window

0x5e69,	// (0x00030461) popup_snote_single_graphic_window_ParamLimits

0x5e69,	// (0x00030461) popup_snote_single_graphic_window

0x5e69,	// (0x00030461) popup_snote_single_text_window_ParamLimits

0x5e69,	// (0x00030461) popup_snote_single_text_window

0x5e7e,	// (0x00030476) popup_sub_window_general

0x5fae,	// (0x000305a6) popup_window_general_ParamLimits

0x5fae,	// (0x000305a6) popup_window_general

0x97ce,	// (0x00033dc6) power_save_pane

0x58a2,	// (0x0002fe9a) control_pane_g1_ParamLimits

0x58a2,	// (0x0002fe9a) control_pane_g1

0x58c9,	// (0x0002fec1) control_pane_g2_ParamLimits

0x58c9,	// (0x0002fec1) control_pane_g2

0x9731,	// (0x00033d29) control_pane_g3_ParamLimits

0x9731,	// (0x00033d29) control_pane_g3

0x0007,

0xf788,	// (0x00039d80) control_pane_g_ParamLimits

0xf788,	// (0x00039d80) control_pane_g

0x5913,	// (0x0002ff0b) control_pane_t1_ParamLimits

0x5913,	// (0x0002ff0b) control_pane_t1

0x5967,	// (0x0002ff5f) control_pane_t2_ParamLimits

0x5967,	// (0x0002ff5f) control_pane_t2

0x0002,

0xf799,	// (0x00039d91) control_pane_t_ParamLimits

0xf799,	// (0x00039d91) control_pane_t

0x9656,	// (0x00033c4e) navi_navi_volume_pane_cp1

0x965e,	// (0x00033c56) status_small_icon_pane

0x9666,	// (0x00033c5e) status_small_pane_g1_ParamLimits

0x9666,	// (0x00033c5e) status_small_pane_g1

0x969a,	// (0x00033c92) status_small_pane_g2_ParamLimits

0x969a,	// (0x00033c92) status_small_pane_g2

0x96a6,	// (0x00033c9e) status_small_pane_g3_ParamLimits

0x96a6,	// (0x00033c9e) status_small_pane_g3

0x96b2,	// (0x00033caa) status_small_pane_g4_ParamLimits

0x96b2,	// (0x00033caa) status_small_pane_g4

0x96be,	// (0x00033cb6) status_small_pane_g5_ParamLimits

0x96be,	// (0x00033cb6) status_small_pane_g5

0x96cc,	// (0x00033cc4) status_small_pane_g6_ParamLimits

0x96cc,	// (0x00033cc4) status_small_pane_g6

0x0007,

0xf777,	// (0x00039d6f) status_small_pane_g_ParamLimits

0xf777,	// (0x00039d6f) status_small_pane_g

0x96fb,	// (0x00033cf3) status_small_pane_t1

0x971d,	// (0x00033d15) status_small_wait_pane_ParamLimits

0x971d,	// (0x00033d15) status_small_wait_pane

0x8edc,	// (0x000334d4) aid_levels_signal_ParamLimits

0x8edc,	// (0x000334d4) aid_levels_signal

0x8eee,	// (0x000334e6) signal_pane_g1_ParamLimits

0x8eee,	// (0x000334e6) signal_pane_g1

0x8f03,	// (0x000334fb) signal_pane_g2_ParamLimits

0x8f03,	// (0x000334fb) signal_pane_g2

0x0003,

0xf708,	// (0x00039d00) signal_pane_g_ParamLimits

0xf708,	// (0x00039d00) signal_pane_g

0x8f3e,	// (0x00033536) context_pane_g1

0x7e92,	// (0x0003248a) title_pane_g1

0x7ec8,	// (0x000324c0) title_pane_t1

0x7f30,	// (0x00032528) title_pane_t2

0x7f56,	// (0x0003254e) title_pane_t3

0x0002,

0xf557,	// (0x00039b4f) title_pane_t

0x9bbc,	// (0x000341b4) aid_levels_battery_ParamLimits

0x9bbc,	// (0x000341b4) aid_levels_battery

0x9bd0,	// (0x000341c8) battery_pane_g1_ParamLimits

0x9bd0,	// (0x000341c8) battery_pane_g1

0x9be6,	// (0x000341de) battery_pane_g2_ParamLimits

0x9be6,	// (0x000341de) battery_pane_g2

0x0001,

0xf7ab,	// (0x00039da3) battery_pane_g_ParamLimits

0xf7ab,	// (0x00039da3) battery_pane_g

0xae4e,	// (0x00035446) uni_indicator_pane_g1

0xae64,	// (0x0003545c) uni_indicator_pane_g2

0xae7a,	// (0x00035472) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x00039f19) uni_indicator_pane_g

0x92dc,	// (0x000338d4) navi_icon_pane_ParamLimits

0x92dc,	// (0x000338d4) navi_icon_pane

0x921a,	// (0x00033812) navi_midp_pane

0x92f8,	// (0x000338f0) navi_navi_pane

0x9302,	// (0x000338fa) navi_text_pane_ParamLimits

0x9302,	// (0x000338fa) navi_text_pane

0x7e7e,	// (0x00032476) status_small_wait_pane_g1

0x8385,	// (0x0003297d) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x00039f14) status_small_wait_pane_g

0xab73,	// (0x0003516b) navi_navi_icon_text_pane

0xab7b,	// (0x00035173) navi_navi_pane_g1_ParamLimits

0xab7b,	// (0x00035173) navi_navi_pane_g1

0xab8d,	// (0x00035185) navi_navi_pane_g2_ParamLimits

0xab8d,	// (0x00035185) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x00039ee2) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x00039ee2) navi_navi_pane_g

0xab9f,	// (0x00035197) navi_navi_tabs_pane

0xaba8,	// (0x000351a0) navi_navi_text_pane

0xab73,	// (0x0003516b) navi_navi_volume_pane

0xab4f,	// (0x00035147) navi_text_pane_t1

0xab43,	// (0x0003513b) navi_icon_pane_g1

0xaa96,	// (0x0003508e) navi_navi_text_pane_t1

0x625a,	// (0x00030852) navi_navi_volume_pane_g1

0x6262,	// (0x0003085a) volume_small_pane

0xa9fc,	// (0x00034ff4) navi_navi_icon_text_pane_g1

0xaa04,	// (0x00034ffc) navi_navi_icon_text_pane_t1

0x92f8,	// (0x000338f0) navi_tabs_2_long_pane

0x92f8,	// (0x000338f0) navi_tabs_2_pane

0x92f8,	// (0x000338f0) navi_tabs_3_long_pane

0x92f8,	// (0x000338f0) navi_tabs_3_pane

0x92f8,	// (0x000338f0) navi_tabs_4_pane

0x623a,	// (0x00030832) tabs_2_active_pane_ParamLimits

0x623a,	// (0x00030832) tabs_2_active_pane

0x624a,	// (0x00030842) tabs_2_passive_pane_ParamLimits

0x624a,	// (0x00030842) tabs_2_passive_pane

0x6208,	// (0x00030800) tabs_3_active_pane_ParamLimits

0x6208,	// (0x00030800) tabs_3_active_pane

0x6218,	// (0x00030810) tabs_3_passive_pane_ParamLimits

0x6218,	// (0x00030810) tabs_3_passive_pane

0x6229,	// (0x00030821) tabs_3_passive_pane_cp_ParamLimits

0x6229,	// (0x00030821) tabs_3_passive_pane_cp

0x61c4,	// (0x000307bc) tabs_4_active_pane_ParamLimits

0x61c4,	// (0x000307bc) tabs_4_active_pane

0x61d5,	// (0x000307cd) tabs_4_passive_pane_ParamLimits

0x61d5,	// (0x000307cd) tabs_4_passive_pane

0x61e6,	// (0x000307de) tabs_4_passive_pane_cp_ParamLimits

0x61e6,	// (0x000307de) tabs_4_passive_pane_cp

0x61f7,	// (0x000307ef) tabs_4_passive_pane_cp2_ParamLimits

0x61f7,	// (0x000307ef) tabs_4_passive_pane_cp2

0x61a0,	// (0x00030798) tabs_2_long_active_pane_ParamLimits

0x61a0,	// (0x00030798) tabs_2_long_active_pane

0x61b2,	// (0x000307aa) tabs_2_long_passive_pane_ParamLimits

0x61b2,	// (0x000307aa) tabs_2_long_passive_pane

0x6161,	// (0x00030759) tabs_3_long_active_pane_ParamLimits

0x6161,	// (0x00030759) tabs_3_long_active_pane

0x6174,	// (0x0003076c) tabs_3_long_passive_pane_ParamLimits

0x6174,	// (0x0003076c) tabs_3_long_passive_pane

0x618d,	// (0x00030785) tabs_3_long_passive_pane_cp_ParamLimits

0x618d,	// (0x00030785) tabs_3_long_passive_pane_cp

0x6107,	// (0x000306ff) volume_small_pane_g1

0x6110,	// (0x00030708) volume_small_pane_g2

0x6119,	// (0x00030711) volume_small_pane_g3

0x6122,	// (0x0003071a) volume_small_pane_g4

0x612b,	// (0x00030723) volume_small_pane_g5

0x6134,	// (0x0003072c) volume_small_pane_g6

0x613d,	// (0x00030735) volume_small_pane_g7

0x6146,	// (0x0003073e) volume_small_pane_g8

0x614f,	// (0x00030747) volume_small_pane_g9

0x6158,	// (0x00030750) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x00039eae) volume_small_pane_g

0x7f68,	// (0x00032560) bg_active_tab_pane_cp2_ParamLimits

0x7f68,	// (0x00032560) bg_active_tab_pane_cp2

0x7f76,	// (0x0003256e) tabs_3_active_pane_g1

0x7f7e,	// (0x00032576) tabs_3_active_pane_t1

0x7f68,	// (0x00032560) bg_passive_tab_pane_cp2_ParamLimits

0x7f68,	// (0x00032560) bg_passive_tab_pane_cp2

0x7f76,	// (0x0003256e) tabs_3_passive_pane_g1

0x7f7e,	// (0x00032576) tabs_3_passive_pane_t1

0x7f68,	// (0x00032560) bg_active_tab_pane_cp3_ParamLimits

0x7f68,	// (0x00032560) bg_active_tab_pane_cp3

0x7f90,	// (0x00032588) tabs_4_active_pane_g1

0x7f98,	// (0x00032590) tabs_4_active_pane_t1

0x7f68,	// (0x00032560) bg_passive_tab_pane_cp3_ParamLimits

0x7f68,	// (0x00032560) bg_passive_tab_pane_cp3

0x7f90,	// (0x00032588) tabs_4_1_passive_pane_g1

0x7f98,	// (0x00032590) tabs_4_1_passive_pane_t1

0x97b4,	// (0x00033dac) list_highlight_pane_cp2

0xb0c1,	// (0x000356b9) list_set_pane_ParamLimits

0xb0c1,	// (0x000356b9) list_set_pane

0xb167,	// (0x0003575f) main_pane_set_t1_ParamLimits

0xb167,	// (0x0003575f) main_pane_set_t1

0xb187,	// (0x0003577f) main_pane_set_t2_ParamLimits

0xb187,	// (0x0003577f) main_pane_set_t2

0xb19b,	// (0x00035793) main_pane_set_t3_ParamLimits

0xb19b,	// (0x00035793) main_pane_set_t3

0xb1ad,	// (0x000357a5) main_pane_set_t4_ParamLimits

0xb1ad,	// (0x000357a5) main_pane_set_t4

0x0003,

0xf986,	// (0x00039f7e) main_pane_set_t_ParamLimits

0xf986,	// (0x00039f7e) main_pane_set_t

0xb1bf,	// (0x000357b7) setting_code_pane

0xb1cb,	// (0x000357c3) setting_slider_graphic_pane

0xb1cb,	// (0x000357c3) setting_slider_pane

0xb1cb,	// (0x000357c3) setting_text_pane

0xb1cb,	// (0x000357c3) setting_volume_pane

0x4cae,	// (0x0002f2a6) volume_set_pane

0x7f68,	// (0x00032560) bg_set_opt_pane_cp

0x4cb6,	// (0x0002f2ae) setting_slider_pane_t1

0x4ccf,	// (0x0002f2c7) setting_slider_pane_t2

0x4ce9,	// (0x0002f2e1) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00039b56) setting_slider_pane_t

0x4d01,	// (0x0002f2f9) slider_set_pane

0x7e88,	// (0x00032480) bg_set_opt_pane_cp2

0x7faa,	// (0x000325a2) setting_slider_graphic_pane_g1

0x4d17,	// (0x0002f30f) setting_slider_graphic_pane_t1

0x4d27,	// (0x0002f31f) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00039b5d) setting_slider_graphic_pane_t

0x4d37,	// (0x0002f32f) slider_set_pane_cp

0x7e88,	// (0x00032480) input_focus_pane_cp1

0xb080,	// (0x00035678) list_set_text_pane

0x7e7e,	// (0x00032476) setting_text_pane_g1

0x7e88,	// (0x00032480) input_focus_pane_cp2

0x7e7e,	// (0x00032476) setting_code_pane_g1

0x7fb3,	// (0x000325ab) setting_code_pane_t1

0x4d3f,	// (0x0002f337) set_text_pane_t1_ParamLimits

0x4d3f,	// (0x0002f337) set_text_pane_t1

0x882f,	// (0x00032e27) set_opt_bg_pane_g1

0x8837,	// (0x00032e2f) set_opt_bg_pane_g2

0xb05a,	// (0x00035652) set_opt_bg_pane_g3

0x8847,	// (0x00032e3f) set_opt_bg_pane_g4

0x884f,	// (0x00032e47) set_opt_bg_pane_g5

0x8857,	// (0x00032e4f) set_opt_bg_pane_g6

0xb064,	// (0x0003565c) set_opt_bg_pane_g7

0xb06c,	// (0x00035664) set_opt_bg_pane_g8

0xb076,	// (0x0003566e) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x00039f6b) set_opt_bg_pane_g

0xb04d,	// (0x00035645) slider_set_pane_g1

0x62cf,	// (0x000308c7) slider_set_pane_g2

0x0006,

0xf964,	// (0x00039f5c) slider_set_pane_g

0x626b,	// (0x00030863) volume_set_pane_g1

0x6273,	// (0x0003086b) volume_set_pane_g2

0x627b,	// (0x00030873) volume_set_pane_g3

0x6283,	// (0x0003087b) volume_set_pane_g4

0x628b,	// (0x00030883) volume_set_pane_g5

0x6293,	// (0x0003088b) volume_set_pane_g6

0x629b,	// (0x00030893) volume_set_pane_g7

0x62a3,	// (0x0003089b) volume_set_pane_g8

0x62ab,	// (0x000308a3) volume_set_pane_g9

0x62b3,	// (0x000308ab) volume_set_pane_g10

0x0009,

0xf93c,	// (0x00039f34) volume_set_pane_g

0x7fc1,	// (0x000325b9) indicator_pane_ParamLimits

0x7fc1,	// (0x000325b9) indicator_pane

0x7fcd,	// (0x000325c5) main_idle_pane_g2_ParamLimits

0x7fcd,	// (0x000325c5) main_idle_pane_g2

0x7ff5,	// (0x000325ed) main_pane_idle_g1_ParamLimits

0x7ff5,	// (0x000325ed) main_pane_idle_g1

0x8002,	// (0x000325fa) popup_clock_digital_analogue_window_ParamLimits

0x8002,	// (0x000325fa) popup_clock_digital_analogue_window

0x8019,	// (0x00032611) soft_indicator_pane_ParamLimits

0x8019,	// (0x00032611) soft_indicator_pane

0x8025,	// (0x0003261d) wallpaper_pane_ParamLimits

0x8025,	// (0x0003261d) wallpaper_pane

0x7e7e,	// (0x00032476) wallpaper_pane_g1

0x8039,	// (0x00032631) indicator_pane_g1_ParamLimits

0x8039,	// (0x00032631) indicator_pane_g1

0xb484,	// (0x00035a7c) navi_navi_icon_text_pane_srt_g1

0x8054,	// (0x0003264c) soft_indicator_pane_t1

0x806e,	// (0x00032666) aid_ps_area_pane

0x807f,	// (0x00032677) aid_ps_clock_pane

0x808d,	// (0x00032685) aid_ps_indicator_pane

0x8099,	// (0x00032691) indicator_ps_pane_ParamLimits

0x8099,	// (0x00032691) indicator_ps_pane

0x80a8,	// (0x000326a0) power_save_pane_g1_ParamLimits

0x80a8,	// (0x000326a0) power_save_pane_g1

0x80b4,	// (0x000326ac) power_save_pane_g2_ParamLimits

0x80b4,	// (0x000326ac) power_save_pane_g2

0x48b5,	// (0x0002eead) aid_navinavi_width_pane

0x806e,	// (0x00032666) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00039b62) power_save_pane_g_ParamLimits

0xf56a,	// (0x00039b62) power_save_pane_g

0x80c2,	// (0x000326ba) power_save_pane_t1_ParamLimits

0x80c2,	// (0x000326ba) power_save_pane_t1

0x807f,	// (0x00032677) aid_ps_clock_pane_ParamLimits

0x808d,	// (0x00032685) aid_ps_indicator_pane_ParamLimits

0x80d4,	// (0x000326cc) power_save_pane_t4_ParamLimits

0x80d4,	// (0x000326cc) power_save_pane_t4

0x0001,

0xf56f,	// (0x00039b67) power_save_pane_t_ParamLimits

0xf56f,	// (0x00039b67) power_save_pane_t

0x80fe,	// (0x000326f6) power_save_t3_ParamLimits

0x80fe,	// (0x000326f6) power_save_t3

0x80e9,	// (0x000326e1) power_save_t2_ParamLimits

0x80e9,	// (0x000326e1) power_save_t2

0x8113,	// (0x0003270b) indicator_ps_pane_g1

0x811c,	// (0x00032714) ai_gene_pane_ParamLimits

0x811c,	// (0x00032714) ai_gene_pane

0x8128,	// (0x00032720) ai_links_pane_ParamLimits

0x8128,	// (0x00032720) ai_links_pane

0x8134,	// (0x0003272c) indicator_pane_cp1_ParamLimits

0x8134,	// (0x0003272c) indicator_pane_cp1

0x8140,	// (0x00032738) main_pane_idle_g1_cp_ParamLimits

0x8140,	// (0x00032738) main_pane_idle_g1_cp

0x814c,	// (0x00032744) popup_ai_links_title_window

0x8155,	// (0x0003274d) soft_indicator_pane_cp1_ParamLimits

0x8155,	// (0x0003274d) soft_indicator_pane_cp1

0xae3c,	// (0x00035434) ai_links_pane_g1

0xae45,	// (0x0003543d) grid_ai_links_pane

0xae1f,	// (0x00035417) ai_gene_pane_1

0xae2a,	// (0x00035422) ai_gene_pane_2

0xae33,	// (0x0003542b) list_highlight_pane_cp4

0xae03,	// (0x000353fb) cell_ai_link_pane_ParamLimits

0xae03,	// (0x000353fb) cell_ai_link_pane

0xadfb,	// (0x000353f3) cell_ai_link_pane_g1

0x8385,	// (0x0003297d) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x00039f0f) cell_ai_link_pane_g

0x7e88,	// (0x00032480) grid_highlight_cp2

0x7e88,	// (0x00032480) bg_popup_sub_pane_cp1

0x816f,	// (0x00032767) popup_ai_links_title_window_t1

0xad49,	// (0x00035341) ai_gene_pane_1_g1_ParamLimits

0xad49,	// (0x00035341) ai_gene_pane_1_g1

0xad55,	// (0x0003534d) ai_gene_pane_1_g2_ParamLimits

0xad55,	// (0x0003534d) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x00039f05) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x00039f05) ai_gene_pane_1_g

0xad62,	// (0x0003535a) ai_gene_pane_1_t1_ParamLimits

0xad62,	// (0x0003535a) ai_gene_pane_1_t1

0xad96,	// (0x0003538e) grid_ai_soft_ind_pane

0xad34,	// (0x0003532c) ai_gene_pane_2_t1_ParamLimits

0xad34,	// (0x0003532c) ai_gene_pane_2_t1

0x817e,	// (0x00032776) main_pane_empty_t1_ParamLimits

0x817e,	// (0x00032776) main_pane_empty_t1

0x8196,	// (0x0003278e) main_pane_empty_t2_ParamLimits

0x8196,	// (0x0003278e) main_pane_empty_t2

0x81ab,	// (0x000327a3) main_pane_empty_t3_ParamLimits

0x81ab,	// (0x000327a3) main_pane_empty_t3

0x81bd,	// (0x000327b5) main_pane_empty_t4_ParamLimits

0x81bd,	// (0x000327b5) main_pane_empty_t4

0x81cf,	// (0x000327c7) main_pane_empty_t5_ParamLimits

0x81cf,	// (0x000327c7) main_pane_empty_t5

0x0004,

0xf574,	// (0x00039b6c) main_pane_empty_t_ParamLimits

0xf574,	// (0x00039b6c) main_pane_empty_t

0x8880,	// (0x00032e78) bg_popup_window_pane_ParamLimits

0x8880,	// (0x00032e78) bg_popup_window_pane

0xaaa4,	// (0x0003509c) find_popup_pane_cp2_ParamLimits

0xaaa4,	// (0x0003509c) find_popup_pane_cp2

0xaab0,	// (0x000350a8) heading_pane_ParamLimits

0xaab0,	// (0x000350a8) heading_pane

0x7e88,	// (0x00032480) bg_popup_sub_pane

0xaa1e,	// (0x00035016) bg_popup_window_pane_g1_ParamLimits

0xaa1e,	// (0x00035016) bg_popup_window_pane_g1

0xaa2a,	// (0x00035022) bg_popup_window_pane_g2_ParamLimits

0xaa2a,	// (0x00035022) bg_popup_window_pane_g2

0xaa36,	// (0x0003502e) bg_popup_window_pane_g3_ParamLimits

0xaa36,	// (0x0003502e) bg_popup_window_pane_g3

0xaa42,	// (0x0003503a) bg_popup_window_pane_g4_ParamLimits

0xaa42,	// (0x0003503a) bg_popup_window_pane_g4

0xaa4e,	// (0x00035046) bg_popup_window_pane_g5_ParamLimits

0xaa4e,	// (0x00035046) bg_popup_window_pane_g5

0xaa5a,	// (0x00035052) bg_popup_window_pane_g6_ParamLimits

0xaa5a,	// (0x00035052) bg_popup_window_pane_g6

0xaa66,	// (0x0003505e) bg_popup_window_pane_g7_ParamLimits

0xaa66,	// (0x0003505e) bg_popup_window_pane_g7

0xaa72,	// (0x0003506a) bg_popup_window_pane_g8_ParamLimits

0xaa72,	// (0x0003506a) bg_popup_window_pane_g8

0xaa7e,	// (0x00035076) bg_popup_window_pane_g9_ParamLimits

0xaa7e,	// (0x00035076) bg_popup_window_pane_g9

0xaa8a,	// (0x00035082) bg_popup_window_pane_g10_ParamLimits

0xaa8a,	// (0x00035082) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x00039ecd) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x00039ecd) bg_popup_window_pane_g

0xa9b3,	// (0x00034fab) bg_popup_heading_pane_ParamLimits

0xa9b3,	// (0x00034fab) bg_popup_heading_pane

0x6357,	// (0x0003094f) tabs_4_passive_pane_cp_srt_ParamLimits

0x6357,	// (0x0003094f) tabs_4_passive_pane_cp_srt

0x6369,	// (0x00030961) tabs_4_passive_pane_srt_ParamLimits

0xa9c7,	// (0x00034fbf) heading_pane_g2

0x6369,	// (0x00030961) tabs_4_passive_pane_srt

0x97b4,	// (0x00033dac) bg_passive_tab_pane_cp3_srt_ParamLimits

0x97b4,	// (0x00033dac) bg_passive_tab_pane_cp3_srt

0xa9cf,	// (0x00034fc7) heading_pane_t1_ParamLimits

0xa9cf,	// (0x00034fc7) heading_pane_t1

0xa9e6,	// (0x00034fde) heading_pane_t2_ParamLimits

0xa9e6,	// (0x00034fde) heading_pane_t2

0x0001,

0xf8d0,	// (0x00039ec8) heading_pane_t_ParamLimits

0xf8d0,	// (0x00039ec8) heading_pane_t

0xa4e0,	// (0x00034ad8) bg_popup_heading_pane_g1

0xa58f,	// (0x00034b87) bg_popup_heading_pane_g2

0xa599,	// (0x00034b91) bg_popup_heading_pane_g3

0xa5a3,	// (0x00034b9b) bg_popup_heading_pane_g4

0xa5ad,	// (0x00034ba5) bg_popup_heading_pane_g5

0xa5b7,	// (0x00034baf) bg_popup_heading_pane_g6

0xa5bf,	// (0x00034bb7) bg_popup_heading_pane_g7

0xa5c7,	// (0x00034bbf) bg_popup_heading_pane_g8

0xa5d1,	// (0x00034bc9) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x00039e84) bg_popup_heading_pane_g

0x9cbe,	// (0x000342b6) bg_popup_sub_pane_g1

0x9cc6,	// (0x000342be) bg_popup_sub_pane_g2

0x9cce,	// (0x000342c6) bg_popup_sub_pane_g3

0x9cde,	// (0x000342d6) bg_popup_sub_pane_g4

0x9cd6,	// (0x000342ce) bg_popup_sub_pane_g5

0x9ce6,	// (0x000342de) bg_popup_sub_pane_g6

0x9cee,	// (0x000342e6) bg_popup_sub_pane_g7

0x9cfe,	// (0x000342f6) bg_popup_sub_pane_g8

0x9cf6,	// (0x000342ee) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x00039e5e) bg_popup_sub_pane_g

0x81e3,	// (0x000327db) bg_popup_window_pane_cp5_ParamLimits

0x81e3,	// (0x000327db) bg_popup_window_pane_cp5

0x81ff,	// (0x000327f7) popup_note_window_g1_ParamLimits

0x81ff,	// (0x000327f7) popup_note_window_g1

0x820b,	// (0x00032803) popup_note_window_t1_ParamLimits

0x820b,	// (0x00032803) popup_note_window_t1

0x8221,	// (0x00032819) popup_note_window_t2_ParamLimits

0x8221,	// (0x00032819) popup_note_window_t2

0x8237,	// (0x0003282f) popup_note_window_t3_ParamLimits

0x8237,	// (0x0003282f) popup_note_window_t3

0x824d,	// (0x00032845) popup_note_window_t4_ParamLimits

0x824d,	// (0x00032845) popup_note_window_t4

0x8275,	// (0x0003286d) popup_note_window_t5_ParamLimits

0x8275,	// (0x0003286d) popup_note_window_t5

0x0004,

0xf57f,	// (0x00039b77) popup_note_window_t_ParamLimits

0xf57f,	// (0x00039b77) popup_note_window_t

0x8299,	// (0x00032891) bg_popup_window_pane_cp6_ParamLimits

0x8299,	// (0x00032891) bg_popup_window_pane_cp6

0xa450,	// (0x00034a48) popup_note_image_window_g1_ParamLimits

0xa450,	// (0x00034a48) popup_note_image_window_g1

0xa468,	// (0x00034a60) popup_note_image_window_g2_ParamLimits

0xa468,	// (0x00034a60) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x00039e52) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x00039e52) popup_note_image_window_g

0xa481,	// (0x00034a79) popup_note_image_window_t1_ParamLimits

0xa481,	// (0x00034a79) popup_note_image_window_t1

0xa49a,	// (0x00034a92) popup_note_image_window_t2_ParamLimits

0xa49a,	// (0x00034a92) popup_note_image_window_t2

0xa4b3,	// (0x00034aab) popup_note_image_window_t3_ParamLimits

0xa4b3,	// (0x00034aab) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x00039e57) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x00039e57) popup_note_image_window_t

0xa311,	// (0x00034909) bg_popup_window_pane_cp7_ParamLimits

0xa311,	// (0x00034909) bg_popup_window_pane_cp7

0xa341,	// (0x00034939) popup_note_wait_window_g1_ParamLimits

0xa341,	// (0x00034939) popup_note_wait_window_g1

0xa34d,	// (0x00034945) popup_note_wait_window_g2_ParamLimits

0xa34d,	// (0x00034945) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x00039e40) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x00039e40) popup_note_wait_window_g

0xa365,	// (0x0003495d) popup_note_wait_window_t1_ParamLimits

0xa365,	// (0x0003495d) popup_note_wait_window_t1

0xa38c,	// (0x00034984) popup_note_wait_window_t2_ParamLimits

0xa38c,	// (0x00034984) popup_note_wait_window_t2

0xa3a9,	// (0x000349a1) popup_note_wait_window_t3_ParamLimits

0xa3a9,	// (0x000349a1) popup_note_wait_window_t3

0xa3bc,	// (0x000349b4) popup_note_wait_window_t4_ParamLimits

0xa3bc,	// (0x000349b4) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x00039e47) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x00039e47) popup_note_wait_window_t

0xa3e1,	// (0x000349d9) wait_bar_pane_ParamLimits

0xa3e1,	// (0x000349d9) wait_bar_pane

0x7e88,	// (0x00032480) wait_anim_pane

0x7e88,	// (0x00032480) wait_border_pane

0x7e7e,	// (0x00032476) wait_anim_pane_g1

0x7e7e,	// (0x00032476) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00039cfb) wait_anim_pane_g

0xa2b5,	// (0x000348ad) wait_border_pane_g1

0xa2c0,	// (0x000348b8) wait_border_pane_g2

0xa2c9,	// (0x000348c1) wait_border_pane_g3

0x0002,

0xf841,	// (0x00039e39) wait_border_pane_g

0xa120,	// (0x00034718) bg_popup_window_pane_cp16_ParamLimits

0xa120,	// (0x00034718) bg_popup_window_pane_cp16

0xa220,	// (0x00034818) indicator_popup_pane_cp4_ParamLimits

0xa220,	// (0x00034818) indicator_popup_pane_cp4

0xa234,	// (0x0003482c) popup_query_data_window_t1_ParamLimits

0xa234,	// (0x0003482c) popup_query_data_window_t1

0xa246,	// (0x0003483e) popup_query_data_window_t2_ParamLimits

0xa246,	// (0x0003483e) popup_query_data_window_t2

0xa25f,	// (0x00034857) popup_query_data_window_t3_ParamLimits

0xa25f,	// (0x00034857) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x00039e32) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x00039e32) popup_query_data_window_t

0xa279,	// (0x00034871) query_popup_data_pane_ParamLimits

0xa279,	// (0x00034871) query_popup_data_pane

0xa28d,	// (0x00034885) query_popup_data_pane_cp1_ParamLimits

0xa28d,	// (0x00034885) query_popup_data_pane_cp1

0xa120,	// (0x00034718) bg_popup_window_pane_cp10_ParamLimits

0xa120,	// (0x00034718) bg_popup_window_pane_cp10

0xa152,	// (0x0003474a) indicator_popup_pane_ParamLimits

0xa152,	// (0x0003474a) indicator_popup_pane

0xa174,	// (0x0003476c) popup_query_code_window_t1_ParamLimits

0xa174,	// (0x0003476c) popup_query_code_window_t1

0xa18e,	// (0x00034786) popup_query_code_window_t2_ParamLimits

0xa18e,	// (0x00034786) popup_query_code_window_t2

0xa1d7,	// (0x000347cf) popup_query_code_window_t3_ParamLimits

0xa1d7,	// (0x000347cf) popup_query_code_window_t3

0x0002,

0xf833,	// (0x00039e2b) popup_query_code_window_t_ParamLimits

0xf833,	// (0x00039e2b) popup_query_code_window_t

0xa206,	// (0x000347fe) query_popup_pane_ParamLimits

0xa206,	// (0x000347fe) query_popup_pane

0x8299,	// (0x00032891) bg_popup_window_pane_cp15_ParamLimits

0x8299,	// (0x00032891) bg_popup_window_pane_cp15

0x82b7,	// (0x000328af) indicator_popup_pane_cp1_ParamLimits

0x82b7,	// (0x000328af) indicator_popup_pane_cp1

0x82ca,	// (0x000328c2) indicator_popup_pane_cp2_ParamLimits

0x82ca,	// (0x000328c2) indicator_popup_pane_cp2

0x82dd,	// (0x000328d5) popup_query_data_code_window_g1_ParamLimits

0x82dd,	// (0x000328d5) popup_query_data_code_window_g1

0x82f0,	// (0x000328e8) popup_query_data_code_window_t1_ParamLimits

0x82f0,	// (0x000328e8) popup_query_data_code_window_t1

0x8302,	// (0x000328fa) popup_query_data_code_window_t2_ParamLimits

0x8302,	// (0x000328fa) popup_query_data_code_window_t2

0x8314,	// (0x0003290c) popup_query_data_code_window_t3_ParamLimits

0x8314,	// (0x0003290c) popup_query_data_code_window_t3

0x832a,	// (0x00032922) popup_query_data_code_window_t4_ParamLimits

0x832a,	// (0x00032922) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00039b82) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00039b82) popup_query_data_code_window_t

0x6018,	// (0x00030610) list_single_midp_graphic_pane_g3

0x8342,	// (0x0003293a) query_popup_data_pane_cp2_ParamLimits

0x8355,	// (0x0003294d) query_popup_pane_cp2_ParamLimits

0x8355,	// (0x0003294d) query_popup_pane_cp2

0x7e88,	// (0x00032480) bg_popup_window_pane_cp11

0xa118,	// (0x00034710) heading_pane_cp5

0x8440,	// (0x00032a38) listscroll_popup_info_pane

0x7e88,	// (0x00032480) input_focus_pane_cp3

0x8368,	// (0x00032960) query_popup_pane_t1

0x8376,	// (0x0003296e) list_popup_info_pane_ParamLimits

0x8376,	// (0x0003296e) list_popup_info_pane

0x8385,	// (0x0003297d) listscroll_popup_info_pane_g1

0x838d,	// (0x00032985) scroll_pane_cp7

0x8397,	// (0x0003298f) popup_info_list_pane_t1_ParamLimits

0x8397,	// (0x0003298f) popup_info_list_pane_t1

0x83b1,	// (0x000329a9) popup_info_list_pane_t2_ParamLimits

0x83b1,	// (0x000329a9) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00039b8b) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00039b8b) popup_info_list_pane_t

0x7e88,	// (0x00032480) bg_popup_window_pane_cp12

0xb49e,	// (0x00035a96) find_popup_pane

0x7f68,	// (0x00032560) bg_popup_window_pane_cp3

0x83cb,	// (0x000329c3) heading_pane_cp3

0x83d7,	// (0x000329cf) listscroll_popup_graphic_pane

0x7e88,	// (0x00032480) bg_popup_window_pane_cp4

0x8436,	// (0x00032a2e) heading_pane_cp4

0x8440,	// (0x00032a38) listscroll_popup_colour_pane

0x8448,	// (0x00032a40) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8448,	// (0x00032a40) cell_large_graphic_colour_none_popup_pane

0x845c,	// (0x00032a54) grid_large_graphic_colour_popup_pane_ParamLimits

0x845c,	// (0x00032a54) grid_large_graphic_colour_popup_pane

0x8488,	// (0x00032a80) listscroll_popup_colour_pane_g1_ParamLimits

0x8488,	// (0x00032a80) listscroll_popup_colour_pane_g1

0x849f,	// (0x00032a97) listscroll_popup_colour_pane_g2_ParamLimits

0x849f,	// (0x00032a97) listscroll_popup_colour_pane_g2

0x84b6,	// (0x00032aae) listscroll_popup_colour_pane_g3_ParamLimits

0x84b6,	// (0x00032aae) listscroll_popup_colour_pane_g3

0x84c6,	// (0x00032abe) listscroll_popup_colour_pane_g4_ParamLimits

0x84c6,	// (0x00032abe) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00039b90) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00039b90) listscroll_popup_colour_pane_g

0x84da,	// (0x00032ad2) scroll_pane_cp6_ParamLimits

0x84da,	// (0x00032ad2) scroll_pane_cp6

0x84ec,	// (0x00032ae4) cell_large_graphic_colour_popup_pane_ParamLimits

0x84ec,	// (0x00032ae4) cell_large_graphic_colour_popup_pane

0x850b,	// (0x00032b03) cell_large_graphic_colour_none_popup_pane_t1

0x7e88,	// (0x00032480) grid_highlight_pane_cp5

0x851a,	// (0x00032b12) cell_large_graphic_colour_popup_pane_g1

0x8522,	// (0x00032b1a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00039b99) cell_large_graphic_colour_popup_pane_g

0x852a,	// (0x00032b22) cell_large_graphic_colour_popup_pane_g2_copy1

0x8533,	// (0x00032b2b) grid_highlight_pane_cp4

0x853b,	// (0x00032b33) bg_popup_window_pane_cp8_ParamLimits

0x853b,	// (0x00032b33) bg_popup_window_pane_cp8

0x8556,	// (0x00032b4e) popup_snote_single_text_window_g1_ParamLimits

0x8556,	// (0x00032b4e) popup_snote_single_text_window_g1

0x8568,	// (0x00032b60) popup_snote_single_text_window_t1_ParamLimits

0x8568,	// (0x00032b60) popup_snote_single_text_window_t1

0x857b,	// (0x00032b73) popup_snote_single_text_window_t2_ParamLimits

0x857b,	// (0x00032b73) popup_snote_single_text_window_t2

0x858e,	// (0x00032b86) popup_snote_single_text_window_t3_ParamLimits

0x858e,	// (0x00032b86) popup_snote_single_text_window_t3

0x85c7,	// (0x00032bbf) popup_snote_single_text_window_t4_ParamLimits

0x85c7,	// (0x00032bbf) popup_snote_single_text_window_t4

0x85fb,	// (0x00032bf3) popup_snote_single_text_window_t5_ParamLimits

0x85fb,	// (0x00032bf3) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00039b9e) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00039b9e) popup_snote_single_text_window_t

0x862a,	// (0x00032c22) bg_popup_window_pane_cp9_ParamLimits

0x862a,	// (0x00032c22) bg_popup_window_pane_cp9

0x8556,	// (0x00032b4e) popup_snote_single_graphic_window_g1_ParamLimits

0x8556,	// (0x00032b4e) popup_snote_single_graphic_window_g1

0x8638,	// (0x00032c30) popup_snote_single_graphic_window_g2_ParamLimits

0x8638,	// (0x00032c30) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00039ba9) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00039ba9) popup_snote_single_graphic_window_g

0x8644,	// (0x00032c3c) popup_snote_single_graphic_window_t1_ParamLimits

0x8644,	// (0x00032c3c) popup_snote_single_graphic_window_t1

0x8657,	// (0x00032c4f) popup_snote_single_graphic_window_t2_ParamLimits

0x8657,	// (0x00032c4f) popup_snote_single_graphic_window_t2

0x866a,	// (0x00032c62) popup_snote_single_graphic_window_t3_ParamLimits

0x866a,	// (0x00032c62) popup_snote_single_graphic_window_t3

0x86a3,	// (0x00032c9b) popup_snote_single_graphic_window_t4_ParamLimits

0x86a3,	// (0x00032c9b) popup_snote_single_graphic_window_t4

0x86d7,	// (0x00032ccf) popup_snote_single_graphic_window_t5_ParamLimits

0x86d7,	// (0x00032ccf) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00039bae) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00039bae) popup_snote_single_graphic_window_t

0xb3e0,	// (0x000359d8) grid_graphic_popup_pane_ParamLimits

0xb3e0,	// (0x000359d8) grid_graphic_popup_pane

0xb40a,	// (0x00035a02) listscroll_popup_graphic_pane_g1_ParamLimits

0xb40a,	// (0x00035a02) listscroll_popup_graphic_pane_g1

0xb41e,	// (0x00035a16) listscroll_popup_graphic_pane_g2_ParamLimits

0xb41e,	// (0x00035a16) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x00039fa8) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x00039fa8) listscroll_popup_graphic_pane_g

0xb432,	// (0x00035a2a) scroll_pane_cp5

0xb37f,	// (0x00035977) cell_graphic_popup_pane_ParamLimits

0xb37f,	// (0x00035977) cell_graphic_popup_pane

0xb360,	// (0x00035958) cell_graphic_popup_pane_g1

0xb368,	// (0x00035960) cell_graphic_popup_pane_g2

0x852a,	// (0x00032b22) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x00039fa1) cell_graphic_popup_pane_g

0xb371,	// (0x00035969) cell_graphic_popup_pane_t2

0x8533,	// (0x00032b2b) grid_highlight_pane_cp3

0x8718,	// (0x00032d10) list_gen_pane_ParamLimits

0x8718,	// (0x00032d10) list_gen_pane

0x874a,	// (0x00032d42) scroll_pane

0xb2b8,	// (0x000358b0) bg_list_pane_g1_ParamLimits

0xb2b8,	// (0x000358b0) bg_list_pane_g1

0xb2d5,	// (0x000358cd) bg_list_pane_g2_ParamLimits

0xb2d5,	// (0x000358cd) bg_list_pane_g2

0xb2ea,	// (0x000358e2) bg_list_pane_g3_ParamLimits

0xb2ea,	// (0x000358e2) bg_list_pane_g3

0xb2fe,	// (0x000358f6) bg_list_pane_g4_ParamLimits

0xb2fe,	// (0x000358f6) bg_list_pane_g4

0xb312,	// (0x0003590a) bg_list_pane_g5_ParamLimits

0xb312,	// (0x0003590a) bg_list_pane_g5

0x0004,

0xf99e,	// (0x00039f96) bg_list_pane_g_ParamLimits

0xf99e,	// (0x00039f96) bg_list_pane_g

0x7675,	// (0x00031c6d) list_double2_graphic_large_graphic_pane_ParamLimits

0x7675,	// (0x00031c6d) list_double2_graphic_large_graphic_pane

0x7675,	// (0x00031c6d) list_double2_graphic_pane_ParamLimits

0x7675,	// (0x00031c6d) list_double2_graphic_pane

0x7675,	// (0x00031c6d) list_double2_large_graphic_pane_ParamLimits

0x7675,	// (0x00031c6d) list_double2_large_graphic_pane

0x7675,	// (0x00031c6d) list_double2_pane_ParamLimits

0x7675,	// (0x00031c6d) list_double2_pane

0x7675,	// (0x00031c6d) list_double_graphic_heading_pane_ParamLimits

0x7675,	// (0x00031c6d) list_double_graphic_heading_pane

0x7675,	// (0x00031c6d) list_double_graphic_pane_ParamLimits

0x7675,	// (0x00031c6d) list_double_graphic_pane

0x7675,	// (0x00031c6d) list_double_heading_pane_ParamLimits

0x7675,	// (0x00031c6d) list_double_heading_pane

0x7675,	// (0x00031c6d) list_double_large_graphic_pane_ParamLimits

0x7675,	// (0x00031c6d) list_double_large_graphic_pane

0x7675,	// (0x00031c6d) list_double_number_pane_ParamLimits

0x7675,	// (0x00031c6d) list_double_number_pane

0x7675,	// (0x00031c6d) list_double_pane_ParamLimits

0x7675,	// (0x00031c6d) list_double_pane

0x7675,	// (0x00031c6d) list_double_time_pane_ParamLimits

0x7675,	// (0x00031c6d) list_double_time_pane

0x7675,	// (0x00031c6d) list_setting_number_pane_ParamLimits

0x7675,	// (0x00031c6d) list_setting_number_pane

0x7675,	// (0x00031c6d) list_setting_pane_ParamLimits

0x7675,	// (0x00031c6d) list_setting_pane

0x76b0,	// (0x00031ca8) list_single_2graphic_pane_ParamLimits

0x76b0,	// (0x00031ca8) list_single_2graphic_pane

0x76b0,	// (0x00031ca8) list_single_graphic_heading_pane_ParamLimits

0x76b0,	// (0x00031ca8) list_single_graphic_heading_pane

0x76b0,	// (0x00031ca8) list_single_graphic_pane_ParamLimits

0x76b0,	// (0x00031ca8) list_single_graphic_pane

0x76b0,	// (0x00031ca8) list_single_heading_pane_ParamLimits

0x76b0,	// (0x00031ca8) list_single_heading_pane

0x76f0,	// (0x00031ce8) list_single_large_graphic_pane_ParamLimits

0x76f0,	// (0x00031ce8) list_single_large_graphic_pane

0x76b0,	// (0x00031ca8) list_single_number_heading_pane_ParamLimits

0x76b0,	// (0x00031ca8) list_single_number_heading_pane

0x76b0,	// (0x00031ca8) list_single_number_pane_ParamLimits

0x76b0,	// (0x00031ca8) list_single_number_pane

0x76b0,	// (0x00031ca8) list_single_pane_ParamLimits

0x76b0,	// (0x00031ca8) list_single_pane

0x7e88,	// (0x00032480) list_highlight_pane_cp1

0x4d66,	// (0x0002f35e) list_single_pane_g1_ParamLimits

0x4d66,	// (0x0002f35e) list_single_pane_g1

0x4d72,	// (0x0002f36a) list_single_pane_g2_ParamLimits

0x4d72,	// (0x0002f36a) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00039bc0) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00039bc0) list_single_pane_g

0x765f,	// (0x00031c57) list_single_pane_t1_ParamLimits

0x765f,	// (0x00031c57) list_single_pane_t1

0x4d66,	// (0x0002f35e) list_single_number_pane_g1_ParamLimits

0x4d66,	// (0x0002f35e) list_single_number_pane_g1

0x4d72,	// (0x0002f36a) list_single_number_pane_g2_ParamLimits

0x4d72,	// (0x0002f36a) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00039bc0) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00039bc0) list_single_number_pane_g

0x7609,	// (0x00031c01) list_single_number_pane_t1_ParamLimits

0x7609,	// (0x00031c01) list_single_number_pane_t1

0x761f,	// (0x00031c17) list_single_number_pane_t2_ParamLimits

0x761f,	// (0x00031c17) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x00039f57) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x00039f57) list_single_number_pane_t

0x4d5a,	// (0x0002f352) list_single_graphic_pane_g1_ParamLimits

0x4d5a,	// (0x0002f352) list_single_graphic_pane_g1

0x4d66,	// (0x0002f35e) list_single_graphic_pane_g2_ParamLimits

0x4d66,	// (0x0002f35e) list_single_graphic_pane_g2

0x4d72,	// (0x0002f36a) list_single_graphic_pane_g3_ParamLimits

0x4d72,	// (0x0002f36a) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00039bb9) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00039bb9) list_single_graphic_pane_g

0x4d7e,	// (0x0002f376) list_single_graphic_pane_t1_ParamLimits

0x4d7e,	// (0x0002f376) list_single_graphic_pane_t1

0x4d66,	// (0x0002f35e) list_single_heading_pane_g1_ParamLimits

0x4d66,	// (0x0002f35e) list_single_heading_pane_g1

0x4d72,	// (0x0002f36a) list_single_heading_pane_g2_ParamLimits

0x4d72,	// (0x0002f36a) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00039bc0) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00039bc0) list_single_heading_pane_g

0x4d94,	// (0x0002f38c) list_single_heading_pane_t1_ParamLimits

0x4d94,	// (0x0002f38c) list_single_heading_pane_t1

0x4daa,	// (0x0002f3a2) list_single_heading_pane_t2_ParamLimits

0x4daa,	// (0x0002f3a2) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00039bc5) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00039bc5) list_single_heading_pane_t

0x4d66,	// (0x0002f35e) list_single_number_heading_pane_g1_ParamLimits

0x4d66,	// (0x0002f35e) list_single_number_heading_pane_g1

0x4d72,	// (0x0002f36a) list_single_number_heading_pane_g2_ParamLimits

0x4d72,	// (0x0002f36a) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00039bc0) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00039bc0) list_single_number_heading_pane_g

0x4d94,	// (0x0002f38c) list_single_number_heading_pane_t1_ParamLimits

0x4d94,	// (0x0002f38c) list_single_number_heading_pane_t1

0x4dbc,	// (0x0002f3b4) list_single_number_heading_pane_t2_ParamLimits

0x4dbc,	// (0x0002f3b4) list_single_number_heading_pane_t2

0x4dce,	// (0x0002f3c6) list_single_number_heading_pane_t3_ParamLimits

0x4dce,	// (0x0002f3c6) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00039bca) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00039bca) list_single_number_heading_pane_t

0x4de0,	// (0x0002f3d8) list_single_graphic_heading_pane_g1_ParamLimits

0x4de0,	// (0x0002f3d8) list_single_graphic_heading_pane_g1

0x4dec,	// (0x0002f3e4) list_single_graphic_heading_pane_g4_ParamLimits

0x4dec,	// (0x0002f3e4) list_single_graphic_heading_pane_g4

0x4d72,	// (0x0002f36a) list_single_graphic_heading_pane_g5_ParamLimits

0x4d72,	// (0x0002f36a) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00039bd1) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00039bd1) list_single_graphic_heading_pane_g

0x4d94,	// (0x0002f38c) list_single_graphic_heading_pane_t1_ParamLimits

0x4d94,	// (0x0002f38c) list_single_graphic_heading_pane_t1

0x4dfd,	// (0x0002f3f5) list_single_graphic_heading_pane_t2_ParamLimits

0x4dfd,	// (0x0002f3f5) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00039bd8) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00039bd8) list_single_graphic_heading_pane_t

0x4e0f,	// (0x0002f407) list_single_large_graphic_pane_g1_ParamLimits

0x4e0f,	// (0x0002f407) list_single_large_graphic_pane_g1

0x4e1b,	// (0x0002f413) list_single_large_graphic_pane_g2_ParamLimits

0x4e1b,	// (0x0002f413) list_single_large_graphic_pane_g2

0x4e27,	// (0x0002f41f) list_single_large_graphic_pane_g3_ParamLimits

0x4e27,	// (0x0002f41f) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00039bdd) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00039bdd) list_single_large_graphic_pane_g

0xa2c0,	// (0x000348b8) wait_border_pane_g2_copy1

0x4e33,	// (0x0002f42b) list_single_large_graphic_pane_g4_cp2

0x4e3b,	// (0x0002f433) list_single_large_graphic_pane_t1_ParamLimits

0x4e3b,	// (0x0002f433) list_single_large_graphic_pane_t1

0x4e51,	// (0x0002f449) list_double_pane_g1_ParamLimits

0x4e51,	// (0x0002f449) list_double_pane_g1

0x4e5d,	// (0x0002f455) list_double_pane_g2_ParamLimits

0x4e5d,	// (0x0002f455) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00039be4) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00039be4) list_double_pane_g

0x4e69,	// (0x0002f461) list_double_pane_t1_ParamLimits

0x4e69,	// (0x0002f461) list_double_pane_t1

0x4e7f,	// (0x0002f477) list_double_pane_t2_ParamLimits

0x4e7f,	// (0x0002f477) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00039be9) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00039be9) list_double_pane_t

0x4e91,	// (0x0002f489) list_double2_pane_g1_ParamLimits

0x4e91,	// (0x0002f489) list_double2_pane_g1

0x4ea2,	// (0x0002f49a) list_double2_pane_g2_ParamLimits

0x4ea2,	// (0x0002f49a) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00039bee) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00039bee) list_double2_pane_g

0x4eae,	// (0x0002f4a6) list_double2_pane_t1_ParamLimits

0x4eae,	// (0x0002f4a6) list_double2_pane_t1

0x4ec4,	// (0x0002f4bc) list_double2_pane_t2_ParamLimits

0x4ec4,	// (0x0002f4bc) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00039bf3) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00039bf3) list_double2_pane_t

0x4e51,	// (0x0002f449) list_double_number_pane_g1_ParamLimits

0x4e51,	// (0x0002f449) list_double_number_pane_g1

0x4e5d,	// (0x0002f455) list_double_number_pane_g2_ParamLimits

0x4e5d,	// (0x0002f455) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00039be4) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00039be4) list_double_number_pane_g

0x4ed6,	// (0x0002f4ce) list_double_number_pane_t1_ParamLimits

0x4ed6,	// (0x0002f4ce) list_double_number_pane_t1

0x4ee8,	// (0x0002f4e0) list_double_number_pane_t2_ParamLimits

0x4ee8,	// (0x0002f4e0) list_double_number_pane_t2

0x4efe,	// (0x0002f4f6) list_double_number_pane_t3_ParamLimits

0x4efe,	// (0x0002f4f6) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00039bf8) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00039bf8) list_double_number_pane_t

0x4f10,	// (0x0002f508) list_double_graphic_pane_g1_ParamLimits

0x4f10,	// (0x0002f508) list_double_graphic_pane_g1

0x4f1c,	// (0x0002f514) list_double_graphic_pane_g2_ParamLimits

0x4f1c,	// (0x0002f514) list_double_graphic_pane_g2

0x4f2b,	// (0x0002f523) list_double_graphic_pane_g3_ParamLimits

0x4f2b,	// (0x0002f523) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00039bff) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00039bff) list_double_graphic_pane_g

0x4f43,	// (0x0002f53b) list_double_graphic_pane_t1_ParamLimits

0x4f43,	// (0x0002f53b) list_double_graphic_pane_t1

0x4f59,	// (0x0002f551) list_double_graphic_pane_t2_ParamLimits

0x4f59,	// (0x0002f551) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00039c08) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00039c08) list_double_graphic_pane_t

0x4f6b,	// (0x0002f563) list_double2_graphic_pane_g1_ParamLimits

0x4f6b,	// (0x0002f563) list_double2_graphic_pane_g1

0x4f77,	// (0x0002f56f) list_double2_graphic_pane_g2_ParamLimits

0x4f77,	// (0x0002f56f) list_double2_graphic_pane_g2

0x4ea2,	// (0x0002f49a) list_double2_graphic_pane_g3_ParamLimits

0x4ea2,	// (0x0002f49a) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00039c0d) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00039c0d) list_double2_graphic_pane_g

0x4f83,	// (0x0002f57b) list_double2_graphic_pane_t1_ParamLimits

0x4f83,	// (0x0002f57b) list_double2_graphic_pane_t1

0x4f99,	// (0x0002f591) list_double2_graphic_pane_t2_ParamLimits

0x4f99,	// (0x0002f591) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00039c14) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00039c14) list_double2_graphic_pane_t

0x4fab,	// (0x0002f5a3) list_double_large_graphic_pane_g1_ParamLimits

0x4fab,	// (0x0002f5a3) list_double_large_graphic_pane_g1

0x4fbe,	// (0x0002f5b6) list_double_large_graphic_pane_g2_ParamLimits

0x4fbe,	// (0x0002f5b6) list_double_large_graphic_pane_g2

0x4e5d,	// (0x0002f455) list_double_large_graphic_pane_g3_ParamLimits

0x4e5d,	// (0x0002f455) list_double_large_graphic_pane_g3

0x4fcf,	// (0x0002f5c7) list_double_large_graphic_pane_g4_ParamLimits

0x4fcf,	// (0x0002f5c7) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00039c19) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00039c19) list_double_large_graphic_pane_g

0x4ff6,	// (0x0002f5ee) list_double_large_graphic_pane_t1_ParamLimits

0x4ff6,	// (0x0002f5ee) list_double_large_graphic_pane_t1

0x500f,	// (0x0002f607) list_double_large_graphic_pane_t2_ParamLimits

0x500f,	// (0x0002f607) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00039c24) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00039c24) list_double_large_graphic_pane_t

0x5021,	// (0x0002f619) list_double2_large_graphic_pane_g1_ParamLimits

0x5021,	// (0x0002f619) list_double2_large_graphic_pane_g1

0x4e91,	// (0x0002f489) list_double2_large_graphic_pane_g2_ParamLimits

0x4e91,	// (0x0002f489) list_double2_large_graphic_pane_g2

0x4ea2,	// (0x0002f49a) list_double2_large_graphic_pane_g3_ParamLimits

0x4ea2,	// (0x0002f49a) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00039c29) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00039c29) list_double2_large_graphic_pane_g

0x502d,	// (0x0002f625) list_double2_large_graphic_pane_t1_ParamLimits

0x502d,	// (0x0002f625) list_double2_large_graphic_pane_t1

0x5043,	// (0x0002f63b) list_double2_large_graphic_pane_t2_ParamLimits

0x5043,	// (0x0002f63b) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00039c30) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00039c30) list_double2_large_graphic_pane_t

0x5055,	// (0x0002f64d) list_double_heading_pane_g1_ParamLimits

0x5055,	// (0x0002f64d) list_double_heading_pane_g1

0x5066,	// (0x0002f65e) list_double_heading_pane_g2_ParamLimits

0x5066,	// (0x0002f65e) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00039c35) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00039c35) list_double_heading_pane_g

0x5072,	// (0x0002f66a) list_double_heading_pane_t1_ParamLimits

0x5072,	// (0x0002f66a) list_double_heading_pane_t1

0x4ec4,	// (0x0002f4bc) list_double_heading_pane_t2_ParamLimits

0x4ec4,	// (0x0002f4bc) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00039c3a) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00039c3a) list_double_heading_pane_t

0x5088,	// (0x0002f680) list_double_graphic_heading_pane_g1_ParamLimits

0x5088,	// (0x0002f680) list_double_graphic_heading_pane_g1

0x5055,	// (0x0002f64d) list_double_graphic_heading_pane_g2_ParamLimits

0x5055,	// (0x0002f64d) list_double_graphic_heading_pane_g2

0x5066,	// (0x0002f65e) list_double_graphic_heading_pane_g3_ParamLimits

0x5066,	// (0x0002f65e) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00039c3f) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00039c3f) list_double_graphic_heading_pane_g

0x5094,	// (0x0002f68c) list_double_graphic_heading_pane_t1_ParamLimits

0x5094,	// (0x0002f68c) list_double_graphic_heading_pane_t1

0x4f99,	// (0x0002f591) list_double_graphic_heading_pane_t2_ParamLimits

0x4f99,	// (0x0002f591) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00039c46) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00039c46) list_double_graphic_heading_pane_t

0x4fbe,	// (0x0002f5b6) list_double_time_pane_g1_ParamLimits

0x4fbe,	// (0x0002f5b6) list_double_time_pane_g1

0x4e5d,	// (0x0002f455) list_double_time_pane_g2_ParamLimits

0x4e5d,	// (0x0002f455) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00039c4b) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00039c4b) list_double_time_pane_g

0x50aa,	// (0x0002f6a2) list_double_time_pane_t1_ParamLimits

0x50aa,	// (0x0002f6a2) list_double_time_pane_t1

0x50c0,	// (0x0002f6b8) list_double_time_pane_t2_ParamLimits

0x50c0,	// (0x0002f6b8) list_double_time_pane_t2

0x50d2,	// (0x0002f6ca) list_double_time_pane_t3_ParamLimits

0x50d2,	// (0x0002f6ca) list_double_time_pane_t3

0x50e4,	// (0x0002f6dc) list_double_time_pane_t4_ParamLimits

0x50e4,	// (0x0002f6dc) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00039c50) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00039c50) list_double_time_pane_t

0x4f77,	// (0x0002f56f) list_setting_pane_g1_ParamLimits

0x4f77,	// (0x0002f56f) list_setting_pane_g1

0x4ea2,	// (0x0002f49a) list_setting_pane_g2_ParamLimits

0x4ea2,	// (0x0002f49a) list_setting_pane_g2

0x0001,

0xf661,	// (0x00039c59) list_setting_pane_g_ParamLimits

0xf661,	// (0x00039c59) list_setting_pane_g

0x50f6,	// (0x0002f6ee) list_setting_pane_t1_ParamLimits

0x50f6,	// (0x0002f6ee) list_setting_pane_t1

0x5110,	// (0x0002f708) list_setting_pane_t2_ParamLimits

0x5110,	// (0x0002f708) list_setting_pane_t2

0x0002,

0xf666,	// (0x00039c5e) list_setting_pane_t_ParamLimits

0xf666,	// (0x00039c5e) list_setting_pane_t

0x514f,	// (0x0002f747) set_value_pane_cp_ParamLimits

0x514f,	// (0x0002f747) set_value_pane_cp

0x515b,	// (0x0002f753) list_setting_number_pane_g1_ParamLimits

0x515b,	// (0x0002f753) list_setting_number_pane_g1

0x5167,	// (0x0002f75f) list_setting_number_pane_g2_ParamLimits

0x5167,	// (0x0002f75f) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00039c65) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00039c65) list_setting_number_pane_g

0x5173,	// (0x0002f76b) list_setting_number_pane_t1_ParamLimits

0x5173,	// (0x0002f76b) list_setting_number_pane_t1

0x518c,	// (0x0002f784) list_setting_number_pane_t2_ParamLimits

0x518c,	// (0x0002f784) list_setting_number_pane_t2

0x51a6,	// (0x0002f79e) list_setting_number_pane_t3_ParamLimits

0x51a6,	// (0x0002f79e) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00039c6a) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00039c6a) list_setting_number_pane_t

0x514f,	// (0x0002f747) set_value_pane_ParamLimits

0x514f,	// (0x0002f747) set_value_pane

0x877e,	// (0x00032d76) bg_set_opt_pane_ParamLimits

0x877e,	// (0x00032d76) bg_set_opt_pane

0x51e9,	// (0x0002f7e1) set_value_pane_t1

0x879f,	// (0x00032d97) slider_set_pane_cp3

0x87a8,	// (0x00032da0) volume_small_pane_cp

0x87b1,	// (0x00032da9) list_form_gen_pane

0x87ba,	// (0x00032db2) scroll_pane_cp8

0x51ff,	// (0x0002f7f7) form_field_data_pane_ParamLimits

0x51ff,	// (0x0002f7f7) form_field_data_pane

0x521f,	// (0x0002f817) form_field_data_wide_pane_ParamLimits

0x521f,	// (0x0002f817) form_field_data_wide_pane

0x5240,	// (0x0002f838) form_field_popup_pane_ParamLimits

0x5240,	// (0x0002f838) form_field_popup_pane

0x5260,	// (0x0002f858) form_field_popup_wide_pane_ParamLimits

0x5260,	// (0x0002f858) form_field_popup_wide_pane

0x527d,	// (0x0002f875) form_field_slider_pane_ParamLimits

0x527d,	// (0x0002f875) form_field_slider_pane

0x5290,	// (0x0002f888) form_field_slider_wide_pane_ParamLimits

0x5290,	// (0x0002f888) form_field_slider_wide_pane

0x87cb,	// (0x00032dc3) data_form_pane

0x52ad,	// (0x0002f8a5) form_field_data_pane_t1

0x87d7,	// (0x00032dcf) input_focus_pane

0x52c5,	// (0x0002f8bd) data_form_wide_pane

0x52e2,	// (0x0002f8da) form_field_data_wide_pane_t1

0x8548,	// (0x00032b40) input_focus_pane_cp6

0x5304,	// (0x0002f8fc) form_field_popup_pane_t1

0x87d7,	// (0x00032dcf) input_focus_pane_cp7

0x8805,	// (0x00032dfd) list_form_pane

0x5324,	// (0x0002f91c) form_field_popup_wide_pane_t1

0x87d7,	// (0x00032dcf) input_focus_pane_cp8

0x8811,	// (0x00032e09) list_form_wide_pane

0x5341,	// (0x0002f939) form_field_slider_pane_t1_ParamLimits

0x5341,	// (0x0002f939) form_field_slider_pane_t1

0x5357,	// (0x0002f94f) form_field_slider_pane_t2_ParamLimits

0x5357,	// (0x0002f94f) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00039c7a) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00039c7a) form_field_slider_pane_t

0x81e3,	// (0x000327db) input_focus_pane_cp9_ParamLimits

0x81e3,	// (0x000327db) input_focus_pane_cp9

0x536c,	// (0x0002f964) slider_cont_pane_ParamLimits

0x536c,	// (0x0002f964) slider_cont_pane

0x881d,	// (0x00032e15) form_field_slider_wide_pane_t1_ParamLimits

0x881d,	// (0x00032e15) form_field_slider_wide_pane_t1

0x5380,	// (0x0002f978) form_field_slider_wide_pane_t2_ParamLimits

0x5380,	// (0x0002f978) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00039c7f) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00039c7f) form_field_slider_wide_pane_t

0x81e3,	// (0x000327db) input_focus_pane_cp10_ParamLimits

0x81e3,	// (0x000327db) input_focus_pane_cp10

0x5392,	// (0x0002f98a) slider_cont_pane_cp1_ParamLimits

0x5392,	// (0x0002f98a) slider_cont_pane_cp1

0x53a6,	// (0x0002f99e) slider_form_pane_cp

0x882f,	// (0x00032e27) input_focus_pane_g1

0x8837,	// (0x00032e2f) input_focus_pane_g2

0x883f,	// (0x00032e37) input_focus_pane_g3

0x8847,	// (0x00032e3f) input_focus_pane_g4

0x884f,	// (0x00032e47) input_focus_pane_g5

0x8857,	// (0x00032e4f) input_focus_pane_g6

0x885f,	// (0x00032e57) input_focus_pane_g7

0x8867,	// (0x00032e5f) input_focus_pane_g8

0x886f,	// (0x00032e67) input_focus_pane_g9

0x7e7e,	// (0x00032476) input_focus_pane_g10

0x0009,

0xf68c,	// (0x00039c84) input_focus_pane_g

0xa2c9,	// (0x000348c1) wait_border_pane_g3_copy1

0x53ae,	// (0x0002f9a6) data_form_pane_t1

0x7e7e,	// (0x00032476) wait_anim_pane_g1_copy1

0x7631,	// (0x00031c29) data_form_wide_pane_t1

0x53c9,	// (0x0002f9c1) list_form_graphic_pane_cp_ParamLimits

0x53c9,	// (0x0002f9c1) list_form_graphic_pane_cp

0xb1f5,	// (0x000357ed) slider_form_pane_g1

0xb1fe,	// (0x000357f6) slider_form_pane_g2

0x0006,

0xf98f,	// (0x00039f87) slider_form_pane_g

0x53e2,	// (0x0002f9da) list_form_graphic_pane_ParamLimits

0x53e2,	// (0x0002f9da) list_form_graphic_pane

0x53fe,	// (0x0002f9f6) list_form_graphic_pane_g1

0x5406,	// (0x0002f9fe) list_form_graphic_pane_t1_ParamLimits

0x5406,	// (0x0002f9fe) list_form_graphic_pane_t1

0x7f68,	// (0x00032560) list_highlight_pane_cp5_ParamLimits

0x7f68,	// (0x00032560) list_highlight_pane_cp5

0x741a,	// (0x00031a12) find_pane_g1

0x8877,	// (0x00032e6f) input_find_pane

0x7423,	// (0x00031a1b) input_find_pane_g1_ParamLimits

0x7423,	// (0x00031a1b) input_find_pane_g1

0x742f,	// (0x00031a27) input_find_pane_t1_ParamLimits

0x742f,	// (0x00031a27) input_find_pane_t1

0x7444,	// (0x00031a3c) input_find_pane_t2_ParamLimits

0x7444,	// (0x00031a3c) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00039c99) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00039c99) input_find_pane_t

0x8880,	// (0x00032e78) input_focus_pane_cp5_ParamLimits

0x8880,	// (0x00032e78) input_focus_pane_cp5

0x889a,	// (0x00032e92) bg_popup_window_pane_cp2_ParamLimits

0x889a,	// (0x00032e92) bg_popup_window_pane_cp2

0x88a7,	// (0x00032e9f) listscroll_menu_pane_ParamLimits

0x88a7,	// (0x00032e9f) listscroll_menu_pane

0x88b3,	// (0x00032eab) popup_submenu_window_ParamLimits

0x88b3,	// (0x00032eab) popup_submenu_window

0x88df,	// (0x00032ed7) find_popup_pane_g1

0x88e7,	// (0x00032edf) input_popup_find_pane_cp

0x8880,	// (0x00032e78) input_focus_pane_cp4_ParamLimits

0x8880,	// (0x00032e78) input_focus_pane_cp4

0x88fd,	// (0x00032ef5) input_popup_find_pane_t1_ParamLimits

0x88fd,	// (0x00032ef5) input_popup_find_pane_t1

0x7e88,	// (0x00032480) bg_popup_sub_pane_cp

0x892b,	// (0x00032f23) listscroll_popup_sub_pane

0x8933,	// (0x00032f2b) list_submenu_pane_ParamLimits

0x8933,	// (0x00032f2b) list_submenu_pane

0x8944,	// (0x00032f3c) scroll_pane_cp4

0x894c,	// (0x00032f44) list_single_popup_submenu_pane_ParamLimits

0x894c,	// (0x00032f44) list_single_popup_submenu_pane

0x8960,	// (0x00032f58) list_single_popup_submenu_pane_g1

0x8968,	// (0x00032f60) list_single_popup_submenu_pane_t1_ParamLimits

0x8968,	// (0x00032f60) list_single_popup_submenu_pane_t1

0x7f68,	// (0x00032560) bg_active_tab_pane_cp1_ParamLimits

0x7f68,	// (0x00032560) bg_active_tab_pane_cp1

0x897d,	// (0x00032f75) tabs_2_active_pane_g1

0x8985,	// (0x00032f7d) tabs_2_active_pane_t1

0x7f68,	// (0x00032560) bg_passive_tab_pane_cp1_ParamLimits

0x7f68,	// (0x00032560) bg_passive_tab_pane_cp1

0x897d,	// (0x00032f75) tabs_2_passive_pane_g1

0x8985,	// (0x00032f7d) tabs_2_passive_pane_t1

0x8997,	// (0x00032f8f) bg_active_tab_pane_cp4

0x89a5,	// (0x00032f9d) tabs_2_long_active_pane_t1

0x89b8,	// (0x00032fb0) bg_passive_tab_pane_cp4

0x6020,	// (0x00030618) list_single_midp_graphic_pane_g4_ParamLimits

0x8997,	// (0x00032f8f) bg_active_tab_pane_cp5

0x89c4,	// (0x00032fbc) tabs_3_long_active_pane_t1

0x89b8,	// (0x00032fb0) bg_passive_tab_pane_cp5

0x6020,	// (0x00030618) list_single_midp_graphic_pane_g4

0x7f68,	// (0x00032560) bg_popup_window_pane_cp13_ParamLimits

0x7f68,	// (0x00032560) bg_popup_window_pane_cp13

0x89df,	// (0x00032fd7) listscroll_popup_fast_pane_ParamLimits

0x89df,	// (0x00032fd7) listscroll_popup_fast_pane

0x89ee,	// (0x00032fe6) grid_popup_fast_pane_ParamLimits

0x89ee,	// (0x00032fe6) grid_popup_fast_pane

0x8a00,	// (0x00032ff8) scroll_pane_cp9_ParamLimits

0x8a00,	// (0x00032ff8) scroll_pane_cp9

0xcae4,	// (0x000370dc) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcae4,	// (0x000370dc) list_single_graphic_hl_pane_t1_cp2

0x8a24,	// (0x0003301c) input_focus_pane_cp20_ParamLimits

0x8a24,	// (0x0003301c) input_focus_pane_cp20

0x8a32,	// (0x0003302a) query_popup_data_pane_t1_ParamLimits

0x8a32,	// (0x0003302a) query_popup_data_pane_t1

0x8a45,	// (0x0003303d) query_popup_data_pane_t2_ParamLimits

0x8a45,	// (0x0003303d) query_popup_data_pane_t2

0x8a8b,	// (0x00033083) query_popup_data_pane_t3_ParamLimits

0x8a8b,	// (0x00033083) query_popup_data_pane_t3

0x8acc,	// (0x000330c4) query_popup_data_pane_t4_ParamLimits

0x8acc,	// (0x000330c4) query_popup_data_pane_t4

0x8b08,	// (0x00033100) query_popup_data_pane_t5_ParamLimits

0x8b08,	// (0x00033100) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00039c9e) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00039c9e) query_popup_data_pane_t

0x882f,	// (0x00032e27) bg_set_opt_pane_g1

0x8837,	// (0x00032e2f) bg_set_opt_pane_g2

0x883f,	// (0x00032e37) bg_set_opt_pane_g3

0x8847,	// (0x00032e3f) bg_set_opt_pane_g4

0x884f,	// (0x00032e47) bg_set_opt_pane_g5

0x8857,	// (0x00032e4f) bg_set_opt_pane_g6

0x885f,	// (0x00032e57) bg_set_opt_pane_g7

0x8867,	// (0x00032e5f) bg_set_opt_pane_g8

0x886f,	// (0x00032e67) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00039ca9) bg_set_opt_pane_g

0x56b8,	// (0x0002fcb0) control_top_pane_stacon_ParamLimits

0x56b8,	// (0x0002fcb0) control_top_pane_stacon

0x570b,	// (0x0002fd03) signal_pane_stacon_ParamLimits

0x570b,	// (0x0002fd03) signal_pane_stacon

0x90f8,	// (0x000336f0) stacon_top_pane_g1_ParamLimits

0x90f8,	// (0x000336f0) stacon_top_pane_g1

0x5730,	// (0x0002fd28) title_pane_stacon_ParamLimits

0x5730,	// (0x0002fd28) title_pane_stacon

0x575a,	// (0x0002fd52) uni_indicator_pane_stacon_ParamLimits

0x575a,	// (0x0002fd52) uni_indicator_pane_stacon

0x576f,	// (0x0002fd67) battery_pane_stacon_ParamLimits

0x576f,	// (0x0002fd67) battery_pane_stacon

0x57b3,	// (0x0002fdab) control_bottom_pane_stacon_ParamLimits

0x57b3,	// (0x0002fdab) control_bottom_pane_stacon

0x57d6,	// (0x0002fdce) navi_pane_stacon_ParamLimits

0x57d6,	// (0x0002fdce) navi_pane_stacon

0x911a,	// (0x00033712) stacon_bottom_pane_g1_ParamLimits

0x911a,	// (0x00033712) stacon_bottom_pane_g1

0x541b,	// (0x0002fa13) aid_levels_signal_lsc_ParamLimits

0x541b,	// (0x0002fa13) aid_levels_signal_lsc

0x5431,	// (0x0002fa29) signal_pane_stacon_g1_ParamLimits

0x5431,	// (0x0002fa29) signal_pane_stacon_g1

0x5445,	// (0x0002fa3d) signal_pane_stacon_g2_ParamLimits

0x5445,	// (0x0002fa3d) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x00039cbc) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00039cbc) signal_pane_stacon_g

0x547a,	// (0x0002fa72) title_pane_stacon_t1_ParamLimits

0x547a,	// (0x0002fa72) title_pane_stacon_t1

0x8b4c,	// (0x00033144) uni_indicator_pane_stacon_g1

0x8b56,	// (0x0003314e) uni_indicator_pane_stacon_g2

0x8b60,	// (0x00033158) uni_indicator_pane_stacon_g3

0x8b6a,	// (0x00033162) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00039cc8) uni_indicator_pane_stacon_g

0x549f,	// (0x0002fa97) control_top_pane_stacon_g1

0x54a7,	// (0x0002fa9f) control_top_pane_stacon_t1_ParamLimits

0x54a7,	// (0x0002fa9f) control_top_pane_stacon_t1

0x54de,	// (0x0002fad6) aid_levels_battery_lsc_ParamLimits

0x54de,	// (0x0002fad6) aid_levels_battery_lsc

0x54f5,	// (0x0002faed) battery_pane_stacon_g1_ParamLimits

0x54f5,	// (0x0002faed) battery_pane_stacon_g1

0x5508,	// (0x0002fb00) battery_pane_stacon_g2_ParamLimits

0x5508,	// (0x0002fb00) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00039cd1) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00039cd1) battery_pane_stacon_g

0x5546,	// (0x0002fb3e) navi_icon_pane_stacon

0x555a,	// (0x0002fb52) navi_navi_pane_stacon

0x5546,	// (0x0002fb3e) navi_text_pane_stacon

0x549f,	// (0x0002fa97) control_bottom_pane_stacon_g1

0x556e,	// (0x0002fb66) control_bottom_pane_stacon_t1_ParamLimits

0x556e,	// (0x0002fb66) control_bottom_pane_stacon_t1

0x8b8e,	// (0x00033186) grid_app_pane_ParamLimits

0x8b8e,	// (0x00033186) grid_app_pane

0x8bb2,	// (0x000331aa) scroll_pane_cp15_ParamLimits

0x8bb2,	// (0x000331aa) scroll_pane_cp15

0x8bc5,	// (0x000331bd) cell_app_pane_ParamLimits

0x8bc5,	// (0x000331bd) cell_app_pane

0x8be9,	// (0x000331e1) cell_app_pane_g1_ParamLimits

0x8be9,	// (0x000331e1) cell_app_pane_g1

0x8c0d,	// (0x00033205) cell_app_pane_g2_ParamLimits

0x8c0d,	// (0x00033205) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00039cd6) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00039cd6) cell_app_pane_g

0x8c19,	// (0x00033211) cell_app_pane_t1_ParamLimits

0x8c19,	// (0x00033211) cell_app_pane_t1

0x8c30,	// (0x00033228) grid_highlight_pane_ParamLimits

0x8c30,	// (0x00033228) grid_highlight_pane

0x882f,	// (0x00032e27) cell_highlight_pane_g1

0x8837,	// (0x00032e2f) cell_highlight_pane_g2

0x883f,	// (0x00032e37) cell_highlight_pane_g3

0x8847,	// (0x00032e3f) cell_highlight_pane_g4

0x884f,	// (0x00032e47) cell_highlight_pane_g5

0x8857,	// (0x00032e4f) cell_highlight_pane_g6

0x885f,	// (0x00032e57) cell_highlight_pane_g7

0x8867,	// (0x00032e5f) cell_highlight_pane_g8

0x886f,	// (0x00032e67) cell_highlight_pane_g9

0x7e7e,	// (0x00032476) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x00039c84) cell_highlight_pane_g

0x8c41,	// (0x00033239) bg_scroll_pane

0x55b8,	// (0x0002fbb0) scroll_handle_pane

0x8c88,	// (0x00033280) scroll_bg_pane_g1

0x8c9d,	// (0x00033295) scroll_bg_pane_g2

0x8cb5,	// (0x000332ad) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00039cdb) scroll_bg_pane_g

0x8cca,	// (0x000332c2) scroll_handle_focus_pane_ParamLimits

0x8cca,	// (0x000332c2) scroll_handle_focus_pane

0x8c88,	// (0x00033280) scroll_handle_pane_g1

0x8cd7,	// (0x000332cf) scroll_handle_pane_g2

0x8cb5,	// (0x000332ad) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x00039ce2) scroll_handle_pane_g

0x8880,	// (0x00032e78) bg_popup_sub_pane_cp21_ParamLimits

0x8880,	// (0x00032e78) bg_popup_sub_pane_cp21

0x8ceb,	// (0x000332e3) popup_fep_japan_predictive_window_t1_ParamLimits

0x8ceb,	// (0x000332e3) popup_fep_japan_predictive_window_t1

0x8d05,	// (0x000332fd) popup_fep_japan_predictive_window_t2_ParamLimits

0x8d05,	// (0x000332fd) popup_fep_japan_predictive_window_t2

0x8d38,	// (0x00033330) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d38,	// (0x00033330) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00039ce9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00039ce9) popup_fep_japan_predictive_window_t

0x7e88,	// (0x00032480) bg_popup_sub_pane_cp23

0x8d6f,	// (0x00033367) listscroll_japin_cand_pane

0x8d77,	// (0x0003336f) popup_fep_japan_candidate_window_t1

0x8d85,	// (0x0003337d) candidate_pane_ParamLimits

0x8d85,	// (0x0003337d) candidate_pane

0x8d97,	// (0x0003338f) scroll_pane_cp30

0x8d9f,	// (0x00033397) list_single_popup_jap_candidate_pane_ParamLimits

0x8d9f,	// (0x00033397) list_single_popup_jap_candidate_pane

0x7e88,	// (0x00032480) list_highlight_pane_cp30

0x8db4,	// (0x000333ac) list_single_popup_jap_candidate_pane_t1

0x8dc3,	// (0x000333bb) level_1_signal

0x8dd5,	// (0x000333cd) level_2_signal

0x8de8,	// (0x000333e0) level_3_signal

0x8dfb,	// (0x000333f3) level_4_signal

0x8e0e,	// (0x00033406) level_5_signal

0x8e21,	// (0x00033419) level_6_signal

0x8e34,	// (0x0003342c) level_7_signal

0x8dc3,	// (0x000333bb) level_1_battery

0x8dd5,	// (0x000333cd) level_2_battery

0x8de8,	// (0x000333e0) level_3_battery

0x8dfb,	// (0x000333f3) level_4_battery

0x8e0e,	// (0x00033406) level_5_battery

0x8e21,	// (0x00033419) level_6_battery

0x8e34,	// (0x0003342c) level_7_battery

0x8e5f,	// (0x00033457) list_menu_pane_ParamLimits

0x8e5f,	// (0x00033457) list_menu_pane

0x8e75,	// (0x0003346d) scroll_pane_cp25_ParamLimits

0x8e75,	// (0x0003346d) scroll_pane_cp25

0x8e8e,	// (0x00033486) list_double2_graphic_pane_cp2_ParamLimits

0x8e8e,	// (0x00033486) list_double2_graphic_pane_cp2

0x8e8e,	// (0x00033486) list_double2_large_graphic_pane_cp2_ParamLimits

0x8e8e,	// (0x00033486) list_double2_large_graphic_pane_cp2

0x8e8e,	// (0x00033486) list_double2_pane_cp2_ParamLimits

0x8e8e,	// (0x00033486) list_double2_pane_cp2

0x8e8e,	// (0x00033486) list_double_graphic_pane_cp2_ParamLimits

0x8e8e,	// (0x00033486) list_double_graphic_pane_cp2

0x8e8e,	// (0x00033486) list_double_large_graphic_pane_cp2_ParamLimits

0x8e8e,	// (0x00033486) list_double_large_graphic_pane_cp2

0x8e8e,	// (0x00033486) list_double_number_pane_cp2_ParamLimits

0x8e8e,	// (0x00033486) list_double_number_pane_cp2

0x8e8e,	// (0x00033486) list_double_pane_cp2_ParamLimits

0x8e8e,	// (0x00033486) list_double_pane_cp2

0x8eb2,	// (0x000334aa) list_single_2graphic_pane_cp2_ParamLimits

0x8eb2,	// (0x000334aa) list_single_2graphic_pane_cp2

0x8eb2,	// (0x000334aa) list_single_graphic_heading_pane_cp2_ParamLimits

0x8eb2,	// (0x000334aa) list_single_graphic_heading_pane_cp2

0x8eb2,	// (0x000334aa) list_single_graphic_pane_cp2_ParamLimits

0x8eb2,	// (0x000334aa) list_single_graphic_pane_cp2

0x8eb2,	// (0x000334aa) list_single_heading_pane_cp2_ParamLimits

0x8eb2,	// (0x000334aa) list_single_heading_pane_cp2

0x8ecb,	// (0x000334c3) list_single_large_graphic_pane_cp2_ParamLimits

0x8ecb,	// (0x000334c3) list_single_large_graphic_pane_cp2

0x8eb2,	// (0x000334aa) list_single_number_heading_pane_cp2_ParamLimits

0x8eb2,	// (0x000334aa) list_single_number_heading_pane_cp2

0x8eb2,	// (0x000334aa) list_single_number_pane_cp2_ParamLimits

0x8eb2,	// (0x000334aa) list_single_number_pane_cp2

0x8eb2,	// (0x000334aa) list_single_pane_cp2_ParamLimits

0x8eb2,	// (0x000334aa) list_single_pane_cp2

0x8f47,	// (0x0003353f) bg_popup_sub_pane_cp22

0x566a,	// (0x0002fc62) popup_side_volume_key_window_g1

0x5694,	// (0x0002fc8c) popup_side_volume_key_window_t1

0x56b0,	// (0x0002fca8) volume_small_pane_cp1

0x81e3,	// (0x000327db) bg_popup_sub_pane_cp24_ParamLimits

0x81e3,	// (0x000327db) bg_popup_sub_pane_cp24

0x8f5d,	// (0x00033555) fep_china_uni_candidate_pane_ParamLimits

0x8f5d,	// (0x00033555) fep_china_uni_candidate_pane

0x8f71,	// (0x00033569) fep_china_uni_entry_pane

0x8f81,	// (0x00033579) popup_fep_china_uni_window_g1

0x8f9d,	// (0x00033595) fep_china_uni_entry_pane_g1

0x8fa5,	// (0x0003359d) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00039d1a) fep_china_uni_entry_pane_g

0x8fad,	// (0x000335a5) fep_entry_item_pane

0x8fb7,	// (0x000335af) fep_candidate_item_pane

0x8fbf,	// (0x000335b7) fep_china_uni_candidate_pane_g1

0x8fc7,	// (0x000335bf) fep_china_uni_candidate_pane_g2

0x8fcf,	// (0x000335c7) fep_china_uni_candidate_pane_g3

0x8fd7,	// (0x000335cf) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00039d1f) fep_china_uni_candidate_pane_g

0x7e7e,	// (0x00032476) fep_entry_item_pane_g1

0x8fdf,	// (0x000335d7) fep_entry_item_pane_t1_ParamLimits

0x8fdf,	// (0x000335d7) fep_entry_item_pane_t1

0x8ff5,	// (0x000335ed) fep_candidate_item_pane_t1_ParamLimits

0x8ff5,	// (0x000335ed) fep_candidate_item_pane_t1

0x900a,	// (0x00033602) fep_candidate_item_pane_t2_ParamLimits

0x900a,	// (0x00033602) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00039d28) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00039d28) fep_candidate_item_pane_t

0x7f68,	// (0x00032560) list_highlight_pane_cp31_ParamLimits

0x7f68,	// (0x00032560) list_highlight_pane_cp31

0x901c,	// (0x00033614) level_1_signal_lsc

0x9025,	// (0x0003361d) level_2_signal_lsc

0x902e,	// (0x00033626) level_3_signal_lsc

0x9037,	// (0x0003362f) level_4_signal_lsc

0x9040,	// (0x00033638) level_5_signal_lsc

0x9049,	// (0x00033641) level_6_signal_lsc

0x9052,	// (0x0003364a) level_7_signal_lsc

0x9052,	// (0x0003364a) level_1_battery_lsc

0x905b,	// (0x00033653) level_2_battery_lsc

0x9064,	// (0x0003365c) level_3_battery_lsc

0x906d,	// (0x00033665) level_4_battery_lsc

0x9076,	// (0x0003366e) level_5_battery_lsc

0x907f,	// (0x00033677) level_6_battery_lsc

0x901c,	// (0x00033614) level_7_battery_lsc

0x9088,	// (0x00033680) scroll_handle_focus_pane_g1

0x9091,	// (0x00033689) scroll_handle_focus_pane_g2

0x909a,	// (0x00033692) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00039d2d) scroll_handle_focus_pane_g

0x7459,	// (0x00031a51) list_single_2graphic_pane_g1_ParamLimits

0x7459,	// (0x00031a51) list_single_2graphic_pane_g1

0x4dec,	// (0x0002f3e4) list_single_2graphic_pane_g2_ParamLimits

0x4dec,	// (0x0002f3e4) list_single_2graphic_pane_g2

0x4d72,	// (0x0002f36a) list_single_2graphic_pane_g3_ParamLimits

0x4d72,	// (0x0002f36a) list_single_2graphic_pane_g3

0x7465,	// (0x00031a5d) list_single_2graphic_pane_g4_ParamLimits

0x7465,	// (0x00031a5d) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x00039d34) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x00039d34) list_single_2graphic_pane_g

0x7471,	// (0x00031a69) list_single_2graphic_pane_t1_ParamLimits

0x7471,	// (0x00031a69) list_single_2graphic_pane_t1

0x749f,	// (0x00031a97) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x749f,	// (0x00031a97) list_double2_graphic_large_graphic_pane_g1

0x4e91,	// (0x0002f489) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4e91,	// (0x0002f489) list_double2_graphic_large_graphic_pane_g2

0x4ea2,	// (0x0002f49a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4ea2,	// (0x0002f49a) list_double2_graphic_large_graphic_pane_g3

0x74af,	// (0x00031aa7) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x74af,	// (0x00031aa7) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00039d3d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00039d3d) list_double2_graphic_large_graphic_pane_g

0x74bb,	// (0x00031ab3) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x74bb,	// (0x00031ab3) list_double2_graphic_large_graphic_pane_t1

0x74d1,	// (0x00031ac9) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x74d1,	// (0x00031ac9) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00039d46) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00039d46) list_double2_graphic_large_graphic_pane_t

0x91e2,	// (0x000337da) popup_fast_swap_window_ParamLimits

0x91e2,	// (0x000337da) popup_fast_swap_window

0x91fe,	// (0x000337f6) popup_side_volume_key_window

0x921a,	// (0x00033812) stacon_top_pane

0x9224,	// (0x0003381c) status_pane_ParamLimits

0x9224,	// (0x0003381c) status_pane

0x9232,	// (0x0003382a) status_small_pane

0x7e88,	// (0x00032480) control_pane

0x7e88,	// (0x00032480) stacon_bottom_pane

0x87ba,	// (0x00032db2) scroll_pane_cp121

0x87b1,	// (0x00032da9) set_content_pane

0x90a3,	// (0x0003369b) bg_active_tab_pane_g1_cp1

0x90ac,	// (0x000336a4) bg_active_tab_pane_g2_cp1

0x90b5,	// (0x000336ad) bg_active_tab_pane_g3_cp1

0x90a3,	// (0x0003369b) bg_passive_tab_pane_g1_cp1

0x90ac,	// (0x000336a4) bg_passive_tab_pane_g2_cp1

0x90b5,	// (0x000336ad) bg_passive_tab_pane_g3_cp1

0x90be,	// (0x000336b6) bg_active_tab_pane_g1_cp2

0x90ac,	// (0x000336a4) bg_active_tab_pane_g2_cp2

0x90c7,	// (0x000336bf) bg_active_tab_pane_g3_cp2

0x90be,	// (0x000336b6) bg_passive_tab_pane_g1_cp2

0x90ac,	// (0x000336a4) bg_passive_tab_pane_g2_cp2

0x90c7,	// (0x000336bf) bg_passive_tab_pane_g3_cp2

0x90d0,	// (0x000336c8) bg_active_tab_pane_g1_cp3

0x90ac,	// (0x000336a4) bg_active_tab_pane_g2_cp3

0x90d9,	// (0x000336d1) bg_active_tab_pane_g3_cp3

0x90d0,	// (0x000336c8) bg_passive_tab_pane_g1_cp3

0x90ac,	// (0x000336a4) bg_passive_tab_pane_g2_cp3

0x90d9,	// (0x000336d1) bg_passive_tab_pane_g3_cp3

0x90e2,	// (0x000336da) bg_active_tab_pane_g1_cp4

0x90ac,	// (0x000336a4) bg_active_tab_pane_g2_cp4

0x90ed,	// (0x000336e5) bg_active_tab_pane_g3_cp4

0x90e2,	// (0x000336da) bg_passive_tab_pane_g1_cp4

0x90ac,	// (0x000336a4) bg_passive_tab_pane_g2_cp4

0x90ed,	// (0x000336e5) bg_passive_tab_pane_g3_cp4

0x9136,	// (0x0003372e) bg_active_tab_pane_g1_cp5

0x90ac,	// (0x000336a4) bg_active_tab_pane_g2_cp5

0x913f,	// (0x00033737) bg_active_tab_pane_g3_cp5

0x9136,	// (0x0003372e) bg_passive_tab_pane_g1_cp5

0x90ac,	// (0x000336a4) bg_passive_tab_pane_g2_cp5

0x913f,	// (0x00033737) bg_passive_tab_pane_g3_cp5

0x9148,	// (0x00033740) list_set_graphic_pane_ParamLimits

0x9148,	// (0x00033740) list_set_graphic_pane

0x7e88,	// (0x00032480) bg_set_opt_pane_cp4

0x9165,	// (0x0003375d) list_set_graphic_pane_g1_ParamLimits

0x9165,	// (0x0003375d) list_set_graphic_pane_g1

0x9171,	// (0x00033769) list_set_graphic_pane_g2_ParamLimits

0x9171,	// (0x00033769) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00039d4b) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00039d4b) list_set_graphic_pane_g

0x0009,

0xfac8,	// (0x0003a0c0) volume_small_pane_cp_g

0x9195,	// (0x0003378d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9195,	// (0x0003378d) list_double2_large_graphic_pane_g1_cp2

0x91a1,	// (0x00033799) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x91a1,	// (0x00033799) list_double2_large_graphic_pane_g2_cp2

0x91b2,	// (0x000337aa) list_double2_large_graphic_pane_g3_cp2

0x91ba,	// (0x000337b2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x91ba,	// (0x000337b2) list_double2_large_graphic_pane_t1_cp2

0x91d0,	// (0x000337c8) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x91d0,	// (0x000337c8) list_double2_large_graphic_pane_t2_cp2

0xada8,	// (0x000353a0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xada8,	// (0x000353a0) list_double_large_graphic_pane_g1_cp2

0xadb9,	// (0x000353b1) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xadb9,	// (0x000353b1) list_double_large_graphic_pane_g2_cp2

0x934b,	// (0x00033943) list_double_large_graphic_pane_g3_cp2

0xadca,	// (0x000353c2) list_double_large_graphic_pane_g4_cp

0xadd2,	// (0x000353ca) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xadd2,	// (0x000353ca) list_double_large_graphic_pane_t1_cp2

0xade9,	// (0x000353e1) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xade9,	// (0x000353e1) list_double_large_graphic_pane_t2_cp2

0x923d,	// (0x00033835) list_double2_graphic_pane_g1_cp2_ParamLimits

0x923d,	// (0x00033835) list_double2_graphic_pane_g1_cp2

0x924b,	// (0x00033843) list_double2_graphic_pane_g2_cp2_ParamLimits

0x924b,	// (0x00033843) list_double2_graphic_pane_g2_cp2

0x925c,	// (0x00033854) list_double2_graphic_pane_g3_cp2

0x9266,	// (0x0003385e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x9266,	// (0x0003385e) list_double2_graphic_pane_t1_cp2

0x927c,	// (0x00033874) list_double2_graphic_pane_t2_cp2_ParamLimits

0x927c,	// (0x00033874) list_double2_graphic_pane_t2_cp2

0x928e,	// (0x00033886) list_single_number_heading_pane_g1_cp2_ParamLimits

0x928e,	// (0x00033886) list_single_number_heading_pane_g1_cp2

0x929a,	// (0x00033892) list_single_number_heading_pane_g2_cp2

0x92a2,	// (0x0003389a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x92a2,	// (0x0003389a) list_single_number_heading_pane_t1_cp2

0x92b8,	// (0x000338b0) list_single_number_heading_pane_t2_cp2_ParamLimits

0x92b8,	// (0x000338b0) list_single_number_heading_pane_t2_cp2

0x92ca,	// (0x000338c2) list_single_number_heading_pane_t3_cp2_ParamLimits

0x92ca,	// (0x000338c2) list_single_number_heading_pane_t3_cp2

0x928e,	// (0x00033886) list_single_heading_pane_g1_cp2_ParamLimits

0x928e,	// (0x00033886) list_single_heading_pane_g1_cp2

0x929a,	// (0x00033892) list_single_heading_pane_g2_cp2

0x92a2,	// (0x0003389a) list_single_heading_pane_t1_cp2_ParamLimits

0x92a2,	// (0x0003389a) list_single_heading_pane_t1_cp2

0xabb0,	// (0x000351a8) list_single_heading_pane_t2_cp2_ParamLimits

0xabb0,	// (0x000351a8) list_single_heading_pane_t2_cp2

0xaaf8,	// (0x000350f0) list_double_graphic_pane_g1_cp2_ParamLimits

0xaaf8,	// (0x000350f0) list_double_graphic_pane_g1_cp2

0xab04,	// (0x000350fc) list_double_graphic_pane_g2_cp2_ParamLimits

0xab04,	// (0x000350fc) list_double_graphic_pane_g2_cp2

0xab13,	// (0x0003510b) list_double_graphic_pane_g3_cp2

0xab1b,	// (0x00035113) list_double_graphic_pane_t1_cp2_ParamLimits

0xab1b,	// (0x00035113) list_double_graphic_pane_t1_cp2

0xab31,	// (0x00035129) list_double_graphic_pane_t2_cp2_ParamLimits

0xab31,	// (0x00035129) list_double_graphic_pane_t2_cp2

0x933f,	// (0x00033937) list_double_number_pane_g1_cp2_ParamLimits

0x933f,	// (0x00033937) list_double_number_pane_g1_cp2

0x934b,	// (0x00033943) list_double_number_pane_g2_cp2

0xaabc,	// (0x000350b4) list_double_number_pane_t1_cp2_ParamLimits

0xaabc,	// (0x000350b4) list_double_number_pane_t1_cp2

0xaad0,	// (0x000350c8) list_double_number_pane_t2_cp2_ParamLimits

0xaad0,	// (0x000350c8) list_double_number_pane_t2_cp2

0xaae6,	// (0x000350de) list_double_number_pane_t3_cp2_ParamLimits

0xaae6,	// (0x000350de) list_double_number_pane_t3_cp2

0xa9a5,	// (0x00034f9d) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9a5,	// (0x00034f9d) list_single_graphic_pane_g1_cp2

0x93a3,	// (0x0003399b) list_single_graphic_pane_g2_cp2_ParamLimits

0x93a3,	// (0x0003399b) list_single_graphic_pane_g2_cp2

0x93af,	// (0x000339a7) list_single_graphic_pane_g3_cp2

0xa97b,	// (0x00034f73) list_single_graphic_pane_t1_cp2_ParamLimits

0xa97b,	// (0x00034f73) list_single_graphic_pane_t1_cp2

0x93a3,	// (0x0003399b) list_single_number_pane_g1_cp2_ParamLimits

0x93a3,	// (0x0003399b) list_single_number_pane_g1_cp2

0x93af,	// (0x000339a7) list_single_number_pane_g2_cp2

0xa97b,	// (0x00034f73) list_single_number_pane_t1_cp2_ParamLimits

0xa97b,	// (0x00034f73) list_single_number_pane_t1_cp2

0xa991,	// (0x00034f89) list_single_number_pane_t2_cp2_ParamLimits

0xa991,	// (0x00034f89) list_single_number_pane_t2_cp2

0x91a1,	// (0x00033799) list_double2_pane_g1_cp2_ParamLimits

0x91a1,	// (0x00033799) list_double2_pane_g1_cp2

0x91b2,	// (0x000337aa) list_double2_pane_g2_cp2

0x9317,	// (0x0003390f) list_double2_pane_t1_cp2_ParamLimits

0x9317,	// (0x0003390f) list_double2_pane_t1_cp2

0x932d,	// (0x00033925) list_double2_pane_t2_cp2_ParamLimits

0x932d,	// (0x00033925) list_double2_pane_t2_cp2

0x933f,	// (0x00033937) list_double_pane_g1_cp2_ParamLimits

0x933f,	// (0x00033937) list_double_pane_g1_cp2

0x934b,	// (0x00033943) list_double_pane_g2_cp2

0x9353,	// (0x0003394b) list_double_pane_t1_cp2_ParamLimits

0x9353,	// (0x0003394b) list_double_pane_t1_cp2

0x9369,	// (0x00033961) list_double_pane_t2_cp2_ParamLimits

0x9369,	// (0x00033961) list_double_pane_t2_cp2

0x9393,	// (0x0003398b) list_single_pane_cp2_g3

0x93a3,	// (0x0003399b) list_single_pane_g1_cp2_ParamLimits

0x93a3,	// (0x0003399b) list_single_pane_g1_cp2

0x93af,	// (0x000339a7) list_single_pane_g2_cp2

0x93b7,	// (0x000339af) list_single_pane_t1_cp2_ParamLimits

0x93b7,	// (0x000339af) list_single_pane_t1_cp2

0x93cf,	// (0x000339c7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x93cf,	// (0x000339c7) list_single_large_graphic_pane_g1_cp2

0x93db,	// (0x000339d3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x93db,	// (0x000339d3) list_single_large_graphic_pane_g2_cp2

0x93e7,	// (0x000339df) list_single_large_graphic_pane_g3_cp2

0x93ef,	// (0x000339e7) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x93ef,	// (0x000339e7) list_single_large_graphic_pane_g4_cp1

0x9409,	// (0x00033a01) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9409,	// (0x00033a01) list_single_large_graphic_pane_t1_cp2

0xa947,	// (0x00034f3f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa947,	// (0x00034f3f) list_single_graphic_heading_pane_g1_cp2

0xa914,	// (0x00034f0c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa914,	// (0x00034f0c) list_single_graphic_heading_pane_g4_cp2

0x93af,	// (0x000339a7) list_single_graphic_heading_pane_g5_cp2

0xa953,	// (0x00034f4b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa953,	// (0x00034f4b) list_single_graphic_heading_pane_t1_cp2

0xa969,	// (0x00034f61) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa969,	// (0x00034f61) list_single_graphic_heading_pane_t2_cp2

0xa908,	// (0x00034f00) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa908,	// (0x00034f00) list_single_2graphic_pane_g1_cp2

0xa914,	// (0x00034f0c) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa914,	// (0x00034f0c) list_single_2graphic_pane_g2_cp2

0x93af,	// (0x000339a7) list_single_2graphic_pane_g3_cp2

0xa925,	// (0x00034f1d) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa925,	// (0x00034f1d) list_single_2graphic_pane_g4_cp2

0xa931,	// (0x00034f29) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa931,	// (0x00034f29) list_single_2graphic_pane_t1_cp2

0x7e7e,	// (0x00032476) list_highlight_pane_g10_cp1

0xa4e0,	// (0x00034ad8) list_highlight_pane_g1_cp1

0xa4e8,	// (0x00034ae0) list_highlight_pane_g2_cp1

0xa4f0,	// (0x00034ae8) list_highlight_pane_g3_cp1

0xa4f8,	// (0x00034af0) list_highlight_pane_g4_cp1

0xa500,	// (0x00034af8) list_highlight_pane_g5_cp1

0xa508,	// (0x00034b00) list_highlight_pane_g6_cp1

0xa510,	// (0x00034b08) list_highlight_pane_g7_cp1

0xa518,	// (0x00034b10) list_highlight_pane_g8_cp1

0xa520,	// (0x00034b18) list_highlight_pane_g9_cp1

0xa3f4,	// (0x000349ec) form_field_slider_pane_t3

0xa402,	// (0x000349fa) form_field_slider_pane_t4

0xa410,	// (0x00034a08) slider_form_pane_ParamLimits

0xa410,	// (0x00034a08) slider_form_pane

0x7e88,	// (0x00032480) control_abbreviations

0x7e88,	// (0x00032480) control_conventions

0x7e88,	// (0x00032480) control_definitions

0x7e88,	// (0x00032480) format_table_attribute

0xabfa,	// (0x000351f2) bg_popup_preview_window_pane_g9

0x7e88,	// (0x00032480) format_table_data2

0x7e88,	// (0x00032480) format_table_data3

0x7e88,	// (0x00032480) format_table_data_example

0x0008,

0x7e88,	// (0x00032480) intro_purpose

0xf8ef,	// (0x00039ee7) bg_popup_preview_window_pane_g

0x7e88,	// (0x00032480) texts_category

0x7e88,	// (0x00032480) texts_graphics

0x941f,	// (0x00033a17) text_digital

0x942e,	// (0x00033a26) text_primary

0x943d,	// (0x00033a35) text_primary_small

0x944c,	// (0x00033a44) text_secondary

0x945b,	// (0x00033a53) text_title

0xb334,	// (0x0003592c) bg_passive_tab_pane_g1_cp3_srt

0x90ac,	// (0x000336a4) bg_passive_tab_pane_g2_cp3_srt

0xb33d,	// (0x00035935) bg_passive_tab_pane_g3_cp3_srt

0x7f68,	// (0x00032560) bg_active_tab_pane_cp3_srt_ParamLimits

0x7f68,	// (0x00032560) bg_active_tab_pane_cp3_srt

0xb346,	// (0x0003593e) tabs_4_active_pane_srt_g1

0xb34e,	// (0x00035946) tabs_4_active_pane_srt_t1_ParamLimits

0xb34e,	// (0x00035946) tabs_4_active_pane_srt_t1

0xb334,	// (0x0003592c) bg_active_tab_pane_g1_cp3_copy1

0x90ac,	// (0x000336a4) bg_active_tab_pane_g2_cp3_copy1

0xb33d,	// (0x00035935) bg_active_tab_pane_g3_cp3_copy1

0x7f68,	// (0x00032560) tabs_2_long_active_pane_srt_ParamLimits

0x7f68,	// (0x00032560) tabs_2_long_active_pane_srt

0x7f68,	// (0x00032560) tabs_2_long_passive_pane_srt_ParamLimits

0x7f68,	// (0x00032560) tabs_2_long_passive_pane_srt

0x89b8,	// (0x00032fb0) bg_passive_tab_pane_cp4_srt_ParamLimits

0x89b8,	// (0x00032fb0) bg_passive_tab_pane_cp4_srt

0xb028,	// (0x00035620) bg_passive_tab_pane_g1_cp4_srt

0x90ac,	// (0x000336a4) bg_passive_tab_pane_g2_cp4_srt

0xb031,	// (0x00035629) bg_passive_tab_pane_g3_cp4_srt

0x8997,	// (0x00032f8f) bg_active_tab_pane_cp4_srt_ParamLimits

0x8997,	// (0x00032f8f) bg_active_tab_pane_cp4_srt

0xb03a,	// (0x00035632) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb03a,	// (0x00035632) tabs_2_long_active_pane_srt_t1

0xb028,	// (0x00035620) bg_active_tab_pane_g1_cp4_srt

0x90ac,	// (0x000336a4) bg_active_tab_pane_g2_cp4_srt

0xb031,	// (0x00035629) bg_active_tab_pane_g3_cp4_srt

0x81e3,	// (0x000327db) tabs_3_long_active_pane_srt_ParamLimits

0x81e3,	// (0x000327db) tabs_3_long_active_pane_srt

0x81e3,	// (0x000327db) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x81e3,	// (0x000327db) tabs_3_long_passive_pane_cp_srt

0x81e3,	// (0x000327db) tabs_3_long_passive_pane_srt_ParamLimits

0x81e3,	// (0x000327db) tabs_3_long_passive_pane_srt

0x89b8,	// (0x00032fb0) bg_passive_tab_pane_cp5_srt_ParamLimits

0x89b8,	// (0x00032fb0) bg_passive_tab_pane_cp5_srt

0x9136,	// (0x0003372e) bg_passive_tab_pane_g1_cp5_srt

0x90ac,	// (0x000336a4) bg_passive_tab_pane_g2_cp5_srt

0x913f,	// (0x00033737) bg_passive_tab_pane_g3_cp5_srt

0x8997,	// (0x00032f8f) bg_active_tab_pane_cp5_srt_ParamLimits

0x8997,	// (0x00032f8f) bg_active_tab_pane_cp5_srt

0xb016,	// (0x0003560e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb016,	// (0x0003560e) tabs_3_long_active_pane_srt_t1

0x9136,	// (0x0003372e) bg_active_tab_pane_g1_cp5_srt

0x90ac,	// (0x000336a4) bg_active_tab_pane_g2_cp5_srt

0x913f,	// (0x00033737) bg_active_tab_pane_g3_cp5_srt

0xb008,	// (0x00035600) navi_text_pane_srt_t1

0xb000,	// (0x000355f8) navi_icon_pane_srt_g1

0x9630,	// (0x00033c28) midp_editing_number_pane_srt

0x946a,	// (0x00033a62) midp_ticker_pane_srt

0x9638,	// (0x00033c30) midp_ticker_pane_srt_g1

0x9640,	// (0x00033c38) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00039d6a) midp_ticker_pane_srt_g

0x9648,	// (0x00033c40) midp_ticker_pane_srt_t1

0xaff1,	// (0x000355e9) midp_editing_number_pane_t1_copy1

0x9472,	// (0x00033a6a) listscroll_midp_pane

0x9472,	// (0x00033a6a) midp_form_pane

0x94e2,	// (0x00033ada) midp_info_popup_window_ParamLimits

0x94e2,	// (0x00033ada) midp_info_popup_window

0x8880,	// (0x00032e78) bg_popup_sub_pane_cp50_ParamLimits

0x8880,	// (0x00032e78) bg_popup_sub_pane_cp50

0xa10c,	// (0x00034704) listscroll_midp_info_pane_ParamLimits

0xa10c,	// (0x00034704) listscroll_midp_info_pane

0xa0ec,	// (0x000346e4) listscroll_form_midp_pane_ParamLimits

0xa0ec,	// (0x000346e4) listscroll_form_midp_pane

0xa0f8,	// (0x000346f0) scroll_bar_cp050

0xa0cc,	// (0x000346c4) list_midp_pane

0xbd83,	// (0x0003637b) signal_pane_g2_cp

0xa006,	// (0x000345fe) listscroll_midp_info_pane_t1_ParamLimits

0xa006,	// (0x000345fe) listscroll_midp_info_pane_t1

0xa01e,	// (0x00034616) listscroll_midp_info_pane_t2_ParamLimits

0xa01e,	// (0x00034616) listscroll_midp_info_pane_t2

0xa05c,	// (0x00034654) listscroll_midp_info_pane_t3_ParamLimits

0xa05c,	// (0x00034654) listscroll_midp_info_pane_t3

0xa096,	// (0x0003468e) listscroll_midp_info_pane_t4_ParamLimits

0xa096,	// (0x0003468e) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x00039e22) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x00039e22) listscroll_midp_info_pane_t

0x8944,	// (0x00032f3c) scroll_pane_cp21

0x9fa4,	// (0x0003459c) form_midp_field_choice_group_pane

0x9fad,	// (0x000345a5) form_midp_field_text_pane

0x9fec,	// (0x000345e4) form_midp_field_time_pane

0x9ff4,	// (0x000345ec) form_midp_gauge_slider_pane

0x9ffd,	// (0x000345f5) form_midp_gauge_wait_pane

0x7e88,	// (0x00032480) form_midp_image_pane

0x75da,	// (0x00031bd2) list_single_midp_pane_ParamLimits

0x75da,	// (0x00031bd2) list_single_midp_pane

0x9f5f,	// (0x00034557) form_midp_field_text_pane_t1

0x9d32,	// (0x0003432a) input_focus_pane_cp050

0x9f93,	// (0x0003458b) list_midp_form_text_pane

0x9f2e,	// (0x00034526) form_midp_field_choice_group_pane_t1

0x9f3c,	// (0x00034534) input_focus_pane_cp051

0x9f50,	// (0x00034548) list_midp_choice_pane

0x7e88,	// (0x00032480) status_idle_pane

0x9f12,	// (0x0003450a) form_midp_field_time_pane_t1

0x7e7e,	// (0x00032476) wait_anim_pane_g2_copy1

0x9f20,	// (0x00034518) form_midp_field_time_pane_t2

0x0001,

0x9590,	// (0x00033b88) aid_navinavi_width_2_pane

0xf825,	// (0x00039e1d) form_midp_field_time_pane_t

0x7e88,	// (0x00032480) input_focus_pane_cp052

0x7e88,	// (0x00032480) bg_input_focus_pane_cp040

0x9ed2,	// (0x000344ca) form_midp_gauge_slider_pane_t1

0x9ee0,	// (0x000344d8) form_midp_gauge_slider_pane_t2

0x9eee,	// (0x000344e6) form_midp_gauge_slider_pane_t3

0x9efc,	// (0x000344f4) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x00039e14) form_midp_gauge_slider_pane_t

0x9f0a,	// (0x00034502) form_midp_slider_pane

0x7f68,	// (0x00032560) bg_input_focus_pane_cp041_ParamLimits

0x7f68,	// (0x00032560) bg_input_focus_pane_cp041

0x9e9f,	// (0x00034497) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e9f,	// (0x00034497) form_midp_gauge_wait_pane_t1

0x9eb1,	// (0x000344a9) form_midp_gauge_wait_pane_t2_ParamLimits

0x9eb1,	// (0x000344a9) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x00039e0f) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x00039e0f) form_midp_gauge_wait_pane_t

0x9ec3,	// (0x000344bb) form_midp_wait_pane_ParamLimits

0x9ec3,	// (0x000344bb) form_midp_wait_pane

0x9e69,	// (0x00034461) form_midp_image_pane_g1

0x9e72,	// (0x0003446a) form_midp_image_pane_t1

0x9e81,	// (0x00034479) form_midp_image_pane_t2

0x9e90,	// (0x00034488) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x00039e08) form_midp_image_pane_t

0x9e60,	// (0x00034458) list_single_midp_pane_g1

0x75cb,	// (0x00031bc3) list_single_midp_pane_t1

0x9e3b,	// (0x00034433) list_midp_form_item_pane_ParamLimits

0x9e3b,	// (0x00034433) list_midp_form_item_pane

0x9538,	// (0x00033b30) list_midp_form_item_pane_t1

0x9547,	// (0x00033b3f) midp_ticker_pane_g1

0x9553,	// (0x00033b4b) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00039d50) midp_ticker_pane_g

0x955f,	// (0x00033b57) midp_ticker_pane_t1

0xb242,	// (0x0003583a) midp_editing_number_pane_t1

0xb220,	// (0x00035818) midp_editing_number_pane

0xb22f,	// (0x00035827) midp_ticker_pane

0xafe1,	// (0x000355d9) ai_message_heading_pane

0x7e88,	// (0x00032480) bg_popup_window_pane_cp14

0xafe9,	// (0x000355e1) listscroll_ai_message_pane

0xaf6b,	// (0x00035563) ai_message_heading_pane_g1_ParamLimits

0xaf6b,	// (0x00035563) ai_message_heading_pane_g1

0xaf77,	// (0x0003556f) ai_message_heading_pane_g2_ParamLimits

0xaf77,	// (0x0003556f) ai_message_heading_pane_g2

0xaf83,	// (0x0003557b) ai_message_heading_pane_g3_ParamLimits

0xaf83,	// (0x0003557b) ai_message_heading_pane_g3

0xaf8f,	// (0x00035587) ai_message_heading_pane_g4_ParamLimits

0xaf8f,	// (0x00035587) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x00039f49) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x00039f49) ai_message_heading_pane_g

0xaf9b,	// (0x00035593) ai_message_heading_pane_t1_ParamLimits

0xaf9b,	// (0x00035593) ai_message_heading_pane_t1

0xafb5,	// (0x000355ad) ai_message_heading_pane_t2_ParamLimits

0xafb5,	// (0x000355ad) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x00039f52) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x00039f52) ai_message_heading_pane_t

0xafc7,	// (0x000355bf) bg_popup_heading_pane_cp1_ParamLimits

0xafc7,	// (0x000355bf) bg_popup_heading_pane_cp1

0xaf59,	// (0x00035551) list_ai_message_pane_ParamLimits

0xaf59,	// (0x00035551) list_ai_message_pane

0x8944,	// (0x00032f3c) scroll_pane_cp10

0xaef5,	// (0x000354ed) list_ai_message_pane_g1

0xaefd,	// (0x000354f5) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x00039f26) list_ai_message_pane_g

0xaf05,	// (0x000354fd) list_ai_message_pane_t1_ParamLimits

0xaf05,	// (0x000354fd) list_ai_message_pane_t1

0xaf1a,	// (0x00035512) list_ai_message_pane_t2_ParamLimits

0xaf1a,	// (0x00035512) list_ai_message_pane_t2

0xaf2f,	// (0x00035527) list_ai_message_pane_t3_ParamLimits

0xaf2f,	// (0x00035527) list_ai_message_pane_t3

0xaf44,	// (0x0003553c) list_ai_message_pane_t4_ParamLimits

0xaf44,	// (0x0003553c) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x00039f2b) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x00039f2b) list_ai_message_pane_t

0xaee0,	// (0x000354d8) cell_ai_soft_ind_pane_ParamLimits

0xaee0,	// (0x000354d8) cell_ai_soft_ind_pane

0x9571,	// (0x00033b69) cell_ai_soft_ind_pane_g1_ParamLimits

0x9571,	// (0x00033b69) cell_ai_soft_ind_pane_g1

0x7e88,	// (0x00032480) grid_highlight_cp1

0x957e,	// (0x00033b76) text_secondary_cp56_ParamLimits

0x957e,	// (0x00033b76) text_secondary_cp56

0xaeb5,	// (0x000354ad) example_general_pane_ParamLimits

0xaeb5,	// (0x000354ad) example_general_pane

0xaec1,	// (0x000354b9) example_parent_pane_g1_ParamLimits

0xaec1,	// (0x000354b9) example_parent_pane_g1

0xaecd,	// (0x000354c5) example_parent_pane_t1_ParamLimits

0xaecd,	// (0x000354c5) example_parent_pane_t1

0x5d9b,	// (0x00030393) popup_preview_text_window_ParamLimits

0x5d9b,	// (0x00030393) popup_preview_text_window

0x939b,	// (0x00033993) list_single_pane_cp2_g4

0x8299,	// (0x00032891) bg_popup_preview_window_pane_ParamLimits

0x8299,	// (0x00032891) bg_popup_preview_window_pane

0xac02,	// (0x000351fa) popup_preview_text_window_t1_ParamLimits

0xac02,	// (0x000351fa) popup_preview_text_window_t1

0xac20,	// (0x00035218) popup_preview_text_window_t2_ParamLimits

0xac20,	// (0x00035218) popup_preview_text_window_t2

0xac69,	// (0x00035261) popup_preview_text_window_t3_ParamLimits

0xac69,	// (0x00035261) popup_preview_text_window_t3

0xacae,	// (0x000352a6) popup_preview_text_window_t4_ParamLimits

0xacae,	// (0x000352a6) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x00039efa) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x00039efa) popup_preview_text_window_t

0xad2c,	// (0x00035324) scroll_pane_cp11

0x9cbe,	// (0x000342b6) bg_popup_preview_window_pane_g1

0xabc2,	// (0x000351ba) bg_popup_preview_window_pane_g2

0xabca,	// (0x000351c2) bg_popup_preview_window_pane_g3

0xabd2,	// (0x000351ca) bg_popup_preview_window_pane_g4

0xabda,	// (0x000351d2) bg_popup_preview_window_pane_g5

0xabe2,	// (0x000351da) bg_popup_preview_window_pane_g6

0xabea,	// (0x000351e2) bg_popup_preview_window_pane_g7

0xabf2,	// (0x000351ea) bg_popup_preview_window_pane_g8

0x48c1,	// (0x0002eeb9) aid_popup_width_pane

0x5d79,	// (0x00030371) popup_midp_note_alarm_window_ParamLimits

0x5d79,	// (0x00030371) popup_midp_note_alarm_window

0x87cb,	// (0x00032dc3) data_form_pane_ParamLimits

0x52a3,	// (0x0002f89b) form_field_data_pane_g1

0x52ad,	// (0x0002f8a5) form_field_data_pane_t1_ParamLimits

0x87d7,	// (0x00032dcf) input_focus_pane_ParamLimits

0x52c5,	// (0x0002f8bd) data_form_wide_pane_ParamLimits

0x52d6,	// (0x0002f8ce) form_field_data_wide_pane_g1

0x52e2,	// (0x0002f8da) form_field_data_wide_pane_t1_ParamLimits

0x8548,	// (0x00032b40) input_focus_pane_cp6_ParamLimits

0x88f1,	// (0x00032ee9) input_popup_find_pane_g1_ParamLimits

0x88f1,	// (0x00032ee9) input_popup_find_pane_g1

0x5519,	// (0x0002fb11) aid_navi_side_left_pane

0x552e,	// (0x0002fb26) aid_navi_side_right_pane

0xa5db,	// (0x00034bd3) bg_popup_window_pane_cp30_ParamLimits

0xa5db,	// (0x00034bd3) bg_popup_window_pane_cp30

0xa655,	// (0x00034c4d) popup_midp_note_alarm_window_g1_ParamLimits

0xa655,	// (0x00034c4d) popup_midp_note_alarm_window_g1

0xa685,	// (0x00034c7d) popup_midp_note_alarm_window_t1_ParamLimits

0xa685,	// (0x00034c7d) popup_midp_note_alarm_window_t1

0xa726,	// (0x00034d1e) popup_midp_note_alarm_window_t2_ParamLimits

0xa726,	// (0x00034d1e) popup_midp_note_alarm_window_t2

0xa7d4,	// (0x00034dcc) popup_midp_note_alarm_window_t3_ParamLimits

0xa7d4,	// (0x00034dcc) popup_midp_note_alarm_window_t3

0xa806,	// (0x00034dfe) popup_midp_note_alarm_window_t4_ParamLimits

0xa806,	// (0x00034dfe) popup_midp_note_alarm_window_t4

0xa82c,	// (0x00034e24) popup_midp_note_alarm_window_t5_ParamLimits

0xa82c,	// (0x00034e24) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00039e97) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00039e97) popup_midp_note_alarm_window_t

0xa8d8,	// (0x00034ed0) wait_bar_pane_cp1_ParamLimits

0xa8d8,	// (0x00034ed0) wait_bar_pane_cp1

0x7e88,	// (0x00032480) wait_anim_pane_copy1

0x7e88,	// (0x00032480) wait_border_pane_copy1

0xa2b5,	// (0x000348ad) wait_border_pane_g1_copy1

0x52fc,	// (0x0002f8f4) form_field_popup_pane_g1

0x5304,	// (0x0002f8fc) form_field_popup_pane_t1_ParamLimits

0x87d7,	// (0x00032dcf) input_focus_pane_cp7_ParamLimits

0x8805,	// (0x00032dfd) list_form_pane_ParamLimits

0x531c,	// (0x0002f914) form_field_popup_wide_pane_g1

0x5324,	// (0x0002f91c) form_field_popup_wide_pane_t1_ParamLimits

0x87d7,	// (0x00032dcf) input_focus_pane_cp8_ParamLimits

0x8811,	// (0x00032e09) list_form_wide_pane_ParamLimits

0xb3c8,	// (0x000359c0) aid_size_cell_graphic_pane

0x53ae,	// (0x0002f9a6) data_form_pane_t1_ParamLimits

0x7631,	// (0x00031c29) data_form_wide_pane_t1_ParamLimits

0x988b,	// (0x00033e83) bg_status_flat_pane

0x7ec8,	// (0x000324c0) title_pane_t1_ParamLimits

0x7f30,	// (0x00032528) title_pane_t2_ParamLimits

0x7f56,	// (0x0003254e) title_pane_t3_ParamLimits

0xf557,	// (0x00039b4f) title_pane_t_ParamLimits

0x8dc3,	// (0x000333bb) level_1_signal_ParamLimits

0x8dd5,	// (0x000333cd) level_2_signal_ParamLimits

0x8de8,	// (0x000333e0) level_3_signal_ParamLimits

0x8dfb,	// (0x000333f3) level_4_signal_ParamLimits

0x8e0e,	// (0x00033406) level_5_signal_ParamLimits

0x8e21,	// (0x00033419) level_6_signal_ParamLimits

0x8e34,	// (0x0003342c) level_7_signal_ParamLimits

0x8dc3,	// (0x000333bb) level_1_battery_ParamLimits

0x8dd5,	// (0x000333cd) level_2_battery_ParamLimits

0x8de8,	// (0x000333e0) level_3_battery_ParamLimits

0x8dfb,	// (0x000333f3) level_4_battery_ParamLimits

0x8e0e,	// (0x00033406) level_5_battery_ParamLimits

0x8e21,	// (0x00033419) level_6_battery_ParamLimits

0x8e34,	// (0x0003342c) level_7_battery_ParamLimits

0xa4e0,	// (0x00034ad8) bg_status_flat_pane_g1

0xa4e8,	// (0x00034ae0) bg_status_flat_pane_g2

0xa4f0,	// (0x00034ae8) bg_status_flat_pane_g3

0xa4f8,	// (0x00034af0) bg_status_flat_pane_g4

0xa500,	// (0x00034af8) bg_status_flat_pane_g5

0xa508,	// (0x00034b00) bg_status_flat_pane_g6

0xa510,	// (0x00034b08) bg_status_flat_pane_g7

0x7f7e,	// (0x00032576) tabs_3_active_pane_t1_ParamLimits

0x7f7e,	// (0x00032576) tabs_3_passive_pane_t1_ParamLimits

0x7f98,	// (0x00032590) tabs_4_active_pane_t1_ParamLimits

0x7f98,	// (0x00032590) tabs_4_1_passive_pane_t1_ParamLimits

0x8985,	// (0x00032f7d) tabs_2_active_pane_t1_ParamLimits

0x8985,	// (0x00032f7d) tabs_2_passive_pane_t1_ParamLimits

0x8997,	// (0x00032f8f) bg_active_tab_pane_cp4_ParamLimits

0x89a5,	// (0x00032f9d) tabs_2_long_active_pane_t1_ParamLimits

0x89b8,	// (0x00032fb0) bg_passive_tab_pane_cp4_ParamLimits

0x6054,	// (0x0003064c) list_single_midp_graphic_pane_t1_ParamLimits

0x8997,	// (0x00032f8f) bg_active_tab_pane_cp5_ParamLimits

0x89c4,	// (0x00032fbc) tabs_3_long_active_pane_t1_ParamLimits

0x89b8,	// (0x00032fb0) bg_passive_tab_pane_cp5_ParamLimits

0x6054,	// (0x0003064c) list_single_midp_graphic_pane_t1

0x988b,	// (0x00033e83) bg_status_flat_pane_ParamLimits

0x994e,	// (0x00033f46) indicator_pane_cp2_ParamLimits

0x994e,	// (0x00033f46) indicator_pane_cp2

0x9a79,	// (0x00034071) navi_pane_srt_ParamLimits

0x9a79,	// (0x00034071) navi_pane_srt

0x9a9d,	// (0x00034095) popup_clock_digital_analogue_window_cp1

0x8045,	// (0x0003263d) indicator_pane_t1

0x946a,	// (0x00033a62) copy_highlight_pane

0x946a,	// (0x00033a62) cursor_graphics_pane

0x946a,	// (0x00033a62) graphic_within_text_pane

0x946a,	// (0x00033a62) link_highlight_pane

0xacef,	// (0x000352e7) popup_preview_text_window_t5_ParamLimits

0xacef,	// (0x000352e7) popup_preview_text_window_t5

0x9598,	// (0x00033b90) cursor_digital_pane

0x9598,	// (0x00033b90) cursor_primary_pane

0x95a9,	// (0x00033ba1) cursor_primary_small_pane

0x95b1,	// (0x00033ba9) cursor_secondary_pane

0x95b9,	// (0x00033bb1) cursor_title_pane

0x9598,	// (0x00033b90) link_highlight_digital_pane

0x95a0,	// (0x00033b98) link_highlight_primary_pane

0x95a9,	// (0x00033ba1) link_highlight_primary_small_pane

0x95b1,	// (0x00033ba9) link_highlight_secondary_pane

0x95b9,	// (0x00033bb1) link_highlight_title_pane

0x9598,	// (0x00033b90) copy_highlight_digital_pane

0x9598,	// (0x00033b90) copy_highlight_primary_pane

0x95a9,	// (0x00033ba1) copy_highlight_primary_small_pane

0x95b1,	// (0x00033ba9) copy_highlight_secondary_pane

0x95b9,	// (0x00033bb1) copy_highlight_title_pane

0x95b1,	// (0x00033ba9) graphic_text_digital_pane

0xa57e,	// (0x00034b76) graphic_text_primary_pane

0xa587,	// (0x00034b7f) graphic_text_primary_small_pane

0x95a9,	// (0x00033ba1) graphic_text_secondary_pane

0x9598,	// (0x00033b90) graphic_text_title_pane

0x95c1,	// (0x00033bb9) cursor_primary_pane_g1

0xa570,	// (0x00034b68) cursor_text_primary_t1

0xa558,	// (0x00034b50) cursor_primary_small_pane_g1

0xa562,	// (0x00034b5a) cursor_text_primary_small_t1

0xa540,	// (0x00034b38) cursor_primary_small_pane_g1_copy1

0xa54a,	// (0x00034b42) cursor_text_primary_small_t1_copy1

0xa528,	// (0x00034b20) cursor_text_title_t1

0xa536,	// (0x00034b2e) cursor_title_pane_g1

0x95c1,	// (0x00033bb9) cursor_digital_pane_g1

0x95cb,	// (0x00033bc3) cursor_text_digital_t1

0x95f0,	// (0x00033be8) link_highlight_primary_pane_g1

0xa4d1,	// (0x00034ac9) link_highlight_primary_pane_t1

0x95d9,	// (0x00033bd1) link_highlight_primary_small_pane_g1

0x95e1,	// (0x00033bd9) link_highlight_primary_small_pane_t1

0x95f0,	// (0x00033be8) link_highlight_secondary_pane_g1

0x95f8,	// (0x00033bf0) link_highlight_secondary_pane_t1

0xa439,	// (0x00034a31) link_highlight_title_pane_g1

0xa441,	// (0x00034a39) link_highlight_title_pane_t1

0xa422,	// (0x00034a1a) link_highlight_digital_pane_g1

0xa42a,	// (0x00034a22) link_highlight_digital_pane_t1

0xa2fa,	// (0x000348f2) copy_highlight_primary_pane_g1

0xa302,	// (0x000348fa) copy_highlight_primary_pane_t1

0xa2d4,	// (0x000348cc) copy_highlight_primary_small_pane_g1

0xa2eb,	// (0x000348e3) copy_highlight_primary_small_pane_t1

0x9607,	// (0x00033bff) copy_highlight_secondary_pane_g1

0x960f,	// (0x00033c07) copy_highlight_secondary_pane_t1

0xa2d4,	// (0x000348cc) copy_highlight_title_pane_g1

0xa2dc,	// (0x000348d4) copy_highlight_title_pane_t1

0xa2fa,	// (0x000348f2) copy_highlight_digital_pane_g1

0xb596,	// (0x00035b8e) copy_highlight_digital_pane_t1

0xb4ea,	// (0x00035ae2) graphic_text_primary_pane_g1

0xb57a,	// (0x00035b72) graphic_text_primary_pane_t1

0xb588,	// (0x00035b80) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x00039fc6) graphic_text_primary_pane_t

0xb556,	// (0x00035b4e) graphic_text_primary_small_pane_g1

0xb55e,	// (0x00035b56) graphic_text_primary_small_pane_t1

0xb56c,	// (0x00035b64) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x00039fc1) graphic_text_primary_small_pane_t

0xb532,	// (0x00035b2a) graphic_text_secondary_pane_g1

0xb53a,	// (0x00035b32) graphic_text_secondary_pane_t1

0xb548,	// (0x00035b40) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x00039fbc) graphic_text_secondary_pane_t

0xb50e,	// (0x00035b06) graphic_text_title_pane_g1

0xb516,	// (0x00035b0e) graphic_text_title_pane_t1

0xb524,	// (0x00035b1c) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x00039fb7) graphic_text_title_pane_t

0xb4ea,	// (0x00035ae2) graphic_text_digital_pane_g1

0xb4f2,	// (0x00035aea) graphic_text_digital_pane_t1

0xb500,	// (0x00035af8) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x00039fb2) graphic_text_digital_pane_t

0x7f68,	// (0x00032560) navi_icon_pane_srt_ParamLimits

0x7f68,	// (0x00032560) navi_icon_pane_srt

0x7e88,	// (0x00032480) navi_midp_pane_srt

0x7e88,	// (0x00032480) navi_navi_pane_srt

0x7f68,	// (0x00032560) navi_text_pane_srt_ParamLimits

0x7f68,	// (0x00032560) navi_text_pane_srt

0xb4b5,	// (0x00035aad) navi_navi_icon_text_pane_srt

0xb4bd,	// (0x00035ab5) navi_navi_pane_srt_g1_ParamLimits

0xb4bd,	// (0x00035ab5) navi_navi_pane_srt_g1

0xb4cf,	// (0x00035ac7) navi_navi_pane_srt_g2_ParamLimits

0xb4cf,	// (0x00035ac7) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x00039fad) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x00039fad) navi_navi_pane_srt_g

0xb4e1,	// (0x00035ad9) navi_navi_tabs_pane_srt

0xb4b5,	// (0x00035aad) navi_navi_text_pane_srt

0xb4b5,	// (0x00035aad) navi_navi_volume_pane_srt

0xb4a6,	// (0x00035a9e) navi_navi_text_pane_srt_t1

0x63ce,	// (0x000309c6) navi_navi_volume_pane_srt_g1

0x63d6,	// (0x000309ce) volume_small_pane_srt_ParamLimits

0x63d6,	// (0x000309ce) volume_small_pane_srt

0x57f9,	// (0x0002fdf1) volume_small_pane_srt_g1_ParamLimits

0x57f9,	// (0x0002fdf1) volume_small_pane_srt_g1

0x5809,	// (0x0002fe01) volume_small_pane_srt_g2_ParamLimits

0x5809,	// (0x0002fe01) volume_small_pane_srt_g2

0x581a,	// (0x0002fe12) volume_small_pane_srt_g3_ParamLimits

0x581a,	// (0x0002fe12) volume_small_pane_srt_g3

0x582b,	// (0x0002fe23) volume_small_pane_srt_g4_ParamLimits

0x582b,	// (0x0002fe23) volume_small_pane_srt_g4

0x583c,	// (0x0002fe34) volume_small_pane_srt_g5_ParamLimits

0x583c,	// (0x0002fe34) volume_small_pane_srt_g5

0x584d,	// (0x0002fe45) volume_small_pane_srt_g6_ParamLimits

0x584d,	// (0x0002fe45) volume_small_pane_srt_g6

0x585e,	// (0x0002fe56) volume_small_pane_srt_g7_ParamLimits

0x585e,	// (0x0002fe56) volume_small_pane_srt_g7

0x586f,	// (0x0002fe67) volume_small_pane_srt_g8_ParamLimits

0x586f,	// (0x0002fe67) volume_small_pane_srt_g8

0x5880,	// (0x0002fe78) volume_small_pane_srt_g9_ParamLimits

0x5880,	// (0x0002fe78) volume_small_pane_srt_g9

0x5891,	// (0x0002fe89) volume_small_pane_srt_g10_ParamLimits

0x5891,	// (0x0002fe89) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00039d55) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00039d55) volume_small_pane_srt_g

0x8342,	// (0x0003293a) query_popup_data_pane_cp2

0xb48c,	// (0x00035a84) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb48c,	// (0x00035a84) navi_navi_icon_text_pane_srt_t1

0xa57e,	// (0x00034b76) navi_tabs_2_long_pane_srt

0xa57e,	// (0x00034b76) navi_tabs_2_pane_srt

0xa57e,	// (0x00034b76) navi_tabs_3_long_pane_srt

0xa57e,	// (0x00034b76) navi_tabs_3_pane_srt

0xa57e,	// (0x00034b76) navi_tabs_4_pane_srt

0x63ae,	// (0x000309a6) tabs_2_active_pane_srt_ParamLimits

0x63ae,	// (0x000309a6) tabs_2_active_pane_srt

0x63be,	// (0x000309b6) tabs_2_passive_pane_srt_ParamLimits

0x63be,	// (0x000309b6) tabs_2_passive_pane_srt

0x97b4,	// (0x00033dac) bg_passive_tab_pane_cp1_srt_ParamLimits

0x97b4,	// (0x00033dac) bg_passive_tab_pane_cp1_srt

0xb458,	// (0x00035a50) bg_passive_tab_pane_g1_cp1_srt

0x90ac,	// (0x000336a4) bg_passive_tab_pane_g2_cp1_srt

0xb461,	// (0x00035a59) bg_passive_tab_pane_g3_cp1_srt

0x7f68,	// (0x00032560) bg_active_tab_pane_cp1_srt_ParamLimits

0x7f68,	// (0x00032560) bg_active_tab_pane_cp1_srt

0xb46a,	// (0x00035a62) tabs_2_active_pane_srt_g1

0xb472,	// (0x00035a6a) tabs_2_active_pane_srt_t1_ParamLimits

0xb472,	// (0x00035a6a) tabs_2_active_pane_srt_t1

0xb458,	// (0x00035a50) bg_active_tab_pane_g1_cp1_srt

0x90ac,	// (0x000336a4) bg_active_tab_pane_g2_cp1_srt

0xb461,	// (0x00035a59) bg_active_tab_pane_g3_cp1_srt

0x637b,	// (0x00030973) tabs_3_active_pane_srt_ParamLimits

0x637b,	// (0x00030973) tabs_3_active_pane_srt

0x638c,	// (0x00030984) tabs_3_passive_pane_cp_srt_ParamLimits

0x638c,	// (0x00030984) tabs_3_passive_pane_cp_srt

0x639d,	// (0x00030995) tabs_3_passive_pane_srt_ParamLimits

0x639d,	// (0x00030995) tabs_3_passive_pane_srt

0x97b4,	// (0x00033dac) bg_passive_tab_pane_cp2_srt_ParamLimits

0x97b4,	// (0x00033dac) bg_passive_tab_pane_cp2_srt

0x961e,	// (0x00033c16) bg_passive_tab_pane_g1_cp2_srt

0x90ac,	// (0x000336a4) bg_passive_tab_pane_g2_cp2_srt

0x9627,	// (0x00033c1f) bg_passive_tab_pane_g3_cp2_srt

0x7f68,	// (0x00032560) bg_active_tab_pane_cp2_srt_ParamLimits

0x7f68,	// (0x00032560) bg_active_tab_pane_cp2_srt

0xb43e,	// (0x00035a36) tabs_3_active_pane_srt_g1

0xb446,	// (0x00035a3e) tabs_3_active_pane_srt_t1_ParamLimits

0xb446,	// (0x00035a3e) tabs_3_active_pane_srt_t1

0x961e,	// (0x00033c16) bg_active_tab_pane_g1_cp2_srt

0x90ac,	// (0x000336a4) bg_active_tab_pane_g2_cp2_srt

0x9627,	// (0x00033c1f) bg_active_tab_pane_g3_cp2_srt

0x6333,	// (0x0003092b) tabs_4_active_pane_srt_ParamLimits

0x6333,	// (0x0003092b) tabs_4_active_pane_srt

0x6345,	// (0x0003093d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6345,	// (0x0003093d) tabs_4_passive_pane_cp2_srt

0x5a00,	// (0x0002fff8) aid_size_cell_toolbar

0x89b8,	// (0x00032fb0) main_idle_act_pane_ParamLimits

0x5baf,	// (0x000301a7) popup_large_graphic_colour_window_ParamLimits

0x5f16,	// (0x0003050e) popup_toolbar_window_ParamLimits

0x5f16,	// (0x0003050e) popup_toolbar_window

0xb251,	// (0x00035849) list_single_graphic_2heading_pane_ParamLimits

0xb251,	// (0x00035849) list_single_graphic_2heading_pane

0x8b74,	// (0x0003316c) aid_size_cell_apps_grid_lsc_pane

0x8b86,	// (0x0003317e) aid_size_cell_apps_grid_prt_pane

0x97b4,	// (0x00033dac) bg_wml_button_pane_cp1_ParamLimits

0x97b4,	// (0x00033dac) bg_wml_button_pane_cp1

0x9f5f,	// (0x00034557) form_midp_field_text_pane_t1_ParamLimits

0x9d32,	// (0x0003432a) input_focus_pane_cp050_ParamLimits

0x9f93,	// (0x0003458b) list_midp_form_text_pane_ParamLimits

0x9f3c,	// (0x00034534) input_focus_pane_cp051_ParamLimits

0x9f50,	// (0x00034548) list_midp_choice_pane_ParamLimits

0x9deb,	// (0x000343e3) list_single_2graphic_pane_cp3_ParamLimits

0x9deb,	// (0x000343e3) list_single_2graphic_pane_cp3

0x9e0c,	// (0x00034404) list_single_midp_graphic_pane_ParamLimits

0x9e0c,	// (0x00034404) list_single_midp_graphic_pane

0x484b,	// (0x0002ee43) list_single_graphic_2heading_pane_g1_ParamLimits

0x484b,	// (0x0002ee43) list_single_graphic_2heading_pane_g1

0x4857,	// (0x0002ee4f) list_single_graphic_2heading_pane_g4_ParamLimits

0x4857,	// (0x0002ee4f) list_single_graphic_2heading_pane_g4

0x4863,	// (0x0002ee5b) list_single_graphic_2heading_pane_g5_ParamLimits

0x4863,	// (0x0002ee5b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x00039da8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x00039da8) list_single_graphic_2heading_pane_g

0x486f,	// (0x0002ee67) list_single_graphic_2heading_pane_t1_ParamLimits

0x486f,	// (0x0002ee67) list_single_graphic_2heading_pane_t1

0x4883,	// (0x0002ee7b) list_single_graphic_2heading_pane_t2_ParamLimits

0x4883,	// (0x0002ee7b) list_single_graphic_2heading_pane_t2

0x489d,	// (0x0002ee95) list_single_graphic_2heading_pane_t3_ParamLimits

0x489d,	// (0x0002ee95) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x00039daf) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x00039daf) list_single_graphic_2heading_pane_t

0x9bfc,	// (0x000341f4) bg_popup_sub_pane_cp2

0x9c26,	// (0x0003421e) grid_toobar_pane

0x5fc3,	// (0x000305bb) cell_toolbar_pane_ParamLimits

0x5fc3,	// (0x000305bb) cell_toolbar_pane

0x9c62,	// (0x0003425a) cell_toolbar_pane_g1_ParamLimits

0x9c62,	// (0x0003425a) cell_toolbar_pane_g1

0x9c76,	// (0x0003426e) cell_toolbar_pane_g2_ParamLimits

0x9c76,	// (0x0003426e) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x00039dbd) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x00039dbd) cell_toolbar_pane_g

0x9c98,	// (0x00034290) grid_highlight_pane_cp2_ParamLimits

0x9c98,	// (0x00034290) grid_highlight_pane_cp2

0x9cb2,	// (0x000342aa) toolbar_button_pane

0x9cbe,	// (0x000342b6) toolbar_button_pane_g1

0x9cce,	// (0x000342c6) toolbar_button_pane_g2

0x9cc6,	// (0x000342be) toolbar_button_pane_g3

0x9cd6,	// (0x000342ce) toolbar_button_pane_g4

0x9cde,	// (0x000342d6) toolbar_button_pane_g5

0x9ce6,	// (0x000342de) toolbar_button_pane_g6

0x9cee,	// (0x000342e6) toolbar_button_pane_g7

0x9cf6,	// (0x000342ee) toolbar_button_pane_g8

0x9cfe,	// (0x000342f6) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x00039dc2) toolbar_button_pane_g

0x5ffb,	// (0x000305f3) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5ffb,	// (0x000305f3) list_single_2graphic_pane_g1_cp3

0x6007,	// (0x000305ff) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6007,	// (0x000305ff) list_single_2graphic_pane_g2_cp3

0x6018,	// (0x00030610) list_single_2graphic_pane_g3_cp3

0x6020,	// (0x00030618) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6020,	// (0x00030618) list_single_2graphic_pane_g4_cp3

0x602c,	// (0x00030624) list_single_2graphic_pane_t1_cp3_ParamLimits

0x602c,	// (0x00030624) list_single_2graphic_pane_t1_cp3

0x6048,	// (0x00030640) list_single_midp_graphic_pane_g2_ParamLimits

0x6048,	// (0x00030640) list_single_midp_graphic_pane_g2

0x5a08,	// (0x00030000) aid_zoom_text_primary

0x482f,	// (0x0002ee27) aid_zoom_text_secondary

0x96d8,	// (0x00033cd0) status_small_pane_g7_ParamLimits

0x96d8,	// (0x00033cd0) status_small_pane_g7

0x96fb,	// (0x00033cf3) status_small_pane_t1_ParamLimits

0x7e9f,	// (0x00032497) title_pane_g2

0x0003,

0xf54e,	// (0x00039b46) title_pane_g

0x83e6,	// (0x000329de) aid_size_cell_colour_1_pane_ParamLimits

0x83e6,	// (0x000329de) aid_size_cell_colour_1_pane

0x83fa,	// (0x000329f2) aid_size_cell_colour_2_pane_ParamLimits

0x83fa,	// (0x000329f2) aid_size_cell_colour_2_pane

0x840e,	// (0x00032a06) aid_size_cell_colour_3_pane_ParamLimits

0x840e,	// (0x00032a06) aid_size_cell_colour_3_pane

0x8422,	// (0x00032a1a) aid_size_cell_colour_4_pane_ParamLimits

0x8422,	// (0x00032a1a) aid_size_cell_colour_4_pane

0x5456,	// (0x0002fa4e) title_pane_stacon_g1_ParamLimits

0x5456,	// (0x0002fa4e) title_pane_stacon_g1

0xa359,	// (0x00034951) popup_note_wait_window_g3_ParamLimits

0xa359,	// (0x00034951) popup_note_wait_window_g3

0xa3cf,	// (0x000349c7) popup_note_wait_window_t5_ParamLimits

0xa3cf,	// (0x000349c7) popup_note_wait_window_t5

0x7e88,	// (0x00032480) main_feb_china_hwr_fs_writing_pane

0x5a92,	// (0x0003008a) popup_feb_china_hwr_fs_window_ParamLimits

0x5a92,	// (0x0003008a) popup_feb_china_hwr_fs_window

0x606a,	// (0x00030662) aid_size_cell_hwr_fs_ParamLimits

0x606a,	// (0x00030662) aid_size_cell_hwr_fs

0x9d32,	// (0x0003432a) bg_popup_sub_pane_cp3_ParamLimits

0x9d32,	// (0x0003432a) bg_popup_sub_pane_cp3

0x607f,	// (0x00030677) grid_hwr_fs_pane_ParamLimits

0x607f,	// (0x00030677) grid_hwr_fs_pane

0x6097,	// (0x0003068f) linegrid_hwr_fs_pane_ParamLimits

0x6097,	// (0x0003068f) linegrid_hwr_fs_pane

0x60a7,	// (0x0003069f) cell_hwr_fs_pane_ParamLimits

0x60a7,	// (0x0003069f) cell_hwr_fs_pane

0x9d3e,	// (0x00034336) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d3e,	// (0x00034336) linegrid_hwr_fs_pane_g1

0x9d4a,	// (0x00034342) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d4a,	// (0x00034342) linegrid_hwr_fs_pane_g2

0x9d5c,	// (0x00034354) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d5c,	// (0x00034354) linegrid_hwr_fs_pane_g3

0x60c9,	// (0x000306c1) linegrid_hwr_fs_pane_g4_ParamLimits

0x60c9,	// (0x000306c1) linegrid_hwr_fs_pane_g4

0x60e3,	// (0x000306db) linegrid_hwr_fs_pane_g5_ParamLimits

0x60e3,	// (0x000306db) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x00039ded) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x00039ded) linegrid_hwr_fs_pane_g

0x9d68,	// (0x00034360) cell_hwr_fs_pane_g1_ParamLimits

0x9d68,	// (0x00034360) cell_hwr_fs_pane_g1

0x9b33,	// (0x0003412b) cell_hwr_fs_pane_g2_ParamLimits

0x9b33,	// (0x0003412b) cell_hwr_fs_pane_g2

0x9d7e,	// (0x00034376) cell_hwr_fs_pane_g3_ParamLimits

0x9d7e,	// (0x00034376) cell_hwr_fs_pane_g3

0x9d8b,	// (0x00034383) cell_hwr_fs_pane_g4_ParamLimits

0x9d8b,	// (0x00034383) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x00039df8) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00039df8) cell_hwr_fs_pane_g

0x60f9,	// (0x000306f1) cell_hwr_fs_pane_t1

0x7e88,	// (0x00032480) grid_highlight_pane_cp6

0x7e88,	// (0x00032480) main_idle_act2_pane

0x892b,	// (0x00032f23) aid_inside_area_popup_secondary

0xaa12,	// (0x0003500a) aid_inside_area_window_primary_ParamLimits

0xaa12,	// (0x0003500a) aid_inside_area_window_primary

0xb5a5,	// (0x00035b9d) ai2_news_ticker_pane

0xb5ad,	// (0x00035ba5) aid_size_cell_ai1_link_ParamLimits

0xb5ad,	// (0x00035ba5) aid_size_cell_ai1_link

0xb5c7,	// (0x00035bbf) popup_ai2_data_window_ParamLimits

0xb5c7,	// (0x00035bbf) popup_ai2_data_window

0xb5dd,	// (0x00035bd5) popup_ai2_link_window_ParamLimits

0xb5dd,	// (0x00035bd5) popup_ai2_link_window

0x9d32,	// (0x0003432a) bg_popup_sub_pane_cp4_ParamLimits

0x9d32,	// (0x0003432a) bg_popup_sub_pane_cp4

0xb5f1,	// (0x00035be9) grid_ai2_link_pane_ParamLimits

0xb5f1,	// (0x00035be9) grid_ai2_link_pane

0xb608,	// (0x00035c00) popup_ai2_link_window_g1_ParamLimits

0xb608,	// (0x00035c00) popup_ai2_link_window_g1

0xb614,	// (0x00035c0c) popup_ai2_link_window_g2_ParamLimits

0xb614,	// (0x00035c0c) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x00039fcb) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x00039fcb) popup_ai2_link_window_g

0xb623,	// (0x00035c1b) ai2_mp_button_pane

0xb62b,	// (0x00035c23) ai2_mp_volume_pane

0x9f3c,	// (0x00034534) bg_popup_sub_pane_cp5_ParamLimits

0x9f3c,	// (0x00034534) bg_popup_sub_pane_cp5

0xb633,	// (0x00035c2b) heading_ai2_gene_pane_ParamLimits

0xb633,	// (0x00035c2b) heading_ai2_gene_pane

0xb63f,	// (0x00035c37) list_ai2_gene_pane_ParamLimits

0xb63f,	// (0x00035c37) list_ai2_gene_pane

0xb687,	// (0x00035c7f) cell_ai2_link_pane_ParamLimits

0xb687,	// (0x00035c7f) cell_ai2_link_pane

0xb69d,	// (0x00035c95) cell_ai2_link_pane_g1

0x7e88,	// (0x00032480) grid_highlight_pane_cp7

0x63eb,	// (0x000309e3) ai2_mp_volume_pane_g1

0xb76d,	// (0x00035d65) ai2_mp_volume_pane_g2

0xb6e2,	// (0x00035cda) list_ai2_gene_pane_t1

0xb775,	// (0x00035d6d) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x00039fe4) ai2_mp_volume_pane_g

0x63f3,	// (0x000309eb) volume_small_pane_cp3

0xb77d,	// (0x00035d75) aid_size_cell_ai2_button

0xb785,	// (0x00035d7d) grid_ai2_button_pane

0xb78e,	// (0x00035d86) cell_ai2_button_pane_ParamLimits

0xb78e,	// (0x00035d86) cell_ai2_button_pane

0x7e7e,	// (0x00032476) cell_ai2_button_pane_g1

0x7e88,	// (0x00032480) grid_highlight_pane_cp8

0xb72d,	// (0x00035d25) ai2_gene_pane_t1_ParamLimits

0xb72d,	// (0x00035d25) ai2_gene_pane_t1

0x59f6,	// (0x0002ffee) aid_height_parent_landscape

0xb088,	// (0x00035680) aid_height_set_list

0xb099,	// (0x00035691) aid_size_parent

0xb3c8,	// (0x000359c0) aid_size_cell_graphic_pane_ParamLimits

0xb64f,	// (0x00035c47) popup_ai2_data_window_g1_ParamLimits

0xb64f,	// (0x00035c47) popup_ai2_data_window_g1

0xb65b,	// (0x00035c53) ai2_news_ticker_pane_g1

0xb663,	// (0x00035c5b) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x00039fd0) ai2_news_ticker_pane_g

0xb66b,	// (0x00035c63) ai2_news_ticker_pane_t1

0xb679,	// (0x00035c71) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x00039fd5) ai2_news_ticker_pane_t

0xb6a6,	// (0x00035c9e) heading_ai2_gene_pane_g1

0xb6ae,	// (0x00035ca6) heading_ai2_gene_pane_t1_ParamLimits

0xb6ae,	// (0x00035ca6) heading_ai2_gene_pane_t1

0xb6c3,	// (0x00035cbb) list_highlight_pane_cp6

0xb6cb,	// (0x00035cc3) ai2_gene_pane_ParamLimits

0xb6cb,	// (0x00035cc3) ai2_gene_pane

0xb6f0,	// (0x00035ce8) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x00039fda) list_ai2_gene_pane_t

0xb6fe,	// (0x00035cf6) list_highlight_pane_cp8_ParamLimits

0xb6fe,	// (0x00035cf6) list_highlight_pane_cp8

0xb70f,	// (0x00035d07) ai2_gene_pane_g1_ParamLimits

0xb70f,	// (0x00035d07) ai2_gene_pane_g1

0xb721,	// (0x00035d19) ai2_gene_pane_g2_ParamLimits

0xb721,	// (0x00035d19) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x00039fdf) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x00039fdf) ai2_gene_pane_g

0x876d,	// (0x00032d65) scroll_pane_cp12

0x59b3,	// (0x0002ffab) control_pane_t3_ParamLimits

0x59b3,	// (0x0002ffab) control_pane_t3

0x96ec,	// (0x00033ce4) status_small_pane_g8_ParamLimits

0x96ec,	// (0x00033ce4) status_small_pane_g8

0x5b78,	// (0x00030170) popup_find_window_ParamLimits

0x5d8d,	// (0x00030385) popup_note_image_window_ParamLimits

0x74f3,	// (0x00031aeb) list_double2_graphic_pane_vc_g1_ParamLimits

0x74f3,	// (0x00031aeb) list_double2_graphic_pane_vc_g1

0x74ff,	// (0x00031af7) list_double2_graphic_pane_vc_g2_ParamLimits

0x74ff,	// (0x00031af7) list_double2_graphic_pane_vc_g2

0x750b,	// (0x00031b03) list_double2_graphic_pane_vc_g3_ParamLimits

0x750b,	// (0x00031b03) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x00039db6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x00039db6) list_double2_graphic_pane_vc_g

0x7517,	// (0x00031b0f) list_double2_graphic_pane_vc_t1_ParamLimits

0x7517,	// (0x00031b0f) list_double2_graphic_pane_vc_t1

0x74ff,	// (0x00031af7) list_single_heading_pane_vc_g1_ParamLimits

0x74ff,	// (0x00031af7) list_single_heading_pane_vc_g1

0x750b,	// (0x00031b03) list_single_heading_pane_vc_g2_ParamLimits

0x750b,	// (0x00031b03) list_single_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x00039dd7) list_single_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x00039dd7) list_single_heading_pane_vc_g

0x752d,	// (0x00031b25) list_single_heading_pane_vc_t1_ParamLimits

0x752d,	// (0x00031b25) list_single_heading_pane_vc_t1

0x7543,	// (0x00031b3b) list_single_heading_pane_vc_t2_ParamLimits

0x7543,	// (0x00031b3b) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x00039ddc) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x00039ddc) list_single_heading_pane_vc_t

0x7555,	// (0x00031b4d) list_setting_number_pane_vc_g1_ParamLimits

0x7555,	// (0x00031b4d) list_setting_number_pane_vc_g1

0x7561,	// (0x00031b59) list_setting_number_pane_vc_g2_ParamLimits

0x7561,	// (0x00031b59) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x00039de1) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x00039de1) list_setting_number_pane_vc_g

0x756d,	// (0x00031b65) list_setting_number_pane_vc_t1_ParamLimits

0x756d,	// (0x00031b65) list_setting_number_pane_vc_t1

0x7581,	// (0x00031b79) list_setting_number_pane_vc_t2_ParamLimits

0x7581,	// (0x00031b79) list_setting_number_pane_vc_t2

0x759d,	// (0x00031b95) list_setting_number_pane_vc_t3_ParamLimits

0x759d,	// (0x00031b95) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x00039de6) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x00039de6) list_setting_number_pane_vc_t

0x75bb,	// (0x00031bb3) set_value_pane_vc_ParamLimits

0x75bb,	// (0x00031bb3) set_value_pane_vc

0xb251,	// (0x00035849) list_double2_graphic_pane_vc_ParamLimits

0xb251,	// (0x00035849) list_double2_graphic_pane_vc

0xb251,	// (0x00035849) list_double2_large_graphic_pane_vc_ParamLimits

0xb251,	// (0x00035849) list_double2_large_graphic_pane_vc

0xb251,	// (0x00035849) list_double2_pane_vc_ParamLimits

0xb251,	// (0x00035849) list_double2_pane_vc

0xb251,	// (0x00035849) list_double_graphic_heading_pane_vc_ParamLimits

0xb251,	// (0x00035849) list_double_graphic_heading_pane_vc

0xb251,	// (0x00035849) list_double_graphic_pane_vc_ParamLimits

0xb251,	// (0x00035849) list_double_graphic_pane_vc

0xb251,	// (0x00035849) list_double_heading_pane_vc_ParamLimits

0xb251,	// (0x00035849) list_double_heading_pane_vc

0xb263,	// (0x0003585b) list_double_large_graphic_pane_vc_ParamLimits

0xb263,	// (0x0003585b) list_double_large_graphic_pane_vc

0xb251,	// (0x00035849) list_double_number_pane_vc_ParamLimits

0xb251,	// (0x00035849) list_double_number_pane_vc

0xb251,	// (0x00035849) list_double_pane_vc_ParamLimits

0xb251,	// (0x00035849) list_double_pane_vc

0xb251,	// (0x00035849) list_double_time_pane_vc_ParamLimits

0xb251,	// (0x00035849) list_double_time_pane_vc

0xb251,	// (0x00035849) list_setting_number_pane_vc_ParamLimits

0xb251,	// (0x00035849) list_setting_number_pane_vc

0xb251,	// (0x00035849) list_setting_pane_vc_ParamLimits

0xb251,	// (0x00035849) list_setting_pane_vc

0xb251,	// (0x00035849) list_single_graphic_heading_pane_vc_ParamLimits

0xb251,	// (0x00035849) list_single_graphic_heading_pane_vc

0xb251,	// (0x00035849) list_single_heading_pane_vc_ParamLimits

0xb251,	// (0x00035849) list_single_heading_pane_vc

0x7691,	// (0x00031c89) list_single_number_heading_pane_vc_ParamLimits

0x7691,	// (0x00031c89) list_single_number_heading_pane_vc

0x74f3,	// (0x00031aeb) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x74f3,	// (0x00031aeb) list_double_graphic_heading_pane_vc_g1

0x74ff,	// (0x00031af7) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x74ff,	// (0x00031af7) list_double_graphic_heading_pane_vc_g2

0x750b,	// (0x00031b03) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x750b,	// (0x00031b03) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x00039db6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x00039db6) list_double_graphic_heading_pane_vc_g

0x7712,	// (0x00031d0a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7712,	// (0x00031d0a) list_double_graphic_heading_pane_vc_t1

0x772e,	// (0x00031d26) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x772e,	// (0x00031d26) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x00039feb) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x00039feb) list_double_graphic_heading_pane_vc_t

0x7555,	// (0x00031b4d) list_setting_pane_vc_g1_ParamLimits

0x7555,	// (0x00031b4d) list_setting_pane_vc_g1

0x7561,	// (0x00031b59) list_setting_pane_vc_g2_ParamLimits

0x7561,	// (0x00031b59) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x00039de1) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x00039de1) list_setting_pane_vc_g

0x774c,	// (0x00031d44) list_setting_pane_vc_t1_ParamLimits

0x774c,	// (0x00031d44) list_setting_pane_vc_t1

0x7768,	// (0x00031d60) list_setting_pane_vc_t2_ParamLimits

0x7768,	// (0x00031d60) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0003a019) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0003a019) list_setting_pane_vc_t

0x75bb,	// (0x00031bb3) set_value_pane_cp_vc_ParamLimits

0x75bb,	// (0x00031bb3) set_value_pane_cp_vc

0x74ff,	// (0x00031af7) list_single_number_heading_pane_vc_g1_ParamLimits

0x74ff,	// (0x00031af7) list_single_number_heading_pane_vc_g1

0x750b,	// (0x00031b03) list_single_number_heading_pane_vc_g2_ParamLimits

0x750b,	// (0x00031b03) list_single_number_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x00039dd7) list_single_number_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x00039dd7) list_single_number_heading_pane_vc_g

0x7784,	// (0x00031d7c) list_single_number_heading_pane_vc_t1_ParamLimits

0x7784,	// (0x00031d7c) list_single_number_heading_pane_vc_t1

0x779a,	// (0x00031d92) list_single_number_heading_pane_vc_t2_ParamLimits

0x779a,	// (0x00031d92) list_single_number_heading_pane_vc_t2

0x77ac,	// (0x00031da4) list_single_number_heading_pane_vc_t3_ParamLimits

0x77ac,	// (0x00031da4) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0003a01e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0003a01e) list_single_number_heading_pane_vc_t

0x74f3,	// (0x00031aeb) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x74f3,	// (0x00031aeb) list_single_graphic_heading_pane_vc_g1

0x74ff,	// (0x00031af7) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x74ff,	// (0x00031af7) list_single_graphic_heading_pane_vc_g4

0x750b,	// (0x00031b03) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x750b,	// (0x00031b03) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x00039db6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x00039db6) list_single_graphic_heading_pane_vc_g

0x77be,	// (0x00031db6) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x77be,	// (0x00031db6) list_single_graphic_heading_pane_vc_t1

0x77d4,	// (0x00031dcc) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x77d4,	// (0x00031dcc) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0003a025) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0003a025) list_single_graphic_heading_pane_vc_t

0x74ff,	// (0x00031af7) list_double2_pane_vc_g1_ParamLimits

0x74ff,	// (0x00031af7) list_double2_pane_vc_g1

0x750b,	// (0x00031b03) list_double2_pane_vc_g2_ParamLimits

0x750b,	// (0x00031b03) list_double2_pane_vc_g2

0x0001,

0xf7df,	// (0x00039dd7) list_double2_pane_vc_g_ParamLimits

0xf7df,	// (0x00039dd7) list_double2_pane_vc_g

0x77e6,	// (0x00031dde) list_double2_pane_vc_t1_ParamLimits

0x77e6,	// (0x00031dde) list_double2_pane_vc_t1

0x77fc,	// (0x00031df4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x77fc,	// (0x00031df4) list_double2_large_graphic_pane_vc_g1

0x74ff,	// (0x00031af7) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x74ff,	// (0x00031af7) list_double2_large_graphic_pane_vc_g2

0x750b,	// (0x00031b03) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x750b,	// (0x00031b03) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa32,	// (0x0003a02a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa32,	// (0x0003a02a) list_double2_large_graphic_pane_vc_g

0x7808,	// (0x00031e00) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7808,	// (0x00031e00) list_double2_large_graphic_pane_vc_t1

0x781e,	// (0x00031e16) list_double_time_pane_vc_g1_ParamLimits

0x781e,	// (0x00031e16) list_double_time_pane_vc_g1

0x782a,	// (0x00031e22) list_double_time_pane_vc_g2_ParamLimits

0x782a,	// (0x00031e22) list_double_time_pane_vc_g2

0x0001,

0xfa39,	// (0x0003a031) list_double_time_pane_vc_g_ParamLimits

0xfa39,	// (0x0003a031) list_double_time_pane_vc_g

0x7836,	// (0x00031e2e) list_double_time_pane_vc_t1_ParamLimits

0x7836,	// (0x00031e2e) list_double_time_pane_vc_t1

0x785a,	// (0x00031e52) list_double_time_pane_vc_t2_ParamLimits

0x785a,	// (0x00031e52) list_double_time_pane_vc_t2

0x78a9,	// (0x00031ea1) list_double_time_pane_vc_t3_ParamLimits

0x78a9,	// (0x00031ea1) list_double_time_pane_vc_t3

0x78bb,	// (0x00031eb3) list_double_time_pane_vc_t4_ParamLimits

0x78bb,	// (0x00031eb3) list_double_time_pane_vc_t4

0x0003,

0xfa3e,	// (0x0003a036) list_double_time_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003a036) list_double_time_pane_vc_t

0x74ff,	// (0x00031af7) list_double_pane_vc_g1_ParamLimits

0x74ff,	// (0x00031af7) list_double_pane_vc_g1

0x750b,	// (0x00031b03) list_double_pane_vc_g2_ParamLimits

0x750b,	// (0x00031b03) list_double_pane_vc_g2

0x0001,

0xf7df,	// (0x00039dd7) list_double_pane_vc_g_ParamLimits

0xf7df,	// (0x00039dd7) list_double_pane_vc_g

0x78cf,	// (0x00031ec7) list_double_pane_vc_t1_ParamLimits

0x78cf,	// (0x00031ec7) list_double_pane_vc_t1

0x78e3,	// (0x00031edb) list_double_pane_vc_t2_ParamLimits

0x78e3,	// (0x00031edb) list_double_pane_vc_t2

0x0001,

0xfa47,	// (0x0003a03f) list_double_pane_vc_t_ParamLimits

0xfa47,	// (0x0003a03f) list_double_pane_vc_t

0x74ff,	// (0x00031af7) list_double_number_pane_vc_g1_ParamLimits

0x74ff,	// (0x00031af7) list_double_number_pane_vc_g1

0x750b,	// (0x00031b03) list_double_number_pane_vc_g2_ParamLimits

0x750b,	// (0x00031b03) list_double_number_pane_vc_g2

0x0001,

0xf7df,	// (0x00039dd7) list_double_number_pane_vc_g_ParamLimits

0xf7df,	// (0x00039dd7) list_double_number_pane_vc_g

0x78fb,	// (0x00031ef3) list_double_number_pane_vc_t1_ParamLimits

0x78fb,	// (0x00031ef3) list_double_number_pane_vc_t1

0x790d,	// (0x00031f05) list_double_number_pane_vc_t2_ParamLimits

0x790d,	// (0x00031f05) list_double_number_pane_vc_t2

0x7921,	// (0x00031f19) list_double_number_pane_vc_t3_ParamLimits

0x7921,	// (0x00031f19) list_double_number_pane_vc_t3

0x0002,

0xfa4c,	// (0x0003a044) list_double_number_pane_vc_t_ParamLimits

0xfa4c,	// (0x0003a044) list_double_number_pane_vc_t

0x7939,	// (0x00031f31) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7939,	// (0x00031f31) list_double_large_graphic_pane_vc_g1

0x795b,	// (0x00031f53) list_double_large_graphic_pane_vc_g2_ParamLimits

0x795b,	// (0x00031f53) list_double_large_graphic_pane_vc_g2

0x796f,	// (0x00031f67) list_double_large_graphic_pane_vc_g3_ParamLimits

0x796f,	// (0x00031f67) list_double_large_graphic_pane_vc_g3

0x797e,	// (0x00031f76) list_double_large_graphic_pane_vc_g4_ParamLimits

0x797e,	// (0x00031f76) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa53,	// (0x0003a04b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x0003a04b) list_double_large_graphic_pane_vc_g

0x798a,	// (0x00031f82) list_double_large_graphic_pane_vc_t1_ParamLimits

0x798a,	// (0x00031f82) list_double_large_graphic_pane_vc_t1

0x79a6,	// (0x00031f9e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x79a6,	// (0x00031f9e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5c,	// (0x0003a054) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5c,	// (0x0003a054) list_double_large_graphic_pane_vc_t

0x74ff,	// (0x00031af7) list_double_heading_pane_vc_g1_ParamLimits

0x74ff,	// (0x00031af7) list_double_heading_pane_vc_g1

0x750b,	// (0x00031b03) list_double_heading_pane_vc_g2_ParamLimits

0x750b,	// (0x00031b03) list_double_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x00039dd7) list_double_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x00039dd7) list_double_heading_pane_vc_g

0x79c8,	// (0x00031fc0) list_double_heading_pane_vc_t1_ParamLimits

0x79c8,	// (0x00031fc0) list_double_heading_pane_vc_t1

0x79dc,	// (0x00031fd4) list_double_heading_pane_vc_t2_ParamLimits

0x79dc,	// (0x00031fd4) list_double_heading_pane_vc_t2

0x0001,

0xfa61,	// (0x0003a059) list_double_heading_pane_vc_t_ParamLimits

0xfa61,	// (0x0003a059) list_double_heading_pane_vc_t

0x79f4,	// (0x00031fec) list_double_graphic_pane_vc_g1_ParamLimits

0x79f4,	// (0x00031fec) list_double_graphic_pane_vc_g1

0x7a00,	// (0x00031ff8) list_double_graphic_pane_vc_g2_ParamLimits

0x7a00,	// (0x00031ff8) list_double_graphic_pane_vc_g2

0x74ff,	// (0x00031af7) list_double_graphic_pane_vc_g3_ParamLimits

0x74ff,	// (0x00031af7) list_double_graphic_pane_vc_g3

0x0003,

0xfa66,	// (0x0003a05e) list_double_graphic_pane_vc_g_ParamLimits

0xfa66,	// (0x0003a05e) list_double_graphic_pane_vc_g

0x7a1d,	// (0x00032015) list_double_graphic_pane_vc_t1_ParamLimits

0x7a1d,	// (0x00032015) list_double_graphic_pane_vc_t1

0x7a47,	// (0x0003203f) list_double_graphic_pane_vc_t2_ParamLimits

0x7a47,	// (0x0003203f) list_double_graphic_pane_vc_t2

0x0001,

0xfa6f,	// (0x0003a067) list_double_graphic_pane_vc_t_ParamLimits

0xfa6f,	// (0x0003a067) list_double_graphic_pane_vc_t

0x48cd,	// (0x0002eec5) aid_size_cell_fastswap

0x48d5,	// (0x0002eecd) aid_size_cell_touch_ParamLimits

0x48d5,	// (0x0002eecd) aid_size_cell_touch

0x4b3a,	// (0x0002f132) popup_fast_swap_wide_window_ParamLimits

0x4b3a,	// (0x0002f132) popup_fast_swap_wide_window

0x4c4e,	// (0x0002f246) touch_pane_ParamLimits

0x4c4e,	// (0x0002f246) touch_pane

0x87c3,	// (0x00032dbb) button_value_adjust_pane_cp2

0x51f7,	// (0x0002f7ef) button_value_adjust_pane_cp4

0x5217,	// (0x0002f80f) form_field_data_pane_cp2

0x5236,	// (0x0002f82e) form_field_data_wide_pane_cp2

0x8c41,	// (0x00033239) bg_scroll_pane_ParamLimits

0x55b8,	// (0x0002fbb0) scroll_handle_pane_ParamLimits

0x55cc,	// (0x0002fbc4) scroll_sc2_down_pane_ParamLimits

0x55cc,	// (0x0002fbc4) scroll_sc2_down_pane

0x8c72,	// (0x0003326a) scroll_sc2_up_pane_ParamLimits

0x8c72,	// (0x0003326a) scroll_sc2_up_pane

0xbe58,	// (0x00036450) grid_wheel_folder_pane_g1_ParamLimits

0xbe58,	// (0x00036450) grid_wheel_folder_pane_g1

0x5791,	// (0x0002fd89) clock_nsta_pane_cp2_ParamLimits

0x5791,	// (0x0002fd89) clock_nsta_pane_cp2

0x9472,	// (0x00033a6a) listscroll_midp_pane_ParamLimits

0x947e,	// (0x00033a76) midp_canvas_pane

0x9766,	// (0x00033d5e) nsta_clock_indic_pane

0x979a,	// (0x00033d92) listscroll_form_pane_vc

0x97a2,	// (0x00033d9a) listscroll_set_pane_vc_ParamLimits

0x97a2,	// (0x00033d9a) listscroll_set_pane_vc

0x98a7,	// (0x00033e9f) clock_nsta_pane

0x991c,	// (0x00033f14) indicator_nsta_pane

0x9bfc,	// (0x000341f4) bg_popup_sub_pane_cp2_ParamLimits

0x9c10,	// (0x00034208) find_pane_cp2_ParamLimits

0x9c10,	// (0x00034208) find_pane_cp2

0x9c26,	// (0x0003421e) grid_toobar_pane_ParamLimits

0x9d06,	// (0x000342fe) list_form_gen_pane_vc_ParamLimits

0x9d06,	// (0x000342fe) list_form_gen_pane_vc

0x9d1c,	// (0x00034314) scroll_pane_cp8_vc_ParamLimits

0x9d1c,	// (0x00034314) scroll_pane_cp8_vc

0x9d98,	// (0x00034390) data_form_wide_pane_vc_ParamLimits

0x9d98,	// (0x00034390) data_form_wide_pane_vc

0x9da4,	// (0x0003439c) form_field_data_wide_pane_vc_g1

0x9dac,	// (0x000343a4) form_field_data_wide_pane_vc_t1_ParamLimits

0x9dac,	// (0x000343a4) form_field_data_wide_pane_vc_t1

0x87d7,	// (0x00032dcf) input_focus_pane_cp6_vc_ParamLimits

0x87d7,	// (0x00032dcf) input_focus_pane_cp6_vc

0xa0cc,	// (0x000346c4) list_midp_pane_ParamLimits

0xa0d8,	// (0x000346d0) scroll_pane_cp16_ParamLimits

0xa0d8,	// (0x000346d0) scroll_pane_cp16

0xa12e,	// (0x00034726) button_value_adjust_pane_ParamLimits

0xa12e,	// (0x00034726) button_value_adjust_pane

0xb0ab,	// (0x000356a3) button_value_adjust_pane_cp6_ParamLimits

0xb0ab,	// (0x000356a3) button_value_adjust_pane_cp6

0xb1d5,	// (0x000357cd) settings_code_pane_cp_ParamLimits

0xb1d5,	// (0x000357cd) settings_code_pane_cp

0x7e7e,	// (0x00032476) cell_touch_pane_g1

0x7e7e,	// (0x00032476) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00039cfb) cell_touch_pane_g

0xb7a0,	// (0x00035d98) cell_touch_pane_cp_ParamLimits

0xb7a0,	// (0x00035d98) cell_touch_pane_cp

0xb7b0,	// (0x00035da8) cell_touch_pane_ParamLimits

0xb7b0,	// (0x00035da8) cell_touch_pane

0x7e7e,	// (0x00032476) scroll_sc2_down_pane_g1

0x7e7e,	// (0x00032476) scroll_sc2_up_pane_g1

0x7e88,	// (0x00032480) bg_set_opt_pane_cp4_vc

0xb7c2,	// (0x00035dba) list_set_graphic_pane_vc_g1_ParamLimits

0xb7c2,	// (0x00035dba) list_set_graphic_pane_vc_g1

0xb7ce,	// (0x00035dc6) list_set_graphic_pane_vc_g2_ParamLimits

0xb7ce,	// (0x00035dc6) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x00039ff0) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x00039ff0) list_set_graphic_pane_vc_g

0xb7da,	// (0x00035dd2) text_primary_small_cp13_vc_ParamLimits

0xb7da,	// (0x00035dd2) text_primary_small_cp13_vc

0xb7f2,	// (0x00035dea) list_set_graphic_pane_vc_ParamLimits

0xb7f2,	// (0x00035dea) list_set_graphic_pane_vc

0x7e88,	// (0x00032480) input_focus_pane_cp2_vc

0x7e7e,	// (0x00032476) setting_code_pane_vc_g1

0x7fb3,	// (0x000325ab) setting_code_pane_vc_t1

0xb804,	// (0x00035dfc) set_text_pane_vc_t1_ParamLimits

0xb804,	// (0x00035dfc) set_text_pane_vc_t1

0x7e88,	// (0x00032480) input_focus_pane_cp1_vc

0xb820,	// (0x00035e18) list_set_text_pane_vc

0x7e7e,	// (0x00032476) setting_text_pane_vc_g1

0x7e88,	// (0x00032480) bg_set_opt_pane_cp2_vc

0x7faa,	// (0x000325a2) setting_slider_graphic_pane_vc_g1

0xb82a,	// (0x00035e22) setting_slider_graphic_pane_vc_t1

0xb83a,	// (0x00035e32) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x00039ff5) setting_slider_graphic_pane_vc_t

0xb84a,	// (0x00035e42) slider_set_pane_cp_vc

0xb852,	// (0x00035e4a) slider_set_pane_vc_g1

0xb85b,	// (0x00035e53) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x00039ffa) slider_set_pane_vc_g

0x882f,	// (0x00032e27) set_opt_bg_pane_g1_copy1

0x8837,	// (0x00032e2f) set_opt_bg_pane_g2_copy1

0xb887,	// (0x00035e7f) set_opt_bg_pane_g3_copy1

0x8847,	// (0x00032e3f) set_opt_bg_pane_g4_copy1

0x884f,	// (0x00032e47) set_opt_bg_pane_g5_copy1

0x8857,	// (0x00032e4f) set_opt_bg_pane_g6_copy1

0xb891,	// (0x00035e89) set_opt_bg_pane_g7_copy1

0xb899,	// (0x00035e91) set_opt_bg_pane_g8_copy1

0xb8a3,	// (0x00035e9b) set_opt_bg_pane_g9_copy1

0x7e88,	// (0x00032480) bg_set_opt_pane_cp_vc

0xb8ad,	// (0x00035ea5) setting_slider_pane_vc_t1

0xb8bc,	// (0x00035eb4) setting_slider_pane_vc_t2

0xb8cc,	// (0x00035ec4) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0003a009) setting_slider_pane_vc_t

0xb8dc,	// (0x00035ed4) slider_set_pane_vc

0x6107,	// (0x000306ff) volume_set_pane_vc_g1

0x6110,	// (0x00030708) volume_set_pane_vc_g2

0x6119,	// (0x00030711) volume_set_pane_vc_g3

0x6122,	// (0x0003071a) volume_set_pane_vc_g4

0x612b,	// (0x00030723) volume_set_pane_vc_g5

0x6134,	// (0x0003072c) volume_set_pane_vc_g6

0x613d,	// (0x00030735) volume_set_pane_vc_g7

0x6146,	// (0x0003073e) volume_set_pane_vc_g8

0x614f,	// (0x00030747) volume_set_pane_vc_g9

0x6158,	// (0x00030750) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x00039eae) volume_set_pane_vc_g

0xb8e4,	// (0x00035edc) volume_set_pane_vc

0xb8ec,	// (0x00035ee4) button_value_adjust_pane_cp1_vc

0xb8f6,	// (0x00035eee) list_highlight_pane_cp2_vc

0xb8ff,	// (0x00035ef7) list_set_pane_vc_ParamLimits

0xb8ff,	// (0x00035ef7) list_set_pane_vc

0xb95d,	// (0x00035f55) main_pane_set_vc_t1_ParamLimits

0xb95d,	// (0x00035f55) main_pane_set_vc_t1

0xb972,	// (0x00035f6a) main_pane_set_vc_t2_ParamLimits

0xb972,	// (0x00035f6a) main_pane_set_vc_t2

0xb984,	// (0x00035f7c) main_pane_set_vc_t3_ParamLimits

0xb984,	// (0x00035f7c) main_pane_set_vc_t3

0xb998,	// (0x00035f90) main_pane_set_vc_t4_ParamLimits

0xb998,	// (0x00035f90) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0003a010) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0003a010) main_pane_set_vc_t

0xb9ac,	// (0x00035fa4) setting_code_pane_vc_ParamLimits

0xb9ac,	// (0x00035fa4) setting_code_pane_vc

0xb9bd,	// (0x00035fb5) setting_slider_graphic_pane_vc

0xb9bd,	// (0x00035fb5) setting_slider_pane_vc

0xb9bd,	// (0x00035fb5) setting_text_pane_vc

0xb9bd,	// (0x00035fb5) setting_volume_pane_vc

0xb9c7,	// (0x00035fbf) scroll_pane_cp121_vc

0x87b1,	// (0x00032da9) set_content_pane_vc

0xb9cf,	// (0x00035fc7) button_value_adjust_pane_g1

0xb9d8,	// (0x00035fd0) button_value_adjust_pane_g2

0x0001,

0xfa74,	// (0x0003a06c) button_value_adjust_pane_g

0xb9e1,	// (0x00035fd9) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9e1,	// (0x00035fd9) form_field_slider_wide_pane_vc_t1

0xb9f5,	// (0x00035fed) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9f5,	// (0x00035fed) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa79,	// (0x0003a071) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa79,	// (0x0003a071) form_field_slider_wide_pane_vc_t

0x81e3,	// (0x000327db) input_focus_pane_cp10_vc_ParamLimits

0x81e3,	// (0x000327db) input_focus_pane_cp10_vc

0xba23,	// (0x0003601b) slider_cont_pane_cp1_vc_ParamLimits

0xba23,	// (0x0003601b) slider_cont_pane_cp1_vc

0xba35,	// (0x0003602d) slider_form_pane_g1_cp2

0xb85b,	// (0x00035e53) slider_form_pane_g2_cp2

0xba62,	// (0x0003605a) form_field_slider_pane_vc_t3

0xba70,	// (0x00036068) form_field_slider_pane_vc_t4

0xba7e,	// (0x00036076) slider_form_pane_vc_ParamLimits

0xba7e,	// (0x00036076) slider_form_pane_vc

0xba8b,	// (0x00036083) form_field_slider_pane_vc_t1_ParamLimits

0xba8b,	// (0x00036083) form_field_slider_pane_vc_t1

0xb9f5,	// (0x00035fed) form_field_slider_pane_vc_t2_ParamLimits

0xb9f5,	// (0x00035fed) form_field_slider_pane_vc_t2

0x0001,

0xfa8b,	// (0x0003a083) form_field_slider_pane_vc_t_ParamLimits

0xfa8b,	// (0x0003a083) form_field_slider_pane_vc_t

0x81e3,	// (0x000327db) input_focus_pane_cp9_vc_ParamLimits

0x81e3,	// (0x000327db) input_focus_pane_cp9_vc

0xbaa7,	// (0x0003609f) slider_cont_pane_vc_ParamLimits

0xbaa7,	// (0x0003609f) slider_cont_pane_vc

0xbabb,	// (0x000360b3) list_form_graphic_pane_cp_vc_ParamLimits

0xbabb,	// (0x000360b3) list_form_graphic_pane_cp_vc

0x9da4,	// (0x0003439c) form_field_popup_wide_pane_vc_g1

0xbad0,	// (0x000360c8) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbad0,	// (0x000360c8) form_field_popup_wide_pane_vc_t1

0x87d7,	// (0x00032dcf) input_focus_pane_cp8_vc_ParamLimits

0x87d7,	// (0x00032dcf) input_focus_pane_cp8_vc

0xbb15,	// (0x0003610d) list_form_wide_pane_vc_ParamLimits

0xbb15,	// (0x0003610d) list_form_wide_pane_vc

0xbb21,	// (0x00036119) list_form_graphic_pane_vc_g1

0xbb29,	// (0x00036121) list_form_graphic_pane_vc_t1_ParamLimits

0xbb29,	// (0x00036121) list_form_graphic_pane_vc_t1

0x7f68,	// (0x00032560) list_highlight_pane_cp5_vc_ParamLimits

0x7f68,	// (0x00032560) list_highlight_pane_cp5_vc

0xbb45,	// (0x0003613d) list_form_graphic_pane_vc_ParamLimits

0xbb45,	// (0x0003613d) list_form_graphic_pane_vc

0x9da4,	// (0x0003439c) form_field_popup_pane_vc_g1

0xbb67,	// (0x0003615f) form_field_popup_pane_vc_t1_ParamLimits

0xbb67,	// (0x0003615f) form_field_popup_pane_vc_t1

0x87d7,	// (0x00032dcf) input_focus_pane_cp7_vc_ParamLimits

0x87d7,	// (0x00032dcf) input_focus_pane_cp7_vc

0xbb7e,	// (0x00036176) list_form_pane_vc_ParamLimits

0xbb7e,	// (0x00036176) list_form_pane_vc

0xbb8a,	// (0x00036182) data_form_pane_vc_t1_ParamLimits

0xbb8a,	// (0x00036182) data_form_pane_vc_t1

0x882f,	// (0x00032e27) input_focus_pane_vc_g1

0x8837,	// (0x00032e2f) input_focus_pane_vc_g2

0x883f,	// (0x00032e37) input_focus_pane_vc_g3

0x8847,	// (0x00032e3f) input_focus_pane_vc_g4

0x884f,	// (0x00032e47) input_focus_pane_vc_g5

0x8857,	// (0x00032e4f) input_focus_pane_vc_g6

0x885f,	// (0x00032e57) input_focus_pane_vc_g7

0x8867,	// (0x00032e5f) input_focus_pane_vc_g8

0x886f,	// (0x00032e67) input_focus_pane_vc_g9

0x7e7e,	// (0x00032476) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x00039c84) input_focus_pane_vc_g

0x9d98,	// (0x00034390) data_form_pane_vc_ParamLimits

0x9d98,	// (0x00034390) data_form_pane_vc

0x9da4,	// (0x0003439c) form_field_data_pane_vc_g1

0xbba5,	// (0x0003619d) form_field_data_pane_vc_t1_ParamLimits

0xbba5,	// (0x0003619d) form_field_data_pane_vc_t1

0x87d7,	// (0x00032dcf) input_focus_pane_vc_ParamLimits

0x87d7,	// (0x00032dcf) input_focus_pane_vc

0xbbbf,	// (0x000361b7) button_value_adjust_pane_cp3_vc

0xbbc7,	// (0x000361bf) button_value_adjust_pane_cp5_vc

0xbbcf,	// (0x000361c7) form_field_data_pane_vc_ParamLimits

0xbbcf,	// (0x000361c7) form_field_data_pane_vc

0xbbe6,	// (0x000361de) form_field_data_pane_vc_cp2

0xbbee,	// (0x000361e6) form_field_data_wide_pane_vc_ParamLimits

0xbbee,	// (0x000361e6) form_field_data_wide_pane_vc

0xbc04,	// (0x000361fc) form_field_data_wide_pane_vc_cp2

0xbc0c,	// (0x00036204) form_field_popup_pane_vc_ParamLimits

0xbc0c,	// (0x00036204) form_field_popup_pane_vc

0xbc23,	// (0x0003621b) form_field_popup_wide_pane_vc_ParamLimits

0xbc23,	// (0x0003621b) form_field_popup_wide_pane_vc

0xbc39,	// (0x00036231) form_field_slider_pane_vc_ParamLimits

0xbc39,	// (0x00036231) form_field_slider_pane_vc

0xbc4c,	// (0x00036244) form_field_slider_wide_pane_vc_ParamLimits

0xbc4c,	// (0x00036244) form_field_slider_wide_pane_vc

0xbc5f,	// (0x00036257) grid_touch_1_pane_ParamLimits

0xbc5f,	// (0x00036257) grid_touch_1_pane

0xbc6b,	// (0x00036263) grid_touch_2_pane_ParamLimits

0xbc6b,	// (0x00036263) grid_touch_2_pane

0x9731,	// (0x00033d29) touch_pane_g1_ParamLimits

0x9731,	// (0x00033d29) touch_pane_g1

0xbc83,	// (0x0003627b) cell_app_pane_cp_wide_ParamLimits

0xbc83,	// (0x0003627b) cell_app_pane_cp_wide

0xbc94,	// (0x0003628c) grid_popup_fast_wide_pane_ParamLimits

0xbc94,	// (0x0003628c) grid_popup_fast_wide_pane

0xbca8,	// (0x000362a0) scroll_pane_cp19_ParamLimits

0xbca8,	// (0x000362a0) scroll_pane_cp19

0x7e88,	// (0x00032480) bg_popup_window_pane_cp20

0xbcbc,	// (0x000362b4) listscroll_popup_fast_wide_pane

0x7f68,	// (0x00032560) grid_indicator_nsta_pane

0xbcc4,	// (0x000362bc) clock_nsta_pane_g1

0xbccd,	// (0x000362c5) clock_nsta_pane_t1

0xbce9,	// (0x000362e1) cell_indicator_nsta_pane_ParamLimits

0xbce9,	// (0x000362e1) cell_indicator_nsta_pane

0xbd1a,	// (0x00036312) cell_indicator_nsta_pane_g1

0xbd28,	// (0x00036320) cell_indicator_nsta_pane_g2

0x0001,

0xfa9c,	// (0x0003a094) cell_indicator_nsta_pane_g

0xbd35,	// (0x0003632d) clock_nsta_pane_cp

0xbd3d,	// (0x00036335) indicator_nsta_pane_cp

0xbd45,	// (0x0003633d) nsta_clock_indic_pane_g1

0x8031,	// (0x00032629) grid_indicator_pane

0x8d67,	// (0x0003335f) scroll_pane_cp29

0x56e0,	// (0x0002fcd8) indicator_nsta_pane_cp2_ParamLimits

0x56e0,	// (0x0002fcd8) indicator_nsta_pane_cp2

0x7f68,	// (0x00032560) main_apps_wheel_pane

0x9fad,	// (0x000345a5) form_midp_field_text_pane_ParamLimits

0xa0f8,	// (0x000346f0) scroll_bar_cp050_ParamLimits

0xbd95,	// (0x0003638d) cell_indicator_pane_ParamLimits

0xbd95,	// (0x0003638d) cell_indicator_pane

0xbdac,	// (0x000363a4) cell_indicator_pane_g1

0xbdb6,	// (0x000363ae) grid_wheel_folder_pane_ParamLimits

0xbdb6,	// (0x000363ae) grid_wheel_folder_pane

0xbdcc,	// (0x000363c4) list_wheel_apps_pane_ParamLimits

0xbdcc,	// (0x000363c4) list_wheel_apps_pane

0xbddd,	// (0x000363d5) main_apps_wheel_pane_g1_ParamLimits

0xbddd,	// (0x000363d5) main_apps_wheel_pane_g1

0xbdf1,	// (0x000363e9) main_apps_wheel_pane_g2_ParamLimits

0xbdf1,	// (0x000363e9) main_apps_wheel_pane_g2

0x0001,

0xfab8,	// (0x0003a0b0) main_apps_wheel_pane_g_ParamLimits

0xfab8,	// (0x0003a0b0) main_apps_wheel_pane_g

0xbe09,	// (0x00036401) main_apps_wheel_pane_t1_ParamLimits

0xbe09,	// (0x00036401) main_apps_wheel_pane_t1

0xbe2c,	// (0x00036424) list_wheel_apps_pane_g1

0xbe34,	// (0x0003642c) list_wheel_apps_pane_g2

0xbe3c,	// (0x00036434) list_wheel_apps_pane_g3

0xbe44,	// (0x0003643c) list_wheel_apps_pane_g4

0xbe4e,	// (0x00036446) list_wheel_apps_pane_g5

0x0004,

0xfabd,	// (0x0003a0b5) list_wheel_apps_pane_g

0x92ea,	// (0x000338e2) navi_icon_text_pane

0x97d6,	// (0x00033dce) aid_fill_nsta

0xbe71,	// (0x00036469) navi_icon_text_pane_g1

0xbe7d,	// (0x00036475) navi_icon_text_pane_t1

0x917d,	// (0x00033775) list_set_graphic_pane_t1_ParamLimits

0x917d,	// (0x00033775) list_set_graphic_pane_t1

0xa85b,	// (0x00034e53) popup_midp_note_alarm_window_t6_ParamLimits

0xa85b,	// (0x00034e53) popup_midp_note_alarm_window_t6

0xa86d,	// (0x00034e65) popup_midp_note_alarm_window_t7_ParamLimits

0xa86d,	// (0x00034e65) popup_midp_note_alarm_window_t7

0xa87f,	// (0x00034e77) popup_midp_note_alarm_window_t8_ParamLimits

0xa87f,	// (0x00034e77) popup_midp_note_alarm_window_t8

0xa891,	// (0x00034e89) popup_midp_note_alarm_window_t9_ParamLimits

0xa891,	// (0x00034e89) popup_midp_note_alarm_window_t9

0xa8a3,	// (0x00034e9b) popup_midp_note_alarm_window_t10_ParamLimits

0xa8a3,	// (0x00034e9b) popup_midp_note_alarm_window_t10

0xa8b5,	// (0x00034ead) popup_midp_note_alarm_window_t11_ParamLimits

0xa8b5,	// (0x00034ead) popup_midp_note_alarm_window_t11

0xa8c7,	// (0x00034ebf) scroll_pane_cp17_ParamLimits

0xa8c7,	// (0x00034ebf) scroll_pane_cp17

0x6107,	// (0x000306ff) volume_small_pane_cp_g1

0x63fc,	// (0x000309f4) volume_small_pane_cp_g2

0x6405,	// (0x000309fd) volume_small_pane_cp_g3

0x640e,	// (0x00030a06) volume_small_pane_cp_g4

0x6417,	// (0x00030a0f) volume_small_pane_cp_g5

0x6420,	// (0x00030a18) volume_small_pane_cp_g6

0x6429,	// (0x00030a21) volume_small_pane_cp_g7

0x6432,	// (0x00030a2a) volume_small_pane_cp_g8

0x643b,	// (0x00030a33) volume_small_pane_cp_g9

0x6444,	// (0x00030a3c) volume_small_pane_cp_g10

0x9547,	// (0x00033b3f) midp_ticker_pane_g1_ParamLimits

0x9553,	// (0x00033b4b) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00039d50) midp_ticker_pane_g_ParamLimits

0x955f,	// (0x00033b57) midp_ticker_pane_t1_ParamLimits

0x97ec,	// (0x00033de4) aid_fill_nsta_2

0xa0e4,	// (0x000346dc) list_form2_midp_pane

0xb220,	// (0x00035818) midp_editing_number_pane_ParamLimits

0xb22f,	// (0x00035827) midp_ticker_pane_ParamLimits

0xbe8f,	// (0x00036487) form2_midp_field_pane

0xbeb3,	// (0x000364ab) scroll_pane_cp51

0xbed3,	// (0x000364cb) form2_midp_button_pane_ParamLimits

0xbed3,	// (0x000364cb) form2_midp_button_pane

0xbee5,	// (0x000364dd) form2_midp_content_pane_ParamLimits

0xbee5,	// (0x000364dd) form2_midp_content_pane

0xbeff,	// (0x000364f7) form2_midp_field_choice_group_pane

0xbf07,	// (0x000364ff) form2_midp_field_pane_g1

0xbf0f,	// (0x00036507) form2_midp_field_pane_g2

0xbf17,	// (0x0003650f) form2_midp_field_pane_g3

0xbf1f,	// (0x00036517) form2_midp_field_pane_g4

0x0003,

0xfae2,	// (0x0003a0da) form2_midp_field_pane_g

0xbf27,	// (0x0003651f) form2_midp_gauge_slider_pane

0xbf2f,	// (0x00036527) form2_midp_gauge_wait_pane

0xbf37,	// (0x0003652f) form2_midp_image_pane_ParamLimits

0xbf37,	// (0x0003652f) form2_midp_image_pane

0xbf52,	// (0x0003654a) form2_midp_label_pane_ParamLimits

0xbf52,	// (0x0003654a) form2_midp_label_pane

0xbf6b,	// (0x00036563) form2_midp_label_pane_cp_ParamLimits

0xbf6b,	// (0x00036563) form2_midp_label_pane_cp

0xbf8c,	// (0x00036584) form2_midp_string_pane_ParamLimits

0xbf8c,	// (0x00036584) form2_midp_string_pane

0x7a71,	// (0x00032069) form2_midp_text_pane_ParamLimits

0x7a71,	// (0x00032069) form2_midp_text_pane

0xbf9e,	// (0x00036596) form2_midp_time_pane

0xbfae,	// (0x000365a6) input_focus_pane_cp51_ParamLimits

0xbfae,	// (0x000365a6) input_focus_pane_cp51

0xbfc6,	// (0x000365be) form2_midp_label_pane_t1_ParamLimits

0xbfc6,	// (0x000365be) form2_midp_label_pane_t1

0x7a8c,	// (0x00032084) form2_mdip_text_pane_t1_ParamLimits

0x7a8c,	// (0x00032084) form2_mdip_text_pane_t1

0x7aaa,	// (0x000320a2) form2_midp_time_pane_t1

0xc00f,	// (0x00036607) form2_midp_gauge_slider_pane_t1

0xc021,	// (0x00036619) form2_midp_gauge_slider_pane_t2

0xc033,	// (0x0003662b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaeb,	// (0x0003a0e3) form2_midp_gauge_slider_pane_t

0xc045,	// (0x0003663d) form2_midp_slider_pane

0xc051,	// (0x00036649) form2_midp_gauge_wait_pane_t1

0xc05f,	// (0x00036657) form2_midp_wait_pane_ParamLimits

0xc05f,	// (0x00036657) form2_midp_wait_pane

0xc08a,	// (0x00036682) list_single_2graphic_pane_cp4_ParamLimits

0xc08a,	// (0x00036682) list_single_2graphic_pane_cp4

0x9e0c,	// (0x00034404) list_single_midp_graphic_pane_cp_ParamLimits

0x9e0c,	// (0x00034404) list_single_midp_graphic_pane_cp

0x7e88,	// (0x00032480) list_highlight_pane_cp20

0xc0ae,	// (0x000366a6) list_single_2graphic_pane_g1_cp4

0xc0b6,	// (0x000366ae) list_single_2graphic_pane_g2_cp4

0xc0be,	// (0x000366b6) list_single_2graphic_pane_t1_cp4

0x7f68,	// (0x00032560) list_highlight_pane_cp21

0xc0cd,	// (0x000366c5) list_single_midp_graphic_pane_g4_cp

0xc0dc,	// (0x000366d4) list_single_midp_graphic_pane_t1_cp

0xc0f1,	// (0x000366e9) form2_mdip_string_pane_t1_ParamLimits

0xc0f1,	// (0x000366e9) form2_mdip_string_pane_t1

0x7e88,	// (0x00032480) bg_wml_button_pane_cp2

0x7e7e,	// (0x00032476) form2_midp_image_pane_g1

0x4fe1,	// (0x0002f5d9) list_double_large_graphic_pane_g5_ParamLimits

0x4fe1,	// (0x0002f5d9) list_double_large_graphic_pane_g5

0x9472,	// (0x00033a6a) midp_form_pane_ParamLimits

0x7f68,	// (0x00032560) main_apps_wheel_pane_ParamLimits

0x5db3,	// (0x000303ab) popup_preview_window_ParamLimits

0x5db3,	// (0x000303ab) popup_preview_window

0x5f6e,	// (0x00030566) popup_touch_info_window_ParamLimits

0x5f6e,	// (0x00030566) popup_touch_info_window

0x5f8c,	// (0x00030584) popup_touch_menu_window_ParamLimits

0x5f8c,	// (0x00030584) popup_touch_menu_window

0x7e74,	// (0x0003246c) bg_popup_sub_pane_cp6

0xc1db,	// (0x000367d3) list_touch_menu_pane

0xc1e3,	// (0x000367db) list_single_touch_menu_pane_ParamLimits

0xc1e3,	// (0x000367db) list_single_touch_menu_pane

0xc1f9,	// (0x000367f1) list_single_touch_menu_pane_t1

0x7f68,	// (0x00032560) bg_popup_sub_pane_cp7_ParamLimits

0x7f68,	// (0x00032560) bg_popup_sub_pane_cp7

0xc207,	// (0x000367ff) heading_sub_pane

0xc20f,	// (0x00036807) list_touch_info_pane_ParamLimits

0xc20f,	// (0x00036807) list_touch_info_pane

0xc21e,	// (0x00036816) list_single_touch_info_pane_ParamLimits

0xc21e,	// (0x00036816) list_single_touch_info_pane

0xc230,	// (0x00036828) list_single_touch_info_pane_t1

0xc23e,	// (0x00036836) list_single_touch_info_pane_t2

0x0001,

0xfaf9,	// (0x0003a0f1) list_single_touch_info_pane_t

0x946a,	// (0x00033a62) bg_popup_heading_pane_cp

0xc24c,	// (0x00036844) heading_sub_pane_t1

0x9d32,	// (0x0003432a) bg_popup_preview_window_pane_cp_ParamLimits

0x9d32,	// (0x0003432a) bg_popup_preview_window_pane_cp

0xc207,	// (0x000367ff) heading_preview_pane

0xc20f,	// (0x00036807) list_preview_pane_ParamLimits

0xc20f,	// (0x00036807) list_preview_pane

0xc25a,	// (0x00036852) popup_preview_window_g1

0xc21e,	// (0x00036816) list_single_preview_pane_ParamLimits

0xc21e,	// (0x00036816) list_single_preview_pane

0xc262,	// (0x0003685a) list_single_preview_pane_g1

0xc26a,	// (0x00036862) list_single_preview_pane_t1

0xc230,	// (0x00036828) list_single_preview_pane_t2

0x0001,

0xfafe,	// (0x0003a0f6) list_single_preview_pane_t

0xc278,	// (0x00036870) bg_popup_heading_pane_cp2_ParamLimits

0xc278,	// (0x00036870) bg_popup_heading_pane_cp2

0xc28e,	// (0x00036886) heading_preview_pane_g1

0xc296,	// (0x0003688e) heading_preview_pane_t1_ParamLimits

0xc296,	// (0x0003688e) heading_preview_pane_t1

0x8054,	// (0x0003264c) soft_indicator_pane_t1_ParamLimits

0x874a,	// (0x00032d42) scroll_pane_ParamLimits

0x8c60,	// (0x00033258) scroll_sc2_left_pane

0x8c69,	// (0x00033261) scroll_sc2_right_pane

0x8c88,	// (0x00033280) scroll_bg_pane_g1_ParamLimits

0x8c9d,	// (0x00033295) scroll_bg_pane_g2_ParamLimits

0x8cb5,	// (0x000332ad) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00039cdb) scroll_bg_pane_g_ParamLimits

0x8c88,	// (0x00033280) scroll_handle_pane_g1_ParamLimits

0x8cd7,	// (0x000332cf) scroll_handle_pane_g2_ParamLimits

0x8cb5,	// (0x000332ad) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x00039ce2) scroll_handle_pane_g_ParamLimits

0x5a34,	// (0x0003002c) popup_choice_list_window_ParamLimits

0x5a34,	// (0x0003002c) popup_choice_list_window

0x9c08,	// (0x00034200) choice_list_pane

0x9c8a,	// (0x00034282) cell_toolbar_pane_t1

0x9cb2,	// (0x000342aa) toolbar_button_pane_ParamLimits

0xad81,	// (0x00035379) ai_gene_pane_1_t2_ParamLimits

0xad81,	// (0x00035379) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x00039f0a) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x00039f0a) ai_gene_pane_1_t

0xc2b3,	// (0x000368ab) scroll_sc2_left_pane_g1

0xc2b3,	// (0x000368ab) scroll_sc2_right_pane_g1

0x97b4,	// (0x00033dac) bg_popup_sub_pane_cp10

0xc2bd,	// (0x000368b5) list_choice_list_pane

0xc2d6,	// (0x000368ce) list_single_choice_list_pane_ParamLimits

0xc2d6,	// (0x000368ce) list_single_choice_list_pane

0xc2e9,	// (0x000368e1) list_single_choice_list_pane_g1

0x8968,	// (0x00032f60) list_single_choice_list_pane_t1_ParamLimits

0x8968,	// (0x00032f60) list_single_choice_list_pane_t1

0xc2f1,	// (0x000368e9) choice_list_pane_g1

0xc2f9,	// (0x000368f1) choice_list_pane_t1

0x7e74,	// (0x0003246c) input_focus_pane_cp11

0x8b3f,	// (0x00033137) title_pane_stacon_g2_ParamLimits

0x8b3f,	// (0x00033137) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00039cc1) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00039cc1) title_pane_stacon_g

0x946a,	// (0x00033a62) cursor_press_pane

0x5ae0,	// (0x000300d8) popup_fep_hwr_window_ParamLimits

0x5ae0,	// (0x000300d8) popup_fep_hwr_window

0x5b5a,	// (0x00030152) popup_fep_vkb_window_ParamLimits

0x5b5a,	// (0x00030152) popup_fep_vkb_window

0xc307,	// (0x000368ff) cursor_press_pane_g1

0x0002,

0xfb27,	// (0x0003a11f) fep_vkb_side_pane_g_ParamLimits

0x6486,	// (0x00030a7e) fep_hwr_candidate_pane_ParamLimits

0x6486,	// (0x00030a7e) fep_hwr_candidate_pane

0x64b0,	// (0x00030aa8) fep_hwr_side_pane_ParamLimits

0x64b0,	// (0x00030aa8) fep_hwr_side_pane

0x64d0,	// (0x00030ac8) fep_hwr_top_pane_ParamLimits

0x64d0,	// (0x00030ac8) fep_hwr_top_pane

0x64e8,	// (0x00030ae0) fep_hwr_write_pane_ParamLimits

0x64e8,	// (0x00030ae0) fep_hwr_write_pane

0xfb27,	// (0x0003a11f) fep_vkb_side_pane_g

0xc30f,	// (0x00036907) fep_hwr_top_pane_g1

0xc321,	// (0x00036919) fep_hwr_top_pane_g2

0x6522,	// (0x00030b1a) fep_hwr_top_pane_g3

0x0002,

0xfb03,	// (0x0003a0fb) fep_hwr_top_pane_g

0x6537,	// (0x00030b2f) fep_hwr_top_text_pane

0x8e57,	// (0x0003344f) fep_hwr_top_text_pane_g1

0xc357,	// (0x0003694f) fep_hwr_top_text_pane_t1

0x662d,	// (0x00030c25) fep_hwr_candidate_pane_g1

0xc5aa,	// (0x00036ba2) fep_vkb_keypad_pane_g3_ParamLimits

0xc5aa,	// (0x00036ba2) fep_vkb_keypad_pane_g3

0xc5d2,	// (0x00036bca) fep_vkb_keypad_pane_g4_ParamLimits

0xc5d2,	// (0x00036bca) fep_vkb_keypad_pane_g4

0xc641,	// (0x00036c39) fep_vkb_bottom_pane_g2_ParamLimits

0xc641,	// (0x00036c39) fep_vkb_bottom_pane_g2

0x0001,

0xfb2e,	// (0x0003a126) fep_vkb_bottom_pane_g_ParamLimits

0xfb2e,	// (0x0003a126) fep_vkb_bottom_pane_g

0xc2b3,	// (0x000368ab) cell_vkb_side_pane_g2

0x0001,

0xfb38,	// (0x0003a130) cell_vkb_side_pane_g

0xc6cc,	// (0x00036cc4) cell_vkb_side_pane_t1

0xc6da,	// (0x00036cd2) cell_vkb_side_pane_t1_copy1

0xc2b3,	// (0x000368ab) bg_fep_vkb_candidate_pane_g2

0xc806,	// (0x00036dfe) cell_vkb_candidate_pane_ParamLimits

0xc365,	// (0x0003695d) aid_size_cell_vkb_ParamLimits

0xc365,	// (0x0003695d) aid_size_cell_vkb

0xc806,	// (0x00036dfe) cell_vkb_candidate_pane

0x6654,	// (0x00030c4c) bg_popup_fep_shadow_pane_g1

0xc3f3,	// (0x000369eb) fep_vkb_bottom_pane_ParamLimits

0xc3f3,	// (0x000369eb) fep_vkb_bottom_pane

0xc429,	// (0x00036a21) fep_vkb_candidate_pane_ParamLimits

0xc429,	// (0x00036a21) fep_vkb_candidate_pane

0xc445,	// (0x00036a3d) fep_vkb_keypad_pane_ParamLimits

0xc445,	// (0x00036a3d) fep_vkb_keypad_pane

0xc48b,	// (0x00036a83) fep_vkb_side_pane_ParamLimits

0xc48b,	// (0x00036a83) fep_vkb_side_pane

0xc4c7,	// (0x00036abf) fep_vkb_top_pane_ParamLimits

0xc4c7,	// (0x00036abf) fep_vkb_top_pane

0xc503,	// (0x00036afb) fep_vkb_top_pane_g1_ParamLimits

0xc503,	// (0x00036afb) fep_vkb_top_pane_g1

0xc512,	// (0x00036b0a) fep_vkb_top_pane_g2_ParamLimits

0xc512,	// (0x00036b0a) fep_vkb_top_pane_g2

0xc521,	// (0x00036b19) fep_vkb_top_pane_g3_ParamLimits

0xc521,	// (0x00036b19) fep_vkb_top_pane_g3

0x0003,

0xfb1e,	// (0x0003a116) fep_vkb_top_pane_g_ParamLimits

0xfb1e,	// (0x0003a116) fep_vkb_top_pane_g

0xc53f,	// (0x00036b37) fep_vkb_top_text_pane_ParamLimits

0xc53f,	// (0x00036b37) fep_vkb_top_text_pane

0xc550,	// (0x00036b48) fep_vkb_side_pane_g1_ParamLimits

0xc550,	// (0x00036b48) fep_vkb_side_pane_g1

0xc599,	// (0x00036b91) grid_vkb_side_pane_ParamLimits

0xc599,	// (0x00036b91) grid_vkb_side_pane

0x665c,	// (0x00030c54) bg_popup_fep_shadow_pane_g2

0x6665,	// (0x00030c5d) bg_popup_fep_shadow_pane_g3

0x666d,	// (0x00030c65) bg_popup_fep_shadow_pane_g4

0x6676,	// (0x00030c6e) bg_popup_fep_shadow_pane_g5

0x6680,	// (0x00030c78) bg_popup_fep_shadow_pane_g6

0x6688,	// (0x00030c80) bg_popup_fep_shadow_pane_g7

0x8847,	// (0x00032e3f) bg_popup_fep_shadow_pane_g8

0xc5f0,	// (0x00036be8) grid_vkb_keypad_number_pane_ParamLimits

0xc5f0,	// (0x00036be8) grid_vkb_keypad_number_pane

0xc600,	// (0x00036bf8) grid_vkb_keypad_pane_ParamLimits

0xc600,	// (0x00036bf8) grid_vkb_keypad_pane

0xc626,	// (0x00036c1e) fep_vkb_bottom_pane_g1_ParamLimits

0xc626,	// (0x00036c1e) fep_vkb_bottom_pane_g1

0xc64f,	// (0x00036c47) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc64f,	// (0x00036c47) grid_vkb_keypad_bottom_left_pane

0xc664,	// (0x00036c5c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc664,	// (0x00036c5c) grid_vkb_keypad_bottom_right_pane

0xc679,	// (0x00036c71) fep_vkb_top_text_pane_g1

0xc694,	// (0x00036c8c) fep_vkb_top_text_pane_t1

0xc6a9,	// (0x00036ca1) cell_vkb_side_pane_ParamLimits

0xc6a9,	// (0x00036ca1) cell_vkb_side_pane

0xc2b3,	// (0x000368ab) cell_vkb_side_pane_g1

0xc6e8,	// (0x00036ce0) cell_vkb_keypad_pane_ParamLimits

0xc6e8,	// (0x00036ce0) cell_vkb_keypad_pane

0xc75d,	// (0x00036d55) cell_vkb_keypad_pane_g1

0x0008,

0xfb4b,	// (0x0003a143) bg_popup_fep_shadow_pane_g

0x669a,	// (0x00030c92) cell_hwr_side_pane_g1

0x669a,	// (0x00030c92) cell_hwr_side_pane_g2

0xc767,	// (0x00036d5f) cell_vkb_keypad_pane_t1

0xc775,	// (0x00036d6d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc775,	// (0x00036d6d) cell_vkb_keypad_bottom_left_pane

0xc792,	// (0x00036d8a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc792,	// (0x00036d8a) cell_vkb_keypad_bottom_right_pane

0xc2b3,	// (0x000368ab) cell_vkb_keypad_bottom_left_pane_g1

0xc2b3,	// (0x000368ab) cell_vkb_keypad_bottom_right_pane_g1

0xc7cb,	// (0x00036dc3) cell_vkb_keypad_number_pane_ParamLimits

0xc7cb,	// (0x00036dc3) cell_vkb_keypad_number_pane

0xc7ea,	// (0x00036de2) cell_vkb_keypad_number_pane_g1

0xc7f4,	// (0x00036dec) cell_vkb_keypad_number_pane_g2

0xc7fd,	// (0x00036df5) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3d,	// (0x0003a135) cell_vkb_keypad_number_pane_g

0xc767,	// (0x00036d5f) cell_vkb_keypad_number_pane_t1

0xc821,	// (0x00036e19) fep_vkb_candidate_pane_g1

0x0001,

0xfb5e,	// (0x0003a156) cell_hwr_side_pane_g

0xc83a,	// (0x00036e32) cell_hwr_side_pane_t1

0x66a4,	// (0x00030c9c) cell_hwr_side_pane_t1_copy1

0x66b2,	// (0x00030caa) cell_hwr_candidate_pane_g1

0x66e1,	// (0x00030cd9) cell_hwr_candidate_pane_t1

0xc2b3,	// (0x000368ab) cell_vkb_candidate_pane_g2

0xc87e,	// (0x00036e76) cell_vkb_candidate_pane_t1

0x644d,	// (0x00030a45) bg_popup_fep_shadow_pane_ParamLimits

0x644d,	// (0x00030a45) bg_popup_fep_shadow_pane

0x6502,	// (0x00030afa) bg_fep_hwr_top_pane_g4

0xc333,	// (0x0003692b) bg_hwr_side_pane_g1_ParamLimits

0xc333,	// (0x0003692b) bg_hwr_side_pane_g1

0x6573,	// (0x00030b6b) cell_hwr_side_pane_ParamLimits

0x6573,	// (0x00030b6b) cell_hwr_side_pane

0x65ae,	// (0x00030ba6) fep_hwr_write_pane_g1_ParamLimits

0x65ae,	// (0x00030ba6) fep_hwr_write_pane_g1

0x65bb,	// (0x00030bb3) fep_hwr_write_pane_g2_ParamLimits

0x65bb,	// (0x00030bb3) fep_hwr_write_pane_g2

0x65c8,	// (0x00030bc0) fep_hwr_write_pane_g3_ParamLimits

0x65c8,	// (0x00030bc0) fep_hwr_write_pane_g3

0x65d6,	// (0x00030bce) fep_hwr_write_pane_g4_ParamLimits

0x65d6,	// (0x00030bce) fep_hwr_write_pane_g4

0x0005,

0xfb0a,	// (0x0003a102) fep_hwr_write_pane_g_ParamLimits

0xfb0a,	// (0x0003a102) fep_hwr_write_pane_g

0x6502,	// (0x00030afa) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6502,	// (0x00030afa) bg_fep_hwr_candidate_pane_g2

0x65eb,	// (0x00030be3) cell_hwr_candidate_pane_ParamLimits

0x65eb,	// (0x00030be3) cell_hwr_candidate_pane

0x662d,	// (0x00030c25) fep_hwr_candidate_pane_g1_ParamLimits

0xc393,	// (0x0003698b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc393,	// (0x0003698b) bg_popup_fep_shadow_pane_cp2

0xc531,	// (0x00036b29) fep_vkb_top_pane_g4_ParamLimits

0xc531,	// (0x00036b29) fep_vkb_top_pane_g4

0xc577,	// (0x00036b6f) fep_vkb_side_pane_g2_ParamLimits

0xc577,	// (0x00036b6f) fep_vkb_side_pane_g2

0x5124,	// (0x0002f71c) list_setting_pane_t4_ParamLimits

0x5124,	// (0x0002f71c) list_setting_pane_t4

0x51be,	// (0x0002f7b6) list_setting_number_pane_t5_ParamLimits

0x51be,	// (0x0002f7b6) list_setting_number_pane_t5

0x8e9e,	// (0x00033496) list_double_heading_pane_cp2_ParamLimits

0x8e9e,	// (0x00033496) list_double_heading_pane_cp2

0x87e5,	// (0x00032ddd) list_double_heading_pane_g1_cp2_ParamLimits

0x87e5,	// (0x00032ddd) list_double_heading_pane_g1_cp2

0x87f1,	// (0x00032de9) list_double_heading_pane_g2_cp2_ParamLimits

0x87f1,	// (0x00032de9) list_double_heading_pane_g2_cp2

0xc88c,	// (0x00036e84) list_double_heading_pane_t1_cp2_ParamLimits

0xc88c,	// (0x00036e84) list_double_heading_pane_t1_cp2

0xc8a2,	// (0x00036e9a) list_double_heading_pane_t2_cp2_ParamLimits

0xc8a2,	// (0x00036e9a) list_double_heading_pane_t2_cp2

0x7e5c,	// (0x00032454) aid_value_unit2

0x4b94,	// (0x0002f18c) popup_preview_fixed_window

0x81f1,	// (0x000327e9) bg_popup_preview_window_pane_cp02

0xc8b4,	// (0x00036eac) list_preview_fixed_pane

0xc8fa,	// (0x00036ef2) list_empty_pane_fp_ParamLimits

0xc8fa,	// (0x00036ef2) list_empty_pane_fp

0xc8fa,	// (0x00036ef2) list_single_cale_day_pane_fp_ParamLimits

0xc8fa,	// (0x00036ef2) list_single_cale_day_pane_fp

0xc8fa,	// (0x00036ef2) list_single_graphic_heading_pane_fp_ParamLimits

0xc8fa,	// (0x00036ef2) list_single_graphic_heading_pane_fp

0xc8fa,	// (0x00036ef2) list_single_graphic_pane_fp_ParamLimits

0xc8fa,	// (0x00036ef2) list_single_graphic_pane_fp

0xc8fa,	// (0x00036ef2) list_single_heading_pane_fp_ParamLimits

0xc8fa,	// (0x00036ef2) list_single_heading_pane_fp

0xc8fa,	// (0x00036ef2) list_single_pane_fp_ParamLimits

0xc8fa,	// (0x00036ef2) list_single_pane_fp

0xc90f,	// (0x00036f07) list_single_pane_fp_g1_ParamLimits

0xc90f,	// (0x00036f07) list_single_pane_fp_g1

0x7abd,	// (0x000320b5) list_single_pane_fp_g2_ParamLimits

0x7abd,	// (0x000320b5) list_single_pane_fp_g2

0x7ac9,	// (0x000320c1) list_single_pane_fp_g3_ParamLimits

0x7ac9,	// (0x000320c1) list_single_pane_fp_g3

0xc91b,	// (0x00036f13) list_single_pane_fp_g4_ParamLimits

0xc91b,	// (0x00036f13) list_single_pane_fp_g4

0x0003,

0xfb71,	// (0x0003a169) list_single_pane_fp_g_ParamLimits

0xfb71,	// (0x0003a169) list_single_pane_fp_g

0x7add,	// (0x000320d5) list_single_pane_fp_t1_ParamLimits

0x7add,	// (0x000320d5) list_single_pane_fp_t1

0x7af4,	// (0x000320ec) list_single_graphic_pane_fp_g1_ParamLimits

0x7af4,	// (0x000320ec) list_single_graphic_pane_fp_g1

0xc90f,	// (0x00036f07) list_single_graphic_pane_fp_g2_ParamLimits

0xc90f,	// (0x00036f07) list_single_graphic_pane_fp_g2

0x7abd,	// (0x000320b5) list_single_graphic_pane_fp_g3_ParamLimits

0x7abd,	// (0x000320b5) list_single_graphic_pane_fp_g3

0x7ac9,	// (0x000320c1) list_single_graphic_pane_fp_g4_ParamLimits

0x7ac9,	// (0x000320c1) list_single_graphic_pane_fp_g4

0xc91b,	// (0x00036f13) list_single_graphic_pane_fp_g5_ParamLimits

0xc91b,	// (0x00036f13) list_single_graphic_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a172) list_single_graphic_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a172) list_single_graphic_pane_fp_g

0x7b00,	// (0x000320f8) list_single_graphic_pane_fp_t1_ParamLimits

0x7b00,	// (0x000320f8) list_single_graphic_pane_fp_t1

0x7af4,	// (0x000320ec) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7af4,	// (0x000320ec) list_single_graphic_heading_pane_fp_g1

0xc90f,	// (0x00036f07) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc90f,	// (0x00036f07) list_single_graphic_heading_pane_fp_g2

0x7abd,	// (0x000320b5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7abd,	// (0x000320b5) list_single_graphic_heading_pane_fp_g3

0x7ac9,	// (0x000320c1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7ac9,	// (0x000320c1) list_single_graphic_heading_pane_fp_g4

0xc91b,	// (0x00036f13) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc91b,	// (0x00036f13) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a172) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a172) list_single_graphic_heading_pane_fp_g

0x7b16,	// (0x0003210e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7b16,	// (0x0003210e) list_single_graphic_heading_pane_fp_t1

0x7b2c,	// (0x00032124) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7b2c,	// (0x00032124) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0003a17d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0003a17d) list_single_graphic_heading_pane_fp_t

0x7b3e,	// (0x00032136) list_single_cale_day_pane_fp_g1_ParamLimits

0x7b3e,	// (0x00032136) list_single_cale_day_pane_fp_g1

0xc927,	// (0x00036f1f) list_single_cale_day_pane_fp_g2_ParamLimits

0xc927,	// (0x00036f1f) list_single_cale_day_pane_fp_g2

0x7b76,	// (0x0003216e) list_single_cale_day_pane_fp_g3_ParamLimits

0x7b76,	// (0x0003216e) list_single_cale_day_pane_fp_g3

0x7b9e,	// (0x00032196) list_single_cale_day_pane_fp_g4_ParamLimits

0x7b9e,	// (0x00032196) list_single_cale_day_pane_fp_g4

0x7bc2,	// (0x000321ba) list_single_cale_day_pane_fp_g5_ParamLimits

0x7bc2,	// (0x000321ba) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8a,	// (0x0003a182) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003a182) list_single_cale_day_pane_fp_g

0x7be6,	// (0x000321de) list_single_cale_day_pane_fp_t1_ParamLimits

0x7be6,	// (0x000321de) list_single_cale_day_pane_fp_t1

0x7c0c,	// (0x00032204) list_single_cale_day_pane_fp_t2_ParamLimits

0x7c0c,	// (0x00032204) list_single_cale_day_pane_fp_t2

0x7c25,	// (0x0003221d) list_single_cale_day_pane_fp_t3_ParamLimits

0x7c25,	// (0x0003221d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb95,	// (0x0003a18d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb95,	// (0x0003a18d) list_single_cale_day_pane_fp_t

0xc90f,	// (0x00036f07) list_empty_pane_fp_g1_ParamLimits

0xc90f,	// (0x00036f07) list_empty_pane_fp_g1

0x7c3e,	// (0x00032236) list_empty_pane_fp_t1

0x7c4c,	// (0x00032244) list_empty_pane_fp_t2

0x0001,

0xfb9c,	// (0x0003a194) list_empty_pane_fp_t

0xc90f,	// (0x00036f07) list_single_heading_pane_fp_g1_ParamLimits

0xc90f,	// (0x00036f07) list_single_heading_pane_fp_g1

0x7abd,	// (0x000320b5) list_single_heading_pane_fp_g2_ParamLimits

0x7abd,	// (0x000320b5) list_single_heading_pane_fp_g2

0x7ac9,	// (0x000320c1) list_single_heading_pane_fp_g3_ParamLimits

0x7ac9,	// (0x000320c1) list_single_heading_pane_fp_g3

0x0002,

0xfba1,	// (0x0003a199) list_single_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0003a199) list_single_heading_pane_fp_g

0x7c5a,	// (0x00032252) list_single_heading_pane_fp_t1_ParamLimits

0x7c5a,	// (0x00032252) list_single_heading_pane_fp_t1

0x7c6c,	// (0x00032264) list_single_heading_pane_fp_t2_ParamLimits

0x7c6c,	// (0x00032264) list_single_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x0003a1a0) list_single_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x0003a1a0) list_single_heading_pane_fp_t

0x89d6,	// (0x00032fce) aid_size_cell_fast

0x8161,	// (0x00032759) soft_indicator_pane_cp1_t1

0x8a13,	// (0x0003300b) cell_app_pane_cp2_ParamLimits

0x8a13,	// (0x0003300b) cell_app_pane_cp2

0x646f,	// (0x00030a67) fep_hwr_candidate_drop_down_list_pane

0x6647,	// (0x00030c3f) fep_hwr_candidate_pane_g3_ParamLimits

0x6647,	// (0x00030c3f) fep_hwr_candidate_pane_g3

0x38c1,	// (0x0002deb9) fep_hwr_candidate_pane_g4_ParamLimits

0x38c1,	// (0x0002deb9) fep_hwr_candidate_pane_g4

0x0002,

0xfb17,	// (0x0003a10f) fep_hwr_candidate_pane_g_ParamLimits

0xfb17,	// (0x0003a10f) fep_hwr_candidate_pane_g

0xc418,	// (0x00036a10) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc418,	// (0x00036a10) fep_vkb_candidate_drop_down_list_pane

0xc829,	// (0x00036e21) fep_vkb_candidate_pane_g3

0xc831,	// (0x00036e29) fep_vkb_candidate_pane_g4

0x0002,

0xfb44,	// (0x0003a13c) fep_vkb_candidate_pane_g

0x66b2,	// (0x00030caa) cell_hwr_candidate_pane_g1_ParamLimits

0x66c0,	// (0x00030cb8) cell_hwr_candidate_pane_g3_ParamLimits

0x66c0,	// (0x00030cb8) cell_hwr_candidate_pane_g3

0xe167,	// (0x0003875f) cell_hwr_candidate_pane_g4_ParamLimits

0xe167,	// (0x0003875f) cell_hwr_candidate_pane_g4

0x0002,

0xfb63,	// (0x0003a15b) cell_hwr_candidate_pane_g_ParamLimits

0xfb63,	// (0x0003a15b) cell_hwr_candidate_pane_g

0xc848,	// (0x00036e40) cell_vkb_candidate_pane_g3_ParamLimits

0xc848,	// (0x00036e40) cell_vkb_candidate_pane_g3

0xc863,	// (0x00036e5b) cell_vkb_candidate_pane_g4_ParamLimits

0xc863,	// (0x00036e5b) cell_vkb_candidate_pane_g4

0xc933,	// (0x00036f2b) cell_app_pane_cp2_g1_ParamLimits

0xc933,	// (0x00036f2b) cell_app_pane_cp2_g1

0xc951,	// (0x00036f49) cell_app_pane_cp2_g2_ParamLimits

0xc951,	// (0x00036f49) cell_app_pane_cp2_g2

0x0001,

0xfbad,	// (0x0003a1a5) cell_app_pane_cp2_g_ParamLimits

0xfbad,	// (0x0003a1a5) cell_app_pane_cp2_g

0xc95d,	// (0x00036f55) cell_app_pane_cp2_t1_ParamLimits

0xc95d,	// (0x00036f55) cell_app_pane_cp2_t1

0x87d7,	// (0x00032dcf) grid_highlight_pane_cp1_ParamLimits

0x87d7,	// (0x00032dcf) grid_highlight_pane_cp1

0x66ff,	// (0x00030cf7) cell_hwr_candidate_pane_cp1_ParamLimits

0x66ff,	// (0x00030cf7) cell_hwr_candidate_pane_cp1

0x66b2,	// (0x00030caa) fep_hwr_candidate_drop_down_list_pane_g1

0x671e,	// (0x00030d16) fep_hwr_candidate_drop_down_list_pane_g2

0x672b,	// (0x00030d23) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0003a1aa) fep_hwr_candidate_drop_down_list_pane_g

0x6738,	// (0x00030d30) fep_hwr_candidate_drop_down_list_scroll_pane

0x6741,	// (0x00030d39) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6741,	// (0x00030d39) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x674e,	// (0x00030d46) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x674e,	// (0x00030d46) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x675b,	// (0x00030d53) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x675b,	// (0x00030d53) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6768,	// (0x00030d60) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6768,	// (0x00030d60) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6783,	// (0x00030d7b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6783,	// (0x00030d7b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x679e,	// (0x00030d96) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x679e,	// (0x00030d96) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x67b9,	// (0x00030db1) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x67b9,	// (0x00030db1) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x67d4,	// (0x00030dcc) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x67d4,	// (0x00030dcc) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x0003a1b1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x0003a1b1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc96f,	// (0x00036f67) cell_vkb_candidate_pane_cp1_ParamLimits

0xc96f,	// (0x00036f67) cell_vkb_candidate_pane_cp1

0xc531,	// (0x00036b29) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc531,	// (0x00036b29) fep_vkb_candidate_drop_down_list_pane_g1

0xc98f,	// (0x00036f87) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc98f,	// (0x00036f87) fep_vkb_candidate_drop_down_list_pane_g2

0xc99c,	// (0x00036f94) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc99c,	// (0x00036f94) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbca,	// (0x0003a1c2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbca,	// (0x0003a1c2) fep_vkb_candidate_drop_down_list_pane_g

0xc9a9,	// (0x00036fa1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9a9,	// (0x00036fa1) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9b6,	// (0x00036fae) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9b6,	// (0x00036fae) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9c3,	// (0x00036fbb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9c3,	// (0x00036fbb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9cf,	// (0x00036fc7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9cf,	// (0x00036fc7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc9db,	// (0x00036fd3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc9db,	// (0x00036fd3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc9fc,	// (0x00036ff4) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9fc,	// (0x00036ff4) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca1d,	// (0x00037015) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca1d,	// (0x00037015) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca3e,	// (0x00037036) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca3e,	// (0x00037036) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca5f,	// (0x00037057) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca5f,	// (0x00037057) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd1,	// (0x0003a1c9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd1,	// (0x0003a1c9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7e92,	// (0x0003248a) title_pane_g1_ParamLimits

0x7e9f,	// (0x00032497) title_pane_g2_ParamLimits

0xf54e,	// (0x00039b46) title_pane_g_ParamLimits

0x8e47,	// (0x0003343f) aid_call2_pane

0x8e4f,	// (0x00033447) aid_call_pane

0x8e57,	// (0x0003344f) popup_clock_analogue_window_g1

0x8e57,	// (0x0003344f) popup_clock_analogue_window_g2

0x55e1,	// (0x0002fbd9) popup_clock_analogue_window_g3

0x55ea,	// (0x0002fbe2) popup_clock_analogue_window_g4

0x7e7e,	// (0x00032476) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x00039cf0) popup_clock_analogue_window_g

0x55f2,	// (0x0002fbea) popup_clock_analogue_window_t1

0x5600,	// (0x0002fbf8) clock_digital_number_pane_ParamLimits

0x5600,	// (0x0002fbf8) clock_digital_number_pane

0x560c,	// (0x0002fc04) clock_digital_number_pane_cp02_ParamLimits

0x560c,	// (0x0002fc04) clock_digital_number_pane_cp02

0x5618,	// (0x0002fc10) clock_digital_number_pane_cp03_ParamLimits

0x5618,	// (0x0002fc10) clock_digital_number_pane_cp03

0x5624,	// (0x0002fc1c) clock_digital_number_pane_cp04_ParamLimits

0x5624,	// (0x0002fc1c) clock_digital_number_pane_cp04

0x5630,	// (0x0002fc28) clock_digital_separator_pane_ParamLimits

0x5630,	// (0x0002fc28) clock_digital_separator_pane

0x563c,	// (0x0002fc34) popup_clock_digital_window_t1_ParamLimits

0x563c,	// (0x0002fc34) popup_clock_digital_window_t1

0x7e7e,	// (0x00032476) clock_digital_number_pane_g1

0x7e7e,	// (0x00032476) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00039cfb) clock_digital_number_pane_g

0x7e7e,	// (0x00032476) clock_digital_separator_pane_g1

0x7e7e,	// (0x00032476) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00039cfb) clock_digital_separator_pane_g

0x97d6,	// (0x00033dce) aid_fill_nsta_ParamLimits

0x991c,	// (0x00033f14) indicator_nsta_pane_ParamLimits

0x9a95,	// (0x0003408d) popup_clock_analogue_window

0x9a95,	// (0x0003408d) popup_clock_digital_window

0x7f68,	// (0x00032560) grid_indicator_nsta_pane_ParamLimits

0xbcdb,	// (0x000362d3) clock_nsta_pane_t2

0x0001,

0xfa97,	// (0x0003a08f) clock_nsta_pane_t

0x55a5,	// (0x0002fb9d) aid_size_max_handle

0x55af,	// (0x0002fba7) aid_size_min_handle

0x946a,	// (0x00033a62) editor_scroll_pane

0xca7a,	// (0x00037072) ex_editor_pane

0x8944,	// (0x00032f3c) scroll_pane_cp13

0x8776,	// (0x00032d6e) scroll_pane_cp14

0x8e86,	// (0x0003347e) scroll_pane_cp36

0x8eb2,	// (0x000334aa) list_single_graphic_hl_pane_cp2_ParamLimits

0x8eb2,	// (0x000334aa) list_single_graphic_hl_pane_cp2

0xb281,	// (0x00035879) list_single_graphic_hl_pane_ParamLimits

0xb281,	// (0x00035879) list_single_graphic_hl_pane

0x7c82,	// (0x0003227a) aid_size_min_hl_cp1

0xca82,	// (0x0003707a) list_highlight_pane_cp34_ParamLimits

0xca82,	// (0x0003707a) list_highlight_pane_cp34

0xca93,	// (0x0003708b) list_single_graphic_hl_pane_g1_ParamLimits

0xca93,	// (0x0003708b) list_single_graphic_hl_pane_g1

0x7c8b,	// (0x00032283) list_single_graphic_hl_pane_g2_ParamLimits

0x7c8b,	// (0x00032283) list_single_graphic_hl_pane_g2

0x7c8b,	// (0x00032283) list_single_graphic_hl_pane_g3_ParamLimits

0x7c8b,	// (0x00032283) list_single_graphic_hl_pane_g3

0x7c97,	// (0x0003228f) list_single_graphic_hl_pane_g4_ParamLimits

0x7c97,	// (0x0003228f) list_single_graphic_hl_pane_g4

0x7ca3,	// (0x0003229b) list_single_graphic_hl_pane_g5_ParamLimits

0x7ca3,	// (0x0003229b) list_single_graphic_hl_pane_g5

0x0004,

0xfbe2,	// (0x0003a1da) list_single_graphic_hl_pane_g_ParamLimits

0xfbe2,	// (0x0003a1da) list_single_graphic_hl_pane_g

0x7cb7,	// (0x000322af) list_single_graphic_hl_pane_t1_ParamLimits

0x7cb7,	// (0x000322af) list_single_graphic_hl_pane_t1

0xcaa0,	// (0x00037098) aid_size_min_hl_cp2

0xcaa9,	// (0x000370a1) list_highlight_pane_cp34_cp2_ParamLimits

0xcaa9,	// (0x000370a1) list_highlight_pane_cp34_cp2

0xca93,	// (0x0003708b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca93,	// (0x0003708b) list_single_graphic_hl_pane_g1_cp2

0xcab6,	// (0x000370ae) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcab6,	// (0x000370ae) list_single_graphic_hl_pane_g2_cp2

0xcac2,	// (0x000370ba) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcac2,	// (0x000370ba) list_single_graphic_hl_pane_g3_cp2

0xbb5b,	// (0x00036153) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbb5b,	// (0x00036153) list_single_graphic_hl_pane_g4_cp2

0xcad0,	// (0x000370c8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcad0,	// (0x000370c8) list_single_graphic_hl_pane_g5_cp2

0x58f0,	// (0x0002fee8) control_pane_g4_ParamLimits

0x58f0,	// (0x0002fee8) control_pane_g4

0x97b4,	// (0x00033dac) bg_popup_sub_pane_cp10_ParamLimits

0xc2bd,	// (0x000368b5) list_choice_list_pane_ParamLimits

0xc2cc,	// (0x000368c4) scroll_pane_cp23

0x81f1,	// (0x000327e9) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8b4,	// (0x00036eac) list_preview_fixed_pane_ParamLimits

0xc8ca,	// (0x00036ec2) list_preview_fixed_pane_cp_ParamLimits

0xc8ca,	// (0x00036ec2) list_preview_fixed_pane_cp

0xc8d6,	// (0x00036ece) popup_preview_fixed_window_g1_ParamLimits

0xc8d6,	// (0x00036ece) popup_preview_fixed_window_g1

0xc8e2,	// (0x00036eda) popup_preview_fixed_window_g2_ParamLimits

0xc8e2,	// (0x00036eda) popup_preview_fixed_window_g2

0x0002,

0xfb6a,	// (0x0003a162) popup_preview_fixed_window_g_ParamLimits

0xfb6a,	// (0x0003a162) popup_preview_fixed_window_g

0x5519,	// (0x0002fb11) aid_navi_side_left_pane_ParamLimits

0x552e,	// (0x0002fb26) aid_navi_side_right_pane_ParamLimits

0x5546,	// (0x0002fb3e) navi_icon_pane_stacon_ParamLimits

0x555a,	// (0x0002fb52) navi_navi_pane_stacon_ParamLimits

0x5546,	// (0x0002fb3e) navi_text_pane_stacon_ParamLimits

0x4a55,	// (0x0002f04d) main_text_info_pane

0xcafa,	// (0x000370f2) listscroll_text_info_pane

0xcb02,	// (0x000370fa) list_text_info_pane_ParamLimits

0xcb02,	// (0x000370fa) list_text_info_pane

0xcb11,	// (0x00037109) scroll_pane_cp24_ParamLimits

0xcb11,	// (0x00037109) scroll_pane_cp24

0xcb2f,	// (0x00037127) list_text_info_pane_t1_ParamLimits

0xcb2f,	// (0x00037127) list_text_info_pane_t1

0x5a52,	// (0x0003004a) popup_fast_swap2_window_ParamLimits

0x5a52,	// (0x0003004a) popup_fast_swap2_window

0xcb60,	// (0x00037158) aid_size_cell_fast2

0x7e74,	// (0x0003246c) bg_popup_window_pane_cp17

0xa118,	// (0x00034710) heading_pane_cp2

0x8440,	// (0x00032a38) listscroll_fast2_pane

0xcb6a,	// (0x00037162) grid_fast2_pane

0xcb74,	// (0x0003716c) listscroll_fast2_pane_g1

0xcb7c,	// (0x00037174) listscroll_fast2_pane_g2

0x0001,

0xfbed,	// (0x0003a1e5) listscroll_fast2_pane_g

0x8944,	// (0x00032f3c) scroll_pane_cp26

0xcb86,	// (0x0003717e) cell_fast2_pane_ParamLimits

0xcb86,	// (0x0003717e) cell_fast2_pane

0xcb9b,	// (0x00037193) cell_fast2_pane_g1

0xcba4,	// (0x0003719c) cell_fast2_pane_g2

0xcbad,	// (0x000371a5) cell_fast2_pane_g3

0x0002,

0xfbf2,	// (0x0003a1ea) cell_fast2_pane_g

0x8533,	// (0x00032b2b) grid_highlight_pane_cp9

0x5a18,	// (0x00030010) main_eswt_pane_ParamLimits

0x5a18,	// (0x00030010) main_eswt_pane

0xcb26,	// (0x0003711e) list_single_text_info_pane

0xcbb5,	// (0x000371ad) eswt_ctrl_button_pane

0xcbb5,	// (0x000371ad) eswt_ctrl_canvas_pane

0xcbbd,	// (0x000371b5) eswt_ctrl_combo_pane

0xcbb5,	// (0x000371ad) eswt_ctrl_default_pane

0xcbb5,	// (0x000371ad) eswt_ctrl_label_pane

0xcbc5,	// (0x000371bd) eswt_ctrl_wait_pane

0xcbcd,	// (0x000371c5) eswt_shell_pane

0x7e74,	// (0x0003246c) listscroll_eswt_app_pane

0xcbed,	// (0x000371e5) popup_eswt_tasktip_window_ParamLimits

0xcbed,	// (0x000371e5) popup_eswt_tasktip_window

0x9d32,	// (0x0003432a) bg_popup_window_pane_cp18

0xcbfe,	// (0x000371f6) eswt_control_pane_g1_ParamLimits

0xcbfe,	// (0x000371f6) eswt_control_pane_g1

0xcc0b,	// (0x00037203) eswt_control_pane_g2_ParamLimits

0xcc0b,	// (0x00037203) eswt_control_pane_g2

0xcc18,	// (0x00037210) eswt_control_pane_g3_ParamLimits

0xcc18,	// (0x00037210) eswt_control_pane_g3

0xcc25,	// (0x0003721d) eswt_control_pane_g4_ParamLimits

0xcc25,	// (0x0003721d) eswt_control_pane_g4

0x0003,

0xfbf9,	// (0x0003a1f1) eswt_control_pane_g_ParamLimits

0xfbf9,	// (0x0003a1f1) eswt_control_pane_g

0x87d7,	// (0x00032dcf) bg_button_pane_ParamLimits

0x87d7,	// (0x00032dcf) bg_button_pane

0x8548,	// (0x00032b40) common_borders_pane_copy2_ParamLimits

0x8548,	// (0x00032b40) common_borders_pane_copy2

0xcc32,	// (0x0003722a) control_button_pane_g1_ParamLimits

0xcc32,	// (0x0003722a) control_button_pane_g1

0xcc3e,	// (0x00037236) control_button_pane_g2_ParamLimits

0xcc3e,	// (0x00037236) control_button_pane_g2

0xcc4a,	// (0x00037242) control_button_pane_g3_ParamLimits

0xcc4a,	// (0x00037242) control_button_pane_g3

0x0002,

0xfc02,	// (0x0003a1fa) control_button_pane_g_ParamLimits

0xfc02,	// (0x0003a1fa) control_button_pane_g

0xcc5e,	// (0x00037256) control_button_pane_t1

0xcc6c,	// (0x00037264) control_button_pane_t2

0x0001,

0xfc09,	// (0x0003a201) control_button_pane_t

0x9cbe,	// (0x000342b6) bg_button_pane_g1

0x9cc6,	// (0x000342be) bg_button_pane_g2

0x9cce,	// (0x000342c6) bg_button_pane_g3

0x9cde,	// (0x000342d6) bg_button_pane_g4

0x9cd6,	// (0x000342ce) bg_button_pane_g5

0x9ce6,	// (0x000342de) bg_button_pane_g6

0x9cee,	// (0x000342e6) bg_button_pane_g7

0x9cfe,	// (0x000342f6) bg_button_pane_g8

0x9cf6,	// (0x000342ee) bg_button_pane_g9

0x0008,

0xf866,	// (0x00039e5e) bg_button_pane_g

0xc278,	// (0x00036870) common_borders_pane_ParamLimits

0xc278,	// (0x00036870) common_borders_pane

0xcbfe,	// (0x000371f6) eswt_control_pane_g1_copy1_ParamLimits

0xcbfe,	// (0x000371f6) eswt_control_pane_g1_copy1

0xcc0b,	// (0x00037203) eswt_control_pane_g2_copy1_ParamLimits

0xcc0b,	// (0x00037203) eswt_control_pane_g2_copy1

0xcc18,	// (0x00037210) eswt_control_pane_g3_copy1_ParamLimits

0xcc18,	// (0x00037210) eswt_control_pane_g3_copy1

0xcc25,	// (0x0003721d) eswt_control_pane_g4_copy1_ParamLimits

0xcc25,	// (0x0003721d) eswt_control_pane_g4_copy1

0xc2b3,	// (0x000368ab) bg_eswt_ctrl_canvas_pane_g1

0xc278,	// (0x00036870) common_borders_pane_cp2_ParamLimits

0xc278,	// (0x00036870) common_borders_pane_cp2

0xc278,	// (0x00036870) common_borders_pane_cp3_ParamLimits

0xc278,	// (0x00036870) common_borders_pane_cp3

0xcc7a,	// (0x00037272) separator_horizontal_pane

0xcc82,	// (0x0003727a) separator_vertical_pane

0xcbfe,	// (0x000371f6) eswt_control_pane_g1_copy2_ParamLimits

0xcbfe,	// (0x000371f6) eswt_control_pane_g1_copy2

0xcc0b,	// (0x00037203) eswt_control_pane_g2_copy2_ParamLimits

0xcc0b,	// (0x00037203) eswt_control_pane_g2_copy2

0xcc18,	// (0x00037210) eswt_control_pane_g3_copy2_ParamLimits

0xcc18,	// (0x00037210) eswt_control_pane_g3_copy2

0xcc25,	// (0x0003721d) eswt_control_pane_g4_copy2_ParamLimits

0xcc25,	// (0x0003721d) eswt_control_pane_g4_copy2

0x7e74,	// (0x0003246c) common_borders_pane_cp4

0xcc8b,	// (0x00037283) separator_horizontal_pane_g1

0xcc94,	// (0x0003728c) separator_horizontal_pane_g2

0xcc9d,	// (0x00037295) separator_horizontal_pane_g3

0x0002,

0xfc0e,	// (0x0003a206) separator_horizontal_pane_g

0xcbfe,	// (0x000371f6) eswt_control_pane_g1_copy3_ParamLimits

0xcbfe,	// (0x000371f6) eswt_control_pane_g1_copy3

0xcc0b,	// (0x00037203) eswt_control_pane_g2_copy3_ParamLimits

0xcc0b,	// (0x00037203) eswt_control_pane_g2_copy3

0xcc18,	// (0x00037210) eswt_control_pane_g3_copy3_ParamLimits

0xcc18,	// (0x00037210) eswt_control_pane_g3_copy3

0xcc25,	// (0x0003721d) eswt_control_pane_g4_copy3_ParamLimits

0xcc25,	// (0x0003721d) eswt_control_pane_g4_copy3

0x7e74,	// (0x0003246c) common_borders_pane_cp5

0xcca6,	// (0x0003729e) separator_vertical_pane_g1

0xccaf,	// (0x000372a7) separator_vertical_pane_g2

0xccb8,	// (0x000372b0) separator_vertical_pane_g3

0x0002,

0xfc15,	// (0x0003a20d) separator_vertical_pane_g

0xcbfe,	// (0x000371f6) eswt_control_pane_g1_copy4_ParamLimits

0xcbfe,	// (0x000371f6) eswt_control_pane_g1_copy4

0xcc0b,	// (0x00037203) eswt_control_pane_g2_copy4_ParamLimits

0xcc0b,	// (0x00037203) eswt_control_pane_g2_copy4

0xcc18,	// (0x00037210) eswt_control_pane_g3_copy4_ParamLimits

0xcc18,	// (0x00037210) eswt_control_pane_g3_copy4

0xcc25,	// (0x0003721d) eswt_control_pane_g4_copy4_ParamLimits

0xcc25,	// (0x0003721d) eswt_control_pane_g4_copy4

0xccc1,	// (0x000372b9) eswt_ctrl_combo_button_pane

0xccc9,	// (0x000372c1) eswt_ctrl_input_pane

0xccd1,	// (0x000372c9) popup_choice_list_window_cp70

0xccd9,	// (0x000372d1) eswt_ctrl_input_pane_t1

0x7e74,	// (0x0003246c) input_focus_pane_cp70

0xc278,	// (0x00036870) bg_button_pane_cp70_ParamLimits

0xc278,	// (0x00036870) bg_button_pane_cp70

0xcce7,	// (0x000372df) eswt_ctrl_combo_button_pane_g1

0xccef,	// (0x000372e7) wait_bar_pane_cp70

0x9d32,	// (0x0003432a) bg_popup_window_pane_cp70_ParamLimits

0x9d32,	// (0x0003432a) bg_popup_window_pane_cp70

0xccf7,	// (0x000372ef) popup_eswt_tasktip_window_t1

0xcd0d,	// (0x00037305) wait_bar_pane_cp71_ParamLimits

0xcd0d,	// (0x00037305) wait_bar_pane_cp71

0xcd19,	// (0x00037311) grid_eswt_app_pane

0x8c60,	// (0x00033258) scroll_pane_cp70

0xcd22,	// (0x0003731a) cell_eswt_app_pane_ParamLimits

0xcd22,	// (0x0003731a) cell_eswt_app_pane

0xcd52,	// (0x0003734a) cell_eswt_app_pane_g1_ParamLimits

0xcd52,	// (0x0003734a) cell_eswt_app_pane_g1

0xcd81,	// (0x00037379) cell_eswt_app_pane_g2_ParamLimits

0xcd81,	// (0x00037379) cell_eswt_app_pane_g2

0x0001,

0xfc1c,	// (0x0003a214) cell_eswt_app_pane_g_ParamLimits

0xfc1c,	// (0x0003a214) cell_eswt_app_pane_g

0xcdaa,	// (0x000373a2) cell_eswt_app_pane_t1_ParamLimits

0xcdaa,	// (0x000373a2) cell_eswt_app_pane_t1

0xcddc,	// (0x000373d4) grid_highlight_pane_cp70_ParamLimits

0xcddc,	// (0x000373d4) grid_highlight_pane_cp70

0x933f,	// (0x00033937) set_content_pane_g1

0x9715,	// (0x00033d0d) status_small_volume_pane

0x67ef,	// (0x00030de7) status_small_volume_pane_g1

0x67f7,	// (0x00030def) volume_small2_pane

0x6800,	// (0x00030df8) volume_small2_pane_g1

0x6809,	// (0x00030e01) volume_small2_pane_g2

0x6812,	// (0x00030e0a) volume_small2_pane_g3

0x681b,	// (0x00030e13) volume_small2_pane_g4

0x6824,	// (0x00030e1c) volume_small2_pane_g5

0x682d,	// (0x00030e25) volume_small2_pane_g6

0x6836,	// (0x00030e2e) volume_small2_pane_g7

0x683f,	// (0x00030e37) volume_small2_pane_g8

0x6848,	// (0x00030e40) volume_small2_pane_g9

0x6851,	// (0x00030e49) volume_small2_pane_g10

0x0009,

0xfc21,	// (0x0003a219) volume_small2_pane_g

0xc679,	// (0x00036c71) fep_vkb_top_text_pane_g1_ParamLimits

0xc694,	// (0x00036c8c) fep_vkb_top_text_pane_t1_ParamLimits

0xc8ee,	// (0x00036ee6) popup_preview_fixed_window_g3_ParamLimits

0xc8ee,	// (0x00036ee6) popup_preview_fixed_window_g3

0x5f01,	// (0x000304f9) popup_toolbar_trans_pane

0xb088,	// (0x00035680) aid_height_set_list_ParamLimits

0xb099,	// (0x00035691) aid_size_parent_ParamLimits

0x97b4,	// (0x00033dac) list_highlight_pane_cp2_ParamLimits

0x933f,	// (0x00033937) set_content_pane_g1_ParamLimits

0xb29d,	// (0x00035895) list_single_image_pane_ParamLimits

0xb29d,	// (0x00035895) list_single_image_pane

0xcde8,	// (0x000373e0) aid_size_cell_image_ParamLimits

0xcde8,	// (0x000373e0) aid_size_cell_image

0xcdf5,	// (0x000373ed) grid_single_image_pane_ParamLimits

0xcdf5,	// (0x000373ed) grid_single_image_pane

0xa45c,	// (0x00034a54) list_single_image_pane_g1_ParamLimits

0xa45c,	// (0x00034a54) list_single_image_pane_g1

0xce01,	// (0x000373f9) list_single_image_pane_g2_ParamLimits

0xce01,	// (0x000373f9) list_single_image_pane_g2

0x0001,

0xfc36,	// (0x0003a22e) list_single_image_pane_g_ParamLimits

0xfc36,	// (0x0003a22e) list_single_image_pane_g

0xce15,	// (0x0003740d) list_single_image_pane_t1_ParamLimits

0xce15,	// (0x0003740d) list_single_image_pane_t1

0xce2b,	// (0x00037423) cell_image_list_pane_ParamLimits

0xce2b,	// (0x00037423) cell_image_list_pane

0xce3f,	// (0x00037437) cell_image_list_pane_g1

0xce48,	// (0x00037440) cell_image_list_pane_g2

0x0001,

0xfc3b,	// (0x0003a233) cell_image_list_pane_g

0xce51,	// (0x00037449) aid_size_cell_tb_trans_pane

0x87d7,	// (0x00032dcf) bg_tb_trans_pane

0xce63,	// (0x0003745b) grid_tb_trans_pane

0x9cbe,	// (0x000342b6) bg_tb_trans_pane_g1

0x9cc6,	// (0x000342be) bg_tb_trans_pane_g2

0x9cce,	// (0x000342c6) bg_tb_trans_pane_g3

0x9cde,	// (0x000342d6) bg_tb_trans_pane_g4

0x9cd6,	// (0x000342ce) bg_tb_trans_pane_g5

0x9cfe,	// (0x000342f6) bg_tb_trans_pane_g6

0x9cf6,	// (0x000342ee) bg_tb_trans_pane_g7

0x9ce6,	// (0x000342de) bg_tb_trans_pane_g8

0x9cee,	// (0x000342e6) bg_tb_trans_pane_g9

0x0008,

0xfc40,	// (0x0003a238) bg_tb_trans_pane_g

0xce77,	// (0x0003746f) cell_toolbar_trans_pane_ParamLimits

0xce77,	// (0x0003746f) cell_toolbar_trans_pane

0xc2b3,	// (0x000368ab) cell_toolbar_trans_pane_g1

0xbe97,	// (0x0003648f) list_form2_midp_pane_t1

0xbea5,	// (0x0003649d) list_form2_midp_pane_t2

0x0001,

0xfadd,	// (0x0003a0d5) list_form2_midp_pane_t

0xbeb3,	// (0x000364ab) scroll_pane_cp51_ParamLimits

0xc06f,	// (0x00036667) form2_midp_wait_pane_g1

0xc078,	// (0x00036670) form2_midp_wait_pane_g2

0xc081,	// (0x00036679) form2_midp_wait_pane_g3

0x0002,

0xfaf2,	// (0x0003a0ea) form2_midp_wait_pane_g

0x7f68,	// (0x00032560) list_highlight_pane_cp21_ParamLimits

0xc0cd,	// (0x000366c5) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0dc,	// (0x000366d4) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7691,	// (0x00031c89) list_single_2graphic_im_pane_ParamLimits

0x7691,	// (0x00031c89) list_single_2graphic_im_pane

0xce9d,	// (0x00037495) list_single_2graphic_im_pane_g1_ParamLimits

0xce9d,	// (0x00037495) list_single_2graphic_im_pane_g1

0xceae,	// (0x000374a6) list_single_2graphic_im_pane_g2_ParamLimits

0xceae,	// (0x000374a6) list_single_2graphic_im_pane_g2

0xceba,	// (0x000374b2) list_single_2graphic_im_pane_g3_ParamLimits

0xceba,	// (0x000374b2) list_single_2graphic_im_pane_g3

0x0003,

0xfc53,	// (0x0003a24b) list_single_2graphic_im_pane_g_ParamLimits

0xfc53,	// (0x0003a24b) list_single_2graphic_im_pane_g

0xceda,	// (0x000374d2) list_single_2graphic_im_pane_t1_ParamLimits

0xceda,	// (0x000374d2) list_single_2graphic_im_pane_t1

0xc8fa,	// (0x00036ef2) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8fa,	// (0x00036ef2) list_single_graphic_2heading_pane_fp

0x7af4,	// (0x000320ec) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7af4,	// (0x000320ec) list_single_graphic_2heading_pane_fp_g1

0xc90f,	// (0x00036f07) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc90f,	// (0x00036f07) list_single_graphic_2heading_pane_fp_g2

0x7abd,	// (0x000320b5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7abd,	// (0x000320b5) list_single_graphic_2heading_pane_fp_g3

0x7ac9,	// (0x000320c1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7ac9,	// (0x000320c1) list_single_graphic_2heading_pane_fp_g4

0xc91b,	// (0x00036f13) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc91b,	// (0x00036f13) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a172) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a172) list_single_graphic_2heading_pane_fp_g

0x7ccd,	// (0x000322c5) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7ccd,	// (0x000322c5) list_single_graphic_2heading_pane_fp_t1

0x7b2c,	// (0x00032124) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7b2c,	// (0x00032124) list_single_graphic_2heading_pane_fp_t2

0x7ce3,	// (0x000322db) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7ce3,	// (0x000322db) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5c,	// (0x0003a254) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5c,	// (0x0003a254) list_single_graphic_2heading_pane_fp_t

0xc33f,	// (0x00036937) fep_hwr_write_pane_g5_ParamLimits

0xc33f,	// (0x00036937) fep_hwr_write_pane_g5

0xc34b,	// (0x00036943) fep_hwr_write_pane_g6_ParamLimits

0xc34b,	// (0x00036943) fep_hwr_write_pane_g6

0xcbcd,	// (0x000371c5) eswt_shell_pane_ParamLimits

0x9d32,	// (0x0003432a) bg_popup_window_pane_cp18_ParamLimits

0xafe1,	// (0x000355d9) heading_pane_cp70

0xccf7,	// (0x000372ef) popup_eswt_tasktip_window_t1_ParamLimits

0x982b,	// (0x00033e23) aid_touch_tab_arrow_left

0x983a,	// (0x00033e32) aid_touch_tab_arrow_right

0x7eb0,	// (0x000324a8) title_pane_g3_ParamLimits

0x7eb0,	// (0x000324a8) title_pane_g3

0x8796,	// (0x00032d8e) set_value_pane_g1

0x5f01,	// (0x000304f9) popup_toolbar_trans_pane_ParamLimits

0xce51,	// (0x00037449) aid_size_cell_tb_trans_pane_ParamLimits

0x87d7,	// (0x00032dcf) bg_tb_trans_pane_ParamLimits

0xce63,	// (0x0003745b) grid_tb_trans_pane_ParamLimits

0x81f1,	// (0x000327e9) cont_note_pane_ParamLimits

0x81f1,	// (0x000327e9) cont_note_pane

0x8548,	// (0x00032b40) cont_snote2_single_text_pane_ParamLimits

0x8548,	// (0x00032b40) cont_snote2_single_text_pane

0x8548,	// (0x00032b40) cont_snote2_single_graphic_pane_ParamLimits

0x8548,	// (0x00032b40) cont_snote2_single_graphic_pane

0xa333,	// (0x0003492b) cont_note_wait_pane_ParamLimits

0xa333,	// (0x0003492b) cont_note_wait_pane

0xa333,	// (0x0003492b) cont_note_image_pane_ParamLimits

0xa333,	// (0x0003492b) cont_note_image_pane

0xcf0b,	// (0x00037503) popup_note2_window_g1_ParamLimits

0xcf0b,	// (0x00037503) popup_note2_window_g1

0xcf3c,	// (0x00037534) popup_note2_window_t1_ParamLimits

0xcf3c,	// (0x00037534) popup_note2_window_t1

0xcf81,	// (0x00037579) popup_note2_window_t2_ParamLimits

0xcf81,	// (0x00037579) popup_note2_window_t2

0xcfc6,	// (0x000375be) popup_note2_window_t3_ParamLimits

0xcfc6,	// (0x000375be) popup_note2_window_t3

0xd00b,	// (0x00037603) popup_note2_window_t4_ParamLimits

0xd00b,	// (0x00037603) popup_note2_window_t4

0x8275,	// (0x0003286d) popup_note2_window_t5_ParamLimits

0x8275,	// (0x0003286d) popup_note2_window_t5

0x0004,

0xfc68,	// (0x0003a260) popup_note2_window_t_ParamLimits

0xfc68,	// (0x0003a260) popup_note2_window_t

0xd03a,	// (0x00037632) popup_note2_image_window_g1_ParamLimits

0xd03a,	// (0x00037632) popup_note2_image_window_g1

0xd046,	// (0x0003763e) popup_note2_image_window_g2_ParamLimits

0xd046,	// (0x0003763e) popup_note2_image_window_g2

0x0001,

0xfc73,	// (0x0003a26b) popup_note2_image_window_g_ParamLimits

0xfc73,	// (0x0003a26b) popup_note2_image_window_g

0xd058,	// (0x00037650) popup_note2_image_window_t1_ParamLimits

0xd058,	// (0x00037650) popup_note2_image_window_t1

0xd070,	// (0x00037668) popup_note2_image_window_t2_ParamLimits

0xd070,	// (0x00037668) popup_note2_image_window_t2

0xd088,	// (0x00037680) popup_note2_image_window_t3_ParamLimits

0xd088,	// (0x00037680) popup_note2_image_window_t3

0x0002,

0xfc78,	// (0x0003a270) popup_note2_image_window_t_ParamLimits

0xfc78,	// (0x0003a270) popup_note2_image_window_t

0xa341,	// (0x00034939) popup_note2_wait_window_g1_ParamLimits

0xa341,	// (0x00034939) popup_note2_wait_window_g1

0xd0a4,	// (0x0003769c) popup_note2_wait_window_g2_ParamLimits

0xd0a4,	// (0x0003769c) popup_note2_wait_window_g2

0xa359,	// (0x00034951) popup_note2_wait_window_g3_ParamLimits

0xa359,	// (0x00034951) popup_note2_wait_window_g3

0x0002,

0xfc7f,	// (0x0003a277) popup_note2_wait_window_g_ParamLimits

0xfc7f,	// (0x0003a277) popup_note2_wait_window_g

0xd0b0,	// (0x000376a8) popup_note2_wait_window_t1_ParamLimits

0xd0b0,	// (0x000376a8) popup_note2_wait_window_t1

0xd0ce,	// (0x000376c6) popup_note2_wait_window_t2_ParamLimits

0xd0ce,	// (0x000376c6) popup_note2_wait_window_t2

0xd0ec,	// (0x000376e4) popup_note2_wait_window_t3_ParamLimits

0xd0ec,	// (0x000376e4) popup_note2_wait_window_t3

0xd0fe,	// (0x000376f6) popup_note2_wait_window_t4_ParamLimits

0xd0fe,	// (0x000376f6) popup_note2_wait_window_t4

0x0003,

0xfc86,	// (0x0003a27e) popup_note2_wait_window_t_ParamLimits

0xfc86,	// (0x0003a27e) popup_note2_wait_window_t

0xd110,	// (0x00037708) wait_bar2_pane_ParamLimits

0xd110,	// (0x00037708) wait_bar2_pane

0xd128,	// (0x00037720) popup_snote2_single_text_window_g1_ParamLimits

0xd128,	// (0x00037720) popup_snote2_single_text_window_g1

0xd150,	// (0x00037748) popup_snote2_single_text_window_t1_ParamLimits

0xd150,	// (0x00037748) popup_snote2_single_text_window_t1

0xd19c,	// (0x00037794) popup_snote2_single_text_window_t2_ParamLimits

0xd19c,	// (0x00037794) popup_snote2_single_text_window_t2

0xd1e8,	// (0x000377e0) popup_snote2_single_text_window_t3_ParamLimits

0xd1e8,	// (0x000377e0) popup_snote2_single_text_window_t3

0xd229,	// (0x00037821) popup_snote2_single_text_window_t4_ParamLimits

0xd229,	// (0x00037821) popup_snote2_single_text_window_t4

0xd25f,	// (0x00037857) popup_snote2_single_text_window_t5_ParamLimits

0xd25f,	// (0x00037857) popup_snote2_single_text_window_t5

0x0004,

0xfc8f,	// (0x0003a287) popup_snote2_single_text_window_t_ParamLimits

0xfc8f,	// (0x0003a287) popup_snote2_single_text_window_t

0xd28a,	// (0x00037882) popup_snote2_single_graphic_window_g1_ParamLimits

0xd28a,	// (0x00037882) popup_snote2_single_graphic_window_g1

0xd2b2,	// (0x000378aa) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2b2,	// (0x000378aa) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9a,	// (0x0003a292) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9a,	// (0x0003a292) popup_snote2_single_graphic_window_g

0xd2da,	// (0x000378d2) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2da,	// (0x000378d2) popup_snote2_single_graphic_window_t1

0xd326,	// (0x0003791e) popup_snote2_single_graphic_window_t2_ParamLimits

0xd326,	// (0x0003791e) popup_snote2_single_graphic_window_t2

0xd1e8,	// (0x000377e0) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1e8,	// (0x000377e0) popup_snote2_single_graphic_window_t3

0xd229,	// (0x00037821) popup_snote2_single_graphic_window_t4_ParamLimits

0xd229,	// (0x00037821) popup_snote2_single_graphic_window_t4

0xd25f,	// (0x00037857) popup_snote2_single_graphic_window_t5_ParamLimits

0xd25f,	// (0x00037857) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9f,	// (0x0003a297) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9f,	// (0x0003a297) popup_snote2_single_graphic_window_t

0xbd74,	// (0x0003636c) clock_nsta_pane_cp2_t1

0xbd74,	// (0x0003636c) clock_nsta_pane_cp2_t2

0x0001,

0xfab3,	// (0x0003a0ab) clock_nsta_pane_cp2_t

0x52d6,	// (0x0002f8ce) form_field_data_wide_pane_g1_ParamLimits

0x87e5,	// (0x00032ddd) form_field_data_wide_pane_g2_ParamLimits

0x87e5,	// (0x00032ddd) form_field_data_wide_pane_g2

0x87f1,	// (0x00032de9) form_field_data_wide_pane_g3_ParamLimits

0x87f1,	// (0x00032de9) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00039c73) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00039c73) form_field_data_wide_pane_g

0xbc77,	// (0x0003626f) grid_touch_3_pane_ParamLimits

0xbc77,	// (0x0003626f) grid_touch_3_pane

0xd372,	// (0x0003796a) cell_touch_3_pane_ParamLimits

0xd372,	// (0x0003796a) cell_touch_3_pane

0xc2b3,	// (0x000368ab) cell_touch_3_pane_g1

0xc2b3,	// (0x000368ab) cell_touch_3_pane_g2

0x0001,

0xfb38,	// (0x0003a130) cell_touch_3_pane_g

0x82a7,	// (0x0003289f) cont_query_data_pane

0x82af,	// (0x000328a7) cont_query_data_pane_cp1

0xd3a0,	// (0x00037998) button_value_adjust_pane_cp7

0xd3a8,	// (0x000379a0) query_popup_pane_cp3

0x8f47,	// (0x0003353f) bg_popup_sub_pane_cp22_ParamLimits

0x565b,	// (0x0002fc53) navi_navi_volume_pane_cp2

0x5676,	// (0x0002fc6e) popup_side_volume_key_window_g2

0x5685,	// (0x0002fc7d) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00039d09) popup_side_volume_key_window_g

0x56a2,	// (0x0002fc9a) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00039d10) popup_side_volume_key_window_t

0x91fe,	// (0x000337f6) popup_side_volume_key_window_ParamLimits

0x4f37,	// (0x0002f52f) list_double_graphic_pane_g4_ParamLimits

0x4f37,	// (0x0002f52f) list_double_graphic_pane_g4

0x76d0,	// (0x00031cc8) list_single_2heading_msg_pane_ParamLimits

0x76d0,	// (0x00031cc8) list_single_2heading_msg_pane

0x7d03,	// (0x000322fb) list_single_2heading_msg_pane_g1_ParamLimits

0x7d03,	// (0x000322fb) list_single_2heading_msg_pane_g1

0x4d66,	// (0x0002f35e) list_single_2heading_msg_pane_g2_ParamLimits

0x4d66,	// (0x0002f35e) list_single_2heading_msg_pane_g2

0x7d0f,	// (0x00032307) list_single_2heading_msg_pane_g3_ParamLimits

0x7d0f,	// (0x00032307) list_single_2heading_msg_pane_g3

0x7d1b,	// (0x00032313) list_single_2heading_msg_pane_g4_ParamLimits

0x7d1b,	// (0x00032313) list_single_2heading_msg_pane_g4

0x0003,

0xfcaa,	// (0x0003a2a2) list_single_2heading_msg_pane_g_ParamLimits

0xfcaa,	// (0x0003a2a2) list_single_2heading_msg_pane_g

0x7d33,	// (0x0003232b) list_single_2heading_msg_pane_t1_ParamLimits

0x7d33,	// (0x0003232b) list_single_2heading_msg_pane_t1

0x7d5b,	// (0x00032353) list_single_2heading_msg_pane_t2_ParamLimits

0x7d5b,	// (0x00032353) list_single_2heading_msg_pane_t2

0x7d8f,	// (0x00032387) list_single_2heading_msg_pane_t3_ParamLimits

0x7d8f,	// (0x00032387) list_single_2heading_msg_pane_t3

0x7dc8,	// (0x000323c0) list_single_2heading_msg_pane_t4_ParamLimits

0x7dc8,	// (0x000323c0) list_single_2heading_msg_pane_t4

0x0003,

0xfcb3,	// (0x0003a2ab) list_single_2heading_msg_pane_t_ParamLimits

0xfcb3,	// (0x0003a2ab) list_single_2heading_msg_pane_t

0x7ebc,	// (0x000324b4) title_pane_g4_ParamLimits

0x7ebc,	// (0x000324b4) title_pane_g4

0x546a,	// (0x0002fa62) title_pane_stacon_g3_ParamLimits

0x546a,	// (0x0002fa62) title_pane_stacon_g3

0xcece,	// (0x000374c6) list_single_2graphic_im_pane_g4_ParamLimits

0xcece,	// (0x000374c6) list_single_2graphic_im_pane_g4

0xad9e,	// (0x00035396) popup_side_volume_key_window_cp

0xb5b9,	// (0x00035bb1) main_idle_act2_pane_t1

0x5ff3,	// (0x000305eb) toolbar_button_pane_g10

0x8740,	// (0x00032d38) popup_toolbar_window_cp1

0xbd65,	// (0x0003635d) clock_nsta_pane_cp_t1

0xbd65,	// (0x0003635d) clock_nsta_pane_cp_t2

0x0001,

0xfaae,	// (0x0003a0a6) clock_nsta_pane_cp_t

0x565b,	// (0x0002fc53) navi_navi_volume_pane_cp2_ParamLimits

0x566a,	// (0x0002fc62) popup_side_volume_key_window_g1_ParamLimits

0x5676,	// (0x0002fc6e) popup_side_volume_key_window_g2_ParamLimits

0x5685,	// (0x0002fc7d) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00039d09) popup_side_volume_key_window_g_ParamLimits

0x645b,	// (0x00030a53) fep_hwr_aid_pane

0x6502,	// (0x00030afa) bg_fep_hwr_top_pane_g4_ParamLimits

0xc30f,	// (0x00036907) fep_hwr_top_pane_g1_ParamLimits

0xc321,	// (0x00036919) fep_hwr_top_pane_g2_ParamLimits

0x6522,	// (0x00030b1a) fep_hwr_top_pane_g3_ParamLimits

0xfb03,	// (0x0003a0fb) fep_hwr_top_pane_g_ParamLimits

0x6537,	// (0x00030b2f) fep_hwr_top_text_pane_ParamLimits

0xab61,	// (0x00035159) aid_touch_tab_arrow_arrow_2

0xab6a,	// (0x00035162) aid_touch_tab_arrow_left_2

0x646f,	// (0x00030a67) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x64a6,	// (0x00030a9e) fep_hwr_prediction_pane

0xc481,	// (0x00036a79) fep_vkb_prediction_pane

0xc585,	// (0x00036b7d) fep_vkb_side_pane_g3_ParamLimits

0xc585,	// (0x00036b7d) fep_vkb_side_pane_g3

0x66b2,	// (0x00030caa) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x671e,	// (0x00030d16) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x672b,	// (0x00030d23) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb2,	// (0x0003a1aa) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x685a,	// (0x00030e52) fep_hwr_prediction_pane_g1

0x6864,	// (0x00030e5c) fep_hwr_prediction_pane_g2

0x686c,	// (0x00030e64) fep_hwr_prediction_pane_g3

0x6874,	// (0x00030e6c) fep_hwr_prediction_pane_g4

0x0003,

0xfcbc,	// (0x0003a2b4) fep_hwr_prediction_pane_g

0xd3cd,	// (0x000379c5) fep_vkb_prediction_pane_g1

0xd3d7,	// (0x000379cf) fep_vkb_prediction_pane_g2

0xd3df,	// (0x000379d7) fep_vkb_prediction_pane_g3

0xd3e7,	// (0x000379df) fep_vkb_prediction_pane_g4

0x0003,

0xfcc5,	// (0x0003a2bd) fep_vkb_prediction_pane_g

0x62db,	// (0x000308d3) slider_set_pane_g3

0x62ef,	// (0x000308e7) slider_set_pane_g4

0x6307,	// (0x000308ff) slider_set_pane_g5

0x62db,	// (0x000308d3) slider_set_pane_g6

0x631d,	// (0x00030915) slider_set_pane_g7

0xb1fe,	// (0x000357f6) slider_form_pane_g3

0xb207,	// (0x000357ff) slider_form_pane_g4

0xb20f,	// (0x00035807) slider_form_pane_g5

0xb1fe,	// (0x000357f6) slider_form_pane_g6

0xb217,	// (0x0003580f) slider_form_pane_g7

0xb863,	// (0x00035e5b) slider_set_pane_vc_g3

0xb86c,	// (0x00035e64) slider_set_pane_vc_g4

0xb875,	// (0x00035e6d) slider_set_pane_vc_g5

0xb863,	// (0x00035e5b) slider_set_pane_vc_g6

0xb87e,	// (0x00035e76) slider_set_pane_vc_g7

0xba3e,	// (0x00036036) slider_form_pane_vc_g1

0xba47,	// (0x0003603f) slider_form_pane_vc_g2

0xba50,	// (0x00036048) slider_form_pane_vc_g3

0xba3e,	// (0x00036036) slider_form_pane_vc_g4

0xba59,	// (0x00036051) slider_form_pane_vc_g5

0x0004,

0xfa80,	// (0x0003a078) slider_form_pane_vc_g

0x4a55,	// (0x0002f04d) main_idle_act3_pane

0xd3ef,	// (0x000379e7) ai3_links_pane

0xd3f8,	// (0x000379f0) popup_ai3_data_window_ParamLimits

0xd3f8,	// (0x000379f0) popup_ai3_data_window

0x7e74,	// (0x0003246c) grid_ai3_links_pane

0xd412,	// (0x00037a0a) cell_ai3_links_pane_ParamLimits

0xd412,	// (0x00037a0a) cell_ai3_links_pane

0xd42a,	// (0x00037a22) bg_popup_sub_pane_cp11

0xd437,	// (0x00037a2f) cell_ai3_links_pane_g1

0x7e74,	// (0x0003246c) bg_popup_sub_pane_cp12

0xd45c,	// (0x00037a54) heading_ai3_data_pane

0xd464,	// (0x00037a5c) list_ai3_gene_pane

0xd470,	// (0x00037a68) popup_ai3_data_window_g1

0xd478,	// (0x00037a70) heading_ai3_data_pane_g1

0xd480,	// (0x00037a78) heading_ai3_data_pane_t1

0xd48e,	// (0x00037a86) list_double_ai3_gene_pane_ParamLimits

0xd48e,	// (0x00037a86) list_double_ai3_gene_pane

0xd49b,	// (0x00037a93) list_single_ai3_gene_pane_ParamLimits

0xd49b,	// (0x00037a93) list_single_ai3_gene_pane

0xc278,	// (0x00036870) list_highlight_pane_cp7_ParamLimits

0xc278,	// (0x00036870) list_highlight_pane_cp7

0xd4a8,	// (0x00037aa0) list_single_a13_gene_pane_t1_ParamLimits

0xd4a8,	// (0x00037aa0) list_single_a13_gene_pane_t1

0xd4bf,	// (0x00037ab7) list_single_ai3_gene_pane_g1

0xd4c8,	// (0x00037ac0) list_single_ai3_gene_pane_g2

0x0001,

0xfcce,	// (0x0003a2c6) list_single_ai3_gene_pane_g

0xd4d0,	// (0x00037ac8) list_double_ai3_gene_pane_g1_ParamLimits

0xd4d0,	// (0x00037ac8) list_double_ai3_gene_pane_g1

0xd4dc,	// (0x00037ad4) list_double_ai3_gene_pane_t1_ParamLimits

0xd4dc,	// (0x00037ad4) list_double_ai3_gene_pane_t1

0xd4f8,	// (0x00037af0) list_double_ai3_gene_pane_t2_ParamLimits

0xd4f8,	// (0x00037af0) list_double_ai3_gene_pane_t2

0xd50e,	// (0x00037b06) list_double_ai3_gene_pane_t3_ParamLimits

0xd50e,	// (0x00037b06) list_double_ai3_gene_pane_t3

0x0002,

0xfcd3,	// (0x0003a2cb) list_double_ai3_gene_pane_t_ParamLimits

0xfcd3,	// (0x0003a2cb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7cf9,	// (0x000322f1) aid_size_min_col_2

0xd3b9,	// (0x000379b1) aid_size_min_msg_ParamLimits

0xd3b9,	// (0x000379b1) aid_size_min_msg

0xc685,	// (0x00036c7d) fep_vkb_top_text_pane_g2_ParamLimits

0xc685,	// (0x00036c7d) fep_vkb_top_text_pane_g2

0x0001,

0xfb33,	// (0x0003a12b) fep_vkb_top_text_pane_g_ParamLimits

0xfb33,	// (0x0003a12b) fep_vkb_top_text_pane_g

0x4a55,	// (0x0002f04d) main_hc_apps_shell_pane

0xd52b,	// (0x00037b23) grid_hc_apps_pane_ParamLimits

0xd52b,	// (0x00037b23) grid_hc_apps_pane

0xd53a,	// (0x00037b32) list_hc_apps_pane

0xd542,	// (0x00037b3a) scroll_pane_cp37_ParamLimits

0xd542,	// (0x00037b3a) scroll_pane_cp37

0xd54e,	// (0x00037b46) cell_hc_apps_pane_ParamLimits

0xd54e,	// (0x00037b46) cell_hc_apps_pane

0xd5fc,	// (0x00037bf4) cell_hc_apps_pane_g1_ParamLimits

0xd5fc,	// (0x00037bf4) cell_hc_apps_pane_g1

0xd62d,	// (0x00037c25) cell_hc_apps_pane_g2_ParamLimits

0xd62d,	// (0x00037c25) cell_hc_apps_pane_g2

0xd649,	// (0x00037c41) cell_hc_apps_pane_g3_ParamLimits

0xd649,	// (0x00037c41) cell_hc_apps_pane_g3

0x0002,

0xfcda,	// (0x0003a2d2) cell_hc_apps_pane_g_ParamLimits

0xfcda,	// (0x0003a2d2) cell_hc_apps_pane_g

0xd66b,	// (0x00037c63) cell_hc_apps_pane_t1_ParamLimits

0xd66b,	// (0x00037c63) cell_hc_apps_pane_t1

0x81f1,	// (0x000327e9) grid_highlight_pane_cp10_ParamLimits

0x81f1,	// (0x000327e9) grid_highlight_pane_cp10

0xd6ab,	// (0x00037ca3) list_single_hc_apps_pane_ParamLimits

0xd6ab,	// (0x00037ca3) list_single_hc_apps_pane

0xd707,	// (0x00037cff) list_single_hc_apps_pane_g1

0x7ded,	// (0x000323e5) list_single_hc_apps_pane_g2

0x0001,

0xfce1,	// (0x0003a2d9) list_single_hc_apps_pane_g

0x7e06,	// (0x000323fe) list_single_hc_apps_pane_g2_copy1

0x7e22,	// (0x0003241a) list_single_hc_apps_pane_t1

0x7f68,	// (0x00032560) bg_set_opt_pane_cp_ParamLimits

0x4cb6,	// (0x0002f2ae) setting_slider_pane_t1_ParamLimits

0x4ccf,	// (0x0002f2c7) setting_slider_pane_t2_ParamLimits

0x4ce9,	// (0x0002f2e1) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00039b56) setting_slider_pane_t_ParamLimits

0x4d01,	// (0x0002f2f9) slider_set_pane_ParamLimits

0x5904,	// (0x0002fefc) control_pane_g5_ParamLimits

0x5904,	// (0x0002fefc) control_pane_g5

0xb04d,	// (0x00035645) slider_set_pane_g1_ParamLimits

0x62cf,	// (0x000308c7) slider_set_pane_g2_ParamLimits

0x62db,	// (0x000308d3) slider_set_pane_g3_ParamLimits

0x62ef,	// (0x000308e7) slider_set_pane_g4_ParamLimits

0x6307,	// (0x000308ff) slider_set_pane_g5_ParamLimits

0x62db,	// (0x000308d3) slider_set_pane_g6_ParamLimits

0x631d,	// (0x00030915) slider_set_pane_g7_ParamLimits

0xf964,	// (0x00039f5c) slider_set_pane_g_ParamLimits

0x92ea,	// (0x000338e2) navi_icon_text_pane_ParamLimits

0x97ec,	// (0x00033de4) aid_fill_nsta_2_ParamLimits

0x982b,	// (0x00033e23) aid_touch_tab_arrow_left_ParamLimits

0x983a,	// (0x00033e32) aid_touch_tab_arrow_right_ParamLimits

0x98a7,	// (0x00033e9f) clock_nsta_pane_ParamLimits

0xab43,	// (0x0003513b) navi_icon_pane_g1_ParamLimits

0xab4f,	// (0x00035147) navi_text_pane_t1_ParamLimits

0xbe71,	// (0x00036469) navi_icon_text_pane_g1_ParamLimits

0xbe7d,	// (0x00036475) navi_icon_text_pane_t1_ParamLimits

0xd707,	// (0x00037cff) list_single_hc_apps_pane_g1_ParamLimits

0x7ded,	// (0x000323e5) list_single_hc_apps_pane_g2_ParamLimits

0xfce1,	// (0x0003a2d9) list_single_hc_apps_pane_g_ParamLimits

0x7e06,	// (0x000323fe) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7e22,	// (0x0003241a) list_single_hc_apps_pane_t1_ParamLimits

0x4bc0,	// (0x0002f1b8) popup_toolbar2_fixed_window_ParamLimits

0x4bc0,	// (0x0002f1b8) popup_toolbar2_fixed_window

0x5ef7,	// (0x000304ef) popup_toolbar2_float_window

0x7e74,	// (0x0003246c) bg_popup_sub_pane_cp27

0xd720,	// (0x00037d18) grid_toolbar2_float_pane

0x7e74,	// (0x0003246c) bg_popup_sub_pane_cp26

0xd720,	// (0x00037d18) grid_toolbar2_fixed_pane

0xd728,	// (0x00037d20) cell_toolbar2_fixed_pane_ParamLimits

0xd728,	// (0x00037d20) cell_toolbar2_fixed_pane

0xd738,	// (0x00037d30) cell_toolbar2_fixed_pane_g1

0xd741,	// (0x00037d39) toolbar2_fixed_button_pane

0x9cbe,	// (0x000342b6) toolbar2_fixed_button_pane_g1

0x9cc6,	// (0x000342be) toolbar2_fixed_button_pane_g2

0x9cce,	// (0x000342c6) toolbar2_fixed_button_pane_g3

0x9cde,	// (0x000342d6) toolbar2_fixed_button_pane_g4

0x9cd6,	// (0x000342ce) toolbar2_fixed_button_pane_g5

0x9ce6,	// (0x000342de) toolbar2_fixed_button_pane_g6

0x9cee,	// (0x000342e6) toolbar2_fixed_button_pane_g7

0x9cfe,	// (0x000342f6) toolbar2_fixed_button_pane_g8

0x9cf6,	// (0x000342ee) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x00039e5e) toolbar2_fixed_button_pane_g

0xd749,	// (0x00037d41) cell_toolbar2_float_pane_ParamLimits

0xd749,	// (0x00037d41) cell_toolbar2_float_pane

0xd75a,	// (0x00037d52) cell_toolbar2_float_pane_g1

0xd741,	// (0x00037d39) toolbar2_fixed_button_pane_cp

0xc3e1,	// (0x000369d9) fep_vkb_accented_list_pane_ParamLimits

0xc3e1,	// (0x000369d9) fep_vkb_accented_list_pane

0x6692,	// (0x00030c8a) bg_popup_fep_shadow_pane_g9

0x946a,	// (0x00033a62) bg_popup_fep_shadow_pane_cp3

0x892b,	// (0x00032f23) list_accented_list_pane

0xd763,	// (0x00037d5b) list_single_accented_list_pane_ParamLimits

0xd763,	// (0x00037d5b) list_single_accented_list_pane

0x946a,	// (0x00033a62) list_highlight_pane_cp10

0xd774,	// (0x00037d6c) list_single_accented_list_pane_t1

0x5e47,	// (0x0003043f) popup_slider_window_ParamLimits

0x5e47,	// (0x0003043f) popup_slider_window

0xd3b0,	// (0x000379a8) aid_indentation_list_msg

0xd82e,	// (0x00037e26) bg_popup_window_pane_cp19

0xd898,	// (0x00037e90) popup_slider_window_g1

0xd8b4,	// (0x00037eac) popup_slider_window_g2

0xd8d0,	// (0x00037ec8) popup_slider_window_g3

0x0005,

0xfce6,	// (0x0003a2de) popup_slider_window_g

0xd92c,	// (0x00037f24) popup_slider_window_t1

0xd9a0,	// (0x00037f98) small_volume_slider_vertical_pane

0xc2b3,	// (0x000368ab) small_volume_slider_vertical_pane_g1

0xc2b3,	// (0x000368ab) small_volume_slider_vertical_pane_g2

0xd9bc,	// (0x00037fb4) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf8,	// (0x0003a2f0) small_volume_slider_vertical_pane_g

0x4978,	// (0x0002ef70) area_side_right_pane_ParamLimits

0x4978,	// (0x0002ef70) area_side_right_pane

0x687c,	// (0x00030e74) aid_size_side_button_ParamLimits

0x687c,	// (0x00030e74) aid_size_side_button

0x6890,	// (0x00030e88) grid_sctrl_middle_pane_ParamLimits

0x6890,	// (0x00030e88) grid_sctrl_middle_pane

0x68af,	// (0x00030ea7) sctrl_sk_bottom_pane

0x68c0,	// (0x00030eb8) sctrl_sk_top_pane

0x68d2,	// (0x00030eca) aid_touch_sctrl_top

0x68df,	// (0x00030ed7) bg_sctrl_sk_pane_ParamLimits

0x68df,	// (0x00030ed7) bg_sctrl_sk_pane

0x68ed,	// (0x00030ee5) sctrl_sk_top_pane_g1

0x68fa,	// (0x00030ef2) sctrl_sk_top_pane_t1

0x68d2,	// (0x00030eca) aid_touch_sctrl_bottom

0x68df,	// (0x00030ed7) bg_sctrl_sk_pane_cp_ParamLimits

0x68df,	// (0x00030ed7) bg_sctrl_sk_pane_cp

0x6915,	// (0x00030f0d) sctrl_sk_bottom_pane_g1

0x68fa,	// (0x00030ef2) sctrl_sk_bottom_pane_t1

0x691e,	// (0x00030f16) cell_sctrl_middle_pane_ParamLimits

0x691e,	// (0x00030f16) cell_sctrl_middle_pane

0x6939,	// (0x00030f31) aid_touch_sctrl_middle_ParamLimits

0x6939,	// (0x00030f31) aid_touch_sctrl_middle

0x694b,	// (0x00030f43) bg_sctrl_middle_pane_ParamLimits

0x694b,	// (0x00030f43) bg_sctrl_middle_pane

0x66b2,	// (0x00030caa) cell_sctrl_middle_pane_g1_ParamLimits

0x66b2,	// (0x00030caa) cell_sctrl_middle_pane_g1

0x6959,	// (0x00030f51) cell_sctrl_middle_pane_g2_ParamLimits

0x6959,	// (0x00030f51) cell_sctrl_middle_pane_g2

0x0001,

0xfd04,	// (0x0003a2fc) cell_sctrl_middle_pane_g_ParamLimits

0xfd04,	// (0x0003a2fc) cell_sctrl_middle_pane_g

0x9cbe,	// (0x000342b6) bg_sctrl_middle_pane_g1

0x9cce,	// (0x000342c6) bg_sctrl_middle_pane_g2

0x9cc6,	// (0x000342be) bg_sctrl_middle_pane_g3

0x9cd6,	// (0x000342ce) bg_sctrl_middle_pane_g4

0x9cde,	// (0x000342d6) bg_sctrl_middle_pane_g5

0x9ce6,	// (0x000342de) bg_sctrl_middle_pane_g6

0x9cee,	// (0x000342e6) bg_sctrl_middle_pane_g7

0x9cf6,	// (0x000342ee) bg_sctrl_middle_pane_g8

0x0007,

0xfd09,	// (0x0003a301) bg_sctrl_middle_pane_g

0x9cfe,	// (0x000342f6) bg_sctrl_middle_pane_g8_copy1

0x9cbe,	// (0x000342b6) bg_sctrl_sk_pane_g1

0x9cc6,	// (0x000342be) bg_sctrl_sk_pane_g2

0x9cce,	// (0x000342c6) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x00039e5e) bg_sctrl_sk_pane_g

0x8706,	// (0x00032cfe) aid_size_touch_scroll_bar

0x9cde,	// (0x000342d6) bg_sctrl_sk_pane_g4

0x9cd6,	// (0x000342ce) bg_sctrl_sk_pane_g5

0x9ce6,	// (0x000342de) bg_sctrl_sk_pane_g6

0x9cee,	// (0x000342e6) bg_sctrl_sk_pane_g7

0x9cfe,	// (0x000342f6) bg_sctrl_sk_pane_g8

0x9cf6,	// (0x000342ee) bg_sctrl_sk_pane_g9

0x5ab0,	// (0x000300a8) popup_fep_china_hwr2_fs_candidate_window

0x5aba,	// (0x000300b2) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5aba,	// (0x000300b2) popup_fep_china_hwr2_fs_control_window

0x66b2,	// (0x00030caa) sctrl_sk_top_pane_g2

0x0001,

0xfcff,	// (0x0003a2f7) sctrl_sk_top_pane_g

0xd9c5,	// (0x00037fbd) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c5,	// (0x00037fbd) aid_fep_china_hwr2_fs_cell

0xd9d7,	// (0x00037fcf) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d7,	// (0x00037fcf) bg_popup_fep_shadow_pane_cp4

0xd9ee,	// (0x00037fe6) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ee,	// (0x00037fe6) bg_popup_fep_shadow_pane_cp5

0xda00,	// (0x00037ff8) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda00,	// (0x00037ff8) popup_fep_china_hwr2_fs_control_bar_grid

0xda10,	// (0x00038008) popup_fep_china_hwr2_fs_control_funtion_grid

0xda18,	// (0x00038010) aid_fep_china_hwr2_fs_candi_cell

0x7e74,	// (0x0003246c) bg_popup_fep_shadow_pane_cp6

0xda22,	// (0x0003801a) popup_fep_china_hwr2_fs_candidate_grid

0xda2c,	// (0x00038024) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda2c,	// (0x00038024) cell_fep_china_hwr2_fs_funtion_grid

0xc2b3,	// (0x000368ab) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda44,	// (0x0003803c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda44,	// (0x0003803c) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda52,	// (0x0003804a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda52,	// (0x0003804a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1a,	// (0x0003a312) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1a,	// (0x0003a312) cell_fep_china_hwr2_fs_funtion_grid_g

0xda68,	// (0x00038060) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda68,	// (0x00038060) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda7d,	// (0x00038075) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda7d,	// (0x00038075) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1f,	// (0x0003a317) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1f,	// (0x0003a317) cell_fep_china_hwr2_fs_funtion_grid_t

0xda99,	// (0x00038091) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdaa1,	// (0x00038099) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa9,	// (0x000380a1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd24,	// (0x0003a31c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdab1,	// (0x000380a9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdab1,	// (0x000380a9) cell_fep_china_hwr2_fs_candidate_grid

0xdaca,	// (0x000380c2) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdad2,	// (0x000380ca) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2b3,	// (0x000368ab) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2b3,	// (0x000368ab) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb38,	// (0x0003a130) cell_fep_china_hwr2_fs_candidate_grid_g

0xdada,	// (0x000380d2) cell_fep_china_hwr2_fs_candidate_grid_t1

0x98b4,	// (0x00033eac) clock_nsta_pane_cp_24_ParamLimits

0x98b4,	// (0x00033eac) clock_nsta_pane_cp_24

0x9932,	// (0x00033f2a) indicator_nsta_pane_cp_24_ParamLimits

0x9932,	// (0x00033f2a) indicator_nsta_pane_cp_24

0xa9bf,	// (0x00034fb7) heading_pane_g1

0x0001,

0xf8cb,	// (0x00039ec3) heading_pane_g

0xb402,	// (0x000359fa) grid_sct_catagory_button_pane

0xb432,	// (0x00035a2a) scroll_pane_cp5_ParamLimits

0xbebf,	// (0x000364b7) button_value_adjust_pane_cp5_ParamLimits

0xbebf,	// (0x000364b7) button_value_adjust_pane_cp5

0xbf9e,	// (0x00036596) form2_midp_time_pane_ParamLimits

0xdae8,	// (0x000380e0) cell_sct_catagory_button_pane_ParamLimits

0xdae8,	// (0x000380e0) cell_sct_catagory_button_pane

0xc278,	// (0x00036870) bg_button_pane_cp01_ParamLimits

0xc278,	// (0x00036870) bg_button_pane_cp01

0xc2b3,	// (0x000368ab) cell_sct_catagory_button_pane_g1

0x5e86,	// (0x0003047e) popup_tb_extension_window

0xdafa,	// (0x000380f2) aid_size_cell_ext_ParamLimits

0xdafa,	// (0x000380f2) aid_size_cell_ext

0x81f1,	// (0x000327e9) bg_tb_trans_pane_cp1_ParamLimits

0x81f1,	// (0x000327e9) bg_tb_trans_pane_cp1

0xdb1a,	// (0x00038112) grid_tb_ext_pane_ParamLimits

0xdb1a,	// (0x00038112) grid_tb_ext_pane

0xdb48,	// (0x00038140) cell_tb_ext_pane_ParamLimits

0xdb48,	// (0x00038140) cell_tb_ext_pane

0xdb5f,	// (0x00038157) cell_tb_ext_pane_g1_ParamLimits

0xdb5f,	// (0x00038157) cell_tb_ext_pane_g1

0xdb7c,	// (0x00038174) cell_tb_ext_pane_t1

0x81f1,	// (0x000327e9) list_highlight_pane_cp11_ParamLimits

0x81f1,	// (0x000327e9) list_highlight_pane_cp11

0x4bdf,	// (0x0002f1d7) popup_uni_indicator_window_ParamLimits

0x4bdf,	// (0x0002f1d7) popup_uni_indicator_window

0x87d7,	// (0x00032dcf) bg_popup_sub_pane_cp14

0xdb97,	// (0x0003818f) list_uniindi_pane

0xdba3,	// (0x0003819b) uniindi_top_pane

0x81f1,	// (0x000327e9) bg_uniindi_top_pane

0xdbc2,	// (0x000381ba) uniindi_top_pane_g1

0xdbd8,	// (0x000381d0) uniindi_top_pane_g2

0x0003,

0xfd2b,	// (0x0003a323) uniindi_top_pane_g

0xdc02,	// (0x000381fa) uniindi_top_pane_t1

0xdc2c,	// (0x00038224) list_single_uniindi_pane_ParamLimits

0xdc2c,	// (0x00038224) list_single_uniindi_pane

0xc2b3,	// (0x000368ab) bg_uniindi_top_pane_g1

0xdc3f,	// (0x00038237) list_single_uniindi_pane_g1

0xdc52,	// (0x0003824a) list_single_uniindi_pane_t1

0x4a55,	// (0x0002f04d) control_bg_pane

0xdc77,	// (0x0003826f) bg_sctrl_sk_pane_cp1

0xdc80,	// (0x00038278) bg_sctrl_sk_pane_cp2

0xdc89,	// (0x00038281) control_bg_pane_g1

0xdc92,	// (0x0003828a) control_bg_pane_g2

0x0001,

0xfd34,	// (0x0003a32c) control_bg_pane_g

0xbd1a,	// (0x00036312) cell_indicator_nsta_pane_g1_ParamLimits

0xbd28,	// (0x00036320) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9c,	// (0x0003a094) cell_indicator_nsta_pane_g_ParamLimits

0x7aaa,	// (0x000320a2) form2_midp_time_pane_t1_ParamLimits

0x5a18,	// (0x00030010) main_idle_act4_pane_ParamLimits

0x5a18,	// (0x00030010) main_idle_act4_pane

0x5e86,	// (0x0003047e) popup_tb_extension_window_ParamLimits

0xdb38,	// (0x00038130) tb_ext_find_pane_ParamLimits

0xdb38,	// (0x00038130) tb_ext_find_pane

0xdc9b,	// (0x00038293) ai_gene_pane_1_cp1

0x95b1,	// (0x00033ba9) ai_gene_pane_2_cp1

0xdca3,	// (0x0003829b) list_single_idle_plugin_calendar_pane

0xdcac,	// (0x000382a4) list_single_idle_plugin_notification_pane

0xdcb5,	// (0x000382ad) list_single_idle_plugin_player_pane

0xdcbe,	// (0x000382b6) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcbe,	// (0x000382b6) list_single_idle_plugin_shortcut_pane

0xdce0,	// (0x000382d8) main_idle_act4_pane_t1

0xdcf2,	// (0x000382ea) main_idle_act4_pane_t2

0x0001,

0xfd39,	// (0x0003a331) main_idle_act4_pane_t

0xdd04,	// (0x000382fc) middle_sk_idle_act4_pane_ParamLimits

0xdd04,	// (0x000382fc) middle_sk_idle_act4_pane

0xdd1a,	// (0x00038312) popup_clock_digital_analogue_window_cp2

0xdd34,	// (0x0003832c) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd34,	// (0x0003832c) shortcut_wheel_idle_act4_pane

0xc2b3,	// (0x000368ab) shortcut_wheel_idle_act4_pane_g1

0xc2b3,	// (0x000368ab) shortcut_wheel_idle_act4_pane_g2

0xc2b3,	// (0x000368ab) shortcut_wheel_idle_act4_pane_g3

0xc2b3,	// (0x000368ab) shortcut_wheel_idle_act4_pane_g4

0xc2b3,	// (0x000368ab) shortcut_wheel_idle_act4_pane_g5

0xdd48,	// (0x00038340) shortcut_wheel_idle_act4_pane_g6

0xdd50,	// (0x00038348) shortcut_wheel_idle_act4_pane_g7

0xdd58,	// (0x00038350) shortcut_wheel_idle_act4_pane_g8

0xdd60,	// (0x00038358) shortcut_wheel_idle_act4_pane_g9

0x0008,

0x0015,	// (0x0002a60d) shortcut_wheel_idle_act4_pane_g

0xc531,	// (0x00036b29) middle_sk_idle_act4_pane_g1_ParamLimits

0xc531,	// (0x00036b29) middle_sk_idle_act4_pane_g1

0xddc4,	// (0x000383bc) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc4,	// (0x000383bc) middle_sk_idle_act4_pane_g2

0x0001,

0x0033,	// (0x0002a62b) middle_sk_idle_act4_pane_g_ParamLimits

0x0033,	// (0x0002a62b) middle_sk_idle_act4_pane_g

0xddd0,	// (0x000383c8) middle_sk_idle_act4_pane_t1_ParamLimits

0xddd0,	// (0x000383c8) middle_sk_idle_act4_pane_t1

0xdded,	// (0x000383e5) grid_ai_shortcut_pane_ParamLimits

0xdded,	// (0x000383e5) grid_ai_shortcut_pane

0xde06,	// (0x000383fe) list_highlight_pane_cp16_ParamLimits

0xde06,	// (0x000383fe) list_highlight_pane_cp16

0xde13,	// (0x0003840b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde13,	// (0x0003840b) list_single_idle_plugin_shortcut_pane_g1

0xde1f,	// (0x00038417) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1f,	// (0x00038417) list_single_idle_plugin_shortcut_pane_g2

0xde37,	// (0x0003842f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde37,	// (0x0003842f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd43,	// (0x0003a33b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd43,	// (0x0003a33b) list_single_idle_plugin_shortcut_pane_g

0xde4a,	// (0x00038442) cell_ai_shortcut_pane_ParamLimits

0xde4a,	// (0x00038442) cell_ai_shortcut_pane

0xde6e,	// (0x00038466) cell_ai_shortcut_pane_g1_ParamLimits

0xde6e,	// (0x00038466) cell_ai_shortcut_pane_g1

0xdc9b,	// (0x00038293) ai_gene_pane_1_cp2

0xde90,	// (0x00038488) ai_gene_pane_2_cp2

0xde98,	// (0x00038490) list_highlight_pane_cp15

0xdea1,	// (0x00038499) list_single_idle_plugin_calendar_pane_g1

0xde98,	// (0x00038490) list_highlight_pane_cp17

0xdea9,	// (0x000384a1) list_single_idle_plugin_calendar_pane_g1_copy1

0xdeb1,	// (0x000384a9) list_single_idle_plugin_player_pane_g1

0xb65b,	// (0x00035c53) list_single_idle_plugin_player_pane_g2

0x0001,

0x0038,	// (0x0002a630) list_single_idle_plugin_player_pane_g

0xdeb9,	// (0x000384b1) list_single_idle_plugin_player_pane_t1

0xdec7,	// (0x000384bf) list_single_idle_plugin_player_pane_t2

0xded5,	// (0x000384cd) list_single_idle_plugin_player_pane_t3

0xdee3,	// (0x000384db) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4a,	// (0x0003a342) list_single_idle_plugin_player_pane_t

0xdef1,	// (0x000384e9) wait_bar_pane_cp15

0xdef9,	// (0x000384f1) grid_ai_notification_pane

0xb65b,	// (0x00035c53) list_single_idle_plugin_notification_pane_g1

0xdf02,	// (0x000384fa) cell_ai_notification_pane_ParamLimits

0xdf02,	// (0x000384fa) cell_ai_notification_pane

0xdf0f,	// (0x00038507) cell_ai_notification_pane_g1

0xdf17,	// (0x0003850f) cell_ai_notification_pane_t1

0xdf25,	// (0x0003851d) tb_ext_find_button_pane

0xdf2d,	// (0x00038525) tb_ext_find_pane_g1

0xdf35,	// (0x0003852d) tb_ext_find_pane_t1

0x8e57,	// (0x0003344f) tb_ext_find_button_pane_g1

0xdf43,	// (0x0003853b) tb_ext_find_button_pane_g2

0x0001,

0x003d,	// (0x0002a635) tb_ext_find_button_pane_g

0xdce0,	// (0x000382d8) main_idle_act4_pane_t1_ParamLimits

0xdcf2,	// (0x000382ea) main_idle_act4_pane_t2_ParamLimits

0xfd39,	// (0x0003a331) main_idle_act4_pane_t_ParamLimits

0xdd1a,	// (0x00038312) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd28,	// (0x00038320) sat_plugin_idle_act4_pane_ParamLimits

0xdd28,	// (0x00038320) sat_plugin_idle_act4_pane

0xdf4c,	// (0x00038544) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf4c,	// (0x00038544) sat_plugin_idle_act4_pane_t1

0xdf5f,	// (0x00038557) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf5f,	// (0x00038557) sat_plugin_idle_act4_pane_t2

0xdf72,	// (0x0003856a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf72,	// (0x0003856a) sat_plugin_idle_act4_pane_t3

0xdf85,	// (0x0003857d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf85,	// (0x0003857d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd53,	// (0x0003a34b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd53,	// (0x0003a34b) sat_plugin_idle_act4_pane_t

0x4b1a,	// (0x0002f112) popup_battery_window_ParamLimits

0x4b1a,	// (0x0002f112) popup_battery_window

0x81f1,	// (0x000327e9) bg_popup_sub_pane_cp25_ParamLimits

0x81f1,	// (0x000327e9) bg_popup_sub_pane_cp25

0xdf98,	// (0x00038590) popup_battery_window_g1_ParamLimits

0xdf98,	// (0x00038590) popup_battery_window_g1

0xdfa4,	// (0x0003859c) popup_battery_window_t1_ParamLimits

0xdfa4,	// (0x0003859c) popup_battery_window_t1

0xdfb6,	// (0x000385ae) popup_battery_window_t2_ParamLimits

0xdfb6,	// (0x000385ae) popup_battery_window_t2

0x0001,

0xfd5c,	// (0x0003a354) popup_battery_window_t_ParamLimits

0xfd5c,	// (0x0003a354) popup_battery_window_t

0x947e,	// (0x00033a76) midp_canvas_pane_ParamLimits

0x94f5,	// (0x00033aed) midp_keypad_pane_ParamLimits

0x94f5,	// (0x00033aed) midp_keypad_pane

0x97b4,	// (0x00033dac) main_midp_pane_ParamLimits

0xbd83,	// (0x0003637b) signal_pane_g2_cp_ParamLimits

0xdfd3,	// (0x000385cb) aid_size_cell_midp_keypad_ParamLimits

0xdfd3,	// (0x000385cb) aid_size_cell_midp_keypad

0xdfed,	// (0x000385e5) midp_keyp_game_grid_pane_ParamLimits

0xdfed,	// (0x000385e5) midp_keyp_game_grid_pane

0xe00d,	// (0x00038605) midp_keyp_rocker_pane_ParamLimits

0xe00d,	// (0x00038605) midp_keyp_rocker_pane

0xe046,	// (0x0003863e) midp_keyp_sk_left_pane_ParamLimits

0xe046,	// (0x0003863e) midp_keyp_sk_left_pane

0xe0a0,	// (0x00038698) midp_keyp_sk_right_pane_ParamLimits

0xe0a0,	// (0x00038698) midp_keyp_sk_right_pane

0x7e74,	// (0x0003246c) bg_button_pane_cp03

0xe0fa,	// (0x000386f2) midp_keyp_sk_left_pane_g1

0x7e74,	// (0x0003246c) bg_button_pane_cp04

0xe0fa,	// (0x000386f2) midp_keyp_sk_right_pane_g1

0xc2b3,	// (0x000368ab) midp_keyp_rocker_pane_g1

0xe103,	// (0x000386fb) keyp_game_cell_pane_ParamLimits

0xe103,	// (0x000386fb) keyp_game_cell_pane

0x7e74,	// (0x0003246c) bg_button_pane_cp02

0xe116,	// (0x0003870e) keyp_game_cell_pane_g1

0x4b5e,	// (0x0002f156) popup_fep_vkb2_window_ParamLimits

0x4b5e,	// (0x0002f156) popup_fep_vkb2_window

0x6977,	// (0x00030f6f) aid_size_cell_vkb2_ParamLimits

0x6977,	// (0x00030f6f) aid_size_cell_vkb2

0x69cb,	// (0x00030fc3) popup_fep_vkb2_window_g1_ParamLimits

0x69cb,	// (0x00030fc3) popup_fep_vkb2_window_g1

0x6a13,	// (0x0003100b) vkb2_area_bottom_pane_ParamLimits

0x6a13,	// (0x0003100b) vkb2_area_bottom_pane

0x6a5f,	// (0x00031057) vkb2_area_keypad_pane_ParamLimits

0x6a5f,	// (0x00031057) vkb2_area_keypad_pane

0x6aa1,	// (0x00031099) vkb2_area_top_pane_ParamLimits

0x6aa1,	// (0x00031099) vkb2_area_top_pane

0x6b1b,	// (0x00031113) vkb2_top_entry_pane_ParamLimits

0x6b1b,	// (0x00031113) vkb2_top_entry_pane

0x6b45,	// (0x0003113d) vkb2_top_grid_left_pane_ParamLimits

0x6b45,	// (0x0003113d) vkb2_top_grid_left_pane

0x6b63,	// (0x0003115b) vkb2_top_grid_right_pane_ParamLimits

0x6b63,	// (0x0003115b) vkb2_top_grid_right_pane

0x6b81,	// (0x00031179) vkb2_cell_keypad_pane_ParamLimits

0x6b81,	// (0x00031179) vkb2_cell_keypad_pane

0x6c52,	// (0x0003124a) vkb2_area_bottom_grid_pane_ParamLimits

0x6c52,	// (0x0003124a) vkb2_area_bottom_grid_pane

0x6c78,	// (0x00031270) vkb2_area_bottom_pane_g1_ParamLimits

0x6c78,	// (0x00031270) vkb2_area_bottom_pane_g1

0x6c9c,	// (0x00031294) vkb2_area_bottom_pane_g2_ParamLimits

0x6c9c,	// (0x00031294) vkb2_area_bottom_pane_g2

0x6cca,	// (0x000312c2) vkb2_area_bottom_pane_g3_ParamLimits

0x6cca,	// (0x000312c2) vkb2_area_bottom_pane_g3

0x0002,

0xfd61,	// (0x0003a359) vkb2_area_bottom_pane_g_ParamLimits

0xfd61,	// (0x0003a359) vkb2_area_bottom_pane_g

0x6d2b,	// (0x00031323) vkb2_top_cell_left_pane_ParamLimits

0x6d2b,	// (0x00031323) vkb2_top_cell_left_pane

0xe127,	// (0x0003871f) vkb2_top_entry_pane_g1_ParamLimits

0xe127,	// (0x0003871f) vkb2_top_entry_pane_g1

0xe135,	// (0x0003872d) vkb2_top_entry_pane_t1_ParamLimits

0xe135,	// (0x0003872d) vkb2_top_entry_pane_t1

0xe188,	// (0x00038780) vkb2_top_entry_pane_t2_ParamLimits

0xe188,	// (0x00038780) vkb2_top_entry_pane_t2

0xe1ba,	// (0x000387b2) vkb2_top_entry_pane_t3_ParamLimits

0xe1ba,	// (0x000387b2) vkb2_top_entry_pane_t3

0x0002,

0xfd68,	// (0x0003a360) vkb2_top_entry_pane_t_ParamLimits

0xfd68,	// (0x0003a360) vkb2_top_entry_pane_t

0x6d78,	// (0x00031370) vkb2_top_grid_right_pane_g1_ParamLimits

0x6d78,	// (0x00031370) vkb2_top_grid_right_pane_g1

0x6d8e,	// (0x00031386) vkb2_top_grid_right_pane_g2_ParamLimits

0x6d8e,	// (0x00031386) vkb2_top_grid_right_pane_g2

0x6da6,	// (0x0003139e) vkb2_top_grid_right_pane_g3_ParamLimits

0x6da6,	// (0x0003139e) vkb2_top_grid_right_pane_g3

0x6dbe,	// (0x000313b6) vkb2_top_grid_right_pane_g4_ParamLimits

0x6dbe,	// (0x000313b6) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6f,	// (0x0003a367) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6f,	// (0x0003a367) vkb2_top_grid_right_pane_g

0x6dd4,	// (0x000313cc) vkb2_top_cell_left_pane_g1

0x6deb,	// (0x000313e3) vkb2_cell_keypad_pane_g1_ParamLimits

0x6deb,	// (0x000313e3) vkb2_cell_keypad_pane_g1

0xe1de,	// (0x000387d6) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1de,	// (0x000387d6) vkb2_cell_keypad_pane_t1

0x6df9,	// (0x000313f1) vkb2_cell_bottom_grid_pane_ParamLimits

0x6df9,	// (0x000313f1) vkb2_cell_bottom_grid_pane

0x6e32,	// (0x0003142a) vkb2_cell_bottom_grid_pane_g1

0xdd68,	// (0x00038360) aid_call2_pane_cp02

0xdd70,	// (0x00038368) aid_call_pane_cp02

0xdd78,	// (0x00038370) clock_digital_number_pane_cp10

0xdd80,	// (0x00038378) clock_digital_number_pane_cp11

0xdd88,	// (0x00038380) clock_digital_number_pane_cp12

0xdd90,	// (0x00038388) clock_digital_number_pane_cp13

0xdd98,	// (0x00038390) clock_digital_separator_pane_cp10

0x8e57,	// (0x0003344f) popup_clock_digital_analogue_window_cp2_g1

0x8e57,	// (0x0003344f) popup_clock_digital_analogue_window_cp2_g2

0xdda0,	// (0x00038398) popup_clock_digital_analogue_window_cp2_g3

0x8e57,	// (0x0003344f) popup_clock_digital_analogue_window_cp2_g4

0xdda0,	// (0x00038398) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0x0028,	// (0x0002a620) popup_clock_digital_analogue_window_cp2_g

0xdda8,	// (0x000383a0) popup_clock_digital_analogue_window_cp2_t1

0xddb6,	// (0x000383ae) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3e,	// (0x0003a336) popup_clock_digital_analogue_window_cp2_t

0xc2b3,	// (0x000368ab) clock_digital_number_pane_cp10_g1

0xc2b3,	// (0x000368ab) clock_digital_number_pane_cp10_g2

0x0001,

0xfb38,	// (0x0003a130) clock_digital_number_pane_cp10_g

0xc2b3,	// (0x000368ab) clock_digital_separator_pane_cp10_g1

0xc2b3,	// (0x000368ab) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb38,	// (0x0003a130) clock_digital_separator_pane_cp10_g

0xdbe4,	// (0x000381dc) uniindi_top_pane_g3

0xdbf5,	// (0x000381ed) uniindi_top_pane_g4

0x6c0c,	// (0x00031204) vkb2_row_keypad_pane_ParamLimits

0x6c0c,	// (0x00031204) vkb2_row_keypad_pane

0x6e4e,	// (0x00031446) vkb2_cell_t_keypad_pane_ParamLimits

0x6e4e,	// (0x00031446) vkb2_cell_t_keypad_pane

0x6e5e,	// (0x00031456) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6e5e,	// (0x00031456) vkb2_cell_t_keypad_pane_cp08

0x6e71,	// (0x00031469) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6e71,	// (0x00031469) vkb2_cell_t_keypad_pane_cp09

0x6e85,	// (0x0003147d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6e85,	// (0x0003147d) vkb2_cell_t_keypad_pane_cp01

0x6e96,	// (0x0003148e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6e96,	// (0x0003148e) vkb2_cell_t_keypad_pane_cp02

0x6ea7,	// (0x0003149f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6ea7,	// (0x0003149f) vkb2_cell_t_keypad_pane_cp03

0x6eb8,	// (0x000314b0) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6eb8,	// (0x000314b0) vkb2_cell_t_keypad_pane_cp04

0x6ec9,	// (0x000314c1) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6ec9,	// (0x000314c1) vkb2_cell_t_keypad_pane_cp05

0x6eda,	// (0x000314d2) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6eda,	// (0x000314d2) vkb2_cell_t_keypad_pane_cp06

0x6eeb,	// (0x000314e3) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6eeb,	// (0x000314e3) vkb2_cell_t_keypad_pane_cp07

0x6efc,	// (0x000314f4) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6efc,	// (0x000314f4) vkb2_cell_t_keypad_pane_cp10

0x66b2,	// (0x00030caa) vkb2_cell_t_keypad_pane_g1

0xe1f5,	// (0x000387ed) vkb2_cell_t_keypad_pane_t1

0x4a55,	// (0x0002f04d) popup_grid_graphic2_window

0xe207,	// (0x000387ff) aid_size_cell_graphic2_ParamLimits

0xe207,	// (0x000387ff) aid_size_cell_graphic2

0xe23f,	// (0x00038837) bg_popup_window_pane_cp21_ParamLimits

0xe23f,	// (0x00038837) bg_popup_window_pane_cp21

0xe24d,	// (0x00038845) graphic2_pages_pane_ParamLimits

0xe24d,	// (0x00038845) graphic2_pages_pane

0xe293,	// (0x0003888b) grid_graphic2_control_pane_ParamLimits

0xe293,	// (0x0003888b) grid_graphic2_control_pane

0xe2d1,	// (0x000388c9) grid_graphic2_pane_ParamLimits

0xe2d1,	// (0x000388c9) grid_graphic2_pane

0xe345,	// (0x0003893d) cell_graphic2_pane

0x4a55,	// (0x0002f04d) main_comp_mode_pane

0xd464,	// (0x00037a5c) list_ai3_gene_pane_ParamLimits

0xd82e,	// (0x00037e26) bg_popup_window_pane_cp19_ParamLimits

0xd83a,	// (0x00037e32) bg_touch_area_indi_pane_ParamLimits

0xd83a,	// (0x00037e32) bg_touch_area_indi_pane

0xd850,	// (0x00037e48) bg_touch_area_indi_pane_cp01_ParamLimits

0xd850,	// (0x00037e48) bg_touch_area_indi_pane_cp01

0xd866,	// (0x00037e5e) bg_touch_area_indi_pane_cp02_ParamLimits

0xd866,	// (0x00037e5e) bg_touch_area_indi_pane_cp02

0xd87e,	// (0x00037e76) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87e,	// (0x00037e76) bg_touch_area_indi_pane_cp03

0xd898,	// (0x00037e90) popup_slider_window_g1_ParamLimits

0xd8b4,	// (0x00037eac) popup_slider_window_g2_ParamLimits

0xd8d0,	// (0x00037ec8) popup_slider_window_g3_ParamLimits

0xfce6,	// (0x0003a2de) popup_slider_window_g_ParamLimits

0xd92c,	// (0x00037f24) popup_slider_window_t1_ParamLimits

0xd9a0,	// (0x00037f98) small_volume_slider_vertical_pane_ParamLimits

0xe345,	// (0x0003893d) cell_graphic2_pane_ParamLimits

0xe394,	// (0x0003898c) bg_button_pane_cp10_ParamLimits

0xe394,	// (0x0003898c) bg_button_pane_cp10

0xe3a7,	// (0x0003899f) bg_button_pane_cp11_ParamLimits

0xe3a7,	// (0x0003899f) bg_button_pane_cp11

0xe3ba,	// (0x000389b2) graphic2_pages_pane_g1_ParamLimits

0xe3ba,	// (0x000389b2) graphic2_pages_pane_g1

0xe3d5,	// (0x000389cd) graphic2_pages_pane_g2_ParamLimits

0xe3d5,	// (0x000389cd) graphic2_pages_pane_g2

0x0001,

0xfd7d,	// (0x0003a375) graphic2_pages_pane_g_ParamLimits

0xfd7d,	// (0x0003a375) graphic2_pages_pane_g

0xe3ed,	// (0x000389e5) graphic2_pages_pane_t1_ParamLimits

0xe3ed,	// (0x000389e5) graphic2_pages_pane_t1

0xe405,	// (0x000389fd) cell_graphic2_control_pane_ParamLimits

0xe405,	// (0x000389fd) cell_graphic2_control_pane

0xe423,	// (0x00038a1b) cell_graphic2_pane_g1_ParamLimits

0xe423,	// (0x00038a1b) cell_graphic2_pane_g1

0xe430,	// (0x00038a28) cell_graphic2_pane_g2_ParamLimits

0xe430,	// (0x00038a28) cell_graphic2_pane_g2

0xe43d,	// (0x00038a35) cell_graphic2_pane_g3_ParamLimits

0xe43d,	// (0x00038a35) cell_graphic2_pane_g3

0xe44a,	// (0x00038a42) cell_graphic2_pane_g4_ParamLimits

0xe44a,	// (0x00038a42) cell_graphic2_pane_g4

0xe457,	// (0x00038a4f) cell_graphic2_pane_g5_ParamLimits

0xe457,	// (0x00038a4f) cell_graphic2_pane_g5

0x0004,

0xfd82,	// (0x0003a37a) cell_graphic2_pane_g_ParamLimits

0xfd82,	// (0x0003a37a) cell_graphic2_pane_g

0xe472,	// (0x00038a6a) cell_graphic2_pane_t1_ParamLimits

0xe472,	// (0x00038a6a) cell_graphic2_pane_t1

0x9d32,	// (0x0003432a) grid_highlight_pane_cp11_ParamLimits

0x9d32,	// (0x0003432a) grid_highlight_pane_cp11

0x81f1,	// (0x000327e9) bg_button_pane_cp05

0xe4a9,	// (0x00038aa1) cell_graphic2_control_pane_g1

0xc2b3,	// (0x000368ab) bg_touch_area_indi_pane_g1

0xe4d1,	// (0x00038ac9) aid_cmod_rocker_key_size

0xe4db,	// (0x00038ad3) aid_cmode_itu_key_size

0xe4e5,	// (0x00038add) main_cmode_video_pane

0xe4ef,	// (0x00038ae7) main_comp_mode_itu_pane

0xe4fb,	// (0x00038af3) main_comp_mode_rocker_pane

0xe507,	// (0x00038aff) cell_cmode_rocker_pane_ParamLimits

0xe507,	// (0x00038aff) cell_cmode_rocker_pane

0xe519,	// (0x00038b11) cell_cmode_itu_pane_ParamLimits

0xe519,	// (0x00038b11) cell_cmode_itu_pane

0x87d7,	// (0x00032dcf) bg_button_pane_cp06_ParamLimits

0x87d7,	// (0x00032dcf) bg_button_pane_cp06

0xc531,	// (0x00036b29) cell_cmode_rocker_pane_g1_ParamLimits

0xc531,	// (0x00036b29) cell_cmode_rocker_pane_g1

0xda44,	// (0x0003803c) cell_cmode_rocker_pane_g2_ParamLimits

0xda44,	// (0x0003803c) cell_cmode_rocker_pane_g2

0x0001,

0x0063,	// (0x0002a65b) cell_cmode_rocker_pane_g_ParamLimits

0x0063,	// (0x0002a65b) cell_cmode_rocker_pane_g

0x7e74,	// (0x0003246c) bg_button_pane_cp07

0xe52e,	// (0x00038b26) cell_cmode_itu_pane_g1

0xe537,	// (0x00038b2f) cell_cmode_itu_pane_t1

0xe545,	// (0x00038b3d) cell_cmode_itu_pane_t2

0x0001,

0xfd92,	// (0x0003a38a) cell_cmode_itu_pane_t

0xdc67,	// (0x0003825f) aid_touch_ctrl_left

0xdc6f,	// (0x00038267) aid_touch_ctrl_right

0x7e74,	// (0x0003246c) compa_mode_pane

0xe553,	// (0x00038b4b) aid_cmod_rocker_key_size_cp

0xe55d,	// (0x00038b55) aid_cmode_itu_key_size_cp

0xe567,	// (0x00038b5f) compa_mode_pane_g1

0xe56f,	// (0x00038b67) compa_mode_pane_g2

0xe577,	// (0x00038b6f) compa_mode_pane_g3

0x0002,

0xfd97,	// (0x0003a38f) compa_mode_pane_g

0xe57f,	// (0x00038b77) main_comp_mode_itu_pane_cp

0xe587,	// (0x00038b7f) main_comp_mode_rocker_pane_cp

0xe58f,	// (0x00038b87) cell_cmode_itu_pane_cp_ParamLimits

0xe58f,	// (0x00038b87) cell_cmode_itu_pane_cp

0xe5a4,	// (0x00038b9c) cell_cmode_rocker_pane_cp_ParamLimits

0xe5a4,	// (0x00038b9c) cell_cmode_rocker_pane_cp

0x87d7,	// (0x00032dcf) bg_button_pane_cp06_cp_ParamLimits

0x87d7,	// (0x00032dcf) bg_button_pane_cp06_cp

0xc531,	// (0x00036b29) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc531,	// (0x00036b29) cell_cmode_rocker_pane_g1_cp

0xc2b3,	// (0x000368ab) cell_cmode_rocker_pane_g2_cp

0x7e74,	// (0x0003246c) bg_button_pane_cp07_cp

0xb1fe,	// (0x000357f6) cell_cmode_itu_pane_g1_cp

0xe5b6,	// (0x00038bae) cell_cmode_itu_pane_t1_cp

0xe5b6,	// (0x00038bae) cell_cmode_itu_pane_t2_cp

0xb1eb,	// (0x000357e3) settings_code_pane_cp2

0x7f68,	// (0x00032560) bg_popup_window_pane_cp3_ParamLimits

0x83cb,	// (0x000329c3) heading_pane_cp3_ParamLimits

0x83d7,	// (0x000329cf) listscroll_popup_graphic_pane_ParamLimits

0x645b,	// (0x00030a53) fep_hwr_aid_pane_ParamLimits

0x68d2,	// (0x00030eca) aid_touch_sctrl_top_ParamLimits

0x68ed,	// (0x00030ee5) sctrl_sk_top_pane_g1_ParamLimits

0x66b2,	// (0x00030caa) sctrl_sk_top_pane_g2_ParamLimits

0xfcff,	// (0x0003a2f7) sctrl_sk_top_pane_g_ParamLimits

0x68fa,	// (0x00030ef2) sctrl_sk_top_pane_t1_ParamLimits

0x68d2,	// (0x00030eca) aid_touch_sctrl_bottom_ParamLimits

0x68fa,	// (0x00030ef2) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbb0,	// (0x000381a8) aid_area_touch_clock

0x6ae3,	// (0x000310db) aid_vkb2_area_top_pane_cell_ParamLimits

0x6ae3,	// (0x000310db) aid_vkb2_area_top_pane_cell

0x6c2e,	// (0x00031226) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6c2e,	// (0x00031226) aid_vkb2_area_bottom_pane_cell

0xe11f,	// (0x00038717) popup_char_count_window

0xe5c4,	// (0x00038bbc) popup_char_count_window_g1

0xe5cd,	// (0x00038bc5) popup_char_count_window_g2

0xe5d6,	// (0x00038bce) popup_char_count_window_g3

0x0002,

0xfd9e,	// (0x0003a396) popup_char_count_window_g

0xe5df,	// (0x00038bd7) popup_char_count_window_t1

0x69a9,	// (0x00030fa1) popup_fep_char_preview_window_ParamLimits

0x69a9,	// (0x00030fa1) popup_fep_char_preview_window

0x6b01,	// (0x000310f9) vkb2_top_candi_pane_ParamLimits

0x6b01,	// (0x000310f9) vkb2_top_candi_pane

0xe5ed,	// (0x00038be5) cell_vkb2_top_candi_pane_ParamLimits

0xe5ed,	// (0x00038be5) cell_vkb2_top_candi_pane

0x6f11,	// (0x00031509) bg_popup_fep_char_preview_window_ParamLimits

0x6f11,	// (0x00031509) bg_popup_fep_char_preview_window

0x6f1f,	// (0x00031517) popup_fep_char_preview_window_t1_ParamLimits

0x6f1f,	// (0x00031517) popup_fep_char_preview_window_t1

0xe63a,	// (0x00038c32) bg_popup_fep_char_preview_window_g1

0xe642,	// (0x00038c3a) bg_popup_fep_char_preview_window_g2

0xe64a,	// (0x00038c42) bg_popup_fep_char_preview_window_g3

0xe652,	// (0x00038c4a) bg_popup_fep_char_preview_window_g4

0xe65a,	// (0x00038c52) bg_popup_fep_char_preview_window_g5

0x6f59,	// (0x00031551) bg_popup_fep_char_preview_window_g6

0xe662,	// (0x00038c5a) bg_popup_fep_char_preview_window_g7

0xe66a,	// (0x00038c62) bg_popup_fep_char_preview_window_g8

0xe672,	// (0x00038c6a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfda5,	// (0x0003a39d) bg_popup_fep_char_preview_window_g

0x66b2,	// (0x00030caa) cell_vkb2_top_candi_pane_g1_ParamLimits

0x66b2,	// (0x00030caa) cell_vkb2_top_candi_pane_g1

0x66c0,	// (0x00030cb8) cell_vkb2_top_candi_pane_g2_ParamLimits

0x66c0,	// (0x00030cb8) cell_vkb2_top_candi_pane_g2

0xe167,	// (0x0003875f) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe167,	// (0x0003875f) cell_vkb2_top_candi_pane_g3

0x6f61,	// (0x00031559) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6f61,	// (0x00031559) cell_vkb2_top_candi_pane_g4

0xc9fc,	// (0x00036ff4) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc9fc,	// (0x00036ff4) cell_vkb2_top_candi_pane_g5

0x6f82,	// (0x0003157a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6f82,	// (0x0003157a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb8,	// (0x0003a3b0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb8,	// (0x0003a3b0) cell_vkb2_top_candi_pane_g

0x6f90,	// (0x00031588) cell_vkb2_top_candi_pane_t1

0x62bb,	// (0x000308b3) aid_size_touch_slider_mark_ParamLimits

0x62bb,	// (0x000308b3) aid_size_touch_slider_mark

0xe283,	// (0x0003887b) grid_graphic2_catg_pane_ParamLimits

0xe283,	// (0x0003887b) grid_graphic2_catg_pane

0xe321,	// (0x00038919) popup_grid_graphic2_window_t1_ParamLimits

0xe321,	// (0x00038919) popup_grid_graphic2_window_t1

0xe333,	// (0x0003892b) popup_grid_graphic2_window_t2_ParamLimits

0xe333,	// (0x0003892b) popup_grid_graphic2_window_t2

0x0001,

0xfd78,	// (0x0003a370) popup_grid_graphic2_window_t_ParamLimits

0xfd78,	// (0x0003a370) popup_grid_graphic2_window_t

0x81f1,	// (0x000327e9) bg_button_pane_cp05_ParamLimits

0xe4a9,	// (0x00038aa1) cell_graphic2_control_pane_g1_ParamLimits

0xe67a,	// (0x00038c72) cell_graphic2_catg_pane_ParamLimits

0xe67a,	// (0x00038c72) cell_graphic2_catg_pane

0x7e74,	// (0x0003246c) bg_button_pane_cp12

0xe68c,	// (0x00038c84) cell_graphic2_catg_pane_g1

0xdb7c,	// (0x00038174) cell_tb_ext_pane_t1_ParamLimits

0x6d4b,	// (0x00031343) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6d4b,	// (0x00031343) vkb2_top_cell_right_narrow_pane

0x6d63,	// (0x0003135b) vkb2_top_cell_right_wide_pane_ParamLimits

0x6d63,	// (0x0003135b) vkb2_top_cell_right_wide_pane

0x644d,	// (0x00030a45) bg_vkb2_func_pane_ParamLimits

0x644d,	// (0x00030a45) bg_vkb2_func_pane

0x6dd4,	// (0x000313cc) vkb2_top_cell_left_pane_g1_ParamLimits

0x644d,	// (0x00030a45) bg_vkb2_fuc_pane_cp03_ParamLimits

0x644d,	// (0x00030a45) bg_vkb2_fuc_pane_cp03

0x6e32,	// (0x0003142a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9cce,	// (0x000342c6) bg_vkb2_func_pane_g1

0x9cc6,	// (0x000342be) bg_vkb2_func_pane_g2

0x9cde,	// (0x000342d6) bg_vkb2_func_pane_g3

0x9cd6,	// (0x000342ce) bg_vkb2_func_pane_g4

0x9ce6,	// (0x000342de) bg_vkb2_func_pane_g5

0x9cee,	// (0x000342e6) bg_vkb2_func_pane_g6

0x9cf6,	// (0x000342ee) bg_vkb2_func_pane_g7

0x9cfe,	// (0x000342f6) bg_vkb2_func_pane_g8

0x9cbe,	// (0x000342b6) bg_vkb2_func_pane_g9

0x0008,

0xfdc5,	// (0x0003a3bd) bg_vkb2_func_pane_g

0x644d,	// (0x00030a45) bg_vkb2_fuc_pane_cp01_ParamLimits

0x644d,	// (0x00030a45) bg_vkb2_fuc_pane_cp01

0x6dd4,	// (0x000313cc) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6dd4,	// (0x000313cc) vkb2_top_cell_right_wide_pane_g1

0x644d,	// (0x00030a45) bg_vkb2_fuc_pane_cp02_ParamLimits

0x644d,	// (0x00030a45) bg_vkb2_fuc_pane_cp02

0x6e32,	// (0x0003142a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6e32,	// (0x0003142a) vkb2_top_cell_right_narrow_pane_g1

0xd7b2,	// (0x00037daa) aid_touch_area_decrease_ParamLimits

0xd7b2,	// (0x00037daa) aid_touch_area_decrease

0xd7d0,	// (0x00037dc8) aid_touch_area_increase_ParamLimits

0xd7d0,	// (0x00037dc8) aid_touch_area_increase

0xd7dc,	// (0x00037dd4) aid_touch_area_mute_ParamLimits

0xd7dc,	// (0x00037dd4) aid_touch_area_mute

0xd800,	// (0x00037df8) aid_touch_area_slider_ParamLimits

0xd800,	// (0x00037df8) aid_touch_area_slider

0xd8ec,	// (0x00037ee4) popup_slider_window_g4_ParamLimits

0xd8ec,	// (0x00037ee4) popup_slider_window_g4

0xd8f8,	// (0x00037ef0) popup_slider_window_g5_ParamLimits

0xd8f8,	// (0x00037ef0) popup_slider_window_g5

0xd91a,	// (0x00037f12) popup_slider_window_g6_ParamLimits

0xd91a,	// (0x00037f12) popup_slider_window_g6

0xd95a,	// (0x00037f52) popup_slider_window_t2_ParamLimits

0xd95a,	// (0x00037f52) popup_slider_window_t2

0x0001,

0xfcf3,	// (0x0003a2eb) popup_slider_window_t_ParamLimits

0xfcf3,	// (0x0003a2eb) popup_slider_window_t

0xd972,	// (0x00037f6a) slider_pane_ParamLimits

0xd972,	// (0x00037f6a) slider_pane

0xe695,	// (0x00038c8d) slider_pane_g1_ParamLimits

0xe695,	// (0x00038c8d) slider_pane_g1

0xe6a9,	// (0x00038ca1) slider_pane_g2_ParamLimits

0xe6a9,	// (0x00038ca1) slider_pane_g2

0xe6bf,	// (0x00038cb7) slider_pane_g3_ParamLimits

0xe6bf,	// (0x00038cb7) slider_pane_g3

0x0003,

0xfdd8,	// (0x0003a3d0) slider_pane_g_ParamLimits

0xfdd8,	// (0x0003a3d0) slider_pane_g

0x5ee2,	// (0x000304da) popup_tb_float_extension_window_ParamLimits

0x5ee2,	// (0x000304da) popup_tb_float_extension_window

0xe6eb,	// (0x00038ce3) aid_size_cell_tb_float_ext

0x7e74,	// (0x0003246c) bg_popup_sub_window_cp28

0xe6f7,	// (0x00038cef) grid_tb_float_ext_pane

0xe701,	// (0x00038cf9) cell_tb_float_ext_pane_ParamLimits

0xe701,	// (0x00038cf9) cell_tb_float_ext_pane

0xe71b,	// (0x00038d13) cell_tb_float_ext_pane_g1

0xe724,	// (0x00038d1c) grid_highlight_pane_cp12

0x659c,	// (0x00030b94) cell_last_hwr_side_pane_ParamLimits

0x659c,	// (0x00030b94) cell_last_hwr_side_pane

0xc2b3,	// (0x000368ab) cell_last_hwr_side_pane_g1

0xe72d,	// (0x00038d25) cell_last_hwr_side_pane_g2

0x0001,

0x009b,	// (0x0002a693) cell_last_hwr_side_pane_g

0x6cfa,	// (0x000312f2) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6cfa,	// (0x000312f2) vkb2_area_bottom_space_btn_pane

0x66b2,	// (0x00030caa) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1f5,	// (0x000387ed) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6f90,	// (0x00031588) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6faf,	// (0x000315a7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6faf,	// (0x000315a7) vkb2_area_bottom_space_btn_pane_g1

0x6fe9,	// (0x000315e1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6fe9,	// (0x000315e1) vkb2_area_bottom_space_btn_pane_g2

0x701f,	// (0x00031617) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x701f,	// (0x00031617) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde1,	// (0x0003a3d9) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde1,	// (0x0003a3d9) vkb2_area_bottom_space_btn_pane_g

0x6510,	// (0x00030b08) cel_fep_hwr_func_pane_ParamLimits

0x6510,	// (0x00030b08) cel_fep_hwr_func_pane

0x654c,	// (0x00030b44) cell_hwr_side_button_pane_ParamLimits

0x654c,	// (0x00030b44) cell_hwr_side_button_pane

0xdbb0,	// (0x000381a8) aid_area_touch_clock_ParamLimits

0x81f1,	// (0x000327e9) bg_uniindi_top_pane_ParamLimits

0xdbc2,	// (0x000381ba) uniindi_top_pane_g1_ParamLimits

0xdbd8,	// (0x000381d0) uniindi_top_pane_g2_ParamLimits

0xdbe4,	// (0x000381dc) uniindi_top_pane_g3_ParamLimits

0xdbf5,	// (0x000381ed) uniindi_top_pane_g4_ParamLimits

0xfd2b,	// (0x0003a323) uniindi_top_pane_g_ParamLimits

0xdc02,	// (0x000381fa) uniindi_top_pane_t1_ParamLimits

0x81f1,	// (0x000327e9) bg_vkb2_func_pane_cp01_ParamLimits

0x81f1,	// (0x000327e9) bg_vkb2_func_pane_cp01

0xe736,	// (0x00038d2e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe736,	// (0x00038d2e) cel_fep_hwr_func_pane_g1

0x81f1,	// (0x000327e9) bg_vkb2_func_pane_cp02_ParamLimits

0x81f1,	// (0x000327e9) bg_vkb2_func_pane_cp02

0xe736,	// (0x00038d2e) cell_hwr_side_button_pane_g1_ParamLimits

0xe736,	// (0x00038d2e) cell_hwr_side_button_pane_g1

0x9b3f,	// (0x00034137) status_pane_g4_ParamLimits

0x9b3f,	// (0x00034137) status_pane_g4

0x9b59,	// (0x00034151) status_pane_t1

0xc007,	// (0x000365ff) form2_midp_gauge_slider_cont_pane

0xc00f,	// (0x00036607) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc021,	// (0x00036619) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc033,	// (0x0003662b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaeb,	// (0x0003a0e3) form2_midp_gauge_slider_pane_t_ParamLimits

0xc045,	// (0x0003663d) form2_midp_slider_pane_ParamLimits

0x6969,	// (0x00030f61) aid_size_cell_func_vkb2_ParamLimits

0x6969,	// (0x00030f61) aid_size_cell_func_vkb2

0xe6d7,	// (0x00038ccf) slider_pane_g4_ParamLimits

0xe6d7,	// (0x00038ccf) slider_pane_g4

0x7069,	// (0x00031661) form2_midp_gauge_slider_pane_t2_cp01

0x7077,	// (0x0003166f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7077,	// (0x0003166f) form2_midp_gauge_slider_pane_t3_cp01

0x7094,	// (0x0003168c) form2_midp_slider_pane_cp01

0x7e74,	// (0x0003246c) navi_smil_pane

0xe76f,	// (0x00038d67) navi_smil_pane_g1

0xe777,	// (0x00038d6f) navi_smil_pane_t1

0xe744,	// (0x00038d3c) form2_midp_slider_pane_g1

0xe74d,	// (0x00038d45) form2_midp_slider_pane_g2

0xe755,	// (0x00038d4d) form2_midp_slider_pane_g3

0xe744,	// (0x00038d3c) form2_midp_slider_pane_g4

0xe75d,	// (0x00038d55) form2_midp_slider_pane_g5

0x0004,

0xfdea,	// (0x0003a3e2) form2_midp_slider_pane_g

0x7059,	// (0x00031651) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7059,	// (0x00031651) vkb2_area_bottom_space_btn_pane_g4

0x996e,	// (0x00033f66) lc0_navi_pane_ParamLimits

0x996e,	// (0x00033f66) lc0_navi_pane

0x99e4,	// (0x00033fdc) lc0_stat_indi_pane_ParamLimits

0x99e4,	// (0x00033fdc) lc0_stat_indi_pane

0x99fb,	// (0x00033ff3) ls0_title_pane_ParamLimits

0x99fb,	// (0x00033ff3) ls0_title_pane

0x87d7,	// (0x00032dcf) bg_popup_sub_pane_cp14_ParamLimits

0xdb97,	// (0x0003818f) list_uniindi_pane_ParamLimits

0xdba3,	// (0x0003819b) uniindi_top_pane_ParamLimits

0xdc3f,	// (0x00038237) list_single_uniindi_pane_g1_ParamLimits

0xdc52,	// (0x0003824a) list_single_uniindi_pane_t1_ParamLimits

0x709d,	// (0x00031695) lc0_stat_clock_pane_ParamLimits

0x709d,	// (0x00031695) lc0_stat_clock_pane

0xe785,	// (0x00038d7d) lc0_stat_indi_pane_g1_ParamLimits

0xe785,	// (0x00038d7d) lc0_stat_indi_pane_g1

0xe792,	// (0x00038d8a) lc0_stat_indi_pane_g2_ParamLimits

0xe792,	// (0x00038d8a) lc0_stat_indi_pane_g2

0x0001,

0xfdf5,	// (0x0003a3ed) lc0_stat_indi_pane_g_ParamLimits

0xfdf5,	// (0x0003a3ed) lc0_stat_indi_pane_g

0x70aa,	// (0x000316a2) lc0_uni_indicator_pane_ParamLimits

0x70aa,	// (0x000316a2) lc0_uni_indicator_pane

0xe79f,	// (0x00038d97) ls0_title_pane_g1_ParamLimits

0xe79f,	// (0x00038d97) ls0_title_pane_g1

0xe7b3,	// (0x00038dab) ls0_title_pane_t1_ParamLimits

0xe7b3,	// (0x00038dab) ls0_title_pane_t1

0x70b7,	// (0x000316af) lc0_uni_indicator_pane_g1_ParamLimits

0x70b7,	// (0x000316af) lc0_uni_indicator_pane_g1

0xe7e9,	// (0x00038de1) lc0_stat_clock_pane_t1

0x4a55,	// (0x0002f04d) main_ai5_pane

0xe7f7,	// (0x00038def) ai5_sk_pane_ParamLimits

0xe7f7,	// (0x00038def) ai5_sk_pane

0xe804,	// (0x00038dfc) cell_ai5_widget_pane_ParamLimits

0xe804,	// (0x00038dfc) cell_ai5_widget_pane

0xe8b6,	// (0x00038eae) aid_size_cell_widget_grid

0xe8cc,	// (0x00038ec4) bg_ai5_widget_pane_ParamLimits

0xe8cc,	// (0x00038ec4) bg_ai5_widget_pane

0xe940,	// (0x00038f38) cell_ai5_widget_pane_g2

0xe950,	// (0x00038f48) cell_ai5_widget_pane_g3

0xe967,	// (0x00038f5f) cell_ai5_widget_pane_g4

0xe973,	// (0x00038f6b) cell_ai5_widget_pane_g5

0xe97f,	// (0x00038f77) cell_ai5_widget_pane_g6

0xe98b,	// (0x00038f83) cell_ai5_widget_pane_g7

0xe9d3,	// (0x00038fcb) cell_ai5_widget_pane_t1_ParamLimits

0xe9d3,	// (0x00038fcb) cell_ai5_widget_pane_t1

0xe9f0,	// (0x00038fe8) cell_ai5_widget_pane_t2_ParamLimits

0xe9f0,	// (0x00038fe8) cell_ai5_widget_pane_t2

0xea08,	// (0x00039000) cell_ai5_widget_pane_t3_ParamLimits

0xea08,	// (0x00039000) cell_ai5_widget_pane_t3

0xea20,	// (0x00039018) cell_ai5_widget_pane_t4_ParamLimits

0xea20,	// (0x00039018) cell_ai5_widget_pane_t4

0xea3d,	// (0x00039035) cell_ai5_widget_pane_t5_ParamLimits

0xea3d,	// (0x00039035) cell_ai5_widget_pane_t5

0xea5c,	// (0x00039054) cell_ai5_widget_pane_t6_ParamLimits

0xea5c,	// (0x00039054) cell_ai5_widget_pane_t6

0xea6e,	// (0x00039066) cell_ai5_widget_pane_t7_ParamLimits

0xea6e,	// (0x00039066) cell_ai5_widget_pane_t7

0xea87,	// (0x0003907f) cell_ai5_widget_pane_t8_ParamLimits

0xea87,	// (0x0003907f) cell_ai5_widget_pane_t8

0x0009,

0xfe0f,	// (0x0003a407) cell_ai5_widget_pane_t_ParamLimits

0xfe0f,	// (0x0003a407) cell_ai5_widget_pane_t

0xeadb,	// (0x000390d3) grid_ai5_widget_pane

0x87d7,	// (0x00032dcf) highlight_cell_ai5_widget_pane_ParamLimits

0x87d7,	// (0x00032dcf) highlight_cell_ai5_widget_pane

0xeaf2,	// (0x000390ea) ai5_sk_left_pane

0xeafc,	// (0x000390f4) ai5_sk_middle_pane

0xeb06,	// (0x000390fe) ai5_sk_right_pane

0xeb10,	// (0x00039108) bg_ai5_widget_pane_g1_ParamLimits

0xeb10,	// (0x00039108) bg_ai5_widget_pane_g1

0xeb1c,	// (0x00039114) bg_ai5_widget_pane_g2_ParamLimits

0xeb1c,	// (0x00039114) bg_ai5_widget_pane_g2

0xeb28,	// (0x00039120) bg_ai5_widget_pane_g3_ParamLimits

0xeb28,	// (0x00039120) bg_ai5_widget_pane_g3

0xeb34,	// (0x0003912c) bg_ai5_widget_pane_g4_ParamLimits

0xeb34,	// (0x0003912c) bg_ai5_widget_pane_g4

0xeb40,	// (0x00039138) bg_ai5_widget_pane_g5_ParamLimits

0xeb40,	// (0x00039138) bg_ai5_widget_pane_g5

0xeb4c,	// (0x00039144) bg_ai5_widget_pane_g6_ParamLimits

0xeb4c,	// (0x00039144) bg_ai5_widget_pane_g6

0xeb58,	// (0x00039150) bg_ai5_widget_pane_g7_ParamLimits

0xeb58,	// (0x00039150) bg_ai5_widget_pane_g7

0xeb64,	// (0x0003915c) bg_ai5_widget_pane_g8_ParamLimits

0xeb64,	// (0x0003915c) bg_ai5_widget_pane_g8

0xeb70,	// (0x00039168) bg_ai5_widget_pane_g9_ParamLimits

0xeb70,	// (0x00039168) bg_ai5_widget_pane_g9

0x0008,

0xfe24,	// (0x0003a41c) bg_ai5_widget_pane_g_ParamLimits

0xfe24,	// (0x0003a41c) bg_ai5_widget_pane_g

0xeba2,	// (0x0003919a) cell_shortcut_ai5_widget_pane_ParamLimits

0xeba2,	// (0x0003919a) cell_shortcut_ai5_widget_pane

0x946a,	// (0x00033a62) bg_cell_shortcut_ai5_widget_pane

0xebb3,	// (0x000391ab) cell_grid_ai5_widget_pane_g1

0x946a,	// (0x00033a62) highlight_cell_shortcut_ai5_widget_pane

0x9cce,	// (0x000342c6) ai5_sk_left_pane_g1

0xebbc,	// (0x000391b4) ai5_sk_left_pane_g2

0xebc4,	// (0x000391bc) ai5_sk_left_pane_g3

0xebcc,	// (0x000391c4) ai5_sk_left_pane_g4

0x0003,

0x00a9,	// (0x0002a6a1) ai5_sk_left_pane_g

0xebd4,	// (0x000391cc) ai5_sk_left_pane_t1

0x9cc6,	// (0x000342be) ai5_sk_right_pane_g1

0xebe2,	// (0x000391da) ai5_sk_right_pane_g2

0xebea,	// (0x000391e2) ai5_sk_right_pane_g3

0xebf2,	// (0x000391ea) ai5_sk_right_pane_g4

0x0003,

0x00b2,	// (0x0002a6aa) ai5_sk_right_pane_g

0xebfa,	// (0x000391f2) ai5_sk_right_pane_t1

0x9cc6,	// (0x000342be) ai5_sk_middle_pane_g1

0x9cce,	// (0x000342c6) ai5_sk_middle_pane_g2

0x9ce6,	// (0x000342de) ai5_sk_middle_pane_g3

0xebea,	// (0x000391e2) ai5_sk_middle_pane_g4

0xebc4,	// (0x000391bc) ai5_sk_middle_pane_g5

0xec08,	// (0x00039200) ai5_sk_middle_pane_g6

0xec10,	// (0x00039208) ai5_sk_middle_pane_g7

0x0006,

0x00bb,	// (0x0002a6b3) ai5_sk_middle_pane_g

0x97fa,	// (0x00033df2) aid_touch_area_size_lc0_ParamLimits

0x97fa,	// (0x00033df2) aid_touch_area_size_lc0

0x66e1,	// (0x00030cd9) cell_hwr_candidate_pane_t1_ParamLimits

0x9816,	// (0x00033e0e) aid_touch_navi_pane

0x9ae9,	// (0x000340e1) status_dt_navi_pane_ParamLimits

0x9ae9,	// (0x000340e1) status_dt_navi_pane

0x9af6,	// (0x000340ee) status_dt_sta_pane_ParamLimits

0x9af6,	// (0x000340ee) status_dt_sta_pane

0xec18,	// (0x00039210) dt_sta_controll_pane

0xec25,	// (0x0003921d) dt_sta_indi_pane

0xec36,	// (0x0003922e) dt_sta_title_pane

0x81f1,	// (0x000327e9) bg_dt_sta_indi_pane_ParamLimits

0x81f1,	// (0x000327e9) bg_dt_sta_indi_pane

0xec49,	// (0x00039241) dt_sta_battery_pane

0xec51,	// (0x00039249) dt_sta_indi_pane_g1

0xec5a,	// (0x00039252) dt_sta_indi_pane_g2

0xec63,	// (0x0003925b) dt_sta_indi_pane_g3

0x0002,

0xfe37,	// (0x0003a42f) dt_sta_indi_pane_g

0xec6c,	// (0x00039264) dt_sta_signal_pane

0x87d7,	// (0x00032dcf) bg_dt_sta_title_pane_ParamLimits

0x87d7,	// (0x00032dcf) bg_dt_sta_title_pane

0xec75,	// (0x0003926d) dt_sta_title_pane_g1

0xec7d,	// (0x00039275) dt_sta_title_pane_t1_ParamLimits

0xec7d,	// (0x00039275) dt_sta_title_pane_t1

0x7e74,	// (0x0003246c) bg_dt_sta_control_pane

0xec92,	// (0x0003928a) dt_sta_controll_pane_g1

0xec9b,	// (0x00039293) bg_dt_sta_title_pane_g1

0xeca4,	// (0x0003929c) bg_dt_sta_title_pane_g2

0xecad,	// (0x000392a5) bg_dt_sta_title_pane_g3

0x0002,

0xfe3e,	// (0x0003a436) bg_dt_sta_title_pane_g

0xc2b3,	// (0x000368ab) bg_dt_sta_indi_pane_g1

0xecb6,	// (0x000392ae) dt_sta_signal_pane_g1

0xecbe,	// (0x000392b6) dt_sta_signal_pane_g2

0x0001,

0xfe45,	// (0x0003a43d) dt_sta_signal_pane_g

0xecc6,	// (0x000392be) dt_sta_battery_pane_g1

0xeccf,	// (0x000392c7) dt_sta_battery_pane_t1

0xc2b3,	// (0x000368ab) bg_dt_sta_control_pane_g1

0x8f69,	// (0x00033561) fep_china_uni_eep_pane

0x8f71,	// (0x00033569) fep_china_uni_entry_pane_ParamLimits

0x8f81,	// (0x00033579) popup_fep_china_uni_window_g1_ParamLimits

0x8f91,	// (0x00033589) popup_fep_china_uni_window_g2_ParamLimits

0x8f91,	// (0x00033589) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00039d15) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00039d15) popup_fep_china_uni_window_g

0xecde,	// (0x000392d6) fep_china_uni_eep_pane_g1

0xece6,	// (0x000392de) fep_china_uni_eep_pane_t1

0xe766,	// (0x00038d5e) aid_touch_area_size_smil_player

0x9966,	// (0x00033f5e) lc0_clock_pane

0x9b4d,	// (0x00034145) status_pane_g5_ParamLimits

0x9b4d,	// (0x00034145) status_pane_g5

0x5ba7,	// (0x0003019f) popup_keymap_window

0x9b0b,	// (0x00034103) status_icon_pane

0xe950,	// (0x00038f48) cell_ai5_widget_pane_g3_ParamLimits

0xe967,	// (0x00038f5f) cell_ai5_widget_pane_g4_ParamLimits

0xe973,	// (0x00038f6b) cell_ai5_widget_pane_g5_ParamLimits

0xe997,	// (0x00038f8f) cell_ai5_widget_pane_g8_ParamLimits

0xe997,	// (0x00038f8f) cell_ai5_widget_pane_g8

0xe9ab,	// (0x00038fa3) cell_ai5_widget_pane_g9_ParamLimits

0xe9ab,	// (0x00038fa3) cell_ai5_widget_pane_g9

0xe9bf,	// (0x00038fb7) cell_ai5_widget_pane_g10_ParamLimits

0xe9bf,	// (0x00038fb7) cell_ai5_widget_pane_g10

0xecf5,	// (0x000392ed) status_icon_pane_g1

0x7e74,	// (0x0003246c) bg_popup_sub_pane_cp13

0xecfd,	// (0x000392f5) popup_keymap_window_t1

0x973f,	// (0x00033d37) control_pane_g6_ParamLimits

0x973f,	// (0x00033d37) control_pane_g6

0x974c,	// (0x00033d44) control_pane_g7_ParamLimits

0x974c,	// (0x00033d44) control_pane_g7

0x9759,	// (0x00033d51) control_pane_g8_ParamLimits

0x9759,	// (0x00033d51) control_pane_g8

0xec18,	// (0x00039210) dt_sta_controll_pane_ParamLimits

0xec25,	// (0x0003921d) dt_sta_indi_pane_ParamLimits

0xec36,	// (0x0003922e) dt_sta_title_pane_ParamLimits

0x870f,	// (0x00032d07) aid_size_touch_scroll_bar_cale

0x4b2e,	// (0x0002f126) popup_discreet_window_ParamLimits

0x4b2e,	// (0x0002f126) popup_discreet_window

0x4bb6,	// (0x0002f1ae) popup_sk_window

0xa333,	// (0x0003492b) bg_popup_sub_pane_cp28_ParamLimits

0xa333,	// (0x0003492b) bg_popup_sub_pane_cp28

0xed0b,	// (0x00039303) popup_discreet_window_g1_ParamLimits

0xed0b,	// (0x00039303) popup_discreet_window_g1

0xed2b,	// (0x00039323) popup_discreet_window_t1_ParamLimits

0xed2b,	// (0x00039323) popup_discreet_window_t1

0xed49,	// (0x00039341) popup_discreet_window_t2_ParamLimits

0xed49,	// (0x00039341) popup_discreet_window_t2

0x0002,

0xfe4a,	// (0x0003a442) popup_discreet_window_t_ParamLimits

0xfe4a,	// (0x0003a442) popup_discreet_window_t

0x70cb,	// (0x000316c3) popup_sk_window_g1

0x70d5,	// (0x000316cd) popup_sk_window_g2

0x0001,

0xfe51,	// (0x0003a449) popup_sk_window_g

0x70dd,	// (0x000316d5) popup_sk_window_t1

0x70eb,	// (0x000316e3) popup_sk_window_t1_copy1

0xe940,	// (0x00038f38) cell_ai5_widget_pane_g2_ParamLimits

0xea99,	// (0x00039091) cell_ai5_widget_pane_t9_ParamLimits

0xea99,	// (0x00039091) cell_ai5_widget_pane_t9

0x7e74,	// (0x0003246c) main_fep_fshwr2_pane

0x70f9,	// (0x000316f1) aid_fshwr2_btn_pane

0x7105,	// (0x000316fd) aid_fshwr2_syb_pane

0x7111,	// (0x00031709) aid_fshwr2_txt_pane

0x711d,	// (0x00031715) fshwr2_func_candi_pane

0x7132,	// (0x0003172a) fshwr2_hwr_syb_pane

0x7142,	// (0x0003173a) fshwr2_icf_pane

0x4a55,	// (0x0002f04d) fshwr2_icf_bg_pane

0x716b,	// (0x00031763) fshwr2_icf_pane_t1_ParamLimits

0x716b,	// (0x00031763) fshwr2_icf_pane_t1

0x8e57,	// (0x0003344f) fshwr2_func_candi_pane_g1

0xed9b,	// (0x00039393) fshwr2_func_candi_row_pane_ParamLimits

0xed9b,	// (0x00039393) fshwr2_func_candi_row_pane

0x7183,	// (0x0003177b) cell_fshwr2_syb_pane_ParamLimits

0x7183,	// (0x0003177b) cell_fshwr2_syb_pane

0x66b2,	// (0x00030caa) fshwr2_hwr_syb_pane_g1_ParamLimits

0x66b2,	// (0x00030caa) fshwr2_hwr_syb_pane_g1

0x4a55,	// (0x0002f04d) bg_popup_call_pane_cp01

0x7199,	// (0x00031791) fshwr2_func_candi_cell_pane_ParamLimits

0x7199,	// (0x00031791) fshwr2_func_candi_cell_pane

0xedab,	// (0x000393a3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xedab,	// (0x000393a3) fshwr2_func_candi_cell_bg_pane

0x71e4,	// (0x000317dc) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x71e4,	// (0x000317dc) fshwr2_func_candi_cell_pane_g1

0x720c,	// (0x00031804) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x720c,	// (0x00031804) fshwr2_func_candi_cell_pane_t1

0x4a55,	// (0x0002f04d) bg_button_pane_cp08

0xedb7,	// (0x000393af) cell_fshwr2_syb_bg_pane

0x721f,	// (0x00031817) cell_fshwr2_syb_bg_pane_g1

0x7227,	// (0x0003181f) cell_fshwr2_syb_bg_pane_t1

0x87d7,	// (0x00032dcf) main_tmo_pane

0xae4e,	// (0x00035446) uni_indicator_pane_g1_ParamLimits

0xae64,	// (0x0003545c) uni_indicator_pane_g2_ParamLimits

0xae7a,	// (0x00035472) uni_indicator_pane_g3_ParamLimits

0xae8d,	// (0x00035485) uni_indicator_pane_g4_ParamLimits

0xae8d,	// (0x00035485) uni_indicator_pane_g4

0xaea1,	// (0x00035499) uni_indicator_pane_g5_ParamLimits

0xaea1,	// (0x00035499) uni_indicator_pane_g5

0xaea1,	// (0x00035499) uni_indicator_pane_g6_ParamLimits

0xaea1,	// (0x00035499) uni_indicator_pane_g6

0xf921,	// (0x00039f19) uni_indicator_pane_g_ParamLimits

0xd78e,	// (0x00037d86) popup_tmo_note_window_ParamLimits

0xd78e,	// (0x00037d86) popup_tmo_note_window

0x694b,	// (0x00030f43) fshwr2_bg_pane

0x71fd,	// (0x000317f5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x71fd,	// (0x000317f5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe56,	// (0x0003a44e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe56,	// (0x0003a44e) fshwr2_func_candi_cell_pane_g

0x669a,	// (0x00030c92) bg_popup_window_pane_cp01

0x7236,	// (0x0003182e) bg_popup_window_pane_g1_cp01

0xedbf,	// (0x000393b7) bg_popup_window_pane_cp22_ParamLimits

0xedbf,	// (0x000393b7) bg_popup_window_pane_cp22

0xedcd,	// (0x000393c5) listscroll_tmo_link_pane_ParamLimits

0xedcd,	// (0x000393c5) listscroll_tmo_link_pane

0xee0d,	// (0x00039405) popup_tmo_note_window_g1_ParamLimits

0xee0d,	// (0x00039405) popup_tmo_note_window_g1

0xee1a,	// (0x00039412) tmo_note_info_pane_ParamLimits

0xee1a,	// (0x00039412) tmo_note_info_pane

0xee34,	// (0x0003942c) list_tmo_note_info_pane_g1_ParamLimits

0xee34,	// (0x0003942c) list_tmo_note_info_pane_g1

0xee4b,	// (0x00039443) list_tmo_note_info_pane_g2_ParamLimits

0xee4b,	// (0x00039443) list_tmo_note_info_pane_g2

0x0001,

0xfe5b,	// (0x0003a453) list_tmo_note_info_pane_g_ParamLimits

0xfe5b,	// (0x0003a453) list_tmo_note_info_pane_g

0xee67,	// (0x0003945f) list_tmo_note_info_text_pane_ParamLimits

0xee67,	// (0x0003945f) list_tmo_note_info_text_pane

0xeee8,	// (0x000394e0) list_tmo_link_pane

0xeef5,	// (0x000394ed) scroll_pane_cp20

0xef02,	// (0x000394fa) list_single_tmo_link_pane_ParamLimits

0xef02,	// (0x000394fa) list_single_tmo_link_pane

0xef12,	// (0x0003950a) list_single_tmo_link_pane_t1

0xef20,	// (0x00039518) list_tmo_note_info_text_pane_t1_ParamLimits

0xef20,	// (0x00039518) list_tmo_note_info_text_pane_t1

0x888e,	// (0x00032e86) aid_size_touch_scroll_bar_cp01_ParamLimits

0x888e,	// (0x00032e86) aid_size_touch_scroll_bar_cp01

0x5339,	// (0x0002f931) aid_size_touch_slider_marker

0x4b9e,	// (0x0002f196) popup_settings_window_ParamLimits

0x4b9e,	// (0x0002f196) popup_settings_window

0x74eb,	// (0x00031ae3) popup_candi_list_indi_window

0x9816,	// (0x00033e0e) aid_touch_navi_pane_ParamLimits

0x68a6,	// (0x00030e9e) rs_clock_indi_pane

0x68af,	// (0x00030ea7) sctrl_sk_bottom_pane_ParamLimits

0x68c0,	// (0x00030eb8) sctrl_sk_top_pane_ParamLimits

0x69c3,	// (0x00030fbb) popup_fep_tooltip_window

0xe8b6,	// (0x00038eae) aid_size_cell_widget_grid_ParamLimits

0xe92b,	// (0x00038f23) cell_ai5_widget_pane_g1_ParamLimits

0xe92b,	// (0x00038f23) cell_ai5_widget_pane_g1

0xe97f,	// (0x00038f77) cell_ai5_widget_pane_g6_ParamLimits

0xe98b,	// (0x00038f83) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfdfa,	// (0x0003a3f2) cell_ai5_widget_pane_g_ParamLimits

0xfdfa,	// (0x0003a3f2) cell_ai5_widget_pane_g

0xeabd,	// (0x000390b5) cell_ai5_widget_pane_t10_ParamLimits

0xeabd,	// (0x000390b5) cell_ai5_widget_pane_t10

0xeadb,	// (0x000390d3) grid_ai5_widget_pane_ParamLimits

0xeb7c,	// (0x00039174) cell_contacts_ai5_widget_pane_ParamLimits

0xeb7c,	// (0x00039174) cell_contacts_ai5_widget_pane

0xed5e,	// (0x00039356) popup_discreet_window_t3_ParamLimits

0xed5e,	// (0x00039356) popup_discreet_window_t3

0x7157,	// (0x0003174f) popup_fshwr2_char_preview_window_ParamLimits

0x7157,	// (0x0003174f) popup_fshwr2_char_preview_window

0xee85,	// (0x0003947d) tmo_note_info_pane_t1

0xee9a,	// (0x00039492) tmo_note_info_pane_t2

0xeeaf,	// (0x000394a7) tmo_note_info_pane_t3

0xeec4,	// (0x000394bc) tmo_note_info_pane_t4

0xeed6,	// (0x000394ce) tmo_note_info_pane_t5

0x0004,

0xfe60,	// (0x0003a458) tmo_note_info_pane_t

0xeee8,	// (0x000394e0) list_tmo_link_pane_ParamLimits

0xeef5,	// (0x000394ed) scroll_pane_cp20_ParamLimits

0x4a55,	// (0x0002f04d) bg_popup_fep_char_preview_window_cp01

0xef39,	// (0x00039531) popup_fshwr2_char_preview_window_t1

0xef47,	// (0x0003953f) popup_candi_list_indi_window_g1

0xef50,	// (0x00039548) bg_cell_contacts_ai5_widget_pane

0xef5c,	// (0x00039554) cell_contacts_ai5_widget_pane_g1

0xc951,	// (0x00036f49) cell_contacts_ai5_widget_pane_g2

0xef71,	// (0x00039569) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe6b,	// (0x0003a463) cell_contacts_ai5_widget_pane_g

0xef7d,	// (0x00039575) cell_contacts_ai5_widget_pane_t1

0x87d7,	// (0x00032dcf) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeff4,	// (0x000395ec) settings_container_pane

0x946a,	// (0x00033a62) listscroll_set_pane_copy1

0xb9c7,	// (0x00035fbf) scroll_pane_cp121_copy1

0xa0e4,	// (0x000346dc) set_content_pane_copy1

0xf000,	// (0x000395f8) aid_height_set_list_copy1_ParamLimits

0xf000,	// (0x000395f8) aid_height_set_list_copy1

0xb099,	// (0x00035691) aid_size_parent_copy1_ParamLimits

0xb099,	// (0x00035691) aid_size_parent_copy1

0xf00c,	// (0x00039604) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf00c,	// (0x00039604) button_value_adjust_pane_cp6_copy1

0x97b4,	// (0x00033dac) list_highlight_pane_cp2_copy1_ParamLimits

0x97b4,	// (0x00033dac) list_highlight_pane_cp2_copy1

0xf020,	// (0x00039618) list_set_pane_copy1_ParamLimits

0xf020,	// (0x00039618) list_set_pane_copy1

0xef8f,	// (0x00039587) main_pane_set_t1_copy1_ParamLimits

0xef8f,	// (0x00039587) main_pane_set_t1_copy1

0xefc9,	// (0x000395c1) main_pane_set_t2_copy1_ParamLimits

0xefc9,	// (0x000395c1) main_pane_set_t2_copy1

0xf0cd,	// (0x000396c5) main_pane_set_t3_copy1

0xf0db,	// (0x000396d3) main_pane_set_t4_copy1

0xefe8,	// (0x000395e0) set_content_pane_g1_copy1_ParamLimits

0xefe8,	// (0x000395e0) set_content_pane_g1_copy1

0xf0e9,	// (0x000396e1) setting_code_pane_copy1

0xf0f1,	// (0x000396e9) setting_slider_graphic_pane_copy1

0xf0f1,	// (0x000396e9) setting_slider_pane_copy1

0xf0f1,	// (0x000396e9) setting_text_pane_copy1

0xf0f1,	// (0x000396e9) setting_volume_pane_copy1

0xf0e9,	// (0x000396e1) settings_code_pane_cp2_copy1

0xf0f9,	// (0x000396f1) settings_code_pane_cp_copy1_ParamLimits

0xf0f9,	// (0x000396f1) settings_code_pane_cp_copy1

0x723f,	// (0x00031837) volume_set_pane_copy1

0xf10d,	// (0x00039705) volume_set_pane_g10_copy1

0xf115,	// (0x0003970d) volume_set_pane_g1_copy1

0xf11d,	// (0x00039715) volume_set_pane_g2_copy1

0xf125,	// (0x0003971d) volume_set_pane_g3_copy1

0xf12d,	// (0x00039725) volume_set_pane_g4_copy1

0xf135,	// (0x0003972d) volume_set_pane_g5_copy1

0xf13d,	// (0x00039735) volume_set_pane_g6_copy1

0xf145,	// (0x0003973d) volume_set_pane_g7_copy1

0xf14d,	// (0x00039745) volume_set_pane_g8_copy1

0xf155,	// (0x0003974d) volume_set_pane_g9_copy1

0x7f68,	// (0x00032560) bg_set_opt_pane_cp_copy1_ParamLimits

0x7f68,	// (0x00032560) bg_set_opt_pane_cp_copy1

0x7247,	// (0x0003183f) setting_slider_pane_t1_copy1_ParamLimits

0x7247,	// (0x0003183f) setting_slider_pane_t1_copy1

0x7265,	// (0x0003185d) setting_slider_pane_t2_copy1_ParamLimits

0x7265,	// (0x0003185d) setting_slider_pane_t2_copy1

0x727f,	// (0x00031877) setting_slider_pane_t3_copy1_ParamLimits

0x727f,	// (0x00031877) setting_slider_pane_t3_copy1

0x7297,	// (0x0003188f) slider_set_pane_copy1_ParamLimits

0x7297,	// (0x0003188f) slider_set_pane_copy1

0x882f,	// (0x00032e27) set_opt_bg_pane_g1_copy2

0x8837,	// (0x00032e2f) set_opt_bg_pane_g2_copy2

0xf15d,	// (0x00039755) set_opt_bg_pane_g3_copy2

0x8847,	// (0x00032e3f) set_opt_bg_pane_g4_copy2

0x884f,	// (0x00032e47) set_opt_bg_pane_g5_copy2

0x8857,	// (0x00032e4f) set_opt_bg_pane_g6_copy2

0xf167,	// (0x0003975f) set_opt_bg_pane_g7_copy2

0xf16f,	// (0x00039767) set_opt_bg_pane_g8_copy2

0xf179,	// (0x00039771) set_opt_bg_pane_g9_copy2

0x72ad,	// (0x000318a5) aid_size_touch_slider_mark_copy1_ParamLimits

0x72ad,	// (0x000318a5) aid_size_touch_slider_mark_copy1

0xf183,	// (0x0003977b) slider_set_pane_g1_copy1

0x72c1,	// (0x000318b9) slider_set_pane_g2_copy1

0x62db,	// (0x000308d3) slider_set_pane_g3_copy1_ParamLimits

0x62db,	// (0x000308d3) slider_set_pane_g3_copy1

0x62ef,	// (0x000308e7) slider_set_pane_g4_copy1_ParamLimits

0x62ef,	// (0x000308e7) slider_set_pane_g4_copy1

0x6307,	// (0x000308ff) slider_set_pane_g5_copy1_ParamLimits

0x6307,	// (0x000308ff) slider_set_pane_g5_copy1

0x62db,	// (0x000308d3) slider_set_pane_g6_copy1_ParamLimits

0x62db,	// (0x000308d3) slider_set_pane_g6_copy1

0x72c9,	// (0x000318c1) slider_set_pane_g7_copy1_ParamLimits

0x72c9,	// (0x000318c1) slider_set_pane_g7_copy1

0x7e88,	// (0x00032480) bg_set_opt_pane_cp2_copy1

0xf18c,	// (0x00039784) setting_slider_graphic_pane_g1_copy1

0xf195,	// (0x0003978d) setting_slider_graphic_pane_t1_copy1

0xf1a5,	// (0x0003979d) setting_slider_graphic_pane_t2_copy1

0xf1b5,	// (0x000397ad) slider_set_pane_cp_copy1

0xf1c5,	// (0x000397bd) input_focus_pane_cp1_copy1

0xf1ce,	// (0x000397c6) list_set_text_pane_copy1

0xf1d6,	// (0x000397ce) setting_text_pane_g1_copy1

0x4d3f,	// (0x0002f337) set_text_pane_t1_copy1

0xf1c5,	// (0x000397bd) input_focus_pane_cp2_copy1

0xf1d6,	// (0x000397ce) setting_code_pane_g1_copy1

0xf1df,	// (0x000397d7) setting_code_pane_t1_copy1

0xf1ed,	// (0x000397e5) list_set_graphic_pane_copy1

0x7e88,	// (0x00032480) bg_set_opt_pane_cp4_copy1

0x9165,	// (0x0003375d) list_set_graphic_pane_g1_copy1_ParamLimits

0x9165,	// (0x0003375d) list_set_graphic_pane_g1_copy1

0xf200,	// (0x000397f8) list_set_graphic_pane_g2_copy1

0x917d,	// (0x00033775) list_set_graphic_pane_t1_copy1_ParamLimits

0x917d,	// (0x00033775) list_set_graphic_pane_t1_copy1

0xc2b3,	// (0x000368ab) rs_clock_indi_pane_g1

0xf208,	// (0x00039800) rs_clock_indi_pane_t1

0xf216,	// (0x0003980e) rs_indi_pane

0xf21e,	// (0x00039816) rs_indi_pane_g1

0xf227,	// (0x0003981f) rs_indi_pane_g2

0xf230,	// (0x00039828) rs_indi_pane_g3

0x0002,

0xfe72,	// (0x0003a46a) rs_indi_pane_g

0x946a,	// (0x00033a62) bg_popup_preview_window_pane_cp03

0xf239,	// (0x00039831) popup_fep_tooltip_window_t1

0xcf2f,	// (0x00037527) popup_note2_window_g2_ParamLimits

0xcf2f,	// (0x00037527) popup_note2_window_g2

0x0001,

0xfc63,	// (0x0003a25b) popup_note2_window_g_ParamLimits

0xfc63,	// (0x0003a25b) popup_note2_window_g

0xd42a,	// (0x00037a22) bg_popup_sub_pane_cp11_ParamLimits

0xd437,	// (0x00037a2f) cell_ai3_links_pane_g1_ParamLimits

0xd44e,	// (0x00037a46) cell_ai3_links_pane_t1

0x4d3f,	// (0x0002f337) set_text_pane_t1_copy1_ParamLimits

0x937b,	// (0x00033973) cell_graphic_popup_pane_cp2_ParamLimits

0x937b,	// (0x00033973) cell_graphic_popup_pane_cp2

0xf247,	// (0x0003983f) cell_graphic_popup_pane_g1_cp2

0x8522,	// (0x00032b1a) cell_graphic_popup_pane_g2_cp2

0xf24f,	// (0x00039847) cell_graphic_popup_pane_g3_cp2

0xf257,	// (0x0003984f) cell_graphic_popup_pane_t2_cp2

0x8533,	// (0x00032b2b) grid_highlight_pane_cp3_cp2

0x8b74,	// (0x0003316c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x87d7,	// (0x00032dcf) main_tmo_pane_ParamLimits

0xd782,	// (0x00037d7a) popup_tmo_big_image_note_window

0xe91a,	// (0x00038f12) cell_ai5_widget_list_pane

0xe922,	// (0x00038f1a) cell_ai5_widget_lrg_icon_pane

0xee85,	// (0x0003947d) tmo_note_info_pane_t1_ParamLimits

0xee9a,	// (0x00039492) tmo_note_info_pane_t2_ParamLimits

0xeeaf,	// (0x000394a7) tmo_note_info_pane_t3_ParamLimits

0xeec4,	// (0x000394bc) tmo_note_info_pane_t4_ParamLimits

0xeed6,	// (0x000394ce) tmo_note_info_pane_t5_ParamLimits

0xfe60,	// (0x0003a458) tmo_note_info_pane_t_ParamLimits

0xeff4,	// (0x000395ec) settings_container_pane_ParamLimits

0xf1bd,	// (0x000397b5) indicator_popup_pane_cp5

0xf1bd,	// (0x000397b5) indicator_popup_pane_cp6

0xf1ed,	// (0x000397e5) list_set_graphic_pane_copy1_ParamLimits

0x7e74,	// (0x0003246c) bg_popup_window_pane_cp23

0xf265,	// (0x0003985d) popup_tmo_big_image_note_window_g1

0xf26f,	// (0x00039867) popup_tmo_big_image_note_window_t1

0xf27f,	// (0x00039877) popup_tmo_big_image_note_window_t2

0xf28f,	// (0x00039887) popup_tmo_big_image_note_window_t3

0x0002,

0xfe79,	// (0x0003a471) popup_tmo_big_image_note_window_t

0xc2b3,	// (0x000368ab) cell_ai5_widget_lrg_icon_pane_g1

0xf29f,	// (0x00039897) cell_ai5_widget_lrg_icon_pane_t1

0xf2ad,	// (0x000398a5) cell_ai5_widget_list_row_pane_ParamLimits

0xf2ad,	// (0x000398a5) cell_ai5_widget_list_row_pane

0xf2c4,	// (0x000398bc) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2c4,	// (0x000398bc) cell_ai5_widget_list_row_pane_g1

0xf2d1,	// (0x000398c9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2d1,	// (0x000398c9) cell_ai5_widget_list_row_pane_t1

0xf302,	// (0x000398fa) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf302,	// (0x000398fa) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfe80,	// (0x0003a478) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfe80,	// (0x0003a478) cell_ai5_widget_list_row_pane_t

0x4a55,	// (0x0002f04d) main_fep_vtchi_ss_pane

0xf346,	// (0x0003993e) popup_fep_char_pre_window

0xf34e,	// (0x00039946) popup_fep_ituss_window

0xf36f,	// (0x00039967) popup_fep_vkbss_window

0xf399,	// (0x00039991) grid_vkbss_keypad_pane_ParamLimits

0xf399,	// (0x00039991) grid_vkbss_keypad_pane

0xf3a5,	// (0x0003999d) ituss_keypad_pane

0x72eb,	// (0x000318e3) aid_vkbss_key_offset_ParamLimits

0x72eb,	// (0x000318e3) aid_vkbss_key_offset

0x72f7,	// (0x000318ef) cell_vkbss_key_pane_ParamLimits

0x72f7,	// (0x000318ef) cell_vkbss_key_pane

0xf3b4,	// (0x000399ac) bg_cell_vkbss_key_g1_ParamLimits

0xf3b4,	// (0x000399ac) bg_cell_vkbss_key_g1

0xf3c0,	// (0x000399b8) cell_vkbss_key_3p_pane_ParamLimits

0xf3c0,	// (0x000399b8) cell_vkbss_key_3p_pane

0xf3d4,	// (0x000399cc) cell_vkbss_key_g1_ParamLimits

0xf3d4,	// (0x000399cc) cell_vkbss_key_g1

0xf3e8,	// (0x000399e0) cell_vkbss_key_t1_ParamLimits

0xf3e8,	// (0x000399e0) cell_vkbss_key_t1

0x730d,	// (0x00031905) cell_ituss_key_pane_ParamLimits

0x730d,	// (0x00031905) cell_ituss_key_pane

0xf413,	// (0x00039a0b) bg_cell_ituss_key_g1_ParamLimits

0xf413,	// (0x00039a0b) bg_cell_ituss_key_g1

0xf41f,	// (0x00039a17) cell_ituss_key_pane_g1_ParamLimits

0xf41f,	// (0x00039a17) cell_ituss_key_pane_g1

0x731e,	// (0x00031916) cell_ituss_key_pane_g2_ParamLimits

0x731e,	// (0x00031916) cell_ituss_key_pane_g2

0x0002,

0xfe87,	// (0x0003a47f) cell_ituss_key_pane_g_ParamLimits

0xfe87,	// (0x0003a47f) cell_ituss_key_pane_g

0x734a,	// (0x00031942) cell_ituss_key_t1_ParamLimits

0x734a,	// (0x00031942) cell_ituss_key_t1

0x7384,	// (0x0003197c) cell_ituss_key_t2_ParamLimits

0x7384,	// (0x0003197c) cell_ituss_key_t2

0x73b5,	// (0x000319ad) cell_ituss_key_t3_ParamLimits

0x73b5,	// (0x000319ad) cell_ituss_key_t3

0x7384,	// (0x0003197c) cell_ituss_key_t4_ParamLimits

0x7384,	// (0x0003197c) cell_ituss_key_t4

0x0004,

0xfe8e,	// (0x0003a486) cell_ituss_key_t_ParamLimits

0xfe8e,	// (0x0003a486) cell_ituss_key_t

0xf44b,	// (0x00039a43) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x00039a4b) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x00039a53) cell_vkbss_key_3p_pane_g3

0x0002,

0xfe99,	// (0x0003a491) cell_vkbss_key_3p_pane_g

0x4a55,	// (0x0002f04d) bg_popup_fep_char_preview_window_cp02

0x73f8,	// (0x000319f0) popup_fep_char_pre_window_t1

0xe8ac,	// (0x00038ea4) main_ai5_sk_pane

0xef50,	// (0x00039548) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef5c,	// (0x00039554) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc951,	// (0x00036f49) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef71,	// (0x00039569) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe6b,	// (0x0003a463) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef7d,	// (0x00039575) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x87d7,	// (0x00032dcf) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf463,	// (0x00039a5b) main_ai5_sk_pane_g1

0xa16c,	// (0x00034764) popup_query_code_window_g1

0xf364,	// (0x0003995c) popup_fep_vkb_icf_pane

0xf383,	// (0x0003997b) popup_fep_vtchi_icf_pane

0xf46c,	// (0x00039a64) bg_icf_pane

0xf478,	// (0x00039a70) list_vkb_icf_pane

0xf487,	// (0x00039a7f) bg_icf_pane_cp01

0xf49a,	// (0x00039a92) vtchi_icf_list_pane

0xf4aa,	// (0x00039aa2) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x00039aa2) list_vkb_icf_pane_t1

0xf4c0,	// (0x00039ab8) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x00039ab8) vtchi_icf_list_pane_t1

0xf34e,	// (0x00039946) popup_fep_ituss_window_ParamLimits

0xf383,	// (0x0003997b) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a5,	// (0x0003999d) ituss_keypad_pane_ParamLimits

0x72df,	// (0x000318d7) ituss_sks_pane

0xf46c,	// (0x00039a64) bg_icf_pane_ParamLimits

0xf32a,	// (0x00039922) icf_edit_indi_pane_ParamLimits

0xf32a,	// (0x00039922) icf_edit_indi_pane

0xf478,	// (0x00039a70) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x00039a7f) bg_icf_pane_cp01_ParamLimits

0xf339,	// (0x00039931) icf_edit_indi_pane_cp01_ParamLimits

0xf339,	// (0x00039931) icf_edit_indi_pane_cp01

0xf4a2,	// (0x00039a9a) vtchi_query_pane

0xc531,	// (0x00036b29) icf_edit_indi_pane_g1_ParamLimits

0xc531,	// (0x00036b29) icf_edit_indi_pane_g1

0xf531,	// (0x00039b29) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x00039b29) icf_edit_indi_pane_g2

0x0001,

0x00f2,	// (0x0002a6ea) icf_edit_indi_pane_g_ParamLimits

0x00f2,	// (0x0002a6ea) icf_edit_indi_pane_g

0xf540,	// (0x00039b38) icf_edit_indi_pane_t1

0xf4da,	// (0x00039ad2) bg_input_focus_pane_cp042

0x8706,	// (0x00032cfe) vtchi_button_pane

0xf4e3,	// (0x00039adb) vtchi_query_pane_t1

0xf4f1,	// (0x00039ae9) vtchi_query_pane_t2

0xf4ff,	// (0x00039af7) vtchi_query_pane_t3

0x0002,

0xfea0,	// (0x0003a498) vtchi_query_pane_t

0x4a55,	// (0x0002f04d) bg_button_pane_cp13

0xf50d,	// (0x00039b05) vtchi_button_pane_g1

0x7407,	// (0x000319ff) ituss_sks_pane_g1

0x7412,	// (0x00031a0a) ituss_sks_pane_g2

0x0001,

0xfea7,	// (0x0003a49f) ituss_sks_pane_g

0xf515,	// (0x00039b0d) ituss_sks_pane_t1

0xf523,	// (0x00039b1b) ituss_sks_pane_t2

0x0001,

0xfeac,	// (0x0003a4a4) ituss_sks_pane_t

0xbd4d,	// (0x00036345) indicator_nsta_pane_cp_g1

0xbd55,	// (0x0003634d) indicator_nsta_pane_cp_g2

0xbd5d,	// (0x00036355) indicator_nsta_pane_cp_g3

0xbd4d,	// (0x00036345) indicator_nsta_pane_cp_g4

0xbd55,	// (0x0003634d) indicator_nsta_pane_cp_g5

0xbd5d,	// (0x00036355) indicator_nsta_pane_cp_g6

0x0005,

0xfaa1,	// (0x0003a099) indicator_nsta_pane_cp_g

0xe496,	// (0x00038a8e) cell_graphic2_pane_t2_ParamLimits

0xe496,	// (0x00038a8e) cell_graphic2_pane_t2

0x0001,

0xfd8d,	// (0x0003a385) cell_graphic2_pane_t_ParamLimits

0xfd8d,	// (0x0003a385) cell_graphic2_pane_t

0xe4c3,	// (0x00038abb) cell_graphic2_control_pane_t1

0x8f18,	// (0x00033510) signal_pane_g3_ParamLimits

0x8f18,	// (0x00033510) signal_pane_g3

0x8f2a,	// (0x00033522) signal_pane_g4_ParamLimits

0x8f2a,	// (0x00033522) signal_pane_g4

0xf314,	// (0x0003990c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf314,	// (0x0003990c) cell_ai5_widget_list_row_pane_t3

0xf439,	// (0x00039a31) cell_ituss_key_pane_t1_ParamLimits

0xf439,	// (0x00039a31) cell_ituss_key_pane_t1

0x9dc3,	// (0x000343bb) form_field_data_wide_pane_vc_t2_ParamLimits

0x9dc3,	// (0x000343bb) form_field_data_wide_pane_vc_t2

0x9dd7,	// (0x000343cf) form_field_data_wide_pane_vc_t3_ParamLimits

0x9dd7,	// (0x000343cf) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x00039e01) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x00039e01) form_field_data_wide_pane_vc_t

0xba09,	// (0x00036001) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba09,	// (0x00036001) form_field_slider_wide_pane_vc_t3

0xbae7,	// (0x000360df) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbae7,	// (0x000360df) form_field_popup_wide_pane_vc_t2

0xbafe,	// (0x000360f6) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbafe,	// (0x000360f6) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa90,	// (0x0003a088) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa90,	// (0x0003a088) form_field_popup_wide_pane_vc_t

0x70f9,	// (0x000316f1) aid_fshwr2_btn_pane_ParamLimits

0x7105,	// (0x000316fd) aid_fshwr2_syb_pane_ParamLimits

0x7111,	// (0x00031709) aid_fshwr2_txt_pane_ParamLimits

0x694b,	// (0x00030f43) fshwr2_bg_pane_ParamLimits

0x711d,	// (0x00031715) fshwr2_func_candi_pane_ParamLimits

0x7132,	// (0x0003172a) fshwr2_hwr_syb_pane_ParamLimits

0x7142,	// (0x0003173a) fshwr2_icf_pane_ParamLimits

0x7a11,	// (0x00032009) list_double_graphic_pane_vc_g4_ParamLimits

0x7a11,	// (0x00032009) list_double_graphic_pane_vc_g4

0x733e,	// (0x00031936) cell_ituss_key_pane_g3_ParamLimits

0x733e,	// (0x00031936) cell_ituss_key_pane_g3

0x73e6,	// (0x000319de) cell_ituss_key_t5_ParamLimits

0x73e6,	// (0x000319de) cell_ituss_key_t5

0xf36f,	// (0x00039967) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small
