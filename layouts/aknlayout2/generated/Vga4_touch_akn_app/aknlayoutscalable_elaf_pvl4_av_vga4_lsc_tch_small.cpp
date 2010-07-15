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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00025db8 };

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
0x9ca3,	// (0x0002fa5b) Screen

0x9cb7,	// (0x0002fa6f) application_window_ParamLimits

0x9cb7,	// (0x0002fa6f) application_window

0xca78,	// (0x00032830) screen_g1

0x9cef,	// (0x0002faa7) area_bottom_pane_ParamLimits

0x9cef,	// (0x0002faa7) area_bottom_pane

0xf028,	// (0x00034de0) area_top_pane_ParamLimits

0xf028,	// (0x00034de0) area_top_pane

0xf0bc,	// (0x00034e74) main_pane_ParamLimits

0xf0bc,	// (0x00034e74) main_pane

0xca82,	// (0x0003283a) misc_graphics

0xb011,	// (0x00030dc9) battery_pane_ParamLimits

0xb011,	// (0x00030dc9) battery_pane

0x3434,	// (0x000291ec) bg_status_flat_pane_g8

0x343c,	// (0x000291f4) bg_status_flat_pane_g9

0x1468,	// (0x00027220) context_pane_ParamLimits

0x1468,	// (0x00027220) context_pane

0xb188,	// (0x00030f40) navi_pane_ParamLimits

0xb188,	// (0x00030f40) navi_pane

0xb212,	// (0x00030fca) signal_pane_ParamLimits

0xb212,	// (0x00030fca) signal_pane

0x0008,

0xf874,	// (0x0003562c) bg_status_flat_pane_g

0xb2a2,	// (0x0003105a) status_pane_g1_ParamLimits

0xb2a2,	// (0x0003105a) status_pane_g1

0xb2b8,	// (0x00031070) status_pane_g2_ParamLimits

0xb2b8,	// (0x00031070) status_pane_g2

0x16a1,	// (0x00027459) status_pane_g3_ParamLimits

0x16a1,	// (0x00027459) status_pane_g3

0x0004,

0xf7a0,	// (0x00035558) status_pane_g_ParamLimits

0xf7a0,	// (0x00035558) status_pane_g

0xb2c4,	// (0x0003107c) title_pane_ParamLimits

0xb2c4,	// (0x0003107c) title_pane

0xb32b,	// (0x000310e3) uni_indicator_pane_ParamLimits

0xb32b,	// (0x000310e3) uni_indicator_pane

0x0c9f,	// (0x00026a57) bg_list_pane_ParamLimits

0x0c9f,	// (0x00026a57) bg_list_pane

0x9a23,	// (0x0002f7db) find_pane

0x2c70,	// (0x00028a28) listscroll_app_pane_ParamLimits

0x2c70,	// (0x00028a28) listscroll_app_pane

0x0cd3,	// (0x00026a8b) listscroll_form_pane

0x9a2b,	// (0x0002f7e3) listscroll_gen_pane_ParamLimits

0x9a2b,	// (0x0002f7e3) listscroll_gen_pane

0x0cef,	// (0x00026aa7) listscroll_set_pane

0x3fc6,	// (0x00029d7e) main_idle_act_pane

0x0771,	// (0x00026529) main_idle_trad_pane

0x0771,	// (0x00026529) main_list_empty_pane

0x0cc7,	// (0x00026a7f) main_midp_pane

0x0d09,	// (0x00026ac1) main_pane_g1_ParamLimits

0x0d09,	// (0x00026ac1) main_pane_g1

0xa86d,	// (0x00030625) popup_ai_message_window_ParamLimits

0xa86d,	// (0x00030625) popup_ai_message_window

0xa90d,	// (0x000306c5) popup_fep_china_uni_window_ParamLimits

0xa90d,	// (0x000306c5) popup_fep_china_uni_window

0x0e2b,	// (0x00026be3) popup_fep_japan_candidate_window_ParamLimits

0x0e2b,	// (0x00026be3) popup_fep_japan_candidate_window

0x0e55,	// (0x00026c0d) popup_fep_japan_predictive_window_ParamLimits

0x0e55,	// (0x00026c0d) popup_fep_japan_predictive_window

0xa96d,	// (0x00030725) popup_find_window

0xa98a,	// (0x00030742) popup_grid_graphic_window_ParamLimits

0xa98a,	// (0x00030742) popup_grid_graphic_window

0x0ec6,	// (0x00026c7e) popup_large_graphic_colour_window

0xaa2e,	// (0x000307e6) popup_menu_window_ParamLimits

0xaa2e,	// (0x000307e6) popup_menu_window

0xac1e,	// (0x000309d6) popup_note_image_window

0xabde,	// (0x00030996) popup_note_wait_window_ParamLimits

0xabde,	// (0x00030996) popup_note_wait_window

0xac36,	// (0x000309ee) popup_note_window_ParamLimits

0xac36,	// (0x000309ee) popup_note_window

0xace4,	// (0x00030a9c) popup_query_code_window_ParamLimits

0xace4,	// (0x00030a9c) popup_query_code_window

0x1132,	// (0x00026eea) popup_query_data_code_window_ParamLimits

0x1132,	// (0x00026eea) popup_query_data_code_window

0xad24,	// (0x00030adc) popup_query_data_window_ParamLimits

0xad24,	// (0x00030adc) popup_query_data_window

0xadb8,	// (0x00030b70) popup_query_sat_info_window_ParamLimits

0xadb8,	// (0x00030b70) popup_query_sat_info_window

0xae61,	// (0x00030c19) popup_snote_single_graphic_window_ParamLimits

0xae61,	// (0x00030c19) popup_snote_single_graphic_window

0xae61,	// (0x00030c19) popup_snote_single_text_window_ParamLimits

0xae61,	// (0x00030c19) popup_snote_single_text_window

0x11cd,	// (0x00026f85) popup_sub_window_general

0x1313,	// (0x000270cb) popup_window_general_ParamLimits

0x1313,	// (0x000270cb) popup_window_general

0x132c,	// (0x000270e4) power_save_pane

0xa6cd,	// (0x00030485) control_pane_g1_ParamLimits

0xa6cd,	// (0x00030485) control_pane_g1

0xa6f6,	// (0x000304ae) control_pane_g2_ParamLimits

0xa6f6,	// (0x000304ae) control_pane_g2

0x0b36,	// (0x000268ee) control_pane_g3_ParamLimits

0x0b36,	// (0x000268ee) control_pane_g3

0x0007,

0xf788,	// (0x00035540) control_pane_g_ParamLimits

0xf788,	// (0x00035540) control_pane_g

0xa75c,	// (0x00030514) control_pane_t1_ParamLimits

0xa75c,	// (0x00030514) control_pane_t1

0xa7c2,	// (0x0003057a) control_pane_t2_ParamLimits

0xa7c2,	// (0x0003057a) control_pane_t2

0x0002,

0xf799,	// (0x00035551) control_pane_t_ParamLimits

0xf799,	// (0x00035551) control_pane_t

0xa626,	// (0x000303de) navi_navi_volume_pane_cp1

0xa62e,	// (0x000303e6) status_small_icon_pane

0x0a19,	// (0x000267d1) status_small_pane_g1_ParamLimits

0x0a19,	// (0x000267d1) status_small_pane_g1

0xa636,	// (0x000303ee) status_small_pane_g2_ParamLimits

0xa636,	// (0x000303ee) status_small_pane_g2

0xa642,	// (0x000303fa) status_small_pane_g3_ParamLimits

0xa642,	// (0x000303fa) status_small_pane_g3

0xa64e,	// (0x00030406) status_small_pane_g4_ParamLimits

0xa64e,	// (0x00030406) status_small_pane_g4

0xa65a,	// (0x00030412) status_small_pane_g5_ParamLimits

0xa65a,	// (0x00030412) status_small_pane_g5

0xa668,	// (0x00030420) status_small_pane_g6_ParamLimits

0xa668,	// (0x00030420) status_small_pane_g6

0x0007,

0xf777,	// (0x0003552f) status_small_pane_g_ParamLimits

0xf777,	// (0x0003552f) status_small_pane_g

0xa697,	// (0x0003044f) status_small_pane_t1

0xa6b9,	// (0x00030471) status_small_wait_pane_ParamLimits

0xa6b9,	// (0x00030471) status_small_wait_pane

0xa498,	// (0x00030250) aid_levels_signal_ParamLimits

0xa498,	// (0x00030250) aid_levels_signal

0xa4b0,	// (0x00030268) signal_pane_g1_ParamLimits

0xa4b0,	// (0x00030268) signal_pane_g1

0xa4cb,	// (0x00030283) signal_pane_g2_ParamLimits

0xa4cb,	// (0x00030283) signal_pane_g2

0x0003,

0xf708,	// (0x000354c0) signal_pane_g_ParamLimits

0xf708,	// (0x000354c0) signal_pane_g

0xd63b,	// (0x000333f3) context_pane_g1

0x9edb,	// (0x0002fc93) title_pane_g1

0x9f1e,	// (0x0002fcd6) title_pane_t1

0xca98,	// (0x00032850) title_pane_t2

0xcabe,	// (0x00032876) title_pane_t3

0x0002,

0xf557,	// (0x0003530f) title_pane_t

0xb353,	// (0x0003110b) aid_levels_battery_ParamLimits

0xb353,	// (0x0003110b) aid_levels_battery

0xb36f,	// (0x00031127) battery_pane_g1_ParamLimits

0xb36f,	// (0x00031127) battery_pane_g1

0xb38c,	// (0x00031144) battery_pane_g2_ParamLimits

0xb38c,	// (0x00031144) battery_pane_g2

0x0001,

0xf7ab,	// (0x00035563) battery_pane_g_ParamLimits

0xf7ab,	// (0x00035563) battery_pane_g

0xb766,	// (0x0003151e) uni_indicator_pane_g1

0xb77c,	// (0x00031534) uni_indicator_pane_g2

0xb792,	// (0x0003154a) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x000356d4) uni_indicator_pane_g

0x05eb,	// (0x000263a3) navi_icon_pane_ParamLimits

0x05eb,	// (0x000263a3) navi_icon_pane

0x0527,	// (0x000262df) navi_midp_pane

0x0607,	// (0x000263bf) navi_navi_pane

0x0611,	// (0x000263c9) navi_text_pane_ParamLimits

0x0611,	// (0x000263c9) navi_text_pane

0xca78,	// (0x00032830) status_small_wait_pane_g1

0xcddf,	// (0x00032b97) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x000356cf) status_small_wait_pane_g

0xb705,	// (0x000314bd) navi_navi_icon_text_pane

0xb70d,	// (0x000314c5) navi_navi_pane_g1_ParamLimits

0xb70d,	// (0x000314c5) navi_navi_pane_g1

0xb71f,	// (0x000314d7) navi_navi_pane_g2_ParamLimits

0xb71f,	// (0x000314d7) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0003569d) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0003569d) navi_navi_pane_g

0x3abd,	// (0x00029875) navi_navi_tabs_pane

0xb731,	// (0x000314e9) navi_navi_text_pane

0xb705,	// (0x000314bd) navi_navi_volume_pane

0xb6f3,	// (0x000314ab) navi_text_pane_t1

0xb6e7,	// (0x0003149f) navi_icon_pane_g1

0x39b4,	// (0x0002976c) navi_navi_text_pane_t1

0xb6d6,	// (0x0003148e) navi_navi_volume_pane_g1

0xb6de,	// (0x00031496) volume_small_pane

0xb632,	// (0x000313ea) navi_navi_icon_text_pane_g1

0xb63a,	// (0x000313f2) navi_navi_icon_text_pane_t1

0x0607,	// (0x000263bf) navi_tabs_2_long_pane

0x0607,	// (0x000263bf) navi_tabs_2_pane

0x0607,	// (0x000263bf) navi_tabs_3_long_pane

0x0607,	// (0x000263bf) navi_tabs_3_pane

0x0607,	// (0x000263bf) navi_tabs_4_pane

0xb612,	// (0x000313ca) tabs_2_active_pane_ParamLimits

0xb612,	// (0x000313ca) tabs_2_active_pane

0xb622,	// (0x000313da) tabs_2_passive_pane_ParamLimits

0xb622,	// (0x000313da) tabs_2_passive_pane

0xb5e0,	// (0x00031398) tabs_3_active_pane_ParamLimits

0xb5e0,	// (0x00031398) tabs_3_active_pane

0xb5f0,	// (0x000313a8) tabs_3_passive_pane_ParamLimits

0xb5f0,	// (0x000313a8) tabs_3_passive_pane

0xb601,	// (0x000313b9) tabs_3_passive_pane_cp_ParamLimits

0xb601,	// (0x000313b9) tabs_3_passive_pane_cp

0xb59c,	// (0x00031354) tabs_4_active_pane_ParamLimits

0xb59c,	// (0x00031354) tabs_4_active_pane

0xb5ad,	// (0x00031365) tabs_4_passive_pane_ParamLimits

0xb5ad,	// (0x00031365) tabs_4_passive_pane

0xb5be,	// (0x00031376) tabs_4_passive_pane_cp_ParamLimits

0xb5be,	// (0x00031376) tabs_4_passive_pane_cp

0xb5cf,	// (0x00031387) tabs_4_passive_pane_cp2_ParamLimits

0xb5cf,	// (0x00031387) tabs_4_passive_pane_cp2

0xb578,	// (0x00031330) tabs_2_long_active_pane_ParamLimits

0xb578,	// (0x00031330) tabs_2_long_active_pane

0xb58a,	// (0x00031342) tabs_2_long_passive_pane_ParamLimits

0xb58a,	// (0x00031342) tabs_2_long_passive_pane

0xb52d,	// (0x000312e5) tabs_3_long_active_pane_ParamLimits

0xb52d,	// (0x000312e5) tabs_3_long_active_pane

0xb546,	// (0x000312fe) tabs_3_long_passive_pane_ParamLimits

0xb546,	// (0x000312fe) tabs_3_long_passive_pane

0xb55f,	// (0x00031317) tabs_3_long_passive_pane_cp_ParamLimits

0xb55f,	// (0x00031317) tabs_3_long_passive_pane_cp

0x197d,	// (0x00027735) volume_small_pane_g1

0xb4dc,	// (0x00031294) volume_small_pane_g2

0xb4e5,	// (0x0003129d) volume_small_pane_g3

0xb4ee,	// (0x000312a6) volume_small_pane_g4

0xb4f7,	// (0x000312af) volume_small_pane_g5

0xb500,	// (0x000312b8) volume_small_pane_g6

0xb509,	// (0x000312c1) volume_small_pane_g7

0xb512,	// (0x000312ca) volume_small_pane_g8

0xb51b,	// (0x000312d3) volume_small_pane_g9

0xb524,	// (0x000312dc) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x00035669) volume_small_pane_g

0xcad0,	// (0x00032888) bg_active_tab_pane_cp2_ParamLimits

0xcad0,	// (0x00032888) bg_active_tab_pane_cp2

0x9faa,	// (0x0002fd62) tabs_3_active_pane_g1

0x9fb2,	// (0x0002fd6a) tabs_3_active_pane_t1

0xcad0,	// (0x00032888) bg_passive_tab_pane_cp2_ParamLimits

0xcad0,	// (0x00032888) bg_passive_tab_pane_cp2

0x9faa,	// (0x0002fd62) tabs_3_passive_pane_g1

0x9fb2,	// (0x0002fd6a) tabs_3_passive_pane_t1

0xcad0,	// (0x00032888) bg_active_tab_pane_cp3_ParamLimits

0xcad0,	// (0x00032888) bg_active_tab_pane_cp3

0x9fc4,	// (0x0002fd7c) tabs_4_active_pane_g1

0x9fcc,	// (0x0002fd84) tabs_4_active_pane_t1

0xcad0,	// (0x00032888) bg_passive_tab_pane_cp3_ParamLimits

0xcad0,	// (0x00032888) bg_passive_tab_pane_cp3

0x9fc4,	// (0x0002fd7c) tabs_4_1_passive_pane_g1

0x9fcc,	// (0x0002fd84) tabs_4_1_passive_pane_t1

0x0cc7,	// (0x00026a7f) list_highlight_pane_cp2

0x3fec,	// (0x00029da4) list_set_pane_ParamLimits

0x3fec,	// (0x00029da4) list_set_pane

0xb825,	// (0x000315dd) main_pane_set_t1_ParamLimits

0xb825,	// (0x000315dd) main_pane_set_t1

0xb845,	// (0x000315fd) main_pane_set_t2_ParamLimits

0xb845,	// (0x000315fd) main_pane_set_t2

0xb859,	// (0x00031611) main_pane_set_t3_ParamLimits

0xb859,	// (0x00031611) main_pane_set_t3

0xb86d,	// (0x00031625) main_pane_set_t4_ParamLimits

0xb86d,	// (0x00031625) main_pane_set_t4

0x0003,

0xf981,	// (0x00035739) main_pane_set_t_ParamLimits

0xf981,	// (0x00035739) main_pane_set_t

0xb881,	// (0x00031639) setting_code_pane

0x4114,	// (0x00029ecc) setting_slider_graphic_pane

0x4114,	// (0x00029ecc) setting_slider_pane

0x4114,	// (0x00029ecc) setting_text_pane

0x4114,	// (0x00029ecc) setting_volume_pane

0xf32d,	// (0x000350e5) volume_set_pane

0xcade,	// (0x00032896) bg_set_opt_pane_cp

0xf337,	// (0x000350ef) setting_slider_pane_t1

0xf350,	// (0x00035108) setting_slider_pane_t2

0xf36a,	// (0x00035122) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00035316) setting_slider_pane_t

0xf382,	// (0x0003513a) slider_set_pane

0xca82,	// (0x0003283a) bg_set_opt_pane_cp2

0xcaec,	// (0x000328a4) setting_slider_graphic_pane_g1

0xf398,	// (0x00035150) setting_slider_graphic_pane_t1

0xf3a8,	// (0x00035160) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003531d) setting_slider_graphic_pane_t

0xf3b8,	// (0x00035170) slider_set_pane_cp

0xca82,	// (0x0003283a) input_focus_pane_cp1

0x3fad,	// (0x00029d65) list_set_text_pane

0xca78,	// (0x00032830) setting_text_pane_g1

0xca82,	// (0x0003283a) input_focus_pane_cp2

0xca78,	// (0x00032830) setting_code_pane_g1

0xcaf5,	// (0x000328ad) setting_code_pane_t1

0xe89b,	// (0x00034653) set_text_pane_t1_ParamLimits

0xe89b,	// (0x00034653) set_text_pane_t1

0xd174,	// (0x00032f2c) set_opt_bg_pane_g1

0xd17c,	// (0x00032f34) set_opt_bg_pane_g2

0x3f85,	// (0x00029d3d) set_opt_bg_pane_g3

0xd18c,	// (0x00032f44) set_opt_bg_pane_g4

0xd194,	// (0x00032f4c) set_opt_bg_pane_g5

0xd19c,	// (0x00032f54) set_opt_bg_pane_g6

0x3f8f,	// (0x00029d47) set_opt_bg_pane_g7

0x3f99,	// (0x00029d51) set_opt_bg_pane_g8

0x3fa3,	// (0x00029d5b) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x00035726) set_opt_bg_pane_g

0x3f78,	// (0x00029d30) slider_set_pane_g1

0x1b61,	// (0x00027919) slider_set_pane_g2

0x0006,

0xf95f,	// (0x00035717) slider_set_pane_g

0x1ae9,	// (0x000278a1) volume_set_pane_g1

0x1af3,	// (0x000278ab) volume_set_pane_g2

0x1afd,	// (0x000278b5) volume_set_pane_g3

0x1b07,	// (0x000278bf) volume_set_pane_g4

0x1b11,	// (0x000278c9) volume_set_pane_g5

0x1b1b,	// (0x000278d3) volume_set_pane_g6

0x1b25,	// (0x000278dd) volume_set_pane_g7

0x1b2f,	// (0x000278e7) volume_set_pane_g8

0x1b39,	// (0x000278f1) volume_set_pane_g9

0x1b43,	// (0x000278fb) volume_set_pane_g10

0x0009,

0xf937,	// (0x000356ef) volume_set_pane_g

0x9fde,	// (0x0002fd96) indicator_pane_ParamLimits

0x9fde,	// (0x0002fd96) indicator_pane

0xa00a,	// (0x0002fdc2) main_idle_pane_g2_ParamLimits

0xa00a,	// (0x0002fdc2) main_idle_pane_g2

0xa042,	// (0x0002fdfa) main_pane_idle_g1_ParamLimits

0xa042,	// (0x0002fdfa) main_pane_idle_g1

0xcb03,	// (0x000328bb) popup_clock_digital_analogue_window_ParamLimits

0xcb03,	// (0x000328bb) popup_clock_digital_analogue_window

0xa06c,	// (0x0002fe24) soft_indicator_pane_ParamLimits

0xa06c,	// (0x0002fe24) soft_indicator_pane

0xa088,	// (0x0002fe40) wallpaper_pane_ParamLimits

0xa088,	// (0x0002fe40) wallpaper_pane

0xca78,	// (0x00032830) wallpaper_pane_g1

0xa09a,	// (0x0002fe52) indicator_pane_g1_ParamLimits

0xa09a,	// (0x0002fe52) indicator_pane_g1

0x4404,	// (0x0002a1bc) navi_navi_icon_text_pane_srt_g1

0xcb31,	// (0x000328e9) soft_indicator_pane_t1

0xcb4b,	// (0x00032903) aid_ps_area_pane

0xa0b3,	// (0x0002fe6b) aid_ps_clock_pane

0xcb5c,	// (0x00032914) aid_ps_indicator_pane

0xcb68,	// (0x00032920) indicator_ps_pane_ParamLimits

0xcb68,	// (0x00032920) indicator_ps_pane

0xcb77,	// (0x0003292f) power_save_pane_g1_ParamLimits

0xcb77,	// (0x0003292f) power_save_pane_g1

0xcb83,	// (0x0003293b) power_save_pane_g2_ParamLimits

0xcb83,	// (0x0003293b) power_save_pane_g2

0xf008,	// (0x00034dc0) aid_navinavi_width_pane

0xcb4b,	// (0x00032903) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00035322) power_save_pane_g_ParamLimits

0xf56a,	// (0x00035322) power_save_pane_g

0xcb91,	// (0x00032949) power_save_pane_t1_ParamLimits

0xcb91,	// (0x00032949) power_save_pane_t1

0xa0b3,	// (0x0002fe6b) aid_ps_clock_pane_ParamLimits

0xcb5c,	// (0x00032914) aid_ps_indicator_pane_ParamLimits

0xcba3,	// (0x0003295b) power_save_pane_t4_ParamLimits

0xcba3,	// (0x0003295b) power_save_pane_t4

0x0001,

0xf56f,	// (0x00035327) power_save_pane_t_ParamLimits

0xf56f,	// (0x00035327) power_save_pane_t

0xcbcd,	// (0x00032985) power_save_t3_ParamLimits

0xcbcd,	// (0x00032985) power_save_t3

0xcbb8,	// (0x00032970) power_save_t2_ParamLimits

0xcbb8,	// (0x00032970) power_save_t2

0xcbe2,	// (0x0003299a) indicator_ps_pane_g1

0xa0c1,	// (0x0002fe79) ai_gene_pane_ParamLimits

0xa0c1,	// (0x0002fe79) ai_gene_pane

0xa0d8,	// (0x0002fe90) ai_links_pane_ParamLimits

0xa0d8,	// (0x0002fe90) ai_links_pane

0xa0f0,	// (0x0002fea8) indicator_pane_cp1_ParamLimits

0xa0f0,	// (0x0002fea8) indicator_pane_cp1

0xa0ff,	// (0x0002feb7) main_pane_idle_g1_cp_ParamLimits

0xa0ff,	// (0x0002feb7) main_pane_idle_g1_cp

0xcbeb,	// (0x000329a3) popup_ai_links_title_window

0xa117,	// (0x0002fecf) soft_indicator_pane_cp1_ParamLimits

0xa117,	// (0x0002fecf) soft_indicator_pane_cp1

0x3d6c,	// (0x00029b24) ai_links_pane_g1

0x3d75,	// (0x00029b2d) grid_ai_links_pane

0xb75d,	// (0x00031515) ai_gene_pane_1

0x3d5a,	// (0x00029b12) ai_gene_pane_2

0x3d63,	// (0x00029b1b) list_highlight_pane_cp4

0xb739,	// (0x000314f1) cell_ai_link_pane_ParamLimits

0xb739,	// (0x000314f1) cell_ai_link_pane

0x3d29,	// (0x00029ae1) cell_ai_link_pane_g1

0xcddf,	// (0x00032b97) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x000356ca) cell_ai_link_pane_g

0xca82,	// (0x0003283a) grid_highlight_cp2

0xca82,	// (0x0003283a) bg_popup_sub_pane_cp1

0xcc02,	// (0x000329ba) popup_ai_links_title_window_t1

0x3c75,	// (0x00029a2d) ai_gene_pane_1_g1_ParamLimits

0x3c75,	// (0x00029a2d) ai_gene_pane_1_g1

0x3c81,	// (0x00029a39) ai_gene_pane_1_g2_ParamLimits

0x3c81,	// (0x00029a39) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x000356c0) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x000356c0) ai_gene_pane_1_g

0x3c8e,	// (0x00029a46) ai_gene_pane_1_t1_ParamLimits

0x3c8e,	// (0x00029a46) ai_gene_pane_1_t1

0x3cc2,	// (0x00029a7a) grid_ai_soft_ind_pane

0x3c60,	// (0x00029a18) ai_gene_pane_2_t1_ParamLimits

0x3c60,	// (0x00029a18) ai_gene_pane_2_t1

0xa12b,	// (0x0002fee3) main_pane_empty_t1_ParamLimits

0xa12b,	// (0x0002fee3) main_pane_empty_t1

0xa143,	// (0x0002fefb) main_pane_empty_t2_ParamLimits

0xa143,	// (0x0002fefb) main_pane_empty_t2

0xa158,	// (0x0002ff10) main_pane_empty_t3_ParamLimits

0xa158,	// (0x0002ff10) main_pane_empty_t3

0xa16a,	// (0x0002ff22) main_pane_empty_t4_ParamLimits

0xa16a,	// (0x0002ff22) main_pane_empty_t4

0xa17c,	// (0x0002ff34) main_pane_empty_t5_ParamLimits

0xa17c,	// (0x0002ff34) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003532c) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003532c) main_pane_empty_t

0xd1c5,	// (0x00032f7d) bg_popup_window_pane_ParamLimits

0xd1c5,	// (0x00032f7d) bg_popup_window_pane

0x39c2,	// (0x0002977a) find_popup_pane_cp2_ParamLimits

0x39c2,	// (0x0002977a) find_popup_pane_cp2

0x39ce,	// (0x00029786) heading_pane_ParamLimits

0x39ce,	// (0x00029786) heading_pane

0xca82,	// (0x0003283a) bg_popup_sub_pane

0xb657,	// (0x0003140f) bg_popup_window_pane_g1_ParamLimits

0xb657,	// (0x0003140f) bg_popup_window_pane_g1

0xb666,	// (0x0003141e) bg_popup_window_pane_g2_ParamLimits

0xb666,	// (0x0003141e) bg_popup_window_pane_g2

0xb672,	// (0x0003142a) bg_popup_window_pane_g3_ParamLimits

0xb672,	// (0x0003142a) bg_popup_window_pane_g3

0xb67e,	// (0x00031436) bg_popup_window_pane_g4_ParamLimits

0xb67e,	// (0x00031436) bg_popup_window_pane_g4

0xb68d,	// (0x00031445) bg_popup_window_pane_g5_ParamLimits

0xb68d,	// (0x00031445) bg_popup_window_pane_g5

0xb69d,	// (0x00031455) bg_popup_window_pane_g6_ParamLimits

0xb69d,	// (0x00031455) bg_popup_window_pane_g6

0xb6a9,	// (0x00031461) bg_popup_window_pane_g7_ParamLimits

0xb6a9,	// (0x00031461) bg_popup_window_pane_g7

0xb6b8,	// (0x00031470) bg_popup_window_pane_g8_ParamLimits

0xb6b8,	// (0x00031470) bg_popup_window_pane_g8

0xb6c7,	// (0x0003147f) bg_popup_window_pane_g9_ParamLimits

0xb6c7,	// (0x0003147f) bg_popup_window_pane_g9

0x39a8,	// (0x00029760) bg_popup_window_pane_g10_ParamLimits

0x39a8,	// (0x00029760) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x00035688) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x00035688) bg_popup_window_pane_g

0x38d1,	// (0x00029689) bg_popup_heading_pane_ParamLimits

0x38d1,	// (0x00029689) bg_popup_heading_pane

0x1be9,	// (0x000279a1) tabs_4_passive_pane_cp_srt_ParamLimits

0x1be9,	// (0x000279a1) tabs_4_passive_pane_cp_srt

0x1bfb,	// (0x000279b3) tabs_4_passive_pane_srt_ParamLimits

0x38e5,	// (0x0002969d) heading_pane_g2

0x1bfb,	// (0x000279b3) tabs_4_passive_pane_srt

0x2c70,	// (0x00028a28) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2c70,	// (0x00028a28) bg_passive_tab_pane_cp3_srt

0x38ed,	// (0x000296a5) heading_pane_t1_ParamLimits

0x38ed,	// (0x000296a5) heading_pane_t1

0x3904,	// (0x000296bc) heading_pane_t2_ParamLimits

0x3904,	// (0x000296bc) heading_pane_t2

0x0001,

0xf8cb,	// (0x00035683) heading_pane_t_ParamLimits

0xf8cb,	// (0x00035683) heading_pane_t

0x33fc,	// (0x000291b4) bg_popup_heading_pane_g1

0x34ab,	// (0x00029263) bg_popup_heading_pane_g2

0x34b5,	// (0x0002926d) bg_popup_heading_pane_g3

0x34bf,	// (0x00029277) bg_popup_heading_pane_g4

0x34c9,	// (0x00029281) bg_popup_heading_pane_g5

0x34d3,	// (0x0002928b) bg_popup_heading_pane_g6

0x34db,	// (0x00029293) bg_popup_heading_pane_g7

0x34e3,	// (0x0002929b) bg_popup_heading_pane_g8

0x34ed,	// (0x000292a5) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0003563f) bg_popup_heading_pane_g

0x1858,	// (0x00027610) bg_popup_sub_pane_g1

0x1860,	// (0x00027618) bg_popup_sub_pane_g2

0x1868,	// (0x00027620) bg_popup_sub_pane_g3

0x2c1c,	// (0x000289d4) bg_popup_sub_pane_g4

0x1870,	// (0x00027628) bg_popup_sub_pane_g5

0x2c24,	// (0x000289dc) bg_popup_sub_pane_g6

0x2c2c,	// (0x000289e4) bg_popup_sub_pane_g7

0x2c34,	// (0x000289ec) bg_popup_sub_pane_g8

0x2c3c,	// (0x000289f4) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x00035619) bg_popup_sub_pane_g

0xcad0,	// (0x00032888) bg_popup_window_pane_cp5_ParamLimits

0xcad0,	// (0x00032888) bg_popup_window_pane_cp5

0xcc1f,	// (0x000329d7) popup_note_window_g1_ParamLimits

0xcc1f,	// (0x000329d7) popup_note_window_g1

0xcc2b,	// (0x000329e3) popup_note_window_t1_ParamLimits

0xcc2b,	// (0x000329e3) popup_note_window_t1

0xcc41,	// (0x000329f9) popup_note_window_t2_ParamLimits

0xcc41,	// (0x000329f9) popup_note_window_t2

0xcc57,	// (0x00032a0f) popup_note_window_t3_ParamLimits

0xcc57,	// (0x00032a0f) popup_note_window_t3

0xcc6d,	// (0x00032a25) popup_note_window_t4_ParamLimits

0xcc6d,	// (0x00032a25) popup_note_window_t4

0xcc95,	// (0x00032a4d) popup_note_window_t5_ParamLimits

0xcc95,	// (0x00032a4d) popup_note_window_t5

0x0004,

0xf57f,	// (0x00035337) popup_note_window_t_ParamLimits

0xf57f,	// (0x00035337) popup_note_window_t

0xccdf,	// (0x00032a97) bg_popup_window_pane_cp6_ParamLimits

0xccdf,	// (0x00032a97) bg_popup_window_pane_cp6

0x3378,	// (0x00029130) popup_note_image_window_g1_ParamLimits

0x3378,	// (0x00029130) popup_note_image_window_g1

0x3384,	// (0x0002913c) popup_note_image_window_g2_ParamLimits

0x3384,	// (0x0002913c) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0003560d) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0003560d) popup_note_image_window_g

0x339d,	// (0x00029155) popup_note_image_window_t1_ParamLimits

0x339d,	// (0x00029155) popup_note_image_window_t1

0x33b6,	// (0x0002916e) popup_note_image_window_t2_ParamLimits

0x33b6,	// (0x0002916e) popup_note_image_window_t2

0x33cf,	// (0x00029187) popup_note_image_window_t3_ParamLimits

0x33cf,	// (0x00029187) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x00035612) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x00035612) popup_note_image_window_t

0x3238,	// (0x00028ff0) bg_popup_window_pane_cp7_ParamLimits

0x3238,	// (0x00028ff0) bg_popup_window_pane_cp7

0x3268,	// (0x00029020) popup_note_wait_window_g1_ParamLimits

0x3268,	// (0x00029020) popup_note_wait_window_g1

0x3274,	// (0x0002902c) popup_note_wait_window_g2_ParamLimits

0x3274,	// (0x0002902c) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x000355fb) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x000355fb) popup_note_wait_window_g

0x328c,	// (0x00029044) popup_note_wait_window_t1_ParamLimits

0x328c,	// (0x00029044) popup_note_wait_window_t1

0x32b3,	// (0x0002906b) popup_note_wait_window_t2_ParamLimits

0x32b3,	// (0x0002906b) popup_note_wait_window_t2

0x32d1,	// (0x00029089) popup_note_wait_window_t3_ParamLimits

0x32d1,	// (0x00029089) popup_note_wait_window_t3

0x32e4,	// (0x0002909c) popup_note_wait_window_t4_ParamLimits

0x32e4,	// (0x0002909c) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x00035602) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x00035602) popup_note_wait_window_t

0x3309,	// (0x000290c1) wait_bar_pane_ParamLimits

0x3309,	// (0x000290c1) wait_bar_pane

0xca82,	// (0x0003283a) wait_anim_pane

0xca82,	// (0x0003283a) wait_border_pane

0xca78,	// (0x00032830) wait_anim_pane_g1

0xca78,	// (0x00032830) wait_anim_pane_g2

0x0001,

0xf703,	// (0x000354bb) wait_anim_pane_g

0x31dc,	// (0x00028f94) wait_border_pane_g1

0x31e7,	// (0x00028f9f) wait_border_pane_g2

0x31f0,	// (0x00028fa8) wait_border_pane_g3

0x0002,

0xf83c,	// (0x000355f4) wait_border_pane_g

0x3046,	// (0x00028dfe) bg_popup_window_pane_cp16_ParamLimits

0x3046,	// (0x00028dfe) bg_popup_window_pane_cp16

0x3146,	// (0x00028efe) indicator_popup_pane_cp4_ParamLimits

0x3146,	// (0x00028efe) indicator_popup_pane_cp4

0x315a,	// (0x00028f12) popup_query_data_window_t1_ParamLimits

0x315a,	// (0x00028f12) popup_query_data_window_t1

0x316c,	// (0x00028f24) popup_query_data_window_t2_ParamLimits

0x316c,	// (0x00028f24) popup_query_data_window_t2

0x3185,	// (0x00028f3d) popup_query_data_window_t3_ParamLimits

0x3185,	// (0x00028f3d) popup_query_data_window_t3

0x0002,

0xf835,	// (0x000355ed) popup_query_data_window_t_ParamLimits

0xf835,	// (0x000355ed) popup_query_data_window_t

0x319f,	// (0x00028f57) query_popup_data_pane_ParamLimits

0x319f,	// (0x00028f57) query_popup_data_pane

0x31b3,	// (0x00028f6b) query_popup_data_pane_cp1_ParamLimits

0x31b3,	// (0x00028f6b) query_popup_data_pane_cp1

0x3046,	// (0x00028dfe) bg_popup_window_pane_cp10_ParamLimits

0x3046,	// (0x00028dfe) bg_popup_window_pane_cp10

0x3078,	// (0x00028e30) indicator_popup_pane_ParamLimits

0x3078,	// (0x00028e30) indicator_popup_pane

0x309a,	// (0x00028e52) popup_query_code_window_t1_ParamLimits

0x309a,	// (0x00028e52) popup_query_code_window_t1

0x30b4,	// (0x00028e6c) popup_query_code_window_t2_ParamLimits

0x30b4,	// (0x00028e6c) popup_query_code_window_t2

0x30fd,	// (0x00028eb5) popup_query_code_window_t3_ParamLimits

0x30fd,	// (0x00028eb5) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x000355e6) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x000355e6) popup_query_code_window_t

0x312c,	// (0x00028ee4) query_popup_pane_ParamLimits

0x312c,	// (0x00028ee4) query_popup_pane

0xccdf,	// (0x00032a97) bg_popup_window_pane_cp15_ParamLimits

0xccdf,	// (0x00032a97) bg_popup_window_pane_cp15

0xccff,	// (0x00032ab7) indicator_popup_pane_cp1_ParamLimits

0xccff,	// (0x00032ab7) indicator_popup_pane_cp1

0xcd12,	// (0x00032aca) indicator_popup_pane_cp2_ParamLimits

0xcd12,	// (0x00032aca) indicator_popup_pane_cp2

0xcd2d,	// (0x00032ae5) popup_query_data_code_window_g1_ParamLimits

0xcd2d,	// (0x00032ae5) popup_query_data_code_window_g1

0xcd40,	// (0x00032af8) popup_query_data_code_window_t1_ParamLimits

0xcd40,	// (0x00032af8) popup_query_data_code_window_t1

0xcd52,	// (0x00032b0a) popup_query_data_code_window_t2_ParamLimits

0xcd52,	// (0x00032b0a) popup_query_data_code_window_t2

0xcd64,	// (0x00032b1c) popup_query_data_code_window_t3_ParamLimits

0xcd64,	// (0x00032b1c) popup_query_data_code_window_t3

0xcd7a,	// (0x00032b32) popup_query_data_code_window_t4_ParamLimits

0xcd7a,	// (0x00032b32) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00035342) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00035342) popup_query_data_code_window_t

0x05a7,	// (0x0002635f) list_single_midp_graphic_pane_g3

0xcd94,	// (0x00032b4c) query_popup_data_pane_cp2_ParamLimits

0xcda7,	// (0x00032b5f) query_popup_pane_cp2_ParamLimits

0xcda7,	// (0x00032b5f) query_popup_pane_cp2

0xca82,	// (0x0003283a) bg_popup_window_pane_cp11

0x3032,	// (0x00028dea) heading_pane_cp5

0xce40,	// (0x00032bf8) listscroll_popup_info_pane

0xca82,	// (0x0003283a) input_focus_pane_cp3

0xcdc2,	// (0x00032b7a) query_popup_pane_t1

0xcdd0,	// (0x00032b88) list_popup_info_pane_ParamLimits

0xcdd0,	// (0x00032b88) list_popup_info_pane

0xcddf,	// (0x00032b97) listscroll_popup_info_pane_g1

0xcde7,	// (0x00032b9f) scroll_pane_cp7

0xcdf1,	// (0x00032ba9) popup_info_list_pane_t1_ParamLimits

0xcdf1,	// (0x00032ba9) popup_info_list_pane_t1

0xce0b,	// (0x00032bc3) popup_info_list_pane_t2_ParamLimits

0xce0b,	// (0x00032bc3) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003534b) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003534b) popup_info_list_pane_t

0xca82,	// (0x0003283a) bg_popup_window_pane_cp12

0x441e,	// (0x0002a1d6) find_popup_pane

0xcade,	// (0x00032896) bg_popup_window_pane_cp3

0xce25,	// (0x00032bdd) heading_pane_cp3

0xce31,	// (0x00032be9) listscroll_popup_graphic_pane

0xca82,	// (0x0003283a) bg_popup_window_pane_cp4

0xa1de,	// (0x0002ff96) heading_pane_cp4

0xce40,	// (0x00032bf8) listscroll_popup_colour_pane

0xa1e8,	// (0x0002ffa0) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa1e8,	// (0x0002ffa0) cell_large_graphic_colour_none_popup_pane

0xa1fc,	// (0x0002ffb4) grid_large_graphic_colour_popup_pane_ParamLimits

0xa1fc,	// (0x0002ffb4) grid_large_graphic_colour_popup_pane

0xa220,	// (0x0002ffd8) listscroll_popup_colour_pane_g1_ParamLimits

0xa220,	// (0x0002ffd8) listscroll_popup_colour_pane_g1

0xa237,	// (0x0002ffef) listscroll_popup_colour_pane_g2_ParamLimits

0xa237,	// (0x0002ffef) listscroll_popup_colour_pane_g2

0xa24e,	// (0x00030006) listscroll_popup_colour_pane_g3_ParamLimits

0xa24e,	// (0x00030006) listscroll_popup_colour_pane_g3

0xa25e,	// (0x00030016) listscroll_popup_colour_pane_g4_ParamLimits

0xa25e,	// (0x00030016) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00035350) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00035350) listscroll_popup_colour_pane_g

0xce48,	// (0x00032c00) scroll_pane_cp6_ParamLimits

0xce48,	// (0x00032c00) scroll_pane_cp6

0xa26e,	// (0x00030026) cell_large_graphic_colour_popup_pane_ParamLimits

0xa26e,	// (0x00030026) cell_large_graphic_colour_popup_pane

0xce5a,	// (0x00032c12) cell_large_graphic_colour_none_popup_pane_t1

0xca82,	// (0x0003283a) grid_highlight_pane_cp5

0xce69,	// (0x00032c21) cell_large_graphic_colour_popup_pane_g1

0xce71,	// (0x00032c29) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00035359) cell_large_graphic_colour_popup_pane_g

0xce79,	// (0x00032c31) cell_large_graphic_colour_popup_pane_g2_copy1

0xce82,	// (0x00032c3a) grid_highlight_pane_cp4

0xce8a,	// (0x00032c42) bg_popup_window_pane_cp8_ParamLimits

0xce8a,	// (0x00032c42) bg_popup_window_pane_cp8

0xcea5,	// (0x00032c5d) popup_snote_single_text_window_g1_ParamLimits

0xcea5,	// (0x00032c5d) popup_snote_single_text_window_g1

0xceb7,	// (0x00032c6f) popup_snote_single_text_window_t1_ParamLimits

0xceb7,	// (0x00032c6f) popup_snote_single_text_window_t1

0xceca,	// (0x00032c82) popup_snote_single_text_window_t2_ParamLimits

0xceca,	// (0x00032c82) popup_snote_single_text_window_t2

0xcedd,	// (0x00032c95) popup_snote_single_text_window_t3_ParamLimits

0xcedd,	// (0x00032c95) popup_snote_single_text_window_t3

0xcf16,	// (0x00032cce) popup_snote_single_text_window_t4_ParamLimits

0xcf16,	// (0x00032cce) popup_snote_single_text_window_t4

0xcf4a,	// (0x00032d02) popup_snote_single_text_window_t5_ParamLimits

0xcf4a,	// (0x00032d02) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003535e) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003535e) popup_snote_single_text_window_t

0xcf79,	// (0x00032d31) bg_popup_window_pane_cp9_ParamLimits

0xcf79,	// (0x00032d31) bg_popup_window_pane_cp9

0xcea5,	// (0x00032c5d) popup_snote_single_graphic_window_g1_ParamLimits

0xcea5,	// (0x00032c5d) popup_snote_single_graphic_window_g1

0xcf87,	// (0x00032d3f) popup_snote_single_graphic_window_g2_ParamLimits

0xcf87,	// (0x00032d3f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00035369) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00035369) popup_snote_single_graphic_window_g

0xcf93,	// (0x00032d4b) popup_snote_single_graphic_window_t1_ParamLimits

0xcf93,	// (0x00032d4b) popup_snote_single_graphic_window_t1

0xcfa6,	// (0x00032d5e) popup_snote_single_graphic_window_t2_ParamLimits

0xcfa6,	// (0x00032d5e) popup_snote_single_graphic_window_t2

0xcfb9,	// (0x00032d71) popup_snote_single_graphic_window_t3_ParamLimits

0xcfb9,	// (0x00032d71) popup_snote_single_graphic_window_t3

0xcff2,	// (0x00032daa) popup_snote_single_graphic_window_t4_ParamLimits

0xcff2,	// (0x00032daa) popup_snote_single_graphic_window_t4

0xd026,	// (0x00032dde) popup_snote_single_graphic_window_t5_ParamLimits

0xd026,	// (0x00032dde) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003536e) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003536e) popup_snote_single_graphic_window_t

0x435c,	// (0x0002a114) grid_graphic_popup_pane_ParamLimits

0x435c,	// (0x0002a114) grid_graphic_popup_pane

0x438a,	// (0x0002a142) listscroll_popup_graphic_pane_g1_ParamLimits

0x438a,	// (0x0002a142) listscroll_popup_graphic_pane_g1

0xb9a6,	// (0x0003175e) listscroll_popup_graphic_pane_g2_ParamLimits

0xb9a6,	// (0x0003175e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x00035763) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x00035763) listscroll_popup_graphic_pane_g

0x43b2,	// (0x0002a16a) scroll_pane_cp5

0xb945,	// (0x000316fd) cell_graphic_popup_pane_ParamLimits

0xb945,	// (0x000316fd) cell_graphic_popup_pane

0x42d2,	// (0x0002a08a) cell_graphic_popup_pane_g1

0x42da,	// (0x0002a092) cell_graphic_popup_pane_g2

0xce79,	// (0x00032c31) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0003575c) cell_graphic_popup_pane_g

0x42e3,	// (0x0002a09b) cell_graphic_popup_pane_t2

0xce82,	// (0x00032c3a) grid_highlight_pane_cp3

0xd067,	// (0x00032e1f) list_gen_pane_ParamLimits

0xd067,	// (0x00032e1f) list_gen_pane

0xd08f,	// (0x00032e47) scroll_pane

0xb8fc,	// (0x000316b4) bg_list_pane_g1_ParamLimits

0xb8fc,	// (0x000316b4) bg_list_pane_g1

0x4247,	// (0x00029fff) bg_list_pane_g2_ParamLimits

0x4247,	// (0x00029fff) bg_list_pane_g2

0x425c,	// (0x0002a014) bg_list_pane_g3_ParamLimits

0x425c,	// (0x0002a014) bg_list_pane_g3

0x4270,	// (0x0002a028) bg_list_pane_g4_ParamLimits

0x4270,	// (0x0002a028) bg_list_pane_g4

0xb919,	// (0x000316d1) bg_list_pane_g5_ParamLimits

0xb919,	// (0x000316d1) bg_list_pane_g5

0x0004,

0xf999,	// (0x00035751) bg_list_pane_g_ParamLimits

0xf999,	// (0x00035751) bg_list_pane_g

0xb8bf,	// (0x00031677) list_double2_graphic_large_graphic_pane_ParamLimits

0xb8bf,	// (0x00031677) list_double2_graphic_large_graphic_pane

0xb8bf,	// (0x00031677) list_double2_graphic_pane_ParamLimits

0xb8bf,	// (0x00031677) list_double2_graphic_pane

0xb8bf,	// (0x00031677) list_double2_large_graphic_pane_ParamLimits

0xb8bf,	// (0x00031677) list_double2_large_graphic_pane

0xb8bf,	// (0x00031677) list_double2_pane_ParamLimits

0xb8bf,	// (0x00031677) list_double2_pane

0xb8bf,	// (0x00031677) list_double_graphic_heading_pane_ParamLimits

0xb8bf,	// (0x00031677) list_double_graphic_heading_pane

0xb8bf,	// (0x00031677) list_double_graphic_pane_ParamLimits

0xb8bf,	// (0x00031677) list_double_graphic_pane

0xb8bf,	// (0x00031677) list_double_heading_pane_ParamLimits

0xb8bf,	// (0x00031677) list_double_heading_pane

0xb8bf,	// (0x00031677) list_double_large_graphic_pane_ParamLimits

0xb8bf,	// (0x00031677) list_double_large_graphic_pane

0xb8bf,	// (0x00031677) list_double_number_pane_ParamLimits

0xb8bf,	// (0x00031677) list_double_number_pane

0xb8bf,	// (0x00031677) list_double_pane_ParamLimits

0xb8bf,	// (0x00031677) list_double_pane

0xb8bf,	// (0x00031677) list_double_time_pane_ParamLimits

0xb8bf,	// (0x00031677) list_double_time_pane

0xb8bf,	// (0x00031677) list_setting_number_pane_ParamLimits

0xb8bf,	// (0x00031677) list_setting_number_pane

0xb8bf,	// (0x00031677) list_setting_pane_ParamLimits

0xb8bf,	// (0x00031677) list_setting_pane

0x9a9a,	// (0x0002f852) list_single_2graphic_pane_ParamLimits

0x9a9a,	// (0x0002f852) list_single_2graphic_pane

0x9a9a,	// (0x0002f852) list_single_graphic_heading_pane_ParamLimits

0x9a9a,	// (0x0002f852) list_single_graphic_heading_pane

0x9a9a,	// (0x0002f852) list_single_graphic_pane_ParamLimits

0x9a9a,	// (0x0002f852) list_single_graphic_pane

0x9a9a,	// (0x0002f852) list_single_heading_pane_ParamLimits

0x9a9a,	// (0x0002f852) list_single_heading_pane

0xb8bf,	// (0x00031677) list_single_large_graphic_pane_ParamLimits

0xb8bf,	// (0x00031677) list_single_large_graphic_pane

0x9a9a,	// (0x0002f852) list_single_number_heading_pane_ParamLimits

0x9a9a,	// (0x0002f852) list_single_number_heading_pane

0x9a9a,	// (0x0002f852) list_single_number_pane_ParamLimits

0x9a9a,	// (0x0002f852) list_single_number_pane

0x9a9a,	// (0x0002f852) list_single_pane_ParamLimits

0x9a9a,	// (0x0002f852) list_single_pane

0xca82,	// (0x0003283a) list_highlight_pane_cp1

0xe8b6,	// (0x0003466e) list_single_pane_g1_ParamLimits

0xe8b6,	// (0x0003466e) list_single_pane_g1

0xe8c2,	// (0x0003467a) list_single_pane_g2_ParamLimits

0xe8c2,	// (0x0003467a) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00035380) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00035380) list_single_pane_g

0xebd1,	// (0x00034989) list_single_pane_t1_ParamLimits

0xebd1,	// (0x00034989) list_single_pane_t1

0xe8b6,	// (0x0003466e) list_single_number_pane_g1_ParamLimits

0xe8b6,	// (0x0003466e) list_single_number_pane_g1

0xe8c2,	// (0x0003467a) list_single_number_pane_g2_ParamLimits

0xe8c2,	// (0x0003467a) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00035380) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00035380) list_single_number_pane_g

0xeafc,	// (0x000348b4) list_single_number_pane_t1_ParamLimits

0xeafc,	// (0x000348b4) list_single_number_pane_t1

0x9a5c,	// (0x0002f814) list_single_number_pane_t2_ParamLimits

0x9a5c,	// (0x0002f814) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x00035712) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x00035712) list_single_number_pane_t

0x9442,	// (0x0002f1fa) list_single_graphic_pane_g1_ParamLimits

0x9442,	// (0x0002f1fa) list_single_graphic_pane_g1

0xe8b6,	// (0x0003466e) list_single_graphic_pane_g2_ParamLimits

0xe8b6,	// (0x0003466e) list_single_graphic_pane_g2

0xe8c2,	// (0x0003467a) list_single_graphic_pane_g3_ParamLimits

0xe8c2,	// (0x0003467a) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00035379) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00035379) list_single_graphic_pane_g

0x944e,	// (0x0002f206) list_single_graphic_pane_t1_ParamLimits

0x944e,	// (0x0002f206) list_single_graphic_pane_t1

0xe8b6,	// (0x0003466e) list_single_heading_pane_g1_ParamLimits

0xe8b6,	// (0x0003466e) list_single_heading_pane_g1

0xe8c2,	// (0x0003467a) list_single_heading_pane_g2_ParamLimits

0xe8c2,	// (0x0003467a) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00035380) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00035380) list_single_heading_pane_g

0x9464,	// (0x0002f21c) list_single_heading_pane_t1_ParamLimits

0x9464,	// (0x0002f21c) list_single_heading_pane_t1

0x947a,	// (0x0002f232) list_single_heading_pane_t2_ParamLimits

0x947a,	// (0x0002f232) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00035385) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00035385) list_single_heading_pane_t

0xe8b6,	// (0x0003466e) list_single_number_heading_pane_g1_ParamLimits

0xe8b6,	// (0x0003466e) list_single_number_heading_pane_g1

0xe8c2,	// (0x0003467a) list_single_number_heading_pane_g2_ParamLimits

0xe8c2,	// (0x0003467a) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00035380) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00035380) list_single_number_heading_pane_g

0x9464,	// (0x0002f21c) list_single_number_heading_pane_t1_ParamLimits

0x9464,	// (0x0002f21c) list_single_number_heading_pane_t1

0xe8ce,	// (0x00034686) list_single_number_heading_pane_t2_ParamLimits

0xe8ce,	// (0x00034686) list_single_number_heading_pane_t2

0xe8e0,	// (0x00034698) list_single_number_heading_pane_t3_ParamLimits

0xe8e0,	// (0x00034698) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003538a) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003538a) list_single_number_heading_pane_t

0xe8f2,	// (0x000346aa) list_single_graphic_heading_pane_g1_ParamLimits

0xe8f2,	// (0x000346aa) list_single_graphic_heading_pane_g1

0x948c,	// (0x0002f244) list_single_graphic_heading_pane_g4_ParamLimits

0x948c,	// (0x0002f244) list_single_graphic_heading_pane_g4

0xe8c2,	// (0x0003467a) list_single_graphic_heading_pane_g5_ParamLimits

0xe8c2,	// (0x0003467a) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00035391) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00035391) list_single_graphic_heading_pane_g

0x9464,	// (0x0002f21c) list_single_graphic_heading_pane_t1_ParamLimits

0x9464,	// (0x0002f21c) list_single_graphic_heading_pane_t1

0x949d,	// (0x0002f255) list_single_graphic_heading_pane_t2_ParamLimits

0x949d,	// (0x0002f255) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00035398) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00035398) list_single_graphic_heading_pane_t

0xe8fe,	// (0x000346b6) list_single_large_graphic_pane_g1_ParamLimits

0xe8fe,	// (0x000346b6) list_single_large_graphic_pane_g1

0xe90a,	// (0x000346c2) list_single_large_graphic_pane_g2_ParamLimits

0xe90a,	// (0x000346c2) list_single_large_graphic_pane_g2

0xe916,	// (0x000346ce) list_single_large_graphic_pane_g3_ParamLimits

0xe916,	// (0x000346ce) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003539d) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003539d) list_single_large_graphic_pane_g

0x31e7,	// (0x00028f9f) wait_border_pane_g2_copy1

0x94af,	// (0x0002f267) list_single_large_graphic_pane_g4_cp2

0xe922,	// (0x000346da) list_single_large_graphic_pane_t1_ParamLimits

0xe922,	// (0x000346da) list_single_large_graphic_pane_t1

0x94b7,	// (0x0002f26f) list_double_pane_g1_ParamLimits

0x94b7,	// (0x0002f26f) list_double_pane_g1

0xe938,	// (0x000346f0) list_double_pane_g2_ParamLimits

0xe938,	// (0x000346f0) list_double_pane_g2

0x0001,

0xf5ec,	// (0x000353a4) list_double_pane_g_ParamLimits

0xf5ec,	// (0x000353a4) list_double_pane_g

0x94c3,	// (0x0002f27b) list_double_pane_t1_ParamLimits

0x94c3,	// (0x0002f27b) list_double_pane_t1

0x94d9,	// (0x0002f291) list_double_pane_t2_ParamLimits

0x94d9,	// (0x0002f291) list_double_pane_t2

0x0001,

0xf5f1,	// (0x000353a9) list_double_pane_t_ParamLimits

0xf5f1,	// (0x000353a9) list_double_pane_t

0x94eb,	// (0x0002f2a3) list_double2_pane_g1_ParamLimits

0x94eb,	// (0x0002f2a3) list_double2_pane_g1

0x94fc,	// (0x0002f2b4) list_double2_pane_g2_ParamLimits

0x94fc,	// (0x0002f2b4) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x000353ae) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x000353ae) list_double2_pane_g

0x9508,	// (0x0002f2c0) list_double2_pane_t1_ParamLimits

0x9508,	// (0x0002f2c0) list_double2_pane_t1

0x951e,	// (0x0002f2d6) list_double2_pane_t2_ParamLimits

0x951e,	// (0x0002f2d6) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x000353b3) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x000353b3) list_double2_pane_t

0x94b7,	// (0x0002f26f) list_double_number_pane_g1_ParamLimits

0x94b7,	// (0x0002f26f) list_double_number_pane_g1

0xe938,	// (0x000346f0) list_double_number_pane_g2_ParamLimits

0xe938,	// (0x000346f0) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x000353a4) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x000353a4) list_double_number_pane_g

0x9530,	// (0x0002f2e8) list_double_number_pane_t1_ParamLimits

0x9530,	// (0x0002f2e8) list_double_number_pane_t1

0x9542,	// (0x0002f2fa) list_double_number_pane_t2_ParamLimits

0x9542,	// (0x0002f2fa) list_double_number_pane_t2

0x9558,	// (0x0002f310) list_double_number_pane_t3_ParamLimits

0x9558,	// (0x0002f310) list_double_number_pane_t3

0x0002,

0xf600,	// (0x000353b8) list_double_number_pane_t_ParamLimits

0xf600,	// (0x000353b8) list_double_number_pane_t

0x956a,	// (0x0002f322) list_double_graphic_pane_g1_ParamLimits

0x956a,	// (0x0002f322) list_double_graphic_pane_g1

0x9576,	// (0x0002f32e) list_double_graphic_pane_g2_ParamLimits

0x9576,	// (0x0002f32e) list_double_graphic_pane_g2

0x9585,	// (0x0002f33d) list_double_graphic_pane_g3_ParamLimits

0x9585,	// (0x0002f33d) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x000353bf) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x000353bf) list_double_graphic_pane_g

0x959d,	// (0x0002f355) list_double_graphic_pane_t1_ParamLimits

0x959d,	// (0x0002f355) list_double_graphic_pane_t1

0x95b3,	// (0x0002f36b) list_double_graphic_pane_t2_ParamLimits

0x95b3,	// (0x0002f36b) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x000353c8) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x000353c8) list_double_graphic_pane_t

0x95c5,	// (0x0002f37d) list_double2_graphic_pane_g1_ParamLimits

0x95c5,	// (0x0002f37d) list_double2_graphic_pane_g1

0xe944,	// (0x000346fc) list_double2_graphic_pane_g2_ParamLimits

0xe944,	// (0x000346fc) list_double2_graphic_pane_g2

0xe950,	// (0x00034708) list_double2_graphic_pane_g3_ParamLimits

0xe950,	// (0x00034708) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x000353cd) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x000353cd) list_double2_graphic_pane_g

0x95d1,	// (0x0002f389) list_double2_graphic_pane_t1_ParamLimits

0x95d1,	// (0x0002f389) list_double2_graphic_pane_t1

0x95e7,	// (0x0002f39f) list_double2_graphic_pane_t2_ParamLimits

0x95e7,	// (0x0002f39f) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x000353d4) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x000353d4) list_double2_graphic_pane_t

0x95f9,	// (0x0002f3b1) list_double_large_graphic_pane_g1_ParamLimits

0x95f9,	// (0x0002f3b1) list_double_large_graphic_pane_g1

0x9618,	// (0x0002f3d0) list_double_large_graphic_pane_g2_ParamLimits

0x9618,	// (0x0002f3d0) list_double_large_graphic_pane_g2

0xe938,	// (0x000346f0) list_double_large_graphic_pane_g3_ParamLimits

0xe938,	// (0x000346f0) list_double_large_graphic_pane_g3

0x9629,	// (0x0002f3e1) list_double_large_graphic_pane_g4_ParamLimits

0x9629,	// (0x0002f3e1) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x000353d9) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x000353d9) list_double_large_graphic_pane_g

0x963c,	// (0x0002f3f4) list_double_large_graphic_pane_t1_ParamLimits

0x963c,	// (0x0002f3f4) list_double_large_graphic_pane_t1

0x9655,	// (0x0002f40d) list_double_large_graphic_pane_t2_ParamLimits

0x9655,	// (0x0002f40d) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x000353e4) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x000353e4) list_double_large_graphic_pane_t

0x9667,	// (0x0002f41f) list_double2_large_graphic_pane_g1_ParamLimits

0x9667,	// (0x0002f41f) list_double2_large_graphic_pane_g1

0x94eb,	// (0x0002f2a3) list_double2_large_graphic_pane_g2_ParamLimits

0x94eb,	// (0x0002f2a3) list_double2_large_graphic_pane_g2

0x94fc,	// (0x0002f2b4) list_double2_large_graphic_pane_g3_ParamLimits

0x94fc,	// (0x0002f2b4) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x000353e9) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x000353e9) list_double2_large_graphic_pane_g

0x9673,	// (0x0002f42b) list_double2_large_graphic_pane_t1_ParamLimits

0x9673,	// (0x0002f42b) list_double2_large_graphic_pane_t1

0x9689,	// (0x0002f441) list_double2_large_graphic_pane_t2_ParamLimits

0x9689,	// (0x0002f441) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x000353f0) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x000353f0) list_double2_large_graphic_pane_t

0x969b,	// (0x0002f453) list_double_heading_pane_g1_ParamLimits

0x969b,	// (0x0002f453) list_double_heading_pane_g1

0x96ac,	// (0x0002f464) list_double_heading_pane_g2_ParamLimits

0x96ac,	// (0x0002f464) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x000353f5) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x000353f5) list_double_heading_pane_g

0x96b8,	// (0x0002f470) list_double_heading_pane_t1_ParamLimits

0x96b8,	// (0x0002f470) list_double_heading_pane_t1

0x951e,	// (0x0002f2d6) list_double_heading_pane_t2_ParamLimits

0x951e,	// (0x0002f2d6) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x000353fa) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x000353fa) list_double_heading_pane_t

0xe971,	// (0x00034729) list_double_graphic_heading_pane_g1_ParamLimits

0xe971,	// (0x00034729) list_double_graphic_heading_pane_g1

0x969b,	// (0x0002f453) list_double_graphic_heading_pane_g2_ParamLimits

0x969b,	// (0x0002f453) list_double_graphic_heading_pane_g2

0x96ac,	// (0x0002f464) list_double_graphic_heading_pane_g3_ParamLimits

0x96ac,	// (0x0002f464) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x000353ff) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x000353ff) list_double_graphic_heading_pane_g

0x96ce,	// (0x0002f486) list_double_graphic_heading_pane_t1_ParamLimits

0x96ce,	// (0x0002f486) list_double_graphic_heading_pane_t1

0x95e7,	// (0x0002f39f) list_double_graphic_heading_pane_t2_ParamLimits

0x95e7,	// (0x0002f39f) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00035406) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00035406) list_double_graphic_heading_pane_t

0x9618,	// (0x0002f3d0) list_double_time_pane_g1_ParamLimits

0x9618,	// (0x0002f3d0) list_double_time_pane_g1

0xe938,	// (0x000346f0) list_double_time_pane_g2_ParamLimits

0xe938,	// (0x000346f0) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0003540b) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0003540b) list_double_time_pane_g

0x96e4,	// (0x0002f49c) list_double_time_pane_t1_ParamLimits

0x96e4,	// (0x0002f49c) list_double_time_pane_t1

0x96fa,	// (0x0002f4b2) list_double_time_pane_t2_ParamLimits

0x96fa,	// (0x0002f4b2) list_double_time_pane_t2

0x970c,	// (0x0002f4c4) list_double_time_pane_t3_ParamLimits

0x970c,	// (0x0002f4c4) list_double_time_pane_t3

0x971e,	// (0x0002f4d6) list_double_time_pane_t4_ParamLimits

0x971e,	// (0x0002f4d6) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00035410) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00035410) list_double_time_pane_t

0x9730,	// (0x0002f4e8) list_setting_pane_g1_ParamLimits

0x9730,	// (0x0002f4e8) list_setting_pane_g1

0x973c,	// (0x0002f4f4) list_setting_pane_g2_ParamLimits

0x973c,	// (0x0002f4f4) list_setting_pane_g2

0x0001,

0xf661,	// (0x00035419) list_setting_pane_g_ParamLimits

0xf661,	// (0x00035419) list_setting_pane_g

0x9748,	// (0x0002f500) list_setting_pane_t1_ParamLimits

0x9748,	// (0x0002f500) list_setting_pane_t1

0x9762,	// (0x0002f51a) list_setting_pane_t2_ParamLimits

0x9762,	// (0x0002f51a) list_setting_pane_t2

0x0002,

0xf666,	// (0x0003541e) list_setting_pane_t_ParamLimits

0xf666,	// (0x0003541e) list_setting_pane_t

0x97a1,	// (0x0002f559) set_value_pane_cp_ParamLimits

0x97a1,	// (0x0002f559) set_value_pane_cp

0x97af,	// (0x0002f567) list_setting_number_pane_g1_ParamLimits

0x97af,	// (0x0002f567) list_setting_number_pane_g1

0x97bb,	// (0x0002f573) list_setting_number_pane_g2_ParamLimits

0x97bb,	// (0x0002f573) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00035425) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00035425) list_setting_number_pane_g

0x97c7,	// (0x0002f57f) list_setting_number_pane_t1_ParamLimits

0x97c7,	// (0x0002f57f) list_setting_number_pane_t1

0x97e0,	// (0x0002f598) list_setting_number_pane_t2_ParamLimits

0x97e0,	// (0x0002f598) list_setting_number_pane_t2

0x97fa,	// (0x0002f5b2) list_setting_number_pane_t3_ParamLimits

0x97fa,	// (0x0002f5b2) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0003542a) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0003542a) list_setting_number_pane_t

0x97a1,	// (0x0002f559) set_value_pane_ParamLimits

0x97a1,	// (0x0002f559) set_value_pane

0xd0c3,	// (0x00032e7b) bg_set_opt_pane_ParamLimits

0xd0c3,	// (0x00032e7b) bg_set_opt_pane

0xe97d,	// (0x00034735) set_value_pane_t1

0xd0e4,	// (0x00032e9c) slider_set_pane_cp3

0xd0ed,	// (0x00032ea5) volume_small_pane_cp

0xd0f6,	// (0x00032eae) list_form_gen_pane

0xd0ff,	// (0x00032eb7) scroll_pane_cp8

0x983d,	// (0x0002f5f5) form_field_data_pane_ParamLimits

0x983d,	// (0x0002f5f5) form_field_data_pane

0x9858,	// (0x0002f610) form_field_data_wide_pane_ParamLimits

0x9858,	// (0x0002f610) form_field_data_wide_pane

0xe99b,	// (0x00034753) form_field_popup_pane_ParamLimits

0xe99b,	// (0x00034753) form_field_popup_pane

0x987a,	// (0x0002f632) form_field_popup_wide_pane_ParamLimits

0x987a,	// (0x0002f632) form_field_popup_wide_pane

0xe9bd,	// (0x00034775) form_field_slider_pane_ParamLimits

0xe9bd,	// (0x00034775) form_field_slider_pane

0xe9d0,	// (0x00034788) form_field_slider_wide_pane_ParamLimits

0xe9d0,	// (0x00034788) form_field_slider_wide_pane

0xd110,	// (0x00032ec8) data_form_pane

0x98a5,	// (0x0002f65d) form_field_data_pane_t1

0xd11c,	// (0x00032ed4) input_focus_pane

0xe9e3,	// (0x0003479b) data_form_wide_pane

0xea00,	// (0x000347b8) form_field_data_wide_pane_t1

0xce97,	// (0x00032c4f) input_focus_pane_cp6

0x98bf,	// (0x0002f677) form_field_popup_pane_t1

0xd11c,	// (0x00032ed4) input_focus_pane_cp7

0xd14a,	// (0x00032f02) list_form_pane

0xea2a,	// (0x000347e2) form_field_popup_wide_pane_t1

0xd11c,	// (0x00032ed4) input_focus_pane_cp8

0xd156,	// (0x00032f0e) list_form_wide_pane

0x98e1,	// (0x0002f699) form_field_slider_pane_t1_ParamLimits

0x98e1,	// (0x0002f699) form_field_slider_pane_t1

0x98f9,	// (0x0002f6b1) form_field_slider_pane_t2_ParamLimits

0x98f9,	// (0x0002f6b1) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0003543a) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0003543a) form_field_slider_pane_t

0xcad0,	// (0x00032888) input_focus_pane_cp9_ParamLimits

0xcad0,	// (0x00032888) input_focus_pane_cp9

0x990e,	// (0x0002f6c6) slider_cont_pane_ParamLimits

0x990e,	// (0x0002f6c6) slider_cont_pane

0xd162,	// (0x00032f1a) form_field_slider_wide_pane_t1_ParamLimits

0xd162,	// (0x00032f1a) form_field_slider_wide_pane_t1

0xea3f,	// (0x000347f7) form_field_slider_wide_pane_t2_ParamLimits

0xea3f,	// (0x000347f7) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0003543f) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0003543f) form_field_slider_wide_pane_t

0xcad0,	// (0x00032888) input_focus_pane_cp10_ParamLimits

0xcad0,	// (0x00032888) input_focus_pane_cp10

0x9922,	// (0x0002f6da) slider_cont_pane_cp1_ParamLimits

0x9922,	// (0x0002f6da) slider_cont_pane_cp1

0x9936,	// (0x0002f6ee) slider_form_pane_cp

0xd174,	// (0x00032f2c) input_focus_pane_g1

0xd17c,	// (0x00032f34) input_focus_pane_g2

0xd184,	// (0x00032f3c) input_focus_pane_g3

0xd18c,	// (0x00032f44) input_focus_pane_g4

0xd194,	// (0x00032f4c) input_focus_pane_g5

0xd19c,	// (0x00032f54) input_focus_pane_g6

0xd1a4,	// (0x00032f5c) input_focus_pane_g7

0xd1ac,	// (0x00032f64) input_focus_pane_g8

0xd1b4,	// (0x00032f6c) input_focus_pane_g9

0xca78,	// (0x00032830) input_focus_pane_g10

0x0009,

0xf68c,	// (0x00035444) input_focus_pane_g

0x31f0,	// (0x00028fa8) wait_border_pane_g3_copy1

0x993e,	// (0x0002f6f6) data_form_pane_t1

0xca78,	// (0x00032830) wait_anim_pane_g1_copy1

0x9a6e,	// (0x0002f826) data_form_wide_pane_t1

0xea51,	// (0x00034809) list_form_graphic_pane_cp_ParamLimits

0xea51,	// (0x00034809) list_form_graphic_pane_cp

0x413c,	// (0x00029ef4) slider_form_pane_g1

0x4145,	// (0x00029efd) slider_form_pane_g2

0x0006,

0xf98a,	// (0x00035742) slider_form_pane_g

0xea51,	// (0x00034809) list_form_graphic_pane_ParamLimits

0xea51,	// (0x00034809) list_form_graphic_pane

0xea63,	// (0x0003481b) list_form_graphic_pane_g1

0xea6b,	// (0x00034823) list_form_graphic_pane_t1_ParamLimits

0xea6b,	// (0x00034823) list_form_graphic_pane_t1

0xcade,	// (0x00032896) list_highlight_pane_cp5_ParamLimits

0xcade,	// (0x00032896) list_highlight_pane_cp5

0x9958,	// (0x0002f710) find_pane_g1

0xd1bc,	// (0x00032f74) input_find_pane

0x9961,	// (0x0002f719) input_find_pane_g1_ParamLimits

0x9961,	// (0x0002f719) input_find_pane_g1

0x996d,	// (0x0002f725) input_find_pane_t1_ParamLimits

0x996d,	// (0x0002f725) input_find_pane_t1

0x9982,	// (0x0002f73a) input_find_pane_t2_ParamLimits

0x9982,	// (0x0002f73a) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00035459) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00035459) input_find_pane_t

0xd1c5,	// (0x00032f7d) input_focus_pane_cp5_ParamLimits

0xd1c5,	// (0x00032f7d) input_focus_pane_cp5

0xd1d3,	// (0x00032f8b) bg_popup_window_pane_cp2_ParamLimits

0xd1d3,	// (0x00032f8b) bg_popup_window_pane_cp2

0xd1e0,	// (0x00032f98) listscroll_menu_pane_ParamLimits

0xd1e0,	// (0x00032f98) listscroll_menu_pane

0xa2a5,	// (0x0003005d) popup_submenu_window_ParamLimits

0xa2a5,	// (0x0003005d) popup_submenu_window

0xd1ec,	// (0x00032fa4) find_popup_pane_g1

0xd1f4,	// (0x00032fac) input_popup_find_pane_cp

0xd1c5,	// (0x00032f7d) input_focus_pane_cp4_ParamLimits

0xd1c5,	// (0x00032f7d) input_focus_pane_cp4

0xd1fe,	// (0x00032fb6) input_popup_find_pane_t1_ParamLimits

0xd1fe,	// (0x00032fb6) input_popup_find_pane_t1

0xca82,	// (0x0003283a) bg_popup_sub_pane_cp

0xd22c,	// (0x00032fe4) listscroll_popup_sub_pane

0xd234,	// (0x00032fec) list_submenu_pane_ParamLimits

0xd234,	// (0x00032fec) list_submenu_pane

0xd245,	// (0x00032ffd) scroll_pane_cp4

0xd24d,	// (0x00033005) list_single_popup_submenu_pane_ParamLimits

0xd24d,	// (0x00033005) list_single_popup_submenu_pane

0xd262,	// (0x0003301a) list_single_popup_submenu_pane_g1

0xd26a,	// (0x00033022) list_single_popup_submenu_pane_t1_ParamLimits

0xd26a,	// (0x00033022) list_single_popup_submenu_pane_t1

0xcad0,	// (0x00032888) bg_active_tab_pane_cp1_ParamLimits

0xcad0,	// (0x00032888) bg_active_tab_pane_cp1

0xa2e3,	// (0x0003009b) tabs_2_active_pane_g1

0xa2eb,	// (0x000300a3) tabs_2_active_pane_t1

0xcad0,	// (0x00032888) bg_passive_tab_pane_cp1_ParamLimits

0xcad0,	// (0x00032888) bg_passive_tab_pane_cp1

0xa2e3,	// (0x0003009b) tabs_2_passive_pane_g1

0xa2eb,	// (0x000300a3) tabs_2_passive_pane_t1

0xcade,	// (0x00032896) bg_active_tab_pane_cp4

0xa2fd,	// (0x000300b5) tabs_2_long_active_pane_t1

0x0cc7,	// (0x00026a7f) bg_passive_tab_pane_cp4

0x189d,	// (0x00027655) list_single_midp_graphic_pane_g4_ParamLimits

0xcade,	// (0x00032896) bg_active_tab_pane_cp5

0xa310,	// (0x000300c8) tabs_3_long_active_pane_t1

0x0cc7,	// (0x00026a7f) bg_passive_tab_pane_cp5

0x189d,	// (0x00027655) list_single_midp_graphic_pane_g4

0xcade,	// (0x00032896) bg_popup_window_pane_cp13_ParamLimits

0xcade,	// (0x00032896) bg_popup_window_pane_cp13

0xd288,	// (0x00033040) listscroll_popup_fast_pane_ParamLimits

0xd288,	// (0x00033040) listscroll_popup_fast_pane

0xd297,	// (0x0003304f) grid_popup_fast_pane_ParamLimits

0xd297,	// (0x0003304f) grid_popup_fast_pane

0xd2a9,	// (0x00033061) scroll_pane_cp9_ParamLimits

0xd2a9,	// (0x00033061) scroll_pane_cp9

0x5a81,	// (0x0002b839) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5a81,	// (0x0002b839) list_single_graphic_hl_pane_t1_cp2

0xd2cd,	// (0x00033085) input_focus_pane_cp20_ParamLimits

0xd2cd,	// (0x00033085) input_focus_pane_cp20

0xd2db,	// (0x00033093) query_popup_data_pane_t1_ParamLimits

0xd2db,	// (0x00033093) query_popup_data_pane_t1

0xd2ee,	// (0x000330a6) query_popup_data_pane_t2_ParamLimits

0xd2ee,	// (0x000330a6) query_popup_data_pane_t2

0xd334,	// (0x000330ec) query_popup_data_pane_t3_ParamLimits

0xd334,	// (0x000330ec) query_popup_data_pane_t3

0xd375,	// (0x0003312d) query_popup_data_pane_t4_ParamLimits

0xd375,	// (0x0003312d) query_popup_data_pane_t4

0xd3b1,	// (0x00033169) query_popup_data_pane_t5_ParamLimits

0xd3b1,	// (0x00033169) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0003545e) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0003545e) query_popup_data_pane_t

0xd174,	// (0x00032f2c) bg_set_opt_pane_g1

0xd17c,	// (0x00032f34) bg_set_opt_pane_g2

0xd184,	// (0x00032f3c) bg_set_opt_pane_g3

0xd18c,	// (0x00032f44) bg_set_opt_pane_g4

0xd194,	// (0x00032f4c) bg_set_opt_pane_g5

0xd19c,	// (0x00032f54) bg_set_opt_pane_g6

0xd1a4,	// (0x00032f5c) bg_set_opt_pane_g7

0xd1ac,	// (0x00032f64) bg_set_opt_pane_g8

0xd1b4,	// (0x00032f6c) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00035469) bg_set_opt_pane_g

0x02c8,	// (0x00026080) control_top_pane_stacon_ParamLimits

0x02c8,	// (0x00026080) control_top_pane_stacon

0x031b,	// (0x000260d3) signal_pane_stacon_ParamLimits

0x031b,	// (0x000260d3) signal_pane_stacon

0x0340,	// (0x000260f8) stacon_top_pane_g1_ParamLimits

0x0340,	// (0x000260f8) stacon_top_pane_g1

0x0362,	// (0x0002611a) title_pane_stacon_ParamLimits

0x0362,	// (0x0002611a) title_pane_stacon

0x038c,	// (0x00026144) uni_indicator_pane_stacon_ParamLimits

0x038c,	// (0x00026144) uni_indicator_pane_stacon

0x03a1,	// (0x00026159) battery_pane_stacon_ParamLimits

0x03a1,	// (0x00026159) battery_pane_stacon

0x03e5,	// (0x0002619d) control_bottom_pane_stacon_ParamLimits

0x03e5,	// (0x0002619d) control_bottom_pane_stacon

0x0408,	// (0x000261c0) navi_pane_stacon_ParamLimits

0x0408,	// (0x000261c0) navi_pane_stacon

0x042b,	// (0x000261e3) stacon_bottom_pane_g1_ParamLimits

0x042b,	// (0x000261e3) stacon_bottom_pane_g1

0xf3c0,	// (0x00035178) aid_levels_signal_lsc_ParamLimits

0xf3c0,	// (0x00035178) aid_levels_signal_lsc

0xf3d7,	// (0x0003518f) signal_pane_stacon_g1_ParamLimits

0xf3d7,	// (0x0003518f) signal_pane_stacon_g1

0xf3eb,	// (0x000351a3) signal_pane_stacon_g2_ParamLimits

0xf3eb,	// (0x000351a3) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0003547c) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0003547c) signal_pane_stacon_g

0xf420,	// (0x000351d8) title_pane_stacon_t1_ParamLimits

0xf420,	// (0x000351d8) title_pane_stacon_t1

0xd3f5,	// (0x000331ad) uni_indicator_pane_stacon_g1

0xd3ff,	// (0x000331b7) uni_indicator_pane_stacon_g2

0xd409,	// (0x000331c1) uni_indicator_pane_stacon_g3

0xd413,	// (0x000331cb) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00035488) uni_indicator_pane_stacon_g

0xf445,	// (0x000351fd) control_top_pane_stacon_g1

0xf44d,	// (0x00035205) control_top_pane_stacon_t1_ParamLimits

0xf44d,	// (0x00035205) control_top_pane_stacon_t1

0xf484,	// (0x0003523c) aid_levels_battery_lsc_ParamLimits

0xf484,	// (0x0003523c) aid_levels_battery_lsc

0xf49c,	// (0x00035254) battery_pane_stacon_g1_ParamLimits

0xf49c,	// (0x00035254) battery_pane_stacon_g1

0xf4af,	// (0x00035267) battery_pane_stacon_g2_ParamLimits

0xf4af,	// (0x00035267) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00035491) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00035491) battery_pane_stacon_g

0xf4ed,	// (0x000352a5) navi_icon_pane_stacon

0xf501,	// (0x000352b9) navi_navi_pane_stacon

0xf4ed,	// (0x000352a5) navi_text_pane_stacon

0xf445,	// (0x000351fd) control_bottom_pane_stacon_g1

0xf517,	// (0x000352cf) control_bottom_pane_stacon_t1_ParamLimits

0xf517,	// (0x000352cf) control_bottom_pane_stacon_t1

0xa322,	// (0x000300da) grid_app_pane_ParamLimits

0xa322,	// (0x000300da) grid_app_pane

0xa35a,	// (0x00030112) scroll_pane_cp15_ParamLimits

0xa35a,	// (0x00030112) scroll_pane_cp15

0xa36f,	// (0x00030127) cell_app_pane_ParamLimits

0xa36f,	// (0x00030127) cell_app_pane

0xa3bc,	// (0x00030174) cell_app_pane_g1_ParamLimits

0xa3bc,	// (0x00030174) cell_app_pane_g1

0xd437,	// (0x000331ef) cell_app_pane_g2_ParamLimits

0xd437,	// (0x000331ef) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00035496) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00035496) cell_app_pane_g

0xa3e0,	// (0x00030198) cell_app_pane_t1_ParamLimits

0xa3e0,	// (0x00030198) cell_app_pane_t1

0xd443,	// (0x000331fb) grid_highlight_pane_ParamLimits

0xd443,	// (0x000331fb) grid_highlight_pane

0xd174,	// (0x00032f2c) cell_highlight_pane_g1

0xd17c,	// (0x00032f34) cell_highlight_pane_g2

0xd184,	// (0x00032f3c) cell_highlight_pane_g3

0xd18c,	// (0x00032f44) cell_highlight_pane_g4

0xd194,	// (0x00032f4c) cell_highlight_pane_g5

0xd19c,	// (0x00032f54) cell_highlight_pane_g6

0xd1a4,	// (0x00032f5c) cell_highlight_pane_g7

0xd1ac,	// (0x00032f64) cell_highlight_pane_g8

0xd1b4,	// (0x00032f6c) cell_highlight_pane_g9

0xca78,	// (0x00032830) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x00035444) cell_highlight_pane_g

0xd454,	// (0x0003320c) bg_scroll_pane

0x008e,	// (0x00025e46) scroll_handle_pane

0xd49b,	// (0x00033253) scroll_bg_pane_g1

0xd4b0,	// (0x00033268) scroll_bg_pane_g2

0xd4c8,	// (0x00033280) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0003549b) scroll_bg_pane_g

0xd4dd,	// (0x00033295) scroll_handle_focus_pane_ParamLimits

0xd4dd,	// (0x00033295) scroll_handle_focus_pane

0xd49b,	// (0x00033253) scroll_handle_pane_g1

0xd4ea,	// (0x000332a2) scroll_handle_pane_g2

0xd4c8,	// (0x00033280) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x000354a2) scroll_handle_pane_g

0xd1c5,	// (0x00032f7d) bg_popup_sub_pane_cp21_ParamLimits

0xd1c5,	// (0x00032f7d) bg_popup_sub_pane_cp21

0xd4fe,	// (0x000332b6) popup_fep_japan_predictive_window_t1_ParamLimits

0xd4fe,	// (0x000332b6) popup_fep_japan_predictive_window_t1

0xd515,	// (0x000332cd) popup_fep_japan_predictive_window_t2_ParamLimits

0xd515,	// (0x000332cd) popup_fep_japan_predictive_window_t2

0xd548,	// (0x00033300) popup_fep_japan_predictive_window_t3_ParamLimits

0xd548,	// (0x00033300) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x000354a9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x000354a9) popup_fep_japan_predictive_window_t

0xca82,	// (0x0003283a) bg_popup_sub_pane_cp23

0xd57f,	// (0x00033337) listscroll_japin_cand_pane

0xd587,	// (0x0003333f) popup_fep_japan_candidate_window_t1

0xd595,	// (0x0003334d) candidate_pane_ParamLimits

0xd595,	// (0x0003334d) candidate_pane

0xd5a7,	// (0x0003335f) scroll_pane_cp30

0xd5b1,	// (0x00033369) list_single_popup_jap_candidate_pane_ParamLimits

0xd5b1,	// (0x00033369) list_single_popup_jap_candidate_pane

0xca82,	// (0x0003283a) list_highlight_pane_cp30

0xd5c5,	// (0x0003337d) list_single_popup_jap_candidate_pane_t1

0xa400,	// (0x000301b8) level_1_signal

0xa412,	// (0x000301ca) level_2_signal

0xa425,	// (0x000301dd) level_3_signal

0xa438,	// (0x000301f0) level_4_signal

0xa44b,	// (0x00030203) level_5_signal

0xa45e,	// (0x00030216) level_6_signal

0xa471,	// (0x00030229) level_7_signal

0xa400,	// (0x000301b8) level_1_battery

0xa412,	// (0x000301ca) level_2_battery

0xa425,	// (0x000301dd) level_3_battery

0xa438,	// (0x000301f0) level_4_battery

0xa44b,	// (0x00030203) level_5_battery

0xa45e,	// (0x00030216) level_6_battery

0xa471,	// (0x00030229) level_7_battery

0xd5ec,	// (0x000333a4) list_menu_pane_ParamLimits

0xd5ec,	// (0x000333a4) list_menu_pane

0xd602,	// (0x000333ba) scroll_pane_cp25_ParamLimits

0xd602,	// (0x000333ba) scroll_pane_cp25

0xd61b,	// (0x000333d3) list_double2_graphic_pane_cp2_ParamLimits

0xd61b,	// (0x000333d3) list_double2_graphic_pane_cp2

0xd61b,	// (0x000333d3) list_double2_large_graphic_pane_cp2_ParamLimits

0xd61b,	// (0x000333d3) list_double2_large_graphic_pane_cp2

0xd61b,	// (0x000333d3) list_double2_pane_cp2_ParamLimits

0xd61b,	// (0x000333d3) list_double2_pane_cp2

0xd61b,	// (0x000333d3) list_double_graphic_pane_cp2_ParamLimits

0xd61b,	// (0x000333d3) list_double_graphic_pane_cp2

0xd61b,	// (0x000333d3) list_double_large_graphic_pane_cp2_ParamLimits

0xd61b,	// (0x000333d3) list_double_large_graphic_pane_cp2

0xd61b,	// (0x000333d3) list_double_number_pane_cp2_ParamLimits

0xd61b,	// (0x000333d3) list_double_number_pane_cp2

0xd61b,	// (0x000333d3) list_double_pane_cp2_ParamLimits

0xd61b,	// (0x000333d3) list_double_pane_cp2

0xa484,	// (0x0003023c) list_single_2graphic_pane_cp2_ParamLimits

0xa484,	// (0x0003023c) list_single_2graphic_pane_cp2

0xa484,	// (0x0003023c) list_single_graphic_heading_pane_cp2_ParamLimits

0xa484,	// (0x0003023c) list_single_graphic_heading_pane_cp2

0xa484,	// (0x0003023c) list_single_graphic_pane_cp2_ParamLimits

0xa484,	// (0x0003023c) list_single_graphic_pane_cp2

0xa484,	// (0x0003023c) list_single_heading_pane_cp2_ParamLimits

0xa484,	// (0x0003023c) list_single_heading_pane_cp2

0xd62b,	// (0x000333e3) list_single_large_graphic_pane_cp2_ParamLimits

0xd62b,	// (0x000333e3) list_single_large_graphic_pane_cp2

0xa484,	// (0x0003023c) list_single_number_heading_pane_cp2_ParamLimits

0xa484,	// (0x0003023c) list_single_number_heading_pane_cp2

0xa484,	// (0x0003023c) list_single_number_pane_cp2_ParamLimits

0xa484,	// (0x0003023c) list_single_number_pane_cp2

0xa484,	// (0x0003023c) list_single_pane_cp2_ParamLimits

0xa484,	// (0x0003023c) list_single_pane_cp2

0xd644,	// (0x000333fc) bg_popup_sub_pane_cp22

0x0223,	// (0x00025fdb) popup_side_volume_key_window_g1

0x024d,	// (0x00026005) popup_side_volume_key_window_t1

0x026b,	// (0x00026023) volume_small_pane_cp1

0xcad0,	// (0x00032888) bg_popup_sub_pane_cp24_ParamLimits

0xcad0,	// (0x00032888) bg_popup_sub_pane_cp24

0xd65a,	// (0x00033412) fep_china_uni_candidate_pane_ParamLimits

0xd65a,	// (0x00033412) fep_china_uni_candidate_pane

0xd66e,	// (0x00033426) fep_china_uni_entry_pane

0xd67e,	// (0x00033436) popup_fep_china_uni_window_g1

0xd69a,	// (0x00033452) fep_china_uni_entry_pane_g1

0xd6a4,	// (0x0003345c) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x000354da) fep_china_uni_entry_pane_g

0xd6ae,	// (0x00033466) fep_entry_item_pane

0xd6b8,	// (0x00033470) fep_candidate_item_pane

0xd6c0,	// (0x00033478) fep_china_uni_candidate_pane_g1

0xd6ca,	// (0x00033482) fep_china_uni_candidate_pane_g2

0xd6d2,	// (0x0003348a) fep_china_uni_candidate_pane_g3

0xd6da,	// (0x00033492) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x000354df) fep_china_uni_candidate_pane_g

0xca78,	// (0x00032830) fep_entry_item_pane_g1

0xd6e4,	// (0x0003349c) fep_entry_item_pane_t1_ParamLimits

0xd6e4,	// (0x0003349c) fep_entry_item_pane_t1

0xd6fa,	// (0x000334b2) fep_candidate_item_pane_t1_ParamLimits

0xd6fa,	// (0x000334b2) fep_candidate_item_pane_t1

0xd70f,	// (0x000334c7) fep_candidate_item_pane_t2_ParamLimits

0xd70f,	// (0x000334c7) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x000354e8) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x000354e8) fep_candidate_item_pane_t

0xcade,	// (0x00032896) list_highlight_pane_cp31_ParamLimits

0xcade,	// (0x00032896) list_highlight_pane_cp31

0xd721,	// (0x000334d9) level_1_signal_lsc

0xd72a,	// (0x000334e2) level_2_signal_lsc

0xd733,	// (0x000334eb) level_3_signal_lsc

0xd73c,	// (0x000334f4) level_4_signal_lsc

0xd745,	// (0x000334fd) level_5_signal_lsc

0xd74e,	// (0x00033506) level_6_signal_lsc

0xd757,	// (0x0003350f) level_7_signal_lsc

0xd757,	// (0x0003350f) level_1_battery_lsc

0xd760,	// (0x00033518) level_2_battery_lsc

0xd769,	// (0x00033521) level_3_battery_lsc

0xd772,	// (0x0003352a) level_4_battery_lsc

0xd77b,	// (0x00033533) level_5_battery_lsc

0xd784,	// (0x0003353c) level_6_battery_lsc

0xd721,	// (0x000334d9) level_7_battery_lsc

0xd78d,	// (0x00033545) scroll_handle_focus_pane_g1

0xd796,	// (0x0003354e) scroll_handle_focus_pane_g2

0xd79f,	// (0x00033557) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x000354ed) scroll_handle_focus_pane_g

0x9997,	// (0x0002f74f) list_single_2graphic_pane_g1_ParamLimits

0x9997,	// (0x0002f74f) list_single_2graphic_pane_g1

0x948c,	// (0x0002f244) list_single_2graphic_pane_g2_ParamLimits

0x948c,	// (0x0002f244) list_single_2graphic_pane_g2

0xe8c2,	// (0x0003467a) list_single_2graphic_pane_g3_ParamLimits

0xe8c2,	// (0x0003467a) list_single_2graphic_pane_g3

0x99a3,	// (0x0002f75b) list_single_2graphic_pane_g4_ParamLimits

0x99a3,	// (0x0002f75b) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x000354f4) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x000354f4) list_single_2graphic_pane_g

0x99af,	// (0x0002f767) list_single_2graphic_pane_t1_ParamLimits

0x99af,	// (0x0002f767) list_single_2graphic_pane_t1

0x99dd,	// (0x0002f795) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x99dd,	// (0x0002f795) list_double2_graphic_large_graphic_pane_g1

0x94eb,	// (0x0002f2a3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x94eb,	// (0x0002f2a3) list_double2_graphic_large_graphic_pane_g2

0x94fc,	// (0x0002f2b4) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x94fc,	// (0x0002f2b4) list_double2_graphic_large_graphic_pane_g3

0x99ef,	// (0x0002f7a7) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x99ef,	// (0x0002f7a7) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x000354fd) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x000354fd) list_double2_graphic_large_graphic_pane_g

0x99fb,	// (0x0002f7b3) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x99fb,	// (0x0002f7b3) list_double2_graphic_large_graphic_pane_t1

0x9a11,	// (0x0002f7c9) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9a11,	// (0x0002f7c9) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00035506) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00035506) list_double2_graphic_large_graphic_pane_t

0x04eb,	// (0x000262a3) popup_fast_swap_window_ParamLimits

0x04eb,	// (0x000262a3) popup_fast_swap_window

0x0509,	// (0x000262c1) popup_side_volume_key_window

0x0527,	// (0x000262df) stacon_top_pane

0x0531,	// (0x000262e9) status_pane_ParamLimits

0x0531,	// (0x000262e9) status_pane

0xa55b,	// (0x00030313) status_small_pane

0xca82,	// (0x0003283a) control_pane

0xca82,	// (0x0003283a) stacon_bottom_pane

0xd0ff,	// (0x00032eb7) scroll_pane_cp121

0xd0f6,	// (0x00032eae) set_content_pane

0xa513,	// (0x000302cb) bg_active_tab_pane_g1_cp1

0x027c,	// (0x00026034) bg_active_tab_pane_g2_cp1

0xa51c,	// (0x000302d4) bg_active_tab_pane_g3_cp1

0xa513,	// (0x000302cb) bg_passive_tab_pane_g1_cp1

0x027c,	// (0x00026034) bg_passive_tab_pane_g2_cp1

0xa51c,	// (0x000302d4) bg_passive_tab_pane_g3_cp1

0xa525,	// (0x000302dd) bg_active_tab_pane_g1_cp2

0x027c,	// (0x00026034) bg_active_tab_pane_g2_cp2

0xa52e,	// (0x000302e6) bg_active_tab_pane_g3_cp2

0xa525,	// (0x000302dd) bg_passive_tab_pane_g1_cp2

0x027c,	// (0x00026034) bg_passive_tab_pane_g2_cp2

0xa52e,	// (0x000302e6) bg_passive_tab_pane_g3_cp2

0xa537,	// (0x000302ef) bg_active_tab_pane_g1_cp3

0x027c,	// (0x00026034) bg_active_tab_pane_g2_cp3

0xa540,	// (0x000302f8) bg_active_tab_pane_g3_cp3

0xa537,	// (0x000302ef) bg_passive_tab_pane_g1_cp3

0x027c,	// (0x00026034) bg_passive_tab_pane_g2_cp3

0xa540,	// (0x000302f8) bg_passive_tab_pane_g3_cp3

0xa549,	// (0x00030301) bg_active_tab_pane_g1_cp4

0x027c,	// (0x00026034) bg_active_tab_pane_g2_cp4

0xa552,	// (0x0003030a) bg_active_tab_pane_g3_cp4

0xa549,	// (0x00030301) bg_passive_tab_pane_g1_cp4

0x027c,	// (0x00026034) bg_passive_tab_pane_g2_cp4

0xa552,	// (0x0003030a) bg_passive_tab_pane_g3_cp4

0x0447,	// (0x000261ff) bg_active_tab_pane_g1_cp5

0x027c,	// (0x00026034) bg_active_tab_pane_g2_cp5

0x0450,	// (0x00026208) bg_active_tab_pane_g3_cp5

0x0447,	// (0x000261ff) bg_passive_tab_pane_g1_cp5

0x027c,	// (0x00026034) bg_passive_tab_pane_g2_cp5

0x0450,	// (0x00026208) bg_passive_tab_pane_g3_cp5

0x0459,	// (0x00026211) list_set_graphic_pane_ParamLimits

0x0459,	// (0x00026211) list_set_graphic_pane

0xca82,	// (0x0003283a) bg_set_opt_pane_cp4

0x046c,	// (0x00026224) list_set_graphic_pane_g1_ParamLimits

0x046c,	// (0x00026224) list_set_graphic_pane_g1

0x0478,	// (0x00026230) list_set_graphic_pane_g2_ParamLimits

0x0478,	// (0x00026230) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0003550b) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0003550b) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x00035890) volume_small_pane_cp_g

0x049c,	// (0x00026254) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x049c,	// (0x00026254) list_double2_large_graphic_pane_g1_cp2

0x04aa,	// (0x00026262) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x04aa,	// (0x00026262) list_double2_large_graphic_pane_g2_cp2

0x04bb,	// (0x00026273) list_double2_large_graphic_pane_g3_cp2

0x04c3,	// (0x0002627b) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x04c3,	// (0x0002627b) list_double2_large_graphic_pane_t1_cp2

0x04d9,	// (0x00026291) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x04d9,	// (0x00026291) list_double2_large_graphic_pane_t2_cp2

0x3cd4,	// (0x00029a8c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x3cd4,	// (0x00029a8c) list_double_large_graphic_pane_g1_cp2

0x3ce7,	// (0x00029a9f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3ce7,	// (0x00029a9f) list_double_large_graphic_pane_g2_cp2

0x065a,	// (0x00026412) list_double_large_graphic_pane_g3_cp2

0x3cf8,	// (0x00029ab0) list_double_large_graphic_pane_g4_cp

0x3d00,	// (0x00029ab8) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3d00,	// (0x00029ab8) list_double_large_graphic_pane_t1_cp2

0x3d17,	// (0x00029acf) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3d17,	// (0x00029acf) list_double_large_graphic_pane_t2_cp2

0x054a,	// (0x00026302) list_double2_graphic_pane_g1_cp2_ParamLimits

0x054a,	// (0x00026302) list_double2_graphic_pane_g1_cp2

0x0558,	// (0x00026310) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0558,	// (0x00026310) list_double2_graphic_pane_g2_cp2

0x0569,	// (0x00026321) list_double2_graphic_pane_g3_cp2

0x0573,	// (0x0002632b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0573,	// (0x0002632b) list_double2_graphic_pane_t1_cp2

0x0589,	// (0x00026341) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0589,	// (0x00026341) list_double2_graphic_pane_t2_cp2

0x059b,	// (0x00026353) list_single_number_heading_pane_g1_cp2_ParamLimits

0x059b,	// (0x00026353) list_single_number_heading_pane_g1_cp2

0x05a7,	// (0x0002635f) list_single_number_heading_pane_g2_cp2

0x05af,	// (0x00026367) list_single_number_heading_pane_t1_cp2_ParamLimits

0x05af,	// (0x00026367) list_single_number_heading_pane_t1_cp2

0x05c5,	// (0x0002637d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x05c5,	// (0x0002637d) list_single_number_heading_pane_t2_cp2

0x05d9,	// (0x00026391) list_single_number_heading_pane_t3_cp2_ParamLimits

0x05d9,	// (0x00026391) list_single_number_heading_pane_t3_cp2

0x059b,	// (0x00026353) list_single_heading_pane_g1_cp2_ParamLimits

0x059b,	// (0x00026353) list_single_heading_pane_g1_cp2

0x05a7,	// (0x0002635f) list_single_heading_pane_g2_cp2

0x05af,	// (0x00026367) list_single_heading_pane_t1_cp2_ParamLimits

0x05af,	// (0x00026367) list_single_heading_pane_t1_cp2

0x3ace,	// (0x00029886) list_single_heading_pane_t2_cp2_ParamLimits

0x3ace,	// (0x00029886) list_single_heading_pane_t2_cp2

0x3a16,	// (0x000297ce) list_double_graphic_pane_g1_cp2_ParamLimits

0x3a16,	// (0x000297ce) list_double_graphic_pane_g1_cp2

0x3a22,	// (0x000297da) list_double_graphic_pane_g2_cp2_ParamLimits

0x3a22,	// (0x000297da) list_double_graphic_pane_g2_cp2

0x3a31,	// (0x000297e9) list_double_graphic_pane_g3_cp2

0x3a39,	// (0x000297f1) list_double_graphic_pane_t1_cp2_ParamLimits

0x3a39,	// (0x000297f1) list_double_graphic_pane_t1_cp2

0x3a4f,	// (0x00029807) list_double_graphic_pane_t2_cp2_ParamLimits

0x3a4f,	// (0x00029807) list_double_graphic_pane_t2_cp2

0x064e,	// (0x00026406) list_double_number_pane_g1_cp2_ParamLimits

0x064e,	// (0x00026406) list_double_number_pane_g1_cp2

0x065a,	// (0x00026412) list_double_number_pane_g2_cp2

0x39da,	// (0x00029792) list_double_number_pane_t1_cp2_ParamLimits

0x39da,	// (0x00029792) list_double_number_pane_t1_cp2

0x39ee,	// (0x000297a6) list_double_number_pane_t2_cp2_ParamLimits

0x39ee,	// (0x000297a6) list_double_number_pane_t2_cp2

0x3a04,	// (0x000297bc) list_double_number_pane_t3_cp2_ParamLimits

0x3a04,	// (0x000297bc) list_double_number_pane_t3_cp2

0x38c3,	// (0x0002967b) list_single_graphic_pane_g1_cp2_ParamLimits

0x38c3,	// (0x0002967b) list_single_graphic_pane_g1_cp2

0xd7a8,	// (0x00033560) list_single_graphic_pane_g2_cp2_ParamLimits

0xd7a8,	// (0x00033560) list_single_graphic_pane_g2_cp2

0x06b4,	// (0x0002646c) list_single_graphic_pane_g3_cp2

0x3899,	// (0x00029651) list_single_graphic_pane_t1_cp2_ParamLimits

0x3899,	// (0x00029651) list_single_graphic_pane_t1_cp2

0xd7a8,	// (0x00033560) list_single_number_pane_g1_cp2_ParamLimits

0xd7a8,	// (0x00033560) list_single_number_pane_g1_cp2

0x06b4,	// (0x0002646c) list_single_number_pane_g2_cp2

0x3899,	// (0x00029651) list_single_number_pane_t1_cp2_ParamLimits

0x3899,	// (0x00029651) list_single_number_pane_t1_cp2

0x38af,	// (0x00029667) list_single_number_pane_t2_cp2_ParamLimits

0x38af,	// (0x00029667) list_single_number_pane_t2_cp2

0x04aa,	// (0x00026262) list_double2_pane_g1_cp2_ParamLimits

0x04aa,	// (0x00026262) list_double2_pane_g1_cp2

0x04bb,	// (0x00026273) list_double2_pane_g2_cp2

0x0626,	// (0x000263de) list_double2_pane_t1_cp2_ParamLimits

0x0626,	// (0x000263de) list_double2_pane_t1_cp2

0x063c,	// (0x000263f4) list_double2_pane_t2_cp2_ParamLimits

0x063c,	// (0x000263f4) list_double2_pane_t2_cp2

0x064e,	// (0x00026406) list_double_pane_g1_cp2_ParamLimits

0x064e,	// (0x00026406) list_double_pane_g1_cp2

0x065a,	// (0x00026412) list_double_pane_g2_cp2

0x0662,	// (0x0002641a) list_double_pane_t1_cp2_ParamLimits

0x0662,	// (0x0002641a) list_double_pane_t1_cp2

0x0678,	// (0x00026430) list_double_pane_t2_cp2_ParamLimits

0x0678,	// (0x00026430) list_double_pane_t2_cp2

0x06a4,	// (0x0002645c) list_single_pane_cp2_g3

0xd7a8,	// (0x00033560) list_single_pane_g1_cp2_ParamLimits

0xd7a8,	// (0x00033560) list_single_pane_g1_cp2

0x06b4,	// (0x0002646c) list_single_pane_g2_cp2

0x06bc,	// (0x00026474) list_single_pane_t1_cp2_ParamLimits

0x06bc,	// (0x00026474) list_single_pane_t1_cp2

0x06d4,	// (0x0002648c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x06d4,	// (0x0002648c) list_single_large_graphic_pane_g1_cp2

0x06e2,	// (0x0002649a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x06e2,	// (0x0002649a) list_single_large_graphic_pane_g2_cp2

0x06ee,	// (0x000264a6) list_single_large_graphic_pane_g3_cp2

0x06f6,	// (0x000264ae) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x06f6,	// (0x000264ae) list_single_large_graphic_pane_g4_cp1

0x0710,	// (0x000264c8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0710,	// (0x000264c8) list_single_large_graphic_pane_t1_cp2

0x3863,	// (0x0002961b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3863,	// (0x0002961b) list_single_graphic_heading_pane_g1_cp2

0x3830,	// (0x000295e8) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3830,	// (0x000295e8) list_single_graphic_heading_pane_g4_cp2

0x06b4,	// (0x0002646c) list_single_graphic_heading_pane_g5_cp2

0x386f,	// (0x00029627) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x386f,	// (0x00029627) list_single_graphic_heading_pane_t1_cp2

0x3885,	// (0x0002963d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3885,	// (0x0002963d) list_single_graphic_heading_pane_t2_cp2

0x3824,	// (0x000295dc) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3824,	// (0x000295dc) list_single_2graphic_pane_g1_cp2

0x3830,	// (0x000295e8) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3830,	// (0x000295e8) list_single_2graphic_pane_g2_cp2

0x06b4,	// (0x0002646c) list_single_2graphic_pane_g3_cp2

0x3841,	// (0x000295f9) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3841,	// (0x000295f9) list_single_2graphic_pane_g4_cp2

0x384d,	// (0x00029605) list_single_2graphic_pane_t1_cp2_ParamLimits

0x384d,	// (0x00029605) list_single_2graphic_pane_t1_cp2

0xca78,	// (0x00032830) list_highlight_pane_g10_cp1

0x33fc,	// (0x000291b4) list_highlight_pane_g1_cp1

0x3404,	// (0x000291bc) list_highlight_pane_g2_cp1

0x340c,	// (0x000291c4) list_highlight_pane_g3_cp1

0x3414,	// (0x000291cc) list_highlight_pane_g4_cp1

0x341c,	// (0x000291d4) list_highlight_pane_g5_cp1

0x3424,	// (0x000291dc) list_highlight_pane_g6_cp1

0x342c,	// (0x000291e4) list_highlight_pane_g7_cp1

0x3434,	// (0x000291ec) list_highlight_pane_g8_cp1

0x343c,	// (0x000291f4) list_highlight_pane_g9_cp1

0xb4a2,	// (0x0003125a) form_field_slider_pane_t3

0xb4b0,	// (0x00031268) form_field_slider_pane_t4

0x3338,	// (0x000290f0) slider_form_pane_ParamLimits

0x3338,	// (0x000290f0) slider_form_pane

0xca82,	// (0x0003283a) control_abbreviations

0xca82,	// (0x0003283a) control_conventions

0xca82,	// (0x0003283a) control_definitions

0xca82,	// (0x0003283a) format_table_attribute

0x3b24,	// (0x000298dc) bg_popup_preview_window_pane_g9

0xca82,	// (0x0003283a) format_table_data2

0xca82,	// (0x0003283a) format_table_data3

0xca82,	// (0x0003283a) format_table_data_example

0x0008,

0xca82,	// (0x0003283a) intro_purpose

0xf8ea,	// (0x000356a2) bg_popup_preview_window_pane_g

0xca82,	// (0x0003283a) texts_category

0xca82,	// (0x0003283a) texts_graphics

0x0726,	// (0x000264de) text_digital

0x0735,	// (0x000264ed) text_primary

0x0744,	// (0x000264fc) text_primary_small

0x0753,	// (0x0002650b) text_secondary

0x0762,	// (0x0002651a) text_title

0x42a6,	// (0x0002a05e) bg_passive_tab_pane_g1_cp3_srt

0x027c,	// (0x00026034) bg_passive_tab_pane_g2_cp3_srt

0x42af,	// (0x0002a067) bg_passive_tab_pane_g3_cp3_srt

0xcad0,	// (0x00032888) bg_active_tab_pane_cp3_srt_ParamLimits

0xcad0,	// (0x00032888) bg_active_tab_pane_cp3_srt

0x42b8,	// (0x0002a070) tabs_4_active_pane_srt_g1

0xb92f,	// (0x000316e7) tabs_4_active_pane_srt_t1_ParamLimits

0xb92f,	// (0x000316e7) tabs_4_active_pane_srt_t1

0x42a6,	// (0x0002a05e) bg_active_tab_pane_g1_cp3_copy1

0x027c,	// (0x00026034) bg_active_tab_pane_g2_cp3_copy1

0x42af,	// (0x0002a067) bg_active_tab_pane_g3_cp3_copy1

0xcade,	// (0x00032896) tabs_2_long_active_pane_srt_ParamLimits

0xcade,	// (0x00032896) tabs_2_long_active_pane_srt

0xcade,	// (0x00032896) tabs_2_long_passive_pane_srt_ParamLimits

0xcade,	// (0x00032896) tabs_2_long_passive_pane_srt

0x0cc7,	// (0x00026a7f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0cc7,	// (0x00026a7f) bg_passive_tab_pane_cp4_srt

0x3f53,	// (0x00029d0b) bg_passive_tab_pane_g1_cp4_srt

0x027c,	// (0x00026034) bg_passive_tab_pane_g2_cp4_srt

0x3f5c,	// (0x00029d14) bg_passive_tab_pane_g3_cp4_srt

0xcade,	// (0x00032896) bg_active_tab_pane_cp4_srt_ParamLimits

0xcade,	// (0x00032896) bg_active_tab_pane_cp4_srt

0xb7e9,	// (0x000315a1) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb7e9,	// (0x000315a1) tabs_2_long_active_pane_srt_t1

0x3f53,	// (0x00029d0b) bg_active_tab_pane_g1_cp4_srt

0x027c,	// (0x00026034) bg_active_tab_pane_g2_cp4_srt

0x3f5c,	// (0x00029d14) bg_active_tab_pane_g3_cp4_srt

0xcad0,	// (0x00032888) tabs_3_long_active_pane_srt_ParamLimits

0xcad0,	// (0x00032888) tabs_3_long_active_pane_srt

0xcad0,	// (0x00032888) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xcad0,	// (0x00032888) tabs_3_long_passive_pane_cp_srt

0xcad0,	// (0x00032888) tabs_3_long_passive_pane_srt_ParamLimits

0xcad0,	// (0x00032888) tabs_3_long_passive_pane_srt

0x0cc7,	// (0x00026a7f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0cc7,	// (0x00026a7f) bg_passive_tab_pane_cp5_srt

0x0447,	// (0x000261ff) bg_passive_tab_pane_g1_cp5_srt

0x027c,	// (0x00026034) bg_passive_tab_pane_g2_cp5_srt

0x0450,	// (0x00026208) bg_passive_tab_pane_g3_cp5_srt

0xcade,	// (0x00032896) bg_active_tab_pane_cp5_srt_ParamLimits

0xcade,	// (0x00032896) bg_active_tab_pane_cp5_srt

0xb7d3,	// (0x0003158b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb7d3,	// (0x0003158b) tabs_3_long_active_pane_srt_t1

0x0447,	// (0x000261ff) bg_active_tab_pane_g1_cp5_srt

0x027c,	// (0x00026034) bg_active_tab_pane_g2_cp5_srt

0x0450,	// (0x00026208) bg_active_tab_pane_g3_cp5_srt

0x3f33,	// (0x00029ceb) navi_text_pane_srt_t1

0x3f2b,	// (0x00029ce3) navi_icon_pane_srt_g1

0x09e3,	// (0x0002679b) midp_editing_number_pane_srt

0x0771,	// (0x00026529) midp_ticker_pane_srt

0x09eb,	// (0x000267a3) midp_ticker_pane_srt_g1

0x09f3,	// (0x000267ab) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0003552a) midp_ticker_pane_srt_g

0x09fb,	// (0x000267b3) midp_ticker_pane_srt_t1

0x3f1c,	// (0x00029cd4) midp_editing_number_pane_t1_copy1

0xa566,	// (0x0003031e) listscroll_midp_pane

0xa566,	// (0x0003031e) midp_form_pane

0x07e8,	// (0x000265a0) midp_info_popup_window_ParamLimits

0x07e8,	// (0x000265a0) midp_info_popup_window

0xd1c5,	// (0x00032f7d) bg_popup_sub_pane_cp50_ParamLimits

0xd1c5,	// (0x00032f7d) bg_popup_sub_pane_cp50

0x3026,	// (0x00028dde) listscroll_midp_info_pane_ParamLimits

0x3026,	// (0x00028dde) listscroll_midp_info_pane

0x3006,	// (0x00028dbe) listscroll_form_midp_pane_ParamLimits

0x3006,	// (0x00028dbe) listscroll_form_midp_pane

0x3012,	// (0x00028dca) scroll_bar_cp050

0x3006,	// (0x00028dbe) list_midp_pane

0x4d1e,	// (0x0002aad6) signal_pane_g2_cp

0x2f20,	// (0x00028cd8) listscroll_midp_info_pane_t1_ParamLimits

0x2f20,	// (0x00028cd8) listscroll_midp_info_pane_t1

0x2f38,	// (0x00028cf0) listscroll_midp_info_pane_t2_ParamLimits

0x2f38,	// (0x00028cf0) listscroll_midp_info_pane_t2

0x2f76,	// (0x00028d2e) listscroll_midp_info_pane_t3_ParamLimits

0x2f76,	// (0x00028d2e) listscroll_midp_info_pane_t3

0x2fb0,	// (0x00028d68) listscroll_midp_info_pane_t4_ParamLimits

0x2fb0,	// (0x00028d68) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x000355dd) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x000355dd) listscroll_midp_info_pane_t

0xd245,	// (0x00032ffd) scroll_pane_cp21

0x2eba,	// (0x00028c72) form_midp_field_choice_group_pane

0x2ec3,	// (0x00028c7b) form_midp_field_text_pane

0x2f06,	// (0x00028cbe) form_midp_field_time_pane

0x2f0e,	// (0x00028cc6) form_midp_gauge_slider_pane

0x2f17,	// (0x00028ccf) form_midp_gauge_wait_pane

0xca82,	// (0x0003283a) form_midp_image_pane

0x9a3f,	// (0x0002f7f7) list_single_midp_pane_ParamLimits

0x9a3f,	// (0x0002f7f7) list_single_midp_pane

0xb47a,	// (0x00031232) form_midp_field_text_pane_t1

0x2c70,	// (0x00028a28) input_focus_pane_cp050

0x2ea9,	// (0x00028c61) list_midp_form_text_pane

0x2e4d,	// (0x00028c05) form_midp_field_choice_group_pane_t1

0x2e5b,	// (0x00028c13) input_focus_pane_cp051

0x2e6f,	// (0x00028c27) list_midp_choice_pane

0xca82,	// (0x0003283a) status_idle_pane

0x2e31,	// (0x00028be9) form_midp_field_time_pane_t1

0xca78,	// (0x00032830) wait_anim_pane_g2_copy1

0x2e3f,	// (0x00028bf7) form_midp_field_time_pane_t2

0x0001,

0x0898,	// (0x00026650) aid_navinavi_width_2_pane

0xf820,	// (0x000355d8) form_midp_field_time_pane_t

0xca82,	// (0x0003283a) input_focus_pane_cp052

0xca82,	// (0x0003283a) bg_input_focus_pane_cp040

0x2df1,	// (0x00028ba9) form_midp_gauge_slider_pane_t1

0x2dff,	// (0x00028bb7) form_midp_gauge_slider_pane_t2

0xb45e,	// (0x00031216) form_midp_gauge_slider_pane_t3

0xb46c,	// (0x00031224) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x000355cf) form_midp_gauge_slider_pane_t

0x2e29,	// (0x00028be1) form_midp_slider_pane

0xcade,	// (0x00032896) bg_input_focus_pane_cp041_ParamLimits

0xcade,	// (0x00032896) bg_input_focus_pane_cp041

0x2dbe,	// (0x00028b76) form_midp_gauge_wait_pane_t1_ParamLimits

0x2dbe,	// (0x00028b76) form_midp_gauge_wait_pane_t1

0x2dd0,	// (0x00028b88) form_midp_gauge_wait_pane_t2_ParamLimits

0x2dd0,	// (0x00028b88) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x000355ca) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x000355ca) form_midp_gauge_wait_pane_t

0x2de2,	// (0x00028b9a) form_midp_wait_pane_ParamLimits

0x2de2,	// (0x00028b9a) form_midp_wait_pane

0x2d86,	// (0x00028b3e) form_midp_image_pane_g1

0x2d8f,	// (0x00028b47) form_midp_image_pane_t1

0x2d9e,	// (0x00028b56) form_midp_image_pane_t2

0x2dad,	// (0x00028b65) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x000355c3) form_midp_image_pane_t

0x2d7d,	// (0x00028b35) list_single_midp_pane_g1

0xebc2,	// (0x0003497a) list_single_midp_pane_t1

0xb447,	// (0x000311ff) list_midp_form_item_pane_ParamLimits

0xb447,	// (0x000311ff) list_midp_form_item_pane

0x0840,	// (0x000265f8) list_midp_form_item_pane_t1

0x084f,	// (0x00026607) midp_ticker_pane_g1

0x085b,	// (0x00026613) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00035510) midp_ticker_pane_g

0xa60a,	// (0x000303c2) midp_ticker_pane_t1

0xb8b0,	// (0x00031668) midp_editing_number_pane_t1

0x4167,	// (0x00029f1f) midp_editing_number_pane

0x4176,	// (0x00029f2e) midp_ticker_pane

0x3f0c,	// (0x00029cc4) ai_message_heading_pane

0xca82,	// (0x0003283a) bg_popup_window_pane_cp14

0x3f14,	// (0x00029ccc) listscroll_ai_message_pane

0x3e92,	// (0x00029c4a) ai_message_heading_pane_g1_ParamLimits

0x3e92,	// (0x00029c4a) ai_message_heading_pane_g1

0x3e9e,	// (0x00029c56) ai_message_heading_pane_g2_ParamLimits

0x3e9e,	// (0x00029c56) ai_message_heading_pane_g2

0x3eac,	// (0x00029c64) ai_message_heading_pane_g3_ParamLimits

0x3eac,	// (0x00029c64) ai_message_heading_pane_g3

0x3eb8,	// (0x00029c70) ai_message_heading_pane_g4_ParamLimits

0x3eb8,	// (0x00029c70) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x00035704) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x00035704) ai_message_heading_pane_g

0x3ec4,	// (0x00029c7c) ai_message_heading_pane_t1_ParamLimits

0x3ec4,	// (0x00029c7c) ai_message_heading_pane_t1

0x3ede,	// (0x00029c96) ai_message_heading_pane_t2_ParamLimits

0x3ede,	// (0x00029c96) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0003570d) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0003570d) ai_message_heading_pane_t

0x3ef2,	// (0x00029caa) bg_popup_heading_pane_cp1_ParamLimits

0x3ef2,	// (0x00029caa) bg_popup_heading_pane_cp1

0x3e80,	// (0x00029c38) list_ai_message_pane_ParamLimits

0x3e80,	// (0x00029c38) list_ai_message_pane

0xd245,	// (0x00032ffd) scroll_pane_cp10

0x3e1c,	// (0x00029bd4) list_ai_message_pane_g1

0x3e24,	// (0x00029bdc) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x000356e1) list_ai_message_pane_g

0x3e2c,	// (0x00029be4) list_ai_message_pane_t1_ParamLimits

0x3e2c,	// (0x00029be4) list_ai_message_pane_t1

0x3e41,	// (0x00029bf9) list_ai_message_pane_t2_ParamLimits

0x3e41,	// (0x00029bf9) list_ai_message_pane_t2

0x3e56,	// (0x00029c0e) list_ai_message_pane_t3_ParamLimits

0x3e56,	// (0x00029c0e) list_ai_message_pane_t3

0x3e6b,	// (0x00029c23) list_ai_message_pane_t4_ParamLimits

0x3e6b,	// (0x00029c23) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x000356e6) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x000356e6) list_ai_message_pane_t

0xb7b9,	// (0x00031571) cell_ai_soft_ind_pane_ParamLimits

0xb7b9,	// (0x00031571) cell_ai_soft_ind_pane

0x0879,	// (0x00026631) cell_ai_soft_ind_pane_g1_ParamLimits

0x0879,	// (0x00026631) cell_ai_soft_ind_pane_g1

0xca82,	// (0x0003283a) grid_highlight_cp1

0x0886,	// (0x0002663e) text_secondary_cp56_ParamLimits

0x0886,	// (0x0002663e) text_secondary_cp56

0x3dda,	// (0x00029b92) example_general_pane_ParamLimits

0x3dda,	// (0x00029b92) example_general_pane

0x3de6,	// (0x00029b9e) example_parent_pane_g1_ParamLimits

0x3de6,	// (0x00029b9e) example_parent_pane_g1

0x3df2,	// (0x00029baa) example_parent_pane_t1_ParamLimits

0x3df2,	// (0x00029baa) example_parent_pane_t1

0xac6e,	// (0x00030a26) popup_preview_text_window_ParamLimits

0xac6e,	// (0x00030a26) popup_preview_text_window

0x06ac,	// (0x00026464) list_single_pane_cp2_g4

0xccdf,	// (0x00032a97) bg_popup_preview_window_pane_ParamLimits

0xccdf,	// (0x00032a97) bg_popup_preview_window_pane

0x3b2e,	// (0x000298e6) popup_preview_text_window_t1_ParamLimits

0x3b2e,	// (0x000298e6) popup_preview_text_window_t1

0x3b4c,	// (0x00029904) popup_preview_text_window_t2_ParamLimits

0x3b4c,	// (0x00029904) popup_preview_text_window_t2

0x3b95,	// (0x0002994d) popup_preview_text_window_t3_ParamLimits

0x3b95,	// (0x0002994d) popup_preview_text_window_t3

0x3bda,	// (0x00029992) popup_preview_text_window_t4_ParamLimits

0x3bda,	// (0x00029992) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x000356b5) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x000356b5) popup_preview_text_window_t

0x3c58,	// (0x00029a10) scroll_pane_cp11

0x1858,	// (0x00027610) bg_popup_preview_window_pane_g1

0x3ae2,	// (0x0002989a) bg_popup_preview_window_pane_g2

0x3aec,	// (0x000298a4) bg_popup_preview_window_pane_g3

0x3af6,	// (0x000298ae) bg_popup_preview_window_pane_g4

0x3b00,	// (0x000298b8) bg_popup_preview_window_pane_g5

0x3b0a,	// (0x000298c2) bg_popup_preview_window_pane_g6

0x3b12,	// (0x000298ca) bg_popup_preview_window_pane_g7

0x3b1a,	// (0x000298d2) bg_popup_preview_window_pane_g8

0xf014,	// (0x00034dcc) aid_popup_width_pane

0xabde,	// (0x00030996) popup_midp_note_alarm_window_ParamLimits

0xabde,	// (0x00030996) popup_midp_note_alarm_window

0xd110,	// (0x00032ec8) data_form_pane_ParamLimits

0x989b,	// (0x0002f653) form_field_data_pane_g1

0x98a5,	// (0x0002f65d) form_field_data_pane_t1_ParamLimits

0xd11c,	// (0x00032ed4) input_focus_pane_ParamLimits

0xe9e3,	// (0x0003479b) data_form_wide_pane_ParamLimits

0xe9f4,	// (0x000347ac) form_field_data_wide_pane_g1

0xea00,	// (0x000347b8) form_field_data_wide_pane_t1_ParamLimits

0xce97,	// (0x00032c4f) input_focus_pane_cp6_ParamLimits

0xa2d5,	// (0x0003008d) input_popup_find_pane_g1_ParamLimits

0xa2d5,	// (0x0003008d) input_popup_find_pane_g1

0xf4c0,	// (0x00035278) aid_navi_side_left_pane

0xf4d5,	// (0x0003528d) aid_navi_side_right_pane

0x34f7,	// (0x000292af) bg_popup_window_pane_cp30_ParamLimits

0x34f7,	// (0x000292af) bg_popup_window_pane_cp30

0x3571,	// (0x00029329) popup_midp_note_alarm_window_g1_ParamLimits

0x3571,	// (0x00029329) popup_midp_note_alarm_window_g1

0x35a1,	// (0x00029359) popup_midp_note_alarm_window_t1_ParamLimits

0x35a1,	// (0x00029359) popup_midp_note_alarm_window_t1

0x3642,	// (0x000293fa) popup_midp_note_alarm_window_t2_ParamLimits

0x3642,	// (0x000293fa) popup_midp_note_alarm_window_t2

0x36f0,	// (0x000294a8) popup_midp_note_alarm_window_t3_ParamLimits

0x36f0,	// (0x000294a8) popup_midp_note_alarm_window_t3

0x3722,	// (0x000294da) popup_midp_note_alarm_window_t4_ParamLimits

0x3722,	// (0x000294da) popup_midp_note_alarm_window_t4

0x3748,	// (0x00029500) popup_midp_note_alarm_window_t5_ParamLimits

0x3748,	// (0x00029500) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x00035652) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x00035652) popup_midp_note_alarm_window_t

0x37f4,	// (0x000295ac) wait_bar_pane_cp1_ParamLimits

0x37f4,	// (0x000295ac) wait_bar_pane_cp1

0xca82,	// (0x0003283a) wait_anim_pane_copy1

0xca82,	// (0x0003283a) wait_border_pane_copy1

0x31dc,	// (0x00028f94) wait_border_pane_g1_copy1

0xea1a,	// (0x000347d2) form_field_popup_pane_g1

0x98bf,	// (0x0002f677) form_field_popup_pane_t1_ParamLimits

0xd11c,	// (0x00032ed4) input_focus_pane_cp7_ParamLimits

0xd14a,	// (0x00032f02) list_form_pane_ParamLimits

0xea22,	// (0x000347da) form_field_popup_wide_pane_g1

0xea2a,	// (0x000347e2) form_field_popup_wide_pane_t1_ParamLimits

0xd11c,	// (0x00032ed4) input_focus_pane_cp8_ParamLimits

0xd156,	// (0x00032f0e) list_form_wide_pane_ParamLimits

0xb98e,	// (0x00031746) aid_size_cell_graphic_pane

0x993e,	// (0x0002f6f6) data_form_pane_t1_ParamLimits

0x9a6e,	// (0x0002f826) data_form_wide_pane_t1_ParamLimits

0xb070,	// (0x00030e28) bg_status_flat_pane

0x9f1e,	// (0x0002fcd6) title_pane_t1_ParamLimits

0xca98,	// (0x00032850) title_pane_t2_ParamLimits

0xcabe,	// (0x00032876) title_pane_t3_ParamLimits

0xf557,	// (0x0003530f) title_pane_t_ParamLimits

0xa400,	// (0x000301b8) level_1_signal_ParamLimits

0xa412,	// (0x000301ca) level_2_signal_ParamLimits

0xa425,	// (0x000301dd) level_3_signal_ParamLimits

0xa438,	// (0x000301f0) level_4_signal_ParamLimits

0xa44b,	// (0x00030203) level_5_signal_ParamLimits

0xa45e,	// (0x00030216) level_6_signal_ParamLimits

0xa471,	// (0x00030229) level_7_signal_ParamLimits

0xa400,	// (0x000301b8) level_1_battery_ParamLimits

0xa412,	// (0x000301ca) level_2_battery_ParamLimits

0xa425,	// (0x000301dd) level_3_battery_ParamLimits

0xa438,	// (0x000301f0) level_4_battery_ParamLimits

0xa44b,	// (0x00030203) level_5_battery_ParamLimits

0xa45e,	// (0x00030216) level_6_battery_ParamLimits

0xa471,	// (0x00030229) level_7_battery_ParamLimits

0x33fc,	// (0x000291b4) bg_status_flat_pane_g1

0x3404,	// (0x000291bc) bg_status_flat_pane_g2

0x340c,	// (0x000291c4) bg_status_flat_pane_g3

0x3414,	// (0x000291cc) bg_status_flat_pane_g4

0x341c,	// (0x000291d4) bg_status_flat_pane_g5

0x3424,	// (0x000291dc) bg_status_flat_pane_g6

0x342c,	// (0x000291e4) bg_status_flat_pane_g7

0x9fb2,	// (0x0002fd6a) tabs_3_active_pane_t1_ParamLimits

0x9fb2,	// (0x0002fd6a) tabs_3_passive_pane_t1_ParamLimits

0x9fcc,	// (0x0002fd84) tabs_4_active_pane_t1_ParamLimits

0x9fcc,	// (0x0002fd84) tabs_4_1_passive_pane_t1_ParamLimits

0xa2eb,	// (0x000300a3) tabs_2_active_pane_t1_ParamLimits

0xa2eb,	// (0x000300a3) tabs_2_passive_pane_t1_ParamLimits

0xcade,	// (0x00032896) bg_active_tab_pane_cp4_ParamLimits

0xa2fd,	// (0x000300b5) tabs_2_long_active_pane_t1_ParamLimits

0x0cc7,	// (0x00026a7f) bg_passive_tab_pane_cp4_ParamLimits

0x18c4,	// (0x0002767c) list_single_midp_graphic_pane_t1_ParamLimits

0xcade,	// (0x00032896) bg_active_tab_pane_cp5_ParamLimits

0xa310,	// (0x000300c8) tabs_3_long_active_pane_t1_ParamLimits

0x0cc7,	// (0x00026a7f) bg_passive_tab_pane_cp5_ParamLimits

0x18c4,	// (0x0002767c) list_single_midp_graphic_pane_t1

0xb070,	// (0x00030e28) bg_status_flat_pane_ParamLimits

0x14ac,	// (0x00027264) indicator_pane_cp2_ParamLimits

0x14ac,	// (0x00027264) indicator_pane_cp2

0xb206,	// (0x00030fbe) navi_pane_srt_ParamLimits

0xb206,	// (0x00030fbe) navi_pane_srt

0x1613,	// (0x000273cb) popup_clock_digital_analogue_window_cp1

0xcb22,	// (0x000328da) indicator_pane_t1

0x0771,	// (0x00026529) copy_highlight_pane

0x0771,	// (0x00026529) cursor_graphics_pane

0x0771,	// (0x00026529) graphic_within_text_pane

0x0771,	// (0x00026529) link_highlight_pane

0x3c1b,	// (0x000299d3) popup_preview_text_window_t5_ParamLimits

0x3c1b,	// (0x000299d3) popup_preview_text_window_t5

0x08a2,	// (0x0002665a) cursor_digital_pane

0x08a2,	// (0x0002665a) cursor_primary_pane

0x08b3,	// (0x0002666b) cursor_primary_small_pane

0x08bb,	// (0x00026673) cursor_secondary_pane

0x08c3,	// (0x0002667b) cursor_title_pane

0x08a2,	// (0x0002665a) link_highlight_digital_pane

0x08aa,	// (0x00026662) link_highlight_primary_pane

0x08b3,	// (0x0002666b) link_highlight_primary_small_pane

0x08bb,	// (0x00026673) link_highlight_secondary_pane

0x08c3,	// (0x0002667b) link_highlight_title_pane

0x08a2,	// (0x0002665a) copy_highlight_digital_pane

0x08a2,	// (0x0002665a) copy_highlight_primary_pane

0x08b3,	// (0x0002666b) copy_highlight_primary_small_pane

0x08bb,	// (0x00026673) copy_highlight_secondary_pane

0x08c3,	// (0x0002667b) copy_highlight_title_pane

0x08bb,	// (0x00026673) graphic_text_digital_pane

0x349a,	// (0x00029252) graphic_text_primary_pane

0x34a3,	// (0x0002925b) graphic_text_primary_small_pane

0x08b3,	// (0x0002666b) graphic_text_secondary_pane

0x08a2,	// (0x0002665a) graphic_text_title_pane

0xa61c,	// (0x000303d4) cursor_primary_pane_g1

0x348c,	// (0x00029244) cursor_text_primary_t1

0xb4d2,	// (0x0003128a) cursor_primary_small_pane_g1

0x347e,	// (0x00029236) cursor_text_primary_small_t1

0xb4c8,	// (0x00031280) cursor_primary_small_pane_g1_copy1

0x3466,	// (0x0002921e) cursor_text_primary_small_t1_copy1

0x3444,	// (0x000291fc) cursor_text_title_t1

0xb4be,	// (0x00031276) cursor_title_pane_g1

0xa61c,	// (0x000303d4) cursor_digital_pane_g1

0x08d5,	// (0x0002668d) cursor_text_digital_t1

0x08e3,	// (0x0002669b) link_highlight_primary_pane_g1

0x33ed,	// (0x000291a5) link_highlight_primary_pane_t1

0x08e3,	// (0x0002669b) link_highlight_primary_small_pane_g1

0x08eb,	// (0x000266a3) link_highlight_primary_small_pane_t1

0x08fa,	// (0x000266b2) link_highlight_secondary_pane_g1

0x0902,	// (0x000266ba) link_highlight_secondary_pane_t1

0x3361,	// (0x00029119) link_highlight_title_pane_g1

0x3369,	// (0x00029121) link_highlight_title_pane_t1

0x334a,	// (0x00029102) link_highlight_digital_pane_g1

0x3352,	// (0x0002910a) link_highlight_digital_pane_t1

0x3212,	// (0x00028fca) copy_highlight_primary_pane_g1

0x3229,	// (0x00028fe1) copy_highlight_primary_pane_t1

0x3212,	// (0x00028fca) copy_highlight_primary_small_pane_g1

0x321a,	// (0x00028fd2) copy_highlight_primary_small_pane_t1

0x0911,	// (0x000266c9) copy_highlight_secondary_pane_g1

0x0919,	// (0x000266d1) copy_highlight_secondary_pane_t1

0x31fb,	// (0x00028fb3) copy_highlight_title_pane_g1

0x3203,	// (0x00028fbb) copy_highlight_title_pane_t1

0x3212,	// (0x00028fca) copy_highlight_digital_pane_g1

0x4516,	// (0x0002a2ce) copy_highlight_digital_pane_t1

0x446a,	// (0x0002a222) graphic_text_primary_pane_g1

0x44fa,	// (0x0002a2b2) graphic_text_primary_pane_t1

0x4508,	// (0x0002a2c0) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x00035781) graphic_text_primary_pane_t

0x44d6,	// (0x0002a28e) graphic_text_primary_small_pane_g1

0x44de,	// (0x0002a296) graphic_text_primary_small_pane_t1

0x44ec,	// (0x0002a2a4) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0003577c) graphic_text_primary_small_pane_t

0x44b2,	// (0x0002a26a) graphic_text_secondary_pane_g1

0x44ba,	// (0x0002a272) graphic_text_secondary_pane_t1

0x44c8,	// (0x0002a280) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x00035777) graphic_text_secondary_pane_t

0x448e,	// (0x0002a246) graphic_text_title_pane_g1

0x4496,	// (0x0002a24e) graphic_text_title_pane_t1

0x44a4,	// (0x0002a25c) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x00035772) graphic_text_title_pane_t

0x446a,	// (0x0002a222) graphic_text_digital_pane_g1

0x4472,	// (0x0002a22a) graphic_text_digital_pane_t1

0x4480,	// (0x0002a238) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0003576d) graphic_text_digital_pane_t

0xcade,	// (0x00032896) navi_icon_pane_srt_ParamLimits

0xcade,	// (0x00032896) navi_icon_pane_srt

0xca82,	// (0x0003283a) navi_midp_pane_srt

0xca82,	// (0x0003283a) navi_navi_pane_srt

0xcade,	// (0x00032896) navi_text_pane_srt_ParamLimits

0xcade,	// (0x00032896) navi_text_pane_srt

0x4435,	// (0x0002a1ed) navi_navi_icon_text_pane_srt

0x443d,	// (0x0002a1f5) navi_navi_pane_srt_g1_ParamLimits

0x443d,	// (0x0002a1f5) navi_navi_pane_srt_g1

0x444f,	// (0x0002a207) navi_navi_pane_srt_g2_ParamLimits

0x444f,	// (0x0002a207) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x00035768) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x00035768) navi_navi_pane_srt_g

0x4461,	// (0x0002a219) navi_navi_tabs_pane_srt

0x4435,	// (0x0002a1ed) navi_navi_text_pane_srt

0x4435,	// (0x0002a1ed) navi_navi_volume_pane_srt

0x4426,	// (0x0002a1de) navi_navi_text_pane_srt_t1

0x1c60,	// (0x00027a18) navi_navi_volume_pane_srt_g1

0x1c68,	// (0x00027a20) volume_small_pane_srt_ParamLimits

0x1c68,	// (0x00027a20) volume_small_pane_srt

0x0928,	// (0x000266e0) volume_small_pane_srt_g1_ParamLimits

0x0928,	// (0x000266e0) volume_small_pane_srt_g1

0x0938,	// (0x000266f0) volume_small_pane_srt_g2_ParamLimits

0x0938,	// (0x000266f0) volume_small_pane_srt_g2

0x0949,	// (0x00026701) volume_small_pane_srt_g3_ParamLimits

0x0949,	// (0x00026701) volume_small_pane_srt_g3

0x095a,	// (0x00026712) volume_small_pane_srt_g4_ParamLimits

0x095a,	// (0x00026712) volume_small_pane_srt_g4

0x096b,	// (0x00026723) volume_small_pane_srt_g5_ParamLimits

0x096b,	// (0x00026723) volume_small_pane_srt_g5

0x097c,	// (0x00026734) volume_small_pane_srt_g6_ParamLimits

0x097c,	// (0x00026734) volume_small_pane_srt_g6

0x098d,	// (0x00026745) volume_small_pane_srt_g7_ParamLimits

0x098d,	// (0x00026745) volume_small_pane_srt_g7

0x099e,	// (0x00026756) volume_small_pane_srt_g8_ParamLimits

0x099e,	// (0x00026756) volume_small_pane_srt_g8

0x09af,	// (0x00026767) volume_small_pane_srt_g9_ParamLimits

0x09af,	// (0x00026767) volume_small_pane_srt_g9

0x09c0,	// (0x00026778) volume_small_pane_srt_g10_ParamLimits

0x09c0,	// (0x00026778) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00035515) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00035515) volume_small_pane_srt_g

0xcd94,	// (0x00032b4c) query_popup_data_pane_cp2

0x440c,	// (0x0002a1c4) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x440c,	// (0x0002a1c4) navi_navi_icon_text_pane_srt_t1

0x349a,	// (0x00029252) navi_tabs_2_long_pane_srt

0x349a,	// (0x00029252) navi_tabs_2_pane_srt

0x349a,	// (0x00029252) navi_tabs_3_long_pane_srt

0x349a,	// (0x00029252) navi_tabs_3_pane_srt

0x349a,	// (0x00029252) navi_tabs_4_pane_srt

0x1c40,	// (0x000279f8) tabs_2_active_pane_srt_ParamLimits

0x1c40,	// (0x000279f8) tabs_2_active_pane_srt

0x1c50,	// (0x00027a08) tabs_2_passive_pane_srt_ParamLimits

0x1c50,	// (0x00027a08) tabs_2_passive_pane_srt

0x2c70,	// (0x00028a28) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2c70,	// (0x00028a28) bg_passive_tab_pane_cp1_srt

0x43d8,	// (0x0002a190) bg_passive_tab_pane_g1_cp1_srt

0x027c,	// (0x00026034) bg_passive_tab_pane_g2_cp1_srt

0x43e1,	// (0x0002a199) bg_passive_tab_pane_g3_cp1_srt

0xcad0,	// (0x00032888) bg_active_tab_pane_cp1_srt_ParamLimits

0xcad0,	// (0x00032888) bg_active_tab_pane_cp1_srt

0x43ea,	// (0x0002a1a2) tabs_2_active_pane_srt_g1

0xb9d0,	// (0x00031788) tabs_2_active_pane_srt_t1_ParamLimits

0xb9d0,	// (0x00031788) tabs_2_active_pane_srt_t1

0x43d8,	// (0x0002a190) bg_active_tab_pane_g1_cp1_srt

0x027c,	// (0x00026034) bg_active_tab_pane_g2_cp1_srt

0x43e1,	// (0x0002a199) bg_active_tab_pane_g3_cp1_srt

0x1c0d,	// (0x000279c5) tabs_3_active_pane_srt_ParamLimits

0x1c0d,	// (0x000279c5) tabs_3_active_pane_srt

0x1c1e,	// (0x000279d6) tabs_3_passive_pane_cp_srt_ParamLimits

0x1c1e,	// (0x000279d6) tabs_3_passive_pane_cp_srt

0x1c2f,	// (0x000279e7) tabs_3_passive_pane_srt_ParamLimits

0x1c2f,	// (0x000279e7) tabs_3_passive_pane_srt

0x2c70,	// (0x00028a28) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2c70,	// (0x00028a28) bg_passive_tab_pane_cp2_srt

0x09d1,	// (0x00026789) bg_passive_tab_pane_g1_cp2_srt

0x027c,	// (0x00026034) bg_passive_tab_pane_g2_cp2_srt

0x09da,	// (0x00026792) bg_passive_tab_pane_g3_cp2_srt

0xcad0,	// (0x00032888) bg_active_tab_pane_cp2_srt_ParamLimits

0xcad0,	// (0x00032888) bg_active_tab_pane_cp2_srt

0x43be,	// (0x0002a176) tabs_3_active_pane_srt_g1

0xb9ba,	// (0x00031772) tabs_3_active_pane_srt_t1_ParamLimits

0xb9ba,	// (0x00031772) tabs_3_active_pane_srt_t1

0x09d1,	// (0x00026789) bg_active_tab_pane_g1_cp2_srt

0x027c,	// (0x00026034) bg_active_tab_pane_g2_cp2_srt

0x09da,	// (0x00026792) bg_active_tab_pane_g3_cp2_srt

0x1bc5,	// (0x0002797d) tabs_4_active_pane_srt_ParamLimits

0x1bc5,	// (0x0002797d) tabs_4_active_pane_srt

0x1bd7,	// (0x0002798f) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1bd7,	// (0x0002798f) tabs_4_passive_pane_cp2_srt

0x0c8f,	// (0x00026a47) aid_size_cell_toolbar

0x3fc6,	// (0x00029d7e) main_idle_act_pane_ParamLimits

0x0ec6,	// (0x00026c7e) popup_large_graphic_colour_window_ParamLimits

0xaf32,	// (0x00030cea) popup_toolbar_window_ParamLimits

0xaf32,	// (0x00030cea) popup_toolbar_window

0xebe7,	// (0x0003499f) list_single_graphic_2heading_pane_ParamLimits

0xebe7,	// (0x0003499f) list_single_graphic_2heading_pane

0xd41d,	// (0x000331d5) aid_size_cell_apps_grid_lsc_pane

0xd42f,	// (0x000331e7) aid_size_cell_apps_grid_prt_pane

0x0cc7,	// (0x00026a7f) bg_wml_button_pane_cp1_ParamLimits

0x0cc7,	// (0x00026a7f) bg_wml_button_pane_cp1

0xb47a,	// (0x00031232) form_midp_field_text_pane_t1_ParamLimits

0x2c70,	// (0x00028a28) input_focus_pane_cp050_ParamLimits

0x2ea9,	// (0x00028c61) list_midp_form_text_pane_ParamLimits

0x2e5b,	// (0x00028c13) input_focus_pane_cp051_ParamLimits

0x2e6f,	// (0x00028c27) list_midp_choice_pane_ParamLimits

0x2d29,	// (0x00028ae1) list_single_2graphic_pane_cp3_ParamLimits

0x2d29,	// (0x00028ae1) list_single_2graphic_pane_cp3

0x2d3f,	// (0x00028af7) list_single_midp_graphic_pane_ParamLimits

0x2d3f,	// (0x00028af7) list_single_midp_graphic_pane

0xea90,	// (0x00034848) list_single_graphic_2heading_pane_g1_ParamLimits

0xea90,	// (0x00034848) list_single_graphic_2heading_pane_g1

0xe8b6,	// (0x0003466e) list_single_graphic_2heading_pane_g4_ParamLimits

0xe8b6,	// (0x0003466e) list_single_graphic_2heading_pane_g4

0xe8c2,	// (0x0003467a) list_single_graphic_2heading_pane_g5_ParamLimits

0xe8c2,	// (0x0003467a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x00035568) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x00035568) list_single_graphic_2heading_pane_g

0xea9c,	// (0x00034854) list_single_graphic_2heading_pane_t1_ParamLimits

0xea9c,	// (0x00034854) list_single_graphic_2heading_pane_t1

0xeab0,	// (0x00034868) list_single_graphic_2heading_pane_t2_ParamLimits

0xeab0,	// (0x00034868) list_single_graphic_2heading_pane_t2

0xeacc,	// (0x00034884) list_single_graphic_2heading_pane_t3_ParamLimits

0xeacc,	// (0x00034884) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0003556f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0003556f) list_single_graphic_2heading_pane_t

0x1766,	// (0x0002751e) bg_popup_sub_pane_cp2

0x1790,	// (0x00027548) grid_toobar_pane

0x17cc,	// (0x00027584) cell_toolbar_pane_ParamLimits

0x17cc,	// (0x00027584) cell_toolbar_pane

0x17fc,	// (0x000275b4) cell_toolbar_pane_g1_ParamLimits

0x17fc,	// (0x000275b4) cell_toolbar_pane_g1

0x1810,	// (0x000275c8) cell_toolbar_pane_g2_ParamLimits

0x1810,	// (0x000275c8) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0003557d) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0003557d) cell_toolbar_pane_g

0x1832,	// (0x000275ea) grid_highlight_pane_cp2_ParamLimits

0x1832,	// (0x000275ea) grid_highlight_pane_cp2

0x184c,	// (0x00027604) toolbar_button_pane

0x1858,	// (0x00027610) toolbar_button_pane_g1

0x1860,	// (0x00027618) toolbar_button_pane_g2

0x1868,	// (0x00027620) toolbar_button_pane_g3

0x2c1c,	// (0x000289d4) toolbar_button_pane_g4

0x1870,	// (0x00027628) toolbar_button_pane_g5

0x2c24,	// (0x000289dc) toolbar_button_pane_g6

0x2c2c,	// (0x000289e4) toolbar_button_pane_g7

0x2c34,	// (0x000289ec) toolbar_button_pane_g8

0x2c3c,	// (0x000289f4) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x00035582) toolbar_button_pane_g

0x1880,	// (0x00027638) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1880,	// (0x00027638) list_single_2graphic_pane_g1_cp3

0xb3a9,	// (0x00031161) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb3a9,	// (0x00031161) list_single_2graphic_pane_g2_cp3

0x05a7,	// (0x0002635f) list_single_2graphic_pane_g3_cp3

0x189d,	// (0x00027655) list_single_2graphic_pane_g4_cp3_ParamLimits

0x189d,	// (0x00027655) list_single_2graphic_pane_g4_cp3

0x18a9,	// (0x00027661) list_single_2graphic_pane_t1_cp3_ParamLimits

0x18a9,	// (0x00027661) list_single_2graphic_pane_t1_cp3

0x059b,	// (0x00026353) list_single_midp_graphic_pane_g2_ParamLimits

0x059b,	// (0x00026353) list_single_midp_graphic_pane_g2

0x0c97,	// (0x00026a4f) aid_zoom_text_primary

0xea80,	// (0x00034838) aid_zoom_text_secondary

0xa674,	// (0x0003042c) status_small_pane_g7_ParamLimits

0xa674,	// (0x0003042c) status_small_pane_g7

0xa697,	// (0x0003044f) status_small_pane_t1_ParamLimits

0x9eee,	// (0x0002fca6) title_pane_g2

0x0003,

0xf54e,	// (0x00035306) title_pane_g

0xa18e,	// (0x0002ff46) aid_size_cell_colour_1_pane_ParamLimits

0xa18e,	// (0x0002ff46) aid_size_cell_colour_1_pane

0xa1a2,	// (0x0002ff5a) aid_size_cell_colour_2_pane_ParamLimits

0xa1a2,	// (0x0002ff5a) aid_size_cell_colour_2_pane

0xa1b6,	// (0x0002ff6e) aid_size_cell_colour_3_pane_ParamLimits

0xa1b6,	// (0x0002ff6e) aid_size_cell_colour_3_pane

0xa1ca,	// (0x0002ff82) aid_size_cell_colour_4_pane_ParamLimits

0xa1ca,	// (0x0002ff82) aid_size_cell_colour_4_pane

0xf3fc,	// (0x000351b4) title_pane_stacon_g1_ParamLimits

0xf3fc,	// (0x000351b4) title_pane_stacon_g1

0x3280,	// (0x00029038) popup_note_wait_window_g3_ParamLimits

0x3280,	// (0x00029038) popup_note_wait_window_g3

0x32f7,	// (0x000290af) popup_note_wait_window_t5_ParamLimits

0x32f7,	// (0x000290af) popup_note_wait_window_t5

0xca82,	// (0x0003283a) main_feb_china_hwr_fs_writing_pane

0xa8cb,	// (0x00030683) popup_feb_china_hwr_fs_window_ParamLimits

0xa8cb,	// (0x00030683) popup_feb_china_hwr_fs_window

0xb3ba,	// (0x00031172) aid_size_cell_hwr_fs_ParamLimits

0xb3ba,	// (0x00031172) aid_size_cell_hwr_fs

0x2c70,	// (0x00028a28) bg_popup_sub_pane_cp3_ParamLimits

0x2c70,	// (0x00028a28) bg_popup_sub_pane_cp3

0xb3cf,	// (0x00031187) grid_hwr_fs_pane_ParamLimits

0xb3cf,	// (0x00031187) grid_hwr_fs_pane

0x1907,	// (0x000276bf) linegrid_hwr_fs_pane_ParamLimits

0x1907,	// (0x000276bf) linegrid_hwr_fs_pane

0xb3e7,	// (0x0003119f) cell_hwr_fs_pane_ParamLimits

0xb3e7,	// (0x0003119f) cell_hwr_fs_pane

0x2c7c,	// (0x00028a34) linegrid_hwr_fs_pane_g1_ParamLimits

0x2c7c,	// (0x00028a34) linegrid_hwr_fs_pane_g1

0xb40d,	// (0x000311c5) linegrid_hwr_fs_pane_g2_ParamLimits

0xb40d,	// (0x000311c5) linegrid_hwr_fs_pane_g2

0x2c9a,	// (0x00028a52) linegrid_hwr_fs_pane_g3_ParamLimits

0x2c9a,	// (0x00028a52) linegrid_hwr_fs_pane_g3

0x193b,	// (0x000276f3) linegrid_hwr_fs_pane_g4_ParamLimits

0x193b,	// (0x000276f3) linegrid_hwr_fs_pane_g4

0x1959,	// (0x00027711) linegrid_hwr_fs_pane_g5_ParamLimits

0x1959,	// (0x00027711) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x000355a8) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x000355a8) linegrid_hwr_fs_pane_g

0x2ca6,	// (0x00028a5e) cell_hwr_fs_pane_g1_ParamLimits

0x2ca6,	// (0x00028a5e) cell_hwr_fs_pane_g1

0x16a1,	// (0x00027459) cell_hwr_fs_pane_g2_ParamLimits

0x16a1,	// (0x00027459) cell_hwr_fs_pane_g2

0xb41f,	// (0x000311d7) cell_hwr_fs_pane_g3_ParamLimits

0xb41f,	// (0x000311d7) cell_hwr_fs_pane_g3

0xb42c,	// (0x000311e4) cell_hwr_fs_pane_g4_ParamLimits

0xb42c,	// (0x000311e4) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x000355b3) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x000355b3) cell_hwr_fs_pane_g

0xb439,	// (0x000311f1) cell_hwr_fs_pane_t1

0xca82,	// (0x0003283a) grid_highlight_pane_cp6

0xca82,	// (0x0003283a) main_idle_act2_pane

0xd22c,	// (0x00032fe4) aid_inside_area_popup_secondary

0xb648,	// (0x00031400) aid_inside_area_window_primary_ParamLimits

0xb648,	// (0x00031400) aid_inside_area_window_primary

0x4525,	// (0x0002a2dd) ai2_news_ticker_pane

0x452d,	// (0x0002a2e5) aid_size_cell_ai1_link_ParamLimits

0x452d,	// (0x0002a2e5) aid_size_cell_ai1_link

0x4547,	// (0x0002a2ff) popup_ai2_data_window_ParamLimits

0x4547,	// (0x0002a2ff) popup_ai2_data_window

0x4565,	// (0x0002a31d) popup_ai2_link_window_ParamLimits

0x4565,	// (0x0002a31d) popup_ai2_link_window

0x2c70,	// (0x00028a28) bg_popup_sub_pane_cp4_ParamLimits

0x2c70,	// (0x00028a28) bg_popup_sub_pane_cp4

0x457b,	// (0x0002a333) grid_ai2_link_pane_ParamLimits

0x457b,	// (0x0002a333) grid_ai2_link_pane

0x4592,	// (0x0002a34a) popup_ai2_link_window_g1_ParamLimits

0x4592,	// (0x0002a34a) popup_ai2_link_window_g1

0x459e,	// (0x0002a356) popup_ai2_link_window_g2_ParamLimits

0x459e,	// (0x0002a356) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x00035786) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x00035786) popup_ai2_link_window_g

0x45af,	// (0x0002a367) ai2_mp_button_pane

0x45b7,	// (0x0002a36f) ai2_mp_volume_pane

0x2e5b,	// (0x00028c13) bg_popup_sub_pane_cp5_ParamLimits

0x2e5b,	// (0x00028c13) bg_popup_sub_pane_cp5

0x45bf,	// (0x0002a377) heading_ai2_gene_pane_ParamLimits

0x45bf,	// (0x0002a377) heading_ai2_gene_pane

0x45cb,	// (0x0002a383) list_ai2_gene_pane_ParamLimits

0x45cb,	// (0x0002a383) list_ai2_gene_pane

0x4613,	// (0x0002a3cb) cell_ai2_link_pane_ParamLimits

0x4613,	// (0x0002a3cb) cell_ai2_link_pane

0x4629,	// (0x0002a3e1) cell_ai2_link_pane_g1

0xca82,	// (0x0003283a) grid_highlight_pane_cp7

0x1c7d,	// (0x00027a35) ai2_mp_volume_pane_g1

0x46fc,	// (0x0002a4b4) ai2_mp_volume_pane_g2

0x4671,	// (0x0002a429) list_ai2_gene_pane_t1

0x4704,	// (0x0002a4bc) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0003579f) ai2_mp_volume_pane_g

0x1c85,	// (0x00027a3d) volume_small_pane_cp3

0x470c,	// (0x0002a4c4) aid_size_cell_ai2_button

0x4714,	// (0x0002a4cc) grid_ai2_button_pane

0x471d,	// (0x0002a4d5) cell_ai2_button_pane_ParamLimits

0x471d,	// (0x0002a4d5) cell_ai2_button_pane

0xca78,	// (0x00032830) cell_ai2_button_pane_g1

0xca82,	// (0x0003283a) grid_highlight_pane_cp8

0x46bc,	// (0x0002a474) ai2_gene_pane_t1_ParamLimits

0x46bc,	// (0x0002a474) ai2_gene_pane_t1

0xa863,	// (0x0003061b) aid_height_parent_landscape

0xb800,	// (0x000315b8) aid_height_set_list

0x3fc6,	// (0x00029d7e) aid_size_parent

0xb98e,	// (0x00031746) aid_size_cell_graphic_pane_ParamLimits

0x45db,	// (0x0002a393) popup_ai2_data_window_g1_ParamLimits

0x45db,	// (0x0002a393) popup_ai2_data_window_g1

0x45e7,	// (0x0002a39f) ai2_news_ticker_pane_g1

0x45ef,	// (0x0002a3a7) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0003578b) ai2_news_ticker_pane_g

0x45f7,	// (0x0002a3af) ai2_news_ticker_pane_t1

0x4605,	// (0x0002a3bd) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x00035790) ai2_news_ticker_pane_t

0x4632,	// (0x0002a3ea) heading_ai2_gene_pane_g1

0x463a,	// (0x0002a3f2) heading_ai2_gene_pane_t1_ParamLimits

0x463a,	// (0x0002a3f2) heading_ai2_gene_pane_t1

0x464f,	// (0x0002a407) list_highlight_pane_cp6

0x4657,	// (0x0002a40f) ai2_gene_pane_ParamLimits

0x4657,	// (0x0002a40f) ai2_gene_pane

0x467f,	// (0x0002a437) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x00035795) list_ai2_gene_pane_t

0x468d,	// (0x0002a445) list_highlight_pane_cp8_ParamLimits

0x468d,	// (0x0002a445) list_highlight_pane_cp8

0x469e,	// (0x0002a456) ai2_gene_pane_g1_ParamLimits

0x469e,	// (0x0002a456) ai2_gene_pane_g1

0x46b0,	// (0x0002a468) ai2_gene_pane_g2_ParamLimits

0x46b0,	// (0x0002a468) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0003579a) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0003579a) ai2_gene_pane_g

0xd0b2,	// (0x00032e6a) scroll_pane_cp12

0xa820,	// (0x000305d8) control_pane_t3_ParamLimits

0xa820,	// (0x000305d8) control_pane_t3

0xa688,	// (0x00030440) status_small_pane_g8_ParamLimits

0xa688,	// (0x00030440) status_small_pane_g8

0xa96d,	// (0x00030725) popup_find_window_ParamLimits

0xac1e,	// (0x000309d6) popup_note_image_window_ParamLimits

0xe8f2,	// (0x000346aa) list_double2_graphic_pane_vc_g1_ParamLimits

0xe8f2,	// (0x000346aa) list_double2_graphic_pane_vc_g1

0xeae4,	// (0x0003489c) list_double2_graphic_pane_vc_g2_ParamLimits

0xeae4,	// (0x0003489c) list_double2_graphic_pane_vc_g2

0xeaf0,	// (0x000348a8) list_double2_graphic_pane_vc_g3_ParamLimits

0xeaf0,	// (0x000348a8) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x00035576) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x00035576) list_double2_graphic_pane_vc_g

0xeafc,	// (0x000348b4) list_double2_graphic_pane_vc_t1_ParamLimits

0xeafc,	// (0x000348b4) list_double2_graphic_pane_vc_t1

0xe8b6,	// (0x0003466e) list_single_heading_pane_vc_g1_ParamLimits

0xe8b6,	// (0x0003466e) list_single_heading_pane_vc_g1

0xe8c2,	// (0x0003467a) list_single_heading_pane_vc_g2_ParamLimits

0xe8c2,	// (0x0003467a) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035380) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035380) list_single_heading_pane_vc_g

0xeb12,	// (0x000348ca) list_single_heading_pane_vc_t1_ParamLimits

0xeb12,	// (0x000348ca) list_single_heading_pane_vc_t1

0xeb28,	// (0x000348e0) list_single_heading_pane_vc_t2_ParamLimits

0xeb28,	// (0x000348e0) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x00035597) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x00035597) list_single_heading_pane_vc_t

0xeb3a,	// (0x000348f2) list_setting_number_pane_vc_g1_ParamLimits

0xeb3a,	// (0x000348f2) list_setting_number_pane_vc_g1

0xeb46,	// (0x000348fe) list_setting_number_pane_vc_g2_ParamLimits

0xeb46,	// (0x000348fe) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003559c) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003559c) list_setting_number_pane_vc_g

0xeb52,	// (0x0003490a) list_setting_number_pane_vc_t1_ParamLimits

0xeb52,	// (0x0003490a) list_setting_number_pane_vc_t1

0xeb66,	// (0x0003491e) list_setting_number_pane_vc_t2_ParamLimits

0xeb66,	// (0x0003491e) list_setting_number_pane_vc_t2

0xeb82,	// (0x0003493a) list_setting_number_pane_vc_t3_ParamLimits

0xeb82,	// (0x0003493a) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x000355a1) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x000355a1) list_setting_number_pane_vc_t

0xebb0,	// (0x00034968) set_value_pane_vc_ParamLimits

0xebb0,	// (0x00034968) set_value_pane_vc

0xebe7,	// (0x0003499f) list_double2_graphic_pane_vc_ParamLimits

0xebe7,	// (0x0003499f) list_double2_graphic_pane_vc

0x41ad,	// (0x00029f65) list_double2_large_graphic_pane_vc_ParamLimits

0x41ad,	// (0x00029f65) list_double2_large_graphic_pane_vc

0xebe7,	// (0x0003499f) list_double2_pane_vc_ParamLimits

0xebe7,	// (0x0003499f) list_double2_pane_vc

0xebe7,	// (0x0003499f) list_double_graphic_heading_pane_vc_ParamLimits

0xebe7,	// (0x0003499f) list_double_graphic_heading_pane_vc

0xebe7,	// (0x0003499f) list_double_graphic_pane_vc_ParamLimits

0xebe7,	// (0x0003499f) list_double_graphic_pane_vc

0xebe7,	// (0x0003499f) list_double_heading_pane_vc_ParamLimits

0xebe7,	// (0x0003499f) list_double_heading_pane_vc

0x41c1,	// (0x00029f79) list_double_large_graphic_pane_vc_ParamLimits

0x41c1,	// (0x00029f79) list_double_large_graphic_pane_vc

0xebe7,	// (0x0003499f) list_double_number_pane_vc_ParamLimits

0xebe7,	// (0x0003499f) list_double_number_pane_vc

0xebe7,	// (0x0003499f) list_double_pane_vc_ParamLimits

0xebe7,	// (0x0003499f) list_double_pane_vc

0xebe7,	// (0x0003499f) list_double_time_pane_vc_ParamLimits

0xebe7,	// (0x0003499f) list_double_time_pane_vc

0xebe7,	// (0x0003499f) list_setting_number_pane_vc_ParamLimits

0xebe7,	// (0x0003499f) list_setting_number_pane_vc

0xebe7,	// (0x0003499f) list_setting_pane_vc_ParamLimits

0xebe7,	// (0x0003499f) list_setting_pane_vc

0xebe7,	// (0x0003499f) list_single_graphic_heading_pane_vc_ParamLimits

0xebe7,	// (0x0003499f) list_single_graphic_heading_pane_vc

0xebe7,	// (0x0003499f) list_single_heading_pane_vc_ParamLimits

0xebe7,	// (0x0003499f) list_single_heading_pane_vc

0xebe7,	// (0x0003499f) list_single_number_heading_pane_vc_ParamLimits

0xebe7,	// (0x0003499f) list_single_number_heading_pane_vc

0xe8f2,	// (0x000346aa) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe8f2,	// (0x000346aa) list_double_graphic_heading_pane_vc_g1

0xe8b6,	// (0x0003466e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xe8b6,	// (0x0003466e) list_double_graphic_heading_pane_vc_g2

0xe8c2,	// (0x0003467a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xe8c2,	// (0x0003467a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x000357a6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x000357a6) list_double_graphic_heading_pane_vc_g

0xebfc,	// (0x000349b4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xebfc,	// (0x000349b4) list_double_graphic_heading_pane_vc_t1

0xec12,	// (0x000349ca) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xec12,	// (0x000349ca) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x000357ad) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x000357ad) list_double_graphic_heading_pane_vc_t

0xeb3a,	// (0x000348f2) list_setting_pane_vc_g1_ParamLimits

0xeb3a,	// (0x000348f2) list_setting_pane_vc_g1

0xeb46,	// (0x000348fe) list_setting_pane_vc_g2_ParamLimits

0xeb46,	// (0x000348fe) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003559c) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003559c) list_setting_pane_vc_g

0xec30,	// (0x000349e8) list_setting_pane_vc_t1_ParamLimits

0xec30,	// (0x000349e8) list_setting_pane_vc_t1

0xec4c,	// (0x00034a04) list_setting_pane_vc_t2_ParamLimits

0xec4c,	// (0x00034a04) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x000357f0) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x000357f0) list_setting_pane_vc_t

0xebb0,	// (0x00034968) set_value_pane_cp_vc_ParamLimits

0xebb0,	// (0x00034968) set_value_pane_cp_vc

0xe8b6,	// (0x0003466e) list_single_number_heading_pane_vc_g1_ParamLimits

0xe8b6,	// (0x0003466e) list_single_number_heading_pane_vc_g1

0xe8c2,	// (0x0003467a) list_single_number_heading_pane_vc_g2_ParamLimits

0xe8c2,	// (0x0003467a) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035380) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035380) list_single_number_heading_pane_vc_g

0xec68,	// (0x00034a20) list_single_number_heading_pane_vc_t1_ParamLimits

0xec68,	// (0x00034a20) list_single_number_heading_pane_vc_t1

0xe8ce,	// (0x00034686) list_single_number_heading_pane_vc_t2_ParamLimits

0xe8ce,	// (0x00034686) list_single_number_heading_pane_vc_t2

0xe8e0,	// (0x00034698) list_single_number_heading_pane_vc_t3_ParamLimits

0xe8e0,	// (0x00034698) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x000357f5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x000357f5) list_single_number_heading_pane_vc_t

0xe8f2,	// (0x000346aa) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe8f2,	// (0x000346aa) list_single_graphic_heading_pane_vc_g1

0xe8b6,	// (0x0003466e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe8b6,	// (0x0003466e) list_single_graphic_heading_pane_vc_g4

0xe8c2,	// (0x0003467a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe8c2,	// (0x0003467a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x000357a6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x000357a6) list_single_graphic_heading_pane_vc_g

0xec68,	// (0x00034a20) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xec68,	// (0x00034a20) list_single_graphic_heading_pane_vc_t1

0xec7e,	// (0x00034a36) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xec7e,	// (0x00034a36) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa44,	// (0x000357fc) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa44,	// (0x000357fc) list_single_graphic_heading_pane_vc_t

0xe8b6,	// (0x0003466e) list_double2_pane_vc_g1_ParamLimits

0xe8b6,	// (0x0003466e) list_double2_pane_vc_g1

0xe8c2,	// (0x0003467a) list_double2_pane_vc_g2_ParamLimits

0xe8c2,	// (0x0003467a) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035380) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035380) list_double2_pane_vc_g

0xebd1,	// (0x00034989) list_double2_pane_vc_t1_ParamLimits

0xebd1,	// (0x00034989) list_double2_pane_vc_t1

0xe8fe,	// (0x000346b6) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe8fe,	// (0x000346b6) list_double2_large_graphic_pane_vc_g1

0xe90a,	// (0x000346c2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe90a,	// (0x000346c2) list_double2_large_graphic_pane_vc_g2

0xe916,	// (0x000346ce) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe916,	// (0x000346ce) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0003539d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0003539d) list_double2_large_graphic_pane_vc_g

0xe922,	// (0x000346da) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe922,	// (0x000346da) list_double2_large_graphic_pane_vc_t1

0xec90,	// (0x00034a48) list_double_time_pane_vc_g1_ParamLimits

0xec90,	// (0x00034a48) list_double_time_pane_vc_g1

0xec9c,	// (0x00034a54) list_double_time_pane_vc_g2_ParamLimits

0xec9c,	// (0x00034a54) list_double_time_pane_vc_g2

0x0001,

0xfa49,	// (0x00035801) list_double_time_pane_vc_g_ParamLimits

0xfa49,	// (0x00035801) list_double_time_pane_vc_g

0xeca8,	// (0x00034a60) list_double_time_pane_vc_t1_ParamLimits

0xeca8,	// (0x00034a60) list_double_time_pane_vc_t1

0xecd2,	// (0x00034a8a) list_double_time_pane_vc_t2_ParamLimits

0xecd2,	// (0x00034a8a) list_double_time_pane_vc_t2

0xed1b,	// (0x00034ad3) list_double_time_pane_vc_t3_ParamLimits

0xed1b,	// (0x00034ad3) list_double_time_pane_vc_t3

0xed2d,	// (0x00034ae5) list_double_time_pane_vc_t4_ParamLimits

0xed2d,	// (0x00034ae5) list_double_time_pane_vc_t4

0x0003,

0xfa4e,	// (0x00035806) list_double_time_pane_vc_t_ParamLimits

0xfa4e,	// (0x00035806) list_double_time_pane_vc_t

0xe8b6,	// (0x0003466e) list_double_pane_vc_g1_ParamLimits

0xe8b6,	// (0x0003466e) list_double_pane_vc_g1

0xe8c2,	// (0x0003467a) list_double_pane_vc_g2_ParamLimits

0xe8c2,	// (0x0003467a) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035380) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035380) list_double_pane_vc_g

0xed41,	// (0x00034af9) list_double_pane_vc_t1_ParamLimits

0xed41,	// (0x00034af9) list_double_pane_vc_t1

0xed55,	// (0x00034b0d) list_double_pane_vc_t2_ParamLimits

0xed55,	// (0x00034b0d) list_double_pane_vc_t2

0x0001,

0xfa57,	// (0x0003580f) list_double_pane_vc_t_ParamLimits

0xfa57,	// (0x0003580f) list_double_pane_vc_t

0xe8b6,	// (0x0003466e) list_double_number_pane_vc_g1_ParamLimits

0xe8b6,	// (0x0003466e) list_double_number_pane_vc_g1

0xe8c2,	// (0x0003467a) list_double_number_pane_vc_g2_ParamLimits

0xe8c2,	// (0x0003467a) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035380) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035380) list_double_number_pane_vc_g

0xed6b,	// (0x00034b23) list_double_number_pane_vc_t1_ParamLimits

0xed6b,	// (0x00034b23) list_double_number_pane_vc_t1

0xed7d,	// (0x00034b35) list_double_number_pane_vc_t2_ParamLimits

0xed7d,	// (0x00034b35) list_double_number_pane_vc_t2

0xed55,	// (0x00034b0d) list_double_number_pane_vc_t3_ParamLimits

0xed55,	// (0x00034b0d) list_double_number_pane_vc_t3

0x0002,

0xfa5c,	// (0x00035814) list_double_number_pane_vc_t_ParamLimits

0xfa5c,	// (0x00035814) list_double_number_pane_vc_t

0xed91,	// (0x00034b49) list_double_large_graphic_pane_vc_g1_ParamLimits

0xed91,	// (0x00034b49) list_double_large_graphic_pane_vc_g1

0xedb3,	// (0x00034b6b) list_double_large_graphic_pane_vc_g2_ParamLimits

0xedb3,	// (0x00034b6b) list_double_large_graphic_pane_vc_g2

0xedc7,	// (0x00034b7f) list_double_large_graphic_pane_vc_g3_ParamLimits

0xedc7,	// (0x00034b7f) list_double_large_graphic_pane_vc_g3

0xedd6,	// (0x00034b8e) list_double_large_graphic_pane_vc_g4_ParamLimits

0xedd6,	// (0x00034b8e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa63,	// (0x0003581b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x0003581b) list_double_large_graphic_pane_vc_g

0xede5,	// (0x00034b9d) list_double_large_graphic_pane_vc_t1_ParamLimits

0xede5,	// (0x00034b9d) list_double_large_graphic_pane_vc_t1

0xee01,	// (0x00034bb9) list_double_large_graphic_pane_vc_t2_ParamLimits

0xee01,	// (0x00034bb9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x00035824) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x00035824) list_double_large_graphic_pane_vc_t

0xe8b6,	// (0x0003466e) list_double_heading_pane_vc_g1_ParamLimits

0xe8b6,	// (0x0003466e) list_double_heading_pane_vc_g1

0xe8c2,	// (0x0003467a) list_double_heading_pane_vc_g2_ParamLimits

0xe8c2,	// (0x0003467a) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00035380) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00035380) list_double_heading_pane_vc_g

0xee21,	// (0x00034bd9) list_double_heading_pane_vc_t1_ParamLimits

0xee21,	// (0x00034bd9) list_double_heading_pane_vc_t1

0xee33,	// (0x00034beb) list_double_heading_pane_vc_t2_ParamLimits

0xee33,	// (0x00034beb) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x00035829) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x00035829) list_double_heading_pane_vc_t

0xee4b,	// (0x00034c03) list_double_graphic_pane_vc_g1_ParamLimits

0xee4b,	// (0x00034c03) list_double_graphic_pane_vc_g1

0xee5e,	// (0x00034c16) list_double_graphic_pane_vc_g2_ParamLimits

0xee5e,	// (0x00034c16) list_double_graphic_pane_vc_g2

0xe8b6,	// (0x0003466e) list_double_graphic_pane_vc_g3_ParamLimits

0xe8b6,	// (0x0003466e) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x0003582e) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x0003582e) list_double_graphic_pane_vc_g

0xee7b,	// (0x00034c33) list_double_graphic_pane_vc_t1_ParamLimits

0xee7b,	// (0x00034c33) list_double_graphic_pane_vc_t1

0xeea5,	// (0x00034c5d) list_double_graphic_pane_vc_t2_ParamLimits

0xeea5,	// (0x00034c5d) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x00035837) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x00035837) list_double_graphic_pane_vc_t

0xf020,	// (0x00034dd8) aid_size_cell_fastswap

0x9cc7,	// (0x0002fa7f) aid_size_cell_touch_ParamLimits

0x9cc7,	// (0x0002fa7f) aid_size_cell_touch

0xf19d,	// (0x00034f55) popup_fast_swap_wide_window_ParamLimits

0xf19d,	// (0x00034f55) popup_fast_swap_wide_window

0x9e85,	// (0x0002fc3d) touch_pane_ParamLimits

0x9e85,	// (0x0002fc3d) touch_pane

0xd108,	// (0x00032ec0) button_value_adjust_pane_cp2

0xe98b,	// (0x00034743) button_value_adjust_pane_cp4

0xe993,	// (0x0003474b) form_field_data_pane_cp2

0x9870,	// (0x0002f628) form_field_data_wide_pane_cp2

0xd454,	// (0x0003320c) bg_scroll_pane_ParamLimits

0x008e,	// (0x00025e46) scroll_handle_pane_ParamLimits

0x00a2,	// (0x00025e5a) scroll_sc2_down_pane_ParamLimits

0x00a2,	// (0x00025e5a) scroll_sc2_down_pane

0xd485,	// (0x0003323d) scroll_sc2_up_pane_ParamLimits

0xd485,	// (0x0003323d) scroll_sc2_up_pane

0xbb02,	// (0x000318ba) grid_wheel_folder_pane_g1_ParamLimits

0xbb02,	// (0x000318ba) grid_wheel_folder_pane_g1

0x03c3,	// (0x0002617b) clock_nsta_pane_cp2_ParamLimits

0x03c3,	// (0x0002617b) clock_nsta_pane_cp2

0xa566,	// (0x0003031e) listscroll_midp_pane_ParamLimits

0xa572,	// (0x0003032a) midp_canvas_pane

0x0c7d,	// (0x00026a35) nsta_clock_indic_pane

0x0cd3,	// (0x00026a8b) listscroll_form_pane_vc

0x0cf7,	// (0x00026aaf) listscroll_set_pane_vc_ParamLimits

0x0cf7,	// (0x00026aaf) listscroll_set_pane_vc

0xb098,	// (0x00030e50) clock_nsta_pane

0xb0c2,	// (0x00030e7a) indicator_nsta_pane

0x1766,	// (0x0002751e) bg_popup_sub_pane_cp2_ParamLimits

0x177a,	// (0x00027532) find_pane_cp2_ParamLimits

0x177a,	// (0x00027532) find_pane_cp2

0x1790,	// (0x00027548) grid_toobar_pane_ParamLimits

0x2c44,	// (0x000289fc) list_form_gen_pane_vc_ParamLimits

0x2c44,	// (0x000289fc) list_form_gen_pane_vc

0x2c5a,	// (0x00028a12) scroll_pane_cp8_vc_ParamLimits

0x2c5a,	// (0x00028a12) scroll_pane_cp8_vc

0x2cd6,	// (0x00028a8e) data_form_wide_pane_vc_ParamLimits

0x2cd6,	// (0x00028a8e) data_form_wide_pane_vc

0x2ce2,	// (0x00028a9a) form_field_data_wide_pane_vc_g1

0x2cea,	// (0x00028aa2) form_field_data_wide_pane_vc_t1_ParamLimits

0x2cea,	// (0x00028aa2) form_field_data_wide_pane_vc_t1

0xd11c,	// (0x00032ed4) input_focus_pane_cp6_vc_ParamLimits

0xd11c,	// (0x00032ed4) input_focus_pane_cp6_vc

0x3006,	// (0x00028dbe) list_midp_pane_ParamLimits

0x43b2,	// (0x0002a16a) scroll_pane_cp16_ParamLimits

0x43b2,	// (0x0002a16a) scroll_pane_cp16

0x3054,	// (0x00028e0c) button_value_adjust_pane_ParamLimits

0x3054,	// (0x00028e0c) button_value_adjust_pane

0xb811,	// (0x000315c9) button_value_adjust_pane_cp6_ParamLimits

0xb811,	// (0x000315c9) button_value_adjust_pane_cp6

0xb88b,	// (0x00031643) settings_code_pane_cp_ParamLimits

0xb88b,	// (0x00031643) settings_code_pane_cp

0xca78,	// (0x00032830) cell_touch_pane_g1

0xca78,	// (0x00032830) cell_touch_pane_g2

0x0001,

0xf703,	// (0x000354bb) cell_touch_pane_g

0xb9e6,	// (0x0003179e) cell_touch_pane_cp_ParamLimits

0xb9e6,	// (0x0003179e) cell_touch_pane_cp

0xba02,	// (0x000317ba) cell_touch_pane_ParamLimits

0xba02,	// (0x000317ba) cell_touch_pane

0xca78,	// (0x00032830) scroll_sc2_down_pane_g1

0xca78,	// (0x00032830) scroll_sc2_up_pane_g1

0xca82,	// (0x0003283a) bg_set_opt_pane_cp4_vc

0x4750,	// (0x0002a508) list_set_graphic_pane_vc_g1_ParamLimits

0x4750,	// (0x0002a508) list_set_graphic_pane_vc_g1

0x475c,	// (0x0002a514) list_set_graphic_pane_vc_g2_ParamLimits

0x475c,	// (0x0002a514) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x000357b2) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x000357b2) list_set_graphic_pane_vc_g

0x4768,	// (0x0002a520) text_primary_small_cp13_vc_ParamLimits

0x4768,	// (0x0002a520) text_primary_small_cp13_vc

0x0459,	// (0x00026211) list_set_graphic_pane_vc_ParamLimits

0x0459,	// (0x00026211) list_set_graphic_pane_vc

0xca82,	// (0x0003283a) input_focus_pane_cp2_vc

0xca78,	// (0x00032830) setting_code_pane_vc_g1

0xcaf5,	// (0x000328ad) setting_code_pane_vc_t1

0x4780,	// (0x0002a538) set_text_pane_vc_t1_ParamLimits

0x4780,	// (0x0002a538) set_text_pane_vc_t1

0xca82,	// (0x0003283a) input_focus_pane_cp1_vc

0x479e,	// (0x0002a556) list_set_text_pane_vc

0xca78,	// (0x00032830) setting_text_pane_vc_g1

0xca82,	// (0x0003283a) bg_set_opt_pane_cp2_vc

0xcaec,	// (0x000328a4) setting_slider_graphic_pane_vc_g1

0x47a8,	// (0x0002a560) setting_slider_graphic_pane_vc_t1

0x47ba,	// (0x0002a572) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x000357b7) setting_slider_graphic_pane_vc_t

0x47cc,	// (0x0002a584) slider_set_pane_cp_vc

0x47d6,	// (0x0002a58e) slider_set_pane_vc_g1

0x47df,	// (0x0002a597) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x000357bc) slider_set_pane_vc_g

0xd174,	// (0x00032f2c) set_opt_bg_pane_g1_copy1

0xd17c,	// (0x00032f34) set_opt_bg_pane_g2_copy1

0x480b,	// (0x0002a5c3) set_opt_bg_pane_g3_copy1

0xd18c,	// (0x00032f44) set_opt_bg_pane_g4_copy1

0xd194,	// (0x00032f4c) set_opt_bg_pane_g5_copy1

0xd19c,	// (0x00032f54) set_opt_bg_pane_g6_copy1

0x4815,	// (0x0002a5cd) set_opt_bg_pane_g7_copy1

0x481f,	// (0x0002a5d7) set_opt_bg_pane_g8_copy1

0x4829,	// (0x0002a5e1) set_opt_bg_pane_g9_copy1

0xca82,	// (0x0003283a) bg_set_opt_pane_cp_vc

0x4833,	// (0x0002a5eb) setting_slider_pane_vc_t1

0x4842,	// (0x0002a5fa) setting_slider_pane_vc_t2

0x4854,	// (0x0002a60c) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x000357cb) setting_slider_pane_vc_t

0x4866,	// (0x0002a61e) slider_set_pane_vc

0x197d,	// (0x00027735) volume_set_pane_vc_g1

0x1986,	// (0x0002773e) volume_set_pane_vc_g2

0x198f,	// (0x00027747) volume_set_pane_vc_g3

0x1998,	// (0x00027750) volume_set_pane_vc_g4

0x19a1,	// (0x00027759) volume_set_pane_vc_g5

0x19aa,	// (0x00027762) volume_set_pane_vc_g6

0x19b3,	// (0x0002776b) volume_set_pane_vc_g7

0x19bc,	// (0x00027774) volume_set_pane_vc_g8

0x19c5,	// (0x0002777d) volume_set_pane_vc_g9

0x19ce,	// (0x00027786) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x000357d2) volume_set_pane_vc_g

0x486e,	// (0x0002a626) volume_set_pane_vc

0x4878,	// (0x0002a630) button_value_adjust_pane_cp1_vc

0x4882,	// (0x0002a63a) list_highlight_pane_cp2_vc

0x488b,	// (0x0002a643) list_set_pane_vc_ParamLimits

0x488b,	// (0x0002a643) list_set_pane_vc

0x48f9,	// (0x0002a6b1) main_pane_set_vc_t1_ParamLimits

0x48f9,	// (0x0002a6b1) main_pane_set_vc_t1

0x490e,	// (0x0002a6c6) main_pane_set_vc_t2_ParamLimits

0x490e,	// (0x0002a6c6) main_pane_set_vc_t2

0x4920,	// (0x0002a6d8) main_pane_set_vc_t3_ParamLimits

0x4920,	// (0x0002a6d8) main_pane_set_vc_t3

0x4934,	// (0x0002a6ec) main_pane_set_vc_t4_ParamLimits

0x4934,	// (0x0002a6ec) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x000357e7) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x000357e7) main_pane_set_vc_t

0x4948,	// (0x0002a700) setting_code_pane_vc_ParamLimits

0x4948,	// (0x0002a700) setting_code_pane_vc

0x4959,	// (0x0002a711) setting_slider_graphic_pane_vc

0x4959,	// (0x0002a711) setting_slider_pane_vc

0x4959,	// (0x0002a711) setting_text_pane_vc

0x4959,	// (0x0002a711) setting_volume_pane_vc

0x4963,	// (0x0002a71b) scroll_pane_cp121_vc

0xd0f6,	// (0x00032eae) set_content_pane_vc

0x496b,	// (0x0002a723) button_value_adjust_pane_g1

0x4974,	// (0x0002a72c) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x0003583c) button_value_adjust_pane_g

0x497d,	// (0x0002a735) form_field_slider_wide_pane_vc_t1_ParamLimits

0x497d,	// (0x0002a735) form_field_slider_wide_pane_vc_t1

0x498f,	// (0x0002a747) form_field_slider_wide_pane_vc_t2_ParamLimits

0x498f,	// (0x0002a747) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x00035841) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x00035841) form_field_slider_wide_pane_vc_t

0xcad0,	// (0x00032888) input_focus_pane_cp10_vc_ParamLimits

0xcad0,	// (0x00032888) input_focus_pane_cp10_vc

0x49bb,	// (0x0002a773) slider_cont_pane_cp1_vc_ParamLimits

0x49bb,	// (0x0002a773) slider_cont_pane_cp1_vc

0x49cd,	// (0x0002a785) slider_form_pane_g1_cp2

0x47df,	// (0x0002a597) slider_form_pane_g2_cp2

0x49fa,	// (0x0002a7b2) form_field_slider_pane_vc_t3

0x4a08,	// (0x0002a7c0) form_field_slider_pane_vc_t4

0x4a16,	// (0x0002a7ce) slider_form_pane_vc_ParamLimits

0x4a16,	// (0x0002a7ce) slider_form_pane_vc

0x4a23,	// (0x0002a7db) form_field_slider_pane_vc_t1_ParamLimits

0x4a23,	// (0x0002a7db) form_field_slider_pane_vc_t1

0x498f,	// (0x0002a747) form_field_slider_pane_vc_t2_ParamLimits

0x498f,	// (0x0002a747) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x00035853) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x00035853) form_field_slider_pane_vc_t

0xcad0,	// (0x00032888) input_focus_pane_cp9_vc_ParamLimits

0xcad0,	// (0x00032888) input_focus_pane_cp9_vc

0x4a39,	// (0x0002a7f1) slider_cont_pane_vc_ParamLimits

0x4a39,	// (0x0002a7f1) slider_cont_pane_vc

0x4a4d,	// (0x0002a805) list_form_graphic_pane_cp_vc_ParamLimits

0x4a4d,	// (0x0002a805) list_form_graphic_pane_cp_vc

0x2ce2,	// (0x00028a9a) form_field_popup_wide_pane_vc_g1

0x4a62,	// (0x0002a81a) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4a62,	// (0x0002a81a) form_field_popup_wide_pane_vc_t1

0xd11c,	// (0x00032ed4) input_focus_pane_cp8_vc_ParamLimits

0xd11c,	// (0x00032ed4) input_focus_pane_cp8_vc

0x4aa7,	// (0x0002a85f) list_form_wide_pane_vc_ParamLimits

0x4aa7,	// (0x0002a85f) list_form_wide_pane_vc

0x4ab3,	// (0x0002a86b) list_form_graphic_pane_vc_g1

0x4abb,	// (0x0002a873) list_form_graphic_pane_vc_t1_ParamLimits

0x4abb,	// (0x0002a873) list_form_graphic_pane_vc_t1

0xcade,	// (0x00032896) list_highlight_pane_cp5_vc_ParamLimits

0xcade,	// (0x00032896) list_highlight_pane_cp5_vc

0x4ad7,	// (0x0002a88f) list_form_graphic_pane_vc_ParamLimits

0x4ad7,	// (0x0002a88f) list_form_graphic_pane_vc

0x2ce2,	// (0x00028a9a) form_field_popup_pane_vc_g1

0x4aed,	// (0x0002a8a5) form_field_popup_pane_vc_t1_ParamLimits

0x4aed,	// (0x0002a8a5) form_field_popup_pane_vc_t1

0xd11c,	// (0x00032ed4) input_focus_pane_cp7_vc_ParamLimits

0xd11c,	// (0x00032ed4) input_focus_pane_cp7_vc

0x4b04,	// (0x0002a8bc) list_form_pane_vc_ParamLimits

0x4b04,	// (0x0002a8bc) list_form_pane_vc

0x4b10,	// (0x0002a8c8) data_form_pane_vc_t1_ParamLimits

0x4b10,	// (0x0002a8c8) data_form_pane_vc_t1

0xd174,	// (0x00032f2c) input_focus_pane_vc_g1

0xd17c,	// (0x00032f34) input_focus_pane_vc_g2

0xd184,	// (0x00032f3c) input_focus_pane_vc_g3

0xd18c,	// (0x00032f44) input_focus_pane_vc_g4

0xd194,	// (0x00032f4c) input_focus_pane_vc_g5

0xd19c,	// (0x00032f54) input_focus_pane_vc_g6

0xd1a4,	// (0x00032f5c) input_focus_pane_vc_g7

0xd1ac,	// (0x00032f64) input_focus_pane_vc_g8

0xd1b4,	// (0x00032f6c) input_focus_pane_vc_g9

0xca78,	// (0x00032830) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x00035444) input_focus_pane_vc_g

0x2cd6,	// (0x00028a8e) data_form_pane_vc_ParamLimits

0x2cd6,	// (0x00028a8e) data_form_pane_vc

0x2ce2,	// (0x00028a9a) form_field_data_pane_vc_g1

0x4b2d,	// (0x0002a8e5) form_field_data_pane_vc_t1_ParamLimits

0x4b2d,	// (0x0002a8e5) form_field_data_pane_vc_t1

0xd11c,	// (0x00032ed4) input_focus_pane_vc_ParamLimits

0xd11c,	// (0x00032ed4) input_focus_pane_vc

0x4b47,	// (0x0002a8ff) button_value_adjust_pane_cp3_vc

0x4b4f,	// (0x0002a907) button_value_adjust_pane_cp5_vc

0x4b57,	// (0x0002a90f) form_field_data_pane_vc_ParamLimits

0x4b57,	// (0x0002a90f) form_field_data_pane_vc

0x4b72,	// (0x0002a92a) form_field_data_pane_vc_cp2

0x4b7a,	// (0x0002a932) form_field_data_wide_pane_vc_ParamLimits

0x4b7a,	// (0x0002a932) form_field_data_wide_pane_vc

0x4b94,	// (0x0002a94c) form_field_data_wide_pane_vc_cp2

0x4b9c,	// (0x0002a954) form_field_popup_pane_vc_ParamLimits

0x4b9c,	// (0x0002a954) form_field_popup_pane_vc

0x4bb7,	// (0x0002a96f) form_field_popup_wide_pane_vc_ParamLimits

0x4bb7,	// (0x0002a96f) form_field_popup_wide_pane_vc

0x4bd1,	// (0x0002a989) form_field_slider_pane_vc_ParamLimits

0x4bd1,	// (0x0002a989) form_field_slider_pane_vc

0x4be4,	// (0x0002a99c) form_field_slider_wide_pane_vc_ParamLimits

0x4be4,	// (0x0002a99c) form_field_slider_wide_pane_vc

0xba20,	// (0x000317d8) grid_touch_1_pane_ParamLimits

0xba20,	// (0x000317d8) grid_touch_1_pane

0xba34,	// (0x000317ec) grid_touch_2_pane_ParamLimits

0xba34,	// (0x000317ec) grid_touch_2_pane

0x4cb4,	// (0x0002aa6c) touch_pane_g1_ParamLimits

0x4cb4,	// (0x0002aa6c) touch_pane_g1

0x4c1d,	// (0x0002a9d5) cell_app_pane_cp_wide_ParamLimits

0x4c1d,	// (0x0002a9d5) cell_app_pane_cp_wide

0x4c2e,	// (0x0002a9e6) grid_popup_fast_wide_pane_ParamLimits

0x4c2e,	// (0x0002a9e6) grid_popup_fast_wide_pane

0x4c42,	// (0x0002a9fa) scroll_pane_cp19_ParamLimits

0x4c42,	// (0x0002a9fa) scroll_pane_cp19

0xca82,	// (0x0003283a) bg_popup_window_pane_cp20

0x4c56,	// (0x0002aa0e) listscroll_popup_fast_wide_pane

0xd7b4,	// (0x0003356c) grid_indicator_nsta_pane

0x4c5e,	// (0x0002aa16) clock_nsta_pane_g1

0x4c67,	// (0x0002aa1f) clock_nsta_pane_t1

0xba60,	// (0x00031818) cell_indicator_nsta_pane_ParamLimits

0xba60,	// (0x00031818) cell_indicator_nsta_pane

0x4cb4,	// (0x0002aa6c) cell_indicator_nsta_pane_g1

0xba77,	// (0x0003182f) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x00035864) cell_indicator_nsta_pane_g

0x4ccf,	// (0x0002aa87) clock_nsta_pane_cp

0x4cd8,	// (0x0002aa90) indicator_nsta_pane_cp

0x4ce0,	// (0x0002aa98) nsta_clock_indic_pane_g1

0xcb1a,	// (0x000328d2) grid_indicator_pane

0xd577,	// (0x0003332f) scroll_pane_cp29

0x02f0,	// (0x000260a8) indicator_nsta_pane_cp2_ParamLimits

0x02f0,	// (0x000260a8) indicator_nsta_pane_cp2

0xcade,	// (0x00032896) main_apps_wheel_pane

0x2ec3,	// (0x00028c7b) form_midp_field_text_pane_ParamLimits

0x3012,	// (0x00028dca) scroll_bar_cp050_ParamLimits

0x4d30,	// (0x0002aae8) cell_indicator_pane_ParamLimits

0x4d30,	// (0x0002aae8) cell_indicator_pane

0x4d48,	// (0x0002ab00) cell_indicator_pane_g1

0xba84,	// (0x0003183c) grid_wheel_folder_pane_ParamLimits

0xba84,	// (0x0003183c) grid_wheel_folder_pane

0xba92,	// (0x0003184a) list_wheel_apps_pane_ParamLimits

0xba92,	// (0x0003184a) list_wheel_apps_pane

0xbaa0,	// (0x00031858) main_apps_wheel_pane_g1_ParamLimits

0xbaa0,	// (0x00031858) main_apps_wheel_pane_g1

0xbab0,	// (0x00031868) main_apps_wheel_pane_g2_ParamLimits

0xbab0,	// (0x00031868) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x00035880) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x00035880) main_apps_wheel_pane_g

0xbac0,	// (0x00031878) main_apps_wheel_pane_t1_ParamLimits

0xbac0,	// (0x00031878) main_apps_wheel_pane_t1

0xbad8,	// (0x00031890) list_wheel_apps_pane_g1

0xbae0,	// (0x00031898) list_wheel_apps_pane_g2

0xbae8,	// (0x000318a0) list_wheel_apps_pane_g3

0xbaf0,	// (0x000318a8) list_wheel_apps_pane_g4

0xbaf8,	// (0x000318b0) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x00035885) list_wheel_apps_pane_g

0x05f9,	// (0x000263b1) navi_icon_text_pane

0xaf8a,	// (0x00030d42) aid_fill_nsta

0xbb15,	// (0x000318cd) navi_icon_text_pane_g1

0xbb21,	// (0x000318d9) navi_icon_text_pane_t1

0x0484,	// (0x0002623c) list_set_graphic_pane_t1_ParamLimits

0x0484,	// (0x0002623c) list_set_graphic_pane_t1

0x3777,	// (0x0002952f) popup_midp_note_alarm_window_t6_ParamLimits

0x3777,	// (0x0002952f) popup_midp_note_alarm_window_t6

0x3789,	// (0x00029541) popup_midp_note_alarm_window_t7_ParamLimits

0x3789,	// (0x00029541) popup_midp_note_alarm_window_t7

0x379b,	// (0x00029553) popup_midp_note_alarm_window_t8_ParamLimits

0x379b,	// (0x00029553) popup_midp_note_alarm_window_t8

0x37ad,	// (0x00029565) popup_midp_note_alarm_window_t9_ParamLimits

0x37ad,	// (0x00029565) popup_midp_note_alarm_window_t9

0x37bf,	// (0x00029577) popup_midp_note_alarm_window_t10_ParamLimits

0x37bf,	// (0x00029577) popup_midp_note_alarm_window_t10

0x37d1,	// (0x00029589) popup_midp_note_alarm_window_t11_ParamLimits

0x37d1,	// (0x00029589) popup_midp_note_alarm_window_t11

0x37e3,	// (0x0002959b) scroll_pane_cp17_ParamLimits

0x37e3,	// (0x0002959b) scroll_pane_cp17

0x197d,	// (0x00027735) volume_small_pane_cp_g1

0x1c8e,	// (0x00027a46) volume_small_pane_cp_g2

0x1c97,	// (0x00027a4f) volume_small_pane_cp_g3

0x1ca0,	// (0x00027a58) volume_small_pane_cp_g4

0x1ca9,	// (0x00027a61) volume_small_pane_cp_g5

0x1cb2,	// (0x00027a6a) volume_small_pane_cp_g6

0x1cbb,	// (0x00027a73) volume_small_pane_cp_g7

0x1cc4,	// (0x00027a7c) volume_small_pane_cp_g8

0x1ccd,	// (0x00027a85) volume_small_pane_cp_g9

0x1cd6,	// (0x00027a8e) volume_small_pane_cp_g10

0x084f,	// (0x00026607) midp_ticker_pane_g1_ParamLimits

0x085b,	// (0x00026613) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00035510) midp_ticker_pane_g_ParamLimits

0xa60a,	// (0x000303c2) midp_ticker_pane_t1_ParamLimits

0xafae,	// (0x00030d66) aid_fill_nsta_2

0x2ffe,	// (0x00028db6) list_form2_midp_pane

0x4167,	// (0x00029f1f) midp_editing_number_pane_ParamLimits

0x4176,	// (0x00029f2e) midp_ticker_pane_ParamLimits

0x4e3b,	// (0x0002abf3) form2_midp_field_pane

0x4e5f,	// (0x0002ac17) scroll_pane_cp51

0x4e7f,	// (0x0002ac37) form2_midp_button_pane_ParamLimits

0x4e7f,	// (0x0002ac37) form2_midp_button_pane

0x4e91,	// (0x0002ac49) form2_midp_content_pane_ParamLimits

0x4e91,	// (0x0002ac49) form2_midp_content_pane

0x4eab,	// (0x0002ac63) form2_midp_field_choice_group_pane

0x4eb3,	// (0x0002ac6b) form2_midp_field_pane_g1

0x4ebb,	// (0x0002ac73) form2_midp_field_pane_g2

0x4ec3,	// (0x0002ac7b) form2_midp_field_pane_g3

0x4ecb,	// (0x0002ac83) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x000358aa) form2_midp_field_pane_g

0x4ed3,	// (0x0002ac8b) form2_midp_gauge_slider_pane

0x4edb,	// (0x0002ac93) form2_midp_gauge_wait_pane

0x4ee3,	// (0x0002ac9b) form2_midp_image_pane_ParamLimits

0x4ee3,	// (0x0002ac9b) form2_midp_image_pane

0x4efe,	// (0x0002acb6) form2_midp_label_pane_ParamLimits

0x4efe,	// (0x0002acb6) form2_midp_label_pane

0xbb4f,	// (0x00031907) form2_midp_label_pane_cp_ParamLimits

0xbb4f,	// (0x00031907) form2_midp_label_pane_cp

0x4f3e,	// (0x0002acf6) form2_midp_string_pane_ParamLimits

0x4f3e,	// (0x0002acf6) form2_midp_string_pane

0xeec3,	// (0x00034c7b) form2_midp_text_pane_ParamLimits

0xeec3,	// (0x00034c7b) form2_midp_text_pane

0x4f50,	// (0x0002ad08) form2_midp_time_pane

0x4f60,	// (0x0002ad18) input_focus_pane_cp51_ParamLimits

0x4f60,	// (0x0002ad18) input_focus_pane_cp51

0x4f78,	// (0x0002ad30) form2_midp_label_pane_t1_ParamLimits

0x4f78,	// (0x0002ad30) form2_midp_label_pane_t1

0xeee4,	// (0x00034c9c) form2_mdip_text_pane_t1_ParamLimits

0xeee4,	// (0x00034c9c) form2_mdip_text_pane_t1

0xef08,	// (0x00034cc0) form2_midp_time_pane_t1

0x4fc6,	// (0x0002ad7e) form2_midp_gauge_slider_pane_t1

0xbb70,	// (0x00031928) form2_midp_gauge_slider_pane_t2

0xbb82,	// (0x0003193a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x000358b3) form2_midp_gauge_slider_pane_t

0x4ffc,	// (0x0002adb4) form2_midp_slider_pane

0x5008,	// (0x0002adc0) form2_midp_gauge_wait_pane_t1

0x5016,	// (0x0002adce) form2_midp_wait_pane_ParamLimits

0x5016,	// (0x0002adce) form2_midp_wait_pane

0x2d29,	// (0x00028ae1) list_single_2graphic_pane_cp4_ParamLimits

0x2d29,	// (0x00028ae1) list_single_2graphic_pane_cp4

0xbb94,	// (0x0003194c) list_single_midp_graphic_pane_cp_ParamLimits

0xbb94,	// (0x0003194c) list_single_midp_graphic_pane_cp

0xca82,	// (0x0003283a) list_highlight_pane_cp20

0x505a,	// (0x0002ae12) list_single_2graphic_pane_g1_cp4

0x4632,	// (0x0002a3ea) list_single_2graphic_pane_g2_cp4

0x5062,	// (0x0002ae1a) list_single_2graphic_pane_t1_cp4

0xcade,	// (0x00032896) list_highlight_pane_cp21

0x5071,	// (0x0002ae29) list_single_midp_graphic_pane_g4_cp

0x5080,	// (0x0002ae38) list_single_midp_graphic_pane_t1_cp

0xbbb5,	// (0x0003196d) form2_mdip_string_pane_t1_ParamLimits

0xbbb5,	// (0x0003196d) form2_mdip_string_pane_t1

0xca82,	// (0x0003283a) bg_wml_button_pane_cp2

0xca78,	// (0x00032830) form2_midp_image_pane_g1

0xe95c,	// (0x00034714) list_double_large_graphic_pane_g5_ParamLimits

0xe95c,	// (0x00034714) list_double_large_graphic_pane_g5

0xa566,	// (0x0003031e) midp_form_pane_ParamLimits

0xcade,	// (0x00032896) main_apps_wheel_pane_ParamLimits

0xaca4,	// (0x00030a5c) popup_preview_window_ParamLimits

0xaca4,	// (0x00030a5c) popup_preview_window

0x12c5,	// (0x0002707d) popup_touch_info_window_ParamLimits

0x12c5,	// (0x0002707d) popup_touch_info_window

0x12e7,	// (0x0002709f) popup_touch_menu_window_ParamLimits

0x12e7,	// (0x0002709f) popup_touch_menu_window

0xca6e,	// (0x00032826) bg_popup_sub_pane_cp6

0x5131,	// (0x0002aee9) list_touch_menu_pane

0x5139,	// (0x0002aef1) list_single_touch_menu_pane_ParamLimits

0x5139,	// (0x0002aef1) list_single_touch_menu_pane

0x5151,	// (0x0002af09) list_single_touch_menu_pane_t1

0xcade,	// (0x00032896) bg_popup_sub_pane_cp7_ParamLimits

0xcade,	// (0x00032896) bg_popup_sub_pane_cp7

0x515f,	// (0x0002af17) heading_sub_pane

0x5167,	// (0x0002af1f) list_touch_info_pane_ParamLimits

0x5167,	// (0x0002af1f) list_touch_info_pane

0x5176,	// (0x0002af2e) list_single_touch_info_pane_ParamLimits

0x5176,	// (0x0002af2e) list_single_touch_info_pane

0x5188,	// (0x0002af40) list_single_touch_info_pane_t1

0x5196,	// (0x0002af4e) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x000358c1) list_single_touch_info_pane_t

0x0771,	// (0x00026529) bg_popup_heading_pane_cp

0x51a4,	// (0x0002af5c) heading_sub_pane_t1

0x2c70,	// (0x00028a28) bg_popup_preview_window_pane_cp_ParamLimits

0x2c70,	// (0x00028a28) bg_popup_preview_window_pane_cp

0x515f,	// (0x0002af17) heading_preview_pane

0x5167,	// (0x0002af1f) list_preview_pane_ParamLimits

0x5167,	// (0x0002af1f) list_preview_pane

0x51b2,	// (0x0002af6a) popup_preview_window_g1

0x5176,	// (0x0002af2e) list_single_preview_pane_ParamLimits

0x5176,	// (0x0002af2e) list_single_preview_pane

0x51ba,	// (0x0002af72) list_single_preview_pane_g1

0x51c2,	// (0x0002af7a) list_single_preview_pane_t1

0x5188,	// (0x0002af40) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x000358c6) list_single_preview_pane_t

0x51d0,	// (0x0002af88) bg_popup_heading_pane_cp2_ParamLimits

0x51d0,	// (0x0002af88) bg_popup_heading_pane_cp2

0x51e6,	// (0x0002af9e) heading_preview_pane_g1

0x51ee,	// (0x0002afa6) heading_preview_pane_t1_ParamLimits

0x51ee,	// (0x0002afa6) heading_preview_pane_t1

0xcb31,	// (0x000328e9) soft_indicator_pane_t1_ParamLimits

0xd08f,	// (0x00032e47) scroll_pane_ParamLimits

0xd473,	// (0x0003322b) scroll_sc2_left_pane

0xd47c,	// (0x00033234) scroll_sc2_right_pane

0xd49b,	// (0x00033253) scroll_bg_pane_g1_ParamLimits

0xd4b0,	// (0x00033268) scroll_bg_pane_g2_ParamLimits

0xd4c8,	// (0x00033280) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0003549b) scroll_bg_pane_g_ParamLimits

0xd49b,	// (0x00033253) scroll_handle_pane_g1_ParamLimits

0xd4ea,	// (0x000332a2) scroll_handle_pane_g2_ParamLimits

0xd4c8,	// (0x00033280) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x000354a2) scroll_handle_pane_g_ParamLimits

0x0d25,	// (0x00026add) popup_choice_list_window_ParamLimits

0x0d25,	// (0x00026add) popup_choice_list_window

0x1772,	// (0x0002752a) choice_list_pane

0x1824,	// (0x000275dc) cell_toolbar_pane_t1

0x184c,	// (0x00027604) toolbar_button_pane_ParamLimits

0x3cad,	// (0x00029a65) ai_gene_pane_1_t2_ParamLimits

0x3cad,	// (0x00029a65) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x000356c5) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x000356c5) ai_gene_pane_1_t

0x520b,	// (0x0002afc3) scroll_sc2_left_pane_g1

0x520b,	// (0x0002afc3) scroll_sc2_right_pane_g1

0x0cc7,	// (0x00026a7f) bg_popup_sub_pane_cp10

0x5215,	// (0x0002afcd) list_choice_list_pane

0x4212,	// (0x00029fca) list_single_choice_list_pane_ParamLimits

0x4212,	// (0x00029fca) list_single_choice_list_pane

0x522e,	// (0x0002afe6) list_single_choice_list_pane_g1

0xd26a,	// (0x00033022) list_single_choice_list_pane_t1_ParamLimits

0xd26a,	// (0x00033022) list_single_choice_list_pane_t1

0x5236,	// (0x0002afee) choice_list_pane_g1

0x523e,	// (0x0002aff6) choice_list_pane_t1

0xca6e,	// (0x00032826) input_focus_pane_cp11

0xd3e8,	// (0x000331a0) title_pane_stacon_g2_ParamLimits

0xd3e8,	// (0x000331a0) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00035481) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00035481) title_pane_stacon_g

0x0771,	// (0x00026529) cursor_press_pane

0xa921,	// (0x000306d9) popup_fep_hwr_window_ParamLimits

0xa921,	// (0x000306d9) popup_fep_hwr_window

0x0e69,	// (0x00026c21) popup_fep_vkb_window_ParamLimits

0x0e69,	// (0x00026c21) popup_fep_vkb_window

0x524c,	// (0x0002b004) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x000358ef) fep_vkb_side_pane_g_ParamLimits

0x1d18,	// (0x00027ad0) fep_hwr_candidate_pane_ParamLimits

0x1d18,	// (0x00027ad0) fep_hwr_candidate_pane

0x1d42,	// (0x00027afa) fep_hwr_side_pane_ParamLimits

0x1d42,	// (0x00027afa) fep_hwr_side_pane

0x1d64,	// (0x00027b1c) fep_hwr_top_pane_ParamLimits

0x1d64,	// (0x00027b1c) fep_hwr_top_pane

0x1d7c,	// (0x00027b34) fep_hwr_write_pane_ParamLimits

0x1d7c,	// (0x00027b34) fep_hwr_write_pane

0xfb37,	// (0x000358ef) fep_vkb_side_pane_g

0x5254,	// (0x0002b00c) fep_hwr_top_pane_g1

0x5266,	// (0x0002b01e) fep_hwr_top_pane_g2

0x1da8,	// (0x00027b60) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x000358cb) fep_hwr_top_pane_g

0x1dbd,	// (0x00027b75) fep_hwr_top_text_pane

0xd5e4,	// (0x0003339c) fep_hwr_top_text_pane_g1

0x529c,	// (0x0002b054) fep_hwr_top_text_pane_t1

0x1ec7,	// (0x00027c7f) fep_hwr_candidate_pane_g1

0x54e7,	// (0x0002b29f) fep_vkb_keypad_pane_g3_ParamLimits

0x54e7,	// (0x0002b29f) fep_vkb_keypad_pane_g3

0x5513,	// (0x0002b2cb) fep_vkb_keypad_pane_g4_ParamLimits

0x5513,	// (0x0002b2cb) fep_vkb_keypad_pane_g4

0x558a,	// (0x0002b342) fep_vkb_bottom_pane_g2_ParamLimits

0x558a,	// (0x0002b342) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x000358f6) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x000358f6) fep_vkb_bottom_pane_g

0x520b,	// (0x0002afc3) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x00035900) cell_vkb_side_pane_g

0x5615,	// (0x0002b3cd) cell_vkb_side_pane_t1

0x5623,	// (0x0002b3db) cell_vkb_side_pane_t1_copy1

0x520b,	// (0x0002afc3) bg_fep_vkb_candidate_pane_g2

0x5767,	// (0x0002b51f) cell_vkb_candidate_pane_ParamLimits

0x52aa,	// (0x0002b062) aid_size_cell_vkb_ParamLimits

0x52aa,	// (0x0002b062) aid_size_cell_vkb

0x5767,	// (0x0002b51f) cell_vkb_candidate_pane

0x1ee1,	// (0x00027c99) bg_popup_fep_shadow_pane_g1

0xbcc6,	// (0x00031a7e) fep_vkb_bottom_pane_ParamLimits

0xbcc6,	// (0x00031a7e) fep_vkb_bottom_pane

0x5379,	// (0x0002b131) fep_vkb_candidate_pane_ParamLimits

0x5379,	// (0x0002b131) fep_vkb_candidate_pane

0xbcf2,	// (0x00031aaa) fep_vkb_keypad_pane_ParamLimits

0xbcf2,	// (0x00031aaa) fep_vkb_keypad_pane

0xbd19,	// (0x00031ad1) fep_vkb_side_pane_ParamLimits

0xbd19,	// (0x00031ad1) fep_vkb_side_pane

0xbd55,	// (0x00031b0d) fep_vkb_top_pane_ParamLimits

0xbd55,	// (0x00031b0d) fep_vkb_top_pane

0x5440,	// (0x0002b1f8) fep_vkb_top_pane_g1_ParamLimits

0x5440,	// (0x0002b1f8) fep_vkb_top_pane_g1

0x544f,	// (0x0002b207) fep_vkb_top_pane_g2_ParamLimits

0x544f,	// (0x0002b207) fep_vkb_top_pane_g2

0x545e,	// (0x0002b216) fep_vkb_top_pane_g3_ParamLimits

0x545e,	// (0x0002b216) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x000358e6) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x000358e6) fep_vkb_top_pane_g

0x547c,	// (0x0002b234) fep_vkb_top_text_pane_ParamLimits

0x547c,	// (0x0002b234) fep_vkb_top_text_pane

0xbd91,	// (0x00031b49) fep_vkb_side_pane_g1_ParamLimits

0xbd91,	// (0x00031b49) fep_vkb_side_pane_g1

0x54d6,	// (0x0002b28e) grid_vkb_side_pane_ParamLimits

0x54d6,	// (0x0002b28e) grid_vkb_side_pane

0x1ee9,	// (0x00027ca1) bg_popup_fep_shadow_pane_g2

0x1ef2,	// (0x00027caa) bg_popup_fep_shadow_pane_g3

0x1efa,	// (0x00027cb2) bg_popup_fep_shadow_pane_g4

0x1f03,	// (0x00027cbb) bg_popup_fep_shadow_pane_g5

0x1f0d,	// (0x00027cc5) bg_popup_fep_shadow_pane_g6

0x1f15,	// (0x00027ccd) bg_popup_fep_shadow_pane_g7

0xd194,	// (0x00032f4c) bg_popup_fep_shadow_pane_g8

0x5535,	// (0x0002b2ed) grid_vkb_keypad_number_pane_ParamLimits

0x5535,	// (0x0002b2ed) grid_vkb_keypad_number_pane

0x5549,	// (0x0002b301) grid_vkb_keypad_pane_ParamLimits

0x5549,	// (0x0002b301) grid_vkb_keypad_pane

0x556f,	// (0x0002b327) fep_vkb_bottom_pane_g1_ParamLimits

0x556f,	// (0x0002b327) fep_vkb_bottom_pane_g1

0x5598,	// (0x0002b350) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5598,	// (0x0002b350) grid_vkb_keypad_bottom_left_pane

0x55ad,	// (0x0002b365) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x55ad,	// (0x0002b365) grid_vkb_keypad_bottom_right_pane

0x55c2,	// (0x0002b37a) fep_vkb_top_text_pane_g1

0xbdd8,	// (0x00031b90) fep_vkb_top_text_pane_t1

0xbdea,	// (0x00031ba2) cell_vkb_side_pane_ParamLimits

0xbdea,	// (0x00031ba2) cell_vkb_side_pane

0x520b,	// (0x0002afc3) cell_vkb_side_pane_g1

0x5631,	// (0x0002b3e9) cell_vkb_keypad_pane_ParamLimits

0x5631,	// (0x0002b3e9) cell_vkb_keypad_pane

0x56be,	// (0x0002b476) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x00035913) bg_popup_fep_shadow_pane_g

0x520b,	// (0x0002afc3) cell_hwr_side_pane_g1

0x520b,	// (0x0002afc3) cell_hwr_side_pane_g2

0x56c8,	// (0x0002b480) cell_vkb_keypad_pane_t1

0xbe00,	// (0x00031bb8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbe00,	// (0x00031bb8) cell_vkb_keypad_bottom_left_pane

0xbe15,	// (0x00031bcd) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbe15,	// (0x00031bcd) cell_vkb_keypad_bottom_right_pane

0x520b,	// (0x0002afc3) cell_vkb_keypad_bottom_left_pane_g1

0x520b,	// (0x0002afc3) cell_vkb_keypad_bottom_right_pane_g1

0x572c,	// (0x0002b4e4) cell_vkb_keypad_number_pane_ParamLimits

0x572c,	// (0x0002b4e4) cell_vkb_keypad_number_pane

0x574b,	// (0x0002b503) cell_vkb_keypad_number_pane_g1

0x5755,	// (0x0002b50d) cell_vkb_keypad_number_pane_g2

0x575e,	// (0x0002b516) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x00035905) cell_vkb_keypad_number_pane_g

0x56c8,	// (0x0002b480) cell_vkb_keypad_number_pane_t1

0x5788,	// (0x0002b540) fep_vkb_candidate_pane_g1

0x0001,

0xfb48,	// (0x00035900) cell_hwr_side_pane_g

0x57a1,	// (0x0002b559) cell_hwr_side_pane_t1

0x1f27,	// (0x00027cdf) cell_hwr_side_pane_t1_copy1

0x546e,	// (0x0002b226) cell_hwr_candidate_pane_g1

0x1f35,	// (0x00027ced) cell_hwr_candidate_pane_t1

0x520b,	// (0x0002afc3) cell_vkb_candidate_pane_g2

0x5827,	// (0x0002b5df) cell_vkb_candidate_pane_t1

0x1cdf,	// (0x00027a97) bg_popup_fep_shadow_pane_ParamLimits

0x1cdf,	// (0x00027a97) bg_popup_fep_shadow_pane

0xbc3f,	// (0x000319f7) bg_fep_hwr_top_pane_g4

0x5278,	// (0x0002b030) bg_hwr_side_pane_g1_ParamLimits

0x5278,	// (0x0002b030) bg_hwr_side_pane_g1

0xbc65,	// (0x00031a1d) cell_hwr_side_pane_ParamLimits

0xbc65,	// (0x00031a1d) cell_hwr_side_pane

0x1e38,	// (0x00027bf0) fep_hwr_write_pane_g1_ParamLimits

0x1e38,	// (0x00027bf0) fep_hwr_write_pane_g1

0x1e45,	// (0x00027bfd) fep_hwr_write_pane_g2_ParamLimits

0x1e45,	// (0x00027bfd) fep_hwr_write_pane_g2

0x1e52,	// (0x00027c0a) fep_hwr_write_pane_g3_ParamLimits

0x1e52,	// (0x00027c0a) fep_hwr_write_pane_g3

0xbc85,	// (0x00031a3d) fep_hwr_write_pane_g4_ParamLimits

0xbc85,	// (0x00031a3d) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x000358d2) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x000358d2) fep_hwr_write_pane_g

0xbc3f,	// (0x000319f7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xbc3f,	// (0x000319f7) bg_fep_hwr_candidate_pane_g2

0x1e75,	// (0x00027c2d) cell_hwr_candidate_pane_ParamLimits

0x1e75,	// (0x00027c2d) cell_hwr_candidate_pane

0x1ec7,	// (0x00027c7f) fep_hwr_candidate_pane_g1_ParamLimits

0x52d8,	// (0x0002b090) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x52d8,	// (0x0002b090) bg_popup_fep_shadow_pane_cp2

0x546e,	// (0x0002b226) fep_vkb_top_pane_g4_ParamLimits

0x546e,	// (0x0002b226) fep_vkb_top_pane_g4

0x54b4,	// (0x0002b26c) fep_vkb_side_pane_g2_ParamLimits

0x54b4,	// (0x0002b26c) fep_vkb_side_pane_g2

0x9776,	// (0x0002f52e) list_setting_pane_t4_ParamLimits

0x9776,	// (0x0002f52e) list_setting_pane_t4

0x9812,	// (0x0002f5ca) list_setting_number_pane_t5_ParamLimits

0x9812,	// (0x0002f5ca) list_setting_number_pane_t5

0xd61b,	// (0x000333d3) list_double_heading_pane_cp2_ParamLimits

0xd61b,	// (0x000333d3) list_double_heading_pane_cp2

0x5835,	// (0x0002b5ed) list_double_heading_pane_g1_cp2_ParamLimits

0x5835,	// (0x0002b5ed) list_double_heading_pane_g1_cp2

0x5841,	// (0x0002b5f9) list_double_heading_pane_g2_cp2_ParamLimits

0x5841,	// (0x0002b5f9) list_double_heading_pane_g2_cp2

0x5855,	// (0x0002b60d) list_double_heading_pane_t1_cp2_ParamLimits

0x5855,	// (0x0002b60d) list_double_heading_pane_t1_cp2

0x586b,	// (0x0002b623) list_double_heading_pane_t2_cp2_ParamLimits

0x586b,	// (0x0002b623) list_double_heading_pane_t2_cp2

0x9caf,	// (0x0002fa67) aid_value_unit2

0xf1c1,	// (0x00034f79) popup_preview_fixed_window

0xcc11,	// (0x000329c9) bg_popup_preview_window_pane_cp02

0x587d,	// (0x0002b635) list_preview_fixed_pane

0x58c3,	// (0x0002b67b) list_empty_pane_fp_ParamLimits

0x58c3,	// (0x0002b67b) list_empty_pane_fp

0x58c3,	// (0x0002b67b) list_single_cale_day_pane_fp_ParamLimits

0x58c3,	// (0x0002b67b) list_single_cale_day_pane_fp

0x58c3,	// (0x0002b67b) list_single_graphic_heading_pane_fp_ParamLimits

0x58c3,	// (0x0002b67b) list_single_graphic_heading_pane_fp

0x58c3,	// (0x0002b67b) list_single_graphic_pane_fp_ParamLimits

0x58c3,	// (0x0002b67b) list_single_graphic_pane_fp

0x58c3,	// (0x0002b67b) list_single_heading_pane_fp_ParamLimits

0x58c3,	// (0x0002b67b) list_single_heading_pane_fp

0x58c3,	// (0x0002b67b) list_single_pane_fp_ParamLimits

0x58c3,	// (0x0002b67b) list_single_pane_fp

0x58dc,	// (0x0002b694) list_single_pane_fp_g1_ParamLimits

0x58dc,	// (0x0002b694) list_single_pane_fp_g1

0xef1b,	// (0x00034cd3) list_single_pane_fp_g2_ParamLimits

0xef1b,	// (0x00034cd3) list_single_pane_fp_g2

0xef27,	// (0x00034cdf) list_single_pane_fp_g3_ParamLimits

0xef27,	// (0x00034cdf) list_single_pane_fp_g3

0x58e8,	// (0x0002b6a0) list_single_pane_fp_g4_ParamLimits

0x58e8,	// (0x0002b6a0) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x00035934) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x00035934) list_single_pane_fp_g

0xef3b,	// (0x00034cf3) list_single_pane_fp_t1_ParamLimits

0xef3b,	// (0x00034cf3) list_single_pane_fp_t1

0xef52,	// (0x00034d0a) list_single_graphic_pane_fp_g1_ParamLimits

0xef52,	// (0x00034d0a) list_single_graphic_pane_fp_g1

0x58dc,	// (0x0002b694) list_single_graphic_pane_fp_g2_ParamLimits

0x58dc,	// (0x0002b694) list_single_graphic_pane_fp_g2

0xef1b,	// (0x00034cd3) list_single_graphic_pane_fp_g3_ParamLimits

0xef1b,	// (0x00034cd3) list_single_graphic_pane_fp_g3

0xef27,	// (0x00034cdf) list_single_graphic_pane_fp_g4_ParamLimits

0xef27,	// (0x00034cdf) list_single_graphic_pane_fp_g4

0x58e8,	// (0x0002b6a0) list_single_graphic_pane_fp_g5_ParamLimits

0x58e8,	// (0x0002b6a0) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x0003593d) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x0003593d) list_single_graphic_pane_fp_g

0xef5e,	// (0x00034d16) list_single_graphic_pane_fp_t1_ParamLimits

0xef5e,	// (0x00034d16) list_single_graphic_pane_fp_t1

0xef52,	// (0x00034d0a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xef52,	// (0x00034d0a) list_single_graphic_heading_pane_fp_g1

0x58dc,	// (0x0002b694) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x58dc,	// (0x0002b694) list_single_graphic_heading_pane_fp_g2

0xef1b,	// (0x00034cd3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xef1b,	// (0x00034cd3) list_single_graphic_heading_pane_fp_g3

0xef27,	// (0x00034cdf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xef27,	// (0x00034cdf) list_single_graphic_heading_pane_fp_g4

0x58e8,	// (0x0002b6a0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x58e8,	// (0x0002b6a0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0003593d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0003593d) list_single_graphic_heading_pane_fp_g

0xef74,	// (0x00034d2c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xef74,	// (0x00034d2c) list_single_graphic_heading_pane_fp_t1

0xef8a,	// (0x00034d42) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xef8a,	// (0x00034d42) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x00035948) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x00035948) list_single_graphic_heading_pane_fp_t

0xef9c,	// (0x00034d54) list_single_cale_day_pane_fp_g1_ParamLimits

0xef9c,	// (0x00034d54) list_single_cale_day_pane_fp_g1

0x58f4,	// (0x0002b6ac) list_single_cale_day_pane_fp_g2_ParamLimits

0x58f4,	// (0x0002b6ac) list_single_cale_day_pane_fp_g2

0xefd4,	// (0x00034d8c) list_single_cale_day_pane_fp_g3_ParamLimits

0xefd4,	// (0x00034d8c) list_single_cale_day_pane_fp_g3

0xf1cb,	// (0x00034f83) list_single_cale_day_pane_fp_g4_ParamLimits

0xf1cb,	// (0x00034f83) list_single_cale_day_pane_fp_g4

0xf1ef,	// (0x00034fa7) list_single_cale_day_pane_fp_g5_ParamLimits

0xf1ef,	// (0x00034fa7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x0003594d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x0003594d) list_single_cale_day_pane_fp_g

0xf213,	// (0x00034fcb) list_single_cale_day_pane_fp_t1_ParamLimits

0xf213,	// (0x00034fcb) list_single_cale_day_pane_fp_t1

0xf239,	// (0x00034ff1) list_single_cale_day_pane_fp_t2_ParamLimits

0xf239,	// (0x00034ff1) list_single_cale_day_pane_fp_t2

0xf252,	// (0x0003500a) list_single_cale_day_pane_fp_t3_ParamLimits

0xf252,	// (0x0003500a) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x00035958) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x00035958) list_single_cale_day_pane_fp_t

0x58dc,	// (0x0002b694) list_empty_pane_fp_g1_ParamLimits

0x58dc,	// (0x0002b694) list_empty_pane_fp_g1

0xf26b,	// (0x00035023) list_empty_pane_fp_t1

0xf279,	// (0x00035031) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x0003595f) list_empty_pane_fp_t

0x58dc,	// (0x0002b694) list_single_heading_pane_fp_g1_ParamLimits

0x58dc,	// (0x0002b694) list_single_heading_pane_fp_g1

0xef1b,	// (0x00034cd3) list_single_heading_pane_fp_g2_ParamLimits

0xef1b,	// (0x00034cd3) list_single_heading_pane_fp_g2

0xef27,	// (0x00034cdf) list_single_heading_pane_fp_g3_ParamLimits

0xef27,	// (0x00034cdf) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x00035964) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x00035964) list_single_heading_pane_fp_g

0xf287,	// (0x0003503f) list_single_heading_pane_fp_t1_ParamLimits

0xf287,	// (0x0003503f) list_single_heading_pane_fp_t1

0xf299,	// (0x00035051) list_single_heading_pane_fp_t2_ParamLimits

0xf299,	// (0x00035051) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x0003596b) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x0003596b) list_single_heading_pane_fp_t

0xd27f,	// (0x00033037) aid_size_cell_fast

0xcbf4,	// (0x000329ac) soft_indicator_pane_cp1_t1

0xd2bc,	// (0x00033074) cell_app_pane_cp2_ParamLimits

0xd2bc,	// (0x00033074) cell_app_pane_cp2

0x1d01,	// (0x00027ab9) fep_hwr_candidate_drop_down_list_pane

0xbc9a,	// (0x00031a52) fep_hwr_candidate_pane_g3_ParamLimits

0xbc9a,	// (0x00031a52) fep_hwr_candidate_pane_g3

0xbca7,	// (0x00031a5f) fep_hwr_candidate_pane_g4_ParamLimits

0xbca7,	// (0x00031a5f) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x000358df) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x000358df) fep_hwr_candidate_pane_g

0x5368,	// (0x0002b120) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5368,	// (0x0002b120) fep_vkb_candidate_drop_down_list_pane

0x5790,	// (0x0002b548) fep_vkb_candidate_pane_g3

0x5798,	// (0x0002b550) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x0003590c) fep_vkb_candidate_pane_g

0x546e,	// (0x0002b226) cell_hwr_candidate_pane_g1_ParamLimits

0x57af,	// (0x0002b567) cell_hwr_candidate_pane_g3_ParamLimits

0x57af,	// (0x0002b567) cell_hwr_candidate_pane_g3

0x57d0,	// (0x0002b588) cell_hwr_candidate_pane_g4_ParamLimits

0x57d0,	// (0x0002b588) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x00035926) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x00035926) cell_hwr_candidate_pane_g

0x57f1,	// (0x0002b5a9) cell_vkb_candidate_pane_g3_ParamLimits

0x57f1,	// (0x0002b5a9) cell_vkb_candidate_pane_g3

0x580c,	// (0x0002b5c4) cell_vkb_candidate_pane_g4_ParamLimits

0x580c,	// (0x0002b5c4) cell_vkb_candidate_pane_g4

0x5900,	// (0x0002b6b8) cell_app_pane_cp2_g1_ParamLimits

0x5900,	// (0x0002b6b8) cell_app_pane_cp2_g1

0x591e,	// (0x0002b6d6) cell_app_pane_cp2_g2_ParamLimits

0x591e,	// (0x0002b6d6) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x00035970) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x00035970) cell_app_pane_cp2_g

0x592a,	// (0x0002b6e2) cell_app_pane_cp2_t1_ParamLimits

0x592a,	// (0x0002b6e2) cell_app_pane_cp2_t1

0xd11c,	// (0x00032ed4) grid_highlight_pane_cp1_ParamLimits

0xd11c,	// (0x00032ed4) grid_highlight_pane_cp1

0x1f53,	// (0x00027d0b) cell_hwr_candidate_pane_cp1_ParamLimits

0x1f53,	// (0x00027d0b) cell_hwr_candidate_pane_cp1

0x546e,	// (0x0002b226) fep_hwr_candidate_drop_down_list_pane_g1

0x593c,	// (0x0002b6f4) fep_hwr_candidate_drop_down_list_pane_g2

0x5949,	// (0x0002b701) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x00035975) fep_hwr_candidate_drop_down_list_pane_g

0x1f77,	// (0x00027d2f) fep_hwr_candidate_drop_down_list_scroll_pane

0x1f80,	// (0x00027d38) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1f80,	// (0x00027d38) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1f8d,	// (0x00027d45) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1f8d,	// (0x00027d45) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1f9a,	// (0x00027d52) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1f9a,	// (0x00027d52) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x57f1,	// (0x0002b5a9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x57f1,	// (0x0002b5a9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x580c,	// (0x0002b5c4) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x580c,	// (0x0002b5c4) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1fa7,	// (0x00027d5f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1fa7,	// (0x00027d5f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1fc2,	// (0x00027d7a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1fc2,	// (0x00027d7a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1fdd,	// (0x00027d95) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1fdd,	// (0x00027d95) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x0003597c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x0003597c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5956,	// (0x0002b70e) cell_vkb_candidate_pane_cp1_ParamLimits

0x5956,	// (0x0002b70e) cell_vkb_candidate_pane_cp1

0x546e,	// (0x0002b226) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x546e,	// (0x0002b226) fep_vkb_candidate_drop_down_list_pane_g1

0x593c,	// (0x0002b6f4) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x593c,	// (0x0002b6f4) fep_vkb_candidate_drop_down_list_pane_g2

0x5949,	// (0x0002b701) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5949,	// (0x0002b701) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x00035975) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbd,	// (0x00035975) fep_vkb_candidate_drop_down_list_pane_g

0x597c,	// (0x0002b734) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x597c,	// (0x0002b734) fep_vkb_candidate_drop_down_list_scroll_pane

0x5989,	// (0x0002b741) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5989,	// (0x0002b741) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5996,	// (0x0002b74e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5996,	// (0x0002b74e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x59a2,	// (0x0002b75a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x59a2,	// (0x0002b75a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x57af,	// (0x0002b567) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x57af,	// (0x0002b567) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x57d0,	// (0x0002b588) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x57d0,	// (0x0002b588) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x59ae,	// (0x0002b766) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x59ae,	// (0x0002b766) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x59cf,	// (0x0002b787) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x59cf,	// (0x0002b787) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x59f0,	// (0x0002b7a8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x59f0,	// (0x0002b7a8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd5,	// (0x0003598d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd5,	// (0x0003598d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9edb,	// (0x0002fc93) title_pane_g1_ParamLimits

0x9eee,	// (0x0002fca6) title_pane_g2_ParamLimits

0xf54e,	// (0x00035306) title_pane_g_ParamLimits

0xd5d4,	// (0x0003338c) aid_call2_pane

0xd5dc,	// (0x00033394) aid_call_pane

0xd5e4,	// (0x0003339c) popup_clock_analogue_window_g1

0xd5e4,	// (0x0003339c) popup_clock_analogue_window_g2

0x0112,	// (0x00025eca) popup_clock_analogue_window_g3

0x011b,	// (0x00025ed3) popup_clock_analogue_window_g4

0xca78,	// (0x00032830) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x000354b0) popup_clock_analogue_window_g

0x0123,	// (0x00025edb) popup_clock_analogue_window_t1

0x0164,	// (0x00025f1c) clock_digital_number_pane_ParamLimits

0x0164,	// (0x00025f1c) clock_digital_number_pane

0x0170,	// (0x00025f28) clock_digital_number_pane_cp02_ParamLimits

0x0170,	// (0x00025f28) clock_digital_number_pane_cp02

0x017c,	// (0x00025f34) clock_digital_number_pane_cp03_ParamLimits

0x017c,	// (0x00025f34) clock_digital_number_pane_cp03

0x0188,	// (0x00025f40) clock_digital_number_pane_cp04_ParamLimits

0x0188,	// (0x00025f40) clock_digital_number_pane_cp04

0x0194,	// (0x00025f4c) clock_digital_separator_pane_ParamLimits

0x0194,	// (0x00025f4c) clock_digital_separator_pane

0x01a0,	// (0x00025f58) popup_clock_digital_window_t1_ParamLimits

0x01a0,	// (0x00025f58) popup_clock_digital_window_t1

0xca78,	// (0x00032830) clock_digital_number_pane_g1

0xca78,	// (0x00032830) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x000354bb) clock_digital_number_pane_g

0xca78,	// (0x00032830) clock_digital_separator_pane_g1

0xca78,	// (0x00032830) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x000354bb) clock_digital_separator_pane_g

0xaf8a,	// (0x00030d42) aid_fill_nsta_ParamLimits

0xb0c2,	// (0x00030e7a) indicator_nsta_pane_ParamLimits

0x160b,	// (0x000273c3) popup_clock_analogue_window

0x160b,	// (0x000273c3) popup_clock_digital_window

0xd7b4,	// (0x0003356c) grid_indicator_nsta_pane_ParamLimits

0x4c75,	// (0x0002aa2d) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x0003585f) clock_nsta_pane_t

0x007b,	// (0x00025e33) aid_size_max_handle

0xa3f7,	// (0x000301af) aid_size_min_handle

0x0771,	// (0x00026529) editor_scroll_pane

0x5a0b,	// (0x0002b7c3) ex_editor_pane

0xd245,	// (0x00032ffd) scroll_pane_cp13

0xd0bb,	// (0x00032e73) scroll_pane_cp14

0xd613,	// (0x000333cb) scroll_pane_cp36

0xa484,	// (0x0003023c) list_single_graphic_hl_pane_cp2_ParamLimits

0xa484,	// (0x0003023c) list_single_graphic_hl_pane_cp2

0xb8d4,	// (0x0003168c) list_single_graphic_hl_pane_ParamLimits

0xb8d4,	// (0x0003168c) list_single_graphic_hl_pane

0xf2af,	// (0x00035067) aid_size_min_hl_cp1

0x5a13,	// (0x0002b7cb) list_highlight_pane_cp34_ParamLimits

0x5a13,	// (0x0002b7cb) list_highlight_pane_cp34

0x5a24,	// (0x0002b7dc) list_single_graphic_hl_pane_g1_ParamLimits

0x5a24,	// (0x0002b7dc) list_single_graphic_hl_pane_g1

0x9ac6,	// (0x0002f87e) list_single_graphic_hl_pane_g2_ParamLimits

0x9ac6,	// (0x0002f87e) list_single_graphic_hl_pane_g2

0x9ac6,	// (0x0002f87e) list_single_graphic_hl_pane_g3_ParamLimits

0x9ac6,	// (0x0002f87e) list_single_graphic_hl_pane_g3

0xeffc,	// (0x00034db4) list_single_graphic_hl_pane_g4_ParamLimits

0xeffc,	// (0x00034db4) list_single_graphic_hl_pane_g4

0x9ad2,	// (0x0002f88a) list_single_graphic_hl_pane_g5_ParamLimits

0x9ad2,	// (0x0002f88a) list_single_graphic_hl_pane_g5

0x0004,

0xfbe6,	// (0x0003599e) list_single_graphic_hl_pane_g_ParamLimits

0xfbe6,	// (0x0003599e) list_single_graphic_hl_pane_g

0x9ae6,	// (0x0002f89e) list_single_graphic_hl_pane_t1_ParamLimits

0x9ae6,	// (0x0002f89e) list_single_graphic_hl_pane_t1

0x5a31,	// (0x0002b7e9) aid_size_min_hl_cp2

0x5a3a,	// (0x0002b7f2) list_highlight_pane_cp34_cp2_ParamLimits

0x5a3a,	// (0x0002b7f2) list_highlight_pane_cp34_cp2

0x5a24,	// (0x0002b7dc) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5a24,	// (0x0002b7dc) list_single_graphic_hl_pane_g1_cp2

0x5a47,	// (0x0002b7ff) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5a47,	// (0x0002b7ff) list_single_graphic_hl_pane_g2_cp2

0x5a53,	// (0x0002b80b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5a53,	// (0x0002b80b) list_single_graphic_hl_pane_g3_cp2

0x5a61,	// (0x0002b819) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5a61,	// (0x0002b819) list_single_graphic_hl_pane_g4_cp2

0x5a6d,	// (0x0002b825) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5a6d,	// (0x0002b825) list_single_graphic_hl_pane_g5_cp2

0xa71f,	// (0x000304d7) control_pane_g4_ParamLimits

0xa71f,	// (0x000304d7) control_pane_g4

0x0cc7,	// (0x00026a7f) bg_popup_sub_pane_cp10_ParamLimits

0x5215,	// (0x0002afcd) list_choice_list_pane_ParamLimits

0x5224,	// (0x0002afdc) scroll_pane_cp23

0xcc11,	// (0x000329c9) bg_popup_preview_window_pane_cp02_ParamLimits

0x587d,	// (0x0002b635) list_preview_fixed_pane_ParamLimits

0x5893,	// (0x0002b64b) list_preview_fixed_pane_cp_ParamLimits

0x5893,	// (0x0002b64b) list_preview_fixed_pane_cp

0x589f,	// (0x0002b657) popup_preview_fixed_window_g1_ParamLimits

0x589f,	// (0x0002b657) popup_preview_fixed_window_g1

0x58ab,	// (0x0002b663) popup_preview_fixed_window_g2_ParamLimits

0x58ab,	// (0x0002b663) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x0003592d) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x0003592d) popup_preview_fixed_window_g

0xf4c0,	// (0x00035278) aid_navi_side_left_pane_ParamLimits

0xf4d5,	// (0x0003528d) aid_navi_side_right_pane_ParamLimits

0xf4ed,	// (0x000352a5) navi_icon_pane_stacon_ParamLimits

0xf501,	// (0x000352b9) navi_navi_pane_stacon_ParamLimits

0xf4ed,	// (0x000352a5) navi_text_pane_stacon_ParamLimits

0xca6e,	// (0x00032826) main_text_info_pane

0x5a97,	// (0x0002b84f) listscroll_text_info_pane

0x5a9f,	// (0x0002b857) list_text_info_pane_ParamLimits

0x5a9f,	// (0x0002b857) list_text_info_pane

0x5aae,	// (0x0002b866) scroll_pane_cp24_ParamLimits

0x5aae,	// (0x0002b866) scroll_pane_cp24

0xbe30,	// (0x00031be8) list_text_info_pane_t1_ParamLimits

0xbe30,	// (0x00031be8) list_text_info_pane_t1

0xa885,	// (0x0003063d) popup_fast_swap2_window_ParamLimits

0xa885,	// (0x0003063d) popup_fast_swap2_window

0x5af1,	// (0x0002b8a9) aid_size_cell_fast2

0xca6e,	// (0x00032826) bg_popup_window_pane_cp17

0x3032,	// (0x00028dea) heading_pane_cp2

0xce40,	// (0x00032bf8) listscroll_fast2_pane

0x5afb,	// (0x0002b8b3) grid_fast2_pane

0x5b05,	// (0x0002b8bd) listscroll_fast2_pane_g1

0x5b0f,	// (0x0002b8c7) listscroll_fast2_pane_g2

0x0001,

0xfbf1,	// (0x000359a9) listscroll_fast2_pane_g

0xd245,	// (0x00032ffd) scroll_pane_cp26

0x5b19,	// (0x0002b8d1) cell_fast2_pane_ParamLimits

0x5b19,	// (0x0002b8d1) cell_fast2_pane

0x5b30,	// (0x0002b8e8) cell_fast2_pane_g1

0x5b39,	// (0x0002b8f1) cell_fast2_pane_g2

0x5b42,	// (0x0002b8fa) cell_fast2_pane_g3

0x0002,

0xfbf6,	// (0x000359ae) cell_fast2_pane_g

0xce82,	// (0x00032c3a) grid_highlight_pane_cp9

0xce97,	// (0x00032c4f) main_eswt_pane_ParamLimits

0xce97,	// (0x00032c4f) main_eswt_pane

0x5ac3,	// (0x0002b87b) list_single_text_info_pane

0x5b4a,	// (0x0002b902) eswt_ctrl_button_pane

0x5b4a,	// (0x0002b902) eswt_ctrl_canvas_pane

0x5b52,	// (0x0002b90a) eswt_ctrl_combo_pane

0x5b4a,	// (0x0002b902) eswt_ctrl_default_pane

0x5b4a,	// (0x0002b902) eswt_ctrl_label_pane

0x5b5a,	// (0x0002b912) eswt_ctrl_wait_pane

0x5b62,	// (0x0002b91a) eswt_shell_pane

0xca6e,	// (0x00032826) listscroll_eswt_app_pane

0x5b82,	// (0x0002b93a) popup_eswt_tasktip_window_ParamLimits

0x5b82,	// (0x0002b93a) popup_eswt_tasktip_window

0x2c70,	// (0x00028a28) bg_popup_window_pane_cp18

0x5b93,	// (0x0002b94b) eswt_control_pane_g1_ParamLimits

0x5b93,	// (0x0002b94b) eswt_control_pane_g1

0x5ba0,	// (0x0002b958) eswt_control_pane_g2_ParamLimits

0x5ba0,	// (0x0002b958) eswt_control_pane_g2

0x5bad,	// (0x0002b965) eswt_control_pane_g3_ParamLimits

0x5bad,	// (0x0002b965) eswt_control_pane_g3

0x5bba,	// (0x0002b972) eswt_control_pane_g4_ParamLimits

0x5bba,	// (0x0002b972) eswt_control_pane_g4

0x0003,

0xfbfd,	// (0x000359b5) eswt_control_pane_g_ParamLimits

0xfbfd,	// (0x000359b5) eswt_control_pane_g

0xd11c,	// (0x00032ed4) bg_button_pane_ParamLimits

0xd11c,	// (0x00032ed4) bg_button_pane

0xce97,	// (0x00032c4f) common_borders_pane_copy2_ParamLimits

0xce97,	// (0x00032c4f) common_borders_pane_copy2

0x5bc7,	// (0x0002b97f) control_button_pane_g1_ParamLimits

0x5bc7,	// (0x0002b97f) control_button_pane_g1

0x5bd3,	// (0x0002b98b) control_button_pane_g2_ParamLimits

0x5bd3,	// (0x0002b98b) control_button_pane_g2

0x5bdf,	// (0x0002b997) control_button_pane_g3_ParamLimits

0x5bdf,	// (0x0002b997) control_button_pane_g3

0x0002,

0xfc06,	// (0x000359be) control_button_pane_g_ParamLimits

0xfc06,	// (0x000359be) control_button_pane_g

0x5bf3,	// (0x0002b9ab) control_button_pane_t1

0x5c01,	// (0x0002b9b9) control_button_pane_t2

0x0001,

0xfc0d,	// (0x000359c5) control_button_pane_t

0x1858,	// (0x00027610) bg_button_pane_g1

0x1860,	// (0x00027618) bg_button_pane_g2

0x1868,	// (0x00027620) bg_button_pane_g3

0x2c1c,	// (0x000289d4) bg_button_pane_g4

0x1870,	// (0x00027628) bg_button_pane_g5

0x2c24,	// (0x000289dc) bg_button_pane_g6

0x2c2c,	// (0x000289e4) bg_button_pane_g7

0x2c34,	// (0x000289ec) bg_button_pane_g8

0x2c3c,	// (0x000289f4) bg_button_pane_g9

0x0008,

0xf861,	// (0x00035619) bg_button_pane_g

0x51d0,	// (0x0002af88) common_borders_pane_ParamLimits

0x51d0,	// (0x0002af88) common_borders_pane

0x5b93,	// (0x0002b94b) eswt_control_pane_g1_copy1_ParamLimits

0x5b93,	// (0x0002b94b) eswt_control_pane_g1_copy1

0x5ba0,	// (0x0002b958) eswt_control_pane_g2_copy1_ParamLimits

0x5ba0,	// (0x0002b958) eswt_control_pane_g2_copy1

0x5bad,	// (0x0002b965) eswt_control_pane_g3_copy1_ParamLimits

0x5bad,	// (0x0002b965) eswt_control_pane_g3_copy1

0x5bba,	// (0x0002b972) eswt_control_pane_g4_copy1_ParamLimits

0x5bba,	// (0x0002b972) eswt_control_pane_g4_copy1

0x520b,	// (0x0002afc3) bg_eswt_ctrl_canvas_pane_g1

0x51d0,	// (0x0002af88) common_borders_pane_cp2_ParamLimits

0x51d0,	// (0x0002af88) common_borders_pane_cp2

0x51d0,	// (0x0002af88) common_borders_pane_cp3_ParamLimits

0x51d0,	// (0x0002af88) common_borders_pane_cp3

0x5c0f,	// (0x0002b9c7) separator_horizontal_pane

0x5c17,	// (0x0002b9cf) separator_vertical_pane

0x5b93,	// (0x0002b94b) eswt_control_pane_g1_copy2_ParamLimits

0x5b93,	// (0x0002b94b) eswt_control_pane_g1_copy2

0x5ba0,	// (0x0002b958) eswt_control_pane_g2_copy2_ParamLimits

0x5ba0,	// (0x0002b958) eswt_control_pane_g2_copy2

0x5bad,	// (0x0002b965) eswt_control_pane_g3_copy2_ParamLimits

0x5bad,	// (0x0002b965) eswt_control_pane_g3_copy2

0x5bba,	// (0x0002b972) eswt_control_pane_g4_copy2_ParamLimits

0x5bba,	// (0x0002b972) eswt_control_pane_g4_copy2

0xca6e,	// (0x00032826) common_borders_pane_cp4

0x5c20,	// (0x0002b9d8) separator_horizontal_pane_g1

0x5c29,	// (0x0002b9e1) separator_horizontal_pane_g2

0x5c32,	// (0x0002b9ea) separator_horizontal_pane_g3

0x0002,

0xfc12,	// (0x000359ca) separator_horizontal_pane_g

0x5b93,	// (0x0002b94b) eswt_control_pane_g1_copy3_ParamLimits

0x5b93,	// (0x0002b94b) eswt_control_pane_g1_copy3

0x5ba0,	// (0x0002b958) eswt_control_pane_g2_copy3_ParamLimits

0x5ba0,	// (0x0002b958) eswt_control_pane_g2_copy3

0x5bad,	// (0x0002b965) eswt_control_pane_g3_copy3_ParamLimits

0x5bad,	// (0x0002b965) eswt_control_pane_g3_copy3

0x5bba,	// (0x0002b972) eswt_control_pane_g4_copy3_ParamLimits

0x5bba,	// (0x0002b972) eswt_control_pane_g4_copy3

0xca6e,	// (0x00032826) common_borders_pane_cp5

0x5c3b,	// (0x0002b9f3) separator_vertical_pane_g1

0x5c44,	// (0x0002b9fc) separator_vertical_pane_g2

0x5c4d,	// (0x0002ba05) separator_vertical_pane_g3

0x0002,

0xfc19,	// (0x000359d1) separator_vertical_pane_g

0x5b93,	// (0x0002b94b) eswt_control_pane_g1_copy4_ParamLimits

0x5b93,	// (0x0002b94b) eswt_control_pane_g1_copy4

0x5ba0,	// (0x0002b958) eswt_control_pane_g2_copy4_ParamLimits

0x5ba0,	// (0x0002b958) eswt_control_pane_g2_copy4

0x5bad,	// (0x0002b965) eswt_control_pane_g3_copy4_ParamLimits

0x5bad,	// (0x0002b965) eswt_control_pane_g3_copy4

0x5bba,	// (0x0002b972) eswt_control_pane_g4_copy4_ParamLimits

0x5bba,	// (0x0002b972) eswt_control_pane_g4_copy4

0xbe52,	// (0x00031c0a) eswt_ctrl_combo_button_pane

0xbe5a,	// (0x00031c12) eswt_ctrl_input_pane

0xbe62,	// (0x00031c1a) popup_choice_list_window_cp70

0xbe6a,	// (0x00031c22) eswt_ctrl_input_pane_t1

0xca6e,	// (0x00032826) input_focus_pane_cp70

0x51d0,	// (0x0002af88) bg_button_pane_cp70_ParamLimits

0x51d0,	// (0x0002af88) bg_button_pane_cp70

0xbe78,	// (0x00031c30) eswt_ctrl_combo_button_pane_g1

0x5c84,	// (0x0002ba3c) wait_bar_pane_cp70

0x2c70,	// (0x00028a28) bg_popup_window_pane_cp70_ParamLimits

0x2c70,	// (0x00028a28) bg_popup_window_pane_cp70

0x5c8c,	// (0x0002ba44) popup_eswt_tasktip_window_t1

0x5ca2,	// (0x0002ba5a) wait_bar_pane_cp71_ParamLimits

0x5ca2,	// (0x0002ba5a) wait_bar_pane_cp71

0x5cae,	// (0x0002ba66) grid_eswt_app_pane

0xd47c,	// (0x00033234) scroll_pane_cp70

0xbe80,	// (0x00031c38) cell_eswt_app_pane_ParamLimits

0xbe80,	// (0x00031c38) cell_eswt_app_pane

0xbeb2,	// (0x00031c6a) cell_eswt_app_pane_g1_ParamLimits

0xbeb2,	// (0x00031c6a) cell_eswt_app_pane_g1

0xbee1,	// (0x00031c99) cell_eswt_app_pane_g2_ParamLimits

0xbee1,	// (0x00031c99) cell_eswt_app_pane_g2

0x0001,

0xfc20,	// (0x000359d8) cell_eswt_app_pane_g_ParamLimits

0xfc20,	// (0x000359d8) cell_eswt_app_pane_g

0xbf0a,	// (0x00031cc2) cell_eswt_app_pane_t1_ParamLimits

0xbf0a,	// (0x00031cc2) cell_eswt_app_pane_t1

0x5d73,	// (0x0002bb2b) grid_highlight_pane_cp70_ParamLimits

0x5d73,	// (0x0002bb2b) grid_highlight_pane_cp70

0x064e,	// (0x00026406) set_content_pane_g1

0xa6b1,	// (0x00030469) status_small_volume_pane

0x1ff8,	// (0x00027db0) status_small_volume_pane_g1

0x2000,	// (0x00027db8) volume_small2_pane

0x2009,	// (0x00027dc1) volume_small2_pane_g1

0x2012,	// (0x00027dca) volume_small2_pane_g2

0x201b,	// (0x00027dd3) volume_small2_pane_g3

0x2024,	// (0x00027ddc) volume_small2_pane_g4

0x202d,	// (0x00027de5) volume_small2_pane_g5

0x2036,	// (0x00027dee) volume_small2_pane_g6

0x203f,	// (0x00027df7) volume_small2_pane_g7

0x2048,	// (0x00027e00) volume_small2_pane_g8

0x2051,	// (0x00027e09) volume_small2_pane_g9

0x205a,	// (0x00027e12) volume_small2_pane_g10

0x0009,

0xfc25,	// (0x000359dd) volume_small2_pane_g

0x55c2,	// (0x0002b37a) fep_vkb_top_text_pane_g1_ParamLimits

0xbdd8,	// (0x00031b90) fep_vkb_top_text_pane_t1_ParamLimits

0x58b7,	// (0x0002b66f) popup_preview_fixed_window_g3_ParamLimits

0x58b7,	// (0x0002b66f) popup_preview_fixed_window_g3

0xaf1d,	// (0x00030cd5) popup_toolbar_trans_pane

0xb800,	// (0x000315b8) aid_height_set_list_ParamLimits

0x3fc6,	// (0x00029d7e) aid_size_parent_ParamLimits

0x0cc7,	// (0x00026a7f) list_highlight_pane_cp2_ParamLimits

0x064e,	// (0x00026406) set_content_pane_g1_ParamLimits

0xb8e8,	// (0x000316a0) list_single_image_pane_ParamLimits

0xb8e8,	// (0x000316a0) list_single_image_pane

0xbf3c,	// (0x00031cf4) aid_size_cell_image_ParamLimits

0xbf3c,	// (0x00031cf4) aid_size_cell_image

0xbf49,	// (0x00031d01) grid_single_image_pane_ParamLimits

0xbf49,	// (0x00031d01) grid_single_image_pane

0xd12a,	// (0x00032ee2) list_single_image_pane_g1_ParamLimits

0xd12a,	// (0x00032ee2) list_single_image_pane_g1

0xd136,	// (0x00032eee) list_single_image_pane_g2_ParamLimits

0xd136,	// (0x00032eee) list_single_image_pane_g2

0x0001,

0xfc3a,	// (0x000359f2) list_single_image_pane_g_ParamLimits

0xfc3a,	// (0x000359f2) list_single_image_pane_g

0x5d9a,	// (0x0002bb52) list_single_image_pane_t1_ParamLimits

0x5d9a,	// (0x0002bb52) list_single_image_pane_t1

0xbf57,	// (0x00031d0f) cell_image_list_pane_ParamLimits

0xbf57,	// (0x00031d0f) cell_image_list_pane

0xbf6b,	// (0x00031d23) cell_image_list_pane_g1

0xbf74,	// (0x00031d2c) cell_image_list_pane_g2

0x0001,

0xfc3f,	// (0x000359f7) cell_image_list_pane_g

0x5dd8,	// (0x0002bb90) aid_size_cell_tb_trans_pane

0xd11c,	// (0x00032ed4) bg_tb_trans_pane

0x5dea,	// (0x0002bba2) grid_tb_trans_pane

0x1858,	// (0x00027610) bg_tb_trans_pane_g1

0x1860,	// (0x00027618) bg_tb_trans_pane_g2

0x1868,	// (0x00027620) bg_tb_trans_pane_g3

0x2c1c,	// (0x000289d4) bg_tb_trans_pane_g4

0x1870,	// (0x00027628) bg_tb_trans_pane_g5

0x2c34,	// (0x000289ec) bg_tb_trans_pane_g6

0x2c3c,	// (0x000289f4) bg_tb_trans_pane_g7

0x2c24,	// (0x000289dc) bg_tb_trans_pane_g8

0x2c2c,	// (0x000289e4) bg_tb_trans_pane_g9

0x0008,

0xfc44,	// (0x000359fc) bg_tb_trans_pane_g

0x5dfe,	// (0x0002bbb6) cell_toolbar_trans_pane_ParamLimits

0x5dfe,	// (0x0002bbb6) cell_toolbar_trans_pane

0x520b,	// (0x0002afc3) cell_toolbar_trans_pane_g1

0xbb33,	// (0x000318eb) list_form2_midp_pane_t1

0xbb41,	// (0x000318f9) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x000358a5) list_form2_midp_pane_t

0x4e5f,	// (0x0002ac17) scroll_pane_cp51_ParamLimits

0x5026,	// (0x0002adde) form2_midp_wait_pane_g1

0x502f,	// (0x0002ade7) form2_midp_wait_pane_g2

0x5038,	// (0x0002adf0) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x000358ba) form2_midp_wait_pane_g

0xcade,	// (0x00032896) list_highlight_pane_cp21_ParamLimits

0x5071,	// (0x0002ae29) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5080,	// (0x0002ae38) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xebe7,	// (0x0003499f) list_single_2graphic_im_pane_ParamLimits

0xebe7,	// (0x0003499f) list_single_2graphic_im_pane

0xbf7d,	// (0x00031d35) list_single_2graphic_im_pane_g1_ParamLimits

0xbf7d,	// (0x00031d35) list_single_2graphic_im_pane_g1

0xbf8e,	// (0x00031d46) list_single_2graphic_im_pane_g2_ParamLimits

0xbf8e,	// (0x00031d46) list_single_2graphic_im_pane_g2

0xbf9a,	// (0x00031d52) list_single_2graphic_im_pane_g3_ParamLimits

0xbf9a,	// (0x00031d52) list_single_2graphic_im_pane_g3

0x0003,

0xfc57,	// (0x00035a0f) list_single_2graphic_im_pane_g_ParamLimits

0xfc57,	// (0x00035a0f) list_single_2graphic_im_pane_g

0xbfae,	// (0x00031d66) list_single_2graphic_im_pane_t1_ParamLimits

0xbfae,	// (0x00031d66) list_single_2graphic_im_pane_t1

0x58c3,	// (0x0002b67b) list_single_graphic_2heading_pane_fp_ParamLimits

0x58c3,	// (0x0002b67b) list_single_graphic_2heading_pane_fp

0xef52,	// (0x00034d0a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xef52,	// (0x00034d0a) list_single_graphic_2heading_pane_fp_g1

0x58dc,	// (0x0002b694) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x58dc,	// (0x0002b694) list_single_graphic_2heading_pane_fp_g2

0xef1b,	// (0x00034cd3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xef1b,	// (0x00034cd3) list_single_graphic_2heading_pane_fp_g3

0xef27,	// (0x00034cdf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xef27,	// (0x00034cdf) list_single_graphic_2heading_pane_fp_g4

0x58e8,	// (0x0002b6a0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x58e8,	// (0x0002b6a0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0003593d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0003593d) list_single_graphic_2heading_pane_fp_g

0xf2b8,	// (0x00035070) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf2b8,	// (0x00035070) list_single_graphic_2heading_pane_fp_t1

0xef8a,	// (0x00034d42) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xef8a,	// (0x00034d42) list_single_graphic_2heading_pane_fp_t2

0xf2ce,	// (0x00035086) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf2ce,	// (0x00035086) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc60,	// (0x00035a18) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc60,	// (0x00035a18) list_single_graphic_2heading_pane_fp_t

0x5284,	// (0x0002b03c) fep_hwr_write_pane_g5_ParamLimits

0x5284,	// (0x0002b03c) fep_hwr_write_pane_g5

0x5290,	// (0x0002b048) fep_hwr_write_pane_g6_ParamLimits

0x5290,	// (0x0002b048) fep_hwr_write_pane_g6

0x5b62,	// (0x0002b91a) eswt_shell_pane_ParamLimits

0x2c70,	// (0x00028a28) bg_popup_window_pane_cp18_ParamLimits

0x3f0c,	// (0x00029cc4) heading_pane_cp70

0x5c8c,	// (0x0002ba44) popup_eswt_tasktip_window_t1_ParamLimits

0xafe7,	// (0x00030d9f) aid_touch_tab_arrow_left

0xaffd,	// (0x00030db5) aid_touch_tab_arrow_right

0x9f12,	// (0x0002fcca) title_pane_g3_ParamLimits

0x9f12,	// (0x0002fcca) title_pane_g3

0xd0db,	// (0x00032e93) set_value_pane_g1

0xaf1d,	// (0x00030cd5) popup_toolbar_trans_pane_ParamLimits

0x5dd8,	// (0x0002bb90) aid_size_cell_tb_trans_pane_ParamLimits

0xd11c,	// (0x00032ed4) bg_tb_trans_pane_ParamLimits

0x5dea,	// (0x0002bba2) grid_tb_trans_pane_ParamLimits

0xcc11,	// (0x000329c9) cont_note_pane_ParamLimits

0xcc11,	// (0x000329c9) cont_note_pane

0xce97,	// (0x00032c4f) cont_snote2_single_text_pane_ParamLimits

0xce97,	// (0x00032c4f) cont_snote2_single_text_pane

0xce97,	// (0x00032c4f) cont_snote2_single_graphic_pane_ParamLimits

0xce97,	// (0x00032c4f) cont_snote2_single_graphic_pane

0x325a,	// (0x00029012) cont_note_wait_pane_ParamLimits

0x325a,	// (0x00029012) cont_note_wait_pane

0x325a,	// (0x00029012) cont_note_image_pane_ParamLimits

0x325a,	// (0x00029012) cont_note_image_pane

0x5e92,	// (0x0002bc4a) popup_note2_window_g1_ParamLimits

0x5e92,	// (0x0002bc4a) popup_note2_window_g1

0x5ec3,	// (0x0002bc7b) popup_note2_window_t1_ParamLimits

0x5ec3,	// (0x0002bc7b) popup_note2_window_t1

0x5f08,	// (0x0002bcc0) popup_note2_window_t2_ParamLimits

0x5f08,	// (0x0002bcc0) popup_note2_window_t2

0x5f4d,	// (0x0002bd05) popup_note2_window_t3_ParamLimits

0x5f4d,	// (0x0002bd05) popup_note2_window_t3

0x5f92,	// (0x0002bd4a) popup_note2_window_t4_ParamLimits

0x5f92,	// (0x0002bd4a) popup_note2_window_t4

0xcc95,	// (0x00032a4d) popup_note2_window_t5_ParamLimits

0xcc95,	// (0x00032a4d) popup_note2_window_t5

0x0004,

0xfc6c,	// (0x00035a24) popup_note2_window_t_ParamLimits

0xfc6c,	// (0x00035a24) popup_note2_window_t

0x5fc1,	// (0x0002bd79) popup_note2_image_window_g1_ParamLimits

0x5fc1,	// (0x0002bd79) popup_note2_image_window_g1

0x5fcd,	// (0x0002bd85) popup_note2_image_window_g2_ParamLimits

0x5fcd,	// (0x0002bd85) popup_note2_image_window_g2

0x0001,

0xfc77,	// (0x00035a2f) popup_note2_image_window_g_ParamLimits

0xfc77,	// (0x00035a2f) popup_note2_image_window_g

0x5fdf,	// (0x0002bd97) popup_note2_image_window_t1_ParamLimits

0x5fdf,	// (0x0002bd97) popup_note2_image_window_t1

0x5ff7,	// (0x0002bdaf) popup_note2_image_window_t2_ParamLimits

0x5ff7,	// (0x0002bdaf) popup_note2_image_window_t2

0x600f,	// (0x0002bdc7) popup_note2_image_window_t3_ParamLimits

0x600f,	// (0x0002bdc7) popup_note2_image_window_t3

0x0002,

0xfc7c,	// (0x00035a34) popup_note2_image_window_t_ParamLimits

0xfc7c,	// (0x00035a34) popup_note2_image_window_t

0x3268,	// (0x00029020) popup_note2_wait_window_g1_ParamLimits

0x3268,	// (0x00029020) popup_note2_wait_window_g1

0x602b,	// (0x0002bde3) popup_note2_wait_window_g2_ParamLimits

0x602b,	// (0x0002bde3) popup_note2_wait_window_g2

0x3280,	// (0x00029038) popup_note2_wait_window_g3_ParamLimits

0x3280,	// (0x00029038) popup_note2_wait_window_g3

0x0002,

0xfc83,	// (0x00035a3b) popup_note2_wait_window_g_ParamLimits

0xfc83,	// (0x00035a3b) popup_note2_wait_window_g

0x6037,	// (0x0002bdef) popup_note2_wait_window_t1_ParamLimits

0x6037,	// (0x0002bdef) popup_note2_wait_window_t1

0x6055,	// (0x0002be0d) popup_note2_wait_window_t2_ParamLimits

0x6055,	// (0x0002be0d) popup_note2_wait_window_t2

0x6073,	// (0x0002be2b) popup_note2_wait_window_t3_ParamLimits

0x6073,	// (0x0002be2b) popup_note2_wait_window_t3

0x6085,	// (0x0002be3d) popup_note2_wait_window_t4_ParamLimits

0x6085,	// (0x0002be3d) popup_note2_wait_window_t4

0x0003,

0xfc8a,	// (0x00035a42) popup_note2_wait_window_t_ParamLimits

0xfc8a,	// (0x00035a42) popup_note2_wait_window_t

0x6097,	// (0x0002be4f) wait_bar2_pane_ParamLimits

0x6097,	// (0x0002be4f) wait_bar2_pane

0x60af,	// (0x0002be67) popup_snote2_single_text_window_g1_ParamLimits

0x60af,	// (0x0002be67) popup_snote2_single_text_window_g1

0x60d7,	// (0x0002be8f) popup_snote2_single_text_window_t1_ParamLimits

0x60d7,	// (0x0002be8f) popup_snote2_single_text_window_t1

0x6123,	// (0x0002bedb) popup_snote2_single_text_window_t2_ParamLimits

0x6123,	// (0x0002bedb) popup_snote2_single_text_window_t2

0x616f,	// (0x0002bf27) popup_snote2_single_text_window_t3_ParamLimits

0x616f,	// (0x0002bf27) popup_snote2_single_text_window_t3

0x61b0,	// (0x0002bf68) popup_snote2_single_text_window_t4_ParamLimits

0x61b0,	// (0x0002bf68) popup_snote2_single_text_window_t4

0x61e6,	// (0x0002bf9e) popup_snote2_single_text_window_t5_ParamLimits

0x61e6,	// (0x0002bf9e) popup_snote2_single_text_window_t5

0x0004,

0xfc93,	// (0x00035a4b) popup_snote2_single_text_window_t_ParamLimits

0xfc93,	// (0x00035a4b) popup_snote2_single_text_window_t

0x6211,	// (0x0002bfc9) popup_snote2_single_graphic_window_g1_ParamLimits

0x6211,	// (0x0002bfc9) popup_snote2_single_graphic_window_g1

0x6239,	// (0x0002bff1) popup_snote2_single_graphic_window_g2_ParamLimits

0x6239,	// (0x0002bff1) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9e,	// (0x00035a56) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9e,	// (0x00035a56) popup_snote2_single_graphic_window_g

0x6261,	// (0x0002c019) popup_snote2_single_graphic_window_t1_ParamLimits

0x6261,	// (0x0002c019) popup_snote2_single_graphic_window_t1

0x62ad,	// (0x0002c065) popup_snote2_single_graphic_window_t2_ParamLimits

0x62ad,	// (0x0002c065) popup_snote2_single_graphic_window_t2

0x616f,	// (0x0002bf27) popup_snote2_single_graphic_window_t3_ParamLimits

0x616f,	// (0x0002bf27) popup_snote2_single_graphic_window_t3

0x61b0,	// (0x0002bf68) popup_snote2_single_graphic_window_t4_ParamLimits

0x61b0,	// (0x0002bf68) popup_snote2_single_graphic_window_t4

0x61e6,	// (0x0002bf9e) popup_snote2_single_graphic_window_t5_ParamLimits

0x61e6,	// (0x0002bf9e) popup_snote2_single_graphic_window_t5

0x0004,

0xfca3,	// (0x00035a5b) popup_snote2_single_graphic_window_t_ParamLimits

0xfca3,	// (0x00035a5b) popup_snote2_single_graphic_window_t

0x4d0f,	// (0x0002aac7) clock_nsta_pane_cp2_t1

0x4d0f,	// (0x0002aac7) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x0003587b) clock_nsta_pane_cp2_t

0xe9f4,	// (0x000347ac) form_field_data_wide_pane_g1_ParamLimits

0xd12a,	// (0x00032ee2) form_field_data_wide_pane_g2_ParamLimits

0xd12a,	// (0x00032ee2) form_field_data_wide_pane_g2

0xd136,	// (0x00032eee) form_field_data_wide_pane_g3_ParamLimits

0xd136,	// (0x00032eee) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00035433) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00035433) form_field_data_wide_pane_g

0xba4a,	// (0x00031802) grid_touch_3_pane_ParamLimits

0xba4a,	// (0x00031802) grid_touch_3_pane

0xbfdf,	// (0x00031d97) cell_touch_3_pane_ParamLimits

0xbfdf,	// (0x00031d97) cell_touch_3_pane

0x520b,	// (0x0002afc3) cell_touch_3_pane_g1

0x520b,	// (0x0002afc3) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x00035900) cell_touch_3_pane_g

0xcced,	// (0x00032aa5) cont_query_data_pane

0xccf5,	// (0x00032aad) cont_query_data_pane_cp1

0x632c,	// (0x0002c0e4) button_value_adjust_pane_cp7

0x6334,	// (0x0002c0ec) query_popup_pane_cp3

0xd644,	// (0x000333fc) bg_popup_sub_pane_cp22_ParamLimits

0x0214,	// (0x00025fcc) navi_navi_volume_pane_cp2

0x022f,	// (0x00025fe7) popup_side_volume_key_window_g2

0x023e,	// (0x00025ff6) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x000354c9) popup_side_volume_key_window_g

0x025b,	// (0x00026013) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x000354d0) popup_side_volume_key_window_t

0x0509,	// (0x000262c1) popup_side_volume_key_window_ParamLimits

0x9591,	// (0x0002f349) list_double_graphic_pane_g4_ParamLimits

0x9591,	// (0x0002f349) list_double_graphic_pane_g4

0x9ab0,	// (0x0002f868) list_single_2heading_msg_pane_ParamLimits

0x9ab0,	// (0x0002f868) list_single_2heading_msg_pane

0x9afc,	// (0x0002f8b4) list_single_2heading_msg_pane_g1_ParamLimits

0x9afc,	// (0x0002f8b4) list_single_2heading_msg_pane_g1

0x9b08,	// (0x0002f8c0) list_single_2heading_msg_pane_g2_ParamLimits

0x9b08,	// (0x0002f8c0) list_single_2heading_msg_pane_g2

0x9b1b,	// (0x0002f8d3) list_single_2heading_msg_pane_g3_ParamLimits

0x9b1b,	// (0x0002f8d3) list_single_2heading_msg_pane_g3

0x9b27,	// (0x0002f8df) list_single_2heading_msg_pane_g4_ParamLimits

0x9b27,	// (0x0002f8df) list_single_2heading_msg_pane_g4

0x0003,

0xfcae,	// (0x00035a66) list_single_2heading_msg_pane_g_ParamLimits

0xfcae,	// (0x00035a66) list_single_2heading_msg_pane_g

0x9b3f,	// (0x0002f8f7) list_single_2heading_msg_pane_t1_ParamLimits

0x9b3f,	// (0x0002f8f7) list_single_2heading_msg_pane_t1

0x9b67,	// (0x0002f91f) list_single_2heading_msg_pane_t2_ParamLimits

0x9b67,	// (0x0002f91f) list_single_2heading_msg_pane_t2

0x9bd2,	// (0x0002f98a) list_single_2heading_msg_pane_t3_ParamLimits

0x9bd2,	// (0x0002f98a) list_single_2heading_msg_pane_t3

0xf2ee,	// (0x000350a6) list_single_2heading_msg_pane_t4_ParamLimits

0xf2ee,	// (0x000350a6) list_single_2heading_msg_pane_t4

0x0003,

0xfcb7,	// (0x00035a6f) list_single_2heading_msg_pane_t_ParamLimits

0xfcb7,	// (0x00035a6f) list_single_2heading_msg_pane_t

0xca8c,	// (0x00032844) title_pane_g4_ParamLimits

0xca8c,	// (0x00032844) title_pane_g4

0xf410,	// (0x000351c8) title_pane_stacon_g3_ParamLimits

0xf410,	// (0x000351c8) title_pane_stacon_g3

0x5e55,	// (0x0002bc0d) list_single_2graphic_im_pane_g4_ParamLimits

0x5e55,	// (0x0002bc0d) list_single_2graphic_im_pane_g4

0x3cca,	// (0x00029a82) popup_side_volume_key_window_cp

0x4539,	// (0x0002a2f1) main_idle_act2_pane_t1

0x1878,	// (0x00027630) toolbar_button_pane_g10

0xa28f,	// (0x00030047) popup_toolbar_window_cp1

0x4d00,	// (0x0002aab8) clock_nsta_pane_cp_t1

0x4d00,	// (0x0002aab8) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x00035876) clock_nsta_pane_cp_t

0x0214,	// (0x00025fcc) navi_navi_volume_pane_cp2_ParamLimits

0x0223,	// (0x00025fdb) popup_side_volume_key_window_g1_ParamLimits

0x022f,	// (0x00025fe7) popup_side_volume_key_window_g2_ParamLimits

0x023e,	// (0x00025ff6) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x000354c9) popup_side_volume_key_window_g_ParamLimits

0x1ced,	// (0x00027aa5) fep_hwr_aid_pane

0xbc3f,	// (0x000319f7) bg_fep_hwr_top_pane_g4_ParamLimits

0x5254,	// (0x0002b00c) fep_hwr_top_pane_g1_ParamLimits

0x5266,	// (0x0002b01e) fep_hwr_top_pane_g2_ParamLimits

0x1da8,	// (0x00027b60) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x000358cb) fep_hwr_top_pane_g_ParamLimits

0x1dbd,	// (0x00027b75) fep_hwr_top_text_pane_ParamLimits

0x3a7f,	// (0x00029837) aid_touch_tab_arrow_arrow_2

0x3a88,	// (0x00029840) aid_touch_tab_arrow_left_2

0x1d01,	// (0x00027ab9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1d38,	// (0x00027af0) fep_hwr_prediction_pane

0x53bc,	// (0x0002b174) fep_vkb_prediction_pane

0xbdb8,	// (0x00031b70) fep_vkb_side_pane_g3_ParamLimits

0xbdb8,	// (0x00031b70) fep_vkb_side_pane_g3

0x546e,	// (0x0002b226) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x593c,	// (0x0002b6f4) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5949,	// (0x0002b701) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x00035975) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x635b,	// (0x0002c113) fep_hwr_prediction_pane_g1

0x2063,	// (0x00027e1b) fep_hwr_prediction_pane_g2

0x206b,	// (0x00027e23) fep_hwr_prediction_pane_g3

0x2073,	// (0x00027e2b) fep_hwr_prediction_pane_g4

0x0003,

0xfcc0,	// (0x00035a78) fep_hwr_prediction_pane_g

0x635b,	// (0x0002c113) fep_vkb_prediction_pane_g1

0x6365,	// (0x0002c11d) fep_vkb_prediction_pane_g2

0x636d,	// (0x0002c125) fep_vkb_prediction_pane_g3

0x6375,	// (0x0002c12d) fep_vkb_prediction_pane_g4

0x0003,

0xfcc9,	// (0x00035a81) fep_vkb_prediction_pane_g

0x1b6d,	// (0x00027925) slider_set_pane_g3

0x1b81,	// (0x00027939) slider_set_pane_g4

0x1b99,	// (0x00027951) slider_set_pane_g5

0x1b6d,	// (0x00027925) slider_set_pane_g6

0x1baf,	// (0x00027967) slider_set_pane_g7

0x4145,	// (0x00029efd) slider_form_pane_g3

0x414e,	// (0x00029f06) slider_form_pane_g4

0x4156,	// (0x00029f0e) slider_form_pane_g5

0x4145,	// (0x00029efd) slider_form_pane_g6

0xb8a7,	// (0x0003165f) slider_form_pane_g7

0x47e7,	// (0x0002a59f) slider_set_pane_vc_g3

0x47f0,	// (0x0002a5a8) slider_set_pane_vc_g4

0x47f9,	// (0x0002a5b1) slider_set_pane_vc_g5

0x47e7,	// (0x0002a59f) slider_set_pane_vc_g6

0x4802,	// (0x0002a5ba) slider_set_pane_vc_g7

0x49d6,	// (0x0002a78e) slider_form_pane_vc_g1

0x49df,	// (0x0002a797) slider_form_pane_vc_g2

0x49e8,	// (0x0002a7a0) slider_form_pane_vc_g3

0x49d6,	// (0x0002a78e) slider_form_pane_vc_g4

0x49f1,	// (0x0002a7a9) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x00035848) slider_form_pane_vc_g

0xca6e,	// (0x00032826) main_idle_act3_pane

0x637d,	// (0x0002c135) ai3_links_pane

0xc02b,	// (0x00031de3) popup_ai3_data_window_ParamLimits

0xc02b,	// (0x00031de3) popup_ai3_data_window

0xca6e,	// (0x00032826) grid_ai3_links_pane

0xc049,	// (0x00031e01) cell_ai3_links_pane_ParamLimits

0xc049,	// (0x00031e01) cell_ai3_links_pane

0x63be,	// (0x0002c176) bg_popup_sub_pane_cp11

0x63cb,	// (0x0002c183) cell_ai3_links_pane_g1

0xca6e,	// (0x00032826) bg_popup_sub_pane_cp12

0x63f0,	// (0x0002c1a8) heading_ai3_data_pane

0x63f8,	// (0x0002c1b0) list_ai3_gene_pane

0x6404,	// (0x0002c1bc) popup_ai3_data_window_g1

0x640c,	// (0x0002c1c4) heading_ai3_data_pane_g1

0x6414,	// (0x0002c1cc) heading_ai3_data_pane_t1

0x6422,	// (0x0002c1da) list_double_ai3_gene_pane_ParamLimits

0x6422,	// (0x0002c1da) list_double_ai3_gene_pane

0x642f,	// (0x0002c1e7) list_single_ai3_gene_pane_ParamLimits

0x642f,	// (0x0002c1e7) list_single_ai3_gene_pane

0x51d0,	// (0x0002af88) list_highlight_pane_cp7_ParamLimits

0x51d0,	// (0x0002af88) list_highlight_pane_cp7

0x643c,	// (0x0002c1f4) list_single_a13_gene_pane_t1_ParamLimits

0x643c,	// (0x0002c1f4) list_single_a13_gene_pane_t1

0x6453,	// (0x0002c20b) list_single_ai3_gene_pane_g1

0x645c,	// (0x0002c214) list_single_ai3_gene_pane_g2

0x0001,

0xfcd2,	// (0x00035a8a) list_single_ai3_gene_pane_g

0x6464,	// (0x0002c21c) list_double_ai3_gene_pane_g1_ParamLimits

0x6464,	// (0x0002c21c) list_double_ai3_gene_pane_g1

0x6470,	// (0x0002c228) list_double_ai3_gene_pane_t1_ParamLimits

0x6470,	// (0x0002c228) list_double_ai3_gene_pane_t1

0x648c,	// (0x0002c244) list_double_ai3_gene_pane_t2_ParamLimits

0x648c,	// (0x0002c244) list_double_ai3_gene_pane_t2

0x64a1,	// (0x0002c259) list_double_ai3_gene_pane_t3_ParamLimits

0x64a1,	// (0x0002c259) list_double_ai3_gene_pane_t3

0x0002,

0xfcd7,	// (0x00035a8f) list_double_ai3_gene_pane_t_ParamLimits

0xfcd7,	// (0x00035a8f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf2e4,	// (0x0003509c) aid_size_min_col_2

0xc015,	// (0x00031dcd) aid_size_min_msg_ParamLimits

0xc015,	// (0x00031dcd) aid_size_min_msg

0xbdcc,	// (0x00031b84) fep_vkb_top_text_pane_g2_ParamLimits

0xbdcc,	// (0x00031b84) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x000358fb) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x000358fb) fep_vkb_top_text_pane_g

0xca6e,	// (0x00032826) main_hc_apps_shell_pane

0x64be,	// (0x0002c276) grid_hc_apps_pane_ParamLimits

0x64be,	// (0x0002c276) grid_hc_apps_pane

0x64cd,	// (0x0002c285) list_hc_apps_pane

0x64d5,	// (0x0002c28d) scroll_pane_cp37_ParamLimits

0x64d5,	// (0x0002c28d) scroll_pane_cp37

0xc063,	// (0x00031e1b) cell_hc_apps_pane_ParamLimits

0xc063,	// (0x00031e1b) cell_hc_apps_pane

0xc12d,	// (0x00031ee5) cell_hc_apps_pane_g1_ParamLimits

0xc12d,	// (0x00031ee5) cell_hc_apps_pane_g1

0x65ca,	// (0x0002c382) cell_hc_apps_pane_g2_ParamLimits

0x65ca,	// (0x0002c382) cell_hc_apps_pane_g2

0x65e6,	// (0x0002c39e) cell_hc_apps_pane_g3_ParamLimits

0x65e6,	// (0x0002c39e) cell_hc_apps_pane_g3

0x0002,

0xfcde,	// (0x00035a96) cell_hc_apps_pane_g_ParamLimits

0xfcde,	// (0x00035a96) cell_hc_apps_pane_g

0xc15a,	// (0x00031f12) cell_hc_apps_pane_t1_ParamLimits

0xc15a,	// (0x00031f12) cell_hc_apps_pane_t1

0xcc11,	// (0x000329c9) grid_highlight_pane_cp10_ParamLimits

0xcc11,	// (0x000329c9) grid_highlight_pane_cp10

0xc19a,	// (0x00031f52) list_single_hc_apps_pane_ParamLimits

0xc19a,	// (0x00031f52) list_single_hc_apps_pane

0xc1d4,	// (0x00031f8c) list_single_hc_apps_pane_g1

0x9c40,	// (0x0002f9f8) list_single_hc_apps_pane_g2

0x0001,

0xfce5,	// (0x00035a9d) list_single_hc_apps_pane_g

0x9c59,	// (0x0002fa11) list_single_hc_apps_pane_g2_copy1

0x9c75,	// (0x0002fa2d) list_single_hc_apps_pane_t1

0xcade,	// (0x00032896) bg_set_opt_pane_cp_ParamLimits

0xf337,	// (0x000350ef) setting_slider_pane_t1_ParamLimits

0xf350,	// (0x00035108) setting_slider_pane_t2_ParamLimits

0xf36a,	// (0x00035122) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00035316) setting_slider_pane_t_ParamLimits

0xf382,	// (0x0003513a) slider_set_pane_ParamLimits

0x0b58,	// (0x00026910) control_pane_g5_ParamLimits

0x0b58,	// (0x00026910) control_pane_g5

0x3f78,	// (0x00029d30) slider_set_pane_g1_ParamLimits

0x1b61,	// (0x00027919) slider_set_pane_g2_ParamLimits

0x1b6d,	// (0x00027925) slider_set_pane_g3_ParamLimits

0x1b81,	// (0x00027939) slider_set_pane_g4_ParamLimits

0x1b99,	// (0x00027951) slider_set_pane_g5_ParamLimits

0x1b6d,	// (0x00027925) slider_set_pane_g6_ParamLimits

0x1baf,	// (0x00027967) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x00035717) slider_set_pane_g_ParamLimits

0x05f9,	// (0x000263b1) navi_icon_text_pane_ParamLimits

0xafae,	// (0x00030d66) aid_fill_nsta_2_ParamLimits

0xafe7,	// (0x00030d9f) aid_touch_tab_arrow_left_ParamLimits

0xaffd,	// (0x00030db5) aid_touch_tab_arrow_right_ParamLimits

0xb098,	// (0x00030e50) clock_nsta_pane_ParamLimits

0xb6e7,	// (0x0003149f) navi_icon_pane_g1_ParamLimits

0xb6f3,	// (0x000314ab) navi_text_pane_t1_ParamLimits

0xbb15,	// (0x000318cd) navi_icon_text_pane_g1_ParamLimits

0xbb21,	// (0x000318d9) navi_icon_text_pane_t1_ParamLimits

0xc1d4,	// (0x00031f8c) list_single_hc_apps_pane_g1_ParamLimits

0x9c40,	// (0x0002f9f8) list_single_hc_apps_pane_g2_ParamLimits

0xfce5,	// (0x00035a9d) list_single_hc_apps_pane_g_ParamLimits

0x9c59,	// (0x0002fa11) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9c75,	// (0x0002fa2d) list_single_hc_apps_pane_t1_ParamLimits

0x9e01,	// (0x0002fbb9) popup_toolbar2_fixed_window_ParamLimits

0x9e01,	// (0x0002fbb9) popup_toolbar2_fixed_window

0xaf13,	// (0x00030ccb) popup_toolbar2_float_window

0xca6e,	// (0x00032826) bg_popup_sub_pane_cp27

0x66a0,	// (0x0002c458) grid_toolbar2_float_pane

0xca6e,	// (0x00032826) bg_popup_sub_pane_cp26

0x66a0,	// (0x0002c458) grid_toolbar2_fixed_pane

0xc1ed,	// (0x00031fa5) cell_toolbar2_fixed_pane_ParamLimits

0xc1ed,	// (0x00031fa5) cell_toolbar2_fixed_pane

0xc207,	// (0x00031fbf) cell_toolbar2_fixed_pane_g1

0x66c1,	// (0x0002c479) toolbar2_fixed_button_pane

0x1858,	// (0x00027610) toolbar2_fixed_button_pane_g1

0x1860,	// (0x00027618) toolbar2_fixed_button_pane_g2

0x1868,	// (0x00027620) toolbar2_fixed_button_pane_g3

0x2c1c,	// (0x000289d4) toolbar2_fixed_button_pane_g4

0x1870,	// (0x00027628) toolbar2_fixed_button_pane_g5

0x2c24,	// (0x000289dc) toolbar2_fixed_button_pane_g6

0x2c2c,	// (0x000289e4) toolbar2_fixed_button_pane_g7

0x2c34,	// (0x000289ec) toolbar2_fixed_button_pane_g8

0x2c3c,	// (0x000289f4) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x00035619) toolbar2_fixed_button_pane_g

0x66c9,	// (0x0002c481) cell_toolbar2_float_pane_ParamLimits

0x66c9,	// (0x0002c481) cell_toolbar2_float_pane

0x66da,	// (0x0002c492) cell_toolbar2_float_pane_g1

0x66c1,	// (0x0002c479) toolbar2_fixed_button_pane_cp

0xbcb4,	// (0x00031a6c) fep_vkb_accented_list_pane_ParamLimits

0xbcb4,	// (0x00031a6c) fep_vkb_accented_list_pane

0x1f1f,	// (0x00027cd7) bg_popup_fep_shadow_pane_g9

0x0771,	// (0x00026529) bg_popup_fep_shadow_pane_cp3

0xd22c,	// (0x00032fe4) list_accented_list_pane

0x66e3,	// (0x0002c49b) list_single_accented_list_pane_ParamLimits

0x66e3,	// (0x0002c49b) list_single_accented_list_pane

0x0771,	// (0x00026529) list_highlight_pane_cp10

0x66f4,	// (0x0002c4ac) list_single_accented_list_pane_t1

0xae31,	// (0x00030be9) popup_slider_window_ParamLimits

0xae31,	// (0x00030be9) popup_slider_window

0x633c,	// (0x0002c0f4) aid_indentation_list_msg

0xc30a,	// (0x000320c2) bg_popup_window_pane_cp19

0x6830,	// (0x0002c5e8) popup_slider_window_g1

0x684c,	// (0x0002c604) popup_slider_window_g2

0x6868,	// (0x0002c620) popup_slider_window_g3

0x0005,

0xfcea,	// (0x00035aa2) popup_slider_window_g

0x68ce,	// (0x0002c686) popup_slider_window_t1

0x6942,	// (0x0002c6fa) small_volume_slider_vertical_pane

0x520b,	// (0x0002afc3) small_volume_slider_vertical_pane_g1

0x520b,	// (0x0002afc3) small_volume_slider_vertical_pane_g2

0x695e,	// (0x0002c716) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfc,	// (0x00035ab4) small_volume_slider_vertical_pane_g

0x9d6b,	// (0x0002fb23) area_side_right_pane_ParamLimits

0x9d6b,	// (0x0002fb23) area_side_right_pane

0xc3c2,	// (0x0003217a) aid_size_side_button_ParamLimits

0xc3c2,	// (0x0003217a) aid_size_side_button

0xc3db,	// (0x00032193) grid_sctrl_middle_pane_ParamLimits

0xc3db,	// (0x00032193) grid_sctrl_middle_pane

0x20ae,	// (0x00027e66) sctrl_sk_bottom_pane

0x20bf,	// (0x00027e77) sctrl_sk_top_pane

0x20d1,	// (0x00027e89) aid_touch_sctrl_top

0xcc11,	// (0x000329c9) bg_sctrl_sk_pane_ParamLimits

0xcc11,	// (0x000329c9) bg_sctrl_sk_pane

0x20de,	// (0x00027e96) sctrl_sk_top_pane_g1

0x20eb,	// (0x00027ea3) sctrl_sk_top_pane_t1

0x20d1,	// (0x00027e89) aid_touch_sctrl_bottom

0xcc11,	// (0x000329c9) bg_sctrl_sk_pane_cp_ParamLimits

0xcc11,	// (0x000329c9) bg_sctrl_sk_pane_cp

0x2106,	// (0x00027ebe) sctrl_sk_bottom_pane_g1

0x20eb,	// (0x00027ea3) sctrl_sk_bottom_pane_t1

0xc3f5,	// (0x000321ad) cell_sctrl_middle_pane_ParamLimits

0xc3f5,	// (0x000321ad) cell_sctrl_middle_pane

0xc408,	// (0x000321c0) aid_touch_sctrl_middle_ParamLimits

0xc408,	// (0x000321c0) aid_touch_sctrl_middle

0xc415,	// (0x000321cd) bg_sctrl_middle_pane_ParamLimits

0xc415,	// (0x000321cd) bg_sctrl_middle_pane

0x69e9,	// (0x0002c7a1) cell_sctrl_middle_pane_g1_ParamLimits

0x69e9,	// (0x0002c7a1) cell_sctrl_middle_pane_g1

0xc423,	// (0x000321db) cell_sctrl_middle_pane_g2_ParamLimits

0xc423,	// (0x000321db) cell_sctrl_middle_pane_g2

0x0001,

0xfd08,	// (0x00035ac0) cell_sctrl_middle_pane_g_ParamLimits

0xfd08,	// (0x00035ac0) cell_sctrl_middle_pane_g

0x1858,	// (0x00027610) bg_sctrl_middle_pane_g1

0x1860,	// (0x00027618) bg_sctrl_middle_pane_g2

0x1868,	// (0x00027620) bg_sctrl_middle_pane_g3

0x2c1c,	// (0x000289d4) bg_sctrl_middle_pane_g4

0x1870,	// (0x00027628) bg_sctrl_middle_pane_g5

0x2c24,	// (0x000289dc) bg_sctrl_middle_pane_g6

0x2c2c,	// (0x000289e4) bg_sctrl_middle_pane_g7

0x2c34,	// (0x000289ec) bg_sctrl_middle_pane_g8

0x0007,

0xfd0d,	// (0x00035ac5) bg_sctrl_middle_pane_g

0x2c3c,	// (0x000289f4) bg_sctrl_middle_pane_g8_copy1

0x1858,	// (0x00027610) bg_sctrl_sk_pane_g1

0x1860,	// (0x00027618) bg_sctrl_sk_pane_g2

0x1868,	// (0x00027620) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x00035619) bg_sctrl_sk_pane_g

0xd055,	// (0x00032e0d) aid_size_touch_scroll_bar

0x2c1c,	// (0x000289d4) bg_sctrl_sk_pane_g4

0x1870,	// (0x00027628) bg_sctrl_sk_pane_g5

0x2c24,	// (0x000289dc) bg_sctrl_sk_pane_g6

0x2c2c,	// (0x000289e4) bg_sctrl_sk_pane_g7

0x2c34,	// (0x000289ec) bg_sctrl_sk_pane_g8

0x2c3c,	// (0x000289f4) bg_sctrl_sk_pane_g9

0x0dab,	// (0x00026b63) popup_fep_china_hwr2_fs_candidate_window

0xa8e9,	// (0x000306a1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa8e9,	// (0x000306a1) popup_fep_china_hwr2_fs_control_window

0x546e,	// (0x0002b226) sctrl_sk_top_pane_g2

0x0001,

0xfd03,	// (0x00035abb) sctrl_sk_top_pane_g

0xc42f,	// (0x000321e7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc42f,	// (0x000321e7) aid_fep_china_hwr2_fs_cell

0xc445,	// (0x000321fd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc445,	// (0x000321fd) bg_popup_fep_shadow_pane_cp4

0xc45c,	// (0x00032214) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc45c,	// (0x00032214) bg_popup_fep_shadow_pane_cp5

0xc46e,	// (0x00032226) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc46e,	// (0x00032226) popup_fep_china_hwr2_fs_control_bar_grid

0xc482,	// (0x0003223a) popup_fep_china_hwr2_fs_control_funtion_grid

0x69bd,	// (0x0002c775) aid_fep_china_hwr2_fs_candi_cell

0xca6e,	// (0x00032826) bg_popup_fep_shadow_pane_cp6

0x69c7,	// (0x0002c77f) popup_fep_china_hwr2_fs_candidate_grid

0xc48a,	// (0x00032242) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc48a,	// (0x00032242) cell_fep_china_hwr2_fs_funtion_grid

0x520b,	// (0x0002afc3) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x69e9,	// (0x0002c7a1) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x69e9,	// (0x0002c7a1) cell_fep_china_hwr2_fs_funtion_grid_g1

0x69f7,	// (0x0002c7af) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x69f7,	// (0x0002c7af) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1e,	// (0x00035ad6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1e,	// (0x00035ad6) cell_fep_china_hwr2_fs_funtion_grid_g

0xc4a2,	// (0x0003225a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc4a2,	// (0x0003225a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc4b7,	// (0x0003226f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc4b7,	// (0x0003226f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd23,	// (0x00035adb) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd23,	// (0x00035adb) cell_fep_china_hwr2_fs_funtion_grid_t

0x6a3e,	// (0x0002c7f6) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6a46,	// (0x0002c7fe) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6a4e,	// (0x0002c806) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd28,	// (0x00035ae0) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6a56,	// (0x0002c80e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6a56,	// (0x0002c80e) cell_fep_china_hwr2_fs_candidate_grid

0x6a75,	// (0x0002c82d) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6a7d,	// (0x0002c835) popup_fep_china_hwr2_fs_candidate_grid_g21

0x520b,	// (0x0002afc3) cell_fep_china_hwr2_fs_candidate_grid_g1

0x520b,	// (0x0002afc3) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x00035900) cell_fep_china_hwr2_fs_candidate_grid_g

0x6a85,	// (0x0002c83d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1410,	// (0x000271c8) clock_nsta_pane_cp_24_ParamLimits

0x1410,	// (0x000271c8) clock_nsta_pane_cp_24

0x1490,	// (0x00027248) indicator_nsta_pane_cp_24_ParamLimits

0x1490,	// (0x00027248) indicator_nsta_pane_cp_24

0x38dd,	// (0x00029695) heading_pane_g1

0x0001,

0xf8c6,	// (0x0003567e) heading_pane_g

0x4380,	// (0x0002a138) grid_sct_catagory_button_pane

0x43b2,	// (0x0002a16a) scroll_pane_cp5_ParamLimits

0x4e6b,	// (0x0002ac23) button_value_adjust_pane_cp5_ParamLimits

0x4e6b,	// (0x0002ac23) button_value_adjust_pane_cp5

0x4f50,	// (0x0002ad08) form2_midp_time_pane_ParamLimits

0x6a93,	// (0x0002c84b) cell_sct_catagory_button_pane_ParamLimits

0x6a93,	// (0x0002c84b) cell_sct_catagory_button_pane

0x51d0,	// (0x0002af88) bg_button_pane_cp01_ParamLimits

0x51d0,	// (0x0002af88) bg_button_pane_cp01

0x520b,	// (0x0002afc3) cell_sct_catagory_button_pane_g1

0xaeb0,	// (0x00030c68) popup_tb_extension_window

0xc4d3,	// (0x0003228b) aid_size_cell_ext_ParamLimits

0xc4d3,	// (0x0003228b) aid_size_cell_ext

0xce97,	// (0x00032c4f) bg_tb_trans_pane_cp1_ParamLimits

0xce97,	// (0x00032c4f) bg_tb_trans_pane_cp1

0xd7c2,	// (0x0003357a) grid_tb_ext_pane_ParamLimits

0xd7c2,	// (0x0003357a) grid_tb_ext_pane

0xd7ff,	// (0x000335b7) cell_tb_ext_pane_ParamLimits

0xd7ff,	// (0x000335b7) cell_tb_ext_pane

0xd827,	// (0x000335df) cell_tb_ext_pane_g1_ParamLimits

0xd827,	// (0x000335df) cell_tb_ext_pane_g1

0x6b27,	// (0x0002c8df) cell_tb_ext_pane_t1

0xcc11,	// (0x000329c9) list_highlight_pane_cp11_ParamLimits

0xcc11,	// (0x000329c9) list_highlight_pane_cp11

0x9e16,	// (0x0002fbce) popup_uni_indicator_window_ParamLimits

0x9e16,	// (0x0002fbce) popup_uni_indicator_window

0xd11c,	// (0x00032ed4) bg_popup_sub_pane_cp14

0x6b42,	// (0x0002c8fa) list_uniindi_pane

0x6b4e,	// (0x0002c906) uniindi_top_pane

0xcc11,	// (0x000329c9) bg_uniindi_top_pane

0x6b6f,	// (0x0002c927) uniindi_top_pane_g1

0x6b85,	// (0x0002c93d) uniindi_top_pane_g2

0x0003,

0xfd2f,	// (0x00035ae7) uniindi_top_pane_g

0x6baf,	// (0x0002c967) uniindi_top_pane_t1

0x6bdb,	// (0x0002c993) list_single_uniindi_pane_ParamLimits

0x6bdb,	// (0x0002c993) list_single_uniindi_pane

0x520b,	// (0x0002afc3) bg_uniindi_top_pane_g1

0x6bed,	// (0x0002c9a5) list_single_uniindi_pane_g1

0x6c00,	// (0x0002c9b8) list_single_uniindi_pane_t1

0xca6e,	// (0x00032826) control_bg_pane

0x6c25,	// (0x0002c9dd) bg_sctrl_sk_pane_cp1

0x6c2e,	// (0x0002c9e6) bg_sctrl_sk_pane_cp2

0x6c37,	// (0x0002c9ef) control_bg_pane_g1

0x6c40,	// (0x0002c9f8) control_bg_pane_g2

0x0001,

0xfd38,	// (0x00035af0) control_bg_pane_g

0x4cb4,	// (0x0002aa6c) cell_indicator_nsta_pane_g1_ParamLimits

0xba77,	// (0x0003182f) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x00035864) cell_indicator_nsta_pane_g_ParamLimits

0xef08,	// (0x00034cc0) form2_midp_time_pane_t1_ParamLimits

0x1cdf,	// (0x00027a97) main_idle_act4_pane_ParamLimits

0x1cdf,	// (0x00027a97) main_idle_act4_pane

0xaeb0,	// (0x00030c68) popup_tb_extension_window_ParamLimits

0xd7e7,	// (0x0003359f) tb_ext_find_pane_ParamLimits

0xd7e7,	// (0x0003359f) tb_ext_find_pane

0x6c49,	// (0x0002ca01) ai_gene_pane_1_cp1

0x08bb,	// (0x00026673) ai_gene_pane_2_cp1

0x6c51,	// (0x0002ca09) list_single_idle_plugin_calendar_pane

0x6c5a,	// (0x0002ca12) list_single_idle_plugin_notification_pane

0x6c63,	// (0x0002ca1b) list_single_idle_plugin_player_pane

0xd844,	// (0x000335fc) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd844,	// (0x000335fc) list_single_idle_plugin_shortcut_pane

0xd86c,	// (0x00033624) main_idle_act4_pane_t1

0xd884,	// (0x0003363c) main_idle_act4_pane_t2

0x0001,

0xfd3d,	// (0x00035af5) main_idle_act4_pane_t

0xd89c,	// (0x00033654) middle_sk_idle_act4_pane_ParamLimits

0xd89c,	// (0x00033654) middle_sk_idle_act4_pane

0xd8b8,	// (0x00033670) popup_clock_digital_analogue_window_cp2

0xd8df,	// (0x00033697) shortcut_wheel_idle_act4_pane_ParamLimits

0xd8df,	// (0x00033697) shortcut_wheel_idle_act4_pane

0x520b,	// (0x0002afc3) shortcut_wheel_idle_act4_pane_g1

0x520b,	// (0x0002afc3) shortcut_wheel_idle_act4_pane_g2

0x520b,	// (0x0002afc3) shortcut_wheel_idle_act4_pane_g3

0x520b,	// (0x0002afc3) shortcut_wheel_idle_act4_pane_g4

0x520b,	// (0x0002afc3) shortcut_wheel_idle_act4_pane_g5

0x6cf6,	// (0x0002caae) shortcut_wheel_idle_act4_pane_g6

0x6cfe,	// (0x0002cab6) shortcut_wheel_idle_act4_pane_g7

0x6d06,	// (0x0002cabe) shortcut_wheel_idle_act4_pane_g8

0x6d0e,	// (0x0002cac6) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd42,	// (0x00035afa) shortcut_wheel_idle_act4_pane_g

0xbc3f,	// (0x000319f7) middle_sk_idle_act4_pane_g1_ParamLimits

0xbc3f,	// (0x000319f7) middle_sk_idle_act4_pane_g1

0xd95c,	// (0x00033714) middle_sk_idle_act4_pane_g2_ParamLimits

0xd95c,	// (0x00033714) middle_sk_idle_act4_pane_g2

0x0001,

0xfd65,	// (0x00035b1d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd65,	// (0x00035b1d) middle_sk_idle_act4_pane_g

0xd974,	// (0x0003372c) middle_sk_idle_act4_pane_t1_ParamLimits

0xd974,	// (0x0003372c) middle_sk_idle_act4_pane_t1

0xd9a3,	// (0x0003375b) grid_ai_shortcut_pane_ParamLimits

0xd9a3,	// (0x0003375b) grid_ai_shortcut_pane

0xd9c0,	// (0x00033778) list_highlight_pane_cp16_ParamLimits

0xd9c0,	// (0x00033778) list_highlight_pane_cp16

0xd9cd,	// (0x00033785) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd9cd,	// (0x00033785) list_single_idle_plugin_shortcut_pane_g1

0xd9d9,	// (0x00033791) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd9d9,	// (0x00033791) list_single_idle_plugin_shortcut_pane_g2

0xd9f7,	// (0x000337af) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd9f7,	// (0x000337af) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6a,	// (0x00035b22) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6a,	// (0x00035b22) list_single_idle_plugin_shortcut_pane_g

0xda0c,	// (0x000337c4) cell_ai_shortcut_pane_ParamLimits

0xda0c,	// (0x000337c4) cell_ai_shortcut_pane

0xda22,	// (0x000337da) cell_ai_shortcut_pane_g1_ParamLimits

0xda22,	// (0x000337da) cell_ai_shortcut_pane_g1

0x6c49,	// (0x0002ca01) ai_gene_pane_1_cp2

0x6e3f,	// (0x0002cbf7) ai_gene_pane_2_cp2

0x6e47,	// (0x0002cbff) list_highlight_pane_cp15

0x6e50,	// (0x0002cc08) list_single_idle_plugin_calendar_pane_g1

0x6e47,	// (0x0002cbff) list_highlight_pane_cp17

0x6e58,	// (0x0002cc10) list_single_idle_plugin_calendar_pane_g1_copy1

0x6e60,	// (0x0002cc18) list_single_idle_plugin_player_pane_g1

0x45e7,	// (0x0002a39f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd71,	// (0x00035b29) list_single_idle_plugin_player_pane_g

0x6e68,	// (0x0002cc20) list_single_idle_plugin_player_pane_t1

0x6e76,	// (0x0002cc2e) list_single_idle_plugin_player_pane_t2

0x6e84,	// (0x0002cc3c) list_single_idle_plugin_player_pane_t3

0x6e92,	// (0x0002cc4a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd76,	// (0x00035b2e) list_single_idle_plugin_player_pane_t

0x6ea0,	// (0x0002cc58) wait_bar_pane_cp15

0x6ea8,	// (0x0002cc60) grid_ai_notification_pane

0x45e7,	// (0x0002a39f) list_single_idle_plugin_notification_pane_g1

0xda44,	// (0x000337fc) cell_ai_notification_pane_ParamLimits

0xda44,	// (0x000337fc) cell_ai_notification_pane

0x6ebe,	// (0x0002cc76) cell_ai_notification_pane_g1

0x6ec6,	// (0x0002cc7e) cell_ai_notification_pane_t1

0xda51,	// (0x00033809) tb_ext_find_button_pane

0xda59,	// (0x00033811) tb_ext_find_pane_g1

0xda61,	// (0x00033819) tb_ext_find_pane_t1

0xd5e4,	// (0x0003339c) tb_ext_find_button_pane_g1

0x6ef2,	// (0x0002ccaa) tb_ext_find_button_pane_g2

0x0001,

0xfd7f,	// (0x00035b37) tb_ext_find_button_pane_g

0xd86c,	// (0x00033624) main_idle_act4_pane_t1_ParamLimits

0xd884,	// (0x0003363c) main_idle_act4_pane_t2_ParamLimits

0xfd3d,	// (0x00035af5) main_idle_act4_pane_t_ParamLimits

0xd8b8,	// (0x00033670) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd8cf,	// (0x00033687) sat_plugin_idle_act4_pane_ParamLimits

0xd8cf,	// (0x00033687) sat_plugin_idle_act4_pane

0xda6f,	// (0x00033827) sat_plugin_idle_act4_pane_t1_ParamLimits

0xda6f,	// (0x00033827) sat_plugin_idle_act4_pane_t1

0xda87,	// (0x0003383f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xda87,	// (0x0003383f) sat_plugin_idle_act4_pane_t2

0xda9f,	// (0x00033857) sat_plugin_idle_act4_pane_t3_ParamLimits

0xda9f,	// (0x00033857) sat_plugin_idle_act4_pane_t3

0xdab7,	// (0x0003386f) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdab7,	// (0x0003386f) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd84,	// (0x00035b3c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd84,	// (0x00035b3c) sat_plugin_idle_act4_pane_t

0xf177,	// (0x00034f2f) popup_battery_window_ParamLimits

0xf177,	// (0x00034f2f) popup_battery_window

0xcc11,	// (0x000329c9) bg_popup_sub_pane_cp25_ParamLimits

0xcc11,	// (0x000329c9) bg_popup_sub_pane_cp25

0x6f47,	// (0x0002ccff) popup_battery_window_g1_ParamLimits

0x6f47,	// (0x0002ccff) popup_battery_window_g1

0x6f53,	// (0x0002cd0b) popup_battery_window_t1_ParamLimits

0x6f53,	// (0x0002cd0b) popup_battery_window_t1

0x6f65,	// (0x0002cd1d) popup_battery_window_t2_ParamLimits

0x6f65,	// (0x0002cd1d) popup_battery_window_t2

0x0001,

0xfd8d,	// (0x00035b45) popup_battery_window_t_ParamLimits

0xfd8d,	// (0x00035b45) popup_battery_window_t

0xa572,	// (0x0003032a) midp_canvas_pane_ParamLimits

0xa5ce,	// (0x00030386) midp_keypad_pane_ParamLimits

0xa5ce,	// (0x00030386) midp_keypad_pane

0x0cc7,	// (0x00026a7f) main_midp_pane_ParamLimits

0x4d1e,	// (0x0002aad6) signal_pane_g2_cp_ParamLimits

0xdacf,	// (0x00033887) aid_size_cell_midp_keypad_ParamLimits

0xdacf,	// (0x00033887) aid_size_cell_midp_keypad

0xdaed,	// (0x000338a5) midp_keyp_game_grid_pane_ParamLimits

0xdaed,	// (0x000338a5) midp_keyp_game_grid_pane

0xdb14,	// (0x000338cc) midp_keyp_rocker_pane_ParamLimits

0xdb14,	// (0x000338cc) midp_keyp_rocker_pane

0xdb63,	// (0x0003391b) midp_keyp_sk_left_pane_ParamLimits

0xdb63,	// (0x0003391b) midp_keyp_sk_left_pane

0xdbb9,	// (0x00033971) midp_keyp_sk_right_pane_ParamLimits

0xdbb9,	// (0x00033971) midp_keyp_sk_right_pane

0xca6e,	// (0x00032826) bg_button_pane_cp03

0xdc0f,	// (0x000339c7) midp_keyp_sk_left_pane_g1

0xca6e,	// (0x00032826) bg_button_pane_cp04

0xdc0f,	// (0x000339c7) midp_keyp_sk_right_pane_g1

0x520b,	// (0x0002afc3) midp_keyp_rocker_pane_g1

0xdc17,	// (0x000339cf) keyp_game_cell_pane_ParamLimits

0xdc17,	// (0x000339cf) keyp_game_cell_pane

0xca6e,	// (0x00032826) bg_button_pane_cp02

0xdc3d,	// (0x000339f5) keyp_game_cell_pane_g1

0x9dad,	// (0x0002fb65) popup_fep_vkb2_window_ParamLimits

0x9dad,	// (0x0002fb65) popup_fep_vkb2_window

0xc4f9,	// (0x000322b1) aid_size_cell_vkb2_ParamLimits

0xc4f9,	// (0x000322b1) aid_size_cell_vkb2

0xc52f,	// (0x000322e7) popup_fep_vkb2_window_g1_ParamLimits

0xc52f,	// (0x000322e7) popup_fep_vkb2_window_g1

0xc57f,	// (0x00032337) vkb2_area_bottom_pane_ParamLimits

0xc57f,	// (0x00032337) vkb2_area_bottom_pane

0xc5db,	// (0x00032393) vkb2_area_keypad_pane_ParamLimits

0xc5db,	// (0x00032393) vkb2_area_keypad_pane

0xc629,	// (0x000323e1) vkb2_area_top_pane_ParamLimits

0xc629,	// (0x000323e1) vkb2_area_top_pane

0xc6af,	// (0x00032467) vkb2_top_entry_pane_ParamLimits

0xc6af,	// (0x00032467) vkb2_top_entry_pane

0xc6dc,	// (0x00032494) vkb2_top_grid_left_pane_ParamLimits

0xc6dc,	// (0x00032494) vkb2_top_grid_left_pane

0xc6fc,	// (0x000324b4) vkb2_top_grid_right_pane_ParamLimits

0xc6fc,	// (0x000324b4) vkb2_top_grid_right_pane

0x2372,	// (0x0002812a) vkb2_cell_keypad_pane_ParamLimits

0x2372,	// (0x0002812a) vkb2_cell_keypad_pane

0xc742,	// (0x000324fa) vkb2_area_bottom_grid_pane_ParamLimits

0xc742,	// (0x000324fa) vkb2_area_bottom_grid_pane

0xc76c,	// (0x00032524) vkb2_area_bottom_pane_g1_ParamLimits

0xc76c,	// (0x00032524) vkb2_area_bottom_pane_g1

0xc792,	// (0x0003254a) vkb2_area_bottom_pane_g2_ParamLimits

0xc792,	// (0x0003254a) vkb2_area_bottom_pane_g2

0xc7c3,	// (0x0003257b) vkb2_area_bottom_pane_g3_ParamLimits

0xc7c3,	// (0x0003257b) vkb2_area_bottom_pane_g3

0x0002,

0xfd92,	// (0x00035b4a) vkb2_area_bottom_pane_g_ParamLimits

0xfd92,	// (0x00035b4a) vkb2_area_bottom_pane_g

0x251c,	// (0x000282d4) vkb2_top_cell_left_pane_ParamLimits

0x251c,	// (0x000282d4) vkb2_top_cell_left_pane

0xdc46,	// (0x000339fe) vkb2_top_entry_pane_g1_ParamLimits

0xdc46,	// (0x000339fe) vkb2_top_entry_pane_g1

0xdc54,	// (0x00033a0c) vkb2_top_entry_pane_t1_ParamLimits

0xdc54,	// (0x00033a0c) vkb2_top_entry_pane_t1

0x710f,	// (0x0002cec7) vkb2_top_entry_pane_t2_ParamLimits

0x710f,	// (0x0002cec7) vkb2_top_entry_pane_t2

0x7141,	// (0x0002cef9) vkb2_top_entry_pane_t3_ParamLimits

0x7141,	// (0x0002cef9) vkb2_top_entry_pane_t3

0x0002,

0xfd99,	// (0x00035b51) vkb2_top_entry_pane_t_ParamLimits

0xfd99,	// (0x00035b51) vkb2_top_entry_pane_t

0xc82d,	// (0x000325e5) vkb2_top_grid_right_pane_g1_ParamLimits

0xc82d,	// (0x000325e5) vkb2_top_grid_right_pane_g1

0x257f,	// (0x00028337) vkb2_top_grid_right_pane_g2_ParamLimits

0x257f,	// (0x00028337) vkb2_top_grid_right_pane_g2

0x2597,	// (0x0002834f) vkb2_top_grid_right_pane_g3_ParamLimits

0x2597,	// (0x0002834f) vkb2_top_grid_right_pane_g3

0xc843,	// (0x000325fb) vkb2_top_grid_right_pane_g4_ParamLimits

0xc843,	// (0x000325fb) vkb2_top_grid_right_pane_g4

0x0003,

0xfda0,	// (0x00035b58) vkb2_top_grid_right_pane_g_ParamLimits

0xfda0,	// (0x00035b58) vkb2_top_grid_right_pane_g

0x25c5,	// (0x0002837d) vkb2_top_cell_left_pane_g1

0x25dc,	// (0x00028394) vkb2_cell_keypad_pane_g1_ParamLimits

0x25dc,	// (0x00028394) vkb2_cell_keypad_pane_g1

0x7165,	// (0x0002cf1d) vkb2_cell_keypad_pane_t1_ParamLimits

0x7165,	// (0x0002cf1d) vkb2_cell_keypad_pane_t1

0x25ea,	// (0x000283a2) vkb2_cell_bottom_grid_pane_ParamLimits

0x25ea,	// (0x000283a2) vkb2_cell_bottom_grid_pane

0x2623,	// (0x000283db) vkb2_cell_bottom_grid_pane_g1

0xd900,	// (0x000336b8) aid_call2_pane_cp02

0xd908,	// (0x000336c0) aid_call_pane_cp02

0xd910,	// (0x000336c8) clock_digital_number_pane_cp10

0xd918,	// (0x000336d0) clock_digital_number_pane_cp11

0xd920,	// (0x000336d8) clock_digital_number_pane_cp12

0xd928,	// (0x000336e0) clock_digital_number_pane_cp13

0xd930,	// (0x000336e8) clock_digital_separator_pane_cp10

0xd5e4,	// (0x0003339c) popup_clock_digital_analogue_window_cp2_g1

0xd5e4,	// (0x0003339c) popup_clock_digital_analogue_window_cp2_g2

0xd938,	// (0x000336f0) popup_clock_digital_analogue_window_cp2_g3

0xd5e4,	// (0x0003339c) popup_clock_digital_analogue_window_cp2_g4

0xd938,	// (0x000336f0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd55,	// (0x00035b0d) popup_clock_digital_analogue_window_cp2_g

0xd940,	// (0x000336f8) popup_clock_digital_analogue_window_cp2_t1

0xd94e,	// (0x00033706) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd60,	// (0x00035b18) popup_clock_digital_analogue_window_cp2_t

0x520b,	// (0x0002afc3) clock_digital_number_pane_cp10_g1

0x520b,	// (0x0002afc3) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x00035900) clock_digital_number_pane_cp10_g

0x520b,	// (0x0002afc3) clock_digital_separator_pane_cp10_g1

0x520b,	// (0x0002afc3) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x00035900) clock_digital_separator_pane_cp10_g

0x6b91,	// (0x0002c949) uniindi_top_pane_g3

0x6ba2,	// (0x0002c95a) uniindi_top_pane_g4

0x23fd,	// (0x000281b5) vkb2_row_keypad_pane_ParamLimits

0x23fd,	// (0x000281b5) vkb2_row_keypad_pane

0x263f,	// (0x000283f7) vkb2_cell_t_keypad_pane_ParamLimits

0x263f,	// (0x000283f7) vkb2_cell_t_keypad_pane

0x264f,	// (0x00028407) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x264f,	// (0x00028407) vkb2_cell_t_keypad_pane_cp08

0x2664,	// (0x0002841c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2664,	// (0x0002841c) vkb2_cell_t_keypad_pane_cp09

0x2678,	// (0x00028430) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2678,	// (0x00028430) vkb2_cell_t_keypad_pane_cp01

0x2689,	// (0x00028441) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2689,	// (0x00028441) vkb2_cell_t_keypad_pane_cp02

0x269a,	// (0x00028452) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x269a,	// (0x00028452) vkb2_cell_t_keypad_pane_cp03

0x26ab,	// (0x00028463) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x26ab,	// (0x00028463) vkb2_cell_t_keypad_pane_cp04

0x26bc,	// (0x00028474) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x26bc,	// (0x00028474) vkb2_cell_t_keypad_pane_cp05

0x26cd,	// (0x00028485) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x26cd,	// (0x00028485) vkb2_cell_t_keypad_pane_cp06

0x26e0,	// (0x00028498) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x26e0,	// (0x00028498) vkb2_cell_t_keypad_pane_cp07

0x26f5,	// (0x000284ad) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x26f5,	// (0x000284ad) vkb2_cell_t_keypad_pane_cp10

0x546e,	// (0x0002b226) vkb2_cell_t_keypad_pane_g1

0x717c,	// (0x0002cf34) vkb2_cell_t_keypad_pane_t1

0xca6e,	// (0x00032826) popup_grid_graphic2_window

0xdc8d,	// (0x00033a45) aid_size_cell_graphic2_ParamLimits

0xdc8d,	// (0x00033a45) aid_size_cell_graphic2

0xdccb,	// (0x00033a83) bg_popup_window_pane_cp21_ParamLimits

0xdccb,	// (0x00033a83) bg_popup_window_pane_cp21

0xdcd9,	// (0x00033a91) graphic2_pages_pane_ParamLimits

0xdcd9,	// (0x00033a91) graphic2_pages_pane

0xdd31,	// (0x00033ae9) grid_graphic2_control_pane_ParamLimits

0xdd31,	// (0x00033ae9) grid_graphic2_control_pane

0xdd79,	// (0x00033b31) grid_graphic2_pane_ParamLimits

0xdd79,	// (0x00033b31) grid_graphic2_pane

0xde04,	// (0x00033bbc) cell_graphic2_pane

0xca6e,	// (0x00032826) main_comp_mode_pane

0x63f8,	// (0x0002c1b0) list_ai3_gene_pane_ParamLimits

0xc30a,	// (0x000320c2) bg_popup_window_pane_cp19_ParamLimits

0x67d0,	// (0x0002c588) bg_touch_area_indi_pane_ParamLimits

0x67d0,	// (0x0002c588) bg_touch_area_indi_pane

0x67e6,	// (0x0002c59e) bg_touch_area_indi_pane_cp01_ParamLimits

0x67e6,	// (0x0002c59e) bg_touch_area_indi_pane_cp01

0x67fc,	// (0x0002c5b4) bg_touch_area_indi_pane_cp02_ParamLimits

0x67fc,	// (0x0002c5b4) bg_touch_area_indi_pane_cp02

0x6816,	// (0x0002c5ce) bg_touch_area_indi_pane_cp03_ParamLimits

0x6816,	// (0x0002c5ce) bg_touch_area_indi_pane_cp03

0x6830,	// (0x0002c5e8) popup_slider_window_g1_ParamLimits

0x684c,	// (0x0002c604) popup_slider_window_g2_ParamLimits

0x6868,	// (0x0002c620) popup_slider_window_g3_ParamLimits

0xfcea,	// (0x00035aa2) popup_slider_window_g_ParamLimits

0x68ce,	// (0x0002c686) popup_slider_window_t1_ParamLimits

0x6942,	// (0x0002c6fa) small_volume_slider_vertical_pane_ParamLimits

0xde04,	// (0x00033bbc) cell_graphic2_pane_ParamLimits

0xde67,	// (0x00033c1f) bg_button_pane_cp10_ParamLimits

0xde67,	// (0x00033c1f) bg_button_pane_cp10

0xde7a,	// (0x00033c32) bg_button_pane_cp11_ParamLimits

0xde7a,	// (0x00033c32) bg_button_pane_cp11

0xde8d,	// (0x00033c45) graphic2_pages_pane_g1_ParamLimits

0xde8d,	// (0x00033c45) graphic2_pages_pane_g1

0xdea8,	// (0x00033c60) graphic2_pages_pane_g2_ParamLimits

0xdea8,	// (0x00033c60) graphic2_pages_pane_g2

0x0001,

0xfdae,	// (0x00035b66) graphic2_pages_pane_g_ParamLimits

0xfdae,	// (0x00035b66) graphic2_pages_pane_g

0xdec0,	// (0x00033c78) graphic2_pages_pane_t1_ParamLimits

0xdec0,	// (0x00033c78) graphic2_pages_pane_t1

0xded8,	// (0x00033c90) cell_graphic2_control_pane_ParamLimits

0xded8,	// (0x00033c90) cell_graphic2_control_pane

0xdf0c,	// (0x00033cc4) cell_graphic2_pane_g1_ParamLimits

0xdf0c,	// (0x00033cc4) cell_graphic2_pane_g1

0xbc9a,	// (0x00031a52) cell_graphic2_pane_g2_ParamLimits

0xbc9a,	// (0x00031a52) cell_graphic2_pane_g2

0xdf19,	// (0x00033cd1) cell_graphic2_pane_g3_ParamLimits

0xdf19,	// (0x00033cd1) cell_graphic2_pane_g3

0xbca7,	// (0x00031a5f) cell_graphic2_pane_g4_ParamLimits

0xbca7,	// (0x00031a5f) cell_graphic2_pane_g4

0xdf26,	// (0x00033cde) cell_graphic2_pane_g5_ParamLimits

0xdf26,	// (0x00033cde) cell_graphic2_pane_g5

0x0004,

0xfdb3,	// (0x00035b6b) cell_graphic2_pane_g_ParamLimits

0xfdb3,	// (0x00035b6b) cell_graphic2_pane_g

0xdf46,	// (0x00033cfe) cell_graphic2_pane_t1_ParamLimits

0xdf46,	// (0x00033cfe) cell_graphic2_pane_t1

0x38d1,	// (0x00029689) grid_highlight_pane_cp11_ParamLimits

0x38d1,	// (0x00029689) grid_highlight_pane_cp11

0xcc11,	// (0x000329c9) bg_button_pane_cp05

0xdf8f,	// (0x00033d47) cell_graphic2_control_pane_g1

0x520b,	// (0x0002afc3) bg_touch_area_indi_pane_g1

0x7464,	// (0x0002d21c) aid_cmod_rocker_key_size

0x746e,	// (0x0002d226) aid_cmode_itu_key_size

0x7478,	// (0x0002d230) main_cmode_video_pane

0x7482,	// (0x0002d23a) main_comp_mode_itu_pane

0x748e,	// (0x0002d246) main_comp_mode_rocker_pane

0x749a,	// (0x0002d252) cell_cmode_rocker_pane_ParamLimits

0x749a,	// (0x0002d252) cell_cmode_rocker_pane

0x74ae,	// (0x0002d266) cell_cmode_itu_pane_ParamLimits

0x74ae,	// (0x0002d266) cell_cmode_itu_pane

0xd11c,	// (0x00032ed4) bg_button_pane_cp06_ParamLimits

0xd11c,	// (0x00032ed4) bg_button_pane_cp06

0x546e,	// (0x0002b226) cell_cmode_rocker_pane_g1_ParamLimits

0x546e,	// (0x0002b226) cell_cmode_rocker_pane_g1

0x69e9,	// (0x0002c7a1) cell_cmode_rocker_pane_g2_ParamLimits

0x69e9,	// (0x0002c7a1) cell_cmode_rocker_pane_g2

0x0001,

0xfdc3,	// (0x00035b7b) cell_cmode_rocker_pane_g_ParamLimits

0xfdc3,	// (0x00035b7b) cell_cmode_rocker_pane_g

0xca6e,	// (0x00032826) bg_button_pane_cp07

0x74c5,	// (0x0002d27d) cell_cmode_itu_pane_g1

0x74ce,	// (0x0002d286) cell_cmode_itu_pane_t1

0x74dc,	// (0x0002d294) cell_cmode_itu_pane_t2

0x0001,

0xfdc8,	// (0x00035b80) cell_cmode_itu_pane_t

0x6c15,	// (0x0002c9cd) aid_touch_ctrl_left

0x6c1d,	// (0x0002c9d5) aid_touch_ctrl_right

0xca6e,	// (0x00032826) compa_mode_pane

0xdfb7,	// (0x00033d6f) aid_cmod_rocker_key_size_cp

0xdfc1,	// (0x00033d79) aid_cmode_itu_key_size_cp

0x74fe,	// (0x0002d2b6) compa_mode_pane_g1

0x7506,	// (0x0002d2be) compa_mode_pane_g2

0x750e,	// (0x0002d2c6) compa_mode_pane_g3

0x0002,

0xfdcd,	// (0x00035b85) compa_mode_pane_g

0xdfcb,	// (0x00033d83) main_comp_mode_itu_pane_cp

0xdfd3,	// (0x00033d8b) main_comp_mode_rocker_pane_cp

0xdfdb,	// (0x00033d93) cell_cmode_itu_pane_cp_ParamLimits

0xdfdb,	// (0x00033d93) cell_cmode_itu_pane_cp

0xdff0,	// (0x00033da8) cell_cmode_rocker_pane_cp_ParamLimits

0xdff0,	// (0x00033da8) cell_cmode_rocker_pane_cp

0xd11c,	// (0x00032ed4) bg_button_pane_cp06_cp_ParamLimits

0xd11c,	// (0x00032ed4) bg_button_pane_cp06_cp

0x546e,	// (0x0002b226) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x546e,	// (0x0002b226) cell_cmode_rocker_pane_g1_cp

0x520b,	// (0x0002afc3) cell_cmode_rocker_pane_g2_cp

0xca6e,	// (0x00032826) bg_button_pane_cp07_cp

0xe002,	// (0x00033dba) cell_cmode_itu_pane_g1_cp

0xe00b,	// (0x00033dc3) cell_cmode_itu_pane_t1_cp

0xe00b,	// (0x00033dc3) cell_cmode_itu_pane_t2_cp

0xb89f,	// (0x00031657) settings_code_pane_cp2

0xcade,	// (0x00032896) bg_popup_window_pane_cp3_ParamLimits

0xce25,	// (0x00032bdd) heading_pane_cp3_ParamLimits

0xce31,	// (0x00032be9) listscroll_popup_graphic_pane_ParamLimits

0x1ced,	// (0x00027aa5) fep_hwr_aid_pane_ParamLimits

0x20d1,	// (0x00027e89) aid_touch_sctrl_top_ParamLimits

0x20de,	// (0x00027e96) sctrl_sk_top_pane_g1_ParamLimits

0x546e,	// (0x0002b226) sctrl_sk_top_pane_g2_ParamLimits

0xfd03,	// (0x00035abb) sctrl_sk_top_pane_g_ParamLimits

0x20eb,	// (0x00027ea3) sctrl_sk_top_pane_t1_ParamLimits

0x20d1,	// (0x00027e89) aid_touch_sctrl_bottom_ParamLimits

0x20eb,	// (0x00027ea3) sctrl_sk_bottom_pane_t1_ParamLimits

0x6b5b,	// (0x0002c913) aid_area_touch_clock

0xc671,	// (0x00032429) aid_vkb2_area_top_pane_cell_ParamLimits

0xc671,	// (0x00032429) aid_vkb2_area_top_pane_cell

0xc71c,	// (0x000324d4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc71c,	// (0x000324d4) aid_vkb2_area_bottom_pane_cell

0x70c7,	// (0x0002ce7f) popup_char_count_window

0x7564,	// (0x0002d31c) popup_char_count_window_g1

0x756d,	// (0x0002d325) popup_char_count_window_g2

0x7576,	// (0x0002d32e) popup_char_count_window_g3

0x0002,

0xfdd4,	// (0x00035b8c) popup_char_count_window_g

0x757f,	// (0x0002d337) popup_char_count_window_t1

0x218e,	// (0x00027f46) popup_fep_char_preview_window_ParamLimits

0x218e,	// (0x00027f46) popup_fep_char_preview_window

0xc691,	// (0x00032449) vkb2_top_candi_pane_ParamLimits

0xc691,	// (0x00032449) vkb2_top_candi_pane

0xe019,	// (0x00033dd1) cell_vkb2_top_candi_pane_ParamLimits

0xe019,	// (0x00033dd1) cell_vkb2_top_candi_pane

0x325a,	// (0x00029012) bg_popup_fep_char_preview_window_ParamLimits

0x325a,	// (0x00029012) bg_popup_fep_char_preview_window

0x270a,	// (0x000284c2) popup_fep_char_preview_window_t1_ParamLimits

0x270a,	// (0x000284c2) popup_fep_char_preview_window_t1

0x75de,	// (0x0002d396) bg_popup_fep_char_preview_window_g1

0x75e6,	// (0x0002d39e) bg_popup_fep_char_preview_window_g2

0x75ee,	// (0x0002d3a6) bg_popup_fep_char_preview_window_g3

0x75f6,	// (0x0002d3ae) bg_popup_fep_char_preview_window_g4

0x75fe,	// (0x0002d3b6) bg_popup_fep_char_preview_window_g5

0x2744,	// (0x000284fc) bg_popup_fep_char_preview_window_g6

0x7606,	// (0x0002d3be) bg_popup_fep_char_preview_window_g7

0x760e,	// (0x0002d3c6) bg_popup_fep_char_preview_window_g8

0x7616,	// (0x0002d3ce) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddb,	// (0x00035b93) bg_popup_fep_char_preview_window_g

0x546e,	// (0x0002b226) cell_vkb2_top_candi_pane_g1_ParamLimits

0x546e,	// (0x0002b226) cell_vkb2_top_candi_pane_g1

0x57af,	// (0x0002b567) cell_vkb2_top_candi_pane_g2_ParamLimits

0x57af,	// (0x0002b567) cell_vkb2_top_candi_pane_g2

0x57d0,	// (0x0002b588) cell_vkb2_top_candi_pane_g3_ParamLimits

0x57d0,	// (0x0002b588) cell_vkb2_top_candi_pane_g3

0x274c,	// (0x00028504) cell_vkb2_top_candi_pane_g4_ParamLimits

0x274c,	// (0x00028504) cell_vkb2_top_candi_pane_g4

0x761e,	// (0x0002d3d6) cell_vkb2_top_candi_pane_g5_ParamLimits

0x761e,	// (0x0002d3d6) cell_vkb2_top_candi_pane_g5

0x69e9,	// (0x0002c7a1) cell_vkb2_top_candi_pane_g6_ParamLimits

0x69e9,	// (0x0002c7a1) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdee,	// (0x00035ba6) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdee,	// (0x00035ba6) cell_vkb2_top_candi_pane_g

0x276d,	// (0x00028525) cell_vkb2_top_candi_pane_t1

0x1b4d,	// (0x00027905) aid_size_touch_slider_mark_ParamLimits

0x1b4d,	// (0x00027905) aid_size_touch_slider_mark

0xdd15,	// (0x00033acd) grid_graphic2_catg_pane_ParamLimits

0xdd15,	// (0x00033acd) grid_graphic2_catg_pane

0xddd3,	// (0x00033b8b) popup_grid_graphic2_window_t1_ParamLimits

0xddd3,	// (0x00033b8b) popup_grid_graphic2_window_t1

0xdde9,	// (0x00033ba1) popup_grid_graphic2_window_t2_ParamLimits

0xdde9,	// (0x00033ba1) popup_grid_graphic2_window_t2

0x0001,

0xfda9,	// (0x00035b61) popup_grid_graphic2_window_t_ParamLimits

0xfda9,	// (0x00035b61) popup_grid_graphic2_window_t

0xcc11,	// (0x000329c9) bg_button_pane_cp05_ParamLimits

0xdf8f,	// (0x00033d47) cell_graphic2_control_pane_g1_ParamLimits

0xe083,	// (0x00033e3b) cell_graphic2_catg_pane_ParamLimits

0xe083,	// (0x00033e3b) cell_graphic2_catg_pane

0xca6e,	// (0x00032826) bg_button_pane_cp12

0xe095,	// (0x00033e4d) cell_graphic2_catg_pane_g1

0x6b27,	// (0x0002c8df) cell_tb_ext_pane_t1_ParamLimits

0x253c,	// (0x000282f4) vkb2_top_cell_right_narrow_pane_ParamLimits

0x253c,	// (0x000282f4) vkb2_top_cell_right_narrow_pane

0x2554,	// (0x0002830c) vkb2_top_cell_right_wide_pane_ParamLimits

0x2554,	// (0x0002830c) vkb2_top_cell_right_wide_pane

0x1cdf,	// (0x00027a97) bg_vkb2_func_pane_ParamLimits

0x1cdf,	// (0x00027a97) bg_vkb2_func_pane

0x25c5,	// (0x0002837d) vkb2_top_cell_left_pane_g1_ParamLimits

0x1cdf,	// (0x00027a97) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1cdf,	// (0x00027a97) bg_vkb2_fuc_pane_cp03

0x2623,	// (0x000283db) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1860,	// (0x00027618) bg_vkb2_func_pane_g1

0x1868,	// (0x00027620) bg_vkb2_func_pane_g2

0x1870,	// (0x00027628) bg_vkb2_func_pane_g3

0x2c1c,	// (0x000289d4) bg_vkb2_func_pane_g4

0x2c24,	// (0x000289dc) bg_vkb2_func_pane_g5

0x2c2c,	// (0x000289e4) bg_vkb2_func_pane_g6

0x2c34,	// (0x000289ec) bg_vkb2_func_pane_g7

0x2c3c,	// (0x000289f4) bg_vkb2_func_pane_g8

0x1858,	// (0x00027610) bg_vkb2_func_pane_g9

0x0008,

0xfdfb,	// (0x00035bb3) bg_vkb2_func_pane_g

0x1cdf,	// (0x00027a97) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1cdf,	// (0x00027a97) bg_vkb2_fuc_pane_cp01

0x25c5,	// (0x0002837d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x25c5,	// (0x0002837d) vkb2_top_cell_right_wide_pane_g1

0x1cdf,	// (0x00027a97) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1cdf,	// (0x00027a97) bg_vkb2_fuc_pane_cp02

0x2623,	// (0x000283db) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2623,	// (0x000283db) vkb2_top_cell_right_narrow_pane_g1

0xc24c,	// (0x00032004) aid_touch_area_decrease_ParamLimits

0xc24c,	// (0x00032004) aid_touch_area_decrease

0xc286,	// (0x0003203e) aid_touch_area_increase_ParamLimits

0xc286,	// (0x0003203e) aid_touch_area_increase

0xc2ae,	// (0x00032066) aid_touch_area_mute_ParamLimits

0xc2ae,	// (0x00032066) aid_touch_area_mute

0xc2d6,	// (0x0003208e) aid_touch_area_slider_ParamLimits

0xc2d6,	// (0x0003208e) aid_touch_area_slider

0xc316,	// (0x000320ce) popup_slider_window_g4_ParamLimits

0xc316,	// (0x000320ce) popup_slider_window_g4

0xc33e,	// (0x000320f6) popup_slider_window_g5_ParamLimits

0xc33e,	// (0x000320f6) popup_slider_window_g5

0xc372,	// (0x0003212a) popup_slider_window_g6_ParamLimits

0xc372,	// (0x0003212a) popup_slider_window_g6

0x68fc,	// (0x0002c6b4) popup_slider_window_t2_ParamLimits

0x68fc,	// (0x0002c6b4) popup_slider_window_t2

0x0001,

0xfcf7,	// (0x00035aaf) popup_slider_window_t_ParamLimits

0xfcf7,	// (0x00035aaf) popup_slider_window_t

0xc38e,	// (0x00032146) slider_pane_ParamLimits

0xc38e,	// (0x00032146) slider_pane

0x765a,	// (0x0002d412) slider_pane_g1_ParamLimits

0x765a,	// (0x0002d412) slider_pane_g1

0x766e,	// (0x0002d426) slider_pane_g2_ParamLimits

0x766e,	// (0x0002d426) slider_pane_g2

0x7684,	// (0x0002d43c) slider_pane_g3_ParamLimits

0x7684,	// (0x0002d43c) slider_pane_g3

0x0003,

0xfe0e,	// (0x00035bc6) slider_pane_g_ParamLimits

0xfe0e,	// (0x00035bc6) slider_pane_g

0xaefc,	// (0x00030cb4) popup_tb_float_extension_window_ParamLimits

0xaefc,	// (0x00030cb4) popup_tb_float_extension_window

0x76b0,	// (0x0002d468) aid_size_cell_tb_float_ext

0xca6e,	// (0x00032826) bg_popup_sub_window_cp28

0x76bc,	// (0x0002d474) grid_tb_float_ext_pane

0x76c8,	// (0x0002d480) cell_tb_float_ext_pane_ParamLimits

0x76c8,	// (0x0002d480) cell_tb_float_ext_pane

0x76e4,	// (0x0002d49c) cell_tb_float_ext_pane_g1

0x76ed,	// (0x0002d4a5) grid_highlight_pane_cp12

0xbc78,	// (0x00031a30) cell_last_hwr_side_pane_ParamLimits

0xbc78,	// (0x00031a30) cell_last_hwr_side_pane

0x520b,	// (0x0002afc3) cell_last_hwr_side_pane_g1

0x76f6,	// (0x0002d4ae) cell_last_hwr_side_pane_g2

0x0001,

0xfe17,	// (0x00035bcf) cell_last_hwr_side_pane_g

0xc7f8,	// (0x000325b0) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc7f8,	// (0x000325b0) vkb2_area_bottom_space_btn_pane

0x546e,	// (0x0002b226) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x717c,	// (0x0002cf34) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x276d,	// (0x00028525) cell_vkb2_top_candi_pane_t1_ParamLimits

0x278b,	// (0x00028543) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x278b,	// (0x00028543) vkb2_area_bottom_space_btn_pane_g1

0x27c5,	// (0x0002857d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x27c5,	// (0x0002857d) vkb2_area_bottom_space_btn_pane_g2

0x27fb,	// (0x000285b3) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x27fb,	// (0x000285b3) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1c,	// (0x00035bd4) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1c,	// (0x00035bd4) vkb2_area_bottom_space_btn_pane_g

0x1d96,	// (0x00027b4e) cel_fep_hwr_func_pane_ParamLimits

0x1d96,	// (0x00027b4e) cel_fep_hwr_func_pane

0xbc4d,	// (0x00031a05) cell_hwr_side_button_pane_ParamLimits

0xbc4d,	// (0x00031a05) cell_hwr_side_button_pane

0x6b5b,	// (0x0002c913) aid_area_touch_clock_ParamLimits

0xcc11,	// (0x000329c9) bg_uniindi_top_pane_ParamLimits

0x6b6f,	// (0x0002c927) uniindi_top_pane_g1_ParamLimits

0x6b85,	// (0x0002c93d) uniindi_top_pane_g2_ParamLimits

0x6b91,	// (0x0002c949) uniindi_top_pane_g3_ParamLimits

0x6ba2,	// (0x0002c95a) uniindi_top_pane_g4_ParamLimits

0xfd2f,	// (0x00035ae7) uniindi_top_pane_g_ParamLimits

0x6baf,	// (0x0002c967) uniindi_top_pane_t1_ParamLimits

0xcc11,	// (0x000329c9) bg_vkb2_func_pane_cp01_ParamLimits

0xcc11,	// (0x000329c9) bg_vkb2_func_pane_cp01

0x76ff,	// (0x0002d4b7) cel_fep_hwr_func_pane_g1_ParamLimits

0x76ff,	// (0x0002d4b7) cel_fep_hwr_func_pane_g1

0xcc11,	// (0x000329c9) bg_vkb2_func_pane_cp02_ParamLimits

0xcc11,	// (0x000329c9) bg_vkb2_func_pane_cp02

0x76ff,	// (0x0002d4b7) cell_hwr_side_button_pane_g1_ParamLimits

0x76ff,	// (0x0002d4b7) cell_hwr_side_button_pane_g1

0x16ad,	// (0x00027465) status_pane_g4_ParamLimits

0x16ad,	// (0x00027465) status_pane_g4

0x16c7,	// (0x0002747f) status_pane_t1

0x4fbe,	// (0x0002ad76) form2_midp_gauge_slider_cont_pane

0x4fc6,	// (0x0002ad7e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbb70,	// (0x00031928) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbb82,	// (0x0003193a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x000358b3) form2_midp_gauge_slider_pane_t_ParamLimits

0x4ffc,	// (0x0002adb4) form2_midp_slider_pane_ParamLimits

0x214e,	// (0x00027f06) aid_size_cell_func_vkb2_ParamLimits

0x214e,	// (0x00027f06) aid_size_cell_func_vkb2

0x769c,	// (0x0002d454) slider_pane_g4_ParamLimits

0x769c,	// (0x0002d454) slider_pane_g4

0xc859,	// (0x00032611) form2_midp_gauge_slider_pane_t2_cp01

0xc867,	// (0x0003261f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc867,	// (0x0003261f) form2_midp_gauge_slider_pane_t3_cp01

0x2870,	// (0x00028628) form2_midp_slider_pane_cp01

0xca6e,	// (0x00032826) navi_smil_pane

0x7738,	// (0x0002d4f0) navi_smil_pane_g1

0x7740,	// (0x0002d4f8) navi_smil_pane_t1

0x770d,	// (0x0002d4c5) form2_midp_slider_pane_g1

0x7716,	// (0x0002d4ce) form2_midp_slider_pane_g2

0x771e,	// (0x0002d4d6) form2_midp_slider_pane_g3

0x770d,	// (0x0002d4c5) form2_midp_slider_pane_g4

0xe09e,	// (0x00033e56) form2_midp_slider_pane_g5

0x0004,

0xfe25,	// (0x00035bdd) form2_midp_slider_pane_g

0x2835,	// (0x000285ed) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2835,	// (0x000285ed) vkb2_area_bottom_space_btn_pane_g4

0xb0e3,	// (0x00030e9b) lc0_navi_pane_ParamLimits

0xb0e3,	// (0x00030e9b) lc0_navi_pane

0xb153,	// (0x00030f0b) lc0_stat_indi_pane_ParamLimits

0xb153,	// (0x00030f0b) lc0_stat_indi_pane

0xb168,	// (0x00030f20) ls0_title_pane_ParamLimits

0xb168,	// (0x00030f20) ls0_title_pane

0xd11c,	// (0x00032ed4) bg_popup_sub_pane_cp14_ParamLimits

0x6b42,	// (0x0002c8fa) list_uniindi_pane_ParamLimits

0x6b4e,	// (0x0002c906) uniindi_top_pane_ParamLimits

0x6bed,	// (0x0002c9a5) list_single_uniindi_pane_g1_ParamLimits

0x6c00,	// (0x0002c9b8) list_single_uniindi_pane_t1_ParamLimits

0xc884,	// (0x0003263c) lc0_stat_clock_pane_ParamLimits

0xc884,	// (0x0003263c) lc0_stat_clock_pane

0xe0a7,	// (0x00033e5f) lc0_stat_indi_pane_g1_ParamLimits

0xe0a7,	// (0x00033e5f) lc0_stat_indi_pane_g1

0xe0b4,	// (0x00033e6c) lc0_stat_indi_pane_g2_ParamLimits

0xe0b4,	// (0x00033e6c) lc0_stat_indi_pane_g2

0x0001,

0xfe30,	// (0x00035be8) lc0_stat_indi_pane_g_ParamLimits

0xfe30,	// (0x00035be8) lc0_stat_indi_pane_g

0xc891,	// (0x00032649) lc0_uni_indicator_pane_ParamLimits

0xc891,	// (0x00032649) lc0_uni_indicator_pane

0xe0c1,	// (0x00033e79) ls0_title_pane_g1_ParamLimits

0xe0c1,	// (0x00033e79) ls0_title_pane_g1

0xe0d5,	// (0x00033e8d) ls0_title_pane_t1_ParamLimits

0xe0d5,	// (0x00033e8d) ls0_title_pane_t1

0xc89e,	// (0x00032656) lc0_uni_indicator_pane_g1_ParamLimits

0xc89e,	// (0x00032656) lc0_uni_indicator_pane_g1

0x77b2,	// (0x0002d56a) lc0_stat_clock_pane_t1

0xca6e,	// (0x00032826) main_ai5_pane

0x77c0,	// (0x0002d578) ai5_sk_pane_ParamLimits

0x77c0,	// (0x0002d578) ai5_sk_pane

0xe103,	// (0x00033ebb) cell_ai5_widget_pane_ParamLimits

0xe103,	// (0x00033ebb) cell_ai5_widget_pane

0xe45d,	// (0x00034215) aid_size_cell_widget_grid

0x7d7d,	// (0x0002db35) bg_ai5_widget_pane_ParamLimits

0x7d7d,	// (0x0002db35) bg_ai5_widget_pane

0xe491,	// (0x00034249) cell_ai5_widget_pane_g2

0xe4a5,	// (0x0003425d) cell_ai5_widget_pane_g3

0xe4bf,	// (0x00034277) cell_ai5_widget_pane_g4

0xe4cf,	// (0x00034287) cell_ai5_widget_pane_g5

0xe4df,	// (0x00034297) cell_ai5_widget_pane_g6

0xe4eb,	// (0x000342a3) cell_ai5_widget_pane_g7

0xe4f7,	// (0x000342af) cell_ai5_widget_pane_t1_ParamLimits

0xe4f7,	// (0x000342af) cell_ai5_widget_pane_t1

0x7eb4,	// (0x0002dc6c) cell_ai5_widget_pane_t2_ParamLimits

0x7eb4,	// (0x0002dc6c) cell_ai5_widget_pane_t2

0x7ecc,	// (0x0002dc84) cell_ai5_widget_pane_t3_ParamLimits

0x7ecc,	// (0x0002dc84) cell_ai5_widget_pane_t3

0xe514,	// (0x000342cc) cell_ai5_widget_pane_t4_ParamLimits

0xe514,	// (0x000342cc) cell_ai5_widget_pane_t4

0xe53a,	// (0x000342f2) cell_ai5_widget_pane_t5_ParamLimits

0xe53a,	// (0x000342f2) cell_ai5_widget_pane_t5

0x7f2a,	// (0x0002dce2) cell_ai5_widget_pane_t6_ParamLimits

0x7f2a,	// (0x0002dce2) cell_ai5_widget_pane_t6

0x7f3c,	// (0x0002dcf4) cell_ai5_widget_pane_t7_ParamLimits

0x7f3c,	// (0x0002dcf4) cell_ai5_widget_pane_t7

0x7f55,	// (0x0002dd0d) cell_ai5_widget_pane_t8_ParamLimits

0x7f55,	// (0x0002dd0d) cell_ai5_widget_pane_t8

0x0009,

0xfe4a,	// (0x00035c02) cell_ai5_widget_pane_t_ParamLimits

0xfe4a,	// (0x00035c02) cell_ai5_widget_pane_t

0xe5a7,	// (0x0003435f) grid_ai5_widget_pane

0xd11c,	// (0x00032ed4) highlight_cell_ai5_widget_pane_ParamLimits

0xd11c,	// (0x00032ed4) highlight_cell_ai5_widget_pane

0xe5b5,	// (0x0003436d) ai5_sk_left_pane

0xe5bf,	// (0x00034377) ai5_sk_middle_pane

0xe5c9,	// (0x00034381) ai5_sk_right_pane

0x7fe0,	// (0x0002dd98) bg_ai5_widget_pane_g1_ParamLimits

0x7fe0,	// (0x0002dd98) bg_ai5_widget_pane_g1

0x7fec,	// (0x0002dda4) bg_ai5_widget_pane_g2_ParamLimits

0x7fec,	// (0x0002dda4) bg_ai5_widget_pane_g2

0x7ff8,	// (0x0002ddb0) bg_ai5_widget_pane_g3_ParamLimits

0x7ff8,	// (0x0002ddb0) bg_ai5_widget_pane_g3

0x8004,	// (0x0002ddbc) bg_ai5_widget_pane_g4_ParamLimits

0x8004,	// (0x0002ddbc) bg_ai5_widget_pane_g4

0x8010,	// (0x0002ddc8) bg_ai5_widget_pane_g5_ParamLimits

0x8010,	// (0x0002ddc8) bg_ai5_widget_pane_g5

0x801c,	// (0x0002ddd4) bg_ai5_widget_pane_g6_ParamLimits

0x801c,	// (0x0002ddd4) bg_ai5_widget_pane_g6

0x8028,	// (0x0002dde0) bg_ai5_widget_pane_g7_ParamLimits

0x8028,	// (0x0002dde0) bg_ai5_widget_pane_g7

0x8034,	// (0x0002ddec) bg_ai5_widget_pane_g8_ParamLimits

0x8034,	// (0x0002ddec) bg_ai5_widget_pane_g8

0x8040,	// (0x0002ddf8) bg_ai5_widget_pane_g9_ParamLimits

0x8040,	// (0x0002ddf8) bg_ai5_widget_pane_g9

0x0008,

0xfe5f,	// (0x00035c17) bg_ai5_widget_pane_g_ParamLimits

0xfe5f,	// (0x00035c17) bg_ai5_widget_pane_g

0xe5ff,	// (0x000343b7) cell_shortcut_ai5_widget_pane_ParamLimits

0xe5ff,	// (0x000343b7) cell_shortcut_ai5_widget_pane

0x0771,	// (0x00026529) bg_cell_shortcut_ai5_widget_pane

0x808b,	// (0x0002de43) cell_grid_ai5_widget_pane_g1

0x0771,	// (0x00026529) highlight_cell_shortcut_ai5_widget_pane

0x1868,	// (0x00027620) ai5_sk_left_pane_g1

0x8094,	// (0x0002de4c) ai5_sk_left_pane_g2

0x809c,	// (0x0002de54) ai5_sk_left_pane_g3

0x80a4,	// (0x0002de5c) ai5_sk_left_pane_g4

0x0003,

0xfe72,	// (0x00035c2a) ai5_sk_left_pane_g

0x80ac,	// (0x0002de64) ai5_sk_left_pane_t1

0x1860,	// (0x00027618) ai5_sk_right_pane_g1

0x80ba,	// (0x0002de72) ai5_sk_right_pane_g2

0x80c2,	// (0x0002de7a) ai5_sk_right_pane_g3

0x80ca,	// (0x0002de82) ai5_sk_right_pane_g4

0x0003,

0xfe7b,	// (0x00035c33) ai5_sk_right_pane_g

0x80d2,	// (0x0002de8a) ai5_sk_right_pane_t1

0x1860,	// (0x00027618) ai5_sk_middle_pane_g1

0x1868,	// (0x00027620) ai5_sk_middle_pane_g2

0x2c24,	// (0x000289dc) ai5_sk_middle_pane_g3

0x80c2,	// (0x0002de7a) ai5_sk_middle_pane_g4

0x809c,	// (0x0002de54) ai5_sk_middle_pane_g5

0x80e0,	// (0x0002de98) ai5_sk_middle_pane_g6

0xe612,	// (0x000343ca) ai5_sk_middle_pane_g7

0x0006,

0xfe84,	// (0x00035c3c) ai5_sk_middle_pane_g

0xafcd,	// (0x00030d85) aid_touch_area_size_lc0_ParamLimits

0xafcd,	// (0x00030d85) aid_touch_area_size_lc0

0x1f35,	// (0x00027ced) cell_hwr_candidate_pane_t1_ParamLimits

0x1376,	// (0x0002712e) aid_touch_navi_pane

0xb273,	// (0x0003102b) status_dt_navi_pane_ParamLimits

0xb273,	// (0x0003102b) status_dt_navi_pane

0xb28b,	// (0x00031043) status_dt_sta_pane_ParamLimits

0xb28b,	// (0x00031043) status_dt_sta_pane

0xe61a,	// (0x000343d2) dt_sta_controll_pane

0xe627,	// (0x000343df) dt_sta_indi_pane

0xe634,	// (0x000343ec) dt_sta_title_pane

0xcc11,	// (0x000329c9) bg_dt_sta_indi_pane_ParamLimits

0xcc11,	// (0x000329c9) bg_dt_sta_indi_pane

0xe646,	// (0x000343fe) dt_sta_battery_pane

0xe64e,	// (0x00034406) dt_sta_indi_pane_g1

0xe657,	// (0x0003440f) dt_sta_indi_pane_g2

0xe660,	// (0x00034418) dt_sta_indi_pane_g3

0x0002,

0xfe93,	// (0x00035c4b) dt_sta_indi_pane_g

0xe669,	// (0x00034421) dt_sta_signal_pane

0xd11c,	// (0x00032ed4) bg_dt_sta_title_pane_ParamLimits

0xd11c,	// (0x00032ed4) bg_dt_sta_title_pane

0xe672,	// (0x0003442a) dt_sta_title_pane_g1

0xe67a,	// (0x00034432) dt_sta_title_pane_t1_ParamLimits

0xe67a,	// (0x00034432) dt_sta_title_pane_t1

0xca6e,	// (0x00032826) bg_dt_sta_control_pane

0xe68f,	// (0x00034447) dt_sta_controll_pane_g1

0xe698,	// (0x00034450) bg_dt_sta_title_pane_g1

0xe6a1,	// (0x00034459) bg_dt_sta_title_pane_g2

0xe6aa,	// (0x00034462) bg_dt_sta_title_pane_g3

0x0002,

0xfe9a,	// (0x00035c52) bg_dt_sta_title_pane_g

0x520b,	// (0x0002afc3) bg_dt_sta_indi_pane_g1

0x818e,	// (0x0002df46) dt_sta_signal_pane_g1

0x8196,	// (0x0002df4e) dt_sta_signal_pane_g2

0x0001,

0xfea1,	// (0x00035c59) dt_sta_signal_pane_g

0x819e,	// (0x0002df56) dt_sta_battery_pane_g1

0x81a7,	// (0x0002df5f) dt_sta_battery_pane_t1

0x520b,	// (0x0002afc3) bg_dt_sta_control_pane_g1

0xd666,	// (0x0003341e) fep_china_uni_eep_pane

0xd66e,	// (0x00033426) fep_china_uni_entry_pane_ParamLimits

0xd67e,	// (0x00033436) popup_fep_china_uni_window_g1_ParamLimits

0xd68e,	// (0x00033446) popup_fep_china_uni_window_g2_ParamLimits

0xd68e,	// (0x00033446) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x000354d5) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x000354d5) popup_fep_china_uni_window_g

0x81b6,	// (0x0002df6e) fep_china_uni_eep_pane_g1

0x81be,	// (0x0002df76) fep_china_uni_eep_pane_t1

0x772f,	// (0x0002d4e7) aid_touch_area_size_smil_player

0x14c4,	// (0x0002727c) lc0_clock_pane

0x16bb,	// (0x00027473) status_pane_g5_ParamLimits

0x16bb,	// (0x00027473) status_pane_g5

0xaa24,	// (0x000307dc) popup_keymap_window

0x1681,	// (0x00027439) status_icon_pane

0xe4a5,	// (0x0003425d) cell_ai5_widget_pane_g3_ParamLimits

0xe4bf,	// (0x00034277) cell_ai5_widget_pane_g4_ParamLimits

0xe4cf,	// (0x00034287) cell_ai5_widget_pane_g5_ParamLimits

0x7e5b,	// (0x0002dc13) cell_ai5_widget_pane_g8_ParamLimits

0x7e5b,	// (0x0002dc13) cell_ai5_widget_pane_g8

0x7e6f,	// (0x0002dc27) cell_ai5_widget_pane_g9_ParamLimits

0x7e6f,	// (0x0002dc27) cell_ai5_widget_pane_g9

0x7e83,	// (0x0002dc3b) cell_ai5_widget_pane_g10_ParamLimits

0x7e83,	// (0x0002dc3b) cell_ai5_widget_pane_g10

0x81cd,	// (0x0002df85) status_icon_pane_g1

0xca6e,	// (0x00032826) bg_popup_sub_pane_cp13

0x81d5,	// (0x0002df8d) popup_keymap_window_t1

0xa735,	// (0x000304ed) control_pane_g6_ParamLimits

0xa735,	// (0x000304ed) control_pane_g6

0xa742,	// (0x000304fa) control_pane_g7_ParamLimits

0xa742,	// (0x000304fa) control_pane_g7

0xa74f,	// (0x00030507) control_pane_g8_ParamLimits

0xa74f,	// (0x00030507) control_pane_g8

0xe61a,	// (0x000343d2) dt_sta_controll_pane_ParamLimits

0xe627,	// (0x000343df) dt_sta_indi_pane_ParamLimits

0xe634,	// (0x000343ec) dt_sta_title_pane_ParamLimits

0xd05e,	// (0x00032e16) aid_size_touch_scroll_bar_cale

0xf18f,	// (0x00034f47) popup_discreet_window_ParamLimits

0xf18f,	// (0x00034f47) popup_discreet_window

0x9df7,	// (0x0002fbaf) popup_sk_window

0x325a,	// (0x00029012) bg_popup_sub_pane_cp28_ParamLimits

0x325a,	// (0x00029012) bg_popup_sub_pane_cp28

0x81e3,	// (0x0002df9b) popup_discreet_window_g1_ParamLimits

0x81e3,	// (0x0002df9b) popup_discreet_window_g1

0x8203,	// (0x0002dfbb) popup_discreet_window_t1_ParamLimits

0x8203,	// (0x0002dfbb) popup_discreet_window_t1

0x8221,	// (0x0002dfd9) popup_discreet_window_t2_ParamLimits

0x8221,	// (0x0002dfd9) popup_discreet_window_t2

0x0002,

0xfea6,	// (0x00035c5e) popup_discreet_window_t_ParamLimits

0xfea6,	// (0x00035c5e) popup_discreet_window_t

0x28a6,	// (0x0002865e) popup_sk_window_g1

0x28b0,	// (0x00028668) popup_sk_window_g2

0x0001,

0xfead,	// (0x00035c65) popup_sk_window_g

0x28b8,	// (0x00028670) popup_sk_window_t1

0x28c6,	// (0x0002867e) popup_sk_window_t1_copy1

0xe491,	// (0x00034249) cell_ai5_widget_pane_g2_ParamLimits

0xe55a,	// (0x00034312) cell_ai5_widget_pane_t9_ParamLimits

0xe55a,	// (0x00034312) cell_ai5_widget_pane_t9

0xca6e,	// (0x00032826) main_fep_fshwr2_pane

0xc8bd,	// (0x00032675) aid_fshwr2_btn_pane

0xc8d1,	// (0x00032689) aid_fshwr2_syb_pane

0xc8e5,	// (0x0003269d) aid_fshwr2_txt_pane

0xc8f5,	// (0x000326ad) fshwr2_func_candi_pane

0xc917,	// (0x000326cf) fshwr2_hwr_syb_pane

0xc93b,	// (0x000326f3) fshwr2_icf_pane

0xca6e,	// (0x00032826) fshwr2_icf_bg_pane

0x295c,	// (0x00028714) fshwr2_icf_pane_t1_ParamLimits

0x295c,	// (0x00028714) fshwr2_icf_pane_t1

0xd5e4,	// (0x0003339c) fshwr2_func_candi_pane_g1

0xe6b3,	// (0x0003446b) fshwr2_func_candi_row_pane_ParamLimits

0xe6b3,	// (0x0003446b) fshwr2_func_candi_row_pane

0xc96b,	// (0x00032723) cell_fshwr2_syb_pane_ParamLimits

0xc96b,	// (0x00032723) cell_fshwr2_syb_pane

0x76ff,	// (0x0002d4b7) fshwr2_hwr_syb_pane_g1_ParamLimits

0x76ff,	// (0x0002d4b7) fshwr2_hwr_syb_pane_g1

0xca6e,	// (0x00032826) bg_popup_call_pane_cp01

0xc993,	// (0x0003274b) fshwr2_func_candi_cell_pane_ParamLimits

0xc993,	// (0x0003274b) fshwr2_func_candi_cell_pane

0xe6da,	// (0x00034492) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe6da,	// (0x00034492) fshwr2_func_candi_cell_bg_pane

0xc9dc,	// (0x00032794) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc9dc,	// (0x00032794) fshwr2_func_candi_cell_pane_g1

0xca13,	// (0x000327cb) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xca13,	// (0x000327cb) fshwr2_func_candi_cell_pane_t1

0xca6e,	// (0x00032826) bg_button_pane_cp08

0x82a2,	// (0x0002e05a) cell_fshwr2_syb_bg_pane

0xca2e,	// (0x000327e6) cell_fshwr2_syb_bg_pane_g1

0xca42,	// (0x000327fa) cell_fshwr2_syb_bg_pane_t1

0xd11c,	// (0x00032ed4) main_tmo_pane

0xb766,	// (0x0003151e) uni_indicator_pane_g1_ParamLimits

0xb77c,	// (0x00031534) uni_indicator_pane_g2_ParamLimits

0xb792,	// (0x0003154a) uni_indicator_pane_g3_ParamLimits

0xb7a5,	// (0x0003155d) uni_indicator_pane_g4_ParamLimits

0xb7a5,	// (0x0003155d) uni_indicator_pane_g4

0x3dc6,	// (0x00029b7e) uni_indicator_pane_g5_ParamLimits

0x3dc6,	// (0x00029b7e) uni_indicator_pane_g5

0x3dc6,	// (0x00029b7e) uni_indicator_pane_g6_ParamLimits

0x3dc6,	// (0x00029b7e) uni_indicator_pane_g6

0xf91c,	// (0x000356d4) uni_indicator_pane_g_ParamLimits

0xc21c,	// (0x00031fd4) popup_tmo_note_window_ParamLimits

0xc21c,	// (0x00031fd4) popup_tmo_note_window

0xd11c,	// (0x00032ed4) fshwr2_bg_pane

0xca04,	// (0x000327bc) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xca04,	// (0x000327bc) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb2,	// (0x00035c6a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb2,	// (0x00035c6a) fshwr2_func_candi_cell_pane_g

0x520b,	// (0x0002afc3) bg_popup_window_pane_cp01

0x2a43,	// (0x000287fb) bg_popup_window_pane_g1_cp01

0x82ae,	// (0x0002e066) bg_popup_window_pane_cp22_ParamLimits

0x82ae,	// (0x0002e066) bg_popup_window_pane_cp22

0x82bc,	// (0x0002e074) listscroll_tmo_link_pane_ParamLimits

0x82bc,	// (0x0002e074) listscroll_tmo_link_pane

0x82fc,	// (0x0002e0b4) popup_tmo_note_window_g1_ParamLimits

0x82fc,	// (0x0002e0b4) popup_tmo_note_window_g1

0x8309,	// (0x0002e0c1) tmo_note_info_pane_ParamLimits

0x8309,	// (0x0002e0c1) tmo_note_info_pane

0xe6e6,	// (0x0003449e) list_tmo_note_info_pane_g1_ParamLimits

0xe6e6,	// (0x0003449e) list_tmo_note_info_pane_g1

0x833a,	// (0x0002e0f2) list_tmo_note_info_pane_g2_ParamLimits

0x833a,	// (0x0002e0f2) list_tmo_note_info_pane_g2

0x0001,

0xfeb7,	// (0x00035c6f) list_tmo_note_info_pane_g_ParamLimits

0xfeb7,	// (0x00035c6f) list_tmo_note_info_pane_g

0x8356,	// (0x0002e10e) list_tmo_note_info_text_pane_ParamLimits

0x8356,	// (0x0002e10e) list_tmo_note_info_text_pane

0x83db,	// (0x0002e193) list_tmo_link_pane

0x83e8,	// (0x0002e1a0) scroll_pane_cp20

0x83f5,	// (0x0002e1ad) list_single_tmo_link_pane_ParamLimits

0x83f5,	// (0x0002e1ad) list_single_tmo_link_pane

0x8405,	// (0x0002e1bd) list_single_tmo_link_pane_t1

0x8413,	// (0x0002e1cb) list_tmo_note_info_text_pane_t1_ParamLimits

0x8413,	// (0x0002e1cb) list_tmo_note_info_text_pane_t1

0xa299,	// (0x00030051) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa299,	// (0x00030051) aid_size_touch_scroll_bar_cp01

0x98d9,	// (0x0002f691) aid_size_touch_slider_marker

0x9de7,	// (0x0002fb9f) popup_settings_window_ParamLimits

0x9de7,	// (0x0002fb9f) popup_settings_window

0xea88,	// (0x00034840) popup_candi_list_indi_window

0x1376,	// (0x0002712e) aid_touch_navi_pane_ParamLimits

0x20a5,	// (0x00027e5d) rs_clock_indi_pane

0x20ae,	// (0x00027e66) sctrl_sk_bottom_pane_ParamLimits

0x20bf,	// (0x00027e77) sctrl_sk_top_pane_ParamLimits

0x21a8,	// (0x00027f60) popup_fep_tooltip_window

0xe45d,	// (0x00034215) aid_size_cell_widget_grid_ParamLimits

0xe47c,	// (0x00034234) cell_ai5_widget_pane_g1_ParamLimits

0xe47c,	// (0x00034234) cell_ai5_widget_pane_g1

0xe4df,	// (0x00034297) cell_ai5_widget_pane_g6_ParamLimits

0xe4eb,	// (0x000342a3) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe35,	// (0x00035bed) cell_ai5_widget_pane_g_ParamLimits

0xfe35,	// (0x00035bed) cell_ai5_widget_pane_g

0xe589,	// (0x00034341) cell_ai5_widget_pane_t10_ParamLimits

0xe589,	// (0x00034341) cell_ai5_widget_pane_t10

0xe5a7,	// (0x0003435f) grid_ai5_widget_pane_ParamLimits

0xe5d3,	// (0x0003438b) cell_contacts_ai5_widget_pane_ParamLimits

0xe5d3,	// (0x0003438b) cell_contacts_ai5_widget_pane

0x8236,	// (0x0002dfee) popup_discreet_window_t3_ParamLimits

0x8236,	// (0x0002dfee) popup_discreet_window_t3

0xc957,	// (0x0003270f) popup_fshwr2_char_preview_window_ParamLimits

0xc957,	// (0x0003270f) popup_fshwr2_char_preview_window

0xe6fd,	// (0x000344b5) tmo_note_info_pane_t1

0xe712,	// (0x000344ca) tmo_note_info_pane_t2

0xe72b,	// (0x000344e3) tmo_note_info_pane_t3

0x83b7,	// (0x0002e16f) tmo_note_info_pane_t4

0x83c9,	// (0x0002e181) tmo_note_info_pane_t5

0x0004,

0xfebc,	// (0x00035c74) tmo_note_info_pane_t

0x83db,	// (0x0002e193) list_tmo_link_pane_ParamLimits

0x83e8,	// (0x0002e1a0) scroll_pane_cp20_ParamLimits

0xca6e,	// (0x00032826) bg_popup_fep_char_preview_window_cp01

0x842c,	// (0x0002e1e4) popup_fshwr2_char_preview_window_t1

0x843a,	// (0x0002e1f2) popup_candi_list_indi_window_g1

0x8443,	// (0x0002e1fb) bg_cell_contacts_ai5_widget_pane

0x844f,	// (0x0002e207) cell_contacts_ai5_widget_pane_g1

0x8464,	// (0x0002e21c) cell_contacts_ai5_widget_pane_g2

0x8470,	// (0x0002e228) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec7,	// (0x00035c7f) cell_contacts_ai5_widget_pane_g

0x847c,	// (0x0002e234) cell_contacts_ai5_widget_pane_t1

0xd11c,	// (0x00032ed4) highlight_cell_shortcut_ai5_widget_pane_cp01

0x84f3,	// (0x0002e2ab) settings_container_pane

0x0771,	// (0x00026529) listscroll_set_pane_copy1

0x4963,	// (0x0002a71b) scroll_pane_cp121_copy1

0x84ff,	// (0x0002e2b7) set_content_pane_copy1

0x8507,	// (0x0002e2bf) aid_height_set_list_copy1_ParamLimits

0x8507,	// (0x0002e2bf) aid_height_set_list_copy1

0x3fc6,	// (0x00029d7e) aid_size_parent_copy1_ParamLimits

0x3fc6,	// (0x00029d7e) aid_size_parent_copy1

0x8513,	// (0x0002e2cb) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8513,	// (0x0002e2cb) button_value_adjust_pane_cp6_copy1

0x0cc7,	// (0x00026a7f) list_highlight_pane_cp2_copy1_ParamLimits

0x0cc7,	// (0x00026a7f) list_highlight_pane_cp2_copy1

0x8527,	// (0x0002e2df) list_set_pane_copy1_ParamLimits

0x8527,	// (0x0002e2df) list_set_pane_copy1

0x848e,	// (0x0002e246) main_pane_set_t1_copy1_ParamLimits

0x848e,	// (0x0002e246) main_pane_set_t1_copy1

0x84c8,	// (0x0002e280) main_pane_set_t2_copy1_ParamLimits

0x84c8,	// (0x0002e280) main_pane_set_t2_copy1

0x85e8,	// (0x0002e3a0) main_pane_set_t3_copy1

0x85f6,	// (0x0002e3ae) main_pane_set_t4_copy1

0x84e7,	// (0x0002e29f) set_content_pane_g1_copy1_ParamLimits

0x84e7,	// (0x0002e29f) set_content_pane_g1_copy1

0x8604,	// (0x0002e3bc) setting_code_pane_copy1

0x860c,	// (0x0002e3c4) setting_slider_graphic_pane_copy1

0x860c,	// (0x0002e3c4) setting_slider_pane_copy1

0x860c,	// (0x0002e3c4) setting_text_pane_copy1

0x860c,	// (0x0002e3c4) setting_volume_pane_copy1

0x8604,	// (0x0002e3bc) settings_code_pane_cp2_copy1

0x8614,	// (0x0002e3cc) settings_code_pane_cp_copy1_ParamLimits

0x8614,	// (0x0002e3cc) settings_code_pane_cp_copy1

0x2a4c,	// (0x00028804) volume_set_pane_copy1

0x8628,	// (0x0002e3e0) volume_set_pane_g10_copy1

0x8634,	// (0x0002e3ec) volume_set_pane_g1_copy1

0x863e,	// (0x0002e3f6) volume_set_pane_g2_copy1

0x8648,	// (0x0002e400) volume_set_pane_g3_copy1

0x8652,	// (0x0002e40a) volume_set_pane_g4_copy1

0x865c,	// (0x0002e414) volume_set_pane_g5_copy1

0x8666,	// (0x0002e41e) volume_set_pane_g6_copy1

0x8670,	// (0x0002e428) volume_set_pane_g7_copy1

0x867a,	// (0x0002e432) volume_set_pane_g8_copy1

0x8684,	// (0x0002e43c) volume_set_pane_g9_copy1

0xcade,	// (0x00032896) bg_set_opt_pane_cp_copy1_ParamLimits

0xcade,	// (0x00032896) bg_set_opt_pane_cp_copy1

0x2a58,	// (0x00028810) setting_slider_pane_t1_copy1_ParamLimits

0x2a58,	// (0x00028810) setting_slider_pane_t1_copy1

0x2a76,	// (0x0002882e) setting_slider_pane_t2_copy1_ParamLimits

0x2a76,	// (0x0002882e) setting_slider_pane_t2_copy1

0x2a90,	// (0x00028848) setting_slider_pane_t3_copy1_ParamLimits

0x2a90,	// (0x00028848) setting_slider_pane_t3_copy1

0x2aa8,	// (0x00028860) slider_set_pane_copy1_ParamLimits

0x2aa8,	// (0x00028860) slider_set_pane_copy1

0xd174,	// (0x00032f2c) set_opt_bg_pane_g1_copy2

0xd17c,	// (0x00032f34) set_opt_bg_pane_g2_copy2

0x868e,	// (0x0002e446) set_opt_bg_pane_g3_copy2

0xd18c,	// (0x00032f44) set_opt_bg_pane_g4_copy2

0xd194,	// (0x00032f4c) set_opt_bg_pane_g5_copy2

0xd19c,	// (0x00032f54) set_opt_bg_pane_g6_copy2

0x8698,	// (0x0002e450) set_opt_bg_pane_g7_copy2

0x86a2,	// (0x0002e45a) set_opt_bg_pane_g8_copy2

0x86ac,	// (0x0002e464) set_opt_bg_pane_g9_copy2

0x2abe,	// (0x00028876) aid_size_touch_slider_mark_copy1_ParamLimits

0x2abe,	// (0x00028876) aid_size_touch_slider_mark_copy1

0x86b6,	// (0x0002e46e) slider_set_pane_g1_copy1

0x2ad2,	// (0x0002888a) slider_set_pane_g2_copy1

0x1b6d,	// (0x00027925) slider_set_pane_g3_copy1_ParamLimits

0x1b6d,	// (0x00027925) slider_set_pane_g3_copy1

0x1b81,	// (0x00027939) slider_set_pane_g4_copy1_ParamLimits

0x1b81,	// (0x00027939) slider_set_pane_g4_copy1

0x1b99,	// (0x00027951) slider_set_pane_g5_copy1_ParamLimits

0x1b99,	// (0x00027951) slider_set_pane_g5_copy1

0x1b6d,	// (0x00027925) slider_set_pane_g6_copy1_ParamLimits

0x1b6d,	// (0x00027925) slider_set_pane_g6_copy1

0x2ada,	// (0x00028892) slider_set_pane_g7_copy1_ParamLimits

0x2ada,	// (0x00028892) slider_set_pane_g7_copy1

0xca82,	// (0x0003283a) bg_set_opt_pane_cp2_copy1

0x86bf,	// (0x0002e477) setting_slider_graphic_pane_g1_copy1

0x86c8,	// (0x0002e480) setting_slider_graphic_pane_t1_copy1

0x86d8,	// (0x0002e490) setting_slider_graphic_pane_t2_copy1

0x86e8,	// (0x0002e4a0) slider_set_pane_cp_copy1

0x86f8,	// (0x0002e4b0) input_focus_pane_cp1_copy1

0x8701,	// (0x0002e4b9) list_set_text_pane_copy1

0x8709,	// (0x0002e4c1) setting_text_pane_g1_copy1

0xf313,	// (0x000350cb) set_text_pane_t1_copy1

0x86f8,	// (0x0002e4b0) input_focus_pane_cp2_copy1

0x8709,	// (0x0002e4c1) setting_code_pane_g1_copy1

0x8712,	// (0x0002e4ca) setting_code_pane_t1_copy1

0x0459,	// (0x00026211) list_set_graphic_pane_copy1

0xca82,	// (0x0003283a) bg_set_opt_pane_cp4_copy1

0x046c,	// (0x00026224) list_set_graphic_pane_g1_copy1_ParamLimits

0x046c,	// (0x00026224) list_set_graphic_pane_g1_copy1

0x8720,	// (0x0002e4d8) list_set_graphic_pane_g2_copy1

0x0484,	// (0x0002623c) list_set_graphic_pane_t1_copy1_ParamLimits

0x0484,	// (0x0002623c) list_set_graphic_pane_t1_copy1

0x520b,	// (0x0002afc3) rs_clock_indi_pane_g1

0x8728,	// (0x0002e4e0) rs_clock_indi_pane_t1

0x8736,	// (0x0002e4ee) rs_indi_pane

0x873e,	// (0x0002e4f6) rs_indi_pane_g1

0x8747,	// (0x0002e4ff) rs_indi_pane_g2

0x8750,	// (0x0002e508) rs_indi_pane_g3

0x0002,

0xfece,	// (0x00035c86) rs_indi_pane_g

0x0771,	// (0x00026529) bg_popup_preview_window_pane_cp03

0x8759,	// (0x0002e511) popup_fep_tooltip_window_t1

0x5eb6,	// (0x0002bc6e) popup_note2_window_g2_ParamLimits

0x5eb6,	// (0x0002bc6e) popup_note2_window_g2

0x0001,

0xfc67,	// (0x00035a1f) popup_note2_window_g_ParamLimits

0xfc67,	// (0x00035a1f) popup_note2_window_g

0x63be,	// (0x0002c176) bg_popup_sub_pane_cp11_ParamLimits

0x63cb,	// (0x0002c183) cell_ai3_links_pane_g1_ParamLimits

0x63e2,	// (0x0002c19a) cell_ai3_links_pane_t1

0xf313,	// (0x000350cb) set_text_pane_t1_copy1_ParamLimits

0x068a,	// (0x00026442) cell_graphic_popup_pane_cp2_ParamLimits

0x068a,	// (0x00026442) cell_graphic_popup_pane_cp2

0x8767,	// (0x0002e51f) cell_graphic_popup_pane_g1_cp2

0xce71,	// (0x00032c29) cell_graphic_popup_pane_g2_cp2

0x876f,	// (0x0002e527) cell_graphic_popup_pane_g3_cp2

0x8777,	// (0x0002e52f) cell_graphic_popup_pane_t2_cp2

0xce82,	// (0x00032c3a) grid_highlight_pane_cp3_cp2

0xd41d,	// (0x000331d5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xd11c,	// (0x00032ed4) main_tmo_pane_ParamLimits

0xc210,	// (0x00031fc8) popup_tmo_big_image_note_window

0xe46b,	// (0x00034223) cell_ai5_widget_list_pane

0xe473,	// (0x0003422b) cell_ai5_widget_lrg_icon_pane

0xe6fd,	// (0x000344b5) tmo_note_info_pane_t1_ParamLimits

0xe712,	// (0x000344ca) tmo_note_info_pane_t2_ParamLimits

0xe72b,	// (0x000344e3) tmo_note_info_pane_t3_ParamLimits

0x83b7,	// (0x0002e16f) tmo_note_info_pane_t4_ParamLimits

0x83c9,	// (0x0002e181) tmo_note_info_pane_t5_ParamLimits

0xfebc,	// (0x00035c74) tmo_note_info_pane_t_ParamLimits

0x84f3,	// (0x0002e2ab) settings_container_pane_ParamLimits

0x86f0,	// (0x0002e4a8) indicator_popup_pane_cp5

0x86f0,	// (0x0002e4a8) indicator_popup_pane_cp6

0x0459,	// (0x00026211) list_set_graphic_pane_copy1_ParamLimits

0xca6e,	// (0x00032826) bg_popup_window_pane_cp23

0x8785,	// (0x0002e53d) popup_tmo_big_image_note_window_g1

0x8791,	// (0x0002e549) popup_tmo_big_image_note_window_t1

0x87a1,	// (0x0002e559) popup_tmo_big_image_note_window_t2

0x87b1,	// (0x0002e569) popup_tmo_big_image_note_window_t3

0x0002,

0xfed5,	// (0x00035c8d) popup_tmo_big_image_note_window_t

0x520b,	// (0x0002afc3) cell_ai5_widget_lrg_icon_pane_g1

0xe740,	// (0x000344f8) cell_ai5_widget_lrg_icon_pane_t1

0xe74e,	// (0x00034506) cell_ai5_widget_list_row_pane_ParamLimits

0xe74e,	// (0x00034506) cell_ai5_widget_list_row_pane

0xe766,	// (0x0003451e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe766,	// (0x0003451e) cell_ai5_widget_list_row_pane_g1

0xe773,	// (0x0003452b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe773,	// (0x0003452b) cell_ai5_widget_list_row_pane_t1

0xe79e,	// (0x00034556) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe79e,	// (0x00034556) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedc,	// (0x00035c94) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedc,	// (0x00035c94) cell_ai5_widget_list_row_pane_t

0xca6e,	// (0x00032826) main_fep_vtchi_ss_pane

0x8867,	// (0x0002e61f) popup_fep_char_pre_window

0x886f,	// (0x0002e627) popup_fep_ituss_window

0xe7d5,	// (0x0003458d) popup_fep_vkbss_window

0xe7e4,	// (0x0003459c) grid_vkbss_keypad_pane_ParamLimits

0xe7e4,	// (0x0003459c) grid_vkbss_keypad_pane

0x88c9,	// (0x0002e681) ituss_keypad_pane

0x2afc,	// (0x000288b4) aid_vkbss_key_offset_ParamLimits

0x2afc,	// (0x000288b4) aid_vkbss_key_offset

0xca58,	// (0x00032810) cell_vkbss_key_pane_ParamLimits

0xca58,	// (0x00032810) cell_vkbss_key_pane

0x88d8,	// (0x0002e690) bg_cell_vkbss_key_g1_ParamLimits

0x88d8,	// (0x0002e690) bg_cell_vkbss_key_g1

0xe7f4,	// (0x000345ac) cell_vkbss_key_3p_pane_ParamLimits

0xe7f4,	// (0x000345ac) cell_vkbss_key_3p_pane

0xe80e,	// (0x000345c6) cell_vkbss_key_g1_ParamLimits

0xe80e,	// (0x000345c6) cell_vkbss_key_g1

0xe828,	// (0x000345e0) cell_vkbss_key_t1_ParamLimits

0xe828,	// (0x000345e0) cell_vkbss_key_t1

0x2b1e,	// (0x000288d6) cell_ituss_key_pane_ParamLimits

0x2b1e,	// (0x000288d6) cell_ituss_key_pane

0x8937,	// (0x0002e6ef) bg_cell_ituss_key_g1_ParamLimits

0x8937,	// (0x0002e6ef) bg_cell_ituss_key_g1

0x8943,	// (0x0002e6fb) cell_ituss_key_pane_g1_ParamLimits

0x8943,	// (0x0002e6fb) cell_ituss_key_pane_g1

0x2b2f,	// (0x000288e7) cell_ituss_key_pane_g2_ParamLimits

0x2b2f,	// (0x000288e7) cell_ituss_key_pane_g2

0x0002,

0xfee3,	// (0x00035c9b) cell_ituss_key_pane_g_ParamLimits

0xfee3,	// (0x00035c9b) cell_ituss_key_pane_g

0x2b5b,	// (0x00028913) cell_ituss_key_t1_ParamLimits

0x2b5b,	// (0x00028913) cell_ituss_key_t1

0x2b95,	// (0x0002894d) cell_ituss_key_t2_ParamLimits

0x2b95,	// (0x0002894d) cell_ituss_key_t2

0x2bc6,	// (0x0002897e) cell_ituss_key_t3_ParamLimits

0x2bc6,	// (0x0002897e) cell_ituss_key_t3

0x2b95,	// (0x0002894d) cell_ituss_key_t4_ParamLimits

0x2b95,	// (0x0002894d) cell_ituss_key_t4

0x0004,

0xfeea,	// (0x00035ca2) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x00035ca2) cell_ituss_key_t

0x8969,	// (0x0002e721) cell_vkbss_key_3p_pane_g1

0x8971,	// (0x0002e729) cell_vkbss_key_3p_pane_g2

0x8979,	// (0x0002e731) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x00035cad) cell_vkbss_key_3p_pane_g

0x0771,	// (0x00026529) bg_popup_fep_char_preview_window_cp02

0x8981,	// (0x0002e739) popup_fep_char_pre_window_t1

0xe44a,	// (0x00034202) main_ai5_sk_pane

0x8443,	// (0x0002e1fb) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x844f,	// (0x0002e207) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8464,	// (0x0002e21c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8470,	// (0x0002e228) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec7,	// (0x00035c7f) cell_contacts_ai5_widget_pane_g_ParamLimits

0x847c,	// (0x0002e234) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xd11c,	// (0x00032ed4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe853,	// (0x0003460b) main_ai5_sk_pane_g1

0x3092,	// (0x00028e4a) popup_query_code_window_g1

0xe7c6,	// (0x0003457e) popup_fep_vkb_icf_pane

0x88a3,	// (0x0002e65b) popup_fep_vtchi_icf_pane

0x8998,	// (0x0002e750) bg_icf_pane

0x89a4,	// (0x0002e75c) list_vkb_icf_pane

0x89b3,	// (0x0002e76b) bg_icf_pane_cp01

0x89c6,	// (0x0002e77e) vtchi_icf_list_pane

0xe85c,	// (0x00034614) list_vkb_icf_pane_t1_ParamLimits

0xe85c,	// (0x00034614) list_vkb_icf_pane_t1

0x89f4,	// (0x0002e7ac) vtchi_icf_list_pane_t1_ParamLimits

0x89f4,	// (0x0002e7ac) vtchi_icf_list_pane_t1

0x886f,	// (0x0002e627) popup_fep_ituss_window_ParamLimits

0x88a3,	// (0x0002e65b) popup_fep_vtchi_icf_pane_ParamLimits

0x88c9,	// (0x0002e681) ituss_keypad_pane_ParamLimits

0x2af0,	// (0x000288a8) ituss_sks_pane

0x8998,	// (0x0002e750) bg_icf_pane_ParamLimits

0x8847,	// (0x0002e5ff) icf_edit_indi_pane_ParamLimits

0x8847,	// (0x0002e5ff) icf_edit_indi_pane

0x89a4,	// (0x0002e75c) list_vkb_icf_pane_ParamLimits

0x89b3,	// (0x0002e76b) bg_icf_pane_cp01_ParamLimits

0x885a,	// (0x0002e612) icf_edit_indi_pane_cp01_ParamLimits

0x885a,	// (0x0002e612) icf_edit_indi_pane_cp01

0x89ce,	// (0x0002e786) vtchi_query_pane

0x76ff,	// (0x0002d4b7) icf_edit_indi_pane_g1_ParamLimits

0x76ff,	// (0x0002d4b7) icf_edit_indi_pane_g1

0xe872,	// (0x0003462a) icf_edit_indi_pane_g2_ParamLimits

0xe872,	// (0x0003462a) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x00035cc5) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x00035cc5) icf_edit_indi_pane_g

0xe884,	// (0x0003463c) icf_edit_indi_pane_t1

0x8a0c,	// (0x0002e7c4) bg_input_focus_pane_cp042

0xd055,	// (0x00032e0d) vtchi_button_pane

0x8a15,	// (0x0002e7cd) vtchi_query_pane_t1

0x8a23,	// (0x0002e7db) vtchi_query_pane_t2

0x8a31,	// (0x0002e7e9) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x00035cb4) vtchi_query_pane_t

0xca6e,	// (0x00032826) bg_button_pane_cp13

0x8a3f,	// (0x0002e7f7) vtchi_button_pane_g1

0x2c09,	// (0x000289c1) ituss_sks_pane_g1

0x2c14,	// (0x000289cc) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x00035cbb) ituss_sks_pane_g

0x8a47,	// (0x0002e7ff) ituss_sks_pane_t1

0x8a55,	// (0x0002e80d) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x00035cc0) ituss_sks_pane_t

0x4ce8,	// (0x0002aaa0) indicator_nsta_pane_cp_g1

0x4cf0,	// (0x0002aaa8) indicator_nsta_pane_cp_g2

0x4cf8,	// (0x0002aab0) indicator_nsta_pane_cp_g3

0x4ce8,	// (0x0002aaa0) indicator_nsta_pane_cp_g4

0x4cf0,	// (0x0002aaa8) indicator_nsta_pane_cp_g5

0x4cf8,	// (0x0002aab0) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x00035869) indicator_nsta_pane_cp_g

0xdf71,	// (0x00033d29) cell_graphic2_pane_t2_ParamLimits

0xdf71,	// (0x00033d29) cell_graphic2_pane_t2

0x0001,

0xfdbe,	// (0x00035b76) cell_graphic2_pane_t_ParamLimits

0xfdbe,	// (0x00035b76) cell_graphic2_pane_t

0xdfa9,	// (0x00033d61) cell_graphic2_control_pane_t1

0xa4e7,	// (0x0003029f) signal_pane_g3_ParamLimits

0xa4e7,	// (0x0003029f) signal_pane_g3

0xa4fb,	// (0x000302b3) signal_pane_g4_ParamLimits

0xa4fb,	// (0x000302b3) signal_pane_g4

0xe7b0,	// (0x00034568) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe7b0,	// (0x00034568) cell_ai5_widget_list_row_pane_t3

0x8957,	// (0x0002e70f) cell_ituss_key_pane_t1_ParamLimits

0x8957,	// (0x0002e70f) cell_ituss_key_pane_t1

0x2d01,	// (0x00028ab9) form_field_data_wide_pane_vc_t2_ParamLimits

0x2d01,	// (0x00028ab9) form_field_data_wide_pane_vc_t2

0x2d15,	// (0x00028acd) form_field_data_wide_pane_vc_t3_ParamLimits

0x2d15,	// (0x00028acd) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x000355bc) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x000355bc) form_field_data_wide_pane_vc_t

0x49a3,	// (0x0002a75b) form_field_slider_wide_pane_vc_t3_ParamLimits

0x49a3,	// (0x0002a75b) form_field_slider_wide_pane_vc_t3

0x4a79,	// (0x0002a831) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4a79,	// (0x0002a831) form_field_popup_wide_pane_vc_t2

0x4a90,	// (0x0002a848) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4a90,	// (0x0002a848) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x00035858) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x00035858) form_field_popup_wide_pane_vc_t

0xc8bd,	// (0x00032675) aid_fshwr2_btn_pane_ParamLimits

0xc8d1,	// (0x00032689) aid_fshwr2_syb_pane_ParamLimits

0xc8e5,	// (0x0003269d) aid_fshwr2_txt_pane_ParamLimits

0xd11c,	// (0x00032ed4) fshwr2_bg_pane_ParamLimits

0xc8f5,	// (0x000326ad) fshwr2_func_candi_pane_ParamLimits

0xc917,	// (0x000326cf) fshwr2_hwr_syb_pane_ParamLimits

0xc93b,	// (0x000326f3) fshwr2_icf_pane_ParamLimits

0xee6f,	// (0x00034c27) list_double_graphic_pane_vc_g4_ParamLimits

0xee6f,	// (0x00034c27) list_double_graphic_pane_vc_g4

0x2b4f,	// (0x00028907) cell_ituss_key_pane_g3_ParamLimits

0x2b4f,	// (0x00028907) cell_ituss_key_pane_g3

0x2bf7,	// (0x000289af) cell_ituss_key_t5_ParamLimits

0x2bf7,	// (0x000289af) cell_ituss_key_t5

0xe7d5,	// (0x0003458d) popup_fep_vkbss_window_ParamLimits

0xe454,	// (0x0003420c) aid_cell_ai5_quarter

0xe884,	// (0x0003463c) icf_edit_indi_pane_t1_ParamLimits

0xccb9,	// (0x00032a71) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xccb9,	// (0x00032a71) aid_tch_indicator_popup_pane_cp2

0xcccc,	// (0x00032a84) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xcccc,	// (0x00032a84) aid_tch_query_popup_data_pane_cp2

0x303a,	// (0x00028df2) aid_tch_query_popup_pane_ParamLimits

0x303a,	// (0x00028df2) aid_tch_query_popup_pane

0x303a,	// (0x00028df2) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x303a,	// (0x00028df2) aid_tch_query_popup_data_pane_cp1

0x82a2,	// (0x0002e05a) cell_fshwr2_syb_bg_pane_ParamLimits

0xca2e,	// (0x000327e6) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xca42,	// (0x000327fa) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe7c6,	// (0x0003457e) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
