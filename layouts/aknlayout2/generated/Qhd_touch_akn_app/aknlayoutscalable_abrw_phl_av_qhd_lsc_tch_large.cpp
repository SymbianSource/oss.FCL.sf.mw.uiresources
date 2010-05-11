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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004fbda };

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
0xb2db,	// (0x0005aeb5) Screen

0xb2e7,	// (0x0005aec1) application_window_ParamLimits

0xb2e7,	// (0x0005aec1) application_window

0x2b98,	// (0x00052772) screen_g1

0xb31f,	// (0x0005aef9) area_bottom_pane_ParamLimits

0xb31f,	// (0x0005aef9) area_bottom_pane

0xf333,	// (0x0005ef0d) area_top_pane_ParamLimits

0xf333,	// (0x0005ef0d) area_top_pane

0xf445,	// (0x0005f01f) main_pane_ParamLimits

0xf445,	// (0x0005f01f) main_pane

0x2ba2,	// (0x0005277c) misc_graphics

0xd3ab,	// (0x0005cf85) battery_pane_ParamLimits

0xd3ab,	// (0x0005cf85) battery_pane

0x5904,	// (0x000554de) bg_status_flat_pane_g8

0x590c,	// (0x000554e6) bg_status_flat_pane_g9

0x4cf4,	// (0x000548ce) context_pane_ParamLimits

0x4cf4,	// (0x000548ce) context_pane

0xd516,	// (0x0005d0f0) navi_pane_ParamLimits

0xd516,	// (0x0005d0f0) navi_pane

0xd594,	// (0x0005d16e) signal_pane_ParamLimits

0xd594,	// (0x0005d16e) signal_pane

0x0008,

0xf879,	// (0x0005f453) bg_status_flat_pane_g

0xd624,	// (0x0005d1fe) status_pane_g1_ParamLimits

0xd624,	// (0x0005d1fe) status_pane_g1

0xd63a,	// (0x0005d214) status_pane_g2_ParamLimits

0xd63a,	// (0x0005d214) status_pane_g2

0x4f27,	// (0x00054b01) status_pane_g3_ParamLimits

0x4f27,	// (0x00054b01) status_pane_g3

0x0004,

0xf7a5,	// (0x0005f37f) status_pane_g_ParamLimits

0xf7a5,	// (0x0005f37f) status_pane_g

0xd646,	// (0x0005d220) title_pane_ParamLimits

0xd646,	// (0x0005d220) title_pane

0xd6a9,	// (0x0005d283) uni_indicator_pane_ParamLimits

0xd6a9,	// (0x0005d283) uni_indicator_pane

0x4b56,	// (0x00054730) bg_list_pane_ParamLimits

0x4b56,	// (0x00054730) bg_list_pane

0xd31e,	// (0x0005cef8) find_pane

0xbd50,	// (0x0005b92a) listscroll_app_pane_ParamLimits

0xbd50,	// (0x0005b92a) listscroll_app_pane

0x4b82,	// (0x0005475c) listscroll_form_pane

0xbd60,	// (0x0005b93a) listscroll_gen_pane_ParamLimits

0xbd60,	// (0x0005b93a) listscroll_gen_pane

0x0df9,	// (0x000509d3) listscroll_set_pane

0x6486,	// (0x00056060) main_idle_act_pane

0x485e,	// (0x00054438) main_idle_trad_pane

0x485e,	// (0x00054438) main_list_empty_pane

0x4b9c,	// (0x00054776) main_midp_pane

0x4ba8,	// (0x00054782) main_pane_g1_ParamLimits

0x4ba8,	// (0x00054782) main_pane_g1

0xbd74,	// (0x0005b94e) popup_ai_message_window_ParamLimits

0xbd74,	// (0x0005b94e) popup_ai_message_window

0xbe05,	// (0x0005b9df) popup_fep_china_uni_window_ParamLimits

0xbe05,	// (0x0005b9df) popup_fep_china_uni_window

0x0f19,	// (0x00050af3) popup_fep_japan_candidate_window_ParamLimits

0x0f19,	// (0x00050af3) popup_fep_japan_candidate_window

0x0f39,	// (0x00050b13) popup_fep_japan_predictive_window_ParamLimits

0x0f39,	// (0x00050b13) popup_fep_japan_predictive_window

0xbe61,	// (0x0005ba3b) popup_find_window

0xbe7e,	// (0x0005ba58) popup_grid_graphic_window_ParamLimits

0xbe7e,	// (0x0005ba58) popup_grid_graphic_window

0x0fa0,	// (0x00050b7a) popup_large_graphic_colour_window

0xbf1c,	// (0x0005baf6) popup_menu_window_ParamLimits

0xbf1c,	// (0x0005baf6) popup_menu_window

0xc0ee,	// (0x0005bcc8) popup_note_image_window

0xc0b4,	// (0x0005bc8e) popup_note_wait_window_ParamLimits

0xc0b4,	// (0x0005bc8e) popup_note_wait_window

0xc106,	// (0x0005bce0) popup_note_window_ParamLimits

0xc106,	// (0x0005bce0) popup_note_window

0xc1ac,	// (0x0005bd86) popup_query_code_window_ParamLimits

0xc1ac,	// (0x0005bd86) popup_query_code_window

0x11e8,	// (0x00050dc2) popup_query_data_code_window_ParamLimits

0x11e8,	// (0x00050dc2) popup_query_data_code_window

0xc1e6,	// (0x0005bdc0) popup_query_data_window_ParamLimits

0xc1e6,	// (0x0005bdc0) popup_query_data_window

0xc268,	// (0x0005be42) popup_query_sat_info_window_ParamLimits

0xc268,	// (0x0005be42) popup_query_sat_info_window

0xc2ff,	// (0x0005bed9) popup_snote_single_graphic_window_ParamLimits

0xc2ff,	// (0x0005bed9) popup_snote_single_graphic_window

0xc2ff,	// (0x0005bed9) popup_snote_single_text_window_ParamLimits

0xc2ff,	// (0x0005bed9) popup_snote_single_text_window

0x126f,	// (0x00050e49) popup_sub_window_general

0x139f,	// (0x00050f79) popup_window_general_ParamLimits

0x139f,	// (0x00050f79) popup_window_general

0x4bb6,	// (0x00054790) power_save_pane

0xbbdf,	// (0x0005b7b9) control_pane_g1_ParamLimits

0xbbdf,	// (0x0005b7b9) control_pane_g1

0xbc08,	// (0x0005b7e2) control_pane_g2_ParamLimits

0xbc08,	// (0x0005b7e2) control_pane_g2

0x4b19,	// (0x000546f3) control_pane_g3_ParamLimits

0x4b19,	// (0x000546f3) control_pane_g3

0x0007,

0xf78d,	// (0x0005f367) control_pane_g_ParamLimits

0xf78d,	// (0x0005f367) control_pane_g

0xbc49,	// (0x0005b823) control_pane_t1_ParamLimits

0xbc49,	// (0x0005b823) control_pane_t1

0xbca7,	// (0x0005b881) control_pane_t2_ParamLimits

0xbca7,	// (0x0005b881) control_pane_t2

0x0002,

0xf79e,	// (0x0005f378) control_pane_t_ParamLimits

0xf79e,	// (0x0005f378) control_pane_t

0xd250,	// (0x0005ce2a) navi_navi_volume_pane_cp1

0xd258,	// (0x0005ce32) status_small_icon_pane

0x4a4e,	// (0x00054628) status_small_pane_g1_ParamLimits

0x4a4e,	// (0x00054628) status_small_pane_g1

0xd260,	// (0x0005ce3a) status_small_pane_g2_ParamLimits

0xd260,	// (0x0005ce3a) status_small_pane_g2

0xd26c,	// (0x0005ce46) status_small_pane_g3_ParamLimits

0xd26c,	// (0x0005ce46) status_small_pane_g3

0xd278,	// (0x0005ce52) status_small_pane_g4_ParamLimits

0xd278,	// (0x0005ce52) status_small_pane_g4

0xd284,	// (0x0005ce5e) status_small_pane_g5_ParamLimits

0xd284,	// (0x0005ce5e) status_small_pane_g5

0xd292,	// (0x0005ce6c) status_small_pane_g6_ParamLimits

0xd292,	// (0x0005ce6c) status_small_pane_g6

0x0007,

0xf77c,	// (0x0005f356) status_small_pane_g_ParamLimits

0xf77c,	// (0x0005f356) status_small_pane_g

0xd2c1,	// (0x0005ce9b) status_small_pane_t1

0xd2e3,	// (0x0005cebd) status_small_wait_pane_ParamLimits

0xd2e3,	// (0x0005cebd) status_small_wait_pane

0xd0f7,	// (0x0005ccd1) aid_levels_signal_ParamLimits

0xd0f7,	// (0x0005ccd1) aid_levels_signal

0xd10f,	// (0x0005cce9) signal_pane_g1_ParamLimits

0xd10f,	// (0x0005cce9) signal_pane_g1

0xd12a,	// (0x0005cd04) signal_pane_g2_ParamLimits

0xd12a,	// (0x0005cd04) signal_pane_g2

0x0003,

0xf70d,	// (0x0005f2e7) signal_pane_g_ParamLimits

0xf70d,	// (0x0005f2e7) signal_pane_g

0x4332,	// (0x00053f0c) context_pane_g1

0xb4fd,	// (0x0005b0d7) title_pane_g1

0xcc92,	// (0x0005c86c) title_pane_t1

0x2c4a,	// (0x00052824) title_pane_t2

0x2c70,	// (0x0005284a) title_pane_t3

0x0002,

0xf557,	// (0x0005f131) title_pane_t

0xd6d1,	// (0x0005d2ab) aid_levels_battery_ParamLimits

0xd6d1,	// (0x0005d2ab) aid_levels_battery

0xd6ed,	// (0x0005d2c7) battery_pane_g1_ParamLimits

0xd6ed,	// (0x0005d2c7) battery_pane_g1

0xd70a,	// (0x0005d2e4) battery_pane_g2_ParamLimits

0xd70a,	// (0x0005d2e4) battery_pane_g2

0x0001,

0xf7b0,	// (0x0005f38a) battery_pane_g_ParamLimits

0xf7b0,	// (0x0005f38a) battery_pane_g

0xd973,	// (0x0005d54d) uni_indicator_pane_g1

0xd989,	// (0x0005d563) uni_indicator_pane_g2

0xd99f,	// (0x0005d579) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0005f4fb) uni_indicator_pane_g

0x46d0,	// (0x000542aa) navi_icon_pane_ParamLimits

0x46d0,	// (0x000542aa) navi_icon_pane

0x460e,	// (0x000541e8) navi_midp_pane

0x46ec,	// (0x000542c6) navi_navi_pane

0x46f6,	// (0x000542d0) navi_text_pane_ParamLimits

0x46f6,	// (0x000542d0) navi_text_pane

0x2b98,	// (0x00052772) status_small_wait_pane_g1

0x3776,	// (0x00053350) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0005f4f6) status_small_wait_pane_g

0x5f5f,	// (0x00055b39) navi_navi_icon_text_pane

0x5f67,	// (0x00055b41) navi_navi_pane_g1_ParamLimits

0x5f67,	// (0x00055b41) navi_navi_pane_g1

0x5f79,	// (0x00055b53) navi_navi_pane_g2_ParamLimits

0x5f79,	// (0x00055b53) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0005f4c4) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0005f4c4) navi_navi_pane_g

0x5f8b,	// (0x00055b65) navi_navi_tabs_pane

0x5f94,	// (0x00055b6e) navi_navi_text_pane

0x5f5f,	// (0x00055b39) navi_navi_volume_pane

0x5f3b,	// (0x00055b15) navi_text_pane_t1

0x5f2f,	// (0x00055b09) navi_icon_pane_g1

0x5e82,	// (0x00055a5c) navi_navi_text_pane_t1

0x1747,	// (0x00051321) navi_navi_volume_pane_g1

0x174f,	// (0x00051329) volume_small_pane

0x5de8,	// (0x000559c2) navi_navi_icon_text_pane_g1

0x5df0,	// (0x000559ca) navi_navi_icon_text_pane_t1

0x46ec,	// (0x000542c6) navi_tabs_2_long_pane

0x46ec,	// (0x000542c6) navi_tabs_2_pane

0x46ec,	// (0x000542c6) navi_tabs_3_long_pane

0x46ec,	// (0x000542c6) navi_tabs_3_pane

0x46ec,	// (0x000542c6) navi_tabs_4_pane

0x1727,	// (0x00051301) tabs_2_active_pane_ParamLimits

0x1727,	// (0x00051301) tabs_2_active_pane

0x1737,	// (0x00051311) tabs_2_passive_pane_ParamLimits

0x1737,	// (0x00051311) tabs_2_passive_pane

0x16f5,	// (0x000512cf) tabs_3_active_pane_ParamLimits

0x16f5,	// (0x000512cf) tabs_3_active_pane

0x1705,	// (0x000512df) tabs_3_passive_pane_ParamLimits

0x1705,	// (0x000512df) tabs_3_passive_pane

0x1716,	// (0x000512f0) tabs_3_passive_pane_cp_ParamLimits

0x1716,	// (0x000512f0) tabs_3_passive_pane_cp

0x16b1,	// (0x0005128b) tabs_4_active_pane_ParamLimits

0x16b1,	// (0x0005128b) tabs_4_active_pane

0x16c2,	// (0x0005129c) tabs_4_passive_pane_ParamLimits

0x16c2,	// (0x0005129c) tabs_4_passive_pane

0x16d3,	// (0x000512ad) tabs_4_passive_pane_cp_ParamLimits

0x16d3,	// (0x000512ad) tabs_4_passive_pane_cp

0x16e4,	// (0x000512be) tabs_4_passive_pane_cp2_ParamLimits

0x16e4,	// (0x000512be) tabs_4_passive_pane_cp2

0x168d,	// (0x00051267) tabs_2_long_active_pane_ParamLimits

0x168d,	// (0x00051267) tabs_2_long_active_pane

0x169f,	// (0x00051279) tabs_2_long_passive_pane_ParamLimits

0x169f,	// (0x00051279) tabs_2_long_passive_pane

0x164e,	// (0x00051228) tabs_3_long_active_pane_ParamLimits

0x164e,	// (0x00051228) tabs_3_long_active_pane

0x1661,	// (0x0005123b) tabs_3_long_passive_pane_ParamLimits

0x1661,	// (0x0005123b) tabs_3_long_passive_pane

0x167a,	// (0x00051254) tabs_3_long_passive_pane_cp_ParamLimits

0x167a,	// (0x00051254) tabs_3_long_passive_pane_cp

0x15f4,	// (0x000511ce) volume_small_pane_g1

0x15fd,	// (0x000511d7) volume_small_pane_g2

0x1606,	// (0x000511e0) volume_small_pane_g3

0x160f,	// (0x000511e9) volume_small_pane_g4

0x1618,	// (0x000511f2) volume_small_pane_g5

0x1621,	// (0x000511fb) volume_small_pane_g6

0x162a,	// (0x00051204) volume_small_pane_g7

0x1633,	// (0x0005120d) volume_small_pane_g8

0x163c,	// (0x00051216) volume_small_pane_g9

0x1645,	// (0x0005121f) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0005f490) volume_small_pane_g

0x2efd,	// (0x00052ad7) bg_active_tab_pane_cp2_ParamLimits

0x2efd,	// (0x00052ad7) bg_active_tab_pane_cp2

0x2c90,	// (0x0005286a) tabs_3_active_pane_g1

0xcd1e,	// (0x0005c8f8) tabs_3_active_pane_t1

0x2efd,	// (0x00052ad7) bg_passive_tab_pane_cp2_ParamLimits

0x2efd,	// (0x00052ad7) bg_passive_tab_pane_cp2

0x2c90,	// (0x0005286a) tabs_3_passive_pane_g1

0xcd1e,	// (0x0005c8f8) tabs_3_passive_pane_t1

0x2efd,	// (0x00052ad7) bg_active_tab_pane_cp3_ParamLimits

0x2efd,	// (0x00052ad7) bg_active_tab_pane_cp3

0x2caa,	// (0x00052884) tabs_4_active_pane_g1

0xcd30,	// (0x0005c90a) tabs_4_active_pane_t1

0x2efd,	// (0x00052ad7) bg_passive_tab_pane_cp3_ParamLimits

0x2efd,	// (0x00052ad7) bg_passive_tab_pane_cp3

0x2caa,	// (0x00052884) tabs_4_1_passive_pane_g1

0xcd30,	// (0x0005c90a) tabs_4_1_passive_pane_t1

0x4b9c,	// (0x00054776) list_highlight_pane_cp2

0xda27,	// (0x0005d601) list_set_pane_ParamLimits

0xda27,	// (0x0005d601) list_set_pane

0xdac1,	// (0x0005d69b) main_pane_set_t1_ParamLimits

0xdac1,	// (0x0005d69b) main_pane_set_t1

0xdae1,	// (0x0005d6bb) main_pane_set_t2_ParamLimits

0xdae1,	// (0x0005d6bb) main_pane_set_t2

0xdaf5,	// (0x0005d6cf) main_pane_set_t3_ParamLimits

0xdaf5,	// (0x0005d6cf) main_pane_set_t3

0xdb07,	// (0x0005d6e1) main_pane_set_t4_ParamLimits

0xdb07,	// (0x0005d6e1) main_pane_set_t4

0x0003,

0xf986,	// (0x0005f560) main_pane_set_t_ParamLimits

0xf986,	// (0x0005f560) main_pane_set_t

0xdb19,	// (0x0005d6f3) setting_code_pane

0xdb23,	// (0x0005d6fd) setting_slider_graphic_pane

0xdb23,	// (0x0005d6fd) setting_slider_pane

0xdb23,	// (0x0005d6fd) setting_text_pane

0xdb23,	// (0x0005d6fd) setting_volume_pane

0x0028,	// (0x0004fc02) volume_set_pane

0x2c82,	// (0x0005285c) bg_set_opt_pane_cp

0x0030,	// (0x0004fc0a) setting_slider_pane_t1

0x0049,	// (0x0004fc23) setting_slider_pane_t2

0x0063,	// (0x0004fc3d) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005f138) setting_slider_pane_t

0x007b,	// (0x0004fc55) slider_set_pane

0x2ba2,	// (0x0005277c) bg_set_opt_pane_cp2

0x2cc4,	// (0x0005289e) setting_slider_graphic_pane_g1

0x0091,	// (0x0004fc6b) setting_slider_graphic_pane_t1

0x00a1,	// (0x0004fc7b) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0005f13f) setting_slider_graphic_pane_t

0x00b1,	// (0x0004fc8b) slider_set_pane_cp

0x2ba2,	// (0x0005277c) input_focus_pane_cp1

0x646d,	// (0x00056047) list_set_text_pane

0x2b98,	// (0x00052772) setting_text_pane_g1

0x2ba2,	// (0x0005277c) input_focus_pane_cp2

0x2b98,	// (0x00052772) setting_code_pane_g1

0x2ccd,	// (0x000528a7) setting_code_pane_t1

0xefe8,	// (0x0005ebc2) set_text_pane_t1_ParamLimits

0xefe8,	// (0x0005ebc2) set_text_pane_t1

0x3c23,	// (0x000537fd) set_opt_bg_pane_g1

0x3c2b,	// (0x00053805) set_opt_bg_pane_g2

0x6447,	// (0x00056021) set_opt_bg_pane_g3

0x3c3b,	// (0x00053815) set_opt_bg_pane_g4

0x3c43,	// (0x0005381d) set_opt_bg_pane_g5

0x3c4b,	// (0x00053825) set_opt_bg_pane_g6

0x6451,	// (0x0005602b) set_opt_bg_pane_g7

0x6459,	// (0x00056033) set_opt_bg_pane_g8

0x6463,	// (0x0005603d) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0005f54d) set_opt_bg_pane_g

0x643a,	// (0x00056014) slider_set_pane_g1

0x17e4,	// (0x000513be) slider_set_pane_g2

0x0006,

0xf964,	// (0x0005f53e) slider_set_pane_g

0x1758,	// (0x00051332) volume_set_pane_g1

0x1760,	// (0x0005133a) volume_set_pane_g2

0x1768,	// (0x00051342) volume_set_pane_g3

0x1770,	// (0x0005134a) volume_set_pane_g4

0x1778,	// (0x00051352) volume_set_pane_g5

0x1780,	// (0x0005135a) volume_set_pane_g6

0x1788,	// (0x00051362) volume_set_pane_g7

0x1790,	// (0x0005136a) volume_set_pane_g8

0x1798,	// (0x00051372) volume_set_pane_g9

0x17a0,	// (0x0005137a) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0005f516) volume_set_pane_g

0xcd42,	// (0x0005c91c) indicator_pane_ParamLimits

0xcd42,	// (0x0005c91c) indicator_pane

0xcd6a,	// (0x0005c944) main_idle_pane_g2_ParamLimits

0xcd6a,	// (0x0005c944) main_idle_pane_g2

0xcda2,	// (0x0005c97c) main_pane_idle_g1_ParamLimits

0xcda2,	// (0x0005c97c) main_pane_idle_g1

0x2d1c,	// (0x000528f6) popup_clock_digital_analogue_window_ParamLimits

0x2d1c,	// (0x000528f6) popup_clock_digital_analogue_window

0xcdc9,	// (0x0005c9a3) soft_indicator_pane_ParamLimits

0xcdc9,	// (0x0005c9a3) soft_indicator_pane

0xcde3,	// (0x0005c9bd) wallpaper_pane_ParamLimits

0xcde3,	// (0x0005c9bd) wallpaper_pane

0x2b98,	// (0x00052772) wallpaper_pane_g1

0xcdf5,	// (0x0005c9cf) indicator_pane_g1_ParamLimits

0xcdf5,	// (0x0005c9cf) indicator_pane_g1

0x681c,	// (0x000563f6) navi_navi_icon_text_pane_srt_g1

0x2d6e,	// (0x00052948) soft_indicator_pane_t1

0x2d88,	// (0x00052962) aid_ps_area_pane

0xce0b,	// (0x0005c9e5) aid_ps_clock_pane

0x2da7,	// (0x00052981) aid_ps_indicator_pane

0x2db3,	// (0x0005298d) indicator_ps_pane_ParamLimits

0x2db3,	// (0x0005298d) indicator_ps_pane

0x2dc2,	// (0x0005299c) power_save_pane_g1_ParamLimits

0x2dc2,	// (0x0005299c) power_save_pane_g1

0x2dce,	// (0x000529a8) power_save_pane_g2_ParamLimits

0x2dce,	// (0x000529a8) power_save_pane_g2

0xf313,	// (0x0005eeed) aid_navinavi_width_pane

0x2d88,	// (0x00052962) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0005f144) power_save_pane_g_ParamLimits

0xf56a,	// (0x0005f144) power_save_pane_g

0x2ddc,	// (0x000529b6) power_save_pane_t1_ParamLimits

0x2ddc,	// (0x000529b6) power_save_pane_t1

0xce0b,	// (0x0005c9e5) aid_ps_clock_pane_ParamLimits

0x2da7,	// (0x00052981) aid_ps_indicator_pane_ParamLimits

0x2dee,	// (0x000529c8) power_save_pane_t4_ParamLimits

0x2dee,	// (0x000529c8) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005f149) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005f149) power_save_pane_t

0x2e18,	// (0x000529f2) power_save_t3_ParamLimits

0x2e18,	// (0x000529f2) power_save_t3

0x2e03,	// (0x000529dd) power_save_t2_ParamLimits

0x2e03,	// (0x000529dd) power_save_t2

0x2e2d,	// (0x00052a07) indicator_ps_pane_g1

0xce19,	// (0x0005c9f3) ai_gene_pane_ParamLimits

0xce19,	// (0x0005c9f3) ai_gene_pane

0xce30,	// (0x0005ca0a) ai_links_pane_ParamLimits

0xce30,	// (0x0005ca0a) ai_links_pane

0xce48,	// (0x0005ca22) indicator_pane_cp1_ParamLimits

0xce48,	// (0x0005ca22) indicator_pane_cp1

0xce57,	// (0x0005ca31) main_pane_idle_g1_cp_ParamLimits

0xce57,	// (0x0005ca31) main_pane_idle_g1_cp

0x2e66,	// (0x00052a40) popup_ai_links_title_window

0xce6f,	// (0x0005ca49) soft_indicator_pane_cp1_ParamLimits

0xce6f,	// (0x0005ca49) soft_indicator_pane_cp1

0x6228,	// (0x00055e02) ai_links_pane_g1

0x6231,	// (0x00055e0b) grid_ai_links_pane

0xd96a,	// (0x0005d544) ai_gene_pane_1

0x6216,	// (0x00055df0) ai_gene_pane_2

0x621f,	// (0x00055df9) list_highlight_pane_cp4

0xd946,	// (0x0005d520) cell_ai_link_pane_ParamLimits

0xd946,	// (0x0005d520) cell_ai_link_pane

0x61e7,	// (0x00055dc1) cell_ai_link_pane_g1

0x3776,	// (0x00053350) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0005f4f1) cell_ai_link_pane_g

0x2ba2,	// (0x0005277c) grid_highlight_cp2

0x2ba2,	// (0x0005277c) bg_popup_sub_pane_cp1

0x2e89,	// (0x00052a63) popup_ai_links_title_window_t1

0x6135,	// (0x00055d0f) ai_gene_pane_1_g1_ParamLimits

0x6135,	// (0x00055d0f) ai_gene_pane_1_g1

0x6141,	// (0x00055d1b) ai_gene_pane_1_g2_ParamLimits

0x6141,	// (0x00055d1b) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0005f4e7) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0005f4e7) ai_gene_pane_1_g

0x614e,	// (0x00055d28) ai_gene_pane_1_t1_ParamLimits

0x614e,	// (0x00055d28) ai_gene_pane_1_t1

0x6182,	// (0x00055d5c) grid_ai_soft_ind_pane

0x6120,	// (0x00055cfa) ai_gene_pane_2_t1_ParamLimits

0x6120,	// (0x00055cfa) ai_gene_pane_2_t1

0xce83,	// (0x0005ca5d) main_pane_empty_t1_ParamLimits

0xce83,	// (0x0005ca5d) main_pane_empty_t1

0xce9b,	// (0x0005ca75) main_pane_empty_t2_ParamLimits

0xce9b,	// (0x0005ca75) main_pane_empty_t2

0xceb0,	// (0x0005ca8a) main_pane_empty_t3_ParamLimits

0xceb0,	// (0x0005ca8a) main_pane_empty_t3

0xcec2,	// (0x0005ca9c) main_pane_empty_t4_ParamLimits

0xcec2,	// (0x0005ca9c) main_pane_empty_t4

0xced4,	// (0x0005caae) main_pane_empty_t5_ParamLimits

0xced4,	// (0x0005caae) main_pane_empty_t5

0x0004,

0xf574,	// (0x0005f14e) main_pane_empty_t_ParamLimits

0xf574,	// (0x0005f14e) main_pane_empty_t

0x3c74,	// (0x0005384e) bg_popup_window_pane_ParamLimits

0x3c74,	// (0x0005384e) bg_popup_window_pane

0x5e90,	// (0x00055a6a) find_popup_pane_cp2_ParamLimits

0x5e90,	// (0x00055a6a) find_popup_pane_cp2

0x5e9c,	// (0x00055a76) heading_pane_ParamLimits

0x5e9c,	// (0x00055a76) heading_pane

0x2ba2,	// (0x0005277c) bg_popup_sub_pane

0xd8c7,	// (0x0005d4a1) bg_popup_window_pane_g1_ParamLimits

0xd8c7,	// (0x0005d4a1) bg_popup_window_pane_g1

0xd8d6,	// (0x0005d4b0) bg_popup_window_pane_g2_ParamLimits

0xd8d6,	// (0x0005d4b0) bg_popup_window_pane_g2

0xd8e2,	// (0x0005d4bc) bg_popup_window_pane_g3_ParamLimits

0xd8e2,	// (0x0005d4bc) bg_popup_window_pane_g3

0xd8ee,	// (0x0005d4c8) bg_popup_window_pane_g4_ParamLimits

0xd8ee,	// (0x0005d4c8) bg_popup_window_pane_g4

0xd8fd,	// (0x0005d4d7) bg_popup_window_pane_g5_ParamLimits

0xd8fd,	// (0x0005d4d7) bg_popup_window_pane_g5

0xd90d,	// (0x0005d4e7) bg_popup_window_pane_g6_ParamLimits

0xd90d,	// (0x0005d4e7) bg_popup_window_pane_g6

0xd919,	// (0x0005d4f3) bg_popup_window_pane_g7_ParamLimits

0xd919,	// (0x0005d4f3) bg_popup_window_pane_g7

0xd928,	// (0x0005d502) bg_popup_window_pane_g8_ParamLimits

0xd928,	// (0x0005d502) bg_popup_window_pane_g8

0xd937,	// (0x0005d511) bg_popup_window_pane_g9_ParamLimits

0xd937,	// (0x0005d511) bg_popup_window_pane_g9

0x5e76,	// (0x00055a50) bg_popup_window_pane_g10_ParamLimits

0x5e76,	// (0x00055a50) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0005f4af) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0005f4af) bg_popup_window_pane_g

0x5d9f,	// (0x00055979) bg_popup_heading_pane_ParamLimits

0x5d9f,	// (0x00055979) bg_popup_heading_pane

0x1912,	// (0x000514ec) tabs_4_passive_pane_cp_srt_ParamLimits

0x1912,	// (0x000514ec) tabs_4_passive_pane_cp_srt

0x1924,	// (0x000514fe) tabs_4_passive_pane_srt_ParamLimits

0x5db3,	// (0x0005598d) heading_pane_g2

0x1924,	// (0x000514fe) tabs_4_passive_pane_srt

0x5126,	// (0x00054d00) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5126,	// (0x00054d00) bg_passive_tab_pane_cp3_srt

0x5dbb,	// (0x00055995) heading_pane_t1_ParamLimits

0x5dbb,	// (0x00055995) heading_pane_t1

0x5dd2,	// (0x000559ac) heading_pane_t2_ParamLimits

0x5dd2,	// (0x000559ac) heading_pane_t2

0x0001,

0xf8d0,	// (0x0005f4aa) heading_pane_t_ParamLimits

0xf8d0,	// (0x0005f4aa) heading_pane_t

0x58cc,	// (0x000554a6) bg_popup_heading_pane_g1

0x597b,	// (0x00055555) bg_popup_heading_pane_g2

0x5985,	// (0x0005555f) bg_popup_heading_pane_g3

0x598f,	// (0x00055569) bg_popup_heading_pane_g4

0x5999,	// (0x00055573) bg_popup_heading_pane_g5

0x59a3,	// (0x0005557d) bg_popup_heading_pane_g6

0x59ab,	// (0x00055585) bg_popup_heading_pane_g7

0x59b3,	// (0x0005558d) bg_popup_heading_pane_g8

0x59bd,	// (0x00055597) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0005f466) bg_popup_heading_pane_g

0x50b2,	// (0x00054c8c) bg_popup_sub_pane_g1

0x50c2,	// (0x00054c9c) bg_popup_sub_pane_g2

0x50ba,	// (0x00054c94) bg_popup_sub_pane_g3

0x50d2,	// (0x00054cac) bg_popup_sub_pane_g4

0x50ca,	// (0x00054ca4) bg_popup_sub_pane_g5

0x50da,	// (0x00054cb4) bg_popup_sub_pane_g6

0x50e2,	// (0x00054cbc) bg_popup_sub_pane_g7

0x50f2,	// (0x00054ccc) bg_popup_sub_pane_g8

0x50ea,	// (0x00054cc4) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0005f440) bg_popup_sub_pane_g

0x2efd,	// (0x00052ad7) bg_popup_window_pane_cp5_ParamLimits

0x2efd,	// (0x00052ad7) bg_popup_window_pane_cp5

0x2f19,	// (0x00052af3) popup_note_window_g1_ParamLimits

0x2f19,	// (0x00052af3) popup_note_window_g1

0x2f25,	// (0x00052aff) popup_note_window_t1_ParamLimits

0x2f25,	// (0x00052aff) popup_note_window_t1

0x2f3b,	// (0x00052b15) popup_note_window_t2_ParamLimits

0x2f3b,	// (0x00052b15) popup_note_window_t2

0x2f51,	// (0x00052b2b) popup_note_window_t3_ParamLimits

0x2f51,	// (0x00052b2b) popup_note_window_t3

0x2f67,	// (0x00052b41) popup_note_window_t4_ParamLimits

0x2f67,	// (0x00052b41) popup_note_window_t4

0x2f8f,	// (0x00052b69) popup_note_window_t5_ParamLimits

0x2f8f,	// (0x00052b69) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005f159) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005f159) popup_note_window_t

0x2fb3,	// (0x00052b8d) bg_popup_window_pane_cp6_ParamLimits

0x2fb3,	// (0x00052b8d) bg_popup_window_pane_cp6

0x5848,	// (0x00055422) popup_note_image_window_g1_ParamLimits

0x5848,	// (0x00055422) popup_note_image_window_g1

0x5854,	// (0x0005542e) popup_note_image_window_g2_ParamLimits

0x5854,	// (0x0005542e) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0005f434) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0005f434) popup_note_image_window_g

0x586d,	// (0x00055447) popup_note_image_window_t1_ParamLimits

0x586d,	// (0x00055447) popup_note_image_window_t1

0x5886,	// (0x00055460) popup_note_image_window_t2_ParamLimits

0x5886,	// (0x00055460) popup_note_image_window_t2

0x589f,	// (0x00055479) popup_note_image_window_t3_ParamLimits

0x589f,	// (0x00055479) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0005f439) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0005f439) popup_note_image_window_t

0x5709,	// (0x000552e3) bg_popup_window_pane_cp7_ParamLimits

0x5709,	// (0x000552e3) bg_popup_window_pane_cp7

0x5739,	// (0x00055313) popup_note_wait_window_g1_ParamLimits

0x5739,	// (0x00055313) popup_note_wait_window_g1

0x5745,	// (0x0005531f) popup_note_wait_window_g2_ParamLimits

0x5745,	// (0x0005531f) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0005f422) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0005f422) popup_note_wait_window_g

0x575d,	// (0x00055337) popup_note_wait_window_t1_ParamLimits

0x575d,	// (0x00055337) popup_note_wait_window_t1

0x5784,	// (0x0005535e) popup_note_wait_window_t2_ParamLimits

0x5784,	// (0x0005535e) popup_note_wait_window_t2

0x57a1,	// (0x0005537b) popup_note_wait_window_t3_ParamLimits

0x57a1,	// (0x0005537b) popup_note_wait_window_t3

0x57b4,	// (0x0005538e) popup_note_wait_window_t4_ParamLimits

0x57b4,	// (0x0005538e) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0005f429) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0005f429) popup_note_wait_window_t

0x57d9,	// (0x000553b3) wait_bar_pane_ParamLimits

0x57d9,	// (0x000553b3) wait_bar_pane

0x2ba2,	// (0x0005277c) wait_anim_pane

0x2ba2,	// (0x0005277c) wait_border_pane

0x2b98,	// (0x00052772) wait_anim_pane_g1

0x2b98,	// (0x00052772) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0005f2e2) wait_anim_pane_g

0x56ad,	// (0x00055287) wait_border_pane_g1

0x56b8,	// (0x00055292) wait_border_pane_g2

0x56c1,	// (0x0005529b) wait_border_pane_g3

0x0002,

0xf841,	// (0x0005f41b) wait_border_pane_g

0x5518,	// (0x000550f2) bg_popup_window_pane_cp16_ParamLimits

0x5518,	// (0x000550f2) bg_popup_window_pane_cp16

0x5618,	// (0x000551f2) indicator_popup_pane_cp4_ParamLimits

0x5618,	// (0x000551f2) indicator_popup_pane_cp4

0x562c,	// (0x00055206) popup_query_data_window_t1_ParamLimits

0x562c,	// (0x00055206) popup_query_data_window_t1

0x563e,	// (0x00055218) popup_query_data_window_t2_ParamLimits

0x563e,	// (0x00055218) popup_query_data_window_t2

0x5657,	// (0x00055231) popup_query_data_window_t3_ParamLimits

0x5657,	// (0x00055231) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0005f414) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0005f414) popup_query_data_window_t

0x5671,	// (0x0005524b) query_popup_data_pane_ParamLimits

0x5671,	// (0x0005524b) query_popup_data_pane

0x5685,	// (0x0005525f) query_popup_data_pane_cp1_ParamLimits

0x5685,	// (0x0005525f) query_popup_data_pane_cp1

0x5518,	// (0x000550f2) bg_popup_window_pane_cp10_ParamLimits

0x5518,	// (0x000550f2) bg_popup_window_pane_cp10

0x554a,	// (0x00055124) indicator_popup_pane_ParamLimits

0x554a,	// (0x00055124) indicator_popup_pane

0x556c,	// (0x00055146) popup_query_code_window_t1_ParamLimits

0x556c,	// (0x00055146) popup_query_code_window_t1

0x5586,	// (0x00055160) popup_query_code_window_t2_ParamLimits

0x5586,	// (0x00055160) popup_query_code_window_t2

0x55cf,	// (0x000551a9) popup_query_code_window_t3_ParamLimits

0x55cf,	// (0x000551a9) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0005f40d) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0005f40d) popup_query_code_window_t

0x55fe,	// (0x000551d8) query_popup_pane_ParamLimits

0x55fe,	// (0x000551d8) query_popup_pane

0x2fb3,	// (0x00052b8d) bg_popup_window_pane_cp15_ParamLimits

0x2fb3,	// (0x00052b8d) bg_popup_window_pane_cp15

0x2fd1,	// (0x00052bab) indicator_popup_pane_cp1_ParamLimits

0x2fd1,	// (0x00052bab) indicator_popup_pane_cp1

0x2fe4,	// (0x00052bbe) indicator_popup_pane_cp2_ParamLimits

0x2fe4,	// (0x00052bbe) indicator_popup_pane_cp2

0x2ff7,	// (0x00052bd1) popup_query_data_code_window_g1_ParamLimits

0x2ff7,	// (0x00052bd1) popup_query_data_code_window_g1

0x300a,	// (0x00052be4) popup_query_data_code_window_t1_ParamLimits

0x300a,	// (0x00052be4) popup_query_data_code_window_t1

0x301c,	// (0x00052bf6) popup_query_data_code_window_t2_ParamLimits

0x301c,	// (0x00052bf6) popup_query_data_code_window_t2

0x302e,	// (0x00052c08) popup_query_data_code_window_t3_ParamLimits

0x302e,	// (0x00052c08) popup_query_data_code_window_t3

0x371b,	// (0x000532f5) popup_query_data_code_window_t4_ParamLimits

0x371b,	// (0x000532f5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0005f164) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0005f164) popup_query_data_code_window_t

0x142b,	// (0x00051005) list_single_midp_graphic_pane_g3

0x3733,	// (0x0005330d) query_popup_data_pane_cp2_ParamLimits

0x3746,	// (0x00053320) query_popup_pane_cp2_ParamLimits

0x3746,	// (0x00053320) query_popup_pane_cp2

0x2ba2,	// (0x0005277c) bg_popup_window_pane_cp11

0x5510,	// (0x000550ea) heading_pane_cp5

0x3831,	// (0x0005340b) listscroll_popup_info_pane

0x2ba2,	// (0x0005277c) input_focus_pane_cp3

0x3759,	// (0x00053333) query_popup_pane_t1

0x3767,	// (0x00053341) list_popup_info_pane_ParamLimits

0x3767,	// (0x00053341) list_popup_info_pane

0x3776,	// (0x00053350) listscroll_popup_info_pane_g1

0x377e,	// (0x00053358) scroll_pane_cp7

0x3788,	// (0x00053362) popup_info_list_pane_t1_ParamLimits

0x3788,	// (0x00053362) popup_info_list_pane_t1

0x37a2,	// (0x0005337c) popup_info_list_pane_t2_ParamLimits

0x37a2,	// (0x0005337c) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0005f16d) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0005f16d) popup_info_list_pane_t

0x2ba2,	// (0x0005277c) bg_popup_window_pane_cp12

0x6836,	// (0x00056410) find_popup_pane

0x2c82,	// (0x0005285c) bg_popup_window_pane_cp3

0x37bc,	// (0x00053396) heading_pane_cp3

0x37c8,	// (0x000533a2) listscroll_popup_graphic_pane

0x2ba2,	// (0x0005277c) bg_popup_window_pane_cp4

0xcf36,	// (0x0005cb10) heading_pane_cp4

0x3831,	// (0x0005340b) listscroll_popup_colour_pane

0x3839,	// (0x00053413) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3839,	// (0x00053413) cell_large_graphic_colour_none_popup_pane

0xcf3e,	// (0x0005cb18) grid_large_graphic_colour_popup_pane_ParamLimits

0xcf3e,	// (0x0005cb18) grid_large_graphic_colour_popup_pane

0x3879,	// (0x00053453) listscroll_popup_colour_pane_g1_ParamLimits

0x3879,	// (0x00053453) listscroll_popup_colour_pane_g1

0x3890,	// (0x0005346a) listscroll_popup_colour_pane_g2_ParamLimits

0x3890,	// (0x0005346a) listscroll_popup_colour_pane_g2

0x38a7,	// (0x00053481) listscroll_popup_colour_pane_g3_ParamLimits

0x38a7,	// (0x00053481) listscroll_popup_colour_pane_g3

0xcf62,	// (0x0005cb3c) listscroll_popup_colour_pane_g4_ParamLimits

0xcf62,	// (0x0005cb3c) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0005f172) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0005f172) listscroll_popup_colour_pane_g

0x38cb,	// (0x000534a5) scroll_pane_cp6_ParamLimits

0x38cb,	// (0x000534a5) scroll_pane_cp6

0xcf72,	// (0x0005cb4c) cell_large_graphic_colour_popup_pane_ParamLimits

0xcf72,	// (0x0005cb4c) cell_large_graphic_colour_popup_pane

0x38fc,	// (0x000534d6) cell_large_graphic_colour_none_popup_pane_t1

0x2ba2,	// (0x0005277c) grid_highlight_pane_cp5

0x390b,	// (0x000534e5) cell_large_graphic_colour_popup_pane_g1

0x3913,	// (0x000534ed) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005f17b) cell_large_graphic_colour_popup_pane_g

0x391b,	// (0x000534f5) cell_large_graphic_colour_popup_pane_g2_copy1

0x3924,	// (0x000534fe) grid_highlight_pane_cp4

0x392c,	// (0x00053506) bg_popup_window_pane_cp8_ParamLimits

0x392c,	// (0x00053506) bg_popup_window_pane_cp8

0x3947,	// (0x00053521) popup_snote_single_text_window_g1_ParamLimits

0x3947,	// (0x00053521) popup_snote_single_text_window_g1

0x3959,	// (0x00053533) popup_snote_single_text_window_t1_ParamLimits

0x3959,	// (0x00053533) popup_snote_single_text_window_t1

0x396c,	// (0x00053546) popup_snote_single_text_window_t2_ParamLimits

0x396c,	// (0x00053546) popup_snote_single_text_window_t2

0x397f,	// (0x00053559) popup_snote_single_text_window_t3_ParamLimits

0x397f,	// (0x00053559) popup_snote_single_text_window_t3

0x39b8,	// (0x00053592) popup_snote_single_text_window_t4_ParamLimits

0x39b8,	// (0x00053592) popup_snote_single_text_window_t4

0x39ec,	// (0x000535c6) popup_snote_single_text_window_t5_ParamLimits

0x39ec,	// (0x000535c6) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0005f180) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0005f180) popup_snote_single_text_window_t

0x3a1b,	// (0x000535f5) bg_popup_window_pane_cp9_ParamLimits

0x3a1b,	// (0x000535f5) bg_popup_window_pane_cp9

0x3947,	// (0x00053521) popup_snote_single_graphic_window_g1_ParamLimits

0x3947,	// (0x00053521) popup_snote_single_graphic_window_g1

0x3a29,	// (0x00053603) popup_snote_single_graphic_window_g2_ParamLimits

0x3a29,	// (0x00053603) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005f18b) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005f18b) popup_snote_single_graphic_window_g

0x3a35,	// (0x0005360f) popup_snote_single_graphic_window_t1_ParamLimits

0x3a35,	// (0x0005360f) popup_snote_single_graphic_window_t1

0x3a48,	// (0x00053622) popup_snote_single_graphic_window_t2_ParamLimits

0x3a48,	// (0x00053622) popup_snote_single_graphic_window_t2

0x3a5b,	// (0x00053635) popup_snote_single_graphic_window_t3_ParamLimits

0x3a5b,	// (0x00053635) popup_snote_single_graphic_window_t3

0x3a94,	// (0x0005366e) popup_snote_single_graphic_window_t4_ParamLimits

0x3a94,	// (0x0005366e) popup_snote_single_graphic_window_t4

0x3ac8,	// (0x000536a2) popup_snote_single_graphic_window_t5_ParamLimits

0x3ac8,	// (0x000536a2) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0005f190) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0005f190) popup_snote_single_graphic_window_t

0x677a,	// (0x00056354) grid_graphic_popup_pane_ParamLimits

0x677a,	// (0x00056354) grid_graphic_popup_pane

0x67a2,	// (0x0005637c) listscroll_popup_graphic_pane_g1_ParamLimits

0x67a2,	// (0x0005637c) listscroll_popup_graphic_pane_g1

0xdc1b,	// (0x0005d7f5) listscroll_popup_graphic_pane_g2_ParamLimits

0xdc1b,	// (0x0005d7f5) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0005f58a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0005f58a) listscroll_popup_graphic_pane_g

0x67ca,	// (0x000563a4) scroll_pane_cp5

0xdbd7,	// (0x0005d7b1) cell_graphic_popup_pane_ParamLimits

0xdbd7,	// (0x0005d7b1) cell_graphic_popup_pane

0x66f8,	// (0x000562d2) cell_graphic_popup_pane_g1

0x6700,	// (0x000562da) cell_graphic_popup_pane_g2

0x391b,	// (0x000534f5) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0005f583) cell_graphic_popup_pane_g

0x6709,	// (0x000562e3) cell_graphic_popup_pane_t2

0x3924,	// (0x000534fe) grid_highlight_pane_cp3

0x3b09,	// (0x000536e3) list_gen_pane_ParamLimits

0x3b09,	// (0x000536e3) list_gen_pane

0x3b3b,	// (0x00053715) scroll_pane

0xdb8e,	// (0x0005d768) bg_list_pane_g1_ParamLimits

0xdb8e,	// (0x0005d768) bg_list_pane_g1

0x666d,	// (0x00056247) bg_list_pane_g2_ParamLimits

0x666d,	// (0x00056247) bg_list_pane_g2

0x6682,	// (0x0005625c) bg_list_pane_g3_ParamLimits

0x6682,	// (0x0005625c) bg_list_pane_g3

0x6696,	// (0x00056270) bg_list_pane_g4_ParamLimits

0x6696,	// (0x00056270) bg_list_pane_g4

0xdbab,	// (0x0005d785) bg_list_pane_g5_ParamLimits

0xdbab,	// (0x0005d785) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0005f578) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0005f578) bg_list_pane_g

0xdb56,	// (0x0005d730) list_double2_graphic_large_graphic_pane_ParamLimits

0xdb56,	// (0x0005d730) list_double2_graphic_large_graphic_pane

0xdb56,	// (0x0005d730) list_double2_graphic_pane_ParamLimits

0xdb56,	// (0x0005d730) list_double2_graphic_pane

0xdb56,	// (0x0005d730) list_double2_large_graphic_pane_ParamLimits

0xdb56,	// (0x0005d730) list_double2_large_graphic_pane

0xdb56,	// (0x0005d730) list_double2_pane_ParamLimits

0xdb56,	// (0x0005d730) list_double2_pane

0xdb56,	// (0x0005d730) list_double_graphic_heading_pane_ParamLimits

0xdb56,	// (0x0005d730) list_double_graphic_heading_pane

0xdb56,	// (0x0005d730) list_double_graphic_pane_ParamLimits

0xdb56,	// (0x0005d730) list_double_graphic_pane

0xdb56,	// (0x0005d730) list_double_heading_pane_ParamLimits

0xdb56,	// (0x0005d730) list_double_heading_pane

0xdb56,	// (0x0005d730) list_double_large_graphic_pane_ParamLimits

0xdb56,	// (0x0005d730) list_double_large_graphic_pane

0xdb56,	// (0x0005d730) list_double_number_pane_ParamLimits

0xdb56,	// (0x0005d730) list_double_number_pane

0xdb56,	// (0x0005d730) list_double_pane_ParamLimits

0xdb56,	// (0x0005d730) list_double_pane

0xdb56,	// (0x0005d730) list_double_time_pane_ParamLimits

0xdb56,	// (0x0005d730) list_double_time_pane

0xdb56,	// (0x0005d730) list_setting_number_pane_ParamLimits

0xdb56,	// (0x0005d730) list_setting_number_pane

0xdb56,	// (0x0005d730) list_setting_pane_ParamLimits

0xdb56,	// (0x0005d730) list_setting_pane

0xdb68,	// (0x0005d742) list_single_2graphic_pane_ParamLimits

0xdb68,	// (0x0005d742) list_single_2graphic_pane

0xdb68,	// (0x0005d742) list_single_graphic_heading_pane_ParamLimits

0xdb68,	// (0x0005d742) list_single_graphic_heading_pane

0xdb68,	// (0x0005d742) list_single_graphic_pane_ParamLimits

0xdb68,	// (0x0005d742) list_single_graphic_pane

0xdb68,	// (0x0005d742) list_single_heading_pane_ParamLimits

0xdb68,	// (0x0005d742) list_single_heading_pane

0xdb56,	// (0x0005d730) list_single_large_graphic_pane_ParamLimits

0xdb56,	// (0x0005d730) list_single_large_graphic_pane

0xdb68,	// (0x0005d742) list_single_number_heading_pane_ParamLimits

0xdb68,	// (0x0005d742) list_single_number_heading_pane

0xdb68,	// (0x0005d742) list_single_number_pane_ParamLimits

0xdb68,	// (0x0005d742) list_single_number_pane

0xdb68,	// (0x0005d742) list_single_pane_ParamLimits

0xdb68,	// (0x0005d742) list_single_pane

0x2ba2,	// (0x0005277c) list_highlight_pane_cp1

0x4797,	// (0x00054371) list_single_pane_g1_ParamLimits

0x4797,	// (0x00054371) list_single_pane_g1

0x3114,	// (0x00052cee) list_single_pane_g2_ParamLimits

0x3114,	// (0x00052cee) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005f1ac) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005f1ac) list_single_pane_g

0x1a63,	// (0x0005163d) list_single_pane_t1_ParamLimits

0x1a63,	// (0x0005163d) list_single_pane_t1

0x4797,	// (0x00054371) list_single_number_pane_g1_ParamLimits

0x4797,	// (0x00054371) list_single_number_pane_g1

0x3114,	// (0x00052cee) list_single_number_pane_g2_ParamLimits

0x3114,	// (0x00052cee) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005f1ac) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005f1ac) list_single_number_pane_g

0x13f0,	// (0x00050fca) list_single_number_pane_t1_ParamLimits

0x13f0,	// (0x00050fca) list_single_number_pane_t1

0xc4a4,	// (0x0005c07e) list_single_number_pane_t2_ParamLimits

0xc4a4,	// (0x0005c07e) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0005f539) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0005f539) list_single_number_pane_t

0xb534,	// (0x0005b10e) list_single_graphic_pane_g1_ParamLimits

0xb534,	// (0x0005b10e) list_single_graphic_pane_g1

0x4797,	// (0x00054371) list_single_graphic_pane_g2_ParamLimits

0x4797,	// (0x00054371) list_single_graphic_pane_g2

0x3114,	// (0x00052cee) list_single_graphic_pane_g3_ParamLimits

0x3114,	// (0x00052cee) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0005f19b) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0005f19b) list_single_graphic_pane_g

0xb540,	// (0x0005b11a) list_single_graphic_pane_t1_ParamLimits

0xb540,	// (0x0005b11a) list_single_graphic_pane_t1

0xb556,	// (0x0005b130) list_single_heading_pane_g1_ParamLimits

0xb556,	// (0x0005b130) list_single_heading_pane_g1

0x3114,	// (0x00052cee) list_single_heading_pane_g2_ParamLimits

0x3114,	// (0x00052cee) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0005f1a2) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0005f1a2) list_single_heading_pane_g

0xb569,	// (0x0005b143) list_single_heading_pane_t1_ParamLimits

0xb569,	// (0x0005b143) list_single_heading_pane_t1

0xb57f,	// (0x0005b159) list_single_heading_pane_t2_ParamLimits

0xb57f,	// (0x0005b159) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0005f1a7) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0005f1a7) list_single_heading_pane_t

0x4797,	// (0x00054371) list_single_number_heading_pane_g1_ParamLimits

0x4797,	// (0x00054371) list_single_number_heading_pane_g1

0x3114,	// (0x00052cee) list_single_number_heading_pane_g2_ParamLimits

0x3114,	// (0x00052cee) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005f1ac) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005f1ac) list_single_number_heading_pane_g

0xb591,	// (0x0005b16b) list_single_number_heading_pane_t1_ParamLimits

0xb591,	// (0x0005b16b) list_single_number_heading_pane_t1

0xb5a7,	// (0x0005b181) list_single_number_heading_pane_t2_ParamLimits

0xb5a7,	// (0x0005b181) list_single_number_heading_pane_t2

0x1a3d,	// (0x00051617) list_single_number_heading_pane_t3_ParamLimits

0x1a3d,	// (0x00051617) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0005f1b1) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0005f1b1) list_single_number_heading_pane_t

0xb5b9,	// (0x0005b193) list_single_graphic_heading_pane_g1_ParamLimits

0xb5b9,	// (0x0005b193) list_single_graphic_heading_pane_g1

0xb5d1,	// (0x0005b1ab) list_single_graphic_heading_pane_g4_ParamLimits

0xb5d1,	// (0x0005b1ab) list_single_graphic_heading_pane_g4

0x3114,	// (0x00052cee) list_single_graphic_heading_pane_g5_ParamLimits

0x3114,	// (0x00052cee) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005f1b8) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005f1b8) list_single_graphic_heading_pane_g

0xb591,	// (0x0005b16b) list_single_graphic_heading_pane_t1_ParamLimits

0xb591,	// (0x0005b16b) list_single_graphic_heading_pane_t1

0xb5e2,	// (0x0005b1bc) list_single_graphic_heading_pane_t2_ParamLimits

0xb5e2,	// (0x0005b1bc) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005f1bf) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005f1bf) list_single_graphic_heading_pane_t

0x1a79,	// (0x00051653) list_single_large_graphic_pane_g1_ParamLimits

0x1a79,	// (0x00051653) list_single_large_graphic_pane_g1

0x1a85,	// (0x0005165f) list_single_large_graphic_pane_g2_ParamLimits

0x1a85,	// (0x0005165f) list_single_large_graphic_pane_g2

0x1a91,	// (0x0005166b) list_single_large_graphic_pane_g3_ParamLimits

0x1a91,	// (0x0005166b) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0005f1c4) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0005f1c4) list_single_large_graphic_pane_g

0x56b8,	// (0x00055292) wait_border_pane_g2_copy1

0x30a3,	// (0x00052c7d) list_single_large_graphic_pane_g4_cp2

0x1a9d,	// (0x00051677) list_single_large_graphic_pane_t1_ParamLimits

0x1a9d,	// (0x00051677) list_single_large_graphic_pane_t1

0x4682,	// (0x0005425c) list_double_pane_g1_ParamLimits

0x4682,	// (0x0005425c) list_double_pane_g1

0xb5f8,	// (0x0005b1d2) list_double_pane_g2_ParamLimits

0xb5f8,	// (0x0005b1d2) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005f1cb) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005f1cb) list_double_pane_g

0xb604,	// (0x0005b1de) list_double_pane_t1_ParamLimits

0xb604,	// (0x0005b1de) list_double_pane_t1

0xb61a,	// (0x0005b1f4) list_double_pane_t2_ParamLimits

0xb61a,	// (0x0005b1f4) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005f1d0) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005f1d0) list_double_pane_t

0xb62c,	// (0x0005b206) list_double2_pane_g1_ParamLimits

0xb62c,	// (0x0005b206) list_double2_pane_g1

0xb63d,	// (0x0005b217) list_double2_pane_g2_ParamLimits

0xb63d,	// (0x0005b217) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0005f1d5) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0005f1d5) list_double2_pane_g

0xb649,	// (0x0005b223) list_double2_pane_t1_ParamLimits

0xb649,	// (0x0005b223) list_double2_pane_t1

0xb65f,	// (0x0005b239) list_double2_pane_t2_ParamLimits

0xb65f,	// (0x0005b239) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005f1da) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005f1da) list_double2_pane_t

0x4682,	// (0x0005425c) list_double_number_pane_g1_ParamLimits

0x4682,	// (0x0005425c) list_double_number_pane_g1

0xb5f8,	// (0x0005b1d2) list_double_number_pane_g2_ParamLimits

0xb5f8,	// (0x0005b1d2) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005f1cb) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005f1cb) list_double_number_pane_g

0xb671,	// (0x0005b24b) list_double_number_pane_t1_ParamLimits

0xb671,	// (0x0005b24b) list_double_number_pane_t1

0xb683,	// (0x0005b25d) list_double_number_pane_t2_ParamLimits

0xb683,	// (0x0005b25d) list_double_number_pane_t2

0xb699,	// (0x0005b273) list_double_number_pane_t3_ParamLimits

0xb699,	// (0x0005b273) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005f1df) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005f1df) list_double_number_pane_t

0xb6ab,	// (0x0005b285) list_double_graphic_pane_g1_ParamLimits

0xb6ab,	// (0x0005b285) list_double_graphic_pane_g1

0xb6b7,	// (0x0005b291) list_double_graphic_pane_g2_ParamLimits

0xb6b7,	// (0x0005b291) list_double_graphic_pane_g2

0xb6c6,	// (0x0005b2a0) list_double_graphic_pane_g3_ParamLimits

0xb6c6,	// (0x0005b2a0) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005f1e6) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005f1e6) list_double_graphic_pane_g

0xb6de,	// (0x0005b2b8) list_double_graphic_pane_t1_ParamLimits

0xb6de,	// (0x0005b2b8) list_double_graphic_pane_t1

0xb6f4,	// (0x0005b2ce) list_double_graphic_pane_t2_ParamLimits

0xb6f4,	// (0x0005b2ce) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0005f1ef) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0005f1ef) list_double_graphic_pane_t

0xb706,	// (0x0005b2e0) list_double2_graphic_pane_g1_ParamLimits

0xb706,	// (0x0005b2e0) list_double2_graphic_pane_g1

0xb712,	// (0x0005b2ec) list_double2_graphic_pane_g2_ParamLimits

0xb712,	// (0x0005b2ec) list_double2_graphic_pane_g2

0xb71e,	// (0x0005b2f8) list_double2_graphic_pane_g3_ParamLimits

0xb71e,	// (0x0005b2f8) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0005f1f4) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0005f1f4) list_double2_graphic_pane_g

0xb72a,	// (0x0005b304) list_double2_graphic_pane_t1_ParamLimits

0xb72a,	// (0x0005b304) list_double2_graphic_pane_t1

0xb740,	// (0x0005b31a) list_double2_graphic_pane_t2_ParamLimits

0xb740,	// (0x0005b31a) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005f1fb) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005f1fb) list_double2_graphic_pane_t

0xb752,	// (0x0005b32c) list_double_large_graphic_pane_g1_ParamLimits

0xb752,	// (0x0005b32c) list_double_large_graphic_pane_g1

0xb771,	// (0x0005b34b) list_double_large_graphic_pane_g2_ParamLimits

0xb771,	// (0x0005b34b) list_double_large_graphic_pane_g2

0xb5f8,	// (0x0005b1d2) list_double_large_graphic_pane_g3_ParamLimits

0xb5f8,	// (0x0005b1d2) list_double_large_graphic_pane_g3

0xb787,	// (0x0005b361) list_double_large_graphic_pane_g4_ParamLimits

0xb787,	// (0x0005b361) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0005f200) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0005f200) list_double_large_graphic_pane_g

0xb799,	// (0x0005b373) list_double_large_graphic_pane_t1_ParamLimits

0xb799,	// (0x0005b373) list_double_large_graphic_pane_t1

0xb7b2,	// (0x0005b38c) list_double_large_graphic_pane_t2_ParamLimits

0xb7b2,	// (0x0005b38c) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005f20b) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005f20b) list_double_large_graphic_pane_t

0xb7c4,	// (0x0005b39e) list_double2_large_graphic_pane_g1_ParamLimits

0xb7c4,	// (0x0005b39e) list_double2_large_graphic_pane_g1

0xb7d0,	// (0x0005b3aa) list_double2_large_graphic_pane_g2_ParamLimits

0xb7d0,	// (0x0005b3aa) list_double2_large_graphic_pane_g2

0xb71e,	// (0x0005b2f8) list_double2_large_graphic_pane_g3_ParamLimits

0xb71e,	// (0x0005b2f8) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0005f210) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0005f210) list_double2_large_graphic_pane_g

0xb7e1,	// (0x0005b3bb) list_double2_large_graphic_pane_t1_ParamLimits

0xb7e1,	// (0x0005b3bb) list_double2_large_graphic_pane_t1

0xb7f7,	// (0x0005b3d1) list_double2_large_graphic_pane_t2_ParamLimits

0xb7f7,	// (0x0005b3d1) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0005f217) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0005f217) list_double2_large_graphic_pane_t

0xb809,	// (0x0005b3e3) list_double_heading_pane_g1_ParamLimits

0xb809,	// (0x0005b3e3) list_double_heading_pane_g1

0xb81a,	// (0x0005b3f4) list_double_heading_pane_g2_ParamLimits

0xb81a,	// (0x0005b3f4) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0005f21c) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0005f21c) list_double_heading_pane_g

0xb826,	// (0x0005b400) list_double_heading_pane_t1_ParamLimits

0xb826,	// (0x0005b400) list_double_heading_pane_t1

0xb65f,	// (0x0005b239) list_double_heading_pane_t2_ParamLimits

0xb65f,	// (0x0005b239) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0005f221) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0005f221) list_double_heading_pane_t

0xb83c,	// (0x0005b416) list_double_graphic_heading_pane_g1_ParamLimits

0xb83c,	// (0x0005b416) list_double_graphic_heading_pane_g1

0xb809,	// (0x0005b3e3) list_double_graphic_heading_pane_g2_ParamLimits

0xb809,	// (0x0005b3e3) list_double_graphic_heading_pane_g2

0xb81a,	// (0x0005b3f4) list_double_graphic_heading_pane_g3_ParamLimits

0xb81a,	// (0x0005b3f4) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0005f226) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0005f226) list_double_graphic_heading_pane_g

0xb848,	// (0x0005b422) list_double_graphic_heading_pane_t1_ParamLimits

0xb848,	// (0x0005b422) list_double_graphic_heading_pane_t1

0xb740,	// (0x0005b31a) list_double_graphic_heading_pane_t2_ParamLimits

0xb740,	// (0x0005b31a) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0005f22d) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0005f22d) list_double_graphic_heading_pane_t

0xb85e,	// (0x0005b438) list_double_time_pane_g1_ParamLimits

0xb85e,	// (0x0005b438) list_double_time_pane_g1

0xb86f,	// (0x0005b449) list_double_time_pane_g2_ParamLimits

0xb86f,	// (0x0005b449) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0005f232) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0005f232) list_double_time_pane_g

0xb87b,	// (0x0005b455) list_double_time_pane_t1_ParamLimits

0xb87b,	// (0x0005b455) list_double_time_pane_t1

0xb891,	// (0x0005b46b) list_double_time_pane_t2_ParamLimits

0xb891,	// (0x0005b46b) list_double_time_pane_t2

0xb8a3,	// (0x0005b47d) list_double_time_pane_t3_ParamLimits

0xb8a3,	// (0x0005b47d) list_double_time_pane_t3

0xb8b5,	// (0x0005b48f) list_double_time_pane_t4_ParamLimits

0xb8b5,	// (0x0005b48f) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0005f237) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0005f237) list_double_time_pane_t

0xb8c7,	// (0x0005b4a1) list_setting_pane_g1_ParamLimits

0xb8c7,	// (0x0005b4a1) list_setting_pane_g1

0xb63d,	// (0x0005b217) list_setting_pane_g2_ParamLimits

0xb63d,	// (0x0005b217) list_setting_pane_g2

0x0001,

0xf666,	// (0x0005f240) list_setting_pane_g_ParamLimits

0xf666,	// (0x0005f240) list_setting_pane_g

0xb8d3,	// (0x0005b4ad) list_setting_pane_t1_ParamLimits

0xb8d3,	// (0x0005b4ad) list_setting_pane_t1

0xb8ed,	// (0x0005b4c7) list_setting_pane_t2_ParamLimits

0xb8ed,	// (0x0005b4c7) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0005f245) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0005f245) list_setting_pane_t

0xb92c,	// (0x0005b506) set_value_pane_cp_ParamLimits

0xb92c,	// (0x0005b506) set_value_pane_cp

0xb938,	// (0x0005b512) list_setting_number_pane_g1_ParamLimits

0xb938,	// (0x0005b512) list_setting_number_pane_g1

0xb944,	// (0x0005b51e) list_setting_number_pane_g2_ParamLimits

0xb944,	// (0x0005b51e) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0005f24c) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0005f24c) list_setting_number_pane_g

0xb950,	// (0x0005b52a) list_setting_number_pane_t1_ParamLimits

0xb950,	// (0x0005b52a) list_setting_number_pane_t1

0xb969,	// (0x0005b543) list_setting_number_pane_t2_ParamLimits

0xb969,	// (0x0005b543) list_setting_number_pane_t2

0xb983,	// (0x0005b55d) list_setting_number_pane_t3_ParamLimits

0xb983,	// (0x0005b55d) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0005f251) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0005f251) list_setting_number_pane_t

0xb92c,	// (0x0005b506) set_value_pane_ParamLimits

0xb92c,	// (0x0005b506) set_value_pane

0x3b7b,	// (0x00053755) bg_set_opt_pane_ParamLimits

0x3b7b,	// (0x00053755) bg_set_opt_pane

0x0513,	// (0x000500ed) set_value_pane_t1

0x3b9c,	// (0x00053776) slider_set_pane_cp3

0x3ba5,	// (0x0005377f) volume_small_pane_cp

0x3bae,	// (0x00053788) list_form_gen_pane

0x3bb7,	// (0x00053791) scroll_pane_cp8

0xb9c6,	// (0x0005b5a0) form_field_data_pane_ParamLimits

0xb9c6,	// (0x0005b5a0) form_field_data_pane

0xb9dd,	// (0x0005b5b7) form_field_data_wide_pane_ParamLimits

0xb9dd,	// (0x0005b5b7) form_field_data_wide_pane

0xb9fd,	// (0x0005b5d7) form_field_popup_pane_ParamLimits

0xb9fd,	// (0x0005b5d7) form_field_popup_pane

0xba15,	// (0x0005b5ef) form_field_popup_wide_pane_ParamLimits

0xba15,	// (0x0005b5ef) form_field_popup_wide_pane

0x05af,	// (0x00050189) form_field_slider_pane_ParamLimits

0x05af,	// (0x00050189) form_field_slider_pane

0x05c2,	// (0x0005019c) form_field_slider_wide_pane_ParamLimits

0x05c2,	// (0x0005019c) form_field_slider_wide_pane

0x3bc8,	// (0x000537a2) data_form_pane

0xba36,	// (0x0005b610) form_field_data_pane_t1

0x3bd4,	// (0x000537ae) input_focus_pane

0x05f7,	// (0x000501d1) data_form_wide_pane

0x0614,	// (0x000501ee) form_field_data_wide_pane_t1

0x3939,	// (0x00053513) input_focus_pane_cp6

0xba50,	// (0x0005b62a) form_field_popup_pane_t1

0x3bd4,	// (0x000537ae) input_focus_pane_cp7

0x3bf6,	// (0x000537d0) list_form_pane

0x0656,	// (0x00050230) form_field_popup_wide_pane_t1

0x3bd4,	// (0x000537ae) input_focus_pane_cp8

0x3c02,	// (0x000537dc) list_form_wide_pane

0xba72,	// (0x0005b64c) form_field_slider_pane_t1_ParamLimits

0xba72,	// (0x0005b64c) form_field_slider_pane_t1

0xba8a,	// (0x0005b664) form_field_slider_pane_t2_ParamLimits

0xba8a,	// (0x0005b664) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0005f261) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0005f261) form_field_slider_pane_t

0x2efd,	// (0x00052ad7) input_focus_pane_cp9_ParamLimits

0x2efd,	// (0x00052ad7) input_focus_pane_cp9

0xba9f,	// (0x0005b679) slider_cont_pane_ParamLimits

0xba9f,	// (0x0005b679) slider_cont_pane

0x3c11,	// (0x000537eb) form_field_slider_wide_pane_t1_ParamLimits

0x3c11,	// (0x000537eb) form_field_slider_wide_pane_t1

0x06b2,	// (0x0005028c) form_field_slider_wide_pane_t2_ParamLimits

0x06b2,	// (0x0005028c) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0005f266) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0005f266) form_field_slider_wide_pane_t

0x2efd,	// (0x00052ad7) input_focus_pane_cp10_ParamLimits

0x2efd,	// (0x00052ad7) input_focus_pane_cp10

0xbab3,	// (0x0005b68d) slider_cont_pane_cp1_ParamLimits

0xbab3,	// (0x0005b68d) slider_cont_pane_cp1

0xbac7,	// (0x0005b6a1) slider_form_pane_cp

0x3c23,	// (0x000537fd) input_focus_pane_g1

0x3c2b,	// (0x00053805) input_focus_pane_g2

0x3c33,	// (0x0005380d) input_focus_pane_g3

0x3c3b,	// (0x00053815) input_focus_pane_g4

0x3c43,	// (0x0005381d) input_focus_pane_g5

0x3c4b,	// (0x00053825) input_focus_pane_g6

0x3c53,	// (0x0005382d) input_focus_pane_g7

0x3c5b,	// (0x00053835) input_focus_pane_g8

0x3c63,	// (0x0005383d) input_focus_pane_g9

0x2b98,	// (0x00052772) input_focus_pane_g10

0x0009,

0xf691,	// (0x0005f26b) input_focus_pane_g

0x56c1,	// (0x0005529b) wait_border_pane_g3_copy1

0xbacf,	// (0x0005b6a9) data_form_pane_t1

0x2b98,	// (0x00052772) wait_anim_pane_g1_copy1

0xc4b6,	// (0x0005c090) data_form_wide_pane_t1

0xbae8,	// (0x0005b6c2) list_form_graphic_pane_cp_ParamLimits

0xbae8,	// (0x0005b6c2) list_form_graphic_pane_cp

0x65e2,	// (0x000561bc) slider_form_pane_g1

0x65eb,	// (0x000561c5) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0005f569) slider_form_pane_g

0xbaf9,	// (0x0005b6d3) list_form_graphic_pane_ParamLimits

0xbaf9,	// (0x0005b6d3) list_form_graphic_pane

0x0730,	// (0x0005030a) list_form_graphic_pane_g1

0x0738,	// (0x00050312) list_form_graphic_pane_t1_ParamLimits

0x0738,	// (0x00050312) list_form_graphic_pane_t1

0x2c82,	// (0x0005285c) list_highlight_pane_cp5_ParamLimits

0x2c82,	// (0x0005285c) list_highlight_pane_cp5

0xbb0b,	// (0x0005b6e5) find_pane_g1

0x3c6b,	// (0x00053845) input_find_pane

0xbb14,	// (0x0005b6ee) input_find_pane_g1_ParamLimits

0xbb14,	// (0x0005b6ee) input_find_pane_g1

0xbb20,	// (0x0005b6fa) input_find_pane_t1_ParamLimits

0xbb20,	// (0x0005b6fa) input_find_pane_t1

0xbb35,	// (0x0005b70f) input_find_pane_t2_ParamLimits

0xbb35,	// (0x0005b70f) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0005f280) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0005f280) input_find_pane_t

0x3c74,	// (0x0005384e) input_focus_pane_cp5_ParamLimits

0x3c74,	// (0x0005384e) input_focus_pane_cp5

0x3c8e,	// (0x00053868) bg_popup_window_pane_cp2_ParamLimits

0x3c8e,	// (0x00053868) bg_popup_window_pane_cp2

0x3c9b,	// (0x00053875) listscroll_menu_pane_ParamLimits

0x3c9b,	// (0x00053875) listscroll_menu_pane

0xcfa7,	// (0x0005cb81) popup_submenu_window_ParamLimits

0xcfa7,	// (0x0005cb81) popup_submenu_window

0x3cd3,	// (0x000538ad) find_popup_pane_g1

0x3cdb,	// (0x000538b5) input_popup_find_pane_cp

0x3c74,	// (0x0005384e) input_focus_pane_cp4_ParamLimits

0x3c74,	// (0x0005384e) input_focus_pane_cp4

0x3cf1,	// (0x000538cb) input_popup_find_pane_t1_ParamLimits

0x3cf1,	// (0x000538cb) input_popup_find_pane_t1

0x2ba2,	// (0x0005277c) bg_popup_sub_pane_cp

0x3d1f,	// (0x000538f9) listscroll_popup_sub_pane

0x3d27,	// (0x00053901) list_submenu_pane_ParamLimits

0x3d27,	// (0x00053901) list_submenu_pane

0x3d38,	// (0x00053912) scroll_pane_cp4

0x3d40,	// (0x0005391a) list_single_popup_submenu_pane_ParamLimits

0x3d40,	// (0x0005391a) list_single_popup_submenu_pane

0x3d54,	// (0x0005392e) list_single_popup_submenu_pane_g1

0x3d5c,	// (0x00053936) list_single_popup_submenu_pane_t1_ParamLimits

0x3d5c,	// (0x00053936) list_single_popup_submenu_pane_t1

0x2efd,	// (0x00052ad7) bg_active_tab_pane_cp1_ParamLimits

0x2efd,	// (0x00052ad7) bg_active_tab_pane_cp1

0x3d71,	// (0x0005394b) tabs_2_active_pane_g1

0xcfe1,	// (0x0005cbbb) tabs_2_active_pane_t1

0x2efd,	// (0x00052ad7) bg_passive_tab_pane_cp1_ParamLimits

0x2efd,	// (0x00052ad7) bg_passive_tab_pane_cp1

0x3d71,	// (0x0005394b) tabs_2_passive_pane_g1

0xcfe1,	// (0x0005cbbb) tabs_2_passive_pane_t1

0x2c82,	// (0x0005285c) bg_active_tab_pane_cp4

0xcff3,	// (0x0005cbcd) tabs_2_long_active_pane_t1

0x4b9c,	// (0x00054776) bg_passive_tab_pane_cp4

0x1433,	// (0x0005100d) list_single_midp_graphic_pane_g4_ParamLimits

0x2c82,	// (0x0005285c) bg_active_tab_pane_cp5

0xd006,	// (0x0005cbe0) tabs_3_long_active_pane_t1

0x4b9c,	// (0x00054776) bg_passive_tab_pane_cp5

0x1433,	// (0x0005100d) list_single_midp_graphic_pane_g4

0x2c82,	// (0x0005285c) bg_popup_window_pane_cp13_ParamLimits

0x2c82,	// (0x0005285c) bg_popup_window_pane_cp13

0x3dd3,	// (0x000539ad) listscroll_popup_fast_pane_ParamLimits

0x3dd3,	// (0x000539ad) listscroll_popup_fast_pane

0x3de2,	// (0x000539bc) grid_popup_fast_pane_ParamLimits

0x3de2,	// (0x000539bc) grid_popup_fast_pane

0x3df4,	// (0x000539ce) scroll_pane_cp9_ParamLimits

0x3df4,	// (0x000539ce) scroll_pane_cp9

0x7ea8,	// (0x00057a82) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7ea8,	// (0x00057a82) list_single_graphic_hl_pane_t1_cp2

0x3e18,	// (0x000539f2) input_focus_pane_cp20_ParamLimits

0x3e18,	// (0x000539f2) input_focus_pane_cp20

0x3e26,	// (0x00053a00) query_popup_data_pane_t1_ParamLimits

0x3e26,	// (0x00053a00) query_popup_data_pane_t1

0x3e39,	// (0x00053a13) query_popup_data_pane_t2_ParamLimits

0x3e39,	// (0x00053a13) query_popup_data_pane_t2

0x3e7f,	// (0x00053a59) query_popup_data_pane_t3_ParamLimits

0x3e7f,	// (0x00053a59) query_popup_data_pane_t3

0x3ec0,	// (0x00053a9a) query_popup_data_pane_t4_ParamLimits

0x3ec0,	// (0x00053a9a) query_popup_data_pane_t4

0x3efc,	// (0x00053ad6) query_popup_data_pane_t5_ParamLimits

0x3efc,	// (0x00053ad6) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0005f285) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0005f285) query_popup_data_pane_t

0x3c23,	// (0x000537fd) bg_set_opt_pane_g1

0x3c2b,	// (0x00053805) bg_set_opt_pane_g2

0x3c33,	// (0x0005380d) bg_set_opt_pane_g3

0x3c3b,	// (0x00053815) bg_set_opt_pane_g4

0x3c43,	// (0x0005381d) bg_set_opt_pane_g5

0x3c4b,	// (0x00053825) bg_set_opt_pane_g6

0x3c53,	// (0x0005382d) bg_set_opt_pane_g7

0x3c5b,	// (0x00053835) bg_set_opt_pane_g8

0x3c63,	// (0x0005383d) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0005f290) bg_set_opt_pane_g

0x0a97,	// (0x00050671) control_top_pane_stacon_ParamLimits

0x0a97,	// (0x00050671) control_top_pane_stacon

0x0aea,	// (0x000506c4) signal_pane_stacon_ParamLimits

0x0aea,	// (0x000506c4) signal_pane_stacon

0x44ec,	// (0x000540c6) stacon_top_pane_g1_ParamLimits

0x44ec,	// (0x000540c6) stacon_top_pane_g1

0x0b0f,	// (0x000506e9) title_pane_stacon_ParamLimits

0x0b0f,	// (0x000506e9) title_pane_stacon

0x0b39,	// (0x00050713) uni_indicator_pane_stacon_ParamLimits

0x0b39,	// (0x00050713) uni_indicator_pane_stacon

0x0b4e,	// (0x00050728) battery_pane_stacon_ParamLimits

0x0b4e,	// (0x00050728) battery_pane_stacon

0x0b92,	// (0x0005076c) control_bottom_pane_stacon_ParamLimits

0x0b92,	// (0x0005076c) control_bottom_pane_stacon

0x0bb5,	// (0x0005078f) navi_pane_stacon_ParamLimits

0x0bb5,	// (0x0005078f) navi_pane_stacon

0x450e,	// (0x000540e8) stacon_bottom_pane_g1_ParamLimits

0x450e,	// (0x000540e8) stacon_bottom_pane_g1

0x078c,	// (0x00050366) aid_levels_signal_lsc_ParamLimits

0x078c,	// (0x00050366) aid_levels_signal_lsc

0x07a2,	// (0x0005037c) signal_pane_stacon_g1_ParamLimits

0x07a2,	// (0x0005037c) signal_pane_stacon_g1

0x07b6,	// (0x00050390) signal_pane_stacon_g2_ParamLimits

0x07b6,	// (0x00050390) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0005f2a3) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0005f2a3) signal_pane_stacon_g

0x07eb,	// (0x000503c5) title_pane_stacon_t1_ParamLimits

0x07eb,	// (0x000503c5) title_pane_stacon_t1

0x3f40,	// (0x00053b1a) uni_indicator_pane_stacon_g1

0x3f4a,	// (0x00053b24) uni_indicator_pane_stacon_g2

0x3f54,	// (0x00053b2e) uni_indicator_pane_stacon_g3

0x3f5e,	// (0x00053b38) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0005f2af) uni_indicator_pane_stacon_g

0x0810,	// (0x000503ea) control_top_pane_stacon_g1

0x0818,	// (0x000503f2) control_top_pane_stacon_t1_ParamLimits

0x0818,	// (0x000503f2) control_top_pane_stacon_t1

0x084f,	// (0x00050429) aid_levels_battery_lsc_ParamLimits

0x084f,	// (0x00050429) aid_levels_battery_lsc

0x0866,	// (0x00050440) battery_pane_stacon_g1_ParamLimits

0x0866,	// (0x00050440) battery_pane_stacon_g1

0x0879,	// (0x00050453) battery_pane_stacon_g2_ParamLimits

0x0879,	// (0x00050453) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0005f2b8) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0005f2b8) battery_pane_stacon_g

0x08b7,	// (0x00050491) navi_icon_pane_stacon

0x08cb,	// (0x000504a5) navi_navi_pane_stacon

0x08b7,	// (0x00050491) navi_text_pane_stacon

0x0810,	// (0x000503ea) control_bottom_pane_stacon_g1

0x08df,	// (0x000504b9) control_bottom_pane_stacon_t1_ParamLimits

0x08df,	// (0x000504b9) control_bottom_pane_stacon_t1

0xd018,	// (0x0005cbf2) grid_app_pane_ParamLimits

0xd018,	// (0x0005cbf2) grid_app_pane

0xd050,	// (0x0005cc2a) scroll_pane_cp15_ParamLimits

0xd050,	// (0x0005cc2a) scroll_pane_cp15

0xd065,	// (0x0005cc3f) cell_app_pane_ParamLimits

0xd065,	// (0x0005cc3f) cell_app_pane

0xd0aa,	// (0x0005cc84) cell_app_pane_g1_ParamLimits

0xd0aa,	// (0x0005cc84) cell_app_pane_g1

0x4001,	// (0x00053bdb) cell_app_pane_g2_ParamLimits

0x4001,	// (0x00053bdb) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0005f2bd) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0005f2bd) cell_app_pane_g

0xd0ce,	// (0x0005cca8) cell_app_pane_t1_ParamLimits

0xd0ce,	// (0x0005cca8) cell_app_pane_t1

0x4024,	// (0x00053bfe) grid_highlight_pane_ParamLimits

0x4024,	// (0x00053bfe) grid_highlight_pane

0x3c23,	// (0x000537fd) cell_highlight_pane_g1

0x3c2b,	// (0x00053805) cell_highlight_pane_g2

0x3c33,	// (0x0005380d) cell_highlight_pane_g3

0x3c3b,	// (0x00053815) cell_highlight_pane_g4

0x3c43,	// (0x0005381d) cell_highlight_pane_g5

0x3c4b,	// (0x00053825) cell_highlight_pane_g6

0x3c53,	// (0x0005382d) cell_highlight_pane_g7

0x3c5b,	// (0x00053835) cell_highlight_pane_g8

0x3c63,	// (0x0005383d) cell_highlight_pane_g9

0x2b98,	// (0x00052772) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0005f26b) cell_highlight_pane_g

0x4035,	// (0x00053c0f) bg_scroll_pane

0x0929,	// (0x00050503) scroll_handle_pane

0x407c,	// (0x00053c56) scroll_bg_pane_g1

0x4091,	// (0x00053c6b) scroll_bg_pane_g2

0x40a9,	// (0x00053c83) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0005f2c2) scroll_bg_pane_g

0x40be,	// (0x00053c98) scroll_handle_focus_pane_ParamLimits

0x40be,	// (0x00053c98) scroll_handle_focus_pane

0x407c,	// (0x00053c56) scroll_handle_pane_g1

0x40cb,	// (0x00053ca5) scroll_handle_pane_g2

0x40a9,	// (0x00053c83) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0005f2c9) scroll_handle_pane_g

0x3c74,	// (0x0005384e) bg_popup_sub_pane_cp21_ParamLimits

0x3c74,	// (0x0005384e) bg_popup_sub_pane_cp21

0x40df,	// (0x00053cb9) popup_fep_japan_predictive_window_t1_ParamLimits

0x40df,	// (0x00053cb9) popup_fep_japan_predictive_window_t1

0x40f9,	// (0x00053cd3) popup_fep_japan_predictive_window_t2_ParamLimits

0x40f9,	// (0x00053cd3) popup_fep_japan_predictive_window_t2

0x412c,	// (0x00053d06) popup_fep_japan_predictive_window_t3_ParamLimits

0x412c,	// (0x00053d06) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0005f2d0) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0005f2d0) popup_fep_japan_predictive_window_t

0x2ba2,	// (0x0005277c) bg_popup_sub_pane_cp23

0x4163,	// (0x00053d3d) listscroll_japin_cand_pane

0x416b,	// (0x00053d45) popup_fep_japan_candidate_window_t1

0x4179,	// (0x00053d53) candidate_pane_ParamLimits

0x4179,	// (0x00053d53) candidate_pane

0x418b,	// (0x00053d65) scroll_pane_cp30

0x4193,	// (0x00053d6d) list_single_popup_jap_candidate_pane_ParamLimits

0x4193,	// (0x00053d6d) list_single_popup_jap_candidate_pane

0x2ba2,	// (0x0005277c) list_highlight_pane_cp30

0x41a8,	// (0x00053d82) list_single_popup_jap_candidate_pane_t1

0x41b7,	// (0x00053d91) level_1_signal

0x41c9,	// (0x00053da3) level_2_signal

0x41dc,	// (0x00053db6) level_3_signal

0x41ef,	// (0x00053dc9) level_4_signal

0x4202,	// (0x00053ddc) level_5_signal

0x4215,	// (0x00053def) level_6_signal

0x4228,	// (0x00053e02) level_7_signal

0x41b7,	// (0x00053d91) level_1_battery

0x41c9,	// (0x00053da3) level_2_battery

0x41dc,	// (0x00053db6) level_3_battery

0x41ef,	// (0x00053dc9) level_4_battery

0x4202,	// (0x00053ddc) level_5_battery

0x4215,	// (0x00053def) level_6_battery

0x4228,	// (0x00053e02) level_7_battery

0x4253,	// (0x00053e2d) list_menu_pane_ParamLimits

0x4253,	// (0x00053e2d) list_menu_pane

0x4269,	// (0x00053e43) scroll_pane_cp25_ParamLimits

0x4269,	// (0x00053e43) scroll_pane_cp25

0x4282,	// (0x00053e5c) list_double2_graphic_pane_cp2_ParamLimits

0x4282,	// (0x00053e5c) list_double2_graphic_pane_cp2

0x4282,	// (0x00053e5c) list_double2_large_graphic_pane_cp2_ParamLimits

0x4282,	// (0x00053e5c) list_double2_large_graphic_pane_cp2

0x4282,	// (0x00053e5c) list_double2_pane_cp2_ParamLimits

0x4282,	// (0x00053e5c) list_double2_pane_cp2

0x4282,	// (0x00053e5c) list_double_graphic_pane_cp2_ParamLimits

0x4282,	// (0x00053e5c) list_double_graphic_pane_cp2

0x4282,	// (0x00053e5c) list_double_large_graphic_pane_cp2_ParamLimits

0x4282,	// (0x00053e5c) list_double_large_graphic_pane_cp2

0x4282,	// (0x00053e5c) list_double_number_pane_cp2_ParamLimits

0x4282,	// (0x00053e5c) list_double_number_pane_cp2

0x4282,	// (0x00053e5c) list_double_pane_cp2_ParamLimits

0x4282,	// (0x00053e5c) list_double_pane_cp2

0xd0e5,	// (0x0005ccbf) list_single_2graphic_pane_cp2_ParamLimits

0xd0e5,	// (0x0005ccbf) list_single_2graphic_pane_cp2

0xd0e5,	// (0x0005ccbf) list_single_graphic_heading_pane_cp2_ParamLimits

0xd0e5,	// (0x0005ccbf) list_single_graphic_heading_pane_cp2

0xd0e5,	// (0x0005ccbf) list_single_graphic_pane_cp2_ParamLimits

0xd0e5,	// (0x0005ccbf) list_single_graphic_pane_cp2

0xd0e5,	// (0x0005ccbf) list_single_heading_pane_cp2_ParamLimits

0xd0e5,	// (0x0005ccbf) list_single_heading_pane_cp2

0x42bf,	// (0x00053e99) list_single_large_graphic_pane_cp2_ParamLimits

0x42bf,	// (0x00053e99) list_single_large_graphic_pane_cp2

0xd0e5,	// (0x0005ccbf) list_single_number_heading_pane_cp2_ParamLimits

0xd0e5,	// (0x0005ccbf) list_single_number_heading_pane_cp2

0xd0e5,	// (0x0005ccbf) list_single_number_pane_cp2_ParamLimits

0xd0e5,	// (0x0005ccbf) list_single_number_pane_cp2

0xd0e5,	// (0x0005ccbf) list_single_pane_cp2_ParamLimits

0xd0e5,	// (0x0005ccbf) list_single_pane_cp2

0x433b,	// (0x00053f15) bg_popup_sub_pane_cp22

0x09db,	// (0x000505b5) popup_side_volume_key_window_g1

0x0a05,	// (0x000505df) popup_side_volume_key_window_t1

0x0a21,	// (0x000505fb) volume_small_pane_cp1

0x2efd,	// (0x00052ad7) bg_popup_sub_pane_cp24_ParamLimits

0x2efd,	// (0x00052ad7) bg_popup_sub_pane_cp24

0x4351,	// (0x00053f2b) fep_china_uni_candidate_pane_ParamLimits

0x4351,	// (0x00053f2b) fep_china_uni_candidate_pane

0x4365,	// (0x00053f3f) fep_china_uni_entry_pane

0x4375,	// (0x00053f4f) popup_fep_china_uni_window_g1

0x4391,	// (0x00053f6b) fep_china_uni_entry_pane_g1

0x4399,	// (0x00053f73) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0005f301) fep_china_uni_entry_pane_g

0x43a1,	// (0x00053f7b) fep_entry_item_pane

0x43ab,	// (0x00053f85) fep_candidate_item_pane

0x43b3,	// (0x00053f8d) fep_china_uni_candidate_pane_g1

0x43bb,	// (0x00053f95) fep_china_uni_candidate_pane_g2

0x43c3,	// (0x00053f9d) fep_china_uni_candidate_pane_g3

0x43cb,	// (0x00053fa5) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0005f306) fep_china_uni_candidate_pane_g

0x2b98,	// (0x00052772) fep_entry_item_pane_g1

0x43d3,	// (0x00053fad) fep_entry_item_pane_t1_ParamLimits

0x43d3,	// (0x00053fad) fep_entry_item_pane_t1

0x43e9,	// (0x00053fc3) fep_candidate_item_pane_t1_ParamLimits

0x43e9,	// (0x00053fc3) fep_candidate_item_pane_t1

0x43fe,	// (0x00053fd8) fep_candidate_item_pane_t2_ParamLimits

0x43fe,	// (0x00053fd8) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0005f30f) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0005f30f) fep_candidate_item_pane_t

0x2c82,	// (0x0005285c) list_highlight_pane_cp31_ParamLimits

0x2c82,	// (0x0005285c) list_highlight_pane_cp31

0x4410,	// (0x00053fea) level_1_signal_lsc

0x4419,	// (0x00053ff3) level_2_signal_lsc

0x4422,	// (0x00053ffc) level_3_signal_lsc

0x442b,	// (0x00054005) level_4_signal_lsc

0x4434,	// (0x0005400e) level_5_signal_lsc

0x443d,	// (0x00054017) level_6_signal_lsc

0x4446,	// (0x00054020) level_7_signal_lsc

0x4446,	// (0x00054020) level_1_battery_lsc

0x444f,	// (0x00054029) level_2_battery_lsc

0x4458,	// (0x00054032) level_3_battery_lsc

0x4461,	// (0x0005403b) level_4_battery_lsc

0x446a,	// (0x00054044) level_5_battery_lsc

0x4473,	// (0x0005404d) level_6_battery_lsc

0x4410,	// (0x00053fea) level_7_battery_lsc

0x447c,	// (0x00054056) scroll_handle_focus_pane_g1

0x4485,	// (0x0005405f) scroll_handle_focus_pane_g2

0x448e,	// (0x00054068) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0005f314) scroll_handle_focus_pane_g

0xbb53,	// (0x0005b72d) list_single_2graphic_pane_g1_ParamLimits

0xbb53,	// (0x0005b72d) list_single_2graphic_pane_g1

0xb5d1,	// (0x0005b1ab) list_single_2graphic_pane_g2_ParamLimits

0xb5d1,	// (0x0005b1ab) list_single_2graphic_pane_g2

0x3114,	// (0x00052cee) list_single_2graphic_pane_g3_ParamLimits

0x3114,	// (0x00052cee) list_single_2graphic_pane_g3

0xbb5f,	// (0x0005b739) list_single_2graphic_pane_g4_ParamLimits

0xbb5f,	// (0x0005b739) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0005f31b) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0005f31b) list_single_2graphic_pane_g

0xbb6b,	// (0x0005b745) list_single_2graphic_pane_t1_ParamLimits

0xbb6b,	// (0x0005b745) list_single_2graphic_pane_t1

0xbb99,	// (0x0005b773) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbb99,	// (0x0005b773) list_double2_graphic_large_graphic_pane_g1

0xb7d0,	// (0x0005b3aa) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb7d0,	// (0x0005b3aa) list_double2_graphic_large_graphic_pane_g2

0xb71e,	// (0x0005b2f8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb71e,	// (0x0005b2f8) list_double2_graphic_large_graphic_pane_g3

0xbbab,	// (0x0005b785) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbbab,	// (0x0005b785) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0005f324) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0005f324) list_double2_graphic_large_graphic_pane_g

0xbbb7,	// (0x0005b791) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbbb7,	// (0x0005b791) list_double2_graphic_large_graphic_pane_t1

0xbbcd,	// (0x0005b7a7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbbcd,	// (0x0005b7a7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0005f32d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0005f32d) list_double2_graphic_large_graphic_pane_t

0x45d6,	// (0x000541b0) popup_fast_swap_window_ParamLimits

0x45d6,	// (0x000541b0) popup_fast_swap_window

0x45f2,	// (0x000541cc) popup_side_volume_key_window

0x460e,	// (0x000541e8) stacon_top_pane

0x4618,	// (0x000541f2) status_pane_ParamLimits

0x4618,	// (0x000541f2) status_pane

0xd1a2,	// (0x0005cd7c) status_small_pane

0x2ba2,	// (0x0005277c) control_pane

0x2ba2,	// (0x0005277c) stacon_bottom_pane

0x3bb7,	// (0x00053791) scroll_pane_cp121

0x3bae,	// (0x00053788) set_content_pane

0x4497,	// (0x00054071) bg_active_tab_pane_g1_cp1

0x44a0,	// (0x0005407a) bg_active_tab_pane_g2_cp1

0x44a9,	// (0x00054083) bg_active_tab_pane_g3_cp1

0x4497,	// (0x00054071) bg_passive_tab_pane_g1_cp1

0x44a0,	// (0x0005407a) bg_passive_tab_pane_g2_cp1

0x44a9,	// (0x00054083) bg_passive_tab_pane_g3_cp1

0x44b2,	// (0x0005408c) bg_active_tab_pane_g1_cp2

0x44a0,	// (0x0005407a) bg_active_tab_pane_g2_cp2

0x44bb,	// (0x00054095) bg_active_tab_pane_g3_cp2

0x44b2,	// (0x0005408c) bg_passive_tab_pane_g1_cp2

0x44a0,	// (0x0005407a) bg_passive_tab_pane_g2_cp2

0x44bb,	// (0x00054095) bg_passive_tab_pane_g3_cp2

0x44c4,	// (0x0005409e) bg_active_tab_pane_g1_cp3

0x44a0,	// (0x0005407a) bg_active_tab_pane_g2_cp3

0x44cd,	// (0x000540a7) bg_active_tab_pane_g3_cp3

0x44c4,	// (0x0005409e) bg_passive_tab_pane_g1_cp3

0x44a0,	// (0x0005407a) bg_passive_tab_pane_g2_cp3

0x44cd,	// (0x000540a7) bg_passive_tab_pane_g3_cp3

0x44d6,	// (0x000540b0) bg_active_tab_pane_g1_cp4

0x44a0,	// (0x0005407a) bg_active_tab_pane_g2_cp4

0x44e1,	// (0x000540bb) bg_active_tab_pane_g3_cp4

0x44d6,	// (0x000540b0) bg_passive_tab_pane_g1_cp4

0x44a0,	// (0x0005407a) bg_passive_tab_pane_g2_cp4

0x44e1,	// (0x000540bb) bg_passive_tab_pane_g3_cp4

0x452a,	// (0x00054104) bg_active_tab_pane_g1_cp5

0x44a0,	// (0x0005407a) bg_active_tab_pane_g2_cp5

0x4533,	// (0x0005410d) bg_active_tab_pane_g3_cp5

0x452a,	// (0x00054104) bg_passive_tab_pane_g1_cp5

0x44a0,	// (0x0005407a) bg_passive_tab_pane_g2_cp5

0x4533,	// (0x0005410d) bg_passive_tab_pane_g3_cp5

0x6b8a,	// (0x00056764) list_set_graphic_pane_ParamLimits

0x6b8a,	// (0x00056764) list_set_graphic_pane

0x2ba2,	// (0x0005277c) bg_set_opt_pane_cp4

0xd172,	// (0x0005cd4c) list_set_graphic_pane_g1_ParamLimits

0xd172,	// (0x0005cd4c) list_set_graphic_pane_g1

0xd17e,	// (0x0005cd58) list_set_graphic_pane_g2_ParamLimits

0xd17e,	// (0x0005cd58) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0005f332) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0005f332) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0005f69b) volume_small_pane_cp_g

0x4589,	// (0x00054163) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4589,	// (0x00054163) list_double2_large_graphic_pane_g1_cp2

0x4595,	// (0x0005416f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4595,	// (0x0005416f) list_double2_large_graphic_pane_g2_cp2

0x45a6,	// (0x00054180) list_double2_large_graphic_pane_g3_cp2

0x45ae,	// (0x00054188) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x45ae,	// (0x00054188) list_double2_large_graphic_pane_t1_cp2

0x45c4,	// (0x0005419e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x45c4,	// (0x0005419e) list_double2_large_graphic_pane_t2_cp2

0x6194,	// (0x00055d6e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6194,	// (0x00055d6e) list_double_large_graphic_pane_g1_cp2

0x61a5,	// (0x00055d7f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x61a5,	// (0x00055d7f) list_double_large_graphic_pane_g2_cp2

0x473f,	// (0x00054319) list_double_large_graphic_pane_g3_cp2

0x61b6,	// (0x00055d90) list_double_large_graphic_pane_g4_cp

0x61be,	// (0x00055d98) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x61be,	// (0x00055d98) list_double_large_graphic_pane_t1_cp2

0x61d5,	// (0x00055daf) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x61d5,	// (0x00055daf) list_double_large_graphic_pane_t2_cp2

0x4631,	// (0x0005420b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4631,	// (0x0005420b) list_double2_graphic_pane_g1_cp2

0x463f,	// (0x00054219) list_double2_graphic_pane_g2_cp2_ParamLimits

0x463f,	// (0x00054219) list_double2_graphic_pane_g2_cp2

0x4650,	// (0x0005422a) list_double2_graphic_pane_g3_cp2

0x465a,	// (0x00054234) list_double2_graphic_pane_t1_cp2_ParamLimits

0x465a,	// (0x00054234) list_double2_graphic_pane_t1_cp2

0x4670,	// (0x0005424a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4670,	// (0x0005424a) list_double2_graphic_pane_t2_cp2

0x4682,	// (0x0005425c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4682,	// (0x0005425c) list_single_number_heading_pane_g1_cp2

0x468e,	// (0x00054268) list_single_number_heading_pane_g2_cp2

0x4696,	// (0x00054270) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4696,	// (0x00054270) list_single_number_heading_pane_t1_cp2

0x46ac,	// (0x00054286) list_single_number_heading_pane_t2_cp2_ParamLimits

0x46ac,	// (0x00054286) list_single_number_heading_pane_t2_cp2

0x46be,	// (0x00054298) list_single_number_heading_pane_t3_cp2_ParamLimits

0x46be,	// (0x00054298) list_single_number_heading_pane_t3_cp2

0x4682,	// (0x0005425c) list_single_heading_pane_g1_cp2_ParamLimits

0x4682,	// (0x0005425c) list_single_heading_pane_g1_cp2

0x468e,	// (0x00054268) list_single_heading_pane_g2_cp2

0x4696,	// (0x00054270) list_single_heading_pane_t1_cp2_ParamLimits

0x4696,	// (0x00054270) list_single_heading_pane_t1_cp2

0x5f9c,	// (0x00055b76) list_single_heading_pane_t2_cp2_ParamLimits

0x5f9c,	// (0x00055b76) list_single_heading_pane_t2_cp2

0x5ee4,	// (0x00055abe) list_double_graphic_pane_g1_cp2_ParamLimits

0x5ee4,	// (0x00055abe) list_double_graphic_pane_g1_cp2

0x5ef0,	// (0x00055aca) list_double_graphic_pane_g2_cp2_ParamLimits

0x5ef0,	// (0x00055aca) list_double_graphic_pane_g2_cp2

0x5eff,	// (0x00055ad9) list_double_graphic_pane_g3_cp2

0x5f07,	// (0x00055ae1) list_double_graphic_pane_t1_cp2_ParamLimits

0x5f07,	// (0x00055ae1) list_double_graphic_pane_t1_cp2

0x5f1d,	// (0x00055af7) list_double_graphic_pane_t2_cp2_ParamLimits

0x5f1d,	// (0x00055af7) list_double_graphic_pane_t2_cp2

0x4733,	// (0x0005430d) list_double_number_pane_g1_cp2_ParamLimits

0x4733,	// (0x0005430d) list_double_number_pane_g1_cp2

0x473f,	// (0x00054319) list_double_number_pane_g2_cp2

0x5ea8,	// (0x00055a82) list_double_number_pane_t1_cp2_ParamLimits

0x5ea8,	// (0x00055a82) list_double_number_pane_t1_cp2

0x5ebc,	// (0x00055a96) list_double_number_pane_t2_cp2_ParamLimits

0x5ebc,	// (0x00055a96) list_double_number_pane_t2_cp2

0x5ed2,	// (0x00055aac) list_double_number_pane_t3_cp2_ParamLimits

0x5ed2,	// (0x00055aac) list_double_number_pane_t3_cp2

0x5d91,	// (0x0005596b) list_single_graphic_pane_g1_cp2_ParamLimits

0x5d91,	// (0x0005596b) list_single_graphic_pane_g1_cp2

0x4797,	// (0x00054371) list_single_graphic_pane_g2_cp2_ParamLimits

0x4797,	// (0x00054371) list_single_graphic_pane_g2_cp2

0x47a3,	// (0x0005437d) list_single_graphic_pane_g3_cp2

0x5d67,	// (0x00055941) list_single_graphic_pane_t1_cp2_ParamLimits

0x5d67,	// (0x00055941) list_single_graphic_pane_t1_cp2

0x4797,	// (0x00054371) list_single_number_pane_g1_cp2_ParamLimits

0x4797,	// (0x00054371) list_single_number_pane_g1_cp2

0x47a3,	// (0x0005437d) list_single_number_pane_g2_cp2

0x5d67,	// (0x00055941) list_single_number_pane_t1_cp2_ParamLimits

0x5d67,	// (0x00055941) list_single_number_pane_t1_cp2

0x5d7d,	// (0x00055957) list_single_number_pane_t2_cp2_ParamLimits

0x5d7d,	// (0x00055957) list_single_number_pane_t2_cp2

0x4595,	// (0x0005416f) list_double2_pane_g1_cp2_ParamLimits

0x4595,	// (0x0005416f) list_double2_pane_g1_cp2

0x45a6,	// (0x00054180) list_double2_pane_g2_cp2

0x470b,	// (0x000542e5) list_double2_pane_t1_cp2_ParamLimits

0x470b,	// (0x000542e5) list_double2_pane_t1_cp2

0x4721,	// (0x000542fb) list_double2_pane_t2_cp2_ParamLimits

0x4721,	// (0x000542fb) list_double2_pane_t2_cp2

0x4733,	// (0x0005430d) list_double_pane_g1_cp2_ParamLimits

0x4733,	// (0x0005430d) list_double_pane_g1_cp2

0x473f,	// (0x00054319) list_double_pane_g2_cp2

0x4747,	// (0x00054321) list_double_pane_t1_cp2_ParamLimits

0x4747,	// (0x00054321) list_double_pane_t1_cp2

0x475d,	// (0x00054337) list_double_pane_t2_cp2_ParamLimits

0x475d,	// (0x00054337) list_double_pane_t2_cp2

0x4787,	// (0x00054361) list_single_pane_cp2_g3

0x4797,	// (0x00054371) list_single_pane_g1_cp2_ParamLimits

0x4797,	// (0x00054371) list_single_pane_g1_cp2

0x47a3,	// (0x0005437d) list_single_pane_g2_cp2

0x47ab,	// (0x00054385) list_single_pane_t1_cp2_ParamLimits

0x47ab,	// (0x00054385) list_single_pane_t1_cp2

0x47c3,	// (0x0005439d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x47c3,	// (0x0005439d) list_single_large_graphic_pane_g1_cp2

0x47cf,	// (0x000543a9) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x47cf,	// (0x000543a9) list_single_large_graphic_pane_g2_cp2

0x47db,	// (0x000543b5) list_single_large_graphic_pane_g3_cp2

0x47e3,	// (0x000543bd) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x47e3,	// (0x000543bd) list_single_large_graphic_pane_g4_cp1

0x47fd,	// (0x000543d7) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x47fd,	// (0x000543d7) list_single_large_graphic_pane_t1_cp2

0x5d33,	// (0x0005590d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5d33,	// (0x0005590d) list_single_graphic_heading_pane_g1_cp2

0x5d00,	// (0x000558da) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5d00,	// (0x000558da) list_single_graphic_heading_pane_g4_cp2

0x47a3,	// (0x0005437d) list_single_graphic_heading_pane_g5_cp2

0x5d3f,	// (0x00055919) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5d3f,	// (0x00055919) list_single_graphic_heading_pane_t1_cp2

0x5d55,	// (0x0005592f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5d55,	// (0x0005592f) list_single_graphic_heading_pane_t2_cp2

0x5cf4,	// (0x000558ce) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5cf4,	// (0x000558ce) list_single_2graphic_pane_g1_cp2

0x5d00,	// (0x000558da) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5d00,	// (0x000558da) list_single_2graphic_pane_g2_cp2

0x47a3,	// (0x0005437d) list_single_2graphic_pane_g3_cp2

0x5d11,	// (0x000558eb) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5d11,	// (0x000558eb) list_single_2graphic_pane_g4_cp2

0x5d1d,	// (0x000558f7) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5d1d,	// (0x000558f7) list_single_2graphic_pane_t1_cp2

0x2b98,	// (0x00052772) list_highlight_pane_g10_cp1

0x58cc,	// (0x000554a6) list_highlight_pane_g1_cp1

0x58d4,	// (0x000554ae) list_highlight_pane_g2_cp1

0x58dc,	// (0x000554b6) list_highlight_pane_g3_cp1

0x58e4,	// (0x000554be) list_highlight_pane_g4_cp1

0x58ec,	// (0x000554c6) list_highlight_pane_g5_cp1

0x58f4,	// (0x000554ce) list_highlight_pane_g6_cp1

0x58fc,	// (0x000554d6) list_highlight_pane_g7_cp1

0x5904,	// (0x000554de) list_highlight_pane_g8_cp1

0x590c,	// (0x000554e6) list_highlight_pane_g9_cp1

0xd87e,	// (0x0005d458) form_field_slider_pane_t3

0xd88c,	// (0x0005d466) form_field_slider_pane_t4

0x5808,	// (0x000553e2) slider_form_pane_ParamLimits

0x5808,	// (0x000553e2) slider_form_pane

0x2ba2,	// (0x0005277c) control_abbreviations

0x2ba2,	// (0x0005277c) control_conventions

0x2ba2,	// (0x0005277c) control_definitions

0x2ba2,	// (0x0005277c) format_table_attribute

0x5fe6,	// (0x00055bc0) bg_popup_preview_window_pane_g9

0x2ba2,	// (0x0005277c) format_table_data2

0x2ba2,	// (0x0005277c) format_table_data3

0x2ba2,	// (0x0005277c) format_table_data_example

0x0008,

0x2ba2,	// (0x0005277c) intro_purpose

0xf8ef,	// (0x0005f4c9) bg_popup_preview_window_pane_g

0x2ba2,	// (0x0005277c) texts_category

0x2ba2,	// (0x0005277c) texts_graphics

0x4813,	// (0x000543ed) text_digital

0x4822,	// (0x000543fc) text_primary

0x4831,	// (0x0005440b) text_primary_small

0x4840,	// (0x0005441a) text_secondary

0x484f,	// (0x00054429) text_title

0x66cc,	// (0x000562a6) bg_passive_tab_pane_g1_cp3_srt

0x44a0,	// (0x0005407a) bg_passive_tab_pane_g2_cp3_srt

0x66d5,	// (0x000562af) bg_passive_tab_pane_g3_cp3_srt

0x2efd,	// (0x00052ad7) bg_active_tab_pane_cp3_srt_ParamLimits

0x2efd,	// (0x00052ad7) bg_active_tab_pane_cp3_srt

0x66de,	// (0x000562b8) tabs_4_active_pane_srt_g1

0xdbc1,	// (0x0005d79b) tabs_4_active_pane_srt_t1_ParamLimits

0xdbc1,	// (0x0005d79b) tabs_4_active_pane_srt_t1

0x66cc,	// (0x000562a6) bg_active_tab_pane_g1_cp3_copy1

0x44a0,	// (0x0005407a) bg_active_tab_pane_g2_cp3_copy1

0x66d5,	// (0x000562af) bg_active_tab_pane_g3_cp3_copy1

0x2c82,	// (0x0005285c) tabs_2_long_active_pane_srt_ParamLimits

0x2c82,	// (0x0005285c) tabs_2_long_active_pane_srt

0x2c82,	// (0x0005285c) tabs_2_long_passive_pane_srt_ParamLimits

0x2c82,	// (0x0005285c) tabs_2_long_passive_pane_srt

0x4b9c,	// (0x00054776) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4b9c,	// (0x00054776) bg_passive_tab_pane_cp4_srt

0x6415,	// (0x00055fef) bg_passive_tab_pane_g1_cp4_srt

0x44a0,	// (0x0005407a) bg_passive_tab_pane_g2_cp4_srt

0x641e,	// (0x00055ff8) bg_passive_tab_pane_g3_cp4_srt

0x2c82,	// (0x0005285c) bg_active_tab_pane_cp4_srt_ParamLimits

0x2c82,	// (0x0005285c) bg_active_tab_pane_cp4_srt

0xd9eb,	// (0x0005d5c5) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd9eb,	// (0x0005d5c5) tabs_2_long_active_pane_srt_t1

0x6415,	// (0x00055fef) bg_active_tab_pane_g1_cp4_srt

0x44a0,	// (0x0005407a) bg_active_tab_pane_g2_cp4_srt

0x641e,	// (0x00055ff8) bg_active_tab_pane_g3_cp4_srt

0x2efd,	// (0x00052ad7) tabs_3_long_active_pane_srt_ParamLimits

0x2efd,	// (0x00052ad7) tabs_3_long_active_pane_srt

0x2efd,	// (0x00052ad7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2efd,	// (0x00052ad7) tabs_3_long_passive_pane_cp_srt

0x2efd,	// (0x00052ad7) tabs_3_long_passive_pane_srt_ParamLimits

0x2efd,	// (0x00052ad7) tabs_3_long_passive_pane_srt

0x4b9c,	// (0x00054776) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4b9c,	// (0x00054776) bg_passive_tab_pane_cp5_srt

0x452a,	// (0x00054104) bg_passive_tab_pane_g1_cp5_srt

0x44a0,	// (0x0005407a) bg_passive_tab_pane_g2_cp5_srt

0x4533,	// (0x0005410d) bg_passive_tab_pane_g3_cp5_srt

0x2c82,	// (0x0005285c) bg_active_tab_pane_cp5_srt_ParamLimits

0x2c82,	// (0x0005285c) bg_active_tab_pane_cp5_srt

0xd9d5,	// (0x0005d5af) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd9d5,	// (0x0005d5af) tabs_3_long_active_pane_srt_t1

0x452a,	// (0x00054104) bg_active_tab_pane_g1_cp5_srt

0x44a0,	// (0x0005407a) bg_active_tab_pane_g2_cp5_srt

0x4533,	// (0x0005410d) bg_active_tab_pane_g3_cp5_srt

0x63f5,	// (0x00055fcf) navi_text_pane_srt_t1

0x63ed,	// (0x00055fc7) navi_icon_pane_srt_g1

0x4a18,	// (0x000545f2) midp_editing_number_pane_srt

0x485e,	// (0x00054438) midp_ticker_pane_srt

0x4a20,	// (0x000545fa) midp_ticker_pane_srt_g1

0x4a28,	// (0x00054602) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0005f351) midp_ticker_pane_srt_g

0x4a30,	// (0x0005460a) midp_ticker_pane_srt_t1

0x63de,	// (0x00055fb8) midp_editing_number_pane_t1_copy1

0x4b9c,	// (0x00054776) listscroll_midp_pane

0x4b9c,	// (0x00054776) midp_form_pane

0x48ca,	// (0x000544a4) midp_info_popup_window_ParamLimits

0x48ca,	// (0x000544a4) midp_info_popup_window

0x3c74,	// (0x0005384e) bg_popup_sub_pane_cp50_ParamLimits

0x3c74,	// (0x0005384e) bg_popup_sub_pane_cp50

0x5504,	// (0x000550de) listscroll_midp_info_pane_ParamLimits

0x5504,	// (0x000550de) listscroll_midp_info_pane

0x54ec,	// (0x000550c6) listscroll_form_midp_pane_ParamLimits

0x54ec,	// (0x000550c6) listscroll_form_midp_pane

0x54f8,	// (0x000550d2) scroll_bar_cp050

0xd872,	// (0x0005d44c) list_midp_pane

0x7121,	// (0x00056cfb) signal_pane_g2_cp

0x5406,	// (0x00054fe0) listscroll_midp_info_pane_t1_ParamLimits

0x5406,	// (0x00054fe0) listscroll_midp_info_pane_t1

0x541e,	// (0x00054ff8) listscroll_midp_info_pane_t2_ParamLimits

0x541e,	// (0x00054ff8) listscroll_midp_info_pane_t2

0x545c,	// (0x00055036) listscroll_midp_info_pane_t3_ParamLimits

0x545c,	// (0x00055036) listscroll_midp_info_pane_t3

0x5496,	// (0x00055070) listscroll_midp_info_pane_t4_ParamLimits

0x5496,	// (0x00055070) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0005f404) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0005f404) listscroll_midp_info_pane_t

0x3d38,	// (0x00053912) scroll_pane_cp21

0x53a4,	// (0x00054f7e) form_midp_field_choice_group_pane

0x53ad,	// (0x00054f87) form_midp_field_text_pane

0x53ec,	// (0x00054fc6) form_midp_field_time_pane

0x53f4,	// (0x00054fce) form_midp_gauge_slider_pane

0x53fd,	// (0x00054fd7) form_midp_gauge_wait_pane

0x2ba2,	// (0x0005277c) form_midp_image_pane

0xc48e,	// (0x0005c068) list_single_midp_pane_ParamLimits

0xc48e,	// (0x0005c068) list_single_midp_pane

0xd850,	// (0x0005d42a) form_midp_field_text_pane_t1

0x5126,	// (0x00054d00) input_focus_pane_cp050

0x5393,	// (0x00054f6d) list_midp_form_text_pane

0x532b,	// (0x00054f05) form_midp_field_choice_group_pane_t1

0x5339,	// (0x00054f13) input_focus_pane_cp051

0x534d,	// (0x00054f27) list_midp_choice_pane

0x2ba2,	// (0x0005277c) status_idle_pane

0x530f,	// (0x00054ee9) form_midp_field_time_pane_t1

0x2b98,	// (0x00052772) wait_anim_pane_g2_copy1

0x531d,	// (0x00054ef7) form_midp_field_time_pane_t2

0x0001,

0x4978,	// (0x00054552) aid_navinavi_width_2_pane

0xf825,	// (0x0005f3ff) form_midp_field_time_pane_t

0x2ba2,	// (0x0005277c) input_focus_pane_cp052

0x2ba2,	// (0x0005277c) bg_input_focus_pane_cp040

0x52cf,	// (0x00054ea9) form_midp_gauge_slider_pane_t1

0x52dd,	// (0x00054eb7) form_midp_gauge_slider_pane_t2

0xd79a,	// (0x0005d374) form_midp_gauge_slider_pane_t3

0xd7a8,	// (0x0005d382) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0005f3f6) form_midp_gauge_slider_pane_t

0x5307,	// (0x00054ee1) form_midp_slider_pane

0x2c82,	// (0x0005285c) bg_input_focus_pane_cp041_ParamLimits

0x2c82,	// (0x0005285c) bg_input_focus_pane_cp041

0x529c,	// (0x00054e76) form_midp_gauge_wait_pane_t1_ParamLimits

0x529c,	// (0x00054e76) form_midp_gauge_wait_pane_t1

0x52ae,	// (0x00054e88) form_midp_gauge_wait_pane_t2_ParamLimits

0x52ae,	// (0x00054e88) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0005f3f1) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0005f3f1) form_midp_gauge_wait_pane_t

0x52c0,	// (0x00054e9a) form_midp_wait_pane_ParamLimits

0x52c0,	// (0x00054e9a) form_midp_wait_pane

0x5266,	// (0x00054e40) form_midp_image_pane_g1

0x526f,	// (0x00054e49) form_midp_image_pane_t1

0x527e,	// (0x00054e58) form_midp_image_pane_t2

0x528d,	// (0x00054e67) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0005f3ea) form_midp_image_pane_t

0x525d,	// (0x00054e37) list_single_midp_pane_g1

0x15ba,	// (0x00051194) list_single_midp_pane_t1

0xd785,	// (0x0005d35f) list_midp_form_item_pane_ParamLimits

0xd785,	// (0x0005d35f) list_midp_form_item_pane

0x4920,	// (0x000544fa) list_midp_form_item_pane_t1

0x492f,	// (0x00054509) midp_ticker_pane_g1

0x493b,	// (0x00054515) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0005f337) midp_ticker_pane_g

0x4947,	// (0x00054521) midp_ticker_pane_t1

0x662f,	// (0x00056209) midp_editing_number_pane_t1

0x660d,	// (0x000561e7) midp_editing_number_pane

0x661c,	// (0x000561f6) midp_ticker_pane

0x63ce,	// (0x00055fa8) ai_message_heading_pane

0x2ba2,	// (0x0005277c) bg_popup_window_pane_cp14

0x63d6,	// (0x00055fb0) listscroll_ai_message_pane

0x6358,	// (0x00055f32) ai_message_heading_pane_g1_ParamLimits

0x6358,	// (0x00055f32) ai_message_heading_pane_g1

0x6364,	// (0x00055f3e) ai_message_heading_pane_g2_ParamLimits

0x6364,	// (0x00055f3e) ai_message_heading_pane_g2

0x6370,	// (0x00055f4a) ai_message_heading_pane_g3_ParamLimits

0x6370,	// (0x00055f4a) ai_message_heading_pane_g3

0x637c,	// (0x00055f56) ai_message_heading_pane_g4_ParamLimits

0x637c,	// (0x00055f56) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0005f52b) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0005f52b) ai_message_heading_pane_g

0x6388,	// (0x00055f62) ai_message_heading_pane_t1_ParamLimits

0x6388,	// (0x00055f62) ai_message_heading_pane_t1

0x63a2,	// (0x00055f7c) ai_message_heading_pane_t2_ParamLimits

0x63a2,	// (0x00055f7c) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0005f534) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0005f534) ai_message_heading_pane_t

0x63b4,	// (0x00055f8e) bg_popup_heading_pane_cp1_ParamLimits

0x63b4,	// (0x00055f8e) bg_popup_heading_pane_cp1

0x6346,	// (0x00055f20) list_ai_message_pane_ParamLimits

0x6346,	// (0x00055f20) list_ai_message_pane

0x3d38,	// (0x00053912) scroll_pane_cp10

0x62e2,	// (0x00055ebc) list_ai_message_pane_g1

0x62ea,	// (0x00055ec4) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0005f508) list_ai_message_pane_g

0x62f2,	// (0x00055ecc) list_ai_message_pane_t1_ParamLimits

0x62f2,	// (0x00055ecc) list_ai_message_pane_t1

0x6307,	// (0x00055ee1) list_ai_message_pane_t2_ParamLimits

0x6307,	// (0x00055ee1) list_ai_message_pane_t2

0x631c,	// (0x00055ef6) list_ai_message_pane_t3_ParamLimits

0x631c,	// (0x00055ef6) list_ai_message_pane_t3

0x6331,	// (0x00055f0b) list_ai_message_pane_t4_ParamLimits

0x6331,	// (0x00055f0b) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0005f50d) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0005f50d) list_ai_message_pane_t

0xd9b4,	// (0x0005d58e) cell_ai_soft_ind_pane_ParamLimits

0xd9b4,	// (0x0005d58e) cell_ai_soft_ind_pane

0x4959,	// (0x00054533) cell_ai_soft_ind_pane_g1_ParamLimits

0x4959,	// (0x00054533) cell_ai_soft_ind_pane_g1

0x2ba2,	// (0x0005277c) grid_highlight_cp1

0x4966,	// (0x00054540) text_secondary_cp56_ParamLimits

0x4966,	// (0x00054540) text_secondary_cp56

0x62a2,	// (0x00055e7c) example_general_pane_ParamLimits

0x62a2,	// (0x00055e7c) example_general_pane

0x62ae,	// (0x00055e88) example_parent_pane_g1_ParamLimits

0x62ae,	// (0x00055e88) example_parent_pane_g1

0x62ba,	// (0x00055e94) example_parent_pane_t1_ParamLimits

0x62ba,	// (0x00055e94) example_parent_pane_t1

0xc138,	// (0x0005bd12) popup_preview_text_window_ParamLimits

0xc138,	// (0x0005bd12) popup_preview_text_window

0x478f,	// (0x00054369) list_single_pane_cp2_g4

0x2fb3,	// (0x00052b8d) bg_popup_preview_window_pane_ParamLimits

0x2fb3,	// (0x00052b8d) bg_popup_preview_window_pane

0x5fee,	// (0x00055bc8) popup_preview_text_window_t1_ParamLimits

0x5fee,	// (0x00055bc8) popup_preview_text_window_t1

0x600c,	// (0x00055be6) popup_preview_text_window_t2_ParamLimits

0x600c,	// (0x00055be6) popup_preview_text_window_t2

0x6055,	// (0x00055c2f) popup_preview_text_window_t3_ParamLimits

0x6055,	// (0x00055c2f) popup_preview_text_window_t3

0x609a,	// (0x00055c74) popup_preview_text_window_t4_ParamLimits

0x609a,	// (0x00055c74) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0005f4dc) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0005f4dc) popup_preview_text_window_t

0x6118,	// (0x00055cf2) scroll_pane_cp11

0x50b2,	// (0x00054c8c) bg_popup_preview_window_pane_g1

0x5fae,	// (0x00055b88) bg_popup_preview_window_pane_g2

0x5fb6,	// (0x00055b90) bg_popup_preview_window_pane_g3

0x5fbe,	// (0x00055b98) bg_popup_preview_window_pane_g4

0x5fc6,	// (0x00055ba0) bg_popup_preview_window_pane_g5

0x5fce,	// (0x00055ba8) bg_popup_preview_window_pane_g6

0x5fd6,	// (0x00055bb0) bg_popup_preview_window_pane_g7

0x5fde,	// (0x00055bb8) bg_popup_preview_window_pane_g8

0xf31f,	// (0x0005eef9) aid_popup_width_pane

0xc0b4,	// (0x0005bc8e) popup_midp_note_alarm_window_ParamLimits

0xc0b4,	// (0x0005bc8e) popup_midp_note_alarm_window

0x3bc8,	// (0x000537a2) data_form_pane_ParamLimits

0xba2c,	// (0x0005b606) form_field_data_pane_g1

0xba36,	// (0x0005b610) form_field_data_pane_t1_ParamLimits

0x3bd4,	// (0x000537ae) input_focus_pane_ParamLimits

0x05f7,	// (0x000501d1) data_form_wide_pane_ParamLimits

0x0608,	// (0x000501e2) form_field_data_wide_pane_g1

0x0614,	// (0x000501ee) form_field_data_wide_pane_t1_ParamLimits

0x3939,	// (0x00053513) input_focus_pane_cp6_ParamLimits

0xcfd3,	// (0x0005cbad) input_popup_find_pane_g1_ParamLimits

0xcfd3,	// (0x0005cbad) input_popup_find_pane_g1

0x088a,	// (0x00050464) aid_navi_side_left_pane

0x089f,	// (0x00050479) aid_navi_side_right_pane

0x59c7,	// (0x000555a1) bg_popup_window_pane_cp30_ParamLimits

0x59c7,	// (0x000555a1) bg_popup_window_pane_cp30

0x5a41,	// (0x0005561b) popup_midp_note_alarm_window_g1_ParamLimits

0x5a41,	// (0x0005561b) popup_midp_note_alarm_window_g1

0x5a71,	// (0x0005564b) popup_midp_note_alarm_window_t1_ParamLimits

0x5a71,	// (0x0005564b) popup_midp_note_alarm_window_t1

0x5b12,	// (0x000556ec) popup_midp_note_alarm_window_t2_ParamLimits

0x5b12,	// (0x000556ec) popup_midp_note_alarm_window_t2

0x5bc0,	// (0x0005579a) popup_midp_note_alarm_window_t3_ParamLimits

0x5bc0,	// (0x0005579a) popup_midp_note_alarm_window_t3

0x5bf2,	// (0x000557cc) popup_midp_note_alarm_window_t4_ParamLimits

0x5bf2,	// (0x000557cc) popup_midp_note_alarm_window_t4

0x5c18,	// (0x000557f2) popup_midp_note_alarm_window_t5_ParamLimits

0x5c18,	// (0x000557f2) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0005f479) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0005f479) popup_midp_note_alarm_window_t

0x5cc4,	// (0x0005589e) wait_bar_pane_cp1_ParamLimits

0x5cc4,	// (0x0005589e) wait_bar_pane_cp1

0x2ba2,	// (0x0005277c) wait_anim_pane_copy1

0x2ba2,	// (0x0005277c) wait_border_pane_copy1

0x56ad,	// (0x00055287) wait_border_pane_g1_copy1

0x062e,	// (0x00050208) form_field_popup_pane_g1

0xba50,	// (0x0005b62a) form_field_popup_pane_t1_ParamLimits

0x3bd4,	// (0x000537ae) input_focus_pane_cp7_ParamLimits

0x3bf6,	// (0x000537d0) list_form_pane_ParamLimits

0x064e,	// (0x00050228) form_field_popup_wide_pane_g1

0x0656,	// (0x00050230) form_field_popup_wide_pane_t1_ParamLimits

0x3bd4,	// (0x000537ae) input_focus_pane_cp8_ParamLimits

0x3c02,	// (0x000537dc) list_form_wide_pane_ParamLimits

0x6764,	// (0x0005633e) aid_size_cell_graphic_pane

0xbacf,	// (0x0005b6a9) data_form_pane_t1_ParamLimits

0xc4b6,	// (0x0005c090) data_form_wide_pane_t1_ParamLimits

0xd40a,	// (0x0005cfe4) bg_status_flat_pane

0xcc92,	// (0x0005c86c) title_pane_t1_ParamLimits

0x2c4a,	// (0x00052824) title_pane_t2_ParamLimits

0x2c70,	// (0x0005284a) title_pane_t3_ParamLimits

0xf557,	// (0x0005f131) title_pane_t_ParamLimits

0x41b7,	// (0x00053d91) level_1_signal_ParamLimits

0x41c9,	// (0x00053da3) level_2_signal_ParamLimits

0x41dc,	// (0x00053db6) level_3_signal_ParamLimits

0x41ef,	// (0x00053dc9) level_4_signal_ParamLimits

0x4202,	// (0x00053ddc) level_5_signal_ParamLimits

0x4215,	// (0x00053def) level_6_signal_ParamLimits

0x4228,	// (0x00053e02) level_7_signal_ParamLimits

0x41b7,	// (0x00053d91) level_1_battery_ParamLimits

0x41c9,	// (0x00053da3) level_2_battery_ParamLimits

0x41dc,	// (0x00053db6) level_3_battery_ParamLimits

0x41ef,	// (0x00053dc9) level_4_battery_ParamLimits

0x4202,	// (0x00053ddc) level_5_battery_ParamLimits

0x4215,	// (0x00053def) level_6_battery_ParamLimits

0x4228,	// (0x00053e02) level_7_battery_ParamLimits

0x58cc,	// (0x000554a6) bg_status_flat_pane_g1

0x58d4,	// (0x000554ae) bg_status_flat_pane_g2

0x58dc,	// (0x000554b6) bg_status_flat_pane_g3

0x58e4,	// (0x000554be) bg_status_flat_pane_g4

0x58ec,	// (0x000554c6) bg_status_flat_pane_g5

0x58f4,	// (0x000554ce) bg_status_flat_pane_g6

0x58fc,	// (0x000554d6) bg_status_flat_pane_g7

0xcd1e,	// (0x0005c8f8) tabs_3_active_pane_t1_ParamLimits

0xcd1e,	// (0x0005c8f8) tabs_3_passive_pane_t1_ParamLimits

0xcd30,	// (0x0005c90a) tabs_4_active_pane_t1_ParamLimits

0xcd30,	// (0x0005c90a) tabs_4_1_passive_pane_t1_ParamLimits

0xcfe1,	// (0x0005cbbb) tabs_2_active_pane_t1_ParamLimits

0xcfe1,	// (0x0005cbbb) tabs_2_passive_pane_t1_ParamLimits

0x2c82,	// (0x0005285c) bg_active_tab_pane_cp4_ParamLimits

0xcff3,	// (0x0005cbcd) tabs_2_long_active_pane_t1_ParamLimits

0x4b9c,	// (0x00054776) bg_passive_tab_pane_cp4_ParamLimits

0x149b,	// (0x00051075) list_single_midp_graphic_pane_t1_ParamLimits

0x2c82,	// (0x0005285c) bg_active_tab_pane_cp5_ParamLimits

0xd006,	// (0x0005cbe0) tabs_3_long_active_pane_t1_ParamLimits

0x4b9c,	// (0x00054776) bg_passive_tab_pane_cp5_ParamLimits

0x149b,	// (0x00051075) list_single_midp_graphic_pane_t1

0xd40a,	// (0x0005cfe4) bg_status_flat_pane_ParamLimits

0x4d36,	// (0x00054910) indicator_pane_cp2_ParamLimits

0x4d36,	// (0x00054910) indicator_pane_cp2

0xd588,	// (0x0005d162) navi_pane_srt_ParamLimits

0xd588,	// (0x0005d162) navi_pane_srt

0x4e91,	// (0x00054a6b) popup_clock_digital_analogue_window_cp1

0x2d5f,	// (0x00052939) indicator_pane_t1

0x485e,	// (0x00054438) copy_highlight_pane

0x485e,	// (0x00054438) cursor_graphics_pane

0x485e,	// (0x00054438) graphic_within_text_pane

0x485e,	// (0x00054438) link_highlight_pane

0x60db,	// (0x00055cb5) popup_preview_text_window_t5_ParamLimits

0x60db,	// (0x00055cb5) popup_preview_text_window_t5

0x4980,	// (0x0005455a) cursor_digital_pane

0x4980,	// (0x0005455a) cursor_primary_pane

0x4991,	// (0x0005456b) cursor_primary_small_pane

0x4999,	// (0x00054573) cursor_secondary_pane

0x49a1,	// (0x0005457b) cursor_title_pane

0x4980,	// (0x0005455a) link_highlight_digital_pane

0x4988,	// (0x00054562) link_highlight_primary_pane

0x4991,	// (0x0005456b) link_highlight_primary_small_pane

0x4999,	// (0x00054573) link_highlight_secondary_pane

0x49a1,	// (0x0005457b) link_highlight_title_pane

0x4980,	// (0x0005455a) copy_highlight_digital_pane

0x4980,	// (0x0005455a) copy_highlight_primary_pane

0x4991,	// (0x0005456b) copy_highlight_primary_small_pane

0x4999,	// (0x00054573) copy_highlight_secondary_pane

0x49a1,	// (0x0005457b) copy_highlight_title_pane

0x4999,	// (0x00054573) graphic_text_digital_pane

0x596a,	// (0x00055544) graphic_text_primary_pane

0x5973,	// (0x0005554d) graphic_text_primary_small_pane

0x4991,	// (0x0005456b) graphic_text_secondary_pane

0x4980,	// (0x0005455a) graphic_text_title_pane

0xd246,	// (0x0005ce20) cursor_primary_pane_g1

0x595c,	// (0x00055536) cursor_text_primary_t1

0xd8ae,	// (0x0005d488) cursor_primary_small_pane_g1

0x594e,	// (0x00055528) cursor_text_primary_small_t1

0xd8a4,	// (0x0005d47e) cursor_primary_small_pane_g1_copy1

0x5936,	// (0x00055510) cursor_text_primary_small_t1_copy1

0x5914,	// (0x000554ee) cursor_text_title_t1

0xd89a,	// (0x0005d474) cursor_title_pane_g1

0xd246,	// (0x0005ce20) cursor_digital_pane_g1

0x49b3,	// (0x0005458d) cursor_text_digital_t1

0x49d8,	// (0x000545b2) link_highlight_primary_pane_g1

0x58bd,	// (0x00055497) link_highlight_primary_pane_t1

0x49c1,	// (0x0005459b) link_highlight_primary_small_pane_g1

0x49c9,	// (0x000545a3) link_highlight_primary_small_pane_t1

0x49d8,	// (0x000545b2) link_highlight_secondary_pane_g1

0x49e0,	// (0x000545ba) link_highlight_secondary_pane_t1

0x5831,	// (0x0005540b) link_highlight_title_pane_g1

0x5839,	// (0x00055413) link_highlight_title_pane_t1

0x581a,	// (0x000553f4) link_highlight_digital_pane_g1

0x5822,	// (0x000553fc) link_highlight_digital_pane_t1

0x56f2,	// (0x000552cc) copy_highlight_primary_pane_g1

0x56fa,	// (0x000552d4) copy_highlight_primary_pane_t1

0x56cc,	// (0x000552a6) copy_highlight_primary_small_pane_g1

0x56e3,	// (0x000552bd) copy_highlight_primary_small_pane_t1

0x49ef,	// (0x000545c9) copy_highlight_secondary_pane_g1

0x49f7,	// (0x000545d1) copy_highlight_secondary_pane_t1

0x56cc,	// (0x000552a6) copy_highlight_title_pane_g1

0x56d4,	// (0x000552ae) copy_highlight_title_pane_t1

0x56f2,	// (0x000552cc) copy_highlight_digital_pane_g1

0x692e,	// (0x00056508) copy_highlight_digital_pane_t1

0x6882,	// (0x0005645c) graphic_text_primary_pane_g1

0x6912,	// (0x000564ec) graphic_text_primary_pane_t1

0x6920,	// (0x000564fa) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0005f5a8) graphic_text_primary_pane_t

0x68ee,	// (0x000564c8) graphic_text_primary_small_pane_g1

0x68f6,	// (0x000564d0) graphic_text_primary_small_pane_t1

0x6904,	// (0x000564de) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0005f5a3) graphic_text_primary_small_pane_t

0x68ca,	// (0x000564a4) graphic_text_secondary_pane_g1

0x68d2,	// (0x000564ac) graphic_text_secondary_pane_t1

0x68e0,	// (0x000564ba) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0005f59e) graphic_text_secondary_pane_t

0x68a6,	// (0x00056480) graphic_text_title_pane_g1

0x68ae,	// (0x00056488) graphic_text_title_pane_t1

0x68bc,	// (0x00056496) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0005f599) graphic_text_title_pane_t

0x6882,	// (0x0005645c) graphic_text_digital_pane_g1

0x688a,	// (0x00056464) graphic_text_digital_pane_t1

0x6898,	// (0x00056472) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0005f594) graphic_text_digital_pane_t

0x2c82,	// (0x0005285c) navi_icon_pane_srt_ParamLimits

0x2c82,	// (0x0005285c) navi_icon_pane_srt

0x2ba2,	// (0x0005277c) navi_midp_pane_srt

0x2ba2,	// (0x0005277c) navi_navi_pane_srt

0x2c82,	// (0x0005285c) navi_text_pane_srt_ParamLimits

0x2c82,	// (0x0005285c) navi_text_pane_srt

0x684d,	// (0x00056427) navi_navi_icon_text_pane_srt

0x6855,	// (0x0005642f) navi_navi_pane_srt_g1_ParamLimits

0x6855,	// (0x0005642f) navi_navi_pane_srt_g1

0x6867,	// (0x00056441) navi_navi_pane_srt_g2_ParamLimits

0x6867,	// (0x00056441) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0005f58f) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0005f58f) navi_navi_pane_srt_g

0x6879,	// (0x00056453) navi_navi_tabs_pane_srt

0x684d,	// (0x00056427) navi_navi_text_pane_srt

0x684d,	// (0x00056427) navi_navi_volume_pane_srt

0x683e,	// (0x00056418) navi_navi_text_pane_srt_t1

0x1989,	// (0x00051563) navi_navi_volume_pane_srt_g1

0x1991,	// (0x0005156b) volume_small_pane_srt_ParamLimits

0x1991,	// (0x0005156b) volume_small_pane_srt

0x0bd8,	// (0x000507b2) volume_small_pane_srt_g1_ParamLimits

0x0bd8,	// (0x000507b2) volume_small_pane_srt_g1

0x0be8,	// (0x000507c2) volume_small_pane_srt_g2_ParamLimits

0x0be8,	// (0x000507c2) volume_small_pane_srt_g2

0x0bf9,	// (0x000507d3) volume_small_pane_srt_g3_ParamLimits

0x0bf9,	// (0x000507d3) volume_small_pane_srt_g3

0x0c0a,	// (0x000507e4) volume_small_pane_srt_g4_ParamLimits

0x0c0a,	// (0x000507e4) volume_small_pane_srt_g4

0x0c1b,	// (0x000507f5) volume_small_pane_srt_g5_ParamLimits

0x0c1b,	// (0x000507f5) volume_small_pane_srt_g5

0x0c2c,	// (0x00050806) volume_small_pane_srt_g6_ParamLimits

0x0c2c,	// (0x00050806) volume_small_pane_srt_g6

0x0c3d,	// (0x00050817) volume_small_pane_srt_g7_ParamLimits

0x0c3d,	// (0x00050817) volume_small_pane_srt_g7

0x0c4e,	// (0x00050828) volume_small_pane_srt_g8_ParamLimits

0x0c4e,	// (0x00050828) volume_small_pane_srt_g8

0x0c5f,	// (0x00050839) volume_small_pane_srt_g9_ParamLimits

0x0c5f,	// (0x00050839) volume_small_pane_srt_g9

0x0c70,	// (0x0005084a) volume_small_pane_srt_g10_ParamLimits

0x0c70,	// (0x0005084a) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0005f33c) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0005f33c) volume_small_pane_srt_g

0x3733,	// (0x0005330d) query_popup_data_pane_cp2

0x6824,	// (0x000563fe) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6824,	// (0x000563fe) navi_navi_icon_text_pane_srt_t1

0x596a,	// (0x00055544) navi_tabs_2_long_pane_srt

0x596a,	// (0x00055544) navi_tabs_2_pane_srt

0x596a,	// (0x00055544) navi_tabs_3_long_pane_srt

0x596a,	// (0x00055544) navi_tabs_3_pane_srt

0x596a,	// (0x00055544) navi_tabs_4_pane_srt

0x1969,	// (0x00051543) tabs_2_active_pane_srt_ParamLimits

0x1969,	// (0x00051543) tabs_2_active_pane_srt

0x1979,	// (0x00051553) tabs_2_passive_pane_srt_ParamLimits

0x1979,	// (0x00051553) tabs_2_passive_pane_srt

0x5126,	// (0x00054d00) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5126,	// (0x00054d00) bg_passive_tab_pane_cp1_srt

0x67f0,	// (0x000563ca) bg_passive_tab_pane_g1_cp1_srt

0x44a0,	// (0x0005407a) bg_passive_tab_pane_g2_cp1_srt

0x67f9,	// (0x000563d3) bg_passive_tab_pane_g3_cp1_srt

0x2efd,	// (0x00052ad7) bg_active_tab_pane_cp1_srt_ParamLimits

0x2efd,	// (0x00052ad7) bg_active_tab_pane_cp1_srt

0x6802,	// (0x000563dc) tabs_2_active_pane_srt_g1

0xdc45,	// (0x0005d81f) tabs_2_active_pane_srt_t1_ParamLimits

0xdc45,	// (0x0005d81f) tabs_2_active_pane_srt_t1

0x67f0,	// (0x000563ca) bg_active_tab_pane_g1_cp1_srt

0x44a0,	// (0x0005407a) bg_active_tab_pane_g2_cp1_srt

0x67f9,	// (0x000563d3) bg_active_tab_pane_g3_cp1_srt

0x1936,	// (0x00051510) tabs_3_active_pane_srt_ParamLimits

0x1936,	// (0x00051510) tabs_3_active_pane_srt

0x1947,	// (0x00051521) tabs_3_passive_pane_cp_srt_ParamLimits

0x1947,	// (0x00051521) tabs_3_passive_pane_cp_srt

0x1958,	// (0x00051532) tabs_3_passive_pane_srt_ParamLimits

0x1958,	// (0x00051532) tabs_3_passive_pane_srt

0x5126,	// (0x00054d00) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5126,	// (0x00054d00) bg_passive_tab_pane_cp2_srt

0x4a06,	// (0x000545e0) bg_passive_tab_pane_g1_cp2_srt

0x44a0,	// (0x0005407a) bg_passive_tab_pane_g2_cp2_srt

0x4a0f,	// (0x000545e9) bg_passive_tab_pane_g3_cp2_srt

0x2efd,	// (0x00052ad7) bg_active_tab_pane_cp2_srt_ParamLimits

0x2efd,	// (0x00052ad7) bg_active_tab_pane_cp2_srt

0x67d6,	// (0x000563b0) tabs_3_active_pane_srt_g1

0xdc2f,	// (0x0005d809) tabs_3_active_pane_srt_t1_ParamLimits

0xdc2f,	// (0x0005d809) tabs_3_active_pane_srt_t1

0x4a06,	// (0x000545e0) bg_active_tab_pane_g1_cp2_srt

0x44a0,	// (0x0005407a) bg_active_tab_pane_g2_cp2_srt

0x4a0f,	// (0x000545e9) bg_active_tab_pane_g3_cp2_srt

0x18ee,	// (0x000514c8) tabs_4_active_pane_srt_ParamLimits

0x18ee,	// (0x000514c8) tabs_4_active_pane_srt

0x1900,	// (0x000514da) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1900,	// (0x000514da) tabs_4_passive_pane_cp2_srt

0x0dd5,	// (0x000509af) aid_size_cell_toolbar

0x6486,	// (0x00056060) main_idle_act_pane_ParamLimits

0x0fa0,	// (0x00050b7a) popup_large_graphic_colour_window_ParamLimits

0xc3c4,	// (0x0005bf9e) popup_toolbar_window_ParamLimits

0xc3c4,	// (0x0005bf9e) popup_toolbar_window

0x663e,	// (0x00056218) list_single_graphic_2heading_pane_ParamLimits

0x663e,	// (0x00056218) list_single_graphic_2heading_pane

0x3f68,	// (0x00053b42) aid_size_cell_apps_grid_lsc_pane

0x3f7a,	// (0x00053b54) aid_size_cell_apps_grid_prt_pane

0x4b9c,	// (0x00054776) bg_wml_button_pane_cp1_ParamLimits

0x4b9c,	// (0x00054776) bg_wml_button_pane_cp1

0xd850,	// (0x0005d42a) form_midp_field_text_pane_t1_ParamLimits

0x5126,	// (0x00054d00) input_focus_pane_cp050_ParamLimits

0x5393,	// (0x00054f6d) list_midp_form_text_pane_ParamLimits

0x5339,	// (0x00054f13) input_focus_pane_cp051_ParamLimits

0x534d,	// (0x00054f27) list_midp_choice_pane_ParamLimits

0xd753,	// (0x0005d32d) list_single_2graphic_pane_cp3_ParamLimits

0xd753,	// (0x0005d32d) list_single_2graphic_pane_cp3

0xd766,	// (0x0005d340) list_single_midp_graphic_pane_ParamLimits

0xd766,	// (0x0005d340) list_single_midp_graphic_pane

0xf3cf,	// (0x0005efa9) list_single_graphic_2heading_pane_g1_ParamLimits

0xf3cf,	// (0x0005efa9) list_single_graphic_2heading_pane_g1

0xf3db,	// (0x0005efb5) list_single_graphic_2heading_pane_g4_ParamLimits

0xf3db,	// (0x0005efb5) list_single_graphic_2heading_pane_g4

0xf3e7,	// (0x0005efc1) list_single_graphic_2heading_pane_g5_ParamLimits

0xf3e7,	// (0x0005efc1) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0005f38f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0005f38f) list_single_graphic_2heading_pane_g

0xf3f3,	// (0x0005efcd) list_single_graphic_2heading_pane_t1_ParamLimits

0xf3f3,	// (0x0005efcd) list_single_graphic_2heading_pane_t1

0xf407,	// (0x0005efe1) list_single_graphic_2heading_pane_t2_ParamLimits

0xf407,	// (0x0005efe1) list_single_graphic_2heading_pane_t2

0xf423,	// (0x0005effd) list_single_graphic_2heading_pane_t3_ParamLimits

0xf423,	// (0x0005effd) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0005f396) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0005f396) list_single_graphic_2heading_pane_t

0x4ff0,	// (0x00054bca) bg_popup_sub_pane_cp2

0x501a,	// (0x00054bf4) grid_toobar_pane

0x13b4,	// (0x00050f8e) cell_toolbar_pane_ParamLimits

0x13b4,	// (0x00050f8e) cell_toolbar_pane

0x5056,	// (0x00054c30) cell_toolbar_pane_g1_ParamLimits

0x5056,	// (0x00054c30) cell_toolbar_pane_g1

0x506a,	// (0x00054c44) cell_toolbar_pane_g2_ParamLimits

0x506a,	// (0x00054c44) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0005f3a4) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0005f3a4) cell_toolbar_pane_g

0x508c,	// (0x00054c66) grid_highlight_pane_cp2_ParamLimits

0x508c,	// (0x00054c66) grid_highlight_pane_cp2

0x50a6,	// (0x00054c80) toolbar_button_pane

0x50b2,	// (0x00054c8c) toolbar_button_pane_g1

0x50ba,	// (0x00054c94) toolbar_button_pane_g2

0x50c2,	// (0x00054c9c) toolbar_button_pane_g3

0x50ca,	// (0x00054ca4) toolbar_button_pane_g4

0x50d2,	// (0x00054cac) toolbar_button_pane_g5

0x50da,	// (0x00054cb4) toolbar_button_pane_g6

0x50e2,	// (0x00054cbc) toolbar_button_pane_g7

0x50ea,	// (0x00054cc4) toolbar_button_pane_g8

0x50f2,	// (0x00054ccc) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0005f3a9) toolbar_button_pane_g

0x140e,	// (0x00050fe8) list_single_2graphic_pane_g1_cp3_ParamLimits

0x140e,	// (0x00050fe8) list_single_2graphic_pane_g1_cp3

0xc41c,	// (0x0005bff6) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc41c,	// (0x0005bff6) list_single_2graphic_pane_g2_cp3

0x142b,	// (0x00051005) list_single_2graphic_pane_g3_cp3

0x1433,	// (0x0005100d) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1433,	// (0x0005100d) list_single_2graphic_pane_g4_cp3

0x143f,	// (0x00051019) list_single_2graphic_pane_t1_cp3_ParamLimits

0x143f,	// (0x00051019) list_single_2graphic_pane_t1_cp3

0x148f,	// (0x00051069) list_single_midp_graphic_pane_g2_ParamLimits

0x148f,	// (0x00051069) list_single_midp_graphic_pane_g2

0xf3c7,	// (0x0005efa1) aid_zoom_text_primary

0x0ddd,	// (0x000509b7) aid_zoom_text_secondary

0xd29e,	// (0x0005ce78) status_small_pane_g7_ParamLimits

0xd29e,	// (0x0005ce78) status_small_pane_g7

0xd2c1,	// (0x0005ce9b) status_small_pane_t1_ParamLimits

0xb510,	// (0x0005b0ea) title_pane_g2

0x0003,

0xf54e,	// (0x0005f128) title_pane_g

0xcee6,	// (0x0005cac0) aid_size_cell_colour_1_pane_ParamLimits

0xcee6,	// (0x0005cac0) aid_size_cell_colour_1_pane

0xcefa,	// (0x0005cad4) aid_size_cell_colour_2_pane_ParamLimits

0xcefa,	// (0x0005cad4) aid_size_cell_colour_2_pane

0xcf0e,	// (0x0005cae8) aid_size_cell_colour_3_pane_ParamLimits

0xcf0e,	// (0x0005cae8) aid_size_cell_colour_3_pane

0xcf22,	// (0x0005cafc) aid_size_cell_colour_4_pane_ParamLimits

0xcf22,	// (0x0005cafc) aid_size_cell_colour_4_pane

0x07c7,	// (0x000503a1) title_pane_stacon_g1_ParamLimits

0x07c7,	// (0x000503a1) title_pane_stacon_g1

0x5751,	// (0x0005532b) popup_note_wait_window_g3_ParamLimits

0x5751,	// (0x0005532b) popup_note_wait_window_g3

0x57c7,	// (0x000553a1) popup_note_wait_window_t5_ParamLimits

0x57c7,	// (0x000553a1) popup_note_wait_window_t5

0x2ba2,	// (0x0005277c) main_feb_china_hwr_fs_writing_pane

0xbdcc,	// (0x0005b9a6) popup_feb_china_hwr_fs_window_ParamLimits

0xbdcc,	// (0x0005b9a6) popup_feb_china_hwr_fs_window

0xc42d,	// (0x0005c007) aid_size_cell_hwr_fs_ParamLimits

0xc42d,	// (0x0005c007) aid_size_cell_hwr_fs

0x5126,	// (0x00054d00) bg_popup_sub_pane_cp3_ParamLimits

0x5126,	// (0x00054d00) bg_popup_sub_pane_cp3

0xc442,	// (0x0005c01c) grid_hwr_fs_pane_ParamLimits

0xc442,	// (0x0005c01c) grid_hwr_fs_pane

0x154a,	// (0x00051124) linegrid_hwr_fs_pane_ParamLimits

0x154a,	// (0x00051124) linegrid_hwr_fs_pane

0xc45a,	// (0x0005c034) cell_hwr_fs_pane_ParamLimits

0xc45a,	// (0x0005c034) cell_hwr_fs_pane

0x5132,	// (0x00054d0c) linegrid_hwr_fs_pane_g1_ParamLimits

0x5132,	// (0x00054d0c) linegrid_hwr_fs_pane_g1

0xd727,	// (0x0005d301) linegrid_hwr_fs_pane_g2_ParamLimits

0xd727,	// (0x0005d301) linegrid_hwr_fs_pane_g2

0x5150,	// (0x00054d2a) linegrid_hwr_fs_pane_g3_ParamLimits

0x5150,	// (0x00054d2a) linegrid_hwr_fs_pane_g3

0x157c,	// (0x00051156) linegrid_hwr_fs_pane_g4_ParamLimits

0x157c,	// (0x00051156) linegrid_hwr_fs_pane_g4

0x1596,	// (0x00051170) linegrid_hwr_fs_pane_g5_ParamLimits

0x1596,	// (0x00051170) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0005f3cf) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0005f3cf) linegrid_hwr_fs_pane_g

0x515c,	// (0x00054d36) cell_hwr_fs_pane_g1_ParamLimits

0x515c,	// (0x00054d36) cell_hwr_fs_pane_g1

0x4f27,	// (0x00054b01) cell_hwr_fs_pane_g2_ParamLimits

0x4f27,	// (0x00054b01) cell_hwr_fs_pane_g2

0xd739,	// (0x0005d313) cell_hwr_fs_pane_g3_ParamLimits

0xd739,	// (0x0005d313) cell_hwr_fs_pane_g3

0xd746,	// (0x0005d320) cell_hwr_fs_pane_g4_ParamLimits

0xd746,	// (0x0005d320) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0005f3da) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0005f3da) cell_hwr_fs_pane_g

0xc480,	// (0x0005c05a) cell_hwr_fs_pane_t1

0x2ba2,	// (0x0005277c) grid_highlight_pane_cp6

0x2ba2,	// (0x0005277c) main_idle_act2_pane

0x3d1f,	// (0x000538f9) aid_inside_area_popup_secondary

0xd8b8,	// (0x0005d492) aid_inside_area_window_primary_ParamLimits

0xd8b8,	// (0x0005d492) aid_inside_area_window_primary

0x693d,	// (0x00056517) ai2_news_ticker_pane

0x6945,	// (0x0005651f) aid_size_cell_ai1_link_ParamLimits

0x6945,	// (0x0005651f) aid_size_cell_ai1_link

0xdc5b,	// (0x0005d835) popup_ai2_data_window_ParamLimits

0xdc5b,	// (0x0005d835) popup_ai2_data_window

0x6975,	// (0x0005654f) popup_ai2_link_window_ParamLimits

0x6975,	// (0x0005654f) popup_ai2_link_window

0x5126,	// (0x00054d00) bg_popup_sub_pane_cp4_ParamLimits

0x5126,	// (0x00054d00) bg_popup_sub_pane_cp4

0x6989,	// (0x00056563) grid_ai2_link_pane_ParamLimits

0x6989,	// (0x00056563) grid_ai2_link_pane

0x69a0,	// (0x0005657a) popup_ai2_link_window_g1_ParamLimits

0x69a0,	// (0x0005657a) popup_ai2_link_window_g1

0x69ac,	// (0x00056586) popup_ai2_link_window_g2_ParamLimits

0x69ac,	// (0x00056586) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0005f5ad) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0005f5ad) popup_ai2_link_window_g

0x69bb,	// (0x00056595) ai2_mp_button_pane

0x69c3,	// (0x0005659d) ai2_mp_volume_pane

0x5339,	// (0x00054f13) bg_popup_sub_pane_cp5_ParamLimits

0x5339,	// (0x00054f13) bg_popup_sub_pane_cp5

0x69cb,	// (0x000565a5) heading_ai2_gene_pane_ParamLimits

0x69cb,	// (0x000565a5) heading_ai2_gene_pane

0x69d7,	// (0x000565b1) list_ai2_gene_pane_ParamLimits

0x69d7,	// (0x000565b1) list_ai2_gene_pane

0x6a1f,	// (0x000565f9) cell_ai2_link_pane_ParamLimits

0x6a1f,	// (0x000565f9) cell_ai2_link_pane

0x6a35,	// (0x0005660f) cell_ai2_link_pane_g1

0x2ba2,	// (0x0005277c) grid_highlight_pane_cp7

0x19a6,	// (0x00051580) ai2_mp_volume_pane_g1

0x6b05,	// (0x000566df) ai2_mp_volume_pane_g2

0xdc85,	// (0x0005d85f) list_ai2_gene_pane_t1

0x6b0d,	// (0x000566e7) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0005f5c6) ai2_mp_volume_pane_g

0x19ae,	// (0x00051588) volume_small_pane_cp3

0x6b15,	// (0x000566ef) aid_size_cell_ai2_button

0x6b1d,	// (0x000566f7) grid_ai2_button_pane

0x6b26,	// (0x00056700) cell_ai2_button_pane_ParamLimits

0x6b26,	// (0x00056700) cell_ai2_button_pane

0x2b98,	// (0x00052772) cell_ai2_button_pane_g1

0x2ba2,	// (0x0005277c) grid_highlight_pane_cp8

0x6ac5,	// (0x0005669f) ai2_gene_pane_t1_ParamLimits

0x6ac5,	// (0x0005669f) ai2_gene_pane_t1

0xbd46,	// (0x0005b920) aid_height_parent_landscape

0xda02,	// (0x0005d5dc) aid_height_set_list

0x6486,	// (0x00056060) aid_size_parent

0x6764,	// (0x0005633e) aid_size_cell_graphic_pane_ParamLimits

0x69e7,	// (0x000565c1) popup_ai2_data_window_g1_ParamLimits

0x69e7,	// (0x000565c1) popup_ai2_data_window_g1

0x69f3,	// (0x000565cd) ai2_news_ticker_pane_g1

0x69fb,	// (0x000565d5) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0005f5b2) ai2_news_ticker_pane_g

0x6a03,	// (0x000565dd) ai2_news_ticker_pane_t1

0x6a11,	// (0x000565eb) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0005f5b7) ai2_news_ticker_pane_t

0x6a3e,	// (0x00056618) heading_ai2_gene_pane_g1

0x6a46,	// (0x00056620) heading_ai2_gene_pane_t1_ParamLimits

0x6a46,	// (0x00056620) heading_ai2_gene_pane_t1

0x6a5b,	// (0x00056635) list_highlight_pane_cp6

0xdc6f,	// (0x0005d849) ai2_gene_pane_ParamLimits

0xdc6f,	// (0x0005d849) ai2_gene_pane

0xdc93,	// (0x0005d86d) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0005f5bc) list_ai2_gene_pane_t

0x6a96,	// (0x00056670) list_highlight_pane_cp8_ParamLimits

0x6a96,	// (0x00056670) list_highlight_pane_cp8

0x6aa7,	// (0x00056681) ai2_gene_pane_g1_ParamLimits

0x6aa7,	// (0x00056681) ai2_gene_pane_g1

0x6ab9,	// (0x00056693) ai2_gene_pane_g2_ParamLimits

0x6ab9,	// (0x00056693) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0005f5c1) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0005f5c1) ai2_gene_pane_g

0x3b5e,	// (0x00053738) scroll_pane_cp12

0xbd05,	// (0x0005b8df) control_pane_t3_ParamLimits

0xbd05,	// (0x0005b8df) control_pane_t3

0xd2b2,	// (0x0005ce8c) status_small_pane_g8_ParamLimits

0xd2b2,	// (0x0005ce8c) status_small_pane_g8

0xbe61,	// (0x0005ba3b) popup_find_window_ParamLimits

0xc0ee,	// (0x0005bcc8) popup_note_image_window_ParamLimits

0x13e4,	// (0x00050fbe) list_double2_graphic_pane_vc_g1_ParamLimits

0x13e4,	// (0x00050fbe) list_double2_graphic_pane_vc_g1

0x4797,	// (0x00054371) list_double2_graphic_pane_vc_g2_ParamLimits

0x4797,	// (0x00054371) list_double2_graphic_pane_vc_g2

0x3114,	// (0x00052cee) list_double2_graphic_pane_vc_g3_ParamLimits

0x3114,	// (0x00052cee) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005f39d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005f39d) list_double2_graphic_pane_vc_g

0x13f0,	// (0x00050fca) list_double2_graphic_pane_vc_t1_ParamLimits

0x13f0,	// (0x00050fca) list_double2_graphic_pane_vc_t1

0x4797,	// (0x00054371) list_single_heading_pane_vc_g1_ParamLimits

0x4797,	// (0x00054371) list_single_heading_pane_vc_g1

0x3114,	// (0x00052cee) list_single_heading_pane_vc_g2_ParamLimits

0x3114,	// (0x00052cee) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005f1ac) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005f1ac) list_single_heading_pane_vc_g

0x145b,	// (0x00051035) list_single_heading_pane_vc_t1_ParamLimits

0x145b,	// (0x00051035) list_single_heading_pane_vc_t1

0x1473,	// (0x0005104d) list_single_heading_pane_vc_t2_ParamLimits

0x1473,	// (0x0005104d) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0005f3be) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0005f3be) list_single_heading_pane_vc_t

0x3120,	// (0x00052cfa) list_setting_number_pane_vc_g1_ParamLimits

0x3120,	// (0x00052cfa) list_setting_number_pane_vc_g1

0x312c,	// (0x00052d06) list_setting_number_pane_vc_g2_ParamLimits

0x312c,	// (0x00052d06) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0005f3c3) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0005f3c3) list_setting_number_pane_vc_g

0x14b1,	// (0x0005108b) list_setting_number_pane_vc_t1_ParamLimits

0x14b1,	// (0x0005108b) list_setting_number_pane_vc_t1

0x14c5,	// (0x0005109f) list_setting_number_pane_vc_t2_ParamLimits

0x14c5,	// (0x0005109f) list_setting_number_pane_vc_t2

0x14e1,	// (0x000510bb) list_setting_number_pane_vc_t3_ParamLimits

0x14e1,	// (0x000510bb) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0005f3c8) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0005f3c8) list_setting_number_pane_vc_t

0x150d,	// (0x000510e7) set_value_pane_vc_ParamLimits

0x150d,	// (0x000510e7) set_value_pane_vc

0x663e,	// (0x00056218) list_double2_graphic_pane_vc_ParamLimits

0x663e,	// (0x00056218) list_double2_graphic_pane_vc

0x188e,	// (0x00051468) list_double2_large_graphic_pane_vc_ParamLimits

0x188e,	// (0x00051468) list_double2_large_graphic_pane_vc

0x663e,	// (0x00056218) list_double2_pane_vc_ParamLimits

0x663e,	// (0x00056218) list_double2_pane_vc

0x663e,	// (0x00056218) list_double_graphic_heading_pane_vc_ParamLimits

0x663e,	// (0x00056218) list_double_graphic_heading_pane_vc

0x663e,	// (0x00056218) list_double_graphic_pane_vc_ParamLimits

0x663e,	// (0x00056218) list_double_graphic_pane_vc

0x663e,	// (0x00056218) list_double_heading_pane_vc_ParamLimits

0x663e,	// (0x00056218) list_double_heading_pane_vc

0x189f,	// (0x00051479) list_double_large_graphic_pane_vc_ParamLimits

0x189f,	// (0x00051479) list_double_large_graphic_pane_vc

0x663e,	// (0x00056218) list_double_number_pane_vc_ParamLimits

0x663e,	// (0x00056218) list_double_number_pane_vc

0x663e,	// (0x00056218) list_double_pane_vc_ParamLimits

0x663e,	// (0x00056218) list_double_pane_vc

0x663e,	// (0x00056218) list_double_time_pane_vc_ParamLimits

0x663e,	// (0x00056218) list_double_time_pane_vc

0x663e,	// (0x00056218) list_setting_number_pane_vc_ParamLimits

0x663e,	// (0x00056218) list_setting_number_pane_vc

0x663e,	// (0x00056218) list_setting_pane_vc_ParamLimits

0x663e,	// (0x00056218) list_setting_pane_vc

0x663e,	// (0x00056218) list_single_graphic_heading_pane_vc_ParamLimits

0x663e,	// (0x00056218) list_single_graphic_heading_pane_vc

0x663e,	// (0x00056218) list_single_heading_pane_vc_ParamLimits

0x663e,	// (0x00056218) list_single_heading_pane_vc

0x663e,	// (0x00056218) list_single_number_heading_pane_vc_ParamLimits

0x663e,	// (0x00056218) list_single_number_heading_pane_vc

0x13e4,	// (0x00050fbe) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x13e4,	// (0x00050fbe) list_double_graphic_heading_pane_vc_g1

0x4797,	// (0x00054371) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4797,	// (0x00054371) list_double_graphic_heading_pane_vc_g2

0x3114,	// (0x00052cee) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3114,	// (0x00052cee) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005f39d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005f39d) list_double_graphic_heading_pane_vc_g

0x19b7,	// (0x00051591) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x19b7,	// (0x00051591) list_double_graphic_heading_pane_vc_t1

0x19d3,	// (0x000515ad) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x19d3,	// (0x000515ad) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0005f5cd) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0005f5cd) list_double_graphic_heading_pane_vc_t

0x3120,	// (0x00052cfa) list_setting_pane_vc_g1_ParamLimits

0x3120,	// (0x00052cfa) list_setting_pane_vc_g1

0x312c,	// (0x00052d06) list_setting_pane_vc_g2_ParamLimits

0x312c,	// (0x00052d06) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0005f3c3) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0005f3c3) list_setting_pane_vc_g

0x19f1,	// (0x000515cb) list_setting_pane_vc_t1_ParamLimits

0x19f1,	// (0x000515cb) list_setting_pane_vc_t1

0x1a0d,	// (0x000515e7) list_setting_pane_vc_t2_ParamLimits

0x1a0d,	// (0x000515e7) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0005f5fb) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0005f5fb) list_setting_pane_vc_t

0x150d,	// (0x000510e7) set_value_pane_cp_vc_ParamLimits

0x150d,	// (0x000510e7) set_value_pane_cp_vc

0x4797,	// (0x00054371) list_single_number_heading_pane_vc_g1_ParamLimits

0x4797,	// (0x00054371) list_single_number_heading_pane_vc_g1

0x3114,	// (0x00052cee) list_single_number_heading_pane_vc_g2_ParamLimits

0x3114,	// (0x00052cee) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005f1ac) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005f1ac) list_single_number_heading_pane_vc_g

0x145b,	// (0x00051035) list_single_number_heading_pane_vc_t1_ParamLimits

0x145b,	// (0x00051035) list_single_number_heading_pane_vc_t1

0x1a29,	// (0x00051603) list_single_number_heading_pane_vc_t2_ParamLimits

0x1a29,	// (0x00051603) list_single_number_heading_pane_vc_t2

0x1a3d,	// (0x00051617) list_single_number_heading_pane_vc_t3_ParamLimits

0x1a3d,	// (0x00051617) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0005f600) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0005f600) list_single_number_heading_pane_vc_t

0x13e4,	// (0x00050fbe) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x13e4,	// (0x00050fbe) list_single_graphic_heading_pane_vc_g1

0x4797,	// (0x00054371) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4797,	// (0x00054371) list_single_graphic_heading_pane_vc_g4

0x3114,	// (0x00052cee) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3114,	// (0x00052cee) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0005f39d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005f39d) list_single_graphic_heading_pane_vc_g

0x145b,	// (0x00051035) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x145b,	// (0x00051035) list_single_graphic_heading_pane_vc_t1

0x1a4f,	// (0x00051629) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x1a4f,	// (0x00051629) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0005f607) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0005f607) list_single_graphic_heading_pane_vc_t

0x4797,	// (0x00054371) list_double2_pane_vc_g1_ParamLimits

0x4797,	// (0x00054371) list_double2_pane_vc_g1

0x3114,	// (0x00052cee) list_double2_pane_vc_g2_ParamLimits

0x3114,	// (0x00052cee) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005f1ac) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005f1ac) list_double2_pane_vc_g

0x1a63,	// (0x0005163d) list_double2_pane_vc_t1_ParamLimits

0x1a63,	// (0x0005163d) list_double2_pane_vc_t1

0x1a79,	// (0x00051653) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x1a79,	// (0x00051653) list_double2_large_graphic_pane_vc_g1

0x1a85,	// (0x0005165f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1a85,	// (0x0005165f) list_double2_large_graphic_pane_vc_g2

0x1a91,	// (0x0005166b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1a91,	// (0x0005166b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0005f1c4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0005f1c4) list_double2_large_graphic_pane_vc_g

0x1a9d,	// (0x00051677) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x1a9d,	// (0x00051677) list_double2_large_graphic_pane_vc_t1

0x31ce,	// (0x00052da8) list_double_time_pane_vc_g1_ParamLimits

0x31ce,	// (0x00052da8) list_double_time_pane_vc_g1

0x31da,	// (0x00052db4) list_double_time_pane_vc_g2_ParamLimits

0x31da,	// (0x00052db4) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0005f60c) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0005f60c) list_double_time_pane_vc_g

0x1ab3,	// (0x0005168d) list_double_time_pane_vc_t1_ParamLimits

0x1ab3,	// (0x0005168d) list_double_time_pane_vc_t1

0x1ad7,	// (0x000516b1) list_double_time_pane_vc_t2_ParamLimits

0x1ad7,	// (0x000516b1) list_double_time_pane_vc_t2

0x1b26,	// (0x00051700) list_double_time_pane_vc_t3_ParamLimits

0x1b26,	// (0x00051700) list_double_time_pane_vc_t3

0x1b38,	// (0x00051712) list_double_time_pane_vc_t4_ParamLimits

0x1b38,	// (0x00051712) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0005f611) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0005f611) list_double_time_pane_vc_t

0x4797,	// (0x00054371) list_double_pane_vc_g1_ParamLimits

0x4797,	// (0x00054371) list_double_pane_vc_g1

0x3114,	// (0x00052cee) list_double_pane_vc_g2_ParamLimits

0x3114,	// (0x00052cee) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005f1ac) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005f1ac) list_double_pane_vc_g

0x31e6,	// (0x00052dc0) list_double_pane_vc_t1_ParamLimits

0x31e6,	// (0x00052dc0) list_double_pane_vc_t1

0x31fa,	// (0x00052dd4) list_double_pane_vc_t2_ParamLimits

0x31fa,	// (0x00052dd4) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0005f61a) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0005f61a) list_double_pane_vc_t

0x4797,	// (0x00054371) list_double_number_pane_vc_g1_ParamLimits

0x4797,	// (0x00054371) list_double_number_pane_vc_g1

0x3114,	// (0x00052cee) list_double_number_pane_vc_g2_ParamLimits

0x3114,	// (0x00052cee) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005f1ac) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005f1ac) list_double_number_pane_vc_g

0x3212,	// (0x00052dec) list_double_number_pane_vc_t1_ParamLimits

0x3212,	// (0x00052dec) list_double_number_pane_vc_t1

0x3224,	// (0x00052dfe) list_double_number_pane_vc_t2_ParamLimits

0x3224,	// (0x00052dfe) list_double_number_pane_vc_t2

0x3238,	// (0x00052e12) list_double_number_pane_vc_t3_ParamLimits

0x3238,	// (0x00052e12) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0005f61f) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0005f61f) list_double_number_pane_vc_t

0x3250,	// (0x00052e2a) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3250,	// (0x00052e2a) list_double_large_graphic_pane_vc_g1

0x3272,	// (0x00052e4c) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3272,	// (0x00052e4c) list_double_large_graphic_pane_vc_g2

0x3286,	// (0x00052e60) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3286,	// (0x00052e60) list_double_large_graphic_pane_vc_g3

0x3295,	// (0x00052e6f) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3295,	// (0x00052e6f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0005f626) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0005f626) list_double_large_graphic_pane_vc_g

0x32a1,	// (0x00052e7b) list_double_large_graphic_pane_vc_t1_ParamLimits

0x32a1,	// (0x00052e7b) list_double_large_graphic_pane_vc_t1

0x32bd,	// (0x00052e97) list_double_large_graphic_pane_vc_t2_ParamLimits

0x32bd,	// (0x00052e97) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0005f62f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0005f62f) list_double_large_graphic_pane_vc_t

0x4797,	// (0x00054371) list_double_heading_pane_vc_g1_ParamLimits

0x4797,	// (0x00054371) list_double_heading_pane_vc_g1

0x3114,	// (0x00052cee) list_double_heading_pane_vc_g2_ParamLimits

0x3114,	// (0x00052cee) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005f1ac) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005f1ac) list_double_heading_pane_vc_g

0x32df,	// (0x00052eb9) list_double_heading_pane_vc_t1_ParamLimits

0x32df,	// (0x00052eb9) list_double_heading_pane_vc_t1

0x145b,	// (0x00051035) list_double_heading_pane_vc_t2_ParamLimits

0x145b,	// (0x00051035) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0005f634) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0005f634) list_double_heading_pane_vc_t

0x32f3,	// (0x00052ecd) list_double_graphic_pane_vc_g1_ParamLimits

0x32f3,	// (0x00052ecd) list_double_graphic_pane_vc_g1

0x32ff,	// (0x00052ed9) list_double_graphic_pane_vc_g2_ParamLimits

0x32ff,	// (0x00052ed9) list_double_graphic_pane_vc_g2

0x4797,	// (0x00054371) list_double_graphic_pane_vc_g3_ParamLimits

0x4797,	// (0x00054371) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0005f639) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0005f639) list_double_graphic_pane_vc_g

0x331c,	// (0x00052ef6) list_double_graphic_pane_vc_t1_ParamLimits

0x331c,	// (0x00052ef6) list_double_graphic_pane_vc_t1

0x3346,	// (0x00052f20) list_double_graphic_pane_vc_t2_ParamLimits

0x3346,	// (0x00052f20) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0005f642) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0005f642) list_double_graphic_pane_vc_t

0xf32b,	// (0x0005ef05) aid_size_cell_fastswap

0xb2f7,	// (0x0005aed1) aid_size_cell_touch_ParamLimits

0xb2f7,	// (0x0005aed1) aid_size_cell_touch

0xf520,	// (0x0005f0fa) popup_fast_swap_wide_window_ParamLimits

0xf520,	// (0x0005f0fa) popup_fast_swap_wide_window

0xb4a7,	// (0x0005b081) touch_pane_ParamLimits

0xb4a7,	// (0x0005b081) touch_pane

0x3bc0,	// (0x0005379a) button_value_adjust_pane_cp2

0x0521,	// (0x000500fb) button_value_adjust_pane_cp4

0x0545,	// (0x0005011f) form_field_data_pane_cp2

0xb9f3,	// (0x0005b5cd) form_field_data_wide_pane_cp2

0x4035,	// (0x00053c0f) bg_scroll_pane_ParamLimits

0x0929,	// (0x00050503) scroll_handle_pane_ParamLimits

0x093d,	// (0x00050517) scroll_sc2_down_pane_ParamLimits

0x093d,	// (0x00050517) scroll_sc2_down_pane

0x4066,	// (0x00053c40) scroll_sc2_up_pane_ParamLimits

0x4066,	// (0x00053c40) scroll_sc2_up_pane

0xddb3,	// (0x0005d98d) grid_wheel_folder_pane_g1_ParamLimits

0xddb3,	// (0x0005d98d) grid_wheel_folder_pane_g1

0x0b70,	// (0x0005074a) clock_nsta_pane_cp2_ParamLimits

0x0b70,	// (0x0005074a) clock_nsta_pane_cp2

0x4b9c,	// (0x00054776) listscroll_midp_pane_ParamLimits

0xd1ad,	// (0x0005cd87) midp_canvas_pane

0x4b4e,	// (0x00054728) nsta_clock_indic_pane

0x4b82,	// (0x0005475c) listscroll_form_pane_vc

0x4b8a,	// (0x00054764) listscroll_set_pane_vc_ParamLimits

0x4b8a,	// (0x00054764) listscroll_set_pane_vc

0xd432,	// (0x0005d00c) clock_nsta_pane

0xd45c,	// (0x0005d036) indicator_nsta_pane

0x4ff0,	// (0x00054bca) bg_popup_sub_pane_cp2_ParamLimits

0x5004,	// (0x00054bde) find_pane_cp2_ParamLimits

0x5004,	// (0x00054bde) find_pane_cp2

0x501a,	// (0x00054bf4) grid_toobar_pane_ParamLimits

0x50fa,	// (0x00054cd4) list_form_gen_pane_vc_ParamLimits

0x50fa,	// (0x00054cd4) list_form_gen_pane_vc

0x5110,	// (0x00054cea) scroll_pane_cp8_vc_ParamLimits

0x5110,	// (0x00054cea) scroll_pane_cp8_vc

0x518c,	// (0x00054d66) data_form_wide_pane_vc_ParamLimits

0x518c,	// (0x00054d66) data_form_wide_pane_vc

0x5198,	// (0x00054d72) form_field_data_wide_pane_vc_g1

0x51a0,	// (0x00054d7a) form_field_data_wide_pane_vc_t1_ParamLimits

0x51a0,	// (0x00054d7a) form_field_data_wide_pane_vc_t1

0x3bd4,	// (0x000537ae) input_focus_pane_cp6_vc_ParamLimits

0x3bd4,	// (0x000537ae) input_focus_pane_cp6_vc

0xd872,	// (0x0005d44c) list_midp_pane_ParamLimits

0x67ca,	// (0x000563a4) scroll_pane_cp16_ParamLimits

0x67ca,	// (0x000563a4) scroll_pane_cp16

0x5526,	// (0x00055100) button_value_adjust_pane_ParamLimits

0x5526,	// (0x00055100) button_value_adjust_pane

0xda13,	// (0x0005d5ed) button_value_adjust_pane_cp6_ParamLimits

0xda13,	// (0x0005d5ed) button_value_adjust_pane_cp6

0xdb2d,	// (0x0005d707) settings_code_pane_cp_ParamLimits

0xdb2d,	// (0x0005d707) settings_code_pane_cp

0x2b98,	// (0x00052772) cell_touch_pane_g1

0x2b98,	// (0x00052772) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0005f2e2) cell_touch_pane_g

0xdca1,	// (0x0005d87b) cell_touch_pane_cp_ParamLimits

0xdca1,	// (0x0005d87b) cell_touch_pane_cp

0xdcbd,	// (0x0005d897) cell_touch_pane_ParamLimits

0xdcbd,	// (0x0005d897) cell_touch_pane

0x2b98,	// (0x00052772) scroll_sc2_down_pane_g1

0x2b98,	// (0x00052772) scroll_sc2_up_pane_g1

0x2ba2,	// (0x0005277c) bg_set_opt_pane_cp4_vc

0x6b5a,	// (0x00056734) list_set_graphic_pane_vc_g1_ParamLimits

0x6b5a,	// (0x00056734) list_set_graphic_pane_vc_g1

0x6b66,	// (0x00056740) list_set_graphic_pane_vc_g2_ParamLimits

0x6b66,	// (0x00056740) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0005f5d2) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0005f5d2) list_set_graphic_pane_vc_g

0x6b72,	// (0x0005674c) text_primary_small_cp13_vc_ParamLimits

0x6b72,	// (0x0005674c) text_primary_small_cp13_vc

0x6b8a,	// (0x00056764) list_set_graphic_pane_vc_ParamLimits

0x6b8a,	// (0x00056764) list_set_graphic_pane_vc

0x2ba2,	// (0x0005277c) input_focus_pane_cp2_vc

0x2b98,	// (0x00052772) setting_code_pane_vc_g1

0x2ccd,	// (0x000528a7) setting_code_pane_vc_t1

0x6b9d,	// (0x00056777) set_text_pane_vc_t1_ParamLimits

0x6b9d,	// (0x00056777) set_text_pane_vc_t1

0x2ba2,	// (0x0005277c) input_focus_pane_cp1_vc

0x6bb9,	// (0x00056793) list_set_text_pane_vc

0x2b98,	// (0x00052772) setting_text_pane_vc_g1

0x2ba2,	// (0x0005277c) bg_set_opt_pane_cp2_vc

0x2cc4,	// (0x0005289e) setting_slider_graphic_pane_vc_g1

0x6bc3,	// (0x0005679d) setting_slider_graphic_pane_vc_t1

0x6bd3,	// (0x000567ad) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0005f5d7) setting_slider_graphic_pane_vc_t

0x6be3,	// (0x000567bd) slider_set_pane_cp_vc

0x6beb,	// (0x000567c5) slider_set_pane_vc_g1

0x6bf4,	// (0x000567ce) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0005f5dc) slider_set_pane_vc_g

0x3c23,	// (0x000537fd) set_opt_bg_pane_g1_copy1

0x3c2b,	// (0x00053805) set_opt_bg_pane_g2_copy1

0x6c20,	// (0x000567fa) set_opt_bg_pane_g3_copy1

0x3c3b,	// (0x00053815) set_opt_bg_pane_g4_copy1

0x3c43,	// (0x0005381d) set_opt_bg_pane_g5_copy1

0x3c4b,	// (0x00053825) set_opt_bg_pane_g6_copy1

0x6c2a,	// (0x00056804) set_opt_bg_pane_g7_copy1

0x6c32,	// (0x0005680c) set_opt_bg_pane_g8_copy1

0x6c3c,	// (0x00056816) set_opt_bg_pane_g9_copy1

0x2ba2,	// (0x0005277c) bg_set_opt_pane_cp_vc

0x6c46,	// (0x00056820) setting_slider_pane_vc_t1

0x6c55,	// (0x0005682f) setting_slider_pane_vc_t2

0x6c65,	// (0x0005683f) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0005f5eb) setting_slider_pane_vc_t

0x6c75,	// (0x0005684f) slider_set_pane_vc

0x15f4,	// (0x000511ce) volume_set_pane_vc_g1

0x15fd,	// (0x000511d7) volume_set_pane_vc_g2

0x1606,	// (0x000511e0) volume_set_pane_vc_g3

0x160f,	// (0x000511e9) volume_set_pane_vc_g4

0x1618,	// (0x000511f2) volume_set_pane_vc_g5

0x1621,	// (0x000511fb) volume_set_pane_vc_g6

0x162a,	// (0x00051204) volume_set_pane_vc_g7

0x1633,	// (0x0005120d) volume_set_pane_vc_g8

0x163c,	// (0x00051216) volume_set_pane_vc_g9

0x1645,	// (0x0005121f) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0005f490) volume_set_pane_vc_g

0x6c7d,	// (0x00056857) volume_set_pane_vc

0x6c85,	// (0x0005685f) button_value_adjust_pane_cp1_vc

0x6c8f,	// (0x00056869) list_highlight_pane_cp2_vc

0x6c98,	// (0x00056872) list_set_pane_vc_ParamLimits

0x6c98,	// (0x00056872) list_set_pane_vc

0x6cf6,	// (0x000568d0) main_pane_set_vc_t1_ParamLimits

0x6cf6,	// (0x000568d0) main_pane_set_vc_t1

0x6d0b,	// (0x000568e5) main_pane_set_vc_t2_ParamLimits

0x6d0b,	// (0x000568e5) main_pane_set_vc_t2

0x6d1d,	// (0x000568f7) main_pane_set_vc_t3_ParamLimits

0x6d1d,	// (0x000568f7) main_pane_set_vc_t3

0x6d31,	// (0x0005690b) main_pane_set_vc_t4_ParamLimits

0x6d31,	// (0x0005690b) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0005f5f2) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0005f5f2) main_pane_set_vc_t

0x6d45,	// (0x0005691f) setting_code_pane_vc_ParamLimits

0x6d45,	// (0x0005691f) setting_code_pane_vc

0x6d56,	// (0x00056930) setting_slider_graphic_pane_vc

0x6d56,	// (0x00056930) setting_slider_pane_vc

0x6d56,	// (0x00056930) setting_text_pane_vc

0x6d56,	// (0x00056930) setting_volume_pane_vc

0x6d60,	// (0x0005693a) scroll_pane_cp121_vc

0x3bae,	// (0x00053788) set_content_pane_vc

0x6d68,	// (0x00056942) button_value_adjust_pane_g1

0x6d71,	// (0x0005694b) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0005f647) button_value_adjust_pane_g

0x6d7a,	// (0x00056954) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6d7a,	// (0x00056954) form_field_slider_wide_pane_vc_t1

0x6d8e,	// (0x00056968) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6d8e,	// (0x00056968) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0005f64c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0005f64c) form_field_slider_wide_pane_vc_t

0x2efd,	// (0x00052ad7) input_focus_pane_cp10_vc_ParamLimits

0x2efd,	// (0x00052ad7) input_focus_pane_cp10_vc

0x6dbc,	// (0x00056996) slider_cont_pane_cp1_vc_ParamLimits

0x6dbc,	// (0x00056996) slider_cont_pane_cp1_vc

0x6dce,	// (0x000569a8) slider_form_pane_g1_cp2

0x6bf4,	// (0x000567ce) slider_form_pane_g2_cp2

0x6dfb,	// (0x000569d5) form_field_slider_pane_vc_t3

0x6e09,	// (0x000569e3) form_field_slider_pane_vc_t4

0x6e17,	// (0x000569f1) slider_form_pane_vc_ParamLimits

0x6e17,	// (0x000569f1) slider_form_pane_vc

0x6e24,	// (0x000569fe) form_field_slider_pane_vc_t1_ParamLimits

0x6e24,	// (0x000569fe) form_field_slider_pane_vc_t1

0x6d8e,	// (0x00056968) form_field_slider_pane_vc_t2_ParamLimits

0x6d8e,	// (0x00056968) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0005f65e) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0005f65e) form_field_slider_pane_vc_t

0x2efd,	// (0x00052ad7) input_focus_pane_cp9_vc_ParamLimits

0x2efd,	// (0x00052ad7) input_focus_pane_cp9_vc

0x6e40,	// (0x00056a1a) slider_cont_pane_vc_ParamLimits

0x6e40,	// (0x00056a1a) slider_cont_pane_vc

0x6e54,	// (0x00056a2e) list_form_graphic_pane_cp_vc_ParamLimits

0x6e54,	// (0x00056a2e) list_form_graphic_pane_cp_vc

0x5198,	// (0x00054d72) form_field_popup_wide_pane_vc_g1

0x6e69,	// (0x00056a43) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6e69,	// (0x00056a43) form_field_popup_wide_pane_vc_t1

0x3bd4,	// (0x000537ae) input_focus_pane_cp8_vc_ParamLimits

0x3bd4,	// (0x000537ae) input_focus_pane_cp8_vc

0x6eae,	// (0x00056a88) list_form_wide_pane_vc_ParamLimits

0x6eae,	// (0x00056a88) list_form_wide_pane_vc

0x6eba,	// (0x00056a94) list_form_graphic_pane_vc_g1

0x6ec2,	// (0x00056a9c) list_form_graphic_pane_vc_t1_ParamLimits

0x6ec2,	// (0x00056a9c) list_form_graphic_pane_vc_t1

0x2c82,	// (0x0005285c) list_highlight_pane_cp5_vc_ParamLimits

0x2c82,	// (0x0005285c) list_highlight_pane_cp5_vc

0x6ede,	// (0x00056ab8) list_form_graphic_pane_vc_ParamLimits

0x6ede,	// (0x00056ab8) list_form_graphic_pane_vc

0x5198,	// (0x00054d72) form_field_popup_pane_vc_g1

0x6ef4,	// (0x00056ace) form_field_popup_pane_vc_t1_ParamLimits

0x6ef4,	// (0x00056ace) form_field_popup_pane_vc_t1

0x3bd4,	// (0x000537ae) input_focus_pane_cp7_vc_ParamLimits

0x3bd4,	// (0x000537ae) input_focus_pane_cp7_vc

0x6f0b,	// (0x00056ae5) list_form_pane_vc_ParamLimits

0x6f0b,	// (0x00056ae5) list_form_pane_vc

0x6f17,	// (0x00056af1) data_form_pane_vc_t1_ParamLimits

0x6f17,	// (0x00056af1) data_form_pane_vc_t1

0x3c23,	// (0x000537fd) input_focus_pane_vc_g1

0x3c2b,	// (0x00053805) input_focus_pane_vc_g2

0x3c33,	// (0x0005380d) input_focus_pane_vc_g3

0x3c3b,	// (0x00053815) input_focus_pane_vc_g4

0x3c43,	// (0x0005381d) input_focus_pane_vc_g5

0x3c4b,	// (0x00053825) input_focus_pane_vc_g6

0x3c53,	// (0x0005382d) input_focus_pane_vc_g7

0x3c5b,	// (0x00053835) input_focus_pane_vc_g8

0x3c63,	// (0x0005383d) input_focus_pane_vc_g9

0x2b98,	// (0x00052772) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0005f26b) input_focus_pane_vc_g

0x518c,	// (0x00054d66) data_form_pane_vc_ParamLimits

0x518c,	// (0x00054d66) data_form_pane_vc

0x5198,	// (0x00054d72) form_field_data_pane_vc_g1

0x6f32,	// (0x00056b0c) form_field_data_pane_vc_t1_ParamLimits

0x6f32,	// (0x00056b0c) form_field_data_pane_vc_t1

0x3bd4,	// (0x000537ae) input_focus_pane_vc_ParamLimits

0x3bd4,	// (0x000537ae) input_focus_pane_vc

0x6f4c,	// (0x00056b26) button_value_adjust_pane_cp3_vc

0x6f54,	// (0x00056b2e) button_value_adjust_pane_cp5_vc

0x6f5c,	// (0x00056b36) form_field_data_pane_vc_ParamLimits

0x6f5c,	// (0x00056b36) form_field_data_pane_vc

0x6f73,	// (0x00056b4d) form_field_data_pane_vc_cp2

0x6f7b,	// (0x00056b55) form_field_data_wide_pane_vc_ParamLimits

0x6f7b,	// (0x00056b55) form_field_data_wide_pane_vc

0x6f91,	// (0x00056b6b) form_field_data_wide_pane_vc_cp2

0x6f99,	// (0x00056b73) form_field_popup_pane_vc_ParamLimits

0x6f99,	// (0x00056b73) form_field_popup_pane_vc

0x6fb0,	// (0x00056b8a) form_field_popup_wide_pane_vc_ParamLimits

0x6fb0,	// (0x00056b8a) form_field_popup_wide_pane_vc

0x6fc6,	// (0x00056ba0) form_field_slider_pane_vc_ParamLimits

0x6fc6,	// (0x00056ba0) form_field_slider_pane_vc

0x6fd9,	// (0x00056bb3) form_field_slider_wide_pane_vc_ParamLimits

0x6fd9,	// (0x00056bb3) form_field_slider_wide_pane_vc

0xdcdb,	// (0x0005d8b5) grid_touch_1_pane_ParamLimits

0xdcdb,	// (0x0005d8b5) grid_touch_1_pane

0xdcef,	// (0x0005d8c9) grid_touch_2_pane_ParamLimits

0xdcef,	// (0x0005d8c9) grid_touch_2_pane

0x70a7,	// (0x00056c81) touch_pane_g1_ParamLimits

0x70a7,	// (0x00056c81) touch_pane_g1

0x7010,	// (0x00056bea) cell_app_pane_cp_wide_ParamLimits

0x7010,	// (0x00056bea) cell_app_pane_cp_wide

0x7021,	// (0x00056bfb) grid_popup_fast_wide_pane_ParamLimits

0x7021,	// (0x00056bfb) grid_popup_fast_wide_pane

0x7035,	// (0x00056c0f) scroll_pane_cp19_ParamLimits

0x7035,	// (0x00056c0f) scroll_pane_cp19

0x2ba2,	// (0x0005277c) bg_popup_window_pane_cp20

0x7049,	// (0x00056c23) listscroll_popup_fast_wide_pane

0x3d8b,	// (0x00053965) grid_indicator_nsta_pane

0x7051,	// (0x00056c2b) clock_nsta_pane_g1

0x705a,	// (0x00056c34) clock_nsta_pane_t1

0xdd19,	// (0x0005d8f3) cell_indicator_nsta_pane_ParamLimits

0xdd19,	// (0x0005d8f3) cell_indicator_nsta_pane

0x70a7,	// (0x00056c81) cell_indicator_nsta_pane_g1

0xdd30,	// (0x0005d90a) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0005f66f) cell_indicator_nsta_pane_g

0x70c2,	// (0x00056c9c) clock_nsta_pane_cp

0x70ca,	// (0x00056ca4) indicator_nsta_pane_cp

0x70d2,	// (0x00056cac) nsta_clock_indic_pane_g1

0x2d4b,	// (0x00052925) grid_indicator_pane

0x415b,	// (0x00053d35) scroll_pane_cp29

0x0abf,	// (0x00050699) indicator_nsta_pane_cp2_ParamLimits

0x0abf,	// (0x00050699) indicator_nsta_pane_cp2

0x2c82,	// (0x0005285c) main_apps_wheel_pane

0x53ad,	// (0x00054f87) form_midp_field_text_pane_ParamLimits

0x54f8,	// (0x000550d2) scroll_bar_cp050_ParamLimits

0x7133,	// (0x00056d0d) cell_indicator_pane_ParamLimits

0x7133,	// (0x00056d0d) cell_indicator_pane

0x714a,	// (0x00056d24) cell_indicator_pane_g1

0xdd3d,	// (0x0005d917) grid_wheel_folder_pane_ParamLimits

0xdd3d,	// (0x0005d917) grid_wheel_folder_pane

0xdd4b,	// (0x0005d925) list_wheel_apps_pane_ParamLimits

0xdd4b,	// (0x0005d925) list_wheel_apps_pane

0xdd59,	// (0x0005d933) main_apps_wheel_pane_g1_ParamLimits

0xdd59,	// (0x0005d933) main_apps_wheel_pane_g1

0xdd65,	// (0x0005d93f) main_apps_wheel_pane_g2_ParamLimits

0xdd65,	// (0x0005d93f) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0005f68b) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0005f68b) main_apps_wheel_pane_g

0xdd73,	// (0x0005d94d) main_apps_wheel_pane_t1_ParamLimits

0xdd73,	// (0x0005d94d) main_apps_wheel_pane_t1

0xdd87,	// (0x0005d961) list_wheel_apps_pane_g1

0xdd8f,	// (0x0005d969) list_wheel_apps_pane_g2

0xdd97,	// (0x0005d971) list_wheel_apps_pane_g3

0xdd9f,	// (0x0005d979) list_wheel_apps_pane_g4

0xdda9,	// (0x0005d983) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0005f690) list_wheel_apps_pane_g

0x46de,	// (0x000542b8) navi_icon_text_pane

0xd326,	// (0x0005cf00) aid_fill_nsta

0x720f,	// (0x00056de9) navi_icon_text_pane_g1

0x721b,	// (0x00056df5) navi_icon_text_pane_t1

0xd18a,	// (0x0005cd64) list_set_graphic_pane_t1_ParamLimits

0xd18a,	// (0x0005cd64) list_set_graphic_pane_t1

0x5c47,	// (0x00055821) popup_midp_note_alarm_window_t6_ParamLimits

0x5c47,	// (0x00055821) popup_midp_note_alarm_window_t6

0x5c59,	// (0x00055833) popup_midp_note_alarm_window_t7_ParamLimits

0x5c59,	// (0x00055833) popup_midp_note_alarm_window_t7

0x5c6b,	// (0x00055845) popup_midp_note_alarm_window_t8_ParamLimits

0x5c6b,	// (0x00055845) popup_midp_note_alarm_window_t8

0x5c7d,	// (0x00055857) popup_midp_note_alarm_window_t9_ParamLimits

0x5c7d,	// (0x00055857) popup_midp_note_alarm_window_t9

0x5c8f,	// (0x00055869) popup_midp_note_alarm_window_t10_ParamLimits

0x5c8f,	// (0x00055869) popup_midp_note_alarm_window_t10

0x5ca1,	// (0x0005587b) popup_midp_note_alarm_window_t11_ParamLimits

0x5ca1,	// (0x0005587b) popup_midp_note_alarm_window_t11

0x5cb3,	// (0x0005588d) scroll_pane_cp17_ParamLimits

0x5cb3,	// (0x0005588d) scroll_pane_cp17

0x15f4,	// (0x000511ce) volume_small_pane_cp_g1

0x1b4c,	// (0x00051726) volume_small_pane_cp_g2

0x1b55,	// (0x0005172f) volume_small_pane_cp_g3

0x1b5e,	// (0x00051738) volume_small_pane_cp_g4

0x1b67,	// (0x00051741) volume_small_pane_cp_g5

0x1b70,	// (0x0005174a) volume_small_pane_cp_g6

0x1b79,	// (0x00051753) volume_small_pane_cp_g7

0x1b82,	// (0x0005175c) volume_small_pane_cp_g8

0x1b8b,	// (0x00051765) volume_small_pane_cp_g9

0x1b94,	// (0x0005176e) volume_small_pane_cp_g10

0x492f,	// (0x00054509) midp_ticker_pane_g1_ParamLimits

0x493b,	// (0x00054515) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0005f337) midp_ticker_pane_g_ParamLimits

0x4947,	// (0x00054521) midp_ticker_pane_t1_ParamLimits

0xd34a,	// (0x0005cf24) aid_fill_nsta_2

0x54e4,	// (0x000550be) list_form2_midp_pane

0x660d,	// (0x000561e7) midp_editing_number_pane_ParamLimits

0x661c,	// (0x000561f6) midp_ticker_pane_ParamLimits

0x722d,	// (0x00056e07) form2_midp_field_pane

0x7251,	// (0x00056e2b) scroll_pane_cp51

0x7271,	// (0x00056e4b) form2_midp_button_pane_ParamLimits

0x7271,	// (0x00056e4b) form2_midp_button_pane

0x7283,	// (0x00056e5d) form2_midp_content_pane_ParamLimits

0x7283,	// (0x00056e5d) form2_midp_content_pane

0x729d,	// (0x00056e77) form2_midp_field_choice_group_pane

0x72a5,	// (0x00056e7f) form2_midp_field_pane_g1

0x72ad,	// (0x00056e87) form2_midp_field_pane_g2

0x72b5,	// (0x00056e8f) form2_midp_field_pane_g3

0x72bd,	// (0x00056e97) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0005f6b5) form2_midp_field_pane_g

0x72c5,	// (0x00056e9f) form2_midp_gauge_slider_pane

0x72cd,	// (0x00056ea7) form2_midp_gauge_wait_pane

0x72d5,	// (0x00056eaf) form2_midp_image_pane_ParamLimits

0x72d5,	// (0x00056eaf) form2_midp_image_pane

0x72f0,	// (0x00056eca) form2_midp_label_pane_ParamLimits

0x72f0,	// (0x00056eca) form2_midp_label_pane

0xdddc,	// (0x0005d9b6) form2_midp_label_pane_cp_ParamLimits

0xdddc,	// (0x0005d9b6) form2_midp_label_pane_cp

0x732a,	// (0x00056f04) form2_midp_string_pane_ParamLimits

0x732a,	// (0x00056f04) form2_midp_string_pane

0xc4e2,	// (0x0005c0bc) form2_midp_text_pane_ParamLimits

0xc4e2,	// (0x0005c0bc) form2_midp_text_pane

0x733c,	// (0x00056f16) form2_midp_time_pane

0x734c,	// (0x00056f26) input_focus_pane_cp51_ParamLimits

0x734c,	// (0x00056f26) input_focus_pane_cp51

0x7364,	// (0x00056f3e) form2_midp_label_pane_t1_ParamLimits

0x7364,	// (0x00056f3e) form2_midp_label_pane_t1

0xc501,	// (0x0005c0db) form2_mdip_text_pane_t1_ParamLimits

0xc501,	// (0x0005c0db) form2_mdip_text_pane_t1

0x33ad,	// (0x00052f87) form2_midp_time_pane_t1

0x73ad,	// (0x00056f87) form2_midp_gauge_slider_pane_t1

0xddfb,	// (0x0005d9d5) form2_midp_gauge_slider_pane_t2

0xde0d,	// (0x0005d9e7) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0005f6be) form2_midp_gauge_slider_pane_t

0x73e3,	// (0x00056fbd) form2_midp_slider_pane

0x73ef,	// (0x00056fc9) form2_midp_gauge_wait_pane_t1

0x73fd,	// (0x00056fd7) form2_midp_wait_pane_ParamLimits

0x73fd,	// (0x00056fd7) form2_midp_wait_pane

0xde1f,	// (0x0005d9f9) list_single_2graphic_pane_cp4_ParamLimits

0xde1f,	// (0x0005d9f9) list_single_2graphic_pane_cp4

0xd766,	// (0x0005d340) list_single_midp_graphic_pane_cp_ParamLimits

0xd766,	// (0x0005d340) list_single_midp_graphic_pane_cp

0x2ba2,	// (0x0005277c) list_highlight_pane_cp20

0x7457,	// (0x00057031) list_single_2graphic_pane_g1_cp4

0x745f,	// (0x00057039) list_single_2graphic_pane_g2_cp4

0x7467,	// (0x00057041) list_single_2graphic_pane_t1_cp4

0x2c82,	// (0x0005285c) list_highlight_pane_cp21

0x7476,	// (0x00057050) list_single_midp_graphic_pane_g4_cp

0x7485,	// (0x0005705f) list_single_midp_graphic_pane_t1_cp

0xde33,	// (0x0005da0d) form2_mdip_string_pane_t1_ParamLimits

0xde33,	// (0x0005da0d) form2_mdip_string_pane_t1

0x2ba2,	// (0x0005277c) bg_wml_button_pane_cp2

0x2b98,	// (0x00052772) form2_midp_image_pane_g1

0x30c3,	// (0x00052c9d) list_double_large_graphic_pane_g5_ParamLimits

0x30c3,	// (0x00052c9d) list_double_large_graphic_pane_g5

0x4b9c,	// (0x00054776) midp_form_pane_ParamLimits

0x2c82,	// (0x0005285c) main_apps_wheel_pane_ParamLimits

0xc16c,	// (0x0005bd46) popup_preview_window_ParamLimits

0xc16c,	// (0x0005bd46) popup_preview_window

0x135f,	// (0x00050f39) popup_touch_info_window_ParamLimits

0x135f,	// (0x00050f39) popup_touch_info_window

0x137d,	// (0x00050f57) popup_touch_menu_window_ParamLimits

0x137d,	// (0x00050f57) popup_touch_menu_window

0x2b8e,	// (0x00052768) bg_popup_sub_pane_cp6

0x7593,	// (0x0005716d) list_touch_menu_pane

0x759b,	// (0x00057175) list_single_touch_menu_pane_ParamLimits

0x759b,	// (0x00057175) list_single_touch_menu_pane

0x75b1,	// (0x0005718b) list_single_touch_menu_pane_t1

0x2c82,	// (0x0005285c) bg_popup_sub_pane_cp7_ParamLimits

0x2c82,	// (0x0005285c) bg_popup_sub_pane_cp7

0x75bf,	// (0x00057199) heading_sub_pane

0x75c7,	// (0x000571a1) list_touch_info_pane_ParamLimits

0x75c7,	// (0x000571a1) list_touch_info_pane

0x75d6,	// (0x000571b0) list_single_touch_info_pane_ParamLimits

0x75d6,	// (0x000571b0) list_single_touch_info_pane

0x75e8,	// (0x000571c2) list_single_touch_info_pane_t1

0x75f6,	// (0x000571d0) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0005f6cc) list_single_touch_info_pane_t

0x485e,	// (0x00054438) bg_popup_heading_pane_cp

0x7604,	// (0x000571de) heading_sub_pane_t1

0x5126,	// (0x00054d00) bg_popup_preview_window_pane_cp_ParamLimits

0x5126,	// (0x00054d00) bg_popup_preview_window_pane_cp

0x75bf,	// (0x00057199) heading_preview_pane

0x75c7,	// (0x000571a1) list_preview_pane_ParamLimits

0x75c7,	// (0x000571a1) list_preview_pane

0x7612,	// (0x000571ec) popup_preview_window_g1

0x75d6,	// (0x000571b0) list_single_preview_pane_ParamLimits

0x75d6,	// (0x000571b0) list_single_preview_pane

0x761a,	// (0x000571f4) list_single_preview_pane_g1

0x7622,	// (0x000571fc) list_single_preview_pane_t1

0x75e8,	// (0x000571c2) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0005f6d1) list_single_preview_pane_t

0x7630,	// (0x0005720a) bg_popup_heading_pane_cp2_ParamLimits

0x7630,	// (0x0005720a) bg_popup_heading_pane_cp2

0x7646,	// (0x00057220) heading_preview_pane_g1

0x764e,	// (0x00057228) heading_preview_pane_t1_ParamLimits

0x764e,	// (0x00057228) heading_preview_pane_t1

0x2d6e,	// (0x00052948) soft_indicator_pane_t1_ParamLimits

0x3b3b,	// (0x00053715) scroll_pane_ParamLimits

0x4054,	// (0x00053c2e) scroll_sc2_left_pane

0x405d,	// (0x00053c37) scroll_sc2_right_pane

0x407c,	// (0x00053c56) scroll_bg_pane_g1_ParamLimits

0x4091,	// (0x00053c6b) scroll_bg_pane_g2_ParamLimits

0x40a9,	// (0x00053c83) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0005f2c2) scroll_bg_pane_g_ParamLimits

0x407c,	// (0x00053c56) scroll_handle_pane_g1_ParamLimits

0x40cb,	// (0x00053ca5) scroll_handle_pane_g2_ParamLimits

0x40a9,	// (0x00053c83) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0005f2c9) scroll_handle_pane_g_ParamLimits

0x0e25,	// (0x000509ff) popup_choice_list_window_ParamLimits

0x0e25,	// (0x000509ff) popup_choice_list_window

0x4ffc,	// (0x00054bd6) choice_list_pane

0x507e,	// (0x00054c58) cell_toolbar_pane_t1

0x50a6,	// (0x00054c80) toolbar_button_pane_ParamLimits

0x616d,	// (0x00055d47) ai_gene_pane_1_t2_ParamLimits

0x616d,	// (0x00055d47) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0005f4ec) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0005f4ec) ai_gene_pane_1_t

0x766b,	// (0x00057245) scroll_sc2_left_pane_g1

0x766b,	// (0x00057245) scroll_sc2_right_pane_g1

0x4b9c,	// (0x00054776) bg_popup_sub_pane_cp10

0x7675,	// (0x0005724f) list_choice_list_pane

0x768e,	// (0x00057268) list_single_choice_list_pane_ParamLimits

0x768e,	// (0x00057268) list_single_choice_list_pane

0x76a1,	// (0x0005727b) list_single_choice_list_pane_g1

0x3d5c,	// (0x00053936) list_single_choice_list_pane_t1_ParamLimits

0x3d5c,	// (0x00053936) list_single_choice_list_pane_t1

0x76a9,	// (0x00057283) choice_list_pane_g1

0x76b1,	// (0x0005728b) choice_list_pane_t1

0x2b8e,	// (0x00052768) input_focus_pane_cp11

0x3f33,	// (0x00053b0d) title_pane_stacon_g2_ParamLimits

0x3f33,	// (0x00053b0d) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0005f2a8) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0005f2a8) title_pane_stacon_g

0x485e,	// (0x00054438) cursor_press_pane

0xbe19,	// (0x0005b9f3) popup_fep_hwr_window_ParamLimits

0xbe19,	// (0x0005b9f3) popup_fep_hwr_window

0x0f4b,	// (0x00050b25) popup_fep_vkb_window_ParamLimits

0x0f4b,	// (0x00050b25) popup_fep_vkb_window

0x76bf,	// (0x00057299) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0005f6fa) fep_vkb_side_pane_g_ParamLimits

0x1bd6,	// (0x000517b0) fep_hwr_candidate_pane_ParamLimits

0x1bd6,	// (0x000517b0) fep_hwr_candidate_pane

0x1c00,	// (0x000517da) fep_hwr_side_pane_ParamLimits

0x1c00,	// (0x000517da) fep_hwr_side_pane

0x1c20,	// (0x000517fa) fep_hwr_top_pane_ParamLimits

0x1c20,	// (0x000517fa) fep_hwr_top_pane

0x1c38,	// (0x00051812) fep_hwr_write_pane_ParamLimits

0x1c38,	// (0x00051812) fep_hwr_write_pane

0xfb20,	// (0x0005f6fa) fep_vkb_side_pane_g

0x76c7,	// (0x000572a1) fep_hwr_top_pane_g1

0x76d9,	// (0x000572b3) fep_hwr_top_pane_g2

0x1c72,	// (0x0005184c) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0005f6d6) fep_hwr_top_pane_g

0x1c87,	// (0x00051861) fep_hwr_top_text_pane

0x424b,	// (0x00053e25) fep_hwr_top_text_pane_g1

0x770f,	// (0x000572e9) fep_hwr_top_text_pane_t1

0x1d7d,	// (0x00051957) fep_hwr_candidate_pane_g1

0x7962,	// (0x0005753c) fep_vkb_keypad_pane_g3_ParamLimits

0x7962,	// (0x0005753c) fep_vkb_keypad_pane_g3

0x798a,	// (0x00057564) fep_vkb_keypad_pane_g4_ParamLimits

0x798a,	// (0x00057564) fep_vkb_keypad_pane_g4

0x79f9,	// (0x000575d3) fep_vkb_bottom_pane_g2_ParamLimits

0x79f9,	// (0x000575d3) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0005f701) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0005f701) fep_vkb_bottom_pane_g

0x766b,	// (0x00057245) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0005f70b) cell_vkb_side_pane_g

0x7a84,	// (0x0005765e) cell_vkb_side_pane_t1

0x7a92,	// (0x0005766c) cell_vkb_side_pane_t1_copy1

0x766b,	// (0x00057245) bg_fep_vkb_candidate_pane_g2

0x7bbe,	// (0x00057798) cell_vkb_candidate_pane_ParamLimits

0x771d,	// (0x000572f7) aid_size_cell_vkb_ParamLimits

0x771d,	// (0x000572f7) aid_size_cell_vkb

0x7bbe,	// (0x00057798) cell_vkb_candidate_pane

0x1da4,	// (0x0005197e) bg_popup_fep_shadow_pane_g1

0xdeb7,	// (0x0005da91) fep_vkb_bottom_pane_ParamLimits

0xdeb7,	// (0x0005da91) fep_vkb_bottom_pane

0x77e1,	// (0x000573bb) fep_vkb_candidate_pane_ParamLimits

0x77e1,	// (0x000573bb) fep_vkb_candidate_pane

0xdedc,	// (0x0005dab6) fep_vkb_keypad_pane_ParamLimits

0xdedc,	// (0x0005dab6) fep_vkb_keypad_pane

0xdf18,	// (0x0005daf2) fep_vkb_side_pane_ParamLimits

0xdf18,	// (0x0005daf2) fep_vkb_side_pane

0xdf54,	// (0x0005db2e) fep_vkb_top_pane_ParamLimits

0xdf54,	// (0x0005db2e) fep_vkb_top_pane

0x78bb,	// (0x00057495) fep_vkb_top_pane_g1_ParamLimits

0x78bb,	// (0x00057495) fep_vkb_top_pane_g1

0x78ca,	// (0x000574a4) fep_vkb_top_pane_g2_ParamLimits

0x78ca,	// (0x000574a4) fep_vkb_top_pane_g2

0x78d9,	// (0x000574b3) fep_vkb_top_pane_g3_ParamLimits

0x78d9,	// (0x000574b3) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0005f6f1) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0005f6f1) fep_vkb_top_pane_g

0x78f7,	// (0x000574d1) fep_vkb_top_text_pane_ParamLimits

0x78f7,	// (0x000574d1) fep_vkb_top_text_pane

0xdf90,	// (0x0005db6a) fep_vkb_side_pane_g1_ParamLimits

0xdf90,	// (0x0005db6a) fep_vkb_side_pane_g1

0x7951,	// (0x0005752b) grid_vkb_side_pane_ParamLimits

0x7951,	// (0x0005752b) grid_vkb_side_pane

0x1dac,	// (0x00051986) bg_popup_fep_shadow_pane_g2

0x1db5,	// (0x0005198f) bg_popup_fep_shadow_pane_g3

0x1dbd,	// (0x00051997) bg_popup_fep_shadow_pane_g4

0x1dc6,	// (0x000519a0) bg_popup_fep_shadow_pane_g5

0x1dd0,	// (0x000519aa) bg_popup_fep_shadow_pane_g6

0x1dd8,	// (0x000519b2) bg_popup_fep_shadow_pane_g7

0x3c3b,	// (0x00053815) bg_popup_fep_shadow_pane_g8

0x79a8,	// (0x00057582) grid_vkb_keypad_number_pane_ParamLimits

0x79a8,	// (0x00057582) grid_vkb_keypad_number_pane

0x79b8,	// (0x00057592) grid_vkb_keypad_pane_ParamLimits

0x79b8,	// (0x00057592) grid_vkb_keypad_pane

0x79de,	// (0x000575b8) fep_vkb_bottom_pane_g1_ParamLimits

0x79de,	// (0x000575b8) fep_vkb_bottom_pane_g1

0x7a07,	// (0x000575e1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7a07,	// (0x000575e1) grid_vkb_keypad_bottom_left_pane

0x7a1c,	// (0x000575f6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7a1c,	// (0x000575f6) grid_vkb_keypad_bottom_right_pane

0x7a31,	// (0x0005760b) fep_vkb_top_text_pane_g1

0xdfd7,	// (0x0005dbb1) fep_vkb_top_text_pane_t1

0xdfe9,	// (0x0005dbc3) cell_vkb_side_pane_ParamLimits

0xdfe9,	// (0x0005dbc3) cell_vkb_side_pane

0x766b,	// (0x00057245) cell_vkb_side_pane_g1

0x7aa0,	// (0x0005767a) cell_vkb_keypad_pane_ParamLimits

0x7aa0,	// (0x0005767a) cell_vkb_keypad_pane

0x7b15,	// (0x000576ef) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0005f71e) bg_popup_fep_shadow_pane_g

0x1dea,	// (0x000519c4) cell_hwr_side_pane_g1

0x1dea,	// (0x000519c4) cell_hwr_side_pane_g2

0x7b1f,	// (0x000576f9) cell_vkb_keypad_pane_t1

0xdfff,	// (0x0005dbd9) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdfff,	// (0x0005dbd9) cell_vkb_keypad_bottom_left_pane

0xe014,	// (0x0005dbee) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe014,	// (0x0005dbee) cell_vkb_keypad_bottom_right_pane

0x766b,	// (0x00057245) cell_vkb_keypad_bottom_left_pane_g1

0x766b,	// (0x00057245) cell_vkb_keypad_bottom_right_pane_g1

0x7b83,	// (0x0005775d) cell_vkb_keypad_number_pane_ParamLimits

0x7b83,	// (0x0005775d) cell_vkb_keypad_number_pane

0x7ba2,	// (0x0005777c) cell_vkb_keypad_number_pane_g1

0x7bac,	// (0x00057786) cell_vkb_keypad_number_pane_g2

0x7bb5,	// (0x0005778f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0005f710) cell_vkb_keypad_number_pane_g

0x7b1f,	// (0x000576f9) cell_vkb_keypad_number_pane_t1

0x7bd9,	// (0x000577b3) fep_vkb_candidate_pane_g1

0x0001,

0xfb57,	// (0x0005f731) cell_hwr_side_pane_g

0x7bf2,	// (0x000577cc) cell_hwr_side_pane_t1

0x1df4,	// (0x000519ce) cell_hwr_side_pane_t1_copy1

0x1e02,	// (0x000519dc) cell_hwr_candidate_pane_g1

0x1e31,	// (0x00051a0b) cell_hwr_candidate_pane_t1

0x766b,	// (0x00057245) cell_vkb_candidate_pane_g2

0x7c36,	// (0x00057810) cell_vkb_candidate_pane_t1

0x1b9d,	// (0x00051777) bg_popup_fep_shadow_pane_ParamLimits

0x1b9d,	// (0x00051777) bg_popup_fep_shadow_pane

0x1c52,	// (0x0005182c) bg_fep_hwr_top_pane_g4

0x76eb,	// (0x000572c5) bg_hwr_side_pane_g1_ParamLimits

0x76eb,	// (0x000572c5) bg_hwr_side_pane_g1

0xc533,	// (0x0005c10d) cell_hwr_side_pane_ParamLimits

0xc533,	// (0x0005c10d) cell_hwr_side_pane

0x1cfe,	// (0x000518d8) fep_hwr_write_pane_g1_ParamLimits

0x1cfe,	// (0x000518d8) fep_hwr_write_pane_g1

0x1d0b,	// (0x000518e5) fep_hwr_write_pane_g2_ParamLimits

0x1d0b,	// (0x000518e5) fep_hwr_write_pane_g2

0x1d18,	// (0x000518f2) fep_hwr_write_pane_g3_ParamLimits

0x1d18,	// (0x000518f2) fep_hwr_write_pane_g3

0xc553,	// (0x0005c12d) fep_hwr_write_pane_g4_ParamLimits

0xc553,	// (0x0005c12d) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0005f6dd) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0005f6dd) fep_hwr_write_pane_g

0x1c52,	// (0x0005182c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1c52,	// (0x0005182c) bg_fep_hwr_candidate_pane_g2

0x1d3b,	// (0x00051915) cell_hwr_candidate_pane_ParamLimits

0x1d3b,	// (0x00051915) cell_hwr_candidate_pane

0x1d7d,	// (0x00051957) fep_hwr_candidate_pane_g1_ParamLimits

0x774b,	// (0x00057325) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x774b,	// (0x00057325) bg_popup_fep_shadow_pane_cp2

0x78e9,	// (0x000574c3) fep_vkb_top_pane_g4_ParamLimits

0x78e9,	// (0x000574c3) fep_vkb_top_pane_g4

0x792f,	// (0x00057509) fep_vkb_side_pane_g2_ParamLimits

0x792f,	// (0x00057509) fep_vkb_side_pane_g2

0xb901,	// (0x0005b4db) list_setting_pane_t4_ParamLimits

0xb901,	// (0x0005b4db) list_setting_pane_t4

0xb99b,	// (0x0005b575) list_setting_number_pane_t5_ParamLimits

0xb99b,	// (0x0005b575) list_setting_number_pane_t5

0x4282,	// (0x00053e5c) list_double_heading_pane_cp2_ParamLimits

0x4282,	// (0x00053e5c) list_double_heading_pane_cp2

0x3b6f,	// (0x00053749) list_double_heading_pane_g1_cp2_ParamLimits

0x3b6f,	// (0x00053749) list_double_heading_pane_g1_cp2

0x3be2,	// (0x000537bc) list_double_heading_pane_g2_cp2_ParamLimits

0x3be2,	// (0x000537bc) list_double_heading_pane_g2_cp2

0x7c44,	// (0x0005781e) list_double_heading_pane_t1_cp2_ParamLimits

0x7c44,	// (0x0005781e) list_double_heading_pane_t1_cp2

0x7c5a,	// (0x00057834) list_double_heading_pane_t2_cp2_ParamLimits

0x7c5a,	// (0x00057834) list_double_heading_pane_t2_cp2

0x2b76,	// (0x00052750) aid_value_unit2

0xf544,	// (0x0005f11e) popup_preview_fixed_window

0x2f0b,	// (0x00052ae5) bg_popup_preview_window_pane_cp02

0x7c6c,	// (0x00057846) list_preview_fixed_pane

0x7cb2,	// (0x0005788c) list_empty_pane_fp_ParamLimits

0x7cb2,	// (0x0005788c) list_empty_pane_fp

0x7cb2,	// (0x0005788c) list_single_cale_day_pane_fp_ParamLimits

0x7cb2,	// (0x0005788c) list_single_cale_day_pane_fp

0x7cb2,	// (0x0005788c) list_single_graphic_heading_pane_fp_ParamLimits

0x7cb2,	// (0x0005788c) list_single_graphic_heading_pane_fp

0x7cb2,	// (0x0005788c) list_single_graphic_pane_fp_ParamLimits

0x7cb2,	// (0x0005788c) list_single_graphic_pane_fp

0x7cb2,	// (0x0005788c) list_single_heading_pane_fp_ParamLimits

0x7cb2,	// (0x0005788c) list_single_heading_pane_fp

0x7cb2,	// (0x0005788c) list_single_pane_fp_ParamLimits

0x7cb2,	// (0x0005788c) list_single_pane_fp

0x7cc7,	// (0x000578a1) list_single_pane_fp_g1_ParamLimits

0x7cc7,	// (0x000578a1) list_single_pane_fp_g1

0x3b6f,	// (0x00053749) list_single_pane_fp_g2_ParamLimits

0x3b6f,	// (0x00053749) list_single_pane_fp_g2

0x3be2,	// (0x000537bc) list_single_pane_fp_g3_ParamLimits

0x3be2,	// (0x000537bc) list_single_pane_fp_g3

0x7cd3,	// (0x000578ad) list_single_pane_fp_g4_ParamLimits

0x7cd3,	// (0x000578ad) list_single_pane_fp_g4

0x0003,

0xfb6a,	// (0x0005f744) list_single_pane_fp_g_ParamLimits

0xfb6a,	// (0x0005f744) list_single_pane_fp_g

0x33c0,	// (0x00052f9a) list_single_pane_fp_t1_ParamLimits

0x33c0,	// (0x00052f9a) list_single_pane_fp_t1

0x33d7,	// (0x00052fb1) list_single_graphic_pane_fp_g1_ParamLimits

0x33d7,	// (0x00052fb1) list_single_graphic_pane_fp_g1

0x7cc7,	// (0x000578a1) list_single_graphic_pane_fp_g2_ParamLimits

0x7cc7,	// (0x000578a1) list_single_graphic_pane_fp_g2

0x3b6f,	// (0x00053749) list_single_graphic_pane_fp_g3_ParamLimits

0x3b6f,	// (0x00053749) list_single_graphic_pane_fp_g3

0x3be2,	// (0x000537bc) list_single_graphic_pane_fp_g4_ParamLimits

0x3be2,	// (0x000537bc) list_single_graphic_pane_fp_g4

0x7cd3,	// (0x000578ad) list_single_graphic_pane_fp_g5_ParamLimits

0x7cd3,	// (0x000578ad) list_single_graphic_pane_fp_g5

0x0004,

0xfb73,	// (0x0005f74d) list_single_graphic_pane_fp_g_ParamLimits

0xfb73,	// (0x0005f74d) list_single_graphic_pane_fp_g

0x33e3,	// (0x00052fbd) list_single_graphic_pane_fp_t1_ParamLimits

0x33e3,	// (0x00052fbd) list_single_graphic_pane_fp_t1

0x33d7,	// (0x00052fb1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x33d7,	// (0x00052fb1) list_single_graphic_heading_pane_fp_g1

0x7cc7,	// (0x000578a1) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7cc7,	// (0x000578a1) list_single_graphic_heading_pane_fp_g2

0x3b6f,	// (0x00053749) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3b6f,	// (0x00053749) list_single_graphic_heading_pane_fp_g3

0x3be2,	// (0x000537bc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3be2,	// (0x000537bc) list_single_graphic_heading_pane_fp_g4

0x7cd3,	// (0x000578ad) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7cd3,	// (0x000578ad) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb73,	// (0x0005f74d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb73,	// (0x0005f74d) list_single_graphic_heading_pane_fp_g

0x33f9,	// (0x00052fd3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x33f9,	// (0x00052fd3) list_single_graphic_heading_pane_fp_t1

0x340f,	// (0x00052fe9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x340f,	// (0x00052fe9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x0005f758) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x0005f758) list_single_graphic_heading_pane_fp_t

0x3421,	// (0x00052ffb) list_single_cale_day_pane_fp_g1_ParamLimits

0x3421,	// (0x00052ffb) list_single_cale_day_pane_fp_g1

0x7cdf,	// (0x000578b9) list_single_cale_day_pane_fp_g2_ParamLimits

0x7cdf,	// (0x000578b9) list_single_cale_day_pane_fp_g2

0x3459,	// (0x00053033) list_single_cale_day_pane_fp_g3_ParamLimits

0x3459,	// (0x00053033) list_single_cale_day_pane_fp_g3

0x3481,	// (0x0005305b) list_single_cale_day_pane_fp_g4_ParamLimits

0x3481,	// (0x0005305b) list_single_cale_day_pane_fp_g4

0x34a5,	// (0x0005307f) list_single_cale_day_pane_fp_g5_ParamLimits

0x34a5,	// (0x0005307f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb83,	// (0x0005f75d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb83,	// (0x0005f75d) list_single_cale_day_pane_fp_g

0x34c9,	// (0x000530a3) list_single_cale_day_pane_fp_t1_ParamLimits

0x34c9,	// (0x000530a3) list_single_cale_day_pane_fp_t1

0x34ef,	// (0x000530c9) list_single_cale_day_pane_fp_t2_ParamLimits

0x34ef,	// (0x000530c9) list_single_cale_day_pane_fp_t2

0x3508,	// (0x000530e2) list_single_cale_day_pane_fp_t3_ParamLimits

0x3508,	// (0x000530e2) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8e,	// (0x0005f768) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8e,	// (0x0005f768) list_single_cale_day_pane_fp_t

0x7cc7,	// (0x000578a1) list_empty_pane_fp_g1_ParamLimits

0x7cc7,	// (0x000578a1) list_empty_pane_fp_g1

0x3521,	// (0x000530fb) list_empty_pane_fp_t1

0x352f,	// (0x00053109) list_empty_pane_fp_t2

0x0001,

0xfb95,	// (0x0005f76f) list_empty_pane_fp_t

0x7cc7,	// (0x000578a1) list_single_heading_pane_fp_g1_ParamLimits

0x7cc7,	// (0x000578a1) list_single_heading_pane_fp_g1

0x3b6f,	// (0x00053749) list_single_heading_pane_fp_g2_ParamLimits

0x3b6f,	// (0x00053749) list_single_heading_pane_fp_g2

0x3be2,	// (0x000537bc) list_single_heading_pane_fp_g3_ParamLimits

0x3be2,	// (0x000537bc) list_single_heading_pane_fp_g3

0x0002,

0xfb9a,	// (0x0005f774) list_single_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0005f774) list_single_heading_pane_fp_g

0x353d,	// (0x00053117) list_single_heading_pane_fp_t1_ParamLimits

0x353d,	// (0x00053117) list_single_heading_pane_fp_t1

0x354f,	// (0x00053129) list_single_heading_pane_fp_t2_ParamLimits

0x354f,	// (0x00053129) list_single_heading_pane_fp_t2

0x0001,

0xfba1,	// (0x0005f77b) list_single_heading_pane_fp_t_ParamLimits

0xfba1,	// (0x0005f77b) list_single_heading_pane_fp_t

0x3dca,	// (0x000539a4) aid_size_cell_fast

0x2e7b,	// (0x00052a55) soft_indicator_pane_cp1_t1

0x3e07,	// (0x000539e1) cell_app_pane_cp2_ParamLimits

0x3e07,	// (0x000539e1) cell_app_pane_cp2

0x1bbf,	// (0x00051799) fep_hwr_candidate_drop_down_list_pane

0x1d97,	// (0x00051971) fep_hwr_candidate_pane_g3_ParamLimits

0x1d97,	// (0x00051971) fep_hwr_candidate_pane_g3

0xe407,	// (0x0005dfe1) fep_hwr_candidate_pane_g4_ParamLimits

0xe407,	// (0x0005dfe1) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0005f6ea) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0005f6ea) fep_hwr_candidate_pane_g

0x77d0,	// (0x000573aa) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x77d0,	// (0x000573aa) fep_vkb_candidate_drop_down_list_pane

0x7be1,	// (0x000577bb) fep_vkb_candidate_pane_g3

0x7be9,	// (0x000577c3) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0005f717) fep_vkb_candidate_pane_g

0x1e02,	// (0x000519dc) cell_hwr_candidate_pane_g1_ParamLimits

0x1e10,	// (0x000519ea) cell_hwr_candidate_pane_g3_ParamLimits

0x1e10,	// (0x000519ea) cell_hwr_candidate_pane_g3

0x94be,	// (0x00059098) cell_hwr_candidate_pane_g4_ParamLimits

0x94be,	// (0x00059098) cell_hwr_candidate_pane_g4

0x0002,

0xfb5c,	// (0x0005f736) cell_hwr_candidate_pane_g_ParamLimits

0xfb5c,	// (0x0005f736) cell_hwr_candidate_pane_g

0x7c00,	// (0x000577da) cell_vkb_candidate_pane_g3_ParamLimits

0x7c00,	// (0x000577da) cell_vkb_candidate_pane_g3

0x7c1b,	// (0x000577f5) cell_vkb_candidate_pane_g4_ParamLimits

0x7c1b,	// (0x000577f5) cell_vkb_candidate_pane_g4

0x7ceb,	// (0x000578c5) cell_app_pane_cp2_g1_ParamLimits

0x7ceb,	// (0x000578c5) cell_app_pane_cp2_g1

0x7d09,	// (0x000578e3) cell_app_pane_cp2_g2_ParamLimits

0x7d09,	// (0x000578e3) cell_app_pane_cp2_g2

0x0001,

0xfba6,	// (0x0005f780) cell_app_pane_cp2_g_ParamLimits

0xfba6,	// (0x0005f780) cell_app_pane_cp2_g

0x7d57,	// (0x00057931) cell_app_pane_cp2_t1_ParamLimits

0x7d57,	// (0x00057931) cell_app_pane_cp2_t1

0x3bd4,	// (0x000537ae) grid_highlight_pane_cp1_ParamLimits

0x3bd4,	// (0x000537ae) grid_highlight_pane_cp1

0x1e4f,	// (0x00051a29) cell_hwr_candidate_pane_cp1_ParamLimits

0x1e4f,	// (0x00051a29) cell_hwr_candidate_pane_cp1

0x1e02,	// (0x000519dc) fep_hwr_candidate_drop_down_list_pane_g1

0x1e6e,	// (0x00051a48) fep_hwr_candidate_drop_down_list_pane_g2

0x1e7b,	// (0x00051a55) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x0005f785) fep_hwr_candidate_drop_down_list_pane_g

0x1e88,	// (0x00051a62) fep_hwr_candidate_drop_down_list_scroll_pane

0x1e91,	// (0x00051a6b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1e91,	// (0x00051a6b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1e9e,	// (0x00051a78) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1e9e,	// (0x00051a78) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1eab,	// (0x00051a85) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1eab,	// (0x00051a85) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1eb8,	// (0x00051a92) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1eb8,	// (0x00051a92) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1ed3,	// (0x00051aad) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1ed3,	// (0x00051aad) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1eee,	// (0x00051ac8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1eee,	// (0x00051ac8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1f09,	// (0x00051ae3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1f09,	// (0x00051ae3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1f24,	// (0x00051afe) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1f24,	// (0x00051afe) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0005f78c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0005f78c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7d69,	// (0x00057943) cell_vkb_candidate_pane_cp1_ParamLimits

0x7d69,	// (0x00057943) cell_vkb_candidate_pane_cp1

0x78e9,	// (0x000574c3) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x78e9,	// (0x000574c3) fep_vkb_candidate_drop_down_list_pane_g1

0x7d89,	// (0x00057963) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7d89,	// (0x00057963) fep_vkb_candidate_drop_down_list_pane_g2

0x7d96,	// (0x00057970) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7d96,	// (0x00057970) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0005f79d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc3,	// (0x0005f79d) fep_vkb_candidate_drop_down_list_pane_g

0x7da3,	// (0x0005797d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7da3,	// (0x0005797d) fep_vkb_candidate_drop_down_list_scroll_pane

0x7db0,	// (0x0005798a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7db0,	// (0x0005798a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7dbd,	// (0x00057997) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7dbd,	// (0x00057997) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7dc9,	// (0x000579a3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7dc9,	// (0x000579a3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7d15,	// (0x000578ef) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7d15,	// (0x000578ef) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7d36,	// (0x00057910) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7d36,	// (0x00057910) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7dd5,	// (0x000579af) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7dd5,	// (0x000579af) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7df6,	// (0x000579d0) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7df6,	// (0x000579d0) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7e17,	// (0x000579f1) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7e17,	// (0x000579f1) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0005f7a4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0005f7a4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb4fd,	// (0x0005b0d7) title_pane_g1_ParamLimits

0xb510,	// (0x0005b0ea) title_pane_g2_ParamLimits

0xf54e,	// (0x0005f128) title_pane_g_ParamLimits

0x423b,	// (0x00053e15) aid_call2_pane

0x4243,	// (0x00053e1d) aid_call_pane

0x424b,	// (0x00053e25) popup_clock_analogue_window_g1

0x424b,	// (0x00053e25) popup_clock_analogue_window_g2

0x0952,	// (0x0005052c) popup_clock_analogue_window_g3

0x095b,	// (0x00050535) popup_clock_analogue_window_g4

0x2b98,	// (0x00052772) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0005f2d7) popup_clock_analogue_window_g

0x0963,	// (0x0005053d) popup_clock_analogue_window_t1

0x0971,	// (0x0005054b) clock_digital_number_pane_ParamLimits

0x0971,	// (0x0005054b) clock_digital_number_pane

0x097d,	// (0x00050557) clock_digital_number_pane_cp02_ParamLimits

0x097d,	// (0x00050557) clock_digital_number_pane_cp02

0x0989,	// (0x00050563) clock_digital_number_pane_cp03_ParamLimits

0x0989,	// (0x00050563) clock_digital_number_pane_cp03

0x0995,	// (0x0005056f) clock_digital_number_pane_cp04_ParamLimits

0x0995,	// (0x0005056f) clock_digital_number_pane_cp04

0x09a1,	// (0x0005057b) clock_digital_separator_pane_ParamLimits

0x09a1,	// (0x0005057b) clock_digital_separator_pane

0x09ad,	// (0x00050587) popup_clock_digital_window_t1_ParamLimits

0x09ad,	// (0x00050587) popup_clock_digital_window_t1

0x2b98,	// (0x00052772) clock_digital_number_pane_g1

0x2b98,	// (0x00052772) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0005f2e2) clock_digital_number_pane_g

0x2b98,	// (0x00052772) clock_digital_separator_pane_g1

0x2b98,	// (0x00052772) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0005f2e2) clock_digital_separator_pane_g

0xd326,	// (0x0005cf00) aid_fill_nsta_ParamLimits

0xd45c,	// (0x0005d036) indicator_nsta_pane_ParamLimits

0x4e89,	// (0x00054a63) popup_clock_analogue_window

0x4e89,	// (0x00054a63) popup_clock_digital_window

0x3d8b,	// (0x00053965) grid_indicator_nsta_pane_ParamLimits

0x7068,	// (0x00056c42) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0005f66a) clock_nsta_pane_t

0x0916,	// (0x000504f0) aid_size_max_handle

0xbb4a,	// (0x0005b724) aid_size_min_handle

0x485e,	// (0x00054438) editor_scroll_pane

0x7e32,	// (0x00057a0c) ex_editor_pane

0x3d38,	// (0x00053912) scroll_pane_cp13

0x3b67,	// (0x00053741) scroll_pane_cp14

0x427a,	// (0x00053e54) scroll_pane_cp36

0xd0e5,	// (0x0005ccbf) list_single_graphic_hl_pane_cp2_ParamLimits

0xd0e5,	// (0x0005ccbf) list_single_graphic_hl_pane_cp2

0xd7b6,	// (0x0005d390) list_single_graphic_hl_pane_ParamLimits

0xd7b6,	// (0x0005d390) list_single_graphic_hl_pane

0x3565,	// (0x0005313f) aid_size_min_hl_cp1

0x7e3a,	// (0x00057a14) list_highlight_pane_cp34_ParamLimits

0x7e3a,	// (0x00057a14) list_highlight_pane_cp34

0x7e4b,	// (0x00057a25) list_single_graphic_hl_pane_g1_ParamLimits

0x7e4b,	// (0x00057a25) list_single_graphic_hl_pane_g1

0xc568,	// (0x0005c142) list_single_graphic_hl_pane_g2_ParamLimits

0xc568,	// (0x0005c142) list_single_graphic_hl_pane_g2

0xc568,	// (0x0005c142) list_single_graphic_hl_pane_g3_ParamLimits

0xc568,	// (0x0005c142) list_single_graphic_hl_pane_g3

0x47cf,	// (0x000543a9) list_single_graphic_hl_pane_g4_ParamLimits

0x47cf,	// (0x000543a9) list_single_graphic_hl_pane_g4

0x357a,	// (0x00053154) list_single_graphic_hl_pane_g5_ParamLimits

0x357a,	// (0x00053154) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x0005f7b5) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x0005f7b5) list_single_graphic_hl_pane_g

0xc574,	// (0x0005c14e) list_single_graphic_hl_pane_t1_ParamLimits

0xc574,	// (0x0005c14e) list_single_graphic_hl_pane_t1

0x7e58,	// (0x00057a32) aid_size_min_hl_cp2

0x7e61,	// (0x00057a3b) list_highlight_pane_cp34_cp2_ParamLimits

0x7e61,	// (0x00057a3b) list_highlight_pane_cp34_cp2

0x7e4b,	// (0x00057a25) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7e4b,	// (0x00057a25) list_single_graphic_hl_pane_g1_cp2

0x7e6e,	// (0x00057a48) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7e6e,	// (0x00057a48) list_single_graphic_hl_pane_g2_cp2

0x7e7a,	// (0x00057a54) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7e7a,	// (0x00057a54) list_single_graphic_hl_pane_g3_cp2

0x7e88,	// (0x00057a62) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7e88,	// (0x00057a62) list_single_graphic_hl_pane_g4_cp2

0x7e94,	// (0x00057a6e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7e94,	// (0x00057a6e) list_single_graphic_hl_pane_g5_cp2

0xbc31,	// (0x0005b80b) control_pane_g4_ParamLimits

0xbc31,	// (0x0005b80b) control_pane_g4

0x4b9c,	// (0x00054776) bg_popup_sub_pane_cp10_ParamLimits

0x7675,	// (0x0005724f) list_choice_list_pane_ParamLimits

0x7684,	// (0x0005725e) scroll_pane_cp23

0x2f0b,	// (0x00052ae5) bg_popup_preview_window_pane_cp02_ParamLimits

0x7c6c,	// (0x00057846) list_preview_fixed_pane_ParamLimits

0x7c82,	// (0x0005785c) list_preview_fixed_pane_cp_ParamLimits

0x7c82,	// (0x0005785c) list_preview_fixed_pane_cp

0x7c8e,	// (0x00057868) popup_preview_fixed_window_g1_ParamLimits

0x7c8e,	// (0x00057868) popup_preview_fixed_window_g1

0x7c9a,	// (0x00057874) popup_preview_fixed_window_g2_ParamLimits

0x7c9a,	// (0x00057874) popup_preview_fixed_window_g2

0x0002,

0xfb63,	// (0x0005f73d) popup_preview_fixed_window_g_ParamLimits

0xfb63,	// (0x0005f73d) popup_preview_fixed_window_g

0x088a,	// (0x00050464) aid_navi_side_left_pane_ParamLimits

0x089f,	// (0x00050479) aid_navi_side_right_pane_ParamLimits

0x08b7,	// (0x00050491) navi_icon_pane_stacon_ParamLimits

0x08cb,	// (0x000504a5) navi_navi_pane_stacon_ParamLimits

0x08b7,	// (0x00050491) navi_text_pane_stacon_ParamLimits

0xf43b,	// (0x0005f015) main_text_info_pane

0x7ebe,	// (0x00057a98) listscroll_text_info_pane

0x7ec6,	// (0x00057aa0) list_text_info_pane_ParamLimits

0x7ec6,	// (0x00057aa0) list_text_info_pane

0x7ed5,	// (0x00057aaf) scroll_pane_cp24_ParamLimits

0x7ed5,	// (0x00057aaf) scroll_pane_cp24

0xe02f,	// (0x0005dc09) list_text_info_pane_t1_ParamLimits

0xe02f,	// (0x0005dc09) list_text_info_pane_t1

0xbd8c,	// (0x0005b966) popup_fast_swap2_window_ParamLimits

0xbd8c,	// (0x0005b966) popup_fast_swap2_window

0x7f24,	// (0x00057afe) aid_size_cell_fast2

0x2b8e,	// (0x00052768) bg_popup_window_pane_cp17

0x5510,	// (0x000550ea) heading_pane_cp2

0x3831,	// (0x0005340b) listscroll_fast2_pane

0x7f2e,	// (0x00057b08) grid_fast2_pane

0x7f38,	// (0x00057b12) listscroll_fast2_pane_g1

0x7f40,	// (0x00057b1a) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x0005f7c0) listscroll_fast2_pane_g

0x3d38,	// (0x00053912) scroll_pane_cp26

0x7f4a,	// (0x00057b24) cell_fast2_pane_ParamLimits

0x7f4a,	// (0x00057b24) cell_fast2_pane

0x7f5f,	// (0x00057b39) cell_fast2_pane_g1

0x7f68,	// (0x00057b42) cell_fast2_pane_g2

0x7f71,	// (0x00057b4b) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x0005f7c5) cell_fast2_pane_g

0x3924,	// (0x000534fe) grid_highlight_pane_cp9

0x0e01,	// (0x000509db) main_eswt_pane_ParamLimits

0x0e01,	// (0x000509db) main_eswt_pane

0x7eea,	// (0x00057ac4) list_single_text_info_pane

0x7f79,	// (0x00057b53) eswt_ctrl_button_pane

0x7f79,	// (0x00057b53) eswt_ctrl_canvas_pane

0x7f81,	// (0x00057b5b) eswt_ctrl_combo_pane

0x7f79,	// (0x00057b53) eswt_ctrl_default_pane

0x7f79,	// (0x00057b53) eswt_ctrl_label_pane

0x7f89,	// (0x00057b63) eswt_ctrl_wait_pane

0x7f91,	// (0x00057b6b) eswt_shell_pane

0x2b8e,	// (0x00052768) listscroll_eswt_app_pane

0x7fb1,	// (0x00057b8b) popup_eswt_tasktip_window_ParamLimits

0x7fb1,	// (0x00057b8b) popup_eswt_tasktip_window

0x5126,	// (0x00054d00) bg_popup_window_pane_cp18

0x7fc2,	// (0x00057b9c) eswt_control_pane_g1_ParamLimits

0x7fc2,	// (0x00057b9c) eswt_control_pane_g1

0x7fcf,	// (0x00057ba9) eswt_control_pane_g2_ParamLimits

0x7fcf,	// (0x00057ba9) eswt_control_pane_g2

0x7fdc,	// (0x00057bb6) eswt_control_pane_g3_ParamLimits

0x7fdc,	// (0x00057bb6) eswt_control_pane_g3

0x7fe9,	// (0x00057bc3) eswt_control_pane_g4_ParamLimits

0x7fe9,	// (0x00057bc3) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x0005f7cc) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x0005f7cc) eswt_control_pane_g

0x3bd4,	// (0x000537ae) bg_button_pane_ParamLimits

0x3bd4,	// (0x000537ae) bg_button_pane

0x3939,	// (0x00053513) common_borders_pane_copy2_ParamLimits

0x3939,	// (0x00053513) common_borders_pane_copy2

0x7ff6,	// (0x00057bd0) control_button_pane_g1_ParamLimits

0x7ff6,	// (0x00057bd0) control_button_pane_g1

0x8002,	// (0x00057bdc) control_button_pane_g2_ParamLimits

0x8002,	// (0x00057bdc) control_button_pane_g2

0x800e,	// (0x00057be8) control_button_pane_g3_ParamLimits

0x800e,	// (0x00057be8) control_button_pane_g3

0x0002,

0xfbfb,	// (0x0005f7d5) control_button_pane_g_ParamLimits

0xfbfb,	// (0x0005f7d5) control_button_pane_g

0x8022,	// (0x00057bfc) control_button_pane_t1

0x8030,	// (0x00057c0a) control_button_pane_t2

0x0001,

0xfc02,	// (0x0005f7dc) control_button_pane_t

0x50b2,	// (0x00054c8c) bg_button_pane_g1

0x50c2,	// (0x00054c9c) bg_button_pane_g2

0x50ba,	// (0x00054c94) bg_button_pane_g3

0x50d2,	// (0x00054cac) bg_button_pane_g4

0x50ca,	// (0x00054ca4) bg_button_pane_g5

0x50da,	// (0x00054cb4) bg_button_pane_g6

0x50e2,	// (0x00054cbc) bg_button_pane_g7

0x50f2,	// (0x00054ccc) bg_button_pane_g8

0x50ea,	// (0x00054cc4) bg_button_pane_g9

0x0008,

0xf866,	// (0x0005f440) bg_button_pane_g

0x7630,	// (0x0005720a) common_borders_pane_ParamLimits

0x7630,	// (0x0005720a) common_borders_pane

0x7fc2,	// (0x00057b9c) eswt_control_pane_g1_copy1_ParamLimits

0x7fc2,	// (0x00057b9c) eswt_control_pane_g1_copy1

0x7fcf,	// (0x00057ba9) eswt_control_pane_g2_copy1_ParamLimits

0x7fcf,	// (0x00057ba9) eswt_control_pane_g2_copy1

0x7fdc,	// (0x00057bb6) eswt_control_pane_g3_copy1_ParamLimits

0x7fdc,	// (0x00057bb6) eswt_control_pane_g3_copy1

0x7fe9,	// (0x00057bc3) eswt_control_pane_g4_copy1_ParamLimits

0x7fe9,	// (0x00057bc3) eswt_control_pane_g4_copy1

0x766b,	// (0x00057245) bg_eswt_ctrl_canvas_pane_g1

0x7630,	// (0x0005720a) common_borders_pane_cp2_ParamLimits

0x7630,	// (0x0005720a) common_borders_pane_cp2

0x7630,	// (0x0005720a) common_borders_pane_cp3_ParamLimits

0x7630,	// (0x0005720a) common_borders_pane_cp3

0x803e,	// (0x00057c18) separator_horizontal_pane

0x8046,	// (0x00057c20) separator_vertical_pane

0x7fc2,	// (0x00057b9c) eswt_control_pane_g1_copy2_ParamLimits

0x7fc2,	// (0x00057b9c) eswt_control_pane_g1_copy2

0x7fcf,	// (0x00057ba9) eswt_control_pane_g2_copy2_ParamLimits

0x7fcf,	// (0x00057ba9) eswt_control_pane_g2_copy2

0x7fdc,	// (0x00057bb6) eswt_control_pane_g3_copy2_ParamLimits

0x7fdc,	// (0x00057bb6) eswt_control_pane_g3_copy2

0x7fe9,	// (0x00057bc3) eswt_control_pane_g4_copy2_ParamLimits

0x7fe9,	// (0x00057bc3) eswt_control_pane_g4_copy2

0x2b8e,	// (0x00052768) common_borders_pane_cp4

0x804f,	// (0x00057c29) separator_horizontal_pane_g1

0x8058,	// (0x00057c32) separator_horizontal_pane_g2

0x8061,	// (0x00057c3b) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x0005f7e1) separator_horizontal_pane_g

0x7fc2,	// (0x00057b9c) eswt_control_pane_g1_copy3_ParamLimits

0x7fc2,	// (0x00057b9c) eswt_control_pane_g1_copy3

0x7fcf,	// (0x00057ba9) eswt_control_pane_g2_copy3_ParamLimits

0x7fcf,	// (0x00057ba9) eswt_control_pane_g2_copy3

0x7fdc,	// (0x00057bb6) eswt_control_pane_g3_copy3_ParamLimits

0x7fdc,	// (0x00057bb6) eswt_control_pane_g3_copy3

0x7fe9,	// (0x00057bc3) eswt_control_pane_g4_copy3_ParamLimits

0x7fe9,	// (0x00057bc3) eswt_control_pane_g4_copy3

0x2b8e,	// (0x00052768) common_borders_pane_cp5

0x806a,	// (0x00057c44) separator_vertical_pane_g1

0x8073,	// (0x00057c4d) separator_vertical_pane_g2

0x807c,	// (0x00057c56) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x0005f7e8) separator_vertical_pane_g

0x7fc2,	// (0x00057b9c) eswt_control_pane_g1_copy4_ParamLimits

0x7fc2,	// (0x00057b9c) eswt_control_pane_g1_copy4

0x7fcf,	// (0x00057ba9) eswt_control_pane_g2_copy4_ParamLimits

0x7fcf,	// (0x00057ba9) eswt_control_pane_g2_copy4

0x7fdc,	// (0x00057bb6) eswt_control_pane_g3_copy4_ParamLimits

0x7fdc,	// (0x00057bb6) eswt_control_pane_g3_copy4

0x7fe9,	// (0x00057bc3) eswt_control_pane_g4_copy4_ParamLimits

0x7fe9,	// (0x00057bc3) eswt_control_pane_g4_copy4

0xe04a,	// (0x0005dc24) eswt_ctrl_combo_button_pane

0xe052,	// (0x0005dc2c) eswt_ctrl_input_pane

0xe05a,	// (0x0005dc34) popup_choice_list_window_cp70

0xe062,	// (0x0005dc3c) eswt_ctrl_input_pane_t1

0x2b8e,	// (0x00052768) input_focus_pane_cp70

0x7630,	// (0x0005720a) bg_button_pane_cp70_ParamLimits

0x7630,	// (0x0005720a) bg_button_pane_cp70

0xe070,	// (0x0005dc4a) eswt_ctrl_combo_button_pane_g1

0x80b3,	// (0x00057c8d) wait_bar_pane_cp70

0x5126,	// (0x00054d00) bg_popup_window_pane_cp70_ParamLimits

0x5126,	// (0x00054d00) bg_popup_window_pane_cp70

0x80bb,	// (0x00057c95) popup_eswt_tasktip_window_t1

0x80d1,	// (0x00057cab) wait_bar_pane_cp71_ParamLimits

0x80d1,	// (0x00057cab) wait_bar_pane_cp71

0x80dd,	// (0x00057cb7) grid_eswt_app_pane

0x4054,	// (0x00053c2e) scroll_pane_cp70

0xe078,	// (0x0005dc52) cell_eswt_app_pane_ParamLimits

0xe078,	// (0x0005dc52) cell_eswt_app_pane

0xe0a2,	// (0x0005dc7c) cell_eswt_app_pane_g1_ParamLimits

0xe0a2,	// (0x0005dc7c) cell_eswt_app_pane_g1

0xe0d1,	// (0x0005dcab) cell_eswt_app_pane_g2_ParamLimits

0xe0d1,	// (0x0005dcab) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x0005f7ef) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x0005f7ef) cell_eswt_app_pane_g

0xe0fa,	// (0x0005dcd4) cell_eswt_app_pane_t1_ParamLimits

0xe0fa,	// (0x0005dcd4) cell_eswt_app_pane_t1

0x81a0,	// (0x00057d7a) grid_highlight_pane_cp70_ParamLimits

0x81a0,	// (0x00057d7a) grid_highlight_pane_cp70

0x4733,	// (0x0005430d) set_content_pane_g1

0xd2db,	// (0x0005ceb5) status_small_volume_pane

0x1f3f,	// (0x00051b19) status_small_volume_pane_g1

0x1f47,	// (0x00051b21) volume_small2_pane

0x1f50,	// (0x00051b2a) volume_small2_pane_g1

0x1f59,	// (0x00051b33) volume_small2_pane_g2

0x1f62,	// (0x00051b3c) volume_small2_pane_g3

0x1f6b,	// (0x00051b45) volume_small2_pane_g4

0x1f74,	// (0x00051b4e) volume_small2_pane_g5

0x1f7d,	// (0x00051b57) volume_small2_pane_g6

0x1f86,	// (0x00051b60) volume_small2_pane_g7

0x1f8f,	// (0x00051b69) volume_small2_pane_g8

0x1f98,	// (0x00051b72) volume_small2_pane_g9

0x1fa1,	// (0x00051b7b) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x0005f7f4) volume_small2_pane_g

0x7a31,	// (0x0005760b) fep_vkb_top_text_pane_g1_ParamLimits

0xdfd7,	// (0x0005dbb1) fep_vkb_top_text_pane_t1_ParamLimits

0x7ca6,	// (0x00057880) popup_preview_fixed_window_g3_ParamLimits

0x7ca6,	// (0x00057880) popup_preview_fixed_window_g3

0xc3af,	// (0x0005bf89) popup_toolbar_trans_pane

0xda02,	// (0x0005d5dc) aid_height_set_list_ParamLimits

0x6486,	// (0x00056060) aid_size_parent_ParamLimits

0x4b9c,	// (0x00054776) list_highlight_pane_cp2_ParamLimits

0x4733,	// (0x0005430d) set_content_pane_g1_ParamLimits

0xd7c7,	// (0x0005d3a1) list_single_image_pane_ParamLimits

0xd7c7,	// (0x0005d3a1) list_single_image_pane

0xe12c,	// (0x0005dd06) aid_size_cell_image_ParamLimits

0xe12c,	// (0x0005dd06) aid_size_cell_image

0xe139,	// (0x0005dd13) grid_single_image_pane_ParamLimits

0xe139,	// (0x0005dd13) grid_single_image_pane

0x4e7d,	// (0x00054a57) list_single_image_pane_g1_ParamLimits

0x4e7d,	// (0x00054a57) list_single_image_pane_g1

0x81c5,	// (0x00057d9f) list_single_image_pane_g2_ParamLimits

0x81c5,	// (0x00057d9f) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x0005f809) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x0005f809) list_single_image_pane_g

0x81d9,	// (0x00057db3) list_single_image_pane_t1_ParamLimits

0x81d9,	// (0x00057db3) list_single_image_pane_t1

0xe147,	// (0x0005dd21) cell_image_list_pane_ParamLimits

0xe147,	// (0x0005dd21) cell_image_list_pane

0xe15d,	// (0x0005dd37) cell_image_list_pane_g1

0xe166,	// (0x0005dd40) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x0005f80e) cell_image_list_pane_g

0x8215,	// (0x00057def) aid_size_cell_tb_trans_pane

0x3bd4,	// (0x000537ae) bg_tb_trans_pane

0x8227,	// (0x00057e01) grid_tb_trans_pane

0x50b2,	// (0x00054c8c) bg_tb_trans_pane_g1

0x50c2,	// (0x00054c9c) bg_tb_trans_pane_g2

0x50ba,	// (0x00054c94) bg_tb_trans_pane_g3

0x50d2,	// (0x00054cac) bg_tb_trans_pane_g4

0x50ca,	// (0x00054ca4) bg_tb_trans_pane_g5

0x50f2,	// (0x00054ccc) bg_tb_trans_pane_g6

0x50ea,	// (0x00054cc4) bg_tb_trans_pane_g7

0x50da,	// (0x00054cb4) bg_tb_trans_pane_g8

0x50e2,	// (0x00054cbc) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x0005f813) bg_tb_trans_pane_g

0x823b,	// (0x00057e15) cell_toolbar_trans_pane_ParamLimits

0x823b,	// (0x00057e15) cell_toolbar_trans_pane

0x766b,	// (0x00057245) cell_toolbar_trans_pane_g1

0xddc0,	// (0x0005d99a) list_form2_midp_pane_t1

0xddce,	// (0x0005d9a8) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0005f6b0) list_form2_midp_pane_t

0x7251,	// (0x00056e2b) scroll_pane_cp51_ParamLimits

0x740d,	// (0x00056fe7) form2_midp_wait_pane_g1

0x7416,	// (0x00056ff0) form2_midp_wait_pane_g2

0x741f,	// (0x00056ff9) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0005f6c5) form2_midp_wait_pane_g

0x2c82,	// (0x0005285c) list_highlight_pane_cp21_ParamLimits

0x7476,	// (0x00057050) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7485,	// (0x0005705f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x663e,	// (0x00056218) list_single_2graphic_im_pane_ParamLimits

0x663e,	// (0x00056218) list_single_2graphic_im_pane

0xe16f,	// (0x0005dd49) list_single_2graphic_im_pane_g1_ParamLimits

0xe16f,	// (0x0005dd49) list_single_2graphic_im_pane_g1

0xe180,	// (0x0005dd5a) list_single_2graphic_im_pane_g2_ParamLimits

0xe180,	// (0x0005dd5a) list_single_2graphic_im_pane_g2

0xe18c,	// (0x0005dd66) list_single_2graphic_im_pane_g3_ParamLimits

0xe18c,	// (0x0005dd66) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x0005f826) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x0005f826) list_single_2graphic_im_pane_g

0xe1a0,	// (0x0005dd7a) list_single_2graphic_im_pane_t1_ParamLimits

0xe1a0,	// (0x0005dd7a) list_single_2graphic_im_pane_t1

0x7cb2,	// (0x0005788c) list_single_graphic_2heading_pane_fp_ParamLimits

0x7cb2,	// (0x0005788c) list_single_graphic_2heading_pane_fp

0x33d7,	// (0x00052fb1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x33d7,	// (0x00052fb1) list_single_graphic_2heading_pane_fp_g1

0x7cc7,	// (0x000578a1) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7cc7,	// (0x000578a1) list_single_graphic_2heading_pane_fp_g2

0x3b6f,	// (0x00053749) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3b6f,	// (0x00053749) list_single_graphic_2heading_pane_fp_g3

0x3be2,	// (0x000537bc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3be2,	// (0x000537bc) list_single_graphic_2heading_pane_fp_g4

0x7cd3,	// (0x000578ad) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7cd3,	// (0x000578ad) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb73,	// (0x0005f74d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb73,	// (0x0005f74d) list_single_graphic_2heading_pane_fp_g

0x35a4,	// (0x0005317e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x35a4,	// (0x0005317e) list_single_graphic_2heading_pane_fp_t1

0x340f,	// (0x00052fe9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x340f,	// (0x00052fe9) list_single_graphic_2heading_pane_fp_t2

0x35ba,	// (0x00053194) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x35ba,	// (0x00053194) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x0005f82f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x0005f82f) list_single_graphic_2heading_pane_fp_t

0x76f7,	// (0x000572d1) fep_hwr_write_pane_g5_ParamLimits

0x76f7,	// (0x000572d1) fep_hwr_write_pane_g5

0x7703,	// (0x000572dd) fep_hwr_write_pane_g6_ParamLimits

0x7703,	// (0x000572dd) fep_hwr_write_pane_g6

0x7f91,	// (0x00057b6b) eswt_shell_pane_ParamLimits

0x5126,	// (0x00054d00) bg_popup_window_pane_cp18_ParamLimits

0x63ce,	// (0x00055fa8) heading_pane_cp70

0x80bb,	// (0x00057c95) popup_eswt_tasktip_window_t1_ParamLimits

0xd381,	// (0x0005cf5b) aid_touch_tab_arrow_left

0xd397,	// (0x0005cf71) aid_touch_tab_arrow_right

0xb528,	// (0x0005b102) title_pane_g3_ParamLimits

0xb528,	// (0x0005b102) title_pane_g3

0x3b93,	// (0x0005376d) set_value_pane_g1

0xc3af,	// (0x0005bf89) popup_toolbar_trans_pane_ParamLimits

0x8215,	// (0x00057def) aid_size_cell_tb_trans_pane_ParamLimits

0x3bd4,	// (0x000537ae) bg_tb_trans_pane_ParamLimits

0x8227,	// (0x00057e01) grid_tb_trans_pane_ParamLimits

0x2f0b,	// (0x00052ae5) cont_note_pane_ParamLimits

0x2f0b,	// (0x00052ae5) cont_note_pane

0x3939,	// (0x00053513) cont_snote2_single_text_pane_ParamLimits

0x3939,	// (0x00053513) cont_snote2_single_text_pane

0x3939,	// (0x00053513) cont_snote2_single_graphic_pane_ParamLimits

0x3939,	// (0x00053513) cont_snote2_single_graphic_pane

0x572b,	// (0x00055305) cont_note_wait_pane_ParamLimits

0x572b,	// (0x00055305) cont_note_wait_pane

0x572b,	// (0x00055305) cont_note_image_pane_ParamLimits

0x572b,	// (0x00055305) cont_note_image_pane

0x82cf,	// (0x00057ea9) popup_note2_window_g1_ParamLimits

0x82cf,	// (0x00057ea9) popup_note2_window_g1

0x8300,	// (0x00057eda) popup_note2_window_t1_ParamLimits

0x8300,	// (0x00057eda) popup_note2_window_t1

0x8345,	// (0x00057f1f) popup_note2_window_t2_ParamLimits

0x8345,	// (0x00057f1f) popup_note2_window_t2

0x838a,	// (0x00057f64) popup_note2_window_t3_ParamLimits

0x838a,	// (0x00057f64) popup_note2_window_t3

0x83cf,	// (0x00057fa9) popup_note2_window_t4_ParamLimits

0x83cf,	// (0x00057fa9) popup_note2_window_t4

0x2f8f,	// (0x00052b69) popup_note2_window_t5_ParamLimits

0x2f8f,	// (0x00052b69) popup_note2_window_t5

0x0004,

0xfc61,	// (0x0005f83b) popup_note2_window_t_ParamLimits

0xfc61,	// (0x0005f83b) popup_note2_window_t

0x83fe,	// (0x00057fd8) popup_note2_image_window_g1_ParamLimits

0x83fe,	// (0x00057fd8) popup_note2_image_window_g1

0x840a,	// (0x00057fe4) popup_note2_image_window_g2_ParamLimits

0x840a,	// (0x00057fe4) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x0005f846) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x0005f846) popup_note2_image_window_g

0x841c,	// (0x00057ff6) popup_note2_image_window_t1_ParamLimits

0x841c,	// (0x00057ff6) popup_note2_image_window_t1

0x8434,	// (0x0005800e) popup_note2_image_window_t2_ParamLimits

0x8434,	// (0x0005800e) popup_note2_image_window_t2

0x844c,	// (0x00058026) popup_note2_image_window_t3_ParamLimits

0x844c,	// (0x00058026) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x0005f84b) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x0005f84b) popup_note2_image_window_t

0x5739,	// (0x00055313) popup_note2_wait_window_g1_ParamLimits

0x5739,	// (0x00055313) popup_note2_wait_window_g1

0x8468,	// (0x00058042) popup_note2_wait_window_g2_ParamLimits

0x8468,	// (0x00058042) popup_note2_wait_window_g2

0x5751,	// (0x0005532b) popup_note2_wait_window_g3_ParamLimits

0x5751,	// (0x0005532b) popup_note2_wait_window_g3

0x0002,

0xfc78,	// (0x0005f852) popup_note2_wait_window_g_ParamLimits

0xfc78,	// (0x0005f852) popup_note2_wait_window_g

0x8474,	// (0x0005804e) popup_note2_wait_window_t1_ParamLimits

0x8474,	// (0x0005804e) popup_note2_wait_window_t1

0x8492,	// (0x0005806c) popup_note2_wait_window_t2_ParamLimits

0x8492,	// (0x0005806c) popup_note2_wait_window_t2

0x84b0,	// (0x0005808a) popup_note2_wait_window_t3_ParamLimits

0x84b0,	// (0x0005808a) popup_note2_wait_window_t3

0x84c2,	// (0x0005809c) popup_note2_wait_window_t4_ParamLimits

0x84c2,	// (0x0005809c) popup_note2_wait_window_t4

0x0003,

0xfc7f,	// (0x0005f859) popup_note2_wait_window_t_ParamLimits

0xfc7f,	// (0x0005f859) popup_note2_wait_window_t

0x84d4,	// (0x000580ae) wait_bar2_pane_ParamLimits

0x84d4,	// (0x000580ae) wait_bar2_pane

0x84ec,	// (0x000580c6) popup_snote2_single_text_window_g1_ParamLimits

0x84ec,	// (0x000580c6) popup_snote2_single_text_window_g1

0x8514,	// (0x000580ee) popup_snote2_single_text_window_t1_ParamLimits

0x8514,	// (0x000580ee) popup_snote2_single_text_window_t1

0x8560,	// (0x0005813a) popup_snote2_single_text_window_t2_ParamLimits

0x8560,	// (0x0005813a) popup_snote2_single_text_window_t2

0x85ac,	// (0x00058186) popup_snote2_single_text_window_t3_ParamLimits

0x85ac,	// (0x00058186) popup_snote2_single_text_window_t3

0x85ed,	// (0x000581c7) popup_snote2_single_text_window_t4_ParamLimits

0x85ed,	// (0x000581c7) popup_snote2_single_text_window_t4

0x8623,	// (0x000581fd) popup_snote2_single_text_window_t5_ParamLimits

0x8623,	// (0x000581fd) popup_snote2_single_text_window_t5

0x0004,

0xfc88,	// (0x0005f862) popup_snote2_single_text_window_t_ParamLimits

0xfc88,	// (0x0005f862) popup_snote2_single_text_window_t

0x864e,	// (0x00058228) popup_snote2_single_graphic_window_g1_ParamLimits

0x864e,	// (0x00058228) popup_snote2_single_graphic_window_g1

0x8676,	// (0x00058250) popup_snote2_single_graphic_window_g2_ParamLimits

0x8676,	// (0x00058250) popup_snote2_single_graphic_window_g2

0x0001,

0xfc93,	// (0x0005f86d) popup_snote2_single_graphic_window_g_ParamLimits

0xfc93,	// (0x0005f86d) popup_snote2_single_graphic_window_g

0x869e,	// (0x00058278) popup_snote2_single_graphic_window_t1_ParamLimits

0x869e,	// (0x00058278) popup_snote2_single_graphic_window_t1

0x86ea,	// (0x000582c4) popup_snote2_single_graphic_window_t2_ParamLimits

0x86ea,	// (0x000582c4) popup_snote2_single_graphic_window_t2

0x85ac,	// (0x00058186) popup_snote2_single_graphic_window_t3_ParamLimits

0x85ac,	// (0x00058186) popup_snote2_single_graphic_window_t3

0x85ed,	// (0x000581c7) popup_snote2_single_graphic_window_t4_ParamLimits

0x85ed,	// (0x000581c7) popup_snote2_single_graphic_window_t4

0x8623,	// (0x000581fd) popup_snote2_single_graphic_window_t5_ParamLimits

0x8623,	// (0x000581fd) popup_snote2_single_graphic_window_t5

0x0004,

0xfc98,	// (0x0005f872) popup_snote2_single_graphic_window_t_ParamLimits

0xfc98,	// (0x0005f872) popup_snote2_single_graphic_window_t

0x7112,	// (0x00056cec) clock_nsta_pane_cp2_t1

0x7112,	// (0x00056cec) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0005f686) clock_nsta_pane_cp2_t

0x0608,	// (0x000501e2) form_field_data_wide_pane_g1_ParamLimits

0x3b6f,	// (0x00053749) form_field_data_wide_pane_g2_ParamLimits

0x3b6f,	// (0x00053749) form_field_data_wide_pane_g2

0x3be2,	// (0x000537bc) form_field_data_wide_pane_g3_ParamLimits

0x3be2,	// (0x000537bc) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0005f25a) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0005f25a) form_field_data_wide_pane_g

0xdd03,	// (0x0005d8dd) grid_touch_3_pane_ParamLimits

0xdd03,	// (0x0005d8dd) grid_touch_3_pane

0xe1d1,	// (0x0005ddab) cell_touch_3_pane_ParamLimits

0xe1d1,	// (0x0005ddab) cell_touch_3_pane

0x766b,	// (0x00057245) cell_touch_3_pane_g1

0x766b,	// (0x00057245) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0005f70b) cell_touch_3_pane_g

0x2fc1,	// (0x00052b9b) cont_query_data_pane

0x2fc9,	// (0x00052ba3) cont_query_data_pane_cp1

0x8764,	// (0x0005833e) button_value_adjust_pane_cp7

0x876c,	// (0x00058346) query_popup_pane_cp3

0x433b,	// (0x00053f15) bg_popup_sub_pane_cp22_ParamLimits

0x09cc,	// (0x000505a6) navi_navi_volume_pane_cp2

0x09e7,	// (0x000505c1) popup_side_volume_key_window_g2

0x09f6,	// (0x000505d0) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0005f2f0) popup_side_volume_key_window_g

0x0a13,	// (0x000505ed) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0005f2f7) popup_side_volume_key_window_t

0x45f2,	// (0x000541cc) popup_side_volume_key_window_ParamLimits

0xb6d2,	// (0x0005b2ac) list_double_graphic_pane_g4_ParamLimits

0xb6d2,	// (0x0005b2ac) list_double_graphic_pane_g4

0xdb7b,	// (0x0005d755) list_single_2heading_msg_pane_ParamLimits

0xdb7b,	// (0x0005d755) list_single_2heading_msg_pane

0xd7d8,	// (0x0005d3b2) list_single_2heading_msg_pane_g1_ParamLimits

0xd7d8,	// (0x0005d3b2) list_single_2heading_msg_pane_g1

0xd7e4,	// (0x0005d3be) list_single_2heading_msg_pane_g2_ParamLimits

0xd7e4,	// (0x0005d3be) list_single_2heading_msg_pane_g2

0xd7f7,	// (0x0005d3d1) list_single_2heading_msg_pane_g3_ParamLimits

0xd7f7,	// (0x0005d3d1) list_single_2heading_msg_pane_g3

0xd803,	// (0x0005d3dd) list_single_2heading_msg_pane_g4_ParamLimits

0xd803,	// (0x0005d3dd) list_single_2heading_msg_pane_g4

0x0003,

0xfca3,	// (0x0005f87d) list_single_2heading_msg_pane_g_ParamLimits

0xfca3,	// (0x0005f87d) list_single_2heading_msg_pane_g

0xc58a,	// (0x0005c164) list_single_2heading_msg_pane_t1_ParamLimits

0xc58a,	// (0x0005c164) list_single_2heading_msg_pane_t1

0xc5b2,	// (0x0005c18c) list_single_2heading_msg_pane_t2_ParamLimits

0xc5b2,	// (0x0005c18c) list_single_2heading_msg_pane_t2

0xc61d,	// (0x0005c1f7) list_single_2heading_msg_pane_t3_ParamLimits

0xc61d,	// (0x0005c1f7) list_single_2heading_msg_pane_t3

0x3693,	// (0x0005326d) list_single_2heading_msg_pane_t4_ParamLimits

0x3693,	// (0x0005326d) list_single_2heading_msg_pane_t4

0x0003,

0xfcac,	// (0x0005f886) list_single_2heading_msg_pane_t_ParamLimits

0xfcac,	// (0x0005f886) list_single_2heading_msg_pane_t

0x2bd6,	// (0x000527b0) title_pane_g4_ParamLimits

0x2bd6,	// (0x000527b0) title_pane_g4

0x07db,	// (0x000503b5) title_pane_stacon_g3_ParamLimits

0x07db,	// (0x000503b5) title_pane_stacon_g3

0x8292,	// (0x00057e6c) list_single_2graphic_im_pane_g4_ParamLimits

0x8292,	// (0x00057e6c) list_single_2graphic_im_pane_g4

0x618a,	// (0x00055d64) popup_side_volume_key_window_cp

0x6951,	// (0x0005652b) main_idle_act2_pane_t1

0x1406,	// (0x00050fe0) toolbar_button_pane_g10

0xcf91,	// (0x0005cb6b) popup_toolbar_window_cp1

0x7103,	// (0x00056cdd) clock_nsta_pane_cp_t1

0x7103,	// (0x00056cdd) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0005f681) clock_nsta_pane_cp_t

0x09cc,	// (0x000505a6) navi_navi_volume_pane_cp2_ParamLimits

0x09db,	// (0x000505b5) popup_side_volume_key_window_g1_ParamLimits

0x09e7,	// (0x000505c1) popup_side_volume_key_window_g2_ParamLimits

0x09f6,	// (0x000505d0) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0005f2f0) popup_side_volume_key_window_g_ParamLimits

0x1bab,	// (0x00051785) fep_hwr_aid_pane

0x1c52,	// (0x0005182c) bg_fep_hwr_top_pane_g4_ParamLimits

0x76c7,	// (0x000572a1) fep_hwr_top_pane_g1_ParamLimits

0x76d9,	// (0x000572b3) fep_hwr_top_pane_g2_ParamLimits

0x1c72,	// (0x0005184c) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0005f6d6) fep_hwr_top_pane_g_ParamLimits

0x1c87,	// (0x00051861) fep_hwr_top_text_pane_ParamLimits

0x5f4d,	// (0x00055b27) aid_touch_tab_arrow_arrow_2

0x5f56,	// (0x00055b30) aid_touch_tab_arrow_left_2

0x1bbf,	// (0x00051799) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1bf6,	// (0x000517d0) fep_hwr_prediction_pane

0x7839,	// (0x00057413) fep_vkb_prediction_pane

0xdfb7,	// (0x0005db91) fep_vkb_side_pane_g3_ParamLimits

0xdfb7,	// (0x0005db91) fep_vkb_side_pane_g3

0x1e02,	// (0x000519dc) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1e6e,	// (0x00051a48) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1e7b,	// (0x00051a55) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbab,	// (0x0005f785) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1faa,	// (0x00051b84) fep_hwr_prediction_pane_g1

0x1fb4,	// (0x00051b8e) fep_hwr_prediction_pane_g2

0x1fbc,	// (0x00051b96) fep_hwr_prediction_pane_g3

0x1fc4,	// (0x00051b9e) fep_hwr_prediction_pane_g4

0x0003,

0xfcb5,	// (0x0005f88f) fep_hwr_prediction_pane_g

0x8791,	// (0x0005836b) fep_vkb_prediction_pane_g1

0x879b,	// (0x00058375) fep_vkb_prediction_pane_g2

0x87a3,	// (0x0005837d) fep_vkb_prediction_pane_g3

0x87ab,	// (0x00058385) fep_vkb_prediction_pane_g4

0x0003,

0xfcbe,	// (0x0005f898) fep_vkb_prediction_pane_g

0x17f0,	// (0x000513ca) slider_set_pane_g3

0x1804,	// (0x000513de) slider_set_pane_g4

0x181c,	// (0x000513f6) slider_set_pane_g5

0x17f0,	// (0x000513ca) slider_set_pane_g6

0x1832,	// (0x0005140c) slider_set_pane_g7

0x65eb,	// (0x000561c5) slider_form_pane_g3

0x65f4,	// (0x000561ce) slider_form_pane_g4

0x65fc,	// (0x000561d6) slider_form_pane_g5

0x65eb,	// (0x000561c5) slider_form_pane_g6

0xdb4d,	// (0x0005d727) slider_form_pane_g7

0x6bfc,	// (0x000567d6) slider_set_pane_vc_g3

0x6c05,	// (0x000567df) slider_set_pane_vc_g4

0x6c0e,	// (0x000567e8) slider_set_pane_vc_g5

0x6bfc,	// (0x000567d6) slider_set_pane_vc_g6

0x6c17,	// (0x000567f1) slider_set_pane_vc_g7

0x6dd7,	// (0x000569b1) slider_form_pane_vc_g1

0x6de0,	// (0x000569ba) slider_form_pane_vc_g2

0x6de9,	// (0x000569c3) slider_form_pane_vc_g3

0x6dd7,	// (0x000569b1) slider_form_pane_vc_g4

0x6df2,	// (0x000569cc) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0005f653) slider_form_pane_vc_g

0xf43b,	// (0x0005f015) main_idle_act3_pane

0x87b3,	// (0x0005838d) ai3_links_pane

0xe219,	// (0x0005ddf3) popup_ai3_data_window_ParamLimits

0xe219,	// (0x0005ddf3) popup_ai3_data_window

0x2b8e,	// (0x00052768) grid_ai3_links_pane

0xe233,	// (0x0005de0d) cell_ai3_links_pane_ParamLimits

0xe233,	// (0x0005de0d) cell_ai3_links_pane

0x87ee,	// (0x000583c8) bg_popup_sub_pane_cp11

0x87fb,	// (0x000583d5) cell_ai3_links_pane_g1

0x2b8e,	// (0x00052768) bg_popup_sub_pane_cp12

0x8820,	// (0x000583fa) heading_ai3_data_pane

0x8828,	// (0x00058402) list_ai3_gene_pane

0x8834,	// (0x0005840e) popup_ai3_data_window_g1

0x883c,	// (0x00058416) heading_ai3_data_pane_g1

0x8844,	// (0x0005841e) heading_ai3_data_pane_t1

0x8852,	// (0x0005842c) list_double_ai3_gene_pane_ParamLimits

0x8852,	// (0x0005842c) list_double_ai3_gene_pane

0x885f,	// (0x00058439) list_single_ai3_gene_pane_ParamLimits

0x885f,	// (0x00058439) list_single_ai3_gene_pane

0x7630,	// (0x0005720a) list_highlight_pane_cp7_ParamLimits

0x7630,	// (0x0005720a) list_highlight_pane_cp7

0x886c,	// (0x00058446) list_single_a13_gene_pane_t1_ParamLimits

0x886c,	// (0x00058446) list_single_a13_gene_pane_t1

0x8883,	// (0x0005845d) list_single_ai3_gene_pane_g1

0x888c,	// (0x00058466) list_single_ai3_gene_pane_g2

0x0001,

0xfcc7,	// (0x0005f8a1) list_single_ai3_gene_pane_g

0x8894,	// (0x0005846e) list_double_ai3_gene_pane_g1_ParamLimits

0x8894,	// (0x0005846e) list_double_ai3_gene_pane_g1

0x88a0,	// (0x0005847a) list_double_ai3_gene_pane_t1_ParamLimits

0x88a0,	// (0x0005847a) list_double_ai3_gene_pane_t1

0x88bc,	// (0x00058496) list_double_ai3_gene_pane_t2_ParamLimits

0x88bc,	// (0x00058496) list_double_ai3_gene_pane_t2

0x88d2,	// (0x000584ac) list_double_ai3_gene_pane_t3_ParamLimits

0x88d2,	// (0x000584ac) list_double_ai3_gene_pane_t3

0x0002,

0xfccc,	// (0x0005f8a6) list_double_ai3_gene_pane_t_ParamLimits

0xfccc,	// (0x0005f8a6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x35d0,	// (0x000531aa) aid_size_min_col_2

0xe203,	// (0x0005dddd) aid_size_min_msg_ParamLimits

0xe203,	// (0x0005dddd) aid_size_min_msg

0xdfcb,	// (0x0005dba5) fep_vkb_top_text_pane_g2_ParamLimits

0xdfcb,	// (0x0005dba5) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0005f706) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0005f706) fep_vkb_top_text_pane_g

0xf43b,	// (0x0005f015) main_hc_apps_shell_pane

0x88ef,	// (0x000584c9) grid_hc_apps_pane_ParamLimits

0x88ef,	// (0x000584c9) grid_hc_apps_pane

0x88fe,	// (0x000584d8) list_hc_apps_pane

0x8906,	// (0x000584e0) scroll_pane_cp37_ParamLimits

0x8906,	// (0x000584e0) scroll_pane_cp37

0xe24d,	// (0x0005de27) cell_hc_apps_pane_ParamLimits

0xe24d,	// (0x0005de27) cell_hc_apps_pane

0xe30b,	// (0x0005dee5) cell_hc_apps_pane_g1_ParamLimits

0xe30b,	// (0x0005dee5) cell_hc_apps_pane_g1

0x89f1,	// (0x000585cb) cell_hc_apps_pane_g2_ParamLimits

0x89f1,	// (0x000585cb) cell_hc_apps_pane_g2

0x8a0d,	// (0x000585e7) cell_hc_apps_pane_g3_ParamLimits

0x8a0d,	// (0x000585e7) cell_hc_apps_pane_g3

0x0002,

0xfcd3,	// (0x0005f8ad) cell_hc_apps_pane_g_ParamLimits

0xfcd3,	// (0x0005f8ad) cell_hc_apps_pane_g

0xe338,	// (0x0005df12) cell_hc_apps_pane_t1_ParamLimits

0xe338,	// (0x0005df12) cell_hc_apps_pane_t1

0x2f0b,	// (0x00052ae5) grid_highlight_pane_cp10_ParamLimits

0x2f0b,	// (0x00052ae5) grid_highlight_pane_cp10

0xe376,	// (0x0005df50) list_single_hc_apps_pane_ParamLimits

0xe376,	// (0x0005df50) list_single_hc_apps_pane

0xe3a3,	// (0x0005df7d) list_single_hc_apps_pane_g1

0xd81b,	// (0x0005d3f5) list_single_hc_apps_pane_g2

0x0001,

0xfcda,	// (0x0005f8b4) list_single_hc_apps_pane_g

0xd834,	// (0x0005d40e) list_single_hc_apps_pane_g2_copy1

0x36ed,	// (0x000532c7) list_single_hc_apps_pane_t1

0x2c82,	// (0x0005285c) bg_set_opt_pane_cp_ParamLimits

0x0030,	// (0x0004fc0a) setting_slider_pane_t1_ParamLimits

0x0049,	// (0x0004fc23) setting_slider_pane_t2_ParamLimits

0x0063,	// (0x0004fc3d) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005f138) setting_slider_pane_t_ParamLimits

0x007b,	// (0x0004fc55) slider_set_pane_ParamLimits

0x0ce3,	// (0x000508bd) control_pane_g5_ParamLimits

0x0ce3,	// (0x000508bd) control_pane_g5

0x643a,	// (0x00056014) slider_set_pane_g1_ParamLimits

0x17e4,	// (0x000513be) slider_set_pane_g2_ParamLimits

0x17f0,	// (0x000513ca) slider_set_pane_g3_ParamLimits

0x1804,	// (0x000513de) slider_set_pane_g4_ParamLimits

0x181c,	// (0x000513f6) slider_set_pane_g5_ParamLimits

0x17f0,	// (0x000513ca) slider_set_pane_g6_ParamLimits

0x1832,	// (0x0005140c) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0005f53e) slider_set_pane_g_ParamLimits

0x46de,	// (0x000542b8) navi_icon_text_pane_ParamLimits

0xd34a,	// (0x0005cf24) aid_fill_nsta_2_ParamLimits

0xd381,	// (0x0005cf5b) aid_touch_tab_arrow_left_ParamLimits

0xd397,	// (0x0005cf71) aid_touch_tab_arrow_right_ParamLimits

0xd432,	// (0x0005d00c) clock_nsta_pane_ParamLimits

0x5f2f,	// (0x00055b09) navi_icon_pane_g1_ParamLimits

0x5f3b,	// (0x00055b15) navi_text_pane_t1_ParamLimits

0x720f,	// (0x00056de9) navi_icon_text_pane_g1_ParamLimits

0x721b,	// (0x00056df5) navi_icon_text_pane_t1_ParamLimits

0xe3a3,	// (0x0005df7d) list_single_hc_apps_pane_g1_ParamLimits

0xd81b,	// (0x0005d3f5) list_single_hc_apps_pane_g2_ParamLimits

0xfcda,	// (0x0005f8b4) list_single_hc_apps_pane_g_ParamLimits

0xd834,	// (0x0005d40e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x36ed,	// (0x000532c7) list_single_hc_apps_pane_t1_ParamLimits

0xb42d,	// (0x0005b007) popup_toolbar2_fixed_window_ParamLimits

0xb42d,	// (0x0005b007) popup_toolbar2_fixed_window

0xc3a5,	// (0x0005bf7f) popup_toolbar2_float_window

0x2b8e,	// (0x00052768) bg_popup_sub_pane_cp27

0x8ae4,	// (0x000586be) grid_toolbar2_float_pane

0x2b8e,	// (0x00052768) bg_popup_sub_pane_cp26

0x8ae4,	// (0x000586be) grid_toolbar2_fixed_pane

0xe3bc,	// (0x0005df96) cell_toolbar2_fixed_pane_ParamLimits

0xe3bc,	// (0x0005df96) cell_toolbar2_fixed_pane

0xe3d6,	// (0x0005dfb0) cell_toolbar2_fixed_pane_g1

0x8b05,	// (0x000586df) toolbar2_fixed_button_pane

0x50b2,	// (0x00054c8c) toolbar2_fixed_button_pane_g1

0x50c2,	// (0x00054c9c) toolbar2_fixed_button_pane_g2

0x50ba,	// (0x00054c94) toolbar2_fixed_button_pane_g3

0x50d2,	// (0x00054cac) toolbar2_fixed_button_pane_g4

0x50ca,	// (0x00054ca4) toolbar2_fixed_button_pane_g5

0x50da,	// (0x00054cb4) toolbar2_fixed_button_pane_g6

0x50e2,	// (0x00054cbc) toolbar2_fixed_button_pane_g7

0x50f2,	// (0x00054ccc) toolbar2_fixed_button_pane_g8

0x50ea,	// (0x00054cc4) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0005f440) toolbar2_fixed_button_pane_g

0x8b0d,	// (0x000586e7) cell_toolbar2_float_pane_ParamLimits

0x8b0d,	// (0x000586e7) cell_toolbar2_float_pane

0x8b1e,	// (0x000586f8) cell_toolbar2_float_pane_g1

0x8b05,	// (0x000586df) toolbar2_fixed_button_pane_cp

0xdea5,	// (0x0005da7f) fep_vkb_accented_list_pane_ParamLimits

0xdea5,	// (0x0005da7f) fep_vkb_accented_list_pane

0x1de2,	// (0x000519bc) bg_popup_fep_shadow_pane_g9

0x485e,	// (0x00054438) bg_popup_fep_shadow_pane_cp3

0x3d1f,	// (0x000538f9) list_accented_list_pane

0x8b27,	// (0x00058701) list_single_accented_list_pane_ParamLimits

0x8b27,	// (0x00058701) list_single_accented_list_pane

0x485e,	// (0x00054438) list_highlight_pane_cp10

0x8b38,	// (0x00058712) list_single_accented_list_pane_t1

0xc2cf,	// (0x0005bea9) popup_slider_window_ParamLimits

0xc2cf,	// (0x0005bea9) popup_slider_window

0x8774,	// (0x0005834e) aid_indentation_list_msg

0xe504,	// (0x0005e0de) bg_popup_window_pane_cp19

0x8c5c,	// (0x00058836) popup_slider_window_g1

0x8c78,	// (0x00058852) popup_slider_window_g2

0x8c94,	// (0x0005886e) popup_slider_window_g3

0x0005,

0xfcdf,	// (0x0005f8b9) popup_slider_window_g

0x8cf0,	// (0x000588ca) popup_slider_window_t1

0x8d64,	// (0x0005893e) small_volume_slider_vertical_pane

0x766b,	// (0x00057245) small_volume_slider_vertical_pane_g1

0x766b,	// (0x00057245) small_volume_slider_vertical_pane_g2

0x8d80,	// (0x0005895a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf1,	// (0x0005f8cb) small_volume_slider_vertical_pane_g

0xb39b,	// (0x0005af75) area_side_right_pane_ParamLimits

0xb39b,	// (0x0005af75) area_side_right_pane

0xc68b,	// (0x0005c265) aid_size_side_button_ParamLimits

0xc68b,	// (0x0005c265) aid_size_side_button

0xc6a4,	// (0x0005c27e) grid_sctrl_middle_pane_ParamLimits

0xc6a4,	// (0x0005c27e) grid_sctrl_middle_pane

0x1fff,	// (0x00051bd9) sctrl_sk_bottom_pane

0x2010,	// (0x00051bea) sctrl_sk_top_pane

0x2022,	// (0x00051bfc) aid_touch_sctrl_top

0x202f,	// (0x00051c09) bg_sctrl_sk_pane_ParamLimits

0x202f,	// (0x00051c09) bg_sctrl_sk_pane

0x203d,	// (0x00051c17) sctrl_sk_top_pane_g1

0x204a,	// (0x00051c24) sctrl_sk_top_pane_t1

0x2022,	// (0x00051bfc) aid_touch_sctrl_bottom

0x202f,	// (0x00051c09) bg_sctrl_sk_pane_cp_ParamLimits

0x202f,	// (0x00051c09) bg_sctrl_sk_pane_cp

0x2065,	// (0x00051c3f) sctrl_sk_bottom_pane_g1

0x204a,	// (0x00051c24) sctrl_sk_bottom_pane_t1

0xc6be,	// (0x0005c298) cell_sctrl_middle_pane_ParamLimits

0xc6be,	// (0x0005c298) cell_sctrl_middle_pane

0xc6cf,	// (0x0005c2a9) aid_touch_sctrl_middle_ParamLimits

0xc6cf,	// (0x0005c2a9) aid_touch_sctrl_middle

0xc6dc,	// (0x0005c2b6) bg_sctrl_middle_pane_ParamLimits

0xc6dc,	// (0x0005c2b6) bg_sctrl_middle_pane

0x26d2,	// (0x000522ac) cell_sctrl_middle_pane_g1_ParamLimits

0x26d2,	// (0x000522ac) cell_sctrl_middle_pane_g1

0xc6ea,	// (0x0005c2c4) cell_sctrl_middle_pane_g2_ParamLimits

0xc6ea,	// (0x0005c2c4) cell_sctrl_middle_pane_g2

0x0001,

0xfcfd,	// (0x0005f8d7) cell_sctrl_middle_pane_g_ParamLimits

0xfcfd,	// (0x0005f8d7) cell_sctrl_middle_pane_g

0x50b2,	// (0x00054c8c) bg_sctrl_middle_pane_g1

0x50ba,	// (0x00054c94) bg_sctrl_middle_pane_g2

0x50c2,	// (0x00054c9c) bg_sctrl_middle_pane_g3

0x50ca,	// (0x00054ca4) bg_sctrl_middle_pane_g4

0x50d2,	// (0x00054cac) bg_sctrl_middle_pane_g5

0x50da,	// (0x00054cb4) bg_sctrl_middle_pane_g6

0x50e2,	// (0x00054cbc) bg_sctrl_middle_pane_g7

0x50ea,	// (0x00054cc4) bg_sctrl_middle_pane_g8

0x0007,

0xfd02,	// (0x0005f8dc) bg_sctrl_middle_pane_g

0x50f2,	// (0x00054ccc) bg_sctrl_middle_pane_g8_copy1

0x50b2,	// (0x00054c8c) bg_sctrl_sk_pane_g1

0x50c2,	// (0x00054c9c) bg_sctrl_sk_pane_g2

0x50ba,	// (0x00054c94) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0005f440) bg_sctrl_sk_pane_g

0x3af7,	// (0x000536d1) aid_size_touch_scroll_bar

0x50d2,	// (0x00054cac) bg_sctrl_sk_pane_g4

0x50ca,	// (0x00054ca4) bg_sctrl_sk_pane_g5

0x50da,	// (0x00054cb4) bg_sctrl_sk_pane_g6

0x50e2,	// (0x00054cbc) bg_sctrl_sk_pane_g7

0x50f2,	// (0x00054ccc) bg_sctrl_sk_pane_g8

0x50ea,	// (0x00054cc4) bg_sctrl_sk_pane_g9

0x0ea1,	// (0x00050a7b) popup_fep_china_hwr2_fs_candidate_window

0xbde9,	// (0x0005b9c3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbde9,	// (0x0005b9c3) popup_fep_china_hwr2_fs_control_window

0x1e02,	// (0x000519dc) sctrl_sk_top_pane_g2

0x0001,

0xfcf8,	// (0x0005f8d2) sctrl_sk_top_pane_g

0xe5bc,	// (0x0005e196) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe5bc,	// (0x0005e196) aid_fep_china_hwr2_fs_cell

0xe5d0,	// (0x0005e1aa) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe5d0,	// (0x0005e1aa) bg_popup_fep_shadow_pane_cp4

0xe5e7,	// (0x0005e1c1) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe5e7,	// (0x0005e1c1) bg_popup_fep_shadow_pane_cp5

0xe5f9,	// (0x0005e1d3) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe5f9,	// (0x0005e1d3) popup_fep_china_hwr2_fs_control_bar_grid

0xe60d,	// (0x0005e1e7) popup_fep_china_hwr2_fs_control_funtion_grid

0x8ddc,	// (0x000589b6) aid_fep_china_hwr2_fs_candi_cell

0x2b8e,	// (0x00052768) bg_popup_fep_shadow_pane_cp6

0x8de6,	// (0x000589c0) popup_fep_china_hwr2_fs_candidate_grid

0xe615,	// (0x0005e1ef) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe615,	// (0x0005e1ef) cell_fep_china_hwr2_fs_funtion_grid

0x766b,	// (0x00057245) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8e08,	// (0x000589e2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8e08,	// (0x000589e2) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8e16,	// (0x000589f0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8e16,	// (0x000589f0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd13,	// (0x0005f8ed) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd13,	// (0x0005f8ed) cell_fep_china_hwr2_fs_funtion_grid_g

0xe62d,	// (0x0005e207) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe62d,	// (0x0005e207) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe642,	// (0x0005e21c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe642,	// (0x0005e21c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd18,	// (0x0005f8f2) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd18,	// (0x0005f8f2) cell_fep_china_hwr2_fs_funtion_grid_t

0x8e5d,	// (0x00058a37) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8e65,	// (0x00058a3f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8e6d,	// (0x00058a47) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1d,	// (0x0005f8f7) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8e75,	// (0x00058a4f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8e75,	// (0x00058a4f) cell_fep_china_hwr2_fs_candidate_grid

0x8e8e,	// (0x00058a68) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8e96,	// (0x00058a70) popup_fep_china_hwr2_fs_candidate_grid_g21

0x766b,	// (0x00057245) cell_fep_china_hwr2_fs_candidate_grid_g1

0x766b,	// (0x00057245) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0005f70b) cell_fep_china_hwr2_fs_candidate_grid_g

0x8e9e,	// (0x00058a78) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4c9c,	// (0x00054876) clock_nsta_pane_cp_24_ParamLimits

0x4c9c,	// (0x00054876) clock_nsta_pane_cp_24

0x4d1a,	// (0x000548f4) indicator_nsta_pane_cp_24_ParamLimits

0x4d1a,	// (0x000548f4) indicator_nsta_pane_cp_24

0x5dab,	// (0x00055985) heading_pane_g1

0x0001,

0xf8cb,	// (0x0005f4a5) heading_pane_g

0x679a,	// (0x00056374) grid_sct_catagory_button_pane

0x67ca,	// (0x000563a4) scroll_pane_cp5_ParamLimits

0x725d,	// (0x00056e37) button_value_adjust_pane_cp5_ParamLimits

0x725d,	// (0x00056e37) button_value_adjust_pane_cp5

0x733c,	// (0x00056f16) form2_midp_time_pane_ParamLimits

0x8eac,	// (0x00058a86) cell_sct_catagory_button_pane_ParamLimits

0x8eac,	// (0x00058a86) cell_sct_catagory_button_pane

0x7630,	// (0x0005720a) bg_button_pane_cp01_ParamLimits

0x7630,	// (0x0005720a) bg_button_pane_cp01

0x766b,	// (0x00057245) cell_sct_catagory_button_pane_g1

0xc348,	// (0x0005bf22) popup_tb_extension_window

0xe65e,	// (0x0005e238) aid_size_cell_ext_ParamLimits

0xe65e,	// (0x0005e238) aid_size_cell_ext

0x3939,	// (0x00053513) bg_tb_trans_pane_cp1_ParamLimits

0x3939,	// (0x00053513) bg_tb_trans_pane_cp1

0xe684,	// (0x0005e25e) grid_tb_ext_pane_ParamLimits

0xe684,	// (0x0005e25e) grid_tb_ext_pane

0xe6bf,	// (0x0005e299) cell_tb_ext_pane_ParamLimits

0xe6bf,	// (0x0005e299) cell_tb_ext_pane

0xe6e7,	// (0x0005e2c1) cell_tb_ext_pane_g1_ParamLimits

0xe6e7,	// (0x0005e2c1) cell_tb_ext_pane_g1

0x8f40,	// (0x00058b1a) cell_tb_ext_pane_t1

0x2f0b,	// (0x00052ae5) list_highlight_pane_cp11_ParamLimits

0x2f0b,	// (0x00052ae5) list_highlight_pane_cp11

0xb442,	// (0x0005b01c) popup_uni_indicator_window_ParamLimits

0xb442,	// (0x0005b01c) popup_uni_indicator_window

0x3bd4,	// (0x000537ae) bg_popup_sub_pane_cp14

0x8f5b,	// (0x00058b35) list_uniindi_pane

0x8f67,	// (0x00058b41) uniindi_top_pane

0x2f0b,	// (0x00052ae5) bg_uniindi_top_pane

0x8f86,	// (0x00058b60) uniindi_top_pane_g1

0x8f9c,	// (0x00058b76) uniindi_top_pane_g2

0x0003,

0xfd24,	// (0x0005f8fe) uniindi_top_pane_g

0x8fc6,	// (0x00058ba0) uniindi_top_pane_t1

0x8ff0,	// (0x00058bca) list_single_uniindi_pane_ParamLimits

0x8ff0,	// (0x00058bca) list_single_uniindi_pane

0x766b,	// (0x00057245) bg_uniindi_top_pane_g1

0x9003,	// (0x00058bdd) list_single_uniindi_pane_g1

0x9016,	// (0x00058bf0) list_single_uniindi_pane_t1

0xf43b,	// (0x0005f015) control_bg_pane

0x903b,	// (0x00058c15) bg_sctrl_sk_pane_cp1

0x9044,	// (0x00058c1e) bg_sctrl_sk_pane_cp2

0x904d,	// (0x00058c27) control_bg_pane_g1

0x9056,	// (0x00058c30) control_bg_pane_g2

0x0001,

0xfd2d,	// (0x0005f907) control_bg_pane_g

0x70a7,	// (0x00056c81) cell_indicator_nsta_pane_g1_ParamLimits

0xdd30,	// (0x0005d90a) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0005f66f) cell_indicator_nsta_pane_g_ParamLimits

0x33ad,	// (0x00052f87) form2_midp_time_pane_t1_ParamLimits

0x1b9d,	// (0x00051777) main_idle_act4_pane_ParamLimits

0x1b9d,	// (0x00051777) main_idle_act4_pane

0xc348,	// (0x0005bf22) popup_tb_extension_window_ParamLimits

0xe6a6,	// (0x0005e280) tb_ext_find_pane_ParamLimits

0xe6a6,	// (0x0005e280) tb_ext_find_pane

0x905f,	// (0x00058c39) ai_gene_pane_1_cp1

0x4999,	// (0x00054573) ai_gene_pane_2_cp1

0x9067,	// (0x00058c41) list_single_idle_plugin_calendar_pane

0x9070,	// (0x00058c4a) list_single_idle_plugin_notification_pane

0x9079,	// (0x00058c53) list_single_idle_plugin_player_pane

0xe704,	// (0x0005e2de) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe704,	// (0x0005e2de) list_single_idle_plugin_shortcut_pane

0xe72c,	// (0x0005e306) main_idle_act4_pane_t1

0xe742,	// (0x0005e31c) main_idle_act4_pane_t2

0x0001,

0xfd32,	// (0x0005f90c) main_idle_act4_pane_t

0xe758,	// (0x0005e332) middle_sk_idle_act4_pane_ParamLimits

0xe758,	// (0x0005e332) middle_sk_idle_act4_pane

0xe774,	// (0x0005e34e) popup_clock_digital_analogue_window_cp2

0xe79c,	// (0x0005e376) shortcut_wheel_idle_act4_pane_ParamLimits

0xe79c,	// (0x0005e376) shortcut_wheel_idle_act4_pane

0x766b,	// (0x00057245) shortcut_wheel_idle_act4_pane_g1

0x766b,	// (0x00057245) shortcut_wheel_idle_act4_pane_g2

0x766b,	// (0x00057245) shortcut_wheel_idle_act4_pane_g3

0x766b,	// (0x00057245) shortcut_wheel_idle_act4_pane_g4

0x766b,	// (0x00057245) shortcut_wheel_idle_act4_pane_g5

0x910c,	// (0x00058ce6) shortcut_wheel_idle_act4_pane_g6

0x9114,	// (0x00058cee) shortcut_wheel_idle_act4_pane_g7

0x911c,	// (0x00058cf6) shortcut_wheel_idle_act4_pane_g8

0x9124,	// (0x00058cfe) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd37,	// (0x0005f911) shortcut_wheel_idle_act4_pane_g

0xe3df,	// (0x0005dfb9) middle_sk_idle_act4_pane_g1_ParamLimits

0xe3df,	// (0x0005dfb9) middle_sk_idle_act4_pane_g1

0xe819,	// (0x0005e3f3) middle_sk_idle_act4_pane_g2_ParamLimits

0xe819,	// (0x0005e3f3) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5a,	// (0x0005f934) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5a,	// (0x0005f934) middle_sk_idle_act4_pane_g

0xe831,	// (0x0005e40b) middle_sk_idle_act4_pane_t1_ParamLimits

0xe831,	// (0x0005e40b) middle_sk_idle_act4_pane_t1

0xe860,	// (0x0005e43a) grid_ai_shortcut_pane_ParamLimits

0xe860,	// (0x0005e43a) grid_ai_shortcut_pane

0xe87d,	// (0x0005e457) list_highlight_pane_cp16_ParamLimits

0xe87d,	// (0x0005e457) list_highlight_pane_cp16

0xe88a,	// (0x0005e464) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe88a,	// (0x0005e464) list_single_idle_plugin_shortcut_pane_g1

0xe896,	// (0x0005e470) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe896,	// (0x0005e470) list_single_idle_plugin_shortcut_pane_g2

0xe8b2,	// (0x0005e48c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe8b2,	// (0x0005e48c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5f,	// (0x0005f939) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5f,	// (0x0005f939) list_single_idle_plugin_shortcut_pane_g

0xe8c7,	// (0x0005e4a1) cell_ai_shortcut_pane_ParamLimits

0xe8c7,	// (0x0005e4a1) cell_ai_shortcut_pane

0xe8dd,	// (0x0005e4b7) cell_ai_shortcut_pane_g1_ParamLimits

0xe8dd,	// (0x0005e4b7) cell_ai_shortcut_pane_g1

0x905f,	// (0x00058c39) ai_gene_pane_1_cp2

0x9254,	// (0x00058e2e) ai_gene_pane_2_cp2

0x925c,	// (0x00058e36) list_highlight_pane_cp15

0x9265,	// (0x00058e3f) list_single_idle_plugin_calendar_pane_g1

0x925c,	// (0x00058e36) list_highlight_pane_cp17

0x926d,	// (0x00058e47) list_single_idle_plugin_calendar_pane_g1_copy1

0x9275,	// (0x00058e4f) list_single_idle_plugin_player_pane_g1

0x69f3,	// (0x000565cd) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd66,	// (0x0005f940) list_single_idle_plugin_player_pane_g

0x927d,	// (0x00058e57) list_single_idle_plugin_player_pane_t1

0x928b,	// (0x00058e65) list_single_idle_plugin_player_pane_t2

0x9299,	// (0x00058e73) list_single_idle_plugin_player_pane_t3

0x92a7,	// (0x00058e81) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6b,	// (0x0005f945) list_single_idle_plugin_player_pane_t

0x92b5,	// (0x00058e8f) wait_bar_pane_cp15

0x92bd,	// (0x00058e97) grid_ai_notification_pane

0x69f3,	// (0x000565cd) list_single_idle_plugin_notification_pane_g1

0xe8ff,	// (0x0005e4d9) cell_ai_notification_pane_ParamLimits

0xe8ff,	// (0x0005e4d9) cell_ai_notification_pane

0x92d3,	// (0x00058ead) cell_ai_notification_pane_g1

0x92db,	// (0x00058eb5) cell_ai_notification_pane_t1

0xe90c,	// (0x0005e4e6) tb_ext_find_button_pane

0xe914,	// (0x0005e4ee) tb_ext_find_pane_g1

0xe91c,	// (0x0005e4f6) tb_ext_find_pane_t1

0x424b,	// (0x00053e25) tb_ext_find_button_pane_g1

0x9307,	// (0x00058ee1) tb_ext_find_button_pane_g2

0x0001,

0xfd74,	// (0x0005f94e) tb_ext_find_button_pane_g

0xe72c,	// (0x0005e306) main_idle_act4_pane_t1_ParamLimits

0xe742,	// (0x0005e31c) main_idle_act4_pane_t2_ParamLimits

0xfd32,	// (0x0005f90c) main_idle_act4_pane_t_ParamLimits

0xe774,	// (0x0005e34e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe78c,	// (0x0005e366) sat_plugin_idle_act4_pane_ParamLimits

0xe78c,	// (0x0005e366) sat_plugin_idle_act4_pane

0xe92a,	// (0x0005e504) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe92a,	// (0x0005e504) sat_plugin_idle_act4_pane_t1

0xe942,	// (0x0005e51c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe942,	// (0x0005e51c) sat_plugin_idle_act4_pane_t2

0xe95a,	// (0x0005e534) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe95a,	// (0x0005e534) sat_plugin_idle_act4_pane_t3

0xe972,	// (0x0005e54c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe972,	// (0x0005e54c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd79,	// (0x0005f953) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd79,	// (0x0005f953) sat_plugin_idle_act4_pane_t

0xf500,	// (0x0005f0da) popup_battery_window_ParamLimits

0xf500,	// (0x0005f0da) popup_battery_window

0x2f0b,	// (0x00052ae5) bg_popup_sub_pane_cp25_ParamLimits

0x2f0b,	// (0x00052ae5) bg_popup_sub_pane_cp25

0x935c,	// (0x00058f36) popup_battery_window_g1_ParamLimits

0x935c,	// (0x00058f36) popup_battery_window_g1

0x9368,	// (0x00058f42) popup_battery_window_t1_ParamLimits

0x9368,	// (0x00058f42) popup_battery_window_t1

0x937a,	// (0x00058f54) popup_battery_window_t2_ParamLimits

0x937a,	// (0x00058f54) popup_battery_window_t2

0x0001,

0xfd82,	// (0x0005f95c) popup_battery_window_t_ParamLimits

0xfd82,	// (0x0005f95c) popup_battery_window_t

0xd1ad,	// (0x0005cd87) midp_canvas_pane_ParamLimits

0xd20a,	// (0x0005cde4) midp_keypad_pane_ParamLimits

0xd20a,	// (0x0005cde4) midp_keypad_pane

0x4b9c,	// (0x00054776) main_midp_pane_ParamLimits

0x7121,	// (0x00056cfb) signal_pane_g2_cp_ParamLimits

0xe98a,	// (0x0005e564) aid_size_cell_midp_keypad_ParamLimits

0xe98a,	// (0x0005e564) aid_size_cell_midp_keypad

0xe9a8,	// (0x0005e582) midp_keyp_game_grid_pane_ParamLimits

0xe9a8,	// (0x0005e582) midp_keyp_game_grid_pane

0xe9cf,	// (0x0005e5a9) midp_keyp_rocker_pane_ParamLimits

0xe9cf,	// (0x0005e5a9) midp_keyp_rocker_pane

0xea20,	// (0x0005e5fa) midp_keyp_sk_left_pane_ParamLimits

0xea20,	// (0x0005e5fa) midp_keyp_sk_left_pane

0xea74,	// (0x0005e64e) midp_keyp_sk_right_pane_ParamLimits

0xea74,	// (0x0005e64e) midp_keyp_sk_right_pane

0x2b8e,	// (0x00052768) bg_button_pane_cp03

0xeac8,	// (0x0005e6a2) midp_keyp_sk_left_pane_g1

0x2b8e,	// (0x00052768) bg_button_pane_cp04

0xeac8,	// (0x0005e6a2) midp_keyp_sk_right_pane_g1

0x766b,	// (0x00057245) midp_keyp_rocker_pane_g1

0xead1,	// (0x0005e6ab) keyp_game_cell_pane_ParamLimits

0xead1,	// (0x0005e6ab) keyp_game_cell_pane

0x2b8e,	// (0x00052768) bg_button_pane_cp02

0xeaf5,	// (0x0005e6cf) keyp_game_cell_pane_g1

0xb3dd,	// (0x0005afb7) popup_fep_vkb2_window_ParamLimits

0xb3dd,	// (0x0005afb7) popup_fep_vkb2_window

0xc6f6,	// (0x0005c2d0) aid_size_cell_vkb2_ParamLimits

0xc6f6,	// (0x0005c2d0) aid_size_cell_vkb2

0xc72c,	// (0x0005c306) popup_fep_vkb2_window_g1_ParamLimits

0xc72c,	// (0x0005c306) popup_fep_vkb2_window_g1

0xc77c,	// (0x0005c356) vkb2_area_bottom_pane_ParamLimits

0xc77c,	// (0x0005c356) vkb2_area_bottom_pane

0xc7d0,	// (0x0005c3aa) vkb2_area_keypad_pane_ParamLimits

0xc7d0,	// (0x0005c3aa) vkb2_area_keypad_pane

0xc818,	// (0x0005c3f2) vkb2_area_top_pane_ParamLimits

0xc818,	// (0x0005c3f2) vkb2_area_top_pane

0xc89e,	// (0x0005c478) vkb2_top_entry_pane_ParamLimits

0xc89e,	// (0x0005c478) vkb2_top_entry_pane

0xc8cb,	// (0x0005c4a5) vkb2_top_grid_left_pane_ParamLimits

0xc8cb,	// (0x0005c4a5) vkb2_top_grid_left_pane

0xc8eb,	// (0x0005c4c5) vkb2_top_grid_right_pane_ParamLimits

0xc8eb,	// (0x0005c4c5) vkb2_top_grid_right_pane

0x22d1,	// (0x00051eab) vkb2_cell_keypad_pane_ParamLimits

0x22d1,	// (0x00051eab) vkb2_cell_keypad_pane

0xc931,	// (0x0005c50b) vkb2_area_bottom_grid_pane_ParamLimits

0xc931,	// (0x0005c50b) vkb2_area_bottom_grid_pane

0xc95b,	// (0x0005c535) vkb2_area_bottom_pane_g1_ParamLimits

0xc95b,	// (0x0005c535) vkb2_area_bottom_pane_g1

0xc981,	// (0x0005c55b) vkb2_area_bottom_pane_g2_ParamLimits

0xc981,	// (0x0005c55b) vkb2_area_bottom_pane_g2

0xc9b2,	// (0x0005c58c) vkb2_area_bottom_pane_g3_ParamLimits

0xc9b2,	// (0x0005c58c) vkb2_area_bottom_pane_g3

0x0002,

0xfd87,	// (0x0005f961) vkb2_area_bottom_pane_g_ParamLimits

0xfd87,	// (0x0005f961) vkb2_area_bottom_pane_g

0x247b,	// (0x00052055) vkb2_top_cell_left_pane_ParamLimits

0x247b,	// (0x00052055) vkb2_top_cell_left_pane

0xeafe,	// (0x0005e6d8) vkb2_top_entry_pane_g1_ParamLimits

0xeafe,	// (0x0005e6d8) vkb2_top_entry_pane_g1

0xeb0c,	// (0x0005e6e6) vkb2_top_entry_pane_t1_ParamLimits

0xeb0c,	// (0x0005e6e6) vkb2_top_entry_pane_t1

0x954c,	// (0x00059126) vkb2_top_entry_pane_t2_ParamLimits

0x954c,	// (0x00059126) vkb2_top_entry_pane_t2

0x957e,	// (0x00059158) vkb2_top_entry_pane_t3_ParamLimits

0x957e,	// (0x00059158) vkb2_top_entry_pane_t3

0x0002,

0xfd8e,	// (0x0005f968) vkb2_top_entry_pane_t_ParamLimits

0xfd8e,	// (0x0005f968) vkb2_top_entry_pane_t

0xca1c,	// (0x0005c5f6) vkb2_top_grid_right_pane_g1_ParamLimits

0xca1c,	// (0x0005c5f6) vkb2_top_grid_right_pane_g1

0x24de,	// (0x000520b8) vkb2_top_grid_right_pane_g2_ParamLimits

0x24de,	// (0x000520b8) vkb2_top_grid_right_pane_g2

0x24f6,	// (0x000520d0) vkb2_top_grid_right_pane_g3_ParamLimits

0x24f6,	// (0x000520d0) vkb2_top_grid_right_pane_g3

0xca32,	// (0x0005c60c) vkb2_top_grid_right_pane_g4_ParamLimits

0xca32,	// (0x0005c60c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd95,	// (0x0005f96f) vkb2_top_grid_right_pane_g_ParamLimits

0xfd95,	// (0x0005f96f) vkb2_top_grid_right_pane_g

0x2524,	// (0x000520fe) vkb2_top_cell_left_pane_g1

0x253b,	// (0x00052115) vkb2_cell_keypad_pane_g1_ParamLimits

0x253b,	// (0x00052115) vkb2_cell_keypad_pane_g1

0x95a2,	// (0x0005917c) vkb2_cell_keypad_pane_t1_ParamLimits

0x95a2,	// (0x0005917c) vkb2_cell_keypad_pane_t1

0x2549,	// (0x00052123) vkb2_cell_bottom_grid_pane_ParamLimits

0x2549,	// (0x00052123) vkb2_cell_bottom_grid_pane

0x2582,	// (0x0005215c) vkb2_cell_bottom_grid_pane_g1

0xe7bd,	// (0x0005e397) aid_call2_pane_cp02

0xe7c5,	// (0x0005e39f) aid_call_pane_cp02

0xe7cd,	// (0x0005e3a7) clock_digital_number_pane_cp10

0xe7d5,	// (0x0005e3af) clock_digital_number_pane_cp11

0xe7dd,	// (0x0005e3b7) clock_digital_number_pane_cp12

0xe7e5,	// (0x0005e3bf) clock_digital_number_pane_cp13

0xe7ed,	// (0x0005e3c7) clock_digital_separator_pane_cp10

0x424b,	// (0x00053e25) popup_clock_digital_analogue_window_cp2_g1

0x424b,	// (0x00053e25) popup_clock_digital_analogue_window_cp2_g2

0xe7f5,	// (0x0005e3cf) popup_clock_digital_analogue_window_cp2_g3

0x424b,	// (0x00053e25) popup_clock_digital_analogue_window_cp2_g4

0xe7f5,	// (0x0005e3cf) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4a,	// (0x0005f924) popup_clock_digital_analogue_window_cp2_g

0xe7fd,	// (0x0005e3d7) popup_clock_digital_analogue_window_cp2_t1

0xe80b,	// (0x0005e3e5) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd55,	// (0x0005f92f) popup_clock_digital_analogue_window_cp2_t

0x766b,	// (0x00057245) clock_digital_number_pane_cp10_g1

0x766b,	// (0x00057245) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0005f70b) clock_digital_number_pane_cp10_g

0x766b,	// (0x00057245) clock_digital_separator_pane_cp10_g1

0x766b,	// (0x00057245) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0005f70b) clock_digital_separator_pane_cp10_g

0x8fa8,	// (0x00058b82) uniindi_top_pane_g3

0x8fb9,	// (0x00058b93) uniindi_top_pane_g4

0x235c,	// (0x00051f36) vkb2_row_keypad_pane_ParamLimits

0x235c,	// (0x00051f36) vkb2_row_keypad_pane

0x259e,	// (0x00052178) vkb2_cell_t_keypad_pane_ParamLimits

0x259e,	// (0x00052178) vkb2_cell_t_keypad_pane

0x25ae,	// (0x00052188) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x25ae,	// (0x00052188) vkb2_cell_t_keypad_pane_cp08

0x25c1,	// (0x0005219b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x25c1,	// (0x0005219b) vkb2_cell_t_keypad_pane_cp09

0x25d5,	// (0x000521af) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x25d5,	// (0x000521af) vkb2_cell_t_keypad_pane_cp01

0x25e6,	// (0x000521c0) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x25e6,	// (0x000521c0) vkb2_cell_t_keypad_pane_cp02

0x25f7,	// (0x000521d1) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x25f7,	// (0x000521d1) vkb2_cell_t_keypad_pane_cp03

0x2608,	// (0x000521e2) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2608,	// (0x000521e2) vkb2_cell_t_keypad_pane_cp04

0x2619,	// (0x000521f3) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2619,	// (0x000521f3) vkb2_cell_t_keypad_pane_cp05

0x262a,	// (0x00052204) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x262a,	// (0x00052204) vkb2_cell_t_keypad_pane_cp06

0x263b,	// (0x00052215) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x263b,	// (0x00052215) vkb2_cell_t_keypad_pane_cp07

0x264c,	// (0x00052226) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x264c,	// (0x00052226) vkb2_cell_t_keypad_pane_cp10

0x1e02,	// (0x000519dc) vkb2_cell_t_keypad_pane_g1

0x95b9,	// (0x00059193) vkb2_cell_t_keypad_pane_t1

0xf43b,	// (0x0005f015) popup_grid_graphic2_window

0xeb45,	// (0x0005e71f) aid_size_cell_graphic2_ParamLimits

0xeb45,	// (0x0005e71f) aid_size_cell_graphic2

0xeb83,	// (0x0005e75d) bg_popup_window_pane_cp21_ParamLimits

0xeb83,	// (0x0005e75d) bg_popup_window_pane_cp21

0xeb91,	// (0x0005e76b) graphic2_pages_pane_ParamLimits

0xeb91,	// (0x0005e76b) graphic2_pages_pane

0xebe7,	// (0x0005e7c1) grid_graphic2_control_pane_ParamLimits

0xebe7,	// (0x0005e7c1) grid_graphic2_control_pane

0xec2f,	// (0x0005e809) grid_graphic2_pane_ParamLimits

0xec2f,	// (0x0005e809) grid_graphic2_pane

0xecb6,	// (0x0005e890) cell_graphic2_pane

0xf43b,	// (0x0005f015) main_comp_mode_pane

0x8828,	// (0x00058402) list_ai3_gene_pane_ParamLimits

0xe504,	// (0x0005e0de) bg_popup_window_pane_cp19_ParamLimits

0x8bfe,	// (0x000587d8) bg_touch_area_indi_pane_ParamLimits

0x8bfe,	// (0x000587d8) bg_touch_area_indi_pane

0x8c14,	// (0x000587ee) bg_touch_area_indi_pane_cp01_ParamLimits

0x8c14,	// (0x000587ee) bg_touch_area_indi_pane_cp01

0x8c2a,	// (0x00058804) bg_touch_area_indi_pane_cp02_ParamLimits

0x8c2a,	// (0x00058804) bg_touch_area_indi_pane_cp02

0x8c42,	// (0x0005881c) bg_touch_area_indi_pane_cp03_ParamLimits

0x8c42,	// (0x0005881c) bg_touch_area_indi_pane_cp03

0x8c5c,	// (0x00058836) popup_slider_window_g1_ParamLimits

0x8c78,	// (0x00058852) popup_slider_window_g2_ParamLimits

0x8c94,	// (0x0005886e) popup_slider_window_g3_ParamLimits

0xfcdf,	// (0x0005f8b9) popup_slider_window_g_ParamLimits

0x8cf0,	// (0x000588ca) popup_slider_window_t1_ParamLimits

0x8d64,	// (0x0005893e) small_volume_slider_vertical_pane_ParamLimits

0xecb6,	// (0x0005e890) cell_graphic2_pane_ParamLimits

0xed13,	// (0x0005e8ed) bg_button_pane_cp10_ParamLimits

0xed13,	// (0x0005e8ed) bg_button_pane_cp10

0xed26,	// (0x0005e900) bg_button_pane_cp11_ParamLimits

0xed26,	// (0x0005e900) bg_button_pane_cp11

0xed39,	// (0x0005e913) graphic2_pages_pane_g1_ParamLimits

0xed39,	// (0x0005e913) graphic2_pages_pane_g1

0xed54,	// (0x0005e92e) graphic2_pages_pane_g2_ParamLimits

0xed54,	// (0x0005e92e) graphic2_pages_pane_g2

0x0001,

0xfda3,	// (0x0005f97d) graphic2_pages_pane_g_ParamLimits

0xfda3,	// (0x0005f97d) graphic2_pages_pane_g

0xed6c,	// (0x0005e946) graphic2_pages_pane_t1_ParamLimits

0xed6c,	// (0x0005e946) graphic2_pages_pane_t1

0xed84,	// (0x0005e95e) cell_graphic2_control_pane_ParamLimits

0xed84,	// (0x0005e95e) cell_graphic2_control_pane

0xedb6,	// (0x0005e990) cell_graphic2_pane_g1_ParamLimits

0xedb6,	// (0x0005e990) cell_graphic2_pane_g1

0xe3ed,	// (0x0005dfc7) cell_graphic2_pane_g2_ParamLimits

0xe3ed,	// (0x0005dfc7) cell_graphic2_pane_g2

0xe407,	// (0x0005dfe1) cell_graphic2_pane_g3_ParamLimits

0xe407,	// (0x0005dfe1) cell_graphic2_pane_g3

0xe3fa,	// (0x0005dfd4) cell_graphic2_pane_g4_ParamLimits

0xe3fa,	// (0x0005dfd4) cell_graphic2_pane_g4

0xedc3,	// (0x0005e99d) cell_graphic2_pane_g5_ParamLimits

0xedc3,	// (0x0005e99d) cell_graphic2_pane_g5

0x0004,

0xfda8,	// (0x0005f982) cell_graphic2_pane_g_ParamLimits

0xfda8,	// (0x0005f982) cell_graphic2_pane_g

0xede3,	// (0x0005e9bd) cell_graphic2_pane_t1_ParamLimits

0xede3,	// (0x0005e9bd) cell_graphic2_pane_t1

0x5d9f,	// (0x00055979) grid_highlight_pane_cp11_ParamLimits

0x5d9f,	// (0x00055979) grid_highlight_pane_cp11

0x2f0b,	// (0x00052ae5) bg_button_pane_cp05

0xee18,	// (0x0005e9f2) cell_graphic2_control_pane_g1

0x766b,	// (0x00057245) bg_touch_area_indi_pane_g1

0x9889,	// (0x00059463) aid_cmod_rocker_key_size

0x9893,	// (0x0005946d) aid_cmode_itu_key_size

0x989d,	// (0x00059477) main_cmode_video_pane

0x98a7,	// (0x00059481) main_comp_mode_itu_pane

0x98b3,	// (0x0005948d) main_comp_mode_rocker_pane

0x98bf,	// (0x00059499) cell_cmode_rocker_pane_ParamLimits

0x98bf,	// (0x00059499) cell_cmode_rocker_pane

0x98d1,	// (0x000594ab) cell_cmode_itu_pane_ParamLimits

0x98d1,	// (0x000594ab) cell_cmode_itu_pane

0x3bd4,	// (0x000537ae) bg_button_pane_cp06_ParamLimits

0x3bd4,	// (0x000537ae) bg_button_pane_cp06

0x78e9,	// (0x000574c3) cell_cmode_rocker_pane_g1_ParamLimits

0x78e9,	// (0x000574c3) cell_cmode_rocker_pane_g1

0x8e08,	// (0x000589e2) cell_cmode_rocker_pane_g2_ParamLimits

0x8e08,	// (0x000589e2) cell_cmode_rocker_pane_g2

0x0001,

0xfdb8,	// (0x0005f992) cell_cmode_rocker_pane_g_ParamLimits

0xfdb8,	// (0x0005f992) cell_cmode_rocker_pane_g

0x2b8e,	// (0x00052768) bg_button_pane_cp07

0x98e6,	// (0x000594c0) cell_cmode_itu_pane_g1

0x98ef,	// (0x000594c9) cell_cmode_itu_pane_t1

0x98fd,	// (0x000594d7) cell_cmode_itu_pane_t2

0x0001,

0xfdbd,	// (0x0005f997) cell_cmode_itu_pane_t

0x902b,	// (0x00058c05) aid_touch_ctrl_left

0x9033,	// (0x00058c0d) aid_touch_ctrl_right

0x2b8e,	// (0x00052768) compa_mode_pane

0xee3e,	// (0x0005ea18) aid_cmod_rocker_key_size_cp

0xee48,	// (0x0005ea22) aid_cmode_itu_key_size_cp

0x991f,	// (0x000594f9) compa_mode_pane_g1

0x9927,	// (0x00059501) compa_mode_pane_g2

0x992f,	// (0x00059509) compa_mode_pane_g3

0x0002,

0xfdc2,	// (0x0005f99c) compa_mode_pane_g

0xee52,	// (0x0005ea2c) main_comp_mode_itu_pane_cp

0xee5a,	// (0x0005ea34) main_comp_mode_rocker_pane_cp

0xee62,	// (0x0005ea3c) cell_cmode_itu_pane_cp_ParamLimits

0xee62,	// (0x0005ea3c) cell_cmode_itu_pane_cp

0xee77,	// (0x0005ea51) cell_cmode_rocker_pane_cp_ParamLimits

0xee77,	// (0x0005ea51) cell_cmode_rocker_pane_cp

0x3bd4,	// (0x000537ae) bg_button_pane_cp06_cp_ParamLimits

0x3bd4,	// (0x000537ae) bg_button_pane_cp06_cp

0x78e9,	// (0x000574c3) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x78e9,	// (0x000574c3) cell_cmode_rocker_pane_g1_cp

0x766b,	// (0x00057245) cell_cmode_rocker_pane_g2_cp

0x2b8e,	// (0x00052768) bg_button_pane_cp07_cp

0xee89,	// (0x0005ea63) cell_cmode_itu_pane_g1_cp

0xee92,	// (0x0005ea6c) cell_cmode_itu_pane_t1_cp

0xee92,	// (0x0005ea6c) cell_cmode_itu_pane_t2_cp

0xdb43,	// (0x0005d71d) settings_code_pane_cp2

0x2c82,	// (0x0005285c) bg_popup_window_pane_cp3_ParamLimits

0x37bc,	// (0x00053396) heading_pane_cp3_ParamLimits

0x37c8,	// (0x000533a2) listscroll_popup_graphic_pane_ParamLimits

0x1bab,	// (0x00051785) fep_hwr_aid_pane_ParamLimits

0x2022,	// (0x00051bfc) aid_touch_sctrl_top_ParamLimits

0x203d,	// (0x00051c17) sctrl_sk_top_pane_g1_ParamLimits

0x1e02,	// (0x000519dc) sctrl_sk_top_pane_g2_ParamLimits

0xfcf8,	// (0x0005f8d2) sctrl_sk_top_pane_g_ParamLimits

0x204a,	// (0x00051c24) sctrl_sk_top_pane_t1_ParamLimits

0x2022,	// (0x00051bfc) aid_touch_sctrl_bottom_ParamLimits

0x204a,	// (0x00051c24) sctrl_sk_bottom_pane_t1_ParamLimits

0x8f74,	// (0x00058b4e) aid_area_touch_clock

0xc860,	// (0x0005c43a) aid_vkb2_area_top_pane_cell_ParamLimits

0xc860,	// (0x0005c43a) aid_vkb2_area_top_pane_cell

0xc90b,	// (0x0005c4e5) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc90b,	// (0x0005c4e5) aid_vkb2_area_bottom_pane_cell

0x9504,	// (0x000590de) popup_char_count_window

0x997c,	// (0x00059556) popup_char_count_window_g1

0x9985,	// (0x0005955f) popup_char_count_window_g2

0x998e,	// (0x00059568) popup_char_count_window_g3

0x0002,

0xfdc9,	// (0x0005f9a3) popup_char_count_window_g

0x9997,	// (0x00059571) popup_char_count_window_t1

0x20f9,	// (0x00051cd3) popup_fep_char_preview_window_ParamLimits

0x20f9,	// (0x00051cd3) popup_fep_char_preview_window

0xc880,	// (0x0005c45a) vkb2_top_candi_pane_ParamLimits

0xc880,	// (0x0005c45a) vkb2_top_candi_pane

0xeea0,	// (0x0005ea7a) cell_vkb2_top_candi_pane_ParamLimits

0xeea0,	// (0x0005ea7a) cell_vkb2_top_candi_pane

0x2661,	// (0x0005223b) bg_popup_fep_char_preview_window_ParamLimits

0x2661,	// (0x0005223b) bg_popup_fep_char_preview_window

0x266f,	// (0x00052249) popup_fep_char_preview_window_t1_ParamLimits

0x266f,	// (0x00052249) popup_fep_char_preview_window_t1

0x99f2,	// (0x000595cc) bg_popup_fep_char_preview_window_g1

0x99fa,	// (0x000595d4) bg_popup_fep_char_preview_window_g2

0x9a02,	// (0x000595dc) bg_popup_fep_char_preview_window_g3

0x9a0a,	// (0x000595e4) bg_popup_fep_char_preview_window_g4

0x9a12,	// (0x000595ec) bg_popup_fep_char_preview_window_g5

0x26a9,	// (0x00052283) bg_popup_fep_char_preview_window_g6

0x9a1a,	// (0x000595f4) bg_popup_fep_char_preview_window_g7

0x9a22,	// (0x000595fc) bg_popup_fep_char_preview_window_g8

0x9a2a,	// (0x00059604) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd0,	// (0x0005f9aa) bg_popup_fep_char_preview_window_g

0x1e02,	// (0x000519dc) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1e02,	// (0x000519dc) cell_vkb2_top_candi_pane_g1

0x1e10,	// (0x000519ea) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1e10,	// (0x000519ea) cell_vkb2_top_candi_pane_g2

0x94be,	// (0x00059098) cell_vkb2_top_candi_pane_g3_ParamLimits

0x94be,	// (0x00059098) cell_vkb2_top_candi_pane_g3

0x26b1,	// (0x0005228b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x26b1,	// (0x0005228b) cell_vkb2_top_candi_pane_g4

0x7d36,	// (0x00057910) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7d36,	// (0x00057910) cell_vkb2_top_candi_pane_g5

0x26d2,	// (0x000522ac) cell_vkb2_top_candi_pane_g6_ParamLimits

0x26d2,	// (0x000522ac) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde3,	// (0x0005f9bd) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde3,	// (0x0005f9bd) cell_vkb2_top_candi_pane_g

0x26e0,	// (0x000522ba) cell_vkb2_top_candi_pane_t1

0x17d0,	// (0x000513aa) aid_size_touch_slider_mark_ParamLimits

0x17d0,	// (0x000513aa) aid_size_touch_slider_mark

0xebcd,	// (0x0005e7a7) grid_graphic2_catg_pane_ParamLimits

0xebcd,	// (0x0005e7a7) grid_graphic2_catg_pane

0xec89,	// (0x0005e863) popup_grid_graphic2_window_t1_ParamLimits

0xec89,	// (0x0005e863) popup_grid_graphic2_window_t1

0xec9f,	// (0x0005e879) popup_grid_graphic2_window_t2_ParamLimits

0xec9f,	// (0x0005e879) popup_grid_graphic2_window_t2

0x0001,

0xfd9e,	// (0x0005f978) popup_grid_graphic2_window_t_ParamLimits

0xfd9e,	// (0x0005f978) popup_grid_graphic2_window_t

0x2f0b,	// (0x00052ae5) bg_button_pane_cp05_ParamLimits

0xee18,	// (0x0005e9f2) cell_graphic2_control_pane_g1_ParamLimits

0xef06,	// (0x0005eae0) cell_graphic2_catg_pane_ParamLimits

0xef06,	// (0x0005eae0) cell_graphic2_catg_pane

0x2b8e,	// (0x00052768) bg_button_pane_cp12

0xef18,	// (0x0005eaf2) cell_graphic2_catg_pane_g1

0x8f40,	// (0x00058b1a) cell_tb_ext_pane_t1_ParamLimits

0x249b,	// (0x00052075) vkb2_top_cell_right_narrow_pane_ParamLimits

0x249b,	// (0x00052075) vkb2_top_cell_right_narrow_pane

0x24b3,	// (0x0005208d) vkb2_top_cell_right_wide_pane_ParamLimits

0x24b3,	// (0x0005208d) vkb2_top_cell_right_wide_pane

0x1b9d,	// (0x00051777) bg_vkb2_func_pane_ParamLimits

0x1b9d,	// (0x00051777) bg_vkb2_func_pane

0x2524,	// (0x000520fe) vkb2_top_cell_left_pane_g1_ParamLimits

0x1b9d,	// (0x00051777) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1b9d,	// (0x00051777) bg_vkb2_fuc_pane_cp03

0x2582,	// (0x0005215c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x50ba,	// (0x00054c94) bg_vkb2_func_pane_g1

0x50c2,	// (0x00054c9c) bg_vkb2_func_pane_g2

0x50d2,	// (0x00054cac) bg_vkb2_func_pane_g3

0x50ca,	// (0x00054ca4) bg_vkb2_func_pane_g4

0x50da,	// (0x00054cb4) bg_vkb2_func_pane_g5

0x50e2,	// (0x00054cbc) bg_vkb2_func_pane_g6

0x50ea,	// (0x00054cc4) bg_vkb2_func_pane_g7

0x50f2,	// (0x00054ccc) bg_vkb2_func_pane_g8

0x50b2,	// (0x00054c8c) bg_vkb2_func_pane_g9

0x0008,

0xfdf0,	// (0x0005f9ca) bg_vkb2_func_pane_g

0x1b9d,	// (0x00051777) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1b9d,	// (0x00051777) bg_vkb2_fuc_pane_cp01

0x2524,	// (0x000520fe) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2524,	// (0x000520fe) vkb2_top_cell_right_wide_pane_g1

0x1b9d,	// (0x00051777) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1b9d,	// (0x00051777) bg_vkb2_fuc_pane_cp02

0x2582,	// (0x0005215c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2582,	// (0x0005215c) vkb2_top_cell_right_narrow_pane_g1

0xe444,	// (0x0005e01e) aid_touch_area_decrease_ParamLimits

0xe444,	// (0x0005e01e) aid_touch_area_decrease

0xe478,	// (0x0005e052) aid_touch_area_increase_ParamLimits

0xe478,	// (0x0005e052) aid_touch_area_increase

0xe4a0,	// (0x0005e07a) aid_touch_area_mute_ParamLimits

0xe4a0,	// (0x0005e07a) aid_touch_area_mute

0xe4d0,	// (0x0005e0aa) aid_touch_area_slider_ParamLimits

0xe4d0,	// (0x0005e0aa) aid_touch_area_slider

0xe510,	// (0x0005e0ea) popup_slider_window_g4_ParamLimits

0xe510,	// (0x0005e0ea) popup_slider_window_g4

0xe538,	// (0x0005e112) popup_slider_window_g5_ParamLimits

0xe538,	// (0x0005e112) popup_slider_window_g5

0xe56c,	// (0x0005e146) popup_slider_window_g6_ParamLimits

0xe56c,	// (0x0005e146) popup_slider_window_g6

0x8d1e,	// (0x000588f8) popup_slider_window_t2_ParamLimits

0x8d1e,	// (0x000588f8) popup_slider_window_t2

0x0001,

0xfcec,	// (0x0005f8c6) popup_slider_window_t_ParamLimits

0xfcec,	// (0x0005f8c6) popup_slider_window_t

0xe588,	// (0x0005e162) slider_pane_ParamLimits

0xe588,	// (0x0005e162) slider_pane

0x9a4d,	// (0x00059627) slider_pane_g1_ParamLimits

0x9a4d,	// (0x00059627) slider_pane_g1

0x9a61,	// (0x0005963b) slider_pane_g2_ParamLimits

0x9a61,	// (0x0005963b) slider_pane_g2

0x9a77,	// (0x00059651) slider_pane_g3_ParamLimits

0x9a77,	// (0x00059651) slider_pane_g3

0x0003,

0xfe03,	// (0x0005f9dd) slider_pane_g_ParamLimits

0xfe03,	// (0x0005f9dd) slider_pane_g

0xc390,	// (0x0005bf6a) popup_tb_float_extension_window_ParamLimits

0xc390,	// (0x0005bf6a) popup_tb_float_extension_window

0x9aa3,	// (0x0005967d) aid_size_cell_tb_float_ext

0x2b8e,	// (0x00052768) bg_popup_sub_window_cp28

0x9aaf,	// (0x00059689) grid_tb_float_ext_pane

0x9ab9,	// (0x00059693) cell_tb_float_ext_pane_ParamLimits

0x9ab9,	// (0x00059693) cell_tb_float_ext_pane

0x9ad3,	// (0x000596ad) cell_tb_float_ext_pane_g1

0x9adc,	// (0x000596b6) grid_highlight_pane_cp12

0xc546,	// (0x0005c120) cell_last_hwr_side_pane_ParamLimits

0xc546,	// (0x0005c120) cell_last_hwr_side_pane

0x766b,	// (0x00057245) cell_last_hwr_side_pane_g1

0x9ae5,	// (0x000596bf) cell_last_hwr_side_pane_g2

0x0001,

0xfe0c,	// (0x0005f9e6) cell_last_hwr_side_pane_g

0xc9e7,	// (0x0005c5c1) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc9e7,	// (0x0005c5c1) vkb2_area_bottom_space_btn_pane

0x1e02,	// (0x000519dc) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x95b9,	// (0x00059193) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x26e0,	// (0x000522ba) cell_vkb2_top_candi_pane_t1_ParamLimits

0x26ff,	// (0x000522d9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x26ff,	// (0x000522d9) vkb2_area_bottom_space_btn_pane_g1

0x2739,	// (0x00052313) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2739,	// (0x00052313) vkb2_area_bottom_space_btn_pane_g2

0x276f,	// (0x00052349) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x276f,	// (0x00052349) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe11,	// (0x0005f9eb) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe11,	// (0x0005f9eb) vkb2_area_bottom_space_btn_pane_g

0x1c60,	// (0x0005183a) cel_fep_hwr_func_pane_ParamLimits

0x1c60,	// (0x0005183a) cel_fep_hwr_func_pane

0xc51b,	// (0x0005c0f5) cell_hwr_side_button_pane_ParamLimits

0xc51b,	// (0x0005c0f5) cell_hwr_side_button_pane

0x8f74,	// (0x00058b4e) aid_area_touch_clock_ParamLimits

0x2f0b,	// (0x00052ae5) bg_uniindi_top_pane_ParamLimits

0x8f86,	// (0x00058b60) uniindi_top_pane_g1_ParamLimits

0x8f9c,	// (0x00058b76) uniindi_top_pane_g2_ParamLimits

0x8fa8,	// (0x00058b82) uniindi_top_pane_g3_ParamLimits

0x8fb9,	// (0x00058b93) uniindi_top_pane_g4_ParamLimits

0xfd24,	// (0x0005f8fe) uniindi_top_pane_g_ParamLimits

0x8fc6,	// (0x00058ba0) uniindi_top_pane_t1_ParamLimits

0x2f0b,	// (0x00052ae5) bg_vkb2_func_pane_cp01_ParamLimits

0x2f0b,	// (0x00052ae5) bg_vkb2_func_pane_cp01

0x9aee,	// (0x000596c8) cel_fep_hwr_func_pane_g1_ParamLimits

0x9aee,	// (0x000596c8) cel_fep_hwr_func_pane_g1

0x2f0b,	// (0x00052ae5) bg_vkb2_func_pane_cp02_ParamLimits

0x2f0b,	// (0x00052ae5) bg_vkb2_func_pane_cp02

0x9aee,	// (0x000596c8) cell_hwr_side_button_pane_g1_ParamLimits

0x9aee,	// (0x000596c8) cell_hwr_side_button_pane_g1

0x4f33,	// (0x00054b0d) status_pane_g4_ParamLimits

0x4f33,	// (0x00054b0d) status_pane_g4

0x4f4d,	// (0x00054b27) status_pane_t1

0x73a5,	// (0x00056f7f) form2_midp_gauge_slider_cont_pane

0x73ad,	// (0x00056f87) form2_midp_gauge_slider_pane_t1_ParamLimits

0xddfb,	// (0x0005d9d5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xde0d,	// (0x0005d9e7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0005f6be) form2_midp_gauge_slider_pane_t_ParamLimits

0x73e3,	// (0x00056fbd) form2_midp_slider_pane_ParamLimits

0x20b9,	// (0x00051c93) aid_size_cell_func_vkb2_ParamLimits

0x20b9,	// (0x00051c93) aid_size_cell_func_vkb2

0x9a8f,	// (0x00059669) slider_pane_g4_ParamLimits

0x9a8f,	// (0x00059669) slider_pane_g4

0xca48,	// (0x0005c622) form2_midp_gauge_slider_pane_t2_cp01

0xca56,	// (0x0005c630) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xca56,	// (0x0005c630) form2_midp_gauge_slider_pane_t3_cp01

0x27e4,	// (0x000523be) form2_midp_slider_pane_cp01

0x2b8e,	// (0x00052768) navi_smil_pane

0x9b27,	// (0x00059701) navi_smil_pane_g1

0x9b2f,	// (0x00059709) navi_smil_pane_t1

0x9afc,	// (0x000596d6) form2_midp_slider_pane_g1

0x9b05,	// (0x000596df) form2_midp_slider_pane_g2

0x9b0d,	// (0x000596e7) form2_midp_slider_pane_g3

0x9afc,	// (0x000596d6) form2_midp_slider_pane_g4

0xef21,	// (0x0005eafb) form2_midp_slider_pane_g5

0x0004,

0xfe1a,	// (0x0005f9f4) form2_midp_slider_pane_g

0x27a9,	// (0x00052383) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x27a9,	// (0x00052383) vkb2_area_bottom_space_btn_pane_g4

0xd47d,	// (0x0005d057) lc0_navi_pane_ParamLimits

0xd47d,	// (0x0005d057) lc0_navi_pane

0xd4e7,	// (0x0005d0c1) lc0_stat_indi_pane_ParamLimits

0xd4e7,	// (0x0005d0c1) lc0_stat_indi_pane

0xd4fc,	// (0x0005d0d6) ls0_title_pane_ParamLimits

0xd4fc,	// (0x0005d0d6) ls0_title_pane

0x3bd4,	// (0x000537ae) bg_popup_sub_pane_cp14_ParamLimits

0x8f5b,	// (0x00058b35) list_uniindi_pane_ParamLimits

0x8f67,	// (0x00058b41) uniindi_top_pane_ParamLimits

0x9003,	// (0x00058bdd) list_single_uniindi_pane_g1_ParamLimits

0x9016,	// (0x00058bf0) list_single_uniindi_pane_t1_ParamLimits

0xca73,	// (0x0005c64d) lc0_stat_clock_pane_ParamLimits

0xca73,	// (0x0005c64d) lc0_stat_clock_pane

0xef2c,	// (0x0005eb06) lc0_stat_indi_pane_g1_ParamLimits

0xef2c,	// (0x0005eb06) lc0_stat_indi_pane_g1

0xef39,	// (0x0005eb13) lc0_stat_indi_pane_g2_ParamLimits

0xef39,	// (0x0005eb13) lc0_stat_indi_pane_g2

0x0001,

0xfe25,	// (0x0005f9ff) lc0_stat_indi_pane_g_ParamLimits

0xfe25,	// (0x0005f9ff) lc0_stat_indi_pane_g

0xca80,	// (0x0005c65a) lc0_uni_indicator_pane_ParamLimits

0xca80,	// (0x0005c65a) lc0_uni_indicator_pane

0xef46,	// (0x0005eb20) ls0_title_pane_g1_ParamLimits

0xef46,	// (0x0005eb20) ls0_title_pane_g1

0xef5a,	// (0x0005eb34) ls0_title_pane_t1_ParamLimits

0xef5a,	// (0x0005eb34) ls0_title_pane_t1

0xca8d,	// (0x0005c667) lc0_uni_indicator_pane_g1_ParamLimits

0xca8d,	// (0x0005c667) lc0_uni_indicator_pane_g1

0x9ba1,	// (0x0005977b) lc0_stat_clock_pane_t1

0xf43b,	// (0x0005f015) main_ai5_pane

0x9baf,	// (0x00059789) ai5_sk_pane_ParamLimits

0x9baf,	// (0x00059789) ai5_sk_pane

0xef88,	// (0x0005eb62) cell_ai5_widget_pane_ParamLimits

0xef88,	// (0x0005eb62) cell_ai5_widget_pane

0x9c72,	// (0x0005984c) aid_size_cell_widget_grid

0x9c88,	// (0x00059862) bg_ai5_widget_pane_ParamLimits

0x9c88,	// (0x00059862) bg_ai5_widget_pane

0x9cfc,	// (0x000598d6) cell_ai5_widget_pane_g2

0x9d0c,	// (0x000598e6) cell_ai5_widget_pane_g3

0x9d23,	// (0x000598fd) cell_ai5_widget_pane_g4

0x9d2f,	// (0x00059909) cell_ai5_widget_pane_g5

0x9d3b,	// (0x00059915) cell_ai5_widget_pane_g6

0x9d47,	// (0x00059921) cell_ai5_widget_pane_g7

0x9d8f,	// (0x00059969) cell_ai5_widget_pane_t1_ParamLimits

0x9d8f,	// (0x00059969) cell_ai5_widget_pane_t1

0x9dac,	// (0x00059986) cell_ai5_widget_pane_t2_ParamLimits

0x9dac,	// (0x00059986) cell_ai5_widget_pane_t2

0x9dc4,	// (0x0005999e) cell_ai5_widget_pane_t3_ParamLimits

0x9dc4,	// (0x0005999e) cell_ai5_widget_pane_t3

0x9ddc,	// (0x000599b6) cell_ai5_widget_pane_t4_ParamLimits

0x9ddc,	// (0x000599b6) cell_ai5_widget_pane_t4

0x9df9,	// (0x000599d3) cell_ai5_widget_pane_t5_ParamLimits

0x9df9,	// (0x000599d3) cell_ai5_widget_pane_t5

0x9e18,	// (0x000599f2) cell_ai5_widget_pane_t6_ParamLimits

0x9e18,	// (0x000599f2) cell_ai5_widget_pane_t6

0x9e2a,	// (0x00059a04) cell_ai5_widget_pane_t7_ParamLimits

0x9e2a,	// (0x00059a04) cell_ai5_widget_pane_t7

0x9e43,	// (0x00059a1d) cell_ai5_widget_pane_t8_ParamLimits

0x9e43,	// (0x00059a1d) cell_ai5_widget_pane_t8

0x0009,

0xfe3f,	// (0x0005fa19) cell_ai5_widget_pane_t_ParamLimits

0xfe3f,	// (0x0005fa19) cell_ai5_widget_pane_t

0x9e97,	// (0x00059a71) grid_ai5_widget_pane

0x3bd4,	// (0x000537ae) highlight_cell_ai5_widget_pane_ParamLimits

0x3bd4,	// (0x000537ae) highlight_cell_ai5_widget_pane

0xf00b,	// (0x0005ebe5) ai5_sk_left_pane

0xf015,	// (0x0005ebef) ai5_sk_middle_pane

0xf01f,	// (0x0005ebf9) ai5_sk_right_pane

0x9ecc,	// (0x00059aa6) bg_ai5_widget_pane_g1_ParamLimits

0x9ecc,	// (0x00059aa6) bg_ai5_widget_pane_g1

0x9ed8,	// (0x00059ab2) bg_ai5_widget_pane_g2_ParamLimits

0x9ed8,	// (0x00059ab2) bg_ai5_widget_pane_g2

0x9ee4,	// (0x00059abe) bg_ai5_widget_pane_g3_ParamLimits

0x9ee4,	// (0x00059abe) bg_ai5_widget_pane_g3

0x9ef0,	// (0x00059aca) bg_ai5_widget_pane_g4_ParamLimits

0x9ef0,	// (0x00059aca) bg_ai5_widget_pane_g4

0x9efc,	// (0x00059ad6) bg_ai5_widget_pane_g5_ParamLimits

0x9efc,	// (0x00059ad6) bg_ai5_widget_pane_g5

0x9f08,	// (0x00059ae2) bg_ai5_widget_pane_g6_ParamLimits

0x9f08,	// (0x00059ae2) bg_ai5_widget_pane_g6

0x9f14,	// (0x00059aee) bg_ai5_widget_pane_g7_ParamLimits

0x9f14,	// (0x00059aee) bg_ai5_widget_pane_g7

0x9f20,	// (0x00059afa) bg_ai5_widget_pane_g8_ParamLimits

0x9f20,	// (0x00059afa) bg_ai5_widget_pane_g8

0x9f2c,	// (0x00059b06) bg_ai5_widget_pane_g9_ParamLimits

0x9f2c,	// (0x00059b06) bg_ai5_widget_pane_g9

0x0008,

0xfe54,	// (0x0005fa2e) bg_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0005fa2e) bg_ai5_widget_pane_g

0x9f5e,	// (0x00059b38) cell_shortcut_ai5_widget_pane_ParamLimits

0x9f5e,	// (0x00059b38) cell_shortcut_ai5_widget_pane

0x485e,	// (0x00054438) bg_cell_shortcut_ai5_widget_pane

0x9f6f,	// (0x00059b49) cell_grid_ai5_widget_pane_g1

0x485e,	// (0x00054438) highlight_cell_shortcut_ai5_widget_pane

0x50ba,	// (0x00054c94) ai5_sk_left_pane_g1

0x9f78,	// (0x00059b52) ai5_sk_left_pane_g2

0x9f80,	// (0x00059b5a) ai5_sk_left_pane_g3

0x9f88,	// (0x00059b62) ai5_sk_left_pane_g4

0x0003,

0xfe67,	// (0x0005fa41) ai5_sk_left_pane_g

0x9f90,	// (0x00059b6a) ai5_sk_left_pane_t1

0x50c2,	// (0x00054c9c) ai5_sk_right_pane_g1

0x9f9e,	// (0x00059b78) ai5_sk_right_pane_g2

0x9fa6,	// (0x00059b80) ai5_sk_right_pane_g3

0x9fae,	// (0x00059b88) ai5_sk_right_pane_g4

0x0003,

0xfe70,	// (0x0005fa4a) ai5_sk_right_pane_g

0x9fb6,	// (0x00059b90) ai5_sk_right_pane_t1

0x50c2,	// (0x00054c9c) ai5_sk_middle_pane_g1

0x50ba,	// (0x00054c94) ai5_sk_middle_pane_g2

0x50da,	// (0x00054cb4) ai5_sk_middle_pane_g3

0x9fa6,	// (0x00059b80) ai5_sk_middle_pane_g4

0x9f80,	// (0x00059b5a) ai5_sk_middle_pane_g5

0x9fc4,	// (0x00059b9e) ai5_sk_middle_pane_g6

0xf029,	// (0x0005ec03) ai5_sk_middle_pane_g7

0x0006,

0xfe79,	// (0x0005fa53) ai5_sk_middle_pane_g

0xd369,	// (0x0005cf43) aid_touch_area_size_lc0_ParamLimits

0xd369,	// (0x0005cf43) aid_touch_area_size_lc0

0x1e31,	// (0x00051a0b) cell_hwr_candidate_pane_t1_ParamLimits

0x4bfe,	// (0x000547d8) aid_touch_navi_pane

0xd5f5,	// (0x0005d1cf) status_dt_navi_pane_ParamLimits

0xd5f5,	// (0x0005d1cf) status_dt_navi_pane

0xd60d,	// (0x0005d1e7) status_dt_sta_pane_ParamLimits

0xd60d,	// (0x0005d1e7) status_dt_sta_pane

0xf031,	// (0x0005ec0b) dt_sta_controll_pane

0xf03e,	// (0x0005ec18) dt_sta_indi_pane

0xf04b,	// (0x0005ec25) dt_sta_title_pane

0x2f0b,	// (0x00052ae5) bg_dt_sta_indi_pane_ParamLimits

0x2f0b,	// (0x00052ae5) bg_dt_sta_indi_pane

0xf05d,	// (0x0005ec37) dt_sta_battery_pane

0xf065,	// (0x0005ec3f) dt_sta_indi_pane_g1

0xa016,	// (0x00059bf0) dt_sta_indi_pane_g2

0xa01f,	// (0x00059bf9) dt_sta_indi_pane_g3

0x0002,

0xfe88,	// (0x0005fa62) dt_sta_indi_pane_g

0xa028,	// (0x00059c02) dt_sta_signal_pane

0x3bd4,	// (0x000537ae) bg_dt_sta_title_pane_ParamLimits

0x3bd4,	// (0x000537ae) bg_dt_sta_title_pane

0xa031,	// (0x00059c0b) dt_sta_title_pane_g1

0xa039,	// (0x00059c13) dt_sta_title_pane_t1_ParamLimits

0xa039,	// (0x00059c13) dt_sta_title_pane_t1

0x2b8e,	// (0x00052768) bg_dt_sta_control_pane

0xf06e,	// (0x0005ec48) dt_sta_controll_pane_g1

0xa057,	// (0x00059c31) bg_dt_sta_title_pane_g1

0xa060,	// (0x00059c3a) bg_dt_sta_title_pane_g2

0xa069,	// (0x00059c43) bg_dt_sta_title_pane_g3

0x0002,

0xfe8f,	// (0x0005fa69) bg_dt_sta_title_pane_g

0x766b,	// (0x00057245) bg_dt_sta_indi_pane_g1

0xa072,	// (0x00059c4c) dt_sta_signal_pane_g1

0xa07a,	// (0x00059c54) dt_sta_signal_pane_g2

0x0001,

0xfe96,	// (0x0005fa70) dt_sta_signal_pane_g

0xa082,	// (0x00059c5c) dt_sta_battery_pane_g1

0xa08b,	// (0x00059c65) dt_sta_battery_pane_t1

0x766b,	// (0x00057245) bg_dt_sta_control_pane_g1

0x435d,	// (0x00053f37) fep_china_uni_eep_pane

0x4365,	// (0x00053f3f) fep_china_uni_entry_pane_ParamLimits

0x4375,	// (0x00053f4f) popup_fep_china_uni_window_g1_ParamLimits

0x4385,	// (0x00053f5f) popup_fep_china_uni_window_g2_ParamLimits

0x4385,	// (0x00053f5f) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005f2fc) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005f2fc) popup_fep_china_uni_window_g

0xa09a,	// (0x00059c74) fep_china_uni_eep_pane_g1

0xa0a2,	// (0x00059c7c) fep_china_uni_eep_pane_t1

0x9b1e,	// (0x000596f8) aid_touch_area_size_smil_player

0x4d4e,	// (0x00054928) lc0_clock_pane

0x4f41,	// (0x00054b1b) status_pane_g5_ParamLimits

0x4f41,	// (0x00054b1b) status_pane_g5

0xbf12,	// (0x0005baec) popup_keymap_window

0x4eff,	// (0x00054ad9) status_icon_pane

0x9d0c,	// (0x000598e6) cell_ai5_widget_pane_g3_ParamLimits

0x9d23,	// (0x000598fd) cell_ai5_widget_pane_g4_ParamLimits

0x9d2f,	// (0x00059909) cell_ai5_widget_pane_g5_ParamLimits

0x9d53,	// (0x0005992d) cell_ai5_widget_pane_g8_ParamLimits

0x9d53,	// (0x0005992d) cell_ai5_widget_pane_g8

0x9d67,	// (0x00059941) cell_ai5_widget_pane_g9_ParamLimits

0x9d67,	// (0x00059941) cell_ai5_widget_pane_g9

0x9d7b,	// (0x00059955) cell_ai5_widget_pane_g10_ParamLimits

0x9d7b,	// (0x00059955) cell_ai5_widget_pane_g10

0xa0b1,	// (0x00059c8b) status_icon_pane_g1

0x2b8e,	// (0x00052768) bg_popup_sub_pane_cp13

0xa0b9,	// (0x00059c93) popup_keymap_window_t1

0xd2f7,	// (0x0005ced1) control_pane_g6_ParamLimits

0xd2f7,	// (0x0005ced1) control_pane_g6

0xd304,	// (0x0005cede) control_pane_g7_ParamLimits

0xd304,	// (0x0005cede) control_pane_g7

0xd311,	// (0x0005ceeb) control_pane_g8_ParamLimits

0xd311,	// (0x0005ceeb) control_pane_g8

0xf031,	// (0x0005ec0b) dt_sta_controll_pane_ParamLimits

0xf03e,	// (0x0005ec18) dt_sta_indi_pane_ParamLimits

0xf04b,	// (0x0005ec25) dt_sta_title_pane_ParamLimits

0x3b00,	// (0x000536da) aid_size_touch_scroll_bar_cale

0xf514,	// (0x0005f0ee) popup_discreet_window_ParamLimits

0xf514,	// (0x0005f0ee) popup_discreet_window

0xb423,	// (0x0005affd) popup_sk_window

0x572b,	// (0x00055305) bg_popup_sub_pane_cp28_ParamLimits

0x572b,	// (0x00055305) bg_popup_sub_pane_cp28

0xa0c7,	// (0x00059ca1) popup_discreet_window_g1_ParamLimits

0xa0c7,	// (0x00059ca1) popup_discreet_window_g1

0xa0e7,	// (0x00059cc1) popup_discreet_window_t1_ParamLimits

0xa0e7,	// (0x00059cc1) popup_discreet_window_t1

0xa105,	// (0x00059cdf) popup_discreet_window_t2_ParamLimits

0xa105,	// (0x00059cdf) popup_discreet_window_t2

0x0002,

0xfe9b,	// (0x0005fa75) popup_discreet_window_t_ParamLimits

0xfe9b,	// (0x0005fa75) popup_discreet_window_t

0x281b,	// (0x000523f5) popup_sk_window_g1

0x2825,	// (0x000523ff) popup_sk_window_g2

0x0001,

0xfea2,	// (0x0005fa7c) popup_sk_window_g

0x282f,	// (0x00052409) popup_sk_window_t1

0x283d,	// (0x00052417) popup_sk_window_t1_copy1

0x9cfc,	// (0x000598d6) cell_ai5_widget_pane_g2_ParamLimits

0x9e55,	// (0x00059a2f) cell_ai5_widget_pane_t9_ParamLimits

0x9e55,	// (0x00059a2f) cell_ai5_widget_pane_t9

0x2b8e,	// (0x00052768) main_fep_fshwr2_pane

0xcab4,	// (0x0005c68e) aid_fshwr2_btn_pane

0xcac5,	// (0x0005c69f) aid_fshwr2_syb_pane

0xcad6,	// (0x0005c6b0) aid_fshwr2_txt_pane

0xcae2,	// (0x0005c6bc) fshwr2_func_candi_pane

0xcb01,	// (0x0005c6db) fshwr2_hwr_syb_pane

0xcb1c,	// (0x0005c6f6) fshwr2_icf_pane

0xf43b,	// (0x0005f015) fshwr2_icf_bg_pane

0x28bd,	// (0x00052497) fshwr2_icf_pane_t1_ParamLimits

0x28bd,	// (0x00052497) fshwr2_icf_pane_t1

0x424b,	// (0x00053e25) fshwr2_func_candi_pane_g1

0xf077,	// (0x0005ec51) fshwr2_func_candi_row_pane_ParamLimits

0xf077,	// (0x0005ec51) fshwr2_func_candi_row_pane

0xcb48,	// (0x0005c722) cell_fshwr2_syb_pane_ParamLimits

0xcb48,	// (0x0005c722) cell_fshwr2_syb_pane

0x1e02,	// (0x000519dc) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1e02,	// (0x000519dc) fshwr2_hwr_syb_pane_g1

0xf43b,	// (0x0005f015) bg_popup_call_pane_cp01

0xcb5e,	// (0x0005c738) fshwr2_func_candi_cell_pane_ParamLimits

0xcb5e,	// (0x0005c738) fshwr2_func_candi_cell_pane

0xf09a,	// (0x0005ec74) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf09a,	// (0x0005ec74) fshwr2_func_candi_cell_bg_pane

0xcba9,	// (0x0005c783) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcba9,	// (0x0005c783) fshwr2_func_candi_cell_pane_g1

0xcbe0,	// (0x0005c7ba) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcbe0,	// (0x0005c7ba) fshwr2_func_candi_cell_pane_t1

0xf43b,	// (0x0005f015) bg_button_pane_cp08

0xa173,	// (0x00059d4d) cell_fshwr2_syb_bg_pane

0xcbfb,	// (0x0005c7d5) cell_fshwr2_syb_bg_pane_g1

0xcc03,	// (0x0005c7dd) cell_fshwr2_syb_bg_pane_t1

0x3bd4,	// (0x000537ae) main_tmo_pane

0xd973,	// (0x0005d54d) uni_indicator_pane_g1_ParamLimits

0xd989,	// (0x0005d563) uni_indicator_pane_g2_ParamLimits

0xd99f,	// (0x0005d579) uni_indicator_pane_g3_ParamLimits

0x627a,	// (0x00055e54) uni_indicator_pane_g4_ParamLimits

0x627a,	// (0x00055e54) uni_indicator_pane_g4

0x628e,	// (0x00055e68) uni_indicator_pane_g5_ParamLimits

0x628e,	// (0x00055e68) uni_indicator_pane_g5

0x628e,	// (0x00055e68) uni_indicator_pane_g6_ParamLimits

0x628e,	// (0x00055e68) uni_indicator_pane_g6

0xf921,	// (0x0005f4fb) uni_indicator_pane_g_ParamLimits

0xe420,	// (0x0005dffa) popup_tmo_note_window_ParamLimits

0xe420,	// (0x0005dffa) popup_tmo_note_window

0x209b,	// (0x00051c75) fshwr2_bg_pane

0xcbd1,	// (0x0005c7ab) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcbd1,	// (0x0005c7ab) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea7,	// (0x0005fa81) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea7,	// (0x0005fa81) fshwr2_func_candi_cell_pane_g

0x1dea,	// (0x000519c4) bg_popup_window_pane_cp01

0x2986,	// (0x00052560) bg_popup_window_pane_g1_cp01

0xa17b,	// (0x00059d55) bg_popup_window_pane_cp22_ParamLimits

0xa17b,	// (0x00059d55) bg_popup_window_pane_cp22

0xa189,	// (0x00059d63) listscroll_tmo_link_pane_ParamLimits

0xa189,	// (0x00059d63) listscroll_tmo_link_pane

0xa1c9,	// (0x00059da3) popup_tmo_note_window_g1_ParamLimits

0xa1c9,	// (0x00059da3) popup_tmo_note_window_g1

0xa1d6,	// (0x00059db0) tmo_note_info_pane_ParamLimits

0xa1d6,	// (0x00059db0) tmo_note_info_pane

0xf0a6,	// (0x0005ec80) list_tmo_note_info_pane_g1_ParamLimits

0xf0a6,	// (0x0005ec80) list_tmo_note_info_pane_g1

0xa207,	// (0x00059de1) list_tmo_note_info_pane_g2_ParamLimits

0xa207,	// (0x00059de1) list_tmo_note_info_pane_g2

0x0001,

0xfeac,	// (0x0005fa86) list_tmo_note_info_pane_g_ParamLimits

0xfeac,	// (0x0005fa86) list_tmo_note_info_pane_g

0xa223,	// (0x00059dfd) list_tmo_note_info_text_pane_ParamLimits

0xa223,	// (0x00059dfd) list_tmo_note_info_text_pane

0xa2a4,	// (0x00059e7e) list_tmo_link_pane

0xa2b1,	// (0x00059e8b) scroll_pane_cp20

0xa2be,	// (0x00059e98) list_single_tmo_link_pane_ParamLimits

0xa2be,	// (0x00059e98) list_single_tmo_link_pane

0xa2ce,	// (0x00059ea8) list_single_tmo_link_pane_t1

0xa2dc,	// (0x00059eb6) list_tmo_note_info_text_pane_t1_ParamLimits

0xa2dc,	// (0x00059eb6) list_tmo_note_info_text_pane_t1

0xcf9b,	// (0x0005cb75) aid_size_touch_scroll_bar_cp01_ParamLimits

0xcf9b,	// (0x0005cb75) aid_size_touch_scroll_bar_cp01

0xba6a,	// (0x0005b644) aid_size_touch_slider_marker

0xb413,	// (0x0005afed) popup_settings_window_ParamLimits

0xb413,	// (0x0005afed) popup_settings_window

0x0e1d,	// (0x000509f7) popup_candi_list_indi_window

0x4bfe,	// (0x000547d8) aid_touch_navi_pane_ParamLimits

0x1ff6,	// (0x00051bd0) rs_clock_indi_pane

0x1fff,	// (0x00051bd9) sctrl_sk_bottom_pane_ParamLimits

0x2010,	// (0x00051bea) sctrl_sk_top_pane_ParamLimits

0x2113,	// (0x00051ced) popup_fep_tooltip_window

0x9c72,	// (0x0005984c) aid_size_cell_widget_grid_ParamLimits

0x9ce7,	// (0x000598c1) cell_ai5_widget_pane_g1_ParamLimits

0x9ce7,	// (0x000598c1) cell_ai5_widget_pane_g1

0x9d3b,	// (0x00059915) cell_ai5_widget_pane_g6_ParamLimits

0x9d47,	// (0x00059921) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2a,	// (0x0005fa04) cell_ai5_widget_pane_g_ParamLimits

0xfe2a,	// (0x0005fa04) cell_ai5_widget_pane_g

0x9e79,	// (0x00059a53) cell_ai5_widget_pane_t10_ParamLimits

0x9e79,	// (0x00059a53) cell_ai5_widget_pane_t10

0x9e97,	// (0x00059a71) grid_ai5_widget_pane_ParamLimits

0x9f38,	// (0x00059b12) cell_contacts_ai5_widget_pane_ParamLimits

0x9f38,	// (0x00059b12) cell_contacts_ai5_widget_pane

0xa11a,	// (0x00059cf4) popup_discreet_window_t3_ParamLimits

0xa11a,	// (0x00059cf4) popup_discreet_window_t3

0xcb34,	// (0x0005c70e) popup_fshwr2_char_preview_window_ParamLimits

0xcb34,	// (0x0005c70e) popup_fshwr2_char_preview_window

0xf0bd,	// (0x0005ec97) tmo_note_info_pane_t1

0xf0d2,	// (0x0005ecac) tmo_note_info_pane_t2

0xf0e9,	// (0x0005ecc3) tmo_note_info_pane_t3

0xa280,	// (0x00059e5a) tmo_note_info_pane_t4

0xa292,	// (0x00059e6c) tmo_note_info_pane_t5

0x0004,

0xfeb1,	// (0x0005fa8b) tmo_note_info_pane_t

0xa2a4,	// (0x00059e7e) list_tmo_link_pane_ParamLimits

0xa2b1,	// (0x00059e8b) scroll_pane_cp20_ParamLimits

0xf43b,	// (0x0005f015) bg_popup_fep_char_preview_window_cp01

0xa2f5,	// (0x00059ecf) popup_fshwr2_char_preview_window_t1

0xa303,	// (0x00059edd) popup_candi_list_indi_window_g1

0xa30c,	// (0x00059ee6) bg_cell_contacts_ai5_widget_pane

0xa318,	// (0x00059ef2) cell_contacts_ai5_widget_pane_g1

0x7d09,	// (0x000578e3) cell_contacts_ai5_widget_pane_g2

0xa32d,	// (0x00059f07) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebc,	// (0x0005fa96) cell_contacts_ai5_widget_pane_g

0xa339,	// (0x00059f13) cell_contacts_ai5_widget_pane_t1

0x3bd4,	// (0x000537ae) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf163,	// (0x0005ed3d) settings_container_pane

0x485e,	// (0x00054438) listscroll_set_pane_copy1

0x6d60,	// (0x0005693a) scroll_pane_cp121_copy1

0xa3bc,	// (0x00059f96) set_content_pane_copy1

0xf16f,	// (0x0005ed49) aid_height_set_list_copy1_ParamLimits

0xf16f,	// (0x0005ed49) aid_height_set_list_copy1

0x6486,	// (0x00056060) aid_size_parent_copy1_ParamLimits

0x6486,	// (0x00056060) aid_size_parent_copy1

0xf17b,	// (0x0005ed55) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf17b,	// (0x0005ed55) button_value_adjust_pane_cp6_copy1

0x4b9c,	// (0x00054776) list_highlight_pane_cp2_copy1_ParamLimits

0x4b9c,	// (0x00054776) list_highlight_pane_cp2_copy1

0xf18f,	// (0x0005ed69) list_set_pane_copy1_ParamLimits

0xf18f,	// (0x0005ed69) list_set_pane_copy1

0xf0fe,	// (0x0005ecd8) main_pane_set_t1_copy1_ParamLimits

0xf0fe,	// (0x0005ecd8) main_pane_set_t1_copy1

0xf138,	// (0x0005ed12) main_pane_set_t2_copy1_ParamLimits

0xf138,	// (0x0005ed12) main_pane_set_t2_copy1

0xf23c,	// (0x0005ee16) main_pane_set_t3_copy1

0xf24a,	// (0x0005ee24) main_pane_set_t4_copy1

0xf157,	// (0x0005ed31) set_content_pane_g1_copy1_ParamLimits

0xf157,	// (0x0005ed31) set_content_pane_g1_copy1

0xf258,	// (0x0005ee32) setting_code_pane_copy1

0xa4b5,	// (0x0005a08f) setting_slider_graphic_pane_copy1

0xa4b5,	// (0x0005a08f) setting_slider_pane_copy1

0xa4b5,	// (0x0005a08f) setting_text_pane_copy1

0xa4b5,	// (0x0005a08f) setting_volume_pane_copy1

0xf258,	// (0x0005ee32) settings_code_pane_cp2_copy1

0xf260,	// (0x0005ee3a) settings_code_pane_cp_copy1_ParamLimits

0xf260,	// (0x0005ee3a) settings_code_pane_cp_copy1

0xcc12,	// (0x0005c7ec) volume_set_pane_copy1

0xf274,	// (0x0005ee4e) volume_set_pane_g10_copy1

0xf27c,	// (0x0005ee56) volume_set_pane_g1_copy1

0xf284,	// (0x0005ee5e) volume_set_pane_g2_copy1

0xf28c,	// (0x0005ee66) volume_set_pane_g3_copy1

0xf294,	// (0x0005ee6e) volume_set_pane_g4_copy1

0xf29c,	// (0x0005ee76) volume_set_pane_g5_copy1

0xf2a4,	// (0x0005ee7e) volume_set_pane_g6_copy1

0xf2ac,	// (0x0005ee86) volume_set_pane_g7_copy1

0xf2b4,	// (0x0005ee8e) volume_set_pane_g8_copy1

0xf2bc,	// (0x0005ee96) volume_set_pane_g9_copy1

0x2c82,	// (0x0005285c) bg_set_opt_pane_cp_copy1_ParamLimits

0x2c82,	// (0x0005285c) bg_set_opt_pane_cp_copy1

0x2997,	// (0x00052571) setting_slider_pane_t1_copy1_ParamLimits

0x2997,	// (0x00052571) setting_slider_pane_t1_copy1

0xcc1a,	// (0x0005c7f4) setting_slider_pane_t2_copy1_ParamLimits

0xcc1a,	// (0x0005c7f4) setting_slider_pane_t2_copy1

0xcc34,	// (0x0005c80e) setting_slider_pane_t3_copy1_ParamLimits

0xcc34,	// (0x0005c80e) setting_slider_pane_t3_copy1

0xcc4c,	// (0x0005c826) slider_set_pane_copy1_ParamLimits

0xcc4c,	// (0x0005c826) slider_set_pane_copy1

0x3c23,	// (0x000537fd) set_opt_bg_pane_g1_copy2

0x3c2b,	// (0x00053805) set_opt_bg_pane_g2_copy2

0xa521,	// (0x0005a0fb) set_opt_bg_pane_g3_copy2

0x3c3b,	// (0x00053815) set_opt_bg_pane_g4_copy2

0x3c43,	// (0x0005381d) set_opt_bg_pane_g5_copy2

0x3c4b,	// (0x00053825) set_opt_bg_pane_g6_copy2

0xf2c4,	// (0x0005ee9e) set_opt_bg_pane_g7_copy2

0xa533,	// (0x0005a10d) set_opt_bg_pane_g8_copy2

0xa53d,	// (0x0005a117) set_opt_bg_pane_g9_copy2

0x29fd,	// (0x000525d7) aid_size_touch_slider_mark_copy1_ParamLimits

0x29fd,	// (0x000525d7) aid_size_touch_slider_mark_copy1

0xa547,	// (0x0005a121) slider_set_pane_g1_copy1

0x2a11,	// (0x000525eb) slider_set_pane_g2_copy1

0x17f0,	// (0x000513ca) slider_set_pane_g3_copy1_ParamLimits

0x17f0,	// (0x000513ca) slider_set_pane_g3_copy1

0x1804,	// (0x000513de) slider_set_pane_g4_copy1_ParamLimits

0x1804,	// (0x000513de) slider_set_pane_g4_copy1

0x181c,	// (0x000513f6) slider_set_pane_g5_copy1_ParamLimits

0x181c,	// (0x000513f6) slider_set_pane_g5_copy1

0x17f0,	// (0x000513ca) slider_set_pane_g6_copy1_ParamLimits

0x17f0,	// (0x000513ca) slider_set_pane_g6_copy1

0xcc62,	// (0x0005c83c) slider_set_pane_g7_copy1_ParamLimits

0xcc62,	// (0x0005c83c) slider_set_pane_g7_copy1

0x2ba2,	// (0x0005277c) bg_set_opt_pane_cp2_copy1

0xa550,	// (0x0005a12a) setting_slider_graphic_pane_g1_copy1

0xf2cc,	// (0x0005eea6) setting_slider_graphic_pane_t1_copy1

0xf2dc,	// (0x0005eeb6) setting_slider_graphic_pane_t2_copy1

0xf2ec,	// (0x0005eec6) slider_set_pane_cp_copy1

0xa589,	// (0x0005a163) input_focus_pane_cp1_copy1

0xa592,	// (0x0005a16c) list_set_text_pane_copy1

0xa59a,	// (0x0005a174) setting_text_pane_g1_copy1

0xcc78,	// (0x0005c852) set_text_pane_t1_copy1

0xa589,	// (0x0005a163) input_focus_pane_cp2_copy1

0xa59a,	// (0x0005a174) setting_code_pane_g1_copy1

0xf2f4,	// (0x0005eece) setting_code_pane_t1_copy1

0x6b8a,	// (0x00056764) list_set_graphic_pane_copy1

0x2ba2,	// (0x0005277c) bg_set_opt_pane_cp4_copy1

0xd172,	// (0x0005cd4c) list_set_graphic_pane_g1_copy1_ParamLimits

0xd172,	// (0x0005cd4c) list_set_graphic_pane_g1_copy1

0xf302,	// (0x0005eedc) list_set_graphic_pane_g2_copy1

0xd18a,	// (0x0005cd64) list_set_graphic_pane_t1_copy1_ParamLimits

0xd18a,	// (0x0005cd64) list_set_graphic_pane_t1_copy1

0x766b,	// (0x00057245) rs_clock_indi_pane_g1

0xa5cb,	// (0x0005a1a5) rs_clock_indi_pane_t1

0xa5d9,	// (0x0005a1b3) rs_indi_pane

0xa5e1,	// (0x0005a1bb) rs_indi_pane_g1

0xa5ea,	// (0x0005a1c4) rs_indi_pane_g2

0xa5f3,	// (0x0005a1cd) rs_indi_pane_g3

0x0002,

0xfec3,	// (0x0005fa9d) rs_indi_pane_g

0x485e,	// (0x00054438) bg_popup_preview_window_pane_cp03

0xa5fc,	// (0x0005a1d6) popup_fep_tooltip_window_t1

0x82f3,	// (0x00057ecd) popup_note2_window_g2_ParamLimits

0x82f3,	// (0x00057ecd) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x0005f836) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x0005f836) popup_note2_window_g

0x87ee,	// (0x000583c8) bg_popup_sub_pane_cp11_ParamLimits

0x87fb,	// (0x000583d5) cell_ai3_links_pane_g1_ParamLimits

0x8812,	// (0x000583ec) cell_ai3_links_pane_t1

0xcc78,	// (0x0005c852) set_text_pane_t1_copy1_ParamLimits

0x476f,	// (0x00054349) cell_graphic_popup_pane_cp2_ParamLimits

0x476f,	// (0x00054349) cell_graphic_popup_pane_cp2

0xa60a,	// (0x0005a1e4) cell_graphic_popup_pane_g1_cp2

0x3913,	// (0x000534ed) cell_graphic_popup_pane_g2_cp2

0xa612,	// (0x0005a1ec) cell_graphic_popup_pane_g3_cp2

0xa61a,	// (0x0005a1f4) cell_graphic_popup_pane_t2_cp2

0x3924,	// (0x000534fe) grid_highlight_pane_cp3_cp2

0x3f68,	// (0x00053b42) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3bd4,	// (0x000537ae) main_tmo_pane_ParamLimits

0xe414,	// (0x0005dfee) popup_tmo_big_image_note_window

0x9cd6,	// (0x000598b0) cell_ai5_widget_list_pane

0x9cde,	// (0x000598b8) cell_ai5_widget_lrg_icon_pane

0xf0bd,	// (0x0005ec97) tmo_note_info_pane_t1_ParamLimits

0xf0d2,	// (0x0005ecac) tmo_note_info_pane_t2_ParamLimits

0xf0e9,	// (0x0005ecc3) tmo_note_info_pane_t3_ParamLimits

0xa280,	// (0x00059e5a) tmo_note_info_pane_t4_ParamLimits

0xa292,	// (0x00059e6c) tmo_note_info_pane_t5_ParamLimits

0xfeb1,	// (0x0005fa8b) tmo_note_info_pane_t_ParamLimits

0xf163,	// (0x0005ed3d) settings_container_pane_ParamLimits

0xa581,	// (0x0005a15b) indicator_popup_pane_cp5

0xa581,	// (0x0005a15b) indicator_popup_pane_cp6

0x6b8a,	// (0x00056764) list_set_graphic_pane_copy1_ParamLimits

0x2b8e,	// (0x00052768) bg_popup_window_pane_cp23

0xa628,	// (0x0005a202) popup_tmo_big_image_note_window_g1

0xa632,	// (0x0005a20c) popup_tmo_big_image_note_window_t1

0xa642,	// (0x0005a21c) popup_tmo_big_image_note_window_t2

0xa652,	// (0x0005a22c) popup_tmo_big_image_note_window_t3

0x0002,

0xfeca,	// (0x0005faa4) popup_tmo_big_image_note_window_t

0x766b,	// (0x00057245) cell_ai5_widget_lrg_icon_pane_g1

0xa662,	// (0x0005a23c) cell_ai5_widget_lrg_icon_pane_t1

0xa670,	// (0x0005a24a) cell_ai5_widget_list_row_pane_ParamLimits

0xa670,	// (0x0005a24a) cell_ai5_widget_list_row_pane

0xa687,	// (0x0005a261) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa687,	// (0x0005a261) cell_ai5_widget_list_row_pane_g1

0xa694,	// (0x0005a26e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa694,	// (0x0005a26e) cell_ai5_widget_list_row_pane_t1

0xa6c5,	// (0x0005a29f) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa6c5,	// (0x0005a29f) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed1,	// (0x0005faab) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed1,	// (0x0005faab) cell_ai5_widget_list_row_pane_t

0xf43b,	// (0x0005f015) main_fep_vtchi_ss_pane

0xa709,	// (0x0005a2e3) popup_fep_char_pre_window

0xa711,	// (0x0005a2eb) popup_fep_ituss_window

0xa732,	// (0x0005a30c) popup_fep_vkbss_window

0xa751,	// (0x0005a32b) grid_vkbss_keypad_pane_ParamLimits

0xa751,	// (0x0005a32b) grid_vkbss_keypad_pane

0xa761,	// (0x0005a33b) ituss_keypad_pane

0x2a3b,	// (0x00052615) aid_vkbss_key_offset_ParamLimits

0x2a3b,	// (0x00052615) aid_vkbss_key_offset

0x2a47,	// (0x00052621) cell_vkbss_key_pane_ParamLimits

0x2a47,	// (0x00052621) cell_vkbss_key_pane

0xa770,	// (0x0005a34a) bg_cell_vkbss_key_g1_ParamLimits

0xa770,	// (0x0005a34a) bg_cell_vkbss_key_g1

0xa77c,	// (0x0005a356) cell_vkbss_key_3p_pane_ParamLimits

0xa77c,	// (0x0005a356) cell_vkbss_key_3p_pane

0xa796,	// (0x0005a370) cell_vkbss_key_g1_ParamLimits

0xa796,	// (0x0005a370) cell_vkbss_key_g1

0xa7b0,	// (0x0005a38a) cell_vkbss_key_t1_ParamLimits

0xa7b0,	// (0x0005a38a) cell_vkbss_key_t1

0x2a5d,	// (0x00052637) cell_ituss_key_pane_ParamLimits

0x2a5d,	// (0x00052637) cell_ituss_key_pane

0xa7db,	// (0x0005a3b5) bg_cell_ituss_key_g1_ParamLimits

0xa7db,	// (0x0005a3b5) bg_cell_ituss_key_g1

0xa7e7,	// (0x0005a3c1) cell_ituss_key_pane_g1_ParamLimits

0xa7e7,	// (0x0005a3c1) cell_ituss_key_pane_g1

0x2a6e,	// (0x00052648) cell_ituss_key_pane_g2_ParamLimits

0x2a6e,	// (0x00052648) cell_ituss_key_pane_g2

0x0002,

0xfed8,	// (0x0005fab2) cell_ituss_key_pane_g_ParamLimits

0xfed8,	// (0x0005fab2) cell_ituss_key_pane_g

0x2a9a,	// (0x00052674) cell_ituss_key_t1_ParamLimits

0x2a9a,	// (0x00052674) cell_ituss_key_t1

0x2ad4,	// (0x000526ae) cell_ituss_key_t2_ParamLimits

0x2ad4,	// (0x000526ae) cell_ituss_key_t2

0x2b05,	// (0x000526df) cell_ituss_key_t3_ParamLimits

0x2b05,	// (0x000526df) cell_ituss_key_t3

0x2ad4,	// (0x000526ae) cell_ituss_key_t4_ParamLimits

0x2ad4,	// (0x000526ae) cell_ituss_key_t4

0x0004,

0xfedf,	// (0x0005fab9) cell_ituss_key_t_ParamLimits

0xfedf,	// (0x0005fab9) cell_ituss_key_t

0xa813,	// (0x0005a3ed) cell_vkbss_key_3p_pane_g1

0xa81b,	// (0x0005a3f5) cell_vkbss_key_3p_pane_g2

0xa823,	// (0x0005a3fd) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0005fac4) cell_vkbss_key_3p_pane_g

0xf43b,	// (0x0005f015) bg_popup_fep_char_preview_window_cp02

0x2b48,	// (0x00052722) popup_fep_char_pre_window_t1

0xf001,	// (0x0005ebdb) main_ai5_sk_pane

0xa30c,	// (0x00059ee6) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa318,	// (0x00059ef2) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7d09,	// (0x000578e3) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa32d,	// (0x00059f07) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebc,	// (0x0005fa96) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa339,	// (0x00059f13) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3bd4,	// (0x000537ae) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf30a,	// (0x0005eee4) main_ai5_sk_pane_g1

0x5564,	// (0x0005513e) popup_query_code_window_g1

0xa727,	// (0x0005a301) popup_fep_vkb_icf_pane

0xa73b,	// (0x0005a315) popup_fep_vtchi_icf_pane

0xa834,	// (0x0005a40e) bg_icf_pane

0xa840,	// (0x0005a41a) list_vkb_icf_pane

0xa84f,	// (0x0005a429) bg_icf_pane_cp01

0xa862,	// (0x0005a43c) vtchi_icf_list_pane

0xa872,	// (0x0005a44c) list_vkb_icf_pane_t1_ParamLimits

0xa872,	// (0x0005a44c) list_vkb_icf_pane_t1

0xa888,	// (0x0005a462) vtchi_icf_list_pane_t1_ParamLimits

0xa888,	// (0x0005a462) vtchi_icf_list_pane_t1

0xa711,	// (0x0005a2eb) popup_fep_ituss_window_ParamLimits

0xa73b,	// (0x0005a315) popup_fep_vtchi_icf_pane_ParamLimits

0xa761,	// (0x0005a33b) ituss_keypad_pane_ParamLimits

0x2a2f,	// (0x00052609) ituss_sks_pane

0xa834,	// (0x0005a40e) bg_icf_pane_ParamLimits

0xa6ed,	// (0x0005a2c7) icf_edit_indi_pane_ParamLimits

0xa6ed,	// (0x0005a2c7) icf_edit_indi_pane

0xa840,	// (0x0005a41a) list_vkb_icf_pane_ParamLimits

0xa84f,	// (0x0005a429) bg_icf_pane_cp01_ParamLimits

0xa6fc,	// (0x0005a2d6) icf_edit_indi_pane_cp01_ParamLimits

0xa6fc,	// (0x0005a2d6) icf_edit_indi_pane_cp01

0xa86a,	// (0x0005a444) vtchi_query_pane

0x78e9,	// (0x000574c3) icf_edit_indi_pane_g1_ParamLimits

0x78e9,	// (0x000574c3) icf_edit_indi_pane_g1

0xa8f9,	// (0x0005a4d3) icf_edit_indi_pane_g2_ParamLimits

0xa8f9,	// (0x0005a4d3) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x0005fadc) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x0005fadc) icf_edit_indi_pane_g

0xa908,	// (0x0005a4e2) icf_edit_indi_pane_t1

0xa8a2,	// (0x0005a47c) bg_input_focus_pane_cp042

0x3af7,	// (0x000536d1) vtchi_button_pane

0xa8ab,	// (0x0005a485) vtchi_query_pane_t1

0xa8b9,	// (0x0005a493) vtchi_query_pane_t2

0xa8c7,	// (0x0005a4a1) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x0005facb) vtchi_query_pane_t

0xf43b,	// (0x0005f015) bg_button_pane_cp13

0xa8d5,	// (0x0005a4af) vtchi_button_pane_g1

0x2b57,	// (0x00052731) ituss_sks_pane_g1

0x2b62,	// (0x0005273c) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x0005fad2) ituss_sks_pane_g

0xa8dd,	// (0x0005a4b7) ituss_sks_pane_t1

0xa8eb,	// (0x0005a4c5) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x0005fad7) ituss_sks_pane_t

0x70da,	// (0x00056cb4) indicator_nsta_pane_cp_g1

0x70e3,	// (0x00056cbd) indicator_nsta_pane_cp_g2

0x70eb,	// (0x00056cc5) indicator_nsta_pane_cp_g3

0x70f3,	// (0x00056ccd) indicator_nsta_pane_cp_g4

0x70fb,	// (0x00056cd5) indicator_nsta_pane_cp_g5

0x70fb,	// (0x00056cd5) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0005f674) indicator_nsta_pane_cp_g

0xedfa,	// (0x0005e9d4) cell_graphic2_pane_t2_ParamLimits

0xedfa,	// (0x0005e9d4) cell_graphic2_pane_t2

0x0001,

0xfdb3,	// (0x0005f98d) cell_graphic2_pane_t_ParamLimits

0xfdb3,	// (0x0005f98d) cell_graphic2_pane_t

0xee30,	// (0x0005ea0a) cell_graphic2_control_pane_t1

0xd146,	// (0x0005cd20) signal_pane_g3_ParamLimits

0xd146,	// (0x0005cd20) signal_pane_g3

0xd15a,	// (0x0005cd34) signal_pane_g4_ParamLimits

0xd15a,	// (0x0005cd34) signal_pane_g4

0xa6d7,	// (0x0005a2b1) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa6d7,	// (0x0005a2b1) cell_ai5_widget_list_row_pane_t3

0xa801,	// (0x0005a3db) cell_ituss_key_pane_t1_ParamLimits

0xa801,	// (0x0005a3db) cell_ituss_key_pane_t1

0x51b7,	// (0x00054d91) form_field_data_wide_pane_vc_t2_ParamLimits

0x51b7,	// (0x00054d91) form_field_data_wide_pane_vc_t2

0x51cb,	// (0x00054da5) form_field_data_wide_pane_vc_t3_ParamLimits

0x51cb,	// (0x00054da5) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0005f3e3) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0005f3e3) form_field_data_wide_pane_vc_t

0x6da2,	// (0x0005697c) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6da2,	// (0x0005697c) form_field_slider_wide_pane_vc_t3

0x6e80,	// (0x00056a5a) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6e80,	// (0x00056a5a) form_field_popup_wide_pane_vc_t2

0x6e97,	// (0x00056a71) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6e97,	// (0x00056a71) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0005f663) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0005f663) form_field_popup_wide_pane_vc_t

0xcab4,	// (0x0005c68e) aid_fshwr2_btn_pane_ParamLimits

0xcac5,	// (0x0005c69f) aid_fshwr2_syb_pane_ParamLimits

0xcad6,	// (0x0005c6b0) aid_fshwr2_txt_pane_ParamLimits

0x209b,	// (0x00051c75) fshwr2_bg_pane_ParamLimits

0xcae2,	// (0x0005c6bc) fshwr2_func_candi_pane_ParamLimits

0xcb01,	// (0x0005c6db) fshwr2_hwr_syb_pane_ParamLimits

0xcb1c,	// (0x0005c6f6) fshwr2_icf_pane_ParamLimits

0x3310,	// (0x00052eea) list_double_graphic_pane_vc_g4_ParamLimits

0x3310,	// (0x00052eea) list_double_graphic_pane_vc_g4

0x2a8e,	// (0x00052668) cell_ituss_key_pane_g3_ParamLimits

0x2a8e,	// (0x00052668) cell_ituss_key_pane_g3

0x2b36,	// (0x00052710) cell_ituss_key_t5_ParamLimits

0x2b36,	// (0x00052710) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
