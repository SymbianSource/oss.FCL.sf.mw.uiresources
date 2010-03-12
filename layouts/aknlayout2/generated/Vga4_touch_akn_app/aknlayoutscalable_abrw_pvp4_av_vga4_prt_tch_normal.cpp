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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000cccb };

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
0x72ca,	// (0x00013f95) Screen

0x72d6,	// (0x00013fa1) application_window_ParamLimits

0x72d6,	// (0x00013fa1) application_window

0x34b1,	// (0x0001017c) screen_g1

0x4fde,	// (0x00011ca9) area_bottom_pane_ParamLimits

0x4fde,	// (0x00011ca9) area_bottom_pane

0x509e,	// (0x00011d69) area_top_pane_ParamLimits

0x509e,	// (0x00011d69) area_top_pane

0x513c,	// (0x00011e07) main_pane_ParamLimits

0x513c,	// (0x00011e07) main_pane

0x362a,	// (0x000102f5) misc_graphics

0x87c9,	// (0x00015494) battery_pane_ParamLimits

0x87c9,	// (0x00015494) battery_pane

0x9596,	// (0x00016261) bg_status_flat_pane_g8

0x959e,	// (0x00016269) bg_status_flat_pane_g9

0x8891,	// (0x0001555c) context_pane_ParamLimits

0x8891,	// (0x0001555c) context_pane

0x89b5,	// (0x00015680) navi_pane_ParamLimits

0x89b5,	// (0x00015680) navi_pane

0x8a45,	// (0x00015710) signal_pane_ParamLimits

0x8a45,	// (0x00015710) signal_pane

0x0008,

0xf87a,	// (0x0001c545) bg_status_flat_pane_g

0x8ab2,	// (0x0001577d) status_pane_g1_ParamLimits

0x8ab2,	// (0x0001577d) status_pane_g1

0x8ac6,	// (0x00015791) status_pane_g2_ParamLimits

0x8ac6,	// (0x00015791) status_pane_g2

0x8ad2,	// (0x0001579d) status_pane_g3_ParamLimits

0x8ad2,	// (0x0001579d) status_pane_g3

0x0004,

0xf7a1,	// (0x0001c46c) status_pane_g_ParamLimits

0xf7a1,	// (0x0001c46c) status_pane_g

0x8b06,	// (0x000157d1) title_pane_ParamLimits

0x8b06,	// (0x000157d1) title_pane

0x8b43,	// (0x0001580e) uni_indicator_pane_ParamLimits

0x8b43,	// (0x0001580e) uni_indicator_pane

0x86db,	// (0x000153a6) bg_list_pane_ParamLimits

0x86db,	// (0x000153a6) bg_list_pane

0x86fb,	// (0x000153c6) find_pane

0x8703,	// (0x000153ce) listscroll_app_pane_ParamLimits

0x8703,	// (0x000153ce) listscroll_app_pane

0x870f,	// (0x000153da) listscroll_form_pane

0x5a22,	// (0x000126ed) listscroll_gen_pane_ParamLimits

0x5a22,	// (0x000126ed) listscroll_gen_pane

0x870f,	// (0x000153da) listscroll_set_pane

0x7c26,	// (0x000148f1) main_idle_act_pane

0x83dd,	// (0x000150a8) main_idle_trad_pane

0x83dd,	// (0x000150a8) main_list_empty_pane

0x8729,	// (0x000153f4) main_midp_pane

0x8735,	// (0x00015400) main_pane_g1_ParamLimits

0x8735,	// (0x00015400) main_pane_g1

0x5a44,	// (0x0001270f) popup_ai_message_window_ParamLimits

0x5a44,	// (0x0001270f) popup_ai_message_window

0x5af8,	// (0x000127c3) popup_fep_china_uni_window_ParamLimits

0x5af8,	// (0x000127c3) popup_fep_china_uni_window

0x5b58,	// (0x00012823) popup_fep_japan_candidate_window_ParamLimits

0x5b58,	// (0x00012823) popup_fep_japan_candidate_window

0x5b82,	// (0x0001284d) popup_fep_japan_predictive_window_ParamLimits

0x5b82,	// (0x0001284d) popup_fep_japan_predictive_window

0x5bb8,	// (0x00012883) popup_find_window

0x5bc5,	// (0x00012890) popup_grid_graphic_window_ParamLimits

0x5bc5,	// (0x00012890) popup_grid_graphic_window

0x5bf3,	// (0x000128be) popup_large_graphic_colour_window

0x5c19,	// (0x000128e4) popup_menu_window_ParamLimits

0x5c19,	// (0x000128e4) popup_menu_window

0x5de3,	// (0x00012aae) popup_note_image_window

0x5dcd,	// (0x00012a98) popup_note_wait_window_ParamLimits

0x5dcd,	// (0x00012a98) popup_note_wait_window

0x5dcd,	// (0x00012a98) popup_note_window_ParamLimits

0x5dcd,	// (0x00012a98) popup_note_window

0x5e49,	// (0x00012b14) popup_query_code_window_ParamLimits

0x5e49,	// (0x00012b14) popup_query_code_window

0x5e5f,	// (0x00012b2a) popup_query_data_code_window_ParamLimits

0x5e5f,	// (0x00012b2a) popup_query_data_code_window

0x5e82,	// (0x00012b4d) popup_query_data_window_ParamLimits

0x5e82,	// (0x00012b4d) popup_query_data_window

0x5ea4,	// (0x00012b6f) popup_query_sat_info_window_ParamLimits

0x5ea4,	// (0x00012b6f) popup_query_sat_info_window

0x5ee3,	// (0x00012bae) popup_snote_single_graphic_window_ParamLimits

0x5ee3,	// (0x00012bae) popup_snote_single_graphic_window

0x5ee3,	// (0x00012bae) popup_snote_single_text_window_ParamLimits

0x5ee3,	// (0x00012bae) popup_snote_single_text_window

0x5efa,	// (0x00012bc5) popup_sub_window_general

0x6040,	// (0x00012d0b) popup_window_general_ParamLimits

0x6040,	// (0x00012d0b) popup_window_general

0x874b,	// (0x00015416) power_save_pane

0x58b6,	// (0x00012581) control_pane_g1_ParamLimits

0x58b6,	// (0x00012581) control_pane_g1

0x58df,	// (0x000125aa) control_pane_g2_ParamLimits

0x58df,	// (0x000125aa) control_pane_g2

0x869e,	// (0x00015369) control_pane_g3_ParamLimits

0x869e,	// (0x00015369) control_pane_g3

0x0007,

0xf789,	// (0x0001c454) control_pane_g_ParamLimits

0xf789,	// (0x0001c454) control_pane_g

0x5927,	// (0x000125f2) control_pane_t1_ParamLimits

0x5927,	// (0x000125f2) control_pane_t1

0x5973,	// (0x0001263e) control_pane_t2_ParamLimits

0x5973,	// (0x0001263e) control_pane_t2

0x0002,

0xf79a,	// (0x0001c465) control_pane_t_ParamLimits

0xf79a,	// (0x0001c465) control_pane_t

0x85bf,	// (0x0001528a) navi_navi_volume_pane_cp1

0x85c8,	// (0x00015293) status_small_icon_pane

0x85d0,	// (0x0001529b) status_small_pane_g1_ParamLimits

0x85d0,	// (0x0001529b) status_small_pane_g1

0x8604,	// (0x000152cf) status_small_pane_g2_ParamLimits

0x8604,	// (0x000152cf) status_small_pane_g2

0x8610,	// (0x000152db) status_small_pane_g3_ParamLimits

0x8610,	// (0x000152db) status_small_pane_g3

0x861c,	// (0x000152e7) status_small_pane_g4_ParamLimits

0x861c,	// (0x000152e7) status_small_pane_g4

0x8628,	// (0x000152f3) status_small_pane_g5_ParamLimits

0x8628,	// (0x000152f3) status_small_pane_g5

0x8637,	// (0x00015302) status_small_pane_g6_ParamLimits

0x8637,	// (0x00015302) status_small_pane_g6

0x0007,

0xf778,	// (0x0001c443) status_small_pane_g_ParamLimits

0xf778,	// (0x0001c443) status_small_pane_g

0x8667,	// (0x00015332) status_small_pane_t1

0x868a,	// (0x00015355) status_small_wait_pane_ParamLimits

0x868a,	// (0x00015355) status_small_wait_pane

0x7dc2,	// (0x00014a8d) aid_levels_signal_ParamLimits

0x7dc2,	// (0x00014a8d) aid_levels_signal

0x7dd4,	// (0x00014a9f) signal_pane_g1_ParamLimits

0x7dd4,	// (0x00014a9f) signal_pane_g1

0x7de9,	// (0x00014ab4) signal_pane_g2_ParamLimits

0x7de9,	// (0x00014ab4) signal_pane_g2

0x0003,

0xf709,	// (0x0001c3d4) signal_pane_g_ParamLimits

0xf709,	// (0x0001c3d4) signal_pane_g

0x7e24,	// (0x00014aef) context_pane_g1

0x72e6,	// (0x00013fb1) title_pane_g1

0x7310,	// (0x00013fdb) title_pane_t1

0x3701,	// (0x000103cc) title_pane_t2

0x3727,	// (0x000103f2) title_pane_t3

0x0002,

0xf55d,	// (0x0001c228) title_pane_t

0x8b5b,	// (0x00015826) aid_levels_battery_ParamLimits

0x8b5b,	// (0x00015826) aid_levels_battery

0x8b6f,	// (0x0001583a) battery_pane_g1_ParamLimits

0x8b6f,	// (0x0001583a) battery_pane_g1

0x8b85,	// (0x00015850) battery_pane_g2_ParamLimits

0x8b85,	// (0x00015850) battery_pane_g2

0x0001,

0xf7ac,	// (0x0001c477) battery_pane_g_ParamLimits

0xf7ac,	// (0x0001c477) battery_pane_g

0x9ee6,	// (0x00016bb1) uni_indicator_pane_g1

0x9efb,	// (0x00016bc6) uni_indicator_pane_g2

0x9f11,	// (0x00016bdc) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x0001c5ed) uni_indicator_pane_g

0x824b,	// (0x00014f16) navi_icon_pane_ParamLimits

0x824b,	// (0x00014f16) navi_icon_pane

0x8192,	// (0x00014e5d) navi_midp_pane

0x8267,	// (0x00014f32) navi_navi_pane

0x8271,	// (0x00014f3c) navi_text_pane_ParamLimits

0x8271,	// (0x00014f3c) navi_text_pane

0x34b1,	// (0x0001017c) status_small_wait_pane_g1

0x3acf,	// (0x0001079a) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x0001c5e8) status_small_wait_pane_g

0x9bf9,	// (0x000168c4) navi_navi_icon_text_pane

0x9c01,	// (0x000168cc) navi_navi_pane_g1_ParamLimits

0x9c01,	// (0x000168cc) navi_navi_pane_g1

0x9c13,	// (0x000168de) navi_navi_pane_g2_ParamLimits

0x9c13,	// (0x000168de) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x0001c5b6) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x0001c5b6) navi_navi_pane_g

0x9c25,	// (0x000168f0) navi_navi_tabs_pane

0x9c2e,	// (0x000168f9) navi_navi_text_pane

0x9bf9,	// (0x000168c4) navi_navi_volume_pane

0x9bd2,	// (0x0001689d) navi_text_pane_t1

0x9bc3,	// (0x0001688e) navi_icon_pane_g1

0x9b16,	// (0x000167e1) navi_navi_text_pane_t1

0x6369,	// (0x00013034) navi_navi_volume_pane_g1

0x6371,	// (0x0001303c) volume_small_pane

0x9a7c,	// (0x00016747) navi_navi_icon_text_pane_g1

0x9a84,	// (0x0001674f) navi_navi_icon_text_pane_t1

0x8267,	// (0x00014f32) navi_tabs_2_long_pane

0x8267,	// (0x00014f32) navi_tabs_2_pane

0x8267,	// (0x00014f32) navi_tabs_3_long_pane

0x8267,	// (0x00014f32) navi_tabs_3_pane

0x8267,	// (0x00014f32) navi_tabs_4_pane

0x6349,	// (0x00013014) tabs_2_active_pane_ParamLimits

0x6349,	// (0x00013014) tabs_2_active_pane

0x6359,	// (0x00013024) tabs_2_passive_pane_ParamLimits

0x6359,	// (0x00013024) tabs_2_passive_pane

0x6317,	// (0x00012fe2) tabs_3_active_pane_ParamLimits

0x6317,	// (0x00012fe2) tabs_3_active_pane

0x6327,	// (0x00012ff2) tabs_3_passive_pane_ParamLimits

0x6327,	// (0x00012ff2) tabs_3_passive_pane

0x6338,	// (0x00013003) tabs_3_passive_pane_cp_ParamLimits

0x6338,	// (0x00013003) tabs_3_passive_pane_cp

0x62cb,	// (0x00012f96) tabs_4_active_pane_ParamLimits

0x62cb,	// (0x00012f96) tabs_4_active_pane

0x62de,	// (0x00012fa9) tabs_4_passive_pane_ParamLimits

0x62de,	// (0x00012fa9) tabs_4_passive_pane

0x62ef,	// (0x00012fba) tabs_4_passive_pane_cp_ParamLimits

0x62ef,	// (0x00012fba) tabs_4_passive_pane_cp

0x6300,	// (0x00012fcb) tabs_4_passive_pane_cp2_ParamLimits

0x6300,	// (0x00012fcb) tabs_4_passive_pane_cp2

0x62a7,	// (0x00012f72) tabs_2_long_active_pane_ParamLimits

0x62a7,	// (0x00012f72) tabs_2_long_active_pane

0x62b9,	// (0x00012f84) tabs_2_long_passive_pane_ParamLimits

0x62b9,	// (0x00012f84) tabs_2_long_passive_pane

0x6268,	// (0x00012f33) tabs_3_long_active_pane_ParamLimits

0x6268,	// (0x00012f33) tabs_3_long_active_pane

0x627b,	// (0x00012f46) tabs_3_long_passive_pane_ParamLimits

0x627b,	// (0x00012f46) tabs_3_long_passive_pane

0x6294,	// (0x00012f5f) tabs_3_long_passive_pane_cp_ParamLimits

0x6294,	// (0x00012f5f) tabs_3_long_passive_pane_cp

0x620e,	// (0x00012ed9) volume_small_pane_g1

0x6217,	// (0x00012ee2) volume_small_pane_g2

0x6220,	// (0x00012eeb) volume_small_pane_g3

0x6229,	// (0x00012ef4) volume_small_pane_g4

0x6232,	// (0x00012efd) volume_small_pane_g5

0x623b,	// (0x00012f06) volume_small_pane_g6

0x6244,	// (0x00012f0f) volume_small_pane_g7

0x624d,	// (0x00012f18) volume_small_pane_g8

0x6256,	// (0x00012f21) volume_small_pane_g9

0x625f,	// (0x00012f2a) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x0001c582) volume_small_pane_g

0x3751,	// (0x0001041c) bg_active_tab_pane_cp2_ParamLimits

0x3751,	// (0x0001041c) bg_active_tab_pane_cp2

0x7378,	// (0x00014043) tabs_3_active_pane_g1

0x7380,	// (0x0001404b) tabs_3_active_pane_t1

0x3751,	// (0x0001041c) bg_passive_tab_pane_cp2_ParamLimits

0x3751,	// (0x0001041c) bg_passive_tab_pane_cp2

0x7378,	// (0x00014043) tabs_3_passive_pane_g1

0x7380,	// (0x0001404b) tabs_3_passive_pane_t1

0x3751,	// (0x0001041c) bg_active_tab_pane_cp3_ParamLimits

0x3751,	// (0x0001041c) bg_active_tab_pane_cp3

0x7392,	// (0x0001405d) tabs_4_active_pane_g1

0x739a,	// (0x00014065) tabs_4_active_pane_t1

0x3751,	// (0x0001041c) bg_passive_tab_pane_cp3_ParamLimits

0x3751,	// (0x0001041c) bg_passive_tab_pane_cp3

0x7392,	// (0x0001405d) tabs_4_1_passive_pane_g1

0x739a,	// (0x00014065) tabs_4_1_passive_pane_t1

0x8729,	// (0x000153f4) list_highlight_pane_cp2

0xa19d,	// (0x00016e68) list_set_pane_ParamLimits

0xa19d,	// (0x00016e68) list_set_pane

0xa265,	// (0x00016f30) main_pane_set_t1_ParamLimits

0xa265,	// (0x00016f30) main_pane_set_t1

0xa285,	// (0x00016f50) main_pane_set_t2_ParamLimits

0xa285,	// (0x00016f50) main_pane_set_t2

0xa299,	// (0x00016f64) main_pane_set_t3_ParamLimits

0xa299,	// (0x00016f64) main_pane_set_t3

0xa2ad,	// (0x00016f78) main_pane_set_t4_ParamLimits

0xa2ad,	// (0x00016f78) main_pane_set_t4

0x0003,

0xf987,	// (0x0001c652) main_pane_set_t_ParamLimits

0xf987,	// (0x0001c652) main_pane_set_t

0xa2c1,	// (0x00016f8c) setting_code_pane

0xa2cb,	// (0x00016f96) setting_slider_graphic_pane

0xa2cb,	// (0x00016f96) setting_slider_pane

0xa2cb,	// (0x00016f96) setting_text_pane

0xa2cb,	// (0x00016f96) setting_volume_pane

0x5393,	// (0x0001205e) volume_set_pane

0x3751,	// (0x0001041c) bg_set_opt_pane_cp

0x539d,	// (0x00012068) setting_slider_pane_t1

0x53b6,	// (0x00012081) setting_slider_pane_t2

0x53d0,	// (0x0001209b) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0001c22f) setting_slider_pane_t

0x53e8,	// (0x000120b3) slider_set_pane

0x362a,	// (0x000102f5) bg_set_opt_pane_cp2

0x37c0,	// (0x0001048b) setting_slider_graphic_pane_g1

0x53fe,	// (0x000120c9) setting_slider_graphic_pane_t1

0x540e,	// (0x000120d9) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0001c236) setting_slider_graphic_pane_t

0x541e,	// (0x000120e9) slider_set_pane_cp

0x362a,	// (0x000102f5) input_focus_pane_cp1

0xa15e,	// (0x00016e29) list_set_text_pane

0x34b1,	// (0x0001017c) setting_text_pane_g1

0x362a,	// (0x000102f5) input_focus_pane_cp2

0x34b1,	// (0x0001017c) setting_code_pane_g1

0x37f1,	// (0x000104bc) setting_code_pane_t1

0x37ff,	// (0x000104ca) set_text_pane_t1_ParamLimits

0x37ff,	// (0x000104ca) set_text_pane_t1

0x3f6b,	// (0x00010c36) set_opt_bg_pane_g1

0x3f73,	// (0x00010c3e) set_opt_bg_pane_g2

0xa136,	// (0x00016e01) set_opt_bg_pane_g3

0x3f83,	// (0x00010c4e) set_opt_bg_pane_g4

0x3f8b,	// (0x00010c56) set_opt_bg_pane_g5

0x3f93,	// (0x00010c5e) set_opt_bg_pane_g6

0xa140,	// (0x00016e0b) set_opt_bg_pane_g7

0xa14a,	// (0x00016e15) set_opt_bg_pane_g8

0xa154,	// (0x00016e1f) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x0001c63f) set_opt_bg_pane_g

0xa129,	// (0x00016df4) slider_set_pane_g1

0x63f2,	// (0x000130bd) slider_set_pane_g2

0x0006,

0xf965,	// (0x0001c630) slider_set_pane_g

0x637a,	// (0x00013045) volume_set_pane_g1

0x6384,	// (0x0001304f) volume_set_pane_g2

0x638e,	// (0x00013059) volume_set_pane_g3

0x6398,	// (0x00013063) volume_set_pane_g4

0x63a2,	// (0x0001306d) volume_set_pane_g5

0x63ac,	// (0x00013077) volume_set_pane_g6

0x63b6,	// (0x00013081) volume_set_pane_g7

0x63c0,	// (0x0001308b) volume_set_pane_g8

0x63ca,	// (0x00013095) volume_set_pane_g9

0x63d4,	// (0x0001309f) volume_set_pane_g10

0x0009,

0xf93d,	// (0x0001c608) volume_set_pane_g

0x73ac,	// (0x00014077) indicator_pane_ParamLimits

0x73ac,	// (0x00014077) indicator_pane

0x73b8,	// (0x00014083) main_idle_pane_g2_ParamLimits

0x73b8,	// (0x00014083) main_idle_pane_g2

0x73e0,	// (0x000140ab) main_pane_idle_g1_ParamLimits

0x73e0,	// (0x000140ab) main_pane_idle_g1

0x3819,	// (0x000104e4) popup_clock_digital_analogue_window_ParamLimits

0x3819,	// (0x000104e4) popup_clock_digital_analogue_window

0x73ee,	// (0x000140b9) soft_indicator_pane_ParamLimits

0x73ee,	// (0x000140b9) soft_indicator_pane

0x73fc,	// (0x000140c7) wallpaper_pane_ParamLimits

0x73fc,	// (0x000140c7) wallpaper_pane

0x34b1,	// (0x0001017c) wallpaper_pane_g1

0x7408,	// (0x000140d3) indicator_pane_g1_ParamLimits

0x7408,	// (0x000140d3) indicator_pane_g1

0xa5f0,	// (0x000172bb) navi_navi_icon_text_pane_srt_g1

0x3847,	// (0x00010512) soft_indicator_pane_t1

0x3861,	// (0x0001052c) aid_ps_area_pane

0x7414,	// (0x000140df) aid_ps_clock_pane

0x3872,	// (0x0001053d) aid_ps_indicator_pane

0x387e,	// (0x00010549) indicator_ps_pane_ParamLimits

0x387e,	// (0x00010549) indicator_ps_pane

0x388d,	// (0x00010558) power_save_pane_g1_ParamLimits

0x388d,	// (0x00010558) power_save_pane_g1

0x3899,	// (0x00010564) power_save_pane_g2_ParamLimits

0x3899,	// (0x00010564) power_save_pane_g2

0x4f92,	// (0x00011c5d) aid_navinavi_width_pane

0x3861,	// (0x0001052c) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0001c23b) power_save_pane_g_ParamLimits

0xf570,	// (0x0001c23b) power_save_pane_g

0x38a7,	// (0x00010572) power_save_pane_t1_ParamLimits

0x38a7,	// (0x00010572) power_save_pane_t1

0x7414,	// (0x000140df) aid_ps_clock_pane_ParamLimits

0x3872,	// (0x0001053d) aid_ps_indicator_pane_ParamLimits

0x38b9,	// (0x00010584) power_save_pane_t4_ParamLimits

0x38b9,	// (0x00010584) power_save_pane_t4

0x0001,

0xf575,	// (0x0001c240) power_save_pane_t_ParamLimits

0xf575,	// (0x0001c240) power_save_pane_t

0x38e3,	// (0x000105ae) power_save_t3_ParamLimits

0x38e3,	// (0x000105ae) power_save_t3

0x38ce,	// (0x00010599) power_save_t2_ParamLimits

0x38ce,	// (0x00010599) power_save_t2

0x38f8,	// (0x000105c3) indicator_ps_pane_g1

0x7422,	// (0x000140ed) ai_gene_pane_ParamLimits

0x7422,	// (0x000140ed) ai_gene_pane

0x742e,	// (0x000140f9) ai_links_pane_ParamLimits

0x742e,	// (0x000140f9) ai_links_pane

0x743a,	// (0x00014105) indicator_pane_cp1_ParamLimits

0x743a,	// (0x00014105) indicator_pane_cp1

0x7446,	// (0x00014111) main_pane_idle_g1_cp_ParamLimits

0x7446,	// (0x00014111) main_pane_idle_g1_cp

0x3901,	// (0x000105cc) popup_ai_links_title_window

0x7452,	// (0x0001411d) soft_indicator_pane_cp1_ParamLimits

0x7452,	// (0x0001411d) soft_indicator_pane_cp1

0x9ed4,	// (0x00016b9f) ai_links_pane_g1

0x9edd,	// (0x00016ba8) grid_ai_links_pane

0x9eb9,	// (0x00016b84) ai_gene_pane_1

0x9ec2,	// (0x00016b8d) ai_gene_pane_2

0x9ecb,	// (0x00016b96) list_highlight_pane_cp4

0x9e99,	// (0x00016b64) cell_ai_link_pane_ParamLimits

0x9e99,	// (0x00016b64) cell_ai_link_pane

0x9e91,	// (0x00016b5c) cell_ai_link_pane_g1

0x3acf,	// (0x0001079a) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x0001c5e3) cell_ai_link_pane_g

0x362a,	// (0x000102f5) grid_highlight_cp2

0x362a,	// (0x000102f5) bg_popup_sub_pane_cp1

0x3918,	// (0x000105e3) popup_ai_links_title_window_t1

0x9ddd,	// (0x00016aa8) ai_gene_pane_1_g1_ParamLimits

0x9ddd,	// (0x00016aa8) ai_gene_pane_1_g1

0x9de9,	// (0x00016ab4) ai_gene_pane_1_g2_ParamLimits

0x9de9,	// (0x00016ab4) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x0001c5d9) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x0001c5d9) ai_gene_pane_1_g

0x9df6,	// (0x00016ac1) ai_gene_pane_1_t1_ParamLimits

0x9df6,	// (0x00016ac1) ai_gene_pane_1_t1

0x9e2a,	// (0x00016af5) grid_ai_soft_ind_pane

0x9dc8,	// (0x00016a93) ai_gene_pane_2_t1_ParamLimits

0x9dc8,	// (0x00016a93) ai_gene_pane_2_t1

0x745e,	// (0x00014129) main_pane_empty_t1_ParamLimits

0x745e,	// (0x00014129) main_pane_empty_t1

0x7476,	// (0x00014141) main_pane_empty_t2_ParamLimits

0x7476,	// (0x00014141) main_pane_empty_t2

0x748b,	// (0x00014156) main_pane_empty_t3_ParamLimits

0x748b,	// (0x00014156) main_pane_empty_t3

0x749d,	// (0x00014168) main_pane_empty_t4_ParamLimits

0x749d,	// (0x00014168) main_pane_empty_t4

0x74af,	// (0x0001417a) main_pane_empty_t5_ParamLimits

0x74af,	// (0x0001417a) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0001c245) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0001c245) main_pane_empty_t

0x3feb,	// (0x00010cb6) bg_popup_window_pane_ParamLimits

0x3feb,	// (0x00010cb6) bg_popup_window_pane

0x9b24,	// (0x000167ef) find_popup_pane_cp2_ParamLimits

0x9b24,	// (0x000167ef) find_popup_pane_cp2

0x9b30,	// (0x000167fb) heading_pane_ParamLimits

0x9b30,	// (0x000167fb) heading_pane

0x362a,	// (0x000102f5) bg_popup_sub_pane

0x9a9e,	// (0x00016769) bg_popup_window_pane_g1_ParamLimits

0x9a9e,	// (0x00016769) bg_popup_window_pane_g1

0x9aaa,	// (0x00016775) bg_popup_window_pane_g2_ParamLimits

0x9aaa,	// (0x00016775) bg_popup_window_pane_g2

0x9ab6,	// (0x00016781) bg_popup_window_pane_g3_ParamLimits

0x9ab6,	// (0x00016781) bg_popup_window_pane_g3

0x9ac2,	// (0x0001678d) bg_popup_window_pane_g4_ParamLimits

0x9ac2,	// (0x0001678d) bg_popup_window_pane_g4

0x9ace,	// (0x00016799) bg_popup_window_pane_g5_ParamLimits

0x9ace,	// (0x00016799) bg_popup_window_pane_g5

0x9ada,	// (0x000167a5) bg_popup_window_pane_g6_ParamLimits

0x9ada,	// (0x000167a5) bg_popup_window_pane_g6

0x9ae6,	// (0x000167b1) bg_popup_window_pane_g7_ParamLimits

0x9ae6,	// (0x000167b1) bg_popup_window_pane_g7

0x9af2,	// (0x000167bd) bg_popup_window_pane_g8_ParamLimits

0x9af2,	// (0x000167bd) bg_popup_window_pane_g8

0x9afe,	// (0x000167c9) bg_popup_window_pane_g9_ParamLimits

0x9afe,	// (0x000167c9) bg_popup_window_pane_g9

0x9b0a,	// (0x000167d5) bg_popup_window_pane_g10_ParamLimits

0x9b0a,	// (0x000167d5) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x0001c5a1) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x0001c5a1) bg_popup_window_pane_g

0x9a33,	// (0x000166fe) bg_popup_heading_pane_ParamLimits

0x9a33,	// (0x000166fe) bg_popup_heading_pane

0x647a,	// (0x00013145) tabs_4_passive_pane_cp_srt_ParamLimits

0x647a,	// (0x00013145) tabs_4_passive_pane_cp_srt

0x648c,	// (0x00013157) tabs_4_passive_pane_srt_ParamLimits

0x9a47,	// (0x00016712) heading_pane_g2

0x648c,	// (0x00013157) tabs_4_passive_pane_srt

0x8729,	// (0x000153f4) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8729,	// (0x000153f4) bg_passive_tab_pane_cp3_srt

0x9a4f,	// (0x0001671a) heading_pane_t1_ParamLimits

0x9a4f,	// (0x0001671a) heading_pane_t1

0x9a66,	// (0x00016731) heading_pane_t2_ParamLimits

0x9a66,	// (0x00016731) heading_pane_t2

0x0001,

0xf8d1,	// (0x0001c59c) heading_pane_t_ParamLimits

0xf8d1,	// (0x0001c59c) heading_pane_t

0x955e,	// (0x00016229) bg_popup_heading_pane_g1

0x960d,	// (0x000162d8) bg_popup_heading_pane_g2

0x9617,	// (0x000162e2) bg_popup_heading_pane_g3

0x9621,	// (0x000162ec) bg_popup_heading_pane_g4

0x962b,	// (0x000162f6) bg_popup_heading_pane_g5

0x9635,	// (0x00016300) bg_popup_heading_pane_g6

0x963d,	// (0x00016308) bg_popup_heading_pane_g7

0x9645,	// (0x00016310) bg_popup_heading_pane_g8

0x964f,	// (0x0001631a) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x0001c558) bg_popup_heading_pane_g

0x8c8b,	// (0x00015956) bg_popup_sub_pane_g1

0x8c9b,	// (0x00015966) bg_popup_sub_pane_g2

0x8c93,	// (0x0001595e) bg_popup_sub_pane_g3

0x8cab,	// (0x00015976) bg_popup_sub_pane_g4

0x8ca3,	// (0x0001596e) bg_popup_sub_pane_g5

0x8cb3,	// (0x0001597e) bg_popup_sub_pane_g6

0x8cbb,	// (0x00015986) bg_popup_sub_pane_g7

0x8ccb,	// (0x00015996) bg_popup_sub_pane_g8

0x8cc3,	// (0x0001598e) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x0001c532) bg_popup_sub_pane_g

0x3739,	// (0x00010404) bg_popup_window_pane_cp5_ParamLimits

0x3739,	// (0x00010404) bg_popup_window_pane_cp5

0x3935,	// (0x00010600) popup_note_window_g1_ParamLimits

0x3935,	// (0x00010600) popup_note_window_g1

0x3941,	// (0x0001060c) popup_note_window_t1_ParamLimits

0x3941,	// (0x0001060c) popup_note_window_t1

0x3957,	// (0x00010622) popup_note_window_t2_ParamLimits

0x3957,	// (0x00010622) popup_note_window_t2

0x396d,	// (0x00010638) popup_note_window_t3_ParamLimits

0x396d,	// (0x00010638) popup_note_window_t3

0x3983,	// (0x0001064e) popup_note_window_t4_ParamLimits

0x3983,	// (0x0001064e) popup_note_window_t4

0x39ab,	// (0x00010676) popup_note_window_t5_ParamLimits

0x39ab,	// (0x00010676) popup_note_window_t5

0x0004,

0xf585,	// (0x0001c250) popup_note_window_t_ParamLimits

0xf585,	// (0x0001c250) popup_note_window_t

0x39cf,	// (0x0001069a) bg_popup_window_pane_cp6_ParamLimits

0x39cf,	// (0x0001069a) bg_popup_window_pane_cp6

0x94da,	// (0x000161a5) popup_note_image_window_g1_ParamLimits

0x94da,	// (0x000161a5) popup_note_image_window_g1

0x94e6,	// (0x000161b1) popup_note_image_window_g2_ParamLimits

0x94e6,	// (0x000161b1) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x0001c526) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x0001c526) popup_note_image_window_g

0x94ff,	// (0x000161ca) popup_note_image_window_t1_ParamLimits

0x94ff,	// (0x000161ca) popup_note_image_window_t1

0x9518,	// (0x000161e3) popup_note_image_window_t2_ParamLimits

0x9518,	// (0x000161e3) popup_note_image_window_t2

0x9531,	// (0x000161fc) popup_note_image_window_t3_ParamLimits

0x9531,	// (0x000161fc) popup_note_image_window_t3

0x0002,

0xf860,	// (0x0001c52b) popup_note_image_window_t_ParamLimits

0xf860,	// (0x0001c52b) popup_note_image_window_t

0x939a,	// (0x00016065) bg_popup_window_pane_cp7_ParamLimits

0x939a,	// (0x00016065) bg_popup_window_pane_cp7

0x93ca,	// (0x00016095) popup_note_wait_window_g1_ParamLimits

0x93ca,	// (0x00016095) popup_note_wait_window_g1

0x93d6,	// (0x000160a1) popup_note_wait_window_g2_ParamLimits

0x93d6,	// (0x000160a1) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0001c514) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0001c514) popup_note_wait_window_g

0x93ee,	// (0x000160b9) popup_note_wait_window_t1_ParamLimits

0x93ee,	// (0x000160b9) popup_note_wait_window_t1

0x9415,	// (0x000160e0) popup_note_wait_window_t2_ParamLimits

0x9415,	// (0x000160e0) popup_note_wait_window_t2

0x9433,	// (0x000160fe) popup_note_wait_window_t3_ParamLimits

0x9433,	// (0x000160fe) popup_note_wait_window_t3

0x9446,	// (0x00016111) popup_note_wait_window_t4_ParamLimits

0x9446,	// (0x00016111) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x0001c51b) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x0001c51b) popup_note_wait_window_t

0x946b,	// (0x00016136) wait_bar_pane_ParamLimits

0x946b,	// (0x00016136) wait_bar_pane

0x362a,	// (0x000102f5) wait_anim_pane

0x362a,	// (0x000102f5) wait_border_pane

0x34b1,	// (0x0001017c) wait_anim_pane_g1

0x34b1,	// (0x0001017c) wait_anim_pane_g2

0x0001,

0xf704,	// (0x0001c3cf) wait_anim_pane_g

0x933e,	// (0x00016009) wait_border_pane_g1

0x9349,	// (0x00016014) wait_border_pane_g2

0x9352,	// (0x0001601d) wait_border_pane_g3

0x0002,

0xf842,	// (0x0001c50d) wait_border_pane_g

0x91a8,	// (0x00015e73) bg_popup_window_pane_cp16_ParamLimits

0x91a8,	// (0x00015e73) bg_popup_window_pane_cp16

0x92a8,	// (0x00015f73) indicator_popup_pane_cp4_ParamLimits

0x92a8,	// (0x00015f73) indicator_popup_pane_cp4

0x92bc,	// (0x00015f87) popup_query_data_window_t1_ParamLimits

0x92bc,	// (0x00015f87) popup_query_data_window_t1

0x92ce,	// (0x00015f99) popup_query_data_window_t2_ParamLimits

0x92ce,	// (0x00015f99) popup_query_data_window_t2

0x92e7,	// (0x00015fb2) popup_query_data_window_t3_ParamLimits

0x92e7,	// (0x00015fb2) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x0001c506) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x0001c506) popup_query_data_window_t

0x9301,	// (0x00015fcc) query_popup_data_pane_ParamLimits

0x9301,	// (0x00015fcc) query_popup_data_pane

0x9315,	// (0x00015fe0) query_popup_data_pane_cp1_ParamLimits

0x9315,	// (0x00015fe0) query_popup_data_pane_cp1

0x91a8,	// (0x00015e73) bg_popup_window_pane_cp10_ParamLimits

0x91a8,	// (0x00015e73) bg_popup_window_pane_cp10

0x91da,	// (0x00015ea5) indicator_popup_pane_ParamLimits

0x91da,	// (0x00015ea5) indicator_popup_pane

0x91fc,	// (0x00015ec7) popup_query_code_window_t1_ParamLimits

0x91fc,	// (0x00015ec7) popup_query_code_window_t1

0x9216,	// (0x00015ee1) popup_query_code_window_t2_ParamLimits

0x9216,	// (0x00015ee1) popup_query_code_window_t2

0x925f,	// (0x00015f2a) popup_query_code_window_t3_ParamLimits

0x925f,	// (0x00015f2a) popup_query_code_window_t3

0x0002,

0xf834,	// (0x0001c4ff) popup_query_code_window_t_ParamLimits

0xf834,	// (0x0001c4ff) popup_query_code_window_t

0x928e,	// (0x00015f59) query_popup_pane_ParamLimits

0x928e,	// (0x00015f59) query_popup_pane

0x39cf,	// (0x0001069a) bg_popup_window_pane_cp15_ParamLimits

0x39cf,	// (0x0001069a) bg_popup_window_pane_cp15

0x39ef,	// (0x000106ba) indicator_popup_pane_cp1_ParamLimits

0x39ef,	// (0x000106ba) indicator_popup_pane_cp1

0x3a02,	// (0x000106cd) indicator_popup_pane_cp2_ParamLimits

0x3a02,	// (0x000106cd) indicator_popup_pane_cp2

0x3a1d,	// (0x000106e8) popup_query_data_code_window_g1_ParamLimits

0x3a1d,	// (0x000106e8) popup_query_data_code_window_g1

0x3a30,	// (0x000106fb) popup_query_data_code_window_t1_ParamLimits

0x3a30,	// (0x000106fb) popup_query_data_code_window_t1

0x3a42,	// (0x0001070d) popup_query_data_code_window_t2_ParamLimits

0x3a42,	// (0x0001070d) popup_query_data_code_window_t2

0x3a54,	// (0x0001071f) popup_query_data_code_window_t3_ParamLimits

0x3a54,	// (0x0001071f) popup_query_data_code_window_t3

0x3a6a,	// (0x00010735) popup_query_data_code_window_t4_ParamLimits

0x3a6a,	// (0x00010735) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0001c25b) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0001c25b) popup_query_data_code_window_t

0x611a,	// (0x00012de5) list_single_midp_graphic_pane_g3

0x3a84,	// (0x0001074f) query_popup_data_pane_cp2_ParamLimits

0x3a97,	// (0x00010762) query_popup_pane_cp2_ParamLimits

0x3a97,	// (0x00010762) query_popup_pane_cp2

0x362a,	// (0x000102f5) bg_popup_window_pane_cp11

0x91a0,	// (0x00015e6b) heading_pane_cp5

0x3b2d,	// (0x000107f8) listscroll_popup_info_pane

0x362a,	// (0x000102f5) input_focus_pane_cp3

0x3ab2,	// (0x0001077d) query_popup_pane_t1

0x3ac0,	// (0x0001078b) list_popup_info_pane_ParamLimits

0x3ac0,	// (0x0001078b) list_popup_info_pane

0x3acf,	// (0x0001079a) listscroll_popup_info_pane_g1

0x3ad7,	// (0x000107a2) scroll_pane_cp7

0x3ae1,	// (0x000107ac) popup_info_list_pane_t1_ParamLimits

0x3ae1,	// (0x000107ac) popup_info_list_pane_t1

0x3afb,	// (0x000107c6) popup_info_list_pane_t2_ParamLimits

0x3afb,	// (0x000107c6) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0001c264) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0001c264) popup_info_list_pane_t

0x362a,	// (0x000102f5) bg_popup_window_pane_cp12

0xa60a,	// (0x000172d5) find_popup_pane

0x3751,	// (0x0001041c) bg_popup_window_pane_cp3

0x3b15,	// (0x000107e0) heading_pane_cp3

0x3b21,	// (0x000107ec) listscroll_popup_graphic_pane

0x362a,	// (0x000102f5) bg_popup_window_pane_cp4

0x7511,	// (0x000141dc) heading_pane_cp4

0x3b2d,	// (0x000107f8) listscroll_popup_colour_pane

0x751b,	// (0x000141e6) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x751b,	// (0x000141e6) cell_large_graphic_colour_none_popup_pane

0x752f,	// (0x000141fa) grid_large_graphic_colour_popup_pane_ParamLimits

0x752f,	// (0x000141fa) grid_large_graphic_colour_popup_pane

0x755b,	// (0x00014226) listscroll_popup_colour_pane_g1_ParamLimits

0x755b,	// (0x00014226) listscroll_popup_colour_pane_g1

0x7572,	// (0x0001423d) listscroll_popup_colour_pane_g2_ParamLimits

0x7572,	// (0x0001423d) listscroll_popup_colour_pane_g2

0x7589,	// (0x00014254) listscroll_popup_colour_pane_g3_ParamLimits

0x7589,	// (0x00014254) listscroll_popup_colour_pane_g3

0x7599,	// (0x00014264) listscroll_popup_colour_pane_g4_ParamLimits

0x7599,	// (0x00014264) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0001c269) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0001c269) listscroll_popup_colour_pane_g

0x3b35,	// (0x00010800) scroll_pane_cp6_ParamLimits

0x3b35,	// (0x00010800) scroll_pane_cp6

0x75ad,	// (0x00014278) cell_large_graphic_colour_popup_pane_ParamLimits

0x75ad,	// (0x00014278) cell_large_graphic_colour_popup_pane

0x3b47,	// (0x00010812) cell_large_graphic_colour_none_popup_pane_t1

0x362a,	// (0x000102f5) grid_highlight_pane_cp5

0x3b56,	// (0x00010821) cell_large_graphic_colour_popup_pane_g1

0x3b5e,	// (0x00010829) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0001c272) cell_large_graphic_colour_popup_pane_g

0x3b66,	// (0x00010831) cell_large_graphic_colour_popup_pane_g2_copy1

0x3b6f,	// (0x0001083a) grid_highlight_pane_cp4

0x3b77,	// (0x00010842) bg_popup_window_pane_cp8_ParamLimits

0x3b77,	// (0x00010842) bg_popup_window_pane_cp8

0x3b92,	// (0x0001085d) popup_snote_single_text_window_g1_ParamLimits

0x3b92,	// (0x0001085d) popup_snote_single_text_window_g1

0x3ba4,	// (0x0001086f) popup_snote_single_text_window_t1_ParamLimits

0x3ba4,	// (0x0001086f) popup_snote_single_text_window_t1

0x3bb7,	// (0x00010882) popup_snote_single_text_window_t2_ParamLimits

0x3bb7,	// (0x00010882) popup_snote_single_text_window_t2

0x3bca,	// (0x00010895) popup_snote_single_text_window_t3_ParamLimits

0x3bca,	// (0x00010895) popup_snote_single_text_window_t3

0x3c03,	// (0x000108ce) popup_snote_single_text_window_t4_ParamLimits

0x3c03,	// (0x000108ce) popup_snote_single_text_window_t4

0x3c37,	// (0x00010902) popup_snote_single_text_window_t5_ParamLimits

0x3c37,	// (0x00010902) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0001c277) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0001c277) popup_snote_single_text_window_t

0x3c66,	// (0x00010931) bg_popup_window_pane_cp9_ParamLimits

0x3c66,	// (0x00010931) bg_popup_window_pane_cp9

0x3b92,	// (0x0001085d) popup_snote_single_graphic_window_g1_ParamLimits

0x3b92,	// (0x0001085d) popup_snote_single_graphic_window_g1

0x3c74,	// (0x0001093f) popup_snote_single_graphic_window_g2_ParamLimits

0x3c74,	// (0x0001093f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0001c282) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0001c282) popup_snote_single_graphic_window_g

0x3c80,	// (0x0001094b) popup_snote_single_graphic_window_t1_ParamLimits

0x3c80,	// (0x0001094b) popup_snote_single_graphic_window_t1

0x3c93,	// (0x0001095e) popup_snote_single_graphic_window_t2_ParamLimits

0x3c93,	// (0x0001095e) popup_snote_single_graphic_window_t2

0x3ca6,	// (0x00010971) popup_snote_single_graphic_window_t3_ParamLimits

0x3ca6,	// (0x00010971) popup_snote_single_graphic_window_t3

0x3cdf,	// (0x000109aa) popup_snote_single_graphic_window_t4_ParamLimits

0x3cdf,	// (0x000109aa) popup_snote_single_graphic_window_t4

0x3d13,	// (0x000109de) popup_snote_single_graphic_window_t5_ParamLimits

0x3d13,	// (0x000109de) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0001c287) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0001c287) popup_snote_single_graphic_window_t

0xa548,	// (0x00017213) grid_graphic_popup_pane_ParamLimits

0xa548,	// (0x00017213) grid_graphic_popup_pane

0xa576,	// (0x00017241) listscroll_popup_graphic_pane_g1_ParamLimits

0xa576,	// (0x00017241) listscroll_popup_graphic_pane_g1

0xa58a,	// (0x00017255) listscroll_popup_graphic_pane_g2_ParamLimits

0xa58a,	// (0x00017255) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x0001c67c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x0001c67c) listscroll_popup_graphic_pane_g

0xa59e,	// (0x00017269) scroll_pane_cp5

0xa4f0,	// (0x000171bb) cell_graphic_popup_pane_ParamLimits

0xa4f0,	// (0x000171bb) cell_graphic_popup_pane

0xa4d1,	// (0x0001719c) cell_graphic_popup_pane_g1

0xa4d9,	// (0x000171a4) cell_graphic_popup_pane_g2

0x3b66,	// (0x00010831) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x0001c675) cell_graphic_popup_pane_g

0xa4e2,	// (0x000171ad) cell_graphic_popup_pane_t2

0x3b6f,	// (0x0001083a) grid_highlight_pane_cp3

0x3d54,	// (0x00010a1f) list_gen_pane_ParamLimits

0x3d54,	// (0x00010a1f) list_gen_pane

0x3d7c,	// (0x00010a47) scroll_pane

0xa433,	// (0x000170fe) bg_list_pane_g1_ParamLimits

0xa433,	// (0x000170fe) bg_list_pane_g1

0xa44e,	// (0x00017119) bg_list_pane_g2_ParamLimits

0xa44e,	// (0x00017119) bg_list_pane_g2

0xa461,	// (0x0001712c) bg_list_pane_g3_ParamLimits

0xa461,	// (0x0001712c) bg_list_pane_g3

0xa473,	// (0x0001713e) bg_list_pane_g4_ParamLimits

0xa473,	// (0x0001713e) bg_list_pane_g4

0xa485,	// (0x00017150) bg_list_pane_g5_ParamLimits

0xa485,	// (0x00017150) bg_list_pane_g5

0x0004,

0xf99f,	// (0x0001c66a) bg_list_pane_g_ParamLimits

0xf99f,	// (0x0001c66a) bg_list_pane_g

0xa384,	// (0x0001704f) list_double2_graphic_large_graphic_pane_ParamLimits

0xa384,	// (0x0001704f) list_double2_graphic_large_graphic_pane

0xa384,	// (0x0001704f) list_double2_graphic_pane_ParamLimits

0xa384,	// (0x0001704f) list_double2_graphic_pane

0xa384,	// (0x0001704f) list_double2_large_graphic_pane_ParamLimits

0xa384,	// (0x0001704f) list_double2_large_graphic_pane

0xa384,	// (0x0001704f) list_double2_pane_ParamLimits

0xa384,	// (0x0001704f) list_double2_pane

0xa384,	// (0x0001704f) list_double_graphic_heading_pane_ParamLimits

0xa384,	// (0x0001704f) list_double_graphic_heading_pane

0xa384,	// (0x0001704f) list_double_graphic_pane_ParamLimits

0xa384,	// (0x0001704f) list_double_graphic_pane

0xa384,	// (0x0001704f) list_double_heading_pane_ParamLimits

0xa384,	// (0x0001704f) list_double_heading_pane

0xa384,	// (0x0001704f) list_double_large_graphic_pane_ParamLimits

0xa384,	// (0x0001704f) list_double_large_graphic_pane

0xa384,	// (0x0001704f) list_double_number_pane_ParamLimits

0xa384,	// (0x0001704f) list_double_number_pane

0xa384,	// (0x0001704f) list_double_pane_ParamLimits

0xa384,	// (0x0001704f) list_double_pane

0xa384,	// (0x0001704f) list_double_time_pane_ParamLimits

0xa384,	// (0x0001704f) list_double_time_pane

0xa384,	// (0x0001704f) list_setting_number_pane_ParamLimits

0xa384,	// (0x0001704f) list_setting_number_pane

0xa384,	// (0x0001704f) list_setting_pane_ParamLimits

0xa384,	// (0x0001704f) list_setting_pane

0xa3c3,	// (0x0001708e) list_single_2graphic_pane_ParamLimits

0xa3c3,	// (0x0001708e) list_single_2graphic_pane

0xa3c3,	// (0x0001708e) list_single_graphic_heading_pane_ParamLimits

0xa3c3,	// (0x0001708e) list_single_graphic_heading_pane

0xa3c3,	// (0x0001708e) list_single_graphic_pane_ParamLimits

0xa3c3,	// (0x0001708e) list_single_graphic_pane

0xa3c3,	// (0x0001708e) list_single_heading_pane_ParamLimits

0xa3c3,	// (0x0001708e) list_single_heading_pane

0xa41b,	// (0x000170e6) list_single_large_graphic_pane_ParamLimits

0xa41b,	// (0x000170e6) list_single_large_graphic_pane

0xa3c3,	// (0x0001708e) list_single_number_heading_pane_ParamLimits

0xa3c3,	// (0x0001708e) list_single_number_heading_pane

0xa3c3,	// (0x0001708e) list_single_number_pane_ParamLimits

0xa3c3,	// (0x0001708e) list_single_number_pane

0xa3c3,	// (0x0001708e) list_single_pane_ParamLimits

0xa3c3,	// (0x0001708e) list_single_pane

0x362a,	// (0x000102f5) list_highlight_pane_cp1

0x3e69,	// (0x00010b34) list_single_pane_g1_ParamLimits

0x3e69,	// (0x00010b34) list_single_pane_g1

0x75dc,	// (0x000142a7) list_single_pane_g2_ParamLimits

0x75dc,	// (0x000142a7) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0001c299) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0001c299) list_single_pane_g

0xa33d,	// (0x00017008) list_single_pane_t1_ParamLimits

0xa33d,	// (0x00017008) list_single_pane_t1

0x3e69,	// (0x00010b34) list_single_number_pane_g1_ParamLimits

0x3e69,	// (0x00010b34) list_single_number_pane_g1

0x75dc,	// (0x000142a7) list_single_number_pane_g2_ParamLimits

0x75dc,	// (0x000142a7) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0001c299) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0001c299) list_single_number_pane_g

0xa0a5,	// (0x00016d70) list_single_number_pane_t1_ParamLimits

0xa0a5,	// (0x00016d70) list_single_number_pane_t1

0xa0bb,	// (0x00016d86) list_single_number_pane_t2_ParamLimits

0xa0bb,	// (0x00016d86) list_single_number_pane_t2

0x0001,

0xf960,	// (0x0001c62b) list_single_number_pane_t_ParamLimits

0xf960,	// (0x0001c62b) list_single_number_pane_t

0x3e5d,	// (0x00010b28) list_single_graphic_pane_g1_ParamLimits

0x3e5d,	// (0x00010b28) list_single_graphic_pane_g1

0x3e69,	// (0x00010b34) list_single_graphic_pane_g2_ParamLimits

0x3e69,	// (0x00010b34) list_single_graphic_pane_g2

0x75dc,	// (0x000142a7) list_single_graphic_pane_g3_ParamLimits

0x75dc,	// (0x000142a7) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0001c292) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0001c292) list_single_graphic_pane_g

0x75e8,	// (0x000142b3) list_single_graphic_pane_t1_ParamLimits

0x75e8,	// (0x000142b3) list_single_graphic_pane_t1

0x3e69,	// (0x00010b34) list_single_heading_pane_g1_ParamLimits

0x3e69,	// (0x00010b34) list_single_heading_pane_g1

0x75dc,	// (0x000142a7) list_single_heading_pane_g2_ParamLimits

0x75dc,	// (0x000142a7) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001c299) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001c299) list_single_heading_pane_g

0x75fe,	// (0x000142c9) list_single_heading_pane_t1_ParamLimits

0x75fe,	// (0x000142c9) list_single_heading_pane_t1

0x7614,	// (0x000142df) list_single_heading_pane_t2_ParamLimits

0x7614,	// (0x000142df) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0001c29e) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0001c29e) list_single_heading_pane_t

0x3e69,	// (0x00010b34) list_single_number_heading_pane_g1_ParamLimits

0x3e69,	// (0x00010b34) list_single_number_heading_pane_g1

0x75dc,	// (0x000142a7) list_single_number_heading_pane_g2_ParamLimits

0x75dc,	// (0x000142a7) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001c299) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001c299) list_single_number_heading_pane_g

0x75fe,	// (0x000142c9) list_single_number_heading_pane_t1_ParamLimits

0x75fe,	// (0x000142c9) list_single_number_heading_pane_t1

0x7626,	// (0x000142f1) list_single_number_heading_pane_t2_ParamLimits

0x7626,	// (0x000142f1) list_single_number_heading_pane_t2

0x7638,	// (0x00014303) list_single_number_heading_pane_t3_ParamLimits

0x7638,	// (0x00014303) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0001c2a3) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0001c2a3) list_single_number_heading_pane_t

0x764a,	// (0x00014315) list_single_graphic_heading_pane_g1_ParamLimits

0x764a,	// (0x00014315) list_single_graphic_heading_pane_g1

0x7656,	// (0x00014321) list_single_graphic_heading_pane_g4_ParamLimits

0x7656,	// (0x00014321) list_single_graphic_heading_pane_g4

0x75dc,	// (0x000142a7) list_single_graphic_heading_pane_g5_ParamLimits

0x75dc,	// (0x000142a7) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0001c2aa) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0001c2aa) list_single_graphic_heading_pane_g

0x75fe,	// (0x000142c9) list_single_graphic_heading_pane_t1_ParamLimits

0x75fe,	// (0x000142c9) list_single_graphic_heading_pane_t1

0x7667,	// (0x00014332) list_single_graphic_heading_pane_t2_ParamLimits

0x7667,	// (0x00014332) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0001c2b1) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0001c2b1) list_single_graphic_heading_pane_t

0x7679,	// (0x00014344) list_single_large_graphic_pane_g1_ParamLimits

0x7679,	// (0x00014344) list_single_large_graphic_pane_g1

0x7685,	// (0x00014350) list_single_large_graphic_pane_g2_ParamLimits

0x7685,	// (0x00014350) list_single_large_graphic_pane_g2

0x7691,	// (0x0001435c) list_single_large_graphic_pane_g3_ParamLimits

0x7691,	// (0x0001435c) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0001c2b6) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0001c2b6) list_single_large_graphic_pane_g

0x9349,	// (0x00016014) wait_border_pane_g2_copy1

0x769d,	// (0x00014368) list_single_large_graphic_pane_g4_cp2

0x76a5,	// (0x00014370) list_single_large_graphic_pane_t1_ParamLimits

0x76a5,	// (0x00014370) list_single_large_graphic_pane_t1

0x76bb,	// (0x00014386) list_double_pane_g1_ParamLimits

0x76bb,	// (0x00014386) list_double_pane_g1

0x76c7,	// (0x00014392) list_double_pane_g2_ParamLimits

0x76c7,	// (0x00014392) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0001c2bd) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0001c2bd) list_double_pane_g

0x76d3,	// (0x0001439e) list_double_pane_t1_ParamLimits

0x76d3,	// (0x0001439e) list_double_pane_t1

0x76e9,	// (0x000143b4) list_double_pane_t2_ParamLimits

0x76e9,	// (0x000143b4) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0001c2c2) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0001c2c2) list_double_pane_t

0x76fb,	// (0x000143c6) list_double2_pane_g1_ParamLimits

0x76fb,	// (0x000143c6) list_double2_pane_g1

0x770c,	// (0x000143d7) list_double2_pane_g2_ParamLimits

0x770c,	// (0x000143d7) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0001c2c7) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0001c2c7) list_double2_pane_g

0x7718,	// (0x000143e3) list_double2_pane_t1_ParamLimits

0x7718,	// (0x000143e3) list_double2_pane_t1

0x772e,	// (0x000143f9) list_double2_pane_t2_ParamLimits

0x772e,	// (0x000143f9) list_double2_pane_t2

0x0001,

0xf601,	// (0x0001c2cc) list_double2_pane_t_ParamLimits

0xf601,	// (0x0001c2cc) list_double2_pane_t

0x76bb,	// (0x00014386) list_double_number_pane_g1_ParamLimits

0x76bb,	// (0x00014386) list_double_number_pane_g1

0x76c7,	// (0x00014392) list_double_number_pane_g2_ParamLimits

0x76c7,	// (0x00014392) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0001c2bd) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0001c2bd) list_double_number_pane_g

0x7740,	// (0x0001440b) list_double_number_pane_t1_ParamLimits

0x7740,	// (0x0001440b) list_double_number_pane_t1

0x7752,	// (0x0001441d) list_double_number_pane_t2_ParamLimits

0x7752,	// (0x0001441d) list_double_number_pane_t2

0x7768,	// (0x00014433) list_double_number_pane_t3_ParamLimits

0x7768,	// (0x00014433) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0001c2d1) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0001c2d1) list_double_number_pane_t

0x777a,	// (0x00014445) list_double_graphic_pane_g1_ParamLimits

0x777a,	// (0x00014445) list_double_graphic_pane_g1

0x7786,	// (0x00014451) list_double_graphic_pane_g2_ParamLimits

0x7786,	// (0x00014451) list_double_graphic_pane_g2

0x7795,	// (0x00014460) list_double_graphic_pane_g3_ParamLimits

0x7795,	// (0x00014460) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0001c2d8) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0001c2d8) list_double_graphic_pane_g

0x77ad,	// (0x00014478) list_double_graphic_pane_t1_ParamLimits

0x77ad,	// (0x00014478) list_double_graphic_pane_t1

0x77c3,	// (0x0001448e) list_double_graphic_pane_t2_ParamLimits

0x77c3,	// (0x0001448e) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0001c2e1) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0001c2e1) list_double_graphic_pane_t

0x3dc5,	// (0x00010a90) list_double2_graphic_pane_g1_ParamLimits

0x3dc5,	// (0x00010a90) list_double2_graphic_pane_g1

0x77d5,	// (0x000144a0) list_double2_graphic_pane_g2_ParamLimits

0x77d5,	// (0x000144a0) list_double2_graphic_pane_g2

0x770c,	// (0x000143d7) list_double2_graphic_pane_g3_ParamLimits

0x770c,	// (0x000143d7) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0001c2e6) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0001c2e6) list_double2_graphic_pane_g

0x77e1,	// (0x000144ac) list_double2_graphic_pane_t1_ParamLimits

0x77e1,	// (0x000144ac) list_double2_graphic_pane_t1

0x77f7,	// (0x000144c2) list_double2_graphic_pane_t2_ParamLimits

0x77f7,	// (0x000144c2) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0001c2ed) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0001c2ed) list_double2_graphic_pane_t

0x7809,	// (0x000144d4) list_double_large_graphic_pane_g1_ParamLimits

0x7809,	// (0x000144d4) list_double_large_graphic_pane_g1

0x7834,	// (0x000144ff) list_double_large_graphic_pane_g2_ParamLimits

0x7834,	// (0x000144ff) list_double_large_graphic_pane_g2

0x76c7,	// (0x00014392) list_double_large_graphic_pane_g3_ParamLimits

0x76c7,	// (0x00014392) list_double_large_graphic_pane_g3

0x7845,	// (0x00014510) list_double_large_graphic_pane_g4_ParamLimits

0x7845,	// (0x00014510) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0001c2f2) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0001c2f2) list_double_large_graphic_pane_g

0x7858,	// (0x00014523) list_double_large_graphic_pane_t1_ParamLimits

0x7858,	// (0x00014523) list_double_large_graphic_pane_t1

0x7871,	// (0x0001453c) list_double_large_graphic_pane_t2_ParamLimits

0x7871,	// (0x0001453c) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0001c2fd) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0001c2fd) list_double_large_graphic_pane_t

0x7883,	// (0x0001454e) list_double2_large_graphic_pane_g1_ParamLimits

0x7883,	// (0x0001454e) list_double2_large_graphic_pane_g1

0x76fb,	// (0x000143c6) list_double2_large_graphic_pane_g2_ParamLimits

0x76fb,	// (0x000143c6) list_double2_large_graphic_pane_g2

0x770c,	// (0x000143d7) list_double2_large_graphic_pane_g3_ParamLimits

0x770c,	// (0x000143d7) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0001c302) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0001c302) list_double2_large_graphic_pane_g

0x788f,	// (0x0001455a) list_double2_large_graphic_pane_t1_ParamLimits

0x788f,	// (0x0001455a) list_double2_large_graphic_pane_t1

0x78a5,	// (0x00014570) list_double2_large_graphic_pane_t2_ParamLimits

0x78a5,	// (0x00014570) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0001c309) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0001c309) list_double2_large_graphic_pane_t

0x78b7,	// (0x00014582) list_double_heading_pane_g1_ParamLimits

0x78b7,	// (0x00014582) list_double_heading_pane_g1

0x78c8,	// (0x00014593) list_double_heading_pane_g2_ParamLimits

0x78c8,	// (0x00014593) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0001c30e) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0001c30e) list_double_heading_pane_g

0x78d4,	// (0x0001459f) list_double_heading_pane_t1_ParamLimits

0x78d4,	// (0x0001459f) list_double_heading_pane_t1

0x78ea,	// (0x000145b5) list_double_heading_pane_t2_ParamLimits

0x78ea,	// (0x000145b5) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0001c313) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0001c313) list_double_heading_pane_t

0x78fc,	// (0x000145c7) list_double_graphic_heading_pane_g1_ParamLimits

0x78fc,	// (0x000145c7) list_double_graphic_heading_pane_g1

0x78b7,	// (0x00014582) list_double_graphic_heading_pane_g2_ParamLimits

0x78b7,	// (0x00014582) list_double_graphic_heading_pane_g2

0x78c8,	// (0x00014593) list_double_graphic_heading_pane_g3_ParamLimits

0x78c8,	// (0x00014593) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0001c318) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0001c318) list_double_graphic_heading_pane_g

0x7908,	// (0x000145d3) list_double_graphic_heading_pane_t1_ParamLimits

0x7908,	// (0x000145d3) list_double_graphic_heading_pane_t1

0x791e,	// (0x000145e9) list_double_graphic_heading_pane_t2_ParamLimits

0x791e,	// (0x000145e9) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0001c31f) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0001c31f) list_double_graphic_heading_pane_t

0x7834,	// (0x000144ff) list_double_time_pane_g1_ParamLimits

0x7834,	// (0x000144ff) list_double_time_pane_g1

0x76c7,	// (0x00014392) list_double_time_pane_g2_ParamLimits

0x76c7,	// (0x00014392) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0001c324) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0001c324) list_double_time_pane_g

0x7930,	// (0x000145fb) list_double_time_pane_t1_ParamLimits

0x7930,	// (0x000145fb) list_double_time_pane_t1

0x7946,	// (0x00014611) list_double_time_pane_t2_ParamLimits

0x7946,	// (0x00014611) list_double_time_pane_t2

0x7958,	// (0x00014623) list_double_time_pane_t3_ParamLimits

0x7958,	// (0x00014623) list_double_time_pane_t3

0x796a,	// (0x00014635) list_double_time_pane_t4_ParamLimits

0x796a,	// (0x00014635) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0001c329) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0001c329) list_double_time_pane_t

0x77d5,	// (0x000144a0) list_setting_pane_g1_ParamLimits

0x77d5,	// (0x000144a0) list_setting_pane_g1

0x770c,	// (0x000143d7) list_setting_pane_g2_ParamLimits

0x770c,	// (0x000143d7) list_setting_pane_g2

0x0001,

0xf667,	// (0x0001c332) list_setting_pane_g_ParamLimits

0xf667,	// (0x0001c332) list_setting_pane_g

0x797c,	// (0x00014647) list_setting_pane_t1_ParamLimits

0x797c,	// (0x00014647) list_setting_pane_t1

0x7993,	// (0x0001465e) list_setting_pane_t2_ParamLimits

0x7993,	// (0x0001465e) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0001c337) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0001c337) list_setting_pane_t

0x79d2,	// (0x0001469d) set_value_pane_cp_ParamLimits

0x79d2,	// (0x0001469d) set_value_pane_cp

0x77d5,	// (0x000144a0) list_setting_number_pane_g1_ParamLimits

0x77d5,	// (0x000144a0) list_setting_number_pane_g1

0x770c,	// (0x000143d7) list_setting_number_pane_g2_ParamLimits

0x770c,	// (0x000143d7) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x0001c332) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x0001c332) list_setting_number_pane_g

0x79e0,	// (0x000146ab) list_setting_number_pane_t1_ParamLimits

0x79e0,	// (0x000146ab) list_setting_number_pane_t1

0x79f4,	// (0x000146bf) list_setting_number_pane_t2_ParamLimits

0x79f4,	// (0x000146bf) list_setting_number_pane_t2

0x7a0b,	// (0x000146d6) list_setting_number_pane_t3_ParamLimits

0x7a0b,	// (0x000146d6) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x0001c33e) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x0001c33e) list_setting_number_pane_t

0x79d2,	// (0x0001469d) set_value_pane_ParamLimits

0x79d2,	// (0x0001469d) set_value_pane

0x3dd1,	// (0x00010a9c) bg_set_opt_pane_ParamLimits

0x3dd1,	// (0x00010a9c) bg_set_opt_pane

0x3df2,	// (0x00010abd) set_value_pane_t1

0x3e00,	// (0x00010acb) slider_set_pane_cp3

0x3e09,	// (0x00010ad4) volume_small_pane_cp

0x3e12,	// (0x00010add) list_form_gen_pane

0x3e1b,	// (0x00010ae6) scroll_pane_cp8

0x7a4e,	// (0x00014719) form_field_data_pane_ParamLimits

0x7a4e,	// (0x00014719) form_field_data_pane

0x7a6c,	// (0x00014737) form_field_data_wide_pane_ParamLimits

0x7a6c,	// (0x00014737) form_field_data_wide_pane

0x7a93,	// (0x0001475e) form_field_popup_pane_ParamLimits

0x7a93,	// (0x0001475e) form_field_popup_pane

0x3e3c,	// (0x00010b07) form_field_popup_wide_pane_ParamLimits

0x3e3c,	// (0x00010b07) form_field_popup_wide_pane

0x3e75,	// (0x00010b40) form_field_slider_pane_ParamLimits

0x3e75,	// (0x00010b40) form_field_slider_pane

0x3e88,	// (0x00010b53) form_field_slider_wide_pane_ParamLimits

0x3e88,	// (0x00010b53) form_field_slider_wide_pane

0x3e9b,	// (0x00010b66) data_form_pane

0x7abf,	// (0x0001478a) form_field_data_pane_t1

0x3ea7,	// (0x00010b72) input_focus_pane

0x3eb5,	// (0x00010b80) data_form_wide_pane

0x3eed,	// (0x00010bb8) form_field_data_wide_pane_t1

0x3b84,	// (0x0001084f) input_focus_pane_cp6

0x7ad9,	// (0x000147a4) form_field_popup_pane_t1

0x3ea7,	// (0x00010b72) input_focus_pane_cp7

0x3f0f,	// (0x00010bda) list_form_pane

0x3f23,	// (0x00010bee) form_field_popup_wide_pane_t1

0x3ea7,	// (0x00010b72) input_focus_pane_cp8

0x3f38,	// (0x00010c03) list_form_wide_pane

0x7afb,	// (0x000147c6) form_field_slider_pane_t1_ParamLimits

0x7afb,	// (0x000147c6) form_field_slider_pane_t1

0x7b0f,	// (0x000147da) form_field_slider_pane_t2_ParamLimits

0x7b0f,	// (0x000147da) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x0001c34e) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x0001c34e) form_field_slider_pane_t

0x3739,	// (0x00010404) input_focus_pane_cp9_ParamLimits

0x3739,	// (0x00010404) input_focus_pane_cp9

0x7b21,	// (0x000147ec) slider_cont_pane_ParamLimits

0x7b21,	// (0x000147ec) slider_cont_pane

0x3f47,	// (0x00010c12) form_field_slider_wide_pane_t1_ParamLimits

0x3f47,	// (0x00010c12) form_field_slider_wide_pane_t1

0x3f59,	// (0x00010c24) form_field_slider_wide_pane_t2_ParamLimits

0x3f59,	// (0x00010c24) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x0001c353) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x0001c353) form_field_slider_wide_pane_t

0x3739,	// (0x00010404) input_focus_pane_cp10_ParamLimits

0x3739,	// (0x00010404) input_focus_pane_cp10

0x7b35,	// (0x00014800) slider_cont_pane_cp1_ParamLimits

0x7b35,	// (0x00014800) slider_cont_pane_cp1

0x7b49,	// (0x00014814) slider_form_pane_cp

0x3f6b,	// (0x00010c36) input_focus_pane_g1

0x3f73,	// (0x00010c3e) input_focus_pane_g2

0x3f7b,	// (0x00010c46) input_focus_pane_g3

0x3f83,	// (0x00010c4e) input_focus_pane_g4

0x3f8b,	// (0x00010c56) input_focus_pane_g5

0x3f93,	// (0x00010c5e) input_focus_pane_g6

0x3f9b,	// (0x00010c66) input_focus_pane_g7

0x3fa3,	// (0x00010c6e) input_focus_pane_g8

0x3fab,	// (0x00010c76) input_focus_pane_g9

0x34b1,	// (0x0001017c) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0001c358) input_focus_pane_g

0x9352,	// (0x0001601d) wait_border_pane_g3_copy1

0x7b51,	// (0x0001481c) data_form_pane_t1

0x34b1,	// (0x0001017c) wait_anim_pane_g1_copy1

0xa31e,	// (0x00016fe9) data_form_wide_pane_t1

0x3fb3,	// (0x00010c7e) list_form_graphic_pane_cp_ParamLimits

0x3fb3,	// (0x00010c7e) list_form_graphic_pane_cp

0xa2f3,	// (0x00016fbe) slider_form_pane_g1

0xa2fc,	// (0x00016fc7) slider_form_pane_g2

0x0006,

0xf990,	// (0x0001c65b) slider_form_pane_g

0x3fb3,	// (0x00010c7e) list_form_graphic_pane_ParamLimits

0x3fb3,	// (0x00010c7e) list_form_graphic_pane

0x3fc5,	// (0x00010c90) list_form_graphic_pane_g1

0x3fcd,	// (0x00010c98) list_form_graphic_pane_t1_ParamLimits

0x3fcd,	// (0x00010c98) list_form_graphic_pane_t1

0x3751,	// (0x0001041c) list_highlight_pane_cp5_ParamLimits

0x3751,	// (0x0001041c) list_highlight_pane_cp5

0x7b70,	// (0x0001483b) find_pane_g1

0x3fe2,	// (0x00010cad) input_find_pane

0x7b79,	// (0x00014844) input_find_pane_g1_ParamLimits

0x7b79,	// (0x00014844) input_find_pane_g1

0x7b85,	// (0x00014850) input_find_pane_t1_ParamLimits

0x7b85,	// (0x00014850) input_find_pane_t1

0x7b9a,	// (0x00014865) input_find_pane_t2_ParamLimits

0x7b9a,	// (0x00014865) input_find_pane_t2

0x0001,

0xf6a2,	// (0x0001c36d) input_find_pane_t_ParamLimits

0xf6a2,	// (0x0001c36d) input_find_pane_t

0x3feb,	// (0x00010cb6) input_focus_pane_cp5_ParamLimits

0x3feb,	// (0x00010cb6) input_focus_pane_cp5

0x3ff9,	// (0x00010cc4) bg_popup_window_pane_cp2_ParamLimits

0x3ff9,	// (0x00010cc4) bg_popup_window_pane_cp2

0x4006,	// (0x00010cd1) listscroll_menu_pane_ParamLimits

0x4006,	// (0x00010cd1) listscroll_menu_pane

0x7bbb,	// (0x00014886) popup_submenu_window_ParamLimits

0x7bbb,	// (0x00014886) popup_submenu_window

0x4012,	// (0x00010cdd) find_popup_pane_g1

0x401a,	// (0x00010ce5) input_popup_find_pane_cp

0x3feb,	// (0x00010cb6) input_focus_pane_cp4_ParamLimits

0x3feb,	// (0x00010cb6) input_focus_pane_cp4

0x4024,	// (0x00010cef) input_popup_find_pane_t1_ParamLimits

0x4024,	// (0x00010cef) input_popup_find_pane_t1

0x362a,	// (0x000102f5) bg_popup_sub_pane_cp

0x4052,	// (0x00010d1d) listscroll_popup_sub_pane

0x405a,	// (0x00010d25) list_submenu_pane_ParamLimits

0x405a,	// (0x00010d25) list_submenu_pane

0x406b,	// (0x00010d36) scroll_pane_cp4

0x4073,	// (0x00010d3e) list_single_popup_submenu_pane_ParamLimits

0x4073,	// (0x00010d3e) list_single_popup_submenu_pane

0x4088,	// (0x00010d53) list_single_popup_submenu_pane_g1

0x4090,	// (0x00010d5b) list_single_popup_submenu_pane_t1_ParamLimits

0x4090,	// (0x00010d5b) list_single_popup_submenu_pane_t1

0x3751,	// (0x0001041c) bg_active_tab_pane_cp1_ParamLimits

0x3751,	// (0x0001041c) bg_active_tab_pane_cp1

0x7bf9,	// (0x000148c4) tabs_2_active_pane_g1

0x7c01,	// (0x000148cc) tabs_2_active_pane_t1

0x3751,	// (0x0001041c) bg_passive_tab_pane_cp1_ParamLimits

0x3751,	// (0x0001041c) bg_passive_tab_pane_cp1

0x7bf9,	// (0x000148c4) tabs_2_passive_pane_g1

0x7c01,	// (0x000148cc) tabs_2_passive_pane_t1

0x40bd,	// (0x00010d88) bg_active_tab_pane_cp4

0x7c13,	// (0x000148de) tabs_2_long_active_pane_t1

0x7c26,	// (0x000148f1) bg_passive_tab_pane_cp4

0x6122,	// (0x00012ded) list_single_midp_graphic_pane_g4_ParamLimits

0x40bd,	// (0x00010d88) bg_active_tab_pane_cp5

0x7c32,	// (0x000148fd) tabs_3_long_active_pane_t1

0x7c26,	// (0x000148f1) bg_passive_tab_pane_cp5

0x6122,	// (0x00012ded) list_single_midp_graphic_pane_g4

0x3751,	// (0x0001041c) bg_popup_window_pane_cp13_ParamLimits

0x3751,	// (0x0001041c) bg_popup_window_pane_cp13

0x40ae,	// (0x00010d79) listscroll_popup_fast_pane_ParamLimits

0x40ae,	// (0x00010d79) listscroll_popup_fast_pane

0x40cb,	// (0x00010d96) grid_popup_fast_pane_ParamLimits

0x40cb,	// (0x00010d96) grid_popup_fast_pane

0x40dd,	// (0x00010da8) scroll_pane_cp9_ParamLimits

0x40dd,	// (0x00010da8) scroll_pane_cp9

0xc17c,	// (0x00018e47) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc17c,	// (0x00018e47) list_single_graphic_hl_pane_t1_cp2

0x4101,	// (0x00010dcc) input_focus_pane_cp20_ParamLimits

0x4101,	// (0x00010dcc) input_focus_pane_cp20

0x410f,	// (0x00010dda) query_popup_data_pane_t1_ParamLimits

0x410f,	// (0x00010dda) query_popup_data_pane_t1

0x4122,	// (0x00010ded) query_popup_data_pane_t2_ParamLimits

0x4122,	// (0x00010ded) query_popup_data_pane_t2

0x4168,	// (0x00010e33) query_popup_data_pane_t3_ParamLimits

0x4168,	// (0x00010e33) query_popup_data_pane_t3

0x41a9,	// (0x00010e74) query_popup_data_pane_t4_ParamLimits

0x41a9,	// (0x00010e74) query_popup_data_pane_t4

0x41e5,	// (0x00010eb0) query_popup_data_pane_t5_ParamLimits

0x41e5,	// (0x00010eb0) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x0001c372) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x0001c372) query_popup_data_pane_t

0x3f6b,	// (0x00010c36) bg_set_opt_pane_g1

0x3f73,	// (0x00010c3e) bg_set_opt_pane_g2

0x3f7b,	// (0x00010c46) bg_set_opt_pane_g3

0x3f83,	// (0x00010c4e) bg_set_opt_pane_g4

0x3f8b,	// (0x00010c56) bg_set_opt_pane_g5

0x3f93,	// (0x00010c5e) bg_set_opt_pane_g6

0x3f9b,	// (0x00010c66) bg_set_opt_pane_g7

0x3fa3,	// (0x00010c6e) bg_set_opt_pane_g8

0x3fab,	// (0x00010c76) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x0001c37d) bg_set_opt_pane_g

0x56c9,	// (0x00012394) control_top_pane_stacon_ParamLimits

0x56c9,	// (0x00012394) control_top_pane_stacon

0x571c,	// (0x000123e7) signal_pane_stacon_ParamLimits

0x571c,	// (0x000123e7) signal_pane_stacon

0x8072,	// (0x00014d3d) stacon_top_pane_g1_ParamLimits

0x8072,	// (0x00014d3d) stacon_top_pane_g1

0x5741,	// (0x0001240c) title_pane_stacon_ParamLimits

0x5741,	// (0x0001240c) title_pane_stacon

0x576b,	// (0x00012436) uni_indicator_pane_stacon_ParamLimits

0x576b,	// (0x00012436) uni_indicator_pane_stacon

0x5783,	// (0x0001244e) battery_pane_stacon_ParamLimits

0x5783,	// (0x0001244e) battery_pane_stacon

0x57c7,	// (0x00012492) control_bottom_pane_stacon_ParamLimits

0x57c7,	// (0x00012492) control_bottom_pane_stacon

0x57ea,	// (0x000124b5) navi_pane_stacon_ParamLimits

0x57ea,	// (0x000124b5) navi_pane_stacon

0x8094,	// (0x00014d5f) stacon_bottom_pane_g1_ParamLimits

0x8094,	// (0x00014d5f) stacon_bottom_pane_g1

0x5426,	// (0x000120f1) aid_levels_signal_lsc_ParamLimits

0x5426,	// (0x000120f1) aid_levels_signal_lsc

0x543d,	// (0x00012108) signal_pane_stacon_g1_ParamLimits

0x543d,	// (0x00012108) signal_pane_stacon_g1

0x5451,	// (0x0001211c) signal_pane_stacon_g2_ParamLimits

0x5451,	// (0x0001211c) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x0001c390) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0001c390) signal_pane_stacon_g

0x5486,	// (0x00012151) title_pane_stacon_t1_ParamLimits

0x5486,	// (0x00012151) title_pane_stacon_t1

0x42c2,	// (0x00010f8d) uni_indicator_pane_stacon_g1

0x42cc,	// (0x00010f97) uni_indicator_pane_stacon_g2

0x42ae,	// (0x00010f79) uni_indicator_pane_stacon_g3

0x42b8,	// (0x00010f83) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0001c39c) uni_indicator_pane_stacon_g

0x54ab,	// (0x00012176) control_top_pane_stacon_g1

0x54b3,	// (0x0001217e) control_top_pane_stacon_t1_ParamLimits

0x54b3,	// (0x0001217e) control_top_pane_stacon_t1

0x54ea,	// (0x000121b5) aid_levels_battery_lsc_ParamLimits

0x54ea,	// (0x000121b5) aid_levels_battery_lsc

0x5502,	// (0x000121cd) battery_pane_stacon_g1_ParamLimits

0x5502,	// (0x000121cd) battery_pane_stacon_g1

0x5515,	// (0x000121e0) battery_pane_stacon_g2_ParamLimits

0x5515,	// (0x000121e0) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0001c3a5) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0001c3a5) battery_pane_stacon_g

0x5553,	// (0x0001221e) navi_icon_pane_stacon

0x5567,	// (0x00012232) navi_navi_pane_stacon

0x5553,	// (0x0001221e) navi_text_pane_stacon

0x54ab,	// (0x00012176) control_bottom_pane_stacon_g1

0x557d,	// (0x00012248) control_bottom_pane_stacon_t1_ParamLimits

0x557d,	// (0x00012248) control_bottom_pane_stacon_t1

0x7c44,	// (0x0001490f) grid_app_pane_ParamLimits

0x7c44,	// (0x0001490f) grid_app_pane

0x7c68,	// (0x00014933) scroll_pane_cp15_ParamLimits

0x7c68,	// (0x00014933) scroll_pane_cp15

0x7c7d,	// (0x00014948) cell_app_pane_ParamLimits

0x7c7d,	// (0x00014948) cell_app_pane

0x7ca9,	// (0x00014974) cell_app_pane_g1_ParamLimits

0x7ca9,	// (0x00014974) cell_app_pane_g1

0x43f9,	// (0x000110c4) cell_app_pane_g2_ParamLimits

0x43f9,	// (0x000110c4) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0001c3aa) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0001c3aa) cell_app_pane_g

0x4405,	// (0x000110d0) cell_app_pane_t1_ParamLimits

0x4405,	// (0x000110d0) cell_app_pane_t1

0x4417,	// (0x000110e2) grid_highlight_pane_ParamLimits

0x4417,	// (0x000110e2) grid_highlight_pane

0x3f6b,	// (0x00010c36) cell_highlight_pane_g1

0x3f73,	// (0x00010c3e) cell_highlight_pane_g2

0x3f7b,	// (0x00010c46) cell_highlight_pane_g3

0x3f83,	// (0x00010c4e) cell_highlight_pane_g4

0x3f8b,	// (0x00010c56) cell_highlight_pane_g5

0x3f93,	// (0x00010c5e) cell_highlight_pane_g6

0x3f9b,	// (0x00010c66) cell_highlight_pane_g7

0x3fa3,	// (0x00010c6e) cell_highlight_pane_g8

0x3fab,	// (0x00010c76) cell_highlight_pane_g9

0x34b1,	// (0x0001017c) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0001c358) cell_highlight_pane_g

0x4432,	// (0x000110fd) bg_scroll_pane

0x55c7,	// (0x00012292) scroll_handle_pane

0x44a2,	// (0x0001116d) scroll_bg_pane_g1

0x44b7,	// (0x00011182) scroll_bg_pane_g2

0x44cf,	// (0x0001119a) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x0001c3af) scroll_bg_pane_g

0x44e4,	// (0x000111af) scroll_handle_focus_pane_ParamLimits

0x44e4,	// (0x000111af) scroll_handle_focus_pane

0x44a2,	// (0x0001116d) scroll_handle_pane_g1

0x44f1,	// (0x000111bc) scroll_handle_pane_g2

0x44cf,	// (0x0001119a) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0001c3b6) scroll_handle_pane_g

0x3feb,	// (0x00010cb6) bg_popup_sub_pane_cp21_ParamLimits

0x3feb,	// (0x00010cb6) bg_popup_sub_pane_cp21

0x4505,	// (0x000111d0) popup_fep_japan_predictive_window_t1_ParamLimits

0x4505,	// (0x000111d0) popup_fep_japan_predictive_window_t1

0x451c,	// (0x000111e7) popup_fep_japan_predictive_window_t2_ParamLimits

0x451c,	// (0x000111e7) popup_fep_japan_predictive_window_t2

0x454f,	// (0x0001121a) popup_fep_japan_predictive_window_t3_ParamLimits

0x454f,	// (0x0001121a) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x0001c3bd) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x0001c3bd) popup_fep_japan_predictive_window_t

0x362a,	// (0x000102f5) bg_popup_sub_pane_cp23

0x4586,	// (0x00011251) listscroll_japin_cand_pane

0x458e,	// (0x00011259) popup_fep_japan_candidate_window_t1

0x459c,	// (0x00011267) candidate_pane_ParamLimits

0x459c,	// (0x00011267) candidate_pane

0x45ae,	// (0x00011279) scroll_pane_cp30

0x45b8,	// (0x00011283) list_single_popup_jap_candidate_pane_ParamLimits

0x45b8,	// (0x00011283) list_single_popup_jap_candidate_pane

0x362a,	// (0x000102f5) list_highlight_pane_cp30

0x45cc,	// (0x00011297) list_single_popup_jap_candidate_pane_t1

0x7ccd,	// (0x00014998) level_1_signal

0x7cda,	// (0x000149a5) level_2_signal

0x7ce7,	// (0x000149b2) level_3_signal

0x7cf4,	// (0x000149bf) level_4_signal

0x7d01,	// (0x000149cc) level_5_signal

0x7d0e,	// (0x000149d9) level_6_signal

0x7d1b,	// (0x000149e6) level_7_signal

0x7ccd,	// (0x00014998) level_1_battery

0x7cda,	// (0x000149a5) level_2_battery

0x7ce7,	// (0x000149b2) level_3_battery

0x7cf4,	// (0x000149bf) level_4_battery

0x7d01,	// (0x000149cc) level_5_battery

0x7d0e,	// (0x000149d9) level_6_battery

0x7d1b,	// (0x000149e6) level_7_battery

0x7d40,	// (0x00014a0b) list_menu_pane_ParamLimits

0x7d40,	// (0x00014a0b) list_menu_pane

0x7d56,	// (0x00014a21) scroll_pane_cp25_ParamLimits

0x7d56,	// (0x00014a21) scroll_pane_cp25

0x7d6f,	// (0x00014a3a) list_double2_graphic_pane_cp2_ParamLimits

0x7d6f,	// (0x00014a3a) list_double2_graphic_pane_cp2

0x7d6f,	// (0x00014a3a) list_double2_large_graphic_pane_cp2_ParamLimits

0x7d6f,	// (0x00014a3a) list_double2_large_graphic_pane_cp2

0x7d6f,	// (0x00014a3a) list_double2_pane_cp2_ParamLimits

0x7d6f,	// (0x00014a3a) list_double2_pane_cp2

0x7d6f,	// (0x00014a3a) list_double_graphic_pane_cp2_ParamLimits

0x7d6f,	// (0x00014a3a) list_double_graphic_pane_cp2

0x7d6f,	// (0x00014a3a) list_double_large_graphic_pane_cp2_ParamLimits

0x7d6f,	// (0x00014a3a) list_double_large_graphic_pane_cp2

0x7d6f,	// (0x00014a3a) list_double_number_pane_cp2_ParamLimits

0x7d6f,	// (0x00014a3a) list_double_number_pane_cp2

0x7d6f,	// (0x00014a3a) list_double_pane_cp2_ParamLimits

0x7d6f,	// (0x00014a3a) list_double_pane_cp2

0x7d95,	// (0x00014a60) list_single_2graphic_pane_cp2_ParamLimits

0x7d95,	// (0x00014a60) list_single_2graphic_pane_cp2

0x7d95,	// (0x00014a60) list_single_graphic_heading_pane_cp2_ParamLimits

0x7d95,	// (0x00014a60) list_single_graphic_heading_pane_cp2

0x7d95,	// (0x00014a60) list_single_graphic_pane_cp2_ParamLimits

0x7d95,	// (0x00014a60) list_single_graphic_pane_cp2

0x7d95,	// (0x00014a60) list_single_heading_pane_cp2_ParamLimits

0x7d95,	// (0x00014a60) list_single_heading_pane_cp2

0x7db2,	// (0x00014a7d) list_single_large_graphic_pane_cp2_ParamLimits

0x7db2,	// (0x00014a7d) list_single_large_graphic_pane_cp2

0x7d95,	// (0x00014a60) list_single_number_heading_pane_cp2_ParamLimits

0x7d95,	// (0x00014a60) list_single_number_heading_pane_cp2

0x7d95,	// (0x00014a60) list_single_number_pane_cp2_ParamLimits

0x7d95,	// (0x00014a60) list_single_number_pane_cp2

0x7d95,	// (0x00014a60) list_single_pane_cp2_ParamLimits

0x7d95,	// (0x00014a60) list_single_pane_cp2

0x7e2d,	// (0x00014af8) bg_popup_sub_pane_cp22

0x5679,	// (0x00012344) popup_side_volume_key_window_g1

0x56a3,	// (0x0001236e) popup_side_volume_key_window_t1

0x56c1,	// (0x0001238c) volume_small_pane_cp1

0x3739,	// (0x00010404) bg_popup_sub_pane_cp24_ParamLimits

0x3739,	// (0x00010404) bg_popup_sub_pane_cp24

0x7e43,	// (0x00014b0e) fep_china_uni_candidate_pane_ParamLimits

0x7e43,	// (0x00014b0e) fep_china_uni_candidate_pane

0x7e57,	// (0x00014b22) fep_china_uni_entry_pane

0x7e67,	// (0x00014b32) popup_fep_china_uni_window_g1

0x7e83,	// (0x00014b4e) fep_china_uni_entry_pane_g1

0x7e8d,	// (0x00014b58) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x0001c3ee) fep_china_uni_entry_pane_g

0x7e97,	// (0x00014b62) fep_entry_item_pane

0x7ea1,	// (0x00014b6c) fep_candidate_item_pane

0x7ea9,	// (0x00014b74) fep_china_uni_candidate_pane_g1

0x7eb3,	// (0x00014b7e) fep_china_uni_candidate_pane_g2

0x7ebb,	// (0x00014b86) fep_china_uni_candidate_pane_g3

0x7ec3,	// (0x00014b8e) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0001c3f3) fep_china_uni_candidate_pane_g

0x34b1,	// (0x0001017c) fep_entry_item_pane_g1

0x7ecd,	// (0x00014b98) fep_entry_item_pane_t1_ParamLimits

0x7ecd,	// (0x00014b98) fep_entry_item_pane_t1

0x7ee3,	// (0x00014bae) fep_candidate_item_pane_t1_ParamLimits

0x7ee3,	// (0x00014bae) fep_candidate_item_pane_t1

0x7ef8,	// (0x00014bc3) fep_candidate_item_pane_t2_ParamLimits

0x7ef8,	// (0x00014bc3) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x0001c3fc) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x0001c3fc) fep_candidate_item_pane_t

0x3751,	// (0x0001041c) list_highlight_pane_cp31_ParamLimits

0x3751,	// (0x0001041c) list_highlight_pane_cp31

0x7f0a,	// (0x00014bd5) level_1_signal_lsc

0x7f13,	// (0x00014bde) level_2_signal_lsc

0x7f1c,	// (0x00014be7) level_3_signal_lsc

0x7f25,	// (0x00014bf0) level_4_signal_lsc

0x7f2e,	// (0x00014bf9) level_5_signal_lsc

0x7f37,	// (0x00014c02) level_6_signal_lsc

0x7f40,	// (0x00014c0b) level_7_signal_lsc

0x7f40,	// (0x00014c0b) level_1_battery_lsc

0x7f49,	// (0x00014c14) level_2_battery_lsc

0x7f52,	// (0x00014c1d) level_3_battery_lsc

0x7f5b,	// (0x00014c26) level_4_battery_lsc

0x7f64,	// (0x00014c2f) level_5_battery_lsc

0x7f6d,	// (0x00014c38) level_6_battery_lsc

0x7f0a,	// (0x00014bd5) level_7_battery_lsc

0x7f76,	// (0x00014c41) scroll_handle_focus_pane_g1

0x7f7f,	// (0x00014c4a) scroll_handle_focus_pane_g2

0x7f88,	// (0x00014c53) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x0001c401) scroll_handle_focus_pane_g

0x7f91,	// (0x00014c5c) list_single_2graphic_pane_g1_ParamLimits

0x7f91,	// (0x00014c5c) list_single_2graphic_pane_g1

0x7656,	// (0x00014321) list_single_2graphic_pane_g2_ParamLimits

0x7656,	// (0x00014321) list_single_2graphic_pane_g2

0x75dc,	// (0x000142a7) list_single_2graphic_pane_g3_ParamLimits

0x75dc,	// (0x000142a7) list_single_2graphic_pane_g3

0x7f9d,	// (0x00014c68) list_single_2graphic_pane_g4_ParamLimits

0x7f9d,	// (0x00014c68) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0001c408) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0001c408) list_single_2graphic_pane_g

0x7fa9,	// (0x00014c74) list_single_2graphic_pane_t1_ParamLimits

0x7fa9,	// (0x00014c74) list_single_2graphic_pane_t1

0x7fd7,	// (0x00014ca2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7fd7,	// (0x00014ca2) list_double2_graphic_large_graphic_pane_g1

0x76fb,	// (0x000143c6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x76fb,	// (0x000143c6) list_double2_graphic_large_graphic_pane_g2

0x770c,	// (0x000143d7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x770c,	// (0x000143d7) list_double2_graphic_large_graphic_pane_g3

0x7fe9,	// (0x00014cb4) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7fe9,	// (0x00014cb4) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0001c411) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0001c411) list_double2_graphic_large_graphic_pane_g

0x7ff5,	// (0x00014cc0) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7ff5,	// (0x00014cc0) list_double2_graphic_large_graphic_pane_t1

0x800b,	// (0x00014cd6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x800b,	// (0x00014cd6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0001c41a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0001c41a) list_double2_graphic_large_graphic_pane_t

0x8156,	// (0x00014e21) popup_fast_swap_window_ParamLimits

0x8156,	// (0x00014e21) popup_fast_swap_window

0x8174,	// (0x00014e3f) popup_side_volume_key_window

0x8192,	// (0x00014e5d) stacon_top_pane

0x819c,	// (0x00014e67) status_pane_ParamLimits

0x819c,	// (0x00014e67) status_pane

0x8192,	// (0x00014e5d) status_small_pane

0x362a,	// (0x000102f5) control_pane

0x362a,	// (0x000102f5) stacon_bottom_pane

0x3e1b,	// (0x00010ae6) scroll_pane_cp121

0x3e12,	// (0x00010add) set_content_pane

0x801d,	// (0x00014ce8) bg_active_tab_pane_g1_cp1

0x8026,	// (0x00014cf1) bg_active_tab_pane_g2_cp1

0x802f,	// (0x00014cfa) bg_active_tab_pane_g3_cp1

0x801d,	// (0x00014ce8) bg_passive_tab_pane_g1_cp1

0x8026,	// (0x00014cf1) bg_passive_tab_pane_g2_cp1

0x802f,	// (0x00014cfa) bg_passive_tab_pane_g3_cp1

0x8038,	// (0x00014d03) bg_active_tab_pane_g1_cp2

0x8026,	// (0x00014cf1) bg_active_tab_pane_g2_cp2

0x8041,	// (0x00014d0c) bg_active_tab_pane_g3_cp2

0x8038,	// (0x00014d03) bg_passive_tab_pane_g1_cp2

0x8026,	// (0x00014cf1) bg_passive_tab_pane_g2_cp2

0x8041,	// (0x00014d0c) bg_passive_tab_pane_g3_cp2

0x804a,	// (0x00014d15) bg_active_tab_pane_g1_cp3

0x8026,	// (0x00014cf1) bg_active_tab_pane_g2_cp3

0x8053,	// (0x00014d1e) bg_active_tab_pane_g3_cp3

0x804a,	// (0x00014d15) bg_passive_tab_pane_g1_cp3

0x8026,	// (0x00014cf1) bg_passive_tab_pane_g2_cp3

0x8053,	// (0x00014d1e) bg_passive_tab_pane_g3_cp3

0x805c,	// (0x00014d27) bg_active_tab_pane_g1_cp4

0x8026,	// (0x00014cf1) bg_active_tab_pane_g2_cp4

0x8067,	// (0x00014d32) bg_active_tab_pane_g3_cp4

0x805c,	// (0x00014d27) bg_passive_tab_pane_g1_cp4

0x8026,	// (0x00014cf1) bg_passive_tab_pane_g2_cp4

0x8067,	// (0x00014d32) bg_passive_tab_pane_g3_cp4

0x80b0,	// (0x00014d7b) bg_active_tab_pane_g1_cp5

0x8026,	// (0x00014cf1) bg_active_tab_pane_g2_cp5

0x80b9,	// (0x00014d84) bg_active_tab_pane_g3_cp5

0x80b0,	// (0x00014d7b) bg_passive_tab_pane_g1_cp5

0x8026,	// (0x00014cf1) bg_passive_tab_pane_g2_cp5

0x80b9,	// (0x00014d84) bg_passive_tab_pane_g3_cp5

0x80c2,	// (0x00014d8d) list_set_graphic_pane_ParamLimits

0x80c2,	// (0x00014d8d) list_set_graphic_pane

0x362a,	// (0x000102f5) bg_set_opt_pane_cp4

0x80d7,	// (0x00014da2) list_set_graphic_pane_g1_ParamLimits

0x80d7,	// (0x00014da2) list_set_graphic_pane_g1

0x80e3,	// (0x00014dae) list_set_graphic_pane_g2_ParamLimits

0x80e3,	// (0x00014dae) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x0001c41f) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x0001c41f) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0001c79e) volume_small_pane_cp_g

0x8107,	// (0x00014dd2) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8107,	// (0x00014dd2) list_double2_large_graphic_pane_g1_cp2

0x8115,	// (0x00014de0) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8115,	// (0x00014de0) list_double2_large_graphic_pane_g2_cp2

0x8126,	// (0x00014df1) list_double2_large_graphic_pane_g3_cp2

0x812e,	// (0x00014df9) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x812e,	// (0x00014df9) list_double2_large_graphic_pane_t1_cp2

0x8144,	// (0x00014e0f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8144,	// (0x00014e0f) list_double2_large_graphic_pane_t2_cp2

0x9e3c,	// (0x00016b07) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x9e3c,	// (0x00016b07) list_double_large_graphic_pane_g1_cp2

0x9e4f,	// (0x00016b1a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x9e4f,	// (0x00016b1a) list_double_large_graphic_pane_g2_cp2

0x82ba,	// (0x00014f85) list_double_large_graphic_pane_g3_cp2

0x9e60,	// (0x00016b2b) list_double_large_graphic_pane_g4_cp

0x9e68,	// (0x00016b33) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x9e68,	// (0x00016b33) list_double_large_graphic_pane_t1_cp2

0x9e7f,	// (0x00016b4a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x9e7f,	// (0x00016b4a) list_double_large_graphic_pane_t2_cp2

0x81aa,	// (0x00014e75) list_double2_graphic_pane_g1_cp2_ParamLimits

0x81aa,	// (0x00014e75) list_double2_graphic_pane_g1_cp2

0x81b8,	// (0x00014e83) list_double2_graphic_pane_g2_cp2_ParamLimits

0x81b8,	// (0x00014e83) list_double2_graphic_pane_g2_cp2

0x81c9,	// (0x00014e94) list_double2_graphic_pane_g3_cp2

0x81d3,	// (0x00014e9e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x81d3,	// (0x00014e9e) list_double2_graphic_pane_t1_cp2

0x81e9,	// (0x00014eb4) list_double2_graphic_pane_t2_cp2_ParamLimits

0x81e9,	// (0x00014eb4) list_double2_graphic_pane_t2_cp2

0x81fb,	// (0x00014ec6) list_single_number_heading_pane_g1_cp2_ParamLimits

0x81fb,	// (0x00014ec6) list_single_number_heading_pane_g1_cp2

0x8207,	// (0x00014ed2) list_single_number_heading_pane_g2_cp2

0x820f,	// (0x00014eda) list_single_number_heading_pane_t1_cp2_ParamLimits

0x820f,	// (0x00014eda) list_single_number_heading_pane_t1_cp2

0x8225,	// (0x00014ef0) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8225,	// (0x00014ef0) list_single_number_heading_pane_t2_cp2

0x8239,	// (0x00014f04) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8239,	// (0x00014f04) list_single_number_heading_pane_t3_cp2

0x81fb,	// (0x00014ec6) list_single_heading_pane_g1_cp2_ParamLimits

0x81fb,	// (0x00014ec6) list_single_heading_pane_g1_cp2

0x8207,	// (0x00014ed2) list_single_heading_pane_g2_cp2

0x820f,	// (0x00014eda) list_single_heading_pane_t1_cp2_ParamLimits

0x820f,	// (0x00014eda) list_single_heading_pane_t1_cp2

0x9c36,	// (0x00016901) list_single_heading_pane_t2_cp2_ParamLimits

0x9c36,	// (0x00016901) list_single_heading_pane_t2_cp2

0x9b78,	// (0x00016843) list_double_graphic_pane_g1_cp2_ParamLimits

0x9b78,	// (0x00016843) list_double_graphic_pane_g1_cp2

0x9b84,	// (0x0001684f) list_double_graphic_pane_g2_cp2_ParamLimits

0x9b84,	// (0x0001684f) list_double_graphic_pane_g2_cp2

0x9b93,	// (0x0001685e) list_double_graphic_pane_g3_cp2

0x9b9b,	// (0x00016866) list_double_graphic_pane_t1_cp2_ParamLimits

0x9b9b,	// (0x00016866) list_double_graphic_pane_t1_cp2

0x9bb1,	// (0x0001687c) list_double_graphic_pane_t2_cp2_ParamLimits

0x9bb1,	// (0x0001687c) list_double_graphic_pane_t2_cp2

0x82ae,	// (0x00014f79) list_double_number_pane_g1_cp2_ParamLimits

0x82ae,	// (0x00014f79) list_double_number_pane_g1_cp2

0x82ba,	// (0x00014f85) list_double_number_pane_g2_cp2

0x9b3c,	// (0x00016807) list_double_number_pane_t1_cp2_ParamLimits

0x9b3c,	// (0x00016807) list_double_number_pane_t1_cp2

0x9b50,	// (0x0001681b) list_double_number_pane_t2_cp2_ParamLimits

0x9b50,	// (0x0001681b) list_double_number_pane_t2_cp2

0x9b66,	// (0x00016831) list_double_number_pane_t3_cp2_ParamLimits

0x9b66,	// (0x00016831) list_double_number_pane_t3_cp2

0x9a25,	// (0x000166f0) list_single_graphic_pane_g1_cp2_ParamLimits

0x9a25,	// (0x000166f0) list_single_graphic_pane_g1_cp2

0x8314,	// (0x00014fdf) list_single_graphic_pane_g2_cp2_ParamLimits

0x8314,	// (0x00014fdf) list_single_graphic_pane_g2_cp2

0x8320,	// (0x00014feb) list_single_graphic_pane_g3_cp2

0x99fb,	// (0x000166c6) list_single_graphic_pane_t1_cp2_ParamLimits

0x99fb,	// (0x000166c6) list_single_graphic_pane_t1_cp2

0x8314,	// (0x00014fdf) list_single_number_pane_g1_cp2_ParamLimits

0x8314,	// (0x00014fdf) list_single_number_pane_g1_cp2

0x8320,	// (0x00014feb) list_single_number_pane_g2_cp2

0x99fb,	// (0x000166c6) list_single_number_pane_t1_cp2_ParamLimits

0x99fb,	// (0x000166c6) list_single_number_pane_t1_cp2

0x9a11,	// (0x000166dc) list_single_number_pane_t2_cp2_ParamLimits

0x9a11,	// (0x000166dc) list_single_number_pane_t2_cp2

0x8115,	// (0x00014de0) list_double2_pane_g1_cp2_ParamLimits

0x8115,	// (0x00014de0) list_double2_pane_g1_cp2

0x8126,	// (0x00014df1) list_double2_pane_g2_cp2

0x8286,	// (0x00014f51) list_double2_pane_t1_cp2_ParamLimits

0x8286,	// (0x00014f51) list_double2_pane_t1_cp2

0x829c,	// (0x00014f67) list_double2_pane_t2_cp2_ParamLimits

0x829c,	// (0x00014f67) list_double2_pane_t2_cp2

0x82ae,	// (0x00014f79) list_double_pane_g1_cp2_ParamLimits

0x82ae,	// (0x00014f79) list_double_pane_g1_cp2

0x82ba,	// (0x00014f85) list_double_pane_g2_cp2

0x82c2,	// (0x00014f8d) list_double_pane_t1_cp2_ParamLimits

0x82c2,	// (0x00014f8d) list_double_pane_t1_cp2

0x82d8,	// (0x00014fa3) list_double_pane_t2_cp2_ParamLimits

0x82d8,	// (0x00014fa3) list_double_pane_t2_cp2

0x8304,	// (0x00014fcf) list_single_pane_cp2_g3

0x8314,	// (0x00014fdf) list_single_pane_g1_cp2_ParamLimits

0x8314,	// (0x00014fdf) list_single_pane_g1_cp2

0x8320,	// (0x00014feb) list_single_pane_g2_cp2

0x8328,	// (0x00014ff3) list_single_pane_t1_cp2_ParamLimits

0x8328,	// (0x00014ff3) list_single_pane_t1_cp2

0x8340,	// (0x0001500b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8340,	// (0x0001500b) list_single_large_graphic_pane_g1_cp2

0x834e,	// (0x00015019) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x834e,	// (0x00015019) list_single_large_graphic_pane_g2_cp2

0x835a,	// (0x00015025) list_single_large_graphic_pane_g3_cp2

0x8362,	// (0x0001502d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8362,	// (0x0001502d) list_single_large_graphic_pane_g4_cp1

0x837c,	// (0x00015047) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x837c,	// (0x00015047) list_single_large_graphic_pane_t1_cp2

0x99c5,	// (0x00016690) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x99c5,	// (0x00016690) list_single_graphic_heading_pane_g1_cp2

0x9992,	// (0x0001665d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9992,	// (0x0001665d) list_single_graphic_heading_pane_g4_cp2

0x8320,	// (0x00014feb) list_single_graphic_heading_pane_g5_cp2

0x99d1,	// (0x0001669c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x99d1,	// (0x0001669c) list_single_graphic_heading_pane_t1_cp2

0x99e7,	// (0x000166b2) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x99e7,	// (0x000166b2) list_single_graphic_heading_pane_t2_cp2

0x9986,	// (0x00016651) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9986,	// (0x00016651) list_single_2graphic_pane_g1_cp2

0x9992,	// (0x0001665d) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9992,	// (0x0001665d) list_single_2graphic_pane_g2_cp2

0x8320,	// (0x00014feb) list_single_2graphic_pane_g3_cp2

0x99a3,	// (0x0001666e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x99a3,	// (0x0001666e) list_single_2graphic_pane_g4_cp2

0x99af,	// (0x0001667a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x99af,	// (0x0001667a) list_single_2graphic_pane_t1_cp2

0x34b1,	// (0x0001017c) list_highlight_pane_g10_cp1

0x955e,	// (0x00016229) list_highlight_pane_g1_cp1

0x9566,	// (0x00016231) list_highlight_pane_g2_cp1

0x956e,	// (0x00016239) list_highlight_pane_g3_cp1

0x9576,	// (0x00016241) list_highlight_pane_g4_cp1

0x957e,	// (0x00016249) list_highlight_pane_g5_cp1

0x9586,	// (0x00016251) list_highlight_pane_g6_cp1

0x958e,	// (0x00016259) list_highlight_pane_g7_cp1

0x9596,	// (0x00016261) list_highlight_pane_g8_cp1

0x959e,	// (0x00016269) list_highlight_pane_g9_cp1

0x947e,	// (0x00016149) form_field_slider_pane_t3

0x948c,	// (0x00016157) form_field_slider_pane_t4

0x949a,	// (0x00016165) slider_form_pane_ParamLimits

0x949a,	// (0x00016165) slider_form_pane

0x362a,	// (0x000102f5) control_abbreviations

0x362a,	// (0x000102f5) control_conventions

0x362a,	// (0x000102f5) control_definitions

0x362a,	// (0x000102f5) format_table_attribute

0x9c8c,	// (0x00016957) bg_popup_preview_window_pane_g9

0x362a,	// (0x000102f5) format_table_data2

0x362a,	// (0x000102f5) format_table_data3

0x362a,	// (0x000102f5) format_table_data_example

0x0008,

0x362a,	// (0x000102f5) intro_purpose

0xf8f0,	// (0x0001c5bb) bg_popup_preview_window_pane_g

0x362a,	// (0x000102f5) texts_category

0x362a,	// (0x000102f5) texts_graphics

0x8392,	// (0x0001505d) text_digital

0x83a1,	// (0x0001506c) text_primary

0x83b0,	// (0x0001507b) text_primary_small

0x83bf,	// (0x0001508a) text_secondary

0x83ce,	// (0x00015099) text_title

0xa4a5,	// (0x00017170) bg_passive_tab_pane_g1_cp3_srt

0x8026,	// (0x00014cf1) bg_passive_tab_pane_g2_cp3_srt

0xa4ae,	// (0x00017179) bg_passive_tab_pane_g3_cp3_srt

0x3751,	// (0x0001041c) bg_active_tab_pane_cp3_srt_ParamLimits

0x3751,	// (0x0001041c) bg_active_tab_pane_cp3_srt

0xa4b7,	// (0x00017182) tabs_4_active_pane_srt_g1

0xa4bf,	// (0x0001718a) tabs_4_active_pane_srt_t1_ParamLimits

0xa4bf,	// (0x0001718a) tabs_4_active_pane_srt_t1

0xa4a5,	// (0x00017170) bg_active_tab_pane_g1_cp3_copy1

0x8026,	// (0x00014cf1) bg_active_tab_pane_g2_cp3_copy1

0xa4ae,	// (0x00017179) bg_active_tab_pane_g3_cp3_copy1

0x3751,	// (0x0001041c) tabs_2_long_active_pane_srt_ParamLimits

0x3751,	// (0x0001041c) tabs_2_long_active_pane_srt

0x3751,	// (0x0001041c) tabs_2_long_passive_pane_srt_ParamLimits

0x3751,	// (0x0001041c) tabs_2_long_passive_pane_srt

0x7c26,	// (0x000148f1) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7c26,	// (0x000148f1) bg_passive_tab_pane_cp4_srt

0xa104,	// (0x00016dcf) bg_passive_tab_pane_g1_cp4_srt

0x8026,	// (0x00014cf1) bg_passive_tab_pane_g2_cp4_srt

0xa10d,	// (0x00016dd8) bg_passive_tab_pane_g3_cp4_srt

0x40bd,	// (0x00010d88) bg_active_tab_pane_cp4_srt_ParamLimits

0x40bd,	// (0x00010d88) bg_active_tab_pane_cp4_srt

0xa116,	// (0x00016de1) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa116,	// (0x00016de1) tabs_2_long_active_pane_srt_t1

0xa104,	// (0x00016dcf) bg_active_tab_pane_g1_cp4_srt

0x8026,	// (0x00014cf1) bg_active_tab_pane_g2_cp4_srt

0xa10d,	// (0x00016dd8) bg_active_tab_pane_g3_cp4_srt

0x3739,	// (0x00010404) tabs_3_long_active_pane_srt_ParamLimits

0x3739,	// (0x00010404) tabs_3_long_active_pane_srt

0x3739,	// (0x00010404) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3739,	// (0x00010404) tabs_3_long_passive_pane_cp_srt

0x3739,	// (0x00010404) tabs_3_long_passive_pane_srt_ParamLimits

0x3739,	// (0x00010404) tabs_3_long_passive_pane_srt

0x7c26,	// (0x000148f1) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7c26,	// (0x000148f1) bg_passive_tab_pane_cp5_srt

0x80b0,	// (0x00014d7b) bg_passive_tab_pane_g1_cp5_srt

0x8026,	// (0x00014cf1) bg_passive_tab_pane_g2_cp5_srt

0x80b9,	// (0x00014d84) bg_passive_tab_pane_g3_cp5_srt

0x40bd,	// (0x00010d88) bg_active_tab_pane_cp5_srt_ParamLimits

0x40bd,	// (0x00010d88) bg_active_tab_pane_cp5_srt

0xa0f2,	// (0x00016dbd) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa0f2,	// (0x00016dbd) tabs_3_long_active_pane_srt_t1

0x80b0,	// (0x00014d7b) bg_active_tab_pane_g1_cp5_srt

0x8026,	// (0x00014cf1) bg_active_tab_pane_g2_cp5_srt

0x80b9,	// (0x00014d84) bg_active_tab_pane_g3_cp5_srt

0xa0e4,	// (0x00016daf) navi_text_pane_srt_t1

0xa0dc,	// (0x00016da7) navi_icon_pane_srt_g1

0x8599,	// (0x00015264) midp_editing_number_pane_srt

0x83dd,	// (0x000150a8) midp_ticker_pane_srt

0x85a1,	// (0x0001526c) midp_ticker_pane_srt_g1

0x85a9,	// (0x00015274) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x0001c43e) midp_ticker_pane_srt_g

0x85b1,	// (0x0001527c) midp_ticker_pane_srt_t1

0xa0cd,	// (0x00016d98) midp_editing_number_pane_t1_copy1

0x7c26,	// (0x000148f1) listscroll_midp_pane

0x7c26,	// (0x000148f1) midp_form_pane

0x8447,	// (0x00015112) midp_info_popup_window_ParamLimits

0x8447,	// (0x00015112) midp_info_popup_window

0x3feb,	// (0x00010cb6) bg_popup_sub_pane_cp50_ParamLimits

0x3feb,	// (0x00010cb6) bg_popup_sub_pane_cp50

0x9194,	// (0x00015e5f) listscroll_midp_info_pane_ParamLimits

0x9194,	// (0x00015e5f) listscroll_midp_info_pane

0x917c,	// (0x00015e47) listscroll_form_midp_pane_ParamLimits

0x917c,	// (0x00015e47) listscroll_form_midp_pane

0x9188,	// (0x00015e53) scroll_bar_cp050

0x915c,	// (0x00015e27) list_midp_pane

0xb1b9,	// (0x00017e84) signal_pane_g2_cp

0x9096,	// (0x00015d61) listscroll_midp_info_pane_t1_ParamLimits

0x9096,	// (0x00015d61) listscroll_midp_info_pane_t1

0x90ae,	// (0x00015d79) listscroll_midp_info_pane_t2_ParamLimits

0x90ae,	// (0x00015d79) listscroll_midp_info_pane_t2

0x90ec,	// (0x00015db7) listscroll_midp_info_pane_t3_ParamLimits

0x90ec,	// (0x00015db7) listscroll_midp_info_pane_t3

0x9126,	// (0x00015df1) listscroll_midp_info_pane_t4_ParamLimits

0x9126,	// (0x00015df1) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x0001c4f6) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x0001c4f6) listscroll_midp_info_pane_t

0x406b,	// (0x00010d36) scroll_pane_cp21

0x9030,	// (0x00015cfb) form_midp_field_choice_group_pane

0x9039,	// (0x00015d04) form_midp_field_text_pane

0x907c,	// (0x00015d47) form_midp_field_time_pane

0x9084,	// (0x00015d4f) form_midp_gauge_slider_pane

0x908d,	// (0x00015d58) form_midp_gauge_wait_pane

0x362a,	// (0x000102f5) form_midp_image_pane

0x9010,	// (0x00015cdb) list_single_midp_pane_ParamLimits

0x9010,	// (0x00015cdb) list_single_midp_pane

0x8fd4,	// (0x00015c9f) form_midp_field_text_pane_t1

0x8db1,	// (0x00015a7c) input_focus_pane_cp050

0x8fff,	// (0x00015cca) list_midp_form_text_pane

0x8fa3,	// (0x00015c6e) form_midp_field_choice_group_pane_t1

0x8fb1,	// (0x00015c7c) input_focus_pane_cp051

0x8fc5,	// (0x00015c90) list_midp_choice_pane

0x362a,	// (0x000102f5) status_idle_pane

0x8f87,	// (0x00015c52) form_midp_field_time_pane_t1

0x34b1,	// (0x0001017c) wait_anim_pane_g2_copy1

0x8f95,	// (0x00015c60) form_midp_field_time_pane_t2

0x0001,

0x84f7,	// (0x000151c2) aid_navinavi_width_2_pane

0xf826,	// (0x0001c4f1) form_midp_field_time_pane_t

0x362a,	// (0x000102f5) input_focus_pane_cp052

0x362a,	// (0x000102f5) bg_input_focus_pane_cp040

0x8f47,	// (0x00015c12) form_midp_gauge_slider_pane_t1

0x8f55,	// (0x00015c20) form_midp_gauge_slider_pane_t2

0x8f63,	// (0x00015c2e) form_midp_gauge_slider_pane_t3

0x8f71,	// (0x00015c3c) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x0001c4e8) form_midp_gauge_slider_pane_t

0x8f7f,	// (0x00015c4a) form_midp_slider_pane

0x3751,	// (0x0001041c) bg_input_focus_pane_cp041_ParamLimits

0x3751,	// (0x0001041c) bg_input_focus_pane_cp041

0x8f14,	// (0x00015bdf) form_midp_gauge_wait_pane_t1_ParamLimits

0x8f14,	// (0x00015bdf) form_midp_gauge_wait_pane_t1

0x8f26,	// (0x00015bf1) form_midp_gauge_wait_pane_t2_ParamLimits

0x8f26,	// (0x00015bf1) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x0001c4e3) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x0001c4e3) form_midp_gauge_wait_pane_t

0x8f38,	// (0x00015c03) form_midp_wait_pane_ParamLimits

0x8f38,	// (0x00015c03) form_midp_wait_pane

0x8edc,	// (0x00015ba7) form_midp_image_pane_g1

0x8ee5,	// (0x00015bb0) form_midp_image_pane_t1

0x8ef4,	// (0x00015bbf) form_midp_image_pane_t2

0x8f03,	// (0x00015bce) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x0001c4dc) form_midp_image_pane_t

0x8ec4,	// (0x00015b8f) list_single_midp_pane_g1

0x8ecd,	// (0x00015b98) list_single_midp_pane_t1

0x8eaa,	// (0x00015b75) list_midp_form_item_pane_ParamLimits

0x8eaa,	// (0x00015b75) list_midp_form_item_pane

0x849f,	// (0x0001516a) list_midp_form_item_pane_t1

0x84ae,	// (0x00015179) midp_ticker_pane_g1

0x84ba,	// (0x00015185) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0001c424) midp_ticker_pane_g

0x84c6,	// (0x00015191) midp_ticker_pane_t1

0xa375,	// (0x00017040) midp_editing_number_pane_t1

0xa353,	// (0x0001701e) midp_editing_number_pane

0xa362,	// (0x0001702d) midp_ticker_pane

0xa095,	// (0x00016d60) ai_message_heading_pane

0x362a,	// (0x000102f5) bg_popup_window_pane_cp14

0xa09d,	// (0x00016d68) listscroll_ai_message_pane

0xa01b,	// (0x00016ce6) ai_message_heading_pane_g1_ParamLimits

0xa01b,	// (0x00016ce6) ai_message_heading_pane_g1

0xa027,	// (0x00016cf2) ai_message_heading_pane_g2_ParamLimits

0xa027,	// (0x00016cf2) ai_message_heading_pane_g2

0xa035,	// (0x00016d00) ai_message_heading_pane_g3_ParamLimits

0xa035,	// (0x00016d00) ai_message_heading_pane_g3

0xa041,	// (0x00016d0c) ai_message_heading_pane_g4_ParamLimits

0xa041,	// (0x00016d0c) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x0001c61d) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x0001c61d) ai_message_heading_pane_g

0xa04d,	// (0x00016d18) ai_message_heading_pane_t1_ParamLimits

0xa04d,	// (0x00016d18) ai_message_heading_pane_t1

0xa067,	// (0x00016d32) ai_message_heading_pane_t2_ParamLimits

0xa067,	// (0x00016d32) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x0001c626) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x0001c626) ai_message_heading_pane_t

0xa07b,	// (0x00016d46) bg_popup_heading_pane_cp1_ParamLimits

0xa07b,	// (0x00016d46) bg_popup_heading_pane_cp1

0xa009,	// (0x00016cd4) list_ai_message_pane_ParamLimits

0xa009,	// (0x00016cd4) list_ai_message_pane

0x406b,	// (0x00010d36) scroll_pane_cp10

0x9fa5,	// (0x00016c70) list_ai_message_pane_g1

0x9fad,	// (0x00016c78) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x0001c5fa) list_ai_message_pane_g

0x9fb5,	// (0x00016c80) list_ai_message_pane_t1_ParamLimits

0x9fb5,	// (0x00016c80) list_ai_message_pane_t1

0x9fca,	// (0x00016c95) list_ai_message_pane_t2_ParamLimits

0x9fca,	// (0x00016c95) list_ai_message_pane_t2

0x9fdf,	// (0x00016caa) list_ai_message_pane_t3_ParamLimits

0x9fdf,	// (0x00016caa) list_ai_message_pane_t3

0x9ff4,	// (0x00016cbf) list_ai_message_pane_t4_ParamLimits

0x9ff4,	// (0x00016cbf) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x0001c5ff) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x0001c5ff) list_ai_message_pane_t

0x9f8e,	// (0x00016c59) cell_ai_soft_ind_pane_ParamLimits

0x9f8e,	// (0x00016c59) cell_ai_soft_ind_pane

0x84d8,	// (0x000151a3) cell_ai_soft_ind_pane_g1_ParamLimits

0x84d8,	// (0x000151a3) cell_ai_soft_ind_pane_g1

0x362a,	// (0x000102f5) grid_highlight_cp1

0x84e5,	// (0x000151b0) text_secondary_cp56_ParamLimits

0x84e5,	// (0x000151b0) text_secondary_cp56

0x9f63,	// (0x00016c2e) example_general_pane_ParamLimits

0x9f63,	// (0x00016c2e) example_general_pane

0x9f6f,	// (0x00016c3a) example_parent_pane_g1_ParamLimits

0x9f6f,	// (0x00016c3a) example_parent_pane_g1

0x9f7b,	// (0x00016c46) example_parent_pane_t1_ParamLimits

0x9f7b,	// (0x00016c46) example_parent_pane_t1

0x5df1,	// (0x00012abc) popup_preview_text_window_ParamLimits

0x5df1,	// (0x00012abc) popup_preview_text_window

0x830c,	// (0x00014fd7) list_single_pane_cp2_g4

0x39cf,	// (0x0001069a) bg_popup_preview_window_pane_ParamLimits

0x39cf,	// (0x0001069a) bg_popup_preview_window_pane

0x9c96,	// (0x00016961) popup_preview_text_window_t1_ParamLimits

0x9c96,	// (0x00016961) popup_preview_text_window_t1

0x9cb4,	// (0x0001697f) popup_preview_text_window_t2_ParamLimits

0x9cb4,	// (0x0001697f) popup_preview_text_window_t2

0x9cfd,	// (0x000169c8) popup_preview_text_window_t3_ParamLimits

0x9cfd,	// (0x000169c8) popup_preview_text_window_t3

0x9d42,	// (0x00016a0d) popup_preview_text_window_t4_ParamLimits

0x9d42,	// (0x00016a0d) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x0001c5ce) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x0001c5ce) popup_preview_text_window_t

0x9dc0,	// (0x00016a8b) scroll_pane_cp11

0x8c8b,	// (0x00015956) bg_popup_preview_window_pane_g1

0x9c4a,	// (0x00016915) bg_popup_preview_window_pane_g2

0x9c54,	// (0x0001691f) bg_popup_preview_window_pane_g3

0x9c5e,	// (0x00016929) bg_popup_preview_window_pane_g4

0x9c68,	// (0x00016933) bg_popup_preview_window_pane_g5

0x9c72,	// (0x0001693d) bg_popup_preview_window_pane_g6

0x9c7a,	// (0x00016945) bg_popup_preview_window_pane_g7

0x9c82,	// (0x0001694d) bg_popup_preview_window_pane_g8

0x4f9e,	// (0x00011c69) aid_popup_width_pane

0x5dcd,	// (0x00012a98) popup_midp_note_alarm_window_ParamLimits

0x5dcd,	// (0x00012a98) popup_midp_note_alarm_window

0x3e9b,	// (0x00010b66) data_form_pane_ParamLimits

0x7ab5,	// (0x00014780) form_field_data_pane_g1

0x7abf,	// (0x0001478a) form_field_data_pane_t1_ParamLimits

0x3ea7,	// (0x00010b72) input_focus_pane_ParamLimits

0x3eb5,	// (0x00010b80) data_form_wide_pane_ParamLimits

0x3ec1,	// (0x00010b8c) form_field_data_wide_pane_g1

0x3eed,	// (0x00010bb8) form_field_data_wide_pane_t1_ParamLimits

0x3b84,	// (0x0001084f) input_focus_pane_cp6_ParamLimits

0x7beb,	// (0x000148b6) input_popup_find_pane_g1_ParamLimits

0x7beb,	// (0x000148b6) input_popup_find_pane_g1

0x5526,	// (0x000121f1) aid_navi_side_left_pane

0x553b,	// (0x00012206) aid_navi_side_right_pane

0x9659,	// (0x00016324) bg_popup_window_pane_cp30_ParamLimits

0x9659,	// (0x00016324) bg_popup_window_pane_cp30

0x96d3,	// (0x0001639e) popup_midp_note_alarm_window_g1_ParamLimits

0x96d3,	// (0x0001639e) popup_midp_note_alarm_window_g1

0x9703,	// (0x000163ce) popup_midp_note_alarm_window_t1_ParamLimits

0x9703,	// (0x000163ce) popup_midp_note_alarm_window_t1

0x97a4,	// (0x0001646f) popup_midp_note_alarm_window_t2_ParamLimits

0x97a4,	// (0x0001646f) popup_midp_note_alarm_window_t2

0x9852,	// (0x0001651d) popup_midp_note_alarm_window_t3_ParamLimits

0x9852,	// (0x0001651d) popup_midp_note_alarm_window_t3

0x9884,	// (0x0001654f) popup_midp_note_alarm_window_t4_ParamLimits

0x9884,	// (0x0001654f) popup_midp_note_alarm_window_t4

0x98aa,	// (0x00016575) popup_midp_note_alarm_window_t5_ParamLimits

0x98aa,	// (0x00016575) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x0001c56b) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x0001c56b) popup_midp_note_alarm_window_t

0x9956,	// (0x00016621) wait_bar_pane_cp1_ParamLimits

0x9956,	// (0x00016621) wait_bar_pane_cp1

0x362a,	// (0x000102f5) wait_anim_pane_copy1

0x362a,	// (0x000102f5) wait_border_pane_copy1

0x933e,	// (0x00016009) wait_border_pane_g1_copy1

0x3f07,	// (0x00010bd2) form_field_popup_pane_g1

0x7ad9,	// (0x000147a4) form_field_popup_pane_t1_ParamLimits

0x3ea7,	// (0x00010b72) input_focus_pane_cp7_ParamLimits

0x3f0f,	// (0x00010bda) list_form_pane_ParamLimits

0x3f1b,	// (0x00010be6) form_field_popup_wide_pane_g1

0x3f23,	// (0x00010bee) form_field_popup_wide_pane_t1_ParamLimits

0x3ea7,	// (0x00010b72) input_focus_pane_cp8_ParamLimits

0x3f38,	// (0x00010c03) list_form_wide_pane_ParamLimits

0xa532,	// (0x000171fd) aid_size_cell_graphic_pane

0x7b51,	// (0x0001481c) data_form_pane_t1_ParamLimits

0xa31e,	// (0x00016fe9) data_form_wide_pane_t1_ParamLimits

0x880a,	// (0x000154d5) bg_status_flat_pane

0x7310,	// (0x00013fdb) title_pane_t1_ParamLimits

0x3701,	// (0x000103cc) title_pane_t2_ParamLimits

0x3727,	// (0x000103f2) title_pane_t3_ParamLimits

0xf55d,	// (0x0001c228) title_pane_t_ParamLimits

0x7ccd,	// (0x00014998) level_1_signal_ParamLimits

0x7cda,	// (0x000149a5) level_2_signal_ParamLimits

0x7ce7,	// (0x000149b2) level_3_signal_ParamLimits

0x7cf4,	// (0x000149bf) level_4_signal_ParamLimits

0x7d01,	// (0x000149cc) level_5_signal_ParamLimits

0x7d0e,	// (0x000149d9) level_6_signal_ParamLimits

0x7d1b,	// (0x000149e6) level_7_signal_ParamLimits

0x7ccd,	// (0x00014998) level_1_battery_ParamLimits

0x7cda,	// (0x000149a5) level_2_battery_ParamLimits

0x7ce7,	// (0x000149b2) level_3_battery_ParamLimits

0x7cf4,	// (0x000149bf) level_4_battery_ParamLimits

0x7d01,	// (0x000149cc) level_5_battery_ParamLimits

0x7d0e,	// (0x000149d9) level_6_battery_ParamLimits

0x7d1b,	// (0x000149e6) level_7_battery_ParamLimits

0x955e,	// (0x00016229) bg_status_flat_pane_g1

0x9566,	// (0x00016231) bg_status_flat_pane_g2

0x956e,	// (0x00016239) bg_status_flat_pane_g3

0x9576,	// (0x00016241) bg_status_flat_pane_g4

0x957e,	// (0x00016249) bg_status_flat_pane_g5

0x9586,	// (0x00016251) bg_status_flat_pane_g6

0x958e,	// (0x00016259) bg_status_flat_pane_g7

0x7380,	// (0x0001404b) tabs_3_active_pane_t1_ParamLimits

0x7380,	// (0x0001404b) tabs_3_passive_pane_t1_ParamLimits

0x739a,	// (0x00014065) tabs_4_active_pane_t1_ParamLimits

0x739a,	// (0x00014065) tabs_4_1_passive_pane_t1_ParamLimits

0x7c01,	// (0x000148cc) tabs_2_active_pane_t1_ParamLimits

0x7c01,	// (0x000148cc) tabs_2_passive_pane_t1_ParamLimits

0x40bd,	// (0x00010d88) bg_active_tab_pane_cp4_ParamLimits

0x7c13,	// (0x000148de) tabs_2_long_active_pane_t1_ParamLimits

0x7c26,	// (0x000148f1) bg_passive_tab_pane_cp4_ParamLimits

0x6155,	// (0x00012e20) list_single_midp_graphic_pane_t1_ParamLimits

0x40bd,	// (0x00010d88) bg_active_tab_pane_cp5_ParamLimits

0x7c32,	// (0x000148fd) tabs_3_long_active_pane_t1_ParamLimits

0x7c26,	// (0x000148f1) bg_passive_tab_pane_cp5_ParamLimits

0x6155,	// (0x00012e20) list_single_midp_graphic_pane_t1

0x880a,	// (0x000154d5) bg_status_flat_pane_ParamLimits

0x88d5,	// (0x000155a0) indicator_pane_cp2_ParamLimits

0x88d5,	// (0x000155a0) indicator_pane_cp2

0x8a18,	// (0x000156e3) navi_pane_srt_ParamLimits

0x8a18,	// (0x000156e3) navi_pane_srt

0x8a3c,	// (0x00015707) popup_clock_digital_analogue_window_cp1

0x3838,	// (0x00010503) indicator_pane_t1

0x83dd,	// (0x000150a8) copy_highlight_pane

0x83dd,	// (0x000150a8) cursor_graphics_pane

0x83dd,	// (0x000150a8) graphic_within_text_pane

0x83dd,	// (0x000150a8) link_highlight_pane

0x9d83,	// (0x00016a4e) popup_preview_text_window_t5_ParamLimits

0x9d83,	// (0x00016a4e) popup_preview_text_window_t5

0x8501,	// (0x000151cc) cursor_digital_pane

0x8501,	// (0x000151cc) cursor_primary_pane

0x8512,	// (0x000151dd) cursor_primary_small_pane

0x851a,	// (0x000151e5) cursor_secondary_pane

0x8522,	// (0x000151ed) cursor_title_pane

0x8501,	// (0x000151cc) link_highlight_digital_pane

0x8509,	// (0x000151d4) link_highlight_primary_pane

0x8512,	// (0x000151dd) link_highlight_primary_small_pane

0x851a,	// (0x000151e5) link_highlight_secondary_pane

0x8522,	// (0x000151ed) link_highlight_title_pane

0x8501,	// (0x000151cc) copy_highlight_digital_pane

0x8501,	// (0x000151cc) copy_highlight_primary_pane

0x8512,	// (0x000151dd) copy_highlight_primary_small_pane

0x851a,	// (0x000151e5) copy_highlight_secondary_pane

0x8522,	// (0x000151ed) copy_highlight_title_pane

0x851a,	// (0x000151e5) graphic_text_digital_pane

0x95fc,	// (0x000162c7) graphic_text_primary_pane

0x9605,	// (0x000162d0) graphic_text_primary_small_pane

0x8512,	// (0x000151dd) graphic_text_secondary_pane

0x8501,	// (0x000151cc) graphic_text_title_pane

0x852a,	// (0x000151f5) cursor_primary_pane_g1

0x95ee,	// (0x000162b9) cursor_text_primary_t1

0x95d6,	// (0x000162a1) cursor_primary_small_pane_g1

0x95e0,	// (0x000162ab) cursor_text_primary_small_t1

0x95be,	// (0x00016289) cursor_primary_small_pane_g1_copy1

0x95c8,	// (0x00016293) cursor_text_primary_small_t1_copy1

0x95a6,	// (0x00016271) cursor_text_title_t1

0x95b4,	// (0x0001627f) cursor_title_pane_g1

0x852a,	// (0x000151f5) cursor_digital_pane_g1

0x8534,	// (0x000151ff) cursor_text_digital_t1

0x8542,	// (0x0001520d) link_highlight_primary_pane_g1

0x954f,	// (0x0001621a) link_highlight_primary_pane_t1

0x8542,	// (0x0001520d) link_highlight_primary_small_pane_g1

0x854a,	// (0x00015215) link_highlight_primary_small_pane_t1

0x8559,	// (0x00015224) link_highlight_secondary_pane_g1

0x8561,	// (0x0001522c) link_highlight_secondary_pane_t1

0x94c3,	// (0x0001618e) link_highlight_title_pane_g1

0x94cb,	// (0x00016196) link_highlight_title_pane_t1

0x94ac,	// (0x00016177) link_highlight_digital_pane_g1

0x94b4,	// (0x0001617f) link_highlight_digital_pane_t1

0x9374,	// (0x0001603f) copy_highlight_primary_pane_g1

0x938b,	// (0x00016056) copy_highlight_primary_pane_t1

0x9374,	// (0x0001603f) copy_highlight_primary_small_pane_g1

0x937c,	// (0x00016047) copy_highlight_primary_small_pane_t1

0x8570,	// (0x0001523b) copy_highlight_secondary_pane_g1

0x8578,	// (0x00015243) copy_highlight_secondary_pane_t1

0x935d,	// (0x00016028) copy_highlight_title_pane_g1

0x9365,	// (0x00016030) copy_highlight_title_pane_t1

0x9374,	// (0x0001603f) copy_highlight_digital_pane_g1

0xa702,	// (0x000173cd) copy_highlight_digital_pane_t1

0xa656,	// (0x00017321) graphic_text_primary_pane_g1

0xa6e6,	// (0x000173b1) graphic_text_primary_pane_t1

0xa6f4,	// (0x000173bf) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x0001c69a) graphic_text_primary_pane_t

0xa6c2,	// (0x0001738d) graphic_text_primary_small_pane_g1

0xa6ca,	// (0x00017395) graphic_text_primary_small_pane_t1

0xa6d8,	// (0x000173a3) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x0001c695) graphic_text_primary_small_pane_t

0xa69e,	// (0x00017369) graphic_text_secondary_pane_g1

0xa6a6,	// (0x00017371) graphic_text_secondary_pane_t1

0xa6b4,	// (0x0001737f) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x0001c690) graphic_text_secondary_pane_t

0xa67a,	// (0x00017345) graphic_text_title_pane_g1

0xa682,	// (0x0001734d) graphic_text_title_pane_t1

0xa690,	// (0x0001735b) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x0001c68b) graphic_text_title_pane_t

0xa656,	// (0x00017321) graphic_text_digital_pane_g1

0xa65e,	// (0x00017329) graphic_text_digital_pane_t1

0xa66c,	// (0x00017337) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x0001c686) graphic_text_digital_pane_t

0x3751,	// (0x0001041c) navi_icon_pane_srt_ParamLimits

0x3751,	// (0x0001041c) navi_icon_pane_srt

0x362a,	// (0x000102f5) navi_midp_pane_srt

0x362a,	// (0x000102f5) navi_navi_pane_srt

0x3751,	// (0x0001041c) navi_text_pane_srt_ParamLimits

0x3751,	// (0x0001041c) navi_text_pane_srt

0xa621,	// (0x000172ec) navi_navi_icon_text_pane_srt

0xa629,	// (0x000172f4) navi_navi_pane_srt_g1_ParamLimits

0xa629,	// (0x000172f4) navi_navi_pane_srt_g1

0xa63b,	// (0x00017306) navi_navi_pane_srt_g2_ParamLimits

0xa63b,	// (0x00017306) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x0001c681) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x0001c681) navi_navi_pane_srt_g

0xa64d,	// (0x00017318) navi_navi_tabs_pane_srt

0xa621,	// (0x000172ec) navi_navi_text_pane_srt

0xa621,	// (0x000172ec) navi_navi_volume_pane_srt

0xa612,	// (0x000172dd) navi_navi_text_pane_srt_t1

0x64f1,	// (0x000131bc) navi_navi_volume_pane_srt_g1

0x64f9,	// (0x000131c4) volume_small_pane_srt_ParamLimits

0x64f9,	// (0x000131c4) volume_small_pane_srt

0x580d,	// (0x000124d8) volume_small_pane_srt_g1_ParamLimits

0x580d,	// (0x000124d8) volume_small_pane_srt_g1

0x581d,	// (0x000124e8) volume_small_pane_srt_g2_ParamLimits

0x581d,	// (0x000124e8) volume_small_pane_srt_g2

0x582e,	// (0x000124f9) volume_small_pane_srt_g3_ParamLimits

0x582e,	// (0x000124f9) volume_small_pane_srt_g3

0x583f,	// (0x0001250a) volume_small_pane_srt_g4_ParamLimits

0x583f,	// (0x0001250a) volume_small_pane_srt_g4

0x5850,	// (0x0001251b) volume_small_pane_srt_g5_ParamLimits

0x5850,	// (0x0001251b) volume_small_pane_srt_g5

0x5861,	// (0x0001252c) volume_small_pane_srt_g6_ParamLimits

0x5861,	// (0x0001252c) volume_small_pane_srt_g6

0x5872,	// (0x0001253d) volume_small_pane_srt_g7_ParamLimits

0x5872,	// (0x0001253d) volume_small_pane_srt_g7

0x5883,	// (0x0001254e) volume_small_pane_srt_g8_ParamLimits

0x5883,	// (0x0001254e) volume_small_pane_srt_g8

0x5894,	// (0x0001255f) volume_small_pane_srt_g9_ParamLimits

0x5894,	// (0x0001255f) volume_small_pane_srt_g9

0x58a5,	// (0x00012570) volume_small_pane_srt_g10_ParamLimits

0x58a5,	// (0x00012570) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0001c429) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0001c429) volume_small_pane_srt_g

0x3a84,	// (0x0001074f) query_popup_data_pane_cp2

0xa5f8,	// (0x000172c3) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa5f8,	// (0x000172c3) navi_navi_icon_text_pane_srt_t1

0x95fc,	// (0x000162c7) navi_tabs_2_long_pane_srt

0x95fc,	// (0x000162c7) navi_tabs_2_pane_srt

0x95fc,	// (0x000162c7) navi_tabs_3_long_pane_srt

0x95fc,	// (0x000162c7) navi_tabs_3_pane_srt

0x95fc,	// (0x000162c7) navi_tabs_4_pane_srt

0x64d1,	// (0x0001319c) tabs_2_active_pane_srt_ParamLimits

0x64d1,	// (0x0001319c) tabs_2_active_pane_srt

0x64e1,	// (0x000131ac) tabs_2_passive_pane_srt_ParamLimits

0x64e1,	// (0x000131ac) tabs_2_passive_pane_srt

0x8729,	// (0x000153f4) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8729,	// (0x000153f4) bg_passive_tab_pane_cp1_srt

0xa5c4,	// (0x0001728f) bg_passive_tab_pane_g1_cp1_srt

0x8026,	// (0x00014cf1) bg_passive_tab_pane_g2_cp1_srt

0xa5cd,	// (0x00017298) bg_passive_tab_pane_g3_cp1_srt

0x3751,	// (0x0001041c) bg_active_tab_pane_cp1_srt_ParamLimits

0x3751,	// (0x0001041c) bg_active_tab_pane_cp1_srt

0xa5d6,	// (0x000172a1) tabs_2_active_pane_srt_g1

0xa5de,	// (0x000172a9) tabs_2_active_pane_srt_t1_ParamLimits

0xa5de,	// (0x000172a9) tabs_2_active_pane_srt_t1

0xa5c4,	// (0x0001728f) bg_active_tab_pane_g1_cp1_srt

0x8026,	// (0x00014cf1) bg_active_tab_pane_g2_cp1_srt

0xa5cd,	// (0x00017298) bg_active_tab_pane_g3_cp1_srt

0x649e,	// (0x00013169) tabs_3_active_pane_srt_ParamLimits

0x649e,	// (0x00013169) tabs_3_active_pane_srt

0x64af,	// (0x0001317a) tabs_3_passive_pane_cp_srt_ParamLimits

0x64af,	// (0x0001317a) tabs_3_passive_pane_cp_srt

0x64c0,	// (0x0001318b) tabs_3_passive_pane_srt_ParamLimits

0x64c0,	// (0x0001318b) tabs_3_passive_pane_srt

0x8729,	// (0x000153f4) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8729,	// (0x000153f4) bg_passive_tab_pane_cp2_srt

0x8587,	// (0x00015252) bg_passive_tab_pane_g1_cp2_srt

0x8026,	// (0x00014cf1) bg_passive_tab_pane_g2_cp2_srt

0x8590,	// (0x0001525b) bg_passive_tab_pane_g3_cp2_srt

0x3751,	// (0x0001041c) bg_active_tab_pane_cp2_srt_ParamLimits

0x3751,	// (0x0001041c) bg_active_tab_pane_cp2_srt

0xa5aa,	// (0x00017275) tabs_3_active_pane_srt_g1

0xa5b2,	// (0x0001727d) tabs_3_active_pane_srt_t1_ParamLimits

0xa5b2,	// (0x0001727d) tabs_3_active_pane_srt_t1

0x8587,	// (0x00015252) bg_active_tab_pane_g1_cp2_srt

0x8026,	// (0x00014cf1) bg_active_tab_pane_g2_cp2_srt

0x8590,	// (0x0001525b) bg_active_tab_pane_g3_cp2_srt

0x6456,	// (0x00013121) tabs_4_active_pane_srt_ParamLimits

0x6456,	// (0x00013121) tabs_4_active_pane_srt

0x6468,	// (0x00013133) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6468,	// (0x00013133) tabs_4_passive_pane_cp2_srt

0x5a0a,	// (0x000126d5) aid_size_cell_toolbar

0x7c26,	// (0x000148f1) main_idle_act_pane_ParamLimits

0x5bf3,	// (0x000128be) popup_large_graphic_colour_window_ParamLimits

0x5f9a,	// (0x00012c65) popup_toolbar_window_ParamLimits

0x5f9a,	// (0x00012c65) popup_toolbar_window

0xa398,	// (0x00017063) list_single_graphic_2heading_pane_ParamLimits

0xa398,	// (0x00017063) list_single_graphic_2heading_pane

0x43df,	// (0x000110aa) aid_size_cell_apps_grid_lsc_pane

0x43f1,	// (0x000110bc) aid_size_cell_apps_grid_prt_pane

0x8729,	// (0x000153f4) bg_wml_button_pane_cp1_ParamLimits

0x8729,	// (0x000153f4) bg_wml_button_pane_cp1

0x8fd4,	// (0x00015c9f) form_midp_field_text_pane_t1_ParamLimits

0x8db1,	// (0x00015a7c) input_focus_pane_cp050_ParamLimits

0x8fff,	// (0x00015cca) list_midp_form_text_pane_ParamLimits

0x8fb1,	// (0x00015c7c) input_focus_pane_cp051_ParamLimits

0x8fc5,	// (0x00015c90) list_midp_choice_pane_ParamLimits

0x8e6a,	// (0x00015b35) list_single_2graphic_pane_cp3_ParamLimits

0x8e6a,	// (0x00015b35) list_single_2graphic_pane_cp3

0x8e83,	// (0x00015b4e) list_single_midp_graphic_pane_ParamLimits

0x8e83,	// (0x00015b4e) list_single_midp_graphic_pane

0x6059,	// (0x00012d24) list_single_graphic_2heading_pane_g1_ParamLimits

0x6059,	// (0x00012d24) list_single_graphic_2heading_pane_g1

0x6065,	// (0x00012d30) list_single_graphic_2heading_pane_g4_ParamLimits

0x6065,	// (0x00012d30) list_single_graphic_2heading_pane_g4

0x6071,	// (0x00012d3c) list_single_graphic_2heading_pane_g5_ParamLimits

0x6071,	// (0x00012d3c) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0001c47c) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0001c47c) list_single_graphic_2heading_pane_g

0x607d,	// (0x00012d48) list_single_graphic_2heading_pane_t1_ParamLimits

0x607d,	// (0x00012d48) list_single_graphic_2heading_pane_t1

0x6091,	// (0x00012d5c) list_single_graphic_2heading_pane_t2_ParamLimits

0x6091,	// (0x00012d5c) list_single_graphic_2heading_pane_t2

0x60ad,	// (0x00012d78) list_single_graphic_2heading_pane_t3_ParamLimits

0x60ad,	// (0x00012d78) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x0001c483) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x0001c483) list_single_graphic_2heading_pane_t

0x8b9b,	// (0x00015866) bg_popup_sub_pane_cp2

0x8bc5,	// (0x00015890) grid_toobar_pane

0x60c5,	// (0x00012d90) cell_toolbar_pane_ParamLimits

0x60c5,	// (0x00012d90) cell_toolbar_pane

0x8c2f,	// (0x000158fa) cell_toolbar_pane_g1_ParamLimits

0x8c2f,	// (0x000158fa) cell_toolbar_pane_g1

0x8c43,	// (0x0001590e) cell_toolbar_pane_g2_ParamLimits

0x8c43,	// (0x0001590e) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x0001c491) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x0001c491) cell_toolbar_pane_g

0x8c65,	// (0x00015930) grid_highlight_pane_cp2_ParamLimits

0x8c65,	// (0x00015930) grid_highlight_pane_cp2

0x8c7f,	// (0x0001594a) toolbar_button_pane

0x8c8b,	// (0x00015956) toolbar_button_pane_g1

0x8c93,	// (0x0001595e) toolbar_button_pane_g2

0x8c9b,	// (0x00015966) toolbar_button_pane_g3

0x8ca3,	// (0x0001596e) toolbar_button_pane_g4

0x8cab,	// (0x00015976) toolbar_button_pane_g5

0x8cb3,	// (0x0001597e) toolbar_button_pane_g6

0x8cbb,	// (0x00015986) toolbar_button_pane_g7

0x8cc3,	// (0x0001598e) toolbar_button_pane_g8

0x8ccb,	// (0x00015996) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0001c496) toolbar_button_pane_g

0x60fd,	// (0x00012dc8) list_single_2graphic_pane_g1_cp3_ParamLimits

0x60fd,	// (0x00012dc8) list_single_2graphic_pane_g1_cp3

0x6109,	// (0x00012dd4) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6109,	// (0x00012dd4) list_single_2graphic_pane_g2_cp3

0x611a,	// (0x00012de5) list_single_2graphic_pane_g3_cp3

0x6122,	// (0x00012ded) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6122,	// (0x00012ded) list_single_2graphic_pane_g4_cp3

0x612e,	// (0x00012df9) list_single_2graphic_pane_t1_cp3_ParamLimits

0x612e,	// (0x00012df9) list_single_2graphic_pane_t1_cp3

0x6149,	// (0x00012e14) list_single_midp_graphic_pane_g2_ParamLimits

0x6149,	// (0x00012e14) list_single_midp_graphic_pane_g2

0x5a12,	// (0x000126dd) aid_zoom_text_primary

0x5a1a,	// (0x000126e5) aid_zoom_text_secondary

0x8644,	// (0x0001530f) status_small_pane_g7_ParamLimits

0x8644,	// (0x0001530f) status_small_pane_g7

0x8667,	// (0x00015332) status_small_pane_t1_ParamLimits

0x72f3,	// (0x00013fbe) title_pane_g2

0x0003,

0xf554,	// (0x0001c21f) title_pane_g

0x74c1,	// (0x0001418c) aid_size_cell_colour_1_pane_ParamLimits

0x74c1,	// (0x0001418c) aid_size_cell_colour_1_pane

0x74d5,	// (0x000141a0) aid_size_cell_colour_2_pane_ParamLimits

0x74d5,	// (0x000141a0) aid_size_cell_colour_2_pane

0x74e9,	// (0x000141b4) aid_size_cell_colour_3_pane_ParamLimits

0x74e9,	// (0x000141b4) aid_size_cell_colour_3_pane

0x74fd,	// (0x000141c8) aid_size_cell_colour_4_pane_ParamLimits

0x74fd,	// (0x000141c8) aid_size_cell_colour_4_pane

0x5462,	// (0x0001212d) title_pane_stacon_g1_ParamLimits

0x5462,	// (0x0001212d) title_pane_stacon_g1

0x93e2,	// (0x000160ad) popup_note_wait_window_g3_ParamLimits

0x93e2,	// (0x000160ad) popup_note_wait_window_g3

0x9459,	// (0x00016124) popup_note_wait_window_t5_ParamLimits

0x9459,	// (0x00016124) popup_note_wait_window_t5

0x362a,	// (0x000102f5) main_feb_china_hwr_fs_writing_pane

0x5aba,	// (0x00012785) popup_feb_china_hwr_fs_window_ParamLimits

0x5aba,	// (0x00012785) popup_feb_china_hwr_fs_window

0x616b,	// (0x00012e36) aid_size_cell_hwr_fs_ParamLimits

0x616b,	// (0x00012e36) aid_size_cell_hwr_fs

0x8db1,	// (0x00015a7c) bg_popup_sub_pane_cp3_ParamLimits

0x8db1,	// (0x00015a7c) bg_popup_sub_pane_cp3

0x6180,	// (0x00012e4b) grid_hwr_fs_pane_ParamLimits

0x6180,	// (0x00012e4b) grid_hwr_fs_pane

0x6198,	// (0x00012e63) linegrid_hwr_fs_pane_ParamLimits

0x6198,	// (0x00012e63) linegrid_hwr_fs_pane

0x61a8,	// (0x00012e73) cell_hwr_fs_pane_ParamLimits

0x61a8,	// (0x00012e73) cell_hwr_fs_pane

0x8dbd,	// (0x00015a88) linegrid_hwr_fs_pane_g1_ParamLimits

0x8dbd,	// (0x00015a88) linegrid_hwr_fs_pane_g1

0x8dc9,	// (0x00015a94) linegrid_hwr_fs_pane_g2_ParamLimits

0x8dc9,	// (0x00015a94) linegrid_hwr_fs_pane_g2

0x8ddb,	// (0x00015aa6) linegrid_hwr_fs_pane_g3_ParamLimits

0x8ddb,	// (0x00015aa6) linegrid_hwr_fs_pane_g3

0x61cc,	// (0x00012e97) linegrid_hwr_fs_pane_g4_ParamLimits

0x61cc,	// (0x00012e97) linegrid_hwr_fs_pane_g4

0x61ea,	// (0x00012eb5) linegrid_hwr_fs_pane_g5_ParamLimits

0x61ea,	// (0x00012eb5) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x0001c4c1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001c4c1) linegrid_hwr_fs_pane_g

0x8de7,	// (0x00015ab2) cell_hwr_fs_pane_g1_ParamLimits

0x8de7,	// (0x00015ab2) cell_hwr_fs_pane_g1

0x8ad2,	// (0x0001579d) cell_hwr_fs_pane_g2_ParamLimits

0x8ad2,	// (0x0001579d) cell_hwr_fs_pane_g2

0x8dfd,	// (0x00015ac8) cell_hwr_fs_pane_g3_ParamLimits

0x8dfd,	// (0x00015ac8) cell_hwr_fs_pane_g3

0x8e0a,	// (0x00015ad5) cell_hwr_fs_pane_g4_ParamLimits

0x8e0a,	// (0x00015ad5) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x0001c4cc) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x0001c4cc) cell_hwr_fs_pane_g

0x6200,	// (0x00012ecb) cell_hwr_fs_pane_t1

0x362a,	// (0x000102f5) grid_highlight_pane_cp6

0x362a,	// (0x000102f5) main_idle_act2_pane

0x4052,	// (0x00010d1d) aid_inside_area_popup_secondary

0x9a92,	// (0x0001675d) aid_inside_area_window_primary_ParamLimits

0x9a92,	// (0x0001675d) aid_inside_area_window_primary

0xa711,	// (0x000173dc) ai2_news_ticker_pane

0xa719,	// (0x000173e4) aid_size_cell_ai1_link_ParamLimits

0xa719,	// (0x000173e4) aid_size_cell_ai1_link

0xa733,	// (0x000173fe) popup_ai2_data_window_ParamLimits

0xa733,	// (0x000173fe) popup_ai2_data_window

0xa751,	// (0x0001741c) popup_ai2_link_window_ParamLimits

0xa751,	// (0x0001741c) popup_ai2_link_window

0x8db1,	// (0x00015a7c) bg_popup_sub_pane_cp4_ParamLimits

0x8db1,	// (0x00015a7c) bg_popup_sub_pane_cp4

0xa767,	// (0x00017432) grid_ai2_link_pane_ParamLimits

0xa767,	// (0x00017432) grid_ai2_link_pane

0xa77e,	// (0x00017449) popup_ai2_link_window_g1_ParamLimits

0xa77e,	// (0x00017449) popup_ai2_link_window_g1

0xa78a,	// (0x00017455) popup_ai2_link_window_g2_ParamLimits

0xa78a,	// (0x00017455) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x0001c69f) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x0001c69f) popup_ai2_link_window_g

0xa79b,	// (0x00017466) ai2_mp_button_pane

0xa7a3,	// (0x0001746e) ai2_mp_volume_pane

0x8fb1,	// (0x00015c7c) bg_popup_sub_pane_cp5_ParamLimits

0x8fb1,	// (0x00015c7c) bg_popup_sub_pane_cp5

0xa7ab,	// (0x00017476) heading_ai2_gene_pane_ParamLimits

0xa7ab,	// (0x00017476) heading_ai2_gene_pane

0xa7b7,	// (0x00017482) list_ai2_gene_pane_ParamLimits

0xa7b7,	// (0x00017482) list_ai2_gene_pane

0xa7ff,	// (0x000174ca) cell_ai2_link_pane_ParamLimits

0xa7ff,	// (0x000174ca) cell_ai2_link_pane

0xa815,	// (0x000174e0) cell_ai2_link_pane_g1

0x362a,	// (0x000102f5) grid_highlight_pane_cp7

0x650e,	// (0x000131d9) ai2_mp_volume_pane_g1

0xa8e8,	// (0x000175b3) ai2_mp_volume_pane_g2

0xa85d,	// (0x00017528) list_ai2_gene_pane_t1

0xa8f0,	// (0x000175bb) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x0001c6b8) ai2_mp_volume_pane_g

0x6516,	// (0x000131e1) volume_small_pane_cp3

0xa8f8,	// (0x000175c3) aid_size_cell_ai2_button

0xa900,	// (0x000175cb) grid_ai2_button_pane

0xa909,	// (0x000175d4) cell_ai2_button_pane_ParamLimits

0xa909,	// (0x000175d4) cell_ai2_button_pane

0x34b1,	// (0x0001017c) cell_ai2_button_pane_g1

0x362a,	// (0x000102f5) grid_highlight_pane_cp8

0xa8a8,	// (0x00017573) ai2_gene_pane_t1_ParamLimits

0xa8a8,	// (0x00017573) ai2_gene_pane_t1

0x5a00,	// (0x000126cb) aid_height_parent_landscape

0xa166,	// (0x00016e31) aid_height_set_list

0xa177,	// (0x00016e42) aid_size_parent

0xa532,	// (0x000171fd) aid_size_cell_graphic_pane_ParamLimits

0xa7c7,	// (0x00017492) popup_ai2_data_window_g1_ParamLimits

0xa7c7,	// (0x00017492) popup_ai2_data_window_g1

0xa7d3,	// (0x0001749e) ai2_news_ticker_pane_g1

0xa7db,	// (0x000174a6) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x0001c6a4) ai2_news_ticker_pane_g

0xa7e3,	// (0x000174ae) ai2_news_ticker_pane_t1

0xa7f1,	// (0x000174bc) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x0001c6a9) ai2_news_ticker_pane_t

0xa81e,	// (0x000174e9) heading_ai2_gene_pane_g1

0xa826,	// (0x000174f1) heading_ai2_gene_pane_t1_ParamLimits

0xa826,	// (0x000174f1) heading_ai2_gene_pane_t1

0xa83b,	// (0x00017506) list_highlight_pane_cp6

0xa843,	// (0x0001750e) ai2_gene_pane_ParamLimits

0xa843,	// (0x0001750e) ai2_gene_pane

0xa86b,	// (0x00017536) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x0001c6ae) list_ai2_gene_pane_t

0xa879,	// (0x00017544) list_highlight_pane_cp8_ParamLimits

0xa879,	// (0x00017544) list_highlight_pane_cp8

0xa88a,	// (0x00017555) ai2_gene_pane_g1_ParamLimits

0xa88a,	// (0x00017555) ai2_gene_pane_g1

0xa89c,	// (0x00017567) ai2_gene_pane_g2_ParamLimits

0xa89c,	// (0x00017567) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x0001c6b3) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x0001c6b3) ai2_gene_pane_g

0x3d9f,	// (0x00010a6a) scroll_pane_cp12

0x59bf,	// (0x0001268a) control_pane_t3_ParamLimits

0x59bf,	// (0x0001268a) control_pane_t3

0x8658,	// (0x00015323) status_small_pane_g8_ParamLimits

0x8658,	// (0x00015323) status_small_pane_g8

0x5bb8,	// (0x00012883) popup_find_window_ParamLimits

0x5de3,	// (0x00012aae) popup_note_image_window_ParamLimits

0x8c01,	// (0x000158cc) list_double2_graphic_pane_vc_g1_ParamLimits

0x8c01,	// (0x000158cc) list_double2_graphic_pane_vc_g1

0x834e,	// (0x00015019) list_double2_graphic_pane_vc_g2_ParamLimits

0x834e,	// (0x00015019) list_double2_graphic_pane_vc_g2

0x8c0d,	// (0x000158d8) list_double2_graphic_pane_vc_g3_ParamLimits

0x8c0d,	// (0x000158d8) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0001c48a) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001c48a) list_double2_graphic_pane_vc_g

0x8c19,	// (0x000158e4) list_double2_graphic_pane_vc_t1_ParamLimits

0x8c19,	// (0x000158e4) list_double2_graphic_pane_vc_t1

0x834e,	// (0x00015019) list_single_heading_pane_vc_g1_ParamLimits

0x834e,	// (0x00015019) list_single_heading_pane_vc_g1

0x8c0d,	// (0x000158d8) list_single_heading_pane_vc_g2_ParamLimits

0x8c0d,	// (0x000158d8) list_single_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001c4ab) list_single_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001c4ab) list_single_heading_pane_vc_g

0x8cd3,	// (0x0001599e) list_single_heading_pane_vc_t1_ParamLimits

0x8cd3,	// (0x0001599e) list_single_heading_pane_vc_t1

0x8ceb,	// (0x000159b6) list_single_heading_pane_vc_t2_ParamLimits

0x8ceb,	// (0x000159b6) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x0001c4b0) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x0001c4b0) list_single_heading_pane_vc_t

0x8cfd,	// (0x000159c8) list_setting_number_pane_vc_g1_ParamLimits

0x8cfd,	// (0x000159c8) list_setting_number_pane_vc_g1

0x8d09,	// (0x000159d4) list_setting_number_pane_vc_g2_ParamLimits

0x8d09,	// (0x000159d4) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0001c4b5) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0001c4b5) list_setting_number_pane_vc_g

0x8d15,	// (0x000159e0) list_setting_number_pane_vc_t1_ParamLimits

0x8d15,	// (0x000159e0) list_setting_number_pane_vc_t1

0x8d29,	// (0x000159f4) list_setting_number_pane_vc_t2_ParamLimits

0x8d29,	// (0x000159f4) list_setting_number_pane_vc_t2

0x8d45,	// (0x00015a10) list_setting_number_pane_vc_t3_ParamLimits

0x8d45,	// (0x00015a10) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x0001c4ba) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x0001c4ba) list_setting_number_pane_vc_t

0x8d73,	// (0x00015a3e) set_value_pane_vc_ParamLimits

0x8d73,	// (0x00015a3e) set_value_pane_vc

0xa398,	// (0x00017063) list_double2_graphic_pane_vc_ParamLimits

0xa398,	// (0x00017063) list_double2_graphic_pane_vc

0xa398,	// (0x00017063) list_double2_large_graphic_pane_vc_ParamLimits

0xa398,	// (0x00017063) list_double2_large_graphic_pane_vc

0xa398,	// (0x00017063) list_double2_pane_vc_ParamLimits

0xa398,	// (0x00017063) list_double2_pane_vc

0xa398,	// (0x00017063) list_double_graphic_heading_pane_vc_ParamLimits

0xa398,	// (0x00017063) list_double_graphic_heading_pane_vc

0xa398,	// (0x00017063) list_double_graphic_pane_vc_ParamLimits

0xa398,	// (0x00017063) list_double_graphic_pane_vc

0xa398,	// (0x00017063) list_double_heading_pane_vc_ParamLimits

0xa398,	// (0x00017063) list_double_heading_pane_vc

0xa398,	// (0x00017063) list_double_large_graphic_pane_vc_ParamLimits

0xa398,	// (0x00017063) list_double_large_graphic_pane_vc

0xa398,	// (0x00017063) list_double_number_pane_vc_ParamLimits

0xa398,	// (0x00017063) list_double_number_pane_vc

0xa398,	// (0x00017063) list_double_pane_vc_ParamLimits

0xa398,	// (0x00017063) list_double_pane_vc

0xa398,	// (0x00017063) list_double_time_pane_vc_ParamLimits

0xa398,	// (0x00017063) list_double_time_pane_vc

0xa398,	// (0x00017063) list_setting_number_pane_vc_ParamLimits

0xa398,	// (0x00017063) list_setting_number_pane_vc

0xa398,	// (0x00017063) list_setting_pane_vc_ParamLimits

0xa398,	// (0x00017063) list_setting_pane_vc

0xa398,	// (0x00017063) list_single_graphic_heading_pane_vc_ParamLimits

0xa398,	// (0x00017063) list_single_graphic_heading_pane_vc

0xa398,	// (0x00017063) list_single_heading_pane_vc_ParamLimits

0xa398,	// (0x00017063) list_single_heading_pane_vc

0xa3ac,	// (0x00017077) list_single_number_heading_pane_vc_ParamLimits

0xa3ac,	// (0x00017077) list_single_number_heading_pane_vc

0x8c01,	// (0x000158cc) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x8c01,	// (0x000158cc) list_double_graphic_heading_pane_vc_g1

0xa93c,	// (0x00017607) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xa93c,	// (0x00017607) list_double_graphic_heading_pane_vc_g2

0xa948,	// (0x00017613) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xa948,	// (0x00017613) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x0001c6bf) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0001c6bf) list_double_graphic_heading_pane_vc_g

0xa954,	// (0x0001761f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xa954,	// (0x0001761f) list_double_graphic_heading_pane_vc_t1

0x8cd3,	// (0x0001599e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x8cd3,	// (0x0001599e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x0001c6c6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x0001c6c6) list_double_graphic_heading_pane_vc_t

0x8cfd,	// (0x000159c8) list_setting_pane_vc_g1_ParamLimits

0x8cfd,	// (0x000159c8) list_setting_pane_vc_g1

0x8d09,	// (0x000159d4) list_setting_pane_vc_g2_ParamLimits

0x8d09,	// (0x000159d4) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x0001c4b5) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x0001c4b5) list_setting_pane_vc_g

0xab9a,	// (0x00017865) list_setting_pane_vc_t1_ParamLimits

0xab9a,	// (0x00017865) list_setting_pane_vc_t1

0xabb6,	// (0x00017881) list_setting_pane_vc_t2_ParamLimits

0xabb6,	// (0x00017881) list_setting_pane_vc_t2

0x0001,

0xfa29,	// (0x0001c6f4) list_setting_pane_vc_t_ParamLimits

0xfa29,	// (0x0001c6f4) list_setting_pane_vc_t

0x8d73,	// (0x00015a3e) set_value_pane_cp_vc_ParamLimits

0x8d73,	// (0x00015a3e) set_value_pane_cp_vc

0x834e,	// (0x00015019) list_single_number_heading_pane_vc_g1_ParamLimits

0x834e,	// (0x00015019) list_single_number_heading_pane_vc_g1

0x8c0d,	// (0x000158d8) list_single_number_heading_pane_vc_g2_ParamLimits

0x8c0d,	// (0x000158d8) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001c4ab) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001c4ab) list_single_number_heading_pane_vc_g

0x8cd3,	// (0x0001599e) list_single_number_heading_pane_vc_t1_ParamLimits

0x8cd3,	// (0x0001599e) list_single_number_heading_pane_vc_t1

0xabd2,	// (0x0001789d) list_single_number_heading_pane_vc_t2_ParamLimits

0xabd2,	// (0x0001789d) list_single_number_heading_pane_vc_t2

0xabe4,	// (0x000178af) list_single_number_heading_pane_vc_t3_ParamLimits

0xabe4,	// (0x000178af) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2e,	// (0x0001c6f9) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x0001c6f9) list_single_number_heading_pane_vc_t

0x8c01,	// (0x000158cc) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8c01,	// (0x000158cc) list_single_graphic_heading_pane_vc_g1

0x834e,	// (0x00015019) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x834e,	// (0x00015019) list_single_graphic_heading_pane_vc_g4

0x8c0d,	// (0x000158d8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8c0d,	// (0x000158d8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x0001c48a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001c48a) list_single_graphic_heading_pane_vc_g

0x8cd3,	// (0x0001599e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x8cd3,	// (0x0001599e) list_single_graphic_heading_pane_vc_t1

0xabf6,	// (0x000178c1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xabf6,	// (0x000178c1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x0001c700) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x0001c700) list_single_graphic_heading_pane_vc_t

0x834e,	// (0x00015019) list_double2_pane_vc_g1_ParamLimits

0x834e,	// (0x00015019) list_double2_pane_vc_g1

0x8c0d,	// (0x000158d8) list_double2_pane_vc_g2_ParamLimits

0x8c0d,	// (0x000158d8) list_double2_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001c4ab) list_double2_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001c4ab) list_double2_pane_vc_g

0xac08,	// (0x000178d3) list_double2_pane_vc_t1_ParamLimits

0xac08,	// (0x000178d3) list_double2_pane_vc_t1

0xac1e,	// (0x000178e9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xac1e,	// (0x000178e9) list_double2_large_graphic_pane_vc_g1

0x834e,	// (0x00015019) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x834e,	// (0x00015019) list_double2_large_graphic_pane_vc_g2

0x8c0d,	// (0x000158d8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x8c0d,	// (0x000158d8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3a,	// (0x0001c705) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x0001c705) list_double2_large_graphic_pane_vc_g

0xac2a,	// (0x000178f5) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xac2a,	// (0x000178f5) list_double2_large_graphic_pane_vc_t1

0xac40,	// (0x0001790b) list_double_time_pane_vc_g1_ParamLimits

0xac40,	// (0x0001790b) list_double_time_pane_vc_g1

0xac4c,	// (0x00017917) list_double_time_pane_vc_g2_ParamLimits

0xac4c,	// (0x00017917) list_double_time_pane_vc_g2

0x0001,

0xfa41,	// (0x0001c70c) list_double_time_pane_vc_g_ParamLimits

0xfa41,	// (0x0001c70c) list_double_time_pane_vc_g

0xac58,	// (0x00017923) list_double_time_pane_vc_t1_ParamLimits

0xac58,	// (0x00017923) list_double_time_pane_vc_t1

0xac88,	// (0x00017953) list_double_time_pane_vc_t2_ParamLimits

0xac88,	// (0x00017953) list_double_time_pane_vc_t2

0xacb1,	// (0x0001797c) list_double_time_pane_vc_t3_ParamLimits

0xacb1,	// (0x0001797c) list_double_time_pane_vc_t3

0xacc3,	// (0x0001798e) list_double_time_pane_vc_t4_ParamLimits

0xacc3,	// (0x0001798e) list_double_time_pane_vc_t4

0x0003,

0xfa46,	// (0x0001c711) list_double_time_pane_vc_t_ParamLimits

0xfa46,	// (0x0001c711) list_double_time_pane_vc_t

0x834e,	// (0x00015019) list_double_pane_vc_g1_ParamLimits

0x834e,	// (0x00015019) list_double_pane_vc_g1

0x8c0d,	// (0x000158d8) list_double_pane_vc_g2_ParamLimits

0x8c0d,	// (0x000158d8) list_double_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001c4ab) list_double_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001c4ab) list_double_pane_vc_g

0xace8,	// (0x000179b3) list_double_pane_vc_t1_ParamLimits

0xace8,	// (0x000179b3) list_double_pane_vc_t1

0xacfc,	// (0x000179c7) list_double_pane_vc_t2_ParamLimits

0xacfc,	// (0x000179c7) list_double_pane_vc_t2

0x0001,

0xfa4f,	// (0x0001c71a) list_double_pane_vc_t_ParamLimits

0xfa4f,	// (0x0001c71a) list_double_pane_vc_t

0x834e,	// (0x00015019) list_double_number_pane_vc_g1_ParamLimits

0x834e,	// (0x00015019) list_double_number_pane_vc_g1

0x8c0d,	// (0x000158d8) list_double_number_pane_vc_g2_ParamLimits

0x8c0d,	// (0x000158d8) list_double_number_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001c4ab) list_double_number_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001c4ab) list_double_number_pane_vc_g

0xad12,	// (0x000179dd) list_double_number_pane_vc_t1_ParamLimits

0xad12,	// (0x000179dd) list_double_number_pane_vc_t1

0xad26,	// (0x000179f1) list_double_number_pane_vc_t2_ParamLimits

0xad26,	// (0x000179f1) list_double_number_pane_vc_t2

0xacfc,	// (0x000179c7) list_double_number_pane_vc_t3_ParamLimits

0xacfc,	// (0x000179c7) list_double_number_pane_vc_t3

0x0002,

0xfa54,	// (0x0001c71f) list_double_number_pane_vc_t_ParamLimits

0xfa54,	// (0x0001c71f) list_double_number_pane_vc_t

0xad3a,	// (0x00017a05) list_double_large_graphic_pane_vc_g1_ParamLimits

0xad3a,	// (0x00017a05) list_double_large_graphic_pane_vc_g1

0xad4b,	// (0x00017a16) list_double_large_graphic_pane_vc_g2_ParamLimits

0xad4b,	// (0x00017a16) list_double_large_graphic_pane_vc_g2

0x8c0d,	// (0x000158d8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x8c0d,	// (0x000158d8) list_double_large_graphic_pane_vc_g3

0xad5a,	// (0x00017a25) list_double_large_graphic_pane_vc_g4_ParamLimits

0xad5a,	// (0x00017a25) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5b,	// (0x0001c726) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x0001c726) list_double_large_graphic_pane_vc_g

0xad66,	// (0x00017a31) list_double_large_graphic_pane_vc_t1_ParamLimits

0xad66,	// (0x00017a31) list_double_large_graphic_pane_vc_t1

0xad7f,	// (0x00017a4a) list_double_large_graphic_pane_vc_t2_ParamLimits

0xad7f,	// (0x00017a4a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x0001c72f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x0001c72f) list_double_large_graphic_pane_vc_t

0xa93c,	// (0x00017607) list_double_heading_pane_vc_g1_ParamLimits

0xa93c,	// (0x00017607) list_double_heading_pane_vc_g1

0xa948,	// (0x00017613) list_double_heading_pane_vc_g2_ParamLimits

0xa948,	// (0x00017613) list_double_heading_pane_vc_g2

0x0001,

0xfa69,	// (0x0001c734) list_double_heading_pane_vc_g_ParamLimits

0xfa69,	// (0x0001c734) list_double_heading_pane_vc_g

0xad96,	// (0x00017a61) list_double_heading_pane_vc_t1_ParamLimits

0xad96,	// (0x00017a61) list_double_heading_pane_vc_t1

0x8cd3,	// (0x0001599e) list_double_heading_pane_vc_t2_ParamLimits

0x8cd3,	// (0x0001599e) list_double_heading_pane_vc_t2

0x0001,

0xfa6e,	// (0x0001c739) list_double_heading_pane_vc_t_ParamLimits

0xfa6e,	// (0x0001c739) list_double_heading_pane_vc_t

0x8c01,	// (0x000158cc) list_double_graphic_pane_vc_g1_ParamLimits

0x8c01,	// (0x000158cc) list_double_graphic_pane_vc_g1

0xada8,	// (0x00017a73) list_double_graphic_pane_vc_g2_ParamLimits

0xada8,	// (0x00017a73) list_double_graphic_pane_vc_g2

0xadb7,	// (0x00017a82) list_double_graphic_pane_vc_g3_ParamLimits

0xadb7,	// (0x00017a82) list_double_graphic_pane_vc_g3

0x0002,

0xfa73,	// (0x0001c73e) list_double_graphic_pane_vc_g_ParamLimits

0xfa73,	// (0x0001c73e) list_double_graphic_pane_vc_g

0xadc3,	// (0x00017a8e) list_double_graphic_pane_vc_t1_ParamLimits

0xadc3,	// (0x00017a8e) list_double_graphic_pane_vc_t1

0xacfc,	// (0x000179c7) list_double_graphic_pane_vc_t2_ParamLimits

0xacfc,	// (0x000179c7) list_double_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x0001c745) list_double_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x0001c745) list_double_graphic_pane_vc_t

0x4faa,	// (0x00011c75) aid_size_cell_fastswap

0x4fb2,	// (0x00011c7d) aid_size_cell_touch_ParamLimits

0x4fb2,	// (0x00011c7d) aid_size_cell_touch

0x521d,	// (0x00011ee8) popup_fast_swap_wide_window_ParamLimits

0x521d,	// (0x00011ee8) popup_fast_swap_wide_window

0x5333,	// (0x00011ffe) touch_pane_ParamLimits

0x5333,	// (0x00011ffe) touch_pane

0x3e24,	// (0x00010aef) button_value_adjust_pane_cp2

0x3e2c,	// (0x00010af7) button_value_adjust_pane_cp4

0x3e34,	// (0x00010aff) form_field_data_pane_cp2

0x7a89,	// (0x00014754) form_field_data_wide_pane_cp2

0x4432,	// (0x000110fd) bg_scroll_pane_ParamLimits

0x55c7,	// (0x00012292) scroll_handle_pane_ParamLimits

0x55db,	// (0x000122a6) scroll_sc2_down_pane_ParamLimits

0x55db,	// (0x000122a6) scroll_sc2_down_pane

0x448c,	// (0x00011157) scroll_sc2_up_pane_ParamLimits

0x448c,	// (0x00011157) scroll_sc2_up_pane

0xb2a1,	// (0x00017f6c) grid_wheel_folder_pane_g1_ParamLimits

0xb2a1,	// (0x00017f6c) grid_wheel_folder_pane_g1

0x57a5,	// (0x00012470) clock_nsta_pane_cp2_ParamLimits

0x57a5,	// (0x00012470) clock_nsta_pane_cp2

0x7c26,	// (0x000148f1) listscroll_midp_pane_ParamLimits

0x83e5,	// (0x000150b0) midp_canvas_pane

0x86d3,	// (0x0001539e) nsta_clock_indic_pane

0x870f,	// (0x000153da) listscroll_form_pane_vc

0x8717,	// (0x000153e2) listscroll_set_pane_vc_ParamLimits

0x8717,	// (0x000153e2) listscroll_set_pane_vc

0x8826,	// (0x000154f1) clock_nsta_pane

0x88a3,	// (0x0001556e) indicator_nsta_pane

0x8b9b,	// (0x00015866) bg_popup_sub_pane_cp2_ParamLimits

0x8baf,	// (0x0001587a) find_pane_cp2_ParamLimits

0x8baf,	// (0x0001587a) find_pane_cp2

0x8bc5,	// (0x00015890) grid_toobar_pane_ParamLimits

0x8d85,	// (0x00015a50) list_form_gen_pane_vc_ParamLimits

0x8d85,	// (0x00015a50) list_form_gen_pane_vc

0x8d9b,	// (0x00015a66) scroll_pane_cp8_vc_ParamLimits

0x8d9b,	// (0x00015a66) scroll_pane_cp8_vc

0x8e17,	// (0x00015ae2) data_form_wide_pane_vc_ParamLimits

0x8e17,	// (0x00015ae2) data_form_wide_pane_vc

0x8e23,	// (0x00015aee) form_field_data_wide_pane_vc_g1

0x8e2b,	// (0x00015af6) form_field_data_wide_pane_vc_t1_ParamLimits

0x8e2b,	// (0x00015af6) form_field_data_wide_pane_vc_t1

0x3ea7,	// (0x00010b72) input_focus_pane_cp6_vc_ParamLimits

0x3ea7,	// (0x00010b72) input_focus_pane_cp6_vc

0x915c,	// (0x00015e27) list_midp_pane_ParamLimits

0x9168,	// (0x00015e33) scroll_pane_cp16_ParamLimits

0x9168,	// (0x00015e33) scroll_pane_cp16

0x91b6,	// (0x00015e81) button_value_adjust_pane_ParamLimits

0x91b6,	// (0x00015e81) button_value_adjust_pane

0xa189,	// (0x00016e54) button_value_adjust_pane_cp6_ParamLimits

0xa189,	// (0x00016e54) button_value_adjust_pane_cp6

0xa2d7,	// (0x00016fa2) settings_code_pane_cp_ParamLimits

0xa2d7,	// (0x00016fa2) settings_code_pane_cp

0x34b1,	// (0x0001017c) cell_touch_pane_g1

0x34b1,	// (0x0001017c) cell_touch_pane_g2

0x0001,

0xf704,	// (0x0001c3cf) cell_touch_pane_g

0xa91b,	// (0x000175e6) cell_touch_pane_cp_ParamLimits

0xa91b,	// (0x000175e6) cell_touch_pane_cp

0xa92b,	// (0x000175f6) cell_touch_pane_ParamLimits

0xa92b,	// (0x000175f6) cell_touch_pane

0x34b1,	// (0x0001017c) scroll_sc2_down_pane_g1

0x34b1,	// (0x0001017c) scroll_sc2_up_pane_g1

0x362a,	// (0x000102f5) bg_set_opt_pane_cp4_vc

0xa966,	// (0x00017631) list_set_graphic_pane_vc_g1_ParamLimits

0xa966,	// (0x00017631) list_set_graphic_pane_vc_g1

0xa972,	// (0x0001763d) list_set_graphic_pane_vc_g2_ParamLimits

0xa972,	// (0x0001763d) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x0001c6cb) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x0001c6cb) list_set_graphic_pane_vc_g

0xa97e,	// (0x00017649) text_primary_small_cp13_vc_ParamLimits

0xa97e,	// (0x00017649) text_primary_small_cp13_vc

0xa996,	// (0x00017661) list_set_graphic_pane_vc_ParamLimits

0xa996,	// (0x00017661) list_set_graphic_pane_vc

0x362a,	// (0x000102f5) input_focus_pane_cp2_vc

0x34b1,	// (0x0001017c) setting_code_pane_vc_g1

0x37f1,	// (0x000104bc) setting_code_pane_vc_t1

0xa9ab,	// (0x00017676) set_text_pane_vc_t1_ParamLimits

0xa9ab,	// (0x00017676) set_text_pane_vc_t1

0x362a,	// (0x000102f5) input_focus_pane_cp1_vc

0xa9c9,	// (0x00017694) list_set_text_pane_vc

0x34b1,	// (0x0001017c) setting_text_pane_vc_g1

0x362a,	// (0x000102f5) bg_set_opt_pane_cp2_vc

0x37c0,	// (0x0001048b) setting_slider_graphic_pane_vc_g1

0xa9d3,	// (0x0001769e) setting_slider_graphic_pane_vc_t1

0xa9e5,	// (0x000176b0) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x0001c6d0) setting_slider_graphic_pane_vc_t

0xa9f7,	// (0x000176c2) slider_set_pane_cp_vc

0xaa01,	// (0x000176cc) slider_set_pane_vc_g1

0xaa0a,	// (0x000176d5) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x0001c6d5) slider_set_pane_vc_g

0x3f6b,	// (0x00010c36) set_opt_bg_pane_g1_copy1

0x3f73,	// (0x00010c3e) set_opt_bg_pane_g2_copy1

0xaa36,	// (0x00017701) set_opt_bg_pane_g3_copy1

0x3f83,	// (0x00010c4e) set_opt_bg_pane_g4_copy1

0x3f8b,	// (0x00010c56) set_opt_bg_pane_g5_copy1

0x3f93,	// (0x00010c5e) set_opt_bg_pane_g6_copy1

0xaa40,	// (0x0001770b) set_opt_bg_pane_g7_copy1

0xaa4a,	// (0x00017715) set_opt_bg_pane_g8_copy1

0xaa54,	// (0x0001771f) set_opt_bg_pane_g9_copy1

0x362a,	// (0x000102f5) bg_set_opt_pane_cp_vc

0xaa5e,	// (0x00017729) setting_slider_pane_vc_t1

0xaa6d,	// (0x00017738) setting_slider_pane_vc_t2

0xaa7f,	// (0x0001774a) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x0001c6e4) setting_slider_pane_vc_t

0xaa91,	// (0x0001775c) slider_set_pane_vc

0x620e,	// (0x00012ed9) volume_set_pane_vc_g1

0x6217,	// (0x00012ee2) volume_set_pane_vc_g2

0x6220,	// (0x00012eeb) volume_set_pane_vc_g3

0x6229,	// (0x00012ef4) volume_set_pane_vc_g4

0x6232,	// (0x00012efd) volume_set_pane_vc_g5

0x623b,	// (0x00012f06) volume_set_pane_vc_g6

0x6244,	// (0x00012f0f) volume_set_pane_vc_g7

0x624d,	// (0x00012f18) volume_set_pane_vc_g8

0x6256,	// (0x00012f21) volume_set_pane_vc_g9

0x625f,	// (0x00012f2a) volume_set_pane_vc_g10

0x0009,

0xf8b7,	// (0x0001c582) volume_set_pane_vc_g

0xaa9b,	// (0x00017766) volume_set_pane_vc

0xaaa5,	// (0x00017770) button_value_adjust_pane_cp1_vc

0xaaaf,	// (0x0001777a) list_highlight_pane_cp2_vc

0xaab8,	// (0x00017783) list_set_pane_vc_ParamLimits

0xaab8,	// (0x00017783) list_set_pane_vc

0xab28,	// (0x000177f3) main_pane_set_vc_t1_ParamLimits

0xab28,	// (0x000177f3) main_pane_set_vc_t1

0xab3d,	// (0x00017808) main_pane_set_vc_t2_ParamLimits

0xab3d,	// (0x00017808) main_pane_set_vc_t2

0xab4f,	// (0x0001781a) main_pane_set_vc_t3_ParamLimits

0xab4f,	// (0x0001781a) main_pane_set_vc_t3

0xab63,	// (0x0001782e) main_pane_set_vc_t4_ParamLimits

0xab63,	// (0x0001782e) main_pane_set_vc_t4

0x0003,

0xfa20,	// (0x0001c6eb) main_pane_set_vc_t_ParamLimits

0xfa20,	// (0x0001c6eb) main_pane_set_vc_t

0xab77,	// (0x00017842) setting_code_pane_vc_ParamLimits

0xab77,	// (0x00017842) setting_code_pane_vc

0xab88,	// (0x00017853) setting_slider_graphic_pane_vc

0xab88,	// (0x00017853) setting_slider_pane_vc

0xab88,	// (0x00017853) setting_text_pane_vc

0xab88,	// (0x00017853) setting_volume_pane_vc

0xab92,	// (0x0001785d) scroll_pane_cp121_vc

0x3e12,	// (0x00010add) set_content_pane_vc

0xadd7,	// (0x00017aa2) button_value_adjust_pane_g1

0xade0,	// (0x00017aab) button_value_adjust_pane_g2

0x0001,

0xfa7f,	// (0x0001c74a) button_value_adjust_pane_g

0xade9,	// (0x00017ab4) form_field_slider_wide_pane_vc_t1_ParamLimits

0xade9,	// (0x00017ab4) form_field_slider_wide_pane_vc_t1

0xadfd,	// (0x00017ac8) form_field_slider_wide_pane_vc_t2_ParamLimits

0xadfd,	// (0x00017ac8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa84,	// (0x0001c74f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0001c74f) form_field_slider_wide_pane_vc_t

0x3739,	// (0x00010404) input_focus_pane_cp10_vc_ParamLimits

0x3739,	// (0x00010404) input_focus_pane_cp10_vc

0xae2b,	// (0x00017af6) slider_cont_pane_cp1_vc_ParamLimits

0xae2b,	// (0x00017af6) slider_cont_pane_cp1_vc

0xae3b,	// (0x00017b06) slider_form_pane_g1_cp2

0xaa0a,	// (0x000176d5) slider_form_pane_g2_cp2

0xae68,	// (0x00017b33) form_field_slider_pane_vc_t3

0xae76,	// (0x00017b41) form_field_slider_pane_vc_t4

0xae84,	// (0x00017b4f) slider_form_pane_vc_ParamLimits

0xae84,	// (0x00017b4f) slider_form_pane_vc

0xae91,	// (0x00017b5c) form_field_slider_pane_vc_t1_ParamLimits

0xae91,	// (0x00017b5c) form_field_slider_pane_vc_t1

0xadfd,	// (0x00017ac8) form_field_slider_pane_vc_t2_ParamLimits

0xadfd,	// (0x00017ac8) form_field_slider_pane_vc_t2

0x0001,

0xfa96,	// (0x0001c761) form_field_slider_pane_vc_t_ParamLimits

0xfa96,	// (0x0001c761) form_field_slider_pane_vc_t

0x3739,	// (0x00010404) input_focus_pane_cp9_vc_ParamLimits

0x3739,	// (0x00010404) input_focus_pane_cp9_vc

0xaead,	// (0x00017b78) slider_cont_pane_vc_ParamLimits

0xaead,	// (0x00017b78) slider_cont_pane_vc

0xaebf,	// (0x00017b8a) list_form_graphic_pane_cp_vc_ParamLimits

0xaebf,	// (0x00017b8a) list_form_graphic_pane_cp_vc

0x8e23,	// (0x00015aee) form_field_popup_wide_pane_vc_g1

0xaed4,	// (0x00017b9f) form_field_popup_wide_pane_vc_t1_ParamLimits

0xaed4,	// (0x00017b9f) form_field_popup_wide_pane_vc_t1

0x3ea7,	// (0x00010b72) input_focus_pane_cp8_vc_ParamLimits

0x3ea7,	// (0x00010b72) input_focus_pane_cp8_vc

0xaf19,	// (0x00017be4) list_form_wide_pane_vc_ParamLimits

0xaf19,	// (0x00017be4) list_form_wide_pane_vc

0xaf25,	// (0x00017bf0) list_form_graphic_pane_vc_g1

0xaf2d,	// (0x00017bf8) list_form_graphic_pane_vc_t1_ParamLimits

0xaf2d,	// (0x00017bf8) list_form_graphic_pane_vc_t1

0x3751,	// (0x0001041c) list_highlight_pane_cp5_vc_ParamLimits

0x3751,	// (0x0001041c) list_highlight_pane_cp5_vc

0xaf49,	// (0x00017c14) list_form_graphic_pane_vc_ParamLimits

0xaf49,	// (0x00017c14) list_form_graphic_pane_vc

0x8e23,	// (0x00015aee) form_field_popup_pane_vc_g1

0xaf5f,	// (0x00017c2a) form_field_popup_pane_vc_t1_ParamLimits

0xaf5f,	// (0x00017c2a) form_field_popup_pane_vc_t1

0x3ea7,	// (0x00010b72) input_focus_pane_cp7_vc_ParamLimits

0x3ea7,	// (0x00010b72) input_focus_pane_cp7_vc

0xaf76,	// (0x00017c41) list_form_pane_vc_ParamLimits

0xaf76,	// (0x00017c41) list_form_pane_vc

0xaf82,	// (0x00017c4d) data_form_pane_vc_t1_ParamLimits

0xaf82,	// (0x00017c4d) data_form_pane_vc_t1

0x3f6b,	// (0x00010c36) input_focus_pane_vc_g1

0x3f73,	// (0x00010c3e) input_focus_pane_vc_g2

0x3f7b,	// (0x00010c46) input_focus_pane_vc_g3

0x3f83,	// (0x00010c4e) input_focus_pane_vc_g4

0x3f8b,	// (0x00010c56) input_focus_pane_vc_g5

0x3f93,	// (0x00010c5e) input_focus_pane_vc_g6

0x3f9b,	// (0x00010c66) input_focus_pane_vc_g7

0x3fa3,	// (0x00010c6e) input_focus_pane_vc_g8

0x3fab,	// (0x00010c76) input_focus_pane_vc_g9

0x34b1,	// (0x0001017c) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0001c358) input_focus_pane_vc_g

0x8e17,	// (0x00015ae2) data_form_pane_vc_ParamLimits

0x8e17,	// (0x00015ae2) data_form_pane_vc

0x8e23,	// (0x00015aee) form_field_data_pane_vc_g1

0xaf9f,	// (0x00017c6a) form_field_data_pane_vc_t1_ParamLimits

0xaf9f,	// (0x00017c6a) form_field_data_pane_vc_t1

0x3ea7,	// (0x00010b72) input_focus_pane_vc_ParamLimits

0x3ea7,	// (0x00010b72) input_focus_pane_vc

0xafb9,	// (0x00017c84) button_value_adjust_pane_cp3_vc

0xafc1,	// (0x00017c8c) button_value_adjust_pane_cp5_vc

0xafc9,	// (0x00017c94) form_field_data_pane_vc_ParamLimits

0xafc9,	// (0x00017c94) form_field_data_pane_vc

0xafe4,	// (0x00017caf) form_field_data_pane_vc_cp2

0xafec,	// (0x00017cb7) form_field_data_wide_pane_vc_ParamLimits

0xafec,	// (0x00017cb7) form_field_data_wide_pane_vc

0xb006,	// (0x00017cd1) form_field_data_wide_pane_vc_cp2

0xb00e,	// (0x00017cd9) form_field_popup_pane_vc_ParamLimits

0xb00e,	// (0x00017cd9) form_field_popup_pane_vc

0xb029,	// (0x00017cf4) form_field_popup_wide_pane_vc_ParamLimits

0xb029,	// (0x00017cf4) form_field_popup_wide_pane_vc

0xb043,	// (0x00017d0e) form_field_slider_pane_vc_ParamLimits

0xb043,	// (0x00017d0e) form_field_slider_pane_vc

0xb056,	// (0x00017d21) form_field_slider_wide_pane_vc_ParamLimits

0xb056,	// (0x00017d21) form_field_slider_wide_pane_vc

0xb069,	// (0x00017d34) grid_touch_1_pane_ParamLimits

0xb069,	// (0x00017d34) grid_touch_1_pane

0xb075,	// (0x00017d40) grid_touch_2_pane_ParamLimits

0xb075,	// (0x00017d40) grid_touch_2_pane

0x869e,	// (0x00015369) touch_pane_g1_ParamLimits

0x869e,	// (0x00015369) touch_pane_g1

0xb08f,	// (0x00017d5a) cell_app_pane_cp_wide_ParamLimits

0xb08f,	// (0x00017d5a) cell_app_pane_cp_wide

0xb0a0,	// (0x00017d6b) grid_popup_fast_wide_pane_ParamLimits

0xb0a0,	// (0x00017d6b) grid_popup_fast_wide_pane

0xb0b4,	// (0x00017d7f) scroll_pane_cp19_ParamLimits

0xb0b4,	// (0x00017d7f) scroll_pane_cp19

0x362a,	// (0x000102f5) bg_popup_window_pane_cp20

0xb0c8,	// (0x00017d93) listscroll_popup_fast_wide_pane

0x3751,	// (0x0001041c) grid_indicator_nsta_pane

0xb0d0,	// (0x00017d9b) clock_nsta_pane_g1

0xb0d9,	// (0x00017da4) clock_nsta_pane_t1

0xb0f5,	// (0x00017dc0) cell_indicator_nsta_pane_ParamLimits

0xb0f5,	// (0x00017dc0) cell_indicator_nsta_pane

0xb12d,	// (0x00017df8) cell_indicator_nsta_pane_g1

0xb13b,	// (0x00017e06) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0001c772) cell_indicator_nsta_pane_g

0xb151,	// (0x00017e1c) clock_nsta_pane_cp

0xb159,	// (0x00017e24) indicator_nsta_pane_cp

0xb162,	// (0x00017e2d) nsta_clock_indic_pane_g1

0x3830,	// (0x000104fb) grid_indicator_pane

0x457e,	// (0x00011249) scroll_pane_cp29

0x56f1,	// (0x000123bc) indicator_nsta_pane_cp2_ParamLimits

0x56f1,	// (0x000123bc) indicator_nsta_pane_cp2

0x3751,	// (0x0001041c) main_apps_wheel_pane

0x9039,	// (0x00015d04) form_midp_field_text_pane_ParamLimits

0x9188,	// (0x00015e53) scroll_bar_cp050_ParamLimits

0xb1cb,	// (0x00017e96) cell_indicator_pane_ParamLimits

0xb1cb,	// (0x00017e96) cell_indicator_pane

0xb1e3,	// (0x00017eae) cell_indicator_pane_g1

0xb1ed,	// (0x00017eb8) grid_wheel_folder_pane_ParamLimits

0xb1ed,	// (0x00017eb8) grid_wheel_folder_pane

0xb201,	// (0x00017ecc) list_wheel_apps_pane_ParamLimits

0xb201,	// (0x00017ecc) list_wheel_apps_pane

0xb214,	// (0x00017edf) main_apps_wheel_pane_g1_ParamLimits

0xb214,	// (0x00017edf) main_apps_wheel_pane_g1

0xb230,	// (0x00017efb) main_apps_wheel_pane_g2_ParamLimits

0xb230,	// (0x00017efb) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0001c78e) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0001c78e) main_apps_wheel_pane_g

0xb24c,	// (0x00017f17) main_apps_wheel_pane_t1_ParamLimits

0xb24c,	// (0x00017f17) main_apps_wheel_pane_t1

0xb275,	// (0x00017f40) list_wheel_apps_pane_g1

0xb27d,	// (0x00017f48) list_wheel_apps_pane_g2

0xb285,	// (0x00017f50) list_wheel_apps_pane_g3

0xb28d,	// (0x00017f58) list_wheel_apps_pane_g4

0xb297,	// (0x00017f62) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0001c793) list_wheel_apps_pane_g

0x8259,	// (0x00014f24) navi_icon_text_pane

0x8753,	// (0x0001541e) aid_fill_nsta

0xb2b8,	// (0x00017f83) navi_icon_text_pane_g1

0xb2c7,	// (0x00017f92) navi_icon_text_pane_t1

0x80ef,	// (0x00014dba) list_set_graphic_pane_t1_ParamLimits

0x80ef,	// (0x00014dba) list_set_graphic_pane_t1

0x98d9,	// (0x000165a4) popup_midp_note_alarm_window_t6_ParamLimits

0x98d9,	// (0x000165a4) popup_midp_note_alarm_window_t6

0x98eb,	// (0x000165b6) popup_midp_note_alarm_window_t7_ParamLimits

0x98eb,	// (0x000165b6) popup_midp_note_alarm_window_t7

0x98fd,	// (0x000165c8) popup_midp_note_alarm_window_t8_ParamLimits

0x98fd,	// (0x000165c8) popup_midp_note_alarm_window_t8

0x990f,	// (0x000165da) popup_midp_note_alarm_window_t9_ParamLimits

0x990f,	// (0x000165da) popup_midp_note_alarm_window_t9

0x9921,	// (0x000165ec) popup_midp_note_alarm_window_t10_ParamLimits

0x9921,	// (0x000165ec) popup_midp_note_alarm_window_t10

0x9933,	// (0x000165fe) popup_midp_note_alarm_window_t11_ParamLimits

0x9933,	// (0x000165fe) popup_midp_note_alarm_window_t11

0x9945,	// (0x00016610) scroll_pane_cp17_ParamLimits

0x9945,	// (0x00016610) scroll_pane_cp17

0x620e,	// (0x00012ed9) volume_small_pane_cp_g1

0x651f,	// (0x000131ea) volume_small_pane_cp_g2

0x6528,	// (0x000131f3) volume_small_pane_cp_g3

0x6531,	// (0x000131fc) volume_small_pane_cp_g4

0x653a,	// (0x00013205) volume_small_pane_cp_g5

0x6543,	// (0x0001320e) volume_small_pane_cp_g6

0x654c,	// (0x00013217) volume_small_pane_cp_g7

0x6555,	// (0x00013220) volume_small_pane_cp_g8

0x655e,	// (0x00013229) volume_small_pane_cp_g9

0x6567,	// (0x00013232) volume_small_pane_cp_g10

0x84ae,	// (0x00015179) midp_ticker_pane_g1_ParamLimits

0x84ba,	// (0x00015185) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0001c424) midp_ticker_pane_g_ParamLimits

0x84c6,	// (0x00015191) midp_ticker_pane_t1_ParamLimits

0x8769,	// (0x00015434) aid_fill_nsta_2

0x9174,	// (0x00015e3f) list_form2_midp_pane

0xa353,	// (0x0001701e) midp_editing_number_pane_ParamLimits

0xa362,	// (0x0001702d) midp_ticker_pane_ParamLimits

0xb2dc,	// (0x00017fa7) form2_midp_field_pane

0xb300,	// (0x00017fcb) scroll_pane_cp51

0xb320,	// (0x00017feb) form2_midp_button_pane_ParamLimits

0xb320,	// (0x00017feb) form2_midp_button_pane

0xb332,	// (0x00017ffd) form2_midp_content_pane_ParamLimits

0xb332,	// (0x00017ffd) form2_midp_content_pane

0xb34c,	// (0x00018017) form2_midp_field_choice_group_pane

0xb354,	// (0x0001801f) form2_midp_field_pane_g1

0xb35c,	// (0x00018027) form2_midp_field_pane_g2

0xb364,	// (0x0001802f) form2_midp_field_pane_g3

0xb36c,	// (0x00018037) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0001c7b8) form2_midp_field_pane_g

0xb374,	// (0x0001803f) form2_midp_gauge_slider_pane

0xb37c,	// (0x00018047) form2_midp_gauge_wait_pane

0xb384,	// (0x0001804f) form2_midp_image_pane_ParamLimits

0xb384,	// (0x0001804f) form2_midp_image_pane

0xb39f,	// (0x0001806a) form2_midp_label_pane_ParamLimits

0xb39f,	// (0x0001806a) form2_midp_label_pane

0xb3be,	// (0x00018089) form2_midp_label_pane_cp_ParamLimits

0xb3be,	// (0x00018089) form2_midp_label_pane_cp

0xb3df,	// (0x000180aa) form2_midp_string_pane_ParamLimits

0xb3df,	// (0x000180aa) form2_midp_string_pane

0xb3f1,	// (0x000180bc) form2_midp_text_pane_ParamLimits

0xb3f1,	// (0x000180bc) form2_midp_text_pane

0xb412,	// (0x000180dd) form2_midp_time_pane

0xb422,	// (0x000180ed) input_focus_pane_cp51_ParamLimits

0xb422,	// (0x000180ed) input_focus_pane_cp51

0xb43a,	// (0x00018105) form2_midp_label_pane_t1_ParamLimits

0xb43a,	// (0x00018105) form2_midp_label_pane_t1

0xb480,	// (0x0001814b) form2_mdip_text_pane_t1_ParamLimits

0xb480,	// (0x0001814b) form2_mdip_text_pane_t1

0xb4a2,	// (0x0001816d) form2_midp_time_pane_t1

0xb4bd,	// (0x00018188) form2_midp_gauge_slider_pane_t1

0xb4cf,	// (0x0001819a) form2_midp_gauge_slider_pane_t2

0xb4e1,	// (0x000181ac) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0001c7c1) form2_midp_gauge_slider_pane_t

0xb4f3,	// (0x000181be) form2_midp_slider_pane

0xb4ff,	// (0x000181ca) form2_midp_gauge_wait_pane_t1

0xb50d,	// (0x000181d8) form2_midp_wait_pane_ParamLimits

0xb50d,	// (0x000181d8) form2_midp_wait_pane

0x8e6a,	// (0x00015b35) list_single_2graphic_pane_cp4_ParamLimits

0x8e6a,	// (0x00015b35) list_single_2graphic_pane_cp4

0xb538,	// (0x00018203) list_single_midp_graphic_pane_cp_ParamLimits

0xb538,	// (0x00018203) list_single_midp_graphic_pane_cp

0x362a,	// (0x000102f5) list_highlight_pane_cp20

0xb55c,	// (0x00018227) list_single_2graphic_pane_g1_cp4

0xa81e,	// (0x000174e9) list_single_2graphic_pane_g2_cp4

0xb564,	// (0x0001822f) list_single_2graphic_pane_t1_cp4

0x3751,	// (0x0001041c) list_highlight_pane_cp21

0xb573,	// (0x0001823e) list_single_midp_graphic_pane_g4_cp

0xb582,	// (0x0001824d) list_single_midp_graphic_pane_t1_cp

0xb597,	// (0x00018262) form2_mdip_string_pane_t1_ParamLimits

0xb597,	// (0x00018262) form2_mdip_string_pane_t1

0x362a,	// (0x000102f5) bg_wml_button_pane_cp2

0x34b1,	// (0x0001017c) form2_midp_image_pane_g1

0x3db0,	// (0x00010a7b) list_double_large_graphic_pane_g5_ParamLimits

0x3db0,	// (0x00010a7b) list_double_large_graphic_pane_g5

0x7c26,	// (0x000148f1) midp_form_pane_ParamLimits

0x3751,	// (0x0001041c) main_apps_wheel_pane_ParamLimits

0x5e0b,	// (0x00012ad6) popup_preview_window_ParamLimits

0x5e0b,	// (0x00012ad6) popup_preview_window

0x5ff2,	// (0x00012cbd) popup_touch_info_window_ParamLimits

0x5ff2,	// (0x00012cbd) popup_touch_info_window

0x6014,	// (0x00012cdf) popup_touch_menu_window_ParamLimits

0x6014,	// (0x00012cdf) popup_touch_menu_window

0x34a7,	// (0x00010172) bg_popup_sub_pane_cp6

0xb63c,	// (0x00018307) list_touch_menu_pane

0xb644,	// (0x0001830f) list_single_touch_menu_pane_ParamLimits

0xb644,	// (0x0001830f) list_single_touch_menu_pane

0xb65c,	// (0x00018327) list_single_touch_menu_pane_t1

0x3751,	// (0x0001041c) bg_popup_sub_pane_cp7_ParamLimits

0x3751,	// (0x0001041c) bg_popup_sub_pane_cp7

0xb66a,	// (0x00018335) heading_sub_pane

0xb672,	// (0x0001833d) list_touch_info_pane_ParamLimits

0xb672,	// (0x0001833d) list_touch_info_pane

0xb681,	// (0x0001834c) list_single_touch_info_pane_ParamLimits

0xb681,	// (0x0001834c) list_single_touch_info_pane

0xb693,	// (0x0001835e) list_single_touch_info_pane_t1

0xb6a1,	// (0x0001836c) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0001c7cf) list_single_touch_info_pane_t

0x83dd,	// (0x000150a8) bg_popup_heading_pane_cp

0xb6af,	// (0x0001837a) heading_sub_pane_t1

0x8db1,	// (0x00015a7c) bg_popup_preview_window_pane_cp_ParamLimits

0x8db1,	// (0x00015a7c) bg_popup_preview_window_pane_cp

0xb66a,	// (0x00018335) heading_preview_pane

0xb672,	// (0x0001833d) list_preview_pane_ParamLimits

0xb672,	// (0x0001833d) list_preview_pane

0xb6bd,	// (0x00018388) popup_preview_window_g1

0xb681,	// (0x0001834c) list_single_preview_pane_ParamLimits

0xb681,	// (0x0001834c) list_single_preview_pane

0xb6c5,	// (0x00018390) list_single_preview_pane_g1

0xb6cd,	// (0x00018398) list_single_preview_pane_t1

0xb693,	// (0x0001835e) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0001c7d4) list_single_preview_pane_t

0xb6db,	// (0x000183a6) bg_popup_heading_pane_cp2_ParamLimits

0xb6db,	// (0x000183a6) bg_popup_heading_pane_cp2

0xb6f1,	// (0x000183bc) heading_preview_pane_g1

0xb6f9,	// (0x000183c4) heading_preview_pane_t1_ParamLimits

0xb6f9,	// (0x000183c4) heading_preview_pane_t1

0x3847,	// (0x00010512) soft_indicator_pane_t1_ParamLimits

0x3d7c,	// (0x00010a47) scroll_pane_ParamLimits

0x4483,	// (0x0001114e) scroll_sc2_left_pane

0x447a,	// (0x00011145) scroll_sc2_right_pane

0x44a2,	// (0x0001116d) scroll_bg_pane_g1_ParamLimits

0x44b7,	// (0x00011182) scroll_bg_pane_g2_ParamLimits

0x44cf,	// (0x0001119a) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x0001c3af) scroll_bg_pane_g_ParamLimits

0x44a2,	// (0x0001116d) scroll_handle_pane_g1_ParamLimits

0x44f1,	// (0x000111bc) scroll_handle_pane_g2_ParamLimits

0x44cf,	// (0x0001119a) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0001c3b6) scroll_handle_pane_g_ParamLimits

0x5a52,	// (0x0001271d) popup_choice_list_window_ParamLimits

0x5a52,	// (0x0001271d) popup_choice_list_window

0x8ba7,	// (0x00015872) choice_list_pane

0x8c57,	// (0x00015922) cell_toolbar_pane_t1

0x8c7f,	// (0x0001594a) toolbar_button_pane_ParamLimits

0x9e15,	// (0x00016ae0) ai_gene_pane_1_t2_ParamLimits

0x9e15,	// (0x00016ae0) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x0001c5de) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x0001c5de) ai_gene_pane_1_t

0xb716,	// (0x000183e1) scroll_sc2_left_pane_g1

0xb716,	// (0x000183e1) scroll_sc2_right_pane_g1

0x8729,	// (0x000153f4) bg_popup_sub_pane_cp10

0xb720,	// (0x000183eb) list_choice_list_pane

0xb739,	// (0x00018404) list_single_choice_list_pane_ParamLimits

0xb739,	// (0x00018404) list_single_choice_list_pane

0xb751,	// (0x0001841c) list_single_choice_list_pane_g1

0x4090,	// (0x00010d5b) list_single_choice_list_pane_t1_ParamLimits

0x4090,	// (0x00010d5b) list_single_choice_list_pane_t1

0xb759,	// (0x00018424) choice_list_pane_g1

0xb761,	// (0x0001842c) choice_list_pane_t1

0x34a7,	// (0x00010172) input_focus_pane_cp11

0x426c,	// (0x00010f37) title_pane_stacon_g2_ParamLimits

0x426c,	// (0x00010f37) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0001c395) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001c395) title_pane_stacon_g

0x83dd,	// (0x000150a8) cursor_press_pane

0x5b0c,	// (0x000127d7) popup_fep_hwr_window_ParamLimits

0x5b0c,	// (0x000127d7) popup_fep_hwr_window

0x5b96,	// (0x00012861) popup_fep_vkb_window_ParamLimits

0x5b96,	// (0x00012861) popup_fep_vkb_window

0xb76f,	// (0x0001843a) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0001c7fd) fep_vkb_side_pane_g_ParamLimits

0x65a9,	// (0x00013274) fep_hwr_candidate_pane_ParamLimits

0x65a9,	// (0x00013274) fep_hwr_candidate_pane

0x65d3,	// (0x0001329e) fep_hwr_side_pane_ParamLimits

0x65d3,	// (0x0001329e) fep_hwr_side_pane

0x65f5,	// (0x000132c0) fep_hwr_top_pane_ParamLimits

0x65f5,	// (0x000132c0) fep_hwr_top_pane

0x660d,	// (0x000132d8) fep_hwr_write_pane_ParamLimits

0x660d,	// (0x000132d8) fep_hwr_write_pane

0xfb32,	// (0x0001c7fd) fep_vkb_side_pane_g

0xb777,	// (0x00018442) fep_hwr_top_pane_g1

0xb789,	// (0x00018454) fep_hwr_top_pane_g2

0x6647,	// (0x00013312) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0001c7d9) fep_hwr_top_pane_g

0x665c,	// (0x00013327) fep_hwr_top_text_pane

0x7d38,	// (0x00014a03) fep_hwr_top_text_pane_g1

0xb7bf,	// (0x0001848a) fep_hwr_top_text_pane_t1

0x6766,	// (0x00013431) fep_hwr_candidate_pane_g1

0xba0a,	// (0x000186d5) fep_vkb_keypad_pane_g3_ParamLimits

0xba0a,	// (0x000186d5) fep_vkb_keypad_pane_g3

0xba36,	// (0x00018701) fep_vkb_keypad_pane_g4_ParamLimits

0xba36,	// (0x00018701) fep_vkb_keypad_pane_g4

0xbaad,	// (0x00018778) fep_vkb_bottom_pane_g2_ParamLimits

0xbaad,	// (0x00018778) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0001c804) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0001c804) fep_vkb_bottom_pane_g

0xb716,	// (0x000183e1) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0001c80e) cell_vkb_side_pane_g

0xbb38,	// (0x00018803) cell_vkb_side_pane_t1

0xbb46,	// (0x00018811) cell_vkb_side_pane_t1_copy1

0xb716,	// (0x000183e1) bg_fep_vkb_candidate_pane_g2

0xbc8a,	// (0x00018955) cell_vkb_candidate_pane_ParamLimits

0xb7cd,	// (0x00018498) aid_size_cell_vkb_ParamLimits

0xb7cd,	// (0x00018498) aid_size_cell_vkb

0xbc8a,	// (0x00018955) cell_vkb_candidate_pane

0x678d,	// (0x00013458) bg_popup_fep_shadow_pane_g1

0xb85f,	// (0x0001852a) fep_vkb_bottom_pane_ParamLimits

0xb85f,	// (0x0001852a) fep_vkb_bottom_pane

0xb89c,	// (0x00018567) fep_vkb_candidate_pane_ParamLimits

0xb89c,	// (0x00018567) fep_vkb_candidate_pane

0xb8b8,	// (0x00018583) fep_vkb_keypad_pane_ParamLimits

0xb8b8,	// (0x00018583) fep_vkb_keypad_pane

0xb8eb,	// (0x000185b6) fep_vkb_side_pane_ParamLimits

0xb8eb,	// (0x000185b6) fep_vkb_side_pane

0xb927,	// (0x000185f2) fep_vkb_top_pane_ParamLimits

0xb927,	// (0x000185f2) fep_vkb_top_pane

0xb963,	// (0x0001862e) fep_vkb_top_pane_g1_ParamLimits

0xb963,	// (0x0001862e) fep_vkb_top_pane_g1

0xb972,	// (0x0001863d) fep_vkb_top_pane_g2_ParamLimits

0xb972,	// (0x0001863d) fep_vkb_top_pane_g2

0xb981,	// (0x0001864c) fep_vkb_top_pane_g3_ParamLimits

0xb981,	// (0x0001864c) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0001c7f4) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0001c7f4) fep_vkb_top_pane_g

0xb99f,	// (0x0001866a) fep_vkb_top_text_pane_ParamLimits

0xb99f,	// (0x0001866a) fep_vkb_top_text_pane

0xb9b0,	// (0x0001867b) fep_vkb_side_pane_g1_ParamLimits

0xb9b0,	// (0x0001867b) fep_vkb_side_pane_g1

0xb9f9,	// (0x000186c4) grid_vkb_side_pane_ParamLimits

0xb9f9,	// (0x000186c4) grid_vkb_side_pane

0x6795,	// (0x00013460) bg_popup_fep_shadow_pane_g2

0x679e,	// (0x00013469) bg_popup_fep_shadow_pane_g3

0x67a6,	// (0x00013471) bg_popup_fep_shadow_pane_g4

0x67af,	// (0x0001347a) bg_popup_fep_shadow_pane_g5

0x67b9,	// (0x00013484) bg_popup_fep_shadow_pane_g6

0x67c1,	// (0x0001348c) bg_popup_fep_shadow_pane_g7

0x3f83,	// (0x00010c4e) bg_popup_fep_shadow_pane_g8

0xba58,	// (0x00018723) grid_vkb_keypad_number_pane_ParamLimits

0xba58,	// (0x00018723) grid_vkb_keypad_number_pane

0xba6c,	// (0x00018737) grid_vkb_keypad_pane_ParamLimits

0xba6c,	// (0x00018737) grid_vkb_keypad_pane

0xba92,	// (0x0001875d) fep_vkb_bottom_pane_g1_ParamLimits

0xba92,	// (0x0001875d) fep_vkb_bottom_pane_g1

0xbabb,	// (0x00018786) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbabb,	// (0x00018786) grid_vkb_keypad_bottom_left_pane

0xbad0,	// (0x0001879b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbad0,	// (0x0001879b) grid_vkb_keypad_bottom_right_pane

0xbae5,	// (0x000187b0) fep_vkb_top_text_pane_g1

0xbb00,	// (0x000187cb) fep_vkb_top_text_pane_t1

0xbb15,	// (0x000187e0) cell_vkb_side_pane_ParamLimits

0xbb15,	// (0x000187e0) cell_vkb_side_pane

0xb716,	// (0x000183e1) cell_vkb_side_pane_g1

0xbb54,	// (0x0001881f) cell_vkb_keypad_pane_ParamLimits

0xbb54,	// (0x0001881f) cell_vkb_keypad_pane

0xbbe1,	// (0x000188ac) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0001c821) bg_popup_fep_shadow_pane_g

0x67d3,	// (0x0001349e) cell_hwr_side_pane_g1

0x67d3,	// (0x0001349e) cell_hwr_side_pane_g2

0xbbeb,	// (0x000188b6) cell_vkb_keypad_pane_t1

0xbbf9,	// (0x000188c4) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbbf9,	// (0x000188c4) cell_vkb_keypad_bottom_left_pane

0xbc16,	// (0x000188e1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbc16,	// (0x000188e1) cell_vkb_keypad_bottom_right_pane

0xb716,	// (0x000183e1) cell_vkb_keypad_bottom_left_pane_g1

0xb716,	// (0x000183e1) cell_vkb_keypad_bottom_right_pane_g1

0xbc4f,	// (0x0001891a) cell_vkb_keypad_number_pane_ParamLimits

0xbc4f,	// (0x0001891a) cell_vkb_keypad_number_pane

0xbc6e,	// (0x00018939) cell_vkb_keypad_number_pane_g1

0xbc78,	// (0x00018943) cell_vkb_keypad_number_pane_g2

0xbc81,	// (0x0001894c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0001c813) cell_vkb_keypad_number_pane_g

0xbbeb,	// (0x000188b6) cell_vkb_keypad_number_pane_t1

0xbcab,	// (0x00018976) fep_vkb_candidate_pane_g1

0x0001,

0xfb69,	// (0x0001c834) cell_hwr_side_pane_g

0xbcc4,	// (0x0001898f) cell_hwr_side_pane_t1

0x67dd,	// (0x000134a8) cell_hwr_side_pane_t1_copy1

0x67eb,	// (0x000134b6) cell_hwr_candidate_pane_g1

0x681a,	// (0x000134e5) cell_hwr_candidate_pane_t1

0xb716,	// (0x000183e1) cell_vkb_candidate_pane_g2

0xbd08,	// (0x000189d3) cell_vkb_candidate_pane_t1

0x6570,	// (0x0001323b) bg_popup_fep_shadow_pane_ParamLimits

0x6570,	// (0x0001323b) bg_popup_fep_shadow_pane

0x6627,	// (0x000132f2) bg_fep_hwr_top_pane_g4

0xb79b,	// (0x00018466) bg_hwr_side_pane_g1_ParamLimits

0xb79b,	// (0x00018466) bg_hwr_side_pane_g1

0x669a,	// (0x00013365) cell_hwr_side_pane_ParamLimits

0x669a,	// (0x00013365) cell_hwr_side_pane

0x66d7,	// (0x000133a2) fep_hwr_write_pane_g1_ParamLimits

0x66d7,	// (0x000133a2) fep_hwr_write_pane_g1

0x66e4,	// (0x000133af) fep_hwr_write_pane_g2_ParamLimits

0x66e4,	// (0x000133af) fep_hwr_write_pane_g2

0x66f1,	// (0x000133bc) fep_hwr_write_pane_g3_ParamLimits

0x66f1,	// (0x000133bc) fep_hwr_write_pane_g3

0x66ff,	// (0x000133ca) fep_hwr_write_pane_g4_ParamLimits

0x66ff,	// (0x000133ca) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0001c7e0) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0001c7e0) fep_hwr_write_pane_g

0x6627,	// (0x000132f2) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6627,	// (0x000132f2) bg_fep_hwr_candidate_pane_g2

0x6714,	// (0x000133df) cell_hwr_candidate_pane_ParamLimits

0x6714,	// (0x000133df) cell_hwr_candidate_pane

0x6766,	// (0x00013431) fep_hwr_candidate_pane_g1_ParamLimits

0xb7fb,	// (0x000184c6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb7fb,	// (0x000184c6) bg_popup_fep_shadow_pane_cp2

0xb991,	// (0x0001865c) fep_vkb_top_pane_g4_ParamLimits

0xb991,	// (0x0001865c) fep_vkb_top_pane_g4

0xb9d7,	// (0x000186a2) fep_vkb_side_pane_g2_ParamLimits

0xb9d7,	// (0x000186a2) fep_vkb_side_pane_g2

0x79a7,	// (0x00014672) list_setting_pane_t4_ParamLimits

0x79a7,	// (0x00014672) list_setting_pane_t4

0x7a23,	// (0x000146ee) list_setting_number_pane_t5_ParamLimits

0x7a23,	// (0x000146ee) list_setting_number_pane_t5

0x7d7f,	// (0x00014a4a) list_double_heading_pane_cp2_ParamLimits

0x7d7f,	// (0x00014a4a) list_double_heading_pane_cp2

0x3ecd,	// (0x00010b98) list_double_heading_pane_g1_cp2_ParamLimits

0x3ecd,	// (0x00010b98) list_double_heading_pane_g1_cp2

0x3ed9,	// (0x00010ba4) list_double_heading_pane_g2_cp2_ParamLimits

0x3ed9,	// (0x00010ba4) list_double_heading_pane_g2_cp2

0xbd16,	// (0x000189e1) list_double_heading_pane_t1_cp2_ParamLimits

0xbd16,	// (0x000189e1) list_double_heading_pane_t1_cp2

0xbd2c,	// (0x000189f7) list_double_heading_pane_t2_cp2_ParamLimits

0xbd2c,	// (0x000189f7) list_double_heading_pane_t2_cp2

0x349f,	// (0x0001016a) aid_value_unit2

0x527b,	// (0x00011f46) popup_preview_fixed_window

0x3927,	// (0x000105f2) bg_popup_preview_window_pane_cp02

0xbd3e,	// (0x00018a09) list_preview_fixed_pane

0xbd84,	// (0x00018a4f) list_empty_pane_fp_ParamLimits

0xbd84,	// (0x00018a4f) list_empty_pane_fp

0xbd84,	// (0x00018a4f) list_single_cale_day_pane_fp_ParamLimits

0xbd84,	// (0x00018a4f) list_single_cale_day_pane_fp

0xbd84,	// (0x00018a4f) list_single_graphic_heading_pane_fp_ParamLimits

0xbd84,	// (0x00018a4f) list_single_graphic_heading_pane_fp

0xbd84,	// (0x00018a4f) list_single_graphic_pane_fp_ParamLimits

0xbd84,	// (0x00018a4f) list_single_graphic_pane_fp

0xbd84,	// (0x00018a4f) list_single_heading_pane_fp_ParamLimits

0xbd84,	// (0x00018a4f) list_single_heading_pane_fp

0xbd84,	// (0x00018a4f) list_single_pane_fp_ParamLimits

0xbd84,	// (0x00018a4f) list_single_pane_fp

0xbd9d,	// (0x00018a68) list_single_pane_fp_g1_ParamLimits

0xbd9d,	// (0x00018a68) list_single_pane_fp_g1

0xbda9,	// (0x00018a74) list_single_pane_fp_g2_ParamLimits

0xbda9,	// (0x00018a74) list_single_pane_fp_g2

0xbdb5,	// (0x00018a80) list_single_pane_fp_g3_ParamLimits

0xbdb5,	// (0x00018a80) list_single_pane_fp_g3

0xbdc9,	// (0x00018a94) list_single_pane_fp_g4_ParamLimits

0xbdc9,	// (0x00018a94) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x0001c847) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x0001c847) list_single_pane_fp_g

0xbdd5,	// (0x00018aa0) list_single_pane_fp_t1_ParamLimits

0xbdd5,	// (0x00018aa0) list_single_pane_fp_t1

0xbdec,	// (0x00018ab7) list_single_graphic_pane_fp_g1_ParamLimits

0xbdec,	// (0x00018ab7) list_single_graphic_pane_fp_g1

0xbd9d,	// (0x00018a68) list_single_graphic_pane_fp_g2_ParamLimits

0xbd9d,	// (0x00018a68) list_single_graphic_pane_fp_g2

0xbda9,	// (0x00018a74) list_single_graphic_pane_fp_g3_ParamLimits

0xbda9,	// (0x00018a74) list_single_graphic_pane_fp_g3

0xbdb5,	// (0x00018a80) list_single_graphic_pane_fp_g4_ParamLimits

0xbdb5,	// (0x00018a80) list_single_graphic_pane_fp_g4

0xbdc9,	// (0x00018a94) list_single_graphic_pane_fp_g5_ParamLimits

0xbdc9,	// (0x00018a94) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x0001c850) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x0001c850) list_single_graphic_pane_fp_g

0xbdf8,	// (0x00018ac3) list_single_graphic_pane_fp_t1_ParamLimits

0xbdf8,	// (0x00018ac3) list_single_graphic_pane_fp_t1

0xbdec,	// (0x00018ab7) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xbdec,	// (0x00018ab7) list_single_graphic_heading_pane_fp_g1

0xbd9d,	// (0x00018a68) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbd9d,	// (0x00018a68) list_single_graphic_heading_pane_fp_g2

0xbda9,	// (0x00018a74) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xbda9,	// (0x00018a74) list_single_graphic_heading_pane_fp_g3

0xbdb5,	// (0x00018a80) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbdb5,	// (0x00018a80) list_single_graphic_heading_pane_fp_g4

0xbdc9,	// (0x00018a94) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbdc9,	// (0x00018a94) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0001c850) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0001c850) list_single_graphic_heading_pane_fp_g

0xbe0e,	// (0x00018ad9) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xbe0e,	// (0x00018ad9) list_single_graphic_heading_pane_fp_t1

0xbe24,	// (0x00018aef) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xbe24,	// (0x00018aef) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0001c85b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0001c85b) list_single_graphic_heading_pane_fp_t

0xbe36,	// (0x00018b01) list_single_cale_day_pane_fp_g1_ParamLimits

0xbe36,	// (0x00018b01) list_single_cale_day_pane_fp_g1

0xbe6e,	// (0x00018b39) list_single_cale_day_pane_fp_g2_ParamLimits

0xbe6e,	// (0x00018b39) list_single_cale_day_pane_fp_g2

0xbe7a,	// (0x00018b45) list_single_cale_day_pane_fp_g3_ParamLimits

0xbe7a,	// (0x00018b45) list_single_cale_day_pane_fp_g3

0xbea2,	// (0x00018b6d) list_single_cale_day_pane_fp_g4_ParamLimits

0xbea2,	// (0x00018b6d) list_single_cale_day_pane_fp_g4

0xbec6,	// (0x00018b91) list_single_cale_day_pane_fp_g5_ParamLimits

0xbec6,	// (0x00018b91) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x0001c860) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x0001c860) list_single_cale_day_pane_fp_g

0xbeea,	// (0x00018bb5) list_single_cale_day_pane_fp_t1_ParamLimits

0xbeea,	// (0x00018bb5) list_single_cale_day_pane_fp_t1

0xbf10,	// (0x00018bdb) list_single_cale_day_pane_fp_t2_ParamLimits

0xbf10,	// (0x00018bdb) list_single_cale_day_pane_fp_t2

0xbf29,	// (0x00018bf4) list_single_cale_day_pane_fp_t3_ParamLimits

0xbf29,	// (0x00018bf4) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x0001c86b) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x0001c86b) list_single_cale_day_pane_fp_t

0xbd9d,	// (0x00018a68) list_empty_pane_fp_g1_ParamLimits

0xbd9d,	// (0x00018a68) list_empty_pane_fp_g1

0xbf42,	// (0x00018c0d) list_empty_pane_fp_t1

0xbf50,	// (0x00018c1b) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x0001c872) list_empty_pane_fp_t

0xbd9d,	// (0x00018a68) list_single_heading_pane_fp_g1_ParamLimits

0xbd9d,	// (0x00018a68) list_single_heading_pane_fp_g1

0xbda9,	// (0x00018a74) list_single_heading_pane_fp_g2_ParamLimits

0xbda9,	// (0x00018a74) list_single_heading_pane_fp_g2

0xbdb5,	// (0x00018a80) list_single_heading_pane_fp_g3_ParamLimits

0xbdb5,	// (0x00018a80) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x0001c877) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0001c877) list_single_heading_pane_fp_g

0xbf5e,	// (0x00018c29) list_single_heading_pane_fp_t1_ParamLimits

0xbf5e,	// (0x00018c29) list_single_heading_pane_fp_t1

0xbf70,	// (0x00018c3b) list_single_heading_pane_fp_t2_ParamLimits

0xbf70,	// (0x00018c3b) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x0001c87e) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x0001c87e) list_single_heading_pane_fp_t

0x40a5,	// (0x00010d70) aid_size_cell_fast

0x390a,	// (0x000105d5) soft_indicator_pane_cp1_t1

0x40f0,	// (0x00010dbb) cell_app_pane_cp2_ParamLimits

0x40f0,	// (0x00010dbb) cell_app_pane_cp2

0x6592,	// (0x0001325d) fep_hwr_candidate_drop_down_list_pane

0x6780,	// (0x0001344b) fep_hwr_candidate_pane_g3_ParamLimits

0x6780,	// (0x0001344b) fep_hwr_candidate_pane_g3

0x2a3e,	// (0x0000f709) fep_hwr_candidate_pane_g4_ParamLimits

0x2a3e,	// (0x0000f709) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0001c7ed) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0001c7ed) fep_hwr_candidate_pane_g

0xb88b,	// (0x00018556) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb88b,	// (0x00018556) fep_vkb_candidate_drop_down_list_pane

0xbcb3,	// (0x0001897e) fep_vkb_candidate_pane_g3

0xbcbb,	// (0x00018986) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0001c81a) fep_vkb_candidate_pane_g

0x67eb,	// (0x000134b6) cell_hwr_candidate_pane_g1_ParamLimits

0x67f9,	// (0x000134c4) cell_hwr_candidate_pane_g3_ParamLimits

0x67f9,	// (0x000134c4) cell_hwr_candidate_pane_g3

0xc200,	// (0x00018ecb) cell_hwr_candidate_pane_g4_ParamLimits

0xc200,	// (0x00018ecb) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0001c839) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x0001c839) cell_hwr_candidate_pane_g

0xbcd2,	// (0x0001899d) cell_vkb_candidate_pane_g3_ParamLimits

0xbcd2,	// (0x0001899d) cell_vkb_candidate_pane_g3

0xbced,	// (0x000189b8) cell_vkb_candidate_pane_g4_ParamLimits

0xbced,	// (0x000189b8) cell_vkb_candidate_pane_g4

0xbf86,	// (0x00018c51) cell_app_pane_cp2_g1_ParamLimits

0xbf86,	// (0x00018c51) cell_app_pane_cp2_g1

0xbfa4,	// (0x00018c6f) cell_app_pane_cp2_g2_ParamLimits

0xbfa4,	// (0x00018c6f) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x0001c883) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x0001c883) cell_app_pane_cp2_g

0xbfb0,	// (0x00018c7b) cell_app_pane_cp2_t1_ParamLimits

0xbfb0,	// (0x00018c7b) cell_app_pane_cp2_t1

0x3ea7,	// (0x00010b72) grid_highlight_pane_cp1_ParamLimits

0x3ea7,	// (0x00010b72) grid_highlight_pane_cp1

0x6838,	// (0x00013503) cell_hwr_candidate_pane_cp1_ParamLimits

0x6838,	// (0x00013503) cell_hwr_candidate_pane_cp1

0x67eb,	// (0x000134b6) fep_hwr_candidate_drop_down_list_pane_g1

0x685c,	// (0x00013527) fep_hwr_candidate_drop_down_list_pane_g2

0x6869,	// (0x00013534) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x0001c888) fep_hwr_candidate_drop_down_list_pane_g

0x6876,	// (0x00013541) fep_hwr_candidate_drop_down_list_scroll_pane

0x687f,	// (0x0001354a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x687f,	// (0x0001354a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x688c,	// (0x00013557) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x688c,	// (0x00013557) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6899,	// (0x00013564) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6899,	// (0x00013564) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x68a6,	// (0x00013571) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x68a6,	// (0x00013571) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x68c1,	// (0x0001358c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x68c1,	// (0x0001358c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x68dc,	// (0x000135a7) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x68dc,	// (0x000135a7) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x68f7,	// (0x000135c2) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x68f7,	// (0x000135c2) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6912,	// (0x000135dd) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6912,	// (0x000135dd) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x0001c88f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x0001c88f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbfc2,	// (0x00018c8d) cell_vkb_candidate_pane_cp1_ParamLimits

0xbfc2,	// (0x00018c8d) cell_vkb_candidate_pane_cp1

0xb991,	// (0x0001865c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb991,	// (0x0001865c) fep_vkb_candidate_drop_down_list_pane_g1

0xbfe8,	// (0x00018cb3) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbfe8,	// (0x00018cb3) fep_vkb_candidate_drop_down_list_pane_g2

0xbff5,	// (0x00018cc0) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbff5,	// (0x00018cc0) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0001c8a0) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x0001c8a0) fep_vkb_candidate_drop_down_list_pane_g

0xc002,	// (0x00018ccd) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc002,	// (0x00018ccd) fep_vkb_candidate_drop_down_list_scroll_pane

0xc00f,	// (0x00018cda) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc00f,	// (0x00018cda) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc01c,	// (0x00018ce7) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc01c,	// (0x00018ce7) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc028,	// (0x00018cf3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc028,	// (0x00018cf3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc034,	// (0x00018cff) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc034,	// (0x00018cff) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc055,	// (0x00018d20) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc055,	// (0x00018d20) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc076,	// (0x00018d41) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc076,	// (0x00018d41) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc097,	// (0x00018d62) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc097,	// (0x00018d62) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc0b8,	// (0x00018d83) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc0b8,	// (0x00018d83) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0001c8a7) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0001c8a7) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x72e6,	// (0x00013fb1) title_pane_g1_ParamLimits

0x72f3,	// (0x00013fbe) title_pane_g2_ParamLimits

0xf554,	// (0x0001c21f) title_pane_g_ParamLimits

0x7d28,	// (0x000149f3) aid_call2_pane

0x7d30,	// (0x000149fb) aid_call_pane

0x7d38,	// (0x00014a03) popup_clock_analogue_window_g1

0x7d38,	// (0x00014a03) popup_clock_analogue_window_g2

0x55f0,	// (0x000122bb) popup_clock_analogue_window_g3

0x55f9,	// (0x000122c4) popup_clock_analogue_window_g4

0x34b1,	// (0x0001017c) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0001c3c4) popup_clock_analogue_window_g

0x5601,	// (0x000122cc) popup_clock_analogue_window_t1

0x560f,	// (0x000122da) clock_digital_number_pane_ParamLimits

0x560f,	// (0x000122da) clock_digital_number_pane

0x561b,	// (0x000122e6) clock_digital_number_pane_cp02_ParamLimits

0x561b,	// (0x000122e6) clock_digital_number_pane_cp02

0x5627,	// (0x000122f2) clock_digital_number_pane_cp03_ParamLimits

0x5627,	// (0x000122f2) clock_digital_number_pane_cp03

0x5633,	// (0x000122fe) clock_digital_number_pane_cp04_ParamLimits

0x5633,	// (0x000122fe) clock_digital_number_pane_cp04

0x563f,	// (0x0001230a) clock_digital_separator_pane_ParamLimits

0x563f,	// (0x0001230a) clock_digital_separator_pane

0x564b,	// (0x00012316) popup_clock_digital_window_t1_ParamLimits

0x564b,	// (0x00012316) popup_clock_digital_window_t1

0x34b1,	// (0x0001017c) clock_digital_number_pane_g1

0x34b1,	// (0x0001017c) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x0001c3cf) clock_digital_number_pane_g

0x34b1,	// (0x0001017c) clock_digital_separator_pane_g1

0x34b1,	// (0x0001017c) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x0001c3cf) clock_digital_separator_pane_g

0x8753,	// (0x0001541e) aid_fill_nsta_ParamLimits

0x88a3,	// (0x0001556e) indicator_nsta_pane_ParamLimits

0x8a34,	// (0x000156ff) popup_clock_analogue_window

0x8a34,	// (0x000156ff) popup_clock_digital_window

0x3751,	// (0x0001041c) grid_indicator_nsta_pane_ParamLimits

0xb0e7,	// (0x00017db2) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0001c76d) clock_nsta_pane_t

0x55b4,	// (0x0001227f) aid_size_max_handle

0x55be,	// (0x00012289) aid_size_min_handle

0x83dd,	// (0x000150a8) editor_scroll_pane

0xc0d3,	// (0x00018d9e) ex_editor_pane

0x406b,	// (0x00010d36) scroll_pane_cp13

0x3da8,	// (0x00010a73) scroll_pane_cp14

0x7d67,	// (0x00014a32) scroll_pane_cp36

0x7d95,	// (0x00014a60) list_single_graphic_hl_pane_cp2_ParamLimits

0x7d95,	// (0x00014a60) list_single_graphic_hl_pane_cp2

0xa3f3,	// (0x000170be) list_single_graphic_hl_pane_ParamLimits

0xa3f3,	// (0x000170be) list_single_graphic_hl_pane

0xc0db,	// (0x00018da6) aid_size_min_hl_cp1

0xc0e4,	// (0x00018daf) list_highlight_pane_cp34_ParamLimits

0xc0e4,	// (0x00018daf) list_highlight_pane_cp34

0xc0f5,	// (0x00018dc0) list_single_graphic_hl_pane_g1_ParamLimits

0xc0f5,	// (0x00018dc0) list_single_graphic_hl_pane_g1

0xc102,	// (0x00018dcd) list_single_graphic_hl_pane_g2_ParamLimits

0xc102,	// (0x00018dcd) list_single_graphic_hl_pane_g2

0xc102,	// (0x00018dcd) list_single_graphic_hl_pane_g3_ParamLimits

0xc102,	// (0x00018dcd) list_single_graphic_hl_pane_g3

0xa93c,	// (0x00017607) list_single_graphic_hl_pane_g4_ParamLimits

0xa93c,	// (0x00017607) list_single_graphic_hl_pane_g4

0xc10e,	// (0x00018dd9) list_single_graphic_hl_pane_g5_ParamLimits

0xc10e,	// (0x00018dd9) list_single_graphic_hl_pane_g5

0x0004,

0xfbed,	// (0x0001c8b8) list_single_graphic_hl_pane_g_ParamLimits

0xfbed,	// (0x0001c8b8) list_single_graphic_hl_pane_g

0xc122,	// (0x00018ded) list_single_graphic_hl_pane_t1_ParamLimits

0xc122,	// (0x00018ded) list_single_graphic_hl_pane_t1

0xc138,	// (0x00018e03) aid_size_min_hl_cp2

0xc141,	// (0x00018e0c) list_highlight_pane_cp34_cp2_ParamLimits

0xc141,	// (0x00018e0c) list_highlight_pane_cp34_cp2

0xc0f5,	// (0x00018dc0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc0f5,	// (0x00018dc0) list_single_graphic_hl_pane_g1_cp2

0xc14e,	// (0x00018e19) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc14e,	// (0x00018e19) list_single_graphic_hl_pane_g2_cp2

0xc15a,	// (0x00018e25) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc15a,	// (0x00018e25) list_single_graphic_hl_pane_g3_cp2

0x3e69,	// (0x00010b34) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3e69,	// (0x00010b34) list_single_graphic_hl_pane_g4_cp2

0xc168,	// (0x00018e33) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc168,	// (0x00018e33) list_single_graphic_hl_pane_g5_cp2

0x5904,	// (0x000125cf) control_pane_g4_ParamLimits

0x5904,	// (0x000125cf) control_pane_g4

0x8729,	// (0x000153f4) bg_popup_sub_pane_cp10_ParamLimits

0xb720,	// (0x000183eb) list_choice_list_pane_ParamLimits

0xb72f,	// (0x000183fa) scroll_pane_cp23

0x3927,	// (0x000105f2) bg_popup_preview_window_pane_cp02_ParamLimits

0xbd3e,	// (0x00018a09) list_preview_fixed_pane_ParamLimits

0xbd54,	// (0x00018a1f) list_preview_fixed_pane_cp_ParamLimits

0xbd54,	// (0x00018a1f) list_preview_fixed_pane_cp

0xbd60,	// (0x00018a2b) popup_preview_fixed_window_g1_ParamLimits

0xbd60,	// (0x00018a2b) popup_preview_fixed_window_g1

0xbd6c,	// (0x00018a37) popup_preview_fixed_window_g2_ParamLimits

0xbd6c,	// (0x00018a37) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x0001c840) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x0001c840) popup_preview_fixed_window_g

0x5526,	// (0x000121f1) aid_navi_side_left_pane_ParamLimits

0x553b,	// (0x00012206) aid_navi_side_right_pane_ParamLimits

0x5553,	// (0x0001221e) navi_icon_pane_stacon_ParamLimits

0x5567,	// (0x00012232) navi_navi_pane_stacon_ParamLimits

0x5553,	// (0x0001221e) navi_text_pane_stacon_ParamLimits

0x5132,	// (0x00011dfd) main_text_info_pane

0xc192,	// (0x00018e5d) listscroll_text_info_pane

0xc19a,	// (0x00018e65) list_text_info_pane_ParamLimits

0xc19a,	// (0x00018e65) list_text_info_pane

0xc1a9,	// (0x00018e74) scroll_pane_cp24_ParamLimits

0xc1a9,	// (0x00018e74) scroll_pane_cp24

0xc22a,	// (0x00018ef5) list_text_info_pane_t1_ParamLimits

0xc22a,	// (0x00018ef5) list_text_info_pane_t1

0x5a74,	// (0x0001273f) popup_fast_swap2_window_ParamLimits

0x5a74,	// (0x0001273f) popup_fast_swap2_window

0xc24f,	// (0x00018f1a) aid_size_cell_fast2

0x34a7,	// (0x00010172) bg_popup_window_pane_cp17

0x91a0,	// (0x00015e6b) heading_pane_cp2

0x3b2d,	// (0x000107f8) listscroll_fast2_pane

0xc259,	// (0x00018f24) grid_fast2_pane

0xc263,	// (0x00018f2e) listscroll_fast2_pane_g1

0xc26d,	// (0x00018f38) listscroll_fast2_pane_g2

0x0001,

0xfbf8,	// (0x0001c8c3) listscroll_fast2_pane_g

0x406b,	// (0x00010d36) scroll_pane_cp26

0xc277,	// (0x00018f42) cell_fast2_pane_ParamLimits

0xc277,	// (0x00018f42) cell_fast2_pane

0xc28e,	// (0x00018f59) cell_fast2_pane_g1

0xc297,	// (0x00018f62) cell_fast2_pane_g2

0xc2a0,	// (0x00018f6b) cell_fast2_pane_g3

0x0002,

0xfbfd,	// (0x0001c8c8) cell_fast2_pane_g

0x3b6f,	// (0x0001083a) grid_highlight_pane_cp9

0x5a36,	// (0x00012701) main_eswt_pane_ParamLimits

0x5a36,	// (0x00012701) main_eswt_pane

0xc221,	// (0x00018eec) list_single_text_info_pane

0xc2a8,	// (0x00018f73) eswt_ctrl_button_pane

0xc2a8,	// (0x00018f73) eswt_ctrl_canvas_pane

0xc2b0,	// (0x00018f7b) eswt_ctrl_combo_pane

0xc2a8,	// (0x00018f73) eswt_ctrl_default_pane

0xc2a8,	// (0x00018f73) eswt_ctrl_label_pane

0xc2b8,	// (0x00018f83) eswt_ctrl_wait_pane

0xc2c0,	// (0x00018f8b) eswt_shell_pane

0x34a7,	// (0x00010172) listscroll_eswt_app_pane

0xc2e0,	// (0x00018fab) popup_eswt_tasktip_window_ParamLimits

0xc2e0,	// (0x00018fab) popup_eswt_tasktip_window

0x8db1,	// (0x00015a7c) bg_popup_window_pane_cp18

0xc2f1,	// (0x00018fbc) eswt_control_pane_g1_ParamLimits

0xc2f1,	// (0x00018fbc) eswt_control_pane_g1

0xc2fe,	// (0x00018fc9) eswt_control_pane_g2_ParamLimits

0xc2fe,	// (0x00018fc9) eswt_control_pane_g2

0xc30b,	// (0x00018fd6) eswt_control_pane_g3_ParamLimits

0xc30b,	// (0x00018fd6) eswt_control_pane_g3

0xc318,	// (0x00018fe3) eswt_control_pane_g4_ParamLimits

0xc318,	// (0x00018fe3) eswt_control_pane_g4

0x0003,

0xfc04,	// (0x0001c8cf) eswt_control_pane_g_ParamLimits

0xfc04,	// (0x0001c8cf) eswt_control_pane_g

0x3ea7,	// (0x00010b72) bg_button_pane_ParamLimits

0x3ea7,	// (0x00010b72) bg_button_pane

0x3b84,	// (0x0001084f) common_borders_pane_copy2_ParamLimits

0x3b84,	// (0x0001084f) common_borders_pane_copy2

0xc325,	// (0x00018ff0) control_button_pane_g1_ParamLimits

0xc325,	// (0x00018ff0) control_button_pane_g1

0xc331,	// (0x00018ffc) control_button_pane_g2_ParamLimits

0xc331,	// (0x00018ffc) control_button_pane_g2

0xc33d,	// (0x00019008) control_button_pane_g3_ParamLimits

0xc33d,	// (0x00019008) control_button_pane_g3

0x0002,

0xfc0d,	// (0x0001c8d8) control_button_pane_g_ParamLimits

0xfc0d,	// (0x0001c8d8) control_button_pane_g

0xc351,	// (0x0001901c) control_button_pane_t1

0xc35f,	// (0x0001902a) control_button_pane_t2

0x0001,

0xfc14,	// (0x0001c8df) control_button_pane_t

0x8c8b,	// (0x00015956) bg_button_pane_g1

0x8c9b,	// (0x00015966) bg_button_pane_g2

0x8c93,	// (0x0001595e) bg_button_pane_g3

0x8cab,	// (0x00015976) bg_button_pane_g4

0x8ca3,	// (0x0001596e) bg_button_pane_g5

0x8cb3,	// (0x0001597e) bg_button_pane_g6

0x8cbb,	// (0x00015986) bg_button_pane_g7

0x8ccb,	// (0x00015996) bg_button_pane_g8

0x8cc3,	// (0x0001598e) bg_button_pane_g9

0x0008,

0xf867,	// (0x0001c532) bg_button_pane_g

0xb6db,	// (0x000183a6) common_borders_pane_ParamLimits

0xb6db,	// (0x000183a6) common_borders_pane

0xc2f1,	// (0x00018fbc) eswt_control_pane_g1_copy1_ParamLimits

0xc2f1,	// (0x00018fbc) eswt_control_pane_g1_copy1

0xc2fe,	// (0x00018fc9) eswt_control_pane_g2_copy1_ParamLimits

0xc2fe,	// (0x00018fc9) eswt_control_pane_g2_copy1

0xc30b,	// (0x00018fd6) eswt_control_pane_g3_copy1_ParamLimits

0xc30b,	// (0x00018fd6) eswt_control_pane_g3_copy1

0xc318,	// (0x00018fe3) eswt_control_pane_g4_copy1_ParamLimits

0xc318,	// (0x00018fe3) eswt_control_pane_g4_copy1

0xb716,	// (0x000183e1) bg_eswt_ctrl_canvas_pane_g1

0xb6db,	// (0x000183a6) common_borders_pane_cp2_ParamLimits

0xb6db,	// (0x000183a6) common_borders_pane_cp2

0xb6db,	// (0x000183a6) common_borders_pane_cp3_ParamLimits

0xb6db,	// (0x000183a6) common_borders_pane_cp3

0xc36d,	// (0x00019038) separator_horizontal_pane

0xc375,	// (0x00019040) separator_vertical_pane

0xc2f1,	// (0x00018fbc) eswt_control_pane_g1_copy2_ParamLimits

0xc2f1,	// (0x00018fbc) eswt_control_pane_g1_copy2

0xc2fe,	// (0x00018fc9) eswt_control_pane_g2_copy2_ParamLimits

0xc2fe,	// (0x00018fc9) eswt_control_pane_g2_copy2

0xc30b,	// (0x00018fd6) eswt_control_pane_g3_copy2_ParamLimits

0xc30b,	// (0x00018fd6) eswt_control_pane_g3_copy2

0xc318,	// (0x00018fe3) eswt_control_pane_g4_copy2_ParamLimits

0xc318,	// (0x00018fe3) eswt_control_pane_g4_copy2

0x34a7,	// (0x00010172) common_borders_pane_cp4

0xc37e,	// (0x00019049) separator_horizontal_pane_g1

0xc387,	// (0x00019052) separator_horizontal_pane_g2

0xc390,	// (0x0001905b) separator_horizontal_pane_g3

0x0002,

0xfc19,	// (0x0001c8e4) separator_horizontal_pane_g

0xc2f1,	// (0x00018fbc) eswt_control_pane_g1_copy3_ParamLimits

0xc2f1,	// (0x00018fbc) eswt_control_pane_g1_copy3

0xc2fe,	// (0x00018fc9) eswt_control_pane_g2_copy3_ParamLimits

0xc2fe,	// (0x00018fc9) eswt_control_pane_g2_copy3

0xc30b,	// (0x00018fd6) eswt_control_pane_g3_copy3_ParamLimits

0xc30b,	// (0x00018fd6) eswt_control_pane_g3_copy3

0xc318,	// (0x00018fe3) eswt_control_pane_g4_copy3_ParamLimits

0xc318,	// (0x00018fe3) eswt_control_pane_g4_copy3

0x34a7,	// (0x00010172) common_borders_pane_cp5

0xc399,	// (0x00019064) separator_vertical_pane_g1

0xc3a2,	// (0x0001906d) separator_vertical_pane_g2

0xc3ab,	// (0x00019076) separator_vertical_pane_g3

0x0002,

0xfc20,	// (0x0001c8eb) separator_vertical_pane_g

0xc2f1,	// (0x00018fbc) eswt_control_pane_g1_copy4_ParamLimits

0xc2f1,	// (0x00018fbc) eswt_control_pane_g1_copy4

0xc2fe,	// (0x00018fc9) eswt_control_pane_g2_copy4_ParamLimits

0xc2fe,	// (0x00018fc9) eswt_control_pane_g2_copy4

0xc30b,	// (0x00018fd6) eswt_control_pane_g3_copy4_ParamLimits

0xc30b,	// (0x00018fd6) eswt_control_pane_g3_copy4

0xc318,	// (0x00018fe3) eswt_control_pane_g4_copy4_ParamLimits

0xc318,	// (0x00018fe3) eswt_control_pane_g4_copy4

0xc3b4,	// (0x0001907f) eswt_ctrl_combo_button_pane

0xc3bc,	// (0x00019087) eswt_ctrl_input_pane

0xc3c4,	// (0x0001908f) popup_choice_list_window_cp70

0xc3cc,	// (0x00019097) eswt_ctrl_input_pane_t1

0x34a7,	// (0x00010172) input_focus_pane_cp70

0xb6db,	// (0x000183a6) bg_button_pane_cp70_ParamLimits

0xb6db,	// (0x000183a6) bg_button_pane_cp70

0xc3da,	// (0x000190a5) eswt_ctrl_combo_button_pane_g1

0xc3e2,	// (0x000190ad) wait_bar_pane_cp70

0x8db1,	// (0x00015a7c) bg_popup_window_pane_cp70_ParamLimits

0x8db1,	// (0x00015a7c) bg_popup_window_pane_cp70

0xc3ea,	// (0x000190b5) popup_eswt_tasktip_window_t1

0xc400,	// (0x000190cb) wait_bar_pane_cp71_ParamLimits

0xc400,	// (0x000190cb) wait_bar_pane_cp71

0xc40c,	// (0x000190d7) grid_eswt_app_pane

0x4483,	// (0x0001114e) scroll_pane_cp70

0xc415,	// (0x000190e0) cell_eswt_app_pane_ParamLimits

0xc415,	// (0x000190e0) cell_eswt_app_pane

0xc447,	// (0x00019112) cell_eswt_app_pane_g1_ParamLimits

0xc447,	// (0x00019112) cell_eswt_app_pane_g1

0xc476,	// (0x00019141) cell_eswt_app_pane_g2_ParamLimits

0xc476,	// (0x00019141) cell_eswt_app_pane_g2

0x0001,

0xfc27,	// (0x0001c8f2) cell_eswt_app_pane_g_ParamLimits

0xfc27,	// (0x0001c8f2) cell_eswt_app_pane_g

0xc49f,	// (0x0001916a) cell_eswt_app_pane_t1_ParamLimits

0xc49f,	// (0x0001916a) cell_eswt_app_pane_t1

0xc4d1,	// (0x0001919c) grid_highlight_pane_cp70_ParamLimits

0xc4d1,	// (0x0001919c) grid_highlight_pane_cp70

0x82ae,	// (0x00014f79) set_content_pane_g1

0x8681,	// (0x0001534c) status_small_volume_pane

0x692d,	// (0x000135f8) status_small_volume_pane_g1

0x6935,	// (0x00013600) volume_small2_pane

0x693e,	// (0x00013609) volume_small2_pane_g1

0x6947,	// (0x00013612) volume_small2_pane_g2

0x6950,	// (0x0001361b) volume_small2_pane_g3

0x6959,	// (0x00013624) volume_small2_pane_g4

0x6962,	// (0x0001362d) volume_small2_pane_g5

0x696b,	// (0x00013636) volume_small2_pane_g6

0x6974,	// (0x0001363f) volume_small2_pane_g7

0x697d,	// (0x00013648) volume_small2_pane_g8

0x6986,	// (0x00013651) volume_small2_pane_g9

0x698f,	// (0x0001365a) volume_small2_pane_g10

0x0009,

0xfc2c,	// (0x0001c8f7) volume_small2_pane_g

0xbae5,	// (0x000187b0) fep_vkb_top_text_pane_g1_ParamLimits

0xbb00,	// (0x000187cb) fep_vkb_top_text_pane_t1_ParamLimits

0xbd78,	// (0x00018a43) popup_preview_fixed_window_g3_ParamLimits

0xbd78,	// (0x00018a43) popup_preview_fixed_window_g3

0x5f85,	// (0x00012c50) popup_toolbar_trans_pane

0xa166,	// (0x00016e31) aid_height_set_list_ParamLimits

0xa177,	// (0x00016e42) aid_size_parent_ParamLimits

0x8729,	// (0x000153f4) list_highlight_pane_cp2_ParamLimits

0x82ae,	// (0x00014f79) set_content_pane_g1_ParamLimits

0xa407,	// (0x000170d2) list_single_image_pane_ParamLimits

0xa407,	// (0x000170d2) list_single_image_pane

0xc4dd,	// (0x000191a8) aid_size_cell_image_ParamLimits

0xc4dd,	// (0x000191a8) aid_size_cell_image

0xc4ea,	// (0x000191b5) grid_single_image_pane_ParamLimits

0xc4ea,	// (0x000191b5) grid_single_image_pane

0x3ecd,	// (0x00010b98) list_single_image_pane_g1_ParamLimits

0x3ecd,	// (0x00010b98) list_single_image_pane_g1

0x3ed9,	// (0x00010ba4) list_single_image_pane_g2_ParamLimits

0x3ed9,	// (0x00010ba4) list_single_image_pane_g2

0x0001,

0xfc41,	// (0x0001c90c) list_single_image_pane_g_ParamLimits

0xfc41,	// (0x0001c90c) list_single_image_pane_g

0xc4f8,	// (0x000191c3) list_single_image_pane_t1_ParamLimits

0xc4f8,	// (0x000191c3) list_single_image_pane_t1

0xc50e,	// (0x000191d9) cell_image_list_pane_ParamLimits

0xc50e,	// (0x000191d9) cell_image_list_pane

0xc524,	// (0x000191ef) cell_image_list_pane_g1

0xc52d,	// (0x000191f8) cell_image_list_pane_g2

0x0001,

0xfc46,	// (0x0001c911) cell_image_list_pane_g

0xc536,	// (0x00019201) aid_size_cell_tb_trans_pane

0x3ea7,	// (0x00010b72) bg_tb_trans_pane

0xc548,	// (0x00019213) grid_tb_trans_pane

0x8c8b,	// (0x00015956) bg_tb_trans_pane_g1

0x8c9b,	// (0x00015966) bg_tb_trans_pane_g2

0x8c93,	// (0x0001595e) bg_tb_trans_pane_g3

0x8cab,	// (0x00015976) bg_tb_trans_pane_g4

0x8ca3,	// (0x0001596e) bg_tb_trans_pane_g5

0x8ccb,	// (0x00015996) bg_tb_trans_pane_g6

0x8cc3,	// (0x0001598e) bg_tb_trans_pane_g7

0x8cb3,	// (0x0001597e) bg_tb_trans_pane_g8

0x8cbb,	// (0x00015986) bg_tb_trans_pane_g9

0x0008,

0xfc4b,	// (0x0001c916) bg_tb_trans_pane_g

0xc55c,	// (0x00019227) cell_toolbar_trans_pane_ParamLimits

0xc55c,	// (0x00019227) cell_toolbar_trans_pane

0xb716,	// (0x000183e1) cell_toolbar_trans_pane_g1

0xb2e4,	// (0x00017faf) list_form2_midp_pane_t1

0xb2f2,	// (0x00017fbd) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0001c7b3) list_form2_midp_pane_t

0xb300,	// (0x00017fcb) scroll_pane_cp51_ParamLimits

0xb51d,	// (0x000181e8) form2_midp_wait_pane_g1

0xb526,	// (0x000181f1) form2_midp_wait_pane_g2

0xb52f,	// (0x000181fa) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0001c7c8) form2_midp_wait_pane_g

0x3751,	// (0x0001041c) list_highlight_pane_cp21_ParamLimits

0xb573,	// (0x0001823e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb582,	// (0x0001824d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa3ac,	// (0x00017077) list_single_2graphic_im_pane_ParamLimits

0xa3ac,	// (0x00017077) list_single_2graphic_im_pane

0xc582,	// (0x0001924d) list_single_2graphic_im_pane_g1_ParamLimits

0xc582,	// (0x0001924d) list_single_2graphic_im_pane_g1

0xc593,	// (0x0001925e) list_single_2graphic_im_pane_g2_ParamLimits

0xc593,	// (0x0001925e) list_single_2graphic_im_pane_g2

0xc59f,	// (0x0001926a) list_single_2graphic_im_pane_g3_ParamLimits

0xc59f,	// (0x0001926a) list_single_2graphic_im_pane_g3

0x0003,

0xfc5e,	// (0x0001c929) list_single_2graphic_im_pane_g_ParamLimits

0xfc5e,	// (0x0001c929) list_single_2graphic_im_pane_g

0xc5bf,	// (0x0001928a) list_single_2graphic_im_pane_t1_ParamLimits

0xc5bf,	// (0x0001928a) list_single_2graphic_im_pane_t1

0xbd84,	// (0x00018a4f) list_single_graphic_2heading_pane_fp_ParamLimits

0xbd84,	// (0x00018a4f) list_single_graphic_2heading_pane_fp

0xbdec,	// (0x00018ab7) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xbdec,	// (0x00018ab7) list_single_graphic_2heading_pane_fp_g1

0xbd9d,	// (0x00018a68) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbd9d,	// (0x00018a68) list_single_graphic_2heading_pane_fp_g2

0xbda9,	// (0x00018a74) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xbda9,	// (0x00018a74) list_single_graphic_2heading_pane_fp_g3

0xbdb5,	// (0x00018a80) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbdb5,	// (0x00018a80) list_single_graphic_2heading_pane_fp_g4

0xbdc9,	// (0x00018a94) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbdc9,	// (0x00018a94) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0001c850) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0001c850) list_single_graphic_2heading_pane_fp_g

0xc5f0,	// (0x000192bb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc5f0,	// (0x000192bb) list_single_graphic_2heading_pane_fp_t1

0xbe24,	// (0x00018aef) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xbe24,	// (0x00018aef) list_single_graphic_2heading_pane_fp_t2

0xc606,	// (0x000192d1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc606,	// (0x000192d1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc67,	// (0x0001c932) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc67,	// (0x0001c932) list_single_graphic_2heading_pane_fp_t

0xb7a7,	// (0x00018472) fep_hwr_write_pane_g5_ParamLimits

0xb7a7,	// (0x00018472) fep_hwr_write_pane_g5

0xb7b3,	// (0x0001847e) fep_hwr_write_pane_g6_ParamLimits

0xb7b3,	// (0x0001847e) fep_hwr_write_pane_g6

0xc2c0,	// (0x00018f8b) eswt_shell_pane_ParamLimits

0x8db1,	// (0x00015a7c) bg_popup_window_pane_cp18_ParamLimits

0xa095,	// (0x00016d60) heading_pane_cp70

0xc3ea,	// (0x000190b5) popup_eswt_tasktip_window_t1_ParamLimits

0x87aa,	// (0x00015475) aid_touch_tab_arrow_left

0x87b9,	// (0x00015484) aid_touch_tab_arrow_right

0x7304,	// (0x00013fcf) title_pane_g3_ParamLimits

0x7304,	// (0x00013fcf) title_pane_g3

0x3de9,	// (0x00010ab4) set_value_pane_g1

0x5f85,	// (0x00012c50) popup_toolbar_trans_pane_ParamLimits

0xc536,	// (0x00019201) aid_size_cell_tb_trans_pane_ParamLimits

0x3ea7,	// (0x00010b72) bg_tb_trans_pane_ParamLimits

0xc548,	// (0x00019213) grid_tb_trans_pane_ParamLimits

0x3927,	// (0x000105f2) cont_note_pane_ParamLimits

0x3927,	// (0x000105f2) cont_note_pane

0x3b84,	// (0x0001084f) cont_snote2_single_text_pane_ParamLimits

0x3b84,	// (0x0001084f) cont_snote2_single_text_pane

0x3b84,	// (0x0001084f) cont_snote2_single_graphic_pane_ParamLimits

0x3b84,	// (0x0001084f) cont_snote2_single_graphic_pane

0x93bc,	// (0x00016087) cont_note_wait_pane_ParamLimits

0x93bc,	// (0x00016087) cont_note_wait_pane

0x93bc,	// (0x00016087) cont_note_image_pane_ParamLimits

0x93bc,	// (0x00016087) cont_note_image_pane

0xc61c,	// (0x000192e7) popup_note2_window_g1_ParamLimits

0xc61c,	// (0x000192e7) popup_note2_window_g1

0xc64d,	// (0x00019318) popup_note2_window_t1_ParamLimits

0xc64d,	// (0x00019318) popup_note2_window_t1

0xc692,	// (0x0001935d) popup_note2_window_t2_ParamLimits

0xc692,	// (0x0001935d) popup_note2_window_t2

0xc6d7,	// (0x000193a2) popup_note2_window_t3_ParamLimits

0xc6d7,	// (0x000193a2) popup_note2_window_t3

0xc71c,	// (0x000193e7) popup_note2_window_t4_ParamLimits

0xc71c,	// (0x000193e7) popup_note2_window_t4

0x39ab,	// (0x00010676) popup_note2_window_t5_ParamLimits

0x39ab,	// (0x00010676) popup_note2_window_t5

0x0004,

0xfc73,	// (0x0001c93e) popup_note2_window_t_ParamLimits

0xfc73,	// (0x0001c93e) popup_note2_window_t

0xc74b,	// (0x00019416) popup_note2_image_window_g1_ParamLimits

0xc74b,	// (0x00019416) popup_note2_image_window_g1

0xc757,	// (0x00019422) popup_note2_image_window_g2_ParamLimits

0xc757,	// (0x00019422) popup_note2_image_window_g2

0x0001,

0xfc7e,	// (0x0001c949) popup_note2_image_window_g_ParamLimits

0xfc7e,	// (0x0001c949) popup_note2_image_window_g

0xc769,	// (0x00019434) popup_note2_image_window_t1_ParamLimits

0xc769,	// (0x00019434) popup_note2_image_window_t1

0xc781,	// (0x0001944c) popup_note2_image_window_t2_ParamLimits

0xc781,	// (0x0001944c) popup_note2_image_window_t2

0xc799,	// (0x00019464) popup_note2_image_window_t3_ParamLimits

0xc799,	// (0x00019464) popup_note2_image_window_t3

0x0002,

0xfc83,	// (0x0001c94e) popup_note2_image_window_t_ParamLimits

0xfc83,	// (0x0001c94e) popup_note2_image_window_t

0x93ca,	// (0x00016095) popup_note2_wait_window_g1_ParamLimits

0x93ca,	// (0x00016095) popup_note2_wait_window_g1

0xc7b5,	// (0x00019480) popup_note2_wait_window_g2_ParamLimits

0xc7b5,	// (0x00019480) popup_note2_wait_window_g2

0x93e2,	// (0x000160ad) popup_note2_wait_window_g3_ParamLimits

0x93e2,	// (0x000160ad) popup_note2_wait_window_g3

0x0002,

0xfc8a,	// (0x0001c955) popup_note2_wait_window_g_ParamLimits

0xfc8a,	// (0x0001c955) popup_note2_wait_window_g

0xc7c1,	// (0x0001948c) popup_note2_wait_window_t1_ParamLimits

0xc7c1,	// (0x0001948c) popup_note2_wait_window_t1

0xc7df,	// (0x000194aa) popup_note2_wait_window_t2_ParamLimits

0xc7df,	// (0x000194aa) popup_note2_wait_window_t2

0xc7fd,	// (0x000194c8) popup_note2_wait_window_t3_ParamLimits

0xc7fd,	// (0x000194c8) popup_note2_wait_window_t3

0xc80f,	// (0x000194da) popup_note2_wait_window_t4_ParamLimits

0xc80f,	// (0x000194da) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x0001c95c) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x0001c95c) popup_note2_wait_window_t

0xc821,	// (0x000194ec) wait_bar2_pane_ParamLimits

0xc821,	// (0x000194ec) wait_bar2_pane

0xc839,	// (0x00019504) popup_snote2_single_text_window_g1_ParamLimits

0xc839,	// (0x00019504) popup_snote2_single_text_window_g1

0xc861,	// (0x0001952c) popup_snote2_single_text_window_t1_ParamLimits

0xc861,	// (0x0001952c) popup_snote2_single_text_window_t1

0xc8ad,	// (0x00019578) popup_snote2_single_text_window_t2_ParamLimits

0xc8ad,	// (0x00019578) popup_snote2_single_text_window_t2

0xc8f9,	// (0x000195c4) popup_snote2_single_text_window_t3_ParamLimits

0xc8f9,	// (0x000195c4) popup_snote2_single_text_window_t3

0xc93a,	// (0x00019605) popup_snote2_single_text_window_t4_ParamLimits

0xc93a,	// (0x00019605) popup_snote2_single_text_window_t4

0xc970,	// (0x0001963b) popup_snote2_single_text_window_t5_ParamLimits

0xc970,	// (0x0001963b) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x0001c965) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x0001c965) popup_snote2_single_text_window_t

0xc99b,	// (0x00019666) popup_snote2_single_graphic_window_g1_ParamLimits

0xc99b,	// (0x00019666) popup_snote2_single_graphic_window_g1

0xc9c3,	// (0x0001968e) popup_snote2_single_graphic_window_g2_ParamLimits

0xc9c3,	// (0x0001968e) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x0001c970) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x0001c970) popup_snote2_single_graphic_window_g

0xc9eb,	// (0x000196b6) popup_snote2_single_graphic_window_t1_ParamLimits

0xc9eb,	// (0x000196b6) popup_snote2_single_graphic_window_t1

0xca37,	// (0x00019702) popup_snote2_single_graphic_window_t2_ParamLimits

0xca37,	// (0x00019702) popup_snote2_single_graphic_window_t2

0xc8f9,	// (0x000195c4) popup_snote2_single_graphic_window_t3_ParamLimits

0xc8f9,	// (0x000195c4) popup_snote2_single_graphic_window_t3

0xc93a,	// (0x00019605) popup_snote2_single_graphic_window_t4_ParamLimits

0xc93a,	// (0x00019605) popup_snote2_single_graphic_window_t4

0xc970,	// (0x0001963b) popup_snote2_single_graphic_window_t5_ParamLimits

0xc970,	// (0x0001963b) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x0001c975) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x0001c975) popup_snote2_single_graphic_window_t

0xb1aa,	// (0x00017e75) clock_nsta_pane_cp2_t1

0xb1aa,	// (0x00017e75) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0001c789) clock_nsta_pane_cp2_t

0x3ec1,	// (0x00010b8c) form_field_data_wide_pane_g1_ParamLimits

0x3ecd,	// (0x00010b98) form_field_data_wide_pane_g2_ParamLimits

0x3ecd,	// (0x00010b98) form_field_data_wide_pane_g2

0x3ed9,	// (0x00010ba4) form_field_data_wide_pane_g3_ParamLimits

0x3ed9,	// (0x00010ba4) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0001c347) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0001c347) form_field_data_wide_pane_g

0xb083,	// (0x00017d4e) grid_touch_3_pane_ParamLimits

0xb083,	// (0x00017d4e) grid_touch_3_pane

0xca83,	// (0x0001974e) cell_touch_3_pane_ParamLimits

0xca83,	// (0x0001974e) cell_touch_3_pane

0xb716,	// (0x000183e1) cell_touch_3_pane_g1

0xb716,	// (0x000183e1) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0001c80e) cell_touch_3_pane_g

0x39dd,	// (0x000106a8) cont_query_data_pane

0x39e5,	// (0x000106b0) cont_query_data_pane_cp1

0xcab6,	// (0x00019781) button_value_adjust_pane_cp7

0xcabe,	// (0x00019789) query_popup_pane_cp3

0x7e2d,	// (0x00014af8) bg_popup_sub_pane_cp22_ParamLimits

0x566a,	// (0x00012335) navi_navi_volume_pane_cp2

0x5685,	// (0x00012350) popup_side_volume_key_window_g2

0x5694,	// (0x0001235f) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x0001c3dd) popup_side_volume_key_window_g

0x56b1,	// (0x0001237c) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0001c3e4) popup_side_volume_key_window_t

0x8174,	// (0x00014e3f) popup_side_volume_key_window_ParamLimits

0x77a1,	// (0x0001446c) list_double_graphic_pane_g4_ParamLimits

0x77a1,	// (0x0001446c) list_double_graphic_pane_g4

0xa3db,	// (0x000170a6) list_single_2heading_msg_pane_ParamLimits

0xa3db,	// (0x000170a6) list_single_2heading_msg_pane

0xcaef,	// (0x000197ba) list_single_2heading_msg_pane_g1_ParamLimits

0xcaef,	// (0x000197ba) list_single_2heading_msg_pane_g1

0x3e69,	// (0x00010b34) list_single_2heading_msg_pane_g2_ParamLimits

0x3e69,	// (0x00010b34) list_single_2heading_msg_pane_g2

0xcafb,	// (0x000197c6) list_single_2heading_msg_pane_g3_ParamLimits

0xcafb,	// (0x000197c6) list_single_2heading_msg_pane_g3

0xcb07,	// (0x000197d2) list_single_2heading_msg_pane_g4_ParamLimits

0xcb07,	// (0x000197d2) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x0001c980) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x0001c980) list_single_2heading_msg_pane_g

0xcb1f,	// (0x000197ea) list_single_2heading_msg_pane_t1_ParamLimits

0xcb1f,	// (0x000197ea) list_single_2heading_msg_pane_t1

0xcb47,	// (0x00019812) list_single_2heading_msg_pane_t2_ParamLimits

0xcb47,	// (0x00019812) list_single_2heading_msg_pane_t2

0xcb76,	// (0x00019841) list_single_2heading_msg_pane_t3_ParamLimits

0xcb76,	// (0x00019841) list_single_2heading_msg_pane_t3

0xcbaf,	// (0x0001987a) list_single_2heading_msg_pane_t4_ParamLimits

0xcbaf,	// (0x0001987a) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x0001c989) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x0001c989) list_single_2heading_msg_pane_t

0x36f5,	// (0x000103c0) title_pane_g4_ParamLimits

0x36f5,	// (0x000103c0) title_pane_g4

0x5476,	// (0x00012141) title_pane_stacon_g3_ParamLimits

0x5476,	// (0x00012141) title_pane_stacon_g3

0xc5b3,	// (0x0001927e) list_single_2graphic_im_pane_g4_ParamLimits

0xc5b3,	// (0x0001927e) list_single_2graphic_im_pane_g4

0x9e32,	// (0x00016afd) popup_side_volume_key_window_cp

0xa725,	// (0x000173f0) main_idle_act2_pane_t1

0x60f5,	// (0x00012dc0) toolbar_button_pane_g10

0x75d2,	// (0x0001429d) popup_toolbar_window_cp1

0xb19b,	// (0x00017e66) clock_nsta_pane_cp_t1

0xb19b,	// (0x00017e66) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0001c784) clock_nsta_pane_cp_t

0x566a,	// (0x00012335) navi_navi_volume_pane_cp2_ParamLimits

0x5679,	// (0x00012344) popup_side_volume_key_window_g1_ParamLimits

0x5685,	// (0x00012350) popup_side_volume_key_window_g2_ParamLimits

0x5694,	// (0x0001235f) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x0001c3dd) popup_side_volume_key_window_g_ParamLimits

0x657e,	// (0x00013249) fep_hwr_aid_pane

0x6627,	// (0x000132f2) bg_fep_hwr_top_pane_g4_ParamLimits

0xb777,	// (0x00018442) fep_hwr_top_pane_g1_ParamLimits

0xb789,	// (0x00018454) fep_hwr_top_pane_g2_ParamLimits

0x6647,	// (0x00013312) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0001c7d9) fep_hwr_top_pane_g_ParamLimits

0x665c,	// (0x00013327) fep_hwr_top_text_pane_ParamLimits

0x9be7,	// (0x000168b2) aid_touch_tab_arrow_arrow_2

0x9bf0,	// (0x000168bb) aid_touch_tab_arrow_left_2

0x6592,	// (0x0001325d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x65c9,	// (0x00013294) fep_hwr_prediction_pane

0xb8df,	// (0x000185aa) fep_vkb_prediction_pane

0xb9e5,	// (0x000186b0) fep_vkb_side_pane_g3_ParamLimits

0xb9e5,	// (0x000186b0) fep_vkb_side_pane_g3

0x67eb,	// (0x000134b6) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x685c,	// (0x00013527) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6869,	// (0x00013534) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x0001c888) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6998,	// (0x00013663) fep_hwr_prediction_pane_g1

0x69a2,	// (0x0001366d) fep_hwr_prediction_pane_g2

0x69aa,	// (0x00013675) fep_hwr_prediction_pane_g3

0x69b2,	// (0x0001367d) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0001c992) fep_hwr_prediction_pane_g

0xcbd4,	// (0x0001989f) fep_vkb_prediction_pane_g1

0xcbde,	// (0x000198a9) fep_vkb_prediction_pane_g2

0xcbe6,	// (0x000198b1) fep_vkb_prediction_pane_g3

0xcbee,	// (0x000198b9) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0001c99b) fep_vkb_prediction_pane_g

0x63fe,	// (0x000130c9) slider_set_pane_g3

0x6412,	// (0x000130dd) slider_set_pane_g4

0x642a,	// (0x000130f5) slider_set_pane_g5

0x63fe,	// (0x000130c9) slider_set_pane_g6

0x6440,	// (0x0001310b) slider_set_pane_g7

0xa2fc,	// (0x00016fc7) slider_form_pane_g3

0xa305,	// (0x00016fd0) slider_form_pane_g4

0xa30d,	// (0x00016fd8) slider_form_pane_g5

0xa2fc,	// (0x00016fc7) slider_form_pane_g6

0xa315,	// (0x00016fe0) slider_form_pane_g7

0xaa12,	// (0x000176dd) slider_set_pane_vc_g3

0xaa1b,	// (0x000176e6) slider_set_pane_vc_g4

0xaa24,	// (0x000176ef) slider_set_pane_vc_g5

0xaa12,	// (0x000176dd) slider_set_pane_vc_g6

0xaa2d,	// (0x000176f8) slider_set_pane_vc_g7

0xae44,	// (0x00017b0f) slider_form_pane_vc_g1

0xae4d,	// (0x00017b18) slider_form_pane_vc_g2

0xae56,	// (0x00017b21) slider_form_pane_vc_g3

0xae44,	// (0x00017b0f) slider_form_pane_vc_g4

0xae5f,	// (0x00017b2a) slider_form_pane_vc_g5

0x0004,

0xfa8b,	// (0x0001c756) slider_form_pane_vc_g

0x5132,	// (0x00011dfd) main_idle_act3_pane

0xcbf6,	// (0x000198c1) ai3_links_pane

0xcbff,	// (0x000198ca) popup_ai3_data_window_ParamLimits

0xcbff,	// (0x000198ca) popup_ai3_data_window

0x34a7,	// (0x00010172) grid_ai3_links_pane

0xcc1d,	// (0x000198e8) cell_ai3_links_pane_ParamLimits

0xcc1d,	// (0x000198e8) cell_ai3_links_pane

0xcc37,	// (0x00019902) bg_popup_sub_pane_cp11

0xcc44,	// (0x0001990f) cell_ai3_links_pane_g1

0x34a7,	// (0x00010172) bg_popup_sub_pane_cp12

0xcc69,	// (0x00019934) heading_ai3_data_pane

0xcc71,	// (0x0001993c) list_ai3_gene_pane

0xcc7d,	// (0x00019948) popup_ai3_data_window_g1

0xcc85,	// (0x00019950) heading_ai3_data_pane_g1

0xcc8d,	// (0x00019958) heading_ai3_data_pane_t1

0xcc9b,	// (0x00019966) list_double_ai3_gene_pane_ParamLimits

0xcc9b,	// (0x00019966) list_double_ai3_gene_pane

0xcca8,	// (0x00019973) list_single_ai3_gene_pane_ParamLimits

0xcca8,	// (0x00019973) list_single_ai3_gene_pane

0xb6db,	// (0x000183a6) list_highlight_pane_cp7_ParamLimits

0xb6db,	// (0x000183a6) list_highlight_pane_cp7

0xccb5,	// (0x00019980) list_single_a13_gene_pane_t1_ParamLimits

0xccb5,	// (0x00019980) list_single_a13_gene_pane_t1

0xcccc,	// (0x00019997) list_single_ai3_gene_pane_g1

0xccd5,	// (0x000199a0) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x0001c9a4) list_single_ai3_gene_pane_g

0xccdd,	// (0x000199a8) list_double_ai3_gene_pane_g1_ParamLimits

0xccdd,	// (0x000199a8) list_double_ai3_gene_pane_g1

0xcce9,	// (0x000199b4) list_double_ai3_gene_pane_t1_ParamLimits

0xcce9,	// (0x000199b4) list_double_ai3_gene_pane_t1

0xcd05,	// (0x000199d0) list_double_ai3_gene_pane_t2_ParamLimits

0xcd05,	// (0x000199d0) list_double_ai3_gene_pane_t2

0xcd1a,	// (0x000199e5) list_double_ai3_gene_pane_t3_ParamLimits

0xcd1a,	// (0x000199e5) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x0001c9a9) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x0001c9a9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcacf,	// (0x0001979a) aid_size_min_col_2

0xcad9,	// (0x000197a4) aid_size_min_msg_ParamLimits

0xcad9,	// (0x000197a4) aid_size_min_msg

0xbaf1,	// (0x000187bc) fep_vkb_top_text_pane_g2_ParamLimits

0xbaf1,	// (0x000187bc) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0001c809) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0001c809) fep_vkb_top_text_pane_g

0x5132,	// (0x00011dfd) main_hc_apps_shell_pane

0xcd37,	// (0x00019a02) grid_hc_apps_pane_ParamLimits

0xcd37,	// (0x00019a02) grid_hc_apps_pane

0xcd46,	// (0x00019a11) list_hc_apps_pane

0xcd4e,	// (0x00019a19) scroll_pane_cp37_ParamLimits

0xcd4e,	// (0x00019a19) scroll_pane_cp37

0xcd5a,	// (0x00019a25) cell_hc_apps_pane_ParamLimits

0xcd5a,	// (0x00019a25) cell_hc_apps_pane

0xce12,	// (0x00019add) cell_hc_apps_pane_g1_ParamLimits

0xce12,	// (0x00019add) cell_hc_apps_pane_g1

0xce43,	// (0x00019b0e) cell_hc_apps_pane_g2_ParamLimits

0xce43,	// (0x00019b0e) cell_hc_apps_pane_g2

0xce5f,	// (0x00019b2a) cell_hc_apps_pane_g3_ParamLimits

0xce5f,	// (0x00019b2a) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x0001c9b0) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x0001c9b0) cell_hc_apps_pane_g

0xce81,	// (0x00019b4c) cell_hc_apps_pane_t1_ParamLimits

0xce81,	// (0x00019b4c) cell_hc_apps_pane_t1

0x3927,	// (0x000105f2) grid_highlight_pane_cp10_ParamLimits

0x3927,	// (0x000105f2) grid_highlight_pane_cp10

0xcec1,	// (0x00019b8c) list_single_hc_apps_pane_ParamLimits

0xcec1,	// (0x00019b8c) list_single_hc_apps_pane

0xcf00,	// (0x00019bcb) list_single_hc_apps_pane_g1

0xcf19,	// (0x00019be4) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x0001c9b7) list_single_hc_apps_pane_g

0xcf32,	// (0x00019bfd) list_single_hc_apps_pane_g2_copy1

0xcf4e,	// (0x00019c19) list_single_hc_apps_pane_t1

0x3751,	// (0x0001041c) bg_set_opt_pane_cp_ParamLimits

0x539d,	// (0x00012068) setting_slider_pane_t1_ParamLimits

0x53b6,	// (0x00012081) setting_slider_pane_t2_ParamLimits

0x53d0,	// (0x0001209b) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0001c22f) setting_slider_pane_t_ParamLimits

0x53e8,	// (0x000120b3) slider_set_pane_ParamLimits

0x5918,	// (0x000125e3) control_pane_g5_ParamLimits

0x5918,	// (0x000125e3) control_pane_g5

0xa129,	// (0x00016df4) slider_set_pane_g1_ParamLimits

0x63f2,	// (0x000130bd) slider_set_pane_g2_ParamLimits

0x63fe,	// (0x000130c9) slider_set_pane_g3_ParamLimits

0x6412,	// (0x000130dd) slider_set_pane_g4_ParamLimits

0x642a,	// (0x000130f5) slider_set_pane_g5_ParamLimits

0x63fe,	// (0x000130c9) slider_set_pane_g6_ParamLimits

0x6440,	// (0x0001310b) slider_set_pane_g7_ParamLimits

0xf965,	// (0x0001c630) slider_set_pane_g_ParamLimits

0x8259,	// (0x00014f24) navi_icon_text_pane_ParamLimits

0x8769,	// (0x00015434) aid_fill_nsta_2_ParamLimits

0x87aa,	// (0x00015475) aid_touch_tab_arrow_left_ParamLimits

0x87b9,	// (0x00015484) aid_touch_tab_arrow_right_ParamLimits

0x8826,	// (0x000154f1) clock_nsta_pane_ParamLimits

0x9bc3,	// (0x0001688e) navi_icon_pane_g1_ParamLimits

0x9bd2,	// (0x0001689d) navi_text_pane_t1_ParamLimits

0xb2b8,	// (0x00017f83) navi_icon_text_pane_g1_ParamLimits

0xb2c7,	// (0x00017f92) navi_icon_text_pane_t1_ParamLimits

0xcf00,	// (0x00019bcb) list_single_hc_apps_pane_g1_ParamLimits

0xcf19,	// (0x00019be4) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x0001c9b7) list_single_hc_apps_pane_g_ParamLimits

0xcf32,	// (0x00019bfd) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcf4e,	// (0x00019c19) list_single_hc_apps_pane_t1_ParamLimits

0x52a7,	// (0x00011f72) popup_toolbar2_fixed_window_ParamLimits

0x52a7,	// (0x00011f72) popup_toolbar2_fixed_window

0x5f7b,	// (0x00012c46) popup_toolbar2_float_window

0x34a7,	// (0x00010172) bg_popup_sub_pane_cp27

0xcf7c,	// (0x00019c47) grid_toolbar2_float_pane

0x34a7,	// (0x00010172) bg_popup_sub_pane_cp26

0xcf7c,	// (0x00019c47) grid_toolbar2_fixed_pane

0xcf84,	// (0x00019c4f) cell_toolbar2_fixed_pane_ParamLimits

0xcf84,	// (0x00019c4f) cell_toolbar2_fixed_pane

0xcf94,	// (0x00019c5f) cell_toolbar2_fixed_pane_g1

0xcf9d,	// (0x00019c68) toolbar2_fixed_button_pane

0x8c8b,	// (0x00015956) toolbar2_fixed_button_pane_g1

0x8c9b,	// (0x00015966) toolbar2_fixed_button_pane_g2

0x8c93,	// (0x0001595e) toolbar2_fixed_button_pane_g3

0x8cab,	// (0x00015976) toolbar2_fixed_button_pane_g4

0x8ca3,	// (0x0001596e) toolbar2_fixed_button_pane_g5

0x8cb3,	// (0x0001597e) toolbar2_fixed_button_pane_g6

0x8cbb,	// (0x00015986) toolbar2_fixed_button_pane_g7

0x8ccb,	// (0x00015996) toolbar2_fixed_button_pane_g8

0x8cc3,	// (0x0001598e) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x0001c532) toolbar2_fixed_button_pane_g

0xcfa5,	// (0x00019c70) cell_toolbar2_float_pane_ParamLimits

0xcfa5,	// (0x00019c70) cell_toolbar2_float_pane

0xcfb6,	// (0x00019c81) cell_toolbar2_float_pane_g1

0xcf9d,	// (0x00019c68) toolbar2_fixed_button_pane_cp

0xb84d,	// (0x00018518) fep_vkb_accented_list_pane_ParamLimits

0xb84d,	// (0x00018518) fep_vkb_accented_list_pane

0x67cb,	// (0x00013496) bg_popup_fep_shadow_pane_g9

0x83dd,	// (0x000150a8) bg_popup_fep_shadow_pane_cp3

0x4052,	// (0x00010d1d) list_accented_list_pane

0xcfbf,	// (0x00019c8a) list_single_accented_list_pane_ParamLimits

0xcfbf,	// (0x00019c8a) list_single_accented_list_pane

0x83dd,	// (0x000150a8) list_highlight_pane_cp10

0xcfd0,	// (0x00019c9b) list_single_accented_list_pane_t1

0x5ec1,	// (0x00012b8c) popup_slider_window_ParamLimits

0x5ec1,	// (0x00012b8c) popup_slider_window

0xcac6,	// (0x00019791) aid_indentation_list_msg

0xd09c,	// (0x00019d67) bg_popup_window_pane_cp19

0xd10a,	// (0x00019dd5) popup_slider_window_g1

0xd126,	// (0x00019df1) popup_slider_window_g2

0xd142,	// (0x00019e0d) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x0001c9bc) popup_slider_window_g

0xd19e,	// (0x00019e69) popup_slider_window_t1

0xd212,	// (0x00019edd) small_volume_slider_vertical_pane

0xb716,	// (0x000183e1) small_volume_slider_vertical_pane_g1

0xb716,	// (0x000183e1) small_volume_slider_vertical_pane_g2

0xd22e,	// (0x00019ef9) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x0001c9ce) small_volume_slider_vertical_pane_g

0x5055,	// (0x00011d20) area_side_right_pane_ParamLimits

0x5055,	// (0x00011d20) area_side_right_pane

0x69ba,	// (0x00013685) aid_size_side_button_ParamLimits

0x69ba,	// (0x00013685) aid_size_side_button

0x69ce,	// (0x00013699) grid_sctrl_middle_pane_ParamLimits

0x69ce,	// (0x00013699) grid_sctrl_middle_pane

0x69ee,	// (0x000136b9) sctrl_sk_bottom_pane

0x69ff,	// (0x000136ca) sctrl_sk_top_pane

0x6a11,	// (0x000136dc) aid_touch_sctrl_top

0x6a1e,	// (0x000136e9) bg_sctrl_sk_pane_ParamLimits

0x6a1e,	// (0x000136e9) bg_sctrl_sk_pane

0x6a2c,	// (0x000136f7) sctrl_sk_top_pane_g1

0x6a39,	// (0x00013704) sctrl_sk_top_pane_t1

0x6a11,	// (0x000136dc) aid_touch_sctrl_bottom

0x6a1e,	// (0x000136e9) bg_sctrl_sk_pane_cp_ParamLimits

0x6a1e,	// (0x000136e9) bg_sctrl_sk_pane_cp

0x6a54,	// (0x0001371f) sctrl_sk_bottom_pane_g1

0x6a39,	// (0x00013704) sctrl_sk_bottom_pane_t1

0x6a5d,	// (0x00013728) cell_sctrl_middle_pane_ParamLimits

0x6a5d,	// (0x00013728) cell_sctrl_middle_pane

0x6a7a,	// (0x00013745) aid_touch_sctrl_middle_ParamLimits

0x6a7a,	// (0x00013745) aid_touch_sctrl_middle

0x6a8c,	// (0x00013757) bg_sctrl_middle_pane_ParamLimits

0x6a8c,	// (0x00013757) bg_sctrl_middle_pane

0x67eb,	// (0x000134b6) cell_sctrl_middle_pane_g1_ParamLimits

0x67eb,	// (0x000134b6) cell_sctrl_middle_pane_g1

0x6a9a,	// (0x00013765) cell_sctrl_middle_pane_g2_ParamLimits

0x6a9a,	// (0x00013765) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x0001c9da) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x0001c9da) cell_sctrl_middle_pane_g

0x8c8b,	// (0x00015956) bg_sctrl_middle_pane_g1

0x8c93,	// (0x0001595e) bg_sctrl_middle_pane_g2

0x8c9b,	// (0x00015966) bg_sctrl_middle_pane_g3

0x8ca3,	// (0x0001596e) bg_sctrl_middle_pane_g4

0x8cab,	// (0x00015976) bg_sctrl_middle_pane_g5

0x8cb3,	// (0x0001597e) bg_sctrl_middle_pane_g6

0x8cbb,	// (0x00015986) bg_sctrl_middle_pane_g7

0x8cc3,	// (0x0001598e) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x0001c9df) bg_sctrl_middle_pane_g

0x8ccb,	// (0x00015996) bg_sctrl_middle_pane_g8_copy1

0x8c8b,	// (0x00015956) bg_sctrl_sk_pane_g1

0x8c9b,	// (0x00015966) bg_sctrl_sk_pane_g2

0x8c93,	// (0x0001595e) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x0001c532) bg_sctrl_sk_pane_g

0x3d42,	// (0x00010a0d) aid_size_touch_scroll_bar

0x8cab,	// (0x00015976) bg_sctrl_sk_pane_g4

0x8ca3,	// (0x0001596e) bg_sctrl_sk_pane_g5

0x8cb3,	// (0x0001597e) bg_sctrl_sk_pane_g6

0x8cbb,	// (0x00015986) bg_sctrl_sk_pane_g7

0x8ccb,	// (0x00015996) bg_sctrl_sk_pane_g8

0x8cc3,	// (0x0001598e) bg_sctrl_sk_pane_g9

0x5ad8,	// (0x000127a3) popup_fep_china_hwr2_fs_candidate_window

0x5ae2,	// (0x000127ad) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5ae2,	// (0x000127ad) popup_fep_china_hwr2_fs_control_window

0x67eb,	// (0x000134b6) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x0001c9d5) sctrl_sk_top_pane_g

0xd237,	// (0x00019f02) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd237,	// (0x00019f02) aid_fep_china_hwr2_fs_cell

0xd24a,	// (0x00019f15) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd24a,	// (0x00019f15) bg_popup_fep_shadow_pane_cp4

0xd263,	// (0x00019f2e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd263,	// (0x00019f2e) bg_popup_fep_shadow_pane_cp5

0xd275,	// (0x00019f40) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd275,	// (0x00019f40) popup_fep_china_hwr2_fs_control_bar_grid

0xd285,	// (0x00019f50) popup_fep_china_hwr2_fs_control_funtion_grid

0xd28d,	// (0x00019f58) aid_fep_china_hwr2_fs_candi_cell

0x34a7,	// (0x00010172) bg_popup_fep_shadow_pane_cp6

0xd297,	// (0x00019f62) popup_fep_china_hwr2_fs_candidate_grid

0xd2a1,	// (0x00019f6c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd2a1,	// (0x00019f6c) cell_fep_china_hwr2_fs_funtion_grid

0xb716,	// (0x000183e1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd2b9,	// (0x00019f84) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd2b9,	// (0x00019f84) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd2c7,	// (0x00019f92) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd2c7,	// (0x00019f92) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x0001c9f0) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x0001c9f0) cell_fep_china_hwr2_fs_funtion_grid_g

0xd2dd,	// (0x00019fa8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd2dd,	// (0x00019fa8) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd2f2,	// (0x00019fbd) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd2f2,	// (0x00019fbd) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x0001c9f5) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x0001c9f5) cell_fep_china_hwr2_fs_funtion_grid_t

0xd30e,	// (0x00019fd9) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd316,	// (0x00019fe1) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd31e,	// (0x00019fe9) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x0001c9fa) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd326,	// (0x00019ff1) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd326,	// (0x00019ff1) cell_fep_china_hwr2_fs_candidate_grid

0xd345,	// (0x0001a010) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd34d,	// (0x0001a018) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb716,	// (0x000183e1) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb716,	// (0x000183e1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0001c80e) cell_fep_china_hwr2_fs_candidate_grid_g

0xd355,	// (0x0001a020) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8839,	// (0x00015504) clock_nsta_pane_cp_24_ParamLimits

0x8839,	// (0x00015504) clock_nsta_pane_cp_24

0x88b9,	// (0x00015584) indicator_nsta_pane_cp_24_ParamLimits

0x88b9,	// (0x00015584) indicator_nsta_pane_cp_24

0x9a3f,	// (0x0001670a) heading_pane_g1

0x0001,

0xf8cc,	// (0x0001c597) heading_pane_g

0xa56c,	// (0x00017237) grid_sct_catagory_button_pane

0xa59e,	// (0x00017269) scroll_pane_cp5_ParamLimits

0xb30c,	// (0x00017fd7) button_value_adjust_pane_cp5_ParamLimits

0xb30c,	// (0x00017fd7) button_value_adjust_pane_cp5

0xb412,	// (0x000180dd) form2_midp_time_pane_ParamLimits

0xd363,	// (0x0001a02e) cell_sct_catagory_button_pane_ParamLimits

0xd363,	// (0x0001a02e) cell_sct_catagory_button_pane

0xb6db,	// (0x000183a6) bg_button_pane_cp01_ParamLimits

0xb6db,	// (0x000183a6) bg_button_pane_cp01

0xb716,	// (0x000183e1) cell_sct_catagory_button_pane_g1

0x5f02,	// (0x00012bcd) popup_tb_extension_window

0xd375,	// (0x0001a040) aid_size_cell_ext_ParamLimits

0xd375,	// (0x0001a040) aid_size_cell_ext

0x3927,	// (0x000105f2) bg_tb_trans_pane_cp1_ParamLimits

0x3927,	// (0x000105f2) bg_tb_trans_pane_cp1

0xd395,	// (0x0001a060) grid_tb_ext_pane_ParamLimits

0xd395,	// (0x0001a060) grid_tb_ext_pane

0xd3c5,	// (0x0001a090) cell_tb_ext_pane_ParamLimits

0xd3c5,	// (0x0001a090) cell_tb_ext_pane

0xd3dc,	// (0x0001a0a7) cell_tb_ext_pane_g1_ParamLimits

0xd3dc,	// (0x0001a0a7) cell_tb_ext_pane_g1

0xd3f9,	// (0x0001a0c4) cell_tb_ext_pane_t1

0x3927,	// (0x000105f2) list_highlight_pane_cp11_ParamLimits

0x3927,	// (0x000105f2) list_highlight_pane_cp11

0x52c6,	// (0x00011f91) popup_uni_indicator_window_ParamLimits

0x52c6,	// (0x00011f91) popup_uni_indicator_window

0x3ea7,	// (0x00010b72) bg_popup_sub_pane_cp14

0xd414,	// (0x0001a0df) list_uniindi_pane

0xd420,	// (0x0001a0eb) uniindi_top_pane

0x3927,	// (0x000105f2) bg_uniindi_top_pane

0xd441,	// (0x0001a10c) uniindi_top_pane_g1

0xd457,	// (0x0001a122) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x0001ca01) uniindi_top_pane_g

0xd481,	// (0x0001a14c) uniindi_top_pane_t1

0xd4ad,	// (0x0001a178) list_single_uniindi_pane_ParamLimits

0xd4ad,	// (0x0001a178) list_single_uniindi_pane

0xb716,	// (0x000183e1) bg_uniindi_top_pane_g1

0xd4bf,	// (0x0001a18a) list_single_uniindi_pane_g1

0xd4d2,	// (0x0001a19d) list_single_uniindi_pane_t1

0x5132,	// (0x00011dfd) control_bg_pane

0xd4f7,	// (0x0001a1c2) bg_sctrl_sk_pane_cp1

0xd500,	// (0x0001a1cb) bg_sctrl_sk_pane_cp2

0xd509,	// (0x0001a1d4) control_bg_pane_g1

0xd512,	// (0x0001a1dd) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x0001ca0a) control_bg_pane_g

0xb12d,	// (0x00017df8) cell_indicator_nsta_pane_g1_ParamLimits

0xb13b,	// (0x00017e06) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0001c772) cell_indicator_nsta_pane_g_ParamLimits

0xb4a2,	// (0x0001816d) form2_midp_time_pane_t1_ParamLimits

0x5a36,	// (0x00012701) main_idle_act4_pane_ParamLimits

0x5a36,	// (0x00012701) main_idle_act4_pane

0x5f02,	// (0x00012bcd) popup_tb_extension_window_ParamLimits

0xd3b7,	// (0x0001a082) tb_ext_find_pane_ParamLimits

0xd3b7,	// (0x0001a082) tb_ext_find_pane

0xd51b,	// (0x0001a1e6) ai_gene_pane_1_cp1

0x851a,	// (0x000151e5) ai_gene_pane_2_cp1

0xd523,	// (0x0001a1ee) list_single_idle_plugin_calendar_pane

0xd52c,	// (0x0001a1f7) list_single_idle_plugin_notification_pane

0xd535,	// (0x0001a200) list_single_idle_plugin_player_pane

0xd53e,	// (0x0001a209) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd53e,	// (0x0001a209) list_single_idle_plugin_shortcut_pane

0xd560,	// (0x0001a22b) main_idle_act4_pane_t1

0xd572,	// (0x0001a23d) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x0001ca0f) main_idle_act4_pane_t

0xd584,	// (0x0001a24f) middle_sk_idle_act4_pane_ParamLimits

0xd584,	// (0x0001a24f) middle_sk_idle_act4_pane

0xd59a,	// (0x0001a265) popup_clock_digital_analogue_window_cp2

0xd5b4,	// (0x0001a27f) shortcut_wheel_idle_act4_pane_ParamLimits

0xd5b4,	// (0x0001a27f) shortcut_wheel_idle_act4_pane

0xb716,	// (0x000183e1) shortcut_wheel_idle_act4_pane_g1

0xb716,	// (0x000183e1) shortcut_wheel_idle_act4_pane_g2

0xb716,	// (0x000183e1) shortcut_wheel_idle_act4_pane_g3

0xb716,	// (0x000183e1) shortcut_wheel_idle_act4_pane_g4

0xb716,	// (0x000183e1) shortcut_wheel_idle_act4_pane_g5

0xd5c8,	// (0x0001a293) shortcut_wheel_idle_act4_pane_g6

0xd5d0,	// (0x0001a29b) shortcut_wheel_idle_act4_pane_g7

0xd5d8,	// (0x0001a2a3) shortcut_wheel_idle_act4_pane_g8

0xd5e0,	// (0x0001a2ab) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x0001ca14) shortcut_wheel_idle_act4_pane_g

0xb991,	// (0x0001865c) middle_sk_idle_act4_pane_g1_ParamLimits

0xb991,	// (0x0001865c) middle_sk_idle_act4_pane_g1

0xd644,	// (0x0001a30f) middle_sk_idle_act4_pane_g2_ParamLimits

0xd644,	// (0x0001a30f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x0001ca37) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x0001ca37) middle_sk_idle_act4_pane_g

0xd650,	// (0x0001a31b) middle_sk_idle_act4_pane_t1_ParamLimits

0xd650,	// (0x0001a31b) middle_sk_idle_act4_pane_t1

0xd66d,	// (0x0001a338) grid_ai_shortcut_pane_ParamLimits

0xd66d,	// (0x0001a338) grid_ai_shortcut_pane

0xd686,	// (0x0001a351) list_highlight_pane_cp16_ParamLimits

0xd686,	// (0x0001a351) list_highlight_pane_cp16

0xd693,	// (0x0001a35e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd693,	// (0x0001a35e) list_single_idle_plugin_shortcut_pane_g1

0xd69f,	// (0x0001a36a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd69f,	// (0x0001a36a) list_single_idle_plugin_shortcut_pane_g2

0xd6b9,	// (0x0001a384) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd6b9,	// (0x0001a384) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x0001ca3c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x0001ca3c) list_single_idle_plugin_shortcut_pane_g

0xd6cc,	// (0x0001a397) cell_ai_shortcut_pane_ParamLimits

0xd6cc,	// (0x0001a397) cell_ai_shortcut_pane

0xd6ef,	// (0x0001a3ba) cell_ai_shortcut_pane_g1_ParamLimits

0xd6ef,	// (0x0001a3ba) cell_ai_shortcut_pane_g1

0xd51b,	// (0x0001a1e6) ai_gene_pane_1_cp2

0xd711,	// (0x0001a3dc) ai_gene_pane_2_cp2

0xd719,	// (0x0001a3e4) list_highlight_pane_cp15

0xd722,	// (0x0001a3ed) list_single_idle_plugin_calendar_pane_g1

0xd719,	// (0x0001a3e4) list_highlight_pane_cp17

0xd72a,	// (0x0001a3f5) list_single_idle_plugin_calendar_pane_g1_copy1

0xd732,	// (0x0001a3fd) list_single_idle_plugin_player_pane_g1

0xa7d3,	// (0x0001749e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x0001ca43) list_single_idle_plugin_player_pane_g

0xd73a,	// (0x0001a405) list_single_idle_plugin_player_pane_t1

0xd748,	// (0x0001a413) list_single_idle_plugin_player_pane_t2

0xd756,	// (0x0001a421) list_single_idle_plugin_player_pane_t3

0xd764,	// (0x0001a42f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x0001ca48) list_single_idle_plugin_player_pane_t

0xd772,	// (0x0001a43d) wait_bar_pane_cp15

0xd77a,	// (0x0001a445) grid_ai_notification_pane

0xa7d3,	// (0x0001749e) list_single_idle_plugin_notification_pane_g1

0xd783,	// (0x0001a44e) cell_ai_notification_pane_ParamLimits

0xd783,	// (0x0001a44e) cell_ai_notification_pane

0xd790,	// (0x0001a45b) cell_ai_notification_pane_g1

0xd798,	// (0x0001a463) cell_ai_notification_pane_t1

0xd7a6,	// (0x0001a471) tb_ext_find_button_pane

0xd7ae,	// (0x0001a479) tb_ext_find_pane_g1

0xd7b6,	// (0x0001a481) tb_ext_find_pane_t1

0x7d38,	// (0x00014a03) tb_ext_find_button_pane_g1

0xd7c4,	// (0x0001a48f) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x0001ca51) tb_ext_find_button_pane_g

0xd560,	// (0x0001a22b) main_idle_act4_pane_t1_ParamLimits

0xd572,	// (0x0001a23d) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x0001ca0f) main_idle_act4_pane_t_ParamLimits

0xd59a,	// (0x0001a265) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd5a8,	// (0x0001a273) sat_plugin_idle_act4_pane_ParamLimits

0xd5a8,	// (0x0001a273) sat_plugin_idle_act4_pane

0xd7cd,	// (0x0001a498) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd7cd,	// (0x0001a498) sat_plugin_idle_act4_pane_t1

0xd7e0,	// (0x0001a4ab) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd7e0,	// (0x0001a4ab) sat_plugin_idle_act4_pane_t2

0xd7f3,	// (0x0001a4be) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd7f3,	// (0x0001a4be) sat_plugin_idle_act4_pane_t3

0xd806,	// (0x0001a4d1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd806,	// (0x0001a4d1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x0001ca56) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x0001ca56) sat_plugin_idle_act4_pane_t

0x51f7,	// (0x00011ec2) popup_battery_window_ParamLimits

0x51f7,	// (0x00011ec2) popup_battery_window

0x3927,	// (0x000105f2) bg_popup_sub_pane_cp25_ParamLimits

0x3927,	// (0x000105f2) bg_popup_sub_pane_cp25

0xd819,	// (0x0001a4e4) popup_battery_window_g1_ParamLimits

0xd819,	// (0x0001a4e4) popup_battery_window_g1

0xd825,	// (0x0001a4f0) popup_battery_window_t1_ParamLimits

0xd825,	// (0x0001a4f0) popup_battery_window_t1

0xd837,	// (0x0001a502) popup_battery_window_t2_ParamLimits

0xd837,	// (0x0001a502) popup_battery_window_t2

0x0001,

0xfd94,	// (0x0001ca5f) popup_battery_window_t_ParamLimits

0xfd94,	// (0x0001ca5f) popup_battery_window_t

0x83e5,	// (0x000150b0) midp_canvas_pane_ParamLimits

0x845c,	// (0x00015127) midp_keypad_pane_ParamLimits

0x845c,	// (0x00015127) midp_keypad_pane

0x8729,	// (0x000153f4) main_midp_pane_ParamLimits

0xb1b9,	// (0x00017e84) signal_pane_g2_cp_ParamLimits

0xd854,	// (0x0001a51f) aid_size_cell_midp_keypad_ParamLimits

0xd854,	// (0x0001a51f) aid_size_cell_midp_keypad

0xd86e,	// (0x0001a539) midp_keyp_game_grid_pane_ParamLimits

0xd86e,	// (0x0001a539) midp_keyp_game_grid_pane

0xd88e,	// (0x0001a559) midp_keyp_rocker_pane_ParamLimits

0xd88e,	// (0x0001a559) midp_keyp_rocker_pane

0xd8b9,	// (0x0001a584) midp_keyp_sk_left_pane_ParamLimits

0xd8b9,	// (0x0001a584) midp_keyp_sk_left_pane

0xd913,	// (0x0001a5de) midp_keyp_sk_right_pane_ParamLimits

0xd913,	// (0x0001a5de) midp_keyp_sk_right_pane

0x34a7,	// (0x00010172) bg_button_pane_cp03

0xd96d,	// (0x0001a638) midp_keyp_sk_left_pane_g1

0x34a7,	// (0x00010172) bg_button_pane_cp04

0xd96d,	// (0x0001a638) midp_keyp_sk_right_pane_g1

0xb716,	// (0x000183e1) midp_keyp_rocker_pane_g1

0xd976,	// (0x0001a641) keyp_game_cell_pane_ParamLimits

0xd976,	// (0x0001a641) keyp_game_cell_pane

0x34a7,	// (0x00010172) bg_button_pane_cp02

0xd989,	// (0x0001a654) keyp_game_cell_pane_g1

0x5241,	// (0x00011f0c) popup_fep_vkb2_window_ParamLimits

0x5241,	// (0x00011f0c) popup_fep_vkb2_window

0x6ab8,	// (0x00013783) aid_size_cell_vkb2_ParamLimits

0x6ab8,	// (0x00013783) aid_size_cell_vkb2

0x6b0c,	// (0x000137d7) popup_fep_vkb2_window_g1_ParamLimits

0x6b0c,	// (0x000137d7) popup_fep_vkb2_window_g1

0x6b54,	// (0x0001381f) vkb2_area_bottom_pane_ParamLimits

0x6b54,	// (0x0001381f) vkb2_area_bottom_pane

0x6ba8,	// (0x00013873) vkb2_area_keypad_pane_ParamLimits

0x6ba8,	// (0x00013873) vkb2_area_keypad_pane

0x6bee,	// (0x000138b9) vkb2_area_top_pane_ParamLimits

0x6bee,	// (0x000138b9) vkb2_area_top_pane

0x6c68,	// (0x00013933) vkb2_top_entry_pane_ParamLimits

0x6c68,	// (0x00013933) vkb2_top_entry_pane

0x6c92,	// (0x0001395d) vkb2_top_grid_left_pane_ParamLimits

0x6c92,	// (0x0001395d) vkb2_top_grid_left_pane

0x6cb0,	// (0x0001397b) vkb2_top_grid_right_pane_ParamLimits

0x6cb0,	// (0x0001397b) vkb2_top_grid_right_pane

0x6cce,	// (0x00013999) vkb2_cell_keypad_pane_ParamLimits

0x6cce,	// (0x00013999) vkb2_cell_keypad_pane

0x6d9f,	// (0x00013a6a) vkb2_area_bottom_grid_pane_ParamLimits

0x6d9f,	// (0x00013a6a) vkb2_area_bottom_grid_pane

0x6dc5,	// (0x00013a90) vkb2_area_bottom_pane_g1_ParamLimits

0x6dc5,	// (0x00013a90) vkb2_area_bottom_pane_g1

0x6de9,	// (0x00013ab4) vkb2_area_bottom_pane_g2_ParamLimits

0x6de9,	// (0x00013ab4) vkb2_area_bottom_pane_g2

0x6e17,	// (0x00013ae2) vkb2_area_bottom_pane_g3_ParamLimits

0x6e17,	// (0x00013ae2) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x0001ca64) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x0001ca64) vkb2_area_bottom_pane_g

0x6e78,	// (0x00013b43) vkb2_top_cell_left_pane_ParamLimits

0x6e78,	// (0x00013b43) vkb2_top_cell_left_pane

0xd99a,	// (0x0001a665) vkb2_top_entry_pane_g1_ParamLimits

0xd99a,	// (0x0001a665) vkb2_top_entry_pane_g1

0xd9a8,	// (0x0001a673) vkb2_top_entry_pane_t1_ParamLimits

0xd9a8,	// (0x0001a673) vkb2_top_entry_pane_t1

0xd9da,	// (0x0001a6a5) vkb2_top_entry_pane_t2_ParamLimits

0xd9da,	// (0x0001a6a5) vkb2_top_entry_pane_t2

0xda0c,	// (0x0001a6d7) vkb2_top_entry_pane_t3_ParamLimits

0xda0c,	// (0x0001a6d7) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x0001ca6b) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x0001ca6b) vkb2_top_entry_pane_t

0x6ec5,	// (0x00013b90) vkb2_top_grid_right_pane_g1_ParamLimits

0x6ec5,	// (0x00013b90) vkb2_top_grid_right_pane_g1

0x6edb,	// (0x00013ba6) vkb2_top_grid_right_pane_g2_ParamLimits

0x6edb,	// (0x00013ba6) vkb2_top_grid_right_pane_g2

0x6ef3,	// (0x00013bbe) vkb2_top_grid_right_pane_g3_ParamLimits

0x6ef3,	// (0x00013bbe) vkb2_top_grid_right_pane_g3

0x6f0b,	// (0x00013bd6) vkb2_top_grid_right_pane_g4_ParamLimits

0x6f0b,	// (0x00013bd6) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x0001ca72) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x0001ca72) vkb2_top_grid_right_pane_g

0x6f21,	// (0x00013bec) vkb2_top_cell_left_pane_g1

0x6f38,	// (0x00013c03) vkb2_cell_keypad_pane_g1_ParamLimits

0x6f38,	// (0x00013c03) vkb2_cell_keypad_pane_g1

0xda30,	// (0x0001a6fb) vkb2_cell_keypad_pane_t1_ParamLimits

0xda30,	// (0x0001a6fb) vkb2_cell_keypad_pane_t1

0x6f46,	// (0x00013c11) vkb2_cell_bottom_grid_pane_ParamLimits

0x6f46,	// (0x00013c11) vkb2_cell_bottom_grid_pane

0x6f7f,	// (0x00013c4a) vkb2_cell_bottom_grid_pane_g1

0xd5e8,	// (0x0001a2b3) aid_call2_pane_cp02

0xd5f0,	// (0x0001a2bb) aid_call_pane_cp02

0xd5f8,	// (0x0001a2c3) clock_digital_number_pane_cp10

0xd600,	// (0x0001a2cb) clock_digital_number_pane_cp11

0xd608,	// (0x0001a2d3) clock_digital_number_pane_cp12

0xd610,	// (0x0001a2db) clock_digital_number_pane_cp13

0xd618,	// (0x0001a2e3) clock_digital_separator_pane_cp10

0x7d38,	// (0x00014a03) popup_clock_digital_analogue_window_cp2_g1

0x7d38,	// (0x00014a03) popup_clock_digital_analogue_window_cp2_g2

0xd620,	// (0x0001a2eb) popup_clock_digital_analogue_window_cp2_g3

0x7d38,	// (0x00014a03) popup_clock_digital_analogue_window_cp2_g4

0xd620,	// (0x0001a2eb) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x0001ca27) popup_clock_digital_analogue_window_cp2_g

0xd628,	// (0x0001a2f3) popup_clock_digital_analogue_window_cp2_t1

0xd636,	// (0x0001a301) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x0001ca32) popup_clock_digital_analogue_window_cp2_t

0xb716,	// (0x000183e1) clock_digital_number_pane_cp10_g1

0xb716,	// (0x000183e1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0001c80e) clock_digital_number_pane_cp10_g

0xb716,	// (0x000183e1) clock_digital_separator_pane_cp10_g1

0xb716,	// (0x000183e1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0001c80e) clock_digital_separator_pane_cp10_g

0xd463,	// (0x0001a12e) uniindi_top_pane_g3

0xd474,	// (0x0001a13f) uniindi_top_pane_g4

0x6d59,	// (0x00013a24) vkb2_row_keypad_pane_ParamLimits

0x6d59,	// (0x00013a24) vkb2_row_keypad_pane

0x6f9b,	// (0x00013c66) vkb2_cell_t_keypad_pane_ParamLimits

0x6f9b,	// (0x00013c66) vkb2_cell_t_keypad_pane

0x6fab,	// (0x00013c76) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6fab,	// (0x00013c76) vkb2_cell_t_keypad_pane_cp08

0x6fc0,	// (0x00013c8b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6fc0,	// (0x00013c8b) vkb2_cell_t_keypad_pane_cp09

0x6fd4,	// (0x00013c9f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6fd4,	// (0x00013c9f) vkb2_cell_t_keypad_pane_cp01

0x6fe5,	// (0x00013cb0) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6fe5,	// (0x00013cb0) vkb2_cell_t_keypad_pane_cp02

0x6ff6,	// (0x00013cc1) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6ff6,	// (0x00013cc1) vkb2_cell_t_keypad_pane_cp03

0x7007,	// (0x00013cd2) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7007,	// (0x00013cd2) vkb2_cell_t_keypad_pane_cp04

0x7018,	// (0x00013ce3) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7018,	// (0x00013ce3) vkb2_cell_t_keypad_pane_cp05

0x7029,	// (0x00013cf4) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7029,	// (0x00013cf4) vkb2_cell_t_keypad_pane_cp06

0x703c,	// (0x00013d07) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x703c,	// (0x00013d07) vkb2_cell_t_keypad_pane_cp07

0x7051,	// (0x00013d1c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7051,	// (0x00013d1c) vkb2_cell_t_keypad_pane_cp10

0x67eb,	// (0x000134b6) vkb2_cell_t_keypad_pane_g1

0xda47,	// (0x0001a712) vkb2_cell_t_keypad_pane_t1

0x5132,	// (0x00011dfd) popup_grid_graphic2_window

0xda59,	// (0x0001a724) aid_size_cell_graphic2_ParamLimits

0xda59,	// (0x0001a724) aid_size_cell_graphic2

0xda91,	// (0x0001a75c) bg_popup_window_pane_cp21_ParamLimits

0xda91,	// (0x0001a75c) bg_popup_window_pane_cp21

0xda9f,	// (0x0001a76a) graphic2_pages_pane_ParamLimits

0xda9f,	// (0x0001a76a) graphic2_pages_pane

0xdae5,	// (0x0001a7b0) grid_graphic2_control_pane_ParamLimits

0xdae5,	// (0x0001a7b0) grid_graphic2_control_pane

0xdb23,	// (0x0001a7ee) grid_graphic2_pane_ParamLimits

0xdb23,	// (0x0001a7ee) grid_graphic2_pane

0xdb99,	// (0x0001a864) cell_graphic2_pane

0x5132,	// (0x00011dfd) main_comp_mode_pane

0xcc71,	// (0x0001993c) list_ai3_gene_pane_ParamLimits

0xd09c,	// (0x00019d67) bg_popup_window_pane_cp19_ParamLimits

0xd0a8,	// (0x00019d73) bg_touch_area_indi_pane_ParamLimits

0xd0a8,	// (0x00019d73) bg_touch_area_indi_pane

0xd0be,	// (0x00019d89) bg_touch_area_indi_pane_cp01_ParamLimits

0xd0be,	// (0x00019d89) bg_touch_area_indi_pane_cp01

0xd0d6,	// (0x00019da1) bg_touch_area_indi_pane_cp02_ParamLimits

0xd0d6,	// (0x00019da1) bg_touch_area_indi_pane_cp02

0xd0f0,	// (0x00019dbb) bg_touch_area_indi_pane_cp03_ParamLimits

0xd0f0,	// (0x00019dbb) bg_touch_area_indi_pane_cp03

0xd10a,	// (0x00019dd5) popup_slider_window_g1_ParamLimits

0xd126,	// (0x00019df1) popup_slider_window_g2_ParamLimits

0xd142,	// (0x00019e0d) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x0001c9bc) popup_slider_window_g_ParamLimits

0xd19e,	// (0x00019e69) popup_slider_window_t1_ParamLimits

0xd212,	// (0x00019edd) small_volume_slider_vertical_pane_ParamLimits

0xdb99,	// (0x0001a864) cell_graphic2_pane_ParamLimits

0xdbeb,	// (0x0001a8b6) bg_button_pane_cp10_ParamLimits

0xdbeb,	// (0x0001a8b6) bg_button_pane_cp10

0xdc00,	// (0x0001a8cb) bg_button_pane_cp11_ParamLimits

0xdc00,	// (0x0001a8cb) bg_button_pane_cp11

0xdc15,	// (0x0001a8e0) graphic2_pages_pane_g1_ParamLimits

0xdc15,	// (0x0001a8e0) graphic2_pages_pane_g1

0xdc30,	// (0x0001a8fb) graphic2_pages_pane_g2_ParamLimits

0xdc30,	// (0x0001a8fb) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x0001ca80) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x0001ca80) graphic2_pages_pane_g

0xdc48,	// (0x0001a913) graphic2_pages_pane_t1_ParamLimits

0xdc48,	// (0x0001a913) graphic2_pages_pane_t1

0xdc5e,	// (0x0001a929) cell_graphic2_control_pane_ParamLimits

0xdc5e,	// (0x0001a929) cell_graphic2_control_pane

0xdc81,	// (0x0001a94c) cell_graphic2_pane_g1_ParamLimits

0xdc81,	// (0x0001a94c) cell_graphic2_pane_g1

0xdc8e,	// (0x0001a959) cell_graphic2_pane_g2_ParamLimits

0xdc8e,	// (0x0001a959) cell_graphic2_pane_g2

0xdc9b,	// (0x0001a966) cell_graphic2_pane_g3_ParamLimits

0xdc9b,	// (0x0001a966) cell_graphic2_pane_g3

0xdca8,	// (0x0001a973) cell_graphic2_pane_g4_ParamLimits

0xdca8,	// (0x0001a973) cell_graphic2_pane_g4

0xdcb5,	// (0x0001a980) cell_graphic2_pane_g5_ParamLimits

0xdcb5,	// (0x0001a980) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x0001ca85) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x0001ca85) cell_graphic2_pane_g

0xdcd0,	// (0x0001a99b) cell_graphic2_pane_t1_ParamLimits

0xdcd0,	// (0x0001a99b) cell_graphic2_pane_t1

0x8db1,	// (0x00015a7c) grid_highlight_pane_cp11_ParamLimits

0x8db1,	// (0x00015a7c) grid_highlight_pane_cp11

0x3927,	// (0x000105f2) bg_button_pane_cp05

0xdcf9,	// (0x0001a9c4) cell_graphic2_control_pane_g1

0xb716,	// (0x000183e1) bg_touch_area_indi_pane_g1

0xdd21,	// (0x0001a9ec) aid_cmod_rocker_key_size

0xdd2b,	// (0x0001a9f6) aid_cmode_itu_key_size

0xdd35,	// (0x0001aa00) main_cmode_video_pane

0xdd3f,	// (0x0001aa0a) main_comp_mode_itu_pane

0xdd4b,	// (0x0001aa16) main_comp_mode_rocker_pane

0xdd57,	// (0x0001aa22) cell_cmode_rocker_pane_ParamLimits

0xdd57,	// (0x0001aa22) cell_cmode_rocker_pane

0xdd6b,	// (0x0001aa36) cell_cmode_itu_pane_ParamLimits

0xdd6b,	// (0x0001aa36) cell_cmode_itu_pane

0x3ea7,	// (0x00010b72) bg_button_pane_cp06_ParamLimits

0x3ea7,	// (0x00010b72) bg_button_pane_cp06

0xb991,	// (0x0001865c) cell_cmode_rocker_pane_g1_ParamLimits

0xb991,	// (0x0001865c) cell_cmode_rocker_pane_g1

0xd2b9,	// (0x00019f84) cell_cmode_rocker_pane_g2_ParamLimits

0xd2b9,	// (0x00019f84) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x0001ca95) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x0001ca95) cell_cmode_rocker_pane_g

0x34a7,	// (0x00010172) bg_button_pane_cp07

0xdd82,	// (0x0001aa4d) cell_cmode_itu_pane_g1

0xdd8b,	// (0x0001aa56) cell_cmode_itu_pane_t1

0xdd99,	// (0x0001aa64) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x0001ca9a) cell_cmode_itu_pane_t

0xd4e7,	// (0x0001a1b2) aid_touch_ctrl_left

0xd4ef,	// (0x0001a1ba) aid_touch_ctrl_right

0x34a7,	// (0x00010172) compa_mode_pane

0xdda7,	// (0x0001aa72) aid_cmod_rocker_key_size_cp

0xddb1,	// (0x0001aa7c) aid_cmode_itu_key_size_cp

0xddbb,	// (0x0001aa86) compa_mode_pane_g1

0xddc3,	// (0x0001aa8e) compa_mode_pane_g2

0xddcb,	// (0x0001aa96) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x0001ca9f) compa_mode_pane_g

0xddd3,	// (0x0001aa9e) main_comp_mode_itu_pane_cp

0xdddb,	// (0x0001aaa6) main_comp_mode_rocker_pane_cp

0xdde3,	// (0x0001aaae) cell_cmode_itu_pane_cp_ParamLimits

0xdde3,	// (0x0001aaae) cell_cmode_itu_pane_cp

0xddf8,	// (0x0001aac3) cell_cmode_rocker_pane_cp_ParamLimits

0xddf8,	// (0x0001aac3) cell_cmode_rocker_pane_cp

0x3ea7,	// (0x00010b72) bg_button_pane_cp06_cp_ParamLimits

0x3ea7,	// (0x00010b72) bg_button_pane_cp06_cp

0xb991,	// (0x0001865c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb991,	// (0x0001865c) cell_cmode_rocker_pane_g1_cp

0xb716,	// (0x000183e1) cell_cmode_rocker_pane_g2_cp

0x34a7,	// (0x00010172) bg_button_pane_cp07_cp

0xde0a,	// (0x0001aad5) cell_cmode_itu_pane_g1_cp

0xde13,	// (0x0001aade) cell_cmode_itu_pane_t1_cp

0xde13,	// (0x0001aade) cell_cmode_itu_pane_t2_cp

0xa2eb,	// (0x00016fb6) settings_code_pane_cp2

0x3751,	// (0x0001041c) bg_popup_window_pane_cp3_ParamLimits

0x3b15,	// (0x000107e0) heading_pane_cp3_ParamLimits

0x3b21,	// (0x000107ec) listscroll_popup_graphic_pane_ParamLimits

0x657e,	// (0x00013249) fep_hwr_aid_pane_ParamLimits

0x6a11,	// (0x000136dc) aid_touch_sctrl_top_ParamLimits

0x6a2c,	// (0x000136f7) sctrl_sk_top_pane_g1_ParamLimits

0x67eb,	// (0x000134b6) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x0001c9d5) sctrl_sk_top_pane_g_ParamLimits

0x6a39,	// (0x00013704) sctrl_sk_top_pane_t1_ParamLimits

0x6a11,	// (0x000136dc) aid_touch_sctrl_bottom_ParamLimits

0x6a39,	// (0x00013704) sctrl_sk_bottom_pane_t1_ParamLimits

0xd42d,	// (0x0001a0f8) aid_area_touch_clock

0x6c30,	// (0x000138fb) aid_vkb2_area_top_pane_cell_ParamLimits

0x6c30,	// (0x000138fb) aid_vkb2_area_top_pane_cell

0x6d7b,	// (0x00013a46) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6d7b,	// (0x00013a46) aid_vkb2_area_bottom_pane_cell

0xd992,	// (0x0001a65d) popup_char_count_window

0xde21,	// (0x0001aaec) popup_char_count_window_g1

0xde2a,	// (0x0001aaf5) popup_char_count_window_g2

0xde33,	// (0x0001aafe) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x0001caa6) popup_char_count_window_g

0xde3c,	// (0x0001ab07) popup_char_count_window_t1

0x6aea,	// (0x000137b5) popup_fep_char_preview_window_ParamLimits

0x6aea,	// (0x000137b5) popup_fep_char_preview_window

0x6c4e,	// (0x00013919) vkb2_top_candi_pane_ParamLimits

0x6c4e,	// (0x00013919) vkb2_top_candi_pane

0xde4a,	// (0x0001ab15) cell_vkb2_top_candi_pane_ParamLimits

0xde4a,	// (0x0001ab15) cell_vkb2_top_candi_pane

0x7066,	// (0x00013d31) bg_popup_fep_char_preview_window_ParamLimits

0x7066,	// (0x00013d31) bg_popup_fep_char_preview_window

0x7074,	// (0x00013d3f) popup_fep_char_preview_window_t1_ParamLimits

0x7074,	// (0x00013d3f) popup_fep_char_preview_window_t1

0xde9b,	// (0x0001ab66) bg_popup_fep_char_preview_window_g1

0xdea3,	// (0x0001ab6e) bg_popup_fep_char_preview_window_g2

0xdeab,	// (0x0001ab76) bg_popup_fep_char_preview_window_g3

0xdeb3,	// (0x0001ab7e) bg_popup_fep_char_preview_window_g4

0xdebb,	// (0x0001ab86) bg_popup_fep_char_preview_window_g5

0x70ae,	// (0x00013d79) bg_popup_fep_char_preview_window_g6

0xdec3,	// (0x0001ab8e) bg_popup_fep_char_preview_window_g7

0xdecb,	// (0x0001ab96) bg_popup_fep_char_preview_window_g8

0xded3,	// (0x0001ab9e) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x0001caad) bg_popup_fep_char_preview_window_g

0x67eb,	// (0x000134b6) cell_vkb2_top_candi_pane_g1_ParamLimits

0x67eb,	// (0x000134b6) cell_vkb2_top_candi_pane_g1

0x67f9,	// (0x000134c4) cell_vkb2_top_candi_pane_g2_ParamLimits

0x67f9,	// (0x000134c4) cell_vkb2_top_candi_pane_g2

0xc200,	// (0x00018ecb) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc200,	// (0x00018ecb) cell_vkb2_top_candi_pane_g3

0x70b6,	// (0x00013d81) cell_vkb2_top_candi_pane_g4_ParamLimits

0x70b6,	// (0x00013d81) cell_vkb2_top_candi_pane_g4

0xc055,	// (0x00018d20) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc055,	// (0x00018d20) cell_vkb2_top_candi_pane_g5

0x70d7,	// (0x00013da2) cell_vkb2_top_candi_pane_g6_ParamLimits

0x70d7,	// (0x00013da2) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x0001cac0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x0001cac0) cell_vkb2_top_candi_pane_g

0x70e5,	// (0x00013db0) cell_vkb2_top_candi_pane_t1

0x63de,	// (0x000130a9) aid_size_touch_slider_mark_ParamLimits

0x63de,	// (0x000130a9) aid_size_touch_slider_mark

0xdad5,	// (0x0001a7a0) grid_graphic2_catg_pane_ParamLimits

0xdad5,	// (0x0001a7a0) grid_graphic2_catg_pane

0xdb73,	// (0x0001a83e) popup_grid_graphic2_window_t1_ParamLimits

0xdb73,	// (0x0001a83e) popup_grid_graphic2_window_t1

0xdb85,	// (0x0001a850) popup_grid_graphic2_window_t2_ParamLimits

0xdb85,	// (0x0001a850) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x0001ca7b) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x0001ca7b) popup_grid_graphic2_window_t

0x3927,	// (0x000105f2) bg_button_pane_cp05_ParamLimits

0xdcf9,	// (0x0001a9c4) cell_graphic2_control_pane_g1_ParamLimits

0xdedb,	// (0x0001aba6) cell_graphic2_catg_pane_ParamLimits

0xdedb,	// (0x0001aba6) cell_graphic2_catg_pane

0x34a7,	// (0x00010172) bg_button_pane_cp12

0xdeed,	// (0x0001abb8) cell_graphic2_catg_pane_g1

0xd3f9,	// (0x0001a0c4) cell_tb_ext_pane_t1_ParamLimits

0x6e98,	// (0x00013b63) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6e98,	// (0x00013b63) vkb2_top_cell_right_narrow_pane

0x6eb0,	// (0x00013b7b) vkb2_top_cell_right_wide_pane_ParamLimits

0x6eb0,	// (0x00013b7b) vkb2_top_cell_right_wide_pane

0x6570,	// (0x0001323b) bg_vkb2_func_pane_ParamLimits

0x6570,	// (0x0001323b) bg_vkb2_func_pane

0x6f21,	// (0x00013bec) vkb2_top_cell_left_pane_g1_ParamLimits

0x6570,	// (0x0001323b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6570,	// (0x0001323b) bg_vkb2_fuc_pane_cp03

0x6f7f,	// (0x00013c4a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8c93,	// (0x0001595e) bg_vkb2_func_pane_g1

0x8c9b,	// (0x00015966) bg_vkb2_func_pane_g2

0x8cab,	// (0x00015976) bg_vkb2_func_pane_g3

0x8ca3,	// (0x0001596e) bg_vkb2_func_pane_g4

0x8cb3,	// (0x0001597e) bg_vkb2_func_pane_g5

0x8cbb,	// (0x00015986) bg_vkb2_func_pane_g6

0x8cc3,	// (0x0001598e) bg_vkb2_func_pane_g7

0x8ccb,	// (0x00015996) bg_vkb2_func_pane_g8

0x8c8b,	// (0x00015956) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x0001cacd) bg_vkb2_func_pane_g

0x6570,	// (0x0001323b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6570,	// (0x0001323b) bg_vkb2_fuc_pane_cp01

0x6f21,	// (0x00013bec) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6f21,	// (0x00013bec) vkb2_top_cell_right_wide_pane_g1

0x6570,	// (0x0001323b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6570,	// (0x0001323b) bg_vkb2_fuc_pane_cp02

0x6f7f,	// (0x00013c4a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6f7f,	// (0x00013c4a) vkb2_top_cell_right_narrow_pane_g1

0xd01a,	// (0x00019ce5) aid_touch_area_decrease_ParamLimits

0xd01a,	// (0x00019ce5) aid_touch_area_decrease

0xd03e,	// (0x00019d09) aid_touch_area_increase_ParamLimits

0xd03e,	// (0x00019d09) aid_touch_area_increase

0xd04a,	// (0x00019d15) aid_touch_area_mute_ParamLimits

0xd04a,	// (0x00019d15) aid_touch_area_mute

0xd06e,	// (0x00019d39) aid_touch_area_slider_ParamLimits

0xd06e,	// (0x00019d39) aid_touch_area_slider

0xd15e,	// (0x00019e29) popup_slider_window_g4_ParamLimits

0xd15e,	// (0x00019e29) popup_slider_window_g4

0xd16a,	// (0x00019e35) popup_slider_window_g5_ParamLimits

0xd16a,	// (0x00019e35) popup_slider_window_g5

0xd18c,	// (0x00019e57) popup_slider_window_g6_ParamLimits

0xd18c,	// (0x00019e57) popup_slider_window_g6

0xd1cc,	// (0x00019e97) popup_slider_window_t2_ParamLimits

0xd1cc,	// (0x00019e97) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x0001c9c9) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x0001c9c9) popup_slider_window_t

0xd1e4,	// (0x00019eaf) slider_pane_ParamLimits

0xd1e4,	// (0x00019eaf) slider_pane

0xdef6,	// (0x0001abc1) slider_pane_g1_ParamLimits

0xdef6,	// (0x0001abc1) slider_pane_g1

0xdf0a,	// (0x0001abd5) slider_pane_g2_ParamLimits

0xdf0a,	// (0x0001abd5) slider_pane_g2

0xdf20,	// (0x0001abeb) slider_pane_g3_ParamLimits

0xdf20,	// (0x0001abeb) slider_pane_g3

0x0003,

0xfe15,	// (0x0001cae0) slider_pane_g_ParamLimits

0xfe15,	// (0x0001cae0) slider_pane_g

0x5f64,	// (0x00012c2f) popup_tb_float_extension_window_ParamLimits

0x5f64,	// (0x00012c2f) popup_tb_float_extension_window

0xdf4c,	// (0x0001ac17) aid_size_cell_tb_float_ext

0x34a7,	// (0x00010172) bg_popup_sub_window_cp28

0xdf58,	// (0x0001ac23) grid_tb_float_ext_pane

0xdf64,	// (0x0001ac2f) cell_tb_float_ext_pane_ParamLimits

0xdf64,	// (0x0001ac2f) cell_tb_float_ext_pane

0xdf80,	// (0x0001ac4b) cell_tb_float_ext_pane_g1

0xdf89,	// (0x0001ac54) grid_highlight_pane_cp12

0x66c5,	// (0x00013390) cell_last_hwr_side_pane_ParamLimits

0x66c5,	// (0x00013390) cell_last_hwr_side_pane

0xb716,	// (0x000183e1) cell_last_hwr_side_pane_g1

0xdf92,	// (0x0001ac5d) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x0001cae9) cell_last_hwr_side_pane_g

0x6e47,	// (0x00013b12) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6e47,	// (0x00013b12) vkb2_area_bottom_space_btn_pane

0x67eb,	// (0x000134b6) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xda47,	// (0x0001a712) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x70e5,	// (0x00013db0) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7103,	// (0x00013dce) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7103,	// (0x00013dce) vkb2_area_bottom_space_btn_pane_g1

0x713d,	// (0x00013e08) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x713d,	// (0x00013e08) vkb2_area_bottom_space_btn_pane_g2

0x7173,	// (0x00013e3e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7173,	// (0x00013e3e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x0001caee) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x0001caee) vkb2_area_bottom_space_btn_pane_g

0x6635,	// (0x00013300) cel_fep_hwr_func_pane_ParamLimits

0x6635,	// (0x00013300) cel_fep_hwr_func_pane

0x6671,	// (0x0001333c) cell_hwr_side_button_pane_ParamLimits

0x6671,	// (0x0001333c) cell_hwr_side_button_pane

0xd42d,	// (0x0001a0f8) aid_area_touch_clock_ParamLimits

0x3927,	// (0x000105f2) bg_uniindi_top_pane_ParamLimits

0xd441,	// (0x0001a10c) uniindi_top_pane_g1_ParamLimits

0xd457,	// (0x0001a122) uniindi_top_pane_g2_ParamLimits

0xd463,	// (0x0001a12e) uniindi_top_pane_g3_ParamLimits

0xd474,	// (0x0001a13f) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x0001ca01) uniindi_top_pane_g_ParamLimits

0xd481,	// (0x0001a14c) uniindi_top_pane_t1_ParamLimits

0x3927,	// (0x000105f2) bg_vkb2_func_pane_cp01_ParamLimits

0x3927,	// (0x000105f2) bg_vkb2_func_pane_cp01

0xdf9b,	// (0x0001ac66) cel_fep_hwr_func_pane_g1_ParamLimits

0xdf9b,	// (0x0001ac66) cel_fep_hwr_func_pane_g1

0x3927,	// (0x000105f2) bg_vkb2_func_pane_cp02_ParamLimits

0x3927,	// (0x000105f2) bg_vkb2_func_pane_cp02

0xdf9b,	// (0x0001ac66) cell_hwr_side_button_pane_g1_ParamLimits

0xdf9b,	// (0x0001ac66) cell_hwr_side_button_pane_g1

0x8ade,	// (0x000157a9) status_pane_g4_ParamLimits

0x8ade,	// (0x000157a9) status_pane_g4

0x8af8,	// (0x000157c3) status_pane_t1

0xb4b5,	// (0x00018180) form2_midp_gauge_slider_cont_pane

0xb4bd,	// (0x00018188) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb4cf,	// (0x0001819a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb4e1,	// (0x000181ac) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0001c7c1) form2_midp_gauge_slider_pane_t_ParamLimits

0xb4f3,	// (0x000181be) form2_midp_slider_pane_ParamLimits

0x6aaa,	// (0x00013775) aid_size_cell_func_vkb2_ParamLimits

0x6aaa,	// (0x00013775) aid_size_cell_func_vkb2

0xdf38,	// (0x0001ac03) slider_pane_g4_ParamLimits

0xdf38,	// (0x0001ac03) slider_pane_g4

0x71bd,	// (0x00013e88) form2_midp_gauge_slider_pane_t2_cp01

0x71cb,	// (0x00013e96) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x71cb,	// (0x00013e96) form2_midp_gauge_slider_pane_t3_cp01

0x71e8,	// (0x00013eb3) form2_midp_slider_pane_cp01

0x34a7,	// (0x00010172) navi_smil_pane

0xdfd4,	// (0x0001ac9f) navi_smil_pane_g1

0xdfdc,	// (0x0001aca7) navi_smil_pane_t1

0xdfa9,	// (0x0001ac74) form2_midp_slider_pane_g1

0xdfb2,	// (0x0001ac7d) form2_midp_slider_pane_g2

0xdfba,	// (0x0001ac85) form2_midp_slider_pane_g3

0xdfa9,	// (0x0001ac74) form2_midp_slider_pane_g4

0xdfc2,	// (0x0001ac8d) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x0001caf7) form2_midp_slider_pane_g

0x71ad,	// (0x00013e78) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x71ad,	// (0x00013e78) vkb2_area_bottom_space_btn_pane_g4

0x88f5,	// (0x000155c0) lc0_navi_pane_ParamLimits

0x88f5,	// (0x000155c0) lc0_navi_pane

0x8971,	// (0x0001563c) lc0_stat_indi_pane_ParamLimits

0x8971,	// (0x0001563c) lc0_stat_indi_pane

0x8988,	// (0x00015653) ls0_title_pane_ParamLimits

0x8988,	// (0x00015653) ls0_title_pane

0x3ea7,	// (0x00010b72) bg_popup_sub_pane_cp14_ParamLimits

0xd414,	// (0x0001a0df) list_uniindi_pane_ParamLimits

0xd420,	// (0x0001a0eb) uniindi_top_pane_ParamLimits

0xd4bf,	// (0x0001a18a) list_single_uniindi_pane_g1_ParamLimits

0xd4d2,	// (0x0001a19d) list_single_uniindi_pane_t1_ParamLimits

0x71f1,	// (0x00013ebc) lc0_stat_clock_pane_ParamLimits

0x71f1,	// (0x00013ebc) lc0_stat_clock_pane

0xdfea,	// (0x0001acb5) lc0_stat_indi_pane_g1_ParamLimits

0xdfea,	// (0x0001acb5) lc0_stat_indi_pane_g1

0xdff7,	// (0x0001acc2) lc0_stat_indi_pane_g2_ParamLimits

0xdff7,	// (0x0001acc2) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x0001cb02) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x0001cb02) lc0_stat_indi_pane_g

0x71fe,	// (0x00013ec9) lc0_uni_indicator_pane_ParamLimits

0x71fe,	// (0x00013ec9) lc0_uni_indicator_pane

0xe004,	// (0x0001accf) ls0_title_pane_g1_ParamLimits

0xe004,	// (0x0001accf) ls0_title_pane_g1

0xe018,	// (0x0001ace3) ls0_title_pane_t1_ParamLimits

0xe018,	// (0x0001ace3) ls0_title_pane_t1

0x720b,	// (0x00013ed6) lc0_uni_indicator_pane_g1_ParamLimits

0x720b,	// (0x00013ed6) lc0_uni_indicator_pane_g1

0xe04e,	// (0x0001ad19) lc0_stat_clock_pane_t1

0x5132,	// (0x00011dfd) main_ai5_pane

0xe05c,	// (0x0001ad27) ai5_sk_pane_ParamLimits

0xe05c,	// (0x0001ad27) ai5_sk_pane

0xe069,	// (0x0001ad34) cell_ai5_widget_pane_ParamLimits

0xe069,	// (0x0001ad34) cell_ai5_widget_pane

0xe605,	// (0x0001b2d0) aid_size_cell_widget_grid

0xe61b,	// (0x0001b2e6) bg_ai5_widget_pane_ParamLimits

0xe61b,	// (0x0001b2e6) bg_ai5_widget_pane

0xe685,	// (0x0001b350) cell_ai5_widget_pane_g2

0xe695,	// (0x0001b360) cell_ai5_widget_pane_g3

0xe6b4,	// (0x0001b37f) cell_ai5_widget_pane_g4

0xe6c0,	// (0x0001b38b) cell_ai5_widget_pane_g5

0xe6cc,	// (0x0001b397) cell_ai5_widget_pane_g6

0xe6d8,	// (0x0001b3a3) cell_ai5_widget_pane_g7

0xe720,	// (0x0001b3eb) cell_ai5_widget_pane_t1_ParamLimits

0xe720,	// (0x0001b3eb) cell_ai5_widget_pane_t1

0xe73d,	// (0x0001b408) cell_ai5_widget_pane_t2_ParamLimits

0xe73d,	// (0x0001b408) cell_ai5_widget_pane_t2

0xe755,	// (0x0001b420) cell_ai5_widget_pane_t3_ParamLimits

0xe755,	// (0x0001b420) cell_ai5_widget_pane_t3

0xe76d,	// (0x0001b438) cell_ai5_widget_pane_t4_ParamLimits

0xe76d,	// (0x0001b438) cell_ai5_widget_pane_t4

0xe787,	// (0x0001b452) cell_ai5_widget_pane_t5_ParamLimits

0xe787,	// (0x0001b452) cell_ai5_widget_pane_t5

0xe7a6,	// (0x0001b471) cell_ai5_widget_pane_t6_ParamLimits

0xe7a6,	// (0x0001b471) cell_ai5_widget_pane_t6

0xe7b8,	// (0x0001b483) cell_ai5_widget_pane_t7_ParamLimits

0xe7b8,	// (0x0001b483) cell_ai5_widget_pane_t7

0xe7d1,	// (0x0001b49c) cell_ai5_widget_pane_t8_ParamLimits

0xe7d1,	// (0x0001b49c) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x0001cb1c) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x0001cb1c) cell_ai5_widget_pane_t

0xe81d,	// (0x0001b4e8) grid_ai5_widget_pane

0x3ea7,	// (0x00010b72) highlight_cell_ai5_widget_pane_ParamLimits

0x3ea7,	// (0x00010b72) highlight_cell_ai5_widget_pane

0xe835,	// (0x0001b500) ai5_sk_left_pane

0xe83f,	// (0x0001b50a) ai5_sk_middle_pane

0xe849,	// (0x0001b514) ai5_sk_right_pane

0xe853,	// (0x0001b51e) bg_ai5_widget_pane_g1_ParamLimits

0xe853,	// (0x0001b51e) bg_ai5_widget_pane_g1

0xe85f,	// (0x0001b52a) bg_ai5_widget_pane_g2_ParamLimits

0xe85f,	// (0x0001b52a) bg_ai5_widget_pane_g2

0xe86b,	// (0x0001b536) bg_ai5_widget_pane_g3_ParamLimits

0xe86b,	// (0x0001b536) bg_ai5_widget_pane_g3

0xe877,	// (0x0001b542) bg_ai5_widget_pane_g4_ParamLimits

0xe877,	// (0x0001b542) bg_ai5_widget_pane_g4

0xe883,	// (0x0001b54e) bg_ai5_widget_pane_g5_ParamLimits

0xe883,	// (0x0001b54e) bg_ai5_widget_pane_g5

0xe88f,	// (0x0001b55a) bg_ai5_widget_pane_g6_ParamLimits

0xe88f,	// (0x0001b55a) bg_ai5_widget_pane_g6

0xe89b,	// (0x0001b566) bg_ai5_widget_pane_g7_ParamLimits

0xe89b,	// (0x0001b566) bg_ai5_widget_pane_g7

0xe8a7,	// (0x0001b572) bg_ai5_widget_pane_g8_ParamLimits

0xe8a7,	// (0x0001b572) bg_ai5_widget_pane_g8

0xe8b3,	// (0x0001b57e) bg_ai5_widget_pane_g9_ParamLimits

0xe8b3,	// (0x0001b57e) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x0001cb31) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x0001cb31) bg_ai5_widget_pane_g

0xe8db,	// (0x0001b5a6) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8db,	// (0x0001b5a6) cell_shortcut_ai5_widget_pane

0x3830,	// (0x000104fb) bg_cell_shortcut_ai5_widget_pane

0xe8ee,	// (0x0001b5b9) cell_grid_ai5_widget_pane_g1

0xe8f7,	// (0x0001b5c2) highlight_cell_shortcut_ai5_widget_pane

0x8c93,	// (0x0001595e) ai5_sk_left_pane_g1

0xe8ff,	// (0x0001b5ca) ai5_sk_left_pane_g2

0xe907,	// (0x0001b5d2) ai5_sk_left_pane_g3

0xe90f,	// (0x0001b5da) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x0001cb44) ai5_sk_left_pane_g

0xe917,	// (0x0001b5e2) ai5_sk_left_pane_t1

0x8c9b,	// (0x00015966) ai5_sk_right_pane_g1

0xe925,	// (0x0001b5f0) ai5_sk_right_pane_g2

0xe92d,	// (0x0001b5f8) ai5_sk_right_pane_g3

0xe935,	// (0x0001b600) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x0001cb4d) ai5_sk_right_pane_g

0xe93d,	// (0x0001b608) ai5_sk_right_pane_t1

0x8c9b,	// (0x00015966) ai5_sk_middle_pane_g1

0x8c93,	// (0x0001595e) ai5_sk_middle_pane_g2

0x8cb3,	// (0x0001597e) ai5_sk_middle_pane_g3

0xe92d,	// (0x0001b5f8) ai5_sk_middle_pane_g4

0xe907,	// (0x0001b5d2) ai5_sk_middle_pane_g5

0xe94b,	// (0x0001b616) ai5_sk_middle_pane_g6

0xe953,	// (0x0001b61e) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x0001cb56) ai5_sk_middle_pane_g

0x8777,	// (0x00015442) aid_touch_area_size_lc0_ParamLimits

0x8777,	// (0x00015442) aid_touch_area_size_lc0

0x681a,	// (0x000134e5) cell_hwr_candidate_pane_t1_ParamLimits

0x8795,	// (0x00015460) aid_touch_navi_pane

0x8a88,	// (0x00015753) status_dt_navi_pane_ParamLimits

0x8a88,	// (0x00015753) status_dt_navi_pane

0x8a95,	// (0x00015760) status_dt_sta_pane_ParamLimits

0x8a95,	// (0x00015760) status_dt_sta_pane

0xe95b,	// (0x0001b626) dt_sta_controll_pane

0xe968,	// (0x0001b633) dt_sta_indi_pane

0xe979,	// (0x0001b644) dt_sta_title_pane

0x3927,	// (0x000105f2) bg_dt_sta_indi_pane_ParamLimits

0x3927,	// (0x000105f2) bg_dt_sta_indi_pane

0xe98c,	// (0x0001b657) dt_sta_battery_pane

0xe994,	// (0x0001b65f) dt_sta_indi_pane_g1

0xe99d,	// (0x0001b668) dt_sta_indi_pane_g2

0xe9a6,	// (0x0001b671) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x0001cb65) dt_sta_indi_pane_g

0xe9af,	// (0x0001b67a) dt_sta_signal_pane

0x3ea7,	// (0x00010b72) bg_dt_sta_title_pane_ParamLimits

0x3ea7,	// (0x00010b72) bg_dt_sta_title_pane

0xe9b8,	// (0x0001b683) dt_sta_title_pane_g1

0xe9c0,	// (0x0001b68b) dt_sta_title_pane_t1_ParamLimits

0xe9c0,	// (0x0001b68b) dt_sta_title_pane_t1

0x34a7,	// (0x00010172) bg_dt_sta_control_pane

0xe9d5,	// (0x0001b6a0) dt_sta_controll_pane_g1

0xe9de,	// (0x0001b6a9) bg_dt_sta_title_pane_g1

0xe9e7,	// (0x0001b6b2) bg_dt_sta_title_pane_g2

0xe9f0,	// (0x0001b6bb) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x0001cb6c) bg_dt_sta_title_pane_g

0xb716,	// (0x000183e1) bg_dt_sta_indi_pane_g1

0xe9f9,	// (0x0001b6c4) dt_sta_signal_pane_g1

0xea01,	// (0x0001b6cc) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x0001cb73) dt_sta_signal_pane_g

0xea09,	// (0x0001b6d4) dt_sta_battery_pane_g1

0xea12,	// (0x0001b6dd) dt_sta_battery_pane_t1

0xb716,	// (0x000183e1) bg_dt_sta_control_pane_g1

0x7e4f,	// (0x00014b1a) fep_china_uni_eep_pane

0x7e57,	// (0x00014b22) fep_china_uni_entry_pane_ParamLimits

0x7e67,	// (0x00014b32) popup_fep_china_uni_window_g1_ParamLimits

0x7e77,	// (0x00014b42) popup_fep_china_uni_window_g2_ParamLimits

0x7e77,	// (0x00014b42) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0001c3e9) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0001c3e9) popup_fep_china_uni_window_g

0xea21,	// (0x0001b6ec) fep_china_uni_eep_pane_g1

0xea29,	// (0x0001b6f4) fep_china_uni_eep_pane_t1

0xdfcb,	// (0x0001ac96) aid_touch_area_size_smil_player

0x88ed,	// (0x000155b8) lc0_clock_pane

0x8aec,	// (0x000157b7) status_pane_g5_ParamLimits

0x8aec,	// (0x000157b7) status_pane_g5

0x5be9,	// (0x000128b4) popup_keymap_window

0x8aaa,	// (0x00015775) status_icon_pane

0xe695,	// (0x0001b360) cell_ai5_widget_pane_g3_ParamLimits

0xe6b4,	// (0x0001b37f) cell_ai5_widget_pane_g4_ParamLimits

0xe6c0,	// (0x0001b38b) cell_ai5_widget_pane_g5_ParamLimits

0xe6e4,	// (0x0001b3af) cell_ai5_widget_pane_g8_ParamLimits

0xe6e4,	// (0x0001b3af) cell_ai5_widget_pane_g8

0xe6f8,	// (0x0001b3c3) cell_ai5_widget_pane_g9_ParamLimits

0xe6f8,	// (0x0001b3c3) cell_ai5_widget_pane_g9

0xe70c,	// (0x0001b3d7) cell_ai5_widget_pane_g10_ParamLimits

0xe70c,	// (0x0001b3d7) cell_ai5_widget_pane_g10

0xea38,	// (0x0001b703) status_icon_pane_g1

0x34a7,	// (0x00010172) bg_popup_sub_pane_cp13

0xea40,	// (0x0001b70b) popup_keymap_window_t1

0x86ac,	// (0x00015377) control_pane_g6_ParamLimits

0x86ac,	// (0x00015377) control_pane_g6

0x86b9,	// (0x00015384) control_pane_g7_ParamLimits

0x86b9,	// (0x00015384) control_pane_g7

0x86c6,	// (0x00015391) control_pane_g8_ParamLimits

0x86c6,	// (0x00015391) control_pane_g8

0xe95b,	// (0x0001b626) dt_sta_controll_pane_ParamLimits

0xe968,	// (0x0001b633) dt_sta_indi_pane_ParamLimits

0xe979,	// (0x0001b644) dt_sta_title_pane_ParamLimits

0x3d4b,	// (0x00010a16) aid_size_touch_scroll_bar_cale

0x520f,	// (0x00011eda) popup_discreet_window_ParamLimits

0x520f,	// (0x00011eda) popup_discreet_window

0x529d,	// (0x00011f68) popup_sk_window

0x93bc,	// (0x00016087) bg_popup_sub_pane_cp28_ParamLimits

0x93bc,	// (0x00016087) bg_popup_sub_pane_cp28

0xea4e,	// (0x0001b719) popup_discreet_window_g1_ParamLimits

0xea4e,	// (0x0001b719) popup_discreet_window_g1

0xea6e,	// (0x0001b739) popup_discreet_window_t1_ParamLimits

0xea6e,	// (0x0001b739) popup_discreet_window_t1

0xea8c,	// (0x0001b757) popup_discreet_window_t2_ParamLimits

0xea8c,	// (0x0001b757) popup_discreet_window_t2

0x0002,

0xfead,	// (0x0001cb78) popup_discreet_window_t_ParamLimits

0xfead,	// (0x0001cb78) popup_discreet_window_t

0x721e,	// (0x00013ee9) popup_sk_window_g1

0x7228,	// (0x00013ef3) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x0001cb7f) popup_sk_window_g

0x7232,	// (0x00013efd) popup_sk_window_t1

0x7242,	// (0x00013f0d) popup_sk_window_t1_copy1

0xe685,	// (0x0001b350) cell_ai5_widget_pane_g2_ParamLimits

0xe7e3,	// (0x0001b4ae) cell_ai5_widget_pane_t9_ParamLimits

0xe7e3,	// (0x0001b4ae) cell_ai5_widget_pane_t9

0x34a7,	// (0x00010172) main_fep_fshwr2_pane

0x7250,	// (0x00013f1b) aid_fshwr2_btn_pane

0x725c,	// (0x00013f27) aid_fshwr2_syb_pane

0x726d,	// (0x00013f38) aid_fshwr2_txt_pane

0x7279,	// (0x00013f44) fshwr2_func_candi_pane

0x728a,	// (0x00013f55) fshwr2_hwr_syb_pane

0x729d,	// (0x00013f68) fshwr2_icf_pane

0x34a7,	// (0x00010172) fshwr2_icf_bg_pane

0xeade,	// (0x0001b7a9) fshwr2_icf_pane_t1_ParamLimits

0xeade,	// (0x0001b7a9) fshwr2_icf_pane_t1

0xb716,	// (0x000183e1) fshwr2_func_candi_pane_g1

0xeaf5,	// (0x0001b7c0) fshwr2_func_candi_row_pane_ParamLimits

0xeaf5,	// (0x0001b7c0) fshwr2_func_candi_row_pane

0xeb06,	// (0x0001b7d1) cell_fshwr2_syb_pane_ParamLimits

0xeb06,	// (0x0001b7d1) cell_fshwr2_syb_pane

0xb991,	// (0x0001865c) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb991,	// (0x0001865c) fshwr2_hwr_syb_pane_g1

0x34a7,	// (0x00010172) bg_popup_call_pane_cp01

0xeb20,	// (0x0001b7eb) fshwr2_func_candi_cell_pane_ParamLimits

0xeb20,	// (0x0001b7eb) fshwr2_func_candi_cell_pane

0xeb52,	// (0x0001b81d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb52,	// (0x0001b81d) fshwr2_func_candi_cell_bg_pane

0xeb6c,	// (0x0001b837) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xeb6c,	// (0x0001b837) fshwr2_func_candi_cell_pane_g1

0xeb8c,	// (0x0001b857) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xeb8c,	// (0x0001b857) fshwr2_func_candi_cell_pane_t1

0x34a7,	// (0x00010172) bg_button_pane_cp08

0x83dd,	// (0x000150a8) cell_fshwr2_syb_bg_pane

0xeb9f,	// (0x0001b86a) cell_fshwr2_syb_bg_pane_g1

0xeba7,	// (0x0001b872) cell_fshwr2_syb_bg_pane_t1

0x3ea7,	// (0x00010b72) main_tmo_pane

0x9ee6,	// (0x00016bb1) uni_indicator_pane_g1_ParamLimits

0x9efb,	// (0x00016bc6) uni_indicator_pane_g2_ParamLimits

0x9f11,	// (0x00016bdc) uni_indicator_pane_g3_ParamLimits

0x9f27,	// (0x00016bf2) uni_indicator_pane_g4_ParamLimits

0x9f27,	// (0x00016bf2) uni_indicator_pane_g4

0x9f3b,	// (0x00016c06) uni_indicator_pane_g5_ParamLimits

0x9f3b,	// (0x00016c06) uni_indicator_pane_g5

0x9f4f,	// (0x00016c1a) uni_indicator_pane_g6_ParamLimits

0x9f4f,	// (0x00016c1a) uni_indicator_pane_g6

0xf922,	// (0x0001c5ed) uni_indicator_pane_g_ParamLimits

0xcfea,	// (0x00019cb5) popup_tmo_note_window_ParamLimits

0xcfea,	// (0x00019cb5) popup_tmo_note_window

0x6a8c,	// (0x00013757) fshwr2_bg_pane

0xeb7d,	// (0x0001b848) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xeb7d,	// (0x0001b848) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x0001cb84) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x0001cb84) fshwr2_func_candi_cell_pane_g

0xb716,	// (0x000183e1) bg_popup_window_pane_cp01

0xebb6,	// (0x0001b881) bg_popup_window_pane_g1_cp01

0xebbf,	// (0x0001b88a) bg_popup_window_pane_cp22_ParamLimits

0xebbf,	// (0x0001b88a) bg_popup_window_pane_cp22

0xebcd,	// (0x0001b898) listscroll_tmo_link_pane_ParamLimits

0xebcd,	// (0x0001b898) listscroll_tmo_link_pane

0xec0d,	// (0x0001b8d8) popup_tmo_note_window_g1_ParamLimits

0xec0d,	// (0x0001b8d8) popup_tmo_note_window_g1

0xec1a,	// (0x0001b8e5) tmo_note_info_pane_ParamLimits

0xec1a,	// (0x0001b8e5) tmo_note_info_pane

0xec34,	// (0x0001b8ff) list_tmo_note_info_pane_g1_ParamLimits

0xec34,	// (0x0001b8ff) list_tmo_note_info_pane_g1

0xec4b,	// (0x0001b916) list_tmo_note_info_pane_g2_ParamLimits

0xec4b,	// (0x0001b916) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x0001cb89) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x0001cb89) list_tmo_note_info_pane_g

0xec67,	// (0x0001b932) list_tmo_note_info_text_pane_ParamLimits

0xec67,	// (0x0001b932) list_tmo_note_info_text_pane

0xecec,	// (0x0001b9b7) list_tmo_link_pane

0xecf9,	// (0x0001b9c4) scroll_pane_cp20

0xed06,	// (0x0001b9d1) list_single_tmo_link_pane_ParamLimits

0xed06,	// (0x0001b9d1) list_single_tmo_link_pane

0xed16,	// (0x0001b9e1) list_single_tmo_link_pane_t1

0xed24,	// (0x0001b9ef) list_tmo_note_info_text_pane_t1_ParamLimits

0xed24,	// (0x0001b9ef) list_tmo_note_info_text_pane_t1

0x7baf,	// (0x0001487a) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7baf,	// (0x0001487a) aid_size_touch_scroll_bar_cp01

0x7af3,	// (0x000147be) aid_size_touch_slider_marker

0x5285,	// (0x00011f50) popup_settings_window_ParamLimits

0x5285,	// (0x00011f50) popup_settings_window

0x8743,	// (0x0001540e) popup_candi_list_indi_window

0x8795,	// (0x00015460) aid_touch_navi_pane_ParamLimits

0x69e5,	// (0x000136b0) rs_clock_indi_pane

0x69ee,	// (0x000136b9) sctrl_sk_bottom_pane_ParamLimits

0x69ff,	// (0x000136ca) sctrl_sk_top_pane_ParamLimits

0x6b04,	// (0x000137cf) popup_fep_tooltip_window

0xe605,	// (0x0001b2d0) aid_size_cell_widget_grid_ParamLimits

0xe679,	// (0x0001b344) cell_ai5_widget_pane_g1_ParamLimits

0xe679,	// (0x0001b344) cell_ai5_widget_pane_g1

0xe6cc,	// (0x0001b397) cell_ai5_widget_pane_g6_ParamLimits

0xe6d8,	// (0x0001b3a3) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x0001cb07) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x0001cb07) cell_ai5_widget_pane_g

0xe807,	// (0x0001b4d2) cell_ai5_widget_pane_t10_ParamLimits

0xe807,	// (0x0001b4d2) cell_ai5_widget_pane_t10

0xe81d,	// (0x0001b4e8) grid_ai5_widget_pane_ParamLimits

0xe8bf,	// (0x0001b58a) cell_contacts_ai5_widget_pane_ParamLimits

0xe8bf,	// (0x0001b58a) cell_contacts_ai5_widget_pane

0xeaa1,	// (0x0001b76c) popup_discreet_window_t3_ParamLimits

0xeaa1,	// (0x0001b76c) popup_discreet_window_t3

0x72b2,	// (0x00013f7d) popup_fshwr2_char_preview_window_ParamLimits

0x72b2,	// (0x00013f7d) popup_fshwr2_char_preview_window

0xec85,	// (0x0001b950) tmo_note_info_pane_t1

0xec9a,	// (0x0001b965) tmo_note_info_pane_t2

0xecb3,	// (0x0001b97e) tmo_note_info_pane_t3

0xecc8,	// (0x0001b993) tmo_note_info_pane_t4

0xecda,	// (0x0001b9a5) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x0001cb8e) tmo_note_info_pane_t

0xecec,	// (0x0001b9b7) list_tmo_link_pane_ParamLimits

0xecf9,	// (0x0001b9c4) scroll_pane_cp20_ParamLimits

0x34a7,	// (0x00010172) bg_popup_fep_char_preview_window_cp01

0xed3d,	// (0x0001ba08) popup_fshwr2_char_preview_window_t1

0xed4b,	// (0x0001ba16) popup_candi_list_indi_window_g1

0xed54,	// (0x0001ba1f) bg_cell_contacts_ai5_widget_pane

0xed60,	// (0x0001ba2b) cell_contacts_ai5_widget_pane_g1

0xed70,	// (0x0001ba3b) cell_contacts_ai5_widget_pane_g2

0xed7c,	// (0x0001ba47) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x0001cb99) cell_contacts_ai5_widget_pane_g

0xed88,	// (0x0001ba53) cell_contacts_ai5_widget_pane_t1

0x3ea7,	// (0x00010b72) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee02,	// (0x0001bacd) settings_container_pane

0x83dd,	// (0x000150a8) listscroll_set_pane_copy1

0xab92,	// (0x0001785d) scroll_pane_cp121_copy1

0xee0e,	// (0x0001bad9) set_content_pane_copy1

0xee16,	// (0x0001bae1) aid_height_set_list_copy1_ParamLimits

0xee16,	// (0x0001bae1) aid_height_set_list_copy1

0xa177,	// (0x00016e42) aid_size_parent_copy1_ParamLimits

0xa177,	// (0x00016e42) aid_size_parent_copy1

0xee22,	// (0x0001baed) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee22,	// (0x0001baed) button_value_adjust_pane_cp6_copy1

0x8729,	// (0x000153f4) list_highlight_pane_cp2_copy1_ParamLimits

0x8729,	// (0x000153f4) list_highlight_pane_cp2_copy1

0xee36,	// (0x0001bb01) list_set_pane_copy1_ParamLimits

0xee36,	// (0x0001bb01) list_set_pane_copy1

0xed9d,	// (0x0001ba68) main_pane_set_t1_copy1_ParamLimits

0xed9d,	// (0x0001ba68) main_pane_set_t1_copy1

0xedd7,	// (0x0001baa2) main_pane_set_t2_copy1_ParamLimits

0xedd7,	// (0x0001baa2) main_pane_set_t2_copy1

0xeefd,	// (0x0001bbc8) main_pane_set_t3_copy1

0xef0b,	// (0x0001bbd6) main_pane_set_t4_copy1

0xedf6,	// (0x0001bac1) set_content_pane_g1_copy1_ParamLimits

0xedf6,	// (0x0001bac1) set_content_pane_g1_copy1

0xef19,	// (0x0001bbe4) setting_code_pane_copy1

0xef21,	// (0x0001bbec) setting_slider_graphic_pane_copy1

0xef21,	// (0x0001bbec) setting_slider_pane_copy1

0xef21,	// (0x0001bbec) setting_text_pane_copy1

0xef21,	// (0x0001bbec) setting_volume_pane_copy1

0xef19,	// (0x0001bbe4) settings_code_pane_cp2_copy1

0xef29,	// (0x0001bbf4) settings_code_pane_cp_copy1_ParamLimits

0xef29,	// (0x0001bbf4) settings_code_pane_cp_copy1

0xef3d,	// (0x0001bc08) volume_set_pane_copy1

0xef49,	// (0x0001bc14) volume_set_pane_g10_copy1

0xef55,	// (0x0001bc20) volume_set_pane_g1_copy1

0xef5f,	// (0x0001bc2a) volume_set_pane_g2_copy1

0xef69,	// (0x0001bc34) volume_set_pane_g3_copy1

0xef73,	// (0x0001bc3e) volume_set_pane_g4_copy1

0xef7d,	// (0x0001bc48) volume_set_pane_g5_copy1

0xef87,	// (0x0001bc52) volume_set_pane_g6_copy1

0xef91,	// (0x0001bc5c) volume_set_pane_g7_copy1

0xef9b,	// (0x0001bc66) volume_set_pane_g8_copy1

0xefa5,	// (0x0001bc70) volume_set_pane_g9_copy1

0x3751,	// (0x0001041c) bg_set_opt_pane_cp_copy1_ParamLimits

0x3751,	// (0x0001041c) bg_set_opt_pane_cp_copy1

0xefaf,	// (0x0001bc7a) setting_slider_pane_t1_copy1_ParamLimits

0xefaf,	// (0x0001bc7a) setting_slider_pane_t1_copy1

0xefcd,	// (0x0001bc98) setting_slider_pane_t2_copy1_ParamLimits

0xefcd,	// (0x0001bc98) setting_slider_pane_t2_copy1

0xefe7,	// (0x0001bcb2) setting_slider_pane_t3_copy1_ParamLimits

0xefe7,	// (0x0001bcb2) setting_slider_pane_t3_copy1

0xefff,	// (0x0001bcca) slider_set_pane_copy1_ParamLimits

0xefff,	// (0x0001bcca) slider_set_pane_copy1

0x3f6b,	// (0x00010c36) set_opt_bg_pane_g1_copy2

0x3f73,	// (0x00010c3e) set_opt_bg_pane_g2_copy2

0xf015,	// (0x0001bce0) set_opt_bg_pane_g3_copy2

0x3f83,	// (0x00010c4e) set_opt_bg_pane_g4_copy2

0x3f8b,	// (0x00010c56) set_opt_bg_pane_g5_copy2

0x3f93,	// (0x00010c5e) set_opt_bg_pane_g6_copy2

0xf01f,	// (0x0001bcea) set_opt_bg_pane_g7_copy2

0xf029,	// (0x0001bcf4) set_opt_bg_pane_g8_copy2

0xf033,	// (0x0001bcfe) set_opt_bg_pane_g9_copy2

0xf03d,	// (0x0001bd08) aid_size_touch_slider_mark_copy1_ParamLimits

0xf03d,	// (0x0001bd08) aid_size_touch_slider_mark_copy1

0xf051,	// (0x0001bd1c) slider_set_pane_g1_copy1

0xf05a,	// (0x0001bd25) slider_set_pane_g2_copy1

0xc1be,	// (0x00018e89) slider_set_pane_g3_copy1_ParamLimits

0xc1be,	// (0x00018e89) slider_set_pane_g3_copy1

0xc1d2,	// (0x00018e9d) slider_set_pane_g4_copy1_ParamLimits

0xc1d2,	// (0x00018e9d) slider_set_pane_g4_copy1

0xc1ea,	// (0x00018eb5) slider_set_pane_g5_copy1_ParamLimits

0xc1ea,	// (0x00018eb5) slider_set_pane_g5_copy1

0xc1be,	// (0x00018e89) slider_set_pane_g6_copy1_ParamLimits

0xc1be,	// (0x00018e89) slider_set_pane_g6_copy1

0xf062,	// (0x0001bd2d) slider_set_pane_g7_copy1_ParamLimits

0xf062,	// (0x0001bd2d) slider_set_pane_g7_copy1

0x362a,	// (0x000102f5) bg_set_opt_pane_cp2_copy1

0xf078,	// (0x0001bd43) setting_slider_graphic_pane_g1_copy1

0xf081,	// (0x0001bd4c) setting_slider_graphic_pane_t1_copy1

0xf091,	// (0x0001bd5c) setting_slider_graphic_pane_t2_copy1

0xf0a1,	// (0x0001bd6c) slider_set_pane_cp_copy1

0xf0b1,	// (0x0001bd7c) input_focus_pane_cp1_copy1

0xf0ba,	// (0x0001bd85) list_set_text_pane_copy1

0xf0c2,	// (0x0001bd8d) setting_text_pane_g1_copy1

0xf0cb,	// (0x0001bd96) set_text_pane_t1_copy1

0xf0b1,	// (0x0001bd7c) input_focus_pane_cp2_copy1

0xf0c2,	// (0x0001bd8d) setting_code_pane_g1_copy1

0xf0e4,	// (0x0001bdaf) setting_code_pane_t1_copy1

0xf0f2,	// (0x0001bdbd) list_set_graphic_pane_copy1

0x362a,	// (0x000102f5) bg_set_opt_pane_cp4_copy1

0x80d7,	// (0x00014da2) list_set_graphic_pane_g1_copy1_ParamLimits

0x80d7,	// (0x00014da2) list_set_graphic_pane_g1_copy1

0xf104,	// (0x0001bdcf) list_set_graphic_pane_g2_copy1

0x80ef,	// (0x00014dba) list_set_graphic_pane_t1_copy1_ParamLimits

0x80ef,	// (0x00014dba) list_set_graphic_pane_t1_copy1

0xb716,	// (0x000183e1) rs_clock_indi_pane_g1

0xf10c,	// (0x0001bdd7) rs_clock_indi_pane_t1

0xf11a,	// (0x0001bde5) rs_indi_pane

0xf122,	// (0x0001bded) rs_indi_pane_g1

0xf12b,	// (0x0001bdf6) rs_indi_pane_g2

0xf134,	// (0x0001bdff) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x0001cba0) rs_indi_pane_g

0x83dd,	// (0x000150a8) bg_popup_preview_window_pane_cp03

0xf13d,	// (0x0001be08) popup_fep_tooltip_window_t1

0xc640,	// (0x0001930b) popup_note2_window_g2_ParamLimits

0xc640,	// (0x0001930b) popup_note2_window_g2

0x0001,

0xfc6e,	// (0x0001c939) popup_note2_window_g_ParamLimits

0xfc6e,	// (0x0001c939) popup_note2_window_g

0xcc37,	// (0x00019902) bg_popup_sub_pane_cp11_ParamLimits

0xcc44,	// (0x0001990f) cell_ai3_links_pane_g1_ParamLimits

0xcc5b,	// (0x00019926) cell_ai3_links_pane_t1

0xf0cb,	// (0x0001bd96) set_text_pane_t1_copy1_ParamLimits

0x82ea,	// (0x00014fb5) cell_graphic_popup_pane_cp2_ParamLimits

0x82ea,	// (0x00014fb5) cell_graphic_popup_pane_cp2

0xf14b,	// (0x0001be16) cell_graphic_popup_pane_g1_cp2

0x3b5e,	// (0x00010829) cell_graphic_popup_pane_g2_cp2

0xf153,	// (0x0001be1e) cell_graphic_popup_pane_g3_cp2

0xf15b,	// (0x0001be26) cell_graphic_popup_pane_t2_cp2

0x3b6f,	// (0x0001083a) grid_highlight_pane_cp3_cp2

0x43df,	// (0x000110aa) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3ea7,	// (0x00010b72) main_tmo_pane_ParamLimits

0xcfde,	// (0x00019ca9) popup_tmo_big_image_note_window

0xe669,	// (0x0001b334) cell_ai5_widget_list_pane

0xe671,	// (0x0001b33c) cell_ai5_widget_lrg_icon_pane

0xec85,	// (0x0001b950) tmo_note_info_pane_t1_ParamLimits

0xec9a,	// (0x0001b965) tmo_note_info_pane_t2_ParamLimits

0xecb3,	// (0x0001b97e) tmo_note_info_pane_t3_ParamLimits

0xecc8,	// (0x0001b993) tmo_note_info_pane_t4_ParamLimits

0xecda,	// (0x0001b9a5) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x0001cb8e) tmo_note_info_pane_t_ParamLimits

0xee02,	// (0x0001bacd) settings_container_pane_ParamLimits

0xf0a9,	// (0x0001bd74) indicator_popup_pane_cp5

0xf0a9,	// (0x0001bd74) indicator_popup_pane_cp6

0xf0f2,	// (0x0001bdbd) list_set_graphic_pane_copy1_ParamLimits

0x34a7,	// (0x00010172) bg_popup_window_pane_cp23

0xf169,	// (0x0001be34) popup_tmo_big_image_note_window_g1

0xf175,	// (0x0001be40) popup_tmo_big_image_note_window_t1

0xf185,	// (0x0001be50) popup_tmo_big_image_note_window_t2

0xf195,	// (0x0001be60) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x0001cba7) popup_tmo_big_image_note_window_t

0xf1a5,	// (0x0001be70) cell_ai5_widget_lrg_icon_pane_g1

0xf1ad,	// (0x0001be78) cell_ai5_widget_lrg_icon_pane_t1

0xf1bb,	// (0x0001be86) cell_ai5_widget_list_row_pane_ParamLimits

0xf1bb,	// (0x0001be86) cell_ai5_widget_list_row_pane

0xf1d4,	// (0x0001be9f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf1d4,	// (0x0001be9f) cell_ai5_widget_list_row_pane_g1

0xf1e1,	// (0x0001beac) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf1e1,	// (0x0001beac) cell_ai5_widget_list_row_pane_t1

0xf1f9,	// (0x0001bec4) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf1f9,	// (0x0001bec4) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee3,	// (0x0001cbae) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x0001cbae) cell_ai5_widget_list_row_pane_t

0x5132,	// (0x00011dfd) main_fep_vtchi_ss_pane

0xf230,	// (0x0001befb) popup_fep_char_pre_window

0xf238,	// (0x0001bf03) popup_fep_ituss_window

0xf259,	// (0x0001bf24) popup_fep_vkbss_window

0xf27a,	// (0x0001bf45) grid_vkbss_keypad_pane_ParamLimits

0xf27a,	// (0x0001bf45) grid_vkbss_keypad_pane

0xf28a,	// (0x0001bf55) ituss_keypad_pane

0xf2a6,	// (0x0001bf71) aid_vkbss_key_offset_ParamLimits

0xf2a6,	// (0x0001bf71) aid_vkbss_key_offset

0xf2b2,	// (0x0001bf7d) cell_vkbss_key_pane_ParamLimits

0xf2b2,	// (0x0001bf7d) cell_vkbss_key_pane

0xf2c8,	// (0x0001bf93) bg_cell_vkbss_key_g1_ParamLimits

0xf2c8,	// (0x0001bf93) bg_cell_vkbss_key_g1

0xf2d4,	// (0x0001bf9f) cell_vkbss_key_3p_pane_ParamLimits

0xf2d4,	// (0x0001bf9f) cell_vkbss_key_3p_pane

0xf2ee,	// (0x0001bfb9) cell_vkbss_key_g1_ParamLimits

0xf2ee,	// (0x0001bfb9) cell_vkbss_key_g1

0xf308,	// (0x0001bfd3) cell_vkbss_key_t1_ParamLimits

0xf308,	// (0x0001bfd3) cell_vkbss_key_t1

0xf333,	// (0x0001bffe) cell_ituss_key_pane_ParamLimits

0xf333,	// (0x0001bffe) cell_ituss_key_pane

0xf344,	// (0x0001c00f) bg_cell_ituss_key_g1_ParamLimits

0xf344,	// (0x0001c00f) bg_cell_ituss_key_g1

0xf350,	// (0x0001c01b) cell_ituss_key_pane_g1_ParamLimits

0xf350,	// (0x0001c01b) cell_ituss_key_pane_g1

0xf364,	// (0x0001c02f) cell_ituss_key_pane_g2_ParamLimits

0xf364,	// (0x0001c02f) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x0001cbb5) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x0001cbb5) cell_ituss_key_pane_g

0xf38f,	// (0x0001c05a) cell_ituss_key_t1_ParamLimits

0xf38f,	// (0x0001c05a) cell_ituss_key_t1

0xf3bd,	// (0x0001c088) cell_ituss_key_t2_ParamLimits

0xf3bd,	// (0x0001c088) cell_ituss_key_t2

0xf3ee,	// (0x0001c0b9) cell_ituss_key_t3_ParamLimits

0xf3ee,	// (0x0001c0b9) cell_ituss_key_t3

0xf41f,	// (0x0001c0ea) cell_ituss_key_t4_ParamLimits

0xf41f,	// (0x0001c0ea) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x0001cbba) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0001cbba) cell_ituss_key_t

0xf450,	// (0x0001c11b) cell_vkbss_key_3p_pane_g1

0xf458,	// (0x0001c123) cell_vkbss_key_3p_pane_g2

0xf460,	// (0x0001c12b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001cbc3) cell_vkbss_key_3p_pane_g

0x34a7,	// (0x00010172) bg_popup_fep_char_preview_window_cp02

0xf468,	// (0x0001c133) popup_fep_char_pre_window_t1

0xe5fb,	// (0x0001b2c6) main_ai5_sk_pane

0xed54,	// (0x0001ba1f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed60,	// (0x0001ba2b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed70,	// (0x0001ba3b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed7c,	// (0x0001ba47) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x0001cb99) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed88,	// (0x0001ba53) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3ea7,	// (0x00010b72) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf477,	// (0x0001c142) main_ai5_sk_pane_g1

0x91f4,	// (0x00015ebf) popup_query_code_window_g1

0xf24e,	// (0x0001bf19) popup_fep_vkb_icf_pane

0xf264,	// (0x0001bf2f) popup_fep_vtchi_icf_pane

0x3ea7,	// (0x00010b72) bg_icf_pane

0xf480,	// (0x0001c14b) list_vkb_icf_pane

0x3ea7,	// (0x00010b72) bg_icf_pane_cp01

0xf48c,	// (0x0001c157) vtchi_icf_list_pane

0xf49d,	// (0x0001c168) list_vkb_icf_pane_t1_ParamLimits

0xf49d,	// (0x0001c168) list_vkb_icf_pane_t1

0xf4b4,	// (0x0001c17f) vtchi_icf_list_pane_t1_ParamLimits

0xf4b4,	// (0x0001c17f) vtchi_icf_list_pane_t1

0xf238,	// (0x0001bf03) popup_fep_ituss_window_ParamLimits

0xf264,	// (0x0001bf2f) popup_fep_vtchi_icf_pane_ParamLimits

0xf28a,	// (0x0001bf55) ituss_keypad_pane_ParamLimits

0xf29a,	// (0x0001bf65) ituss_sks_pane

0x3ea7,	// (0x00010b72) bg_icf_pane_ParamLimits

0xf221,	// (0x0001beec) icf_edit_indi_pane_ParamLimits

0xf221,	// (0x0001beec) icf_edit_indi_pane

0xf480,	// (0x0001c14b) list_vkb_icf_pane_ParamLimits

0x3ea7,	// (0x00010b72) bg_icf_pane_cp01_ParamLimits

0xf221,	// (0x0001beec) icf_edit_indi_pane_cp01_ParamLimits

0xf221,	// (0x0001beec) icf_edit_indi_pane_cp01

0xf494,	// (0x0001c15f) vtchi_query_pane

0xb991,	// (0x0001865c) icf_edit_indi_pane_g1_ParamLimits

0xb991,	// (0x0001865c) icf_edit_indi_pane_g1

0xf537,	// (0x0001c202) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0001c202) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001cbdb) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001cbdb) icf_edit_indi_pane_g

0xf546,	// (0x0001c211) icf_edit_indi_pane_t1

0xf4cd,	// (0x0001c198) bg_input_focus_pane_cp042

0x3d42,	// (0x00010a0d) vtchi_button_pane

0xf4d6,	// (0x0001c1a1) vtchi_query_pane_t1

0xf4e4,	// (0x0001c1af) vtchi_query_pane_t2

0xf4f2,	// (0x0001c1bd) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001cbca) vtchi_query_pane_t

0x34a7,	// (0x00010172) bg_button_pane_cp13

0xf500,	// (0x0001c1cb) vtchi_button_pane_g1

0xf508,	// (0x0001c1d3) ituss_sks_pane_g1

0xf513,	// (0x0001c1de) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001cbd1) ituss_sks_pane_g

0xf51b,	// (0x0001c1e6) ituss_sks_pane_t1

0xf529,	// (0x0001c1f4) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001cbd6) ituss_sks_pane_t

0xb16a,	// (0x00017e35) indicator_nsta_pane_cp_g1

0xb173,	// (0x00017e3e) indicator_nsta_pane_cp_g2

0xb17b,	// (0x00017e46) indicator_nsta_pane_cp_g3

0xb183,	// (0x00017e4e) indicator_nsta_pane_cp_g4

0xb18b,	// (0x00017e56) indicator_nsta_pane_cp_g5

0xb193,	// (0x00017e5e) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0001c777) indicator_nsta_pane_cp_g

0xdce6,	// (0x0001a9b1) cell_graphic2_pane_t2_ParamLimits

0xdce6,	// (0x0001a9b1) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x0001ca90) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x0001ca90) cell_graphic2_pane_t

0xdd13,	// (0x0001a9de) cell_graphic2_control_pane_t1

0x7dfe,	// (0x00014ac9) signal_pane_g3_ParamLimits

0x7dfe,	// (0x00014ac9) signal_pane_g3

0x7e10,	// (0x00014adb) signal_pane_g4_ParamLimits

0x7e10,	// (0x00014adb) signal_pane_g4

0xf20b,	// (0x0001bed6) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf20b,	// (0x0001bed6) cell_ai5_widget_list_row_pane_t3

0xf37d,	// (0x0001c048) cell_ituss_key_pane_t1_ParamLimits

0xf37d,	// (0x0001c048) cell_ituss_key_pane_t1

0x8e42,	// (0x00015b0d) form_field_data_wide_pane_vc_t2_ParamLimits

0x8e42,	// (0x00015b0d) form_field_data_wide_pane_vc_t2

0x8e56,	// (0x00015b21) form_field_data_wide_pane_vc_t3_ParamLimits

0x8e56,	// (0x00015b21) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0001c4d5) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0001c4d5) form_field_data_wide_pane_vc_t

0xae0f,	// (0x00017ada) form_field_slider_wide_pane_vc_t3_ParamLimits

0xae0f,	// (0x00017ada) form_field_slider_wide_pane_vc_t3

0xaeeb,	// (0x00017bb6) form_field_popup_wide_pane_vc_t2_ParamLimits

0xaeeb,	// (0x00017bb6) form_field_popup_wide_pane_vc_t2

0xaf02,	// (0x00017bcd) form_field_popup_wide_pane_vc_t3_ParamLimits

0xaf02,	// (0x00017bcd) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9b,	// (0x0001c766) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9b,	// (0x0001c766) form_field_popup_wide_pane_vc_t

0x7250,	// (0x00013f1b) aid_fshwr2_btn_pane_ParamLimits

0x725c,	// (0x00013f27) aid_fshwr2_syb_pane_ParamLimits

0x726d,	// (0x00013f38) aid_fshwr2_txt_pane_ParamLimits

0x6a8c,	// (0x00013757) fshwr2_bg_pane_ParamLimits

0x7279,	// (0x00013f44) fshwr2_func_candi_pane_ParamLimits

0x728a,	// (0x00013f55) fshwr2_hwr_syb_pane_ParamLimits

0x729d,	// (0x00013f68) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
