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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000276aa };

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
0x8d2c,	// (0x000303d6) Screen

0x8d38,	// (0x000303e2) application_window_ParamLimits

0x8d38,	// (0x000303e2) application_window

0xc1a8,	// (0x00033852) screen_g1

0x8d70,	// (0x0003041a) area_bottom_pane_ParamLimits

0x8d70,	// (0x0003041a) area_bottom_pane

0xe670,	// (0x00035d1a) area_top_pane_ParamLimits

0xe670,	// (0x00035d1a) area_top_pane

0xe704,	// (0x00035dae) main_pane_ParamLimits

0xe704,	// (0x00035dae) main_pane

0xc1b2,	// (0x0003385c) misc_graphics

0xa545,	// (0x00031bef) battery_pane_ParamLimits

0xa545,	// (0x00031bef) battery_pane

0x299e,	// (0x0002a048) bg_status_flat_pane_g8

0x29a6,	// (0x0002a050) bg_status_flat_pane_g9

0x092a,	// (0x00027fd4) context_pane_ParamLimits

0x092a,	// (0x00027fd4) context_pane

0xa6b0,	// (0x00031d5a) navi_pane_ParamLimits

0xa6b0,	// (0x00031d5a) navi_pane

0xa72e,	// (0x00031dd8) signal_pane_ParamLimits

0xa72e,	// (0x00031dd8) signal_pane

0x0008,

0xf840,	// (0x00036eea) bg_status_flat_pane_g

0xa7be,	// (0x00031e68) status_pane_g1_ParamLimits

0xa7be,	// (0x00031e68) status_pane_g1

0xa7d4,	// (0x00031e7e) status_pane_g2_ParamLimits

0xa7d4,	// (0x00031e7e) status_pane_g2

0x0b51,	// (0x000281fb) status_pane_g3_ParamLimits

0x0b51,	// (0x000281fb) status_pane_g3

0x0004,

0xf76c,	// (0x00036e16) status_pane_g_ParamLimits

0xf76c,	// (0x00036e16) status_pane_g

0xa7e0,	// (0x00031e8a) title_pane_ParamLimits

0xa7e0,	// (0x00031e8a) title_pane

0xa843,	// (0x00031eed) uni_indicator_pane_ParamLimits

0xa843,	// (0x00031eed) uni_indicator_pane

0xcfab,	// (0x00034655) bg_list_pane_ParamLimits

0xcfab,	// (0x00034655) bg_list_pane

0x9d33,	// (0x000313dd) find_pane

0x0e0d,	// (0x000284b7) listscroll_app_pane_ParamLimits

0x0e0d,	// (0x000284b7) listscroll_app_pane

0xcfcb,	// (0x00034675) listscroll_form_pane

0x9d3b,	// (0x000313e5) listscroll_gen_pane_ParamLimits

0x9d3b,	// (0x000313e5) listscroll_gen_pane

0x0243,	// (0x000278ed) listscroll_set_pane

0x3502,	// (0x0002abac) main_idle_act_pane

0xce5f,	// (0x00034509) main_idle_trad_pane

0xce5f,	// (0x00034509) main_list_empty_pane

0xc706,	// (0x00033db0) main_midp_pane

0xcfe5,	// (0x0003468f) main_pane_g1_ParamLimits

0xcfe5,	// (0x0003468f) main_pane_g1

0x9d4f,	// (0x000313f9) popup_ai_message_window_ParamLimits

0x9d4f,	// (0x000313f9) popup_ai_message_window

0x9e00,	// (0x000314aa) popup_fep_china_uni_window_ParamLimits

0x9e00,	// (0x000314aa) popup_fep_china_uni_window

0x9e5a,	// (0x00031504) popup_fep_japan_candidate_window_ParamLimits

0x9e5a,	// (0x00031504) popup_fep_japan_candidate_window

0x9e78,	// (0x00031522) popup_fep_japan_predictive_window_ParamLimits

0x9e78,	// (0x00031522) popup_fep_japan_predictive_window

0x9e8a,	// (0x00031534) popup_find_window

0x9ea7,	// (0x00031551) popup_grid_graphic_window_ParamLimits

0x9ea7,	// (0x00031551) popup_grid_graphic_window

0x03ce,	// (0x00027a78) popup_large_graphic_colour_window

0x9f45,	// (0x000315ef) popup_menu_window_ParamLimits

0x9f45,	// (0x000315ef) popup_menu_window

0xa117,	// (0x000317c1) popup_note_image_window

0xa0dd,	// (0x00031787) popup_note_wait_window_ParamLimits

0xa0dd,	// (0x00031787) popup_note_wait_window

0xa12f,	// (0x000317d9) popup_note_window_ParamLimits

0xa12f,	// (0x000317d9) popup_note_window

0xa1de,	// (0x00031888) popup_query_code_window_ParamLimits

0xa1de,	// (0x00031888) popup_query_code_window

0xa218,	// (0x000318c2) popup_query_data_code_window_ParamLimits

0xa218,	// (0x000318c2) popup_query_data_code_window

0xa235,	// (0x000318df) popup_query_data_window_ParamLimits

0xa235,	// (0x000318df) popup_query_data_window

0xa2b7,	// (0x00031961) popup_query_sat_info_window_ParamLimits

0xa2b7,	// (0x00031961) popup_query_sat_info_window

0xa34e,	// (0x000319f8) popup_snote_single_graphic_window_ParamLimits

0xa34e,	// (0x000319f8) popup_snote_single_graphic_window

0xa34e,	// (0x000319f8) popup_snote_single_text_window_ParamLimits

0xa34e,	// (0x000319f8) popup_snote_single_text_window

0x06a1,	// (0x00027d4b) popup_sub_window_general

0xa4ab,	// (0x00031b55) popup_window_general_ParamLimits

0xa4ab,	// (0x00031b55) popup_window_general

0x07e6,	// (0x00027e90) power_save_pane

0x9b91,	// (0x0003123b) control_pane_g1_ParamLimits

0x9b91,	// (0x0003123b) control_pane_g1

0x9bba,	// (0x00031264) control_pane_g2_ParamLimits

0x9bba,	// (0x00031264) control_pane_g2

0xcf95,	// (0x0003463f) control_pane_g3_ParamLimits

0xcf95,	// (0x0003463f) control_pane_g3

0x0007,

0xf754,	// (0x00036dfe) control_pane_g_ParamLimits

0xf754,	// (0x00036dfe) control_pane_g

0x9c22,	// (0x000312cc) control_pane_t1_ParamLimits

0x9c22,	// (0x000312cc) control_pane_t1

0x9c88,	// (0x00031332) control_pane_t2_ParamLimits

0x9c88,	// (0x00031332) control_pane_t2

0x0002,

0xf765,	// (0x00036e0f) control_pane_t_ParamLimits

0xf765,	// (0x00036e0f) control_pane_t

0x9aea,	// (0x00031194) navi_navi_volume_pane_cp1

0x9af2,	// (0x0003119c) status_small_icon_pane

0xcf61,	// (0x0003460b) status_small_pane_g1_ParamLimits

0xcf61,	// (0x0003460b) status_small_pane_g1

0x9afa,	// (0x000311a4) status_small_pane_g2_ParamLimits

0x9afa,	// (0x000311a4) status_small_pane_g2

0x9b06,	// (0x000311b0) status_small_pane_g3_ParamLimits

0x9b06,	// (0x000311b0) status_small_pane_g3

0x9b12,	// (0x000311bc) status_small_pane_g4_ParamLimits

0x9b12,	// (0x000311bc) status_small_pane_g4

0x9b1e,	// (0x000311c8) status_small_pane_g5_ParamLimits

0x9b1e,	// (0x000311c8) status_small_pane_g5

0x9b2c,	// (0x000311d6) status_small_pane_g6_ParamLimits

0x9b2c,	// (0x000311d6) status_small_pane_g6

0x0007,

0xf743,	// (0x00036ded) status_small_pane_g_ParamLimits

0xf743,	// (0x00036ded) status_small_pane_g

0x9b5b,	// (0x00031205) status_small_pane_t1

0x9b7d,	// (0x00031227) status_small_wait_pane_ParamLimits

0x9b7d,	// (0x00031227) status_small_wait_pane

0x982f,	// (0x00030ed9) aid_levels_signal_ParamLimits

0x982f,	// (0x00030ed9) aid_levels_signal

0x9847,	// (0x00030ef1) signal_pane_g1_ParamLimits

0x9847,	// (0x00030ef1) signal_pane_g1

0x9862,	// (0x00030f0c) signal_pane_g2_ParamLimits

0x9862,	// (0x00030f0c) signal_pane_g2

0x0003,

0xf6d4,	// (0x00036d7e) signal_pane_g_ParamLimits

0xf6d4,	// (0x00036d7e) signal_pane_g

0xca6e,	// (0x00034118) context_pane_g1

0x8f6e,	// (0x00030618) title_pane_g1

0x8fa5,	// (0x0003064f) title_pane_t1

0xc1c8,	// (0x00033872) title_pane_t2

0xc1ee,	// (0x00033898) title_pane_t3

0x0002,

0xf532,	// (0x00036bdc) title_pane_t

0xa86b,	// (0x00031f15) aid_levels_battery_ParamLimits

0xa86b,	// (0x00031f15) aid_levels_battery

0xa887,	// (0x00031f31) battery_pane_g1_ParamLimits

0xa887,	// (0x00031f31) battery_pane_g1

0xa8a4,	// (0x00031f4e) battery_pane_g2_ParamLimits

0xa8a4,	// (0x00031f4e) battery_pane_g2

0x0001,

0xf777,	// (0x00036e21) battery_pane_g_ParamLimits

0xf777,	// (0x00036e21) battery_pane_g

0xaf1a,	// (0x000325c4) uni_indicator_pane_g1

0xaf30,	// (0x000325da) uni_indicator_pane_g2

0xaf46,	// (0x000325f0) uni_indicator_pane_g3

0x0005,

0xf8e8,	// (0x00036f92) uni_indicator_pane_g

0xcd17,	// (0x000343c1) navi_icon_pane_ParamLimits

0xcd17,	// (0x000343c1) navi_icon_pane

0xcc60,	// (0x0003430a) navi_midp_pane

0xcd33,	// (0x000343dd) navi_navi_pane

0xcd3d,	// (0x000343e7) navi_text_pane_ParamLimits

0xcd3d,	// (0x000343e7) navi_text_pane

0xc1a8,	// (0x00033852) status_small_wait_pane_g1

0xc43f,	// (0x00033ae9) status_small_wait_pane_g2

0x0001,

0xf8e3,	// (0x00036f8d) status_small_wait_pane_g

0xae73,	// (0x0003251d) navi_navi_icon_text_pane

0x2ff1,	// (0x0002a69b) navi_navi_pane_g1_ParamLimits

0x2ff1,	// (0x0002a69b) navi_navi_pane_g1

0x3003,	// (0x0002a6ad) navi_navi_pane_g2_ParamLimits

0x3003,	// (0x0002a6ad) navi_navi_pane_g2

0x0001,

0xf8b1,	// (0x00036f5b) navi_navi_pane_g_ParamLimits

0xf8b1,	// (0x00036f5b) navi_navi_pane_g

0x3015,	// (0x0002a6bf) navi_navi_tabs_pane

0x301e,	// (0x0002a6c8) navi_navi_text_pane

0xae73,	// (0x0003251d) navi_navi_volume_pane

0x2fc5,	// (0x0002a66f) navi_text_pane_t1

0x2fb9,	// (0x0002a663) navi_icon_pane_g1

0x2f0c,	// (0x0002a5b6) navi_navi_text_pane_t1

0xae5f,	// (0x00032509) navi_navi_volume_pane_g1

0x1716,	// (0x00028dc0) volume_small_pane

0x2e72,	// (0x0002a51c) navi_navi_icon_text_pane_g1

0xadc3,	// (0x0003246d) navi_navi_icon_text_pane_t1

0xcd33,	// (0x000343dd) navi_tabs_2_long_pane

0xcd33,	// (0x000343dd) navi_tabs_2_pane

0xcd33,	// (0x000343dd) navi_tabs_3_long_pane

0xcd33,	// (0x000343dd) navi_tabs_3_pane

0xcd33,	// (0x000343dd) navi_tabs_4_pane

0x16ee,	// (0x00028d98) tabs_2_active_pane_ParamLimits

0x16ee,	// (0x00028d98) tabs_2_active_pane

0x16fe,	// (0x00028da8) tabs_2_passive_pane_ParamLimits

0x16fe,	// (0x00028da8) tabs_2_passive_pane

0x16bc,	// (0x00028d66) tabs_3_active_pane_ParamLimits

0x16bc,	// (0x00028d66) tabs_3_active_pane

0x16cc,	// (0x00028d76) tabs_3_passive_pane_ParamLimits

0x16cc,	// (0x00028d76) tabs_3_passive_pane

0x16dd,	// (0x00028d87) tabs_3_passive_pane_cp_ParamLimits

0x16dd,	// (0x00028d87) tabs_3_passive_pane_cp

0x1678,	// (0x00028d22) tabs_4_active_pane_ParamLimits

0x1678,	// (0x00028d22) tabs_4_active_pane

0x1689,	// (0x00028d33) tabs_4_passive_pane_ParamLimits

0x1689,	// (0x00028d33) tabs_4_passive_pane

0x169a,	// (0x00028d44) tabs_4_passive_pane_cp_ParamLimits

0x169a,	// (0x00028d44) tabs_4_passive_pane_cp

0x16ab,	// (0x00028d55) tabs_4_passive_pane_cp2_ParamLimits

0x16ab,	// (0x00028d55) tabs_4_passive_pane_cp2

0x1654,	// (0x00028cfe) tabs_2_long_active_pane_ParamLimits

0x1654,	// (0x00028cfe) tabs_2_long_active_pane

0x1666,	// (0x00028d10) tabs_2_long_passive_pane_ParamLimits

0x1666,	// (0x00028d10) tabs_2_long_passive_pane

0x160f,	// (0x00028cb9) tabs_3_long_active_pane_ParamLimits

0x160f,	// (0x00028cb9) tabs_3_long_active_pane

0x1628,	// (0x00028cd2) tabs_3_long_passive_pane_ParamLimits

0x1628,	// (0x00028cd2) tabs_3_long_passive_pane

0x163b,	// (0x00028ce5) tabs_3_long_passive_pane_cp_ParamLimits

0x163b,	// (0x00028ce5) tabs_3_long_passive_pane_cp

0x15b5,	// (0x00028c5f) volume_small_pane_g1

0x15be,	// (0x00028c68) volume_small_pane_g2

0x15c7,	// (0x00028c71) volume_small_pane_g3

0x15d0,	// (0x00028c7a) volume_small_pane_g4

0x15d9,	// (0x00028c83) volume_small_pane_g5

0x15e2,	// (0x00028c8c) volume_small_pane_g6

0x15eb,	// (0x00028c95) volume_small_pane_g7

0x15f4,	// (0x00028c9e) volume_small_pane_g8

0x15fd,	// (0x00028ca7) volume_small_pane_g9

0x1606,	// (0x00028cb0) volume_small_pane_g10

0x0009,

0xf87d,	// (0x00036f27) volume_small_pane_g

0xc200,	// (0x000338aa) bg_active_tab_pane_cp2_ParamLimits

0xc200,	// (0x000338aa) bg_active_tab_pane_cp2

0x9031,	// (0x000306db) tabs_3_active_pane_g1

0x9039,	// (0x000306e3) tabs_3_active_pane_t1

0xc200,	// (0x000338aa) bg_passive_tab_pane_cp2_ParamLimits

0xc200,	// (0x000338aa) bg_passive_tab_pane_cp2

0x9031,	// (0x000306db) tabs_3_passive_pane_g1

0x9039,	// (0x000306e3) tabs_3_passive_pane_t1

0xc200,	// (0x000338aa) bg_active_tab_pane_cp3_ParamLimits

0xc200,	// (0x000338aa) bg_active_tab_pane_cp3

0x904b,	// (0x000306f5) tabs_4_active_pane_g1

0x9053,	// (0x000306fd) tabs_4_active_pane_t1

0xc200,	// (0x000338aa) bg_passive_tab_pane_cp3_ParamLimits

0xc200,	// (0x000338aa) bg_passive_tab_pane_cp3

0x904b,	// (0x000306f5) tabs_4_1_passive_pane_g1

0x9053,	// (0x000306fd) tabs_4_1_passive_pane_t1

0xc706,	// (0x00033db0) list_highlight_pane_cp2

0xb108,	// (0x000327b2) list_set_pane_ParamLimits

0xb108,	// (0x000327b2) list_set_pane

0xb1a2,	// (0x0003284c) main_pane_set_t1_ParamLimits

0xb1a2,	// (0x0003284c) main_pane_set_t1

0xb1c2,	// (0x0003286c) main_pane_set_t2_ParamLimits

0xb1c2,	// (0x0003286c) main_pane_set_t2

0xb1d6,	// (0x00032880) main_pane_set_t3_ParamLimits

0xb1d6,	// (0x00032880) main_pane_set_t3

0xb1e8,	// (0x00032892) main_pane_set_t4_ParamLimits

0xb1e8,	// (0x00032892) main_pane_set_t4

0x0003,

0xf94d,	// (0x00036ff7) main_pane_set_t_ParamLimits

0xf94d,	// (0x00036ff7) main_pane_set_t

0xb1fa,	// (0x000328a4) setting_code_pane

0xb204,	// (0x000328ae) setting_slider_graphic_pane

0xb204,	// (0x000328ae) setting_slider_pane

0xb204,	// (0x000328ae) setting_text_pane

0xb204,	// (0x000328ae) setting_volume_pane

0x9065,	// (0x0003070f) volume_set_pane

0xc20e,	// (0x000338b8) bg_set_opt_pane_cp

0x906d,	// (0x00030717) setting_slider_pane_t1

0x9086,	// (0x00030730) setting_slider_pane_t2

0x90a0,	// (0x0003074a) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00036be3) setting_slider_pane_t

0x90b8,	// (0x00030762) slider_set_pane

0xc1b2,	// (0x0003385c) bg_set_opt_pane_cp2

0xc21c,	// (0x000338c6) setting_slider_graphic_pane_g1

0x90ce,	// (0x00030778) setting_slider_graphic_pane_t1

0x90de,	// (0x00030788) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00036bea) setting_slider_graphic_pane_t

0x90ee,	// (0x00030798) slider_set_pane_cp

0xc1b2,	// (0x0003385c) input_focus_pane_cp1

0x34e9,	// (0x0002ab93) list_set_text_pane

0xc1a8,	// (0x00033852) setting_text_pane_g1

0xc1b2,	// (0x0003385c) input_focus_pane_cp2

0xc1a8,	// (0x00033852) setting_code_pane_g1

0xc225,	// (0x000338cf) setting_code_pane_t1

0xe7df,	// (0x00035e89) set_text_pane_t1_ParamLimits

0xe7df,	// (0x00035e89) set_text_pane_t1

0xc61c,	// (0x00033cc6) set_opt_bg_pane_g1

0xc624,	// (0x00033cce) set_opt_bg_pane_g2

0xb0bd,	// (0x00032767) set_opt_bg_pane_g3

0xc634,	// (0x00033cde) set_opt_bg_pane_g4

0xc63c,	// (0x00033ce6) set_opt_bg_pane_g5

0xc644,	// (0x00033cee) set_opt_bg_pane_g6

0xb0c7,	// (0x00032771) set_opt_bg_pane_g7

0xb0cf,	// (0x00032779) set_opt_bg_pane_g8

0xb0d9,	// (0x00032783) set_opt_bg_pane_g9

0x0008,

0xf93a,	// (0x00036fe4) set_opt_bg_pane_g

0xb058,	// (0x00032702) slider_set_pane_g1

0x1783,	// (0x00028e2d) slider_set_pane_g2

0x0006,

0xf92b,	// (0x00036fd5) slider_set_pane_g

0xaf7d,	// (0x00032627) volume_set_pane_g1

0xaf85,	// (0x0003262f) volume_set_pane_g2

0xaf8d,	// (0x00032637) volume_set_pane_g3

0xaf95,	// (0x0003263f) volume_set_pane_g4

0xaf9d,	// (0x00032647) volume_set_pane_g5

0xafa5,	// (0x0003264f) volume_set_pane_g6

0xafad,	// (0x00032657) volume_set_pane_g7

0xafb5,	// (0x0003265f) volume_set_pane_g8

0xafbd,	// (0x00032667) volume_set_pane_g9

0xafc5,	// (0x0003266f) volume_set_pane_g10

0x0009,

0xf903,	// (0x00036fad) volume_set_pane_g

0x90f6,	// (0x000307a0) indicator_pane_ParamLimits

0x90f6,	// (0x000307a0) indicator_pane

0x911e,	// (0x000307c8) main_idle_pane_g2_ParamLimits

0x911e,	// (0x000307c8) main_idle_pane_g2

0x9156,	// (0x00030800) main_pane_idle_g1_ParamLimits

0x9156,	// (0x00030800) main_pane_idle_g1

0xc233,	// (0x000338dd) popup_clock_digital_analogue_window_ParamLimits

0xc233,	// (0x000338dd) popup_clock_digital_analogue_window

0x917d,	// (0x00030827) soft_indicator_pane_ParamLimits

0x917d,	// (0x00030827) soft_indicator_pane

0x91a1,	// (0x0003084b) wallpaper_pane_ParamLimits

0x91a1,	// (0x0003084b) wallpaper_pane

0xc1a8,	// (0x00033852) wallpaper_pane_g1

0x91b3,	// (0x0003085d) indicator_pane_g1_ParamLimits

0x91b3,	// (0x0003085d) indicator_pane_g1

0x38fc,	// (0x0002afa6) navi_navi_icon_text_pane_srt_g1

0xc261,	// (0x0003390b) soft_indicator_pane_t1

0xc27b,	// (0x00033925) aid_ps_area_pane

0x91c9,	// (0x00030873) aid_ps_clock_pane

0xc28c,	// (0x00033936) aid_ps_indicator_pane

0xc298,	// (0x00033942) indicator_ps_pane_ParamLimits

0xc298,	// (0x00033942) indicator_ps_pane

0xc2a7,	// (0x00033951) power_save_pane_g1_ParamLimits

0xc2a7,	// (0x00033951) power_save_pane_g1

0xc2b3,	// (0x0003395d) power_save_pane_g2_ParamLimits

0xc2b3,	// (0x0003395d) power_save_pane_g2

0xe650,	// (0x00035cfa) aid_navinavi_width_pane

0xc27b,	// (0x00033925) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00036bef) power_save_pane_g_ParamLimits

0xf545,	// (0x00036bef) power_save_pane_g

0xc2c1,	// (0x0003396b) power_save_pane_t1_ParamLimits

0xc2c1,	// (0x0003396b) power_save_pane_t1

0x91c9,	// (0x00030873) aid_ps_clock_pane_ParamLimits

0xc28c,	// (0x00033936) aid_ps_indicator_pane_ParamLimits

0xc2d3,	// (0x0003397d) power_save_pane_t4_ParamLimits

0xc2d3,	// (0x0003397d) power_save_pane_t4

0x0001,

0xf54a,	// (0x00036bf4) power_save_pane_t_ParamLimits

0xf54a,	// (0x00036bf4) power_save_pane_t

0xc2fd,	// (0x000339a7) power_save_t3_ParamLimits

0xc2fd,	// (0x000339a7) power_save_t3

0xc2e8,	// (0x00033992) power_save_t2_ParamLimits

0xc2e8,	// (0x00033992) power_save_t2

0xc312,	// (0x000339bc) indicator_ps_pane_g1

0x91d7,	// (0x00030881) ai_gene_pane_ParamLimits

0x91d7,	// (0x00030881) ai_gene_pane

0x91ee,	// (0x00030898) ai_links_pane_ParamLimits

0x91ee,	// (0x00030898) ai_links_pane

0x9206,	// (0x000308b0) indicator_pane_cp1_ParamLimits

0x9206,	// (0x000308b0) indicator_pane_cp1

0x9215,	// (0x000308bf) main_pane_idle_g1_cp_ParamLimits

0x9215,	// (0x000308bf) main_pane_idle_g1_cp

0x922d,	// (0x000308d7) popup_ai_links_title_window

0x9236,	// (0x000308e0) soft_indicator_pane_cp1_ParamLimits

0x9236,	// (0x000308e0) soft_indicator_pane_cp1

0x32b0,	// (0x0002a95a) ai_links_pane_g1

0x32b9,	// (0x0002a963) grid_ai_links_pane

0xaf11,	// (0x000325bb) ai_gene_pane_1

0x329e,	// (0x0002a948) ai_gene_pane_2

0x32a7,	// (0x0002a951) list_highlight_pane_cp4

0xaeed,	// (0x00032597) cell_ai_link_pane_ParamLimits

0xaeed,	// (0x00032597) cell_ai_link_pane

0x326f,	// (0x0002a919) cell_ai_link_pane_g1

0xc43f,	// (0x00033ae9) cell_ai_link_pane_g2

0x0001,

0xf8de,	// (0x00036f88) cell_ai_link_pane_g

0xc1b2,	// (0x0003385c) grid_highlight_cp2

0xc1b2,	// (0x0003385c) bg_popup_sub_pane_cp1

0xc329,	// (0x000339d3) popup_ai_links_title_window_t1

0x31bf,	// (0x0002a869) ai_gene_pane_1_g1_ParamLimits

0x31bf,	// (0x0002a869) ai_gene_pane_1_g1

0x31cb,	// (0x0002a875) ai_gene_pane_1_g2_ParamLimits

0x31cb,	// (0x0002a875) ai_gene_pane_1_g2

0x0001,

0xf8d4,	// (0x00036f7e) ai_gene_pane_1_g_ParamLimits

0xf8d4,	// (0x00036f7e) ai_gene_pane_1_g

0x31d8,	// (0x0002a882) ai_gene_pane_1_t1_ParamLimits

0x31d8,	// (0x0002a882) ai_gene_pane_1_t1

0x320c,	// (0x0002a8b6) grid_ai_soft_ind_pane

0x31aa,	// (0x0002a854) ai_gene_pane_2_t1_ParamLimits

0x31aa,	// (0x0002a854) ai_gene_pane_2_t1

0x924a,	// (0x000308f4) main_pane_empty_t1_ParamLimits

0x924a,	// (0x000308f4) main_pane_empty_t1

0x9262,	// (0x0003090c) main_pane_empty_t2_ParamLimits

0x9262,	// (0x0003090c) main_pane_empty_t2

0x9277,	// (0x00030921) main_pane_empty_t3_ParamLimits

0x9277,	// (0x00030921) main_pane_empty_t3

0x9289,	// (0x00030933) main_pane_empty_t4_ParamLimits

0x9289,	// (0x00030933) main_pane_empty_t4

0x929b,	// (0x00030945) main_pane_empty_t5_ParamLimits

0x929b,	// (0x00030945) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00036bf9) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00036bf9) main_pane_empty_t

0xc6a1,	// (0x00033d4b) bg_popup_window_pane_ParamLimits

0xc6a1,	// (0x00033d4b) bg_popup_window_pane

0xae67,	// (0x00032511) find_popup_pane_cp2_ParamLimits

0xae67,	// (0x00032511) find_popup_pane_cp2

0x2f26,	// (0x0002a5d0) heading_pane_ParamLimits

0x2f26,	// (0x0002a5d0) heading_pane

0xc1b2,	// (0x0003385c) bg_popup_sub_pane

0xade0,	// (0x0003248a) bg_popup_window_pane_g1_ParamLimits

0xade0,	// (0x0003248a) bg_popup_window_pane_g1

0xadef,	// (0x00032499) bg_popup_window_pane_g2_ParamLimits

0xadef,	// (0x00032499) bg_popup_window_pane_g2

0xadfb,	// (0x000324a5) bg_popup_window_pane_g3_ParamLimits

0xadfb,	// (0x000324a5) bg_popup_window_pane_g3

0xae07,	// (0x000324b1) bg_popup_window_pane_g4_ParamLimits

0xae07,	// (0x000324b1) bg_popup_window_pane_g4

0xae16,	// (0x000324c0) bg_popup_window_pane_g5_ParamLimits

0xae16,	// (0x000324c0) bg_popup_window_pane_g5

0xae26,	// (0x000324d0) bg_popup_window_pane_g6_ParamLimits

0xae26,	// (0x000324d0) bg_popup_window_pane_g6

0xae32,	// (0x000324dc) bg_popup_window_pane_g7_ParamLimits

0xae32,	// (0x000324dc) bg_popup_window_pane_g7

0xae41,	// (0x000324eb) bg_popup_window_pane_g8_ParamLimits

0xae41,	// (0x000324eb) bg_popup_window_pane_g8

0xae50,	// (0x000324fa) bg_popup_window_pane_g9_ParamLimits

0xae50,	// (0x000324fa) bg_popup_window_pane_g9

0x2f00,	// (0x0002a5aa) bg_popup_window_pane_g10_ParamLimits

0x2f00,	// (0x0002a5aa) bg_popup_window_pane_g10

0x0009,

0xf89c,	// (0x00036f46) bg_popup_window_pane_g_ParamLimits

0xf89c,	// (0x00036f46) bg_popup_window_pane_g

0x2e29,	// (0x0002a4d3) bg_popup_heading_pane_ParamLimits

0x2e29,	// (0x0002a4d3) bg_popup_heading_pane

0x180b,	// (0x00028eb5) tabs_4_passive_pane_cp_srt_ParamLimits

0x180b,	// (0x00028eb5) tabs_4_passive_pane_cp_srt

0x181d,	// (0x00028ec7) tabs_4_passive_pane_srt_ParamLimits

0x2e3d,	// (0x0002a4e7) heading_pane_g2

0x181d,	// (0x00028ec7) tabs_4_passive_pane_srt

0x0e0d,	// (0x000284b7) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0e0d,	// (0x000284b7) bg_passive_tab_pane_cp3_srt

0x2e45,	// (0x0002a4ef) heading_pane_t1_ParamLimits

0x2e45,	// (0x0002a4ef) heading_pane_t1

0x2e5c,	// (0x0002a506) heading_pane_t2_ParamLimits

0x2e5c,	// (0x0002a506) heading_pane_t2

0x0001,

0xf897,	// (0x00036f41) heading_pane_t_ParamLimits

0xf897,	// (0x00036f41) heading_pane_t

0x2966,	// (0x0002a010) bg_popup_heading_pane_g1

0x2a15,	// (0x0002a0bf) bg_popup_heading_pane_g2

0x2a1f,	// (0x0002a0c9) bg_popup_heading_pane_g3

0x2a29,	// (0x0002a0d3) bg_popup_heading_pane_g4

0x2a33,	// (0x0002a0dd) bg_popup_heading_pane_g5

0x2a3d,	// (0x0002a0e7) bg_popup_heading_pane_g6

0x2a45,	// (0x0002a0ef) bg_popup_heading_pane_g7

0x2a4d,	// (0x0002a0f7) bg_popup_heading_pane_g8

0x2a57,	// (0x0002a101) bg_popup_heading_pane_g9

0x0008,

0xf853,	// (0x00036efd) bg_popup_heading_pane_g

0x0d09,	// (0x000283b3) bg_popup_sub_pane_g1

0x0d11,	// (0x000283bb) bg_popup_sub_pane_g2

0x0d19,	// (0x000283c3) bg_popup_sub_pane_g3

0x0d21,	// (0x000283cb) bg_popup_sub_pane_g4

0x0d29,	// (0x000283d3) bg_popup_sub_pane_g5

0x0d31,	// (0x000283db) bg_popup_sub_pane_g6

0x0d39,	// (0x000283e3) bg_popup_sub_pane_g7

0x0d41,	// (0x000283eb) bg_popup_sub_pane_g8

0x0d49,	// (0x000283f3) bg_popup_sub_pane_g9

0x0008,

0xf82d,	// (0x00036ed7) bg_popup_sub_pane_g

0xc200,	// (0x000338aa) bg_popup_window_pane_cp5_ParamLimits

0xc200,	// (0x000338aa) bg_popup_window_pane_cp5

0xc346,	// (0x000339f0) popup_note_window_g1_ParamLimits

0xc346,	// (0x000339f0) popup_note_window_g1

0xc352,	// (0x000339fc) popup_note_window_t1_ParamLimits

0xc352,	// (0x000339fc) popup_note_window_t1

0xc368,	// (0x00033a12) popup_note_window_t2_ParamLimits

0xc368,	// (0x00033a12) popup_note_window_t2

0xc37e,	// (0x00033a28) popup_note_window_t3_ParamLimits

0xc37e,	// (0x00033a28) popup_note_window_t3

0xc394,	// (0x00033a3e) popup_note_window_t4_ParamLimits

0xc394,	// (0x00033a3e) popup_note_window_t4

0xc3bc,	// (0x00033a66) popup_note_window_t5_ParamLimits

0xc3bc,	// (0x00033a66) popup_note_window_t5

0x0004,

0xf55a,	// (0x00036c04) popup_note_window_t_ParamLimits

0xf55a,	// (0x00036c04) popup_note_window_t

0xc3e0,	// (0x00033a8a) bg_popup_window_pane_cp6_ParamLimits

0xc3e0,	// (0x00033a8a) bg_popup_window_pane_cp6

0x28e2,	// (0x00029f8c) popup_note_image_window_g1_ParamLimits

0x28e2,	// (0x00029f8c) popup_note_image_window_g1

0xac85,	// (0x0003232f) popup_note_image_window_g2_ParamLimits

0xac85,	// (0x0003232f) popup_note_image_window_g2

0x0001,

0xf821,	// (0x00036ecb) popup_note_image_window_g_ParamLimits

0xf821,	// (0x00036ecb) popup_note_image_window_g

0x2907,	// (0x00029fb1) popup_note_image_window_t1_ParamLimits

0x2907,	// (0x00029fb1) popup_note_image_window_t1

0x2920,	// (0x00029fca) popup_note_image_window_t2_ParamLimits

0x2920,	// (0x00029fca) popup_note_image_window_t2

0x2939,	// (0x00029fe3) popup_note_image_window_t3_ParamLimits

0x2939,	// (0x00029fe3) popup_note_image_window_t3

0x0002,

0xf826,	// (0x00036ed0) popup_note_image_window_t_ParamLimits

0xf826,	// (0x00036ed0) popup_note_image_window_t

0x148d,	// (0x00028b37) bg_popup_window_pane_cp7_ParamLimits

0x148d,	// (0x00028b37) bg_popup_window_pane_cp7

0x14bd,	// (0x00028b67) popup_note_wait_window_g1_ParamLimits

0x14bd,	// (0x00028b67) popup_note_wait_window_g1

0x14c9,	// (0x00028b73) popup_note_wait_window_g2_ParamLimits

0x14c9,	// (0x00028b73) popup_note_wait_window_g2

0x0002,

0xf80f,	// (0x00036eb9) popup_note_wait_window_g_ParamLimits

0xf80f,	// (0x00036eb9) popup_note_wait_window_g

0x14e1,	// (0x00028b8b) popup_note_wait_window_t1_ParamLimits

0x14e1,	// (0x00028b8b) popup_note_wait_window_t1

0xac26,	// (0x000322d0) popup_note_wait_window_t2_ParamLimits

0xac26,	// (0x000322d0) popup_note_wait_window_t2

0xac43,	// (0x000322ed) popup_note_wait_window_t3_ParamLimits

0xac43,	// (0x000322ed) popup_note_wait_window_t3

0xac56,	// (0x00032300) popup_note_wait_window_t4_ParamLimits

0xac56,	// (0x00032300) popup_note_wait_window_t4

0x0004,

0xf816,	// (0x00036ec0) popup_note_wait_window_t_ParamLimits

0xf816,	// (0x00036ec0) popup_note_wait_window_t

0x155d,	// (0x00028c07) wait_bar_pane_ParamLimits

0x155d,	// (0x00028c07) wait_bar_pane

0xc1b2,	// (0x0003385c) wait_anim_pane

0xc1b2,	// (0x0003385c) wait_border_pane

0xc1a8,	// (0x00033852) wait_anim_pane_g1

0xc1a8,	// (0x00033852) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x00036d79) wait_anim_pane_g

0x1439,	// (0x00028ae3) wait_border_pane_g1

0x1444,	// (0x00028aee) wait_border_pane_g2

0x144d,	// (0x00028af7) wait_border_pane_g3

0x0002,

0xf808,	// (0x00036eb2) wait_border_pane_g

0x12a4,	// (0x0002894e) bg_popup_window_pane_cp16_ParamLimits

0x12a4,	// (0x0002894e) bg_popup_window_pane_cp16

0xabd6,	// (0x00032280) indicator_popup_pane_cp4_ParamLimits

0xabd6,	// (0x00032280) indicator_popup_pane_cp4

0x13b8,	// (0x00028a62) popup_query_data_window_t1_ParamLimits

0x13b8,	// (0x00028a62) popup_query_data_window_t1

0x13ca,	// (0x00028a74) popup_query_data_window_t2_ParamLimits

0x13ca,	// (0x00028a74) popup_query_data_window_t2

0x13e3,	// (0x00028a8d) popup_query_data_window_t3_ParamLimits

0x13e3,	// (0x00028a8d) popup_query_data_window_t3

0x0002,

0xf801,	// (0x00036eab) popup_query_data_window_t_ParamLimits

0xf801,	// (0x00036eab) popup_query_data_window_t

0xabea,	// (0x00032294) query_popup_data_pane_ParamLimits

0xabea,	// (0x00032294) query_popup_data_pane

0xabfe,	// (0x000322a8) query_popup_data_pane_cp1_ParamLimits

0xabfe,	// (0x000322a8) query_popup_data_pane_cp1

0x12a4,	// (0x0002894e) bg_popup_window_pane_cp10_ParamLimits

0x12a4,	// (0x0002894e) bg_popup_window_pane_cp10

0xab51,	// (0x000321fb) indicator_popup_pane_ParamLimits

0xab51,	// (0x000321fb) indicator_popup_pane

0xab73,	// (0x0003221d) popup_query_code_window_t1_ParamLimits

0xab73,	// (0x0003221d) popup_query_code_window_t1

0xab8d,	// (0x00032237) popup_query_code_window_t2_ParamLimits

0xab8d,	// (0x00032237) popup_query_code_window_t2

0x135b,	// (0x00028a05) popup_query_code_window_t3_ParamLimits

0x135b,	// (0x00028a05) popup_query_code_window_t3

0x0002,

0xf7fa,	// (0x00036ea4) popup_query_code_window_t_ParamLimits

0xf7fa,	// (0x00036ea4) popup_query_code_window_t

0x138a,	// (0x00028a34) query_popup_pane_ParamLimits

0x138a,	// (0x00028a34) query_popup_pane

0xc3e0,	// (0x00033a8a) bg_popup_window_pane_cp15_ParamLimits

0xc3e0,	// (0x00033a8a) bg_popup_window_pane_cp15

0x92d3,	// (0x0003097d) indicator_popup_pane_cp1_ParamLimits

0x92d3,	// (0x0003097d) indicator_popup_pane_cp1

0x92e6,	// (0x00030990) indicator_popup_pane_cp2_ParamLimits

0x92e6,	// (0x00030990) indicator_popup_pane_cp2

0x92f9,	// (0x000309a3) popup_query_data_code_window_g1_ParamLimits

0x92f9,	// (0x000309a3) popup_query_data_code_window_g1

0xc3fe,	// (0x00033aa8) popup_query_data_code_window_t1_ParamLimits

0xc3fe,	// (0x00033aa8) popup_query_data_code_window_t1

0xc410,	// (0x00033aba) popup_query_data_code_window_t2_ParamLimits

0xc410,	// (0x00033aba) popup_query_data_code_window_t2

0x930c,	// (0x000309b6) popup_query_data_code_window_t3_ParamLimits

0x930c,	// (0x000309b6) popup_query_data_code_window_t3

0x9322,	// (0x000309cc) popup_query_data_code_window_t4_ParamLimits

0x9322,	// (0x000309cc) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00036c0f) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00036c0f) popup_query_data_code_window_t

0xccd5,	// (0x0003437f) list_single_midp_graphic_pane_g3

0x933a,	// (0x000309e4) query_popup_data_pane_cp2_ParamLimits

0x934d,	// (0x000309f7) query_popup_pane_cp2_ParamLimits

0x934d,	// (0x000309f7) query_popup_pane_cp2

0xc1b2,	// (0x0003385c) bg_popup_window_pane_cp11

0x1288,	// (0x00028932) heading_pane_cp5

0x1290,	// (0x0002893a) listscroll_popup_info_pane

0xc1b2,	// (0x0003385c) input_focus_pane_cp3

0xc422,	// (0x00033acc) query_popup_pane_t1

0xc430,	// (0x00033ada) list_popup_info_pane_ParamLimits

0xc430,	// (0x00033ada) list_popup_info_pane

0xc43f,	// (0x00033ae9) listscroll_popup_info_pane_g1

0xc447,	// (0x00033af1) scroll_pane_cp7

0x9360,	// (0x00030a0a) popup_info_list_pane_t1_ParamLimits

0x9360,	// (0x00030a0a) popup_info_list_pane_t1

0x937a,	// (0x00030a24) popup_info_list_pane_t2_ParamLimits

0x937a,	// (0x00030a24) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00036c18) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00036c18) popup_info_list_pane_t

0xc1b2,	// (0x0003385c) bg_popup_window_pane_cp12

0xb40a,	// (0x00032ab4) find_popup_pane

0xc20e,	// (0x000338b8) bg_popup_window_pane_cp3

0xc451,	// (0x00033afb) heading_pane_cp3

0xc460,	// (0x00033b0a) listscroll_popup_graphic_pane

0xc1b2,	// (0x0003385c) bg_popup_window_pane_cp4

0x93e4,	// (0x00030a8e) heading_pane_cp4

0xc470,	// (0x00033b1a) listscroll_popup_colour_pane

0x93ee,	// (0x00030a98) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x93ee,	// (0x00030a98) cell_large_graphic_colour_none_popup_pane

0x9402,	// (0x00030aac) grid_large_graphic_colour_popup_pane_ParamLimits

0x9402,	// (0x00030aac) grid_large_graphic_colour_popup_pane

0x9426,	// (0x00030ad0) listscroll_popup_colour_pane_g1_ParamLimits

0x9426,	// (0x00030ad0) listscroll_popup_colour_pane_g1

0x943d,	// (0x00030ae7) listscroll_popup_colour_pane_g2_ParamLimits

0x943d,	// (0x00030ae7) listscroll_popup_colour_pane_g2

0x9454,	// (0x00030afe) listscroll_popup_colour_pane_g3_ParamLimits

0x9454,	// (0x00030afe) listscroll_popup_colour_pane_g3

0x9464,	// (0x00030b0e) listscroll_popup_colour_pane_g4_ParamLimits

0x9464,	// (0x00030b0e) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00036c1d) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00036c1d) listscroll_popup_colour_pane_g

0xc478,	// (0x00033b22) scroll_pane_cp6_ParamLimits

0xc478,	// (0x00033b22) scroll_pane_cp6

0x9474,	// (0x00030b1e) cell_large_graphic_colour_popup_pane_ParamLimits

0x9474,	// (0x00030b1e) cell_large_graphic_colour_popup_pane

0x9493,	// (0x00030b3d) cell_large_graphic_colour_none_popup_pane_t1

0xc1b2,	// (0x0003385c) grid_highlight_pane_cp5

0xc48a,	// (0x00033b34) cell_large_graphic_colour_popup_pane_g1

0xc492,	// (0x00033b3c) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00036c26) cell_large_graphic_colour_popup_pane_g

0xc49a,	// (0x00033b44) cell_large_graphic_colour_popup_pane_g2_copy1

0xc4a3,	// (0x00033b4d) grid_highlight_pane_cp4

0xc4ab,	// (0x00033b55) bg_popup_window_pane_cp8_ParamLimits

0xc4ab,	// (0x00033b55) bg_popup_window_pane_cp8

0x94a2,	// (0x00030b4c) popup_snote_single_text_window_g1_ParamLimits

0x94a2,	// (0x00030b4c) popup_snote_single_text_window_g1

0x94b4,	// (0x00030b5e) popup_snote_single_text_window_t1_ParamLimits

0x94b4,	// (0x00030b5e) popup_snote_single_text_window_t1

0x94c7,	// (0x00030b71) popup_snote_single_text_window_t2_ParamLimits

0x94c7,	// (0x00030b71) popup_snote_single_text_window_t2

0x94da,	// (0x00030b84) popup_snote_single_text_window_t3_ParamLimits

0x94da,	// (0x00030b84) popup_snote_single_text_window_t3

0x9513,	// (0x00030bbd) popup_snote_single_text_window_t4_ParamLimits

0x9513,	// (0x00030bbd) popup_snote_single_text_window_t4

0x9547,	// (0x00030bf1) popup_snote_single_text_window_t5_ParamLimits

0x9547,	// (0x00030bf1) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00036c2b) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00036c2b) popup_snote_single_text_window_t

0xc4c6,	// (0x00033b70) bg_popup_window_pane_cp9_ParamLimits

0xc4c6,	// (0x00033b70) bg_popup_window_pane_cp9

0x94a2,	// (0x00030b4c) popup_snote_single_graphic_window_g1_ParamLimits

0x94a2,	// (0x00030b4c) popup_snote_single_graphic_window_g1

0xc4d4,	// (0x00033b7e) popup_snote_single_graphic_window_g2_ParamLimits

0xc4d4,	// (0x00033b7e) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00036c36) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00036c36) popup_snote_single_graphic_window_g

0xc4e0,	// (0x00033b8a) popup_snote_single_graphic_window_t1_ParamLimits

0xc4e0,	// (0x00033b8a) popup_snote_single_graphic_window_t1

0xc4f3,	// (0x00033b9d) popup_snote_single_graphic_window_t2_ParamLimits

0xc4f3,	// (0x00033b9d) popup_snote_single_graphic_window_t2

0x94da,	// (0x00030b84) popup_snote_single_graphic_window_t3_ParamLimits

0x94da,	// (0x00030b84) popup_snote_single_graphic_window_t3

0x9513,	// (0x00030bbd) popup_snote_single_graphic_window_t4_ParamLimits

0x9513,	// (0x00030bbd) popup_snote_single_graphic_window_t4

0x9576,	// (0x00030c20) popup_snote_single_graphic_window_t5_ParamLimits

0x9576,	// (0x00030c20) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00036c3b) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00036c3b) popup_snote_single_graphic_window_t

0x3858,	// (0x0002af02) grid_graphic_popup_pane_ParamLimits

0x3858,	// (0x0002af02) grid_graphic_popup_pane

0x3882,	// (0x0002af2c) listscroll_popup_graphic_pane_g1_ParamLimits

0x3882,	// (0x0002af2c) listscroll_popup_graphic_pane_g1

0xb355,	// (0x000329ff) listscroll_popup_graphic_pane_g2_ParamLimits

0xb355,	// (0x000329ff) listscroll_popup_graphic_pane_g2

0x0001,

0xf977,	// (0x00037021) listscroll_popup_graphic_pane_g_ParamLimits

0xf977,	// (0x00037021) listscroll_popup_graphic_pane_g

0x38aa,	// (0x0002af54) scroll_pane_cp5

0xb314,	// (0x000329be) cell_graphic_popup_pane_ParamLimits

0xb314,	// (0x000329be) cell_graphic_popup_pane

0x37cf,	// (0x0002ae79) cell_graphic_popup_pane_g1

0x37d7,	// (0x0002ae81) cell_graphic_popup_pane_g2

0xc49a,	// (0x00033b44) cell_graphic_popup_pane_g3

0x0002,

0xf970,	// (0x0003701a) cell_graphic_popup_pane_g

0xb306,	// (0x000329b0) cell_graphic_popup_pane_t2

0xc4a3,	// (0x00033b4d) grid_highlight_pane_cp3

0xc518,	// (0x00033bc2) list_gen_pane_ParamLimits

0xc518,	// (0x00033bc2) list_gen_pane

0xc540,	// (0x00033bea) scroll_pane

0xb270,	// (0x0003291a) bg_list_pane_g1_ParamLimits

0xb270,	// (0x0003291a) bg_list_pane_g1

0xb28b,	// (0x00032935) bg_list_pane_g2_ParamLimits

0xb28b,	// (0x00032935) bg_list_pane_g2

0xb29e,	// (0x00032948) bg_list_pane_g3_ParamLimits

0xb29e,	// (0x00032948) bg_list_pane_g3

0xb2b0,	// (0x0003295a) bg_list_pane_g4_ParamLimits

0xb2b0,	// (0x0003295a) bg_list_pane_g4

0xb2c2,	// (0x0003296c) bg_list_pane_g5_ParamLimits

0xb2c2,	// (0x0003296c) bg_list_pane_g5

0x0004,

0xf965,	// (0x0003700f) bg_list_pane_g_ParamLimits

0xf965,	// (0x0003700f) bg_list_pane_g

0xb237,	// (0x000328e1) list_double2_graphic_large_graphic_pane_ParamLimits

0xb237,	// (0x000328e1) list_double2_graphic_large_graphic_pane

0xb237,	// (0x000328e1) list_double2_graphic_pane_ParamLimits

0xb237,	// (0x000328e1) list_double2_graphic_pane

0xb237,	// (0x000328e1) list_double2_large_graphic_pane_ParamLimits

0xb237,	// (0x000328e1) list_double2_large_graphic_pane

0xb237,	// (0x000328e1) list_double2_pane_ParamLimits

0xb237,	// (0x000328e1) list_double2_pane

0xb237,	// (0x000328e1) list_double_graphic_heading_pane_ParamLimits

0xb237,	// (0x000328e1) list_double_graphic_heading_pane

0xb237,	// (0x000328e1) list_double_graphic_pane_ParamLimits

0xb237,	// (0x000328e1) list_double_graphic_pane

0xb237,	// (0x000328e1) list_double_heading_pane_ParamLimits

0xb237,	// (0x000328e1) list_double_heading_pane

0xb237,	// (0x000328e1) list_double_large_graphic_pane_ParamLimits

0xb237,	// (0x000328e1) list_double_large_graphic_pane

0xb237,	// (0x000328e1) list_double_number_pane_ParamLimits

0xb237,	// (0x000328e1) list_double_number_pane

0xb237,	// (0x000328e1) list_double_pane_ParamLimits

0xb237,	// (0x000328e1) list_double_pane

0xb237,	// (0x000328e1) list_double_time_pane_ParamLimits

0xb237,	// (0x000328e1) list_double_time_pane

0xb237,	// (0x000328e1) list_setting_number_pane_ParamLimits

0xb237,	// (0x000328e1) list_setting_number_pane

0xb237,	// (0x000328e1) list_setting_pane_ParamLimits

0xb237,	// (0x000328e1) list_setting_pane

0x9604,	// (0x00030cae) list_single_2graphic_pane_ParamLimits

0x9604,	// (0x00030cae) list_single_2graphic_pane

0x9604,	// (0x00030cae) list_single_graphic_heading_pane_ParamLimits

0x9604,	// (0x00030cae) list_single_graphic_heading_pane

0x9604,	// (0x00030cae) list_single_graphic_pane_ParamLimits

0x9604,	// (0x00030cae) list_single_graphic_pane

0x9604,	// (0x00030cae) list_single_heading_pane_ParamLimits

0x9604,	// (0x00030cae) list_single_heading_pane

0x9604,	// (0x00030cae) list_single_large_graphic_pane_ParamLimits

0x9604,	// (0x00030cae) list_single_large_graphic_pane

0x9604,	// (0x00030cae) list_single_number_heading_pane_ParamLimits

0x9604,	// (0x00030cae) list_single_number_heading_pane

0x9604,	// (0x00030cae) list_single_number_pane_ParamLimits

0x9604,	// (0x00030cae) list_single_number_pane

0x9604,	// (0x00030cae) list_single_pane_ParamLimits

0x9604,	// (0x00030cae) list_single_pane

0xc1b2,	// (0x0003385c) list_highlight_pane_cp1

0xe806,	// (0x00035eb0) list_single_pane_g1_ParamLimits

0xe806,	// (0x00035eb0) list_single_pane_g1

0xe812,	// (0x00035ebc) list_single_pane_g2_ParamLimits

0xe812,	// (0x00035ebc) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00036c4d) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00036c4d) list_single_pane_g

0x8b29,	// (0x000301d3) list_single_pane_t1_ParamLimits

0x8b29,	// (0x000301d3) list_single_pane_t1

0xe806,	// (0x00035eb0) list_single_number_pane_g1_ParamLimits

0xe806,	// (0x00035eb0) list_single_number_pane_g1

0xe812,	// (0x00035ebc) list_single_number_pane_g2_ParamLimits

0xe812,	// (0x00035ebc) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00036c4d) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00036c4d) list_single_number_pane_g

0xe81e,	// (0x00035ec8) list_single_number_pane_t1_ParamLimits

0xe81e,	// (0x00035ec8) list_single_number_pane_t1

0x8aeb,	// (0x00030195) list_single_number_pane_t2_ParamLimits

0x8aeb,	// (0x00030195) list_single_number_pane_t2

0x0001,

0xf926,	// (0x00036fd0) list_single_number_pane_t_ParamLimits

0xf926,	// (0x00036fd0) list_single_number_pane_t

0xe7fa,	// (0x00035ea4) list_single_graphic_pane_g1_ParamLimits

0xe7fa,	// (0x00035ea4) list_single_graphic_pane_g1

0xe806,	// (0x00035eb0) list_single_graphic_pane_g2_ParamLimits

0xe806,	// (0x00035eb0) list_single_graphic_pane_g2

0xe812,	// (0x00035ebc) list_single_graphic_pane_g3_ParamLimits

0xe812,	// (0x00035ebc) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00036c46) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00036c46) list_single_graphic_pane_g

0xe81e,	// (0x00035ec8) list_single_graphic_pane_t1_ParamLimits

0xe81e,	// (0x00035ec8) list_single_graphic_pane_t1

0xe806,	// (0x00035eb0) list_single_heading_pane_g1_ParamLimits

0xe806,	// (0x00035eb0) list_single_heading_pane_g1

0xe812,	// (0x00035ebc) list_single_heading_pane_g2_ParamLimits

0xe812,	// (0x00035ebc) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00036c4d) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00036c4d) list_single_heading_pane_g

0xe834,	// (0x00035ede) list_single_heading_pane_t1_ParamLimits

0xe834,	// (0x00035ede) list_single_heading_pane_t1

0xe84a,	// (0x00035ef4) list_single_heading_pane_t2_ParamLimits

0xe84a,	// (0x00035ef4) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00036c52) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00036c52) list_single_heading_pane_t

0xe806,	// (0x00035eb0) list_single_number_heading_pane_g1_ParamLimits

0xe806,	// (0x00035eb0) list_single_number_heading_pane_g1

0xe812,	// (0x00035ebc) list_single_number_heading_pane_g2_ParamLimits

0xe812,	// (0x00035ebc) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00036c4d) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00036c4d) list_single_number_heading_pane_g

0xe834,	// (0x00035ede) list_single_number_heading_pane_t1_ParamLimits

0xe834,	// (0x00035ede) list_single_number_heading_pane_t1

0xe85c,	// (0x00035f06) list_single_number_heading_pane_t2_ParamLimits

0xe85c,	// (0x00035f06) list_single_number_heading_pane_t2

0xe86e,	// (0x00035f18) list_single_number_heading_pane_t3_ParamLimits

0xe86e,	// (0x00035f18) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00036c57) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00036c57) list_single_number_heading_pane_t

0xe880,	// (0x00035f2a) list_single_graphic_heading_pane_g1_ParamLimits

0xe880,	// (0x00035f2a) list_single_graphic_heading_pane_g1

0x8624,	// (0x0002fcce) list_single_graphic_heading_pane_g4_ParamLimits

0x8624,	// (0x0002fcce) list_single_graphic_heading_pane_g4

0xe812,	// (0x00035ebc) list_single_graphic_heading_pane_g5_ParamLimits

0xe812,	// (0x00035ebc) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00036c5e) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00036c5e) list_single_graphic_heading_pane_g

0xe834,	// (0x00035ede) list_single_graphic_heading_pane_t1_ParamLimits

0xe834,	// (0x00035ede) list_single_graphic_heading_pane_t1

0x8635,	// (0x0002fcdf) list_single_graphic_heading_pane_t2_ParamLimits

0x8635,	// (0x0002fcdf) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00036c65) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00036c65) list_single_graphic_heading_pane_t

0xe88c,	// (0x00035f36) list_single_large_graphic_pane_g1_ParamLimits

0xe88c,	// (0x00035f36) list_single_large_graphic_pane_g1

0xe806,	// (0x00035eb0) list_single_large_graphic_pane_g2_ParamLimits

0xe806,	// (0x00035eb0) list_single_large_graphic_pane_g2

0xe812,	// (0x00035ebc) list_single_large_graphic_pane_g3_ParamLimits

0xe812,	// (0x00035ebc) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00036c6a) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00036c6a) list_single_large_graphic_pane_g

0x1444,	// (0x00028aee) wait_border_pane_g2_copy1

0x8647,	// (0x0002fcf1) list_single_large_graphic_pane_g4_cp2

0xe81e,	// (0x00035ec8) list_single_large_graphic_pane_t1_ParamLimits

0xe81e,	// (0x00035ec8) list_single_large_graphic_pane_t1

0xe898,	// (0x00035f42) list_double_pane_g1_ParamLimits

0xe898,	// (0x00035f42) list_double_pane_g1

0xe8a4,	// (0x00035f4e) list_double_pane_g2_ParamLimits

0xe8a4,	// (0x00035f4e) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00036c71) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00036c71) list_double_pane_g

0x864f,	// (0x0002fcf9) list_double_pane_t1_ParamLimits

0x864f,	// (0x0002fcf9) list_double_pane_t1

0x8665,	// (0x0002fd0f) list_double_pane_t2_ParamLimits

0x8665,	// (0x0002fd0f) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00036c76) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00036c76) list_double_pane_t

0x8677,	// (0x0002fd21) list_double2_pane_g1_ParamLimits

0x8677,	// (0x0002fd21) list_double2_pane_g1

0xe8a4,	// (0x00035f4e) list_double2_pane_g2_ParamLimits

0xe8a4,	// (0x00035f4e) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00036c7b) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00036c7b) list_double2_pane_g

0x864f,	// (0x0002fcf9) list_double2_pane_t1_ParamLimits

0x864f,	// (0x0002fcf9) list_double2_pane_t1

0x8688,	// (0x0002fd32) list_double2_pane_t2_ParamLimits

0x8688,	// (0x0002fd32) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00036c80) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00036c80) list_double2_pane_t

0xe898,	// (0x00035f42) list_double_number_pane_g1_ParamLimits

0xe898,	// (0x00035f42) list_double_number_pane_g1

0xe8a4,	// (0x00035f4e) list_double_number_pane_g2_ParamLimits

0xe8a4,	// (0x00035f4e) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00036c71) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00036c71) list_double_number_pane_g

0x869a,	// (0x0002fd44) list_double_number_pane_t1_ParamLimits

0x869a,	// (0x0002fd44) list_double_number_pane_t1

0x86ac,	// (0x0002fd56) list_double_number_pane_t2_ParamLimits

0x86ac,	// (0x0002fd56) list_double_number_pane_t2

0x86c2,	// (0x0002fd6c) list_double_number_pane_t3_ParamLimits

0x86c2,	// (0x0002fd6c) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00036c85) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00036c85) list_double_number_pane_t

0x86d4,	// (0x0002fd7e) list_double_graphic_pane_g1_ParamLimits

0x86d4,	// (0x0002fd7e) list_double_graphic_pane_g1

0xe8b0,	// (0x00035f5a) list_double_graphic_pane_g2_ParamLimits

0xe8b0,	// (0x00035f5a) list_double_graphic_pane_g2

0xe8bf,	// (0x00035f69) list_double_graphic_pane_g3_ParamLimits

0xe8bf,	// (0x00035f69) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00036c8c) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00036c8c) list_double_graphic_pane_g

0x86ec,	// (0x0002fd96) list_double_graphic_pane_t1_ParamLimits

0x86ec,	// (0x0002fd96) list_double_graphic_pane_t1

0x8702,	// (0x0002fdac) list_double_graphic_pane_t2_ParamLimits

0x8702,	// (0x0002fdac) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00036c95) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00036c95) list_double_graphic_pane_t

0x8714,	// (0x0002fdbe) list_double2_graphic_pane_g1_ParamLimits

0x8714,	// (0x0002fdbe) list_double2_graphic_pane_g1

0xe8cb,	// (0x00035f75) list_double2_graphic_pane_g2_ParamLimits

0xe8cb,	// (0x00035f75) list_double2_graphic_pane_g2

0xe8d7,	// (0x00035f81) list_double2_graphic_pane_g3_ParamLimits

0xe8d7,	// (0x00035f81) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00036c9a) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00036c9a) list_double2_graphic_pane_g

0x86ac,	// (0x0002fd56) list_double2_graphic_pane_t1_ParamLimits

0x86ac,	// (0x0002fd56) list_double2_graphic_pane_t1

0x8720,	// (0x0002fdca) list_double2_graphic_pane_t2_ParamLimits

0x8720,	// (0x0002fdca) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00036ca1) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00036ca1) list_double2_graphic_pane_t

0x8732,	// (0x0002fddc) list_double_large_graphic_pane_g1_ParamLimits

0x8732,	// (0x0002fddc) list_double_large_graphic_pane_g1

0x8677,	// (0x0002fd21) list_double_large_graphic_pane_g2_ParamLimits

0x8677,	// (0x0002fd21) list_double_large_graphic_pane_g2

0xe8a4,	// (0x00035f4e) list_double_large_graphic_pane_g3_ParamLimits

0xe8a4,	// (0x00035f4e) list_double_large_graphic_pane_g3

0x8745,	// (0x0002fdef) list_double_large_graphic_pane_g4_ParamLimits

0x8745,	// (0x0002fdef) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00036ca6) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00036ca6) list_double_large_graphic_pane_g

0x8757,	// (0x0002fe01) list_double_large_graphic_pane_t1_ParamLimits

0x8757,	// (0x0002fe01) list_double_large_graphic_pane_t1

0x8770,	// (0x0002fe1a) list_double_large_graphic_pane_t2_ParamLimits

0x8770,	// (0x0002fe1a) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00036cb1) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00036cb1) list_double_large_graphic_pane_t

0x8782,	// (0x0002fe2c) list_double2_large_graphic_pane_g1_ParamLimits

0x8782,	// (0x0002fe2c) list_double2_large_graphic_pane_g1

0x8677,	// (0x0002fd21) list_double2_large_graphic_pane_g2_ParamLimits

0x8677,	// (0x0002fd21) list_double2_large_graphic_pane_g2

0xe8a4,	// (0x00035f4e) list_double2_large_graphic_pane_g3_ParamLimits

0xe8a4,	// (0x00035f4e) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00036cb6) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00036cb6) list_double2_large_graphic_pane_g

0x86ac,	// (0x0002fd56) list_double2_large_graphic_pane_t1_ParamLimits

0x86ac,	// (0x0002fd56) list_double2_large_graphic_pane_t1

0x8720,	// (0x0002fdca) list_double2_large_graphic_pane_t2_ParamLimits

0x8720,	// (0x0002fdca) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00036ca1) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00036ca1) list_double2_large_graphic_pane_t

0x878e,	// (0x0002fe38) list_double_heading_pane_g1_ParamLimits

0x878e,	// (0x0002fe38) list_double_heading_pane_g1

0xe8f8,	// (0x00035fa2) list_double_heading_pane_g2_ParamLimits

0xe8f8,	// (0x00035fa2) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x00036cbd) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x00036cbd) list_double_heading_pane_g

0x879f,	// (0x0002fe49) list_double_heading_pane_t1_ParamLimits

0x879f,	// (0x0002fe49) list_double_heading_pane_t1

0x8720,	// (0x0002fdca) list_double_heading_pane_t2_ParamLimits

0x8720,	// (0x0002fdca) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x00036cc2) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x00036cc2) list_double_heading_pane_t

0x87b5,	// (0x0002fe5f) list_double_graphic_heading_pane_g1_ParamLimits

0x87b5,	// (0x0002fe5f) list_double_graphic_heading_pane_g1

0x878e,	// (0x0002fe38) list_double_graphic_heading_pane_g2_ParamLimits

0x878e,	// (0x0002fe38) list_double_graphic_heading_pane_g2

0xe8f8,	// (0x00035fa2) list_double_graphic_heading_pane_g3_ParamLimits

0xe8f8,	// (0x00035fa2) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x00036cc7) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00036cc7) list_double_graphic_heading_pane_g

0x879f,	// (0x0002fe49) list_double_graphic_heading_pane_t1_ParamLimits

0x879f,	// (0x0002fe49) list_double_graphic_heading_pane_t1

0x8720,	// (0x0002fdca) list_double_graphic_heading_pane_t2_ParamLimits

0x8720,	// (0x0002fdca) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x00036cc2) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x00036cc2) list_double_graphic_heading_pane_t

0x8677,	// (0x0002fd21) list_double_time_pane_g1_ParamLimits

0x8677,	// (0x0002fd21) list_double_time_pane_g1

0xe8a4,	// (0x00035f4e) list_double_time_pane_g2_ParamLimits

0xe8a4,	// (0x00035f4e) list_double_time_pane_g2

0x0001,

0xf5d1,	// (0x00036c7b) list_double_time_pane_g_ParamLimits

0xf5d1,	// (0x00036c7b) list_double_time_pane_g

0xe904,	// (0x00035fae) list_double_time_pane_t1_ParamLimits

0xe904,	// (0x00035fae) list_double_time_pane_t1

0xe91a,	// (0x00035fc4) list_double_time_pane_t2_ParamLimits

0xe91a,	// (0x00035fc4) list_double_time_pane_t2

0xe92c,	// (0x00035fd6) list_double_time_pane_t3_ParamLimits

0xe92c,	// (0x00035fd6) list_double_time_pane_t3

0xe93e,	// (0x00035fe8) list_double_time_pane_t4_ParamLimits

0xe93e,	// (0x00035fe8) list_double_time_pane_t4

0x0003,

0xf624,	// (0x00036cce) list_double_time_pane_t_ParamLimits

0xf624,	// (0x00036cce) list_double_time_pane_t

0xe950,	// (0x00035ffa) list_setting_pane_g1_ParamLimits

0xe950,	// (0x00035ffa) list_setting_pane_g1

0xe95c,	// (0x00036006) list_setting_pane_g2_ParamLimits

0xe95c,	// (0x00036006) list_setting_pane_g2

0x0001,

0xf62d,	// (0x00036cd7) list_setting_pane_g_ParamLimits

0xf62d,	// (0x00036cd7) list_setting_pane_g

0x87c1,	// (0x0002fe6b) list_setting_pane_t1_ParamLimits

0x87c1,	// (0x0002fe6b) list_setting_pane_t1

0x87d8,	// (0x0002fe82) list_setting_pane_t2_ParamLimits

0x87d8,	// (0x0002fe82) list_setting_pane_t2

0x0002,

0xf632,	// (0x00036cdc) list_setting_pane_t_ParamLimits

0xf632,	// (0x00036cdc) list_setting_pane_t

0x8817,	// (0x0002fec1) set_value_pane_cp_ParamLimits

0x8817,	// (0x0002fec1) set_value_pane_cp

0xe968,	// (0x00036012) list_setting_number_pane_g1_ParamLimits

0xe968,	// (0x00036012) list_setting_number_pane_g1

0xe974,	// (0x0003601e) list_setting_number_pane_g2_ParamLimits

0xe974,	// (0x0003601e) list_setting_number_pane_g2

0x0001,

0xf639,	// (0x00036ce3) list_setting_number_pane_g_ParamLimits

0xf639,	// (0x00036ce3) list_setting_number_pane_g

0x8823,	// (0x0002fecd) list_setting_number_pane_t1_ParamLimits

0x8823,	// (0x0002fecd) list_setting_number_pane_t1

0xe980,	// (0x0003602a) list_setting_number_pane_t2_ParamLimits

0xe980,	// (0x0003602a) list_setting_number_pane_t2

0x8837,	// (0x0002fee1) list_setting_number_pane_t3_ParamLimits

0x8837,	// (0x0002fee1) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x00036ce8) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x00036ce8) list_setting_number_pane_t

0x8817,	// (0x0002fec1) set_value_pane_ParamLimits

0x8817,	// (0x0002fec1) set_value_pane

0xc574,	// (0x00033c1e) bg_set_opt_pane_ParamLimits

0xc574,	// (0x00033c1e) bg_set_opt_pane

0x884f,	// (0x0002fef9) set_value_pane_t1

0xc595,	// (0x00033c3f) slider_set_pane_cp3

0x95af,	// (0x00030c59) volume_small_pane_cp

0xc59e,	// (0x00033c48) list_form_gen_pane

0xc5a7,	// (0x00033c51) scroll_pane_cp8

0x885d,	// (0x0002ff07) form_field_data_pane_ParamLimits

0x885d,	// (0x0002ff07) form_field_data_pane

0x8874,	// (0x0002ff1e) form_field_data_wide_pane_ParamLimits

0x8874,	// (0x0002ff1e) form_field_data_wide_pane

0x8894,	// (0x0002ff3e) form_field_popup_pane_ParamLimits

0x8894,	// (0x0002ff3e) form_field_popup_pane

0x88ac,	// (0x0002ff56) form_field_popup_wide_pane_ParamLimits

0x88ac,	// (0x0002ff56) form_field_popup_wide_pane

0xe9d2,	// (0x0003607c) form_field_slider_pane_ParamLimits

0xe9d2,	// (0x0003607c) form_field_slider_pane

0x88c9,	// (0x0002ff73) form_field_slider_wide_pane_ParamLimits

0x88c9,	// (0x0002ff73) form_field_slider_wide_pane

0xc5b8,	// (0x00033c62) data_form_pane

0x88e6,	// (0x0002ff90) form_field_data_pane_t1

0xc5c4,	// (0x00033c6e) input_focus_pane

0x8900,	// (0x0002ffaa) data_form_wide_pane

0x891d,	// (0x0002ffc7) form_field_data_wide_pane_t1

0xc4b8,	// (0x00033b62) input_focus_pane_cp6

0x893f,	// (0x0002ffe9) form_field_popup_pane_t1

0xc5c4,	// (0x00033c6e) input_focus_pane_cp7

0xc5f2,	// (0x00033c9c) list_form_pane

0x8961,	// (0x0003000b) form_field_popup_wide_pane_t1

0xc5c4,	// (0x00033c6e) input_focus_pane_cp8

0xc5fe,	// (0x00033ca8) list_form_wide_pane

0x897e,	// (0x00030028) form_field_slider_pane_t1_ParamLimits

0x897e,	// (0x00030028) form_field_slider_pane_t1

0x8996,	// (0x00030040) form_field_slider_pane_t2_ParamLimits

0x8996,	// (0x00030040) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x00036cf8) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x00036cf8) form_field_slider_pane_t

0xc200,	// (0x000338aa) input_focus_pane_cp9_ParamLimits

0xc200,	// (0x000338aa) input_focus_pane_cp9

0x89ab,	// (0x00030055) slider_cont_pane_ParamLimits

0x89ab,	// (0x00030055) slider_cont_pane

0xc60a,	// (0x00033cb4) form_field_slider_wide_pane_t1_ParamLimits

0xc60a,	// (0x00033cb4) form_field_slider_wide_pane_t1

0x89bf,	// (0x00030069) form_field_slider_wide_pane_t2_ParamLimits

0x89bf,	// (0x00030069) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x00036cfd) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x00036cfd) form_field_slider_wide_pane_t

0xc200,	// (0x000338aa) input_focus_pane_cp10_ParamLimits

0xc200,	// (0x000338aa) input_focus_pane_cp10

0x89d1,	// (0x0003007b) slider_cont_pane_cp1_ParamLimits

0x89d1,	// (0x0003007b) slider_cont_pane_cp1

0x89e5,	// (0x0003008f) slider_form_pane_cp

0xc61c,	// (0x00033cc6) input_focus_pane_g1

0xc624,	// (0x00033cce) input_focus_pane_g2

0xc62c,	// (0x00033cd6) input_focus_pane_g3

0xc634,	// (0x00033cde) input_focus_pane_g4

0xc63c,	// (0x00033ce6) input_focus_pane_g5

0xc644,	// (0x00033cee) input_focus_pane_g6

0xc64c,	// (0x00033cf6) input_focus_pane_g7

0xc654,	// (0x00033cfe) input_focus_pane_g8

0xc65c,	// (0x00033d06) input_focus_pane_g9

0xc1a8,	// (0x00033852) input_focus_pane_g10

0x0009,

0xf658,	// (0x00036d02) input_focus_pane_g

0x144d,	// (0x00028af7) wait_border_pane_g3_copy1

0x89ed,	// (0x00030097) data_form_pane_t1

0xc1a8,	// (0x00033852) wait_anim_pane_g1_copy1

0x8afd,	// (0x000301a7) data_form_wide_pane_t1

0x8a07,	// (0x000300b1) list_form_graphic_pane_cp_ParamLimits

0x8a07,	// (0x000300b1) list_form_graphic_pane_cp

0x365a,	// (0x0002ad04) slider_form_pane_g1

0x3663,	// (0x0002ad0d) slider_form_pane_g2

0x0006,

0xf956,	// (0x00037000) slider_form_pane_g

0x8a07,	// (0x000300b1) list_form_graphic_pane_ParamLimits

0x8a07,	// (0x000300b1) list_form_graphic_pane

0x8a1a,	// (0x000300c4) list_form_graphic_pane_g1

0x8a22,	// (0x000300cc) list_form_graphic_pane_t1_ParamLimits

0x8a22,	// (0x000300cc) list_form_graphic_pane_t1

0xc20e,	// (0x000338b8) list_highlight_pane_cp5_ParamLimits

0xc20e,	// (0x000338b8) list_highlight_pane_cp5

0x8a37,	// (0x000300e1) find_pane_g1

0xc664,	// (0x00033d0e) input_find_pane

0x8a40,	// (0x000300ea) input_find_pane_g1_ParamLimits

0x8a40,	// (0x000300ea) input_find_pane_g1

0x8a4c,	// (0x000300f6) input_find_pane_t1_ParamLimits

0x8a4c,	// (0x000300f6) input_find_pane_t1

0x8a61,	// (0x0003010b) input_find_pane_t2_ParamLimits

0x8a61,	// (0x0003010b) input_find_pane_t2

0x0001,

0xf66d,	// (0x00036d17) input_find_pane_t_ParamLimits

0xf66d,	// (0x00036d17) input_find_pane_t

0xc66d,	// (0x00033d17) input_focus_pane_cp5_ParamLimits

0xc66d,	// (0x00033d17) input_focus_pane_cp5

0xc680,	// (0x00033d2a) bg_popup_window_pane_cp2_ParamLimits

0xc680,	// (0x00033d2a) bg_popup_window_pane_cp2

0xc68d,	// (0x00033d37) listscroll_menu_pane_ParamLimits

0xc68d,	// (0x00033d37) listscroll_menu_pane

0x95c4,	// (0x00030c6e) popup_submenu_window_ParamLimits

0x95c4,	// (0x00030c6e) popup_submenu_window

0xc699,	// (0x00033d43) find_popup_pane_g1

0x95ec,	// (0x00030c96) input_popup_find_pane_cp

0xc6a1,	// (0x00033d4b) input_focus_pane_cp4_ParamLimits

0xc6a1,	// (0x00033d4b) input_focus_pane_cp4

0xc6af,	// (0x00033d59) input_popup_find_pane_t1_ParamLimits

0xc6af,	// (0x00033d59) input_popup_find_pane_t1

0xc1b2,	// (0x0003385c) bg_popup_sub_pane_cp

0xc6dd,	// (0x00033d87) listscroll_popup_sub_pane

0xc6e5,	// (0x00033d8f) list_submenu_pane_ParamLimits

0xc6e5,	// (0x00033d8f) list_submenu_pane

0xc6f6,	// (0x00033da0) scroll_pane_cp4

0x9604,	// (0x00030cae) list_single_popup_submenu_pane_ParamLimits

0x9604,	// (0x00030cae) list_single_popup_submenu_pane

0x9618,	// (0x00030cc2) list_single_popup_submenu_pane_g1

0x9620,	// (0x00030cca) list_single_popup_submenu_pane_t1_ParamLimits

0x9620,	// (0x00030cca) list_single_popup_submenu_pane_t1

0xc200,	// (0x000338aa) bg_active_tab_pane_cp1_ParamLimits

0xc200,	// (0x000338aa) bg_active_tab_pane_cp1

0xc6fe,	// (0x00033da8) tabs_2_active_pane_g1

0x9635,	// (0x00030cdf) tabs_2_active_pane_t1

0xc200,	// (0x000338aa) bg_passive_tab_pane_cp1_ParamLimits

0xc200,	// (0x000338aa) bg_passive_tab_pane_cp1

0xc6fe,	// (0x00033da8) tabs_2_passive_pane_g1

0x9635,	// (0x00030cdf) tabs_2_passive_pane_t1

0xc20e,	// (0x000338b8) bg_active_tab_pane_cp4

0x9647,	// (0x00030cf1) tabs_2_long_active_pane_t1

0xc706,	// (0x00033db0) bg_passive_tab_pane_cp4

0x0d76,	// (0x00028420) list_single_midp_graphic_pane_g4_ParamLimits

0xc20e,	// (0x000338b8) bg_active_tab_pane_cp5

0x965a,	// (0x00030d04) tabs_3_long_active_pane_t1

0xc706,	// (0x00033db0) bg_passive_tab_pane_cp5

0x0d76,	// (0x00028420) list_single_midp_graphic_pane_g4

0xc20e,	// (0x000338b8) bg_popup_window_pane_cp13_ParamLimits

0xc20e,	// (0x000338b8) bg_popup_window_pane_cp13

0xc712,	// (0x00033dbc) listscroll_popup_fast_pane_ParamLimits

0xc712,	// (0x00033dbc) listscroll_popup_fast_pane

0xc71e,	// (0x00033dc8) grid_popup_fast_pane_ParamLimits

0xc71e,	// (0x00033dc8) grid_popup_fast_pane

0xc730,	// (0x00033dda) scroll_pane_cp9_ParamLimits

0xc730,	// (0x00033dda) scroll_pane_cp9

0x4f93,	// (0x0002c63d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4f93,	// (0x0002c63d) list_single_graphic_hl_pane_t1_cp2

0xc743,	// (0x00033ded) input_focus_pane_cp20_ParamLimits

0xc743,	// (0x00033ded) input_focus_pane_cp20

0xc751,	// (0x00033dfb) query_popup_data_pane_t1_ParamLimits

0xc751,	// (0x00033dfb) query_popup_data_pane_t1

0xc764,	// (0x00033e0e) query_popup_data_pane_t2_ParamLimits

0xc764,	// (0x00033e0e) query_popup_data_pane_t2

0xc7aa,	// (0x00033e54) query_popup_data_pane_t3_ParamLimits

0xc7aa,	// (0x00033e54) query_popup_data_pane_t3

0xc7eb,	// (0x00033e95) query_popup_data_pane_t4_ParamLimits

0xc7eb,	// (0x00033e95) query_popup_data_pane_t4

0xc827,	// (0x00033ed1) query_popup_data_pane_t5_ParamLimits

0xc827,	// (0x00033ed1) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x00036d1c) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x00036d1c) query_popup_data_pane_t

0xc61c,	// (0x00033cc6) bg_set_opt_pane_g1

0xc624,	// (0x00033cce) bg_set_opt_pane_g2

0xc62c,	// (0x00033cd6) bg_set_opt_pane_g3

0xc634,	// (0x00033cde) bg_set_opt_pane_g4

0xc63c,	// (0x00033ce6) bg_set_opt_pane_g5

0xc644,	// (0x00033cee) bg_set_opt_pane_g6

0xc64c,	// (0x00033cf6) bg_set_opt_pane_g7

0xc654,	// (0x00033cfe) bg_set_opt_pane_g8

0xc65c,	// (0x00033d06) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x00036d27) bg_set_opt_pane_g

0xf33f,	// (0x000369e9) control_top_pane_stacon_ParamLimits

0xf33f,	// (0x000369e9) control_top_pane_stacon

0xf392,	// (0x00036a3c) signal_pane_stacon_ParamLimits

0xf392,	// (0x00036a3c) signal_pane_stacon

0xcbb3,	// (0x0003425d) stacon_top_pane_g1_ParamLimits

0xcbb3,	// (0x0003425d) stacon_top_pane_g1

0xf3b7,	// (0x00036a61) title_pane_stacon_ParamLimits

0xf3b7,	// (0x00036a61) title_pane_stacon

0xf3e1,	// (0x00036a8b) uni_indicator_pane_stacon_ParamLimits

0xf3e1,	// (0x00036a8b) uni_indicator_pane_stacon

0xf3f6,	// (0x00036aa0) battery_pane_stacon_ParamLimits

0xf3f6,	// (0x00036aa0) battery_pane_stacon

0xf43a,	// (0x00036ae4) control_bottom_pane_stacon_ParamLimits

0xf43a,	// (0x00036ae4) control_bottom_pane_stacon

0xf45d,	// (0x00036b07) navi_pane_stacon_ParamLimits

0xf45d,	// (0x00036b07) navi_pane_stacon

0xcbd5,	// (0x0003427f) stacon_bottom_pane_g1_ParamLimits

0xcbd5,	// (0x0003427f) stacon_bottom_pane_g1

0xf102,	// (0x000367ac) aid_levels_signal_lsc_ParamLimits

0xf102,	// (0x000367ac) aid_levels_signal_lsc

0xf118,	// (0x000367c2) signal_pane_stacon_g1_ParamLimits

0xf118,	// (0x000367c2) signal_pane_stacon_g1

0xf12c,	// (0x000367d6) signal_pane_stacon_g2_ParamLimits

0xf12c,	// (0x000367d6) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x00036d3a) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x00036d3a) signal_pane_stacon_g

0xf161,	// (0x0003680b) title_pane_stacon_t1_ParamLimits

0xf161,	// (0x0003680b) title_pane_stacon_t1

0xc86b,	// (0x00033f15) uni_indicator_pane_stacon_g1

0xc875,	// (0x00033f1f) uni_indicator_pane_stacon_g2

0xc87f,	// (0x00033f29) uni_indicator_pane_stacon_g3

0xc889,	// (0x00033f33) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x00036d46) uni_indicator_pane_stacon_g

0xf186,	// (0x00036830) control_top_pane_stacon_g1

0xf18e,	// (0x00036838) control_top_pane_stacon_t1_ParamLimits

0xf18e,	// (0x00036838) control_top_pane_stacon_t1

0xf1c5,	// (0x0003686f) aid_levels_battery_lsc_ParamLimits

0xf1c5,	// (0x0003686f) aid_levels_battery_lsc

0xf1dc,	// (0x00036886) battery_pane_stacon_g1_ParamLimits

0xf1dc,	// (0x00036886) battery_pane_stacon_g1

0xf1ef,	// (0x00036899) battery_pane_stacon_g2_ParamLimits

0xf1ef,	// (0x00036899) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x00036d4f) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x00036d4f) battery_pane_stacon_g

0xf22d,	// (0x000368d7) navi_icon_pane_stacon

0xf241,	// (0x000368eb) navi_navi_pane_stacon

0xf22d,	// (0x000368d7) navi_text_pane_stacon

0xf186,	// (0x00036830) control_bottom_pane_stacon_g1

0xf255,	// (0x000368ff) control_bottom_pane_stacon_t1_ParamLimits

0xf255,	// (0x000368ff) control_bottom_pane_stacon_t1

0x9686,	// (0x00030d30) grid_app_pane_ParamLimits

0x9686,	// (0x00030d30) grid_app_pane

0x96be,	// (0x00030d68) scroll_pane_cp15_ParamLimits

0x96be,	// (0x00030d68) scroll_pane_cp15

0x96d3,	// (0x00030d7d) cell_app_pane_ParamLimits

0x96d3,	// (0x00030d7d) cell_app_pane

0x9718,	// (0x00030dc2) cell_app_pane_g1_ParamLimits

0x9718,	// (0x00030dc2) cell_app_pane_g1

0xc8ad,	// (0x00033f57) cell_app_pane_g2_ParamLimits

0xc8ad,	// (0x00033f57) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x00036d54) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x00036d54) cell_app_pane_g

0x973c,	// (0x00030de6) cell_app_pane_t1_ParamLimits

0x973c,	// (0x00030de6) cell_app_pane_t1

0xc8b9,	// (0x00033f63) grid_highlight_pane_ParamLimits

0xc8b9,	// (0x00033f63) grid_highlight_pane

0xc61c,	// (0x00033cc6) cell_highlight_pane_g1

0xc624,	// (0x00033cce) cell_highlight_pane_g2

0xc62c,	// (0x00033cd6) cell_highlight_pane_g3

0xc634,	// (0x00033cde) cell_highlight_pane_g4

0xc63c,	// (0x00033ce6) cell_highlight_pane_g5

0xc644,	// (0x00033cee) cell_highlight_pane_g6

0xc64c,	// (0x00033cf6) cell_highlight_pane_g7

0xc654,	// (0x00033cfe) cell_highlight_pane_g8

0xc65c,	// (0x00033d06) cell_highlight_pane_g9

0xc1a8,	// (0x00033852) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x00036d02) cell_highlight_pane_g

0xc8ca,	// (0x00033f74) bg_scroll_pane

0x975c,	// (0x00030e06) scroll_handle_pane

0xc911,	// (0x00033fbb) scroll_bg_pane_g1

0xc926,	// (0x00033fd0) scroll_bg_pane_g2

0xc93e,	// (0x00033fe8) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x00036d59) scroll_bg_pane_g

0x9770,	// (0x00030e1a) scroll_handle_focus_pane_ParamLimits

0x9770,	// (0x00030e1a) scroll_handle_focus_pane

0xc911,	// (0x00033fbb) scroll_handle_pane_g1

0xc953,	// (0x00033ffd) scroll_handle_pane_g2

0xc93e,	// (0x00033fe8) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x00036d60) scroll_handle_pane_g

0xc6a1,	// (0x00033d4b) bg_popup_sub_pane_cp21_ParamLimits

0xc6a1,	// (0x00033d4b) bg_popup_sub_pane_cp21

0x977d,	// (0x00030e27) popup_fep_japan_predictive_window_t1_ParamLimits

0x977d,	// (0x00030e27) popup_fep_japan_predictive_window_t1

0x9794,	// (0x00030e3e) popup_fep_japan_predictive_window_t2_ParamLimits

0x9794,	// (0x00030e3e) popup_fep_japan_predictive_window_t2

0x97c7,	// (0x00030e71) popup_fep_japan_predictive_window_t3_ParamLimits

0x97c7,	// (0x00030e71) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x00036d67) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x00036d67) popup_fep_japan_predictive_window_t

0xc1b2,	// (0x0003385c) bg_popup_sub_pane_cp23

0x97fe,	// (0x00030ea8) listscroll_japin_cand_pane

0xc967,	// (0x00034011) popup_fep_japan_candidate_window_t1

0xc975,	// (0x0003401f) candidate_pane_ParamLimits

0xc975,	// (0x0003401f) candidate_pane

0x9806,	// (0x00030eb0) scroll_pane_cp30

0xc987,	// (0x00034031) list_single_popup_jap_candidate_pane_ParamLimits

0xc987,	// (0x00034031) list_single_popup_jap_candidate_pane

0xc1b2,	// (0x0003385c) list_highlight_pane_cp30

0xc99c,	// (0x00034046) list_single_popup_jap_candidate_pane_t1

0xc9ab,	// (0x00034055) level_1_signal

0xc9b8,	// (0x00034062) level_2_signal

0xc9c5,	// (0x0003406f) level_3_signal

0xc9d2,	// (0x0003407c) level_4_signal

0xc9df,	// (0x00034089) level_5_signal

0xc9ec,	// (0x00034096) level_6_signal

0xc9f9,	// (0x000340a3) level_7_signal

0xc9ab,	// (0x00034055) level_1_battery

0xc9b8,	// (0x00034062) level_2_battery

0xc9c5,	// (0x0003406f) level_3_battery

0xc9d2,	// (0x0003407c) level_4_battery

0xc9df,	// (0x00034089) level_5_battery

0xc9ec,	// (0x00034096) level_6_battery

0xc9f9,	// (0x000340a3) level_7_battery

0xca1e,	// (0x000340c8) list_menu_pane_ParamLimits

0xca1e,	// (0x000340c8) list_menu_pane

0xca34,	// (0x000340de) scroll_pane_cp25_ParamLimits

0xca34,	// (0x000340de) scroll_pane_cp25

0x980e,	// (0x00030eb8) list_double2_graphic_pane_cp2_ParamLimits

0x980e,	// (0x00030eb8) list_double2_graphic_pane_cp2

0x980e,	// (0x00030eb8) list_double2_large_graphic_pane_cp2_ParamLimits

0x980e,	// (0x00030eb8) list_double2_large_graphic_pane_cp2

0x980e,	// (0x00030eb8) list_double2_pane_cp2_ParamLimits

0x980e,	// (0x00030eb8) list_double2_pane_cp2

0x980e,	// (0x00030eb8) list_double_graphic_pane_cp2_ParamLimits

0x980e,	// (0x00030eb8) list_double_graphic_pane_cp2

0x980e,	// (0x00030eb8) list_double_large_graphic_pane_cp2_ParamLimits

0x980e,	// (0x00030eb8) list_double_large_graphic_pane_cp2

0x980e,	// (0x00030eb8) list_double_number_pane_cp2_ParamLimits

0x980e,	// (0x00030eb8) list_double_number_pane_cp2

0x980e,	// (0x00030eb8) list_double_pane_cp2_ParamLimits

0x980e,	// (0x00030eb8) list_double_pane_cp2

0x981d,	// (0x00030ec7) list_single_2graphic_pane_cp2_ParamLimits

0x981d,	// (0x00030ec7) list_single_2graphic_pane_cp2

0x981d,	// (0x00030ec7) list_single_graphic_heading_pane_cp2_ParamLimits

0x981d,	// (0x00030ec7) list_single_graphic_heading_pane_cp2

0x981d,	// (0x00030ec7) list_single_graphic_pane_cp2_ParamLimits

0x981d,	// (0x00030ec7) list_single_graphic_pane_cp2

0x981d,	// (0x00030ec7) list_single_heading_pane_cp2_ParamLimits

0x981d,	// (0x00030ec7) list_single_heading_pane_cp2

0xca5d,	// (0x00034107) list_single_large_graphic_pane_cp2_ParamLimits

0xca5d,	// (0x00034107) list_single_large_graphic_pane_cp2

0x981d,	// (0x00030ec7) list_single_number_heading_pane_cp2_ParamLimits

0x981d,	// (0x00030ec7) list_single_number_heading_pane_cp2

0x981d,	// (0x00030ec7) list_single_number_pane_cp2_ParamLimits

0x981d,	// (0x00030ec7) list_single_number_pane_cp2

0x981d,	// (0x00030ec7) list_single_pane_cp2_ParamLimits

0x981d,	// (0x00030ec7) list_single_pane_cp2

0xca77,	// (0x00034121) bg_popup_sub_pane_cp22

0xf325,	// (0x000369cf) popup_side_volume_key_window_g1

0xf331,	// (0x000369db) popup_side_volume_key_window_t1

0x98e5,	// (0x00030f8f) volume_small_pane_cp1

0xc200,	// (0x000338aa) bg_popup_sub_pane_cp24_ParamLimits

0xc200,	// (0x000338aa) bg_popup_sub_pane_cp24

0xca8d,	// (0x00034137) fep_china_uni_candidate_pane_ParamLimits

0xca8d,	// (0x00034137) fep_china_uni_candidate_pane

0xcaa1,	// (0x0003414b) fep_china_uni_entry_pane

0xcab1,	// (0x0003415b) popup_fep_china_uni_window_g1

0x98ed,	// (0x00030f97) fep_china_uni_entry_pane_g1

0x98f5,	// (0x00030f9f) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x00036d98) fep_china_uni_entry_pane_g

0xcacd,	// (0x00034177) fep_entry_item_pane

0xcad7,	// (0x00034181) fep_candidate_item_pane

0x98fd,	// (0x00030fa7) fep_china_uni_candidate_pane_g1

0xcadf,	// (0x00034189) fep_china_uni_candidate_pane_g2

0xcae7,	// (0x00034191) fep_china_uni_candidate_pane_g3

0x9905,	// (0x00030faf) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x00036d9d) fep_china_uni_candidate_pane_g

0xc1a8,	// (0x00033852) fep_entry_item_pane_g1

0xcaef,	// (0x00034199) fep_entry_item_pane_t1_ParamLimits

0xcaef,	// (0x00034199) fep_entry_item_pane_t1

0xcb05,	// (0x000341af) fep_candidate_item_pane_t1_ParamLimits

0xcb05,	// (0x000341af) fep_candidate_item_pane_t1

0xcb1a,	// (0x000341c4) fep_candidate_item_pane_t2_ParamLimits

0xcb1a,	// (0x000341c4) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x00036da6) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x00036da6) fep_candidate_item_pane_t

0xc20e,	// (0x000338b8) list_highlight_pane_cp31_ParamLimits

0xc20e,	// (0x000338b8) list_highlight_pane_cp31

0xcb2c,	// (0x000341d6) level_1_signal_lsc

0xcb35,	// (0x000341df) level_2_signal_lsc

0xcb3e,	// (0x000341e8) level_3_signal_lsc

0xcb47,	// (0x000341f1) level_4_signal_lsc

0xcb50,	// (0x000341fa) level_5_signal_lsc

0xcb59,	// (0x00034203) level_6_signal_lsc

0xcb62,	// (0x0003420c) level_7_signal_lsc

0xcb62,	// (0x0003420c) level_1_battery_lsc

0xcb6b,	// (0x00034215) level_2_battery_lsc

0xcb74,	// (0x0003421e) level_3_battery_lsc

0xcb7d,	// (0x00034227) level_4_battery_lsc

0xcb86,	// (0x00034230) level_5_battery_lsc

0xcb8f,	// (0x00034239) level_6_battery_lsc

0xcb2c,	// (0x000341d6) level_7_battery_lsc

0xcb98,	// (0x00034242) scroll_handle_focus_pane_g1

0xcba1,	// (0x0003424b) scroll_handle_focus_pane_g2

0xcbaa,	// (0x00034254) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x00036dab) scroll_handle_focus_pane_g

0x8a76,	// (0x00030120) list_single_2graphic_pane_g1_ParamLimits

0x8a76,	// (0x00030120) list_single_2graphic_pane_g1

0x8624,	// (0x0002fcce) list_single_2graphic_pane_g2_ParamLimits

0x8624,	// (0x0002fcce) list_single_2graphic_pane_g2

0xe812,	// (0x00035ebc) list_single_2graphic_pane_g3_ParamLimits

0xe812,	// (0x00035ebc) list_single_2graphic_pane_g3

0x8a82,	// (0x0003012c) list_single_2graphic_pane_g4_ParamLimits

0x8a82,	// (0x0003012c) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x00036db2) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x00036db2) list_single_2graphic_pane_g

0x8a93,	// (0x0003013d) list_single_2graphic_pane_t1_ParamLimits

0x8a93,	// (0x0003013d) list_single_2graphic_pane_t1

0x8ac1,	// (0x0003016b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8ac1,	// (0x0003016b) list_double2_graphic_large_graphic_pane_g1

0x8677,	// (0x0002fd21) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8677,	// (0x0002fd21) list_double2_graphic_large_graphic_pane_g2

0xe8a4,	// (0x00035f4e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xe8a4,	// (0x00035f4e) list_double2_graphic_large_graphic_pane_g3

0xe9e5,	// (0x0003608f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xe9e5,	// (0x0003608f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x00036dbb) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x00036dbb) list_double2_graphic_large_graphic_pane_g

0xe9f1,	// (0x0003609b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xe9f1,	// (0x0003609b) list_double2_graphic_large_graphic_pane_t1

0xea07,	// (0x000360b1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xea07,	// (0x000360b1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x00036dc4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x00036dc4) list_double2_graphic_large_graphic_pane_t

0x9980,	// (0x0003102a) popup_fast_swap_window_ParamLimits

0x9980,	// (0x0003102a) popup_fast_swap_window

0x999c,	// (0x00031046) popup_side_volume_key_window

0xcc60,	// (0x0003430a) stacon_top_pane

0xcc6a,	// (0x00034314) status_pane_ParamLimits

0xcc6a,	// (0x00034314) status_pane

0x99b6,	// (0x00031060) status_small_pane

0xc1b2,	// (0x0003385c) control_pane

0xc1b2,	// (0x0003385c) stacon_bottom_pane

0xc5a7,	// (0x00033c51) scroll_pane_cp121

0xc59e,	// (0x00033c48) set_content_pane

0x990d,	// (0x00030fb7) bg_active_tab_pane_g1_cp1

0x9916,	// (0x00030fc0) bg_active_tab_pane_g2_cp1

0x991f,	// (0x00030fc9) bg_active_tab_pane_g3_cp1

0x990d,	// (0x00030fb7) bg_passive_tab_pane_g1_cp1

0x9916,	// (0x00030fc0) bg_passive_tab_pane_g2_cp1

0x991f,	// (0x00030fc9) bg_passive_tab_pane_g3_cp1

0x9928,	// (0x00030fd2) bg_active_tab_pane_g1_cp2

0x9916,	// (0x00030fc0) bg_active_tab_pane_g2_cp2

0x9931,	// (0x00030fdb) bg_active_tab_pane_g3_cp2

0x9928,	// (0x00030fd2) bg_passive_tab_pane_g1_cp2

0x9916,	// (0x00030fc0) bg_passive_tab_pane_g2_cp2

0x9931,	// (0x00030fdb) bg_passive_tab_pane_g3_cp2

0x993a,	// (0x00030fe4) bg_active_tab_pane_g1_cp3

0x9916,	// (0x00030fc0) bg_active_tab_pane_g2_cp3

0x9943,	// (0x00030fed) bg_active_tab_pane_g3_cp3

0x993a,	// (0x00030fe4) bg_passive_tab_pane_g1_cp3

0x9916,	// (0x00030fc0) bg_passive_tab_pane_g2_cp3

0x9943,	// (0x00030fed) bg_passive_tab_pane_g3_cp3

0x994c,	// (0x00030ff6) bg_active_tab_pane_g1_cp4

0x9916,	// (0x00030fc0) bg_active_tab_pane_g2_cp4

0x9957,	// (0x00031001) bg_active_tab_pane_g3_cp4

0x994c,	// (0x00030ff6) bg_passive_tab_pane_g1_cp4

0x9916,	// (0x00030fc0) bg_passive_tab_pane_g2_cp4

0x9957,	// (0x00031001) bg_passive_tab_pane_g3_cp4

0x9962,	// (0x0003100c) bg_active_tab_pane_g1_cp5

0x9916,	// (0x00030fc0) bg_active_tab_pane_g2_cp5

0x996b,	// (0x00031015) bg_active_tab_pane_g3_cp5

0x9962,	// (0x0003100c) bg_passive_tab_pane_g1_cp5

0x9916,	// (0x00030fc0) bg_passive_tab_pane_g2_cp5

0x996b,	// (0x00031015) bg_passive_tab_pane_g3_cp5

0x3c6a,	// (0x0002b314) list_set_graphic_pane_ParamLimits

0x3c6a,	// (0x0002b314) list_set_graphic_pane

0xc1b2,	// (0x0003385c) bg_set_opt_pane_cp4

0xcbf1,	// (0x0003429b) list_set_graphic_pane_g1_ParamLimits

0xcbf1,	// (0x0003429b) list_set_graphic_pane_g1

0xcbfd,	// (0x000342a7) list_set_graphic_pane_g2_ParamLimits

0xcbfd,	// (0x000342a7) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x00036dc9) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x00036dc9) list_set_graphic_pane_g

0x0009,

0xfab0,	// (0x0003715a) volume_small_pane_cp_g

0x9974,	// (0x0003101e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9974,	// (0x0003101e) list_double2_large_graphic_pane_g1_cp2

0xcc1f,	// (0x000342c9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xcc1f,	// (0x000342c9) list_double2_large_graphic_pane_g2_cp2

0xcc30,	// (0x000342da) list_double2_large_graphic_pane_g3_cp2

0xcc38,	// (0x000342e2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xcc38,	// (0x000342e2) list_double2_large_graphic_pane_t1_cp2

0xcc4e,	// (0x000342f8) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xcc4e,	// (0x000342f8) list_double2_large_graphic_pane_t2_cp2

0xaedc,	// (0x00032586) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaedc,	// (0x00032586) list_double_large_graphic_pane_g1_cp2

0x322d,	// (0x0002a8d7) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x322d,	// (0x0002a8d7) list_double_large_graphic_pane_g2_cp2

0xcd86,	// (0x00034430) list_double_large_graphic_pane_g3_cp2

0x323e,	// (0x0002a8e8) list_double_large_graphic_pane_g4_cp

0x3246,	// (0x0002a8f0) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3246,	// (0x0002a8f0) list_double_large_graphic_pane_t1_cp2

0x325d,	// (0x0002a907) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x325d,	// (0x0002a907) list_double_large_graphic_pane_t2_cp2

0xcc78,	// (0x00034322) list_double2_graphic_pane_g1_cp2_ParamLimits

0xcc78,	// (0x00034322) list_double2_graphic_pane_g1_cp2

0xcc86,	// (0x00034330) list_double2_graphic_pane_g2_cp2_ParamLimits

0xcc86,	// (0x00034330) list_double2_graphic_pane_g2_cp2

0xcc97,	// (0x00034341) list_double2_graphic_pane_g3_cp2

0xcca1,	// (0x0003434b) list_double2_graphic_pane_t1_cp2_ParamLimits

0xcca1,	// (0x0003434b) list_double2_graphic_pane_t1_cp2

0xccb7,	// (0x00034361) list_double2_graphic_pane_t2_cp2_ParamLimits

0xccb7,	// (0x00034361) list_double2_graphic_pane_t2_cp2

0xccc9,	// (0x00034373) list_single_number_heading_pane_g1_cp2_ParamLimits

0xccc9,	// (0x00034373) list_single_number_heading_pane_g1_cp2

0xccd5,	// (0x0003437f) list_single_number_heading_pane_g2_cp2

0xccdd,	// (0x00034387) list_single_number_heading_pane_t1_cp2_ParamLimits

0xccdd,	// (0x00034387) list_single_number_heading_pane_t1_cp2

0xccf3,	// (0x0003439d) list_single_number_heading_pane_t2_cp2_ParamLimits

0xccf3,	// (0x0003439d) list_single_number_heading_pane_t2_cp2

0xcd05,	// (0x000343af) list_single_number_heading_pane_t3_cp2_ParamLimits

0xcd05,	// (0x000343af) list_single_number_heading_pane_t3_cp2

0xccc9,	// (0x00034373) list_single_heading_pane_g1_cp2_ParamLimits

0xccc9,	// (0x00034373) list_single_heading_pane_g1_cp2

0xccd5,	// (0x0003437f) list_single_heading_pane_g2_cp2

0xccdd,	// (0x00034387) list_single_heading_pane_t1_cp2_ParamLimits

0xccdd,	// (0x00034387) list_single_heading_pane_t1_cp2

0x3026,	// (0x0002a6d0) list_single_heading_pane_t2_cp2_ParamLimits

0x3026,	// (0x0002a6d0) list_single_heading_pane_t2_cp2

0x2f6e,	// (0x0002a618) list_double_graphic_pane_g1_cp2_ParamLimits

0x2f6e,	// (0x0002a618) list_double_graphic_pane_g1_cp2

0x2f7a,	// (0x0002a624) list_double_graphic_pane_g2_cp2_ParamLimits

0x2f7a,	// (0x0002a624) list_double_graphic_pane_g2_cp2

0x2f89,	// (0x0002a633) list_double_graphic_pane_g3_cp2

0x2f91,	// (0x0002a63b) list_double_graphic_pane_t1_cp2_ParamLimits

0x2f91,	// (0x0002a63b) list_double_graphic_pane_t1_cp2

0x2fa7,	// (0x0002a651) list_double_graphic_pane_t2_cp2_ParamLimits

0x2fa7,	// (0x0002a651) list_double_graphic_pane_t2_cp2

0xcd7a,	// (0x00034424) list_double_number_pane_g1_cp2_ParamLimits

0xcd7a,	// (0x00034424) list_double_number_pane_g1_cp2

0xcd86,	// (0x00034430) list_double_number_pane_g2_cp2

0x2f32,	// (0x0002a5dc) list_double_number_pane_t1_cp2_ParamLimits

0x2f32,	// (0x0002a5dc) list_double_number_pane_t1_cp2

0x2f46,	// (0x0002a5f0) list_double_number_pane_t2_cp2_ParamLimits

0x2f46,	// (0x0002a5f0) list_double_number_pane_t2_cp2

0x2f5c,	// (0x0002a606) list_double_number_pane_t3_cp2_ParamLimits

0x2f5c,	// (0x0002a606) list_double_number_pane_t3_cp2

0x2e1b,	// (0x0002a4c5) list_single_graphic_pane_g1_cp2_ParamLimits

0x2e1b,	// (0x0002a4c5) list_single_graphic_pane_g1_cp2

0xcdbe,	// (0x00034468) list_single_graphic_pane_g2_cp2_ParamLimits

0xcdbe,	// (0x00034468) list_single_graphic_pane_g2_cp2

0xcdca,	// (0x00034474) list_single_graphic_pane_g3_cp2

0x2df1,	// (0x0002a49b) list_single_graphic_pane_t1_cp2_ParamLimits

0x2df1,	// (0x0002a49b) list_single_graphic_pane_t1_cp2

0xcdbe,	// (0x00034468) list_single_number_pane_g1_cp2_ParamLimits

0xcdbe,	// (0x00034468) list_single_number_pane_g1_cp2

0xcdca,	// (0x00034474) list_single_number_pane_g2_cp2

0x2df1,	// (0x0002a49b) list_single_number_pane_t1_cp2_ParamLimits

0x2df1,	// (0x0002a49b) list_single_number_pane_t1_cp2

0x2e07,	// (0x0002a4b1) list_single_number_pane_t2_cp2_ParamLimits

0x2e07,	// (0x0002a4b1) list_single_number_pane_t2_cp2

0xcc1f,	// (0x000342c9) list_double2_pane_g1_cp2_ParamLimits

0xcc1f,	// (0x000342c9) list_double2_pane_g1_cp2

0xcc30,	// (0x000342da) list_double2_pane_g2_cp2

0xcd52,	// (0x000343fc) list_double2_pane_t1_cp2_ParamLimits

0xcd52,	// (0x000343fc) list_double2_pane_t1_cp2

0xcd68,	// (0x00034412) list_double2_pane_t2_cp2_ParamLimits

0xcd68,	// (0x00034412) list_double2_pane_t2_cp2

0xcd7a,	// (0x00034424) list_double_pane_g1_cp2_ParamLimits

0xcd7a,	// (0x00034424) list_double_pane_g1_cp2

0xcd86,	// (0x00034430) list_double_pane_g2_cp2

0xcd8e,	// (0x00034438) list_double_pane_t1_cp2_ParamLimits

0xcd8e,	// (0x00034438) list_double_pane_t1_cp2

0xcda4,	// (0x0003444e) list_double_pane_t2_cp2_ParamLimits

0xcda4,	// (0x0003444e) list_double_pane_t2_cp2

0x99e4,	// (0x0003108e) list_single_pane_cp2_g3

0xcdbe,	// (0x00034468) list_single_pane_g1_cp2_ParamLimits

0xcdbe,	// (0x00034468) list_single_pane_g1_cp2

0xcdca,	// (0x00034474) list_single_pane_g2_cp2

0xcdd2,	// (0x0003447c) list_single_pane_t1_cp2_ParamLimits

0xcdd2,	// (0x0003447c) list_single_pane_t1_cp2

0x99ec,	// (0x00031096) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x99ec,	// (0x00031096) list_single_large_graphic_pane_g1_cp2

0xcdea,	// (0x00034494) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xcdea,	// (0x00034494) list_single_large_graphic_pane_g2_cp2

0xcdf6,	// (0x000344a0) list_single_large_graphic_pane_g3_cp2

0x99f8,	// (0x000310a2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x99f8,	// (0x000310a2) list_single_large_graphic_pane_g4_cp1

0xcdfe,	// (0x000344a8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xcdfe,	// (0x000344a8) list_single_large_graphic_pane_t1_cp2

0x2dbd,	// (0x0002a467) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2dbd,	// (0x0002a467) list_single_graphic_heading_pane_g1_cp2

0x2d8a,	// (0x0002a434) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2d8a,	// (0x0002a434) list_single_graphic_heading_pane_g4_cp2

0xcdca,	// (0x00034474) list_single_graphic_heading_pane_g5_cp2

0x2dc9,	// (0x0002a473) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2dc9,	// (0x0002a473) list_single_graphic_heading_pane_t1_cp2

0x2ddf,	// (0x0002a489) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2ddf,	// (0x0002a489) list_single_graphic_heading_pane_t2_cp2

0x2d7e,	// (0x0002a428) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2d7e,	// (0x0002a428) list_single_2graphic_pane_g1_cp2

0x2d8a,	// (0x0002a434) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2d8a,	// (0x0002a434) list_single_2graphic_pane_g2_cp2

0xcdca,	// (0x00034474) list_single_2graphic_pane_g3_cp2

0x2d9b,	// (0x0002a445) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2d9b,	// (0x0002a445) list_single_2graphic_pane_g4_cp2

0x2da7,	// (0x0002a451) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2da7,	// (0x0002a451) list_single_2graphic_pane_t1_cp2

0xc1a8,	// (0x00033852) list_highlight_pane_g10_cp1

0x2966,	// (0x0002a010) list_highlight_pane_g1_cp1

0x296e,	// (0x0002a018) list_highlight_pane_g2_cp1

0x2976,	// (0x0002a020) list_highlight_pane_g3_cp1

0x297e,	// (0x0002a028) list_highlight_pane_g4_cp1

0x2986,	// (0x0002a030) list_highlight_pane_g5_cp1

0x298e,	// (0x0002a038) list_highlight_pane_g6_cp1

0x2996,	// (0x0002a040) list_highlight_pane_g7_cp1

0x299e,	// (0x0002a048) list_highlight_pane_g8_cp1

0x29a6,	// (0x0002a050) list_highlight_pane_g9_cp1

0xac69,	// (0x00032313) form_field_slider_pane_t3

0xac77,	// (0x00032321) form_field_slider_pane_t4

0x158c,	// (0x00028c36) slider_form_pane_ParamLimits

0x158c,	// (0x00028c36) slider_form_pane

0xc1b2,	// (0x0003385c) control_abbreviations

0xc1b2,	// (0x0003385c) control_conventions

0xc1b2,	// (0x0003385c) control_definitions

0xc1b2,	// (0x0003385c) format_table_attribute

0xaeb3,	// (0x0003255d) bg_popup_preview_window_pane_g9

0xc1b2,	// (0x0003385c) format_table_data2

0xc1b2,	// (0x0003385c) format_table_data3

0xc1b2,	// (0x0003385c) format_table_data_example

0x0008,

0xc1b2,	// (0x0003385c) intro_purpose

0xf8b6,	// (0x00036f60) bg_popup_preview_window_pane_g

0xc1b2,	// (0x0003385c) texts_category

0xc1b2,	// (0x0003385c) texts_graphics

0xce14,	// (0x000344be) text_digital

0xce23,	// (0x000344cd) text_primary

0xce32,	// (0x000344dc) text_primary_small

0xce41,	// (0x000344eb) text_secondary

0xce50,	// (0x000344fa) text_title

0xb2d6,	// (0x00032980) bg_passive_tab_pane_g1_cp3_srt

0x9916,	// (0x00030fc0) bg_passive_tab_pane_g2_cp3_srt

0xb2df,	// (0x00032989) bg_passive_tab_pane_g3_cp3_srt

0xc200,	// (0x000338aa) bg_active_tab_pane_cp3_srt_ParamLimits

0xc200,	// (0x000338aa) bg_active_tab_pane_cp3_srt

0xb2e8,	// (0x00032992) tabs_4_active_pane_srt_g1

0xb2f0,	// (0x0003299a) tabs_4_active_pane_srt_t1_ParamLimits

0xb2f0,	// (0x0003299a) tabs_4_active_pane_srt_t1

0xb2d6,	// (0x00032980) bg_active_tab_pane_g1_cp3_copy1

0x9916,	// (0x00030fc0) bg_active_tab_pane_g2_cp3_copy1

0xb2df,	// (0x00032989) bg_active_tab_pane_g3_cp3_copy1

0xc20e,	// (0x000338b8) tabs_2_long_active_pane_srt_ParamLimits

0xc20e,	// (0x000338b8) tabs_2_long_active_pane_srt

0xc20e,	// (0x000338b8) tabs_2_long_passive_pane_srt_ParamLimits

0xc20e,	// (0x000338b8) tabs_2_long_passive_pane_srt

0xc706,	// (0x00033db0) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc706,	// (0x00033db0) bg_passive_tab_pane_cp4_srt

0xb01b,	// (0x000326c5) bg_passive_tab_pane_g1_cp4_srt

0x9916,	// (0x00030fc0) bg_passive_tab_pane_g2_cp4_srt

0xb024,	// (0x000326ce) bg_passive_tab_pane_g3_cp4_srt

0xc20e,	// (0x000338b8) bg_active_tab_pane_cp4_srt_ParamLimits

0xc20e,	// (0x000338b8) bg_active_tab_pane_cp4_srt

0xb02d,	// (0x000326d7) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb02d,	// (0x000326d7) tabs_2_long_active_pane_srt_t1

0xb01b,	// (0x000326c5) bg_active_tab_pane_g1_cp4_srt

0x9916,	// (0x00030fc0) bg_active_tab_pane_g2_cp4_srt

0xb024,	// (0x000326ce) bg_active_tab_pane_g3_cp4_srt

0xc200,	// (0x000338aa) tabs_3_long_active_pane_srt_ParamLimits

0xc200,	// (0x000338aa) tabs_3_long_active_pane_srt

0xc200,	// (0x000338aa) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc200,	// (0x000338aa) tabs_3_long_passive_pane_cp_srt

0xc200,	// (0x000338aa) tabs_3_long_passive_pane_srt_ParamLimits

0xc200,	// (0x000338aa) tabs_3_long_passive_pane_srt

0xc706,	// (0x00033db0) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc706,	// (0x00033db0) bg_passive_tab_pane_cp5_srt

0x9962,	// (0x0003100c) bg_passive_tab_pane_g1_cp5_srt

0x9916,	// (0x00030fc0) bg_passive_tab_pane_g2_cp5_srt

0x996b,	// (0x00031015) bg_passive_tab_pane_g3_cp5_srt

0xc20e,	// (0x000338b8) bg_active_tab_pane_cp5_srt_ParamLimits

0xc20e,	// (0x000338b8) bg_active_tab_pane_cp5_srt

0xb005,	// (0x000326af) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb005,	// (0x000326af) tabs_3_long_active_pane_srt_t1

0x9962,	// (0x0003100c) bg_active_tab_pane_g1_cp5_srt

0x9916,	// (0x00030fc0) bg_active_tab_pane_g2_cp5_srt

0x996b,	// (0x00031015) bg_active_tab_pane_g3_cp5_srt

0x3471,	// (0x0002ab1b) navi_text_pane_srt_t1

0x3469,	// (0x0002ab13) navi_icon_pane_srt_g1

0xcf3b,	// (0x000345e5) midp_editing_number_pane_srt

0xce5f,	// (0x00034509) midp_ticker_pane_srt

0xcf43,	// (0x000345ed) midp_ticker_pane_srt_g1

0xcf4b,	// (0x000345f5) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x00036de8) midp_ticker_pane_srt_g

0xcf53,	// (0x000345fd) midp_ticker_pane_srt_t1

0x345a,	// (0x0002ab04) midp_editing_number_pane_t1_copy1

0x9a12,	// (0x000310bc) listscroll_midp_pane

0x9a12,	// (0x000310bc) midp_form_pane

0x9a7d,	// (0x00031127) midp_info_popup_window_ParamLimits

0x9a7d,	// (0x00031127) midp_info_popup_window

0xc6a1,	// (0x00033d4b) bg_popup_sub_pane_cp50_ParamLimits

0xc6a1,	// (0x00033d4b) bg_popup_sub_pane_cp50

0x127c,	// (0x00028926) listscroll_midp_info_pane_ParamLimits

0x127c,	// (0x00028926) listscroll_midp_info_pane

0x125c,	// (0x00028906) listscroll_form_midp_pane_ParamLimits

0x125c,	// (0x00028906) listscroll_form_midp_pane

0x1268,	// (0x00028912) scroll_bar_cp050

0x125c,	// (0x00028906) list_midp_pane

0xb4e4,	// (0x00032b8e) signal_pane_g2_cp

0x1176,	// (0x00028820) listscroll_midp_info_pane_t1_ParamLimits

0x1176,	// (0x00028820) listscroll_midp_info_pane_t1

0xaaa3,	// (0x0003214d) listscroll_midp_info_pane_t2_ParamLimits

0xaaa3,	// (0x0003214d) listscroll_midp_info_pane_t2

0xaae1,	// (0x0003218b) listscroll_midp_info_pane_t3_ParamLimits

0xaae1,	// (0x0003218b) listscroll_midp_info_pane_t3

0xab1b,	// (0x000321c5) listscroll_midp_info_pane_t4_ParamLimits

0xab1b,	// (0x000321c5) listscroll_midp_info_pane_t4

0x0003,

0xf7f1,	// (0x00036e9b) listscroll_midp_info_pane_t_ParamLimits

0xf7f1,	// (0x00036e9b) listscroll_midp_info_pane_t

0xc6f6,	// (0x00033da0) scroll_pane_cp21

0x1116,	// (0x000287c0) form_midp_field_choice_group_pane

0xaa66,	// (0x00032110) form_midp_field_text_pane

0x115c,	// (0x00028806) form_midp_field_time_pane

0x1164,	// (0x0002880e) form_midp_gauge_slider_pane

0x116d,	// (0x00028817) form_midp_gauge_wait_pane

0xc1b2,	// (0x0003385c) form_midp_image_pane

0x8ad3,	// (0x0003017d) list_single_midp_pane_ParamLimits

0x8ad3,	// (0x0003017d) list_single_midp_pane

0xaa44,	// (0x000320ee) form_midp_field_text_pane_t1

0x0e0d,	// (0x000284b7) input_focus_pane_cp050

0x1105,	// (0x000287af) list_midp_form_text_pane

0x109a,	// (0x00028744) form_midp_field_choice_group_pane_t1

0x10a8,	// (0x00028752) input_focus_pane_cp051

0x10bc,	// (0x00028766) list_midp_choice_pane

0xc1b2,	// (0x0003385c) status_idle_pane

0x107e,	// (0x00028728) form_midp_field_time_pane_t1

0xc1a8,	// (0x00033852) wait_anim_pane_g2_copy1

0x108c,	// (0x00028736) form_midp_field_time_pane_t2

0x0001,

0xcebf,	// (0x00034569) aid_navinavi_width_2_pane

0xf7ec,	// (0x00036e96) form_midp_field_time_pane_t

0xc1b2,	// (0x0003385c) input_focus_pane_cp052

0xc1b2,	// (0x0003385c) bg_input_focus_pane_cp040

0x103e,	// (0x000286e8) form_midp_gauge_slider_pane_t1

0x104c,	// (0x000286f6) form_midp_gauge_slider_pane_t2

0xaa28,	// (0x000320d2) form_midp_gauge_slider_pane_t3

0xaa36,	// (0x000320e0) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e3,	// (0x00036e8d) form_midp_gauge_slider_pane_t

0x1076,	// (0x00028720) form_midp_slider_pane

0xc20e,	// (0x000338b8) bg_input_focus_pane_cp041_ParamLimits

0xc20e,	// (0x000338b8) bg_input_focus_pane_cp041

0x100b,	// (0x000286b5) form_midp_gauge_wait_pane_t1_ParamLimits

0x100b,	// (0x000286b5) form_midp_gauge_wait_pane_t1

0x101d,	// (0x000286c7) form_midp_gauge_wait_pane_t2_ParamLimits

0x101d,	// (0x000286c7) form_midp_gauge_wait_pane_t2

0x0001,

0xf7de,	// (0x00036e88) form_midp_gauge_wait_pane_t_ParamLimits

0xf7de,	// (0x00036e88) form_midp_gauge_wait_pane_t

0x102f,	// (0x000286d9) form_midp_wait_pane_ParamLimits

0x102f,	// (0x000286d9) form_midp_wait_pane

0xa9f2,	// (0x0003209c) form_midp_image_pane_g1

0xa9fb,	// (0x000320a5) form_midp_image_pane_t1

0xaa0a,	// (0x000320b4) form_midp_image_pane_t2

0xaa19,	// (0x000320c3) form_midp_image_pane_t3

0x0002,

0xf7d7,	// (0x00036e81) form_midp_image_pane_t

0x0fcc,	// (0x00028676) list_single_midp_pane_g1

0xeb25,	// (0x000361cf) list_single_midp_pane_t1

0xa9dd,	// (0x00032087) list_midp_form_item_pane_ParamLimits

0xa9dd,	// (0x00032087) list_midp_form_item_pane

0xce67,	// (0x00034511) list_midp_form_item_pane_t1

0xce76,	// (0x00034520) midp_ticker_pane_g1

0xce82,	// (0x0003452c) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x00036dce) midp_ticker_pane_g

0xce8e,	// (0x00034538) midp_ticker_pane_t1

0x36a7,	// (0x0002ad51) midp_editing_number_pane_t1

0x3685,	// (0x0002ad2f) midp_editing_number_pane

0x3694,	// (0x0002ad3e) midp_ticker_pane

0x344a,	// (0x0002aaf4) ai_message_heading_pane

0xc1b2,	// (0x0003385c) bg_popup_window_pane_cp14

0x3452,	// (0x0002aafc) listscroll_ai_message_pane

0x33d4,	// (0x0002aa7e) ai_message_heading_pane_g1_ParamLimits

0x33d4,	// (0x0002aa7e) ai_message_heading_pane_g1

0xafcd,	// (0x00032677) ai_message_heading_pane_g2_ParamLimits

0xafcd,	// (0x00032677) ai_message_heading_pane_g2

0x33ec,	// (0x0002aa96) ai_message_heading_pane_g3_ParamLimits

0x33ec,	// (0x0002aa96) ai_message_heading_pane_g3

0x33f8,	// (0x0002aaa2) ai_message_heading_pane_g4_ParamLimits

0x33f8,	// (0x0002aaa2) ai_message_heading_pane_g4

0x0003,

0xf918,	// (0x00036fc2) ai_message_heading_pane_g_ParamLimits

0xf918,	// (0x00036fc2) ai_message_heading_pane_g

0xafd9,	// (0x00032683) ai_message_heading_pane_t1_ParamLimits

0xafd9,	// (0x00032683) ai_message_heading_pane_t1

0xaff3,	// (0x0003269d) ai_message_heading_pane_t2_ParamLimits

0xaff3,	// (0x0003269d) ai_message_heading_pane_t2

0x0001,

0xf921,	// (0x00036fcb) ai_message_heading_pane_t_ParamLimits

0xf921,	// (0x00036fcb) ai_message_heading_pane_t

0x3430,	// (0x0002aada) bg_popup_heading_pane_cp1_ParamLimits

0x3430,	// (0x0002aada) bg_popup_heading_pane_cp1

0x33c2,	// (0x0002aa6c) list_ai_message_pane_ParamLimits

0x33c2,	// (0x0002aa6c) list_ai_message_pane

0xc6f6,	// (0x00033da0) scroll_pane_cp10

0x335e,	// (0x0002aa08) list_ai_message_pane_g1

0x3366,	// (0x0002aa10) list_ai_message_pane_g2

0x0001,

0xf8f5,	// (0x00036f9f) list_ai_message_pane_g

0x336e,	// (0x0002aa18) list_ai_message_pane_t1_ParamLimits

0x336e,	// (0x0002aa18) list_ai_message_pane_t1

0x3383,	// (0x0002aa2d) list_ai_message_pane_t2_ParamLimits

0x3383,	// (0x0002aa2d) list_ai_message_pane_t2

0x3398,	// (0x0002aa42) list_ai_message_pane_t3_ParamLimits

0x3398,	// (0x0002aa42) list_ai_message_pane_t3

0x33ad,	// (0x0002aa57) list_ai_message_pane_t4_ParamLimits

0x33ad,	// (0x0002aa57) list_ai_message_pane_t4

0x0003,

0xf8fa,	// (0x00036fa4) list_ai_message_pane_t_ParamLimits

0xf8fa,	// (0x00036fa4) list_ai_message_pane_t

0xaf59,	// (0x00032603) cell_ai_soft_ind_pane_ParamLimits

0xaf59,	// (0x00032603) cell_ai_soft_ind_pane

0xcea0,	// (0x0003454a) cell_ai_soft_ind_pane_g1_ParamLimits

0xcea0,	// (0x0003454a) cell_ai_soft_ind_pane_g1

0xc1b2,	// (0x0003385c) grid_highlight_cp1

0xcead,	// (0x00034557) text_secondary_cp56_ParamLimits

0xcead,	// (0x00034557) text_secondary_cp56

0x331e,	// (0x0002a9c8) example_general_pane_ParamLimits

0x331e,	// (0x0002a9c8) example_general_pane

0x332a,	// (0x0002a9d4) example_parent_pane_g1_ParamLimits

0x332a,	// (0x0002a9d4) example_parent_pane_g1

0x3336,	// (0x0002a9e0) example_parent_pane_t1_ParamLimits

0x3336,	// (0x0002a9e0) example_parent_pane_t1

0xa161,	// (0x0003180b) popup_preview_text_window_ParamLimits

0xa161,	// (0x0003180b) popup_preview_text_window

0xcdb6,	// (0x00034460) list_single_pane_cp2_g4

0xc3e0,	// (0x00033a8a) bg_popup_preview_window_pane_ParamLimits

0xc3e0,	// (0x00033a8a) bg_popup_preview_window_pane

0xaebb,	// (0x00032565) popup_preview_text_window_t1_ParamLimits

0xaebb,	// (0x00032565) popup_preview_text_window_t1

0x3096,	// (0x0002a740) popup_preview_text_window_t2_ParamLimits

0x3096,	// (0x0002a740) popup_preview_text_window_t2

0x30df,	// (0x0002a789) popup_preview_text_window_t3_ParamLimits

0x30df,	// (0x0002a789) popup_preview_text_window_t3

0x3124,	// (0x0002a7ce) popup_preview_text_window_t4_ParamLimits

0x3124,	// (0x0002a7ce) popup_preview_text_window_t4

0x0004,

0xf8c9,	// (0x00036f73) popup_preview_text_window_t_ParamLimits

0xf8c9,	// (0x00036f73) popup_preview_text_window_t

0x31a2,	// (0x0002a84c) scroll_pane_cp11

0x0d09,	// (0x000283b3) bg_popup_preview_window_pane_g1

0xae7b,	// (0x00032525) bg_popup_preview_window_pane_g2

0xae83,	// (0x0003252d) bg_popup_preview_window_pane_g3

0xae8b,	// (0x00032535) bg_popup_preview_window_pane_g4

0xae93,	// (0x0003253d) bg_popup_preview_window_pane_g5

0xae9b,	// (0x00032545) bg_popup_preview_window_pane_g6

0xaea3,	// (0x0003254d) bg_popup_preview_window_pane_g7

0xaeab,	// (0x00032555) bg_popup_preview_window_pane_g8

0xe65c,	// (0x00035d06) aid_popup_width_pane

0xa0dd,	// (0x00031787) popup_midp_note_alarm_window_ParamLimits

0xa0dd,	// (0x00031787) popup_midp_note_alarm_window

0xc5b8,	// (0x00033c62) data_form_pane_ParamLimits

0x88dc,	// (0x0002ff86) form_field_data_pane_g1

0x88e6,	// (0x0002ff90) form_field_data_pane_t1_ParamLimits

0xc5c4,	// (0x00033c6e) input_focus_pane_ParamLimits

0x8900,	// (0x0002ffaa) data_form_wide_pane_ParamLimits

0x8911,	// (0x0002ffbb) form_field_data_wide_pane_g1

0x891d,	// (0x0002ffc7) form_field_data_wide_pane_t1_ParamLimits

0xc4b8,	// (0x00033b62) input_focus_pane_cp6_ParamLimits

0x95f6,	// (0x00030ca0) input_popup_find_pane_g1_ParamLimits

0x95f6,	// (0x00030ca0) input_popup_find_pane_g1

0xf200,	// (0x000368aa) aid_navi_side_left_pane

0xf215,	// (0x000368bf) aid_navi_side_right_pane

0x2a61,	// (0x0002a10b) bg_popup_window_pane_cp30_ParamLimits

0x2a61,	// (0x0002a10b) bg_popup_window_pane_cp30

0x2adb,	// (0x0002a185) popup_midp_note_alarm_window_g1_ParamLimits

0x2adb,	// (0x0002a185) popup_midp_note_alarm_window_g1

0x2b0b,	// (0x0002a1b5) popup_midp_note_alarm_window_t1_ParamLimits

0x2b0b,	// (0x0002a1b5) popup_midp_note_alarm_window_t1

0xacbc,	// (0x00032366) popup_midp_note_alarm_window_t2_ParamLimits

0xacbc,	// (0x00032366) popup_midp_note_alarm_window_t2

0xad6a,	// (0x00032414) popup_midp_note_alarm_window_t3_ParamLimits

0xad6a,	// (0x00032414) popup_midp_note_alarm_window_t3

0xad92,	// (0x0003243c) popup_midp_note_alarm_window_t4_ParamLimits

0xad92,	// (0x0003243c) popup_midp_note_alarm_window_t4

0x2ca2,	// (0x0002a34c) popup_midp_note_alarm_window_t5_ParamLimits

0x2ca2,	// (0x0002a34c) popup_midp_note_alarm_window_t5

0x000a,

0xf866,	// (0x00036f10) popup_midp_note_alarm_window_t_ParamLimits

0xf866,	// (0x00036f10) popup_midp_note_alarm_window_t

0x2d4e,	// (0x0002a3f8) wait_bar_pane_cp1_ParamLimits

0x2d4e,	// (0x0002a3f8) wait_bar_pane_cp1

0xc1b2,	// (0x0003385c) wait_anim_pane_copy1

0xc1b2,	// (0x0003385c) wait_border_pane_copy1

0x1439,	// (0x00028ae3) wait_border_pane_g1_copy1

0x8937,	// (0x0002ffe1) form_field_popup_pane_g1

0x893f,	// (0x0002ffe9) form_field_popup_pane_t1_ParamLimits

0xc5c4,	// (0x00033c6e) input_focus_pane_cp7_ParamLimits

0xc5f2,	// (0x00033c9c) list_form_pane_ParamLimits

0x8959,	// (0x00030003) form_field_popup_wide_pane_g1

0x8961,	// (0x0003000b) form_field_popup_wide_pane_t1_ParamLimits

0xc5c4,	// (0x00033c6e) input_focus_pane_cp8_ParamLimits

0xc5fe,	// (0x00033ca8) list_form_wide_pane_ParamLimits

0x3840,	// (0x0002aeea) aid_size_cell_graphic_pane

0x89ed,	// (0x00030097) data_form_pane_t1_ParamLimits

0x8afd,	// (0x000301a7) data_form_wide_pane_t1_ParamLimits

0xa5a4,	// (0x00031c4e) bg_status_flat_pane

0x8fa5,	// (0x0003064f) title_pane_t1_ParamLimits

0xc1c8,	// (0x00033872) title_pane_t2_ParamLimits

0xc1ee,	// (0x00033898) title_pane_t3_ParamLimits

0xf532,	// (0x00036bdc) title_pane_t_ParamLimits

0xc9ab,	// (0x00034055) level_1_signal_ParamLimits

0xc9b8,	// (0x00034062) level_2_signal_ParamLimits

0xc9c5,	// (0x0003406f) level_3_signal_ParamLimits

0xc9d2,	// (0x0003407c) level_4_signal_ParamLimits

0xc9df,	// (0x00034089) level_5_signal_ParamLimits

0xc9ec,	// (0x00034096) level_6_signal_ParamLimits

0xc9f9,	// (0x000340a3) level_7_signal_ParamLimits

0xc9ab,	// (0x00034055) level_1_battery_ParamLimits

0xc9b8,	// (0x00034062) level_2_battery_ParamLimits

0xc9c5,	// (0x0003406f) level_3_battery_ParamLimits

0xc9d2,	// (0x0003407c) level_4_battery_ParamLimits

0xc9df,	// (0x00034089) level_5_battery_ParamLimits

0xc9ec,	// (0x00034096) level_6_battery_ParamLimits

0xc9f9,	// (0x000340a3) level_7_battery_ParamLimits

0x2966,	// (0x0002a010) bg_status_flat_pane_g1

0x296e,	// (0x0002a018) bg_status_flat_pane_g2

0x2976,	// (0x0002a020) bg_status_flat_pane_g3

0x297e,	// (0x0002a028) bg_status_flat_pane_g4

0x2986,	// (0x0002a030) bg_status_flat_pane_g5

0x298e,	// (0x0002a038) bg_status_flat_pane_g6

0x2996,	// (0x0002a040) bg_status_flat_pane_g7

0x9039,	// (0x000306e3) tabs_3_active_pane_t1_ParamLimits

0x9039,	// (0x000306e3) tabs_3_passive_pane_t1_ParamLimits

0x9053,	// (0x000306fd) tabs_4_active_pane_t1_ParamLimits

0x9053,	// (0x000306fd) tabs_4_1_passive_pane_t1_ParamLimits

0x9635,	// (0x00030cdf) tabs_2_active_pane_t1_ParamLimits

0x9635,	// (0x00030cdf) tabs_2_passive_pane_t1_ParamLimits

0xc20e,	// (0x000338b8) bg_active_tab_pane_cp4_ParamLimits

0x9647,	// (0x00030cf1) tabs_2_long_active_pane_t1_ParamLimits

0xc706,	// (0x00033db0) bg_passive_tab_pane_cp4_ParamLimits

0x0d9e,	// (0x00028448) list_single_midp_graphic_pane_t1_ParamLimits

0xc20e,	// (0x000338b8) bg_active_tab_pane_cp5_ParamLimits

0x965a,	// (0x00030d04) tabs_3_long_active_pane_t1_ParamLimits

0xc706,	// (0x00033db0) bg_passive_tab_pane_cp5_ParamLimits

0x0d9e,	// (0x00028448) list_single_midp_graphic_pane_t1

0xa5a4,	// (0x00031c4e) bg_status_flat_pane_ParamLimits

0x096c,	// (0x00028016) indicator_pane_cp2_ParamLimits

0x096c,	// (0x00028016) indicator_pane_cp2

0xa722,	// (0x00031dcc) navi_pane_srt_ParamLimits

0xa722,	// (0x00031dcc) navi_pane_srt

0x0abb,	// (0x00028165) popup_clock_digital_analogue_window_cp1

0xc252,	// (0x000338fc) indicator_pane_t1

0xce5f,	// (0x00034509) copy_highlight_pane

0xce5f,	// (0x00034509) cursor_graphics_pane

0xce5f,	// (0x00034509) graphic_within_text_pane

0xce5f,	// (0x00034509) link_highlight_pane

0x3165,	// (0x0002a80f) popup_preview_text_window_t5_ParamLimits

0x3165,	// (0x0002a80f) popup_preview_text_window_t5

0xcec7,	// (0x00034571) cursor_digital_pane

0xcec7,	// (0x00034571) cursor_primary_pane

0xced8,	// (0x00034582) cursor_primary_small_pane

0xcee0,	// (0x0003458a) cursor_secondary_pane

0xcee8,	// (0x00034592) cursor_title_pane

0xcec7,	// (0x00034571) link_highlight_digital_pane

0xcecf,	// (0x00034579) link_highlight_primary_pane

0xced8,	// (0x00034582) link_highlight_primary_small_pane

0xcee0,	// (0x0003458a) link_highlight_secondary_pane

0xcee8,	// (0x00034592) link_highlight_title_pane

0xcec7,	// (0x00034571) copy_highlight_digital_pane

0xcec7,	// (0x00034571) copy_highlight_primary_pane

0xced8,	// (0x00034582) copy_highlight_primary_small_pane

0xcee0,	// (0x0003458a) copy_highlight_secondary_pane

0xcee8,	// (0x00034592) copy_highlight_title_pane

0xcee0,	// (0x0003458a) graphic_text_digital_pane

0x2a04,	// (0x0002a0ae) graphic_text_primary_pane

0x2a0d,	// (0x0002a0b7) graphic_text_primary_small_pane

0xced8,	// (0x00034582) graphic_text_secondary_pane

0xcec7,	// (0x00034571) graphic_text_title_pane

0x9ace,	// (0x00031178) cursor_primary_pane_g1

0x29f6,	// (0x0002a0a0) cursor_text_primary_t1

0xacb2,	// (0x0003235c) cursor_primary_small_pane_g1

0x29e8,	// (0x0002a092) cursor_text_primary_small_t1

0xaca8,	// (0x00032352) cursor_primary_small_pane_g1_copy1

0x29d0,	// (0x0002a07a) cursor_text_primary_small_t1_copy1

0x29ae,	// (0x0002a058) cursor_text_title_t1

0xac9e,	// (0x00032348) cursor_title_pane_g1

0x9ace,	// (0x00031178) cursor_digital_pane_g1

0xcef0,	// (0x0003459a) cursor_text_digital_t1

0xcefe,	// (0x000345a8) link_highlight_primary_pane_g1

0x2957,	// (0x0002a001) link_highlight_primary_pane_t1

0xcefe,	// (0x000345a8) link_highlight_primary_small_pane_g1

0xcf06,	// (0x000345b0) link_highlight_primary_small_pane_t1

0xcefe,	// (0x000345a8) link_highlight_secondary_pane_g1

0xcf15,	// (0x000345bf) link_highlight_secondary_pane_t1

0x159e,	// (0x00028c48) link_highlight_title_pane_g1

0x28d3,	// (0x00029f7d) link_highlight_title_pane_t1

0x159e,	// (0x00028c48) link_highlight_digital_pane_g1

0x15a6,	// (0x00028c50) link_highlight_digital_pane_t1

0x1458,	// (0x00028b02) copy_highlight_primary_pane_g1

0x147e,	// (0x00028b28) copy_highlight_primary_pane_t1

0x1458,	// (0x00028b02) copy_highlight_primary_small_pane_g1

0x146f,	// (0x00028b19) copy_highlight_primary_small_pane_t1

0xcf24,	// (0x000345ce) copy_highlight_secondary_pane_g1

0xcf2c,	// (0x000345d6) copy_highlight_secondary_pane_t1

0x1458,	// (0x00028b02) copy_highlight_title_pane_g1

0x1460,	// (0x00028b0a) copy_highlight_title_pane_t1

0x1458,	// (0x00028b02) copy_highlight_digital_pane_g1

0x3a0e,	// (0x0002b0b8) copy_highlight_digital_pane_t1

0x3962,	// (0x0002b00c) graphic_text_primary_pane_g1

0x39f2,	// (0x0002b09c) graphic_text_primary_pane_t1

0x3a00,	// (0x0002b0aa) graphic_text_primary_pane_t2

0x0001,

0xf995,	// (0x0003703f) graphic_text_primary_pane_t

0x39ce,	// (0x0002b078) graphic_text_primary_small_pane_g1

0x39d6,	// (0x0002b080) graphic_text_primary_small_pane_t1

0x39e4,	// (0x0002b08e) graphic_text_primary_small_pane_t2

0x0001,

0xf990,	// (0x0003703a) graphic_text_primary_small_pane_t

0x39aa,	// (0x0002b054) graphic_text_secondary_pane_g1

0x39b2,	// (0x0002b05c) graphic_text_secondary_pane_t1

0x39c0,	// (0x0002b06a) graphic_text_secondary_pane_t2

0x0001,

0xf98b,	// (0x00037035) graphic_text_secondary_pane_t

0x3986,	// (0x0002b030) graphic_text_title_pane_g1

0x398e,	// (0x0002b038) graphic_text_title_pane_t1

0x399c,	// (0x0002b046) graphic_text_title_pane_t2

0x0001,

0xf986,	// (0x00037030) graphic_text_title_pane_t

0x3962,	// (0x0002b00c) graphic_text_digital_pane_g1

0x396a,	// (0x0002b014) graphic_text_digital_pane_t1

0x3978,	// (0x0002b022) graphic_text_digital_pane_t2

0x0001,

0xf981,	// (0x0003702b) graphic_text_digital_pane_t

0xc20e,	// (0x000338b8) navi_icon_pane_srt_ParamLimits

0xc20e,	// (0x000338b8) navi_icon_pane_srt

0xc1b2,	// (0x0003385c) navi_midp_pane_srt

0xc1b2,	// (0x0003385c) navi_navi_pane_srt

0xc20e,	// (0x000338b8) navi_text_pane_srt_ParamLimits

0xc20e,	// (0x000338b8) navi_text_pane_srt

0x392d,	// (0x0002afd7) navi_navi_icon_text_pane_srt

0x3935,	// (0x0002afdf) navi_navi_pane_srt_g1_ParamLimits

0x3935,	// (0x0002afdf) navi_navi_pane_srt_g1

0x3947,	// (0x0002aff1) navi_navi_pane_srt_g2_ParamLimits

0x3947,	// (0x0002aff1) navi_navi_pane_srt_g2

0x0001,

0xf97c,	// (0x00037026) navi_navi_pane_srt_g_ParamLimits

0xf97c,	// (0x00037026) navi_navi_pane_srt_g

0x3959,	// (0x0002b003) navi_navi_tabs_pane_srt

0x392d,	// (0x0002afd7) navi_navi_text_pane_srt

0x392d,	// (0x0002afd7) navi_navi_volume_pane_srt

0x391e,	// (0x0002afc8) navi_navi_text_pane_srt_t1

0x1882,	// (0x00028f2c) navi_navi_volume_pane_srt_g1

0x188a,	// (0x00028f34) volume_small_pane_srt_ParamLimits

0x188a,	// (0x00028f34) volume_small_pane_srt

0xf480,	// (0x00036b2a) volume_small_pane_srt_g1_ParamLimits

0xf480,	// (0x00036b2a) volume_small_pane_srt_g1

0xf490,	// (0x00036b3a) volume_small_pane_srt_g2_ParamLimits

0xf490,	// (0x00036b3a) volume_small_pane_srt_g2

0xf4a1,	// (0x00036b4b) volume_small_pane_srt_g3_ParamLimits

0xf4a1,	// (0x00036b4b) volume_small_pane_srt_g3

0xf4b2,	// (0x00036b5c) volume_small_pane_srt_g4_ParamLimits

0xf4b2,	// (0x00036b5c) volume_small_pane_srt_g4

0xf4c3,	// (0x00036b6d) volume_small_pane_srt_g5_ParamLimits

0xf4c3,	// (0x00036b6d) volume_small_pane_srt_g5

0xf4d4,	// (0x00036b7e) volume_small_pane_srt_g6_ParamLimits

0xf4d4,	// (0x00036b7e) volume_small_pane_srt_g6

0xf4e5,	// (0x00036b8f) volume_small_pane_srt_g7_ParamLimits

0xf4e5,	// (0x00036b8f) volume_small_pane_srt_g7

0xf4f6,	// (0x00036ba0) volume_small_pane_srt_g8_ParamLimits

0xf4f6,	// (0x00036ba0) volume_small_pane_srt_g8

0xf507,	// (0x00036bb1) volume_small_pane_srt_g9_ParamLimits

0xf507,	// (0x00036bb1) volume_small_pane_srt_g9

0xf518,	// (0x00036bc2) volume_small_pane_srt_g10_ParamLimits

0xf518,	// (0x00036bc2) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x00036dd3) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x00036dd3) volume_small_pane_srt_g

0x933a,	// (0x000309e4) query_popup_data_pane_cp2

0x3904,	// (0x0002afae) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3904,	// (0x0002afae) navi_navi_icon_text_pane_srt_t1

0x2a04,	// (0x0002a0ae) navi_tabs_2_long_pane_srt

0x2a04,	// (0x0002a0ae) navi_tabs_2_pane_srt

0x2a04,	// (0x0002a0ae) navi_tabs_3_long_pane_srt

0x2a04,	// (0x0002a0ae) navi_tabs_3_pane_srt

0x2a04,	// (0x0002a0ae) navi_tabs_4_pane_srt

0xb3ea,	// (0x00032a94) tabs_2_active_pane_srt_ParamLimits

0xb3ea,	// (0x00032a94) tabs_2_active_pane_srt

0xb3fa,	// (0x00032aa4) tabs_2_passive_pane_srt_ParamLimits

0xb3fa,	// (0x00032aa4) tabs_2_passive_pane_srt

0x0e0d,	// (0x000284b7) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0e0d,	// (0x000284b7) bg_passive_tab_pane_cp1_srt

0xb3ba,	// (0x00032a64) bg_passive_tab_pane_g1_cp1_srt

0x9916,	// (0x00030fc0) bg_passive_tab_pane_g2_cp1_srt

0xb3c3,	// (0x00032a6d) bg_passive_tab_pane_g3_cp1_srt

0xc200,	// (0x000338aa) bg_active_tab_pane_cp1_srt_ParamLimits

0xc200,	// (0x000338aa) bg_active_tab_pane_cp1_srt

0xb3cc,	// (0x00032a76) tabs_2_active_pane_srt_g1

0xb3d4,	// (0x00032a7e) tabs_2_active_pane_srt_t1_ParamLimits

0xb3d4,	// (0x00032a7e) tabs_2_active_pane_srt_t1

0xb3ba,	// (0x00032a64) bg_active_tab_pane_g1_cp1_srt

0x9916,	// (0x00030fc0) bg_active_tab_pane_g2_cp1_srt

0xb3c3,	// (0x00032a6d) bg_active_tab_pane_g3_cp1_srt

0xb387,	// (0x00032a31) tabs_3_active_pane_srt_ParamLimits

0xb387,	// (0x00032a31) tabs_3_active_pane_srt

0xb398,	// (0x00032a42) tabs_3_passive_pane_cp_srt_ParamLimits

0xb398,	// (0x00032a42) tabs_3_passive_pane_cp_srt

0xb3a9,	// (0x00032a53) tabs_3_passive_pane_srt_ParamLimits

0xb3a9,	// (0x00032a53) tabs_3_passive_pane_srt

0x0e0d,	// (0x000284b7) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0e0d,	// (0x000284b7) bg_passive_tab_pane_cp2_srt

0x9ad8,	// (0x00031182) bg_passive_tab_pane_g1_cp2_srt

0x9916,	// (0x00030fc0) bg_passive_tab_pane_g2_cp2_srt

0x9ae1,	// (0x0003118b) bg_passive_tab_pane_g3_cp2_srt

0xc200,	// (0x000338aa) bg_active_tab_pane_cp2_srt_ParamLimits

0xc200,	// (0x000338aa) bg_active_tab_pane_cp2_srt

0xb369,	// (0x00032a13) tabs_3_active_pane_srt_g1

0xb371,	// (0x00032a1b) tabs_3_active_pane_srt_t1_ParamLimits

0xb371,	// (0x00032a1b) tabs_3_active_pane_srt_t1

0x9ad8,	// (0x00031182) bg_active_tab_pane_g1_cp2_srt

0x9916,	// (0x00030fc0) bg_active_tab_pane_g2_cp2_srt

0x9ae1,	// (0x0003118b) bg_active_tab_pane_g3_cp2_srt

0x17e7,	// (0x00028e91) tabs_4_active_pane_srt_ParamLimits

0x17e7,	// (0x00028e91) tabs_4_active_pane_srt

0x17f9,	// (0x00028ea3) tabs_4_passive_pane_cp2_srt_ParamLimits

0x17f9,	// (0x00028ea3) tabs_4_passive_pane_cp2_srt

0x0233,	// (0x000278dd) aid_size_cell_toolbar

0x3502,	// (0x0002abac) main_idle_act_pane_ParamLimits

0x03ce,	// (0x00027a78) popup_large_graphic_colour_window_ParamLimits

0xa413,	// (0x00031abd) popup_toolbar_window_ParamLimits

0xa413,	// (0x00031abd) popup_toolbar_window

0x36b6,	// (0x0002ad60) list_single_graphic_2heading_pane_ParamLimits

0x36b6,	// (0x0002ad60) list_single_graphic_2heading_pane

0xc893,	// (0x00033f3d) aid_size_cell_apps_grid_lsc_pane

0xc8a5,	// (0x00033f4f) aid_size_cell_apps_grid_prt_pane

0xc706,	// (0x00033db0) bg_wml_button_pane_cp1_ParamLimits

0xc706,	// (0x00033db0) bg_wml_button_pane_cp1

0xaa44,	// (0x000320ee) form_midp_field_text_pane_t1_ParamLimits

0x0e0d,	// (0x000284b7) input_focus_pane_cp050_ParamLimits

0x1105,	// (0x000287af) list_midp_form_text_pane_ParamLimits

0x10a8,	// (0x00028752) input_focus_pane_cp051_ParamLimits

0x10bc,	// (0x00028766) list_midp_choice_pane_ParamLimits

0xa9a9,	// (0x00032053) list_single_2graphic_pane_cp3_ParamLimits

0xa9a9,	// (0x00032053) list_single_2graphic_pane_cp3

0xa9bd,	// (0x00032067) list_single_midp_graphic_pane_ParamLimits

0xa9bd,	// (0x00032067) list_single_midp_graphic_pane

0xea29,	// (0x000360d3) list_single_graphic_2heading_pane_g1_ParamLimits

0xea29,	// (0x000360d3) list_single_graphic_2heading_pane_g1

0xe806,	// (0x00035eb0) list_single_graphic_2heading_pane_g4_ParamLimits

0xe806,	// (0x00035eb0) list_single_graphic_2heading_pane_g4

0xe812,	// (0x00035ebc) list_single_graphic_2heading_pane_g5_ParamLimits

0xe812,	// (0x00035ebc) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x00036e26) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x00036e26) list_single_graphic_2heading_pane_g

0xea35,	// (0x000360df) list_single_graphic_2heading_pane_t1_ParamLimits

0xea35,	// (0x000360df) list_single_graphic_2heading_pane_t1

0xea49,	// (0x000360f3) list_single_graphic_2heading_pane_t2_ParamLimits

0xea49,	// (0x000360f3) list_single_graphic_2heading_pane_t2

0xea63,	// (0x0003610d) list_single_graphic_2heading_pane_t3_ParamLimits

0xea63,	// (0x0003610d) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x00036e2d) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x00036e2d) list_single_graphic_2heading_pane_t

0x0c17,	// (0x000282c1) bg_popup_sub_pane_cp2

0x0c41,	// (0x000282eb) grid_toobar_pane

0x0c7d,	// (0x00028327) cell_toolbar_pane_ParamLimits

0x0c7d,	// (0x00028327) cell_toolbar_pane

0x0cad,	// (0x00028357) cell_toolbar_pane_g1_ParamLimits

0x0cad,	// (0x00028357) cell_toolbar_pane_g1

0xa8c1,	// (0x00031f6b) cell_toolbar_pane_g2_ParamLimits

0xa8c1,	// (0x00031f6b) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x00036e3b) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x00036e3b) cell_toolbar_pane_g

0x0ce3,	// (0x0002838d) grid_highlight_pane_cp2_ParamLimits

0x0ce3,	// (0x0002838d) grid_highlight_pane_cp2

0x0cfd,	// (0x000283a7) toolbar_button_pane

0x0d09,	// (0x000283b3) toolbar_button_pane_g1

0x0d11,	// (0x000283bb) toolbar_button_pane_g2

0x0d19,	// (0x000283c3) toolbar_button_pane_g3

0x0d21,	// (0x000283cb) toolbar_button_pane_g4

0x0d29,	// (0x000283d3) toolbar_button_pane_g5

0x0d31,	// (0x000283db) toolbar_button_pane_g6

0x0d39,	// (0x000283e3) toolbar_button_pane_g7

0x0d41,	// (0x000283eb) toolbar_button_pane_g8

0x0d49,	// (0x000283f3) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x00036e40) toolbar_button_pane_g

0x0d59,	// (0x00028403) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0d59,	// (0x00028403) list_single_2graphic_pane_g1_cp3

0xa8d5,	// (0x00031f7f) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa8d5,	// (0x00031f7f) list_single_2graphic_pane_g2_cp3

0xccd5,	// (0x0003437f) list_single_2graphic_pane_g3_cp3

0x0d76,	// (0x00028420) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0d76,	// (0x00028420) list_single_2graphic_pane_g4_cp3

0xa8e6,	// (0x00031f90) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa8e6,	// (0x00031f90) list_single_2graphic_pane_t1_cp3

0xccc9,	// (0x00034373) list_single_midp_graphic_pane_g2_ParamLimits

0xccc9,	// (0x00034373) list_single_midp_graphic_pane_g2

0x023b,	// (0x000278e5) aid_zoom_text_primary

0xea19,	// (0x000360c3) aid_zoom_text_secondary

0x9b38,	// (0x000311e2) status_small_pane_g7_ParamLimits

0x9b38,	// (0x000311e2) status_small_pane_g7

0x9b5b,	// (0x00031205) status_small_pane_t1_ParamLimits

0x8f81,	// (0x0003062b) title_pane_g2

0x0003,

0xf529,	// (0x00036bd3) title_pane_g

0x9394,	// (0x00030a3e) aid_size_cell_colour_1_pane_ParamLimits

0x9394,	// (0x00030a3e) aid_size_cell_colour_1_pane

0x93a8,	// (0x00030a52) aid_size_cell_colour_2_pane_ParamLimits

0x93a8,	// (0x00030a52) aid_size_cell_colour_2_pane

0x93bc,	// (0x00030a66) aid_size_cell_colour_3_pane_ParamLimits

0x93bc,	// (0x00030a66) aid_size_cell_colour_3_pane

0x93d0,	// (0x00030a7a) aid_size_cell_colour_4_pane_ParamLimits

0x93d0,	// (0x00030a7a) aid_size_cell_colour_4_pane

0xf13d,	// (0x000367e7) title_pane_stacon_g1_ParamLimits

0xf13d,	// (0x000367e7) title_pane_stacon_g1

0x14d5,	// (0x00028b7f) popup_note_wait_window_g3_ParamLimits

0x14d5,	// (0x00028b7f) popup_note_wait_window_g3

0x154b,	// (0x00028bf5) popup_note_wait_window_t5_ParamLimits

0x154b,	// (0x00028bf5) popup_note_wait_window_t5

0xc1b2,	// (0x0003385c) main_feb_china_hwr_fs_writing_pane

0x9dc7,	// (0x00031471) popup_feb_china_hwr_fs_window_ParamLimits

0x9dc7,	// (0x00031471) popup_feb_china_hwr_fs_window

0xa902,	// (0x00031fac) aid_size_cell_hwr_fs_ParamLimits

0xa902,	// (0x00031fac) aid_size_cell_hwr_fs

0x0e0d,	// (0x000284b7) bg_popup_sub_pane_cp3_ParamLimits

0x0e0d,	// (0x000284b7) bg_popup_sub_pane_cp3

0xa917,	// (0x00031fc1) grid_hwr_fs_pane_ParamLimits

0xa917,	// (0x00031fc1) grid_hwr_fs_pane

0x0e31,	// (0x000284db) linegrid_hwr_fs_pane_ParamLimits

0x0e31,	// (0x000284db) linegrid_hwr_fs_pane

0xa92f,	// (0x00031fd9) cell_hwr_fs_pane_ParamLimits

0xa92f,	// (0x00031fd9) cell_hwr_fs_pane

0x0e63,	// (0x0002850d) linegrid_hwr_fs_pane_g1_ParamLimits

0x0e63,	// (0x0002850d) linegrid_hwr_fs_pane_g1

0xa955,	// (0x00031fff) linegrid_hwr_fs_pane_g2_ParamLimits

0xa955,	// (0x00031fff) linegrid_hwr_fs_pane_g2

0x0e81,	// (0x0002852b) linegrid_hwr_fs_pane_g3_ParamLimits

0x0e81,	// (0x0002852b) linegrid_hwr_fs_pane_g3

0xa967,	// (0x00032011) linegrid_hwr_fs_pane_g4_ParamLimits

0xa967,	// (0x00032011) linegrid_hwr_fs_pane_g4

0x0ea7,	// (0x00028551) linegrid_hwr_fs_pane_g5_ParamLimits

0x0ea7,	// (0x00028551) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bc,	// (0x00036e66) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bc,	// (0x00036e66) linegrid_hwr_fs_pane_g

0x0ebd,	// (0x00028567) cell_hwr_fs_pane_g1_ParamLimits

0x0ebd,	// (0x00028567) cell_hwr_fs_pane_g1

0x0b51,	// (0x000281fb) cell_hwr_fs_pane_g2_ParamLimits

0x0b51,	// (0x000281fb) cell_hwr_fs_pane_g2

0xa981,	// (0x0003202b) cell_hwr_fs_pane_g3_ParamLimits

0xa981,	// (0x0003202b) cell_hwr_fs_pane_g3

0xa98e,	// (0x00032038) cell_hwr_fs_pane_g4_ParamLimits

0xa98e,	// (0x00032038) cell_hwr_fs_pane_g4

0x0003,

0xf7c7,	// (0x00036e71) cell_hwr_fs_pane_g_ParamLimits

0xf7c7,	// (0x00036e71) cell_hwr_fs_pane_g

0xa99b,	// (0x00032045) cell_hwr_fs_pane_t1

0xc1b2,	// (0x0003385c) grid_highlight_pane_cp6

0xc1b2,	// (0x0003385c) main_idle_act2_pane

0xc6dd,	// (0x00033d87) aid_inside_area_popup_secondary

0xadd1,	// (0x0003247b) aid_inside_area_window_primary_ParamLimits

0xadd1,	// (0x0003247b) aid_inside_area_window_primary

0xb412,	// (0x00032abc) ai2_news_ticker_pane

0x3a25,	// (0x0002b0cf) aid_size_cell_ai1_link_ParamLimits

0x3a25,	// (0x0002b0cf) aid_size_cell_ai1_link

0xb41a,	// (0x00032ac4) popup_ai2_data_window_ParamLimits

0xb41a,	// (0x00032ac4) popup_ai2_data_window

0x3a55,	// (0x0002b0ff) popup_ai2_link_window_ParamLimits

0x3a55,	// (0x0002b0ff) popup_ai2_link_window

0x0e0d,	// (0x000284b7) bg_popup_sub_pane_cp4_ParamLimits

0x0e0d,	// (0x000284b7) bg_popup_sub_pane_cp4

0x3a69,	// (0x0002b113) grid_ai2_link_pane_ParamLimits

0x3a69,	// (0x0002b113) grid_ai2_link_pane

0x3a80,	// (0x0002b12a) popup_ai2_link_window_g1_ParamLimits

0x3a80,	// (0x0002b12a) popup_ai2_link_window_g1

0x3a8c,	// (0x0002b136) popup_ai2_link_window_g2_ParamLimits

0x3a8c,	// (0x0002b136) popup_ai2_link_window_g2

0x0001,

0xf99a,	// (0x00037044) popup_ai2_link_window_g_ParamLimits

0xf99a,	// (0x00037044) popup_ai2_link_window_g

0x3a9b,	// (0x0002b145) ai2_mp_button_pane

0x3aa3,	// (0x0002b14d) ai2_mp_volume_pane

0x10a8,	// (0x00028752) bg_popup_sub_pane_cp5_ParamLimits

0x10a8,	// (0x00028752) bg_popup_sub_pane_cp5

0x3aab,	// (0x0002b155) heading_ai2_gene_pane_ParamLimits

0x3aab,	// (0x0002b155) heading_ai2_gene_pane

0x3ab7,	// (0x0002b161) list_ai2_gene_pane_ParamLimits

0x3ab7,	// (0x0002b161) list_ai2_gene_pane

0x3aff,	// (0x0002b1a9) cell_ai2_link_pane_ParamLimits

0x3aff,	// (0x0002b1a9) cell_ai2_link_pane

0x3b15,	// (0x0002b1bf) cell_ai2_link_pane_g1

0xc1b2,	// (0x0003385c) grid_highlight_pane_cp7

0x189f,	// (0x00028f49) ai2_mp_volume_pane_g1

0x3be5,	// (0x0002b28f) ai2_mp_volume_pane_g2

0x3b5a,	// (0x0002b204) list_ai2_gene_pane_t1

0x3bed,	// (0x0002b297) ai2_mp_volume_pane_g3

0x0002,

0xf9b3,	// (0x0003705d) ai2_mp_volume_pane_g

0xb430,	// (0x00032ada) volume_small_pane_cp3

0x3bf5,	// (0x0002b29f) aid_size_cell_ai2_button

0x3bfd,	// (0x0002b2a7) grid_ai2_button_pane

0x3c06,	// (0x0002b2b0) cell_ai2_button_pane_ParamLimits

0x3c06,	// (0x0002b2b0) cell_ai2_button_pane

0xc1a8,	// (0x00033852) cell_ai2_button_pane_g1

0xc1b2,	// (0x0003385c) grid_highlight_pane_cp8

0x3ba5,	// (0x0002b24f) ai2_gene_pane_t1_ParamLimits

0x3ba5,	// (0x0002b24f) ai2_gene_pane_t1

0x9d29,	// (0x000313d3) aid_height_parent_landscape

0xb0e3,	// (0x0003278d) aid_height_set_list

0x3502,	// (0x0002abac) aid_size_parent

0x3840,	// (0x0002aeea) aid_size_cell_graphic_pane_ParamLimits

0x3ac7,	// (0x0002b171) popup_ai2_data_window_g1_ParamLimits

0x3ac7,	// (0x0002b171) popup_ai2_data_window_g1

0x3ad3,	// (0x0002b17d) ai2_news_ticker_pane_g1

0x3adb,	// (0x0002b185) ai2_news_ticker_pane_g2

0x0001,

0xf99f,	// (0x00037049) ai2_news_ticker_pane_g

0x3ae3,	// (0x0002b18d) ai2_news_ticker_pane_t1

0x3af1,	// (0x0002b19b) ai2_news_ticker_pane_t2

0x0001,

0xf9a4,	// (0x0003704e) ai2_news_ticker_pane_t

0x3b1e,	// (0x0002b1c8) heading_ai2_gene_pane_g1

0x3b26,	// (0x0002b1d0) heading_ai2_gene_pane_t1_ParamLimits

0x3b26,	// (0x0002b1d0) heading_ai2_gene_pane_t1

0x3b3b,	// (0x0002b1e5) list_highlight_pane_cp6

0x3b43,	// (0x0002b1ed) ai2_gene_pane_ParamLimits

0x3b43,	// (0x0002b1ed) ai2_gene_pane

0x3b68,	// (0x0002b212) list_ai2_gene_pane_t2

0x0001,

0xf9a9,	// (0x00037053) list_ai2_gene_pane_t

0x3b76,	// (0x0002b220) list_highlight_pane_cp8_ParamLimits

0x3b76,	// (0x0002b220) list_highlight_pane_cp8

0x3b87,	// (0x0002b231) ai2_gene_pane_g1_ParamLimits

0x3b87,	// (0x0002b231) ai2_gene_pane_g1

0x3b99,	// (0x0002b243) ai2_gene_pane_g2_ParamLimits

0x3b99,	// (0x0002b243) ai2_gene_pane_g2

0x0001,

0xf9ae,	// (0x00037058) ai2_gene_pane_g_ParamLimits

0xf9ae,	// (0x00037058) ai2_gene_pane_g

0xc563,	// (0x00033c0d) scroll_pane_cp12

0x9ce6,	// (0x00031390) control_pane_t3_ParamLimits

0x9ce6,	// (0x00031390) control_pane_t3

0x9b4c,	// (0x000311f6) status_small_pane_g8_ParamLimits

0x9b4c,	// (0x000311f6) status_small_pane_g8

0x9e8a,	// (0x00031534) popup_find_window_ParamLimits

0xa117,	// (0x000317c1) popup_note_image_window_ParamLimits

0xe7fa,	// (0x00035ea4) list_double2_graphic_pane_vc_g1_ParamLimits

0xe7fa,	// (0x00035ea4) list_double2_graphic_pane_vc_g1

0xea7b,	// (0x00036125) list_double2_graphic_pane_vc_g2_ParamLimits

0xea7b,	// (0x00036125) list_double2_graphic_pane_vc_g2

0xea87,	// (0x00036131) list_double2_graphic_pane_vc_g3_ParamLimits

0xea87,	// (0x00036131) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x00036e34) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x00036e34) list_double2_graphic_pane_vc_g

0xe81e,	// (0x00035ec8) list_double2_graphic_pane_vc_t1_ParamLimits

0xe81e,	// (0x00035ec8) list_double2_graphic_pane_vc_t1

0xe806,	// (0x00035eb0) list_single_heading_pane_vc_g1_ParamLimits

0xe806,	// (0x00035eb0) list_single_heading_pane_vc_g1

0xe812,	// (0x00035ebc) list_single_heading_pane_vc_g2_ParamLimits

0xe812,	// (0x00035ebc) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036c4d) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036c4d) list_single_heading_pane_vc_g

0xea93,	// (0x0003613d) list_single_heading_pane_vc_t1_ParamLimits

0xea93,	// (0x0003613d) list_single_heading_pane_vc_t1

0xeaa9,	// (0x00036153) list_single_heading_pane_vc_t2_ParamLimits

0xeaa9,	// (0x00036153) list_single_heading_pane_vc_t2

0x0001,

0xf7ab,	// (0x00036e55) list_single_heading_pane_vc_t_ParamLimits

0xf7ab,	// (0x00036e55) list_single_heading_pane_vc_t

0x0db4,	// (0x0002845e) list_setting_number_pane_vc_g1_ParamLimits

0x0db4,	// (0x0002845e) list_setting_number_pane_vc_g1

0x0dc0,	// (0x0002846a) list_setting_number_pane_vc_g2_ParamLimits

0x0dc0,	// (0x0002846a) list_setting_number_pane_vc_g2

0x0001,

0xf7b0,	// (0x00036e5a) list_setting_number_pane_vc_g_ParamLimits

0xf7b0,	// (0x00036e5a) list_setting_number_pane_vc_g

0xeabb,	// (0x00036165) list_setting_number_pane_vc_t1_ParamLimits

0xeabb,	// (0x00036165) list_setting_number_pane_vc_t1

0xeacf,	// (0x00036179) list_setting_number_pane_vc_t2_ParamLimits

0xeacf,	// (0x00036179) list_setting_number_pane_vc_t2

0xeaeb,	// (0x00036195) list_setting_number_pane_vc_t3_ParamLimits

0xeaeb,	// (0x00036195) list_setting_number_pane_vc_t3

0x0002,

0xf7b5,	// (0x00036e5f) list_setting_number_pane_vc_t_ParamLimits

0xf7b5,	// (0x00036e5f) list_setting_number_pane_vc_t

0xeb15,	// (0x000361bf) set_value_pane_vc_ParamLimits

0xeb15,	// (0x000361bf) set_value_pane_vc

0x36b6,	// (0x0002ad60) list_double2_graphic_pane_vc_ParamLimits

0x36b6,	// (0x0002ad60) list_double2_graphic_pane_vc

0x36b6,	// (0x0002ad60) list_double2_large_graphic_pane_vc_ParamLimits

0x36b6,	// (0x0002ad60) list_double2_large_graphic_pane_vc

0x36b6,	// (0x0002ad60) list_double2_pane_vc_ParamLimits

0x36b6,	// (0x0002ad60) list_double2_pane_vc

0x36b6,	// (0x0002ad60) list_double_graphic_heading_pane_vc_ParamLimits

0x36b6,	// (0x0002ad60) list_double_graphic_heading_pane_vc

0x36b6,	// (0x0002ad60) list_double_graphic_pane_vc_ParamLimits

0x36b6,	// (0x0002ad60) list_double_graphic_pane_vc

0x36b6,	// (0x0002ad60) list_double_heading_pane_vc_ParamLimits

0x36b6,	// (0x0002ad60) list_double_heading_pane_vc

0xeb34,	// (0x000361de) list_double_large_graphic_pane_vc_ParamLimits

0xeb34,	// (0x000361de) list_double_large_graphic_pane_vc

0x36b6,	// (0x0002ad60) list_double_number_pane_vc_ParamLimits

0x36b6,	// (0x0002ad60) list_double_number_pane_vc

0x36b6,	// (0x0002ad60) list_double_pane_vc_ParamLimits

0x36b6,	// (0x0002ad60) list_double_pane_vc

0x36b6,	// (0x0002ad60) list_double_time_pane_vc_ParamLimits

0x36b6,	// (0x0002ad60) list_double_time_pane_vc

0x36b6,	// (0x0002ad60) list_setting_number_pane_vc_ParamLimits

0x36b6,	// (0x0002ad60) list_setting_number_pane_vc

0x36b6,	// (0x0002ad60) list_setting_pane_vc_ParamLimits

0x36b6,	// (0x0002ad60) list_setting_pane_vc

0x36b6,	// (0x0002ad60) list_single_graphic_heading_pane_vc_ParamLimits

0x36b6,	// (0x0002ad60) list_single_graphic_heading_pane_vc

0x36b6,	// (0x0002ad60) list_single_heading_pane_vc_ParamLimits

0x36b6,	// (0x0002ad60) list_single_heading_pane_vc

0x36b6,	// (0x0002ad60) list_single_number_heading_pane_vc_ParamLimits

0x36b6,	// (0x0002ad60) list_single_number_heading_pane_vc

0xe880,	// (0x00035f2a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe880,	// (0x00035f2a) list_double_graphic_heading_pane_vc_g1

0xea7b,	// (0x00036125) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xea7b,	// (0x00036125) list_double_graphic_heading_pane_vc_g2

0xea87,	// (0x00036131) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xea87,	// (0x00036131) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ba,	// (0x00037064) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ba,	// (0x00037064) list_double_graphic_heading_pane_vc_g

0xeb53,	// (0x000361fd) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeb53,	// (0x000361fd) list_double_graphic_heading_pane_vc_t1

0xeb67,	// (0x00036211) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeb67,	// (0x00036211) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c1,	// (0x0003706b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c1,	// (0x0003706b) list_double_graphic_heading_pane_vc_t

0x0db4,	// (0x0002845e) list_setting_pane_vc_g1_ParamLimits

0x0db4,	// (0x0002845e) list_setting_pane_vc_g1

0x0dc0,	// (0x0002846a) list_setting_pane_vc_g2_ParamLimits

0x0dc0,	// (0x0002846a) list_setting_pane_vc_g2

0x0001,

0xf7b0,	// (0x00036e5a) list_setting_pane_vc_g_ParamLimits

0xf7b0,	// (0x00036e5a) list_setting_pane_vc_g

0xeb7f,	// (0x00036229) list_setting_pane_vc_t1_ParamLimits

0xeb7f,	// (0x00036229) list_setting_pane_vc_t1

0xeb9b,	// (0x00036245) list_setting_pane_vc_t2_ParamLimits

0xeb9b,	// (0x00036245) list_setting_pane_vc_t2

0x0001,

0xfa04,	// (0x000370ae) list_setting_pane_vc_t_ParamLimits

0xfa04,	// (0x000370ae) list_setting_pane_vc_t

0xeb15,	// (0x000361bf) set_value_pane_cp_vc_ParamLimits

0xeb15,	// (0x000361bf) set_value_pane_cp_vc

0xe806,	// (0x00035eb0) list_single_number_heading_pane_vc_g1_ParamLimits

0xe806,	// (0x00035eb0) list_single_number_heading_pane_vc_g1

0xe812,	// (0x00035ebc) list_single_number_heading_pane_vc_g2_ParamLimits

0xe812,	// (0x00035ebc) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036c4d) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036c4d) list_single_number_heading_pane_vc_g

0xebb5,	// (0x0003625f) list_single_number_heading_pane_vc_t1_ParamLimits

0xebb5,	// (0x0003625f) list_single_number_heading_pane_vc_t1

0xebcb,	// (0x00036275) list_single_number_heading_pane_vc_t2_ParamLimits

0xebcb,	// (0x00036275) list_single_number_heading_pane_vc_t2

0xebdd,	// (0x00036287) list_single_number_heading_pane_vc_t3_ParamLimits

0xebdd,	// (0x00036287) list_single_number_heading_pane_vc_t3

0x0002,

0xfa09,	// (0x000370b3) list_single_number_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x000370b3) list_single_number_heading_pane_vc_t

0xebef,	// (0x00036299) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xebef,	// (0x00036299) list_single_graphic_heading_pane_vc_g1

0xe806,	// (0x00035eb0) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe806,	// (0x00035eb0) list_single_graphic_heading_pane_vc_g4

0xe812,	// (0x00035ebc) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe812,	// (0x00035ebc) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa10,	// (0x000370ba) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa10,	// (0x000370ba) list_single_graphic_heading_pane_vc_g

0xebfb,	// (0x000362a5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xebfb,	// (0x000362a5) list_single_graphic_heading_pane_vc_t1

0xec11,	// (0x000362bb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xec11,	// (0x000362bb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa17,	// (0x000370c1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa17,	// (0x000370c1) list_single_graphic_heading_pane_vc_t

0xe806,	// (0x00035eb0) list_double2_pane_vc_g1_ParamLimits

0xe806,	// (0x00035eb0) list_double2_pane_vc_g1

0xe812,	// (0x00035ebc) list_double2_pane_vc_g2_ParamLimits

0xe812,	// (0x00035ebc) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036c4d) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036c4d) list_double2_pane_vc_g

0xec23,	// (0x000362cd) list_double2_pane_vc_t1_ParamLimits

0xec23,	// (0x000362cd) list_double2_pane_vc_t1

0xe88c,	// (0x00035f36) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe88c,	// (0x00035f36) list_double2_large_graphic_pane_vc_g1

0xe806,	// (0x00035eb0) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe806,	// (0x00035eb0) list_double2_large_graphic_pane_vc_g2

0xe812,	// (0x00035ebc) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe812,	// (0x00035ebc) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00036c6a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00036c6a) list_double2_large_graphic_pane_vc_g

0xe81e,	// (0x00035ec8) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe81e,	// (0x00035ec8) list_double2_large_graphic_pane_vc_t1

0xec3b,	// (0x000362e5) list_double_time_pane_vc_g1_ParamLimits

0xec3b,	// (0x000362e5) list_double_time_pane_vc_g1

0xec47,	// (0x000362f1) list_double_time_pane_vc_g2_ParamLimits

0xec47,	// (0x000362f1) list_double_time_pane_vc_g2

0x0001,

0xfa1c,	// (0x000370c6) list_double_time_pane_vc_g_ParamLimits

0xfa1c,	// (0x000370c6) list_double_time_pane_vc_g

0xec53,	// (0x000362fd) list_double_time_pane_vc_t1_ParamLimits

0xec53,	// (0x000362fd) list_double_time_pane_vc_t1

0xec77,	// (0x00036321) list_double_time_pane_vc_t2_ParamLimits

0xec77,	// (0x00036321) list_double_time_pane_vc_t2

0xecc6,	// (0x00036370) list_double_time_pane_vc_t3_ParamLimits

0xecc6,	// (0x00036370) list_double_time_pane_vc_t3

0xecd8,	// (0x00036382) list_double_time_pane_vc_t4_ParamLimits

0xecd8,	// (0x00036382) list_double_time_pane_vc_t4

0x0003,

0xfa21,	// (0x000370cb) list_double_time_pane_vc_t_ParamLimits

0xfa21,	// (0x000370cb) list_double_time_pane_vc_t

0xe806,	// (0x00035eb0) list_double_pane_vc_g1_ParamLimits

0xe806,	// (0x00035eb0) list_double_pane_vc_g1

0xe812,	// (0x00035ebc) list_double_pane_vc_g2_ParamLimits

0xe812,	// (0x00035ebc) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036c4d) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036c4d) list_double_pane_vc_g

0xecec,	// (0x00036396) list_double_pane_vc_t1_ParamLimits

0xecec,	// (0x00036396) list_double_pane_vc_t1

0xed00,	// (0x000363aa) list_double_pane_vc_t2_ParamLimits

0xed00,	// (0x000363aa) list_double_pane_vc_t2

0x0001,

0xfa2a,	// (0x000370d4) list_double_pane_vc_t_ParamLimits

0xfa2a,	// (0x000370d4) list_double_pane_vc_t

0xe806,	// (0x00035eb0) list_double_number_pane_vc_g1_ParamLimits

0xe806,	// (0x00035eb0) list_double_number_pane_vc_g1

0xe812,	// (0x00035ebc) list_double_number_pane_vc_g2_ParamLimits

0xe812,	// (0x00035ebc) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036c4d) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036c4d) list_double_number_pane_vc_g

0xed18,	// (0x000363c2) list_double_number_pane_vc_t1_ParamLimits

0xed18,	// (0x000363c2) list_double_number_pane_vc_t1

0xecec,	// (0x00036396) list_double_number_pane_vc_t2_ParamLimits

0xecec,	// (0x00036396) list_double_number_pane_vc_t2

0xed2a,	// (0x000363d4) list_double_number_pane_vc_t3_ParamLimits

0xed2a,	// (0x000363d4) list_double_number_pane_vc_t3

0x0002,

0xfa2f,	// (0x000370d9) list_double_number_pane_vc_t_ParamLimits

0xfa2f,	// (0x000370d9) list_double_number_pane_vc_t

0xed42,	// (0x000363ec) list_double_large_graphic_pane_vc_g1_ParamLimits

0xed42,	// (0x000363ec) list_double_large_graphic_pane_vc_g1

0xed5e,	// (0x00036408) list_double_large_graphic_pane_vc_g2_ParamLimits

0xed5e,	// (0x00036408) list_double_large_graphic_pane_vc_g2

0xed72,	// (0x0003641c) list_double_large_graphic_pane_vc_g3_ParamLimits

0xed72,	// (0x0003641c) list_double_large_graphic_pane_vc_g3

0xed81,	// (0x0003642b) list_double_large_graphic_pane_vc_g4_ParamLimits

0xed81,	// (0x0003642b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa36,	// (0x000370e0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x000370e0) list_double_large_graphic_pane_vc_g

0xed8d,	// (0x00036437) list_double_large_graphic_pane_vc_t1_ParamLimits

0xed8d,	// (0x00036437) list_double_large_graphic_pane_vc_t1

0xeda9,	// (0x00036453) list_double_large_graphic_pane_vc_t2_ParamLimits

0xeda9,	// (0x00036453) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3f,	// (0x000370e9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3f,	// (0x000370e9) list_double_large_graphic_pane_vc_t

0xea7b,	// (0x00036125) list_double_heading_pane_vc_g1_ParamLimits

0xea7b,	// (0x00036125) list_double_heading_pane_vc_g1

0xea87,	// (0x00036131) list_double_heading_pane_vc_g2_ParamLimits

0xea87,	// (0x00036131) list_double_heading_pane_vc_g2

0x0001,

0xfa44,	// (0x000370ee) list_double_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x000370ee) list_double_heading_pane_vc_g

0xedcb,	// (0x00036475) list_double_heading_pane_vc_t1_ParamLimits

0xedcb,	// (0x00036475) list_double_heading_pane_vc_t1

0xeddf,	// (0x00036489) list_double_heading_pane_vc_t2_ParamLimits

0xeddf,	// (0x00036489) list_double_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x000370f3) list_double_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x000370f3) list_double_heading_pane_vc_t

0xedf7,	// (0x000364a1) list_double_graphic_pane_vc_g1_ParamLimits

0xedf7,	// (0x000364a1) list_double_graphic_pane_vc_g1

0xee0a,	// (0x000364b4) list_double_graphic_pane_vc_g2_ParamLimits

0xee0a,	// (0x000364b4) list_double_graphic_pane_vc_g2

0xe806,	// (0x00035eb0) list_double_graphic_pane_vc_g3_ParamLimits

0xe806,	// (0x00035eb0) list_double_graphic_pane_vc_g3

0x0003,

0xfa4e,	// (0x000370f8) list_double_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x000370f8) list_double_graphic_pane_vc_g

0xee27,	// (0x000364d1) list_double_graphic_pane_vc_t1_ParamLimits

0xee27,	// (0x000364d1) list_double_graphic_pane_vc_t1

0xee46,	// (0x000364f0) list_double_graphic_pane_vc_t2_ParamLimits

0xee46,	// (0x000364f0) list_double_graphic_pane_vc_t2

0x0001,

0xfa57,	// (0x00037101) list_double_graphic_pane_vc_t_ParamLimits

0xfa57,	// (0x00037101) list_double_graphic_pane_vc_t

0xe668,	// (0x00035d12) aid_size_cell_fastswap

0x8d48,	// (0x000303f2) aid_size_cell_touch_ParamLimits

0x8d48,	// (0x000303f2) aid_size_cell_touch

0xe7bf,	// (0x00035e69) popup_fast_swap_wide_window_ParamLimits

0xe7bf,	// (0x00035e69) popup_fast_swap_wide_window

0x8f18,	// (0x000305c2) touch_pane_ParamLimits

0x8f18,	// (0x000305c2) touch_pane

0xc5b0,	// (0x00033c5a) button_value_adjust_pane_cp2

0xe9c2,	// (0x0003606c) button_value_adjust_pane_cp4

0xe9ca,	// (0x00036074) form_field_data_pane_cp2

0x888a,	// (0x0002ff34) form_field_data_wide_pane_cp2

0xc8ca,	// (0x00033f74) bg_scroll_pane_ParamLimits

0x975c,	// (0x00030e06) scroll_handle_pane_ParamLimits

0xf296,	// (0x00036940) scroll_sc2_down_pane_ParamLimits

0xf296,	// (0x00036940) scroll_sc2_down_pane

0xc8fb,	// (0x00033fa5) scroll_sc2_up_pane_ParamLimits

0xc8fb,	// (0x00033fa5) scroll_sc2_up_pane

0xb56c,	// (0x00032c16) grid_wheel_folder_pane_g1_ParamLimits

0xb56c,	// (0x00032c16) grid_wheel_folder_pane_g1

0xf418,	// (0x00036ac2) clock_nsta_pane_cp2_ParamLimits

0xf418,	// (0x00036ac2) clock_nsta_pane_cp2

0x9a12,	// (0x000310bc) listscroll_midp_pane_ParamLimits

0x9a1e,	// (0x000310c8) midp_canvas_pane

0xcfa3,	// (0x0003464d) nsta_clock_indic_pane

0xcfcb,	// (0x00034675) listscroll_form_pane_vc

0xcfd3,	// (0x0003467d) listscroll_set_pane_vc_ParamLimits

0xcfd3,	// (0x0003467d) listscroll_set_pane_vc

0xa5cc,	// (0x00031c76) clock_nsta_pane

0xa5f6,	// (0x00031ca0) indicator_nsta_pane

0x0c17,	// (0x000282c1) bg_popup_sub_pane_cp2_ParamLimits

0x0c2b,	// (0x000282d5) find_pane_cp2_ParamLimits

0x0c2b,	// (0x000282d5) find_pane_cp2

0x0c41,	// (0x000282eb) grid_toobar_pane_ParamLimits

0x0dcc,	// (0x00028476) list_form_gen_pane_vc_ParamLimits

0x0dcc,	// (0x00028476) list_form_gen_pane_vc

0x0de2,	// (0x0002848c) scroll_pane_cp8_vc_ParamLimits

0x0de2,	// (0x0002848c) scroll_pane_cp8_vc

0x0efb,	// (0x000285a5) data_form_wide_pane_vc_ParamLimits

0x0efb,	// (0x000285a5) data_form_wide_pane_vc

0x0f07,	// (0x000285b1) form_field_data_wide_pane_vc_g1

0x0f0f,	// (0x000285b9) form_field_data_wide_pane_vc_t1_ParamLimits

0x0f0f,	// (0x000285b9) form_field_data_wide_pane_vc_t1

0xc5c4,	// (0x00033c6e) input_focus_pane_cp6_vc_ParamLimits

0xc5c4,	// (0x00033c6e) input_focus_pane_cp6_vc

0x125c,	// (0x00028906) list_midp_pane_ParamLimits

0x38aa,	// (0x0002af54) scroll_pane_cp16_ParamLimits

0x38aa,	// (0x0002af54) scroll_pane_cp16

0x12b2,	// (0x0002895c) button_value_adjust_pane_ParamLimits

0x12b2,	// (0x0002895c) button_value_adjust_pane

0xb0f4,	// (0x0003279e) button_value_adjust_pane_cp6_ParamLimits

0xb0f4,	// (0x0003279e) button_value_adjust_pane_cp6

0xb20e,	// (0x000328b8) settings_code_pane_cp_ParamLimits

0xb20e,	// (0x000328b8) settings_code_pane_cp

0xc1a8,	// (0x00033852) cell_touch_pane_g1

0xc1a8,	// (0x00033852) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x00036d79) cell_touch_pane_g

0xb439,	// (0x00032ae3) cell_touch_pane_cp_ParamLimits

0xb439,	// (0x00032ae3) cell_touch_pane_cp

0xb455,	// (0x00032aff) cell_touch_pane_ParamLimits

0xb455,	// (0x00032aff) cell_touch_pane

0xc1a8,	// (0x00033852) scroll_sc2_down_pane_g1

0xc1a8,	// (0x00033852) scroll_sc2_up_pane_g1

0xc1b2,	// (0x0003385c) bg_set_opt_pane_cp4_vc

0x3c3a,	// (0x0002b2e4) list_set_graphic_pane_vc_g1_ParamLimits

0x3c3a,	// (0x0002b2e4) list_set_graphic_pane_vc_g1

0x3c46,	// (0x0002b2f0) list_set_graphic_pane_vc_g2_ParamLimits

0x3c46,	// (0x0002b2f0) list_set_graphic_pane_vc_g2

0x0001,

0xf9c6,	// (0x00037070) list_set_graphic_pane_vc_g_ParamLimits

0xf9c6,	// (0x00037070) list_set_graphic_pane_vc_g

0x3c52,	// (0x0002b2fc) text_primary_small_cp13_vc_ParamLimits

0x3c52,	// (0x0002b2fc) text_primary_small_cp13_vc

0x3c6a,	// (0x0002b314) list_set_graphic_pane_vc_ParamLimits

0x3c6a,	// (0x0002b314) list_set_graphic_pane_vc

0xc1b2,	// (0x0003385c) input_focus_pane_cp2_vc

0xc1a8,	// (0x00033852) setting_code_pane_vc_g1

0xc225,	// (0x000338cf) setting_code_pane_vc_t1

0x3c7d,	// (0x0002b327) set_text_pane_vc_t1_ParamLimits

0x3c7d,	// (0x0002b327) set_text_pane_vc_t1

0xc1b2,	// (0x0003385c) input_focus_pane_cp1_vc

0x3c9a,	// (0x0002b344) list_set_text_pane_vc

0xc1a8,	// (0x00033852) setting_text_pane_vc_g1

0xc1b2,	// (0x0003385c) bg_set_opt_pane_cp2_vc

0xc21c,	// (0x000338c6) setting_slider_graphic_pane_vc_g1

0x3ca4,	// (0x0002b34e) setting_slider_graphic_pane_vc_t1

0x3cb4,	// (0x0002b35e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cb,	// (0x00037075) setting_slider_graphic_pane_vc_t

0x3cc4,	// (0x0002b36e) slider_set_pane_cp_vc

0x3ccc,	// (0x0002b376) slider_set_pane_vc_g1

0x3cd5,	// (0x0002b37f) slider_set_pane_vc_g2

0x0006,

0xf9d0,	// (0x0003707a) slider_set_pane_vc_g

0xc61c,	// (0x00033cc6) set_opt_bg_pane_g1_copy1

0xc624,	// (0x00033cce) set_opt_bg_pane_g2_copy1

0x3d01,	// (0x0002b3ab) set_opt_bg_pane_g3_copy1

0xc634,	// (0x00033cde) set_opt_bg_pane_g4_copy1

0xc63c,	// (0x00033ce6) set_opt_bg_pane_g5_copy1

0xc644,	// (0x00033cee) set_opt_bg_pane_g6_copy1

0x3d09,	// (0x0002b3b3) set_opt_bg_pane_g7_copy1

0x3d13,	// (0x0002b3bd) set_opt_bg_pane_g8_copy1

0x3d1b,	// (0x0002b3c5) set_opt_bg_pane_g9_copy1

0xc1b2,	// (0x0003385c) bg_set_opt_pane_cp_vc

0x3d23,	// (0x0002b3cd) setting_slider_pane_vc_t1

0x3d32,	// (0x0002b3dc) setting_slider_pane_vc_t2

0x3d42,	// (0x0002b3ec) setting_slider_pane_vc_t3

0x0002,

0xf9df,	// (0x00037089) setting_slider_pane_vc_t

0x3d52,	// (0x0002b3fc) slider_set_pane_vc

0x15b5,	// (0x00028c5f) volume_set_pane_vc_g1

0x18b0,	// (0x00028f5a) volume_set_pane_vc_g2

0x18b9,	// (0x00028f63) volume_set_pane_vc_g3

0x18c2,	// (0x00028f6c) volume_set_pane_vc_g4

0x18cb,	// (0x00028f75) volume_set_pane_vc_g5

0x18d4,	// (0x00028f7e) volume_set_pane_vc_g6

0x18dd,	// (0x00028f87) volume_set_pane_vc_g7

0x18e6,	// (0x00028f90) volume_set_pane_vc_g8

0x18ef,	// (0x00028f99) volume_set_pane_vc_g9

0x18f8,	// (0x00028fa2) volume_set_pane_vc_g10

0x0009,

0xf9e6,	// (0x00037090) volume_set_pane_vc_g

0x3d5a,	// (0x0002b404) volume_set_pane_vc

0x3d64,	// (0x0002b40e) button_value_adjust_pane_cp1_vc

0x3d6e,	// (0x0002b418) list_highlight_pane_cp2_vc

0x3d77,	// (0x0002b421) list_set_pane_vc_ParamLimits

0x3d77,	// (0x0002b421) list_set_pane_vc

0x3dd5,	// (0x0002b47f) main_pane_set_vc_t1_ParamLimits

0x3dd5,	// (0x0002b47f) main_pane_set_vc_t1

0x3dea,	// (0x0002b494) main_pane_set_vc_t2_ParamLimits

0x3dea,	// (0x0002b494) main_pane_set_vc_t2

0x3dfc,	// (0x0002b4a6) main_pane_set_vc_t3_ParamLimits

0x3dfc,	// (0x0002b4a6) main_pane_set_vc_t3

0x3e0e,	// (0x0002b4b8) main_pane_set_vc_t4_ParamLimits

0x3e0e,	// (0x0002b4b8) main_pane_set_vc_t4

0x0003,

0xf9fb,	// (0x000370a5) main_pane_set_vc_t_ParamLimits

0xf9fb,	// (0x000370a5) main_pane_set_vc_t

0x3e20,	// (0x0002b4ca) setting_code_pane_vc_ParamLimits

0x3e20,	// (0x0002b4ca) setting_code_pane_vc

0x3e2f,	// (0x0002b4d9) setting_slider_graphic_pane_vc

0x3e2f,	// (0x0002b4d9) setting_slider_pane_vc

0x3e2f,	// (0x0002b4d9) setting_text_pane_vc

0x3e2f,	// (0x0002b4d9) setting_volume_pane_vc

0x3e37,	// (0x0002b4e1) scroll_pane_cp121_vc

0xc59e,	// (0x00033c48) set_content_pane_vc

0x3e3f,	// (0x0002b4e9) button_value_adjust_pane_g1

0x3e48,	// (0x0002b4f2) button_value_adjust_pane_g2

0x0001,

0xfa5c,	// (0x00037106) button_value_adjust_pane_g

0x3e51,	// (0x0002b4fb) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3e51,	// (0x0002b4fb) form_field_slider_wide_pane_vc_t1

0x3e65,	// (0x0002b50f) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3e65,	// (0x0002b50f) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa61,	// (0x0003710b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa61,	// (0x0003710b) form_field_slider_wide_pane_vc_t

0xc200,	// (0x000338aa) input_focus_pane_cp10_vc_ParamLimits

0xc200,	// (0x000338aa) input_focus_pane_cp10_vc

0x3e93,	// (0x0002b53d) slider_cont_pane_cp1_vc_ParamLimits

0x3e93,	// (0x0002b53d) slider_cont_pane_cp1_vc

0x3ea5,	// (0x0002b54f) slider_form_pane_g1_cp2

0x3cd5,	// (0x0002b37f) slider_form_pane_g2_cp2

0x3ed2,	// (0x0002b57c) form_field_slider_pane_vc_t3

0x3ee0,	// (0x0002b58a) form_field_slider_pane_vc_t4

0x3eee,	// (0x0002b598) slider_form_pane_vc_ParamLimits

0x3eee,	// (0x0002b598) slider_form_pane_vc

0x3efb,	// (0x0002b5a5) form_field_slider_pane_vc_t1_ParamLimits

0x3efb,	// (0x0002b5a5) form_field_slider_pane_vc_t1

0x3e65,	// (0x0002b50f) form_field_slider_pane_vc_t2_ParamLimits

0x3e65,	// (0x0002b50f) form_field_slider_pane_vc_t2

0x0001,

0xfa73,	// (0x0003711d) form_field_slider_pane_vc_t_ParamLimits

0xfa73,	// (0x0003711d) form_field_slider_pane_vc_t

0xc200,	// (0x000338aa) input_focus_pane_cp9_vc_ParamLimits

0xc200,	// (0x000338aa) input_focus_pane_cp9_vc

0x3f17,	// (0x0002b5c1) slider_cont_pane_vc_ParamLimits

0x3f17,	// (0x0002b5c1) slider_cont_pane_vc

0x3f2b,	// (0x0002b5d5) list_form_graphic_pane_cp_vc_ParamLimits

0x3f2b,	// (0x0002b5d5) list_form_graphic_pane_cp_vc

0x0f07,	// (0x000285b1) form_field_popup_wide_pane_vc_g1

0x3f40,	// (0x0002b5ea) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3f40,	// (0x0002b5ea) form_field_popup_wide_pane_vc_t1

0xc5c4,	// (0x00033c6e) input_focus_pane_cp8_vc_ParamLimits

0xc5c4,	// (0x00033c6e) input_focus_pane_cp8_vc

0x3f85,	// (0x0002b62f) list_form_wide_pane_vc_ParamLimits

0x3f85,	// (0x0002b62f) list_form_wide_pane_vc

0x3f91,	// (0x0002b63b) list_form_graphic_pane_vc_g1

0x3f99,	// (0x0002b643) list_form_graphic_pane_vc_t1_ParamLimits

0x3f99,	// (0x0002b643) list_form_graphic_pane_vc_t1

0xc20e,	// (0x000338b8) list_highlight_pane_cp5_vc_ParamLimits

0xc20e,	// (0x000338b8) list_highlight_pane_cp5_vc

0x3fb5,	// (0x0002b65f) list_form_graphic_pane_vc_ParamLimits

0x3fb5,	// (0x0002b65f) list_form_graphic_pane_vc

0x0f07,	// (0x000285b1) form_field_popup_pane_vc_g1

0x3fcb,	// (0x0002b675) form_field_popup_pane_vc_t1_ParamLimits

0x3fcb,	// (0x0002b675) form_field_popup_pane_vc_t1

0xc5c4,	// (0x00033c6e) input_focus_pane_cp7_vc_ParamLimits

0xc5c4,	// (0x00033c6e) input_focus_pane_cp7_vc

0x3fe2,	// (0x0002b68c) list_form_pane_vc_ParamLimits

0x3fe2,	// (0x0002b68c) list_form_pane_vc

0x3fee,	// (0x0002b698) data_form_pane_vc_t1_ParamLimits

0x3fee,	// (0x0002b698) data_form_pane_vc_t1

0xc61c,	// (0x00033cc6) input_focus_pane_vc_g1

0xc624,	// (0x00033cce) input_focus_pane_vc_g2

0xc62c,	// (0x00033cd6) input_focus_pane_vc_g3

0xc634,	// (0x00033cde) input_focus_pane_vc_g4

0xc63c,	// (0x00033ce6) input_focus_pane_vc_g5

0xc644,	// (0x00033cee) input_focus_pane_vc_g6

0xc64c,	// (0x00033cf6) input_focus_pane_vc_g7

0xc654,	// (0x00033cfe) input_focus_pane_vc_g8

0xc65c,	// (0x00033d06) input_focus_pane_vc_g9

0xc1a8,	// (0x00033852) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x00036d02) input_focus_pane_vc_g

0x0efb,	// (0x000285a5) data_form_pane_vc_ParamLimits

0x0efb,	// (0x000285a5) data_form_pane_vc

0x0f07,	// (0x000285b1) form_field_data_pane_vc_g1

0x4009,	// (0x0002b6b3) form_field_data_pane_vc_t1_ParamLimits

0x4009,	// (0x0002b6b3) form_field_data_pane_vc_t1

0xc5c4,	// (0x00033c6e) input_focus_pane_vc_ParamLimits

0xc5c4,	// (0x00033c6e) input_focus_pane_vc

0x4023,	// (0x0002b6cd) button_value_adjust_pane_cp3_vc

0x402b,	// (0x0002b6d5) button_value_adjust_pane_cp5_vc

0x4033,	// (0x0002b6dd) form_field_data_pane_vc_ParamLimits

0x4033,	// (0x0002b6dd) form_field_data_pane_vc

0x404a,	// (0x0002b6f4) form_field_data_pane_vc_cp2

0x4052,	// (0x0002b6fc) form_field_data_wide_pane_vc_ParamLimits

0x4052,	// (0x0002b6fc) form_field_data_wide_pane_vc

0x4068,	// (0x0002b712) form_field_data_wide_pane_vc_cp2

0x4070,	// (0x0002b71a) form_field_popup_pane_vc_ParamLimits

0x4070,	// (0x0002b71a) form_field_popup_pane_vc

0x4087,	// (0x0002b731) form_field_popup_wide_pane_vc_ParamLimits

0x4087,	// (0x0002b731) form_field_popup_wide_pane_vc

0x409d,	// (0x0002b747) form_field_slider_pane_vc_ParamLimits

0x409d,	// (0x0002b747) form_field_slider_pane_vc

0x40b0,	// (0x0002b75a) form_field_slider_wide_pane_vc_ParamLimits

0x40b0,	// (0x0002b75a) form_field_slider_wide_pane_vc

0xb472,	// (0x00032b1c) grid_touch_1_pane_ParamLimits

0xb472,	// (0x00032b1c) grid_touch_1_pane

0xb486,	// (0x00032b30) grid_touch_2_pane_ParamLimits

0xb486,	// (0x00032b30) grid_touch_2_pane

0x4194,	// (0x0002b83e) touch_pane_g1_ParamLimits

0x4194,	// (0x0002b83e) touch_pane_g1

0x40e7,	// (0x0002b791) cell_app_pane_cp_wide_ParamLimits

0x40e7,	// (0x0002b791) cell_app_pane_cp_wide

0x40f8,	// (0x0002b7a2) grid_popup_fast_wide_pane_ParamLimits

0x40f8,	// (0x0002b7a2) grid_popup_fast_wide_pane

0x410c,	// (0x0002b7b6) scroll_pane_cp19_ParamLimits

0x410c,	// (0x0002b7b6) scroll_pane_cp19

0xc1b2,	// (0x0003385c) bg_popup_window_pane_cp20

0x4120,	// (0x0002b7ca) listscroll_popup_fast_wide_pane

0xb4b0,	// (0x00032b5a) grid_indicator_nsta_pane

0x413a,	// (0x0002b7e4) clock_nsta_pane_g1

0x4143,	// (0x0002b7ed) clock_nsta_pane_t1

0xb4bc,	// (0x00032b66) cell_indicator_nsta_pane_ParamLimits

0xb4bc,	// (0x00032b66) cell_indicator_nsta_pane

0x4194,	// (0x0002b83e) cell_indicator_nsta_pane_g1

0xb4d7,	// (0x00032b81) cell_indicator_nsta_pane_g2

0x0001,

0xfa84,	// (0x0003712e) cell_indicator_nsta_pane_g

0x41b4,	// (0x0002b85e) clock_nsta_pane_cp

0x41bd,	// (0x0002b867) indicator_nsta_pane_cp

0x41c7,	// (0x0002b871) nsta_clock_indic_pane_g1

0xc24a,	// (0x000338f4) grid_indicator_pane

0x97f6,	// (0x00030ea0) scroll_pane_cp29

0xf367,	// (0x00036a11) indicator_nsta_pane_cp2_ParamLimits

0xf367,	// (0x00036a11) indicator_nsta_pane_cp2

0xc20e,	// (0x000338b8) main_apps_wheel_pane

0xaa66,	// (0x00032110) form_midp_field_text_pane_ParamLimits

0x1268,	// (0x00028912) scroll_bar_cp050_ParamLimits

0x4220,	// (0x0002b8ca) cell_indicator_pane_ParamLimits

0x4220,	// (0x0002b8ca) cell_indicator_pane

0x4239,	// (0x0002b8e3) cell_indicator_pane_g1

0xb4f6,	// (0x00032ba0) grid_wheel_folder_pane_ParamLimits

0xb4f6,	// (0x00032ba0) grid_wheel_folder_pane

0xb504,	// (0x00032bae) list_wheel_apps_pane_ParamLimits

0xb504,	// (0x00032bae) list_wheel_apps_pane

0xb512,	// (0x00032bbc) main_apps_wheel_pane_g1_ParamLimits

0xb512,	// (0x00032bbc) main_apps_wheel_pane_g1

0xb51e,	// (0x00032bc8) main_apps_wheel_pane_g2_ParamLimits

0xb51e,	// (0x00032bc8) main_apps_wheel_pane_g2

0x0001,

0xfaa0,	// (0x0003714a) main_apps_wheel_pane_g_ParamLimits

0xfaa0,	// (0x0003714a) main_apps_wheel_pane_g

0xb52c,	// (0x00032bd6) main_apps_wheel_pane_t1_ParamLimits

0xb52c,	// (0x00032bd6) main_apps_wheel_pane_t1

0xb540,	// (0x00032bea) list_wheel_apps_pane_g1

0xb548,	// (0x00032bf2) list_wheel_apps_pane_g2

0xb550,	// (0x00032bfa) list_wheel_apps_pane_g3

0xb558,	// (0x00032c02) list_wheel_apps_pane_g4

0xb562,	// (0x00032c0c) list_wheel_apps_pane_g5

0x0004,

0xfaa5,	// (0x0003714f) list_wheel_apps_pane_g

0xcd25,	// (0x000343cf) navi_icon_text_pane

0xa4c0,	// (0x00031b6a) aid_fill_nsta

0x4300,	// (0x0002b9aa) navi_icon_text_pane_g1

0x430c,	// (0x0002b9b6) navi_icon_text_pane_t1

0xcc09,	// (0x000342b3) list_set_graphic_pane_t1_ParamLimits

0xcc09,	// (0x000342b3) list_set_graphic_pane_t1

0x2cd1,	// (0x0002a37b) popup_midp_note_alarm_window_t6_ParamLimits

0x2cd1,	// (0x0002a37b) popup_midp_note_alarm_window_t6

0x2ce3,	// (0x0002a38d) popup_midp_note_alarm_window_t7_ParamLimits

0x2ce3,	// (0x0002a38d) popup_midp_note_alarm_window_t7

0x2cf5,	// (0x0002a39f) popup_midp_note_alarm_window_t8_ParamLimits

0x2cf5,	// (0x0002a39f) popup_midp_note_alarm_window_t8

0x2d07,	// (0x0002a3b1) popup_midp_note_alarm_window_t9_ParamLimits

0x2d07,	// (0x0002a3b1) popup_midp_note_alarm_window_t9

0x2d19,	// (0x0002a3c3) popup_midp_note_alarm_window_t10_ParamLimits

0x2d19,	// (0x0002a3c3) popup_midp_note_alarm_window_t10

0x2d2b,	// (0x0002a3d5) popup_midp_note_alarm_window_t11_ParamLimits

0x2d2b,	// (0x0002a3d5) popup_midp_note_alarm_window_t11

0xadb2,	// (0x0003245c) scroll_pane_cp17_ParamLimits

0xadb2,	// (0x0003245c) scroll_pane_cp17

0x15b5,	// (0x00028c5f) volume_small_pane_cp_g1

0x1901,	// (0x00028fab) volume_small_pane_cp_g2

0x190a,	// (0x00028fb4) volume_small_pane_cp_g3

0x1913,	// (0x00028fbd) volume_small_pane_cp_g4

0x191c,	// (0x00028fc6) volume_small_pane_cp_g5

0x18cb,	// (0x00028f75) volume_small_pane_cp_g6

0x1925,	// (0x00028fcf) volume_small_pane_cp_g7

0x192e,	// (0x00028fd8) volume_small_pane_cp_g8

0x1937,	// (0x00028fe1) volume_small_pane_cp_g9

0x1940,	// (0x00028fea) volume_small_pane_cp_g10

0xce76,	// (0x00034520) midp_ticker_pane_g1_ParamLimits

0xce82,	// (0x0003452c) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x00036dce) midp_ticker_pane_g_ParamLimits

0xce8e,	// (0x00034538) midp_ticker_pane_t1_ParamLimits

0xa4e4,	// (0x00031b8e) aid_fill_nsta_2

0x1254,	// (0x000288fe) list_form2_midp_pane

0x3685,	// (0x0002ad2f) midp_editing_number_pane_ParamLimits

0x3694,	// (0x0002ad3e) midp_ticker_pane_ParamLimits

0x431e,	// (0x0002b9c8) form2_midp_field_pane

0x4342,	// (0x0002b9ec) scroll_pane_cp51

0x4362,	// (0x0002ba0c) form2_midp_button_pane_ParamLimits

0x4362,	// (0x0002ba0c) form2_midp_button_pane

0x4374,	// (0x0002ba1e) form2_midp_content_pane_ParamLimits

0x4374,	// (0x0002ba1e) form2_midp_content_pane

0x438e,	// (0x0002ba38) form2_midp_field_choice_group_pane

0x4396,	// (0x0002ba40) form2_midp_field_pane_g1

0x439e,	// (0x0002ba48) form2_midp_field_pane_g2

0x43a6,	// (0x0002ba50) form2_midp_field_pane_g3

0x43ae,	// (0x0002ba58) form2_midp_field_pane_g4

0x0003,

0xfaca,	// (0x00037174) form2_midp_field_pane_g

0x43b6,	// (0x0002ba60) form2_midp_gauge_slider_pane

0x43be,	// (0x0002ba68) form2_midp_gauge_wait_pane

0x43c6,	// (0x0002ba70) form2_midp_image_pane_ParamLimits

0x43c6,	// (0x0002ba70) form2_midp_image_pane

0xb595,	// (0x00032c3f) form2_midp_label_pane_ParamLimits

0xb595,	// (0x00032c3f) form2_midp_label_pane

0xb5ae,	// (0x00032c58) form2_midp_label_pane_cp_ParamLimits

0xb5ae,	// (0x00032c58) form2_midp_label_pane_cp

0x441b,	// (0x0002bac5) form2_midp_string_pane_ParamLimits

0x441b,	// (0x0002bac5) form2_midp_string_pane

0xee70,	// (0x0003651a) form2_midp_text_pane_ParamLimits

0xee70,	// (0x0003651a) form2_midp_text_pane

0x442d,	// (0x0002bad7) form2_midp_time_pane

0x443d,	// (0x0002bae7) input_focus_pane_cp51_ParamLimits

0x443d,	// (0x0002bae7) input_focus_pane_cp51

0xb5cd,	// (0x00032c77) form2_midp_label_pane_t1_ParamLimits

0xb5cd,	// (0x00032c77) form2_midp_label_pane_t1

0xee89,	// (0x00036533) form2_mdip_text_pane_t1_ParamLimits

0xee89,	// (0x00036533) form2_mdip_text_pane_t1

0xeea7,	// (0x00036551) form2_midp_time_pane_t1

0x449e,	// (0x0002bb48) form2_midp_gauge_slider_pane_t1

0xb60d,	// (0x00032cb7) form2_midp_gauge_slider_pane_t2

0xb61f,	// (0x00032cc9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad3,	// (0x0003717d) form2_midp_gauge_slider_pane_t

0x44d4,	// (0x0002bb7e) form2_midp_slider_pane

0x44e0,	// (0x0002bb8a) form2_midp_gauge_wait_pane_t1

0x44ee,	// (0x0002bb98) form2_midp_wait_pane_ParamLimits

0x44ee,	// (0x0002bb98) form2_midp_wait_pane

0xb631,	// (0x00032cdb) list_single_2graphic_pane_cp4_ParamLimits

0xb631,	// (0x00032cdb) list_single_2graphic_pane_cp4

0xa9bd,	// (0x00032067) list_single_midp_graphic_pane_cp_ParamLimits

0xa9bd,	// (0x00032067) list_single_midp_graphic_pane_cp

0xc1b2,	// (0x0003385c) list_highlight_pane_cp20

0x4541,	// (0x0002bbeb) list_single_2graphic_pane_g1_cp4

0x3b1e,	// (0x0002b1c8) list_single_2graphic_pane_g2_cp4

0x4549,	// (0x0002bbf3) list_single_2graphic_pane_t1_cp4

0xc20e,	// (0x000338b8) list_highlight_pane_cp21

0x4558,	// (0x0002bc02) list_single_midp_graphic_pane_g4_cp

0x4567,	// (0x0002bc11) list_single_midp_graphic_pane_t1_cp

0xb646,	// (0x00032cf0) form2_mdip_string_pane_t1_ParamLimits

0xb646,	// (0x00032cf0) form2_mdip_string_pane_t1

0xc1b2,	// (0x0003385c) bg_wml_button_pane_cp2

0xc1a8,	// (0x00033852) form2_midp_image_pane_g1

0xe8e3,	// (0x00035f8d) list_double_large_graphic_pane_g5_ParamLimits

0xe8e3,	// (0x00035f8d) list_double_large_graphic_pane_g5

0x9a12,	// (0x000310bc) midp_form_pane_ParamLimits

0xc20e,	// (0x000338b8) main_apps_wheel_pane_ParamLimits

0xa19e,	// (0x00031848) popup_preview_window_ParamLimits

0xa19e,	// (0x00031848) popup_preview_window

0xa46b,	// (0x00031b15) popup_touch_info_window_ParamLimits

0xa46b,	// (0x00031b15) popup_touch_info_window

0xa489,	// (0x00031b33) popup_touch_menu_window_ParamLimits

0xa489,	// (0x00031b33) popup_touch_menu_window

0xc19e,	// (0x00033848) bg_popup_sub_pane_cp6

0x4683,	// (0x0002bd2d) list_touch_menu_pane

0xb6bc,	// (0x00032d66) list_single_touch_menu_pane_ParamLimits

0xb6bc,	// (0x00032d66) list_single_touch_menu_pane

0xb6d0,	// (0x00032d7a) list_single_touch_menu_pane_t1

0xc20e,	// (0x000338b8) bg_popup_sub_pane_cp7_ParamLimits

0xc20e,	// (0x000338b8) bg_popup_sub_pane_cp7

0x46af,	// (0x0002bd59) heading_sub_pane

0x46b7,	// (0x0002bd61) list_touch_info_pane_ParamLimits

0x46b7,	// (0x0002bd61) list_touch_info_pane

0x46c6,	// (0x0002bd70) list_single_touch_info_pane_ParamLimits

0x46c6,	// (0x0002bd70) list_single_touch_info_pane

0x46d8,	// (0x0002bd82) list_single_touch_info_pane_t1

0x46e6,	// (0x0002bd90) list_single_touch_info_pane_t2

0x0001,

0xfae1,	// (0x0003718b) list_single_touch_info_pane_t

0xce5f,	// (0x00034509) bg_popup_heading_pane_cp

0x46f4,	// (0x0002bd9e) heading_sub_pane_t1

0x0e0d,	// (0x000284b7) bg_popup_preview_window_pane_cp_ParamLimits

0x0e0d,	// (0x000284b7) bg_popup_preview_window_pane_cp

0x46af,	// (0x0002bd59) heading_preview_pane

0x46b7,	// (0x0002bd61) list_preview_pane_ParamLimits

0x46b7,	// (0x0002bd61) list_preview_pane

0x4702,	// (0x0002bdac) popup_preview_window_g1

0x46c6,	// (0x0002bd70) list_single_preview_pane_ParamLimits

0x46c6,	// (0x0002bd70) list_single_preview_pane

0x470a,	// (0x0002bdb4) list_single_preview_pane_g1

0x4712,	// (0x0002bdbc) list_single_preview_pane_t1

0x46d8,	// (0x0002bd82) list_single_preview_pane_t2

0x0001,

0xfae6,	// (0x00037190) list_single_preview_pane_t

0x4720,	// (0x0002bdca) bg_popup_heading_pane_cp2_ParamLimits

0x4720,	// (0x0002bdca) bg_popup_heading_pane_cp2

0x4736,	// (0x0002bde0) heading_preview_pane_g1

0x473e,	// (0x0002bde8) heading_preview_pane_t1_ParamLimits

0x473e,	// (0x0002bde8) heading_preview_pane_t1

0xc261,	// (0x0003390b) soft_indicator_pane_t1_ParamLimits

0xc540,	// (0x00033bea) scroll_pane_ParamLimits

0xc8e9,	// (0x00033f93) scroll_sc2_left_pane

0xc8f2,	// (0x00033f9c) scroll_sc2_right_pane

0xc911,	// (0x00033fbb) scroll_bg_pane_g1_ParamLimits

0xc926,	// (0x00033fd0) scroll_bg_pane_g2_ParamLimits

0xc93e,	// (0x00033fe8) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x00036d59) scroll_bg_pane_g_ParamLimits

0xc911,	// (0x00033fbb) scroll_handle_pane_g1_ParamLimits

0xc953,	// (0x00033ffd) scroll_handle_pane_g2_ParamLimits

0xc93e,	// (0x00033fe8) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x00036d60) scroll_handle_pane_g_ParamLimits

0x9d6b,	// (0x00031415) popup_choice_list_window_ParamLimits

0x9d6b,	// (0x00031415) popup_choice_list_window

0x0c23,	// (0x000282cd) choice_list_pane

0x0cd5,	// (0x0002837f) cell_toolbar_pane_t1

0x0cfd,	// (0x000283a7) toolbar_button_pane_ParamLimits

0x31f7,	// (0x0002a8a1) ai_gene_pane_1_t2_ParamLimits

0x31f7,	// (0x0002a8a1) ai_gene_pane_1_t2

0x0001,

0xf8d9,	// (0x00036f83) ai_gene_pane_1_t_ParamLimits

0xf8d9,	// (0x00036f83) ai_gene_pane_1_t

0x475b,	// (0x0002be05) scroll_sc2_left_pane_g1

0x475b,	// (0x0002be05) scroll_sc2_right_pane_g1

0xc706,	// (0x00033db0) bg_popup_sub_pane_cp10

0x4765,	// (0x0002be0f) list_choice_list_pane

0xb24a,	// (0x000328f4) list_single_choice_list_pane_ParamLimits

0xb24a,	// (0x000328f4) list_single_choice_list_pane

0xcff3,	// (0x0003469d) list_single_choice_list_pane_g1

0x9620,	// (0x00030cca) list_single_choice_list_pane_t1_ParamLimits

0x9620,	// (0x00030cca) list_single_choice_list_pane_t1

0x4799,	// (0x0002be43) choice_list_pane_g1

0xb6de,	// (0x00032d88) choice_list_pane_t1

0xc19e,	// (0x00033848) input_focus_pane_cp11

0xc85e,	// (0x00033f08) title_pane_stacon_g2_ParamLimits

0xc85e,	// (0x00033f08) title_pane_stacon_g2

0x0002,

0xf695,	// (0x00036d3f) title_pane_stacon_g_ParamLimits

0xf695,	// (0x00036d3f) title_pane_stacon_g

0xce5f,	// (0x00034509) cursor_press_pane

0x9e12,	// (0x000314bc) popup_fep_hwr_window_ParamLimits

0x9e12,	// (0x000314bc) popup_fep_hwr_window

0x0379,	// (0x00027a23) popup_fep_vkb_window_ParamLimits

0x0379,	// (0x00027a23) popup_fep_vkb_window

0xb6ec,	// (0x00032d96) cursor_press_pane_g1

0x0002,

0xfb0f,	// (0x000371b9) fep_vkb_side_pane_g_ParamLimits

0x1982,	// (0x0002902c) fep_hwr_candidate_pane_ParamLimits

0x1982,	// (0x0002902c) fep_hwr_candidate_pane

0x19ac,	// (0x00029056) fep_hwr_side_pane_ParamLimits

0x19ac,	// (0x00029056) fep_hwr_side_pane

0x19cc,	// (0x00029076) fep_hwr_top_pane_ParamLimits

0x19cc,	// (0x00029076) fep_hwr_top_pane

0x19e4,	// (0x0002908e) fep_hwr_write_pane_ParamLimits

0x19e4,	// (0x0002908e) fep_hwr_write_pane

0xfb0f,	// (0x000371b9) fep_vkb_side_pane_g

0x47b7,	// (0x0002be61) fep_hwr_top_pane_g1

0x47c9,	// (0x0002be73) fep_hwr_top_pane_g2

0x1a10,	// (0x000290ba) fep_hwr_top_pane_g3

0x0002,

0xfaeb,	// (0x00037195) fep_hwr_top_pane_g

0x1a25,	// (0x000290cf) fep_hwr_top_text_pane

0xca16,	// (0x000340c0) fep_hwr_top_text_pane_g1

0x47ff,	// (0x0002bea9) fep_hwr_top_text_pane_t1

0x1b1b,	// (0x000291c5) fep_hwr_candidate_pane_g1

0x4a44,	// (0x0002c0ee) fep_vkb_keypad_pane_g3_ParamLimits

0x4a44,	// (0x0002c0ee) fep_vkb_keypad_pane_g3

0x4a6c,	// (0x0002c116) fep_vkb_keypad_pane_g4_ParamLimits

0x4a6c,	// (0x0002c116) fep_vkb_keypad_pane_g4

0x4adb,	// (0x0002c185) fep_vkb_bottom_pane_g2_ParamLimits

0x4adb,	// (0x0002c185) fep_vkb_bottom_pane_g2

0x0001,

0xfb16,	// (0x000371c0) fep_vkb_bottom_pane_g_ParamLimits

0xfb16,	// (0x000371c0) fep_vkb_bottom_pane_g

0x475b,	// (0x0002be05) cell_vkb_side_pane_g2

0x0001,

0xfb20,	// (0x000371ca) cell_vkb_side_pane_g

0x4b66,	// (0x0002c210) cell_vkb_side_pane_t1

0x4b74,	// (0x0002c21e) cell_vkb_side_pane_t1_copy1

0x475b,	// (0x0002be05) bg_fep_vkb_candidate_pane_g2

0x4ca0,	// (0x0002c34a) cell_vkb_candidate_pane_ParamLimits

0x480d,	// (0x0002beb7) aid_size_cell_vkb_ParamLimits

0x480d,	// (0x0002beb7) aid_size_cell_vkb

0x4ca0,	// (0x0002c34a) cell_vkb_candidate_pane

0x1b35,	// (0x000291df) bg_popup_fep_shadow_pane_g1

0xb753,	// (0x00032dfd) fep_vkb_bottom_pane_ParamLimits

0xb753,	// (0x00032dfd) fep_vkb_bottom_pane

0x48d1,	// (0x0002bf7b) fep_vkb_candidate_pane_ParamLimits

0x48d1,	// (0x0002bf7b) fep_vkb_candidate_pane

0xb778,	// (0x00032e22) fep_vkb_keypad_pane_ParamLimits

0xb778,	// (0x00032e22) fep_vkb_keypad_pane

0xb7ad,	// (0x00032e57) fep_vkb_side_pane_ParamLimits

0xb7ad,	// (0x00032e57) fep_vkb_side_pane

0xb7e9,	// (0x00032e93) fep_vkb_top_pane_ParamLimits

0xb7e9,	// (0x00032e93) fep_vkb_top_pane

0x499d,	// (0x0002c047) fep_vkb_top_pane_g1_ParamLimits

0x499d,	// (0x0002c047) fep_vkb_top_pane_g1

0x49ac,	// (0x0002c056) fep_vkb_top_pane_g2_ParamLimits

0x49ac,	// (0x0002c056) fep_vkb_top_pane_g2

0x49bb,	// (0x0002c065) fep_vkb_top_pane_g3_ParamLimits

0x49bb,	// (0x0002c065) fep_vkb_top_pane_g3

0x0003,

0xfb06,	// (0x000371b0) fep_vkb_top_pane_g_ParamLimits

0xfb06,	// (0x000371b0) fep_vkb_top_pane_g

0x49d9,	// (0x0002c083) fep_vkb_top_text_pane_ParamLimits

0x49d9,	// (0x0002c083) fep_vkb_top_text_pane

0xb81e,	// (0x00032ec8) fep_vkb_side_pane_g1_ParamLimits

0xb81e,	// (0x00032ec8) fep_vkb_side_pane_g1

0x4a33,	// (0x0002c0dd) grid_vkb_side_pane_ParamLimits

0x4a33,	// (0x0002c0dd) grid_vkb_side_pane

0x1b3d,	// (0x000291e7) bg_popup_fep_shadow_pane_g2

0x1b46,	// (0x000291f0) bg_popup_fep_shadow_pane_g3

0x1b4e,	// (0x000291f8) bg_popup_fep_shadow_pane_g4

0x1b57,	// (0x00029201) bg_popup_fep_shadow_pane_g5

0x1b61,	// (0x0002920b) bg_popup_fep_shadow_pane_g6

0x1b69,	// (0x00029213) bg_popup_fep_shadow_pane_g7

0xc63c,	// (0x00033ce6) bg_popup_fep_shadow_pane_g8

0x4a8a,	// (0x0002c134) grid_vkb_keypad_number_pane_ParamLimits

0x4a8a,	// (0x0002c134) grid_vkb_keypad_number_pane

0x4a9a,	// (0x0002c144) grid_vkb_keypad_pane_ParamLimits

0x4a9a,	// (0x0002c144) grid_vkb_keypad_pane

0x4ac0,	// (0x0002c16a) fep_vkb_bottom_pane_g1_ParamLimits

0x4ac0,	// (0x0002c16a) fep_vkb_bottom_pane_g1

0x4ae9,	// (0x0002c193) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4ae9,	// (0x0002c193) grid_vkb_keypad_bottom_left_pane

0x4afe,	// (0x0002c1a8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4afe,	// (0x0002c1a8) grid_vkb_keypad_bottom_right_pane

0x4b13,	// (0x0002c1bd) fep_vkb_top_text_pane_g1

0xb865,	// (0x00032f0f) fep_vkb_top_text_pane_t1

0xb877,	// (0x00032f21) cell_vkb_side_pane_ParamLimits

0xb877,	// (0x00032f21) cell_vkb_side_pane

0x475b,	// (0x0002be05) cell_vkb_side_pane_g1

0x4b82,	// (0x0002c22c) cell_vkb_keypad_pane_ParamLimits

0x4b82,	// (0x0002c22c) cell_vkb_keypad_pane

0x4bf7,	// (0x0002c2a1) cell_vkb_keypad_pane_g1

0x0008,

0xfb33,	// (0x000371dd) bg_popup_fep_shadow_pane_g

0x475b,	// (0x0002be05) cell_hwr_side_pane_g1

0x475b,	// (0x0002be05) cell_hwr_side_pane_g2

0x4c01,	// (0x0002c2ab) cell_vkb_keypad_pane_t1

0xb88d,	// (0x00032f37) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb88d,	// (0x00032f37) cell_vkb_keypad_bottom_left_pane

0xb8a2,	// (0x00032f4c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb8a2,	// (0x00032f4c) cell_vkb_keypad_bottom_right_pane

0x475b,	// (0x0002be05) cell_vkb_keypad_bottom_left_pane_g1

0x475b,	// (0x0002be05) cell_vkb_keypad_bottom_right_pane_g1

0x4c65,	// (0x0002c30f) cell_vkb_keypad_number_pane_ParamLimits

0x4c65,	// (0x0002c30f) cell_vkb_keypad_number_pane

0x4c84,	// (0x0002c32e) cell_vkb_keypad_number_pane_g1

0x4c8e,	// (0x0002c338) cell_vkb_keypad_number_pane_g2

0x4c97,	// (0x0002c341) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb25,	// (0x000371cf) cell_vkb_keypad_number_pane_g

0x4c01,	// (0x0002c2ab) cell_vkb_keypad_number_pane_t1

0x4cbb,	// (0x0002c365) fep_vkb_candidate_pane_g1

0x0001,

0xfb20,	// (0x000371ca) cell_hwr_side_pane_g

0x4cd4,	// (0x0002c37e) cell_hwr_side_pane_t1

0x1b7b,	// (0x00029225) cell_hwr_side_pane_t1_copy1

0x49cb,	// (0x0002c075) cell_hwr_candidate_pane_g1

0x1b89,	// (0x00029233) cell_hwr_candidate_pane_t1

0x475b,	// (0x0002be05) cell_vkb_candidate_pane_g2

0x4d5a,	// (0x0002c404) cell_vkb_candidate_pane_t1

0x1949,	// (0x00028ff3) bg_popup_fep_shadow_pane_ParamLimits

0x1949,	// (0x00028ff3) bg_popup_fep_shadow_pane

0xcffb,	// (0x000346a5) bg_fep_hwr_top_pane_g4

0x47db,	// (0x0002be85) bg_hwr_side_pane_g1_ParamLimits

0x47db,	// (0x0002be85) bg_hwr_side_pane_g1

0xb70c,	// (0x00032db6) cell_hwr_side_pane_ParamLimits

0xb70c,	// (0x00032db6) cell_hwr_side_pane

0x1a9c,	// (0x00029146) fep_hwr_write_pane_g1_ParamLimits

0x1a9c,	// (0x00029146) fep_hwr_write_pane_g1

0x1aa9,	// (0x00029153) fep_hwr_write_pane_g2_ParamLimits

0x1aa9,	// (0x00029153) fep_hwr_write_pane_g2

0x1ab6,	// (0x00029160) fep_hwr_write_pane_g3_ParamLimits

0x1ab6,	// (0x00029160) fep_hwr_write_pane_g3

0xb72c,	// (0x00032dd6) fep_hwr_write_pane_g4_ParamLimits

0xb72c,	// (0x00032dd6) fep_hwr_write_pane_g4

0x0005,

0xfaf2,	// (0x0003719c) fep_hwr_write_pane_g_ParamLimits

0xfaf2,	// (0x0003719c) fep_hwr_write_pane_g

0xcffb,	// (0x000346a5) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xcffb,	// (0x000346a5) bg_fep_hwr_candidate_pane_g2

0x1ad9,	// (0x00029183) cell_hwr_candidate_pane_ParamLimits

0x1ad9,	// (0x00029183) cell_hwr_candidate_pane

0x1b1b,	// (0x000291c5) fep_hwr_candidate_pane_g1_ParamLimits

0x483b,	// (0x0002bee5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x483b,	// (0x0002bee5) bg_popup_fep_shadow_pane_cp2

0x49cb,	// (0x0002c075) fep_vkb_top_pane_g4_ParamLimits

0x49cb,	// (0x0002c075) fep_vkb_top_pane_g4

0x4a11,	// (0x0002c0bb) fep_vkb_side_pane_g2_ParamLimits

0x4a11,	// (0x0002c0bb) fep_vkb_side_pane_g2

0x87ec,	// (0x0002fe96) list_setting_pane_t4_ParamLimits

0x87ec,	// (0x0002fe96) list_setting_pane_t4

0xe997,	// (0x00036041) list_setting_number_pane_t5_ParamLimits

0xe997,	// (0x00036041) list_setting_number_pane_t5

0xca4d,	// (0x000340f7) list_double_heading_pane_cp2_ParamLimits

0xca4d,	// (0x000340f7) list_double_heading_pane_cp2

0xd023,	// (0x000346cd) list_double_heading_pane_g1_cp2_ParamLimits

0xd023,	// (0x000346cd) list_double_heading_pane_g1_cp2

0x4d68,	// (0x0002c412) list_double_heading_pane_g2_cp2_ParamLimits

0x4d68,	// (0x0002c412) list_double_heading_pane_g2_cp2

0x4d7c,	// (0x0002c426) list_double_heading_pane_t1_cp2_ParamLimits

0x4d7c,	// (0x0002c426) list_double_heading_pane_t1_cp2

0x4d92,	// (0x0002c43c) list_double_heading_pane_t2_cp2_ParamLimits

0x4d92,	// (0x0002c43c) list_double_heading_pane_t2_cp2

0xc196,	// (0x00033840) aid_value_unit2

0xe7d5,	// (0x00035e7f) popup_preview_fixed_window

0xc338,	// (0x000339e2) bg_popup_preview_window_pane_cp02

0x4da4,	// (0x0002c44e) list_preview_fixed_pane

0x4dea,	// (0x0002c494) list_empty_pane_fp_ParamLimits

0x4dea,	// (0x0002c494) list_empty_pane_fp

0x4dea,	// (0x0002c494) list_single_cale_day_pane_fp_ParamLimits

0x4dea,	// (0x0002c494) list_single_cale_day_pane_fp

0x4dea,	// (0x0002c494) list_single_graphic_heading_pane_fp_ParamLimits

0x4dea,	// (0x0002c494) list_single_graphic_heading_pane_fp

0x4dea,	// (0x0002c494) list_single_graphic_pane_fp_ParamLimits

0x4dea,	// (0x0002c494) list_single_graphic_pane_fp

0x4dea,	// (0x0002c494) list_single_heading_pane_fp_ParamLimits

0x4dea,	// (0x0002c494) list_single_heading_pane_fp

0x4dea,	// (0x0002c494) list_single_pane_fp_ParamLimits

0x4dea,	// (0x0002c494) list_single_pane_fp

0x4e00,	// (0x0002c4aa) list_single_pane_fp_g1_ParamLimits

0x4e00,	// (0x0002c4aa) list_single_pane_fp_g1

0xe8cb,	// (0x00035f75) list_single_pane_fp_g2_ParamLimits

0xe8cb,	// (0x00035f75) list_single_pane_fp_g2

0xeeba,	// (0x00036564) list_single_pane_fp_g3_ParamLimits

0xeeba,	// (0x00036564) list_single_pane_fp_g3

0x4e0c,	// (0x0002c4b6) list_single_pane_fp_g4_ParamLimits

0x4e0c,	// (0x0002c4b6) list_single_pane_fp_g4

0x0003,

0xfb54,	// (0x000371fe) list_single_pane_fp_g_ParamLimits

0xfb54,	// (0x000371fe) list_single_pane_fp_g

0xeece,	// (0x00036578) list_single_pane_fp_t1_ParamLimits

0xeece,	// (0x00036578) list_single_pane_fp_t1

0xeee5,	// (0x0003658f) list_single_graphic_pane_fp_g1_ParamLimits

0xeee5,	// (0x0003658f) list_single_graphic_pane_fp_g1

0x4e00,	// (0x0002c4aa) list_single_graphic_pane_fp_g2_ParamLimits

0x4e00,	// (0x0002c4aa) list_single_graphic_pane_fp_g2

0xe8cb,	// (0x00035f75) list_single_graphic_pane_fp_g3_ParamLimits

0xe8cb,	// (0x00035f75) list_single_graphic_pane_fp_g3

0xeeba,	// (0x00036564) list_single_graphic_pane_fp_g4_ParamLimits

0xeeba,	// (0x00036564) list_single_graphic_pane_fp_g4

0x4e0c,	// (0x0002c4b6) list_single_graphic_pane_fp_g5_ParamLimits

0x4e0c,	// (0x0002c4b6) list_single_graphic_pane_fp_g5

0x0004,

0xfb5d,	// (0x00037207) list_single_graphic_pane_fp_g_ParamLimits

0xfb5d,	// (0x00037207) list_single_graphic_pane_fp_g

0xeef1,	// (0x0003659b) list_single_graphic_pane_fp_t1_ParamLimits

0xeef1,	// (0x0003659b) list_single_graphic_pane_fp_t1

0xeee5,	// (0x0003658f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xeee5,	// (0x0003658f) list_single_graphic_heading_pane_fp_g1

0x4e00,	// (0x0002c4aa) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4e00,	// (0x0002c4aa) list_single_graphic_heading_pane_fp_g2

0xe8cb,	// (0x00035f75) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe8cb,	// (0x00035f75) list_single_graphic_heading_pane_fp_g3

0xeeba,	// (0x00036564) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xeeba,	// (0x00036564) list_single_graphic_heading_pane_fp_g4

0x4e0c,	// (0x0002c4b6) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4e0c,	// (0x0002c4b6) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5d,	// (0x00037207) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5d,	// (0x00037207) list_single_graphic_heading_pane_fp_g

0xef07,	// (0x000365b1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xef07,	// (0x000365b1) list_single_graphic_heading_pane_fp_t1

0xef1d,	// (0x000365c7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xef1d,	// (0x000365c7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb68,	// (0x00037212) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb68,	// (0x00037212) list_single_graphic_heading_pane_fp_t

0xef2f,	// (0x000365d9) list_single_cale_day_pane_fp_g1_ParamLimits

0xef2f,	// (0x000365d9) list_single_cale_day_pane_fp_g1

0x4e18,	// (0x0002c4c2) list_single_cale_day_pane_fp_g2_ParamLimits

0x4e18,	// (0x0002c4c2) list_single_cale_day_pane_fp_g2

0xef67,	// (0x00036611) list_single_cale_day_pane_fp_g3_ParamLimits

0xef67,	// (0x00036611) list_single_cale_day_pane_fp_g3

0xef8f,	// (0x00036639) list_single_cale_day_pane_fp_g4_ParamLimits

0xef8f,	// (0x00036639) list_single_cale_day_pane_fp_g4

0xefb3,	// (0x0003665d) list_single_cale_day_pane_fp_g5_ParamLimits

0xefb3,	// (0x0003665d) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6d,	// (0x00037217) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6d,	// (0x00037217) list_single_cale_day_pane_fp_g

0xefd7,	// (0x00036681) list_single_cale_day_pane_fp_t1_ParamLimits

0xefd7,	// (0x00036681) list_single_cale_day_pane_fp_t1

0xeffd,	// (0x000366a7) list_single_cale_day_pane_fp_t2_ParamLimits

0xeffd,	// (0x000366a7) list_single_cale_day_pane_fp_t2

0xf016,	// (0x000366c0) list_single_cale_day_pane_fp_t3_ParamLimits

0xf016,	// (0x000366c0) list_single_cale_day_pane_fp_t3

0x0002,

0xfb78,	// (0x00037222) list_single_cale_day_pane_fp_t_ParamLimits

0xfb78,	// (0x00037222) list_single_cale_day_pane_fp_t

0x4e00,	// (0x0002c4aa) list_empty_pane_fp_g1_ParamLimits

0x4e00,	// (0x0002c4aa) list_empty_pane_fp_g1

0xf02f,	// (0x000366d9) list_empty_pane_fp_t1

0xf03d,	// (0x000366e7) list_empty_pane_fp_t2

0x0001,

0xfb7f,	// (0x00037229) list_empty_pane_fp_t

0x4e00,	// (0x0002c4aa) list_single_heading_pane_fp_g1_ParamLimits

0x4e00,	// (0x0002c4aa) list_single_heading_pane_fp_g1

0xe8cb,	// (0x00035f75) list_single_heading_pane_fp_g2_ParamLimits

0xe8cb,	// (0x00035f75) list_single_heading_pane_fp_g2

0xeeba,	// (0x00036564) list_single_heading_pane_fp_g3_ParamLimits

0xeeba,	// (0x00036564) list_single_heading_pane_fp_g3

0x0002,

0xfb84,	// (0x0003722e) list_single_heading_pane_fp_g_ParamLimits

0xfb84,	// (0x0003722e) list_single_heading_pane_fp_g

0xf04b,	// (0x000366f5) list_single_heading_pane_fp_t1_ParamLimits

0xf04b,	// (0x000366f5) list_single_heading_pane_fp_t1

0xf05d,	// (0x00036707) list_single_heading_pane_fp_t2_ParamLimits

0xf05d,	// (0x00036707) list_single_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x00037235) list_single_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x00037235) list_single_heading_pane_fp_t

0x966c,	// (0x00030d16) aid_size_cell_fast

0xc31b,	// (0x000339c5) soft_indicator_pane_cp1_t1

0x9675,	// (0x00030d1f) cell_app_pane_cp2_ParamLimits

0x9675,	// (0x00030d1f) cell_app_pane_cp2

0x196b,	// (0x00029015) fep_hwr_candidate_drop_down_list_pane

0xd009,	// (0x000346b3) fep_hwr_candidate_pane_g3_ParamLimits

0xd009,	// (0x000346b3) fep_hwr_candidate_pane_g3

0xd016,	// (0x000346c0) fep_hwr_candidate_pane_g4_ParamLimits

0xd016,	// (0x000346c0) fep_hwr_candidate_pane_g4

0x0002,

0xfaff,	// (0x000371a9) fep_hwr_candidate_pane_g_ParamLimits

0xfaff,	// (0x000371a9) fep_hwr_candidate_pane_g

0x48c0,	// (0x0002bf6a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x48c0,	// (0x0002bf6a) fep_vkb_candidate_drop_down_list_pane

0x4cc3,	// (0x0002c36d) fep_vkb_candidate_pane_g3

0x4ccb,	// (0x0002c375) fep_vkb_candidate_pane_g4

0x0002,

0xfb2c,	// (0x000371d6) fep_vkb_candidate_pane_g

0x49cb,	// (0x0002c075) cell_hwr_candidate_pane_g1_ParamLimits

0x4ce2,	// (0x0002c38c) cell_hwr_candidate_pane_g3_ParamLimits

0x4ce2,	// (0x0002c38c) cell_hwr_candidate_pane_g3

0x4d03,	// (0x0002c3ad) cell_hwr_candidate_pane_g4_ParamLimits

0x4d03,	// (0x0002c3ad) cell_hwr_candidate_pane_g4

0x0002,

0xfb46,	// (0x000371f0) cell_hwr_candidate_pane_g_ParamLimits

0xfb46,	// (0x000371f0) cell_hwr_candidate_pane_g

0x4d24,	// (0x0002c3ce) cell_vkb_candidate_pane_g3_ParamLimits

0x4d24,	// (0x0002c3ce) cell_vkb_candidate_pane_g3

0x4d3f,	// (0x0002c3e9) cell_vkb_candidate_pane_g4_ParamLimits

0x4d3f,	// (0x0002c3e9) cell_vkb_candidate_pane_g4

0xb8bd,	// (0x00032f67) cell_app_pane_cp2_g1_ParamLimits

0xb8bd,	// (0x00032f67) cell_app_pane_cp2_g1

0x4e42,	// (0x0002c4ec) cell_app_pane_cp2_g2_ParamLimits

0x4e42,	// (0x0002c4ec) cell_app_pane_cp2_g2

0x0001,

0xfb90,	// (0x0003723a) cell_app_pane_cp2_g_ParamLimits

0xfb90,	// (0x0003723a) cell_app_pane_cp2_g

0x4e4e,	// (0x0002c4f8) cell_app_pane_cp2_t1_ParamLimits

0x4e4e,	// (0x0002c4f8) cell_app_pane_cp2_t1

0xc5c4,	// (0x00033c6e) grid_highlight_pane_cp1_ParamLimits

0xc5c4,	// (0x00033c6e) grid_highlight_pane_cp1

0x1ba7,	// (0x00029251) cell_hwr_candidate_pane_cp1_ParamLimits

0x1ba7,	// (0x00029251) cell_hwr_candidate_pane_cp1

0x49cb,	// (0x0002c075) fep_hwr_candidate_drop_down_list_pane_g1

0x4e60,	// (0x0002c50a) fep_hwr_candidate_drop_down_list_pane_g2

0x4e6d,	// (0x0002c517) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb95,	// (0x0003723f) fep_hwr_candidate_drop_down_list_pane_g

0x1bc6,	// (0x00029270) fep_hwr_candidate_drop_down_list_scroll_pane

0x1bcf,	// (0x00029279) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1bcf,	// (0x00029279) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1bdc,	// (0x00029286) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1bdc,	// (0x00029286) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1be9,	// (0x00029293) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1be9,	// (0x00029293) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4d24,	// (0x0002c3ce) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4d24,	// (0x0002c3ce) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4d3f,	// (0x0002c3e9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d3f,	// (0x0002c3e9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1bf6,	// (0x000292a0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1bf6,	// (0x000292a0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1c11,	// (0x000292bb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1c11,	// (0x000292bb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1c2c,	// (0x000292d6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1c2c,	// (0x000292d6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9c,	// (0x00037246) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9c,	// (0x00037246) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4e7a,	// (0x0002c524) cell_vkb_candidate_pane_cp1_ParamLimits

0x4e7a,	// (0x0002c524) cell_vkb_candidate_pane_cp1

0x49cb,	// (0x0002c075) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x49cb,	// (0x0002c075) fep_vkb_candidate_drop_down_list_pane_g1

0x4e60,	// (0x0002c50a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4e60,	// (0x0002c50a) fep_vkb_candidate_drop_down_list_pane_g2

0x4e6d,	// (0x0002c517) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4e6d,	// (0x0002c517) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb95,	// (0x0003723f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb95,	// (0x0003723f) fep_vkb_candidate_drop_down_list_pane_g

0x4e9a,	// (0x0002c544) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4e9a,	// (0x0002c544) fep_vkb_candidate_drop_down_list_scroll_pane

0x4ea7,	// (0x0002c551) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4ea7,	// (0x0002c551) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4eb4,	// (0x0002c55e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4eb4,	// (0x0002c55e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4ec0,	// (0x0002c56a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4ec0,	// (0x0002c56a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4ce2,	// (0x0002c38c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4ce2,	// (0x0002c38c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4d03,	// (0x0002c3ad) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d03,	// (0x0002c3ad) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4ecc,	// (0x0002c576) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4ecc,	// (0x0002c576) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4eed,	// (0x0002c597) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4eed,	// (0x0002c597) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4f0e,	// (0x0002c5b8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4f0e,	// (0x0002c5b8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x00037257) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x00037257) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8f6e,	// (0x00030618) title_pane_g1_ParamLimits

0x8f81,	// (0x0003062b) title_pane_g2_ParamLimits

0xf529,	// (0x00036bd3) title_pane_g_ParamLimits

0xca06,	// (0x000340b0) aid_call2_pane

0xca0e,	// (0x000340b8) aid_call_pane

0xca16,	// (0x000340c0) popup_clock_analogue_window_g1

0xca16,	// (0x000340c0) popup_clock_analogue_window_g2

0xf2ab,	// (0x00036955) popup_clock_analogue_window_g3

0xf2b4,	// (0x0003695e) popup_clock_analogue_window_g4

0xc1a8,	// (0x00033852) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x00036d6e) popup_clock_analogue_window_g

0xf2bc,	// (0x00036966) popup_clock_analogue_window_t1

0xf2ca,	// (0x00036974) clock_digital_number_pane_ParamLimits

0xf2ca,	// (0x00036974) clock_digital_number_pane

0xf2d6,	// (0x00036980) clock_digital_number_pane_cp02_ParamLimits

0xf2d6,	// (0x00036980) clock_digital_number_pane_cp02

0xf2e2,	// (0x0003698c) clock_digital_number_pane_cp03_ParamLimits

0xf2e2,	// (0x0003698c) clock_digital_number_pane_cp03

0xf2ee,	// (0x00036998) clock_digital_number_pane_cp04_ParamLimits

0xf2ee,	// (0x00036998) clock_digital_number_pane_cp04

0xf2fa,	// (0x000369a4) clock_digital_separator_pane_ParamLimits

0xf2fa,	// (0x000369a4) clock_digital_separator_pane

0xf306,	// (0x000369b0) popup_clock_digital_window_t1_ParamLimits

0xf306,	// (0x000369b0) popup_clock_digital_window_t1

0xc1a8,	// (0x00033852) clock_digital_number_pane_g1

0xc1a8,	// (0x00033852) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x00036d79) clock_digital_number_pane_g

0xc1a8,	// (0x00033852) clock_digital_separator_pane_g1

0xc1a8,	// (0x00033852) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x00036d79) clock_digital_separator_pane_g

0xa4c0,	// (0x00031b6a) aid_fill_nsta_ParamLimits

0xa5f6,	// (0x00031ca0) indicator_nsta_pane_ParamLimits

0x0ab3,	// (0x0002815d) popup_clock_analogue_window

0x0ab3,	// (0x0002815d) popup_clock_digital_window

0xb4b0,	// (0x00032b5a) grid_indicator_nsta_pane_ParamLimits

0x4151,	// (0x0002b7fb) clock_nsta_pane_t2

0x0001,

0xfa7f,	// (0x00037129) clock_nsta_pane_t

0xf28c,	// (0x00036936) aid_size_max_handle

0x9753,	// (0x00030dfd) aid_size_min_handle

0xce5f,	// (0x00034509) editor_scroll_pane

0x4f29,	// (0x0002c5d3) ex_editor_pane

0xc6f6,	// (0x00033da0) scroll_pane_cp13

0xc56c,	// (0x00033c16) scroll_pane_cp14

0xca45,	// (0x000340ef) scroll_pane_cp36

0x981d,	// (0x00030ec7) list_single_graphic_hl_pane_cp2_ParamLimits

0x981d,	// (0x00030ec7) list_single_graphic_hl_pane_cp2

0x8b3f,	// (0x000301e9) list_single_graphic_hl_pane_ParamLimits

0x8b3f,	// (0x000301e9) list_single_graphic_hl_pane

0x8b52,	// (0x000301fc) aid_size_min_hl_cp1

0x4f31,	// (0x0002c5db) list_highlight_pane_cp34_ParamLimits

0x4f31,	// (0x0002c5db) list_highlight_pane_cp34

0x4f42,	// (0x0002c5ec) list_single_graphic_hl_pane_g1_ParamLimits

0x4f42,	// (0x0002c5ec) list_single_graphic_hl_pane_g1

0x8b5b,	// (0x00030205) list_single_graphic_hl_pane_g2_ParamLimits

0x8b5b,	// (0x00030205) list_single_graphic_hl_pane_g2

0x8b5b,	// (0x00030205) list_single_graphic_hl_pane_g3_ParamLimits

0x8b5b,	// (0x00030205) list_single_graphic_hl_pane_g3

0x8b67,	// (0x00030211) list_single_graphic_hl_pane_g4_ParamLimits

0x8b67,	// (0x00030211) list_single_graphic_hl_pane_g4

0x8b73,	// (0x0003021d) list_single_graphic_hl_pane_g5_ParamLimits

0x8b73,	// (0x0003021d) list_single_graphic_hl_pane_g5

0x0004,

0xfbbe,	// (0x00037268) list_single_graphic_hl_pane_g_ParamLimits

0xfbbe,	// (0x00037268) list_single_graphic_hl_pane_g

0x8b87,	// (0x00030231) list_single_graphic_hl_pane_t1_ParamLimits

0x8b87,	// (0x00030231) list_single_graphic_hl_pane_t1

0x4f4f,	// (0x0002c5f9) aid_size_min_hl_cp2

0x4f58,	// (0x0002c602) list_highlight_pane_cp34_cp2_ParamLimits

0x4f58,	// (0x0002c602) list_highlight_pane_cp34_cp2

0x4f42,	// (0x0002c5ec) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4f42,	// (0x0002c5ec) list_single_graphic_hl_pane_g1_cp2

0x4f65,	// (0x0002c60f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4f65,	// (0x0002c60f) list_single_graphic_hl_pane_g2_cp2

0xb8db,	// (0x00032f85) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb8db,	// (0x00032f85) list_single_graphic_hl_pane_g3_cp2

0xcdbe,	// (0x00034468) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcdbe,	// (0x00034468) list_single_graphic_hl_pane_g4_cp2

0x4f7f,	// (0x0002c629) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4f7f,	// (0x0002c629) list_single_graphic_hl_pane_g5_cp2

0x9be3,	// (0x0003128d) control_pane_g4_ParamLimits

0x9be3,	// (0x0003128d) control_pane_g4

0xc706,	// (0x00033db0) bg_popup_sub_pane_cp10_ParamLimits

0x4765,	// (0x0002be0f) list_choice_list_pane_ParamLimits

0x4774,	// (0x0002be1e) scroll_pane_cp23

0xc338,	// (0x000339e2) bg_popup_preview_window_pane_cp02_ParamLimits

0x4da4,	// (0x0002c44e) list_preview_fixed_pane_ParamLimits

0x4dba,	// (0x0002c464) list_preview_fixed_pane_cp_ParamLimits

0x4dba,	// (0x0002c464) list_preview_fixed_pane_cp

0x4dc6,	// (0x0002c470) popup_preview_fixed_window_g1_ParamLimits

0x4dc6,	// (0x0002c470) popup_preview_fixed_window_g1

0x4dd2,	// (0x0002c47c) popup_preview_fixed_window_g2_ParamLimits

0x4dd2,	// (0x0002c47c) popup_preview_fixed_window_g2

0x0002,

0xfb4d,	// (0x000371f7) popup_preview_fixed_window_g_ParamLimits

0xfb4d,	// (0x000371f7) popup_preview_fixed_window_g

0xf200,	// (0x000368aa) aid_navi_side_left_pane_ParamLimits

0xf215,	// (0x000368bf) aid_navi_side_right_pane_ParamLimits

0xf22d,	// (0x000368d7) navi_icon_pane_stacon_ParamLimits

0xf241,	// (0x000368eb) navi_navi_pane_stacon_ParamLimits

0xf22d,	// (0x000368d7) navi_text_pane_stacon_ParamLimits

0xc19e,	// (0x00033848) main_text_info_pane

0x4fa9,	// (0x0002c653) listscroll_text_info_pane

0x4fb1,	// (0x0002c65b) list_text_info_pane_ParamLimits

0x4fb1,	// (0x0002c65b) list_text_info_pane

0x4fc0,	// (0x0002c66a) scroll_pane_cp24_ParamLimits

0x4fc0,	// (0x0002c66a) scroll_pane_cp24

0xb8e9,	// (0x00032f93) list_text_info_pane_t1_ParamLimits

0xb8e9,	// (0x00032f93) list_text_info_pane_t1

0x9d87,	// (0x00031431) popup_fast_swap2_window_ParamLimits

0x9d87,	// (0x00031431) popup_fast_swap2_window

0x5012,	// (0x0002c6bc) aid_size_cell_fast2

0xc19e,	// (0x00033848) bg_popup_window_pane_cp17

0x1288,	// (0x00028932) heading_pane_cp2

0x1290,	// (0x0002893a) listscroll_fast2_pane

0x501c,	// (0x0002c6c6) grid_fast2_pane

0x5026,	// (0x0002c6d0) listscroll_fast2_pane_g1

0x502e,	// (0x0002c6d8) listscroll_fast2_pane_g2

0x0001,

0xfbc9,	// (0x00037273) listscroll_fast2_pane_g

0xc6f6,	// (0x00033da0) scroll_pane_cp26

0x5038,	// (0x0002c6e2) cell_fast2_pane_ParamLimits

0x5038,	// (0x0002c6e2) cell_fast2_pane

0x504d,	// (0x0002c6f7) cell_fast2_pane_g1

0x5056,	// (0x0002c700) cell_fast2_pane_g2

0x505f,	// (0x0002c709) cell_fast2_pane_g3

0x0002,

0xfbce,	// (0x00037278) cell_fast2_pane_g

0xc4a3,	// (0x00033b4d) grid_highlight_pane_cp9

0xc4b8,	// (0x00033b62) main_eswt_pane_ParamLimits

0xc4b8,	// (0x00033b62) main_eswt_pane

0x4fd5,	// (0x0002c67f) list_single_text_info_pane

0x5067,	// (0x0002c711) eswt_ctrl_button_pane

0x5067,	// (0x0002c711) eswt_ctrl_canvas_pane

0xb905,	// (0x00032faf) eswt_ctrl_combo_pane

0x5067,	// (0x0002c711) eswt_ctrl_default_pane

0x5067,	// (0x0002c711) eswt_ctrl_label_pane

0x5077,	// (0x0002c721) eswt_ctrl_wait_pane

0xb90d,	// (0x00032fb7) eswt_shell_pane

0xc19e,	// (0x00033848) listscroll_eswt_app_pane

0x509f,	// (0x0002c749) popup_eswt_tasktip_window_ParamLimits

0x509f,	// (0x0002c749) popup_eswt_tasktip_window

0x0e0d,	// (0x000284b7) bg_popup_window_pane_cp18

0x50b0,	// (0x0002c75a) eswt_control_pane_g1_ParamLimits

0x50b0,	// (0x0002c75a) eswt_control_pane_g1

0x50bd,	// (0x0002c767) eswt_control_pane_g2_ParamLimits

0x50bd,	// (0x0002c767) eswt_control_pane_g2

0x50ca,	// (0x0002c774) eswt_control_pane_g3_ParamLimits

0x50ca,	// (0x0002c774) eswt_control_pane_g3

0x50d7,	// (0x0002c781) eswt_control_pane_g4_ParamLimits

0x50d7,	// (0x0002c781) eswt_control_pane_g4

0x0003,

0xfbd5,	// (0x0003727f) eswt_control_pane_g_ParamLimits

0xfbd5,	// (0x0003727f) eswt_control_pane_g

0xc5c4,	// (0x00033c6e) bg_button_pane_ParamLimits

0xc5c4,	// (0x00033c6e) bg_button_pane

0xc4b8,	// (0x00033b62) common_borders_pane_copy2_ParamLimits

0xc4b8,	// (0x00033b62) common_borders_pane_copy2

0x50e4,	// (0x0002c78e) control_button_pane_g1_ParamLimits

0x50e4,	// (0x0002c78e) control_button_pane_g1

0x50f0,	// (0x0002c79a) control_button_pane_g2_ParamLimits

0x50f0,	// (0x0002c79a) control_button_pane_g2

0x50fc,	// (0x0002c7a6) control_button_pane_g3_ParamLimits

0x50fc,	// (0x0002c7a6) control_button_pane_g3

0x0002,

0xfbde,	// (0x00037288) control_button_pane_g_ParamLimits

0xfbde,	// (0x00037288) control_button_pane_g

0x5110,	// (0x0002c7ba) control_button_pane_t1

0x511e,	// (0x0002c7c8) control_button_pane_t2

0x0001,

0xfbe5,	// (0x0003728f) control_button_pane_t

0x0d09,	// (0x000283b3) bg_button_pane_g1

0x0d11,	// (0x000283bb) bg_button_pane_g2

0x0d19,	// (0x000283c3) bg_button_pane_g3

0x0d21,	// (0x000283cb) bg_button_pane_g4

0x0d29,	// (0x000283d3) bg_button_pane_g5

0x0d31,	// (0x000283db) bg_button_pane_g6

0x0d39,	// (0x000283e3) bg_button_pane_g7

0x0d41,	// (0x000283eb) bg_button_pane_g8

0x0d49,	// (0x000283f3) bg_button_pane_g9

0x0008,

0xf82d,	// (0x00036ed7) bg_button_pane_g

0x4720,	// (0x0002bdca) common_borders_pane_ParamLimits

0x4720,	// (0x0002bdca) common_borders_pane

0x50b0,	// (0x0002c75a) eswt_control_pane_g1_copy1_ParamLimits

0x50b0,	// (0x0002c75a) eswt_control_pane_g1_copy1

0x50bd,	// (0x0002c767) eswt_control_pane_g2_copy1_ParamLimits

0x50bd,	// (0x0002c767) eswt_control_pane_g2_copy1

0x50ca,	// (0x0002c774) eswt_control_pane_g3_copy1_ParamLimits

0x50ca,	// (0x0002c774) eswt_control_pane_g3_copy1

0x50d7,	// (0x0002c781) eswt_control_pane_g4_copy1_ParamLimits

0x50d7,	// (0x0002c781) eswt_control_pane_g4_copy1

0x475b,	// (0x0002be05) bg_eswt_ctrl_canvas_pane_g1

0x4720,	// (0x0002bdca) common_borders_pane_cp2_ParamLimits

0x4720,	// (0x0002bdca) common_borders_pane_cp2

0x4720,	// (0x0002bdca) common_borders_pane_cp3_ParamLimits

0x4720,	// (0x0002bdca) common_borders_pane_cp3

0x512c,	// (0x0002c7d6) separator_horizontal_pane

0x5134,	// (0x0002c7de) separator_vertical_pane

0x50b0,	// (0x0002c75a) eswt_control_pane_g1_copy2_ParamLimits

0x50b0,	// (0x0002c75a) eswt_control_pane_g1_copy2

0x50bd,	// (0x0002c767) eswt_control_pane_g2_copy2_ParamLimits

0x50bd,	// (0x0002c767) eswt_control_pane_g2_copy2

0x50ca,	// (0x0002c774) eswt_control_pane_g3_copy2_ParamLimits

0x50ca,	// (0x0002c774) eswt_control_pane_g3_copy2

0x50d7,	// (0x0002c781) eswt_control_pane_g4_copy2_ParamLimits

0x50d7,	// (0x0002c781) eswt_control_pane_g4_copy2

0xc19e,	// (0x00033848) common_borders_pane_cp4

0x513d,	// (0x0002c7e7) separator_horizontal_pane_g1

0x5146,	// (0x0002c7f0) separator_horizontal_pane_g2

0x514f,	// (0x0002c7f9) separator_horizontal_pane_g3

0x0002,

0xfbea,	// (0x00037294) separator_horizontal_pane_g

0x50b0,	// (0x0002c75a) eswt_control_pane_g1_copy3_ParamLimits

0x50b0,	// (0x0002c75a) eswt_control_pane_g1_copy3

0x50bd,	// (0x0002c767) eswt_control_pane_g2_copy3_ParamLimits

0x50bd,	// (0x0002c767) eswt_control_pane_g2_copy3

0x50ca,	// (0x0002c774) eswt_control_pane_g3_copy3_ParamLimits

0x50ca,	// (0x0002c774) eswt_control_pane_g3_copy3

0x50d7,	// (0x0002c781) eswt_control_pane_g4_copy3_ParamLimits

0x50d7,	// (0x0002c781) eswt_control_pane_g4_copy3

0xc19e,	// (0x00033848) common_borders_pane_cp5

0x5158,	// (0x0002c802) separator_vertical_pane_g1

0x5161,	// (0x0002c80b) separator_vertical_pane_g2

0x516a,	// (0x0002c814) separator_vertical_pane_g3

0x0002,

0xfbf1,	// (0x0003729b) separator_vertical_pane_g

0x50b0,	// (0x0002c75a) eswt_control_pane_g1_copy4_ParamLimits

0x50b0,	// (0x0002c75a) eswt_control_pane_g1_copy4

0x50bd,	// (0x0002c767) eswt_control_pane_g2_copy4_ParamLimits

0x50bd,	// (0x0002c767) eswt_control_pane_g2_copy4

0x50ca,	// (0x0002c774) eswt_control_pane_g3_copy4_ParamLimits

0x50ca,	// (0x0002c774) eswt_control_pane_g3_copy4

0x50d7,	// (0x0002c781) eswt_control_pane_g4_copy4_ParamLimits

0x50d7,	// (0x0002c781) eswt_control_pane_g4_copy4

0xb92d,	// (0x00032fd7) eswt_ctrl_combo_button_pane

0xb935,	// (0x00032fdf) eswt_ctrl_input_pane

0xb93d,	// (0x00032fe7) popup_choice_list_window_cp70

0xb945,	// (0x00032fef) eswt_ctrl_input_pane_t1

0xc19e,	// (0x00033848) input_focus_pane_cp70

0x4720,	// (0x0002bdca) bg_button_pane_cp70_ParamLimits

0x4720,	// (0x0002bdca) bg_button_pane_cp70

0xb953,	// (0x00032ffd) eswt_ctrl_combo_button_pane_g1

0x51a1,	// (0x0002c84b) wait_bar_pane_cp70

0x0e0d,	// (0x000284b7) bg_popup_window_pane_cp70_ParamLimits

0x0e0d,	// (0x000284b7) bg_popup_window_pane_cp70

0x51a9,	// (0x0002c853) popup_eswt_tasktip_window_t1

0x51bf,	// (0x0002c869) wait_bar_pane_cp71_ParamLimits

0x51bf,	// (0x0002c869) wait_bar_pane_cp71

0x51cb,	// (0x0002c875) grid_eswt_app_pane

0xc8f2,	// (0x00033f9c) scroll_pane_cp70

0xb95b,	// (0x00033005) cell_eswt_app_pane_ParamLimits

0xb95b,	// (0x00033005) cell_eswt_app_pane

0xb985,	// (0x0003302f) cell_eswt_app_pane_g1_ParamLimits

0xb985,	// (0x0003302f) cell_eswt_app_pane_g1

0xb9b4,	// (0x0003305e) cell_eswt_app_pane_g2_ParamLimits

0xb9b4,	// (0x0003305e) cell_eswt_app_pane_g2

0x0001,

0xfbf8,	// (0x000372a2) cell_eswt_app_pane_g_ParamLimits

0xfbf8,	// (0x000372a2) cell_eswt_app_pane_g

0xb9d8,	// (0x00033082) cell_eswt_app_pane_t1_ParamLimits

0xb9d8,	// (0x00033082) cell_eswt_app_pane_t1

0x5289,	// (0x0002c933) grid_highlight_pane_cp70_ParamLimits

0x5289,	// (0x0002c933) grid_highlight_pane_cp70

0xcd7a,	// (0x00034424) set_content_pane_g1

0x9b75,	// (0x0003121f) status_small_volume_pane

0xba0a,	// (0x000330b4) status_small_volume_pane_g1

0xba12,	// (0x000330bc) volume_small2_pane

0xba1b,	// (0x000330c5) volume_small2_pane_g1

0xba24,	// (0x000330ce) volume_small2_pane_g2

0xba2d,	// (0x000330d7) volume_small2_pane_g3

0xba36,	// (0x000330e0) volume_small2_pane_g4

0xba3f,	// (0x000330e9) volume_small2_pane_g5

0xba48,	// (0x000330f2) volume_small2_pane_g6

0xba51,	// (0x000330fb) volume_small2_pane_g7

0xba5a,	// (0x00033104) volume_small2_pane_g8

0xba63,	// (0x0003310d) volume_small2_pane_g9

0xba6c,	// (0x00033116) volume_small2_pane_g10

0x0009,

0xfbfd,	// (0x000372a7) volume_small2_pane_g

0x4b13,	// (0x0002c1bd) fep_vkb_top_text_pane_g1_ParamLimits

0xb865,	// (0x00032f0f) fep_vkb_top_text_pane_t1_ParamLimits

0x4dde,	// (0x0002c488) popup_preview_fixed_window_g3_ParamLimits

0x4dde,	// (0x0002c488) popup_preview_fixed_window_g3

0xa3fe,	// (0x00031aa8) popup_toolbar_trans_pane

0xb0e3,	// (0x0003278d) aid_height_set_list_ParamLimits

0x3502,	// (0x0002abac) aid_size_parent_ParamLimits

0xc706,	// (0x00033db0) list_highlight_pane_cp2_ParamLimits

0xcd7a,	// (0x00034424) set_content_pane_g1_ParamLimits

0xb25e,	// (0x00032908) list_single_image_pane_ParamLimits

0xb25e,	// (0x00032908) list_single_image_pane

0xba75,	// (0x0003311f) aid_size_cell_image_ParamLimits

0xba75,	// (0x0003311f) aid_size_cell_image

0xba82,	// (0x0003312c) grid_single_image_pane_ParamLimits

0xba82,	// (0x0003312c) grid_single_image_pane

0xd02f,	// (0x000346d9) list_single_image_pane_g1_ParamLimits

0xd02f,	// (0x000346d9) list_single_image_pane_g1

0x52ae,	// (0x0002c958) list_single_image_pane_g2_ParamLimits

0x52ae,	// (0x0002c958) list_single_image_pane_g2

0x0001,

0xfc12,	// (0x000372bc) list_single_image_pane_g_ParamLimits

0xfc12,	// (0x000372bc) list_single_image_pane_g

0x52c2,	// (0x0002c96c) list_single_image_pane_t1_ParamLimits

0x52c2,	// (0x0002c96c) list_single_image_pane_t1

0xba8e,	// (0x00033138) cell_image_list_pane_ParamLimits

0xba8e,	// (0x00033138) cell_image_list_pane

0xbaa2,	// (0x0003314c) cell_image_list_pane_g1

0xbaab,	// (0x00033155) cell_image_list_pane_g2

0x0001,

0xfc17,	// (0x000372c1) cell_image_list_pane_g

0xbab4,	// (0x0003315e) aid_size_cell_tb_trans_pane

0xc5c4,	// (0x00033c6e) bg_tb_trans_pane

0xd03b,	// (0x000346e5) grid_tb_trans_pane

0x0d09,	// (0x000283b3) bg_tb_trans_pane_g1

0x0d11,	// (0x000283bb) bg_tb_trans_pane_g2

0x0d19,	// (0x000283c3) bg_tb_trans_pane_g3

0x0d21,	// (0x000283cb) bg_tb_trans_pane_g4

0x0d29,	// (0x000283d3) bg_tb_trans_pane_g5

0x0d41,	// (0x000283eb) bg_tb_trans_pane_g6

0x0d49,	// (0x000283f3) bg_tb_trans_pane_g7

0x0d31,	// (0x000283db) bg_tb_trans_pane_g8

0x0d39,	// (0x000283e3) bg_tb_trans_pane_g9

0x0008,

0xfc1c,	// (0x000372c6) bg_tb_trans_pane_g

0xd04f,	// (0x000346f9) cell_toolbar_trans_pane_ParamLimits

0xd04f,	// (0x000346f9) cell_toolbar_trans_pane

0x475b,	// (0x0002be05) cell_toolbar_trans_pane_g1

0xb579,	// (0x00032c23) list_form2_midp_pane_t1

0xb587,	// (0x00032c31) list_form2_midp_pane_t2

0x0001,

0xfac5,	// (0x0003716f) list_form2_midp_pane_t

0x4342,	// (0x0002b9ec) scroll_pane_cp51_ParamLimits

0x44fe,	// (0x0002bba8) form2_midp_wait_pane_g1

0x4507,	// (0x0002bbb1) form2_midp_wait_pane_g2

0x4510,	// (0x0002bbba) form2_midp_wait_pane_g3

0x0002,

0xfada,	// (0x00037184) form2_midp_wait_pane_g

0xc20e,	// (0x000338b8) list_highlight_pane_cp21_ParamLimits

0x4558,	// (0x0002bc02) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4567,	// (0x0002bc11) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x36b6,	// (0x0002ad60) list_single_2graphic_im_pane_ParamLimits

0x36b6,	// (0x0002ad60) list_single_2graphic_im_pane

0xd075,	// (0x0003471f) list_single_2graphic_im_pane_g1_ParamLimits

0xd075,	// (0x0003471f) list_single_2graphic_im_pane_g1

0xd086,	// (0x00034730) list_single_2graphic_im_pane_g2_ParamLimits

0xd086,	// (0x00034730) list_single_2graphic_im_pane_g2

0xd092,	// (0x0003473c) list_single_2graphic_im_pane_g3_ParamLimits

0xd092,	// (0x0003473c) list_single_2graphic_im_pane_g3

0x0003,

0xfc2f,	// (0x000372d9) list_single_2graphic_im_pane_g_ParamLimits

0xfc2f,	// (0x000372d9) list_single_2graphic_im_pane_g

0xd0a6,	// (0x00034750) list_single_2graphic_im_pane_t1_ParamLimits

0xd0a6,	// (0x00034750) list_single_2graphic_im_pane_t1

0x4dea,	// (0x0002c494) list_single_graphic_2heading_pane_fp_ParamLimits

0x4dea,	// (0x0002c494) list_single_graphic_2heading_pane_fp

0xeee5,	// (0x0003658f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xeee5,	// (0x0003658f) list_single_graphic_2heading_pane_fp_g1

0x4e00,	// (0x0002c4aa) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4e00,	// (0x0002c4aa) list_single_graphic_2heading_pane_fp_g2

0xe8cb,	// (0x00035f75) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe8cb,	// (0x00035f75) list_single_graphic_2heading_pane_fp_g3

0xeeba,	// (0x00036564) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xeeba,	// (0x00036564) list_single_graphic_2heading_pane_fp_g4

0x4e0c,	// (0x0002c4b6) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4e0c,	// (0x0002c4b6) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5d,	// (0x00037207) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5d,	// (0x00037207) list_single_graphic_2heading_pane_fp_g

0xf073,	// (0x0003671d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf073,	// (0x0003671d) list_single_graphic_2heading_pane_fp_t1

0xef1d,	// (0x000365c7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xef1d,	// (0x000365c7) list_single_graphic_2heading_pane_fp_t2

0xf089,	// (0x00036733) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf089,	// (0x00036733) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc38,	// (0x000372e2) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc38,	// (0x000372e2) list_single_graphic_2heading_pane_fp_t

0x47e7,	// (0x0002be91) fep_hwr_write_pane_g5_ParamLimits

0x47e7,	// (0x0002be91) fep_hwr_write_pane_g5

0x47f3,	// (0x0002be9d) fep_hwr_write_pane_g6_ParamLimits

0x47f3,	// (0x0002be9d) fep_hwr_write_pane_g6

0xb90d,	// (0x00032fb7) eswt_shell_pane_ParamLimits

0x0e0d,	// (0x000284b7) bg_popup_window_pane_cp18_ParamLimits

0x344a,	// (0x0002aaf4) heading_pane_cp70

0x51a9,	// (0x0002c853) popup_eswt_tasktip_window_t1_ParamLimits

0xa51b,	// (0x00031bc5) aid_touch_tab_arrow_left

0xa531,	// (0x00031bdb) aid_touch_tab_arrow_right

0x8f99,	// (0x00030643) title_pane_g3_ParamLimits

0x8f99,	// (0x00030643) title_pane_g3

0xc58c,	// (0x00033c36) set_value_pane_g1

0xa3fe,	// (0x00031aa8) popup_toolbar_trans_pane_ParamLimits

0xbab4,	// (0x0003315e) aid_size_cell_tb_trans_pane_ParamLimits

0xc5c4,	// (0x00033c6e) bg_tb_trans_pane_ParamLimits

0xd03b,	// (0x000346e5) grid_tb_trans_pane_ParamLimits

0xc338,	// (0x000339e2) cont_note_pane_ParamLimits

0xc338,	// (0x000339e2) cont_note_pane

0xc4b8,	// (0x00033b62) cont_snote2_single_text_pane_ParamLimits

0xc4b8,	// (0x00033b62) cont_snote2_single_text_pane

0xc4b8,	// (0x00033b62) cont_snote2_single_graphic_pane_ParamLimits

0xc4b8,	// (0x00033b62) cont_snote2_single_graphic_pane

0x14af,	// (0x00028b59) cont_note_wait_pane_ParamLimits

0x14af,	// (0x00028b59) cont_note_wait_pane

0x14af,	// (0x00028b59) cont_note_image_pane_ParamLimits

0x14af,	// (0x00028b59) cont_note_image_pane

0x53b8,	// (0x0002ca62) popup_note2_window_g1_ParamLimits

0x53b8,	// (0x0002ca62) popup_note2_window_g1

0xd0e4,	// (0x0003478e) popup_note2_window_t1_ParamLimits

0xd0e4,	// (0x0003478e) popup_note2_window_t1

0xd129,	// (0x000347d3) popup_note2_window_t2_ParamLimits

0xd129,	// (0x000347d3) popup_note2_window_t2

0xd16e,	// (0x00034818) popup_note2_window_t3_ParamLimits

0xd16e,	// (0x00034818) popup_note2_window_t3

0x54b8,	// (0x0002cb62) popup_note2_window_t4_ParamLimits

0x54b8,	// (0x0002cb62) popup_note2_window_t4

0xc3bc,	// (0x00033a66) popup_note2_window_t5_ParamLimits

0xc3bc,	// (0x00033a66) popup_note2_window_t5

0x0004,

0xfc44,	// (0x000372ee) popup_note2_window_t_ParamLimits

0xfc44,	// (0x000372ee) popup_note2_window_t

0x54e7,	// (0x0002cb91) popup_note2_image_window_g1_ParamLimits

0x54e7,	// (0x0002cb91) popup_note2_image_window_g1

0xd1b3,	// (0x0003485d) popup_note2_image_window_g2_ParamLimits

0xd1b3,	// (0x0003485d) popup_note2_image_window_g2

0x0001,

0xfc4f,	// (0x000372f9) popup_note2_image_window_g_ParamLimits

0xfc4f,	// (0x000372f9) popup_note2_image_window_g

0x5505,	// (0x0002cbaf) popup_note2_image_window_t1_ParamLimits

0x5505,	// (0x0002cbaf) popup_note2_image_window_t1

0x551d,	// (0x0002cbc7) popup_note2_image_window_t2_ParamLimits

0x551d,	// (0x0002cbc7) popup_note2_image_window_t2

0x5535,	// (0x0002cbdf) popup_note2_image_window_t3_ParamLimits

0x5535,	// (0x0002cbdf) popup_note2_image_window_t3

0x0002,

0xfc54,	// (0x000372fe) popup_note2_image_window_t_ParamLimits

0xfc54,	// (0x000372fe) popup_note2_image_window_t

0x14bd,	// (0x00028b67) popup_note2_wait_window_g1_ParamLimits

0x14bd,	// (0x00028b67) popup_note2_wait_window_g1

0x14c9,	// (0x00028b73) popup_note2_wait_window_g2_ParamLimits

0x14c9,	// (0x00028b73) popup_note2_wait_window_g2

0x14d5,	// (0x00028b7f) popup_note2_wait_window_g3_ParamLimits

0x14d5,	// (0x00028b7f) popup_note2_wait_window_g3

0x0002,

0xf80f,	// (0x00036eb9) popup_note2_wait_window_g_ParamLimits

0xf80f,	// (0x00036eb9) popup_note2_wait_window_g

0x5551,	// (0x0002cbfb) popup_note2_wait_window_t1_ParamLimits

0x5551,	// (0x0002cbfb) popup_note2_wait_window_t1

0x556f,	// (0x0002cc19) popup_note2_wait_window_t2_ParamLimits

0x556f,	// (0x0002cc19) popup_note2_wait_window_t2

0x558d,	// (0x0002cc37) popup_note2_wait_window_t3_ParamLimits

0x558d,	// (0x0002cc37) popup_note2_wait_window_t3

0x559f,	// (0x0002cc49) popup_note2_wait_window_t4_ParamLimits

0x559f,	// (0x0002cc49) popup_note2_wait_window_t4

0x0003,

0xfc5b,	// (0x00037305) popup_note2_wait_window_t_ParamLimits

0xfc5b,	// (0x00037305) popup_note2_wait_window_t

0x55b1,	// (0x0002cc5b) wait_bar2_pane_ParamLimits

0x55b1,	// (0x0002cc5b) wait_bar2_pane

0x55c9,	// (0x0002cc73) popup_snote2_single_text_window_g1_ParamLimits

0x55c9,	// (0x0002cc73) popup_snote2_single_text_window_g1

0x55f1,	// (0x0002cc9b) popup_snote2_single_text_window_t1_ParamLimits

0x55f1,	// (0x0002cc9b) popup_snote2_single_text_window_t1

0x563d,	// (0x0002cce7) popup_snote2_single_text_window_t2_ParamLimits

0x563d,	// (0x0002cce7) popup_snote2_single_text_window_t2

0x5689,	// (0x0002cd33) popup_snote2_single_text_window_t3_ParamLimits

0x5689,	// (0x0002cd33) popup_snote2_single_text_window_t3

0x56ca,	// (0x0002cd74) popup_snote2_single_text_window_t4_ParamLimits

0x56ca,	// (0x0002cd74) popup_snote2_single_text_window_t4

0x5700,	// (0x0002cdaa) popup_snote2_single_text_window_t5_ParamLimits

0x5700,	// (0x0002cdaa) popup_snote2_single_text_window_t5

0x0004,

0xfc64,	// (0x0003730e) popup_snote2_single_text_window_t_ParamLimits

0xfc64,	// (0x0003730e) popup_snote2_single_text_window_t

0xd1c5,	// (0x0003486f) popup_snote2_single_graphic_window_g1_ParamLimits

0xd1c5,	// (0x0003486f) popup_snote2_single_graphic_window_g1

0x5753,	// (0x0002cdfd) popup_snote2_single_graphic_window_g2_ParamLimits

0x5753,	// (0x0002cdfd) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6f,	// (0x00037319) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6f,	// (0x00037319) popup_snote2_single_graphic_window_g

0x577b,	// (0x0002ce25) popup_snote2_single_graphic_window_t1_ParamLimits

0x577b,	// (0x0002ce25) popup_snote2_single_graphic_window_t1

0x57c7,	// (0x0002ce71) popup_snote2_single_graphic_window_t2_ParamLimits

0x57c7,	// (0x0002ce71) popup_snote2_single_graphic_window_t2

0x5689,	// (0x0002cd33) popup_snote2_single_graphic_window_t3_ParamLimits

0x5689,	// (0x0002cd33) popup_snote2_single_graphic_window_t3

0x56ca,	// (0x0002cd74) popup_snote2_single_graphic_window_t4_ParamLimits

0x56ca,	// (0x0002cd74) popup_snote2_single_graphic_window_t4

0x5700,	// (0x0002cdaa) popup_snote2_single_graphic_window_t5_ParamLimits

0x5700,	// (0x0002cdaa) popup_snote2_single_graphic_window_t5

0x0004,

0xfc74,	// (0x0003731e) popup_snote2_single_graphic_window_t_ParamLimits

0xfc74,	// (0x0003731e) popup_snote2_single_graphic_window_t

0x41ff,	// (0x0002b8a9) clock_nsta_pane_cp2_t1

0x41ff,	// (0x0002b8a9) clock_nsta_pane_cp2_t2

0x0001,

0xfa9b,	// (0x00037145) clock_nsta_pane_cp2_t

0x8911,	// (0x0002ffbb) form_field_data_wide_pane_g1_ParamLimits

0xc5d2,	// (0x00033c7c) form_field_data_wide_pane_g2_ParamLimits

0xc5d2,	// (0x00033c7c) form_field_data_wide_pane_g2

0xc5de,	// (0x00033c88) form_field_data_wide_pane_g3_ParamLimits

0xc5de,	// (0x00033c88) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x00036cf1) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x00036cf1) form_field_data_wide_pane_g

0xb49a,	// (0x00032b44) grid_touch_3_pane_ParamLimits

0xb49a,	// (0x00032b44) grid_touch_3_pane

0xd1ed,	// (0x00034897) cell_touch_3_pane_ParamLimits

0xd1ed,	// (0x00034897) cell_touch_3_pane

0x475b,	// (0x0002be05) cell_touch_3_pane_g1

0x475b,	// (0x0002be05) cell_touch_3_pane_g2

0x0001,

0xfb20,	// (0x000371ca) cell_touch_3_pane_g

0xc3ee,	// (0x00033a98) cont_query_data_pane

0xc3f6,	// (0x00033aa0) cont_query_data_pane_cp1

0x5841,	// (0x0002ceeb) button_value_adjust_pane_cp7

0x5849,	// (0x0002cef3) query_popup_pane_cp3

0xca77,	// (0x00034121) bg_popup_sub_pane_cp22_ParamLimits

0x98aa,	// (0x00030f54) navi_navi_volume_pane_cp2

0x98b9,	// (0x00030f63) popup_side_volume_key_window_g2

0x98c8,	// (0x00030f72) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x00036d87) popup_side_volume_key_window_g

0x98d7,	// (0x00030f81) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x00036d8e) popup_side_volume_key_window_t

0x999c,	// (0x00031046) popup_side_volume_key_window_ParamLimits

0x86e0,	// (0x0002fd8a) list_double_graphic_pane_g4_ParamLimits

0x86e0,	// (0x0002fd8a) list_double_graphic_pane_g4

0xb24a,	// (0x000328f4) list_single_2heading_msg_pane_ParamLimits

0xb24a,	// (0x000328f4) list_single_2heading_msg_pane

0x8b9d,	// (0x00030247) list_single_2heading_msg_pane_g1_ParamLimits

0x8b9d,	// (0x00030247) list_single_2heading_msg_pane_g1

0x8ba9,	// (0x00030253) list_single_2heading_msg_pane_g2_ParamLimits

0x8ba9,	// (0x00030253) list_single_2heading_msg_pane_g2

0x8bbc,	// (0x00030266) list_single_2heading_msg_pane_g3_ParamLimits

0x8bbc,	// (0x00030266) list_single_2heading_msg_pane_g3

0xf0a9,	// (0x00036753) list_single_2heading_msg_pane_g4_ParamLimits

0xf0a9,	// (0x00036753) list_single_2heading_msg_pane_g4

0x0003,

0xfc7f,	// (0x00037329) list_single_2heading_msg_pane_g_ParamLimits

0xfc7f,	// (0x00037329) list_single_2heading_msg_pane_g

0x8bc8,	// (0x00030272) list_single_2heading_msg_pane_t1_ParamLimits

0x8bc8,	// (0x00030272) list_single_2heading_msg_pane_t1

0x8bf0,	// (0x0003029a) list_single_2heading_msg_pane_t2_ParamLimits

0x8bf0,	// (0x0003029a) list_single_2heading_msg_pane_t2

0x8c5b,	// (0x00030305) list_single_2heading_msg_pane_t3_ParamLimits

0x8c5b,	// (0x00030305) list_single_2heading_msg_pane_t3

0xf0c1,	// (0x0003676b) list_single_2heading_msg_pane_t4_ParamLimits

0xf0c1,	// (0x0003676b) list_single_2heading_msg_pane_t4

0x0003,

0xfc88,	// (0x00037332) list_single_2heading_msg_pane_t_ParamLimits

0xfc88,	// (0x00037332) list_single_2heading_msg_pane_t

0xc1bc,	// (0x00033866) title_pane_g4_ParamLimits

0xc1bc,	// (0x00033866) title_pane_g4

0xf151,	// (0x000367fb) title_pane_stacon_g3_ParamLimits

0xf151,	// (0x000367fb) title_pane_stacon_g3

0x537b,	// (0x0002ca25) list_single_2graphic_im_pane_g4_ParamLimits

0x537b,	// (0x0002ca25) list_single_2graphic_im_pane_g4

0xaed4,	// (0x0003257e) popup_side_volume_key_window_cp

0x3a31,	// (0x0002b0db) main_idle_act2_pane_t1

0x0d51,	// (0x000283fb) toolbar_button_pane_g10

0x95a5,	// (0x00030c4f) popup_toolbar_window_cp1

0x41f0,	// (0x0002b89a) clock_nsta_pane_cp_t1

0x41f0,	// (0x0002b89a) clock_nsta_pane_cp_t2

0x0001,

0xfa96,	// (0x00037140) clock_nsta_pane_cp_t

0x98aa,	// (0x00030f54) navi_navi_volume_pane_cp2_ParamLimits

0xf325,	// (0x000369cf) popup_side_volume_key_window_g1_ParamLimits

0x98b9,	// (0x00030f63) popup_side_volume_key_window_g2_ParamLimits

0x98c8,	// (0x00030f72) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x00036d87) popup_side_volume_key_window_g_ParamLimits

0x1957,	// (0x00029001) fep_hwr_aid_pane

0xcffb,	// (0x000346a5) bg_fep_hwr_top_pane_g4_ParamLimits

0x47b7,	// (0x0002be61) fep_hwr_top_pane_g1_ParamLimits

0x47c9,	// (0x0002be73) fep_hwr_top_pane_g2_ParamLimits

0x1a10,	// (0x000290ba) fep_hwr_top_pane_g3_ParamLimits

0xfaeb,	// (0x00037195) fep_hwr_top_pane_g_ParamLimits

0x1a25,	// (0x000290cf) fep_hwr_top_text_pane_ParamLimits

0x2fd7,	// (0x0002a681) aid_touch_tab_arrow_arrow_2

0x2fe0,	// (0x0002a68a) aid_touch_tab_arrow_left_2

0x196b,	// (0x00029015) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x19a2,	// (0x0002904c) fep_hwr_prediction_pane

0x4922,	// (0x0002bfcc) fep_vkb_prediction_pane

0xb845,	// (0x00032eef) fep_vkb_side_pane_g3_ParamLimits

0xb845,	// (0x00032eef) fep_vkb_side_pane_g3

0x49cb,	// (0x0002c075) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4e60,	// (0x0002c50a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4e6d,	// (0x0002c517) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb95,	// (0x0003723f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x586e,	// (0x0002cf18) fep_hwr_prediction_pane_g1

0x1cb2,	// (0x0002935c) fep_hwr_prediction_pane_g2

0x1cba,	// (0x00029364) fep_hwr_prediction_pane_g3

0x1cc2,	// (0x0002936c) fep_hwr_prediction_pane_g4

0x0003,

0xfc91,	// (0x0003733b) fep_hwr_prediction_pane_g

0x586e,	// (0x0002cf18) fep_vkb_prediction_pane_g1

0x5878,	// (0x0002cf22) fep_vkb_prediction_pane_g2

0x5880,	// (0x0002cf2a) fep_vkb_prediction_pane_g3

0x5888,	// (0x0002cf32) fep_vkb_prediction_pane_g4

0x0003,

0xfc9a,	// (0x00037344) fep_vkb_prediction_pane_g

0xb065,	// (0x0003270f) slider_set_pane_g3

0xb079,	// (0x00032723) slider_set_pane_g4

0xb091,	// (0x0003273b) slider_set_pane_g5

0xb065,	// (0x0003270f) slider_set_pane_g6

0xb0a7,	// (0x00032751) slider_set_pane_g7

0x3663,	// (0x0002ad0d) slider_form_pane_g3

0x366c,	// (0x0002ad16) slider_form_pane_g4

0x3674,	// (0x0002ad1e) slider_form_pane_g5

0x3663,	// (0x0002ad0d) slider_form_pane_g6

0xb22e,	// (0x000328d8) slider_form_pane_g7

0x3cdd,	// (0x0002b387) slider_set_pane_vc_g3

0x3ce6,	// (0x0002b390) slider_set_pane_vc_g4

0x3cef,	// (0x0002b399) slider_set_pane_vc_g5

0x3cdd,	// (0x0002b387) slider_set_pane_vc_g6

0x3cf8,	// (0x0002b3a2) slider_set_pane_vc_g7

0x3eae,	// (0x0002b558) slider_form_pane_vc_g1

0x3eb7,	// (0x0002b561) slider_form_pane_vc_g2

0x3ec0,	// (0x0002b56a) slider_form_pane_vc_g3

0x3eae,	// (0x0002b558) slider_form_pane_vc_g4

0x3ec9,	// (0x0002b573) slider_form_pane_vc_g5

0x0004,

0xfa68,	// (0x00037112) slider_form_pane_vc_g

0xc19e,	// (0x00033848) main_idle_act3_pane

0x5890,	// (0x0002cf3a) ai3_links_pane

0xd236,	// (0x000348e0) popup_ai3_data_window_ParamLimits

0xd236,	// (0x000348e0) popup_ai3_data_window

0xc19e,	// (0x00033848) grid_ai3_links_pane

0xd24e,	// (0x000348f8) cell_ai3_links_pane_ParamLimits

0xd24e,	// (0x000348f8) cell_ai3_links_pane

0x58c9,	// (0x0002cf73) bg_popup_sub_pane_cp11

0x58d6,	// (0x0002cf80) cell_ai3_links_pane_g1

0xc19e,	// (0x00033848) bg_popup_sub_pane_cp12

0x58fb,	// (0x0002cfa5) heading_ai3_data_pane

0x5903,	// (0x0002cfad) list_ai3_gene_pane

0x590f,	// (0x0002cfb9) popup_ai3_data_window_g1

0x5917,	// (0x0002cfc1) heading_ai3_data_pane_g1

0x591f,	// (0x0002cfc9) heading_ai3_data_pane_t1

0xd268,	// (0x00034912) list_double_ai3_gene_pane_ParamLimits

0xd268,	// (0x00034912) list_double_ai3_gene_pane

0x593a,	// (0x0002cfe4) list_single_ai3_gene_pane_ParamLimits

0x593a,	// (0x0002cfe4) list_single_ai3_gene_pane

0x4720,	// (0x0002bdca) list_highlight_pane_cp7_ParamLimits

0x4720,	// (0x0002bdca) list_highlight_pane_cp7

0x5947,	// (0x0002cff1) list_single_a13_gene_pane_t1_ParamLimits

0x5947,	// (0x0002cff1) list_single_a13_gene_pane_t1

0x595e,	// (0x0002d008) list_single_ai3_gene_pane_g1

0x5967,	// (0x0002d011) list_single_ai3_gene_pane_g2

0x0001,

0xfca3,	// (0x0003734d) list_single_ai3_gene_pane_g

0x596f,	// (0x0002d019) list_double_ai3_gene_pane_g1_ParamLimits

0x596f,	// (0x0002d019) list_double_ai3_gene_pane_g1

0xd275,	// (0x0003491f) list_double_ai3_gene_pane_t1_ParamLimits

0xd275,	// (0x0003491f) list_double_ai3_gene_pane_t1

0x5997,	// (0x0002d041) list_double_ai3_gene_pane_t2_ParamLimits

0x5997,	// (0x0002d041) list_double_ai3_gene_pane_t2

0x59ac,	// (0x0002d056) list_double_ai3_gene_pane_t3_ParamLimits

0x59ac,	// (0x0002d056) list_double_ai3_gene_pane_t3

0x0002,

0xfca8,	// (0x00037352) list_double_ai3_gene_pane_t_ParamLimits

0xfca8,	// (0x00037352) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf09f,	// (0x00036749) aid_size_min_col_2

0xd220,	// (0x000348ca) aid_size_min_msg_ParamLimits

0xd220,	// (0x000348ca) aid_size_min_msg

0xb859,	// (0x00032f03) fep_vkb_top_text_pane_g2_ParamLimits

0xb859,	// (0x00032f03) fep_vkb_top_text_pane_g2

0x0001,

0xfb1b,	// (0x000371c5) fep_vkb_top_text_pane_g_ParamLimits

0xfb1b,	// (0x000371c5) fep_vkb_top_text_pane_g

0xc19e,	// (0x00033848) main_hc_apps_shell_pane

0x59c9,	// (0x0002d073) grid_hc_apps_pane_ParamLimits

0x59c9,	// (0x0002d073) grid_hc_apps_pane

0x59db,	// (0x0002d085) list_hc_apps_pane

0x59e3,	// (0x0002d08d) scroll_pane_cp37_ParamLimits

0x59e3,	// (0x0002d08d) scroll_pane_cp37

0xd291,	// (0x0003493b) cell_hc_apps_pane_ParamLimits

0xd291,	// (0x0003493b) cell_hc_apps_pane

0xd34f,	// (0x000349f9) cell_hc_apps_pane_g1_ParamLimits

0xd34f,	// (0x000349f9) cell_hc_apps_pane_g1

0x5acd,	// (0x0002d177) cell_hc_apps_pane_g2_ParamLimits

0x5acd,	// (0x0002d177) cell_hc_apps_pane_g2

0x5ae9,	// (0x0002d193) cell_hc_apps_pane_g3_ParamLimits

0x5ae9,	// (0x0002d193) cell_hc_apps_pane_g3

0x0002,

0xfcaf,	// (0x00037359) cell_hc_apps_pane_g_ParamLimits

0xfcaf,	// (0x00037359) cell_hc_apps_pane_g

0xd37b,	// (0x00034a25) cell_hc_apps_pane_t1_ParamLimits

0xd37b,	// (0x00034a25) cell_hc_apps_pane_t1

0xc338,	// (0x000339e2) grid_highlight_pane_cp10_ParamLimits

0xc338,	// (0x000339e2) grid_highlight_pane_cp10

0xd3b9,	// (0x00034a63) list_single_hc_apps_pane_ParamLimits

0xd3b9,	// (0x00034a63) list_single_hc_apps_pane

0xd3e9,	// (0x00034a93) list_single_hc_apps_pane_g1

0x8cc9,	// (0x00030373) list_single_hc_apps_pane_g2

0x0001,

0xfcb6,	// (0x00037360) list_single_hc_apps_pane_g

0x8ce2,	// (0x0003038c) list_single_hc_apps_pane_g2_copy1

0x8cfe,	// (0x000303a8) list_single_hc_apps_pane_t1

0xc20e,	// (0x000338b8) bg_set_opt_pane_cp_ParamLimits

0x906d,	// (0x00030717) setting_slider_pane_t1_ParamLimits

0x9086,	// (0x00030730) setting_slider_pane_t2_ParamLimits

0x90a0,	// (0x0003074a) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00036be3) setting_slider_pane_t_ParamLimits

0x90b8,	// (0x00030762) slider_set_pane_ParamLimits

0x0110,	// (0x000277ba) control_pane_g5_ParamLimits

0x0110,	// (0x000277ba) control_pane_g5

0xb058,	// (0x00032702) slider_set_pane_g1_ParamLimits

0x1783,	// (0x00028e2d) slider_set_pane_g2_ParamLimits

0xb065,	// (0x0003270f) slider_set_pane_g3_ParamLimits

0xb079,	// (0x00032723) slider_set_pane_g4_ParamLimits

0xb091,	// (0x0003273b) slider_set_pane_g5_ParamLimits

0xb065,	// (0x0003270f) slider_set_pane_g6_ParamLimits

0xb0a7,	// (0x00032751) slider_set_pane_g7_ParamLimits

0xf92b,	// (0x00036fd5) slider_set_pane_g_ParamLimits

0xcd25,	// (0x000343cf) navi_icon_text_pane_ParamLimits

0xa4e4,	// (0x00031b8e) aid_fill_nsta_2_ParamLimits

0xa51b,	// (0x00031bc5) aid_touch_tab_arrow_left_ParamLimits

0xa531,	// (0x00031bdb) aid_touch_tab_arrow_right_ParamLimits

0xa5cc,	// (0x00031c76) clock_nsta_pane_ParamLimits

0x2fb9,	// (0x0002a663) navi_icon_pane_g1_ParamLimits

0x2fc5,	// (0x0002a66f) navi_text_pane_t1_ParamLimits

0x4300,	// (0x0002b9aa) navi_icon_text_pane_g1_ParamLimits

0x430c,	// (0x0002b9b6) navi_icon_text_pane_t1_ParamLimits

0xd3e9,	// (0x00034a93) list_single_hc_apps_pane_g1_ParamLimits

0x8cc9,	// (0x00030373) list_single_hc_apps_pane_g2_ParamLimits

0xfcb6,	// (0x00037360) list_single_hc_apps_pane_g_ParamLimits

0x8ce2,	// (0x0003038c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8cfe,	// (0x000303a8) list_single_hc_apps_pane_t1_ParamLimits

0x8e9e,	// (0x00030548) popup_toolbar2_fixed_window_ParamLimits

0x8e9e,	// (0x00030548) popup_toolbar2_fixed_window

0xa3f4,	// (0x00031a9e) popup_toolbar2_float_window

0xc19e,	// (0x00033848) bg_popup_sub_pane_cp27

0x5bc7,	// (0x0002d271) grid_toolbar2_float_pane

0xc19e,	// (0x00033848) bg_popup_sub_pane_cp26

0x5bc7,	// (0x0002d271) grid_toolbar2_fixed_pane

0xd402,	// (0x00034aac) cell_toolbar2_fixed_pane_ParamLimits

0xd402,	// (0x00034aac) cell_toolbar2_fixed_pane

0xd41c,	// (0x00034ac6) cell_toolbar2_fixed_pane_g1

0x0c59,	// (0x00028303) toolbar2_fixed_button_pane

0x0d09,	// (0x000283b3) toolbar2_fixed_button_pane_g1

0x0d11,	// (0x000283bb) toolbar2_fixed_button_pane_g2

0x0d19,	// (0x000283c3) toolbar2_fixed_button_pane_g3

0x0d21,	// (0x000283cb) toolbar2_fixed_button_pane_g4

0x0d29,	// (0x000283d3) toolbar2_fixed_button_pane_g5

0x0d31,	// (0x000283db) toolbar2_fixed_button_pane_g6

0x0d39,	// (0x000283e3) toolbar2_fixed_button_pane_g7

0x0d41,	// (0x000283eb) toolbar2_fixed_button_pane_g8

0x0d49,	// (0x000283f3) toolbar2_fixed_button_pane_g9

0x0008,

0xf82d,	// (0x00036ed7) toolbar2_fixed_button_pane_g

0x5be8,	// (0x0002d292) cell_toolbar2_float_pane_ParamLimits

0x5be8,	// (0x0002d292) cell_toolbar2_float_pane

0x5bf9,	// (0x0002d2a3) cell_toolbar2_float_pane_g1

0x0c59,	// (0x00028303) toolbar2_fixed_button_pane_cp

0xb741,	// (0x00032deb) fep_vkb_accented_list_pane_ParamLimits

0xb741,	// (0x00032deb) fep_vkb_accented_list_pane

0x1b73,	// (0x0002921d) bg_popup_fep_shadow_pane_g9

0xce5f,	// (0x00034509) bg_popup_fep_shadow_pane_cp3

0xc6dd,	// (0x00033d87) list_accented_list_pane

0x5c02,	// (0x0002d2ac) list_single_accented_list_pane_ParamLimits

0x5c02,	// (0x0002d2ac) list_single_accented_list_pane

0xce5f,	// (0x00034509) list_highlight_pane_cp10

0x5c13,	// (0x0002d2bd) list_single_accented_list_pane_t1

0xa31e,	// (0x000319c8) popup_slider_window_ParamLimits

0xa31e,	// (0x000319c8) popup_slider_window

0x5851,	// (0x0002cefb) aid_indentation_list_msg

0xd50d,	// (0x00034bb7) bg_popup_window_pane_cp19

0x5d42,	// (0x0002d3ec) popup_slider_window_g1

0x5d5e,	// (0x0002d408) popup_slider_window_g2

0x5d7a,	// (0x0002d424) popup_slider_window_g3

0x0005,

0xfcbb,	// (0x00037365) popup_slider_window_g

0x5de0,	// (0x0002d48a) popup_slider_window_t1

0x5e54,	// (0x0002d4fe) small_volume_slider_vertical_pane

0x475b,	// (0x0002be05) small_volume_slider_vertical_pane_g1

0x475b,	// (0x0002be05) small_volume_slider_vertical_pane_g2

0x5e70,	// (0x0002d51a) small_volume_slider_vertical_pane_g3

0x0002,

0xfccd,	// (0x00037377) small_volume_slider_vertical_pane_g

0x8dec,	// (0x00030496) area_side_right_pane_ParamLimits

0x8dec,	// (0x00030496) area_side_right_pane

0xbac6,	// (0x00033170) aid_size_side_button_ParamLimits

0xbac6,	// (0x00033170) aid_size_side_button

0xbadf,	// (0x00033189) grid_sctrl_middle_pane_ParamLimits

0xbadf,	// (0x00033189) grid_sctrl_middle_pane

0x1cfd,	// (0x000293a7) sctrl_sk_bottom_pane

0x1d0e,	// (0x000293b8) sctrl_sk_top_pane

0x1d20,	// (0x000293ca) aid_touch_sctrl_top

0xc338,	// (0x000339e2) bg_sctrl_sk_pane_ParamLimits

0xc338,	// (0x000339e2) bg_sctrl_sk_pane

0x1d2d,	// (0x000293d7) sctrl_sk_top_pane_g1

0x1d3a,	// (0x000293e4) sctrl_sk_top_pane_t1

0x1d20,	// (0x000293ca) aid_touch_sctrl_bottom

0xc338,	// (0x000339e2) bg_sctrl_sk_pane_cp_ParamLimits

0xc338,	// (0x000339e2) bg_sctrl_sk_pane_cp

0x1d55,	// (0x000293ff) sctrl_sk_bottom_pane_g1

0x1d3a,	// (0x000293e4) sctrl_sk_bottom_pane_t1

0xbaf9,	// (0x000331a3) cell_sctrl_middle_pane_ParamLimits

0xbaf9,	// (0x000331a3) cell_sctrl_middle_pane

0xbb0a,	// (0x000331b4) aid_touch_sctrl_middle_ParamLimits

0xbb0a,	// (0x000331b4) aid_touch_sctrl_middle

0xbb17,	// (0x000331c1) bg_sctrl_middle_pane_ParamLimits

0xbb17,	// (0x000331c1) bg_sctrl_middle_pane

0x5ef8,	// (0x0002d5a2) cell_sctrl_middle_pane_g1_ParamLimits

0x5ef8,	// (0x0002d5a2) cell_sctrl_middle_pane_g1

0xbb25,	// (0x000331cf) cell_sctrl_middle_pane_g2_ParamLimits

0xbb25,	// (0x000331cf) cell_sctrl_middle_pane_g2

0x0001,

0xfcd9,	// (0x00037383) cell_sctrl_middle_pane_g_ParamLimits

0xfcd9,	// (0x00037383) cell_sctrl_middle_pane_g

0x0d09,	// (0x000283b3) bg_sctrl_middle_pane_g1

0x0d11,	// (0x000283bb) bg_sctrl_middle_pane_g2

0x0d19,	// (0x000283c3) bg_sctrl_middle_pane_g3

0x0d21,	// (0x000283cb) bg_sctrl_middle_pane_g4

0x0d29,	// (0x000283d3) bg_sctrl_middle_pane_g5

0x0d31,	// (0x000283db) bg_sctrl_middle_pane_g6

0x0d39,	// (0x000283e3) bg_sctrl_middle_pane_g7

0x0d41,	// (0x000283eb) bg_sctrl_middle_pane_g8

0x0007,

0xfcde,	// (0x00037388) bg_sctrl_middle_pane_g

0x0d49,	// (0x000283f3) bg_sctrl_middle_pane_g8_copy1

0x0d09,	// (0x000283b3) bg_sctrl_sk_pane_g1

0x0d11,	// (0x000283bb) bg_sctrl_sk_pane_g2

0x0d19,	// (0x000283c3) bg_sctrl_sk_pane_g3

0x0008,

0xf82d,	// (0x00036ed7) bg_sctrl_sk_pane_g

0xc506,	// (0x00033bb0) aid_size_touch_scroll_bar

0x0d21,	// (0x000283cb) bg_sctrl_sk_pane_g4

0x0d29,	// (0x000283d3) bg_sctrl_sk_pane_g5

0x0d31,	// (0x000283db) bg_sctrl_sk_pane_g6

0x0d39,	// (0x000283e3) bg_sctrl_sk_pane_g7

0x0d41,	// (0x000283eb) bg_sctrl_sk_pane_g8

0x0d49,	// (0x000283f3) bg_sctrl_sk_pane_g9

0x02d3,	// (0x0002797d) popup_fep_china_hwr2_fs_candidate_window

0x9de4,	// (0x0003148e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9de4,	// (0x0003148e) popup_fep_china_hwr2_fs_control_window

0x49cb,	// (0x0002c075) sctrl_sk_top_pane_g2

0x0001,

0xfcd4,	// (0x0003737e) sctrl_sk_top_pane_g

0xd5c5,	// (0x00034c6f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd5c5,	// (0x00034c6f) aid_fep_china_hwr2_fs_cell

0xd5d9,	// (0x00034c83) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd5d9,	// (0x00034c83) bg_popup_fep_shadow_pane_cp4

0xd5f0,	// (0x00034c9a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd5f0,	// (0x00034c9a) bg_popup_fep_shadow_pane_cp5

0xd602,	// (0x00034cac) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd602,	// (0x00034cac) popup_fep_china_hwr2_fs_control_bar_grid

0xd616,	// (0x00034cc0) popup_fep_china_hwr2_fs_control_funtion_grid

0x5ecc,	// (0x0002d576) aid_fep_china_hwr2_fs_candi_cell

0xc19e,	// (0x00033848) bg_popup_fep_shadow_pane_cp6

0x5ed6,	// (0x0002d580) popup_fep_china_hwr2_fs_candidate_grid

0xd61e,	// (0x00034cc8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd61e,	// (0x00034cc8) cell_fep_china_hwr2_fs_funtion_grid

0x475b,	// (0x0002be05) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5ef8,	// (0x0002d5a2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5ef8,	// (0x0002d5a2) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5f06,	// (0x0002d5b0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5f06,	// (0x0002d5b0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcef,	// (0x00037399) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcef,	// (0x00037399) cell_fep_china_hwr2_fs_funtion_grid_g

0xd636,	// (0x00034ce0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd636,	// (0x00034ce0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd64b,	// (0x00034cf5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd64b,	// (0x00034cf5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf4,	// (0x0003739e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf4,	// (0x0003739e) cell_fep_china_hwr2_fs_funtion_grid_t

0x5f4d,	// (0x0002d5f7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5f55,	// (0x0002d5ff) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5f5d,	// (0x0002d607) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf9,	// (0x000373a3) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5f65,	// (0x0002d60f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5f65,	// (0x0002d60f) cell_fep_china_hwr2_fs_candidate_grid

0x5f7e,	// (0x0002d628) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5f86,	// (0x0002d630) popup_fep_china_hwr2_fs_candidate_grid_g21

0x475b,	// (0x0002be05) cell_fep_china_hwr2_fs_candidate_grid_g1

0x475b,	// (0x0002be05) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb20,	// (0x000371ca) cell_fep_china_hwr2_fs_candidate_grid_g

0x5f8e,	// (0x0002d638) cell_fep_china_hwr2_fs_candidate_grid_t1

0x08d2,	// (0x00027f7c) clock_nsta_pane_cp_24_ParamLimits

0x08d2,	// (0x00027f7c) clock_nsta_pane_cp_24

0x0950,	// (0x00027ffa) indicator_nsta_pane_cp_24_ParamLimits

0x0950,	// (0x00027ffa) indicator_nsta_pane_cp_24

0x2e35,	// (0x0002a4df) heading_pane_g1

0x0001,

0xf892,	// (0x00036f3c) heading_pane_g

0x387a,	// (0x0002af24) grid_sct_catagory_button_pane

0x38aa,	// (0x0002af54) scroll_pane_cp5_ParamLimits

0x434e,	// (0x0002b9f8) button_value_adjust_pane_cp5_ParamLimits

0x434e,	// (0x0002b9f8) button_value_adjust_pane_cp5

0x442d,	// (0x0002bad7) form2_midp_time_pane_ParamLimits

0x5f9c,	// (0x0002d646) cell_sct_catagory_button_pane_ParamLimits

0x5f9c,	// (0x0002d646) cell_sct_catagory_button_pane

0x4720,	// (0x0002bdca) bg_button_pane_cp01_ParamLimits

0x4720,	// (0x0002bdca) bg_button_pane_cp01

0x475b,	// (0x0002be05) cell_sct_catagory_button_pane_g1

0xa397,	// (0x00031a41) popup_tb_extension_window

0xd667,	// (0x00034d11) aid_size_cell_ext_ParamLimits

0xd667,	// (0x00034d11) aid_size_cell_ext

0xc4b8,	// (0x00033b62) bg_tb_trans_pane_cp1_ParamLimits

0xc4b8,	// (0x00033b62) bg_tb_trans_pane_cp1

0xd68d,	// (0x00034d37) grid_tb_ext_pane_ParamLimits

0xd68d,	// (0x00034d37) grid_tb_ext_pane

0xd6cc,	// (0x00034d76) cell_tb_ext_pane_ParamLimits

0xd6cc,	// (0x00034d76) cell_tb_ext_pane

0xd6f4,	// (0x00034d9e) cell_tb_ext_pane_g1_ParamLimits

0xd6f4,	// (0x00034d9e) cell_tb_ext_pane_g1

0x6032,	// (0x0002d6dc) cell_tb_ext_pane_t1

0xc338,	// (0x000339e2) list_highlight_pane_cp11_ParamLimits

0xc338,	// (0x000339e2) list_highlight_pane_cp11

0x8eb3,	// (0x0003055d) popup_uni_indicator_window_ParamLimits

0x8eb3,	// (0x0003055d) popup_uni_indicator_window

0xc5c4,	// (0x00033c6e) bg_popup_sub_pane_cp14

0xd711,	// (0x00034dbb) list_uniindi_pane

0xd71d,	// (0x00034dc7) uniindi_top_pane

0xc338,	// (0x000339e2) bg_uniindi_top_pane

0xd73c,	// (0x00034de6) uniindi_top_pane_g1

0xd752,	// (0x00034dfc) uniindi_top_pane_g2

0x0003,

0xfd00,	// (0x000373aa) uniindi_top_pane_g

0xd76f,	// (0x00034e19) uniindi_top_pane_t1

0x60e3,	// (0x0002d78d) list_single_uniindi_pane_ParamLimits

0x60e3,	// (0x0002d78d) list_single_uniindi_pane

0x475b,	// (0x0002be05) bg_uniindi_top_pane_g1

0x60f6,	// (0x0002d7a0) list_single_uniindi_pane_g1

0x6109,	// (0x0002d7b3) list_single_uniindi_pane_t1

0xc19e,	// (0x00033848) control_bg_pane

0x612e,	// (0x0002d7d8) bg_sctrl_sk_pane_cp1

0x6137,	// (0x0002d7e1) bg_sctrl_sk_pane_cp2

0x6140,	// (0x0002d7ea) control_bg_pane_g1

0x6149,	// (0x0002d7f3) control_bg_pane_g2

0x0001,

0xfd09,	// (0x000373b3) control_bg_pane_g

0x4194,	// (0x0002b83e) cell_indicator_nsta_pane_g1_ParamLimits

0xb4d7,	// (0x00032b81) cell_indicator_nsta_pane_g2_ParamLimits

0xfa84,	// (0x0003712e) cell_indicator_nsta_pane_g_ParamLimits

0xeea7,	// (0x00036551) form2_midp_time_pane_t1_ParamLimits

0x1949,	// (0x00028ff3) main_idle_act4_pane_ParamLimits

0x1949,	// (0x00028ff3) main_idle_act4_pane

0xa397,	// (0x00031a41) popup_tb_extension_window_ParamLimits

0xd6b2,	// (0x00034d5c) tb_ext_find_pane_ParamLimits

0xd6b2,	// (0x00034d5c) tb_ext_find_pane

0x6152,	// (0x0002d7fc) ai_gene_pane_1_cp1

0xcee0,	// (0x0003458a) ai_gene_pane_2_cp1

0xd799,	// (0x00034e43) list_single_idle_plugin_calendar_pane

0x6163,	// (0x0002d80d) list_single_idle_plugin_notification_pane

0x616c,	// (0x0002d816) list_single_idle_plugin_player_pane

0xd7a2,	// (0x00034e4c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd7a2,	// (0x00034e4c) list_single_idle_plugin_shortcut_pane

0xd7ca,	// (0x00034e74) main_idle_act4_pane_t1

0xd7e1,	// (0x00034e8b) main_idle_act4_pane_t2

0x0001,

0xfd0e,	// (0x000373b8) main_idle_act4_pane_t

0xd7f8,	// (0x00034ea2) middle_sk_idle_act4_pane_ParamLimits

0xd7f8,	// (0x00034ea2) middle_sk_idle_act4_pane

0xd814,	// (0x00034ebe) popup_clock_digital_analogue_window_cp2

0xd840,	// (0x00034eea) shortcut_wheel_idle_act4_pane_ParamLimits

0xd840,	// (0x00034eea) shortcut_wheel_idle_act4_pane

0x475b,	// (0x0002be05) shortcut_wheel_idle_act4_pane_g1

0x475b,	// (0x0002be05) shortcut_wheel_idle_act4_pane_g2

0x475b,	// (0x0002be05) shortcut_wheel_idle_act4_pane_g3

0x475b,	// (0x0002be05) shortcut_wheel_idle_act4_pane_g4

0x475b,	// (0x0002be05) shortcut_wheel_idle_act4_pane_g5

0x61ff,	// (0x0002d8a9) shortcut_wheel_idle_act4_pane_g6

0x6207,	// (0x0002d8b1) shortcut_wheel_idle_act4_pane_g7

0x620f,	// (0x0002d8b9) shortcut_wheel_idle_act4_pane_g8

0x6217,	// (0x0002d8c1) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd13,	// (0x000373bd) shortcut_wheel_idle_act4_pane_g

0xcffb,	// (0x000346a5) middle_sk_idle_act4_pane_g1_ParamLimits

0xcffb,	// (0x000346a5) middle_sk_idle_act4_pane_g1

0xd8bd,	// (0x00034f67) middle_sk_idle_act4_pane_g2_ParamLimits

0xd8bd,	// (0x00034f67) middle_sk_idle_act4_pane_g2

0x0001,

0xfd36,	// (0x000373e0) middle_sk_idle_act4_pane_g_ParamLimits

0xfd36,	// (0x000373e0) middle_sk_idle_act4_pane_g

0xd8d5,	// (0x00034f7f) middle_sk_idle_act4_pane_t1_ParamLimits

0xd8d5,	// (0x00034f7f) middle_sk_idle_act4_pane_t1

0xd904,	// (0x00034fae) grid_ai_shortcut_pane_ParamLimits

0xd904,	// (0x00034fae) grid_ai_shortcut_pane

0xd921,	// (0x00034fcb) list_highlight_pane_cp16_ParamLimits

0xd921,	// (0x00034fcb) list_highlight_pane_cp16

0xd92e,	// (0x00034fd8) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd92e,	// (0x00034fd8) list_single_idle_plugin_shortcut_pane_g1

0xd93a,	// (0x00034fe4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd93a,	// (0x00034fe4) list_single_idle_plugin_shortcut_pane_g2

0xd956,	// (0x00035000) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd956,	// (0x00035000) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3b,	// (0x000373e5) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3b,	// (0x000373e5) list_single_idle_plugin_shortcut_pane_g

0xd96b,	// (0x00035015) cell_ai_shortcut_pane_ParamLimits

0xd96b,	// (0x00035015) cell_ai_shortcut_pane

0xd981,	// (0x0003502b) cell_ai_shortcut_pane_g1_ParamLimits

0xd981,	// (0x0003502b) cell_ai_shortcut_pane_g1

0x6152,	// (0x0002d7fc) ai_gene_pane_1_cp2

0x6347,	// (0x0002d9f1) ai_gene_pane_2_cp2

0x634f,	// (0x0002d9f9) list_highlight_pane_cp15

0xd9a3,	// (0x0003504d) list_single_idle_plugin_calendar_pane_g1

0x634f,	// (0x0002d9f9) list_highlight_pane_cp17

0x6360,	// (0x0002da0a) list_single_idle_plugin_calendar_pane_g1_copy1

0x6368,	// (0x0002da12) list_single_idle_plugin_player_pane_g1

0x3ad3,	// (0x0002b17d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd42,	// (0x000373ec) list_single_idle_plugin_player_pane_g

0x6370,	// (0x0002da1a) list_single_idle_plugin_player_pane_t1

0x637e,	// (0x0002da28) list_single_idle_plugin_player_pane_t2

0x638c,	// (0x0002da36) list_single_idle_plugin_player_pane_t3

0x639a,	// (0x0002da44) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd47,	// (0x000373f1) list_single_idle_plugin_player_pane_t

0x63a8,	// (0x0002da52) wait_bar_pane_cp15

0x63b0,	// (0x0002da5a) grid_ai_notification_pane

0x3ad3,	// (0x0002b17d) list_single_idle_plugin_notification_pane_g1

0xd9ab,	// (0x00035055) cell_ai_notification_pane_ParamLimits

0xd9ab,	// (0x00035055) cell_ai_notification_pane

0x63c6,	// (0x0002da70) cell_ai_notification_pane_g1

0x63ce,	// (0x0002da78) cell_ai_notification_pane_t1

0xd9b8,	// (0x00035062) tb_ext_find_button_pane

0xd9c0,	// (0x0003506a) tb_ext_find_pane_g1

0xd9c8,	// (0x00035072) tb_ext_find_pane_t1

0xca16,	// (0x000340c0) tb_ext_find_button_pane_g1

0xd9d6,	// (0x00035080) tb_ext_find_button_pane_g2

0x0001,

0xfd50,	// (0x000373fa) tb_ext_find_button_pane_g

0xd7ca,	// (0x00034e74) main_idle_act4_pane_t1_ParamLimits

0xd7e1,	// (0x00034e8b) main_idle_act4_pane_t2_ParamLimits

0xfd0e,	// (0x000373b8) main_idle_act4_pane_t_ParamLimits

0xd814,	// (0x00034ebe) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd82c,	// (0x00034ed6) sat_plugin_idle_act4_pane_ParamLimits

0xd82c,	// (0x00034ed6) sat_plugin_idle_act4_pane

0xd9df,	// (0x00035089) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd9df,	// (0x00035089) sat_plugin_idle_act4_pane_t1

0xd9f7,	// (0x000350a1) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd9f7,	// (0x000350a1) sat_plugin_idle_act4_pane_t2

0xda0f,	// (0x000350b9) sat_plugin_idle_act4_pane_t3_ParamLimits

0xda0f,	// (0x000350b9) sat_plugin_idle_act4_pane_t3

0xda27,	// (0x000350d1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xda27,	// (0x000350d1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd55,	// (0x000373ff) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd55,	// (0x000373ff) sat_plugin_idle_act4_pane_t

0x8e2e,	// (0x000304d8) popup_battery_window_ParamLimits

0x8e2e,	// (0x000304d8) popup_battery_window

0xc338,	// (0x000339e2) bg_popup_sub_pane_cp25_ParamLimits

0xc338,	// (0x000339e2) bg_popup_sub_pane_cp25

0x644f,	// (0x0002daf9) popup_battery_window_g1_ParamLimits

0x644f,	// (0x0002daf9) popup_battery_window_g1

0x645b,	// (0x0002db05) popup_battery_window_t1_ParamLimits

0x645b,	// (0x0002db05) popup_battery_window_t1

0x646d,	// (0x0002db17) popup_battery_window_t2_ParamLimits

0x646d,	// (0x0002db17) popup_battery_window_t2

0x0001,

0xfd5e,	// (0x00037408) popup_battery_window_t_ParamLimits

0xfd5e,	// (0x00037408) popup_battery_window_t

0x9a1e,	// (0x000310c8) midp_canvas_pane_ParamLimits

0x9a90,	// (0x0003113a) midp_keypad_pane_ParamLimits

0x9a90,	// (0x0003113a) midp_keypad_pane

0xc706,	// (0x00033db0) main_midp_pane_ParamLimits

0xb4e4,	// (0x00032b8e) signal_pane_g2_cp_ParamLimits

0xda3f,	// (0x000350e9) aid_size_cell_midp_keypad_ParamLimits

0xda3f,	// (0x000350e9) aid_size_cell_midp_keypad

0xda5d,	// (0x00035107) midp_keyp_game_grid_pane_ParamLimits

0xda5d,	// (0x00035107) midp_keyp_game_grid_pane

0xda84,	// (0x0003512e) midp_keyp_rocker_pane_ParamLimits

0xda84,	// (0x0003512e) midp_keyp_rocker_pane

0xdad5,	// (0x0003517f) midp_keyp_sk_left_pane_ParamLimits

0xdad5,	// (0x0003517f) midp_keyp_sk_left_pane

0xdb29,	// (0x000351d3) midp_keyp_sk_right_pane_ParamLimits

0xdb29,	// (0x000351d3) midp_keyp_sk_right_pane

0xc19e,	// (0x00033848) bg_button_pane_cp03

0xdb7d,	// (0x00035227) midp_keyp_sk_left_pane_g1

0xc19e,	// (0x00033848) bg_button_pane_cp04

0xdb7d,	// (0x00035227) midp_keyp_sk_right_pane_g1

0x475b,	// (0x0002be05) midp_keyp_rocker_pane_g1

0xdb86,	// (0x00035230) keyp_game_cell_pane_ParamLimits

0xdb86,	// (0x00035230) keyp_game_cell_pane

0xc19e,	// (0x00033848) bg_button_pane_cp02

0xdbaa,	// (0x00035254) keyp_game_cell_pane_g1

0x8e4e,	// (0x000304f8) popup_fep_vkb2_window_ParamLimits

0x8e4e,	// (0x000304f8) popup_fep_vkb2_window

0xbb31,	// (0x000331db) aid_size_cell_vkb2_ParamLimits

0xbb31,	// (0x000331db) aid_size_cell_vkb2

0xbb6f,	// (0x00033219) popup_fep_vkb2_window_g1_ParamLimits

0xbb6f,	// (0x00033219) popup_fep_vkb2_window_g1

0xbbbf,	// (0x00033269) vkb2_area_bottom_pane_ParamLimits

0xbbbf,	// (0x00033269) vkb2_area_bottom_pane

0xbc13,	// (0x000332bd) vkb2_area_keypad_pane_ParamLimits

0xbc13,	// (0x000332bd) vkb2_area_keypad_pane

0xbc5b,	// (0x00033305) vkb2_area_top_pane_ParamLimits

0xbc5b,	// (0x00033305) vkb2_area_top_pane

0xbce1,	// (0x0003338b) vkb2_top_entry_pane_ParamLimits

0xbce1,	// (0x0003338b) vkb2_top_entry_pane

0xbd0e,	// (0x000333b8) vkb2_top_grid_left_pane_ParamLimits

0xbd0e,	// (0x000333b8) vkb2_top_grid_left_pane

0xbd2e,	// (0x000333d8) vkb2_top_grid_right_pane_ParamLimits

0xbd2e,	// (0x000333d8) vkb2_top_grid_right_pane

0x1fb3,	// (0x0002965d) vkb2_cell_keypad_pane_ParamLimits

0x1fb3,	// (0x0002965d) vkb2_cell_keypad_pane

0xbd74,	// (0x0003341e) vkb2_area_bottom_grid_pane_ParamLimits

0xbd74,	// (0x0003341e) vkb2_area_bottom_grid_pane

0xbd9e,	// (0x00033448) vkb2_area_bottom_pane_g1_ParamLimits

0xbd9e,	// (0x00033448) vkb2_area_bottom_pane_g1

0xbdc4,	// (0x0003346e) vkb2_area_bottom_pane_g2_ParamLimits

0xbdc4,	// (0x0003346e) vkb2_area_bottom_pane_g2

0xbdf5,	// (0x0003349f) vkb2_area_bottom_pane_g3_ParamLimits

0xbdf5,	// (0x0003349f) vkb2_area_bottom_pane_g3

0x0002,

0xfd63,	// (0x0003740d) vkb2_area_bottom_pane_g_ParamLimits

0xfd63,	// (0x0003740d) vkb2_area_bottom_pane_g

0x215d,	// (0x00029807) vkb2_top_cell_left_pane_ParamLimits

0x215d,	// (0x00029807) vkb2_top_cell_left_pane

0xdbb3,	// (0x0003525d) vkb2_top_entry_pane_g1_ParamLimits

0xdbb3,	// (0x0003525d) vkb2_top_entry_pane_g1

0xdbc1,	// (0x0003526b) vkb2_top_entry_pane_t1_ParamLimits

0xdbc1,	// (0x0003526b) vkb2_top_entry_pane_t1

0x661e,	// (0x0002dcc8) vkb2_top_entry_pane_t2_ParamLimits

0x661e,	// (0x0002dcc8) vkb2_top_entry_pane_t2

0x6650,	// (0x0002dcfa) vkb2_top_entry_pane_t3_ParamLimits

0x6650,	// (0x0002dcfa) vkb2_top_entry_pane_t3

0x0002,

0xfd6a,	// (0x00037414) vkb2_top_entry_pane_t_ParamLimits

0xfd6a,	// (0x00037414) vkb2_top_entry_pane_t

0xbe5f,	// (0x00033509) vkb2_top_grid_right_pane_g1_ParamLimits

0xbe5f,	// (0x00033509) vkb2_top_grid_right_pane_g1

0x21c0,	// (0x0002986a) vkb2_top_grid_right_pane_g2_ParamLimits

0x21c0,	// (0x0002986a) vkb2_top_grid_right_pane_g2

0x21d8,	// (0x00029882) vkb2_top_grid_right_pane_g3_ParamLimits

0x21d8,	// (0x00029882) vkb2_top_grid_right_pane_g3

0xbe75,	// (0x0003351f) vkb2_top_grid_right_pane_g4_ParamLimits

0xbe75,	// (0x0003351f) vkb2_top_grid_right_pane_g4

0x0003,

0xfd71,	// (0x0003741b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd71,	// (0x0003741b) vkb2_top_grid_right_pane_g

0x2206,	// (0x000298b0) vkb2_top_cell_left_pane_g1

0x221d,	// (0x000298c7) vkb2_cell_keypad_pane_g1_ParamLimits

0x221d,	// (0x000298c7) vkb2_cell_keypad_pane_g1

0x6674,	// (0x0002dd1e) vkb2_cell_keypad_pane_t1_ParamLimits

0x6674,	// (0x0002dd1e) vkb2_cell_keypad_pane_t1

0x222b,	// (0x000298d5) vkb2_cell_bottom_grid_pane_ParamLimits

0x222b,	// (0x000298d5) vkb2_cell_bottom_grid_pane

0x2264,	// (0x0002990e) vkb2_cell_bottom_grid_pane_g1

0xd861,	// (0x00034f0b) aid_call2_pane_cp02

0xd869,	// (0x00034f13) aid_call_pane_cp02

0xd871,	// (0x00034f1b) clock_digital_number_pane_cp10

0xd879,	// (0x00034f23) clock_digital_number_pane_cp11

0xd881,	// (0x00034f2b) clock_digital_number_pane_cp12

0xd889,	// (0x00034f33) clock_digital_number_pane_cp13

0xd891,	// (0x00034f3b) clock_digital_separator_pane_cp10

0xca16,	// (0x000340c0) popup_clock_digital_analogue_window_cp2_g1

0xca16,	// (0x000340c0) popup_clock_digital_analogue_window_cp2_g2

0xd899,	// (0x00034f43) popup_clock_digital_analogue_window_cp2_g3

0xca16,	// (0x000340c0) popup_clock_digital_analogue_window_cp2_g4

0xd899,	// (0x00034f43) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd26,	// (0x000373d0) popup_clock_digital_analogue_window_cp2_g

0xd8a1,	// (0x00034f4b) popup_clock_digital_analogue_window_cp2_t1

0xd8af,	// (0x00034f59) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd31,	// (0x000373db) popup_clock_digital_analogue_window_cp2_t

0x475b,	// (0x0002be05) clock_digital_number_pane_cp10_g1

0x475b,	// (0x0002be05) clock_digital_number_pane_cp10_g2

0x0001,

0xfb20,	// (0x000371ca) clock_digital_number_pane_cp10_g

0x475b,	// (0x0002be05) clock_digital_separator_pane_cp10_g1

0x475b,	// (0x0002be05) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb20,	// (0x000371ca) clock_digital_separator_pane_cp10_g

0xd75e,	// (0x00034e08) uniindi_top_pane_g3

0x60ac,	// (0x0002d756) uniindi_top_pane_g4

0x203e,	// (0x000296e8) vkb2_row_keypad_pane_ParamLimits

0x203e,	// (0x000296e8) vkb2_row_keypad_pane

0x2280,	// (0x0002992a) vkb2_cell_t_keypad_pane_ParamLimits

0x2280,	// (0x0002992a) vkb2_cell_t_keypad_pane

0x2290,	// (0x0002993a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2290,	// (0x0002993a) vkb2_cell_t_keypad_pane_cp08

0x22a3,	// (0x0002994d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x22a3,	// (0x0002994d) vkb2_cell_t_keypad_pane_cp09

0x22b7,	// (0x00029961) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x22b7,	// (0x00029961) vkb2_cell_t_keypad_pane_cp01

0x22c8,	// (0x00029972) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x22c8,	// (0x00029972) vkb2_cell_t_keypad_pane_cp02

0x22d9,	// (0x00029983) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x22d9,	// (0x00029983) vkb2_cell_t_keypad_pane_cp03

0x22ea,	// (0x00029994) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x22ea,	// (0x00029994) vkb2_cell_t_keypad_pane_cp04

0x22fb,	// (0x000299a5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x22fb,	// (0x000299a5) vkb2_cell_t_keypad_pane_cp05

0x230c,	// (0x000299b6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x230c,	// (0x000299b6) vkb2_cell_t_keypad_pane_cp06

0x231d,	// (0x000299c7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x231d,	// (0x000299c7) vkb2_cell_t_keypad_pane_cp07

0x232e,	// (0x000299d8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x232e,	// (0x000299d8) vkb2_cell_t_keypad_pane_cp10

0x49cb,	// (0x0002c075) vkb2_cell_t_keypad_pane_g1

0x668b,	// (0x0002dd35) vkb2_cell_t_keypad_pane_t1

0xc19e,	// (0x00033848) popup_grid_graphic2_window

0xdbfa,	// (0x000352a4) aid_size_cell_graphic2_ParamLimits

0xdbfa,	// (0x000352a4) aid_size_cell_graphic2

0xdc38,	// (0x000352e2) bg_popup_window_pane_cp21_ParamLimits

0xdc38,	// (0x000352e2) bg_popup_window_pane_cp21

0xdc46,	// (0x000352f0) graphic2_pages_pane_ParamLimits

0xdc46,	// (0x000352f0) graphic2_pages_pane

0xdc9c,	// (0x00035346) grid_graphic2_control_pane_ParamLimits

0xdc9c,	// (0x00035346) grid_graphic2_control_pane

0xdce4,	// (0x0003538e) grid_graphic2_pane_ParamLimits

0xdce4,	// (0x0003538e) grid_graphic2_pane

0xdd6b,	// (0x00035415) cell_graphic2_pane

0xc19e,	// (0x00033848) main_comp_mode_pane

0x5903,	// (0x0002cfad) list_ai3_gene_pane_ParamLimits

0xd50d,	// (0x00034bb7) bg_popup_window_pane_cp19_ParamLimits

0x5cdd,	// (0x0002d387) bg_touch_area_indi_pane_ParamLimits

0x5cdd,	// (0x0002d387) bg_touch_area_indi_pane

0x5cf3,	// (0x0002d39d) bg_touch_area_indi_pane_cp01_ParamLimits

0x5cf3,	// (0x0002d39d) bg_touch_area_indi_pane_cp01

0x5d12,	// (0x0002d3bc) bg_touch_area_indi_pane_cp02_ParamLimits

0x5d12,	// (0x0002d3bc) bg_touch_area_indi_pane_cp02

0x5d28,	// (0x0002d3d2) bg_touch_area_indi_pane_cp03_ParamLimits

0x5d28,	// (0x0002d3d2) bg_touch_area_indi_pane_cp03

0x5d42,	// (0x0002d3ec) popup_slider_window_g1_ParamLimits

0x5d5e,	// (0x0002d408) popup_slider_window_g2_ParamLimits

0x5d7a,	// (0x0002d424) popup_slider_window_g3_ParamLimits

0xfcbb,	// (0x00037365) popup_slider_window_g_ParamLimits

0x5de0,	// (0x0002d48a) popup_slider_window_t1_ParamLimits

0x5e54,	// (0x0002d4fe) small_volume_slider_vertical_pane_ParamLimits

0xdd6b,	// (0x00035415) cell_graphic2_pane_ParamLimits

0xddc6,	// (0x00035470) bg_button_pane_cp10_ParamLimits

0xddc6,	// (0x00035470) bg_button_pane_cp10

0xddd9,	// (0x00035483) bg_button_pane_cp11_ParamLimits

0xddd9,	// (0x00035483) bg_button_pane_cp11

0xddec,	// (0x00035496) graphic2_pages_pane_g1_ParamLimits

0xddec,	// (0x00035496) graphic2_pages_pane_g1

0xde07,	// (0x000354b1) graphic2_pages_pane_g2_ParamLimits

0xde07,	// (0x000354b1) graphic2_pages_pane_g2

0x0001,

0xfd7f,	// (0x00037429) graphic2_pages_pane_g_ParamLimits

0xfd7f,	// (0x00037429) graphic2_pages_pane_g

0xde1f,	// (0x000354c9) graphic2_pages_pane_t1_ParamLimits

0xde1f,	// (0x000354c9) graphic2_pages_pane_t1

0xde37,	// (0x000354e1) cell_graphic2_control_pane_ParamLimits

0xde37,	// (0x000354e1) cell_graphic2_control_pane

0xde69,	// (0x00035513) cell_graphic2_pane_g1_ParamLimits

0xde69,	// (0x00035513) cell_graphic2_pane_g1

0xd009,	// (0x000346b3) cell_graphic2_pane_g2_ParamLimits

0xd009,	// (0x000346b3) cell_graphic2_pane_g2

0xde76,	// (0x00035520) cell_graphic2_pane_g3_ParamLimits

0xde76,	// (0x00035520) cell_graphic2_pane_g3

0xd016,	// (0x000346c0) cell_graphic2_pane_g4_ParamLimits

0xd016,	// (0x000346c0) cell_graphic2_pane_g4

0xde83,	// (0x0003552d) cell_graphic2_pane_g5_ParamLimits

0xde83,	// (0x0003552d) cell_graphic2_pane_g5

0x0004,

0xfd84,	// (0x0003742e) cell_graphic2_pane_g_ParamLimits

0xfd84,	// (0x0003742e) cell_graphic2_pane_g

0xdea0,	// (0x0003554a) cell_graphic2_pane_t1_ParamLimits

0xdea0,	// (0x0003554a) cell_graphic2_pane_t1

0x2e29,	// (0x0002a4d3) grid_highlight_pane_cp11_ParamLimits

0x2e29,	// (0x0002a4d3) grid_highlight_pane_cp11

0xc338,	// (0x000339e2) bg_button_pane_cp05

0xdeea,	// (0x00035594) cell_graphic2_control_pane_g1

0x475b,	// (0x0002be05) bg_touch_area_indi_pane_g1

0x6964,	// (0x0002e00e) aid_cmod_rocker_key_size

0x696e,	// (0x0002e018) aid_cmode_itu_key_size

0x6978,	// (0x0002e022) main_cmode_video_pane

0x6982,	// (0x0002e02c) main_comp_mode_itu_pane

0x698e,	// (0x0002e038) main_comp_mode_rocker_pane

0x699a,	// (0x0002e044) cell_cmode_rocker_pane_ParamLimits

0x699a,	// (0x0002e044) cell_cmode_rocker_pane

0x69ac,	// (0x0002e056) cell_cmode_itu_pane_ParamLimits

0x69ac,	// (0x0002e056) cell_cmode_itu_pane

0xc5c4,	// (0x00033c6e) bg_button_pane_cp06_ParamLimits

0xc5c4,	// (0x00033c6e) bg_button_pane_cp06

0x49cb,	// (0x0002c075) cell_cmode_rocker_pane_g1_ParamLimits

0x49cb,	// (0x0002c075) cell_cmode_rocker_pane_g1

0x5ef8,	// (0x0002d5a2) cell_cmode_rocker_pane_g2_ParamLimits

0x5ef8,	// (0x0002d5a2) cell_cmode_rocker_pane_g2

0x0001,

0xfd94,	// (0x0003743e) cell_cmode_rocker_pane_g_ParamLimits

0xfd94,	// (0x0003743e) cell_cmode_rocker_pane_g

0xc19e,	// (0x00033848) bg_button_pane_cp07

0x69c1,	// (0x0002e06b) cell_cmode_itu_pane_g1

0x69ca,	// (0x0002e074) cell_cmode_itu_pane_t1

0x69d8,	// (0x0002e082) cell_cmode_itu_pane_t2

0x0001,

0xfd99,	// (0x00037443) cell_cmode_itu_pane_t

0x611e,	// (0x0002d7c8) aid_touch_ctrl_left

0x6126,	// (0x0002d7d0) aid_touch_ctrl_right

0xc19e,	// (0x00033848) compa_mode_pane

0xdf10,	// (0x000355ba) aid_cmod_rocker_key_size_cp

0xdf1a,	// (0x000355c4) aid_cmode_itu_key_size_cp

0x69fa,	// (0x0002e0a4) compa_mode_pane_g1

0x6a02,	// (0x0002e0ac) compa_mode_pane_g2

0x6a0a,	// (0x0002e0b4) compa_mode_pane_g3

0x0002,

0xfd9e,	// (0x00037448) compa_mode_pane_g

0xdf24,	// (0x000355ce) main_comp_mode_itu_pane_cp

0xdf2c,	// (0x000355d6) main_comp_mode_rocker_pane_cp

0xdf34,	// (0x000355de) cell_cmode_itu_pane_cp_ParamLimits

0xdf34,	// (0x000355de) cell_cmode_itu_pane_cp

0xdf49,	// (0x000355f3) cell_cmode_rocker_pane_cp_ParamLimits

0xdf49,	// (0x000355f3) cell_cmode_rocker_pane_cp

0xc5c4,	// (0x00033c6e) bg_button_pane_cp06_cp_ParamLimits

0xc5c4,	// (0x00033c6e) bg_button_pane_cp06_cp

0x49cb,	// (0x0002c075) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x49cb,	// (0x0002c075) cell_cmode_rocker_pane_g1_cp

0x475b,	// (0x0002be05) cell_cmode_rocker_pane_g2_cp

0xc19e,	// (0x00033848) bg_button_pane_cp07_cp

0xdf5b,	// (0x00035605) cell_cmode_itu_pane_g1_cp

0xdf64,	// (0x0003560e) cell_cmode_itu_pane_t1_cp

0xdf64,	// (0x0003560e) cell_cmode_itu_pane_t2_cp

0xb224,	// (0x000328ce) settings_code_pane_cp2

0xc20e,	// (0x000338b8) bg_popup_window_pane_cp3_ParamLimits

0xc451,	// (0x00033afb) heading_pane_cp3_ParamLimits

0xc460,	// (0x00033b0a) listscroll_popup_graphic_pane_ParamLimits

0x1957,	// (0x00029001) fep_hwr_aid_pane_ParamLimits

0x1d20,	// (0x000293ca) aid_touch_sctrl_top_ParamLimits

0x1d2d,	// (0x000293d7) sctrl_sk_top_pane_g1_ParamLimits

0x49cb,	// (0x0002c075) sctrl_sk_top_pane_g2_ParamLimits

0xfcd4,	// (0x0003737e) sctrl_sk_top_pane_g_ParamLimits

0x1d3a,	// (0x000293e4) sctrl_sk_top_pane_t1_ParamLimits

0x1d20,	// (0x000293ca) aid_touch_sctrl_bottom_ParamLimits

0x1d3a,	// (0x000293e4) sctrl_sk_bottom_pane_t1_ParamLimits

0xd72a,	// (0x00034dd4) aid_area_touch_clock

0xbca3,	// (0x0003334d) aid_vkb2_area_top_pane_cell_ParamLimits

0xbca3,	// (0x0003334d) aid_vkb2_area_top_pane_cell

0xbd4e,	// (0x000333f8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbd4e,	// (0x000333f8) aid_vkb2_area_bottom_pane_cell

0x65d6,	// (0x0002dc80) popup_char_count_window

0x6a60,	// (0x0002e10a) popup_char_count_window_g1

0x6a69,	// (0x0002e113) popup_char_count_window_g2

0x6a72,	// (0x0002e11c) popup_char_count_window_g3

0x0002,

0xfda5,	// (0x0003744f) popup_char_count_window_g

0x6a7b,	// (0x0002e125) popup_char_count_window_t1

0x1ddb,	// (0x00029485) popup_fep_char_preview_window_ParamLimits

0x1ddb,	// (0x00029485) popup_fep_char_preview_window

0xbcc3,	// (0x0003336d) vkb2_top_candi_pane_ParamLimits

0xbcc3,	// (0x0003336d) vkb2_top_candi_pane

0xdf72,	// (0x0003561c) cell_vkb2_top_candi_pane_ParamLimits

0xdf72,	// (0x0003561c) cell_vkb2_top_candi_pane

0x14af,	// (0x00028b59) bg_popup_fep_char_preview_window_ParamLimits

0x14af,	// (0x00028b59) bg_popup_fep_char_preview_window

0x2343,	// (0x000299ed) popup_fep_char_preview_window_t1_ParamLimits

0x2343,	// (0x000299ed) popup_fep_char_preview_window_t1

0x6ad6,	// (0x0002e180) bg_popup_fep_char_preview_window_g1

0x6ade,	// (0x0002e188) bg_popup_fep_char_preview_window_g2

0x6ae6,	// (0x0002e190) bg_popup_fep_char_preview_window_g3

0x6aee,	// (0x0002e198) bg_popup_fep_char_preview_window_g4

0x6af6,	// (0x0002e1a0) bg_popup_fep_char_preview_window_g5

0x6afe,	// (0x0002e1a8) bg_popup_fep_char_preview_window_g6

0x6b06,	// (0x0002e1b0) bg_popup_fep_char_preview_window_g7

0x6b0e,	// (0x0002e1b8) bg_popup_fep_char_preview_window_g8

0x6b16,	// (0x0002e1c0) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdac,	// (0x00037456) bg_popup_fep_char_preview_window_g

0x49cb,	// (0x0002c075) cell_vkb2_top_candi_pane_g1_ParamLimits

0x49cb,	// (0x0002c075) cell_vkb2_top_candi_pane_g1

0x4ce2,	// (0x0002c38c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4ce2,	// (0x0002c38c) cell_vkb2_top_candi_pane_g2

0x4d03,	// (0x0002c3ad) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4d03,	// (0x0002c3ad) cell_vkb2_top_candi_pane_g3

0x2385,	// (0x00029a2f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2385,	// (0x00029a2f) cell_vkb2_top_candi_pane_g4

0x6b1e,	// (0x0002e1c8) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6b1e,	// (0x0002e1c8) cell_vkb2_top_candi_pane_g5

0x5ef8,	// (0x0002d5a2) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5ef8,	// (0x0002d5a2) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc1,	// (0x0003746b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc1,	// (0x0003746b) cell_vkb2_top_candi_pane_g

0x23a6,	// (0x00029a50) cell_vkb2_top_candi_pane_t1

0xb044,	// (0x000326ee) aid_size_touch_slider_mark_ParamLimits

0xb044,	// (0x000326ee) aid_size_touch_slider_mark

0xdc82,	// (0x0003532c) grid_graphic2_catg_pane_ParamLimits

0xdc82,	// (0x0003532c) grid_graphic2_catg_pane

0xdd3e,	// (0x000353e8) popup_grid_graphic2_window_t1_ParamLimits

0xdd3e,	// (0x000353e8) popup_grid_graphic2_window_t1

0xdd54,	// (0x000353fe) popup_grid_graphic2_window_t2_ParamLimits

0xdd54,	// (0x000353fe) popup_grid_graphic2_window_t2

0x0001,

0xfd7a,	// (0x00037424) popup_grid_graphic2_window_t_ParamLimits

0xfd7a,	// (0x00037424) popup_grid_graphic2_window_t

0xc338,	// (0x000339e2) bg_button_pane_cp05_ParamLimits

0xdeea,	// (0x00035594) cell_graphic2_control_pane_g1_ParamLimits

0xdfd8,	// (0x00035682) cell_graphic2_catg_pane_ParamLimits

0xdfd8,	// (0x00035682) cell_graphic2_catg_pane

0xc19e,	// (0x00033848) bg_button_pane_cp12

0xdfea,	// (0x00035694) cell_graphic2_catg_pane_g1

0x6032,	// (0x0002d6dc) cell_tb_ext_pane_t1_ParamLimits

0x217d,	// (0x00029827) vkb2_top_cell_right_narrow_pane_ParamLimits

0x217d,	// (0x00029827) vkb2_top_cell_right_narrow_pane

0x2195,	// (0x0002983f) vkb2_top_cell_right_wide_pane_ParamLimits

0x2195,	// (0x0002983f) vkb2_top_cell_right_wide_pane

0x1949,	// (0x00028ff3) bg_vkb2_func_pane_ParamLimits

0x1949,	// (0x00028ff3) bg_vkb2_func_pane

0x2206,	// (0x000298b0) vkb2_top_cell_left_pane_g1_ParamLimits

0x1949,	// (0x00028ff3) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1949,	// (0x00028ff3) bg_vkb2_fuc_pane_cp03

0x2264,	// (0x0002990e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x0d11,	// (0x000283bb) bg_vkb2_func_pane_g1

0x0d19,	// (0x000283c3) bg_vkb2_func_pane_g2

0x0d29,	// (0x000283d3) bg_vkb2_func_pane_g3

0x0d21,	// (0x000283cb) bg_vkb2_func_pane_g4

0x0d31,	// (0x000283db) bg_vkb2_func_pane_g5

0x0d39,	// (0x000283e3) bg_vkb2_func_pane_g6

0x0d41,	// (0x000283eb) bg_vkb2_func_pane_g7

0x0d49,	// (0x000283f3) bg_vkb2_func_pane_g8

0x0d09,	// (0x000283b3) bg_vkb2_func_pane_g9

0x0008,

0xfdce,	// (0x00037478) bg_vkb2_func_pane_g

0x1949,	// (0x00028ff3) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1949,	// (0x00028ff3) bg_vkb2_fuc_pane_cp01

0x2206,	// (0x000298b0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2206,	// (0x000298b0) vkb2_top_cell_right_wide_pane_g1

0x1949,	// (0x00028ff3) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1949,	// (0x00028ff3) bg_vkb2_fuc_pane_cp02

0x2264,	// (0x0002990e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2264,	// (0x0002990e) vkb2_top_cell_right_narrow_pane_g1

0xd44f,	// (0x00034af9) aid_touch_area_decrease_ParamLimits

0xd44f,	// (0x00034af9) aid_touch_area_decrease

0xd489,	// (0x00034b33) aid_touch_area_increase_ParamLimits

0xd489,	// (0x00034b33) aid_touch_area_increase

0xd4b1,	// (0x00034b5b) aid_touch_area_mute_ParamLimits

0xd4b1,	// (0x00034b5b) aid_touch_area_mute

0xd4d9,	// (0x00034b83) aid_touch_area_slider_ParamLimits

0xd4d9,	// (0x00034b83) aid_touch_area_slider

0xd519,	// (0x00034bc3) popup_slider_window_g4_ParamLimits

0xd519,	// (0x00034bc3) popup_slider_window_g4

0xd541,	// (0x00034beb) popup_slider_window_g5_ParamLimits

0xd541,	// (0x00034beb) popup_slider_window_g5

0xd575,	// (0x00034c1f) popup_slider_window_g6_ParamLimits

0xd575,	// (0x00034c1f) popup_slider_window_g6

0x5e0e,	// (0x0002d4b8) popup_slider_window_t2_ParamLimits

0x5e0e,	// (0x0002d4b8) popup_slider_window_t2

0x0001,

0xfcc8,	// (0x00037372) popup_slider_window_t_ParamLimits

0xfcc8,	// (0x00037372) popup_slider_window_t

0xd591,	// (0x00034c3b) slider_pane_ParamLimits

0xd591,	// (0x00034c3b) slider_pane

0x6b5a,	// (0x0002e204) slider_pane_g1_ParamLimits

0x6b5a,	// (0x0002e204) slider_pane_g1

0x6b6e,	// (0x0002e218) slider_pane_g2_ParamLimits

0x6b6e,	// (0x0002e218) slider_pane_g2

0x6b84,	// (0x0002e22e) slider_pane_g3_ParamLimits

0x6b84,	// (0x0002e22e) slider_pane_g3

0x0003,

0xfde1,	// (0x0003748b) slider_pane_g_ParamLimits

0xfde1,	// (0x0003748b) slider_pane_g

0xa3df,	// (0x00031a89) popup_tb_float_extension_window_ParamLimits

0xa3df,	// (0x00031a89) popup_tb_float_extension_window

0x6bb0,	// (0x0002e25a) aid_size_cell_tb_float_ext

0xc19e,	// (0x00033848) bg_popup_sub_window_cp28

0xdff3,	// (0x0003569d) grid_tb_float_ext_pane

0xdffd,	// (0x000356a7) cell_tb_float_ext_pane_ParamLimits

0xdffd,	// (0x000356a7) cell_tb_float_ext_pane

0xe017,	// (0x000356c1) cell_tb_float_ext_pane_g1

0xe020,	// (0x000356ca) grid_highlight_pane_cp12

0xb71f,	// (0x00032dc9) cell_last_hwr_side_pane_ParamLimits

0xb71f,	// (0x00032dc9) cell_last_hwr_side_pane

0x475b,	// (0x0002be05) cell_last_hwr_side_pane_g1

0x6bf2,	// (0x0002e29c) cell_last_hwr_side_pane_g2

0x0001,

0xfdea,	// (0x00037494) cell_last_hwr_side_pane_g

0xbe2a,	// (0x000334d4) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbe2a,	// (0x000334d4) vkb2_area_bottom_space_btn_pane

0x49cb,	// (0x0002c075) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x668b,	// (0x0002dd35) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x23a6,	// (0x00029a50) cell_vkb2_top_candi_pane_t1_ParamLimits

0x23c5,	// (0x00029a6f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x23c5,	// (0x00029a6f) vkb2_area_bottom_space_btn_pane_g1

0x23ff,	// (0x00029aa9) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x23ff,	// (0x00029aa9) vkb2_area_bottom_space_btn_pane_g2

0x2435,	// (0x00029adf) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2435,	// (0x00029adf) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdef,	// (0x00037499) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdef,	// (0x00037499) vkb2_area_bottom_space_btn_pane_g

0x19fe,	// (0x000290a8) cel_fep_hwr_func_pane_ParamLimits

0x19fe,	// (0x000290a8) cel_fep_hwr_func_pane

0xb6f4,	// (0x00032d9e) cell_hwr_side_button_pane_ParamLimits

0xb6f4,	// (0x00032d9e) cell_hwr_side_button_pane

0xd72a,	// (0x00034dd4) aid_area_touch_clock_ParamLimits

0xc338,	// (0x000339e2) bg_uniindi_top_pane_ParamLimits

0xd73c,	// (0x00034de6) uniindi_top_pane_g1_ParamLimits

0xd752,	// (0x00034dfc) uniindi_top_pane_g2_ParamLimits

0xd75e,	// (0x00034e08) uniindi_top_pane_g3_ParamLimits

0x60ac,	// (0x0002d756) uniindi_top_pane_g4_ParamLimits

0xfd00,	// (0x000373aa) uniindi_top_pane_g_ParamLimits

0xd76f,	// (0x00034e19) uniindi_top_pane_t1_ParamLimits

0xc338,	// (0x000339e2) bg_vkb2_func_pane_cp01_ParamLimits

0xc338,	// (0x000339e2) bg_vkb2_func_pane_cp01

0x6bfb,	// (0x0002e2a5) cel_fep_hwr_func_pane_g1_ParamLimits

0x6bfb,	// (0x0002e2a5) cel_fep_hwr_func_pane_g1

0xc338,	// (0x000339e2) bg_vkb2_func_pane_cp02_ParamLimits

0xc338,	// (0x000339e2) bg_vkb2_func_pane_cp02

0x6bfb,	// (0x0002e2a5) cell_hwr_side_button_pane_g1_ParamLimits

0x6bfb,	// (0x0002e2a5) cell_hwr_side_button_pane_g1

0x0b5d,	// (0x00028207) status_pane_g4_ParamLimits

0x0b5d,	// (0x00028207) status_pane_g4

0x0b77,	// (0x00028221) status_pane_t1

0x4496,	// (0x0002bb40) form2_midp_gauge_slider_cont_pane

0x449e,	// (0x0002bb48) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb60d,	// (0x00032cb7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb61f,	// (0x00032cc9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad3,	// (0x0003717d) form2_midp_gauge_slider_pane_t_ParamLimits

0x44d4,	// (0x0002bb7e) form2_midp_slider_pane_ParamLimits

0x1d9b,	// (0x00029445) aid_size_cell_func_vkb2_ParamLimits

0x1d9b,	// (0x00029445) aid_size_cell_func_vkb2

0x6b9c,	// (0x0002e246) slider_pane_g4_ParamLimits

0x6b9c,	// (0x0002e246) slider_pane_g4

0xbe93,	// (0x0003353d) form2_midp_gauge_slider_pane_t2_cp01

0xbea1,	// (0x0003354b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbea1,	// (0x0003354b) form2_midp_gauge_slider_pane_t3_cp01

0x24aa,	// (0x00029b54) form2_midp_slider_pane_cp01

0xc19e,	// (0x00033848) navi_smil_pane

0x6c34,	// (0x0002e2de) navi_smil_pane_g1

0x6c3c,	// (0x0002e2e6) navi_smil_pane_t1

0x6c09,	// (0x0002e2b3) form2_midp_slider_pane_g1

0x6c12,	// (0x0002e2bc) form2_midp_slider_pane_g2

0x6c1a,	// (0x0002e2c4) form2_midp_slider_pane_g3

0x6c09,	// (0x0002e2b3) form2_midp_slider_pane_g4

0xe029,	// (0x000356d3) form2_midp_slider_pane_g5

0x0004,

0xfdf8,	// (0x000374a2) form2_midp_slider_pane_g

0x246f,	// (0x00029b19) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x246f,	// (0x00029b19) vkb2_area_bottom_space_btn_pane_g4

0xa617,	// (0x00031cc1) lc0_navi_pane_ParamLimits

0xa617,	// (0x00031cc1) lc0_navi_pane

0xa681,	// (0x00031d2b) lc0_stat_indi_pane_ParamLimits

0xa681,	// (0x00031d2b) lc0_stat_indi_pane

0xa696,	// (0x00031d40) ls0_title_pane_ParamLimits

0xa696,	// (0x00031d40) ls0_title_pane

0xc5c4,	// (0x00033c6e) bg_popup_sub_pane_cp14_ParamLimits

0xd711,	// (0x00034dbb) list_uniindi_pane_ParamLimits

0xd71d,	// (0x00034dc7) uniindi_top_pane_ParamLimits

0x60f6,	// (0x0002d7a0) list_single_uniindi_pane_g1_ParamLimits

0x6109,	// (0x0002d7b3) list_single_uniindi_pane_t1_ParamLimits

0xbebe,	// (0x00033568) lc0_stat_clock_pane_ParamLimits

0xbebe,	// (0x00033568) lc0_stat_clock_pane

0xe034,	// (0x000356de) lc0_stat_indi_pane_g1_ParamLimits

0xe034,	// (0x000356de) lc0_stat_indi_pane_g1

0xe041,	// (0x000356eb) lc0_stat_indi_pane_g2_ParamLimits

0xe041,	// (0x000356eb) lc0_stat_indi_pane_g2

0x0001,

0xfe03,	// (0x000374ad) lc0_stat_indi_pane_g_ParamLimits

0xfe03,	// (0x000374ad) lc0_stat_indi_pane_g

0xbece,	// (0x00033578) lc0_uni_indicator_pane_ParamLimits

0xbece,	// (0x00033578) lc0_uni_indicator_pane

0xe04e,	// (0x000356f8) ls0_title_pane_g1_ParamLimits

0xe04e,	// (0x000356f8) ls0_title_pane_g1

0xe062,	// (0x0003570c) ls0_title_pane_t1_ParamLimits

0xe062,	// (0x0003570c) ls0_title_pane_t1

0xbede,	// (0x00033588) lc0_uni_indicator_pane_g1_ParamLimits

0xbede,	// (0x00033588) lc0_uni_indicator_pane_g1

0x6cae,	// (0x0002e358) lc0_stat_clock_pane_t1

0xc19e,	// (0x00033848) main_ai5_pane

0x6cbc,	// (0x0002e366) ai5_sk_pane_ParamLimits

0x6cbc,	// (0x0002e366) ai5_sk_pane

0xe090,	// (0x0003573a) cell_ai5_widget_pane_ParamLimits

0xe090,	// (0x0003573a) cell_ai5_widget_pane

0x6d89,	// (0x0002e433) aid_size_cell_widget_grid

0x6d97,	// (0x0002e441) bg_ai5_widget_pane_ParamLimits

0x6d97,	// (0x0002e441) bg_ai5_widget_pane

0x6e13,	// (0x0002e4bd) cell_ai5_widget_pane_g2

0x6e27,	// (0x0002e4d1) cell_ai5_widget_pane_g3

0x6e41,	// (0x0002e4eb) cell_ai5_widget_pane_g4

0x6e51,	// (0x0002e4fb) cell_ai5_widget_pane_g5

0x6e61,	// (0x0002e50b) cell_ai5_widget_pane_g6

0x6e6d,	// (0x0002e517) cell_ai5_widget_pane_g7

0x6ed9,	// (0x0002e583) cell_ai5_widget_pane_t1_ParamLimits

0x6ed9,	// (0x0002e583) cell_ai5_widget_pane_t1

0x6ef6,	// (0x0002e5a0) cell_ai5_widget_pane_t2_ParamLimits

0x6ef6,	// (0x0002e5a0) cell_ai5_widget_pane_t2

0x6f0e,	// (0x0002e5b8) cell_ai5_widget_pane_t3_ParamLimits

0x6f0e,	// (0x0002e5b8) cell_ai5_widget_pane_t3

0x6f26,	// (0x0002e5d0) cell_ai5_widget_pane_t4_ParamLimits

0x6f26,	// (0x0002e5d0) cell_ai5_widget_pane_t4

0xe0fc,	// (0x000357a6) cell_ai5_widget_pane_t5_ParamLimits

0xe0fc,	// (0x000357a6) cell_ai5_widget_pane_t5

0x6f6b,	// (0x0002e615) cell_ai5_widget_pane_t6_ParamLimits

0x6f6b,	// (0x0002e615) cell_ai5_widget_pane_t6

0x6f7d,	// (0x0002e627) cell_ai5_widget_pane_t7_ParamLimits

0x6f7d,	// (0x0002e627) cell_ai5_widget_pane_t7

0x6f9c,	// (0x0002e646) cell_ai5_widget_pane_t8_ParamLimits

0x6f9c,	// (0x0002e646) cell_ai5_widget_pane_t8

0x000b,

0xfe23,	// (0x000374cd) cell_ai5_widget_pane_t_ParamLimits

0xfe23,	// (0x000374cd) cell_ai5_widget_pane_t

0x7020,	// (0x0002e6ca) grid_ai5_widget_pane

0xc5c4,	// (0x00033c6e) highlight_cell_ai5_widget_pane_ParamLimits

0xc5c4,	// (0x00033c6e) highlight_cell_ai5_widget_pane

0xe11c,	// (0x000357c6) ai5_sk_left_pane

0xe126,	// (0x000357d0) ai5_sk_middle_pane

0xe130,	// (0x000357da) ai5_sk_right_pane

0x704c,	// (0x0002e6f6) bg_ai5_widget_pane_g1_ParamLimits

0x704c,	// (0x0002e6f6) bg_ai5_widget_pane_g1

0x7058,	// (0x0002e702) bg_ai5_widget_pane_g2_ParamLimits

0x7058,	// (0x0002e702) bg_ai5_widget_pane_g2

0x7064,	// (0x0002e70e) bg_ai5_widget_pane_g3_ParamLimits

0x7064,	// (0x0002e70e) bg_ai5_widget_pane_g3

0x7070,	// (0x0002e71a) bg_ai5_widget_pane_g4_ParamLimits

0x7070,	// (0x0002e71a) bg_ai5_widget_pane_g4

0x707c,	// (0x0002e726) bg_ai5_widget_pane_g5_ParamLimits

0x707c,	// (0x0002e726) bg_ai5_widget_pane_g5

0x7088,	// (0x0002e732) bg_ai5_widget_pane_g6_ParamLimits

0x7088,	// (0x0002e732) bg_ai5_widget_pane_g6

0x7094,	// (0x0002e73e) bg_ai5_widget_pane_g7_ParamLimits

0x7094,	// (0x0002e73e) bg_ai5_widget_pane_g7

0x70a0,	// (0x0002e74a) bg_ai5_widget_pane_g8_ParamLimits

0x70a0,	// (0x0002e74a) bg_ai5_widget_pane_g8

0x70ac,	// (0x0002e756) bg_ai5_widget_pane_g9_ParamLimits

0x70ac,	// (0x0002e756) bg_ai5_widget_pane_g9

0x0008,

0xfe3c,	// (0x000374e6) bg_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x000374e6) bg_ai5_widget_pane_g

0x70de,	// (0x0002e788) cell_shortcut_ai5_widget_pane_ParamLimits

0x70de,	// (0x0002e788) cell_shortcut_ai5_widget_pane

0xce5f,	// (0x00034509) bg_cell_shortcut_ai5_widget_pane

0x70ef,	// (0x0002e799) cell_grid_ai5_widget_pane_g1

0xce5f,	// (0x00034509) highlight_cell_shortcut_ai5_widget_pane

0x0d19,	// (0x000283c3) ai5_sk_left_pane_g1

0x70f8,	// (0x0002e7a2) ai5_sk_left_pane_g2

0x7100,	// (0x0002e7aa) ai5_sk_left_pane_g3

0x7108,	// (0x0002e7b2) ai5_sk_left_pane_g4

0x0003,

0xfe4f,	// (0x000374f9) ai5_sk_left_pane_g

0x7110,	// (0x0002e7ba) ai5_sk_left_pane_t1

0x0d11,	// (0x000283bb) ai5_sk_right_pane_g1

0x711e,	// (0x0002e7c8) ai5_sk_right_pane_g2

0x7126,	// (0x0002e7d0) ai5_sk_right_pane_g3

0x712e,	// (0x0002e7d8) ai5_sk_right_pane_g4

0x0003,

0xfe58,	// (0x00037502) ai5_sk_right_pane_g

0x7136,	// (0x0002e7e0) ai5_sk_right_pane_t1

0x0d11,	// (0x000283bb) ai5_sk_middle_pane_g1

0x0d19,	// (0x000283c3) ai5_sk_middle_pane_g2

0x0d31,	// (0x000283db) ai5_sk_middle_pane_g3

0x7126,	// (0x0002e7d0) ai5_sk_middle_pane_g4

0x7100,	// (0x0002e7aa) ai5_sk_middle_pane_g5

0x7144,	// (0x0002e7ee) ai5_sk_middle_pane_g6

0xe13a,	// (0x000357e4) ai5_sk_middle_pane_g7

0x0006,

0xfe61,	// (0x0003750b) ai5_sk_middle_pane_g

0xa503,	// (0x00031bad) aid_touch_area_size_lc0_ParamLimits

0xa503,	// (0x00031bad) aid_touch_area_size_lc0

0x1b89,	// (0x00029233) cell_hwr_candidate_pane_t1_ParamLimits

0x082e,	// (0x00027ed8) aid_touch_navi_pane

0xa78f,	// (0x00031e39) status_dt_navi_pane_ParamLimits

0xa78f,	// (0x00031e39) status_dt_navi_pane

0xa7a7,	// (0x00031e51) status_dt_sta_pane_ParamLimits

0xa7a7,	// (0x00031e51) status_dt_sta_pane

0xe142,	// (0x000357ec) dt_sta_controll_pane

0xe14f,	// (0x000357f9) dt_sta_indi_pane

0xe15c,	// (0x00035806) dt_sta_title_pane

0xc338,	// (0x000339e2) bg_dt_sta_indi_pane_ParamLimits

0xc338,	// (0x000339e2) bg_dt_sta_indi_pane

0xe16e,	// (0x00035818) dt_sta_battery_pane

0xe176,	// (0x00035820) dt_sta_indi_pane_g1

0x7196,	// (0x0002e840) dt_sta_indi_pane_g2

0x719f,	// (0x0002e849) dt_sta_indi_pane_g3

0x0002,

0xfe70,	// (0x0003751a) dt_sta_indi_pane_g

0x71a8,	// (0x0002e852) dt_sta_signal_pane

0xc5c4,	// (0x00033c6e) bg_dt_sta_title_pane_ParamLimits

0xc5c4,	// (0x00033c6e) bg_dt_sta_title_pane

0x2f89,	// (0x0002a633) dt_sta_title_pane_g1

0xe17f,	// (0x00035829) dt_sta_title_pane_t1_ParamLimits

0xe17f,	// (0x00035829) dt_sta_title_pane_t1

0xc19e,	// (0x00033848) bg_dt_sta_control_pane

0xe194,	// (0x0003583e) dt_sta_controll_pane_g1

0xe19d,	// (0x00035847) bg_dt_sta_title_pane_g1

0xe1a6,	// (0x00035850) bg_dt_sta_title_pane_g2

0xe1af,	// (0x00035859) bg_dt_sta_title_pane_g3

0x0002,

0xfe77,	// (0x00037521) bg_dt_sta_title_pane_g

0x475b,	// (0x0002be05) bg_dt_sta_indi_pane_g1

0x71ea,	// (0x0002e894) dt_sta_signal_pane_g1

0x71f2,	// (0x0002e89c) dt_sta_signal_pane_g2

0x0001,

0xfe7e,	// (0x00037528) dt_sta_signal_pane_g

0x71fa,	// (0x0002e8a4) dt_sta_battery_pane_g1

0x7203,	// (0x0002e8ad) dt_sta_battery_pane_t1

0x475b,	// (0x0002be05) bg_dt_sta_control_pane_g1

0xca99,	// (0x00034143) fep_china_uni_eep_pane

0xcaa1,	// (0x0003414b) fep_china_uni_entry_pane_ParamLimits

0xcab1,	// (0x0003415b) popup_fep_china_uni_window_g1_ParamLimits

0xcac1,	// (0x0003416b) popup_fep_china_uni_window_g2_ParamLimits

0xcac1,	// (0x0003416b) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x00036d93) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x00036d93) popup_fep_china_uni_window_g

0x7212,	// (0x0002e8bc) fep_china_uni_eep_pane_g1

0x721a,	// (0x0002e8c4) fep_china_uni_eep_pane_t1

0x6c2b,	// (0x0002e2d5) aid_touch_area_size_smil_player

0x0984,	// (0x0002802e) lc0_clock_pane

0x0b6b,	// (0x00028215) status_pane_g5_ParamLimits

0x0b6b,	// (0x00028215) status_pane_g5

0x9f3b,	// (0x000315e5) popup_keymap_window

0x0b29,	// (0x000281d3) status_icon_pane

0x6e27,	// (0x0002e4d1) cell_ai5_widget_pane_g3_ParamLimits

0x6e41,	// (0x0002e4eb) cell_ai5_widget_pane_g4_ParamLimits

0x6e51,	// (0x0002e4fb) cell_ai5_widget_pane_g5_ParamLimits

0x6e79,	// (0x0002e523) cell_ai5_widget_pane_g8_ParamLimits

0x6e79,	// (0x0002e523) cell_ai5_widget_pane_g8

0x6e8d,	// (0x0002e537) cell_ai5_widget_pane_g9_ParamLimits

0x6e8d,	// (0x0002e537) cell_ai5_widget_pane_g9

0x6ea1,	// (0x0002e54b) cell_ai5_widget_pane_g10_ParamLimits

0x6ea1,	// (0x0002e54b) cell_ai5_widget_pane_g10

0x7229,	// (0x0002e8d3) status_icon_pane_g1

0xc19e,	// (0x00033848) bg_popup_sub_pane_cp13

0x7231,	// (0x0002e8db) popup_keymap_window_t1

0x9bfb,	// (0x000312a5) control_pane_g6_ParamLimits

0x9bfb,	// (0x000312a5) control_pane_g6

0x9c08,	// (0x000312b2) control_pane_g7_ParamLimits

0x9c08,	// (0x000312b2) control_pane_g7

0x9c15,	// (0x000312bf) control_pane_g8_ParamLimits

0x9c15,	// (0x000312bf) control_pane_g8

0xe142,	// (0x000357ec) dt_sta_controll_pane_ParamLimits

0xe14f,	// (0x000357f9) dt_sta_indi_pane_ParamLimits

0xe15c,	// (0x00035806) dt_sta_title_pane_ParamLimits

0xc50f,	// (0x00033bb9) aid_size_touch_scroll_bar_cale

0x8e42,	// (0x000304ec) popup_discreet_window_ParamLimits

0x8e42,	// (0x000304ec) popup_discreet_window

0x8e94,	// (0x0003053e) popup_sk_window

0x14af,	// (0x00028b59) bg_popup_sub_pane_cp28_ParamLimits

0x14af,	// (0x00028b59) bg_popup_sub_pane_cp28

0x723f,	// (0x0002e8e9) popup_discreet_window_g1_ParamLimits

0x723f,	// (0x0002e8e9) popup_discreet_window_g1

0xe1b8,	// (0x00035862) popup_discreet_window_t1_ParamLimits

0xe1b8,	// (0x00035862) popup_discreet_window_t1

0x727d,	// (0x0002e927) popup_discreet_window_t2_ParamLimits

0x727d,	// (0x0002e927) popup_discreet_window_t2

0x0002,

0xfe83,	// (0x0003752d) popup_discreet_window_t_ParamLimits

0xfe83,	// (0x0003752d) popup_discreet_window_t

0x24e1,	// (0x00029b8b) popup_sk_window_g1

0x24eb,	// (0x00029b95) popup_sk_window_g2

0x0001,

0xfe8a,	// (0x00037534) popup_sk_window_g

0xbf09,	// (0x000335b3) popup_sk_window_t1

0xbf17,	// (0x000335c1) popup_sk_window_t1_copy1

0x6e13,	// (0x0002e4bd) cell_ai5_widget_pane_g2_ParamLimits

0x6fae,	// (0x0002e658) cell_ai5_widget_pane_t9_ParamLimits

0x6fae,	// (0x0002e658) cell_ai5_widget_pane_t9

0xc19e,	// (0x00033848) main_fep_fshwr2_pane

0xbf25,	// (0x000335cf) aid_fshwr2_btn_pane

0xbf39,	// (0x000335e3) aid_fshwr2_syb_pane

0xbf4d,	// (0x000335f7) aid_fshwr2_txt_pane

0xbf5d,	// (0x00033607) fshwr2_func_candi_pane

0xbf7d,	// (0x00033627) fshwr2_hwr_syb_pane

0xbfa1,	// (0x0003364b) fshwr2_icf_pane

0xc19e,	// (0x00033848) fshwr2_icf_bg_pane

0x25a3,	// (0x00029c4d) fshwr2_icf_pane_t1_ParamLimits

0x25a3,	// (0x00029c4d) fshwr2_icf_pane_t1

0xca16,	// (0x000340c0) fshwr2_func_candi_pane_g1

0xe1d6,	// (0x00035880) fshwr2_func_candi_row_pane_ParamLimits

0xe1d6,	// (0x00035880) fshwr2_func_candi_row_pane

0xbfd1,	// (0x0003367b) cell_fshwr2_syb_pane_ParamLimits

0xbfd1,	// (0x0003367b) cell_fshwr2_syb_pane

0x6bfb,	// (0x0002e2a5) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6bfb,	// (0x0002e2a5) fshwr2_hwr_syb_pane_g1

0xc19e,	// (0x00033848) bg_popup_call_pane_cp01

0xbff7,	// (0x000336a1) fshwr2_func_candi_cell_pane_ParamLimits

0xbff7,	// (0x000336a1) fshwr2_func_candi_cell_pane

0x1298,	// (0x00028942) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x1298,	// (0x00028942) fshwr2_func_candi_cell_bg_pane

0xc042,	// (0x000336ec) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc042,	// (0x000336ec) fshwr2_func_candi_cell_pane_g1

0xc079,	// (0x00033723) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc079,	// (0x00033723) fshwr2_func_candi_cell_pane_t1

0xc19e,	// (0x00033848) bg_button_pane_cp08

0xc706,	// (0x00033db0) cell_fshwr2_syb_bg_pane

0xc094,	// (0x0003373e) cell_fshwr2_syb_bg_pane_g1

0xc0a7,	// (0x00033751) cell_fshwr2_syb_bg_pane_t1

0xc5c4,	// (0x00033c6e) main_tmo_pane

0xaf1a,	// (0x000325c4) uni_indicator_pane_g1_ParamLimits

0xaf30,	// (0x000325da) uni_indicator_pane_g2_ParamLimits

0xaf46,	// (0x000325f0) uni_indicator_pane_g3_ParamLimits

0x32f6,	// (0x0002a9a0) uni_indicator_pane_g4_ParamLimits

0x32f6,	// (0x0002a9a0) uni_indicator_pane_g4

0x330a,	// (0x0002a9b4) uni_indicator_pane_g5_ParamLimits

0x330a,	// (0x0002a9b4) uni_indicator_pane_g5

0x330a,	// (0x0002a9b4) uni_indicator_pane_g6_ParamLimits

0x330a,	// (0x0002a9b4) uni_indicator_pane_g6

0xf8e8,	// (0x00036f92) uni_indicator_pane_g_ParamLimits

0xd431,	// (0x00034adb) popup_tmo_note_window_ParamLimits

0xd431,	// (0x00034adb) popup_tmo_note_window

0xc5c4,	// (0x00033c6e) fshwr2_bg_pane

0xc06a,	// (0x00033714) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc06a,	// (0x00033714) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8f,	// (0x00037539) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8f,	// (0x00037539) fshwr2_func_candi_cell_pane_g

0x475b,	// (0x0002be05) bg_popup_window_pane_cp01

0x2687,	// (0x00029d31) bg_popup_window_pane_g1_cp01

0x72f6,	// (0x0002e9a0) bg_popup_window_pane_cp22_ParamLimits

0x72f6,	// (0x0002e9a0) bg_popup_window_pane_cp22

0xe1f9,	// (0x000358a3) listscroll_tmo_link_pane_ParamLimits

0xe1f9,	// (0x000358a3) listscroll_tmo_link_pane

0x7344,	// (0x0002e9ee) popup_tmo_note_window_g1_ParamLimits

0x7344,	// (0x0002e9ee) popup_tmo_note_window_g1

0xe239,	// (0x000358e3) tmo_note_info_pane_ParamLimits

0xe239,	// (0x000358e3) tmo_note_info_pane

0xe253,	// (0x000358fd) list_tmo_note_info_pane_g1_ParamLimits

0xe253,	// (0x000358fd) list_tmo_note_info_pane_g1

0x7382,	// (0x0002ea2c) list_tmo_note_info_pane_g2_ParamLimits

0x7382,	// (0x0002ea2c) list_tmo_note_info_pane_g2

0x0001,

0xfe94,	// (0x0003753e) list_tmo_note_info_pane_g_ParamLimits

0xfe94,	// (0x0003753e) list_tmo_note_info_pane_g

0x739e,	// (0x0002ea48) list_tmo_note_info_text_pane_ParamLimits

0x739e,	// (0x0002ea48) list_tmo_note_info_text_pane

0x741f,	// (0x0002eac9) list_tmo_link_pane

0x742c,	// (0x0002ead6) scroll_pane_cp20

0x7439,	// (0x0002eae3) list_single_tmo_link_pane_ParamLimits

0x7439,	// (0x0002eae3) list_single_tmo_link_pane

0x7449,	// (0x0002eaf3) list_single_tmo_link_pane_t1

0x7457,	// (0x0002eb01) list_tmo_note_info_text_pane_t1_ParamLimits

0x7457,	// (0x0002eb01) list_tmo_note_info_text_pane_t1

0x95b8,	// (0x00030c62) aid_size_touch_scroll_bar_cp01_ParamLimits

0x95b8,	// (0x00030c62) aid_size_touch_scroll_bar_cp01

0x8976,	// (0x00030020) aid_size_touch_slider_marker

0x8e84,	// (0x0003052e) popup_settings_window_ParamLimits

0x8e84,	// (0x0003052e) popup_settings_window

0xea21,	// (0x000360cb) popup_candi_list_indi_window

0x082e,	// (0x00027ed8) aid_touch_navi_pane_ParamLimits

0x1cf4,	// (0x0002939e) rs_clock_indi_pane

0x1cfd,	// (0x000293a7) sctrl_sk_bottom_pane_ParamLimits

0x1d0e,	// (0x000293b8) sctrl_sk_top_pane_ParamLimits

0xbb67,	// (0x00033211) popup_fep_tooltip_window

0x6d89,	// (0x0002e433) aid_size_cell_widget_grid_ParamLimits

0x6dfe,	// (0x0002e4a8) cell_ai5_widget_pane_g1_ParamLimits

0x6dfe,	// (0x0002e4a8) cell_ai5_widget_pane_g1

0x6e61,	// (0x0002e50b) cell_ai5_widget_pane_g6_ParamLimits

0x6e6d,	// (0x0002e517) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe08,	// (0x000374b2) cell_ai5_widget_pane_g_ParamLimits

0xfe08,	// (0x000374b2) cell_ai5_widget_pane_g

0x6fdd,	// (0x0002e687) cell_ai5_widget_pane_t10_ParamLimits

0x6fdd,	// (0x0002e687) cell_ai5_widget_pane_t10

0x7020,	// (0x0002e6ca) grid_ai5_widget_pane_ParamLimits

0x70b8,	// (0x0002e762) cell_contacts_ai5_widget_pane_ParamLimits

0x70b8,	// (0x0002e762) cell_contacts_ai5_widget_pane

0x7292,	// (0x0002e93c) popup_discreet_window_t3_ParamLimits

0x7292,	// (0x0002e93c) popup_discreet_window_t3

0xbfbd,	// (0x00033667) popup_fshwr2_char_preview_window_ParamLimits

0xbfbd,	// (0x00033667) popup_fshwr2_char_preview_window

0xe26a,	// (0x00035914) tmo_note_info_pane_t1

0xe27f,	// (0x00035929) tmo_note_info_pane_t2

0xe296,	// (0x00035940) tmo_note_info_pane_t3

0x73fb,	// (0x0002eaa5) tmo_note_info_pane_t4

0x740d,	// (0x0002eab7) tmo_note_info_pane_t5

0x0004,

0xfe99,	// (0x00037543) tmo_note_info_pane_t

0x741f,	// (0x0002eac9) list_tmo_link_pane_ParamLimits

0x742c,	// (0x0002ead6) scroll_pane_cp20_ParamLimits

0xc19e,	// (0x00033848) bg_popup_fep_char_preview_window_cp01

0xe2ab,	// (0x00035955) popup_fshwr2_char_preview_window_t1

0x747e,	// (0x0002eb28) popup_candi_list_indi_window_g1

0x7487,	// (0x0002eb31) bg_cell_contacts_ai5_widget_pane

0x7493,	// (0x0002eb3d) cell_contacts_ai5_widget_pane_g1

0x4e42,	// (0x0002c4ec) cell_contacts_ai5_widget_pane_g2

0x74a8,	// (0x0002eb52) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea4,	// (0x0003754e) cell_contacts_ai5_widget_pane_g

0x74b4,	// (0x0002eb5e) cell_contacts_ai5_widget_pane_t1

0xc5c4,	// (0x00033c6e) highlight_cell_shortcut_ai5_widget_pane_cp01

0x752b,	// (0x0002ebd5) settings_container_pane

0xce5f,	// (0x00034509) listscroll_set_pane_copy1

0x3e37,	// (0x0002b4e1) scroll_pane_cp121_copy1

0x1254,	// (0x000288fe) set_content_pane_copy1

0xe2b9,	// (0x00035963) aid_height_set_list_copy1_ParamLimits

0xe2b9,	// (0x00035963) aid_height_set_list_copy1

0x3502,	// (0x0002abac) aid_size_parent_copy1_ParamLimits

0x3502,	// (0x0002abac) aid_size_parent_copy1

0xe2c5,	// (0x0003596f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe2c5,	// (0x0003596f) button_value_adjust_pane_cp6_copy1

0xc706,	// (0x00033db0) list_highlight_pane_cp2_copy1_ParamLimits

0xc706,	// (0x00033db0) list_highlight_pane_cp2_copy1

0xe2d9,	// (0x00035983) list_set_pane_copy1_ParamLimits

0xe2d9,	// (0x00035983) list_set_pane_copy1

0x74c6,	// (0x0002eb70) main_pane_set_t1_copy1_ParamLimits

0x74c6,	// (0x0002eb70) main_pane_set_t1_copy1

0x7500,	// (0x0002ebaa) main_pane_set_t2_copy1_ParamLimits

0x7500,	// (0x0002ebaa) main_pane_set_t2_copy1

0xe386,	// (0x00035a30) main_pane_set_t3_copy1

0xe394,	// (0x00035a3e) main_pane_set_t4_copy1

0x751f,	// (0x0002ebc9) set_content_pane_g1_copy1_ParamLimits

0x751f,	// (0x0002ebc9) set_content_pane_g1_copy1

0xe3a2,	// (0x00035a4c) setting_code_pane_copy1

0x7628,	// (0x0002ecd2) setting_slider_graphic_pane_copy1

0x7628,	// (0x0002ecd2) setting_slider_pane_copy1

0x7630,	// (0x0002ecda) setting_text_pane_copy1

0x7630,	// (0x0002ecda) setting_volume_pane_copy1

0xe3a2,	// (0x00035a4c) settings_code_pane_cp2_copy1

0xe3aa,	// (0x00035a54) settings_code_pane_cp_copy1_ParamLimits

0xe3aa,	// (0x00035a54) settings_code_pane_cp_copy1

0xc0bd,	// (0x00033767) volume_set_pane_copy1

0xe3be,	// (0x00035a68) volume_set_pane_g10_copy1

0xe3c6,	// (0x00035a70) volume_set_pane_g1_copy1

0xe3ce,	// (0x00035a78) volume_set_pane_g2_copy1

0xe3d6,	// (0x00035a80) volume_set_pane_g3_copy1

0xe3de,	// (0x00035a88) volume_set_pane_g4_copy1

0xe3e6,	// (0x00035a90) volume_set_pane_g5_copy1

0xe3ee,	// (0x00035a98) volume_set_pane_g6_copy1

0xe3f6,	// (0x00035aa0) volume_set_pane_g7_copy1

0xe3fe,	// (0x00035aa8) volume_set_pane_g8_copy1

0xe406,	// (0x00035ab0) volume_set_pane_g9_copy1

0xc20e,	// (0x000338b8) bg_set_opt_pane_cp_copy1_ParamLimits

0xc20e,	// (0x000338b8) bg_set_opt_pane_cp_copy1

0xc0c5,	// (0x0003376f) setting_slider_pane_t1_copy1_ParamLimits

0xc0c5,	// (0x0003376f) setting_slider_pane_t1_copy1

0xc0e4,	// (0x0003378e) setting_slider_pane_t2_copy1_ParamLimits

0xc0e4,	// (0x0003378e) setting_slider_pane_t2_copy1

0xc0fe,	// (0x000337a8) setting_slider_pane_t3_copy1_ParamLimits

0xc0fe,	// (0x000337a8) setting_slider_pane_t3_copy1

0xc116,	// (0x000337c0) slider_set_pane_copy1_ParamLimits

0xc116,	// (0x000337c0) slider_set_pane_copy1

0xc61c,	// (0x00033cc6) set_opt_bg_pane_g1_copy2

0xc624,	// (0x00033cce) set_opt_bg_pane_g2_copy2

0x769c,	// (0x0002ed46) set_opt_bg_pane_g3_copy2

0xc634,	// (0x00033cde) set_opt_bg_pane_g4_copy2

0xc63c,	// (0x00033ce6) set_opt_bg_pane_g5_copy2

0xc644,	// (0x00033cee) set_opt_bg_pane_g6_copy2

0xe40e,	// (0x00035ab8) set_opt_bg_pane_g7_copy2

0x76ae,	// (0x0002ed58) set_opt_bg_pane_g8_copy2

0x76b8,	// (0x0002ed62) set_opt_bg_pane_g9_copy2

0xc12c,	// (0x000337d6) aid_size_touch_slider_mark_copy1_ParamLimits

0xc12c,	// (0x000337d6) aid_size_touch_slider_mark_copy1

0xe416,	// (0x00035ac0) slider_set_pane_g1_copy1

0x2713,	// (0x00029dbd) slider_set_pane_g2_copy1

0xb065,	// (0x0003270f) slider_set_pane_g3_copy1_ParamLimits

0xb065,	// (0x0003270f) slider_set_pane_g3_copy1

0xb079,	// (0x00032723) slider_set_pane_g4_copy1_ParamLimits

0xb079,	// (0x00032723) slider_set_pane_g4_copy1

0xb091,	// (0x0003273b) slider_set_pane_g5_copy1_ParamLimits

0xb091,	// (0x0003273b) slider_set_pane_g5_copy1

0xb065,	// (0x0003270f) slider_set_pane_g6_copy1_ParamLimits

0xb065,	// (0x0003270f) slider_set_pane_g6_copy1

0xc140,	// (0x000337ea) slider_set_pane_g7_copy1_ParamLimits

0xc140,	// (0x000337ea) slider_set_pane_g7_copy1

0xc1b2,	// (0x0003385c) bg_set_opt_pane_cp2_copy1

0xe41f,	// (0x00035ac9) setting_slider_graphic_pane_g1_copy1

0xe428,	// (0x00035ad2) setting_slider_graphic_pane_t1_copy1

0xe438,	// (0x00035ae2) setting_slider_graphic_pane_t2_copy1

0xe448,	// (0x00035af2) slider_set_pane_cp_copy1

0x7704,	// (0x0002edae) input_focus_pane_cp1_copy1

0x770d,	// (0x0002edb7) list_set_text_pane_copy1

0x7715,	// (0x0002edbf) setting_text_pane_g1_copy1

0xf0e6,	// (0x00036790) set_text_pane_t1_copy1

0x7704,	// (0x0002edae) input_focus_pane_cp2_copy1

0x7715,	// (0x0002edbf) setting_code_pane_g1_copy1

0x771e,	// (0x0002edc8) setting_code_pane_t1_copy1

0x772c,	// (0x0002edd6) list_set_graphic_pane_copy1

0xc1b2,	// (0x0003385c) bg_set_opt_pane_cp4_copy1

0xcbf1,	// (0x0003429b) list_set_graphic_pane_g1_copy1_ParamLimits

0xcbf1,	// (0x0003429b) list_set_graphic_pane_g1_copy1

0x7740,	// (0x0002edea) list_set_graphic_pane_g2_copy1

0xcc09,	// (0x000342b3) list_set_graphic_pane_t1_copy1_ParamLimits

0xcc09,	// (0x000342b3) list_set_graphic_pane_t1_copy1

0x475b,	// (0x0002be05) rs_clock_indi_pane_g1

0x7748,	// (0x0002edf2) rs_clock_indi_pane_t1

0x7756,	// (0x0002ee00) rs_indi_pane

0x775e,	// (0x0002ee08) rs_indi_pane_g1

0x7767,	// (0x0002ee11) rs_indi_pane_g2

0x747e,	// (0x0002eb28) rs_indi_pane_g3

0x0002,

0xfeab,	// (0x00037555) rs_indi_pane_g

0xce5f,	// (0x00034509) bg_popup_preview_window_pane_cp03

0x7770,	// (0x0002ee1a) popup_fep_tooltip_window_t1

0xd0d7,	// (0x00034781) popup_note2_window_g2_ParamLimits

0xd0d7,	// (0x00034781) popup_note2_window_g2

0x0001,

0xfc3f,	// (0x000372e9) popup_note2_window_g_ParamLimits

0xfc3f,	// (0x000372e9) popup_note2_window_g

0x58c9,	// (0x0002cf73) bg_popup_sub_pane_cp11_ParamLimits

0x58d6,	// (0x0002cf80) cell_ai3_links_pane_g1_ParamLimits

0x58ed,	// (0x0002cf97) cell_ai3_links_pane_t1

0xf0e6,	// (0x00036790) set_text_pane_t1_copy1_ParamLimits

0x99c1,	// (0x0003106b) cell_graphic_popup_pane_cp2_ParamLimits

0x99c1,	// (0x0003106b) cell_graphic_popup_pane_cp2

0xe458,	// (0x00035b02) cell_graphic_popup_pane_g1_cp2

0xc492,	// (0x00033b3c) cell_graphic_popup_pane_g2_cp2

0x7786,	// (0x0002ee30) cell_graphic_popup_pane_g3_cp2

0xe460,	// (0x00035b0a) cell_graphic_popup_pane_t2_cp2

0xc4a3,	// (0x00033b4d) grid_highlight_pane_cp3_cp2

0xc893,	// (0x00033f3d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc5c4,	// (0x00033c6e) main_tmo_pane_ParamLimits

0xd425,	// (0x00034acf) popup_tmo_big_image_note_window

0x6ded,	// (0x0002e497) cell_ai5_widget_list_pane

0x6df5,	// (0x0002e49f) cell_ai5_widget_lrg_icon_pane

0xe26a,	// (0x00035914) tmo_note_info_pane_t1_ParamLimits

0xe27f,	// (0x00035929) tmo_note_info_pane_t2_ParamLimits

0xe296,	// (0x00035940) tmo_note_info_pane_t3_ParamLimits

0x73fb,	// (0x0002eaa5) tmo_note_info_pane_t4_ParamLimits

0x740d,	// (0x0002eab7) tmo_note_info_pane_t5_ParamLimits

0xfe99,	// (0x00037543) tmo_note_info_pane_t_ParamLimits

0x752b,	// (0x0002ebd5) settings_container_pane_ParamLimits

0xe450,	// (0x00035afa) indicator_popup_pane_cp5

0xe450,	// (0x00035afa) indicator_popup_pane_cp6

0x772c,	// (0x0002edd6) list_set_graphic_pane_copy1_ParamLimits

0xc19e,	// (0x00033848) bg_popup_window_pane_cp23

0x779c,	// (0x0002ee46) popup_tmo_big_image_note_window_g1

0x77a5,	// (0x0002ee4f) popup_tmo_big_image_note_window_t1

0x77b5,	// (0x0002ee5f) popup_tmo_big_image_note_window_t2

0x77c5,	// (0x0002ee6f) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb2,	// (0x0003755c) popup_tmo_big_image_note_window_t

0x475b,	// (0x0002be05) cell_ai5_widget_lrg_icon_pane_g1

0x77d5,	// (0x0002ee7f) cell_ai5_widget_lrg_icon_pane_t1

0x77e3,	// (0x0002ee8d) cell_ai5_widget_list_row_pane_ParamLimits

0x77e3,	// (0x0002ee8d) cell_ai5_widget_list_row_pane

0x77fa,	// (0x0002eea4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x77fa,	// (0x0002eea4) cell_ai5_widget_list_row_pane_g1

0xe46e,	// (0x00035b18) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe46e,	// (0x00035b18) cell_ai5_widget_list_row_pane_t1

0x7832,	// (0x0002eedc) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7832,	// (0x0002eedc) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb9,	// (0x00037563) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb9,	// (0x00037563) cell_ai5_widget_list_row_pane_t

0xc19e,	// (0x00033848) main_fep_vtchi_ss_pane

0x7882,	// (0x0002ef2c) popup_fep_char_pre_window

0x788a,	// (0x0002ef34) popup_fep_ituss_window

0xe4c9,	// (0x00035b73) popup_fep_vkbss_window

0xc706,	// (0x00033db0) grid_vkbss_keypad_pane_ParamLimits

0xc706,	// (0x00033db0) grid_vkbss_keypad_pane

0x78f6,	// (0x0002efa0) ituss_keypad_pane

0x273d,	// (0x00029de7) aid_vkbss_key_offset_ParamLimits

0x273d,	// (0x00029de7) aid_vkbss_key_offset

0xc156,	// (0x00033800) cell_vkbss_key_pane_ParamLimits

0xc156,	// (0x00033800) cell_vkbss_key_pane

0x7905,	// (0x0002efaf) bg_cell_vkbss_key_g1_ParamLimits

0x7905,	// (0x0002efaf) bg_cell_vkbss_key_g1

0xe4d6,	// (0x00035b80) cell_vkbss_key_3p_pane_ParamLimits

0xe4d6,	// (0x00035b80) cell_vkbss_key_3p_pane

0xe50c,	// (0x00035bb6) cell_vkbss_key_g1_ParamLimits

0xe50c,	// (0x00035bb6) cell_vkbss_key_g1

0xe542,	// (0x00035bec) cell_vkbss_key_t1_ParamLimits

0xe542,	// (0x00035bec) cell_vkbss_key_t1

0x277d,	// (0x00029e27) cell_ituss_key_pane_ParamLimits

0x277d,	// (0x00029e27) cell_ituss_key_pane

0x79d9,	// (0x0002f083) bg_cell_ituss_key_g1_ParamLimits

0x79d9,	// (0x0002f083) bg_cell_ituss_key_g1

0x79e5,	// (0x0002f08f) cell_ituss_key_pane_g1_ParamLimits

0x79e5,	// (0x0002f08f) cell_ituss_key_pane_g1

0x278e,	// (0x00029e38) cell_ituss_key_pane_g2_ParamLimits

0x278e,	// (0x00029e38) cell_ituss_key_pane_g2

0x0005,

0xfec0,	// (0x0003756a) cell_ituss_key_pane_g_ParamLimits

0xfec0,	// (0x0003756a) cell_ituss_key_pane_g

0x2812,	// (0x00029ebc) cell_ituss_key_t1_ParamLimits

0x2812,	// (0x00029ebc) cell_ituss_key_t1

0x284c,	// (0x00029ef6) cell_ituss_key_t2_ParamLimits

0x284c,	// (0x00029ef6) cell_ituss_key_t2

0x287d,	// (0x00029f27) cell_ituss_key_t3_ParamLimits

0x287d,	// (0x00029f27) cell_ituss_key_t3

0x284c,	// (0x00029ef6) cell_ituss_key_t4_ParamLimits

0x284c,	// (0x00029ef6) cell_ituss_key_t4

0x0004,

0xfecd,	// (0x00037577) cell_ituss_key_t_ParamLimits

0xfecd,	// (0x00037577) cell_ituss_key_t

0xe59e,	// (0x00035c48) cell_vkbss_key_3p_pane_g1

0xe5a6,	// (0x00035c50) cell_vkbss_key_3p_pane_g2

0xe5ae,	// (0x00035c58) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed8,	// (0x00037582) cell_vkbss_key_3p_pane_g

0xce5f,	// (0x00034509) bg_popup_fep_char_preview_window_cp02

0x7a23,	// (0x0002f0cd) popup_fep_char_pre_window_t1

0xe0f2,	// (0x0003579c) main_ai5_sk_pane

0x7487,	// (0x0002eb31) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7493,	// (0x0002eb3d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4e42,	// (0x0002c4ec) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x74a8,	// (0x0002eb52) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea4,	// (0x0003754e) cell_contacts_ai5_widget_pane_g_ParamLimits

0x74b4,	// (0x0002eb5e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc5c4,	// (0x00033c6e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe5b6,	// (0x00035c60) main_ai5_sk_pane_g1

0xab6b,	// (0x00032215) popup_query_code_window_g1

0xe4ba,	// (0x00035b64) popup_fep_vkb_icf_pane

0x78cd,	// (0x0002ef77) popup_fep_vtchi_icf_pane

0xc706,	// (0x00033db0) bg_icf_pane

0xc706,	// (0x00033db0) list_vkb_icf_pane

0x7a3a,	// (0x0002f0e4) bg_icf_pane_cp01

0x7a4d,	// (0x0002f0f7) vtchi_icf_list_pane

0xe60b,	// (0x00035cb5) list_vkb_icf_pane_t1_ParamLimits

0xe60b,	// (0x00035cb5) list_vkb_icf_pane_t1

0x7ad7,	// (0x0002f181) vtchi_icf_list_pane_t1_ParamLimits

0x7ad7,	// (0x0002f181) vtchi_icf_list_pane_t1

0x788a,	// (0x0002ef34) popup_fep_ituss_window_ParamLimits

0x78cd,	// (0x0002ef77) popup_fep_vtchi_icf_pane_ParamLimits

0x78f6,	// (0x0002efa0) ituss_keypad_pane_ParamLimits

0x2731,	// (0x00029ddb) ituss_sks_pane

0xc706,	// (0x00033db0) bg_icf_pane_ParamLimits

0xe49f,	// (0x00035b49) icf_edit_indi_pane_ParamLimits

0xe49f,	// (0x00035b49) icf_edit_indi_pane

0xc706,	// (0x00033db0) list_vkb_icf_pane_ParamLimits

0x7a3a,	// (0x0002f0e4) bg_icf_pane_cp01_ParamLimits

0x7875,	// (0x0002ef1f) icf_edit_indi_pane_cp01_ParamLimits

0x7875,	// (0x0002ef1f) icf_edit_indi_pane_cp01

0x7a55,	// (0x0002f0ff) vtchi_query_pane

0x6bfb,	// (0x0002e2a5) icf_edit_indi_pane_g1_ParamLimits

0x6bfb,	// (0x0002e2a5) icf_edit_indi_pane_g1

0xe623,	// (0x00035ccd) icf_edit_indi_pane_g2_ParamLimits

0xe623,	// (0x00035ccd) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x000375ad) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x000375ad) icf_edit_indi_pane_g

0xe637,	// (0x00035ce1) icf_edit_indi_pane_t1

0x7af8,	// (0x0002f1a2) bg_input_focus_pane_cp042

0xc506,	// (0x00033bb0) vtchi_button_pane

0x7b01,	// (0x0002f1ab) vtchi_query_pane_t1

0x7b0f,	// (0x0002f1b9) vtchi_query_pane_t2

0x7b1d,	// (0x0002f1c7) vtchi_query_pane_t3

0x0002,

0xfef2,	// (0x0003759c) vtchi_query_pane_t

0xc19e,	// (0x00033848) bg_button_pane_cp13

0x7b2b,	// (0x0002f1d5) vtchi_button_pane_g1

0x28c0,	// (0x00029f6a) ituss_sks_pane_g1

0x28cb,	// (0x00029f75) ituss_sks_pane_g2

0x0001,

0xfef9,	// (0x000375a3) ituss_sks_pane_g

0x7b33,	// (0x0002f1dd) ituss_sks_pane_t1

0x7b41,	// (0x0002f1eb) ituss_sks_pane_t2

0x0001,

0xfefe,	// (0x000375a8) ituss_sks_pane_t

0x41cf,	// (0x0002b879) indicator_nsta_pane_cp_g1

0x41d8,	// (0x0002b882) indicator_nsta_pane_cp_g2

0x41e0,	// (0x0002b88a) indicator_nsta_pane_cp_g3

0x41e8,	// (0x0002b892) indicator_nsta_pane_cp_g4

0x41d8,	// (0x0002b882) indicator_nsta_pane_cp_g5

0x41e0,	// (0x0002b88a) indicator_nsta_pane_cp_g6

0x0005,

0xfa89,	// (0x00037133) indicator_nsta_pane_cp_g

0xdecb,	// (0x00035575) cell_graphic2_pane_t2_ParamLimits

0xdecb,	// (0x00035575) cell_graphic2_pane_t2

0x0001,

0xfd8f,	// (0x00037439) cell_graphic2_pane_t_ParamLimits

0xfd8f,	// (0x00037439) cell_graphic2_pane_t

0xdf02,	// (0x000355ac) cell_graphic2_control_pane_t1

0x987e,	// (0x00030f28) signal_pane_g3_ParamLimits

0x987e,	// (0x00030f28) signal_pane_g3

0x9892,	// (0x00030f3c) signal_pane_g4_ParamLimits

0x9892,	// (0x00030f3c) signal_pane_g4

0x7844,	// (0x0002eeee) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7844,	// (0x0002eeee) cell_ai5_widget_list_row_pane_t3

0x79f9,	// (0x0002f0a3) cell_ituss_key_pane_t1_ParamLimits

0x79f9,	// (0x0002f0a3) cell_ituss_key_pane_t1

0x0f23,	// (0x000285cd) form_field_data_wide_pane_vc_t2_ParamLimits

0x0f23,	// (0x000285cd) form_field_data_wide_pane_vc_t2

0x0f37,	// (0x000285e1) form_field_data_wide_pane_vc_t3_ParamLimits

0x0f37,	// (0x000285e1) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d0,	// (0x00036e7a) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d0,	// (0x00036e7a) form_field_data_wide_pane_vc_t

0x3e79,	// (0x0002b523) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3e79,	// (0x0002b523) form_field_slider_wide_pane_vc_t3

0x3f57,	// (0x0002b601) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3f57,	// (0x0002b601) form_field_popup_wide_pane_vc_t2

0x3f6e,	// (0x0002b618) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3f6e,	// (0x0002b618) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa78,	// (0x00037122) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa78,	// (0x00037122) form_field_popup_wide_pane_vc_t

0xbf25,	// (0x000335cf) aid_fshwr2_btn_pane_ParamLimits

0xbf39,	// (0x000335e3) aid_fshwr2_syb_pane_ParamLimits

0xbf4d,	// (0x000335f7) aid_fshwr2_txt_pane_ParamLimits

0xc5c4,	// (0x00033c6e) fshwr2_bg_pane_ParamLimits

0xbf5d,	// (0x00033607) fshwr2_func_candi_pane_ParamLimits

0xbf7d,	// (0x00033627) fshwr2_hwr_syb_pane_ParamLimits

0xbfa1,	// (0x0003364b) fshwr2_icf_pane_ParamLimits

0xee1b,	// (0x000364c5) list_double_graphic_pane_vc_g4_ParamLimits

0xee1b,	// (0x000364c5) list_double_graphic_pane_vc_g4

0x27ae,	// (0x00029e58) cell_ituss_key_pane_g3_ParamLimits

0x27ae,	// (0x00029e58) cell_ituss_key_pane_g3

0x28ae,	// (0x00029f58) cell_ituss_key_t5_ParamLimits

0x28ae,	// (0x00029f58) cell_ituss_key_t5

0xe4c9,	// (0x00035b73) popup_fep_vkbss_window_ParamLimits

0x5d09,	// (0x0002d3b3) aid_cell_ai5_quarter

0xe637,	// (0x00035ce1) icf_edit_indi_pane_t1_ParamLimits

0x92ad,	// (0x00030957) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x92ad,	// (0x00030957) aid_tch_indicator_popup_pane_cp2

0x92c0,	// (0x0003096a) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x92c0,	// (0x0003096a) aid_tch_query_popup_data_pane_cp2

0x1298,	// (0x00028942) aid_tch_query_popup_pane_ParamLimits

0x1298,	// (0x00028942) aid_tch_query_popup_pane

0x1298,	// (0x00028942) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x1298,	// (0x00028942) aid_tch_query_popup_data_pane_cp1

0xc706,	// (0x00033db0) cell_fshwr2_syb_bg_pane_ParamLimits

0xc094,	// (0x0003373e) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc0a7,	// (0x00033751) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe4ba,	// (0x00035b64) popup_fep_vkb_icf_pane_ParamLimits

0xbe8b,	// (0x00033535) bg_popup_fep_char_preview_window_g10

0x6eb5,	// (0x0002e55f) cell_ai5_widget_pane_g11_ParamLimits

0x6eb5,	// (0x0002e55f) cell_ai5_widget_pane_g11

0x6ec1,	// (0x0002e56b) cell_ai5_widget_pane_g12_ParamLimits

0x6ec1,	// (0x0002e56b) cell_ai5_widget_pane_g12

0x6ecd,	// (0x0002e577) cell_ai5_widget_pane_g13_ParamLimits

0x6ecd,	// (0x0002e577) cell_ai5_widget_pane_g13

0x6ffc,	// (0x0002e6a6) cell_ai5_widget_pane_t11_ParamLimits

0x6ffc,	// (0x0002e6a6) cell_ai5_widget_pane_t11

0x700e,	// (0x0002e6b8) cell_ai5_widget_pane_t12_ParamLimits

0x700e,	// (0x0002e6b8) cell_ai5_widget_pane_t12

0x27ba,	// (0x00029e64) cell_ituss_key_pane_g4_ParamLimits

0x27ba,	// (0x00029e64) cell_ituss_key_pane_g4

0x27d6,	// (0x00029e80) cell_ituss_key_pane_g5_ParamLimits

0x27d6,	// (0x00029e80) cell_ituss_key_pane_g5

0x27f2,	// (0x00029e9c) cell_ituss_key_pane_g6_ParamLimits

0x27f2,	// (0x00029e9c) cell_ituss_key_pane_g6

0x0d09,	// (0x000283b3) bg_icf_pane_g1

0xe5bf,	// (0x00035c69) bg_icf_pane_g2

0xe5c9,	// (0x00035c73) bg_icf_pane_g3

0xe5d1,	// (0x00035c7b) bg_icf_pane_g4

0xe5db,	// (0x00035c85) bg_icf_pane_g5

0xe5e5,	// (0x00035c8f) bg_icf_pane_g6

0xe5ef,	// (0x00035c99) bg_icf_pane_g7

0xe5f7,	// (0x00035ca1) bg_icf_pane_g8

0xe601,	// (0x00035cab) bg_icf_pane_g9

0x0008,

0xfedf,	// (0x00037589) bg_icf_pane_g

0x78e3,	// (0x0002ef8d) popup_hyb_candi_window_ParamLimits

0x78e3,	// (0x0002ef8d) popup_hyb_candi_window

0x0e0d,	// (0x000284b7) bg_popup_sub_pane_cp01_ParamLimits

0x0e0d,	// (0x000284b7) bg_popup_sub_pane_cp01

0x7b7c,	// (0x0002f226) entry_hyb_candi_pane_ParamLimits

0x7b7c,	// (0x0002f226) entry_hyb_candi_pane

0x7b8b,	// (0x0002f235) grid_hyb_candi_pane_ParamLimits

0x7b8b,	// (0x0002f235) grid_hyb_candi_pane

0x7ba0,	// (0x0002f24a) grid_hyb_phrase_pane_ParamLimits

0x7ba0,	// (0x0002f24a) grid_hyb_phrase_pane

0x7baf,	// (0x0002f259) cell_hyb_candi_pane_ParamLimits

0x7baf,	// (0x0002f259) cell_hyb_candi_pane

0x7bd2,	// (0x0002f27c) cell_hyb_candi_scroll_pane

0xca16,	// (0x000340c0) cell_hyb_candi_pane_g1

0x7bdb,	// (0x0002f285) cell_hyb_candi_pane_t1

0x7be9,	// (0x0002f293) cell_hyb_phrase_pane

0xca16,	// (0x000340c0) cell_hyb_phrase_pane_g1

0x7bf2,	// (0x0002f29c) cell_hyb_phrase_pane_t1

0x7c00,	// (0x0002f2aa) entry_hyb_candi_pane_t1

0xce5f,	// (0x00034509) input_focus_pane_cp06

0x7c0e,	// (0x0002f2b8) cell_hyb_candi_scroll_pane_g1

0x7c16,	// (0x0002f2c0) cell_hyb_candi_scroll_pane_g1_aid

0x7c1e,	// (0x0002f2c8) cell_hyb_candi_scroll_pane_g2

0x7c26,	// (0x0002f2d0) cell_hyb_candi_scroll_pane_g2_aid

0x7c2e,	// (0x0002f2d8) cell_hyb_candi_scroll_pane_g3

0x7c36,	// (0x0002f2e0) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
