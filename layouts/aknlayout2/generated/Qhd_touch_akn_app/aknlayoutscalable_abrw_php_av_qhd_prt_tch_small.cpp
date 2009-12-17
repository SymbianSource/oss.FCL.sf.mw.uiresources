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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001e89f };

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
0x8ebb,	// (0x0002775a) Screen

0x8ec7,	// (0x00027766) application_window_ParamLimits

0x8ec7,	// (0x00027766) application_window

0x43d8,	// (0x00022c77) screen_g1

0x8f23,	// (0x000277c2) area_bottom_pane_ParamLimits

0x8f23,	// (0x000277c2) area_bottom_pane

0x8fe3,	// (0x00027882) area_top_pane_ParamLimits

0x8fe3,	// (0x00027882) area_top_pane

0x9081,	// (0x00027920) main_pane_ParamLimits

0x9081,	// (0x00027920) main_pane

0x43e2,	// (0x00022c81) misc_graphics

0xa41a,	// (0x00028cb9) battery_pane_ParamLimits

0xa41a,	// (0x00028cb9) battery_pane

0x6132,	// (0x000249d1) bg_status_flat_pane_g8

0x613a,	// (0x000249d9) bg_status_flat_pane_g9

0x5893,	// (0x00024132) context_pane_ParamLimits

0x5893,	// (0x00024132) context_pane

0xa54e,	// (0x00028ded) navi_pane_ParamLimits

0xa54e,	// (0x00028ded) navi_pane

0xa5ba,	// (0x00028e59) signal_pane_ParamLimits

0xa5ba,	// (0x00028e59) signal_pane

0x0008,

0xf8b2,	// (0x0002e151) bg_status_flat_pane_g

0xa61f,	// (0x00028ebe) status_pane_g1_ParamLimits

0xa61f,	// (0x00028ebe) status_pane_g1

0xa633,	// (0x00028ed2) status_pane_g2_ParamLimits

0xa633,	// (0x00028ed2) status_pane_g2

0x58f8,	// (0x00024197) status_pane_g3_ParamLimits

0x58f8,	// (0x00024197) status_pane_g3

0x0004,

0xf7e0,	// (0x0002e07f) status_pane_g_ParamLimits

0xf7e0,	// (0x0002e07f) status_pane_g

0xa63f,	// (0x00028ede) title_pane_ParamLimits

0xa63f,	// (0x00028ede) title_pane

0xa67c,	// (0x00028f1b) uni_indicator_pane_ParamLimits

0xa67c,	// (0x00028f1b) uni_indicator_pane

0x5686,	// (0x00023f25) bg_list_pane_ParamLimits

0x5686,	// (0x00023f25) bg_list_pane

0xd47b,	// (0x0002bd1a) find_pane

0x9f30,	// (0x000287cf) listscroll_app_pane_ParamLimits

0x9f30,	// (0x000287cf) listscroll_app_pane

0x56a6,	// (0x00023f45) listscroll_form_pane

0xd483,	// (0x0002bd22) listscroll_gen_pane_ParamLimits

0xd483,	// (0x0002bd22) listscroll_gen_pane

0x56a6,	// (0x00023f45) listscroll_set_pane

0x96ce,	// (0x00027f6d) main_idle_act_pane

0x5464,	// (0x00023d03) main_idle_trad_pane

0x5464,	// (0x00023d03) main_list_empty_pane

0x4b97,	// (0x00023436) main_midp_pane

0x56c0,	// (0x00023f5f) main_pane_g1_ParamLimits

0x56c0,	// (0x00023f5f) main_pane_g1

0x9f3c,	// (0x000287db) popup_ai_message_window_ParamLimits

0x9f3c,	// (0x000287db) popup_ai_message_window

0x9fba,	// (0x00028859) popup_fep_china_uni_window_ParamLimits

0x9fba,	// (0x00028859) popup_fep_china_uni_window

0x56f2,	// (0x00023f91) popup_fep_japan_candidate_window_ParamLimits

0x56f2,	// (0x00023f91) popup_fep_japan_candidate_window

0x5712,	// (0x00023fb1) popup_fep_japan_predictive_window_ParamLimits

0x5712,	// (0x00023fb1) popup_fep_japan_predictive_window

0xa016,	// (0x000288b5) popup_find_window

0xa023,	// (0x000288c2) popup_grid_graphic_window_ParamLimits

0xa023,	// (0x000288c2) popup_grid_graphic_window

0x5742,	// (0x00023fe1) popup_large_graphic_colour_window

0xa04b,	// (0x000288ea) popup_menu_window_ParamLimits

0xa04b,	// (0x000288ea) popup_menu_window

0xa203,	// (0x00028aa2) popup_note_image_window

0xa1ef,	// (0x00028a8e) popup_note_wait_window_ParamLimits

0xa1ef,	// (0x00028a8e) popup_note_wait_window

0xa1ef,	// (0x00028a8e) popup_note_window_ParamLimits

0xa1ef,	// (0x00028a8e) popup_note_window

0xa259,	// (0x00028af8) popup_query_code_window_ParamLimits

0xa259,	// (0x00028af8) popup_query_code_window

0x5768,	// (0x00024007) popup_query_data_code_window_ParamLimits

0x5768,	// (0x00024007) popup_query_data_code_window

0xa26d,	// (0x00028b0c) popup_query_data_window_ParamLimits

0xa26d,	// (0x00028b0c) popup_query_data_window

0xa289,	// (0x00028b28) popup_query_sat_info_window_ParamLimits

0xa289,	// (0x00028b28) popup_query_sat_info_window

0xa2c2,	// (0x00028b61) popup_snote_single_graphic_window_ParamLimits

0xa2c2,	// (0x00028b61) popup_snote_single_graphic_window

0xa2c2,	// (0x00028b61) popup_snote_single_text_window_ParamLimits

0xa2c2,	// (0x00028b61) popup_snote_single_text_window

0x5785,	// (0x00024024) popup_sub_window_general

0x57cd,	// (0x0002406c) popup_window_general_ParamLimits

0x57cd,	// (0x0002406c) popup_window_general

0x57e2,	// (0x00024081) power_save_pane

0x9db3,	// (0x00028652) control_pane_g1_ParamLimits

0x9db3,	// (0x00028652) control_pane_g1

0x9ddc,	// (0x0002867b) control_pane_g2_ParamLimits

0x9ddc,	// (0x0002867b) control_pane_g2

0x5660,	// (0x00023eff) control_pane_g3_ParamLimits

0x5660,	// (0x00023eff) control_pane_g3

0x0007,

0xf7c8,	// (0x0002e067) control_pane_g_ParamLimits

0xf7c8,	// (0x0002e067) control_pane_g

0x9e41,	// (0x000286e0) control_pane_t1_ParamLimits

0x9e41,	// (0x000286e0) control_pane_t1

0x9e93,	// (0x00028732) control_pane_t2_ParamLimits

0x9e93,	// (0x00028732) control_pane_t2

0x0002,

0xf7d9,	// (0x0002e078) control_pane_t_ParamLimits

0xf7d9,	// (0x0002e078) control_pane_t

0x5581,	// (0x00023e20) navi_navi_volume_pane_cp1

0x558a,	// (0x00023e29) status_small_icon_pane

0x5592,	// (0x00023e31) status_small_pane_g1_ParamLimits

0x5592,	// (0x00023e31) status_small_pane_g1

0x55c6,	// (0x00023e65) status_small_pane_g2_ParamLimits

0x55c6,	// (0x00023e65) status_small_pane_g2

0x55d2,	// (0x00023e71) status_small_pane_g3_ParamLimits

0x55d2,	// (0x00023e71) status_small_pane_g3

0x55de,	// (0x00023e7d) status_small_pane_g4_ParamLimits

0x55de,	// (0x00023e7d) status_small_pane_g4

0x55ea,	// (0x00023e89) status_small_pane_g5_ParamLimits

0x55ea,	// (0x00023e89) status_small_pane_g5

0x55f9,	// (0x00023e98) status_small_pane_g6_ParamLimits

0x55f9,	// (0x00023e98) status_small_pane_g6

0x0007,

0xf7b7,	// (0x0002e056) status_small_pane_g_ParamLimits

0xf7b7,	// (0x0002e056) status_small_pane_g

0x5629,	// (0x00023ec8) status_small_pane_t1

0x564c,	// (0x00023eeb) status_small_wait_pane_ParamLimits

0x564c,	// (0x00023eeb) status_small_wait_pane

0x99dc,	// (0x0002827b) aid_levels_signal_ParamLimits

0x99dc,	// (0x0002827b) aid_levels_signal

0x99ee,	// (0x0002828d) signal_pane_g1_ParamLimits

0x99ee,	// (0x0002828d) signal_pane_g1

0x9a03,	// (0x000282a2) signal_pane_g2_ParamLimits

0x9a03,	// (0x000282a2) signal_pane_g2

0x0001,

0xf74c,	// (0x0002dfeb) signal_pane_g_ParamLimits

0xf74c,	// (0x0002dfeb) signal_pane_g

0x4fca,	// (0x00023869) context_pane_g1

0x92c6,	// (0x00027b65) title_pane_g1

0x92f0,	// (0x00027b8f) title_pane_t1

0x43f8,	// (0x00022c97) title_pane_t2

0x441e,	// (0x00022cbd) title_pane_t3

0x0002,

0xf59b,	// (0x0002de3a) title_pane_t

0xa694,	// (0x00028f33) aid_levels_battery_ParamLimits

0xa694,	// (0x00028f33) aid_levels_battery

0xa6a8,	// (0x00028f47) battery_pane_g1_ParamLimits

0xa6a8,	// (0x00028f47) battery_pane_g1

0xa6be,	// (0x00028f5d) battery_pane_g2_ParamLimits

0xa6be,	// (0x00028f5d) battery_pane_g2

0x0001,

0xf7eb,	// (0x0002e08a) battery_pane_g_ParamLimits

0xf7eb,	// (0x0002e08a) battery_pane_g

0xaba4,	// (0x00029443) uni_indicator_pane_g1

0xabb9,	// (0x00029458) uni_indicator_pane_g2

0xabcf,	// (0x0002946e) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0002e1f9) uni_indicator_pane_g

0x52d6,	// (0x00023b75) navi_icon_pane_ParamLimits

0x52d6,	// (0x00023b75) navi_icon_pane

0x521f,	// (0x00023abe) navi_midp_pane

0x52f2,	// (0x00023b91) navi_navi_pane

0x52fc,	// (0x00023b9b) navi_text_pane_ParamLimits

0x52fc,	// (0x00023b9b) navi_text_pane

0x43d8,	// (0x00022c77) status_small_wait_pane_g1

0x4705,	// (0x00022fa4) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x0002e1f4) status_small_wait_pane_g

0x66c3,	// (0x00024f62) navi_navi_icon_text_pane

0x66dd,	// (0x00024f7c) navi_navi_pane_g1_ParamLimits

0x66dd,	// (0x00024f7c) navi_navi_pane_g1

0x66cb,	// (0x00024f6a) navi_navi_pane_g2_ParamLimits

0x66cb,	// (0x00024f6a) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0002e1c2) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0002e1c2) navi_navi_pane_g

0x66ef,	// (0x00024f8e) navi_navi_tabs_pane

0x66f8,	// (0x00024f97) navi_navi_text_pane

0x66c3,	// (0x00024f62) navi_navi_volume_pane

0xab68,	// (0x00029407) navi_text_pane_t1

0xab59,	// (0x000293f8) navi_icon_pane_g1

0x6604,	// (0x00024ea3) navi_navi_text_pane_t1

0xab48,	// (0x000293e7) navi_navi_volume_pane_g1

0xab50,	// (0x000293ef) volume_small_pane

0xaaba,	// (0x00029359) navi_navi_icon_text_pane_g1

0xaac2,	// (0x00029361) navi_navi_icon_text_pane_t1

0x52f2,	// (0x00023b91) navi_tabs_2_long_pane

0x52f2,	// (0x00023b91) navi_tabs_2_pane

0x52f2,	// (0x00023b91) navi_tabs_3_long_pane

0x52f2,	// (0x00023b91) navi_tabs_3_pane

0x52f2,	// (0x00023b91) navi_tabs_4_pane

0xaa9a,	// (0x00029339) tabs_2_active_pane_ParamLimits

0xaa9a,	// (0x00029339) tabs_2_active_pane

0xaaaa,	// (0x00029349) tabs_2_passive_pane_ParamLimits

0xaaaa,	// (0x00029349) tabs_2_passive_pane

0xaa68,	// (0x00029307) tabs_3_active_pane_ParamLimits

0xaa68,	// (0x00029307) tabs_3_active_pane

0xaa78,	// (0x00029317) tabs_3_passive_pane_ParamLimits

0xaa78,	// (0x00029317) tabs_3_passive_pane

0xaa89,	// (0x00029328) tabs_3_passive_pane_cp_ParamLimits

0xaa89,	// (0x00029328) tabs_3_passive_pane_cp

0xaa24,	// (0x000292c3) tabs_4_active_pane_ParamLimits

0xaa24,	// (0x000292c3) tabs_4_active_pane

0xaa35,	// (0x000292d4) tabs_4_passive_pane_ParamLimits

0xaa35,	// (0x000292d4) tabs_4_passive_pane

0xaa46,	// (0x000292e5) tabs_4_passive_pane_cp_ParamLimits

0xaa46,	// (0x000292e5) tabs_4_passive_pane_cp

0xaa57,	// (0x000292f6) tabs_4_passive_pane_cp2_ParamLimits

0xaa57,	// (0x000292f6) tabs_4_passive_pane_cp2

0xaa00,	// (0x0002929f) tabs_2_long_active_pane_ParamLimits

0xaa00,	// (0x0002929f) tabs_2_long_active_pane

0xaa12,	// (0x000292b1) tabs_2_long_passive_pane_ParamLimits

0xaa12,	// (0x000292b1) tabs_2_long_passive_pane

0xa9c1,	// (0x00029260) tabs_3_long_active_pane_ParamLimits

0xa9c1,	// (0x00029260) tabs_3_long_active_pane

0xa9d4,	// (0x00029273) tabs_3_long_passive_pane_ParamLimits

0xa9d4,	// (0x00029273) tabs_3_long_passive_pane

0xa9ed,	// (0x0002928c) tabs_3_long_passive_pane_cp_ParamLimits

0xa9ed,	// (0x0002928c) tabs_3_long_passive_pane_cp

0xa967,	// (0x00029206) volume_small_pane_g1

0xa970,	// (0x0002920f) volume_small_pane_g2

0xa979,	// (0x00029218) volume_small_pane_g3

0xa982,	// (0x00029221) volume_small_pane_g4

0xa98b,	// (0x0002922a) volume_small_pane_g5

0xa994,	// (0x00029233) volume_small_pane_g6

0xa99d,	// (0x0002923c) volume_small_pane_g7

0xa9a6,	// (0x00029245) volume_small_pane_g8

0xa9af,	// (0x0002924e) volume_small_pane_g9

0xa9b8,	// (0x00029257) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x0002e18e) volume_small_pane_g

0x443e,	// (0x00022cdd) bg_active_tab_pane_cp2_ParamLimits

0x443e,	// (0x00022cdd) bg_active_tab_pane_cp2

0x9358,	// (0x00027bf7) tabs_3_active_pane_g1

0x9360,	// (0x00027bff) tabs_3_active_pane_t1

0x443e,	// (0x00022cdd) bg_passive_tab_pane_cp2_ParamLimits

0x443e,	// (0x00022cdd) bg_passive_tab_pane_cp2

0x9358,	// (0x00027bf7) tabs_3_passive_pane_g1

0x9360,	// (0x00027bff) tabs_3_passive_pane_t1

0x443e,	// (0x00022cdd) bg_active_tab_pane_cp3_ParamLimits

0x443e,	// (0x00022cdd) bg_active_tab_pane_cp3

0x9372,	// (0x00027c11) tabs_4_active_pane_g1

0x937a,	// (0x00027c19) tabs_4_active_pane_t1

0x443e,	// (0x00022cdd) bg_passive_tab_pane_cp3_ParamLimits

0x443e,	// (0x00022cdd) bg_passive_tab_pane_cp3

0x9372,	// (0x00027c11) tabs_4_1_passive_pane_g1

0x937a,	// (0x00027c19) tabs_4_1_passive_pane_t1

0x4b97,	// (0x00023436) list_highlight_pane_cp2

0xad0e,	// (0x000295ad) list_set_pane_ParamLimits

0xad0e,	// (0x000295ad) list_set_pane

0xadb4,	// (0x00029653) main_pane_set_t1_ParamLimits

0xadb4,	// (0x00029653) main_pane_set_t1

0xadd4,	// (0x00029673) main_pane_set_t2_ParamLimits

0xadd4,	// (0x00029673) main_pane_set_t2

0xade8,	// (0x00029687) main_pane_set_t3_ParamLimits

0xade8,	// (0x00029687) main_pane_set_t3

0xadfa,	// (0x00029699) main_pane_set_t4_ParamLimits

0xadfa,	// (0x00029699) main_pane_set_t4

0x0003,

0xf9bf,	// (0x0002e25e) main_pane_set_t_ParamLimits

0xf9bf,	// (0x0002e25e) main_pane_set_t

0xae0c,	// (0x000296ab) setting_code_pane

0xae18,	// (0x000296b7) setting_slider_graphic_pane

0xae18,	// (0x000296b7) setting_slider_pane

0xae18,	// (0x000296b7) setting_text_pane

0xae18,	// (0x000296b7) setting_volume_pane

0x938c,	// (0x00027c2b) volume_set_pane

0x443e,	// (0x00022cdd) bg_set_opt_pane_cp

0x9394,	// (0x00027c33) setting_slider_pane_t1

0x93ad,	// (0x00027c4c) setting_slider_pane_t2

0x93c7,	// (0x00027c66) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0002de41) setting_slider_pane_t

0x93df,	// (0x00027c7e) slider_set_pane

0x43e2,	// (0x00022c81) bg_set_opt_pane_cp2

0x444c,	// (0x00022ceb) setting_slider_graphic_pane_g1

0x93f5,	// (0x00027c94) setting_slider_graphic_pane_t1

0x9405,	// (0x00027ca4) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0002de48) setting_slider_graphic_pane_t

0x9415,	// (0x00027cb4) slider_set_pane_cp

0x43e2,	// (0x00022c81) input_focus_pane_cp1

0x6b6e,	// (0x0002540d) list_set_text_pane

0x43d8,	// (0x00022c77) setting_text_pane_g1

0x43e2,	// (0x00022c81) input_focus_pane_cp2

0x43d8,	// (0x00022c77) setting_code_pane_g1

0x4455,	// (0x00022cf4) setting_code_pane_t1

0xcca8,	// (0x0002b547) set_text_pane_t1_ParamLimits

0xcca8,	// (0x0002b547) set_text_pane_t1

0x4aa6,	// (0x00023345) set_opt_bg_pane_g1

0x4aae,	// (0x0002334d) set_opt_bg_pane_g2

0x6b48,	// (0x000253e7) set_opt_bg_pane_g3

0x4abe,	// (0x0002335d) set_opt_bg_pane_g4

0x4ac6,	// (0x00023365) set_opt_bg_pane_g5

0x4ace,	// (0x0002336d) set_opt_bg_pane_g6

0x6b52,	// (0x000253f1) set_opt_bg_pane_g7

0x6b5a,	// (0x000253f9) set_opt_bg_pane_g8

0x6b64,	// (0x00025403) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x0002e24b) set_opt_bg_pane_g

0x6b3b,	// (0x000253da) slider_set_pane_g1

0xac83,	// (0x00029522) slider_set_pane_g2

0x0006,

0xf99d,	// (0x0002e23c) slider_set_pane_g

0xabfa,	// (0x00029499) volume_set_pane_g1

0xac02,	// (0x000294a1) volume_set_pane_g2

0xac0a,	// (0x000294a9) volume_set_pane_g3

0xac12,	// (0x000294b1) volume_set_pane_g4

0xac1a,	// (0x000294b9) volume_set_pane_g5

0xac22,	// (0x000294c1) volume_set_pane_g6

0xac2a,	// (0x000294c9) volume_set_pane_g7

0xac32,	// (0x000294d1) volume_set_pane_g8

0xac3a,	// (0x000294d9) volume_set_pane_g9

0xac42,	// (0x000294e1) volume_set_pane_g10

0x0009,

0xf975,	// (0x0002e214) volume_set_pane_g

0x941d,	// (0x00027cbc) indicator_pane_ParamLimits

0x941d,	// (0x00027cbc) indicator_pane

0x9429,	// (0x00027cc8) main_idle_pane_g2_ParamLimits

0x9429,	// (0x00027cc8) main_idle_pane_g2

0x9451,	// (0x00027cf0) main_pane_idle_g1_ParamLimits

0x9451,	// (0x00027cf0) main_pane_idle_g1

0x4463,	// (0x00022d02) popup_clock_digital_analogue_window_ParamLimits

0x4463,	// (0x00022d02) popup_clock_digital_analogue_window

0x945e,	// (0x00027cfd) soft_indicator_pane_ParamLimits

0x945e,	// (0x00027cfd) soft_indicator_pane

0x946a,	// (0x00027d09) wallpaper_pane_ParamLimits

0x946a,	// (0x00027d09) wallpaper_pane

0x43d8,	// (0x00022c77) wallpaper_pane_g1

0x9476,	// (0x00027d15) indicator_pane_g1_ParamLimits

0x9476,	// (0x00027d15) indicator_pane_g1

0x6cb0,	// (0x0002554f) navi_navi_icon_text_pane_srt_g1

0x4491,	// (0x00022d30) soft_indicator_pane_t1

0x44ab,	// (0x00022d4a) aid_ps_area_pane

0x9482,	// (0x00027d21) aid_ps_clock_pane

0x44bc,	// (0x00022d5b) aid_ps_indicator_pane

0x44c8,	// (0x00022d67) indicator_ps_pane_ParamLimits

0x44c8,	// (0x00022d67) indicator_ps_pane

0x44d7,	// (0x00022d76) power_save_pane_g1_ParamLimits

0x44d7,	// (0x00022d76) power_save_pane_g1

0x44e3,	// (0x00022d82) power_save_pane_g2_ParamLimits

0x44e3,	// (0x00022d82) power_save_pane_g2

0x8ed7,	// (0x00027776) aid_navinavi_width_pane

0x44ab,	// (0x00022d4a) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0002de4d) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0002de4d) power_save_pane_g

0x44f1,	// (0x00022d90) power_save_pane_t1_ParamLimits

0x44f1,	// (0x00022d90) power_save_pane_t1

0x9482,	// (0x00027d21) aid_ps_clock_pane_ParamLimits

0x44bc,	// (0x00022d5b) aid_ps_indicator_pane_ParamLimits

0x4503,	// (0x00022da2) power_save_pane_t4_ParamLimits

0x4503,	// (0x00022da2) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0002de52) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0002de52) power_save_pane_t

0x452d,	// (0x00022dcc) power_save_t3_ParamLimits

0x452d,	// (0x00022dcc) power_save_t3

0x4518,	// (0x00022db7) power_save_t2_ParamLimits

0x4518,	// (0x00022db7) power_save_t2

0x4542,	// (0x00022de1) indicator_ps_pane_g1

0x9490,	// (0x00027d2f) ai_gene_pane_ParamLimits

0x9490,	// (0x00027d2f) ai_gene_pane

0x949c,	// (0x00027d3b) ai_links_pane_ParamLimits

0x949c,	// (0x00027d3b) ai_links_pane

0x94a8,	// (0x00027d47) indicator_pane_cp1_ParamLimits

0x94a8,	// (0x00027d47) indicator_pane_cp1

0x94b4,	// (0x00027d53) main_pane_idle_g1_cp_ParamLimits

0x94b4,	// (0x00027d53) main_pane_idle_g1_cp

0x454b,	// (0x00022dea) popup_ai_links_title_window

0x94c0,	// (0x00027d5f) soft_indicator_pane_cp1_ParamLimits

0x94c0,	// (0x00027d5f) soft_indicator_pane_cp1

0x698f,	// (0x0002522e) ai_links_pane_g1

0x6998,	// (0x00025237) grid_ai_links_pane

0xab99,	// (0x00029438) ai_gene_pane_1

0x697d,	// (0x0002521c) ai_gene_pane_2

0x6986,	// (0x00025225) list_highlight_pane_cp4

0xab7d,	// (0x0002941c) cell_ai_link_pane_ParamLimits

0xab7d,	// (0x0002941c) cell_ai_link_pane

0x6975,	// (0x00025214) cell_ai_link_pane_g1

0x4705,	// (0x00022fa4) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x0002e1ef) cell_ai_link_pane_g

0x43e2,	// (0x00022c81) grid_highlight_cp2

0x43e2,	// (0x00022c81) bg_popup_sub_pane_cp1

0x4562,	// (0x00022e01) popup_ai_links_title_window_t1

0x68c3,	// (0x00025162) ai_gene_pane_1_g1_ParamLimits

0x68c3,	// (0x00025162) ai_gene_pane_1_g1

0x68cf,	// (0x0002516e) ai_gene_pane_1_g2_ParamLimits

0x68cf,	// (0x0002516e) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x0002e1e5) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x0002e1e5) ai_gene_pane_1_g

0x68dc,	// (0x0002517b) ai_gene_pane_1_t1_ParamLimits

0x68dc,	// (0x0002517b) ai_gene_pane_1_t1

0x6910,	// (0x000251af) grid_ai_soft_ind_pane

0x68ae,	// (0x0002514d) ai_gene_pane_2_t1_ParamLimits

0x68ae,	// (0x0002514d) ai_gene_pane_2_t1

0x94cc,	// (0x00027d6b) main_pane_empty_t1_ParamLimits

0x94cc,	// (0x00027d6b) main_pane_empty_t1

0x94e4,	// (0x00027d83) main_pane_empty_t2_ParamLimits

0x94e4,	// (0x00027d83) main_pane_empty_t2

0x94f9,	// (0x00027d98) main_pane_empty_t3_ParamLimits

0x94f9,	// (0x00027d98) main_pane_empty_t3

0x950b,	// (0x00027daa) main_pane_empty_t4_ParamLimits

0x950b,	// (0x00027daa) main_pane_empty_t4

0x951d,	// (0x00027dbc) main_pane_empty_t5_ParamLimits

0x951d,	// (0x00027dbc) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0002de57) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0002de57) main_pane_empty_t

0x4af7,	// (0x00023396) bg_popup_window_pane_ParamLimits

0x4af7,	// (0x00023396) bg_popup_window_pane

0x6612,	// (0x00024eb1) find_popup_pane_cp2_ParamLimits

0x6612,	// (0x00024eb1) find_popup_pane_cp2

0x661e,	// (0x00024ebd) heading_pane_ParamLimits

0x661e,	// (0x00024ebd) heading_pane

0x43e2,	// (0x00022c81) bg_popup_sub_pane

0xaadc,	// (0x0002937b) bg_popup_window_pane_g1_ParamLimits

0xaadc,	// (0x0002937b) bg_popup_window_pane_g1

0xaae8,	// (0x00029387) bg_popup_window_pane_g2_ParamLimits

0xaae8,	// (0x00029387) bg_popup_window_pane_g2

0xaaf4,	// (0x00029393) bg_popup_window_pane_g3_ParamLimits

0xaaf4,	// (0x00029393) bg_popup_window_pane_g3

0xab00,	// (0x0002939f) bg_popup_window_pane_g4_ParamLimits

0xab00,	// (0x0002939f) bg_popup_window_pane_g4

0xab0c,	// (0x000293ab) bg_popup_window_pane_g5_ParamLimits

0xab0c,	// (0x000293ab) bg_popup_window_pane_g5

0xab18,	// (0x000293b7) bg_popup_window_pane_g6_ParamLimits

0xab18,	// (0x000293b7) bg_popup_window_pane_g6

0xab24,	// (0x000293c3) bg_popup_window_pane_g7_ParamLimits

0xab24,	// (0x000293c3) bg_popup_window_pane_g7

0xab30,	// (0x000293cf) bg_popup_window_pane_g8_ParamLimits

0xab30,	// (0x000293cf) bg_popup_window_pane_g8

0xab3c,	// (0x000293db) bg_popup_window_pane_g9_ParamLimits

0xab3c,	// (0x000293db) bg_popup_window_pane_g9

0x65f8,	// (0x00024e97) bg_popup_window_pane_g10_ParamLimits

0x65f8,	// (0x00024e97) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0002e1ad) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0002e1ad) bg_popup_window_pane_g

0x65af,	// (0x00024e4e) bg_popup_heading_pane_ParamLimits

0x65af,	// (0x00024e4e) bg_popup_heading_pane

0xaf57,	// (0x000297f6) tabs_4_passive_pane_cp_srt_ParamLimits

0xaf57,	// (0x000297f6) tabs_4_passive_pane_cp_srt

0xaf69,	// (0x00029808) tabs_4_passive_pane_srt_ParamLimits

0x65c3,	// (0x00024e62) heading_pane_g2

0xaf69,	// (0x00029808) tabs_4_passive_pane_srt

0x4b97,	// (0x00023436) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4b97,	// (0x00023436) bg_passive_tab_pane_cp3_srt

0x65cb,	// (0x00024e6a) heading_pane_t1_ParamLimits

0x65cb,	// (0x00024e6a) heading_pane_t1

0x65e2,	// (0x00024e81) heading_pane_t2_ParamLimits

0x65e2,	// (0x00024e81) heading_pane_t2

0x0001,

0xf909,	// (0x0002e1a8) heading_pane_t_ParamLimits

0xf909,	// (0x0002e1a8) heading_pane_t

0x60fa,	// (0x00024999) bg_popup_heading_pane_g1

0x618b,	// (0x00024a2a) bg_popup_heading_pane_g2

0x6195,	// (0x00024a34) bg_popup_heading_pane_g3

0x619f,	// (0x00024a3e) bg_popup_heading_pane_g4

0x61a9,	// (0x00024a48) bg_popup_heading_pane_g5

0x61b3,	// (0x00024a52) bg_popup_heading_pane_g6

0x61bb,	// (0x00024a5a) bg_popup_heading_pane_g7

0x61c3,	// (0x00024a62) bg_popup_heading_pane_g8

0x61cd,	// (0x00024a6c) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0002e164) bg_popup_heading_pane_g

0x59ee,	// (0x0002428d) bg_popup_sub_pane_g1

0x59f6,	// (0x00024295) bg_popup_sub_pane_g2

0x59fe,	// (0x0002429d) bg_popup_sub_pane_g3

0x5a06,	// (0x000242a5) bg_popup_sub_pane_g4

0x5a0e,	// (0x000242ad) bg_popup_sub_pane_g5

0x5a16,	// (0x000242b5) bg_popup_sub_pane_g6

0x5a1e,	// (0x000242bd) bg_popup_sub_pane_g7

0x5a26,	// (0x000242c5) bg_popup_sub_pane_g8

0x5a2e,	// (0x000242cd) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x0002e13e) bg_popup_sub_pane_g

0x4430,	// (0x00022ccf) bg_popup_window_pane_cp5_ParamLimits

0x4430,	// (0x00022ccf) bg_popup_window_pane_cp5

0x457f,	// (0x00022e1e) popup_note_window_g1_ParamLimits

0x457f,	// (0x00022e1e) popup_note_window_g1

0x458b,	// (0x00022e2a) popup_note_window_t1_ParamLimits

0x458b,	// (0x00022e2a) popup_note_window_t1

0x45a1,	// (0x00022e40) popup_note_window_t2_ParamLimits

0x45a1,	// (0x00022e40) popup_note_window_t2

0x45b7,	// (0x00022e56) popup_note_window_t3_ParamLimits

0x45b7,	// (0x00022e56) popup_note_window_t3

0x45cd,	// (0x00022e6c) popup_note_window_t4_ParamLimits

0x45cd,	// (0x00022e6c) popup_note_window_t4

0x45f5,	// (0x00022e94) popup_note_window_t5_ParamLimits

0x45f5,	// (0x00022e94) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0002de62) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0002de62) popup_note_window_t

0x4619,	// (0x00022eb8) bg_popup_window_pane_cp6_ParamLimits

0x4619,	// (0x00022eb8) bg_popup_window_pane_cp6

0x6076,	// (0x00024915) popup_note_image_window_g1_ParamLimits

0x6076,	// (0x00024915) popup_note_image_window_g1

0x6082,	// (0x00024921) popup_note_image_window_g2_ParamLimits

0x6082,	// (0x00024921) popup_note_image_window_g2

0x0001,

0xf893,	// (0x0002e132) popup_note_image_window_g_ParamLimits

0xf893,	// (0x0002e132) popup_note_image_window_g

0x609b,	// (0x0002493a) popup_note_image_window_t1_ParamLimits

0x609b,	// (0x0002493a) popup_note_image_window_t1

0x60b4,	// (0x00024953) popup_note_image_window_t2_ParamLimits

0x60b4,	// (0x00024953) popup_note_image_window_t2

0x60cd,	// (0x0002496c) popup_note_image_window_t3_ParamLimits

0x60cd,	// (0x0002496c) popup_note_image_window_t3

0x0002,

0xf898,	// (0x0002e137) popup_note_image_window_t_ParamLimits

0xf898,	// (0x0002e137) popup_note_image_window_t

0x5f53,	// (0x000247f2) bg_popup_window_pane_cp7_ParamLimits

0x5f53,	// (0x000247f2) bg_popup_window_pane_cp7

0x5f83,	// (0x00024822) popup_note_wait_window_g1_ParamLimits

0x5f83,	// (0x00024822) popup_note_wait_window_g1

0x5f8f,	// (0x0002482e) popup_note_wait_window_g2_ParamLimits

0x5f8f,	// (0x0002482e) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x0002e120) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x0002e120) popup_note_wait_window_g

0x5fa7,	// (0x00024846) popup_note_wait_window_t1_ParamLimits

0x5fa7,	// (0x00024846) popup_note_wait_window_t1

0x5fce,	// (0x0002486d) popup_note_wait_window_t2_ParamLimits

0x5fce,	// (0x0002486d) popup_note_wait_window_t2

0x5feb,	// (0x0002488a) popup_note_wait_window_t3_ParamLimits

0x5feb,	// (0x0002488a) popup_note_wait_window_t3

0x5ffe,	// (0x0002489d) popup_note_wait_window_t4_ParamLimits

0x5ffe,	// (0x0002489d) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x0002e127) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x0002e127) popup_note_wait_window_t

0x6023,	// (0x000248c2) wait_bar_pane_ParamLimits

0x6023,	// (0x000248c2) wait_bar_pane

0x43e2,	// (0x00022c81) wait_anim_pane

0x43e2,	// (0x00022c81) wait_border_pane

0x43d8,	// (0x00022c77) wait_anim_pane_g1

0x43d8,	// (0x00022c77) wait_anim_pane_g2

0x0001,

0xf747,	// (0x0002dfe6) wait_anim_pane_g

0x5ef7,	// (0x00024796) wait_border_pane_g1

0x5f02,	// (0x000247a1) wait_border_pane_g2

0x5f0b,	// (0x000247aa) wait_border_pane_g3

0x0002,

0xf87a,	// (0x0002e119) wait_border_pane_g

0x5e54,	// (0x000246f3) bg_popup_window_pane_cp16_ParamLimits

0x5e54,	// (0x000246f3) bg_popup_window_pane_cp16

0x5e62,	// (0x00024701) indicator_popup_pane_cp4_ParamLimits

0x5e62,	// (0x00024701) indicator_popup_pane_cp4

0x5e76,	// (0x00024715) popup_query_data_window_t1_ParamLimits

0x5e76,	// (0x00024715) popup_query_data_window_t1

0x5e88,	// (0x00024727) popup_query_data_window_t2_ParamLimits

0x5e88,	// (0x00024727) popup_query_data_window_t2

0x5ea1,	// (0x00024740) popup_query_data_window_t3_ParamLimits

0x5ea1,	// (0x00024740) popup_query_data_window_t3

0x0002,

0xf873,	// (0x0002e112) popup_query_data_window_t_ParamLimits

0xf873,	// (0x0002e112) popup_query_data_window_t

0x5ebb,	// (0x0002475a) query_popup_data_pane_ParamLimits

0x5ebb,	// (0x0002475a) query_popup_data_pane

0x5ecf,	// (0x0002476e) query_popup_data_pane_cp1_ParamLimits

0x5ecf,	// (0x0002476e) query_popup_data_pane_cp1

0x4619,	// (0x00022eb8) bg_popup_window_pane_cp10_ParamLimits

0x4619,	// (0x00022eb8) bg_popup_window_pane_cp10

0x5db7,	// (0x00024656) indicator_popup_pane_ParamLimits

0x5db7,	// (0x00024656) indicator_popup_pane

0x4670,	// (0x00022f0f) popup_query_code_window_t1_ParamLimits

0x4670,	// (0x00022f0f) popup_query_code_window_t1

0x5dcf,	// (0x0002466e) popup_query_code_window_t2_ParamLimits

0x5dcf,	// (0x0002466e) popup_query_code_window_t2

0x5e0d,	// (0x000246ac) popup_query_code_window_t3_ParamLimits

0x5e0d,	// (0x000246ac) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x0002e10b) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x0002e10b) popup_query_code_window_t

0x5e3c,	// (0x000246db) query_popup_pane_ParamLimits

0x5e3c,	// (0x000246db) query_popup_pane

0x4619,	// (0x00022eb8) bg_popup_window_pane_cp15_ParamLimits

0x4619,	// (0x00022eb8) bg_popup_window_pane_cp15

0x4637,	// (0x00022ed6) indicator_popup_pane_cp1_ParamLimits

0x4637,	// (0x00022ed6) indicator_popup_pane_cp1

0x464a,	// (0x00022ee9) indicator_popup_pane_cp2_ParamLimits

0x464a,	// (0x00022ee9) indicator_popup_pane_cp2

0x465d,	// (0x00022efc) popup_query_data_code_window_g1_ParamLimits

0x465d,	// (0x00022efc) popup_query_data_code_window_g1

0x4670,	// (0x00022f0f) popup_query_data_code_window_t1_ParamLimits

0x4670,	// (0x00022f0f) popup_query_data_code_window_t1

0x4682,	// (0x00022f21) popup_query_data_code_window_t2_ParamLimits

0x4682,	// (0x00022f21) popup_query_data_code_window_t2

0x4694,	// (0x00022f33) popup_query_data_code_window_t3_ParamLimits

0x4694,	// (0x00022f33) popup_query_data_code_window_t3

0x46aa,	// (0x00022f49) popup_query_data_code_window_t4_ParamLimits

0x46aa,	// (0x00022f49) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0002de6d) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0002de6d) popup_query_data_code_window_t

0xa729,	// (0x00028fc8) list_single_midp_graphic_pane_g3

0x46c2,	// (0x00022f61) query_popup_data_pane_cp2_ParamLimits

0x46d5,	// (0x00022f74) query_popup_pane_cp2_ParamLimits

0x46d5,	// (0x00022f74) query_popup_pane_cp2

0x43e2,	// (0x00022c81) bg_popup_window_pane_cp11

0x5d8b,	// (0x0002462a) heading_pane_cp5

0x4763,	// (0x00023002) listscroll_popup_info_pane

0x43e2,	// (0x00022c81) input_focus_pane_cp3

0x46e8,	// (0x00022f87) query_popup_pane_t1

0x46f6,	// (0x00022f95) list_popup_info_pane_ParamLimits

0x46f6,	// (0x00022f95) list_popup_info_pane

0x4705,	// (0x00022fa4) listscroll_popup_info_pane_g1

0x470d,	// (0x00022fac) scroll_pane_cp7

0x4717,	// (0x00022fb6) popup_info_list_pane_t1_ParamLimits

0x4717,	// (0x00022fb6) popup_info_list_pane_t1

0x4731,	// (0x00022fd0) popup_info_list_pane_t2_ParamLimits

0x4731,	// (0x00022fd0) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0002de76) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0002de76) popup_info_list_pane_t

0x43e2,	// (0x00022c81) bg_popup_window_pane_cp12

0x6cca,	// (0x00025569) find_popup_pane

0x443e,	// (0x00022cdd) bg_popup_window_pane_cp3

0x474b,	// (0x00022fea) heading_pane_cp3

0x4757,	// (0x00022ff6) listscroll_popup_graphic_pane

0x43e2,	// (0x00022c81) bg_popup_window_pane_cp4

0x9581,	// (0x00027e20) heading_pane_cp4

0x4763,	// (0x00023002) listscroll_popup_colour_pane

0x958b,	// (0x00027e2a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x958b,	// (0x00027e2a) cell_large_graphic_colour_none_popup_pane

0x959f,	// (0x00027e3e) grid_large_graphic_colour_popup_pane_ParamLimits

0x959f,	// (0x00027e3e) grid_large_graphic_colour_popup_pane

0x95cb,	// (0x00027e6a) listscroll_popup_colour_pane_g1_ParamLimits

0x95cb,	// (0x00027e6a) listscroll_popup_colour_pane_g1

0x95e2,	// (0x00027e81) listscroll_popup_colour_pane_g2_ParamLimits

0x95e2,	// (0x00027e81) listscroll_popup_colour_pane_g2

0x95f9,	// (0x00027e98) listscroll_popup_colour_pane_g3_ParamLimits

0x95f9,	// (0x00027e98) listscroll_popup_colour_pane_g3

0x9609,	// (0x00027ea8) listscroll_popup_colour_pane_g4_ParamLimits

0x9609,	// (0x00027ea8) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0002de7b) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0002de7b) listscroll_popup_colour_pane_g

0x476b,	// (0x0002300a) scroll_pane_cp6_ParamLimits

0x476b,	// (0x0002300a) scroll_pane_cp6

0x961d,	// (0x00027ebc) cell_large_graphic_colour_popup_pane_ParamLimits

0x961d,	// (0x00027ebc) cell_large_graphic_colour_popup_pane

0x477d,	// (0x0002301c) cell_large_graphic_colour_none_popup_pane_t1

0x43e2,	// (0x00022c81) grid_highlight_pane_cp5

0x478c,	// (0x0002302b) cell_large_graphic_colour_popup_pane_g1

0x4794,	// (0x00023033) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0002de84) cell_large_graphic_colour_popup_pane_g

0x479c,	// (0x0002303b) cell_large_graphic_colour_popup_pane_g2_copy1

0x47a5,	// (0x00023044) grid_highlight_pane_cp4

0x47ad,	// (0x0002304c) bg_popup_window_pane_cp8_ParamLimits

0x47ad,	// (0x0002304c) bg_popup_window_pane_cp8

0x47c8,	// (0x00023067) popup_snote_single_text_window_g1_ParamLimits

0x47c8,	// (0x00023067) popup_snote_single_text_window_g1

0x47da,	// (0x00023079) popup_snote_single_text_window_t1_ParamLimits

0x47da,	// (0x00023079) popup_snote_single_text_window_t1

0x47ed,	// (0x0002308c) popup_snote_single_text_window_t2_ParamLimits

0x47ed,	// (0x0002308c) popup_snote_single_text_window_t2

0x4800,	// (0x0002309f) popup_snote_single_text_window_t3_ParamLimits

0x4800,	// (0x0002309f) popup_snote_single_text_window_t3

0x4839,	// (0x000230d8) popup_snote_single_text_window_t4_ParamLimits

0x4839,	// (0x000230d8) popup_snote_single_text_window_t4

0x486d,	// (0x0002310c) popup_snote_single_text_window_t5_ParamLimits

0x486d,	// (0x0002310c) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0002de89) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0002de89) popup_snote_single_text_window_t

0x489c,	// (0x0002313b) bg_popup_window_pane_cp9_ParamLimits

0x489c,	// (0x0002313b) bg_popup_window_pane_cp9

0x47c8,	// (0x00023067) popup_snote_single_graphic_window_g1_ParamLimits

0x47c8,	// (0x00023067) popup_snote_single_graphic_window_g1

0x48aa,	// (0x00023149) popup_snote_single_graphic_window_g2_ParamLimits

0x48aa,	// (0x00023149) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0002de94) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0002de94) popup_snote_single_graphic_window_g

0x48b6,	// (0x00023155) popup_snote_single_graphic_window_t1_ParamLimits

0x48b6,	// (0x00023155) popup_snote_single_graphic_window_t1

0x48c9,	// (0x00023168) popup_snote_single_graphic_window_t2_ParamLimits

0x48c9,	// (0x00023168) popup_snote_single_graphic_window_t2

0x48dc,	// (0x0002317b) popup_snote_single_graphic_window_t3_ParamLimits

0x48dc,	// (0x0002317b) popup_snote_single_graphic_window_t3

0x4915,	// (0x000231b4) popup_snote_single_graphic_window_t4_ParamLimits

0x4915,	// (0x000231b4) popup_snote_single_graphic_window_t4

0x4949,	// (0x000231e8) popup_snote_single_graphic_window_t5_ParamLimits

0x4949,	// (0x000231e8) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0002de99) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0002de99) popup_snote_single_graphic_window_t

0x6c52,	// (0x000254f1) grid_graphic_popup_pane_ParamLimits

0x6c52,	// (0x000254f1) grid_graphic_popup_pane

0x6c7a,	// (0x00025519) listscroll_popup_graphic_pane_g1_ParamLimits

0x6c7a,	// (0x00025519) listscroll_popup_graphic_pane_g1

0xaf1f,	// (0x000297be) listscroll_popup_graphic_pane_g2_ParamLimits

0xaf1f,	// (0x000297be) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0002e288) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0002e288) listscroll_popup_graphic_pane_g

0x678e,	// (0x0002502d) scroll_pane_cp5

0xaede,	// (0x0002977d) cell_graphic_popup_pane_ParamLimits

0xaede,	// (0x0002977d) cell_graphic_popup_pane

0x6c1d,	// (0x000254bc) cell_graphic_popup_pane_g1

0x6c25,	// (0x000254c4) cell_graphic_popup_pane_g2

0x479c,	// (0x0002303b) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0002e281) cell_graphic_popup_pane_g

0x6c2e,	// (0x000254cd) cell_graphic_popup_pane_t2

0x47a5,	// (0x00023044) grid_highlight_pane_cp3

0x498a,	// (0x00023229) list_gen_pane_ParamLimits

0x498a,	// (0x00023229) list_gen_pane

0x49b2,	// (0x00023251) scroll_pane

0xae91,	// (0x00029730) bg_list_pane_g1_ParamLimits

0xae91,	// (0x00029730) bg_list_pane_g1

0x6bcc,	// (0x0002546b) bg_list_pane_g2_ParamLimits

0x6bcc,	// (0x0002546b) bg_list_pane_g2

0x6bdf,	// (0x0002547e) bg_list_pane_g3_ParamLimits

0x6bdf,	// (0x0002547e) bg_list_pane_g3

0x6bf1,	// (0x00025490) bg_list_pane_g4_ParamLimits

0x6bf1,	// (0x00025490) bg_list_pane_g4

0xaeac,	// (0x0002974b) bg_list_pane_g5_ParamLimits

0xaeac,	// (0x0002974b) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0002e276) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0002e276) bg_list_pane_g

0xae5a,	// (0x000296f9) list_double2_graphic_large_graphic_pane_ParamLimits

0xae5a,	// (0x000296f9) list_double2_graphic_large_graphic_pane

0xae5a,	// (0x000296f9) list_double2_graphic_pane_ParamLimits

0xae5a,	// (0x000296f9) list_double2_graphic_pane

0xae5a,	// (0x000296f9) list_double2_large_graphic_pane_ParamLimits

0xae5a,	// (0x000296f9) list_double2_large_graphic_pane

0xd5c8,	// (0x0002be67) list_double2_pane_ParamLimits

0xd5c8,	// (0x0002be67) list_double2_pane

0xae5a,	// (0x000296f9) list_double_graphic_heading_pane_ParamLimits

0xae5a,	// (0x000296f9) list_double_graphic_heading_pane

0xae5a,	// (0x000296f9) list_double_graphic_pane_ParamLimits

0xae5a,	// (0x000296f9) list_double_graphic_pane

0xae5a,	// (0x000296f9) list_double_heading_pane_ParamLimits

0xae5a,	// (0x000296f9) list_double_heading_pane

0xae5a,	// (0x000296f9) list_double_large_graphic_pane_ParamLimits

0xae5a,	// (0x000296f9) list_double_large_graphic_pane

0xae5a,	// (0x000296f9) list_double_number_pane_ParamLimits

0xae5a,	// (0x000296f9) list_double_number_pane

0xae5a,	// (0x000296f9) list_double_pane_ParamLimits

0xae5a,	// (0x000296f9) list_double_pane

0xae5a,	// (0x000296f9) list_double_time_pane_ParamLimits

0xae5a,	// (0x000296f9) list_double_time_pane

0xae5a,	// (0x000296f9) list_setting_number_pane_ParamLimits

0xae5a,	// (0x000296f9) list_setting_number_pane

0xae5a,	// (0x000296f9) list_setting_pane_ParamLimits

0xae5a,	// (0x000296f9) list_setting_pane

0xd603,	// (0x0002bea2) list_single_2graphic_pane_ParamLimits

0xd603,	// (0x0002bea2) list_single_2graphic_pane

0xd603,	// (0x0002bea2) list_single_graphic_heading_pane_ParamLimits

0xd603,	// (0x0002bea2) list_single_graphic_heading_pane

0xd603,	// (0x0002bea2) list_single_graphic_pane_ParamLimits

0xd603,	// (0x0002bea2) list_single_graphic_pane

0xd603,	// (0x0002bea2) list_single_heading_pane_ParamLimits

0xd603,	// (0x0002bea2) list_single_heading_pane

0xd65e,	// (0x0002befd) list_single_large_graphic_pane_ParamLimits

0xd65e,	// (0x0002befd) list_single_large_graphic_pane

0xd603,	// (0x0002bea2) list_single_number_heading_pane_ParamLimits

0xd603,	// (0x0002bea2) list_single_number_heading_pane

0xd603,	// (0x0002bea2) list_single_number_pane_ParamLimits

0xd603,	// (0x0002bea2) list_single_number_pane

0xd603,	// (0x0002bea2) list_single_pane_ParamLimits

0xd603,	// (0x0002bea2) list_single_pane

0x43e2,	// (0x00022c81) list_highlight_pane_cp1

0xcccf,	// (0x0002b56e) list_single_pane_g1_ParamLimits

0xcccf,	// (0x0002b56e) list_single_pane_g1

0xccdb,	// (0x0002b57a) list_single_pane_g2_ParamLimits

0xccdb,	// (0x0002b57a) list_single_pane_g2

0x0001,

0xf60c,	// (0x0002deab) list_single_pane_g_ParamLimits

0xf60c,	// (0x0002deab) list_single_pane_g

0xd5b2,	// (0x0002be51) list_single_pane_t1_ParamLimits

0xd5b2,	// (0x0002be51) list_single_pane_t1

0xcccf,	// (0x0002b56e) list_single_number_pane_g1_ParamLimits

0xcccf,	// (0x0002b56e) list_single_number_pane_g1

0xccdb,	// (0x0002b57a) list_single_number_pane_g2_ParamLimits

0xccdb,	// (0x0002b57a) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0002deab) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0002deab) list_single_number_pane_g

0xd55c,	// (0x0002bdfb) list_single_number_pane_t1_ParamLimits

0xd55c,	// (0x0002bdfb) list_single_number_pane_t1

0xd572,	// (0x0002be11) list_single_number_pane_t2_ParamLimits

0xd572,	// (0x0002be11) list_single_number_pane_t2

0x0001,

0xf998,	// (0x0002e237) list_single_number_pane_t_ParamLimits

0xf998,	// (0x0002e237) list_single_number_pane_t

0xccc3,	// (0x0002b562) list_single_graphic_pane_g1_ParamLimits

0xccc3,	// (0x0002b562) list_single_graphic_pane_g1

0xcccf,	// (0x0002b56e) list_single_graphic_pane_g2_ParamLimits

0xcccf,	// (0x0002b56e) list_single_graphic_pane_g2

0xccdb,	// (0x0002b57a) list_single_graphic_pane_g3_ParamLimits

0xccdb,	// (0x0002b57a) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0002dea4) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0002dea4) list_single_graphic_pane_g

0xcce7,	// (0x0002b586) list_single_graphic_pane_t1_ParamLimits

0xcce7,	// (0x0002b586) list_single_graphic_pane_t1

0xcccf,	// (0x0002b56e) list_single_heading_pane_g1_ParamLimits

0xcccf,	// (0x0002b56e) list_single_heading_pane_g1

0xccdb,	// (0x0002b57a) list_single_heading_pane_g2_ParamLimits

0xccdb,	// (0x0002b57a) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0002deab) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0002deab) list_single_heading_pane_g

0xccfd,	// (0x0002b59c) list_single_heading_pane_t1_ParamLimits

0xccfd,	// (0x0002b59c) list_single_heading_pane_t1

0xcd13,	// (0x0002b5b2) list_single_heading_pane_t2_ParamLimits

0xcd13,	// (0x0002b5b2) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0002deb0) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0002deb0) list_single_heading_pane_t

0xcccf,	// (0x0002b56e) list_single_number_heading_pane_g1_ParamLimits

0xcccf,	// (0x0002b56e) list_single_number_heading_pane_g1

0xccdb,	// (0x0002b57a) list_single_number_heading_pane_g2_ParamLimits

0xccdb,	// (0x0002b57a) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0002deab) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0002deab) list_single_number_heading_pane_g

0xccfd,	// (0x0002b59c) list_single_number_heading_pane_t1_ParamLimits

0xccfd,	// (0x0002b59c) list_single_number_heading_pane_t1

0xcd25,	// (0x0002b5c4) list_single_number_heading_pane_t2_ParamLimits

0xcd25,	// (0x0002b5c4) list_single_number_heading_pane_t2

0xcd37,	// (0x0002b5d6) list_single_number_heading_pane_t3_ParamLimits

0xcd37,	// (0x0002b5d6) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0002deb5) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0002deb5) list_single_number_heading_pane_t

0xcd49,	// (0x0002b5e8) list_single_graphic_heading_pane_g1_ParamLimits

0xcd49,	// (0x0002b5e8) list_single_graphic_heading_pane_g1

0xcd55,	// (0x0002b5f4) list_single_graphic_heading_pane_g4_ParamLimits

0xcd55,	// (0x0002b5f4) list_single_graphic_heading_pane_g4

0xccdb,	// (0x0002b57a) list_single_graphic_heading_pane_g5_ParamLimits

0xccdb,	// (0x0002b57a) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0002debc) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0002debc) list_single_graphic_heading_pane_g

0xccfd,	// (0x0002b59c) list_single_graphic_heading_pane_t1_ParamLimits

0xccfd,	// (0x0002b59c) list_single_graphic_heading_pane_t1

0xcd66,	// (0x0002b605) list_single_graphic_heading_pane_t2_ParamLimits

0xcd66,	// (0x0002b605) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0002dec3) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0002dec3) list_single_graphic_heading_pane_t

0xcd78,	// (0x0002b617) list_single_large_graphic_pane_g1_ParamLimits

0xcd78,	// (0x0002b617) list_single_large_graphic_pane_g1

0xcd84,	// (0x0002b623) list_single_large_graphic_pane_g2_ParamLimits

0xcd84,	// (0x0002b623) list_single_large_graphic_pane_g2

0xcd90,	// (0x0002b62f) list_single_large_graphic_pane_g3_ParamLimits

0xcd90,	// (0x0002b62f) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0002dec8) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0002dec8) list_single_large_graphic_pane_g

0x5f02,	// (0x000247a1) wait_border_pane_g2_copy1

0xcd9c,	// (0x0002b63b) list_single_large_graphic_pane_g4_cp2

0xcda4,	// (0x0002b643) list_single_large_graphic_pane_t1_ParamLimits

0xcda4,	// (0x0002b643) list_single_large_graphic_pane_t1

0xcdba,	// (0x0002b659) list_double_pane_g1_ParamLimits

0xcdba,	// (0x0002b659) list_double_pane_g1

0xcdc6,	// (0x0002b665) list_double_pane_g2_ParamLimits

0xcdc6,	// (0x0002b665) list_double_pane_g2

0x0001,

0xf630,	// (0x0002decf) list_double_pane_g_ParamLimits

0xf630,	// (0x0002decf) list_double_pane_g

0xcdd2,	// (0x0002b671) list_double_pane_t1_ParamLimits

0xcdd2,	// (0x0002b671) list_double_pane_t1

0xcde8,	// (0x0002b687) list_double_pane_t2_ParamLimits

0xcde8,	// (0x0002b687) list_double_pane_t2

0x0001,

0xf635,	// (0x0002ded4) list_double_pane_t_ParamLimits

0xf635,	// (0x0002ded4) list_double_pane_t

0xcdfa,	// (0x0002b699) list_double2_pane_g1_ParamLimits

0xcdfa,	// (0x0002b699) list_double2_pane_g1

0xce0b,	// (0x0002b6aa) list_double2_pane_g2_ParamLimits

0xce0b,	// (0x0002b6aa) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0002ded9) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0002ded9) list_double2_pane_g

0xce17,	// (0x0002b6b6) list_double2_pane_t1_ParamLimits

0xce17,	// (0x0002b6b6) list_double2_pane_t1

0xce2d,	// (0x0002b6cc) list_double2_pane_t2_ParamLimits

0xce2d,	// (0x0002b6cc) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0002dede) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0002dede) list_double2_pane_t

0xcdba,	// (0x0002b659) list_double_number_pane_g1_ParamLimits

0xcdba,	// (0x0002b659) list_double_number_pane_g1

0xcdc6,	// (0x0002b665) list_double_number_pane_g2_ParamLimits

0xcdc6,	// (0x0002b665) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0002decf) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0002decf) list_double_number_pane_g

0xce3f,	// (0x0002b6de) list_double_number_pane_t1_ParamLimits

0xce3f,	// (0x0002b6de) list_double_number_pane_t1

0xce51,	// (0x0002b6f0) list_double_number_pane_t2_ParamLimits

0xce51,	// (0x0002b6f0) list_double_number_pane_t2

0xce67,	// (0x0002b706) list_double_number_pane_t3_ParamLimits

0xce67,	// (0x0002b706) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0002dee3) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0002dee3) list_double_number_pane_t

0xce79,	// (0x0002b718) list_double_graphic_pane_g1_ParamLimits

0xce79,	// (0x0002b718) list_double_graphic_pane_g1

0xce85,	// (0x0002b724) list_double_graphic_pane_g2_ParamLimits

0xce85,	// (0x0002b724) list_double_graphic_pane_g2

0xce94,	// (0x0002b733) list_double_graphic_pane_g3_ParamLimits

0xce94,	// (0x0002b733) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0002deea) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0002deea) list_double_graphic_pane_g

0xceac,	// (0x0002b74b) list_double_graphic_pane_t1_ParamLimits

0xceac,	// (0x0002b74b) list_double_graphic_pane_t1

0xcec2,	// (0x0002b761) list_double_graphic_pane_t2_ParamLimits

0xcec2,	// (0x0002b761) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0002def3) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0002def3) list_double_graphic_pane_t

0xced4,	// (0x0002b773) list_double2_graphic_pane_g1_ParamLimits

0xced4,	// (0x0002b773) list_double2_graphic_pane_g1

0xcee0,	// (0x0002b77f) list_double2_graphic_pane_g2_ParamLimits

0xcee0,	// (0x0002b77f) list_double2_graphic_pane_g2

0xceec,	// (0x0002b78b) list_double2_graphic_pane_g3_ParamLimits

0xceec,	// (0x0002b78b) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0002def8) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0002def8) list_double2_graphic_pane_g

0xcef8,	// (0x0002b797) list_double2_graphic_pane_t1_ParamLimits

0xcef8,	// (0x0002b797) list_double2_graphic_pane_t1

0xcf0e,	// (0x0002b7ad) list_double2_graphic_pane_t2_ParamLimits

0xcf0e,	// (0x0002b7ad) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0002deff) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0002deff) list_double2_graphic_pane_t

0xcf20,	// (0x0002b7bf) list_double_large_graphic_pane_g1_ParamLimits

0xcf20,	// (0x0002b7bf) list_double_large_graphic_pane_g1

0xcf49,	// (0x0002b7e8) list_double_large_graphic_pane_g2_ParamLimits

0xcf49,	// (0x0002b7e8) list_double_large_graphic_pane_g2

0xcdc6,	// (0x0002b665) list_double_large_graphic_pane_g3_ParamLimits

0xcdc6,	// (0x0002b665) list_double_large_graphic_pane_g3

0xcf5a,	// (0x0002b7f9) list_double_large_graphic_pane_g4_ParamLimits

0xcf5a,	// (0x0002b7f9) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0002df04) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0002df04) list_double_large_graphic_pane_g

0xcf7f,	// (0x0002b81e) list_double_large_graphic_pane_t1_ParamLimits

0xcf7f,	// (0x0002b81e) list_double_large_graphic_pane_t1

0xcf98,	// (0x0002b837) list_double_large_graphic_pane_t2_ParamLimits

0xcf98,	// (0x0002b837) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0002df0f) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0002df0f) list_double_large_graphic_pane_t

0xcfaa,	// (0x0002b849) list_double2_large_graphic_pane_g1_ParamLimits

0xcfaa,	// (0x0002b849) list_double2_large_graphic_pane_g1

0xcfb6,	// (0x0002b855) list_double2_large_graphic_pane_g2_ParamLimits

0xcfb6,	// (0x0002b855) list_double2_large_graphic_pane_g2

0xceec,	// (0x0002b78b) list_double2_large_graphic_pane_g3_ParamLimits

0xceec,	// (0x0002b78b) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0002df14) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0002df14) list_double2_large_graphic_pane_g

0xcfc7,	// (0x0002b866) list_double2_large_graphic_pane_t1_ParamLimits

0xcfc7,	// (0x0002b866) list_double2_large_graphic_pane_t1

0xcfdd,	// (0x0002b87c) list_double2_large_graphic_pane_t2_ParamLimits

0xcfdd,	// (0x0002b87c) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0002df1b) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0002df1b) list_double2_large_graphic_pane_t

0xcfef,	// (0x0002b88e) list_double_heading_pane_g1_ParamLimits

0xcfef,	// (0x0002b88e) list_double_heading_pane_g1

0xd000,	// (0x0002b89f) list_double_heading_pane_g2_ParamLimits

0xd000,	// (0x0002b89f) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0002df20) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0002df20) list_double_heading_pane_g

0xd00c,	// (0x0002b8ab) list_double_heading_pane_t1_ParamLimits

0xd00c,	// (0x0002b8ab) list_double_heading_pane_t1

0xd022,	// (0x0002b8c1) list_double_heading_pane_t2_ParamLimits

0xd022,	// (0x0002b8c1) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0002df25) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0002df25) list_double_heading_pane_t

0xced4,	// (0x0002b773) list_double_graphic_heading_pane_g1_ParamLimits

0xced4,	// (0x0002b773) list_double_graphic_heading_pane_g1

0xcfef,	// (0x0002b88e) list_double_graphic_heading_pane_g2_ParamLimits

0xcfef,	// (0x0002b88e) list_double_graphic_heading_pane_g2

0xd000,	// (0x0002b89f) list_double_graphic_heading_pane_g3_ParamLimits

0xd000,	// (0x0002b89f) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0002df2a) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0002df2a) list_double_graphic_heading_pane_g

0xd034,	// (0x0002b8d3) list_double_graphic_heading_pane_t1_ParamLimits

0xd034,	// (0x0002b8d3) list_double_graphic_heading_pane_t1

0xcf0e,	// (0x0002b7ad) list_double_graphic_heading_pane_t2_ParamLimits

0xcf0e,	// (0x0002b7ad) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0002df31) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0002df31) list_double_graphic_heading_pane_t

0xcf49,	// (0x0002b7e8) list_double_time_pane_g1_ParamLimits

0xcf49,	// (0x0002b7e8) list_double_time_pane_g1

0xcdc6,	// (0x0002b665) list_double_time_pane_g2_ParamLimits

0xcdc6,	// (0x0002b665) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0002df36) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0002df36) list_double_time_pane_g

0xd04a,	// (0x0002b8e9) list_double_time_pane_t1_ParamLimits

0xd04a,	// (0x0002b8e9) list_double_time_pane_t1

0xd060,	// (0x0002b8ff) list_double_time_pane_t2_ParamLimits

0xd060,	// (0x0002b8ff) list_double_time_pane_t2

0xd072,	// (0x0002b911) list_double_time_pane_t3_ParamLimits

0xd072,	// (0x0002b911) list_double_time_pane_t3

0xd084,	// (0x0002b923) list_double_time_pane_t4_ParamLimits

0xd084,	// (0x0002b923) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0002df3b) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0002df3b) list_double_time_pane_t

0xcee0,	// (0x0002b77f) list_setting_pane_g1_ParamLimits

0xcee0,	// (0x0002b77f) list_setting_pane_g1

0xceec,	// (0x0002b78b) list_setting_pane_g2_ParamLimits

0xceec,	// (0x0002b78b) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0002df44) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0002df44) list_setting_pane_g

0xd096,	// (0x0002b935) list_setting_pane_t1_ParamLimits

0xd096,	// (0x0002b935) list_setting_pane_t1

0xd0b0,	// (0x0002b94f) list_setting_pane_t2_ParamLimits

0xd0b0,	// (0x0002b94f) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0002df49) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0002df49) list_setting_pane_t

0xd0ef,	// (0x0002b98e) set_value_pane_cp_ParamLimits

0xd0ef,	// (0x0002b98e) set_value_pane_cp

0xd0fb,	// (0x0002b99a) list_setting_number_pane_g1_ParamLimits

0xd0fb,	// (0x0002b99a) list_setting_number_pane_g1

0xd107,	// (0x0002b9a6) list_setting_number_pane_g2_ParamLimits

0xd107,	// (0x0002b9a6) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x0002df50) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x0002df50) list_setting_number_pane_g

0xd113,	// (0x0002b9b2) list_setting_number_pane_t1_ParamLimits

0xd113,	// (0x0002b9b2) list_setting_number_pane_t1

0xd12c,	// (0x0002b9cb) list_setting_number_pane_t2_ParamLimits

0xd12c,	// (0x0002b9cb) list_setting_number_pane_t2

0xd146,	// (0x0002b9e5) list_setting_number_pane_t3_ParamLimits

0xd146,	// (0x0002b9e5) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x0002df55) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x0002df55) list_setting_number_pane_t

0xd0ef,	// (0x0002b98e) set_value_pane_ParamLimits

0xd0ef,	// (0x0002b98e) set_value_pane

0x49e6,	// (0x00023285) bg_set_opt_pane_ParamLimits

0x49e6,	// (0x00023285) bg_set_opt_pane

0xd189,	// (0x0002ba28) set_value_pane_t1

0x4a07,	// (0x000232a6) slider_set_pane_cp3

0x4a10,	// (0x000232af) volume_small_pane_cp

0x4a19,	// (0x000232b8) list_form_gen_pane

0x4a22,	// (0x000232c1) scroll_pane_cp8

0xd19f,	// (0x0002ba3e) form_field_data_pane_ParamLimits

0xd19f,	// (0x0002ba3e) form_field_data_pane

0xd1bf,	// (0x0002ba5e) form_field_data_wide_pane_ParamLimits

0xd1bf,	// (0x0002ba5e) form_field_data_wide_pane

0xd1e0,	// (0x0002ba7f) form_field_popup_pane_ParamLimits

0xd1e0,	// (0x0002ba7f) form_field_popup_pane

0xd200,	// (0x0002ba9f) form_field_popup_wide_pane_ParamLimits

0xd200,	// (0x0002ba9f) form_field_popup_wide_pane

0xd21d,	// (0x0002babc) form_field_slider_pane_ParamLimits

0xd21d,	// (0x0002babc) form_field_slider_pane

0xd230,	// (0x0002bacf) form_field_slider_wide_pane_ParamLimits

0xd230,	// (0x0002bacf) form_field_slider_wide_pane

0x4a33,	// (0x000232d2) data_form_pane

0xd24d,	// (0x0002baec) form_field_data_pane_t1

0x4a3f,	// (0x000232de) input_focus_pane

0x4a4d,	// (0x000232ec) data_form_wide_pane

0xd271,	// (0x0002bb10) form_field_data_wide_pane_t1

0x47ba,	// (0x00023059) input_focus_pane_cp6

0xd293,	// (0x0002bb32) form_field_popup_pane_t1

0x4a3f,	// (0x000232de) input_focus_pane_cp7

0x4a79,	// (0x00023318) list_form_pane

0xd2b3,	// (0x0002bb52) form_field_popup_wide_pane_t1

0x4a3f,	// (0x000232de) input_focus_pane_cp8

0x4a85,	// (0x00023324) list_form_wide_pane

0xd2d0,	// (0x0002bb6f) form_field_slider_pane_t1_ParamLimits

0xd2d0,	// (0x0002bb6f) form_field_slider_pane_t1

0xd2e6,	// (0x0002bb85) form_field_slider_pane_t2_ParamLimits

0xd2e6,	// (0x0002bb85) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x0002df65) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x0002df65) form_field_slider_pane_t

0x4430,	// (0x00022ccf) input_focus_pane_cp9_ParamLimits

0x4430,	// (0x00022ccf) input_focus_pane_cp9

0xd2fb,	// (0x0002bb9a) slider_cont_pane_ParamLimits

0xd2fb,	// (0x0002bb9a) slider_cont_pane

0x4a94,	// (0x00023333) form_field_slider_wide_pane_t1_ParamLimits

0x4a94,	// (0x00023333) form_field_slider_wide_pane_t1

0xd30f,	// (0x0002bbae) form_field_slider_wide_pane_t2_ParamLimits

0xd30f,	// (0x0002bbae) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x0002df6a) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x0002df6a) form_field_slider_wide_pane_t

0x4430,	// (0x00022ccf) input_focus_pane_cp10_ParamLimits

0x4430,	// (0x00022ccf) input_focus_pane_cp10

0xd321,	// (0x0002bbc0) slider_cont_pane_cp1_ParamLimits

0xd321,	// (0x0002bbc0) slider_cont_pane_cp1

0xd335,	// (0x0002bbd4) slider_form_pane_cp

0x4aa6,	// (0x00023345) input_focus_pane_g1

0x4aae,	// (0x0002334d) input_focus_pane_g2

0x4ab6,	// (0x00023355) input_focus_pane_g3

0x4abe,	// (0x0002335d) input_focus_pane_g4

0x4ac6,	// (0x00023365) input_focus_pane_g5

0x4ace,	// (0x0002336d) input_focus_pane_g6

0x4ad6,	// (0x00023375) input_focus_pane_g7

0x4ade,	// (0x0002337d) input_focus_pane_g8

0x4ae6,	// (0x00023385) input_focus_pane_g9

0x43d8,	// (0x00022c77) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x0002df6f) input_focus_pane_g

0x5f0b,	// (0x000247aa) wait_border_pane_g3_copy1

0xd33d,	// (0x0002bbdc) data_form_pane_t1

0x43d8,	// (0x00022c77) wait_anim_pane_g1_copy1

0xd584,	// (0x0002be23) data_form_wide_pane_t1

0xd358,	// (0x0002bbf7) list_form_graphic_pane_cp_ParamLimits

0xd358,	// (0x0002bbf7) list_form_graphic_pane_cp

0x6b76,	// (0x00025415) slider_form_pane_g1

0x6b7f,	// (0x0002541e) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x0002e267) slider_form_pane_g

0xd371,	// (0x0002bc10) list_form_graphic_pane_ParamLimits

0xd371,	// (0x0002bc10) list_form_graphic_pane

0xd38d,	// (0x0002bc2c) list_form_graphic_pane_g1

0xd395,	// (0x0002bc34) list_form_graphic_pane_t1_ParamLimits

0xd395,	// (0x0002bc34) list_form_graphic_pane_t1

0x443e,	// (0x00022cdd) list_highlight_pane_cp5_ParamLimits

0x443e,	// (0x00022cdd) list_highlight_pane_cp5

0xd3aa,	// (0x0002bc49) find_pane_g1

0x4aee,	// (0x0002338d) input_find_pane

0xd3b3,	// (0x0002bc52) input_find_pane_g1_ParamLimits

0xd3b3,	// (0x0002bc52) input_find_pane_g1

0xd3bf,	// (0x0002bc5e) input_find_pane_t1_ParamLimits

0xd3bf,	// (0x0002bc5e) input_find_pane_t1

0xd3d4,	// (0x0002bc73) input_find_pane_t2_ParamLimits

0xd3d4,	// (0x0002bc73) input_find_pane_t2

0x0001,

0xf6e5,	// (0x0002df84) input_find_pane_t_ParamLimits

0xf6e5,	// (0x0002df84) input_find_pane_t

0x4af7,	// (0x00023396) input_focus_pane_cp5_ParamLimits

0x4af7,	// (0x00023396) input_focus_pane_cp5

0x9652,	// (0x00027ef1) bg_popup_window_pane_cp2_ParamLimits

0x9652,	// (0x00027ef1) bg_popup_window_pane_cp2

0x965f,	// (0x00027efe) listscroll_menu_pane_ParamLimits

0x965f,	// (0x00027efe) listscroll_menu_pane

0x966b,	// (0x00027f0a) popup_submenu_window_ParamLimits

0x966b,	// (0x00027f0a) popup_submenu_window

0x4b05,	// (0x000233a4) find_popup_pane_g1

0x4b0d,	// (0x000233ac) input_popup_find_pane_cp

0x4af7,	// (0x00023396) input_focus_pane_cp4_ParamLimits

0x4af7,	// (0x00023396) input_focus_pane_cp4

0x4b17,	// (0x000233b6) input_popup_find_pane_t1_ParamLimits

0x4b17,	// (0x000233b6) input_popup_find_pane_t1

0x43e2,	// (0x00022c81) bg_popup_sub_pane_cp

0x4b45,	// (0x000233e4) listscroll_popup_sub_pane

0x4b4d,	// (0x000233ec) list_submenu_pane_ParamLimits

0x4b4d,	// (0x000233ec) list_submenu_pane

0x4b5e,	// (0x000233fd) scroll_pane_cp4

0x4b66,	// (0x00023405) list_single_popup_submenu_pane_ParamLimits

0x4b66,	// (0x00023405) list_single_popup_submenu_pane

0x4b7a,	// (0x00023419) list_single_popup_submenu_pane_g1

0x4b82,	// (0x00023421) list_single_popup_submenu_pane_t1_ParamLimits

0x4b82,	// (0x00023421) list_single_popup_submenu_pane_t1

0x443e,	// (0x00022cdd) bg_active_tab_pane_cp1_ParamLimits

0x443e,	// (0x00022cdd) bg_active_tab_pane_cp1

0x96a1,	// (0x00027f40) tabs_2_active_pane_g1

0x96a9,	// (0x00027f48) tabs_2_active_pane_t1

0x443e,	// (0x00022cdd) bg_passive_tab_pane_cp1_ParamLimits

0x443e,	// (0x00022cdd) bg_passive_tab_pane_cp1

0x96a1,	// (0x00027f40) tabs_2_passive_pane_g1

0x96a9,	// (0x00027f48) tabs_2_passive_pane_t1

0x5817,	// (0x000240b6) bg_active_tab_pane_cp4

0x96bb,	// (0x00027f5a) tabs_2_long_active_pane_t1

0x96ce,	// (0x00027f6d) bg_passive_tab_pane_cp4

0xa731,	// (0x00028fd0) list_single_midp_graphic_pane_g4_ParamLimits

0x5817,	// (0x000240b6) bg_active_tab_pane_cp5

0x96da,	// (0x00027f79) tabs_3_long_active_pane_t1

0x96ce,	// (0x00027f6d) bg_passive_tab_pane_cp5

0xa731,	// (0x00028fd0) list_single_midp_graphic_pane_g4

0x443e,	// (0x00022cdd) bg_popup_window_pane_cp13_ParamLimits

0x443e,	// (0x00022cdd) bg_popup_window_pane_cp13

0x4bac,	// (0x0002344b) listscroll_popup_fast_pane_ParamLimits

0x4bac,	// (0x0002344b) listscroll_popup_fast_pane

0x4bbb,	// (0x0002345a) grid_popup_fast_pane_ParamLimits

0x4bbb,	// (0x0002345a) grid_popup_fast_pane

0x4bcd,	// (0x0002346c) scroll_pane_cp9_ParamLimits

0x4bcd,	// (0x0002346c) scroll_pane_cp9

0x7e06,	// (0x000266a5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7e06,	// (0x000266a5) list_single_graphic_hl_pane_t1_cp2

0x4bf1,	// (0x00023490) input_focus_pane_cp20_ParamLimits

0x4bf1,	// (0x00023490) input_focus_pane_cp20

0x4bff,	// (0x0002349e) query_popup_data_pane_t1_ParamLimits

0x4bff,	// (0x0002349e) query_popup_data_pane_t1

0x4c12,	// (0x000234b1) query_popup_data_pane_t2_ParamLimits

0x4c12,	// (0x000234b1) query_popup_data_pane_t2

0x4c58,	// (0x000234f7) query_popup_data_pane_t3_ParamLimits

0x4c58,	// (0x000234f7) query_popup_data_pane_t3

0x4c99,	// (0x00023538) query_popup_data_pane_t4_ParamLimits

0x4c99,	// (0x00023538) query_popup_data_pane_t4

0x4cd5,	// (0x00023574) query_popup_data_pane_t5_ParamLimits

0x4cd5,	// (0x00023574) query_popup_data_pane_t5

0x0004,

0xf6ea,	// (0x0002df89) query_popup_data_pane_t_ParamLimits

0xf6ea,	// (0x0002df89) query_popup_data_pane_t

0x4aa6,	// (0x00023345) bg_set_opt_pane_g1

0x4aae,	// (0x0002334d) bg_set_opt_pane_g2

0x4ab6,	// (0x00023355) bg_set_opt_pane_g3

0x4abe,	// (0x0002335d) bg_set_opt_pane_g4

0x4ac6,	// (0x00023365) bg_set_opt_pane_g5

0x4ace,	// (0x0002336d) bg_set_opt_pane_g6

0x4ad6,	// (0x00023375) bg_set_opt_pane_g7

0x4ade,	// (0x0002337d) bg_set_opt_pane_g8

0x4ae6,	// (0x00023385) bg_set_opt_pane_g9

0x0008,

0xf6f5,	// (0x0002df94) bg_set_opt_pane_g

0x9aaf,	// (0x0002834e) control_top_pane_stacon_ParamLimits

0x9aaf,	// (0x0002834e) control_top_pane_stacon

0x9b02,	// (0x000283a1) signal_pane_stacon_ParamLimits

0x9b02,	// (0x000283a1) signal_pane_stacon

0x514a,	// (0x000239e9) stacon_top_pane_g1_ParamLimits

0x514a,	// (0x000239e9) stacon_top_pane_g1

0x9b27,	// (0x000283c6) title_pane_stacon_ParamLimits

0x9b27,	// (0x000283c6) title_pane_stacon

0x9b51,	// (0x000283f0) uni_indicator_pane_stacon_ParamLimits

0x9b51,	// (0x000283f0) uni_indicator_pane_stacon

0x9b66,	// (0x00028405) battery_pane_stacon_ParamLimits

0x9b66,	// (0x00028405) battery_pane_stacon

0x9baa,	// (0x00028449) control_bottom_pane_stacon_ParamLimits

0x9baa,	// (0x00028449) control_bottom_pane_stacon

0x9bcd,	// (0x0002846c) navi_pane_stacon_ParamLimits

0x9bcd,	// (0x0002846c) navi_pane_stacon

0x516c,	// (0x00023a0b) stacon_bottom_pane_g1_ParamLimits

0x516c,	// (0x00023a0b) stacon_bottom_pane_g1

0x96ec,	// (0x00027f8b) aid_levels_signal_lsc_ParamLimits

0x96ec,	// (0x00027f8b) aid_levels_signal_lsc

0x9703,	// (0x00027fa2) signal_pane_stacon_g1_ParamLimits

0x9703,	// (0x00027fa2) signal_pane_stacon_g1

0x9717,	// (0x00027fb6) signal_pane_stacon_g2_ParamLimits

0x9717,	// (0x00027fb6) signal_pane_stacon_g2

0x0001,

0xf708,	// (0x0002dfa7) signal_pane_stacon_g_ParamLimits

0xf708,	// (0x0002dfa7) signal_pane_stacon_g

0x974c,	// (0x00027feb) title_pane_stacon_t1_ParamLimits

0x974c,	// (0x00027feb) title_pane_stacon_t1

0x4d2d,	// (0x000235cc) uni_indicator_pane_stacon_g1

0x4d37,	// (0x000235d6) uni_indicator_pane_stacon_g2

0x4d19,	// (0x000235b8) uni_indicator_pane_stacon_g3

0x4d23,	// (0x000235c2) uni_indicator_pane_stacon_g4

0x0003,

0xf714,	// (0x0002dfb3) uni_indicator_pane_stacon_g

0x9771,	// (0x00028010) control_top_pane_stacon_g1

0x9779,	// (0x00028018) control_top_pane_stacon_t1_ParamLimits

0x9779,	// (0x00028018) control_top_pane_stacon_t1

0x97b0,	// (0x0002804f) aid_levels_battery_lsc_ParamLimits

0x97b0,	// (0x0002804f) aid_levels_battery_lsc

0x97c8,	// (0x00028067) battery_pane_stacon_g1_ParamLimits

0x97c8,	// (0x00028067) battery_pane_stacon_g1

0x97db,	// (0x0002807a) battery_pane_stacon_g2_ParamLimits

0x97db,	// (0x0002807a) battery_pane_stacon_g2

0x0001,

0xf71d,	// (0x0002dfbc) battery_pane_stacon_g_ParamLimits

0xf71d,	// (0x0002dfbc) battery_pane_stacon_g

0x9819,	// (0x000280b8) navi_icon_pane_stacon

0x982d,	// (0x000280cc) navi_navi_pane_stacon

0x9819,	// (0x000280b8) navi_text_pane_stacon

0x9771,	// (0x00028010) control_bottom_pane_stacon_g1

0x9841,	// (0x000280e0) control_bottom_pane_stacon_t1_ParamLimits

0x9841,	// (0x000280e0) control_bottom_pane_stacon_t1

0x9878,	// (0x00028117) grid_app_pane_ParamLimits

0x9878,	// (0x00028117) grid_app_pane

0x989c,	// (0x0002813b) scroll_pane_cp15_ParamLimits

0x989c,	// (0x0002813b) scroll_pane_cp15

0x98b1,	// (0x00028150) cell_app_pane_ParamLimits

0x98b1,	// (0x00028150) cell_app_pane

0x98d5,	// (0x00028174) cell_app_pane_g1_ParamLimits

0x98d5,	// (0x00028174) cell_app_pane_g1

0x4d5b,	// (0x000235fa) cell_app_pane_g2_ParamLimits

0x4d5b,	// (0x000235fa) cell_app_pane_g2

0x0001,

0xf722,	// (0x0002dfc1) cell_app_pane_g_ParamLimits

0xf722,	// (0x0002dfc1) cell_app_pane_g

0x4d67,	// (0x00023606) cell_app_pane_t1_ParamLimits

0x4d67,	// (0x00023606) cell_app_pane_t1

0x4d79,	// (0x00023618) grid_highlight_pane_ParamLimits

0x4d79,	// (0x00023618) grid_highlight_pane

0x4aa6,	// (0x00023345) cell_highlight_pane_g1

0x4aae,	// (0x0002334d) cell_highlight_pane_g2

0x4ab6,	// (0x00023355) cell_highlight_pane_g3

0x4abe,	// (0x0002335d) cell_highlight_pane_g4

0x4ac6,	// (0x00023365) cell_highlight_pane_g5

0x4ace,	// (0x0002336d) cell_highlight_pane_g6

0x4ad6,	// (0x00023375) cell_highlight_pane_g7

0x4ade,	// (0x0002337d) cell_highlight_pane_g8

0x4ae6,	// (0x00023385) cell_highlight_pane_g9

0x43d8,	// (0x00022c77) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x0002df6f) cell_highlight_pane_g

0x4d8a,	// (0x00023629) bg_scroll_pane

0x990c,	// (0x000281ab) scroll_handle_pane

0x4dd1,	// (0x00023670) scroll_bg_pane_g1

0x4de6,	// (0x00023685) scroll_bg_pane_g2

0x4dfe,	// (0x0002369d) scroll_bg_pane_g3

0x0002,

0xf727,	// (0x0002dfc6) scroll_bg_pane_g

0x4e13,	// (0x000236b2) scroll_handle_focus_pane_ParamLimits

0x4e13,	// (0x000236b2) scroll_handle_focus_pane

0x4dd1,	// (0x00023670) scroll_handle_pane_g1

0x4e20,	// (0x000236bf) scroll_handle_pane_g2

0x4dfe,	// (0x0002369d) scroll_handle_pane_g3

0x0002,

0xf72e,	// (0x0002dfcd) scroll_handle_pane_g

0x4af7,	// (0x00023396) bg_popup_sub_pane_cp21_ParamLimits

0x4af7,	// (0x00023396) bg_popup_sub_pane_cp21

0x4e34,	// (0x000236d3) popup_fep_japan_predictive_window_t1_ParamLimits

0x4e34,	// (0x000236d3) popup_fep_japan_predictive_window_t1

0x4e4e,	// (0x000236ed) popup_fep_japan_predictive_window_t2_ParamLimits

0x4e4e,	// (0x000236ed) popup_fep_japan_predictive_window_t2

0x4e81,	// (0x00023720) popup_fep_japan_predictive_window_t3_ParamLimits

0x4e81,	// (0x00023720) popup_fep_japan_predictive_window_t3

0x0002,

0xf735,	// (0x0002dfd4) popup_fep_japan_predictive_window_t_ParamLimits

0xf735,	// (0x0002dfd4) popup_fep_japan_predictive_window_t

0x43e2,	// (0x00022c81) bg_popup_sub_pane_cp23

0x4eb8,	// (0x00023757) listscroll_japin_cand_pane

0x4ec0,	// (0x0002375f) popup_fep_japan_candidate_window_t1

0x4ece,	// (0x0002376d) candidate_pane_ParamLimits

0x4ece,	// (0x0002376d) candidate_pane

0x4ee0,	// (0x0002377f) scroll_pane_cp30

0x4ee8,	// (0x00023787) list_single_popup_jap_candidate_pane_ParamLimits

0x4ee8,	// (0x00023787) list_single_popup_jap_candidate_pane

0x43e2,	// (0x00022c81) list_highlight_pane_cp30

0x4efd,	// (0x0002379c) list_single_popup_jap_candidate_pane_t1

0x4f0c,	// (0x000237ab) level_1_signal

0x4f19,	// (0x000237b8) level_2_signal

0x4f26,	// (0x000237c5) level_3_signal

0x4f33,	// (0x000237d2) level_4_signal

0x4f40,	// (0x000237df) level_5_signal

0x4f4d,	// (0x000237ec) level_6_signal

0x4f5a,	// (0x000237f9) level_7_signal

0x4f0c,	// (0x000237ab) level_1_battery

0x4f19,	// (0x000237b8) level_2_battery

0x4f26,	// (0x000237c5) level_3_battery

0x4f33,	// (0x000237d2) level_4_battery

0x4f40,	// (0x000237df) level_5_battery

0x4f4d,	// (0x000237ec) level_6_battery

0x4f5a,	// (0x000237f9) level_7_battery

0x4f7f,	// (0x0002381e) list_menu_pane_ParamLimits

0x4f7f,	// (0x0002381e) list_menu_pane

0x4f90,	// (0x0002382f) scroll_pane_cp25_ParamLimits

0x4f90,	// (0x0002382f) scroll_pane_cp25

0x4fa9,	// (0x00023848) list_double2_graphic_pane_cp2_ParamLimits

0x4fa9,	// (0x00023848) list_double2_graphic_pane_cp2

0x4fa9,	// (0x00023848) list_double2_large_graphic_pane_cp2_ParamLimits

0x4fa9,	// (0x00023848) list_double2_large_graphic_pane_cp2

0x4fa9,	// (0x00023848) list_double2_pane_cp2_ParamLimits

0x4fa9,	// (0x00023848) list_double2_pane_cp2

0x4fa9,	// (0x00023848) list_double_graphic_pane_cp2_ParamLimits

0x4fa9,	// (0x00023848) list_double_graphic_pane_cp2

0x4fa9,	// (0x00023848) list_double_large_graphic_pane_cp2_ParamLimits

0x4fa9,	// (0x00023848) list_double_large_graphic_pane_cp2

0x4fa9,	// (0x00023848) list_double_number_pane_cp2_ParamLimits

0x4fa9,	// (0x00023848) list_double_number_pane_cp2

0x4fa9,	// (0x00023848) list_double_pane_cp2_ParamLimits

0x4fa9,	// (0x00023848) list_double_pane_cp2

0x9968,	// (0x00028207) list_single_2graphic_pane_cp2_ParamLimits

0x9968,	// (0x00028207) list_single_2graphic_pane_cp2

0x9968,	// (0x00028207) list_single_graphic_heading_pane_cp2_ParamLimits

0x9968,	// (0x00028207) list_single_graphic_heading_pane_cp2

0x9968,	// (0x00028207) list_single_graphic_pane_cp2_ParamLimits

0x9968,	// (0x00028207) list_single_graphic_pane_cp2

0x9968,	// (0x00028207) list_single_heading_pane_cp2_ParamLimits

0x9968,	// (0x00028207) list_single_heading_pane_cp2

0x4fb9,	// (0x00023858) list_single_large_graphic_pane_cp2_ParamLimits

0x4fb9,	// (0x00023858) list_single_large_graphic_pane_cp2

0x9968,	// (0x00028207) list_single_number_heading_pane_cp2_ParamLimits

0x9968,	// (0x00028207) list_single_number_heading_pane_cp2

0x9968,	// (0x00028207) list_single_number_pane_cp2_ParamLimits

0x9968,	// (0x00028207) list_single_number_pane_cp2

0x9968,	// (0x00028207) list_single_pane_cp2_ParamLimits

0x9968,	// (0x00028207) list_single_pane_cp2

0x4fd3,	// (0x00023872) bg_popup_sub_pane_cp22

0x9a27,	// (0x000282c6) popup_side_volume_key_window_g1

0x9a51,	// (0x000282f0) popup_side_volume_key_window_t1

0x9a6d,	// (0x0002830c) volume_small_pane_cp1

0x4430,	// (0x00022ccf) bg_popup_sub_pane_cp24_ParamLimits

0x4430,	// (0x00022ccf) bg_popup_sub_pane_cp24

0x4fe9,	// (0x00023888) fep_china_uni_candidate_pane_ParamLimits

0x4fe9,	// (0x00023888) fep_china_uni_candidate_pane

0x4ffd,	// (0x0002389c) fep_china_uni_entry_pane

0x500d,	// (0x000238ac) popup_fep_china_uni_window_g1

0x5029,	// (0x000238c8) fep_china_uni_entry_pane_g1

0x5031,	// (0x000238d0) fep_china_uni_entry_pane_g2

0x0001,

0xf762,	// (0x0002e001) fep_china_uni_entry_pane_g

0x5039,	// (0x000238d8) fep_entry_item_pane

0x5043,	// (0x000238e2) fep_candidate_item_pane

0x504b,	// (0x000238ea) fep_china_uni_candidate_pane_g1

0x5053,	// (0x000238f2) fep_china_uni_candidate_pane_g2

0x505b,	// (0x000238fa) fep_china_uni_candidate_pane_g3

0x5063,	// (0x00023902) fep_china_uni_candidate_pane_g4

0x0003,

0xf767,	// (0x0002e006) fep_china_uni_candidate_pane_g

0x43d8,	// (0x00022c77) fep_entry_item_pane_g1

0x506b,	// (0x0002390a) fep_entry_item_pane_t1_ParamLimits

0x506b,	// (0x0002390a) fep_entry_item_pane_t1

0x5081,	// (0x00023920) fep_candidate_item_pane_t1_ParamLimits

0x5081,	// (0x00023920) fep_candidate_item_pane_t1

0x5096,	// (0x00023935) fep_candidate_item_pane_t2_ParamLimits

0x5096,	// (0x00023935) fep_candidate_item_pane_t2

0x0001,

0xf770,	// (0x0002e00f) fep_candidate_item_pane_t_ParamLimits

0xf770,	// (0x0002e00f) fep_candidate_item_pane_t

0x443e,	// (0x00022cdd) list_highlight_pane_cp31_ParamLimits

0x443e,	// (0x00022cdd) list_highlight_pane_cp31

0x50a8,	// (0x00023947) level_1_signal_lsc

0x50b1,	// (0x00023950) level_2_signal_lsc

0x50ba,	// (0x00023959) level_3_signal_lsc

0x50c3,	// (0x00023962) level_4_signal_lsc

0x50cc,	// (0x0002396b) level_5_signal_lsc

0x50d5,	// (0x00023974) level_6_signal_lsc

0x50de,	// (0x0002397d) level_7_signal_lsc

0x50de,	// (0x0002397d) level_1_battery_lsc

0x50e7,	// (0x00023986) level_2_battery_lsc

0x50f0,	// (0x0002398f) level_3_battery_lsc

0x50f9,	// (0x00023998) level_4_battery_lsc

0x5102,	// (0x000239a1) level_5_battery_lsc

0x510b,	// (0x000239aa) level_6_battery_lsc

0x50a8,	// (0x00023947) level_7_battery_lsc

0x5114,	// (0x000239b3) scroll_handle_focus_pane_g1

0x511d,	// (0x000239bc) scroll_handle_focus_pane_g2

0x5126,	// (0x000239c5) scroll_handle_focus_pane_g3

0x0002,

0xf775,	// (0x0002e014) scroll_handle_focus_pane_g

0xd3e9,	// (0x0002bc88) list_single_2graphic_pane_g1_ParamLimits

0xd3e9,	// (0x0002bc88) list_single_2graphic_pane_g1

0xcd55,	// (0x0002b5f4) list_single_2graphic_pane_g2_ParamLimits

0xcd55,	// (0x0002b5f4) list_single_2graphic_pane_g2

0xccdb,	// (0x0002b57a) list_single_2graphic_pane_g3_ParamLimits

0xccdb,	// (0x0002b57a) list_single_2graphic_pane_g3

0xd3f5,	// (0x0002bc94) list_single_2graphic_pane_g4_ParamLimits

0xd3f5,	// (0x0002bc94) list_single_2graphic_pane_g4

0x0003,

0xf77c,	// (0x0002e01b) list_single_2graphic_pane_g_ParamLimits

0xf77c,	// (0x0002e01b) list_single_2graphic_pane_g

0xd401,	// (0x0002bca0) list_single_2graphic_pane_t1_ParamLimits

0xd401,	// (0x0002bca0) list_single_2graphic_pane_t1

0xd42f,	// (0x0002bcce) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd42f,	// (0x0002bcce) list_double2_graphic_large_graphic_pane_g1

0xcfb6,	// (0x0002b855) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xcfb6,	// (0x0002b855) list_double2_graphic_large_graphic_pane_g2

0xceec,	// (0x0002b78b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xceec,	// (0x0002b78b) list_double2_graphic_large_graphic_pane_g3

0xd43f,	// (0x0002bcde) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd43f,	// (0x0002bcde) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf785,	// (0x0002e024) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf785,	// (0x0002e024) list_double2_graphic_large_graphic_pane_g

0xd44b,	// (0x0002bcea) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd44b,	// (0x0002bcea) list_double2_graphic_large_graphic_pane_t1

0xd461,	// (0x0002bd00) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd461,	// (0x0002bd00) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf78e,	// (0x0002e02d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf78e,	// (0x0002e02d) list_double2_graphic_large_graphic_pane_t

0x51e7,	// (0x00023a86) popup_fast_swap_window_ParamLimits

0x51e7,	// (0x00023a86) popup_fast_swap_window

0x5203,	// (0x00023aa2) popup_side_volume_key_window

0x521f,	// (0x00023abe) stacon_top_pane

0x5229,	// (0x00023ac8) status_pane_ParamLimits

0x5229,	// (0x00023ac8) status_pane

0x521f,	// (0x00023abe) status_small_pane

0x43e2,	// (0x00022c81) control_pane

0x43e2,	// (0x00022c81) stacon_bottom_pane

0x4a22,	// (0x000232c1) scroll_pane_cp121

0x4a19,	// (0x000232b8) set_content_pane

0x9a75,	// (0x00028314) bg_active_tab_pane_g1_cp1

0x5138,	// (0x000239d7) bg_active_tab_pane_g2_cp1

0x9a7e,	// (0x0002831d) bg_active_tab_pane_g3_cp1

0x9a75,	// (0x00028314) bg_passive_tab_pane_g1_cp1

0x5138,	// (0x000239d7) bg_passive_tab_pane_g2_cp1

0x9a7e,	// (0x0002831d) bg_passive_tab_pane_g3_cp1

0x5141,	// (0x000239e0) bg_active_tab_pane_g1_cp2

0x5138,	// (0x000239d7) bg_active_tab_pane_g2_cp2

0x512f,	// (0x000239ce) bg_active_tab_pane_g3_cp2

0x5141,	// (0x000239e0) bg_passive_tab_pane_g1_cp2

0x5138,	// (0x000239d7) bg_passive_tab_pane_g2_cp2

0x512f,	// (0x000239ce) bg_passive_tab_pane_g3_cp2

0x9a87,	// (0x00028326) bg_active_tab_pane_g1_cp3

0x5138,	// (0x000239d7) bg_active_tab_pane_g2_cp3

0x9a90,	// (0x0002832f) bg_active_tab_pane_g3_cp3

0x9a87,	// (0x00028326) bg_passive_tab_pane_g1_cp3

0x5138,	// (0x000239d7) bg_passive_tab_pane_g2_cp3

0x9a90,	// (0x0002832f) bg_passive_tab_pane_g3_cp3

0x9a99,	// (0x00028338) bg_active_tab_pane_g1_cp4

0x5138,	// (0x000239d7) bg_active_tab_pane_g2_cp4

0x9aa4,	// (0x00028343) bg_active_tab_pane_g3_cp4

0x9a99,	// (0x00028338) bg_passive_tab_pane_g1_cp4

0x5138,	// (0x000239d7) bg_passive_tab_pane_g2_cp4

0x9aa4,	// (0x00028343) bg_passive_tab_pane_g3_cp4

0x5191,	// (0x00023a30) bg_active_tab_pane_g1_cp5

0x5138,	// (0x000239d7) bg_active_tab_pane_g2_cp5

0x5188,	// (0x00023a27) bg_active_tab_pane_g3_cp5

0x5191,	// (0x00023a30) bg_passive_tab_pane_g1_cp5

0x5138,	// (0x000239d7) bg_passive_tab_pane_g2_cp5

0x5188,	// (0x00023a27) bg_passive_tab_pane_g3_cp5

0x9bf0,	// (0x0002848f) list_set_graphic_pane_ParamLimits

0x9bf0,	// (0x0002848f) list_set_graphic_pane

0x43e2,	// (0x00022c81) bg_set_opt_pane_cp4

0x9c0d,	// (0x000284ac) list_set_graphic_pane_g1_ParamLimits

0x9c0d,	// (0x000284ac) list_set_graphic_pane_g1

0x9c19,	// (0x000284b8) list_set_graphic_pane_g2_ParamLimits

0x9c19,	// (0x000284b8) list_set_graphic_pane_g2

0x0001,

0xf793,	// (0x0002e032) list_set_graphic_pane_g_ParamLimits

0xf793,	// (0x0002e032) list_set_graphic_pane_g

0x0009,

0xfaf7,	// (0x0002e396) volume_small_pane_cp_g

0x519a,	// (0x00023a39) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x519a,	// (0x00023a39) list_double2_large_graphic_pane_g1_cp2

0x51a6,	// (0x00023a45) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x51a6,	// (0x00023a45) list_double2_large_graphic_pane_g2_cp2

0x51b7,	// (0x00023a56) list_double2_large_graphic_pane_g3_cp2

0x51bf,	// (0x00023a5e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x51bf,	// (0x00023a5e) list_double2_large_graphic_pane_t1_cp2

0x51d5,	// (0x00023a74) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x51d5,	// (0x00023a74) list_double2_large_graphic_pane_t2_cp2

0x6922,	// (0x000251c1) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6922,	// (0x000251c1) list_double_large_graphic_pane_g1_cp2

0x6933,	// (0x000251d2) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6933,	// (0x000251d2) list_double_large_graphic_pane_g2_cp2

0x5345,	// (0x00023be4) list_double_large_graphic_pane_g3_cp2

0x6944,	// (0x000251e3) list_double_large_graphic_pane_g4_cp

0x694c,	// (0x000251eb) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x694c,	// (0x000251eb) list_double_large_graphic_pane_t1_cp2

0x6963,	// (0x00025202) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6963,	// (0x00025202) list_double_large_graphic_pane_t2_cp2

0x5237,	// (0x00023ad6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5237,	// (0x00023ad6) list_double2_graphic_pane_g1_cp2

0x5245,	// (0x00023ae4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5245,	// (0x00023ae4) list_double2_graphic_pane_g2_cp2

0x5256,	// (0x00023af5) list_double2_graphic_pane_g3_cp2

0x5260,	// (0x00023aff) list_double2_graphic_pane_t1_cp2_ParamLimits

0x5260,	// (0x00023aff) list_double2_graphic_pane_t1_cp2

0x5276,	// (0x00023b15) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5276,	// (0x00023b15) list_double2_graphic_pane_t2_cp2

0x5288,	// (0x00023b27) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5288,	// (0x00023b27) list_single_number_heading_pane_g1_cp2

0x5294,	// (0x00023b33) list_single_number_heading_pane_g2_cp2

0x529c,	// (0x00023b3b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x529c,	// (0x00023b3b) list_single_number_heading_pane_t1_cp2

0x52b2,	// (0x00023b51) list_single_number_heading_pane_t2_cp2_ParamLimits

0x52b2,	// (0x00023b51) list_single_number_heading_pane_t2_cp2

0x52c4,	// (0x00023b63) list_single_number_heading_pane_t3_cp2_ParamLimits

0x52c4,	// (0x00023b63) list_single_number_heading_pane_t3_cp2

0x5288,	// (0x00023b27) list_single_heading_pane_g1_cp2_ParamLimits

0x5288,	// (0x00023b27) list_single_heading_pane_g1_cp2

0x5294,	// (0x00023b33) list_single_heading_pane_g2_cp2

0x529c,	// (0x00023b3b) list_single_heading_pane_t1_cp2_ParamLimits

0x529c,	// (0x00023b3b) list_single_heading_pane_t1_cp2

0x6700,	// (0x00024f9f) list_single_heading_pane_t2_cp2_ParamLimits

0x6700,	// (0x00024f9f) list_single_heading_pane_t2_cp2

0x6666,	// (0x00024f05) list_double_graphic_pane_g1_cp2_ParamLimits

0x6666,	// (0x00024f05) list_double_graphic_pane_g1_cp2

0x6672,	// (0x00024f11) list_double_graphic_pane_g2_cp2_ParamLimits

0x6672,	// (0x00024f11) list_double_graphic_pane_g2_cp2

0x6681,	// (0x00024f20) list_double_graphic_pane_g3_cp2

0x6689,	// (0x00024f28) list_double_graphic_pane_t1_cp2_ParamLimits

0x6689,	// (0x00024f28) list_double_graphic_pane_t1_cp2

0x669f,	// (0x00024f3e) list_double_graphic_pane_t2_cp2_ParamLimits

0x669f,	// (0x00024f3e) list_double_graphic_pane_t2_cp2

0x5339,	// (0x00023bd8) list_double_number_pane_g1_cp2_ParamLimits

0x5339,	// (0x00023bd8) list_double_number_pane_g1_cp2

0x5345,	// (0x00023be4) list_double_number_pane_g2_cp2

0x662a,	// (0x00024ec9) list_double_number_pane_t1_cp2_ParamLimits

0x662a,	// (0x00024ec9) list_double_number_pane_t1_cp2

0x663e,	// (0x00024edd) list_double_number_pane_t2_cp2_ParamLimits

0x663e,	// (0x00024edd) list_double_number_pane_t2_cp2

0x6654,	// (0x00024ef3) list_double_number_pane_t3_cp2_ParamLimits

0x6654,	// (0x00024ef3) list_double_number_pane_t3_cp2

0x65a1,	// (0x00024e40) list_single_graphic_pane_g1_cp2_ParamLimits

0x65a1,	// (0x00024e40) list_single_graphic_pane_g1_cp2

0x539d,	// (0x00023c3c) list_single_graphic_pane_g2_cp2_ParamLimits

0x539d,	// (0x00023c3c) list_single_graphic_pane_g2_cp2

0x53a9,	// (0x00023c48) list_single_graphic_pane_g3_cp2

0x6577,	// (0x00024e16) list_single_graphic_pane_t1_cp2_ParamLimits

0x6577,	// (0x00024e16) list_single_graphic_pane_t1_cp2

0x539d,	// (0x00023c3c) list_single_number_pane_g1_cp2_ParamLimits

0x539d,	// (0x00023c3c) list_single_number_pane_g1_cp2

0x53a9,	// (0x00023c48) list_single_number_pane_g2_cp2

0x6577,	// (0x00024e16) list_single_number_pane_t1_cp2_ParamLimits

0x6577,	// (0x00024e16) list_single_number_pane_t1_cp2

0x658d,	// (0x00024e2c) list_single_number_pane_t2_cp2_ParamLimits

0x658d,	// (0x00024e2c) list_single_number_pane_t2_cp2

0x51a6,	// (0x00023a45) list_double2_pane_g1_cp2_ParamLimits

0x51a6,	// (0x00023a45) list_double2_pane_g1_cp2

0x51b7,	// (0x00023a56) list_double2_pane_g2_cp2

0x5311,	// (0x00023bb0) list_double2_pane_t1_cp2_ParamLimits

0x5311,	// (0x00023bb0) list_double2_pane_t1_cp2

0x5327,	// (0x00023bc6) list_double2_pane_t2_cp2_ParamLimits

0x5327,	// (0x00023bc6) list_double2_pane_t2_cp2

0x5339,	// (0x00023bd8) list_double_pane_g1_cp2_ParamLimits

0x5339,	// (0x00023bd8) list_double_pane_g1_cp2

0x5345,	// (0x00023be4) list_double_pane_g2_cp2

0x534d,	// (0x00023bec) list_double_pane_t1_cp2_ParamLimits

0x534d,	// (0x00023bec) list_double_pane_t1_cp2

0x5363,	// (0x00023c02) list_double_pane_t2_cp2_ParamLimits

0x5363,	// (0x00023c02) list_double_pane_t2_cp2

0x538d,	// (0x00023c2c) list_single_pane_cp2_g3

0x539d,	// (0x00023c3c) list_single_pane_g1_cp2_ParamLimits

0x539d,	// (0x00023c3c) list_single_pane_g1_cp2

0x53a9,	// (0x00023c48) list_single_pane_g2_cp2

0x53b1,	// (0x00023c50) list_single_pane_t1_cp2_ParamLimits

0x53b1,	// (0x00023c50) list_single_pane_t1_cp2

0x53c9,	// (0x00023c68) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x53c9,	// (0x00023c68) list_single_large_graphic_pane_g1_cp2

0x53d5,	// (0x00023c74) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x53d5,	// (0x00023c74) list_single_large_graphic_pane_g2_cp2

0x53e1,	// (0x00023c80) list_single_large_graphic_pane_g3_cp2

0x53e9,	// (0x00023c88) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x53e9,	// (0x00023c88) list_single_large_graphic_pane_g4_cp1

0x5403,	// (0x00023ca2) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x5403,	// (0x00023ca2) list_single_large_graphic_pane_t1_cp2

0x6543,	// (0x00024de2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6543,	// (0x00024de2) list_single_graphic_heading_pane_g1_cp2

0x6510,	// (0x00024daf) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6510,	// (0x00024daf) list_single_graphic_heading_pane_g4_cp2

0x53a9,	// (0x00023c48) list_single_graphic_heading_pane_g5_cp2

0x654f,	// (0x00024dee) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x654f,	// (0x00024dee) list_single_graphic_heading_pane_t1_cp2

0x6565,	// (0x00024e04) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6565,	// (0x00024e04) list_single_graphic_heading_pane_t2_cp2

0x6504,	// (0x00024da3) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6504,	// (0x00024da3) list_single_2graphic_pane_g1_cp2

0x6510,	// (0x00024daf) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6510,	// (0x00024daf) list_single_2graphic_pane_g2_cp2

0x53a9,	// (0x00023c48) list_single_2graphic_pane_g3_cp2

0x6521,	// (0x00024dc0) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6521,	// (0x00024dc0) list_single_2graphic_pane_g4_cp2

0x652d,	// (0x00024dcc) list_single_2graphic_pane_t1_cp2_ParamLimits

0x652d,	// (0x00024dcc) list_single_2graphic_pane_t1_cp2

0x43d8,	// (0x00022c77) list_highlight_pane_g10_cp1

0x60fa,	// (0x00024999) list_highlight_pane_g1_cp1

0x6102,	// (0x000249a1) list_highlight_pane_g2_cp1

0x610a,	// (0x000249a9) list_highlight_pane_g3_cp1

0x6112,	// (0x000249b1) list_highlight_pane_g4_cp1

0x611a,	// (0x000249b9) list_highlight_pane_g5_cp1

0x6122,	// (0x000249c1) list_highlight_pane_g6_cp1

0x612a,	// (0x000249c9) list_highlight_pane_g7_cp1

0x6132,	// (0x000249d1) list_highlight_pane_g8_cp1

0x613a,	// (0x000249d9) list_highlight_pane_g9_cp1

0xa92d,	// (0x000291cc) form_field_slider_pane_t3

0xa93b,	// (0x000291da) form_field_slider_pane_t4

0x6036,	// (0x000248d5) slider_form_pane_ParamLimits

0x6036,	// (0x000248d5) slider_form_pane

0x43e2,	// (0x00022c81) control_abbreviations

0x43e2,	// (0x00022c81) control_conventions

0x43e2,	// (0x00022c81) control_definitions

0x43e2,	// (0x00022c81) format_table_attribute

0x674a,	// (0x00024fe9) bg_popup_preview_window_pane_g9

0x43e2,	// (0x00022c81) format_table_data2

0x43e2,	// (0x00022c81) format_table_data3

0x43e2,	// (0x00022c81) format_table_data_example

0x0008,

0x43e2,	// (0x00022c81) intro_purpose

0xf928,	// (0x0002e1c7) bg_popup_preview_window_pane_g

0x43e2,	// (0x00022c81) texts_category

0x43e2,	// (0x00022c81) texts_graphics

0x5419,	// (0x00023cb8) text_digital

0x5428,	// (0x00023cc7) text_primary

0x5437,	// (0x00023cd6) text_primary_small

0x5446,	// (0x00023ce5) text_secondary

0x5455,	// (0x00023cf4) text_title

0x6c0c,	// (0x000254ab) bg_passive_tab_pane_g1_cp3_srt

0x5138,	// (0x000239d7) bg_passive_tab_pane_g2_cp3_srt

0x6c03,	// (0x000254a2) bg_passive_tab_pane_g3_cp3_srt

0x443e,	// (0x00022cdd) bg_active_tab_pane_cp3_srt_ParamLimits

0x443e,	// (0x00022cdd) bg_active_tab_pane_cp3_srt

0x6c15,	// (0x000254b4) tabs_4_active_pane_srt_g1

0xaecc,	// (0x0002976b) tabs_4_active_pane_srt_t1_ParamLimits

0xaecc,	// (0x0002976b) tabs_4_active_pane_srt_t1

0x6c0c,	// (0x000254ab) bg_active_tab_pane_g1_cp3_copy1

0x5138,	// (0x000239d7) bg_active_tab_pane_g2_cp3_copy1

0x6c03,	// (0x000254a2) bg_active_tab_pane_g3_cp3_copy1

0x443e,	// (0x00022cdd) tabs_2_long_active_pane_srt_ParamLimits

0x443e,	// (0x00022cdd) tabs_2_long_active_pane_srt

0x443e,	// (0x00022cdd) tabs_2_long_passive_pane_srt_ParamLimits

0x443e,	// (0x00022cdd) tabs_2_long_passive_pane_srt

0x96ce,	// (0x00027f6d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x96ce,	// (0x00027f6d) bg_passive_tab_pane_cp4_srt

0x6b32,	// (0x000253d1) bg_passive_tab_pane_g1_cp4_srt

0x5138,	// (0x000239d7) bg_passive_tab_pane_g2_cp4_srt

0x6b29,	// (0x000253c8) bg_passive_tab_pane_g3_cp4_srt

0x5817,	// (0x000240b6) bg_active_tab_pane_cp4_srt_ParamLimits

0x5817,	// (0x000240b6) bg_active_tab_pane_cp4_srt

0xac5c,	// (0x000294fb) tabs_2_long_active_pane_srt_t1_ParamLimits

0xac5c,	// (0x000294fb) tabs_2_long_active_pane_srt_t1

0x6b32,	// (0x000253d1) bg_active_tab_pane_g1_cp4_srt

0x5138,	// (0x000239d7) bg_active_tab_pane_g2_cp4_srt

0x6b29,	// (0x000253c8) bg_active_tab_pane_g3_cp4_srt

0x4430,	// (0x00022ccf) tabs_3_long_active_pane_srt_ParamLimits

0x4430,	// (0x00022ccf) tabs_3_long_active_pane_srt

0x4430,	// (0x00022ccf) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x4430,	// (0x00022ccf) tabs_3_long_passive_pane_cp_srt

0x4430,	// (0x00022ccf) tabs_3_long_passive_pane_srt_ParamLimits

0x4430,	// (0x00022ccf) tabs_3_long_passive_pane_srt

0x96ce,	// (0x00027f6d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x96ce,	// (0x00027f6d) bg_passive_tab_pane_cp5_srt

0x5191,	// (0x00023a30) bg_passive_tab_pane_g1_cp5_srt

0x5138,	// (0x000239d7) bg_passive_tab_pane_g2_cp5_srt

0x5188,	// (0x00023a27) bg_passive_tab_pane_g3_cp5_srt

0x5817,	// (0x000240b6) bg_active_tab_pane_cp5_srt_ParamLimits

0x5817,	// (0x000240b6) bg_active_tab_pane_cp5_srt

0xac4a,	// (0x000294e9) tabs_3_long_active_pane_srt_t1_ParamLimits

0xac4a,	// (0x000294e9) tabs_3_long_active_pane_srt_t1

0x5191,	// (0x00023a30) bg_active_tab_pane_g1_cp5_srt

0x5138,	// (0x000239d7) bg_active_tab_pane_g2_cp5_srt

0x5188,	// (0x00023a27) bg_active_tab_pane_g3_cp5_srt

0x6b1b,	// (0x000253ba) navi_text_pane_srt_t1

0x6b13,	// (0x000253b2) navi_icon_pane_srt_g1

0x555b,	// (0x00023dfa) midp_editing_number_pane_srt

0x5464,	// (0x00023d03) midp_ticker_pane_srt

0x5563,	// (0x00023e02) midp_ticker_pane_srt_g1

0x556b,	// (0x00023e0a) midp_ticker_pane_srt_g2

0x0001,

0xf7b2,	// (0x0002e051) midp_ticker_pane_srt_g

0x5573,	// (0x00023e12) midp_ticker_pane_srt_t1

0x6b04,	// (0x000253a3) midp_editing_number_pane_t1_copy1

0x9c3d,	// (0x000284dc) listscroll_midp_pane

0x9c3d,	// (0x000284dc) midp_form_pane

0x546c,	// (0x00023d0b) midp_info_popup_window_ParamLimits

0x546c,	// (0x00023d0b) midp_info_popup_window

0x4af7,	// (0x00023396) bg_popup_sub_pane_cp50_ParamLimits

0x4af7,	// (0x00023396) bg_popup_sub_pane_cp50

0x5d7f,	// (0x0002461e) listscroll_midp_info_pane_ParamLimits

0x5d7f,	// (0x0002461e) listscroll_midp_info_pane

0x5d67,	// (0x00024606) listscroll_form_midp_pane_ParamLimits

0x5d67,	// (0x00024606) listscroll_form_midp_pane

0x5d73,	// (0x00024612) scroll_bar_cp050

0xa915,	// (0x000291b4) list_midp_pane

0x7479,	// (0x00025d18) signal_pane_g2_cp

0x5c99,	// (0x00024538) listscroll_midp_info_pane_t1_ParamLimits

0x5c99,	// (0x00024538) listscroll_midp_info_pane_t1

0x5cb1,	// (0x00024550) listscroll_midp_info_pane_t2_ParamLimits

0x5cb1,	// (0x00024550) listscroll_midp_info_pane_t2

0x5cef,	// (0x0002458e) listscroll_midp_info_pane_t3_ParamLimits

0x5cef,	// (0x0002458e) listscroll_midp_info_pane_t3

0x5d29,	// (0x000245c8) listscroll_midp_info_pane_t4_ParamLimits

0x5d29,	// (0x000245c8) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x0002e102) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x0002e102) listscroll_midp_info_pane_t

0x4b5e,	// (0x000233fd) scroll_pane_cp21

0x5c37,	// (0x000244d6) form_midp_field_choice_group_pane

0x5c40,	// (0x000244df) form_midp_field_text_pane

0x5c7f,	// (0x0002451e) form_midp_field_time_pane

0x5c87,	// (0x00024526) form_midp_gauge_slider_pane

0x5c90,	// (0x0002452f) form_midp_gauge_wait_pane

0x43e2,	// (0x00022c81) form_midp_image_pane

0xd52a,	// (0x0002bdc9) list_single_midp_pane_ParamLimits

0xd52a,	// (0x0002bdc9) list_single_midp_pane

0xa8de,	// (0x0002917d) form_midp_field_text_pane_t1

0x5ade,	// (0x0002437d) input_focus_pane_cp050

0x5c26,	// (0x000244c5) list_midp_form_text_pane

0x5bf5,	// (0x00024494) form_midp_field_choice_group_pane_t1

0x5c03,	// (0x000244a2) input_focus_pane_cp051

0x5c17,	// (0x000244b6) list_midp_choice_pane

0x43e2,	// (0x00022c81) status_idle_pane

0x5bd9,	// (0x00024478) form_midp_field_time_pane_t1

0x43d8,	// (0x00022c77) wait_anim_pane_g2_copy1

0x5be7,	// (0x00024486) form_midp_field_time_pane_t2

0x0001,

0x54c5,	// (0x00023d64) aid_navinavi_width_2_pane

0xf85e,	// (0x0002e0fd) form_midp_field_time_pane_t

0x43e2,	// (0x00022c81) input_focus_pane_cp052

0x43e2,	// (0x00022c81) bg_input_focus_pane_cp040

0x5bb5,	// (0x00024454) form_midp_gauge_slider_pane_t1

0x5bc3,	// (0x00024462) form_midp_gauge_slider_pane_t2

0xa8c2,	// (0x00029161) form_midp_gauge_slider_pane_t3

0xa8d0,	// (0x0002916f) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x0002e0f4) form_midp_gauge_slider_pane_t

0x5bd1,	// (0x00024470) form_midp_slider_pane

0x443e,	// (0x00022cdd) bg_input_focus_pane_cp041_ParamLimits

0x443e,	// (0x00022cdd) bg_input_focus_pane_cp041

0x5b82,	// (0x00024421) form_midp_gauge_wait_pane_t1_ParamLimits

0x5b82,	// (0x00024421) form_midp_gauge_wait_pane_t1

0x5b94,	// (0x00024433) form_midp_gauge_wait_pane_t2_ParamLimits

0x5b94,	// (0x00024433) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x0002e0ef) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x0002e0ef) form_midp_gauge_wait_pane_t

0x5ba6,	// (0x00024445) form_midp_wait_pane_ParamLimits

0x5ba6,	// (0x00024445) form_midp_wait_pane

0x5b4c,	// (0x000243eb) form_midp_image_pane_g1

0x5b55,	// (0x000243f4) form_midp_image_pane_t1

0x5b64,	// (0x00024403) form_midp_image_pane_t2

0x5b73,	// (0x00024412) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0002e0e8) form_midp_image_pane_t

0x5b43,	// (0x000243e2) list_single_midp_pane_g1

0xd51b,	// (0x0002bdba) list_single_midp_pane_t1

0xa89a,	// (0x00029139) list_midp_form_item_pane_ParamLimits

0xa89a,	// (0x00029139) list_midp_form_item_pane

0x547f,	// (0x00023d1e) list_midp_form_item_pane_t1

0x548e,	// (0x00023d2d) midp_ticker_pane_g1

0x549a,	// (0x00023d39) midp_ticker_pane_g2

0x0001,

0xf798,	// (0x0002e037) midp_ticker_pane_g

0x9cee,	// (0x0002858d) midp_ticker_pane_t1

0xae4b,	// (0x000296ea) midp_editing_number_pane_t1

0x6b98,	// (0x00025437) midp_editing_number_pane

0x6ba7,	// (0x00025446) midp_ticker_pane

0x6af4,	// (0x00025393) ai_message_heading_pane

0x43e2,	// (0x00022c81) bg_popup_window_pane_cp14

0x6afc,	// (0x0002539b) listscroll_ai_message_pane

0x6a7e,	// (0x0002531d) ai_message_heading_pane_g1_ParamLimits

0x6a7e,	// (0x0002531d) ai_message_heading_pane_g1

0x6a8a,	// (0x00025329) ai_message_heading_pane_g2_ParamLimits

0x6a8a,	// (0x00025329) ai_message_heading_pane_g2

0x6a96,	// (0x00025335) ai_message_heading_pane_g3_ParamLimits

0x6a96,	// (0x00025335) ai_message_heading_pane_g3

0x6aa2,	// (0x00025341) ai_message_heading_pane_g4_ParamLimits

0x6aa2,	// (0x00025341) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x0002e229) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x0002e229) ai_message_heading_pane_g

0x6aae,	// (0x0002534d) ai_message_heading_pane_t1_ParamLimits

0x6aae,	// (0x0002534d) ai_message_heading_pane_t1

0x6ac8,	// (0x00025367) ai_message_heading_pane_t2_ParamLimits

0x6ac8,	// (0x00025367) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x0002e232) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x0002e232) ai_message_heading_pane_t

0x6ada,	// (0x00025379) bg_popup_heading_pane_cp1_ParamLimits

0x6ada,	// (0x00025379) bg_popup_heading_pane_cp1

0x6a6c,	// (0x0002530b) list_ai_message_pane_ParamLimits

0x6a6c,	// (0x0002530b) list_ai_message_pane

0x4b5e,	// (0x000233fd) scroll_pane_cp10

0x6a08,	// (0x000252a7) list_ai_message_pane_g1

0x6a10,	// (0x000252af) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x0002e206) list_ai_message_pane_g

0x6a18,	// (0x000252b7) list_ai_message_pane_t1_ParamLimits

0x6a18,	// (0x000252b7) list_ai_message_pane_t1

0x6a2d,	// (0x000252cc) list_ai_message_pane_t2_ParamLimits

0x6a2d,	// (0x000252cc) list_ai_message_pane_t2

0x6a42,	// (0x000252e1) list_ai_message_pane_t3_ParamLimits

0x6a42,	// (0x000252e1) list_ai_message_pane_t3

0x6a57,	// (0x000252f6) list_ai_message_pane_t4_ParamLimits

0x6a57,	// (0x000252f6) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x0002e20b) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x0002e20b) list_ai_message_pane_t

0xabe5,	// (0x00029484) cell_ai_soft_ind_pane_ParamLimits

0xabe5,	// (0x00029484) cell_ai_soft_ind_pane

0x54a6,	// (0x00023d45) cell_ai_soft_ind_pane_g1_ParamLimits

0x54a6,	// (0x00023d45) cell_ai_soft_ind_pane_g1

0x43e2,	// (0x00022c81) grid_highlight_cp1

0x54b3,	// (0x00023d52) text_secondary_cp56_ParamLimits

0x54b3,	// (0x00023d52) text_secondary_cp56

0x69dd,	// (0x0002527c) example_general_pane_ParamLimits

0x69dd,	// (0x0002527c) example_general_pane

0x69e9,	// (0x00025288) example_parent_pane_g1_ParamLimits

0x69e9,	// (0x00025288) example_parent_pane_g1

0x69f5,	// (0x00025294) example_parent_pane_t1_ParamLimits

0x69f5,	// (0x00025294) example_parent_pane_t1

0xa211,	// (0x00028ab0) popup_preview_text_window_ParamLimits

0xa211,	// (0x00028ab0) popup_preview_text_window

0x5395,	// (0x00023c34) list_single_pane_cp2_g4

0x4619,	// (0x00022eb8) bg_popup_preview_window_pane_ParamLimits

0x4619,	// (0x00022eb8) bg_popup_preview_window_pane

0x6752,	// (0x00024ff1) popup_preview_text_window_t1_ParamLimits

0x6752,	// (0x00024ff1) popup_preview_text_window_t1

0x679a,	// (0x00025039) popup_preview_text_window_t2_ParamLimits

0x679a,	// (0x00025039) popup_preview_text_window_t2

0x67e3,	// (0x00025082) popup_preview_text_window_t3_ParamLimits

0x67e3,	// (0x00025082) popup_preview_text_window_t3

0x6828,	// (0x000250c7) popup_preview_text_window_t4_ParamLimits

0x6828,	// (0x000250c7) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0002e1da) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0002e1da) popup_preview_text_window_t

0x68a6,	// (0x00025145) scroll_pane_cp11

0x59ee,	// (0x0002428d) bg_popup_preview_window_pane_g1

0x6712,	// (0x00024fb1) bg_popup_preview_window_pane_g2

0x671a,	// (0x00024fb9) bg_popup_preview_window_pane_g3

0x6722,	// (0x00024fc1) bg_popup_preview_window_pane_g4

0x672a,	// (0x00024fc9) bg_popup_preview_window_pane_g5

0x6732,	// (0x00024fd1) bg_popup_preview_window_pane_g6

0x673a,	// (0x00024fd9) bg_popup_preview_window_pane_g7

0x6742,	// (0x00024fe1) bg_popup_preview_window_pane_g8

0x8ee3,	// (0x00027782) aid_popup_width_pane

0xa1ef,	// (0x00028a8e) popup_midp_note_alarm_window_ParamLimits

0xa1ef,	// (0x00028a8e) popup_midp_note_alarm_window

0x4a33,	// (0x000232d2) data_form_pane_ParamLimits

0xd243,	// (0x0002bae2) form_field_data_pane_g1

0xd24d,	// (0x0002baec) form_field_data_pane_t1_ParamLimits

0x4a3f,	// (0x000232de) input_focus_pane_ParamLimits

0x4a4d,	// (0x000232ec) data_form_wide_pane_ParamLimits

0xd265,	// (0x0002bb04) form_field_data_wide_pane_g1

0xd271,	// (0x0002bb10) form_field_data_wide_pane_t1_ParamLimits

0x47ba,	// (0x00023059) input_focus_pane_cp6_ParamLimits

0x9695,	// (0x00027f34) input_popup_find_pane_g1_ParamLimits

0x9695,	// (0x00027f34) input_popup_find_pane_g1

0x97ec,	// (0x0002808b) aid_navi_side_left_pane

0x9801,	// (0x000280a0) aid_navi_side_right_pane

0x61d7,	// (0x00024a76) bg_popup_window_pane_cp30_ParamLimits

0x61d7,	// (0x00024a76) bg_popup_window_pane_cp30

0x6251,	// (0x00024af0) popup_midp_note_alarm_window_g1_ParamLimits

0x6251,	// (0x00024af0) popup_midp_note_alarm_window_g1

0x6281,	// (0x00024b20) popup_midp_note_alarm_window_t1_ParamLimits

0x6281,	// (0x00024b20) popup_midp_note_alarm_window_t1

0x6322,	// (0x00024bc1) popup_midp_note_alarm_window_t2_ParamLimits

0x6322,	// (0x00024bc1) popup_midp_note_alarm_window_t2

0x63d0,	// (0x00024c6f) popup_midp_note_alarm_window_t3_ParamLimits

0x63d0,	// (0x00024c6f) popup_midp_note_alarm_window_t3

0x6402,	// (0x00024ca1) popup_midp_note_alarm_window_t4_ParamLimits

0x6402,	// (0x00024ca1) popup_midp_note_alarm_window_t4

0x6428,	// (0x00024cc7) popup_midp_note_alarm_window_t5_ParamLimits

0x6428,	// (0x00024cc7) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x0002e177) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x0002e177) popup_midp_note_alarm_window_t

0x64d4,	// (0x00024d73) wait_bar_pane_cp1_ParamLimits

0x64d4,	// (0x00024d73) wait_bar_pane_cp1

0x43e2,	// (0x00022c81) wait_anim_pane_copy1

0x43e2,	// (0x00022c81) wait_border_pane_copy1

0x5ef7,	// (0x00024796) wait_border_pane_g1_copy1

0xd28b,	// (0x0002bb2a) form_field_popup_pane_g1

0xd293,	// (0x0002bb32) form_field_popup_pane_t1_ParamLimits

0x4a3f,	// (0x000232de) input_focus_pane_cp7_ParamLimits

0x4a79,	// (0x00023318) list_form_pane_ParamLimits

0xd2ab,	// (0x0002bb4a) form_field_popup_wide_pane_g1

0xd2b3,	// (0x0002bb52) form_field_popup_wide_pane_t1_ParamLimits

0x4a3f,	// (0x000232de) input_focus_pane_cp8_ParamLimits

0x4a85,	// (0x00023324) list_form_wide_pane_ParamLimits

0x6c3c,	// (0x000254db) aid_size_cell_graphic_pane

0xd33d,	// (0x0002bbdc) data_form_pane_t1_ParamLimits

0xd584,	// (0x0002be23) data_form_wide_pane_t1_ParamLimits

0xa45b,	// (0x00028cfa) bg_status_flat_pane

0x92f0,	// (0x00027b8f) title_pane_t1_ParamLimits

0x43f8,	// (0x00022c97) title_pane_t2_ParamLimits

0x441e,	// (0x00022cbd) title_pane_t3_ParamLimits

0xf59b,	// (0x0002de3a) title_pane_t_ParamLimits

0x4f0c,	// (0x000237ab) level_1_signal_ParamLimits

0x4f19,	// (0x000237b8) level_2_signal_ParamLimits

0x4f26,	// (0x000237c5) level_3_signal_ParamLimits

0x4f33,	// (0x000237d2) level_4_signal_ParamLimits

0x4f40,	// (0x000237df) level_5_signal_ParamLimits

0x4f4d,	// (0x000237ec) level_6_signal_ParamLimits

0x4f5a,	// (0x000237f9) level_7_signal_ParamLimits

0x4f0c,	// (0x000237ab) level_1_battery_ParamLimits

0x4f19,	// (0x000237b8) level_2_battery_ParamLimits

0x4f26,	// (0x000237c5) level_3_battery_ParamLimits

0x4f33,	// (0x000237d2) level_4_battery_ParamLimits

0x4f40,	// (0x000237df) level_5_battery_ParamLimits

0x4f4d,	// (0x000237ec) level_6_battery_ParamLimits

0x4f5a,	// (0x000237f9) level_7_battery_ParamLimits

0x60fa,	// (0x00024999) bg_status_flat_pane_g1

0x6102,	// (0x000249a1) bg_status_flat_pane_g2

0x610a,	// (0x000249a9) bg_status_flat_pane_g3

0x6112,	// (0x000249b1) bg_status_flat_pane_g4

0x611a,	// (0x000249b9) bg_status_flat_pane_g5

0x6122,	// (0x000249c1) bg_status_flat_pane_g6

0x612a,	// (0x000249c9) bg_status_flat_pane_g7

0x9360,	// (0x00027bff) tabs_3_active_pane_t1_ParamLimits

0x9360,	// (0x00027bff) tabs_3_passive_pane_t1_ParamLimits

0x937a,	// (0x00027c19) tabs_4_active_pane_t1_ParamLimits

0x937a,	// (0x00027c19) tabs_4_1_passive_pane_t1_ParamLimits

0x96a9,	// (0x00027f48) tabs_2_active_pane_t1_ParamLimits

0x96a9,	// (0x00027f48) tabs_2_passive_pane_t1_ParamLimits

0x5817,	// (0x000240b6) bg_active_tab_pane_cp4_ParamLimits

0x96bb,	// (0x00027f5a) tabs_2_long_active_pane_t1_ParamLimits

0x96ce,	// (0x00027f6d) bg_passive_tab_pane_cp4_ParamLimits

0xa765,	// (0x00029004) list_single_midp_graphic_pane_t1_ParamLimits

0x5817,	// (0x000240b6) bg_active_tab_pane_cp5_ParamLimits

0x96da,	// (0x00027f79) tabs_3_long_active_pane_t1_ParamLimits

0x96ce,	// (0x00027f6d) bg_passive_tab_pane_cp5_ParamLimits

0xa765,	// (0x00029004) list_single_midp_graphic_pane_t1

0xa45b,	// (0x00028cfa) bg_status_flat_pane_ParamLimits

0x58bf,	// (0x0002415e) indicator_pane_cp2_ParamLimits

0x58bf,	// (0x0002415e) indicator_pane_cp2

0xa59e,	// (0x00028e3d) navi_pane_srt_ParamLimits

0xa59e,	// (0x00028e3d) navi_pane_srt

0x58e7,	// (0x00024186) popup_clock_digital_analogue_window_cp1

0x4482,	// (0x00022d21) indicator_pane_t1

0x5464,	// (0x00023d03) copy_highlight_pane

0x5464,	// (0x00023d03) cursor_graphics_pane

0x5464,	// (0x00023d03) graphic_within_text_pane

0x5464,	// (0x00023d03) link_highlight_pane

0x6869,	// (0x00025108) popup_preview_text_window_t5_ParamLimits

0x6869,	// (0x00025108) popup_preview_text_window_t5

0x54cd,	// (0x00023d6c) cursor_digital_pane

0x54cd,	// (0x00023d6c) cursor_primary_pane

0x54de,	// (0x00023d7d) cursor_primary_small_pane

0x54e6,	// (0x00023d85) cursor_secondary_pane

0x54ee,	// (0x00023d8d) cursor_title_pane

0x54cd,	// (0x00023d6c) link_highlight_digital_pane

0x54d5,	// (0x00023d74) link_highlight_primary_pane

0x54de,	// (0x00023d7d) link_highlight_primary_small_pane

0x54e6,	// (0x00023d85) link_highlight_secondary_pane

0x54ee,	// (0x00023d8d) link_highlight_title_pane

0x54cd,	// (0x00023d6c) copy_highlight_digital_pane

0x54cd,	// (0x00023d6c) copy_highlight_primary_pane

0x54de,	// (0x00023d7d) copy_highlight_primary_small_pane

0x54e6,	// (0x00023d85) copy_highlight_secondary_pane

0x54ee,	// (0x00023d8d) copy_highlight_title_pane

0x54e6,	// (0x00023d85) graphic_text_digital_pane

0x617a,	// (0x00024a19) graphic_text_primary_pane

0x6183,	// (0x00024a22) graphic_text_primary_small_pane

0x54de,	// (0x00023d7d) graphic_text_secondary_pane

0x54cd,	// (0x00023d6c) graphic_text_title_pane

0x9d00,	// (0x0002859f) cursor_primary_pane_g1

0x616c,	// (0x00024a0b) cursor_text_primary_t1

0xa95d,	// (0x000291fc) cursor_primary_small_pane_g1

0x615e,	// (0x000249fd) cursor_text_primary_small_t1

0xa953,	// (0x000291f2) cursor_primary_small_pane_g1_copy1

0x6150,	// (0x000249ef) cursor_text_primary_small_t1_copy1

0x6142,	// (0x000249e1) cursor_text_title_t1

0xa949,	// (0x000291e8) cursor_title_pane_g1

0x9d00,	// (0x0002859f) cursor_digital_pane_g1

0x54f6,	// (0x00023d95) cursor_text_digital_t1

0x551b,	// (0x00023dba) link_highlight_primary_pane_g1

0x60eb,	// (0x0002498a) link_highlight_primary_pane_t1

0x5504,	// (0x00023da3) link_highlight_primary_small_pane_g1

0x550c,	// (0x00023dab) link_highlight_primary_small_pane_t1

0x551b,	// (0x00023dba) link_highlight_secondary_pane_g1

0x5523,	// (0x00023dc2) link_highlight_secondary_pane_t1

0x605f,	// (0x000248fe) link_highlight_title_pane_g1

0x6067,	// (0x00024906) link_highlight_title_pane_t1

0x6048,	// (0x000248e7) link_highlight_digital_pane_g1

0x6050,	// (0x000248ef) link_highlight_digital_pane_t1

0x5f3c,	// (0x000247db) copy_highlight_primary_pane_g1

0x5f44,	// (0x000247e3) copy_highlight_primary_pane_t1

0x5f16,	// (0x000247b5) copy_highlight_primary_small_pane_g1

0x5f2d,	// (0x000247cc) copy_highlight_primary_small_pane_t1

0x5532,	// (0x00023dd1) copy_highlight_secondary_pane_g1

0x553a,	// (0x00023dd9) copy_highlight_secondary_pane_t1

0x5f16,	// (0x000247b5) copy_highlight_title_pane_g1

0x5f1e,	// (0x000247bd) copy_highlight_title_pane_t1

0x5f3c,	// (0x000247db) copy_highlight_digital_pane_g1

0x6dc2,	// (0x00025661) copy_highlight_digital_pane_t1

0x6d16,	// (0x000255b5) graphic_text_primary_pane_g1

0x6da6,	// (0x00025645) graphic_text_primary_pane_t1

0x6db4,	// (0x00025653) graphic_text_primary_pane_t2

0x0001,

0xfa07,	// (0x0002e2a6) graphic_text_primary_pane_t

0x6d82,	// (0x00025621) graphic_text_primary_small_pane_g1

0x6d8a,	// (0x00025629) graphic_text_primary_small_pane_t1

0x6d98,	// (0x00025637) graphic_text_primary_small_pane_t2

0x0001,

0xfa02,	// (0x0002e2a1) graphic_text_primary_small_pane_t

0x6d5e,	// (0x000255fd) graphic_text_secondary_pane_g1

0x6d66,	// (0x00025605) graphic_text_secondary_pane_t1

0x6d74,	// (0x00025613) graphic_text_secondary_pane_t2

0x0001,

0xf9fd,	// (0x0002e29c) graphic_text_secondary_pane_t

0x6d3a,	// (0x000255d9) graphic_text_title_pane_g1

0x6d42,	// (0x000255e1) graphic_text_title_pane_t1

0x6d50,	// (0x000255ef) graphic_text_title_pane_t2

0x0001,

0xf9f8,	// (0x0002e297) graphic_text_title_pane_t

0x6d16,	// (0x000255b5) graphic_text_digital_pane_g1

0x6d1e,	// (0x000255bd) graphic_text_digital_pane_t1

0x6d2c,	// (0x000255cb) graphic_text_digital_pane_t2

0x0001,

0xf9f3,	// (0x0002e292) graphic_text_digital_pane_t

0x443e,	// (0x00022cdd) navi_icon_pane_srt_ParamLimits

0x443e,	// (0x00022cdd) navi_icon_pane_srt

0x43e2,	// (0x00022c81) navi_midp_pane_srt

0x43e2,	// (0x00022c81) navi_navi_pane_srt

0x443e,	// (0x00022cdd) navi_text_pane_srt_ParamLimits

0x443e,	// (0x00022cdd) navi_text_pane_srt

0x6ce1,	// (0x00025580) navi_navi_icon_text_pane_srt

0x6cfb,	// (0x0002559a) navi_navi_pane_srt_g1_ParamLimits

0x6cfb,	// (0x0002559a) navi_navi_pane_srt_g1

0x6ce9,	// (0x00025588) navi_navi_pane_srt_g2_ParamLimits

0x6ce9,	// (0x00025588) navi_navi_pane_srt_g2

0x0001,

0xf9ee,	// (0x0002e28d) navi_navi_pane_srt_g_ParamLimits

0xf9ee,	// (0x0002e28d) navi_navi_pane_srt_g

0x6d0d,	// (0x000255ac) navi_navi_tabs_pane_srt

0x6ce1,	// (0x00025580) navi_navi_text_pane_srt

0x6ce1,	// (0x00025580) navi_navi_volume_pane_srt

0x6cd2,	// (0x00025571) navi_navi_text_pane_srt_t1

0xaff2,	// (0x00029891) navi_navi_volume_pane_srt_g1

0xaffa,	// (0x00029899) volume_small_pane_srt_ParamLimits

0xaffa,	// (0x00029899) volume_small_pane_srt

0x9d0a,	// (0x000285a9) volume_small_pane_srt_g1_ParamLimits

0x9d0a,	// (0x000285a9) volume_small_pane_srt_g1

0x9d1a,	// (0x000285b9) volume_small_pane_srt_g2_ParamLimits

0x9d1a,	// (0x000285b9) volume_small_pane_srt_g2

0x9d2b,	// (0x000285ca) volume_small_pane_srt_g3_ParamLimits

0x9d2b,	// (0x000285ca) volume_small_pane_srt_g3

0x9d3c,	// (0x000285db) volume_small_pane_srt_g4_ParamLimits

0x9d3c,	// (0x000285db) volume_small_pane_srt_g4

0x9d4d,	// (0x000285ec) volume_small_pane_srt_g5_ParamLimits

0x9d4d,	// (0x000285ec) volume_small_pane_srt_g5

0x9d5e,	// (0x000285fd) volume_small_pane_srt_g6_ParamLimits

0x9d5e,	// (0x000285fd) volume_small_pane_srt_g6

0x9d6f,	// (0x0002860e) volume_small_pane_srt_g7_ParamLimits

0x9d6f,	// (0x0002860e) volume_small_pane_srt_g7

0x9d80,	// (0x0002861f) volume_small_pane_srt_g8_ParamLimits

0x9d80,	// (0x0002861f) volume_small_pane_srt_g8

0x9d91,	// (0x00028630) volume_small_pane_srt_g9_ParamLimits

0x9d91,	// (0x00028630) volume_small_pane_srt_g9

0x9da2,	// (0x00028641) volume_small_pane_srt_g10_ParamLimits

0x9da2,	// (0x00028641) volume_small_pane_srt_g10

0x0009,

0xf79d,	// (0x0002e03c) volume_small_pane_srt_g_ParamLimits

0xf79d,	// (0x0002e03c) volume_small_pane_srt_g

0x46c2,	// (0x00022f61) query_popup_data_pane_cp2

0x6cb8,	// (0x00025557) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6cb8,	// (0x00025557) navi_navi_icon_text_pane_srt_t1

0x617a,	// (0x00024a19) navi_tabs_2_long_pane_srt

0x617a,	// (0x00024a19) navi_tabs_2_pane_srt

0x617a,	// (0x00024a19) navi_tabs_3_long_pane_srt

0x617a,	// (0x00024a19) navi_tabs_3_pane_srt

0x617a,	// (0x00024a19) navi_tabs_4_pane_srt

0xafd2,	// (0x00029871) tabs_2_active_pane_srt_ParamLimits

0xafd2,	// (0x00029871) tabs_2_active_pane_srt

0xafe2,	// (0x00029881) tabs_2_passive_pane_srt_ParamLimits

0xafe2,	// (0x00029881) tabs_2_passive_pane_srt

0x4b97,	// (0x00023436) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4b97,	// (0x00023436) bg_passive_tab_pane_cp1_srt

0x6c9f,	// (0x0002553e) bg_passive_tab_pane_g1_cp1_srt

0x5138,	// (0x000239d7) bg_passive_tab_pane_g2_cp1_srt

0x6c96,	// (0x00025535) bg_passive_tab_pane_g3_cp1_srt

0x443e,	// (0x00022cdd) bg_active_tab_pane_cp1_srt_ParamLimits

0x443e,	// (0x00022cdd) bg_active_tab_pane_cp1_srt

0x6ca8,	// (0x00025547) tabs_2_active_pane_srt_g1

0xafc0,	// (0x0002985f) tabs_2_active_pane_srt_t1_ParamLimits

0xafc0,	// (0x0002985f) tabs_2_active_pane_srt_t1

0x6c9f,	// (0x0002553e) bg_active_tab_pane_g1_cp1_srt

0x5138,	// (0x000239d7) bg_active_tab_pane_g2_cp1_srt

0x6c96,	// (0x00025535) bg_active_tab_pane_g3_cp1_srt

0xaf8d,	// (0x0002982c) tabs_3_active_pane_srt_ParamLimits

0xaf8d,	// (0x0002982c) tabs_3_active_pane_srt

0xaf9e,	// (0x0002983d) tabs_3_passive_pane_cp_srt_ParamLimits

0xaf9e,	// (0x0002983d) tabs_3_passive_pane_cp_srt

0xafaf,	// (0x0002984e) tabs_3_passive_pane_srt_ParamLimits

0xafaf,	// (0x0002984e) tabs_3_passive_pane_srt

0x4b97,	// (0x00023436) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4b97,	// (0x00023436) bg_passive_tab_pane_cp2_srt

0x5552,	// (0x00023df1) bg_passive_tab_pane_g1_cp2_srt

0x5138,	// (0x000239d7) bg_passive_tab_pane_g2_cp2_srt

0x5549,	// (0x00023de8) bg_passive_tab_pane_g3_cp2_srt

0x443e,	// (0x00022cdd) bg_active_tab_pane_cp2_srt_ParamLimits

0x443e,	// (0x00022cdd) bg_active_tab_pane_cp2_srt

0x6c8e,	// (0x0002552d) tabs_3_active_pane_srt_g1

0xaf7b,	// (0x0002981a) tabs_3_active_pane_srt_t1_ParamLimits

0xaf7b,	// (0x0002981a) tabs_3_active_pane_srt_t1

0x5552,	// (0x00023df1) bg_active_tab_pane_g1_cp2_srt

0x5138,	// (0x000239d7) bg_active_tab_pane_g2_cp2_srt

0x5549,	// (0x00023de8) bg_active_tab_pane_g3_cp2_srt

0xaf33,	// (0x000297d2) tabs_4_active_pane_srt_ParamLimits

0xaf33,	// (0x000297d2) tabs_4_active_pane_srt

0xaf45,	// (0x000297e4) tabs_4_passive_pane_cp2_srt_ParamLimits

0xaf45,	// (0x000297e4) tabs_4_passive_pane_cp2_srt

0x5676,	// (0x00023f15) aid_size_cell_toolbar

0x96ce,	// (0x00027f6d) main_idle_act_pane_ParamLimits

0x5742,	// (0x00023fe1) popup_large_graphic_colour_window_ParamLimits

0xa367,	// (0x00028c06) popup_toolbar_window_ParamLimits

0xa367,	// (0x00028c06) popup_toolbar_window

0x6bba,	// (0x00025459) list_single_graphic_2heading_pane_ParamLimits

0x6bba,	// (0x00025459) list_single_graphic_2heading_pane

0x4d41,	// (0x000235e0) aid_size_cell_apps_grid_lsc_pane

0x4d53,	// (0x000235f2) aid_size_cell_apps_grid_prt_pane

0x4b97,	// (0x00023436) bg_wml_button_pane_cp1_ParamLimits

0x4b97,	// (0x00023436) bg_wml_button_pane_cp1

0xa8de,	// (0x0002917d) form_midp_field_text_pane_t1_ParamLimits

0x5ade,	// (0x0002437d) input_focus_pane_cp050_ParamLimits

0x5c26,	// (0x000244c5) list_midp_form_text_pane_ParamLimits

0x5c03,	// (0x000244a2) input_focus_pane_cp051_ParamLimits

0x5c17,	// (0x000244b6) list_midp_choice_pane_ParamLimits

0xa844,	// (0x000290e3) list_single_2graphic_pane_cp3_ParamLimits

0xa844,	// (0x000290e3) list_single_2graphic_pane_cp3

0xa868,	// (0x00029107) list_single_midp_graphic_pane_ParamLimits

0xa868,	// (0x00029107) list_single_midp_graphic_pane

0x8e4f,	// (0x000276ee) list_single_graphic_2heading_pane_g1_ParamLimits

0x8e4f,	// (0x000276ee) list_single_graphic_2heading_pane_g1

0x8e5b,	// (0x000276fa) list_single_graphic_2heading_pane_g4_ParamLimits

0x8e5b,	// (0x000276fa) list_single_graphic_2heading_pane_g4

0x8e67,	// (0x00027706) list_single_graphic_2heading_pane_g5_ParamLimits

0x8e67,	// (0x00027706) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f0,	// (0x0002e08f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f0,	// (0x0002e08f) list_single_graphic_2heading_pane_g

0x8e73,	// (0x00027712) list_single_graphic_2heading_pane_t1_ParamLimits

0x8e73,	// (0x00027712) list_single_graphic_2heading_pane_t1

0x8e87,	// (0x00027726) list_single_graphic_2heading_pane_t2_ParamLimits

0x8e87,	// (0x00027726) list_single_graphic_2heading_pane_t2

0x8ea3,	// (0x00027742) list_single_graphic_2heading_pane_t3_ParamLimits

0x8ea3,	// (0x00027742) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f7,	// (0x0002e096) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f7,	// (0x0002e096) list_single_graphic_2heading_pane_t

0x592c,	// (0x000241cb) bg_popup_sub_pane_cp2

0x5956,	// (0x000241f5) grid_toobar_pane

0xa6d4,	// (0x00028f73) cell_toolbar_pane_ParamLimits

0xa6d4,	// (0x00028f73) cell_toolbar_pane

0x5992,	// (0x00024231) cell_toolbar_pane_g1_ParamLimits

0x5992,	// (0x00024231) cell_toolbar_pane_g1

0x59a6,	// (0x00024245) cell_toolbar_pane_g2_ParamLimits

0x59a6,	// (0x00024245) cell_toolbar_pane_g2

0x0001,

0xf805,	// (0x0002e0a4) cell_toolbar_pane_g_ParamLimits

0xf805,	// (0x0002e0a4) cell_toolbar_pane_g

0x59c8,	// (0x00024267) grid_highlight_pane_cp2_ParamLimits

0x59c8,	// (0x00024267) grid_highlight_pane_cp2

0x59e2,	// (0x00024281) toolbar_button_pane

0x59ee,	// (0x0002428d) toolbar_button_pane_g1

0x59fe,	// (0x0002429d) toolbar_button_pane_g2

0x59f6,	// (0x00024295) toolbar_button_pane_g3

0x5a0e,	// (0x000242ad) toolbar_button_pane_g4

0x5a06,	// (0x000242a5) toolbar_button_pane_g5

0x5a16,	// (0x000242b5) toolbar_button_pane_g6

0x5a1e,	// (0x000242bd) toolbar_button_pane_g7

0x5a2e,	// (0x000242cd) toolbar_button_pane_g8

0x5a26,	// (0x000242c5) toolbar_button_pane_g9

0x0009,

0xf80a,	// (0x0002e0a9) toolbar_button_pane_g

0xa70c,	// (0x00028fab) list_single_2graphic_pane_g1_cp3_ParamLimits

0xa70c,	// (0x00028fab) list_single_2graphic_pane_g1_cp3

0xa718,	// (0x00028fb7) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa718,	// (0x00028fb7) list_single_2graphic_pane_g2_cp3

0xa729,	// (0x00028fc8) list_single_2graphic_pane_g3_cp3

0xa731,	// (0x00028fd0) list_single_2graphic_pane_g4_cp3_ParamLimits

0xa731,	// (0x00028fd0) list_single_2graphic_pane_g4_cp3

0xa73d,	// (0x00028fdc) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa73d,	// (0x00028fdc) list_single_2graphic_pane_t1_cp3

0xa759,	// (0x00028ff8) list_single_midp_graphic_pane_g2_ParamLimits

0xa759,	// (0x00028ff8) list_single_midp_graphic_pane_g2

0x567e,	// (0x00023f1d) aid_zoom_text_primary

0xd473,	// (0x0002bd12) aid_zoom_text_secondary

0x5606,	// (0x00023ea5) status_small_pane_g7_ParamLimits

0x5606,	// (0x00023ea5) status_small_pane_g7

0x5629,	// (0x00023ec8) status_small_pane_t1_ParamLimits

0x92d3,	// (0x00027b72) title_pane_g2

0x0003,

0xf592,	// (0x0002de31) title_pane_g

0x9531,	// (0x00027dd0) aid_size_cell_colour_1_pane_ParamLimits

0x9531,	// (0x00027dd0) aid_size_cell_colour_1_pane

0x9545,	// (0x00027de4) aid_size_cell_colour_2_pane_ParamLimits

0x9545,	// (0x00027de4) aid_size_cell_colour_2_pane

0x9559,	// (0x00027df8) aid_size_cell_colour_3_pane_ParamLimits

0x9559,	// (0x00027df8) aid_size_cell_colour_3_pane

0x956d,	// (0x00027e0c) aid_size_cell_colour_4_pane_ParamLimits

0x956d,	// (0x00027e0c) aid_size_cell_colour_4_pane

0x9728,	// (0x00027fc7) title_pane_stacon_g1_ParamLimits

0x9728,	// (0x00027fc7) title_pane_stacon_g1

0x5f9b,	// (0x0002483a) popup_note_wait_window_g3_ParamLimits

0x5f9b,	// (0x0002483a) popup_note_wait_window_g3

0x6011,	// (0x000248b0) popup_note_wait_window_t5_ParamLimits

0x6011,	// (0x000248b0) popup_note_wait_window_t5

0x43e2,	// (0x00022c81) main_feb_china_hwr_fs_writing_pane

0x9f8a,	// (0x00028829) popup_feb_china_hwr_fs_window_ParamLimits

0x9f8a,	// (0x00028829) popup_feb_china_hwr_fs_window

0xa77b,	// (0x0002901a) aid_size_cell_hwr_fs_ParamLimits

0xa77b,	// (0x0002901a) aid_size_cell_hwr_fs

0x5ade,	// (0x0002437d) bg_popup_sub_pane_cp3_ParamLimits

0x5ade,	// (0x0002437d) bg_popup_sub_pane_cp3

0xa790,	// (0x0002902f) grid_hwr_fs_pane_ParamLimits

0xa790,	// (0x0002902f) grid_hwr_fs_pane

0xa7a8,	// (0x00029047) linegrid_hwr_fs_pane_ParamLimits

0xa7a8,	// (0x00029047) linegrid_hwr_fs_pane

0xa7b8,	// (0x00029057) cell_hwr_fs_pane_ParamLimits

0xa7b8,	// (0x00029057) cell_hwr_fs_pane

0x5aea,	// (0x00024389) linegrid_hwr_fs_pane_g1_ParamLimits

0x5aea,	// (0x00024389) linegrid_hwr_fs_pane_g1

0xa7da,	// (0x00029079) linegrid_hwr_fs_pane_g2_ParamLimits

0xa7da,	// (0x00029079) linegrid_hwr_fs_pane_g2

0x5af6,	// (0x00024395) linegrid_hwr_fs_pane_g3_ParamLimits

0x5af6,	// (0x00024395) linegrid_hwr_fs_pane_g3

0xa7ec,	// (0x0002908b) linegrid_hwr_fs_pane_g4_ParamLimits

0xa7ec,	// (0x0002908b) linegrid_hwr_fs_pane_g4

0xa806,	// (0x000290a5) linegrid_hwr_fs_pane_g5_ParamLimits

0xa806,	// (0x000290a5) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0002e0d4) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0002e0d4) linegrid_hwr_fs_pane_g

0x5b02,	// (0x000243a1) cell_hwr_fs_pane_g1_ParamLimits

0x5b02,	// (0x000243a1) cell_hwr_fs_pane_g1

0x58f8,	// (0x00024197) cell_hwr_fs_pane_g2_ParamLimits

0x58f8,	// (0x00024197) cell_hwr_fs_pane_g2

0xa81c,	// (0x000290bb) cell_hwr_fs_pane_g3_ParamLimits

0xa81c,	// (0x000290bb) cell_hwr_fs_pane_g3

0xa829,	// (0x000290c8) cell_hwr_fs_pane_g4_ParamLimits

0xa829,	// (0x000290c8) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x0002e0df) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x0002e0df) cell_hwr_fs_pane_g

0xa836,	// (0x000290d5) cell_hwr_fs_pane_t1

0x43e2,	// (0x00022c81) grid_highlight_pane_cp6

0x43e2,	// (0x00022c81) main_idle_act2_pane

0x4b45,	// (0x000233e4) aid_inside_area_popup_secondary

0xaad0,	// (0x0002936f) aid_inside_area_window_primary_ParamLimits

0xaad0,	// (0x0002936f) aid_inside_area_window_primary

0x6dd1,	// (0x00025670) ai2_news_ticker_pane

0x6dd9,	// (0x00025678) aid_size_cell_ai1_link_ParamLimits

0x6dd9,	// (0x00025678) aid_size_cell_ai1_link

0xb00f,	// (0x000298ae) popup_ai2_data_window_ParamLimits

0xb00f,	// (0x000298ae) popup_ai2_data_window

0x6df3,	// (0x00025692) popup_ai2_link_window_ParamLimits

0x6df3,	// (0x00025692) popup_ai2_link_window

0x5ade,	// (0x0002437d) bg_popup_sub_pane_cp4_ParamLimits

0x5ade,	// (0x0002437d) bg_popup_sub_pane_cp4

0x6e07,	// (0x000256a6) grid_ai2_link_pane_ParamLimits

0x6e07,	// (0x000256a6) grid_ai2_link_pane

0x6e1e,	// (0x000256bd) popup_ai2_link_window_g1_ParamLimits

0x6e1e,	// (0x000256bd) popup_ai2_link_window_g1

0x6e2a,	// (0x000256c9) popup_ai2_link_window_g2_ParamLimits

0x6e2a,	// (0x000256c9) popup_ai2_link_window_g2

0x0001,

0xfa0c,	// (0x0002e2ab) popup_ai2_link_window_g_ParamLimits

0xfa0c,	// (0x0002e2ab) popup_ai2_link_window_g

0x6e39,	// (0x000256d8) ai2_mp_button_pane

0x6e41,	// (0x000256e0) ai2_mp_volume_pane

0x5c03,	// (0x000244a2) bg_popup_sub_pane_cp5_ParamLimits

0x5c03,	// (0x000244a2) bg_popup_sub_pane_cp5

0x6e49,	// (0x000256e8) heading_ai2_gene_pane_ParamLimits

0x6e49,	// (0x000256e8) heading_ai2_gene_pane

0x6e55,	// (0x000256f4) list_ai2_gene_pane_ParamLimits

0x6e55,	// (0x000256f4) list_ai2_gene_pane

0x6e9d,	// (0x0002573c) cell_ai2_link_pane_ParamLimits

0x6e9d,	// (0x0002573c) cell_ai2_link_pane

0x6eb3,	// (0x00025752) cell_ai2_link_pane_g1

0x43e2,	// (0x00022c81) grid_highlight_pane_cp7

0xb058,	// (0x000298f7) ai2_mp_volume_pane_g1

0x6f58,	// (0x000257f7) ai2_mp_volume_pane_g2

0xb03c,	// (0x000298db) list_ai2_gene_pane_t1

0x6f50,	// (0x000257ef) ai2_mp_volume_pane_g3

0x0002,

0xfa25,	// (0x0002e2c4) ai2_mp_volume_pane_g

0xb060,	// (0x000298ff) volume_small_pane_cp3

0x6f60,	// (0x000257ff) aid_size_cell_ai2_button

0x6f68,	// (0x00025807) grid_ai2_button_pane

0x6f71,	// (0x00025810) cell_ai2_button_pane_ParamLimits

0x6f71,	// (0x00025810) cell_ai2_button_pane

0x43d8,	// (0x00022c77) cell_ai2_button_pane_g1

0x43e2,	// (0x00022c81) grid_highlight_pane_cp8

0x6f10,	// (0x000257af) ai2_gene_pane_t1_ParamLimits

0x6f10,	// (0x000257af) ai2_gene_pane_t1

0x9f26,	// (0x000287c5) aid_height_parent_landscape

0xace7,	// (0x00029586) aid_height_set_list

0x677c,	// (0x0002501b) aid_size_parent

0x6c3c,	// (0x000254db) aid_size_cell_graphic_pane_ParamLimits

0x6e65,	// (0x00025704) popup_ai2_data_window_g1_ParamLimits

0x6e65,	// (0x00025704) popup_ai2_data_window_g1

0x6e71,	// (0x00025710) ai2_news_ticker_pane_g1

0x6e79,	// (0x00025718) ai2_news_ticker_pane_g2

0x0001,

0xfa11,	// (0x0002e2b0) ai2_news_ticker_pane_g

0x6e81,	// (0x00025720) ai2_news_ticker_pane_t1

0x6e8f,	// (0x0002572e) ai2_news_ticker_pane_t2

0x0001,

0xfa16,	// (0x0002e2b5) ai2_news_ticker_pane_t

0x6ebc,	// (0x0002575b) heading_ai2_gene_pane_g1

0x6ec4,	// (0x00025763) heading_ai2_gene_pane_t1_ParamLimits

0x6ec4,	// (0x00025763) heading_ai2_gene_pane_t1

0x6ed9,	// (0x00025778) list_highlight_pane_cp6

0xb025,	// (0x000298c4) ai2_gene_pane_ParamLimits

0xb025,	// (0x000298c4) ai2_gene_pane

0xb04a,	// (0x000298e9) list_ai2_gene_pane_t2

0x0001,

0xfa1b,	// (0x0002e2ba) list_ai2_gene_pane_t

0x6ee1,	// (0x00025780) list_highlight_pane_cp8_ParamLimits

0x6ee1,	// (0x00025780) list_highlight_pane_cp8

0x6ef2,	// (0x00025791) ai2_gene_pane_g1_ParamLimits

0x6ef2,	// (0x00025791) ai2_gene_pane_g1

0x6f04,	// (0x000257a3) ai2_gene_pane_g2_ParamLimits

0x6f04,	// (0x000257a3) ai2_gene_pane_g2

0x0001,

0xfa20,	// (0x0002e2bf) ai2_gene_pane_g_ParamLimits

0xfa20,	// (0x0002e2bf) ai2_gene_pane_g

0x49d5,	// (0x00023274) scroll_pane_cp12

0x9ee5,	// (0x00028784) control_pane_t3_ParamLimits

0x9ee5,	// (0x00028784) control_pane_t3

0x561a,	// (0x00023eb9) status_small_pane_g8_ParamLimits

0x561a,	// (0x00023eb9) status_small_pane_g8

0xa016,	// (0x000288b5) popup_find_window_ParamLimits

0xa203,	// (0x00028aa2) popup_note_image_window_ParamLimits

0xd49f,	// (0x0002bd3e) list_double2_graphic_pane_vc_g1_ParamLimits

0xd49f,	// (0x0002bd3e) list_double2_graphic_pane_vc_g1

0xd4ab,	// (0x0002bd4a) list_double2_graphic_pane_vc_g2_ParamLimits

0xd4ab,	// (0x0002bd4a) list_double2_graphic_pane_vc_g2

0xd4b7,	// (0x0002bd56) list_double2_graphic_pane_vc_g3_ParamLimits

0xd4b7,	// (0x0002bd56) list_double2_graphic_pane_vc_g3

0x0002,

0xf7fe,	// (0x0002e09d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7fe,	// (0x0002e09d) list_double2_graphic_pane_vc_g

0xd4c3,	// (0x0002bd62) list_double2_graphic_pane_vc_t1_ParamLimits

0xd4c3,	// (0x0002bd62) list_double2_graphic_pane_vc_t1

0xd4d9,	// (0x0002bd78) list_single_heading_pane_vc_g1_ParamLimits

0xd4d9,	// (0x0002bd78) list_single_heading_pane_vc_g1

0xd4e5,	// (0x0002bd84) list_single_heading_pane_vc_g2_ParamLimits

0xd4e5,	// (0x0002bd84) list_single_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0002e0be) list_single_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0002e0be) list_single_heading_pane_vc_g

0xd4f1,	// (0x0002bd90) list_single_heading_pane_vc_t1_ParamLimits

0xd4f1,	// (0x0002bd90) list_single_heading_pane_vc_t1

0xd507,	// (0x0002bda6) list_single_heading_pane_vc_t2_ParamLimits

0xd507,	// (0x0002bda6) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0002e0c3) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0002e0c3) list_single_heading_pane_vc_t

0x5a36,	// (0x000242d5) list_setting_number_pane_vc_g1_ParamLimits

0x5a36,	// (0x000242d5) list_setting_number_pane_vc_g1

0x5a42,	// (0x000242e1) list_setting_number_pane_vc_g2_ParamLimits

0x5a42,	// (0x000242e1) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0002e0c8) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0002e0c8) list_setting_number_pane_vc_g

0x5a4e,	// (0x000242ed) list_setting_number_pane_vc_t1_ParamLimits

0x5a4e,	// (0x000242ed) list_setting_number_pane_vc_t1

0x5a62,	// (0x00024301) list_setting_number_pane_vc_t2_ParamLimits

0x5a62,	// (0x00024301) list_setting_number_pane_vc_t2

0x5a7e,	// (0x0002431d) list_setting_number_pane_vc_t3_ParamLimits

0x5a7e,	// (0x0002431d) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0002e0cd) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0002e0cd) list_setting_number_pane_vc_t

0x5aa4,	// (0x00024343) set_value_pane_vc_ParamLimits

0x5aa4,	// (0x00024343) set_value_pane_vc

0x6bba,	// (0x00025459) list_double2_graphic_pane_vc_ParamLimits

0x6bba,	// (0x00025459) list_double2_graphic_pane_vc

0x6bba,	// (0x00025459) list_double2_large_graphic_pane_vc_ParamLimits

0x6bba,	// (0x00025459) list_double2_large_graphic_pane_vc

0x6bba,	// (0x00025459) list_double2_pane_vc_ParamLimits

0x6bba,	// (0x00025459) list_double2_pane_vc

0x6bba,	// (0x00025459) list_double_graphic_heading_pane_vc_ParamLimits

0x6bba,	// (0x00025459) list_double_graphic_heading_pane_vc

0x6bba,	// (0x00025459) list_double_graphic_pane_vc_ParamLimits

0x6bba,	// (0x00025459) list_double_graphic_pane_vc

0x6bba,	// (0x00025459) list_double_heading_pane_vc_ParamLimits

0x6bba,	// (0x00025459) list_double_heading_pane_vc

0x6bba,	// (0x00025459) list_double_large_graphic_pane_vc_ParamLimits

0x6bba,	// (0x00025459) list_double_large_graphic_pane_vc

0x6bba,	// (0x00025459) list_double_number_pane_vc_ParamLimits

0x6bba,	// (0x00025459) list_double_number_pane_vc

0x6bba,	// (0x00025459) list_double_pane_vc_ParamLimits

0x6bba,	// (0x00025459) list_double_pane_vc

0x6bba,	// (0x00025459) list_double_time_pane_vc_ParamLimits

0x6bba,	// (0x00025459) list_double_time_pane_vc

0x6bba,	// (0x00025459) list_setting_number_pane_vc_ParamLimits

0x6bba,	// (0x00025459) list_setting_number_pane_vc

0x6bba,	// (0x00025459) list_setting_pane_vc_ParamLimits

0x6bba,	// (0x00025459) list_setting_pane_vc

0x6bba,	// (0x00025459) list_single_graphic_heading_pane_vc_ParamLimits

0x6bba,	// (0x00025459) list_single_graphic_heading_pane_vc

0x6bba,	// (0x00025459) list_single_heading_pane_vc_ParamLimits

0x6bba,	// (0x00025459) list_single_heading_pane_vc

0xd5e4,	// (0x0002be83) list_single_number_heading_pane_vc_ParamLimits

0xd5e4,	// (0x0002be83) list_single_number_heading_pane_vc

0xd680,	// (0x0002bf1f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd680,	// (0x0002bf1f) list_double_graphic_heading_pane_vc_g1

0xd4d9,	// (0x0002bd78) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd4d9,	// (0x0002bd78) list_double_graphic_heading_pane_vc_g2

0xd4e5,	// (0x0002bd84) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd4e5,	// (0x0002bd84) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa2c,	// (0x0002e2cb) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa2c,	// (0x0002e2cb) list_double_graphic_heading_pane_vc_g

0xd68c,	// (0x0002bf2b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd68c,	// (0x0002bf2b) list_double_graphic_heading_pane_vc_t1

0xd4f1,	// (0x0002bd90) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd4f1,	// (0x0002bd90) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa33,	// (0x0002e2d2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0002e2d2) list_double_graphic_heading_pane_vc_t

0x5a36,	// (0x000242d5) list_setting_pane_vc_g1_ParamLimits

0x5a36,	// (0x000242d5) list_setting_pane_vc_g1

0x5a42,	// (0x000242e1) list_setting_pane_vc_g2_ParamLimits

0x5a42,	// (0x000242e1) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0002e0c8) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0002e0c8) list_setting_pane_vc_g

0x7187,	// (0x00025a26) list_setting_pane_vc_t1_ParamLimits

0x7187,	// (0x00025a26) list_setting_pane_vc_t1

0x719b,	// (0x00025a3a) list_setting_pane_vc_t2_ParamLimits

0x719b,	// (0x00025a3a) list_setting_pane_vc_t2

0x0001,

0xfa61,	// (0x0002e300) list_setting_pane_vc_t_ParamLimits

0xfa61,	// (0x0002e300) list_setting_pane_vc_t

0x5aa4,	// (0x00024343) set_value_pane_cp_vc_ParamLimits

0x5aa4,	// (0x00024343) set_value_pane_cp_vc

0xd4d9,	// (0x0002bd78) list_single_number_heading_pane_vc_g1_ParamLimits

0xd4d9,	// (0x0002bd78) list_single_number_heading_pane_vc_g1

0xd4e5,	// (0x0002bd84) list_single_number_heading_pane_vc_g2_ParamLimits

0xd4e5,	// (0x0002bd84) list_single_number_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0002e0be) list_single_number_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0002e0be) list_single_number_heading_pane_vc_g

0xd4f1,	// (0x0002bd90) list_single_number_heading_pane_vc_t1_ParamLimits

0xd4f1,	// (0x0002bd90) list_single_number_heading_pane_vc_t1

0xd6a0,	// (0x0002bf3f) list_single_number_heading_pane_vc_t2_ParamLimits

0xd6a0,	// (0x0002bf3f) list_single_number_heading_pane_vc_t2

0xd6b4,	// (0x0002bf53) list_single_number_heading_pane_vc_t3_ParamLimits

0xd6b4,	// (0x0002bf53) list_single_number_heading_pane_vc_t3

0x0002,

0xfa66,	// (0x0002e305) list_single_number_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x0002e305) list_single_number_heading_pane_vc_t

0xd49f,	// (0x0002bd3e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd49f,	// (0x0002bd3e) list_single_graphic_heading_pane_vc_g1

0xd4d9,	// (0x0002bd78) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd4d9,	// (0x0002bd78) list_single_graphic_heading_pane_vc_g4

0xd4e5,	// (0x0002bd84) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd4e5,	// (0x0002bd84) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa6d,	// (0x0002e30c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa6d,	// (0x0002e30c) list_single_graphic_heading_pane_vc_g

0xd4f1,	// (0x0002bd90) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd4f1,	// (0x0002bd90) list_single_graphic_heading_pane_vc_t1

0xd6c6,	// (0x0002bf65) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd6c6,	// (0x0002bf65) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa74,	// (0x0002e313) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa74,	// (0x0002e313) list_single_graphic_heading_pane_vc_t

0xd4d9,	// (0x0002bd78) list_double2_pane_vc_g1_ParamLimits

0xd4d9,	// (0x0002bd78) list_double2_pane_vc_g1

0xd4e5,	// (0x0002bd84) list_double2_pane_vc_g2_ParamLimits

0xd4e5,	// (0x0002bd84) list_double2_pane_vc_g2

0x0001,

0xf81f,	// (0x0002e0be) list_double2_pane_vc_g_ParamLimits

0xf81f,	// (0x0002e0be) list_double2_pane_vc_g

0xd6da,	// (0x0002bf79) list_double2_pane_vc_t1_ParamLimits

0xd6da,	// (0x0002bf79) list_double2_pane_vc_t1

0xd6f0,	// (0x0002bf8f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd6f0,	// (0x0002bf8f) list_double2_large_graphic_pane_vc_g1

0xd4d9,	// (0x0002bd78) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd4d9,	// (0x0002bd78) list_double2_large_graphic_pane_vc_g2

0xd4e5,	// (0x0002bd84) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd4e5,	// (0x0002bd84) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa79,	// (0x0002e318) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa79,	// (0x0002e318) list_double2_large_graphic_pane_vc_g

0xd6fc,	// (0x0002bf9b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd6fc,	// (0x0002bf9b) list_double2_large_graphic_pane_vc_t1

0xd712,	// (0x0002bfb1) list_double_time_pane_vc_g1_ParamLimits

0xd712,	// (0x0002bfb1) list_double_time_pane_vc_g1

0xd71e,	// (0x0002bfbd) list_double_time_pane_vc_g2_ParamLimits

0xd71e,	// (0x0002bfbd) list_double_time_pane_vc_g2

0x0001,

0xfa80,	// (0x0002e31f) list_double_time_pane_vc_g_ParamLimits

0xfa80,	// (0x0002e31f) list_double_time_pane_vc_g

0xd72a,	// (0x0002bfc9) list_double_time_pane_vc_t1_ParamLimits

0xd72a,	// (0x0002bfc9) list_double_time_pane_vc_t1

0xd743,	// (0x0002bfe2) list_double_time_pane_vc_t2_ParamLimits

0xd743,	// (0x0002bfe2) list_double_time_pane_vc_t2

0xd77e,	// (0x0002c01d) list_double_time_pane_vc_t3_ParamLimits

0xd77e,	// (0x0002c01d) list_double_time_pane_vc_t3

0xd796,	// (0x0002c035) list_double_time_pane_vc_t4_ParamLimits

0xd796,	// (0x0002c035) list_double_time_pane_vc_t4

0x0003,

0xfa85,	// (0x0002e324) list_double_time_pane_vc_t_ParamLimits

0xfa85,	// (0x0002e324) list_double_time_pane_vc_t

0xd4d9,	// (0x0002bd78) list_double_pane_vc_g1_ParamLimits

0xd4d9,	// (0x0002bd78) list_double_pane_vc_g1

0xd4e5,	// (0x0002bd84) list_double_pane_vc_g2_ParamLimits

0xd4e5,	// (0x0002bd84) list_double_pane_vc_g2

0x0001,

0xf81f,	// (0x0002e0be) list_double_pane_vc_g_ParamLimits

0xf81f,	// (0x0002e0be) list_double_pane_vc_g

0xd7aa,	// (0x0002c049) list_double_pane_vc_t1_ParamLimits

0xd7aa,	// (0x0002c049) list_double_pane_vc_t1

0xd7bc,	// (0x0002c05b) list_double_pane_vc_t2_ParamLimits

0xd7bc,	// (0x0002c05b) list_double_pane_vc_t2

0x0001,

0xfa8e,	// (0x0002e32d) list_double_pane_vc_t_ParamLimits

0xfa8e,	// (0x0002e32d) list_double_pane_vc_t

0xd4d9,	// (0x0002bd78) list_double_number_pane_vc_g1_ParamLimits

0xd4d9,	// (0x0002bd78) list_double_number_pane_vc_g1

0xd4e5,	// (0x0002bd84) list_double_number_pane_vc_g2_ParamLimits

0xd4e5,	// (0x0002bd84) list_double_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0002e0be) list_double_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0002e0be) list_double_number_pane_vc_g

0xd7d4,	// (0x0002c073) list_double_number_pane_vc_t1_ParamLimits

0xd7d4,	// (0x0002c073) list_double_number_pane_vc_t1

0xd7e8,	// (0x0002c087) list_double_number_pane_vc_t2_ParamLimits

0xd7e8,	// (0x0002c087) list_double_number_pane_vc_t2

0xd7bc,	// (0x0002c05b) list_double_number_pane_vc_t3_ParamLimits

0xd7bc,	// (0x0002c05b) list_double_number_pane_vc_t3

0x0002,

0xfa93,	// (0x0002e332) list_double_number_pane_vc_t_ParamLimits

0xfa93,	// (0x0002e332) list_double_number_pane_vc_t

0xd7fa,	// (0x0002c099) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd7fa,	// (0x0002c099) list_double_large_graphic_pane_vc_g1

0xd806,	// (0x0002c0a5) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd806,	// (0x0002c0a5) list_double_large_graphic_pane_vc_g2

0xd4e5,	// (0x0002bd84) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd4e5,	// (0x0002bd84) list_double_large_graphic_pane_vc_g3

0xd815,	// (0x0002c0b4) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd815,	// (0x0002c0b4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa9a,	// (0x0002e339) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa9a,	// (0x0002e339) list_double_large_graphic_pane_vc_g

0xd821,	// (0x0002c0c0) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd821,	// (0x0002c0c0) list_double_large_graphic_pane_vc_t1

0xd833,	// (0x0002c0d2) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd833,	// (0x0002c0d2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa3,	// (0x0002e342) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa3,	// (0x0002e342) list_double_large_graphic_pane_vc_t

0xd4d9,	// (0x0002bd78) list_double_heading_pane_vc_g1_ParamLimits

0xd4d9,	// (0x0002bd78) list_double_heading_pane_vc_g1

0xd4e5,	// (0x0002bd84) list_double_heading_pane_vc_g2_ParamLimits

0xd4e5,	// (0x0002bd84) list_double_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0002e0be) list_double_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0002e0be) list_double_heading_pane_vc_g

0xd84c,	// (0x0002c0eb) list_double_heading_pane_vc_t1_ParamLimits

0xd84c,	// (0x0002c0eb) list_double_heading_pane_vc_t1

0xd4f1,	// (0x0002bd90) list_double_heading_pane_vc_t2_ParamLimits

0xd4f1,	// (0x0002bd90) list_double_heading_pane_vc_t2

0x0001,

0xfaa8,	// (0x0002e347) list_double_heading_pane_vc_t_ParamLimits

0xfaa8,	// (0x0002e347) list_double_heading_pane_vc_t

0xd860,	// (0x0002c0ff) list_double_graphic_pane_vc_g1_ParamLimits

0xd860,	// (0x0002c0ff) list_double_graphic_pane_vc_g1

0xd870,	// (0x0002c10f) list_double_graphic_pane_vc_g2_ParamLimits

0xd870,	// (0x0002c10f) list_double_graphic_pane_vc_g2

0xd87f,	// (0x0002c11e) list_double_graphic_pane_vc_g3_ParamLimits

0xd87f,	// (0x0002c11e) list_double_graphic_pane_vc_g3

0x0002,

0xfaad,	// (0x0002e34c) list_double_graphic_pane_vc_g_ParamLimits

0xfaad,	// (0x0002e34c) list_double_graphic_pane_vc_g

0xd88b,	// (0x0002c12a) list_double_graphic_pane_vc_t1_ParamLimits

0xd88b,	// (0x0002c12a) list_double_graphic_pane_vc_t1

0xd7bc,	// (0x0002c05b) list_double_graphic_pane_vc_t2_ParamLimits

0xd7bc,	// (0x0002c05b) list_double_graphic_pane_vc_t2

0x0001,

0xfab4,	// (0x0002e353) list_double_graphic_pane_vc_t_ParamLimits

0xfab4,	// (0x0002e353) list_double_graphic_pane_vc_t

0x8eef,	// (0x0002778e) aid_size_cell_fastswap

0x8ef7,	// (0x00027796) aid_size_cell_touch_ParamLimits

0x8ef7,	// (0x00027796) aid_size_cell_touch

0x915c,	// (0x000279fb) popup_fast_swap_wide_window_ParamLimits

0x915c,	// (0x000279fb) popup_fast_swap_wide_window

0x9266,	// (0x00027b05) touch_pane_ParamLimits

0x9266,	// (0x00027b05) touch_pane

0x4a2b,	// (0x000232ca) button_value_adjust_pane_cp2

0xd197,	// (0x0002ba36) button_value_adjust_pane_cp4

0xd1b7,	// (0x0002ba56) form_field_data_pane_cp2

0xd1d6,	// (0x0002ba75) form_field_data_wide_pane_cp2

0x4d8a,	// (0x00023629) bg_scroll_pane_ParamLimits

0x990c,	// (0x000281ab) scroll_handle_pane_ParamLimits

0x9920,	// (0x000281bf) scroll_sc2_down_pane_ParamLimits

0x9920,	// (0x000281bf) scroll_sc2_down_pane

0x4dbb,	// (0x0002365a) scroll_sc2_up_pane_ParamLimits

0x4dbb,	// (0x0002365a) scroll_sc2_up_pane

0xb19d,	// (0x00029a3c) grid_wheel_folder_pane_g1_ParamLimits

0xb19d,	// (0x00029a3c) grid_wheel_folder_pane_g1

0x9b88,	// (0x00028427) clock_nsta_pane_cp2_ParamLimits

0x9b88,	// (0x00028427) clock_nsta_pane_cp2

0x9c3d,	// (0x000284dc) listscroll_midp_pane_ParamLimits

0x9c49,	// (0x000284e8) midp_canvas_pane

0x566e,	// (0x00023f0d) nsta_clock_indic_pane

0x56a6,	// (0x00023f45) listscroll_form_pane_vc

0x56ae,	// (0x00023f4d) listscroll_set_pane_vc_ParamLimits

0x56ae,	// (0x00023f4d) listscroll_set_pane_vc

0xa477,	// (0x00028d16) clock_nsta_pane

0xa484,	// (0x00028d23) indicator_nsta_pane

0x592c,	// (0x000241cb) bg_popup_sub_pane_cp2_ParamLimits

0x5940,	// (0x000241df) find_pane_cp2_ParamLimits

0x5940,	// (0x000241df) find_pane_cp2

0x5956,	// (0x000241f5) grid_toobar_pane_ParamLimits

0x5ab2,	// (0x00024351) list_form_gen_pane_vc_ParamLimits

0x5ab2,	// (0x00024351) list_form_gen_pane_vc

0x5ac8,	// (0x00024367) scroll_pane_cp8_vc_ParamLimits

0x5ac8,	// (0x00024367) scroll_pane_cp8_vc

0x5b18,	// (0x000243b7) data_form_wide_pane_vc_ParamLimits

0x5b18,	// (0x000243b7) data_form_wide_pane_vc

0x5b24,	// (0x000243c3) form_field_data_wide_pane_vc_g1

0x5b2c,	// (0x000243cb) form_field_data_wide_pane_vc_t1_ParamLimits

0x5b2c,	// (0x000243cb) form_field_data_wide_pane_vc_t1

0x4a3f,	// (0x000232de) input_focus_pane_cp6_vc_ParamLimits

0x4a3f,	// (0x000232de) input_focus_pane_cp6_vc

0xa915,	// (0x000291b4) list_midp_pane_ParamLimits

0xa921,	// (0x000291c0) scroll_pane_cp16_ParamLimits

0xa921,	// (0x000291c0) scroll_pane_cp16

0x5d93,	// (0x00024632) button_value_adjust_pane_ParamLimits

0x5d93,	// (0x00024632) button_value_adjust_pane

0xacf8,	// (0x00029597) button_value_adjust_pane_cp6_ParamLimits

0xacf8,	// (0x00029597) button_value_adjust_pane_cp6

0xae22,	// (0x000296c1) settings_code_pane_cp_ParamLimits

0xae22,	// (0x000296c1) settings_code_pane_cp

0x43d8,	// (0x00022c77) cell_touch_pane_g1

0x43d8,	// (0x00022c77) cell_touch_pane_g2

0x0001,

0xf747,	// (0x0002dfe6) cell_touch_pane_g

0xb069,	// (0x00029908) cell_touch_pane_cp_ParamLimits

0xb069,	// (0x00029908) cell_touch_pane_cp

0xb079,	// (0x00029918) cell_touch_pane_ParamLimits

0xb079,	// (0x00029918) cell_touch_pane

0x43d8,	// (0x00022c77) scroll_sc2_down_pane_g1

0x43d8,	// (0x00022c77) scroll_sc2_up_pane_g1

0x43e2,	// (0x00022c81) bg_set_opt_pane_cp4_vc

0x6f83,	// (0x00025822) list_set_graphic_pane_vc_g1_ParamLimits

0x6f83,	// (0x00025822) list_set_graphic_pane_vc_g1

0x6f8f,	// (0x0002582e) list_set_graphic_pane_vc_g2_ParamLimits

0x6f8f,	// (0x0002582e) list_set_graphic_pane_vc_g2

0x0001,

0xfa38,	// (0x0002e2d7) list_set_graphic_pane_vc_g_ParamLimits

0xfa38,	// (0x0002e2d7) list_set_graphic_pane_vc_g

0x6f9b,	// (0x0002583a) text_primary_small_cp13_vc_ParamLimits

0x6f9b,	// (0x0002583a) text_primary_small_cp13_vc

0x6fb3,	// (0x00025852) list_set_graphic_pane_vc_ParamLimits

0x6fb3,	// (0x00025852) list_set_graphic_pane_vc

0x43e2,	// (0x00022c81) input_focus_pane_cp2_vc

0x43d8,	// (0x00022c77) setting_code_pane_vc_g1

0x6fc7,	// (0x00025866) setting_code_pane_vc_t1

0x6fd5,	// (0x00025874) set_text_pane_vc_t1_ParamLimits

0x6fd5,	// (0x00025874) set_text_pane_vc_t1

0x43e2,	// (0x00022c81) input_focus_pane_cp1_vc

0x6ff0,	// (0x0002588f) list_set_text_pane_vc

0x43d8,	// (0x00022c77) setting_text_pane_vc_g1

0x43e2,	// (0x00022c81) bg_set_opt_pane_cp2_vc

0x6ffa,	// (0x00025899) setting_slider_graphic_pane_vc_g1

0x7002,	// (0x000258a1) setting_slider_graphic_pane_vc_t1

0x7010,	// (0x000258af) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0002e2dc) setting_slider_graphic_pane_vc_t

0x701e,	// (0x000258bd) slider_set_pane_cp_vc

0x7026,	// (0x000258c5) slider_set_pane_vc_g1

0x702f,	// (0x000258ce) slider_set_pane_vc_g2

0x0006,

0xfa42,	// (0x0002e2e1) slider_set_pane_vc_g

0x4aa6,	// (0x00023345) set_opt_bg_pane_g1_copy1

0x4aae,	// (0x0002334d) set_opt_bg_pane_g2_copy1

0x705b,	// (0x000258fa) set_opt_bg_pane_g3_copy1

0x4abe,	// (0x0002335d) set_opt_bg_pane_g4_copy1

0x4ac6,	// (0x00023365) set_opt_bg_pane_g5_copy1

0x4ace,	// (0x0002336d) set_opt_bg_pane_g6_copy1

0x7065,	// (0x00025904) set_opt_bg_pane_g7_copy1

0x706d,	// (0x0002590c) set_opt_bg_pane_g8_copy1

0x7077,	// (0x00025916) set_opt_bg_pane_g9_copy1

0x43e2,	// (0x00022c81) bg_set_opt_pane_cp_vc

0x7081,	// (0x00025920) setting_slider_pane_vc_t1

0x7002,	// (0x000258a1) setting_slider_pane_vc_t2

0x7010,	// (0x000258af) setting_slider_pane_vc_t3

0x0002,

0xfa51,	// (0x0002e2f0) setting_slider_pane_vc_t

0x701e,	// (0x000258bd) slider_set_pane_vc

0xa967,	// (0x00029206) volume_set_pane_vc_g1

0xa970,	// (0x0002920f) volume_set_pane_vc_g2

0xa979,	// (0x00029218) volume_set_pane_vc_g3

0xa982,	// (0x00029221) volume_set_pane_vc_g4

0xa98b,	// (0x0002922a) volume_set_pane_vc_g5

0xa994,	// (0x00029233) volume_set_pane_vc_g6

0xa99d,	// (0x0002923c) volume_set_pane_vc_g7

0xa9a6,	// (0x00029245) volume_set_pane_vc_g8

0xa9af,	// (0x0002924e) volume_set_pane_vc_g9

0xa9b8,	// (0x00029257) volume_set_pane_vc_g10

0x0009,

0xf8ef,	// (0x0002e18e) volume_set_pane_vc_g

0x7090,	// (0x0002592f) volume_set_pane_vc

0x7098,	// (0x00025937) button_value_adjust_pane_cp1_vc

0x70a2,	// (0x00025941) list_highlight_pane_cp2_vc

0x70ab,	// (0x0002594a) list_set_pane_vc_ParamLimits

0x70ab,	// (0x0002594a) list_set_pane_vc

0x7115,	// (0x000259b4) main_pane_set_vc_t1_ParamLimits

0x7115,	// (0x000259b4) main_pane_set_vc_t1

0x712a,	// (0x000259c9) main_pane_set_vc_t2_ParamLimits

0x712a,	// (0x000259c9) main_pane_set_vc_t2

0x713c,	// (0x000259db) main_pane_set_vc_t3_ParamLimits

0x713c,	// (0x000259db) main_pane_set_vc_t3

0x7150,	// (0x000259ef) main_pane_set_vc_t4_ParamLimits

0x7150,	// (0x000259ef) main_pane_set_vc_t4

0x0003,

0xfa58,	// (0x0002e2f7) main_pane_set_vc_t_ParamLimits

0xfa58,	// (0x0002e2f7) main_pane_set_vc_t

0x7164,	// (0x00025a03) setting_code_pane_vc_ParamLimits

0x7164,	// (0x00025a03) setting_code_pane_vc

0x7175,	// (0x00025a14) setting_slider_graphic_pane_vc

0x7175,	// (0x00025a14) setting_slider_pane_vc

0x7175,	// (0x00025a14) setting_text_pane_vc

0x7175,	// (0x00025a14) setting_volume_pane_vc

0x717f,	// (0x00025a1e) scroll_pane_cp121_vc

0x4a19,	// (0x000232b8) set_content_pane_vc

0x71bd,	// (0x00025a5c) button_value_adjust_pane_g1

0x71c6,	// (0x00025a65) button_value_adjust_pane_g2

0x0001,

0xfab9,	// (0x0002e358) button_value_adjust_pane_g

0x71cf,	// (0x00025a6e) form_field_slider_wide_pane_vc_t1_ParamLimits

0x71cf,	// (0x00025a6e) form_field_slider_wide_pane_vc_t1

0x71e3,	// (0x00025a82) form_field_slider_wide_pane_vc_t2_ParamLimits

0x71e3,	// (0x00025a82) form_field_slider_wide_pane_vc_t2

0x0001,

0xfabe,	// (0x0002e35d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfabe,	// (0x0002e35d) form_field_slider_wide_pane_vc_t

0x4430,	// (0x00022ccf) input_focus_pane_cp10_vc_ParamLimits

0x4430,	// (0x00022ccf) input_focus_pane_cp10_vc

0x71f5,	// (0x00025a94) slider_cont_pane_cp1_vc_ParamLimits

0x71f5,	// (0x00025a94) slider_cont_pane_cp1_vc

0x7026,	// (0x000258c5) slider_form_pane_g1_cp2

0x702f,	// (0x000258ce) slider_form_pane_g2_cp2

0x720e,	// (0x00025aad) form_field_slider_pane_vc_t3

0x721c,	// (0x00025abb) form_field_slider_pane_vc_t4

0x722a,	// (0x00025ac9) slider_form_pane_vc_ParamLimits

0x722a,	// (0x00025ac9) slider_form_pane_vc

0x7237,	// (0x00025ad6) form_field_slider_pane_vc_t1_ParamLimits

0x7237,	// (0x00025ad6) form_field_slider_pane_vc_t1

0x71e3,	// (0x00025a82) form_field_slider_pane_vc_t2_ParamLimits

0x71e3,	// (0x00025a82) form_field_slider_pane_vc_t2

0x0001,

0xface,	// (0x0002e36d) form_field_slider_pane_vc_t_ParamLimits

0xface,	// (0x0002e36d) form_field_slider_pane_vc_t

0x4430,	// (0x00022ccf) input_focus_pane_cp9_vc_ParamLimits

0x4430,	// (0x00022ccf) input_focus_pane_cp9_vc

0x7253,	// (0x00025af2) slider_cont_pane_vc_ParamLimits

0x7253,	// (0x00025af2) slider_cont_pane_vc

0x7265,	// (0x00025b04) list_form_graphic_pane_cp_vc_ParamLimits

0x7265,	// (0x00025b04) list_form_graphic_pane_cp_vc

0x5b24,	// (0x000243c3) form_field_popup_wide_pane_vc_g1

0x727a,	// (0x00025b19) form_field_popup_wide_pane_vc_t1_ParamLimits

0x727a,	// (0x00025b19) form_field_popup_wide_pane_vc_t1

0x4a3f,	// (0x000232de) input_focus_pane_cp8_vc_ParamLimits

0x4a3f,	// (0x000232de) input_focus_pane_cp8_vc

0x7291,	// (0x00025b30) list_form_wide_pane_vc_ParamLimits

0x7291,	// (0x00025b30) list_form_wide_pane_vc

0x729d,	// (0x00025b3c) list_form_graphic_pane_vc_g1

0x72a5,	// (0x00025b44) list_form_graphic_pane_vc_t1_ParamLimits

0x72a5,	// (0x00025b44) list_form_graphic_pane_vc_t1

0x443e,	// (0x00022cdd) list_highlight_pane_cp5_vc_ParamLimits

0x443e,	// (0x00022cdd) list_highlight_pane_cp5_vc

0x72c1,	// (0x00025b60) list_form_graphic_pane_vc_ParamLimits

0x72c1,	// (0x00025b60) list_form_graphic_pane_vc

0x5b24,	// (0x000243c3) form_field_popup_pane_vc_g1

0x72d7,	// (0x00025b76) form_field_popup_pane_vc_t1_ParamLimits

0x72d7,	// (0x00025b76) form_field_popup_pane_vc_t1

0x4a3f,	// (0x000232de) input_focus_pane_cp7_vc_ParamLimits

0x4a3f,	// (0x000232de) input_focus_pane_cp7_vc

0x72ee,	// (0x00025b8d) list_form_pane_vc_ParamLimits

0x72ee,	// (0x00025b8d) list_form_pane_vc

0x72fa,	// (0x00025b99) data_form_pane_vc_t1_ParamLimits

0x72fa,	// (0x00025b99) data_form_pane_vc_t1

0x4aa6,	// (0x00023345) input_focus_pane_vc_g1

0x4aae,	// (0x0002334d) input_focus_pane_vc_g2

0x4ab6,	// (0x00023355) input_focus_pane_vc_g3

0x4abe,	// (0x0002335d) input_focus_pane_vc_g4

0x4ac6,	// (0x00023365) input_focus_pane_vc_g5

0x4ace,	// (0x0002336d) input_focus_pane_vc_g6

0x4ad6,	// (0x00023375) input_focus_pane_vc_g7

0x4ade,	// (0x0002337d) input_focus_pane_vc_g8

0x4ae6,	// (0x00023385) input_focus_pane_vc_g9

0x43d8,	// (0x00022c77) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x0002df6f) input_focus_pane_vc_g

0x5b18,	// (0x000243b7) data_form_pane_vc_ParamLimits

0x5b18,	// (0x000243b7) data_form_pane_vc

0x5b24,	// (0x000243c3) form_field_data_pane_vc_g1

0x7315,	// (0x00025bb4) form_field_data_pane_vc_t1_ParamLimits

0x7315,	// (0x00025bb4) form_field_data_pane_vc_t1

0x4a3f,	// (0x000232de) input_focus_pane_vc_ParamLimits

0x4a3f,	// (0x000232de) input_focus_pane_vc

0x732f,	// (0x00025bce) button_value_adjust_pane_cp3_vc

0x7337,	// (0x00025bd6) button_value_adjust_pane_cp5_vc

0x733f,	// (0x00025bde) form_field_data_pane_vc_ParamLimits

0x733f,	// (0x00025bde) form_field_data_pane_vc

0x7356,	// (0x00025bf5) form_field_data_pane_vc_cp2

0x735e,	// (0x00025bfd) form_field_data_wide_pane_vc_ParamLimits

0x735e,	// (0x00025bfd) form_field_data_wide_pane_vc

0x7374,	// (0x00025c13) form_field_data_wide_pane_vc_cp2

0x737c,	// (0x00025c1b) form_field_popup_pane_vc_ParamLimits

0x737c,	// (0x00025c1b) form_field_popup_pane_vc

0x7393,	// (0x00025c32) form_field_popup_wide_pane_vc_ParamLimits

0x7393,	// (0x00025c32) form_field_popup_wide_pane_vc

0x73a9,	// (0x00025c48) form_field_slider_pane_vc_ParamLimits

0x73a9,	// (0x00025c48) form_field_slider_pane_vc

0x73bc,	// (0x00025c5b) form_field_slider_wide_pane_vc_ParamLimits

0x73bc,	// (0x00025c5b) form_field_slider_wide_pane_vc

0xb08b,	// (0x0002992a) grid_touch_1_pane_ParamLimits

0xb08b,	// (0x0002992a) grid_touch_1_pane

0xb097,	// (0x00029936) grid_touch_2_pane_ParamLimits

0xb097,	// (0x00029936) grid_touch_2_pane

0x5660,	// (0x00023eff) touch_pane_g1_ParamLimits

0x5660,	// (0x00023eff) touch_pane_g1

0x73dd,	// (0x00025c7c) cell_app_pane_cp_wide_ParamLimits

0x73dd,	// (0x00025c7c) cell_app_pane_cp_wide

0x73ee,	// (0x00025c8d) grid_popup_fast_wide_pane_ParamLimits

0x73ee,	// (0x00025c8d) grid_popup_fast_wide_pane

0x7402,	// (0x00025ca1) scroll_pane_cp19_ParamLimits

0x7402,	// (0x00025ca1) scroll_pane_cp19

0x43e2,	// (0x00022c81) bg_popup_window_pane_cp20

0x7416,	// (0x00025cb5) listscroll_popup_fast_wide_pane

0x443e,	// (0x00022cdd) grid_indicator_nsta_pane

0x741e,	// (0x00025cbd) clock_nsta_pane_g1

0x7427,	// (0x00025cc6) clock_nsta_pane_t1

0xb0af,	// (0x0002994e) cell_indicator_nsta_pane_ParamLimits

0xb0af,	// (0x0002994e) cell_indicator_nsta_pane

0x73cf,	// (0x00025c6e) cell_indicator_nsta_pane_g1

0xb0e7,	// (0x00029986) cell_indicator_nsta_pane_g2

0x0001,

0xfad8,	// (0x0002e377) cell_indicator_nsta_pane_g

0x7443,	// (0x00025ce2) clock_nsta_pane_cp

0x744b,	// (0x00025cea) indicator_nsta_pane_cp

0x7453,	// (0x00025cf2) nsta_clock_indic_pane_g1

0x447a,	// (0x00022d19) grid_indicator_pane

0x4eb0,	// (0x0002374f) scroll_pane_cp29

0x9ad7,	// (0x00028376) indicator_nsta_pane_cp2_ParamLimits

0x9ad7,	// (0x00028376) indicator_nsta_pane_cp2

0x443e,	// (0x00022cdd) main_apps_wheel_pane

0x5c40,	// (0x000244df) form_midp_field_text_pane_ParamLimits

0x5d73,	// (0x00024612) scroll_bar_cp050_ParamLimits

0x748b,	// (0x00025d2a) cell_indicator_pane_ParamLimits

0x748b,	// (0x00025d2a) cell_indicator_pane

0x74a2,	// (0x00025d41) cell_indicator_pane_g1

0xb0fd,	// (0x0002999c) grid_wheel_folder_pane_ParamLimits

0xb0fd,	// (0x0002999c) grid_wheel_folder_pane

0xb111,	// (0x000299b0) list_wheel_apps_pane_ParamLimits

0xb111,	// (0x000299b0) list_wheel_apps_pane

0xb122,	// (0x000299c1) main_apps_wheel_pane_g1_ParamLimits

0xb122,	// (0x000299c1) main_apps_wheel_pane_g1

0xb136,	// (0x000299d5) main_apps_wheel_pane_g2_ParamLimits

0xb136,	// (0x000299d5) main_apps_wheel_pane_g2

0x0001,

0xfae7,	// (0x0002e386) main_apps_wheel_pane_g_ParamLimits

0xfae7,	// (0x0002e386) main_apps_wheel_pane_g

0xb14e,	// (0x000299ed) main_apps_wheel_pane_t1_ParamLimits

0xb14e,	// (0x000299ed) main_apps_wheel_pane_t1

0xb171,	// (0x00029a10) list_wheel_apps_pane_g1

0xb179,	// (0x00029a18) list_wheel_apps_pane_g2

0xb181,	// (0x00029a20) list_wheel_apps_pane_g3

0xb189,	// (0x00029a28) list_wheel_apps_pane_g4

0xb193,	// (0x00029a32) list_wheel_apps_pane_g5

0x0004,

0xfaec,	// (0x0002e38b) list_wheel_apps_pane_g

0x52e4,	// (0x00023b83) navi_icon_text_pane

0xa3bf,	// (0x00028c5e) aid_fill_nsta

0xb1b6,	// (0x00029a55) navi_icon_text_pane_g1

0xb1c5,	// (0x00029a64) navi_icon_text_pane_t1

0x9c25,	// (0x000284c4) list_set_graphic_pane_t1_ParamLimits

0x9c25,	// (0x000284c4) list_set_graphic_pane_t1

0x6457,	// (0x00024cf6) popup_midp_note_alarm_window_t6_ParamLimits

0x6457,	// (0x00024cf6) popup_midp_note_alarm_window_t6

0x6469,	// (0x00024d08) popup_midp_note_alarm_window_t7_ParamLimits

0x6469,	// (0x00024d08) popup_midp_note_alarm_window_t7

0x647b,	// (0x00024d1a) popup_midp_note_alarm_window_t8_ParamLimits

0x647b,	// (0x00024d1a) popup_midp_note_alarm_window_t8

0x648d,	// (0x00024d2c) popup_midp_note_alarm_window_t9_ParamLimits

0x648d,	// (0x00024d2c) popup_midp_note_alarm_window_t9

0x649f,	// (0x00024d3e) popup_midp_note_alarm_window_t10_ParamLimits

0x649f,	// (0x00024d3e) popup_midp_note_alarm_window_t10

0x64b1,	// (0x00024d50) popup_midp_note_alarm_window_t11_ParamLimits

0x64b1,	// (0x00024d50) popup_midp_note_alarm_window_t11

0x64c3,	// (0x00024d62) scroll_pane_cp17_ParamLimits

0x64c3,	// (0x00024d62) scroll_pane_cp17

0xa967,	// (0x00029206) volume_small_pane_cp_g1

0xb1da,	// (0x00029a79) volume_small_pane_cp_g2

0xb1e3,	// (0x00029a82) volume_small_pane_cp_g3

0xb1ec,	// (0x00029a8b) volume_small_pane_cp_g4

0xb1f5,	// (0x00029a94) volume_small_pane_cp_g5

0xb1fe,	// (0x00029a9d) volume_small_pane_cp_g6

0xb207,	// (0x00029aa6) volume_small_pane_cp_g7

0xb210,	// (0x00029aaf) volume_small_pane_cp_g8

0xb219,	// (0x00029ab8) volume_small_pane_cp_g9

0xb222,	// (0x00029ac1) volume_small_pane_cp_g10

0x548e,	// (0x00023d2d) midp_ticker_pane_g1_ParamLimits

0x549a,	// (0x00023d39) midp_ticker_pane_g2_ParamLimits

0xf798,	// (0x0002e037) midp_ticker_pane_g_ParamLimits

0x9cee,	// (0x0002858d) midp_ticker_pane_t1_ParamLimits

0xa3d5,	// (0x00028c74) aid_fill_nsta_2

0x5d5f,	// (0x000245fe) list_form2_midp_pane

0x6b98,	// (0x00025437) midp_editing_number_pane_ParamLimits

0x6ba7,	// (0x00025446) midp_ticker_pane_ParamLimits

0x74ac,	// (0x00025d4b) form2_midp_field_pane

0x74b4,	// (0x00025d53) scroll_pane_cp51

0x74d4,	// (0x00025d73) form2_midp_button_pane_ParamLimits

0x74d4,	// (0x00025d73) form2_midp_button_pane

0x74e6,	// (0x00025d85) form2_midp_content_pane_ParamLimits

0x74e6,	// (0x00025d85) form2_midp_content_pane

0x7500,	// (0x00025d9f) form2_midp_field_choice_group_pane

0x7508,	// (0x00025da7) form2_midp_field_pane_g1

0x7510,	// (0x00025daf) form2_midp_field_pane_g2

0x7518,	// (0x00025db7) form2_midp_field_pane_g3

0x7520,	// (0x00025dbf) form2_midp_field_pane_g4

0x0003,

0xfb11,	// (0x0002e3b0) form2_midp_field_pane_g

0x7528,	// (0x00025dc7) form2_midp_gauge_slider_pane

0x7530,	// (0x00025dcf) form2_midp_gauge_wait_pane

0x7538,	// (0x00025dd7) form2_midp_image_pane_ParamLimits

0x7538,	// (0x00025dd7) form2_midp_image_pane

0x7553,	// (0x00025df2) form2_midp_label_pane_ParamLimits

0x7553,	// (0x00025df2) form2_midp_label_pane

0xb247,	// (0x00029ae6) form2_midp_label_pane_cp_ParamLimits

0xb247,	// (0x00029ae6) form2_midp_label_pane_cp

0x756c,	// (0x00025e0b) form2_midp_string_pane_ParamLimits

0x756c,	// (0x00025e0b) form2_midp_string_pane

0xd89d,	// (0x0002c13c) form2_midp_text_pane_ParamLimits

0xd89d,	// (0x0002c13c) form2_midp_text_pane

0x757e,	// (0x00025e1d) form2_midp_time_pane

0x758e,	// (0x00025e2d) input_focus_pane_cp51_ParamLimits

0x758e,	// (0x00025e2d) input_focus_pane_cp51

0x75a6,	// (0x00025e45) form2_midp_label_pane_t1_ParamLimits

0x75a6,	// (0x00025e45) form2_midp_label_pane_t1

0xd8b8,	// (0x0002c157) form2_mdip_text_pane_t1_ParamLimits

0xd8b8,	// (0x0002c157) form2_mdip_text_pane_t1

0xd8d6,	// (0x0002c175) form2_midp_time_pane_t1

0x75ef,	// (0x00025e8e) form2_midp_gauge_slider_pane_t1

0xb268,	// (0x00029b07) form2_midp_gauge_slider_pane_t2

0xb27a,	// (0x00029b19) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1a,	// (0x0002e3b9) form2_midp_gauge_slider_pane_t

0x7601,	// (0x00025ea0) form2_midp_slider_pane

0x760d,	// (0x00025eac) form2_midp_gauge_wait_pane_t1

0x761b,	// (0x00025eba) form2_midp_wait_pane_ParamLimits

0x761b,	// (0x00025eba) form2_midp_wait_pane

0xa844,	// (0x000290e3) list_single_2graphic_pane_cp4_ParamLimits

0xa844,	// (0x000290e3) list_single_2graphic_pane_cp4

0xb28c,	// (0x00029b2b) list_single_midp_graphic_pane_cp_ParamLimits

0xb28c,	// (0x00029b2b) list_single_midp_graphic_pane_cp

0x43e2,	// (0x00022c81) list_highlight_pane_cp20

0x7646,	// (0x00025ee5) list_single_2graphic_pane_g1_cp4

0x764e,	// (0x00025eed) list_single_2graphic_pane_g2_cp4

0x7656,	// (0x00025ef5) list_single_2graphic_pane_t1_cp4

0x443e,	// (0x00022cdd) list_highlight_pane_cp21

0x7665,	// (0x00025f04) list_single_midp_graphic_pane_g4_cp

0x7674,	// (0x00025f13) list_single_midp_graphic_pane_t1_cp

0xb2bb,	// (0x00029b5a) form2_mdip_string_pane_t1_ParamLimits

0xb2bb,	// (0x00029b5a) form2_mdip_string_pane_t1

0x43e2,	// (0x00022c81) bg_wml_button_pane_cp2

0x43d8,	// (0x00022c77) form2_midp_image_pane_g1

0xcf6a,	// (0x0002b809) list_double_large_graphic_pane_g5_ParamLimits

0xcf6a,	// (0x0002b809) list_double_large_graphic_pane_g5

0x9c3d,	// (0x000284dc) midp_form_pane_ParamLimits

0x443e,	// (0x00022cdd) main_apps_wheel_pane_ParamLimits

0xa229,	// (0x00028ac8) popup_preview_window_ParamLimits

0xa229,	// (0x00028ac8) popup_preview_window

0x578d,	// (0x0002402c) popup_touch_info_window_ParamLimits

0x578d,	// (0x0002402c) popup_touch_info_window

0x57ab,	// (0x0002404a) popup_touch_menu_window_ParamLimits

0x57ab,	// (0x0002404a) popup_touch_menu_window

0x43ce,	// (0x00022c6d) bg_popup_sub_pane_cp6

0x7689,	// (0x00025f28) list_touch_menu_pane

0x7691,	// (0x00025f30) list_single_touch_menu_pane_ParamLimits

0x7691,	// (0x00025f30) list_single_touch_menu_pane

0x76a8,	// (0x00025f47) list_single_touch_menu_pane_t1

0x443e,	// (0x00022cdd) bg_popup_sub_pane_cp7_ParamLimits

0x443e,	// (0x00022cdd) bg_popup_sub_pane_cp7

0x76b6,	// (0x00025f55) heading_sub_pane

0x76be,	// (0x00025f5d) list_touch_info_pane_ParamLimits

0x76be,	// (0x00025f5d) list_touch_info_pane

0x76cd,	// (0x00025f6c) list_single_touch_info_pane_ParamLimits

0x76cd,	// (0x00025f6c) list_single_touch_info_pane

0x76df,	// (0x00025f7e) list_single_touch_info_pane_t1

0x76ed,	// (0x00025f8c) list_single_touch_info_pane_t2

0x0001,

0xfb28,	// (0x0002e3c7) list_single_touch_info_pane_t

0x5464,	// (0x00023d03) bg_popup_heading_pane_cp

0x76fb,	// (0x00025f9a) heading_sub_pane_t1

0x5ade,	// (0x0002437d) bg_popup_preview_window_pane_cp_ParamLimits

0x5ade,	// (0x0002437d) bg_popup_preview_window_pane_cp

0x76b6,	// (0x00025f55) heading_preview_pane

0x76be,	// (0x00025f5d) list_preview_pane_ParamLimits

0x76be,	// (0x00025f5d) list_preview_pane

0x7709,	// (0x00025fa8) popup_preview_window_g1

0x76cd,	// (0x00025f6c) list_single_preview_pane_ParamLimits

0x76cd,	// (0x00025f6c) list_single_preview_pane

0x7711,	// (0x00025fb0) list_single_preview_pane_g1

0x7719,	// (0x00025fb8) list_single_preview_pane_t1

0x76df,	// (0x00025f7e) list_single_preview_pane_t2

0x0001,

0xfb2d,	// (0x0002e3cc) list_single_preview_pane_t

0x7727,	// (0x00025fc6) bg_popup_heading_pane_cp2_ParamLimits

0x7727,	// (0x00025fc6) bg_popup_heading_pane_cp2

0x773d,	// (0x00025fdc) heading_preview_pane_g1

0x7753,	// (0x00025ff2) heading_preview_pane_t1_ParamLimits

0x7753,	// (0x00025ff2) heading_preview_pane_t1

0x4491,	// (0x00022d30) soft_indicator_pane_t1_ParamLimits

0x49b2,	// (0x00023251) scroll_pane_ParamLimits

0x4db2,	// (0x00023651) scroll_sc2_left_pane

0x4da9,	// (0x00023648) scroll_sc2_right_pane

0x4dd1,	// (0x00023670) scroll_bg_pane_g1_ParamLimits

0x4de6,	// (0x00023685) scroll_bg_pane_g2_ParamLimits

0x4dfe,	// (0x0002369d) scroll_bg_pane_g3_ParamLimits

0xf727,	// (0x0002dfc6) scroll_bg_pane_g_ParamLimits

0x4dd1,	// (0x00023670) scroll_handle_pane_g1_ParamLimits

0x4e20,	// (0x000236bf) scroll_handle_pane_g2_ParamLimits

0x4dfe,	// (0x0002369d) scroll_handle_pane_g3_ParamLimits

0xf72e,	// (0x0002dfcd) scroll_handle_pane_g_ParamLimits

0x56ce,	// (0x00023f6d) popup_choice_list_window_ParamLimits

0x56ce,	// (0x00023f6d) popup_choice_list_window

0x5938,	// (0x000241d7) choice_list_pane

0x59ba,	// (0x00024259) cell_toolbar_pane_t1

0x59e2,	// (0x00024281) toolbar_button_pane_ParamLimits

0x68fb,	// (0x0002519a) ai_gene_pane_1_t2_ParamLimits

0x68fb,	// (0x0002519a) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0002e1ea) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0002e1ea) ai_gene_pane_1_t

0x7770,	// (0x0002600f) scroll_sc2_left_pane_g1

0x7770,	// (0x0002600f) scroll_sc2_right_pane_g1

0x4b97,	// (0x00023436) bg_popup_sub_pane_cp10

0x777a,	// (0x00026019) list_choice_list_pane

0x7791,	// (0x00026030) list_single_choice_list_pane_ParamLimits

0x7791,	// (0x00026030) list_single_choice_list_pane

0x77a5,	// (0x00026044) list_single_choice_list_pane_g1

0x77ad,	// (0x0002604c) list_single_choice_list_pane_t1_ParamLimits

0x77ad,	// (0x0002604c) list_single_choice_list_pane_t1

0x77c2,	// (0x00026061) choice_list_pane_g1

0x77ca,	// (0x00026069) choice_list_pane_t1

0x43ce,	// (0x00022c6d) input_focus_pane_cp11

0x4d0c,	// (0x000235ab) title_pane_stacon_g2_ParamLimits

0x4d0c,	// (0x000235ab) title_pane_stacon_g2

0x0002,

0xf70d,	// (0x0002dfac) title_pane_stacon_g_ParamLimits

0xf70d,	// (0x0002dfac) title_pane_stacon_g

0x5464,	// (0x00023d03) cursor_press_pane

0x9fce,	// (0x0002886d) popup_fep_hwr_window_ParamLimits

0x9fce,	// (0x0002886d) popup_fep_hwr_window

0x5724,	// (0x00023fc3) popup_fep_vkb_window_ParamLimits

0x5724,	// (0x00023fc3) popup_fep_vkb_window

0x77d8,	// (0x00026077) cursor_press_pane_g1

0x0002,

0xfb56,	// (0x0002e3f5) fep_vkb_side_pane_g_ParamLimits

0xb3ed,	// (0x00029c8c) fep_hwr_candidate_pane_ParamLimits

0xb3ed,	// (0x00029c8c) fep_hwr_candidate_pane

0xb417,	// (0x00029cb6) fep_hwr_side_pane_ParamLimits

0xb417,	// (0x00029cb6) fep_hwr_side_pane

0xb437,	// (0x00029cd6) fep_hwr_top_pane_ParamLimits

0xb437,	// (0x00029cd6) fep_hwr_top_pane

0xb44f,	// (0x00029cee) fep_hwr_write_pane_ParamLimits

0xb44f,	// (0x00029cee) fep_hwr_write_pane

0xfb56,	// (0x0002e3f5) fep_vkb_side_pane_g

0x77f2,	// (0x00026091) fep_hwr_top_pane_g1

0x77e0,	// (0x0002607f) fep_hwr_top_pane_g2

0xb489,	// (0x00029d28) fep_hwr_top_pane_g3

0x0002,

0xfb32,	// (0x0002e3d1) fep_hwr_top_pane_g

0xb49e,	// (0x00029d3d) fep_hwr_top_text_pane

0x4f77,	// (0x00023816) fep_hwr_top_text_pane_g1

0x7828,	// (0x000260c7) fep_hwr_top_text_pane_t1

0xb594,	// (0x00029e33) fep_hwr_candidate_pane_g1

0x7955,	// (0x000261f4) fep_vkb_keypad_pane_g3_ParamLimits

0x7955,	// (0x000261f4) fep_vkb_keypad_pane_g3

0x797d,	// (0x0002621c) fep_vkb_keypad_pane_g4_ParamLimits

0x797d,	// (0x0002621c) fep_vkb_keypad_pane_g4

0x79ec,	// (0x0002628b) fep_vkb_bottom_pane_g2_ParamLimits

0x79ec,	// (0x0002628b) fep_vkb_bottom_pane_g2

0x0001,

0xfb5d,	// (0x0002e3fc) fep_vkb_bottom_pane_g_ParamLimits

0xfb5d,	// (0x0002e3fc) fep_vkb_bottom_pane_g

0x7770,	// (0x0002600f) cell_vkb_side_pane_g2

0x0001,

0xfb67,	// (0x0002e406) cell_vkb_side_pane_g

0x7a30,	// (0x000262cf) cell_vkb_side_pane_t1

0x7a3e,	// (0x000262dd) cell_vkb_side_pane_t1_copy1

0x7770,	// (0x0002600f) bg_fep_vkb_candidate_pane_g2

0x7b14,	// (0x000263b3) cell_vkb_candidate_pane_ParamLimits

0x7836,	// (0x000260d5) aid_size_cell_vkb_ParamLimits

0x7836,	// (0x000260d5) aid_size_cell_vkb

0x7b14,	// (0x000263b3) cell_vkb_candidate_pane

0xb77e,	// (0x0002a01d) bg_popup_fep_shadow_pane_g1

0xb5cd,	// (0x00029e6c) fep_vkb_bottom_pane_ParamLimits

0xb5cd,	// (0x00029e6c) fep_vkb_bottom_pane

0x78c3,	// (0x00026162) fep_vkb_candidate_pane_ParamLimits

0x78c3,	// (0x00026162) fep_vkb_candidate_pane

0xb5f2,	// (0x00029e91) fep_vkb_keypad_pane_ParamLimits

0xb5f2,	// (0x00029e91) fep_vkb_keypad_pane

0xb62e,	// (0x00029ecd) fep_vkb_side_pane_ParamLimits

0xb62e,	// (0x00029ecd) fep_vkb_side_pane

0xb66a,	// (0x00029f09) fep_vkb_top_pane_ParamLimits

0xb66a,	// (0x00029f09) fep_vkb_top_pane

0x78e9,	// (0x00026188) fep_vkb_top_pane_g1_ParamLimits

0x78e9,	// (0x00026188) fep_vkb_top_pane_g1

0x78f8,	// (0x00026197) fep_vkb_top_pane_g2_ParamLimits

0x78f8,	// (0x00026197) fep_vkb_top_pane_g2

0x7907,	// (0x000261a6) fep_vkb_top_pane_g3_ParamLimits

0x7907,	// (0x000261a6) fep_vkb_top_pane_g3

0x0003,

0xfb4d,	// (0x0002e3ec) fep_vkb_top_pane_g_ParamLimits

0xfb4d,	// (0x0002e3ec) fep_vkb_top_pane_g

0x7925,	// (0x000261c4) fep_vkb_top_text_pane_ParamLimits

0x7925,	// (0x000261c4) fep_vkb_top_text_pane

0xb6a6,	// (0x00029f45) fep_vkb_side_pane_g1_ParamLimits

0xb6a6,	// (0x00029f45) fep_vkb_side_pane_g1

0x7944,	// (0x000261e3) grid_vkb_side_pane_ParamLimits

0x7944,	// (0x000261e3) grid_vkb_side_pane

0xb786,	// (0x0002a025) bg_popup_fep_shadow_pane_g2

0xb78f,	// (0x0002a02e) bg_popup_fep_shadow_pane_g3

0xb797,	// (0x0002a036) bg_popup_fep_shadow_pane_g4

0xb7a0,	// (0x0002a03f) bg_popup_fep_shadow_pane_g5

0xb7aa,	// (0x0002a049) bg_popup_fep_shadow_pane_g6

0xb7b2,	// (0x0002a051) bg_popup_fep_shadow_pane_g7

0x4abe,	// (0x0002335d) bg_popup_fep_shadow_pane_g8

0x799b,	// (0x0002623a) grid_vkb_keypad_number_pane_ParamLimits

0x799b,	// (0x0002623a) grid_vkb_keypad_number_pane

0x79ab,	// (0x0002624a) grid_vkb_keypad_pane_ParamLimits

0x79ab,	// (0x0002624a) grid_vkb_keypad_pane

0x79d1,	// (0x00026270) fep_vkb_bottom_pane_g1_ParamLimits

0x79d1,	// (0x00026270) fep_vkb_bottom_pane_g1

0x79fa,	// (0x00026299) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x79fa,	// (0x00026299) grid_vkb_keypad_bottom_left_pane

0x7a0f,	// (0x000262ae) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7a0f,	// (0x000262ae) grid_vkb_keypad_bottom_right_pane

0x7a24,	// (0x000262c3) fep_vkb_top_text_pane_g1

0xb6f0,	// (0x00029f8f) fep_vkb_top_text_pane_t1

0xb705,	// (0x00029fa4) cell_vkb_side_pane_ParamLimits

0xb705,	// (0x00029fa4) cell_vkb_side_pane

0x7770,	// (0x0002600f) cell_vkb_side_pane_g1

0x7a4c,	// (0x000262eb) cell_vkb_keypad_pane_ParamLimits

0x7a4c,	// (0x000262eb) cell_vkb_keypad_pane

0x7ac1,	// (0x00026360) cell_vkb_keypad_pane_g1

0x0008,

0xfb7a,	// (0x0002e419) bg_popup_fep_shadow_pane_g

0xb7c4,	// (0x0002a063) cell_hwr_side_pane_g1

0xb7c4,	// (0x0002a063) cell_hwr_side_pane_g2

0x7acb,	// (0x0002636a) cell_vkb_keypad_pane_t1

0xb728,	// (0x00029fc7) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb728,	// (0x00029fc7) cell_vkb_keypad_bottom_left_pane

0xb745,	// (0x00029fe4) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb745,	// (0x00029fe4) cell_vkb_keypad_bottom_right_pane

0x7770,	// (0x0002600f) cell_vkb_keypad_bottom_left_pane_g1

0x7770,	// (0x0002600f) cell_vkb_keypad_bottom_right_pane_g1

0x7ad9,	// (0x00026378) cell_vkb_keypad_number_pane_ParamLimits

0x7ad9,	// (0x00026378) cell_vkb_keypad_number_pane

0x7af8,	// (0x00026397) cell_vkb_keypad_number_pane_g1

0x7b02,	// (0x000263a1) cell_vkb_keypad_number_pane_g2

0x7b0b,	// (0x000263aa) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb6c,	// (0x0002e40b) cell_vkb_keypad_number_pane_g

0x7acb,	// (0x0002636a) cell_vkb_keypad_number_pane_t1

0x7b2f,	// (0x000263ce) fep_vkb_candidate_pane_g1

0x0001,

0xfb8d,	// (0x0002e42c) cell_hwr_side_pane_g

0x7b48,	// (0x000263e7) cell_hwr_side_pane_t1

0xb7ce,	// (0x0002a06d) cell_hwr_side_pane_t1_copy1

0xb7dc,	// (0x0002a07b) cell_hwr_candidate_pane_g1

0xb80b,	// (0x0002a0aa) cell_hwr_candidate_pane_t1

0x7770,	// (0x0002600f) cell_vkb_candidate_pane_g2

0x7bce,	// (0x0002646d) cell_vkb_candidate_pane_t1

0xb3b4,	// (0x00029c53) bg_popup_fep_shadow_pane_ParamLimits

0xb3b4,	// (0x00029c53) bg_popup_fep_shadow_pane

0xb469,	// (0x00029d08) bg_fep_hwr_top_pane_g4

0x7804,	// (0x000260a3) bg_hwr_side_pane_g1_ParamLimits

0x7804,	// (0x000260a3) bg_hwr_side_pane_g1

0xb4da,	// (0x00029d79) cell_hwr_side_pane_ParamLimits

0xb4da,	// (0x00029d79) cell_hwr_side_pane

0xb515,	// (0x00029db4) fep_hwr_write_pane_g1_ParamLimits

0xb515,	// (0x00029db4) fep_hwr_write_pane_g1

0xb522,	// (0x00029dc1) fep_hwr_write_pane_g2_ParamLimits

0xb522,	// (0x00029dc1) fep_hwr_write_pane_g2

0xb52f,	// (0x00029dce) fep_hwr_write_pane_g3_ParamLimits

0xb52f,	// (0x00029dce) fep_hwr_write_pane_g3

0xb53d,	// (0x00029ddc) fep_hwr_write_pane_g4_ParamLimits

0xb53d,	// (0x00029ddc) fep_hwr_write_pane_g4

0x0005,

0xfb39,	// (0x0002e3d8) fep_hwr_write_pane_g_ParamLimits

0xfb39,	// (0x0002e3d8) fep_hwr_write_pane_g

0xb469,	// (0x00029d08) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xb469,	// (0x00029d08) bg_fep_hwr_candidate_pane_g2

0xb552,	// (0x00029df1) cell_hwr_candidate_pane_ParamLimits

0xb552,	// (0x00029df1) cell_hwr_candidate_pane

0xb594,	// (0x00029e33) fep_hwr_candidate_pane_g1_ParamLimits

0x7864,	// (0x00026103) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7864,	// (0x00026103) bg_popup_fep_shadow_pane_cp2

0x7917,	// (0x000261b6) fep_vkb_top_pane_g4_ParamLimits

0x7917,	// (0x000261b6) fep_vkb_top_pane_g4

0x7936,	// (0x000261d5) fep_vkb_side_pane_g2_ParamLimits

0x7936,	// (0x000261d5) fep_vkb_side_pane_g2

0xd0c4,	// (0x0002b963) list_setting_pane_t4_ParamLimits

0xd0c4,	// (0x0002b963) list_setting_pane_t4

0xd15e,	// (0x0002b9fd) list_setting_number_pane_t5_ParamLimits

0xd15e,	// (0x0002b9fd) list_setting_number_pane_t5

0x9954,	// (0x000281f3) list_double_heading_pane_cp2_ParamLimits

0x9954,	// (0x000281f3) list_double_heading_pane_cp2

0x4a59,	// (0x000232f8) list_double_heading_pane_g1_cp2_ParamLimits

0x4a59,	// (0x000232f8) list_double_heading_pane_g1_cp2

0x4a65,	// (0x00023304) list_double_heading_pane_g2_cp2_ParamLimits

0x4a65,	// (0x00023304) list_double_heading_pane_g2_cp2

0x7bdc,	// (0x0002647b) list_double_heading_pane_t1_cp2_ParamLimits

0x7bdc,	// (0x0002647b) list_double_heading_pane_t1_cp2

0x7bf2,	// (0x00026491) list_double_heading_pane_t2_cp2_ParamLimits

0x7bf2,	// (0x00026491) list_double_heading_pane_t2_cp2

0x43c6,	// (0x00022c65) aid_value_unit2

0x91b6,	// (0x00027a55) popup_preview_fixed_window

0x4571,	// (0x00022e10) bg_popup_preview_window_pane_cp02

0x7c04,	// (0x000264a3) list_preview_fixed_pane

0x7c4a,	// (0x000264e9) list_empty_pane_fp_ParamLimits

0x7c4a,	// (0x000264e9) list_empty_pane_fp

0x7c4a,	// (0x000264e9) list_single_cale_day_pane_fp_ParamLimits

0x7c4a,	// (0x000264e9) list_single_cale_day_pane_fp

0x7c4a,	// (0x000264e9) list_single_graphic_heading_pane_fp_ParamLimits

0x7c4a,	// (0x000264e9) list_single_graphic_heading_pane_fp

0x7c4a,	// (0x000264e9) list_single_graphic_pane_fp_ParamLimits

0x7c4a,	// (0x000264e9) list_single_graphic_pane_fp

0x7c4a,	// (0x000264e9) list_single_heading_pane_fp_ParamLimits

0x7c4a,	// (0x000264e9) list_single_heading_pane_fp

0x7c4a,	// (0x000264e9) list_single_pane_fp_ParamLimits

0x7c4a,	// (0x000264e9) list_single_pane_fp

0x7c5f,	// (0x000264fe) list_single_pane_fp_g1_ParamLimits

0x7c5f,	// (0x000264fe) list_single_pane_fp_g1

0xd90a,	// (0x0002c1a9) list_single_pane_fp_g2_ParamLimits

0xd90a,	// (0x0002c1a9) list_single_pane_fp_g2

0xd916,	// (0x0002c1b5) list_single_pane_fp_g3_ParamLimits

0xd916,	// (0x0002c1b5) list_single_pane_fp_g3

0x7c6b,	// (0x0002650a) list_single_pane_fp_g4_ParamLimits

0x7c6b,	// (0x0002650a) list_single_pane_fp_g4

0x0003,

0xfba0,	// (0x0002e43f) list_single_pane_fp_g_ParamLimits

0xfba0,	// (0x0002e43f) list_single_pane_fp_g

0xd92a,	// (0x0002c1c9) list_single_pane_fp_t1_ParamLimits

0xd92a,	// (0x0002c1c9) list_single_pane_fp_t1

0xd941,	// (0x0002c1e0) list_single_graphic_pane_fp_g1_ParamLimits

0xd941,	// (0x0002c1e0) list_single_graphic_pane_fp_g1

0x7c5f,	// (0x000264fe) list_single_graphic_pane_fp_g2_ParamLimits

0x7c5f,	// (0x000264fe) list_single_graphic_pane_fp_g2

0xd90a,	// (0x0002c1a9) list_single_graphic_pane_fp_g3_ParamLimits

0xd90a,	// (0x0002c1a9) list_single_graphic_pane_fp_g3

0xd916,	// (0x0002c1b5) list_single_graphic_pane_fp_g4_ParamLimits

0xd916,	// (0x0002c1b5) list_single_graphic_pane_fp_g4

0x7c6b,	// (0x0002650a) list_single_graphic_pane_fp_g5_ParamLimits

0x7c6b,	// (0x0002650a) list_single_graphic_pane_fp_g5

0x0004,

0xfba9,	// (0x0002e448) list_single_graphic_pane_fp_g_ParamLimits

0xfba9,	// (0x0002e448) list_single_graphic_pane_fp_g

0xd94d,	// (0x0002c1ec) list_single_graphic_pane_fp_t1_ParamLimits

0xd94d,	// (0x0002c1ec) list_single_graphic_pane_fp_t1

0xd941,	// (0x0002c1e0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd941,	// (0x0002c1e0) list_single_graphic_heading_pane_fp_g1

0x7c5f,	// (0x000264fe) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7c5f,	// (0x000264fe) list_single_graphic_heading_pane_fp_g2

0xd90a,	// (0x0002c1a9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd90a,	// (0x0002c1a9) list_single_graphic_heading_pane_fp_g3

0xd916,	// (0x0002c1b5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd916,	// (0x0002c1b5) list_single_graphic_heading_pane_fp_g4

0x7c6b,	// (0x0002650a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7c6b,	// (0x0002650a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba9,	// (0x0002e448) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x0002e448) list_single_graphic_heading_pane_fp_g

0xd963,	// (0x0002c202) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd963,	// (0x0002c202) list_single_graphic_heading_pane_fp_t1

0xd979,	// (0x0002c218) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd979,	// (0x0002c218) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb4,	// (0x0002e453) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb4,	// (0x0002e453) list_single_graphic_heading_pane_fp_t

0xd98b,	// (0x0002c22a) list_single_cale_day_pane_fp_g1_ParamLimits

0xd98b,	// (0x0002c22a) list_single_cale_day_pane_fp_g1

0x7c77,	// (0x00026516) list_single_cale_day_pane_fp_g2_ParamLimits

0x7c77,	// (0x00026516) list_single_cale_day_pane_fp_g2

0xd9c3,	// (0x0002c262) list_single_cale_day_pane_fp_g3_ParamLimits

0xd9c3,	// (0x0002c262) list_single_cale_day_pane_fp_g3

0xd9eb,	// (0x0002c28a) list_single_cale_day_pane_fp_g4_ParamLimits

0xd9eb,	// (0x0002c28a) list_single_cale_day_pane_fp_g4

0xda0f,	// (0x0002c2ae) list_single_cale_day_pane_fp_g5_ParamLimits

0xda0f,	// (0x0002c2ae) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb9,	// (0x0002e458) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb9,	// (0x0002e458) list_single_cale_day_pane_fp_g

0xda33,	// (0x0002c2d2) list_single_cale_day_pane_fp_t1_ParamLimits

0xda33,	// (0x0002c2d2) list_single_cale_day_pane_fp_t1

0xda59,	// (0x0002c2f8) list_single_cale_day_pane_fp_t2_ParamLimits

0xda59,	// (0x0002c2f8) list_single_cale_day_pane_fp_t2

0xda72,	// (0x0002c311) list_single_cale_day_pane_fp_t3_ParamLimits

0xda72,	// (0x0002c311) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc4,	// (0x0002e463) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc4,	// (0x0002e463) list_single_cale_day_pane_fp_t

0x7c5f,	// (0x000264fe) list_empty_pane_fp_g1_ParamLimits

0x7c5f,	// (0x000264fe) list_empty_pane_fp_g1

0xda8b,	// (0x0002c32a) list_empty_pane_fp_t1

0xda99,	// (0x0002c338) list_empty_pane_fp_t2

0x0001,

0xfbcb,	// (0x0002e46a) list_empty_pane_fp_t

0x7c5f,	// (0x000264fe) list_single_heading_pane_fp_g1_ParamLimits

0x7c5f,	// (0x000264fe) list_single_heading_pane_fp_g1

0xd90a,	// (0x0002c1a9) list_single_heading_pane_fp_g2_ParamLimits

0xd90a,	// (0x0002c1a9) list_single_heading_pane_fp_g2

0xd916,	// (0x0002c1b5) list_single_heading_pane_fp_g3_ParamLimits

0xd916,	// (0x0002c1b5) list_single_heading_pane_fp_g3

0x0002,

0xfbd0,	// (0x0002e46f) list_single_heading_pane_fp_g_ParamLimits

0xfbd0,	// (0x0002e46f) list_single_heading_pane_fp_g

0xdaa7,	// (0x0002c346) list_single_heading_pane_fp_t1_ParamLimits

0xdaa7,	// (0x0002c346) list_single_heading_pane_fp_t1

0xdab9,	// (0x0002c358) list_single_heading_pane_fp_t2_ParamLimits

0xdab9,	// (0x0002c358) list_single_heading_pane_fp_t2

0x0001,

0xfbd7,	// (0x0002e476) list_single_heading_pane_fp_t_ParamLimits

0xfbd7,	// (0x0002e476) list_single_heading_pane_fp_t

0x4ba3,	// (0x00023442) aid_size_cell_fast

0x4554,	// (0x00022df3) soft_indicator_pane_cp1_t1

0x4be0,	// (0x0002347f) cell_app_pane_cp2_ParamLimits

0x4be0,	// (0x0002347f) cell_app_pane_cp2

0xb3d6,	// (0x00029c75) fep_hwr_candidate_drop_down_list_pane

0xb5ae,	// (0x00029e4d) fep_hwr_candidate_pane_g3_ParamLimits

0xb5ae,	// (0x00029e4d) fep_hwr_candidate_pane_g3

0x3af9,	// (0x00022398) fep_hwr_candidate_pane_g4_ParamLimits

0x3af9,	// (0x00022398) fep_hwr_candidate_pane_g4

0x0002,

0xfb46,	// (0x0002e3e5) fep_hwr_candidate_pane_g_ParamLimits

0xfb46,	// (0x0002e3e5) fep_hwr_candidate_pane_g

0x78b2,	// (0x00026151) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x78b2,	// (0x00026151) fep_vkb_candidate_drop_down_list_pane

0x7b37,	// (0x000263d6) fep_vkb_candidate_pane_g3

0x7b3f,	// (0x000263de) fep_vkb_candidate_pane_g4

0x0002,

0xfb73,	// (0x0002e412) fep_vkb_candidate_pane_g

0xb7dc,	// (0x0002a07b) cell_hwr_candidate_pane_g1_ParamLimits

0xb7ea,	// (0x0002a089) cell_hwr_candidate_pane_g3_ParamLimits

0xb7ea,	// (0x0002a089) cell_hwr_candidate_pane_g3

0xd8e9,	// (0x0002c188) cell_hwr_candidate_pane_g4_ParamLimits

0xd8e9,	// (0x0002c188) cell_hwr_candidate_pane_g4

0x0002,

0xfb92,	// (0x0002e431) cell_hwr_candidate_pane_g_ParamLimits

0xfb92,	// (0x0002e431) cell_hwr_candidate_pane_g

0x7b98,	// (0x00026437) cell_vkb_candidate_pane_g3_ParamLimits

0x7b98,	// (0x00026437) cell_vkb_candidate_pane_g3

0x7bb3,	// (0x00026452) cell_vkb_candidate_pane_g4_ParamLimits

0x7bb3,	// (0x00026452) cell_vkb_candidate_pane_g4

0x7c83,	// (0x00026522) cell_app_pane_cp2_g1_ParamLimits

0x7c83,	// (0x00026522) cell_app_pane_cp2_g1

0x7ca1,	// (0x00026540) cell_app_pane_cp2_g2_ParamLimits

0x7ca1,	// (0x00026540) cell_app_pane_cp2_g2

0x0001,

0xfbdc,	// (0x0002e47b) cell_app_pane_cp2_g_ParamLimits

0xfbdc,	// (0x0002e47b) cell_app_pane_cp2_g

0x7cad,	// (0x0002654c) cell_app_pane_cp2_t1_ParamLimits

0x7cad,	// (0x0002654c) cell_app_pane_cp2_t1

0x4a3f,	// (0x000232de) grid_highlight_pane_cp1_ParamLimits

0x4a3f,	// (0x000232de) grid_highlight_pane_cp1

0xb829,	// (0x0002a0c8) cell_hwr_candidate_pane_cp1_ParamLimits

0xb829,	// (0x0002a0c8) cell_hwr_candidate_pane_cp1

0xb7dc,	// (0x0002a07b) fep_hwr_candidate_drop_down_list_pane_g1

0xb848,	// (0x0002a0e7) fep_hwr_candidate_drop_down_list_pane_g2

0xb855,	// (0x0002a0f4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbe1,	// (0x0002e480) fep_hwr_candidate_drop_down_list_pane_g

0xb862,	// (0x0002a101) fep_hwr_candidate_drop_down_list_scroll_pane

0xb86b,	// (0x0002a10a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb86b,	// (0x0002a10a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xb878,	// (0x0002a117) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb878,	// (0x0002a117) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xb885,	// (0x0002a124) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb885,	// (0x0002a124) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xb892,	// (0x0002a131) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb892,	// (0x0002a131) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xb8ad,	// (0x0002a14c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb8ad,	// (0x0002a14c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xb8c8,	// (0x0002a167) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb8c8,	// (0x0002a167) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xb8e3,	// (0x0002a182) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb8e3,	// (0x0002a182) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xb8fe,	// (0x0002a19d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb8fe,	// (0x0002a19d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe8,	// (0x0002e487) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe8,	// (0x0002e487) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7cd9,	// (0x00026578) cell_vkb_candidate_pane_cp1_ParamLimits

0x7cd9,	// (0x00026578) cell_vkb_candidate_pane_cp1

0x7917,	// (0x000261b6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7917,	// (0x000261b6) fep_vkb_candidate_drop_down_list_pane_g1

0x7cbf,	// (0x0002655e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7cbf,	// (0x0002655e) fep_vkb_candidate_drop_down_list_pane_g2

0x7ccc,	// (0x0002656b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7ccc,	// (0x0002656b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf9,	// (0x0002e498) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf9,	// (0x0002e498) fep_vkb_candidate_drop_down_list_pane_g

0x7cf9,	// (0x00026598) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7cf9,	// (0x00026598) fep_vkb_candidate_drop_down_list_scroll_pane

0x7d06,	// (0x000265a5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7d06,	// (0x000265a5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7d13,	// (0x000265b2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7d13,	// (0x000265b2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7d33,	// (0x000265d2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7d33,	// (0x000265d2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7b56,	// (0x000263f5) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7b56,	// (0x000263f5) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7b77,	// (0x00026416) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7b77,	// (0x00026416) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7d3f,	// (0x000265de) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7d3f,	// (0x000265de) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7d60,	// (0x000265ff) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7d60,	// (0x000265ff) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7d81,	// (0x00026620) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7d81,	// (0x00026620) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc00,	// (0x0002e49f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc00,	// (0x0002e49f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x92c6,	// (0x00027b65) title_pane_g1_ParamLimits

0x92d3,	// (0x00027b72) title_pane_g2_ParamLimits

0xf592,	// (0x0002de31) title_pane_g_ParamLimits

0x4f6f,	// (0x0002380e) aid_call2_pane

0x4f67,	// (0x00023806) aid_call_pane

0x4f77,	// (0x00023816) popup_clock_analogue_window_g1

0x4f77,	// (0x00023816) popup_clock_analogue_window_g2

0x9935,	// (0x000281d4) popup_clock_analogue_window_g3

0x993e,	// (0x000281dd) popup_clock_analogue_window_g4

0x43d8,	// (0x00022c77) popup_clock_analogue_window_g5

0x0004,

0xf73c,	// (0x0002dfdb) popup_clock_analogue_window_g

0x9946,	// (0x000281e5) popup_clock_analogue_window_t1

0x9981,	// (0x00028220) clock_digital_number_pane_ParamLimits

0x9981,	// (0x00028220) clock_digital_number_pane

0x998d,	// (0x0002822c) clock_digital_number_pane_cp02_ParamLimits

0x998d,	// (0x0002822c) clock_digital_number_pane_cp02

0x9999,	// (0x00028238) clock_digital_number_pane_cp03_ParamLimits

0x9999,	// (0x00028238) clock_digital_number_pane_cp03

0x99a5,	// (0x00028244) clock_digital_number_pane_cp04_ParamLimits

0x99a5,	// (0x00028244) clock_digital_number_pane_cp04

0x99b1,	// (0x00028250) clock_digital_separator_pane_ParamLimits

0x99b1,	// (0x00028250) clock_digital_separator_pane

0x99bd,	// (0x0002825c) popup_clock_digital_window_t1_ParamLimits

0x99bd,	// (0x0002825c) popup_clock_digital_window_t1

0x43d8,	// (0x00022c77) clock_digital_number_pane_g1

0x43d8,	// (0x00022c77) clock_digital_number_pane_g2

0x0001,

0xf747,	// (0x0002dfe6) clock_digital_number_pane_g

0x43d8,	// (0x00022c77) clock_digital_separator_pane_g1

0x43d8,	// (0x00022c77) clock_digital_separator_pane_g2

0x0001,

0xf747,	// (0x0002dfe6) clock_digital_separator_pane_g

0xa3bf,	// (0x00028c5e) aid_fill_nsta_ParamLimits

0xa484,	// (0x00028d23) indicator_nsta_pane_ParamLimits

0x58df,	// (0x0002417e) popup_clock_analogue_window

0x58df,	// (0x0002417e) popup_clock_digital_window

0x443e,	// (0x00022cdd) grid_indicator_nsta_pane_ParamLimits

0x7435,	// (0x00025cd4) clock_nsta_pane_t2

0x0001,

0xfad3,	// (0x0002e372) clock_nsta_pane_t

0x98f9,	// (0x00028198) aid_size_max_handle

0x9903,	// (0x000281a2) aid_size_min_handle

0x5464,	// (0x00023d03) editor_scroll_pane

0x7d9c,	// (0x0002663b) ex_editor_pane

0x4b5e,	// (0x000233fd) scroll_pane_cp13

0x49de,	// (0x0002327d) scroll_pane_cp14

0x4fa1,	// (0x00023840) scroll_pane_cp36

0x9968,	// (0x00028207) list_single_graphic_hl_pane_cp2_ParamLimits

0x9968,	// (0x00028207) list_single_graphic_hl_pane_cp2

0xae75,	// (0x00029714) list_single_graphic_hl_pane_ParamLimits

0xae75,	// (0x00029714) list_single_graphic_hl_pane

0xdacf,	// (0x0002c36e) aid_size_min_hl_cp1

0x7da4,	// (0x00026643) list_highlight_pane_cp34_ParamLimits

0x7da4,	// (0x00026643) list_highlight_pane_cp34

0x7db5,	// (0x00026654) list_single_graphic_hl_pane_g1_ParamLimits

0x7db5,	// (0x00026654) list_single_graphic_hl_pane_g1

0xdad8,	// (0x0002c377) list_single_graphic_hl_pane_g2_ParamLimits

0xdad8,	// (0x0002c377) list_single_graphic_hl_pane_g2

0xdad8,	// (0x0002c377) list_single_graphic_hl_pane_g3_ParamLimits

0xdad8,	// (0x0002c377) list_single_graphic_hl_pane_g3

0xd4ab,	// (0x0002bd4a) list_single_graphic_hl_pane_g4_ParamLimits

0xd4ab,	// (0x0002bd4a) list_single_graphic_hl_pane_g4

0xdae4,	// (0x0002c383) list_single_graphic_hl_pane_g5_ParamLimits

0xdae4,	// (0x0002c383) list_single_graphic_hl_pane_g5

0x0004,

0xfc11,	// (0x0002e4b0) list_single_graphic_hl_pane_g_ParamLimits

0xfc11,	// (0x0002e4b0) list_single_graphic_hl_pane_g

0xdaf8,	// (0x0002c397) list_single_graphic_hl_pane_t1_ParamLimits

0xdaf8,	// (0x0002c397) list_single_graphic_hl_pane_t1

0x7dc2,	// (0x00026661) aid_size_min_hl_cp2

0x7dcb,	// (0x0002666a) list_highlight_pane_cp34_cp2_ParamLimits

0x7dcb,	// (0x0002666a) list_highlight_pane_cp34_cp2

0x7db5,	// (0x00026654) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7db5,	// (0x00026654) list_single_graphic_hl_pane_g1_cp2

0x7dd8,	// (0x00026677) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7dd8,	// (0x00026677) list_single_graphic_hl_pane_g2_cp2

0x7de4,	// (0x00026683) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7de4,	// (0x00026683) list_single_graphic_hl_pane_g3_cp2

0x6770,	// (0x0002500f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x6770,	// (0x0002500f) list_single_graphic_hl_pane_g4_cp2

0x7df2,	// (0x00026691) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7df2,	// (0x00026691) list_single_graphic_hl_pane_g5_cp2

0x9dff,	// (0x0002869e) control_pane_g4_ParamLimits

0x9dff,	// (0x0002869e) control_pane_g4

0x4b97,	// (0x00023436) bg_popup_sub_pane_cp10_ParamLimits

0x777a,	// (0x00026019) list_choice_list_pane_ParamLimits

0x7789,	// (0x00026028) scroll_pane_cp23

0x4571,	// (0x00022e10) bg_popup_preview_window_pane_cp02_ParamLimits

0x7c04,	// (0x000264a3) list_preview_fixed_pane_ParamLimits

0x7c1a,	// (0x000264b9) list_preview_fixed_pane_cp_ParamLimits

0x7c1a,	// (0x000264b9) list_preview_fixed_pane_cp

0x7c26,	// (0x000264c5) popup_preview_fixed_window_g1_ParamLimits

0x7c26,	// (0x000264c5) popup_preview_fixed_window_g1

0x7c32,	// (0x000264d1) popup_preview_fixed_window_g2_ParamLimits

0x7c32,	// (0x000264d1) popup_preview_fixed_window_g2

0x0002,

0xfb99,	// (0x0002e438) popup_preview_fixed_window_g_ParamLimits

0xfb99,	// (0x0002e438) popup_preview_fixed_window_g

0x97ec,	// (0x0002808b) aid_navi_side_left_pane_ParamLimits

0x9801,	// (0x000280a0) aid_navi_side_right_pane_ParamLimits

0x9819,	// (0x000280b8) navi_icon_pane_stacon_ParamLimits

0x982d,	// (0x000280cc) navi_navi_pane_stacon_ParamLimits

0x9819,	// (0x000280b8) navi_text_pane_stacon_ParamLimits

0x43ce,	// (0x00022c6d) main_text_info_pane

0x7e1c,	// (0x000266bb) listscroll_text_info_pane

0x7e24,	// (0x000266c3) list_text_info_pane_ParamLimits

0x7e24,	// (0x000266c3) list_text_info_pane

0x7e33,	// (0x000266d2) scroll_pane_cp24_ParamLimits

0x7e33,	// (0x000266d2) scroll_pane_cp24

0xb919,	// (0x0002a1b8) list_text_info_pane_t1_ParamLimits

0xb919,	// (0x0002a1b8) list_text_info_pane_t1

0x9f4a,	// (0x000287e9) popup_fast_swap2_window_ParamLimits

0x9f4a,	// (0x000287e9) popup_fast_swap2_window

0x7e51,	// (0x000266f0) aid_size_cell_fast2

0x43ce,	// (0x00022c6d) bg_popup_window_pane_cp17

0x5d8b,	// (0x0002462a) heading_pane_cp2

0x4763,	// (0x00023002) listscroll_fast2_pane

0x7e5b,	// (0x000266fa) grid_fast2_pane

0x7e65,	// (0x00026704) listscroll_fast2_pane_g1

0x7e6d,	// (0x0002670c) listscroll_fast2_pane_g2

0x0001,

0xfc1c,	// (0x0002e4bb) listscroll_fast2_pane_g

0x4b5e,	// (0x000233fd) scroll_pane_cp26

0x7e77,	// (0x00026716) cell_fast2_pane_ParamLimits

0x7e77,	// (0x00026716) cell_fast2_pane

0x7e8c,	// (0x0002672b) cell_fast2_pane_g1

0x7e95,	// (0x00026734) cell_fast2_pane_g2

0x7e9e,	// (0x0002673d) cell_fast2_pane_g3

0x0002,

0xfc21,	// (0x0002e4c0) cell_fast2_pane_g

0x47a5,	// (0x00023044) grid_highlight_pane_cp9

0x47ba,	// (0x00023059) main_eswt_pane_ParamLimits

0x47ba,	// (0x00023059) main_eswt_pane

0x7e48,	// (0x000266e7) list_single_text_info_pane

0x7ea6,	// (0x00026745) eswt_ctrl_button_pane

0x7ea6,	// (0x00026745) eswt_ctrl_canvas_pane

0x7eae,	// (0x0002674d) eswt_ctrl_combo_pane

0x7ea6,	// (0x00026745) eswt_ctrl_default_pane

0x7ea6,	// (0x00026745) eswt_ctrl_label_pane

0x7eb6,	// (0x00026755) eswt_ctrl_wait_pane

0x7ebe,	// (0x0002675d) eswt_shell_pane

0x43ce,	// (0x00022c6d) listscroll_eswt_app_pane

0x7ede,	// (0x0002677d) popup_eswt_tasktip_window_ParamLimits

0x7ede,	// (0x0002677d) popup_eswt_tasktip_window

0x5ade,	// (0x0002437d) bg_popup_window_pane_cp18

0x7eef,	// (0x0002678e) eswt_control_pane_g1_ParamLimits

0x7eef,	// (0x0002678e) eswt_control_pane_g1

0x7efc,	// (0x0002679b) eswt_control_pane_g2_ParamLimits

0x7efc,	// (0x0002679b) eswt_control_pane_g2

0x7f09,	// (0x000267a8) eswt_control_pane_g3_ParamLimits

0x7f09,	// (0x000267a8) eswt_control_pane_g3

0x7f16,	// (0x000267b5) eswt_control_pane_g4_ParamLimits

0x7f16,	// (0x000267b5) eswt_control_pane_g4

0x0003,

0xfc28,	// (0x0002e4c7) eswt_control_pane_g_ParamLimits

0xfc28,	// (0x0002e4c7) eswt_control_pane_g

0x4a3f,	// (0x000232de) bg_button_pane_ParamLimits

0x4a3f,	// (0x000232de) bg_button_pane

0x47ba,	// (0x00023059) common_borders_pane_copy2_ParamLimits

0x47ba,	// (0x00023059) common_borders_pane_copy2

0x7f23,	// (0x000267c2) control_button_pane_g1_ParamLimits

0x7f23,	// (0x000267c2) control_button_pane_g1

0x7f2f,	// (0x000267ce) control_button_pane_g2_ParamLimits

0x7f2f,	// (0x000267ce) control_button_pane_g2

0x7f3b,	// (0x000267da) control_button_pane_g3_ParamLimits

0x7f3b,	// (0x000267da) control_button_pane_g3

0x0002,

0xfc31,	// (0x0002e4d0) control_button_pane_g_ParamLimits

0xfc31,	// (0x0002e4d0) control_button_pane_g

0x7f4f,	// (0x000267ee) control_button_pane_t1

0x7f5d,	// (0x000267fc) control_button_pane_t2

0x0001,

0xfc38,	// (0x0002e4d7) control_button_pane_t

0x59ee,	// (0x0002428d) bg_button_pane_g1

0x59f6,	// (0x00024295) bg_button_pane_g2

0x59fe,	// (0x0002429d) bg_button_pane_g3

0x5a06,	// (0x000242a5) bg_button_pane_g4

0x5a0e,	// (0x000242ad) bg_button_pane_g5

0x5a16,	// (0x000242b5) bg_button_pane_g6

0x5a1e,	// (0x000242bd) bg_button_pane_g7

0x5a26,	// (0x000242c5) bg_button_pane_g8

0x5a2e,	// (0x000242cd) bg_button_pane_g9

0x0008,

0xf89f,	// (0x0002e13e) bg_button_pane_g

0x7727,	// (0x00025fc6) common_borders_pane_ParamLimits

0x7727,	// (0x00025fc6) common_borders_pane

0x7eef,	// (0x0002678e) eswt_control_pane_g1_copy1_ParamLimits

0x7eef,	// (0x0002678e) eswt_control_pane_g1_copy1

0x7efc,	// (0x0002679b) eswt_control_pane_g2_copy1_ParamLimits

0x7efc,	// (0x0002679b) eswt_control_pane_g2_copy1

0x7f09,	// (0x000267a8) eswt_control_pane_g3_copy1_ParamLimits

0x7f09,	// (0x000267a8) eswt_control_pane_g3_copy1

0x7f16,	// (0x000267b5) eswt_control_pane_g4_copy1_ParamLimits

0x7f16,	// (0x000267b5) eswt_control_pane_g4_copy1

0x7770,	// (0x0002600f) bg_eswt_ctrl_canvas_pane_g1

0x7727,	// (0x00025fc6) common_borders_pane_cp2_ParamLimits

0x7727,	// (0x00025fc6) common_borders_pane_cp2

0x7727,	// (0x00025fc6) common_borders_pane_cp3_ParamLimits

0x7727,	// (0x00025fc6) common_borders_pane_cp3

0x7f6b,	// (0x0002680a) separator_horizontal_pane

0x7f73,	// (0x00026812) separator_vertical_pane

0x7eef,	// (0x0002678e) eswt_control_pane_g1_copy2_ParamLimits

0x7eef,	// (0x0002678e) eswt_control_pane_g1_copy2

0x7efc,	// (0x0002679b) eswt_control_pane_g2_copy2_ParamLimits

0x7efc,	// (0x0002679b) eswt_control_pane_g2_copy2

0x7f09,	// (0x000267a8) eswt_control_pane_g3_copy2_ParamLimits

0x7f09,	// (0x000267a8) eswt_control_pane_g3_copy2

0x7f16,	// (0x000267b5) eswt_control_pane_g4_copy2_ParamLimits

0x7f16,	// (0x000267b5) eswt_control_pane_g4_copy2

0x43ce,	// (0x00022c6d) common_borders_pane_cp4

0x7f7c,	// (0x0002681b) separator_horizontal_pane_g1

0x7f85,	// (0x00026824) separator_horizontal_pane_g2

0x7f8e,	// (0x0002682d) separator_horizontal_pane_g3

0x0002,

0xfc3d,	// (0x0002e4dc) separator_horizontal_pane_g

0x7eef,	// (0x0002678e) eswt_control_pane_g1_copy3_ParamLimits

0x7eef,	// (0x0002678e) eswt_control_pane_g1_copy3

0x7efc,	// (0x0002679b) eswt_control_pane_g2_copy3_ParamLimits

0x7efc,	// (0x0002679b) eswt_control_pane_g2_copy3

0x7f09,	// (0x000267a8) eswt_control_pane_g3_copy3_ParamLimits

0x7f09,	// (0x000267a8) eswt_control_pane_g3_copy3

0x7f16,	// (0x000267b5) eswt_control_pane_g4_copy3_ParamLimits

0x7f16,	// (0x000267b5) eswt_control_pane_g4_copy3

0x43ce,	// (0x00022c6d) common_borders_pane_cp5

0x7f97,	// (0x00026836) separator_vertical_pane_g1

0x7fa0,	// (0x0002683f) separator_vertical_pane_g2

0x7fa9,	// (0x00026848) separator_vertical_pane_g3

0x0002,

0xfc44,	// (0x0002e4e3) separator_vertical_pane_g

0x7eef,	// (0x0002678e) eswt_control_pane_g1_copy4_ParamLimits

0x7eef,	// (0x0002678e) eswt_control_pane_g1_copy4

0x7efc,	// (0x0002679b) eswt_control_pane_g2_copy4_ParamLimits

0x7efc,	// (0x0002679b) eswt_control_pane_g2_copy4

0x7f09,	// (0x000267a8) eswt_control_pane_g3_copy4_ParamLimits

0x7f09,	// (0x000267a8) eswt_control_pane_g3_copy4

0x7f16,	// (0x000267b5) eswt_control_pane_g4_copy4_ParamLimits

0x7f16,	// (0x000267b5) eswt_control_pane_g4_copy4

0xb94a,	// (0x0002a1e9) eswt_ctrl_combo_button_pane

0xb952,	// (0x0002a1f1) eswt_ctrl_input_pane

0xb95a,	// (0x0002a1f9) popup_choice_list_window_cp70

0xb962,	// (0x0002a201) eswt_ctrl_input_pane_t1

0x43ce,	// (0x00022c6d) input_focus_pane_cp70

0x7727,	// (0x00025fc6) bg_button_pane_cp70_ParamLimits

0x7727,	// (0x00025fc6) bg_button_pane_cp70

0xb970,	// (0x0002a20f) eswt_ctrl_combo_button_pane_g1

0x7fb2,	// (0x00026851) wait_bar_pane_cp70

0x5ade,	// (0x0002437d) bg_popup_window_pane_cp70_ParamLimits

0x5ade,	// (0x0002437d) bg_popup_window_pane_cp70

0x7fba,	// (0x00026859) popup_eswt_tasktip_window_t1

0x7fd0,	// (0x0002686f) wait_bar_pane_cp71_ParamLimits

0x7fd0,	// (0x0002686f) wait_bar_pane_cp71

0x7fdc,	// (0x0002687b) grid_eswt_app_pane

0x4db2,	// (0x00023651) scroll_pane_cp70

0xb978,	// (0x0002a217) cell_eswt_app_pane_ParamLimits

0xb978,	// (0x0002a217) cell_eswt_app_pane

0xb9a8,	// (0x0002a247) cell_eswt_app_pane_g1_ParamLimits

0xb9a8,	// (0x0002a247) cell_eswt_app_pane_g1

0xb9d7,	// (0x0002a276) cell_eswt_app_pane_g2_ParamLimits

0xb9d7,	// (0x0002a276) cell_eswt_app_pane_g2

0x0001,

0xfc4b,	// (0x0002e4ea) cell_eswt_app_pane_g_ParamLimits

0xfc4b,	// (0x0002e4ea) cell_eswt_app_pane_g

0xba00,	// (0x0002a29f) cell_eswt_app_pane_t1_ParamLimits

0xba00,	// (0x0002a29f) cell_eswt_app_pane_t1

0x7fe5,	// (0x00026884) grid_highlight_pane_cp70_ParamLimits

0x7fe5,	// (0x00026884) grid_highlight_pane_cp70

0x5339,	// (0x00023bd8) set_content_pane_g1

0x5643,	// (0x00023ee2) status_small_volume_pane

0xba32,	// (0x0002a2d1) status_small_volume_pane_g1

0xba3a,	// (0x0002a2d9) volume_small2_pane

0xba43,	// (0x0002a2e2) volume_small2_pane_g1

0xba4c,	// (0x0002a2eb) volume_small2_pane_g2

0xba55,	// (0x0002a2f4) volume_small2_pane_g3

0xba5e,	// (0x0002a2fd) volume_small2_pane_g4

0xba67,	// (0x0002a306) volume_small2_pane_g5

0xba70,	// (0x0002a30f) volume_small2_pane_g6

0xba79,	// (0x0002a318) volume_small2_pane_g7

0xba82,	// (0x0002a321) volume_small2_pane_g8

0xba8b,	// (0x0002a32a) volume_small2_pane_g9

0xba94,	// (0x0002a333) volume_small2_pane_g10

0x0009,

0xfc50,	// (0x0002e4ef) volume_small2_pane_g

0x7a24,	// (0x000262c3) fep_vkb_top_text_pane_g1_ParamLimits

0xb6f0,	// (0x00029f8f) fep_vkb_top_text_pane_t1_ParamLimits

0x7c3e,	// (0x000264dd) popup_preview_fixed_window_g3_ParamLimits

0x7c3e,	// (0x000264dd) popup_preview_fixed_window_g3

0xa352,	// (0x00028bf1) popup_toolbar_trans_pane

0xace7,	// (0x00029586) aid_height_set_list_ParamLimits

0x677c,	// (0x0002501b) aid_size_parent_ParamLimits

0x4b97,	// (0x00023436) list_highlight_pane_cp2_ParamLimits

0x5339,	// (0x00023bd8) set_content_pane_g1_ParamLimits

0xd643,	// (0x0002bee2) list_single_image_pane_ParamLimits

0xd643,	// (0x0002bee2) list_single_image_pane

0x7ff1,	// (0x00026890) aid_size_cell_image_ParamLimits

0x7ff1,	// (0x00026890) aid_size_cell_image

0xba9d,	// (0x0002a33c) grid_single_image_pane_ParamLimits

0xba9d,	// (0x0002a33c) grid_single_image_pane

0x580b,	// (0x000240aa) list_single_image_pane_g1_ParamLimits

0x580b,	// (0x000240aa) list_single_image_pane_g1

0x7d1f,	// (0x000265be) list_single_image_pane_g2_ParamLimits

0x7d1f,	// (0x000265be) list_single_image_pane_g2

0x0001,

0xfc65,	// (0x0002e504) list_single_image_pane_g_ParamLimits

0xfc65,	// (0x0002e504) list_single_image_pane_g

0x5825,	// (0x000240c4) list_single_image_pane_t1_ParamLimits

0x5825,	// (0x000240c4) list_single_image_pane_t1

0xbaab,	// (0x0002a34a) cell_image_list_pane_ParamLimits

0xbaab,	// (0x0002a34a) cell_image_list_pane

0x7ffe,	// (0x0002689d) cell_image_list_pane_g1

0x8007,	// (0x000268a6) cell_image_list_pane_g2

0x0001,

0xfc6a,	// (0x0002e509) cell_image_list_pane_g

0x8010,	// (0x000268af) aid_size_cell_tb_trans_pane

0x4a3f,	// (0x000232de) bg_tb_trans_pane

0x8022,	// (0x000268c1) grid_tb_trans_pane

0x59ee,	// (0x0002428d) bg_tb_trans_pane_g1

0x59f6,	// (0x00024295) bg_tb_trans_pane_g2

0x59fe,	// (0x0002429d) bg_tb_trans_pane_g3

0x5a06,	// (0x000242a5) bg_tb_trans_pane_g4

0x5a0e,	// (0x000242ad) bg_tb_trans_pane_g5

0x5a26,	// (0x000242c5) bg_tb_trans_pane_g6

0x5a2e,	// (0x000242cd) bg_tb_trans_pane_g7

0x5a16,	// (0x000242b5) bg_tb_trans_pane_g8

0x5a1e,	// (0x000242bd) bg_tb_trans_pane_g9

0x0008,

0xfc6f,	// (0x0002e50e) bg_tb_trans_pane_g

0x8036,	// (0x000268d5) cell_toolbar_trans_pane_ParamLimits

0x8036,	// (0x000268d5) cell_toolbar_trans_pane

0x7770,	// (0x0002600f) cell_toolbar_trans_pane_g1

0xb22b,	// (0x00029aca) list_form2_midp_pane_t1

0xb239,	// (0x00029ad8) list_form2_midp_pane_t2

0x0001,

0xfb0c,	// (0x0002e3ab) list_form2_midp_pane_t

0x74b4,	// (0x00025d53) scroll_pane_cp51_ParamLimits

0x762b,	// (0x00025eca) form2_midp_wait_pane_g1

0x7634,	// (0x00025ed3) form2_midp_wait_pane_g2

0x763d,	// (0x00025edc) form2_midp_wait_pane_g3

0x0002,

0xfb21,	// (0x0002e3c0) form2_midp_wait_pane_g

0x443e,	// (0x00022cdd) list_highlight_pane_cp21_ParamLimits

0x7665,	// (0x00025f04) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7674,	// (0x00025f13) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd5e4,	// (0x0002be83) list_single_2graphic_im_pane_ParamLimits

0xd5e4,	// (0x0002be83) list_single_2graphic_im_pane

0xbabe,	// (0x0002a35d) list_single_2graphic_im_pane_g1_ParamLimits

0xbabe,	// (0x0002a35d) list_single_2graphic_im_pane_g1

0xbacf,	// (0x0002a36e) list_single_2graphic_im_pane_g2_ParamLimits

0xbacf,	// (0x0002a36e) list_single_2graphic_im_pane_g2

0xbadb,	// (0x0002a37a) list_single_2graphic_im_pane_g3_ParamLimits

0xbadb,	// (0x0002a37a) list_single_2graphic_im_pane_g3

0x0003,

0xfc82,	// (0x0002e521) list_single_2graphic_im_pane_g_ParamLimits

0xfc82,	// (0x0002e521) list_single_2graphic_im_pane_g

0xbaef,	// (0x0002a38e) list_single_2graphic_im_pane_t1_ParamLimits

0xbaef,	// (0x0002a38e) list_single_2graphic_im_pane_t1

0x7c4a,	// (0x000264e9) list_single_graphic_2heading_pane_fp_ParamLimits

0x7c4a,	// (0x000264e9) list_single_graphic_2heading_pane_fp

0xd941,	// (0x0002c1e0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd941,	// (0x0002c1e0) list_single_graphic_2heading_pane_fp_g1

0x7c5f,	// (0x000264fe) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7c5f,	// (0x000264fe) list_single_graphic_2heading_pane_fp_g2

0xd90a,	// (0x0002c1a9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd90a,	// (0x0002c1a9) list_single_graphic_2heading_pane_fp_g3

0xd916,	// (0x0002c1b5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd916,	// (0x0002c1b5) list_single_graphic_2heading_pane_fp_g4

0x7c6b,	// (0x0002650a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7c6b,	// (0x0002650a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba9,	// (0x0002e448) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba9,	// (0x0002e448) list_single_graphic_2heading_pane_fp_g

0xdb0e,	// (0x0002c3ad) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xdb0e,	// (0x0002c3ad) list_single_graphic_2heading_pane_fp_t1

0xd979,	// (0x0002c218) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd979,	// (0x0002c218) list_single_graphic_2heading_pane_fp_t2

0xdb24,	// (0x0002c3c3) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xdb24,	// (0x0002c3c3) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc8b,	// (0x0002e52a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc8b,	// (0x0002e52a) list_single_graphic_2heading_pane_fp_t

0x7810,	// (0x000260af) fep_hwr_write_pane_g5_ParamLimits

0x7810,	// (0x000260af) fep_hwr_write_pane_g5

0x781c,	// (0x000260bb) fep_hwr_write_pane_g6_ParamLimits

0x781c,	// (0x000260bb) fep_hwr_write_pane_g6

0x7ebe,	// (0x0002675d) eswt_shell_pane_ParamLimits

0x5ade,	// (0x0002437d) bg_popup_window_pane_cp18_ParamLimits

0x6af4,	// (0x00025393) heading_pane_cp70

0x7fba,	// (0x00026859) popup_eswt_tasktip_window_t1_ParamLimits

0xa3ff,	// (0x00028c9e) aid_touch_tab_arrow_left

0xa40b,	// (0x00028caa) aid_touch_tab_arrow_right

0x92e4,	// (0x00027b83) title_pane_g3_ParamLimits

0x92e4,	// (0x00027b83) title_pane_g3

0x49fe,	// (0x0002329d) set_value_pane_g1

0xa352,	// (0x00028bf1) popup_toolbar_trans_pane_ParamLimits

0x8010,	// (0x000268af) aid_size_cell_tb_trans_pane_ParamLimits

0x4a3f,	// (0x000232de) bg_tb_trans_pane_ParamLimits

0x8022,	// (0x000268c1) grid_tb_trans_pane_ParamLimits

0x4571,	// (0x00022e10) cont_note_pane_ParamLimits

0x4571,	// (0x00022e10) cont_note_pane

0x47ba,	// (0x00023059) cont_snote2_single_text_pane_ParamLimits

0x47ba,	// (0x00023059) cont_snote2_single_text_pane

0x47ba,	// (0x00023059) cont_snote2_single_graphic_pane_ParamLimits

0x47ba,	// (0x00023059) cont_snote2_single_graphic_pane

0x5f75,	// (0x00024814) cont_note_wait_pane_ParamLimits

0x5f75,	// (0x00024814) cont_note_wait_pane

0x5f75,	// (0x00024814) cont_note_image_pane_ParamLimits

0x5f75,	// (0x00024814) cont_note_image_pane

0x8068,	// (0x00026907) popup_note2_window_g1_ParamLimits

0x8068,	// (0x00026907) popup_note2_window_g1

0x8099,	// (0x00026938) popup_note2_window_t1_ParamLimits

0x8099,	// (0x00026938) popup_note2_window_t1

0x80de,	// (0x0002697d) popup_note2_window_t2_ParamLimits

0x80de,	// (0x0002697d) popup_note2_window_t2

0x8123,	// (0x000269c2) popup_note2_window_t3_ParamLimits

0x8123,	// (0x000269c2) popup_note2_window_t3

0x8168,	// (0x00026a07) popup_note2_window_t4_ParamLimits

0x8168,	// (0x00026a07) popup_note2_window_t4

0x45f5,	// (0x00022e94) popup_note2_window_t5_ParamLimits

0x45f5,	// (0x00022e94) popup_note2_window_t5

0x0004,

0xfc97,	// (0x0002e536) popup_note2_window_t_ParamLimits

0xfc97,	// (0x0002e536) popup_note2_window_t

0x8197,	// (0x00026a36) popup_note2_image_window_g1_ParamLimits

0x8197,	// (0x00026a36) popup_note2_image_window_g1

0x81a3,	// (0x00026a42) popup_note2_image_window_g2_ParamLimits

0x81a3,	// (0x00026a42) popup_note2_image_window_g2

0x0001,

0xfca2,	// (0x0002e541) popup_note2_image_window_g_ParamLimits

0xfca2,	// (0x0002e541) popup_note2_image_window_g

0x81b5,	// (0x00026a54) popup_note2_image_window_t1_ParamLimits

0x81b5,	// (0x00026a54) popup_note2_image_window_t1

0x81cd,	// (0x00026a6c) popup_note2_image_window_t2_ParamLimits

0x81cd,	// (0x00026a6c) popup_note2_image_window_t2

0x81e5,	// (0x00026a84) popup_note2_image_window_t3_ParamLimits

0x81e5,	// (0x00026a84) popup_note2_image_window_t3

0x0002,

0xfca7,	// (0x0002e546) popup_note2_image_window_t_ParamLimits

0xfca7,	// (0x0002e546) popup_note2_image_window_t

0x5f83,	// (0x00024822) popup_note2_wait_window_g1_ParamLimits

0x5f83,	// (0x00024822) popup_note2_wait_window_g1

0x8201,	// (0x00026aa0) popup_note2_wait_window_g2_ParamLimits

0x8201,	// (0x00026aa0) popup_note2_wait_window_g2

0x5f9b,	// (0x0002483a) popup_note2_wait_window_g3_ParamLimits

0x5f9b,	// (0x0002483a) popup_note2_wait_window_g3

0x0002,

0xfcae,	// (0x0002e54d) popup_note2_wait_window_g_ParamLimits

0xfcae,	// (0x0002e54d) popup_note2_wait_window_g

0x820d,	// (0x00026aac) popup_note2_wait_window_t1_ParamLimits

0x820d,	// (0x00026aac) popup_note2_wait_window_t1

0x822b,	// (0x00026aca) popup_note2_wait_window_t2_ParamLimits

0x822b,	// (0x00026aca) popup_note2_wait_window_t2

0x8249,	// (0x00026ae8) popup_note2_wait_window_t3_ParamLimits

0x8249,	// (0x00026ae8) popup_note2_wait_window_t3

0x825b,	// (0x00026afa) popup_note2_wait_window_t4_ParamLimits

0x825b,	// (0x00026afa) popup_note2_wait_window_t4

0x0003,

0xfcb5,	// (0x0002e554) popup_note2_wait_window_t_ParamLimits

0xfcb5,	// (0x0002e554) popup_note2_wait_window_t

0x826d,	// (0x00026b0c) wait_bar2_pane_ParamLimits

0x826d,	// (0x00026b0c) wait_bar2_pane

0x8285,	// (0x00026b24) popup_snote2_single_text_window_g1_ParamLimits

0x8285,	// (0x00026b24) popup_snote2_single_text_window_g1

0x82ad,	// (0x00026b4c) popup_snote2_single_text_window_t1_ParamLimits

0x82ad,	// (0x00026b4c) popup_snote2_single_text_window_t1

0x82f9,	// (0x00026b98) popup_snote2_single_text_window_t2_ParamLimits

0x82f9,	// (0x00026b98) popup_snote2_single_text_window_t2

0x8345,	// (0x00026be4) popup_snote2_single_text_window_t3_ParamLimits

0x8345,	// (0x00026be4) popup_snote2_single_text_window_t3

0x8386,	// (0x00026c25) popup_snote2_single_text_window_t4_ParamLimits

0x8386,	// (0x00026c25) popup_snote2_single_text_window_t4

0x83bc,	// (0x00026c5b) popup_snote2_single_text_window_t5_ParamLimits

0x83bc,	// (0x00026c5b) popup_snote2_single_text_window_t5

0x0004,

0xfcbe,	// (0x0002e55d) popup_snote2_single_text_window_t_ParamLimits

0xfcbe,	// (0x0002e55d) popup_snote2_single_text_window_t

0x83e7,	// (0x00026c86) popup_snote2_single_graphic_window_g1_ParamLimits

0x83e7,	// (0x00026c86) popup_snote2_single_graphic_window_g1

0x840f,	// (0x00026cae) popup_snote2_single_graphic_window_g2_ParamLimits

0x840f,	// (0x00026cae) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc9,	// (0x0002e568) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc9,	// (0x0002e568) popup_snote2_single_graphic_window_g

0x8437,	// (0x00026cd6) popup_snote2_single_graphic_window_t1_ParamLimits

0x8437,	// (0x00026cd6) popup_snote2_single_graphic_window_t1

0x8483,	// (0x00026d22) popup_snote2_single_graphic_window_t2_ParamLimits

0x8483,	// (0x00026d22) popup_snote2_single_graphic_window_t2

0x8345,	// (0x00026be4) popup_snote2_single_graphic_window_t3_ParamLimits

0x8345,	// (0x00026be4) popup_snote2_single_graphic_window_t3

0x8386,	// (0x00026c25) popup_snote2_single_graphic_window_t4_ParamLimits

0x8386,	// (0x00026c25) popup_snote2_single_graphic_window_t4

0x83bc,	// (0x00026c5b) popup_snote2_single_graphic_window_t5_ParamLimits

0x83bc,	// (0x00026c5b) popup_snote2_single_graphic_window_t5

0x0004,

0xfcce,	// (0x0002e56d) popup_snote2_single_graphic_window_t_ParamLimits

0xfcce,	// (0x0002e56d) popup_snote2_single_graphic_window_t

0x746a,	// (0x00025d09) clock_nsta_pane_cp2_t1

0x746a,	// (0x00025d09) clock_nsta_pane_cp2_t2

0x0001,

0xfae2,	// (0x0002e381) clock_nsta_pane_cp2_t

0xd265,	// (0x0002bb04) form_field_data_wide_pane_g1_ParamLimits

0x4a59,	// (0x000232f8) form_field_data_wide_pane_g2_ParamLimits

0x4a59,	// (0x000232f8) form_field_data_wide_pane_g2

0x4a65,	// (0x00023304) form_field_data_wide_pane_g3_ParamLimits

0x4a65,	// (0x00023304) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x0002df5e) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x0002df5e) form_field_data_wide_pane_g

0xb0a3,	// (0x00029942) grid_touch_3_pane_ParamLimits

0xb0a3,	// (0x00029942) grid_touch_3_pane

0xbb20,	// (0x0002a3bf) cell_touch_3_pane_ParamLimits

0xbb20,	// (0x0002a3bf) cell_touch_3_pane

0x7770,	// (0x0002600f) cell_touch_3_pane_g1

0x7770,	// (0x0002600f) cell_touch_3_pane_g2

0x0001,

0xfb67,	// (0x0002e406) cell_touch_3_pane_g

0x4627,	// (0x00022ec6) cont_query_data_pane

0x462f,	// (0x00022ece) cont_query_data_pane_cp1

0xbb4e,	// (0x0002a3ed) button_value_adjust_pane_cp7

0xbb56,	// (0x0002a3f5) query_popup_pane_cp3

0x4fd3,	// (0x00023872) bg_popup_sub_pane_cp22_ParamLimits

0x9a18,	// (0x000282b7) navi_navi_volume_pane_cp2

0x9a33,	// (0x000282d2) popup_side_volume_key_window_g2

0x9a42,	// (0x000282e1) popup_side_volume_key_window_g3

0x0002,

0xf751,	// (0x0002dff0) popup_side_volume_key_window_g

0x9a5f,	// (0x000282fe) popup_side_volume_key_window_t2

0x0001,

0xf758,	// (0x0002dff7) popup_side_volume_key_window_t

0x5203,	// (0x00023aa2) popup_side_volume_key_window_ParamLimits

0xcea0,	// (0x0002b73f) list_double_graphic_pane_g4_ParamLimits

0xcea0,	// (0x0002b73f) list_double_graphic_pane_g4

0xd623,	// (0x0002bec2) list_single_2heading_msg_pane_ParamLimits

0xd623,	// (0x0002bec2) list_single_2heading_msg_pane

0xdb44,	// (0x0002c3e3) list_single_2heading_msg_pane_g1_ParamLimits

0xdb44,	// (0x0002c3e3) list_single_2heading_msg_pane_g1

0xcccf,	// (0x0002b56e) list_single_2heading_msg_pane_g2_ParamLimits

0xcccf,	// (0x0002b56e) list_single_2heading_msg_pane_g2

0xdb50,	// (0x0002c3ef) list_single_2heading_msg_pane_g3_ParamLimits

0xdb50,	// (0x0002c3ef) list_single_2heading_msg_pane_g3

0xdb5c,	// (0x0002c3fb) list_single_2heading_msg_pane_g4_ParamLimits

0xdb5c,	// (0x0002c3fb) list_single_2heading_msg_pane_g4

0x0003,

0xfcd9,	// (0x0002e578) list_single_2heading_msg_pane_g_ParamLimits

0xfcd9,	// (0x0002e578) list_single_2heading_msg_pane_g

0xdb74,	// (0x0002c413) list_single_2heading_msg_pane_t1_ParamLimits

0xdb74,	// (0x0002c413) list_single_2heading_msg_pane_t1

0xdb9c,	// (0x0002c43b) list_single_2heading_msg_pane_t2_ParamLimits

0xdb9c,	// (0x0002c43b) list_single_2heading_msg_pane_t2

0xdbd0,	// (0x0002c46f) list_single_2heading_msg_pane_t3_ParamLimits

0xdbd0,	// (0x0002c46f) list_single_2heading_msg_pane_t3

0xdc09,	// (0x0002c4a8) list_single_2heading_msg_pane_t4_ParamLimits

0xdc09,	// (0x0002c4a8) list_single_2heading_msg_pane_t4

0x0003,

0xfce2,	// (0x0002e581) list_single_2heading_msg_pane_t_ParamLimits

0xfce2,	// (0x0002e581) list_single_2heading_msg_pane_t

0x43ec,	// (0x00022c8b) title_pane_g4_ParamLimits

0x43ec,	// (0x00022c8b) title_pane_g4

0x973c,	// (0x00027fdb) title_pane_stacon_g3_ParamLimits

0x973c,	// (0x00027fdb) title_pane_stacon_g3

0x805c,	// (0x000268fb) list_single_2graphic_im_pane_g4_ParamLimits

0x805c,	// (0x000268fb) list_single_2graphic_im_pane_g4

0x6918,	// (0x000251b7) popup_side_volume_key_window_cp

0x6de5,	// (0x00025684) main_idle_act2_pane_t1

0xa704,	// (0x00028fa3) toolbar_button_pane_g10

0x963c,	// (0x00027edb) popup_toolbar_window_cp1

0x745b,	// (0x00025cfa) clock_nsta_pane_cp_t1

0x745b,	// (0x00025cfa) clock_nsta_pane_cp_t2

0x0001,

0xfadd,	// (0x0002e37c) clock_nsta_pane_cp_t

0x9a18,	// (0x000282b7) navi_navi_volume_pane_cp2_ParamLimits

0x9a27,	// (0x000282c6) popup_side_volume_key_window_g1_ParamLimits

0x9a33,	// (0x000282d2) popup_side_volume_key_window_g2_ParamLimits

0x9a42,	// (0x000282e1) popup_side_volume_key_window_g3_ParamLimits

0xf751,	// (0x0002dff0) popup_side_volume_key_window_g_ParamLimits

0xb3c2,	// (0x00029c61) fep_hwr_aid_pane

0xb469,	// (0x00029d08) bg_fep_hwr_top_pane_g4_ParamLimits

0x77f2,	// (0x00026091) fep_hwr_top_pane_g1_ParamLimits

0x77e0,	// (0x0002607f) fep_hwr_top_pane_g2_ParamLimits

0xb489,	// (0x00029d28) fep_hwr_top_pane_g3_ParamLimits

0xfb32,	// (0x0002e3d1) fep_hwr_top_pane_g_ParamLimits

0xb49e,	// (0x00029d3d) fep_hwr_top_text_pane_ParamLimits

0x66ba,	// (0x00024f59) aid_touch_tab_arrow_arrow_2

0x66b1,	// (0x00024f50) aid_touch_tab_arrow_left_2

0xb3d6,	// (0x00029c75) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xb40d,	// (0x00029cac) fep_hwr_prediction_pane

0x78df,	// (0x0002617e) fep_vkb_prediction_pane

0xb6cd,	// (0x00029f6c) fep_vkb_side_pane_g3_ParamLimits

0xb6cd,	// (0x00029f6c) fep_vkb_side_pane_g3

0xb7dc,	// (0x0002a07b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xb848,	// (0x0002a0e7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xb855,	// (0x0002a0f4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbe1,	// (0x0002e480) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xbb7b,	// (0x0002a41a) fep_hwr_prediction_pane_g1

0xbb85,	// (0x0002a424) fep_hwr_prediction_pane_g2

0xbb8d,	// (0x0002a42c) fep_hwr_prediction_pane_g3

0xbb95,	// (0x0002a434) fep_hwr_prediction_pane_g4

0x0003,

0xfceb,	// (0x0002e58a) fep_hwr_prediction_pane_g

0xbb9d,	// (0x0002a43c) fep_vkb_prediction_pane_g1

0xbba7,	// (0x0002a446) fep_vkb_prediction_pane_g2

0xbbaf,	// (0x0002a44e) fep_vkb_prediction_pane_g3

0xbbb7,	// (0x0002a456) fep_vkb_prediction_pane_g4

0x0003,

0xfcf4,	// (0x0002e593) fep_vkb_prediction_pane_g

0xac8f,	// (0x0002952e) slider_set_pane_g3

0xaca3,	// (0x00029542) slider_set_pane_g4

0xacbb,	// (0x0002955a) slider_set_pane_g5

0xac8f,	// (0x0002952e) slider_set_pane_g6

0xacd1,	// (0x00029570) slider_set_pane_g7

0x6b7f,	// (0x0002541e) slider_form_pane_g3

0x6b88,	// (0x00025427) slider_form_pane_g4

0x6b90,	// (0x0002542f) slider_form_pane_g5

0x6b7f,	// (0x0002541e) slider_form_pane_g6

0xae42,	// (0x000296e1) slider_form_pane_g7

0x7037,	// (0x000258d6) slider_set_pane_vc_g3

0x7040,	// (0x000258df) slider_set_pane_vc_g4

0x7049,	// (0x000258e8) slider_set_pane_vc_g5

0x7037,	// (0x000258d6) slider_set_pane_vc_g6

0x7052,	// (0x000258f1) slider_set_pane_vc_g7

0x7037,	// (0x000258d6) slider_form_pane_vc_g1

0x7040,	// (0x000258df) slider_form_pane_vc_g2

0x7049,	// (0x000258e8) slider_form_pane_vc_g3

0x7037,	// (0x000258d6) slider_form_pane_vc_g4

0x7205,	// (0x00025aa4) slider_form_pane_vc_g5

0x0004,

0xfac3,	// (0x0002e362) slider_form_pane_vc_g

0x43ce,	// (0x00022c6d) main_idle_act3_pane

0xbbbf,	// (0x0002a45e) ai3_links_pane

0xbbc8,	// (0x0002a467) popup_ai3_data_window_ParamLimits

0xbbc8,	// (0x0002a467) popup_ai3_data_window

0x43ce,	// (0x00022c6d) grid_ai3_links_pane

0xbbe2,	// (0x0002a481) cell_ai3_links_pane_ParamLimits

0xbbe2,	// (0x0002a481) cell_ai3_links_pane

0xbbfa,	// (0x0002a499) bg_popup_sub_pane_cp11

0xbc07,	// (0x0002a4a6) cell_ai3_links_pane_g1

0x43ce,	// (0x00022c6d) bg_popup_sub_pane_cp12

0xbc2c,	// (0x0002a4cb) heading_ai3_data_pane

0xbc34,	// (0x0002a4d3) list_ai3_gene_pane

0xbc40,	// (0x0002a4df) popup_ai3_data_window_g1

0xbc48,	// (0x0002a4e7) heading_ai3_data_pane_g1

0xbc50,	// (0x0002a4ef) heading_ai3_data_pane_t1

0xbc5e,	// (0x0002a4fd) list_double_ai3_gene_pane_ParamLimits

0xbc5e,	// (0x0002a4fd) list_double_ai3_gene_pane

0xbc6b,	// (0x0002a50a) list_single_ai3_gene_pane_ParamLimits

0xbc6b,	// (0x0002a50a) list_single_ai3_gene_pane

0x7727,	// (0x00025fc6) list_highlight_pane_cp7_ParamLimits

0x7727,	// (0x00025fc6) list_highlight_pane_cp7

0xbc78,	// (0x0002a517) list_single_a13_gene_pane_t1_ParamLimits

0xbc78,	// (0x0002a517) list_single_a13_gene_pane_t1

0xbc8f,	// (0x0002a52e) list_single_ai3_gene_pane_g1

0xbc98,	// (0x0002a537) list_single_ai3_gene_pane_g2

0x0001,

0xfcfd,	// (0x0002e59c) list_single_ai3_gene_pane_g

0xbca0,	// (0x0002a53f) list_double_ai3_gene_pane_g1_ParamLimits

0xbca0,	// (0x0002a53f) list_double_ai3_gene_pane_g1

0xbcac,	// (0x0002a54b) list_double_ai3_gene_pane_t1_ParamLimits

0xbcac,	// (0x0002a54b) list_double_ai3_gene_pane_t1

0xbcc8,	// (0x0002a567) list_double_ai3_gene_pane_t2_ParamLimits

0xbcc8,	// (0x0002a567) list_double_ai3_gene_pane_t2

0xbcde,	// (0x0002a57d) list_double_ai3_gene_pane_t3_ParamLimits

0xbcde,	// (0x0002a57d) list_double_ai3_gene_pane_t3

0x0002,

0xfd02,	// (0x0002e5a1) list_double_ai3_gene_pane_t_ParamLimits

0xfd02,	// (0x0002e5a1) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdb3a,	// (0x0002c3d9) aid_size_min_col_2

0xbb67,	// (0x0002a406) aid_size_min_msg_ParamLimits

0xbb67,	// (0x0002a406) aid_size_min_msg

0xb6e1,	// (0x00029f80) fep_vkb_top_text_pane_g2_ParamLimits

0xb6e1,	// (0x00029f80) fep_vkb_top_text_pane_g2

0x0001,

0xfb62,	// (0x0002e401) fep_vkb_top_text_pane_g_ParamLimits

0xfb62,	// (0x0002e401) fep_vkb_top_text_pane_g

0x43ce,	// (0x00022c6d) main_hc_apps_shell_pane

0xbcfb,	// (0x0002a59a) grid_hc_apps_pane_ParamLimits

0xbcfb,	// (0x0002a59a) grid_hc_apps_pane

0xbd0a,	// (0x0002a5a9) list_hc_apps_pane

0xbd12,	// (0x0002a5b1) scroll_pane_cp37_ParamLimits

0xbd12,	// (0x0002a5b1) scroll_pane_cp37

0xbd1e,	// (0x0002a5bd) cell_hc_apps_pane_ParamLimits

0xbd1e,	// (0x0002a5bd) cell_hc_apps_pane

0xbdcc,	// (0x0002a66b) cell_hc_apps_pane_g1_ParamLimits

0xbdcc,	// (0x0002a66b) cell_hc_apps_pane_g1

0xbdfd,	// (0x0002a69c) cell_hc_apps_pane_g2_ParamLimits

0xbdfd,	// (0x0002a69c) cell_hc_apps_pane_g2

0xbe19,	// (0x0002a6b8) cell_hc_apps_pane_g3_ParamLimits

0xbe19,	// (0x0002a6b8) cell_hc_apps_pane_g3

0x0002,

0xfd09,	// (0x0002e5a8) cell_hc_apps_pane_g_ParamLimits

0xfd09,	// (0x0002e5a8) cell_hc_apps_pane_g

0xbe3b,	// (0x0002a6da) cell_hc_apps_pane_t1_ParamLimits

0xbe3b,	// (0x0002a6da) cell_hc_apps_pane_t1

0x4571,	// (0x00022e10) grid_highlight_pane_cp10_ParamLimits

0x4571,	// (0x00022e10) grid_highlight_pane_cp10

0xbe7b,	// (0x0002a71a) list_single_hc_apps_pane_ParamLimits

0xbe7b,	// (0x0002a71a) list_single_hc_apps_pane

0xbed7,	// (0x0002a776) list_single_hc_apps_pane_g1

0xede1,	// (0x0002d680) list_single_hc_apps_pane_g2

0x0001,

0xfd10,	// (0x0002e5af) list_single_hc_apps_pane_g

0xedfa,	// (0x0002d699) list_single_hc_apps_pane_g2_copy1

0xee16,	// (0x0002d6b5) list_single_hc_apps_pane_t1

0x443e,	// (0x00022cdd) bg_set_opt_pane_cp_ParamLimits

0x9394,	// (0x00027c33) setting_slider_pane_t1_ParamLimits

0x93ad,	// (0x00027c4c) setting_slider_pane_t2_ParamLimits

0x93c7,	// (0x00027c66) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0002de41) setting_slider_pane_t_ParamLimits

0x93df,	// (0x00027c7e) slider_set_pane_ParamLimits

0x9e0b,	// (0x000286aa) control_pane_g5_ParamLimits

0x9e0b,	// (0x000286aa) control_pane_g5

0x6b3b,	// (0x000253da) slider_set_pane_g1_ParamLimits

0xac83,	// (0x00029522) slider_set_pane_g2_ParamLimits

0xac8f,	// (0x0002952e) slider_set_pane_g3_ParamLimits

0xaca3,	// (0x00029542) slider_set_pane_g4_ParamLimits

0xacbb,	// (0x0002955a) slider_set_pane_g5_ParamLimits

0xac8f,	// (0x0002952e) slider_set_pane_g6_ParamLimits

0xacd1,	// (0x00029570) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x0002e23c) slider_set_pane_g_ParamLimits

0x52e4,	// (0x00023b83) navi_icon_text_pane_ParamLimits

0xa3d5,	// (0x00028c74) aid_fill_nsta_2_ParamLimits

0xa3ff,	// (0x00028c9e) aid_touch_tab_arrow_left_ParamLimits

0xa40b,	// (0x00028caa) aid_touch_tab_arrow_right_ParamLimits

0xa477,	// (0x00028d16) clock_nsta_pane_ParamLimits

0xab59,	// (0x000293f8) navi_icon_pane_g1_ParamLimits

0xab68,	// (0x00029407) navi_text_pane_t1_ParamLimits

0xb1b6,	// (0x00029a55) navi_icon_text_pane_g1_ParamLimits

0xb1c5,	// (0x00029a64) navi_icon_text_pane_t1_ParamLimits

0xbed7,	// (0x0002a776) list_single_hc_apps_pane_g1_ParamLimits

0xede1,	// (0x0002d680) list_single_hc_apps_pane_g2_ParamLimits

0xfd10,	// (0x0002e5af) list_single_hc_apps_pane_g_ParamLimits

0xedfa,	// (0x0002d699) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xee16,	// (0x0002d6b5) list_single_hc_apps_pane_t1_ParamLimits

0x91e2,	// (0x00027a81) popup_toolbar2_fixed_window_ParamLimits

0x91e2,	// (0x00027a81) popup_toolbar2_fixed_window

0xa348,	// (0x00028be7) popup_toolbar2_float_window

0x43ce,	// (0x00022c6d) bg_popup_sub_pane_cp27

0xbef0,	// (0x0002a78f) grid_toolbar2_float_pane

0x43ce,	// (0x00022c6d) bg_popup_sub_pane_cp26

0xbef0,	// (0x0002a78f) grid_toolbar2_fixed_pane

0xbef8,	// (0x0002a797) cell_toolbar2_fixed_pane_ParamLimits

0xbef8,	// (0x0002a797) cell_toolbar2_fixed_pane

0xbf08,	// (0x0002a7a7) cell_toolbar2_fixed_pane_g1

0xbf11,	// (0x0002a7b0) toolbar2_fixed_button_pane

0x59ee,	// (0x0002428d) toolbar2_fixed_button_pane_g1

0x59f6,	// (0x00024295) toolbar2_fixed_button_pane_g2

0x59fe,	// (0x0002429d) toolbar2_fixed_button_pane_g3

0x5a06,	// (0x000242a5) toolbar2_fixed_button_pane_g4

0x5a0e,	// (0x000242ad) toolbar2_fixed_button_pane_g5

0x5a16,	// (0x000242b5) toolbar2_fixed_button_pane_g6

0x5a1e,	// (0x000242bd) toolbar2_fixed_button_pane_g7

0x5a26,	// (0x000242c5) toolbar2_fixed_button_pane_g8

0x5a2e,	// (0x000242cd) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x0002e13e) toolbar2_fixed_button_pane_g

0xbf19,	// (0x0002a7b8) cell_toolbar2_float_pane_ParamLimits

0xbf19,	// (0x0002a7b8) cell_toolbar2_float_pane

0xbf2a,	// (0x0002a7c9) cell_toolbar2_float_pane_g1

0xbf11,	// (0x0002a7b0) toolbar2_fixed_button_pane_cp

0xb5bb,	// (0x00029e5a) fep_vkb_accented_list_pane_ParamLimits

0xb5bb,	// (0x00029e5a) fep_vkb_accented_list_pane

0xb7bc,	// (0x0002a05b) bg_popup_fep_shadow_pane_g9

0x5464,	// (0x00023d03) bg_popup_fep_shadow_pane_cp3

0x4b45,	// (0x000233e4) list_accented_list_pane

0xbf33,	// (0x0002a7d2) list_single_accented_list_pane_ParamLimits

0xbf33,	// (0x0002a7d2) list_single_accented_list_pane

0x5464,	// (0x00023d03) list_highlight_pane_cp10

0xbf44,	// (0x0002a7e3) list_single_accented_list_pane_t1

0xa2a0,	// (0x00028b3f) popup_slider_window_ParamLimits

0xa2a0,	// (0x00028b3f) popup_slider_window

0xbb5e,	// (0x0002a3fd) aid_indentation_list_msg

0xbffe,	// (0x0002a89d) bg_popup_window_pane_cp19

0xc068,	// (0x0002a907) popup_slider_window_g1

0xc084,	// (0x0002a923) popup_slider_window_g2

0xc0a0,	// (0x0002a93f) popup_slider_window_g3

0x0005,

0xfd15,	// (0x0002e5b4) popup_slider_window_g

0xc0fc,	// (0x0002a99b) popup_slider_window_t1

0xc170,	// (0x0002aa0f) small_volume_slider_vertical_pane

0x7770,	// (0x0002600f) small_volume_slider_vertical_pane_g1

0x7770,	// (0x0002600f) small_volume_slider_vertical_pane_g2

0xc18c,	// (0x0002aa2b) small_volume_slider_vertical_pane_g3

0x0002,

0xfd27,	// (0x0002e5c6) small_volume_slider_vertical_pane_g

0x8f9a,	// (0x00027839) area_side_right_pane_ParamLimits

0x8f9a,	// (0x00027839) area_side_right_pane

0xc195,	// (0x0002aa34) aid_size_side_button_ParamLimits

0xc195,	// (0x0002aa34) aid_size_side_button

0xc1a9,	// (0x0002aa48) grid_sctrl_middle_pane_ParamLimits

0xc1a9,	// (0x0002aa48) grid_sctrl_middle_pane

0xc1c9,	// (0x0002aa68) sctrl_sk_bottom_pane

0xc1da,	// (0x0002aa79) sctrl_sk_top_pane

0xc1ec,	// (0x0002aa8b) aid_touch_sctrl_top

0xc1f9,	// (0x0002aa98) bg_sctrl_sk_pane_ParamLimits

0xc1f9,	// (0x0002aa98) bg_sctrl_sk_pane

0xc207,	// (0x0002aaa6) sctrl_sk_top_pane_g1

0xc214,	// (0x0002aab3) sctrl_sk_top_pane_t1

0xc1ec,	// (0x0002aa8b) aid_touch_sctrl_bottom

0xc1f9,	// (0x0002aa98) bg_sctrl_sk_pane_cp_ParamLimits

0xc1f9,	// (0x0002aa98) bg_sctrl_sk_pane_cp

0xc22f,	// (0x0002aace) sctrl_sk_bottom_pane_g1

0xc214,	// (0x0002aab3) sctrl_sk_bottom_pane_t1

0xc238,	// (0x0002aad7) cell_sctrl_middle_pane_ParamLimits

0xc238,	// (0x0002aad7) cell_sctrl_middle_pane

0xc253,	// (0x0002aaf2) aid_touch_sctrl_middle_ParamLimits

0xc253,	// (0x0002aaf2) aid_touch_sctrl_middle

0xc265,	// (0x0002ab04) bg_sctrl_middle_pane_ParamLimits

0xc265,	// (0x0002ab04) bg_sctrl_middle_pane

0xb7dc,	// (0x0002a07b) cell_sctrl_middle_pane_g1_ParamLimits

0xb7dc,	// (0x0002a07b) cell_sctrl_middle_pane_g1

0xc273,	// (0x0002ab12) cell_sctrl_middle_pane_g2_ParamLimits

0xc273,	// (0x0002ab12) cell_sctrl_middle_pane_g2

0x0001,

0xfd33,	// (0x0002e5d2) cell_sctrl_middle_pane_g_ParamLimits

0xfd33,	// (0x0002e5d2) cell_sctrl_middle_pane_g

0x59ee,	// (0x0002428d) bg_sctrl_middle_pane_g1

0x59fe,	// (0x0002429d) bg_sctrl_middle_pane_g2

0x59f6,	// (0x00024295) bg_sctrl_middle_pane_g3

0x5a0e,	// (0x000242ad) bg_sctrl_middle_pane_g4

0x5a06,	// (0x000242a5) bg_sctrl_middle_pane_g5

0x5a16,	// (0x000242b5) bg_sctrl_middle_pane_g6

0x5a1e,	// (0x000242bd) bg_sctrl_middle_pane_g7

0x5a2e,	// (0x000242cd) bg_sctrl_middle_pane_g8

0x0007,

0xfd38,	// (0x0002e5d7) bg_sctrl_middle_pane_g

0x5a26,	// (0x000242c5) bg_sctrl_middle_pane_g8_copy1

0x59ee,	// (0x0002428d) bg_sctrl_sk_pane_g1

0x59f6,	// (0x00024295) bg_sctrl_sk_pane_g2

0x59fe,	// (0x0002429d) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x0002e13e) bg_sctrl_sk_pane_g

0x4978,	// (0x00023217) aid_size_touch_scroll_bar

0x5a06,	// (0x000242a5) bg_sctrl_sk_pane_g4

0x5a0e,	// (0x000242ad) bg_sctrl_sk_pane_g5

0x5a16,	// (0x000242b5) bg_sctrl_sk_pane_g6

0x5a1e,	// (0x000242bd) bg_sctrl_sk_pane_g7

0x5a26,	// (0x000242c5) bg_sctrl_sk_pane_g8

0x5a2e,	// (0x000242cd) bg_sctrl_sk_pane_g9

0x56e8,	// (0x00023f87) popup_fep_china_hwr2_fs_candidate_window

0x9fa8,	// (0x00028847) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9fa8,	// (0x00028847) popup_fep_china_hwr2_fs_control_window

0xb7dc,	// (0x0002a07b) sctrl_sk_top_pane_g2

0x0001,

0xfd2e,	// (0x0002e5cd) sctrl_sk_top_pane_g

0xc286,	// (0x0002ab25) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc286,	// (0x0002ab25) aid_fep_china_hwr2_fs_cell

0xc298,	// (0x0002ab37) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc298,	// (0x0002ab37) bg_popup_fep_shadow_pane_cp4

0xc2af,	// (0x0002ab4e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc2af,	// (0x0002ab4e) bg_popup_fep_shadow_pane_cp5

0xc2c1,	// (0x0002ab60) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc2c1,	// (0x0002ab60) popup_fep_china_hwr2_fs_control_bar_grid

0xc2d1,	// (0x0002ab70) popup_fep_china_hwr2_fs_control_funtion_grid

0xc2d9,	// (0x0002ab78) aid_fep_china_hwr2_fs_candi_cell

0x43ce,	// (0x00022c6d) bg_popup_fep_shadow_pane_cp6

0xc2e3,	// (0x0002ab82) popup_fep_china_hwr2_fs_candidate_grid

0xc2ed,	// (0x0002ab8c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc2ed,	// (0x0002ab8c) cell_fep_china_hwr2_fs_funtion_grid

0x7770,	// (0x0002600f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xc305,	// (0x0002aba4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xc305,	// (0x0002aba4) cell_fep_china_hwr2_fs_funtion_grid_g1

0xc313,	// (0x0002abb2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xc313,	// (0x0002abb2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd49,	// (0x0002e5e8) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd49,	// (0x0002e5e8) cell_fep_china_hwr2_fs_funtion_grid_g

0xc329,	// (0x0002abc8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc329,	// (0x0002abc8) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc33e,	// (0x0002abdd) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc33e,	// (0x0002abdd) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd4e,	// (0x0002e5ed) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd4e,	// (0x0002e5ed) cell_fep_china_hwr2_fs_funtion_grid_t

0xc35a,	// (0x0002abf9) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xc362,	// (0x0002ac01) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xc36a,	// (0x0002ac09) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd53,	// (0x0002e5f2) popup_fep_china_hwr2_fs_control_bar_grid_g

0xc372,	// (0x0002ac11) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xc372,	// (0x0002ac11) cell_fep_china_hwr2_fs_candidate_grid

0xc38b,	// (0x0002ac2a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xc393,	// (0x0002ac32) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7770,	// (0x0002600f) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7770,	// (0x0002600f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb67,	// (0x0002e406) cell_fep_china_hwr2_fs_candidate_grid_g

0xc39b,	// (0x0002ac3a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x583b,	// (0x000240da) clock_nsta_pane_cp_24_ParamLimits

0x583b,	// (0x000240da) clock_nsta_pane_cp_24

0x58a3,	// (0x00024142) indicator_nsta_pane_cp_24_ParamLimits

0x58a3,	// (0x00024142) indicator_nsta_pane_cp_24

0x65bb,	// (0x00024e5a) heading_pane_g1

0x0001,

0xf904,	// (0x0002e1a3) heading_pane_g

0x6c72,	// (0x00025511) grid_sct_catagory_button_pane

0x678e,	// (0x0002502d) scroll_pane_cp5_ParamLimits

0x74c0,	// (0x00025d5f) button_value_adjust_pane_cp5_ParamLimits

0x74c0,	// (0x00025d5f) button_value_adjust_pane_cp5

0x757e,	// (0x00025e1d) form2_midp_time_pane_ParamLimits

0xc3a9,	// (0x0002ac48) cell_sct_catagory_button_pane_ParamLimits

0xc3a9,	// (0x0002ac48) cell_sct_catagory_button_pane

0x7727,	// (0x00025fc6) bg_button_pane_cp01_ParamLimits

0x7727,	// (0x00025fc6) bg_button_pane_cp01

0x7770,	// (0x0002600f) cell_sct_catagory_button_pane_g1

0xa2d7,	// (0x00028b76) popup_tb_extension_window

0xc3bb,	// (0x0002ac5a) aid_size_cell_ext_ParamLimits

0xc3bb,	// (0x0002ac5a) aid_size_cell_ext

0x4571,	// (0x00022e10) bg_tb_trans_pane_cp1_ParamLimits

0x4571,	// (0x00022e10) bg_tb_trans_pane_cp1

0xc3db,	// (0x0002ac7a) grid_tb_ext_pane_ParamLimits

0xc3db,	// (0x0002ac7a) grid_tb_ext_pane

0xc409,	// (0x0002aca8) cell_tb_ext_pane_ParamLimits

0xc409,	// (0x0002aca8) cell_tb_ext_pane

0xc420,	// (0x0002acbf) cell_tb_ext_pane_g1_ParamLimits

0xc420,	// (0x0002acbf) cell_tb_ext_pane_g1

0xc43d,	// (0x0002acdc) cell_tb_ext_pane_t1

0x4571,	// (0x00022e10) list_highlight_pane_cp11_ParamLimits

0x4571,	// (0x00022e10) list_highlight_pane_cp11

0x9201,	// (0x00027aa0) popup_uni_indicator_window_ParamLimits

0x9201,	// (0x00027aa0) popup_uni_indicator_window

0x4a3f,	// (0x000232de) bg_popup_sub_pane_cp14

0xc458,	// (0x0002acf7) list_uniindi_pane

0xc464,	// (0x0002ad03) uniindi_top_pane

0x4571,	// (0x00022e10) bg_uniindi_top_pane

0xc483,	// (0x0002ad22) uniindi_top_pane_g1

0xc499,	// (0x0002ad38) uniindi_top_pane_g2

0x0003,

0xfd5a,	// (0x0002e5f9) uniindi_top_pane_g

0xc4c3,	// (0x0002ad62) uniindi_top_pane_t1

0xc4ed,	// (0x0002ad8c) list_single_uniindi_pane_ParamLimits

0xc4ed,	// (0x0002ad8c) list_single_uniindi_pane

0x7770,	// (0x0002600f) bg_uniindi_top_pane_g1

0xdc2e,	// (0x0002c4cd) list_single_uniindi_pane_g1

0xdc41,	// (0x0002c4e0) list_single_uniindi_pane_t1

0x9077,	// (0x00027916) control_bg_pane

0xdc66,	// (0x0002c505) bg_sctrl_sk_pane_cp1

0xdc6f,	// (0x0002c50e) bg_sctrl_sk_pane_cp2

0xdc78,	// (0x0002c517) control_bg_pane_g1

0xdc81,	// (0x0002c520) control_bg_pane_g2

0x0001,

0xfd63,	// (0x0002e602) control_bg_pane_g

0x73cf,	// (0x00025c6e) cell_indicator_nsta_pane_g1_ParamLimits

0xb0e7,	// (0x00029986) cell_indicator_nsta_pane_g2_ParamLimits

0xfad8,	// (0x0002e377) cell_indicator_nsta_pane_g_ParamLimits

0xd8d6,	// (0x0002c175) form2_midp_time_pane_t1_ParamLimits

0x47ba,	// (0x00023059) main_idle_act4_pane_ParamLimits

0x47ba,	// (0x00023059) main_idle_act4_pane

0xa2d7,	// (0x00028b76) popup_tb_extension_window_ParamLimits

0xc3f9,	// (0x0002ac98) tb_ext_find_pane_ParamLimits

0xc3f9,	// (0x0002ac98) tb_ext_find_pane

0xdc8a,	// (0x0002c529) ai_gene_pane_1_cp1

0x54e6,	// (0x00023d85) ai_gene_pane_2_cp1

0xdc92,	// (0x0002c531) list_single_idle_plugin_calendar_pane

0xdc9b,	// (0x0002c53a) list_single_idle_plugin_notification_pane

0xdca4,	// (0x0002c543) list_single_idle_plugin_player_pane

0xdcad,	// (0x0002c54c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcad,	// (0x0002c54c) list_single_idle_plugin_shortcut_pane

0xdccf,	// (0x0002c56e) main_idle_act4_pane_t1

0xdce1,	// (0x0002c580) main_idle_act4_pane_t2

0x0001,

0xfd68,	// (0x0002e607) main_idle_act4_pane_t

0xdcf3,	// (0x0002c592) middle_sk_idle_act4_pane_ParamLimits

0xdcf3,	// (0x0002c592) middle_sk_idle_act4_pane

0xdd09,	// (0x0002c5a8) popup_clock_digital_analogue_window_cp2

0xdd23,	// (0x0002c5c2) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd23,	// (0x0002c5c2) shortcut_wheel_idle_act4_pane

0x7770,	// (0x0002600f) shortcut_wheel_idle_act4_pane_g1

0x7770,	// (0x0002600f) shortcut_wheel_idle_act4_pane_g2

0x7770,	// (0x0002600f) shortcut_wheel_idle_act4_pane_g3

0x7770,	// (0x0002600f) shortcut_wheel_idle_act4_pane_g4

0x7770,	// (0x0002600f) shortcut_wheel_idle_act4_pane_g5

0xdd37,	// (0x0002c5d6) shortcut_wheel_idle_act4_pane_g6

0xdd3f,	// (0x0002c5de) shortcut_wheel_idle_act4_pane_g7

0xdd47,	// (0x0002c5e6) shortcut_wheel_idle_act4_pane_g8

0xdd4f,	// (0x0002c5ee) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd6d,	// (0x0002e60c) shortcut_wheel_idle_act4_pane_g

0x7917,	// (0x000261b6) middle_sk_idle_act4_pane_g1_ParamLimits

0x7917,	// (0x000261b6) middle_sk_idle_act4_pane_g1

0xddb3,	// (0x0002c652) middle_sk_idle_act4_pane_g2_ParamLimits

0xddb3,	// (0x0002c652) middle_sk_idle_act4_pane_g2

0x0001,

0xfd90,	// (0x0002e62f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd90,	// (0x0002e62f) middle_sk_idle_act4_pane_g

0xddbf,	// (0x0002c65e) middle_sk_idle_act4_pane_t1_ParamLimits

0xddbf,	// (0x0002c65e) middle_sk_idle_act4_pane_t1

0xdddc,	// (0x0002c67b) grid_ai_shortcut_pane_ParamLimits

0xdddc,	// (0x0002c67b) grid_ai_shortcut_pane

0xddf5,	// (0x0002c694) list_highlight_pane_cp16_ParamLimits

0xddf5,	// (0x0002c694) list_highlight_pane_cp16

0xde02,	// (0x0002c6a1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde02,	// (0x0002c6a1) list_single_idle_plugin_shortcut_pane_g1

0xde0e,	// (0x0002c6ad) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde0e,	// (0x0002c6ad) list_single_idle_plugin_shortcut_pane_g2

0xde26,	// (0x0002c6c5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde26,	// (0x0002c6c5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd95,	// (0x0002e634) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd95,	// (0x0002e634) list_single_idle_plugin_shortcut_pane_g

0xde39,	// (0x0002c6d8) cell_ai_shortcut_pane_ParamLimits

0xde39,	// (0x0002c6d8) cell_ai_shortcut_pane

0xde5d,	// (0x0002c6fc) cell_ai_shortcut_pane_g1_ParamLimits

0xde5d,	// (0x0002c6fc) cell_ai_shortcut_pane_g1

0xdc8a,	// (0x0002c529) ai_gene_pane_1_cp2

0xde7f,	// (0x0002c71e) ai_gene_pane_2_cp2

0xde87,	// (0x0002c726) list_highlight_pane_cp15

0xde90,	// (0x0002c72f) list_single_idle_plugin_calendar_pane_g1

0xde87,	// (0x0002c726) list_highlight_pane_cp17

0xde98,	// (0x0002c737) list_single_idle_plugin_calendar_pane_g1_copy1

0xdea0,	// (0x0002c73f) list_single_idle_plugin_player_pane_g1

0x6e71,	// (0x00025710) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd9c,	// (0x0002e63b) list_single_idle_plugin_player_pane_g

0xdea8,	// (0x0002c747) list_single_idle_plugin_player_pane_t1

0xdeb6,	// (0x0002c755) list_single_idle_plugin_player_pane_t2

0xdec4,	// (0x0002c763) list_single_idle_plugin_player_pane_t3

0xded2,	// (0x0002c771) list_single_idle_plugin_player_pane_t4

0x0003,

0xfda1,	// (0x0002e640) list_single_idle_plugin_player_pane_t

0xdee0,	// (0x0002c77f) wait_bar_pane_cp15

0xdee8,	// (0x0002c787) grid_ai_notification_pane

0x6e71,	// (0x00025710) list_single_idle_plugin_notification_pane_g1

0xdef1,	// (0x0002c790) cell_ai_notification_pane_ParamLimits

0xdef1,	// (0x0002c790) cell_ai_notification_pane

0xdefe,	// (0x0002c79d) cell_ai_notification_pane_g1

0xdf06,	// (0x0002c7a5) cell_ai_notification_pane_t1

0xdf14,	// (0x0002c7b3) tb_ext_find_button_pane

0xdf1c,	// (0x0002c7bb) tb_ext_find_pane_g1

0xdf24,	// (0x0002c7c3) tb_ext_find_pane_t1

0x4f77,	// (0x00023816) tb_ext_find_button_pane_g1

0xdf32,	// (0x0002c7d1) tb_ext_find_button_pane_g2

0x0001,

0xfdaa,	// (0x0002e649) tb_ext_find_button_pane_g

0xdccf,	// (0x0002c56e) main_idle_act4_pane_t1_ParamLimits

0xdce1,	// (0x0002c580) main_idle_act4_pane_t2_ParamLimits

0xfd68,	// (0x0002e607) main_idle_act4_pane_t_ParamLimits

0xdd09,	// (0x0002c5a8) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd17,	// (0x0002c5b6) sat_plugin_idle_act4_pane_ParamLimits

0xdd17,	// (0x0002c5b6) sat_plugin_idle_act4_pane

0xdf3b,	// (0x0002c7da) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf3b,	// (0x0002c7da) sat_plugin_idle_act4_pane_t1

0xdf4e,	// (0x0002c7ed) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf4e,	// (0x0002c7ed) sat_plugin_idle_act4_pane_t2

0xdf61,	// (0x0002c800) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf61,	// (0x0002c800) sat_plugin_idle_act4_pane_t3

0xdf74,	// (0x0002c813) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf74,	// (0x0002c813) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdaf,	// (0x0002e64e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdaf,	// (0x0002e64e) sat_plugin_idle_act4_pane_t

0x913c,	// (0x000279db) popup_battery_window_ParamLimits

0x913c,	// (0x000279db) popup_battery_window

0x4571,	// (0x00022e10) bg_popup_sub_pane_cp25_ParamLimits

0x4571,	// (0x00022e10) bg_popup_sub_pane_cp25

0xdf87,	// (0x0002c826) popup_battery_window_g1_ParamLimits

0xdf87,	// (0x0002c826) popup_battery_window_g1

0xdf93,	// (0x0002c832) popup_battery_window_t1_ParamLimits

0xdf93,	// (0x0002c832) popup_battery_window_t1

0xdfa5,	// (0x0002c844) popup_battery_window_t2_ParamLimits

0xdfa5,	// (0x0002c844) popup_battery_window_t2

0x0001,

0xfdb8,	// (0x0002e657) popup_battery_window_t_ParamLimits

0xfdb8,	// (0x0002e657) popup_battery_window_t

0x9c49,	// (0x000284e8) midp_canvas_pane_ParamLimits

0x9cab,	// (0x0002854a) midp_keypad_pane_ParamLimits

0x9cab,	// (0x0002854a) midp_keypad_pane

0x4b97,	// (0x00023436) main_midp_pane_ParamLimits

0x7479,	// (0x00025d18) signal_pane_g2_cp_ParamLimits

0xdfc2,	// (0x0002c861) aid_size_cell_midp_keypad_ParamLimits

0xdfc2,	// (0x0002c861) aid_size_cell_midp_keypad

0xdfdc,	// (0x0002c87b) midp_keyp_game_grid_pane_ParamLimits

0xdfdc,	// (0x0002c87b) midp_keyp_game_grid_pane

0xdffc,	// (0x0002c89b) midp_keyp_rocker_pane_ParamLimits

0xdffc,	// (0x0002c89b) midp_keyp_rocker_pane

0xe035,	// (0x0002c8d4) midp_keyp_sk_left_pane_ParamLimits

0xe035,	// (0x0002c8d4) midp_keyp_sk_left_pane

0xe08f,	// (0x0002c92e) midp_keyp_sk_right_pane_ParamLimits

0xe08f,	// (0x0002c92e) midp_keyp_sk_right_pane

0x43ce,	// (0x00022c6d) bg_button_pane_cp03

0xe0e9,	// (0x0002c988) midp_keyp_sk_left_pane_g1

0x43ce,	// (0x00022c6d) bg_button_pane_cp04

0xe0e9,	// (0x0002c988) midp_keyp_sk_right_pane_g1

0x7770,	// (0x0002600f) midp_keyp_rocker_pane_g1

0xe0f2,	// (0x0002c991) keyp_game_cell_pane_ParamLimits

0xe0f2,	// (0x0002c991) keyp_game_cell_pane

0x43ce,	// (0x00022c6d) bg_button_pane_cp02

0xe105,	// (0x0002c9a4) keyp_game_cell_pane_g1

0x9180,	// (0x00027a1f) popup_fep_vkb2_window_ParamLimits

0x9180,	// (0x00027a1f) popup_fep_vkb2_window

0xc50e,	// (0x0002adad) aid_size_cell_vkb2_ParamLimits

0xc50e,	// (0x0002adad) aid_size_cell_vkb2

0xc562,	// (0x0002ae01) popup_fep_vkb2_window_g1_ParamLimits

0xc562,	// (0x0002ae01) popup_fep_vkb2_window_g1

0xc5aa,	// (0x0002ae49) vkb2_area_bottom_pane_ParamLimits

0xc5aa,	// (0x0002ae49) vkb2_area_bottom_pane

0xc5f6,	// (0x0002ae95) vkb2_area_keypad_pane_ParamLimits

0xc5f6,	// (0x0002ae95) vkb2_area_keypad_pane

0xc638,	// (0x0002aed7) vkb2_area_top_pane_ParamLimits

0xc638,	// (0x0002aed7) vkb2_area_top_pane

0xc6b2,	// (0x0002af51) vkb2_top_entry_pane_ParamLimits

0xc6b2,	// (0x0002af51) vkb2_top_entry_pane

0xc6dc,	// (0x0002af7b) vkb2_top_grid_left_pane_ParamLimits

0xc6dc,	// (0x0002af7b) vkb2_top_grid_left_pane

0xc6fa,	// (0x0002af99) vkb2_top_grid_right_pane_ParamLimits

0xc6fa,	// (0x0002af99) vkb2_top_grid_right_pane

0xc718,	// (0x0002afb7) vkb2_cell_keypad_pane_ParamLimits

0xc718,	// (0x0002afb7) vkb2_cell_keypad_pane

0xc7e9,	// (0x0002b088) vkb2_area_bottom_grid_pane_ParamLimits

0xc7e9,	// (0x0002b088) vkb2_area_bottom_grid_pane

0xc80f,	// (0x0002b0ae) vkb2_area_bottom_pane_g1_ParamLimits

0xc80f,	// (0x0002b0ae) vkb2_area_bottom_pane_g1

0xc833,	// (0x0002b0d2) vkb2_area_bottom_pane_g2_ParamLimits

0xc833,	// (0x0002b0d2) vkb2_area_bottom_pane_g2

0xc861,	// (0x0002b100) vkb2_area_bottom_pane_g3_ParamLimits

0xc861,	// (0x0002b100) vkb2_area_bottom_pane_g3

0x0002,

0xfdbd,	// (0x0002e65c) vkb2_area_bottom_pane_g_ParamLimits

0xfdbd,	// (0x0002e65c) vkb2_area_bottom_pane_g

0xc8c2,	// (0x0002b161) vkb2_top_cell_left_pane_ParamLimits

0xc8c2,	// (0x0002b161) vkb2_top_cell_left_pane

0xe116,	// (0x0002c9b5) vkb2_top_entry_pane_g1_ParamLimits

0xe116,	// (0x0002c9b5) vkb2_top_entry_pane_g1

0xe124,	// (0x0002c9c3) vkb2_top_entry_pane_t1_ParamLimits

0xe124,	// (0x0002c9c3) vkb2_top_entry_pane_t1

0xe156,	// (0x0002c9f5) vkb2_top_entry_pane_t2_ParamLimits

0xe156,	// (0x0002c9f5) vkb2_top_entry_pane_t2

0xe188,	// (0x0002ca27) vkb2_top_entry_pane_t3_ParamLimits

0xe188,	// (0x0002ca27) vkb2_top_entry_pane_t3

0x0002,

0xfdc4,	// (0x0002e663) vkb2_top_entry_pane_t_ParamLimits

0xfdc4,	// (0x0002e663) vkb2_top_entry_pane_t

0xc90f,	// (0x0002b1ae) vkb2_top_grid_right_pane_g1_ParamLimits

0xc90f,	// (0x0002b1ae) vkb2_top_grid_right_pane_g1

0xc925,	// (0x0002b1c4) vkb2_top_grid_right_pane_g2_ParamLimits

0xc925,	// (0x0002b1c4) vkb2_top_grid_right_pane_g2

0xc93d,	// (0x0002b1dc) vkb2_top_grid_right_pane_g3_ParamLimits

0xc93d,	// (0x0002b1dc) vkb2_top_grid_right_pane_g3

0xc955,	// (0x0002b1f4) vkb2_top_grid_right_pane_g4_ParamLimits

0xc955,	// (0x0002b1f4) vkb2_top_grid_right_pane_g4

0x0003,

0xfdcb,	// (0x0002e66a) vkb2_top_grid_right_pane_g_ParamLimits

0xfdcb,	// (0x0002e66a) vkb2_top_grid_right_pane_g

0xc96b,	// (0x0002b20a) vkb2_top_cell_left_pane_g1

0xc982,	// (0x0002b221) vkb2_cell_keypad_pane_g1_ParamLimits

0xc982,	// (0x0002b221) vkb2_cell_keypad_pane_g1

0xe19e,	// (0x0002ca3d) vkb2_cell_keypad_pane_t1_ParamLimits

0xe19e,	// (0x0002ca3d) vkb2_cell_keypad_pane_t1

0xc990,	// (0x0002b22f) vkb2_cell_bottom_grid_pane_ParamLimits

0xc990,	// (0x0002b22f) vkb2_cell_bottom_grid_pane

0xc9c9,	// (0x0002b268) vkb2_cell_bottom_grid_pane_g1

0xdd57,	// (0x0002c5f6) aid_call2_pane_cp02

0xdd5f,	// (0x0002c5fe) aid_call_pane_cp02

0xdd67,	// (0x0002c606) clock_digital_number_pane_cp10

0xdd6f,	// (0x0002c60e) clock_digital_number_pane_cp11

0xdd77,	// (0x0002c616) clock_digital_number_pane_cp12

0xdd7f,	// (0x0002c61e) clock_digital_number_pane_cp13

0xdd87,	// (0x0002c626) clock_digital_separator_pane_cp10

0x4f77,	// (0x00023816) popup_clock_digital_analogue_window_cp2_g1

0x4f77,	// (0x00023816) popup_clock_digital_analogue_window_cp2_g2

0xdd8f,	// (0x0002c62e) popup_clock_digital_analogue_window_cp2_g3

0x4f77,	// (0x00023816) popup_clock_digital_analogue_window_cp2_g4

0xdd8f,	// (0x0002c62e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd80,	// (0x0002e61f) popup_clock_digital_analogue_window_cp2_g

0xdd97,	// (0x0002c636) popup_clock_digital_analogue_window_cp2_t1

0xdda5,	// (0x0002c644) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd8b,	// (0x0002e62a) popup_clock_digital_analogue_window_cp2_t

0x7770,	// (0x0002600f) clock_digital_number_pane_cp10_g1

0x7770,	// (0x0002600f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb67,	// (0x0002e406) clock_digital_number_pane_cp10_g

0x7770,	// (0x0002600f) clock_digital_separator_pane_cp10_g1

0x7770,	// (0x0002600f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb67,	// (0x0002e406) clock_digital_separator_pane_cp10_g

0xc4a5,	// (0x0002ad44) uniindi_top_pane_g3

0xc4b6,	// (0x0002ad55) uniindi_top_pane_g4

0xc7a3,	// (0x0002b042) vkb2_row_keypad_pane_ParamLimits

0xc7a3,	// (0x0002b042) vkb2_row_keypad_pane

0xc9e5,	// (0x0002b284) vkb2_cell_t_keypad_pane_ParamLimits

0xc9e5,	// (0x0002b284) vkb2_cell_t_keypad_pane

0xc9f5,	// (0x0002b294) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xc9f5,	// (0x0002b294) vkb2_cell_t_keypad_pane_cp08

0xca08,	// (0x0002b2a7) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xca08,	// (0x0002b2a7) vkb2_cell_t_keypad_pane_cp09

0xca1c,	// (0x0002b2bb) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xca1c,	// (0x0002b2bb) vkb2_cell_t_keypad_pane_cp01

0xca2d,	// (0x0002b2cc) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xca2d,	// (0x0002b2cc) vkb2_cell_t_keypad_pane_cp02

0xca3e,	// (0x0002b2dd) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xca3e,	// (0x0002b2dd) vkb2_cell_t_keypad_pane_cp03

0xca4f,	// (0x0002b2ee) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xca4f,	// (0x0002b2ee) vkb2_cell_t_keypad_pane_cp04

0xca60,	// (0x0002b2ff) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xca60,	// (0x0002b2ff) vkb2_cell_t_keypad_pane_cp05

0xca71,	// (0x0002b310) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xca71,	// (0x0002b310) vkb2_cell_t_keypad_pane_cp06

0xca82,	// (0x0002b321) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xca82,	// (0x0002b321) vkb2_cell_t_keypad_pane_cp07

0xca93,	// (0x0002b332) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xca93,	// (0x0002b332) vkb2_cell_t_keypad_pane_cp10

0xb7dc,	// (0x0002a07b) vkb2_cell_t_keypad_pane_g1

0xe1b5,	// (0x0002ca54) vkb2_cell_t_keypad_pane_t1

0x9077,	// (0x00027916) popup_grid_graphic2_window

0xe1c7,	// (0x0002ca66) aid_size_cell_graphic2_ParamLimits

0xe1c7,	// (0x0002ca66) aid_size_cell_graphic2

0x7745,	// (0x00025fe4) bg_popup_window_pane_cp21_ParamLimits

0x7745,	// (0x00025fe4) bg_popup_window_pane_cp21

0xe1f3,	// (0x0002ca92) graphic2_pages_pane_ParamLimits

0xe1f3,	// (0x0002ca92) graphic2_pages_pane

0xe239,	// (0x0002cad8) grid_graphic2_control_pane_ParamLimits

0xe239,	// (0x0002cad8) grid_graphic2_control_pane

0xe267,	// (0x0002cb06) grid_graphic2_pane_ParamLimits

0xe267,	// (0x0002cb06) grid_graphic2_pane

0xe2c7,	// (0x0002cb66) cell_graphic2_pane

0x43ce,	// (0x00022c6d) main_comp_mode_pane

0xbc34,	// (0x0002a4d3) list_ai3_gene_pane_ParamLimits

0xbffe,	// (0x0002a89d) bg_popup_window_pane_cp19_ParamLimits

0xc00a,	// (0x0002a8a9) bg_touch_area_indi_pane_ParamLimits

0xc00a,	// (0x0002a8a9) bg_touch_area_indi_pane

0xc020,	// (0x0002a8bf) bg_touch_area_indi_pane_cp01_ParamLimits

0xc020,	// (0x0002a8bf) bg_touch_area_indi_pane_cp01

0xc036,	// (0x0002a8d5) bg_touch_area_indi_pane_cp02_ParamLimits

0xc036,	// (0x0002a8d5) bg_touch_area_indi_pane_cp02

0xc04e,	// (0x0002a8ed) bg_touch_area_indi_pane_cp03_ParamLimits

0xc04e,	// (0x0002a8ed) bg_touch_area_indi_pane_cp03

0xc068,	// (0x0002a907) popup_slider_window_g1_ParamLimits

0xc084,	// (0x0002a923) popup_slider_window_g2_ParamLimits

0xc0a0,	// (0x0002a93f) popup_slider_window_g3_ParamLimits

0xfd15,	// (0x0002e5b4) popup_slider_window_g_ParamLimits

0xc0fc,	// (0x0002a99b) popup_slider_window_t1_ParamLimits

0xc170,	// (0x0002aa0f) small_volume_slider_vertical_pane_ParamLimits

0xe2c7,	// (0x0002cb66) cell_graphic2_pane_ParamLimits

0xe316,	// (0x0002cbb5) bg_button_pane_cp10_ParamLimits

0xe316,	// (0x0002cbb5) bg_button_pane_cp10

0xe329,	// (0x0002cbc8) bg_button_pane_cp11_ParamLimits

0xe329,	// (0x0002cbc8) bg_button_pane_cp11

0xe33c,	// (0x0002cbdb) graphic2_pages_pane_g1_ParamLimits

0xe33c,	// (0x0002cbdb) graphic2_pages_pane_g1

0xe357,	// (0x0002cbf6) graphic2_pages_pane_g2_ParamLimits

0xe357,	// (0x0002cbf6) graphic2_pages_pane_g2

0x0001,

0xfdd9,	// (0x0002e678) graphic2_pages_pane_g_ParamLimits

0xfdd9,	// (0x0002e678) graphic2_pages_pane_g

0xe36f,	// (0x0002cc0e) graphic2_pages_pane_t1_ParamLimits

0xe36f,	// (0x0002cc0e) graphic2_pages_pane_t1

0xe387,	// (0x0002cc26) cell_graphic2_control_pane_ParamLimits

0xe387,	// (0x0002cc26) cell_graphic2_control_pane

0xe3a1,	// (0x0002cc40) cell_graphic2_pane_g1_ParamLimits

0xe3a1,	// (0x0002cc40) cell_graphic2_pane_g1

0xe3ae,	// (0x0002cc4d) cell_graphic2_pane_g2_ParamLimits

0xe3ae,	// (0x0002cc4d) cell_graphic2_pane_g2

0xe3bb,	// (0x0002cc5a) cell_graphic2_pane_g3_ParamLimits

0xe3bb,	// (0x0002cc5a) cell_graphic2_pane_g3

0xe3c8,	// (0x0002cc67) cell_graphic2_pane_g4_ParamLimits

0xe3c8,	// (0x0002cc67) cell_graphic2_pane_g4

0xe3d5,	// (0x0002cc74) cell_graphic2_pane_g5_ParamLimits

0xe3d5,	// (0x0002cc74) cell_graphic2_pane_g5

0x0004,

0xfdde,	// (0x0002e67d) cell_graphic2_pane_g_ParamLimits

0xfdde,	// (0x0002e67d) cell_graphic2_pane_g

0xe3f0,	// (0x0002cc8f) cell_graphic2_pane_t1_ParamLimits

0xe3f0,	// (0x0002cc8f) cell_graphic2_pane_t1

0x5ade,	// (0x0002437d) grid_highlight_pane_cp11_ParamLimits

0x5ade,	// (0x0002437d) grid_highlight_pane_cp11

0x4a3f,	// (0x000232de) bg_button_pane_cp05

0xe406,	// (0x0002cca5) cell_graphic2_control_pane_g1

0x7770,	// (0x0002600f) bg_touch_area_indi_pane_g1

0xe413,	// (0x0002ccb2) aid_cmod_rocker_key_size

0xe41d,	// (0x0002ccbc) aid_cmode_itu_key_size

0xe427,	// (0x0002ccc6) main_cmode_video_pane

0xe431,	// (0x0002ccd0) main_comp_mode_itu_pane

0xe43d,	// (0x0002ccdc) main_comp_mode_rocker_pane

0xe449,	// (0x0002cce8) cell_cmode_rocker_pane_ParamLimits

0xe449,	// (0x0002cce8) cell_cmode_rocker_pane

0xe45b,	// (0x0002ccfa) cell_cmode_itu_pane_ParamLimits

0xe45b,	// (0x0002ccfa) cell_cmode_itu_pane

0x4a3f,	// (0x000232de) bg_button_pane_cp06_ParamLimits

0x4a3f,	// (0x000232de) bg_button_pane_cp06

0x7917,	// (0x000261b6) cell_cmode_rocker_pane_g1_ParamLimits

0x7917,	// (0x000261b6) cell_cmode_rocker_pane_g1

0xc305,	// (0x0002aba4) cell_cmode_rocker_pane_g2_ParamLimits

0xc305,	// (0x0002aba4) cell_cmode_rocker_pane_g2

0x0001,

0xfde9,	// (0x0002e688) cell_cmode_rocker_pane_g_ParamLimits

0xfde9,	// (0x0002e688) cell_cmode_rocker_pane_g

0x43ce,	// (0x00022c6d) bg_button_pane_cp07

0xe470,	// (0x0002cd0f) cell_cmode_itu_pane_g1

0xe479,	// (0x0002cd18) cell_cmode_itu_pane_t1

0xe487,	// (0x0002cd26) cell_cmode_itu_pane_t2

0x0001,

0xfdee,	// (0x0002e68d) cell_cmode_itu_pane_t

0xdc56,	// (0x0002c4f5) aid_touch_ctrl_left

0xdc5e,	// (0x0002c4fd) aid_touch_ctrl_right

0x43ce,	// (0x00022c6d) compa_mode_pane

0xe495,	// (0x0002cd34) aid_cmod_rocker_key_size_cp

0xe49f,	// (0x0002cd3e) aid_cmode_itu_key_size_cp

0xe4a9,	// (0x0002cd48) compa_mode_pane_g1

0xe4b1,	// (0x0002cd50) compa_mode_pane_g2

0xe4b9,	// (0x0002cd58) compa_mode_pane_g3

0x0002,

0xfdf3,	// (0x0002e692) compa_mode_pane_g

0xe4c1,	// (0x0002cd60) main_comp_mode_itu_pane_cp

0xe4c9,	// (0x0002cd68) main_comp_mode_rocker_pane_cp

0xe4d1,	// (0x0002cd70) cell_cmode_itu_pane_cp_ParamLimits

0xe4d1,	// (0x0002cd70) cell_cmode_itu_pane_cp

0xe4e6,	// (0x0002cd85) cell_cmode_rocker_pane_cp_ParamLimits

0xe4e6,	// (0x0002cd85) cell_cmode_rocker_pane_cp

0x4a3f,	// (0x000232de) bg_button_pane_cp06_cp_ParamLimits

0x4a3f,	// (0x000232de) bg_button_pane_cp06_cp

0x7917,	// (0x000261b6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7917,	// (0x000261b6) cell_cmode_rocker_pane_g1_cp

0x7770,	// (0x0002600f) cell_cmode_rocker_pane_g2_cp

0x43ce,	// (0x00022c6d) bg_button_pane_cp07_cp

0x6b7f,	// (0x0002541e) cell_cmode_itu_pane_g1_cp

0xe4f8,	// (0x0002cd97) cell_cmode_itu_pane_t1_cp

0xe4f8,	// (0x0002cd97) cell_cmode_itu_pane_t2_cp

0xae38,	// (0x000296d7) settings_code_pane_cp2

0x443e,	// (0x00022cdd) bg_popup_window_pane_cp3_ParamLimits

0x474b,	// (0x00022fea) heading_pane_cp3_ParamLimits

0x4757,	// (0x00022ff6) listscroll_popup_graphic_pane_ParamLimits

0xb3c2,	// (0x00029c61) fep_hwr_aid_pane_ParamLimits

0xc1ec,	// (0x0002aa8b) aid_touch_sctrl_top_ParamLimits

0xc207,	// (0x0002aaa6) sctrl_sk_top_pane_g1_ParamLimits

0xb7dc,	// (0x0002a07b) sctrl_sk_top_pane_g2_ParamLimits

0xfd2e,	// (0x0002e5cd) sctrl_sk_top_pane_g_ParamLimits

0xc214,	// (0x0002aab3) sctrl_sk_top_pane_t1_ParamLimits

0xc1ec,	// (0x0002aa8b) aid_touch_sctrl_bottom_ParamLimits

0xc214,	// (0x0002aab3) sctrl_sk_bottom_pane_t1_ParamLimits

0xc471,	// (0x0002ad10) aid_area_touch_clock

0xc67a,	// (0x0002af19) aid_vkb2_area_top_pane_cell_ParamLimits

0xc67a,	// (0x0002af19) aid_vkb2_area_top_pane_cell

0xc7c5,	// (0x0002b064) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc7c5,	// (0x0002b064) aid_vkb2_area_bottom_pane_cell

0xe10e,	// (0x0002c9ad) popup_char_count_window

0xe506,	// (0x0002cda5) popup_char_count_window_g1

0xe50f,	// (0x0002cdae) popup_char_count_window_g2

0xe518,	// (0x0002cdb7) popup_char_count_window_g3

0x0002,

0xfdfa,	// (0x0002e699) popup_char_count_window_g

0xe521,	// (0x0002cdc0) popup_char_count_window_t1

0xc540,	// (0x0002addf) popup_fep_char_preview_window_ParamLimits

0xc540,	// (0x0002addf) popup_fep_char_preview_window

0xc698,	// (0x0002af37) vkb2_top_candi_pane_ParamLimits

0xc698,	// (0x0002af37) vkb2_top_candi_pane

0xe52f,	// (0x0002cdce) cell_vkb2_top_candi_pane_ParamLimits

0xe52f,	// (0x0002cdce) cell_vkb2_top_candi_pane

0xcaa8,	// (0x0002b347) bg_popup_fep_char_preview_window_ParamLimits

0xcaa8,	// (0x0002b347) bg_popup_fep_char_preview_window

0xcab6,	// (0x0002b355) popup_fep_char_preview_window_t1_ParamLimits

0xcab6,	// (0x0002b355) popup_fep_char_preview_window_t1

0xe57c,	// (0x0002ce1b) bg_popup_fep_char_preview_window_g1

0xe584,	// (0x0002ce23) bg_popup_fep_char_preview_window_g2

0xe58c,	// (0x0002ce2b) bg_popup_fep_char_preview_window_g3

0xe594,	// (0x0002ce33) bg_popup_fep_char_preview_window_g4

0xe59c,	// (0x0002ce3b) bg_popup_fep_char_preview_window_g5

0xcaf0,	// (0x0002b38f) bg_popup_fep_char_preview_window_g6

0xe5a4,	// (0x0002ce43) bg_popup_fep_char_preview_window_g7

0xe5ac,	// (0x0002ce4b) bg_popup_fep_char_preview_window_g8

0xe5b4,	// (0x0002ce53) bg_popup_fep_char_preview_window_g9

0x0008,

0xfe01,	// (0x0002e6a0) bg_popup_fep_char_preview_window_g

0xb7dc,	// (0x0002a07b) cell_vkb2_top_candi_pane_g1_ParamLimits

0xb7dc,	// (0x0002a07b) cell_vkb2_top_candi_pane_g1

0xb7ea,	// (0x0002a089) cell_vkb2_top_candi_pane_g2_ParamLimits

0xb7ea,	// (0x0002a089) cell_vkb2_top_candi_pane_g2

0xd8e9,	// (0x0002c188) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd8e9,	// (0x0002c188) cell_vkb2_top_candi_pane_g3

0xcaf8,	// (0x0002b397) cell_vkb2_top_candi_pane_g4_ParamLimits

0xcaf8,	// (0x0002b397) cell_vkb2_top_candi_pane_g4

0x7b77,	// (0x00026416) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7b77,	// (0x00026416) cell_vkb2_top_candi_pane_g5

0xcb19,	// (0x0002b3b8) cell_vkb2_top_candi_pane_g6_ParamLimits

0xcb19,	// (0x0002b3b8) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe14,	// (0x0002e6b3) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe14,	// (0x0002e6b3) cell_vkb2_top_candi_pane_g

0xcb27,	// (0x0002b3c6) cell_vkb2_top_candi_pane_t1

0xac6f,	// (0x0002950e) aid_size_touch_slider_mark_ParamLimits

0xac6f,	// (0x0002950e) aid_size_touch_slider_mark

0xe229,	// (0x0002cac8) grid_graphic2_catg_pane_ParamLimits

0xe229,	// (0x0002cac8) grid_graphic2_catg_pane

0xe2a3,	// (0x0002cb42) popup_grid_graphic2_window_t1_ParamLimits

0xe2a3,	// (0x0002cb42) popup_grid_graphic2_window_t1

0xe2b5,	// (0x0002cb54) popup_grid_graphic2_window_t2_ParamLimits

0xe2b5,	// (0x0002cb54) popup_grid_graphic2_window_t2

0x0001,

0xfdd4,	// (0x0002e673) popup_grid_graphic2_window_t_ParamLimits

0xfdd4,	// (0x0002e673) popup_grid_graphic2_window_t

0x4a3f,	// (0x000232de) bg_button_pane_cp05_ParamLimits

0xe406,	// (0x0002cca5) cell_graphic2_control_pane_g1_ParamLimits

0xe5bc,	// (0x0002ce5b) cell_graphic2_catg_pane_ParamLimits

0xe5bc,	// (0x0002ce5b) cell_graphic2_catg_pane

0x43ce,	// (0x00022c6d) bg_button_pane_cp12

0xe5ce,	// (0x0002ce6d) cell_graphic2_catg_pane_g1

0xc43d,	// (0x0002acdc) cell_tb_ext_pane_t1_ParamLimits

0xc8e2,	// (0x0002b181) vkb2_top_cell_right_narrow_pane_ParamLimits

0xc8e2,	// (0x0002b181) vkb2_top_cell_right_narrow_pane

0xc8fa,	// (0x0002b199) vkb2_top_cell_right_wide_pane_ParamLimits

0xc8fa,	// (0x0002b199) vkb2_top_cell_right_wide_pane

0xb3b4,	// (0x00029c53) bg_vkb2_func_pane_ParamLimits

0xb3b4,	// (0x00029c53) bg_vkb2_func_pane

0xc96b,	// (0x0002b20a) vkb2_top_cell_left_pane_g1_ParamLimits

0xb3b4,	// (0x00029c53) bg_vkb2_fuc_pane_cp03_ParamLimits

0xb3b4,	// (0x00029c53) bg_vkb2_fuc_pane_cp03

0xc9c9,	// (0x0002b268) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x59fe,	// (0x0002429d) bg_vkb2_func_pane_g1

0x59f6,	// (0x00024295) bg_vkb2_func_pane_g2

0x5a06,	// (0x000242a5) bg_vkb2_func_pane_g3

0x5a0e,	// (0x000242ad) bg_vkb2_func_pane_g4

0x5a16,	// (0x000242b5) bg_vkb2_func_pane_g5

0x5a1e,	// (0x000242bd) bg_vkb2_func_pane_g6

0x5a2e,	// (0x000242cd) bg_vkb2_func_pane_g7

0x5a26,	// (0x000242c5) bg_vkb2_func_pane_g8

0x59ee,	// (0x0002428d) bg_vkb2_func_pane_g9

0x0008,

0xfe21,	// (0x0002e6c0) bg_vkb2_func_pane_g

0xb3b4,	// (0x00029c53) bg_vkb2_fuc_pane_cp01_ParamLimits

0xb3b4,	// (0x00029c53) bg_vkb2_fuc_pane_cp01

0xc96b,	// (0x0002b20a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xc96b,	// (0x0002b20a) vkb2_top_cell_right_wide_pane_g1

0xb3b4,	// (0x00029c53) bg_vkb2_fuc_pane_cp02_ParamLimits

0xb3b4,	// (0x00029c53) bg_vkb2_fuc_pane_cp02

0xc9c9,	// (0x0002b268) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xc9c9,	// (0x0002b268) vkb2_top_cell_right_narrow_pane_g1

0xbf82,	// (0x0002a821) aid_touch_area_decrease_ParamLimits

0xbf82,	// (0x0002a821) aid_touch_area_decrease

0xbfa0,	// (0x0002a83f) aid_touch_area_increase_ParamLimits

0xbfa0,	// (0x0002a83f) aid_touch_area_increase

0xbfac,	// (0x0002a84b) aid_touch_area_mute_ParamLimits

0xbfac,	// (0x0002a84b) aid_touch_area_mute

0xbfd0,	// (0x0002a86f) aid_touch_area_slider_ParamLimits

0xbfd0,	// (0x0002a86f) aid_touch_area_slider

0xc0bc,	// (0x0002a95b) popup_slider_window_g4_ParamLimits

0xc0bc,	// (0x0002a95b) popup_slider_window_g4

0xc0c8,	// (0x0002a967) popup_slider_window_g5_ParamLimits

0xc0c8,	// (0x0002a967) popup_slider_window_g5

0xc0ea,	// (0x0002a989) popup_slider_window_g6_ParamLimits

0xc0ea,	// (0x0002a989) popup_slider_window_g6

0xc12a,	// (0x0002a9c9) popup_slider_window_t2_ParamLimits

0xc12a,	// (0x0002a9c9) popup_slider_window_t2

0x0001,

0xfd22,	// (0x0002e5c1) popup_slider_window_t_ParamLimits

0xfd22,	// (0x0002e5c1) popup_slider_window_t

0xc142,	// (0x0002a9e1) slider_pane_ParamLimits

0xc142,	// (0x0002a9e1) slider_pane

0xe5d7,	// (0x0002ce76) slider_pane_g1_ParamLimits

0xe5d7,	// (0x0002ce76) slider_pane_g1

0xe5eb,	// (0x0002ce8a) slider_pane_g2_ParamLimits

0xe5eb,	// (0x0002ce8a) slider_pane_g2

0xe601,	// (0x0002cea0) slider_pane_g3_ParamLimits

0xe601,	// (0x0002cea0) slider_pane_g3

0x0003,

0xfe34,	// (0x0002e6d3) slider_pane_g_ParamLimits

0xfe34,	// (0x0002e6d3) slider_pane_g

0xa333,	// (0x00028bd2) popup_tb_float_extension_window_ParamLimits

0xa333,	// (0x00028bd2) popup_tb_float_extension_window

0xe62d,	// (0x0002cecc) aid_size_cell_tb_float_ext

0x43ce,	// (0x00022c6d) bg_popup_sub_window_cp28

0xe639,	// (0x0002ced8) grid_tb_float_ext_pane

0xe643,	// (0x0002cee2) cell_tb_float_ext_pane_ParamLimits

0xe643,	// (0x0002cee2) cell_tb_float_ext_pane

0xe65d,	// (0x0002cefc) cell_tb_float_ext_pane_g1

0xe666,	// (0x0002cf05) grid_highlight_pane_cp12

0xb503,	// (0x00029da2) cell_last_hwr_side_pane_ParamLimits

0xb503,	// (0x00029da2) cell_last_hwr_side_pane

0x7770,	// (0x0002600f) cell_last_hwr_side_pane_g1

0xe66f,	// (0x0002cf0e) cell_last_hwr_side_pane_g2

0x0001,

0xfe3d,	// (0x0002e6dc) cell_last_hwr_side_pane_g

0xc891,	// (0x0002b130) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc891,	// (0x0002b130) vkb2_area_bottom_space_btn_pane

0xb7dc,	// (0x0002a07b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1b5,	// (0x0002ca54) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xcb27,	// (0x0002b3c6) cell_vkb2_top_candi_pane_t1_ParamLimits

0xcb46,	// (0x0002b3e5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xcb46,	// (0x0002b3e5) vkb2_area_bottom_space_btn_pane_g1

0xcb80,	// (0x0002b41f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xcb80,	// (0x0002b41f) vkb2_area_bottom_space_btn_pane_g2

0xcbb6,	// (0x0002b455) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xcbb6,	// (0x0002b455) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe42,	// (0x0002e6e1) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe42,	// (0x0002e6e1) vkb2_area_bottom_space_btn_pane_g

0xb477,	// (0x00029d16) cel_fep_hwr_func_pane_ParamLimits

0xb477,	// (0x00029d16) cel_fep_hwr_func_pane

0xb4b3,	// (0x00029d52) cell_hwr_side_button_pane_ParamLimits

0xb4b3,	// (0x00029d52) cell_hwr_side_button_pane

0xc471,	// (0x0002ad10) aid_area_touch_clock_ParamLimits

0x4571,	// (0x00022e10) bg_uniindi_top_pane_ParamLimits

0xc483,	// (0x0002ad22) uniindi_top_pane_g1_ParamLimits

0xc499,	// (0x0002ad38) uniindi_top_pane_g2_ParamLimits

0xc4a5,	// (0x0002ad44) uniindi_top_pane_g3_ParamLimits

0xc4b6,	// (0x0002ad55) uniindi_top_pane_g4_ParamLimits

0xfd5a,	// (0x0002e5f9) uniindi_top_pane_g_ParamLimits

0xc4c3,	// (0x0002ad62) uniindi_top_pane_t1_ParamLimits

0x4571,	// (0x00022e10) bg_vkb2_func_pane_cp01_ParamLimits

0x4571,	// (0x00022e10) bg_vkb2_func_pane_cp01

0xe678,	// (0x0002cf17) cel_fep_hwr_func_pane_g1_ParamLimits

0xe678,	// (0x0002cf17) cel_fep_hwr_func_pane_g1

0x4571,	// (0x00022e10) bg_vkb2_func_pane_cp02_ParamLimits

0x4571,	// (0x00022e10) bg_vkb2_func_pane_cp02

0xe678,	// (0x0002cf17) cell_hwr_side_button_pane_g1_ParamLimits

0xe678,	// (0x0002cf17) cell_hwr_side_button_pane_g1

0x5904,	// (0x000241a3) status_pane_g4_ParamLimits

0x5904,	// (0x000241a3) status_pane_g4

0x591e,	// (0x000241bd) status_pane_t1

0x75e7,	// (0x00025e86) form2_midp_gauge_slider_cont_pane

0x75ef,	// (0x00025e8e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb268,	// (0x00029b07) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb27a,	// (0x00029b19) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1a,	// (0x0002e3b9) form2_midp_gauge_slider_pane_t_ParamLimits

0x7601,	// (0x00025ea0) form2_midp_slider_pane_ParamLimits

0xc500,	// (0x0002ad9f) aid_size_cell_func_vkb2_ParamLimits

0xc500,	// (0x0002ad9f) aid_size_cell_func_vkb2

0xe619,	// (0x0002ceb8) slider_pane_g4_ParamLimits

0xe619,	// (0x0002ceb8) slider_pane_g4

0xcc00,	// (0x0002b49f) form2_midp_gauge_slider_pane_t2_cp01

0xcc0e,	// (0x0002b4ad) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcc0e,	// (0x0002b4ad) form2_midp_gauge_slider_pane_t3_cp01

0xcc2b,	// (0x0002b4ca) form2_midp_slider_pane_cp01

0x43ce,	// (0x00022c6d) navi_smil_pane

0xe6a8,	// (0x0002cf47) navi_smil_pane_g1

0xe6b0,	// (0x0002cf4f) navi_smil_pane_t1

0xe686,	// (0x0002cf25) form2_midp_slider_pane_g1

0xe68f,	// (0x0002cf2e) form2_midp_slider_pane_g2

0xe697,	// (0x0002cf36) form2_midp_slider_pane_g3

0xe686,	// (0x0002cf25) form2_midp_slider_pane_g4

0xee44,	// (0x0002d6e3) form2_midp_slider_pane_g5

0x0004,

0xfe4b,	// (0x0002e6ea) form2_midp_slider_pane_g

0xcbf0,	// (0x0002b48f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xcbf0,	// (0x0002b48f) vkb2_area_bottom_space_btn_pane_g4

0xa49a,	// (0x00028d39) lc0_navi_pane_ParamLimits

0xa49a,	// (0x00028d39) lc0_navi_pane

0xa510,	// (0x00028daf) lc0_stat_indi_pane_ParamLimits

0xa510,	// (0x00028daf) lc0_stat_indi_pane

0xa527,	// (0x00028dc6) ls0_title_pane_ParamLimits

0xa527,	// (0x00028dc6) ls0_title_pane

0x4a3f,	// (0x000232de) bg_popup_sub_pane_cp14_ParamLimits

0xc458,	// (0x0002acf7) list_uniindi_pane_ParamLimits

0xc464,	// (0x0002ad03) uniindi_top_pane_ParamLimits

0xdc2e,	// (0x0002c4cd) list_single_uniindi_pane_g1_ParamLimits

0xdc41,	// (0x0002c4e0) list_single_uniindi_pane_t1_ParamLimits

0xcc34,	// (0x0002b4d3) lc0_stat_clock_pane_ParamLimits

0xcc34,	// (0x0002b4d3) lc0_stat_clock_pane

0xee4d,	// (0x0002d6ec) lc0_stat_indi_pane_g1_ParamLimits

0xee4d,	// (0x0002d6ec) lc0_stat_indi_pane_g1

0xee5a,	// (0x0002d6f9) lc0_stat_indi_pane_g2_ParamLimits

0xee5a,	// (0x0002d6f9) lc0_stat_indi_pane_g2

0x0001,

0xfe56,	// (0x0002e6f5) lc0_stat_indi_pane_g_ParamLimits

0xfe56,	// (0x0002e6f5) lc0_stat_indi_pane_g

0xcc41,	// (0x0002b4e0) lc0_uni_indicator_pane_ParamLimits

0xcc41,	// (0x0002b4e0) lc0_uni_indicator_pane

0xe6be,	// (0x0002cf5d) ls0_title_pane_g1_ParamLimits

0xe6be,	// (0x0002cf5d) ls0_title_pane_g1

0xee67,	// (0x0002d706) ls0_title_pane_t1_ParamLimits

0xee67,	// (0x0002d706) ls0_title_pane_t1

0xcc4e,	// (0x0002b4ed) lc0_uni_indicator_pane_g1_ParamLimits

0xcc4e,	// (0x0002b4ed) lc0_uni_indicator_pane_g1

0xe6d2,	// (0x0002cf71) lc0_stat_clock_pane_t1

0x43ce,	// (0x00022c6d) main_ai5_pane

0xe6e0,	// (0x0002cf7f) ai5_sk_pane_ParamLimits

0xe6e0,	// (0x0002cf7f) ai5_sk_pane

0xee9d,	// (0x0002d73c) cell_ai5_widget_pane_ParamLimits

0xee9d,	// (0x0002d73c) cell_ai5_widget_pane

0xe6ed,	// (0x0002cf8c) aid_size_cell_widget_grid

0xe6ff,	// (0x0002cf9e) bg_ai5_widget_pane_ParamLimits

0xe6ff,	// (0x0002cf9e) bg_ai5_widget_pane

0xef3b,	// (0x0002d7da) cell_ai5_widget_pane_g2

0xef4b,	// (0x0002d7ea) cell_ai5_widget_pane_g3

0xef5f,	// (0x0002d7fe) cell_ai5_widget_pane_g4

0xef6b,	// (0x0002d80a) cell_ai5_widget_pane_g5

0xef77,	// (0x0002d816) cell_ai5_widget_pane_g6

0xef83,	// (0x0002d822) cell_ai5_widget_pane_g7

0xefcb,	// (0x0002d86a) cell_ai5_widget_pane_t1_ParamLimits

0xefcb,	// (0x0002d86a) cell_ai5_widget_pane_t1

0xefe8,	// (0x0002d887) cell_ai5_widget_pane_t2_ParamLimits

0xefe8,	// (0x0002d887) cell_ai5_widget_pane_t2

0xf000,	// (0x0002d89f) cell_ai5_widget_pane_t3_ParamLimits

0xf000,	// (0x0002d89f) cell_ai5_widget_pane_t3

0xf018,	// (0x0002d8b7) cell_ai5_widget_pane_t4_ParamLimits

0xf018,	// (0x0002d8b7) cell_ai5_widget_pane_t4

0xf032,	// (0x0002d8d1) cell_ai5_widget_pane_t5_ParamLimits

0xf032,	// (0x0002d8d1) cell_ai5_widget_pane_t5

0xe70b,	// (0x0002cfaa) cell_ai5_widget_pane_t6_ParamLimits

0xe70b,	// (0x0002cfaa) cell_ai5_widget_pane_t6

0xe71d,	// (0x0002cfbc) cell_ai5_widget_pane_t7_ParamLimits

0xe71d,	// (0x0002cfbc) cell_ai5_widget_pane_t7

0xf051,	// (0x0002d8f0) cell_ai5_widget_pane_t8_ParamLimits

0xf051,	// (0x0002d8f0) cell_ai5_widget_pane_t8

0x0009,

0xfe70,	// (0x0002e70f) cell_ai5_widget_pane_t_ParamLimits

0xfe70,	// (0x0002e70f) cell_ai5_widget_pane_t

0xf099,	// (0x0002d938) grid_ai5_widget_pane

0x4a3f,	// (0x000232de) highlight_cell_ai5_widget_pane_ParamLimits

0x4a3f,	// (0x000232de) highlight_cell_ai5_widget_pane

0xf0b1,	// (0x0002d950) ai5_sk_left_pane

0xf0bb,	// (0x0002d95a) ai5_sk_middle_pane

0xf0c5,	// (0x0002d964) ai5_sk_right_pane

0xe736,	// (0x0002cfd5) bg_ai5_widget_pane_g1_ParamLimits

0xe736,	// (0x0002cfd5) bg_ai5_widget_pane_g1

0xe742,	// (0x0002cfe1) bg_ai5_widget_pane_g2_ParamLimits

0xe742,	// (0x0002cfe1) bg_ai5_widget_pane_g2

0xe74e,	// (0x0002cfed) bg_ai5_widget_pane_g3_ParamLimits

0xe74e,	// (0x0002cfed) bg_ai5_widget_pane_g3

0xe75a,	// (0x0002cff9) bg_ai5_widget_pane_g4_ParamLimits

0xe75a,	// (0x0002cff9) bg_ai5_widget_pane_g4

0xe766,	// (0x0002d005) bg_ai5_widget_pane_g5_ParamLimits

0xe766,	// (0x0002d005) bg_ai5_widget_pane_g5

0xe772,	// (0x0002d011) bg_ai5_widget_pane_g6_ParamLimits

0xe772,	// (0x0002d011) bg_ai5_widget_pane_g6

0xe77e,	// (0x0002d01d) bg_ai5_widget_pane_g7_ParamLimits

0xe77e,	// (0x0002d01d) bg_ai5_widget_pane_g7

0xe78a,	// (0x0002d029) bg_ai5_widget_pane_g8_ParamLimits

0xe78a,	// (0x0002d029) bg_ai5_widget_pane_g8

0xe796,	// (0x0002d035) bg_ai5_widget_pane_g9_ParamLimits

0xe796,	// (0x0002d035) bg_ai5_widget_pane_g9

0x0008,

0xfe85,	// (0x0002e724) bg_ai5_widget_pane_g_ParamLimits

0xfe85,	// (0x0002e724) bg_ai5_widget_pane_g

0xe7a2,	// (0x0002d041) cell_shortcut_ai5_widget_pane_ParamLimits

0xe7a2,	// (0x0002d041) cell_shortcut_ai5_widget_pane

0x447a,	// (0x00022d19) bg_cell_shortcut_ai5_widget_pane

0xe7b4,	// (0x0002d053) cell_grid_ai5_widget_pane_g1

0xe7bd,	// (0x0002d05c) highlight_cell_shortcut_ai5_widget_pane

0x59fe,	// (0x0002429d) ai5_sk_left_pane_g1

0xe7c5,	// (0x0002d064) ai5_sk_left_pane_g2

0xe7cd,	// (0x0002d06c) ai5_sk_left_pane_g3

0xe7d5,	// (0x0002d074) ai5_sk_left_pane_g4

0x0003,

0xfe98,	// (0x0002e737) ai5_sk_left_pane_g

0xe7dd,	// (0x0002d07c) ai5_sk_left_pane_t1

0x59f6,	// (0x00024295) ai5_sk_right_pane_g1

0xe7eb,	// (0x0002d08a) ai5_sk_right_pane_g2

0xe7f3,	// (0x0002d092) ai5_sk_right_pane_g3

0xe7fb,	// (0x0002d09a) ai5_sk_right_pane_g4

0x0003,

0xfea1,	// (0x0002e740) ai5_sk_right_pane_g

0xe803,	// (0x0002d0a2) ai5_sk_right_pane_t1

0x59f6,	// (0x00024295) ai5_sk_middle_pane_g1

0x59fe,	// (0x0002429d) ai5_sk_middle_pane_g2

0x5a16,	// (0x000242b5) ai5_sk_middle_pane_g3

0xe7f3,	// (0x0002d092) ai5_sk_middle_pane_g4

0xe7cd,	// (0x0002d06c) ai5_sk_middle_pane_g5

0xe811,	// (0x0002d0b0) ai5_sk_middle_pane_g6

0xf0eb,	// (0x0002d98a) ai5_sk_middle_pane_g7

0x0006,

0xfeaa,	// (0x0002e749) ai5_sk_middle_pane_g

0xa3e3,	// (0x00028c82) aid_touch_area_size_lc0_ParamLimits

0xa3e3,	// (0x00028c82) aid_touch_area_size_lc0

0xb80b,	// (0x0002a0aa) cell_hwr_candidate_pane_t1_ParamLimits

0x57ea,	// (0x00024089) aid_touch_navi_pane

0xa5fd,	// (0x00028e9c) status_dt_navi_pane_ParamLimits

0xa5fd,	// (0x00028e9c) status_dt_navi_pane

0xa60a,	// (0x00028ea9) status_dt_sta_pane_ParamLimits

0xa60a,	// (0x00028ea9) status_dt_sta_pane

0xf0f3,	// (0x0002d992) dt_sta_controll_pane

0xf100,	// (0x0002d99f) dt_sta_indi_pane

0xf111,	// (0x0002d9b0) dt_sta_title_pane

0x4571,	// (0x00022e10) bg_dt_sta_indi_pane_ParamLimits

0x4571,	// (0x00022e10) bg_dt_sta_indi_pane

0xe819,	// (0x0002d0b8) dt_sta_battery_pane

0xf124,	// (0x0002d9c3) dt_sta_indi_pane_g1

0xf12d,	// (0x0002d9cc) dt_sta_indi_pane_g2

0xf136,	// (0x0002d9d5) dt_sta_indi_pane_g3

0x0002,

0xfeb9,	// (0x0002e758) dt_sta_indi_pane_g

0xf13f,	// (0x0002d9de) dt_sta_signal_pane

0x4a3f,	// (0x000232de) bg_dt_sta_title_pane_ParamLimits

0x4a3f,	// (0x000232de) bg_dt_sta_title_pane

0xf148,	// (0x0002d9e7) dt_sta_title_pane_g1

0xf150,	// (0x0002d9ef) dt_sta_title_pane_t1_ParamLimits

0xf150,	// (0x0002d9ef) dt_sta_title_pane_t1

0x43ce,	// (0x00022c6d) bg_dt_sta_control_pane

0xf165,	// (0x0002da04) dt_sta_controll_pane_g1

0xf16e,	// (0x0002da0d) bg_dt_sta_title_pane_g1

0xf177,	// (0x0002da16) bg_dt_sta_title_pane_g2

0xf180,	// (0x0002da1f) bg_dt_sta_title_pane_g3

0x0002,

0xfec0,	// (0x0002e75f) bg_dt_sta_title_pane_g

0x7770,	// (0x0002600f) bg_dt_sta_indi_pane_g1

0xe821,	// (0x0002d0c0) dt_sta_signal_pane_g1

0xe829,	// (0x0002d0c8) dt_sta_signal_pane_g2

0x0001,

0xfec7,	// (0x0002e766) dt_sta_signal_pane_g

0xe831,	// (0x0002d0d0) dt_sta_battery_pane_g1

0xe83a,	// (0x0002d0d9) dt_sta_battery_pane_t1

0x7770,	// (0x0002600f) bg_dt_sta_control_pane_g1

0x4ff5,	// (0x00023894) fep_china_uni_eep_pane

0x4ffd,	// (0x0002389c) fep_china_uni_entry_pane_ParamLimits

0x500d,	// (0x000238ac) popup_fep_china_uni_window_g1_ParamLimits

0x501d,	// (0x000238bc) popup_fep_china_uni_window_g2_ParamLimits

0x501d,	// (0x000238bc) popup_fep_china_uni_window_g2

0x0001,

0xf75d,	// (0x0002dffc) popup_fep_china_uni_window_g_ParamLimits

0xf75d,	// (0x0002dffc) popup_fep_china_uni_window_g

0xe849,	// (0x0002d0e8) fep_china_uni_eep_pane_g1

0xe851,	// (0x0002d0f0) fep_china_uni_eep_pane_t1

0xe69f,	// (0x0002cf3e) aid_touch_area_size_smil_player

0x58d7,	// (0x00024176) lc0_clock_pane

0x5912,	// (0x000241b1) status_pane_g5_ParamLimits

0x5912,	// (0x000241b1) status_pane_g5

0xa043,	// (0x000288e2) popup_keymap_window

0x58f0,	// (0x0002418f) status_icon_pane

0xef4b,	// (0x0002d7ea) cell_ai5_widget_pane_g3_ParamLimits

0xef5f,	// (0x0002d7fe) cell_ai5_widget_pane_g4_ParamLimits

0xef6b,	// (0x0002d80a) cell_ai5_widget_pane_g5_ParamLimits

0xef8f,	// (0x0002d82e) cell_ai5_widget_pane_g8_ParamLimits

0xef8f,	// (0x0002d82e) cell_ai5_widget_pane_g8

0xefa3,	// (0x0002d842) cell_ai5_widget_pane_g9_ParamLimits

0xefa3,	// (0x0002d842) cell_ai5_widget_pane_g9

0xefb7,	// (0x0002d856) cell_ai5_widget_pane_g10_ParamLimits

0xefb7,	// (0x0002d856) cell_ai5_widget_pane_g10

0xe860,	// (0x0002d0ff) status_icon_pane_g1

0x43ce,	// (0x00022c6d) bg_popup_sub_pane_cp13

0xe868,	// (0x0002d107) popup_keymap_window_t1

0x9e1a,	// (0x000286b9) control_pane_g6_ParamLimits

0x9e1a,	// (0x000286b9) control_pane_g6

0x9e27,	// (0x000286c6) control_pane_g7_ParamLimits

0x9e27,	// (0x000286c6) control_pane_g7

0x9e34,	// (0x000286d3) control_pane_g8_ParamLimits

0x9e34,	// (0x000286d3) control_pane_g8

0xf0f3,	// (0x0002d992) dt_sta_controll_pane_ParamLimits

0xf100,	// (0x0002d99f) dt_sta_indi_pane_ParamLimits

0xf111,	// (0x0002d9b0) dt_sta_title_pane_ParamLimits

0x4981,	// (0x00023220) aid_size_touch_scroll_bar_cale

0x9150,	// (0x000279ef) popup_discreet_window_ParamLimits

0x9150,	// (0x000279ef) popup_discreet_window

0x91d8,	// (0x00027a77) popup_sk_window

0x5f75,	// (0x00024814) bg_popup_sub_pane_cp28_ParamLimits

0x5f75,	// (0x00024814) bg_popup_sub_pane_cp28

0xe876,	// (0x0002d115) popup_discreet_window_g1_ParamLimits

0xe876,	// (0x0002d115) popup_discreet_window_g1

0xe896,	// (0x0002d135) popup_discreet_window_t1_ParamLimits

0xe896,	// (0x0002d135) popup_discreet_window_t1

0xe8b4,	// (0x0002d153) popup_discreet_window_t2_ParamLimits

0xe8b4,	// (0x0002d153) popup_discreet_window_t2

0x0002,

0xfecc,	// (0x0002e76b) popup_discreet_window_t_ParamLimits

0xfecc,	// (0x0002e76b) popup_discreet_window_t

0xcc62,	// (0x0002b501) popup_sk_window_g1

0xcc6c,	// (0x0002b50b) popup_sk_window_g2

0x0001,

0xfed3,	// (0x0002e772) popup_sk_window_g

0xe906,	// (0x0002d1a5) popup_sk_window_t1

0xe914,	// (0x0002d1b3) popup_sk_window_t1_copy1

0xef3b,	// (0x0002d7da) cell_ai5_widget_pane_g2_ParamLimits

0xf063,	// (0x0002d902) cell_ai5_widget_pane_t9_ParamLimits

0xf063,	// (0x0002d902) cell_ai5_widget_pane_t9

0x43ce,	// (0x00022c6d) main_fep_fshwr2_pane

0xf189,	// (0x0002da28) aid_fshwr2_btn_pane

0xf191,	// (0x0002da30) aid_fshwr2_syb_pane

0xf199,	// (0x0002da38) aid_fshwr2_txt_pane

0xf1a1,	// (0x0002da40) fshwr2_func_candi_pane

0xf1ad,	// (0x0002da4c) fshwr2_hwr_syb_pane

0xf1b9,	// (0x0002da58) fshwr2_icf_pane

0x43ce,	// (0x00022c6d) fshwr2_icf_bg_pane

0xf1c3,	// (0x0002da62) fshwr2_icf_pane_t1_ParamLimits

0xf1c3,	// (0x0002da62) fshwr2_icf_pane_t1

0x7770,	// (0x0002600f) fshwr2_func_candi_pane_g1

0xe936,	// (0x0002d1d5) fshwr2_func_candi_row_pane_ParamLimits

0xe936,	// (0x0002d1d5) fshwr2_func_candi_row_pane

0xf1da,	// (0x0002da79) cell_fshwr2_syb_pane_ParamLimits

0xf1da,	// (0x0002da79) cell_fshwr2_syb_pane

0x7917,	// (0x000261b6) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7917,	// (0x000261b6) fshwr2_hwr_syb_pane_g1

0x43ce,	// (0x00022c6d) bg_popup_call_pane_cp01

0xe947,	// (0x0002d1e6) fshwr2_func_candi_cell_pane_ParamLimits

0xe947,	// (0x0002d1e6) fshwr2_func_candi_cell_pane

0xe978,	// (0x0002d217) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe978,	// (0x0002d217) fshwr2_func_candi_cell_bg_pane

0xe992,	// (0x0002d231) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe992,	// (0x0002d231) fshwr2_func_candi_cell_pane_g1

0xe9ba,	// (0x0002d259) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe9ba,	// (0x0002d259) fshwr2_func_candi_cell_pane_t1

0x43ce,	// (0x00022c6d) bg_button_pane_cp08

0x5464,	// (0x00023d03) cell_fshwr2_syb_bg_pane

0xf1f4,	// (0x0002da93) cell_fshwr2_syb_bg_pane_g1

0xf1fc,	// (0x0002da9b) cell_fshwr2_syb_bg_pane_t1

0x4a3f,	// (0x000232de) main_tmo_pane

0xaba4,	// (0x00029443) uni_indicator_pane_g1_ParamLimits

0xabb9,	// (0x00029458) uni_indicator_pane_g2_ParamLimits

0xabcf,	// (0x0002946e) uni_indicator_pane_g3_ParamLimits

0x69a1,	// (0x00025240) uni_indicator_pane_g4_ParamLimits

0x69a1,	// (0x00025240) uni_indicator_pane_g4

0x69b5,	// (0x00025254) uni_indicator_pane_g5_ParamLimits

0x69b5,	// (0x00025254) uni_indicator_pane_g5

0x69c9,	// (0x00025268) uni_indicator_pane_g6_ParamLimits

0x69c9,	// (0x00025268) uni_indicator_pane_g6

0xf95a,	// (0x0002e1f9) uni_indicator_pane_g_ParamLimits

0xbf5e,	// (0x0002a7fd) popup_tmo_note_window_ParamLimits

0xbf5e,	// (0x0002a7fd) popup_tmo_note_window

0x43ce,	// (0x00022c6d) fshwr2_bg_pane

0xe9ab,	// (0x0002d24a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe9ab,	// (0x0002d24a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed8,	// (0x0002e777) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed8,	// (0x0002e777) fshwr2_func_candi_cell_pane_g

0x7770,	// (0x0002600f) bg_popup_window_pane_cp01

0xe9cd,	// (0x0002d26c) bg_popup_window_pane_g1_cp01

0xe9d6,	// (0x0002d275) bg_popup_window_pane_cp22_ParamLimits

0xe9d6,	// (0x0002d275) bg_popup_window_pane_cp22

0xe9e4,	// (0x0002d283) listscroll_tmo_link_pane_ParamLimits

0xe9e4,	// (0x0002d283) listscroll_tmo_link_pane

0xea24,	// (0x0002d2c3) popup_tmo_note_window_g1_ParamLimits

0xea24,	// (0x0002d2c3) popup_tmo_note_window_g1

0xea31,	// (0x0002d2d0) tmo_note_info_pane_ParamLimits

0xea31,	// (0x0002d2d0) tmo_note_info_pane

0xf20b,	// (0x0002daaa) list_tmo_note_info_pane_g1_ParamLimits

0xf20b,	// (0x0002daaa) list_tmo_note_info_pane_g1

0xea4b,	// (0x0002d2ea) list_tmo_note_info_pane_g2_ParamLimits

0xea4b,	// (0x0002d2ea) list_tmo_note_info_pane_g2

0x0001,

0xfedd,	// (0x0002e77c) list_tmo_note_info_pane_g_ParamLimits

0xfedd,	// (0x0002e77c) list_tmo_note_info_pane_g

0xea67,	// (0x0002d306) list_tmo_note_info_text_pane_ParamLimits

0xea67,	// (0x0002d306) list_tmo_note_info_text_pane

0xeaa9,	// (0x0002d348) list_tmo_link_pane

0xeab6,	// (0x0002d355) scroll_pane_cp20

0xeac3,	// (0x0002d362) list_single_tmo_link_pane_ParamLimits

0xeac3,	// (0x0002d362) list_single_tmo_link_pane

0xead3,	// (0x0002d372) list_single_tmo_link_pane_t1

0xeae1,	// (0x0002d380) list_tmo_note_info_text_pane_t1_ParamLimits

0xeae1,	// (0x0002d380) list_tmo_note_info_text_pane_t1

0x9646,	// (0x00027ee5) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9646,	// (0x00027ee5) aid_size_touch_scroll_bar_cp01

0xd2c8,	// (0x0002bb67) aid_size_touch_slider_marker

0x91c0,	// (0x00027a5f) popup_settings_window_ParamLimits

0x91c0,	// (0x00027a5f) popup_settings_window

0xd497,	// (0x0002bd36) popup_candi_list_indi_window

0x57ea,	// (0x00024089) aid_touch_navi_pane_ParamLimits

0xc1c0,	// (0x0002aa5f) rs_clock_indi_pane

0xc1c9,	// (0x0002aa68) sctrl_sk_bottom_pane_ParamLimits

0xc1da,	// (0x0002aa79) sctrl_sk_top_pane_ParamLimits

0xc55a,	// (0x0002adf9) popup_fep_tooltip_window

0xe6ed,	// (0x0002cf8c) aid_size_cell_widget_grid_ParamLimits

0xef2f,	// (0x0002d7ce) cell_ai5_widget_pane_g1_ParamLimits

0xef2f,	// (0x0002d7ce) cell_ai5_widget_pane_g1

0xef77,	// (0x0002d816) cell_ai5_widget_pane_g6_ParamLimits

0xef83,	// (0x0002d822) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe5b,	// (0x0002e6fa) cell_ai5_widget_pane_g_ParamLimits

0xfe5b,	// (0x0002e6fa) cell_ai5_widget_pane_g

0xf087,	// (0x0002d926) cell_ai5_widget_pane_t10_ParamLimits

0xf087,	// (0x0002d926) cell_ai5_widget_pane_t10

0xf099,	// (0x0002d938) grid_ai5_widget_pane_ParamLimits

0xf0cf,	// (0x0002d96e) cell_contacts_ai5_widget_pane_ParamLimits

0xf0cf,	// (0x0002d96e) cell_contacts_ai5_widget_pane

0xe8c9,	// (0x0002d168) popup_discreet_window_t3_ParamLimits

0xe8c9,	// (0x0002d168) popup_discreet_window_t3

0xe922,	// (0x0002d1c1) popup_fshwr2_char_preview_window_ParamLimits

0xe922,	// (0x0002d1c1) popup_fshwr2_char_preview_window

0xf222,	// (0x0002dac1) tmo_note_info_pane_t1

0xf237,	// (0x0002dad6) tmo_note_info_pane_t2

0xf24c,	// (0x0002daeb) tmo_note_info_pane_t3

0xea85,	// (0x0002d324) tmo_note_info_pane_t4

0xea97,	// (0x0002d336) tmo_note_info_pane_t5

0x0004,

0xfee2,	// (0x0002e781) tmo_note_info_pane_t

0xeaa9,	// (0x0002d348) list_tmo_link_pane_ParamLimits

0xeab6,	// (0x0002d355) scroll_pane_cp20_ParamLimits

0x43ce,	// (0x00022c6d) bg_popup_fep_char_preview_window_cp01

0xeafa,	// (0x0002d399) popup_fshwr2_char_preview_window_t1

0xeb08,	// (0x0002d3a7) popup_candi_list_indi_window_g1

0xeb11,	// (0x0002d3b0) bg_cell_contacts_ai5_widget_pane

0xf261,	// (0x0002db00) cell_contacts_ai5_widget_pane_g1

0xf276,	// (0x0002db15) cell_contacts_ai5_widget_pane_g2

0xf285,	// (0x0002db24) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeed,	// (0x0002e78c) cell_contacts_ai5_widget_pane_g

0xf299,	// (0x0002db38) cell_contacts_ai5_widget_pane_t1

0x4a3f,	// (0x000232de) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf310,	// (0x0002dbaf) settings_container_pane

0x5464,	// (0x00023d03) listscroll_set_pane_copy1

0x717f,	// (0x00025a1e) scroll_pane_cp121_copy1

0xeb1d,	// (0x0002d3bc) set_content_pane_copy1

0xf31c,	// (0x0002dbbb) aid_height_set_list_copy1_ParamLimits

0xf31c,	// (0x0002dbbb) aid_height_set_list_copy1

0x677c,	// (0x0002501b) aid_size_parent_copy1_ParamLimits

0x677c,	// (0x0002501b) aid_size_parent_copy1

0xf328,	// (0x0002dbc7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf328,	// (0x0002dbc7) button_value_adjust_pane_cp6_copy1

0x4b97,	// (0x00023436) list_highlight_pane_cp2_copy1_ParamLimits

0x4b97,	// (0x00023436) list_highlight_pane_cp2_copy1

0xf33c,	// (0x0002dbdb) list_set_pane_copy1_ParamLimits

0xf33c,	// (0x0002dbdb) list_set_pane_copy1

0xf2ab,	// (0x0002db4a) main_pane_set_t1_copy1_ParamLimits

0xf2ab,	// (0x0002db4a) main_pane_set_t1_copy1

0xf2e5,	// (0x0002db84) main_pane_set_t2_copy1_ParamLimits

0xf2e5,	// (0x0002db84) main_pane_set_t2_copy1

0xf3e9,	// (0x0002dc88) main_pane_set_t3_copy1

0xf3f7,	// (0x0002dc96) main_pane_set_t4_copy1

0xf304,	// (0x0002dba3) set_content_pane_g1_copy1_ParamLimits

0xf304,	// (0x0002dba3) set_content_pane_g1_copy1

0xf405,	// (0x0002dca4) setting_code_pane_copy1

0xeb25,	// (0x0002d3c4) setting_slider_graphic_pane_copy1

0xeb25,	// (0x0002d3c4) setting_slider_pane_copy1

0xeb2f,	// (0x0002d3ce) setting_text_pane_copy1

0xeb39,	// (0x0002d3d8) setting_volume_pane_copy1

0xf40f,	// (0x0002dcae) settings_code_pane_cp2_copy1

0xf417,	// (0x0002dcb6) settings_code_pane_cp_copy1_ParamLimits

0xf417,	// (0x0002dcb6) settings_code_pane_cp_copy1

0xf42b,	// (0x0002dcca) volume_set_pane_copy1

0xf433,	// (0x0002dcd2) volume_set_pane_g10_copy1

0xf43b,	// (0x0002dcda) volume_set_pane_g1_copy1

0xf443,	// (0x0002dce2) volume_set_pane_g2_copy1

0xf44b,	// (0x0002dcea) volume_set_pane_g3_copy1

0xf453,	// (0x0002dcf2) volume_set_pane_g4_copy1

0xf45b,	// (0x0002dcfa) volume_set_pane_g5_copy1

0xf463,	// (0x0002dd02) volume_set_pane_g6_copy1

0xf46b,	// (0x0002dd0a) volume_set_pane_g7_copy1

0xf473,	// (0x0002dd12) volume_set_pane_g8_copy1

0xf47b,	// (0x0002dd1a) volume_set_pane_g9_copy1

0x443e,	// (0x00022cdd) bg_set_opt_pane_cp_copy1_ParamLimits

0x443e,	// (0x00022cdd) bg_set_opt_pane_cp_copy1

0xeb42,	// (0x0002d3e1) setting_slider_pane_t1_copy1_ParamLimits

0xeb42,	// (0x0002d3e1) setting_slider_pane_t1_copy1

0xf483,	// (0x0002dd22) setting_slider_pane_t2_copy1_ParamLimits

0xf483,	// (0x0002dd22) setting_slider_pane_t2_copy1

0xf49d,	// (0x0002dd3c) setting_slider_pane_t3_copy1_ParamLimits

0xf49d,	// (0x0002dd3c) setting_slider_pane_t3_copy1

0xf4b5,	// (0x0002dd54) slider_set_pane_copy1_ParamLimits

0xf4b5,	// (0x0002dd54) slider_set_pane_copy1

0x4aa6,	// (0x00023345) set_opt_bg_pane_g1_copy2

0x4aae,	// (0x0002334d) set_opt_bg_pane_g2_copy2

0xeb60,	// (0x0002d3ff) set_opt_bg_pane_g3_copy2

0x4abe,	// (0x0002335d) set_opt_bg_pane_g4_copy2

0x4ac6,	// (0x00023365) set_opt_bg_pane_g5_copy2

0x4ace,	// (0x0002336d) set_opt_bg_pane_g6_copy2

0xf4cb,	// (0x0002dd6a) set_opt_bg_pane_g7_copy2

0xeb6a,	// (0x0002d409) set_opt_bg_pane_g8_copy2

0xeb74,	// (0x0002d413) set_opt_bg_pane_g9_copy2

0xcc76,	// (0x0002b515) aid_size_touch_slider_mark_copy1_ParamLimits

0xcc76,	// (0x0002b515) aid_size_touch_slider_mark_copy1

0xeb7e,	// (0x0002d41d) slider_set_pane_g1_copy1

0xcc8a,	// (0x0002b529) slider_set_pane_g2_copy1

0xac8f,	// (0x0002952e) slider_set_pane_g3_copy1_ParamLimits

0xac8f,	// (0x0002952e) slider_set_pane_g3_copy1

0xaca3,	// (0x00029542) slider_set_pane_g4_copy1_ParamLimits

0xaca3,	// (0x00029542) slider_set_pane_g4_copy1

0xacbb,	// (0x0002955a) slider_set_pane_g5_copy1_ParamLimits

0xacbb,	// (0x0002955a) slider_set_pane_g5_copy1

0xac8f,	// (0x0002952e) slider_set_pane_g6_copy1_ParamLimits

0xac8f,	// (0x0002952e) slider_set_pane_g6_copy1

0xcc92,	// (0x0002b531) slider_set_pane_g7_copy1_ParamLimits

0xcc92,	// (0x0002b531) slider_set_pane_g7_copy1

0x43e2,	// (0x00022c81) bg_set_opt_pane_cp2_copy1

0xeb87,	// (0x0002d426) setting_slider_graphic_pane_g1_copy1

0xf4d3,	// (0x0002dd72) setting_slider_graphic_pane_t1_copy1

0xf4e3,	// (0x0002dd82) setting_slider_graphic_pane_t2_copy1

0xf4f3,	// (0x0002dd92) slider_set_pane_cp_copy1

0xeb98,	// (0x0002d437) input_focus_pane_cp1_copy1

0xeba1,	// (0x0002d440) list_set_text_pane_copy1

0xeba9,	// (0x0002d448) setting_text_pane_g1_copy1

0xcca8,	// (0x0002b547) set_text_pane_t1_copy1

0xeb98,	// (0x0002d437) input_focus_pane_cp2_copy1

0xeba9,	// (0x0002d448) setting_code_pane_g1_copy1

0xf4fb,	// (0x0002dd9a) setting_code_pane_t1_copy1

0xf509,	// (0x0002dda8) list_set_graphic_pane_copy1

0x43e2,	// (0x00022c81) bg_set_opt_pane_cp4_copy1

0x9c0d,	// (0x000284ac) list_set_graphic_pane_g1_copy1_ParamLimits

0x9c0d,	// (0x000284ac) list_set_graphic_pane_g1_copy1

0xf51b,	// (0x0002ddba) list_set_graphic_pane_g2_copy1

0x9c25,	// (0x000284c4) list_set_graphic_pane_t1_copy1_ParamLimits

0x9c25,	// (0x000284c4) list_set_graphic_pane_t1_copy1

0x7770,	// (0x0002600f) rs_clock_indi_pane_g1

0xebb2,	// (0x0002d451) rs_clock_indi_pane_t1

0xe819,	// (0x0002d0b8) rs_indi_pane

0xebc0,	// (0x0002d45f) rs_indi_pane_g1

0xebc9,	// (0x0002d468) rs_indi_pane_g2

0xebd2,	// (0x0002d471) rs_indi_pane_g3

0x0002,

0xfef4,	// (0x0002e793) rs_indi_pane_g

0x5464,	// (0x00023d03) bg_popup_preview_window_pane_cp03

0xebdb,	// (0x0002d47a) popup_fep_tooltip_window_t1

0x808c,	// (0x0002692b) popup_note2_window_g2_ParamLimits

0x808c,	// (0x0002692b) popup_note2_window_g2

0x0001,

0xfc92,	// (0x0002e531) popup_note2_window_g_ParamLimits

0xfc92,	// (0x0002e531) popup_note2_window_g

0xbbfa,	// (0x0002a499) bg_popup_sub_pane_cp11_ParamLimits

0xbc07,	// (0x0002a4a6) cell_ai3_links_pane_g1_ParamLimits

0xbc1e,	// (0x0002a4bd) cell_ai3_links_pane_t1

0xcca8,	// (0x0002b547) set_text_pane_t1_copy1_ParamLimits

0x5375,	// (0x00023c14) cell_graphic_popup_pane_cp2_ParamLimits

0x5375,	// (0x00023c14) cell_graphic_popup_pane_cp2

0xebe9,	// (0x0002d488) cell_graphic_popup_pane_g1_cp2

0x4794,	// (0x00023033) cell_graphic_popup_pane_g2_cp2

0xebf1,	// (0x0002d490) cell_graphic_popup_pane_g3_cp2

0xebf9,	// (0x0002d498) cell_graphic_popup_pane_t2_cp2

0x47a5,	// (0x00023044) grid_highlight_pane_cp3_cp2

0x4d41,	// (0x000235e0) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4a3f,	// (0x000232de) main_tmo_pane_ParamLimits

0xbf52,	// (0x0002a7f1) popup_tmo_big_image_note_window

0xef1f,	// (0x0002d7be) cell_ai5_widget_list_pane

0xef27,	// (0x0002d7c6) cell_ai5_widget_lrg_icon_pane

0xf222,	// (0x0002dac1) tmo_note_info_pane_t1_ParamLimits

0xf237,	// (0x0002dad6) tmo_note_info_pane_t2_ParamLimits

0xf24c,	// (0x0002daeb) tmo_note_info_pane_t3_ParamLimits

0xea85,	// (0x0002d324) tmo_note_info_pane_t4_ParamLimits

0xea97,	// (0x0002d336) tmo_note_info_pane_t5_ParamLimits

0xfee2,	// (0x0002e781) tmo_note_info_pane_t_ParamLimits

0xf310,	// (0x0002dbaf) settings_container_pane_ParamLimits

0xeb90,	// (0x0002d42f) indicator_popup_pane_cp5

0xeb90,	// (0x0002d42f) indicator_popup_pane_cp6

0xf509,	// (0x0002dda8) list_set_graphic_pane_copy1_ParamLimits

0x43ce,	// (0x00022c6d) bg_popup_window_pane_cp23

0xec07,	// (0x0002d4a6) popup_tmo_big_image_note_window_g1

0xec11,	// (0x0002d4b0) popup_tmo_big_image_note_window_t1

0xec21,	// (0x0002d4c0) popup_tmo_big_image_note_window_t2

0xec31,	// (0x0002d4d0) popup_tmo_big_image_note_window_t3

0x0002,

0xfefb,	// (0x0002e79a) popup_tmo_big_image_note_window_t

0xf523,	// (0x0002ddc2) cell_ai5_widget_lrg_icon_pane_g1

0xf52b,	// (0x0002ddca) cell_ai5_widget_lrg_icon_pane_t1

0xf539,	// (0x0002ddd8) cell_ai5_widget_list_row_pane_ParamLimits

0xf539,	// (0x0002ddd8) cell_ai5_widget_list_row_pane

0xf552,	// (0x0002ddf1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf552,	// (0x0002ddf1) cell_ai5_widget_list_row_pane_g1

0xf55f,	// (0x0002ddfe) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf55f,	// (0x0002ddfe) cell_ai5_widget_list_row_pane_t1

0xf577,	// (0x0002de16) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf577,	// (0x0002de16) cell_ai5_widget_list_row_pane_t2

0x0001,

0x02c2,	// (0x0001eb61) cell_ai5_widget_list_row_pane_t_ParamLimits

0x02c2,	// (0x0001eb61) cell_ai5_widget_list_row_pane_t

0x9077,	// (0x00027916) main_fep_vtchi_ss_pane

0xec41,	// (0x0002d4e0) popup_fep_char_pre_window

0xec49,	// (0x0002d4e8) popup_fep_ituss_window

0xec54,	// (0x0002d4f3) popup_fep_vkbss_window

0xec5d,	// (0x0002d4fc) grid_vkbss_keypad_pane_ParamLimits

0xec5d,	// (0x0002d4fc) grid_vkbss_keypad_pane

0xec6d,	// (0x0002d50c) ituss_keypad_pane

0xec75,	// (0x0002d514) aid_vkbss_key_offset_ParamLimits

0xec75,	// (0x0002d514) aid_vkbss_key_offset

0xec84,	// (0x0002d523) cell_vkbss_key_pane_ParamLimits

0xec84,	// (0x0002d523) cell_vkbss_key_pane

0xec9a,	// (0x0002d539) bg_cell_vkbss_key_g1_ParamLimits

0xec9a,	// (0x0002d539) bg_cell_vkbss_key_g1

0xeca6,	// (0x0002d545) cell_vkbss_key_3p_pane_ParamLimits

0xeca6,	// (0x0002d545) cell_vkbss_key_3p_pane

0xecc0,	// (0x0002d55f) cell_vkbss_key_g1_ParamLimits

0xecc0,	// (0x0002d55f) cell_vkbss_key_g1

0xecda,	// (0x0002d579) cell_vkbss_key_t1_ParamLimits

0xecda,	// (0x0002d579) cell_vkbss_key_t1

0xed05,	// (0x0002d5a4) cell_ituss_key_pane_ParamLimits

0xed05,	// (0x0002d5a4) cell_ituss_key_pane

0xed14,	// (0x0002d5b3) bg_cell_ituss_key_g1_ParamLimits

0xed14,	// (0x0002d5b3) bg_cell_ituss_key_g1

0xed20,	// (0x0002d5bf) cell_ituss_key_pane_g1_ParamLimits

0xed20,	// (0x0002d5bf) cell_ituss_key_pane_g1

0xed2c,	// (0x0002d5cb) cell_ituss_key_pane_g2_ParamLimits

0xed2c,	// (0x0002d5cb) cell_ituss_key_pane_g2

0x0001,

0xff02,	// (0x0002e7a1) cell_ituss_key_pane_g_ParamLimits

0xff02,	// (0x0002e7a1) cell_ituss_key_pane_g

0xed3f,	// (0x0002d5de) cell_ituss_key_t1_ParamLimits

0xed3f,	// (0x0002d5de) cell_ituss_key_t1

0xed5d,	// (0x0002d5fc) cell_ituss_key_t2_ParamLimits

0xed5d,	// (0x0002d5fc) cell_ituss_key_t2

0xed7c,	// (0x0002d61b) cell_ituss_key_t3_ParamLimits

0xed7c,	// (0x0002d61b) cell_ituss_key_t3

0xed9b,	// (0x0002d63a) cell_ituss_key_t4_ParamLimits

0xed9b,	// (0x0002d63a) cell_ituss_key_t4

0x0003,

0xff07,	// (0x0002e7a6) cell_ituss_key_t_ParamLimits

0xff07,	// (0x0002e7a6) cell_ituss_key_t

0xedba,	// (0x0002d659) cell_vkbss_key_3p_pane_g1

0xedc2,	// (0x0002d661) cell_vkbss_key_3p_pane_g2

0xedca,	// (0x0002d669) cell_vkbss_key_3p_pane_g3

0x0002,

0xff10,	// (0x0002e7af) cell_vkbss_key_3p_pane_g

0x43ce,	// (0x00022c6d) bg_popup_fep_char_preview_window_cp02

0xedd2,	// (0x0002d671) popup_fep_char_pre_window_t1

0xef15,	// (0x0002d7b4) main_ai5_sk_pane

0xeb11,	// (0x0002d3b0) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xf261,	// (0x0002db00) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf276,	// (0x0002db15) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf285,	// (0x0002db24) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeed,	// (0x0002e78c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf299,	// (0x0002db38) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4a3f,	// (0x000232de) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0002de28) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small
